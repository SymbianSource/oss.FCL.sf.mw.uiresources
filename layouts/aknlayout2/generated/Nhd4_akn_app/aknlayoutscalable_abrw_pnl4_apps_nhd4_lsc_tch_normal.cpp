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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0002406d };

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
0x292c,	// (0x00026999) Screen

0x2938,	// (0x000269a5) application_window

0x29a2,	// (0x00026a0f) area_bottom_pane_ParamLimits

0x29a2,	// (0x00026a0f) area_bottom_pane

0x29ff,	// (0x00026a6c) area_top_pane_ParamLimits

0x29ff,	// (0x00026a6c) area_top_pane

0x2a5c,	// (0x00026ac9) call_video_uplink_pane_ParamLimits

0x2a5c,	// (0x00026ac9) call_video_uplink_pane

0x2a8d,	// (0x00026afa) main_pane_ParamLimits

0x2a8d,	// (0x00026afa) main_pane

0xc2f1,	// (0x0003035e) context_pane

0x6b72,	// (0x0002abdf) navi_pane

0x6b9a,	// (0x0002ac07) popup_cale_events_window_ParamLimits

0x6b9a,	// (0x0002ac07) popup_cale_events_window

0xc304,	// (0x00030371) popup_mup_playback_window

0x6bb2,	// (0x0002ac1f) signal_pane

0x35c2,	// (0x0002762f) main_browser_pane

0x59c0,	// (0x00029a2d) main_burst_pane

0x68d2,	// (0x0002a93f) main_calc_pane

0x59c0,	// (0x00029a2d) main_cale_day_pane

0x35c2,	// (0x0002762f) main_cale_month_pane

0x59c0,	// (0x00029a2d) main_cale_week_pane

0x59c0,	// (0x00029a2d) main_call_pane

0x308a,	// (0x000270f7) main_call_poc_pane

0x59c0,	// (0x00029a2d) main_camera_pane

0x59c0,	// (0x00029a2d) main_chi_dic_pane

0x552f,	// (0x0002959c) main_clock_pane

0x308a,	// (0x000270f7) main_fmradio_pane

0x59c0,	// (0x00029a2d) main_graph_messa_pane

0x308a,	// (0x000270f7) main_help_pane

0x35c2,	// (0x0002762f) main_im_pane

0x32e5,	// (0x00027352) main_image_pane_ParamLimits

0x32e5,	// (0x00027352) main_image_pane

0x308a,	// (0x000270f7) main_location2_pane

0x59c0,	// (0x00029a2d) main_location_pane

0x308a,	// (0x000270f7) main_messa_pane

0x308a,	// (0x000270f7) main_mp2_pane

0x59c0,	// (0x00029a2d) main_mp_pane

0x308a,	// (0x000270f7) main_msg_pane

0x308a,	// (0x000270f7) main_mup_eq_pane

0x308a,	// (0x000270f7) main_mup_pane

0x59c0,	// (0x00029a2d) main_notes_pane

0x308a,	// (0x000270f7) main_pec_pane

0x308a,	// (0x000270f7) main_phob_pane

0x308a,	// (0x000270f7) main_pinb_pane

0x308a,	// (0x000270f7) main_postcard_pane

0x308a,	// (0x000270f7) main_qdial_pane

0x59c0,	// (0x00029a2d) main_skin_pane

0x308a,	// (0x000270f7) main_smil2_pane

0x59c0,	// (0x00029a2d) main_smil_pane

0x59c0,	// (0x00029a2d) main_video_pane

0x59c0,	// (0x00029a2d) main_video_tele_pane

0x32e5,	// (0x00027352) main_viewer_pane_ParamLimits

0x32e5,	// (0x00027352) main_viewer_pane

0x59c0,	// (0x00029a2d) main_vorec_pane

0x6926,	// (0x0002a993) popup_blid_sat_info_window_ParamLimits

0x6926,	// (0x0002a993) popup_blid_sat_info_window

0x697e,	// (0x0002a9eb) popup_dyc_status_message_window_ParamLimits

0x697e,	// (0x0002a9eb) popup_dyc_status_message_window

0x6996,	// (0x0002aa03) popup_grid_large_graphic_window_ParamLimits

0x6996,	// (0x0002aa03) popup_grid_large_graphic_window

0x6a4c,	// (0x0002aab9) popup_loc_request_window_ParamLimits

0x6a4c,	// (0x0002aab9) popup_loc_request_window

0x6b4a,	// (0x0002abb7) popup_wml_address_window_ParamLimits

0x6b4a,	// (0x0002abb7) popup_wml_address_window

0x670c,	// (0x0002a779) call_muted_g1

0x63bc,	// (0x0002a429) popup_call_audio_conf_window_ParamLimits

0x63bc,	// (0x0002a429) popup_call_audio_conf_window

0x6720,	// (0x0002a78d) popup_call_audio_first_window_ParamLimits

0x6720,	// (0x0002a78d) popup_call_audio_first_window

0x6796,	// (0x0002a803) popup_call_audio_in_window_ParamLimits

0x6796,	// (0x0002a803) popup_call_audio_in_window

0x67d2,	// (0x0002a83f) popup_call_audio_out_window_ParamLimits

0x67d2,	// (0x0002a83f) popup_call_audio_out_window

0x680c,	// (0x0002a879) popup_call_audio_second_window_ParamLimits

0x680c,	// (0x0002a879) popup_call_audio_second_window

0x6862,	// (0x0002a8cf) popup_call_audio_wait_window_ParamLimits

0x6862,	// (0x0002a8cf) popup_call_audio_wait_window

0x6897,	// (0x0002a904) popup_number_entry_window_ParamLimits

0x6897,	// (0x0002a904) popup_number_entry_window

0x2c20,	// (0x00026c8d) bg_popup_call_pane_cp05_ParamLimits

0x2c20,	// (0x00026c8d) bg_popup_call_pane_cp05

0x2c40,	// (0x00026cad) popup_number_entry_window_t1

0x2c53,	// (0x00026cc0) popup_number_entry_window_t2

0x2c65,	// (0x00026cd2) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0003319c) popup_number_entry_window_t

0x2cac,	// (0x00026d19) text_title_cp2

0x2cbf,	// (0x00026d2c) bg_popup_call_pane_cp_ParamLimits

0x2cbf,	// (0x00026d2c) bg_popup_call_pane_cp

0x2ccd,	// (0x00026d3a) call_thumbnail_pane

0x2cd5,	// (0x00026d42) popup_call_audio_in_window_g1_ParamLimits

0x2cd5,	// (0x00026d42) popup_call_audio_in_window_g1

0x2ce1,	// (0x00026d4e) popup_call_audio_in_window_g2_ParamLimits

0x2ce1,	// (0x00026d4e) popup_call_audio_in_window_g2

0x2ced,	// (0x00026d5a) popup_call_audio_in_window_g3_ParamLimits

0x2ced,	// (0x00026d5a) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x000331a5) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x000331a5) popup_call_audio_in_window_g

0x2cf9,	// (0x00026d66) popup_call_audio_in_window_t1_ParamLimits

0x2cf9,	// (0x00026d66) popup_call_audio_in_window_t1

0x2d14,	// (0x00026d81) popup_call_audio_in_window_t2_ParamLimits

0x2d14,	// (0x00026d81) popup_call_audio_in_window_t2

0x2d2f,	// (0x00026d9c) popup_call_audio_in_window_t3_ParamLimits

0x2d2f,	// (0x00026d9c) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x000331ac) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x000331ac) popup_call_audio_in_window_t

0x2cbf,	// (0x00026d2c) bg_popup_call_pane_cp01_ParamLimits

0x2cbf,	// (0x00026d2c) bg_popup_call_pane_cp01

0x2ccd,	// (0x00026d3a) call_thumbnail_pane_cp02

0x2d42,	// (0x00026daf) call_type_pane_cp022

0x2d4a,	// (0x00026db7) popup_call_audio_out_window_g1_ParamLimits

0x2d4a,	// (0x00026db7) popup_call_audio_out_window_g1

0x2d5c,	// (0x00026dc9) popup_call_audio_out_window_g2_ParamLimits

0x2d5c,	// (0x00026dc9) popup_call_audio_out_window_g2

0x2d68,	// (0x00026dd5) popup_call_audio_out_window_g3_ParamLimits

0x2d68,	// (0x00026dd5) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x000331b3) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x000331b3) popup_call_audio_out_window_g

0x2d7a,	// (0x00026de7) popup_call_audio_out_window_t1_ParamLimits

0x2d7a,	// (0x00026de7) popup_call_audio_out_window_t1

0x2d92,	// (0x00026dff) popup_call_audio_out_window_t2_ParamLimits

0x2d92,	// (0x00026dff) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x000331ba) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x000331ba) popup_call_audio_out_window_t

0x2da7,	// (0x00026e14) bg_popup_call_pane_ParamLimits

0x2da7,	// (0x00026e14) bg_popup_call_pane

0x2e2b,	// (0x00026e98) call_thumbnail_pane_cp_ParamLimits

0x2e2b,	// (0x00026e98) call_thumbnail_pane_cp

0x2e4f,	// (0x00026ebc) call_type_pane_cp01_ParamLimits

0x2e4f,	// (0x00026ebc) call_type_pane_cp01

0x2e93,	// (0x00026f00) popup_call_audio_first_window_g1_ParamLimits

0x2e93,	// (0x00026f00) popup_call_audio_first_window_g1

0x2edf,	// (0x00026f4c) popup_call_audio_first_window_g2_ParamLimits

0x2edf,	// (0x00026f4c) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x000331bf) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x000331bf) popup_call_audio_first_window_g

0x2f23,	// (0x00026f90) popup_call_audio_first_window_t1_ParamLimits

0x2f23,	// (0x00026f90) popup_call_audio_first_window_t1

0x2fcf,	// (0x0002703c) popup_call_audio_first_window_t4_ParamLimits

0x2fcf,	// (0x0002703c) popup_call_audio_first_window_t4

0x305b,	// (0x000270c8) popup_call_audio_first_window_t5_ParamLimits

0x305b,	// (0x000270c8) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x000331c4) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x000331c4) popup_call_audio_first_window_t

0x308a,	// (0x000270f7) bg_popup_call_pane_cp02

0x3094,	// (0x00027101) call_type_pane_cp023

0x309c,	// (0x00027109) popup_call_audio_wait_window_g1

0x30a4,	// (0x00027111) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x000331cb) popup_call_audio_wait_window_g

0x30ac,	// (0x00027119) popup_call_audio_wait_window_t3

0x30ba,	// (0x00027127) bg_popup_call_pane_cp03_ParamLimits

0x30ba,	// (0x00027127) bg_popup_call_pane_cp03

0x311a,	// (0x00027187) call_thumbnail_pane_cp011_ParamLimits

0x311a,	// (0x00027187) call_thumbnail_pane_cp011

0x3126,	// (0x00027193) call_type_pane_cp034_ParamLimits

0x3126,	// (0x00027193) call_type_pane_cp034

0x3162,	// (0x000271cf) popup_call_audio_second_window_g1_ParamLimits

0x3162,	// (0x000271cf) popup_call_audio_second_window_g1

0x319e,	// (0x0002720b) popup_call_audio_second_window_g2_ParamLimits

0x319e,	// (0x0002720b) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x000331d0) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x000331d0) popup_call_audio_second_window_g

0x31da,	// (0x00027247) popup_call_audio_second_window_t1_ParamLimits

0x31da,	// (0x00027247) popup_call_audio_second_window_t1

0x325b,	// (0x000272c8) popup_call_audio_second_window_t2_ParamLimits

0x325b,	// (0x000272c8) popup_call_audio_second_window_t2

0x3291,	// (0x000272fe) popup_call_audio_second_window_t3_ParamLimits

0x3291,	// (0x000272fe) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x000331d5) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x000331d5) popup_call_audio_second_window_t

0x308a,	// (0x000270f7) bg_popup_call_pane_cp04

0x32c7,	// (0x00027334) list_conf_pane

0x32cf,	// (0x0002733c) popup_call_audio_conf_window_t1

0x32dd,	// (0x0002734a) call_thumbnail_pane_g1

0x32e5,	// (0x00027352) bg_pinb_pane_ParamLimits

0x32e5,	// (0x00027352) bg_pinb_pane

0x32f3,	// (0x00027360) find_pinb_pane

0x32fc,	// (0x00027369) listscroll_pinb_pane_ParamLimits

0x32fc,	// (0x00027369) listscroll_pinb_pane

0x330b,	// (0x00027378) pinb_bg_pane_g1

0x3315,	// (0x00027382) pinb_bg_pane_g2

0x3321,	// (0x0002738e) pinb_bg_pane_g3

0x332d,	// (0x0002739a) pinb_bg_pane_g4

0x3339,	// (0x000273a6) pinb_bg_pane_g5

0x3345,	// (0x000273b2) pinb_bg_pane_g6

0x3350,	// (0x000273bd) pinb_bg_pane_g7

0x335b,	// (0x000273c8) pinb_bg_pane_g8

0x3366,	// (0x000273d3) pinb_bg_pane_g9

0x3370,	// (0x000273dd) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x000331dc) pinb_bg_pane_g

0x338d,	// (0x000273fa) grid_pinb_pane

0x3396,	// (0x00027403) list_pinb_pane

0x339f,	// (0x0002740c) scroll_pane_cp01_ParamLimits

0x339f,	// (0x0002740c) scroll_pane_cp01

0x33b1,	// (0x0002741e) find_pinb_pane_g1_ParamLimits

0x33b1,	// (0x0002741e) find_pinb_pane_g1

0x33c9,	// (0x00027436) find_pinb_pane_t1

0x33db,	// (0x00027448) find_pinb_pane_t2

0x0001,

0xf189,	// (0x000331f6) find_pinb_pane_t

0x33f0,	// (0x0002745d) input_focus_pane_cp01_ParamLimits

0x33f0,	// (0x0002745d) input_focus_pane_cp01

0x33fc,	// (0x00027469) cell_pinb_pane_ParamLimits

0x33fc,	// (0x00027469) cell_pinb_pane

0x342e,	// (0x0002749b) cell_pinb_pane_g1_ParamLimits

0x342e,	// (0x0002749b) cell_pinb_pane_g1

0x343e,	// (0x000274ab) cell_pinb_pane_g2_ParamLimits

0x343e,	// (0x000274ab) cell_pinb_pane_g2

0x344a,	// (0x000274b7) cell_pinb_pane_g3_ParamLimits

0x344a,	// (0x000274b7) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x000331fb) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x000331fb) cell_pinb_pane_g

0x308a,	// (0x000270f7) grid_highlight_pane_cp01

0x3456,	// (0x000274c3) list_pinb_item_pane_ParamLimits

0x3456,	// (0x000274c3) list_pinb_item_pane

0x308a,	// (0x000270f7) list_highlight_pane_cp02

0x346a,	// (0x000274d7) list_pinb_item_pane_g1_ParamLimits

0x346a,	// (0x000274d7) list_pinb_item_pane_g1

0x3477,	// (0x000274e4) list_pinb_item_pane_g2_ParamLimits

0x3477,	// (0x000274e4) list_pinb_item_pane_g2

0x3483,	// (0x000274f0) list_pinb_item_pane_g3_ParamLimits

0x3483,	// (0x000274f0) list_pinb_item_pane_g3

0x3494,	// (0x00027501) list_pinb_item_pane_g4_ParamLimits

0x3494,	// (0x00027501) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x00033202) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x00033202) list_pinb_item_pane_g

0x34a0,	// (0x0002750d) list_pinb_item_pane_t1_ParamLimits

0x34a0,	// (0x0002750d) list_pinb_item_pane_t1

0x170b,	// (0x00025778) calc_display_pane

0x1731,	// (0x0002579e) calc_paper_pane

0x1754,	// (0x000257c1) grid_calc_pane

0x308a,	// (0x000270f7) bg_list_pane_cp01

0x34b7,	// (0x00027524) clock_g1

0x34bf,	// (0x0002752c) clock_g2

0x0001,

0xf19e,	// (0x0003320b) clock_g

0x34c7,	// (0x00027534) clock_t1_ParamLimits

0x34c7,	// (0x00027534) clock_t1

0x34dc,	// (0x00027549) clock_t2_ParamLimits

0x34dc,	// (0x00027549) clock_t2

0x34ee,	// (0x0002755b) clock_t3_ParamLimits

0x34ee,	// (0x0002755b) clock_t3

0x3500,	// (0x0002756d) clock_t4_ParamLimits

0x3500,	// (0x0002756d) clock_t4

0x3512,	// (0x0002757f) clock_t5_ParamLimits

0x3512,	// (0x0002757f) clock_t5

0x3527,	// (0x00027594) clock_t6_ParamLimits

0x3527,	// (0x00027594) clock_t6

0x3539,	// (0x000275a6) clock_t7_ParamLimits

0x3539,	// (0x000275a6) clock_t7

0x354b,	// (0x000275b8) clock_t8_ParamLimits

0x354b,	// (0x000275b8) clock_t8

0x355f,	// (0x000275cc) clock_t9_ParamLimits

0x355f,	// (0x000275cc) clock_t9

0x0008,

0xf1a3,	// (0x00033210) clock_t_ParamLimits

0xf1a3,	// (0x00033210) clock_t

0x3573,	// (0x000275e0) popup_clock_analogue_window_cp02

0x3573,	// (0x000275e0) popup_clock_digital_window_cp01

0x357b,	// (0x000275e8) listscroll_help_pane

0x308a,	// (0x000270f7) phob_pre_status_pane

0x3585,	// (0x000275f2) grid_qdial_pane

0x308a,	// (0x000270f7) listscroll_mce_pane

0x358f,	// (0x000275fc) bg_notes_pane

0x3599,	// (0x00027606) list_notes_pane

0x35a3,	// (0x00027610) scroll_pane_cp06

0x35ae,	// (0x0002761b) bg_calc_paper_pane

0xad68,	// (0x0002edd5) list_calc_pane

0x35c2,	// (0x0002762f) bg_calc_display_pane

0x1780,	// (0x000257ed) calc_display_pane_t1

0x1792,	// (0x000257ff) calc_display_pane_t2

0xad82,	// (0x0002edef) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x00033223) calc_display_pane_t

0x17a4,	// (0x00025811) cell_calc_pane_ParamLimits

0x17a4,	// (0x00025811) cell_calc_pane

0x35ce,	// (0x0002763b) bg_calc_paper_pane_g1

0x35da,	// (0x00027647) bg_calc_paper_pane_g2

0x35e6,	// (0x00027653) bg_calc_paper_pane_g3

0x35f2,	// (0x0002765f) bg_calc_paper_pane_g4

0x35fe,	// (0x0002766b) bg_calc_paper_pane_g5

0x360a,	// (0x00027677) bg_calc_paper_pane_g6

0x3619,	// (0x00027686) bg_calc_paper_pane_g7

0x3628,	// (0x00027695) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0003322a) bg_calc_paper_pane_g

0x363b,	// (0x000276a8) calc_bg_paper_pane_g9

0x364e,	// (0x000276bb) list_calc_item_pane_ParamLimits

0x364e,	// (0x000276bb) list_calc_item_pane

0x3664,	// (0x000276d1) list_calc_item_pane_g1

0xad94,	// (0x0002ee01) list_calc_item_pane_t1_ParamLimits

0xad94,	// (0x0002ee01) list_calc_item_pane_t1

0x17d9,	// (0x00025846) list_calc_item_pane_t2_ParamLimits

0x17d9,	// (0x00025846) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0003323b) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0003323b) list_calc_item_pane_t

0x3671,	// (0x000276de) cell_calc_pane_g1

0x367b,	// (0x000276e8) grid_highlight_pane_cp02

0x369d,	// (0x0002770a) bg_calc_display_pane_g1

0xada6,	// (0x0002ee13) bg_calc_display_pane_g2

0x36a6,	// (0x00027713) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x00033245) bg_calc_display_pane_g

0x180d,	// (0x0002587a) cell_qdial_pane_ParamLimits

0x180d,	// (0x0002587a) cell_qdial_pane

0x36af,	// (0x0002771c) cell_qdial_pane_g1_ParamLimits

0x36af,	// (0x0002771c) cell_qdial_pane_g1

0x36c5,	// (0x00027732) cell_qdial_pane_g2_ParamLimits

0x36c5,	// (0x00027732) cell_qdial_pane_g2

0x36d6,	// (0x00027743) cell_qdial_pane_g3_ParamLimits

0x36d6,	// (0x00027743) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0003324c) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0003324c) cell_qdial_pane_g

0x36f8,	// (0x00027765) cell_qdial_pane_t1_ParamLimits

0x36f8,	// (0x00027765) cell_qdial_pane_t1

0x3710,	// (0x0002777d) cell_qdial_pane_t2_ParamLimits

0x3710,	// (0x0002777d) cell_qdial_pane_t2

0x3723,	// (0x00027790) cell_qdial_pane_t3_ParamLimits

0x3723,	// (0x00027790) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x00033255) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x00033255) cell_qdial_pane_t

0x308a,	// (0x000270f7) grid_highlight_pane_cp04

0x3736,	// (0x000277a3) thumbnail_qdial_pane_ParamLimits

0x3736,	// (0x000277a3) thumbnail_qdial_pane

0x3792,	// (0x000277ff) list_help_pane

0x379b,	// (0x00027808) scroll_pane_cp02

0x37a4,	// (0x00027811) help_list_pane_t1_ParamLimits

0x37a4,	// (0x00027811) help_list_pane_t1

0xadb0,	// (0x0002ee1d) bg_notes_pane_g2

0xadb8,	// (0x0002ee25) bg_notes_pane_g3

0xadc0,	// (0x0002ee2d) notes_bg_pane_g1

0xadc8,	// (0x0002ee35) notes_bg_pane_g4

0xadd0,	// (0x0002ee3d) notes_bg_pane_g5

0xadd8,	// (0x0002ee45) notes_bg_pane_g6

0xade0,	// (0x0002ee4d) notes_bg_pane_g7

0xade8,	// (0x0002ee55) notes_bg_pane_g8

0xadf0,	// (0x0002ee5d) notes_bg_pane_g9

0x0006,

0xf206,	// (0x00033273) notes_bg_pane_g

0xadf8,	// (0x0002ee65) list_notes_text_pane_ParamLimits

0xadf8,	// (0x0002ee65) list_notes_text_pane

0x37c4,	// (0x00027831) list_notes_text_pane_g1

0x37cd,	// (0x0002783a) list_notes_text_pane_t1

0x35c2,	// (0x0002762f) listscroll_cale_week_pane

0x3809,	// (0x00027876) bg_cale_heading_pane

0x3821,	// (0x0002788e) bg_cale_pane_cp01

0x383a,	// (0x000278a7) cale_week_corner_pane

0x384b,	// (0x000278b8) cale_week_day_heading_pane

0x3863,	// (0x000278d0) cale_week_scroll_pane_g1

0x3878,	// (0x000278e5) cale_week_scroll_pane_g2

0x3889,	// (0x000278f6) cale_week_scroll_pane_g3

0x389a,	// (0x00027907) cale_week_scroll_pane_g4

0x38ab,	// (0x00027918) cale_week_scroll_pane_g5

0x38bc,	// (0x00027929) cale_week_scroll_pane_g6

0x38cd,	// (0x0002793a) cale_week_scroll_pane_g7

0x38de,	// (0x0002794b) cale_week_scroll_pane_g8

0x38ef,	// (0x0002795c) cale_week_scroll_pane_g9

0x3900,	// (0x0002796d) cale_week_scroll_pane_g10

0x3911,	// (0x0002797e) cale_week_scroll_pane_g11

0x3922,	// (0x0002798f) cale_week_scroll_pane_g12

0x3933,	// (0x000279a0) cale_week_scroll_pane_g13

0x3944,	// (0x000279b1) cale_week_scroll_pane_g14

0x3955,	// (0x000279c2) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x00033282) cale_week_scroll_pane_g

0x3966,	// (0x000279d3) cale_week_time_pane

0x3977,	// (0x000279e4) grid_cale_week_pane

0x399c,	// (0x00027a09) scroll_pane_cp08

0x39b6,	// (0x00027a23) cell_cale_week_pane_ParamLimits

0x39b6,	// (0x00027a23) cell_cale_week_pane

0x39f2,	// (0x00027a5f) cale_week_day_heading_pane_t1

0x3a06,	// (0x00027a73) cale_week_day_heading_pane_t2

0x3a1a,	// (0x00027a87) cale_week_day_heading_pane_t3

0x3a2e,	// (0x00027a9b) cale_week_day_heading_pane_t4

0x3a42,	// (0x00027aaf) cale_week_day_heading_pane_t5

0x3a56,	// (0x00027ac3) cale_week_day_heading_pane_t6

0x3a6a,	// (0x00027ad7) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x000332a1) cale_week_day_heading_pane_t

0x3a7e,	// (0x00027aeb) bg_cale_side_pane

0x1821,	// (0x0002588e) cale_week_time_pane_t1

0x1839,	// (0x000258a6) cale_week_time_pane_t2

0x1851,	// (0x000258be) cale_week_time_pane_t3

0x1869,	// (0x000258d6) cale_week_time_pane_t4

0x1881,	// (0x000258ee) cale_week_time_pane_t5

0x1899,	// (0x00025906) cale_week_time_pane_t6

0x18b1,	// (0x0002591e) cale_week_time_pane_t7

0x18c9,	// (0x00025936) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x000332b0) cale_week_time_pane_t

0x3a8c,	// (0x00027af9) cell_cale_week_pane_g2

0x3aa8,	// (0x00027b15) cell_cale_week_pane_g3_ParamLimits

0x3aa8,	// (0x00027b15) cell_cale_week_pane_g3

0x3ac0,	// (0x00027b2d) grid_highlight_pane_cp07

0x3ac8,	// (0x00027b35) listscroll_gms_pane

0x3ad2,	// (0x00027b3f) grid_gms_pane

0x3adb,	// (0x00027b48) listscroll_gms_pane_g1

0x3ae3,	// (0x00027b50) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x000332c1) listscroll_gms_pane_g

0x3aeb,	// (0x00027b58) scroll_pane_cp010

0x3af6,	// (0x00027b63) cell_gms_pane_ParamLimits

0x3af6,	// (0x00027b63) cell_gms_pane

0x3b09,	// (0x00027b76) cell_gms_pane_g1

0x3b11,	// (0x00027b7e) cell_gms_pane_g2

0x37c4,	// (0x00027831) cell_gms_pane_g3

0x3b19,	// (0x00027b86) cell_gms_pane_g4

0x0003,

0xf259,	// (0x000332c6) cell_gms_pane_g

0x3b22,	// (0x00027b8f) grid_highlight_pane_cp09

0x66b4,	// (0x0002a721) phob_pre_status_pane_g1

0x66bc,	// (0x0002a729) phob_pre_status_pane_g2

0x66c4,	// (0x0002a731) phob_pre_status_pane_g3

0x66cc,	// (0x0002a739) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x000336b5) phob_pre_status_pane_g

0x66de,	// (0x0002a74b) phob_pre_status_pane_t1

0x66ec,	// (0x0002a759) phob_pre_status_pane_t2

0x66fc,	// (0x0002a769) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x000336c0) phob_pre_status_pane_t

0x308a,	// (0x000270f7) bg_list_pane_cp05

0xae17,	// (0x0002ee84) grid_vorec_pane

0xae1f,	// (0x0002ee8c) vorec_t1

0xae2d,	// (0x0002ee9a) vorec_t2

0xae3b,	// (0x0002eea8) vorec_t3

0xae49,	// (0x0002eeb6) vorec_t4

0xae57,	// (0x0002eec4) vorec_t5

0xae65,	// (0x0002eed2) vorec_t6

0x0006,

0xf262,	// (0x000332cf) vorec_t

0xae81,	// (0x0002eeee) wait_bar_pane_cp01

0x3b2a,	// (0x00027b97) cell_vorec_pane_ParamLimits

0x3b2a,	// (0x00027b97) cell_vorec_pane

0x3b3d,	// (0x00027baa) cell_vorec_pane_g1

0x308a,	// (0x000270f7) grid_highlight_pane_cp05

0x3b5f,	// (0x00027bcc) cams_zoom_pane

0x3b6e,	// (0x00027bdb) image_vga_pane

0x3b88,	// (0x00027bf5) main_camera_pane_g1

0x3b9a,	// (0x00027c07) main_camera_pane_g2

0x3bac,	// (0x00027c19) main_camera_pane_g3

0x3bbe,	// (0x00027c2b) main_camera_pane_g4

0x3bd0,	// (0x00027c3d) main_camera_pane_g5

0x3be2,	// (0x00027c4f) main_camera_pane_g6

0x3bf4,	// (0x00027c61) main_camera_pane_g7

0x0007,

0xf271,	// (0x000332de) main_camera_pane_g

0x3c12,	// (0x00027c7f) main_camera_pane_t1

0x3c28,	// (0x00027c95) main_camera_pane_t2

0x0001,

0xf282,	// (0x000332ef) main_camera_pane_t

0x3c64,	// (0x00027cd1) cams_zoom_pane_cp_ParamLimits

0x3c64,	// (0x00027cd1) cams_zoom_pane_cp

0x3c8c,	// (0x00027cf9) image_cif_pane_ParamLimits

0x3c8c,	// (0x00027cf9) image_cif_pane

0x3cc7,	// (0x00027d34) image_subqcif_pane

0x3ccf,	// (0x00027d3c) main_video_pane_g1_ParamLimits

0x3ccf,	// (0x00027d3c) main_video_pane_g1

0x3cf3,	// (0x00027d60) main_video_pane_g2_ParamLimits

0x3cf3,	// (0x00027d60) main_video_pane_g2

0x3d29,	// (0x00027d96) main_video_pane_g3_ParamLimits

0x3d29,	// (0x00027d96) main_video_pane_g3

0x3d59,	// (0x00027dc6) main_video_pane_g4_ParamLimits

0x3d59,	// (0x00027dc6) main_video_pane_g4

0x3d89,	// (0x00027df6) main_video_pane_g5_ParamLimits

0x3d89,	// (0x00027df6) main_video_pane_g5

0x3da3,	// (0x00027e10) main_video_pane_g6_ParamLimits

0x3da3,	// (0x00027e10) main_video_pane_g6

0x0006,

0xf287,	// (0x000332f4) main_video_pane_g_ParamLimits

0xf287,	// (0x000332f4) main_video_pane_g

0x3dce,	// (0x00027e3b) main_video_pane_t1_ParamLimits

0x3dce,	// (0x00027e3b) main_video_pane_t1

0x3e17,	// (0x00027e84) cams_zoom_pane_g1

0x3e20,	// (0x00027e8d) cams_zoom_pane_g2

0x3e29,	// (0x00027e96) cams_zoom_pane_g3

0x3e32,	// (0x00027e9f) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x00033303) cams_zoom_pane_g

0x3e4f,	// (0x00027ebc) grid_cams_pane

0x3e69,	// (0x00027ed6) linegrid_cams_pane

0x3e7c,	// (0x00027ee9) cell_cams_pane_ParamLimits

0x3e7c,	// (0x00027ee9) cell_cams_pane

0x3e9c,	// (0x00027f09) cams_burst_image_pane

0x3ea4,	// (0x00027f11) cell_cams_pane_g1

0x308a,	// (0x000270f7) grid_highlight_pane_cp03

0x3671,	// (0x000276de) mp_bg_pane_g1

0x308a,	// (0x000270f7) bg_list_pane_cp03

0xc1c9,	// (0x00030236) bg_mp_pane

0xc1d1,	// (0x0003023e) grid_mp_pane

0xc1d9,	// (0x00030246) media_player_g1

0xc1e1,	// (0x0003024e) media_player_t1

0xc1ef,	// (0x0003025c) media_player_t2

0xc1fd,	// (0x0003026a) media_player_t3

0xc20b,	// (0x00030278) media_player_t4

0xc219,	// (0x00030286) media_player_t5

0xc227,	// (0x00030294) media_player_t6

0xc235,	// (0x000302a2) media_player_t7

0x0006,

0xf632,	// (0x0003369f) media_player_t

0xc243,	// (0x000302b0) wait_bar_pane_cp02

0xf617,	// (0x00033684) main_usb_pane_t

0x66ab,	// (0x0002a718) cell_mp_pane

0x3671,	// (0x000276de) cell_mp_pane_g1

0x308a,	// (0x000270f7) grid_highlight_pane_cp06

0x3fbb,	// (0x00028028) grid_skin_colour_pane

0x3fc3,	// (0x00028030) list_highlight_pane_cp03

0x3fcb,	// (0x00028038) skin_g1

0x3fd3,	// (0x00028040) skin_t1

0x3fe2,	// (0x0002804f) skin_t2

0x0001,

0xf2cb,	// (0x00033338) skin_t

0x3ff0,	// (0x0002805d) cell_skin_colour_pane_ParamLimits

0x3ff0,	// (0x0002805d) cell_skin_colour_pane

0x4010,	// (0x0002807d) cell_skin_colour_pane_g1

0x4070,	// (0x000280dd) call_video_g1_ParamLimits

0x4070,	// (0x000280dd) call_video_g1

0x408c,	// (0x000280f9) call_video_g2_ParamLimits

0x408c,	// (0x000280f9) call_video_g2

0x0001,

0xf2d0,	// (0x0003333d) call_video_g_ParamLimits

0xf2d0,	// (0x0003333d) call_video_g

0x40c6,	// (0x00028133) call_video_uplink_pane_cp1_ParamLimits

0x40c6,	// (0x00028133) call_video_uplink_pane_cp1

0x410a,	// (0x00028177) call_video_uplink_pane_cp2

0x414c,	// (0x000281b9) video_down_crop_pane_ParamLimits

0x414c,	// (0x000281b9) video_down_crop_pane

0x4212,	// (0x0002827f) video_down_pane_ParamLimits

0x4212,	// (0x0002827f) video_down_pane

0x42e3,	// (0x00028350) video_down_subqcif_pane_ParamLimits

0x42e3,	// (0x00028350) video_down_subqcif_pane

0x42fb,	// (0x00028368) video_down_subqcif_pane_cp_ParamLimits

0x42fb,	// (0x00028368) video_down_subqcif_pane_cp

0x431f,	// (0x0002838c) im_reading_pane_ParamLimits

0x431f,	// (0x0002838c) im_reading_pane

0x4331,	// (0x0002839e) im_writing_pane_ParamLimits

0x4331,	// (0x0002839e) im_writing_pane

0x434f,	// (0x000283bc) im_reading_pane_t1

0x438b,	// (0x000283f8) list_im_pane

0x439c,	// (0x00028409) scroll_pane_cp07

0x43b5,	// (0x00028422) im_writing_pane_t1_ParamLimits

0x43b5,	// (0x00028422) im_writing_pane_t1

0x43ca,	// (0x00028437) im_writing_pane_t2_ParamLimits

0x43ca,	// (0x00028437) im_writing_pane_t2

0x0001,

0xf2da,	// (0x00033347) im_writing_pane_t_ParamLimits

0xf2da,	// (0x00033347) im_writing_pane_t

0x308a,	// (0x000270f7) input_focus_pane_cp04

0x308a,	// (0x000270f7) input_focus_pane_cp05

0x43e7,	// (0x00028454) list_im_single_pane_ParamLimits

0x43e7,	// (0x00028454) list_im_single_pane

0x43fd,	// (0x0002846a) list_single_im_pane_t1

0x666b,	// (0x0002a6d8) blid_accuracy_pane

0x6673,	// (0x0002a6e0) blid_compass_pane

0x667d,	// (0x0002a6ea) main_location_t1

0x668d,	// (0x0002a6fa) main_location_t2

0x669d,	// (0x0002a70a) main_location_t3

0x0002,

0xf641,	// (0x000336ae) main_location_t

0x308a,	// (0x000270f7) aid_levels_location

0x3671,	// (0x000276de) blid_accuracy_pane_g1

0x3671,	// (0x000276de) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x000333a9) blid_accuracy_pane_g

0x4437,	// (0x000284a4) wml_content_pane

0x4475,	// (0x000284e2) wml_button_pane_ParamLimits

0x4475,	// (0x000284e2) wml_button_pane

0x4489,	// (0x000284f6) wml_list_single_large_pane_ParamLimits

0x4489,	// (0x000284f6) wml_list_single_large_pane

0x44a0,	// (0x0002850d) wml_list_single_medium_pane_ParamLimits

0x44a0,	// (0x0002850d) wml_list_single_medium_pane

0x44b8,	// (0x00028525) wml_list_single_small_pane_ParamLimits

0x44b8,	// (0x00028525) wml_list_single_small_pane

0x44d6,	// (0x00028543) wml_selection_box_pane_ParamLimits

0x44d6,	// (0x00028543) wml_selection_box_pane

0x44e9,	// (0x00028556) wml_list_single_pane_t1

0x44f8,	// (0x00028565) wml_list_single_medium_pane_t1

0x4507,	// (0x00028574) wml_list_single_large_pane_t1

0x4516,	// (0x00028583) input_focus_pane_cp02_ParamLimits

0x4516,	// (0x00028583) input_focus_pane_cp02

0x4529,	// (0x00028596) wml_selection_box_pane_g1

0x4532,	// (0x0002859f) wml_selection_box_pane_t1_ParamLimits

0x4532,	// (0x0002859f) wml_selection_box_pane_t1

0x32e5,	// (0x00027352) bg_wml_button_pane_ParamLimits

0x32e5,	// (0x00027352) bg_wml_button_pane

0x454a,	// (0x000285b7) wml_button_pane_g1

0x4552,	// (0x000285bf) wml_button_pane_t1

0x454a,	// (0x000285b7) wml_button_bg_pane_g1

0x4562,	// (0x000285cf) wml_button_bg_pane_g2

0x456a,	// (0x000285d7) wml_button_bg_pane_g3

0x4572,	// (0x000285df) wml_button_bg_pane_g4

0x457a,	// (0x000285e7) wml_button_bg_pane_g5

0x4582,	// (0x000285ef) wml_button_bg_pane_g6

0x458a,	// (0x000285f7) wml_button_bg_pane_g7

0x4592,	// (0x000285ff) wml_button_bg_pane_g8

0x459a,	// (0x00028607) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0003334c) wml_button_bg_pane_g

0x45a2,	// (0x0002860f) bg_list_pane_cp02

0x45aa,	// (0x00028617) mce_header_pane_ParamLimits

0x45aa,	// (0x00028617) mce_header_pane

0x45c0,	// (0x0002862d) mce_icon_pane

0x45c0,	// (0x0002862d) mce_image_pane

0x45c9,	// (0x00028636) mce_text_pane_ParamLimits

0x45c9,	// (0x00028636) mce_text_pane

0x45dc,	// (0x00028649) scroll_pane_cp03

0x446d,	// (0x000284da) scroll_pane_cp04

0x45e6,	// (0x00028653) scroll_pane_cp05_ParamLimits

0x45e6,	// (0x00028653) scroll_pane_cp05

0x45f2,	// (0x0002865f) mce_header_field_pane_ParamLimits

0x45f2,	// (0x0002865f) mce_header_field_pane

0x4609,	// (0x00028676) mce_header_field_pane_2_ParamLimits

0x4609,	// (0x00028676) mce_header_field_pane_2

0x461f,	// (0x0002868c) mce_header_field_pane_3

0x4627,	// (0x00028694) list_single_mce_message_pane_ParamLimits

0x4627,	// (0x00028694) list_single_mce_message_pane

0x463f,	// (0x000286ac) list_single_mce_smart_pane_ParamLimits

0x463f,	// (0x000286ac) list_single_mce_smart_pane

0x4662,	// (0x000286cf) input_focus_pane_cp03

0x466b,	// (0x000286d8) list_header_data_pane

0x4673,	// (0x000286e0) mce_header_field_pane_t1

0x4683,	// (0x000286f0) list_single_mce_header_pane_ParamLimits

0x4683,	// (0x000286f0) list_single_mce_header_pane

0x4697,	// (0x00028704) list_single_mce_header_pane_t1

0x46a6,	// (0x00028713) list_single_mce_message_pane_g1

0x46ae,	// (0x0002871b) list_single_mce_message_pane_t1

0x46da,	// (0x00028747) bg_cale_heading_pane_cp01_ParamLimits

0x46da,	// (0x00028747) bg_cale_heading_pane_cp01

0x46fd,	// (0x0002876a) bg_cale_pane_cp02_ParamLimits

0x46fd,	// (0x0002876a) bg_cale_pane_cp02

0x4720,	// (0x0002878d) cale_month_corner_pane

0x4736,	// (0x000287a3) cale_month_day_heading_pane_ParamLimits

0x4736,	// (0x000287a3) cale_month_day_heading_pane

0x4761,	// (0x000287ce) cale_month_pane_g1_ParamLimits

0x4761,	// (0x000287ce) cale_month_pane_g1

0x477d,	// (0x000287ea) cale_month_pane_g2_ParamLimits

0x477d,	// (0x000287ea) cale_month_pane_g2

0x4796,	// (0x00028803) cale_month_pane_g3_ParamLimits

0x4796,	// (0x00028803) cale_month_pane_g3

0x47c2,	// (0x0002882f) cale_month_pane_g4_ParamLimits

0x47c2,	// (0x0002882f) cale_month_pane_g4

0x47ee,	// (0x0002885b) cale_month_pane_g5_ParamLimits

0x47ee,	// (0x0002885b) cale_month_pane_g5

0x481a,	// (0x00028887) cale_month_pane_g6_ParamLimits

0x481a,	// (0x00028887) cale_month_pane_g6

0x4846,	// (0x000288b3) cale_month_pane_g7_ParamLimits

0x4846,	// (0x000288b3) cale_month_pane_g7

0x4872,	// (0x000288df) cale_month_pane_g8_ParamLimits

0x4872,	// (0x000288df) cale_month_pane_g8

0x48a6,	// (0x00028913) cale_month_pane_g9_ParamLimits

0x48a6,	// (0x00028913) cale_month_pane_g9

0x48d8,	// (0x00028945) cale_month_pane_g10_ParamLimits

0x48d8,	// (0x00028945) cale_month_pane_g10

0x490a,	// (0x00028977) cale_month_pane_g11_ParamLimits

0x490a,	// (0x00028977) cale_month_pane_g11

0x493c,	// (0x000289a9) cale_month_pane_g12_ParamLimits

0x493c,	// (0x000289a9) cale_month_pane_g12

0x496e,	// (0x000289db) cale_month_pane_g13_ParamLimits

0x496e,	// (0x000289db) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0003335f) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0003335f) cale_month_pane_g

0x49b2,	// (0x00028a1f) cale_month_week_pane

0x49c3,	// (0x00028a30) grid_cale_month_pane_ParamLimits

0x49c3,	// (0x00028a30) grid_cale_month_pane

0x49e9,	// (0x00028a56) cale_month_day_heading_pane_t1

0x4a47,	// (0x00028ab4) cale_month_day_heading_pane_t2

0x4aac,	// (0x00028b19) cale_month_day_heading_pane_t3

0x4b11,	// (0x00028b7e) cale_month_day_heading_pane_t4

0x4b76,	// (0x00028be3) cale_month_day_heading_pane_t5

0x4bdb,	// (0x00028c48) cale_month_day_heading_pane_t6

0x4c40,	// (0x00028cad) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0003337a) cale_month_day_heading_pane_t

0x3a7e,	// (0x00027aeb) bg_cale_side_pane_cp01

0x4ca5,	// (0x00028d12) cale_month_week_pane_t1

0x4cbc,	// (0x00028d29) cale_month_week_pane_t2

0x4cd3,	// (0x00028d40) cale_month_week_pane_t3

0x4cea,	// (0x00028d57) cale_month_week_pane_t4

0x4d01,	// (0x00028d6e) cale_month_week_pane_t5

0x4d18,	// (0x00028d85) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00033389) cale_month_week_pane_t

0x4d2f,	// (0x00028d9c) cell_cale_month_pane_ParamLimits

0x4d2f,	// (0x00028d9c) cell_cale_month_pane

0xae89,	// (0x0002eef6) cell_cale_month_pane_g1

0x18e1,	// (0x0002594e) cell_cale_month_pane_t1_ParamLimits

0x18e1,	// (0x0002594e) cell_cale_month_pane_t1

0x3ac0,	// (0x00027b2d) grid_highlight_pane_cp08

0x3671,	// (0x000276de) main_smil_g1

0x4dff,	// (0x00028e6c) smil_status_pane

0x4e0a,	// (0x00028e77) smil_text_pane

0xc0e9,	// (0x00030156) bg_popup_call3_rect_pane_g8

0xc0f1,	// (0x0003015e) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x00033642) bg_popup_call3_rect_pane_g

0xc36b,	// (0x000303d8) smil_status_volume_pane_g1

0x4e1e,	// (0x00028e8b) smil_status_pane_t1

0xc39e,	// (0x0003040b) volume_smil_pane

0x4e35,	// (0x00028ea2) list_smil_text_pane

0x4e3f,	// (0x00028eac) scroll_pane_cp011

0x4e4a,	// (0x00028eb7) smil_text_list_pane_t1_ParamLimits

0x4e4a,	// (0x00028eb7) smil_text_list_pane_t1

0xae95,	// (0x0002ef02) aid_volume_smil_ParamLimits

0xae95,	// (0x0002ef02) aid_volume_smil

0x3671,	// (0x000276de) smil_volume_pane_g1

0x3671,	// (0x000276de) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x000333a9) smil_volume_pane_g

0x35c2,	// (0x0002762f) listscroll_cale_day_pane

0x4e9e,	// (0x00028f0b) bg_cale_pane

0x4eb6,	// (0x00028f23) list_cale_pane

0x4ec7,	// (0x00028f34) scroll_pane_cp09

0x4ed8,	// (0x00028f45) cale_bg_pane_g1

0x4ee0,	// (0x00028f4d) cale_bg_pane_g2

0x4ee8,	// (0x00028f55) cale_bg_pane_g3

0x4ef0,	// (0x00028f5d) cale_bg_pane_g4

0x4ef8,	// (0x00028f65) cale_bg_pane_g5

0x4f00,	// (0x00028f6d) cale_bg_pane_g6

0x4f08,	// (0x00028f75) cale_bg_pane_g7

0x4f10,	// (0x00028f7d) cale_bg_pane_g8

0x4f18,	// (0x00028f85) cale_bg_pane_g9

0x0008,

0xf341,	// (0x000333ae) cale_bg_pane_g

0x4f20,	// (0x00028f8d) list_cale_time_pane_ParamLimits

0x4f20,	// (0x00028f8d) list_cale_time_pane

0x4f35,	// (0x00028fa2) list_cale_time_pane_g1_ParamLimits

0x4f35,	// (0x00028fa2) list_cale_time_pane_g1

0x4f41,	// (0x00028fae) list_cale_time_pane_g2_ParamLimits

0x4f41,	// (0x00028fae) list_cale_time_pane_g2

0x4f4e,	// (0x00028fbb) list_cale_time_pane_g3_ParamLimits

0x4f4e,	// (0x00028fbb) list_cale_time_pane_g3

0x4f6a,	// (0x00028fd7) list_cale_time_pane_g4_ParamLimits

0x4f6a,	// (0x00028fd7) list_cale_time_pane_g4

0x4f78,	// (0x00028fe5) list_cale_time_pane_g5_ParamLimits

0x4f78,	// (0x00028fe5) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x000333c1) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x000333c1) list_cale_time_pane_g

0x4f93,	// (0x00029000) list_cale_time_pane_t1_ParamLimits

0x4f93,	// (0x00029000) list_cale_time_pane_t1

0x4fbb,	// (0x00029028) list_cale_time_pane_t2_ParamLimits

0x4fbb,	// (0x00029028) list_cale_time_pane_t2

0x5756,	// (0x000297c3) aid_blid_cardinal_pane

0x57a0,	// (0x0002980d) compass_pane_t4

0x4fe3,	// (0x00029050) list_cale_time_pane_t4_ParamLimits

0x4fe3,	// (0x00029050) list_cale_time_pane_t4

0x57ae,	// (0x0002981b) compass_pane_t5

0x57bc,	// (0x00029829) compass_pane_t6

0x57ca,	// (0x00029837) compass_pane_t7

0x584a,	// (0x000298b7) navi_pane_cc_t1

0x5a67,	// (0x00029ad4) aid_phob_thumbnail_center_pane

0x6077,	// (0x0002a0e4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x000333ce) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x000333ce) list_cale_time_pane_t

0x2cbf,	// (0x00026d2c) bg_popup_window_pane_cp02_ParamLimits

0x2cbf,	// (0x00026d2c) bg_popup_window_pane_cp02

0x500b,	// (0x00029078) heading_pane_cp01_ParamLimits

0x500b,	// (0x00029078) heading_pane_cp01

0x5017,	// (0x00029084) loc_req_pane_ParamLimits

0x5017,	// (0x00029084) loc_req_pane

0x5027,	// (0x00029094) loc_type_pane_ParamLimits

0x5027,	// (0x00029094) loc_type_pane

0x5039,	// (0x000290a6) loc_type_pane_t1_ParamLimits

0x5039,	// (0x000290a6) loc_type_pane_t1

0x504b,	// (0x000290b8) loc_type_pane_t2_ParamLimits

0x504b,	// (0x000290b8) loc_type_pane_t2

0x505d,	// (0x000290ca) loc_type_pane_t3_ParamLimits

0x505d,	// (0x000290ca) loc_type_pane_t3

0x0002,

0xf368,	// (0x000333d5) loc_type_pane_t_ParamLimits

0xf368,	// (0x000333d5) loc_type_pane_t

0x506f,	// (0x000290dc) list_loc_req_pane

0x5079,	// (0x000290e6) scroll_pane_cp012

0x5084,	// (0x000290f1) list_single_loc_request_popup_menu_pane_ParamLimits

0x5084,	// (0x000290f1) list_single_loc_request_popup_menu_pane

0x5091,	// (0x000290fe) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x5091,	// (0x000290fe) list_single_loc_request_popup_menu_pane_g1

0x509d,	// (0x0002910a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x509d,	// (0x0002910a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x000333dc) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x000333dc) list_single_loc_request_popup_menu_pane_g

0x50a9,	// (0x00029116) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x50a9,	// (0x00029116) list_single_loc_request_popup_menu_pane_t1

0x32e5,	// (0x00027352) bg_popup_window_pane_cp03_ParamLimits

0x32e5,	// (0x00027352) bg_popup_window_pane_cp03

0xaeb7,	// (0x0002ef24) heading_loc_req_pane_ParamLimits

0xaeb7,	// (0x0002ef24) heading_loc_req_pane

0x50bf,	// (0x0002912c) popup_dyc_status_message_window_g1_ParamLimits

0x50bf,	// (0x0002912c) popup_dyc_status_message_window_g1

0x50d3,	// (0x00029140) popup_dyc_status_message_window_t1_ParamLimits

0x50d3,	// (0x00029140) popup_dyc_status_message_window_t1

0x50e8,	// (0x00029155) popup_dyc_status_message_window_t2_ParamLimits

0x50e8,	// (0x00029155) popup_dyc_status_message_window_t2

0x50fd,	// (0x0002916a) popup_dyc_status_message_window_t3_ParamLimits

0x50fd,	// (0x0002916a) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x000333e1) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x000333e1) popup_dyc_status_message_window_t

0x308a,	// (0x000270f7) bg_heading_pane_cp01

0x5119,	// (0x00029186) heading_loc_req_pane_g1

0x5121,	// (0x0002918e) heading_loc_req_pane_g2

0x5129,	// (0x00029196) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x000333e8) heading_loc_req_pane_g

0x5131,	// (0x0002919e) heading_loc_req_pane_t1

0x5227,	// (0x00029294) bg_popup_sub_pane_cp01_ParamLimits

0x5227,	// (0x00029294) bg_popup_sub_pane_cp01

0x5235,	// (0x000292a2) popup_cale_events_window_g1_ParamLimits

0x5235,	// (0x000292a2) popup_cale_events_window_g1

0x5255,	// (0x000292c2) popup_cale_events_window_g2_ParamLimits

0x5255,	// (0x000292c2) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0003341c) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0003341c) popup_cale_events_window_g

0x5275,	// (0x000292e2) popup_cale_events_window_t1_ParamLimits

0x5275,	// (0x000292e2) popup_cale_events_window_t1

0x5287,	// (0x000292f4) popup_cale_events_window_t2_ParamLimits

0x5287,	// (0x000292f4) popup_cale_events_window_t2

0x52c5,	// (0x00029332) popup_cale_events_window_t3_ParamLimits

0x52c5,	// (0x00029332) popup_cale_events_window_t3

0x52ff,	// (0x0002936c) popup_cale_events_window_t4_ParamLimits

0x52ff,	// (0x0002936c) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x00033421) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x00033421) popup_cale_events_window_t

0x5335,	// (0x000293a2) call_type_pane

0x5345,	// (0x000293b2) popup_call_status_window_g1

0x5359,	// (0x000293c6) popup_call_status_window_g2

0x536d,	// (0x000293da) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0003342a) popup_call_status_window_g

0x537d,	// (0x000293ea) call_type_pane_g1

0x5386,	// (0x000293f3) call_type_pane_g2

0x0001,

0xf3c4,	// (0x00033431) call_type_pane_g

0x308a,	// (0x000270f7) bg_popup_sub_pane_cp02

0x538f,	// (0x000293fc) listscroll_popup_wml_pane

0x5397,	// (0x00029404) list_wml_pane

0x53a1,	// (0x0002940e) scroll_pane_cp013

0x53ac,	// (0x00029419) list_single_graphic_popup_wml_pane_ParamLimits

0x53ac,	// (0x00029419) list_single_graphic_popup_wml_pane

0x3671,	// (0x000276de) list_single_graphic_popup_wml_pane_g1

0x53c0,	// (0x0002942d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x00033436) list_single_graphic_popup_wml_pane_g

0x53c8,	// (0x00029435) list_single_graphic_popup_wml_pane_t1

0x53de,	// (0x0002944b) aid_call_pane

0x32dd,	// (0x0002734a) popup_clock_analogue_window_g1

0x32dd,	// (0x0002734a) popup_clock_analogue_window_g2

0xaec3,	// (0x0002ef30) popup_clock_analogue_window_g3

0xaec3,	// (0x0002ef30) popup_clock_analogue_window_g4

0x3671,	// (0x000276de) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0003343b) popup_clock_analogue_window_g

0xaecb,	// (0x0002ef38) popup_clock_analogue_window_t1

0xaed9,	// (0x0002ef46) clock_digital_number_pane_ParamLimits

0xaed9,	// (0x0002ef46) clock_digital_number_pane

0xaee5,	// (0x0002ef52) clock_digital_number_pane_cp02_ParamLimits

0xaee5,	// (0x0002ef52) clock_digital_number_pane_cp02

0xaef1,	// (0x0002ef5e) clock_digital_number_pane_cp03_ParamLimits

0xaef1,	// (0x0002ef5e) clock_digital_number_pane_cp03

0xaefd,	// (0x0002ef6a) clock_digital_number_pane_cp04_ParamLimits

0xaefd,	// (0x0002ef6a) clock_digital_number_pane_cp04

0xaf09,	// (0x0002ef76) clock_digital_separator_pane_ParamLimits

0xaf09,	// (0x0002ef76) clock_digital_separator_pane

0xaf15,	// (0x0002ef82) popup_clock_digital_window_t1

0x3671,	// (0x000276de) clock_digital_number_pane_g1

0x3671,	// (0x000276de) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x000333a9) clock_digital_number_pane_g

0x3671,	// (0x000276de) clock_digital_separator_pane_g1

0x3671,	// (0x000276de) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x000333a9) clock_digital_separator_pane_g

0x308a,	// (0x000270f7) bg_popup_window_pane_cp04

0x53e6,	// (0x00029453) heading_pane_cp03

0x53ee,	// (0x0002945b) listscroll_popup_gms_pane

0x53f6,	// (0x00029463) grid_large_graphic_popup_pane

0x5400,	// (0x0002946d) listscroll_popup_gms_pane_g1

0x5408,	// (0x00029475) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x00033446) listscroll_popup_gms_pane_g

0x446d,	// (0x000284da) scroll_pane_cp014

0x5410,	// (0x0002947d) cell_large_graphic_popup_pane_ParamLimits

0x5410,	// (0x0002947d) cell_large_graphic_popup_pane

0x5428,	// (0x00029495) cell_large_graphic_popup_pane_g1_ParamLimits

0x5428,	// (0x00029495) cell_large_graphic_popup_pane_g1

0x5434,	// (0x000294a1) cell_large_graphic_popup_pane_g2_ParamLimits

0x5434,	// (0x000294a1) cell_large_graphic_popup_pane_g2

0x5440,	// (0x000294ad) cell_large_graphic_popup_pane_g3_ParamLimits

0x5440,	// (0x000294ad) cell_large_graphic_popup_pane_g3

0x544d,	// (0x000294ba) cell_large_graphic_popup_pane_g4_ParamLimits

0x544d,	// (0x000294ba) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0003344b) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0003344b) cell_large_graphic_popup_pane_g

0x545d,	// (0x000294ca) grid_highlight_pane_cp010

0x3671,	// (0x000276de) bg_popup_call_pane_g1

0x5467,	// (0x000294d4) list_single_graphic_popup_conf_pane_ParamLimits

0x5467,	// (0x000294d4) list_single_graphic_popup_conf_pane

0x5479,	// (0x000294e6) list_highlight_pane_cp01

0x5482,	// (0x000294ef) list_single_graphic_popup_conf_pane_g1

0x548a,	// (0x000294f7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x00033454) list_single_graphic_popup_conf_pane_g

0x5492,	// (0x000294ff) list_single_graphic_popup_conf_pane_t1

0x54a0,	// (0x0002950d) linegrid_cams_pane_g1

0x54a9,	// (0x00029516) linegrid_cams_pane_g2

0x37c4,	// (0x00027831) linegrid_cams_pane_g3

0x54b2,	// (0x0002951f) linegrid_cams_pane_g4

0x54bb,	// (0x00029528) linegrid_cams_pane_g5

0x54c4,	// (0x00029531) linegrid_cams_pane_g6

0x3b19,	// (0x00027b86) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x00033459) linegrid_cams_pane_g

0x54cf,	// (0x0002953c) popup_clock_analogue_window

0x54cf,	// (0x0002953c) popup_clock_digital_window

0x308a,	// (0x000270f7) popup_phob_thumbnail_window

0x3671,	// (0x000276de) call_video_uplink_pane_g1

0x54d8,	// (0x00029545) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x00033468) call_video_uplink_pane_g

0x3ac0,	// (0x00027b2d) video_uplink_pane

0x54e0,	// (0x0002954d) mce_image_pane_g1

0x54ea,	// (0x00029557) mce_image_pane_g2

0x54f2,	// (0x0002955f) mce_image_pane_g3

0x54fa,	// (0x00029567) mce_image_pane_g4

0x5502,	// (0x0002956f) mce_image_pane_g5

0x0004,

0xf400,	// (0x0003346d) mce_image_pane_g

0x550a,	// (0x00029577) control_top_pane_stacon_cp01_ParamLimits

0x550a,	// (0x00029577) control_top_pane_stacon_cp01

0x551e,	// (0x0002958b) uni_indicator_pane_stacon_cp01_ParamLimits

0x551e,	// (0x0002958b) uni_indicator_pane_stacon_cp01

0x552f,	// (0x0002959c) bg_popup_sub_pane_cp03

0x5539,	// (0x000295a6) chi_dic_find_pane

0x5541,	// (0x000295ae) listscroll_chi_dic_pane

0x554a,	// (0x000295b7) main_pane_chidic_g1

0x555d,	// (0x000295ca) chi_dic_find_pane_t1

0x556b,	// (0x000295d8) find_chidic_pane

0x5574,	// (0x000295e1) chi_dic_list_pane_ParamLimits

0x5574,	// (0x000295e1) chi_dic_list_pane

0x5585,	// (0x000295f2) scroll_pane_cp020

0x558d,	// (0x000295fa) find_chidic_pane_t1

0x308a,	// (0x000270f7) input_focus_pane_cp06

0x559c,	// (0x00029609) list_chi_dic_pane_ParamLimits

0x559c,	// (0x00029609) list_chi_dic_pane

0x55b0,	// (0x0002961d) list_chi_dic_pane_t1_ParamLimits

0x55b0,	// (0x0002961d) list_chi_dic_pane_t1

0x308a,	// (0x000270f7) list_highlight_pane_cp020

0x55c3,	// (0x00029630) bg_cale_heading_pane_g1

0x55cb,	// (0x00029638) bg_cale_heading_pane_g2

0x55d3,	// (0x00029640) bg_cale_heading_pane_g3

0x55db,	// (0x00029648) bg_cale_heading_pane_g4

0x55e5,	// (0x00029652) bg_cale_heading_pane_g5

0x55ef,	// (0x0002965c) bg_cale_heading_pane_g6

0x55f7,	// (0x00029664) bg_cale_heading_pane_g7

0x55ff,	// (0x0002966c) bg_cale_heading_pane_g8

0x5609,	// (0x00029676) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x00033478) bg_cale_heading_pane_g

0x55c3,	// (0x00029630) bg_cale_side_pane_g1

0x5613,	// (0x00029680) bg_cale_side_pane_g2

0x561b,	// (0x00029688) bg_cale_side_pane_g3

0x5623,	// (0x00029690) bg_cale_side_pane_g4

0x562b,	// (0x00029698) bg_cale_side_pane_g5

0x5633,	// (0x000296a0) bg_cale_side_pane_g6

0x563b,	// (0x000296a8) bg_cale_side_pane_g7

0x5643,	// (0x000296b0) bg_cale_side_pane_g8

0x564b,	// (0x000296b8) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0003348b) bg_cale_side_pane_g

0x5653,	// (0x000296c0) popup_call_status_window_ParamLimits

0x5653,	// (0x000296c0) popup_call_status_window

0x569c,	// (0x00029709) stacon_top_pane

0x56a4,	// (0x00029711) status_pane_ParamLimits

0x56a4,	// (0x00029711) status_pane

0x56b9,	// (0x00029726) status_small_pane

0x56c1,	// (0x0002972e) control_pane

0x308a,	// (0x000270f7) stacon_bottom_pane

0x56c9,	// (0x00029736) list_single_mce_smart_pane_t1_ParamLimits

0x56c9,	// (0x00029736) list_single_mce_smart_pane_t1

0x56dc,	// (0x00029749) list_single_mce_smart_pane_t2_ParamLimits

0x56dc,	// (0x00029749) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0003349e) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0003349e) list_single_mce_smart_pane_t

0x56fb,	// (0x00029768) compass_pane

0x5704,	// (0x00029771) main_location2_pane_t1

0x5718,	// (0x00029785) main_location2_pane_t2

0x572c,	// (0x00029799) main_location2_pane_t3

0x0003,

0xf436,	// (0x000334a3) main_location2_pane_t

0x5776,	// (0x000297e3) compass_pane_g1_ParamLimits

0x5776,	// (0x000297e3) compass_pane_g1

0x5782,	// (0x000297ef) compass_pane_t1

0x5791,	// (0x000297fe) compass_pane_t2

0x0005,

0xf43f,	// (0x000334ac) compass_pane_t

0x57d8,	// (0x00029845) text_secondary_cp61

0x5841,	// (0x000298ae) navi_pane_cams_g5

0x58bb,	// (0x00029928) navi_pane_im_t1

0x58c9,	// (0x00029936) navi_pane_mp_g1_ParamLimits

0x58c9,	// (0x00029936) navi_pane_mp_g1

0x58dd,	// (0x0002994a) navi_pane_mp_g2_ParamLimits

0x58dd,	// (0x0002994a) navi_pane_mp_g2

0x58e9,	// (0x00029956) navi_pane_mp_g3_ParamLimits

0x58e9,	// (0x00029956) navi_pane_mp_g3

0x0002,

0xf453,	// (0x000334c0) navi_pane_mp_g_ParamLimits

0xf453,	// (0x000334c0) navi_pane_mp_g

0x58f5,	// (0x00029962) navi_pane_mp_t1

0x5903,	// (0x00029970) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x000334c7) navi_pane_mp_t

0x59b0,	// (0x00029a1d) navi_pane_vt_g1

0x58f5,	// (0x00029962) navi_pane_vt_t1

0x59b8,	// (0x00029a25) navi_slider_pane

0x59c0,	// (0x00029a2d) zooming_pane

0x59c8,	// (0x00029a35) navi_slider_pane_g1

0xaf32,	// (0x0002ef9f) navi_slider_pane_g2

0x0006,

0xf461,	// (0x000334ce) navi_slider_pane_g

0x59ec,	// (0x00029a59) aid_levels_zoom

0x59f4,	// (0x00029a61) zooming_pane_g1

0x59fc,	// (0x00029a69) zooming_pane_g2

0x59fc,	// (0x00029a69) zooming_pane_g3

0x0002,

0xf470,	// (0x000334dd) zooming_pane_g

0x5a04,	// (0x00029a71) level_10_zoom

0x5a0d,	// (0x00029a7a) level_11_zoom

0x5a16,	// (0x00029a83) level_1_zoom

0x5a1f,	// (0x00029a8c) level_2_zoom

0x5a28,	// (0x00029a95) level_3_zoom

0x5a31,	// (0x00029a9e) level_4_zoom

0x5a3a,	// (0x00029aa7) level_5_zoom

0x5a43,	// (0x00029ab0) level_6_zoom

0x5a4c,	// (0x00029ab9) level_7_zoom

0x5a55,	// (0x00029ac2) level_8_zoom

0x5a5e,	// (0x00029acb) level_9_zoom

0x5a6f,	// (0x00029adc) popup_phob_thumbnail_window_g1

0x5a77,	// (0x00029ae4) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x000334e4) popup_phob_thumbnail_window_g

0xc24b,	// (0x000302b8) level_1_location

0xc253,	// (0x000302c0) level_2_location

0xc25b,	// (0x000302c8) level_3_location

0xc263,	// (0x000302d0) level_4_location

0x59c0,	// (0x00029a2d) level_5_location

0x5a7f,	// (0x00029aec) mce_icon_pane_g1

0x5a87,	// (0x00029af4) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x000334e9) mce_icon_pane_g

0x5a8f,	// (0x00029afc) main_mup_pane_g1_ParamLimits

0x5a8f,	// (0x00029afc) main_mup_pane_g1

0x5aa5,	// (0x00029b12) main_mup_pane_g2_ParamLimits

0x5aa5,	// (0x00029b12) main_mup_pane_g2

0x5abd,	// (0x00029b2a) main_mup_pane_g3_ParamLimits

0x5abd,	// (0x00029b2a) main_mup_pane_g3

0x5ad5,	// (0x00029b42) main_mup_pane_g4_ParamLimits

0x5ad5,	// (0x00029b42) main_mup_pane_g4

0x5aed,	// (0x00029b5a) main_mup_pane_g5_ParamLimits

0x5aed,	// (0x00029b5a) main_mup_pane_g5

0x5b09,	// (0x00029b76) main_mup_pane_g6_ParamLimits

0x5b09,	// (0x00029b76) main_mup_pane_g6

0x5b21,	// (0x00029b8e) main_mup_pane_g7_ParamLimits

0x5b21,	// (0x00029b8e) main_mup_pane_g7

0x5b39,	// (0x00029ba6) main_mup_pane_g8_ParamLimits

0x5b39,	// (0x00029ba6) main_mup_pane_g8

0x5b51,	// (0x00029bbe) main_mup_pane_g9_ParamLimits

0x5b51,	// (0x00029bbe) main_mup_pane_g9

0x5b6b,	// (0x00029bd8) main_mup_pane_g10_ParamLimits

0x5b6b,	// (0x00029bd8) main_mup_pane_g10

0x5b85,	// (0x00029bf2) main_mup_pane_g11_ParamLimits

0x5b85,	// (0x00029bf2) main_mup_pane_g11

0x5b99,	// (0x00029c06) main_mup_pane_g12_ParamLimits

0x5b99,	// (0x00029c06) main_mup_pane_g12

0x5baf,	// (0x00029c1c) main_mup_pane_g13_ParamLimits

0x5baf,	// (0x00029c1c) main_mup_pane_g13

0x000c,

0xf481,	// (0x000334ee) main_mup_pane_g_ParamLimits

0xf481,	// (0x000334ee) main_mup_pane_g

0x5bc3,	// (0x00029c30) main_mup_pane_t1_ParamLimits

0x5bc3,	// (0x00029c30) main_mup_pane_t1

0x5bdd,	// (0x00029c4a) main_mup_pane_t2_ParamLimits

0x5bdd,	// (0x00029c4a) main_mup_pane_t2

0x5bf5,	// (0x00029c62) main_mup_pane_t3_ParamLimits

0x5bf5,	// (0x00029c62) main_mup_pane_t3

0x5c0d,	// (0x00029c7a) main_mup_pane_t4_ParamLimits

0x5c0d,	// (0x00029c7a) main_mup_pane_t4

0x5c2b,	// (0x00029c98) main_mup_pane_t5_ParamLimits

0x5c2b,	// (0x00029c98) main_mup_pane_t5

0x5c40,	// (0x00029cad) main_mup_pane_t6_ParamLimits

0x5c40,	// (0x00029cad) main_mup_pane_t6

0x0005,

0xf49c,	// (0x00033509) main_mup_pane_t_ParamLimits

0xf49c,	// (0x00033509) main_mup_pane_t

0x5c52,	// (0x00029cbf) mup_progress_pane_ParamLimits

0x5c52,	// (0x00029cbf) mup_progress_pane

0x5c5e,	// (0x00029ccb) mup_visualizer_pane_ParamLimits

0x5c5e,	// (0x00029ccb) mup_visualizer_pane

0x5c92,	// (0x00029cff) mup_volume_pane_ParamLimits

0x5c92,	// (0x00029cff) mup_volume_pane

0x5cb0,	// (0x00029d1d) mup_visualizer_pane_g1_ParamLimits

0x5cb0,	// (0x00029d1d) mup_visualizer_pane_g1

0x5cb0,	// (0x00029d1d) mup_visualizer_pane_g2_ParamLimits

0x5cb0,	// (0x00029d1d) mup_visualizer_pane_g2

0x5776,	// (0x000297e3) mup_visualizer_pane_g3_ParamLimits

0x5776,	// (0x000297e3) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x00033516) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x00033516) mup_visualizer_pane_g

0x3671,	// (0x000276de) mup_volume_pane_g1

0x5cc6,	// (0x00029d33) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0003351d) mup_volume_pane_g

0x3671,	// (0x000276de) mup_progress_pane_g1

0x5ccf,	// (0x00029d3c) mup_progress_pane_g2

0x5cd8,	// (0x00029d45) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x00033522) mup_progress_pane_g

0x308a,	// (0x000270f7) bg_popup_window_pane_cp05

0x5ce1,	// (0x00029d4e) heading_pane_cp02_ParamLimits

0x5ce1,	// (0x00029d4e) heading_pane_cp02

0x5cfb,	// (0x00029d68) list_popup_blid_pane

0x5d03,	// (0x00029d70) list_blid_sat_info_pane_ParamLimits

0x5d03,	// (0x00029d70) list_blid_sat_info_pane

0xaf44,	// (0x0002efb1) list_blid_sat_info_pane_g1

0xaf4c,	// (0x0002efb9) list_blid_sat_info_pane_t1

0x5e0e,	// (0x00029e7b) mup_equalizer_pane_ParamLimits

0x5e0e,	// (0x00029e7b) mup_equalizer_pane

0x5e27,	// (0x00029e94) mup_equalizer_pane_cp1_ParamLimits

0x5e27,	// (0x00029e94) mup_equalizer_pane_cp1

0x5e44,	// (0x00029eb1) mup_equalizer_pane_cp2_ParamLimits

0x5e44,	// (0x00029eb1) mup_equalizer_pane_cp2

0x5e61,	// (0x00029ece) mup_equalizer_pane_cp3_ParamLimits

0x5e61,	// (0x00029ece) mup_equalizer_pane_cp3

0x5e82,	// (0x00029eef) mup_equalizer_pane_cp4_ParamLimits

0x5e82,	// (0x00029eef) mup_equalizer_pane_cp4

0x5ea3,	// (0x00029f10) mup_equalizer_pane_cp5

0x5eb7,	// (0x00029f24) mup_equalizer_pane_cp6

0x5ecb,	// (0x00029f38) mup_equalizer_pane_cp7

0xc169,	// (0x000301d6) bg_popup_call_poc_act_pane_g9

0xc171,	// (0x000301de) bg_popup_call_poc_act_pane_g10

0xc179,	// (0x000301e6) bg_popup_call_poc_act_pane_g11

0x000a,

0x32e5,	// (0x00027352) mup_scale_pane

0x3671,	// (0x000276de) mup_scale_pane_g1

0xaf5a,	// (0x0002efc7) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0003353e) mup_scale_pane_g

0xaf7e,	// (0x0002efeb) msg_data_pane

0xaf86,	// (0x0002eff3) scroll_pane_cp017

0x5ef1,	// (0x00029f5e) bg_list_pane_cp04_ParamLimits

0x5ef1,	// (0x00029f5e) bg_list_pane_cp04

0xaf8e,	// (0x0002effb) msg_data_pane_g1

0x5f11,	// (0x00029f7e) msg_data_pane_g2

0x54f2,	// (0x0002955f) msg_data_pane_g3

0x5f19,	// (0x00029f86) msg_data_pane_g4

0x5f21,	// (0x00029f8e) msg_data_pane_g5

0x5f29,	// (0x00029f96) msg_data_pane_g6

0x5f31,	// (0x00029f9e) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0003354d) msg_data_pane_g

0x5f39,	// (0x00029fa6) msg_text_pane_ParamLimits

0x5f39,	// (0x00029fa6) msg_text_pane

0x5f62,	// (0x00029fcf) qrid_highlight_pane_cp011_ParamLimits

0x5f62,	// (0x00029fcf) qrid_highlight_pane_cp011

0x308a,	// (0x000270f7) msg_body_pane

0x308a,	// (0x000270f7) msg_header_pane

0xaf9f,	// (0x0002f00c) input_focus_pane_cp07

0x5f86,	// (0x00029ff3) msg_header_pane_t1_ParamLimits

0x5f86,	// (0x00029ff3) msg_header_pane_t1

0xafb4,	// (0x0002f021) msg_header_pane_t2_ParamLimits

0xafb4,	// (0x0002f021) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x00033561) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x00033561) msg_header_pane_t

0xafc6,	// (0x0002f033) msg_body_pane_g1

0x5f9a,	// (0x0002a007) msg_body_pane_t1_ParamLimits

0x5f9a,	// (0x0002a007) msg_body_pane_t1

0xafce,	// (0x0002f03b) msg_body_pane_t2_ParamLimits

0xafce,	// (0x0002f03b) msg_body_pane_t2

0xafe0,	// (0x0002f04d) msg_body_pane_t3_ParamLimits

0xafe0,	// (0x0002f04d) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x00033566) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x00033566) msg_body_pane_t

0x1919,	// (0x00025986) main_viewer_pane_g1_ParamLimits

0x1919,	// (0x00025986) main_viewer_pane_g1

0x1927,	// (0x00025994) main_viewer_pane_g2_ParamLimits

0x1927,	// (0x00025994) main_viewer_pane_g2

0x5fe9,	// (0x0002a056) main_viewer_pane_g3_ParamLimits

0x5fe9,	// (0x0002a056) main_viewer_pane_g3

0x5ff8,	// (0x0002a065) main_viewer_pane_g4_ParamLimits

0x5ff8,	// (0x0002a065) main_viewer_pane_g4

0xb00a,	// (0x0002f077) main_viewer_pane_g5_ParamLimits

0xb00a,	// (0x0002f077) main_viewer_pane_g5

0xb00a,	// (0x0002f077) main_viewer_pane_g7_ParamLimits

0xb00a,	// (0x0002f077) main_viewer_pane_g7

0xb01c,	// (0x0002f089) main_viewer_pane_g8_ParamLimits

0xb01c,	// (0x0002f089) main_viewer_pane_g8

0x0007,

0xf509,	// (0x00033576) main_viewer_pane_g_ParamLimits

0xf509,	// (0x00033576) main_viewer_pane_g

0xb034,	// (0x0002f0a1) viewer_content_pane_ParamLimits

0xb034,	// (0x0002f0a1) viewer_content_pane

0x6034,	// (0x0002a0a1) main_postcard_pane_g1_ParamLimits

0x6034,	// (0x0002a0a1) main_postcard_pane_g1

0x604a,	// (0x0002a0b7) main_postcard_pane_g2_ParamLimits

0x604a,	// (0x0002a0b7) main_postcard_pane_g2

0x6060,	// (0x0002a0cd) main_postcard_pane_g3_ParamLimits

0x6060,	// (0x0002a0cd) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x00033587) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x00033587) main_postcard_pane_g

0x6077,	// (0x0002a0e4) main_postcard_pane_g4

0xc37e,	// (0x000303eb) smil_status_volume_pane_g2

0x60ba,	// (0x0002a127) postcard_pane_ParamLimits

0x60ba,	// (0x0002a127) postcard_pane

0xb042,	// (0x0002f0af) postcard_pane_g1_ParamLimits

0xb042,	// (0x0002f0af) postcard_pane_g1

0x60fc,	// (0x0002a169) postcard_pane_g2_ParamLimits

0x60fc,	// (0x0002a169) postcard_pane_g2

0x6108,	// (0x0002a175) postcard_pane_g3_ParamLimits

0x6108,	// (0x0002a175) postcard_pane_g3

0xb050,	// (0x0002f0bd) postcard_pane_g4_ParamLimits

0xb050,	// (0x0002f0bd) postcard_pane_g4

0x6114,	// (0x0002a181) postcard_pane_g5_ParamLimits

0x6114,	// (0x0002a181) postcard_pane_g5

0x6129,	// (0x0002a196) postcard_pane_g6_ParamLimits

0x6129,	// (0x0002a196) postcard_pane_g6

0xb042,	// (0x0002f0af) postcard_pane_g7_ParamLimits

0xb042,	// (0x0002f0af) postcard_pane_g7

0x0006,

0xf527,	// (0x00033594) postcard_pane_g_ParamLimits

0xf527,	// (0x00033594) postcard_pane_g

0x613d,	// (0x0002a1aa) main_mp2_pane_g1_ParamLimits

0x613d,	// (0x0002a1aa) main_mp2_pane_g1

0x6149,	// (0x0002a1b6) main_mp2_pane_g2_ParamLimits

0x6149,	// (0x0002a1b6) main_mp2_pane_g2

0x6155,	// (0x0002a1c2) main_mp2_pane_g3_ParamLimits

0x6155,	// (0x0002a1c2) main_mp2_pane_g3

0x0002,

0xf536,	// (0x000335a3) main_mp2_pane_g_ParamLimits

0xf536,	// (0x000335a3) main_mp2_pane_g

0x6161,	// (0x0002a1ce) main_mp2_pane_t1_ParamLimits

0x6161,	// (0x0002a1ce) main_mp2_pane_t1

0x6176,	// (0x0002a1e3) main_mp2_pane_t2_ParamLimits

0x6176,	// (0x0002a1e3) main_mp2_pane_t2

0x6188,	// (0x0002a1f5) main_mp2_pane_t3_ParamLimits

0x6188,	// (0x0002a1f5) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x000335aa) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x000335aa) main_mp2_pane_t

0xb05e,	// (0x0002f0cb) pec_content_pane_ParamLimits

0xb05e,	// (0x0002f0cb) pec_content_pane

0x446d,	// (0x000284da) scroll_pane_cp015

0xb070,	// (0x0002f0dd) pec_attribute_pane_ParamLimits

0xb070,	// (0x0002f0dd) pec_attribute_pane

0x619a,	// (0x0002a207) pec_content_pane_g1_ParamLimits

0x619a,	// (0x0002a207) pec_content_pane_g1

0xb080,	// (0x0002f0ed) pec_content_pane_t1_ParamLimits

0xb080,	// (0x0002f0ed) pec_content_pane_t1

0xb092,	// (0x0002f0ff) pec_content_pane_t2_ParamLimits

0xb092,	// (0x0002f0ff) pec_content_pane_t2

0x0001,

0xf544,	// (0x000335b1) pec_content_pane_t_ParamLimits

0xf544,	// (0x000335b1) pec_content_pane_t

0x61a8,	// (0x0002a215) list_single_graphic_pane_cp01_ParamLimits

0x61a8,	// (0x0002a215) list_single_graphic_pane_cp01

0x32e5,	// (0x00027352) bg_popup_sub_pane_cp04

0xb0a4,	// (0x0002f111) popup_mup_playback_window_g1

0xb0b0,	// (0x0002f11d) popup_mup_playback_window_t1

0xb0c5,	// (0x0002f132) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x000335b6) popup_mup_playback_window_t

0xb0fc,	// (0x0002f169) main_image_pane_g1_ParamLimits

0xb0fc,	// (0x0002f169) main_image_pane_g1

0xb13f,	// (0x0002f1ac) scroll_pane_cp018_ParamLimits

0xb13f,	// (0x0002f1ac) scroll_pane_cp018

0xb157,	// (0x0002f1c4) scroll_pane_cp016_ParamLimits

0xb157,	// (0x0002f1c4) scroll_pane_cp016

0x6278,	// (0x0002a2e5) smil2_image_pane_ParamLimits

0x6278,	// (0x0002a2e5) smil2_image_pane

0x62ac,	// (0x0002a319) smil2_root_pane_ParamLimits

0x62ac,	// (0x0002a319) smil2_root_pane

0x62e4,	// (0x0002a351) smil2_text_pane_ParamLimits

0x62e4,	// (0x0002a351) smil2_text_pane

0x308a,	// (0x000270f7) bg_list_pane_cp06

0xb193,	// (0x0002f200) grid_radio_pane

0x308a,	// (0x000270f7) bg_popup_window_pane_cp06

0xb19b,	// (0x0002f208) main_fmradio_pane_t1

0x53e6,	// (0x00029453) heading_pane_cp04

0xb1a9,	// (0x0002f216) main_fmradio_pane_t2

0xc181,	// (0x000301ee) popup_cale_lunar_info_window_g1

0xb1b7,	// (0x0002f224) main_fmradio_pane_t3

0xc189,	// (0x000301f6) popup_cale_lunar_info_window_g2

0xb1c5,	// (0x0002f232) main_fmradio_pane_t4

0x0001,

0xb1d3,	// (0x0002f240) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x00033691) popup_cale_lunar_info_window_g

0xf55e,	// (0x000335cb) main_fmradio_pane_t

0xb1e1,	// (0x0002f24e) wait_bar_pane_cp03

0xb1e9,	// (0x0002f256) cell_fmradio_pane_ParamLimits

0xb1e9,	// (0x0002f256) cell_fmradio_pane

0xb042,	// (0x0002f0af) cell_fmradio_pane_g1_ParamLimits

0xb042,	// (0x0002f0af) cell_fmradio_pane_g1

0x308a,	// (0x000270f7) grid_highlight_pane_cp011

0xb1fc,	// (0x0002f269) poc_content_pane_ParamLimits

0xb1fc,	// (0x0002f269) poc_content_pane

0xb20e,	// (0x0002f27b) scroll_pane_cp019

0x6364,	// (0x0002a3d1) popup_call_poc_act_window_ParamLimits

0x6364,	// (0x0002a3d1) popup_call_poc_act_window

0x6388,	// (0x0002a3f5) popup_call_poc_inact_window_ParamLimits

0x6388,	// (0x0002a3f5) popup_call_poc_inact_window

0xf5fb,	// (0x00033668) bg_popup_call_poc_act_pane_g

0xc0f9,	// (0x00030166) bg_popup_call_poc_inact_pane_g1

0xc101,	// (0x0003016e) bg_popup_call_poc_inact_pane_g2

0xb216,	// (0x0002f283) popup_call_poc_act_window_g2

0xc109,	// (0x00030176) bg_popup_call_poc_inact_pane_g3

0xc111,	// (0x0003017e) bg_popup_call_poc_inact_pane_g4

0xc119,	// (0x00030186) bg_popup_call_poc_inact_pane_g5

0xb21e,	// (0x0002f28b) popup_call_poc_act_window_t1_ParamLimits

0xb21e,	// (0x0002f28b) popup_call_poc_act_window_t1

0xb246,	// (0x0002f2b3) popup_call_poc_act_window_t2_ParamLimits

0xb246,	// (0x0002f2b3) popup_call_poc_act_window_t2

0xb26e,	// (0x0002f2db) popup_call_poc_act_window_t3_ParamLimits

0xb26e,	// (0x0002f2db) popup_call_poc_act_window_t3

0xb296,	// (0x0002f303) popup_call_poc_act_window_t4_ParamLimits

0xb296,	// (0x0002f303) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x000335d6) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x000335d6) popup_call_poc_act_window_t

0xc121,	// (0x0003018e) bg_popup_call_poc_inact_pane_g6

0xc129,	// (0x00030196) bg_popup_call_poc_inact_pane_g7

0xc131,	// (0x0003019e) bg_popup_call_poc_inact_pane_g8

0xb2a8,	// (0x0002f315) popup_call_poc_inact_window_g2

0xc139,	// (0x000301a6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x00033655) bg_popup_call_poc_inact_pane_g

0xb2b0,	// (0x0002f31d) popup_call_poc_inact_window_t1_ParamLimits

0xb2b0,	// (0x0002f31d) popup_call_poc_inact_window_t1

0xb2c5,	// (0x0002f332) popup_call_poc_inact_window_t2_ParamLimits

0xb2c5,	// (0x0002f332) popup_call_poc_inact_window_t2

0xb2da,	// (0x0002f347) popup_call_poc_inact_window_t3_ParamLimits

0xb2da,	// (0x0002f347) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x000335df) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x000335df) popup_call_poc_inact_window_t

0xc2f1,	// (0x0003035e) context_pane_ParamLimits

0x6bb2,	// (0x0002ac1f) signal_pane_ParamLimits

0x59c0,	// (0x00029a2d) main_call2_pane

0xc2df,	// (0x0003034c) popup_phob_thumbnail2_window_ParamLimits

0xc2df,	// (0x0003034c) popup_phob_thumbnail2_window

0xaff2,	// (0x0002f05f) aid_hotspot_pointer_arrow_pane

0xaffa,	// (0x0002f067) aid_hotspot_pointer_hand_pane

0x66d6,	// (0x0002a743) phob_pre_status_pane_g5

0x3b5f,	// (0x00027bcc) cams_zoom_pane_ParamLimits

0x3b6e,	// (0x00027bdb) image_vga_pane_ParamLimits

0x3b88,	// (0x00027bf5) main_camera_pane_g1_ParamLimits

0x3b9a,	// (0x00027c07) main_camera_pane_g2_ParamLimits

0x3bac,	// (0x00027c19) main_camera_pane_g3_ParamLimits

0x3bbe,	// (0x00027c2b) main_camera_pane_g4_ParamLimits

0x3bd0,	// (0x00027c3d) main_camera_pane_g5_ParamLimits

0x3be2,	// (0x00027c4f) main_camera_pane_g6_ParamLimits

0x3bf4,	// (0x00027c61) main_camera_pane_g7_ParamLimits

0xf271,	// (0x000332de) main_camera_pane_g_ParamLimits

0x3c12,	// (0x00027c7f) main_camera_pane_t1_ParamLimits

0x3c28,	// (0x00027c95) main_camera_pane_t2_ParamLimits

0xf282,	// (0x000332ef) main_camera_pane_t_ParamLimits

0x32e5,	// (0x00027352) bg_popup_preview_window_pane_cp01_ParamLimits

0x32e5,	// (0x00027352) bg_popup_preview_window_pane_cp01

0xb2ef,	// (0x0002f35c) popup_phob_thumbnail2_window_g1_ParamLimits

0xb2ef,	// (0x0002f35c) popup_phob_thumbnail2_window_g1

0x308a,	// (0x000270f7) call2_cli_visual_pane

0x63bc,	// (0x0002a429) popup_call2_audio_conf_window_ParamLimits

0x63bc,	// (0x0002a429) popup_call2_audio_conf_window

0x63dc,	// (0x0002a449) popup_call2_audio_first_window_ParamLimits

0x63dc,	// (0x0002a449) popup_call2_audio_first_window

0x6472,	// (0x0002a4df) popup_call2_audio_in_window_ParamLimits

0x6472,	// (0x0002a4df) popup_call2_audio_in_window

0x64ba,	// (0x0002a527) popup_call2_audio_out_window_ParamLimits

0x64ba,	// (0x0002a527) popup_call2_audio_out_window

0x6524,	// (0x0002a591) popup_call2_audio_second_window_ParamLimits

0x6524,	// (0x0002a591) popup_call2_audio_second_window

0x658a,	// (0x0002a5f7) popup_call2_audio_wait_window_ParamLimits

0x658a,	// (0x0002a5f7) popup_call2_audio_wait_window

0x308a,	// (0x000270f7) bg_popup_call2_act_pane_cp03

0x32c7,	// (0x00027334) list_conf_pane_cp

0xb2fb,	// (0x0002f368) popup_call2_audio_conf_window_t1

0xb309,	// (0x0002f376) list_single_graphic_popup_conf2_pane_ParamLimits

0xb309,	// (0x0002f376) list_single_graphic_popup_conf2_pane

0x5479,	// (0x000294e6) list_highlight_pane_cp04

0xb31c,	// (0x0002f389) list_single_graphic_popup_conf2_pane_g1

0x548a,	// (0x000294f7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x000335e6) list_single_graphic_popup_conf2_pane_g

0xb326,	// (0x0002f393) list_single_graphic_popup_conf2_pane_t1

0xb334,	// (0x0002f3a1) bg_popup_call2_act_pane_cp01_ParamLimits

0xb334,	// (0x0002f3a1) bg_popup_call2_act_pane_cp01

0xb3be,	// (0x0002f42b) call_type_pane_cp05_ParamLimits

0xb3be,	// (0x0002f42b) call_type_pane_cp05

0xb412,	// (0x0002f47f) popup_call2_audio_second_window_g1_ParamLimits

0xb412,	// (0x0002f47f) popup_call2_audio_second_window_g1

0xb466,	// (0x0002f4d3) popup_call2_audio_second_window_g2_ParamLimits

0xb466,	// (0x0002f4d3) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x000335eb) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x000335eb) popup_call2_audio_second_window_g

0xb4cb,	// (0x0002f538) popup_call2_audio_second_window_t1_ParamLimits

0xb4cb,	// (0x0002f538) popup_call2_audio_second_window_t1

0xb586,	// (0x0002f5f3) popup_call2_audio_second_window_t2_ParamLimits

0xb586,	// (0x0002f5f3) popup_call2_audio_second_window_t2

0xb5d9,	// (0x0002f646) popup_call2_audio_second_window_t3_ParamLimits

0xb5d9,	// (0x0002f646) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x000335f2) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x000335f2) popup_call2_audio_second_window_t

0x308a,	// (0x000270f7) bg_popup_call2_in_pane_cp02

0x3094,	// (0x00027101) call_type_pane_cp04

0x309c,	// (0x00027109) popup_call2_audio_wait_window_g1

0x30a4,	// (0x00027111) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x000331cb) popup_call2_audio_wait_window_g

0x30ac,	// (0x00027119) popup_call2_audio_wait_window_t3

0xb6cc,	// (0x0002f739) bg_popup_call2_act_pane_ParamLimits

0xb6cc,	// (0x0002f739) bg_popup_call2_act_pane

0xb78c,	// (0x0002f7f9) call_type_pane_cp03_ParamLimits

0xb78c,	// (0x0002f7f9) call_type_pane_cp03

0xb7f0,	// (0x0002f85d) popup_call2_audio_first_window_g1_ParamLimits

0xb7f0,	// (0x0002f85d) popup_call2_audio_first_window_g1

0xb860,	// (0x0002f8cd) popup_call2_audio_first_window_g2_ParamLimits

0xb860,	// (0x0002f8cd) popup_call2_audio_first_window_g2

0x5cb0,	// (0x00029d1d) popup_call2_audio_first_window_g3_ParamLimits

0x5cb0,	// (0x00029d1d) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x000335fb) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x000335fb) popup_call2_audio_first_window_g

0xb93e,	// (0x0002f9ab) popup_call2_audio_first_window_t1_ParamLimits

0xb93e,	// (0x0002f9ab) popup_call2_audio_first_window_t1

0xba41,	// (0x0002faae) popup_call2_audio_first_window_t4_ParamLimits

0xba41,	// (0x0002faae) popup_call2_audio_first_window_t4

0xbb24,	// (0x0002fb91) popup_call2_audio_first_window_t5_ParamLimits

0xbb24,	// (0x0002fb91) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x00033606) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x00033606) popup_call2_audio_first_window_t

0x32dd,	// (0x0002734a) bg_popup_call2_act_pane_g1

0xc191,	// (0x000301fe) popup_cale_lunar_info_window_t1

0xc19f,	// (0x0003020c) popup_cale_lunar_info_window_t2

0xc1ad,	// (0x0003021a) popup_cale_lunar_info_window_t3

0x308a,	// (0x000270f7) bg_popup_call2_bubble_pane

0xbc25,	// (0x0002fc92) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc25,	// (0x0002fc92) bg_popup_call2_in_pane_cp01

0x2d42,	// (0x00026daf) call_type_pane_cp02

0xbc6d,	// (0x0002fcda) popup_call2_audio_out_window_g1_ParamLimits

0xbc6d,	// (0x0002fcda) popup_call2_audio_out_window_g1

0xbc99,	// (0x0002fd06) popup_call2_audio_out_window_g2_ParamLimits

0xbc99,	// (0x0002fd06) popup_call2_audio_out_window_g2

0xbcc1,	// (0x0002fd2e) popup_call2_audio_out_window_g3_ParamLimits

0xbcc1,	// (0x0002fd2e) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0003360f) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0003360f) popup_call2_audio_out_window_g

0xbcfc,	// (0x0002fd69) popup_call2_audio_out_window_t1_ParamLimits

0xbcfc,	// (0x0002fd69) popup_call2_audio_out_window_t1

0xbd5b,	// (0x0002fdc8) popup_call2_audio_out_window_t2_ParamLimits

0xbd5b,	// (0x0002fdc8) popup_call2_audio_out_window_t2

0xbdaf,	// (0x0002fe1c) popup_call2_audio_out_window_t3_ParamLimits

0xbdaf,	// (0x0002fe1c) popup_call2_audio_out_window_t3

0xbdc5,	// (0x0002fe32) popup_call2_audio_out_window_t4_ParamLimits

0xbdc5,	// (0x0002fe32) popup_call2_audio_out_window_t4

0xbddb,	// (0x0002fe48) popup_call2_audio_out_window_t5_ParamLimits

0xbddb,	// (0x0002fe48) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x00033618) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x00033618) popup_call2_audio_out_window_t

0xbe3f,	// (0x0002feac) bg_popup_call2_in_pane_ParamLimits

0xbe3f,	// (0x0002feac) bg_popup_call2_in_pane

0xbe9b,	// (0x0002ff08) popup_call2_audio_in_window_g1_ParamLimits

0xbe9b,	// (0x0002ff08) popup_call2_audio_in_window_g1

0xbed3,	// (0x0002ff40) popup_call2_audio_in_window_g2_ParamLimits

0xbed3,	// (0x0002ff40) popup_call2_audio_in_window_g2

0xbf0b,	// (0x0002ff78) popup_call2_audio_in_window_g3_ParamLimits

0xbf0b,	// (0x0002ff78) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x00033625) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x00033625) popup_call2_audio_in_window_g

0xbf63,	// (0x0002ffd0) popup_call2_audio_in_window_t1_ParamLimits

0xbf63,	// (0x0002ffd0) popup_call2_audio_in_window_t1

0xbfe3,	// (0x00030050) popup_call2_audio_in_window_t2_ParamLimits

0xbfe3,	// (0x00030050) popup_call2_audio_in_window_t2

0xc063,	// (0x000300d0) popup_call2_audio_in_window_t3_ParamLimits

0xc063,	// (0x000300d0) popup_call2_audio_in_window_t3

0xc07d,	// (0x000300ea) popup_call2_audio_in_window_t4_ParamLimits

0xc07d,	// (0x000300ea) popup_call2_audio_in_window_t4

0xc08f,	// (0x000300fc) popup_call2_audio_in_window_t5_ParamLimits

0xc08f,	// (0x000300fc) popup_call2_audio_in_window_t5

0xc0a4,	// (0x00030111) popup_call2_audio_in_window_t6_ParamLimits

0xc0a4,	// (0x00030111) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0003362e) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0003362e) popup_call2_audio_in_window_t

0x32dd,	// (0x0002734a) bg_popup_call2_in_pane_g1

0xc1bb,	// (0x00030228) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x00033696) popup_cale_lunar_info_window_t

0x32e5,	// (0x00027352) bg_popup_call2_rect_pane_ParamLimits

0x32e5,	// (0x00027352) bg_popup_call2_rect_pane

0x308a,	// (0x000270f7) call2_cli_visual_graphic_pane

0x308a,	// (0x000270f7) call2_cli_visual_text_pane

0xc391,	// (0x000303fe) smil_status_volume_pane_g3

0x0002,

0x3671,	// (0x000276de) call2_cli_visual_graphic_pane_g1

0x3671,	// (0x000276de) call2_cli_visual_graphic_pane_g2

0x3671,	// (0x000276de) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0003363b) call2_cli_visual_graphic_pane_g

0xc0b9,	// (0x00030126) bg_popup_call2_rect_pane_g1

0x378a,	// (0x000277f7) bg_popup_call2_rect_pane_g2

0xc0c1,	// (0x0003012e) bg_popup_call2_rect_pane_g3

0xc0c9,	// (0x00030136) bg_popup_call2_rect_pane_g4

0xc0d1,	// (0x0003013e) bg_popup_call2_rect_pane_g5

0xc0d9,	// (0x00030146) bg_popup_call2_rect_pane_g6

0xc0e1,	// (0x0003014e) bg_popup_call2_rect_pane_g7

0xc0e9,	// (0x00030156) bg_popup_call2_rect_pane_g8

0xc0f1,	// (0x0003015e) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x00033642) bg_popup_call2_rect_pane_g

0xc0f9,	// (0x00030166) bg_popup_call2_bubble_pane_g1

0xc101,	// (0x0003016e) bg_popup_call2_bubble_pane_g2

0xc109,	// (0x00030176) bg_popup_call2_bubble_pane_g3

0xc111,	// (0x0003017e) bg_popup_call2_bubble_pane_g4

0xc119,	// (0x00030186) bg_popup_call2_bubble_pane_g5

0xc121,	// (0x0003018e) bg_popup_call2_bubble_pane_g6

0xc129,	// (0x00030196) bg_popup_call2_bubble_pane_g7

0xc131,	// (0x0003019e) bg_popup_call2_bubble_pane_g8

0xc139,	// (0x000301a6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x00033655) bg_popup_call2_bubble_pane_g

0x37f6,	// (0x00027863) aid_cale_week_size_cell_pane

0x3c40,	// (0x00027cad) aid_cams_cif_uncrop_pane_ParamLimits

0x3c40,	// (0x00027cad) aid_cams_cif_uncrop_pane

0x3e3b,	// (0x00027ea8) aid_cams_size_cell_ParamLimits

0x3e3b,	// (0x00027ea8) aid_cams_size_cell

0x3e4f,	// (0x00027ebc) grid_cams_pane_ParamLimits

0x3e69,	// (0x00027ed6) linegrid_cams_pane_ParamLimits

0x409e,	// (0x0002810b) call_video_pane_t1

0x40b2,	// (0x0002811f) call_video_pane_t2

0x0001,

0xf2d5,	// (0x00033342) call_video_pane_t

0x46bc,	// (0x00028729) aid_cale_month_size_cell_pane_ParamLimits

0x46bc,	// (0x00028729) aid_cale_month_size_cell_pane

0xf672,	// (0x000336df) smil_status_volume_pane_g

0xc39e,	// (0x0003040b) volume_smil_pane_ParamLimits

0x2956,	// (0x000269c3) aid_popup2_width_pane

0x36e2,	// (0x0002774f) cell_qdial_pane_g4_ParamLimits

0x36e2,	// (0x0002774f) cell_qdial_pane_g4

0x5756,	// (0x000297c3) aid_blid_cardinal_pane_ParamLimits

0x5762,	// (0x000297cf) aid_blid_destination_pane_ParamLimits

0x5762,	// (0x000297cf) aid_blid_destination_pane

0x32e5,	// (0x00027352) bg_popup_call_poc_act_pane_ParamLimits

0x32e5,	// (0x00027352) bg_popup_call_poc_act_pane

0x32e5,	// (0x00027352) bg_popup_call_poc_inact_pane_ParamLimits

0x32e5,	// (0x00027352) bg_popup_call_poc_inact_pane

0xc141,	// (0x000301ae) bg_popup_call_poc_act_pane_g1

0xc149,	// (0x000301b6) bg_popup_call_poc_act_pane_g2

0xc151,	// (0x000301be) bg_popup_call_poc_act_pane_g3

0xc111,	// (0x0003017e) bg_popup_call_poc_act_pane_g4

0xc119,	// (0x00030186) bg_popup_call_poc_act_pane_g5

0xc159,	// (0x000301c6) bg_popup_call_poc_act_pane_g6

0xc129,	// (0x00030196) bg_popup_call_poc_act_pane_g7

0xc161,	// (0x000301ce) bg_popup_call_poc_act_pane_g8

0x308a,	// (0x000270f7) main_usb_pane

0xc2ba,	// (0x00030327) popup_cale_lunar_info_window

0x434f,	// (0x000283bc) im_reading_pane_t1_ParamLimits

0x438b,	// (0x000283f8) list_im_pane_ParamLimits

0x439c,	// (0x00028409) scroll_pane_cp07_ParamLimits

0x308a,	// (0x000270f7) grid_highlight_pane_cp012

0x32e5,	// (0x00027352) mup_scale_pane_ParamLimits

0xb042,	// (0x0002f0af) main_usb_pane_g1_ParamLimits

0xb042,	// (0x0002f0af) main_usb_pane_g1

0x65e9,	// (0x0002a656) main_usb_pane_g2_ParamLimits

0x65e9,	// (0x0002a656) main_usb_pane_g2

0x0001,

0xf612,	// (0x0003367f) main_usb_pane_g_ParamLimits

0xf612,	// (0x0003367f) main_usb_pane_g

0x65ff,	// (0x0002a66c) main_usb_pane_t1_ParamLimits

0x65ff,	// (0x0002a66c) main_usb_pane_t1

0x6611,	// (0x0002a67e) main_usb_pane_t2_ParamLimits

0x6611,	// (0x0002a67e) main_usb_pane_t2

0x6623,	// (0x0002a690) main_usb_pane_t3_ParamLimits

0x6623,	// (0x0002a690) main_usb_pane_t3

0x6635,	// (0x0002a6a2) main_usb_pane_t4_ParamLimits

0x6635,	// (0x0002a6a2) main_usb_pane_t4

0x6647,	// (0x0002a6b4) main_usb_pane_t5_ParamLimits

0x6647,	// (0x0002a6b4) main_usb_pane_t5

0x6659,	// (0x0002a6c6) main_usb_pane_t6_ParamLimits

0x6659,	// (0x0002a6c6) main_usb_pane_t6

0x0005,

0xf617,	// (0x00033684) main_usb_pane_t_ParamLimits

0x56fb,	// (0x00029768) aid_text_placing

0x5704,	// (0x00029771) main_location2_pane_t1_ParamLimits

0x5718,	// (0x00029785) main_location2_pane_t2_ParamLimits

0x572c,	// (0x00029799) main_location2_pane_t3_ParamLimits

0x5742,	// (0x000297af) main_location2_pane_t4_ParamLimits

0x5742,	// (0x000297af) main_location2_pane_t4

0xf436,	// (0x000334a3) main_location2_pane_t_ParamLimits

0x33bd,	// (0x0002742a) find_pinb_pane_g2_ParamLimits

0x33bd,	// (0x0002742a) find_pinb_pane_g2

0x0001,

0xf184,	// (0x000331f1) find_pinb_pane_g_ParamLimits

0xf184,	// (0x000331f1) find_pinb_pane_g

0x33c9,	// (0x00027436) find_pinb_pane_t1_ParamLimits

0x33db,	// (0x00027448) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x000331f6) find_pinb_pane_t_ParamLimits

0x308a,	// (0x000270f7) main_call3_pane

0x49e9,	// (0x00028a56) cale_month_day_heading_pane_t1_ParamLimits

0x4a47,	// (0x00028ab4) cale_month_day_heading_pane_t2_ParamLimits

0x4aac,	// (0x00028b19) cale_month_day_heading_pane_t3_ParamLimits

0x4b11,	// (0x00028b7e) cale_month_day_heading_pane_t4_ParamLimits

0x4b76,	// (0x00028be3) cale_month_day_heading_pane_t5_ParamLimits

0x4bdb,	// (0x00028c48) cale_month_day_heading_pane_t6_ParamLimits

0x4c40,	// (0x00028cad) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0003337a) cale_month_day_heading_pane_t_ParamLimits

0x4e2c,	// (0x00028e99) smil_status_volume_pane

0x60d8,	// (0x0002a145) postcard_address_pane_ParamLimits

0x60d8,	// (0x0002a145) postcard_address_pane

0x60ea,	// (0x0002a157) postcard_message_pane_ParamLimits

0x60ea,	// (0x0002a157) postcard_message_pane

0x65c4,	// (0x0002a631) call2_cli_visual_pane_t1_ParamLimits

0x65c4,	// (0x0002a631) call2_cli_visual_pane_t1

0x6de0,	// (0x0002ae4d) postcard_message_pane_t1_ParamLimits

0x6de0,	// (0x0002ae4d) postcard_message_pane_t1

0x6dc9,	// (0x0002ae36) postcard_address_pane_t1_ParamLimits

0x6dc9,	// (0x0002ae36) postcard_address_pane_t1

0x6db5,	// (0x0002ae22) popup_call3_audio_in_window_ParamLimits

0x6db5,	// (0x0002ae22) popup_call3_audio_in_window

0x6c44,	// (0x0002acb1) bg_popup_call3_in_pane_ParamLimits

0x6c44,	// (0x0002acb1) bg_popup_call3_in_pane

0x6cb6,	// (0x0002ad23) popup_call3_audio_in_window_g1_ParamLimits

0x6cb6,	// (0x0002ad23) popup_call3_audio_in_window_g1

0x6cd6,	// (0x0002ad43) popup_call3_audio_in_window_g2_ParamLimits

0x6cd6,	// (0x0002ad43) popup_call3_audio_in_window_g2

0x6cf6,	// (0x0002ad63) popup_call3_audio_in_window_g3_ParamLimits

0x6cf6,	// (0x0002ad63) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x000336e6) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x000336e6) popup_call3_audio_in_window_g

0x6d27,	// (0x0002ad94) popup_call3_audio_in_window_t1_ParamLimits

0x6d27,	// (0x0002ad94) popup_call3_audio_in_window_t1

0x6d65,	// (0x0002add2) popup_call3_audio_in_window_t2_ParamLimits

0x6d65,	// (0x0002add2) popup_call3_audio_in_window_t2

0x6da3,	// (0x0002ae10) popup_call3_audio_in_window_t3_ParamLimits

0x6da3,	// (0x0002ae10) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x000336ef) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x000336ef) popup_call3_audio_in_window_t

0x59c0,	// (0x00029a2d) bg_popup_call3_rect_pane

0xc0b9,	// (0x00030126) bg_popup_call3_rect_pane_g1

0x378a,	// (0x000277f7) bg_popup_call3_rect_pane_g2

0xc0c1,	// (0x0003012e) bg_popup_call3_rect_pane_g3

0xc0c9,	// (0x00030136) bg_popup_call3_rect_pane_g4

0xc0d1,	// (0x0003013e) bg_popup_call3_rect_pane_g5

0xc0d9,	// (0x00030146) bg_popup_call3_rect_pane_g6

0xc0e1,	// (0x0003014e) bg_popup_call3_rect_pane_g7

0x5ca8,	// (0x00029d15) mup_visualizer_osc_pane

0x5cbe,	// (0x00029d2b) mup_visualizer_spec_pane

0x6c74,	// (0x0002ace1) call3_video_qcif_pane_ParamLimits

0x6c74,	// (0x0002ace1) call3_video_qcif_pane

0x6c85,	// (0x0002acf2) call3_video_qcif_uncrop_pane_ParamLimits

0x6c85,	// (0x0002acf2) call3_video_qcif_uncrop_pane

0x6c91,	// (0x0002acfe) call3_video_subqcif_pane_ParamLimits

0x6c91,	// (0x0002acfe) call3_video_subqcif_pane

0x6ca5,	// (0x0002ad12) call3_video_subqcif_uncrop_pane_ParamLimits

0x6ca5,	// (0x0002ad12) call3_video_subqcif_uncrop_pane

0x6d16,	// (0x0002ad83) popup_call3_audio_in_window_g4_ParamLimits

0x6d16,	// (0x0002ad83) popup_call3_audio_in_window_g4

0x6c33,	// (0x0002aca0) mup_spec_half_pane

0x6c3c,	// (0x0002aca9) mup_spec_half_pane_cp

0xc351,	// (0x000303be) mup_osc_middle_pane

0xc35a,	// (0x000303c7) mup_visualizer_osc_pane_g1

0x6c13,	// (0x0002ac80) mup_spec_bar_pane_ParamLimits

0x6c13,	// (0x0002ac80) mup_spec_bar_pane

0xc33e,	// (0x000303ab) mup_spec_bar_pane_g1

0xc348,	// (0x000303b5) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x000336da) mup_spec_bar_pane_g

0x37f6,	// (0x00027863) aid_cale_week_size_cell_pane_ParamLimits

0x3809,	// (0x00027876) bg_cale_heading_pane_ParamLimits

0x3821,	// (0x0002788e) bg_cale_pane_cp01_ParamLimits

0x383a,	// (0x000278a7) cale_week_corner_pane_ParamLimits

0x384b,	// (0x000278b8) cale_week_day_heading_pane_ParamLimits

0x3863,	// (0x000278d0) cale_week_scroll_pane_g1_ParamLimits

0x3878,	// (0x000278e5) cale_week_scroll_pane_g2_ParamLimits

0x3889,	// (0x000278f6) cale_week_scroll_pane_g3_ParamLimits

0x389a,	// (0x00027907) cale_week_scroll_pane_g4_ParamLimits

0x38ab,	// (0x00027918) cale_week_scroll_pane_g5_ParamLimits

0x38bc,	// (0x00027929) cale_week_scroll_pane_g6_ParamLimits

0x38cd,	// (0x0002793a) cale_week_scroll_pane_g7_ParamLimits

0x38de,	// (0x0002794b) cale_week_scroll_pane_g8_ParamLimits

0x38ef,	// (0x0002795c) cale_week_scroll_pane_g9_ParamLimits

0x3900,	// (0x0002796d) cale_week_scroll_pane_g10_ParamLimits

0x3911,	// (0x0002797e) cale_week_scroll_pane_g11_ParamLimits

0x3922,	// (0x0002798f) cale_week_scroll_pane_g12_ParamLimits

0x3933,	// (0x000279a0) cale_week_scroll_pane_g13_ParamLimits

0x3944,	// (0x000279b1) cale_week_scroll_pane_g14_ParamLimits

0x3955,	// (0x000279c2) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x00033282) cale_week_scroll_pane_g_ParamLimits

0x3966,	// (0x000279d3) cale_week_time_pane_ParamLimits

0x3977,	// (0x000279e4) grid_cale_week_pane_ParamLimits

0x398a,	// (0x000279f7) listscroll_cale_week_pane_t1

0x399c,	// (0x00027a09) scroll_pane_cp08_ParamLimits

0x4720,	// (0x0002878d) cale_month_corner_pane_ParamLimits

0x49a0,	// (0x00028a0d) cale_month_pane_t1

0x49b2,	// (0x00028a1f) cale_month_week_pane_ParamLimits

0x5345,	// (0x000293b2) popup_call_status_window_g1_ParamLimits

0x5359,	// (0x000293c6) popup_call_status_window_g2_ParamLimits

0x536d,	// (0x000293da) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0003342a) popup_call_status_window_g_ParamLimits

0x53d6,	// (0x00029443) aid_call2_pane

0x5f78,	// (0x00029fe5) msg_header_pane_g1

0x60d8,	// (0x0002a145) postcard_address2_pane_ParamLimits

0x60d8,	// (0x0002a145) postcard_address2_pane

0x60ea,	// (0x0002a157) postcard_message2_pane_ParamLimits

0x60ea,	// (0x0002a157) postcard_message2_pane

0x6bc0,	// (0x0002ac2d) message2_row_pane_ParamLimits

0x6bc0,	// (0x0002ac2d) message2_row_pane

0x6bdf,	// (0x0002ac4c) address2_row_pane_ParamLimits

0x6bdf,	// (0x0002ac4c) address2_row_pane

0xc30c,	// (0x00030379) postcard_message2_row_pane_g1

0xc314,	// (0x00030381) postcard_message2_row_pane_t1

0xc30c,	// (0x00030379) address2_row_pane_g1

0xc314,	// (0x00030381) address2_row_pane_t1

0xae0f,	// (0x0002ee7c) aid_size_cell_vorec

0x308a,	// (0x000270f7) main_rss_pane

0x6bf2,	// (0x0002ac5f) rss_list_single_pane_ParamLimits

0x6bf2,	// (0x0002ac5f) rss_list_single_pane

0xc322,	// (0x0003038f) rss_list_single_pane_t1

0xc330,	// (0x0003039d) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x000336d5) rss_list_single_pane_t

0x308a,	// (0x000270f7) main_camera2_pane

0x308a,	// (0x000270f7) main_video2_pane

0x1993,	// (0x00025a00) cams_zoom_pane_cp2_ParamLimits

0x1993,	// (0x00025a00) cams_zoom_pane_cp2

0x19b3,	// (0x00025a20) image2_vga_pane_ParamLimits

0x19b3,	// (0x00025a20) image2_vga_pane

0x1a04,	// (0x00025a71) main_camera2_pane_g1_ParamLimits

0x1a04,	// (0x00025a71) main_camera2_pane_g1

0x1a24,	// (0x00025a91) main_camera2_pane_g2_ParamLimits

0x1a24,	// (0x00025a91) main_camera2_pane_g2

0x1a44,	// (0x00025ab1) main_camera2_pane_g3_ParamLimits

0x1a44,	// (0x00025ab1) main_camera2_pane_g3

0x1a64,	// (0x00025ad1) main_camera2_pane_g4_ParamLimits

0x1a64,	// (0x00025ad1) main_camera2_pane_g4

0x1a84,	// (0x00025af1) main_camera2_pane_g5_ParamLimits

0x1a84,	// (0x00025af1) main_camera2_pane_g5

0x1aa4,	// (0x00025b11) main_camera2_pane_g6_ParamLimits

0x1aa4,	// (0x00025b11) main_camera2_pane_g6

0x1ac4,	// (0x00025b31) main_camera2_pane_g7_ParamLimits

0x1ac4,	// (0x00025b31) main_camera2_pane_g7

0x1ae4,	// (0x00025b51) main_camera2_pane_g8_ParamLimits

0x1ae4,	// (0x00025b51) main_camera2_pane_g8

0x0008,

0xf689,	// (0x000336f6) main_camera2_pane_g_ParamLimits

0xf689,	// (0x000336f6) main_camera2_pane_g

0x1b24,	// (0x00025b91) main_camera2_pane_t1_ParamLimits

0x1b24,	// (0x00025b91) main_camera2_pane_t1

0x1b59,	// (0x00025bc6) main_camera2_pane_t2_ParamLimits

0x1b59,	// (0x00025bc6) main_camera2_pane_t2

0x1b7f,	// (0x00025bec) main_camera2_pane_t3_ParamLimits

0x1b7f,	// (0x00025bec) main_camera2_pane_t3

0x1bdd,	// (0x00025c4a) main_camera2_pane_t4_ParamLimits

0x1bdd,	// (0x00025c4a) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x00033709) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x00033709) main_camera2_pane_t

0x1c6f,	// (0x00025cdc) cams_zoom_pane_cp4_ParamLimits

0x1c6f,	// (0x00025cdc) cams_zoom_pane_cp4

0x1c85,	// (0x00025cf2) image2_cif_pane_ParamLimits

0x1c85,	// (0x00025cf2) image2_cif_pane

0x1cb0,	// (0x00025d1d) image2_subqcif_pane_ParamLimits

0x1cb0,	// (0x00025d1d) image2_subqcif_pane

0x1cca,	// (0x00025d37) main_video2_pane_g1_ParamLimits

0x1cca,	// (0x00025d37) main_video2_pane_g1

0x1ce4,	// (0x00025d51) main_video2_pane_g2_ParamLimits

0x1ce4,	// (0x00025d51) main_video2_pane_g2

0x1cfa,	// (0x00025d67) main_video2_pane_g3_ParamLimits

0x1cfa,	// (0x00025d67) main_video2_pane_g3

0x1d10,	// (0x00025d7d) main_video2_pane_g4_ParamLimits

0x1d10,	// (0x00025d7d) main_video2_pane_g4

0x1d26,	// (0x00025d93) main_video2_pane_g5_ParamLimits

0x1d26,	// (0x00025d93) main_video2_pane_g5

0x1d3c,	// (0x00025da9) main_video2_pane_g6_ParamLimits

0x1d3c,	// (0x00025da9) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x00033718) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x00033718) main_video2_pane_g

0x1d56,	// (0x00025dc3) main_video2_pane_t1_ParamLimits

0x1d56,	// (0x00025dc3) main_video2_pane_t1

0x1d7a,	// (0x00025de7) main_video2_pane_t2_ParamLimits

0x1d7a,	// (0x00025de7) main_video2_pane_t2

0x1dc8,	// (0x00025e35) main_video2_pane_t3_ParamLimits

0x1dc8,	// (0x00025e35) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x00033725) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x00033725) main_video2_pane_t

0x6716,	// (0x0002a783) call_muted_g2

0x0001,

0xf65a,	// (0x000336c7) call_muted_g

0x308a,	// (0x000270f7) main_mup2_pane

0x6dfb,	// (0x0002ae68) main_mup2_pane_g1_ParamLimits

0x6dfb,	// (0x0002ae68) main_mup2_pane_g1

0x6e07,	// (0x0002ae74) main_mup2_pane_g2_ParamLimits

0x6e07,	// (0x0002ae74) main_mup2_pane_g2

0xc4c2,	// (0x0003052f) main_mup_pane_g13_cp1

0xc4ca,	// (0x00030537) mup_volume_pane_cp1

0x6e23,	// (0x0002ae90) main_mup2_pane_g4_ParamLimits

0x6e23,	// (0x0002ae90) main_mup2_pane_g4

0x6e35,	// (0x0002aea2) main_mup2_pane_g5_ParamLimits

0x6e35,	// (0x0002aea2) main_mup2_pane_g5

0x6e47,	// (0x0002aeb4) main_mup2_pane_g6_ParamLimits

0x6e47,	// (0x0002aeb4) main_mup2_pane_g6

0x6e59,	// (0x0002aec6) main_mup2_pane_g7_ParamLimits

0x6e59,	// (0x0002aec6) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0003372c) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0003372c) main_mup2_pane_g

0x6e71,	// (0x0002aede) main_mup2_pane_t1_ParamLimits

0x6e71,	// (0x0002aede) main_mup2_pane_t1

0x6e87,	// (0x0002aef4) main_mup2_pane_t2_ParamLimits

0x6e87,	// (0x0002aef4) main_mup2_pane_t2

0x6e9d,	// (0x0002af0a) main_mup2_pane_t3_ParamLimits

0x6e9d,	// (0x0002af0a) main_mup2_pane_t3

0x6eb3,	// (0x0002af20) main_mup2_pane_t4_ParamLimits

0x6eb3,	// (0x0002af20) main_mup2_pane_t4

0x6ecb,	// (0x0002af38) main_mup2_pane_t5_ParamLimits

0x6ecb,	// (0x0002af38) main_mup2_pane_t5

0x6ee3,	// (0x0002af50) main_mup2_pane_t6_ParamLimits

0x6ee3,	// (0x0002af50) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0003373b) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0003373b) main_mup2_pane_t

0x6f13,	// (0x0002af80) mup2_visualizer_pane_ParamLimits

0x6f13,	// (0x0002af80) mup2_visualizer_pane

0x6f41,	// (0x0002afae) mup_progress_pane_cp_ParamLimits

0x6f41,	// (0x0002afae) mup_progress_pane_cp

0xc4a4,	// (0x00030511) mup_volume_pane_cp_ParamLimits

0xc4a4,	// (0x00030511) mup_volume_pane_cp

0x6f55,	// (0x0002afc2) mup2_visualizer_pane_g1_ParamLimits

0x6f55,	// (0x0002afc2) mup2_visualizer_pane_g1

0xc3e3,	// (0x00030450) mup2_visualizer_pane_g2_ParamLimits

0xc3e3,	// (0x00030450) mup2_visualizer_pane_g2

0x6f6c,	// (0x0002afd9) mup2_visualizer_pane_g3_ParamLimits

0x6f6c,	// (0x0002afd9) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x00033748) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x00033748) mup2_visualizer_pane_g

0xb18b,	// (0x0002f1f8) aid_size_cell_fmradio

0x68c8,	// (0x0002a935) aid_height_parent_landcape

0x4454,	// (0x000284c1) wml_content_pane_cp

0x445c,	// (0x000284c9) wml_tabs_pane

0x4465,	// (0x000284d2) popup_wml_miniature_window

0x446d,	// (0x000284da) scroll_pane_cp021

0x4481,	// (0x000284ee) wml_content_pane_comp8

0x308a,	// (0x000270f7) bg_popup_sub_pane_cp05

0xc401,	// (0x0003046e) popup_wml_miniature_window_g1

0xc409,	// (0x00030476) wml_miniature_view_pane

0x6f78,	// (0x0002afe5) aid_size_wml_view

0x6f80,	// (0x0002afed) wml_miniature_view_pane_g1

0x6f89,	// (0x0002aff6) wml_miniature_view_pane_g2

0x6f92,	// (0x0002afff) wml_miniature_view_pane_g3

0x6f9a,	// (0x0002b007) wml_miniature_view_pane_g4

0x6fa2,	// (0x0002b00f) wml_miniature_view_pane_g5

0x6faa,	// (0x0002b017) wml_miniature_view_pane_g6

0x6fb2,	// (0x0002b01f) wml_miniature_view_pane_g7

0x6fba,	// (0x0002b027) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0003374f) wml_miniature_view_pane_g

0xc411,	// (0x0003047e) background_graphic_ParamLimits

0xc411,	// (0x0003047e) background_graphic

0xc41d,	// (0x0003048a) wml_tabs_2_pane

0xc426,	// (0x00030493) wml_tabs_3_pane_ParamLimits

0xc426,	// (0x00030493) wml_tabs_3_pane

0xc438,	// (0x000304a5) wml_tabs_4_pane_ParamLimits

0xc438,	// (0x000304a5) wml_tabs_4_pane

0xc44e,	// (0x000304bb) wml_tabs_5_pane_ParamLimits

0xc44e,	// (0x000304bb) wml_tabs_5_pane

0xc468,	// (0x000304d5) wml_tabs_pane_g2_ParamLimits

0xc468,	// (0x000304d5) wml_tabs_pane_g2

0xc47c,	// (0x000304e9) wml_tabs_pane_g3_ParamLimits

0xc47c,	// (0x000304e9) wml_tabs_pane_g3

0x6fc2,	// (0x0002b02f) wml_tabs_2_active_pane_ParamLimits

0x6fc2,	// (0x0002b02f) wml_tabs_2_active_pane

0x6fd6,	// (0x0002b043) wml_tabs_2_passive_pane_ParamLimits

0x6fd6,	// (0x0002b043) wml_tabs_2_passive_pane

0x6fea,	// (0x0002b057) wml_tabs_3_active_pane_cp_ParamLimits

0x6fea,	// (0x0002b057) wml_tabs_3_active_pane_cp

0x6fff,	// (0x0002b06c) wml_tabs_3_passive_pane_ParamLimits

0x6fff,	// (0x0002b06c) wml_tabs_3_passive_pane

0x7012,	// (0x0002b07f) wml_tabs_3_passive_pane_cp_ParamLimits

0x7012,	// (0x0002b07f) wml_tabs_3_passive_pane_cp

0x7029,	// (0x0002b096) tabs_4_active_pane

0x7031,	// (0x0002b09e) tabs_4_passive_pane

0x703b,	// (0x0002b0a8) tabs_4_passive_pane_cp

0x7043,	// (0x0002b0b0) tabs_4_passive_pane_cp2

0x65e1,	// (0x0002a64e) aid_height_text

0x5c7a,	// (0x00029ce7) mup_volume_cont_pane_ParamLimits

0x5c7a,	// (0x00029ce7) mup_volume_cont_pane

0x337b,	// (0x000273e8) aid_size_cell_pinb

0x3385,	// (0x000273f2) aid_size_list_pinb

0x6f2d,	// (0x0002af9a) mup2_volume_cont_pane_ParamLimits

0x6f2d,	// (0x0002af9a) mup2_volume_cont_pane

0xc490,	// (0x000304fd) mup2_volume_cont_pane_g1_ParamLimits

0xc490,	// (0x000304fd) mup2_volume_cont_pane_g1

0x2962,	// (0x000269cf) aid_size_cell_touch_ParamLimits

0x2962,	// (0x000269cf) aid_size_cell_touch

0x2bce,	// (0x00026c3b) touch_pane_ParamLimits

0x2bce,	// (0x00026c3b) touch_pane

0x2944,	// (0x000269b1) main_rss2_pane

0xc4d2,	// (0x0003053f) listscroll_rss2_pane

0xc4db,	// (0x00030548) rss2_navigation_pane

0xc4e3,	// (0x00030550) list_rss2_pane

0x5585,	// (0x000295f2) scroll_pane_cp22

0xc4eb,	// (0x00030558) rss2_navigation_pane_g1

0xc4f4,	// (0x00030561) rss2_navigation_pane_g2

0xc4fc,	// (0x00030569) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x00033760) rss2_navigation_pane_g

0xc504,	// (0x00030571) rss2_navigation_pane_t1

0x704d,	// (0x0002b0ba) rss2_list_single_pane_ParamLimits

0x704d,	// (0x0002b0ba) rss2_list_single_pane

0xc512,	// (0x0003057f) rss2_list_single_pane_t2

0xc520,	// (0x0003058d) rss2_list_single_pane_t3_ParamLimits

0xc520,	// (0x0003058d) rss2_list_single_pane_t3

0xc53d,	// (0x000305aa) rss2_list_single_pane_t4

0x4e14,	// (0x00028e81) smil_status_pane_g1

0x2bc0,	// (0x00026c2d) main_image2_pane_ParamLimits

0x2bc0,	// (0x00026c2d) main_image2_pane

0x1b04,	// (0x00025b71) main_camera2_pane_g9_ParamLimits

0x1b04,	// (0x00025b71) main_camera2_pane_g9

0x1c32,	// (0x00025c9f) main_camera2_pane_t5_ParamLimits

0x1c32,	// (0x00025c9f) main_camera2_pane_t5

0xc3b3,	// (0x00030420) main_camera2_pane_t6_ParamLimits

0xc3b3,	// (0x00030420) main_camera2_pane_t6

0x7065,	// (0x0002b0d2) main_image2_pane_g1_ParamLimits

0x7065,	// (0x0002b0d2) main_image2_pane_g1

0x631a,	// (0x0002a387) smil2_video_pane_ParamLimits

0x631a,	// (0x0002a387) smil2_video_pane

0x2992,	// (0x000269ff) aid_zoom_text_primary_cp

0x2b7c,	// (0x00026be9) popup_preview_fixed_window

0x4347,	// (0x000283b4) im_reading_pane_g1

0x197b,	// (0x000259e8) cams2_bc_adjust_pane_cp_ParamLimits

0x197b,	// (0x000259e8) cams2_bc_adjust_pane_cp

0x1c61,	// (0x00025cce) cams2_bc_adjust_pane_ParamLimits

0x1c61,	// (0x00025cce) cams2_bc_adjust_pane

0xc54b,	// (0x000305b8) cams2_bc_adjust_pane_g1

0xc553,	// (0x000305c0) cams2_slider_pane

0xc55c,	// (0x000305c9) cams2_slider_pane_g1

0xc565,	// (0x000305d2) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x00033767) cams2_slider_pane_g

0x170b,	// (0x00025778) calc_display_pane_ParamLimits

0x1731,	// (0x0002579e) calc_paper_pane_ParamLimits

0x1754,	// (0x000257c1) grid_calc_pane_ParamLimits

0xaf15,	// (0x0002ef82) popup_clock_digital_window_t1_ParamLimits

0xb128,	// (0x0002f195) main_image_pane_t1

0x16ed,	// (0x0002575a) aid_size_cell_calc_ParamLimits

0x16ed,	// (0x0002575a) aid_size_cell_calc

0x690e,	// (0x0002a97b) popup_blid_sat_info2_window_ParamLimits

0x690e,	// (0x0002a97b) popup_blid_sat_info2_window

0xc587,	// (0x000305f4) aid_size_cell_blid

0xc58f,	// (0x000305fc) bg_popup_window_pane_cp07

0xc5b2,	// (0x0003061f) grid_popup_blid_pane

0xc5bc,	// (0x00030629) heading_pane_cp05_ParamLimits

0xc5bc,	// (0x00030629) heading_pane_cp05

0xc686,	// (0x000306f3) cell_popup_blid_pane_ParamLimits

0xc686,	// (0x000306f3) cell_popup_blid_pane

0xc6ac,	// (0x00030719) cell_popup_blid_pane_g1

0xc6b4,	// (0x00030721) cell_popup_blid_pane_t1

0x6efd,	// (0x0002af6a) mup2_indicator_pane_ParamLimits

0x6efd,	// (0x0002af6a) mup2_indicator_pane

0x59c0,	// (0x00029a2d) mup2_visualizer_osc_pane

0xc3ef,	// (0x0003045c) mup2_visualizer_spec_pane_ParamLimits

0xc3ef,	// (0x0003045c) mup2_visualizer_spec_pane

0x707b,	// (0x0002b0e8) mup2_spec_half_pane

0x7084,	// (0x0002b0f1) mup2_spec_half_pane_cp

0x708c,	// (0x0002b0f9) mup2_spec_bar_pane_ParamLimits

0x708c,	// (0x0002b0f9) mup2_spec_bar_pane

0xc33e,	// (0x000303ab) mup2_spec_bar_pane_g1

0xc348,	// (0x000303b5) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x000336da) mup2_spec_bar_pane_g

0x70ac,	// (0x0002b119) mup2_osc_middle_pane

0xc35a,	// (0x000303c7) mup2_visualizer_osc_pane_g1

0x2c40,	// (0x00026cad) popup_number_entry_window_t1_ParamLimits

0x2c53,	// (0x00026cc0) popup_number_entry_window_t2_ParamLimits

0x2c65,	// (0x00026cd2) popup_number_entry_window_t3_ParamLimits

0x2c77,	// (0x00026ce4) popup_number_entry_window_t5_ParamLimits

0x2c77,	// (0x00026ce4) popup_number_entry_window_t5

0xf12f,	// (0x0003319c) popup_number_entry_window_t_ParamLimits

0x2cac,	// (0x00026d19) text_title_cp2_ParamLimits

0xb002,	// (0x0002f06f) aid_hotspot_pointer_text2_pane

0xb028,	// (0x0002f095) main_viewer_pane_g9_ParamLimits

0xb028,	// (0x0002f095) main_viewer_pane_g9

0x49a0,	// (0x00028a0d) cale_month_pane_t1_ParamLimits

0x4e9e,	// (0x00028f0b) bg_cale_pane_ParamLimits

0x4eb6,	// (0x00028f23) list_cale_pane_ParamLimits

0x398a,	// (0x000279f7) listscroll_cale_day_pane_t1

0x4ec7,	// (0x00028f34) scroll_pane_cp09_ParamLimits

0x5d16,	// (0x00029d83) main_mup_eq_pane_t1_ParamLimits

0x5d16,	// (0x00029d83) main_mup_eq_pane_t1

0x5d30,	// (0x00029d9d) main_mup_eq_pane_t2_ParamLimits

0x5d30,	// (0x00029d9d) main_mup_eq_pane_t2

0x5d4a,	// (0x00029db7) main_mup_eq_pane_t3_ParamLimits

0x5d4a,	// (0x00029db7) main_mup_eq_pane_t3

0x5d66,	// (0x00029dd3) main_mup_eq_pane_t4_ParamLimits

0x5d66,	// (0x00029dd3) main_mup_eq_pane_t4

0x5d82,	// (0x00029def) main_mup_eq_pane_t5_ParamLimits

0x5d82,	// (0x00029def) main_mup_eq_pane_t5

0x5d9e,	// (0x00029e0b) main_mup_eq_pane_t6_ParamLimits

0x5d9e,	// (0x00029e0b) main_mup_eq_pane_t6

0x5db2,	// (0x00029e1f) main_mup_eq_pane_t7_ParamLimits

0x5db2,	// (0x00029e1f) main_mup_eq_pane_t7

0x5dc6,	// (0x00029e33) main_mup_eq_pane_t8_ParamLimits

0x5dc6,	// (0x00029e33) main_mup_eq_pane_t8

0x5dda,	// (0x00029e47) main_mup_eq_pane_t9_ParamLimits

0x5dda,	// (0x00029e47) main_mup_eq_pane_t9

0x5df4,	// (0x00029e61) main_mup_eq_pane_t10_ParamLimits

0x5df4,	// (0x00029e61) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x00033529) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x00033529) main_mup_eq_pane_t

0x5ea3,	// (0x00029f10) mup_equalizer_pane_cp5_ParamLimits

0x5eb7,	// (0x00029f24) mup_equalizer_pane_cp6_ParamLimits

0x5ecb,	// (0x00029f38) mup_equalizer_pane_cp7_ParamLimits

0x2944,	// (0x000269b1) main_gallery_pane

0xc363,	// (0x000303d0) smil2_volume_pane

0xc36b,	// (0x000303d8) smil_status_volume_pane_g1_ParamLimits

0xc37e,	// (0x000303eb) smil_status_volume_pane_g2_ParamLimits

0xc391,	// (0x000303fe) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x000336df) smil_status_volume_pane_g_ParamLimits

0xc58f,	// (0x000305fc) bg_popup_window_pane_cp07_ParamLimits

0xc59d,	// (0x0003060a) blid_firmament_pane

0x70b5,	// (0x0002b122) aid_size_cell_gallery_ParamLimits

0x70b5,	// (0x0002b122) aid_size_cell_gallery

0x70cb,	// (0x0002b138) grid_gallery_pane_ParamLimits

0x70cb,	// (0x0002b138) grid_gallery_pane

0x70e4,	// (0x0002b151) cell_gallery_pane_ParamLimits

0x70e4,	// (0x0002b151) cell_gallery_pane

0xc6c2,	// (0x0003072f) bg_cell_gallery_focus_pane_ParamLimits

0xc6c2,	// (0x0003072f) bg_cell_gallery_focus_pane

0xc6d4,	// (0x00030741) cell_gallery_pane_g1_ParamLimits

0xc6d4,	// (0x00030741) cell_gallery_pane_g1

0x712d,	// (0x0002b19a) cell_gallery_pane_g2_ParamLimits

0x712d,	// (0x0002b19a) cell_gallery_pane_g2

0x713a,	// (0x0002b1a7) cell_gallery_pane_g3_ParamLimits

0x713a,	// (0x0002b1a7) cell_gallery_pane_g3

0xc6e0,	// (0x0003074d) cell_gallery_pane_g4_ParamLimits

0xc6e0,	// (0x0003074d) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x0003378d) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x0003378d) cell_gallery_pane_g

0xc6ec,	// (0x00030759) bg_cell_gallery_focus_pane_g1

0xc6f4,	// (0x00030761) bg_cell_gallery_focus_pane_g2

0xc6fc,	// (0x00030769) bg_cell_gallery_focus_pane_g3

0xc704,	// (0x00030771) bg_cell_gallery_focus_pane_g4

0xc70c,	// (0x00030779) bg_cell_gallery_focus_pane_g5

0xc714,	// (0x00030781) bg_cell_gallery_focus_pane_g6

0xc71c,	// (0x00030789) bg_cell_gallery_focus_pane_g7

0xc724,	// (0x00030791) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x00033796) bg_cell_gallery_focus_pane_g

0xc72c,	// (0x00030799) aid_firma_cardinal

0xc740,	// (0x000307ad) blid_firmament_pane_t1

0xc757,	// (0x000307c4) blid_firmament_pane_t2

0xc76e,	// (0x000307db) blid_firmament_pane_t3

0xc785,	// (0x000307f2) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x000337a7) blid_firmament_pane_t

0xc79c,	// (0x00030809) blid_sat_info_pane

0xc7ac,	// (0x00030819) blid_sat_info_pane_g1

0xc7ac,	// (0x00030819) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x000337b0) blid_sat_info_pane_g

0xc7b6,	// (0x00030823) blid_sat_info_pane_t1

0xc7c4,	// (0x00030831) smil2_volume_content_pane

0xc7cd,	// (0x0003083a) smil2_volume_pane_g1

0xc7d5,	// (0x00030842) smil2_volume_content_pane_g1

0xc7de,	// (0x0003084b) smil2_volume_content_pane_g2

0xc7e7,	// (0x00030854) smil2_volume_content_pane_g3

0xc7f0,	// (0x0003085d) smil2_volume_content_pane_g4

0xc7f9,	// (0x00030866) smil2_volume_content_pane_g5

0xc802,	// (0x0003086f) smil2_volume_content_pane_g6

0xc80b,	// (0x00030878) smil2_volume_content_pane_g7

0xc814,	// (0x00030881) smil2_volume_content_pane_g8

0xc81d,	// (0x0003088a) smil2_volume_content_pane_g9

0xc826,	// (0x00030893) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x000337b5) smil2_volume_content_pane_g

0x39f2,	// (0x00027a5f) cale_week_day_heading_pane_t1_ParamLimits

0x3a06,	// (0x00027a73) cale_week_day_heading_pane_t2_ParamLimits

0x3a1a,	// (0x00027a87) cale_week_day_heading_pane_t3_ParamLimits

0x3a2e,	// (0x00027a9b) cale_week_day_heading_pane_t4_ParamLimits

0x3a42,	// (0x00027aaf) cale_week_day_heading_pane_t5_ParamLimits

0x3a56,	// (0x00027ac3) cale_week_day_heading_pane_t6_ParamLimits

0x3a6a,	// (0x00027ad7) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x000332a1) cale_week_day_heading_pane_t_ParamLimits

0x3a7e,	// (0x00027aeb) bg_cale_side_pane_ParamLimits

0x1821,	// (0x0002588e) cale_week_time_pane_t1_ParamLimits

0x1839,	// (0x000258a6) cale_week_time_pane_t2_ParamLimits

0x1851,	// (0x000258be) cale_week_time_pane_t3_ParamLimits

0x1869,	// (0x000258d6) cale_week_time_pane_t4_ParamLimits

0x1881,	// (0x000258ee) cale_week_time_pane_t5_ParamLimits

0x1899,	// (0x00025906) cale_week_time_pane_t6_ParamLimits

0x18b1,	// (0x0002591e) cale_week_time_pane_t7_ParamLimits

0x18c9,	// (0x00025936) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x000332b0) cale_week_time_pane_t_ParamLimits

0x3a8c,	// (0x00027af9) cell_cale_week_pane_g2_ParamLimits

0x3a7e,	// (0x00027aeb) bg_cale_side_pane_cp01_ParamLimits

0x4ca5,	// (0x00028d12) cale_month_week_pane_t1_ParamLimits

0x4cbc,	// (0x00028d29) cale_month_week_pane_t2_ParamLimits

0x4cd3,	// (0x00028d40) cale_month_week_pane_t3_ParamLimits

0x4cea,	// (0x00028d57) cale_month_week_pane_t4_ParamLimits

0x4d01,	// (0x00028d6e) cale_month_week_pane_t5_ParamLimits

0x4d18,	// (0x00028d85) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00033389) cale_month_week_pane_t_ParamLimits

0xae89,	// (0x0002eef6) cell_cale_month_pane_g1_ParamLimits

0x2944,	// (0x000269b1) main_cale_event_viewer_pane

0x2944,	// (0x000269b1) listscroll_cale_event_viewer_pane

0xc82f,	// (0x0003089c) list_cale_ev_pane

0xc837,	// (0x000308a4) scroll_pane_cp023

0xc843,	// (0x000308b0) field_cale_ev_pane_ParamLimits

0xc843,	// (0x000308b0) field_cale_ev_pane

0xc85d,	// (0x000308ca) field_cale_ev_content_pane_ParamLimits

0xc85d,	// (0x000308ca) field_cale_ev_content_pane

0xc869,	// (0x000308d6) field_cale_ev_pane_g1_ParamLimits

0xc869,	// (0x000308d6) field_cale_ev_pane_g1

0xc875,	// (0x000308e2) field_cale_ev_pane_g2_ParamLimits

0xc875,	// (0x000308e2) field_cale_ev_pane_g2

0xc88d,	// (0x000308fa) field_cale_ev_pane_g3_ParamLimits

0xc88d,	// (0x000308fa) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x000337ca) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x000337ca) field_cale_ev_pane_g

0xc8a5,	// (0x00030912) field_cale_ev_pane_t1_ParamLimits

0xc8a5,	// (0x00030912) field_cale_ev_pane_t1

0xc8bc,	// (0x00030929) field_cale_ev_content_pane_t1_ParamLimits

0xc8bc,	// (0x00030929) field_cale_ev_content_pane_t1

0xaf96,	// (0x0002f003) bg_button_pane_cp01

0x35c2,	// (0x0002762f) listscroll_cale_week_pane_ParamLimits

0x37ec,	// (0x00027859) popup_toolbar_window_cp01

0x398a,	// (0x000279f7) listscroll_cale_week_pane_t1_ParamLimits

0x35c2,	// (0x0002762f) listscroll_cale_day_pane_ParamLimits

0x4e94,	// (0x00028f01) popup_toolbar_window_cp02

0x398a,	// (0x000279f7) listscroll_cale_day_pane_t1_ParamLimits

0x35c2,	// (0x0002762f) main_cale_month_pane_ParamLimits

0x6b34,	// (0x0002aba1) popup_toolbar_window_cp03_ParamLimits

0x6b34,	// (0x0002aba1) popup_toolbar_window_cp03

0x61de,	// (0x0002a24b) main_image_pane_g2_ParamLimits

0x61de,	// (0x0002a24b) main_image_pane_g2

0x61ef,	// (0x0002a25c) main_image_pane_g3_ParamLimits

0x61ef,	// (0x0002a25c) main_image_pane_g3

0x0002,

0xf54e,	// (0x000335bb) main_image_pane_g_ParamLimits

0xf54e,	// (0x000335bb) main_image_pane_g

0xb128,	// (0x0002f195) main_image_pane_t1_ParamLimits

0x6200,	// (0x0002a26d) main_image_pane_t2_ParamLimits

0x6200,	// (0x0002a26d) main_image_pane_t2

0x6212,	// (0x0002a27f) main_image_pane_t3_ParamLimits

0x6212,	// (0x0002a27f) main_image_pane_t3

0x623a,	// (0x0002a2a7) main_image_pane_t4_ParamLimits

0x623a,	// (0x0002a2a7) main_image_pane_t4

0x0003,

0xf555,	// (0x000335c2) main_image_pane_t_ParamLimits

0xf555,	// (0x000335c2) main_image_pane_t

0x625a,	// (0x0002a2c7) popup_image_details_window_cp01

0x6264,	// (0x0002a2d1) popup_toobar_trans_pane_cp01_ParamLimits

0x6264,	// (0x0002a2d1) popup_toobar_trans_pane_cp01

0x69e5,	// (0x0002aa52) popup_image_details_window_ParamLimits

0x69e5,	// (0x0002aa52) popup_image_details_window

0xc2c4,	// (0x00030331) popup_image_focus_window

0x1935,	// (0x000259a2) camera2_autofocus_pane_ParamLimits

0x1935,	// (0x000259a2) camera2_autofocus_pane

0x2944,	// (0x000269b1) bg_popup_sub_pane_cp06

0xc8d9,	// (0x00030946) popup_image_focus_window_g1

0xc8e1,	// (0x0003094e) popup_image_focus_window_g2

0xc8e9,	// (0x00030956) popup_image_focus_window_g3

0xc8f1,	// (0x0003095e) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x000337d1) popup_image_focus_window_g

0xc8f9,	// (0x00030966) popup_image_focus_window_t1

0xc907,	// (0x00030974) popup_image_focus_window_t2

0xc917,	// (0x00030984) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x000337da) popup_image_focus_window_t

0xc925,	// (0x00030992) camera2_autofocus_pane_g1

0x2bc0,	// (0x00026c2d) bg_tb_trans_pane_cp01

0xc933,	// (0x000309a0) popup_image_details_window_g1

0xc946,	// (0x000309b3) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x000337ec) popup_image_details_window_g

0xc96f,	// (0x000309dc) popup_image_details_window_t1

0xc981,	// (0x000309ee) popup_image_details_window_t2

0xc99a,	// (0x00030a07) popup_image_details_window_t3

0xc9ae,	// (0x00030a1b) popup_image_details_window_t4

0xc9c9,	// (0x00030a36) popup_image_details_window_t5

0x0004,

0xf786,	// (0x000337f3) popup_image_details_window_t

0x35ae,	// (0x0002761b) bg_calc_paper_pane_ParamLimits

0xad5e,	// (0x0002edcb) grid_highlight_pane_cp013

0xad68,	// (0x0002edd5) list_calc_pane_ParamLimits

0xad7a,	// (0x0002ede7) scroll_pane_cp024

0x35c2,	// (0x0002762f) bg_calc_display_pane_ParamLimits

0x1780,	// (0x000257ed) calc_display_pane_t1_ParamLimits

0x1792,	// (0x000257ff) calc_display_pane_t2_ParamLimits

0xad82,	// (0x0002edef) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x00033223) calc_display_pane_t_ParamLimits

0x17f5,	// (0x00025862) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x00033240) cell_calc_pane_g

0x17fe,	// (0x0002586b) cell_calc_pane_t1

0x367b,	// (0x000276e8) grid_highlight_pane_cp02_ParamLimits

0x3691,	// (0x000276fe) toolbar_button_pane_cp01_ParamLimits

0x3691,	// (0x000276fe) toolbar_button_pane_cp01

0xb16d,	// (0x0002f1da) temp_image_control_pane_ParamLimits

0xb16d,	// (0x0002f1da) temp_image_control_pane

0x2bc0,	// (0x00026c2d) main_mp3_pane

0xc9e3,	// (0x00030a50) temp_image_control_pane_g1_ParamLimits

0xc9e3,	// (0x00030a50) temp_image_control_pane_g1

0xc9f1,	// (0x00030a5e) temp_image_control_pane_g2_ParamLimits

0xc9f1,	// (0x00030a5e) temp_image_control_pane_g2

0xca03,	// (0x00030a70) temp_image_control_pane_g3_ParamLimits

0xca03,	// (0x00030a70) temp_image_control_pane_g3

0x7177,	// (0x0002b1e4) temp_image_control_pane_g4_ParamLimits

0x7177,	// (0x0002b1e4) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x000337fe) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x000337fe) temp_image_control_pane_g

0xc9e3,	// (0x00030a50) main_mp3_pane_g1

0x718a,	// (0x0002b1f7) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x00033807) main_mp3_pane_g

0xca46,	// (0x00030ab3) main_mp3_pane_t1

0x3c06,	// (0x00027c73) main_camera_pane_g8_ParamLimits

0x3c06,	// (0x00027c73) main_camera_pane_g8

0x3dbd,	// (0x00027e2a) main_video_pane_g7_ParamLimits

0x3dbd,	// (0x00027e2a) main_video_pane_g7

0xc3d1,	// (0x0003043e) main_camera2_pane_t7_ParamLimits

0xc3d1,	// (0x0003043e) main_camera2_pane_t7

0x4414,	// (0x00028481) scroll_pane_cp025_ParamLimits

0x4414,	// (0x00028481) scroll_pane_cp025

0x4428,	// (0x00028495) scroll_pane_cp026_ParamLimits

0x4428,	// (0x00028495) scroll_pane_cp026

0x4437,	// (0x000284a4) wml_content_pane_ParamLimits

0x2944,	// (0x000269b1) main_touch_calib_pane

0x7255,	// (0x0002b2c2) main_touch_calib_pane_g1

0x7261,	// (0x0002b2ce) main_touch_calib_pane_g2

0x726d,	// (0x0002b2da) main_touch_calib_pane_g3

0x7279,	// (0x0002b2e6) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x00033825) main_touch_calib_pane_g

0x7285,	// (0x0002b2f2) main_touch_calib_pane_t1

0x729f,	// (0x0002b30c) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0003382e) main_touch_calib_pane_t

0x5839,	// (0x000298a6) mup_progress_pane_cp02

0x5858,	// (0x000298c5) navi_pane_g1

0x5911,	// (0x0002997e) navi_pane_mp_t3

0x2bc0,	// (0x00026c2d) main_mp3_pane_ParamLimits

0x6b72,	// (0x0002abdf) navi_pane_ParamLimits

0xc9e3,	// (0x00030a50) main_mp3_pane_g1_ParamLimits

0x718a,	// (0x0002b1f7) main_mp3_pane_g2_ParamLimits

0x7198,	// (0x0002b205) main_mp3_pane_g3_ParamLimits

0x7198,	// (0x0002b205) main_mp3_pane_g3

0x71a6,	// (0x0002b213) main_mp3_pane_g4_ParamLimits

0x71a6,	// (0x0002b213) main_mp3_pane_g4

0xca13,	// (0x00030a80) main_mp3_pane_g5_ParamLimits

0xca13,	// (0x00030a80) main_mp3_pane_g5

0xca21,	// (0x00030a8e) main_mp3_pane_g6_ParamLimits

0xca21,	// (0x00030a8e) main_mp3_pane_g6

0xca2e,	// (0x00030a9b) main_mp3_pane_g7_ParamLimits

0xca2e,	// (0x00030a9b) main_mp3_pane_g7

0xca3a,	// (0x00030aa7) main_mp3_pane_g8_ParamLimits

0xca3a,	// (0x00030aa7) main_mp3_pane_g8

0xf79a,	// (0x00033807) main_mp3_pane_g_ParamLimits

0x71b4,	// (0x0002b221) main_mp3_pane_t2

0x71c2,	// (0x0002b22f) main_mp3_pane_t3

0xca54,	// (0x00030ac1) main_mp3_pane_t4

0xca62,	// (0x00030acf) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x00033818) main_mp3_pane_t

0xca70,	// (0x00030add) mup_progress_pane_cp01

0x2992,	// (0x000269ff) aid_zoom_text_secondary2

0xc82f,	// (0x0003089c) list_cale_ev2_pane

0xc837,	// (0x000308a4) scroll_pane_cp023_ParamLimits

0x72f5,	// (0x0002b362) field_cale_ev2_pane_ParamLimits

0x72f5,	// (0x0002b362) field_cale_ev2_pane

0x731b,	// (0x0002b388) field_cale_ev2_pane_g1_ParamLimits

0x731b,	// (0x0002b388) field_cale_ev2_pane_g1

0x7327,	// (0x0002b394) field_cale_ev2_pane_g2_ParamLimits

0x7327,	// (0x0002b394) field_cale_ev2_pane_g2

0x733f,	// (0x0002b3ac) field_cale_ev2_pane_g3_ParamLimits

0x733f,	// (0x0002b3ac) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x00033839) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x00033839) field_cale_ev2_pane_g

0xca84,	// (0x00030af1) field_cale_ev2_pane_t1_ParamLimits

0xca84,	// (0x00030af1) field_cale_ev2_pane_t1

0xca9b,	// (0x00030b08) field_cale_ev2_pane_t2_ParamLimits

0xca9b,	// (0x00030b08) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x00033842) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x00033842) field_cale_ev2_pane_t

0x608e,	// (0x0002a0fb) main_postcard_pane_g5_ParamLimits

0x608e,	// (0x0002a0fb) main_postcard_pane_g5

0x60a4,	// (0x0002a111) main_postcard_pane_g6_ParamLimits

0x60a4,	// (0x0002a111) main_postcard_pane_g6

0x3b47,	// (0x00027bb4) camera2_autofocus_pane_cp_ParamLimits

0x3b47,	// (0x00027bb4) camera2_autofocus_pane_cp

0x2bc0,	// (0x00026c2d) main_mup3_pane

0x7377,	// (0x0002b3e4) main_mup3_pane_g1_ParamLimits

0x7377,	// (0x0002b3e4) main_mup3_pane_g1

0x7399,	// (0x0002b406) main_mup3_pane_g2_ParamLimits

0x7399,	// (0x0002b406) main_mup3_pane_g2

0x741a,	// (0x0002b487) main_mup3_pane_g3_ParamLimits

0x741a,	// (0x0002b487) main_mup3_pane_g3

0x745c,	// (0x0002b4c9) main_mup3_pane_g4_ParamLimits

0x745c,	// (0x0002b4c9) main_mup3_pane_g4

0x749e,	// (0x0002b50b) main_mup3_pane_g5_ParamLimits

0x749e,	// (0x0002b50b) main_mup3_pane_g5

0x74e2,	// (0x0002b54f) main_mup3_pane_g6_ParamLimits

0x74e2,	// (0x0002b54f) main_mup3_pane_g6

0xcab0,	// (0x00030b1d) main_mup3_pane_g7_ParamLimits

0xcab0,	// (0x00030b1d) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x00033852) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x00033852) main_mup3_pane_g

0x755e,	// (0x0002b5cb) main_mup3_pane_t1_ParamLimits

0x755e,	// (0x0002b5cb) main_mup3_pane_t1

0x75d2,	// (0x0002b63f) main_mup3_pane_t2_ParamLimits

0x75d2,	// (0x0002b63f) main_mup3_pane_t2

0x76a6,	// (0x0002b713) main_mup3_pane_t4_ParamLimits

0x76a6,	// (0x0002b713) main_mup3_pane_t4

0x7700,	// (0x0002b76d) main_mup3_pane_t5_ParamLimits

0x7700,	// (0x0002b76d) main_mup3_pane_t5

0x77b4,	// (0x0002b821) main_mup3_pane_t6_ParamLimits

0x77b4,	// (0x0002b821) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x00033863) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x00033863) main_mup3_pane_t

0x7868,	// (0x0002b8d5) mup3_progress_pane_ParamLimits

0x7868,	// (0x0002b8d5) mup3_progress_pane

0x78e4,	// (0x0002b951) popup_mup3_control_window_ParamLimits

0x78e4,	// (0x0002b951) popup_mup3_control_window

0xcabe,	// (0x00030b2b) popup_mup3_text_window

0x7916,	// (0x0002b983) mup3_progress_pane_t1

0x792d,	// (0x0002b99a) mup3_progress_pane_t2

0xcac6,	// (0x00030b33) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x00033870) mup3_progress_pane_t

0xcadd,	// (0x00030b4a) mup_progress_pane_cp03

0x2944,	// (0x000269b1) bg_tb_trans_pane_cp04

0x7944,	// (0x0002b9b1) mup3_volume_pane

0x794c,	// (0x0002b9b9) popup_mup3_control_window_g1

0x7955,	// (0x0002b9c2) mup3_volume_pane_g1

0x795e,	// (0x0002b9cb) mup3_volume_pane_g2

0x7967,	// (0x0002b9d4) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x00033877) mup3_volume_pane_g

0x2944,	// (0x000269b1) bg_tb_trans_pane_cp03

0xcaed,	// (0x00030b5a) popup_mup3_text_window_g1

0xcaf5,	// (0x00030b62) popup_mup3_text_window_t1

0x3664,	// (0x000276d1) list_calc_item_pane_g1_ParamLimits

0xc4b9,	// (0x00030526) mup_volume_pane_cp_g1

0x72b9,	// (0x0002b326) main_touch_calib_pane_t3

0x72cd,	// (0x0002b33a) main_touch_calib_pane_t4

0x72e1,	// (0x0002b34e) main_touch_calib_pane_t5

0x294e,	// (0x000269bb) aid_cell_size_toolbar2

0x2956,	// (0x000269c3) aid_popup3_width_pane

0x2992,	// (0x000269ff) aid_zoom_text_msg_primary

0xae73,	// (0x0002eee0) vorec_t7

0x35ce,	// (0x0002763b) bg_calc_paper_pane_g1_ParamLimits

0x35da,	// (0x00027647) bg_calc_paper_pane_g2_ParamLimits

0x35e6,	// (0x00027653) bg_calc_paper_pane_g3_ParamLimits

0x35f2,	// (0x0002765f) bg_calc_paper_pane_g4_ParamLimits

0x35fe,	// (0x0002766b) bg_calc_paper_pane_g5_ParamLimits

0x360a,	// (0x00027677) bg_calc_paper_pane_g6_ParamLimits

0x3619,	// (0x00027686) bg_calc_paper_pane_g7_ParamLimits

0x3628,	// (0x00027695) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0003322a) bg_calc_paper_pane_g_ParamLimits

0x363b,	// (0x000276a8) calc_bg_paper_pane_g9_ParamLimits

0x3cad,	// (0x00027d1a) image_qvga_pane_ParamLimits

0x3cad,	// (0x00027d1a) image_qvga_pane

0x32e5,	// (0x00027352) bg_popup_sub_pane_cp04_ParamLimits

0xb0a4,	// (0x0002f111) popup_mup_playback_window_g1_ParamLimits

0xb0b0,	// (0x0002f11d) popup_mup_playback_window_t1_ParamLimits

0xb0c5,	// (0x0002f132) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x000335b6) popup_mup_playback_window_t_ParamLimits

0x6e17,	// (0x0002ae84) main_mup2_pane_g3_ParamLimits

0x6e17,	// (0x0002ae84) main_mup2_pane_g3

0x4112,	// (0x0002817f) popup_toolbar_window_cp04

0xb4ba,	// (0x0002f527) popup_call2_audio_second_window_g3_ParamLimits

0xb4ba,	// (0x0002f527) popup_call2_audio_second_window_g3

0xb8c4,	// (0x0002f931) popup_call2_audio_first_window_g4_ParamLimits

0xb8c4,	// (0x0002f931) popup_call2_audio_first_window_g4

0xbf43,	// (0x0002ffb0) popup_call2_audio_in_window_g4_ParamLimits

0xbf43,	// (0x0002ffb0) popup_call2_audio_in_window_g4

0x61c0,	// (0x0002a22d) aid_area_sk_bg_cut_ParamLimits

0x61c0,	// (0x0002a22d) aid_area_sk_bg_cut

0xb0da,	// (0x0002f147) aid_area_sk_bg_cut_2_ParamLimits

0xb0da,	// (0x0002f147) aid_area_sk_bg_cut_2

0x711d,	// (0x0002b18a) aid_placing_details_win

0x7125,	// (0x0002b192) aid_placing_details_win_2

0xc925,	// (0x00030992) camera2_autofocus_pane_g1_ParamLimits

0x2b61,	// (0x00026bce) popup_fixed_preview_cale_window_ParamLimits

0x2b61,	// (0x00026bce) popup_fixed_preview_cale_window

0x59d1,	// (0x00029a3e) navi_slider_pane_g3

0x59da,	// (0x00029a47) navi_slider_pane_g4

0x59e3,	// (0x00029a50) navi_slider_pane_g5

0x59d1,	// (0x00029a3e) navi_slider_pane_g6

0xaf3b,	// (0x0002efa8) navi_slider_pane_g7

0xaf63,	// (0x0002efd0) mup_scale_pane_g3

0xaf6c,	// (0x0002efd9) mup_scale_pane_g4

0xaf75,	// (0x0002efe2) mup_scale_pane_g5

0x5edf,	// (0x00029f4c) mup_scale_pane_g6

0x5ee8,	// (0x00029f55) mup_scale_pane_g7

0x59d1,	// (0x00029a3e) cams2_slider_pane_g3

0xc56e,	// (0x000305db) cams2_slider_pane_g4

0xc576,	// (0x000305e3) cams2_slider_pane_g5

0x59d1,	// (0x00029a3e) cams2_slider_pane_g6

0xc57e,	// (0x000305eb) cams2_slider_pane_g7

0xc7ac,	// (0x00030819) camera2_autofocus_pane_cp_g1

0xcb03,	// (0x00030b70) bg_popup_preview_window_pane_cp02_ParamLimits

0xcb03,	// (0x00030b70) bg_popup_preview_window_pane_cp02

0xcb0f,	// (0x00030b7c) list_fp_cale_pane_ParamLimits

0xcb0f,	// (0x00030b7c) list_fp_cale_pane

0xcb1b,	// (0x00030b88) popup_fixed_preview_cale_window_t1_ParamLimits

0xcb1b,	// (0x00030b88) popup_fixed_preview_cale_window_t1

0x7970,	// (0x0002b9dd) popup_fixed_preview_cale_window_t2_ParamLimits

0x7970,	// (0x0002b9dd) popup_fixed_preview_cale_window_t2

0x7985,	// (0x0002b9f2) popup_fixed_preview_cale_window_t3_ParamLimits

0x7985,	// (0x0002b9f2) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0003387e) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0003387e) popup_fixed_preview_cale_window_t

0x799a,	// (0x0002ba07) list_single_fp_cale_pane_ParamLimits

0x799a,	// (0x0002ba07) list_single_fp_cale_pane

0xcb39,	// (0x00030ba6) list_single_fp_cale_pane_g1_ParamLimits

0xcb39,	// (0x00030ba6) list_single_fp_cale_pane_g1

0xcb45,	// (0x00030bb2) list_single_fp_cale_pane_g2_ParamLimits

0xcb45,	// (0x00030bb2) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x00033885) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x00033885) list_single_fp_cale_pane_g

0xcb5e,	// (0x00030bcb) list_single_fp_cale_pane_t1_ParamLimits

0xcb5e,	// (0x00030bcb) list_single_fp_cale_pane_t1

0xcb70,	// (0x00030bdd) list_single_fp_cale_pane_t2_ParamLimits

0xcb70,	// (0x00030bdd) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x0003388c) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x0003388c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2944,	// (0x000269b1) main_dialer_pane

0x79b2,	// (0x0002ba1f) aid_cell_size_keypad

0x79bc,	// (0x0002ba29) dialer_ne_pane

0x79c4,	// (0x0002ba31) grid_dialer_command_1_pane

0x79cc,	// (0x0002ba39) grid_dialer_command_2_pane

0x79d4,	// (0x0002ba41) grid_dialer_keypad_pane

0x79e6,	// (0x0002ba53) bg_popup_call_pane_cp06_ParamLimits

0x79e6,	// (0x0002ba53) bg_popup_call_pane_cp06

0x79f2,	// (0x0002ba5f) dialer_ne_clear_pane_ParamLimits

0x79f2,	// (0x0002ba5f) dialer_ne_clear_pane

0xcba3,	// (0x00030c10) dialer_ne_pane_g1

0xcbab,	// (0x00030c18) dialer_ne_pane_t1_ParamLimits

0xcbab,	// (0x00030c18) dialer_ne_pane_t1

0x79fe,	// (0x0002ba6b) dialer_ne_pane_t2_ParamLimits

0x79fe,	// (0x0002ba6b) dialer_ne_pane_t2

0x7a28,	// (0x0002ba95) dialer_ne_pane_t3_ParamLimits

0x7a28,	// (0x0002ba95) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x00033891) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x00033891) dialer_ne_pane_t

0x7a58,	// (0x0002bac5) dialer_ne_pane_t3_copy1_ParamLimits

0x7a58,	// (0x0002bac5) dialer_ne_pane_t3_copy1

0x7a87,	// (0x0002baf4) cell_dialer_keypad_pane_ParamLimits

0x7a87,	// (0x0002baf4) cell_dialer_keypad_pane

0x7a9e,	// (0x0002bb0b) cell_dialer_command_1_pane_ParamLimits

0x7a9e,	// (0x0002bb0b) cell_dialer_command_1_pane

0x7ab4,	// (0x0002bb21) cell_dialer_command_2_pane_ParamLimits

0x7ab4,	// (0x0002bb21) cell_dialer_command_2_pane

0xcbbd,	// (0x00030c2a) bg_button_pane_cp02_ParamLimits

0xcbbd,	// (0x00030c2a) bg_button_pane_cp02

0x7ac3,	// (0x0002bb30) cell_dialer_keypad_pane_g1_ParamLimits

0x7ac3,	// (0x0002bb30) cell_dialer_keypad_pane_g1

0xcbbd,	// (0x00030c2a) bg_button_pane_cp03_ParamLimits

0xcbbd,	// (0x00030c2a) bg_button_pane_cp03

0x7ad8,	// (0x0002bb45) cell_dialer_command_1_pane_g1_ParamLimits

0x7ad8,	// (0x0002bb45) cell_dialer_command_1_pane_g1

0xcbc9,	// (0x00030c36) bg_button_pane_cp04

0x7aec,	// (0x0002bb59) cell_dialer_command_2_pane_g1

0x59c0,	// (0x00029a2d) bg_button_pane_cp06

0xcbd1,	// (0x00030c3e) dialer_ne_clear_pane_g1

0x5864,	// (0x000298d1) navi_pane_g2

0x5892,	// (0x000298ff) navi_pane_g3

0x0002,

0xf44c,	// (0x000334b9) navi_pane_g

0x591f,	// (0x0002998c) navi_pane_mv_g2

0x5946,	// (0x000299b3) navi_pane_mv_g5

0x594e,	// (0x000299bb) navi_pane_mv_t1

0x35c2,	// (0x0002762f) main_clock2_pane

0x7b1f,	// (0x0002bb8c) main_clock2_list_pane_ParamLimits

0x7b1f,	// (0x0002bb8c) main_clock2_list_pane

0x7b55,	// (0x0002bbc2) main_clock2_pane_t1_ParamLimits

0x7b55,	// (0x0002bbc2) main_clock2_pane_t1

0x7b93,	// (0x0002bc00) main_clock2_pane_t2_ParamLimits

0x7b93,	// (0x0002bc00) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x00033898) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x00033898) main_clock2_pane_t

0x7c1d,	// (0x0002bc8a) popup_clock_analogue_window_cp03_ParamLimits

0x7c1d,	// (0x0002bc8a) popup_clock_analogue_window_cp03

0x7c44,	// (0x0002bcb1) popup_clock_digital_window_cp02_ParamLimits

0x7c44,	// (0x0002bcb1) popup_clock_digital_window_cp02

0x7cb9,	// (0x0002bd26) main_clock2_list_single_pane_ParamLimits

0x7cb9,	// (0x0002bd26) main_clock2_list_single_pane

0x59c0,	// (0x00029a2d) list_highlight_pane_cp05

0xcbd9,	// (0x00030c46) main_clock2_list_single_pane_t1

0x4112,	// (0x0002817f) popup_toolbar_window_cp04_ParamLimits

0x7147,	// (0x0002b1b4) camera2_autofocus_pane_g2_ParamLimits

0x7147,	// (0x0002b1b4) camera2_autofocus_pane_g2

0x7153,	// (0x0002b1c0) camera2_autofocus_pane_g3_ParamLimits

0x7153,	// (0x0002b1c0) camera2_autofocus_pane_g3

0x715f,	// (0x0002b1cc) camera2_autofocus_pane_g4_ParamLimits

0x715f,	// (0x0002b1cc) camera2_autofocus_pane_g4

0x716b,	// (0x0002b1d8) camera2_autofocus_pane_g5_ParamLimits

0x716b,	// (0x0002b1d8) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x000337e1) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x000337e1) camera2_autofocus_pane_g

0x7357,	// (0x0002b3c4) camera2_autofocus_pane_cp_g2

0x735f,	// (0x0002b3cc) camera2_autofocus_pane_cp_g3

0x7367,	// (0x0002b3d4) camera2_autofocus_pane_cp_g4

0x736f,	// (0x0002b3dc) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x00033847) camera2_autofocus_pane_cp_g

0x79de,	// (0x0002ba4b) popup_dialer_spcha_window

0x2944,	// (0x000269b1) bg_popup_sub_pane_cp07

0xcbe7,	// (0x00030c54) list_spcha_pane

0xcbef,	// (0x00030c5c) list_single_spcha_pane_ParamLimits

0xcbef,	// (0x00030c5c) list_single_spcha_pane

0x2944,	// (0x000269b1) list_highlight_pane_cp06

0xcc00,	// (0x00030c6d) list_single_spcha_pane_t1

0xbced,	// (0x0002fd5a) popup_call2_audio_out_window_g4_ParamLimits

0xbced,	// (0x0002fd5a) popup_call2_audio_out_window_g4

0x2944,	// (0x000269b1) main_imed2_pane

0xc2cc,	// (0x00030339) popup_imed_adjust2_window

0x69fd,	// (0x0002aa6a) popup_imed_trans_window_ParamLimits

0x69fd,	// (0x0002aa6a) popup_imed_trans_window

0xc5e8,	// (0x00030655) popup_blid_sat_info2_window_t1

0xc5f6,	// (0x00030663) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x00033776) popup_blid_sat_info2_window_t

0x7ceb,	// (0x0002bd58) aid_size_cell_colour_35

0x7d0b,	// (0x0002bd78) aid_size_cell_colour_112

0x7d2b,	// (0x0002bd98) aid_size_cell_effect

0xc2a4,	// (0x00030311) bg_tb_trans_pane_cp02

0x500b,	// (0x00029078) heading_imed_pane

0x7d4b,	// (0x0002bdb8) listscroll_imed_pane

0xcc0e,	// (0x00030c7b) heading_imed_pane_g1

0xcc16,	// (0x00030c83) heading_imed_pane_t1

0xcc24,	// (0x00030c91) grid_imed_colour_35_pane_ParamLimits

0xcc24,	// (0x00030c91) grid_imed_colour_35_pane

0x7d57,	// (0x0002bdc4) grid_imed_effect_pane

0xcc3f,	// (0x00030cac) list_imed_aspect_pane

0x7d6c,	// (0x0002bdd9) scroll_pane_cp027_ParamLimits

0x7d6c,	// (0x0002bdd9) scroll_pane_cp027

0x7d7d,	// (0x0002bdea) cell_imed_effect_pane_ParamLimits

0x7d7d,	// (0x0002bdea) cell_imed_effect_pane

0xcc47,	// (0x00030cb4) cell_imed_colour_pane_ParamLimits

0xcc47,	// (0x00030cb4) cell_imed_colour_pane

0xcc89,	// (0x00030cf6) cell_imed_colour_pane_g1_ParamLimits

0xcc89,	// (0x00030cf6) cell_imed_colour_pane_g1

0xcc9a,	// (0x00030d07) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc9a,	// (0x00030d07) hgihlgiht_grid_pane_cp016

0x7da4,	// (0x0002be11) cell_imed_effect_pane_g1

0x7dac,	// (0x0002be19) grid_highlight_pane_cp017

0xadf8,	// (0x0002ee65) list_imed_single_pane_ParamLimits

0xadf8,	// (0x0002ee65) list_imed_single_pane

0x2944,	// (0x000269b1) list_highlight_pane_cp07

0xccab,	// (0x00030d18) list_imed_aspect_pane_comp1_t1

0xc2a4,	// (0x00030311) bg_tb_trans_pane_cp05

0xcccd,	// (0x00030d3a) popup_imed_adjust2_window_g1

0xccf4,	// (0x00030d61) popup_imed_adjust2_window_t1

0xcd0c,	// (0x00030d79) slider_imed_adjust_pane

0xcd20,	// (0x00030d8d) slider_imed_adjust_pane_g1

0xcd30,	// (0x00030d9d) slider_imed_adjust_pane_g2

0xcd40,	// (0x00030dad) slider_imed_adjust_pane_g3

0xcd51,	// (0x00030dbe) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x000338b5) slider_imed_adjust_pane_g

0x7db5,	// (0x0002be22) aid_size_cell_clipart2

0x7dc1,	// (0x0002be2e) grid_imed_clipart_pane

0xcd62,	// (0x00030dcf) scroll_pane_cp031

0x7dcb,	// (0x0002be38) cell_imed_clipart_pane_ParamLimits

0x7dcb,	// (0x0002be38) cell_imed_clipart_pane

0x7df2,	// (0x0002be5f) cell_imed_clipart_pane_g1

0x2944,	// (0x000269b1) grid_highlight_pane_cp014

0x7b34,	// (0x0002bba1) main_clock2_pane_g1_ParamLimits

0x7b34,	// (0x0002bba1) main_clock2_pane_g1

0x7c64,	// (0x0002bcd1) aid_call2_pane_cp10

0x7c76,	// (0x0002bce3) aid_call_pane_cp10

0x5776,	// (0x000297e3) popup_clock_analogue_window_cp10_g1

0x5776,	// (0x000297e3) popup_clock_analogue_window_cp10_g2

0x7c88,	// (0x0002bcf5) popup_clock_analogue_window_cp10_g3

0x7c88,	// (0x0002bcf5) popup_clock_analogue_window_cp10_g4

0x5776,	// (0x000297e3) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x000338a3) popup_clock_analogue_window_cp10_g

0x7c9a,	// (0x0002bd07) popup_clock_analogue_window_cp10_t1

0x1e10,	// (0x00025e7d) clock_digital_number_pane_cp10_ParamLimits

0x1e10,	// (0x00025e7d) clock_digital_number_pane_cp10

0x1e28,	// (0x00025e95) clock_digital_number_pane_cp11_ParamLimits

0x1e28,	// (0x00025e95) clock_digital_number_pane_cp11

0x1e40,	// (0x00025ead) clock_digital_number_pane_cp12_ParamLimits

0x1e40,	// (0x00025ead) clock_digital_number_pane_cp12

0x1e58,	// (0x00025ec5) clock_digital_number_pane_cp13_ParamLimits

0x1e58,	// (0x00025ec5) clock_digital_number_pane_cp13

0x1e70,	// (0x00025edd) clock_digital_separator_pane_cp10_ParamLimits

0x1e70,	// (0x00025edd) clock_digital_separator_pane_cp10

0x7ccb,	// (0x0002bd38) popup_clock_digital_window_cp02_t1_ParamLimits

0x7ccb,	// (0x0002bd38) popup_clock_digital_window_cp02_t1

0x32dd,	// (0x0002734a) clock_digital_number_pane_cp10_g1

0x32dd,	// (0x0002734a) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x000338be) clock_digital_number_pane_cp10_g

0x32dd,	// (0x0002734a) clock_digital_separator_pane_cp10_g1

0x32dd,	// (0x0002734a) clock_digital_separator_pane_g2_cp10

0x5990,	// (0x000299fd) navi_pane_vded_g4

0x5999,	// (0x00029a06) navi_pane_vded_g5

0x59a2,	// (0x00029a0f) navi_pane_vded_t1

0x2944,	// (0x000269b1) main_vded_pane

0x7dfb,	// (0x0002be68) main_vded_pane_g1

0x7e07,	// (0x0002be74) main_vded_pane_g2

0x7e11,	// (0x0002be7e) main_vded_pane_g3

0x0002,

0xf856,	// (0x000338c3) main_vded_pane_g

0x7e1b,	// (0x0002be88) main_vded_pane_t1

0x7e29,	// (0x0002be96) main_vded_pane_t2

0x0001,

0xf85d,	// (0x000338ca) main_vded_pane_t

0x7e37,	// (0x0002bea4) vded_slider_pane

0x7e41,	// (0x0002beae) vded_video_pane

0xcd6a,	// (0x00030dd7) vded_video_pane_g1

0x7e4b,	// (0x0002beb8) vded_video_pane_g2

0xc7ac,	// (0x00030819) vded_video_pane_g3

0x0002,

0xf862,	// (0x000338cf) vded_video_pane_g

0xcd74,	// (0x00030de1) vded_slider_pane_g1

0xc4b9,	// (0x00030526) vded_slider_pane_g2

0xcd7d,	// (0x00030dea) vded_slider_pane_g3

0xcd86,	// (0x00030df3) vded_slider_pane_g4

0xcd8f,	// (0x00030dfc) vded_slider_pane_g5

0x0004,

0xf869,	// (0x000338d6) vded_slider_pane_g

0x78cc,	// (0x0002b939) mup3_rocker_pane_ParamLimits

0x78cc,	// (0x0002b939) mup3_rocker_pane

0x7e54,	// (0x0002bec1) mup3_control_keys_pane_g1

0x7e5c,	// (0x0002bec9) mup3_control_keys_pane_g2

0x7e64,	// (0x0002bed1) mup3_control_keys_pane_g3

0x7e6c,	// (0x0002bed9) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x000338e1) mup3_control_keys_pane_g

0x2ba2,	// (0x00026c0f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2ba2,	// (0x00026c0f) popup_toolbar2_fixed_window_cp01

0x7900,	// (0x0002b96d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7900,	// (0x0002b96d) popup_toolbar2_fixed_window_cp02

0xb62c,	// (0x0002f699) popup_call2_audio_second_window_t4_ParamLimits

0xb62c,	// (0x0002f699) popup_call2_audio_second_window_t4

0xbb5a,	// (0x0002fbc7) popup_call2_audio_first_window_t6_ParamLimits

0xbb5a,	// (0x0002fbc7) popup_call2_audio_first_window_t6

0xbdf0,	// (0x0002fe5d) popup_call2_audio_out_window_t6_ParamLimits

0xbdf0,	// (0x0002fe5d) popup_call2_audio_out_window_t6

0x2944,	// (0x000269b1) main_vitu_pane

0x7e7c,	// (0x0002bee9) aid_size_cell_itu_ParamLimits

0x7e7c,	// (0x0002bee9) aid_size_cell_itu

0x2bc0,	// (0x00026c2d) bg_popup_window_pane_cp08_ParamLimits

0x2bc0,	// (0x00026c2d) bg_popup_window_pane_cp08

0x7e92,	// (0x0002beff) field_vitu_entry_pane_ParamLimits

0x7e92,	// (0x0002beff) field_vitu_entry_pane

0x7ea9,	// (0x0002bf16) grid_vitu_function_pane_ParamLimits

0x7ea9,	// (0x0002bf16) grid_vitu_function_pane

0x7ec4,	// (0x0002bf31) grid_vitu_itu_pane_ParamLimits

0x7ec4,	// (0x0002bf31) grid_vitu_itu_pane

0x7ee2,	// (0x0002bf4f) cell_vitu_itu_pane_ParamLimits

0x7ee2,	// (0x0002bf4f) cell_vitu_itu_pane

0x7f06,	// (0x0002bf73) cell_vitu_function_pane_ParamLimits

0x7f06,	// (0x0002bf73) cell_vitu_function_pane

0x2bc0,	// (0x00026c2d) bg_popup_sub_pane_cp08_ParamLimits

0x2bc0,	// (0x00026c2d) bg_popup_sub_pane_cp08

0x7f21,	// (0x0002bf8e) field_vitu_entry_pane_t1_ParamLimits

0x7f21,	// (0x0002bf8e) field_vitu_entry_pane_t1

0xcdb0,	// (0x00030e1d) field_vitu_entry_pane_t2_ParamLimits

0xcdb0,	// (0x00030e1d) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x000338ef) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x000338ef) field_vitu_entry_pane_t

0xcdcd,	// (0x00030e3a) bg_button_pane_cp05_ParamLimits

0xcdcd,	// (0x00030e3a) bg_button_pane_cp05

0x7f41,	// (0x0002bfae) cell_vitu_itu_pane_g1

0x7f59,	// (0x0002bfc6) cell_vitu_itu_pane_t1_ParamLimits

0x7f59,	// (0x0002bfc6) cell_vitu_itu_pane_t1

0x7f6b,	// (0x0002bfd8) cell_vitu_itu_pane_t2_ParamLimits

0x7f6b,	// (0x0002bfd8) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x000338f4) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x000338f4) cell_vitu_itu_pane_t

0xcddb,	// (0x00030e48) bg_button_pane_cp07

0x7fa0,	// (0x0002c00d) cell_vitu_function_pane_g1

0xad56,	// (0x0002edc3) main_calc_pane_g1

0x2986,	// (0x000269f3) aid_visual_content_pane

0x2944,	// (0x000269b1) main_vradio_pane

0x7fa9,	// (0x0002c016) main_vradio_pane_g1_ParamLimits

0x7fa9,	// (0x0002c016) main_vradio_pane_g1

0xcde5,	// (0x00030e52) main_vradio_pane_g2_ParamLimits

0xcde5,	// (0x00030e52) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x000338fb) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x000338fb) main_vradio_pane_g

0x7fc2,	// (0x0002c02f) main_vradio_pane_t1_ParamLimits

0x7fc2,	// (0x0002c02f) main_vradio_pane_t1

0x7fd7,	// (0x0002c044) main_vradio_pane_t2_ParamLimits

0x7fd7,	// (0x0002c044) main_vradio_pane_t2

0xcdf2,	// (0x00030e5f) main_vradio_pane_t3_ParamLimits

0xcdf2,	// (0x00030e5f) main_vradio_pane_t3

0x0002,

0xf893,	// (0x00033900) main_vradio_pane_t_ParamLimits

0xf893,	// (0x00033900) main_vradio_pane_t

0x7fec,	// (0x0002c059) vradio_rocker_control_pane_ParamLimits

0x7fec,	// (0x0002c059) vradio_rocker_control_pane

0x7ffe,	// (0x0002c06b) vradio_station_info_pane_ParamLimits

0x7ffe,	// (0x0002c06b) vradio_station_info_pane

0xce06,	// (0x00030e73) vradio_frequency_info_pane_ParamLimits

0xce06,	// (0x00030e73) vradio_frequency_info_pane

0xc7ac,	// (0x00030819) vradio_station_info_pane_g1

0xce15,	// (0x00030e82) vradio_station_info_pane_t1_ParamLimits

0xce15,	// (0x00030e82) vradio_station_info_pane_t1

0xce37,	// (0x00030ea4) vradio_station_info_pane_t2_ParamLimits

0xce37,	// (0x00030ea4) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x00033907) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x00033907) vradio_station_info_pane_t

0xce49,	// (0x00030eb6) vradio_tuning_pane

0xce51,	// (0x00030ebe) vradio_rocker_control_pane_g1

0xce59,	// (0x00030ec6) vradio_rocker_control_pane_g2

0xce61,	// (0x00030ece) vradio_rocker_control_pane_g3

0xce69,	// (0x00030ed6) vradio_rocker_control_pane_g4

0xce71,	// (0x00030ede) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0003390c) vradio_rocker_control_pane_g

0x8010,	// (0x0002c07d) vradio_frequency_info_pane_g1

0xce79,	// (0x00030ee6) vradio_frequency_info_pane_t1_ParamLimits

0xce79,	// (0x00030ee6) vradio_frequency_info_pane_t1

0x801a,	// (0x0002c087) vradio_tuning_pane_g1

0x8025,	// (0x0002c092) vradio_tuning_pane_t1

0x29db,	// (0x00026a48) area_side_right_pane_ParamLimits

0x29db,	// (0x00026a48) area_side_right_pane

0xc26b,	// (0x000302d8) status_small_pane_g1

0xc273,	// (0x000302e0) status_small_pane_g2

0xc27c,	// (0x000302e9) status_small_pane_g3

0xc285,	// (0x000302f2) status_small_pane_g4

0x0003,

0xf65f,	// (0x000336cc) status_small_pane_g

0xc28e,	// (0x000302fb) status_small_pane_t1

0x2944,	// (0x000269b1) main_video3_pane

0xce8d,	// (0x00030efa) cams_zoom_vslider_pane

0xce95,	// (0x00030f02) image3_wide_pane_ParamLimits

0xce95,	// (0x00030f02) image3_wide_pane

0xceaf,	// (0x00030f1c) image3_wide_small_pane

0xcebb,	// (0x00030f28) main_video3_pane_g1_ParamLimits

0xcebb,	// (0x00030f28) main_video3_pane_g1

0xced7,	// (0x00030f44) main_video3_pane_g2_ParamLimits

0xced7,	// (0x00030f44) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x00033917) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x00033917) main_video3_pane_g

0xcef3,	// (0x00030f60) main_video3_pane_t1_ParamLimits

0xcef3,	// (0x00030f60) main_video3_pane_t1

0xcf1e,	// (0x00030f8b) main_video3_pane_t2_ParamLimits

0xcf1e,	// (0x00030f8b) main_video3_pane_t2

0xcf49,	// (0x00030fb6) main_video3_pane_t3_ParamLimits

0xcf49,	// (0x00030fb6) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0003391c) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0003391c) main_video3_pane_t

0xcf76,	// (0x00030fe3) cams_zoom_vslider_pane_g1

0xcf7f,	// (0x00030fec) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x00033923) cams_zoom_vslider_pane_g

0xcf87,	// (0x00030ff4) small_slider_vertical_pane

0xc7ac,	// (0x00030819) small_slider_vertical_pane_g1

0xc7ac,	// (0x00030819) small_slider_vertical_pane_g2

0xcf8f,	// (0x00030ffc) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x00033928) small_slider_vertical_pane_g

0x2944,	// (0x000269b1) main_hwr_training_pane

0xcf98,	// (0x00031005) hwr_training_instruct_pane_ParamLimits

0xcf98,	// (0x00031005) hwr_training_instruct_pane

0x8034,	// (0x0002c0a1) hwr_training_navi_pane_ParamLimits

0x8034,	// (0x0002c0a1) hwr_training_navi_pane

0x8053,	// (0x0002c0c0) hwr_training_write_pane_ParamLimits

0x8053,	// (0x0002c0c0) hwr_training_write_pane

0x2944,	// (0x000269b1) bg_frame_shadow_pane

0xcfcf,	// (0x0003103c) hwr_training_write_pane_g1

0xcfd7,	// (0x00031044) hwr_training_write_pane_g2

0xcfdf,	// (0x0003104c) hwr_training_write_pane_g3

0xcfe7,	// (0x00031054) hwr_training_write_pane_g4

0xcfef,	// (0x0003105c) hwr_training_write_pane_g5

0xcff7,	// (0x00031064) hwr_training_write_pane_g6

0xcfff,	// (0x0003106c) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0003392f) hwr_training_write_pane_g

0xd007,	// (0x00031074) hwr_training_navi_pane_g1_ParamLimits

0xd007,	// (0x00031074) hwr_training_navi_pane_g1

0xd019,	// (0x00031086) hwr_training_navi_pane_g2_ParamLimits

0xd019,	// (0x00031086) hwr_training_navi_pane_g2

0xd02b,	// (0x00031098) hwr_training_navi_pane_g3_ParamLimits

0xd02b,	// (0x00031098) hwr_training_navi_pane_g3

0xd03b,	// (0x000310a8) hwr_training_navi_pane_g4_ParamLimits

0xd03b,	// (0x000310a8) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0003393e) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0003393e) hwr_training_navi_pane_g

0xd048,	// (0x000310b5) hwr_training_navi_pane_t1

0x808e,	// (0x0002c0fb) list_single_hwr_training_instruct_pane_ParamLimits

0x808e,	// (0x0002c0fb) list_single_hwr_training_instruct_pane

0xd056,	// (0x000310c3) list_single_hwr_training_instruct_pane_t1

0xc6ec,	// (0x00030759) bg_frame_shadow_pane_g1

0xd065,	// (0x000310d2) bg_frame_shadow_pane_g2

0xd06d,	// (0x000310da) bg_frame_shadow_pane_g3

0xd075,	// (0x000310e2) bg_frame_shadow_pane_g4

0xd07d,	// (0x000310ea) bg_frame_shadow_pane_g5

0xd085,	// (0x000310f2) bg_frame_shadow_pane_g6

0xd08d,	// (0x000310fa) bg_frame_shadow_pane_g7

0x3762,	// (0x000277cf) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x00033949) bg_frame_shadow_pane_g

0x2944,	// (0x000269b1) main_video_tele_dialer_pane

0x1e97,	// (0x00025f04) aid_size_cell_video_keypad_ParamLimits

0x1e97,	// (0x00025f04) aid_size_cell_video_keypad

0x1eb1,	// (0x00025f1e) grid_video_dialer_keypad_pane_ParamLimits

0x1eb1,	// (0x00025f1e) grid_video_dialer_keypad_pane

0x1efd,	// (0x00025f6a) video_down_pane_cp_ParamLimits

0x1efd,	// (0x00025f6a) video_down_pane_cp

0x1f15,	// (0x00025f82) cell_video_dialer_keypad_pane_ParamLimits

0x1f15,	// (0x00025f82) cell_video_dialer_keypad_pane

0xd095,	// (0x00031102) bg_button_pane_cp08_ParamLimits

0xd095,	// (0x00031102) bg_button_pane_cp08

0x80c7,	// (0x0002c134) cell_video_dialer_keypad_pane_g1_ParamLimits

0x80c7,	// (0x0002c134) cell_video_dialer_keypad_pane_g1

0x78b6,	// (0x0002b923) mup3_rocker2_pane_ParamLimits

0x78b6,	// (0x0002b923) mup3_rocker2_pane

0xc7ac,	// (0x00030819) mup3_rocker2_pane_g1

0x68e6,	// (0x0002a953) main_dialer2_pane

0x2944,	// (0x000269b1) main_mp4_pane

0xd0a9,	// (0x00031116) main_mp4_pane_g1_ParamLimits

0xd0a9,	// (0x00031116) main_mp4_pane_g1

0xd0a9,	// (0x00031116) main_mp4_pane_g2_ParamLimits

0xd0a9,	// (0x00031116) main_mp4_pane_g2

0x1f37,	// (0x00025fa4) main_mp4_pane_g3_ParamLimits

0x1f37,	// (0x00025fa4) main_mp4_pane_g3

0xd0b7,	// (0x00031124) main_mp4_pane_g4_ParamLimits

0xd0b7,	// (0x00031124) main_mp4_pane_g4

0xd0d1,	// (0x0003113e) main_mp4_pane_g5_ParamLimits

0xd0d1,	// (0x0003113e) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x00033969) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x00033969) main_mp4_pane_g

0xd105,	// (0x00031172) main_mp4_pane_t1_ParamLimits

0xd105,	// (0x00031172) main_mp4_pane_t1

0xd161,	// (0x000311ce) main_mp4_pane_t2_ParamLimits

0xd161,	// (0x000311ce) main_mp4_pane_t2

0xd1b3,	// (0x00031220) main_mp4_pane_t3_ParamLimits

0xd1b3,	// (0x00031220) main_mp4_pane_t3

0xd1d3,	// (0x00031240) main_mp4_pane_t4_ParamLimits

0xd1d3,	// (0x00031240) main_mp4_pane_t4

0x0003,

0xf909,	// (0x00033976) main_mp4_pane_t_ParamLimits

0xf909,	// (0x00033976) main_mp4_pane_t

0xd217,	// (0x00031284) mp4_progress_pane_ParamLimits

0xd217,	// (0x00031284) mp4_progress_pane

0xd261,	// (0x000312ce) mp4_rocker_pane_ParamLimits

0xd261,	// (0x000312ce) mp4_rocker_pane

0xd289,	// (0x000312f6) mp4_progress_pane_t1

0xd2a2,	// (0x0003130f) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0003397f) mp4_progress_pane_t

0xd2bb,	// (0x00031328) mup_progress_pane_cp04

0xd2c7,	// (0x00031334) mp4_rocker_pane_g1

0x1f73,	// (0x00025fe0) aid_cell_size_keypad2_ParamLimits

0x1f73,	// (0x00025fe0) aid_cell_size_keypad2

0x1f89,	// (0x00025ff6) dialer2_ne_pane_ParamLimits

0x1f89,	// (0x00025ff6) dialer2_ne_pane

0x1fa3,	// (0x00026010) grid_dialer2_keypad_pane_ParamLimits

0x1fa3,	// (0x00026010) grid_dialer2_keypad_pane

0xc58f,	// (0x000305fc) bg_popup_call_pane_cp07_ParamLimits

0xc58f,	// (0x000305fc) bg_popup_call_pane_cp07

0x8102,	// (0x0002c16f) dialer2_ne_pane_t1_ParamLimits

0x8102,	// (0x0002c16f) dialer2_ne_pane_t1

0x1fc1,	// (0x0002602e) cell_dialer2_keypad_pane_ParamLimits

0x1fc1,	// (0x0002602e) cell_dialer2_keypad_pane

0xd2e3,	// (0x00031350) bg_button_pane_pane_cp04_ParamLimits

0xd2e3,	// (0x00031350) bg_button_pane_pane_cp04

0x8141,	// (0x0002c1ae) cell_dialer2_keypad_pane_g1_ParamLimits

0x8141,	// (0x0002c1ae) cell_dialer2_keypad_pane_g1

0x4018,	// (0x00028085) aid_placing_vt_set_content_ParamLimits

0x4018,	// (0x00028085) aid_placing_vt_set_content

0x403e,	// (0x000280ab) aid_placing_vt_set_title_ParamLimits

0x403e,	// (0x000280ab) aid_placing_vt_set_title

0x2944,	// (0x000269b1) main_image3_pane

0x2043,	// (0x000260b0) area_side_right_pane_cp01_ParamLimits

0x2043,	// (0x000260b0) area_side_right_pane_cp01

0xd0a9,	// (0x00031116) main_image3_pane_g1_ParamLimits

0xd0a9,	// (0x00031116) main_image3_pane_g1

0x205a,	// (0x000260c7) main_image3_pane_g2_ParamLimits

0x205a,	// (0x000260c7) main_image3_pane_g2

0x2082,	// (0x000260ef) main_image3_pane_g3_ParamLimits

0x2082,	// (0x000260ef) main_image3_pane_g3

0x20ac,	// (0x00026119) main_image3_pane_g4_ParamLimits

0x20ac,	// (0x00026119) main_image3_pane_g4

0x0003,

0xf921,	// (0x0003398e) main_image3_pane_g_ParamLimits

0xf921,	// (0x0003398e) main_image3_pane_g

0x20d6,	// (0x00026143) main_image3_pane_t1_ParamLimits

0x20d6,	// (0x00026143) main_image3_pane_t1

0x212e,	// (0x0002619b) main_image3_pane_t2_ParamLimits

0x212e,	// (0x0002619b) main_image3_pane_t2

0x2180,	// (0x000261ed) main_image3_pane_t3_ParamLimits

0x2180,	// (0x000261ed) main_image3_pane_t3

0x0003,

0xf92a,	// (0x00033997) main_image3_pane_t_ParamLimits

0xf92a,	// (0x00033997) main_image3_pane_t

0x2bc0,	// (0x00026c2d) grid_sctrl_middle_pane_cp01_ParamLimits

0x2bc0,	// (0x00026c2d) grid_sctrl_middle_pane_cp01

0x81a9,	// (0x0002c216) cell_sctrl_middle_pane_cp01_ParamLimits

0x81a9,	// (0x0002c216) cell_sctrl_middle_pane_cp01

0x81c6,	// (0x0002c233) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x81c6,	// (0x0002c233) cell_sctrl_middle_pane_cp01_g1

0x2944,	// (0x000269b1) main_call4_pane

0x81dc,	// (0x0002c249) aid_size_button_call4_ParamLimits

0x81dc,	// (0x0002c249) aid_size_button_call4

0x820d,	// (0x0002c27a) call4_windows_pane_ParamLimits

0x820d,	// (0x0002c27a) call4_windows_pane

0x822d,	// (0x0002c29a) grid_call4_button_pane_ParamLimits

0x822d,	// (0x0002c29a) grid_call4_button_pane

0xd321,	// (0x0003138e) call4_windows_conf_pane

0xd336,	// (0x000313a3) popup_call4_audio_first_window_ParamLimits

0xd336,	// (0x000313a3) popup_call4_audio_first_window

0xd382,	// (0x000313ef) popup_call4_audio_second_window_ParamLimits

0xd382,	// (0x000313ef) popup_call4_audio_second_window

0xd396,	// (0x00031403) popup_call4_audio_wait_window_ParamLimits

0xd396,	// (0x00031403) popup_call4_audio_wait_window

0x825a,	// (0x0002c2c7) cell_call4_button_pane_ParamLimits

0x825a,	// (0x0002c2c7) cell_call4_button_pane

0x8283,	// (0x0002c2f0) bg_button_pane_cp09_ParamLimits

0x8283,	// (0x0002c2f0) bg_button_pane_cp09

0x828f,	// (0x0002c2fc) cell_call4_button_pane_g1_ParamLimits

0x828f,	// (0x0002c2fc) cell_call4_button_pane_g1

0x82b5,	// (0x0002c322) cell_call4_button_pane_t1_ParamLimits

0x82b5,	// (0x0002c322) cell_call4_button_pane_t1

0xd3de,	// (0x0003144b) popup_call4_audio_conf_window_ParamLimits

0xd3de,	// (0x0003144b) popup_call4_audio_conf_window

0x7916,	// (0x0002b983) mup3_progress_pane_t1_ParamLimits

0x792d,	// (0x0002b99a) mup3_progress_pane_t2_ParamLimits

0xcac6,	// (0x00030b33) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x00033870) mup3_progress_pane_t_ParamLimits

0xcadd,	// (0x00030b4a) mup_progress_pane_cp03_ParamLimits

0x7e74,	// (0x0002bee1) mup3_control_keys_pane_g4_copy1

0xd245,	// (0x000312b2) mp4_rocker2_pane_ParamLimits

0xd245,	// (0x000312b2) mp4_rocker2_pane

0xd3f2,	// (0x0003145f) mp4_rocker2_pane_g1

0xd3fa,	// (0x00031467) mp4_rocker2_pane_g2

0xd402,	// (0x0003146f) mp4_rocker2_pane_g3

0xd40a,	// (0x00031477) mp4_rocker2_pane_g4

0xd412,	// (0x0003147f) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x000339a0) mp4_rocker2_pane_g

0x2944,	// (0x000269b1) main_camera4_pane

0x2944,	// (0x000269b1) main_video4_pane

0x1ecd,	// (0x00025f3a) main_video_tele_dialer_pane_t1_ParamLimits

0x1ecd,	// (0x00025f3a) main_video_tele_dialer_pane_t1

0x1ee5,	// (0x00025f52) main_video_tele_dialer_pane_t2_ParamLimits

0x1ee5,	// (0x00025f52) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0003395a) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0003395a) main_video_tele_dialer_pane_t

0x2220,	// (0x0002628d) cam4_autofocus_pane_ParamLimits

0x2220,	// (0x0002628d) cam4_autofocus_pane

0x2236,	// (0x000262a3) cam4_image_uncrop_pane_ParamLimits

0x2236,	// (0x000262a3) cam4_image_uncrop_pane

0x2250,	// (0x000262bd) cam4_indicators_pane_ParamLimits

0x2250,	// (0x000262bd) cam4_indicators_pane

0x227b,	// (0x000262e8) main_camera4_pane_g1_ParamLimits

0x227b,	// (0x000262e8) main_camera4_pane_g1

0x2287,	// (0x000262f4) main_camera4_pane_g2_ParamLimits

0x2287,	// (0x000262f4) main_camera4_pane_g2

0x2293,	// (0x00026300) main_camera4_pane_g3_ParamLimits

0x2293,	// (0x00026300) main_camera4_pane_g3

0x229f,	// (0x0002630c) main_camera4_pane_g4_ParamLimits

0x229f,	// (0x0002630c) main_camera4_pane_g4

0x22ab,	// (0x00026318) main_camera4_pane_g5_ParamLimits

0x22ab,	// (0x00026318) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x000339ab) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x000339ab) main_camera4_pane_g

0x22c8,	// (0x00026335) main_camera4_pane_t1_ParamLimits

0x22c8,	// (0x00026335) main_camera4_pane_t1

0x2300,	// (0x0002636d) bg_tb_trans_pane_cp06

0x230e,	// (0x0002637b) cam4_indicators_pane_g1

0x231b,	// (0x00026388) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x000339bd) cam4_indicators_pane_g

0x2333,	// (0x000263a0) cam4_indicators_pane_t1

0x235d,	// (0x000263ca) main_video4_pane_g1_ParamLimits

0x235d,	// (0x000263ca) main_video4_pane_g1

0x236f,	// (0x000263dc) main_video4_pane_g2_ParamLimits

0x236f,	// (0x000263dc) main_video4_pane_g2

0x2383,	// (0x000263f0) main_video4_pane_g3_ParamLimits

0x2383,	// (0x000263f0) main_video4_pane_g3

0x2393,	// (0x00026400) main_video4_pane_g4_ParamLimits

0x2393,	// (0x00026400) main_video4_pane_g4

0x0004,

0xf957,	// (0x000339c4) main_video4_pane_g_ParamLimits

0xf957,	// (0x000339c4) main_video4_pane_g

0x23b3,	// (0x00026420) vid4_indicators_pane_ParamLimits

0x23b3,	// (0x00026420) vid4_indicators_pane

0x23e5,	// (0x00026452) video4_image_uncrop_cif_pane_ParamLimits

0x23e5,	// (0x00026452) video4_image_uncrop_cif_pane

0x23ff,	// (0x0002646c) video4_image_uncrop_nhd_pane_ParamLimits

0x23ff,	// (0x0002646c) video4_image_uncrop_nhd_pane

0x2236,	// (0x000262a3) video4_image_uncrop_vga_pane_ParamLimits

0x2236,	// (0x000262a3) video4_image_uncrop_vga_pane

0xd43a,	// (0x000314a7) bg_tb_trans_pane_cp07

0x230e,	// (0x0002637b) vid4_indicators_pane_g1

0x2413,	// (0x00026480) vid4_indicators_pane_g2

0x2420,	// (0x0002648d) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x000339cf) vid4_indicators_pane_g

0x2439,	// (0x000264a6) vid4_indicators_pane_t1

0x82df,	// (0x0002c34c) cam4_autofocus_pane_g1

0x82e7,	// (0x0002c354) cam4_autofocus_pane_g2

0x82ef,	// (0x0002c35c) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x000339da) cam4_autofocus_pane_g

0x82f7,	// (0x0002c364) cam4_autofocus_pane_g3_copy1

0x80ab,	// (0x0002c118) video_down_pane_cp_t1

0x80b9,	// (0x0002c126) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0003395f) video_down_pane_cp_t

0x2bc0,	// (0x00026c2d) popup_vitu2_window_ParamLimits

0x2bc0,	// (0x00026c2d) popup_vitu2_window

0x244b,	// (0x000264b8) aid_size_cell2_itu2_ParamLimits

0x244b,	// (0x000264b8) aid_size_cell2_itu2

0x2471,	// (0x000264de) aid_size_cell_itu2_ParamLimits

0x2471,	// (0x000264de) aid_size_cell_itu2

0x24cd,	// (0x0002653a) bg_popup_window_pane_cp09_ParamLimits

0x24cd,	// (0x0002653a) bg_popup_window_pane_cp09

0x24db,	// (0x00026548) field_vitu2_entry_pane_ParamLimits

0x24db,	// (0x00026548) field_vitu2_entry_pane

0x2501,	// (0x0002656e) grid_vitu2_function_pane_ParamLimits

0x2501,	// (0x0002656e) grid_vitu2_function_pane

0x2552,	// (0x000265bf) grid_vitu2_itu_pane_ParamLimits

0x2552,	// (0x000265bf) grid_vitu2_itu_pane

0x25e3,	// (0x00026650) cell_vitu2_itu_pane_ParamLimits

0x25e3,	// (0x00026650) cell_vitu2_itu_pane

0x2607,	// (0x00026674) cell_vitu2_function_pane_ParamLimits

0x2607,	// (0x00026674) cell_vitu2_function_pane

0xd450,	// (0x000314bd) bg_popup_call_pane_cp08_ParamLimits

0xd450,	// (0x000314bd) bg_popup_call_pane_cp08

0xd469,	// (0x000314d6) field_vitu2_entry_pane_g1

0xd475,	// (0x000314e2) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x000339e1) field_vitu2_entry_pane_g

0xd48f,	// (0x000314fc) field_vitu2_entry_pane_t1_ParamLimits

0xd48f,	// (0x000314fc) field_vitu2_entry_pane_t1

0xd4ae,	// (0x0003151b) field_vitu2_entry_pane_t2_ParamLimits

0xd4ae,	// (0x0003151b) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x000339e8) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x000339e8) field_vitu2_entry_pane_t

0x2646,	// (0x000266b3) bg_button_pane_cp010_ParamLimits

0x2646,	// (0x000266b3) bg_button_pane_cp010

0x2654,	// (0x000266c1) cell_vitu2_itu_pane_g1

0x2672,	// (0x000266df) cell_vitu2_itu_pane_t1_ParamLimits

0x2672,	// (0x000266df) cell_vitu2_itu_pane_t1

0x26d8,	// (0x00026745) cell_vitu2_itu_pane_t2_ParamLimits

0x26d8,	// (0x00026745) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x000339f2) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x000339f2) cell_vitu2_itu_pane_t

0xd4d3,	// (0x00031540) bg_button_pane_cp011

0x27b4,	// (0x00026821) cell_vitu2_function_pane_g1

0x2944,	// (0x000269b1) main_myfav_hc_pane

0x21d0,	// (0x0002623d) popup_image3_note_pane_ParamLimits

0x21d0,	// (0x0002623d) popup_image3_note_pane

0x21ec,	// (0x00026259) popup_image3_tool_bar_pane_ParamLimits

0x21ec,	// (0x00026259) popup_image3_tool_bar_pane

0x275c,	// (0x000267c9) cell_vitu2_itu_pane_t3_ParamLimits

0x275c,	// (0x000267c9) cell_vitu2_itu_pane_t3

0x2944,	// (0x000269b1) bg_popup_trans_pane

0xd4e1,	// (0x0003154e) grid_image3_tool_bar_pane

0xd4eb,	// (0x00031558) bg_popup_trans_pane_g1

0x456a,	// (0x000285d7) bg_popup_trans_pane_g2

0xd4f3,	// (0x00031560) bg_popup_trans_pane_g3

0xd4fb,	// (0x00031568) bg_popup_trans_pane_g4

0xd503,	// (0x00031570) bg_popup_trans_pane_g5

0xd50b,	// (0x00031578) bg_popup_trans_pane_g6

0xd513,	// (0x00031580) bg_popup_trans_pane_g7

0xd51b,	// (0x00031588) bg_popup_trans_pane_g8

0x454a,	// (0x000285b7) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x000339f9) bg_popup_trans_pane_g

0xd523,	// (0x00031590) cell_image3_tool_bar_pane_ParamLimits

0xd523,	// (0x00031590) cell_image3_tool_bar_pane

0xc7ac,	// (0x00030819) cell_image3_tool_bar_pane_g1

0x2944,	// (0x000269b1) bg_popup_trans_pane_cp1

0xd537,	// (0x000315a4) popup_image3_note_pane_t1

0xd545,	// (0x000315b2) popup_image3_note_pane_t2

0xd553,	// (0x000315c0) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x00033a0c) popup_image3_note_pane_t

0xd561,	// (0x000315ce) popup_image3_note_pane_t3_copy1

0x82ff,	// (0x0002c36c) bg_myfav_hc_instruction_pane_ParamLimits

0x82ff,	// (0x0002c36c) bg_myfav_hc_instruction_pane

0x8315,	// (0x0002c382) cell_myfav_contact_pane_ParamLimits

0x8315,	// (0x0002c382) cell_myfav_contact_pane

0x8331,	// (0x0002c39e) cell_myfav_contact_pane_cp1_ParamLimits

0x8331,	// (0x0002c39e) cell_myfav_contact_pane_cp1

0x8349,	// (0x0002c3b6) cell_myfav_contact_pane_cp2_ParamLimits

0x8349,	// (0x0002c3b6) cell_myfav_contact_pane_cp2

0x8361,	// (0x0002c3ce) cell_myfav_contact_pane_cp3_ParamLimits

0x8361,	// (0x0002c3ce) cell_myfav_contact_pane_cp3

0x8378,	// (0x0002c3e5) cell_myfav_contact_pane_cp4_ParamLimits

0x8378,	// (0x0002c3e5) cell_myfav_contact_pane_cp4

0x8390,	// (0x0002c3fd) cell_myfav_contact_pane_cp5_ParamLimits

0x8390,	// (0x0002c3fd) cell_myfav_contact_pane_cp5

0x83a4,	// (0x0002c411) cell_myfav_contact_pane_cp6_ParamLimits

0x83a4,	// (0x0002c411) cell_myfav_contact_pane_cp6

0x83ba,	// (0x0002c427) cell_myfav_contact_pane_cp7_ParamLimits

0x83ba,	// (0x0002c427) cell_myfav_contact_pane_cp7

0xd56f,	// (0x000315dc) listscroll_gen_pane_cp05

0x83d4,	// (0x0002c441) main_myfav_hc_pane_g1_ParamLimits

0x83d4,	// (0x0002c441) main_myfav_hc_pane_g1

0x83ee,	// (0x0002c45b) main_myfav_hc_pane_g2_ParamLimits

0x83ee,	// (0x0002c45b) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x00033a13) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x00033a13) main_myfav_hc_pane_g

0x8420,	// (0x0002c48d) main_myfav_hc_pane_t1_ParamLimits

0x8420,	// (0x0002c48d) main_myfav_hc_pane_t1

0xd578,	// (0x000315e5) main_myfav_hc_pane_t2_ParamLimits

0xd578,	// (0x000315e5) main_myfav_hc_pane_t2

0xd58a,	// (0x000315f7) main_myfav_hc_pane_t3_ParamLimits

0xd58a,	// (0x000315f7) main_myfav_hc_pane_t3

0x8437,	// (0x0002c4a4) main_myfav_hc_pane_t4_ParamLimits

0x8437,	// (0x0002c4a4) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x00033a1a) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x00033a1a) main_myfav_hc_pane_t

0xc7ac,	// (0x00030819) bg_myfav_hc_instruction_pane_g1

0xd59c,	// (0x00031609) cell_myfav_contact_pane_g1_ParamLimits

0xd59c,	// (0x00031609) cell_myfav_contact_pane_g1

0xd59c,	// (0x00031609) cell_myfav_contact_pane_g2_ParamLimits

0xd59c,	// (0x00031609) cell_myfav_contact_pane_g2

0xd5a8,	// (0x00031615) cell_myfav_contact_pane_g3_ParamLimits

0xd5a8,	// (0x00031615) cell_myfav_contact_pane_g3

0xcab0,	// (0x00030b1d) cell_myfav_contact_pane_g4_ParamLimits

0xcab0,	// (0x00030b1d) cell_myfav_contact_pane_g4

0xd5b5,	// (0x00031622) cell_myfav_contact_pane_g5_ParamLimits

0xd5b5,	// (0x00031622) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x00033a25) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x00033a25) cell_myfav_contact_pane_g

0x8408,	// (0x0002c475) main_myfav_hc_pane_g3_ParamLimits

0x8408,	// (0x0002c475) main_myfav_hc_pane_g3

0x2af9,	// (0x00026b66) popup_adpt_find_window

0x845f,	// (0x0002c4cc) afind_page_pane_ParamLimits

0x845f,	// (0x0002c4cc) afind_page_pane

0x8474,	// (0x0002c4e1) aid_size_cell_afind_ParamLimits

0x8474,	// (0x0002c4e1) aid_size_cell_afind

0x8492,	// (0x0002c4ff) bg_popup_sub_pane_cp09_ParamLimits

0x8492,	// (0x0002c4ff) bg_popup_sub_pane_cp09

0x849f,	// (0x0002c50c) find_pane_cp01_ParamLimits

0x849f,	// (0x0002c50c) find_pane_cp01

0xd5c1,	// (0x0003162e) grid_afind_control_pane_ParamLimits

0xd5c1,	// (0x0003162e) grid_afind_control_pane

0x84ac,	// (0x0002c519) grid_afind_pane_ParamLimits

0x84ac,	// (0x0002c519) grid_afind_pane

0x84ce,	// (0x0002c53b) cell_afind_pane_ParamLimits

0x84ce,	// (0x0002c53b) cell_afind_pane

0xc7ac,	// (0x00030819) afind_page_pane_g1

0x852f,	// (0x0002c59c) afind_page_pane_g2

0x8538,	// (0x0002c5a5) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x00033a30) afind_page_pane_g

0x8541,	// (0x0002c5ae) afind_page_pane_t1

0xd5d5,	// (0x00031642) cell_afind_grid_control_pane_ParamLimits

0xd5d5,	// (0x00031642) cell_afind_grid_control_pane

0xd2e3,	// (0x00031350) bg_button_pane_cp69_ParamLimits

0xd2e3,	// (0x00031350) bg_button_pane_cp69

0x8561,	// (0x0002c5ce) cell_afind_pane_g1_ParamLimits

0x8561,	// (0x0002c5ce) cell_afind_pane_g1

0x856e,	// (0x0002c5db) cell_afind_pane_t1_ParamLimits

0x856e,	// (0x0002c5db) cell_afind_pane_t1

0x3e9c,	// (0x00027f09) bg_button_pane_cp72

0xd5e4,	// (0x00031651) cell_afind_grid_control_pane_g1

0x63a1,	// (0x0002a40e) aid_image_placing_area_ParamLimits

0x63a1,	// (0x0002a40e) aid_image_placing_area

0xcd98,	// (0x00030e05) field_vitu_entry_pane_g1_ParamLimits

0xcd98,	// (0x00030e05) field_vitu_entry_pane_g1

0xcda4,	// (0x00030e11) field_vitu_entry_pane_g2_ParamLimits

0xcda4,	// (0x00030e11) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x000338ea) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x000338ea) field_vitu_entry_pane_g

0x7f41,	// (0x0002bfae) cell_vitu_itu_pane_g1_ParamLimits

0x7f83,	// (0x0002bff0) cell_vitu_itu_pane_t3_ParamLimits

0x7f83,	// (0x0002bff0) cell_vitu_itu_pane_t3

0xd289,	// (0x000312f6) mp4_progress_pane_t1_ParamLimits

0xd2a2,	// (0x0003130f) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0003397f) mp4_progress_pane_t_ParamLimits

0xd2bb,	// (0x00031328) mup_progress_pane_cp04_ParamLimits

0x844b,	// (0x0002c4b8) main_myfav_hc_pane_t5_ParamLimits

0x844b,	// (0x0002c4b8) main_myfav_hc_pane_t5

0x299a,	// (0x00026a07) aid_zoom_text_primary

0x2af9,	// (0x00026b66) popup_adpt_find_window_ParamLimits

0x2bc0,	// (0x00026c2d) main_cam_set_pane

0x2267,	// (0x000262d4) cam4_zoom_pane_ParamLimits

0x2267,	// (0x000262d4) cam4_zoom_pane

0x8580,	// (0x0002c5ed) main_cam_set_pane_g1_ParamLimits

0x8580,	// (0x0002c5ed) main_cam_set_pane_g1

0x858e,	// (0x0002c5fb) main_cam_set_pane_g2_ParamLimits

0x858e,	// (0x0002c5fb) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x00033a37) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x00033a37) main_cam_set_pane_g

0x85b1,	// (0x0002c61e) main_cam_set_pane_t1_ParamLimits

0x85b1,	// (0x0002c61e) main_cam_set_pane_t1

0x85cc,	// (0x0002c639) main_cset_listscroll_pane_ParamLimits

0x85cc,	// (0x0002c639) main_cset_listscroll_pane

0x85ee,	// (0x0002c65b) main_cset_slider_pane_ParamLimits

0x85ee,	// (0x0002c65b) main_cset_slider_pane

0xd5f5,	// (0x00031662) main_cset_list_pane_ParamLimits

0xd5f5,	// (0x00031662) main_cset_list_pane

0xd605,	// (0x00031672) scroll_pane_cp028

0x8614,	// (0x0002c681) aid_area_touch_slider

0x8630,	// (0x0002c69d) cset_slider_pane

0x865a,	// (0x0002c6c7) main_cset_slider_pane_g1

0x866f,	// (0x0002c6dc) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x00033a3c) main_cset_slider_pane_g

0xd63e,	// (0x000316ab) main_cset_slider_pane_t1

0x872b,	// (0x0002c798) main_cset_slider_pane_t2

0x8745,	// (0x0002c7b2) main_cset_slider_pane_t3

0x875f,	// (0x0002c7cc) main_cset_slider_pane_t4

0x8779,	// (0x0002c7e6) main_cset_slider_pane_t5

0x8795,	// (0x0002c802) main_cset_slider_pane_t6

0x87aa,	// (0x0002c817) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x00033a61) main_cset_slider_pane_t

0x88ae,	// (0x0002c91b) cset_list_set_pane_ParamLimits

0x88ae,	// (0x0002c91b) cset_list_set_pane

0x88c2,	// (0x0002c92f) aid_position_infowindow_above

0x88ca,	// (0x0002c937) aid_position_infowindow_below

0x88d2,	// (0x0002c93f) cset_list_set_pane_g1_ParamLimits

0x88d2,	// (0x0002c93f) cset_list_set_pane_g1

0x88de,	// (0x0002c94b) cset_list_set_pane_g3_ParamLimits

0x88de,	// (0x0002c94b) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x00033a80) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x00033a80) cset_list_set_pane_g

0x88ed,	// (0x0002c95a) cset_list_set_pane_t1_ParamLimits

0x88ed,	// (0x0002c95a) cset_list_set_pane_t1

0x2bc0,	// (0x00026c2d) list_highlight_pane_cp021_ParamLimits

0x2bc0,	// (0x00026c2d) list_highlight_pane_cp021

0xaf63,	// (0x0002efd0) cset_slider_pane_g1

0xaf75,	// (0x0002efe2) cset_slider_pane_g2

0xaf6c,	// (0x0002efd9) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x00033a85) cset_slider_pane_g

0xd6de,	// (0x0003174b) aid_area_touch_cam4_zoom

0xd6e6,	// (0x00031753) cam4_zoom_cont_pane

0xd6ee,	// (0x0003175b) cam4_zoom_pane_g1

0xd6f6,	// (0x00031763) cam4_zoom_pane_g2

0x27c8,	// (0x00026835) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x00033a8c) cam4_zoom_pane_g

0xd6fe,	// (0x0003176b) cam4_zoom_cont_pane_g1

0xd707,	// (0x00031774) cam4_zoom_cont_pane_g2

0xd710,	// (0x0003177d) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x00033a93) cam4_zoom_cont_pane_g

0x81fa,	// (0x0002c267) call4_image_pane_ParamLimits

0x81fa,	// (0x0002c267) call4_image_pane

0xd321,	// (0x0003138e) call4_windows_conf_pane_ParamLimits

0xd360,	// (0x000313cd) popup_call4_audio_in_window_ParamLimits

0xd360,	// (0x000313cd) popup_call4_audio_in_window

0x2944,	// (0x000269b1) bg_popup_call2_act_pane_cp02

0xd3d6,	// (0x00031443) call4_list_conf_pane

0xc7ac,	// (0x00030819) call4_image_pane_g1

0xc7ac,	// (0x00030819) call4_image_pane_g2

0x0001,

0xf743,	// (0x000337b0) call4_image_pane_g

0xd719,	// (0x00031786) list_single_graphic_popup_conf4_pane_ParamLimits

0xd719,	// (0x00031786) list_single_graphic_popup_conf4_pane

0x2944,	// (0x000269b1) list_highlight_pane_cp022

0xd72c,	// (0x00031799) list_single_graphic_popup_conf4_pane_g1

0x548a,	// (0x000294f7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x00033a9a) list_single_graphic_popup_conf4_pane_g

0xd734,	// (0x000317a1) list_single_graphic_popup_conf4_pane_t1

0x4132,	// (0x0002819f) popup_vtel_slider_window_ParamLimits

0x4132,	// (0x0002819f) popup_vtel_slider_window

0xd2d1,	// (0x0003133e) dialer2_ne_pane_t2_ParamLimits

0xd2d1,	// (0x0003133e) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x00033984) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x00033984) dialer2_ne_pane_t

0xc58f,	// (0x000305fc) bg_popup_sub_pane_cp010_ParamLimits

0xc58f,	// (0x000305fc) bg_popup_sub_pane_cp010

0x8902,	// (0x0002c96f) popup_vtel_slider_window_g1_ParamLimits

0x8902,	// (0x0002c96f) popup_vtel_slider_window_g1

0x8915,	// (0x0002c982) popup_vtel_slider_window_g2_ParamLimits

0x8915,	// (0x0002c982) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x00033a9f) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x00033a9f) popup_vtel_slider_window_g

0x896b,	// (0x0002c9d8) vtel_slider_pane_ParamLimits

0x896b,	// (0x0002c9d8) vtel_slider_pane

0x898d,	// (0x0002c9fa) vtel_slider_pane_g1_ParamLimits

0x898d,	// (0x0002c9fa) vtel_slider_pane_g1

0x89a1,	// (0x0002ca0e) vtel_slider_pane_g2_ParamLimits

0x89a1,	// (0x0002ca0e) vtel_slider_pane_g2

0x89b9,	// (0x0002ca26) vtel_slider_pane_g3_ParamLimits

0x89b9,	// (0x0002ca26) vtel_slider_pane_g3

0x898d,	// (0x0002c9fa) vtel_slider_pane_g4_ParamLimits

0x898d,	// (0x0002c9fa) vtel_slider_pane_g4

0x89cf,	// (0x0002ca3c) vtel_slider_pane_g5_ParamLimits

0x89cf,	// (0x0002ca3c) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x00033aa8) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x00033aa8) vtel_slider_pane_g

0x2944,	// (0x000269b1) main_gallery2_pane

0x249d,	// (0x0002650a) aid_size_row_itut2_dropdow_list_ParamLimits

0x249d,	// (0x0002650a) aid_size_row_itut2_dropdow_list

0x2529,	// (0x00026596) grid_vitu2_function_top_pane_ParamLimits

0x2529,	// (0x00026596) grid_vitu2_function_top_pane

0x258e,	// (0x000265fb) popup_vitu2_dropdown_list_window_ParamLimits

0x258e,	// (0x000265fb) popup_vitu2_dropdown_list_window

0x25b7,	// (0x00026624) popup_vitu2_match_list_window

0x27d0,	// (0x0002683d) cell_vitu2_function_top_pane_ParamLimits

0x27d0,	// (0x0002683d) cell_vitu2_function_top_pane

0x27ee,	// (0x0002685b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x27ee,	// (0x0002685b) cell_vitu2_function_top_pane_cp01

0x280c,	// (0x00026879) cell_vitu2_function_top_wide_pane_ParamLimits

0x280c,	// (0x00026879) cell_vitu2_function_top_wide_pane

0xd4d3,	// (0x00031540) bg_button_pane_cp012

0x282a,	// (0x00026897) cell_vitu2_function_top_pane_g1

0xd750,	// (0x000317bd) bg_button_pane_cp013_ParamLimits

0xd750,	// (0x000317bd) bg_button_pane_cp013

0x89e5,	// (0x0002ca52) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x89e5,	// (0x0002ca52) cell_vitu2_function_top_wide_pane_g1

0xd4d3,	// (0x00031540) bg_popup_sub_pane_cp20

0x283e,	// (0x000268ab) list_vitu2_match_list_pane

0xd4eb,	// (0x00031558) bg_popup_sub_pane_cp20_g1

0xd4f3,	// (0x00031560) bg_popup_sub_pane_cp20_g2

0x456a,	// (0x000285d7) bg_popup_sub_pane_cp20_g3

0xd4fb,	// (0x00031568) bg_popup_sub_pane_cp20_g4

0x454a,	// (0x000285b7) bg_popup_sub_pane_cp20_g5

0xd76c,	// (0x000317d9) bg_popup_sub_pane_cp20_g6

0xd50b,	// (0x00031578) bg_popup_sub_pane_cp20_g7

0xd513,	// (0x00031580) bg_popup_sub_pane_cp20_g8

0xd51b,	// (0x00031588) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x00033ab3) bg_popup_sub_pane_cp20_g

0xd774,	// (0x000317e1) list_vitu2_match_list_item_pane_ParamLimits

0xd774,	// (0x000317e1) list_vitu2_match_list_item_pane

0xd786,	// (0x000317f3) list_vitu2_match_list_item_pane_t1

0xad5e,	// (0x0002edcb) bg_popup_sub_pane_cp21

0xd7ac,	// (0x00031819) grid_vitu2_dropdown_list_pane

0x285c,	// (0x000268c9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x285c,	// (0x000268c9) cell_vitu2_dropdown_list_char_pane

0x287d,	// (0x000268ea) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x287d,	// (0x000268ea) cell_vitu2_dropdown_list_ctrl_pane

0xd7b4,	// (0x00031821) cell_vitu2_dropdown_list_char_pane_g1

0xd7bd,	// (0x0003182a) cell_vitu2_dropdown_list_char_pane_g2

0xd7c6,	// (0x00031833) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x00033ad0) cell_vitu2_dropdown_list_char_pane_g

0x28a9,	// (0x00026916) cell_vitu2_dropdown_list_char_pane_t1

0x8a2e,	// (0x0002ca9b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8a2e,	// (0x0002ca9b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8a3e,	// (0x0002caab) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8a3e,	// (0x0002caab) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8a4f,	// (0x0002cabc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8a4f,	// (0x0002cabc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x28b7,	// (0x00026924) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x28b7,	// (0x00026924) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd7cf,	// (0x0003183c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd7cf,	// (0x0003183c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x00033ad7) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x00033ad7) cell_vitu2_dropdown_list_ctrl_pane_g

0x8a5f,	// (0x0002cacc) aid_size_cell_gallery2_ParamLimits

0x8a5f,	// (0x0002cacc) aid_size_cell_gallery2

0x8a75,	// (0x0002cae2) grid_gallery2_pane_ParamLimits

0x8a75,	// (0x0002cae2) grid_gallery2_pane

0x8a89,	// (0x0002caf6) scroll_pane_cp029_ParamLimits

0x8a89,	// (0x0002caf6) scroll_pane_cp029

0x8a95,	// (0x0002cb02) cell_gallery2_pane_ParamLimits

0x8a95,	// (0x0002cb02) cell_gallery2_pane

0xd7dd,	// (0x0003184a) cell_gallery2_pane_g2

0x8acb,	// (0x0002cb38) cell_gallery2_pane_g3

0xd7e7,	// (0x00031854) cell_gallery2_pane_g4

0xd7ef,	// (0x0003185c) cell_gallery2_pane_g5

0x59c0,	// (0x00029a2d) grid_highlight_pane_cp10

0x25b7,	// (0x00026624) popup_vitu2_match_list_window_ParamLimits

0x25cc,	// (0x00026639) popup_vitu2_query_window_ParamLimits

0x25cc,	// (0x00026639) popup_vitu2_query_window

0xad5e,	// (0x0002edcb) bg_vitu2_candi_button_pane

0xd7b4,	// (0x00031821) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd7bd,	// (0x0003182a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd7c6,	// (0x00031833) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8ad3,	// (0x0002cb40) bg_button_pane_cp015

0x8add,	// (0x0002cb4a) bg_button_pane_cp016

0x8ae7,	// (0x0002cb54) bg_button_pane_cp017

0x2bc0,	// (0x00026c2d) bg_popup_sub_pane_cp22

0xd7f7,	// (0x00031864) popup_vitu2_query_window_g1

0x8b0f,	// (0x0002cb7c) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x00033ae2) popup_vitu2_query_window_g

0x8b1d,	// (0x0002cb8a) popup_vitu2_query_window_t1_ParamLimits

0x8b1d,	// (0x0002cb8a) popup_vitu2_query_window_t1

0x8b45,	// (0x0002cbb2) popup_vitu2_query_window_t2_ParamLimits

0x8b45,	// (0x0002cbb2) popup_vitu2_query_window_t2

0x8b57,	// (0x0002cbc4) popup_vitu2_query_window_t3_ParamLimits

0x8b57,	// (0x0002cbc4) popup_vitu2_query_window_t3

0x8b7f,	// (0x0002cbec) popup_vitu2_query_window_t4_ParamLimits

0x8b7f,	// (0x0002cbec) popup_vitu2_query_window_t4

0x8b93,	// (0x0002cc00) popup_vitu2_query_window_t5_ParamLimits

0x8b93,	// (0x0002cc00) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x00033ae7) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x00033ae7) popup_vitu2_query_window_t

0xd5ed,	// (0x0003165a) main_cset_text_pane

0x8614,	// (0x0002c681) aid_area_touch_slider_ParamLimits

0x8630,	// (0x0002c69d) cset_slider_pane_ParamLimits

0x865a,	// (0x0002c6c7) main_cset_slider_pane_g1_ParamLimits

0x866f,	// (0x0002c6dc) main_cset_slider_pane_g2_ParamLimits

0xd60e,	// (0x0003167b) main_cset_slider_pane_g3_ParamLimits

0xd60e,	// (0x0003167b) main_cset_slider_pane_g3

0x8684,	// (0x0002c6f1) main_cset_slider_pane_g4_ParamLimits

0x8684,	// (0x0002c6f1) main_cset_slider_pane_g4

0x8693,	// (0x0002c700) main_cset_slider_pane_g5_ParamLimits

0x8693,	// (0x0002c700) main_cset_slider_pane_g5

0x869f,	// (0x0002c70c) main_cset_slider_pane_g6_ParamLimits

0x869f,	// (0x0002c70c) main_cset_slider_pane_g6

0xf9cf,	// (0x00033a3c) main_cset_slider_pane_g_ParamLimits

0xd63e,	// (0x000316ab) main_cset_slider_pane_t1_ParamLimits

0x872b,	// (0x0002c798) main_cset_slider_pane_t2_ParamLimits

0x8745,	// (0x0002c7b2) main_cset_slider_pane_t3_ParamLimits

0x875f,	// (0x0002c7cc) main_cset_slider_pane_t4_ParamLimits

0x8779,	// (0x0002c7e6) main_cset_slider_pane_t5_ParamLimits

0x8795,	// (0x0002c802) main_cset_slider_pane_t6_ParamLimits

0x87aa,	// (0x0002c817) main_cset_slider_pane_t7_ParamLimits

0x87d4,	// (0x0002c841) main_cset_slider_pane_t8_ParamLimits

0x87d4,	// (0x0002c841) main_cset_slider_pane_t8

0x87fc,	// (0x0002c869) main_cset_slider_pane_t9_ParamLimits

0x87fc,	// (0x0002c869) main_cset_slider_pane_t9

0x8824,	// (0x0002c891) main_cset_slider_pane_t10_ParamLimits

0x8824,	// (0x0002c891) main_cset_slider_pane_t10

0x884c,	// (0x0002c8b9) main_cset_slider_pane_t11_ParamLimits

0x884c,	// (0x0002c8b9) main_cset_slider_pane_t11

0x8874,	// (0x0002c8e1) main_cset_slider_pane_t12_ParamLimits

0x8874,	// (0x0002c8e1) main_cset_slider_pane_t12

0x8891,	// (0x0002c8fe) main_cset_slider_pane_t13_ParamLimits

0x8891,	// (0x0002c8fe) main_cset_slider_pane_t13

0xf9f4,	// (0x00033a61) main_cset_slider_pane_t_ParamLimits

0x2944,	// (0x000269b1) bg_popup_sub_pane_cp011

0xd803,	// (0x00031870) main_cset_text_pane_g1

0xd80b,	// (0x00031878) main_cset_text_pane_t1

0xd819,	// (0x00031886) main_cset_text_pane_t2

0xd827,	// (0x00031894) main_cset_text_pane_t3

0xd835,	// (0x000318a2) main_cset_text_pane_t4

0xd843,	// (0x000318b0) main_cset_text_pane_t5

0xd851,	// (0x000318be) main_cset_text_pane_t6

0xd85f,	// (0x000318cc) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x00033af2) main_cset_text_pane_t

0x2944,	// (0x000269b1) main_cam4_burst_pane

0x2944,	// (0x000269b1) main_cam5_pane

0x854f,	// (0x0002c5bc) bg_button_pane_cp019

0x8558,	// (0x0002c5c5) bg_button_pane_cp020

0xd61a,	// (0x00031687) main_cset_slider_pane_g7_ParamLimits

0xd61a,	// (0x00031687) main_cset_slider_pane_g7

0xd626,	// (0x00031693) main_cset_slider_pane_g8_ParamLimits

0xd626,	// (0x00031693) main_cset_slider_pane_g8

0x86b3,	// (0x0002c720) main_cset_slider_pane_g9_ParamLimits

0x86b3,	// (0x0002c720) main_cset_slider_pane_g9

0x86bf,	// (0x0002c72c) main_cset_slider_pane_g10_ParamLimits

0x86bf,	// (0x0002c72c) main_cset_slider_pane_g10

0x86cb,	// (0x0002c738) main_cset_slider_pane_g11_ParamLimits

0x86cb,	// (0x0002c738) main_cset_slider_pane_g11

0x86d7,	// (0x0002c744) main_cset_slider_pane_g12_ParamLimits

0x86d7,	// (0x0002c744) main_cset_slider_pane_g12

0x86e3,	// (0x0002c750) main_cset_slider_pane_g13_ParamLimits

0x86e3,	// (0x0002c750) main_cset_slider_pane_g13

0x86ef,	// (0x0002c75c) main_cset_slider_pane_g14_ParamLimits

0x86ef,	// (0x0002c75c) main_cset_slider_pane_g14

0x86fb,	// (0x0002c768) main_cset_slider_pane_g15_ParamLimits

0x86fb,	// (0x0002c768) main_cset_slider_pane_g15

0xd66c,	// (0x000316d9) main_cset_slider_pane_t14_ParamLimits

0xd66c,	// (0x000316d9) main_cset_slider_pane_t14

0xd6a5,	// (0x00031712) main_cset_slider_pane_t15_ParamLimits

0xd6a5,	// (0x00031712) main_cset_slider_pane_t15

0x8ba7,	// (0x0002cc14) aid_cam4_burst_size_cell_ParamLimits

0x8ba7,	// (0x0002cc14) aid_cam4_burst_size_cell

0x8bc7,	// (0x0002cc34) grid_cam4_burst_pane_ParamLimits

0x8bc7,	// (0x0002cc34) grid_cam4_burst_pane

0x8bff,	// (0x0002cc6c) linegrid_cam4_burst_pane_ParamLimits

0x8bff,	// (0x0002cc6c) linegrid_cam4_burst_pane

0x8c25,	// (0x0002cc92) scroll_pane_cp30_ParamLimits

0x8c25,	// (0x0002cc92) scroll_pane_cp30

0x8c31,	// (0x0002cc9e) cell_cam4_burst_pane_ParamLimits

0x8c31,	// (0x0002cc9e) cell_cam4_burst_pane

0xd86d,	// (0x000318da) linegrid_cam4_burst_pane_g1_ParamLimits

0xd86d,	// (0x000318da) linegrid_cam4_burst_pane_g1

0x8c7e,	// (0x0002cceb) linegrid_cam4_burst_pane_g2_ParamLimits

0x8c7e,	// (0x0002cceb) linegrid_cam4_burst_pane_g2

0xd87a,	// (0x000318e7) linegrid_cam4_burst_pane_g3_ParamLimits

0xd87a,	// (0x000318e7) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x00033b01) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x00033b01) linegrid_cam4_burst_pane_g

0x8c8f,	// (0x0002ccfc) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8c8f,	// (0x0002ccfc) linegrid_cam4_burst_pane_g3_copy1

0xd887,	// (0x000318f4) linegrid_cam4_burst_pane_g4_ParamLimits

0xd887,	// (0x000318f4) linegrid_cam4_burst_pane_g4

0x8ca9,	// (0x0002cd16) linegrid_cam4_burst_pane_g5_ParamLimits

0x8ca9,	// (0x0002cd16) linegrid_cam4_burst_pane_g5

0x8cba,	// (0x0002cd27) linegrid_cam4_burst_pane_g6_ParamLimits

0x8cba,	// (0x0002cd27) linegrid_cam4_burst_pane_g6

0xd894,	// (0x00031901) linegrid_cam4_burst_pane_g7_ParamLimits

0xd894,	// (0x00031901) linegrid_cam4_burst_pane_g7

0x8cd1,	// (0x0002cd3e) cell_cam4_burst_pane_g1

0xd8ad,	// (0x0003191a) main_cam5_pane_t1_ParamLimits

0xd8ad,	// (0x0003191a) main_cam5_pane_t1

0xd8bf,	// (0x0003192c) main_cam5_pane_t2_ParamLimits

0xd8bf,	// (0x0003192c) main_cam5_pane_t2

0xd8d1,	// (0x0003193e) main_cam5_pane_t3_ParamLimits

0xd8d1,	// (0x0003193e) main_cam5_pane_t3

0xd8e3,	// (0x00031950) main_cam5_pane_t4_ParamLimits

0xd8e3,	// (0x00031950) main_cam5_pane_t4

0xd8f9,	// (0x00031966) main_cam5_pane_t5_ParamLimits

0xd8f9,	// (0x00031966) main_cam5_pane_t5

0xd90b,	// (0x00031978) main_cam5_pane_t6_ParamLimits

0xd90b,	// (0x00031978) main_cam5_pane_t6

0xd91f,	// (0x0003198c) main_cam5_pane_t7_ParamLimits

0xd91f,	// (0x0003198c) main_cam5_pane_t7

0xd931,	// (0x0003199e) main_cam5_pane_t8_ParamLimits

0xd931,	// (0x0003199e) main_cam5_pane_t8

0xd94d,	// (0x000319ba) main_cam5_pane_t9_ParamLimits

0xd94d,	// (0x000319ba) main_cam5_pane_t9

0xd95f,	// (0x000319cc) main_cam5_pane_t10_ParamLimits

0xd95f,	// (0x000319cc) main_cam5_pane_t10

0xd971,	// (0x000319de) main_cam5_pane_t11_ParamLimits

0xd971,	// (0x000319de) main_cam5_pane_t11

0xd983,	// (0x000319f0) main_cam5_pane_t12_ParamLimits

0xd983,	// (0x000319f0) main_cam5_pane_t12

0xd998,	// (0x00031a05) main_cam5_pane_t13_ParamLimits

0xd998,	// (0x00031a05) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x00033b0d) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x00033b0d) main_cam5_pane_t

0x2b86,	// (0x00026bf3) popup_scut_keymap_window_ParamLimits

0x2b86,	// (0x00026bf3) popup_scut_keymap_window

0x8ce4,	// (0x0002cd51) aid_size_cell_brow_shortcut

0x59c0,	// (0x00029a2d) bg_popup_window_pane_cp010

0x8cf0,	// (0x0002cd5d) grid_scut_pane

0x8cfc,	// (0x0002cd69) cell_scut_pane_ParamLimits

0x8cfc,	// (0x0002cd69) cell_scut_pane

0x8d13,	// (0x0002cd80) cell_scut_pane_g1

0xd9b5,	// (0x00031a22) cell_scut_pane_t1

0xd9c4,	// (0x00031a31) cell_scut_pane_t2

0x8d1c,	// (0x0002cd89) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x00033b28) cell_scut_pane_t

0x74f5,	// (0x0002b562) main_mup3_pane_g8_ParamLimits

0x74f5,	// (0x0002b562) main_mup3_pane_g8

0x24b5,	// (0x00026522) area_vitu2_query_pane_ParamLimits

0x24b5,	// (0x00026522) area_vitu2_query_pane

0x8af1,	// (0x0002cb5e) input_focus_pane_cp08

0xd9d3,	// (0x00031a40) area_vitu2_query_pane_g1

0x8d2a,	// (0x0002cd97) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x00033b2f) area_vitu2_query_pane_g

0x8d3b,	// (0x0002cda8) area_vitu2_query_pane_t1_ParamLimits

0x8d3b,	// (0x0002cda8) area_vitu2_query_pane_t1

0x8d4f,	// (0x0002cdbc) area_vitu2_query_pane_t2_ParamLimits

0x8d4f,	// (0x0002cdbc) area_vitu2_query_pane_t2

0x8d63,	// (0x0002cdd0) area_vitu2_query_pane_t3_ParamLimits

0x8d63,	// (0x0002cdd0) area_vitu2_query_pane_t3

0xd9df,	// (0x00031a4c) area_vitu2_query_pane_t4_ParamLimits

0xd9df,	// (0x00031a4c) area_vitu2_query_pane_t4

0xda07,	// (0x00031a74) area_vitu2_query_pane_t5_ParamLimits

0xda07,	// (0x00031a74) area_vitu2_query_pane_t5

0xda2f,	// (0x00031a9c) area_vitu2_query_pane_t6_ParamLimits

0xda2f,	// (0x00031a9c) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x00033b34) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x00033b34) area_vitu2_query_pane_t

0x8d8b,	// (0x0002cdf8) bg_button_pane_cp018

0x8d99,	// (0x0002ce06) bg_button_pane_cp021

0x8da5,	// (0x0002ce12) bg_button_pane_cp022

0x8db6,	// (0x0002ce23) input_focus_pane_cp09

0x57e7,	// (0x00029854) aid_size_touch_mv_arrow_left

0x5810,	// (0x0002987d) aid_size_touch_mv_arrow_right

0x8713,	// (0x0002c780) main_cset_slider_pane_g16_ParamLimits

0x8713,	// (0x0002c780) main_cset_slider_pane_g16

0x871f,	// (0x0002c78c) main_cset_slider_pane_g17_ParamLimits

0x871f,	// (0x0002c78c) main_cset_slider_pane_g17

0x8cd1,	// (0x0002cd3e) cell_cam4_burst_pane_g1_ParamLimits

0x2944,	// (0x000269b1) compa_mode_pane

0x8925,	// (0x0002c992) popup_vtel_slider_window_g3_ParamLimits

0x8925,	// (0x0002c992) popup_vtel_slider_window_g3

0x893c,	// (0x0002c9a9) popup_vtel_slider_window_g4_ParamLimits

0x893c,	// (0x0002c9a9) popup_vtel_slider_window_g4

0x8953,	// (0x0002c9c0) popup_vtel_slider_window_t1_ParamLimits

0x8953,	// (0x0002c9c0) popup_vtel_slider_window_t1

0x2944,	// (0x000269b1) main_cl_pane

0xc2cc,	// (0x00030339) popup_imed_adjust2_window_ParamLimits

0xc2a4,	// (0x00030311) bg_tb_trans_pane_cp05_ParamLimits

0xcccd,	// (0x00030d3a) popup_imed_adjust2_window_g1_ParamLimits

0xccdc,	// (0x00030d49) popup_imed_adjust2_window_g2_ParamLimits

0xccdc,	// (0x00030d49) popup_imed_adjust2_window_g2

0xcce8,	// (0x00030d55) popup_imed_adjust2_window_g3_ParamLimits

0xcce8,	// (0x00030d55) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x000338ae) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x000338ae) popup_imed_adjust2_window_g

0xccf4,	// (0x00030d61) popup_imed_adjust2_window_t1_ParamLimits

0xcd0c,	// (0x00030d79) slider_imed_adjust_pane_ParamLimits

0xcd20,	// (0x00030d8d) slider_imed_adjust_pane_g1_ParamLimits

0xcd30,	// (0x00030d9d) slider_imed_adjust_pane_g2_ParamLimits

0xcd40,	// (0x00030dad) slider_imed_adjust_pane_g3_ParamLimits

0xcd51,	// (0x00030dbe) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x000338b5) slider_imed_adjust_pane_g_ParamLimits

0x2208,	// (0x00026275) aid_touch_area_cam4_ParamLimits

0x2208,	// (0x00026275) aid_touch_area_cam4

0xd41a,	// (0x00031487) battery_pane_cp01

0x22bc,	// (0x00026329) main_camera4_pane_g6_ParamLimits

0x22bc,	// (0x00026329) main_camera4_pane_g6

0x22df,	// (0x0002634c) main_camera4_pane_t2_ParamLimits

0x22df,	// (0x0002634c) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x000339b8) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x000339b8) main_camera4_pane_t

0x2345,	// (0x000263b2) aid_touch_area_vid4_ParamLimits

0x2345,	// (0x000263b2) aid_touch_area_vid4

0x23a3,	// (0x00026410) main_video4_pane_g5_ParamLimits

0x23a3,	// (0x00026410) main_video4_pane_g5

0x23ca,	// (0x00026437) vid4_progress_pane_ParamLimits

0x23ca,	// (0x00026437) vid4_progress_pane

0xd632,	// (0x0003169f) main_cset_slider_pane_g18_ParamLimits

0xd632,	// (0x0003169f) main_cset_slider_pane_g18

0xd8a1,	// (0x0003190e) cell_cam4_burst_pane_g2_ParamLimits

0xd8a1,	// (0x0003190e) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x00033b08) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x00033b08) cell_cam4_burst_pane_g

0x35c2,	// (0x0002762f) bg_cl_pane_ParamLimits

0x35c2,	// (0x0002762f) bg_cl_pane

0x8dc7,	// (0x0002ce34) cl_header_pane_ParamLimits

0x8dc7,	// (0x0002ce34) cl_header_pane

0x8ddb,	// (0x0002ce48) cl_listscroll_pane_ParamLimits

0x8ddb,	// (0x0002ce48) cl_listscroll_pane

0xda7b,	// (0x00031ae8) bg_cl_pane_g1

0xda83,	// (0x00031af0) bg_cl_pane_g2

0xda8b,	// (0x00031af8) bg_cl_pane_g3

0xda93,	// (0x00031b00) bg_cl_pane_g4

0xda9b,	// (0x00031b08) bg_cl_pane_g5

0xdaa3,	// (0x00031b10) bg_cl_pane_g6

0xdaab,	// (0x00031b18) bg_cl_pane_g7

0xdab3,	// (0x00031b20) bg_cl_pane_g8

0xdabb,	// (0x00031b28) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x00033b43) bg_cl_pane_g

0x8deb,	// (0x0002ce58) aid_height_cl_leading_ParamLimits

0x8deb,	// (0x0002ce58) aid_height_cl_leading

0x8df7,	// (0x0002ce64) aid_height_cl_text_ParamLimits

0x8df7,	// (0x0002ce64) aid_height_cl_text

0x2bc0,	// (0x00026c2d) bg_cl_header_pane_ParamLimits

0x2bc0,	// (0x00026c2d) bg_cl_header_pane

0x8e16,	// (0x0002ce83) cl_header_pane_g1_ParamLimits

0x8e16,	// (0x0002ce83) cl_header_pane_g1

0x8e2c,	// (0x0002ce99) cl_header_pane_t1_ParamLimits

0x8e2c,	// (0x0002ce99) cl_header_pane_t1

0xdac3,	// (0x00031b30) cl_list_pane

0xd605,	// (0x00031672) hc_scroll_pane_cp01

0x454a,	// (0x000285b7) bg_cl_header_pane_g1

0xd4eb,	// (0x00031558) bg_cl_header_pane_g2

0x456a,	// (0x000285d7) bg_cl_header_pane_g3

0xd4fb,	// (0x00031568) bg_cl_header_pane_g4

0xd4f3,	// (0x00031560) bg_cl_header_pane_g5

0xd76c,	// (0x000317d9) bg_cl_header_pane_g6

0xd513,	// (0x00031580) bg_cl_header_pane_g7

0xd51b,	// (0x00031588) bg_cl_header_pane_g8

0xd50b,	// (0x00031578) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x00033b56) bg_cl_header_pane_g

0x8e45,	// (0x0002ceb2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8e45,	// (0x0002ceb2) hc_cl_list_double_graphic_heading_pane

0x8e59,	// (0x0002cec6) hc_cl_list_single_graphic_pane_ParamLimits

0x8e59,	// (0x0002cec6) hc_cl_list_single_graphic_pane

0x8e73,	// (0x0002cee0) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8e73,	// (0x0002cee0) hc_cl_list_single_graphic_pane_g1

0x8e7f,	// (0x0002ceec) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8e7f,	// (0x0002ceec) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x00033b69) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x00033b69) hc_cl_list_single_graphic_pane_g

0x8e93,	// (0x0002cf00) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8e93,	// (0x0002cf00) hc_cl_list_single_graphic_pane_t1

0x8e73,	// (0x0002cee0) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8e73,	// (0x0002cee0) hc_cl_list_double_graphic_heading_pane_g1

0x8ea8,	// (0x0002cf15) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8ea8,	// (0x0002cf15) hc_cl_list_double_graphic_heading_pane_g2

0x8ebc,	// (0x0002cf29) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8ebc,	// (0x0002cf29) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x00033b6e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x00033b6e) hc_cl_list_double_graphic_heading_pane_g

0x8ed0,	// (0x0002cf3d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8ed0,	// (0x0002cf3d) hc_cl_list_double_graphic_heading_pane_t1

0x8ee5,	// (0x0002cf52) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8ee5,	// (0x0002cf52) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x00033b75) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x00033b75) hc_cl_list_double_graphic_heading_pane_t

0xdad4,	// (0x00031b41) vid4_progress_pane_g1

0xdae0,	// (0x00031b4d) vid4_progress_pane_g2

0xdaec,	// (0x00031b59) vid4_progress_pane_g3

0xdafb,	// (0x00031b68) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x00033b7a) vid4_progress_pane_g

0xdb19,	// (0x00031b86) vid4_progress_pane_t1

0xdb2f,	// (0x00031b9c) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x00033b85) vid4_progress_pane_t

0xdb5a,	// (0x00031bc7) wait_bar_pane_cp07

0xc59d,	// (0x0003060a) blid_firmament_pane_ParamLimits

0xc5e0,	// (0x0003064d) popup_blid_sat_info2_window_g1

0xc604,	// (0x00030671) popup_blid_sat_info2_window_t3

0xc612,	// (0x0003067f) popup_blid_sat_info2_window_t4

0xc620,	// (0x0003068d) popup_blid_sat_info2_window_t5

0xc62e,	// (0x0003069b) popup_blid_sat_info2_window_t6

0xc63e,	// (0x000306ab) popup_blid_sat_info2_window_t7

0xc64c,	// (0x000306b9) popup_blid_sat_info2_window_t8

0xc65a,	// (0x000306c7) popup_blid_sat_info2_window_t9

0xc668,	// (0x000306d5) popup_blid_sat_info2_window_t10

0xc72c,	// (0x00030799) aid_firma_cardinal_ParamLimits

0xc740,	// (0x000307ad) blid_firmament_pane_t1_ParamLimits

0xc757,	// (0x000307c4) blid_firmament_pane_t2_ParamLimits

0xc76e,	// (0x000307db) blid_firmament_pane_t3_ParamLimits

0xc785,	// (0x000307f2) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x000337a7) blid_firmament_pane_t_ParamLimits

0xc79c,	// (0x00030809) blid_sat_info_pane_ParamLimits

0x2bc0,	// (0x00026c2d) main_cam_set_pane_ParamLimits

0x7ceb,	// (0x0002bd58) aid_size_cell_colour_35_ParamLimits

0x7d0b,	// (0x0002bd78) aid_size_cell_colour_112_ParamLimits

0x7d2b,	// (0x0002bd98) aid_size_cell_effect_ParamLimits

0xc2a4,	// (0x00030311) bg_tb_trans_pane_cp02_ParamLimits

0x500b,	// (0x00029078) heading_imed_pane_ParamLimits

0x7d4b,	// (0x0002bdb8) listscroll_imed_pane_ParamLimits

0xb8d6,	// (0x0002f943) popup_call2_audio_first_window_g5_ParamLimits

0xb8d6,	// (0x0002f943) popup_call2_audio_first_window_g5

0x1fe5,	// (0x00026052) aid_size_touch_image3_arrow_left_ParamLimits

0x1fe5,	// (0x00026052) aid_size_touch_image3_arrow_left

0x2011,	// (0x0002607e) aid_size_touch_image3_arrow_right_ParamLimits

0x2011,	// (0x0002607e) aid_size_touch_image3_arrow_right

0xdb45,	// (0x00031bb2) vid4_progress_pane_t3

0x806e,	// (0x0002c0db) main_hwr_training_symbol_option_pane_ParamLimits

0x806e,	// (0x0002c0db) main_hwr_training_symbol_option_pane

0xcfba,	// (0x00031027) popup_hwr_training_preview_window_ParamLimits

0xcfba,	// (0x00031027) popup_hwr_training_preview_window

0x1e88,	// (0x00025ef5) hwr_training_navi_pane_g5_ParamLimits

0x1e88,	// (0x00025ef5) hwr_training_navi_pane_g5

0xd4cb,	// (0x00031538) popup_char_count_window

0xd4d3,	// (0x00031540) bg_popup_sub_pane_cp20_ParamLimits

0x283e,	// (0x000268ab) list_vitu2_match_list_pane_ParamLimits

0x284d,	// (0x000268ba) vitu2_page_scroll_pane_ParamLimits

0x284d,	// (0x000268ba) vitu2_page_scroll_pane

0xdbc4,	// (0x00031c31) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbc4,	// (0x00031c31) list_single_hwr_training_symbol_option_pane

0xdbd7,	// (0x00031c44) list_single_hwr_training_symbol_option_pane_g1

0xdbdf,	// (0x00031c4c) list_single_hwr_training_symbol_option_pane_t1

0xdbed,	// (0x00031c5a) bg_button_pane_cp023

0xdbf6,	// (0x00031c63) bg_button_pane_cp024

0x8efa,	// (0x0002cf67) vitu2_page_scroll_pane_g1

0x8f02,	// (0x0002cf6f) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x00033b8c) vitu2_page_scroll_pane_g

0x8f0a,	// (0x0002cf77) vitu2_page_scroll_pane_t1

0xc4b9,	// (0x00030526) popup_char_count_window_g1

0xdc29,	// (0x00031c96) popup_char_count_window_g2

0xdc32,	// (0x00031c9f) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x00033b91) popup_char_count_window_g

0xdc3b,	// (0x00031ca8) popup_char_count_window_t1

0x2944,	// (0x000269b1) main_vded2_pane

0xccb9,	// (0x00030d26) aid_size_cell_imed_line

0xccc3,	// (0x00030d30) grid_imed_line_width_pane

0x242d,	// (0x0002649a) vid4_indicators_pane_g4

0xdc49,	// (0x00031cb6) cell_imed_line_width_pane_ParamLimits

0xdc49,	// (0x00031cb6) cell_imed_line_width_pane

0xdc5d,	// (0x00031cca) cell_imed_line_width_pane_g1

0xc54b,	// (0x000305b8) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x00033b98) cell_imed_line_width_pane_g

0x8f19,	// (0x0002cf86) main_vded2_pane_g1_ParamLimits

0x8f19,	// (0x0002cf86) main_vded2_pane_g1

0x8f2f,	// (0x0002cf9c) main_vded2_pane_g2_ParamLimits

0x8f2f,	// (0x0002cf9c) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x00033b9d) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x00033b9d) main_vded2_pane_g

0x8f41,	// (0x0002cfae) vded2_slider_pane_ParamLimits

0x8f41,	// (0x0002cfae) vded2_slider_pane

0x8f51,	// (0x0002cfbe) aid_size_touch_vded2_end

0x8f5b,	// (0x0002cfc8) aid_size_touch_vded2_playhead

0xdc66,	// (0x00031cd3) aid_size_touch_vded2_start

0xdc6e,	// (0x00031cdb) vded2_slider_bg_pane

0xdc77,	// (0x00031ce4) vded2_slider_pane_g1

0xdc80,	// (0x00031ced) vded2_slider_pane_g2

0x8f65,	// (0x0002cfd2) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x00033ba2) vded2_slider_pane_g

0xdc88,	// (0x00031cf5) vded2_slider_bg_pane_g1

0xdc91,	// (0x00031cfe) vded2_slider_bg_pane_g2

0xdc9a,	// (0x00031d07) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x00033ba9) vded2_slider_bg_pane_g

0x6007,	// (0x0002a074) aid_postcard_touch_down_pane_ParamLimits

0x6007,	// (0x0002a074) aid_postcard_touch_down_pane

0x601d,	// (0x0002a08a) aid_postcard_touch_up_pane_ParamLimits

0x601d,	// (0x0002a08a) aid_postcard_touch_up_pane

0x2944,	// (0x000269b1) main_blid2_pane

0xc2b2,	// (0x0003031f) popup_blid2_search_window

0x2944,	// (0x000269b1) blid2_gps_pane

0x2944,	// (0x000269b1) blid2_navig_pane

0x2944,	// (0x000269b1) blid2_search_pane

0x2944,	// (0x000269b1) blid2_tripm_pane

0x8f70,	// (0x0002cfdd) blid2_search_pane_g1_ParamLimits

0x8f70,	// (0x0002cfdd) blid2_search_pane_g1

0x8f88,	// (0x0002cff5) blid2_search_pane_t1_ParamLimits

0x8f88,	// (0x0002cff5) blid2_search_pane_t1

0x8f9a,	// (0x0002d007) aid_size_cell_blid2_gps_ParamLimits

0x8f9a,	// (0x0002d007) aid_size_cell_blid2_gps

0x8fb2,	// (0x0002d01f) blid2_gps_pane_g1_ParamLimits

0x8fb2,	// (0x0002d01f) blid2_gps_pane_g1

0x8fc6,	// (0x0002d033) grid_blid2_satellite_pane_ParamLimits

0x8fc6,	// (0x0002d033) grid_blid2_satellite_pane

0x8fe0,	// (0x0002d04d) blid2_navig_pane_g1_ParamLimits

0x8fe0,	// (0x0002d04d) blid2_navig_pane_g1

0x8fec,	// (0x0002d059) blid2_navig_pane_t1_ParamLimits

0x8fec,	// (0x0002d059) blid2_navig_pane_t1

0x9007,	// (0x0002d074) blid2_navig_pane_t2_ParamLimits

0x9007,	// (0x0002d074) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x00033bb0) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x00033bb0) blid2_navig_pane_t

0x9022,	// (0x0002d08f) blid2_navig_ring_pane_ParamLimits

0x9022,	// (0x0002d08f) blid2_navig_ring_pane

0x903b,	// (0x0002d0a8) blid2_speed_pane_ParamLimits

0x903b,	// (0x0002d0a8) blid2_speed_pane

0x9047,	// (0x0002d0b4) blid2_tripm_pane_g1_ParamLimits

0x9047,	// (0x0002d0b4) blid2_tripm_pane_g1

0x9062,	// (0x0002d0cf) blid2_tripm_pane_g2_ParamLimits

0x9062,	// (0x0002d0cf) blid2_tripm_pane_g2

0x9076,	// (0x0002d0e3) blid2_tripm_pane_g3_ParamLimits

0x9076,	// (0x0002d0e3) blid2_tripm_pane_g3

0x908a,	// (0x0002d0f7) blid2_tripm_pane_g4_ParamLimits

0x908a,	// (0x0002d0f7) blid2_tripm_pane_g4

0x909e,	// (0x0002d10b) blid2_tripm_pane_g5_ParamLimits

0x909e,	// (0x0002d10b) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x00033bb5) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x00033bb5) blid2_tripm_pane_g

0x90c4,	// (0x0002d131) blid2_tripm_pane_t1_ParamLimits

0x90c4,	// (0x0002d131) blid2_tripm_pane_t1

0x90df,	// (0x0002d14c) blid2_tripm_pane_t2_ParamLimits

0x90df,	// (0x0002d14c) blid2_tripm_pane_t2

0x90fa,	// (0x0002d167) blid2_tripm_pane_t3_ParamLimits

0x90fa,	// (0x0002d167) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x00033bc2) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x00033bc2) blid2_tripm_pane_t

0x9141,	// (0x0002d1ae) cell_blid2_satellite_pane_ParamLimits

0x9141,	// (0x0002d1ae) cell_blid2_satellite_pane

0x915f,	// (0x0002d1cc) cell_blid2_satellite_pane_g1

0xdca3,	// (0x00031d10) cell_blid2_satellite_pane_t1

0xc7ac,	// (0x00030819) blid2_speed_pane_g1

0xdcb1,	// (0x00031d1e) blid2_speed_pane_t1

0xdcbf,	// (0x00031d2c) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x00033bcb) blid2_speed_pane_t

0xc7ac,	// (0x00030819) blid2_navig_ring_pane_g1

0x9168,	// (0x0002d1d5) blid2_navig_ring_pane_g2

0x9170,	// (0x0002d1dd) blid2_navig_ring_pane_g3

0x9178,	// (0x0002d1e5) blid2_navig_ring_pane_g4

0x9180,	// (0x0002d1ed) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x00033bd0) blid2_navig_ring_pane_g

0x2944,	// (0x000269b1) bg_popup_window_pane_cp011

0xdccd,	// (0x00031d3a) popup_blid2_search_window_g1

0xdcd5,	// (0x00031d42) popup_blid2_search_window_t1

0xdce3,	// (0x00031d50) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x00033bdb) popup_blid2_search_window_t

0x440c,	// (0x00028479) main_browser_pane_g1

0x35c2,	// (0x0002762f) main_browser_pane_ParamLimits

0xd4d3,	// (0x00031540) bg_button_pane_cp011_ParamLimits

0x27b4,	// (0x00026821) cell_vitu2_function_pane_g1_ParamLimits

0x2bc0,	// (0x00026c2d) bg_popup_sub_pane_cp22_ParamLimits

0x8af1,	// (0x0002cb5e) input_focus_pane_cp08_ParamLimits

0x8afe,	// (0x0002cb6b) popup_vitu2_query_button_pane_ParamLimits

0x8afe,	// (0x0002cb6b) popup_vitu2_query_button_pane

0x8ad3,	// (0x0002cb40) popup_vitu2_query_input_button_pane

0xd7f7,	// (0x00031864) popup_vitu2_query_window_g1_ParamLimits

0x8b0f,	// (0x0002cb7c) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x00033ae2) popup_vitu2_query_window_g_ParamLimits

0x2944,	// (0x000269b1) bg_button_pane_cp026

0x9188,	// (0x0002d1f5) popup_vitu2_query_input_button_pane_g1

0x2944,	// (0x000269b1) bg_button_pane_cp025

0xdcf1,	// (0x00031d5e) popup_vitu2_query_button_pane_t1

0x71d0,	// (0x0002b23d) main_mp3_pane_t6

0x71de,	// (0x0002b24b) popup_slider_window_cp01

0xd42a,	// (0x00031497) cam4_battery_pane

0xd448,	// (0x000314b5) cam4_battery_pane_cp02

0x28d3,	// (0x00026940) cam4_battery_pane_cp01

0xdacc,	// (0x00031b39) cam4_battery_pane_cp03

0xd2c7,	// (0x00031334) cam4_battery_pane_g1

0xc7ac,	// (0x00030819) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x00033be0) cam4_battery_pane_g

0xc676,	// (0x000306e3) popup_blid_sat_info2_window_t11

0x57e7,	// (0x00029854) aid_size_touch_mv_arrow_left_ParamLimits

0x5810,	// (0x0002987d) aid_size_touch_mv_arrow_right_ParamLimits

0x5858,	// (0x000298c5) navi_pane_g1_ParamLimits

0x5864,	// (0x000298d1) navi_pane_g2_ParamLimits

0x5892,	// (0x000298ff) navi_pane_g3_ParamLimits

0xf44c,	// (0x000334b9) navi_pane_g_ParamLimits

0x594e,	// (0x000299bb) navi_pane_mv_t1_ParamLimits

0x7d57,	// (0x0002bdc4) grid_imed_effect_pane_ParamLimits

0x405e,	// (0x000280cb) aid_placing_vt_slider_lsc

0x4066,	// (0x000280d3) aid_placing_vt_slider_prt

0x2bc0,	// (0x00026c2d) bg_tb_trans_pane_cp01_ParamLimits

0xc933,	// (0x000309a0) popup_image_details_window_g1_ParamLimits

0xc946,	// (0x000309b3) popup_image_details_window_g2_ParamLimits

0xc95b,	// (0x000309c8) popup_image_details_window_g3_ParamLimits

0xc95b,	// (0x000309c8) popup_image_details_window_g3

0xf77f,	// (0x000337ec) popup_image_details_window_g_ParamLimits

0xc96f,	// (0x000309dc) popup_image_details_window_t1_ParamLimits

0xc981,	// (0x000309ee) popup_image_details_window_t2_ParamLimits

0xc99a,	// (0x00030a07) popup_image_details_window_t3_ParamLimits

0xc9ae,	// (0x00030a1b) popup_image_details_window_t4_ParamLimits

0xc9c9,	// (0x00030a36) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x000337f3) popup_image_details_window_t_ParamLimits

0x8e03,	// (0x0002ce70) cl_header_name_pane_ParamLimits

0x8e03,	// (0x0002ce70) cl_header_name_pane

0x9190,	// (0x0002d1fd) cl_header_name_pane_t1_ParamLimits

0x9190,	// (0x0002d1fd) cl_header_name_pane_t1

0x91b1,	// (0x0002d21e) cl_header_name_pane_t2_ParamLimits

0x91b1,	// (0x0002d21e) cl_header_name_pane_t2

0x91f3,	// (0x0002d260) cl_header_name_pane_t3_ParamLimits

0x91f3,	// (0x0002d260) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x00033be5) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x00033be5) cl_header_name_pane_t

0x591f,	// (0x0002998c) navi_pane_mv_g2_ParamLimits

0xd469,	// (0x000314d6) field_vitu2_entry_pane_g1_ParamLimits

0xd475,	// (0x000314e2) field_vitu2_entry_pane_g2_ParamLimits

0xd481,	// (0x000314ee) field_vitu2_entry_pane_g3_ParamLimits

0xd481,	// (0x000314ee) field_vitu2_entry_pane_g3

0xf974,	// (0x000339e1) field_vitu2_entry_pane_g_ParamLimits

0x2654,	// (0x000266c1) cell_vitu2_itu_pane_g1_ParamLimits

0x2664,	// (0x000266d1) cell_vitu2_itu_pane_g2_ParamLimits

0x2664,	// (0x000266d1) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x000339ed) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x000339ed) cell_vitu2_itu_pane_g

0xd4d3,	// (0x00031540) bg_vkb2_func_pane_cp05_ParamLimits

0xd4d3,	// (0x00031540) bg_vkb2_func_pane_cp05

0xd4d3,	// (0x00031540) bg_vkb2_func_pane_cp03

0xd4d3,	// (0x00031540) bg_vkb2_func_pane_cp04

0xd4d3,	// (0x00031540) bg_vkb2_func_pane_cp10_ParamLimits

0xd4d3,	// (0x00031540) bg_vkb2_func_pane_cp10

0x8da5,	// (0x0002ce12) bg_vkb2_func_pane_cp08

0x8d8b,	// (0x0002cdf8) bg_vkb2_func_pane_cp06

0x8d99,	// (0x0002ce06) bg_vkb2_func_pane_cp07

0xdbff,	// (0x00031c6c) bg_vkb2_func_pane_cp11_ParamLimits

0xdbff,	// (0x00031c6c) bg_vkb2_func_pane_cp11

0xdc14,	// (0x00031c81) bg_vkb2_func_pane_cp12_ParamLimits

0xdc14,	// (0x00031c81) bg_vkb2_func_pane_cp12

0x2944,	// (0x000269b1) bg_vkb2_func_pane_cp09

0xd4eb,	// (0x00031558) bg_vkb2_func_pane_g1

0x456a,	// (0x000285d7) bg_vkb2_func_pane_g2

0xd4f3,	// (0x00031560) bg_vkb2_func_pane_g3

0xd4fb,	// (0x00031568) bg_vkb2_func_pane_g4

0xd76c,	// (0x000317d9) bg_vkb2_func_pane_g5

0xd513,	// (0x00031580) bg_vkb2_func_pane_g6

0xd51b,	// (0x00031588) bg_vkb2_func_pane_g7

0xd50b,	// (0x00031578) bg_vkb2_func_pane_g8

0x454a,	// (0x000285b7) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x00033bec) bg_vkb2_func_pane_g

0x90b2,	// (0x0002d11f) blid2_tripm_pane_g6_ParamLimits

0x90b2,	// (0x0002d11f) blid2_tripm_pane_g6

0xd281,	// (0x000312ee) mp4_progress_pane_g1

0x912d,	// (0x0002d19a) blid2_tripm_values_pane_ParamLimits

0x912d,	// (0x0002d19a) blid2_tripm_values_pane

0x9224,	// (0x0002d291) blid2_tripm_values_pane_t1

0x9232,	// (0x0002d29f) blid2_tripm_values_pane_t2

0x9240,	// (0x0002d2ad) blid2_tripm_values_pane_t3

0x924e,	// (0x0002d2bb) blid2_tripm_values_pane_t4

0x925c,	// (0x0002d2c9) blid2_tripm_values_pane_t5

0x926a,	// (0x0002d2d7) blid2_tripm_values_pane_t6

0x9278,	// (0x0002d2e5) blid2_tripm_values_pane_t7

0x9286,	// (0x0002d2f3) blid2_tripm_values_pane_t8

0x9294,	// (0x0002d301) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x00033bff) blid2_tripm_values_pane_t

0x409e,	// (0x0002810b) call_video_pane_t1_ParamLimits

0x40b2,	// (0x0002811f) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x00033342) call_video_pane_t_ParamLimits

0x5f78,	// (0x00029fe5) msg_header_pane_g1_ParamLimits

0xafa8,	// (0x0002f015) msg_header_pane_g2_ParamLimits

0xafa8,	// (0x0002f015) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0003355c) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0003355c) msg_header_pane_g

0x35c2,	// (0x0002762f) main_clock2_pane_ParamLimits

0x7af4,	// (0x0002bb61) grid_clock2_toolbar_pane_ParamLimits

0x7af4,	// (0x0002bb61) grid_clock2_toolbar_pane

0x7af4,	// (0x0002bb61) listscroll_clock2_pane_ParamLimits

0x7af4,	// (0x0002bb61) listscroll_clock2_pane

0x7bd1,	// (0x0002bc3e) main_clock2_pane_t3_ParamLimits

0x7bd1,	// (0x0002bc3e) main_clock2_pane_t3

0x7bec,	// (0x0002bc59) main_clock2_pane_t4_ParamLimits

0x7bec,	// (0x0002bc59) main_clock2_pane_t4

0xdcff,	// (0x00031d6c) cell_clock2_toolbar_pane

0xdd07,	// (0x00031d74) cell_clock2_toolbar_pane_cp01

0xdd07,	// (0x00031d74) cell_clock2_toolbar_pane_cp02

0xdd0f,	// (0x00031d7c) cell_clock2_toolbar_pane_cp03

0xdd17,	// (0x00031d84) list_clock2_pane

0x5585,	// (0x000295f2) scroll_pane_cp10

0xdd1f,	// (0x00031d8c) list_single_clock2_pane_ParamLimits

0xdd1f,	// (0x00031d8c) list_single_clock2_pane

0x59c0,	// (0x00029a2d) list_highlight_pane_cp08

0xdd2c,	// (0x00031d99) list_single_clock2_pane_t1

0xdd3a,	// (0x00031da7) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x00033c12) list_single_clock2_pane_t

0x2944,	// (0x000269b1) bg_button_pane_cp10

0xdd48,	// (0x00031db5) cell_clock2_toolbar_pane_g1

0x18fd,	// (0x0002596a) aid_main_viewer_pane_g1_ParamLimits

0x18fd,	// (0x0002596a) aid_main_viewer_pane_g1

0x190b,	// (0x00025978) aid_main_viewer_pane_g2_ParamLimits

0x190b,	// (0x00025978) aid_main_viewer_pane_g2

0x5fcb,	// (0x0002a038) aid_main_viewer_pane_g3_ParamLimits

0x5fcb,	// (0x0002a038) aid_main_viewer_pane_g3

0x5fda,	// (0x0002a047) aid_main_viewer_pane_g4_ParamLimits

0x5fda,	// (0x0002a047) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0003356d) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0003356d) aid_main_viewer_pane_g

0x68d2,	// (0x0002a93f) main_calc_pane_ParamLimits

0x68e6,	// (0x0002a953) main_dialer2_pane_ParamLimits

0x2944,	// (0x000269b1) main_cam6_pane

0x2944,	// (0x000269b1) main_vid6_pane

0x7b00,	// (0x0002bb6d) listscroll_gen_pane_cp06_ParamLimits

0x7b00,	// (0x0002bb6d) listscroll_gen_pane_cp06

0x7c07,	// (0x0002bc74) main_clock2_pane_t5_ParamLimits

0x7c07,	// (0x0002bc74) main_clock2_pane_t5

0x7c64,	// (0x0002bcd1) aid_call2_pane_cp10_ParamLimits

0x7c76,	// (0x0002bce3) aid_call_pane_cp10_ParamLimits

0x5776,	// (0x000297e3) popup_clock_analogue_window_cp10_g1_ParamLimits

0x5776,	// (0x000297e3) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7c88,	// (0x0002bcf5) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7c88,	// (0x0002bcf5) popup_clock_analogue_window_cp10_g4_ParamLimits

0x5776,	// (0x000297e3) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x000338a3) popup_clock_analogue_window_cp10_g_ParamLimits

0x7c9a,	// (0x0002bd07) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8156,	// (0x0002c1c3) cell_dialer2_keypad_pane_g2_ParamLimits

0x8156,	// (0x0002c1c3) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x00033989) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x00033989) cell_dialer2_keypad_pane_g

0x8172,	// (0x0002c1df) cell_dialer2_keypad_pane_t1

0x8606,	// (0x0002c673) main_cset_text2_pane_ParamLimits

0x8606,	// (0x0002c673) main_cset_text2_pane

0xd9d3,	// (0x00031a40) area_vitu2_query_pane_g1_ParamLimits

0x8d2a,	// (0x0002cd97) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x00033b2f) area_vitu2_query_pane_g_ParamLimits

0xda57,	// (0x00031ac4) area_vitu2_query_pane_t7_ParamLimits

0xda57,	// (0x00031ac4) area_vitu2_query_pane_t7

0x8d8b,	// (0x0002cdf8) bg_button_pane_cp018_ParamLimits

0x8d99,	// (0x0002ce06) bg_button_pane_cp021_ParamLimits

0x8da5,	// (0x0002ce12) bg_button_pane_cp022_ParamLimits

0x8da5,	// (0x0002ce12) bg_vkb2_func_pane_cp08_ParamLimits

0x8d8b,	// (0x0002cdf8) bg_vkb2_func_pane_cp06_ParamLimits

0x8d99,	// (0x0002ce06) bg_vkb2_func_pane_cp07_ParamLimits

0x8db6,	// (0x0002ce23) input_focus_pane_cp09_ParamLimits

0xdd50,	// (0x00031dbd) cam6_autofocus_pane_ParamLimits

0xdd50,	// (0x00031dbd) cam6_autofocus_pane

0x28dd,	// (0x0002694a) cam6_image_uncrop_pane_ParamLimits

0x28dd,	// (0x0002694a) cam6_image_uncrop_pane

0x28ec,	// (0x00026959) cam6_indi_pane_ParamLimits

0x28ec,	// (0x00026959) cam6_indi_pane

0x2902,	// (0x0002696f) cam6_mode_pane_ParamLimits

0x2902,	// (0x0002696f) cam6_mode_pane

0x2914,	// (0x00026981) cam6_timer_pane_ParamLimits

0x2914,	// (0x00026981) cam6_timer_pane

0x2920,	// (0x0002698d) cam6_zoom_pane_ParamLimits

0x2920,	// (0x0002698d) cam6_zoom_pane

0x92a2,	// (0x0002d30f) cam6_mode_pane_g1_ParamLimits

0x92a2,	// (0x0002d30f) cam6_mode_pane_g1

0x92b2,	// (0x0002d31f) cam6_mode_pane_g2_ParamLimits

0x92b2,	// (0x0002d31f) cam6_mode_pane_g2

0x92c2,	// (0x0002d32f) cam6_mode_pane_g3_ParamLimits

0x92c2,	// (0x0002d32f) cam6_mode_pane_g3

0x92d2,	// (0x0002d33f) cam6_mode_pane_g4_ParamLimits

0x92d2,	// (0x0002d33f) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x00033c17) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x00033c17) cam6_mode_pane_g

0xdd5e,	// (0x00031dcb) bg_tb_trans_pane_cp08_ParamLimits

0xdd5e,	// (0x00031dcb) bg_tb_trans_pane_cp08

0xdd6c,	// (0x00031dd9) cam6_battery_pane_ParamLimits

0xdd6c,	// (0x00031dd9) cam6_battery_pane

0xdd82,	// (0x00031def) cam6_indi_pane_g1_ParamLimits

0xdd82,	// (0x00031def) cam6_indi_pane_g1

0xdd94,	// (0x00031e01) cam6_indi_pane_g2_ParamLimits

0xdd94,	// (0x00031e01) cam6_indi_pane_g2

0xdda6,	// (0x00031e13) cam6_indi_pane_g3_ParamLimits

0xdda6,	// (0x00031e13) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x00033c20) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x00033c20) cam6_indi_pane_g

0xddb8,	// (0x00031e25) cam6_indi_pane_t1_ParamLimits

0xddb8,	// (0x00031e25) cam6_indi_pane_t1

0x92e2,	// (0x0002d34f) cam6_autofocus_pane_g1

0x92ea,	// (0x0002d357) cam6_autofocus_pane_g2

0x92f2,	// (0x0002d35f) cam6_autofocus_pane_g3

0x92fa,	// (0x0002d367) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x00033c27) cam6_autofocus_pane_g

0xddde,	// (0x00031e4b) cam6_timer_pane_g1

0xdde6,	// (0x00031e53) cam6_timer_pane_t1

0xddf4,	// (0x00031e61) cam6_zoom_cont_pane

0xddfc,	// (0x00031e69) cam6_zoom_pane_g1

0xde04,	// (0x00031e71) cam6_zoom_pane_g2

0x9302,	// (0x0002d36f) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x00033c30) cam6_zoom_pane_g

0xc7ac,	// (0x00030819) cam6_battery_pane_g1

0xc7ac,	// (0x00030819) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x000337b0) cam6_battery_pane_g

0xde0c,	// (0x00031e79) cam6_zoom_cont_pane_g1

0xde15,	// (0x00031e82) cam6_zoom_cont_pane_g2

0xde1e,	// (0x00031e8b) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x00033c37) cam6_zoom_cont_pane_g

0x931f,	// (0x0002d38c) cam6_mode_pane_cp_ParamLimits

0x931f,	// (0x0002d38c) cam6_mode_pane_cp

0x9331,	// (0x0002d39e) cam6_zoom_pane_cp_ParamLimits

0x9331,	// (0x0002d39e) cam6_zoom_pane_cp

0x933d,	// (0x0002d3aa) vid6_image_uncrop_cif_pane_ParamLimits

0x933d,	// (0x0002d3aa) vid6_image_uncrop_cif_pane

0x934d,	// (0x0002d3ba) vid6_image_uncrop_nhd_pane_ParamLimits

0x934d,	// (0x0002d3ba) vid6_image_uncrop_nhd_pane

0x935c,	// (0x0002d3c9) vid6_image_uncrop_vga_pane_ParamLimits

0x935c,	// (0x0002d3c9) vid6_image_uncrop_vga_pane

0x936b,	// (0x0002d3d8) vid6_image_uncrop_wvga_pane_ParamLimits

0x936b,	// (0x0002d3d8) vid6_image_uncrop_wvga_pane

0x937a,	// (0x0002d3e7) vid6_indi_pane_ParamLimits

0x937a,	// (0x0002d3e7) vid6_indi_pane

0xdd5e,	// (0x00031dcb) bg_tb_trans_pane_cp09_ParamLimits

0xdd5e,	// (0x00031dcb) bg_tb_trans_pane_cp09

0xde36,	// (0x00031ea3) cam6_battery_pane_cp_ParamLimits

0xde36,	// (0x00031ea3) cam6_battery_pane_cp

0xde42,	// (0x00031eaf) vid6_indi_pane_g1_ParamLimits

0xde42,	// (0x00031eaf) vid6_indi_pane_g1

0xde54,	// (0x00031ec1) vid6_indi_pane_g2_ParamLimits

0xde54,	// (0x00031ec1) vid6_indi_pane_g2

0xde66,	// (0x00031ed3) vid6_indi_pane_g3_ParamLimits

0xde66,	// (0x00031ed3) vid6_indi_pane_g3

0xde7b,	// (0x00031ee8) vid6_indi_pane_g4_ParamLimits

0xde7b,	// (0x00031ee8) vid6_indi_pane_g4

0xde90,	// (0x00031efd) vid6_indi_pane_g5_ParamLimits

0xde90,	// (0x00031efd) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x00033c3e) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x00033c3e) vid6_indi_pane_g

0xdeaa,	// (0x00031f17) vid6_indi_pane_t1_ParamLimits

0xdeaa,	// (0x00031f17) vid6_indi_pane_t1

0xdec0,	// (0x00031f2d) vid6_indi_pane_t2_ParamLimits

0xdec0,	// (0x00031f2d) vid6_indi_pane_t2

0xdee8,	// (0x00031f55) vid6_indi_pane_t3_ParamLimits

0xdee8,	// (0x00031f55) vid6_indi_pane_t3

0xdf10,	// (0x00031f7d) vid6_indi_pane_t4_ParamLimits

0xdf10,	// (0x00031f7d) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x00033c49) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x00033c49) vid6_indi_pane_t

0xdf34,	// (0x00031fa1) wait_bar_pane_cp08

0x9392,	// (0x0002d3ff) main_cset_text2_pane_t1_ParamLimits

0x9392,	// (0x0002d3ff) main_cset_text2_pane_t1

0x930a,	// (0x0002d377) listscroll_gen_pane_cp06_t1_ParamLimits

0x930a,	// (0x0002d377) listscroll_gen_pane_cp06_t1

0x2944,	// (0x000269b1) main_cam6_set_pane

0x2300,	// (0x0002636d) bg_tb_trans_pane_cp06_ParamLimits

0x230e,	// (0x0002637b) cam4_indicators_pane_g1_ParamLimits

0x231b,	// (0x00026388) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x000339bd) cam4_indicators_pane_g_ParamLimits

0x2333,	// (0x000263a0) cam4_indicators_pane_t1_ParamLimits

0xd43a,	// (0x000314a7) bg_tb_trans_pane_cp07_ParamLimits

0x230e,	// (0x0002637b) vid4_indicators_pane_g1_ParamLimits

0x2413,	// (0x00026480) vid4_indicators_pane_g2_ParamLimits

0x2420,	// (0x0002648d) vid4_indicators_pane_g3_ParamLimits

0x242d,	// (0x0002649a) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x000339cf) vid4_indicators_pane_g_ParamLimits

0x2439,	// (0x000264a6) vid4_indicators_pane_t1_ParamLimits

0xdad4,	// (0x00031b41) vid4_progress_pane_g1_ParamLimits

0xdae0,	// (0x00031b4d) vid4_progress_pane_g2_ParamLimits

0xdaec,	// (0x00031b59) vid4_progress_pane_g3_ParamLimits

0xdafb,	// (0x00031b68) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x00033b7a) vid4_progress_pane_g_ParamLimits

0xdb19,	// (0x00031b86) vid4_progress_pane_t1_ParamLimits

0xdb2f,	// (0x00031b9c) vid4_progress_pane_t2_ParamLimits

0xdb45,	// (0x00031bb2) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x00033b85) vid4_progress_pane_t_ParamLimits

0xdb5a,	// (0x00031bc7) wait_bar_pane_cp07_ParamLimits

0x93b2,	// (0x0002d41f) main_cam6_set_pane_g2_ParamLimits

0x93b2,	// (0x0002d41f) main_cam6_set_pane_g2

0x93d6,	// (0x0002d443) main_cset6_listscroll_pane_ParamLimits

0x93d6,	// (0x0002d443) main_cset6_listscroll_pane

0x93f2,	// (0x0002d45f) main_cset6_slider_pane_ParamLimits

0x93f2,	// (0x0002d45f) main_cset6_slider_pane

0x9408,	// (0x0002d475) main_cset6_text2_pane_ParamLimits

0x9408,	// (0x0002d475) main_cset6_text2_pane

0xdf43,	// (0x00031fb0) main_cset6_text_pane

0xdf4b,	// (0x00031fb8) main_cset_list_pane_copy1_ParamLimits

0xdf4b,	// (0x00031fb8) main_cset_list_pane_copy1

0xdf5b,	// (0x00031fc8) scroll_pane_cp028_copy1

0x9416,	// (0x0002d483) cset_list_set_pane_copy1

0x9429,	// (0x0002d496) aid_position_infowindow_above_copy1

0x9431,	// (0x0002d49e) aid_position_infowindow_below_copy1

0xdf64,	// (0x00031fd1) cset_list_set_pane_g1_copy1

0xdf6c,	// (0x00031fd9) cset_list_set_pane_g3_copy1_ParamLimits

0xdf6c,	// (0x00031fd9) cset_list_set_pane_g3_copy1

0xdf7b,	// (0x00031fe8) cset_list_set_pane_t1_copy1_ParamLimits

0xdf7b,	// (0x00031fe8) cset_list_set_pane_t1_copy1

0x2bc0,	// (0x00026c2d) list_highlight_pane_cp021_copy1_ParamLimits

0x2bc0,	// (0x00026c2d) list_highlight_pane_cp021_copy1

0xdf90,	// (0x00031ffd) cset6_slider_pane_ParamLimits

0xdf90,	// (0x00031ffd) cset6_slider_pane

0xdfbc,	// (0x00032029) main_cset6_slider_pane_g1_ParamLimits

0xdfbc,	// (0x00032029) main_cset6_slider_pane_g1

0x9439,	// (0x0002d4a6) main_cset6_slider_pane_g2_ParamLimits

0x9439,	// (0x0002d4a6) main_cset6_slider_pane_g2

0xd61a,	// (0x00031687) main_cset6_slider_pane_g3_ParamLimits

0xd61a,	// (0x00031687) main_cset6_slider_pane_g3

0x86cb,	// (0x0002c738) main_cset6_slider_pane_g4_ParamLimits

0x86cb,	// (0x0002c738) main_cset6_slider_pane_g4

0x8713,	// (0x0002c780) main_cset6_slider_pane_g5_ParamLimits

0x8713,	// (0x0002c780) main_cset6_slider_pane_g5

0xd61a,	// (0x00031687) main_cset6_slider_pane_g7_ParamLimits

0xd61a,	// (0x00031687) main_cset6_slider_pane_g7

0xd626,	// (0x00031693) main_cset6_slider_pane_g8_ParamLimits

0xd626,	// (0x00031693) main_cset6_slider_pane_g8

0x86b3,	// (0x0002c720) main_cset6_slider_pane_g9_ParamLimits

0x86b3,	// (0x0002c720) main_cset6_slider_pane_g9

0x86bf,	// (0x0002c72c) main_cset6_slider_pane_g10_ParamLimits

0x86bf,	// (0x0002c72c) main_cset6_slider_pane_g10

0x86cb,	// (0x0002c738) main_cset6_slider_pane_g11_ParamLimits

0x86cb,	// (0x0002c738) main_cset6_slider_pane_g11

0x86d7,	// (0x0002c744) main_cset6_slider_pane_g12_ParamLimits

0x86d7,	// (0x0002c744) main_cset6_slider_pane_g12

0x86e3,	// (0x0002c750) main_cset6_slider_pane_g13_ParamLimits

0x86e3,	// (0x0002c750) main_cset6_slider_pane_g13

0x86ef,	// (0x0002c75c) main_cset6_slider_pane_g14_ParamLimits

0x86ef,	// (0x0002c75c) main_cset6_slider_pane_g14

0x9461,	// (0x0002d4ce) main_cset6_slider_pane_g15_ParamLimits

0x9461,	// (0x0002d4ce) main_cset6_slider_pane_g15

0x8713,	// (0x0002c780) main_cset6_slider_pane_g16_ParamLimits

0x8713,	// (0x0002c780) main_cset6_slider_pane_g16

0x871f,	// (0x0002c78c) main_cset6_slider_pane_g17_ParamLimits

0x871f,	// (0x0002c78c) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x00033c52) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x00033c52) main_cset6_slider_pane_g

0xdfe4,	// (0x00032051) main_cset6_slider_pane_t1_ParamLimits

0xdfe4,	// (0x00032051) main_cset6_slider_pane_t1

0x9479,	// (0x0002d4e6) main_cset6_slider_pane_t2_ParamLimits

0x9479,	// (0x0002d4e6) main_cset6_slider_pane_t2

0x94a4,	// (0x0002d511) main_cset6_slider_pane_t3_ParamLimits

0x94a4,	// (0x0002d511) main_cset6_slider_pane_t3

0x94cf,	// (0x0002d53c) main_cset6_slider_pane_t4_ParamLimits

0x94cf,	// (0x0002d53c) main_cset6_slider_pane_t4

0x94fa,	// (0x0002d567) main_cset6_slider_pane_t5_ParamLimits

0x94fa,	// (0x0002d567) main_cset6_slider_pane_t5

0xe025,	// (0x00032092) main_cset6_slider_pane_t7_ParamLimits

0xe025,	// (0x00032092) main_cset6_slider_pane_t7

0x9525,	// (0x0002d592) main_cset6_slider_pane_t8_ParamLimits

0x9525,	// (0x0002d592) main_cset6_slider_pane_t8

0x9549,	// (0x0002d5b6) main_cset6_slider_pane_t9_ParamLimits

0x9549,	// (0x0002d5b6) main_cset6_slider_pane_t9

0x956d,	// (0x0002d5da) main_cset6_slider_pane_t10_ParamLimits

0x956d,	// (0x0002d5da) main_cset6_slider_pane_t10

0x9591,	// (0x0002d5fe) main_cset6_slider_pane_t11_ParamLimits

0x9591,	// (0x0002d5fe) main_cset6_slider_pane_t11

0xe05b,	// (0x000320c8) main_cset6_slider_pane_t14_ParamLimits

0xe05b,	// (0x000320c8) main_cset6_slider_pane_t14

0xe094,	// (0x00032101) main_cset6_slider_pane_t15_ParamLimits

0xe094,	// (0x00032101) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x00033c77) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x00033c77) main_cset6_slider_pane_t

0xe0cd,	// (0x0003213a) cset_slider_pane_g1_copy1

0xe0d6,	// (0x00032143) cset_slider_pane_g2_copy1

0xe0df,	// (0x0003214c) cset_slider_pane_g3_copy1

0x2944,	// (0x000269b1) bg_popup_sub_pane_cp011_copy1

0xd803,	// (0x00031870) main_cset_text_pane_g1_copy1

0xd80b,	// (0x00031878) main_cset_text_pane_t1_copy1

0xd819,	// (0x00031886) main_cset_text_pane_t2_copy1

0xd827,	// (0x00031894) main_cset_text_pane_t3_copy1

0xd835,	// (0x000318a2) main_cset_text_pane_t4_copy1

0xd843,	// (0x000318b0) main_cset_text_pane_t5_copy1

0xd851,	// (0x000318be) main_cset_text_pane_t6_copy1

0xd85f,	// (0x000318cc) main_cset_text_pane_t7_copy1

0x9392,	// (0x0002d3ff) main_cset_text2_pane_t1_copy1

0x2944,	// (0x000269b1) main_ncimui_pane

0x6b1c,	// (0x0002ab89) popup_query_ncimui_window_ParamLimits

0x6b1c,	// (0x0002ab89) popup_query_ncimui_window

0xca78,	// (0x00030ae5) field_cale_ev2_pane_g4_ParamLimits

0xca78,	// (0x00030ae5) field_cale_ev2_pane_g4

0x80dc,	// (0x0002c149) cell_video_dialer_keypad_pane_g2_ParamLimits

0x80dc,	// (0x0002c149) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x00033964) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x00033964) cell_video_dialer_keypad_pane_g

0x80f4,	// (0x0002c161) cell_video_dialer_keypad_pane_t1

0x2944,	// (0x000269b1) bg_popup_window_pane_cp012

0x53e6,	// (0x00029453) heading_pane_cp06

0xe1d7,	// (0x00032244) ncim_query_content_pane

0x2944,	// (0x000269b1) bg_popup_heading_pane_cp01

0xe1df,	// (0x0003224c) ncim_heading_pane_t1

0xe1ed,	// (0x0003225a) ncim_indicator_popup_pane

0xe1ff,	// (0x0003226c) ncim_query_button_pane

0xe213,	// (0x00032280) ncim_query_content_pane_t1

0xe225,	// (0x00032292) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x00033cb6) ncim_query_content_pane_t

0xe25f,	// (0x000322cc) ncim_query_list_pane

0xe271,	// (0x000322de) ncim_query_popup_pane

0xe1ed,	// (0x0003225a) ncim_indicator_popup_pane_ParamLimits

0x967b,	// (0x0002d6e8) ncim_query_content_pane_g1_ParamLimits

0x967b,	// (0x0002d6e8) ncim_query_content_pane_g1

0xe213,	// (0x00032280) ncim_query_content_pane_t1_ParamLimits

0xe225,	// (0x00032292) ncim_query_content_pane_t2_ParamLimits

0x9687,	// (0x0002d6f4) ncim_query_content_pane_t3_ParamLimits

0x9687,	// (0x0002d6f4) ncim_query_content_pane_t3

0x96af,	// (0x0002d71c) ncim_query_content_pane_t4_ParamLimits

0x96af,	// (0x0002d71c) ncim_query_content_pane_t4

0x96d7,	// (0x0002d744) ncim_query_content_pane_t5_ParamLimits

0x96d7,	// (0x0002d744) ncim_query_content_pane_t5

0xe237,	// (0x000322a4) ncim_query_content_pane_t6_ParamLimits

0xe237,	// (0x000322a4) ncim_query_content_pane_t6

0xfc49,	// (0x00033cb6) ncim_query_content_pane_t_ParamLimits

0xe25f,	// (0x000322cc) ncim_query_list_pane_ParamLimits

0xe271,	// (0x000322de) ncim_query_popup_pane_ParamLimits

0xe285,	// (0x000322f2) wait_bar_pane_cp04

0x2944,	// (0x000269b1) input_focus_pane_cp011

0xe28d,	// (0x000322fa) ncim_query_popup_pane_t1

0xe29b,	// (0x00032308) ncim_list_query_list_pane_ParamLimits

0xe29b,	// (0x00032308) ncim_list_query_list_pane

0x2944,	// (0x000269b1) bg_button_pane_cp027

0xe2ae,	// (0x0003231b) ncim_query_button_pane_g1

0x2944,	// (0x000269b1) list_highlight_pane_cp012

0xe2b8,	// (0x00032325) ncim_list_query_list_pane_g1

0xe2c0,	// (0x0003232d) ncim_list_query_list_pane_t1

0x2327,	// (0x00026394) cam4_indicators_pane_g3_ParamLimits

0x2327,	// (0x00026394) cam4_indicators_pane_g3

0x2327,	// (0x00026394) vid4_indicators_pane_g5_ParamLimits

0x2327,	// (0x00026394) vid4_indicators_pane_g5

0xdb0a,	// (0x00031b77) vid4_progress_pane_g5_ParamLimits

0xdb0a,	// (0x00031b77) vid4_progress_pane_g5

0x95c3,	// (0x0002d630) main_ncimui_pane_g1

0x9609,	// (0x0002d676) ncimui_group_query_pane_ParamLimits

0x9609,	// (0x0002d676) ncimui_group_query_pane

0x963d,	// (0x0002d6aa) ncimui_list_pane_ParamLimits

0x963d,	// (0x0002d6aa) ncimui_list_pane

0x9657,	// (0x0002d6c4) ncimui_text_pane_ParamLimits

0x9657,	// (0x0002d6c4) ncimui_text_pane

0x96ff,	// (0x0002d76c) ncimui_text_pane_t1_ParamLimits

0x96ff,	// (0x0002d76c) ncimui_text_pane_t1

0xe2ce,	// (0x0003233b) ncimui_list_single_graphic_pane_ParamLimits

0xe2ce,	// (0x0003233b) ncimui_list_single_graphic_pane

0x971c,	// (0x0002d789) ncimui_query_pane_ParamLimits

0x971c,	// (0x0002d789) ncimui_query_pane

0x2944,	// (0x000269b1) list_highlight_pane_cp013

0xe2de,	// (0x0003234b) ncim_list_query_list_pane_t1_copy1

0xe2b8,	// (0x00032325) ncim_list_single_graphic_pane_g1

0xe2ec,	// (0x00032359) ncim_query_button_pane_cp01

0xe2f4,	// (0x00032361) ncim_query_entry_pane_ParamLimits

0xe2f4,	// (0x00032361) ncim_query_entry_pane

0xe304,	// (0x00032371) ncimui_query_pane_g1

0xe30c,	// (0x00032379) ncimui_query_pane_t1_ParamLimits

0xe30c,	// (0x00032379) ncimui_query_pane_t1

0x2944,	// (0x000269b1) input_focus_pane_cp012

0xe28d,	// (0x000322fa) ncim_query_entry_pane_t1

0x35c2,	// (0x0002762f) main_im_pane_ParamLimits

0x2bc0,	// (0x00026c2d) main_mobtv_pane_ParamLimits

0x2bc0,	// (0x00026c2d) main_mobtv_pane

0x86b3,	// (0x0002c720) main_cset6_slider_pane_g18_ParamLimits

0x86b3,	// (0x0002c720) main_cset6_slider_pane_g18

0x86e3,	// (0x0002c750) main_cset6_slider_pane_g19_ParamLimits

0x86e3,	// (0x0002c750) main_cset6_slider_pane_g19

0xe322,	// (0x0003238f) bg_main_mobtv_pane_ParamLimits

0xe322,	// (0x0003238f) bg_main_mobtv_pane

0x972c,	// (0x0002d799) main_mobtv_info_pane

0x9735,	// (0x0002d7a2) main_mobtv_loading_pane_ParamLimits

0x9735,	// (0x0002d7a2) main_mobtv_loading_pane

0xe330,	// (0x0003239d) main_mobtv_pg_channel_list_pane

0xe33a,	// (0x000323a7) main_mobtv_pg_hdr_pane

0x9742,	// (0x0002d7af) main_mobtv_programe_curr_pane_ParamLimits

0x9742,	// (0x0002d7af) main_mobtv_programe_curr_pane

0x974f,	// (0x0002d7bc) main_mobtv_programe_next_pane_ParamLimits

0x974f,	// (0x0002d7bc) main_mobtv_programe_next_pane

0xe343,	// (0x000323b0) popup_mobtv_noti_window

0xc7ac,	// (0x00030819) main_tv_pg_hdr_pane_g1

0xe34b,	// (0x000323b8) main_tv_pg_hdr_pane_g2

0xe353,	// (0x000323c0) main_tv_pg_hdr_pane_g3

0xe35b,	// (0x000323c8) main_tv_pg_hdr_pane_g4

0xe363,	// (0x000323d0) main_tv_pg_hdr_pane_g5

0xe36d,	// (0x000323da) main_tv_pg_hdr_pane_g6

0xe377,	// (0x000323e4) main_tv_pg_hdr_pane_g7

0xe381,	// (0x000323ee) main_tv_pg_hdr_pane_g8

0xe38b,	// (0x000323f8) main_tv_pg_hdr_pane_g9

0xe395,	// (0x00032402) main_tv_pg_hdr_pane_g10

0xe39f,	// (0x0003240c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x00033cc3) main_tv_pg_hdr_pane_g

0xe3a9,	// (0x00032416) main_tv_pg_hdr_pane_t1

0xe3b7,	// (0x00032424) main_tv_pg_hdr_pane_t2

0xe3c5,	// (0x00032432) main_tv_pg_hdr_pane_t3

0xe3d5,	// (0x00032442) main_tv_pg_hdr_pane_t4

0xe3e5,	// (0x00032452) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x00033cda) main_tv_pg_hdr_pane_t

0xe3f5,	// (0x00032462) single_mobtv_pg_channel_pane_ParamLimits

0xe3f5,	// (0x00032462) single_mobtv_pg_channel_pane

0xe407,	// (0x00032474) single_mobtv_pg_channel_table_pane

0xe410,	// (0x0003247d) single_mobtv_pg_channel_thumb_pane

0xe419,	// (0x00032486) single_tv_pg_channel_pane_g1

0xe422,	// (0x0003248f) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x00033ce5) single_tv_pg_channel_pane_g

0xca13,	// (0x00030a80) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca13,	// (0x00030a80) bg_single_mobtv_pg_channel_thumb_pane

0xe42b,	// (0x00032498) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe42b,	// (0x00032498) single_mobtv_pg_channel_thumb_pane_g1

0xe439,	// (0x000324a6) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe439,	// (0x000324a6) single_mobtv_pg_channel_thumb_pane_g2

0xe445,	// (0x000324b2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe445,	// (0x000324b2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x00033cea) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x00033cea) single_mobtv_pg_channel_thumb_pane_g

0xe451,	// (0x000324be) single_mobtv_pg_channel_thumb_pane_t1

0xe45f,	// (0x000324cc) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x00033cf1) single_mobtv_pg_channel_thumb_pane_t

0xc7ac,	// (0x00030819) bg_single_mobtv_pg_channel_table_pane_g1

0xc7ac,	// (0x00030819) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x000337b0) bg_single_mobtv_pg_channel_table_pane_g

0xe46d,	// (0x000324da) single_mobtv_pg_channel_table_pane_t1

0xe47b,	// (0x000324e8) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x00033cf6) single_mobtv_pg_channel_table_pane_t

0x9764,	// (0x0002d7d1) main_mobtv_info_pane_g1_ParamLimits

0x9764,	// (0x0002d7d1) main_mobtv_info_pane_g1

0x9782,	// (0x0002d7ef) main_mobtv_info_pane_t1_ParamLimits

0x9782,	// (0x0002d7ef) main_mobtv_info_pane_t1

0x97fa,	// (0x0002d867) main_mobtv_info_pane_t2_ParamLimits

0x97fa,	// (0x0002d867) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x00033d00) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x00033d00) main_mobtv_info_pane_t

0x9889,	// (0x0002d8f6) wait_bar_pane_cp05

0x989b,	// (0x0002d908) main_mobtv_loading_pane_g1_ParamLimits

0x989b,	// (0x0002d908) main_mobtv_loading_pane_g1

0x98ae,	// (0x0002d91b) main_mobtv_loading_pane_g2_ParamLimits

0x98ae,	// (0x0002d91b) main_mobtv_loading_pane_g2

0x98ba,	// (0x0002d927) main_mobtv_loading_pane_g3_ParamLimits

0x98ba,	// (0x0002d927) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x00033d07) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x00033d07) main_mobtv_loading_pane_g

0xe489,	// (0x000324f6) main_mobtv_loading_pane_t1_ParamLimits

0xe489,	// (0x000324f6) main_mobtv_loading_pane_t1

0xe4a1,	// (0x0003250e) main_mobtv_loading_pane_t2_ParamLimits

0xe4a1,	// (0x0003250e) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x00033d0e) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x00033d0e) main_mobtv_loading_pane_t

0x98cd,	// (0x0002d93a) wait_bar_pane_cp06_ParamLimits

0x98cd,	// (0x0002d93a) wait_bar_pane_cp06

0xe4c5,	// (0x00032532) main_mobtv_programe_curr_pane_t1

0xe4d3,	// (0x00032540) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x00033d13) main_mobtv_programe_curr_pane_t

0xe4e1,	// (0x0003254e) main_mobtv_programe_next_pane_t1

0xe4ef,	// (0x0003255c) main_mobtv_programe_next_pane_t2

0xe4fd,	// (0x0003256a) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x00033d18) main_mobtv_programe_next_pane_t

0x2944,	// (0x000269b1) bg_popup_mobtv_noti_window_pane

0xe50b,	// (0x00032578) popup_mobtv_noti_window_g1

0xe513,	// (0x00032580) popup_mobtv_noti_window_t1

0xe521,	// (0x0003258e) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x00033d1f) popup_mobtv_noti_window_t

0xc7ac,	// (0x00030819) bg_popup_mobtv_noti_window_pane_g1

0x2944,	// (0x000269b1) sc_clock_pane

0x2944,	// (0x000269b1) main_fs_bigclock_pane

0x9117,	// (0x0002d184) blid2_tripm_pane_t4_ParamLimits

0x9117,	// (0x0002d184) blid2_tripm_pane_t4

0x98dc,	// (0x0002d949) sc_clock_pane_g1_ParamLimits

0x98dc,	// (0x0002d949) sc_clock_pane_g1

0x98ee,	// (0x0002d95b) sc_clock_pane_t1_ParamLimits

0x98ee,	// (0x0002d95b) sc_clock_pane_t1

0x9910,	// (0x0002d97d) sc_clock_pane_t2_ParamLimits

0x9910,	// (0x0002d97d) sc_clock_pane_t2

0x9928,	// (0x0002d995) sc_clock_pane_t3_ParamLimits

0x9928,	// (0x0002d995) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x00033d24) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x00033d24) sc_clock_pane_t

0xa6b6,	// (0x0002e723) main_fs_bigclock_indicator_pane_ParamLimits

0xa6b6,	// (0x0002e723) main_fs_bigclock_indicator_pane

0xc9e3,	// (0x00030a50) main_fs_bigclock_pane_g1_ParamLimits

0xc9e3,	// (0x00030a50) main_fs_bigclock_pane_g1

0xa6c2,	// (0x0002e72f) main_fs_bigclock_pane_t1_ParamLimits

0xa6c2,	// (0x0002e72f) main_fs_bigclock_pane_t1

0xa6d4,	// (0x0002e741) main_fs_bigclock_pane_t2_ParamLimits

0xa6d4,	// (0x0002e741) main_fs_bigclock_pane_t2

0xa6e6,	// (0x0002e753) main_fs_bigclock_pane_t3_ParamLimits

0xa6e6,	// (0x0002e753) main_fs_bigclock_pane_t3

0x0002,

0xfeb1,	// (0x00033f1e) main_fs_bigclock_pane_t_ParamLimits

0xfeb1,	// (0x00033f1e) main_fs_bigclock_pane_t

0x0010,	// (0x0002407d) main_fs_bigclock_indicator_pane_g1

0xe207,	// (0x00032274) ncim_query_content_pane_g2_ParamLimits

0xe207,	// (0x00032274) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x00033cb1) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x00033cb1) ncim_query_content_pane_g

0x993f,	// (0x0002d9ac) sc_clock_pane_t4_ParamLimits

0x993f,	// (0x0002d9ac) sc_clock_pane_t4

0x2bc0,	// (0x00026c2d) main_radioblah_pane

0xd3a4,	// (0x00031411) cell_call4_button_pane_t1_copy1_ParamLimits

0xd3a4,	// (0x00031411) cell_call4_button_pane_t1_copy1

0x95cb,	// (0x0002d638) main_ncimui_pane_t1_ParamLimits

0x95cb,	// (0x0002d638) main_ncimui_pane_t1

0x95dd,	// (0x0002d64a) main_ncimui_pane_t2_ParamLimits

0x95dd,	// (0x0002d64a) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x00033caa) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x00033caa) main_ncimui_pane_t

0xe651,	// (0x000326be) main_radioblah_anim_pane_ParamLimits

0xe651,	// (0x000326be) main_radioblah_anim_pane

0xe662,	// (0x000326cf) main_radioblah_info_pane_ParamLimits

0xe662,	// (0x000326cf) main_radioblah_info_pane

0xe676,	// (0x000326e3) main_radioblah_pane_t1_ParamLimits

0xe676,	// (0x000326e3) main_radioblah_pane_t1

0xe692,	// (0x000326ff) main_radioblah_pane_t2_ParamLimits

0xe692,	// (0x000326ff) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x00033d45) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x00033d45) main_radioblah_pane_t

0x99e8,	// (0x0002da55) main_radioblah_rocker_ctrl_pane_ParamLimits

0x99e8,	// (0x0002da55) main_radioblah_rocker_ctrl_pane

0xe6da,	// (0x00032747) main_radioblah_info_pane_t1_ParamLimits

0xe6da,	// (0x00032747) main_radioblah_info_pane_t1

0x9a40,	// (0x0002daad) main_radioblah_info_pane_t2_ParamLimits

0x9a40,	// (0x0002daad) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x00033d4e) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x00033d4e) main_radioblah_info_pane_t

0xc7ac,	// (0x00030819) main_radioblah_rocker_ctrl_pane_g1

0x9af2,	// (0x0002db5f) main_radioblah_rocker_ctrl_pane_g2

0x9afa,	// (0x0002db67) main_radioblah_rocker_ctrl_pane_g3

0x9b02,	// (0x0002db6f) main_radioblah_rocker_ctrl_pane_g4

0x9b0a,	// (0x0002db77) main_radioblah_rocker_ctrl_pane_g5

0x9b12,	// (0x0002db7f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x00033d57) main_radioblah_rocker_ctrl_pane_g

0x9392,	// (0x0002d3ff) main_cset_text2_pane_t1_copy1_ParamLimits

0xd422,	// (0x0003148f) cam4_image_uncrop_qvga_pane

0xd432,	// (0x0003149f) vid4_image_uncrop_qcif_pane

0xdd50,	// (0x00031dbd) cam6_image_uncrop_qvga_pane_ParamLimits

0xdd50,	// (0x00031dbd) cam6_image_uncrop_qvga_pane

0xde26,	// (0x00031e93) vid6_image_uncrop_qcif_pane_ParamLimits

0xde26,	// (0x00031e93) vid6_image_uncrop_qcif_pane

0x2944,	// (0x000269b1) bg_popup_preview_window_pane_cp03

0xe1b9,	// (0x00032226) list_cset_text2_pane

0xe1c1,	// (0x0003222e) main_cset6_text2_pane_g1

0xe1c9,	// (0x00032236) main_cset6_text2_pane_t1

0x9b1a,	// (0x0002db87) list_cset_text2_pane_t1_ParamLimits

0x9b1a,	// (0x0002db87) list_cset_text2_pane_t1

0x2bc0,	// (0x00026c2d) main_radioblah_pane_ParamLimits

0x9875,	// (0x0002d8e2) main_mobtv_info_pane_t3_ParamLimits

0x9875,	// (0x0002d8e2) main_mobtv_info_pane_t3

0x99d6,	// (0x0002da43) main_radioblah_pane_g1

0x9a10,	// (0x0002da7d) main_radioblah_info_pane_g1

0x9a97,	// (0x0002db04) main_radioblah_info_pane_t3_ParamLimits

0x9a97,	// (0x0002db04) main_radioblah_info_pane_t3

0x4db7,	// (0x00028e24) highlight_cell_cale_month_pane_ParamLimits

0x4db7,	// (0x00028e24) highlight_cell_cale_month_pane

0x2944,	// (0x000269b1) main_phob_fisheye_pane

0xcb2d,	// (0x00030b9a) scroll_pane_cp0031_ParamLimits

0xcb2d,	// (0x00030b9a) scroll_pane_cp0031

0xdf34,	// (0x00031fa1) wait_bar_pane_cp08_ParamLimits

0x9416,	// (0x0002d483) cset_list_set_pane_copy1_ParamLimits

0xe714,	// (0x00032781) highlight_cell_cale_month_pane_g1

0x9b37,	// (0x0002dba4) highlight_cell_cale_month_pane_t1

0xdac3,	// (0x00031b30) list_gen_pane_cp01

0xd605,	// (0x00031672) scroll_pane_01

0x0151,	// (0x000241be) list_single_double_fisheye_pane

0xe71c,	// (0x00032789) list_double_fisheye_pane_g1_ParamLimits

0xe71c,	// (0x00032789) list_double_fisheye_pane_g1

0xe728,	// (0x00032795) list_double_fisheye_pane_g2_ParamLimits

0xe728,	// (0x00032795) list_double_fisheye_pane_g2

0x9b45,	// (0x0002dbb2) list_double_fisheye_pane_g3_ParamLimits

0x9b45,	// (0x0002dbb2) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x00033d64) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x00033d64) list_double_fisheye_pane_g

0x9b51,	// (0x0002dbbe) list_double_fisheye_pane_t1_ParamLimits

0x9b51,	// (0x0002dbbe) list_double_fisheye_pane_t1

0x9b6c,	// (0x0002dbd9) list_double_fisheye_pane_t2_ParamLimits

0x9b6c,	// (0x0002dbd9) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x00033d6f) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x00033d6f) list_double_fisheye_pane_t

0x2944,	// (0x000269b1) main_call5_pane

0x996a,	// (0x0002d9d7) sc_swipe_pane_ParamLimits

0x996a,	// (0x0002d9d7) sc_swipe_pane

0x9ba1,	// (0x0002dc0e) call5_image_pane_ParamLimits

0x9ba1,	// (0x0002dc0e) call5_image_pane

0x9bbe,	// (0x0002dc2b) call5_swipe_1_pane_ParamLimits

0x9bbe,	// (0x0002dc2b) call5_swipe_1_pane

0x9bd1,	// (0x0002dc3e) call5_swipe_2_pane_ParamLimits

0x9bd1,	// (0x0002dc3e) call5_swipe_2_pane

0x9bfc,	// (0x0002dc69) popup_call5_audio_first_window_ParamLimits

0x9bfc,	// (0x0002dc69) popup_call5_audio_first_window

0xca13,	// (0x00030a80) call5_swipe_1_pane_g1_ParamLimits

0xca13,	// (0x00030a80) call5_swipe_1_pane_g1

0xe759,	// (0x000327c6) call5_swipe_1_pane_g2_ParamLimits

0xe759,	// (0x000327c6) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x00033d74) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x00033d74) call5_swipe_1_pane_g

0xe765,	// (0x000327d2) call5_swipe_1_pane_t1_ParamLimits

0xe765,	// (0x000327d2) call5_swipe_1_pane_t1

0xca13,	// (0x00030a80) call5_swipe_2_pane_g1_ParamLimits

0xca13,	// (0x00030a80) call5_swipe_2_pane_g1

0xe77a,	// (0x000327e7) call5_swipe_2_pane_g2_ParamLimits

0xe77a,	// (0x000327e7) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x00033d79) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x00033d79) call5_swipe_2_pane_g

0xe786,	// (0x000327f3) call5_swipe_2_pane_t1_ParamLimits

0xe786,	// (0x000327f3) call5_swipe_2_pane_t1

0xe79b,	// (0x00032808) sc_swipe_pane_g1_ParamLimits

0xe79b,	// (0x00032808) sc_swipe_pane_g1

0xe7a8,	// (0x00032815) sc_swipe_pane_g2_ParamLimits

0xe7a8,	// (0x00032815) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x00033d7e) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x00033d7e) sc_swipe_pane_g

0xe7b4,	// (0x00032821) sc_swipe_pane_t1_ParamLimits

0xe7b4,	// (0x00032821) sc_swipe_pane_t1

0x2944,	// (0x000269b1) main_cmail_launcher_pane

0x9c0d,	// (0x0002dc7a) aid_size_cell_cmail_l_ParamLimits

0x9c0d,	// (0x0002dc7a) aid_size_cell_cmail_l

0x9c27,	// (0x0002dc94) grid_cmail_l_pane_ParamLimits

0x9c27,	// (0x0002dc94) grid_cmail_l_pane

0x9c42,	// (0x0002dcaf) cell_cmail_l_pane_ParamLimits

0x9c42,	// (0x0002dcaf) cell_cmail_l_pane

0x9c68,	// (0x0002dcd5) cell_cmail_l_pane_g1_ParamLimits

0x9c68,	// (0x0002dcd5) cell_cmail_l_pane_g1

0x9c74,	// (0x0002dce1) cell_cmail_l_pane_t1_ParamLimits

0x9c74,	// (0x0002dce1) cell_cmail_l_pane_t1

0xe7c9,	// (0x00032836) cell_cmail_l_pane_t2_ParamLimits

0xe7c9,	// (0x00032836) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x00033d83) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x00033d83) cell_cmail_l_pane_t

0x2bc0,	// (0x00026c2d) grid_highlight_pane_cp018_ParamLimits

0x2bc0,	// (0x00026c2d) grid_highlight_pane_cp018

0x2a70,	// (0x00026add) main2_pane_ParamLimits

0x2a70,	// (0x00026add) main2_pane

0x3742,	// (0x000277af) popup_sp_fs_action_menu_bg_pane_g1

0x374a,	// (0x000277b7) popup_sp_fs_action_menu_bg_pane_g2

0x3752,	// (0x000277bf) popup_sp_fs_action_menu_bg_pane_g3

0x375a,	// (0x000277c7) popup_sp_fs_action_menu_bg_pane_g4

0x3762,	// (0x000277cf) popup_sp_fs_action_menu_bg_pane_g5

0x376a,	// (0x000277d7) popup_sp_fs_action_menu_bg_pane_g6

0x3772,	// (0x000277df) popup_sp_fs_action_menu_bg_pane_g7

0x377a,	// (0x000277e7) popup_sp_fs_action_menu_bg_pane_g8

0x3782,	// (0x000277ef) popup_sp_fs_action_menu_bg_pane_g9

0x378a,	// (0x000277f7) popup_sp_fs_action_menu_bg_pane_g10

0x378a,	// (0x000277f7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0003325c) popup_sp_fs_action_menu_bg_pane_g

0x3eac,	// (0x00027f19) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3eac,	// (0x00027f19) list_medium_line_x2_t3_g3_g1

0x3eb8,	// (0x00027f25) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3eb8,	// (0x00027f25) list_medium_line_x2_t3_g3_g2

0x3ec4,	// (0x00027f31) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3ec4,	// (0x00027f31) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0003330c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0003330c) list_medium_line_x2_t3_g3_g

0x3ed0,	// (0x00027f3d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3ed0,	// (0x00027f3d) list_medium_line_x2_t3_g3_t1

0x3ee5,	// (0x00027f52) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3ee5,	// (0x00027f52) list_medium_line_x2_t3_g3_t2

0x3ef9,	// (0x00027f66) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3ef9,	// (0x00027f66) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x00033313) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x00033313) list_medium_line_x2_t3_g3_t

0x3eac,	// (0x00027f19) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3eac,	// (0x00027f19) list_medium_line_x2_t3_g2_g1

0x3ec4,	// (0x00027f31) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3ec4,	// (0x00027f31) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0003331a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0003331a) list_medium_line_x2_t3_g2_g

0x3f0e,	// (0x00027f7b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3f0e,	// (0x00027f7b) list_medium_line_x2_t3_g2_t1

0x3f24,	// (0x00027f91) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3f24,	// (0x00027f91) list_medium_line_x2_t3_g2_t2

0x3f36,	// (0x00027fa3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3f36,	// (0x00027fa3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0003331f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0003331f) list_medium_line_x2_t3_g2_t

0x3eac,	// (0x00027f19) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3eac,	// (0x00027f19) list_medium_line_x2_t4_g4_g1

0x3f53,	// (0x00027fc0) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3f53,	// (0x00027fc0) list_medium_line_x2_t4_g4_g2

0x3eb8,	// (0x00027f25) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3eb8,	// (0x00027f25) list_medium_line_x2_t4_g4_g3

0x3f5f,	// (0x00027fcc) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3f5f,	// (0x00027fcc) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x00033326) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x00033326) list_medium_line_x2_t4_g4_g

0x3f6b,	// (0x00027fd8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3f6b,	// (0x00027fd8) list_medium_line_x2_t4_g4_t1

0x3f82,	// (0x00027fef) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3f82,	// (0x00027fef) list_medium_line_x2_t4_g4_t2

0x3f97,	// (0x00028004) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3f97,	// (0x00028004) list_medium_line_x2_t4_g4_t3

0x3fa9,	// (0x00028016) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3fa9,	// (0x00028016) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0003332f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0003332f) list_medium_line_x2_t4_g4_t

0x3eac,	// (0x00027f19) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3eac,	// (0x00027f19) list_medium_line_x2_t2_g4_g1

0x3f53,	// (0x00027fc0) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3f53,	// (0x00027fc0) list_medium_line_x2_t2_g4_g2

0x3eb8,	// (0x00027f25) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3eb8,	// (0x00027f25) list_medium_line_x2_t2_g4_g3

0x3ec4,	// (0x00027f31) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3ec4,	// (0x00027f31) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x00033396) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x00033396) list_medium_line_x2_t2_g4_g

0x4dd5,	// (0x00028e42) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4dd5,	// (0x00028e42) list_medium_line_x2_t2_g4_t1

0x3ef9,	// (0x00027f66) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3ef9,	// (0x00027f66) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0003339f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0003339f) list_medium_line_x2_t2_g4_t

0x3eac,	// (0x00027f19) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3eac,	// (0x00027f19) list_medium_line_x2_t2_g3_g1

0x3eb8,	// (0x00027f25) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3eb8,	// (0x00027f25) list_medium_line_x2_t2_g3_g2

0x3ec4,	// (0x00027f31) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3ec4,	// (0x00027f31) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0003330c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0003330c) list_medium_line_x2_t2_g3_g

0x4dea,	// (0x00028e57) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4dea,	// (0x00028e57) list_medium_line_x2_t2_g3_t1

0x3ef9,	// (0x00027f66) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3ef9,	// (0x00027f66) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x000333a4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x000333a4) list_medium_line_x2_t2_g3_t

0x5140,	// (0x000291ad) main_sp_fs_list_pane_ParamLimits

0x5140,	// (0x000291ad) main_sp_fs_list_pane

0x514c,	// (0x000291b9) sp_fs_scroll_pane_ParamLimits

0x514c,	// (0x000291b9) sp_fs_scroll_pane

0x5158,	// (0x000291c5) list_medium_line_x2_t3_t1

0x5168,	// (0x000291d5) list_medium_line_x2_t3_t2

0x5176,	// (0x000291e3) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x000333ef) list_medium_line_x2_t3_t

0x5184,	// (0x000291f1) list_medium_line_x3_t4_t1

0x5194,	// (0x00029201) list_medium_line_x3_t4_t2

0x51a2,	// (0x0002920f) list_medium_line_x3_t4_t3

0x5176,	// (0x000291e3) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x000333f6) list_medium_line_x3_t4_t

0x51b0,	// (0x0002921d) list_medium_line_x4_t5_t1

0x51c0,	// (0x0002922d) list_medium_line_x4_t5_t2

0x51a2,	// (0x0002920f) list_medium_line_x4_t5_t3

0x51ce,	// (0x0002923b) list_medium_line_x4_t5_t4

0x5176,	// (0x000291e3) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x000333ff) list_medium_line_x4_t5_t

0x3eac,	// (0x00027f19) list_medium_line_t4_g4_g1_ParamLimits

0x3eac,	// (0x00027f19) list_medium_line_t4_g4_g1

0x3f5f,	// (0x00027fcc) list_medium_line_t4_g4_g2_ParamLimits

0x3f5f,	// (0x00027fcc) list_medium_line_t4_g4_g2

0x51dc,	// (0x00029249) list_medium_line_t4_g4_g3_ParamLimits

0x51dc,	// (0x00029249) list_medium_line_t4_g4_g3

0x3ec4,	// (0x00027f31) list_medium_line_t4_g4_g4_ParamLimits

0x3ec4,	// (0x00027f31) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0003340a) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0003340a) list_medium_line_t4_g4_g

0x51e8,	// (0x00029255) list_medium_line_t4_g4_t1_ParamLimits

0x51e8,	// (0x00029255) list_medium_line_t4_g4_t1

0x51fd,	// (0x0002926a) list_medium_line_t4_g4_t2_ParamLimits

0x51fd,	// (0x0002926a) list_medium_line_t4_g4_t2

0x5212,	// (0x0002927f) list_medium_line_t4_g4_t3_ParamLimits

0x5212,	// (0x0002927f) list_medium_line_t4_g4_t3

0x3ef9,	// (0x00027f66) list_medium_line_t4_g4_t4_ParamLimits

0x3ef9,	// (0x00027f66) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x00033413) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x00033413) list_medium_line_t4_g4_t

0x5552,	// (0x000295bf) chi_dic_find_pane_g1

0x68fa,	// (0x0002a967) main_tport_pane

0xd742,	// (0x000317af) list_medium_line_plain_t1

0xd794,	// (0x00031801) list_medium_line_t2_g2_g1_ParamLimits

0xd794,	// (0x00031801) list_medium_line_t2_g2_g1

0xd7a0,	// (0x0003180d) list_medium_line_t2_g2_g2_ParamLimits

0xd7a0,	// (0x0003180d) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x00033ac6) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x00033ac6) list_medium_line_t2_g2_g

0x89fd,	// (0x0002ca6a) list_medium_line_t2_g2_t1_ParamLimits

0x89fd,	// (0x0002ca6a) list_medium_line_t2_g2_t1

0x8a17,	// (0x0002ca84) list_medium_line_t2_g2_t2_ParamLimits

0x8a17,	// (0x0002ca84) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x00033acb) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x00033acb) list_medium_line_t2_g2_t

0xdb6a,	// (0x00031bd7) aid_sp_fs_list_icon_a_sm

0xdb72,	// (0x00031bdf) aid_sp_fs_list_icon_d

0xdb7a,	// (0x00031be7) aid_sp_fs_text_primary

0xdb83,	// (0x00031bf0) aid_sp_fs_text_secondary

0xdb8c,	// (0x00031bf9) list_medium_line

0xdb8c,	// (0x00031bf9) list_medium_line_g2

0xdb8c,	// (0x00031bf9) list_medium_line_g3

0xdb8c,	// (0x00031bf9) list_medium_line_plain

0xdb8c,	// (0x00031bf9) list_medium_line_plain_t2

0xdb8c,	// (0x00031bf9) list_medium_line_plain_t3

0xdb8c,	// (0x00031bf9) list_medium_line_right_icon

0xdb8c,	// (0x00031bf9) list_medium_line_right_iconx2

0xdb8c,	// (0x00031bf9) list_medium_line_t2

0xdb8c,	// (0x00031bf9) list_medium_line_t2_g2

0xdb8c,	// (0x00031bf9) list_medium_line_t2_g3

0xdb8c,	// (0x00031bf9) list_medium_line_t2_right_icon

0xdb8c,	// (0x00031bf9) list_medium_line_t2_right_iconx2

0xdb8c,	// (0x00031bf9) list_medium_line_t3

0xdb8c,	// (0x00031bf9) list_medium_line_t3_g2

0xdb8c,	// (0x00031bf9) list_medium_line_t3_g3

0xdb8c,	// (0x00031bf9) list_medium_line_t3_right_iconx2

0xdb95,	// (0x00031c02) list_medium_line_t4_g4

0xdb9e,	// (0x00031c0b) list_medium_line_x2

0xdb9e,	// (0x00031c0b) list_medium_line_x2_t2_g2

0xdb9e,	// (0x00031c0b) list_medium_line_x2_t2_g3

0xdb9e,	// (0x00031c0b) list_medium_line_x2_t2_g4

0xdb9e,	// (0x00031c0b) list_medium_line_x2_t3

0xdb9e,	// (0x00031c0b) list_medium_line_x2_t3_g2

0xdb9e,	// (0x00031c0b) list_medium_line_x2_t3_g3

0xdb9e,	// (0x00031c0b) list_medium_line_x2_t3_g4

0xdb9e,	// (0x00031c0b) list_medium_line_x2_t4_g2

0xdb9e,	// (0x00031c0b) list_medium_line_x2_t4_g4

0xdba7,	// (0x00031c14) list_medium_line_x3

0xdba7,	// (0x00031c14) list_medium_line_x3_t4

0xdba7,	// (0x00031c14) list_medium_line_x3_t4_g4

0xdb95,	// (0x00031c02) list_medium_line_x4_t4

0xdb95,	// (0x00031c02) list_medium_line_x4_t4_g7

0xdb95,	// (0x00031c02) list_medium_line_x4_t5

0xdbb0,	// (0x00031c1d) list_single_fs_dyc_pane_ParamLimits

0xdbb0,	// (0x00031c1d) list_single_fs_dyc_pane

0x3eac,	// (0x00027f19) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3eac,	// (0x00027f19) list_medium_line_x4_t4_g7_g1

0xe0e8,	// (0x00032155) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe0e8,	// (0x00032155) list_medium_line_x4_t4_g7_g2

0xe0f4,	// (0x00032161) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe0f4,	// (0x00032161) list_medium_line_x4_t4_g7_g3

0xe103,	// (0x00032170) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe103,	// (0x00032170) list_medium_line_x4_t4_g7_g4

0xe10f,	// (0x0003217c) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe10f,	// (0x0003217c) list_medium_line_x4_t4_g7_g5

0xe11e,	// (0x0003218b) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe11e,	// (0x0003218b) list_medium_line_x4_t4_g7_g6

0xe12d,	// (0x0003219a) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe12d,	// (0x0003219a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x00033c90) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x00033c90) list_medium_line_x4_t4_g7_g

0xe139,	// (0x000321a6) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe139,	// (0x000321a6) list_medium_line_x4_t4_g7_t1

0xe14e,	// (0x000321bb) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe14e,	// (0x000321bb) list_medium_line_x4_t4_g7_t2

0xe163,	// (0x000321d0) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe163,	// (0x000321d0) list_medium_line_x4_t4_g7_t3

0xe178,	// (0x000321e5) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe178,	// (0x000321e5) list_medium_line_x4_t4_g7_t4

0xe18a,	// (0x000321f7) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe18a,	// (0x000321f7) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x00033c9f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x00033c9f) list_medium_line_x4_t4_g7_t

0xe19c,	// (0x00032209) list_single_dyc_row_pane_ParamLimits

0xe19c,	// (0x00032209) list_single_dyc_row_pane

0x9b8e,	// (0x0002dbfb) call5_gesture_pane_ParamLimits

0x9b8e,	// (0x0002dbfb) call5_gesture_pane

0x9be4,	// (0x0002dc51) call5_windows_pane_ParamLimits

0x9be4,	// (0x0002dc51) call5_windows_pane

0x9c8a,	// (0x0002dcf7) call5_swipe_1_pane_cp_ParamLimits

0x9c8a,	// (0x0002dcf7) call5_swipe_1_pane_cp

0x9c96,	// (0x0002dd03) call5_swipe_2_pane_cp_ParamLimits

0x9c96,	// (0x0002dd03) call5_swipe_2_pane_cp

0x59c0,	// (0x00029a2d) call5_image_pane_cp

0x9ca2,	// (0x0002dd0f) popup_call5_audio_first_window_cp_ParamLimits

0x9ca2,	// (0x0002dd0f) popup_call5_audio_first_window_cp

0xe79b,	// (0x00032808) call5_swipe_1_pane_g1_cp_ParamLimits

0xe79b,	// (0x00032808) call5_swipe_1_pane_g1_cp

0xe7db,	// (0x00032848) call5_swipe_1_pane_g2_cp

0xe7b4,	// (0x00032821) call5_swipe_1_pane_t1_cp_ParamLimits

0xe7b4,	// (0x00032821) call5_swipe_1_pane_t1_cp

0xe79b,	// (0x00032808) call5_swipe_2_pane_g1_cp_ParamLimits

0xe79b,	// (0x00032808) call5_swipe_2_pane_g1_cp

0xe7e3,	// (0x00032850) call5_swipe_2_pane_g2_cp

0xe7eb,	// (0x00032858) call5_swipe_2_pane_t1_cp_ParamLimits

0xe7eb,	// (0x00032858) call5_swipe_2_pane_t1_cp

0x2bc0,	// (0x00026c2d) main_sp_fs_email_pane

0xe800,	// (0x0003286d) main_sp_fs_listscroll_pane_te

0xe809,	// (0x00032876) popup_sp_fs_action_menu_pane_ParamLimits

0xe809,	// (0x00032876) popup_sp_fs_action_menu_pane

0xc7ac,	// (0x00030819) bg_sp_fs_ctrlbar_pane_g1

0xe849,	// (0x000328b6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe852,	// (0x000328bf) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe85b,	// (0x000328c8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc7ac,	// (0x00030819) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x00033d88) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc58f,	// (0x000305fc) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc58f,	// (0x000305fc) bg_sp_fs_ctrlbar_ddmenu_pane

0xe864,	// (0x000328d1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe864,	// (0x000328d1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe870,	// (0x000328dd) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe870,	// (0x000328dd) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x00033d91) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x00033d91) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe87c,	// (0x000328e9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe87c,	// (0x000328e9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe896,	// (0x00032903) list_medium_line_t2_right_icon_g1

0x9cae,	// (0x0002dd1b) list_medium_line_t2_right_icon_t1

0x9cbe,	// (0x0002dd2b) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x00033d96) list_medium_line_t2_right_icon_t

0xc2a4,	// (0x00030311) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc2a4,	// (0x00030311) bg_sp_fs_ctrlbar_pane

0x9d16,	// (0x0002dd83) main_sp_fs_ctrlbar_button_pane_cp01

0x9d1e,	// (0x0002dd8b) main_sp_fs_ctrlbar_ddmenu_pane

0x3eac,	// (0x00027f19) main_sp_fs_ctrlbar_pane_g1

0xe8d6,	// (0x00032943) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x00033d9b) main_sp_fs_ctrlbar_pane_g

0xe8e2,	// (0x0003294f) main_sp_fs_ctrlbar_pane_t1

0x9d28,	// (0x0002dd95) main_sp_fs_ctrlbar_pane

0x9d4c,	// (0x0002ddb9) main_sp_fs_listscroll_pane_te_cp01

0x9d6c,	// (0x0002ddd9) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9d6c,	// (0x0002ddd9) popup_sp_fs_action_menu_pane_cp01

0x2bc0,	// (0x00026c2d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2bc0,	// (0x00026c2d) bg_sp_fs_highlight_list_pane_cp01

0xe8f7,	// (0x00032964) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe8f7,	// (0x00032964) sp_fs_action_menu_list_gene_pane_g1

0xe906,	// (0x00032973) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe906,	// (0x00032973) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x00033da0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x00033da0) sp_fs_action_menu_list_gene_pane_g

0xe913,	// (0x00032980) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe913,	// (0x00032980) sp_fs_action_menu_list_gene_pane_t1

0xe92b,	// (0x00032998) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe92b,	// (0x00032998) sp_fs_action_menu_list_gene_pane

0xe948,	// (0x000329b5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe948,	// (0x000329b5) popup_sp_fs_action_menu_bg_pane

0xe956,	// (0x000329c3) sp_fs_action_menu_list_pane_ParamLimits

0xe956,	// (0x000329c3) sp_fs_action_menu_list_pane

0xe974,	// (0x000329e1) sp_fs_scroll_pane_cp01_ParamLimits

0xe974,	// (0x000329e1) sp_fs_scroll_pane_cp01

0x9d86,	// (0x0002ddf3) list_medium_line_plain_t2_t1

0x9d96,	// (0x0002de03) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x00033da5) list_medium_line_plain_t2_t

0x9da6,	// (0x0002de13) list_medium_line_plain_t3_t1

0x9db6,	// (0x0002de23) list_medium_line_plain_t3_t2

0x9dc4,	// (0x0002de31) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x00033daa) list_medium_line_plain_t3_t

0x3eac,	// (0x00027f19) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3eac,	// (0x00027f19) list_medium_line_x2_t2_g2_g1

0x3ec4,	// (0x00027f31) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3ec4,	// (0x00027f31) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0003331a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0003331a) list_medium_line_x2_t2_g2_g

0x51e8,	// (0x00029255) list_medium_line_x2_t2_g2_t1_ParamLimits

0x51e8,	// (0x00029255) list_medium_line_x2_t2_g2_t1

0x3ef9,	// (0x00027f66) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3ef9,	// (0x00027f66) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x00033db1) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x00033db1) list_medium_line_x2_t2_g2_t

0x3eac,	// (0x00027f19) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3eac,	// (0x00027f19) list_medium_line_x2_t4_g2_g1

0x3ec4,	// (0x00027f31) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3ec4,	// (0x00027f31) list_medium_line_x2_t4_g2_g2

0x0001,

0xf2ad,	// (0x0003331a) list_medium_line_x2_t4_g2_g_ParamLimits

0xf2ad,	// (0x0003331a) list_medium_line_x2_t4_g2_g

0x9dd2,	// (0x0002de3f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9dd2,	// (0x0002de3f) list_medium_line_x2_t4_g2_t1

0x9de9,	// (0x0002de56) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9de9,	// (0x0002de56) list_medium_line_x2_t4_g2_t2

0x9dfe,	// (0x0002de6b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9dfe,	// (0x0002de6b) list_medium_line_x2_t4_g2_t3

0x3ef9,	// (0x00027f66) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3ef9,	// (0x00027f66) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd49,	// (0x00033db6) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd49,	// (0x00033db6) list_medium_line_x2_t4_g2_t

0xe99a,	// (0x00032a07) list_medium_line_t3_right_iconx2_g1

0xe896,	// (0x00032903) list_medium_line_t3_right_iconx2_g2

0x9e10,	// (0x0002de7d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd52,	// (0x00033dbf) list_medium_line_t3_right_iconx2_g

0x9e1a,	// (0x0002de87) list_medium_line_t3_right_iconx2_t1

0x9e2a,	// (0x0002de97) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd59,	// (0x00033dc6) list_medium_line_t3_right_iconx2_t

0x3eac,	// (0x00027f19) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3eac,	// (0x00027f19) list_medium_line_x3_t4_g4_g1

0x3eb8,	// (0x00027f25) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3eb8,	// (0x00027f25) list_medium_line_x3_t4_g4_g2

0x3f5f,	// (0x00027fcc) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3f5f,	// (0x00027fcc) list_medium_line_x3_t4_g4_g3

0xe9a2,	// (0x00032a0f) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe9a2,	// (0x00032a0f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd5e,	// (0x00033dcb) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd5e,	// (0x00033dcb) list_medium_line_x3_t4_g4_g

0x9e38,	// (0x0002dea5) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9e38,	// (0x0002dea5) list_medium_line_x3_t4_g4_t1

0x9e4f,	// (0x0002debc) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9e4f,	// (0x0002debc) list_medium_line_x3_t4_g4_t2

0x51fd,	// (0x0002926a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x51fd,	// (0x0002926a) list_medium_line_x3_t4_g4_t3

0xe9ae,	// (0x00032a1b) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe9ae,	// (0x00032a1b) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd67,	// (0x00033dd4) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd67,	// (0x00033dd4) list_medium_line_x3_t4_g4_t

0x9e68,	// (0x0002ded5) list_single_dyc_row_text_pane_t1_ParamLimits

0x9e68,	// (0x0002ded5) list_single_dyc_row_text_pane_t1

0x9eb1,	// (0x0002df1e) list_single_dyc_row_text_pane_t2_ParamLimits

0x9eb1,	// (0x0002df1e) list_single_dyc_row_text_pane_t2

0xe9cb,	// (0x00032a38) list_single_dyc_row_text_pane_t3_ParamLimits

0xe9cb,	// (0x00032a38) list_single_dyc_row_text_pane_t3

0x0002,

0xfd70,	// (0x00033ddd) list_single_dyc_row_text_pane_t_ParamLimits

0xfd70,	// (0x00033ddd) list_single_dyc_row_text_pane_t

0xe9dd,	// (0x00032a4a) list_single_dyc_row_pane_g1_ParamLimits

0xe9dd,	// (0x00032a4a) list_single_dyc_row_pane_g1

0xe9e9,	// (0x00032a56) list_single_dyc_row_pane_g2_ParamLimits

0xe9e9,	// (0x00032a56) list_single_dyc_row_pane_g2

0xe9f5,	// (0x00032a62) list_single_dyc_row_pane_g3_ParamLimits

0xe9f5,	// (0x00032a62) list_single_dyc_row_pane_g3

0xea01,	// (0x00032a6e) list_single_dyc_row_pane_g4_ParamLimits

0xea01,	// (0x00032a6e) list_single_dyc_row_pane_g4

0x0003,

0xfd77,	// (0x00033de4) list_single_dyc_row_pane_g_ParamLimits

0xfd77,	// (0x00033de4) list_single_dyc_row_pane_g

0xea0d,	// (0x00032a7a) list_single_dyc_row_text_pane_ParamLimits

0xea0d,	// (0x00032a7a) list_single_dyc_row_text_pane

0x2944,	// (0x000269b1) bg_sp_fs_scroll_pane

0xea2c,	// (0x00032a99) thumb_sp_fs_scroll_pane

0xd794,	// (0x00031801) list_medium_line_g1_ParamLimits

0xd794,	// (0x00031801) list_medium_line_g1

0xea35,	// (0x00032aa2) list_medium_line_t1_ParamLimits

0xea35,	// (0x00032aa2) list_medium_line_t1

0x3eac,	// (0x00027f19) list_medium_line_x2_g1_ParamLimits

0x3eac,	// (0x00027f19) list_medium_line_x2_g1

0x3eb8,	// (0x00027f25) list_medium_line_x2_g2_ParamLimits

0x3eb8,	// (0x00027f25) list_medium_line_x2_g2

0x0001,

0xfd80,	// (0x00033ded) list_medium_line_x2_g_ParamLimits

0xfd80,	// (0x00033ded) list_medium_line_x2_g

0xea4a,	// (0x00032ab7) list_medium_line_x2_t1_ParamLimits

0xea4a,	// (0x00032ab7) list_medium_line_x2_t1

0x3eac,	// (0x00027f19) list_medium_line_x3_g1_ParamLimits

0x3eac,	// (0x00027f19) list_medium_line_x3_g1

0x3eb8,	// (0x00027f25) list_medium_line_x3_g2_ParamLimits

0x3eb8,	// (0x00027f25) list_medium_line_x3_g2

0x0001,

0xfd80,	// (0x00033ded) list_medium_line_x3_g_ParamLimits

0xfd80,	// (0x00033ded) list_medium_line_x3_g

0xea4a,	// (0x00032ab7) list_medium_line_x3_t1_ParamLimits

0xea4a,	// (0x00032ab7) list_medium_line_x3_t1

0xea60,	// (0x00032acd) thumb_sp_fs_scroll_pane_g1

0xea69,	// (0x00032ad6) thumb_sp_fs_scroll_pane_g2

0xea72,	// (0x00032adf) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd85,	// (0x00033df2) thumb_sp_fs_scroll_pane_g

0xea60,	// (0x00032acd) bg_sp_fs_scroll_pane_g1

0xea69,	// (0x00032ad6) bg_sp_fs_scroll_pane_g2

0xea72,	// (0x00032adf) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd85,	// (0x00033df2) bg_sp_fs_scroll_pane_g

0x3eac,	// (0x00027f19) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3eac,	// (0x00027f19) list_medium_line_x2_t3_g4_g1

0x3f53,	// (0x00027fc0) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3f53,	// (0x00027fc0) list_medium_line_x2_t3_g4_g2

0x3eb8,	// (0x00027f25) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3eb8,	// (0x00027f25) list_medium_line_x2_t3_g4_g3

0x3ec4,	// (0x00027f31) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3ec4,	// (0x00027f31) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x00033396) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x00033396) list_medium_line_x2_t3_g4_g

0x9f0b,	// (0x0002df78) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9f0b,	// (0x0002df78) list_medium_line_x2_t3_g4_t1

0x9f21,	// (0x0002df8e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9f21,	// (0x0002df8e) list_medium_line_x2_t3_g4_t2

0x3ef9,	// (0x00027f66) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3ef9,	// (0x00027f66) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd8c,	// (0x00033df9) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd8c,	// (0x00033df9) list_medium_line_x2_t3_g4_t

0xd794,	// (0x00031801) list_medium_line_g2_g1_ParamLimits

0xd794,	// (0x00031801) list_medium_line_g2_g1

0xd7a0,	// (0x0003180d) list_medium_line_g2_g2_ParamLimits

0xd7a0,	// (0x0003180d) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x00033ac6) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x00033ac6) list_medium_line_g2_g

0xea7b,	// (0x00032ae8) list_medium_line_g2_t1_ParamLimits

0xea7b,	// (0x00032ae8) list_medium_line_g2_t1

0xd794,	// (0x00031801) list_medium_line_t3_g2_g1_ParamLimits

0xd794,	// (0x00031801) list_medium_line_t3_g2_g1

0xd7a0,	// (0x0003180d) list_medium_line_t3_g2_g2_ParamLimits

0xd7a0,	// (0x0003180d) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x00033ac6) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x00033ac6) list_medium_line_t3_g2_g

0x9f3a,	// (0x0002dfa7) list_medium_line_t3_g2_t1_ParamLimits

0x9f3a,	// (0x0002dfa7) list_medium_line_t3_g2_t1

0x9f54,	// (0x0002dfc1) list_medium_line_t3_g2_t2_ParamLimits

0x9f54,	// (0x0002dfc1) list_medium_line_t3_g2_t2

0x9f69,	// (0x0002dfd6) list_medium_line_t3_g2_t3_ParamLimits

0x9f69,	// (0x0002dfd6) list_medium_line_t3_g2_t3

0x0002,

0xfd93,	// (0x00033e00) list_medium_line_t3_g2_t_ParamLimits

0xfd93,	// (0x00033e00) list_medium_line_t3_g2_t

0xe896,	// (0x00032903) list_medium_line_right_icon_g1

0xea90,	// (0x00032afd) list_medium_line_right_icon_t1

0xd794,	// (0x00031801) list_medium_line_t2_g1_ParamLimits

0xd794,	// (0x00031801) list_medium_line_t2_g1

0x9f83,	// (0x0002dff0) list_medium_line_t2_t1_ParamLimits

0x9f83,	// (0x0002dff0) list_medium_line_t2_t1

0x9f9d,	// (0x0002e00a) list_medium_line_t2_t2_ParamLimits

0x9f9d,	// (0x0002e00a) list_medium_line_t2_t2

0x0001,

0xfd9a,	// (0x00033e07) list_medium_line_t2_t_ParamLimits

0xfd9a,	// (0x00033e07) list_medium_line_t2_t

0xd794,	// (0x00031801) list_medium_line_t3_g1_ParamLimits

0xd794,	// (0x00031801) list_medium_line_t3_g1

0x9fb2,	// (0x0002e01f) list_medium_line_t3_t1_ParamLimits

0x9fb2,	// (0x0002e01f) list_medium_line_t3_t1

0x9fc9,	// (0x0002e036) list_medium_line_t3_t2_ParamLimits

0x9fc9,	// (0x0002e036) list_medium_line_t3_t2

0x9fde,	// (0x0002e04b) list_medium_line_t3_t3_ParamLimits

0x9fde,	// (0x0002e04b) list_medium_line_t3_t3

0x0002,

0xfd9f,	// (0x00033e0c) list_medium_line_t3_t_ParamLimits

0xfd9f,	// (0x00033e0c) list_medium_line_t3_t

0xd794,	// (0x00031801) list_medium_line_g3_g1_ParamLimits

0xd794,	// (0x00031801) list_medium_line_g3_g1

0xea9e,	// (0x00032b0b) list_medium_line_g3_g2_ParamLimits

0xea9e,	// (0x00032b0b) list_medium_line_g3_g2

0xd7a0,	// (0x0003180d) list_medium_line_g3_g3_ParamLimits

0xd7a0,	// (0x0003180d) list_medium_line_g3_g3

0x0002,

0xfda6,	// (0x00033e13) list_medium_line_g3_g_ParamLimits

0xfda6,	// (0x00033e13) list_medium_line_g3_g

0xeaaa,	// (0x00032b17) list_medium_line_g3_t1_ParamLimits

0xeaaa,	// (0x00032b17) list_medium_line_g3_t1

0xd794,	// (0x00031801) list_medium_line_t2_g3_g1_ParamLimits

0xd794,	// (0x00031801) list_medium_line_t2_g3_g1

0xea9e,	// (0x00032b0b) list_medium_line_t2_g3_g2_ParamLimits

0xea9e,	// (0x00032b0b) list_medium_line_t2_g3_g2

0xd7a0,	// (0x0003180d) list_medium_line_t2_g3_g3_ParamLimits

0xd7a0,	// (0x0003180d) list_medium_line_t2_g3_g3

0x0002,

0xfda6,	// (0x00033e13) list_medium_line_t2_g3_g_ParamLimits

0xfda6,	// (0x00033e13) list_medium_line_t2_g3_g

0x9ff0,	// (0x0002e05d) list_medium_line_t2_g3_t1_ParamLimits

0x9ff0,	// (0x0002e05d) list_medium_line_t2_g3_t1

0xa007,	// (0x0002e074) list_medium_line_t2_g3_t2_ParamLimits

0xa007,	// (0x0002e074) list_medium_line_t2_g3_t2

0x0001,

0xfdad,	// (0x00033e1a) list_medium_line_t2_g3_t_ParamLimits

0xfdad,	// (0x00033e1a) list_medium_line_t2_g3_t

0xd794,	// (0x00031801) list_medium_line_t3_g3_g1_ParamLimits

0xd794,	// (0x00031801) list_medium_line_t3_g3_g1

0xea9e,	// (0x00032b0b) list_medium_line_t3_g3_g2_ParamLimits

0xea9e,	// (0x00032b0b) list_medium_line_t3_g3_g2

0xd7a0,	// (0x0003180d) list_medium_line_t3_g3_g3_ParamLimits

0xd7a0,	// (0x0003180d) list_medium_line_t3_g3_g3

0x0002,

0xfda6,	// (0x00033e13) list_medium_line_t3_g3_g_ParamLimits

0xfda6,	// (0x00033e13) list_medium_line_t3_g3_g

0xa020,	// (0x0002e08d) list_medium_line_t3_g3_t1_ParamLimits

0xa020,	// (0x0002e08d) list_medium_line_t3_g3_t1

0xa034,	// (0x0002e0a1) list_medium_line_t3_g3_t2_ParamLimits

0xa034,	// (0x0002e0a1) list_medium_line_t3_g3_t2

0xa046,	// (0x0002e0b3) list_medium_line_t3_g3_t3_ParamLimits

0xa046,	// (0x0002e0b3) list_medium_line_t3_g3_t3

0x0002,

0xfdb2,	// (0x00033e1f) list_medium_line_t3_g3_t_ParamLimits

0xfdb2,	// (0x00033e1f) list_medium_line_t3_g3_t

0xe99a,	// (0x00032a07) list_medium_line_right_iconx2_g1

0xe896,	// (0x00032903) list_medium_line_right_iconx2_g2

0x0001,

0xfdb9,	// (0x00033e26) list_medium_line_right_iconx2_g

0xeabf,	// (0x00032b2c) list_medium_line_right_iconx2_t1

0xe99a,	// (0x00032a07) list_medium_line_t2_right_iconx2_g1

0xe896,	// (0x00032903) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdb9,	// (0x00033e26) list_medium_line_t2_right_iconx2_g

0xa05a,	// (0x0002e0c7) list_medium_line_t2_right_iconx2_t1

0xa06a,	// (0x0002e0d7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdbe,	// (0x00033e2b) list_medium_line_t2_right_iconx2_t

0xeacd,	// (0x00032b3a) list_medium_line_x4_t4_t1

0xa078,	// (0x0002e0e5) list_medium_line_x4_t4_t2

0xa088,	// (0x0002e0f5) list_medium_line_x4_t4_t3

0xa098,	// (0x0002e105) list_medium_line_x4_t4_t4

0x0003,

0xfdc3,	// (0x00033e30) list_medium_line_x4_t4_t

0xa0eb,	// (0x0002e158) tport_appsw_pane_ParamLimits

0xa0eb,	// (0x0002e158) tport_appsw_pane

0xa0fc,	// (0x0002e169) tport_contact_pane_ParamLimits

0xa0fc,	// (0x0002e169) tport_contact_pane

0xa115,	// (0x0002e182) tport_listscroll_pane_ParamLimits

0xa115,	// (0x0002e182) tport_listscroll_pane

0xa130,	// (0x0002e19d) cell_tport_appsw_pane_ParamLimits

0xa130,	// (0x0002e19d) cell_tport_appsw_pane

0xd481,	// (0x000314ee) tport_appsw_pane_g1_ParamLimits

0xd481,	// (0x000314ee) tport_appsw_pane_g1

0xeadb,	// (0x00032b48) tport_contact_pane_g1

0xeae4,	// (0x00032b51) tport_contact_pane_t1

0xeaf2,	// (0x00032b5f) tport_contact_pane_t2

0x0001,

0xfdcc,	// (0x00033e39) tport_contact_pane_t

0xeb00,	// (0x00032b6d) list_tport_pane

0xeb09,	// (0x00032b76) scroll_pane_cp_030

0xa14b,	// (0x0002e1b8) cell_tport_appsw_pane_g1

0xeb12,	// (0x00032b7f) cell_tport_appsw_pane_t1

0x2944,	// (0x000269b1) grid_highlight_pane_cp019

0xa163,	// (0x0002e1d0) list_tport_double_graphic_pane_ParamLimits

0xa163,	// (0x0002e1d0) list_tport_double_graphic_pane

0x2bc0,	// (0x00026c2d) list_highlight_pane_cp023_ParamLimits

0x2bc0,	// (0x00026c2d) list_highlight_pane_cp023

0xa170,	// (0x0002e1dd) list_tport_double_graphic_pane_g1_ParamLimits

0xa170,	// (0x0002e1dd) list_tport_double_graphic_pane_g1

0xa17d,	// (0x0002e1ea) list_tport_double_graphic_pane_t1_ParamLimits

0xa17d,	// (0x0002e1ea) list_tport_double_graphic_pane_t1

0xa192,	// (0x0002e1ff) list_tport_double_graphic_pane_t2_ParamLimits

0xa192,	// (0x0002e1ff) list_tport_double_graphic_pane_t2

0x0001,

0xfdd8,	// (0x00033e45) list_tport_double_graphic_pane_t_ParamLimits

0xfdd8,	// (0x00033e45) list_tport_double_graphic_pane_t

0x2944,	// (0x000269b1) main_cale_note_pane

0x262c,	// (0x00026699) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x262c,	// (0x00026699) cell_vitu2_function_top_wide_pane_cp01

0x9889,	// (0x0002d8f6) wait_bar_pane_cp05_ParamLimits

0x2944,	// (0x000269b1) listscroll_cmail_pane

0xeb28,	// (0x00032b95) list_cmail_pane

0xa1ae,	// (0x0002e21b) list_cmail_body_pane

0xa1c6,	// (0x0002e233) list_single_cmail_header_caption_pane

0xa1e2,	// (0x0002e24f) list_single_cmail_header_detail_pane_ParamLimits

0xa1e2,	// (0x0002e24f) list_single_cmail_header_detail_pane

0xa20e,	// (0x0002e27b) list_single_cmail_header_caption_pane_t1

0xa21e,	// (0x0002e28b) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa21e,	// (0x0002e28b) list_single_cmail_header_detail_pane_g1

0xeb48,	// (0x00032bb5) list_single_cmail_header_detail_pane_g2_ParamLimits

0xeb48,	// (0x00032bb5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfddd,	// (0x00033e4a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfddd,	// (0x00033e4a) list_single_cmail_header_detail_pane_g

0xeb61,	// (0x00032bce) list_single_cmail_header_detail_pane_t1_ParamLimits

0xeb61,	// (0x00032bce) list_single_cmail_header_detail_pane_t1

0xeb93,	// (0x00032c00) list_single_cmail_header_editor_pane_bg_ParamLimits

0xeb93,	// (0x00032c00) list_single_cmail_header_editor_pane_bg

0xeba5,	// (0x00032c12) list_cmail_body_pane_g1

0xebae,	// (0x00032c1b) list_cmail_body_pane_t1

0xd4eb,	// (0x00031558) list_single_cmail_header_editor_pane_bg_g1

0x456a,	// (0x000285d7) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd4fb,	// (0x00031568) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd4f3,	// (0x00031560) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd76c,	// (0x000317d9) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd51b,	// (0x00031588) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd50b,	// (0x00031578) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd513,	// (0x00031580) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x454a,	// (0x000285b7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa25c,	// (0x0002e2c9) calenote_gesture_pane_ParamLimits

0xa25c,	// (0x0002e2c9) calenote_gesture_pane

0xa27c,	// (0x0002e2e9) calenote_window_pane_ParamLimits

0xa27c,	// (0x0002e2e9) calenote_window_pane

0xebbc,	// (0x00032c29) popup_note_window_cp01

0xa298,	// (0x0002e305) calenote_swipe_1_pane_ParamLimits

0xa298,	// (0x0002e305) calenote_swipe_1_pane

0x9c96,	// (0x0002dd03) calenote_swipe_2_pane_ParamLimits

0x9c96,	// (0x0002dd03) calenote_swipe_2_pane

0xe79b,	// (0x00032808) calenote_swipe_1_pane_g1_ParamLimits

0xe79b,	// (0x00032808) calenote_swipe_1_pane_g1

0xe7a8,	// (0x00032815) calenote_swipe_1_pane_g2_ParamLimits

0xe7a8,	// (0x00032815) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x00033d7e) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x00033d7e) calenote_swipe_1_pane_g

0xebce,	// (0x00032c3b) calenote_swipe_1_pane_t1_ParamLimits

0xebce,	// (0x00032c3b) calenote_swipe_1_pane_t1

0xe79b,	// (0x00032808) calenote_swipe_2_pane_g1_ParamLimits

0xe79b,	// (0x00032808) calenote_swipe_2_pane_g1

0xebed,	// (0x00032c5a) calenote_swipe_2_pane_g2_ParamLimits

0xebed,	// (0x00032c5a) calenote_swipe_2_pane_g2

0x0001,

0xfde9,	// (0x00033e56) calenote_swipe_2_pane_g_ParamLimits

0xfde9,	// (0x00033e56) calenote_swipe_2_pane_g

0xebf9,	// (0x00032c66) calenote_swipe_2_pane_t1_ParamLimits

0xebf9,	// (0x00032c66) calenote_swipe_2_pane_t1

0x2944,	// (0x000269b1) main_mup_navstr_pane

0x77c6,	// (0x0002b833) main_mup3_pane_t7_ParamLimits

0x77c6,	// (0x0002b833) main_mup3_pane_t7

0xd0eb,	// (0x00031158) main_mp4_pane_g6_ParamLimits

0xd0eb,	// (0x00031158) main_mp4_pane_g6

0xd30f,	// (0x0003137c) main_image3_pane_t4_ParamLimits

0xd30f,	// (0x0003137c) main_image3_pane_t4

0xa2ad,	// (0x0002e31a) popup_navstr_preview_pane_ParamLimits

0xa2ad,	// (0x0002e31a) popup_navstr_preview_pane

0xa2c1,	// (0x0002e32e) scroll_navstr_pane_ParamLimits

0xa2c1,	// (0x0002e32e) scroll_navstr_pane

0x2944,	// (0x000269b1) bg_popup_preview_window_pane_cp04

0xec20,	// (0x00032c8d) popup_navstr_preview_pane_t1

0xa2d5,	// (0x0002e342) scroll_navstr_pane_g1_ParamLimits

0xa2d5,	// (0x0002e342) scroll_navstr_pane_g1

0xa2e9,	// (0x0002e356) scroll_navstr_pane_t1_ParamLimits

0xa2e9,	// (0x0002e356) scroll_navstr_pane_t1

0xebc5,	// (0x00032c32) bg_button_pane_cp014

0xebc5,	// (0x00032c32) bg_button_pane_cp030

0xe73c,	// (0x000327a9) list_double_fisheye_pane_g4_ParamLimits

0xe73c,	// (0x000327a9) list_double_fisheye_pane_g4

0xe748,	// (0x000327b5) list_double_fisheye_pane_g5_ParamLimits

0xe748,	// (0x000327b5) list_double_fisheye_pane_g5

0xeb30,	// (0x00032b9d) sp_fs_scroll_pane_cp03

0x3eac,	// (0x00027f19) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe8d6,	// (0x00032943) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x00033d9b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe8e2,	// (0x0003294f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa1a4,	// (0x0002e211) sp_fs_scroll_pane_cp02

0x37db,	// (0x00027848) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x37db,	// (0x00027848) popup_sp_fs_calendar_preview_list_single_pane

0x2944,	// (0x000269b1) main_cam6_pano_pane

0x2bc0,	// (0x00026c2d) main_mup3_pane_ParamLimits

0x2944,	// (0x000269b1) main_phacti_pane

0x975c,	// (0x0002d7c9) bg_button_pane_cp11

0x9776,	// (0x0002d7e3) main_mobtv_info_pane_g2_ParamLimits

0x9776,	// (0x0002d7e3) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x00033cfb) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x00033cfb) main_mobtv_info_pane_g

0x9951,	// (0x0002d9be) sc_clock_pane_t5_ParamLimits

0x9951,	// (0x0002d9be) sc_clock_pane_t5

0x99d6,	// (0x0002da43) main_radioblah_pane_g1_ParamLimits

0xe6aa,	// (0x00032717) main_radioblah_pane_t3_ParamLimits

0xe6aa,	// (0x00032717) main_radioblah_pane_t3

0xe6c2,	// (0x0003272f) main_radioblah_pane_t4_ParamLimits

0xe6c2,	// (0x0003272f) main_radioblah_pane_t4

0x99fe,	// (0x0002da6b) main_radioblah_text_pane_ParamLimits

0x99fe,	// (0x0002da6b) main_radioblah_text_pane

0x9a10,	// (0x0002da7d) main_radioblah_info_pane_g1_ParamLimits

0x9aab,	// (0x0002db18) main_radioblah_info_pane_t4_ParamLimits

0x9aab,	// (0x0002db18) main_radioblah_info_pane_t4

0x2bc0,	// (0x00026c2d) main_sp_fs_calendar_pane

0xa2ff,	// (0x0002e36c) main_phacti_pane_g1

0xa307,	// (0x0002e374) phacti_note_pane_ParamLimits

0xa307,	// (0x0002e374) phacti_note_pane

0xec37,	// (0x00032ca4) phacti_term_pane_ParamLimits

0xec37,	// (0x00032ca4) phacti_term_pane

0xec4c,	// (0x00032cb9) phacti_note_pane_t1_ParamLimits

0xec4c,	// (0x00032cb9) phacti_note_pane_t1

0xec63,	// (0x00032cd0) phacti_term_pane_g1

0xec6b,	// (0x00032cd8) phacti_term_pane_t1_ParamLimits

0xec6b,	// (0x00032cd8) phacti_term_pane_t1

0xec95,	// (0x00032d02) popup_sp_fs_calendar_preview_list_single_pane_g1

0xec9d,	// (0x00032d0a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf3,	// (0x00033e60) popup_sp_fs_calendar_preview_list_single_pane_g

0xeca5,	// (0x00032d12) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xeca5,	// (0x00032d12) popup_sp_fs_calendar_preview_list_single_pane_t1

0xecbb,	// (0x00032d28) aid_popup_sp_fs_bg_corner_pane

0xc7ac,	// (0x00030819) popup_sp_fs_calendar_preview_bg_pane_g1

0x2944,	// (0x000269b1) popup_sp_fs_calendar_preview_bg_pane

0xecc3,	// (0x00032d30) popup_sp_fs_calendar_preview_list_pane

0x2bc0,	// (0x00026c2d) bg_main_sp_fs_cale_pane_ParamLimits

0x2bc0,	// (0x00026c2d) bg_main_sp_fs_cale_pane

0xecd4,	// (0x00032d41) listscroll_cale_mrui_pane_ParamLimits

0xecd4,	// (0x00032d41) listscroll_cale_mrui_pane

0xece8,	// (0x00032d55) listscroll_sp_fs_schedule_track_pane

0xecf1,	// (0x00032d5e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xecf1,	// (0x00032d5e) main_sp_fs_ctrlbar_pane_cp01

0xed02,	// (0x00032d6f) main_sp_fs_ribbon_pane

0xed0a,	// (0x00032d77) popup_sp_fs_cale_preview_window

0xa362,	// (0x0002e3cf) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa362,	// (0x0002e3cf) list_single_sp_fs_schedule_track_pane

0x2bc0,	// (0x00026c2d) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2bc0,	// (0x00026c2d) bg_sp_fs_highlight_list_pane_cp03

0xa378,	// (0x0002e3e5) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa378,	// (0x0002e3e5) list_single_sp_fs_schedule_track_pane_g1

0xa384,	// (0x0002e3f1) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa384,	// (0x0002e3f1) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdf8,	// (0x00033e65) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdf8,	// (0x00033e65) list_single_sp_fs_schedule_track_pane_g

0xa390,	// (0x0002e3fd) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa390,	// (0x0002e3fd) list_single_sp_fs_schedule_track_pane_t1

0xa3aa,	// (0x0002e417) sp_fs_schedule_track_pane_ParamLimits

0xa3aa,	// (0x0002e417) sp_fs_schedule_track_pane

0xed1c,	// (0x00032d89) sp_fs_schedule_track_pane_g1

0xed24,	// (0x00032d91) sp_fs_schedule_track_pane_g2

0xed2c,	// (0x00032d99) sp_fs_schedule_track_pane_g3

0xed34,	// (0x00032da1) sp_fs_schedule_track_pane_g4

0xed3c,	// (0x00032da9) sp_fs_schedule_track_pane_g5

0x0004,

0xfdfd,	// (0x00033e6a) sp_fs_schedule_track_pane_g

0xd4eb,	// (0x00031558) bg_sp_fs_schedule_viewer_highlight_g1

0x456a,	// (0x000285d7) bg_sp_fs_schedule_viewer_highlight_g2

0xd4f3,	// (0x00031560) bg_sp_fs_schedule_viewer_highlight_g3

0xd4fb,	// (0x00031568) bg_sp_fs_schedule_viewer_highlight_g4

0xd76c,	// (0x000317d9) bg_sp_fs_schedule_viewer_highlight_g5

0xd50b,	// (0x00031578) bg_sp_fs_schedule_viewer_highlight_g6

0xd513,	// (0x00031580) bg_sp_fs_schedule_viewer_highlight_g7

0xd51b,	// (0x00031588) bg_sp_fs_schedule_viewer_highlight_g8

0x454a,	// (0x000285b7) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe08,	// (0x00033e75) bg_sp_fs_schedule_viewer_highlight_g

0x2944,	// (0x000269b1) bg_main_sp_fs_ribbon_pane

0xa3bb,	// (0x0002e428) main_sp_fs_ribbon_pane_g1

0xed44,	// (0x00032db1) main_sp_fs_ribbon_pane_t1

0xa3c4,	// (0x0002e431) main_sp_fs_ribbon_pane_t2

0xed53,	// (0x00032dc0) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe1b,	// (0x00033e88) main_sp_fs_ribbon_pane_t

0xed62,	// (0x00032dcf) main_sp_fs_ribbon_scheduler_pane

0xed6a,	// (0x00032dd7) bg_main_sp_fs_ribbon_pane_g1

0xed73,	// (0x00032de0) bg_main_sp_fs_ribbon_pane_g2

0xed7c,	// (0x00032de9) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe22,	// (0x00033e8f) bg_main_sp_fs_ribbon_pane_g

0xed84,	// (0x00032df1) main_sp_fs_ribbon_scheduler_pane_g1

0xed8d,	// (0x00032dfa) main_sp_fs_ribbon_scheduler_pane_g2

0xed96,	// (0x00032e03) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe29,	// (0x00033e96) main_sp_fs_ribbon_scheduler_pane_g

0xed9f,	// (0x00032e0c) list_cale_mrui_pane

0xa3d3,	// (0x0002e440) sp_fs_scroll_pane_cp07_ParamLimits

0xa3d3,	// (0x0002e440) sp_fs_scroll_pane_cp07

0xa3e9,	// (0x0002e456) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa3e9,	// (0x0002e456) bg_sp_fs_schedule_viewer_highlight

0xeda8,	// (0x00032e15) list_single_sp_fs_schedule_track_pane_cp01

0xedb0,	// (0x00032e1d) list_sp_fs_schedule_track_pane

0xedb8,	// (0x00032e25) sp_fs_scroll_pane_cp06_ParamLimits

0xedb8,	// (0x00032e25) sp_fs_scroll_pane_cp06

0xc7ac,	// (0x00030819) bgmain_sp_fs_calendar_pane_g1

0xa3f9,	// (0x0002e466) list_single_cale_mrui_pane_ParamLimits

0xa3f9,	// (0x0002e466) list_single_cale_mrui_pane

0xedca,	// (0x00032e37) list_single_cale_mrui_row_pane_ParamLimits

0xedca,	// (0x00032e37) list_single_cale_mrui_row_pane

0xedd7,	// (0x00032e44) list_single_cale_mrui_row_pane_g1_ParamLimits

0xedd7,	// (0x00032e44) list_single_cale_mrui_row_pane_g1

0xee0f,	// (0x00032e7c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xee0f,	// (0x00032e7c) list_single_cale_mrui_row_pane_t1

0xa41c,	// (0x0002e489) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa41c,	// (0x0002e489) list_single_cale_mrui_row_pane_t2

0xee21,	// (0x00032e8e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xee21,	// (0x00032e8e) list_single_cale_mrui_row_pane_t3

0xee50,	// (0x00032ebd) list_single_cale_mrui_row_pane_t4_ParamLimits

0xee50,	// (0x00032ebd) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe35,	// (0x00033ea2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe35,	// (0x00033ea2) list_single_cale_mrui_row_pane_t

0xa484,	// (0x0002e4f1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa484,	// (0x0002e4f1) list_single_cmail_header_editor_pane_bg_cp01

0xa4aa,	// (0x0002e517) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa4aa,	// (0x0002e517) list_single_cmail_header_editor_pane_bg_cp02

0xa4ca,	// (0x0002e537) main_radioblah_text_pane_t1_ParamLimits

0xa4ca,	// (0x0002e537) main_radioblah_text_pane_t1

0xee7f,	// (0x00032eec) cam6_indi_pane_cp01

0xee87,	// (0x00032ef4) cam6_mode_pane_cp01

0xee8f,	// (0x00032efc) cam6_pano_pane

0xee98,	// (0x00032f05) cam6_zoom_pane_cp01

0xeea0,	// (0x00032f0d) cam6_pano_image_pane

0xeeab,	// (0x00032f18) cam6_pano_pane_g1

0xe422,	// (0x0003248f) cam6_pano_pane_g2

0xeeb4,	// (0x00032f21) cam6_pano_pane_g3

0xeebd,	// (0x00032f2a) cam6_pano_pane_g4

0xcd6a,	// (0x00030dd7) cam6_pano_pane_g5

0xeec6,	// (0x00032f33) cam6_pano_pane_g6

0xeed0,	// (0x00032f3d) cam6_pano_pane_g7

0xeed8,	// (0x00032f45) cam6_pano_pane_g8

0xeee1,	// (0x00032f4e) cam6_pano_pane_g9

0x0008,

0xfe3e,	// (0x00033eab) cam6_pano_pane_g

0x2944,	// (0x000269b1) main_browser_tag_pane

0xec18,	// (0x00032c85) grid_navstr_albumart_pane

0xeeec,	// (0x00032f59) cell_navstr_albumart_pane_ParamLimits

0xeeec,	// (0x00032f59) cell_navstr_albumart_pane

0xaf8e,	// (0x0002effb) cell_navstr_albumart_pane_g1

0xc0c1,	// (0x0003012e) cell_navstr_albumart_pane_g2

0xc0d1,	// (0x0003013e) cell_navstr_albumart_pane_g3

0xc0c9,	// (0x00030136) cell_navstr_albumart_pane_g4

0x0003,

0xfe51,	// (0x00033ebe) cell_navstr_albumart_pane_g

0xa4e5,	// (0x0002e552) bt_list_pane_ParamLimits

0xa4e5,	// (0x0002e552) bt_list_pane

0xa4fa,	// (0x0002e567) bt_list_pane_t1

0xa509,	// (0x0002e576) bt_list_pane_t2

0x0001,

0xfe5a,	// (0x00033ec7) bt_list_pane_t

0x2944,	// (0x000269b1) main_cale_prevew_pane

0xa518,	// (0x0002e585) popup_cale_preview_window_ParamLimits

0xa518,	// (0x0002e585) popup_cale_preview_window

0x2bc0,	// (0x00026c2d) bg_popup_preview_window_pane_cp05_ParamLimits

0x2bc0,	// (0x00026c2d) bg_popup_preview_window_pane_cp05

0xef0e,	// (0x00032f7b) list_cale_preview_pane_ParamLimits

0xef0e,	// (0x00032f7b) list_cale_preview_pane

0xa52d,	// (0x0002e59a) list_double_cale_preview_pane_ParamLimits

0xa52d,	// (0x0002e59a) list_double_cale_preview_pane

0xa53f,	// (0x0002e5ac) list_single_cale_preview_pane_ParamLimits

0xa53f,	// (0x0002e5ac) list_single_cale_preview_pane

0xa553,	// (0x0002e5c0) list_single_cale_preview_pane_g1

0xa55b,	// (0x0002e5c8) list_single_cale_preview_pane_t1_ParamLimits

0xa55b,	// (0x0002e5c8) list_single_cale_preview_pane_t1

0xa570,	// (0x0002e5dd) list_double_cale_preview_pane_g1

0xa578,	// (0x0002e5e5) list_double_cale_preview_pane_t1_ParamLimits

0xa578,	// (0x0002e5e5) list_double_cale_preview_pane_t1

0xa58d,	// (0x0002e5fa) list_double_cale_preview_pane_t2_ParamLimits

0xa58d,	// (0x0002e5fa) list_double_cale_preview_pane_t2

0x0001,

0xfe5f,	// (0x00033ecc) list_double_cale_preview_pane_t_ParamLimits

0xfe5f,	// (0x00033ecc) list_double_cale_preview_pane_t

0x2944,	// (0x000269b1) main_ezdial_pane

0x2bc0,	// (0x00026c2d) main_sp_fs_email_pane_ParamLimits

0x9cce,	// (0x0002dd3b) cmail_ddmenu_btn01_pane_ParamLimits

0x9cce,	// (0x0002dd3b) cmail_ddmenu_btn01_pane

0x9ce1,	// (0x0002dd4e) cmail_ddmenu_btn02_pane_ParamLimits

0x9ce1,	// (0x0002dd4e) cmail_ddmenu_btn02_pane

0x9d04,	// (0x0002dd71) cmail_ddmenu_btn03_pane_ParamLimits

0x9d04,	// (0x0002dd71) cmail_ddmenu_btn03_pane

0x9d28,	// (0x0002dd95) main_sp_fs_ctrlbar_pane_ParamLimits

0x9d4c,	// (0x0002ddb9) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa1ae,	// (0x0002e21b) list_cmail_body_pane_ParamLimits

0xeb3f,	// (0x00032bac) bg_button_pane_cp12

0xeb54,	// (0x00032bc1) list_single_cmail_header_detail_pane_g3_ParamLimits

0xeb54,	// (0x00032bc1) list_single_cmail_header_detail_pane_g3

0xa236,	// (0x0002e2a3) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa236,	// (0x0002e2a3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde4,	// (0x00033e51) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde4,	// (0x00033e51) list_single_cmail_header_detail_pane_t

0xec80,	// (0x00032ced) phacti_term_pane_t2_ParamLimits

0xec80,	// (0x00032ced) phacti_term_pane_t2

0x0001,

0xfdee,	// (0x00033e5b) phacti_term_pane_t_ParamLimits

0xfdee,	// (0x00033e5b) phacti_term_pane_t

0xef1a,	// (0x00032f87) aid_size_list_single_double

0xa5a5,	// (0x0002e612) popup_ezdial_listscroll_window

0xa5c1,	// (0x0002e62e) popup_number_entry_window_cp01

0x59c0,	// (0x00029a2d) bg_popup_call_pane_cp09

0xef26,	// (0x00032f93) ezdial_list_pane

0xef2e,	// (0x00032f9b) scroll_pane_cp23

0xc2a4,	// (0x00030311) bg_button_pane_cp028_ParamLimits

0xc2a4,	// (0x00030311) bg_button_pane_cp028

0xa5cf,	// (0x0002e63c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa5cf,	// (0x0002e63c) cmail_ddmenu_btn01_pane_g1

0xa5db,	// (0x0002e648) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa5db,	// (0x0002e648) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe64,	// (0x00033ed1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe64,	// (0x00033ed1) cmail_ddmenu_btn01_pane_g

0xef36,	// (0x00032fa3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xef36,	// (0x00032fa3) cmail_ddmenu_btn01_pane_t1

0xc2a4,	// (0x00030311) bg_button_pane_cp029_ParamLimits

0xc2a4,	// (0x00030311) bg_button_pane_cp029

0xa5e7,	// (0x0002e654) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa5e7,	// (0x0002e654) cmail_ddmenu_btn02_pane_g1

0xa5ff,	// (0x0002e66c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa5ff,	// (0x0002e66c) cmail_ddmenu_btn02_pane_t1

0x2bc0,	// (0x00026c2d) bg_button_pane_cp031_ParamLimits

0x2bc0,	// (0x00026c2d) bg_button_pane_cp031

0xa5e7,	// (0x0002e654) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa5e7,	// (0x0002e654) cmail_ddmenu_btn03_pane_g1

0xa5ff,	// (0x0002e66c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa5ff,	// (0x0002e66c) cmail_ddmenu_btn03_pane_t1

0x8172,	// (0x0002c1df) cell_dialer2_keypad_pane_t1_ParamLimits

0x818c,	// (0x0002c1f9) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x818c,	// (0x0002c1f9) cell_dialer2_keypad_pane_t1_copy1

0x9601,	// (0x0002d66e) ncimui_group_button_pane

0x2bc0,	// (0x00026c2d) main_sp_fs_calendar_pane_ParamLimits

0xa1c6,	// (0x0002e233) list_single_cmail_header_caption_pane_ParamLimits

0xeccb,	// (0x00032d38) aid_recal_txt_sm_pane

0x2944,	// (0x000269b1) mian_recal_day_pane

0xed0a,	// (0x00032d77) popup_sp_fs_cale_preview_window_ParamLimits

0x2944,	// (0x000269b1) list_recal_day_pane

0xef6d,	// (0x00032fda) list_single_recal_day_pane_ParamLimits

0xef6d,	// (0x00032fda) list_single_recal_day_pane

0xef7f,	// (0x00032fec) list_single_recal_day_pane_g1_ParamLimits

0xef7f,	// (0x00032fec) list_single_recal_day_pane_g1

0xef8b,	// (0x00032ff8) list_single_recal_day_pane_g2_ParamLimits

0xef8b,	// (0x00032ff8) list_single_recal_day_pane_g2

0xef9a,	// (0x00033007) list_single_recal_day_pane_g3_ParamLimits

0xef9a,	// (0x00033007) list_single_recal_day_pane_g3

0xa623,	// (0x0002e690) list_single_recal_day_pane_g4_ParamLimits

0xa623,	// (0x0002e690) list_single_recal_day_pane_g4

0xefa6,	// (0x00033013) list_single_recal_day_pane_g5_ParamLimits

0xefa6,	// (0x00033013) list_single_recal_day_pane_g5

0xefb5,	// (0x00033022) list_single_recal_day_pane_g6_ParamLimits

0xefb5,	// (0x00033022) list_single_recal_day_pane_g6

0x0005,

0xfe73,	// (0x00033ee0) list_single_recal_day_pane_g_ParamLimits

0xfe73,	// (0x00033ee0) list_single_recal_day_pane_g

0xefc1,	// (0x0003302e) list_single_recal_day_pane_t1

0xefcf,	// (0x0003303c) list_single_recal_day_pane_t2

0x0001,

0xfe80,	// (0x00033eed) list_single_recal_day_pane_t

0xa636,	// (0x0002e6a3) ncimui_query_button_pane_ParamLimits

0xa636,	// (0x0002e6a3) ncimui_query_button_pane

0xa646,	// (0x0002e6b3) ncimui_query_button_pane_t1_ParamLimits

0xa646,	// (0x0002e6b3) ncimui_query_button_pane_t1

0xefdd,	// (0x0003304a) ncimui_query_button_pane_t2_ParamLimits

0xefdd,	// (0x0003304a) ncimui_query_button_pane_t2

0x0001,

0xfe85,	// (0x00033ef2) ncimui_query_button_pane_t_ParamLimits

0xfe85,	// (0x00033ef2) ncimui_query_button_pane_t

0xa659,	// (0x0002e6c6) query_button_pane_ParamLimits

0xa659,	// (0x0002e6c6) query_button_pane

0x2944,	// (0x000269b1) bg_button_pane_cp0028

0xeff0,	// (0x0003305d) query_button_pane_t1

0x68fa,	// (0x0002a967) main_tport_pane_ParamLimits

0xa0a8,	// (0x0002e115) bg_popup_window_pane_cp01_ParamLimits

0xa0a8,	// (0x0002e115) bg_popup_window_pane_cp01

0xa0c2,	// (0x0002e12f) heading_pane_cp08_ParamLimits

0xa0c2,	// (0x0002e12f) heading_pane_cp08

0xa0d6,	// (0x0002e143) heading_pane_cp07_ParamLimits

0xa0d6,	// (0x0002e143) heading_pane_cp07

0xa153,	// (0x0002e1c0) cell_tport_appsw_pane_g2

0x0002,

0xfdd1,	// (0x00033e3e) cell_tport_appsw_pane_g

0x5f09,	// (0x00029f76) input_candi_list_open_g1

0x4f86,	// (0x00028ff3) list_cale_time_pane_g6_ParamLimits

0x4f86,	// (0x00028ff3) list_cale_time_pane_g6

0x71e8,	// (0x0002b255) aid_size_touch_calib_1_ParamLimits

0x71e8,	// (0x0002b255) aid_size_touch_calib_1

0x71f4,	// (0x0002b261) aid_size_touch_calib_2_ParamLimits

0x71f4,	// (0x0002b261) aid_size_touch_calib_2

0x720a,	// (0x0002b277) aid_size_touch_calib_3_ParamLimits

0x720a,	// (0x0002b277) aid_size_touch_calib_3

0x7228,	// (0x0002b295) aid_size_touch_calib_4_ParamLimits

0x7228,	// (0x0002b295) aid_size_touch_calib_4

0x723e,	// (0x0002b2ab) main_touch_calib_button_group_pane_ParamLimits

0x723e,	// (0x0002b2ab) main_touch_calib_button_group_pane

0x7255,	// (0x0002b2c2) main_touch_calib_pane_g1_ParamLimits

0x7261,	// (0x0002b2ce) main_touch_calib_pane_g2_ParamLimits

0x726d,	// (0x0002b2da) main_touch_calib_pane_g3_ParamLimits

0x7279,	// (0x0002b2e6) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x00033825) main_touch_calib_pane_g_ParamLimits

0x7285,	// (0x0002b2f2) main_touch_calib_pane_t1_ParamLimits

0x729f,	// (0x0002b30c) main_touch_calib_pane_t2_ParamLimits

0x72b9,	// (0x0002b326) main_touch_calib_pane_t3_ParamLimits

0x72cd,	// (0x0002b33a) main_touch_calib_pane_t4_ParamLimits

0x72e1,	// (0x0002b34e) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0003382e) main_touch_calib_pane_t_ParamLimits

0xcb51,	// (0x00030bbe) list_single_fp_cale_pane_g3_ParamLimits

0xcb51,	// (0x00030bbe) list_single_fp_cale_pane_g3

0xd4d3,	// (0x00031540) bg_button_pane_cp012_ParamLimits

0xd4d3,	// (0x00031540) bg_vkb2_func_pane_cp03_ParamLimits

0x282a,	// (0x00026897) cell_vitu2_function_top_pane_g1_ParamLimits

0xd4d3,	// (0x00031540) bg_vkb2_func_pane_cp04_ParamLimits

0x95b5,	// (0x0002d622) main_ncimui_button_group_pane_ParamLimits

0x95b5,	// (0x0002d622) main_ncimui_button_group_pane

0x95ef,	// (0x0002d65c) main_ncimui_pane_t3_ParamLimits

0x95ef,	// (0x0002d65c) main_ncimui_pane_t3

0xec2e,	// (0x00032c9b) phacti_button_group_pane

0xef1a,	// (0x00032f87) aid_size_list_single_double_ParamLimits

0xa5a5,	// (0x0002e612) popup_ezdial_listscroll_window_ParamLimits

0xa5c1,	// (0x0002e62e) popup_number_entry_window_cp01_ParamLimits

0xa66c,	// (0x0002e6d9) phacti_button_pane_ParamLimits

0xa66c,	// (0x0002e6d9) phacti_button_pane

0x2944,	// (0x000269b1) bg_button_pane_cp14

0xeffe,	// (0x0003306b) phacti_button_pane_t1

0xa67d,	// (0x0002e6ea) main_touch_calib_button_pane_ParamLimits

0xa67d,	// (0x0002e6ea) main_touch_calib_button_pane

0x35c2,	// (0x0002762f) bg_button_pane_cp18_ParamLimits

0x35c2,	// (0x0002762f) bg_button_pane_cp18

0xf00c,	// (0x00033079) main_touch_calib_button_pane_t1_ParamLimits

0xf00c,	// (0x00033079) main_touch_calib_button_pane_t1

0xf022,	// (0x0003308f) main_touch_calib_button_pane_t2_ParamLimits

0xf022,	// (0x0003308f) main_touch_calib_button_pane_t2

0x0001,

0xfe8a,	// (0x00033ef7) main_touch_calib_button_pane_t_ParamLimits

0xfe8a,	// (0x00033ef7) main_touch_calib_button_pane_t

0x2944,	// (0x000269b1) cell_ncimui_button_pane

0x2944,	// (0x000269b1) bg_button_pane_cp032

0xf040,	// (0x000330ad) cell_ncimui_button_pane_t1

0xd2ef,	// (0x0003135c) image3_infobar_pane_ParamLimits

0xd2ef,	// (0x0003135c) image3_infobar_pane

0x997d,	// (0x0002d9ea) fs_bigclock_status_pane_ParamLimits

0x997d,	// (0x0002d9ea) fs_bigclock_status_pane

0x998a,	// (0x0002d9f7) main_fs_bigclock_clock_pane_ParamLimits

0x998a,	// (0x0002d9f7) main_fs_bigclock_clock_pane

0x999d,	// (0x0002da0a) main_fs_bigclock_indi_pane_ParamLimits

0x999d,	// (0x0002da0a) main_fs_bigclock_indi_pane

0x99b5,	// (0x0002da22) main_fs_bigclock_swipe_pane_ParamLimits

0x99b5,	// (0x0002da22) main_fs_bigclock_swipe_pane

0x2944,	// (0x000269b1) main_fs_clock_dumped_data

0xe52f,	// (0x0003259c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe52f,	// (0x0003259c) list_single_fs_bigclock_indicator_pane_g1

0xe54d,	// (0x000325ba) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe54d,	// (0x000325ba) list_single_fs_bigclock_indicator_pane_g2

0xe567,	// (0x000325d4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe567,	// (0x000325d4) list_single_fs_bigclock_indicator_pane_g3

0xe581,	// (0x000325ee) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe581,	// (0x000325ee) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x00033d2f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x00033d2f) list_single_fs_bigclock_indicator_pane_g

0xe5a7,	// (0x00032614) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe5a7,	// (0x00032614) list_single_fs_bigclock_indicator_pane_t1

0xe5cf,	// (0x0003263c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe5cf,	// (0x0003263c) list_single_fs_bigclock_indicator_pane_t2

0xe5f7,	// (0x00032664) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe5f7,	// (0x00032664) list_single_fs_bigclock_indicator_pane_t3

0xe61f,	// (0x0003268c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe61f,	// (0x0003268c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x00033d3a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x00033d3a) list_single_fs_bigclock_indicator_pane_t

0xf04e,	// (0x000330bb) image3_infobar_fav_pane_ParamLimits

0xf04e,	// (0x000330bb) image3_infobar_fav_pane

0xf05e,	// (0x000330cb) image3_infobar_loc_pane_ParamLimits

0xf05e,	// (0x000330cb) image3_infobar_loc_pane

0xf072,	// (0x000330df) image3_infobar_time_pane_ParamLimits

0xf072,	// (0x000330df) image3_infobar_time_pane

0xc7ac,	// (0x00030819) image3_infobar_time_pane_g1

0xf082,	// (0x000330ef) image3_infobar_time_pane_t1

0xc7ac,	// (0x00030819) image3_infobar_loc_pane_g1

0xf090,	// (0x000330fd) image3_infobar_loc_pane_g2

0x0001,

0xfe8f,	// (0x00033efc) image3_infobar_loc_pane_g

0xf098,	// (0x00033105) image3_infobar_loc_pane_t1

0xc7ac,	// (0x00030819) image3_infobar_fav_pane_g1

0xf0a6,	// (0x00033113) image3_infobar_fav_pane_g2

0x0001,

0xfe94,	// (0x00033f01) image3_infobar_fav_pane_g

0xf0ae,	// (0x0003311b) fs_bigclock_status_battery_pane

0xf0b7,	// (0x00033124) fs_bigclock_status_signal_pane

0xf0c0,	// (0x0003312d) fs_bigclock_status_title_pane

0xf0c9,	// (0x00033136) fs_bigclock_status_signal_pane_g1

0xf0d2,	// (0x0003313f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe99,	// (0x00033f06) fs_bigclock_status_signal_pane_g

0xf0da,	// (0x00033147) fs_bigclock_status_battery_pane_g1

0xf0e3,	// (0x00033150) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe9e,	// (0x00033f0b) fs_bigclock_status_battery_pane_g

0xf0eb,	// (0x00033158) fs_bigclock_status_title_pane_t1

0xc7ac,	// (0x00030819) main_fs_bigclock_clock_pane_g1

0xf0f9,	// (0x00033166) main_fs_bigclock_clock_pane_g2

0xf0f9,	// (0x00033166) main_fs_bigclock_clock_pane_g3

0xf0f9,	// (0x00033166) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea3,	// (0x00033f10) main_fs_bigclock_clock_pane_g

0xf101,	// (0x0003316e) main_fs_bigclock_clock_pane_t1

0xf10f,	// (0x0003317c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeac,	// (0x00033f19) main_fs_bigclock_clock_pane_t

0xf11e,	// (0x0003318b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xf11e,	// (0x0003318b) list_single_fs_bigclock_indicator_pane

0xa692,	// (0x0002e6ff) list_single_fs_bigclock_pane_ParamLimits

0xa692,	// (0x0002e6ff) list_single_fs_bigclock_pane

0x0019,	// (0x00024086) main_fs_bigclock_indicator_pane_t1

0x0028,	// (0x00024095) list_single_fs_bigclock_pane_g1

0x0030,	// (0x0002409d) list_single_fs_bigclock_pane_t1

0xc7ac,	// (0x00030819) main_fs_bigclock_swipe_pane_g1

0x006e,	// (0x000240db) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfebd,	// (0x00033f2a) main_fs_bigclock_swipe_pane_g

0x0076,	// (0x000240e3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x0076,	// (0x000240e3) main_fs_bigclock_swipe_pane_t1

0x5335,	// (0x000293a2) call_type_pane_ParamLimits

0x2944,	// (0x000269b1) main_btmg_pane

0xee03,	// (0x00032e70) list_single_cale_mrui_row_pane_g2_ParamLimits

0xee03,	// (0x00032e70) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe30,	// (0x00033e9d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe30,	// (0x00033e9d) list_single_cale_mrui_row_pane_g

0xef54,	// (0x00032fc1) list_recal_vselct_arw_lo_pane

0xef5c,	// (0x00032fc9) list_recal_vselct_arw_up_pane

0xef64,	// (0x00032fd1) list_recal_vselct_pane

0x0093,	// (0x00024100) btmg_button_pane

0xa6f8,	// (0x0002e765) main_btmg_pane_g1

0x2944,	// (0x000269b1) bg_button_pane_cp044

0x00a5,	// (0x00024112) btmg_button_pane_t1

0xc29c,	// (0x00030309) aid_listscroll_gen

0x2bc0,	// (0x00026c2d) main_cntbar_detail_pane

0xeb20,	// (0x00032b8d) list_cmail_folder_pane

0xeb30,	// (0x00032b9d) sp_fs_scroll_pane_cp03_ParamLimits

0xa1c6,	// (0x0002e233) list_single_fs_dyc_pane_cp01_ParamLimits

0xa1c6,	// (0x0002e233) list_single_fs_dyc_pane_cp01

0x00b3,	// (0x00024120) aid_size_cmail_indent

0x00bc,	// (0x00024129) list_single_dyc_row_pane_cp01

0xa72e,	// (0x0002e79b) cntbar_detail_list_pane_ParamLimits

0xa72e,	// (0x0002e79b) cntbar_detail_list_pane

0xa77a,	// (0x0002e7e7) main_cntbar_detail_cont_pane_ParamLimits

0xa77a,	// (0x0002e7e7) main_cntbar_detail_cont_pane

0x514c,	// (0x000291b9) scroll_pane_cp032_ParamLimits

0x514c,	// (0x000291b9) scroll_pane_cp032

0xa78e,	// (0x0002e7fb) cntbar_detail_list_event_pane_ParamLimits

0xa78e,	// (0x0002e7fb) cntbar_detail_list_event_pane

0xa73e,	// (0x0002e7ab) cntbar_detail_list_shct_pane

0x45c0,	// (0x0002862d) aid_list_gen

0x013f,	// (0x000241ac) aid_scroll

0x0148,	// (0x000241b5) aid_size_touch_scroll_bar

0xa79e,	// (0x0002e80b) aid_list_double

0x015a,	// (0x000241c7) aid_list_single

0x0163,	// (0x000241d0) aid_list_single_lg

0x016c,	// (0x000241d9) aid_list_z_g_a_sm

0x0174,	// (0x000241e1) aid_list_z_g_d

0x017c,	// (0x000241e9) aid_txt_z_prm

0xa7a7,	// (0x0002e814) aid_txt_z_prm_cp01

0xa7b5,	// (0x0002e822) aid_txt_z_sec

0xa7c3,	// (0x0002e830) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa7c3,	// (0x0002e830) main_cntbar_detail_cont_pane_g1

0xa7d7,	// (0x0002e844) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa7d7,	// (0x0002e844) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec2,	// (0x00033f2f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec2,	// (0x00033f2f) main_cntbar_detail_cont_pane_g

0x01bf,	// (0x0002422c) main_cntbar_detail_cont_pane_t1

0x01cd,	// (0x0002423a) main_cntbar_detail_cont_pane_t2

0x01db,	// (0x00024248) main_cntbar_detail_cont_pane_t3

0x0002,

0xfec7,	// (0x00033f34) main_cntbar_detail_cont_pane_t

0xa7e7,	// (0x0002e854) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa7e7,	// (0x0002e854) cell_cntbar_detail_list_shct_pane

0x01fd,	// (0x0002426a) cntbar_detail_list_shct_pane_g1

0x0206,	// (0x00024273) cntbar_detail_list_shct_pane_g2

0x0001,

0xfece,	// (0x00033f3b) cntbar_detail_list_shct_pane_g

0xa7fb,	// (0x0002e868) cntbar_detail_list_event_pane_g1_ParamLimits

0xa7fb,	// (0x0002e868) cntbar_detail_list_event_pane_g1

0xa807,	// (0x0002e874) cntbar_detail_list_event_pane_g2_ParamLimits

0xa807,	// (0x0002e874) cntbar_detail_list_event_pane_g2

0x0005,

0xfed3,	// (0x00033f40) cntbar_detail_list_event_pane_g_ParamLimits

0xfed3,	// (0x00033f40) cntbar_detail_list_event_pane_g

0xa873,	// (0x0002e8e0) cntbar_detail_list_event_pane_t1_ParamLimits

0xa873,	// (0x0002e8e0) cntbar_detail_list_event_pane_t1

0xa888,	// (0x0002e8f5) cntbar_detail_list_event_pane_t2_ParamLimits

0xa888,	// (0x0002e8f5) cntbar_detail_list_event_pane_t2

0x0002,

0xfee0,	// (0x00033f4d) cntbar_detail_list_event_pane_t_ParamLimits

0xfee0,	// (0x00033f4d) cntbar_detail_list_event_pane_t

0xc7ac,	// (0x00030819) cell_cntbar_detail_list_shct_pane_g1

0x593e,	// (0x000299ab) navi_pane_mv_g3

0x2bc0,	// (0x00026c2d) main_cntbar_detail_pane_ParamLimits

0x2944,	// (0x000269b1) main_notif_wgt_pane

0xd0a1,	// (0x0003110e) aid_tch_main_mp4_pane_g4

0xd279,	// (0x000312e6) popup_slider_window_cp02

0xef4b,	// (0x00032fb8) list_recal_day_event_pane

0xa702,	// (0x0002e76f) cntbar_detail_btn_pane_ParamLimits

0xa702,	// (0x0002e76f) cntbar_detail_btn_pane

0xa718,	// (0x0002e785) cntbar_detail_btn_pane_cp01_ParamLimits

0xa718,	// (0x0002e785) cntbar_detail_btn_pane_cp01

0xa73e,	// (0x0002e7ab) cntbar_detail_list_shct_pane_ParamLimits

0xa74e,	// (0x0002e7bb) cntbar_detail_pane_g1_ParamLimits

0xa74e,	// (0x0002e7bb) cntbar_detail_pane_g1

0xa75e,	// (0x0002e7cb) cntbar_detail_pane_t1_ParamLimits

0xa75e,	// (0x0002e7cb) cntbar_detail_pane_t1

0xa813,	// (0x0002e880) cntbar_detail_list_event_pane_g3_ParamLimits

0xa813,	// (0x0002e880) cntbar_detail_list_event_pane_g3

0xa82b,	// (0x0002e898) cntbar_detail_list_event_pane_g4_ParamLimits

0xa82b,	// (0x0002e898) cntbar_detail_list_event_pane_g4

0xa843,	// (0x0002e8b0) cntbar_detail_list_event_pane_g5_ParamLimits

0xa843,	// (0x0002e8b0) cntbar_detail_list_event_pane_g5

0xa85b,	// (0x0002e8c8) cntbar_detail_list_event_pane_g6_ParamLimits

0xa85b,	// (0x0002e8c8) cntbar_detail_list_event_pane_g6

0xa89d,	// (0x0002e90a) cntbar_detail_list_event_pane_t3_ParamLimits

0xa89d,	// (0x0002e90a) cntbar_detail_list_event_pane_t3

0xa8af,	// (0x0002e91c) popup_notif_wgt_window_ParamLimits

0xa8af,	// (0x0002e91c) popup_notif_wgt_window

0xa8c8,	// (0x0002e935) popup_submenu_window_cp01_ParamLimits

0xa8c8,	// (0x0002e935) popup_submenu_window_cp01

0x59c0,	// (0x00029a2d) bg_popup_window_pane_cp10

0x02e1,	// (0x0002434e) listscroll_notif_wgt_pane

0x02eb,	// (0x00024358) list_notif_wgt_window

0x02f4,	// (0x00024361) scroll_pane_cp033

0x02fd,	// (0x0002436a) list_notif_wgt_row_pane_ParamLimits

0x02fd,	// (0x0002436a) list_notif_wgt_row_pane

0x0311,	// (0x0002437e) aid_size_list_notif_wgt_del

0x031a,	// (0x00024387) list_notif_wgt_row_pane_g1

0x0322,	// (0x0002438f) list_notif_wgt_row_pane_g2

0x032a,	// (0x00024397) list_notif_wgt_row_pane_g3

0x0002,

0xfee7,	// (0x00033f54) list_notif_wgt_row_pane_g

0x0333,	// (0x000243a0) list_notif_wgt_row_pane_t1

0x0341,	// (0x000243ae) list_notif_wgt_row_pane_t2

0x034f,	// (0x000243bc) list_notif_wgt_row_pane_t3

0x0002,

0xfeee,	// (0x00033f5b) list_notif_wgt_row_pane_t

0xd7c6,	// (0x00031833) list_recal_day_event_pane_g1

0x035d,	// (0x000243ca) list_recal_day_event_pane_t1

0x2944,	// (0x000269b1) bg_button_pane_cp045

0x036c,	// (0x000243d9) cntbar_detail_btn_pane_t1

0xc2a4,	// (0x00030311) main_callh_pane_ParamLimits

0xc2a4,	// (0x00030311) main_callh_pane

0x2944,	// (0x000269b1) main_coverflow0_pane

0x2944,	// (0x000269b1) main_wgtman_pane

0x99c3,	// (0x0002da30) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x99c3,	// (0x0002da30) main_fs_bigclock_unlock_btn_pane

0xa143,	// (0x0002e1b0) bg_button_pane_cp16

0xa15b,	// (0x0002e1c8) cell_tport_appsw_pane_g3

0xa8da,	// (0x0002e947) cf0_flow_pane_ParamLimits

0xa8da,	// (0x0002e947) cf0_flow_pane

0x0389,	// (0x000243f6) listscroll_cf0_pane

0x0392,	// (0x000243ff) main_cf0_pane_g1

0xa8ef,	// (0x0002e95c) main_cf0_pane_t1_ParamLimits

0xa8ef,	// (0x0002e95c) main_cf0_pane_t1

0xa907,	// (0x0002e974) main_cf0_pane_t2_ParamLimits

0xa907,	// (0x0002e974) main_cf0_pane_t2

0x0001,

0xfef5,	// (0x00033f62) main_cf0_pane_t_ParamLimits

0xfef5,	// (0x00033f62) main_cf0_pane_t

0x03c4,	// (0x00024431) scroll_pane_cp11

0xa91f,	// (0x0002e98c) cf0_flow_pane_g1

0xa927,	// (0x0002e994) cf0_flow_pane_g2

0x0001,

0xfefa,	// (0x00033f67) cf0_flow_pane_g

0xa92f,	// (0x0002e99c) cf0_flow_pane_t1

0x2944,	// (0x000269b1) main_call6_pane

0x2944,	// (0x000269b1) main_calllock_pane

0xa93d,	// (0x0002e9aa) call6_btn_grp_pane_ParamLimits

0xa93d,	// (0x0002e9aa) call6_btn_grp_pane

0xa957,	// (0x0002e9c4) call6_pane_g1_ParamLimits

0xa957,	// (0x0002e9c4) call6_pane_g1

0xa96c,	// (0x0002e9d9) popup_call6_1st_window_ParamLimits

0xa96c,	// (0x0002e9d9) popup_call6_1st_window

0xa97d,	// (0x0002e9ea) popup_call6_2nd_window_ParamLimits

0xa97d,	// (0x0002e9ea) popup_call6_2nd_window

0xa98e,	// (0x0002e9fb) cell_call6_btn_pane_ParamLimits

0xa98e,	// (0x0002e9fb) cell_call6_btn_pane

0x59c0,	// (0x00029a2d) bg_popup_call2_in_pane_cp03

0x0436,	// (0x000244a3) popup_call6_1st_window_g1

0x043e,	// (0x000244ab) popup_call6_1st_window_g2

0x0446,	// (0x000244b3) popup_call6_1st_window_g3

0x0002,

0xfeff,	// (0x00033f6c) popup_call6_1st_window_g

0x044e,	// (0x000244bb) popup_call6_1st_window_t1

0x045d,	// (0x000244ca) popup_call6_1st_window_t2

0x046d,	// (0x000244da) popup_call6_1st_window_t3

0x0002,

0xff06,	// (0x00033f73) popup_call6_1st_window_t

0x59c0,	// (0x00029a2d) bg_popup_call2_in_pane_cp04

0x0436,	// (0x000244a3) popup_call6_2nd_window_g1

0x043e,	// (0x000244ab) popup_call6_2nd_window_g2

0x0446,	// (0x000244b3) popup_call6_2nd_window_g3

0x0002,

0xfeff,	// (0x00033f6c) popup_call6_2nd_window_g

0x044e,	// (0x000244bb) popup_call6_2nd_window_t1

0x2944,	// (0x000269b1) bg_button_pane_cp15

0x047d,	// (0x000244ea) cell_call6_btn_pane_g1

0x0486,	// (0x000244f3) cell_call6_btn_pane_t1

0xa9a2,	// (0x0002ea0f) listscroll_wgtman_pane_ParamLimits

0xa9a2,	// (0x0002ea0f) listscroll_wgtman_pane

0xa9ba,	// (0x0002ea27) wgtman_btn_pane_ParamLimits

0xa9ba,	// (0x0002ea27) wgtman_btn_pane

0x5585,	// (0x000295f2) aid_scroll_copy1

0x04b2,	// (0x0002451f) list_wgtman_pane

0xa9d3,	// (0x0002ea40) wgtman_btn_pane_g1_ParamLimits

0xa9d3,	// (0x0002ea40) wgtman_btn_pane_g1

0xa9e7,	// (0x0002ea54) wgtman_btn_pane_t1_ParamLimits

0xa9e7,	// (0x0002ea54) wgtman_btn_pane_t1

0x04da,	// (0x00024547) wgtman_btn_pane_t2_ParamLimits

0x04da,	// (0x00024547) wgtman_btn_pane_t2

0x0001,

0xff0d,	// (0x00033f7a) wgtman_btn_pane_t_ParamLimits

0xff0d,	// (0x00033f7a) wgtman_btn_pane_t

0xaa02,	// (0x0002ea6f) listrow_wgtman_pane_ParamLimits

0xaa02,	// (0x0002ea6f) listrow_wgtman_pane

0xaa15,	// (0x0002ea82) listrow_wgtman_pane_g1

0xaa1e,	// (0x0002ea8b) listrow_wgtman_pane_g2

0x0001,

0xff12,	// (0x00033f7f) listrow_wgtman_pane_g

0xaa28,	// (0x0002ea95) listrow_wgtman_pane_t1

0xaa36,	// (0x0002eaa3) listrow_wgtman_pane_t2

0x0001,

0xff17,	// (0x00033f84) listrow_wgtman_pane_t

0xaa44,	// (0x0002eab1) wait_bar_pane_cp09

0x053f,	// (0x000245ac) main_calllock_btn_pane

0x0549,	// (0x000245b6) main_calllock_pane_g1

0x2944,	// (0x000269b1) bg_button_pane_cp17

0x0554,	// (0x000245c1) main_calllock_btn_pane_g1

0x055d,	// (0x000245ca) main_calllock_btn_pane_t1

0x2944,	// (0x000269b1) main_dialer3_pane

0x2944,	// (0x000269b1) main_fmrd2_pane

0xc7ac,	// (0x00030819) main_fs_bigclock_unlock_btn_pane_g1

0x0574,	// (0x000245e1) main_fs_bigclock_unlock_btn_pane_t1

0xaa4c,	// (0x0002eab9) area_fmrd2_info_pane_ParamLimits

0xaa4c,	// (0x0002eab9) area_fmrd2_info_pane

0xaa5e,	// (0x0002eacb) area_fmrd2_visual_pane_ParamLimits

0xaa5e,	// (0x0002eacb) area_fmrd2_visual_pane

0xaa6c,	// (0x0002ead9) fmrd2_indi_pane_ParamLimits

0xaa6c,	// (0x0002ead9) fmrd2_indi_pane

0xaa79,	// (0x0002eae6) area_fmrd2_visual_pane_g1

0xaa81,	// (0x0002eaee) area_fmrd2_visual_pane_t1

0xaa91,	// (0x0002eafe) area_fmrd2_visual_pane_t2

0xaaa1,	// (0x0002eb0e) area_fmrd2_visual_pane_t3

0x0002,

0xff21,	// (0x00033f8e) area_fmrd2_visual_pane_t

0xaab1,	// (0x0002eb1e) area_fmrd2_info_pane_g1

0xaab9,	// (0x0002eb26) area_fmrd2_info_pane_t1

0xaac9,	// (0x0002eb36) area_fmrd2_info_pane_t2

0xaad9,	// (0x0002eb46) area_fmrd2_info_pane_t3

0xaae9,	// (0x0002eb56) area_fmrd2_info_pane_t4

0x0003,

0xff28,	// (0x00033f95) area_fmrd2_info_pane_t

0xaaf7,	// (0x0002eb64) fmrd2_indi_pane_t1

0xab07,	// (0x0002eb74) fmrd2_indi_pane_t2

0xab17,	// (0x0002eb84) fmrd2_indi_pane_t3

0x0002,

0xff31,	// (0x00033f9e) fmrd2_indi_pane_t

0xe590,	// (0x000325fd) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe590,	// (0x000325fd) list_single_fs_bigclock_indicator_pane_g5

0xe634,	// (0x000326a1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe634,	// (0x000326a1) list_single_fs_bigclock_indicator_pane_t5

0xa31b,	// (0x0002e388) aid_cell_bcale_month_pane_ParamLimits

0xa31b,	// (0x0002e388) aid_cell_bcale_month_pane

0xa32d,	// (0x0002e39a) bcale_month_pane_ParamLimits

0xa32d,	// (0x0002e39a) bcale_month_pane

0xa347,	// (0x0002e3b4) bcale_preview_pane_ParamLimits

0xa347,	// (0x0002e3b4) bcale_preview_pane

0x0030,	// (0x0002409d) list_single_fs_bigclock_pane_t1_ParamLimits

0x004a,	// (0x000240b7) list_single_fs_bigclock_pane_t2_ParamLimits

0x004a,	// (0x000240b7) list_single_fs_bigclock_pane_t2

0x0001,

0xfeb8,	// (0x00033f25) list_single_fs_bigclock_pane_t_ParamLimits

0xfeb8,	// (0x00033f25) list_single_fs_bigclock_pane_t

0x056c,	// (0x000245d9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff1c,	// (0x00033f89) main_fs_bigclock_unlock_btn_pane_g

0xab27,	// (0x0002eb94) aid_dia3_key_size_ParamLimits

0xab27,	// (0x0002eb94) aid_dia3_key_size

0xab36,	// (0x0002eba3) aid_dia3_listrow_size_ParamLimits

0xab36,	// (0x0002eba3) aid_dia3_listrow_size

0xab44,	// (0x0002ebb1) dia3_keypad_fun_pane_ParamLimits

0xab44,	// (0x0002ebb1) dia3_keypad_fun_pane

0xab5e,	// (0x0002ebcb) dia3_keypad_num_pane_ParamLimits

0xab5e,	// (0x0002ebcb) dia3_keypad_num_pane

0xab77,	// (0x0002ebe4) dia3_listscroll_pane_ParamLimits

0xab77,	// (0x0002ebe4) dia3_listscroll_pane

0xab8a,	// (0x0002ebf7) dia3_numentry_pane_ParamLimits

0xab8a,	// (0x0002ebf7) dia3_numentry_pane

0x06ae,	// (0x0002471b) dia3_list_pane

0x06b9,	// (0x00024726) scroll_pane_cp12

0x2944,	// (0x000269b1) bg_dia3_numentry_pane

0x06c4,	// (0x00024731) dia3_numentry_pane_t1

0xab9b,	// (0x0002ec08) cell_dia3_key_num_pane

0xaba3,	// (0x0002ec10) cell_dia3_key0_fun_pane_ParamLimits

0xaba3,	// (0x0002ec10) cell_dia3_key0_fun_pane

0xabb7,	// (0x0002ec24) cell_dia3_key1_fun_pane_ParamLimits

0xabb7,	// (0x0002ec24) cell_dia3_key1_fun_pane

0xdbed,	// (0x00031c5a) dia3_listrow_pane

0xe2ae,	// (0x0003231b) bg_dia3_numentry_pane_g1

0x2944,	// (0x000269b1) bg_button_pane_cp21

0x06fe,	// (0x0002476b) cell_dia3_key_num_pane_t1

0x070c,	// (0x00024779) cell_dia3_key_num_pane_t2

0x071b,	// (0x00024788) cell_dia3_key_num_pane_t3

0x072a,	// (0x00024797) cell_dia3_key_num_pane_t4

0x0003,

0xff38,	// (0x00033fa5) cell_dia3_key_num_pane_t

0x2944,	// (0x000269b1) bg_button_pane_cp19

0xabcf,	// (0x0002ec3c) cell_dia3_key0_fun_pane_g1

0x2944,	// (0x000269b1) bg_button_pane_cp20

0xabd7,	// (0x0002ec44) cell_dia3_key1_fun_pane_g1

0xabdf,	// (0x0002ec4c) area_left_week_number_pane

0xabe8,	// (0x0002ec55) area_top_day_name_pane

0xabf1,	// (0x0002ec5e) frame_month_view_pane

0xabfd,	// (0x0002ec6a) grid_month_view_pane

0xac07,	// (0x0002ec74) cell_top_day_name_pane_ParamLimits

0xac07,	// (0x0002ec74) cell_top_day_name_pane

0xac1f,	// (0x0002ec8c) cell_area_left_week_number_pane_ParamLimits

0xac1f,	// (0x0002ec8c) cell_area_left_week_number_pane

0xac33,	// (0x0002eca0) cell_month_view_pane_ParamLimits

0xac33,	// (0x0002eca0) cell_month_view_pane

0x07ba,	// (0x00024827) frm_month_g1

0xac4e,	// (0x0002ecbb) frm_month_g2

0xac58,	// (0x0002ecc5) frm_month_g3

0xac62,	// (0x0002eccf) frm_month_g4

0xac6c,	// (0x0002ecd9) frm_month_g5

0xac76,	// (0x0002ece3) frm_month_g6

0xac80,	// (0x0002eced) frm_month_g7

0x07ff,	// (0x0002486c) frm_month_g8

0xac8c,	// (0x0002ecf9) frm_month_g9

0xac95,	// (0x0002ed02) frm_month_g10

0xac9e,	// (0x0002ed0b) frm_month_g11

0xaca7,	// (0x0002ed14) frm_month_g12

0xacb0,	// (0x0002ed1d) frm_month_g13

0xacb9,	// (0x0002ed26) frm_month_g14

0xacc2,	// (0x0002ed2f) frm_month_g15

0xaccb,	// (0x0002ed38) frm_month_g16

0x000f,

0xff41,	// (0x00033fae) frm_month_g

0xacd6,	// (0x0002ed43) cell_top_day_name_pane_t1

0xace5,	// (0x0002ed52) cell_area_left_week_number_pane_g1

0xacd6,	// (0x0002ed43) cell_area_left_week_number_pane_t1

0xc7ac,	// (0x00030819) cell_month_view_pane_g1

0xaced,	// (0x0002ed5a) cell_month_view_pane_t1

0x2944,	// (0x000269b1) main_fps_pane

0xe89e,	// (0x0003290b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe89e,	// (0x0003290b) cmail_ddmenu_btn02_pane_cp1

0xe8ba,	// (0x00032927) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe8ba,	// (0x00032927) cmail_ddmenu_btn02_pane_cp2

0xa5f3,	// (0x0002e660) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa5f3,	// (0x0002e660) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe69,	// (0x00033ed6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe69,	// (0x00033ed6) cmail_ddmenu_btn02_pane_g

0xa611,	// (0x0002e67e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa611,	// (0x0002e67e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe6e,	// (0x00033edb) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe6e,	// (0x00033edb) cmail_ddmenu_btn02_pane_t

0xacfc,	// (0x0002ed69) fps_text_pane_ParamLimits

0xacfc,	// (0x0002ed69) fps_text_pane

0xad13,	// (0x0002ed80) main_fps_pane_g1_ParamLimits

0xad13,	// (0x0002ed80) main_fps_pane_g1

0xad2d,	// (0x0002ed9a) wait_bar_pane_cp010_ParamLimits

0xad2d,	// (0x0002ed9a) wait_bar_pane_cp010

0xad3e,	// (0x0002edab) fps_text_pane_t1_ParamLimits

0xad3e,	// (0x0002edab) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
