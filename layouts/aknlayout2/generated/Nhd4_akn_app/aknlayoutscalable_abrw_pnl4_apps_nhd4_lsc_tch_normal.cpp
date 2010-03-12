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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00029400 };

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
0x203f,	// (0x0002b43f) Screen

0x204b,	// (0x0002b44b) application_window

0x2057,	// (0x0002b457) area_bottom_pane_ParamLimits

0x2057,	// (0x0002b457) area_bottom_pane

0x09af,	// (0x00029daf) area_top_pane_ParamLimits

0x09af,	// (0x00029daf) area_top_pane

0xb1d4,	// (0x000345d4) call_video_uplink_pane_ParamLimits

0xb1d4,	// (0x000345d4) call_video_uplink_pane

0x0a24,	// (0x00029e24) main_pane_ParamLimits

0x0a24,	// (0x00029e24) main_pane

0xf038,	// (0x00038438) context_pane

0x4a93,	// (0x0002de93) navi_pane

0x4abb,	// (0x0002debb) popup_cale_events_window_ParamLimits

0x4abb,	// (0x0002debb) popup_cale_events_window

0xf04b,	// (0x0003844b) popup_mup_playback_window

0x4ad3,	// (0x0002ded3) signal_pane

0xcffb,	// (0x000363fb) main_browser_pane

0xdbdf,	// (0x00036fdf) main_burst_pane

0x0dfa,	// (0x0002a1fa) main_calc_pane

0xdbdf,	// (0x00036fdf) main_cale_day_pane

0xcffb,	// (0x000363fb) main_cale_month_pane

0xdbdf,	// (0x00036fdf) main_cale_week_pane

0xdbdf,	// (0x00036fdf) main_call_pane

0xcc7b,	// (0x0003607b) main_call_poc_pane

0xdbdf,	// (0x00036fdf) main_camera_pane

0xdbdf,	// (0x00036fdf) main_chi_dic_pane

0xda6e,	// (0x00036e6e) main_clock_pane

0xcc7b,	// (0x0003607b) main_fmradio_pane

0xdbdf,	// (0x00036fdf) main_graph_messa_pane

0xcc7b,	// (0x0003607b) main_help_pane

0xcffb,	// (0x000363fb) main_im_pane

0xcee4,	// (0x000362e4) main_image_pane_ParamLimits

0xcee4,	// (0x000362e4) main_image_pane

0xcc7b,	// (0x0003607b) main_location2_pane

0xdbdf,	// (0x00036fdf) main_location_pane

0xcc7b,	// (0x0003607b) main_messa_pane

0xcc7b,	// (0x0003607b) main_mp2_pane

0xdbdf,	// (0x00036fdf) main_mp_pane

0xcc7b,	// (0x0003607b) main_msg_pane

0xcc7b,	// (0x0003607b) main_mup_eq_pane

0xcc7b,	// (0x0003607b) main_mup_pane

0xcffb,	// (0x000363fb) main_notes_pane

0xcc7b,	// (0x0003607b) main_pec_pane

0xcc7b,	// (0x0003607b) main_phob_pane

0xcc7b,	// (0x0003607b) main_pinb_pane

0xcc7b,	// (0x0003607b) main_postcard_pane

0xcc7b,	// (0x0003607b) main_qdial_pane

0xdbdf,	// (0x00036fdf) main_skin_pane

0xcc7b,	// (0x0003607b) main_smil2_pane

0xdbdf,	// (0x00036fdf) main_smil_pane

0xdbdf,	// (0x00036fdf) main_video_pane

0xdbdf,	// (0x00036fdf) main_video_tele_pane

0xcee4,	// (0x000362e4) main_viewer_pane_ParamLimits

0xcee4,	// (0x000362e4) main_viewer_pane

0xdbdf,	// (0x00036fdf) main_vorec_pane

0x0e4e,	// (0x0002a24e) popup_blid_sat_info_window_ParamLimits

0x0e4e,	// (0x0002a24e) popup_blid_sat_info_window

0x0ea6,	// (0x0002a2a6) popup_dyc_status_message_window_ParamLimits

0x0ea6,	// (0x0002a2a6) popup_dyc_status_message_window

0x0ebe,	// (0x0002a2be) popup_grid_large_graphic_window_ParamLimits

0x0ebe,	// (0x0002a2be) popup_grid_large_graphic_window

0x0f74,	// (0x0002a374) popup_loc_request_window_ParamLimits

0x0f74,	// (0x0002a374) popup_loc_request_window

0x1072,	// (0x0002a472) popup_wml_address_window_ParamLimits

0x1072,	// (0x0002a472) popup_wml_address_window

0x48d7,	// (0x0002dcd7) call_muted_g1

0x458f,	// (0x0002d98f) popup_call_audio_conf_window_ParamLimits

0x458f,	// (0x0002d98f) popup_call_audio_conf_window

0x48eb,	// (0x0002dceb) popup_call_audio_first_window_ParamLimits

0x48eb,	// (0x0002dceb) popup_call_audio_first_window

0x4961,	// (0x0002dd61) popup_call_audio_in_window_ParamLimits

0x4961,	// (0x0002dd61) popup_call_audio_in_window

0x499d,	// (0x0002dd9d) popup_call_audio_out_window_ParamLimits

0x499d,	// (0x0002dd9d) popup_call_audio_out_window

0x49d7,	// (0x0002ddd7) popup_call_audio_second_window_ParamLimits

0x49d7,	// (0x0002ddd7) popup_call_audio_second_window

0x4a2d,	// (0x0002de2d) popup_call_audio_wait_window_ParamLimits

0x4a2d,	// (0x0002de2d) popup_call_audio_wait_window

0x4a62,	// (0x0002de62) popup_number_entry_window_ParamLimits

0x4a62,	// (0x0002de62) popup_number_entry_window

0xc86a,	// (0x00035c6a) bg_popup_call_pane_cp05_ParamLimits

0xc86a,	// (0x00035c6a) bg_popup_call_pane_cp05

0xc88a,	// (0x00035c8a) popup_number_entry_window_t1

0xc89d,	// (0x00035c9d) popup_number_entry_window_t2

0xc8af,	// (0x00035caf) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x000384d8) popup_number_entry_window_t

0xc8c1,	// (0x00035cc1) text_title_cp2

0xc8d4,	// (0x00035cd4) bg_popup_call_pane_cp_ParamLimits

0xc8d4,	// (0x00035cd4) bg_popup_call_pane_cp

0xc8e2,	// (0x00035ce2) call_thumbnail_pane

0xc8ea,	// (0x00035cea) popup_call_audio_in_window_g1_ParamLimits

0xc8ea,	// (0x00035cea) popup_call_audio_in_window_g1

0xc8f6,	// (0x00035cf6) popup_call_audio_in_window_g2_ParamLimits

0xc8f6,	// (0x00035cf6) popup_call_audio_in_window_g2

0xc902,	// (0x00035d02) popup_call_audio_in_window_g3_ParamLimits

0xc902,	// (0x00035d02) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x000384e1) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x000384e1) popup_call_audio_in_window_g

0xc90e,	// (0x00035d0e) popup_call_audio_in_window_t1_ParamLimits

0xc90e,	// (0x00035d0e) popup_call_audio_in_window_t1

0xc929,	// (0x00035d29) popup_call_audio_in_window_t2_ParamLimits

0xc929,	// (0x00035d29) popup_call_audio_in_window_t2

0xc944,	// (0x00035d44) popup_call_audio_in_window_t3_ParamLimits

0xc944,	// (0x00035d44) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x000384e8) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x000384e8) popup_call_audio_in_window_t

0xc8d4,	// (0x00035cd4) bg_popup_call_pane_cp01_ParamLimits

0xc8d4,	// (0x00035cd4) bg_popup_call_pane_cp01

0xc8e2,	// (0x00035ce2) call_thumbnail_pane_cp02

0xc957,	// (0x00035d57) call_type_pane_cp022

0xc95f,	// (0x00035d5f) popup_call_audio_out_window_g1_ParamLimits

0xc95f,	// (0x00035d5f) popup_call_audio_out_window_g1

0xc971,	// (0x00035d71) popup_call_audio_out_window_g2_ParamLimits

0xc971,	// (0x00035d71) popup_call_audio_out_window_g2

0xc97d,	// (0x00035d7d) popup_call_audio_out_window_g3_ParamLimits

0xc97d,	// (0x00035d7d) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x000384ef) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x000384ef) popup_call_audio_out_window_g

0xc98f,	// (0x00035d8f) popup_call_audio_out_window_t1_ParamLimits

0xc98f,	// (0x00035d8f) popup_call_audio_out_window_t1

0xc9a7,	// (0x00035da7) popup_call_audio_out_window_t2_ParamLimits

0xc9a7,	// (0x00035da7) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x000384f6) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x000384f6) popup_call_audio_out_window_t

0xc9bc,	// (0x00035dbc) bg_popup_call_pane_ParamLimits

0xc9bc,	// (0x00035dbc) bg_popup_call_pane

0x20d2,	// (0x0002b4d2) call_thumbnail_pane_cp_ParamLimits

0x20d2,	// (0x0002b4d2) call_thumbnail_pane_cp

0xca40,	// (0x00035e40) call_type_pane_cp01_ParamLimits

0xca40,	// (0x00035e40) call_type_pane_cp01

0xca84,	// (0x00035e84) popup_call_audio_first_window_g1_ParamLimits

0xca84,	// (0x00035e84) popup_call_audio_first_window_g1

0xcad0,	// (0x00035ed0) popup_call_audio_first_window_g2_ParamLimits

0xcad0,	// (0x00035ed0) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x000384fb) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x000384fb) popup_call_audio_first_window_g

0xcb14,	// (0x00035f14) popup_call_audio_first_window_t1_ParamLimits

0xcb14,	// (0x00035f14) popup_call_audio_first_window_t1

0xcbc0,	// (0x00035fc0) popup_call_audio_first_window_t4_ParamLimits

0xcbc0,	// (0x00035fc0) popup_call_audio_first_window_t4

0xcc4c,	// (0x0003604c) popup_call_audio_first_window_t5_ParamLimits

0xcc4c,	// (0x0003604c) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x00038500) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x00038500) popup_call_audio_first_window_t

0xcc7b,	// (0x0003607b) bg_popup_call_pane_cp02

0xcc85,	// (0x00036085) call_type_pane_cp023

0xcc8d,	// (0x0003608d) popup_call_audio_wait_window_g1

0xcc95,	// (0x00036095) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x00038507) popup_call_audio_wait_window_g

0xcc9d,	// (0x0003609d) popup_call_audio_wait_window_t3

0xccab,	// (0x000360ab) bg_popup_call_pane_cp03_ParamLimits

0xccab,	// (0x000360ab) bg_popup_call_pane_cp03

0xcd0b,	// (0x0003610b) call_thumbnail_pane_cp011_ParamLimits

0xcd0b,	// (0x0003610b) call_thumbnail_pane_cp011

0xcd17,	// (0x00036117) call_type_pane_cp034_ParamLimits

0xcd17,	// (0x00036117) call_type_pane_cp034

0xcd53,	// (0x00036153) popup_call_audio_second_window_g1_ParamLimits

0xcd53,	// (0x00036153) popup_call_audio_second_window_g1

0xcd9d,	// (0x0003619d) popup_call_audio_second_window_g2_ParamLimits

0xcd9d,	// (0x0003619d) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x0003850c) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x0003850c) popup_call_audio_second_window_g

0xcdd9,	// (0x000361d9) popup_call_audio_second_window_t1_ParamLimits

0xcdd9,	// (0x000361d9) popup_call_audio_second_window_t1

0xce5a,	// (0x0003625a) popup_call_audio_second_window_t2_ParamLimits

0xce5a,	// (0x0003625a) popup_call_audio_second_window_t2

0xce90,	// (0x00036290) popup_call_audio_second_window_t3_ParamLimits

0xce90,	// (0x00036290) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x00038511) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x00038511) popup_call_audio_second_window_t

0xcc7b,	// (0x0003607b) bg_popup_call_pane_cp04

0xcec6,	// (0x000362c6) list_conf_pane

0xcece,	// (0x000362ce) popup_call_audio_conf_window_t1

0xcedc,	// (0x000362dc) call_thumbnail_pane_g1

0xcee4,	// (0x000362e4) bg_pinb_pane_ParamLimits

0xcee4,	// (0x000362e4) bg_pinb_pane

0xcef2,	// (0x000362f2) find_pinb_pane

0xcefb,	// (0x000362fb) listscroll_pinb_pane_ParamLimits

0xcefb,	// (0x000362fb) listscroll_pinb_pane

0xcf0a,	// (0x0003630a) pinb_bg_pane_g1

0x20f6,	// (0x0002b4f6) pinb_bg_pane_g2

0x2102,	// (0x0002b502) pinb_bg_pane_g3

0x210e,	// (0x0002b50e) pinb_bg_pane_g4

0x211a,	// (0x0002b51a) pinb_bg_pane_g5

0x2126,	// (0x0002b526) pinb_bg_pane_g6

0x2131,	// (0x0002b531) pinb_bg_pane_g7

0x213c,	// (0x0002b53c) pinb_bg_pane_g8

0x2147,	// (0x0002b547) pinb_bg_pane_g9

0x2151,	// (0x0002b551) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x00038518) pinb_bg_pane_g

0x2166,	// (0x0002b566) grid_pinb_pane

0x216f,	// (0x0002b56f) list_pinb_pane

0x2178,	// (0x0002b578) scroll_pane_cp01_ParamLimits

0x2178,	// (0x0002b578) scroll_pane_cp01

0xcf1c,	// (0x0003631c) find_pinb_pane_g1_ParamLimits

0xcf1c,	// (0x0003631c) find_pinb_pane_g1

0xcf34,	// (0x00036334) find_pinb_pane_t1

0xcf46,	// (0x00036346) find_pinb_pane_t2

0x0001,

0xf132,	// (0x00038532) find_pinb_pane_t

0xcf5b,	// (0x0003635b) input_focus_pane_cp01_ParamLimits

0xcf5b,	// (0x0003635b) input_focus_pane_cp01

0x218a,	// (0x0002b58a) cell_pinb_pane_ParamLimits

0x218a,	// (0x0002b58a) cell_pinb_pane

0x21bc,	// (0x0002b5bc) cell_pinb_pane_g1_ParamLimits

0x21bc,	// (0x0002b5bc) cell_pinb_pane_g1

0x21cc,	// (0x0002b5cc) cell_pinb_pane_g2_ParamLimits

0x21cc,	// (0x0002b5cc) cell_pinb_pane_g2

0xcf67,	// (0x00036367) cell_pinb_pane_g3_ParamLimits

0xcf67,	// (0x00036367) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x00038537) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x00038537) cell_pinb_pane_g

0xcc7b,	// (0x0003607b) grid_highlight_pane_cp01

0x21d8,	// (0x0002b5d8) list_pinb_item_pane_ParamLimits

0x21d8,	// (0x0002b5d8) list_pinb_item_pane

0xcc7b,	// (0x0003607b) list_highlight_pane_cp02

0xcf73,	// (0x00036373) list_pinb_item_pane_g1_ParamLimits

0xcf73,	// (0x00036373) list_pinb_item_pane_g1

0xcf80,	// (0x00036380) list_pinb_item_pane_g2_ParamLimits

0xcf80,	// (0x00036380) list_pinb_item_pane_g2

0x21ec,	// (0x0002b5ec) list_pinb_item_pane_g3_ParamLimits

0x21ec,	// (0x0002b5ec) list_pinb_item_pane_g3

0xcf8c,	// (0x0003638c) list_pinb_item_pane_g4_ParamLimits

0xcf8c,	// (0x0003638c) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x0003853e) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x0003853e) list_pinb_item_pane_g

0xcf98,	// (0x00036398) list_pinb_item_pane_t1_ParamLimits

0xcf98,	// (0x00036398) list_pinb_item_pane_t1

0x0bb8,	// (0x00029fb8) calc_display_pane

0x0be0,	// (0x00029fe0) calc_paper_pane

0x0c03,	// (0x0002a003) grid_calc_pane

0xcc7b,	// (0x0003607b) bg_list_pane_cp01

0x21fd,	// (0x0002b5fd) clock_g1

0x2205,	// (0x0002b605) clock_g2

0x0001,

0xf147,	// (0x00038547) clock_g

0x220d,	// (0x0002b60d) clock_t1_ParamLimits

0x220d,	// (0x0002b60d) clock_t1

0x2222,	// (0x0002b622) clock_t2_ParamLimits

0x2222,	// (0x0002b622) clock_t2

0x2234,	// (0x0002b634) clock_t3_ParamLimits

0x2234,	// (0x0002b634) clock_t3

0x2246,	// (0x0002b646) clock_t4_ParamLimits

0x2246,	// (0x0002b646) clock_t4

0x2258,	// (0x0002b658) clock_t5_ParamLimits

0x2258,	// (0x0002b658) clock_t5

0x226d,	// (0x0002b66d) clock_t6_ParamLimits

0x226d,	// (0x0002b66d) clock_t6

0x227f,	// (0x0002b67f) clock_t7_ParamLimits

0x227f,	// (0x0002b67f) clock_t7

0x2291,	// (0x0002b691) clock_t8_ParamLimits

0x2291,	// (0x0002b691) clock_t8

0x22a5,	// (0x0002b6a5) clock_t9_ParamLimits

0x22a5,	// (0x0002b6a5) clock_t9

0x0008,

0xf14c,	// (0x0003854c) clock_t_ParamLimits

0xf14c,	// (0x0003854c) clock_t

0xcfaf,	// (0x000363af) popup_clock_analogue_window_cp02

0xcfaf,	// (0x000363af) popup_clock_digital_window_cp01

0xcfb7,	// (0x000363b7) listscroll_help_pane

0xcc7b,	// (0x0003607b) phob_pre_status_pane

0xcfc1,	// (0x000363c1) grid_qdial_pane

0xcc7b,	// (0x0003607b) listscroll_mce_pane

0xcfcb,	// (0x000363cb) bg_notes_pane

0xcfd9,	// (0x000363d9) list_notes_pane

0x22b9,	// (0x0002b6b9) scroll_pane_cp06

0xcfe7,	// (0x000363e7) bg_calc_paper_pane

0xb212,	// (0x00034612) list_calc_pane

0xcffb,	// (0x000363fb) bg_calc_display_pane

0x0c31,	// (0x0002a031) calc_display_pane_t1

0x0c43,	// (0x0002a043) calc_display_pane_t2

0xb22c,	// (0x0003462c) calc_display_pane_t3

0x0002,

0xf15f,	// (0x0003855f) calc_display_pane_t

0x0c55,	// (0x0002a055) cell_calc_pane_ParamLimits

0x0c55,	// (0x0002a055) cell_calc_pane

0xd007,	// (0x00036407) bg_calc_paper_pane_g1

0xd013,	// (0x00036413) bg_calc_paper_pane_g2

0xd01f,	// (0x0003641f) bg_calc_paper_pane_g3

0xd02b,	// (0x0003642b) bg_calc_paper_pane_g4

0xd037,	// (0x00036437) bg_calc_paper_pane_g5

0x22cd,	// (0x0002b6cd) bg_calc_paper_pane_g6

0x22de,	// (0x0002b6de) bg_calc_paper_pane_g7

0x22ef,	// (0x0002b6ef) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x00038566) bg_calc_paper_pane_g

0x2302,	// (0x0002b702) calc_bg_paper_pane_g9

0x2315,	// (0x0002b715) list_calc_item_pane_ParamLimits

0x2315,	// (0x0002b715) list_calc_item_pane

0xd043,	// (0x00036443) list_calc_item_pane_g1

0xb23e,	// (0x0003463e) list_calc_item_pane_t1_ParamLimits

0xb23e,	// (0x0003463e) list_calc_item_pane_t1

0x0c8c,	// (0x0002a08c) list_calc_item_pane_t2_ParamLimits

0x0c8c,	// (0x0002a08c) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x00038577) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x00038577) list_calc_item_pane_t

0xd050,	// (0x00036450) cell_calc_pane_g1

0xd05a,	// (0x0003645a) grid_highlight_pane_cp02

0xd07c,	// (0x0003647c) bg_calc_display_pane_g1

0xb250,	// (0x00034650) bg_calc_display_pane_g2

0xd085,	// (0x00036485) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x00038581) bg_calc_display_pane_g

0x0cbe,	// (0x0002a0be) cell_qdial_pane_ParamLimits

0x0cbe,	// (0x0002a0be) cell_qdial_pane

0x232d,	// (0x0002b72d) cell_qdial_pane_g1_ParamLimits

0x232d,	// (0x0002b72d) cell_qdial_pane_g1

0x2343,	// (0x0002b743) cell_qdial_pane_g2_ParamLimits

0x2343,	// (0x0002b743) cell_qdial_pane_g2

0xd08e,	// (0x0003648e) cell_qdial_pane_g3_ParamLimits

0xd08e,	// (0x0003648e) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x00038588) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x00038588) cell_qdial_pane_g

0x236a,	// (0x0002b76a) cell_qdial_pane_t1_ParamLimits

0x236a,	// (0x0002b76a) cell_qdial_pane_t1

0x2382,	// (0x0002b782) cell_qdial_pane_t2_ParamLimits

0x2382,	// (0x0002b782) cell_qdial_pane_t2

0x2395,	// (0x0002b795) cell_qdial_pane_t3_ParamLimits

0x2395,	// (0x0002b795) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x00038591) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x00038591) cell_qdial_pane_t

0xcc7b,	// (0x0003607b) grid_highlight_pane_cp04

0xd09a,	// (0x0003649a) thumbnail_qdial_pane_ParamLimits

0xd09a,	// (0x0003649a) thumbnail_qdial_pane

0xd0f6,	// (0x000364f6) list_help_pane

0xd0ff,	// (0x000364ff) scroll_pane_cp02

0x23a8,	// (0x0002b7a8) help_list_pane_t1_ParamLimits

0x23a8,	// (0x0002b7a8) help_list_pane_t1

0xb25a,	// (0x0003465a) bg_notes_pane_g2

0xb262,	// (0x00034662) bg_notes_pane_g3

0xb26a,	// (0x0003466a) notes_bg_pane_g1

0xb272,	// (0x00034672) notes_bg_pane_g4

0xb27a,	// (0x0003467a) notes_bg_pane_g5

0xb282,	// (0x00034682) notes_bg_pane_g6

0xb28a,	// (0x0003468a) notes_bg_pane_g7

0xb292,	// (0x00034692) notes_bg_pane_g8

0xb29a,	// (0x0003469a) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x000385af) notes_bg_pane_g

0x23c8,	// (0x0002b7c8) list_notes_text_pane_ParamLimits

0x23c8,	// (0x0002b7c8) list_notes_text_pane

0xd108,	// (0x00036508) list_notes_text_pane_g1

0x23df,	// (0x0002b7df) list_notes_text_pane_t1

0xcffb,	// (0x000363fb) listscroll_cale_week_pane

0x240a,	// (0x0002b80a) bg_cale_heading_pane

0xd122,	// (0x00036522) bg_cale_pane_cp01

0x2422,	// (0x0002b822) cale_week_corner_pane

0x2433,	// (0x0002b833) cale_week_day_heading_pane

0x244b,	// (0x0002b84b) cale_week_scroll_pane_g1

0x2460,	// (0x0002b860) cale_week_scroll_pane_g2

0x2471,	// (0x0002b871) cale_week_scroll_pane_g3

0x2482,	// (0x0002b882) cale_week_scroll_pane_g4

0x2493,	// (0x0002b893) cale_week_scroll_pane_g5

0x24a6,	// (0x0002b8a6) cale_week_scroll_pane_g6

0x24b9,	// (0x0002b8b9) cale_week_scroll_pane_g7

0x24cc,	// (0x0002b8cc) cale_week_scroll_pane_g8

0x24df,	// (0x0002b8df) cale_week_scroll_pane_g9

0x24f0,	// (0x0002b8f0) cale_week_scroll_pane_g10

0x2501,	// (0x0002b901) cale_week_scroll_pane_g11

0x2512,	// (0x0002b912) cale_week_scroll_pane_g12

0x2523,	// (0x0002b923) cale_week_scroll_pane_g13

0x2534,	// (0x0002b934) cale_week_scroll_pane_g14

0x2545,	// (0x0002b945) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x000385be) cale_week_scroll_pane_g

0x255a,	// (0x0002b95a) cale_week_time_pane

0x256d,	// (0x0002b96d) grid_cale_week_pane

0x2582,	// (0x0002b982) scroll_pane_cp08

0x259c,	// (0x0002b99c) cell_cale_week_pane_ParamLimits

0x259c,	// (0x0002b99c) cell_cale_week_pane

0x25dc,	// (0x0002b9dc) cale_week_day_heading_pane_t1

0x25f0,	// (0x0002b9f0) cale_week_day_heading_pane_t2

0x2604,	// (0x0002ba04) cale_week_day_heading_pane_t3

0x2618,	// (0x0002ba18) cale_week_day_heading_pane_t4

0x262c,	// (0x0002ba2c) cale_week_day_heading_pane_t5

0x2640,	// (0x0002ba40) cale_week_day_heading_pane_t6

0x2656,	// (0x0002ba56) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x000385dd) cale_week_day_heading_pane_t

0xd14d,	// (0x0003654d) bg_cale_side_pane

0x0cd2,	// (0x0002a0d2) cale_week_time_pane_t1

0x0cea,	// (0x0002a0ea) cale_week_time_pane_t2

0x0d02,	// (0x0002a102) cale_week_time_pane_t3

0x0d1a,	// (0x0002a11a) cale_week_time_pane_t4

0x0d32,	// (0x0002a132) cale_week_time_pane_t5

0x0d4a,	// (0x0002a14a) cale_week_time_pane_t6

0x0d62,	// (0x0002a162) cale_week_time_pane_t7

0x0d7a,	// (0x0002a17a) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x000385ec) cale_week_time_pane_t

0x266a,	// (0x0002ba6a) cell_cale_week_pane_g2

0x2683,	// (0x0002ba83) cell_cale_week_pane_g3_ParamLimits

0x2683,	// (0x0002ba83) cell_cale_week_pane_g3

0xd15b,	// (0x0003655b) grid_highlight_pane_cp07

0xd163,	// (0x00036563) listscroll_gms_pane

0xd16d,	// (0x0003656d) grid_gms_pane

0xd176,	// (0x00036576) listscroll_gms_pane_g1

0xd17e,	// (0x0003657e) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x000385fd) listscroll_gms_pane_g

0x269b,	// (0x0002ba9b) scroll_pane_cp010

0x26a6,	// (0x0002baa6) cell_gms_pane_ParamLimits

0x26a6,	// (0x0002baa6) cell_gms_pane

0x26b8,	// (0x0002bab8) cell_gms_pane_g1

0xd186,	// (0x00036586) cell_gms_pane_g2

0xd108,	// (0x00036508) cell_gms_pane_g3

0xd18e,	// (0x0003658e) cell_gms_pane_g4

0x0003,

0xf202,	// (0x00038602) cell_gms_pane_g

0xd197,	// (0x00036597) grid_highlight_pane_cp09

0x487f,	// (0x0002dc7f) phob_pre_status_pane_g1

0x4887,	// (0x0002dc87) phob_pre_status_pane_g2

0x488f,	// (0x0002dc8f) phob_pre_status_pane_g3

0x4897,	// (0x0002dc97) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x000389f1) phob_pre_status_pane_g

0x48a9,	// (0x0002dca9) phob_pre_status_pane_t1

0x48b7,	// (0x0002dcb7) phob_pre_status_pane_t2

0x48c7,	// (0x0002dcc7) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x000389fc) phob_pre_status_pane_t

0xcc7b,	// (0x0003607b) bg_list_pane_cp05

0x0d92,	// (0x0002a192) grid_vorec_pane

0xb2aa,	// (0x000346aa) vorec_t1

0xb2b8,	// (0x000346b8) vorec_t2

0xb2c6,	// (0x000346c6) vorec_t3

0xb2d4,	// (0x000346d4) vorec_t4

0xb2e2,	// (0x000346e2) vorec_t5

0xb2f0,	// (0x000346f0) vorec_t6

0x0006,

0xf20b,	// (0x0003860b) vorec_t

0xb30c,	// (0x0003470c) wait_bar_pane_cp01

0xd19f,	// (0x0003659f) cell_vorec_pane_ParamLimits

0xd19f,	// (0x0003659f) cell_vorec_pane

0xd1b2,	// (0x000365b2) cell_vorec_pane_g1

0xcc7b,	// (0x0003607b) grid_highlight_pane_cp05

0x26d8,	// (0x0002bad8) cams_zoom_pane

0x26e7,	// (0x0002bae7) image_vga_pane

0x2701,	// (0x0002bb01) main_camera_pane_g1

0x2713,	// (0x0002bb13) main_camera_pane_g2

0x2725,	// (0x0002bb25) main_camera_pane_g3

0x2737,	// (0x0002bb37) main_camera_pane_g4

0x2749,	// (0x0002bb49) main_camera_pane_g5

0x275b,	// (0x0002bb5b) main_camera_pane_g6

0x276d,	// (0x0002bb6d) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0003861a) main_camera_pane_g

0x277f,	// (0x0002bb7f) main_camera_pane_t1

0x2795,	// (0x0002bb95) main_camera_pane_t2

0x0001,

0xf22b,	// (0x0003862b) main_camera_pane_t

0x27d1,	// (0x0002bbd1) cams_zoom_pane_cp_ParamLimits

0x27d1,	// (0x0002bbd1) cams_zoom_pane_cp

0x27f9,	// (0x0002bbf9) image_cif_pane_ParamLimits

0x27f9,	// (0x0002bbf9) image_cif_pane

0x2834,	// (0x0002bc34) image_subqcif_pane

0x283c,	// (0x0002bc3c) main_video_pane_g1_ParamLimits

0x283c,	// (0x0002bc3c) main_video_pane_g1

0x2860,	// (0x0002bc60) main_video_pane_g2_ParamLimits

0x2860,	// (0x0002bc60) main_video_pane_g2

0x2896,	// (0x0002bc96) main_video_pane_g3_ParamLimits

0x2896,	// (0x0002bc96) main_video_pane_g3

0x28c6,	// (0x0002bcc6) main_video_pane_g4_ParamLimits

0x28c6,	// (0x0002bcc6) main_video_pane_g4

0x28f6,	// (0x0002bcf6) main_video_pane_g5_ParamLimits

0x28f6,	// (0x0002bcf6) main_video_pane_g5

0xd1c8,	// (0x000365c8) main_video_pane_g6_ParamLimits

0xd1c8,	// (0x000365c8) main_video_pane_g6

0x0006,

0xf230,	// (0x00038630) main_video_pane_g_ParamLimits

0xf230,	// (0x00038630) main_video_pane_g

0x2921,	// (0x0002bd21) main_video_pane_t1_ParamLimits

0x2921,	// (0x0002bd21) main_video_pane_t1

0xd1e2,	// (0x000365e2) cams_zoom_pane_g1

0xd1eb,	// (0x000365eb) cams_zoom_pane_g2

0xd1f4,	// (0x000365f4) cams_zoom_pane_g3

0xd1fd,	// (0x000365fd) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x0003863f) cams_zoom_pane_g

0x297e,	// (0x0002bd7e) grid_cams_pane

0x2998,	// (0x0002bd98) linegrid_cams_pane

0x29ab,	// (0x0002bdab) cell_cams_pane_ParamLimits

0x29ab,	// (0x0002bdab) cell_cams_pane

0xd206,	// (0x00036606) cams_burst_image_pane

0xd20e,	// (0x0003660e) cell_cams_pane_g1

0xcc7b,	// (0x0003607b) grid_highlight_pane_cp03

0xd050,	// (0x00036450) mp_bg_pane_g1

0xcc7b,	// (0x0003607b) bg_list_pane_cp03

0xef4f,	// (0x0003834f) bg_mp_pane

0xef57,	// (0x00038357) grid_mp_pane

0xef5f,	// (0x0003835f) media_player_g1

0xef67,	// (0x00038367) media_player_t1

0xef75,	// (0x00038375) media_player_t2

0xef83,	// (0x00038383) media_player_t3

0xef91,	// (0x00038391) media_player_t4

0xef9f,	// (0x0003839f) media_player_t5

0xefad,	// (0x000383ad) media_player_t6

0xefbb,	// (0x000383bb) media_player_t7

0x0006,

0xf5db,	// (0x000389db) media_player_t

0xefc9,	// (0x000383c9) wait_bar_pane_cp02

0xf5c0,	// (0x000389c0) main_usb_pane_t

0x4876,	// (0x0002dc76) cell_mp_pane

0xd050,	// (0x00036450) cell_mp_pane_g1

0xcc7b,	// (0x0003607b) grid_highlight_pane_cp06

0xd2d3,	// (0x000366d3) grid_skin_colour_pane

0xd2db,	// (0x000366db) list_highlight_pane_cp03

0x2a1d,	// (0x0002be1d) skin_g1

0xd2e3,	// (0x000366e3) skin_t1

0xd2f2,	// (0x000366f2) skin_t2

0x0001,

0xf274,	// (0x00038674) skin_t

0x2a25,	// (0x0002be25) cell_skin_colour_pane_ParamLimits

0x2a25,	// (0x0002be25) cell_skin_colour_pane

0xd300,	// (0x00036700) cell_skin_colour_pane_g1

0x2a9e,	// (0x0002be9e) call_video_g1_ParamLimits

0x2a9e,	// (0x0002be9e) call_video_g1

0x2aba,	// (0x0002beba) call_video_g2_ParamLimits

0x2aba,	// (0x0002beba) call_video_g2

0x0001,

0xf279,	// (0x00038679) call_video_g_ParamLimits

0xf279,	// (0x00038679) call_video_g

0x2b0c,	// (0x0002bf0c) call_video_uplink_pane_cp1_ParamLimits

0x2b0c,	// (0x0002bf0c) call_video_uplink_pane_cp1

0xd312,	// (0x00036712) call_video_uplink_pane_cp2

0x2bab,	// (0x0002bfab) video_down_crop_pane_ParamLimits

0x2bab,	// (0x0002bfab) video_down_crop_pane

0x2c94,	// (0x0002c094) video_down_pane_ParamLimits

0x2c94,	// (0x0002c094) video_down_pane

0xd31a,	// (0x0003671a) video_down_subqcif_pane_ParamLimits

0xd31a,	// (0x0003671a) video_down_subqcif_pane

0xd332,	// (0x00036732) video_down_subqcif_pane_cp_ParamLimits

0xd332,	// (0x00036732) video_down_subqcif_pane_cp

0xd358,	// (0x00036758) im_reading_pane_ParamLimits

0xd358,	// (0x00036758) im_reading_pane

0x2da2,	// (0x0002c1a2) im_writing_pane_ParamLimits

0x2da2,	// (0x0002c1a2) im_writing_pane

0x2db8,	// (0x0002c1b8) im_reading_pane_t1

0xd372,	// (0x00036772) list_im_pane

0xd383,	// (0x00036783) scroll_pane_cp07

0x2df4,	// (0x0002c1f4) im_writing_pane_t1_ParamLimits

0x2df4,	// (0x0002c1f4) im_writing_pane_t1

0xd39c,	// (0x0003679c) im_writing_pane_t2_ParamLimits

0xd39c,	// (0x0003679c) im_writing_pane_t2

0x0001,

0xf283,	// (0x00038683) im_writing_pane_t_ParamLimits

0xf283,	// (0x00038683) im_writing_pane_t

0xcc7b,	// (0x0003607b) input_focus_pane_cp04

0xcc7b,	// (0x0003607b) input_focus_pane_cp05

0x2e09,	// (0x0002c209) list_im_single_pane_ParamLimits

0x2e09,	// (0x0002c209) list_im_single_pane

0x2e1f,	// (0x0002c21f) list_single_im_pane_t1

0x4836,	// (0x0002dc36) blid_accuracy_pane

0x483e,	// (0x0002dc3e) blid_compass_pane

0x4848,	// (0x0002dc48) main_location_t1

0x4858,	// (0x0002dc58) main_location_t2

0x4868,	// (0x0002dc68) main_location_t3

0x0002,

0xf5ea,	// (0x000389ea) main_location_t

0xcc7b,	// (0x0003607b) aid_levels_location

0xd050,	// (0x00036450) blid_accuracy_pane_g1

0xd050,	// (0x00036450) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x000386e5) blid_accuracy_pane_g

0xd3e4,	// (0x000367e4) wml_content_pane

0xd422,	// (0x00036822) wml_button_pane_ParamLimits

0xd422,	// (0x00036822) wml_button_pane

0x2e2e,	// (0x0002c22e) wml_list_single_large_pane_ParamLimits

0x2e2e,	// (0x0002c22e) wml_list_single_large_pane

0x2e45,	// (0x0002c245) wml_list_single_medium_pane_ParamLimits

0x2e45,	// (0x0002c245) wml_list_single_medium_pane

0x2e5d,	// (0x0002c25d) wml_list_single_small_pane_ParamLimits

0x2e5d,	// (0x0002c25d) wml_list_single_small_pane

0xd436,	// (0x00036836) wml_selection_box_pane_ParamLimits

0xd436,	// (0x00036836) wml_selection_box_pane

0xd449,	// (0x00036849) wml_list_single_pane_t1

0xd458,	// (0x00036858) wml_list_single_medium_pane_t1

0xd467,	// (0x00036867) wml_list_single_large_pane_t1

0xd476,	// (0x00036876) input_focus_pane_cp02_ParamLimits

0xd476,	// (0x00036876) input_focus_pane_cp02

0xd489,	// (0x00036889) wml_selection_box_pane_g1

0xd492,	// (0x00036892) wml_selection_box_pane_t1_ParamLimits

0xd492,	// (0x00036892) wml_selection_box_pane_t1

0xcee4,	// (0x000362e4) bg_wml_button_pane_ParamLimits

0xcee4,	// (0x000362e4) bg_wml_button_pane

0xd4aa,	// (0x000368aa) wml_button_pane_g1

0xd4b2,	// (0x000368b2) wml_button_pane_t1

0xd4aa,	// (0x000368aa) wml_button_bg_pane_g1

0xd4c2,	// (0x000368c2) wml_button_bg_pane_g2

0xd4ca,	// (0x000368ca) wml_button_bg_pane_g3

0xd4d2,	// (0x000368d2) wml_button_bg_pane_g4

0xd4da,	// (0x000368da) wml_button_bg_pane_g5

0xd4e2,	// (0x000368e2) wml_button_bg_pane_g6

0xd4ea,	// (0x000368ea) wml_button_bg_pane_g7

0xd4f2,	// (0x000368f2) wml_button_bg_pane_g8

0xd4fa,	// (0x000368fa) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x00038688) wml_button_bg_pane_g

0x2e7b,	// (0x0002c27b) bg_list_pane_cp02

0xd502,	// (0x00036902) mce_header_pane_ParamLimits

0xd502,	// (0x00036902) mce_header_pane

0xd518,	// (0x00036918) mce_icon_pane

0xd518,	// (0x00036918) mce_image_pane

0xd521,	// (0x00036921) mce_text_pane_ParamLimits

0xd521,	// (0x00036921) mce_text_pane

0x2e83,	// (0x0002c283) scroll_pane_cp03

0xd41a,	// (0x0003681a) scroll_pane_cp04

0xd534,	// (0x00036934) scroll_pane_cp05_ParamLimits

0xd534,	// (0x00036934) scroll_pane_cp05

0x2e8d,	// (0x0002c28d) mce_header_field_pane_ParamLimits

0x2e8d,	// (0x0002c28d) mce_header_field_pane

0x2ea4,	// (0x0002c2a4) mce_header_field_pane_2_ParamLimits

0x2ea4,	// (0x0002c2a4) mce_header_field_pane_2

0x2eba,	// (0x0002c2ba) mce_header_field_pane_3

0x2ec2,	// (0x0002c2c2) list_single_mce_message_pane_ParamLimits

0x2ec2,	// (0x0002c2c2) list_single_mce_message_pane

0x2eda,	// (0x0002c2da) list_single_mce_smart_pane_ParamLimits

0x2eda,	// (0x0002c2da) list_single_mce_smart_pane

0xd540,	// (0x00036940) input_focus_pane_cp03

0xd549,	// (0x00036949) list_header_data_pane

0x2efd,	// (0x0002c2fd) mce_header_field_pane_t1

0x2f0d,	// (0x0002c30d) list_single_mce_header_pane_ParamLimits

0x2f0d,	// (0x0002c30d) list_single_mce_header_pane

0xd551,	// (0x00036951) list_single_mce_header_pane_t1

0xd560,	// (0x00036960) list_single_mce_message_pane_g1

0xd568,	// (0x00036968) list_single_mce_message_pane_t1

0x2f3f,	// (0x0002c33f) bg_cale_heading_pane_cp01_ParamLimits

0x2f3f,	// (0x0002c33f) bg_cale_heading_pane_cp01

0xd576,	// (0x00036976) bg_cale_pane_cp02_ParamLimits

0xd576,	// (0x00036976) bg_cale_pane_cp02

0x2f62,	// (0x0002c362) cale_month_corner_pane

0x2f78,	// (0x0002c378) cale_month_day_heading_pane_ParamLimits

0x2f78,	// (0x0002c378) cale_month_day_heading_pane

0x2fab,	// (0x0002c3ab) cale_month_pane_g1_ParamLimits

0x2fab,	// (0x0002c3ab) cale_month_pane_g1

0x2fc7,	// (0x0002c3c7) cale_month_pane_g2_ParamLimits

0x2fc7,	// (0x0002c3c7) cale_month_pane_g2

0x2fe2,	// (0x0002c3e2) cale_month_pane_g3_ParamLimits

0x2fe2,	// (0x0002c3e2) cale_month_pane_g3

0x300e,	// (0x0002c40e) cale_month_pane_g4_ParamLimits

0x300e,	// (0x0002c40e) cale_month_pane_g4

0x303a,	// (0x0002c43a) cale_month_pane_g5_ParamLimits

0x303a,	// (0x0002c43a) cale_month_pane_g5

0x306e,	// (0x0002c46e) cale_month_pane_g6_ParamLimits

0x306e,	// (0x0002c46e) cale_month_pane_g6

0x30aa,	// (0x0002c4aa) cale_month_pane_g7_ParamLimits

0x30aa,	// (0x0002c4aa) cale_month_pane_g7

0x30e6,	// (0x0002c4e6) cale_month_pane_g8_ParamLimits

0x30e6,	// (0x0002c4e6) cale_month_pane_g8

0x3122,	// (0x0002c522) cale_month_pane_g9_ParamLimits

0x3122,	// (0x0002c522) cale_month_pane_g9

0x315c,	// (0x0002c55c) cale_month_pane_g10_ParamLimits

0x315c,	// (0x0002c55c) cale_month_pane_g10

0x3196,	// (0x0002c596) cale_month_pane_g11_ParamLimits

0x3196,	// (0x0002c596) cale_month_pane_g11

0x31d0,	// (0x0002c5d0) cale_month_pane_g12_ParamLimits

0x31d0,	// (0x0002c5d0) cale_month_pane_g12

0x320a,	// (0x0002c60a) cale_month_pane_g13_ParamLimits

0x320a,	// (0x0002c60a) cale_month_pane_g13

0x000c,

0xf29b,	// (0x0003869b) cale_month_pane_g_ParamLimits

0xf29b,	// (0x0003869b) cale_month_pane_g

0x3244,	// (0x0002c644) cale_month_week_pane

0x3257,	// (0x0002c657) grid_cale_month_pane_ParamLimits

0x3257,	// (0x0002c657) grid_cale_month_pane

0x3285,	// (0x0002c685) cale_month_day_heading_pane_t1

0x32e3,	// (0x0002c6e3) cale_month_day_heading_pane_t2

0x3348,	// (0x0002c748) cale_month_day_heading_pane_t3

0x33ad,	// (0x0002c7ad) cale_month_day_heading_pane_t4

0x3412,	// (0x0002c812) cale_month_day_heading_pane_t5

0x3487,	// (0x0002c887) cale_month_day_heading_pane_t6

0x34fc,	// (0x0002c8fc) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x000386b6) cale_month_day_heading_pane_t

0xd14d,	// (0x0003654d) bg_cale_side_pane_cp01

0x3571,	// (0x0002c971) cale_month_week_pane_t1

0x3588,	// (0x0002c988) cale_month_week_pane_t2

0x359f,	// (0x0002c99f) cale_month_week_pane_t3

0x35b6,	// (0x0002c9b6) cale_month_week_pane_t4

0x35cd,	// (0x0002c9cd) cale_month_week_pane_t5

0x35e4,	// (0x0002c9e4) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x000386c5) cale_month_week_pane_t

0x35fb,	// (0x0002c9fb) cell_cale_month_pane_ParamLimits

0x35fb,	// (0x0002c9fb) cell_cale_month_pane

0xb314,	// (0x00034714) cell_cale_month_pane_g1

0x0d9c,	// (0x0002a19c) cell_cale_month_pane_t1_ParamLimits

0x0d9c,	// (0x0002a19c) cell_cale_month_pane_t1

0xd15b,	// (0x0003655b) grid_highlight_pane_cp08

0xd050,	// (0x00036450) main_smil_g1

0x36d1,	// (0x0002cad1) smil_status_pane

0xd5d5,	// (0x000369d5) smil_text_pane

0xee67,	// (0x00038267) bg_popup_call3_rect_pane_g8

0xee6f,	// (0x0003826f) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x0003897e) bg_popup_call3_rect_pane_g

0xf0b2,	// (0x000384b2) smil_status_volume_pane_g1

0xd5df,	// (0x000369df) smil_status_pane_t1

0xb451,	// (0x00034851) volume_smil_pane

0xd5f6,	// (0x000369f6) list_smil_text_pane

0x36e6,	// (0x0002cae6) scroll_pane_cp011

0x36f1,	// (0x0002caf1) smil_text_list_pane_t1_ParamLimits

0x36f1,	// (0x0002caf1) smil_text_list_pane_t1

0xb320,	// (0x00034720) aid_volume_smil_ParamLimits

0xb320,	// (0x00034720) aid_volume_smil

0xd050,	// (0x00036450) smil_volume_pane_g1

0xd050,	// (0x00036450) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x000386e5) smil_volume_pane_g

0xcffb,	// (0x000363fb) listscroll_cale_day_pane

0xd600,	// (0x00036a00) bg_cale_pane

0xd618,	// (0x00036a18) list_cale_pane

0xd629,	// (0x00036a29) scroll_pane_cp09

0xd63a,	// (0x00036a3a) cale_bg_pane_g1

0xd642,	// (0x00036a42) cale_bg_pane_g2

0xd64a,	// (0x00036a4a) cale_bg_pane_g3

0xd652,	// (0x00036a52) cale_bg_pane_g4

0xd65a,	// (0x00036a5a) cale_bg_pane_g5

0xd662,	// (0x00036a62) cale_bg_pane_g6

0xd66a,	// (0x00036a6a) cale_bg_pane_g7

0xd672,	// (0x00036a72) cale_bg_pane_g8

0xd67a,	// (0x00036a7a) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x000386ea) cale_bg_pane_g

0x3745,	// (0x0002cb45) list_cale_time_pane_ParamLimits

0x3745,	// (0x0002cb45) list_cale_time_pane

0x375a,	// (0x0002cb5a) list_cale_time_pane_g1_ParamLimits

0x375a,	// (0x0002cb5a) list_cale_time_pane_g1

0xd682,	// (0x00036a82) list_cale_time_pane_g2_ParamLimits

0xd682,	// (0x00036a82) list_cale_time_pane_g2

0x3766,	// (0x0002cb66) list_cale_time_pane_g3_ParamLimits

0x3766,	// (0x0002cb66) list_cale_time_pane_g3

0x3782,	// (0x0002cb82) list_cale_time_pane_g4_ParamLimits

0x3782,	// (0x0002cb82) list_cale_time_pane_g4

0x3790,	// (0x0002cb90) list_cale_time_pane_g5_ParamLimits

0x3790,	// (0x0002cb90) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x000386fd) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x000386fd) list_cale_time_pane_g

0x379e,	// (0x0002cb9e) list_cale_time_pane_t1_ParamLimits

0x379e,	// (0x0002cb9e) list_cale_time_pane_t1

0x37c6,	// (0x0002cbc6) list_cale_time_pane_t2_ParamLimits

0x37c6,	// (0x0002cbc6) list_cale_time_pane_t2

0x3af3,	// (0x0002cef3) aid_blid_cardinal_pane

0x3b31,	// (0x0002cf31) compass_pane_t4

0x37ee,	// (0x0002cbee) list_cale_time_pane_t4_ParamLimits

0x37ee,	// (0x0002cbee) list_cale_time_pane_t4

0x3b3f,	// (0x0002cf3f) compass_pane_t5

0x3b4d,	// (0x0002cf4d) compass_pane_t6

0x3b5b,	// (0x0002cf5b) compass_pane_t7

0xdb31,	// (0x00036f31) navi_pane_cc_t1

0xdc86,	// (0x00037086) aid_phob_thumbnail_center_pane

0x424a,	// (0x0002d64a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x0003870a) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x0003870a) list_cale_time_pane_t

0xc8d4,	// (0x00035cd4) bg_popup_window_pane_cp02_ParamLimits

0xc8d4,	// (0x00035cd4) bg_popup_window_pane_cp02

0xd69c,	// (0x00036a9c) heading_pane_cp01_ParamLimits

0xd69c,	// (0x00036a9c) heading_pane_cp01

0xd6a8,	// (0x00036aa8) loc_req_pane_ParamLimits

0xd6a8,	// (0x00036aa8) loc_req_pane

0xd6b8,	// (0x00036ab8) loc_type_pane_ParamLimits

0xd6b8,	// (0x00036ab8) loc_type_pane

0xd6ca,	// (0x00036aca) loc_type_pane_t1_ParamLimits

0xd6ca,	// (0x00036aca) loc_type_pane_t1

0xd6dc,	// (0x00036adc) loc_type_pane_t2_ParamLimits

0xd6dc,	// (0x00036adc) loc_type_pane_t2

0xd6ee,	// (0x00036aee) loc_type_pane_t3_ParamLimits

0xd6ee,	// (0x00036aee) loc_type_pane_t3

0x0002,

0xf311,	// (0x00038711) loc_type_pane_t_ParamLimits

0xf311,	// (0x00038711) loc_type_pane_t

0xd700,	// (0x00036b00) list_loc_req_pane

0xd70a,	// (0x00036b0a) scroll_pane_cp012

0x3816,	// (0x0002cc16) list_single_loc_request_popup_menu_pane_ParamLimits

0x3816,	// (0x0002cc16) list_single_loc_request_popup_menu_pane

0xd715,	// (0x00036b15) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd715,	// (0x00036b15) list_single_loc_request_popup_menu_pane_g1

0xd721,	// (0x00036b21) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd721,	// (0x00036b21) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00038718) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00038718) list_single_loc_request_popup_menu_pane_g

0xd72d,	// (0x00036b2d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd72d,	// (0x00036b2d) list_single_loc_request_popup_menu_pane_t1

0xcee4,	// (0x000362e4) bg_popup_window_pane_cp03_ParamLimits

0xcee4,	// (0x000362e4) bg_popup_window_pane_cp03

0xd743,	// (0x00036b43) heading_loc_req_pane_ParamLimits

0xd743,	// (0x00036b43) heading_loc_req_pane

0x3823,	// (0x0002cc23) popup_dyc_status_message_window_g1_ParamLimits

0x3823,	// (0x0002cc23) popup_dyc_status_message_window_g1

0x3837,	// (0x0002cc37) popup_dyc_status_message_window_t1_ParamLimits

0x3837,	// (0x0002cc37) popup_dyc_status_message_window_t1

0x384c,	// (0x0002cc4c) popup_dyc_status_message_window_t2_ParamLimits

0x384c,	// (0x0002cc4c) popup_dyc_status_message_window_t2

0x3861,	// (0x0002cc61) popup_dyc_status_message_window_t3_ParamLimits

0x3861,	// (0x0002cc61) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0003871d) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0003871d) popup_dyc_status_message_window_t

0xcc7b,	// (0x0003607b) bg_heading_pane_cp01

0xd74f,	// (0x00036b4f) heading_loc_req_pane_g1

0xd757,	// (0x00036b57) heading_loc_req_pane_g2

0xd75f,	// (0x00036b5f) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x00038724) heading_loc_req_pane_g

0xd767,	// (0x00036b67) heading_loc_req_pane_t1

0xd7eb,	// (0x00036beb) bg_popup_sub_pane_cp01_ParamLimits

0xd7eb,	// (0x00036beb) bg_popup_sub_pane_cp01

0xd7f9,	// (0x00036bf9) popup_cale_events_window_g1_ParamLimits

0xd7f9,	// (0x00036bf9) popup_cale_events_window_g1

0xd819,	// (0x00036c19) popup_cale_events_window_g2_ParamLimits

0xd819,	// (0x00036c19) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x00038758) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x00038758) popup_cale_events_window_g

0xd839,	// (0x00036c39) popup_cale_events_window_t1_ParamLimits

0xd839,	// (0x00036c39) popup_cale_events_window_t1

0xd84b,	// (0x00036c4b) popup_cale_events_window_t2_ParamLimits

0xd84b,	// (0x00036c4b) popup_cale_events_window_t2

0xd889,	// (0x00036c89) popup_cale_events_window_t3_ParamLimits

0xd889,	// (0x00036c89) popup_cale_events_window_t3

0xd8c3,	// (0x00036cc3) popup_cale_events_window_t4_ParamLimits

0xd8c3,	// (0x00036cc3) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x0003875d) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x0003875d) popup_cale_events_window_t

0x38ef,	// (0x0002ccef) call_type_pane

0x38ff,	// (0x0002ccff) popup_call_status_window_g1

0x3913,	// (0x0002cd13) popup_call_status_window_g2

0x3927,	// (0x0002cd27) popup_call_status_window_g3

0x0002,

0xf366,	// (0x00038766) popup_call_status_window_g

0xd8f9,	// (0x00036cf9) call_type_pane_g1

0xd902,	// (0x00036d02) call_type_pane_g2

0x0001,

0xf36d,	// (0x0003876d) call_type_pane_g

0xcc7b,	// (0x0003607b) bg_popup_sub_pane_cp02

0xd90b,	// (0x00036d0b) listscroll_popup_wml_pane

0xd913,	// (0x00036d13) list_wml_pane

0xd91d,	// (0x00036d1d) scroll_pane_cp013

0xd928,	// (0x00036d28) list_single_graphic_popup_wml_pane_ParamLimits

0xd928,	// (0x00036d28) list_single_graphic_popup_wml_pane

0xd050,	// (0x00036450) list_single_graphic_popup_wml_pane_g1

0xd93c,	// (0x00036d3c) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x00038772) list_single_graphic_popup_wml_pane_g

0xd944,	// (0x00036d44) list_single_graphic_popup_wml_pane_t1

0xd95a,	// (0x00036d5a) aid_call_pane

0xcedc,	// (0x000362dc) popup_clock_analogue_window_g1

0xcedc,	// (0x000362dc) popup_clock_analogue_window_g2

0xb342,	// (0x00034742) popup_clock_analogue_window_g3

0xb342,	// (0x00034742) popup_clock_analogue_window_g4

0xd050,	// (0x00036450) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x00038777) popup_clock_analogue_window_g

0xb34a,	// (0x0003474a) popup_clock_analogue_window_t1

0xb358,	// (0x00034758) clock_digital_number_pane_ParamLimits

0xb358,	// (0x00034758) clock_digital_number_pane

0xb364,	// (0x00034764) clock_digital_number_pane_cp02_ParamLimits

0xb364,	// (0x00034764) clock_digital_number_pane_cp02

0xb370,	// (0x00034770) clock_digital_number_pane_cp03_ParamLimits

0xb370,	// (0x00034770) clock_digital_number_pane_cp03

0xb37c,	// (0x0003477c) clock_digital_number_pane_cp04_ParamLimits

0xb37c,	// (0x0003477c) clock_digital_number_pane_cp04

0xb388,	// (0x00034788) clock_digital_separator_pane_ParamLimits

0xb388,	// (0x00034788) clock_digital_separator_pane

0xb394,	// (0x00034794) popup_clock_digital_window_t1

0xd050,	// (0x00036450) clock_digital_number_pane_g1

0xd050,	// (0x00036450) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x000386e5) clock_digital_number_pane_g

0xd050,	// (0x00036450) clock_digital_separator_pane_g1

0xd050,	// (0x00036450) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x000386e5) clock_digital_separator_pane_g

0xcc7b,	// (0x0003607b) bg_popup_window_pane_cp04

0xd962,	// (0x00036d62) heading_pane_cp03

0xd96a,	// (0x00036d6a) listscroll_popup_gms_pane

0xd972,	// (0x00036d72) grid_large_graphic_popup_pane

0xd97c,	// (0x00036d7c) listscroll_popup_gms_pane_g1

0xd984,	// (0x00036d84) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x00038782) listscroll_popup_gms_pane_g

0xd41a,	// (0x0003681a) scroll_pane_cp014

0xd98c,	// (0x00036d8c) cell_large_graphic_popup_pane_ParamLimits

0xd98c,	// (0x00036d8c) cell_large_graphic_popup_pane

0xd9a4,	// (0x00036da4) cell_large_graphic_popup_pane_g1_ParamLimits

0xd9a4,	// (0x00036da4) cell_large_graphic_popup_pane_g1

0xd9b0,	// (0x00036db0) cell_large_graphic_popup_pane_g2_ParamLimits

0xd9b0,	// (0x00036db0) cell_large_graphic_popup_pane_g2

0xd9bc,	// (0x00036dbc) cell_large_graphic_popup_pane_g3_ParamLimits

0xd9bc,	// (0x00036dbc) cell_large_graphic_popup_pane_g3

0xd9c9,	// (0x00036dc9) cell_large_graphic_popup_pane_g4_ParamLimits

0xd9c9,	// (0x00036dc9) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x00038787) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x00038787) cell_large_graphic_popup_pane_g

0xd9d9,	// (0x00036dd9) grid_highlight_pane_cp010

0xd050,	// (0x00036450) bg_popup_call_pane_g1

0xd9e3,	// (0x00036de3) list_single_graphic_popup_conf_pane_ParamLimits

0xd9e3,	// (0x00036de3) list_single_graphic_popup_conf_pane

0xd9f5,	// (0x00036df5) list_highlight_pane_cp01

0xd9fe,	// (0x00036dfe) list_single_graphic_popup_conf_pane_g1

0xda06,	// (0x00036e06) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x00038790) list_single_graphic_popup_conf_pane_g

0xda0e,	// (0x00036e0e) list_single_graphic_popup_conf_pane_t1

0xda1c,	// (0x00036e1c) linegrid_cams_pane_g1

0x3937,	// (0x0002cd37) linegrid_cams_pane_g2

0xd108,	// (0x00036508) linegrid_cams_pane_g3

0xda25,	// (0x00036e25) linegrid_cams_pane_g4

0x3940,	// (0x0002cd40) linegrid_cams_pane_g5

0x3949,	// (0x0002cd49) linegrid_cams_pane_g6

0xd18e,	// (0x0003658e) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x00038795) linegrid_cams_pane_g

0xda2e,	// (0x00036e2e) popup_clock_analogue_window

0xda2e,	// (0x00036e2e) popup_clock_digital_window

0xcc7b,	// (0x0003607b) popup_phob_thumbnail_window

0xd050,	// (0x00036450) call_video_uplink_pane_g1

0xda37,	// (0x00036e37) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x000387a4) call_video_uplink_pane_g

0xd15b,	// (0x0003655b) video_uplink_pane

0xda3f,	// (0x00036e3f) mce_image_pane_g1

0x3954,	// (0x0002cd54) mce_image_pane_g2

0x395c,	// (0x0002cd5c) mce_image_pane_g3

0x3964,	// (0x0002cd64) mce_image_pane_g4

0x396c,	// (0x0002cd6c) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x000387a9) mce_image_pane_g

0xda49,	// (0x00036e49) control_top_pane_stacon_cp01_ParamLimits

0xda49,	// (0x00036e49) control_top_pane_stacon_cp01

0xda5d,	// (0x00036e5d) uni_indicator_pane_stacon_cp01_ParamLimits

0xda5d,	// (0x00036e5d) uni_indicator_pane_stacon_cp01

0xda6e,	// (0x00036e6e) bg_popup_sub_pane_cp03

0x3974,	// (0x0002cd74) chi_dic_find_pane

0x397c,	// (0x0002cd7c) listscroll_chi_dic_pane

0x3985,	// (0x0002cd85) main_pane_chidic_g1

0x3998,	// (0x0002cd98) chi_dic_find_pane_t1

0xda78,	// (0x00036e78) find_chidic_pane

0xda81,	// (0x00036e81) chi_dic_list_pane_ParamLimits

0xda81,	// (0x00036e81) chi_dic_list_pane

0xda92,	// (0x00036e92) scroll_pane_cp020

0x39a6,	// (0x0002cda6) find_chidic_pane_t1

0xcc7b,	// (0x0003607b) input_focus_pane_cp06

0x39b5,	// (0x0002cdb5) list_chi_dic_pane_ParamLimits

0x39b5,	// (0x0002cdb5) list_chi_dic_pane

0xda9a,	// (0x00036e9a) list_chi_dic_pane_t1_ParamLimits

0xda9a,	// (0x00036e9a) list_chi_dic_pane_t1

0xcc7b,	// (0x0003607b) list_highlight_pane_cp020

0xdaad,	// (0x00036ead) bg_cale_heading_pane_g1

0x39c9,	// (0x0002cdc9) bg_cale_heading_pane_g2

0x39d1,	// (0x0002cdd1) bg_cale_heading_pane_g3

0x39d9,	// (0x0002cdd9) bg_cale_heading_pane_g4

0x39e3,	// (0x0002cde3) bg_cale_heading_pane_g5

0x39ed,	// (0x0002cded) bg_cale_heading_pane_g6

0x39f5,	// (0x0002cdf5) bg_cale_heading_pane_g7

0x39fd,	// (0x0002cdfd) bg_cale_heading_pane_g8

0x3a07,	// (0x0002ce07) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x000387b4) bg_cale_heading_pane_g

0xdaad,	// (0x00036ead) bg_cale_side_pane_g1

0x3a11,	// (0x0002ce11) bg_cale_side_pane_g2

0x3a19,	// (0x0002ce19) bg_cale_side_pane_g3

0x3a21,	// (0x0002ce21) bg_cale_side_pane_g4

0x3a29,	// (0x0002ce29) bg_cale_side_pane_g5

0x3a31,	// (0x0002ce31) bg_cale_side_pane_g6

0x3a39,	// (0x0002ce39) bg_cale_side_pane_g7

0x3a41,	// (0x0002ce41) bg_cale_side_pane_g8

0x3a49,	// (0x0002ce49) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x000387c7) bg_cale_side_pane_g

0x3a51,	// (0x0002ce51) popup_call_status_window_ParamLimits

0x3a51,	// (0x0002ce51) popup_call_status_window

0xdab5,	// (0x00036eb5) stacon_top_pane

0xdabd,	// (0x00036ebd) status_pane_ParamLimits

0xdabd,	// (0x00036ebd) status_pane

0xdad2,	// (0x00036ed2) status_small_pane

0xdada,	// (0x00036eda) control_pane

0xcc7b,	// (0x0003607b) stacon_bottom_pane

0xdae2,	// (0x00036ee2) list_single_mce_smart_pane_t1_ParamLimits

0xdae2,	// (0x00036ee2) list_single_mce_smart_pane_t1

0xdaf5,	// (0x00036ef5) list_single_mce_smart_pane_t2_ParamLimits

0xdaf5,	// (0x00036ef5) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x000387da) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x000387da) list_single_mce_smart_pane_t

0x3a98,	// (0x0002ce98) compass_pane

0x3aa1,	// (0x0002cea1) main_location2_pane_t1

0x3ab5,	// (0x0002ceb5) main_location2_pane_t2

0x3ac9,	// (0x0002cec9) main_location2_pane_t3

0x0003,

0xf3df,	// (0x000387df) main_location2_pane_t

0xdb14,	// (0x00036f14) compass_pane_g1_ParamLimits

0xdb14,	// (0x00036f14) compass_pane_g1

0x3b13,	// (0x0002cf13) compass_pane_t1

0x3b22,	// (0x0002cf22) compass_pane_t2

0x0005,

0xf3e8,	// (0x000387e8) compass_pane_t

0x3b69,	// (0x0002cf69) text_secondary_cp61

0xdb28,	// (0x00036f28) navi_pane_cams_g5

0xdb4b,	// (0x00036f4b) navi_pane_im_t1

0xdb59,	// (0x00036f59) navi_pane_mp_g1_ParamLimits

0xdb59,	// (0x00036f59) navi_pane_mp_g1

0xdb6d,	// (0x00036f6d) navi_pane_mp_g2_ParamLimits

0xdb6d,	// (0x00036f6d) navi_pane_mp_g2

0xdb79,	// (0x00036f79) navi_pane_mp_g3_ParamLimits

0xdb79,	// (0x00036f79) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x000387fc) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x000387fc) navi_pane_mp_g

0xdb85,	// (0x00036f85) navi_pane_mp_t1

0xdb93,	// (0x00036f93) navi_pane_mp_t2

0x0002,

0xf403,	// (0x00038803) navi_pane_mp_t

0xdbcf,	// (0x00036fcf) navi_pane_vt_g1

0xdb85,	// (0x00036f85) navi_pane_vt_t1

0xdbd7,	// (0x00036fd7) navi_slider_pane

0xdbdf,	// (0x00036fdf) zooming_pane

0xdbe7,	// (0x00036fe7) navi_slider_pane_g1

0xb3b1,	// (0x000347b1) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x0003880a) navi_slider_pane_g

0xdc0b,	// (0x0003700b) aid_levels_zoom

0xdc13,	// (0x00037013) zooming_pane_g1

0xdc1b,	// (0x0003701b) zooming_pane_g2

0xdc1b,	// (0x0003701b) zooming_pane_g3

0x0002,

0xf419,	// (0x00038819) zooming_pane_g

0xdc23,	// (0x00037023) level_10_zoom

0xdc2c,	// (0x0003702c) level_11_zoom

0xdc35,	// (0x00037035) level_1_zoom

0xdc3e,	// (0x0003703e) level_2_zoom

0xdc47,	// (0x00037047) level_3_zoom

0xdc50,	// (0x00037050) level_4_zoom

0xdc59,	// (0x00037059) level_5_zoom

0xdc62,	// (0x00037062) level_6_zoom

0xdc6b,	// (0x0003706b) level_7_zoom

0xdc74,	// (0x00037074) level_8_zoom

0xdc7d,	// (0x0003707d) level_9_zoom

0xdc8e,	// (0x0003708e) popup_phob_thumbnail_window_g1

0xdc96,	// (0x00037096) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x00038820) popup_phob_thumbnail_window_g

0xefd1,	// (0x000383d1) level_1_location

0xefd9,	// (0x000383d9) level_2_location

0xefe1,	// (0x000383e1) level_3_location

0xefe9,	// (0x000383e9) level_4_location

0xdbdf,	// (0x00036fdf) level_5_location

0x3ca8,	// (0x0002d0a8) mce_icon_pane_g1

0x3cb0,	// (0x0002d0b0) mce_icon_pane_g2

0x0001,

0xf425,	// (0x00038825) mce_icon_pane_g

0x3cb8,	// (0x0002d0b8) main_mup_pane_g1_ParamLimits

0x3cb8,	// (0x0002d0b8) main_mup_pane_g1

0x3cce,	// (0x0002d0ce) main_mup_pane_g2_ParamLimits

0x3cce,	// (0x0002d0ce) main_mup_pane_g2

0x3ce6,	// (0x0002d0e6) main_mup_pane_g3_ParamLimits

0x3ce6,	// (0x0002d0e6) main_mup_pane_g3

0x3cfe,	// (0x0002d0fe) main_mup_pane_g4_ParamLimits

0x3cfe,	// (0x0002d0fe) main_mup_pane_g4

0x3d16,	// (0x0002d116) main_mup_pane_g5_ParamLimits

0x3d16,	// (0x0002d116) main_mup_pane_g5

0x3d32,	// (0x0002d132) main_mup_pane_g6_ParamLimits

0x3d32,	// (0x0002d132) main_mup_pane_g6

0x3d4a,	// (0x0002d14a) main_mup_pane_g7_ParamLimits

0x3d4a,	// (0x0002d14a) main_mup_pane_g7

0x3d62,	// (0x0002d162) main_mup_pane_g8_ParamLimits

0x3d62,	// (0x0002d162) main_mup_pane_g8

0x3d7a,	// (0x0002d17a) main_mup_pane_g9_ParamLimits

0x3d7a,	// (0x0002d17a) main_mup_pane_g9

0x3d94,	// (0x0002d194) main_mup_pane_g10_ParamLimits

0x3d94,	// (0x0002d194) main_mup_pane_g10

0x3dae,	// (0x0002d1ae) main_mup_pane_g11_ParamLimits

0x3dae,	// (0x0002d1ae) main_mup_pane_g11

0x3dc2,	// (0x0002d1c2) main_mup_pane_g12_ParamLimits

0x3dc2,	// (0x0002d1c2) main_mup_pane_g12

0x3dd8,	// (0x0002d1d8) main_mup_pane_g13_ParamLimits

0x3dd8,	// (0x0002d1d8) main_mup_pane_g13

0x000c,

0xf42a,	// (0x0003882a) main_mup_pane_g_ParamLimits

0xf42a,	// (0x0003882a) main_mup_pane_g

0x3dec,	// (0x0002d1ec) main_mup_pane_t1_ParamLimits

0x3dec,	// (0x0002d1ec) main_mup_pane_t1

0x3e06,	// (0x0002d206) main_mup_pane_t2_ParamLimits

0x3e06,	// (0x0002d206) main_mup_pane_t2

0x3e1e,	// (0x0002d21e) main_mup_pane_t3_ParamLimits

0x3e1e,	// (0x0002d21e) main_mup_pane_t3

0x3e36,	// (0x0002d236) main_mup_pane_t4_ParamLimits

0x3e36,	// (0x0002d236) main_mup_pane_t4

0x3e54,	// (0x0002d254) main_mup_pane_t5_ParamLimits

0x3e54,	// (0x0002d254) main_mup_pane_t5

0x3e69,	// (0x0002d269) main_mup_pane_t6_ParamLimits

0x3e69,	// (0x0002d269) main_mup_pane_t6

0x0005,

0xf445,	// (0x00038845) main_mup_pane_t_ParamLimits

0xf445,	// (0x00038845) main_mup_pane_t

0x3e7b,	// (0x0002d27b) mup_progress_pane_ParamLimits

0x3e7b,	// (0x0002d27b) mup_progress_pane

0x3e87,	// (0x0002d287) mup_visualizer_pane_ParamLimits

0x3e87,	// (0x0002d287) mup_visualizer_pane

0x3ebb,	// (0x0002d2bb) mup_volume_pane_ParamLimits

0x3ebb,	// (0x0002d2bb) mup_volume_pane

0xdc9e,	// (0x0003709e) mup_visualizer_pane_g1_ParamLimits

0xdc9e,	// (0x0003709e) mup_visualizer_pane_g1

0xdc9e,	// (0x0003709e) mup_visualizer_pane_g2_ParamLimits

0xdc9e,	// (0x0003709e) mup_visualizer_pane_g2

0xdb14,	// (0x00036f14) mup_visualizer_pane_g3_ParamLimits

0xdb14,	// (0x00036f14) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x00038852) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x00038852) mup_visualizer_pane_g

0xd050,	// (0x00036450) mup_volume_pane_g1

0xdcb4,	// (0x000370b4) mup_volume_pane_g2

0x0001,

0xf459,	// (0x00038859) mup_volume_pane_g

0xd050,	// (0x00036450) mup_progress_pane_g1

0xdcbd,	// (0x000370bd) mup_progress_pane_g2

0xdcc6,	// (0x000370c6) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x0003885e) mup_progress_pane_g

0xcc7b,	// (0x0003607b) bg_popup_window_pane_cp05

0xdccf,	// (0x000370cf) heading_pane_cp02_ParamLimits

0xdccf,	// (0x000370cf) heading_pane_cp02

0xdce9,	// (0x000370e9) list_popup_blid_pane

0xdcf1,	// (0x000370f1) list_blid_sat_info_pane_ParamLimits

0xdcf1,	// (0x000370f1) list_blid_sat_info_pane

0xdd04,	// (0x00037104) list_blid_sat_info_pane_g1

0xdd0c,	// (0x0003710c) list_blid_sat_info_pane_t1

0x3fe1,	// (0x0002d3e1) mup_equalizer_pane_ParamLimits

0x3fe1,	// (0x0002d3e1) mup_equalizer_pane

0x3ffa,	// (0x0002d3fa) mup_equalizer_pane_cp1_ParamLimits

0x3ffa,	// (0x0002d3fa) mup_equalizer_pane_cp1

0x4017,	// (0x0002d417) mup_equalizer_pane_cp2_ParamLimits

0x4017,	// (0x0002d417) mup_equalizer_pane_cp2

0x4034,	// (0x0002d434) mup_equalizer_pane_cp3_ParamLimits

0x4034,	// (0x0002d434) mup_equalizer_pane_cp3

0x4055,	// (0x0002d455) mup_equalizer_pane_cp4_ParamLimits

0x4055,	// (0x0002d455) mup_equalizer_pane_cp4

0x4076,	// (0x0002d476) mup_equalizer_pane_cp5

0x408a,	// (0x0002d48a) mup_equalizer_pane_cp6

0x409e,	// (0x0002d49e) mup_equalizer_pane_cp7

0xeeef,	// (0x000382ef) bg_popup_call_poc_act_pane_g9

0xeef7,	// (0x000382f7) bg_popup_call_poc_act_pane_g10

0xeeff,	// (0x000382ff) bg_popup_call_poc_act_pane_g11

0x000a,

0xcee4,	// (0x000362e4) mup_scale_pane

0xd050,	// (0x00036450) mup_scale_pane_g1

0xdd1a,	// (0x0003711a) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x0003887a) mup_scale_pane_g

0xdd3e,	// (0x0003713e) msg_data_pane

0xdd46,	// (0x00037146) scroll_pane_cp017

0x40c4,	// (0x0002d4c4) bg_list_pane_cp04_ParamLimits

0x40c4,	// (0x0002d4c4) bg_list_pane_cp04

0xdd4e,	// (0x0003714e) msg_data_pane_g1

0x40e4,	// (0x0002d4e4) msg_data_pane_g2

0x395c,	// (0x0002cd5c) msg_data_pane_g3

0x40ec,	// (0x0002d4ec) msg_data_pane_g4

0x40f4,	// (0x0002d4f4) msg_data_pane_g5

0x40fc,	// (0x0002d4fc) msg_data_pane_g6

0x4104,	// (0x0002d504) msg_data_pane_g7

0x0006,

0xf489,	// (0x00038889) msg_data_pane_g

0x410c,	// (0x0002d50c) msg_text_pane_ParamLimits

0x410c,	// (0x0002d50c) msg_text_pane

0x4135,	// (0x0002d535) qrid_highlight_pane_cp011_ParamLimits

0x4135,	// (0x0002d535) qrid_highlight_pane_cp011

0xcc7b,	// (0x0003607b) msg_body_pane

0xcc7b,	// (0x0003607b) msg_header_pane

0xdd5f,	// (0x0003715f) input_focus_pane_cp07

0x4159,	// (0x0002d559) msg_header_pane_t1_ParamLimits

0x4159,	// (0x0002d559) msg_header_pane_t1

0xdd74,	// (0x00037174) msg_header_pane_t2_ParamLimits

0xdd74,	// (0x00037174) msg_header_pane_t2

0x0001,

0xf49d,	// (0x0003889d) msg_header_pane_t_ParamLimits

0xf49d,	// (0x0003889d) msg_header_pane_t

0xdd86,	// (0x00037186) msg_body_pane_g1

0x416d,	// (0x0002d56d) msg_body_pane_t1_ParamLimits

0x416d,	// (0x0002d56d) msg_body_pane_t1

0xdd8e,	// (0x0003718e) msg_body_pane_t2_ParamLimits

0xdd8e,	// (0x0003718e) msg_body_pane_t2

0xdda0,	// (0x000371a0) msg_body_pane_t3_ParamLimits

0xdda0,	// (0x000371a0) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x000388a2) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x000388a2) msg_body_pane_t

0x0dd4,	// (0x0002a1d4) main_viewer_pane_g1_ParamLimits

0x0dd4,	// (0x0002a1d4) main_viewer_pane_g1

0x0de2,	// (0x0002a1e2) main_viewer_pane_g2_ParamLimits

0x0de2,	// (0x0002a1e2) main_viewer_pane_g2

0x41bc,	// (0x0002d5bc) main_viewer_pane_g3_ParamLimits

0x41bc,	// (0x0002d5bc) main_viewer_pane_g3

0x41cb,	// (0x0002d5cb) main_viewer_pane_g4_ParamLimits

0x41cb,	// (0x0002d5cb) main_viewer_pane_g4

0xb3db,	// (0x000347db) main_viewer_pane_g5_ParamLimits

0xb3db,	// (0x000347db) main_viewer_pane_g5

0xb3db,	// (0x000347db) main_viewer_pane_g7_ParamLimits

0xb3db,	// (0x000347db) main_viewer_pane_g7

0xb3ed,	// (0x000347ed) main_viewer_pane_g8_ParamLimits

0xb3ed,	// (0x000347ed) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x000388b2) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x000388b2) main_viewer_pane_g

0xddb2,	// (0x000371b2) viewer_content_pane_ParamLimits

0xddb2,	// (0x000371b2) viewer_content_pane

0x4207,	// (0x0002d607) main_postcard_pane_g1_ParamLimits

0x4207,	// (0x0002d607) main_postcard_pane_g1

0x421d,	// (0x0002d61d) main_postcard_pane_g2_ParamLimits

0x421d,	// (0x0002d61d) main_postcard_pane_g2

0x4233,	// (0x0002d633) main_postcard_pane_g3_ParamLimits

0x4233,	// (0x0002d633) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x000388c3) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x000388c3) main_postcard_pane_g

0x424a,	// (0x0002d64a) main_postcard_pane_g4

0xf0c5,	// (0x000384c5) smil_status_volume_pane_g2

0x428d,	// (0x0002d68d) postcard_pane_ParamLimits

0x428d,	// (0x0002d68d) postcard_pane

0xddc0,	// (0x000371c0) postcard_pane_g1_ParamLimits

0xddc0,	// (0x000371c0) postcard_pane_g1

0x42cf,	// (0x0002d6cf) postcard_pane_g2_ParamLimits

0x42cf,	// (0x0002d6cf) postcard_pane_g2

0x42db,	// (0x0002d6db) postcard_pane_g3_ParamLimits

0x42db,	// (0x0002d6db) postcard_pane_g3

0xddce,	// (0x000371ce) postcard_pane_g4_ParamLimits

0xddce,	// (0x000371ce) postcard_pane_g4

0x42e7,	// (0x0002d6e7) postcard_pane_g5_ParamLimits

0x42e7,	// (0x0002d6e7) postcard_pane_g5

0x42fc,	// (0x0002d6fc) postcard_pane_g6_ParamLimits

0x42fc,	// (0x0002d6fc) postcard_pane_g6

0xddc0,	// (0x000371c0) postcard_pane_g7_ParamLimits

0xddc0,	// (0x000371c0) postcard_pane_g7

0x0006,

0xf4d0,	// (0x000388d0) postcard_pane_g_ParamLimits

0xf4d0,	// (0x000388d0) postcard_pane_g

0x4310,	// (0x0002d710) main_mp2_pane_g1_ParamLimits

0x4310,	// (0x0002d710) main_mp2_pane_g1

0x431c,	// (0x0002d71c) main_mp2_pane_g2_ParamLimits

0x431c,	// (0x0002d71c) main_mp2_pane_g2

0x4328,	// (0x0002d728) main_mp2_pane_g3_ParamLimits

0x4328,	// (0x0002d728) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x000388df) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x000388df) main_mp2_pane_g

0x4334,	// (0x0002d734) main_mp2_pane_t1_ParamLimits

0x4334,	// (0x0002d734) main_mp2_pane_t1

0x4349,	// (0x0002d749) main_mp2_pane_t2_ParamLimits

0x4349,	// (0x0002d749) main_mp2_pane_t2

0x435b,	// (0x0002d75b) main_mp2_pane_t3_ParamLimits

0x435b,	// (0x0002d75b) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x000388e6) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x000388e6) main_mp2_pane_t

0xdddc,	// (0x000371dc) pec_content_pane_ParamLimits

0xdddc,	// (0x000371dc) pec_content_pane

0xd41a,	// (0x0003681a) scroll_pane_cp015

0xddee,	// (0x000371ee) pec_attribute_pane_ParamLimits

0xddee,	// (0x000371ee) pec_attribute_pane

0x436d,	// (0x0002d76d) pec_content_pane_g1_ParamLimits

0x436d,	// (0x0002d76d) pec_content_pane_g1

0xddfe,	// (0x000371fe) pec_content_pane_t1_ParamLimits

0xddfe,	// (0x000371fe) pec_content_pane_t1

0xde10,	// (0x00037210) pec_content_pane_t2_ParamLimits

0xde10,	// (0x00037210) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x000388ed) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x000388ed) pec_content_pane_t

0x437b,	// (0x0002d77b) list_single_graphic_pane_cp01_ParamLimits

0x437b,	// (0x0002d77b) list_single_graphic_pane_cp01

0xcee4,	// (0x000362e4) bg_popup_sub_pane_cp04

0xde22,	// (0x00037222) popup_mup_playback_window_g1

0xde2e,	// (0x0003722e) popup_mup_playback_window_t1

0xde43,	// (0x00037243) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x000388f2) popup_mup_playback_window_t

0xde7a,	// (0x0003727a) main_image_pane_g1_ParamLimits

0xde7a,	// (0x0003727a) main_image_pane_g1

0xdebd,	// (0x000372bd) scroll_pane_cp018_ParamLimits

0xdebd,	// (0x000372bd) scroll_pane_cp018

0xded5,	// (0x000372d5) scroll_pane_cp016_ParamLimits

0xded5,	// (0x000372d5) scroll_pane_cp016

0x444b,	// (0x0002d84b) smil2_image_pane_ParamLimits

0x444b,	// (0x0002d84b) smil2_image_pane

0x447f,	// (0x0002d87f) smil2_root_pane_ParamLimits

0x447f,	// (0x0002d87f) smil2_root_pane

0x44b7,	// (0x0002d8b7) smil2_text_pane_ParamLimits

0x44b7,	// (0x0002d8b7) smil2_text_pane

0xcc7b,	// (0x0003607b) bg_list_pane_cp06

0xdf11,	// (0x00037311) grid_radio_pane

0xcc7b,	// (0x0003607b) bg_popup_window_pane_cp06

0xdf19,	// (0x00037319) main_fmradio_pane_t1

0xd962,	// (0x00036d62) heading_pane_cp04

0xdf27,	// (0x00037327) main_fmradio_pane_t2

0xef07,	// (0x00038307) popup_cale_lunar_info_window_g1

0xdf35,	// (0x00037335) main_fmradio_pane_t3

0xef0f,	// (0x0003830f) popup_cale_lunar_info_window_g2

0xdf43,	// (0x00037343) main_fmradio_pane_t4

0x0001,

0xdf51,	// (0x00037351) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x000389cd) popup_cale_lunar_info_window_g

0xf507,	// (0x00038907) main_fmradio_pane_t

0xdf5f,	// (0x0003735f) wait_bar_pane_cp03

0xdf67,	// (0x00037367) cell_fmradio_pane_ParamLimits

0xdf67,	// (0x00037367) cell_fmradio_pane

0xddc0,	// (0x000371c0) cell_fmradio_pane_g1_ParamLimits

0xddc0,	// (0x000371c0) cell_fmradio_pane_g1

0xcc7b,	// (0x0003607b) grid_highlight_pane_cp011

0xdf7a,	// (0x0003737a) poc_content_pane_ParamLimits

0xdf7a,	// (0x0003737a) poc_content_pane

0xdf8c,	// (0x0003738c) scroll_pane_cp019

0x4537,	// (0x0002d937) popup_call_poc_act_window_ParamLimits

0x4537,	// (0x0002d937) popup_call_poc_act_window

0x455b,	// (0x0002d95b) popup_call_poc_inact_window_ParamLimits

0x455b,	// (0x0002d95b) popup_call_poc_inact_window

0xf5a4,	// (0x000389a4) bg_popup_call_poc_act_pane_g

0xee77,	// (0x00038277) bg_popup_call_poc_inact_pane_g1

0xee7f,	// (0x0003827f) bg_popup_call_poc_inact_pane_g2

0xdf94,	// (0x00037394) popup_call_poc_act_window_g2

0xee87,	// (0x00038287) bg_popup_call_poc_inact_pane_g3

0xee8f,	// (0x0003828f) bg_popup_call_poc_inact_pane_g4

0xee97,	// (0x00038297) bg_popup_call_poc_inact_pane_g5

0xdf9c,	// (0x0003739c) popup_call_poc_act_window_t1_ParamLimits

0xdf9c,	// (0x0003739c) popup_call_poc_act_window_t1

0xdfc4,	// (0x000373c4) popup_call_poc_act_window_t2_ParamLimits

0xdfc4,	// (0x000373c4) popup_call_poc_act_window_t2

0xdfec,	// (0x000373ec) popup_call_poc_act_window_t3_ParamLimits

0xdfec,	// (0x000373ec) popup_call_poc_act_window_t3

0xe014,	// (0x00037414) popup_call_poc_act_window_t4_ParamLimits

0xe014,	// (0x00037414) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x00038912) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x00038912) popup_call_poc_act_window_t

0xee9f,	// (0x0003829f) bg_popup_call_poc_inact_pane_g6

0xeea7,	// (0x000382a7) bg_popup_call_poc_inact_pane_g7

0xeeaf,	// (0x000382af) bg_popup_call_poc_inact_pane_g8

0xe026,	// (0x00037426) popup_call_poc_inact_window_g2

0xeeb7,	// (0x000382b7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x00038991) bg_popup_call_poc_inact_pane_g

0xe02e,	// (0x0003742e) popup_call_poc_inact_window_t1_ParamLimits

0xe02e,	// (0x0003742e) popup_call_poc_inact_window_t1

0xe043,	// (0x00037443) popup_call_poc_inact_window_t2_ParamLimits

0xe043,	// (0x00037443) popup_call_poc_inact_window_t2

0xe058,	// (0x00037458) popup_call_poc_inact_window_t3_ParamLimits

0xe058,	// (0x00037458) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x0003891b) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x0003891b) popup_call_poc_inact_window_t

0xf038,	// (0x00038438) context_pane_ParamLimits

0x4ad3,	// (0x0002ded3) signal_pane_ParamLimits

0xdbdf,	// (0x00036fdf) main_call2_pane

0xb432,	// (0x00034832) popup_phob_thumbnail2_window_ParamLimits

0xb432,	// (0x00034832) popup_phob_thumbnail2_window

0xb3c3,	// (0x000347c3) aid_hotspot_pointer_arrow_pane

0xb3cb,	// (0x000347cb) aid_hotspot_pointer_hand_pane

0x48a1,	// (0x0002dca1) phob_pre_status_pane_g5

0x26d8,	// (0x0002bad8) cams_zoom_pane_ParamLimits

0x26e7,	// (0x0002bae7) image_vga_pane_ParamLimits

0x2701,	// (0x0002bb01) main_camera_pane_g1_ParamLimits

0x2713,	// (0x0002bb13) main_camera_pane_g2_ParamLimits

0x2725,	// (0x0002bb25) main_camera_pane_g3_ParamLimits

0x2737,	// (0x0002bb37) main_camera_pane_g4_ParamLimits

0x2749,	// (0x0002bb49) main_camera_pane_g5_ParamLimits

0x275b,	// (0x0002bb5b) main_camera_pane_g6_ParamLimits

0x276d,	// (0x0002bb6d) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0003861a) main_camera_pane_g_ParamLimits

0x277f,	// (0x0002bb7f) main_camera_pane_t1_ParamLimits

0x2795,	// (0x0002bb95) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x0003862b) main_camera_pane_t_ParamLimits

0xcee4,	// (0x000362e4) bg_popup_preview_window_pane_cp01_ParamLimits

0xcee4,	// (0x000362e4) bg_popup_preview_window_pane_cp01

0xe06d,	// (0x0003746d) popup_phob_thumbnail2_window_g1_ParamLimits

0xe06d,	// (0x0003746d) popup_phob_thumbnail2_window_g1

0xcc7b,	// (0x0003607b) call2_cli_visual_pane

0x458f,	// (0x0002d98f) popup_call2_audio_conf_window_ParamLimits

0x458f,	// (0x0002d98f) popup_call2_audio_conf_window

0x45af,	// (0x0002d9af) popup_call2_audio_first_window_ParamLimits

0x45af,	// (0x0002d9af) popup_call2_audio_first_window

0x4645,	// (0x0002da45) popup_call2_audio_in_window_ParamLimits

0x4645,	// (0x0002da45) popup_call2_audio_in_window

0x468d,	// (0x0002da8d) popup_call2_audio_out_window_ParamLimits

0x468d,	// (0x0002da8d) popup_call2_audio_out_window

0x46f7,	// (0x0002daf7) popup_call2_audio_second_window_ParamLimits

0x46f7,	// (0x0002daf7) popup_call2_audio_second_window

0x475d,	// (0x0002db5d) popup_call2_audio_wait_window_ParamLimits

0x475d,	// (0x0002db5d) popup_call2_audio_wait_window

0xcc7b,	// (0x0003607b) bg_popup_call2_act_pane_cp03

0xcec6,	// (0x000362c6) list_conf_pane_cp

0xe079,	// (0x00037479) popup_call2_audio_conf_window_t1

0xe087,	// (0x00037487) list_single_graphic_popup_conf2_pane_ParamLimits

0xe087,	// (0x00037487) list_single_graphic_popup_conf2_pane

0xd9f5,	// (0x00036df5) list_highlight_pane_cp04

0xe09a,	// (0x0003749a) list_single_graphic_popup_conf2_pane_g1

0xda06,	// (0x00036e06) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x00038922) list_single_graphic_popup_conf2_pane_g

0xe0a4,	// (0x000374a4) list_single_graphic_popup_conf2_pane_t1

0xe0b2,	// (0x000374b2) bg_popup_call2_act_pane_cp01_ParamLimits

0xe0b2,	// (0x000374b2) bg_popup_call2_act_pane_cp01

0xe13c,	// (0x0003753c) call_type_pane_cp05_ParamLimits

0xe13c,	// (0x0003753c) call_type_pane_cp05

0xe190,	// (0x00037590) popup_call2_audio_second_window_g1_ParamLimits

0xe190,	// (0x00037590) popup_call2_audio_second_window_g1

0xe1e4,	// (0x000375e4) popup_call2_audio_second_window_g2_ParamLimits

0xe1e4,	// (0x000375e4) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00038927) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00038927) popup_call2_audio_second_window_g

0xe249,	// (0x00037649) popup_call2_audio_second_window_t1_ParamLimits

0xe249,	// (0x00037649) popup_call2_audio_second_window_t1

0xe304,	// (0x00037704) popup_call2_audio_second_window_t2_ParamLimits

0xe304,	// (0x00037704) popup_call2_audio_second_window_t2

0xe357,	// (0x00037757) popup_call2_audio_second_window_t3_ParamLimits

0xe357,	// (0x00037757) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x0003892e) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x0003892e) popup_call2_audio_second_window_t

0xcc7b,	// (0x0003607b) bg_popup_call2_in_pane_cp02

0xcc85,	// (0x00036085) call_type_pane_cp04

0xcc8d,	// (0x0003608d) popup_call2_audio_wait_window_g1

0xcc95,	// (0x00036095) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x00038507) popup_call2_audio_wait_window_g

0xcc9d,	// (0x0003609d) popup_call2_audio_wait_window_t3

0xe44a,	// (0x0003784a) bg_popup_call2_act_pane_ParamLimits

0xe44a,	// (0x0003784a) bg_popup_call2_act_pane

0xe50a,	// (0x0003790a) call_type_pane_cp03_ParamLimits

0xe50a,	// (0x0003790a) call_type_pane_cp03

0xe56e,	// (0x0003796e) popup_call2_audio_first_window_g1_ParamLimits

0xe56e,	// (0x0003796e) popup_call2_audio_first_window_g1

0xe5de,	// (0x000379de) popup_call2_audio_first_window_g2_ParamLimits

0xe5de,	// (0x000379de) popup_call2_audio_first_window_g2

0xdc9e,	// (0x0003709e) popup_call2_audio_first_window_g3_ParamLimits

0xdc9e,	// (0x0003709e) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x00038937) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x00038937) popup_call2_audio_first_window_g

0xe6bc,	// (0x00037abc) popup_call2_audio_first_window_t1_ParamLimits

0xe6bc,	// (0x00037abc) popup_call2_audio_first_window_t1

0xe7bf,	// (0x00037bbf) popup_call2_audio_first_window_t4_ParamLimits

0xe7bf,	// (0x00037bbf) popup_call2_audio_first_window_t4

0xe8a2,	// (0x00037ca2) popup_call2_audio_first_window_t5_ParamLimits

0xe8a2,	// (0x00037ca2) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x00038942) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x00038942) popup_call2_audio_first_window_t

0xcedc,	// (0x000362dc) bg_popup_call2_act_pane_g1

0xef17,	// (0x00038317) popup_cale_lunar_info_window_t1

0xef25,	// (0x00038325) popup_cale_lunar_info_window_t2

0xef33,	// (0x00038333) popup_cale_lunar_info_window_t3

0xcc7b,	// (0x0003607b) bg_popup_call2_bubble_pane

0xe9a3,	// (0x00037da3) bg_popup_call2_in_pane_cp01_ParamLimits

0xe9a3,	// (0x00037da3) bg_popup_call2_in_pane_cp01

0xc957,	// (0x00035d57) call_type_pane_cp02

0xe9eb,	// (0x00037deb) popup_call2_audio_out_window_g1_ParamLimits

0xe9eb,	// (0x00037deb) popup_call2_audio_out_window_g1

0xea17,	// (0x00037e17) popup_call2_audio_out_window_g2_ParamLimits

0xea17,	// (0x00037e17) popup_call2_audio_out_window_g2

0xea3f,	// (0x00037e3f) popup_call2_audio_out_window_g3_ParamLimits

0xea3f,	// (0x00037e3f) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x0003894b) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x0003894b) popup_call2_audio_out_window_g

0xea7a,	// (0x00037e7a) popup_call2_audio_out_window_t1_ParamLimits

0xea7a,	// (0x00037e7a) popup_call2_audio_out_window_t1

0xead9,	// (0x00037ed9) popup_call2_audio_out_window_t2_ParamLimits

0xead9,	// (0x00037ed9) popup_call2_audio_out_window_t2

0xeb2d,	// (0x00037f2d) popup_call2_audio_out_window_t3_ParamLimits

0xeb2d,	// (0x00037f2d) popup_call2_audio_out_window_t3

0xeb43,	// (0x00037f43) popup_call2_audio_out_window_t4_ParamLimits

0xeb43,	// (0x00037f43) popup_call2_audio_out_window_t4

0xeb59,	// (0x00037f59) popup_call2_audio_out_window_t5_ParamLimits

0xeb59,	// (0x00037f59) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x00038954) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x00038954) popup_call2_audio_out_window_t

0xebbd,	// (0x00037fbd) bg_popup_call2_in_pane_ParamLimits

0xebbd,	// (0x00037fbd) bg_popup_call2_in_pane

0xec19,	// (0x00038019) popup_call2_audio_in_window_g1_ParamLimits

0xec19,	// (0x00038019) popup_call2_audio_in_window_g1

0xec51,	// (0x00038051) popup_call2_audio_in_window_g2_ParamLimits

0xec51,	// (0x00038051) popup_call2_audio_in_window_g2

0xec89,	// (0x00038089) popup_call2_audio_in_window_g3_ParamLimits

0xec89,	// (0x00038089) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x00038961) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x00038961) popup_call2_audio_in_window_g

0xece1,	// (0x000380e1) popup_call2_audio_in_window_t1_ParamLimits

0xece1,	// (0x000380e1) popup_call2_audio_in_window_t1

0xed61,	// (0x00038161) popup_call2_audio_in_window_t2_ParamLimits

0xed61,	// (0x00038161) popup_call2_audio_in_window_t2

0xede1,	// (0x000381e1) popup_call2_audio_in_window_t3_ParamLimits

0xede1,	// (0x000381e1) popup_call2_audio_in_window_t3

0xedfb,	// (0x000381fb) popup_call2_audio_in_window_t4_ParamLimits

0xedfb,	// (0x000381fb) popup_call2_audio_in_window_t4

0xee0d,	// (0x0003820d) popup_call2_audio_in_window_t5_ParamLimits

0xee0d,	// (0x0003820d) popup_call2_audio_in_window_t5

0xee22,	// (0x00038222) popup_call2_audio_in_window_t6_ParamLimits

0xee22,	// (0x00038222) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x0003896a) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x0003896a) popup_call2_audio_in_window_t

0xcedc,	// (0x000362dc) bg_popup_call2_in_pane_g1

0xef41,	// (0x00038341) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x000389d2) popup_cale_lunar_info_window_t

0xcee4,	// (0x000362e4) bg_popup_call2_rect_pane_ParamLimits

0xcee4,	// (0x000362e4) bg_popup_call2_rect_pane

0xcc7b,	// (0x0003607b) call2_cli_visual_graphic_pane

0xcc7b,	// (0x0003607b) call2_cli_visual_text_pane

0xb444,	// (0x00034844) smil_status_volume_pane_g3

0x0002,

0xd050,	// (0x00036450) call2_cli_visual_graphic_pane_g1

0xd050,	// (0x00036450) call2_cli_visual_graphic_pane_g2

0xd050,	// (0x00036450) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x00038977) call2_cli_visual_graphic_pane_g

0xee37,	// (0x00038237) bg_popup_call2_rect_pane_g1

0xd0ee,	// (0x000364ee) bg_popup_call2_rect_pane_g2

0xee3f,	// (0x0003823f) bg_popup_call2_rect_pane_g3

0xee47,	// (0x00038247) bg_popup_call2_rect_pane_g4

0xee4f,	// (0x0003824f) bg_popup_call2_rect_pane_g5

0xee57,	// (0x00038257) bg_popup_call2_rect_pane_g6

0xee5f,	// (0x0003825f) bg_popup_call2_rect_pane_g7

0xee67,	// (0x00038267) bg_popup_call2_rect_pane_g8

0xee6f,	// (0x0003826f) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x0003897e) bg_popup_call2_rect_pane_g

0xee77,	// (0x00038277) bg_popup_call2_bubble_pane_g1

0xee7f,	// (0x0003827f) bg_popup_call2_bubble_pane_g2

0xee87,	// (0x00038287) bg_popup_call2_bubble_pane_g3

0xee8f,	// (0x0003828f) bg_popup_call2_bubble_pane_g4

0xee97,	// (0x00038297) bg_popup_call2_bubble_pane_g5

0xee9f,	// (0x0003829f) bg_popup_call2_bubble_pane_g6

0xeea7,	// (0x000382a7) bg_popup_call2_bubble_pane_g7

0xeeaf,	// (0x000382af) bg_popup_call2_bubble_pane_g8

0xeeb7,	// (0x000382b7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x00038991) bg_popup_call2_bubble_pane_g

0x23f7,	// (0x0002b7f7) aid_cale_week_size_cell_pane

0x27ad,	// (0x0002bbad) aid_cams_cif_uncrop_pane_ParamLimits

0x27ad,	// (0x0002bbad) aid_cams_cif_uncrop_pane

0x296a,	// (0x0002bd6a) aid_cams_size_cell_ParamLimits

0x296a,	// (0x0002bd6a) aid_cams_size_cell

0x297e,	// (0x0002bd7e) grid_cams_pane_ParamLimits

0x2998,	// (0x0002bd98) linegrid_cams_pane_ParamLimits

0x2ad0,	// (0x0002bed0) call_video_pane_t1

0x2aee,	// (0x0002beee) call_video_pane_t2

0x0001,

0xf27e,	// (0x0003867e) call_video_pane_t

0x2f21,	// (0x0002c321) aid_cale_month_size_cell_pane_ParamLimits

0x2f21,	// (0x0002c321) aid_cale_month_size_cell_pane

0xf608,	// (0x00038a08) smil_status_volume_pane_g

0xb451,	// (0x00034851) volume_smil_pane_ParamLimits

0xb194,	// (0x00034594) aid_popup2_width_pane

0x2354,	// (0x0002b754) cell_qdial_pane_g4_ParamLimits

0x2354,	// (0x0002b754) cell_qdial_pane_g4

0x3af3,	// (0x0002cef3) aid_blid_cardinal_pane_ParamLimits

0x3aff,	// (0x0002ceff) aid_blid_destination_pane_ParamLimits

0x3aff,	// (0x0002ceff) aid_blid_destination_pane

0xcee4,	// (0x000362e4) bg_popup_call_poc_act_pane_ParamLimits

0xcee4,	// (0x000362e4) bg_popup_call_poc_act_pane

0xcee4,	// (0x000362e4) bg_popup_call_poc_inact_pane_ParamLimits

0xcee4,	// (0x000362e4) bg_popup_call_poc_inact_pane

0xeec7,	// (0x000382c7) bg_popup_call_poc_act_pane_g1

0xeecf,	// (0x000382cf) bg_popup_call_poc_act_pane_g2

0xeed7,	// (0x000382d7) bg_popup_call_poc_act_pane_g3

0xee8f,	// (0x0003828f) bg_popup_call_poc_act_pane_g4

0xee97,	// (0x00038297) bg_popup_call_poc_act_pane_g5

0xeedf,	// (0x000382df) bg_popup_call_poc_act_pane_g6

0xeea7,	// (0x000382a7) bg_popup_call_poc_act_pane_g7

0xeee7,	// (0x000382e7) bg_popup_call_poc_act_pane_g8

0xcc7b,	// (0x0003607b) main_usb_pane

0xb40d,	// (0x0003480d) popup_cale_lunar_info_window

0x2db8,	// (0x0002c1b8) im_reading_pane_t1_ParamLimits

0xd372,	// (0x00036772) list_im_pane_ParamLimits

0xd383,	// (0x00036783) scroll_pane_cp07_ParamLimits

0xcc7b,	// (0x0003607b) grid_highlight_pane_cp012

0xcee4,	// (0x000362e4) mup_scale_pane_ParamLimits

0xddc0,	// (0x000371c0) main_usb_pane_g1_ParamLimits

0xddc0,	// (0x000371c0) main_usb_pane_g1

0x47b4,	// (0x0002dbb4) main_usb_pane_g2_ParamLimits

0x47b4,	// (0x0002dbb4) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x000389bb) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x000389bb) main_usb_pane_g

0x47ca,	// (0x0002dbca) main_usb_pane_t1_ParamLimits

0x47ca,	// (0x0002dbca) main_usb_pane_t1

0x47dc,	// (0x0002dbdc) main_usb_pane_t2_ParamLimits

0x47dc,	// (0x0002dbdc) main_usb_pane_t2

0x47ee,	// (0x0002dbee) main_usb_pane_t3_ParamLimits

0x47ee,	// (0x0002dbee) main_usb_pane_t3

0x4800,	// (0x0002dc00) main_usb_pane_t4_ParamLimits

0x4800,	// (0x0002dc00) main_usb_pane_t4

0x4812,	// (0x0002dc12) main_usb_pane_t5_ParamLimits

0x4812,	// (0x0002dc12) main_usb_pane_t5

0x4824,	// (0x0002dc24) main_usb_pane_t6_ParamLimits

0x4824,	// (0x0002dc24) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x000389c0) main_usb_pane_t_ParamLimits

0x3a98,	// (0x0002ce98) aid_text_placing

0x3aa1,	// (0x0002cea1) main_location2_pane_t1_ParamLimits

0x3ab5,	// (0x0002ceb5) main_location2_pane_t2_ParamLimits

0x3ac9,	// (0x0002cec9) main_location2_pane_t3_ParamLimits

0x3adf,	// (0x0002cedf) main_location2_pane_t4_ParamLimits

0x3adf,	// (0x0002cedf) main_location2_pane_t4

0xf3df,	// (0x000387df) main_location2_pane_t_ParamLimits

0xcf28,	// (0x00036328) find_pinb_pane_g2_ParamLimits

0xcf28,	// (0x00036328) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x0003852d) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x0003852d) find_pinb_pane_g

0xcf34,	// (0x00036334) find_pinb_pane_t1_ParamLimits

0xcf46,	// (0x00036346) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x00038532) find_pinb_pane_t_ParamLimits

0xcc7b,	// (0x0003607b) main_call3_pane

0x3285,	// (0x0002c685) cale_month_day_heading_pane_t1_ParamLimits

0x32e3,	// (0x0002c6e3) cale_month_day_heading_pane_t2_ParamLimits

0x3348,	// (0x0002c748) cale_month_day_heading_pane_t3_ParamLimits

0x33ad,	// (0x0002c7ad) cale_month_day_heading_pane_t4_ParamLimits

0x3412,	// (0x0002c812) cale_month_day_heading_pane_t5_ParamLimits

0x3487,	// (0x0002c887) cale_month_day_heading_pane_t6_ParamLimits

0x34fc,	// (0x0002c8fc) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x000386b6) cale_month_day_heading_pane_t_ParamLimits

0xd5ed,	// (0x000369ed) smil_status_volume_pane

0x42ab,	// (0x0002d6ab) postcard_address_pane_ParamLimits

0x42ab,	// (0x0002d6ab) postcard_address_pane

0x42bd,	// (0x0002d6bd) postcard_message_pane_ParamLimits

0x42bd,	// (0x0002d6bd) postcard_message_pane

0x4797,	// (0x0002db97) call2_cli_visual_pane_t1_ParamLimits

0x4797,	// (0x0002db97) call2_cli_visual_pane_t1

0x4d01,	// (0x0002e101) postcard_message_pane_t1_ParamLimits

0x4d01,	// (0x0002e101) postcard_message_pane_t1

0x4cea,	// (0x0002e0ea) postcard_address_pane_t1_ParamLimits

0x4cea,	// (0x0002e0ea) postcard_address_pane_t1

0x4cd6,	// (0x0002e0d6) popup_call3_audio_in_window_ParamLimits

0x4cd6,	// (0x0002e0d6) popup_call3_audio_in_window

0x4b65,	// (0x0002df65) bg_popup_call3_in_pane_ParamLimits

0x4b65,	// (0x0002df65) bg_popup_call3_in_pane

0x4bd7,	// (0x0002dfd7) popup_call3_audio_in_window_g1_ParamLimits

0x4bd7,	// (0x0002dfd7) popup_call3_audio_in_window_g1

0x4bf7,	// (0x0002dff7) popup_call3_audio_in_window_g2_ParamLimits

0x4bf7,	// (0x0002dff7) popup_call3_audio_in_window_g2

0x4c17,	// (0x0002e017) popup_call3_audio_in_window_g3_ParamLimits

0x4c17,	// (0x0002e017) popup_call3_audio_in_window_g3

0x0003,

0xf60f,	// (0x00038a0f) popup_call3_audio_in_window_g_ParamLimits

0xf60f,	// (0x00038a0f) popup_call3_audio_in_window_g

0x4c48,	// (0x0002e048) popup_call3_audio_in_window_t1_ParamLimits

0x4c48,	// (0x0002e048) popup_call3_audio_in_window_t1

0x4c86,	// (0x0002e086) popup_call3_audio_in_window_t2_ParamLimits

0x4c86,	// (0x0002e086) popup_call3_audio_in_window_t2

0x4cc4,	// (0x0002e0c4) popup_call3_audio_in_window_t3_ParamLimits

0x4cc4,	// (0x0002e0c4) popup_call3_audio_in_window_t3

0x0002,

0xf618,	// (0x00038a18) popup_call3_audio_in_window_t_ParamLimits

0xf618,	// (0x00038a18) popup_call3_audio_in_window_t

0xdbdf,	// (0x00036fdf) bg_popup_call3_rect_pane

0xee37,	// (0x00038237) bg_popup_call3_rect_pane_g1

0xd0ee,	// (0x000364ee) bg_popup_call3_rect_pane_g2

0xee3f,	// (0x0003823f) bg_popup_call3_rect_pane_g3

0xee47,	// (0x00038247) bg_popup_call3_rect_pane_g4

0xee4f,	// (0x0003824f) bg_popup_call3_rect_pane_g5

0xee57,	// (0x00038257) bg_popup_call3_rect_pane_g6

0xee5f,	// (0x0003825f) bg_popup_call3_rect_pane_g7

0x3ed1,	// (0x0002d2d1) mup_visualizer_osc_pane

0xdcac,	// (0x000370ac) mup_visualizer_spec_pane

0x4b95,	// (0x0002df95) call3_video_qcif_pane_ParamLimits

0x4b95,	// (0x0002df95) call3_video_qcif_pane

0x4ba6,	// (0x0002dfa6) call3_video_qcif_uncrop_pane_ParamLimits

0x4ba6,	// (0x0002dfa6) call3_video_qcif_uncrop_pane

0x4bb2,	// (0x0002dfb2) call3_video_subqcif_pane_ParamLimits

0x4bb2,	// (0x0002dfb2) call3_video_subqcif_pane

0x4bc6,	// (0x0002dfc6) call3_video_subqcif_uncrop_pane_ParamLimits

0x4bc6,	// (0x0002dfc6) call3_video_subqcif_uncrop_pane

0x4c37,	// (0x0002e037) popup_call3_audio_in_window_g4_ParamLimits

0x4c37,	// (0x0002e037) popup_call3_audio_in_window_g4

0x4b54,	// (0x0002df54) mup_spec_half_pane

0x4b5d,	// (0x0002df5d) mup_spec_half_pane_cp

0xf098,	// (0x00038498) mup_osc_middle_pane

0xf0a1,	// (0x000384a1) mup_visualizer_osc_pane_g1

0x4b34,	// (0x0002df34) mup_spec_bar_pane_ParamLimits

0x4b34,	// (0x0002df34) mup_spec_bar_pane

0xf085,	// (0x00038485) mup_spec_bar_pane_g1

0xf08f,	// (0x0003848f) mup_spec_bar_pane_g2

0x0001,

0x0033,	// (0x00029433) mup_spec_bar_pane_g

0x23f7,	// (0x0002b7f7) aid_cale_week_size_cell_pane_ParamLimits

0x240a,	// (0x0002b80a) bg_cale_heading_pane_ParamLimits

0xd122,	// (0x00036522) bg_cale_pane_cp01_ParamLimits

0x2422,	// (0x0002b822) cale_week_corner_pane_ParamLimits

0x2433,	// (0x0002b833) cale_week_day_heading_pane_ParamLimits

0x244b,	// (0x0002b84b) cale_week_scroll_pane_g1_ParamLimits

0x2460,	// (0x0002b860) cale_week_scroll_pane_g2_ParamLimits

0x2471,	// (0x0002b871) cale_week_scroll_pane_g3_ParamLimits

0x2482,	// (0x0002b882) cale_week_scroll_pane_g4_ParamLimits

0x2493,	// (0x0002b893) cale_week_scroll_pane_g5_ParamLimits

0x24a6,	// (0x0002b8a6) cale_week_scroll_pane_g6_ParamLimits

0x24b9,	// (0x0002b8b9) cale_week_scroll_pane_g7_ParamLimits

0x24cc,	// (0x0002b8cc) cale_week_scroll_pane_g8_ParamLimits

0x24df,	// (0x0002b8df) cale_week_scroll_pane_g9_ParamLimits

0x24f0,	// (0x0002b8f0) cale_week_scroll_pane_g10_ParamLimits

0x2501,	// (0x0002b901) cale_week_scroll_pane_g11_ParamLimits

0x2512,	// (0x0002b912) cale_week_scroll_pane_g12_ParamLimits

0x2523,	// (0x0002b923) cale_week_scroll_pane_g13_ParamLimits

0x2534,	// (0x0002b934) cale_week_scroll_pane_g14_ParamLimits

0x2545,	// (0x0002b945) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x000385be) cale_week_scroll_pane_g_ParamLimits

0x255a,	// (0x0002b95a) cale_week_time_pane_ParamLimits

0x256d,	// (0x0002b96d) grid_cale_week_pane_ParamLimits

0xd13b,	// (0x0003653b) listscroll_cale_week_pane_t1

0x2582,	// (0x0002b982) scroll_pane_cp08_ParamLimits

0x2f62,	// (0x0002c362) cale_month_corner_pane_ParamLimits

0xd599,	// (0x00036999) cale_month_pane_t1

0x3244,	// (0x0002c644) cale_month_week_pane_ParamLimits

0x38ff,	// (0x0002ccff) popup_call_status_window_g1_ParamLimits

0x3913,	// (0x0002cd13) popup_call_status_window_g2_ParamLimits

0x3927,	// (0x0002cd27) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x00038766) popup_call_status_window_g_ParamLimits

0xd952,	// (0x00036d52) aid_call2_pane

0x414b,	// (0x0002d54b) msg_header_pane_g1

0x42ab,	// (0x0002d6ab) postcard_address2_pane_ParamLimits

0x42ab,	// (0x0002d6ab) postcard_address2_pane

0x42bd,	// (0x0002d6bd) postcard_message2_pane_ParamLimits

0x42bd,	// (0x0002d6bd) postcard_message2_pane

0x4ae1,	// (0x0002dee1) message2_row_pane_ParamLimits

0x4ae1,	// (0x0002dee1) message2_row_pane

0x4b00,	// (0x0002df00) address2_row_pane_ParamLimits

0x4b00,	// (0x0002df00) address2_row_pane

0xf053,	// (0x00038453) postcard_message2_row_pane_g1

0xf05b,	// (0x0003845b) postcard_message2_row_pane_t1

0xf053,	// (0x00038453) address2_row_pane_g1

0xf05b,	// (0x0003845b) address2_row_pane_t1

0xb2a2,	// (0x000346a2) aid_size_cell_vorec

0xcc7b,	// (0x0003607b) main_rss_pane

0x4b13,	// (0x0002df13) rss_list_single_pane_ParamLimits

0x4b13,	// (0x0002df13) rss_list_single_pane

0xf069,	// (0x00038469) rss_list_single_pane_t1

0xf077,	// (0x00038477) rss_list_single_pane_t2

0x0001,

0x002e,	// (0x0002942e) rss_list_single_pane_t

0xcc7b,	// (0x0003607b) main_camera2_pane

0xcc7b,	// (0x0003607b) main_video2_pane

0x10f8,	// (0x0002a4f8) cams_zoom_pane_cp2_ParamLimits

0x10f8,	// (0x0002a4f8) cams_zoom_pane_cp2

0x1118,	// (0x0002a518) image2_vga_pane_ParamLimits

0x1118,	// (0x0002a518) image2_vga_pane

0x1169,	// (0x0002a569) main_camera2_pane_g1_ParamLimits

0x1169,	// (0x0002a569) main_camera2_pane_g1

0x1189,	// (0x0002a589) main_camera2_pane_g2_ParamLimits

0x1189,	// (0x0002a589) main_camera2_pane_g2

0x11a9,	// (0x0002a5a9) main_camera2_pane_g3_ParamLimits

0x11a9,	// (0x0002a5a9) main_camera2_pane_g3

0x11c9,	// (0x0002a5c9) main_camera2_pane_g4_ParamLimits

0x11c9,	// (0x0002a5c9) main_camera2_pane_g4

0x11e9,	// (0x0002a5e9) main_camera2_pane_g5_ParamLimits

0x11e9,	// (0x0002a5e9) main_camera2_pane_g5

0x1209,	// (0x0002a609) main_camera2_pane_g6_ParamLimits

0x1209,	// (0x0002a609) main_camera2_pane_g6

0x1229,	// (0x0002a629) main_camera2_pane_g7_ParamLimits

0x1229,	// (0x0002a629) main_camera2_pane_g7

0x1249,	// (0x0002a649) main_camera2_pane_g8_ParamLimits

0x1249,	// (0x0002a649) main_camera2_pane_g8

0x0008,

0xf61f,	// (0x00038a1f) main_camera2_pane_g_ParamLimits

0xf61f,	// (0x00038a1f) main_camera2_pane_g

0x1289,	// (0x0002a689) main_camera2_pane_t1_ParamLimits

0x1289,	// (0x0002a689) main_camera2_pane_t1

0x12be,	// (0x0002a6be) main_camera2_pane_t2_ParamLimits

0x12be,	// (0x0002a6be) main_camera2_pane_t2

0x12e4,	// (0x0002a6e4) main_camera2_pane_t3_ParamLimits

0x12e4,	// (0x0002a6e4) main_camera2_pane_t3

0x1342,	// (0x0002a742) main_camera2_pane_t4_ParamLimits

0x1342,	// (0x0002a742) main_camera2_pane_t4

0x0006,

0xf632,	// (0x00038a32) main_camera2_pane_t_ParamLimits

0xf632,	// (0x00038a32) main_camera2_pane_t

0x13d4,	// (0x0002a7d4) cams_zoom_pane_cp4_ParamLimits

0x13d4,	// (0x0002a7d4) cams_zoom_pane_cp4

0x13ea,	// (0x0002a7ea) image2_cif_pane_ParamLimits

0x13ea,	// (0x0002a7ea) image2_cif_pane

0x1415,	// (0x0002a815) image2_subqcif_pane_ParamLimits

0x1415,	// (0x0002a815) image2_subqcif_pane

0x142f,	// (0x0002a82f) main_video2_pane_g1_ParamLimits

0x142f,	// (0x0002a82f) main_video2_pane_g1

0x1449,	// (0x0002a849) main_video2_pane_g2_ParamLimits

0x1449,	// (0x0002a849) main_video2_pane_g2

0x145f,	// (0x0002a85f) main_video2_pane_g3_ParamLimits

0x145f,	// (0x0002a85f) main_video2_pane_g3

0x1475,	// (0x0002a875) main_video2_pane_g4_ParamLimits

0x1475,	// (0x0002a875) main_video2_pane_g4

0x148b,	// (0x0002a88b) main_video2_pane_g5_ParamLimits

0x148b,	// (0x0002a88b) main_video2_pane_g5

0x14a1,	// (0x0002a8a1) main_video2_pane_g6_ParamLimits

0x14a1,	// (0x0002a8a1) main_video2_pane_g6

0x0005,

0xf641,	// (0x00038a41) main_video2_pane_g_ParamLimits

0xf641,	// (0x00038a41) main_video2_pane_g

0x14bb,	// (0x0002a8bb) main_video2_pane_t1_ParamLimits

0x14bb,	// (0x0002a8bb) main_video2_pane_t1

0x14df,	// (0x0002a8df) main_video2_pane_t2_ParamLimits

0x14df,	// (0x0002a8df) main_video2_pane_t2

0x152d,	// (0x0002a92d) main_video2_pane_t3_ParamLimits

0x152d,	// (0x0002a92d) main_video2_pane_t3

0x0002,

0xf64e,	// (0x00038a4e) main_video2_pane_t_ParamLimits

0xf64e,	// (0x00038a4e) main_video2_pane_t

0x48e1,	// (0x0002dce1) call_muted_g2

0x0001,

0xf603,	// (0x00038a03) call_muted_g

0xcc7b,	// (0x0003607b) main_mup2_pane

0x4d1c,	// (0x0002e11c) main_mup2_pane_g1_ParamLimits

0x4d1c,	// (0x0002e11c) main_mup2_pane_g1

0x4d28,	// (0x0002e128) main_mup2_pane_g2_ParamLimits

0x4d28,	// (0x0002e128) main_mup2_pane_g2

0xb4bf,	// (0x000348bf) main_mup_pane_g13_cp1

0xb4c7,	// (0x000348c7) mup_volume_pane_cp1

0x4d44,	// (0x0002e144) main_mup2_pane_g4_ParamLimits

0x4d44,	// (0x0002e144) main_mup2_pane_g4

0x4d56,	// (0x0002e156) main_mup2_pane_g5_ParamLimits

0x4d56,	// (0x0002e156) main_mup2_pane_g5

0x4d68,	// (0x0002e168) main_mup2_pane_g6_ParamLimits

0x4d68,	// (0x0002e168) main_mup2_pane_g6

0x4d7a,	// (0x0002e17a) main_mup2_pane_g7_ParamLimits

0x4d7a,	// (0x0002e17a) main_mup2_pane_g7

0x0006,

0xf655,	// (0x00038a55) main_mup2_pane_g_ParamLimits

0xf655,	// (0x00038a55) main_mup2_pane_g

0x4d92,	// (0x0002e192) main_mup2_pane_t1_ParamLimits

0x4d92,	// (0x0002e192) main_mup2_pane_t1

0x4da8,	// (0x0002e1a8) main_mup2_pane_t2_ParamLimits

0x4da8,	// (0x0002e1a8) main_mup2_pane_t2

0x4dbe,	// (0x0002e1be) main_mup2_pane_t3_ParamLimits

0x4dbe,	// (0x0002e1be) main_mup2_pane_t3

0x4dd4,	// (0x0002e1d4) main_mup2_pane_t4_ParamLimits

0x4dd4,	// (0x0002e1d4) main_mup2_pane_t4

0x4dec,	// (0x0002e1ec) main_mup2_pane_t5_ParamLimits

0x4dec,	// (0x0002e1ec) main_mup2_pane_t5

0x4e04,	// (0x0002e204) main_mup2_pane_t6_ParamLimits

0x4e04,	// (0x0002e204) main_mup2_pane_t6

0x0005,

0xf664,	// (0x00038a64) main_mup2_pane_t_ParamLimits

0xf664,	// (0x00038a64) main_mup2_pane_t

0x4e34,	// (0x0002e234) mup2_visualizer_pane_ParamLimits

0x4e34,	// (0x0002e234) mup2_visualizer_pane

0x4e62,	// (0x0002e262) mup_progress_pane_cp_ParamLimits

0x4e62,	// (0x0002e262) mup_progress_pane_cp

0xb4aa,	// (0x000348aa) mup_volume_pane_cp_ParamLimits

0xb4aa,	// (0x000348aa) mup_volume_pane_cp

0x4e76,	// (0x0002e276) mup2_visualizer_pane_g1_ParamLimits

0x4e76,	// (0x0002e276) mup2_visualizer_pane_g1

0x4e8d,	// (0x0002e28d) mup2_visualizer_pane_g2_ParamLimits

0x4e8d,	// (0x0002e28d) mup2_visualizer_pane_g2

0x4e99,	// (0x0002e299) mup2_visualizer_pane_g3_ParamLimits

0x4e99,	// (0x0002e299) mup2_visualizer_pane_g3

0x0002,

0xf671,	// (0x00038a71) mup2_visualizer_pane_g_ParamLimits

0xf671,	// (0x00038a71) mup2_visualizer_pane_g

0xdf09,	// (0x00037309) aid_size_cell_fmradio

0x0df0,	// (0x0002a1f0) aid_height_parent_landcape

0xd401,	// (0x00036801) wml_content_pane_cp

0xd409,	// (0x00036809) wml_tabs_pane

0xd412,	// (0x00036812) popup_wml_miniature_window

0xd41a,	// (0x0003681a) scroll_pane_cp021

0xd42e,	// (0x0003682e) wml_content_pane_comp8

0xcc7b,	// (0x0003607b) bg_popup_sub_pane_cp05

0x4eb7,	// (0x0002e2b7) popup_wml_miniature_window_g1

0x4ebf,	// (0x0002e2bf) wml_miniature_view_pane

0x4ec7,	// (0x0002e2c7) aid_size_wml_view

0x4ecf,	// (0x0002e2cf) wml_miniature_view_pane_g1

0x4ed8,	// (0x0002e2d8) wml_miniature_view_pane_g2

0x4ee1,	// (0x0002e2e1) wml_miniature_view_pane_g3

0x4ee9,	// (0x0002e2e9) wml_miniature_view_pane_g4

0x4ef1,	// (0x0002e2f1) wml_miniature_view_pane_g5

0x4ef9,	// (0x0002e2f9) wml_miniature_view_pane_g6

0x4f01,	// (0x0002e301) wml_miniature_view_pane_g7

0x4f09,	// (0x0002e309) wml_miniature_view_pane_g8

0x0007,

0xf678,	// (0x00038a78) wml_miniature_view_pane_g

0x4f11,	// (0x0002e311) background_graphic_ParamLimits

0x4f11,	// (0x0002e311) background_graphic

0x4f1d,	// (0x0002e31d) wml_tabs_2_pane

0x4f26,	// (0x0002e326) wml_tabs_3_pane_ParamLimits

0x4f26,	// (0x0002e326) wml_tabs_3_pane

0x4f38,	// (0x0002e338) wml_tabs_4_pane_ParamLimits

0x4f38,	// (0x0002e338) wml_tabs_4_pane

0x4f4e,	// (0x0002e34e) wml_tabs_5_pane_ParamLimits

0x4f4e,	// (0x0002e34e) wml_tabs_5_pane

0x4f68,	// (0x0002e368) wml_tabs_pane_g2_ParamLimits

0x4f68,	// (0x0002e368) wml_tabs_pane_g2

0x4f7c,	// (0x0002e37c) wml_tabs_pane_g3_ParamLimits

0x4f7c,	// (0x0002e37c) wml_tabs_pane_g3

0x4f90,	// (0x0002e390) wml_tabs_2_active_pane_ParamLimits

0x4f90,	// (0x0002e390) wml_tabs_2_active_pane

0x4fa4,	// (0x0002e3a4) wml_tabs_2_passive_pane_ParamLimits

0x4fa4,	// (0x0002e3a4) wml_tabs_2_passive_pane

0x4fb8,	// (0x0002e3b8) wml_tabs_3_active_pane_cp_ParamLimits

0x4fb8,	// (0x0002e3b8) wml_tabs_3_active_pane_cp

0x4fcd,	// (0x0002e3cd) wml_tabs_3_passive_pane_ParamLimits

0x4fcd,	// (0x0002e3cd) wml_tabs_3_passive_pane

0x4fe0,	// (0x0002e3e0) wml_tabs_3_passive_pane_cp_ParamLimits

0x4fe0,	// (0x0002e3e0) wml_tabs_3_passive_pane_cp

0x4ff7,	// (0x0002e3f7) tabs_4_active_pane

0x4fff,	// (0x0002e3ff) tabs_4_passive_pane

0x5009,	// (0x0002e409) tabs_4_passive_pane_cp

0x5011,	// (0x0002e411) tabs_4_passive_pane_cp2

0xeebf,	// (0x000382bf) aid_height_text

0x3ea3,	// (0x0002d2a3) mup_volume_cont_pane_ParamLimits

0x3ea3,	// (0x0002d2a3) mup_volume_cont_pane

0x215c,	// (0x0002b55c) aid_size_cell_pinb

0xcf14,	// (0x00036314) aid_size_list_pinb

0x4e4e,	// (0x0002e24e) mup2_volume_cont_pane_ParamLimits

0x4e4e,	// (0x0002e24e) mup2_volume_cont_pane

0xb496,	// (0x00034896) mup2_volume_cont_pane_g1_ParamLimits

0xb496,	// (0x00034896) mup2_volume_cont_pane_g1

0x097f,	// (0x00029d7f) aid_size_cell_touch_ParamLimits

0x097f,	// (0x00029d7f) aid_size_cell_touch

0x0b48,	// (0x00029f48) touch_pane_ParamLimits

0x0b48,	// (0x00029f48) touch_pane

0xb200,	// (0x00034600) main_rss2_pane

0x5024,	// (0x0002e424) listscroll_rss2_pane

0x502d,	// (0x0002e42d) rss2_navigation_pane

0x5035,	// (0x0002e435) list_rss2_pane

0xda92,	// (0x00036e92) scroll_pane_cp22

0x503d,	// (0x0002e43d) rss2_navigation_pane_g1

0x5046,	// (0x0002e446) rss2_navigation_pane_g2

0x504e,	// (0x0002e44e) rss2_navigation_pane_g3

0x0002,

0xf689,	// (0x00038a89) rss2_navigation_pane_g

0x5056,	// (0x0002e456) rss2_navigation_pane_t1

0x5064,	// (0x0002e464) rss2_list_single_pane_ParamLimits

0x5064,	// (0x0002e464) rss2_list_single_pane

0x507c,	// (0x0002e47c) rss2_list_single_pane_t2

0x508a,	// (0x0002e48a) rss2_list_single_pane_t3_ParamLimits

0x508a,	// (0x0002e48a) rss2_list_single_pane_t3

0x50a7,	// (0x0002e4a7) rss2_list_single_pane_t4

0x36dc,	// (0x0002cadc) smil_status_pane_g1

0xb1f2,	// (0x000345f2) main_image2_pane_ParamLimits

0xb1f2,	// (0x000345f2) main_image2_pane

0x1269,	// (0x0002a669) main_camera2_pane_g9_ParamLimits

0x1269,	// (0x0002a669) main_camera2_pane_g9

0x1397,	// (0x0002a797) main_camera2_pane_t5_ParamLimits

0x1397,	// (0x0002a797) main_camera2_pane_t5

0xb466,	// (0x00034866) main_camera2_pane_t6_ParamLimits

0xb466,	// (0x00034866) main_camera2_pane_t6

0x50b5,	// (0x0002e4b5) main_image2_pane_g1_ParamLimits

0x50b5,	// (0x0002e4b5) main_image2_pane_g1

0x44ed,	// (0x0002d8ed) smil2_video_pane_ParamLimits

0x44ed,	// (0x0002d8ed) smil2_video_pane

0xb1a0,	// (0x000345a0) aid_zoom_text_primary_cp

0xb1e8,	// (0x000345e8) popup_preview_fixed_window

0xd36a,	// (0x0003676a) im_reading_pane_g1

0x10e0,	// (0x0002a4e0) cams2_bc_adjust_pane_cp_ParamLimits

0x10e0,	// (0x0002a4e0) cams2_bc_adjust_pane_cp

0x13c6,	// (0x0002a7c6) cams2_bc_adjust_pane_ParamLimits

0x13c6,	// (0x0002a7c6) cams2_bc_adjust_pane

0x50cb,	// (0x0002e4cb) cams2_bc_adjust_pane_g1

0xb4cf,	// (0x000348cf) cams2_slider_pane

0xb4d8,	// (0x000348d8) cams2_slider_pane_g1

0xb4e1,	// (0x000348e1) cams2_slider_pane_g2

0x0006,

0xf690,	// (0x00038a90) cams2_slider_pane_g

0x0bb8,	// (0x00029fb8) calc_display_pane_ParamLimits

0x0be0,	// (0x00029fe0) calc_paper_pane_ParamLimits

0x0c03,	// (0x0002a003) grid_calc_pane_ParamLimits

0xb394,	// (0x00034794) popup_clock_digital_window_t1_ParamLimits

0xdea6,	// (0x000372a6) main_image_pane_t1

0x0b9a,	// (0x00029f9a) aid_size_cell_calc_ParamLimits

0x0b9a,	// (0x00029f9a) aid_size_cell_calc

0x0e36,	// (0x0002a236) popup_blid_sat_info2_window_ParamLimits

0x0e36,	// (0x0002a236) popup_blid_sat_info2_window

0x50db,	// (0x0002e4db) aid_size_cell_blid

0x50e3,	// (0x0002e4e3) bg_popup_window_pane_cp07

0x5106,	// (0x0002e506) grid_popup_blid_pane

0x5110,	// (0x0002e510) heading_pane_cp05_ParamLimits

0x5110,	// (0x0002e510) heading_pane_cp05

0x51da,	// (0x0002e5da) cell_popup_blid_pane_ParamLimits

0x51da,	// (0x0002e5da) cell_popup_blid_pane

0x5200,	// (0x0002e600) cell_popup_blid_pane_g1

0x5208,	// (0x0002e608) cell_popup_blid_pane_t1

0x4e1e,	// (0x0002e21e) mup2_indicator_pane_ParamLimits

0x4e1e,	// (0x0002e21e) mup2_indicator_pane

0xdbdf,	// (0x00036fdf) mup2_visualizer_osc_pane

0x4ea5,	// (0x0002e2a5) mup2_visualizer_spec_pane_ParamLimits

0x4ea5,	// (0x0002e2a5) mup2_visualizer_spec_pane

0x5216,	// (0x0002e616) mup2_spec_half_pane

0x521f,	// (0x0002e61f) mup2_spec_half_pane_cp

0x5227,	// (0x0002e627) mup2_spec_bar_pane_ParamLimits

0x5227,	// (0x0002e627) mup2_spec_bar_pane

0xf085,	// (0x00038485) mup2_spec_bar_pane_g1

0xf08f,	// (0x0003848f) mup2_spec_bar_pane_g2

0x0001,

0x0033,	// (0x00029433) mup2_spec_bar_pane_g

0x5247,	// (0x0002e647) mup2_osc_middle_pane

0xf0a1,	// (0x000384a1) mup2_visualizer_osc_pane_g1

0xc88a,	// (0x00035c8a) popup_number_entry_window_t1_ParamLimits

0xc89d,	// (0x00035c9d) popup_number_entry_window_t2_ParamLimits

0xc8af,	// (0x00035caf) popup_number_entry_window_t3_ParamLimits

0x209c,	// (0x0002b49c) popup_number_entry_window_t5_ParamLimits

0x209c,	// (0x0002b49c) popup_number_entry_window_t5

0xf0d8,	// (0x000384d8) popup_number_entry_window_t_ParamLimits

0xc8c1,	// (0x00035cc1) text_title_cp2_ParamLimits

0xb3d3,	// (0x000347d3) aid_hotspot_pointer_text2_pane

0xb3f9,	// (0x000347f9) main_viewer_pane_g9_ParamLimits

0xb3f9,	// (0x000347f9) main_viewer_pane_g9

0xd599,	// (0x00036999) cale_month_pane_t1_ParamLimits

0xd600,	// (0x00036a00) bg_cale_pane_ParamLimits

0xd618,	// (0x00036a18) list_cale_pane_ParamLimits

0xd13b,	// (0x0003653b) listscroll_cale_day_pane_t1

0xd629,	// (0x00036a29) scroll_pane_cp09_ParamLimits

0x3ed9,	// (0x0002d2d9) main_mup_eq_pane_t1_ParamLimits

0x3ed9,	// (0x0002d2d9) main_mup_eq_pane_t1

0x3ef5,	// (0x0002d2f5) main_mup_eq_pane_t2_ParamLimits

0x3ef5,	// (0x0002d2f5) main_mup_eq_pane_t2

0x3f11,	// (0x0002d311) main_mup_eq_pane_t3_ParamLimits

0x3f11,	// (0x0002d311) main_mup_eq_pane_t3

0x3f2f,	// (0x0002d32f) main_mup_eq_pane_t4_ParamLimits

0x3f2f,	// (0x0002d32f) main_mup_eq_pane_t4

0x3f4d,	// (0x0002d34d) main_mup_eq_pane_t5_ParamLimits

0x3f4d,	// (0x0002d34d) main_mup_eq_pane_t5

0x3f6b,	// (0x0002d36b) main_mup_eq_pane_t6_ParamLimits

0x3f6b,	// (0x0002d36b) main_mup_eq_pane_t6

0x3f81,	// (0x0002d381) main_mup_eq_pane_t7_ParamLimits

0x3f81,	// (0x0002d381) main_mup_eq_pane_t7

0x3f97,	// (0x0002d397) main_mup_eq_pane_t8_ParamLimits

0x3f97,	// (0x0002d397) main_mup_eq_pane_t8

0x3fad,	// (0x0002d3ad) main_mup_eq_pane_t9_ParamLimits

0x3fad,	// (0x0002d3ad) main_mup_eq_pane_t9

0x3fc7,	// (0x0002d3c7) main_mup_eq_pane_t10_ParamLimits

0x3fc7,	// (0x0002d3c7) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x00038865) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x00038865) main_mup_eq_pane_t

0x4076,	// (0x0002d476) mup_equalizer_pane_cp5_ParamLimits

0x408a,	// (0x0002d48a) mup_equalizer_pane_cp6_ParamLimits

0x409e,	// (0x0002d49e) mup_equalizer_pane_cp7_ParamLimits

0xb200,	// (0x00034600) main_gallery_pane

0xf0aa,	// (0x000384aa) smil2_volume_pane

0xf0b2,	// (0x000384b2) smil_status_volume_pane_g1_ParamLimits

0xf0c5,	// (0x000384c5) smil_status_volume_pane_g2_ParamLimits

0xb444,	// (0x00034844) smil_status_volume_pane_g3_ParamLimits

0xf608,	// (0x00038a08) smil_status_volume_pane_g_ParamLimits

0x50e3,	// (0x0002e4e3) bg_popup_window_pane_cp07_ParamLimits

0x50f1,	// (0x0002e4f1) blid_firmament_pane

0x5250,	// (0x0002e650) aid_size_cell_gallery_ParamLimits

0x5250,	// (0x0002e650) aid_size_cell_gallery

0x5266,	// (0x0002e666) grid_gallery_pane_ParamLimits

0x5266,	// (0x0002e666) grid_gallery_pane

0x527f,	// (0x0002e67f) cell_gallery_pane_ParamLimits

0x527f,	// (0x0002e67f) cell_gallery_pane

0x52c8,	// (0x0002e6c8) bg_cell_gallery_focus_pane_ParamLimits

0x52c8,	// (0x0002e6c8) bg_cell_gallery_focus_pane

0x52da,	// (0x0002e6da) cell_gallery_pane_g1_ParamLimits

0x52da,	// (0x0002e6da) cell_gallery_pane_g1

0x52e6,	// (0x0002e6e6) cell_gallery_pane_g2_ParamLimits

0x52e6,	// (0x0002e6e6) cell_gallery_pane_g2

0x52f3,	// (0x0002e6f3) cell_gallery_pane_g3_ParamLimits

0x52f3,	// (0x0002e6f3) cell_gallery_pane_g3

0x5300,	// (0x0002e700) cell_gallery_pane_g4_ParamLimits

0x5300,	// (0x0002e700) cell_gallery_pane_g4

0x0003,

0xf6b6,	// (0x00038ab6) cell_gallery_pane_g_ParamLimits

0xf6b6,	// (0x00038ab6) cell_gallery_pane_g

0x530c,	// (0x0002e70c) bg_cell_gallery_focus_pane_g1

0x5314,	// (0x0002e714) bg_cell_gallery_focus_pane_g2

0x531c,	// (0x0002e71c) bg_cell_gallery_focus_pane_g3

0x5324,	// (0x0002e724) bg_cell_gallery_focus_pane_g4

0x532c,	// (0x0002e72c) bg_cell_gallery_focus_pane_g5

0x5334,	// (0x0002e734) bg_cell_gallery_focus_pane_g6

0x533c,	// (0x0002e73c) bg_cell_gallery_focus_pane_g7

0x5344,	// (0x0002e744) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6bf,	// (0x00038abf) bg_cell_gallery_focus_pane_g

0x534c,	// (0x0002e74c) aid_firma_cardinal

0x5360,	// (0x0002e760) blid_firmament_pane_t1

0x5377,	// (0x0002e777) blid_firmament_pane_t2

0x538e,	// (0x0002e78e) blid_firmament_pane_t3

0x53a5,	// (0x0002e7a5) blid_firmament_pane_t4

0x0003,

0xf6d0,	// (0x00038ad0) blid_firmament_pane_t

0x53bc,	// (0x0002e7bc) blid_sat_info_pane

0x53cc,	// (0x0002e7cc) blid_sat_info_pane_g1

0x53cc,	// (0x0002e7cc) blid_sat_info_pane_g2

0x0001,

0xf6d9,	// (0x00038ad9) blid_sat_info_pane_g

0x53d6,	// (0x0002e7d6) blid_sat_info_pane_t1

0x53e4,	// (0x0002e7e4) smil2_volume_content_pane

0x53ed,	// (0x0002e7ed) smil2_volume_pane_g1

0x53f5,	// (0x0002e7f5) smil2_volume_content_pane_g1

0x53fe,	// (0x0002e7fe) smil2_volume_content_pane_g2

0x5407,	// (0x0002e807) smil2_volume_content_pane_g3

0x5410,	// (0x0002e810) smil2_volume_content_pane_g4

0x5419,	// (0x0002e819) smil2_volume_content_pane_g5

0x5422,	// (0x0002e822) smil2_volume_content_pane_g6

0x542b,	// (0x0002e82b) smil2_volume_content_pane_g7

0x5434,	// (0x0002e834) smil2_volume_content_pane_g8

0x543d,	// (0x0002e83d) smil2_volume_content_pane_g9

0x5446,	// (0x0002e846) smil2_volume_content_pane_g10

0x0009,

0xf6de,	// (0x00038ade) smil2_volume_content_pane_g

0x25dc,	// (0x0002b9dc) cale_week_day_heading_pane_t1_ParamLimits

0x25f0,	// (0x0002b9f0) cale_week_day_heading_pane_t2_ParamLimits

0x2604,	// (0x0002ba04) cale_week_day_heading_pane_t3_ParamLimits

0x2618,	// (0x0002ba18) cale_week_day_heading_pane_t4_ParamLimits

0x262c,	// (0x0002ba2c) cale_week_day_heading_pane_t5_ParamLimits

0x2640,	// (0x0002ba40) cale_week_day_heading_pane_t6_ParamLimits

0x2656,	// (0x0002ba56) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x000385dd) cale_week_day_heading_pane_t_ParamLimits

0xd14d,	// (0x0003654d) bg_cale_side_pane_ParamLimits

0x0cd2,	// (0x0002a0d2) cale_week_time_pane_t1_ParamLimits

0x0cea,	// (0x0002a0ea) cale_week_time_pane_t2_ParamLimits

0x0d02,	// (0x0002a102) cale_week_time_pane_t3_ParamLimits

0x0d1a,	// (0x0002a11a) cale_week_time_pane_t4_ParamLimits

0x0d32,	// (0x0002a132) cale_week_time_pane_t5_ParamLimits

0x0d4a,	// (0x0002a14a) cale_week_time_pane_t6_ParamLimits

0x0d62,	// (0x0002a162) cale_week_time_pane_t7_ParamLimits

0x0d7a,	// (0x0002a17a) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x000385ec) cale_week_time_pane_t_ParamLimits

0x266a,	// (0x0002ba6a) cell_cale_week_pane_g2_ParamLimits

0xd14d,	// (0x0003654d) bg_cale_side_pane_cp01_ParamLimits

0x3571,	// (0x0002c971) cale_month_week_pane_t1_ParamLimits

0x3588,	// (0x0002c988) cale_month_week_pane_t2_ParamLimits

0x359f,	// (0x0002c99f) cale_month_week_pane_t3_ParamLimits

0x35b6,	// (0x0002c9b6) cale_month_week_pane_t4_ParamLimits

0x35cd,	// (0x0002c9cd) cale_month_week_pane_t5_ParamLimits

0x35e4,	// (0x0002c9e4) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x000386c5) cale_month_week_pane_t_ParamLimits

0xb314,	// (0x00034714) cell_cale_month_pane_g1_ParamLimits

0xb200,	// (0x00034600) main_cale_event_viewer_pane

0xc860,	// (0x00035c60) listscroll_cale_event_viewer_pane

0x544f,	// (0x0002e84f) list_cale_ev_pane

0x5457,	// (0x0002e857) scroll_pane_cp023

0x5463,	// (0x0002e863) field_cale_ev_pane_ParamLimits

0x5463,	// (0x0002e863) field_cale_ev_pane

0x547d,	// (0x0002e87d) field_cale_ev_content_pane_ParamLimits

0x547d,	// (0x0002e87d) field_cale_ev_content_pane

0x5489,	// (0x0002e889) field_cale_ev_pane_g1_ParamLimits

0x5489,	// (0x0002e889) field_cale_ev_pane_g1

0x5495,	// (0x0002e895) field_cale_ev_pane_g2_ParamLimits

0x5495,	// (0x0002e895) field_cale_ev_pane_g2

0x54ad,	// (0x0002e8ad) field_cale_ev_pane_g3_ParamLimits

0x54ad,	// (0x0002e8ad) field_cale_ev_pane_g3

0x0002,

0xf6f3,	// (0x00038af3) field_cale_ev_pane_g_ParamLimits

0xf6f3,	// (0x00038af3) field_cale_ev_pane_g

0x54c5,	// (0x0002e8c5) field_cale_ev_pane_t1_ParamLimits

0x54c5,	// (0x0002e8c5) field_cale_ev_pane_t1

0x54dc,	// (0x0002e8dc) field_cale_ev_content_pane_t1_ParamLimits

0x54dc,	// (0x0002e8dc) field_cale_ev_content_pane_t1

0xdd56,	// (0x00037156) bg_button_pane_cp01

0xcffb,	// (0x000363fb) listscroll_cale_week_pane_ParamLimits

0x23ed,	// (0x0002b7ed) popup_toolbar_window_cp01

0xd13b,	// (0x0003653b) listscroll_cale_week_pane_t1_ParamLimits

0xcffb,	// (0x000363fb) listscroll_cale_day_pane_ParamLimits

0x373b,	// (0x0002cb3b) popup_toolbar_window_cp02

0xd13b,	// (0x0003653b) listscroll_cale_day_pane_t1_ParamLimits

0xcffb,	// (0x000363fb) main_cale_month_pane_ParamLimits

0x105c,	// (0x0002a45c) popup_toolbar_window_cp03_ParamLimits

0x105c,	// (0x0002a45c) popup_toolbar_window_cp03

0x43b1,	// (0x0002d7b1) main_image_pane_g2_ParamLimits

0x43b1,	// (0x0002d7b1) main_image_pane_g2

0x43c2,	// (0x0002d7c2) main_image_pane_g3_ParamLimits

0x43c2,	// (0x0002d7c2) main_image_pane_g3

0x0002,

0xf4f7,	// (0x000388f7) main_image_pane_g_ParamLimits

0xf4f7,	// (0x000388f7) main_image_pane_g

0xdea6,	// (0x000372a6) main_image_pane_t1_ParamLimits

0x43d3,	// (0x0002d7d3) main_image_pane_t2_ParamLimits

0x43d3,	// (0x0002d7d3) main_image_pane_t2

0x43e5,	// (0x0002d7e5) main_image_pane_t3_ParamLimits

0x43e5,	// (0x0002d7e5) main_image_pane_t3

0x440d,	// (0x0002d80d) main_image_pane_t4_ParamLimits

0x440d,	// (0x0002d80d) main_image_pane_t4

0x0003,

0xf4fe,	// (0x000388fe) main_image_pane_t_ParamLimits

0xf4fe,	// (0x000388fe) main_image_pane_t

0x442d,	// (0x0002d82d) popup_image_details_window_cp01

0x4437,	// (0x0002d837) popup_toobar_trans_pane_cp01_ParamLimits

0x4437,	// (0x0002d837) popup_toobar_trans_pane_cp01

0x0f0d,	// (0x0002a30d) popup_image_details_window_ParamLimits

0x0f0d,	// (0x0002a30d) popup_image_details_window

0xb417,	// (0x00034817) popup_image_focus_window

0x109a,	// (0x0002a49a) camera2_autofocus_pane_ParamLimits

0x109a,	// (0x0002a49a) camera2_autofocus_pane

0xc860,	// (0x00035c60) bg_popup_sub_pane_cp06

0x54f9,	// (0x0002e8f9) popup_image_focus_window_g1

0x5501,	// (0x0002e901) popup_image_focus_window_g2

0x5509,	// (0x0002e909) popup_image_focus_window_g3

0x5511,	// (0x0002e911) popup_image_focus_window_g4

0x0003,

0xf6fa,	// (0x00038afa) popup_image_focus_window_g

0x5519,	// (0x0002e919) popup_image_focus_window_t1

0x5527,	// (0x0002e927) popup_image_focus_window_t2

0x5537,	// (0x0002e937) popup_image_focus_window_t3

0x0002,

0xf703,	// (0x00038b03) popup_image_focus_window_t

0x5545,	// (0x0002e945) camera2_autofocus_pane_g1

0xcd8f,	// (0x0003618f) bg_tb_trans_pane_cp01

0x5583,	// (0x0002e983) popup_image_details_window_g1

0x5596,	// (0x0002e996) popup_image_details_window_g2

0x0002,

0xf715,	// (0x00038b15) popup_image_details_window_g

0x55bf,	// (0x0002e9bf) popup_image_details_window_t1

0x55d1,	// (0x0002e9d1) popup_image_details_window_t2

0x55ea,	// (0x0002e9ea) popup_image_details_window_t3

0x55fe,	// (0x0002e9fe) popup_image_details_window_t4

0x5619,	// (0x0002ea19) popup_image_details_window_t5

0x0004,

0xf71c,	// (0x00038b1c) popup_image_details_window_t

0xcfe7,	// (0x000363e7) bg_calc_paper_pane_ParamLimits

0xb200,	// (0x00034600) grid_highlight_pane_cp013

0xb212,	// (0x00034612) list_calc_pane_ParamLimits

0xb224,	// (0x00034624) scroll_pane_cp024

0xcffb,	// (0x000363fb) bg_calc_display_pane_ParamLimits

0x0c31,	// (0x0002a031) calc_display_pane_t1_ParamLimits

0x0c43,	// (0x0002a043) calc_display_pane_t2_ParamLimits

0xb22c,	// (0x0003462c) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x0003855f) calc_display_pane_t_ParamLimits

0x0ca6,	// (0x0002a0a6) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x0003857c) cell_calc_pane_g

0x0caf,	// (0x0002a0af) cell_calc_pane_t1

0xd05a,	// (0x0003645a) grid_highlight_pane_cp02_ParamLimits

0xd070,	// (0x00036470) toolbar_button_pane_cp01_ParamLimits

0xd070,	// (0x00036470) toolbar_button_pane_cp01

0xdeeb,	// (0x000372eb) temp_image_control_pane_ParamLimits

0xdeeb,	// (0x000372eb) temp_image_control_pane

0xb1f2,	// (0x000345f2) main_mp3_pane

0x5633,	// (0x0002ea33) temp_image_control_pane_g1_ParamLimits

0x5633,	// (0x0002ea33) temp_image_control_pane_g1

0x5641,	// (0x0002ea41) temp_image_control_pane_g2_ParamLimits

0x5641,	// (0x0002ea41) temp_image_control_pane_g2

0x5653,	// (0x0002ea53) temp_image_control_pane_g3_ParamLimits

0x5653,	// (0x0002ea53) temp_image_control_pane_g3

0x5663,	// (0x0002ea63) temp_image_control_pane_g4_ParamLimits

0x5663,	// (0x0002ea63) temp_image_control_pane_g4

0x0003,

0xf727,	// (0x00038b27) temp_image_control_pane_g_ParamLimits

0xf727,	// (0x00038b27) temp_image_control_pane_g

0x5633,	// (0x0002ea33) main_mp3_pane_g1

0x5676,	// (0x0002ea76) main_mp3_pane_g2

0x0007,

0xf730,	// (0x00038b30) main_mp3_pane_g

0x56d3,	// (0x0002ead3) main_mp3_pane_t1

0xd1bc,	// (0x000365bc) main_camera_pane_g8_ParamLimits

0xd1bc,	// (0x000365bc) main_camera_pane_g8

0x2910,	// (0x0002bd10) main_video_pane_g7_ParamLimits

0x2910,	// (0x0002bd10) main_video_pane_g7

0xb484,	// (0x00034884) main_camera2_pane_t7_ParamLimits

0xb484,	// (0x00034884) main_camera2_pane_t7

0xd3c1,	// (0x000367c1) scroll_pane_cp025_ParamLimits

0xd3c1,	// (0x000367c1) scroll_pane_cp025

0xd3d5,	// (0x000367d5) scroll_pane_cp026_ParamLimits

0xd3d5,	// (0x000367d5) scroll_pane_cp026

0xd3e4,	// (0x000367e4) wml_content_pane_ParamLimits

0xb200,	// (0x00034600) main_touch_calib_pane

0x57a7,	// (0x0002eba7) main_touch_calib_pane_g1

0x57b3,	// (0x0002ebb3) main_touch_calib_pane_g2

0x57bf,	// (0x0002ebbf) main_touch_calib_pane_g3

0x57cb,	// (0x0002ebcb) main_touch_calib_pane_g4

0x0003,

0xf74e,	// (0x00038b4e) main_touch_calib_pane_g

0x57d7,	// (0x0002ebd7) main_touch_calib_pane_t1

0x57f1,	// (0x0002ebf1) main_touch_calib_pane_t2

0x0004,

0xf757,	// (0x00038b57) main_touch_calib_pane_t

0xdb20,	// (0x00036f20) mup_progress_pane_cp02

0xdb3f,	// (0x00036f3f) navi_pane_g1

0xdba1,	// (0x00036fa1) navi_pane_mp_t3

0xb1f2,	// (0x000345f2) main_mp3_pane_ParamLimits

0x4a93,	// (0x0002de93) navi_pane_ParamLimits

0x5633,	// (0x0002ea33) main_mp3_pane_g1_ParamLimits

0x5676,	// (0x0002ea76) main_mp3_pane_g2_ParamLimits

0x5684,	// (0x0002ea84) main_mp3_pane_g3_ParamLimits

0x5684,	// (0x0002ea84) main_mp3_pane_g3

0x5692,	// (0x0002ea92) main_mp3_pane_g4_ParamLimits

0x5692,	// (0x0002ea92) main_mp3_pane_g4

0x56a0,	// (0x0002eaa0) main_mp3_pane_g5_ParamLimits

0x56a0,	// (0x0002eaa0) main_mp3_pane_g5

0x56ae,	// (0x0002eaae) main_mp3_pane_g6_ParamLimits

0x56ae,	// (0x0002eaae) main_mp3_pane_g6

0x56bb,	// (0x0002eabb) main_mp3_pane_g7_ParamLimits

0x56bb,	// (0x0002eabb) main_mp3_pane_g7

0x56c7,	// (0x0002eac7) main_mp3_pane_g8_ParamLimits

0x56c7,	// (0x0002eac7) main_mp3_pane_g8

0xf730,	// (0x00038b30) main_mp3_pane_g_ParamLimits

0x56e1,	// (0x0002eae1) main_mp3_pane_t2

0x56ef,	// (0x0002eaef) main_mp3_pane_t3

0x56fd,	// (0x0002eafd) main_mp3_pane_t4

0x570b,	// (0x0002eb0b) main_mp3_pane_t5

0x0005,

0xf741,	// (0x00038b41) main_mp3_pane_t

0x5727,	// (0x0002eb27) mup_progress_pane_cp01

0xb1a0,	// (0x000345a0) aid_zoom_text_secondary2

0x544f,	// (0x0002e84f) list_cale_ev2_pane

0x5457,	// (0x0002e857) scroll_pane_cp023_ParamLimits

0x5847,	// (0x0002ec47) field_cale_ev2_pane_ParamLimits

0x5847,	// (0x0002ec47) field_cale_ev2_pane

0x586d,	// (0x0002ec6d) field_cale_ev2_pane_g1_ParamLimits

0x586d,	// (0x0002ec6d) field_cale_ev2_pane_g1

0x5879,	// (0x0002ec79) field_cale_ev2_pane_g2_ParamLimits

0x5879,	// (0x0002ec79) field_cale_ev2_pane_g2

0x5891,	// (0x0002ec91) field_cale_ev2_pane_g3_ParamLimits

0x5891,	// (0x0002ec91) field_cale_ev2_pane_g3

0x0003,

0xf762,	// (0x00038b62) field_cale_ev2_pane_g_ParamLimits

0xf762,	// (0x00038b62) field_cale_ev2_pane_g

0x58b5,	// (0x0002ecb5) field_cale_ev2_pane_t1_ParamLimits

0x58b5,	// (0x0002ecb5) field_cale_ev2_pane_t1

0x58cc,	// (0x0002eccc) field_cale_ev2_pane_t2_ParamLimits

0x58cc,	// (0x0002eccc) field_cale_ev2_pane_t2

0x0001,

0xf76b,	// (0x00038b6b) field_cale_ev2_pane_t_ParamLimits

0xf76b,	// (0x00038b6b) field_cale_ev2_pane_t

0x4261,	// (0x0002d661) main_postcard_pane_g5_ParamLimits

0x4261,	// (0x0002d661) main_postcard_pane_g5

0x4277,	// (0x0002d677) main_postcard_pane_g6_ParamLimits

0x4277,	// (0x0002d677) main_postcard_pane_g6

0x26c0,	// (0x0002bac0) camera2_autofocus_pane_cp_ParamLimits

0x26c0,	// (0x0002bac0) camera2_autofocus_pane_cp

0xb1f2,	// (0x000345f2) main_mup3_pane

0x5901,	// (0x0002ed01) main_mup3_pane_g1_ParamLimits

0x5901,	// (0x0002ed01) main_mup3_pane_g1

0x5923,	// (0x0002ed23) main_mup3_pane_g2_ParamLimits

0x5923,	// (0x0002ed23) main_mup3_pane_g2

0x59a8,	// (0x0002eda8) main_mup3_pane_g3_ParamLimits

0x59a8,	// (0x0002eda8) main_mup3_pane_g3

0x59ee,	// (0x0002edee) main_mup3_pane_g4_ParamLimits

0x59ee,	// (0x0002edee) main_mup3_pane_g4

0x5a34,	// (0x0002ee34) main_mup3_pane_g5_ParamLimits

0x5a34,	// (0x0002ee34) main_mup3_pane_g5

0x5a7c,	// (0x0002ee7c) main_mup3_pane_g6_ParamLimits

0x5a7c,	// (0x0002ee7c) main_mup3_pane_g6

0x5a8f,	// (0x0002ee8f) main_mup3_pane_g7_ParamLimits

0x5a8f,	// (0x0002ee8f) main_mup3_pane_g7

0x0007,

0xf77b,	// (0x00038b7b) main_mup3_pane_g_ParamLimits

0xf77b,	// (0x00038b7b) main_mup3_pane_g

0x5b0a,	// (0x0002ef0a) main_mup3_pane_t1_ParamLimits

0x5b0a,	// (0x0002ef0a) main_mup3_pane_t1

0x5b7e,	// (0x0002ef7e) main_mup3_pane_t2_ParamLimits

0x5b7e,	// (0x0002ef7e) main_mup3_pane_t2

0x5c52,	// (0x0002f052) main_mup3_pane_t4_ParamLimits

0x5c52,	// (0x0002f052) main_mup3_pane_t4

0x5cb0,	// (0x0002f0b0) main_mup3_pane_t5_ParamLimits

0x5cb0,	// (0x0002f0b0) main_mup3_pane_t5

0x5d6c,	// (0x0002f16c) main_mup3_pane_t6_ParamLimits

0x5d6c,	// (0x0002f16c) main_mup3_pane_t6

0x0005,

0xf78c,	// (0x00038b8c) main_mup3_pane_t_ParamLimits

0xf78c,	// (0x00038b8c) main_mup3_pane_t

0x5e24,	// (0x0002f224) mup3_progress_pane_ParamLimits

0x5e24,	// (0x0002f224) mup3_progress_pane

0x5eb0,	// (0x0002f2b0) popup_mup3_control_window_ParamLimits

0x5eb0,	// (0x0002f2b0) popup_mup3_control_window

0x5ecc,	// (0x0002f2cc) popup_mup3_text_window

0x5eea,	// (0x0002f2ea) mup3_progress_pane_t1

0x5f09,	// (0x0002f309) mup3_progress_pane_t2

0x5f28,	// (0x0002f328) mup3_progress_pane_t3

0x0002,

0xf799,	// (0x00038b99) mup3_progress_pane_t

0x5f45,	// (0x0002f345) mup_progress_pane_cp03

0xc860,	// (0x00035c60) bg_tb_trans_pane_cp04

0x5f55,	// (0x0002f355) mup3_volume_pane

0x5f5d,	// (0x0002f35d) popup_mup3_control_window_g1

0x5f66,	// (0x0002f366) mup3_volume_pane_g1

0x5f6f,	// (0x0002f36f) mup3_volume_pane_g2

0x5f78,	// (0x0002f378) mup3_volume_pane_g3

0x0002,

0xf7a0,	// (0x00038ba0) mup3_volume_pane_g

0xc860,	// (0x00035c60) bg_tb_trans_pane_cp03

0x5f81,	// (0x0002f381) popup_mup3_text_window_g1

0x5f89,	// (0x0002f389) popup_mup3_text_window_t1

0xd043,	// (0x00036443) list_calc_item_pane_g1_ParamLimits

0x501b,	// (0x0002e41b) mup_volume_pane_cp_g1

0x580b,	// (0x0002ec0b) main_touch_calib_pane_t3

0x581f,	// (0x0002ec1f) main_touch_calib_pane_t4

0x5833,	// (0x0002ec33) main_touch_calib_pane_t5

0xb18c,	// (0x0003458c) aid_cell_size_toolbar2

0xb194,	// (0x00034594) aid_popup3_width_pane

0xb1a0,	// (0x000345a0) aid_zoom_text_msg_primary

0xb2fe,	// (0x000346fe) vorec_t7

0xd007,	// (0x00036407) bg_calc_paper_pane_g1_ParamLimits

0xd013,	// (0x00036413) bg_calc_paper_pane_g2_ParamLimits

0xd01f,	// (0x0003641f) bg_calc_paper_pane_g3_ParamLimits

0xd02b,	// (0x0003642b) bg_calc_paper_pane_g4_ParamLimits

0xd037,	// (0x00036437) bg_calc_paper_pane_g5_ParamLimits

0x22cd,	// (0x0002b6cd) bg_calc_paper_pane_g6_ParamLimits

0x22de,	// (0x0002b6de) bg_calc_paper_pane_g7_ParamLimits

0x22ef,	// (0x0002b6ef) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x00038566) bg_calc_paper_pane_g_ParamLimits

0x2302,	// (0x0002b702) calc_bg_paper_pane_g9_ParamLimits

0x281a,	// (0x0002bc1a) image_qvga_pane_ParamLimits

0x281a,	// (0x0002bc1a) image_qvga_pane

0xcee4,	// (0x000362e4) bg_popup_sub_pane_cp04_ParamLimits

0xde22,	// (0x00037222) popup_mup_playback_window_g1_ParamLimits

0xde2e,	// (0x0003722e) popup_mup_playback_window_t1_ParamLimits

0xde43,	// (0x00037243) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x000388f2) popup_mup_playback_window_t_ParamLimits

0x4d38,	// (0x0002e138) main_mup2_pane_g3_ParamLimits

0x4d38,	// (0x0002e138) main_mup2_pane_g3

0x2b71,	// (0x0002bf71) popup_toolbar_window_cp04

0xe238,	// (0x00037638) popup_call2_audio_second_window_g3_ParamLimits

0xe238,	// (0x00037638) popup_call2_audio_second_window_g3

0xe642,	// (0x00037a42) popup_call2_audio_first_window_g4_ParamLimits

0xe642,	// (0x00037a42) popup_call2_audio_first_window_g4

0xecc1,	// (0x000380c1) popup_call2_audio_in_window_g4_ParamLimits

0xecc1,	// (0x000380c1) popup_call2_audio_in_window_g4

0x4393,	// (0x0002d793) aid_area_sk_bg_cut_ParamLimits

0x4393,	// (0x0002d793) aid_area_sk_bg_cut

0xde58,	// (0x00037258) aid_area_sk_bg_cut_2_ParamLimits

0xde58,	// (0x00037258) aid_area_sk_bg_cut_2

0x52b8,	// (0x0002e6b8) aid_placing_details_win

0x52c0,	// (0x0002e6c0) aid_placing_details_win_2

0x5545,	// (0x0002e945) camera2_autofocus_pane_g1_ParamLimits

0x0af3,	// (0x00029ef3) popup_fixed_preview_cale_window_ParamLimits

0x0af3,	// (0x00029ef3) popup_fixed_preview_cale_window

0xdbf0,	// (0x00036ff0) navi_slider_pane_g3

0xdbf9,	// (0x00036ff9) navi_slider_pane_g4

0xdc02,	// (0x00037002) navi_slider_pane_g5

0xdbf0,	// (0x00036ff0) navi_slider_pane_g6

0xb3ba,	// (0x000347ba) navi_slider_pane_g7

0xdd23,	// (0x00037123) mup_scale_pane_g3

0xdd2c,	// (0x0003712c) mup_scale_pane_g4

0xdd35,	// (0x00037135) mup_scale_pane_g5

0x40b2,	// (0x0002d4b2) mup_scale_pane_g6

0x40bb,	// (0x0002d4bb) mup_scale_pane_g7

0xdbf0,	// (0x00036ff0) cams2_slider_pane_g3

0x50d3,	// (0x0002e4d3) cams2_slider_pane_g4

0xb4ea,	// (0x000348ea) cams2_slider_pane_g5

0xdbf0,	// (0x00036ff0) cams2_slider_pane_g6

0xb4f2,	// (0x000348f2) cams2_slider_pane_g7

0x53cc,	// (0x0002e7cc) camera2_autofocus_pane_cp_g1

0x5f97,	// (0x0002f397) bg_popup_preview_window_pane_cp02_ParamLimits

0x5f97,	// (0x0002f397) bg_popup_preview_window_pane_cp02

0x5fa3,	// (0x0002f3a3) list_fp_cale_pane_ParamLimits

0x5fa3,	// (0x0002f3a3) list_fp_cale_pane

0x5faf,	// (0x0002f3af) popup_fixed_preview_cale_window_t1_ParamLimits

0x5faf,	// (0x0002f3af) popup_fixed_preview_cale_window_t1

0x5fc1,	// (0x0002f3c1) popup_fixed_preview_cale_window_t2_ParamLimits

0x5fc1,	// (0x0002f3c1) popup_fixed_preview_cale_window_t2

0x5fd6,	// (0x0002f3d6) popup_fixed_preview_cale_window_t3_ParamLimits

0x5fd6,	// (0x0002f3d6) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a7,	// (0x00038ba7) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a7,	// (0x00038ba7) popup_fixed_preview_cale_window_t

0x5ff7,	// (0x0002f3f7) list_single_fp_cale_pane_ParamLimits

0x5ff7,	// (0x0002f3f7) list_single_fp_cale_pane

0x600f,	// (0x0002f40f) list_single_fp_cale_pane_g1_ParamLimits

0x600f,	// (0x0002f40f) list_single_fp_cale_pane_g1

0x601b,	// (0x0002f41b) list_single_fp_cale_pane_g2_ParamLimits

0x601b,	// (0x0002f41b) list_single_fp_cale_pane_g2

0x0002,

0xf7ae,	// (0x00038bae) list_single_fp_cale_pane_g_ParamLimits

0xf7ae,	// (0x00038bae) list_single_fp_cale_pane_g

0x6034,	// (0x0002f434) list_single_fp_cale_pane_t1_ParamLimits

0x6034,	// (0x0002f434) list_single_fp_cale_pane_t1

0x6046,	// (0x0002f446) list_single_fp_cale_pane_t2_ParamLimits

0x6046,	// (0x0002f446) list_single_fp_cale_pane_t2

0x0001,

0xf7b5,	// (0x00038bb5) list_single_fp_cale_pane_t_ParamLimits

0xf7b5,	// (0x00038bb5) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb200,	// (0x00034600) main_dialer_pane

0x6079,	// (0x0002f479) aid_cell_size_keypad

0x6083,	// (0x0002f483) dialer_ne_pane

0x608b,	// (0x0002f48b) grid_dialer_command_1_pane

0x6093,	// (0x0002f493) grid_dialer_command_2_pane

0x609b,	// (0x0002f49b) grid_dialer_keypad_pane

0x60ad,	// (0x0002f4ad) bg_popup_call_pane_cp06_ParamLimits

0x60ad,	// (0x0002f4ad) bg_popup_call_pane_cp06

0x60b9,	// (0x0002f4b9) dialer_ne_clear_pane_ParamLimits

0x60b9,	// (0x0002f4b9) dialer_ne_clear_pane

0x60c5,	// (0x0002f4c5) dialer_ne_pane_g1

0x60cd,	// (0x0002f4cd) dialer_ne_pane_t1_ParamLimits

0x60cd,	// (0x0002f4cd) dialer_ne_pane_t1

0x60df,	// (0x0002f4df) dialer_ne_pane_t2_ParamLimits

0x60df,	// (0x0002f4df) dialer_ne_pane_t2

0x6109,	// (0x0002f509) dialer_ne_pane_t3_ParamLimits

0x6109,	// (0x0002f509) dialer_ne_pane_t3

0x0002,

0xf7ba,	// (0x00038bba) dialer_ne_pane_t_ParamLimits

0xf7ba,	// (0x00038bba) dialer_ne_pane_t

0x6139,	// (0x0002f539) dialer_ne_pane_t3_copy1_ParamLimits

0x6139,	// (0x0002f539) dialer_ne_pane_t3_copy1

0x6168,	// (0x0002f568) cell_dialer_keypad_pane_ParamLimits

0x6168,	// (0x0002f568) cell_dialer_keypad_pane

0x617f,	// (0x0002f57f) cell_dialer_command_1_pane_ParamLimits

0x617f,	// (0x0002f57f) cell_dialer_command_1_pane

0x6195,	// (0x0002f595) cell_dialer_command_2_pane_ParamLimits

0x6195,	// (0x0002f595) cell_dialer_command_2_pane

0x61a4,	// (0x0002f5a4) bg_button_pane_cp02_ParamLimits

0x61a4,	// (0x0002f5a4) bg_button_pane_cp02

0x61b0,	// (0x0002f5b0) cell_dialer_keypad_pane_g1_ParamLimits

0x61b0,	// (0x0002f5b0) cell_dialer_keypad_pane_g1

0x61a4,	// (0x0002f5a4) bg_button_pane_cp03_ParamLimits

0x61a4,	// (0x0002f5a4) bg_button_pane_cp03

0x61c5,	// (0x0002f5c5) cell_dialer_command_1_pane_g1_ParamLimits

0x61c5,	// (0x0002f5c5) cell_dialer_command_1_pane_g1

0x61d9,	// (0x0002f5d9) bg_button_pane_cp04

0x61e1,	// (0x0002f5e1) cell_dialer_command_2_pane_g1

0xdbdf,	// (0x00036fdf) bg_button_pane_cp06

0x61e9,	// (0x0002f5e9) dialer_ne_clear_pane_g1

0x3be0,	// (0x0002cfe0) navi_pane_g2

0x3c0e,	// (0x0002d00e) navi_pane_g3

0x0002,

0xf3f5,	// (0x000387f5) navi_pane_g

0x3c37,	// (0x0002d037) navi_pane_mv_g2

0x3c5e,	// (0x0002d05e) navi_pane_mv_g5

0x3c66,	// (0x0002d066) navi_pane_mv_t1

0xcffb,	// (0x000363fb) main_clock2_pane

0x6223,	// (0x0002f623) main_clock2_list_pane_ParamLimits

0x6223,	// (0x0002f623) main_clock2_list_pane

0x625d,	// (0x0002f65d) main_clock2_pane_t1_ParamLimits

0x625d,	// (0x0002f65d) main_clock2_pane_t1

0x629b,	// (0x0002f69b) main_clock2_pane_t2_ParamLimits

0x629b,	// (0x0002f69b) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x00038bc1) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x00038bc1) main_clock2_pane_t

0x6338,	// (0x0002f738) popup_clock_analogue_window_cp03_ParamLimits

0x6338,	// (0x0002f738) popup_clock_analogue_window_cp03

0x635f,	// (0x0002f75f) popup_clock_digital_window_cp02_ParamLimits

0x635f,	// (0x0002f75f) popup_clock_digital_window_cp02

0x63d4,	// (0x0002f7d4) main_clock2_list_single_pane_ParamLimits

0x63d4,	// (0x0002f7d4) main_clock2_list_single_pane

0xdbdf,	// (0x00036fdf) list_highlight_pane_cp05

0x63e6,	// (0x0002f7e6) main_clock2_list_single_pane_t1

0x2b71,	// (0x0002bf71) popup_toolbar_window_cp04_ParamLimits

0x5553,	// (0x0002e953) camera2_autofocus_pane_g2_ParamLimits

0x5553,	// (0x0002e953) camera2_autofocus_pane_g2

0x555f,	// (0x0002e95f) camera2_autofocus_pane_g3_ParamLimits

0x555f,	// (0x0002e95f) camera2_autofocus_pane_g3

0x556b,	// (0x0002e96b) camera2_autofocus_pane_g4_ParamLimits

0x556b,	// (0x0002e96b) camera2_autofocus_pane_g4

0x5577,	// (0x0002e977) camera2_autofocus_pane_g5_ParamLimits

0x5577,	// (0x0002e977) camera2_autofocus_pane_g5

0x0004,

0xf70a,	// (0x00038b0a) camera2_autofocus_pane_g_ParamLimits

0xf70a,	// (0x00038b0a) camera2_autofocus_pane_g

0x58e1,	// (0x0002ece1) camera2_autofocus_pane_cp_g2

0x58e9,	// (0x0002ece9) camera2_autofocus_pane_cp_g3

0x58f1,	// (0x0002ecf1) camera2_autofocus_pane_cp_g4

0x58f9,	// (0x0002ecf9) camera2_autofocus_pane_cp_g5

0x0004,

0xf770,	// (0x00038b70) camera2_autofocus_pane_cp_g

0x60a5,	// (0x0002f4a5) popup_dialer_spcha_window

0xc860,	// (0x00035c60) bg_popup_sub_pane_cp07

0x6412,	// (0x0002f812) list_spcha_pane

0x641a,	// (0x0002f81a) list_single_spcha_pane_ParamLimits

0x641a,	// (0x0002f81a) list_single_spcha_pane

0xc860,	// (0x00035c60) list_highlight_pane_cp06

0x642b,	// (0x0002f82b) list_single_spcha_pane_t1

0xea6b,	// (0x00037e6b) popup_call2_audio_out_window_g4_ParamLimits

0xea6b,	// (0x00037e6b) popup_call2_audio_out_window_g4

0xb200,	// (0x00034600) main_imed2_pane

0xb41f,	// (0x0003481f) popup_imed_adjust2_window

0x0f25,	// (0x0002a325) popup_imed_trans_window_ParamLimits

0x0f25,	// (0x0002a325) popup_imed_trans_window

0x513c,	// (0x0002e53c) popup_blid_sat_info2_window_t1

0x514a,	// (0x0002e54a) popup_blid_sat_info2_window_t2

0x000a,

0xf69f,	// (0x00038a9f) popup_blid_sat_info2_window_t

0x6439,	// (0x0002f839) aid_size_cell_colour_35

0x6459,	// (0x0002f859) aid_size_cell_colour_112

0x6479,	// (0x0002f879) aid_size_cell_effect

0xf02a,	// (0x0003842a) bg_tb_trans_pane_cp02

0xd69c,	// (0x00036a9c) heading_imed_pane

0x6499,	// (0x0002f899) listscroll_imed_pane

0x64a5,	// (0x0002f8a5) heading_imed_pane_g1

0x64ad,	// (0x0002f8ad) heading_imed_pane_t1

0x64bb,	// (0x0002f8bb) grid_imed_colour_35_pane_ParamLimits

0x64bb,	// (0x0002f8bb) grid_imed_colour_35_pane

0x64d6,	// (0x0002f8d6) grid_imed_effect_pane

0x64eb,	// (0x0002f8eb) list_imed_aspect_pane

0x64f3,	// (0x0002f8f3) scroll_pane_cp027_ParamLimits

0x64f3,	// (0x0002f8f3) scroll_pane_cp027

0x6504,	// (0x0002f904) cell_imed_effect_pane_ParamLimits

0x6504,	// (0x0002f904) cell_imed_effect_pane

0x652b,	// (0x0002f92b) cell_imed_colour_pane_ParamLimits

0x652b,	// (0x0002f92b) cell_imed_colour_pane

0x656d,	// (0x0002f96d) cell_imed_colour_pane_g1_ParamLimits

0x656d,	// (0x0002f96d) cell_imed_colour_pane_g1

0x657e,	// (0x0002f97e) hgihlgiht_grid_pane_cp016_ParamLimits

0x657e,	// (0x0002f97e) hgihlgiht_grid_pane_cp016

0x658f,	// (0x0002f98f) cell_imed_effect_pane_g1

0x6597,	// (0x0002f997) grid_highlight_pane_cp017

0x65a0,	// (0x0002f9a0) list_imed_single_pane_ParamLimits

0x65a0,	// (0x0002f9a0) list_imed_single_pane

0xc860,	// (0x00035c60) list_highlight_pane_cp07

0x65b7,	// (0x0002f9b7) list_imed_aspect_pane_comp1_t1

0xf02a,	// (0x0003842a) bg_tb_trans_pane_cp05

0x65d9,	// (0x0002f9d9) popup_imed_adjust2_window_g1

0x6600,	// (0x0002fa00) popup_imed_adjust2_window_t1

0x6618,	// (0x0002fa18) slider_imed_adjust_pane

0x662c,	// (0x0002fa2c) slider_imed_adjust_pane_g1

0x663c,	// (0x0002fa3c) slider_imed_adjust_pane_g2

0x664c,	// (0x0002fa4c) slider_imed_adjust_pane_g3

0x665d,	// (0x0002fa5d) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x00038bde) slider_imed_adjust_pane_g

0x666e,	// (0x0002fa6e) aid_size_cell_clipart2

0x667a,	// (0x0002fa7a) grid_imed_clipart_pane

0x6684,	// (0x0002fa84) scroll_pane_cp031

0x668c,	// (0x0002fa8c) cell_imed_clipart_pane_ParamLimits

0x668c,	// (0x0002fa8c) cell_imed_clipart_pane

0x66b3,	// (0x0002fab3) cell_imed_clipart_pane_g1

0xc860,	// (0x00035c60) grid_highlight_pane_cp014

0x6238,	// (0x0002f638) main_clock2_pane_g1_ParamLimits

0x6238,	// (0x0002f638) main_clock2_pane_g1

0x637f,	// (0x0002f77f) aid_call2_pane_cp10

0x6391,	// (0x0002f791) aid_call_pane_cp10

0xdb14,	// (0x00036f14) popup_clock_analogue_window_cp10_g1

0xdb14,	// (0x00036f14) popup_clock_analogue_window_cp10_g2

0x63a3,	// (0x0002f7a3) popup_clock_analogue_window_cp10_g3

0x63a3,	// (0x0002f7a3) popup_clock_analogue_window_cp10_g4

0xdb14,	// (0x00036f14) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x00038bcc) popup_clock_analogue_window_cp10_g

0x63b5,	// (0x0002f7b5) popup_clock_analogue_window_cp10_t1

0x1575,	// (0x0002a975) clock_digital_number_pane_cp10_ParamLimits

0x1575,	// (0x0002a975) clock_digital_number_pane_cp10

0x158d,	// (0x0002a98d) clock_digital_number_pane_cp11_ParamLimits

0x158d,	// (0x0002a98d) clock_digital_number_pane_cp11

0x15a5,	// (0x0002a9a5) clock_digital_number_pane_cp12_ParamLimits

0x15a5,	// (0x0002a9a5) clock_digital_number_pane_cp12

0x15bd,	// (0x0002a9bd) clock_digital_number_pane_cp13_ParamLimits

0x15bd,	// (0x0002a9bd) clock_digital_number_pane_cp13

0x15d5,	// (0x0002a9d5) clock_digital_separator_pane_cp10_ParamLimits

0x15d5,	// (0x0002a9d5) clock_digital_separator_pane_cp10

0x63f4,	// (0x0002f7f4) popup_clock_digital_window_cp02_t1_ParamLimits

0x63f4,	// (0x0002f7f4) popup_clock_digital_window_cp02_t1

0xcedc,	// (0x000362dc) clock_digital_number_pane_cp10_g1

0xcedc,	// (0x000362dc) clock_digital_number_pane_cp10_g2

0x0001,

0x0217,	// (0x00029617) clock_digital_number_pane_cp10_g

0xcedc,	// (0x000362dc) clock_digital_separator_pane_cp10_g1

0xcedc,	// (0x000362dc) clock_digital_separator_pane_g2_cp10

0xdbaf,	// (0x00036faf) navi_pane_vded_g4

0xdbb8,	// (0x00036fb8) navi_pane_vded_g5

0xdbc1,	// (0x00036fc1) navi_pane_vded_t1

0xb200,	// (0x00034600) main_vded_pane

0x66bc,	// (0x0002fabc) main_vded_pane_g1

0x66c8,	// (0x0002fac8) main_vded_pane_g2

0x66d2,	// (0x0002fad2) main_vded_pane_g3

0x0002,

0xf7e7,	// (0x00038be7) main_vded_pane_g

0x66dc,	// (0x0002fadc) main_vded_pane_t1

0x66ea,	// (0x0002faea) main_vded_pane_t2

0x0001,

0xf7ee,	// (0x00038bee) main_vded_pane_t

0x66f8,	// (0x0002faf8) vded_slider_pane

0x6702,	// (0x0002fb02) vded_video_pane

0x670c,	// (0x0002fb0c) vded_video_pane_g1

0x6716,	// (0x0002fb16) vded_video_pane_g2

0x53cc,	// (0x0002e7cc) vded_video_pane_g3

0x0002,

0xf7f3,	// (0x00038bf3) vded_video_pane_g

0x671f,	// (0x0002fb1f) vded_slider_pane_g1

0x501b,	// (0x0002e41b) vded_slider_pane_g2

0x6728,	// (0x0002fb28) vded_slider_pane_g3

0x6731,	// (0x0002fb31) vded_slider_pane_g4

0x673a,	// (0x0002fb3a) vded_slider_pane_g5

0x0004,

0xf7fa,	// (0x00038bfa) vded_slider_pane_g

0x5e98,	// (0x0002f298) mup3_rocker_pane_ParamLimits

0x5e98,	// (0x0002f298) mup3_rocker_pane

0x6743,	// (0x0002fb43) mup3_control_keys_pane_g1

0x674b,	// (0x0002fb4b) mup3_control_keys_pane_g2

0x6753,	// (0x0002fb53) mup3_control_keys_pane_g3

0x675b,	// (0x0002fb5b) mup3_control_keys_pane_g4

0x0003,

0xf805,	// (0x00038c05) mup3_control_keys_pane_g

0x0b2a,	// (0x00029f2a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0b2a,	// (0x00029f2a) popup_toolbar2_fixed_window_cp01

0x5ed4,	// (0x0002f2d4) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5ed4,	// (0x0002f2d4) popup_toolbar2_fixed_window_cp02

0xe3aa,	// (0x000377aa) popup_call2_audio_second_window_t4_ParamLimits

0xe3aa,	// (0x000377aa) popup_call2_audio_second_window_t4

0xe8d8,	// (0x00037cd8) popup_call2_audio_first_window_t6_ParamLimits

0xe8d8,	// (0x00037cd8) popup_call2_audio_first_window_t6

0xeb6e,	// (0x00037f6e) popup_call2_audio_out_window_t6_ParamLimits

0xeb6e,	// (0x00037f6e) popup_call2_audio_out_window_t6

0xb200,	// (0x00034600) main_vitu_pane

0x676b,	// (0x0002fb6b) aid_size_cell_itu_ParamLimits

0x676b,	// (0x0002fb6b) aid_size_cell_itu

0xcd8f,	// (0x0003618f) bg_popup_window_pane_cp08_ParamLimits

0xcd8f,	// (0x0003618f) bg_popup_window_pane_cp08

0x6781,	// (0x0002fb81) field_vitu_entry_pane_ParamLimits

0x6781,	// (0x0002fb81) field_vitu_entry_pane

0x6798,	// (0x0002fb98) grid_vitu_function_pane_ParamLimits

0x6798,	// (0x0002fb98) grid_vitu_function_pane

0x67b3,	// (0x0002fbb3) grid_vitu_itu_pane_ParamLimits

0x67b3,	// (0x0002fbb3) grid_vitu_itu_pane

0x67d1,	// (0x0002fbd1) cell_vitu_itu_pane_ParamLimits

0x67d1,	// (0x0002fbd1) cell_vitu_itu_pane

0x67f5,	// (0x0002fbf5) cell_vitu_function_pane_ParamLimits

0x67f5,	// (0x0002fbf5) cell_vitu_function_pane

0xcd8f,	// (0x0003618f) bg_popup_sub_pane_cp08_ParamLimits

0xcd8f,	// (0x0003618f) bg_popup_sub_pane_cp08

0x6828,	// (0x0002fc28) field_vitu_entry_pane_t1_ParamLimits

0x6828,	// (0x0002fc28) field_vitu_entry_pane_t1

0x6848,	// (0x0002fc48) field_vitu_entry_pane_t2_ParamLimits

0x6848,	// (0x0002fc48) field_vitu_entry_pane_t2

0x0001,

0xf813,	// (0x00038c13) field_vitu_entry_pane_t_ParamLimits

0xf813,	// (0x00038c13) field_vitu_entry_pane_t

0x6865,	// (0x0002fc65) bg_button_pane_cp05_ParamLimits

0x6865,	// (0x0002fc65) bg_button_pane_cp05

0x6873,	// (0x0002fc73) cell_vitu_itu_pane_g1

0x688b,	// (0x0002fc8b) cell_vitu_itu_pane_t1_ParamLimits

0x688b,	// (0x0002fc8b) cell_vitu_itu_pane_t1

0x689d,	// (0x0002fc9d) cell_vitu_itu_pane_t2_ParamLimits

0x689d,	// (0x0002fc9d) cell_vitu_itu_pane_t2

0x0002,

0xf818,	// (0x00038c18) cell_vitu_itu_pane_t_ParamLimits

0xf818,	// (0x00038c18) cell_vitu_itu_pane_t

0x68d2,	// (0x0002fcd2) bg_button_pane_cp07

0x68dc,	// (0x0002fcdc) cell_vitu_function_pane_g1

0xb20a,	// (0x0003460a) main_calc_pane_g1

0x09a3,	// (0x00029da3) aid_visual_content_pane

0xb200,	// (0x00034600) main_vradio_pane

0x68e5,	// (0x0002fce5) main_vradio_pane_g1_ParamLimits

0x68e5,	// (0x0002fce5) main_vradio_pane_g1

0x68fe,	// (0x0002fcfe) main_vradio_pane_g2_ParamLimits

0x68fe,	// (0x0002fcfe) main_vradio_pane_g2

0x0001,

0xf81f,	// (0x00038c1f) main_vradio_pane_g_ParamLimits

0xf81f,	// (0x00038c1f) main_vradio_pane_g

0x690b,	// (0x0002fd0b) main_vradio_pane_t1_ParamLimits

0x690b,	// (0x0002fd0b) main_vradio_pane_t1

0x6920,	// (0x0002fd20) main_vradio_pane_t2_ParamLimits

0x6920,	// (0x0002fd20) main_vradio_pane_t2

0x6935,	// (0x0002fd35) main_vradio_pane_t3_ParamLimits

0x6935,	// (0x0002fd35) main_vradio_pane_t3

0x0002,

0xf824,	// (0x00038c24) main_vradio_pane_t_ParamLimits

0xf824,	// (0x00038c24) main_vradio_pane_t

0x6949,	// (0x0002fd49) vradio_rocker_control_pane_ParamLimits

0x6949,	// (0x0002fd49) vradio_rocker_control_pane

0x695b,	// (0x0002fd5b) vradio_station_info_pane_ParamLimits

0x695b,	// (0x0002fd5b) vradio_station_info_pane

0x696d,	// (0x0002fd6d) vradio_frequency_info_pane_ParamLimits

0x696d,	// (0x0002fd6d) vradio_frequency_info_pane

0x53cc,	// (0x0002e7cc) vradio_station_info_pane_g1

0x697c,	// (0x0002fd7c) vradio_station_info_pane_t1_ParamLimits

0x697c,	// (0x0002fd7c) vradio_station_info_pane_t1

0x699e,	// (0x0002fd9e) vradio_station_info_pane_t2_ParamLimits

0x699e,	// (0x0002fd9e) vradio_station_info_pane_t2

0x0001,

0xf82b,	// (0x00038c2b) vradio_station_info_pane_t_ParamLimits

0xf82b,	// (0x00038c2b) vradio_station_info_pane_t

0x69b0,	// (0x0002fdb0) vradio_tuning_pane

0x69b8,	// (0x0002fdb8) vradio_rocker_control_pane_g1

0x69c0,	// (0x0002fdc0) vradio_rocker_control_pane_g2

0x69c8,	// (0x0002fdc8) vradio_rocker_control_pane_g3

0x69d0,	// (0x0002fdd0) vradio_rocker_control_pane_g4

0x69d8,	// (0x0002fdd8) vradio_rocker_control_pane_g5

0x0004,

0xf830,	// (0x00038c30) vradio_rocker_control_pane_g

0x69e0,	// (0x0002fde0) vradio_frequency_info_pane_g1

0x69ea,	// (0x0002fdea) vradio_frequency_info_pane_t1_ParamLimits

0x69ea,	// (0x0002fdea) vradio_frequency_info_pane_t1

0x69fe,	// (0x0002fdfe) vradio_tuning_pane_g1

0x6a09,	// (0x0002fe09) vradio_tuning_pane_t1

0xb1b0,	// (0x000345b0) area_side_right_pane_ParamLimits

0xb1b0,	// (0x000345b0) area_side_right_pane

0xeff1,	// (0x000383f1) status_small_pane_g1

0xeff9,	// (0x000383f9) status_small_pane_g2

0xf002,	// (0x00038402) status_small_pane_g3

0xf00b,	// (0x0003840b) status_small_pane_g4

0x0003,

0x0025,	// (0x00029425) status_small_pane_g

0xf014,	// (0x00038414) status_small_pane_t1

0xb200,	// (0x00034600) main_video3_pane

0x6a18,	// (0x0002fe18) cams_zoom_vslider_pane

0x6a20,	// (0x0002fe20) image3_wide_pane_ParamLimits

0x6a20,	// (0x0002fe20) image3_wide_pane

0x6a3a,	// (0x0002fe3a) image3_wide_small_pane

0x6a46,	// (0x0002fe46) main_video3_pane_g1_ParamLimits

0x6a46,	// (0x0002fe46) main_video3_pane_g1

0x6a62,	// (0x0002fe62) main_video3_pane_g2_ParamLimits

0x6a62,	// (0x0002fe62) main_video3_pane_g2

0x0001,

0xf83b,	// (0x00038c3b) main_video3_pane_g_ParamLimits

0xf83b,	// (0x00038c3b) main_video3_pane_g

0x6a7e,	// (0x0002fe7e) main_video3_pane_t1_ParamLimits

0x6a7e,	// (0x0002fe7e) main_video3_pane_t1

0x6aa9,	// (0x0002fea9) main_video3_pane_t2_ParamLimits

0x6aa9,	// (0x0002fea9) main_video3_pane_t2

0x6ad4,	// (0x0002fed4) main_video3_pane_t3_ParamLimits

0x6ad4,	// (0x0002fed4) main_video3_pane_t3

0x0002,

0xf840,	// (0x00038c40) main_video3_pane_t_ParamLimits

0xf840,	// (0x00038c40) main_video3_pane_t

0x6b01,	// (0x0002ff01) cams_zoom_vslider_pane_g1

0x6b0a,	// (0x0002ff0a) cams_zoom_vslider_pane_g2

0x0001,

0xf847,	// (0x00038c47) cams_zoom_vslider_pane_g

0x6b12,	// (0x0002ff12) small_slider_vertical_pane

0x53cc,	// (0x0002e7cc) small_slider_vertical_pane_g1

0x53cc,	// (0x0002e7cc) small_slider_vertical_pane_g2

0x6b1a,	// (0x0002ff1a) small_slider_vertical_pane_g3

0x0002,

0xf84c,	// (0x00038c4c) small_slider_vertical_pane_g

0xb200,	// (0x00034600) main_hwr_training_pane

0x6b23,	// (0x0002ff23) hwr_training_instruct_pane_ParamLimits

0x6b23,	// (0x0002ff23) hwr_training_instruct_pane

0x6b45,	// (0x0002ff45) hwr_training_navi_pane_ParamLimits

0x6b45,	// (0x0002ff45) hwr_training_navi_pane

0x6b64,	// (0x0002ff64) hwr_training_write_pane_ParamLimits

0x6b64,	// (0x0002ff64) hwr_training_write_pane

0xc860,	// (0x00035c60) bg_frame_shadow_pane

0x6bb4,	// (0x0002ffb4) hwr_training_write_pane_g1

0x6bbc,	// (0x0002ffbc) hwr_training_write_pane_g2

0x6bc4,	// (0x0002ffc4) hwr_training_write_pane_g3

0x6bcc,	// (0x0002ffcc) hwr_training_write_pane_g4

0x6bd4,	// (0x0002ffd4) hwr_training_write_pane_g5

0x6bdc,	// (0x0002ffdc) hwr_training_write_pane_g6

0x6be4,	// (0x0002ffe4) hwr_training_write_pane_g7

0x0006,

0xf853,	// (0x00038c53) hwr_training_write_pane_g

0xb4fb,	// (0x000348fb) hwr_training_navi_pane_g1_ParamLimits

0xb4fb,	// (0x000348fb) hwr_training_navi_pane_g1

0xb50d,	// (0x0003490d) hwr_training_navi_pane_g2_ParamLimits

0xb50d,	// (0x0003490d) hwr_training_navi_pane_g2

0xb51f,	// (0x0003491f) hwr_training_navi_pane_g3_ParamLimits

0xb51f,	// (0x0003491f) hwr_training_navi_pane_g3

0xb52f,	// (0x0003492f) hwr_training_navi_pane_g4_ParamLimits

0xb52f,	// (0x0003492f) hwr_training_navi_pane_g4

0x0004,

0xf862,	// (0x00038c62) hwr_training_navi_pane_g_ParamLimits

0xf862,	// (0x00038c62) hwr_training_navi_pane_g

0xb53c,	// (0x0003493c) hwr_training_navi_pane_t1

0x6bec,	// (0x0002ffec) list_single_hwr_training_instruct_pane_ParamLimits

0x6bec,	// (0x0002ffec) list_single_hwr_training_instruct_pane

0x6c09,	// (0x00030009) list_single_hwr_training_instruct_pane_t1

0x530c,	// (0x0002e70c) bg_frame_shadow_pane_g1

0x6c18,	// (0x00030018) bg_frame_shadow_pane_g2

0x6c20,	// (0x00030020) bg_frame_shadow_pane_g3

0x6c28,	// (0x00030028) bg_frame_shadow_pane_g4

0x6c30,	// (0x00030030) bg_frame_shadow_pane_g5

0x6c38,	// (0x00030038) bg_frame_shadow_pane_g6

0x6c40,	// (0x00030040) bg_frame_shadow_pane_g7

0xd0c6,	// (0x000364c6) bg_frame_shadow_pane_g8

0x0007,

0xf86d,	// (0x00038c6d) bg_frame_shadow_pane_g

0xb200,	// (0x00034600) main_video_tele_dialer_pane

0x15fc,	// (0x0002a9fc) aid_size_cell_video_keypad_ParamLimits

0x15fc,	// (0x0002a9fc) aid_size_cell_video_keypad

0x1616,	// (0x0002aa16) grid_video_dialer_keypad_pane_ParamLimits

0x1616,	// (0x0002aa16) grid_video_dialer_keypad_pane

0x1662,	// (0x0002aa62) video_down_pane_cp_ParamLimits

0x1662,	// (0x0002aa62) video_down_pane_cp

0x1676,	// (0x0002aa76) cell_video_dialer_keypad_pane_ParamLimits

0x1676,	// (0x0002aa76) cell_video_dialer_keypad_pane

0x6c64,	// (0x00030064) bg_button_pane_cp08_ParamLimits

0x6c64,	// (0x00030064) bg_button_pane_cp08

0x6c70,	// (0x00030070) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6c70,	// (0x00030070) cell_video_dialer_keypad_pane_g1

0x5e82,	// (0x0002f282) mup3_rocker2_pane_ParamLimits

0x5e82,	// (0x0002f282) mup3_rocker2_pane

0x53cc,	// (0x0002e7cc) mup3_rocker2_pane_g1

0x0e0e,	// (0x0002a20e) main_dialer2_pane

0xb200,	// (0x00034600) main_mp4_pane

0xb552,	// (0x00034952) main_mp4_pane_g1_ParamLimits

0xb552,	// (0x00034952) main_mp4_pane_g1

0xb552,	// (0x00034952) main_mp4_pane_g2_ParamLimits

0xb552,	// (0x00034952) main_mp4_pane_g2

0x1698,	// (0x0002aa98) main_mp4_pane_g3_ParamLimits

0x1698,	// (0x0002aa98) main_mp4_pane_g3

0xb560,	// (0x00034960) main_mp4_pane_g4_ParamLimits

0xb560,	// (0x00034960) main_mp4_pane_g4

0xb588,	// (0x00034988) main_mp4_pane_g5_ParamLimits

0xb588,	// (0x00034988) main_mp4_pane_g5

0x0005,

0xf88d,	// (0x00038c8d) main_mp4_pane_g_ParamLimits

0xf88d,	// (0x00038c8d) main_mp4_pane_g

0xb5d8,	// (0x000349d8) main_mp4_pane_t1_ParamLimits

0xb5d8,	// (0x000349d8) main_mp4_pane_t1

0xb634,	// (0x00034a34) main_mp4_pane_t2_ParamLimits

0xb634,	// (0x00034a34) main_mp4_pane_t2

0x6cab,	// (0x000300ab) main_mp4_pane_t3_ParamLimits

0x6cab,	// (0x000300ab) main_mp4_pane_t3

0xb686,	// (0x00034a86) main_mp4_pane_t4_ParamLimits

0xb686,	// (0x00034a86) main_mp4_pane_t4

0x0003,

0xf89a,	// (0x00038c9a) main_mp4_pane_t_ParamLimits

0xf89a,	// (0x00038c9a) main_mp4_pane_t

0xb6ca,	// (0x00034aca) mp4_progress_pane_ParamLimits

0xb6ca,	// (0x00034aca) mp4_progress_pane

0xb714,	// (0x00034b14) mp4_rocker_pane_ParamLimits

0xb714,	// (0x00034b14) mp4_rocker_pane

0x6cd3,	// (0x000300d3) mp4_progress_pane_t1

0x6cec,	// (0x000300ec) mp4_progress_pane_t2

0x0001,

0xf8a3,	// (0x00038ca3) mp4_progress_pane_t

0x6d05,	// (0x00030105) mup_progress_pane_cp04

0x6d11,	// (0x00030111) mp4_rocker_pane_g1

0x16d4,	// (0x0002aad4) aid_cell_size_keypad2_ParamLimits

0x16d4,	// (0x0002aad4) aid_cell_size_keypad2

0x16ea,	// (0x0002aaea) dialer2_ne_pane_ParamLimits

0x16ea,	// (0x0002aaea) dialer2_ne_pane

0x1704,	// (0x0002ab04) grid_dialer2_keypad_pane_ParamLimits

0x1704,	// (0x0002ab04) grid_dialer2_keypad_pane

0x50e3,	// (0x0002e4e3) bg_popup_call_pane_cp07_ParamLimits

0x50e3,	// (0x0002e4e3) bg_popup_call_pane_cp07

0x6d1b,	// (0x0003011b) dialer2_ne_pane_t1_ParamLimits

0x6d1b,	// (0x0003011b) dialer2_ne_pane_t1

0x1722,	// (0x0002ab22) cell_dialer2_keypad_pane_ParamLimits

0x1722,	// (0x0002ab22) cell_dialer2_keypad_pane

0x6d6c,	// (0x0003016c) bg_button_pane_pane_cp04_ParamLimits

0x6d6c,	// (0x0003016c) bg_button_pane_pane_cp04

0x6d78,	// (0x00030178) cell_dialer2_keypad_pane_g1_ParamLimits

0x6d78,	// (0x00030178) cell_dialer2_keypad_pane_g1

0x2a45,	// (0x0002be45) aid_placing_vt_set_content_ParamLimits

0x2a45,	// (0x0002be45) aid_placing_vt_set_content

0x2a6d,	// (0x0002be6d) aid_placing_vt_set_title_ParamLimits

0x2a6d,	// (0x0002be6d) aid_placing_vt_set_title

0xb200,	// (0x00034600) main_image3_pane

0x17a4,	// (0x0002aba4) area_side_right_pane_cp01_ParamLimits

0x17a4,	// (0x0002aba4) area_side_right_pane_cp01

0xb552,	// (0x00034952) main_image3_pane_g1_ParamLimits

0xb552,	// (0x00034952) main_image3_pane_g1

0x17bb,	// (0x0002abbb) main_image3_pane_g2_ParamLimits

0x17bb,	// (0x0002abbb) main_image3_pane_g2

0x17e3,	// (0x0002abe3) main_image3_pane_g3_ParamLimits

0x17e3,	// (0x0002abe3) main_image3_pane_g3

0x180d,	// (0x0002ac0d) main_image3_pane_g4_ParamLimits

0x180d,	// (0x0002ac0d) main_image3_pane_g4

0x0003,

0xf8b2,	// (0x00038cb2) main_image3_pane_g_ParamLimits

0xf8b2,	// (0x00038cb2) main_image3_pane_g

0x1837,	// (0x0002ac37) main_image3_pane_t1_ParamLimits

0x1837,	// (0x0002ac37) main_image3_pane_t1

0x188f,	// (0x0002ac8f) main_image3_pane_t2_ParamLimits

0x188f,	// (0x0002ac8f) main_image3_pane_t2

0x18e1,	// (0x0002ace1) main_image3_pane_t3_ParamLimits

0x18e1,	// (0x0002ace1) main_image3_pane_t3

0x0003,

0xf8bb,	// (0x00038cbb) main_image3_pane_t_ParamLimits

0xf8bb,	// (0x00038cbb) main_image3_pane_t

0xcd8f,	// (0x0003618f) grid_sctrl_middle_pane_cp01_ParamLimits

0xcd8f,	// (0x0003618f) grid_sctrl_middle_pane_cp01

0x6de0,	// (0x000301e0) cell_sctrl_middle_pane_cp01_ParamLimits

0x6de0,	// (0x000301e0) cell_sctrl_middle_pane_cp01

0x6dfd,	// (0x000301fd) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6dfd,	// (0x000301fd) cell_sctrl_middle_pane_cp01_g1

0xb200,	// (0x00034600) main_call4_pane

0x6e13,	// (0x00030213) aid_size_button_call4_ParamLimits

0x6e13,	// (0x00030213) aid_size_button_call4

0x6e44,	// (0x00030244) call4_windows_pane_ParamLimits

0x6e44,	// (0x00030244) call4_windows_pane

0x6e64,	// (0x00030264) grid_call4_button_pane_ParamLimits

0x6e64,	// (0x00030264) grid_call4_button_pane

0x6e91,	// (0x00030291) call4_windows_conf_pane

0x6ea6,	// (0x000302a6) popup_call4_audio_first_window_ParamLimits

0x6ea6,	// (0x000302a6) popup_call4_audio_first_window

0x6ef2,	// (0x000302f2) popup_call4_audio_second_window_ParamLimits

0x6ef2,	// (0x000302f2) popup_call4_audio_second_window

0x6f06,	// (0x00030306) popup_call4_audio_wait_window_ParamLimits

0x6f06,	// (0x00030306) popup_call4_audio_wait_window

0x6f14,	// (0x00030314) cell_call4_button_pane_ParamLimits

0x6f14,	// (0x00030314) cell_call4_button_pane

0x6f3d,	// (0x0003033d) bg_button_pane_cp09_ParamLimits

0x6f3d,	// (0x0003033d) bg_button_pane_cp09

0x6f49,	// (0x00030349) cell_call4_button_pane_g1_ParamLimits

0x6f49,	// (0x00030349) cell_call4_button_pane_g1

0x6f6f,	// (0x0003036f) cell_call4_button_pane_t1_ParamLimits

0x6f6f,	// (0x0003036f) cell_call4_button_pane_t1

0x6fd3,	// (0x000303d3) popup_call4_audio_conf_window_ParamLimits

0x6fd3,	// (0x000303d3) popup_call4_audio_conf_window

0x5eea,	// (0x0002f2ea) mup3_progress_pane_t1_ParamLimits

0x5f09,	// (0x0002f309) mup3_progress_pane_t2_ParamLimits

0x5f28,	// (0x0002f328) mup3_progress_pane_t3_ParamLimits

0xf799,	// (0x00038b99) mup3_progress_pane_t_ParamLimits

0x5f45,	// (0x0002f345) mup_progress_pane_cp03_ParamLimits

0x6763,	// (0x0002fb63) mup3_control_keys_pane_g4_copy1

0xb6f8,	// (0x00034af8) mp4_rocker2_pane_ParamLimits

0xb6f8,	// (0x00034af8) mp4_rocker2_pane

0x6fe7,	// (0x000303e7) mp4_rocker2_pane_g1

0x6fef,	// (0x000303ef) mp4_rocker2_pane_g2

0xb766,	// (0x00034b66) mp4_rocker2_pane_g3

0xb76e,	// (0x00034b6e) mp4_rocker2_pane_g4

0xb776,	// (0x00034b76) mp4_rocker2_pane_g5

0x0004,

0xf8c4,	// (0x00038cc4) mp4_rocker2_pane_g

0xb200,	// (0x00034600) main_camera4_pane

0xb200,	// (0x00034600) main_video4_pane

0x1630,	// (0x0002aa30) main_video_tele_dialer_pane_t1_ParamLimits

0x1630,	// (0x0002aa30) main_video_tele_dialer_pane_t1

0x1649,	// (0x0002aa49) main_video_tele_dialer_pane_t2_ParamLimits

0x1649,	// (0x0002aa49) main_video_tele_dialer_pane_t2

0x0001,

0xf87e,	// (0x00038c7e) main_video_tele_dialer_pane_t_ParamLimits

0xf87e,	// (0x00038c7e) main_video_tele_dialer_pane_t

0x1981,	// (0x0002ad81) cam4_autofocus_pane_ParamLimits

0x1981,	// (0x0002ad81) cam4_autofocus_pane

0x1997,	// (0x0002ad97) cam4_image_uncrop_pane_ParamLimits

0x1997,	// (0x0002ad97) cam4_image_uncrop_pane

0x19b1,	// (0x0002adb1) cam4_indicators_pane_ParamLimits

0x19b1,	// (0x0002adb1) cam4_indicators_pane

0x19dc,	// (0x0002addc) main_camera4_pane_g1_ParamLimits

0x19dc,	// (0x0002addc) main_camera4_pane_g1

0x19ee,	// (0x0002adee) main_camera4_pane_g2_ParamLimits

0x19ee,	// (0x0002adee) main_camera4_pane_g2

0x1a01,	// (0x0002ae01) main_camera4_pane_g3_ParamLimits

0x1a01,	// (0x0002ae01) main_camera4_pane_g3

0x1a14,	// (0x0002ae14) main_camera4_pane_g4_ParamLimits

0x1a14,	// (0x0002ae14) main_camera4_pane_g4

0x1a27,	// (0x0002ae27) main_camera4_pane_g5_ParamLimits

0x1a27,	// (0x0002ae27) main_camera4_pane_g5

0x0005,

0xf8cf,	// (0x00038ccf) main_camera4_pane_g_ParamLimits

0xf8cf,	// (0x00038ccf) main_camera4_pane_g

0x1a4b,	// (0x0002ae4b) main_camera4_pane_t1_ParamLimits

0x1a4b,	// (0x0002ae4b) main_camera4_pane_t1

0xb7ac,	// (0x00034bac) bg_tb_trans_pane_cp06

0xb7c2,	// (0x00034bc2) cam4_indicators_pane_g1

0xb7d3,	// (0x00034bd3) cam4_indicators_pane_g2

0x0002,

0xf8ea,	// (0x00038cea) cam4_indicators_pane_g

0xb7f1,	// (0x00034bf1) cam4_indicators_pane_t1

0x1a9b,	// (0x0002ae9b) main_video4_pane_g1_ParamLimits

0x1a9b,	// (0x0002ae9b) main_video4_pane_g1

0x1aaa,	// (0x0002aeaa) main_video4_pane_g2_ParamLimits

0x1aaa,	// (0x0002aeaa) main_video4_pane_g2

0x1ab9,	// (0x0002aeb9) main_video4_pane_g3_ParamLimits

0x1ab9,	// (0x0002aeb9) main_video4_pane_g3

0x1ac8,	// (0x0002aec8) main_video4_pane_g4_ParamLimits

0x1ac8,	// (0x0002aec8) main_video4_pane_g4

0x0004,

0xf8f1,	// (0x00038cf1) main_video4_pane_g_ParamLimits

0xf8f1,	// (0x00038cf1) main_video4_pane_g

0x1ae6,	// (0x0002aee6) vid4_indicators_pane_ParamLimits

0x1ae6,	// (0x0002aee6) vid4_indicators_pane

0x1b16,	// (0x0002af16) video4_image_uncrop_cif_pane_ParamLimits

0x1b16,	// (0x0002af16) video4_image_uncrop_cif_pane

0x1b30,	// (0x0002af30) video4_image_uncrop_nhd_pane_ParamLimits

0x1b30,	// (0x0002af30) video4_image_uncrop_nhd_pane

0x1997,	// (0x0002ad97) video4_image_uncrop_vga_pane_ParamLimits

0x1997,	// (0x0002ad97) video4_image_uncrop_vga_pane

0xb1f2,	// (0x000345f2) bg_tb_trans_pane_cp07

0xb81b,	// (0x00034c1b) vid4_indicators_pane_g1

0xb82f,	// (0x00034c2f) vid4_indicators_pane_g2

0xb843,	// (0x00034c43) vid4_indicators_pane_g3

0x0004,

0xf8fc,	// (0x00038cfc) vid4_indicators_pane_g

0xb870,	// (0x00034c70) vid4_indicators_pane_t1

0x700b,	// (0x0003040b) cam4_autofocus_pane_g1

0x7013,	// (0x00030413) cam4_autofocus_pane_g2

0x701b,	// (0x0003041b) cam4_autofocus_pane_g3

0x0002,

0xf907,	// (0x00038d07) cam4_autofocus_pane_g

0x7023,	// (0x00030423) cam4_autofocus_pane_g3_copy1

0x6c48,	// (0x00030048) video_down_pane_cp_t1

0x6c56,	// (0x00030056) video_down_pane_cp_t2

0x0001,

0xf883,	// (0x00038c83) video_down_pane_cp_t

0xb1f2,	// (0x000345f2) popup_vitu2_window_ParamLimits

0xb1f2,	// (0x000345f2) popup_vitu2_window

0x1b44,	// (0x0002af44) aid_size_cell2_itu2_ParamLimits

0x1b44,	// (0x0002af44) aid_size_cell2_itu2

0x1b6a,	// (0x0002af6a) aid_size_cell_itu2_ParamLimits

0x1b6a,	// (0x0002af6a) aid_size_cell_itu2

0x1bc6,	// (0x0002afc6) bg_popup_window_pane_cp09_ParamLimits

0x1bc6,	// (0x0002afc6) bg_popup_window_pane_cp09

0x1bd4,	// (0x0002afd4) field_vitu2_entry_pane_ParamLimits

0x1bd4,	// (0x0002afd4) field_vitu2_entry_pane

0x1bfa,	// (0x0002affa) grid_vitu2_function_pane_ParamLimits

0x1bfa,	// (0x0002affa) grid_vitu2_function_pane

0x1c4b,	// (0x0002b04b) grid_vitu2_itu_pane_ParamLimits

0x1c4b,	// (0x0002b04b) grid_vitu2_itu_pane

0x1cdc,	// (0x0002b0dc) cell_vitu2_itu_pane_ParamLimits

0x1cdc,	// (0x0002b0dc) cell_vitu2_itu_pane

0x1d00,	// (0x0002b100) cell_vitu2_function_pane_ParamLimits

0x1d00,	// (0x0002b100) cell_vitu2_function_pane

0x702b,	// (0x0003042b) bg_popup_call_pane_cp08_ParamLimits

0x702b,	// (0x0003042b) bg_popup_call_pane_cp08

0x7044,	// (0x00030444) field_vitu2_entry_pane_g1

0x7050,	// (0x00030450) field_vitu2_entry_pane_g2

0x0002,

0xf90e,	// (0x00038d0e) field_vitu2_entry_pane_g

0x706a,	// (0x0003046a) field_vitu2_entry_pane_t1_ParamLimits

0x706a,	// (0x0003046a) field_vitu2_entry_pane_t1

0x709b,	// (0x0003049b) field_vitu2_entry_pane_t2_ParamLimits

0x709b,	// (0x0003049b) field_vitu2_entry_pane_t2

0x0001,

0xf915,	// (0x00038d15) field_vitu2_entry_pane_t_ParamLimits

0xf915,	// (0x00038d15) field_vitu2_entry_pane_t

0x1d3f,	// (0x0002b13f) bg_button_pane_cp010_ParamLimits

0x1d3f,	// (0x0002b13f) bg_button_pane_cp010

0x1d4d,	// (0x0002b14d) cell_vitu2_itu_pane_g1

0x1d6b,	// (0x0002b16b) cell_vitu2_itu_pane_t1_ParamLimits

0x1d6b,	// (0x0002b16b) cell_vitu2_itu_pane_t1

0x1dd1,	// (0x0002b1d1) cell_vitu2_itu_pane_t2_ParamLimits

0x1dd1,	// (0x0002b1d1) cell_vitu2_itu_pane_t2

0x0002,

0xf91f,	// (0x00038d1f) cell_vitu2_itu_pane_t_ParamLimits

0xf91f,	// (0x00038d1f) cell_vitu2_itu_pane_t

0xb1f2,	// (0x000345f2) bg_button_pane_cp011

0x1ead,	// (0x0002b2ad) cell_vitu2_function_pane_g1

0xb200,	// (0x00034600) main_myfav_hc_pane

0x1931,	// (0x0002ad31) popup_image3_note_pane_ParamLimits

0x1931,	// (0x0002ad31) popup_image3_note_pane

0x194d,	// (0x0002ad4d) popup_image3_tool_bar_pane_ParamLimits

0x194d,	// (0x0002ad4d) popup_image3_tool_bar_pane

0x1e55,	// (0x0002b255) cell_vitu2_itu_pane_t3_ParamLimits

0x1e55,	// (0x0002b255) cell_vitu2_itu_pane_t3

0xc860,	// (0x00035c60) bg_popup_trans_pane

0x70c0,	// (0x000304c0) grid_image3_tool_bar_pane

0x70ca,	// (0x000304ca) bg_popup_trans_pane_g1

0xd4ca,	// (0x000368ca) bg_popup_trans_pane_g2

0x70d2,	// (0x000304d2) bg_popup_trans_pane_g3

0x70da,	// (0x000304da) bg_popup_trans_pane_g4

0x70e2,	// (0x000304e2) bg_popup_trans_pane_g5

0x70ea,	// (0x000304ea) bg_popup_trans_pane_g6

0x70f2,	// (0x000304f2) bg_popup_trans_pane_g7

0x70fa,	// (0x000304fa) bg_popup_trans_pane_g8

0xd4aa,	// (0x000368aa) bg_popup_trans_pane_g9

0x0008,

0xf926,	// (0x00038d26) bg_popup_trans_pane_g

0x7102,	// (0x00030502) cell_image3_tool_bar_pane_ParamLimits

0x7102,	// (0x00030502) cell_image3_tool_bar_pane

0x53cc,	// (0x0002e7cc) cell_image3_tool_bar_pane_g1

0xc860,	// (0x00035c60) bg_popup_trans_pane_cp1

0x7116,	// (0x00030516) popup_image3_note_pane_t1

0x7124,	// (0x00030524) popup_image3_note_pane_t2

0x7132,	// (0x00030532) popup_image3_note_pane_t3

0x0002,

0xf939,	// (0x00038d39) popup_image3_note_pane_t

0x7140,	// (0x00030540) popup_image3_note_pane_t3_copy1

0x714e,	// (0x0003054e) bg_myfav_hc_instruction_pane_ParamLimits

0x714e,	// (0x0003054e) bg_myfav_hc_instruction_pane

0x7164,	// (0x00030564) cell_myfav_contact_pane_ParamLimits

0x7164,	// (0x00030564) cell_myfav_contact_pane

0x7180,	// (0x00030580) cell_myfav_contact_pane_cp1_ParamLimits

0x7180,	// (0x00030580) cell_myfav_contact_pane_cp1

0x7198,	// (0x00030598) cell_myfav_contact_pane_cp2_ParamLimits

0x7198,	// (0x00030598) cell_myfav_contact_pane_cp2

0x71b0,	// (0x000305b0) cell_myfav_contact_pane_cp3_ParamLimits

0x71b0,	// (0x000305b0) cell_myfav_contact_pane_cp3

0x71c7,	// (0x000305c7) cell_myfav_contact_pane_cp4_ParamLimits

0x71c7,	// (0x000305c7) cell_myfav_contact_pane_cp4

0x71df,	// (0x000305df) cell_myfav_contact_pane_cp5_ParamLimits

0x71df,	// (0x000305df) cell_myfav_contact_pane_cp5

0x71f3,	// (0x000305f3) cell_myfav_contact_pane_cp6_ParamLimits

0x71f3,	// (0x000305f3) cell_myfav_contact_pane_cp6

0x7209,	// (0x00030609) cell_myfav_contact_pane_cp7_ParamLimits

0x7209,	// (0x00030609) cell_myfav_contact_pane_cp7

0x7223,	// (0x00030623) listscroll_gen_pane_cp05

0x722c,	// (0x0003062c) main_myfav_hc_pane_g1_ParamLimits

0x722c,	// (0x0003062c) main_myfav_hc_pane_g1

0x7246,	// (0x00030646) main_myfav_hc_pane_g2_ParamLimits

0x7246,	// (0x00030646) main_myfav_hc_pane_g2

0x0002,

0xf940,	// (0x00038d40) main_myfav_hc_pane_g_ParamLimits

0xf940,	// (0x00038d40) main_myfav_hc_pane_g

0x7278,	// (0x00030678) main_myfav_hc_pane_t1_ParamLimits

0x7278,	// (0x00030678) main_myfav_hc_pane_t1

0x728f,	// (0x0003068f) main_myfav_hc_pane_t2_ParamLimits

0x728f,	// (0x0003068f) main_myfav_hc_pane_t2

0x72a1,	// (0x000306a1) main_myfav_hc_pane_t3_ParamLimits

0x72a1,	// (0x000306a1) main_myfav_hc_pane_t3

0x72b3,	// (0x000306b3) main_myfav_hc_pane_t4_ParamLimits

0x72b3,	// (0x000306b3) main_myfav_hc_pane_t4

0x0004,

0xf947,	// (0x00038d47) main_myfav_hc_pane_t_ParamLimits

0xf947,	// (0x00038d47) main_myfav_hc_pane_t

0x53cc,	// (0x0002e7cc) bg_myfav_hc_instruction_pane_g1

0x72db,	// (0x000306db) cell_myfav_contact_pane_g1_ParamLimits

0x72db,	// (0x000306db) cell_myfav_contact_pane_g1

0x72db,	// (0x000306db) cell_myfav_contact_pane_g2_ParamLimits

0x72db,	// (0x000306db) cell_myfav_contact_pane_g2

0x72e7,	// (0x000306e7) cell_myfav_contact_pane_g3_ParamLimits

0x72e7,	// (0x000306e7) cell_myfav_contact_pane_g3

0x5a8f,	// (0x0002ee8f) cell_myfav_contact_pane_g4_ParamLimits

0x5a8f,	// (0x0002ee8f) cell_myfav_contact_pane_g4

0x72f4,	// (0x000306f4) cell_myfav_contact_pane_g5_ParamLimits

0x72f4,	// (0x000306f4) cell_myfav_contact_pane_g5

0x0004,

0xf952,	// (0x00038d52) cell_myfav_contact_pane_g_ParamLimits

0xf952,	// (0x00038d52) cell_myfav_contact_pane_g

0x7260,	// (0x00030660) main_myfav_hc_pane_g3_ParamLimits

0x7260,	// (0x00030660) main_myfav_hc_pane_g3

0x0a8c,	// (0x00029e8c) popup_adpt_find_window

0x7300,	// (0x00030700) afind_page_pane_ParamLimits

0x7300,	// (0x00030700) afind_page_pane

0x7315,	// (0x00030715) aid_size_cell_afind_ParamLimits

0x7315,	// (0x00030715) aid_size_cell_afind

0x7333,	// (0x00030733) bg_popup_sub_pane_cp09_ParamLimits

0x7333,	// (0x00030733) bg_popup_sub_pane_cp09

0x7340,	// (0x00030740) find_pane_cp01_ParamLimits

0x7340,	// (0x00030740) find_pane_cp01

0x734d,	// (0x0003074d) grid_afind_control_pane_ParamLimits

0x734d,	// (0x0003074d) grid_afind_control_pane

0x7361,	// (0x00030761) grid_afind_pane_ParamLimits

0x7361,	// (0x00030761) grid_afind_pane

0x7383,	// (0x00030783) cell_afind_pane_ParamLimits

0x7383,	// (0x00030783) cell_afind_pane

0x53cc,	// (0x0002e7cc) afind_page_pane_g1

0x73e4,	// (0x000307e4) afind_page_pane_g2

0x73ed,	// (0x000307ed) afind_page_pane_g3

0x0002,

0xf95d,	// (0x00038d5d) afind_page_pane_g

0x73f6,	// (0x000307f6) afind_page_pane_t1

0x7416,	// (0x00030816) cell_afind_grid_control_pane_ParamLimits

0x7416,	// (0x00030816) cell_afind_grid_control_pane

0x6d6c,	// (0x0003016c) bg_button_pane_cp69_ParamLimits

0x6d6c,	// (0x0003016c) bg_button_pane_cp69

0x7425,	// (0x00030825) cell_afind_pane_g1_ParamLimits

0x7425,	// (0x00030825) cell_afind_pane_g1

0x7432,	// (0x00030832) cell_afind_pane_t1_ParamLimits

0x7432,	// (0x00030832) cell_afind_pane_t1

0xd206,	// (0x00036606) bg_button_pane_cp72

0x7444,	// (0x00030844) cell_afind_grid_control_pane_g1

0x4574,	// (0x0002d974) aid_image_placing_area_ParamLimits

0x4574,	// (0x0002d974) aid_image_placing_area

0x6810,	// (0x0002fc10) field_vitu_entry_pane_g1_ParamLimits

0x6810,	// (0x0002fc10) field_vitu_entry_pane_g1

0x681c,	// (0x0002fc1c) field_vitu_entry_pane_g2_ParamLimits

0x681c,	// (0x0002fc1c) field_vitu_entry_pane_g2

0x0001,

0xf80e,	// (0x00038c0e) field_vitu_entry_pane_g_ParamLimits

0xf80e,	// (0x00038c0e) field_vitu_entry_pane_g

0x6873,	// (0x0002fc73) cell_vitu_itu_pane_g1_ParamLimits

0x68b5,	// (0x0002fcb5) cell_vitu_itu_pane_t3_ParamLimits

0x68b5,	// (0x0002fcb5) cell_vitu_itu_pane_t3

0x6cd3,	// (0x000300d3) mp4_progress_pane_t1_ParamLimits

0x6cec,	// (0x000300ec) mp4_progress_pane_t2_ParamLimits

0xf8a3,	// (0x00038ca3) mp4_progress_pane_t_ParamLimits

0x6d05,	// (0x00030105) mup_progress_pane_cp04_ParamLimits

0x72c7,	// (0x000306c7) main_myfav_hc_pane_t5_ParamLimits

0x72c7,	// (0x000306c7) main_myfav_hc_pane_t5

0xb1a8,	// (0x000345a8) aid_zoom_text_primary

0x0a8c,	// (0x00029e8c) popup_adpt_find_window_ParamLimits

0xb1f2,	// (0x000345f2) main_cam_set_pane

0x19c8,	// (0x0002adc8) cam4_zoom_pane_ParamLimits

0x19c8,	// (0x0002adc8) cam4_zoom_pane

0x744d,	// (0x0003084d) main_cam_set_pane_g1_ParamLimits

0x744d,	// (0x0003084d) main_cam_set_pane_g1

0x745b,	// (0x0003085b) main_cam_set_pane_g2_ParamLimits

0x745b,	// (0x0003085b) main_cam_set_pane_g2

0x0001,

0xf964,	// (0x00038d64) main_cam_set_pane_g_ParamLimits

0xf964,	// (0x00038d64) main_cam_set_pane_g

0x747c,	// (0x0003087c) main_cam_set_pane_t1_ParamLimits

0x747c,	// (0x0003087c) main_cam_set_pane_t1

0x7497,	// (0x00030897) main_cset_listscroll_pane_ParamLimits

0x7497,	// (0x00030897) main_cset_listscroll_pane

0x74b7,	// (0x000308b7) main_cset_slider_pane_ParamLimits

0x74b7,	// (0x000308b7) main_cset_slider_pane

0x74e5,	// (0x000308e5) main_cset_list_pane_ParamLimits

0x74e5,	// (0x000308e5) main_cset_list_pane

0x74f5,	// (0x000308f5) scroll_pane_cp028

0x74fe,	// (0x000308fe) aid_area_touch_slider

0x751a,	// (0x0003091a) cset_slider_pane

0x7544,	// (0x00030944) main_cset_slider_pane_g1

0x7559,	// (0x00030959) main_cset_slider_pane_g2

0x0011,

0xf969,	// (0x00038d69) main_cset_slider_pane_g

0x7645,	// (0x00030a45) main_cset_slider_pane_t1

0x7673,	// (0x00030a73) main_cset_slider_pane_t2

0x768d,	// (0x00030a8d) main_cset_slider_pane_t3

0x76a7,	// (0x00030aa7) main_cset_slider_pane_t4

0x76c1,	// (0x00030ac1) main_cset_slider_pane_t5

0x76dd,	// (0x00030add) main_cset_slider_pane_t6

0x76f2,	// (0x00030af2) main_cset_slider_pane_t7

0x000e,

0xf98e,	// (0x00038d8e) main_cset_slider_pane_t

0x7868,	// (0x00030c68) cset_list_set_pane_ParamLimits

0x7868,	// (0x00030c68) cset_list_set_pane

0x787c,	// (0x00030c7c) aid_position_infowindow_above

0x7884,	// (0x00030c84) aid_position_infowindow_below

0x788c,	// (0x00030c8c) cset_list_set_pane_g1_ParamLimits

0x788c,	// (0x00030c8c) cset_list_set_pane_g1

0x7898,	// (0x00030c98) cset_list_set_pane_g3_ParamLimits

0x7898,	// (0x00030c98) cset_list_set_pane_g3

0x0001,

0xf9ad,	// (0x00038dad) cset_list_set_pane_g_ParamLimits

0xf9ad,	// (0x00038dad) cset_list_set_pane_g

0x78a7,	// (0x00030ca7) cset_list_set_pane_t1_ParamLimits

0x78a7,	// (0x00030ca7) cset_list_set_pane_t1

0xcd8f,	// (0x0003618f) list_highlight_pane_cp021_ParamLimits

0xcd8f,	// (0x0003618f) list_highlight_pane_cp021

0xdd23,	// (0x00037123) cset_slider_pane_g1

0xdd35,	// (0x00037135) cset_slider_pane_g2

0xdd2c,	// (0x0003712c) cset_slider_pane_g3

0x0002,

0x03e7,	// (0x000297e7) cset_slider_pane_g

0xb887,	// (0x00034c87) aid_area_touch_cam4_zoom

0xb88f,	// (0x00034c8f) cam4_zoom_cont_pane

0xb897,	// (0x00034c97) cam4_zoom_pane_g1

0xb89f,	// (0x00034c9f) cam4_zoom_pane_g2

0x1ec1,	// (0x0002b2c1) cam4_zoom_pane_g3

0x0002,

0xf9b2,	// (0x00038db2) cam4_zoom_pane_g

0xb8a7,	// (0x00034ca7) cam4_zoom_cont_pane_g1

0xb8b0,	// (0x00034cb0) cam4_zoom_cont_pane_g2

0xb8b9,	// (0x00034cb9) cam4_zoom_cont_pane_g3

0x0002,

0xf9b9,	// (0x00038db9) cam4_zoom_cont_pane_g

0x6e31,	// (0x00030231) call4_image_pane_ParamLimits

0x6e31,	// (0x00030231) call4_image_pane

0x6e91,	// (0x00030291) call4_windows_conf_pane_ParamLimits

0x6ed0,	// (0x000302d0) popup_call4_audio_in_window_ParamLimits

0x6ed0,	// (0x000302d0) popup_call4_audio_in_window

0xc860,	// (0x00035c60) bg_popup_call2_act_pane_cp02

0x6fcb,	// (0x000303cb) call4_list_conf_pane

0x53cc,	// (0x0002e7cc) call4_image_pane_g1

0x53cc,	// (0x0002e7cc) call4_image_pane_g2

0x0001,

0xf6d9,	// (0x00038ad9) call4_image_pane_g

0x78bc,	// (0x00030cbc) list_single_graphic_popup_conf4_pane_ParamLimits

0x78bc,	// (0x00030cbc) list_single_graphic_popup_conf4_pane

0xc860,	// (0x00035c60) list_highlight_pane_cp022

0x78cf,	// (0x00030ccf) list_single_graphic_popup_conf4_pane_g1

0xda06,	// (0x00036e06) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9c0,	// (0x00038dc0) list_single_graphic_popup_conf4_pane_g

0x78d7,	// (0x00030cd7) list_single_graphic_popup_conf4_pane_t1

0x2b91,	// (0x0002bf91) popup_vtel_slider_window_ParamLimits

0x2b91,	// (0x0002bf91) popup_vtel_slider_window

0x6d5a,	// (0x0003015a) dialer2_ne_pane_t2_ParamLimits

0x6d5a,	// (0x0003015a) dialer2_ne_pane_t2

0x0001,

0xf8a8,	// (0x00038ca8) dialer2_ne_pane_t_ParamLimits

0xf8a8,	// (0x00038ca8) dialer2_ne_pane_t

0x50e3,	// (0x0002e4e3) bg_popup_sub_pane_cp010_ParamLimits

0x50e3,	// (0x0002e4e3) bg_popup_sub_pane_cp010

0x78ed,	// (0x00030ced) popup_vtel_slider_window_g1_ParamLimits

0x78ed,	// (0x00030ced) popup_vtel_slider_window_g1

0x7900,	// (0x00030d00) popup_vtel_slider_window_g2_ParamLimits

0x7900,	// (0x00030d00) popup_vtel_slider_window_g2

0x0003,

0xf9c5,	// (0x00038dc5) popup_vtel_slider_window_g_ParamLimits

0xf9c5,	// (0x00038dc5) popup_vtel_slider_window_g

0x7956,	// (0x00030d56) vtel_slider_pane_ParamLimits

0x7956,	// (0x00030d56) vtel_slider_pane

0x7978,	// (0x00030d78) vtel_slider_pane_g1_ParamLimits

0x7978,	// (0x00030d78) vtel_slider_pane_g1

0x798c,	// (0x00030d8c) vtel_slider_pane_g2_ParamLimits

0x798c,	// (0x00030d8c) vtel_slider_pane_g2

0x79a4,	// (0x00030da4) vtel_slider_pane_g3_ParamLimits

0x79a4,	// (0x00030da4) vtel_slider_pane_g3

0x7978,	// (0x00030d78) vtel_slider_pane_g4_ParamLimits

0x7978,	// (0x00030d78) vtel_slider_pane_g4

0x79ba,	// (0x00030dba) vtel_slider_pane_g5_ParamLimits

0x79ba,	// (0x00030dba) vtel_slider_pane_g5

0x0004,

0xf9ce,	// (0x00038dce) vtel_slider_pane_g_ParamLimits

0xf9ce,	// (0x00038dce) vtel_slider_pane_g

0xb200,	// (0x00034600) main_gallery2_pane

0x1b96,	// (0x0002af96) aid_size_row_itut2_dropdow_list_ParamLimits

0x1b96,	// (0x0002af96) aid_size_row_itut2_dropdow_list

0x1c22,	// (0x0002b022) grid_vitu2_function_top_pane_ParamLimits

0x1c22,	// (0x0002b022) grid_vitu2_function_top_pane

0x1c87,	// (0x0002b087) popup_vitu2_dropdown_list_window_ParamLimits

0x1c87,	// (0x0002b087) popup_vitu2_dropdown_list_window

0x1cb0,	// (0x0002b0b0) popup_vitu2_match_list_window

0x1ec9,	// (0x0002b2c9) cell_vitu2_function_top_pane_ParamLimits

0x1ec9,	// (0x0002b2c9) cell_vitu2_function_top_pane

0x1ee7,	// (0x0002b2e7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1ee7,	// (0x0002b2e7) cell_vitu2_function_top_pane_cp01

0x1f05,	// (0x0002b305) cell_vitu2_function_top_wide_pane_ParamLimits

0x1f05,	// (0x0002b305) cell_vitu2_function_top_wide_pane

0xb1f2,	// (0x000345f2) bg_button_pane_cp012

0x1f23,	// (0x0002b323) cell_vitu2_function_top_pane_g1

0xb8c2,	// (0x00034cc2) bg_button_pane_cp013_ParamLimits

0xb8c2,	// (0x00034cc2) bg_button_pane_cp013

0x79de,	// (0x00030dde) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x79de,	// (0x00030dde) cell_vitu2_function_top_wide_pane_g1

0xb1f2,	// (0x000345f2) bg_popup_sub_pane_cp20

0x1f37,	// (0x0002b337) list_vitu2_match_list_pane

0x70ca,	// (0x000304ca) bg_popup_sub_pane_cp20_g1

0x70d2,	// (0x000304d2) bg_popup_sub_pane_cp20_g2

0xd4ca,	// (0x000368ca) bg_popup_sub_pane_cp20_g3

0x70da,	// (0x000304da) bg_popup_sub_pane_cp20_g4

0xd4aa,	// (0x000368aa) bg_popup_sub_pane_cp20_g5

0x79f6,	// (0x00030df6) bg_popup_sub_pane_cp20_g6

0x70ea,	// (0x000304ea) bg_popup_sub_pane_cp20_g7

0x70f2,	// (0x000304f2) bg_popup_sub_pane_cp20_g8

0x70fa,	// (0x000304fa) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d9,	// (0x00038dd9) bg_popup_sub_pane_cp20_g

0xb8de,	// (0x00034cde) list_vitu2_match_list_item_pane_ParamLimits

0xb8de,	// (0x00034cde) list_vitu2_match_list_item_pane

0xb8f0,	// (0x00034cf0) list_vitu2_match_list_item_pane_t1

0xb200,	// (0x00034600) bg_popup_sub_pane_cp21

0xb8fe,	// (0x00034cfe) grid_vitu2_dropdown_list_pane

0x1f55,	// (0x0002b355) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1f55,	// (0x0002b355) cell_vitu2_dropdown_list_char_pane

0x1f76,	// (0x0002b376) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1f76,	// (0x0002b376) cell_vitu2_dropdown_list_ctrl_pane

0x7a4b,	// (0x00030e4b) cell_vitu2_dropdown_list_char_pane_g1

0x7a54,	// (0x00030e54) cell_vitu2_dropdown_list_char_pane_g2

0x7a5d,	// (0x00030e5d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f6,	// (0x00038df6) cell_vitu2_dropdown_list_char_pane_g

0x1fa2,	// (0x0002b3a2) cell_vitu2_dropdown_list_char_pane_t1

0x7a66,	// (0x00030e66) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7a66,	// (0x00030e66) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7a76,	// (0x00030e76) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7a76,	// (0x00030e76) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7a87,	// (0x00030e87) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7a87,	// (0x00030e87) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1fb0,	// (0x0002b3b0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1fb0,	// (0x0002b3b0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb7ac,	// (0x00034bac) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb7ac,	// (0x00034bac) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fd,	// (0x00038dfd) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fd,	// (0x00038dfd) cell_vitu2_dropdown_list_ctrl_pane_g

0x7a97,	// (0x00030e97) aid_size_cell_gallery2_ParamLimits

0x7a97,	// (0x00030e97) aid_size_cell_gallery2

0x7aad,	// (0x00030ead) grid_gallery2_pane_ParamLimits

0x7aad,	// (0x00030ead) grid_gallery2_pane

0x7ac1,	// (0x00030ec1) scroll_pane_cp029_ParamLimits

0x7ac1,	// (0x00030ec1) scroll_pane_cp029

0x7acd,	// (0x00030ecd) cell_gallery2_pane_ParamLimits

0x7acd,	// (0x00030ecd) cell_gallery2_pane

0x7b03,	// (0x00030f03) cell_gallery2_pane_g2

0x7b0d,	// (0x00030f0d) cell_gallery2_pane_g3

0x7b15,	// (0x00030f15) cell_gallery2_pane_g4

0x7b1d,	// (0x00030f1d) cell_gallery2_pane_g5

0xdbdf,	// (0x00036fdf) grid_highlight_pane_cp10

0x1cb0,	// (0x0002b0b0) popup_vitu2_match_list_window_ParamLimits

0x1cc5,	// (0x0002b0c5) popup_vitu2_query_window_ParamLimits

0x1cc5,	// (0x0002b0c5) popup_vitu2_query_window

0xb200,	// (0x00034600) bg_vitu2_candi_button_pane

0x7a4b,	// (0x00030e4b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x7a54,	// (0x00030e54) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x7a5d,	// (0x00030e5d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7b25,	// (0x00030f25) bg_button_pane_cp015

0x7b39,	// (0x00030f39) bg_button_pane_cp016

0x7b4c,	// (0x00030f4c) bg_button_pane_cp017

0xf02a,	// (0x0003842a) bg_popup_sub_pane_cp22

0x7b91,	// (0x00030f91) popup_vitu2_query_window_g1

0x7b9d,	// (0x00030f9d) popup_vitu2_query_window_g2

0x0002,

0xfa08,	// (0x00038e08) popup_vitu2_query_window_g

0x7bbc,	// (0x00030fbc) popup_vitu2_query_window_t1_ParamLimits

0x7bbc,	// (0x00030fbc) popup_vitu2_query_window_t1

0x7bf1,	// (0x00030ff1) popup_vitu2_query_window_t2_ParamLimits

0x7bf1,	// (0x00030ff1) popup_vitu2_query_window_t2

0x7c03,	// (0x00031003) popup_vitu2_query_window_t3_ParamLimits

0x7c03,	// (0x00031003) popup_vitu2_query_window_t3

0x7c2b,	// (0x0003102b) popup_vitu2_query_window_t4_ParamLimits

0x7c2b,	// (0x0003102b) popup_vitu2_query_window_t4

0x7c4c,	// (0x0003104c) popup_vitu2_query_window_t5_ParamLimits

0x7c4c,	// (0x0003104c) popup_vitu2_query_window_t5

0x0006,

0xfa0f,	// (0x00038e0f) popup_vitu2_query_window_t_ParamLimits

0xfa0f,	// (0x00038e0f) popup_vitu2_query_window_t

0x74dd,	// (0x000308dd) main_cset_text_pane

0x74fe,	// (0x000308fe) aid_area_touch_slider_ParamLimits

0x751a,	// (0x0003091a) cset_slider_pane_ParamLimits

0x7544,	// (0x00030944) main_cset_slider_pane_g1_ParamLimits

0x7559,	// (0x00030959) main_cset_slider_pane_g2_ParamLimits

0x756e,	// (0x0003096e) main_cset_slider_pane_g3_ParamLimits

0x756e,	// (0x0003096e) main_cset_slider_pane_g3

0x757a,	// (0x0003097a) main_cset_slider_pane_g4_ParamLimits

0x757a,	// (0x0003097a) main_cset_slider_pane_g4

0x7589,	// (0x00030989) main_cset_slider_pane_g5_ParamLimits

0x7589,	// (0x00030989) main_cset_slider_pane_g5

0x7595,	// (0x00030995) main_cset_slider_pane_g6_ParamLimits

0x7595,	// (0x00030995) main_cset_slider_pane_g6

0xf969,	// (0x00038d69) main_cset_slider_pane_g_ParamLimits

0x7645,	// (0x00030a45) main_cset_slider_pane_t1_ParamLimits

0x7673,	// (0x00030a73) main_cset_slider_pane_t2_ParamLimits

0x768d,	// (0x00030a8d) main_cset_slider_pane_t3_ParamLimits

0x76a7,	// (0x00030aa7) main_cset_slider_pane_t4_ParamLimits

0x76c1,	// (0x00030ac1) main_cset_slider_pane_t5_ParamLimits

0x76dd,	// (0x00030add) main_cset_slider_pane_t6_ParamLimits

0x76f2,	// (0x00030af2) main_cset_slider_pane_t7_ParamLimits

0x771c,	// (0x00030b1c) main_cset_slider_pane_t8_ParamLimits

0x771c,	// (0x00030b1c) main_cset_slider_pane_t8

0x7744,	// (0x00030b44) main_cset_slider_pane_t9_ParamLimits

0x7744,	// (0x00030b44) main_cset_slider_pane_t9

0x776c,	// (0x00030b6c) main_cset_slider_pane_t10_ParamLimits

0x776c,	// (0x00030b6c) main_cset_slider_pane_t10

0x7794,	// (0x00030b94) main_cset_slider_pane_t11_ParamLimits

0x7794,	// (0x00030b94) main_cset_slider_pane_t11

0x77bc,	// (0x00030bbc) main_cset_slider_pane_t12_ParamLimits

0x77bc,	// (0x00030bbc) main_cset_slider_pane_t12

0x77d9,	// (0x00030bd9) main_cset_slider_pane_t13_ParamLimits

0x77d9,	// (0x00030bd9) main_cset_slider_pane_t13

0xf98e,	// (0x00038d8e) main_cset_slider_pane_t_ParamLimits

0xc860,	// (0x00035c60) bg_popup_sub_pane_cp011

0x7cc3,	// (0x000310c3) main_cset_text_pane_g1

0x7ccb,	// (0x000310cb) main_cset_text_pane_t1

0x7cd9,	// (0x000310d9) main_cset_text_pane_t2

0x7ce7,	// (0x000310e7) main_cset_text_pane_t3

0x7cf5,	// (0x000310f5) main_cset_text_pane_t4

0x7d03,	// (0x00031103) main_cset_text_pane_t5

0x7d11,	// (0x00031111) main_cset_text_pane_t6

0x7d1f,	// (0x0003111f) main_cset_text_pane_t7

0x0006,

0xfa1e,	// (0x00038e1e) main_cset_text_pane_t

0xb200,	// (0x00034600) main_cam4_burst_pane

0xb200,	// (0x00034600) main_cam5_pane

0x7404,	// (0x00030804) bg_button_pane_cp019

0x740d,	// (0x0003080d) bg_button_pane_cp020

0x75a9,	// (0x000309a9) main_cset_slider_pane_g7_ParamLimits

0x75a9,	// (0x000309a9) main_cset_slider_pane_g7

0x75b5,	// (0x000309b5) main_cset_slider_pane_g8_ParamLimits

0x75b5,	// (0x000309b5) main_cset_slider_pane_g8

0x75c1,	// (0x000309c1) main_cset_slider_pane_g9_ParamLimits

0x75c1,	// (0x000309c1) main_cset_slider_pane_g9

0x75cd,	// (0x000309cd) main_cset_slider_pane_g10_ParamLimits

0x75cd,	// (0x000309cd) main_cset_slider_pane_g10

0x75d9,	// (0x000309d9) main_cset_slider_pane_g11_ParamLimits

0x75d9,	// (0x000309d9) main_cset_slider_pane_g11

0x75e5,	// (0x000309e5) main_cset_slider_pane_g12_ParamLimits

0x75e5,	// (0x000309e5) main_cset_slider_pane_g12

0x75f1,	// (0x000309f1) main_cset_slider_pane_g13_ParamLimits

0x75f1,	// (0x000309f1) main_cset_slider_pane_g13

0x75fd,	// (0x000309fd) main_cset_slider_pane_g14_ParamLimits

0x75fd,	// (0x000309fd) main_cset_slider_pane_g14

0x7609,	// (0x00030a09) main_cset_slider_pane_g15_ParamLimits

0x7609,	// (0x00030a09) main_cset_slider_pane_g15

0x77f6,	// (0x00030bf6) main_cset_slider_pane_t14_ParamLimits

0x77f6,	// (0x00030bf6) main_cset_slider_pane_t14

0x782f,	// (0x00030c2f) main_cset_slider_pane_t15_ParamLimits

0x782f,	// (0x00030c2f) main_cset_slider_pane_t15

0x7d2d,	// (0x0003112d) aid_cam4_burst_size_cell_ParamLimits

0x7d2d,	// (0x0003112d) aid_cam4_burst_size_cell

0x7d4d,	// (0x0003114d) grid_cam4_burst_pane_ParamLimits

0x7d4d,	// (0x0003114d) grid_cam4_burst_pane

0x7d85,	// (0x00031185) linegrid_cam4_burst_pane_ParamLimits

0x7d85,	// (0x00031185) linegrid_cam4_burst_pane

0x7dab,	// (0x000311ab) scroll_pane_cp30_ParamLimits

0x7dab,	// (0x000311ab) scroll_pane_cp30

0x7db7,	// (0x000311b7) cell_cam4_burst_pane_ParamLimits

0x7db7,	// (0x000311b7) cell_cam4_burst_pane

0x7e04,	// (0x00031204) linegrid_cam4_burst_pane_g1_ParamLimits

0x7e04,	// (0x00031204) linegrid_cam4_burst_pane_g1

0x7e11,	// (0x00031211) linegrid_cam4_burst_pane_g2_ParamLimits

0x7e11,	// (0x00031211) linegrid_cam4_burst_pane_g2

0x7e22,	// (0x00031222) linegrid_cam4_burst_pane_g3_ParamLimits

0x7e22,	// (0x00031222) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2d,	// (0x00038e2d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2d,	// (0x00038e2d) linegrid_cam4_burst_pane_g

0x7e2f,	// (0x0003122f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7e2f,	// (0x0003122f) linegrid_cam4_burst_pane_g3_copy1

0x7e49,	// (0x00031249) linegrid_cam4_burst_pane_g4_ParamLimits

0x7e49,	// (0x00031249) linegrid_cam4_burst_pane_g4

0x7e56,	// (0x00031256) linegrid_cam4_burst_pane_g5_ParamLimits

0x7e56,	// (0x00031256) linegrid_cam4_burst_pane_g5

0x7e67,	// (0x00031267) linegrid_cam4_burst_pane_g6_ParamLimits

0x7e67,	// (0x00031267) linegrid_cam4_burst_pane_g6

0x7e7e,	// (0x0003127e) linegrid_cam4_burst_pane_g7_ParamLimits

0x7e7e,	// (0x0003127e) linegrid_cam4_burst_pane_g7

0x7e8b,	// (0x0003128b) cell_cam4_burst_pane_g1

0x7eac,	// (0x000312ac) main_cam5_pane_t1_ParamLimits

0x7eac,	// (0x000312ac) main_cam5_pane_t1

0x7ebe,	// (0x000312be) main_cam5_pane_t2_ParamLimits

0x7ebe,	// (0x000312be) main_cam5_pane_t2

0x7ed0,	// (0x000312d0) main_cam5_pane_t3_ParamLimits

0x7ed0,	// (0x000312d0) main_cam5_pane_t3

0x7ee2,	// (0x000312e2) main_cam5_pane_t4_ParamLimits

0x7ee2,	// (0x000312e2) main_cam5_pane_t4

0x7ef8,	// (0x000312f8) main_cam5_pane_t5_ParamLimits

0x7ef8,	// (0x000312f8) main_cam5_pane_t5

0x7f0a,	// (0x0003130a) main_cam5_pane_t6_ParamLimits

0x7f0a,	// (0x0003130a) main_cam5_pane_t6

0x7f1e,	// (0x0003131e) main_cam5_pane_t7_ParamLimits

0x7f1e,	// (0x0003131e) main_cam5_pane_t7

0x7f30,	// (0x00031330) main_cam5_pane_t8_ParamLimits

0x7f30,	// (0x00031330) main_cam5_pane_t8

0x7f4c,	// (0x0003134c) main_cam5_pane_t9_ParamLimits

0x7f4c,	// (0x0003134c) main_cam5_pane_t9

0x7f5e,	// (0x0003135e) main_cam5_pane_t10_ParamLimits

0x7f5e,	// (0x0003135e) main_cam5_pane_t10

0x7f70,	// (0x00031370) main_cam5_pane_t11_ParamLimits

0x7f70,	// (0x00031370) main_cam5_pane_t11

0x7f82,	// (0x00031382) main_cam5_pane_t12_ParamLimits

0x7f82,	// (0x00031382) main_cam5_pane_t12

0x7f97,	// (0x00031397) main_cam5_pane_t13_ParamLimits

0x7f97,	// (0x00031397) main_cam5_pane_t13

0x000c,

0xfa39,	// (0x00038e39) main_cam5_pane_t_ParamLimits

0xfa39,	// (0x00038e39) main_cam5_pane_t

0x0b0e,	// (0x00029f0e) popup_scut_keymap_window_ParamLimits

0x0b0e,	// (0x00029f0e) popup_scut_keymap_window

0x7fb4,	// (0x000313b4) aid_size_cell_brow_shortcut

0xdbdf,	// (0x00036fdf) bg_popup_window_pane_cp010

0x7fc0,	// (0x000313c0) grid_scut_pane

0x7fcc,	// (0x000313cc) cell_scut_pane_ParamLimits

0x7fcc,	// (0x000313cc) cell_scut_pane

0x7fe3,	// (0x000313e3) cell_scut_pane_g1

0x7fec,	// (0x000313ec) cell_scut_pane_t1

0x7ffb,	// (0x000313fb) cell_scut_pane_t2

0x800a,	// (0x0003140a) cell_scut_pane_t3

0x0002,

0xfa54,	// (0x00038e54) cell_scut_pane_t

0x5a9d,	// (0x0002ee9d) main_mup3_pane_g8_ParamLimits

0x5a9d,	// (0x0002ee9d) main_mup3_pane_g8

0x1bae,	// (0x0002afae) area_vitu2_query_pane_ParamLimits

0x1bae,	// (0x0002afae) area_vitu2_query_pane

0x7b5f,	// (0x00030f5f) input_focus_pane_cp08

0x8018,	// (0x00031418) area_vitu2_query_pane_g1

0x8024,	// (0x00031424) area_vitu2_query_pane_g2

0x0001,

0xfa5b,	// (0x00038e5b) area_vitu2_query_pane_g

0x8035,	// (0x00031435) area_vitu2_query_pane_t1_ParamLimits

0x8035,	// (0x00031435) area_vitu2_query_pane_t1

0x8049,	// (0x00031449) area_vitu2_query_pane_t2_ParamLimits

0x8049,	// (0x00031449) area_vitu2_query_pane_t2

0x805d,	// (0x0003145d) area_vitu2_query_pane_t3_ParamLimits

0x805d,	// (0x0003145d) area_vitu2_query_pane_t3

0x8085,	// (0x00031485) area_vitu2_query_pane_t4_ParamLimits

0x8085,	// (0x00031485) area_vitu2_query_pane_t4

0x80ad,	// (0x000314ad) area_vitu2_query_pane_t5_ParamLimits

0x80ad,	// (0x000314ad) area_vitu2_query_pane_t5

0x80d5,	// (0x000314d5) area_vitu2_query_pane_t6_ParamLimits

0x80d5,	// (0x000314d5) area_vitu2_query_pane_t6

0x0006,

0xfa60,	// (0x00038e60) area_vitu2_query_pane_t_ParamLimits

0xfa60,	// (0x00038e60) area_vitu2_query_pane_t

0x8121,	// (0x00031521) bg_button_pane_cp018

0x812f,	// (0x0003152f) bg_button_pane_cp021

0x813b,	// (0x0003153b) bg_button_pane_cp022

0x814c,	// (0x0003154c) input_focus_pane_cp09

0x3b78,	// (0x0002cf78) aid_size_touch_mv_arrow_left

0x3ba1,	// (0x0002cfa1) aid_size_touch_mv_arrow_right

0x7621,	// (0x00030a21) main_cset_slider_pane_g16_ParamLimits

0x7621,	// (0x00030a21) main_cset_slider_pane_g16

0x762d,	// (0x00030a2d) main_cset_slider_pane_g17_ParamLimits

0x762d,	// (0x00030a2d) main_cset_slider_pane_g17

0x7e8b,	// (0x0003128b) cell_cam4_burst_pane_g1_ParamLimits

0xc860,	// (0x00035c60) compa_mode_pane

0x7910,	// (0x00030d10) popup_vtel_slider_window_g3_ParamLimits

0x7910,	// (0x00030d10) popup_vtel_slider_window_g3

0x7927,	// (0x00030d27) popup_vtel_slider_window_g4_ParamLimits

0x7927,	// (0x00030d27) popup_vtel_slider_window_g4

0x793e,	// (0x00030d3e) popup_vtel_slider_window_t1_ParamLimits

0x793e,	// (0x00030d3e) popup_vtel_slider_window_t1

0xb200,	// (0x00034600) main_cl_pane

0xb41f,	// (0x0003481f) popup_imed_adjust2_window_ParamLimits

0xf02a,	// (0x0003842a) bg_tb_trans_pane_cp05_ParamLimits

0x65d9,	// (0x0002f9d9) popup_imed_adjust2_window_g1_ParamLimits

0x65e8,	// (0x0002f9e8) popup_imed_adjust2_window_g2_ParamLimits

0x65e8,	// (0x0002f9e8) popup_imed_adjust2_window_g2

0x65f4,	// (0x0002f9f4) popup_imed_adjust2_window_g3_ParamLimits

0x65f4,	// (0x0002f9f4) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x00038bd7) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x00038bd7) popup_imed_adjust2_window_g

0x6600,	// (0x0002fa00) popup_imed_adjust2_window_t1_ParamLimits

0x6618,	// (0x0002fa18) slider_imed_adjust_pane_ParamLimits

0x662c,	// (0x0002fa2c) slider_imed_adjust_pane_g1_ParamLimits

0x663c,	// (0x0002fa3c) slider_imed_adjust_pane_g2_ParamLimits

0x664c,	// (0x0002fa4c) slider_imed_adjust_pane_g3_ParamLimits

0x665d,	// (0x0002fa5d) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x00038bde) slider_imed_adjust_pane_g_ParamLimits

0x1969,	// (0x0002ad69) aid_touch_area_cam4_ParamLimits

0x1969,	// (0x0002ad69) aid_touch_area_cam4

0xb77e,	// (0x00034b7e) battery_pane_cp01

0x1a38,	// (0x0002ae38) main_camera4_pane_g6_ParamLimits

0x1a38,	// (0x0002ae38) main_camera4_pane_g6

0x1a62,	// (0x0002ae62) main_camera4_pane_t2_ParamLimits

0x1a62,	// (0x0002ae62) main_camera4_pane_t2

0x0001,

0xf8dc,	// (0x00038cdc) main_camera4_pane_t_ParamLimits

0xf8dc,	// (0x00038cdc) main_camera4_pane_t

0x1a83,	// (0x0002ae83) aid_touch_area_vid4_ParamLimits

0x1a83,	// (0x0002ae83) aid_touch_area_vid4

0x1ad7,	// (0x0002aed7) main_video4_pane_g5_ParamLimits

0x1ad7,	// (0x0002aed7) main_video4_pane_g5

0x1afc,	// (0x0002aefc) vid4_progress_pane_ParamLimits

0x1afc,	// (0x0002aefc) vid4_progress_pane

0x7639,	// (0x00030a39) main_cset_slider_pane_g18_ParamLimits

0x7639,	// (0x00030a39) main_cset_slider_pane_g18

0x7ea0,	// (0x000312a0) cell_cam4_burst_pane_g2_ParamLimits

0x7ea0,	// (0x000312a0) cell_cam4_burst_pane_g2

0x0001,

0xfa34,	// (0x00038e34) cell_cam4_burst_pane_g_ParamLimits

0xfa34,	// (0x00038e34) cell_cam4_burst_pane_g

0xcffb,	// (0x000363fb) bg_cl_pane_ParamLimits

0xcffb,	// (0x000363fb) bg_cl_pane

0x815d,	// (0x0003155d) cl_header_pane_ParamLimits

0x815d,	// (0x0003155d) cl_header_pane

0x8171,	// (0x00031571) cl_listscroll_pane_ParamLimits

0x8171,	// (0x00031571) cl_listscroll_pane

0x8181,	// (0x00031581) bg_cl_pane_g1

0x8189,	// (0x00031589) bg_cl_pane_g2

0x8191,	// (0x00031591) bg_cl_pane_g3

0x8199,	// (0x00031599) bg_cl_pane_g4

0x81a1,	// (0x000315a1) bg_cl_pane_g5

0x81a9,	// (0x000315a9) bg_cl_pane_g6

0x81b1,	// (0x000315b1) bg_cl_pane_g7

0x81b9,	// (0x000315b9) bg_cl_pane_g8

0x81c1,	// (0x000315c1) bg_cl_pane_g9

0x0008,

0xfa6f,	// (0x00038e6f) bg_cl_pane_g

0x81c9,	// (0x000315c9) aid_height_cl_leading_ParamLimits

0x81c9,	// (0x000315c9) aid_height_cl_leading

0x81d5,	// (0x000315d5) aid_height_cl_text_ParamLimits

0x81d5,	// (0x000315d5) aid_height_cl_text

0xcd8f,	// (0x0003618f) bg_cl_header_pane_ParamLimits

0xcd8f,	// (0x0003618f) bg_cl_header_pane

0x81f4,	// (0x000315f4) cl_header_pane_g1_ParamLimits

0x81f4,	// (0x000315f4) cl_header_pane_g1

0x820a,	// (0x0003160a) cl_header_pane_t1_ParamLimits

0x820a,	// (0x0003160a) cl_header_pane_t1

0x8223,	// (0x00031623) cl_list_pane

0x74f5,	// (0x000308f5) hc_scroll_pane_cp01

0xd4aa,	// (0x000368aa) bg_cl_header_pane_g1

0x70ca,	// (0x000304ca) bg_cl_header_pane_g2

0xd4ca,	// (0x000368ca) bg_cl_header_pane_g3

0x70da,	// (0x000304da) bg_cl_header_pane_g4

0x70d2,	// (0x000304d2) bg_cl_header_pane_g5

0x79f6,	// (0x00030df6) bg_cl_header_pane_g6

0x70f2,	// (0x000304f2) bg_cl_header_pane_g7

0x70fa,	// (0x000304fa) bg_cl_header_pane_g8

0x70ea,	// (0x000304ea) bg_cl_header_pane_g9

0x0008,

0xfa82,	// (0x00038e82) bg_cl_header_pane_g

0x822c,	// (0x0003162c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x822c,	// (0x0003162c) hc_cl_list_double_graphic_heading_pane

0x8240,	// (0x00031640) hc_cl_list_single_graphic_pane_ParamLimits

0x8240,	// (0x00031640) hc_cl_list_single_graphic_pane

0x825a,	// (0x0003165a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x825a,	// (0x0003165a) hc_cl_list_single_graphic_pane_g1

0x8266,	// (0x00031666) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8266,	// (0x00031666) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa95,	// (0x00038e95) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa95,	// (0x00038e95) hc_cl_list_single_graphic_pane_g

0x827a,	// (0x0003167a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x827a,	// (0x0003167a) hc_cl_list_single_graphic_pane_t1

0x825a,	// (0x0003165a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x825a,	// (0x0003165a) hc_cl_list_double_graphic_heading_pane_g1

0x828f,	// (0x0003168f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x828f,	// (0x0003168f) hc_cl_list_double_graphic_heading_pane_g2

0x82a3,	// (0x000316a3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x82a3,	// (0x000316a3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa9a,	// (0x00038e9a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa9a,	// (0x00038e9a) hc_cl_list_double_graphic_heading_pane_g

0x82b7,	// (0x000316b7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x82b7,	// (0x000316b7) hc_cl_list_double_graphic_heading_pane_t1

0x82cc,	// (0x000316cc) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x82cc,	// (0x000316cc) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaa1,	// (0x00038ea1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaa1,	// (0x00038ea1) hc_cl_list_double_graphic_heading_pane_t

0x1fcc,	// (0x0002b3cc) vid4_progress_pane_g1

0x1fde,	// (0x0002b3de) vid4_progress_pane_g2

0xd715,	// (0x00036b15) vid4_progress_pane_g3

0xb90e,	// (0x00034d0e) vid4_progress_pane_g4

0x0004,

0xfaa6,	// (0x00038ea6) vid4_progress_pane_g

0xb92c,	// (0x00034d2c) vid4_progress_pane_t1

0xb941,	// (0x00034d41) vid4_progress_pane_t2

0x0002,

0xfab1,	// (0x00038eb1) vid4_progress_pane_t

0xb96c,	// (0x00034d6c) wait_bar_pane_cp07

0x50f1,	// (0x0002e4f1) blid_firmament_pane_ParamLimits

0x5134,	// (0x0002e534) popup_blid_sat_info2_window_g1

0x5158,	// (0x0002e558) popup_blid_sat_info2_window_t3

0x5166,	// (0x0002e566) popup_blid_sat_info2_window_t4

0x5174,	// (0x0002e574) popup_blid_sat_info2_window_t5

0x5182,	// (0x0002e582) popup_blid_sat_info2_window_t6

0x5192,	// (0x0002e592) popup_blid_sat_info2_window_t7

0x51a0,	// (0x0002e5a0) popup_blid_sat_info2_window_t8

0x51ae,	// (0x0002e5ae) popup_blid_sat_info2_window_t9

0x51bc,	// (0x0002e5bc) popup_blid_sat_info2_window_t10

0x534c,	// (0x0002e74c) aid_firma_cardinal_ParamLimits

0x5360,	// (0x0002e760) blid_firmament_pane_t1_ParamLimits

0x5377,	// (0x0002e777) blid_firmament_pane_t2_ParamLimits

0x538e,	// (0x0002e78e) blid_firmament_pane_t3_ParamLimits

0x53a5,	// (0x0002e7a5) blid_firmament_pane_t4_ParamLimits

0xf6d0,	// (0x00038ad0) blid_firmament_pane_t_ParamLimits

0x53bc,	// (0x0002e7bc) blid_sat_info_pane_ParamLimits

0xb1f2,	// (0x000345f2) main_cam_set_pane_ParamLimits

0x6439,	// (0x0002f839) aid_size_cell_colour_35_ParamLimits

0x6459,	// (0x0002f859) aid_size_cell_colour_112_ParamLimits

0x6479,	// (0x0002f879) aid_size_cell_effect_ParamLimits

0xf02a,	// (0x0003842a) bg_tb_trans_pane_cp02_ParamLimits

0xd69c,	// (0x00036a9c) heading_imed_pane_ParamLimits

0x6499,	// (0x0002f899) listscroll_imed_pane_ParamLimits

0xe654,	// (0x00037a54) popup_call2_audio_first_window_g5_ParamLimits

0xe654,	// (0x00037a54) popup_call2_audio_first_window_g5

0x1746,	// (0x0002ab46) aid_size_touch_image3_arrow_left_ParamLimits

0x1746,	// (0x0002ab46) aid_size_touch_image3_arrow_left

0x1772,	// (0x0002ab72) aid_size_touch_image3_arrow_right_ParamLimits

0x1772,	// (0x0002ab72) aid_size_touch_image3_arrow_right

0xb957,	// (0x00034d57) vid4_progress_pane_t3

0x6b7f,	// (0x0002ff7f) main_hwr_training_symbol_option_pane_ParamLimits

0x6b7f,	// (0x0002ff7f) main_hwr_training_symbol_option_pane

0x6b9f,	// (0x0002ff9f) popup_hwr_training_preview_window_ParamLimits

0x6b9f,	// (0x0002ff9f) popup_hwr_training_preview_window

0x15ed,	// (0x0002a9ed) hwr_training_navi_pane_g5_ParamLimits

0x15ed,	// (0x0002a9ed) hwr_training_navi_pane_g5

0x70b8,	// (0x000304b8) popup_char_count_window

0xb1f2,	// (0x000345f2) bg_popup_sub_pane_cp20_ParamLimits

0x1f37,	// (0x0002b337) list_vitu2_match_list_pane_ParamLimits

0x1f46,	// (0x0002b346) vitu2_page_scroll_pane_ParamLimits

0x1f46,	// (0x0002b346) vitu2_page_scroll_pane

0x833b,	// (0x0003173b) list_single_hwr_training_symbol_option_pane_ParamLimits

0x833b,	// (0x0003173b) list_single_hwr_training_symbol_option_pane

0x834e,	// (0x0003174e) list_single_hwr_training_symbol_option_pane_g1

0x8356,	// (0x00031756) list_single_hwr_training_symbol_option_pane_t1

0x8364,	// (0x00031764) bg_button_pane_cp023

0x836d,	// (0x0003176d) bg_button_pane_cp024

0x83a0,	// (0x000317a0) vitu2_page_scroll_pane_g1

0x83a8,	// (0x000317a8) vitu2_page_scroll_pane_g2

0x0001,

0xfab8,	// (0x00038eb8) vitu2_page_scroll_pane_g

0x83b0,	// (0x000317b0) vitu2_page_scroll_pane_t1

0x501b,	// (0x0002e41b) popup_char_count_window_g1

0x83bf,	// (0x000317bf) popup_char_count_window_g2

0x83c8,	// (0x000317c8) popup_char_count_window_g3

0x0002,

0xfabd,	// (0x00038ebd) popup_char_count_window_g

0x83d1,	// (0x000317d1) popup_char_count_window_t1

0xb200,	// (0x00034600) main_vded2_pane

0x65c5,	// (0x0002f9c5) aid_size_cell_imed_line

0x65cf,	// (0x0002f9cf) grid_imed_line_width_pane

0xb854,	// (0x00034c54) vid4_indicators_pane_g4

0x83df,	// (0x000317df) cell_imed_line_width_pane_ParamLimits

0x83df,	// (0x000317df) cell_imed_line_width_pane

0x83f3,	// (0x000317f3) cell_imed_line_width_pane_g1

0x50cb,	// (0x0002e4cb) cell_imed_line_width_pane_g2

0x0001,

0xfac4,	// (0x00038ec4) cell_imed_line_width_pane_g

0x83fc,	// (0x000317fc) main_vded2_pane_g1_ParamLimits

0x83fc,	// (0x000317fc) main_vded2_pane_g1

0x8414,	// (0x00031814) main_vded2_pane_g2_ParamLimits

0x8414,	// (0x00031814) main_vded2_pane_g2

0x0001,

0xfac9,	// (0x00038ec9) main_vded2_pane_g_ParamLimits

0xfac9,	// (0x00038ec9) main_vded2_pane_g

0x8426,	// (0x00031826) vded2_slider_pane_ParamLimits

0x8426,	// (0x00031826) vded2_slider_pane

0x8436,	// (0x00031836) aid_size_touch_vded2_end

0x8440,	// (0x00031840) aid_size_touch_vded2_playhead

0x844a,	// (0x0003184a) aid_size_touch_vded2_start

0x8452,	// (0x00031852) vded2_slider_bg_pane

0x845b,	// (0x0003185b) vded2_slider_pane_g1

0x8464,	// (0x00031864) vded2_slider_pane_g2

0x846c,	// (0x0003186c) vded2_slider_pane_g3

0x0002,

0xface,	// (0x00038ece) vded2_slider_pane_g

0x8477,	// (0x00031877) vded2_slider_bg_pane_g1

0x8480,	// (0x00031880) vded2_slider_bg_pane_g2

0x8489,	// (0x00031889) vded2_slider_bg_pane_g3

0x0002,

0xfad5,	// (0x00038ed5) vded2_slider_bg_pane_g

0x41da,	// (0x0002d5da) aid_postcard_touch_down_pane_ParamLimits

0x41da,	// (0x0002d5da) aid_postcard_touch_down_pane

0x41f0,	// (0x0002d5f0) aid_postcard_touch_up_pane_ParamLimits

0x41f0,	// (0x0002d5f0) aid_postcard_touch_up_pane

0xb200,	// (0x00034600) main_blid2_pane

0xb405,	// (0x00034805) popup_blid2_search_window

0xc860,	// (0x00035c60) blid2_gps_pane

0xc860,	// (0x00035c60) blid2_navig_pane

0xc860,	// (0x00035c60) blid2_search_pane

0xc860,	// (0x00035c60) blid2_tripm_pane

0x8492,	// (0x00031892) blid2_search_pane_g1_ParamLimits

0x8492,	// (0x00031892) blid2_search_pane_g1

0x84aa,	// (0x000318aa) blid2_search_pane_t1_ParamLimits

0x84aa,	// (0x000318aa) blid2_search_pane_t1

0x84bc,	// (0x000318bc) aid_size_cell_blid2_gps_ParamLimits

0x84bc,	// (0x000318bc) aid_size_cell_blid2_gps

0x84d4,	// (0x000318d4) blid2_gps_pane_g1_ParamLimits

0x84d4,	// (0x000318d4) blid2_gps_pane_g1

0x84e8,	// (0x000318e8) grid_blid2_satellite_pane_ParamLimits

0x84e8,	// (0x000318e8) grid_blid2_satellite_pane

0x8502,	// (0x00031902) blid2_navig_pane_g1_ParamLimits

0x8502,	// (0x00031902) blid2_navig_pane_g1

0x850e,	// (0x0003190e) blid2_navig_pane_t1_ParamLimits

0x850e,	// (0x0003190e) blid2_navig_pane_t1

0x8529,	// (0x00031929) blid2_navig_pane_t2_ParamLimits

0x8529,	// (0x00031929) blid2_navig_pane_t2

0x0001,

0xfadc,	// (0x00038edc) blid2_navig_pane_t_ParamLimits

0xfadc,	// (0x00038edc) blid2_navig_pane_t

0x8544,	// (0x00031944) blid2_navig_ring_pane_ParamLimits

0x8544,	// (0x00031944) blid2_navig_ring_pane

0x855d,	// (0x0003195d) blid2_speed_pane_ParamLimits

0x855d,	// (0x0003195d) blid2_speed_pane

0x8569,	// (0x00031969) blid2_tripm_pane_g1_ParamLimits

0x8569,	// (0x00031969) blid2_tripm_pane_g1

0x8584,	// (0x00031984) blid2_tripm_pane_g2_ParamLimits

0x8584,	// (0x00031984) blid2_tripm_pane_g2

0x8598,	// (0x00031998) blid2_tripm_pane_g3_ParamLimits

0x8598,	// (0x00031998) blid2_tripm_pane_g3

0x85ac,	// (0x000319ac) blid2_tripm_pane_g4_ParamLimits

0x85ac,	// (0x000319ac) blid2_tripm_pane_g4

0x85c0,	// (0x000319c0) blid2_tripm_pane_g5_ParamLimits

0x85c0,	// (0x000319c0) blid2_tripm_pane_g5

0x0005,

0xfae1,	// (0x00038ee1) blid2_tripm_pane_g_ParamLimits

0xfae1,	// (0x00038ee1) blid2_tripm_pane_g

0x85e6,	// (0x000319e6) blid2_tripm_pane_t1_ParamLimits

0x85e6,	// (0x000319e6) blid2_tripm_pane_t1

0x8601,	// (0x00031a01) blid2_tripm_pane_t2_ParamLimits

0x8601,	// (0x00031a01) blid2_tripm_pane_t2

0x861c,	// (0x00031a1c) blid2_tripm_pane_t3_ParamLimits

0x861c,	// (0x00031a1c) blid2_tripm_pane_t3

0x0003,

0xfaee,	// (0x00038eee) blid2_tripm_pane_t_ParamLimits

0xfaee,	// (0x00038eee) blid2_tripm_pane_t

0x8663,	// (0x00031a63) cell_blid2_satellite_pane_ParamLimits

0x8663,	// (0x00031a63) cell_blid2_satellite_pane

0x8681,	// (0x00031a81) cell_blid2_satellite_pane_g1

0x868a,	// (0x00031a8a) cell_blid2_satellite_pane_t1

0x53cc,	// (0x0002e7cc) blid2_speed_pane_g1

0x8698,	// (0x00031a98) blid2_speed_pane_t1

0x86a6,	// (0x00031aa6) blid2_speed_pane_t2

0x0001,

0xfaf7,	// (0x00038ef7) blid2_speed_pane_t

0x53cc,	// (0x0002e7cc) blid2_navig_ring_pane_g1

0x86b4,	// (0x00031ab4) blid2_navig_ring_pane_g2

0x86bc,	// (0x00031abc) blid2_navig_ring_pane_g3

0x86c4,	// (0x00031ac4) blid2_navig_ring_pane_g4

0x86cc,	// (0x00031acc) blid2_navig_ring_pane_g5

0x0004,

0xfafc,	// (0x00038efc) blid2_navig_ring_pane_g

0xc860,	// (0x00035c60) bg_popup_window_pane_cp011

0x86d4,	// (0x00031ad4) popup_blid2_search_window_g1

0x86dc,	// (0x00031adc) popup_blid2_search_window_t1

0x86ea,	// (0x00031aea) popup_blid2_search_window_t2

0x0001,

0xfb07,	// (0x00038f07) popup_blid2_search_window_t

0xd3b9,	// (0x000367b9) main_browser_pane_g1

0xcffb,	// (0x000363fb) main_browser_pane_ParamLimits

0xb1f2,	// (0x000345f2) bg_button_pane_cp011_ParamLimits

0x1ead,	// (0x0002b2ad) cell_vitu2_function_pane_g1_ParamLimits

0xf02a,	// (0x0003842a) bg_popup_sub_pane_cp22_ParamLimits

0x7b5f,	// (0x00030f5f) input_focus_pane_cp08_ParamLimits

0x7b76,	// (0x00030f76) popup_vitu2_query_button_pane_ParamLimits

0x7b76,	// (0x00030f76) popup_vitu2_query_button_pane

0x7b87,	// (0x00030f87) popup_vitu2_query_input_button_pane

0x7b91,	// (0x00030f91) popup_vitu2_query_window_g1_ParamLimits

0x7b9d,	// (0x00030f9d) popup_vitu2_query_window_g2_ParamLimits

0xfa08,	// (0x00038e08) popup_vitu2_query_window_g_ParamLimits

0xc860,	// (0x00035c60) bg_button_pane_cp026

0x86f8,	// (0x00031af8) popup_vitu2_query_input_button_pane_g1

0xc860,	// (0x00035c60) bg_button_pane_cp025

0x8700,	// (0x00031b00) popup_vitu2_query_button_pane_t1

0x5719,	// (0x0002eb19) main_mp3_pane_t6

0x572f,	// (0x0002eb2f) popup_slider_window_cp01

0xb7ba,	// (0x00034bba) cam4_battery_pane

0xb813,	// (0x00034c13) cam4_battery_pane_cp02

0xb906,	// (0x00034d06) cam4_battery_pane_cp01

0xb906,	// (0x00034d06) cam4_battery_pane_cp03

0x6d11,	// (0x00030111) cam4_battery_pane_g1

0x53cc,	// (0x0002e7cc) cam4_battery_pane_g2

0x0001,

0xfb0c,	// (0x00038f0c) cam4_battery_pane_g

0x51ca,	// (0x0002e5ca) popup_blid_sat_info2_window_t11

0x3b78,	// (0x0002cf78) aid_size_touch_mv_arrow_left_ParamLimits

0x3ba1,	// (0x0002cfa1) aid_size_touch_mv_arrow_right_ParamLimits

0xdb3f,	// (0x00036f3f) navi_pane_g1_ParamLimits

0x3be0,	// (0x0002cfe0) navi_pane_g2_ParamLimits

0x3c0e,	// (0x0002d00e) navi_pane_g3_ParamLimits

0xf3f5,	// (0x000387f5) navi_pane_g_ParamLimits

0x3c66,	// (0x0002d066) navi_pane_mv_t1_ParamLimits

0x64d6,	// (0x0002f8d6) grid_imed_effect_pane_ParamLimits

0x2a8e,	// (0x0002be8e) aid_placing_vt_slider_lsc

0xd308,	// (0x00036708) aid_placing_vt_slider_prt

0xcd8f,	// (0x0003618f) bg_tb_trans_pane_cp01_ParamLimits

0x5583,	// (0x0002e983) popup_image_details_window_g1_ParamLimits

0x5596,	// (0x0002e996) popup_image_details_window_g2_ParamLimits

0x55ab,	// (0x0002e9ab) popup_image_details_window_g3_ParamLimits

0x55ab,	// (0x0002e9ab) popup_image_details_window_g3

0xf715,	// (0x00038b15) popup_image_details_window_g_ParamLimits

0x55bf,	// (0x0002e9bf) popup_image_details_window_t1_ParamLimits

0x55d1,	// (0x0002e9d1) popup_image_details_window_t2_ParamLimits

0x55ea,	// (0x0002e9ea) popup_image_details_window_t3_ParamLimits

0x55fe,	// (0x0002e9fe) popup_image_details_window_t4_ParamLimits

0x5619,	// (0x0002ea19) popup_image_details_window_t5_ParamLimits

0xf71c,	// (0x00038b1c) popup_image_details_window_t_ParamLimits

0x81e1,	// (0x000315e1) cl_header_name_pane_ParamLimits

0x81e1,	// (0x000315e1) cl_header_name_pane

0x870e,	// (0x00031b0e) cl_header_name_pane_t1_ParamLimits

0x870e,	// (0x00031b0e) cl_header_name_pane_t1

0x872f,	// (0x00031b2f) cl_header_name_pane_t2_ParamLimits

0x872f,	// (0x00031b2f) cl_header_name_pane_t2

0x8771,	// (0x00031b71) cl_header_name_pane_t3_ParamLimits

0x8771,	// (0x00031b71) cl_header_name_pane_t3

0x0002,

0xfb11,	// (0x00038f11) cl_header_name_pane_t_ParamLimits

0xfb11,	// (0x00038f11) cl_header_name_pane_t

0x3c37,	// (0x0002d037) navi_pane_mv_g2_ParamLimits

0x7044,	// (0x00030444) field_vitu2_entry_pane_g1_ParamLimits

0x7050,	// (0x00030450) field_vitu2_entry_pane_g2_ParamLimits

0x705c,	// (0x0003045c) field_vitu2_entry_pane_g3_ParamLimits

0x705c,	// (0x0003045c) field_vitu2_entry_pane_g3

0xf90e,	// (0x00038d0e) field_vitu2_entry_pane_g_ParamLimits

0x1d4d,	// (0x0002b14d) cell_vitu2_itu_pane_g1_ParamLimits

0x1d5d,	// (0x0002b15d) cell_vitu2_itu_pane_g2_ParamLimits

0x1d5d,	// (0x0002b15d) cell_vitu2_itu_pane_g2

0x0001,

0xf91a,	// (0x00038d1a) cell_vitu2_itu_pane_g_ParamLimits

0xf91a,	// (0x00038d1a) cell_vitu2_itu_pane_g

0xb1f2,	// (0x000345f2) bg_vkb2_func_pane_cp05_ParamLimits

0xb1f2,	// (0x000345f2) bg_vkb2_func_pane_cp05

0xb1f2,	// (0x000345f2) bg_vkb2_func_pane_cp03

0xb1f2,	// (0x000345f2) bg_vkb2_func_pane_cp04

0xb1f2,	// (0x000345f2) bg_vkb2_func_pane_cp10_ParamLimits

0xb1f2,	// (0x000345f2) bg_vkb2_func_pane_cp10

0x813b,	// (0x0003153b) bg_vkb2_func_pane_cp08

0x8121,	// (0x00031521) bg_vkb2_func_pane_cp06

0x812f,	// (0x0003152f) bg_vkb2_func_pane_cp07

0x8376,	// (0x00031776) bg_vkb2_func_pane_cp11_ParamLimits

0x8376,	// (0x00031776) bg_vkb2_func_pane_cp11

0x838b,	// (0x0003178b) bg_vkb2_func_pane_cp12_ParamLimits

0x838b,	// (0x0003178b) bg_vkb2_func_pane_cp12

0xc860,	// (0x00035c60) bg_vkb2_func_pane_cp09

0x70ca,	// (0x000304ca) bg_vkb2_func_pane_g1

0xd4ca,	// (0x000368ca) bg_vkb2_func_pane_g2

0x70d2,	// (0x000304d2) bg_vkb2_func_pane_g3

0x70da,	// (0x000304da) bg_vkb2_func_pane_g4

0x79f6,	// (0x00030df6) bg_vkb2_func_pane_g5

0x70f2,	// (0x000304f2) bg_vkb2_func_pane_g6

0x70fa,	// (0x000304fa) bg_vkb2_func_pane_g7

0x70ea,	// (0x000304ea) bg_vkb2_func_pane_g8

0xd4aa,	// (0x000368aa) bg_vkb2_func_pane_g9

0x0008,

0xfb18,	// (0x00038f18) bg_vkb2_func_pane_g

0x85d4,	// (0x000319d4) blid2_tripm_pane_g6_ParamLimits

0x85d4,	// (0x000319d4) blid2_tripm_pane_g6

0x6ccb,	// (0x000300cb) mp4_progress_pane_g1

0x864f,	// (0x00031a4f) blid2_tripm_values_pane_ParamLimits

0x864f,	// (0x00031a4f) blid2_tripm_values_pane

0x87a2,	// (0x00031ba2) blid2_tripm_values_pane_t1

0x87b0,	// (0x00031bb0) blid2_tripm_values_pane_t2

0x87be,	// (0x00031bbe) blid2_tripm_values_pane_t3

0x87cc,	// (0x00031bcc) blid2_tripm_values_pane_t4

0x87da,	// (0x00031bda) blid2_tripm_values_pane_t5

0x87e8,	// (0x00031be8) blid2_tripm_values_pane_t6

0x87f6,	// (0x00031bf6) blid2_tripm_values_pane_t7

0x8804,	// (0x00031c04) blid2_tripm_values_pane_t8

0x8812,	// (0x00031c12) blid2_tripm_values_pane_t9

0x0008,

0xfb2b,	// (0x00038f2b) blid2_tripm_values_pane_t

0x2ad0,	// (0x0002bed0) call_video_pane_t1_ParamLimits

0x2aee,	// (0x0002beee) call_video_pane_t2_ParamLimits

0xf27e,	// (0x0003867e) call_video_pane_t_ParamLimits

0x414b,	// (0x0002d54b) msg_header_pane_g1_ParamLimits

0xdd68,	// (0x00037168) msg_header_pane_g2_ParamLimits

0xdd68,	// (0x00037168) msg_header_pane_g2

0x0001,

0xf498,	// (0x00038898) msg_header_pane_g_ParamLimits

0xf498,	// (0x00038898) msg_header_pane_g

0xcffb,	// (0x000363fb) main_clock2_pane_ParamLimits

0x61f1,	// (0x0002f5f1) grid_clock2_toolbar_pane_ParamLimits

0x61f1,	// (0x0002f5f1) grid_clock2_toolbar_pane

0x61f1,	// (0x0002f5f1) listscroll_clock2_pane_ParamLimits

0x61f1,	// (0x0002f5f1) listscroll_clock2_pane

0x62d9,	// (0x0002f6d9) main_clock2_pane_t3_ParamLimits

0x62d9,	// (0x0002f6d9) main_clock2_pane_t3

0x62fc,	// (0x0002f6fc) main_clock2_pane_t4_ParamLimits

0x62fc,	// (0x0002f6fc) main_clock2_pane_t4

0x8820,	// (0x00031c20) cell_clock2_toolbar_pane

0x8828,	// (0x00031c28) cell_clock2_toolbar_pane_cp01

0x8828,	// (0x00031c28) cell_clock2_toolbar_pane_cp02

0x8830,	// (0x00031c30) cell_clock2_toolbar_pane_cp03

0x8838,	// (0x00031c38) list_clock2_pane

0xda92,	// (0x00036e92) scroll_pane_cp10

0x8840,	// (0x00031c40) list_single_clock2_pane_ParamLimits

0x8840,	// (0x00031c40) list_single_clock2_pane

0xdbdf,	// (0x00036fdf) list_highlight_pane_cp08

0x884d,	// (0x00031c4d) list_single_clock2_pane_t1

0x885b,	// (0x00031c5b) list_single_clock2_pane_t2

0x0001,

0xfb3e,	// (0x00038f3e) list_single_clock2_pane_t

0xc860,	// (0x00035c60) bg_button_pane_cp10

0x8869,	// (0x00031c69) cell_clock2_toolbar_pane_g1

0x0db8,	// (0x0002a1b8) aid_main_viewer_pane_g1_ParamLimits

0x0db8,	// (0x0002a1b8) aid_main_viewer_pane_g1

0x0dc6,	// (0x0002a1c6) aid_main_viewer_pane_g2_ParamLimits

0x0dc6,	// (0x0002a1c6) aid_main_viewer_pane_g2

0x419e,	// (0x0002d59e) aid_main_viewer_pane_g3_ParamLimits

0x419e,	// (0x0002d59e) aid_main_viewer_pane_g3

0x41ad,	// (0x0002d5ad) aid_main_viewer_pane_g4_ParamLimits

0x41ad,	// (0x0002d5ad) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x000388a9) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x000388a9) aid_main_viewer_pane_g

0x0dfa,	// (0x0002a1fa) main_calc_pane_ParamLimits

0x0e0e,	// (0x0002a20e) main_dialer2_pane_ParamLimits

0xb200,	// (0x00034600) main_cam6_pane

0xb200,	// (0x00034600) main_vid6_pane

0x61fd,	// (0x0002f5fd) listscroll_gen_pane_cp06_ParamLimits

0x61fd,	// (0x0002f5fd) listscroll_gen_pane_cp06

0x631f,	// (0x0002f71f) main_clock2_pane_t5_ParamLimits

0x631f,	// (0x0002f71f) main_clock2_pane_t5

0x637f,	// (0x0002f77f) aid_call2_pane_cp10_ParamLimits

0x6391,	// (0x0002f791) aid_call_pane_cp10_ParamLimits

0xdb14,	// (0x00036f14) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdb14,	// (0x00036f14) popup_clock_analogue_window_cp10_g2_ParamLimits

0x63a3,	// (0x0002f7a3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x63a3,	// (0x0002f7a3) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdb14,	// (0x00036f14) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x00038bcc) popup_clock_analogue_window_cp10_g_ParamLimits

0x63b5,	// (0x0002f7b5) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6d8d,	// (0x0003018d) cell_dialer2_keypad_pane_g2_ParamLimits

0x6d8d,	// (0x0003018d) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ad,	// (0x00038cad) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ad,	// (0x00038cad) cell_dialer2_keypad_pane_g

0x6da9,	// (0x000301a9) cell_dialer2_keypad_pane_t1

0x74cf,	// (0x000308cf) main_cset_text2_pane_ParamLimits

0x74cf,	// (0x000308cf) main_cset_text2_pane

0x8018,	// (0x00031418) area_vitu2_query_pane_g1_ParamLimits

0x8024,	// (0x00031424) area_vitu2_query_pane_g2_ParamLimits

0xfa5b,	// (0x00038e5b) area_vitu2_query_pane_g_ParamLimits

0x80fd,	// (0x000314fd) area_vitu2_query_pane_t7_ParamLimits

0x80fd,	// (0x000314fd) area_vitu2_query_pane_t7

0x8121,	// (0x00031521) bg_button_pane_cp018_ParamLimits

0x812f,	// (0x0003152f) bg_button_pane_cp021_ParamLimits

0x813b,	// (0x0003153b) bg_button_pane_cp022_ParamLimits

0x813b,	// (0x0003153b) bg_vkb2_func_pane_cp08_ParamLimits

0x8121,	// (0x00031521) bg_vkb2_func_pane_cp06_ParamLimits

0x812f,	// (0x0003152f) bg_vkb2_func_pane_cp07_ParamLimits

0x814c,	// (0x0003154c) input_focus_pane_cp09_ParamLimits

0xb97c,	// (0x00034d7c) cam6_autofocus_pane_ParamLimits

0xb97c,	// (0x00034d7c) cam6_autofocus_pane

0x1ff0,	// (0x0002b3f0) cam6_image_uncrop_pane_ParamLimits

0x1ff0,	// (0x0002b3f0) cam6_image_uncrop_pane

0x1fff,	// (0x0002b3ff) cam6_indi_pane_ParamLimits

0x1fff,	// (0x0002b3ff) cam6_indi_pane

0x2015,	// (0x0002b415) cam6_mode_pane_ParamLimits

0x2015,	// (0x0002b415) cam6_mode_pane

0x2027,	// (0x0002b427) cam6_timer_pane_ParamLimits

0x2027,	// (0x0002b427) cam6_timer_pane

0x2033,	// (0x0002b433) cam6_zoom_pane_ParamLimits

0x2033,	// (0x0002b433) cam6_zoom_pane

0x8871,	// (0x00031c71) cam6_mode_pane_g1_ParamLimits

0x8871,	// (0x00031c71) cam6_mode_pane_g1

0x8881,	// (0x00031c81) cam6_mode_pane_g2_ParamLimits

0x8881,	// (0x00031c81) cam6_mode_pane_g2

0x8891,	// (0x00031c91) cam6_mode_pane_g3_ParamLimits

0x8891,	// (0x00031c91) cam6_mode_pane_g3

0x88a1,	// (0x00031ca1) cam6_mode_pane_g4_ParamLimits

0x88a1,	// (0x00031ca1) cam6_mode_pane_g4

0x0003,

0xfb43,	// (0x00038f43) cam6_mode_pane_g_ParamLimits

0xfb43,	// (0x00038f43) cam6_mode_pane_g

0x88b1,	// (0x00031cb1) bg_tb_trans_pane_cp08_ParamLimits

0x88b1,	// (0x00031cb1) bg_tb_trans_pane_cp08

0x88bf,	// (0x00031cbf) cam6_battery_pane_ParamLimits

0x88bf,	// (0x00031cbf) cam6_battery_pane

0x88d5,	// (0x00031cd5) cam6_indi_pane_g1_ParamLimits

0x88d5,	// (0x00031cd5) cam6_indi_pane_g1

0x88e7,	// (0x00031ce7) cam6_indi_pane_g2_ParamLimits

0x88e7,	// (0x00031ce7) cam6_indi_pane_g2

0x88f9,	// (0x00031cf9) cam6_indi_pane_g3_ParamLimits

0x88f9,	// (0x00031cf9) cam6_indi_pane_g3

0x0002,

0xfb4c,	// (0x00038f4c) cam6_indi_pane_g_ParamLimits

0xfb4c,	// (0x00038f4c) cam6_indi_pane_g

0x890b,	// (0x00031d0b) cam6_indi_pane_t1_ParamLimits

0x890b,	// (0x00031d0b) cam6_indi_pane_t1

0x8931,	// (0x00031d31) cam6_autofocus_pane_g1

0x8939,	// (0x00031d39) cam6_autofocus_pane_g2

0x8941,	// (0x00031d41) cam6_autofocus_pane_g3

0x8949,	// (0x00031d49) cam6_autofocus_pane_g4

0x0003,

0xfb53,	// (0x00038f53) cam6_autofocus_pane_g

0x8951,	// (0x00031d51) cam6_timer_pane_g1

0x8959,	// (0x00031d59) cam6_timer_pane_t1

0x8967,	// (0x00031d67) cam6_zoom_cont_pane

0x896f,	// (0x00031d6f) cam6_zoom_pane_g1

0x8977,	// (0x00031d77) cam6_zoom_pane_g2

0x897f,	// (0x00031d7f) cam6_zoom_pane_g3

0x0002,

0xfb5c,	// (0x00038f5c) cam6_zoom_pane_g

0x53cc,	// (0x0002e7cc) cam6_battery_pane_g1

0x53cc,	// (0x0002e7cc) cam6_battery_pane_g2

0x0001,

0xf6d9,	// (0x00038ad9) cam6_battery_pane_g

0x8987,	// (0x00031d87) cam6_zoom_cont_pane_g1

0x8990,	// (0x00031d90) cam6_zoom_cont_pane_g2

0x8999,	// (0x00031d99) cam6_zoom_cont_pane_g3

0x0002,

0xfb63,	// (0x00038f63) cam6_zoom_cont_pane_g

0x89b6,	// (0x00031db6) cam6_mode_pane_cp_ParamLimits

0x89b6,	// (0x00031db6) cam6_mode_pane_cp

0x89c8,	// (0x00031dc8) cam6_zoom_pane_cp_ParamLimits

0x89c8,	// (0x00031dc8) cam6_zoom_pane_cp

0x89d4,	// (0x00031dd4) vid6_image_uncrop_cif_pane_ParamLimits

0x89d4,	// (0x00031dd4) vid6_image_uncrop_cif_pane

0x89e4,	// (0x00031de4) vid6_image_uncrop_nhd_pane_ParamLimits

0x89e4,	// (0x00031de4) vid6_image_uncrop_nhd_pane

0x8a03,	// (0x00031e03) vid6_image_uncrop_vga_pane_ParamLimits

0x8a03,	// (0x00031e03) vid6_image_uncrop_vga_pane

0x8a12,	// (0x00031e12) vid6_image_uncrop_wvga_pane_ParamLimits

0x8a12,	// (0x00031e12) vid6_image_uncrop_wvga_pane

0x8a21,	// (0x00031e21) vid6_indi_pane_ParamLimits

0x8a21,	// (0x00031e21) vid6_indi_pane

0x88b1,	// (0x00031cb1) bg_tb_trans_pane_cp09_ParamLimits

0x88b1,	// (0x00031cb1) bg_tb_trans_pane_cp09

0x8a39,	// (0x00031e39) cam6_battery_pane_cp_ParamLimits

0x8a39,	// (0x00031e39) cam6_battery_pane_cp

0x8a45,	// (0x00031e45) vid6_indi_pane_g1_ParamLimits

0x8a45,	// (0x00031e45) vid6_indi_pane_g1

0x8a57,	// (0x00031e57) vid6_indi_pane_g2_ParamLimits

0x8a57,	// (0x00031e57) vid6_indi_pane_g2

0x8a69,	// (0x00031e69) vid6_indi_pane_g3_ParamLimits

0x8a69,	// (0x00031e69) vid6_indi_pane_g3

0x8a7e,	// (0x00031e7e) vid6_indi_pane_g4_ParamLimits

0x8a7e,	// (0x00031e7e) vid6_indi_pane_g4

0x8a93,	// (0x00031e93) vid6_indi_pane_g5_ParamLimits

0x8a93,	// (0x00031e93) vid6_indi_pane_g5

0x0004,

0xfb6a,	// (0x00038f6a) vid6_indi_pane_g_ParamLimits

0xfb6a,	// (0x00038f6a) vid6_indi_pane_g

0x8aad,	// (0x00031ead) vid6_indi_pane_t1_ParamLimits

0x8aad,	// (0x00031ead) vid6_indi_pane_t1

0x8ac3,	// (0x00031ec3) vid6_indi_pane_t2_ParamLimits

0x8ac3,	// (0x00031ec3) vid6_indi_pane_t2

0x8aeb,	// (0x00031eeb) vid6_indi_pane_t3_ParamLimits

0x8aeb,	// (0x00031eeb) vid6_indi_pane_t3

0x8b13,	// (0x00031f13) vid6_indi_pane_t4_ParamLimits

0x8b13,	// (0x00031f13) vid6_indi_pane_t4

0x0003,

0xfb75,	// (0x00038f75) vid6_indi_pane_t_ParamLimits

0xfb75,	// (0x00038f75) vid6_indi_pane_t

0x8b37,	// (0x00031f37) wait_bar_pane_cp08

0x8b46,	// (0x00031f46) main_cset_text2_pane_t1_ParamLimits

0x8b46,	// (0x00031f46) main_cset_text2_pane_t1

0x89a1,	// (0x00031da1) listscroll_gen_pane_cp06_t1_ParamLimits

0x89a1,	// (0x00031da1) listscroll_gen_pane_cp06_t1

0xb200,	// (0x00034600) main_cam6_set_pane

0xb7ac,	// (0x00034bac) bg_tb_trans_pane_cp06_ParamLimits

0xb7c2,	// (0x00034bc2) cam4_indicators_pane_g1_ParamLimits

0xb7d3,	// (0x00034bd3) cam4_indicators_pane_g2_ParamLimits

0xf8ea,	// (0x00038cea) cam4_indicators_pane_g_ParamLimits

0xb7f1,	// (0x00034bf1) cam4_indicators_pane_t1_ParamLimits

0xb1f2,	// (0x000345f2) bg_tb_trans_pane_cp07_ParamLimits

0xb81b,	// (0x00034c1b) vid4_indicators_pane_g1_ParamLimits

0xb82f,	// (0x00034c2f) vid4_indicators_pane_g2_ParamLimits

0xb843,	// (0x00034c43) vid4_indicators_pane_g3_ParamLimits

0xb854,	// (0x00034c54) vid4_indicators_pane_g4_ParamLimits

0xf8fc,	// (0x00038cfc) vid4_indicators_pane_g_ParamLimits

0xb870,	// (0x00034c70) vid4_indicators_pane_t1_ParamLimits

0x1fcc,	// (0x0002b3cc) vid4_progress_pane_g1_ParamLimits

0x1fde,	// (0x0002b3de) vid4_progress_pane_g2_ParamLimits

0xd715,	// (0x00036b15) vid4_progress_pane_g3_ParamLimits

0xb90e,	// (0x00034d0e) vid4_progress_pane_g4_ParamLimits

0xfaa6,	// (0x00038ea6) vid4_progress_pane_g_ParamLimits

0xb92c,	// (0x00034d2c) vid4_progress_pane_t1_ParamLimits

0xb941,	// (0x00034d41) vid4_progress_pane_t2_ParamLimits

0xb957,	// (0x00034d57) vid4_progress_pane_t3_ParamLimits

0xfab1,	// (0x00038eb1) vid4_progress_pane_t_ParamLimits

0xb96c,	// (0x00034d6c) wait_bar_pane_cp07_ParamLimits

0x8b66,	// (0x00031f66) main_cam6_set_pane_g2_ParamLimits

0x8b66,	// (0x00031f66) main_cam6_set_pane_g2

0x8b8a,	// (0x00031f8a) main_cset6_listscroll_pane_ParamLimits

0x8b8a,	// (0x00031f8a) main_cset6_listscroll_pane

0x8ba6,	// (0x00031fa6) main_cset6_slider_pane_ParamLimits

0x8ba6,	// (0x00031fa6) main_cset6_slider_pane

0x8bbc,	// (0x00031fbc) main_cset6_text2_pane_ParamLimits

0x8bbc,	// (0x00031fbc) main_cset6_text2_pane

0x8bca,	// (0x00031fca) main_cset6_text_pane

0x8bd2,	// (0x00031fd2) main_cset_list_pane_copy1_ParamLimits

0x8bd2,	// (0x00031fd2) main_cset_list_pane_copy1

0x8be2,	// (0x00031fe2) scroll_pane_cp028_copy1

0x8beb,	// (0x00031feb) cset_list_set_pane_copy1

0x8bfe,	// (0x00031ffe) aid_position_infowindow_above_copy1

0x8c06,	// (0x00032006) aid_position_infowindow_below_copy1

0x8c0e,	// (0x0003200e) cset_list_set_pane_g1_copy1

0x8c16,	// (0x00032016) cset_list_set_pane_g3_copy1_ParamLimits

0x8c16,	// (0x00032016) cset_list_set_pane_g3_copy1

0x8c25,	// (0x00032025) cset_list_set_pane_t1_copy1_ParamLimits

0x8c25,	// (0x00032025) cset_list_set_pane_t1_copy1

0xcd8f,	// (0x0003618f) list_highlight_pane_cp021_copy1_ParamLimits

0xcd8f,	// (0x0003618f) list_highlight_pane_cp021_copy1

0x8c3a,	// (0x0003203a) cset6_slider_pane_ParamLimits

0x8c3a,	// (0x0003203a) cset6_slider_pane

0x8c66,	// (0x00032066) main_cset6_slider_pane_g1_ParamLimits

0x8c66,	// (0x00032066) main_cset6_slider_pane_g1

0x8c8e,	// (0x0003208e) main_cset6_slider_pane_g2_ParamLimits

0x8c8e,	// (0x0003208e) main_cset6_slider_pane_g2

0x75a9,	// (0x000309a9) main_cset6_slider_pane_g3_ParamLimits

0x75a9,	// (0x000309a9) main_cset6_slider_pane_g3

0x75d9,	// (0x000309d9) main_cset6_slider_pane_g4_ParamLimits

0x75d9,	// (0x000309d9) main_cset6_slider_pane_g4

0x7621,	// (0x00030a21) main_cset6_slider_pane_g5_ParamLimits

0x7621,	// (0x00030a21) main_cset6_slider_pane_g5

0x75a9,	// (0x000309a9) main_cset6_slider_pane_g7_ParamLimits

0x75a9,	// (0x000309a9) main_cset6_slider_pane_g7

0x75b5,	// (0x000309b5) main_cset6_slider_pane_g8_ParamLimits

0x75b5,	// (0x000309b5) main_cset6_slider_pane_g8

0x75c1,	// (0x000309c1) main_cset6_slider_pane_g9_ParamLimits

0x75c1,	// (0x000309c1) main_cset6_slider_pane_g9

0x75cd,	// (0x000309cd) main_cset6_slider_pane_g10_ParamLimits

0x75cd,	// (0x000309cd) main_cset6_slider_pane_g10

0x75d9,	// (0x000309d9) main_cset6_slider_pane_g11_ParamLimits

0x75d9,	// (0x000309d9) main_cset6_slider_pane_g11

0x75e5,	// (0x000309e5) main_cset6_slider_pane_g12_ParamLimits

0x75e5,	// (0x000309e5) main_cset6_slider_pane_g12

0x75f1,	// (0x000309f1) main_cset6_slider_pane_g13_ParamLimits

0x75f1,	// (0x000309f1) main_cset6_slider_pane_g13

0x75fd,	// (0x000309fd) main_cset6_slider_pane_g14_ParamLimits

0x75fd,	// (0x000309fd) main_cset6_slider_pane_g14

0x8cb6,	// (0x000320b6) main_cset6_slider_pane_g15_ParamLimits

0x8cb6,	// (0x000320b6) main_cset6_slider_pane_g15

0x7621,	// (0x00030a21) main_cset6_slider_pane_g16_ParamLimits

0x7621,	// (0x00030a21) main_cset6_slider_pane_g16

0x762d,	// (0x00030a2d) main_cset6_slider_pane_g17_ParamLimits

0x762d,	// (0x00030a2d) main_cset6_slider_pane_g17

0x0011,

0xfb7e,	// (0x00038f7e) main_cset6_slider_pane_g_ParamLimits

0xfb7e,	// (0x00038f7e) main_cset6_slider_pane_g

0x8cce,	// (0x000320ce) main_cset6_slider_pane_t1_ParamLimits

0x8cce,	// (0x000320ce) main_cset6_slider_pane_t1

0x8d0f,	// (0x0003210f) main_cset6_slider_pane_t2_ParamLimits

0x8d0f,	// (0x0003210f) main_cset6_slider_pane_t2

0x8d3a,	// (0x0003213a) main_cset6_slider_pane_t3_ParamLimits

0x8d3a,	// (0x0003213a) main_cset6_slider_pane_t3

0x8d65,	// (0x00032165) main_cset6_slider_pane_t4_ParamLimits

0x8d65,	// (0x00032165) main_cset6_slider_pane_t4

0x8d90,	// (0x00032190) main_cset6_slider_pane_t5_ParamLimits

0x8d90,	// (0x00032190) main_cset6_slider_pane_t5

0x8dbb,	// (0x000321bb) main_cset6_slider_pane_t7_ParamLimits

0x8dbb,	// (0x000321bb) main_cset6_slider_pane_t7

0x8df1,	// (0x000321f1) main_cset6_slider_pane_t8_ParamLimits

0x8df1,	// (0x000321f1) main_cset6_slider_pane_t8

0x8e15,	// (0x00032215) main_cset6_slider_pane_t9_ParamLimits

0x8e15,	// (0x00032215) main_cset6_slider_pane_t9

0x8e39,	// (0x00032239) main_cset6_slider_pane_t10_ParamLimits

0x8e39,	// (0x00032239) main_cset6_slider_pane_t10

0x8e5d,	// (0x0003225d) main_cset6_slider_pane_t11_ParamLimits

0x8e5d,	// (0x0003225d) main_cset6_slider_pane_t11

0x8e81,	// (0x00032281) main_cset6_slider_pane_t14_ParamLimits

0x8e81,	// (0x00032281) main_cset6_slider_pane_t14

0x8eba,	// (0x000322ba) main_cset6_slider_pane_t15_ParamLimits

0x8eba,	// (0x000322ba) main_cset6_slider_pane_t15

0x000b,

0xfba3,	// (0x00038fa3) main_cset6_slider_pane_t_ParamLimits

0xfba3,	// (0x00038fa3) main_cset6_slider_pane_t

0x8ef3,	// (0x000322f3) cset_slider_pane_g1_copy1

0x8efc,	// (0x000322fc) cset_slider_pane_g2_copy1

0x8f05,	// (0x00032305) cset_slider_pane_g3_copy1

0xc860,	// (0x00035c60) bg_popup_sub_pane_cp011_copy1

0x8fdf,	// (0x000323df) main_cset_text_pane_g1_copy1

0x7ccb,	// (0x000310cb) main_cset_text_pane_t1_copy1

0x7cd9,	// (0x000310d9) main_cset_text_pane_t2_copy1

0x7ce7,	// (0x000310e7) main_cset_text_pane_t3_copy1

0x7cf5,	// (0x000310f5) main_cset_text_pane_t4_copy1

0x7d03,	// (0x00031103) main_cset_text_pane_t5_copy1

0x8fe7,	// (0x000323e7) main_cset_text_pane_t6_copy1

0x8ff5,	// (0x000323f5) main_cset_text_pane_t7_copy1

0x8b46,	// (0x00031f46) main_cset_text2_pane_t1_copy1

0xb1f2,	// (0x000345f2) main_ncimui_pane

0x1044,	// (0x0002a444) popup_query_ncimui_window_ParamLimits

0x1044,	// (0x0002a444) popup_query_ncimui_window

0x58a9,	// (0x0002eca9) field_cale_ev2_pane_g4_ParamLimits

0x58a9,	// (0x0002eca9) field_cale_ev2_pane_g4

0x6c85,	// (0x00030085) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6c85,	// (0x00030085) cell_video_dialer_keypad_pane_g2

0x0001,

0xf888,	// (0x00038c88) cell_video_dialer_keypad_pane_g_ParamLimits

0xf888,	// (0x00038c88) cell_video_dialer_keypad_pane_g

0x6c9d,	// (0x0003009d) cell_video_dialer_keypad_pane_t1

0xc860,	// (0x00035c60) bg_popup_window_pane_cp012

0xd962,	// (0x00036d62) heading_pane_cp06

0x9147,	// (0x00032547) ncim_query_content_pane

0xc860,	// (0x00035c60) bg_popup_heading_pane_cp01

0x914f,	// (0x0003254f) ncim_heading_pane_t1

0x915d,	// (0x0003255d) ncim_indicator_popup_pane

0x916f,	// (0x0003256f) ncim_query_button_pane

0x918f,	// (0x0003258f) ncim_query_content_pane_t1

0x91a1,	// (0x000325a1) ncim_query_content_pane_t2

0x0005,

0xfbe7,	// (0x00038fe7) ncim_query_content_pane_t

0x9253,	// (0x00032653) ncim_query_list_pane

0x9265,	// (0x00032665) ncim_query_popup_pane

0x915d,	// (0x0003255d) ncim_indicator_popup_pane_ParamLimits

0x9177,	// (0x00032577) ncim_query_content_pane_g1_ParamLimits

0x9177,	// (0x00032577) ncim_query_content_pane_g1

0x918f,	// (0x0003258f) ncim_query_content_pane_t1_ParamLimits

0x91a1,	// (0x000325a1) ncim_query_content_pane_t2_ParamLimits

0x91b3,	// (0x000325b3) ncim_query_content_pane_t3_ParamLimits

0x91b3,	// (0x000325b3) ncim_query_content_pane_t3

0x91db,	// (0x000325db) ncim_query_content_pane_t4_ParamLimits

0x91db,	// (0x000325db) ncim_query_content_pane_t4

0x9203,	// (0x00032603) ncim_query_content_pane_t5_ParamLimits

0x9203,	// (0x00032603) ncim_query_content_pane_t5

0x922b,	// (0x0003262b) ncim_query_content_pane_t6_ParamLimits

0x922b,	// (0x0003262b) ncim_query_content_pane_t6

0xfbe7,	// (0x00038fe7) ncim_query_content_pane_t_ParamLimits

0x9253,	// (0x00032653) ncim_query_list_pane_ParamLimits

0x9265,	// (0x00032665) ncim_query_popup_pane_ParamLimits

0x9279,	// (0x00032679) wait_bar_pane_cp04

0xc860,	// (0x00035c60) input_focus_pane_cp011

0x9281,	// (0x00032681) ncim_query_popup_pane_t1

0x928f,	// (0x0003268f) ncim_list_query_list_pane_ParamLimits

0x928f,	// (0x0003268f) ncim_list_query_list_pane

0xc860,	// (0x00035c60) bg_button_pane_cp027

0x92a2,	// (0x000326a2) ncim_query_button_pane_g1

0xc860,	// (0x00035c60) list_highlight_pane_cp012

0x92ac,	// (0x000326ac) ncim_list_query_list_pane_g1

0x92b4,	// (0x000326b4) ncim_list_query_list_pane_t1

0xb7e2,	// (0x00034be2) cam4_indicators_pane_g3_ParamLimits

0xb7e2,	// (0x00034be2) cam4_indicators_pane_g3

0xb860,	// (0x00034c60) vid4_indicators_pane_g5_ParamLimits

0xb860,	// (0x00034c60) vid4_indicators_pane_g5

0xb91d,	// (0x00034d1d) vid4_progress_pane_g5_ParamLimits

0xb91d,	// (0x00034d1d) vid4_progress_pane_g5

0x9035,	// (0x00032435) main_ncimui_pane_g1

0x909b,	// (0x0003249b) ncimui_group_query_pane_ParamLimits

0x909b,	// (0x0003249b) ncimui_group_query_pane

0x90e3,	// (0x000324e3) ncimui_list_pane_ParamLimits

0x90e3,	// (0x000324e3) ncimui_list_pane

0x910a,	// (0x0003250a) ncimui_text_pane_ParamLimits

0x910a,	// (0x0003250a) ncimui_text_pane

0x92c2,	// (0x000326c2) ncimui_text_pane_t1_ParamLimits

0x92c2,	// (0x000326c2) ncimui_text_pane_t1

0x92e0,	// (0x000326e0) ncimui_list_single_graphic_pane_ParamLimits

0x92e0,	// (0x000326e0) ncimui_list_single_graphic_pane

0x92f0,	// (0x000326f0) ncimui_query_pane_ParamLimits

0x92f0,	// (0x000326f0) ncimui_query_pane

0xc860,	// (0x00035c60) list_highlight_pane_cp013

0x9303,	// (0x00032703) ncim_list_query_list_pane_t1_copy1

0x92ac,	// (0x000326ac) ncim_list_single_graphic_pane_g1

0x9311,	// (0x00032711) ncim_query_button_pane_cp01

0x931d,	// (0x0003271d) ncim_query_entry_pane_ParamLimits

0x931d,	// (0x0003271d) ncim_query_entry_pane

0x9330,	// (0x00032730) ncimui_query_pane_g1

0x933c,	// (0x0003273c) ncimui_query_pane_t1_ParamLimits

0x933c,	// (0x0003273c) ncimui_query_pane_t1

0xcd8f,	// (0x0003618f) input_focus_pane_cp012

0x9355,	// (0x00032755) ncim_query_entry_pane_t1

0xcffb,	// (0x000363fb) main_im_pane_ParamLimits

0xb1f2,	// (0x000345f2) main_mobtv_pane_ParamLimits

0xb1f2,	// (0x000345f2) main_mobtv_pane

0x75c1,	// (0x000309c1) main_cset6_slider_pane_g18_ParamLimits

0x75c1,	// (0x000309c1) main_cset6_slider_pane_g18

0x75f1,	// (0x000309f1) main_cset6_slider_pane_g19_ParamLimits

0x75f1,	// (0x000309f1) main_cset6_slider_pane_g19

0x9367,	// (0x00032767) bg_main_mobtv_pane_ParamLimits

0x9367,	// (0x00032767) bg_main_mobtv_pane

0x9375,	// (0x00032775) main_mobtv_info_pane

0x937e,	// (0x0003277e) main_mobtv_loading_pane_ParamLimits

0x937e,	// (0x0003277e) main_mobtv_loading_pane

0x938b,	// (0x0003278b) main_mobtv_pg_channel_list_pane

0x9395,	// (0x00032795) main_mobtv_pg_hdr_pane

0x939e,	// (0x0003279e) main_mobtv_programe_curr_pane_ParamLimits

0x939e,	// (0x0003279e) main_mobtv_programe_curr_pane

0x93ab,	// (0x000327ab) main_mobtv_programe_next_pane_ParamLimits

0x93ab,	// (0x000327ab) main_mobtv_programe_next_pane

0x93b8,	// (0x000327b8) popup_mobtv_noti_window

0x53cc,	// (0x0002e7cc) main_tv_pg_hdr_pane_g1

0x93c0,	// (0x000327c0) main_tv_pg_hdr_pane_g2

0x93c8,	// (0x000327c8) main_tv_pg_hdr_pane_g3

0x93d0,	// (0x000327d0) main_tv_pg_hdr_pane_g4

0x93d8,	// (0x000327d8) main_tv_pg_hdr_pane_g5

0x93e2,	// (0x000327e2) main_tv_pg_hdr_pane_g6

0x93ec,	// (0x000327ec) main_tv_pg_hdr_pane_g7

0x93f6,	// (0x000327f6) main_tv_pg_hdr_pane_g8

0x9400,	// (0x00032800) main_tv_pg_hdr_pane_g9

0x940a,	// (0x0003280a) main_tv_pg_hdr_pane_g10

0x9414,	// (0x00032814) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf4,	// (0x00038ff4) main_tv_pg_hdr_pane_g

0x941e,	// (0x0003281e) main_tv_pg_hdr_pane_t1

0x942c,	// (0x0003282c) main_tv_pg_hdr_pane_t2

0x943a,	// (0x0003283a) main_tv_pg_hdr_pane_t3

0x944a,	// (0x0003284a) main_tv_pg_hdr_pane_t4

0x945a,	// (0x0003285a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc0b,	// (0x0003900b) main_tv_pg_hdr_pane_t

0x946a,	// (0x0003286a) single_mobtv_pg_channel_pane_ParamLimits

0x946a,	// (0x0003286a) single_mobtv_pg_channel_pane

0x947c,	// (0x0003287c) single_mobtv_pg_channel_table_pane

0x9485,	// (0x00032885) single_mobtv_pg_channel_thumb_pane

0x948e,	// (0x0003288e) single_tv_pg_channel_pane_g1

0x9497,	// (0x00032897) single_tv_pg_channel_pane_g2

0x0001,

0xfc16,	// (0x00039016) single_tv_pg_channel_pane_g

0x56a0,	// (0x0002eaa0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x56a0,	// (0x0002eaa0) bg_single_mobtv_pg_channel_thumb_pane

0x94a0,	// (0x000328a0) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x94a0,	// (0x000328a0) single_mobtv_pg_channel_thumb_pane_g1

0x94ae,	// (0x000328ae) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x94ae,	// (0x000328ae) single_mobtv_pg_channel_thumb_pane_g2

0x94ba,	// (0x000328ba) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x94ba,	// (0x000328ba) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc1b,	// (0x0003901b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc1b,	// (0x0003901b) single_mobtv_pg_channel_thumb_pane_g

0x94c6,	// (0x000328c6) single_mobtv_pg_channel_thumb_pane_t1

0x94d4,	// (0x000328d4) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc22,	// (0x00039022) single_mobtv_pg_channel_thumb_pane_t

0x53cc,	// (0x0002e7cc) bg_single_mobtv_pg_channel_table_pane_g1

0x53cc,	// (0x0002e7cc) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d9,	// (0x00038ad9) bg_single_mobtv_pg_channel_table_pane_g

0x94e2,	// (0x000328e2) single_mobtv_pg_channel_table_pane_t1

0x94f0,	// (0x000328f0) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc27,	// (0x00039027) single_mobtv_pg_channel_table_pane_t

0x9506,	// (0x00032906) main_mobtv_info_pane_g1_ParamLimits

0x9506,	// (0x00032906) main_mobtv_info_pane_g1

0x9524,	// (0x00032924) main_mobtv_info_pane_t1_ParamLimits

0x9524,	// (0x00032924) main_mobtv_info_pane_t1

0x959c,	// (0x0003299c) main_mobtv_info_pane_t2_ParamLimits

0x959c,	// (0x0003299c) main_mobtv_info_pane_t2

0x0002,

0xfc31,	// (0x00039031) main_mobtv_info_pane_t_ParamLimits

0xfc31,	// (0x00039031) main_mobtv_info_pane_t

0x962b,	// (0x00032a2b) wait_bar_pane_cp05

0x963d,	// (0x00032a3d) main_mobtv_loading_pane_g1_ParamLimits

0x963d,	// (0x00032a3d) main_mobtv_loading_pane_g1

0x9650,	// (0x00032a50) main_mobtv_loading_pane_g2_ParamLimits

0x9650,	// (0x00032a50) main_mobtv_loading_pane_g2

0x965c,	// (0x00032a5c) main_mobtv_loading_pane_g3_ParamLimits

0x965c,	// (0x00032a5c) main_mobtv_loading_pane_g3

0x0002,

0xfc38,	// (0x00039038) main_mobtv_loading_pane_g_ParamLimits

0xfc38,	// (0x00039038) main_mobtv_loading_pane_g

0x966f,	// (0x00032a6f) main_mobtv_loading_pane_t1_ParamLimits

0x966f,	// (0x00032a6f) main_mobtv_loading_pane_t1

0x9687,	// (0x00032a87) main_mobtv_loading_pane_t2_ParamLimits

0x9687,	// (0x00032a87) main_mobtv_loading_pane_t2

0x0001,

0xfc3f,	// (0x0003903f) main_mobtv_loading_pane_t_ParamLimits

0xfc3f,	// (0x0003903f) main_mobtv_loading_pane_t

0x96ab,	// (0x00032aab) wait_bar_pane_cp06_ParamLimits

0x96ab,	// (0x00032aab) wait_bar_pane_cp06

0x96ba,	// (0x00032aba) main_mobtv_programe_curr_pane_t1

0x96c8,	// (0x00032ac8) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc44,	// (0x00039044) main_mobtv_programe_curr_pane_t

0x96d6,	// (0x00032ad6) main_mobtv_programe_next_pane_t1

0x96e4,	// (0x00032ae4) main_mobtv_programe_next_pane_t2

0x96f2,	// (0x00032af2) main_mobtv_programe_next_pane_t3

0x0002,

0xfc49,	// (0x00039049) main_mobtv_programe_next_pane_t

0xc860,	// (0x00035c60) bg_popup_mobtv_noti_window_pane

0x9700,	// (0x00032b00) popup_mobtv_noti_window_g1

0x9708,	// (0x00032b08) popup_mobtv_noti_window_t1

0x9716,	// (0x00032b16) popup_mobtv_noti_window_t2

0x0001,

0xfc50,	// (0x00039050) popup_mobtv_noti_window_t

0x53cc,	// (0x0002e7cc) bg_popup_mobtv_noti_window_pane_g1

0xb200,	// (0x00034600) sc_clock_pane

0xb200,	// (0x00034600) main_fs_bigclock_pane

0x8639,	// (0x00031a39) blid2_tripm_pane_t4_ParamLimits

0x8639,	// (0x00031a39) blid2_tripm_pane_t4

0x9724,	// (0x00032b24) sc_clock_pane_g1_ParamLimits

0x9724,	// (0x00032b24) sc_clock_pane_g1

0x9736,	// (0x00032b36) sc_clock_pane_t1_ParamLimits

0x9736,	// (0x00032b36) sc_clock_pane_t1

0x9758,	// (0x00032b58) sc_clock_pane_t2_ParamLimits

0x9758,	// (0x00032b58) sc_clock_pane_t2

0x9770,	// (0x00032b70) sc_clock_pane_t3_ParamLimits

0x9770,	// (0x00032b70) sc_clock_pane_t3

0x0004,

0xfc55,	// (0x00039055) sc_clock_pane_t_ParamLimits

0xfc55,	// (0x00039055) sc_clock_pane_t

0xa7c2,	// (0x00033bc2) main_fs_bigclock_indicator_pane_ParamLimits

0xa7c2,	// (0x00033bc2) main_fs_bigclock_indicator_pane

0x5633,	// (0x0002ea33) main_fs_bigclock_pane_g1_ParamLimits

0x5633,	// (0x0002ea33) main_fs_bigclock_pane_g1

0xa7ce,	// (0x00033bce) main_fs_bigclock_pane_t1_ParamLimits

0xa7ce,	// (0x00033bce) main_fs_bigclock_pane_t1

0xa7e0,	// (0x00033be0) main_fs_bigclock_pane_t2_ParamLimits

0xa7e0,	// (0x00033be0) main_fs_bigclock_pane_t2

0xa7f2,	// (0x00033bf2) main_fs_bigclock_pane_t3_ParamLimits

0xa7f2,	// (0x00033bf2) main_fs_bigclock_pane_t3

0x0002,

0xfe41,	// (0x00039241) main_fs_bigclock_pane_t_ParamLimits

0xfe41,	// (0x00039241) main_fs_bigclock_pane_t

0xc38d,	// (0x0003578d) main_fs_bigclock_indicator_pane_g1

0x9183,	// (0x00032583) ncim_query_content_pane_g2_ParamLimits

0x9183,	// (0x00032583) ncim_query_content_pane_g2

0x0001,

0xfbe2,	// (0x00038fe2) ncim_query_content_pane_g_ParamLimits

0xfbe2,	// (0x00038fe2) ncim_query_content_pane_g

0x9789,	// (0x00032b89) sc_clock_pane_t4_ParamLimits

0x9789,	// (0x00032b89) sc_clock_pane_t4

0xb1f2,	// (0x000345f2) main_radioblah_pane

0x6f99,	// (0x00030399) cell_call4_button_pane_t1_copy1_ParamLimits

0x6f99,	// (0x00030399) cell_call4_button_pane_t1_copy1

0x904d,	// (0x0003244d) main_ncimui_pane_t1_ParamLimits

0x904d,	// (0x0003244d) main_ncimui_pane_t1

0x9067,	// (0x00032467) main_ncimui_pane_t2_ParamLimits

0x9067,	// (0x00032467) main_ncimui_pane_t2

0x0002,

0xfbdb,	// (0x00038fdb) main_ncimui_pane_t_ParamLimits

0xfbdb,	// (0x00038fdb) main_ncimui_pane_t

0x9961,	// (0x00032d61) main_radioblah_anim_pane_ParamLimits

0x9961,	// (0x00032d61) main_radioblah_anim_pane

0x9972,	// (0x00032d72) main_radioblah_info_pane_ParamLimits

0x9972,	// (0x00032d72) main_radioblah_info_pane

0x9998,	// (0x00032d98) main_radioblah_pane_t1_ParamLimits

0x9998,	// (0x00032d98) main_radioblah_pane_t1

0x99b4,	// (0x00032db4) main_radioblah_pane_t2_ParamLimits

0x99b4,	// (0x00032db4) main_radioblah_pane_t2

0x0003,

0xfc76,	// (0x00039076) main_radioblah_pane_t_ParamLimits

0xfc76,	// (0x00039076) main_radioblah_pane_t

0x99fc,	// (0x00032dfc) main_radioblah_rocker_ctrl_pane_ParamLimits

0x99fc,	// (0x00032dfc) main_radioblah_rocker_ctrl_pane

0x9a54,	// (0x00032e54) main_radioblah_info_pane_t1_ParamLimits

0x9a54,	// (0x00032e54) main_radioblah_info_pane_t1

0x9a8e,	// (0x00032e8e) main_radioblah_info_pane_t2_ParamLimits

0x9a8e,	// (0x00032e8e) main_radioblah_info_pane_t2

0x0003,

0xfc7f,	// (0x0003907f) main_radioblah_info_pane_t_ParamLimits

0xfc7f,	// (0x0003907f) main_radioblah_info_pane_t

0x53cc,	// (0x0002e7cc) main_radioblah_rocker_ctrl_pane_g1

0x9b40,	// (0x00032f40) main_radioblah_rocker_ctrl_pane_g2

0x9b48,	// (0x00032f48) main_radioblah_rocker_ctrl_pane_g3

0x9b50,	// (0x00032f50) main_radioblah_rocker_ctrl_pane_g4

0x9b58,	// (0x00032f58) main_radioblah_rocker_ctrl_pane_g5

0x9b60,	// (0x00032f60) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc88,	// (0x00039088) main_radioblah_rocker_ctrl_pane_g

0x8b46,	// (0x00031f46) main_cset_text2_pane_t1_copy1_ParamLimits

0xb792,	// (0x00034b92) cam4_image_uncrop_qvga_pane

0xb80b,	// (0x00034c0b) vid4_image_uncrop_qcif_pane

0xb97c,	// (0x00034d7c) cam6_image_uncrop_qvga_pane_ParamLimits

0xb97c,	// (0x00034d7c) cam6_image_uncrop_qvga_pane

0x89f3,	// (0x00031df3) vid6_image_uncrop_qcif_pane_ParamLimits

0x89f3,	// (0x00031df3) vid6_image_uncrop_qcif_pane

0xc860,	// (0x00035c60) bg_popup_preview_window_pane_cp03

0x9003,	// (0x00032403) list_cset_text2_pane

0x900b,	// (0x0003240b) main_cset6_text2_pane_g1

0x9013,	// (0x00032413) main_cset6_text2_pane_t1

0x9b68,	// (0x00032f68) list_cset_text2_pane_t1_ParamLimits

0x9b68,	// (0x00032f68) list_cset_text2_pane_t1

0xb1f2,	// (0x000345f2) main_radioblah_pane_ParamLimits

0x9617,	// (0x00032a17) main_mobtv_info_pane_t3_ParamLimits

0x9617,	// (0x00032a17) main_mobtv_info_pane_t3

0x9986,	// (0x00032d86) main_radioblah_pane_g1

0x9a24,	// (0x00032e24) main_radioblah_info_pane_g1

0x9ae5,	// (0x00032ee5) main_radioblah_info_pane_t3_ParamLimits

0x9ae5,	// (0x00032ee5) main_radioblah_info_pane_t3

0x36b3,	// (0x0002cab3) highlight_cell_cale_month_pane_ParamLimits

0x36b3,	// (0x0002cab3) highlight_cell_cale_month_pane

0xb200,	// (0x00034600) main_phob_fisheye_pane

0x5feb,	// (0x0002f3eb) scroll_pane_cp0031_ParamLimits

0x5feb,	// (0x0002f3eb) scroll_pane_cp0031

0x8b37,	// (0x00031f37) wait_bar_pane_cp08_ParamLimits

0x8beb,	// (0x00031feb) cset_list_set_pane_copy1_ParamLimits

0x9b85,	// (0x00032f85) highlight_cell_cale_month_pane_g1

0x9b8d,	// (0x00032f8d) highlight_cell_cale_month_pane_t1

0x8223,	// (0x00031623) list_gen_pane_cp01

0x74f5,	// (0x000308f5) scroll_pane_01

0x9b9b,	// (0x00032f9b) list_single_double_fisheye_pane

0x9ba4,	// (0x00032fa4) list_double_fisheye_pane_g1_ParamLimits

0x9ba4,	// (0x00032fa4) list_double_fisheye_pane_g1

0x9bb0,	// (0x00032fb0) list_double_fisheye_pane_g2_ParamLimits

0x9bb0,	// (0x00032fb0) list_double_fisheye_pane_g2

0x9bc4,	// (0x00032fc4) list_double_fisheye_pane_g3_ParamLimits

0x9bc4,	// (0x00032fc4) list_double_fisheye_pane_g3

0x0004,

0xfc95,	// (0x00039095) list_double_fisheye_pane_g_ParamLimits

0xfc95,	// (0x00039095) list_double_fisheye_pane_g

0x9bed,	// (0x00032fed) list_double_fisheye_pane_t1_ParamLimits

0x9bed,	// (0x00032fed) list_double_fisheye_pane_t1

0x9c08,	// (0x00033008) list_double_fisheye_pane_t2_ParamLimits

0x9c08,	// (0x00033008) list_double_fisheye_pane_t2

0x0001,

0xfca0,	// (0x000390a0) list_double_fisheye_pane_t_ParamLimits

0xfca0,	// (0x000390a0) list_double_fisheye_pane_t

0xb200,	// (0x00034600) main_call5_pane

0x97b4,	// (0x00032bb4) sc_swipe_pane_ParamLimits

0x97b4,	// (0x00032bb4) sc_swipe_pane

0x9c3d,	// (0x0003303d) call5_image_pane_ParamLimits

0x9c3d,	// (0x0003303d) call5_image_pane

0x9c5a,	// (0x0003305a) call5_swipe_1_pane_ParamLimits

0x9c5a,	// (0x0003305a) call5_swipe_1_pane

0x9c6d,	// (0x0003306d) call5_swipe_2_pane_ParamLimits

0x9c6d,	// (0x0003306d) call5_swipe_2_pane

0x9c98,	// (0x00033098) popup_call5_audio_first_window_ParamLimits

0x9c98,	// (0x00033098) popup_call5_audio_first_window

0x56a0,	// (0x0002eaa0) call5_swipe_1_pane_g1_ParamLimits

0x56a0,	// (0x0002eaa0) call5_swipe_1_pane_g1

0x9ca9,	// (0x000330a9) call5_swipe_1_pane_g2_ParamLimits

0x9ca9,	// (0x000330a9) call5_swipe_1_pane_g2

0x0001,

0xfca5,	// (0x000390a5) call5_swipe_1_pane_g_ParamLimits

0xfca5,	// (0x000390a5) call5_swipe_1_pane_g

0x9cb5,	// (0x000330b5) call5_swipe_1_pane_t1_ParamLimits

0x9cb5,	// (0x000330b5) call5_swipe_1_pane_t1

0x56a0,	// (0x0002eaa0) call5_swipe_2_pane_g1_ParamLimits

0x56a0,	// (0x0002eaa0) call5_swipe_2_pane_g1

0xb98a,	// (0x00034d8a) call5_swipe_2_pane_g2_ParamLimits

0xb98a,	// (0x00034d8a) call5_swipe_2_pane_g2

0x0001,

0xfcaa,	// (0x000390aa) call5_swipe_2_pane_g_ParamLimits

0xfcaa,	// (0x000390aa) call5_swipe_2_pane_g

0xb996,	// (0x00034d96) call5_swipe_2_pane_t1_ParamLimits

0xb996,	// (0x00034d96) call5_swipe_2_pane_t1

0xb9ab,	// (0x00034dab) sc_swipe_pane_g1_ParamLimits

0xb9ab,	// (0x00034dab) sc_swipe_pane_g1

0xb9b8,	// (0x00034db8) sc_swipe_pane_g2_ParamLimits

0xb9b8,	// (0x00034db8) sc_swipe_pane_g2

0x0001,

0xfcaf,	// (0x000390af) sc_swipe_pane_g_ParamLimits

0xfcaf,	// (0x000390af) sc_swipe_pane_g

0xb9c4,	// (0x00034dc4) sc_swipe_pane_t1_ParamLimits

0xb9c4,	// (0x00034dc4) sc_swipe_pane_t1

0xb200,	// (0x00034600) main_cmail_launcher_pane

0x9cca,	// (0x000330ca) aid_size_cell_cmail_l_ParamLimits

0x9cca,	// (0x000330ca) aid_size_cell_cmail_l

0x9ce4,	// (0x000330e4) grid_cmail_l_pane_ParamLimits

0x9ce4,	// (0x000330e4) grid_cmail_l_pane

0x9cff,	// (0x000330ff) cell_cmail_l_pane_ParamLimits

0x9cff,	// (0x000330ff) cell_cmail_l_pane

0x9d25,	// (0x00033125) cell_cmail_l_pane_g1_ParamLimits

0x9d25,	// (0x00033125) cell_cmail_l_pane_g1

0x9d31,	// (0x00033131) cell_cmail_l_pane_t1_ParamLimits

0x9d31,	// (0x00033131) cell_cmail_l_pane_t1

0xb9d9,	// (0x00034dd9) cell_cmail_l_pane_t2_ParamLimits

0xb9d9,	// (0x00034dd9) cell_cmail_l_pane_t2

0x0001,

0xfcb4,	// (0x000390b4) cell_cmail_l_pane_t_ParamLimits

0xfcb4,	// (0x000390b4) cell_cmail_l_pane_t

0xcd8f,	// (0x0003618f) grid_highlight_pane_cp018_ParamLimits

0xcd8f,	// (0x0003618f) grid_highlight_pane_cp018

0x0a0c,	// (0x00029e0c) main2_pane_ParamLimits

0x0a0c,	// (0x00029e0c) main2_pane

0xd0a6,	// (0x000364a6) popup_sp_fs_action_menu_bg_pane_g1

0xd0ae,	// (0x000364ae) popup_sp_fs_action_menu_bg_pane_g2

0xd0b6,	// (0x000364b6) popup_sp_fs_action_menu_bg_pane_g3

0xd0be,	// (0x000364be) popup_sp_fs_action_menu_bg_pane_g4

0xd0c6,	// (0x000364c6) popup_sp_fs_action_menu_bg_pane_g5

0xd0ce,	// (0x000364ce) popup_sp_fs_action_menu_bg_pane_g6

0xd0d6,	// (0x000364d6) popup_sp_fs_action_menu_bg_pane_g7

0xd0de,	// (0x000364de) popup_sp_fs_action_menu_bg_pane_g8

0xd0e6,	// (0x000364e6) popup_sp_fs_action_menu_bg_pane_g9

0xd0ee,	// (0x000364ee) popup_sp_fs_action_menu_bg_pane_g10

0xd0ee,	// (0x000364ee) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x00038598) popup_sp_fs_action_menu_bg_pane_g

0xd216,	// (0x00036616) list_medium_line_x2_t3_g3_g1_ParamLimits

0xd216,	// (0x00036616) list_medium_line_x2_t3_g3_g1

0xd222,	// (0x00036622) list_medium_line_x2_t3_g3_g2_ParamLimits

0xd222,	// (0x00036622) list_medium_line_x2_t3_g3_g2

0xd22e,	// (0x0003662e) list_medium_line_x2_t3_g3_g3_ParamLimits

0xd22e,	// (0x0003662e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x00038648) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x00038648) list_medium_line_x2_t3_g3_g

0xd23a,	// (0x0003663a) list_medium_line_x2_t3_g3_t1_ParamLimits

0xd23a,	// (0x0003663a) list_medium_line_x2_t3_g3_t1

0x29cb,	// (0x0002bdcb) list_medium_line_x2_t3_g3_t2_ParamLimits

0x29cb,	// (0x0002bdcb) list_medium_line_x2_t3_g3_t2

0xd24f,	// (0x0003664f) list_medium_line_x2_t3_g3_t3_ParamLimits

0xd24f,	// (0x0003664f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0003864f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0003864f) list_medium_line_x2_t3_g3_t

0xd216,	// (0x00036616) list_medium_line_x2_t3_g2_g1_ParamLimits

0xd216,	// (0x00036616) list_medium_line_x2_t3_g2_g1

0xd22e,	// (0x0003662e) list_medium_line_x2_t3_g2_g2_ParamLimits

0xd22e,	// (0x0003662e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x00038656) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x00038656) list_medium_line_x2_t3_g2_g

0xd264,	// (0x00036664) list_medium_line_x2_t3_g2_t1_ParamLimits

0xd264,	// (0x00036664) list_medium_line_x2_t3_g2_t1

0xd27a,	// (0x0003667a) list_medium_line_x2_t3_g2_t2_ParamLimits

0xd27a,	// (0x0003667a) list_medium_line_x2_t3_g2_t2

0xd28c,	// (0x0003668c) list_medium_line_x2_t3_g2_t3_ParamLimits

0xd28c,	// (0x0003668c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x0003865b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x0003865b) list_medium_line_x2_t3_g2_t

0xd216,	// (0x00036616) list_medium_line_x2_t4_g4_g1_ParamLimits

0xd216,	// (0x00036616) list_medium_line_x2_t4_g4_g1

0xd2a9,	// (0x000366a9) list_medium_line_x2_t4_g4_g2_ParamLimits

0xd2a9,	// (0x000366a9) list_medium_line_x2_t4_g4_g2

0xd222,	// (0x00036622) list_medium_line_x2_t4_g4_g3_ParamLimits

0xd222,	// (0x00036622) list_medium_line_x2_t4_g4_g3

0xd2b5,	// (0x000366b5) list_medium_line_x2_t4_g4_g4_ParamLimits

0xd2b5,	// (0x000366b5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x00038662) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x00038662) list_medium_line_x2_t4_g4_g

0x29df,	// (0x0002bddf) list_medium_line_x2_t4_g4_t1_ParamLimits

0x29df,	// (0x0002bddf) list_medium_line_x2_t4_g4_t1

0x29f6,	// (0x0002bdf6) list_medium_line_x2_t4_g4_t2_ParamLimits

0x29f6,	// (0x0002bdf6) list_medium_line_x2_t4_g4_t2

0x2a0b,	// (0x0002be0b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2a0b,	// (0x0002be0b) list_medium_line_x2_t4_g4_t3

0xd2c1,	// (0x000366c1) list_medium_line_x2_t4_g4_t4_ParamLimits

0xd2c1,	// (0x000366c1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x0003866b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x0003866b) list_medium_line_x2_t4_g4_t

0xd216,	// (0x00036616) list_medium_line_x2_t2_g4_g1_ParamLimits

0xd216,	// (0x00036616) list_medium_line_x2_t2_g4_g1

0xd2a9,	// (0x000366a9) list_medium_line_x2_t2_g4_g2_ParamLimits

0xd2a9,	// (0x000366a9) list_medium_line_x2_t2_g4_g2

0xd222,	// (0x00036622) list_medium_line_x2_t2_g4_g3_ParamLimits

0xd222,	// (0x00036622) list_medium_line_x2_t2_g4_g3

0xd22e,	// (0x0003662e) list_medium_line_x2_t2_g4_g4_ParamLimits

0xd22e,	// (0x0003662e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x000386d2) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x000386d2) list_medium_line_x2_t2_g4_g

0xd5ab,	// (0x000369ab) list_medium_line_x2_t2_g4_t1_ParamLimits

0xd5ab,	// (0x000369ab) list_medium_line_x2_t2_g4_t1

0xd24f,	// (0x0003664f) list_medium_line_x2_t2_g4_t2_ParamLimits

0xd24f,	// (0x0003664f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x000386db) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x000386db) list_medium_line_x2_t2_g4_t

0xd216,	// (0x00036616) list_medium_line_x2_t2_g3_g1_ParamLimits

0xd216,	// (0x00036616) list_medium_line_x2_t2_g3_g1

0xd222,	// (0x00036622) list_medium_line_x2_t2_g3_g2_ParamLimits

0xd222,	// (0x00036622) list_medium_line_x2_t2_g3_g2

0xd22e,	// (0x0003662e) list_medium_line_x2_t2_g3_g3_ParamLimits

0xd22e,	// (0x0003662e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x00038648) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x00038648) list_medium_line_x2_t2_g3_g

0xd5c0,	// (0x000369c0) list_medium_line_x2_t2_g3_t1_ParamLimits

0xd5c0,	// (0x000369c0) list_medium_line_x2_t2_g3_t1

0xd24f,	// (0x0003664f) list_medium_line_x2_t2_g3_t2_ParamLimits

0xd24f,	// (0x0003664f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x000386e0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x000386e0) list_medium_line_x2_t2_g3_t

0x387d,	// (0x0002cc7d) main_sp_fs_list_pane_ParamLimits

0x387d,	// (0x0002cc7d) main_sp_fs_list_pane

0x3889,	// (0x0002cc89) sp_fs_scroll_pane_ParamLimits

0x3889,	// (0x0002cc89) sp_fs_scroll_pane

0x3895,	// (0x0002cc95) list_medium_line_x2_t3_t1

0x38a5,	// (0x0002cca5) list_medium_line_x2_t3_t2

0xd776,	// (0x00036b76) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x0003872b) list_medium_line_x2_t3_t

0x38b3,	// (0x0002ccb3) list_medium_line_x3_t4_t1

0x38c3,	// (0x0002ccc3) list_medium_line_x3_t4_t2

0xd784,	// (0x00036b84) list_medium_line_x3_t4_t3

0xd776,	// (0x00036b76) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x00038732) list_medium_line_x3_t4_t

0x38d1,	// (0x0002ccd1) list_medium_line_x4_t5_t1

0x38e1,	// (0x0002cce1) list_medium_line_x4_t5_t2

0xd784,	// (0x00036b84) list_medium_line_x4_t5_t3

0xd792,	// (0x00036b92) list_medium_line_x4_t5_t4

0xd776,	// (0x00036b76) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x0003873b) list_medium_line_x4_t5_t

0xd216,	// (0x00036616) list_medium_line_t4_g4_g1_ParamLimits

0xd216,	// (0x00036616) list_medium_line_t4_g4_g1

0xd2b5,	// (0x000366b5) list_medium_line_t4_g4_g2_ParamLimits

0xd2b5,	// (0x000366b5) list_medium_line_t4_g4_g2

0xd7a0,	// (0x00036ba0) list_medium_line_t4_g4_g3_ParamLimits

0xd7a0,	// (0x00036ba0) list_medium_line_t4_g4_g3

0xd22e,	// (0x0003662e) list_medium_line_t4_g4_g4_ParamLimits

0xd22e,	// (0x0003662e) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x00038746) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x00038746) list_medium_line_t4_g4_g

0xd7ac,	// (0x00036bac) list_medium_line_t4_g4_t1_ParamLimits

0xd7ac,	// (0x00036bac) list_medium_line_t4_g4_t1

0xd7c1,	// (0x00036bc1) list_medium_line_t4_g4_t2_ParamLimits

0xd7c1,	// (0x00036bc1) list_medium_line_t4_g4_t2

0xd7d6,	// (0x00036bd6) list_medium_line_t4_g4_t3_ParamLimits

0xd7d6,	// (0x00036bd6) list_medium_line_t4_g4_t3

0xd24f,	// (0x0003664f) list_medium_line_t4_g4_t4_ParamLimits

0xd24f,	// (0x0003664f) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0003874f) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0003874f) list_medium_line_t4_g4_t

0x398d,	// (0x0002cd8d) chi_dic_find_pane_g1

0x0e22,	// (0x0002a222) main_tport_pane

0x79d0,	// (0x00030dd0) list_medium_line_plain_t1

0x79fe,	// (0x00030dfe) list_medium_line_t2_g2_g1_ParamLimits

0x79fe,	// (0x00030dfe) list_medium_line_t2_g2_g1

0x7a0a,	// (0x00030e0a) list_medium_line_t2_g2_g2_ParamLimits

0x7a0a,	// (0x00030e0a) list_medium_line_t2_g2_g2

0x0001,

0xf9ec,	// (0x00038dec) list_medium_line_t2_g2_g_ParamLimits

0xf9ec,	// (0x00038dec) list_medium_line_t2_g2_g

0x7a16,	// (0x00030e16) list_medium_line_t2_g2_t1_ParamLimits

0x7a16,	// (0x00030e16) list_medium_line_t2_g2_t1

0x7a30,	// (0x00030e30) list_medium_line_t2_g2_t2_ParamLimits

0x7a30,	// (0x00030e30) list_medium_line_t2_g2_t2

0x0001,

0xf9f1,	// (0x00038df1) list_medium_line_t2_g2_t_ParamLimits

0xf9f1,	// (0x00038df1) list_medium_line_t2_g2_t

0x82e1,	// (0x000316e1) aid_sp_fs_list_icon_a_sm

0x82e9,	// (0x000316e9) aid_sp_fs_list_icon_d

0x82f1,	// (0x000316f1) aid_sp_fs_text_primary

0x82fa,	// (0x000316fa) aid_sp_fs_text_secondary

0x8303,	// (0x00031703) list_medium_line

0x8303,	// (0x00031703) list_medium_line_g2

0x8303,	// (0x00031703) list_medium_line_g3

0x8303,	// (0x00031703) list_medium_line_plain

0x8303,	// (0x00031703) list_medium_line_plain_t2

0x8303,	// (0x00031703) list_medium_line_plain_t3

0x8303,	// (0x00031703) list_medium_line_right_icon

0x8303,	// (0x00031703) list_medium_line_right_iconx2

0x8303,	// (0x00031703) list_medium_line_t2

0x8303,	// (0x00031703) list_medium_line_t2_g2

0x8303,	// (0x00031703) list_medium_line_t2_g3

0x8303,	// (0x00031703) list_medium_line_t2_right_icon

0x8303,	// (0x00031703) list_medium_line_t2_right_iconx2

0x8303,	// (0x00031703) list_medium_line_t3

0x8303,	// (0x00031703) list_medium_line_t3_g2

0x8303,	// (0x00031703) list_medium_line_t3_g3

0x8303,	// (0x00031703) list_medium_line_t3_right_iconx2

0x830c,	// (0x0003170c) list_medium_line_t4_g4

0x8315,	// (0x00031715) list_medium_line_x2

0x8315,	// (0x00031715) list_medium_line_x2_t2_g2

0x8315,	// (0x00031715) list_medium_line_x2_t2_g3

0x8315,	// (0x00031715) list_medium_line_x2_t2_g4

0x8315,	// (0x00031715) list_medium_line_x2_t3

0x8315,	// (0x00031715) list_medium_line_x2_t3_g2

0x8315,	// (0x00031715) list_medium_line_x2_t3_g3

0x8315,	// (0x00031715) list_medium_line_x2_t3_g4

0x8315,	// (0x00031715) list_medium_line_x2_t4_g2

0x8315,	// (0x00031715) list_medium_line_x2_t4_g4

0x831e,	// (0x0003171e) list_medium_line_x3

0x831e,	// (0x0003171e) list_medium_line_x3_t4

0x831e,	// (0x0003171e) list_medium_line_x3_t4_g4

0x830c,	// (0x0003170c) list_medium_line_x4_t4

0x830c,	// (0x0003170c) list_medium_line_x4_t4_g7

0x830c,	// (0x0003170c) list_medium_line_x4_t5

0x8327,	// (0x00031727) list_single_fs_dyc_pane_ParamLimits

0x8327,	// (0x00031727) list_single_fs_dyc_pane

0xd216,	// (0x00036616) list_medium_line_x4_t4_g7_g1_ParamLimits

0xd216,	// (0x00036616) list_medium_line_x4_t4_g7_g1

0x8f0e,	// (0x0003230e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x8f0e,	// (0x0003230e) list_medium_line_x4_t4_g7_g2

0x8f1a,	// (0x0003231a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8f1a,	// (0x0003231a) list_medium_line_x4_t4_g7_g3

0x8f29,	// (0x00032329) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8f29,	// (0x00032329) list_medium_line_x4_t4_g7_g4

0x8f35,	// (0x00032335) list_medium_line_x4_t4_g7_g5_ParamLimits

0x8f35,	// (0x00032335) list_medium_line_x4_t4_g7_g5

0x8f44,	// (0x00032344) list_medium_line_x4_t4_g7_g6_ParamLimits

0x8f44,	// (0x00032344) list_medium_line_x4_t4_g7_g6

0x8f53,	// (0x00032353) list_medium_line_x4_t4_g7_g7_ParamLimits

0x8f53,	// (0x00032353) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbbc,	// (0x00038fbc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbbc,	// (0x00038fbc) list_medium_line_x4_t4_g7_g

0x8f5f,	// (0x0003235f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x8f5f,	// (0x0003235f) list_medium_line_x4_t4_g7_t1

0x8f74,	// (0x00032374) list_medium_line_x4_t4_g7_t2_ParamLimits

0x8f74,	// (0x00032374) list_medium_line_x4_t4_g7_t2

0x8f89,	// (0x00032389) list_medium_line_x4_t4_g7_t3_ParamLimits

0x8f89,	// (0x00032389) list_medium_line_x4_t4_g7_t3

0x8f9e,	// (0x0003239e) list_medium_line_x4_t4_g7_t4_ParamLimits

0x8f9e,	// (0x0003239e) list_medium_line_x4_t4_g7_t4

0x8fb0,	// (0x000323b0) list_medium_line_x4_t4_g7_t5_ParamLimits

0x8fb0,	// (0x000323b0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbcb,	// (0x00038fcb) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbcb,	// (0x00038fcb) list_medium_line_x4_t4_g7_t

0x8fc2,	// (0x000323c2) list_single_dyc_row_pane_ParamLimits

0x8fc2,	// (0x000323c2) list_single_dyc_row_pane

0x9c2a,	// (0x0003302a) call5_gesture_pane_ParamLimits

0x9c2a,	// (0x0003302a) call5_gesture_pane

0x9c80,	// (0x00033080) call5_windows_pane_ParamLimits

0x9c80,	// (0x00033080) call5_windows_pane

0x9d47,	// (0x00033147) call5_swipe_1_pane_cp_ParamLimits

0x9d47,	// (0x00033147) call5_swipe_1_pane_cp

0x9d53,	// (0x00033153) call5_swipe_2_pane_cp_ParamLimits

0x9d53,	// (0x00033153) call5_swipe_2_pane_cp

0xdbdf,	// (0x00036fdf) call5_image_pane_cp

0x9d5f,	// (0x0003315f) popup_call5_audio_first_window_cp_ParamLimits

0x9d5f,	// (0x0003315f) popup_call5_audio_first_window_cp

0xb9ab,	// (0x00034dab) call5_swipe_1_pane_g1_cp_ParamLimits

0xb9ab,	// (0x00034dab) call5_swipe_1_pane_g1_cp

0xb9eb,	// (0x00034deb) call5_swipe_1_pane_g2_cp

0xb9c4,	// (0x00034dc4) call5_swipe_1_pane_t1_cp_ParamLimits

0xb9c4,	// (0x00034dc4) call5_swipe_1_pane_t1_cp

0xb9ab,	// (0x00034dab) call5_swipe_2_pane_g1_cp_ParamLimits

0xb9ab,	// (0x00034dab) call5_swipe_2_pane_g1_cp

0xb9f3,	// (0x00034df3) call5_swipe_2_pane_g2_cp

0xb9fb,	// (0x00034dfb) call5_swipe_2_pane_t1_cp_ParamLimits

0xb9fb,	// (0x00034dfb) call5_swipe_2_pane_t1_cp

0xcd8f,	// (0x0003618f) main_sp_fs_email_pane

0xba10,	// (0x00034e10) main_sp_fs_listscroll_pane_te

0xba19,	// (0x00034e19) popup_sp_fs_action_menu_pane_ParamLimits

0xba19,	// (0x00034e19) popup_sp_fs_action_menu_pane

0x53cc,	// (0x0002e7cc) bg_sp_fs_ctrlbar_pane_g1

0xba59,	// (0x00034e59) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xba62,	// (0x00034e62) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xba6b,	// (0x00034e6b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x53cc,	// (0x0002e7cc) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb9,	// (0x000390b9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x50e3,	// (0x0002e4e3) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x50e3,	// (0x0002e4e3) bg_sp_fs_ctrlbar_ddmenu_pane

0xba74,	// (0x00034e74) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xba74,	// (0x00034e74) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xba80,	// (0x00034e80) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xba80,	// (0x00034e80) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcc2,	// (0x000390c2) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcc2,	// (0x000390c2) main_sp_fs_ctrlbar_ddmenu_pane_g

0xba8c,	// (0x00034e8c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xba8c,	// (0x00034e8c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xbaa6,	// (0x00034ea6) list_medium_line_t2_right_icon_g1

0x9d6b,	// (0x0003316b) list_medium_line_t2_right_icon_t1

0x9d7b,	// (0x0003317b) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc7,	// (0x000390c7) list_medium_line_t2_right_icon_t

0xf02a,	// (0x0003842a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xf02a,	// (0x0003842a) bg_sp_fs_ctrlbar_pane

0x9dd8,	// (0x000331d8) main_sp_fs_ctrlbar_button_pane_cp01

0x9de2,	// (0x000331e2) main_sp_fs_ctrlbar_ddmenu_pane

0xd216,	// (0x00036616) main_sp_fs_ctrlbar_pane_g1

0xbae6,	// (0x00034ee6) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfccc,	// (0x000390cc) main_sp_fs_ctrlbar_pane_g

0xbaf2,	// (0x00034ef2) main_sp_fs_ctrlbar_pane_t1

0x9dec,	// (0x000331ec) main_sp_fs_ctrlbar_pane

0x9e10,	// (0x00033210) main_sp_fs_listscroll_pane_te_cp01

0x9e30,	// (0x00033230) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9e30,	// (0x00033230) popup_sp_fs_action_menu_pane_cp01

0xcd8f,	// (0x0003618f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xcd8f,	// (0x0003618f) bg_sp_fs_highlight_list_pane_cp01

0xbb17,	// (0x00034f17) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xbb17,	// (0x00034f17) sp_fs_action_menu_list_gene_pane_g1

0xbb26,	// (0x00034f26) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xbb26,	// (0x00034f26) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd6,	// (0x000390d6) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd6,	// (0x000390d6) sp_fs_action_menu_list_gene_pane_g

0xbb33,	// (0x00034f33) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xbb33,	// (0x00034f33) sp_fs_action_menu_list_gene_pane_t1

0xbb4b,	// (0x00034f4b) sp_fs_action_menu_list_gene_pane_ParamLimits

0xbb4b,	// (0x00034f4b) sp_fs_action_menu_list_gene_pane

0xbb68,	// (0x00034f68) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xbb68,	// (0x00034f68) popup_sp_fs_action_menu_bg_pane

0xbb76,	// (0x00034f76) sp_fs_action_menu_list_pane_ParamLimits

0xbb76,	// (0x00034f76) sp_fs_action_menu_list_pane

0xbb94,	// (0x00034f94) sp_fs_scroll_pane_cp01_ParamLimits

0xbb94,	// (0x00034f94) sp_fs_scroll_pane_cp01

0x9e60,	// (0x00033260) list_medium_line_plain_t2_t1

0x9e70,	// (0x00033270) list_medium_line_plain_t2_t2

0x0001,

0xfcdb,	// (0x000390db) list_medium_line_plain_t2_t

0x9e80,	// (0x00033280) list_medium_line_plain_t3_t1

0x9e90,	// (0x00033290) list_medium_line_plain_t3_t2

0x9e9e,	// (0x0003329e) list_medium_line_plain_t3_t3

0x0002,

0xfce0,	// (0x000390e0) list_medium_line_plain_t3_t

0xd216,	// (0x00036616) list_medium_line_x2_t2_g2_g1_ParamLimits

0xd216,	// (0x00036616) list_medium_line_x2_t2_g2_g1

0xd22e,	// (0x0003662e) list_medium_line_x2_t2_g2_g2_ParamLimits

0xd22e,	// (0x0003662e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x00038656) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x00038656) list_medium_line_x2_t2_g2_g

0xd7ac,	// (0x00036bac) list_medium_line_x2_t2_g2_t1_ParamLimits

0xd7ac,	// (0x00036bac) list_medium_line_x2_t2_g2_t1

0xd24f,	// (0x0003664f) list_medium_line_x2_t2_g2_t2_ParamLimits

0xd24f,	// (0x0003664f) list_medium_line_x2_t2_g2_t2

0x0001,

0x0723,	// (0x00029b23) list_medium_line_x2_t2_g2_t_ParamLimits

0x0723,	// (0x00029b23) list_medium_line_x2_t2_g2_t

0xd216,	// (0x00036616) list_medium_line_x2_t4_g2_g1_ParamLimits

0xd216,	// (0x00036616) list_medium_line_x2_t4_g2_g1

0xd22e,	// (0x0003662e) list_medium_line_x2_t4_g2_g2_ParamLimits

0xd22e,	// (0x0003662e) list_medium_line_x2_t4_g2_g2

0x0001,

0xf256,	// (0x00038656) list_medium_line_x2_t4_g2_g_ParamLimits

0xf256,	// (0x00038656) list_medium_line_x2_t4_g2_g

0x9eac,	// (0x000332ac) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9eac,	// (0x000332ac) list_medium_line_x2_t4_g2_t1

0x9ec3,	// (0x000332c3) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9ec3,	// (0x000332c3) list_medium_line_x2_t4_g2_t2

0x9ed8,	// (0x000332d8) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9ed8,	// (0x000332d8) list_medium_line_x2_t4_g2_t3

0xd24f,	// (0x0003664f) list_medium_line_x2_t4_g2_t4_ParamLimits

0xd24f,	// (0x0003664f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfce7,	// (0x000390e7) list_medium_line_x2_t4_g2_t_ParamLimits

0xfce7,	// (0x000390e7) list_medium_line_x2_t4_g2_t

0xbbba,	// (0x00034fba) list_medium_line_t3_right_iconx2_g1

0xbaa6,	// (0x00034ea6) list_medium_line_t3_right_iconx2_g2

0x9eea,	// (0x000332ea) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcf0,	// (0x000390f0) list_medium_line_t3_right_iconx2_g

0x9ef4,	// (0x000332f4) list_medium_line_t3_right_iconx2_t1

0x9f04,	// (0x00033304) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcf7,	// (0x000390f7) list_medium_line_t3_right_iconx2_t

0xd216,	// (0x00036616) list_medium_line_x3_t4_g4_g1_ParamLimits

0xd216,	// (0x00036616) list_medium_line_x3_t4_g4_g1

0xd222,	// (0x00036622) list_medium_line_x3_t4_g4_g2_ParamLimits

0xd222,	// (0x00036622) list_medium_line_x3_t4_g4_g2

0xd2b5,	// (0x000366b5) list_medium_line_x3_t4_g4_g3_ParamLimits

0xd2b5,	// (0x000366b5) list_medium_line_x3_t4_g4_g3

0xbbc2,	// (0x00034fc2) list_medium_line_x3_t4_g4_g4_ParamLimits

0xbbc2,	// (0x00034fc2) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcfc,	// (0x000390fc) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcfc,	// (0x000390fc) list_medium_line_x3_t4_g4_g

0x9f12,	// (0x00033312) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9f12,	// (0x00033312) list_medium_line_x3_t4_g4_t1

0x9f29,	// (0x00033329) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9f29,	// (0x00033329) list_medium_line_x3_t4_g4_t2

0xd7c1,	// (0x00036bc1) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd7c1,	// (0x00036bc1) list_medium_line_x3_t4_g4_t3

0xbbce,	// (0x00034fce) list_medium_line_x3_t4_g4_t4_ParamLimits

0xbbce,	// (0x00034fce) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd05,	// (0x00039105) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd05,	// (0x00039105) list_medium_line_x3_t4_g4_t

0x9f44,	// (0x00033344) list_single_dyc_row_text_pane_t1_ParamLimits

0x9f44,	// (0x00033344) list_single_dyc_row_text_pane_t1

0x9f8d,	// (0x0003338d) list_single_dyc_row_text_pane_t2_ParamLimits

0x9f8d,	// (0x0003338d) list_single_dyc_row_text_pane_t2

0xbbeb,	// (0x00034feb) list_single_dyc_row_text_pane_t3_ParamLimits

0xbbeb,	// (0x00034feb) list_single_dyc_row_text_pane_t3

0x0002,

0xfd0e,	// (0x0003910e) list_single_dyc_row_text_pane_t_ParamLimits

0xfd0e,	// (0x0003910e) list_single_dyc_row_text_pane_t

0xbbfd,	// (0x00034ffd) list_single_dyc_row_pane_g1_ParamLimits

0xbbfd,	// (0x00034ffd) list_single_dyc_row_pane_g1

0xbc09,	// (0x00035009) list_single_dyc_row_pane_g2_ParamLimits

0xbc09,	// (0x00035009) list_single_dyc_row_pane_g2

0xbc15,	// (0x00035015) list_single_dyc_row_pane_g3_ParamLimits

0xbc15,	// (0x00035015) list_single_dyc_row_pane_g3

0xbc21,	// (0x00035021) list_single_dyc_row_pane_g4_ParamLimits

0xbc21,	// (0x00035021) list_single_dyc_row_pane_g4

0x0003,

0xfd15,	// (0x00039115) list_single_dyc_row_pane_g_ParamLimits

0xfd15,	// (0x00039115) list_single_dyc_row_pane_g

0xbc2d,	// (0x0003502d) list_single_dyc_row_text_pane_ParamLimits

0xbc2d,	// (0x0003502d) list_single_dyc_row_text_pane

0xc860,	// (0x00035c60) bg_sp_fs_scroll_pane

0xbc4c,	// (0x0003504c) thumb_sp_fs_scroll_pane

0x79fe,	// (0x00030dfe) list_medium_line_g1_ParamLimits

0x79fe,	// (0x00030dfe) list_medium_line_g1

0xbc55,	// (0x00035055) list_medium_line_t1_ParamLimits

0xbc55,	// (0x00035055) list_medium_line_t1

0xd216,	// (0x00036616) list_medium_line_x2_g1_ParamLimits

0xd216,	// (0x00036616) list_medium_line_x2_g1

0xd222,	// (0x00036622) list_medium_line_x2_g2_ParamLimits

0xd222,	// (0x00036622) list_medium_line_x2_g2

0x0001,

0x075f,	// (0x00029b5f) list_medium_line_x2_g_ParamLimits

0x075f,	// (0x00029b5f) list_medium_line_x2_g

0xbc6a,	// (0x0003506a) list_medium_line_x2_t1_ParamLimits

0xbc6a,	// (0x0003506a) list_medium_line_x2_t1

0xd216,	// (0x00036616) list_medium_line_x3_g1_ParamLimits

0xd216,	// (0x00036616) list_medium_line_x3_g1

0xd222,	// (0x00036622) list_medium_line_x3_g2_ParamLimits

0xd222,	// (0x00036622) list_medium_line_x3_g2

0x0001,

0x075f,	// (0x00029b5f) list_medium_line_x3_g_ParamLimits

0x075f,	// (0x00029b5f) list_medium_line_x3_g

0xbc6a,	// (0x0003506a) list_medium_line_x3_t1_ParamLimits

0xbc6a,	// (0x0003506a) list_medium_line_x3_t1

0xbc80,	// (0x00035080) thumb_sp_fs_scroll_pane_g1

0xbc89,	// (0x00035089) thumb_sp_fs_scroll_pane_g2

0xbc92,	// (0x00035092) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd1e,	// (0x0003911e) thumb_sp_fs_scroll_pane_g

0xbc80,	// (0x00035080) bg_sp_fs_scroll_pane_g1

0xbc89,	// (0x00035089) bg_sp_fs_scroll_pane_g2

0xbc92,	// (0x00035092) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd1e,	// (0x0003911e) bg_sp_fs_scroll_pane_g

0xd216,	// (0x00036616) list_medium_line_x2_t3_g4_g1_ParamLimits

0xd216,	// (0x00036616) list_medium_line_x2_t3_g4_g1

0xd2a9,	// (0x000366a9) list_medium_line_x2_t3_g4_g2_ParamLimits

0xd2a9,	// (0x000366a9) list_medium_line_x2_t3_g4_g2

0xd222,	// (0x00036622) list_medium_line_x2_t3_g4_g3_ParamLimits

0xd222,	// (0x00036622) list_medium_line_x2_t3_g4_g3

0xd22e,	// (0x0003662e) list_medium_line_x2_t3_g4_g4_ParamLimits

0xd22e,	// (0x0003662e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x000386d2) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x000386d2) list_medium_line_x2_t3_g4_g

0x9fe7,	// (0x000333e7) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9fe7,	// (0x000333e7) list_medium_line_x2_t3_g4_t1

0xa001,	// (0x00033401) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa001,	// (0x00033401) list_medium_line_x2_t3_g4_t2

0xd24f,	// (0x0003664f) list_medium_line_x2_t3_g4_t3_ParamLimits

0xd24f,	// (0x0003664f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd25,	// (0x00039125) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd25,	// (0x00039125) list_medium_line_x2_t3_g4_t

0x79fe,	// (0x00030dfe) list_medium_line_g2_g1_ParamLimits

0x79fe,	// (0x00030dfe) list_medium_line_g2_g1

0x7a0a,	// (0x00030e0a) list_medium_line_g2_g2_ParamLimits

0x7a0a,	// (0x00030e0a) list_medium_line_g2_g2

0x0001,

0xf9ec,	// (0x00038dec) list_medium_line_g2_g_ParamLimits

0xf9ec,	// (0x00038dec) list_medium_line_g2_g

0xbc9b,	// (0x0003509b) list_medium_line_g2_t1_ParamLimits

0xbc9b,	// (0x0003509b) list_medium_line_g2_t1

0x79fe,	// (0x00030dfe) list_medium_line_t3_g2_g1_ParamLimits

0x79fe,	// (0x00030dfe) list_medium_line_t3_g2_g1

0x7a0a,	// (0x00030e0a) list_medium_line_t3_g2_g2_ParamLimits

0x7a0a,	// (0x00030e0a) list_medium_line_t3_g2_g2

0x0001,

0xf9ec,	// (0x00038dec) list_medium_line_t3_g2_g_ParamLimits

0xf9ec,	// (0x00038dec) list_medium_line_t3_g2_g

0xa01a,	// (0x0003341a) list_medium_line_t3_g2_t1_ParamLimits

0xa01a,	// (0x0003341a) list_medium_line_t3_g2_t1

0xa034,	// (0x00033434) list_medium_line_t3_g2_t2_ParamLimits

0xa034,	// (0x00033434) list_medium_line_t3_g2_t2

0xa049,	// (0x00033449) list_medium_line_t3_g2_t3_ParamLimits

0xa049,	// (0x00033449) list_medium_line_t3_g2_t3

0x0002,

0xfd2c,	// (0x0003912c) list_medium_line_t3_g2_t_ParamLimits

0xfd2c,	// (0x0003912c) list_medium_line_t3_g2_t

0xbaa6,	// (0x00034ea6) list_medium_line_right_icon_g1

0xbcb0,	// (0x000350b0) list_medium_line_right_icon_t1

0x79fe,	// (0x00030dfe) list_medium_line_t2_g1_ParamLimits

0x79fe,	// (0x00030dfe) list_medium_line_t2_g1

0xa063,	// (0x00033463) list_medium_line_t2_t1_ParamLimits

0xa063,	// (0x00033463) list_medium_line_t2_t1

0xa07d,	// (0x0003347d) list_medium_line_t2_t2_ParamLimits

0xa07d,	// (0x0003347d) list_medium_line_t2_t2

0x0001,

0xfd33,	// (0x00039133) list_medium_line_t2_t_ParamLimits

0xfd33,	// (0x00039133) list_medium_line_t2_t

0x79fe,	// (0x00030dfe) list_medium_line_t3_g1_ParamLimits

0x79fe,	// (0x00030dfe) list_medium_line_t3_g1

0xa096,	// (0x00033496) list_medium_line_t3_t1_ParamLimits

0xa096,	// (0x00033496) list_medium_line_t3_t1

0xa0ad,	// (0x000334ad) list_medium_line_t3_t2_ParamLimits

0xa0ad,	// (0x000334ad) list_medium_line_t3_t2

0xa0c2,	// (0x000334c2) list_medium_line_t3_t3_ParamLimits

0xa0c2,	// (0x000334c2) list_medium_line_t3_t3

0x0002,

0xfd38,	// (0x00039138) list_medium_line_t3_t_ParamLimits

0xfd38,	// (0x00039138) list_medium_line_t3_t

0x79fe,	// (0x00030dfe) list_medium_line_g3_g1_ParamLimits

0x79fe,	// (0x00030dfe) list_medium_line_g3_g1

0xbcbe,	// (0x000350be) list_medium_line_g3_g2_ParamLimits

0xbcbe,	// (0x000350be) list_medium_line_g3_g2

0x7a0a,	// (0x00030e0a) list_medium_line_g3_g3_ParamLimits

0x7a0a,	// (0x00030e0a) list_medium_line_g3_g3

0x0002,

0xfd3f,	// (0x0003913f) list_medium_line_g3_g_ParamLimits

0xfd3f,	// (0x0003913f) list_medium_line_g3_g

0xbcca,	// (0x000350ca) list_medium_line_g3_t1_ParamLimits

0xbcca,	// (0x000350ca) list_medium_line_g3_t1

0x79fe,	// (0x00030dfe) list_medium_line_t2_g3_g1_ParamLimits

0x79fe,	// (0x00030dfe) list_medium_line_t2_g3_g1

0xbcbe,	// (0x000350be) list_medium_line_t2_g3_g2_ParamLimits

0xbcbe,	// (0x000350be) list_medium_line_t2_g3_g2

0x7a0a,	// (0x00030e0a) list_medium_line_t2_g3_g3_ParamLimits

0x7a0a,	// (0x00030e0a) list_medium_line_t2_g3_g3

0x0002,

0xfd3f,	// (0x0003913f) list_medium_line_t2_g3_g_ParamLimits

0xfd3f,	// (0x0003913f) list_medium_line_t2_g3_g

0xa0d4,	// (0x000334d4) list_medium_line_t2_g3_t1_ParamLimits

0xa0d4,	// (0x000334d4) list_medium_line_t2_g3_t1

0xa0eb,	// (0x000334eb) list_medium_line_t2_g3_t2_ParamLimits

0xa0eb,	// (0x000334eb) list_medium_line_t2_g3_t2

0x0001,

0xfd46,	// (0x00039146) list_medium_line_t2_g3_t_ParamLimits

0xfd46,	// (0x00039146) list_medium_line_t2_g3_t

0x79fe,	// (0x00030dfe) list_medium_line_t3_g3_g1_ParamLimits

0x79fe,	// (0x00030dfe) list_medium_line_t3_g3_g1

0xbcbe,	// (0x000350be) list_medium_line_t3_g3_g2_ParamLimits

0xbcbe,	// (0x000350be) list_medium_line_t3_g3_g2

0x7a0a,	// (0x00030e0a) list_medium_line_t3_g3_g3_ParamLimits

0x7a0a,	// (0x00030e0a) list_medium_line_t3_g3_g3

0x0002,

0xfd3f,	// (0x0003913f) list_medium_line_t3_g3_g_ParamLimits

0xfd3f,	// (0x0003913f) list_medium_line_t3_g3_g

0xa106,	// (0x00033506) list_medium_line_t3_g3_t1_ParamLimits

0xa106,	// (0x00033506) list_medium_line_t3_g3_t1

0xa11a,	// (0x0003351a) list_medium_line_t3_g3_t2_ParamLimits

0xa11a,	// (0x0003351a) list_medium_line_t3_g3_t2

0xa12c,	// (0x0003352c) list_medium_line_t3_g3_t3_ParamLimits

0xa12c,	// (0x0003352c) list_medium_line_t3_g3_t3

0x0002,

0xfd4b,	// (0x0003914b) list_medium_line_t3_g3_t_ParamLimits

0xfd4b,	// (0x0003914b) list_medium_line_t3_g3_t

0xbbba,	// (0x00034fba) list_medium_line_right_iconx2_g1

0xbaa6,	// (0x00034ea6) list_medium_line_right_iconx2_g2

0x0001,

0xfd52,	// (0x00039152) list_medium_line_right_iconx2_g

0xbcdf,	// (0x000350df) list_medium_line_right_iconx2_t1

0xbbba,	// (0x00034fba) list_medium_line_t2_right_iconx2_g1

0xbaa6,	// (0x00034ea6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd52,	// (0x00039152) list_medium_line_t2_right_iconx2_g

0xa140,	// (0x00033540) list_medium_line_t2_right_iconx2_t1

0xa150,	// (0x00033550) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd57,	// (0x00039157) list_medium_line_t2_right_iconx2_t

0xbced,	// (0x000350ed) list_medium_line_x4_t4_t1

0xa162,	// (0x00033562) list_medium_line_x4_t4_t2

0xa172,	// (0x00033572) list_medium_line_x4_t4_t3

0xa182,	// (0x00033582) list_medium_line_x4_t4_t4

0x0003,

0xfd5c,	// (0x0003915c) list_medium_line_x4_t4_t

0xa1d5,	// (0x000335d5) tport_appsw_pane_ParamLimits

0xa1d5,	// (0x000335d5) tport_appsw_pane

0xa1e6,	// (0x000335e6) tport_contact_pane_ParamLimits

0xa1e6,	// (0x000335e6) tport_contact_pane

0xa1ff,	// (0x000335ff) tport_listscroll_pane_ParamLimits

0xa1ff,	// (0x000335ff) tport_listscroll_pane

0xa21a,	// (0x0003361a) cell_tport_appsw_pane_ParamLimits

0xa21a,	// (0x0003361a) cell_tport_appsw_pane

0x705c,	// (0x0003045c) tport_appsw_pane_g1_ParamLimits

0x705c,	// (0x0003045c) tport_appsw_pane_g1

0xbcfb,	// (0x000350fb) tport_contact_pane_g1

0xbd04,	// (0x00035104) tport_contact_pane_t1

0xbd12,	// (0x00035112) tport_contact_pane_t2

0x0001,

0xfd65,	// (0x00039165) tport_contact_pane_t

0xbd20,	// (0x00035120) list_tport_pane

0xbd29,	// (0x00035129) scroll_pane_cp_030

0xbd3a,	// (0x0003513a) cell_tport_appsw_pane_g1

0xbd4a,	// (0x0003514a) cell_tport_appsw_pane_t1

0xc860,	// (0x00035c60) grid_highlight_pane_cp019

0xa25a,	// (0x0003365a) list_tport_double_graphic_pane_ParamLimits

0xa25a,	// (0x0003365a) list_tport_double_graphic_pane

0xcd8f,	// (0x0003618f) list_highlight_pane_cp023_ParamLimits

0xcd8f,	// (0x0003618f) list_highlight_pane_cp023

0xa267,	// (0x00033667) list_tport_double_graphic_pane_g1_ParamLimits

0xa267,	// (0x00033667) list_tport_double_graphic_pane_g1

0xa274,	// (0x00033674) list_tport_double_graphic_pane_t1_ParamLimits

0xa274,	// (0x00033674) list_tport_double_graphic_pane_t1

0xa289,	// (0x00033689) list_tport_double_graphic_pane_t2_ParamLimits

0xa289,	// (0x00033689) list_tport_double_graphic_pane_t2

0x0001,

0xfd71,	// (0x00039171) list_tport_double_graphic_pane_t_ParamLimits

0xfd71,	// (0x00039171) list_tport_double_graphic_pane_t

0xc860,	// (0x00035c60) main_cale_note_pane

0x1d25,	// (0x0002b125) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1d25,	// (0x0002b125) cell_vitu2_function_top_wide_pane_cp01

0x962b,	// (0x00032a2b) wait_bar_pane_cp05_ParamLimits

0xc860,	// (0x00035c60) listscroll_cmail_pane

0xbd60,	// (0x00035160) list_cmail_pane

0xa2a5,	// (0x000336a5) list_cmail_body_pane

0xa2ba,	// (0x000336ba) list_single_cmail_header_caption_pane

0xa2d3,	// (0x000336d3) list_single_cmail_header_detail_pane_ParamLimits

0xa2d3,	// (0x000336d3) list_single_cmail_header_detail_pane

0xa2fc,	// (0x000336fc) list_single_cmail_header_caption_pane_t1

0xa30c,	// (0x0003370c) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa30c,	// (0x0003370c) list_single_cmail_header_detail_pane_g1

0xbd80,	// (0x00035180) list_single_cmail_header_detail_pane_g2_ParamLimits

0xbd80,	// (0x00035180) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd76,	// (0x00039176) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd76,	// (0x00039176) list_single_cmail_header_detail_pane_g

0xbd99,	// (0x00035199) list_single_cmail_header_detail_pane_t1_ParamLimits

0xbd99,	// (0x00035199) list_single_cmail_header_detail_pane_t1

0xbdcb,	// (0x000351cb) list_single_cmail_header_editor_pane_bg_ParamLimits

0xbdcb,	// (0x000351cb) list_single_cmail_header_editor_pane_bg

0xbddd,	// (0x000351dd) list_cmail_body_pane_g1

0xbde6,	// (0x000351e6) list_cmail_body_pane_t1

0x70ca,	// (0x000304ca) list_single_cmail_header_editor_pane_bg_g1

0xd4ca,	// (0x000368ca) list_single_cmail_header_editor_pane_bg_g1_copy1

0x70da,	// (0x000304da) list_single_cmail_header_editor_pane_bg_g1_copy2

0x70d2,	// (0x000304d2) list_single_cmail_header_editor_pane_bg_g1_copy3

0x79f6,	// (0x00030df6) list_single_cmail_header_editor_pane_bg_g1_copy4

0x70fa,	// (0x000304fa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x70ea,	// (0x000304ea) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x70f2,	// (0x000304f2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd4aa,	// (0x000368aa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa34a,	// (0x0003374a) calenote_gesture_pane_ParamLimits

0xa34a,	// (0x0003374a) calenote_gesture_pane

0xa36a,	// (0x0003376a) calenote_window_pane_ParamLimits

0xa36a,	// (0x0003376a) calenote_window_pane

0xbdf4,	// (0x000351f4) popup_note_window_cp01

0xa386,	// (0x00033786) calenote_swipe_1_pane_ParamLimits

0xa386,	// (0x00033786) calenote_swipe_1_pane

0x9d53,	// (0x00033153) calenote_swipe_2_pane_ParamLimits

0x9d53,	// (0x00033153) calenote_swipe_2_pane

0xb9ab,	// (0x00034dab) calenote_swipe_1_pane_g1_ParamLimits

0xb9ab,	// (0x00034dab) calenote_swipe_1_pane_g1

0xb9b8,	// (0x00034db8) calenote_swipe_1_pane_g2_ParamLimits

0xb9b8,	// (0x00034db8) calenote_swipe_1_pane_g2

0x0001,

0xfcaf,	// (0x000390af) calenote_swipe_1_pane_g_ParamLimits

0xfcaf,	// (0x000390af) calenote_swipe_1_pane_g

0xbe06,	// (0x00035206) calenote_swipe_1_pane_t1_ParamLimits

0xbe06,	// (0x00035206) calenote_swipe_1_pane_t1

0xb9ab,	// (0x00034dab) calenote_swipe_2_pane_g1_ParamLimits

0xb9ab,	// (0x00034dab) calenote_swipe_2_pane_g1

0xbe25,	// (0x00035225) calenote_swipe_2_pane_g2_ParamLimits

0xbe25,	// (0x00035225) calenote_swipe_2_pane_g2

0x0001,

0xfd82,	// (0x00039182) calenote_swipe_2_pane_g_ParamLimits

0xfd82,	// (0x00039182) calenote_swipe_2_pane_g

0xbe31,	// (0x00035231) calenote_swipe_2_pane_t1_ParamLimits

0xbe31,	// (0x00035231) calenote_swipe_2_pane_t1

0xc860,	// (0x00035c60) main_mup_navstr_pane

0x5d7e,	// (0x0002f17e) main_mup3_pane_t7_ParamLimits

0x5d7e,	// (0x0002f17e) main_mup3_pane_t7

0xb5b0,	// (0x000349b0) main_mp4_pane_g6_ParamLimits

0xb5b0,	// (0x000349b0) main_mp4_pane_g6

0xb754,	// (0x00034b54) main_image3_pane_t4_ParamLimits

0xb754,	// (0x00034b54) main_image3_pane_t4

0xa39b,	// (0x0003379b) popup_navstr_preview_pane_ParamLimits

0xa39b,	// (0x0003379b) popup_navstr_preview_pane

0xa3af,	// (0x000337af) scroll_navstr_pane_ParamLimits

0xa3af,	// (0x000337af) scroll_navstr_pane

0xc860,	// (0x00035c60) bg_popup_preview_window_pane_cp04

0xbe58,	// (0x00035258) popup_navstr_preview_pane_t1

0xa3c3,	// (0x000337c3) scroll_navstr_pane_g1_ParamLimits

0xa3c3,	// (0x000337c3) scroll_navstr_pane_g1

0xa3d7,	// (0x000337d7) scroll_navstr_pane_t1_ParamLimits

0xa3d7,	// (0x000337d7) scroll_navstr_pane_t1

0xbdfd,	// (0x000351fd) bg_button_pane_cp014

0xbdfd,	// (0x000351fd) bg_button_pane_cp030

0x9bd0,	// (0x00032fd0) list_double_fisheye_pane_g4_ParamLimits

0x9bd0,	// (0x00032fd0) list_double_fisheye_pane_g4

0x9bdc,	// (0x00032fdc) list_double_fisheye_pane_g5_ParamLimits

0x9bdc,	// (0x00032fdc) list_double_fisheye_pane_g5

0xbd68,	// (0x00035168) sp_fs_scroll_pane_cp03

0xd216,	// (0x00036616) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xbae6,	// (0x00034ee6) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfccc,	// (0x000390cc) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xbaf2,	// (0x00034ef2) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa29b,	// (0x0003369b) sp_fs_scroll_pane_cp02

0xd111,	// (0x00036511) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd111,	// (0x00036511) popup_sp_fs_calendar_preview_list_single_pane

0xc860,	// (0x00035c60) main_cam6_pano_pane

0xb1f2,	// (0x000345f2) main_mup3_pane_ParamLimits

0xc860,	// (0x00035c60) main_phacti_pane

0x94fe,	// (0x000328fe) bg_button_pane_cp11

0x9518,	// (0x00032918) main_mobtv_info_pane_g2_ParamLimits

0x9518,	// (0x00032918) main_mobtv_info_pane_g2

0x0001,

0xfc2c,	// (0x0003902c) main_mobtv_info_pane_g_ParamLimits

0xfc2c,	// (0x0003902c) main_mobtv_info_pane_g

0x979b,	// (0x00032b9b) sc_clock_pane_t5_ParamLimits

0x979b,	// (0x00032b9b) sc_clock_pane_t5

0x9986,	// (0x00032d86) main_radioblah_pane_g1_ParamLimits

0x99cc,	// (0x00032dcc) main_radioblah_pane_t3_ParamLimits

0x99cc,	// (0x00032dcc) main_radioblah_pane_t3

0x99e4,	// (0x00032de4) main_radioblah_pane_t4_ParamLimits

0x99e4,	// (0x00032de4) main_radioblah_pane_t4

0x9a12,	// (0x00032e12) main_radioblah_text_pane_ParamLimits

0x9a12,	// (0x00032e12) main_radioblah_text_pane

0x9a24,	// (0x00032e24) main_radioblah_info_pane_g1_ParamLimits

0x9af9,	// (0x00032ef9) main_radioblah_info_pane_t4_ParamLimits

0x9af9,	// (0x00032ef9) main_radioblah_info_pane_t4

0xcd8f,	// (0x0003618f) main_sp_fs_calendar_pane

0xa3ed,	// (0x000337ed) main_phacti_pane_g1

0xa3f5,	// (0x000337f5) phacti_note_pane_ParamLimits

0xa3f5,	// (0x000337f5) phacti_note_pane

0xbe6f,	// (0x0003526f) phacti_term_pane_ParamLimits

0xbe6f,	// (0x0003526f) phacti_term_pane

0xbe84,	// (0x00035284) phacti_note_pane_t1_ParamLimits

0xbe84,	// (0x00035284) phacti_note_pane_t1

0xbe9b,	// (0x0003529b) phacti_term_pane_g1

0xbea3,	// (0x000352a3) phacti_term_pane_t1_ParamLimits

0xbea3,	// (0x000352a3) phacti_term_pane_t1

0xbecd,	// (0x000352cd) popup_sp_fs_calendar_preview_list_single_pane_g1

0xbed5,	// (0x000352d5) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd8c,	// (0x0003918c) popup_sp_fs_calendar_preview_list_single_pane_g

0xbedd,	// (0x000352dd) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xbedd,	// (0x000352dd) popup_sp_fs_calendar_preview_list_single_pane_t1

0xbef3,	// (0x000352f3) aid_popup_sp_fs_bg_corner_pane

0x53cc,	// (0x0002e7cc) popup_sp_fs_calendar_preview_bg_pane_g1

0xc860,	// (0x00035c60) popup_sp_fs_calendar_preview_bg_pane

0xbefb,	// (0x000352fb) popup_sp_fs_calendar_preview_list_pane

0xcd8f,	// (0x0003618f) bg_main_sp_fs_cale_pane_ParamLimits

0xcd8f,	// (0x0003618f) bg_main_sp_fs_cale_pane

0xbf0c,	// (0x0003530c) listscroll_cale_mrui_pane_ParamLimits

0xbf0c,	// (0x0003530c) listscroll_cale_mrui_pane

0xbf20,	// (0x00035320) listscroll_sp_fs_schedule_track_pane

0xbf29,	// (0x00035329) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xbf29,	// (0x00035329) main_sp_fs_ctrlbar_pane_cp01

0xbf3a,	// (0x0003533a) main_sp_fs_ribbon_pane

0xbf42,	// (0x00035342) popup_sp_fs_cale_preview_window

0xa456,	// (0x00033856) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa456,	// (0x00033856) list_single_sp_fs_schedule_track_pane

0xcd8f,	// (0x0003618f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xcd8f,	// (0x0003618f) bg_sp_fs_highlight_list_pane_cp03

0xa46b,	// (0x0003386b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa46b,	// (0x0003386b) list_single_sp_fs_schedule_track_pane_g1

0xa477,	// (0x00033877) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa477,	// (0x00033877) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd91,	// (0x00039191) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd91,	// (0x00039191) list_single_sp_fs_schedule_track_pane_g

0xa483,	// (0x00033883) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa483,	// (0x00033883) list_single_sp_fs_schedule_track_pane_t1

0xa49d,	// (0x0003389d) sp_fs_schedule_track_pane_ParamLimits

0xa49d,	// (0x0003389d) sp_fs_schedule_track_pane

0xbf54,	// (0x00035354) sp_fs_schedule_track_pane_g1

0xbf5c,	// (0x0003535c) sp_fs_schedule_track_pane_g2

0xbf64,	// (0x00035364) sp_fs_schedule_track_pane_g3

0xbf6c,	// (0x0003536c) sp_fs_schedule_track_pane_g4

0xbf74,	// (0x00035374) sp_fs_schedule_track_pane_g5

0x0004,

0xfd96,	// (0x00039196) sp_fs_schedule_track_pane_g

0x70ca,	// (0x000304ca) bg_sp_fs_schedule_viewer_highlight_g1

0xd4ca,	// (0x000368ca) bg_sp_fs_schedule_viewer_highlight_g2

0x70d2,	// (0x000304d2) bg_sp_fs_schedule_viewer_highlight_g3

0x70da,	// (0x000304da) bg_sp_fs_schedule_viewer_highlight_g4

0x79f6,	// (0x00030df6) bg_sp_fs_schedule_viewer_highlight_g5

0x70ea,	// (0x000304ea) bg_sp_fs_schedule_viewer_highlight_g6

0x70f2,	// (0x000304f2) bg_sp_fs_schedule_viewer_highlight_g7

0x70fa,	// (0x000304fa) bg_sp_fs_schedule_viewer_highlight_g8

0xd4aa,	// (0x000368aa) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfda1,	// (0x000391a1) bg_sp_fs_schedule_viewer_highlight_g

0xc860,	// (0x00035c60) bg_main_sp_fs_ribbon_pane

0xa4ae,	// (0x000338ae) main_sp_fs_ribbon_pane_g1

0xbf7c,	// (0x0003537c) main_sp_fs_ribbon_pane_t1

0xa4b7,	// (0x000338b7) main_sp_fs_ribbon_pane_t2

0xbf8b,	// (0x0003538b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdb4,	// (0x000391b4) main_sp_fs_ribbon_pane_t

0xbf9a,	// (0x0003539a) main_sp_fs_ribbon_scheduler_pane

0xbfa2,	// (0x000353a2) bg_main_sp_fs_ribbon_pane_g1

0xbfab,	// (0x000353ab) bg_main_sp_fs_ribbon_pane_g2

0xbfb4,	// (0x000353b4) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdbb,	// (0x000391bb) bg_main_sp_fs_ribbon_pane_g

0xbfbc,	// (0x000353bc) main_sp_fs_ribbon_scheduler_pane_g1

0xbfc5,	// (0x000353c5) main_sp_fs_ribbon_scheduler_pane_g2

0xbfce,	// (0x000353ce) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdc2,	// (0x000391c2) main_sp_fs_ribbon_scheduler_pane_g

0xbfd7,	// (0x000353d7) list_cale_mrui_pane

0xa4c6,	// (0x000338c6) sp_fs_scroll_pane_cp07_ParamLimits

0xa4c6,	// (0x000338c6) sp_fs_scroll_pane_cp07

0xa4da,	// (0x000338da) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa4da,	// (0x000338da) bg_sp_fs_schedule_viewer_highlight

0xbfe0,	// (0x000353e0) list_single_sp_fs_schedule_track_pane_cp01

0xbfe8,	// (0x000353e8) list_sp_fs_schedule_track_pane

0xbff0,	// (0x000353f0) sp_fs_scroll_pane_cp06_ParamLimits

0xbff0,	// (0x000353f0) sp_fs_scroll_pane_cp06

0x53cc,	// (0x0002e7cc) bgmain_sp_fs_calendar_pane_g1

0xa4ea,	// (0x000338ea) list_single_cale_mrui_pane_ParamLimits

0xa4ea,	// (0x000338ea) list_single_cale_mrui_pane

0xc002,	// (0x00035402) list_single_cale_mrui_row_pane_ParamLimits

0xc002,	// (0x00035402) list_single_cale_mrui_row_pane

0xc00f,	// (0x0003540f) list_single_cale_mrui_row_pane_g1_ParamLimits

0xc00f,	// (0x0003540f) list_single_cale_mrui_row_pane_g1

0xc054,	// (0x00035454) list_single_cale_mrui_row_pane_t1_ParamLimits

0xc054,	// (0x00035454) list_single_cale_mrui_row_pane_t1

0xa50c,	// (0x0003390c) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa50c,	// (0x0003390c) list_single_cale_mrui_row_pane_t2

0xc066,	// (0x00035466) list_single_cale_mrui_row_pane_t3_ParamLimits

0xc066,	// (0x00035466) list_single_cale_mrui_row_pane_t3

0xc095,	// (0x00035495) list_single_cale_mrui_row_pane_t4_ParamLimits

0xc095,	// (0x00035495) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdd0,	// (0x000391d0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdd0,	// (0x000391d0) list_single_cale_mrui_row_pane_t

0xa574,	// (0x00033974) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa574,	// (0x00033974) list_single_cmail_header_editor_pane_bg_cp01

0xa59a,	// (0x0003399a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa59a,	// (0x0003399a) list_single_cmail_header_editor_pane_bg_cp02

0xa5ba,	// (0x000339ba) main_radioblah_text_pane_t1_ParamLimits

0xa5ba,	// (0x000339ba) main_radioblah_text_pane_t1

0xc0c4,	// (0x000354c4) cam6_indi_pane_cp01

0xc0cc,	// (0x000354cc) cam6_mode_pane_cp01

0xc0d4,	// (0x000354d4) cam6_pano_pane

0xc0dd,	// (0x000354dd) cam6_zoom_pane_cp01

0xc0e5,	// (0x000354e5) cam6_pano_image_pane

0xc0f0,	// (0x000354f0) cam6_pano_pane_g1

0x9497,	// (0x00032897) cam6_pano_pane_g2

0xc0f9,	// (0x000354f9) cam6_pano_pane_g3

0xc102,	// (0x00035502) cam6_pano_pane_g4

0x670c,	// (0x0002fb0c) cam6_pano_pane_g5

0xc10b,	// (0x0003550b) cam6_pano_pane_g6

0xc115,	// (0x00035515) cam6_pano_pane_g7

0xc11d,	// (0x0003551d) cam6_pano_pane_g8

0xc126,	// (0x00035526) cam6_pano_pane_g9

0x0008,

0xfdd9,	// (0x000391d9) cam6_pano_pane_g

0xc860,	// (0x00035c60) main_browser_tag_pane

0xbe50,	// (0x00035250) grid_navstr_albumart_pane

0xc131,	// (0x00035531) cell_navstr_albumart_pane_ParamLimits

0xc131,	// (0x00035531) cell_navstr_albumart_pane

0xdd4e,	// (0x0003714e) cell_navstr_albumart_pane_g1

0xee3f,	// (0x0003823f) cell_navstr_albumart_pane_g2

0xee4f,	// (0x0003824f) cell_navstr_albumart_pane_g3

0xee47,	// (0x00038247) cell_navstr_albumart_pane_g4

0x0003,

0x0832,	// (0x00029c32) cell_navstr_albumart_pane_g

0xa5d5,	// (0x000339d5) bt_list_pane_ParamLimits

0xa5d5,	// (0x000339d5) bt_list_pane

0xa5ea,	// (0x000339ea) bt_list_pane_t1

0xa5f9,	// (0x000339f9) bt_list_pane_t2

0x0001,

0xfdec,	// (0x000391ec) bt_list_pane_t

0xc860,	// (0x00035c60) main_cale_prevew_pane

0xa608,	// (0x00033a08) popup_cale_preview_window_ParamLimits

0xa608,	// (0x00033a08) popup_cale_preview_window

0xcd8f,	// (0x0003618f) bg_popup_preview_window_pane_cp05_ParamLimits

0xcd8f,	// (0x0003618f) bg_popup_preview_window_pane_cp05

0xc153,	// (0x00035553) list_cale_preview_pane_ParamLimits

0xc153,	// (0x00035553) list_cale_preview_pane

0xa61f,	// (0x00033a1f) list_double_cale_preview_pane_ParamLimits

0xa61f,	// (0x00033a1f) list_double_cale_preview_pane

0xa631,	// (0x00033a31) list_single_cale_preview_pane_ParamLimits

0xa631,	// (0x00033a31) list_single_cale_preview_pane

0xa645,	// (0x00033a45) list_single_cale_preview_pane_g1

0xa64d,	// (0x00033a4d) list_single_cale_preview_pane_t1_ParamLimits

0xa64d,	// (0x00033a4d) list_single_cale_preview_pane_t1

0xa662,	// (0x00033a62) list_double_cale_preview_pane_g1

0xa66a,	// (0x00033a6a) list_double_cale_preview_pane_t1_ParamLimits

0xa66a,	// (0x00033a6a) list_double_cale_preview_pane_t1

0xa67f,	// (0x00033a7f) list_double_cale_preview_pane_t2_ParamLimits

0xa67f,	// (0x00033a7f) list_double_cale_preview_pane_t2

0x0001,

0xfdf1,	// (0x000391f1) list_double_cale_preview_pane_t_ParamLimits

0xfdf1,	// (0x000391f1) list_double_cale_preview_pane_t

0xc860,	// (0x00035c60) main_ezdial_pane

0xcd8f,	// (0x0003618f) main_sp_fs_email_pane_ParamLimits

0x9d8d,	// (0x0003318d) cmail_ddmenu_btn01_pane_ParamLimits

0x9d8d,	// (0x0003318d) cmail_ddmenu_btn01_pane

0x9da0,	// (0x000331a0) cmail_ddmenu_btn02_pane_ParamLimits

0x9da0,	// (0x000331a0) cmail_ddmenu_btn02_pane

0x9dc3,	// (0x000331c3) cmail_ddmenu_btn03_pane_ParamLimits

0x9dc3,	// (0x000331c3) cmail_ddmenu_btn03_pane

0x9dec,	// (0x000331ec) main_sp_fs_ctrlbar_pane_ParamLimits

0x9e10,	// (0x00033210) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa2a5,	// (0x000336a5) list_cmail_body_pane_ParamLimits

0xbd77,	// (0x00035177) bg_button_pane_cp12

0xbd8c,	// (0x0003518c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xbd8c,	// (0x0003518c) list_single_cmail_header_detail_pane_g3

0xa324,	// (0x00033724) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa324,	// (0x00033724) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd7d,	// (0x0003917d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd7d,	// (0x0003917d) list_single_cmail_header_detail_pane_t

0xbeb8,	// (0x000352b8) phacti_term_pane_t2_ParamLimits

0xbeb8,	// (0x000352b8) phacti_term_pane_t2

0x0001,

0xfd87,	// (0x00039187) phacti_term_pane_t_ParamLimits

0xfd87,	// (0x00039187) phacti_term_pane_t

0xc15f,	// (0x0003555f) aid_size_list_single_double

0xa697,	// (0x00033a97) popup_ezdial_listscroll_window

0xa6b3,	// (0x00033ab3) popup_number_entry_window_cp01

0xdbdf,	// (0x00036fdf) bg_popup_call_pane_cp09

0xc16b,	// (0x0003556b) ezdial_list_pane

0xc173,	// (0x00035573) scroll_pane_cp23

0xf02a,	// (0x0003842a) bg_button_pane_cp028_ParamLimits

0xf02a,	// (0x0003842a) bg_button_pane_cp028

0xa6c1,	// (0x00033ac1) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa6c1,	// (0x00033ac1) cmail_ddmenu_btn01_pane_g1

0xa6d0,	// (0x00033ad0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa6d0,	// (0x00033ad0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdf6,	// (0x000391f6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdf6,	// (0x000391f6) cmail_ddmenu_btn01_pane_g

0xc17b,	// (0x0003557b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xc17b,	// (0x0003557b) cmail_ddmenu_btn01_pane_t1

0xf02a,	// (0x0003842a) bg_button_pane_cp029_ParamLimits

0xf02a,	// (0x0003842a) bg_button_pane_cp029

0xa6e0,	// (0x00033ae0) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa6e0,	// (0x00033ae0) cmail_ddmenu_btn02_pane_g1

0xa6fb,	// (0x00033afb) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa6fb,	// (0x00033afb) cmail_ddmenu_btn02_pane_t1

0xcd8f,	// (0x0003618f) bg_button_pane_cp031_ParamLimits

0xcd8f,	// (0x0003618f) bg_button_pane_cp031

0xa6e0,	// (0x00033ae0) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa6e0,	// (0x00033ae0) cmail_ddmenu_btn03_pane_g1

0xa6fb,	// (0x00033afb) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa6fb,	// (0x00033afb) cmail_ddmenu_btn03_pane_t1

0x6da9,	// (0x000301a9) cell_dialer2_keypad_pane_t1_ParamLimits

0x6dc3,	// (0x000301c3) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6dc3,	// (0x000301c3) cell_dialer2_keypad_pane_t1_copy1

0x9093,	// (0x00032493) ncimui_group_button_pane

0xcd8f,	// (0x0003618f) main_sp_fs_calendar_pane_ParamLimits

0xa2ba,	// (0x000336ba) list_single_cmail_header_caption_pane_ParamLimits

0xbf03,	// (0x00035303) aid_recal_txt_sm_pane

0xc860,	// (0x00035c60) mian_recal_day_pane

0xbf42,	// (0x00035342) popup_sp_fs_cale_preview_window_ParamLimits

0xc860,	// (0x00035c60) list_recal_day_pane

0xc1b3,	// (0x000355b3) list_single_recal_day_pane_ParamLimits

0xc1b3,	// (0x000355b3) list_single_recal_day_pane

0xc1c5,	// (0x000355c5) list_single_recal_day_pane_g1_ParamLimits

0xc1c5,	// (0x000355c5) list_single_recal_day_pane_g1

0xc1d1,	// (0x000355d1) list_single_recal_day_pane_g2_ParamLimits

0xc1d1,	// (0x000355d1) list_single_recal_day_pane_g2

0xc1e1,	// (0x000355e1) list_single_recal_day_pane_g3_ParamLimits

0xc1e1,	// (0x000355e1) list_single_recal_day_pane_g3

0xa722,	// (0x00033b22) list_single_recal_day_pane_g4_ParamLimits

0xa722,	// (0x00033b22) list_single_recal_day_pane_g4

0xc1ed,	// (0x000355ed) list_single_recal_day_pane_g5_ParamLimits

0xc1ed,	// (0x000355ed) list_single_recal_day_pane_g5

0xc1fd,	// (0x000355fd) list_single_recal_day_pane_g6_ParamLimits

0xc1fd,	// (0x000355fd) list_single_recal_day_pane_g6

0x0004,

0xfe05,	// (0x00039205) list_single_recal_day_pane_g_ParamLimits

0xfe05,	// (0x00039205) list_single_recal_day_pane_g

0xc214,	// (0x00035614) list_single_recal_day_pane_t1

0xc226,	// (0x00035626) list_single_recal_day_pane_t2

0x0001,

0xfe10,	// (0x00039210) list_single_recal_day_pane_t

0xa742,	// (0x00033b42) ncimui_query_button_pane_ParamLimits

0xa742,	// (0x00033b42) ncimui_query_button_pane

0xa752,	// (0x00033b52) ncimui_query_button_pane_t1_ParamLimits

0xa752,	// (0x00033b52) ncimui_query_button_pane_t1

0xc23b,	// (0x0003563b) ncimui_query_button_pane_t2_ParamLimits

0xc23b,	// (0x0003563b) ncimui_query_button_pane_t2

0x0001,

0xfe15,	// (0x00039215) ncimui_query_button_pane_t_ParamLimits

0xfe15,	// (0x00039215) ncimui_query_button_pane_t

0xa765,	// (0x00033b65) query_button_pane_ParamLimits

0xa765,	// (0x00033b65) query_button_pane

0xc860,	// (0x00035c60) bg_button_pane_cp0028

0xc24e,	// (0x0003564e) query_button_pane_t1

0x0e22,	// (0x0002a222) main_tport_pane_ParamLimits

0xa192,	// (0x00033592) bg_popup_window_pane_cp01_ParamLimits

0xa192,	// (0x00033592) bg_popup_window_pane_cp01

0xa1ac,	// (0x000335ac) heading_pane_cp08_ParamLimits

0xa1ac,	// (0x000335ac) heading_pane_cp08

0xa1c0,	// (0x000335c0) heading_pane_cp07_ParamLimits

0xa1c0,	// (0x000335c0) heading_pane_cp07

0xbd3a,	// (0x0003513a) cell_tport_appsw_pane_g2

0x0002,

0xfd6a,	// (0x0003916a) cell_tport_appsw_pane_g

0x40dc,	// (0x0002d4dc) input_candi_list_open_g1

0xd68f,	// (0x00036a8f) list_cale_time_pane_g6_ParamLimits

0xd68f,	// (0x00036a8f) list_cale_time_pane_g6

0x5739,	// (0x0002eb39) aid_size_touch_calib_1_ParamLimits

0x5739,	// (0x0002eb39) aid_size_touch_calib_1

0x5745,	// (0x0002eb45) aid_size_touch_calib_2_ParamLimits

0x5745,	// (0x0002eb45) aid_size_touch_calib_2

0x575b,	// (0x0002eb5b) aid_size_touch_calib_3_ParamLimits

0x575b,	// (0x0002eb5b) aid_size_touch_calib_3

0x5779,	// (0x0002eb79) aid_size_touch_calib_4_ParamLimits

0x5779,	// (0x0002eb79) aid_size_touch_calib_4

0x578f,	// (0x0002eb8f) main_touch_calib_button_group_pane_ParamLimits

0x578f,	// (0x0002eb8f) main_touch_calib_button_group_pane

0x57a7,	// (0x0002eba7) main_touch_calib_pane_g1_ParamLimits

0x57b3,	// (0x0002ebb3) main_touch_calib_pane_g2_ParamLimits

0x57bf,	// (0x0002ebbf) main_touch_calib_pane_g3_ParamLimits

0x57cb,	// (0x0002ebcb) main_touch_calib_pane_g4_ParamLimits

0xf74e,	// (0x00038b4e) main_touch_calib_pane_g_ParamLimits

0x57d7,	// (0x0002ebd7) main_touch_calib_pane_t1_ParamLimits

0x57f1,	// (0x0002ebf1) main_touch_calib_pane_t2_ParamLimits

0x580b,	// (0x0002ec0b) main_touch_calib_pane_t3_ParamLimits

0x581f,	// (0x0002ec1f) main_touch_calib_pane_t4_ParamLimits

0x5833,	// (0x0002ec33) main_touch_calib_pane_t5_ParamLimits

0xf757,	// (0x00038b57) main_touch_calib_pane_t_ParamLimits

0x6027,	// (0x0002f427) list_single_fp_cale_pane_g3_ParamLimits

0x6027,	// (0x0002f427) list_single_fp_cale_pane_g3

0xb1f2,	// (0x000345f2) bg_button_pane_cp012_ParamLimits

0xb1f2,	// (0x000345f2) bg_vkb2_func_pane_cp03_ParamLimits

0x1f23,	// (0x0002b323) cell_vitu2_function_top_pane_g1_ParamLimits

0xb1f2,	// (0x000345f2) bg_vkb2_func_pane_cp04_ParamLimits

0x9021,	// (0x00032421) main_ncimui_button_group_pane_ParamLimits

0x9021,	// (0x00032421) main_ncimui_button_group_pane

0x9081,	// (0x00032481) main_ncimui_pane_t3_ParamLimits

0x9081,	// (0x00032481) main_ncimui_pane_t3

0xbe66,	// (0x00035266) phacti_button_group_pane

0xc15f,	// (0x0003555f) aid_size_list_single_double_ParamLimits

0xa697,	// (0x00033a97) popup_ezdial_listscroll_window_ParamLimits

0xa6b3,	// (0x00033ab3) popup_number_entry_window_cp01_ParamLimits

0xa778,	// (0x00033b78) phacti_button_pane_ParamLimits

0xa778,	// (0x00033b78) phacti_button_pane

0xc860,	// (0x00035c60) bg_button_pane_cp14

0xc25c,	// (0x0003565c) phacti_button_pane_t1

0xa789,	// (0x00033b89) main_touch_calib_button_pane_ParamLimits

0xa789,	// (0x00033b89) main_touch_calib_button_pane

0xcffb,	// (0x000363fb) bg_button_pane_cp18_ParamLimits

0xcffb,	// (0x000363fb) bg_button_pane_cp18

0xc26a,	// (0x0003566a) main_touch_calib_button_pane_t1_ParamLimits

0xc26a,	// (0x0003566a) main_touch_calib_button_pane_t1

0xc280,	// (0x00035680) main_touch_calib_button_pane_t2_ParamLimits

0xc280,	// (0x00035680) main_touch_calib_button_pane_t2

0x0001,

0xfe1a,	// (0x0003921a) main_touch_calib_button_pane_t_ParamLimits

0xfe1a,	// (0x0003921a) main_touch_calib_button_pane_t

0xc860,	// (0x00035c60) cell_ncimui_button_pane

0xc860,	// (0x00035c60) bg_button_pane_cp032

0xc29e,	// (0x0003569e) cell_ncimui_button_pane_t1

0xb734,	// (0x00034b34) image3_infobar_pane_ParamLimits

0xb734,	// (0x00034b34) image3_infobar_pane

0x97c7,	// (0x00032bc7) fs_bigclock_status_pane_ParamLimits

0x97c7,	// (0x00032bc7) fs_bigclock_status_pane

0x97d4,	// (0x00032bd4) main_fs_bigclock_clock_pane_ParamLimits

0x97d4,	// (0x00032bd4) main_fs_bigclock_clock_pane

0x97e8,	// (0x00032be8) main_fs_bigclock_indi_pane_ParamLimits

0x97e8,	// (0x00032be8) main_fs_bigclock_indi_pane

0x9800,	// (0x00032c00) main_fs_bigclock_swipe_pane_ParamLimits

0x9800,	// (0x00032c00) main_fs_bigclock_swipe_pane

0xc860,	// (0x00035c60) main_fs_clock_dumped_data

0x9826,	// (0x00032c26) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x9826,	// (0x00032c26) list_single_fs_bigclock_indicator_pane_g1

0x984f,	// (0x00032c4f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x984f,	// (0x00032c4f) list_single_fs_bigclock_indicator_pane_g2

0x9869,	// (0x00032c69) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x9869,	// (0x00032c69) list_single_fs_bigclock_indicator_pane_g3

0x9883,	// (0x00032c83) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9883,	// (0x00032c83) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc60,	// (0x00039060) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc60,	// (0x00039060) list_single_fs_bigclock_indicator_pane_g

0x98ac,	// (0x00032cac) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x98ac,	// (0x00032cac) list_single_fs_bigclock_indicator_pane_t1

0x98d4,	// (0x00032cd4) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x98d4,	// (0x00032cd4) list_single_fs_bigclock_indicator_pane_t2

0x98fc,	// (0x00032cfc) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x98fc,	// (0x00032cfc) list_single_fs_bigclock_indicator_pane_t3

0x9924,	// (0x00032d24) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9924,	// (0x00032d24) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc6b,	// (0x0003906b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc6b,	// (0x0003906b) list_single_fs_bigclock_indicator_pane_t

0xc2ac,	// (0x000356ac) image3_infobar_fav_pane_ParamLimits

0xc2ac,	// (0x000356ac) image3_infobar_fav_pane

0xc2bc,	// (0x000356bc) image3_infobar_loc_pane_ParamLimits

0xc2bc,	// (0x000356bc) image3_infobar_loc_pane

0xc2d0,	// (0x000356d0) image3_infobar_time_pane_ParamLimits

0xc2d0,	// (0x000356d0) image3_infobar_time_pane

0x53cc,	// (0x0002e7cc) image3_infobar_time_pane_g1

0xc2e0,	// (0x000356e0) image3_infobar_time_pane_t1

0x53cc,	// (0x0002e7cc) image3_infobar_loc_pane_g1

0xc2ee,	// (0x000356ee) image3_infobar_loc_pane_g2

0x0001,

0xfe1f,	// (0x0003921f) image3_infobar_loc_pane_g

0xc2f6,	// (0x000356f6) image3_infobar_loc_pane_t1

0x53cc,	// (0x0002e7cc) image3_infobar_fav_pane_g1

0xc304,	// (0x00035704) image3_infobar_fav_pane_g2

0x0001,

0xfe24,	// (0x00039224) image3_infobar_fav_pane_g

0xc30c,	// (0x0003570c) fs_bigclock_status_battery_pane

0xc315,	// (0x00035715) fs_bigclock_status_signal_pane

0xc31e,	// (0x0003571e) fs_bigclock_status_title_pane

0xc327,	// (0x00035727) fs_bigclock_status_signal_pane_g1

0xc330,	// (0x00035730) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe29,	// (0x00039229) fs_bigclock_status_signal_pane_g

0xc338,	// (0x00035738) fs_bigclock_status_battery_pane_g1

0xc341,	// (0x00035741) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe2e,	// (0x0003922e) fs_bigclock_status_battery_pane_g

0xc349,	// (0x00035749) fs_bigclock_status_title_pane_t1

0x53cc,	// (0x0002e7cc) main_fs_bigclock_clock_pane_g1

0xc357,	// (0x00035757) main_fs_bigclock_clock_pane_g2

0xc357,	// (0x00035757) main_fs_bigclock_clock_pane_g3

0xc357,	// (0x00035757) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe33,	// (0x00039233) main_fs_bigclock_clock_pane_g

0xc35f,	// (0x0003575f) main_fs_bigclock_clock_pane_t1

0xc36d,	// (0x0003576d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe3c,	// (0x0003923c) main_fs_bigclock_clock_pane_t

0xc37c,	// (0x0003577c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xc37c,	// (0x0003577c) list_single_fs_bigclock_indicator_pane

0xa79e,	// (0x00033b9e) list_single_fs_bigclock_pane_ParamLimits

0xa79e,	// (0x00033b9e) list_single_fs_bigclock_pane

0xc396,	// (0x00035796) main_fs_bigclock_indicator_pane_t1

0xc3a5,	// (0x000357a5) list_single_fs_bigclock_pane_g1

0xc3ad,	// (0x000357ad) list_single_fs_bigclock_pane_t1

0x53cc,	// (0x0002e7cc) main_fs_bigclock_swipe_pane_g1

0xc3f0,	// (0x000357f0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe4d,	// (0x0003924d) main_fs_bigclock_swipe_pane_g

0xc3f8,	// (0x000357f8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xc3f8,	// (0x000357f8) main_fs_bigclock_swipe_pane_t1

0x38ef,	// (0x0002ccef) call_type_pane_ParamLimits

0xc860,	// (0x00035c60) main_btmg_pane

0xc03b,	// (0x0003543b) list_single_cale_mrui_row_pane_g2_ParamLimits

0xc03b,	// (0x0003543b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdc9,	// (0x000391c9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdc9,	// (0x000391c9) list_single_cale_mrui_row_pane_g

0xc19a,	// (0x0003559a) list_recal_vselct_arw_lo_pane

0xc1a2,	// (0x000355a2) list_recal_vselct_arw_up_pane

0xc1aa,	// (0x000355aa) list_recal_vselct_pane

0xa804,	// (0x00033c04) btmg_button_pane

0xa80e,	// (0x00033c0e) main_btmg_pane_g1

0xc860,	// (0x00035c60) bg_button_pane_cp044

0xc415,	// (0x00035815) btmg_button_pane_t1

0xf022,	// (0x00038422) aid_listscroll_gen

0xcd8f,	// (0x0003618f) main_cntbar_detail_pane

0xbd58,	// (0x00035158) list_cmail_folder_pane

0xbd68,	// (0x00035168) sp_fs_scroll_pane_cp03_ParamLimits

0xa2ba,	// (0x000336ba) list_single_fs_dyc_pane_cp01_ParamLimits

0xa2ba,	// (0x000336ba) list_single_fs_dyc_pane_cp01

0xc423,	// (0x00035823) aid_size_cmail_indent

0xc42c,	// (0x0003582c) list_single_dyc_row_pane_cp01

0xa844,	// (0x00033c44) cntbar_detail_list_pane_ParamLimits

0xa844,	// (0x00033c44) cntbar_detail_list_pane

0xa890,	// (0x00033c90) main_cntbar_detail_cont_pane_ParamLimits

0xa890,	// (0x00033c90) main_cntbar_detail_cont_pane

0x3889,	// (0x0002cc89) scroll_pane_cp032_ParamLimits

0x3889,	// (0x0002cc89) scroll_pane_cp032

0xa8a4,	// (0x00033ca4) cntbar_detail_list_event_pane_ParamLimits

0xa8a4,	// (0x00033ca4) cntbar_detail_list_event_pane

0xa854,	// (0x00033c54) cntbar_detail_list_shct_pane

0xd518,	// (0x00036918) aid_list_gen

0xc435,	// (0x00035835) aid_scroll

0xc43e,	// (0x0003583e) aid_size_touch_scroll_bar

0xc447,	// (0x00035847) aid_list_double

0xc450,	// (0x00035850) aid_list_single

0xc459,	// (0x00035859) aid_list_single_lg

0xc462,	// (0x00035862) aid_list_z_g_a_sm

0xc46a,	// (0x0003586a) aid_list_z_g_d

0xc472,	// (0x00035872) aid_txt_z_prm

0xa8b4,	// (0x00033cb4) aid_txt_z_prm_cp01

0xa8c2,	// (0x00033cc2) aid_txt_z_sec

0xa8d0,	// (0x00033cd0) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa8d0,	// (0x00033cd0) main_cntbar_detail_cont_pane_g1

0xa8e4,	// (0x00033ce4) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa8e4,	// (0x00033ce4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe52,	// (0x00039252) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe52,	// (0x00039252) main_cntbar_detail_cont_pane_g

0xc480,	// (0x00035880) main_cntbar_detail_cont_pane_t1

0xc48e,	// (0x0003588e) main_cntbar_detail_cont_pane_t2

0xc49c,	// (0x0003589c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe57,	// (0x00039257) main_cntbar_detail_cont_pane_t

0xa8f4,	// (0x00033cf4) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa8f4,	// (0x00033cf4) cell_cntbar_detail_list_shct_pane

0xc4aa,	// (0x000358aa) cntbar_detail_list_shct_pane_g1

0xc4b3,	// (0x000358b3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe5e,	// (0x0003925e) cntbar_detail_list_shct_pane_g

0xa908,	// (0x00033d08) cntbar_detail_list_event_pane_g1_ParamLimits

0xa908,	// (0x00033d08) cntbar_detail_list_event_pane_g1

0xa914,	// (0x00033d14) cntbar_detail_list_event_pane_g2_ParamLimits

0xa914,	// (0x00033d14) cntbar_detail_list_event_pane_g2

0x0005,

0xfe63,	// (0x00039263) cntbar_detail_list_event_pane_g_ParamLimits

0xfe63,	// (0x00039263) cntbar_detail_list_event_pane_g

0xa980,	// (0x00033d80) cntbar_detail_list_event_pane_t1_ParamLimits

0xa980,	// (0x00033d80) cntbar_detail_list_event_pane_t1

0xa995,	// (0x00033d95) cntbar_detail_list_event_pane_t2_ParamLimits

0xa995,	// (0x00033d95) cntbar_detail_list_event_pane_t2

0x0002,

0xfe70,	// (0x00039270) cntbar_detail_list_event_pane_t_ParamLimits

0xfe70,	// (0x00039270) cntbar_detail_list_event_pane_t

0x53cc,	// (0x0002e7cc) cell_cntbar_detail_list_shct_pane_g1

0x3c56,	// (0x0002d056) navi_pane_mv_g3

0xcd8f,	// (0x0003618f) main_cntbar_detail_pane_ParamLimits

0xc860,	// (0x00035c60) main_notif_wgt_pane

0xb54a,	// (0x0003494a) aid_tch_main_mp4_pane_g4

0xb72c,	// (0x00034b2c) popup_slider_window_cp02

0xc190,	// (0x00035590) list_recal_day_event_pane

0xa818,	// (0x00033c18) cntbar_detail_btn_pane_ParamLimits

0xa818,	// (0x00033c18) cntbar_detail_btn_pane

0xa82e,	// (0x00033c2e) cntbar_detail_btn_pane_cp01_ParamLimits

0xa82e,	// (0x00033c2e) cntbar_detail_btn_pane_cp01

0xa854,	// (0x00033c54) cntbar_detail_list_shct_pane_ParamLimits

0xa864,	// (0x00033c64) cntbar_detail_pane_g1_ParamLimits

0xa864,	// (0x00033c64) cntbar_detail_pane_g1

0xa874,	// (0x00033c74) cntbar_detail_pane_t1_ParamLimits

0xa874,	// (0x00033c74) cntbar_detail_pane_t1

0xa920,	// (0x00033d20) cntbar_detail_list_event_pane_g3_ParamLimits

0xa920,	// (0x00033d20) cntbar_detail_list_event_pane_g3

0xa938,	// (0x00033d38) cntbar_detail_list_event_pane_g4_ParamLimits

0xa938,	// (0x00033d38) cntbar_detail_list_event_pane_g4

0xa950,	// (0x00033d50) cntbar_detail_list_event_pane_g5_ParamLimits

0xa950,	// (0x00033d50) cntbar_detail_list_event_pane_g5

0xa968,	// (0x00033d68) cntbar_detail_list_event_pane_g6_ParamLimits

0xa968,	// (0x00033d68) cntbar_detail_list_event_pane_g6

0xa9aa,	// (0x00033daa) cntbar_detail_list_event_pane_t3_ParamLimits

0xa9aa,	// (0x00033daa) cntbar_detail_list_event_pane_t3

0xa9bc,	// (0x00033dbc) popup_notif_wgt_window_ParamLimits

0xa9bc,	// (0x00033dbc) popup_notif_wgt_window

0xa9d5,	// (0x00033dd5) popup_submenu_window_cp01_ParamLimits

0xa9d5,	// (0x00033dd5) popup_submenu_window_cp01

0xdbdf,	// (0x00036fdf) bg_popup_window_pane_cp10

0xc4bc,	// (0x000358bc) listscroll_notif_wgt_pane

0xc4cd,	// (0x000358cd) list_notif_wgt_window

0xc4d6,	// (0x000358d6) scroll_pane_cp033

0xa9e7,	// (0x00033de7) list_notif_wgt_row_pane_ParamLimits

0xa9e7,	// (0x00033de7) list_notif_wgt_row_pane

0xc4df,	// (0x000358df) aid_size_list_notif_wgt_del

0xc4ec,	// (0x000358ec) list_notif_wgt_row_pane_g1

0xc4f8,	// (0x000358f8) list_notif_wgt_row_pane_g2

0xc504,	// (0x00035904) list_notif_wgt_row_pane_g3

0x0002,

0xfe77,	// (0x00039277) list_notif_wgt_row_pane_g

0xc511,	// (0x00035911) list_notif_wgt_row_pane_t1

0xc526,	// (0x00035926) list_notif_wgt_row_pane_t2

0xc538,	// (0x00035938) list_notif_wgt_row_pane_t3

0x0002,

0xfe7e,	// (0x0003927e) list_notif_wgt_row_pane_t

0x7a5d,	// (0x00030e5d) list_recal_day_event_pane_g1

0xc54a,	// (0x0003594a) list_recal_day_event_pane_t1

0xc860,	// (0x00035c60) bg_button_pane_cp045

0xc559,	// (0x00035959) cntbar_detail_btn_pane_t1

0xf02a,	// (0x0003842a) main_callh_pane_ParamLimits

0xf02a,	// (0x0003842a) main_callh_pane

0xc860,	// (0x00035c60) main_coverflow0_pane

0xc860,	// (0x00035c60) main_wgtman_pane

0x980e,	// (0x00032c0e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x980e,	// (0x00032c0e) main_fs_bigclock_unlock_btn_pane

0xbd32,	// (0x00035132) bg_button_pane_cp16

0xbd42,	// (0x00035142) cell_tport_appsw_pane_g3

0xa9f7,	// (0x00033df7) cf0_flow_pane_ParamLimits

0xa9f7,	// (0x00033df7) cf0_flow_pane

0xc567,	// (0x00035967) listscroll_cf0_pane

0xc572,	// (0x00035972) main_cf0_pane_g1

0xaa0c,	// (0x00033e0c) main_cf0_pane_t1_ParamLimits

0xaa0c,	// (0x00033e0c) main_cf0_pane_t1

0xaa23,	// (0x00033e23) main_cf0_pane_t2_ParamLimits

0xaa23,	// (0x00033e23) main_cf0_pane_t2

0x0001,

0xfe85,	// (0x00039285) main_cf0_pane_t_ParamLimits

0xfe85,	// (0x00039285) main_cf0_pane_t

0xc57c,	// (0x0003597c) scroll_pane_cp11

0xaa3a,	// (0x00033e3a) cf0_flow_pane_g1

0xaa42,	// (0x00033e42) cf0_flow_pane_g2

0x0001,

0xfe8a,	// (0x0003928a) cf0_flow_pane_g

0xaa4a,	// (0x00033e4a) cf0_flow_pane_t1

0xc860,	// (0x00035c60) main_call6_pane

0xc860,	// (0x00035c60) main_calllock_pane

0xaa58,	// (0x00033e58) call6_btn_grp_pane_ParamLimits

0xaa58,	// (0x00033e58) call6_btn_grp_pane

0xaa72,	// (0x00033e72) call6_pane_g1_ParamLimits

0xaa72,	// (0x00033e72) call6_pane_g1

0xaa87,	// (0x00033e87) popup_call6_1st_window_ParamLimits

0xaa87,	// (0x00033e87) popup_call6_1st_window

0xaa98,	// (0x00033e98) popup_call6_2nd_window_ParamLimits

0xaa98,	// (0x00033e98) popup_call6_2nd_window

0xaaa9,	// (0x00033ea9) cell_call6_btn_pane_ParamLimits

0xaaa9,	// (0x00033ea9) cell_call6_btn_pane

0xdbdf,	// (0x00036fdf) bg_popup_call2_in_pane_cp03

0xc587,	// (0x00035987) popup_call6_1st_window_g1

0xc58f,	// (0x0003598f) popup_call6_1st_window_g2

0xc597,	// (0x00035997) popup_call6_1st_window_g3

0x0002,

0xfe8f,	// (0x0003928f) popup_call6_1st_window_g

0xc59f,	// (0x0003599f) popup_call6_1st_window_t1

0xc5ae,	// (0x000359ae) popup_call6_1st_window_t2

0xc5be,	// (0x000359be) popup_call6_1st_window_t3

0x0002,

0xfe96,	// (0x00039296) popup_call6_1st_window_t

0xdbdf,	// (0x00036fdf) bg_popup_call2_in_pane_cp04

0xc587,	// (0x00035987) popup_call6_2nd_window_g1

0xc58f,	// (0x0003598f) popup_call6_2nd_window_g2

0xc597,	// (0x00035997) popup_call6_2nd_window_g3

0x0002,

0xfe8f,	// (0x0003928f) popup_call6_2nd_window_g

0xc59f,	// (0x0003599f) popup_call6_2nd_window_t1

0xc860,	// (0x00035c60) bg_button_pane_cp15

0xc5ce,	// (0x000359ce) cell_call6_btn_pane_g1

0xc5d7,	// (0x000359d7) cell_call6_btn_pane_t1

0xaabd,	// (0x00033ebd) listscroll_wgtman_pane_ParamLimits

0xaabd,	// (0x00033ebd) listscroll_wgtman_pane

0xaae0,	// (0x00033ee0) wgtman_btn_pane_ParamLimits

0xaae0,	// (0x00033ee0) wgtman_btn_pane

0xda92,	// (0x00036e92) aid_scroll_copy1

0xc5e6,	// (0x000359e6) list_wgtman_pane

0xab23,	// (0x00033f23) wgtman_btn_pane_g1_ParamLimits

0xab23,	// (0x00033f23) wgtman_btn_pane_g1

0xab4f,	// (0x00033f4f) wgtman_btn_pane_t1_ParamLimits

0xab4f,	// (0x00033f4f) wgtman_btn_pane_t1

0xc5f0,	// (0x000359f0) wgtman_btn_pane_t2_ParamLimits

0xc5f0,	// (0x000359f0) wgtman_btn_pane_t2

0x0001,

0xfe9d,	// (0x0003929d) wgtman_btn_pane_t_ParamLimits

0xfe9d,	// (0x0003929d) wgtman_btn_pane_t

0xab8c,	// (0x00033f8c) listrow_wgtman_pane_ParamLimits

0xab8c,	// (0x00033f8c) listrow_wgtman_pane

0xab9f,	// (0x00033f9f) listrow_wgtman_pane_g1

0xabac,	// (0x00033fac) listrow_wgtman_pane_g2

0x0001,

0xfea2,	// (0x000392a2) listrow_wgtman_pane_g

0xabca,	// (0x00033fca) listrow_wgtman_pane_t1

0xabe2,	// (0x00033fe2) listrow_wgtman_pane_t2

0x0001,

0xfea7,	// (0x000392a7) listrow_wgtman_pane_t

0xac08,	// (0x00034008) wait_bar_pane_cp09

0xc607,	// (0x00035a07) main_calllock_btn_pane

0xc611,	// (0x00035a11) main_calllock_pane_g1

0xc860,	// (0x00035c60) bg_button_pane_cp17

0xc61c,	// (0x00035a1c) main_calllock_btn_pane_g1

0xc625,	// (0x00035a25) main_calllock_btn_pane_t1

0xc860,	// (0x00035c60) main_dialer3_pane

0xc860,	// (0x00035c60) main_fmrd2_pane

0x53cc,	// (0x0002e7cc) main_fs_bigclock_unlock_btn_pane_g1

0xc63c,	// (0x00035a3c) main_fs_bigclock_unlock_btn_pane_t1

0xac1a,	// (0x0003401a) area_fmrd2_info_pane_ParamLimits

0xac1a,	// (0x0003401a) area_fmrd2_info_pane

0xac2b,	// (0x0003402b) area_fmrd2_visual_pane_ParamLimits

0xac2b,	// (0x0003402b) area_fmrd2_visual_pane

0xac39,	// (0x00034039) fmrd2_indi_pane_ParamLimits

0xac39,	// (0x00034039) fmrd2_indi_pane

0xac46,	// (0x00034046) area_fmrd2_visual_pane_g1

0xac4e,	// (0x0003404e) area_fmrd2_visual_pane_t1

0xac5e,	// (0x0003405e) area_fmrd2_visual_pane_t2

0xac6e,	// (0x0003406e) area_fmrd2_visual_pane_t3

0x0002,

0xfeb1,	// (0x000392b1) area_fmrd2_visual_pane_t

0xac7e,	// (0x0003407e) area_fmrd2_info_pane_g1

0xac86,	// (0x00034086) area_fmrd2_info_pane_t1

0xac96,	// (0x00034096) area_fmrd2_info_pane_t2

0xaca6,	// (0x000340a6) area_fmrd2_info_pane_t3

0xacb6,	// (0x000340b6) area_fmrd2_info_pane_t4

0x0003,

0xfeb8,	// (0x000392b8) area_fmrd2_info_pane_t

0xacc4,	// (0x000340c4) fmrd2_indi_pane_t1

0xacd4,	// (0x000340d4) fmrd2_indi_pane_t2

0xace4,	// (0x000340e4) fmrd2_indi_pane_t3

0x0002,

0xfec1,	// (0x000392c1) fmrd2_indi_pane_t

0x9892,	// (0x00032c92) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9892,	// (0x00032c92) list_single_fs_bigclock_indicator_pane_g5

0x9939,	// (0x00032d39) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x9939,	// (0x00032d39) list_single_fs_bigclock_indicator_pane_t5

0xa409,	// (0x00033809) aid_cell_bcale_month_pane_ParamLimits

0xa409,	// (0x00033809) aid_cell_bcale_month_pane

0xa421,	// (0x00033821) bcale_month_pane_ParamLimits

0xa421,	// (0x00033821) bcale_month_pane

0xa438,	// (0x00033838) bcale_preview_pane_ParamLimits

0xa438,	// (0x00033838) bcale_preview_pane

0xc3ad,	// (0x000357ad) list_single_fs_bigclock_pane_t1_ParamLimits

0xc3cc,	// (0x000357cc) list_single_fs_bigclock_pane_t2_ParamLimits

0xc3cc,	// (0x000357cc) list_single_fs_bigclock_pane_t2

0x0001,

0xfe48,	// (0x00039248) list_single_fs_bigclock_pane_t_ParamLimits

0xfe48,	// (0x00039248) list_single_fs_bigclock_pane_t

0xc634,	// (0x00035a34) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeac,	// (0x000392ac) main_fs_bigclock_unlock_btn_pane_g

0xacf4,	// (0x000340f4) aid_dia3_key_size_ParamLimits

0xacf4,	// (0x000340f4) aid_dia3_key_size

0xad03,	// (0x00034103) aid_dia3_listrow_size_ParamLimits

0xad03,	// (0x00034103) aid_dia3_listrow_size

0xad18,	// (0x00034118) dia3_keypad_fun_pane_ParamLimits

0xad18,	// (0x00034118) dia3_keypad_fun_pane

0xad34,	// (0x00034134) dia3_keypad_num_pane_ParamLimits

0xad34,	// (0x00034134) dia3_keypad_num_pane

0xad4f,	// (0x0003414f) dia3_listscroll_pane_ParamLimits

0xad4f,	// (0x0003414f) dia3_listscroll_pane

0xad62,	// (0x00034162) dia3_numentry_pane_ParamLimits

0xad62,	// (0x00034162) dia3_numentry_pane

0xc64a,	// (0x00035a4a) dia3_list_pane

0xc655,	// (0x00035a55) scroll_pane_cp12

0xc860,	// (0x00035c60) bg_dia3_numentry_pane

0xad76,	// (0x00034176) dia3_numentry_pane_t1

0xad85,	// (0x00034185) cell_dia3_key_num_pane

0xad8d,	// (0x0003418d) cell_dia3_key0_fun_pane_ParamLimits

0xad8d,	// (0x0003418d) cell_dia3_key0_fun_pane

0xada1,	// (0x000341a1) cell_dia3_key1_fun_pane_ParamLimits

0xada1,	// (0x000341a1) cell_dia3_key1_fun_pane

0xadb9,	// (0x000341b9) dia3_listrow_pane

0x92a2,	// (0x000326a2) bg_dia3_numentry_pane_g1

0xc860,	// (0x00035c60) bg_button_pane_cp21

0xc660,	// (0x00035a60) cell_dia3_key_num_pane_t1

0xc66e,	// (0x00035a6e) cell_dia3_key_num_pane_t2

0xc67d,	// (0x00035a7d) cell_dia3_key_num_pane_t3

0xc68c,	// (0x00035a8c) cell_dia3_key_num_pane_t4

0x0003,

0xfec8,	// (0x000392c8) cell_dia3_key_num_pane_t

0xc860,	// (0x00035c60) bg_button_pane_cp19

0xadcb,	// (0x000341cb) cell_dia3_key0_fun_pane_g1

0xc860,	// (0x00035c60) bg_button_pane_cp20

0xadd3,	// (0x000341d3) cell_dia3_key1_fun_pane_g1

0xaddb,	// (0x000341db) area_left_week_number_pane

0xade5,	// (0x000341e5) area_top_day_name_pane

0xadf1,	// (0x000341f1) frame_month_view_pane

0xadfb,	// (0x000341fb) grid_month_view_pane

0xc69b,	// (0x00035a9b) cell_top_day_name_pane_ParamLimits

0xc69b,	// (0x00035a9b) cell_top_day_name_pane

0xae05,	// (0x00034205) cell_area_left_week_number_pane_ParamLimits

0xae05,	// (0x00034205) cell_area_left_week_number_pane

0xae19,	// (0x00034219) cell_month_view_pane_ParamLimits

0xae19,	// (0x00034219) cell_month_view_pane

0xc6b5,	// (0x00035ab5) frm_month_g1

0xae36,	// (0x00034236) frm_month_g2

0xae40,	// (0x00034240) frm_month_g3

0xae4a,	// (0x0003424a) frm_month_g4

0xae54,	// (0x00034254) frm_month_g5

0xae5e,	// (0x0003425e) frm_month_g6

0xae68,	// (0x00034268) frm_month_g7

0xc6be,	// (0x00035abe) frm_month_g8

0xc6c7,	// (0x00035ac7) frm_month_g9

0xc6d0,	// (0x00035ad0) frm_month_g10

0xc6d9,	// (0x00035ad9) frm_month_g11

0xc6e2,	// (0x00035ae2) frm_month_g12

0xc6eb,	// (0x00035aeb) frm_month_g13

0xc6f4,	// (0x00035af4) frm_month_g14

0xc6ff,	// (0x00035aff) frm_month_g15

0xc70a,	// (0x00035b0a) frm_month_g16

0x000f,

0xfed1,	// (0x000392d1) frm_month_g

0xae72,	// (0x00034272) cell_top_day_name_pane_t1

0xae81,	// (0x00034281) cell_area_left_week_number_pane_g1

0xae89,	// (0x00034289) cell_area_left_week_number_pane_t1

0x53cc,	// (0x0002e7cc) cell_month_view_pane_g1

0xae98,	// (0x00034298) cell_month_view_pane_t1

0xc860,	// (0x00035c60) main_fps_pane

0xbaae,	// (0x00034eae) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xbaae,	// (0x00034eae) cmail_ddmenu_btn02_pane_cp1

0xbaca,	// (0x00034eca) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xbaca,	// (0x00034eca) cmail_ddmenu_btn02_pane_cp2

0xa6ef,	// (0x00033aef) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa6ef,	// (0x00033aef) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdfb,	// (0x000391fb) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdfb,	// (0x000391fb) cmail_ddmenu_btn02_pane_g

0xa710,	// (0x00033b10) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa710,	// (0x00033b10) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe00,	// (0x00039200) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe00,	// (0x00039200) cmail_ddmenu_btn02_pane_t

0xaea7,	// (0x000342a7) fps_text_pane_ParamLimits

0xaea7,	// (0x000342a7) fps_text_pane

0xaebe,	// (0x000342be) main_fps_pane_g1_ParamLimits

0xaebe,	// (0x000342be) main_fps_pane_g1

0xaed8,	// (0x000342d8) wait_bar_pane_cp010_ParamLimits

0xaed8,	// (0x000342d8) wait_bar_pane_cp010

0xaee9,	// (0x000342e9) fps_text_pane_t1_ParamLimits

0xaee9,	// (0x000342e9) fps_text_pane_t1

0xb79a,	// (0x00034b9a) cam4_image_uncrop_pane_g1

0xb7a3,	// (0x00034ba3) cam4_image_uncrop_pane_g2

0x6ff7,	// (0x000303f7) cam4_image_uncrop_pane_g3

0x7000,	// (0x00030400) cam4_image_uncrop_pane_g4

0x0003,

0xf8e1,	// (0x00038ce1) cam4_image_uncrop_pane_g

0xadb9,	// (0x000341b9) dia3_listrow_pane_ParamLimits

0xc860,	// (0x00035c60) main_phob2_pane

0xa22b,	// (0x0003362b) cell_tport_appsw_pane_cp02_ParamLimits

0xa22b,	// (0x0003362b) cell_tport_appsw_pane_cp02

0xa23f,	// (0x0003363f) cell_tport_appsw_pane_cp03_ParamLimits

0xa23f,	// (0x0003363f) cell_tport_appsw_pane_cp03

0xc860,	// (0x00035c60) phob2_contact_card_pane

0xc860,	// (0x00035c60) phob2_listscroll_pane

0xc715,	// (0x00035b15) phob2_list_pane

0xc71d,	// (0x00035b1d) scroll_pane_cp034

0xaf01,	// (0x00034301) phob2_cc_data_pane_ParamLimits

0xaf01,	// (0x00034301) phob2_cc_data_pane

0xaf20,	// (0x00034320) phob2_cc_listscroll_pane_ParamLimits

0xaf20,	// (0x00034320) phob2_cc_listscroll_pane

0x7102,	// (0x00030502) list_double_large_graphic_phob2_pane_ParamLimits

0x7102,	// (0x00030502) list_double_large_graphic_phob2_pane

0xaf3e,	// (0x0003433e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaf3e,	// (0x0003433e) list_double_large_graphic_phob2_pane_g1

0xaf4b,	// (0x0003434b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xaf4b,	// (0x0003434b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfef2,	// (0x000392f2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfef2,	// (0x000392f2) list_double_large_graphic_phob2_pane_g

0xaf57,	// (0x00034357) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xaf57,	// (0x00034357) list_double_large_graphic_phob2_pane_t1

0xaf6c,	// (0x0003436c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xaf6c,	// (0x0003436c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfef7,	// (0x000392f7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfef7,	// (0x000392f7) list_double_large_graphic_phob2_pane_t

0xc860,	// (0x00035c60) list_highlight_pane_cp024

0xc725,	// (0x00035b25) phob2_cc_button_pane

0xaf7e,	// (0x0003437e) phob2_cc_data_pane_g1_ParamLimits

0xaf7e,	// (0x0003437e) phob2_cc_data_pane_g1

0xaf93,	// (0x00034393) phob2_cc_data_pane_g2_ParamLimits

0xaf93,	// (0x00034393) phob2_cc_data_pane_g2

0x0001,

0xfefc,	// (0x000392fc) phob2_cc_data_pane_g_ParamLimits

0xfefc,	// (0x000392fc) phob2_cc_data_pane_g

0xafa5,	// (0x000343a5) phob2_cc_data_pane_t1_ParamLimits

0xafa5,	// (0x000343a5) phob2_cc_data_pane_t1

0xafbd,	// (0x000343bd) phob2_cc_data_pane_t2_ParamLimits

0xafbd,	// (0x000343bd) phob2_cc_data_pane_t2

0xafd5,	// (0x000343d5) phob2_cc_data_pane_t3_ParamLimits

0xafd5,	// (0x000343d5) phob2_cc_data_pane_t3

0x0002,

0xff01,	// (0x00039301) phob2_cc_data_pane_t_ParamLimits

0xff01,	// (0x00039301) phob2_cc_data_pane_t

0xc72d,	// (0x00035b2d) phob2_cc_list_pane_ParamLimits

0xc72d,	// (0x00035b2d) phob2_cc_list_pane

0x7dab,	// (0x000311ab) scroll_pane_cp035_ParamLimits

0x7dab,	// (0x000311ab) scroll_pane_cp035

0xcd8f,	// (0x0003618f) bg_button_pane_cp033

0xc739,	// (0x00035b39) phob2_cc_button_pane_g1

0xc745,	// (0x00035b45) phob2_cc_button_pane_t1

0xc75a,	// (0x00035b5a) phob2_cc_button_pane_t2

0x0001,

0xff08,	// (0x00039308) phob2_cc_button_pane_t

0xafef,	// (0x000343ef) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xafef,	// (0x000343ef) list_double_large_graphic_phob2_cc_pane

0xb003,	// (0x00034403) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb003,	// (0x00034403) list_double_large_graphic_phob2_cc_pane_g1

0xb00f,	// (0x0003440f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb00f,	// (0x0003440f) list_double_large_graphic_phob2_cc_pane_g2

0xb01b,	// (0x0003441b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb01b,	// (0x0003441b) list_double_large_graphic_phob2_cc_pane_g3

0xb027,	// (0x00034427) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb027,	// (0x00034427) list_double_large_graphic_phob2_cc_pane_g4

0xb033,	// (0x00034433) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb033,	// (0x00034433) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff0d,	// (0x0003930d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff0d,	// (0x0003930d) list_double_large_graphic_phob2_cc_pane_g

0xb03f,	// (0x0003443f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb03f,	// (0x0003443f) list_double_large_graphic_phob2_cc_pane_t1

0xb068,	// (0x00034468) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb068,	// (0x00034468) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff18,	// (0x00039318) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff18,	// (0x00039318) list_double_large_graphic_phob2_cc_pane_t

0xc76c,	// (0x00035b6c) list_highlight_pane_cp025_ParamLimits

0xc76c,	// (0x00035b6c) list_highlight_pane_cp025

0xcd8f,	// (0x0003618f) bg_button_pane_cp033_ParamLimits

0xc739,	// (0x00035b39) phob2_cc_button_pane_g1_ParamLimits

0xc745,	// (0x00035b45) phob2_cc_button_pane_t1_ParamLimits

0xc75a,	// (0x00035b5a) phob2_cc_button_pane_t2_ParamLimits

0xff08,	// (0x00039308) phob2_cc_button_pane_t_ParamLimits

0x2090,	// (0x0002b490) popup_wgtman_window

0x74f5,	// (0x000308f5) scroll_pane_cp038

0xab05,	// (0x00033f05) wgtman_btn_pane_cp_01_ParamLimits

0xab05,	// (0x00033f05) wgtman_btn_pane_cp_01

0xc77a,	// (0x00035b7a) wgtman_content_pane

0xc447,	// (0x00035847) wgtman_heading_pane

0xc860,	// (0x00035c60) bg_heading_pane_cp02

0xc783,	// (0x00035b83) wgtman_heading_pane_g1

0xc78b,	// (0x00035b8b) wgtman_heading_pane_t1

0xc799,	// (0x00035b99) scroll_pane_cp036

0xc7a1,	// (0x00035ba1) wgtman_list_pane

0xc7a9,	// (0x00035ba9) wgtman_list_pane_t1_ParamLimits

0xc7a9,	// (0x00035ba9) wgtman_list_pane_t1

0xb786,	// (0x00034b86) cam4_grid_pane

0x7b25,	// (0x00030f25) bg_button_pane_cp015_ParamLimits

0x7b39,	// (0x00030f39) bg_button_pane_cp016_ParamLimits

0x7b4c,	// (0x00030f4c) bg_button_pane_cp017_ParamLimits

0x7bb0,	// (0x00030fb0) popup_vitu2_query_window_g3_ParamLimits

0x7bb0,	// (0x00030fb0) popup_vitu2_query_window_g3

0x7c6d,	// (0x0003106d) popup_vitu2_query_window_t6_ParamLimits

0x7c6d,	// (0x0003106d) popup_vitu2_query_window_t6

0x7c98,	// (0x00031098) popup_vitu2_query_window_t7_ParamLimits

0x7c98,	// (0x00031098) popup_vitu2_query_window_t7

0xb79a,	// (0x00034b9a) cam4_grid_pane_g1

0xb7a3,	// (0x00034ba3) cam4_grid_pane_g2

0xc7c7,	// (0x00035bc7) cam4_grid_pane_g3

0xc7d0,	// (0x00035bd0) cam4_grid_pane_g4

0x0003,

0xff1d,	// (0x0003931d) cam4_grid_pane_g

0x2a8e,	// (0x0002be8e) aid_placing_vt_slider_lsc_ParamLimits

0x2d8b,	// (0x0002c18b) vidtel_button_pane_ParamLimits

0x2d8b,	// (0x0002c18b) vidtel_button_pane

0xc7db,	// (0x00035bdb) bg_button_pane_cp034

0xb091,	// (0x00034491) vidtel_button_pane_g1

0xc7e5,	// (0x00035be5) vidtel_button_pane_t1

0x78e5,	// (0x00030ce5) aid_size_vtel_slider_touch

0x7dab,	// (0x000311ab) scroll_pane_cp039

0x9311,	// (0x00032711) ncim_query_button_pane_cp01_ParamLimits

0x9330,	// (0x00032730) ncimui_query_pane_g1_ParamLimits

0xcd8f,	// (0x0003618f) input_focus_pane_cp012_ParamLimits

0x9355,	// (0x00032755) ncim_query_entry_pane_t1_ParamLimits

0x7dab,	// (0x000311ab) scroll_pane_cp039_ParamLimits

0x3bca,	// (0x0002cfca) navi_pane_bcale_mc_g1

0x3bd2,	// (0x0002cfd2) navi_pane_bcale_mc_t1

0xbb07,	// (0x00034f07) main_sp_fs_email_pane_g1

0xbb0f,	// (0x00034f0f) main_sp_fs_email_pane_g2

0x0001,

0xfcd1,	// (0x000390d1) main_sp_fs_email_pane_g

0xc047,	// (0x00035447) list_single_cale_mrui_row_pane_g3_ParamLimits

0xc047,	// (0x00035447) list_single_cale_mrui_row_pane_g3

0xa738,	// (0x00033b38) list_single_recal_day_pane_g5_event_pane

0xc20c,	// (0x0003560c) list_single_recal_day_pane_g7

0xc7f3,	// (0x00035bf3) list_recal_day_event_pane_cp01

0xc7fc,	// (0x00035bfc) list_recal_vselct_arw_lo_pane_cp01

0xc804,	// (0x00035c04) list_recal_vselct_arw_up_pane_cp01

0xc80c,	// (0x00035c0c) list_recal_vselct_pane_cp01

0x7a5d,	// (0x00030e5d) list_recal_day_event_pane_cp01_g1

0xc816,	// (0x00035c16) list_recal_day_event_pane_cp01_t1

0xc214,	// (0x00035614) list_single_recal_day_pane_t1_ParamLimits

0xc226,	// (0x00035626) list_single_recal_day_pane_t2_ParamLimits

0xfe10,	// (0x00039210) list_single_recal_day_pane_t_ParamLimits

0xcfcb,	// (0x000363cb) bg_notes_pane_ParamLimits

0xcfd9,	// (0x000363d9) list_notes_pane_ParamLimits

0x22b9,	// (0x0002b6b9) scroll_pane_cp06_ParamLimits

0xcffb,	// (0x000363fb) main_notes_pane_ParamLimits

0xc860,	// (0x00035c60) main_welc_pane

0xb099,	// (0x00034499) main_welc_body_pane_ParamLimits

0xb099,	// (0x00034499) main_welc_body_pane

0xb0b6,	// (0x000344b6) main_welc_opti_pane_ParamLimits

0xb0b6,	// (0x000344b6) main_welc_opti_pane

0xb0ff,	// (0x000344ff) main_welc_pane_t1_ParamLimits

0xb0ff,	// (0x000344ff) main_welc_pane_t1

0xb121,	// (0x00034521) main_welc_body_row_pane_ParamLimits

0xb121,	// (0x00034521) main_welc_body_row_pane

0xb138,	// (0x00034538) main_welc_opti_row_pane_ParamLimits

0xb138,	// (0x00034538) main_welc_opti_row_pane

0xc824,	// (0x00035c24) main_welc_opti_row_pane_g1

0xc82c,	// (0x00035c2c) main_welc_opti_row_pane_t1

0xc83b,	// (0x00035c3b) main_welc_body_row_pane_t1

0xc4c5,	// (0x000358c5) popup_notif_wgt_heading_pane

0xc4df,	// (0x000358df) aid_size_list_notif_wgt_del_ParamLimits

0xc4ec,	// (0x000358ec) list_notif_wgt_row_pane_g1_ParamLimits

0xc4f8,	// (0x000358f8) list_notif_wgt_row_pane_g2_ParamLimits

0xc504,	// (0x00035904) list_notif_wgt_row_pane_g3_ParamLimits

0xfe77,	// (0x00039277) list_notif_wgt_row_pane_g_ParamLimits

0xc511,	// (0x00035911) list_notif_wgt_row_pane_t1_ParamLimits

0xc526,	// (0x00035926) list_notif_wgt_row_pane_t2_ParamLimits

0xc538,	// (0x00035938) list_notif_wgt_row_pane_t3_ParamLimits

0xfe7e,	// (0x0003927e) list_notif_wgt_row_pane_t_ParamLimits

0xab9f,	// (0x00033f9f) listrow_wgtman_pane_g1_ParamLimits

0xabac,	// (0x00033fac) listrow_wgtman_pane_g2_ParamLimits

0xfea2,	// (0x000392a2) listrow_wgtman_pane_g_ParamLimits

0xabca,	// (0x00033fca) listrow_wgtman_pane_t1_ParamLimits

0xabe2,	// (0x00033fe2) listrow_wgtman_pane_t2_ParamLimits

0xfea7,	// (0x000392a7) listrow_wgtman_pane_t_ParamLimits

0xac08,	// (0x00034008) wait_bar_pane_cp09_ParamLimits

0xc860,	// (0x00035c60) bg_popup_heading_pane_cp02

0xc84a,	// (0x00035c4a) popup_notif_wgt_heading_pane_g1

0xc852,	// (0x00035c52) popup_notif_wgt_heading_pane_t1

0xc860,	// (0x00035c60) main_vids_pane

0xc860,	// (0x00035c60) vids_listscroll_pane

0xb148,	// (0x00034548) scroll_pane_cp040

0xc860,	// (0x00035c60) vids_list_pane

0xb153,	// (0x00034553) vids_list_double_pane_ParamLimits

0xb153,	// (0x00034553) vids_list_double_pane

0xb164,	// (0x00034564) vids_list_double_pane_g1

0xb16d,	// (0x0003456d) vids_list_double_pane_t1

0xb17c,	// (0x0003457c) vids_list_double_pane_t2

0x0001,

0xff2b,	// (0x0003932b) vids_list_double_pane_t

0xb1f2,	// (0x000345f2) main_ncimui_pane_ParamLimits

0x9035,	// (0x00032435) main_ncimui_pane_g1_ParamLimits

0x9041,	// (0x00032441) main_ncimui_pane_g2_ParamLimits

0x9041,	// (0x00032441) main_ncimui_pane_g2

0x0001,

0xfbd6,	// (0x00038fd6) main_ncimui_pane_g_ParamLimits

0xfbd6,	// (0x00038fd6) main_ncimui_pane_g

0xb0d5,	// (0x000344d5) main_welc_pane_g1_ParamLimits

0xb0d5,	// (0x000344d5) main_welc_pane_g1

0xb0ea,	// (0x000344ea) main_welc_pane_g2_ParamLimits

0xb0ea,	// (0x000344ea) main_welc_pane_g2

0x0001,

0xff26,	// (0x00039326) main_welc_pane_g_ParamLimits

0xff26,	// (0x00039326) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
