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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0007a8fe };

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
0x118e,	// (0x0007ba8c) Screen

0x119a,	// (0x0007ba98) application_window

0x11e0,	// (0x0007bade) area_bottom_pane_ParamLimits

0x11e0,	// (0x0007bade) area_bottom_pane

0x1219,	// (0x0007bb17) area_top_pane_ParamLimits

0x1219,	// (0x0007bb17) area_top_pane

0xa50d,	// (0x00084e0b) call_video_uplink_pane_ParamLimits

0xa50d,	// (0x00084e0b) call_video_uplink_pane

0x12a7,	// (0x0007bba5) main_pane_ParamLimits

0x12a7,	// (0x0007bba5) main_pane

0xcde7,	// (0x000876e5) context_pane

0x3d48,	// (0x0007e646) navi_pane

0x3d7a,	// (0x0007e678) popup_cale_events_window_ParamLimits

0x3d7a,	// (0x0007e678) popup_cale_events_window

0xcdfa,	// (0x000876f8) popup_mup_playback_window

0x3d92,	// (0x0007e690) signal_pane

0xacc0,	// (0x000855be) main_browser_pane

0xaef5,	// (0x000857f3) main_burst_pane

0x3ab0,	// (0x0007e3ae) main_calc_pane

0xcd87,	// (0x00087685) main_cale_day_pane

0x1700,	// (0x0007bffe) main_cale_month_pane

0xcd87,	// (0x00087685) main_cale_week_pane

0xaef5,	// (0x000857f3) main_call_pane

0xa92c,	// (0x0008522a) main_call_poc_pane

0xaef5,	// (0x000857f3) main_camera_pane

0xaef5,	// (0x000857f3) main_chi_dic_pane

0xb743,	// (0x00086041) main_clock_pane

0xa92c,	// (0x0008522a) main_fmradio_pane

0xaef5,	// (0x000857f3) main_graph_messa_pane

0xa92c,	// (0x0008522a) main_help_pane

0xacc0,	// (0x000855be) main_im_pane

0xab87,	// (0x00085485) main_image_pane_ParamLimits

0xab87,	// (0x00085485) main_image_pane

0xa92c,	// (0x0008522a) main_location2_pane

0xaef5,	// (0x000857f3) main_location_pane

0xab87,	// (0x00085485) main_messa_pane

0xa92c,	// (0x0008522a) main_mp2_pane

0xaef5,	// (0x000857f3) main_mp_pane

0xa92c,	// (0x0008522a) main_msg_pane

0xa92c,	// (0x0008522a) main_mup_eq_pane

0xa92c,	// (0x0008522a) main_mup_pane

0xacc0,	// (0x000855be) main_notes_pane

0xa92c,	// (0x0008522a) main_pec_pane

0xa92c,	// (0x0008522a) main_phob_pane

0xa92c,	// (0x0008522a) main_pinb_pane

0xa92c,	// (0x0008522a) main_postcard_pane

0xa92c,	// (0x0008522a) main_qdial_pane

0xaef5,	// (0x000857f3) main_skin_pane

0xa92c,	// (0x0008522a) main_smil2_pane

0xaef5,	// (0x000857f3) main_smil_pane

0xaef5,	// (0x000857f3) main_video_pane

0xaef5,	// (0x000857f3) main_video_tele_pane

0xab87,	// (0x00085485) main_viewer_pane_ParamLimits

0xab87,	// (0x00085485) main_viewer_pane

0xaef5,	// (0x000857f3) main_vorec_pane

0x3b04,	// (0x0007e402) popup_blid_sat_info_window_ParamLimits

0x3b04,	// (0x0007e402) popup_blid_sat_info_window

0x3b5c,	// (0x0007e45a) popup_dyc_status_message_window_ParamLimits

0x3b5c,	// (0x0007e45a) popup_dyc_status_message_window

0x3b74,	// (0x0007e472) popup_grid_large_graphic_window_ParamLimits

0x3b74,	// (0x0007e472) popup_grid_large_graphic_window

0x3c24,	// (0x0007e522) popup_loc_request_window_ParamLimits

0x3c24,	// (0x0007e522) popup_loc_request_window

0x3d20,	// (0x0007e61e) popup_wml_address_window_ParamLimits

0x3d20,	// (0x0007e61e) popup_wml_address_window

0x38ea,	// (0x0007e1e8) call_muted_g1

0x35df,	// (0x0007dedd) popup_call_audio_conf_window_ParamLimits

0x35df,	// (0x0007dedd) popup_call_audio_conf_window

0x38fe,	// (0x0007e1fc) popup_call_audio_first_window_ParamLimits

0x38fe,	// (0x0007e1fc) popup_call_audio_first_window

0x3974,	// (0x0007e272) popup_call_audio_in_window_ParamLimits

0x3974,	// (0x0007e272) popup_call_audio_in_window

0x39b0,	// (0x0007e2ae) popup_call_audio_out_window_ParamLimits

0x39b0,	// (0x0007e2ae) popup_call_audio_out_window

0x39ea,	// (0x0007e2e8) popup_call_audio_second_window_ParamLimits

0x39ea,	// (0x0007e2e8) popup_call_audio_second_window

0x3a40,	// (0x0007e33e) popup_call_audio_wait_window_ParamLimits

0x3a40,	// (0x0007e33e) popup_call_audio_wait_window

0x3a75,	// (0x0007e373) popup_number_entry_window_ParamLimits

0x3a75,	// (0x0007e373) popup_number_entry_window

0x142e,	// (0x0007bd2c) bg_popup_call_pane_cp05_ParamLimits

0x142e,	// (0x0007bd2c) bg_popup_call_pane_cp05

0xa539,	// (0x00084e37) popup_number_entry_window_t1

0xa54c,	// (0x00084e4a) popup_number_entry_window_t2

0xa55e,	// (0x00084e5c) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x0008993e) popup_number_entry_window_t

0xa570,	// (0x00084e6e) text_title_cp2

0xa583,	// (0x00084e81) bg_popup_call_pane_cp_ParamLimits

0xa583,	// (0x00084e81) bg_popup_call_pane_cp

0xa591,	// (0x00084e8f) call_thumbnail_pane

0xa599,	// (0x00084e97) popup_call_audio_in_window_g1_ParamLimits

0xa599,	// (0x00084e97) popup_call_audio_in_window_g1

0xa5a5,	// (0x00084ea3) popup_call_audio_in_window_g2_ParamLimits

0xa5a5,	// (0x00084ea3) popup_call_audio_in_window_g2

0xa5b1,	// (0x00084eaf) popup_call_audio_in_window_g3_ParamLimits

0xa5b1,	// (0x00084eaf) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x00089947) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x00089947) popup_call_audio_in_window_g

0xa5bd,	// (0x00084ebb) popup_call_audio_in_window_t1_ParamLimits

0xa5bd,	// (0x00084ebb) popup_call_audio_in_window_t1

0xa5d9,	// (0x00084ed7) popup_call_audio_in_window_t2_ParamLimits

0xa5d9,	// (0x00084ed7) popup_call_audio_in_window_t2

0xa5f5,	// (0x00084ef3) popup_call_audio_in_window_t3_ParamLimits

0xa5f5,	// (0x00084ef3) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x0008994e) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x0008994e) popup_call_audio_in_window_t

0xa583,	// (0x00084e81) bg_popup_call_pane_cp01_ParamLimits

0xa583,	// (0x00084e81) bg_popup_call_pane_cp01

0xa591,	// (0x00084e8f) call_thumbnail_pane_cp02

0xa608,	// (0x00084f06) call_type_pane_cp022

0xa610,	// (0x00084f0e) popup_call_audio_out_window_g1_ParamLimits

0xa610,	// (0x00084f0e) popup_call_audio_out_window_g1

0xa622,	// (0x00084f20) popup_call_audio_out_window_g2_ParamLimits

0xa622,	// (0x00084f20) popup_call_audio_out_window_g2

0xa62e,	// (0x00084f2c) popup_call_audio_out_window_g3_ParamLimits

0xa62e,	// (0x00084f2c) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x00089955) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x00089955) popup_call_audio_out_window_g

0xa640,	// (0x00084f3e) popup_call_audio_out_window_t1_ParamLimits

0xa640,	// (0x00084f3e) popup_call_audio_out_window_t1

0xa658,	// (0x00084f56) popup_call_audio_out_window_t2_ParamLimits

0xa658,	// (0x00084f56) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x0008995c) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x0008995c) popup_call_audio_out_window_t

0xa66d,	// (0x00084f6b) bg_popup_call_pane_ParamLimits

0xa66d,	// (0x00084f6b) bg_popup_call_pane

0x1483,	// (0x0007bd81) call_thumbnail_pane_cp_ParamLimits

0x1483,	// (0x0007bd81) call_thumbnail_pane_cp

0xa6f1,	// (0x00084fef) call_type_pane_cp01_ParamLimits

0xa6f1,	// (0x00084fef) call_type_pane_cp01

0xa735,	// (0x00085033) popup_call_audio_first_window_g1_ParamLimits

0xa735,	// (0x00085033) popup_call_audio_first_window_g1

0xa781,	// (0x0008507f) popup_call_audio_first_window_g2_ParamLimits

0xa781,	// (0x0008507f) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x00089961) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x00089961) popup_call_audio_first_window_g

0xa7c5,	// (0x000850c3) popup_call_audio_first_window_t1_ParamLimits

0xa7c5,	// (0x000850c3) popup_call_audio_first_window_t1

0xa871,	// (0x0008516f) popup_call_audio_first_window_t4_ParamLimits

0xa871,	// (0x0008516f) popup_call_audio_first_window_t4

0xa8fd,	// (0x000851fb) popup_call_audio_first_window_t5_ParamLimits

0xa8fd,	// (0x000851fb) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x00089966) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x00089966) popup_call_audio_first_window_t

0xa92c,	// (0x0008522a) bg_popup_call_pane_cp02

0xa936,	// (0x00085234) call_type_pane_cp023

0xa93e,	// (0x0008523c) popup_call_audio_wait_window_g1

0xa946,	// (0x00085244) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x0008996d) popup_call_audio_wait_window_g

0xa94e,	// (0x0008524c) popup_call_audio_wait_window_t3

0xa95c,	// (0x0008525a) bg_popup_call_pane_cp03_ParamLimits

0xa95c,	// (0x0008525a) bg_popup_call_pane_cp03

0xa9bc,	// (0x000852ba) call_thumbnail_pane_cp011_ParamLimits

0xa9bc,	// (0x000852ba) call_thumbnail_pane_cp011

0xa9c8,	// (0x000852c6) call_type_pane_cp034_ParamLimits

0xa9c8,	// (0x000852c6) call_type_pane_cp034

0xaa04,	// (0x00085302) popup_call_audio_second_window_g1_ParamLimits

0xaa04,	// (0x00085302) popup_call_audio_second_window_g1

0xaa40,	// (0x0008533e) popup_call_audio_second_window_g2_ParamLimits

0xaa40,	// (0x0008533e) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x00089972) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x00089972) popup_call_audio_second_window_g

0xaa7c,	// (0x0008537a) popup_call_audio_second_window_t1_ParamLimits

0xaa7c,	// (0x0008537a) popup_call_audio_second_window_t1

0xaafd,	// (0x000853fb) popup_call_audio_second_window_t2_ParamLimits

0xaafd,	// (0x000853fb) popup_call_audio_second_window_t2

0xab33,	// (0x00085431) popup_call_audio_second_window_t3_ParamLimits

0xab33,	// (0x00085431) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x00089977) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x00089977) popup_call_audio_second_window_t

0xa92c,	// (0x0008522a) bg_popup_call_pane_cp04

0xab69,	// (0x00085467) list_conf_pane

0xab71,	// (0x0008546f) popup_call_audio_conf_window_t1

0xab7f,	// (0x0008547d) call_thumbnail_pane_g1

0xab87,	// (0x00085485) bg_pinb_pane_ParamLimits

0xab87,	// (0x00085485) bg_pinb_pane

0xab95,	// (0x00085493) find_pinb_pane

0xab87,	// (0x00085485) listscroll_pinb_pane_ParamLimits

0xab87,	// (0x00085485) listscroll_pinb_pane

0xab9f,	// (0x0008549d) pinb_bg_pane_g1

0xab9f,	// (0x0008549d) pinb_bg_pane_g2

0xab9f,	// (0x0008549d) pinb_bg_pane_g3

0xab9f,	// (0x0008549d) pinb_bg_pane_g4

0xab9f,	// (0x0008549d) pinb_bg_pane_g5

0xab9f,	// (0x0008549d) pinb_bg_pane_g6

0xab9f,	// (0x0008549d) pinb_bg_pane_g7

0xab9f,	// (0x0008549d) pinb_bg_pane_g8

0xab9f,	// (0x0008549d) pinb_bg_pane_g9

0xab9f,	// (0x0008549d) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x0008997e) pinb_bg_pane_g

0x11a6,	// (0x0007baa4) grid_pinb_pane

0x11a6,	// (0x0007baa4) list_pinb_pane

0xa52b,	// (0x00084e29) scroll_pane_cp01_ParamLimits

0xa52b,	// (0x00084e29) scroll_pane_cp01

0xaba9,	// (0x000854a7) find_pinb_pane_g1_ParamLimits

0xaba9,	// (0x000854a7) find_pinb_pane_g1

0xabc1,	// (0x000854bf) find_pinb_pane_t1

0xabd3,	// (0x000854d1) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x00089998) find_pinb_pane_t

0xabe8,	// (0x000854e6) input_focus_pane_cp01_ParamLimits

0xabe8,	// (0x000854e6) input_focus_pane_cp01

0xabf4,	// (0x000854f2) cell_pinb_pane_ParamLimits

0xabf4,	// (0x000854f2) cell_pinb_pane

0xac02,	// (0x00085500) cell_pinb_pane_g1_ParamLimits

0xac02,	// (0x00085500) cell_pinb_pane_g1

0xac10,	// (0x0008550e) cell_pinb_pane_g2_ParamLimits

0xac10,	// (0x0008550e) cell_pinb_pane_g2

0xac10,	// (0x0008550e) cell_pinb_pane_g3_ParamLimits

0xac10,	// (0x0008550e) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x0008999d) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x0008999d) cell_pinb_pane_g

0xa92c,	// (0x0008522a) grid_highlight_pane_cp01

0xabf4,	// (0x000854f2) list_pinb_item_pane_ParamLimits

0xabf4,	// (0x000854f2) list_pinb_item_pane

0x11a6,	// (0x0007baa4) list_highlight_pane_cp02

0xac1e,	// (0x0008551c) list_pinb_item_pane_g1_ParamLimits

0xac1e,	// (0x0008551c) list_pinb_item_pane_g1

0xac10,	// (0x0008550e) list_pinb_item_pane_g2_ParamLimits

0xac10,	// (0x0008550e) list_pinb_item_pane_g2

0xac02,	// (0x00085500) list_pinb_item_pane_g3_ParamLimits

0xac02,	// (0x00085500) list_pinb_item_pane_g3

0xac10,	// (0x0008550e) list_pinb_item_pane_g4_ParamLimits

0xac10,	// (0x0008550e) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x000899a4) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x000899a4) list_pinb_item_pane_g

0xac2c,	// (0x0008552a) list_pinb_item_pane_t1_ParamLimits

0xac2c,	// (0x0008552a) list_pinb_item_pane_t1

0x14c5,	// (0x0007bdc3) calc_display_pane

0x14ea,	// (0x0007bde8) calc_paper_pane

0x150d,	// (0x0007be0b) grid_calc_pane

0x11a6,	// (0x0007baa4) bg_list_pane_cp01

0xac48,	// (0x00085546) clock_g1

0xac48,	// (0x00085546) clock_g2

0x0001,

0xf0af,	// (0x000899ad) clock_g

0xac52,	// (0x00085550) clock_t1_ParamLimits

0xac52,	// (0x00085550) clock_t1

0xac66,	// (0x00085564) clock_t2_ParamLimits

0xac66,	// (0x00085564) clock_t2

0xac66,	// (0x00085564) clock_t3_ParamLimits

0xac66,	// (0x00085564) clock_t3

0xac66,	// (0x00085564) clock_t4_ParamLimits

0xac66,	// (0x00085564) clock_t4

0xac52,	// (0x00085550) clock_t5_ParamLimits

0xac52,	// (0x00085550) clock_t5

0xac66,	// (0x00085564) clock_t6_ParamLimits

0xac66,	// (0x00085564) clock_t6

0xac66,	// (0x00085564) clock_t7_ParamLimits

0xac66,	// (0x00085564) clock_t7

0xac66,	// (0x00085564) clock_t8_ParamLimits

0xac66,	// (0x00085564) clock_t8

0xac66,	// (0x00085564) clock_t9_ParamLimits

0xac66,	// (0x00085564) clock_t9

0x0008,

0xf0b4,	// (0x000899b2) clock_t_ParamLimits

0xf0b4,	// (0x000899b2) clock_t

0x11a6,	// (0x0007baa4) popup_clock_analogue_window_cp02

0x11a6,	// (0x0007baa4) popup_clock_digital_window_cp01

0xa92c,	// (0x0008522a) listscroll_help_pane

0xa92c,	// (0x0008522a) phob_pre_status_pane

0xac7a,	// (0x00085578) grid_qdial_pane

0xab87,	// (0x00085485) listscroll_mce_pane

0xab87,	// (0x00085485) bg_notes_pane

0xac84,	// (0x00085582) list_notes_pane

0x153b,	// (0x0007be39) scroll_pane_cp06

0xac92,	// (0x00085590) bg_calc_paper_pane

0xaca6,	// (0x000855a4) list_calc_pane

0xacc0,	// (0x000855be) bg_calc_display_pane

0x154f,	// (0x0007be4d) calc_display_pane_t1

0x1561,	// (0x0007be5f) calc_display_pane_t2

0xaccc,	// (0x000855ca) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x000899c5) calc_display_pane_t

0x1573,	// (0x0007be71) cell_calc_pane_ParamLimits

0x1573,	// (0x0007be71) cell_calc_pane

0xacde,	// (0x000855dc) bg_calc_paper_pane_g1

0xacea,	// (0x000855e8) bg_calc_paper_pane_g2

0xacf6,	// (0x000855f4) bg_calc_paper_pane_g3

0xad02,	// (0x00085600) bg_calc_paper_pane_g4

0xad0e,	// (0x0008560c) bg_calc_paper_pane_g5

0x15a8,	// (0x0007bea6) bg_calc_paper_pane_g6

0x15b7,	// (0x0007beb5) bg_calc_paper_pane_g7

0x15c6,	// (0x0007bec4) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x000899cc) bg_calc_paper_pane_g

0x15d9,	// (0x0007bed7) calc_bg_paper_pane_g9

0x15ec,	// (0x0007beea) list_calc_item_pane_ParamLimits

0x15ec,	// (0x0007beea) list_calc_item_pane

0xad1a,	// (0x00085618) list_calc_item_pane_g1

0xad27,	// (0x00085625) list_calc_item_pane_t1_ParamLimits

0xad27,	// (0x00085625) list_calc_item_pane_t1

0x1601,	// (0x0007beff) list_calc_item_pane_t2_ParamLimits

0x1601,	// (0x0007beff) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x000899dd) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x000899dd) list_calc_item_pane_t

0xab9f,	// (0x0008549d) cell_calc_pane_g1

0xad39,	// (0x00085637) grid_highlight_pane_cp02

0xad5b,	// (0x00085659) bg_calc_display_pane_g1

0x1633,	// (0x0007bf31) bg_calc_display_pane_g2

0xe51d,	// (0x00088e1b) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x000899e7) bg_calc_display_pane_g

0x163d,	// (0x0007bf3b) cell_qdial_pane_ParamLimits

0x163d,	// (0x0007bf3b) cell_qdial_pane

0x1651,	// (0x0007bf4f) cell_qdial_pane_g1_ParamLimits

0x1651,	// (0x0007bf4f) cell_qdial_pane_g1

0x1667,	// (0x0007bf65) cell_qdial_pane_g2_ParamLimits

0x1667,	// (0x0007bf65) cell_qdial_pane_g2

0xad64,	// (0x00085662) cell_qdial_pane_g3_ParamLimits

0xad64,	// (0x00085662) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x000899ee) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x000899ee) cell_qdial_pane_g

0x168d,	// (0x0007bf8b) cell_qdial_pane_t1_ParamLimits

0x168d,	// (0x0007bf8b) cell_qdial_pane_t1

0x16a5,	// (0x0007bfa3) cell_qdial_pane_t2_ParamLimits

0x16a5,	// (0x0007bfa3) cell_qdial_pane_t2

0x16b8,	// (0x0007bfb6) cell_qdial_pane_t3_ParamLimits

0x16b8,	// (0x0007bfb6) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x000899f7) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x000899f7) cell_qdial_pane_t

0xa92c,	// (0x0008522a) grid_highlight_pane_cp04

0xad70,	// (0x0008566e) thumbnail_qdial_pane_ParamLimits

0xad70,	// (0x0008566e) thumbnail_qdial_pane

0xadcc,	// (0x000856ca) list_help_pane

0xadd5,	// (0x000856d3) scroll_pane_cp02

0x16cb,	// (0x0007bfc9) help_list_pane_t1_ParamLimits

0x16cb,	// (0x0007bfc9) help_list_pane_t1

0xadde,	// (0x000856dc) bg_notes_pane_g2

0xade6,	// (0x000856e4) bg_notes_pane_g3

0xadee,	// (0x000856ec) notes_bg_pane_g1

0xadf6,	// (0x000856f4) notes_bg_pane_g4

0xadfe,	// (0x000856fc) notes_bg_pane_g5

0xae06,	// (0x00085704) notes_bg_pane_g6

0xae0e,	// (0x0008570c) notes_bg_pane_g7

0xae16,	// (0x00085714) notes_bg_pane_g8

0xae1e,	// (0x0008571c) notes_bg_pane_g9

0x0006,

0xf117,	// (0x00089a15) notes_bg_pane_g

0x16ea,	// (0x0007bfe8) list_notes_text_pane_ParamLimits

0x16ea,	// (0x0007bfe8) list_notes_text_pane

0xae26,	// (0x00085724) list_notes_text_pane_g1

0xae2f,	// (0x0008572d) list_notes_text_pane_t1

0x1700,	// (0x0007bffe) listscroll_cale_week_pane

0x172c,	// (0x0007c02a) bg_cale_heading_pane

0xae57,	// (0x00085755) bg_cale_pane_cp01

0x1744,	// (0x0007c042) cale_week_corner_pane

0x1763,	// (0x0007c061) cale_week_day_heading_pane

0x1780,	// (0x0007c07e) cale_week_scroll_pane_g1

0x1793,	// (0x0007c091) cale_week_scroll_pane_g2

0x17ab,	// (0x0007c0a9) cale_week_scroll_pane_g3

0x17c3,	// (0x0007c0c1) cale_week_scroll_pane_g4

0x17db,	// (0x0007c0d9) cale_week_scroll_pane_g5

0x17fb,	// (0x0007c0f9) cale_week_scroll_pane_g6

0x181b,	// (0x0007c119) cale_week_scroll_pane_g7

0x183b,	// (0x0007c139) cale_week_scroll_pane_g8

0x185f,	// (0x0007c15d) cale_week_scroll_pane_g9

0x1877,	// (0x0007c175) cale_week_scroll_pane_g10

0x188f,	// (0x0007c18d) cale_week_scroll_pane_g11

0x18a7,	// (0x0007c1a5) cale_week_scroll_pane_g12

0x18bf,	// (0x0007c1bd) cale_week_scroll_pane_g13

0x18bf,	// (0x0007c1bd) cale_week_scroll_pane_g14

0x18bf,	// (0x0007c1bd) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00089a24) cale_week_scroll_pane_g

0x18fb,	// (0x0007c1f9) cale_week_time_pane

0x191f,	// (0x0007c21d) grid_cale_week_pane

0xae86,	// (0x00085784) scroll_pane_cp08

0x1945,	// (0x0007c243) cell_cale_week_pane_ParamLimits

0x1945,	// (0x0007c243) cell_cale_week_pane

0x19d3,	// (0x0007c2d1) cale_week_day_heading_pane_t1

0x19fd,	// (0x0007c2fb) cale_week_day_heading_pane_t2

0x1a2c,	// (0x0007c32a) cale_week_day_heading_pane_t3

0x1a5b,	// (0x0007c359) cale_week_day_heading_pane_t4

0x1a8a,	// (0x0007c388) cale_week_day_heading_pane_t5

0x1ac1,	// (0x0007c3bf) cale_week_day_heading_pane_t6

0x1af8,	// (0x0007c3f6) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x00089a45) cale_week_day_heading_pane_t

0xaea3,	// (0x000857a1) bg_cale_side_pane

0x1b22,	// (0x0007c420) cale_week_time_pane_t1

0x1b3c,	// (0x0007c43a) cale_week_time_pane_t2

0x1b56,	// (0x0007c454) cale_week_time_pane_t3

0x1b70,	// (0x0007c46e) cale_week_time_pane_t4

0x1b8a,	// (0x0007c488) cale_week_time_pane_t5

0x1ba4,	// (0x0007c4a2) cale_week_time_pane_t6

0x1bbe,	// (0x0007c4bc) cale_week_time_pane_t7

0x1bd8,	// (0x0007c4d6) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x00089a54) cale_week_time_pane_t

0x1bf8,	// (0x0007c4f6) cell_cale_week_pane_g2

0x1c1c,	// (0x0007c51a) cell_cale_week_pane_g3_ParamLimits

0x1c1c,	// (0x0007c51a) cell_cale_week_pane_g3

0xaeb1,	// (0x000857af) grid_highlight_pane_cp07

0xaeb9,	// (0x000857b7) listscroll_gms_pane

0xaec3,	// (0x000857c1) grid_gms_pane

0xaecc,	// (0x000857ca) listscroll_gms_pane_g1

0xaed4,	// (0x000857d2) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x00089a65) listscroll_gms_pane_g

0x1c34,	// (0x0007c532) scroll_pane_cp010

0x1c3f,	// (0x0007c53d) cell_gms_pane_ParamLimits

0x1c3f,	// (0x0007c53d) cell_gms_pane

0x1c51,	// (0x0007c54f) cell_gms_pane_g1

0xaedc,	// (0x000857da) cell_gms_pane_g2

0xae26,	// (0x00085724) cell_gms_pane_g3

0xaee4,	// (0x000857e2) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x00089a6a) cell_gms_pane_g

0xaeed,	// (0x000857eb) grid_highlight_pane_cp09

0x3872,	// (0x0007e170) phob_pre_status_pane_g1

0x387a,	// (0x0007e178) phob_pre_status_pane_g2

0x3882,	// (0x0007e180) phob_pre_status_pane_g3

0x388a,	// (0x0007e188) phob_pre_status_pane_g4

0x0004,

0xf529,	// (0x00089e27) phob_pre_status_pane_g

0x389a,	// (0x0007e198) phob_pre_status_pane_t1

0x38a8,	// (0x0007e1a6) phob_pre_status_pane_t2

0x38b8,	// (0x0007e1b6) phob_pre_status_pane_t3

0x0002,

0xf534,	// (0x00089e32) phob_pre_status_pane_t

0xaef5,	// (0x000857f3) bg_list_pane_cp05

0x1c61,	// (0x0007c55f) grid_vorec_pane

0x1c69,	// (0x0007c567) vorec_t1

0x1c77,	// (0x0007c575) vorec_t2

0x1c85,	// (0x0007c583) vorec_t3

0x1c93,	// (0x0007c591) vorec_t4

0xe9df,	// (0x000892dd) vorec_t5

0x95bc,	// (0x00083eba) vorec_t6

0x0004,

0xf175,	// (0x00089a73) vorec_t

0x95ca,	// (0x00083ec8) wait_bar_pane_cp01

0x1caf,	// (0x0007c5ad) cell_vorec_pane_ParamLimits

0x1caf,	// (0x0007c5ad) cell_vorec_pane

0xaefd,	// (0x000857fb) cell_vorec_pane_g1

0xa92c,	// (0x0008522a) grid_highlight_pane_cp05

0xa52b,	// (0x00084e29) cams_zoom_pane

0xa52b,	// (0x00084e29) image_vga_pane

0xac02,	// (0x00085500) main_camera_pane_g1

0xac02,	// (0x00085500) main_camera_pane_g2

0xac02,	// (0x00085500) main_camera_pane_g3

0xac02,	// (0x00085500) main_camera_pane_g4

0xac02,	// (0x00085500) main_camera_pane_g5

0xac02,	// (0x00085500) main_camera_pane_g6

0xac02,	// (0x00085500) main_camera_pane_g7

0x0007,

0xf180,	// (0x00089a7e) main_camera_pane_g

0xac52,	// (0x00085550) main_camera_pane_t1

0xac52,	// (0x00085550) main_camera_pane_t2

0x0001,

0xf191,	// (0x00089a8f) main_camera_pane_t

0x1cd6,	// (0x0007c5d4) cams_zoom_pane_cp_ParamLimits

0x1cd6,	// (0x0007c5d4) cams_zoom_pane_cp

0x1d0a,	// (0x0007c608) image_cif_pane_ParamLimits

0x1d0a,	// (0x0007c608) image_cif_pane

0x11a6,	// (0x0007baa4) image_subqcif_pane

0x1d1c,	// (0x0007c61a) main_video_pane_g1_ParamLimits

0x1d1c,	// (0x0007c61a) main_video_pane_g1

0x1d4a,	// (0x0007c648) main_video_pane_g2_ParamLimits

0x1d4a,	// (0x0007c648) main_video_pane_g2

0x1d84,	// (0x0007c682) main_video_pane_g3_ParamLimits

0x1d84,	// (0x0007c682) main_video_pane_g3

0x1d84,	// (0x0007c682) main_video_pane_g4_ParamLimits

0x1d84,	// (0x0007c682) main_video_pane_g4

0x1db8,	// (0x0007c6b6) main_video_pane_g5_ParamLimits

0x1db8,	// (0x0007c6b6) main_video_pane_g5

0xaf07,	// (0x00085805) main_video_pane_g6_ParamLimits

0xaf07,	// (0x00085805) main_video_pane_g6

0x0006,

0xf196,	// (0x00089a94) main_video_pane_g_ParamLimits

0xf196,	// (0x00089a94) main_video_pane_g

0x1dd4,	// (0x0007c6d2) main_video_pane_t1_ParamLimits

0x1dd4,	// (0x0007c6d2) main_video_pane_t1

0xac48,	// (0x00085546) cams_zoom_pane_g1

0xac48,	// (0x00085546) cams_zoom_pane_g2

0xac48,	// (0x00085546) cams_zoom_pane_g3

0xac48,	// (0x00085546) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00089aa3) cams_zoom_pane_g

0xa52b,	// (0x00084e29) grid_cams_pane

0xa52b,	// (0x00084e29) linegrid_cams_pane

0x1e18,	// (0x0007c716) cell_cams_pane_ParamLimits

0x1e18,	// (0x0007c716) cell_cams_pane

0x11a6,	// (0x0007baa4) cams_burst_image_pane

0xac48,	// (0x00085546) cell_cams_pane_g1

0x11a6,	// (0x0007baa4) grid_highlight_pane_cp03

0xab9f,	// (0x0008549d) mp_bg_pane_g1

0x11a6,	// (0x0007baa4) bg_list_pane_cp03

0x11a6,	// (0x0007baa4) bg_mp_pane

0x11a6,	// (0x0007baa4) grid_mp_pane

0xac48,	// (0x00085546) media_player_g1

0xb468,	// (0x00085d66) media_player_t1

0xb468,	// (0x00085d66) media_player_t2

0xb468,	// (0x00085d66) media_player_t3

0xb468,	// (0x00085d66) media_player_t4

0xb468,	// (0x00085d66) media_player_t5

0xb468,	// (0x00085d66) media_player_t6

0xb468,	// (0x00085d66) media_player_t7

0x0006,

0xf513,	// (0x00089e11) media_player_t

0x11a6,	// (0x0007baa4) wait_bar_pane_cp02

0xf4f8,	// (0x00089df6) main_usb_pane_t

0xb743,	// (0x00086041) cell_mp_pane

0xab9f,	// (0x0008549d) cell_mp_pane_g1

0xa92c,	// (0x0008522a) grid_highlight_pane_cp06

0xaf21,	// (0x0008581f) grid_skin_colour_pane

0xaf29,	// (0x00085827) list_highlight_pane_cp03

0x1e2d,	// (0x0007c72b) skin_g1

0xaf31,	// (0x0008582f) skin_t1

0xaf40,	// (0x0008583e) skin_t2

0x0001,

0xf1ce,	// (0x00089acc) skin_t

0x1e35,	// (0x0007c733) cell_skin_colour_pane_ParamLimits

0x1e35,	// (0x0007c733) cell_skin_colour_pane

0xaf4e,	// (0x0008584c) cell_skin_colour_pane_g1

0x1eae,	// (0x0007c7ac) call_video_g1_ParamLimits

0x1eae,	// (0x0007c7ac) call_video_g1

0x1eca,	// (0x0007c7c8) call_video_g2_ParamLimits

0x1eca,	// (0x0007c7c8) call_video_g2

0x0001,

0xf1d3,	// (0x00089ad1) call_video_g_ParamLimits

0xf1d3,	// (0x00089ad1) call_video_g

0x1f1c,	// (0x0007c81a) call_video_uplink_pane_cp1_ParamLimits

0x1f1c,	// (0x0007c81a) call_video_uplink_pane_cp1

0xaf60,	// (0x0008585e) call_video_uplink_pane_cp2

0x1fbb,	// (0x0007c8b9) video_down_crop_pane_ParamLimits

0x1fbb,	// (0x0007c8b9) video_down_crop_pane

0x20a4,	// (0x0007c9a2) video_down_pane_ParamLimits

0x20a4,	// (0x0007c9a2) video_down_pane

0xaf68,	// (0x00085866) video_down_subqcif_pane_ParamLimits

0xaf68,	// (0x00085866) video_down_subqcif_pane

0xaf80,	// (0x0008587e) video_down_subqcif_pane_cp_ParamLimits

0xaf80,	// (0x0008587e) video_down_subqcif_pane_cp

0xafa6,	// (0x000858a4) im_reading_pane_ParamLimits

0xafa6,	// (0x000858a4) im_reading_pane

0x21b4,	// (0x0007cab2) im_writing_pane_ParamLimits

0x21b4,	// (0x0007cab2) im_writing_pane

0x21ca,	// (0x0007cac8) im_reading_pane_t1

0xafc0,	// (0x000858be) list_im_pane

0xafd1,	// (0x000858cf) scroll_pane_cp07

0x2204,	// (0x0007cb02) im_writing_pane_t1_ParamLimits

0x2204,	// (0x0007cb02) im_writing_pane_t1

0xafea,	// (0x000858e8) im_writing_pane_t2_ParamLimits

0xafea,	// (0x000858e8) im_writing_pane_t2

0x0001,

0xf1dd,	// (0x00089adb) im_writing_pane_t_ParamLimits

0xf1dd,	// (0x00089adb) im_writing_pane_t

0xa92c,	// (0x0008522a) input_focus_pane_cp04

0xa92c,	// (0x0008522a) input_focus_pane_cp05

0x2219,	// (0x0007cb17) list_im_single_pane_ParamLimits

0x2219,	// (0x0007cb17) list_im_single_pane

0x222e,	// (0x0007cb2c) list_single_im_pane_t1

0xaef5,	// (0x000857f3) blid_accuracy_pane

0xaef5,	// (0x000857f3) blid_compass_pane

0xcd3f,	// (0x0008763d) main_location_t1

0xcd3f,	// (0x0008763d) main_location_t2

0xcd3f,	// (0x0008763d) main_location_t3

0x0002,

0xf522,	// (0x00089e20) main_location_t

0xa92c,	// (0x0008522a) aid_levels_location

0xab9f,	// (0x0008549d) blid_accuracy_pane_g1

0xab9f,	// (0x0008549d) blid_accuracy_pane_g2

0x0001,

0xf22c,	// (0x00089b2a) blid_accuracy_pane_g

0xb032,	// (0x00085930) wml_content_pane

0xb070,	// (0x0008596e) wml_button_pane_ParamLimits

0xb070,	// (0x0008596e) wml_button_pane

0x223d,	// (0x0007cb3b) wml_list_single_large_pane_ParamLimits

0x223d,	// (0x0007cb3b) wml_list_single_large_pane

0x2252,	// (0x0007cb50) wml_list_single_medium_pane_ParamLimits

0x2252,	// (0x0007cb50) wml_list_single_medium_pane

0x2269,	// (0x0007cb67) wml_list_single_small_pane_ParamLimits

0x2269,	// (0x0007cb67) wml_list_single_small_pane

0xb084,	// (0x00085982) wml_selection_box_pane_ParamLimits

0xb084,	// (0x00085982) wml_selection_box_pane

0xb097,	// (0x00085995) wml_list_single_pane_t1

0xb0a6,	// (0x000859a4) wml_list_single_medium_pane_t1

0xb0b5,	// (0x000859b3) wml_list_single_large_pane_t1

0xb0c4,	// (0x000859c2) input_focus_pane_cp02_ParamLimits

0xb0c4,	// (0x000859c2) input_focus_pane_cp02

0xb0d7,	// (0x000859d5) wml_selection_box_pane_g1

0xb0e0,	// (0x000859de) wml_selection_box_pane_t1_ParamLimits

0xb0e0,	// (0x000859de) wml_selection_box_pane_t1

0xab87,	// (0x00085485) bg_wml_button_pane_ParamLimits

0xab87,	// (0x00085485) bg_wml_button_pane

0xb0f8,	// (0x000859f6) wml_button_pane_g1

0xb100,	// (0x000859fe) wml_button_pane_t1

0xb0f8,	// (0x000859f6) wml_button_bg_pane_g1

0xb110,	// (0x00085a0e) wml_button_bg_pane_g2

0xb118,	// (0x00085a16) wml_button_bg_pane_g3

0xb120,	// (0x00085a1e) wml_button_bg_pane_g4

0xb128,	// (0x00085a26) wml_button_bg_pane_g5

0xb130,	// (0x00085a2e) wml_button_bg_pane_g6

0xb138,	// (0x00085a36) wml_button_bg_pane_g7

0xb140,	// (0x00085a3e) wml_button_bg_pane_g8

0xb148,	// (0x00085a46) wml_button_bg_pane_g9

0x0008,

0xf1e2,	// (0x00089ae0) wml_button_bg_pane_g

0x2282,	// (0x0007cb80) bg_list_pane_cp02

0xb150,	// (0x00085a4e) mce_header_pane_ParamLimits

0xb150,	// (0x00085a4e) mce_header_pane

0xb166,	// (0x00085a64) mce_icon_pane

0xb166,	// (0x00085a64) mce_image_pane

0xb16f,	// (0x00085a6d) mce_text_pane_ParamLimits

0xb16f,	// (0x00085a6d) mce_text_pane

0x228a,	// (0x0007cb88) scroll_pane_cp03

0xb068,	// (0x00085966) scroll_pane_cp04

0xb182,	// (0x00085a80) scroll_pane_cp05_ParamLimits

0xb182,	// (0x00085a80) scroll_pane_cp05

0x2294,	// (0x0007cb92) mce_header_field_pane_ParamLimits

0x2294,	// (0x0007cb92) mce_header_field_pane

0x22ab,	// (0x0007cba9) mce_header_field_pane_2_ParamLimits

0x22ab,	// (0x0007cba9) mce_header_field_pane_2

0x22c1,	// (0x0007cbbf) mce_header_field_pane_3

0x22c9,	// (0x0007cbc7) list_single_mce_message_pane_ParamLimits

0x22c9,	// (0x0007cbc7) list_single_mce_message_pane

0x22df,	// (0x0007cbdd) list_single_mce_smart_pane_ParamLimits

0x22df,	// (0x0007cbdd) list_single_mce_smart_pane

0xb18e,	// (0x00085a8c) input_focus_pane_cp03

0xb197,	// (0x00085a95) list_header_data_pane

0x2300,	// (0x0007cbfe) mce_header_field_pane_t1

0x2310,	// (0x0007cc0e) list_single_mce_header_pane_ParamLimits

0x2310,	// (0x0007cc0e) list_single_mce_header_pane

0xb19f,	// (0x00085a9d) list_single_mce_header_pane_t1

0xb1ae,	// (0x00085aac) list_single_mce_message_pane_g1

0xb1b6,	// (0x00085ab4) list_single_mce_message_pane_t1

0x234a,	// (0x0007cc48) bg_cale_heading_pane_cp01_ParamLimits

0x234a,	// (0x0007cc48) bg_cale_heading_pane_cp01

0xb1c4,	// (0x00085ac2) bg_cale_pane_cp02_ParamLimits

0xb1c4,	// (0x00085ac2) bg_cale_pane_cp02

0x2384,	// (0x0007cc82) cale_month_corner_pane

0x23a3,	// (0x0007cca1) cale_month_day_heading_pane_ParamLimits

0x23a3,	// (0x0007cca1) cale_month_day_heading_pane

0x23f5,	// (0x0007ccf3) cale_month_pane_g1_ParamLimits

0x23f5,	// (0x0007ccf3) cale_month_pane_g1

0x2424,	// (0x0007cd22) cale_month_pane_g2_ParamLimits

0x2424,	// (0x0007cd22) cale_month_pane_g2

0x2454,	// (0x0007cd52) cale_month_pane_g3_ParamLimits

0x2454,	// (0x0007cd52) cale_month_pane_g3

0x2490,	// (0x0007cd8e) cale_month_pane_g4_ParamLimits

0x2490,	// (0x0007cd8e) cale_month_pane_g4

0x24cc,	// (0x0007cdca) cale_month_pane_g5_ParamLimits

0x24cc,	// (0x0007cdca) cale_month_pane_g5

0x2514,	// (0x0007ce12) cale_month_pane_g6_ParamLimits

0x2514,	// (0x0007ce12) cale_month_pane_g6

0x2560,	// (0x0007ce5e) cale_month_pane_g7_ParamLimits

0x2560,	// (0x0007ce5e) cale_month_pane_g7

0x25b0,	// (0x0007ceae) cale_month_pane_g8_ParamLimits

0x25b0,	// (0x0007ceae) cale_month_pane_g8

0x2604,	// (0x0007cf02) cale_month_pane_g9_ParamLimits

0x2604,	// (0x0007cf02) cale_month_pane_g9

0x2656,	// (0x0007cf54) cale_month_pane_g10_ParamLimits

0x2656,	// (0x0007cf54) cale_month_pane_g10

0x26a8,	// (0x0007cfa6) cale_month_pane_g11_ParamLimits

0x26a8,	// (0x0007cfa6) cale_month_pane_g11

0x26fa,	// (0x0007cff8) cale_month_pane_g12_ParamLimits

0x26fa,	// (0x0007cff8) cale_month_pane_g12

0x274c,	// (0x0007d04a) cale_month_pane_g13_ParamLimits

0x274c,	// (0x0007d04a) cale_month_pane_g13

0x000c,

0xf1f5,	// (0x00089af3) cale_month_pane_g_ParamLimits

0xf1f5,	// (0x00089af3) cale_month_pane_g

0x279e,	// (0x0007d09c) cale_month_week_pane

0x27c2,	// (0x0007d0c0) grid_cale_month_pane_ParamLimits

0x27c2,	// (0x0007d0c0) grid_cale_month_pane

0x280b,	// (0x0007d109) cale_month_day_heading_pane_t1

0x284d,	// (0x0007d14b) cale_month_day_heading_pane_t2

0x2882,	// (0x0007d180) cale_month_day_heading_pane_t3

0x28b7,	// (0x0007d1b5) cale_month_day_heading_pane_t4

0x28f4,	// (0x0007d1f2) cale_month_day_heading_pane_t5

0x2939,	// (0x0007d237) cale_month_day_heading_pane_t6

0x297e,	// (0x0007d27c) cale_month_day_heading_pane_t7

0x0006,

0xf210,	// (0x00089b0e) cale_month_day_heading_pane_t

0xaea3,	// (0x000857a1) bg_cale_side_pane_cp01

0x29cb,	// (0x0007d2c9) cale_month_week_pane_t1

0x29e4,	// (0x0007d2e2) cale_month_week_pane_t2

0x29fd,	// (0x0007d2fb) cale_month_week_pane_t3

0x2a16,	// (0x0007d314) cale_month_week_pane_t4

0x2a2f,	// (0x0007d32d) cale_month_week_pane_t5

0x2a48,	// (0x0007d346) cale_month_week_pane_t6

0x0005,

0xf21f,	// (0x00089b1d) cale_month_week_pane_t

0x2a61,	// (0x0007d35f) cell_cale_month_pane_ParamLimits

0x2a61,	// (0x0007d35f) cell_cale_month_pane

0xb203,	// (0x00085b01) cell_cale_month_pane_g1

0x2b8f,	// (0x0007d48d) cell_cale_month_pane_t1_ParamLimits

0x2b8f,	// (0x0007d48d) cell_cale_month_pane_t1

0xaeb1,	// (0x000857af) grid_highlight_pane_cp08

0xab9f,	// (0x0008549d) main_smil_g1

0x2bbb,	// (0x0007d4b9) smil_status_pane

0xb20f,	// (0x00085b0d) smil_text_pane

0xcc17,	// (0x00087515) bg_popup_call3_rect_pane_g8

0xcc1f,	// (0x0008751d) bg_popup_call3_rect_pane_g9

0x0008,

0xf4a8,	// (0x00089da6) bg_popup_call3_rect_pane_g

0xce5c,	// (0x0008775a) smil_status_volume_pane_g1

0xb219,	// (0x00085b17) smil_status_pane_t1

0xce8f,	// (0x0008778d) volume_smil_pane

0xb230,	// (0x00085b2e) list_smil_text_pane

0x2bd0,	// (0x0007d4ce) scroll_pane_cp011

0x2bdb,	// (0x0007d4d9) smil_text_list_pane_t1_ParamLimits

0x2bdb,	// (0x0007d4d9) smil_text_list_pane_t1

0xb23a,	// (0x00085b38) aid_volume_smil_ParamLimits

0xb23a,	// (0x00085b38) aid_volume_smil

0xab9f,	// (0x0008549d) smil_volume_pane_g1

0xab9f,	// (0x0008549d) smil_volume_pane_g2

0x0001,

0xf22c,	// (0x00089b2a) smil_volume_pane_g

0x1700,	// (0x0007bffe) listscroll_cale_day_pane

0xb25c,	// (0x00085b5a) bg_cale_pane

0xb274,	// (0x00085b72) list_cale_pane

0xb297,	// (0x00085b95) scroll_pane_cp09

0xb2a8,	// (0x00085ba6) cale_bg_pane_g1

0xb2b0,	// (0x00085bae) cale_bg_pane_g2

0xb2b8,	// (0x00085bb6) cale_bg_pane_g3

0xb2c0,	// (0x00085bbe) cale_bg_pane_g4

0xb2c8,	// (0x00085bc6) cale_bg_pane_g5

0xb2d0,	// (0x00085bce) cale_bg_pane_g6

0xb2d8,	// (0x00085bd6) cale_bg_pane_g7

0xb2e0,	// (0x00085bde) cale_bg_pane_g8

0xb2e8,	// (0x00085be6) cale_bg_pane_g9

0x0008,

0xf231,	// (0x00089b2f) cale_bg_pane_g

0x2c27,	// (0x0007d525) list_cale_time_pane_ParamLimits

0x2c27,	// (0x0007d525) list_cale_time_pane

0xb2f0,	// (0x00085bee) list_cale_time_pane_g1_ParamLimits

0xb2f0,	// (0x00085bee) list_cale_time_pane_g1

0xb2fc,	// (0x00085bfa) list_cale_time_pane_g2_ParamLimits

0xb2fc,	// (0x00085bfa) list_cale_time_pane_g2

0x2c3d,	// (0x0007d53b) list_cale_time_pane_g3_ParamLimits

0x2c3d,	// (0x0007d53b) list_cale_time_pane_g3

0x2c4b,	// (0x0007d549) list_cale_time_pane_g4_ParamLimits

0x2c4b,	// (0x0007d549) list_cale_time_pane_g4

0x2c59,	// (0x0007d557) list_cale_time_pane_g5_ParamLimits

0x2c59,	// (0x0007d557) list_cale_time_pane_g5

0x0005,

0xf244,	// (0x00089b42) list_cale_time_pane_g_ParamLimits

0xf244,	// (0x00089b42) list_cale_time_pane_g

0xb316,	// (0x00085c14) list_cale_time_pane_t1_ParamLimits

0xb316,	// (0x00085c14) list_cale_time_pane_t1

0xb33e,	// (0x00085c3c) list_cale_time_pane_t2_ParamLimits

0xb33e,	// (0x00085c3c) list_cale_time_pane_t2

0x2ee6,	// (0x0007d7e4) aid_blid_cardinal_pane

0x2f24,	// (0x0007d822) compass_pane_t4

0xb366,	// (0x00085c64) list_cale_time_pane_t4_ParamLimits

0xb366,	// (0x00085c64) list_cale_time_pane_t4

0x2f32,	// (0x0007d830) compass_pane_t5

0x2f40,	// (0x0007d83e) compass_pane_t6

0x2f4e,	// (0x0007d84c) compass_pane_t7

0xb85d,	// (0x0008615b) navi_pane_cc_t1

0xba4c,	// (0x0008634a) aid_phob_thumbnail_center_pane

0x32c4,	// (0x0007dbc2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf251,	// (0x00089b4f) list_cale_time_pane_t_ParamLimits

0xf251,	// (0x00089b4f) list_cale_time_pane_t

0xa583,	// (0x00084e81) bg_popup_window_pane_cp02_ParamLimits

0xa583,	// (0x00084e81) bg_popup_window_pane_cp02

0xb38e,	// (0x00085c8c) heading_pane_cp01_ParamLimits

0xb38e,	// (0x00085c8c) heading_pane_cp01

0xb39a,	// (0x00085c98) loc_req_pane_ParamLimits

0xb39a,	// (0x00085c98) loc_req_pane

0xb3aa,	// (0x00085ca8) loc_type_pane_ParamLimits

0xb3aa,	// (0x00085ca8) loc_type_pane

0xb3bc,	// (0x00085cba) loc_type_pane_t1_ParamLimits

0xb3bc,	// (0x00085cba) loc_type_pane_t1

0xb3ce,	// (0x00085ccc) loc_type_pane_t2_ParamLimits

0xb3ce,	// (0x00085ccc) loc_type_pane_t2

0xb3e0,	// (0x00085cde) loc_type_pane_t3_ParamLimits

0xb3e0,	// (0x00085cde) loc_type_pane_t3

0x0002,

0xf258,	// (0x00089b56) loc_type_pane_t_ParamLimits

0xf258,	// (0x00089b56) loc_type_pane_t

0xb3f2,	// (0x00085cf0) list_loc_req_pane

0xb3fc,	// (0x00085cfa) scroll_pane_cp012

0x2c67,	// (0x0007d565) list_single_loc_request_popup_menu_pane_ParamLimits

0x2c67,	// (0x0007d565) list_single_loc_request_popup_menu_pane

0xb407,	// (0x00085d05) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb407,	// (0x00085d05) list_single_loc_request_popup_menu_pane_g1

0xb413,	// (0x00085d11) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb413,	// (0x00085d11) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf25f,	// (0x00089b5d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf25f,	// (0x00089b5d) list_single_loc_request_popup_menu_pane_g

0xb41f,	// (0x00085d1d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb41f,	// (0x00085d1d) list_single_loc_request_popup_menu_pane_t1

0xab87,	// (0x00085485) bg_popup_window_pane_cp03_ParamLimits

0xab87,	// (0x00085485) bg_popup_window_pane_cp03

0xb435,	// (0x00085d33) heading_loc_req_pane_ParamLimits

0xb435,	// (0x00085d33) heading_loc_req_pane

0x2c74,	// (0x0007d572) popup_dyc_status_message_window_g1_ParamLimits

0x2c74,	// (0x0007d572) popup_dyc_status_message_window_g1

0x2c88,	// (0x0007d586) popup_dyc_status_message_window_t1_ParamLimits

0x2c88,	// (0x0007d586) popup_dyc_status_message_window_t1

0x2c9d,	// (0x0007d59b) popup_dyc_status_message_window_t2_ParamLimits

0x2c9d,	// (0x0007d59b) popup_dyc_status_message_window_t2

0x2cb2,	// (0x0007d5b0) popup_dyc_status_message_window_t3_ParamLimits

0x2cb2,	// (0x0007d5b0) popup_dyc_status_message_window_t3

0x0002,

0xf264,	// (0x00089b62) popup_dyc_status_message_window_t_ParamLimits

0xf264,	// (0x00089b62) popup_dyc_status_message_window_t

0xa92c,	// (0x0008522a) bg_heading_pane_cp01

0xb441,	// (0x00085d3f) heading_loc_req_pane_g1

0xb449,	// (0x00085d47) heading_loc_req_pane_g2

0xb451,	// (0x00085d4f) heading_loc_req_pane_g3

0x0002,

0xf26b,	// (0x00089b69) heading_loc_req_pane_g

0xb459,	// (0x00085d57) heading_loc_req_pane_t1

0xb478,	// (0x00085d76) bg_popup_sub_pane_cp01_ParamLimits

0xb478,	// (0x00085d76) bg_popup_sub_pane_cp01

0xb486,	// (0x00085d84) popup_cale_events_window_g1_ParamLimits

0xb486,	// (0x00085d84) popup_cale_events_window_g1

0xb4a6,	// (0x00085da4) popup_cale_events_window_g2_ParamLimits

0xb4a6,	// (0x00085da4) popup_cale_events_window_g2

0x0001,

0xf28d,	// (0x00089b8b) popup_cale_events_window_g_ParamLimits

0xf28d,	// (0x00089b8b) popup_cale_events_window_g

0xb4c6,	// (0x00085dc4) popup_cale_events_window_t1_ParamLimits

0xb4c6,	// (0x00085dc4) popup_cale_events_window_t1

0xb4d8,	// (0x00085dd6) popup_cale_events_window_t2_ParamLimits

0xb4d8,	// (0x00085dd6) popup_cale_events_window_t2

0xb516,	// (0x00085e14) popup_cale_events_window_t3_ParamLimits

0xb516,	// (0x00085e14) popup_cale_events_window_t3

0xb550,	// (0x00085e4e) popup_cale_events_window_t4_ParamLimits

0xb550,	// (0x00085e4e) popup_cale_events_window_t4

0x0003,

0xf292,	// (0x00089b90) popup_cale_events_window_t_ParamLimits

0xf292,	// (0x00089b90) popup_cale_events_window_t

0x2cda,	// (0x0007d5d8) call_type_pane

0x2cea,	// (0x0007d5e8) popup_call_status_window_g1

0x2cfe,	// (0x0007d5fc) popup_call_status_window_g2

0x2d12,	// (0x0007d610) popup_call_status_window_g3

0x0002,

0xf29b,	// (0x00089b99) popup_call_status_window_g

0xb586,	// (0x00085e84) call_type_pane_g1

0xb58f,	// (0x00085e8d) call_type_pane_g2

0x0001,

0xf2a2,	// (0x00089ba0) call_type_pane_g

0xa92c,	// (0x0008522a) bg_popup_sub_pane_cp02

0xb598,	// (0x00085e96) listscroll_popup_wml_pane

0xb5a0,	// (0x00085e9e) list_wml_pane

0xb5aa,	// (0x00085ea8) scroll_pane_cp013

0xb5b5,	// (0x00085eb3) list_single_graphic_popup_wml_pane_ParamLimits

0xb5b5,	// (0x00085eb3) list_single_graphic_popup_wml_pane

0xab9f,	// (0x0008549d) list_single_graphic_popup_wml_pane_g1

0xb5c9,	// (0x00085ec7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2a7,	// (0x00089ba5) list_single_graphic_popup_wml_pane_g

0xb5d1,	// (0x00085ecf) list_single_graphic_popup_wml_pane_t1

0xb5e7,	// (0x00085ee5) aid_call_pane

0xab7f,	// (0x0008547d) popup_clock_analogue_window_g1

0xab7f,	// (0x0008547d) popup_clock_analogue_window_g2

0xb5ef,	// (0x00085eed) popup_clock_analogue_window_g3

0xb5ef,	// (0x00085eed) popup_clock_analogue_window_g4

0xab9f,	// (0x0008549d) popup_clock_analogue_window_g5

0x0004,

0xf2ac,	// (0x00089baa) popup_clock_analogue_window_g

0xb5f7,	// (0x00085ef5) popup_clock_analogue_window_t1

0xb605,	// (0x00085f03) clock_digital_number_pane_ParamLimits

0xb605,	// (0x00085f03) clock_digital_number_pane

0xb611,	// (0x00085f0f) clock_digital_number_pane_cp02_ParamLimits

0xb611,	// (0x00085f0f) clock_digital_number_pane_cp02

0xb61d,	// (0x00085f1b) clock_digital_number_pane_cp03_ParamLimits

0xb61d,	// (0x00085f1b) clock_digital_number_pane_cp03

0xb629,	// (0x00085f27) clock_digital_number_pane_cp04_ParamLimits

0xb629,	// (0x00085f27) clock_digital_number_pane_cp04

0xb635,	// (0x00085f33) clock_digital_separator_pane_ParamLimits

0xb635,	// (0x00085f33) clock_digital_separator_pane

0xb641,	// (0x00085f3f) popup_clock_digital_window_t1

0xab9f,	// (0x0008549d) clock_digital_number_pane_g1

0xab9f,	// (0x0008549d) clock_digital_number_pane_g2

0x0001,

0xf22c,	// (0x00089b2a) clock_digital_number_pane_g

0xab9f,	// (0x0008549d) clock_digital_separator_pane_g1

0xab9f,	// (0x0008549d) clock_digital_separator_pane_g2

0x0001,

0xf22c,	// (0x00089b2a) clock_digital_separator_pane_g

0xa92c,	// (0x0008522a) bg_popup_window_pane_cp04

0xb65e,	// (0x00085f5c) heading_pane_cp03

0xaef5,	// (0x000857f3) listscroll_popup_gms_pane

0xa92c,	// (0x0008522a) grid_large_graphic_popup_pane

0xb667,	// (0x00085f65) listscroll_popup_gms_pane_g1

0xb670,	// (0x00085f6e) listscroll_popup_gms_pane_g2

0x0001,

0xf2b7,	// (0x00089bb5) listscroll_popup_gms_pane_g

0xb679,	// (0x00085f77) scroll_pane_cp014

0xabf4,	// (0x000854f2) cell_large_graphic_popup_pane_ParamLimits

0xabf4,	// (0x000854f2) cell_large_graphic_popup_pane

0xac02,	// (0x00085500) cell_large_graphic_popup_pane_g1_ParamLimits

0xac02,	// (0x00085500) cell_large_graphic_popup_pane_g1

0xb682,	// (0x00085f80) cell_large_graphic_popup_pane_g2_ParamLimits

0xb682,	// (0x00085f80) cell_large_graphic_popup_pane_g2

0xb690,	// (0x00085f8e) cell_large_graphic_popup_pane_g3_ParamLimits

0xb690,	// (0x00085f8e) cell_large_graphic_popup_pane_g3

0xb69e,	// (0x00085f9c) cell_large_graphic_popup_pane_g4_ParamLimits

0xb69e,	// (0x00085f9c) cell_large_graphic_popup_pane_g4

0x0003,

0xf2bc,	// (0x00089bba) cell_large_graphic_popup_pane_g_ParamLimits

0xf2bc,	// (0x00089bba) cell_large_graphic_popup_pane_g

0xa92c,	// (0x0008522a) grid_highlight_pane_cp010

0xab9f,	// (0x0008549d) bg_popup_call_pane_g1

0xb6af,	// (0x00085fad) list_single_graphic_popup_conf_pane_ParamLimits

0xb6af,	// (0x00085fad) list_single_graphic_popup_conf_pane

0xb6c2,	// (0x00085fc0) list_highlight_pane_cp01

0xb6cb,	// (0x00085fc9) list_single_graphic_popup_conf_pane_g1

0xb6d3,	// (0x00085fd1) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2c5,	// (0x00089bc3) list_single_graphic_popup_conf_pane_g

0xb6db,	// (0x00085fd9) list_single_graphic_popup_conf_pane_t1

0xb6e9,	// (0x00085fe7) linegrid_cams_pane_g1

0x2d21,	// (0x0007d61f) linegrid_cams_pane_g2

0xae26,	// (0x00085724) linegrid_cams_pane_g3

0xb6f2,	// (0x00085ff0) linegrid_cams_pane_g4

0x2d2a,	// (0x0007d628) linegrid_cams_pane_g5

0x2d33,	// (0x0007d631) linegrid_cams_pane_g6

0xaee4,	// (0x000857e2) linegrid_cams_pane_g7

0x0006,

0xf2ca,	// (0x00089bc8) linegrid_cams_pane_g

0xb6fb,	// (0x00085ff9) popup_clock_analogue_window

0xb6fb,	// (0x00085ff9) popup_clock_digital_window

0xa92c,	// (0x0008522a) popup_phob_thumbnail_window

0xab9f,	// (0x0008549d) call_video_uplink_pane_g1

0xb704,	// (0x00086002) call_video_uplink_pane_g2

0x0001,

0xf2d9,	// (0x00089bd7) call_video_uplink_pane_g

0xb70c,	// (0x0008600a) video_uplink_pane

0xb714,	// (0x00086012) mce_image_pane_g1

0x2d3e,	// (0x0007d63c) mce_image_pane_g2

0x2d46,	// (0x0007d644) mce_image_pane_g3

0x2d4e,	// (0x0007d64c) mce_image_pane_g4

0x2d58,	// (0x0007d656) mce_image_pane_g5

0x0004,

0xf2de,	// (0x00089bdc) mce_image_pane_g

0xb71e,	// (0x0008601c) control_top_pane_stacon_cp01_ParamLimits

0xb71e,	// (0x0008601c) control_top_pane_stacon_cp01

0xb732,	// (0x00086030) uni_indicator_pane_stacon_cp01_ParamLimits

0xb732,	// (0x00086030) uni_indicator_pane_stacon_cp01

0xb743,	// (0x00086041) bg_popup_sub_pane_cp03

0x2d60,	// (0x0007d65e) chi_dic_find_pane

0x2d68,	// (0x0007d666) listscroll_chi_dic_pane

0x2d71,	// (0x0007d66f) main_pane_chidic_g1

0x2d84,	// (0x0007d682) chi_dic_find_pane_t1

0xb74d,	// (0x0008604b) find_chidic_pane

0xb756,	// (0x00086054) chi_dic_list_pane_ParamLimits

0xb756,	// (0x00086054) chi_dic_list_pane

0xb767,	// (0x00086065) scroll_pane_cp020

0x2d92,	// (0x0007d690) find_chidic_pane_t1

0xa92c,	// (0x0008522a) input_focus_pane_cp06

0x2da1,	// (0x0007d69f) list_chi_dic_pane_ParamLimits

0x2da1,	// (0x0007d69f) list_chi_dic_pane

0x2db3,	// (0x0007d6b1) list_chi_dic_pane_t1_ParamLimits

0x2db3,	// (0x0007d6b1) list_chi_dic_pane_t1

0xa92c,	// (0x0008522a) list_highlight_pane_cp020

0xb76f,	// (0x0008606d) bg_cale_heading_pane_g1

0x2dc6,	// (0x0007d6c4) bg_cale_heading_pane_g2

0x2dce,	// (0x0007d6cc) bg_cale_heading_pane_g3

0x2dd6,	// (0x0007d6d4) bg_cale_heading_pane_g4

0x2de0,	// (0x0007d6de) bg_cale_heading_pane_g5

0x2dea,	// (0x0007d6e8) bg_cale_heading_pane_g6

0x2df2,	// (0x0007d6f0) bg_cale_heading_pane_g7

0x2dfa,	// (0x0007d6f8) bg_cale_heading_pane_g8

0x2e04,	// (0x0007d702) bg_cale_heading_pane_g9

0x0008,

0xf2e9,	// (0x00089be7) bg_cale_heading_pane_g

0xb76f,	// (0x0008606d) bg_cale_side_pane_g1

0x2e0e,	// (0x0007d70c) bg_cale_side_pane_g2

0x2e16,	// (0x0007d714) bg_cale_side_pane_g3

0x2e1e,	// (0x0007d71c) bg_cale_side_pane_g4

0x2e26,	// (0x0007d724) bg_cale_side_pane_g5

0x2e2e,	// (0x0007d72c) bg_cale_side_pane_g6

0x2e36,	// (0x0007d734) bg_cale_side_pane_g7

0x2e3e,	// (0x0007d73c) bg_cale_side_pane_g8

0x2e46,	// (0x0007d744) bg_cale_side_pane_g9

0x0008,

0xf2fc,	// (0x00089bfa) bg_cale_side_pane_g

0x2e4e,	// (0x0007d74c) popup_call_status_window_ParamLimits

0x2e4e,	// (0x0007d74c) popup_call_status_window

0xb777,	// (0x00086075) stacon_top_pane

0xb77f,	// (0x0008607d) status_pane_ParamLimits

0xb77f,	// (0x0008607d) status_pane

0xb794,	// (0x00086092) status_small_pane

0xb79c,	// (0x0008609a) control_pane

0xa92c,	// (0x0008522a) stacon_bottom_pane

0xb7a4,	// (0x000860a2) list_single_mce_smart_pane_t1_ParamLimits

0xb7a4,	// (0x000860a2) list_single_mce_smart_pane_t1

0xb7b7,	// (0x000860b5) list_single_mce_smart_pane_t2_ParamLimits

0xb7b7,	// (0x000860b5) list_single_mce_smart_pane_t2

0x0001,

0xf30f,	// (0x00089c0d) list_single_mce_smart_pane_t_ParamLimits

0xf30f,	// (0x00089c0d) list_single_mce_smart_pane_t

0x2e95,	// (0x0007d793) compass_pane

0x2e9e,	// (0x0007d79c) main_location2_pane_t1

0x2eb0,	// (0x0007d7ae) main_location2_pane_t2

0x2ec2,	// (0x0007d7c0) main_location2_pane_t3

0x0003,

0xf314,	// (0x00089c12) main_location2_pane_t

0xb7d6,	// (0x000860d4) compass_pane_g1_ParamLimits

0xb7d6,	// (0x000860d4) compass_pane_g1

0x2f06,	// (0x0007d804) compass_pane_t1

0x2f15,	// (0x0007d813) compass_pane_t2

0x0005,

0xf31d,	// (0x00089c1b) compass_pane_t

0x2f5c,	// (0x0007d85a) text_secondary_cp61

0xb854,	// (0x00086152) navi_pane_cams_g5

0xb8d0,	// (0x000861ce) navi_pane_im_t1

0xb8de,	// (0x000861dc) navi_pane_mp_g1_ParamLimits

0xb8de,	// (0x000861dc) navi_pane_mp_g1

0xb8f2,	// (0x000861f0) navi_pane_mp_g2_ParamLimits

0xb8f2,	// (0x000861f0) navi_pane_mp_g2

0xb8fe,	// (0x000861fc) navi_pane_mp_g3_ParamLimits

0xb8fe,	// (0x000861fc) navi_pane_mp_g3

0x0002,

0xf331,	// (0x00089c2f) navi_pane_mp_g_ParamLimits

0xf331,	// (0x00089c2f) navi_pane_mp_g

0xb90a,	// (0x00086208) navi_pane_mp_t1

0xb918,	// (0x00086216) navi_pane_mp_t2

0x0002,

0xf338,	// (0x00089c36) navi_pane_mp_t

0xb983,	// (0x00086281) navi_pane_vt_g1

0xb90a,	// (0x00086208) navi_pane_vt_t1

0xb98b,	// (0x00086289) navi_slider_pane

0xaef5,	// (0x000857f3) zooming_pane

0xb99b,	// (0x00086299) navi_slider_pane_g1

0xb9a4,	// (0x000862a2) navi_slider_pane_g2

0x0006,

0xf33f,	// (0x00089c3d) navi_slider_pane_g

0xb9d1,	// (0x000862cf) aid_levels_zoom

0xb9d9,	// (0x000862d7) zooming_pane_g1

0xb9e1,	// (0x000862df) zooming_pane_g2

0xb9e1,	// (0x000862df) zooming_pane_g3

0x0002,

0xf34e,	// (0x00089c4c) zooming_pane_g

0xb9e9,	// (0x000862e7) level_10_zoom

0xb9f2,	// (0x000862f0) level_11_zoom

0xb9fb,	// (0x000862f9) level_1_zoom

0xba04,	// (0x00086302) level_2_zoom

0xba0d,	// (0x0008630b) level_3_zoom

0xba16,	// (0x00086314) level_4_zoom

0xba1f,	// (0x0008631d) level_5_zoom

0xba28,	// (0x00086326) level_6_zoom

0xba31,	// (0x0008632f) level_7_zoom

0xba3a,	// (0x00086338) level_8_zoom

0xba43,	// (0x00086341) level_9_zoom

0xba54,	// (0x00086352) popup_phob_thumbnail_window_g1

0xba5c,	// (0x0008635a) popup_phob_thumbnail_window_g2

0x0001,

0xf355,	// (0x00089c53) popup_phob_thumbnail_window_g

0x38c8,	// (0x0007e1c6) level_1_location

0x38d0,	// (0x0007e1ce) level_2_location

0x38d8,	// (0x0007e1d6) level_3_location

0x38e0,	// (0x0007e1de) level_4_location

0xaef5,	// (0x000857f3) level_5_location

0x2fad,	// (0x0007d8ab) mce_icon_pane_g1

0x2fb7,	// (0x0007d8b5) mce_icon_pane_g2

0x0001,

0xf35a,	// (0x00089c58) mce_icon_pane_g

0xba64,	// (0x00086362) main_mup_pane_g1_ParamLimits

0xba64,	// (0x00086362) main_mup_pane_g1

0xba64,	// (0x00086362) main_mup_pane_g2_ParamLimits

0xba64,	// (0x00086362) main_mup_pane_g2

0xba64,	// (0x00086362) main_mup_pane_g3_ParamLimits

0xba64,	// (0x00086362) main_mup_pane_g3

0xba64,	// (0x00086362) main_mup_pane_g4_ParamLimits

0xba64,	// (0x00086362) main_mup_pane_g4

0xba64,	// (0x00086362) main_mup_pane_g5_ParamLimits

0xba64,	// (0x00086362) main_mup_pane_g5

0xba64,	// (0x00086362) main_mup_pane_g6_ParamLimits

0xba64,	// (0x00086362) main_mup_pane_g6

0xba64,	// (0x00086362) main_mup_pane_g7_ParamLimits

0xba64,	// (0x00086362) main_mup_pane_g7

0xba64,	// (0x00086362) main_mup_pane_g8_ParamLimits

0xba64,	// (0x00086362) main_mup_pane_g8

0xba64,	// (0x00086362) main_mup_pane_g9_ParamLimits

0xba64,	// (0x00086362) main_mup_pane_g9

0xba64,	// (0x00086362) main_mup_pane_g10_ParamLimits

0xba64,	// (0x00086362) main_mup_pane_g10

0xba64,	// (0x00086362) main_mup_pane_g11_ParamLimits

0xba64,	// (0x00086362) main_mup_pane_g11

0xac02,	// (0x00085500) main_mup_pane_g12_ParamLimits

0xac02,	// (0x00085500) main_mup_pane_g12

0xba64,	// (0x00086362) main_mup_pane_g13_ParamLimits

0xba64,	// (0x00086362) main_mup_pane_g13

0x000c,

0xf35f,	// (0x00089c5d) main_mup_pane_g_ParamLimits

0xf35f,	// (0x00089c5d) main_mup_pane_g

0xba72,	// (0x00086370) main_mup_pane_t1_ParamLimits

0xba72,	// (0x00086370) main_mup_pane_t1

0xba72,	// (0x00086370) main_mup_pane_t2_ParamLimits

0xba72,	// (0x00086370) main_mup_pane_t2

0xba72,	// (0x00086370) main_mup_pane_t3_ParamLimits

0xba72,	// (0x00086370) main_mup_pane_t3

0xac52,	// (0x00085550) main_mup_pane_t4_ParamLimits

0xac52,	// (0x00085550) main_mup_pane_t4

0xac52,	// (0x00085550) main_mup_pane_t5_ParamLimits

0xac52,	// (0x00085550) main_mup_pane_t5

0xac66,	// (0x00085564) main_mup_pane_t6_ParamLimits

0xac66,	// (0x00085564) main_mup_pane_t6

0x0005,

0xf37a,	// (0x00089c78) main_mup_pane_t_ParamLimits

0xf37a,	// (0x00089c78) main_mup_pane_t

0xabf4,	// (0x000854f2) mup_progress_pane_ParamLimits

0xabf4,	// (0x000854f2) mup_progress_pane

0xba86,	// (0x00086384) mup_visualizer_pane_ParamLimits

0xba86,	// (0x00086384) mup_visualizer_pane

0xba86,	// (0x00086384) mup_volume_pane_ParamLimits

0xba86,	// (0x00086384) mup_volume_pane

0xac10,	// (0x0008550e) mup_visualizer_pane_g1_ParamLimits

0xac10,	// (0x0008550e) mup_visualizer_pane_g1

0xba94,	// (0x00086392) mup_visualizer_pane_g2_ParamLimits

0xba94,	// (0x00086392) mup_visualizer_pane_g2

0xac02,	// (0x00085500) mup_visualizer_pane_g3_ParamLimits

0xac02,	// (0x00085500) mup_visualizer_pane_g3

0x0002,

0xf387,	// (0x00089c85) mup_visualizer_pane_g_ParamLimits

0xf387,	// (0x00089c85) mup_visualizer_pane_g

0xac48,	// (0x00085546) mup_volume_pane_g1

0xac48,	// (0x00085546) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x000899ad) mup_volume_pane_g

0xac48,	// (0x00085546) mup_progress_pane_g1

0xac48,	// (0x00085546) mup_progress_pane_g2

0xac48,	// (0x00085546) mup_progress_pane_g3

0x0002,

0xf38e,	// (0x00089c8c) mup_progress_pane_g

0xa92c,	// (0x0008522a) bg_popup_window_pane_cp05

0xbaa2,	// (0x000863a0) heading_pane_cp02_ParamLimits

0xbaa2,	// (0x000863a0) heading_pane_cp02

0xbabc,	// (0x000863ba) list_popup_blid_pane

0xbac4,	// (0x000863c2) list_blid_sat_info_pane_ParamLimits

0xbac4,	// (0x000863c2) list_blid_sat_info_pane

0xbad7,	// (0x000863d5) list_blid_sat_info_pane_g1

0xbadf,	// (0x000863dd) list_blid_sat_info_pane_t1

0x30b7,	// (0x0007d9b5) mup_equalizer_pane_ParamLimits

0x30b7,	// (0x0007d9b5) mup_equalizer_pane

0x30d0,	// (0x0007d9ce) mup_equalizer_pane_cp1_ParamLimits

0x30d0,	// (0x0007d9ce) mup_equalizer_pane_cp1

0x30ed,	// (0x0007d9eb) mup_equalizer_pane_cp2_ParamLimits

0x30ed,	// (0x0007d9eb) mup_equalizer_pane_cp2

0x310a,	// (0x0007da08) mup_equalizer_pane_cp3_ParamLimits

0x310a,	// (0x0007da08) mup_equalizer_pane_cp3

0x312b,	// (0x0007da29) mup_equalizer_pane_cp4_ParamLimits

0x312b,	// (0x0007da29) mup_equalizer_pane_cp4

0x314c,	// (0x0007da4a) mup_equalizer_pane_cp5

0x3160,	// (0x0007da5e) mup_equalizer_pane_cp6

0x3174,	// (0x0007da72) mup_equalizer_pane_cp7

0xcc97,	// (0x00087595) bg_popup_call_poc_act_pane_g9

0xcc9f,	// (0x0008759d) bg_popup_call_poc_act_pane_g10

0xcca7,	// (0x000875a5) bg_popup_call_poc_act_pane_g11

0x000a,

0xab87,	// (0x00085485) mup_scale_pane

0xab9f,	// (0x0008549d) mup_scale_pane_g1

0xbaed,	// (0x000863eb) mup_scale_pane_g2

0x0006,

0xf3aa,	// (0x00089ca8) mup_scale_pane_g

0xbb11,	// (0x0008640f) msg_data_pane

0xbb19,	// (0x00086417) scroll_pane_cp017

0x09ac,	// (0x0007b2aa) bg_list_pane_cp04_ParamLimits

0x09ac,	// (0x0007b2aa) bg_list_pane_cp04

0xbb29,	// (0x00086427) msg_data_pane_g1

0x319a,	// (0x0007da98) msg_data_pane_g2

0x31a2,	// (0x0007daa0) msg_data_pane_g3

0x31aa,	// (0x0007daa8) msg_data_pane_g4

0x31b2,	// (0x0007dab0) msg_data_pane_g5

0x31ba,	// (0x0007dab8) msg_data_pane_g6

0x31c2,	// (0x0007dac0) msg_data_pane_g7

0x0006,

0xf3b9,	// (0x00089cb7) msg_data_pane_g

0x09ca,	// (0x0007b2c8) msg_text_pane_ParamLimits

0x09ca,	// (0x0007b2c8) msg_text_pane

0x31ca,	// (0x0007dac8) qrid_highlight_pane_cp011_ParamLimits

0x31ca,	// (0x0007dac8) qrid_highlight_pane_cp011

0xa92c,	// (0x0008522a) msg_body_pane

0xab87,	// (0x00085485) msg_header_pane

0xbb45,	// (0x00086443) input_focus_pane_cp07

0xbb66,	// (0x00086464) msg_header_pane_t1_ParamLimits

0xbb66,	// (0x00086464) msg_header_pane_t1

0xbb82,	// (0x00086480) msg_header_pane_t2_ParamLimits

0xbb82,	// (0x00086480) msg_header_pane_t2

0x0001,

0xf3cd,	// (0x00089ccb) msg_header_pane_t_ParamLimits

0xf3cd,	// (0x00089ccb) msg_header_pane_t

0xbba2,	// (0x000864a0) msg_body_pane_g1

0xbbaa,	// (0x000864a8) msg_body_pane_t1_ParamLimits

0xbbaa,	// (0x000864a8) msg_body_pane_t1

0xbbdb,	// (0x000864d9) msg_body_pane_t2_ParamLimits

0xbbdb,	// (0x000864d9) msg_body_pane_t2

0xbbed,	// (0x000864eb) msg_body_pane_t3_ParamLimits

0xbbed,	// (0x000864eb) msg_body_pane_t3

0x0002,

0xf3d2,	// (0x00089cd0) msg_body_pane_t_ParamLimits

0xf3d2,	// (0x00089cd0) msg_body_pane_t

0x321a,	// (0x0007db18) main_viewer_pane_g1_ParamLimits

0x321a,	// (0x0007db18) main_viewer_pane_g1

0x3228,	// (0x0007db26) main_viewer_pane_g2_ParamLimits

0x3228,	// (0x0007db26) main_viewer_pane_g2

0x3236,	// (0x0007db34) main_viewer_pane_g3_ParamLimits

0x3236,	// (0x0007db34) main_viewer_pane_g3

0x3245,	// (0x0007db43) main_viewer_pane_g4_ParamLimits

0x3245,	// (0x0007db43) main_viewer_pane_g4

0xbc17,	// (0x00086515) main_viewer_pane_g5_ParamLimits

0xbc17,	// (0x00086515) main_viewer_pane_g5

0xbc17,	// (0x00086515) main_viewer_pane_g7_ParamLimits

0xbc17,	// (0x00086515) main_viewer_pane_g7

0xbc29,	// (0x00086527) main_viewer_pane_g8_ParamLimits

0xbc29,	// (0x00086527) main_viewer_pane_g8

0x0007,

0xf3e2,	// (0x00089ce0) main_viewer_pane_g_ParamLimits

0xf3e2,	// (0x00089ce0) main_viewer_pane_g

0xbc41,	// (0x0008653f) viewer_content_pane_ParamLimits

0xbc41,	// (0x0008653f) viewer_content_pane

0x3281,	// (0x0007db7f) main_postcard_pane_g1_ParamLimits

0x3281,	// (0x0007db7f) main_postcard_pane_g1

0x3297,	// (0x0007db95) main_postcard_pane_g2_ParamLimits

0x3297,	// (0x0007db95) main_postcard_pane_g2

0x32ad,	// (0x0007dbab) main_postcard_pane_g3_ParamLimits

0x32ad,	// (0x0007dbab) main_postcard_pane_g3

0x0005,

0xf3f3,	// (0x00089cf1) main_postcard_pane_g_ParamLimits

0xf3f3,	// (0x00089cf1) main_postcard_pane_g

0x32c4,	// (0x0007dbc2) main_postcard_pane_g4

0xce6f,	// (0x0008776d) smil_status_volume_pane_g2

0x3307,	// (0x0007dc05) postcard_pane_ParamLimits

0x3307,	// (0x0007dc05) postcard_pane

0xbc4f,	// (0x0008654d) postcard_pane_g1_ParamLimits

0xbc4f,	// (0x0008654d) postcard_pane_g1

0x3349,	// (0x0007dc47) postcard_pane_g2_ParamLimits

0x3349,	// (0x0007dc47) postcard_pane_g2

0x3355,	// (0x0007dc53) postcard_pane_g3_ParamLimits

0x3355,	// (0x0007dc53) postcard_pane_g3

0xbc5d,	// (0x0008655b) postcard_pane_g4_ParamLimits

0xbc5d,	// (0x0008655b) postcard_pane_g4

0x3361,	// (0x0007dc5f) postcard_pane_g5_ParamLimits

0x3361,	// (0x0007dc5f) postcard_pane_g5

0x3376,	// (0x0007dc74) postcard_pane_g6_ParamLimits

0x3376,	// (0x0007dc74) postcard_pane_g6

0xbc4f,	// (0x0008654d) postcard_pane_g7_ParamLimits

0xbc4f,	// (0x0008654d) postcard_pane_g7

0x0006,

0xf400,	// (0x00089cfe) postcard_pane_g_ParamLimits

0xf400,	// (0x00089cfe) postcard_pane_g

0x338a,	// (0x0007dc88) main_mp2_pane_g1_ParamLimits

0x338a,	// (0x0007dc88) main_mp2_pane_g1

0x3396,	// (0x0007dc94) main_mp2_pane_g2_ParamLimits

0x3396,	// (0x0007dc94) main_mp2_pane_g2

0x33a2,	// (0x0007dca0) main_mp2_pane_g3_ParamLimits

0x33a2,	// (0x0007dca0) main_mp2_pane_g3

0x0002,

0xf40f,	// (0x00089d0d) main_mp2_pane_g_ParamLimits

0xf40f,	// (0x00089d0d) main_mp2_pane_g

0x33ae,	// (0x0007dcac) main_mp2_pane_t1_ParamLimits

0x33ae,	// (0x0007dcac) main_mp2_pane_t1

0x33c3,	// (0x0007dcc1) main_mp2_pane_t2_ParamLimits

0x33c3,	// (0x0007dcc1) main_mp2_pane_t2

0x33d5,	// (0x0007dcd3) main_mp2_pane_t3_ParamLimits

0x33d5,	// (0x0007dcd3) main_mp2_pane_t3

0x0002,

0xf416,	// (0x00089d14) main_mp2_pane_t_ParamLimits

0xf416,	// (0x00089d14) main_mp2_pane_t

0xa52b,	// (0x00084e29) pec_content_pane_ParamLimits

0xa52b,	// (0x00084e29) pec_content_pane

0x11a6,	// (0x0007baa4) scroll_pane_cp015

0xba86,	// (0x00086384) pec_attribute_pane_ParamLimits

0xba86,	// (0x00086384) pec_attribute_pane

0xac02,	// (0x00085500) pec_content_pane_g1_ParamLimits

0xac02,	// (0x00085500) pec_content_pane_g1

0xbc6b,	// (0x00086569) pec_content_pane_t1_ParamLimits

0xbc6b,	// (0x00086569) pec_content_pane_t1

0xbc7f,	// (0x0008657d) pec_content_pane_t2_ParamLimits

0xbc7f,	// (0x0008657d) pec_content_pane_t2

0x0001,

0xf41d,	// (0x00089d1b) pec_content_pane_t_ParamLimits

0xf41d,	// (0x00089d1b) pec_content_pane_t

0xabf4,	// (0x000854f2) list_single_graphic_pane_cp01_ParamLimits

0xabf4,	// (0x000854f2) list_single_graphic_pane_cp01

0xab87,	// (0x00085485) bg_popup_sub_pane_cp04

0xbc93,	// (0x00086591) popup_mup_playback_window_g1

0xbc9f,	// (0x0008659d) popup_mup_playback_window_t1

0xbcb4,	// (0x000865b2) popup_mup_playback_window_t2

0x0001,

0xf422,	// (0x00089d20) popup_mup_playback_window_t

0xbceb,	// (0x000865e9) main_image_pane_g1_ParamLimits

0xbceb,	// (0x000865e9) main_image_pane_g1

0xbd2e,	// (0x0008662c) scroll_pane_cp018_ParamLimits

0xbd2e,	// (0x0008662c) scroll_pane_cp018

0xbd46,	// (0x00086644) scroll_pane_cp016_ParamLimits

0xbd46,	// (0x00086644) scroll_pane_cp016

0x349f,	// (0x0007dd9d) smil2_image_pane_ParamLimits

0x349f,	// (0x0007dd9d) smil2_image_pane

0x34cf,	// (0x0007ddcd) smil2_root_pane_ParamLimits

0x34cf,	// (0x0007ddcd) smil2_root_pane

0x3507,	// (0x0007de05) smil2_text_pane_ParamLimits

0x3507,	// (0x0007de05) smil2_text_pane

0x11a6,	// (0x0007baa4) bg_list_pane_cp06

0x11a6,	// (0x0007baa4) grid_radio_pane

0xa92c,	// (0x0008522a) bg_popup_window_pane_cp06

0xb468,	// (0x00085d66) main_fmradio_pane_t1

0xccef,	// (0x000875ed) heading_pane_cp04

0xb468,	// (0x00085d66) main_fmradio_pane_t2

0xccf7,	// (0x000875f5) popup_cale_lunar_info_window_g1

0xb468,	// (0x00085d66) main_fmradio_pane_t3

0xccff,	// (0x000875fd) popup_cale_lunar_info_window_g2

0xb468,	// (0x00085d66) main_fmradio_pane_t4

0x0001,

0xb468,	// (0x00085d66) main_fmradio_pane_t5

0x0004,

0xf505,	// (0x00089e03) popup_cale_lunar_info_window_g

0xf282,	// (0x00089b80) main_fmradio_pane_t

0x11a6,	// (0x0007baa4) wait_bar_pane_cp03

0xabf4,	// (0x000854f2) cell_fmradio_pane_ParamLimits

0xabf4,	// (0x000854f2) cell_fmradio_pane

0xac02,	// (0x00085500) cell_fmradio_pane_g1_ParamLimits

0xac02,	// (0x00085500) cell_fmradio_pane_g1

0x11a6,	// (0x0007baa4) grid_highlight_pane_cp011

0xbd7a,	// (0x00086678) poc_content_pane_ParamLimits

0xbd7a,	// (0x00086678) poc_content_pane

0xbd8c,	// (0x0008668a) scroll_pane_cp019

0x3587,	// (0x0007de85) popup_call_poc_act_window_ParamLimits

0x3587,	// (0x0007de85) popup_call_poc_act_window

0x35ab,	// (0x0007dea9) popup_call_poc_inact_window_ParamLimits

0x35ab,	// (0x0007dea9) popup_call_poc_inact_window

0xf4ce,	// (0x00089dcc) bg_popup_call_poc_act_pane_g

0xccaf,	// (0x000875ad) bg_popup_call_poc_inact_pane_g1

0xccb7,	// (0x000875b5) bg_popup_call_poc_inact_pane_g2

0xbd94,	// (0x00086692) popup_call_poc_act_window_g2

0xccbf,	// (0x000875bd) bg_popup_call_poc_inact_pane_g3

0xcc3f,	// (0x0008753d) bg_popup_call_poc_inact_pane_g4

0xccc7,	// (0x000875c5) bg_popup_call_poc_inact_pane_g5

0xbd9c,	// (0x0008669a) popup_call_poc_act_window_t1_ParamLimits

0xbd9c,	// (0x0008669a) popup_call_poc_act_window_t1

0xbdc4,	// (0x000866c2) popup_call_poc_act_window_t2_ParamLimits

0xbdc4,	// (0x000866c2) popup_call_poc_act_window_t2

0xbdec,	// (0x000866ea) popup_call_poc_act_window_t3_ParamLimits

0xbdec,	// (0x000866ea) popup_call_poc_act_window_t3

0xbe14,	// (0x00086712) popup_call_poc_act_window_t4_ParamLimits

0xbe14,	// (0x00086712) popup_call_poc_act_window_t4

0x0003,

0xf437,	// (0x00089d35) popup_call_poc_act_window_t_ParamLimits

0xf437,	// (0x00089d35) popup_call_poc_act_window_t

0xcccf,	// (0x000875cd) bg_popup_call_poc_inact_pane_g6

0xccd7,	// (0x000875d5) bg_popup_call_poc_inact_pane_g7

0xccdf,	// (0x000875dd) bg_popup_call_poc_inact_pane_g8

0xbe26,	// (0x00086724) popup_call_poc_inact_window_g2

0xcce7,	// (0x000875e5) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4e5,	// (0x00089de3) bg_popup_call_poc_inact_pane_g

0xbe2e,	// (0x0008672c) popup_call_poc_inact_window_t1_ParamLimits

0xbe2e,	// (0x0008672c) popup_call_poc_inact_window_t1

0xbe43,	// (0x00086741) popup_call_poc_inact_window_t2_ParamLimits

0xbe43,	// (0x00086741) popup_call_poc_inact_window_t2

0xbe58,	// (0x00086756) popup_call_poc_inact_window_t3_ParamLimits

0xbe58,	// (0x00086756) popup_call_poc_inact_window_t3

0x0002,

0xf440,	// (0x00089d3e) popup_call_poc_inact_window_t_ParamLimits

0xf440,	// (0x00089d3e) popup_call_poc_inact_window_t

0xcde7,	// (0x000876e5) context_pane_ParamLimits

0x3d92,	// (0x0007e690) signal_pane_ParamLimits

0xaef5,	// (0x000857f3) main_call2_pane

0xcdc0,	// (0x000876be) popup_phob_thumbnail2_window_ParamLimits

0xcdc0,	// (0x000876be) popup_phob_thumbnail2_window

0xbbff,	// (0x000864fd) aid_hotspot_pointer_arrow_pane

0xbc07,	// (0x00086505) aid_hotspot_pointer_hand_pane

0x3892,	// (0x0007e190) phob_pre_status_pane_g5

0xa52b,	// (0x00084e29) cams_zoom_pane_ParamLimits

0xa52b,	// (0x00084e29) image_vga_pane_ParamLimits

0xac02,	// (0x00085500) main_camera_pane_g1_ParamLimits

0xac02,	// (0x00085500) main_camera_pane_g2_ParamLimits

0xac02,	// (0x00085500) main_camera_pane_g3_ParamLimits

0xac02,	// (0x00085500) main_camera_pane_g4_ParamLimits

0xac02,	// (0x00085500) main_camera_pane_g5_ParamLimits

0xac02,	// (0x00085500) main_camera_pane_g6_ParamLimits

0xac02,	// (0x00085500) main_camera_pane_g7_ParamLimits

0xf180,	// (0x00089a7e) main_camera_pane_g_ParamLimits

0xac52,	// (0x00085550) main_camera_pane_t1_ParamLimits

0xac52,	// (0x00085550) main_camera_pane_t2_ParamLimits

0xf191,	// (0x00089a8f) main_camera_pane_t_ParamLimits

0xab87,	// (0x00085485) bg_popup_preview_window_pane_cp01_ParamLimits

0xab87,	// (0x00085485) bg_popup_preview_window_pane_cp01

0xbe6d,	// (0x0008676b) popup_phob_thumbnail2_window_g1_ParamLimits

0xbe6d,	// (0x0008676b) popup_phob_thumbnail2_window_g1

0xa92c,	// (0x0008522a) call2_cli_visual_pane

0x35df,	// (0x0007dedd) popup_call2_audio_conf_window_ParamLimits

0x35df,	// (0x0007dedd) popup_call2_audio_conf_window

0x35ff,	// (0x0007defd) popup_call2_audio_first_window_ParamLimits

0x35ff,	// (0x0007defd) popup_call2_audio_first_window

0x3695,	// (0x0007df93) popup_call2_audio_in_window_ParamLimits

0x3695,	// (0x0007df93) popup_call2_audio_in_window

0x36dd,	// (0x0007dfdb) popup_call2_audio_out_window_ParamLimits

0x36dd,	// (0x0007dfdb) popup_call2_audio_out_window

0x3747,	// (0x0007e045) popup_call2_audio_second_window_ParamLimits

0x3747,	// (0x0007e045) popup_call2_audio_second_window

0x37ad,	// (0x0007e0ab) popup_call2_audio_wait_window_ParamLimits

0x37ad,	// (0x0007e0ab) popup_call2_audio_wait_window

0xa92c,	// (0x0008522a) bg_popup_call2_act_pane_cp03

0xab69,	// (0x00085467) list_conf_pane_cp

0xbe79,	// (0x00086777) popup_call2_audio_conf_window_t1

0xbe87,	// (0x00086785) list_single_graphic_popup_conf2_pane_ParamLimits

0xbe87,	// (0x00086785) list_single_graphic_popup_conf2_pane

0xb6c2,	// (0x00085fc0) list_highlight_pane_cp04

0xbe9a,	// (0x00086798) list_single_graphic_popup_conf2_pane_g1

0xb6d3,	// (0x00085fd1) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf447,	// (0x00089d45) list_single_graphic_popup_conf2_pane_g

0xbea4,	// (0x000867a2) list_single_graphic_popup_conf2_pane_t1

0xbeb2,	// (0x000867b0) bg_popup_call2_act_pane_cp01_ParamLimits

0xbeb2,	// (0x000867b0) bg_popup_call2_act_pane_cp01

0xbf3c,	// (0x0008683a) call_type_pane_cp05_ParamLimits

0xbf3c,	// (0x0008683a) call_type_pane_cp05

0xbf90,	// (0x0008688e) popup_call2_audio_second_window_g1_ParamLimits

0xbf90,	// (0x0008688e) popup_call2_audio_second_window_g1

0xbfe4,	// (0x000868e2) popup_call2_audio_second_window_g2_ParamLimits

0xbfe4,	// (0x000868e2) popup_call2_audio_second_window_g2

0x0002,

0xf44c,	// (0x00089d4a) popup_call2_audio_second_window_g_ParamLimits

0xf44c,	// (0x00089d4a) popup_call2_audio_second_window_g

0xc049,	// (0x00086947) popup_call2_audio_second_window_t1_ParamLimits

0xc049,	// (0x00086947) popup_call2_audio_second_window_t1

0xc104,	// (0x00086a02) popup_call2_audio_second_window_t2_ParamLimits

0xc104,	// (0x00086a02) popup_call2_audio_second_window_t2

0xc157,	// (0x00086a55) popup_call2_audio_second_window_t3_ParamLimits

0xc157,	// (0x00086a55) popup_call2_audio_second_window_t3

0x0003,

0xf453,	// (0x00089d51) popup_call2_audio_second_window_t_ParamLimits

0xf453,	// (0x00089d51) popup_call2_audio_second_window_t

0xa92c,	// (0x0008522a) bg_popup_call2_in_pane_cp02

0xa936,	// (0x00085234) call_type_pane_cp04

0x37e7,	// (0x0007e0e5) popup_call2_audio_wait_window_g1

0x37ef,	// (0x0007e0ed) popup_call2_audio_wait_window_g2

0x0001,

0xf45c,	// (0x00089d5a) popup_call2_audio_wait_window_g

0xa94e,	// (0x0008524c) popup_call2_audio_wait_window_t3

0xc24a,	// (0x00086b48) bg_popup_call2_act_pane_ParamLimits

0xc24a,	// (0x00086b48) bg_popup_call2_act_pane

0xc30a,	// (0x00086c08) call_type_pane_cp03_ParamLimits

0xc30a,	// (0x00086c08) call_type_pane_cp03

0xc36e,	// (0x00086c6c) popup_call2_audio_first_window_g1_ParamLimits

0xc36e,	// (0x00086c6c) popup_call2_audio_first_window_g1

0xc3de,	// (0x00086cdc) popup_call2_audio_first_window_g2_ParamLimits

0xc3de,	// (0x00086cdc) popup_call2_audio_first_window_g2

0xc442,	// (0x00086d40) popup_call2_audio_first_window_g3_ParamLimits

0xc442,	// (0x00086d40) popup_call2_audio_first_window_g3

0x0004,

0xf461,	// (0x00089d5f) popup_call2_audio_first_window_g_ParamLimits

0xf461,	// (0x00089d5f) popup_call2_audio_first_window_g

0xc4ca,	// (0x00086dc8) popup_call2_audio_first_window_t1_ParamLimits

0xc4ca,	// (0x00086dc8) popup_call2_audio_first_window_t1

0xc5cd,	// (0x00086ecb) popup_call2_audio_first_window_t4_ParamLimits

0xc5cd,	// (0x00086ecb) popup_call2_audio_first_window_t4

0xc6b0,	// (0x00086fae) popup_call2_audio_first_window_t5_ParamLimits

0xc6b0,	// (0x00086fae) popup_call2_audio_first_window_t5

0x0003,

0xf46c,	// (0x00089d6a) popup_call2_audio_first_window_t_ParamLimits

0xf46c,	// (0x00089d6a) popup_call2_audio_first_window_t

0xab7f,	// (0x0008547d) bg_popup_call2_act_pane_g1

0xcd07,	// (0x00087605) popup_cale_lunar_info_window_t1

0xcd15,	// (0x00087613) popup_cale_lunar_info_window_t2

0xcd23,	// (0x00087621) popup_cale_lunar_info_window_t3

0xa92c,	// (0x0008522a) bg_popup_call2_bubble_pane

0xc7b1,	// (0x000870af) bg_popup_call2_in_pane_cp01_ParamLimits

0xc7b1,	// (0x000870af) bg_popup_call2_in_pane_cp01

0xa608,	// (0x00084f06) call_type_pane_cp02

0x37f7,	// (0x0007e0f5) popup_call2_audio_out_window_g1_ParamLimits

0x37f7,	// (0x0007e0f5) popup_call2_audio_out_window_g1

0xc7f9,	// (0x000870f7) popup_call2_audio_out_window_g2_ParamLimits

0xc7f9,	// (0x000870f7) popup_call2_audio_out_window_g2

0x3823,	// (0x0007e121) popup_call2_audio_out_window_g3_ParamLimits

0x3823,	// (0x0007e121) popup_call2_audio_out_window_g3

0x0003,

0xf475,	// (0x00089d73) popup_call2_audio_out_window_g_ParamLimits

0xf475,	// (0x00089d73) popup_call2_audio_out_window_g

0xc830,	// (0x0008712e) popup_call2_audio_out_window_t1_ParamLimits

0xc830,	// (0x0008712e) popup_call2_audio_out_window_t1

0xc88f,	// (0x0008718d) popup_call2_audio_out_window_t2_ParamLimits

0xc88f,	// (0x0008718d) popup_call2_audio_out_window_t2

0xc8e3,	// (0x000871e1) popup_call2_audio_out_window_t3_ParamLimits

0xc8e3,	// (0x000871e1) popup_call2_audio_out_window_t3

0xc8f9,	// (0x000871f7) popup_call2_audio_out_window_t4_ParamLimits

0xc8f9,	// (0x000871f7) popup_call2_audio_out_window_t4

0xc90f,	// (0x0008720d) popup_call2_audio_out_window_t5_ParamLimits

0xc90f,	// (0x0008720d) popup_call2_audio_out_window_t5

0x0005,

0xf47e,	// (0x00089d7c) popup_call2_audio_out_window_t_ParamLimits

0xf47e,	// (0x00089d7c) popup_call2_audio_out_window_t

0xc973,	// (0x00087271) bg_popup_call2_in_pane_ParamLimits

0xc973,	// (0x00087271) bg_popup_call2_in_pane

0xc9cf,	// (0x000872cd) popup_call2_audio_in_window_g1_ParamLimits

0xc9cf,	// (0x000872cd) popup_call2_audio_in_window_g1

0xca07,	// (0x00087305) popup_call2_audio_in_window_g2_ParamLimits

0xca07,	// (0x00087305) popup_call2_audio_in_window_g2

0xca3f,	// (0x0008733d) popup_call2_audio_in_window_g3_ParamLimits

0xca3f,	// (0x0008733d) popup_call2_audio_in_window_g3

0x0003,

0xf48b,	// (0x00089d89) popup_call2_audio_in_window_g_ParamLimits

0xf48b,	// (0x00089d89) popup_call2_audio_in_window_g

0xca97,	// (0x00087395) popup_call2_audio_in_window_t1_ParamLimits

0xca97,	// (0x00087395) popup_call2_audio_in_window_t1

0xcb17,	// (0x00087415) popup_call2_audio_in_window_t2_ParamLimits

0xcb17,	// (0x00087415) popup_call2_audio_in_window_t2

0xcb97,	// (0x00087495) popup_call2_audio_in_window_t3_ParamLimits

0xcb97,	// (0x00087495) popup_call2_audio_in_window_t3

0xcbb1,	// (0x000874af) popup_call2_audio_in_window_t4_ParamLimits

0xcbb1,	// (0x000874af) popup_call2_audio_in_window_t4

0xcbc3,	// (0x000874c1) popup_call2_audio_in_window_t5_ParamLimits

0xcbc3,	// (0x000874c1) popup_call2_audio_in_window_t5

0xcbd5,	// (0x000874d3) popup_call2_audio_in_window_t6_ParamLimits

0xcbd5,	// (0x000874d3) popup_call2_audio_in_window_t6

0x0005,

0xf494,	// (0x00089d92) popup_call2_audio_in_window_t_ParamLimits

0xf494,	// (0x00089d92) popup_call2_audio_in_window_t

0xab7f,	// (0x0008547d) bg_popup_call2_in_pane_g1

0xcd31,	// (0x0008762f) popup_cale_lunar_info_window_t4

0x0003,

0xf50a,	// (0x00089e08) popup_cale_lunar_info_window_t

0xab87,	// (0x00085485) bg_popup_call2_rect_pane_ParamLimits

0xab87,	// (0x00085485) bg_popup_call2_rect_pane

0xa92c,	// (0x0008522a) call2_cli_visual_graphic_pane

0xa92c,	// (0x0008522a) call2_cli_visual_text_pane

0xce82,	// (0x00087780) smil_status_volume_pane_g3

0x0002,

0xab9f,	// (0x0008549d) call2_cli_visual_graphic_pane_g1

0xab9f,	// (0x0008549d) call2_cli_visual_graphic_pane_g2

0xab9f,	// (0x0008549d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a1,	// (0x00089d9f) call2_cli_visual_graphic_pane_g

0xcbe7,	// (0x000874e5) bg_popup_call2_rect_pane_g1

0xadc4,	// (0x000856c2) bg_popup_call2_rect_pane_g2

0xcbef,	// (0x000874ed) bg_popup_call2_rect_pane_g3

0xcbf7,	// (0x000874f5) bg_popup_call2_rect_pane_g4

0xcbff,	// (0x000874fd) bg_popup_call2_rect_pane_g5

0xcc07,	// (0x00087505) bg_popup_call2_rect_pane_g6

0xcc0f,	// (0x0008750d) bg_popup_call2_rect_pane_g7

0xcc17,	// (0x00087515) bg_popup_call2_rect_pane_g8

0xcc1f,	// (0x0008751d) bg_popup_call2_rect_pane_g9

0x0008,

0xf4a8,	// (0x00089da6) bg_popup_call2_rect_pane_g

0xcc27,	// (0x00087525) bg_popup_call2_bubble_pane_g1

0xcc2f,	// (0x0008752d) bg_popup_call2_bubble_pane_g2

0xcc37,	// (0x00087535) bg_popup_call2_bubble_pane_g3

0xcc3f,	// (0x0008753d) bg_popup_call2_bubble_pane_g4

0xcc47,	// (0x00087545) bg_popup_call2_bubble_pane_g5

0xcc4f,	// (0x0008754d) bg_popup_call2_bubble_pane_g6

0xcc57,	// (0x00087555) bg_popup_call2_bubble_pane_g7

0xcc5f,	// (0x0008755d) bg_popup_call2_bubble_pane_g8

0xcc67,	// (0x00087565) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4bb,	// (0x00089db9) bg_popup_call2_bubble_pane_g

0x1712,	// (0x0007c010) aid_cale_week_size_cell_pane

0x1cc2,	// (0x0007c5c0) aid_cams_cif_uncrop_pane_ParamLimits

0x1cc2,	// (0x0007c5c0) aid_cams_cif_uncrop_pane

0xa52b,	// (0x00084e29) aid_cams_size_cell_ParamLimits

0xa52b,	// (0x00084e29) aid_cams_size_cell

0xa52b,	// (0x00084e29) grid_cams_pane_ParamLimits

0xa52b,	// (0x00084e29) linegrid_cams_pane_ParamLimits

0x1ee0,	// (0x0007c7de) call_video_pane_t1

0x1efe,	// (0x0007c7fc) call_video_pane_t2

0x0001,

0xf1d8,	// (0x00089ad6) call_video_pane_t

0x2324,	// (0x0007cc22) aid_cale_month_size_cell_pane_ParamLimits

0x2324,	// (0x0007cc22) aid_cale_month_size_cell_pane

0xf54e,	// (0x00089e4c) smil_status_volume_pane_g

0xce8f,	// (0x0008778d) volume_smil_pane_ParamLimits

0xa4c6,	// (0x00084dc4) aid_popup2_width_pane

0x1677,	// (0x0007bf75) cell_qdial_pane_g4_ParamLimits

0x1677,	// (0x0007bf75) cell_qdial_pane_g4

0x2ee6,	// (0x0007d7e4) aid_blid_cardinal_pane_ParamLimits

0x2ef2,	// (0x0007d7f0) aid_blid_destination_pane_ParamLimits

0x2ef2,	// (0x0007d7f0) aid_blid_destination_pane

0xab87,	// (0x00085485) bg_popup_call_poc_act_pane_ParamLimits

0xab87,	// (0x00085485) bg_popup_call_poc_act_pane

0xab87,	// (0x00085485) bg_popup_call_poc_inact_pane_ParamLimits

0xab87,	// (0x00085485) bg_popup_call_poc_inact_pane

0xcc6f,	// (0x0008756d) bg_popup_call_poc_act_pane_g1

0xcc77,	// (0x00087575) bg_popup_call_poc_act_pane_g2

0xcc7f,	// (0x0008757d) bg_popup_call_poc_act_pane_g3

0xcc3f,	// (0x0008753d) bg_popup_call_poc_act_pane_g4

0xcc47,	// (0x00087545) bg_popup_call_poc_act_pane_g5

0xcc87,	// (0x00087585) bg_popup_call_poc_act_pane_g6

0xcc57,	// (0x00087555) bg_popup_call_poc_act_pane_g7

0xcc8f,	// (0x0008758d) bg_popup_call_poc_act_pane_g8

0xa92c,	// (0x0008522a) main_usb_pane

0xcd9b,	// (0x00087699) popup_cale_lunar_info_window

0x21ca,	// (0x0007cac8) im_reading_pane_t1_ParamLimits

0xafc0,	// (0x000858be) list_im_pane_ParamLimits

0xafd1,	// (0x000858cf) scroll_pane_cp07_ParamLimits

0xa92c,	// (0x0008522a) grid_highlight_pane_cp012

0xab87,	// (0x00085485) mup_scale_pane_ParamLimits

0xac02,	// (0x00085500) main_usb_pane_g1_ParamLimits

0xac02,	// (0x00085500) main_usb_pane_g1

0xac02,	// (0x00085500) main_usb_pane_g2_ParamLimits

0xac02,	// (0x00085500) main_usb_pane_g2

0x0001,

0xf182,	// (0x00089a80) main_usb_pane_g_ParamLimits

0xf182,	// (0x00089a80) main_usb_pane_g

0xac52,	// (0x00085550) main_usb_pane_t1_ParamLimits

0xac52,	// (0x00085550) main_usb_pane_t1

0xac52,	// (0x00085550) main_usb_pane_t2_ParamLimits

0xac52,	// (0x00085550) main_usb_pane_t2

0xac52,	// (0x00085550) main_usb_pane_t3_ParamLimits

0xac52,	// (0x00085550) main_usb_pane_t3

0xac52,	// (0x00085550) main_usb_pane_t4_ParamLimits

0xac52,	// (0x00085550) main_usb_pane_t4

0xac52,	// (0x00085550) main_usb_pane_t5_ParamLimits

0xac52,	// (0x00085550) main_usb_pane_t5

0xac52,	// (0x00085550) main_usb_pane_t6_ParamLimits

0xac52,	// (0x00085550) main_usb_pane_t6

0x0005,

0xf4f8,	// (0x00089df6) main_usb_pane_t_ParamLimits

0x2e95,	// (0x0007d793) aid_text_placing

0x2e9e,	// (0x0007d79c) main_location2_pane_t1_ParamLimits

0x2eb0,	// (0x0007d7ae) main_location2_pane_t2_ParamLimits

0x2ec2,	// (0x0007d7c0) main_location2_pane_t3_ParamLimits

0x2ed4,	// (0x0007d7d2) main_location2_pane_t4_ParamLimits

0x2ed4,	// (0x0007d7d2) main_location2_pane_t4

0xf314,	// (0x00089c12) main_location2_pane_t_ParamLimits

0xabb5,	// (0x000854b3) find_pinb_pane_g2_ParamLimits

0xabb5,	// (0x000854b3) find_pinb_pane_g2

0x0001,

0xf095,	// (0x00089993) find_pinb_pane_g_ParamLimits

0xf095,	// (0x00089993) find_pinb_pane_g

0xabc1,	// (0x000854bf) find_pinb_pane_t1_ParamLimits

0xabd3,	// (0x000854d1) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x00089998) find_pinb_pane_t_ParamLimits

0xa92c,	// (0x0008522a) main_call3_pane

0x280b,	// (0x0007d109) cale_month_day_heading_pane_t1_ParamLimits

0x284d,	// (0x0007d14b) cale_month_day_heading_pane_t2_ParamLimits

0x2882,	// (0x0007d180) cale_month_day_heading_pane_t3_ParamLimits

0x28b7,	// (0x0007d1b5) cale_month_day_heading_pane_t4_ParamLimits

0x28f4,	// (0x0007d1f2) cale_month_day_heading_pane_t5_ParamLimits

0x2939,	// (0x0007d237) cale_month_day_heading_pane_t6_ParamLimits

0x297e,	// (0x0007d27c) cale_month_day_heading_pane_t7_ParamLimits

0xf210,	// (0x00089b0e) cale_month_day_heading_pane_t_ParamLimits

0xb227,	// (0x00085b25) smil_status_volume_pane

0x3325,	// (0x0007dc23) postcard_address_pane_ParamLimits

0x3325,	// (0x0007dc23) postcard_address_pane

0x3337,	// (0x0007dc35) postcard_message_pane_ParamLimits

0x3337,	// (0x0007dc35) postcard_message_pane

0x384f,	// (0x0007e14d) call2_cli_visual_pane_t1_ParamLimits

0x384f,	// (0x0007e14d) call2_cli_visual_pane_t1

0xcebc,	// (0x000877ba) postcard_message_pane_t1_ParamLimits

0xcebc,	// (0x000877ba) postcard_message_pane_t1

0xcea4,	// (0x000877a2) postcard_address_pane_t1_ParamLimits

0xcea4,	// (0x000877a2) postcard_address_pane_t1

0x3f45,	// (0x0007e843) popup_call3_audio_in_window_ParamLimits

0x3f45,	// (0x0007e843) popup_call3_audio_in_window

0x3dd0,	// (0x0007e6ce) bg_popup_call3_in_pane_ParamLimits

0x3dd0,	// (0x0007e6ce) bg_popup_call3_in_pane

0x3e46,	// (0x0007e744) popup_call3_audio_in_window_g1_ParamLimits

0x3e46,	// (0x0007e744) popup_call3_audio_in_window_g1

0x3e66,	// (0x0007e764) popup_call3_audio_in_window_g2_ParamLimits

0x3e66,	// (0x0007e764) popup_call3_audio_in_window_g2

0x3e86,	// (0x0007e784) popup_call3_audio_in_window_g3_ParamLimits

0x3e86,	// (0x0007e784) popup_call3_audio_in_window_g3

0x0003,

0xf555,	// (0x00089e53) popup_call3_audio_in_window_g_ParamLimits

0xf555,	// (0x00089e53) popup_call3_audio_in_window_g

0x3eb7,	// (0x0007e7b5) popup_call3_audio_in_window_t1_ParamLimits

0x3eb7,	// (0x0007e7b5) popup_call3_audio_in_window_t1

0x3ef5,	// (0x0007e7f3) popup_call3_audio_in_window_t2_ParamLimits

0x3ef5,	// (0x0007e7f3) popup_call3_audio_in_window_t2

0x3f33,	// (0x0007e831) popup_call3_audio_in_window_t3_ParamLimits

0x3f33,	// (0x0007e831) popup_call3_audio_in_window_t3

0x0002,

0xf55e,	// (0x00089e5c) popup_call3_audio_in_window_t_ParamLimits

0xf55e,	// (0x00089e5c) popup_call3_audio_in_window_t

0xaef5,	// (0x000857f3) bg_popup_call3_rect_pane

0xcbe7,	// (0x000874e5) bg_popup_call3_rect_pane_g1

0xadc4,	// (0x000856c2) bg_popup_call3_rect_pane_g2

0xcbef,	// (0x000874ed) bg_popup_call3_rect_pane_g3

0xcbf7,	// (0x000874f5) bg_popup_call3_rect_pane_g4

0xcbff,	// (0x000874fd) bg_popup_call3_rect_pane_g5

0xcc07,	// (0x00087505) bg_popup_call3_rect_pane_g6

0xcc0f,	// (0x0008750d) bg_popup_call3_rect_pane_g7

0x11a6,	// (0x0007baa4) mup_visualizer_osc_pane

0x11a6,	// (0x0007baa4) mup_visualizer_spec_pane

0x3e00,	// (0x0007e6fe) call3_video_qcif_pane_ParamLimits

0x3e00,	// (0x0007e6fe) call3_video_qcif_pane

0x3e13,	// (0x0007e711) call3_video_qcif_uncrop_pane_ParamLimits

0x3e13,	// (0x0007e711) call3_video_qcif_uncrop_pane

0x3e21,	// (0x0007e71f) call3_video_subqcif_pane_ParamLimits

0x3e21,	// (0x0007e71f) call3_video_subqcif_pane

0x3e35,	// (0x0007e733) call3_video_subqcif_uncrop_pane_ParamLimits

0x3e35,	// (0x0007e733) call3_video_subqcif_uncrop_pane

0x3ea6,	// (0x0007e7a4) popup_call3_audio_in_window_g4_ParamLimits

0x3ea6,	// (0x0007e7a4) popup_call3_audio_in_window_g4

0x11a6,	// (0x0007baa4) mup_spec_half_pane

0x11a6,	// (0x0007baa4) mup_spec_half_pane_cp

0x11a6,	// (0x0007baa4) mup_osc_middle_pane

0xac48,	// (0x00085546) mup_visualizer_osc_pane_g1

0xce35,	// (0x00087733) mup_spec_bar_pane_ParamLimits

0xce35,	// (0x00087733) mup_spec_bar_pane

0xac48,	// (0x00085546) mup_spec_bar_pane_g1

0xac48,	// (0x00085546) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x000899ad) mup_spec_bar_pane_g

0x1712,	// (0x0007c010) aid_cale_week_size_cell_pane_ParamLimits

0x172c,	// (0x0007c02a) bg_cale_heading_pane_ParamLimits

0xae57,	// (0x00085755) bg_cale_pane_cp01_ParamLimits

0x1744,	// (0x0007c042) cale_week_corner_pane_ParamLimits

0x1763,	// (0x0007c061) cale_week_day_heading_pane_ParamLimits

0x1780,	// (0x0007c07e) cale_week_scroll_pane_g1_ParamLimits

0x1793,	// (0x0007c091) cale_week_scroll_pane_g2_ParamLimits

0x17ab,	// (0x0007c0a9) cale_week_scroll_pane_g3_ParamLimits

0x17c3,	// (0x0007c0c1) cale_week_scroll_pane_g4_ParamLimits

0x17db,	// (0x0007c0d9) cale_week_scroll_pane_g5_ParamLimits

0x17fb,	// (0x0007c0f9) cale_week_scroll_pane_g6_ParamLimits

0x181b,	// (0x0007c119) cale_week_scroll_pane_g7_ParamLimits

0x183b,	// (0x0007c139) cale_week_scroll_pane_g8_ParamLimits

0x185f,	// (0x0007c15d) cale_week_scroll_pane_g9_ParamLimits

0x1877,	// (0x0007c175) cale_week_scroll_pane_g10_ParamLimits

0x188f,	// (0x0007c18d) cale_week_scroll_pane_g11_ParamLimits

0x18a7,	// (0x0007c1a5) cale_week_scroll_pane_g12_ParamLimits

0x18bf,	// (0x0007c1bd) cale_week_scroll_pane_g13_ParamLimits

0x18bf,	// (0x0007c1bd) cale_week_scroll_pane_g14_ParamLimits

0x18bf,	// (0x0007c1bd) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00089a24) cale_week_scroll_pane_g_ParamLimits

0x18fb,	// (0x0007c1f9) cale_week_time_pane_ParamLimits

0x191f,	// (0x0007c21d) grid_cale_week_pane_ParamLimits

0xae74,	// (0x00085772) listscroll_cale_week_pane_t1

0xae86,	// (0x00085784) scroll_pane_cp08_ParamLimits

0x2384,	// (0x0007cc82) cale_month_corner_pane_ParamLimits

0xb1f1,	// (0x00085aef) cale_month_pane_t1

0x279e,	// (0x0007d09c) cale_month_week_pane_ParamLimits

0x2cea,	// (0x0007d5e8) popup_call_status_window_g1_ParamLimits

0x2cfe,	// (0x0007d5fc) popup_call_status_window_g2_ParamLimits

0x2d12,	// (0x0007d610) popup_call_status_window_g3_ParamLimits

0xf29b,	// (0x00089b99) popup_call_status_window_g_ParamLimits

0xb5df,	// (0x00085edd) aid_call2_pane

0x09fe,	// (0x0007b2fc) msg_header_pane_g1

0x3325,	// (0x0007dc23) postcard_address2_pane_ParamLimits

0x3325,	// (0x0007dc23) postcard_address2_pane

0x3337,	// (0x0007dc35) postcard_message2_pane_ParamLimits

0x3337,	// (0x0007dc35) postcard_message2_pane

0x3da0,	// (0x0007e69e) message2_row_pane_ParamLimits

0x3da0,	// (0x0007e69e) message2_row_pane

0x3dbd,	// (0x0007e6bb) address2_row_pane_ParamLimits

0x3dbd,	// (0x0007e6bb) address2_row_pane

0xce02,	// (0x00087700) postcard_message2_row_pane_g1

0xce0a,	// (0x00087708) postcard_message2_row_pane_t1

0xce02,	// (0x00087700) address2_row_pane_g1

0xce0a,	// (0x00087708) address2_row_pane_t1

0x1c59,	// (0x0007c557) aid_size_cell_vorec

0xa92c,	// (0x0008522a) main_rss_pane

0xce18,	// (0x00087716) rss_list_single_pane_ParamLimits

0xce18,	// (0x00087716) rss_list_single_pane

0xce26,	// (0x00087724) rss_list_single_pane_t1

0xce26,	// (0x00087724) rss_list_single_pane_t2

0x0001,

0xf549,	// (0x00089e47) rss_list_single_pane_t

0xa92c,	// (0x0008522a) main_camera2_pane

0xa92c,	// (0x0008522a) main_video2_pane

0xced8,	// (0x000877d6) cams_zoom_pane_cp2_ParamLimits

0xced8,	// (0x000877d6) cams_zoom_pane_cp2

0xced8,	// (0x000877d6) image2_vga_pane_ParamLimits

0xced8,	// (0x000877d6) image2_vga_pane

0xe526,	// (0x00088e24) main_camera2_pane_g1_ParamLimits

0xe526,	// (0x00088e24) main_camera2_pane_g1

0xe526,	// (0x00088e24) main_camera2_pane_g2_ParamLimits

0xe526,	// (0x00088e24) main_camera2_pane_g2

0xe526,	// (0x00088e24) main_camera2_pane_g3_ParamLimits

0xe526,	// (0x00088e24) main_camera2_pane_g3

0xe526,	// (0x00088e24) main_camera2_pane_g4_ParamLimits

0xe526,	// (0x00088e24) main_camera2_pane_g4

0xe526,	// (0x00088e24) main_camera2_pane_g5_ParamLimits

0xe526,	// (0x00088e24) main_camera2_pane_g5

0xe526,	// (0x00088e24) main_camera2_pane_g6_ParamLimits

0xe526,	// (0x00088e24) main_camera2_pane_g6

0xe526,	// (0x00088e24) main_camera2_pane_g7_ParamLimits

0xe526,	// (0x00088e24) main_camera2_pane_g7

0xe526,	// (0x00088e24) main_camera2_pane_g8_ParamLimits

0xe526,	// (0x00088e24) main_camera2_pane_g8

0x0008,

0xf565,	// (0x00089e63) main_camera2_pane_g_ParamLimits

0xf565,	// (0x00089e63) main_camera2_pane_g

0x3f67,	// (0x0007e865) main_camera2_pane_t1_ParamLimits

0x3f67,	// (0x0007e865) main_camera2_pane_t1

0x3f67,	// (0x0007e865) main_camera2_pane_t2_ParamLimits

0x3f67,	// (0x0007e865) main_camera2_pane_t2

0x3f67,	// (0x0007e865) main_camera2_pane_t3_ParamLimits

0x3f67,	// (0x0007e865) main_camera2_pane_t3

0x3f67,	// (0x0007e865) main_camera2_pane_t4_ParamLimits

0x3f67,	// (0x0007e865) main_camera2_pane_t4

0x0006,

0xf578,	// (0x00089e76) main_camera2_pane_t_ParamLimits

0xf578,	// (0x00089e76) main_camera2_pane_t

0xcefa,	// (0x000877f8) cams_zoom_pane_cp4_ParamLimits

0xcefa,	// (0x000877f8) cams_zoom_pane_cp4

0xcf08,	// (0x00087806) image2_cif_pane_ParamLimits

0xcf08,	// (0x00087806) image2_cif_pane

0xa52b,	// (0x00084e29) image2_subqcif_pane_ParamLimits

0xa52b,	// (0x00084e29) image2_subqcif_pane

0x3f7b,	// (0x0007e879) main_video2_pane_g1_ParamLimits

0x3f7b,	// (0x0007e879) main_video2_pane_g1

0x3f7b,	// (0x0007e879) main_video2_pane_g2_ParamLimits

0x3f7b,	// (0x0007e879) main_video2_pane_g2

0x3f7b,	// (0x0007e879) main_video2_pane_g3_ParamLimits

0x3f7b,	// (0x0007e879) main_video2_pane_g3

0x3f7b,	// (0x0007e879) main_video2_pane_g4_ParamLimits

0x3f7b,	// (0x0007e879) main_video2_pane_g4

0x3f7b,	// (0x0007e879) main_video2_pane_g5_ParamLimits

0x3f7b,	// (0x0007e879) main_video2_pane_g5

0x3f7b,	// (0x0007e879) main_video2_pane_g6_ParamLimits

0x3f7b,	// (0x0007e879) main_video2_pane_g6

0x0005,

0xf587,	// (0x00089e85) main_video2_pane_g_ParamLimits

0xf587,	// (0x00089e85) main_video2_pane_g

0x3f89,	// (0x0007e887) main_video2_pane_t1_ParamLimits

0x3f89,	// (0x0007e887) main_video2_pane_t1

0x3f89,	// (0x0007e887) main_video2_pane_t2_ParamLimits

0x3f89,	// (0x0007e887) main_video2_pane_t2

0x3f89,	// (0x0007e887) main_video2_pane_t3_ParamLimits

0x3f89,	// (0x0007e887) main_video2_pane_t3

0x0002,

0xf594,	// (0x00089e92) main_video2_pane_t_ParamLimits

0xf594,	// (0x00089e92) main_video2_pane_t

0x38f4,	// (0x0007e1f2) call_muted_g2

0x0001,

0xf53b,	// (0x00089e39) call_muted_g

0xa92c,	// (0x0008522a) main_mup2_pane

0xba64,	// (0x00086362) main_mup2_pane_g1_ParamLimits

0xba64,	// (0x00086362) main_mup2_pane_g1

0xba64,	// (0x00086362) main_mup2_pane_g2_ParamLimits

0xba64,	// (0x00086362) main_mup2_pane_g2

0xac48,	// (0x00085546) main_mup_pane_g13_cp1

0x11a6,	// (0x0007baa4) mup_volume_pane_cp1

0xba64,	// (0x00086362) main_mup2_pane_g4_ParamLimits

0xba64,	// (0x00086362) main_mup2_pane_g4

0xba64,	// (0x00086362) main_mup2_pane_g5_ParamLimits

0xba64,	// (0x00086362) main_mup2_pane_g5

0xba64,	// (0x00086362) main_mup2_pane_g6_ParamLimits

0xba64,	// (0x00086362) main_mup2_pane_g6

0xba64,	// (0x00086362) main_mup2_pane_g7_ParamLimits

0xba64,	// (0x00086362) main_mup2_pane_g7

0x0006,

0xf59b,	// (0x00089e99) main_mup2_pane_g_ParamLimits

0xf59b,	// (0x00089e99) main_mup2_pane_g

0xba72,	// (0x00086370) main_mup2_pane_t1_ParamLimits

0xba72,	// (0x00086370) main_mup2_pane_t1

0xba72,	// (0x00086370) main_mup2_pane_t2_ParamLimits

0xba72,	// (0x00086370) main_mup2_pane_t2

0xba72,	// (0x00086370) main_mup2_pane_t3_ParamLimits

0xba72,	// (0x00086370) main_mup2_pane_t3

0xba72,	// (0x00086370) main_mup2_pane_t4_ParamLimits

0xba72,	// (0x00086370) main_mup2_pane_t4

0xba72,	// (0x00086370) main_mup2_pane_t5_ParamLimits

0xba72,	// (0x00086370) main_mup2_pane_t5

0xba72,	// (0x00086370) main_mup2_pane_t6_ParamLimits

0xba72,	// (0x00086370) main_mup2_pane_t6

0x0005,

0xf5aa,	// (0x00089ea8) main_mup2_pane_t_ParamLimits

0xf5aa,	// (0x00089ea8) main_mup2_pane_t

0xba86,	// (0x00086384) mup2_visualizer_pane_ParamLimits

0xba86,	// (0x00086384) mup2_visualizer_pane

0xba86,	// (0x00086384) mup_progress_pane_cp_ParamLimits

0xba86,	// (0x00086384) mup_progress_pane_cp

0xcf16,	// (0x00087814) mup_volume_pane_cp_ParamLimits

0xcf16,	// (0x00087814) mup_volume_pane_cp

0xac02,	// (0x00085500) mup2_visualizer_pane_g1_ParamLimits

0xac02,	// (0x00085500) mup2_visualizer_pane_g1

0xac10,	// (0x0008550e) mup2_visualizer_pane_g2_ParamLimits

0xac10,	// (0x0008550e) mup2_visualizer_pane_g2

0xac10,	// (0x0008550e) mup2_visualizer_pane_g3_ParamLimits

0xac10,	// (0x0008550e) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x0008999d) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x0008999d) mup2_visualizer_pane_g

0x11a6,	// (0x0007baa4) aid_size_cell_fmradio

0x3aa6,	// (0x0007e3a4) aid_height_parent_landcape

0xb04f,	// (0x0008594d) wml_content_pane_cp

0xb057,	// (0x00085955) wml_tabs_pane

0xb060,	// (0x0008595e) popup_wml_miniature_window

0xb068,	// (0x00085966) scroll_pane_cp021

0xb07c,	// (0x0008597a) wml_content_pane_comp8

0xa92c,	// (0x0008522a) bg_popup_sub_pane_cp05

0xcf2c,	// (0x0008782a) popup_wml_miniature_window_g1

0xcf34,	// (0x00087832) wml_miniature_view_pane

0x3f9d,	// (0x0007e89b) aid_size_wml_view

0x3fa5,	// (0x0007e8a3) wml_miniature_view_pane_g1

0x3fae,	// (0x0007e8ac) wml_miniature_view_pane_g2

0x3fb7,	// (0x0007e8b5) wml_miniature_view_pane_g3

0x3fbf,	// (0x0007e8bd) wml_miniature_view_pane_g4

0x3fc7,	// (0x0007e8c5) wml_miniature_view_pane_g5

0x3fcf,	// (0x0007e8cd) wml_miniature_view_pane_g6

0x3fd7,	// (0x0007e8d5) wml_miniature_view_pane_g7

0x3fdf,	// (0x0007e8dd) wml_miniature_view_pane_g8

0x0007,

0xf5b7,	// (0x00089eb5) wml_miniature_view_pane_g

0xcf3c,	// (0x0008783a) background_graphic_ParamLimits

0xcf3c,	// (0x0008783a) background_graphic

0xcf48,	// (0x00087846) wml_tabs_2_pane

0xcf51,	// (0x0008784f) wml_tabs_3_pane_ParamLimits

0xcf51,	// (0x0008784f) wml_tabs_3_pane

0xcf63,	// (0x00087861) wml_tabs_4_pane_ParamLimits

0xcf63,	// (0x00087861) wml_tabs_4_pane

0xcf79,	// (0x00087877) wml_tabs_5_pane_ParamLimits

0xcf79,	// (0x00087877) wml_tabs_5_pane

0xcf93,	// (0x00087891) wml_tabs_pane_g2_ParamLimits

0xcf93,	// (0x00087891) wml_tabs_pane_g2

0xcfa8,	// (0x000878a6) wml_tabs_pane_g3_ParamLimits

0xcfa8,	// (0x000878a6) wml_tabs_pane_g3

0xcfbd,	// (0x000878bb) wml_tabs_2_active_pane_ParamLimits

0xcfbd,	// (0x000878bb) wml_tabs_2_active_pane

0xcfbd,	// (0x000878bb) wml_tabs_2_passive_pane_ParamLimits

0xcfbd,	// (0x000878bb) wml_tabs_2_passive_pane

0x3fe7,	// (0x0007e8e5) wml_tabs_3_active_pane_cp_ParamLimits

0x3fe7,	// (0x0007e8e5) wml_tabs_3_active_pane_cp

0x3ffc,	// (0x0007e8fa) wml_tabs_3_passive_pane_ParamLimits

0x3ffc,	// (0x0007e8fa) wml_tabs_3_passive_pane

0x400f,	// (0x0007e90d) wml_tabs_3_passive_pane_cp_ParamLimits

0x400f,	// (0x0007e90d) wml_tabs_3_passive_pane_cp

0x4026,	// (0x0007e924) tabs_4_active_pane

0x402e,	// (0x0007e92c) tabs_4_passive_pane

0x4038,	// (0x0007e936) tabs_4_passive_pane_cp

0x4040,	// (0x0007e93e) tabs_4_passive_pane_cp2

0x386a,	// (0x0007e168) aid_height_text

0xba86,	// (0x00086384) mup_volume_cont_pane_ParamLimits

0xba86,	// (0x00086384) mup_volume_cont_pane

0x11a6,	// (0x0007baa4) aid_size_cell_pinb

0x11a6,	// (0x0007baa4) aid_size_list_pinb

0xba86,	// (0x00086384) mup2_volume_cont_pane_ParamLimits

0xba86,	// (0x00086384) mup2_volume_cont_pane

0xcfcb,	// (0x000878c9) mup2_volume_cont_pane_g1_ParamLimits

0xcfcb,	// (0x000878c9) mup2_volume_cont_pane_g1

0x11b0,	// (0x0007baae) aid_size_cell_touch_ParamLimits

0x11b0,	// (0x0007baae) aid_size_cell_touch

0x13dc,	// (0x0007bcda) touch_pane_ParamLimits

0x13dc,	// (0x0007bcda) touch_pane

0x11a6,	// (0x0007baa4) main_rss2_pane

0xcfea,	// (0x000878e8) listscroll_rss2_pane

0xcff3,	// (0x000878f1) rss2_navigation_pane

0xcffb,	// (0x000878f9) list_rss2_pane

0xb767,	// (0x00086065) scroll_pane_cp22

0xd003,	// (0x00087901) rss2_navigation_pane_g1

0xd00c,	// (0x0008790a) rss2_navigation_pane_g2

0xd014,	// (0x00087912) rss2_navigation_pane_g3

0x0002,

0xf5c8,	// (0x00089ec6) rss2_navigation_pane_g

0xd01c,	// (0x0008791a) rss2_navigation_pane_t1

0x404a,	// (0x0007e948) rss2_list_single_pane_ParamLimits

0x404a,	// (0x0007e948) rss2_list_single_pane

0xd02a,	// (0x00087928) rss2_list_single_pane_t2

0xd038,	// (0x00087936) rss2_list_single_pane_t3_ParamLimits

0xd038,	// (0x00087936) rss2_list_single_pane_t3

0xd055,	// (0x00087953) rss2_list_single_pane_t4

0x2bc6,	// (0x0007d4c4) smil_status_pane_g1

0xa52b,	// (0x00084e29) main_image2_pane_ParamLimits

0xa52b,	// (0x00084e29) main_image2_pane

0xe526,	// (0x00088e24) main_camera2_pane_g9_ParamLimits

0xe526,	// (0x00088e24) main_camera2_pane_g9

0x3f67,	// (0x0007e865) main_camera2_pane_t5_ParamLimits

0x3f67,	// (0x0007e865) main_camera2_pane_t5

0xcee6,	// (0x000877e4) main_camera2_pane_t6_ParamLimits

0xcee6,	// (0x000877e4) main_camera2_pane_t6

0x4060,	// (0x0007e95e) main_image2_pane_g1_ParamLimits

0x4060,	// (0x0007e95e) main_image2_pane_g1

0x353d,	// (0x0007de3b) smil2_video_pane_ParamLimits

0x353d,	// (0x0007de3b) smil2_video_pane

0xa4e2,	// (0x00084de0) aid_zoom_text_primary_cp

0xa521,	// (0x00084e1f) popup_preview_fixed_window

0xafb8,	// (0x000858b6) im_reading_pane_g1

0x3f59,	// (0x0007e857) cams2_bc_adjust_pane_cp_ParamLimits

0x3f59,	// (0x0007e857) cams2_bc_adjust_pane_cp

0xba86,	// (0x00086384) cams2_bc_adjust_pane_ParamLimits

0xba86,	// (0x00086384) cams2_bc_adjust_pane

0xac48,	// (0x00085546) cams2_bc_adjust_pane_g1

0x11a6,	// (0x0007baa4) cams2_slider_pane

0xac48,	// (0x00085546) cams2_slider_pane_g1

0xac48,	// (0x00085546) cams2_slider_pane_g2

0x0006,

0xf5cf,	// (0x00089ecd) cams2_slider_pane_g

0x14c5,	// (0x0007bdc3) calc_display_pane_ParamLimits

0x14ea,	// (0x0007bde8) calc_paper_pane_ParamLimits

0x150d,	// (0x0007be0b) grid_calc_pane_ParamLimits

0xb641,	// (0x00085f3f) popup_clock_digital_window_t1_ParamLimits

0xbd17,	// (0x00086615) main_image_pane_t1

0x14a7,	// (0x0007bda5) aid_size_cell_calc_ParamLimits

0x14a7,	// (0x0007bda5) aid_size_cell_calc

0x3aec,	// (0x0007e3ea) popup_blid_sat_info2_window_ParamLimits

0x3aec,	// (0x0007e3ea) popup_blid_sat_info2_window

0xd063,	// (0x00087961) aid_size_cell_blid

0xcf08,	// (0x00087806) bg_popup_window_pane_cp07

0xd080,	// (0x0008797e) grid_popup_blid_pane

0xd08a,	// (0x00087988) heading_pane_cp05_ParamLimits

0xd08a,	// (0x00087988) heading_pane_cp05

0xd154,	// (0x00087a52) cell_popup_blid_pane_ParamLimits

0xd154,	// (0x00087a52) cell_popup_blid_pane

0xd178,	// (0x00087a76) cell_popup_blid_pane_g1

0xd180,	// (0x00087a7e) cell_popup_blid_pane_t1

0xba86,	// (0x00086384) mup2_indicator_pane_ParamLimits

0xba86,	// (0x00086384) mup2_indicator_pane

0x11a6,	// (0x0007baa4) mup2_visualizer_osc_pane

0xcf16,	// (0x00087814) mup2_visualizer_spec_pane_ParamLimits

0xcf16,	// (0x00087814) mup2_visualizer_spec_pane

0x11a6,	// (0x0007baa4) mup2_spec_half_pane

0x11a6,	// (0x0007baa4) mup2_spec_half_pane_cp

0xd18e,	// (0x00087a8c) mup2_spec_bar_pane_ParamLimits

0xd18e,	// (0x00087a8c) mup2_spec_bar_pane

0xac48,	// (0x00085546) mup2_spec_bar_pane_g1

0xd1ad,	// (0x00087aab) mup2_spec_bar_pane_g2

0x0001,

0xf5f5,	// (0x00089ef3) mup2_spec_bar_pane_g

0x11a6,	// (0x0007baa4) mup2_osc_middle_pane

0xac48,	// (0x00085546) mup2_visualizer_osc_pane_g1

0xa539,	// (0x00084e37) popup_number_entry_window_t1_ParamLimits

0xa54c,	// (0x00084e4a) popup_number_entry_window_t2_ParamLimits

0xa55e,	// (0x00084e5c) popup_number_entry_window_t3_ParamLimits

0x144e,	// (0x0007bd4c) popup_number_entry_window_t5_ParamLimits

0x144e,	// (0x0007bd4c) popup_number_entry_window_t5

0xf040,	// (0x0008993e) popup_number_entry_window_t_ParamLimits

0xa570,	// (0x00084e6e) text_title_cp2_ParamLimits

0xbc0f,	// (0x0008650d) aid_hotspot_pointer_text2_pane

0xbc35,	// (0x00086533) main_viewer_pane_g9_ParamLimits

0xbc35,	// (0x00086533) main_viewer_pane_g9

0xb1f1,	// (0x00085aef) cale_month_pane_t1_ParamLimits

0xb25c,	// (0x00085b5a) bg_cale_pane_ParamLimits

0xb274,	// (0x00085b72) list_cale_pane_ParamLimits

0xb285,	// (0x00085b83) listscroll_cale_day_pane_t1

0xb297,	// (0x00085b95) scroll_pane_cp09_ParamLimits

0x2fbf,	// (0x0007d8bd) main_mup_eq_pane_t1_ParamLimits

0x2fbf,	// (0x0007d8bd) main_mup_eq_pane_t1

0x2fd9,	// (0x0007d8d7) main_mup_eq_pane_t2_ParamLimits

0x2fd9,	// (0x0007d8d7) main_mup_eq_pane_t2

0x2ff3,	// (0x0007d8f1) main_mup_eq_pane_t3_ParamLimits

0x2ff3,	// (0x0007d8f1) main_mup_eq_pane_t3

0x300f,	// (0x0007d90d) main_mup_eq_pane_t4_ParamLimits

0x300f,	// (0x0007d90d) main_mup_eq_pane_t4

0x302b,	// (0x0007d929) main_mup_eq_pane_t5_ParamLimits

0x302b,	// (0x0007d929) main_mup_eq_pane_t5

0x3047,	// (0x0007d945) main_mup_eq_pane_t6_ParamLimits

0x3047,	// (0x0007d945) main_mup_eq_pane_t6

0x305b,	// (0x0007d959) main_mup_eq_pane_t7_ParamLimits

0x305b,	// (0x0007d959) main_mup_eq_pane_t7

0x306f,	// (0x0007d96d) main_mup_eq_pane_t8_ParamLimits

0x306f,	// (0x0007d96d) main_mup_eq_pane_t8

0x3083,	// (0x0007d981) main_mup_eq_pane_t9_ParamLimits

0x3083,	// (0x0007d981) main_mup_eq_pane_t9

0x309d,	// (0x0007d99b) main_mup_eq_pane_t10_ParamLimits

0x309d,	// (0x0007d99b) main_mup_eq_pane_t10

0x0009,

0xf395,	// (0x00089c93) main_mup_eq_pane_t_ParamLimits

0xf395,	// (0x00089c93) main_mup_eq_pane_t

0x314c,	// (0x0007da4a) mup_equalizer_pane_cp5_ParamLimits

0x3160,	// (0x0007da5e) mup_equalizer_pane_cp6_ParamLimits

0x3174,	// (0x0007da72) mup_equalizer_pane_cp7_ParamLimits

0x11a6,	// (0x0007baa4) main_gallery_pane

0xce54,	// (0x00087752) smil2_volume_pane

0xce5c,	// (0x0008775a) smil_status_volume_pane_g1_ParamLimits

0xce6f,	// (0x0008776d) smil_status_volume_pane_g2_ParamLimits

0xce82,	// (0x00087780) smil_status_volume_pane_g3_ParamLimits

0xf54e,	// (0x00089e4c) smil_status_volume_pane_g_ParamLimits

0xcf08,	// (0x00087806) bg_popup_window_pane_cp07_ParamLimits

0xd06b,	// (0x00087969) blid_firmament_pane

0xa52b,	// (0x00084e29) aid_size_cell_gallery_ParamLimits

0xa52b,	// (0x00084e29) aid_size_cell_gallery

0xa52b,	// (0x00084e29) grid_gallery_pane_ParamLimits

0xa52b,	// (0x00084e29) grid_gallery_pane

0xcf08,	// (0x00087806) cell_gallery_pane_ParamLimits

0xcf08,	// (0x00087806) cell_gallery_pane

0xa52b,	// (0x00084e29) bg_cell_gallery_focus_pane_ParamLimits

0xa52b,	// (0x00084e29) bg_cell_gallery_focus_pane

0xac02,	// (0x00085500) cell_gallery_pane_g1_ParamLimits

0xac02,	// (0x00085500) cell_gallery_pane_g1

0xac02,	// (0x00085500) cell_gallery_pane_g2_ParamLimits

0xac02,	// (0x00085500) cell_gallery_pane_g2

0xac02,	// (0x00085500) cell_gallery_pane_g3_ParamLimits

0xac02,	// (0x00085500) cell_gallery_pane_g3

0xac10,	// (0x0008550e) cell_gallery_pane_g4_ParamLimits

0xac10,	// (0x0008550e) cell_gallery_pane_g4

0x0003,

0xf5fa,	// (0x00089ef8) cell_gallery_pane_g_ParamLimits

0xf5fa,	// (0x00089ef8) cell_gallery_pane_g

0xd1b7,	// (0x00087ab5) bg_cell_gallery_focus_pane_g1

0xd1bf,	// (0x00087abd) bg_cell_gallery_focus_pane_g2

0xd1c7,	// (0x00087ac5) bg_cell_gallery_focus_pane_g3

0xd1cf,	// (0x00087acd) bg_cell_gallery_focus_pane_g4

0xd1d7,	// (0x00087ad5) bg_cell_gallery_focus_pane_g5

0xd1df,	// (0x00087add) bg_cell_gallery_focus_pane_g6

0xd1e7,	// (0x00087ae5) bg_cell_gallery_focus_pane_g7

0xd1ef,	// (0x00087aed) bg_cell_gallery_focus_pane_g8

0x0007,

0xf603,	// (0x00089f01) bg_cell_gallery_focus_pane_g

0xd1f7,	// (0x00087af5) aid_firma_cardinal

0xd20b,	// (0x00087b09) blid_firmament_pane_t1

0xd222,	// (0x00087b20) blid_firmament_pane_t2

0xd239,	// (0x00087b37) blid_firmament_pane_t3

0xd250,	// (0x00087b4e) blid_firmament_pane_t4

0x0003,

0xf614,	// (0x00089f12) blid_firmament_pane_t

0xd267,	// (0x00087b65) blid_sat_info_pane

0xac48,	// (0x00085546) blid_sat_info_pane_g1

0xac48,	// (0x00085546) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x000899ad) blid_sat_info_pane_g

0xd277,	// (0x00087b75) blid_sat_info_pane_t1

0xd285,	// (0x00087b83) smil2_volume_content_pane

0xd28e,	// (0x00087b8c) smil2_volume_pane_g1

0xad5b,	// (0x00085659) smil2_volume_content_pane_g1

0xd296,	// (0x00087b94) smil2_volume_content_pane_g2

0xd29f,	// (0x00087b9d) smil2_volume_content_pane_g3

0xd2a8,	// (0x00087ba6) smil2_volume_content_pane_g4

0xd2b1,	// (0x00087baf) smil2_volume_content_pane_g5

0xd2ba,	// (0x00087bb8) smil2_volume_content_pane_g6

0xd2c3,	// (0x00087bc1) smil2_volume_content_pane_g7

0xd2cc,	// (0x00087bca) smil2_volume_content_pane_g8

0xd2d5,	// (0x00087bd3) smil2_volume_content_pane_g9

0xd2de,	// (0x00087bdc) smil2_volume_content_pane_g10

0x0009,

0xf61d,	// (0x00089f1b) smil2_volume_content_pane_g

0x19d3,	// (0x0007c2d1) cale_week_day_heading_pane_t1_ParamLimits

0x19fd,	// (0x0007c2fb) cale_week_day_heading_pane_t2_ParamLimits

0x1a2c,	// (0x0007c32a) cale_week_day_heading_pane_t3_ParamLimits

0x1a5b,	// (0x0007c359) cale_week_day_heading_pane_t4_ParamLimits

0x1a8a,	// (0x0007c388) cale_week_day_heading_pane_t5_ParamLimits

0x1ac1,	// (0x0007c3bf) cale_week_day_heading_pane_t6_ParamLimits

0x1af8,	// (0x0007c3f6) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x00089a45) cale_week_day_heading_pane_t_ParamLimits

0xaea3,	// (0x000857a1) bg_cale_side_pane_ParamLimits

0x1b22,	// (0x0007c420) cale_week_time_pane_t1_ParamLimits

0x1b3c,	// (0x0007c43a) cale_week_time_pane_t2_ParamLimits

0x1b56,	// (0x0007c454) cale_week_time_pane_t3_ParamLimits

0x1b70,	// (0x0007c46e) cale_week_time_pane_t4_ParamLimits

0x1b8a,	// (0x0007c488) cale_week_time_pane_t5_ParamLimits

0x1ba4,	// (0x0007c4a2) cale_week_time_pane_t6_ParamLimits

0x1bbe,	// (0x0007c4bc) cale_week_time_pane_t7_ParamLimits

0x1bd8,	// (0x0007c4d6) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x00089a54) cale_week_time_pane_t_ParamLimits

0x1bf8,	// (0x0007c4f6) cell_cale_week_pane_g2_ParamLimits

0xaea3,	// (0x000857a1) bg_cale_side_pane_cp01_ParamLimits

0x29cb,	// (0x0007d2c9) cale_month_week_pane_t1_ParamLimits

0x29e4,	// (0x0007d2e2) cale_month_week_pane_t2_ParamLimits

0x29fd,	// (0x0007d2fb) cale_month_week_pane_t3_ParamLimits

0x2a16,	// (0x0007d314) cale_month_week_pane_t4_ParamLimits

0x2a2f,	// (0x0007d32d) cale_month_week_pane_t5_ParamLimits

0x2a48,	// (0x0007d346) cale_month_week_pane_t6_ParamLimits

0xf21f,	// (0x00089b1d) cale_month_week_pane_t_ParamLimits

0xb203,	// (0x00085b01) cell_cale_month_pane_g1_ParamLimits

0x11a6,	// (0x0007baa4) main_cale_event_viewer_pane

0x11a6,	// (0x0007baa4) listscroll_cale_event_viewer_pane

0xd2e7,	// (0x00087be5) list_cale_ev_pane

0xd2ef,	// (0x00087bed) scroll_pane_cp023

0xd2fb,	// (0x00087bf9) field_cale_ev_pane_ParamLimits

0xd2fb,	// (0x00087bf9) field_cale_ev_pane

0xd319,	// (0x00087c17) field_cale_ev_content_pane_ParamLimits

0xd319,	// (0x00087c17) field_cale_ev_content_pane

0xd325,	// (0x00087c23) field_cale_ev_pane_g1_ParamLimits

0xd325,	// (0x00087c23) field_cale_ev_pane_g1

0xd331,	// (0x00087c2f) field_cale_ev_pane_g2_ParamLimits

0xd331,	// (0x00087c2f) field_cale_ev_pane_g2

0xd349,	// (0x00087c47) field_cale_ev_pane_g3_ParamLimits

0xd349,	// (0x00087c47) field_cale_ev_pane_g3

0x0002,

0xf632,	// (0x00089f30) field_cale_ev_pane_g_ParamLimits

0xf632,	// (0x00089f30) field_cale_ev_pane_g

0xd361,	// (0x00087c5f) field_cale_ev_pane_t1_ParamLimits

0xd361,	// (0x00087c5f) field_cale_ev_pane_t1

0xd378,	// (0x00087c76) field_cale_ev_content_pane_t1_ParamLimits

0xd378,	// (0x00087c76) field_cale_ev_content_pane_t1

0xbb31,	// (0x0008642f) bg_button_pane_cp01

0x1700,	// (0x0007bffe) listscroll_cale_week_pane_ParamLimits

0xae4e,	// (0x0008574c) popup_toolbar_window_cp01

0xae74,	// (0x00085772) listscroll_cale_week_pane_t1_ParamLimits

0x1700,	// (0x0007bffe) listscroll_cale_day_pane_ParamLimits

0xae4e,	// (0x0008574c) popup_toolbar_window_cp02

0xb285,	// (0x00085b83) listscroll_cale_day_pane_t1_ParamLimits

0x1700,	// (0x0007bffe) main_cale_month_pane_ParamLimits

0xcdd2,	// (0x000876d0) popup_toolbar_window_cp03_ParamLimits

0xcdd2,	// (0x000876d0) popup_toolbar_window_cp03

0x3405,	// (0x0007dd03) main_image_pane_g2_ParamLimits

0x3405,	// (0x0007dd03) main_image_pane_g2

0x3416,	// (0x0007dd14) main_image_pane_g3_ParamLimits

0x3416,	// (0x0007dd14) main_image_pane_g3

0x0002,

0xf427,	// (0x00089d25) main_image_pane_g_ParamLimits

0xf427,	// (0x00089d25) main_image_pane_g

0xbd17,	// (0x00086615) main_image_pane_t1_ParamLimits

0x3427,	// (0x0007dd25) main_image_pane_t2_ParamLimits

0x3427,	// (0x0007dd25) main_image_pane_t2

0x3439,	// (0x0007dd37) main_image_pane_t3_ParamLimits

0x3439,	// (0x0007dd37) main_image_pane_t3

0x3461,	// (0x0007dd5f) main_image_pane_t4_ParamLimits

0x3461,	// (0x0007dd5f) main_image_pane_t4

0x0003,

0xf42e,	// (0x00089d2c) main_image_pane_t_ParamLimits

0xf42e,	// (0x00089d2c) main_image_pane_t

0x3481,	// (0x0007dd7f) popup_image_details_window_cp01

0x348b,	// (0x0007dd89) popup_toobar_trans_pane_cp01_ParamLimits

0x348b,	// (0x0007dd89) popup_toobar_trans_pane_cp01

0x3bbd,	// (0x0007e4bb) popup_image_details_window_ParamLimits

0x3bbd,	// (0x0007e4bb) popup_image_details_window

0xcda5,	// (0x000876a3) popup_image_focus_window

0xced8,	// (0x000877d6) camera2_autofocus_pane_ParamLimits

0xced8,	// (0x000877d6) camera2_autofocus_pane

0x11a6,	// (0x0007baa4) bg_popup_sub_pane_cp06

0xd396,	// (0x00087c94) popup_image_focus_window_g1

0xd39e,	// (0x00087c9c) popup_image_focus_window_g2

0xd3a6,	// (0x00087ca4) popup_image_focus_window_g3

0xd3ae,	// (0x00087cac) popup_image_focus_window_g4

0x0003,

0xf639,	// (0x00089f37) popup_image_focus_window_g

0xd3b6,	// (0x00087cb4) popup_image_focus_window_t1

0xd3c4,	// (0x00087cc2) popup_image_focus_window_t2

0xd3d4,	// (0x00087cd2) popup_image_focus_window_t3

0x0002,

0xf642,	// (0x00089f40) popup_image_focus_window_t

0xac02,	// (0x00085500) camera2_autofocus_pane_g1

0xa52b,	// (0x00084e29) bg_tb_trans_pane_cp01

0xd3e2,	// (0x00087ce0) popup_image_details_window_g1

0xd3f5,	// (0x00087cf3) popup_image_details_window_g2

0x0002,

0xf654,	// (0x00089f52) popup_image_details_window_g

0xd41e,	// (0x00087d1c) popup_image_details_window_t1

0xd430,	// (0x00087d2e) popup_image_details_window_t2

0xd449,	// (0x00087d47) popup_image_details_window_t3

0xd45d,	// (0x00087d5b) popup_image_details_window_t4

0xd478,	// (0x00087d76) popup_image_details_window_t5

0x0004,

0xf65b,	// (0x00089f59) popup_image_details_window_t

0xac92,	// (0x00085590) bg_calc_paper_pane_ParamLimits

0x11a6,	// (0x0007baa4) grid_highlight_pane_cp013

0xaca6,	// (0x000855a4) list_calc_pane_ParamLimits

0xacb8,	// (0x000855b6) scroll_pane_cp024

0xacc0,	// (0x000855be) bg_calc_display_pane_ParamLimits

0x154f,	// (0x0007be4d) calc_display_pane_t1_ParamLimits

0x1561,	// (0x0007be5f) calc_display_pane_t2_ParamLimits

0xaccc,	// (0x000855ca) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x000899c5) calc_display_pane_t_ParamLimits

0x161b,	// (0x0007bf19) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x000899e2) cell_calc_pane_g

0x1624,	// (0x0007bf22) cell_calc_pane_t1

0xad39,	// (0x00085637) grid_highlight_pane_cp02_ParamLimits

0xad4f,	// (0x0008564d) toolbar_button_pane_cp01_ParamLimits

0xad4f,	// (0x0008564d) toolbar_button_pane_cp01

0xbd5c,	// (0x0008665a) temp_image_control_pane_ParamLimits

0xbd5c,	// (0x0008665a) temp_image_control_pane

0xa52b,	// (0x00084e29) main_mp3_pane

0xd492,	// (0x00087d90) temp_image_control_pane_g1_ParamLimits

0xd492,	// (0x00087d90) temp_image_control_pane_g1

0xd4a0,	// (0x00087d9e) temp_image_control_pane_g2_ParamLimits

0xd4a0,	// (0x00087d9e) temp_image_control_pane_g2

0xd4b2,	// (0x00087db0) temp_image_control_pane_g3_ParamLimits

0xd4b2,	// (0x00087db0) temp_image_control_pane_g3

0x4076,	// (0x0007e974) temp_image_control_pane_g4_ParamLimits

0x4076,	// (0x0007e974) temp_image_control_pane_g4

0x0003,

0xf666,	// (0x00089f64) temp_image_control_pane_g_ParamLimits

0xf666,	// (0x00089f64) temp_image_control_pane_g

0xd492,	// (0x00087d90) main_mp3_pane_g1

0x4089,	// (0x0007e987) main_mp3_pane_g2

0x0007,

0xf66f,	// (0x00089f6d) main_mp3_pane_g

0xd4e7,	// (0x00087de5) main_mp3_pane_t1

0xac10,	// (0x0008550e) main_camera_pane_g8_ParamLimits

0xac10,	// (0x0008550e) main_camera_pane_g8

0x1dc6,	// (0x0007c6c4) main_video_pane_g7_ParamLimits

0x1dc6,	// (0x0007c6c4) main_video_pane_g7

0xac66,	// (0x00085564) main_camera2_pane_t7_ParamLimits

0xac66,	// (0x00085564) main_camera2_pane_t7

0xb00f,	// (0x0008590d) scroll_pane_cp025_ParamLimits

0xb00f,	// (0x0008590d) scroll_pane_cp025

0xb023,	// (0x00085921) scroll_pane_cp026_ParamLimits

0xb023,	// (0x00085921) scroll_pane_cp026

0xb032,	// (0x00085930) wml_content_pane_ParamLimits

0x11a6,	// (0x0007baa4) main_touch_calib_pane

0x415d,	// (0x0007ea5b) main_touch_calib_pane_g1

0x416f,	// (0x0007ea6d) main_touch_calib_pane_g2

0x4181,	// (0x0007ea7f) main_touch_calib_pane_g3

0x4193,	// (0x0007ea91) main_touch_calib_pane_g4

0x0003,

0xf68d,	// (0x00089f8b) main_touch_calib_pane_g

0x41a5,	// (0x0007eaa3) main_touch_calib_pane_t1

0x41bf,	// (0x0007eabd) main_touch_calib_pane_t2

0x0004,

0xf696,	// (0x00089f94) main_touch_calib_pane_t

0xb836,	// (0x00086134) mup_progress_pane_cp02

0xb86b,	// (0x00086169) navi_pane_g1

0xb926,	// (0x00086224) navi_pane_mp_t3

0xa52b,	// (0x00084e29) main_mp3_pane_ParamLimits

0x3d48,	// (0x0007e646) navi_pane_ParamLimits

0xd492,	// (0x00087d90) main_mp3_pane_g1_ParamLimits

0x4089,	// (0x0007e987) main_mp3_pane_g2_ParamLimits

0x4097,	// (0x0007e995) main_mp3_pane_g3_ParamLimits

0x4097,	// (0x0007e995) main_mp3_pane_g3

0x40a5,	// (0x0007e9a3) main_mp3_pane_g4_ParamLimits

0x40a5,	// (0x0007e9a3) main_mp3_pane_g4

0xac02,	// (0x00085500) main_mp3_pane_g5_ParamLimits

0xac02,	// (0x00085500) main_mp3_pane_g5

0xd4c2,	// (0x00087dc0) main_mp3_pane_g6_ParamLimits

0xd4c2,	// (0x00087dc0) main_mp3_pane_g6

0xd4cf,	// (0x00087dcd) main_mp3_pane_g7_ParamLimits

0xd4cf,	// (0x00087dcd) main_mp3_pane_g7

0xd4db,	// (0x00087dd9) main_mp3_pane_g8_ParamLimits

0xd4db,	// (0x00087dd9) main_mp3_pane_g8

0xf66f,	// (0x00089f6d) main_mp3_pane_g_ParamLimits

0x40b1,	// (0x0007e9af) main_mp3_pane_t2

0x40bf,	// (0x0007e9bd) main_mp3_pane_t3

0xd4f5,	// (0x00087df3) main_mp3_pane_t4

0xd503,	// (0x00087e01) main_mp3_pane_t5

0x0005,

0xf680,	// (0x00089f7e) main_mp3_pane_t

0xd511,	// (0x00087e0f) mup_progress_pane_cp01

0xa4e2,	// (0x00084de0) aid_zoom_text_secondary2

0xd2e7,	// (0x00087be5) list_cale_ev2_pane

0xd2ef,	// (0x00087bed) scroll_pane_cp023_ParamLimits

0x4215,	// (0x0007eb13) field_cale_ev2_pane_ParamLimits

0x4215,	// (0x0007eb13) field_cale_ev2_pane

0xd519,	// (0x00087e17) field_cale_ev2_pane_g1_ParamLimits

0xd519,	// (0x00087e17) field_cale_ev2_pane_g1

0xd525,	// (0x00087e23) field_cale_ev2_pane_g2_ParamLimits

0xd525,	// (0x00087e23) field_cale_ev2_pane_g2

0xd53d,	// (0x00087e3b) field_cale_ev2_pane_g3_ParamLimits

0xd53d,	// (0x00087e3b) field_cale_ev2_pane_g3

0x0003,

0xf6a1,	// (0x00089f9f) field_cale_ev2_pane_g_ParamLimits

0xf6a1,	// (0x00089f9f) field_cale_ev2_pane_g

0xd561,	// (0x00087e5f) field_cale_ev2_pane_t1_ParamLimits

0xd561,	// (0x00087e5f) field_cale_ev2_pane_t1

0xd578,	// (0x00087e76) field_cale_ev2_pane_t2_ParamLimits

0xd578,	// (0x00087e76) field_cale_ev2_pane_t2

0x0001,

0xf6aa,	// (0x00089fa8) field_cale_ev2_pane_t_ParamLimits

0xf6aa,	// (0x00089fa8) field_cale_ev2_pane_t

0x32db,	// (0x0007dbd9) main_postcard_pane_g5_ParamLimits

0x32db,	// (0x0007dbd9) main_postcard_pane_g5

0x32f1,	// (0x0007dbef) main_postcard_pane_g6_ParamLimits

0x32f1,	// (0x0007dbef) main_postcard_pane_g6

0xa52b,	// (0x00084e29) camera2_autofocus_pane_cp_ParamLimits

0xa52b,	// (0x00084e29) camera2_autofocus_pane_cp

0xa52b,	// (0x00084e29) main_mup3_pane

0x427a,	// (0x0007eb78) main_mup3_pane_g1_ParamLimits

0x427a,	// (0x0007eb78) main_mup3_pane_g1

0x429c,	// (0x0007eb9a) main_mup3_pane_g2_ParamLimits

0x429c,	// (0x0007eb9a) main_mup3_pane_g2

0x431c,	// (0x0007ec1a) main_mup3_pane_g3_ParamLimits

0x431c,	// (0x0007ec1a) main_mup3_pane_g3

0x4362,	// (0x0007ec60) main_mup3_pane_g4_ParamLimits

0x4362,	// (0x0007ec60) main_mup3_pane_g4

0x43a8,	// (0x0007eca6) main_mup3_pane_g5_ParamLimits

0x43a8,	// (0x0007eca6) main_mup3_pane_g5

0x43ee,	// (0x0007ecec) main_mup3_pane_g6_ParamLimits

0x43ee,	// (0x0007ecec) main_mup3_pane_g6

0xac10,	// (0x0008550e) main_mup3_pane_g7_ParamLimits

0xac10,	// (0x0008550e) main_mup3_pane_g7

0x0007,

0xf6ba,	// (0x00089fb8) main_mup3_pane_g_ParamLimits

0xf6ba,	// (0x00089fb8) main_mup3_pane_g

0x446c,	// (0x0007ed6a) main_mup3_pane_t1_ParamLimits

0x446c,	// (0x0007ed6a) main_mup3_pane_t1

0x44e0,	// (0x0007edde) main_mup3_pane_t2_ParamLimits

0x44e0,	// (0x0007edde) main_mup3_pane_t2

0x45b4,	// (0x0007eeb2) main_mup3_pane_t4_ParamLimits

0x45b4,	// (0x0007eeb2) main_mup3_pane_t4

0x460a,	// (0x0007ef08) main_mup3_pane_t5_ParamLimits

0x460a,	// (0x0007ef08) main_mup3_pane_t5

0x46c6,	// (0x0007efc4) main_mup3_pane_t6_ParamLimits

0x46c6,	// (0x0007efc4) main_mup3_pane_t6

0x0005,

0xf6cb,	// (0x00089fc9) main_mup3_pane_t_ParamLimits

0xf6cb,	// (0x00089fc9) main_mup3_pane_t

0x477e,	// (0x0007f07c) mup3_progress_pane_ParamLimits

0x477e,	// (0x0007f07c) mup3_progress_pane

0x480a,	// (0x0007f108) popup_mup3_control_window_ParamLimits

0x480a,	// (0x0007f108) popup_mup3_control_window

0xd58d,	// (0x00087e8b) popup_mup3_text_window

0x483c,	// (0x0007f13a) mup3_progress_pane_t1

0x485b,	// (0x0007f159) mup3_progress_pane_t2

0xd595,	// (0x00087e93) mup3_progress_pane_t3

0x0002,

0xf6d8,	// (0x00089fd6) mup3_progress_pane_t

0xd5b2,	// (0x00087eb0) mup_progress_pane_cp03

0x11a6,	// (0x0007baa4) bg_tb_trans_pane_cp04

0x487a,	// (0x0007f178) mup3_volume_pane

0x4882,	// (0x0007f180) popup_mup3_control_window_g1

0x488b,	// (0x0007f189) mup3_volume_pane_g1

0x4894,	// (0x0007f192) mup3_volume_pane_g2

0x489d,	// (0x0007f19b) mup3_volume_pane_g3

0x0002,

0xf6df,	// (0x00089fdd) mup3_volume_pane_g

0x11a6,	// (0x0007baa4) bg_tb_trans_pane_cp03

0xd5c2,	// (0x00087ec0) popup_mup3_text_window_g1

0xd5ca,	// (0x00087ec8) popup_mup3_text_window_t1

0xad1a,	// (0x00085618) list_calc_item_pane_g1_ParamLimits

0xcfe1,	// (0x000878df) mup_volume_pane_cp_g1

0x41d9,	// (0x0007ead7) main_touch_calib_pane_t3

0x41ed,	// (0x0007eaeb) main_touch_calib_pane_t4

0x4201,	// (0x0007eaff) main_touch_calib_pane_t5

0xa4be,	// (0x00084dbc) aid_cell_size_toolbar2

0xa4c6,	// (0x00084dc4) aid_popup3_width_pane

0xa4d2,	// (0x00084dd0) aid_zoom_text_msg_primary

0x1ca1,	// (0x0007c59f) vorec_t7

0xacde,	// (0x000855dc) bg_calc_paper_pane_g1_ParamLimits

0xacea,	// (0x000855e8) bg_calc_paper_pane_g2_ParamLimits

0xacf6,	// (0x000855f4) bg_calc_paper_pane_g3_ParamLimits

0xad02,	// (0x00085600) bg_calc_paper_pane_g4_ParamLimits

0xad0e,	// (0x0008560c) bg_calc_paper_pane_g5_ParamLimits

0x15a8,	// (0x0007bea6) bg_calc_paper_pane_g6_ParamLimits

0x15b7,	// (0x0007beb5) bg_calc_paper_pane_g7_ParamLimits

0x15c6,	// (0x0007bec4) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x000899cc) bg_calc_paper_pane_g_ParamLimits

0x15d9,	// (0x0007bed7) calc_bg_paper_pane_g9_ParamLimits

0xa52b,	// (0x00084e29) image_qvga_pane_ParamLimits

0xa52b,	// (0x00084e29) image_qvga_pane

0xab87,	// (0x00085485) bg_popup_sub_pane_cp04_ParamLimits

0xbc93,	// (0x00086591) popup_mup_playback_window_g1_ParamLimits

0xbc9f,	// (0x0008659d) popup_mup_playback_window_t1_ParamLimits

0xbcb4,	// (0x000865b2) popup_mup_playback_window_t2_ParamLimits

0xf422,	// (0x00089d20) popup_mup_playback_window_t_ParamLimits

0xac10,	// (0x0008550e) main_mup2_pane_g3_ParamLimits

0xac10,	// (0x0008550e) main_mup2_pane_g3

0x1f81,	// (0x0007c87f) popup_toolbar_window_cp04

0xc038,	// (0x00086936) popup_call2_audio_second_window_g3_ParamLimits

0xc038,	// (0x00086936) popup_call2_audio_second_window_g3

0xc450,	// (0x00086d4e) popup_call2_audio_first_window_g4_ParamLimits

0xc450,	// (0x00086d4e) popup_call2_audio_first_window_g4

0xca77,	// (0x00087375) popup_call2_audio_in_window_g4_ParamLimits

0xca77,	// (0x00087375) popup_call2_audio_in_window_g4

0x33e7,	// (0x0007dce5) aid_area_sk_bg_cut_ParamLimits

0x33e7,	// (0x0007dce5) aid_area_sk_bg_cut

0xbcc9,	// (0x000865c7) aid_area_sk_bg_cut_2_ParamLimits

0xbcc9,	// (0x000865c7) aid_area_sk_bg_cut_2

0x11a6,	// (0x0007baa4) aid_placing_details_win

0x11a6,	// (0x0007baa4) aid_placing_details_win_2

0xac02,	// (0x00085500) camera2_autofocus_pane_g1_ParamLimits

0x1375,	// (0x0007bc73) popup_fixed_preview_cale_window_ParamLimits

0x1375,	// (0x0007bc73) popup_fixed_preview_cale_window

0xb9ad,	// (0x000862ab) navi_slider_pane_g3

0xb9b6,	// (0x000862b4) navi_slider_pane_g4

0xb9bf,	// (0x000862bd) navi_slider_pane_g5

0xb9ad,	// (0x000862ab) navi_slider_pane_g6

0xb9c8,	// (0x000862c6) navi_slider_pane_g7

0xbaf6,	// (0x000863f4) mup_scale_pane_g3

0xbaff,	// (0x000863fd) mup_scale_pane_g4

0xbb08,	// (0x00086406) mup_scale_pane_g5

0x3188,	// (0x0007da86) mup_scale_pane_g6

0x3191,	// (0x0007da8f) mup_scale_pane_g7

0xac48,	// (0x00085546) cams2_slider_pane_g3

0xac48,	// (0x00085546) cams2_slider_pane_g4

0xac48,	// (0x00085546) cams2_slider_pane_g5

0xac48,	// (0x00085546) cams2_slider_pane_g6

0xac48,	// (0x00085546) cams2_slider_pane_g7

0xac48,	// (0x00085546) camera2_autofocus_pane_cp_g1

0xcd87,	// (0x00087685) bg_popup_preview_window_pane_cp02_ParamLimits

0xcd87,	// (0x00087685) bg_popup_preview_window_pane_cp02

0xd5d8,	// (0x00087ed6) list_fp_cale_pane_ParamLimits

0xd5d8,	// (0x00087ed6) list_fp_cale_pane

0xd5e4,	// (0x00087ee2) popup_fixed_preview_cale_window_t1_ParamLimits

0xd5e4,	// (0x00087ee2) popup_fixed_preview_cale_window_t1

0x48a6,	// (0x0007f1a4) popup_fixed_preview_cale_window_t2_ParamLimits

0x48a6,	// (0x0007f1a4) popup_fixed_preview_cale_window_t2

0x48bb,	// (0x0007f1b9) popup_fixed_preview_cale_window_t3_ParamLimits

0x48bb,	// (0x0007f1b9) popup_fixed_preview_cale_window_t3

0x0002,

0xf6e6,	// (0x00089fe4) popup_fixed_preview_cale_window_t_ParamLimits

0xf6e6,	// (0x00089fe4) popup_fixed_preview_cale_window_t

0x48d0,	// (0x0007f1ce) list_single_fp_cale_pane_ParamLimits

0x48d0,	// (0x0007f1ce) list_single_fp_cale_pane

0xd602,	// (0x00087f00) list_single_fp_cale_pane_g1_ParamLimits

0xd602,	// (0x00087f00) list_single_fp_cale_pane_g1

0xd60e,	// (0x00087f0c) list_single_fp_cale_pane_g2_ParamLimits

0xd60e,	// (0x00087f0c) list_single_fp_cale_pane_g2

0x0002,

0xf6ed,	// (0x00089feb) list_single_fp_cale_pane_g_ParamLimits

0xf6ed,	// (0x00089feb) list_single_fp_cale_pane_g

0xd627,	// (0x00087f25) list_single_fp_cale_pane_t1_ParamLimits

0xd627,	// (0x00087f25) list_single_fp_cale_pane_t1

0xd639,	// (0x00087f37) list_single_fp_cale_pane_t2_ParamLimits

0xd639,	// (0x00087f37) list_single_fp_cale_pane_t2

0x0001,

0xf6f4,	// (0x00089ff2) list_single_fp_cale_pane_t_ParamLimits

0xf6f4,	// (0x00089ff2) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x11a6,	// (0x0007baa4) main_dialer_pane

0x11a6,	// (0x0007baa4) aid_cell_size_keypad

0x11a6,	// (0x0007baa4) dialer_ne_pane

0x11a6,	// (0x0007baa4) grid_dialer_command_1_pane

0x11a6,	// (0x0007baa4) grid_dialer_command_2_pane

0x11a6,	// (0x0007baa4) grid_dialer_keypad_pane

0x48e6,	// (0x0007f1e4) bg_popup_call_pane_cp06_ParamLimits

0x48e6,	// (0x0007f1e4) bg_popup_call_pane_cp06

0x48e6,	// (0x0007f1e4) dialer_ne_clear_pane_ParamLimits

0x48e6,	// (0x0007f1e4) dialer_ne_clear_pane

0xac48,	// (0x00085546) dialer_ne_pane_g1

0xac66,	// (0x00085564) dialer_ne_pane_t1_ParamLimits

0xac66,	// (0x00085564) dialer_ne_pane_t1

0x48f4,	// (0x0007f1f2) dialer_ne_pane_t2_ParamLimits

0x48f4,	// (0x0007f1f2) dialer_ne_pane_t2

0x491c,	// (0x0007f21a) dialer_ne_pane_t3_ParamLimits

0x491c,	// (0x0007f21a) dialer_ne_pane_t3

0x0002,

0xf6f9,	// (0x00089ff7) dialer_ne_pane_t_ParamLimits

0xf6f9,	// (0x00089ff7) dialer_ne_pane_t

0x491c,	// (0x0007f21a) dialer_ne_pane_t3_copy1_ParamLimits

0x491c,	// (0x0007f21a) dialer_ne_pane_t3_copy1

0xd66c,	// (0x00087f6a) cell_dialer_keypad_pane_ParamLimits

0xd66c,	// (0x00087f6a) cell_dialer_keypad_pane

0xa52b,	// (0x00084e29) cell_dialer_command_1_pane_ParamLimits

0xa52b,	// (0x00084e29) cell_dialer_command_1_pane

0xd683,	// (0x00087f81) cell_dialer_command_2_pane_ParamLimits

0xd683,	// (0x00087f81) cell_dialer_command_2_pane

0xa52b,	// (0x00084e29) bg_button_pane_cp02_ParamLimits

0xa52b,	// (0x00084e29) bg_button_pane_cp02

0xac02,	// (0x00085500) cell_dialer_keypad_pane_g1_ParamLimits

0xac02,	// (0x00085500) cell_dialer_keypad_pane_g1

0xa52b,	// (0x00084e29) bg_button_pane_cp03_ParamLimits

0xa52b,	// (0x00084e29) bg_button_pane_cp03

0xac02,	// (0x00085500) cell_dialer_command_1_pane_g1_ParamLimits

0xac02,	// (0x00085500) cell_dialer_command_1_pane_g1

0x11a6,	// (0x0007baa4) bg_button_pane_cp04

0xac48,	// (0x00085546) cell_dialer_command_2_pane_g1

0x11a6,	// (0x0007baa4) bg_button_pane_cp06

0xac48,	// (0x00085546) dialer_ne_clear_pane_g1

0xb877,	// (0x00086175) navi_pane_g2

0xb8a5,	// (0x000861a3) navi_pane_g3

0x0002,

0xf32a,	// (0x00089c28) navi_pane_g

0xb934,	// (0x00086232) navi_pane_mv_g2

0xb95b,	// (0x00086259) navi_pane_mv_g5

0x2f6b,	// (0x0007d869) navi_pane_mv_t1

0xacc0,	// (0x000855be) main_clock2_pane

0xa52b,	// (0x00084e29) main_clock2_list_pane_ParamLimits

0xa52b,	// (0x00084e29) main_clock2_list_pane

0x49b2,	// (0x0007f2b0) main_clock2_pane_t1_ParamLimits

0x49b2,	// (0x0007f2b0) main_clock2_pane_t1

0x49ed,	// (0x0007f2eb) main_clock2_pane_t2_ParamLimits

0x49ed,	// (0x0007f2eb) main_clock2_pane_t2

0x0004,

0xf705,	// (0x0008a003) main_clock2_pane_t_ParamLimits

0xf705,	// (0x0008a003) main_clock2_pane_t

0x4a8d,	// (0x0007f38b) popup_clock_analogue_window_cp03_ParamLimits

0x4a8d,	// (0x0007f38b) popup_clock_analogue_window_cp03

0x4ab2,	// (0x0007f3b0) popup_clock_digital_window_cp02_ParamLimits

0x4ab2,	// (0x0007f3b0) popup_clock_digital_window_cp02

0x4b2b,	// (0x0007f429) main_clock2_list_single_pane_ParamLimits

0x4b2b,	// (0x0007f429) main_clock2_list_single_pane

0xaef5,	// (0x000857f3) list_highlight_pane_cp05

0xd6c6,	// (0x00087fc4) main_clock2_list_single_pane_t1

0x1f81,	// (0x0007c87f) popup_toolbar_window_cp04_ParamLimits

0xac10,	// (0x0008550e) camera2_autofocus_pane_g2_ParamLimits

0xac10,	// (0x0008550e) camera2_autofocus_pane_g2

0xac10,	// (0x0008550e) camera2_autofocus_pane_g3_ParamLimits

0xac10,	// (0x0008550e) camera2_autofocus_pane_g3

0xac10,	// (0x0008550e) camera2_autofocus_pane_g4_ParamLimits

0xac10,	// (0x0008550e) camera2_autofocus_pane_g4

0xac10,	// (0x0008550e) camera2_autofocus_pane_g5_ParamLimits

0xac10,	// (0x0008550e) camera2_autofocus_pane_g5

0x0004,

0xf649,	// (0x00089f47) camera2_autofocus_pane_g_ParamLimits

0xf649,	// (0x00089f47) camera2_autofocus_pane_g

0x4236,	// (0x0007eb34) camera2_autofocus_pane_cp_g2

0x423e,	// (0x0007eb3c) camera2_autofocus_pane_cp_g3

0x4246,	// (0x0007eb44) camera2_autofocus_pane_cp_g4

0x424e,	// (0x0007eb4c) camera2_autofocus_pane_cp_g5

0x0004,

0xf6af,	// (0x00089fad) camera2_autofocus_pane_cp_g

0x11a6,	// (0x0007baa4) popup_dialer_spcha_window

0x11a6,	// (0x0007baa4) bg_popup_sub_pane_cp07

0x11a6,	// (0x0007baa4) list_spcha_pane

0xd6d4,	// (0x00087fd2) list_single_spcha_pane_ParamLimits

0xd6d4,	// (0x00087fd2) list_single_spcha_pane

0x11a6,	// (0x0007baa4) list_highlight_pane_cp06

0xb468,	// (0x00085d66) list_single_spcha_pane_t1

0xc821,	// (0x0008711f) popup_call2_audio_out_window_g4_ParamLimits

0xc821,	// (0x0008711f) popup_call2_audio_out_window_g4

0x11a6,	// (0x0007baa4) main_imed2_pane

0xcdad,	// (0x000876ab) popup_imed_adjust2_window

0x3bd5,	// (0x0007e4d3) popup_imed_trans_window_ParamLimits

0x3bd5,	// (0x0007e4d3) popup_imed_trans_window

0xd0b6,	// (0x000879b4) popup_blid_sat_info2_window_t1

0xd0c4,	// (0x000879c2) popup_blid_sat_info2_window_t2

0x000a,

0xf5de,	// (0x00089edc) popup_blid_sat_info2_window_t

0x4bdc,	// (0x0007f4da) aid_size_cell_colour_35

0x4bfc,	// (0x0007f4fa) aid_size_cell_colour_112

0x4c1c,	// (0x0007f51a) aid_size_cell_effect

0xba86,	// (0x00086384) bg_tb_trans_pane_cp02

0xb38e,	// (0x00085c8c) heading_imed_pane

0x4c3c,	// (0x0007f53a) listscroll_imed_pane

0xd6e6,	// (0x00087fe4) heading_imed_pane_g1

0xd6ee,	// (0x00087fec) heading_imed_pane_t1

0xd6fc,	// (0x00087ffa) grid_imed_colour_35_pane_ParamLimits

0xd6fc,	// (0x00087ffa) grid_imed_colour_35_pane

0x4c48,	// (0x0007f546) grid_imed_effect_pane

0xd714,	// (0x00088012) list_imed_aspect_pane

0x4c5e,	// (0x0007f55c) scroll_pane_cp027_ParamLimits

0x4c5e,	// (0x0007f55c) scroll_pane_cp027

0x4c6f,	// (0x0007f56d) cell_imed_effect_pane_ParamLimits

0x4c6f,	// (0x0007f56d) cell_imed_effect_pane

0xd71c,	// (0x0008801a) cell_imed_colour_pane_ParamLimits

0xd71c,	// (0x0008801a) cell_imed_colour_pane

0xd75e,	// (0x0008805c) cell_imed_colour_pane_g1_ParamLimits

0xd75e,	// (0x0008805c) cell_imed_colour_pane_g1

0xd76f,	// (0x0008806d) hgihlgiht_grid_pane_cp016_ParamLimits

0xd76f,	// (0x0008806d) hgihlgiht_grid_pane_cp016

0x4c96,	// (0x0007f594) cell_imed_effect_pane_g1

0x4c9e,	// (0x0007f59c) grid_highlight_pane_cp017

0xd780,	// (0x0008807e) list_imed_single_pane_ParamLimits

0xd780,	// (0x0008807e) list_imed_single_pane

0x11a6,	// (0x0007baa4) list_highlight_pane_cp07

0xd795,	// (0x00088093) list_imed_aspect_pane_comp1_t1

0xba86,	// (0x00086384) bg_tb_trans_pane_cp05

0xd7b7,	// (0x000880b5) popup_imed_adjust2_window_g1

0xd7de,	// (0x000880dc) popup_imed_adjust2_window_t1

0xd7f6,	// (0x000880f4) slider_imed_adjust_pane

0xd80a,	// (0x00088108) slider_imed_adjust_pane_g1

0xd81a,	// (0x00088118) slider_imed_adjust_pane_g2

0xd82a,	// (0x00088128) slider_imed_adjust_pane_g3

0xd83b,	// (0x00088139) slider_imed_adjust_pane_g4

0x0003,

0xf722,	// (0x0008a020) slider_imed_adjust_pane_g

0x4ca7,	// (0x0007f5a5) aid_size_cell_clipart2

0x4cb3,	// (0x0007f5b1) grid_imed_clipart_pane

0xbb19,	// (0x00086417) scroll_pane_cp031

0x4cbd,	// (0x0007f5bb) cell_imed_clipart_pane_ParamLimits

0x4cbd,	// (0x0007f5bb) cell_imed_clipart_pane

0x4cdf,	// (0x0007f5dd) cell_imed_clipart_pane_g1

0x11a6,	// (0x0007baa4) grid_highlight_pane_cp014

0x498e,	// (0x0007f28c) main_clock2_pane_g1_ParamLimits

0x498e,	// (0x0007f28c) main_clock2_pane_g1

0x4ad2,	// (0x0007f3d0) aid_call2_pane_cp10

0x4ae4,	// (0x0007f3e2) aid_call_pane_cp10

0xb7d6,	// (0x000860d4) popup_clock_analogue_window_cp10_g1

0xb7d6,	// (0x000860d4) popup_clock_analogue_window_cp10_g2

0x4af6,	// (0x0007f3f4) popup_clock_analogue_window_cp10_g3

0x4af6,	// (0x0007f3f4) popup_clock_analogue_window_cp10_g4

0xb7d6,	// (0x000860d4) popup_clock_analogue_window_cp10_g5

0x0004,

0xf710,	// (0x0008a00e) popup_clock_analogue_window_cp10_g

0x4b0c,	// (0x0007f40a) popup_clock_analogue_window_cp10_t1

0x4b3d,	// (0x0007f43b) clock_digital_number_pane_cp10_ParamLimits

0x4b3d,	// (0x0007f43b) clock_digital_number_pane_cp10

0x4b55,	// (0x0007f453) clock_digital_number_pane_cp11_ParamLimits

0x4b55,	// (0x0007f453) clock_digital_number_pane_cp11

0x4b6d,	// (0x0007f46b) clock_digital_number_pane_cp12_ParamLimits

0x4b6d,	// (0x0007f46b) clock_digital_number_pane_cp12

0x4b87,	// (0x0007f485) clock_digital_number_pane_cp13_ParamLimits

0x4b87,	// (0x0007f485) clock_digital_number_pane_cp13

0x4ba1,	// (0x0007f49f) clock_digital_separator_pane_cp10_ParamLimits

0x4ba1,	// (0x0007f49f) clock_digital_separator_pane_cp10

0x4bbb,	// (0x0007f4b9) popup_clock_digital_window_cp02_t1_ParamLimits

0x4bbb,	// (0x0007f4b9) popup_clock_digital_window_cp02_t1

0xab7f,	// (0x0008547d) clock_digital_number_pane_cp10_g1

0xab7f,	// (0x0008547d) clock_digital_number_pane_cp10_g2

0x0001,

0xf72b,	// (0x0008a029) clock_digital_number_pane_cp10_g

0xab7f,	// (0x0008547d) clock_digital_separator_pane_cp10_g1

0xab7f,	// (0x0008547d) clock_digital_separator_pane_g2_cp10

0xb963,	// (0x00086261) navi_pane_vded_g4

0xb96c,	// (0x0008626a) navi_pane_vded_g5

0xb975,	// (0x00086273) navi_pane_vded_t1

0x11a6,	// (0x0007baa4) main_vded_pane

0x4ce8,	// (0x0007f5e6) main_vded_pane_g1

0x4cf2,	// (0x0007f5f0) main_vded_pane_g2

0x4cfc,	// (0x0007f5fa) main_vded_pane_g3

0x0002,

0xf730,	// (0x0008a02e) main_vded_pane_g

0x4d06,	// (0x0007f604) main_vded_pane_t1

0x4d14,	// (0x0007f612) main_vded_pane_t2

0x0001,

0xf737,	// (0x0008a035) main_vded_pane_t

0x4d22,	// (0x0007f620) vded_slider_pane

0x4d2a,	// (0x0007f628) vded_video_pane

0xd84c,	// (0x0008814a) vded_video_pane_g1

0x4d32,	// (0x0007f630) vded_video_pane_g2

0xac48,	// (0x00085546) vded_video_pane_g3

0x0002,

0xf73c,	// (0x0008a03a) vded_video_pane_g

0xd856,	// (0x00088154) vded_slider_pane_g1

0xcfe1,	// (0x000878df) vded_slider_pane_g2

0xd85f,	// (0x0008815d) vded_slider_pane_g3

0xd868,	// (0x00088166) vded_slider_pane_g4

0xd871,	// (0x0008816f) vded_slider_pane_g5

0x0004,

0xf743,	// (0x0008a041) vded_slider_pane_g

0x47f2,	// (0x0007f0f0) mup3_rocker_pane_ParamLimits

0x47f2,	// (0x0007f0f0) mup3_rocker_pane

0x4d3b,	// (0x0007f639) mup3_control_keys_pane_g1

0x4d43,	// (0x0007f641) mup3_control_keys_pane_g2

0x4d4b,	// (0x0007f649) mup3_control_keys_pane_g3

0x4d53,	// (0x0007f651) mup3_control_keys_pane_g4

0x0003,

0xf74e,	// (0x0008a04c) mup3_control_keys_pane_g

0x13ac,	// (0x0007bcaa) popup_toolbar2_fixed_window_cp01_ParamLimits

0x13ac,	// (0x0007bcaa) popup_toolbar2_fixed_window_cp01

0x4826,	// (0x0007f124) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4826,	// (0x0007f124) popup_toolbar2_fixed_window_cp02

0xc1aa,	// (0x00086aa8) popup_call2_audio_second_window_t4_ParamLimits

0xc1aa,	// (0x00086aa8) popup_call2_audio_second_window_t4

0xc6e6,	// (0x00086fe4) popup_call2_audio_first_window_t6_ParamLimits

0xc6e6,	// (0x00086fe4) popup_call2_audio_first_window_t6

0xc924,	// (0x00087222) popup_call2_audio_out_window_t6_ParamLimits

0xc924,	// (0x00087222) popup_call2_audio_out_window_t6

0x11a6,	// (0x0007baa4) main_vitu_pane

0xa52b,	// (0x00084e29) aid_size_cell_itu_ParamLimits

0xa52b,	// (0x00084e29) aid_size_cell_itu

0xa52b,	// (0x00084e29) bg_popup_window_pane_cp08_ParamLimits

0xa52b,	// (0x00084e29) bg_popup_window_pane_cp08

0xa52b,	// (0x00084e29) field_vitu_entry_pane_ParamLimits

0xa52b,	// (0x00084e29) field_vitu_entry_pane

0xa52b,	// (0x00084e29) grid_vitu_function_pane_ParamLimits

0xa52b,	// (0x00084e29) grid_vitu_function_pane

0xa52b,	// (0x00084e29) grid_vitu_itu_pane_ParamLimits

0xa52b,	// (0x00084e29) grid_vitu_itu_pane

0xa52b,	// (0x00084e29) cell_vitu_itu_pane_ParamLimits

0xa52b,	// (0x00084e29) cell_vitu_itu_pane

0xa52b,	// (0x00084e29) cell_vitu_function_pane_ParamLimits

0xa52b,	// (0x00084e29) cell_vitu_function_pane

0xa52b,	// (0x00084e29) bg_popup_sub_pane_cp08_ParamLimits

0xa52b,	// (0x00084e29) bg_popup_sub_pane_cp08

0xac52,	// (0x00085550) field_vitu_entry_pane_t1_ParamLimits

0xac52,	// (0x00085550) field_vitu_entry_pane_t1

0xd87a,	// (0x00088178) field_vitu_entry_pane_t2_ParamLimits

0xd87a,	// (0x00088178) field_vitu_entry_pane_t2

0x0001,

0xf757,	// (0x0008a055) field_vitu_entry_pane_t_ParamLimits

0xf757,	// (0x0008a055) field_vitu_entry_pane_t

0xcf08,	// (0x00087806) bg_button_pane_cp05_ParamLimits

0xcf08,	// (0x00087806) bg_button_pane_cp05

0xd897,	// (0x00088195) cell_vitu_itu_pane_g1

0xba72,	// (0x00086370) cell_vitu_itu_pane_t1_ParamLimits

0xba72,	// (0x00086370) cell_vitu_itu_pane_t1

0xba72,	// (0x00086370) cell_vitu_itu_pane_t2_ParamLimits

0xba72,	// (0x00086370) cell_vitu_itu_pane_t2

0x0002,

0xf75c,	// (0x0008a05a) cell_vitu_itu_pane_t_ParamLimits

0xf75c,	// (0x0008a05a) cell_vitu_itu_pane_t

0x11a6,	// (0x0007baa4) bg_button_pane_cp07

0xac48,	// (0x00085546) cell_vitu_function_pane_g1

0xac40,	// (0x0008553e) main_calc_pane_g1

0x11d4,	// (0x0007bad2) aid_visual_content_pane

0x11a6,	// (0x0007baa4) main_vradio_pane

0xac02,	// (0x00085500) main_vradio_pane_g1_ParamLimits

0xac02,	// (0x00085500) main_vradio_pane_g1

0xac10,	// (0x0008550e) main_vradio_pane_g2_ParamLimits

0xac10,	// (0x0008550e) main_vradio_pane_g2

0x0001,

0xf18c,	// (0x00089a8a) main_vradio_pane_g_ParamLimits

0xf18c,	// (0x00089a8a) main_vradio_pane_g

0xac52,	// (0x00085550) main_vradio_pane_t1_ParamLimits

0xac52,	// (0x00085550) main_vradio_pane_t1

0xac52,	// (0x00085550) main_vradio_pane_t2_ParamLimits

0xac52,	// (0x00085550) main_vradio_pane_t2

0xac66,	// (0x00085564) main_vradio_pane_t3_ParamLimits

0xac66,	// (0x00085564) main_vradio_pane_t3

0x0002,

0xf763,	// (0x0008a061) main_vradio_pane_t_ParamLimits

0xf763,	// (0x0008a061) main_vradio_pane_t

0xa52b,	// (0x00084e29) vradio_rocker_control_pane_ParamLimits

0xa52b,	// (0x00084e29) vradio_rocker_control_pane

0xa52b,	// (0x00084e29) vradio_station_info_pane_ParamLimits

0xa52b,	// (0x00084e29) vradio_station_info_pane

0xa52b,	// (0x00084e29) vradio_frequency_info_pane_ParamLimits

0xa52b,	// (0x00084e29) vradio_frequency_info_pane

0xac48,	// (0x00085546) vradio_station_info_pane_g1

0xba72,	// (0x00086370) vradio_station_info_pane_t1_ParamLimits

0xba72,	// (0x00086370) vradio_station_info_pane_t1

0xac66,	// (0x00085564) vradio_station_info_pane_t2_ParamLimits

0xac66,	// (0x00085564) vradio_station_info_pane_t2

0x0001,

0xf76a,	// (0x0008a068) vradio_station_info_pane_t_ParamLimits

0xf76a,	// (0x0008a068) vradio_station_info_pane_t

0x11a6,	// (0x0007baa4) vradio_tuning_pane

0x4d63,	// (0x0007f661) vradio_rocker_control_pane_g1

0xd8b3,	// (0x000881b1) vradio_rocker_control_pane_g2

0x4d6d,	// (0x0007f66b) vradio_rocker_control_pane_g3

0x4d77,	// (0x0007f675) vradio_rocker_control_pane_g4

0x4d81,	// (0x0007f67f) vradio_rocker_control_pane_g5

0x0004,

0xf76f,	// (0x0008a06d) vradio_rocker_control_pane_g

0xac48,	// (0x00085546) vradio_frequency_info_pane_g1

0xac52,	// (0x00085550) vradio_frequency_info_pane_t1_ParamLimits

0xac52,	// (0x00085550) vradio_frequency_info_pane_t1

0x4d8b,	// (0x0007f689) vradio_tuning_pane_g1

0x4d96,	// (0x0007f694) vradio_tuning_pane_t1

0xa4ea,	// (0x00084de8) area_side_right_pane_ParamLimits

0xa4ea,	// (0x00084de8) area_side_right_pane

0xcd4e,	// (0x0008764c) status_small_pane_g1

0xcd56,	// (0x00087654) status_small_pane_g2

0xcd5f,	// (0x0008765d) status_small_pane_g3

0xcd68,	// (0x00087666) status_small_pane_g4

0x0003,

0xf540,	// (0x00089e3e) status_small_pane_g

0xcd71,	// (0x0008766f) status_small_pane_t1

0x11a6,	// (0x0007baa4) main_video3_pane

0x11a6,	// (0x0007baa4) cams_zoom_vslider_pane

0xd8bb,	// (0x000881b9) image3_wide_pane_ParamLimits

0xd8bb,	// (0x000881b9) image3_wide_pane

0x11a6,	// (0x0007baa4) image3_wide_small_pane

0xd8d5,	// (0x000881d3) main_video3_pane_g1_ParamLimits

0xd8d5,	// (0x000881d3) main_video3_pane_g1

0xd8d5,	// (0x000881d3) main_video3_pane_g2_ParamLimits

0xd8d5,	// (0x000881d3) main_video3_pane_g2

0x0001,

0xf77a,	// (0x0008a078) main_video3_pane_g_ParamLimits

0xf77a,	// (0x0008a078) main_video3_pane_g

0xd8f3,	// (0x000881f1) main_video3_pane_t1_ParamLimits

0xd8f3,	// (0x000881f1) main_video3_pane_t1

0xd8f3,	// (0x000881f1) main_video3_pane_t2_ParamLimits

0xd8f3,	// (0x000881f1) main_video3_pane_t2

0xd8f3,	// (0x000881f1) main_video3_pane_t3_ParamLimits

0xd8f3,	// (0x000881f1) main_video3_pane_t3

0x0002,

0xf77f,	// (0x0008a07d) main_video3_pane_t_ParamLimits

0xf77f,	// (0x0008a07d) main_video3_pane_t

0xac48,	// (0x00085546) cams_zoom_vslider_pane_g1

0xac48,	// (0x00085546) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x000899ad) cams_zoom_vslider_pane_g

0x11a6,	// (0x0007baa4) small_slider_vertical_pane

0xac48,	// (0x00085546) small_slider_vertical_pane_g1

0xac48,	// (0x00085546) small_slider_vertical_pane_g2

0xd91a,	// (0x00088218) small_slider_vertical_pane_g3

0x0002,

0xf786,	// (0x0008a084) small_slider_vertical_pane_g

0x11a6,	// (0x0007baa4) main_hwr_training_pane

0xd923,	// (0x00088221) hwr_training_instruct_pane_ParamLimits

0xd923,	// (0x00088221) hwr_training_instruct_pane

0x4da5,	// (0x0007f6a3) hwr_training_navi_pane_ParamLimits

0x4da5,	// (0x0007f6a3) hwr_training_navi_pane

0x4dc4,	// (0x0007f6c2) hwr_training_write_pane_ParamLimits

0x4dc4,	// (0x0007f6c2) hwr_training_write_pane

0x11a6,	// (0x0007baa4) bg_frame_shadow_pane

0xd95a,	// (0x00088258) hwr_training_write_pane_g1

0xd962,	// (0x00088260) hwr_training_write_pane_g2

0xd96a,	// (0x00088268) hwr_training_write_pane_g3

0xd972,	// (0x00088270) hwr_training_write_pane_g4

0xd97a,	// (0x00088278) hwr_training_write_pane_g5

0xd982,	// (0x00088280) hwr_training_write_pane_g6

0xd98a,	// (0x00088288) hwr_training_write_pane_g7

0x0006,

0xf78d,	// (0x0008a08b) hwr_training_write_pane_g

0xd992,	// (0x00088290) hwr_training_navi_pane_g1_ParamLimits

0xd992,	// (0x00088290) hwr_training_navi_pane_g1

0xd9a4,	// (0x000882a2) hwr_training_navi_pane_g2_ParamLimits

0xd9a4,	// (0x000882a2) hwr_training_navi_pane_g2

0xd9b6,	// (0x000882b4) hwr_training_navi_pane_g3_ParamLimits

0xd9b6,	// (0x000882b4) hwr_training_navi_pane_g3

0xd9c6,	// (0x000882c4) hwr_training_navi_pane_g4_ParamLimits

0xd9c6,	// (0x000882c4) hwr_training_navi_pane_g4

0x0004,

0xf79c,	// (0x0008a09a) hwr_training_navi_pane_g_ParamLimits

0xf79c,	// (0x0008a09a) hwr_training_navi_pane_g

0xd9d3,	// (0x000882d1) hwr_training_navi_pane_t1

0x4e0e,	// (0x0007f70c) list_single_hwr_training_instruct_pane_ParamLimits

0x4e0e,	// (0x0007f70c) list_single_hwr_training_instruct_pane

0xd9e1,	// (0x000882df) list_single_hwr_training_instruct_pane_t1

0xd1b7,	// (0x00087ab5) bg_frame_shadow_pane_g1

0xd9f0,	// (0x000882ee) bg_frame_shadow_pane_g2

0xd9f8,	// (0x000882f6) bg_frame_shadow_pane_g3

0xda00,	// (0x000882fe) bg_frame_shadow_pane_g4

0xda08,	// (0x00088306) bg_frame_shadow_pane_g5

0xda10,	// (0x0008830e) bg_frame_shadow_pane_g6

0xda18,	// (0x00088316) bg_frame_shadow_pane_g7

0xad9c,	// (0x0008569a) bg_frame_shadow_pane_g8

0x0007,

0xf7a7,	// (0x0008a0a5) bg_frame_shadow_pane_g

0x11a6,	// (0x0007baa4) main_video_tele_dialer_pane

0x4e24,	// (0x0007f722) aid_size_cell_video_keypad_ParamLimits

0x4e24,	// (0x0007f722) aid_size_cell_video_keypad

0x4e3e,	// (0x0007f73c) grid_video_dialer_keypad_pane_ParamLimits

0x4e3e,	// (0x0007f73c) grid_video_dialer_keypad_pane

0x4e8c,	// (0x0007f78a) video_down_pane_cp_ParamLimits

0x4e8c,	// (0x0007f78a) video_down_pane_cp

0x4ebe,	// (0x0007f7bc) cell_video_dialer_keypad_pane_ParamLimits

0x4ebe,	// (0x0007f7bc) cell_video_dialer_keypad_pane

0xda20,	// (0x0008831e) bg_button_pane_cp08_ParamLimits

0xda20,	// (0x0008831e) bg_button_pane_cp08

0x4ee0,	// (0x0007f7de) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4ee0,	// (0x0007f7de) cell_video_dialer_keypad_pane_g1

0x47dc,	// (0x0007f0da) mup3_rocker2_pane_ParamLimits

0x47dc,	// (0x0007f0da) mup3_rocker2_pane

0xac48,	// (0x00085546) mup3_rocker2_pane_g1

0x3ac4,	// (0x0007e3c2) main_dialer2_pane

0x11a6,	// (0x0007baa4) main_mp4_pane

0xda4a,	// (0x00088348) main_mp4_pane_g1_ParamLimits

0xda4a,	// (0x00088348) main_mp4_pane_g1

0xda4a,	// (0x00088348) main_mp4_pane_g2_ParamLimits

0xda4a,	// (0x00088348) main_mp4_pane_g2

0x4f1a,	// (0x0007f818) main_mp4_pane_g3_ParamLimits

0x4f1a,	// (0x0007f818) main_mp4_pane_g3

0xda68,	// (0x00088366) main_mp4_pane_g4_ParamLimits

0xda68,	// (0x00088366) main_mp4_pane_g4

0xda90,	// (0x0008838e) main_mp4_pane_g5_ParamLimits

0xda90,	// (0x0008838e) main_mp4_pane_g5

0x0007,

0xf7c7,	// (0x0008a0c5) main_mp4_pane_g_ParamLimits

0xf7c7,	// (0x0008a0c5) main_mp4_pane_g

0xdaf8,	// (0x000883f6) main_mp4_pane_t1_ParamLimits

0xdaf8,	// (0x000883f6) main_mp4_pane_t1

0xdb5a,	// (0x00088458) main_mp4_pane_t2_ParamLimits

0xdb5a,	// (0x00088458) main_mp4_pane_t2

0xdbbe,	// (0x000884bc) main_mp4_pane_t3_ParamLimits

0xdbbe,	// (0x000884bc) main_mp4_pane_t3

0xdc1c,	// (0x0008851a) main_mp4_pane_t4_ParamLimits

0xdc1c,	// (0x0008851a) main_mp4_pane_t4

0x0003,

0xf7d8,	// (0x0008a0d6) main_mp4_pane_t_ParamLimits

0xf7d8,	// (0x0008a0d6) main_mp4_pane_t

0xdc7a,	// (0x00088578) mp4_progress_pane_ParamLimits

0xdc7a,	// (0x00088578) mp4_progress_pane

0xdcae,	// (0x000885ac) mp4_rocker_pane_ParamLimits

0xdcae,	// (0x000885ac) mp4_rocker_pane

0xe53c,	// (0x00088e3a) mp4_progress_pane_t1

0xe55e,	// (0x00088e5c) mp4_progress_pane_t2

0x0001,

0xf7e1,	// (0x0008a0df) mp4_progress_pane_t

0xe580,	// (0x00088e7e) mup_progress_pane_cp04

0xac48,	// (0x00085546) mp4_rocker_pane_g1

0xa52b,	// (0x00084e29) aid_cell_size_keypad2_ParamLimits

0xa52b,	// (0x00084e29) aid_cell_size_keypad2

0xa52b,	// (0x00084e29) dialer2_ne_pane_ParamLimits

0xa52b,	// (0x00084e29) dialer2_ne_pane

0xa52b,	// (0x00084e29) grid_dialer2_keypad_pane_ParamLimits

0xa52b,	// (0x00084e29) grid_dialer2_keypad_pane

0xcf08,	// (0x00087806) bg_popup_call_pane_cp07_ParamLimits

0xcf08,	// (0x00087806) bg_popup_call_pane_cp07

0x4f4a,	// (0x0007f848) dialer2_ne_pane_t1_ParamLimits

0x4f4a,	// (0x0007f848) dialer2_ne_pane_t1

0x4f89,	// (0x0007f887) cell_dialer2_keypad_pane_ParamLimits

0x4f89,	// (0x0007f887) cell_dialer2_keypad_pane

0xcf08,	// (0x00087806) bg_button_pane_pane_cp04_ParamLimits

0xcf08,	// (0x00087806) bg_button_pane_pane_cp04

0xac02,	// (0x00085500) cell_dialer2_keypad_pane_g1_ParamLimits

0xac02,	// (0x00085500) cell_dialer2_keypad_pane_g1

0x1e55,	// (0x0007c753) aid_placing_vt_set_content_ParamLimits

0x1e55,	// (0x0007c753) aid_placing_vt_set_content

0x1e7d,	// (0x0007c77b) aid_placing_vt_set_title_ParamLimits

0x1e7d,	// (0x0007c77b) aid_placing_vt_set_title

0x11a6,	// (0x0007baa4) main_image3_pane

0x4ffe,	// (0x0007f8fc) area_side_right_pane_cp01_ParamLimits

0x4ffe,	// (0x0007f8fc) area_side_right_pane_cp01

0x5015,	// (0x0007f913) main_image3_pane_g1_ParamLimits

0x5015,	// (0x0007f913) main_image3_pane_g1

0x5023,	// (0x0007f921) main_image3_pane_g2_ParamLimits

0x5023,	// (0x0007f921) main_image3_pane_g2

0x504b,	// (0x0007f949) main_image3_pane_g3_ParamLimits

0x504b,	// (0x0007f949) main_image3_pane_g3

0x5075,	// (0x0007f973) main_image3_pane_g4_ParamLimits

0x5075,	// (0x0007f973) main_image3_pane_g4

0x0003,

0xf7f0,	// (0x0008a0ee) main_image3_pane_g_ParamLimits

0xf7f0,	// (0x0008a0ee) main_image3_pane_g

0x509f,	// (0x0007f99d) main_image3_pane_t1_ParamLimits

0x509f,	// (0x0007f99d) main_image3_pane_t1

0x50f7,	// (0x0007f9f5) main_image3_pane_t2_ParamLimits

0x50f7,	// (0x0007f9f5) main_image3_pane_t2

0x5149,	// (0x0007fa47) main_image3_pane_t3_ParamLimits

0x5149,	// (0x0007fa47) main_image3_pane_t3

0x0003,

0xf7f9,	// (0x0008a0f7) main_image3_pane_t_ParamLimits

0xf7f9,	// (0x0008a0f7) main_image3_pane_t

0xa52b,	// (0x00084e29) grid_sctrl_middle_pane_cp01_ParamLimits

0xa52b,	// (0x00084e29) grid_sctrl_middle_pane_cp01

0x51d1,	// (0x0007facf) cell_sctrl_middle_pane_cp01_ParamLimits

0x51d1,	// (0x0007facf) cell_sctrl_middle_pane_cp01

0x51ee,	// (0x0007faec) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x51ee,	// (0x0007faec) cell_sctrl_middle_pane_cp01_g1

0x11a6,	// (0x0007baa4) main_call4_pane

0x5204,	// (0x0007fb02) aid_size_button_call4_ParamLimits

0x5204,	// (0x0007fb02) aid_size_button_call4

0x5237,	// (0x0007fb35) call4_windows_pane_ParamLimits

0x5237,	// (0x0007fb35) call4_windows_pane

0x5256,	// (0x0007fb54) grid_call4_button_pane_ParamLimits

0x5256,	// (0x0007fb54) grid_call4_button_pane

0x5289,	// (0x0007fb87) call4_windows_conf_pane

0x529e,	// (0x0007fb9c) popup_call4_audio_first_window_ParamLimits

0x529e,	// (0x0007fb9c) popup_call4_audio_first_window

0x52ee,	// (0x0007fbec) popup_call4_audio_second_window_ParamLimits

0x52ee,	// (0x0007fbec) popup_call4_audio_second_window

0x5305,	// (0x0007fc03) popup_call4_audio_wait_window_ParamLimits

0x5305,	// (0x0007fc03) popup_call4_audio_wait_window

0x5313,	// (0x0007fc11) cell_call4_button_pane_ParamLimits

0x5313,	// (0x0007fc11) cell_call4_button_pane

0x5338,	// (0x0007fc36) bg_button_pane_cp09_ParamLimits

0x5338,	// (0x0007fc36) bg_button_pane_cp09

0x5344,	// (0x0007fc42) cell_call4_button_pane_g1_ParamLimits

0x5344,	// (0x0007fc42) cell_call4_button_pane_g1

0x536a,	// (0x0007fc68) cell_call4_button_pane_t1_ParamLimits

0x536a,	// (0x0007fc68) cell_call4_button_pane_t1

0xe60d,	// (0x00088f0b) popup_call4_audio_conf_window_ParamLimits

0xe60d,	// (0x00088f0b) popup_call4_audio_conf_window

0x483c,	// (0x0007f13a) mup3_progress_pane_t1_ParamLimits

0x485b,	// (0x0007f159) mup3_progress_pane_t2_ParamLimits

0xd595,	// (0x00087e93) mup3_progress_pane_t3_ParamLimits

0xf6d8,	// (0x00089fd6) mup3_progress_pane_t_ParamLimits

0xd5b2,	// (0x00087eb0) mup_progress_pane_cp03_ParamLimits

0x4d5b,	// (0x0007f659) mup3_control_keys_pane_g4_copy1

0xdcae,	// (0x000885ac) mp4_rocker2_pane_ParamLimits

0xdcae,	// (0x000885ac) mp4_rocker2_pane

0xe621,	// (0x00088f1f) mp4_rocker2_pane_g1

0xe621,	// (0x00088f1f) mp4_rocker2_pane_g2

0xe621,	// (0x00088f1f) mp4_rocker2_pane_g3

0xe621,	// (0x00088f1f) mp4_rocker2_pane_g4

0xe621,	// (0x00088f1f) mp4_rocker2_pane_g5

0x0004,

0xf802,	// (0x0008a100) mp4_rocker2_pane_g

0x11a6,	// (0x0007baa4) main_camera4_pane

0x11a6,	// (0x0007baa4) main_video4_pane

0x4e5a,	// (0x0007f758) main_video_tele_dialer_pane_t1_ParamLimits

0x4e5a,	// (0x0007f758) main_video_tele_dialer_pane_t1

0x4e73,	// (0x0007f771) main_video_tele_dialer_pane_t2_ParamLimits

0x4e73,	// (0x0007f771) main_video_tele_dialer_pane_t2

0x0001,

0xf7b8,	// (0x0008a0b6) main_video_tele_dialer_pane_t_ParamLimits

0xf7b8,	// (0x0008a0b6) main_video_tele_dialer_pane_t

0x53ac,	// (0x0007fcaa) cam4_autofocus_pane_ParamLimits

0x53ac,	// (0x0007fcaa) cam4_autofocus_pane

0x53c2,	// (0x0007fcc0) cam4_image_uncrop_pane_ParamLimits

0x53c2,	// (0x0007fcc0) cam4_image_uncrop_pane

0x53dc,	// (0x0007fcda) cam4_indicators_pane_ParamLimits

0x53dc,	// (0x0007fcda) cam4_indicators_pane

0x5407,	// (0x0007fd05) main_camera4_pane_g1_ParamLimits

0x5407,	// (0x0007fd05) main_camera4_pane_g1

0x5419,	// (0x0007fd17) main_camera4_pane_g2_ParamLimits

0x5419,	// (0x0007fd17) main_camera4_pane_g2

0x542c,	// (0x0007fd2a) main_camera4_pane_g3_ParamLimits

0x542c,	// (0x0007fd2a) main_camera4_pane_g3

0x543f,	// (0x0007fd3d) main_camera4_pane_g4_ParamLimits

0x543f,	// (0x0007fd3d) main_camera4_pane_g4

0x5452,	// (0x0007fd50) main_camera4_pane_g5_ParamLimits

0x5452,	// (0x0007fd50) main_camera4_pane_g5

0x0005,

0xf80d,	// (0x0008a10b) main_camera4_pane_g_ParamLimits

0xf80d,	// (0x0008a10b) main_camera4_pane_g

0x5476,	// (0x0007fd74) main_camera4_pane_t1_ParamLimits

0x5476,	// (0x0007fd74) main_camera4_pane_t1

0xac02,	// (0x00085500) bg_tb_trans_pane_cp06

0xe64d,	// (0x00088f4b) cam4_indicators_pane_g1

0xe65e,	// (0x00088f5c) cam4_indicators_pane_g2

0x0002,

0xf828,	// (0x0008a126) cam4_indicators_pane_g

0xe676,	// (0x00088f74) cam4_indicators_pane_t1

0x54ec,	// (0x0007fdea) main_video4_pane_g1_ParamLimits

0x54ec,	// (0x0007fdea) main_video4_pane_g1

0x54fb,	// (0x0007fdf9) main_video4_pane_g2_ParamLimits

0x54fb,	// (0x0007fdf9) main_video4_pane_g2

0x550a,	// (0x0007fe08) main_video4_pane_g3_ParamLimits

0x550a,	// (0x0007fe08) main_video4_pane_g3

0x5519,	// (0x0007fe17) main_video4_pane_g4_ParamLimits

0x5519,	// (0x0007fe17) main_video4_pane_g4

0x0004,

0xf82f,	// (0x0008a12d) main_video4_pane_g_ParamLimits

0xf82f,	// (0x0008a12d) main_video4_pane_g

0x5537,	// (0x0007fe35) vid4_indicators_pane_ParamLimits

0x5537,	// (0x0007fe35) vid4_indicators_pane

0x5565,	// (0x0007fe63) video4_image_uncrop_cif_pane_ParamLimits

0x5565,	// (0x0007fe63) video4_image_uncrop_cif_pane

0x557f,	// (0x0007fe7d) video4_image_uncrop_nhd_pane_ParamLimits

0x557f,	// (0x0007fe7d) video4_image_uncrop_nhd_pane

0x53c2,	// (0x0007fcc0) video4_image_uncrop_vga_pane_ParamLimits

0x53c2,	// (0x0007fcc0) video4_image_uncrop_vga_pane

0xa52b,	// (0x00084e29) bg_tb_trans_pane_cp07

0xe6a0,	// (0x00088f9e) vid4_indicators_pane_g1

0xe6b4,	// (0x00088fb2) vid4_indicators_pane_g2

0xe6c8,	// (0x00088fc6) vid4_indicators_pane_g3

0x0004,

0xf83a,	// (0x0008a138) vid4_indicators_pane_g

0xe6f5,	// (0x00088ff3) vid4_indicators_pane_t1

0x5593,	// (0x0007fe91) cam4_autofocus_pane_g1

0x559b,	// (0x0007fe99) cam4_autofocus_pane_g2

0x55a3,	// (0x0007fea1) cam4_autofocus_pane_g3

0x0002,

0xf845,	// (0x0008a143) cam4_autofocus_pane_g

0x55ab,	// (0x0007fea9) cam4_autofocus_pane_g3_copy1

0x4ea2,	// (0x0007f7a0) video_down_pane_cp_t1

0x4eb0,	// (0x0007f7ae) video_down_pane_cp_t2

0x0001,

0xf7bd,	// (0x0008a0bb) video_down_pane_cp_t

0xa52b,	// (0x00084e29) popup_vitu2_window_ParamLimits

0xa52b,	// (0x00084e29) popup_vitu2_window

0x55b3,	// (0x0007feb1) aid_size_cell2_itu2_ParamLimits

0x55b3,	// (0x0007feb1) aid_size_cell2_itu2

0x55d9,	// (0x0007fed7) aid_size_cell_itu2_ParamLimits

0x55d9,	// (0x0007fed7) aid_size_cell_itu2

0x48e6,	// (0x0007f1e4) bg_popup_window_pane_cp09_ParamLimits

0x48e6,	// (0x0007f1e4) bg_popup_window_pane_cp09

0x5635,	// (0x0007ff33) field_vitu2_entry_pane_ParamLimits

0x5635,	// (0x0007ff33) field_vitu2_entry_pane

0x565b,	// (0x0007ff59) grid_vitu2_function_pane_ParamLimits

0x565b,	// (0x0007ff59) grid_vitu2_function_pane

0x56a8,	// (0x0007ffa6) grid_vitu2_itu_pane_ParamLimits

0x56a8,	// (0x0007ffa6) grid_vitu2_itu_pane

0x573a,	// (0x00080038) cell_vitu2_itu_pane_ParamLimits

0x573a,	// (0x00080038) cell_vitu2_itu_pane

0x5766,	// (0x00080064) cell_vitu2_function_pane_ParamLimits

0x5766,	// (0x00080064) cell_vitu2_function_pane

0xe70c,	// (0x0008900a) bg_popup_call_pane_cp08_ParamLimits

0xe70c,	// (0x0008900a) bg_popup_call_pane_cp08

0xe723,	// (0x00089021) field_vitu2_entry_pane_g1

0xe72f,	// (0x0008902d) field_vitu2_entry_pane_g2

0x0002,

0xf84c,	// (0x0008a14a) field_vitu2_entry_pane_g

0x0a0c,	// (0x0007b30a) field_vitu2_entry_pane_t1_ParamLimits

0x0a0c,	// (0x0007b30a) field_vitu2_entry_pane_t1

0xdce2,	// (0x000885e0) field_vitu2_entry_pane_t2_ParamLimits

0xdce2,	// (0x000885e0) field_vitu2_entry_pane_t2

0x0001,

0xf853,	// (0x0008a151) field_vitu2_entry_pane_t_ParamLimits

0xf853,	// (0x0008a151) field_vitu2_entry_pane_t

0x57a5,	// (0x000800a3) bg_button_pane_cp010_ParamLimits

0x57a5,	// (0x000800a3) bg_button_pane_cp010

0x57b3,	// (0x000800b1) cell_vitu2_itu_pane_g1

0x57d9,	// (0x000800d7) cell_vitu2_itu_pane_t1_ParamLimits

0x57d9,	// (0x000800d7) cell_vitu2_itu_pane_t1

0x0a3c,	// (0x0007b33a) cell_vitu2_itu_pane_t2_ParamLimits

0x0a3c,	// (0x0007b33a) cell_vitu2_itu_pane_t2

0x0002,

0xf85d,	// (0x0008a15b) cell_vitu2_itu_pane_t_ParamLimits

0xf85d,	// (0x0008a15b) cell_vitu2_itu_pane_t

0xa52b,	// (0x00084e29) bg_button_pane_cp011

0x5837,	// (0x00080135) cell_vitu2_function_pane_g1

0x11a6,	// (0x0007baa4) main_myfav_hc_pane

0x5199,	// (0x0007fa97) popup_image3_note_pane_ParamLimits

0x5199,	// (0x0007fa97) popup_image3_note_pane

0x51b5,	// (0x0007fab3) popup_image3_tool_bar_pane_ParamLimits

0x51b5,	// (0x0007fab3) popup_image3_tool_bar_pane

0x0aca,	// (0x0007b3c8) cell_vitu2_itu_pane_t3_ParamLimits

0x0aca,	// (0x0007b3c8) cell_vitu2_itu_pane_t3

0x11a6,	// (0x0007baa4) bg_popup_trans_pane

0xe743,	// (0x00089041) grid_image3_tool_bar_pane

0xe74d,	// (0x0008904b) bg_popup_trans_pane_g1

0xb118,	// (0x00085a16) bg_popup_trans_pane_g2

0xe755,	// (0x00089053) bg_popup_trans_pane_g3

0xe75d,	// (0x0008905b) bg_popup_trans_pane_g4

0xe765,	// (0x00089063) bg_popup_trans_pane_g5

0xe76d,	// (0x0008906b) bg_popup_trans_pane_g6

0xe775,	// (0x00089073) bg_popup_trans_pane_g7

0xe77d,	// (0x0008907b) bg_popup_trans_pane_g8

0xb0f8,	// (0x000859f6) bg_popup_trans_pane_g9

0x0008,

0xf864,	// (0x0008a162) bg_popup_trans_pane_g

0xe785,	// (0x00089083) cell_image3_tool_bar_pane_ParamLimits

0xe785,	// (0x00089083) cell_image3_tool_bar_pane

0xac48,	// (0x00085546) cell_image3_tool_bar_pane_g1

0x11a6,	// (0x0007baa4) bg_popup_trans_pane_cp1

0xe799,	// (0x00089097) popup_image3_note_pane_t1

0xe7a7,	// (0x000890a5) popup_image3_note_pane_t2

0xe7b5,	// (0x000890b3) popup_image3_note_pane_t3

0x0002,

0xf877,	// (0x0008a175) popup_image3_note_pane_t

0xe7c3,	// (0x000890c1) popup_image3_note_pane_t3_copy1

0x584a,	// (0x00080148) bg_myfav_hc_instruction_pane_ParamLimits

0x584a,	// (0x00080148) bg_myfav_hc_instruction_pane

0x585e,	// (0x0008015c) cell_myfav_contact_pane_ParamLimits

0x585e,	// (0x0008015c) cell_myfav_contact_pane

0x587c,	// (0x0008017a) cell_myfav_contact_pane_cp1_ParamLimits

0x587c,	// (0x0008017a) cell_myfav_contact_pane_cp1

0x5894,	// (0x00080192) cell_myfav_contact_pane_cp2_ParamLimits

0x5894,	// (0x00080192) cell_myfav_contact_pane_cp2

0x58ac,	// (0x000801aa) cell_myfav_contact_pane_cp3_ParamLimits

0x58ac,	// (0x000801aa) cell_myfav_contact_pane_cp3

0x58c3,	// (0x000801c1) cell_myfav_contact_pane_cp4_ParamLimits

0x58c3,	// (0x000801c1) cell_myfav_contact_pane_cp4

0x58db,	// (0x000801d9) cell_myfav_contact_pane_cp5_ParamLimits

0x58db,	// (0x000801d9) cell_myfav_contact_pane_cp5

0x58ef,	// (0x000801ed) cell_myfav_contact_pane_cp6_ParamLimits

0x58ef,	// (0x000801ed) cell_myfav_contact_pane_cp6

0x5905,	// (0x00080203) cell_myfav_contact_pane_cp7_ParamLimits

0x5905,	// (0x00080203) cell_myfav_contact_pane_cp7

0xe7d1,	// (0x000890cf) listscroll_gen_pane_cp05

0x591f,	// (0x0008021d) main_myfav_hc_pane_g1_ParamLimits

0x591f,	// (0x0008021d) main_myfav_hc_pane_g1

0x5939,	// (0x00080237) main_myfav_hc_pane_g2_ParamLimits

0x5939,	// (0x00080237) main_myfav_hc_pane_g2

0x0002,

0xf87e,	// (0x0008a17c) main_myfav_hc_pane_g_ParamLimits

0xf87e,	// (0x0008a17c) main_myfav_hc_pane_g

0x596b,	// (0x00080269) main_myfav_hc_pane_t1_ParamLimits

0x596b,	// (0x00080269) main_myfav_hc_pane_t1

0xe7da,	// (0x000890d8) main_myfav_hc_pane_t2_ParamLimits

0xe7da,	// (0x000890d8) main_myfav_hc_pane_t2

0xe7ec,	// (0x000890ea) main_myfav_hc_pane_t3_ParamLimits

0xe7ec,	// (0x000890ea) main_myfav_hc_pane_t3

0x5982,	// (0x00080280) main_myfav_hc_pane_t4_ParamLimits

0x5982,	// (0x00080280) main_myfav_hc_pane_t4

0x0004,

0xf885,	// (0x0008a183) main_myfav_hc_pane_t_ParamLimits

0xf885,	// (0x0008a183) main_myfav_hc_pane_t

0xac48,	// (0x00085546) bg_myfav_hc_instruction_pane_g1

0xe7fe,	// (0x000890fc) cell_myfav_contact_pane_g1_ParamLimits

0xe7fe,	// (0x000890fc) cell_myfav_contact_pane_g1

0xe7fe,	// (0x000890fc) cell_myfav_contact_pane_g2_ParamLimits

0xe7fe,	// (0x000890fc) cell_myfav_contact_pane_g2

0xe80a,	// (0x00089108) cell_myfav_contact_pane_g3_ParamLimits

0xe80a,	// (0x00089108) cell_myfav_contact_pane_g3

0xac10,	// (0x0008550e) cell_myfav_contact_pane_g4_ParamLimits

0xac10,	// (0x0008550e) cell_myfav_contact_pane_g4

0xe817,	// (0x00089115) cell_myfav_contact_pane_g5_ParamLimits

0xe817,	// (0x00089115) cell_myfav_contact_pane_g5

0x0004,

0xf890,	// (0x0008a18e) cell_myfav_contact_pane_g_ParamLimits

0xf890,	// (0x0008a18e) cell_myfav_contact_pane_g

0x5953,	// (0x00080251) main_myfav_hc_pane_g3_ParamLimits

0x5953,	// (0x00080251) main_myfav_hc_pane_g3

0x130f,	// (0x0007bc0d) popup_adpt_find_window

0x59aa,	// (0x000802a8) afind_page_pane_ParamLimits

0x59aa,	// (0x000802a8) afind_page_pane

0x59c0,	// (0x000802be) aid_size_cell_afind_ParamLimits

0x59c0,	// (0x000802be) aid_size_cell_afind

0x59de,	// (0x000802dc) bg_popup_sub_pane_cp09_ParamLimits

0x59de,	// (0x000802dc) bg_popup_sub_pane_cp09

0x59f0,	// (0x000802ee) find_pane_cp01_ParamLimits

0x59f0,	// (0x000802ee) find_pane_cp01

0xe823,	// (0x00089121) grid_afind_control_pane_ParamLimits

0xe823,	// (0x00089121) grid_afind_control_pane

0x5a04,	// (0x00080302) grid_afind_pane_ParamLimits

0x5a04,	// (0x00080302) grid_afind_pane

0x5a26,	// (0x00080324) cell_afind_pane_ParamLimits

0x5a26,	// (0x00080324) cell_afind_pane

0xac48,	// (0x00085546) afind_page_pane_g1

0x5a8d,	// (0x0008038b) afind_page_pane_g2

0x5a95,	// (0x00080393) afind_page_pane_g3

0x0002,

0xf89b,	// (0x0008a199) afind_page_pane_g

0x5a9d,	// (0x0008039b) afind_page_pane_t1

0xe849,	// (0x00089147) cell_afind_grid_control_pane_ParamLimits

0xe849,	// (0x00089147) cell_afind_grid_control_pane

0xe858,	// (0x00089156) bg_button_pane_cp69_ParamLimits

0xe858,	// (0x00089156) bg_button_pane_cp69

0x5aab,	// (0x000803a9) cell_afind_pane_g1_ParamLimits

0x5aab,	// (0x000803a9) cell_afind_pane_g1

0x5ab8,	// (0x000803b6) cell_afind_pane_t1_ParamLimits

0x5ab8,	// (0x000803b6) cell_afind_pane_t1

0xe864,	// (0x00089162) bg_button_pane_cp72

0xe86c,	// (0x0008916a) cell_afind_grid_control_pane_g1

0x35c4,	// (0x0007dec2) aid_image_placing_area_ParamLimits

0x35c4,	// (0x0007dec2) aid_image_placing_area

0xac02,	// (0x00085500) field_vitu_entry_pane_g1_ParamLimits

0xac02,	// (0x00085500) field_vitu_entry_pane_g1

0xac02,	// (0x00085500) field_vitu_entry_pane_g2_ParamLimits

0xac02,	// (0x00085500) field_vitu_entry_pane_g2

0x0001,

0xf182,	// (0x00089a80) field_vitu_entry_pane_g_ParamLimits

0xf182,	// (0x00089a80) field_vitu_entry_pane_g

0xd897,	// (0x00088195) cell_vitu_itu_pane_g1_ParamLimits

0xd87a,	// (0x00088178) cell_vitu_itu_pane_t3_ParamLimits

0xd87a,	// (0x00088178) cell_vitu_itu_pane_t3

0xe53c,	// (0x00088e3a) mp4_progress_pane_t1_ParamLimits

0xe55e,	// (0x00088e5c) mp4_progress_pane_t2_ParamLimits

0xf7e1,	// (0x0008a0df) mp4_progress_pane_t_ParamLimits

0xe580,	// (0x00088e7e) mup_progress_pane_cp04_ParamLimits

0x5996,	// (0x00080294) main_myfav_hc_pane_t5_ParamLimits

0x5996,	// (0x00080294) main_myfav_hc_pane_t5

0xa4da,	// (0x00084dd8) aid_zoom_text_primary

0x130f,	// (0x0007bc0d) popup_adpt_find_window_ParamLimits

0xa52b,	// (0x00084e29) main_cam_set_pane

0x53f3,	// (0x0007fcf1) cam4_zoom_pane_ParamLimits

0x53f3,	// (0x0007fcf1) cam4_zoom_pane

0x5aca,	// (0x000803c8) main_cam_set_pane_g1_ParamLimits

0x5aca,	// (0x000803c8) main_cam_set_pane_g1

0x5ad8,	// (0x000803d6) main_cam_set_pane_g2_ParamLimits

0x5ad8,	// (0x000803d6) main_cam_set_pane_g2

0x0001,

0xf8a2,	// (0x0008a1a0) main_cam_set_pane_g_ParamLimits

0xf8a2,	// (0x0008a1a0) main_cam_set_pane_g

0x5af9,	// (0x000803f7) main_cam_set_pane_t1_ParamLimits

0x5af9,	// (0x000803f7) main_cam_set_pane_t1

0x5b14,	// (0x00080412) main_cset_listscroll_pane_ParamLimits

0x5b14,	// (0x00080412) main_cset_listscroll_pane

0x5b3a,	// (0x00080438) main_cset_slider_pane_ParamLimits

0x5b3a,	// (0x00080438) main_cset_slider_pane

0xe87d,	// (0x0008917b) main_cset_list_pane_ParamLimits

0xe87d,	// (0x0008917b) main_cset_list_pane

0xe88d,	// (0x0008918b) scroll_pane_cp028

0x5b60,	// (0x0008045e) aid_area_touch_slider

0x5b7c,	// (0x0008047a) cset_slider_pane

0x5b9f,	// (0x0008049d) main_cset_slider_pane_g1

0x5bb4,	// (0x000804b2) main_cset_slider_pane_g2

0x0011,

0xf8a7,	// (0x0008a1a5) main_cset_slider_pane_g

0xe8c6,	// (0x000891c4) main_cset_slider_pane_t1

0x5c70,	// (0x0008056e) main_cset_slider_pane_t2

0x5c8a,	// (0x00080588) main_cset_slider_pane_t3

0x5ca4,	// (0x000805a2) main_cset_slider_pane_t4

0x5cbe,	// (0x000805bc) main_cset_slider_pane_t5

0x5cd8,	// (0x000805d6) main_cset_slider_pane_t6

0x5ced,	// (0x000805eb) main_cset_slider_pane_t7

0x000e,

0xf8cc,	// (0x0008a1ca) main_cset_slider_pane_t

0x5df1,	// (0x000806ef) cset_list_set_pane_ParamLimits

0x5df1,	// (0x000806ef) cset_list_set_pane

0xea5f,	// (0x0008935d) aid_position_infowindow_above

0xea67,	// (0x00089365) aid_position_infowindow_below

0x5e03,	// (0x00080701) cset_list_set_pane_g1_ParamLimits

0x5e03,	// (0x00080701) cset_list_set_pane_g1

0x0b28,	// (0x0007b426) cset_list_set_pane_g3_ParamLimits

0x0b28,	// (0x0007b426) cset_list_set_pane_g3

0x0001,

0xf8eb,	// (0x0008a1e9) cset_list_set_pane_g_ParamLimits

0xf8eb,	// (0x0008a1e9) cset_list_set_pane_g

0x0b37,	// (0x0007b435) cset_list_set_pane_t1_ParamLimits

0x0b37,	// (0x0007b435) cset_list_set_pane_t1

0xa52b,	// (0x00084e29) list_highlight_pane_cp021_ParamLimits

0xa52b,	// (0x00084e29) list_highlight_pane_cp021

0xbaf6,	// (0x000863f4) cset_slider_pane_g1

0xbb08,	// (0x00086406) cset_slider_pane_g2

0xbaff,	// (0x000863fd) cset_slider_pane_g3

0x0002,

0xf8f0,	// (0x0008a1ee) cset_slider_pane_g

0xe8ee,	// (0x000891ec) aid_area_touch_cam4_zoom

0xe8f6,	// (0x000891f4) cam4_zoom_cont_pane

0xe8fe,	// (0x000891fc) cam4_zoom_pane_g1

0xe906,	// (0x00089204) cam4_zoom_pane_g2

0x5e0f,	// (0x0008070d) cam4_zoom_pane_g3

0x0002,

0xf8f7,	// (0x0008a1f5) cam4_zoom_pane_g

0xea6f,	// (0x0008936d) cam4_zoom_cont_pane_g1

0xea78,	// (0x00089376) cam4_zoom_cont_pane_g2

0xea81,	// (0x0008937f) cam4_zoom_cont_pane_g3

0x0002,

0x0407,	// (0x0007ad05) cam4_zoom_cont_pane_g

0x5222,	// (0x0007fb20) call4_image_pane_ParamLimits

0x5222,	// (0x0007fb20) call4_image_pane

0x5289,	// (0x0007fb87) call4_windows_conf_pane_ParamLimits

0x52cc,	// (0x0007fbca) popup_call4_audio_in_window_ParamLimits

0x52cc,	// (0x0007fbca) popup_call4_audio_in_window

0x11a6,	// (0x0007baa4) bg_popup_call2_act_pane_cp02

0xe605,	// (0x00088f03) call4_list_conf_pane

0xac48,	// (0x00085546) call4_image_pane_g1

0xac48,	// (0x00085546) call4_image_pane_g2

0x0001,

0xf0af,	// (0x000899ad) call4_image_pane_g

0xea8a,	// (0x00089388) list_single_graphic_popup_conf4_pane_ParamLimits

0xea8a,	// (0x00089388) list_single_graphic_popup_conf4_pane

0x11a6,	// (0x0007baa4) list_highlight_pane_cp022

0xea9d,	// (0x0008939b) list_single_graphic_popup_conf4_pane_g1

0xb6d3,	// (0x00085fd1) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8fe,	// (0x0008a1fc) list_single_graphic_popup_conf4_pane_g

0xeaa5,	// (0x000893a3) list_single_graphic_popup_conf4_pane_t1

0x1fa1,	// (0x0007c89f) popup_vtel_slider_window_ParamLimits

0x1fa1,	// (0x0007c89f) popup_vtel_slider_window

0xe593,	// (0x00088e91) dialer2_ne_pane_t2_ParamLimits

0xe593,	// (0x00088e91) dialer2_ne_pane_t2

0x0001,

0xf7e6,	// (0x0008a0e4) dialer2_ne_pane_t_ParamLimits

0xf7e6,	// (0x0008a0e4) dialer2_ne_pane_t

0xcf08,	// (0x00087806) bg_popup_sub_pane_cp010_ParamLimits

0xcf08,	// (0x00087806) bg_popup_sub_pane_cp010

0x5e17,	// (0x00080715) popup_vtel_slider_window_g1_ParamLimits

0x5e17,	// (0x00080715) popup_vtel_slider_window_g1

0x5e2a,	// (0x00080728) popup_vtel_slider_window_g2_ParamLimits

0x5e2a,	// (0x00080728) popup_vtel_slider_window_g2

0x0003,

0xf903,	// (0x0008a201) popup_vtel_slider_window_g_ParamLimits

0xf903,	// (0x0008a201) popup_vtel_slider_window_g

0x5e80,	// (0x0008077e) vtel_slider_pane_ParamLimits

0x5e80,	// (0x0008077e) vtel_slider_pane

0x5ea2,	// (0x000807a0) vtel_slider_pane_g1_ParamLimits

0x5ea2,	// (0x000807a0) vtel_slider_pane_g1

0x5eb6,	// (0x000807b4) vtel_slider_pane_g2_ParamLimits

0x5eb6,	// (0x000807b4) vtel_slider_pane_g2

0x5ece,	// (0x000807cc) vtel_slider_pane_g3_ParamLimits

0x5ece,	// (0x000807cc) vtel_slider_pane_g3

0x5ea2,	// (0x000807a0) vtel_slider_pane_g4_ParamLimits

0x5ea2,	// (0x000807a0) vtel_slider_pane_g4

0x5ee4,	// (0x000807e2) vtel_slider_pane_g5_ParamLimits

0x5ee4,	// (0x000807e2) vtel_slider_pane_g5

0x0004,

0xf90c,	// (0x0008a20a) vtel_slider_pane_g_ParamLimits

0xf90c,	// (0x0008a20a) vtel_slider_pane_g

0xa52b,	// (0x00084e29) main_gallery2_pane

0x5605,	// (0x0007ff03) aid_size_row_itut2_dropdow_list_ParamLimits

0x5605,	// (0x0007ff03) aid_size_row_itut2_dropdow_list

0x567f,	// (0x0007ff7d) grid_vitu2_function_top_pane_ParamLimits

0x567f,	// (0x0007ff7d) grid_vitu2_function_top_pane

0x56e3,	// (0x0007ffe1) popup_vitu2_dropdown_list_window_ParamLimits

0x56e3,	// (0x0007ffe1) popup_vitu2_dropdown_list_window

0x570e,	// (0x0008000c) popup_vitu2_match_list_window

0x5efa,	// (0x000807f8) cell_vitu2_function_top_pane_ParamLimits

0x5efa,	// (0x000807f8) cell_vitu2_function_top_pane

0x5f12,	// (0x00080810) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5f12,	// (0x00080810) cell_vitu2_function_top_pane_cp01

0x5f2e,	// (0x0008082c) cell_vitu2_function_top_wide_pane_ParamLimits

0x5f2e,	// (0x0008082c) cell_vitu2_function_top_wide_pane

0xa52b,	// (0x00084e29) bg_button_pane_cp012

0x5f4c,	// (0x0008084a) cell_vitu2_function_top_pane_g1

0xe90e,	// (0x0008920c) bg_button_pane_cp013_ParamLimits

0xe90e,	// (0x0008920c) bg_button_pane_cp013

0x5f60,	// (0x0008085e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5f60,	// (0x0008085e) cell_vitu2_function_top_wide_pane_g1

0xa52b,	// (0x00084e29) bg_popup_sub_pane_cp20

0x5f78,	// (0x00080876) list_vitu2_match_list_pane

0xe74d,	// (0x0008904b) bg_popup_sub_pane_cp20_g1

0xe755,	// (0x00089053) bg_popup_sub_pane_cp20_g2

0xb118,	// (0x00085a16) bg_popup_sub_pane_cp20_g3

0xe75d,	// (0x0008905b) bg_popup_sub_pane_cp20_g4

0xb0f8,	// (0x000859f6) bg_popup_sub_pane_cp20_g5

0xeabb,	// (0x000893b9) bg_popup_sub_pane_cp20_g6

0xe76d,	// (0x0008906b) bg_popup_sub_pane_cp20_g7

0xe775,	// (0x00089073) bg_popup_sub_pane_cp20_g8

0xe77d,	// (0x0008907b) bg_popup_sub_pane_cp20_g9

0x0008,

0xf917,	// (0x0008a215) bg_popup_sub_pane_cp20_g

0xe92a,	// (0x00089228) list_vitu2_match_list_item_pane_ParamLimits

0xe92a,	// (0x00089228) list_vitu2_match_list_item_pane

0xe93c,	// (0x0008923a) list_vitu2_match_list_item_pane_t1

0x11a6,	// (0x0007baa4) bg_popup_sub_pane_cp21

0xaef5,	// (0x000857f3) grid_vitu2_dropdown_list_pane

0x5f90,	// (0x0008088e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5f90,	// (0x0008088e) cell_vitu2_dropdown_list_char_pane

0x5fb0,	// (0x000808ae) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5fb0,	// (0x000808ae) cell_vitu2_dropdown_list_ctrl_pane

0xeac3,	// (0x000893c1) cell_vitu2_dropdown_list_char_pane_g1

0xeacc,	// (0x000893ca) cell_vitu2_dropdown_list_char_pane_g2

0xead5,	// (0x000893d3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x043a,	// (0x0007ad38) cell_vitu2_dropdown_list_char_pane_g

0x5fd8,	// (0x000808d6) cell_vitu2_dropdown_list_char_pane_t1

0x5fe6,	// (0x000808e4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5fe6,	// (0x000808e4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5ff3,	// (0x000808f1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5ff3,	// (0x000808f1) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6000,	// (0x000808fe) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6000,	// (0x000808fe) cell_vitu2_dropdown_list_ctrl_pane_g3

0x600d,	// (0x0008090b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x600d,	// (0x0008090b) cell_vitu2_dropdown_list_ctrl_pane_g4

0xac02,	// (0x00085500) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xac02,	// (0x00085500) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf92a,	// (0x0008a228) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf92a,	// (0x0008a228) cell_vitu2_dropdown_list_ctrl_pane_g

0x6029,	// (0x00080927) aid_size_cell_gallery2_ParamLimits

0x6029,	// (0x00080927) aid_size_cell_gallery2

0x6047,	// (0x00080945) grid_gallery2_pane_ParamLimits

0x6047,	// (0x00080945) grid_gallery2_pane

0x6061,	// (0x0008095f) scroll_pane_cp029_ParamLimits

0x6061,	// (0x0008095f) scroll_pane_cp029

0x6072,	// (0x00080970) cell_gallery2_pane_ParamLimits

0x6072,	// (0x00080970) cell_gallery2_pane

0xeade,	// (0x000893dc) cell_gallery2_pane_g2

0x60d1,	// (0x000809cf) cell_gallery2_pane_g3

0xeae6,	// (0x000893e4) cell_gallery2_pane_g4

0xeaee,	// (0x000893ec) cell_gallery2_pane_g5

0xaef5,	// (0x000857f3) grid_highlight_pane_cp10

0x570e,	// (0x0008000c) popup_vitu2_match_list_window_ParamLimits

0x5723,	// (0x00080021) popup_vitu2_query_window_ParamLimits

0x5723,	// (0x00080021) popup_vitu2_query_window

0x11a6,	// (0x0007baa4) bg_vitu2_candi_button_pane

0xeac3,	// (0x000893c1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xeacc,	// (0x000893ca) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xead5,	// (0x000893d3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0b4c,	// (0x0007b44a) bg_button_pane_cp015

0x60d9,	// (0x000809d7) bg_button_pane_cp016

0x60e5,	// (0x000809e3) bg_button_pane_cp017

0xba86,	// (0x00086384) bg_popup_sub_pane_cp22

0xeaf6,	// (0x000893f4) popup_vitu2_query_window_g1

0x6100,	// (0x000809fe) popup_vitu2_query_window_g2

0x0002,

0xf935,	// (0x0008a233) popup_vitu2_query_window_g

0x0b80,	// (0x0007b47e) popup_vitu2_query_window_t1_ParamLimits

0x0b80,	// (0x0007b47e) popup_vitu2_query_window_t1

0x0bb3,	// (0x0007b4b1) popup_vitu2_query_window_t2_ParamLimits

0x0bb3,	// (0x0007b4b1) popup_vitu2_query_window_t2

0x0bc5,	// (0x0007b4c3) popup_vitu2_query_window_t3_ParamLimits

0x0bc5,	// (0x0007b4c3) popup_vitu2_query_window_t3

0x6122,	// (0x00080a20) popup_vitu2_query_window_t4_ParamLimits

0x6122,	// (0x00080a20) popup_vitu2_query_window_t4

0x6136,	// (0x00080a34) popup_vitu2_query_window_t5_ParamLimits

0x6136,	// (0x00080a34) popup_vitu2_query_window_t5

0x0006,

0xf93c,	// (0x0008a23a) popup_vitu2_query_window_t_ParamLimits

0xf93c,	// (0x0008a23a) popup_vitu2_query_window_t

0xe875,	// (0x00089173) main_cset_text_pane

0x5b60,	// (0x0008045e) aid_area_touch_slider_ParamLimits

0x5b7c,	// (0x0008047a) cset_slider_pane_ParamLimits

0x5b9f,	// (0x0008049d) main_cset_slider_pane_g1_ParamLimits

0x5bb4,	// (0x000804b2) main_cset_slider_pane_g2_ParamLimits

0xe896,	// (0x00089194) main_cset_slider_pane_g3_ParamLimits

0xe896,	// (0x00089194) main_cset_slider_pane_g3

0x5bc9,	// (0x000804c7) main_cset_slider_pane_g4_ParamLimits

0x5bc9,	// (0x000804c7) main_cset_slider_pane_g4

0x5bd8,	// (0x000804d6) main_cset_slider_pane_g5_ParamLimits

0x5bd8,	// (0x000804d6) main_cset_slider_pane_g5

0x5be4,	// (0x000804e2) main_cset_slider_pane_g6_ParamLimits

0x5be4,	// (0x000804e2) main_cset_slider_pane_g6

0xf8a7,	// (0x0008a1a5) main_cset_slider_pane_g_ParamLimits

0xe8c6,	// (0x000891c4) main_cset_slider_pane_t1_ParamLimits

0x5c70,	// (0x0008056e) main_cset_slider_pane_t2_ParamLimits

0x5c8a,	// (0x00080588) main_cset_slider_pane_t3_ParamLimits

0x5ca4,	// (0x000805a2) main_cset_slider_pane_t4_ParamLimits

0x5cbe,	// (0x000805bc) main_cset_slider_pane_t5_ParamLimits

0x5cd8,	// (0x000805d6) main_cset_slider_pane_t6_ParamLimits

0x5ced,	// (0x000805eb) main_cset_slider_pane_t7_ParamLimits

0x5d17,	// (0x00080615) main_cset_slider_pane_t8_ParamLimits

0x5d17,	// (0x00080615) main_cset_slider_pane_t8

0x5d3f,	// (0x0008063d) main_cset_slider_pane_t9_ParamLimits

0x5d3f,	// (0x0008063d) main_cset_slider_pane_t9

0x5d67,	// (0x00080665) main_cset_slider_pane_t10_ParamLimits

0x5d67,	// (0x00080665) main_cset_slider_pane_t10

0x5d8f,	// (0x0008068d) main_cset_slider_pane_t11_ParamLimits

0x5d8f,	// (0x0008068d) main_cset_slider_pane_t11

0x5db7,	// (0x000806b5) main_cset_slider_pane_t12_ParamLimits

0x5db7,	// (0x000806b5) main_cset_slider_pane_t12

0x5dd4,	// (0x000806d2) main_cset_slider_pane_t13_ParamLimits

0x5dd4,	// (0x000806d2) main_cset_slider_pane_t13

0xf8cc,	// (0x0008a1ca) main_cset_slider_pane_t_ParamLimits

0x11a6,	// (0x0007baa4) bg_popup_sub_pane_cp011

0xeb02,	// (0x00089400) main_cset_text_pane_g1

0xeb0a,	// (0x00089408) main_cset_text_pane_t1

0xeb18,	// (0x00089416) main_cset_text_pane_t2

0xeb26,	// (0x00089424) main_cset_text_pane_t3

0xeb34,	// (0x00089432) main_cset_text_pane_t4

0xeb42,	// (0x00089440) main_cset_text_pane_t5

0xeb50,	// (0x0008944e) main_cset_text_pane_t6

0xeb5e,	// (0x0008945c) main_cset_text_pane_t7

0x0006,

0x0462,	// (0x0007ad60) main_cset_text_pane_t

0x11a6,	// (0x0007baa4) main_cam4_burst_pane

0x11a6,	// (0x0007baa4) main_cam5_pane

0xe837,	// (0x00089135) bg_button_pane_cp019

0xe840,	// (0x0008913e) bg_button_pane_cp020

0xe8a2,	// (0x000891a0) main_cset_slider_pane_g7_ParamLimits

0xe8a2,	// (0x000891a0) main_cset_slider_pane_g7

0xe8ae,	// (0x000891ac) main_cset_slider_pane_g8_ParamLimits

0xe8ae,	// (0x000891ac) main_cset_slider_pane_g8

0x5bf8,	// (0x000804f6) main_cset_slider_pane_g9_ParamLimits

0x5bf8,	// (0x000804f6) main_cset_slider_pane_g9

0x5c04,	// (0x00080502) main_cset_slider_pane_g10_ParamLimits

0x5c04,	// (0x00080502) main_cset_slider_pane_g10

0x5c10,	// (0x0008050e) main_cset_slider_pane_g11_ParamLimits

0x5c10,	// (0x0008050e) main_cset_slider_pane_g11

0x5c1c,	// (0x0008051a) main_cset_slider_pane_g12_ParamLimits

0x5c1c,	// (0x0008051a) main_cset_slider_pane_g12

0x5c28,	// (0x00080526) main_cset_slider_pane_g13_ParamLimits

0x5c28,	// (0x00080526) main_cset_slider_pane_g13

0x5c34,	// (0x00080532) main_cset_slider_pane_g14_ParamLimits

0x5c34,	// (0x00080532) main_cset_slider_pane_g14

0x5c40,	// (0x0008053e) main_cset_slider_pane_g15_ParamLimits

0x5c40,	// (0x0008053e) main_cset_slider_pane_g15

0xe9ed,	// (0x000892eb) main_cset_slider_pane_t14_ParamLimits

0xe9ed,	// (0x000892eb) main_cset_slider_pane_t14

0xea26,	// (0x00089324) main_cset_slider_pane_t15_ParamLimits

0xea26,	// (0x00089324) main_cset_slider_pane_t15

0x614a,	// (0x00080a48) aid_cam4_burst_size_cell_ParamLimits

0x614a,	// (0x00080a48) aid_cam4_burst_size_cell

0x616a,	// (0x00080a68) grid_cam4_burst_pane_ParamLimits

0x616a,	// (0x00080a68) grid_cam4_burst_pane

0x61a2,	// (0x00080aa0) linegrid_cam4_burst_pane_ParamLimits

0x61a2,	// (0x00080aa0) linegrid_cam4_burst_pane

0x61c6,	// (0x00080ac4) scroll_pane_cp30_ParamLimits

0x61c6,	// (0x00080ac4) scroll_pane_cp30

0x61d2,	// (0x00080ad0) cell_cam4_burst_pane_ParamLimits

0x61d2,	// (0x00080ad0) cell_cam4_burst_pane

0xeb6c,	// (0x0008946a) linegrid_cam4_burst_pane_g1_ParamLimits

0xeb6c,	// (0x0008946a) linegrid_cam4_burst_pane_g1

0x621f,	// (0x00080b1d) linegrid_cam4_burst_pane_g2_ParamLimits

0x621f,	// (0x00080b1d) linegrid_cam4_burst_pane_g2

0xeb79,	// (0x00089477) linegrid_cam4_burst_pane_g3_ParamLimits

0xeb79,	// (0x00089477) linegrid_cam4_burst_pane_g3

0x0002,

0xf94b,	// (0x0008a249) linegrid_cam4_burst_pane_g_ParamLimits

0xf94b,	// (0x0008a249) linegrid_cam4_burst_pane_g

0x6230,	// (0x00080b2e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6230,	// (0x00080b2e) linegrid_cam4_burst_pane_g3_copy1

0xeb86,	// (0x00089484) linegrid_cam4_burst_pane_g4_ParamLimits

0xeb86,	// (0x00089484) linegrid_cam4_burst_pane_g4

0x624a,	// (0x00080b48) linegrid_cam4_burst_pane_g5_ParamLimits

0x624a,	// (0x00080b48) linegrid_cam4_burst_pane_g5

0x625b,	// (0x00080b59) linegrid_cam4_burst_pane_g6_ParamLimits

0x625b,	// (0x00080b59) linegrid_cam4_burst_pane_g6

0xeb93,	// (0x00089491) linegrid_cam4_burst_pane_g7_ParamLimits

0xeb93,	// (0x00089491) linegrid_cam4_burst_pane_g7

0x6272,	// (0x00080b70) cell_cam4_burst_pane_g1

0xebac,	// (0x000894aa) main_cam5_pane_t1_ParamLimits

0xebac,	// (0x000894aa) main_cam5_pane_t1

0xebbe,	// (0x000894bc) main_cam5_pane_t2_ParamLimits

0xebbe,	// (0x000894bc) main_cam5_pane_t2

0xebd0,	// (0x000894ce) main_cam5_pane_t3_ParamLimits

0xebd0,	// (0x000894ce) main_cam5_pane_t3

0xebe2,	// (0x000894e0) main_cam5_pane_t4_ParamLimits

0xebe2,	// (0x000894e0) main_cam5_pane_t4

0xebfa,	// (0x000894f8) main_cam5_pane_t5_ParamLimits

0xebfa,	// (0x000894f8) main_cam5_pane_t5

0xec0e,	// (0x0008950c) main_cam5_pane_t6_ParamLimits

0xec0e,	// (0x0008950c) main_cam5_pane_t6

0xec22,	// (0x00089520) main_cam5_pane_t7_ParamLimits

0xec22,	// (0x00089520) main_cam5_pane_t7

0xec34,	// (0x00089532) main_cam5_pane_t8_ParamLimits

0xec34,	// (0x00089532) main_cam5_pane_t8

0xec50,	// (0x0008954e) main_cam5_pane_t9_ParamLimits

0xec50,	// (0x0008954e) main_cam5_pane_t9

0xec62,	// (0x00089560) main_cam5_pane_t10_ParamLimits

0xec62,	// (0x00089560) main_cam5_pane_t10

0xec74,	// (0x00089572) main_cam5_pane_t11_ParamLimits

0xec74,	// (0x00089572) main_cam5_pane_t11

0xec86,	// (0x00089584) main_cam5_pane_t12_ParamLimits

0xec86,	// (0x00089584) main_cam5_pane_t12

0xec9b,	// (0x00089599) main_cam5_pane_t13_ParamLimits

0xec9b,	// (0x00089599) main_cam5_pane_t13

0x000c,

0x047d,	// (0x0007ad7b) main_cam5_pane_t_ParamLimits

0x047d,	// (0x0007ad7b) main_cam5_pane_t

0x1390,	// (0x0007bc8e) popup_scut_keymap_window_ParamLimits

0x1390,	// (0x0007bc8e) popup_scut_keymap_window

0x6285,	// (0x00080b83) aid_size_cell_brow_shortcut

0xaef5,	// (0x000857f3) bg_popup_window_pane_cp010

0x6291,	// (0x00080b8f) grid_scut_pane

0x629d,	// (0x00080b9b) cell_scut_pane_ParamLimits

0x629d,	// (0x00080b9b) cell_scut_pane

0x62b4,	// (0x00080bb2) cell_scut_pane_g1

0xecb8,	// (0x000895b6) cell_scut_pane_t1

0xecc7,	// (0x000895c5) cell_scut_pane_t2

0x62bd,	// (0x00080bbb) cell_scut_pane_t3

0x0002,

0xf957,	// (0x0008a255) cell_scut_pane_t

0x43ff,	// (0x0007ecfd) main_mup3_pane_g8_ParamLimits

0x43ff,	// (0x0007ecfd) main_mup3_pane_g8

0x561f,	// (0x0007ff1d) area_vitu2_query_pane_ParamLimits

0x561f,	// (0x0007ff1d) area_vitu2_query_pane

0x0b5d,	// (0x0007b45b) input_focus_pane_cp08

0xecd6,	// (0x000895d4) area_vitu2_query_pane_g1

0x0c43,	// (0x0007b541) area_vitu2_query_pane_g2

0x0001,

0xf95e,	// (0x0008a25c) area_vitu2_query_pane_g

0x62cb,	// (0x00080bc9) area_vitu2_query_pane_t1_ParamLimits

0x62cb,	// (0x00080bc9) area_vitu2_query_pane_t1

0x62df,	// (0x00080bdd) area_vitu2_query_pane_t2_ParamLimits

0x62df,	// (0x00080bdd) area_vitu2_query_pane_t2

0x0c52,	// (0x0007b550) area_vitu2_query_pane_t3_ParamLimits

0x0c52,	// (0x0007b550) area_vitu2_query_pane_t3

0xdcff,	// (0x000885fd) area_vitu2_query_pane_t4_ParamLimits

0xdcff,	// (0x000885fd) area_vitu2_query_pane_t4

0xdd27,	// (0x00088625) area_vitu2_query_pane_t5_ParamLimits

0xdd27,	// (0x00088625) area_vitu2_query_pane_t5

0xdd4f,	// (0x0008864d) area_vitu2_query_pane_t6_ParamLimits

0xdd4f,	// (0x0008864d) area_vitu2_query_pane_t6

0x0006,

0xf963,	// (0x0008a261) area_vitu2_query_pane_t_ParamLimits

0xf963,	// (0x0008a261) area_vitu2_query_pane_t

0x62f3,	// (0x00080bf1) bg_button_pane_cp018

0x62ff,	// (0x00080bfd) bg_button_pane_cp021

0x0c7a,	// (0x0007b578) bg_button_pane_cp022

0x0c99,	// (0x0007b597) input_focus_pane_cp09

0xb7e2,	// (0x000860e0) aid_size_touch_mv_arrow_left

0xb80d,	// (0x0008610b) aid_size_touch_mv_arrow_right

0x5c58,	// (0x00080556) main_cset_slider_pane_g16_ParamLimits

0x5c58,	// (0x00080556) main_cset_slider_pane_g16

0x5c64,	// (0x00080562) main_cset_slider_pane_g17_ParamLimits

0x5c64,	// (0x00080562) main_cset_slider_pane_g17

0x6272,	// (0x00080b70) cell_cam4_burst_pane_g1_ParamLimits

0x11a6,	// (0x0007baa4) compa_mode_pane

0x5e3a,	// (0x00080738) popup_vtel_slider_window_g3_ParamLimits

0x5e3a,	// (0x00080738) popup_vtel_slider_window_g3

0x5e51,	// (0x0008074f) popup_vtel_slider_window_g4_ParamLimits

0x5e51,	// (0x0008074f) popup_vtel_slider_window_g4

0x5e68,	// (0x00080766) popup_vtel_slider_window_t1_ParamLimits

0x5e68,	// (0x00080766) popup_vtel_slider_window_t1

0x11a6,	// (0x0007baa4) main_cl_pane

0xcdad,	// (0x000876ab) popup_imed_adjust2_window_ParamLimits

0xba86,	// (0x00086384) bg_tb_trans_pane_cp05_ParamLimits

0xd7b7,	// (0x000880b5) popup_imed_adjust2_window_g1_ParamLimits

0xd7c6,	// (0x000880c4) popup_imed_adjust2_window_g2_ParamLimits

0xd7c6,	// (0x000880c4) popup_imed_adjust2_window_g2

0xd7d2,	// (0x000880d0) popup_imed_adjust2_window_g3_ParamLimits

0xd7d2,	// (0x000880d0) popup_imed_adjust2_window_g3

0x0002,

0xf71b,	// (0x0008a019) popup_imed_adjust2_window_g_ParamLimits

0xf71b,	// (0x0008a019) popup_imed_adjust2_window_g

0xd7de,	// (0x000880dc) popup_imed_adjust2_window_t1_ParamLimits

0xd7f6,	// (0x000880f4) slider_imed_adjust_pane_ParamLimits

0xd80a,	// (0x00088108) slider_imed_adjust_pane_g1_ParamLimits

0xd81a,	// (0x00088118) slider_imed_adjust_pane_g2_ParamLimits

0xd82a,	// (0x00088128) slider_imed_adjust_pane_g3_ParamLimits

0xd83b,	// (0x00088139) slider_imed_adjust_pane_g4_ParamLimits

0xf722,	// (0x0008a020) slider_imed_adjust_pane_g_ParamLimits

0x5394,	// (0x0007fc92) aid_touch_area_cam4_ParamLimits

0x5394,	// (0x0007fc92) aid_touch_area_cam4

0xe629,	// (0x00088f27) battery_pane_cp01

0x5463,	// (0x0007fd61) main_camera4_pane_g6_ParamLimits

0x5463,	// (0x0007fd61) main_camera4_pane_g6

0x548d,	// (0x0007fd8b) main_camera4_pane_t2_ParamLimits

0x548d,	// (0x0007fd8b) main_camera4_pane_t2

0x0001,

0xf81a,	// (0x0008a118) main_camera4_pane_t_ParamLimits

0xf81a,	// (0x0008a118) main_camera4_pane_t

0x54d4,	// (0x0007fdd2) aid_touch_area_vid4_ParamLimits

0x54d4,	// (0x0007fdd2) aid_touch_area_vid4

0x5528,	// (0x0007fe26) main_video4_pane_g5_ParamLimits

0x5528,	// (0x0007fe26) main_video4_pane_g5

0x554d,	// (0x0007fe4b) vid4_progress_pane_ParamLimits

0x554d,	// (0x0007fe4b) vid4_progress_pane

0xe8ba,	// (0x000891b8) main_cset_slider_pane_g18_ParamLimits

0xe8ba,	// (0x000891b8) main_cset_slider_pane_g18

0xeba0,	// (0x0008949e) cell_cam4_burst_pane_g2_ParamLimits

0xeba0,	// (0x0008949e) cell_cam4_burst_pane_g2

0x0001,

0xf952,	// (0x0008a250) cell_cam4_burst_pane_g_ParamLimits

0xf952,	// (0x0008a250) cell_cam4_burst_pane_g

0xacc0,	// (0x000855be) bg_cl_pane_ParamLimits

0xacc0,	// (0x000855be) bg_cl_pane

0x630b,	// (0x00080c09) cl_header_pane_ParamLimits

0x630b,	// (0x00080c09) cl_header_pane

0x631f,	// (0x00080c1d) cl_listscroll_pane_ParamLimits

0x631f,	// (0x00080c1d) cl_listscroll_pane

0xece2,	// (0x000895e0) bg_cl_pane_g1

0xecea,	// (0x000895e8) bg_cl_pane_g2

0xecf2,	// (0x000895f0) bg_cl_pane_g3

0xecfa,	// (0x000895f8) bg_cl_pane_g4

0xed02,	// (0x00089600) bg_cl_pane_g5

0xed0a,	// (0x00089608) bg_cl_pane_g6

0xed12,	// (0x00089610) bg_cl_pane_g7

0xed1a,	// (0x00089618) bg_cl_pane_g8

0xed22,	// (0x00089620) bg_cl_pane_g9

0x0008,

0x04b3,	// (0x0007adb1) bg_cl_pane_g

0x632f,	// (0x00080c2d) aid_height_cl_leading_ParamLimits

0x632f,	// (0x00080c2d) aid_height_cl_leading

0x633b,	// (0x00080c39) aid_height_cl_text_ParamLimits

0x633b,	// (0x00080c39) aid_height_cl_text

0xa52b,	// (0x00084e29) bg_cl_header_pane_ParamLimits

0xa52b,	// (0x00084e29) bg_cl_header_pane

0x635a,	// (0x00080c58) cl_header_pane_g1_ParamLimits

0x635a,	// (0x00080c58) cl_header_pane_g1

0x6370,	// (0x00080c6e) cl_header_pane_t1_ParamLimits

0x6370,	// (0x00080c6e) cl_header_pane_t1

0xed2a,	// (0x00089628) cl_list_pane

0xe88d,	// (0x0008918b) hc_scroll_pane_cp01

0xb0f8,	// (0x000859f6) bg_cl_header_pane_g1

0xe74d,	// (0x0008904b) bg_cl_header_pane_g2

0xb118,	// (0x00085a16) bg_cl_header_pane_g3

0xe75d,	// (0x0008905b) bg_cl_header_pane_g4

0xe755,	// (0x00089053) bg_cl_header_pane_g5

0xeabb,	// (0x000893b9) bg_cl_header_pane_g6

0xe775,	// (0x00089073) bg_cl_header_pane_g7

0xe77d,	// (0x0008907b) bg_cl_header_pane_g8

0xe76d,	// (0x0008906b) bg_cl_header_pane_g9

0x0008,

0xf972,	// (0x0008a270) bg_cl_header_pane_g

0x6389,	// (0x00080c87) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6389,	// (0x00080c87) hc_cl_list_double_graphic_heading_pane

0x639a,	// (0x00080c98) hc_cl_list_single_graphic_pane_ParamLimits

0x639a,	// (0x00080c98) hc_cl_list_single_graphic_pane

0x63b3,	// (0x00080cb1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x63b3,	// (0x00080cb1) hc_cl_list_single_graphic_pane_g1

0x63bf,	// (0x00080cbd) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x63bf,	// (0x00080cbd) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf985,	// (0x0008a283) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf985,	// (0x0008a283) hc_cl_list_single_graphic_pane_g

0x63d3,	// (0x00080cd1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x63d3,	// (0x00080cd1) hc_cl_list_single_graphic_pane_t1

0x63b3,	// (0x00080cb1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x63b3,	// (0x00080cb1) hc_cl_list_double_graphic_heading_pane_g1

0x63e8,	// (0x00080ce6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x63e8,	// (0x00080ce6) hc_cl_list_double_graphic_heading_pane_g2

0x63fc,	// (0x00080cfa) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x63fc,	// (0x00080cfa) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf98a,	// (0x0008a288) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf98a,	// (0x0008a288) hc_cl_list_double_graphic_heading_pane_g

0x6410,	// (0x00080d0e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6410,	// (0x00080d0e) hc_cl_list_double_graphic_heading_pane_t1

0x6425,	// (0x00080d23) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6425,	// (0x00080d23) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf991,	// (0x0008a28f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf991,	// (0x0008a28f) hc_cl_list_double_graphic_heading_pane_t

0xe952,	// (0x00089250) vid4_progress_pane_g1

0xe962,	// (0x00089260) vid4_progress_pane_g2

0x643a,	// (0x00080d38) vid4_progress_pane_g3

0xe972,	// (0x00089270) vid4_progress_pane_g4

0x0004,

0xf996,	// (0x0008a294) vid4_progress_pane_g

0x644c,	// (0x00080d4a) vid4_progress_pane_t1

0xe98a,	// (0x00089288) vid4_progress_pane_t2

0x0002,

0xf9a1,	// (0x0008a29f) vid4_progress_pane_t

0x6462,	// (0x00080d60) wait_bar_pane_cp07

0xd06b,	// (0x00087969) blid_firmament_pane_ParamLimits

0xd0ae,	// (0x000879ac) popup_blid_sat_info2_window_g1

0xd0d2,	// (0x000879d0) popup_blid_sat_info2_window_t3

0xd0e0,	// (0x000879de) popup_blid_sat_info2_window_t4

0xd0ee,	// (0x000879ec) popup_blid_sat_info2_window_t5

0xd0fc,	// (0x000879fa) popup_blid_sat_info2_window_t6

0xd10c,	// (0x00087a0a) popup_blid_sat_info2_window_t7

0xd11a,	// (0x00087a18) popup_blid_sat_info2_window_t8

0xd128,	// (0x00087a26) popup_blid_sat_info2_window_t9

0xd136,	// (0x00087a34) popup_blid_sat_info2_window_t10

0xd1f7,	// (0x00087af5) aid_firma_cardinal_ParamLimits

0xd20b,	// (0x00087b09) blid_firmament_pane_t1_ParamLimits

0xd222,	// (0x00087b20) blid_firmament_pane_t2_ParamLimits

0xd239,	// (0x00087b37) blid_firmament_pane_t3_ParamLimits

0xd250,	// (0x00087b4e) blid_firmament_pane_t4_ParamLimits

0xf614,	// (0x00089f12) blid_firmament_pane_t_ParamLimits

0xd267,	// (0x00087b65) blid_sat_info_pane_ParamLimits

0xa52b,	// (0x00084e29) main_cam_set_pane_ParamLimits

0x4bdc,	// (0x0007f4da) aid_size_cell_colour_35_ParamLimits

0x4bfc,	// (0x0007f4fa) aid_size_cell_colour_112_ParamLimits

0x4c1c,	// (0x0007f51a) aid_size_cell_effect_ParamLimits

0xba86,	// (0x00086384) bg_tb_trans_pane_cp02_ParamLimits

0xb38e,	// (0x00085c8c) heading_imed_pane_ParamLimits

0x4c3c,	// (0x0007f53a) listscroll_imed_pane_ParamLimits

0xc462,	// (0x00086d60) popup_call2_audio_first_window_g5_ParamLimits

0xc462,	// (0x00086d60) popup_call2_audio_first_window_g5

0x4fa0,	// (0x0007f89e) aid_size_touch_image3_arrow_left_ParamLimits

0x4fa0,	// (0x0007f89e) aid_size_touch_image3_arrow_left

0x4fcc,	// (0x0007f8ca) aid_size_touch_image3_arrow_right_ParamLimits

0x4fcc,	// (0x0007f8ca) aid_size_touch_image3_arrow_right

0xe99f,	// (0x0008929d) vid4_progress_pane_t3

0x4ddf,	// (0x0007f6dd) main_hwr_training_symbol_option_pane_ParamLimits

0x4ddf,	// (0x0007f6dd) main_hwr_training_symbol_option_pane

0xd945,	// (0x00088243) popup_hwr_training_preview_window_ParamLimits

0xd945,	// (0x00088243) popup_hwr_training_preview_window

0x4dff,	// (0x0007f6fd) hwr_training_navi_pane_g5_ParamLimits

0x4dff,	// (0x0007f6fd) hwr_training_navi_pane_g5

0xe73b,	// (0x00089039) popup_char_count_window

0xa52b,	// (0x00084e29) bg_popup_sub_pane_cp20_ParamLimits

0x5f78,	// (0x00080876) list_vitu2_match_list_pane_ParamLimits

0x5f84,	// (0x00080882) vitu2_page_scroll_pane_ParamLimits

0x5f84,	// (0x00080882) vitu2_page_scroll_pane

0xed3c,	// (0x0008963a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xed3c,	// (0x0008963a) list_single_hwr_training_symbol_option_pane

0xed4f,	// (0x0008964d) list_single_hwr_training_symbol_option_pane_g1

0xed57,	// (0x00089655) list_single_hwr_training_symbol_option_pane_t1

0xed65,	// (0x00089663) bg_button_pane_cp023

0xed6e,	// (0x0008966c) bg_button_pane_cp024

0xeda1,	// (0x0008969f) vitu2_page_scroll_pane_g1

0xeda9,	// (0x000896a7) vitu2_page_scroll_pane_g2

0x0001,

0x04fc,	// (0x0007adfa) vitu2_page_scroll_pane_g

0xedb1,	// (0x000896af) vitu2_page_scroll_pane_t1

0xad5b,	// (0x00085659) popup_char_count_window_g1

0xedc0,	// (0x000896be) popup_char_count_window_g2

0xe51d,	// (0x00088e1b) popup_char_count_window_g3

0x0002,

0xf9a8,	// (0x0008a2a6) popup_char_count_window_g

0xedc9,	// (0x000896c7) popup_char_count_window_t1

0x11a6,	// (0x0007baa4) main_vded2_pane

0xd7a3,	// (0x000880a1) aid_size_cell_imed_line

0xd7ad,	// (0x000880ab) grid_imed_line_width_pane

0xe6d9,	// (0x00088fd7) vid4_indicators_pane_g4

0xedd7,	// (0x000896d5) cell_imed_line_width_pane_ParamLimits

0xedd7,	// (0x000896d5) cell_imed_line_width_pane

0xedeb,	// (0x000896e9) cell_imed_line_width_pane_g1

0xedf4,	// (0x000896f2) cell_imed_line_width_pane_g2

0x0001,

0x0508,	// (0x0007ae06) cell_imed_line_width_pane_g

0x6473,	// (0x00080d71) main_vded2_pane_g1_ParamLimits

0x6473,	// (0x00080d71) main_vded2_pane_g1

0x6489,	// (0x00080d87) main_vded2_pane_g2_ParamLimits

0x6489,	// (0x00080d87) main_vded2_pane_g2

0x0001,

0xf9af,	// (0x0008a2ad) main_vded2_pane_g_ParamLimits

0xf9af,	// (0x0008a2ad) main_vded2_pane_g

0x649b,	// (0x00080d99) vded2_slider_pane_ParamLimits

0x649b,	// (0x00080d99) vded2_slider_pane

0x64ab,	// (0x00080da9) aid_size_touch_vded2_end

0x64b5,	// (0x00080db3) aid_size_touch_vded2_playhead

0xedfc,	// (0x000896fa) aid_size_touch_vded2_start

0xee04,	// (0x00089702) vded2_slider_bg_pane

0xee0d,	// (0x0008970b) vded2_slider_pane_g1

0xee16,	// (0x00089714) vded2_slider_pane_g2

0x64bf,	// (0x00080dbd) vded2_slider_pane_g3

0x0002,

0xf9b4,	// (0x0008a2b2) vded2_slider_pane_g

0xee1e,	// (0x0008971c) vded2_slider_bg_pane_g1

0xee27,	// (0x00089725) vded2_slider_bg_pane_g2

0xee30,	// (0x0008972e) vded2_slider_bg_pane_g3

0x0002,

0x0519,	// (0x0007ae17) vded2_slider_bg_pane_g

0x3254,	// (0x0007db52) aid_postcard_touch_down_pane_ParamLimits

0x3254,	// (0x0007db52) aid_postcard_touch_down_pane

0x326a,	// (0x0007db68) aid_postcard_touch_up_pane_ParamLimits

0x326a,	// (0x0007db68) aid_postcard_touch_up_pane

0x11a6,	// (0x0007baa4) main_blid2_pane

0xcd93,	// (0x00087691) popup_blid2_search_window

0x11a6,	// (0x0007baa4) blid2_gps_pane

0x11a6,	// (0x0007baa4) blid2_navig_pane

0x11a6,	// (0x0007baa4) blid2_search_pane

0x11a6,	// (0x0007baa4) blid2_tripm_pane

0x64ca,	// (0x00080dc8) blid2_search_pane_g1_ParamLimits

0x64ca,	// (0x00080dc8) blid2_search_pane_g1

0x64e2,	// (0x00080de0) blid2_search_pane_t1_ParamLimits

0x64e2,	// (0x00080de0) blid2_search_pane_t1

0x64f4,	// (0x00080df2) aid_size_cell_blid2_gps_ParamLimits

0x64f4,	// (0x00080df2) aid_size_cell_blid2_gps

0x650c,	// (0x00080e0a) blid2_gps_pane_g1_ParamLimits

0x650c,	// (0x00080e0a) blid2_gps_pane_g1

0x6520,	// (0x00080e1e) grid_blid2_satellite_pane_ParamLimits

0x6520,	// (0x00080e1e) grid_blid2_satellite_pane

0x653a,	// (0x00080e38) blid2_navig_pane_g1_ParamLimits

0x653a,	// (0x00080e38) blid2_navig_pane_g1

0x6546,	// (0x00080e44) blid2_navig_pane_t1_ParamLimits

0x6546,	// (0x00080e44) blid2_navig_pane_t1

0x6561,	// (0x00080e5f) blid2_navig_pane_t2_ParamLimits

0x6561,	// (0x00080e5f) blid2_navig_pane_t2

0x0001,

0xf9bb,	// (0x0008a2b9) blid2_navig_pane_t_ParamLimits

0xf9bb,	// (0x0008a2b9) blid2_navig_pane_t

0x657c,	// (0x00080e7a) blid2_navig_ring_pane_ParamLimits

0x657c,	// (0x00080e7a) blid2_navig_ring_pane

0x6595,	// (0x00080e93) blid2_speed_pane_ParamLimits

0x6595,	// (0x00080e93) blid2_speed_pane

0x65a1,	// (0x00080e9f) blid2_tripm_pane_g1_ParamLimits

0x65a1,	// (0x00080e9f) blid2_tripm_pane_g1

0x65bc,	// (0x00080eba) blid2_tripm_pane_g2_ParamLimits

0x65bc,	// (0x00080eba) blid2_tripm_pane_g2

0x65d0,	// (0x00080ece) blid2_tripm_pane_g3_ParamLimits

0x65d0,	// (0x00080ece) blid2_tripm_pane_g3

0x65e4,	// (0x00080ee2) blid2_tripm_pane_g4_ParamLimits

0x65e4,	// (0x00080ee2) blid2_tripm_pane_g4

0x65f8,	// (0x00080ef6) blid2_tripm_pane_g5_ParamLimits

0x65f8,	// (0x00080ef6) blid2_tripm_pane_g5

0x0005,

0xf9c0,	// (0x0008a2be) blid2_tripm_pane_g_ParamLimits

0xf9c0,	// (0x0008a2be) blid2_tripm_pane_g

0x661e,	// (0x00080f1c) blid2_tripm_pane_t1_ParamLimits

0x661e,	// (0x00080f1c) blid2_tripm_pane_t1

0x6639,	// (0x00080f37) blid2_tripm_pane_t2_ParamLimits

0x6639,	// (0x00080f37) blid2_tripm_pane_t2

0x6652,	// (0x00080f50) blid2_tripm_pane_t3_ParamLimits

0x6652,	// (0x00080f50) blid2_tripm_pane_t3

0x0003,

0xf9cd,	// (0x0008a2cb) blid2_tripm_pane_t_ParamLimits

0xf9cd,	// (0x0008a2cb) blid2_tripm_pane_t

0x6699,	// (0x00080f97) cell_blid2_satellite_pane_ParamLimits

0x6699,	// (0x00080f97) cell_blid2_satellite_pane

0x66b7,	// (0x00080fb5) cell_blid2_satellite_pane_g1

0xee39,	// (0x00089737) cell_blid2_satellite_pane_t1

0xac48,	// (0x00085546) blid2_speed_pane_g1

0xee47,	// (0x00089745) blid2_speed_pane_t1

0xee55,	// (0x00089753) blid2_speed_pane_t2

0x0001,

0x053b,	// (0x0007ae39) blid2_speed_pane_t

0xac48,	// (0x00085546) blid2_navig_ring_pane_g1

0x66c0,	// (0x00080fbe) blid2_navig_ring_pane_g2

0x66c8,	// (0x00080fc6) blid2_navig_ring_pane_g3

0x66d0,	// (0x00080fce) blid2_navig_ring_pane_g4

0x66d8,	// (0x00080fd6) blid2_navig_ring_pane_g5

0x0004,

0xf9d6,	// (0x0008a2d4) blid2_navig_ring_pane_g

0x11a6,	// (0x0007baa4) bg_popup_window_pane_cp011

0xee63,	// (0x00089761) popup_blid2_search_window_g1

0xee6b,	// (0x00089769) popup_blid2_search_window_t1

0xee79,	// (0x00089777) popup_blid2_search_window_t2

0x0001,

0x054b,	// (0x0007ae49) popup_blid2_search_window_t

0xb007,	// (0x00085905) main_browser_pane_g1

0xacc0,	// (0x000855be) main_browser_pane_ParamLimits

0xa52b,	// (0x00084e29) bg_button_pane_cp011_ParamLimits

0x5837,	// (0x00080135) cell_vitu2_function_pane_g1_ParamLimits

0xba86,	// (0x00086384) bg_popup_sub_pane_cp22_ParamLimits

0x0b5d,	// (0x0007b45b) input_focus_pane_cp08_ParamLimits

0x60f1,	// (0x000809ef) popup_vitu2_query_button_pane_ParamLimits

0x60f1,	// (0x000809ef) popup_vitu2_query_button_pane

0x0b78,	// (0x0007b476) popup_vitu2_query_input_button_pane

0xeaf6,	// (0x000893f4) popup_vitu2_query_window_g1_ParamLimits

0x6100,	// (0x000809fe) popup_vitu2_query_window_g2_ParamLimits

0xf935,	// (0x0008a233) popup_vitu2_query_window_g_ParamLimits

0x11a6,	// (0x0007baa4) bg_button_pane_cp026

0x66e0,	// (0x00080fde) popup_vitu2_query_input_button_pane_g1

0x11a6,	// (0x0007baa4) bg_button_pane_cp025

0xee87,	// (0x00089785) popup_vitu2_query_button_pane_t1

0x40cd,	// (0x0007e9cb) main_mp3_pane_t6

0x40db,	// (0x0007e9d9) popup_slider_window_cp01

0xe645,	// (0x00088f43) cam4_battery_pane

0xe698,	// (0x00088f96) cam4_battery_pane_cp02

0xe94a,	// (0x00089248) cam4_battery_pane_cp01

0xe94a,	// (0x00089248) cam4_battery_pane_cp03

0xac48,	// (0x00085546) cam4_battery_pane_g1

0xee95,	// (0x00089793) cam4_battery_pane_g2

0x0001,

0xf9e1,	// (0x0008a2df) cam4_battery_pane_g

0xd144,	// (0x00087a42) popup_blid_sat_info2_window_t11

0xb7e2,	// (0x000860e0) aid_size_touch_mv_arrow_left_ParamLimits

0xb80d,	// (0x0008610b) aid_size_touch_mv_arrow_right_ParamLimits

0xb86b,	// (0x00086169) navi_pane_g1_ParamLimits

0xb877,	// (0x00086175) navi_pane_g2_ParamLimits

0xb8a5,	// (0x000861a3) navi_pane_g3_ParamLimits

0xf32a,	// (0x00089c28) navi_pane_g_ParamLimits

0x2f6b,	// (0x0007d869) navi_pane_mv_t1_ParamLimits

0x4c48,	// (0x0007f546) grid_imed_effect_pane_ParamLimits

0x1e9e,	// (0x0007c79c) aid_placing_vt_slider_lsc

0xaf56,	// (0x00085854) aid_placing_vt_slider_prt

0xa52b,	// (0x00084e29) bg_tb_trans_pane_cp01_ParamLimits

0xd3e2,	// (0x00087ce0) popup_image_details_window_g1_ParamLimits

0xd3f5,	// (0x00087cf3) popup_image_details_window_g2_ParamLimits

0xd40a,	// (0x00087d08) popup_image_details_window_g3_ParamLimits

0xd40a,	// (0x00087d08) popup_image_details_window_g3

0xf654,	// (0x00089f52) popup_image_details_window_g_ParamLimits

0xd41e,	// (0x00087d1c) popup_image_details_window_t1_ParamLimits

0xd430,	// (0x00087d2e) popup_image_details_window_t2_ParamLimits

0xd449,	// (0x00087d47) popup_image_details_window_t3_ParamLimits

0xd45d,	// (0x00087d5b) popup_image_details_window_t4_ParamLimits

0xd478,	// (0x00087d76) popup_image_details_window_t5_ParamLimits

0xf65b,	// (0x00089f59) popup_image_details_window_t_ParamLimits

0x6347,	// (0x00080c45) cl_header_name_pane_ParamLimits

0x6347,	// (0x00080c45) cl_header_name_pane

0x66e8,	// (0x00080fe6) cl_header_name_pane_t1_ParamLimits

0x66e8,	// (0x00080fe6) cl_header_name_pane_t1

0x6709,	// (0x00081007) cl_header_name_pane_t2_ParamLimits

0x6709,	// (0x00081007) cl_header_name_pane_t2

0x674b,	// (0x00081049) cl_header_name_pane_t3_ParamLimits

0x674b,	// (0x00081049) cl_header_name_pane_t3

0x0002,

0xf9e6,	// (0x0008a2e4) cl_header_name_pane_t_ParamLimits

0xf9e6,	// (0x0008a2e4) cl_header_name_pane_t

0xb934,	// (0x00086232) navi_pane_mv_g2_ParamLimits

0xe723,	// (0x00089021) field_vitu2_entry_pane_g1_ParamLimits

0xe72f,	// (0x0008902d) field_vitu2_entry_pane_g2_ParamLimits

0xba64,	// (0x00086362) field_vitu2_entry_pane_g3_ParamLimits

0xba64,	// (0x00086362) field_vitu2_entry_pane_g3

0xf84c,	// (0x0008a14a) field_vitu2_entry_pane_g_ParamLimits

0x57b3,	// (0x000800b1) cell_vitu2_itu_pane_g1_ParamLimits

0x57cb,	// (0x000800c9) cell_vitu2_itu_pane_g2_ParamLimits

0x57cb,	// (0x000800c9) cell_vitu2_itu_pane_g2

0x0001,

0xf858,	// (0x0008a156) cell_vitu2_itu_pane_g_ParamLimits

0xf858,	// (0x0008a156) cell_vitu2_itu_pane_g

0xa52b,	// (0x00084e29) bg_vkb2_func_pane_cp05_ParamLimits

0xa52b,	// (0x00084e29) bg_vkb2_func_pane_cp05

0xa52b,	// (0x00084e29) bg_vkb2_func_pane_cp03

0xa52b,	// (0x00084e29) bg_vkb2_func_pane_cp04

0xa52b,	// (0x00084e29) bg_vkb2_func_pane_cp10_ParamLimits

0xa52b,	// (0x00084e29) bg_vkb2_func_pane_cp10

0x0c89,	// (0x0007b587) bg_vkb2_func_pane_cp08

0x62f3,	// (0x00080bf1) bg_vkb2_func_pane_cp06

0x62ff,	// (0x00080bfd) bg_vkb2_func_pane_cp07

0xed77,	// (0x00089675) bg_vkb2_func_pane_cp11_ParamLimits

0xed77,	// (0x00089675) bg_vkb2_func_pane_cp11

0xed8c,	// (0x0008968a) bg_vkb2_func_pane_cp12_ParamLimits

0xed8c,	// (0x0008968a) bg_vkb2_func_pane_cp12

0x11a6,	// (0x0007baa4) bg_vkb2_func_pane_cp09

0xe74d,	// (0x0008904b) bg_vkb2_func_pane_g1

0xb118,	// (0x00085a16) bg_vkb2_func_pane_g2

0xe755,	// (0x00089053) bg_vkb2_func_pane_g3

0xe75d,	// (0x0008905b) bg_vkb2_func_pane_g4

0xeabb,	// (0x000893b9) bg_vkb2_func_pane_g5

0xe775,	// (0x00089073) bg_vkb2_func_pane_g6

0xe77d,	// (0x0008907b) bg_vkb2_func_pane_g7

0xe76d,	// (0x0008906b) bg_vkb2_func_pane_g8

0xb0f8,	// (0x000859f6) bg_vkb2_func_pane_g9

0x0008,

0xf9ed,	// (0x0008a2eb) bg_vkb2_func_pane_g

0x660c,	// (0x00080f0a) blid2_tripm_pane_g6_ParamLimits

0x660c,	// (0x00080f0a) blid2_tripm_pane_g6

0xe534,	// (0x00088e32) mp4_progress_pane_g1

0x6685,	// (0x00080f83) blid2_tripm_values_pane_ParamLimits

0x6685,	// (0x00080f83) blid2_tripm_values_pane

0x677c,	// (0x0008107a) blid2_tripm_values_pane_t1

0x678a,	// (0x00081088) blid2_tripm_values_pane_t2

0x6798,	// (0x00081096) blid2_tripm_values_pane_t3

0x67a6,	// (0x000810a4) blid2_tripm_values_pane_t4

0x67b4,	// (0x000810b2) blid2_tripm_values_pane_t5

0x67c2,	// (0x000810c0) blid2_tripm_values_pane_t6

0x67d0,	// (0x000810ce) blid2_tripm_values_pane_t7

0x67de,	// (0x000810dc) blid2_tripm_values_pane_t8

0x67ec,	// (0x000810ea) blid2_tripm_values_pane_t9

0x0008,

0xfa00,	// (0x0008a2fe) blid2_tripm_values_pane_t

0x1ee0,	// (0x0007c7de) call_video_pane_t1_ParamLimits

0x1efe,	// (0x0007c7fc) call_video_pane_t2_ParamLimits

0xf1d8,	// (0x00089ad6) call_video_pane_t_ParamLimits

0x09fe,	// (0x0007b2fc) msg_header_pane_g1_ParamLimits

0xbb5a,	// (0x00086458) msg_header_pane_g2_ParamLimits

0xbb5a,	// (0x00086458) msg_header_pane_g2

0x0001,

0xf3c8,	// (0x00089cc6) msg_header_pane_g_ParamLimits

0xf3c8,	// (0x00089cc6) msg_header_pane_g

0xacc0,	// (0x000855be) main_clock2_pane_ParamLimits

0x4949,	// (0x0007f247) grid_clock2_toolbar_pane_ParamLimits

0x4949,	// (0x0007f247) grid_clock2_toolbar_pane

0x4949,	// (0x0007f247) listscroll_clock2_pane_ParamLimits

0x4949,	// (0x0007f247) listscroll_clock2_pane

0x4a2d,	// (0x0007f32b) main_clock2_pane_t3_ParamLimits

0x4a2d,	// (0x0007f32b) main_clock2_pane_t3

0x4a51,	// (0x0007f34f) main_clock2_pane_t4_ParamLimits

0x4a51,	// (0x0007f34f) main_clock2_pane_t4

0xee9f,	// (0x0008979d) cell_clock2_toolbar_pane

0xeea7,	// (0x000897a5) cell_clock2_toolbar_pane_cp01

0xeea7,	// (0x000897a5) cell_clock2_toolbar_pane_cp02

0xeeaf,	// (0x000897ad) cell_clock2_toolbar_pane_cp03

0xeec3,	// (0x000897c1) list_clock2_pane

0xb767,	// (0x00086065) scroll_pane_cp10

0xeecb,	// (0x000897c9) list_single_clock2_pane_ParamLimits

0xeecb,	// (0x000897c9) list_single_clock2_pane

0xaef5,	// (0x000857f3) list_highlight_pane_cp08

0xeed8,	// (0x000897d6) list_single_clock2_pane_t1

0xeee6,	// (0x000897e4) list_single_clock2_pane_t2

0x0001,

0xfa13,	// (0x0008a311) list_single_clock2_pane_t

0x11a6,	// (0x0007baa4) bg_button_pane_cp10

0xeef4,	// (0x000897f2) cell_clock2_toolbar_pane_g1

0x31e0,	// (0x0007dade) aid_main_viewer_pane_g1_ParamLimits

0x31e0,	// (0x0007dade) aid_main_viewer_pane_g1

0x31ee,	// (0x0007daec) aid_main_viewer_pane_g2_ParamLimits

0x31ee,	// (0x0007daec) aid_main_viewer_pane_g2

0x31fc,	// (0x0007dafa) aid_main_viewer_pane_g3_ParamLimits

0x31fc,	// (0x0007dafa) aid_main_viewer_pane_g3

0x320b,	// (0x0007db09) aid_main_viewer_pane_g4_ParamLimits

0x320b,	// (0x0007db09) aid_main_viewer_pane_g4

0x0003,

0xf3d9,	// (0x00089cd7) aid_main_viewer_pane_g_ParamLimits

0xf3d9,	// (0x00089cd7) aid_main_viewer_pane_g

0x3ab0,	// (0x0007e3ae) main_calc_pane_ParamLimits

0x3ac4,	// (0x0007e3c2) main_dialer2_pane_ParamLimits

0x11a6,	// (0x0007baa4) main_cam6_pane

0x11a6,	// (0x0007baa4) main_vid6_pane

0x4955,	// (0x0007f253) listscroll_gen_pane_cp06_ParamLimits

0x4955,	// (0x0007f253) listscroll_gen_pane_cp06

0x4a74,	// (0x0007f372) main_clock2_pane_t5_ParamLimits

0x4a74,	// (0x0007f372) main_clock2_pane_t5

0x4ad2,	// (0x0007f3d0) aid_call2_pane_cp10_ParamLimits

0x4ae4,	// (0x0007f3e2) aid_call_pane_cp10_ParamLimits

0xb7d6,	// (0x000860d4) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb7d6,	// (0x000860d4) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4af6,	// (0x0007f3f4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4af6,	// (0x0007f3f4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb7d6,	// (0x000860d4) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf710,	// (0x0008a00e) popup_clock_analogue_window_cp10_g_ParamLimits

0x4b0c,	// (0x0007f40a) popup_clock_analogue_window_cp10_t1_ParamLimits

0xe5a5,	// (0x00088ea3) cell_dialer2_keypad_pane_g2_ParamLimits

0xe5a5,	// (0x00088ea3) cell_dialer2_keypad_pane_g2

0x0001,

0xf7eb,	// (0x0008a0e9) cell_dialer2_keypad_pane_g_ParamLimits

0xf7eb,	// (0x0008a0e9) cell_dialer2_keypad_pane_g

0xac52,	// (0x00085550) cell_dialer2_keypad_pane_t1

0x5b52,	// (0x00080450) main_cset_text2_pane_ParamLimits

0x5b52,	// (0x00080450) main_cset_text2_pane

0xecd6,	// (0x000895d4) area_vitu2_query_pane_g1_ParamLimits

0x0c43,	// (0x0007b541) area_vitu2_query_pane_g2_ParamLimits

0xf95e,	// (0x0008a25c) area_vitu2_query_pane_g_ParamLimits

0xdd77,	// (0x00088675) area_vitu2_query_pane_t7_ParamLimits

0xdd77,	// (0x00088675) area_vitu2_query_pane_t7

0x62f3,	// (0x00080bf1) bg_button_pane_cp018_ParamLimits

0x62ff,	// (0x00080bfd) bg_button_pane_cp021_ParamLimits

0x0c7a,	// (0x0007b578) bg_button_pane_cp022_ParamLimits

0x0c89,	// (0x0007b587) bg_vkb2_func_pane_cp08_ParamLimits

0x62f3,	// (0x00080bf1) bg_vkb2_func_pane_cp06_ParamLimits

0x62ff,	// (0x00080bfd) bg_vkb2_func_pane_cp07_ParamLimits

0x0c99,	// (0x0007b597) input_focus_pane_cp09_ParamLimits

0x67fa,	// (0x000810f8) cam6_autofocus_pane_ParamLimits

0x67fa,	// (0x000810f8) cam6_autofocus_pane

0x6806,	// (0x00081104) cam6_image_uncrop_pane_ParamLimits

0x6806,	// (0x00081104) cam6_image_uncrop_pane

0x6816,	// (0x00081114) cam6_indi_pane_ParamLimits

0x6816,	// (0x00081114) cam6_indi_pane

0x682c,	// (0x0008112a) cam6_mode_pane_ParamLimits

0x682c,	// (0x0008112a) cam6_mode_pane

0x683e,	// (0x0008113c) cam6_timer_pane_ParamLimits

0x683e,	// (0x0008113c) cam6_timer_pane

0x684a,	// (0x00081148) cam6_zoom_pane_ParamLimits

0x684a,	// (0x00081148) cam6_zoom_pane

0x6857,	// (0x00081155) cam6_mode_pane_g1_ParamLimits

0x6857,	// (0x00081155) cam6_mode_pane_g1

0x6867,	// (0x00081165) cam6_mode_pane_g2_ParamLimits

0x6867,	// (0x00081165) cam6_mode_pane_g2

0x6877,	// (0x00081175) cam6_mode_pane_g3_ParamLimits

0x6877,	// (0x00081175) cam6_mode_pane_g3

0x6887,	// (0x00081185) cam6_mode_pane_g4_ParamLimits

0x6887,	// (0x00081185) cam6_mode_pane_g4

0x0003,

0xfa18,	// (0x0008a316) cam6_mode_pane_g_ParamLimits

0xfa18,	// (0x0008a316) cam6_mode_pane_g

0xcefa,	// (0x000877f8) bg_tb_trans_pane_cp08_ParamLimits

0xcefa,	// (0x000877f8) bg_tb_trans_pane_cp08

0xeefc,	// (0x000897fa) cam6_battery_pane_ParamLimits

0xeefc,	// (0x000897fa) cam6_battery_pane

0xef12,	// (0x00089810) cam6_indi_pane_g1_ParamLimits

0xef12,	// (0x00089810) cam6_indi_pane_g1

0xef24,	// (0x00089822) cam6_indi_pane_g2_ParamLimits

0xef24,	// (0x00089822) cam6_indi_pane_g2

0xef36,	// (0x00089834) cam6_indi_pane_g3_ParamLimits

0xef36,	// (0x00089834) cam6_indi_pane_g3

0x0002,

0xfa21,	// (0x0008a31f) cam6_indi_pane_g_ParamLimits

0xfa21,	// (0x0008a31f) cam6_indi_pane_g

0xef48,	// (0x00089846) cam6_indi_pane_t1_ParamLimits

0xef48,	// (0x00089846) cam6_indi_pane_t1

0x5593,	// (0x0007fe91) cam6_autofocus_pane_g1

0x559b,	// (0x0007fe99) cam6_autofocus_pane_g2

0x55a3,	// (0x0007fea1) cam6_autofocus_pane_g3

0x55ab,	// (0x0007fea9) cam6_autofocus_pane_g4

0x0003,

0xfa28,	// (0x0008a326) cam6_autofocus_pane_g

0xef6e,	// (0x0008986c) cam6_timer_pane_g1

0xef76,	// (0x00089874) cam6_timer_pane_t1

0xef84,	// (0x00089882) cam6_zoom_cont_pane

0xef8c,	// (0x0008988a) cam6_zoom_pane_g1

0xef95,	// (0x00089893) cam6_zoom_pane_g2

0x6897,	// (0x00081195) cam6_zoom_pane_g3

0x0002,

0xfa31,	// (0x0008a32f) cam6_zoom_pane_g

0xac48,	// (0x00085546) cam6_battery_pane_g1

0xac48,	// (0x00085546) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x000899ad) cam6_battery_pane_g

0xef8c,	// (0x0008988a) cam6_zoom_cont_pane_g1

0xef95,	// (0x00089893) cam6_zoom_cont_pane_g2

0xef9e,	// (0x0008989c) cam6_zoom_cont_pane_g3

0x0002,

0xfa38,	// (0x0008a336) cam6_zoom_cont_pane_g

0x68b5,	// (0x000811b3) cam6_mode_pane_cp_ParamLimits

0x68b5,	// (0x000811b3) cam6_mode_pane_cp

0x68c7,	// (0x000811c5) cam6_zoom_pane_cp_ParamLimits

0x68c7,	// (0x000811c5) cam6_zoom_pane_cp

0x68d3,	// (0x000811d1) vid6_image_uncrop_cif_pane_ParamLimits

0x68d3,	// (0x000811d1) vid6_image_uncrop_cif_pane

0x68e3,	// (0x000811e1) vid6_image_uncrop_nhd_pane_ParamLimits

0x68e3,	// (0x000811e1) vid6_image_uncrop_nhd_pane

0x68f2,	// (0x000811f0) vid6_image_uncrop_vga_pane_ParamLimits

0x68f2,	// (0x000811f0) vid6_image_uncrop_vga_pane

0x6901,	// (0x000811ff) vid6_image_uncrop_wvga_pane_ParamLimits

0x6901,	// (0x000811ff) vid6_image_uncrop_wvga_pane

0x6910,	// (0x0008120e) vid6_indi_pane_ParamLimits

0x6910,	// (0x0008120e) vid6_indi_pane

0xcefa,	// (0x000877f8) bg_tb_trans_pane_cp09_ParamLimits

0xcefa,	// (0x000877f8) bg_tb_trans_pane_cp09

0xefb6,	// (0x000898b4) cam6_battery_pane_cp_ParamLimits

0xefb6,	// (0x000898b4) cam6_battery_pane_cp

0xefc2,	// (0x000898c0) vid6_indi_pane_g1_ParamLimits

0xefc2,	// (0x000898c0) vid6_indi_pane_g1

0xefd4,	// (0x000898d2) vid6_indi_pane_g2_ParamLimits

0xefd4,	// (0x000898d2) vid6_indi_pane_g2

0xefe6,	// (0x000898e4) vid6_indi_pane_g3_ParamLimits

0xefe6,	// (0x000898e4) vid6_indi_pane_g3

0xeffb,	// (0x000898f9) vid6_indi_pane_g4_ParamLimits

0xeffb,	// (0x000898f9) vid6_indi_pane_g4

0xf010,	// (0x0008990e) vid6_indi_pane_g5_ParamLimits

0xf010,	// (0x0008990e) vid6_indi_pane_g5

0x0004,

0xfa3f,	// (0x0008a33d) vid6_indi_pane_g_ParamLimits

0xfa3f,	// (0x0008a33d) vid6_indi_pane_g

0xf02a,	// (0x00089928) vid6_indi_pane_t1_ParamLimits

0xf02a,	// (0x00089928) vid6_indi_pane_t1

0x6928,	// (0x00081226) vid6_indi_pane_t2_ParamLimits

0x6928,	// (0x00081226) vid6_indi_pane_t2

0x6950,	// (0x0008124e) vid6_indi_pane_t3_ParamLimits

0x6950,	// (0x0008124e) vid6_indi_pane_t3

0x6978,	// (0x00081276) vid6_indi_pane_t4_ParamLimits

0x6978,	// (0x00081276) vid6_indi_pane_t4

0x0003,

0xfa4a,	// (0x0008a348) vid6_indi_pane_t_ParamLimits

0xfa4a,	// (0x0008a348) vid6_indi_pane_t

0x699c,	// (0x0008129a) wait_bar_pane_cp08

0x69ab,	// (0x000812a9) main_cset_text2_pane_t1_ParamLimits

0x69ab,	// (0x000812a9) main_cset_text2_pane_t1

0x68a0,	// (0x0008119e) listscroll_gen_pane_cp06_t1_ParamLimits

0x68a0,	// (0x0008119e) listscroll_gen_pane_cp06_t1

0x11a6,	// (0x0007baa4) main_cam6_set_pane

0xac02,	// (0x00085500) bg_tb_trans_pane_cp06_ParamLimits

0xe64d,	// (0x00088f4b) cam4_indicators_pane_g1_ParamLimits

0xe65e,	// (0x00088f5c) cam4_indicators_pane_g2_ParamLimits

0xf828,	// (0x0008a126) cam4_indicators_pane_g_ParamLimits

0xe676,	// (0x00088f74) cam4_indicators_pane_t1_ParamLimits

0xa52b,	// (0x00084e29) bg_tb_trans_pane_cp07_ParamLimits

0xe6a0,	// (0x00088f9e) vid4_indicators_pane_g1_ParamLimits

0xe6b4,	// (0x00088fb2) vid4_indicators_pane_g2_ParamLimits

0xe6c8,	// (0x00088fc6) vid4_indicators_pane_g3_ParamLimits

0xe6d9,	// (0x00088fd7) vid4_indicators_pane_g4_ParamLimits

0xf83a,	// (0x0008a138) vid4_indicators_pane_g_ParamLimits

0xe6f5,	// (0x00088ff3) vid4_indicators_pane_t1_ParamLimits

0xe952,	// (0x00089250) vid4_progress_pane_g1_ParamLimits

0xe962,	// (0x00089260) vid4_progress_pane_g2_ParamLimits

0x643a,	// (0x00080d38) vid4_progress_pane_g3_ParamLimits

0xe972,	// (0x00089270) vid4_progress_pane_g4_ParamLimits

0xf996,	// (0x0008a294) vid4_progress_pane_g_ParamLimits

0x644c,	// (0x00080d4a) vid4_progress_pane_t1_ParamLimits

0xe98a,	// (0x00089288) vid4_progress_pane_t2_ParamLimits

0xe99f,	// (0x0008929d) vid4_progress_pane_t3_ParamLimits

0xf9a1,	// (0x0008a29f) vid4_progress_pane_t_ParamLimits

0x6462,	// (0x00080d60) wait_bar_pane_cp07_ParamLimits

0x69c9,	// (0x000812c7) main_cam6_set_pane_g2_ParamLimits

0x69c9,	// (0x000812c7) main_cam6_set_pane_g2

0x69ed,	// (0x000812eb) main_cset6_listscroll_pane_ParamLimits

0x69ed,	// (0x000812eb) main_cset6_listscroll_pane

0x6a09,	// (0x00081307) main_cset6_slider_pane_ParamLimits

0x6a09,	// (0x00081307) main_cset6_slider_pane

0x6a1f,	// (0x0008131d) main_cset6_text2_pane_ParamLimits

0x6a1f,	// (0x0008131d) main_cset6_text2_pane

0x6a2d,	// (0x0008132b) main_cset6_text_pane

0x6a35,	// (0x00081333) main_cset_list_pane_copy1_ParamLimits

0x6a35,	// (0x00081333) main_cset_list_pane_copy1

0x6a45,	// (0x00081343) scroll_pane_cp028_copy1

0x6a4e,	// (0x0008134c) cset_list_set_pane_copy1

0x6a60,	// (0x0008135e) aid_position_infowindow_above_copy1

0x6a68,	// (0x00081366) aid_position_infowindow_below_copy1

0xe9cb,	// (0x000892c9) cset_list_set_pane_g1_copy1

0xddac,	// (0x000886aa) cset_list_set_pane_g3_copy1_ParamLimits

0xddac,	// (0x000886aa) cset_list_set_pane_g3_copy1

0xddbb,	// (0x000886b9) cset_list_set_pane_t1_copy1_ParamLimits

0xddbb,	// (0x000886b9) cset_list_set_pane_t1_copy1

0xa52b,	// (0x00084e29) list_highlight_pane_cp021_copy1_ParamLimits

0xa52b,	// (0x00084e29) list_highlight_pane_cp021_copy1

0x6a70,	// (0x0008136e) cset6_slider_pane_ParamLimits

0x6a70,	// (0x0008136e) cset6_slider_pane

0x6a9c,	// (0x0008139a) main_cset6_slider_pane_g1_ParamLimits

0x6a9c,	// (0x0008139a) main_cset6_slider_pane_g1

0x6ac4,	// (0x000813c2) main_cset6_slider_pane_g2_ParamLimits

0x6ac4,	// (0x000813c2) main_cset6_slider_pane_g2

0x6aec,	// (0x000813ea) main_cset6_slider_pane_g3_ParamLimits

0x6aec,	// (0x000813ea) main_cset6_slider_pane_g3

0x6af8,	// (0x000813f6) main_cset6_slider_pane_g4_ParamLimits

0x6af8,	// (0x000813f6) main_cset6_slider_pane_g4

0x6b04,	// (0x00081402) main_cset6_slider_pane_g5_ParamLimits

0x6b04,	// (0x00081402) main_cset6_slider_pane_g5

0xe8a2,	// (0x000891a0) main_cset6_slider_pane_g7_ParamLimits

0xe8a2,	// (0x000891a0) main_cset6_slider_pane_g7

0xe8ae,	// (0x000891ac) main_cset6_slider_pane_g8_ParamLimits

0xe8ae,	// (0x000891ac) main_cset6_slider_pane_g8

0x5bf8,	// (0x000804f6) main_cset6_slider_pane_g9_ParamLimits

0x5bf8,	// (0x000804f6) main_cset6_slider_pane_g9

0x5c04,	// (0x00080502) main_cset6_slider_pane_g10_ParamLimits

0x5c04,	// (0x00080502) main_cset6_slider_pane_g10

0x5c10,	// (0x0008050e) main_cset6_slider_pane_g11_ParamLimits

0x5c10,	// (0x0008050e) main_cset6_slider_pane_g11

0x5c1c,	// (0x0008051a) main_cset6_slider_pane_g12_ParamLimits

0x5c1c,	// (0x0008051a) main_cset6_slider_pane_g12

0x5c28,	// (0x00080526) main_cset6_slider_pane_g13_ParamLimits

0x5c28,	// (0x00080526) main_cset6_slider_pane_g13

0x5c34,	// (0x00080532) main_cset6_slider_pane_g14_ParamLimits

0x5c34,	// (0x00080532) main_cset6_slider_pane_g14

0x6b10,	// (0x0008140e) main_cset6_slider_pane_g15_ParamLimits

0x6b10,	// (0x0008140e) main_cset6_slider_pane_g15

0x5c58,	// (0x00080556) main_cset6_slider_pane_g16_ParamLimits

0x5c58,	// (0x00080556) main_cset6_slider_pane_g16

0x5c64,	// (0x00080562) main_cset6_slider_pane_g17_ParamLimits

0x5c64,	// (0x00080562) main_cset6_slider_pane_g17

0x0011,

0xfa53,	// (0x0008a351) main_cset6_slider_pane_g_ParamLimits

0xfa53,	// (0x0008a351) main_cset6_slider_pane_g

0x6b40,	// (0x0008143e) main_cset6_slider_pane_t1_ParamLimits

0x6b40,	// (0x0008143e) main_cset6_slider_pane_t1

0x6b81,	// (0x0008147f) main_cset6_slider_pane_t2_ParamLimits

0x6b81,	// (0x0008147f) main_cset6_slider_pane_t2

0x6bac,	// (0x000814aa) main_cset6_slider_pane_t3_ParamLimits

0x6bac,	// (0x000814aa) main_cset6_slider_pane_t3

0x6bd7,	// (0x000814d5) main_cset6_slider_pane_t4_ParamLimits

0x6bd7,	// (0x000814d5) main_cset6_slider_pane_t4

0x6c02,	// (0x00081500) main_cset6_slider_pane_t5_ParamLimits

0x6c02,	// (0x00081500) main_cset6_slider_pane_t5

0x6c2d,	// (0x0008152b) main_cset6_slider_pane_t7_ParamLimits

0x6c2d,	// (0x0008152b) main_cset6_slider_pane_t7

0x6c63,	// (0x00081561) main_cset6_slider_pane_t8_ParamLimits

0x6c63,	// (0x00081561) main_cset6_slider_pane_t8

0x6c87,	// (0x00081585) main_cset6_slider_pane_t9_ParamLimits

0x6c87,	// (0x00081585) main_cset6_slider_pane_t9

0x6cab,	// (0x000815a9) main_cset6_slider_pane_t10_ParamLimits

0x6cab,	// (0x000815a9) main_cset6_slider_pane_t10

0x6ccf,	// (0x000815cd) main_cset6_slider_pane_t11_ParamLimits

0x6ccf,	// (0x000815cd) main_cset6_slider_pane_t11

0x6cf3,	// (0x000815f1) main_cset6_slider_pane_t14_ParamLimits

0x6cf3,	// (0x000815f1) main_cset6_slider_pane_t14

0x6d2c,	// (0x0008162a) main_cset6_slider_pane_t15_ParamLimits

0x6d2c,	// (0x0008162a) main_cset6_slider_pane_t15

0x000b,

0xfa78,	// (0x0008a376) main_cset6_slider_pane_t_ParamLimits

0xfa78,	// (0x0008a376) main_cset6_slider_pane_t

0xea6f,	// (0x0008936d) cset_slider_pane_g1_copy1

0xea78,	// (0x00089376) cset_slider_pane_g2_copy1

0xea81,	// (0x0008937f) cset_slider_pane_g3_copy1

0x11a6,	// (0x0007baa4) bg_popup_sub_pane_cp011_copy1

0x6d6e,	// (0x0008166c) main_cset_text_pane_g1_copy1

0xeb0a,	// (0x00089408) main_cset_text_pane_t1_copy1

0xeb18,	// (0x00089416) main_cset_text_pane_t2_copy1

0xeb26,	// (0x00089424) main_cset_text_pane_t3_copy1

0xeb34,	// (0x00089432) main_cset_text_pane_t4_copy1

0xeb42,	// (0x00089440) main_cset_text_pane_t5_copy1

0x6d76,	// (0x00081674) main_cset_text_pane_t6_copy1

0x6d84,	// (0x00081682) main_cset_text_pane_t7_copy1

0x69ab,	// (0x000812a9) main_cset_text2_pane_t1_copy1

0xa52b,	// (0x00084e29) main_ncimui_pane

0x3d08,	// (0x0007e606) popup_query_ncimui_window_ParamLimits

0x3d08,	// (0x0007e606) popup_query_ncimui_window

0xd555,	// (0x00087e53) field_cale_ev2_pane_g4_ParamLimits

0xd555,	// (0x00087e53) field_cale_ev2_pane_g4

0x4ef4,	// (0x0007f7f2) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4ef4,	// (0x0007f7f2) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7c2,	// (0x0008a0c0) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7c2,	// (0x0008a0c0) cell_video_dialer_keypad_pane_g

0x4f0c,	// (0x0007f80a) cell_video_dialer_keypad_pane_t1

0x11a6,	// (0x0007baa4) bg_popup_window_pane_cp012

0xccef,	// (0x000875ed) heading_pane_cp06

0x6ed9,	// (0x000817d7) ncim_query_content_pane

0x11a6,	// (0x0007baa4) bg_popup_heading_pane_cp01

0x6ee1,	// (0x000817df) ncim_heading_pane_t1

0x6eef,	// (0x000817ed) ncim_indicator_popup_pane

0x6f01,	// (0x000817ff) ncim_query_button_pane

0x6f21,	// (0x0008181f) ncim_query_content_pane_t1

0x6f33,	// (0x00081831) ncim_query_content_pane_t2

0x0005,

0xfabc,	// (0x0008a3ba) ncim_query_content_pane_t

0x6fe5,	// (0x000818e3) ncim_query_list_pane

0x6ff7,	// (0x000818f5) ncim_query_popup_pane

0x6eef,	// (0x000817ed) ncim_indicator_popup_pane_ParamLimits

0x6f09,	// (0x00081807) ncim_query_content_pane_g1_ParamLimits

0x6f09,	// (0x00081807) ncim_query_content_pane_g1

0x6f21,	// (0x0008181f) ncim_query_content_pane_t1_ParamLimits

0x6f33,	// (0x00081831) ncim_query_content_pane_t2_ParamLimits

0x6f45,	// (0x00081843) ncim_query_content_pane_t3_ParamLimits

0x6f45,	// (0x00081843) ncim_query_content_pane_t3

0x6f6d,	// (0x0008186b) ncim_query_content_pane_t4_ParamLimits

0x6f6d,	// (0x0008186b) ncim_query_content_pane_t4

0x6f95,	// (0x00081893) ncim_query_content_pane_t5_ParamLimits

0x6f95,	// (0x00081893) ncim_query_content_pane_t5

0x6fbd,	// (0x000818bb) ncim_query_content_pane_t6_ParamLimits

0x6fbd,	// (0x000818bb) ncim_query_content_pane_t6

0xfabc,	// (0x0008a3ba) ncim_query_content_pane_t_ParamLimits

0x6fe5,	// (0x000818e3) ncim_query_list_pane_ParamLimits

0x6ff7,	// (0x000818f5) ncim_query_popup_pane_ParamLimits

0x700b,	// (0x00081909) wait_bar_pane_cp04

0x11a6,	// (0x0007baa4) input_focus_pane_cp011

0x7013,	// (0x00081911) ncim_query_popup_pane_t1

0x7021,	// (0x0008191f) ncim_list_query_list_pane_ParamLimits

0x7021,	// (0x0008191f) ncim_list_query_list_pane

0x11a6,	// (0x0007baa4) bg_button_pane_cp027

0x702e,	// (0x0008192c) ncim_query_button_pane_g1

0x11a6,	// (0x0007baa4) list_highlight_pane_cp012

0x7038,	// (0x00081936) ncim_list_query_list_pane_g1

0x7040,	// (0x0008193e) ncim_list_query_list_pane_t1

0xe66a,	// (0x00088f68) cam4_indicators_pane_g3_ParamLimits

0xe66a,	// (0x00088f68) cam4_indicators_pane_g3

0xe6e5,	// (0x00088fe3) vid4_indicators_pane_g5_ParamLimits

0xe6e5,	// (0x00088fe3) vid4_indicators_pane_g5

0xe97e,	// (0x0008927c) vid4_progress_pane_g5_ParamLimits

0xe97e,	// (0x0008927c) vid4_progress_pane_g5

0x6dc4,	// (0x000816c2) main_ncimui_pane_g1

0x6e2d,	// (0x0008172b) ncimui_group_query_pane_ParamLimits

0x6e2d,	// (0x0008172b) ncimui_group_query_pane

0x6e75,	// (0x00081773) ncimui_list_pane_ParamLimits

0x6e75,	// (0x00081773) ncimui_list_pane

0x6e9c,	// (0x0008179a) ncimui_text_pane_ParamLimits

0x6e9c,	// (0x0008179a) ncimui_text_pane

0x704e,	// (0x0008194c) ncimui_text_pane_t1_ParamLimits

0x704e,	// (0x0008194c) ncimui_text_pane_t1

0x706c,	// (0x0008196a) ncimui_list_single_graphic_pane_ParamLimits

0x706c,	// (0x0008196a) ncimui_list_single_graphic_pane

0x707c,	// (0x0008197a) ncimui_query_pane_ParamLimits

0x707c,	// (0x0008197a) ncimui_query_pane

0x11a6,	// (0x0007baa4) list_highlight_pane_cp013

0x708f,	// (0x0008198d) ncim_list_query_list_pane_t1_copy1

0x709d,	// (0x0008199b) ncim_list_single_graphic_pane_g1

0x70a5,	// (0x000819a3) ncim_query_button_pane_cp01

0x70b1,	// (0x000819af) ncim_query_entry_pane_ParamLimits

0x70b1,	// (0x000819af) ncim_query_entry_pane

0x70c4,	// (0x000819c2) ncimui_query_pane_g1

0x70d0,	// (0x000819ce) ncimui_query_pane_t1_ParamLimits

0x70d0,	// (0x000819ce) ncimui_query_pane_t1

0xa52b,	// (0x00084e29) input_focus_pane_cp012

0x70e9,	// (0x000819e7) ncim_query_entry_pane_t1

0xacc0,	// (0x000855be) main_im_pane_ParamLimits

0xa52b,	// (0x00084e29) main_mobtv_pane_ParamLimits

0xa52b,	// (0x00084e29) main_mobtv_pane

0x6b28,	// (0x00081426) main_cset6_slider_pane_g18_ParamLimits

0x6b28,	// (0x00081426) main_cset6_slider_pane_g18

0x6b34,	// (0x00081432) main_cset6_slider_pane_g19_ParamLimits

0x6b34,	// (0x00081432) main_cset6_slider_pane_g19

0xac1e,	// (0x0008551c) bg_main_mobtv_pane_ParamLimits

0xac1e,	// (0x0008551c) bg_main_mobtv_pane

0x70fb,	// (0x000819f9) main_mobtv_info_pane

0x7104,	// (0x00081a02) main_mobtv_loading_pane_ParamLimits

0x7104,	// (0x00081a02) main_mobtv_loading_pane

0x7111,	// (0x00081a0f) main_mobtv_pg_channel_list_pane

0x711b,	// (0x00081a19) main_mobtv_pg_hdr_pane

0x7124,	// (0x00081a22) main_mobtv_programe_curr_pane_ParamLimits

0x7124,	// (0x00081a22) main_mobtv_programe_curr_pane

0x7131,	// (0x00081a2f) main_mobtv_programe_next_pane_ParamLimits

0x7131,	// (0x00081a2f) main_mobtv_programe_next_pane

0x713e,	// (0x00081a3c) popup_mobtv_noti_window

0xac48,	// (0x00085546) main_tv_pg_hdr_pane_g1

0x7146,	// (0x00081a44) main_tv_pg_hdr_pane_g2

0x714e,	// (0x00081a4c) main_tv_pg_hdr_pane_g3

0x7156,	// (0x00081a54) main_tv_pg_hdr_pane_g4

0x715e,	// (0x00081a5c) main_tv_pg_hdr_pane_g5

0x7168,	// (0x00081a66) main_tv_pg_hdr_pane_g6

0x7172,	// (0x00081a70) main_tv_pg_hdr_pane_g7

0x717c,	// (0x00081a7a) main_tv_pg_hdr_pane_g8

0x7186,	// (0x00081a84) main_tv_pg_hdr_pane_g9

0x7190,	// (0x00081a8e) main_tv_pg_hdr_pane_g10

0x719a,	// (0x00081a98) main_tv_pg_hdr_pane_g11

0x000a,

0xfac9,	// (0x0008a3c7) main_tv_pg_hdr_pane_g

0x71a4,	// (0x00081aa2) main_tv_pg_hdr_pane_t1

0x71b2,	// (0x00081ab0) main_tv_pg_hdr_pane_t2

0x71c0,	// (0x00081abe) main_tv_pg_hdr_pane_t3

0x71d0,	// (0x00081ace) main_tv_pg_hdr_pane_t4

0x71e0,	// (0x00081ade) main_tv_pg_hdr_pane_t5

0x0004,

0xfae0,	// (0x0008a3de) main_tv_pg_hdr_pane_t

0x71f0,	// (0x00081aee) single_mobtv_pg_channel_pane_ParamLimits

0x71f0,	// (0x00081aee) single_mobtv_pg_channel_pane

0x7202,	// (0x00081b00) single_mobtv_pg_channel_table_pane

0xb227,	// (0x00085b25) single_mobtv_pg_channel_thumb_pane

0x720b,	// (0x00081b09) single_tv_pg_channel_pane_g1

0x7214,	// (0x00081b12) single_tv_pg_channel_pane_g2

0x0001,

0xfaeb,	// (0x0008a3e9) single_tv_pg_channel_pane_g

0xac02,	// (0x00085500) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xac02,	// (0x00085500) bg_single_mobtv_pg_channel_thumb_pane

0x721d,	// (0x00081b1b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x721d,	// (0x00081b1b) single_mobtv_pg_channel_thumb_pane_g1

0x722b,	// (0x00081b29) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x722b,	// (0x00081b29) single_mobtv_pg_channel_thumb_pane_g2

0x7237,	// (0x00081b35) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x7237,	// (0x00081b35) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfaf0,	// (0x0008a3ee) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfaf0,	// (0x0008a3ee) single_mobtv_pg_channel_thumb_pane_g

0x7243,	// (0x00081b41) single_mobtv_pg_channel_thumb_pane_t1

0x7251,	// (0x00081b4f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfaf7,	// (0x0008a3f5) single_mobtv_pg_channel_thumb_pane_t

0xac48,	// (0x00085546) bg_single_mobtv_pg_channel_table_pane_g1

0xac48,	// (0x00085546) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x000899ad) bg_single_mobtv_pg_channel_table_pane_g

0x725f,	// (0x00081b5d) single_mobtv_pg_channel_table_pane_t1

0x726d,	// (0x00081b6b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfafc,	// (0x0008a3fa) single_mobtv_pg_channel_table_pane_t

0x7283,	// (0x00081b81) main_mobtv_info_pane_g1_ParamLimits

0x7283,	// (0x00081b81) main_mobtv_info_pane_g1

0x72a1,	// (0x00081b9f) main_mobtv_info_pane_t1_ParamLimits

0x72a1,	// (0x00081b9f) main_mobtv_info_pane_t1

0x7319,	// (0x00081c17) main_mobtv_info_pane_t2_ParamLimits

0x7319,	// (0x00081c17) main_mobtv_info_pane_t2

0x0002,

0xfb06,	// (0x0008a404) main_mobtv_info_pane_t_ParamLimits

0xfb06,	// (0x0008a404) main_mobtv_info_pane_t

0x73a8,	// (0x00081ca6) wait_bar_pane_cp05

0x73ba,	// (0x00081cb8) main_mobtv_loading_pane_g1_ParamLimits

0x73ba,	// (0x00081cb8) main_mobtv_loading_pane_g1

0x73cd,	// (0x00081ccb) main_mobtv_loading_pane_g2_ParamLimits

0x73cd,	// (0x00081ccb) main_mobtv_loading_pane_g2

0x73d9,	// (0x00081cd7) main_mobtv_loading_pane_g3_ParamLimits

0x73d9,	// (0x00081cd7) main_mobtv_loading_pane_g3

0x0002,

0xfb0d,	// (0x0008a40b) main_mobtv_loading_pane_g_ParamLimits

0xfb0d,	// (0x0008a40b) main_mobtv_loading_pane_g

0x73ec,	// (0x00081cea) main_mobtv_loading_pane_t1_ParamLimits

0x73ec,	// (0x00081cea) main_mobtv_loading_pane_t1

0x7404,	// (0x00081d02) main_mobtv_loading_pane_t2_ParamLimits

0x7404,	// (0x00081d02) main_mobtv_loading_pane_t2

0x0001,

0xfb14,	// (0x0008a412) main_mobtv_loading_pane_t_ParamLimits

0xfb14,	// (0x0008a412) main_mobtv_loading_pane_t

0x7428,	// (0x00081d26) wait_bar_pane_cp06_ParamLimits

0x7428,	// (0x00081d26) wait_bar_pane_cp06

0x7437,	// (0x00081d35) main_mobtv_programe_curr_pane_t1

0x7445,	// (0x00081d43) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb19,	// (0x0008a417) main_mobtv_programe_curr_pane_t

0x7453,	// (0x00081d51) main_mobtv_programe_next_pane_t1

0x7461,	// (0x00081d5f) main_mobtv_programe_next_pane_t2

0x746f,	// (0x00081d6d) main_mobtv_programe_next_pane_t3

0x0002,

0xfb1e,	// (0x0008a41c) main_mobtv_programe_next_pane_t

0x11a6,	// (0x0007baa4) bg_popup_mobtv_noti_window_pane

0x747d,	// (0x00081d7b) popup_mobtv_noti_window_g1

0x7485,	// (0x00081d83) popup_mobtv_noti_window_t1

0x7493,	// (0x00081d91) popup_mobtv_noti_window_t2

0x0001,

0xfb25,	// (0x0008a423) popup_mobtv_noti_window_t

0xac48,	// (0x00085546) bg_popup_mobtv_noti_window_pane_g1

0x11a6,	// (0x0007baa4) sc_clock_pane

0x11a6,	// (0x0007baa4) main_fs_bigclock_pane

0x666f,	// (0x00080f6d) blid2_tripm_pane_t4_ParamLimits

0x666f,	// (0x00080f6d) blid2_tripm_pane_t4

0xac02,	// (0x00085500) sc_clock_pane_g1_ParamLimits

0xac02,	// (0x00085500) sc_clock_pane_g1

0xac52,	// (0x00085550) sc_clock_pane_t1_ParamLimits

0xac52,	// (0x00085550) sc_clock_pane_t1

0xac52,	// (0x00085550) sc_clock_pane_t2_ParamLimits

0xac52,	// (0x00085550) sc_clock_pane_t2

0xac52,	// (0x00085550) sc_clock_pane_t3_ParamLimits

0xac52,	// (0x00085550) sc_clock_pane_t3

0x0004,

0xfb2a,	// (0x0008a428) sc_clock_pane_t_ParamLimits

0xfb2a,	// (0x0008a428) sc_clock_pane_t

0x8528,	// (0x00082e26) main_fs_bigclock_indicator_pane_ParamLimits

0x8528,	// (0x00082e26) main_fs_bigclock_indicator_pane

0x74f0,	// (0x00081dee) main_fs_bigclock_pane_g1_ParamLimits

0x74f0,	// (0x00081dee) main_fs_bigclock_pane_g1

0x8534,	// (0x00082e32) main_fs_bigclock_pane_t1_ParamLimits

0x8534,	// (0x00082e32) main_fs_bigclock_pane_t1

0x8546,	// (0x00082e44) main_fs_bigclock_pane_t2_ParamLimits

0x8546,	// (0x00082e44) main_fs_bigclock_pane_t2

0x855a,	// (0x00082e58) main_fs_bigclock_pane_t3_ParamLimits

0x855a,	// (0x00082e58) main_fs_bigclock_pane_t3

0x0002,

0xfcbb,	// (0x0008a5b9) main_fs_bigclock_pane_t_ParamLimits

0xfcbb,	// (0x0008a5b9) main_fs_bigclock_pane_t

0x856c,	// (0x00082e6a) main_fs_bigclock_indicator_pane_g1

0x6f15,	// (0x00081813) ncim_query_content_pane_g2_ParamLimits

0x6f15,	// (0x00081813) ncim_query_content_pane_g2

0x0001,

0xfab7,	// (0x0008a3b5) ncim_query_content_pane_g_ParamLimits

0xfab7,	// (0x0008a3b5) ncim_query_content_pane_g

0xac52,	// (0x00085550) sc_clock_pane_t4_ParamLimits

0xac52,	// (0x00085550) sc_clock_pane_t4

0xa52b,	// (0x00084e29) main_radioblah_pane

0xe5d3,	// (0x00088ed1) cell_call4_button_pane_t1_copy1_ParamLimits

0xe5d3,	// (0x00088ed1) cell_call4_button_pane_t1_copy1

0x6ddc,	// (0x000816da) main_ncimui_pane_t1_ParamLimits

0x6ddc,	// (0x000816da) main_ncimui_pane_t1

0x6df6,	// (0x000816f4) main_ncimui_pane_t2_ParamLimits

0x6df6,	// (0x000816f4) main_ncimui_pane_t2

0x0002,

0xfab0,	// (0x0008a3ae) main_ncimui_pane_t_ParamLimits

0xfab0,	// (0x0008a3ae) main_ncimui_pane_t

0xba86,	// (0x00086384) main_radioblah_anim_pane_ParamLimits

0xba86,	// (0x00086384) main_radioblah_anim_pane

0xba86,	// (0x00086384) main_radioblah_info_pane_ParamLimits

0xba86,	// (0x00086384) main_radioblah_info_pane

0xba72,	// (0x00086370) main_radioblah_pane_t1_ParamLimits

0xba72,	// (0x00086370) main_radioblah_pane_t1

0xba72,	// (0x00086370) main_radioblah_pane_t2_ParamLimits

0xba72,	// (0x00086370) main_radioblah_pane_t2

0x0003,

0xfb4b,	// (0x0008a449) main_radioblah_pane_t_ParamLimits

0xfb4b,	// (0x0008a449) main_radioblah_pane_t

0xa52b,	// (0x00084e29) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa52b,	// (0x00084e29) main_radioblah_rocker_ctrl_pane

0xcee6,	// (0x000877e4) main_radioblah_info_pane_t1_ParamLimits

0xcee6,	// (0x000877e4) main_radioblah_info_pane_t1

0x76a5,	// (0x00081fa3) main_radioblah_info_pane_t2_ParamLimits

0x76a5,	// (0x00081fa3) main_radioblah_info_pane_t2

0x0003,

0xfb54,	// (0x0008a452) main_radioblah_info_pane_t_ParamLimits

0xfb54,	// (0x0008a452) main_radioblah_info_pane_t

0xac48,	// (0x00085546) main_radioblah_rocker_ctrl_pane_g1

0xac48,	// (0x00085546) main_radioblah_rocker_ctrl_pane_g2

0xac48,	// (0x00085546) main_radioblah_rocker_ctrl_pane_g3

0xac48,	// (0x00085546) main_radioblah_rocker_ctrl_pane_g4

0xac48,	// (0x00085546) main_radioblah_rocker_ctrl_pane_g5

0xac48,	// (0x00085546) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb5d,	// (0x0008a45b) main_radioblah_rocker_ctrl_pane_g

0x69ab,	// (0x000812a9) main_cset_text2_pane_t1_copy1_ParamLimits

0xe63d,	// (0x00088f3b) cam4_image_uncrop_qvga_pane

0xe690,	// (0x00088f8e) vid4_image_uncrop_qcif_pane

0xe9bd,	// (0x000892bb) cam6_image_uncrop_qvga_pane_ParamLimits

0xe9bd,	// (0x000892bb) cam6_image_uncrop_qvga_pane

0xefa6,	// (0x000898a4) vid6_image_uncrop_qcif_pane_ParamLimits

0xefa6,	// (0x000898a4) vid6_image_uncrop_qcif_pane

0x11a6,	// (0x0007baa4) bg_popup_preview_window_pane_cp03

0x6d92,	// (0x00081690) list_cset_text2_pane

0x6d9a,	// (0x00081698) main_cset6_text2_pane_g1

0x6da2,	// (0x000816a0) main_cset6_text2_pane_t1

0x76f4,	// (0x00081ff2) list_cset_text2_pane_t1_ParamLimits

0x76f4,	// (0x00081ff2) list_cset_text2_pane_t1

0xa52b,	// (0x00084e29) main_radioblah_pane_ParamLimits

0x7394,	// (0x00081c92) main_mobtv_info_pane_t3_ParamLimits

0x7394,	// (0x00081c92) main_mobtv_info_pane_t3

0xba64,	// (0x00086362) main_radioblah_pane_g1

0x7675,	// (0x00081f73) main_radioblah_info_pane_g1

0xac66,	// (0x00085564) main_radioblah_info_pane_t3_ParamLimits

0xac66,	// (0x00085564) main_radioblah_info_pane_t3

0x2b69,	// (0x0007d467) highlight_cell_cale_month_pane_ParamLimits

0x2b69,	// (0x0007d467) highlight_cell_cale_month_pane

0x11a6,	// (0x0007baa4) main_phob_fisheye_pane

0xd5f6,	// (0x00087ef4) scroll_pane_cp0031_ParamLimits

0xd5f6,	// (0x00087ef4) scroll_pane_cp0031

0x699c,	// (0x0008129a) wait_bar_pane_cp08_ParamLimits

0x6a4e,	// (0x0008134c) cset_list_set_pane_copy1_ParamLimits

0x770f,	// (0x0008200d) highlight_cell_cale_month_pane_g1

0x7717,	// (0x00082015) highlight_cell_cale_month_pane_t1

0xed2a,	// (0x00089628) list_gen_pane_cp01

0xe88d,	// (0x0008918b) scroll_pane_01

0x7725,	// (0x00082023) list_single_double_fisheye_pane

0xddd0,	// (0x000886ce) list_double_fisheye_pane_g1_ParamLimits

0xddd0,	// (0x000886ce) list_double_fisheye_pane_g1

0xdddc,	// (0x000886da) list_double_fisheye_pane_g2_ParamLimits

0xdddc,	// (0x000886da) list_double_fisheye_pane_g2

0x772e,	// (0x0008202c) list_double_fisheye_pane_g3_ParamLimits

0x772e,	// (0x0008202c) list_double_fisheye_pane_g3

0x0004,

0xfb6a,	// (0x0008a468) list_double_fisheye_pane_g_ParamLimits

0xfb6a,	// (0x0008a468) list_double_fisheye_pane_g

0x0cda,	// (0x0007b5d8) list_double_fisheye_pane_t1_ParamLimits

0x0cda,	// (0x0007b5d8) list_double_fisheye_pane_t1

0x0cf5,	// (0x0007b5f3) list_double_fisheye_pane_t2_ParamLimits

0x0cf5,	// (0x0007b5f3) list_double_fisheye_pane_t2

0x0001,

0xfb75,	// (0x0008a473) list_double_fisheye_pane_t_ParamLimits

0xfb75,	// (0x0008a473) list_double_fisheye_pane_t

0x11a6,	// (0x0007baa4) main_call5_pane

0xa52b,	// (0x00084e29) sc_swipe_pane_ParamLimits

0xa52b,	// (0x00084e29) sc_swipe_pane

0x774d,	// (0x0008204b) call5_image_pane_ParamLimits

0x774d,	// (0x0008204b) call5_image_pane

0x776a,	// (0x00082068) call5_swipe_1_pane_ParamLimits

0x776a,	// (0x00082068) call5_swipe_1_pane

0x777d,	// (0x0008207b) call5_swipe_2_pane_ParamLimits

0x777d,	// (0x0008207b) call5_swipe_2_pane

0x77a8,	// (0x000820a6) popup_call5_audio_first_window_ParamLimits

0x77a8,	// (0x000820a6) popup_call5_audio_first_window

0xac02,	// (0x00085500) call5_swipe_1_pane_g1_ParamLimits

0xac02,	// (0x00085500) call5_swipe_1_pane_g1

0x77b9,	// (0x000820b7) call5_swipe_1_pane_g2_ParamLimits

0x77b9,	// (0x000820b7) call5_swipe_1_pane_g2

0x0001,

0xfb7a,	// (0x0008a478) call5_swipe_1_pane_g_ParamLimits

0xfb7a,	// (0x0008a478) call5_swipe_1_pane_g

0x77c5,	// (0x000820c3) call5_swipe_1_pane_t1_ParamLimits

0x77c5,	// (0x000820c3) call5_swipe_1_pane_t1

0xac02,	// (0x00085500) call5_swipe_2_pane_g1_ParamLimits

0xac02,	// (0x00085500) call5_swipe_2_pane_g1

0x77da,	// (0x000820d8) call5_swipe_2_pane_g2_ParamLimits

0x77da,	// (0x000820d8) call5_swipe_2_pane_g2

0x0001,

0xfb7f,	// (0x0008a47d) call5_swipe_2_pane_g_ParamLimits

0xfb7f,	// (0x0008a47d) call5_swipe_2_pane_g

0x77e6,	// (0x000820e4) call5_swipe_2_pane_t1_ParamLimits

0x77e6,	// (0x000820e4) call5_swipe_2_pane_t1

0xac02,	// (0x00085500) sc_swipe_pane_g1_ParamLimits

0xac02,	// (0x00085500) sc_swipe_pane_g1

0xac10,	// (0x0008550e) sc_swipe_pane_g2_ParamLimits

0xac10,	// (0x0008550e) sc_swipe_pane_g2

0x0001,

0xf18c,	// (0x00089a8a) sc_swipe_pane_g_ParamLimits

0xf18c,	// (0x00089a8a) sc_swipe_pane_g

0xac52,	// (0x00085550) sc_swipe_pane_t1_ParamLimits

0xac52,	// (0x00085550) sc_swipe_pane_t1

0x11a6,	// (0x0007baa4) main_cmail_launcher_pane

0x77fb,	// (0x000820f9) aid_size_cell_cmail_l_ParamLimits

0x77fb,	// (0x000820f9) aid_size_cell_cmail_l

0x7809,	// (0x00082107) grid_cmail_l_pane_ParamLimits

0x7809,	// (0x00082107) grid_cmail_l_pane

0x7823,	// (0x00082121) cell_cmail_l_pane_ParamLimits

0x7823,	// (0x00082121) cell_cmail_l_pane

0x783d,	// (0x0008213b) cell_cmail_l_pane_g1_ParamLimits

0x783d,	// (0x0008213b) cell_cmail_l_pane_g1

0x7849,	// (0x00082147) cell_cmail_l_pane_t1_ParamLimits

0x7849,	// (0x00082147) cell_cmail_l_pane_t1

0x785f,	// (0x0008215d) cell_cmail_l_pane_t2_ParamLimits

0x785f,	// (0x0008215d) cell_cmail_l_pane_t2

0x0001,

0xfb84,	// (0x0008a482) cell_cmail_l_pane_t_ParamLimits

0xfb84,	// (0x0008a482) cell_cmail_l_pane_t

0xa52b,	// (0x00084e29) grid_highlight_pane_cp018_ParamLimits

0xa52b,	// (0x00084e29) grid_highlight_pane_cp018

0x1276,	// (0x0007bb74) main2_pane_ParamLimits

0x1276,	// (0x0007bb74) main2_pane

0xad7c,	// (0x0008567a) popup_sp_fs_action_menu_bg_pane_g1

0xad84,	// (0x00085682) popup_sp_fs_action_menu_bg_pane_g2

0xad8c,	// (0x0008568a) popup_sp_fs_action_menu_bg_pane_g3

0xad94,	// (0x00085692) popup_sp_fs_action_menu_bg_pane_g4

0xad9c,	// (0x0008569a) popup_sp_fs_action_menu_bg_pane_g5

0xada4,	// (0x000856a2) popup_sp_fs_action_menu_bg_pane_g6

0xadac,	// (0x000856aa) popup_sp_fs_action_menu_bg_pane_g7

0xadb4,	// (0x000856b2) popup_sp_fs_action_menu_bg_pane_g8

0xadbc,	// (0x000856ba) popup_sp_fs_action_menu_bg_pane_g9

0xadc4,	// (0x000856c2) popup_sp_fs_action_menu_bg_pane_g10

0xadc4,	// (0x000856c2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x000899fe) popup_sp_fs_action_menu_bg_pane_g

0xac02,	// (0x00085500) list_medium_line_x2_t3_g3_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t3_g3_g1

0xac02,	// (0x00085500) list_medium_line_x2_t3_g3_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t3_g3_g2

0xac02,	// (0x00085500) list_medium_line_x2_t3_g3_g3_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00089aac) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00089aac) list_medium_line_x2_t3_g3_g

0xac52,	// (0x00085550) list_medium_line_x2_t3_g3_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t3_g3_t1

0xac52,	// (0x00085550) list_medium_line_x2_t3_g3_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t3_g3_t2

0xac52,	// (0x00085550) list_medium_line_x2_t3_g3_t3_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x00089ab3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x00089ab3) list_medium_line_x2_t3_g3_t

0xac02,	// (0x00085500) list_medium_line_x2_t3_g2_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t3_g2_g1

0xac02,	// (0x00085500) list_medium_line_x2_t3_g2_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t3_g2_g2

0x0001,

0xf182,	// (0x00089a80) list_medium_line_x2_t3_g2_g_ParamLimits

0xf182,	// (0x00089a80) list_medium_line_x2_t3_g2_g

0xac52,	// (0x00085550) list_medium_line_x2_t3_g2_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t3_g2_t1

0xac52,	// (0x00085550) list_medium_line_x2_t3_g2_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t3_g2_t2

0xac52,	// (0x00085550) list_medium_line_x2_t3_g2_t3_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x00089ab3) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x00089ab3) list_medium_line_x2_t3_g2_t

0xac02,	// (0x00085500) list_medium_line_x2_t4_g4_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t4_g4_g1

0xac02,	// (0x00085500) list_medium_line_x2_t4_g4_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t4_g4_g2

0xac02,	// (0x00085500) list_medium_line_x2_t4_g4_g3_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t4_g4_g3

0xac02,	// (0x00085500) list_medium_line_x2_t4_g4_g4_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1bc,	// (0x00089aba) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1bc,	// (0x00089aba) list_medium_line_x2_t4_g4_g

0xac52,	// (0x00085550) list_medium_line_x2_t4_g4_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t4_g4_t1

0xac52,	// (0x00085550) list_medium_line_x2_t4_g4_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t4_g4_t2

0xac52,	// (0x00085550) list_medium_line_x2_t4_g4_t3_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t4_g4_t3

0xac52,	// (0x00085550) list_medium_line_x2_t4_g4_t4_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1c5,	// (0x00089ac3) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1c5,	// (0x00089ac3) list_medium_line_x2_t4_g4_t

0xac02,	// (0x00085500) list_medium_line_x2_t2_g4_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t2_g4_g1

0xac02,	// (0x00085500) list_medium_line_x2_t2_g4_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t2_g4_g2

0xac02,	// (0x00085500) list_medium_line_x2_t2_g4_g3_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t2_g4_g3

0xac02,	// (0x00085500) list_medium_line_x2_t2_g4_g4_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1bc,	// (0x00089aba) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1bc,	// (0x00089aba) list_medium_line_x2_t2_g4_g

0xac52,	// (0x00085550) list_medium_line_x2_t2_g4_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t2_g4_t1

0xac52,	// (0x00085550) list_medium_line_x2_t2_g4_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x00089a8f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x00089a8f) list_medium_line_x2_t2_g4_t

0xac02,	// (0x00085500) list_medium_line_x2_t2_g3_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t2_g3_g1

0xac02,	// (0x00085500) list_medium_line_x2_t2_g3_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t2_g3_g2

0xac02,	// (0x00085500) list_medium_line_x2_t2_g3_g3_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00089aac) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00089aac) list_medium_line_x2_t2_g3_g

0xac52,	// (0x00085550) list_medium_line_x2_t2_g3_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t2_g3_t1

0xac52,	// (0x00085550) list_medium_line_x2_t2_g3_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x00089a8f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x00089a8f) list_medium_line_x2_t2_g3_t

0x2cce,	// (0x0007d5cc) main_sp_fs_list_pane_ParamLimits

0x2cce,	// (0x0007d5cc) main_sp_fs_list_pane

0xeeb7,	// (0x000897b5) sp_fs_scroll_pane_ParamLimits

0xeeb7,	// (0x000897b5) sp_fs_scroll_pane

0xb468,	// (0x00085d66) list_medium_line_x2_t3_t1

0xb468,	// (0x00085d66) list_medium_line_x2_t3_t2

0xb468,	// (0x00085d66) list_medium_line_x2_t3_t3

0x0002,

0xf272,	// (0x00089b70) list_medium_line_x2_t3_t

0xb468,	// (0x00085d66) list_medium_line_x3_t4_t1

0xb468,	// (0x00085d66) list_medium_line_x3_t4_t2

0xb468,	// (0x00085d66) list_medium_line_x3_t4_t3

0xb468,	// (0x00085d66) list_medium_line_x3_t4_t4

0x0003,

0xf279,	// (0x00089b77) list_medium_line_x3_t4_t

0xb468,	// (0x00085d66) list_medium_line_x4_t5_t1

0xb468,	// (0x00085d66) list_medium_line_x4_t5_t2

0xb468,	// (0x00085d66) list_medium_line_x4_t5_t3

0xb468,	// (0x00085d66) list_medium_line_x4_t5_t4

0xb468,	// (0x00085d66) list_medium_line_x4_t5_t5

0x0004,

0xf282,	// (0x00089b80) list_medium_line_x4_t5_t

0xac02,	// (0x00085500) list_medium_line_t4_g4_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_t4_g4_g1

0xac02,	// (0x00085500) list_medium_line_t4_g4_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_t4_g4_g2

0xac02,	// (0x00085500) list_medium_line_t4_g4_g3_ParamLimits

0xac02,	// (0x00085500) list_medium_line_t4_g4_g3

0xac02,	// (0x00085500) list_medium_line_t4_g4_g4_ParamLimits

0xac02,	// (0x00085500) list_medium_line_t4_g4_g4

0x0003,

0xf1bc,	// (0x00089aba) list_medium_line_t4_g4_g_ParamLimits

0xf1bc,	// (0x00089aba) list_medium_line_t4_g4_g

0xac52,	// (0x00085550) list_medium_line_t4_g4_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t4_g4_t1

0xac52,	// (0x00085550) list_medium_line_t4_g4_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t4_g4_t2

0xac52,	// (0x00085550) list_medium_line_t4_g4_t3_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t4_g4_t3

0xac52,	// (0x00085550) list_medium_line_t4_g4_t4_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t4_g4_t4

0x0003,

0xf1c5,	// (0x00089ac3) list_medium_line_t4_g4_t_ParamLimits

0xf1c5,	// (0x00089ac3) list_medium_line_t4_g4_t

0x2d79,	// (0x0007d677) chi_dic_find_pane_g1

0x3ad8,	// (0x0007e3d6) main_tport_pane

0xb468,	// (0x00085d66) list_medium_line_plain_t1

0xac02,	// (0x00085500) list_medium_line_t2_g2_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_t2_g2_g1

0xac02,	// (0x00085500) list_medium_line_t2_g2_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_t2_g2_g2

0x0001,

0xf182,	// (0x00089a80) list_medium_line_t2_g2_g_ParamLimits

0xf182,	// (0x00089a80) list_medium_line_t2_g2_g

0xac52,	// (0x00085550) list_medium_line_t2_g2_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t2_g2_t1

0xac52,	// (0x00085550) list_medium_line_t2_g2_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x00089a8f) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x00089a8f) list_medium_line_t2_g2_t

0xdd9b,	// (0x00088699) aid_sp_fs_list_icon_a_sm

0xe9b5,	// (0x000892b3) aid_sp_fs_list_icon_d

0xdda3,	// (0x000886a1) aid_sp_fs_text_primary

0xed33,	// (0x00089631) aid_sp_fs_text_secondary

0x11a6,	// (0x0007baa4) list_medium_line

0x11a6,	// (0x0007baa4) list_medium_line_g2

0x11a6,	// (0x0007baa4) list_medium_line_g3

0x11a6,	// (0x0007baa4) list_medium_line_plain

0x11a6,	// (0x0007baa4) list_medium_line_plain_t2

0x11a6,	// (0x0007baa4) list_medium_line_plain_t3

0x11a6,	// (0x0007baa4) list_medium_line_right_icon

0x11a6,	// (0x0007baa4) list_medium_line_right_iconx2

0x11a6,	// (0x0007baa4) list_medium_line_t2

0x11a6,	// (0x0007baa4) list_medium_line_t2_g2

0x11a6,	// (0x0007baa4) list_medium_line_t2_g3

0x11a6,	// (0x0007baa4) list_medium_line_t2_right_icon

0x11a6,	// (0x0007baa4) list_medium_line_t2_right_iconx2

0x11a6,	// (0x0007baa4) list_medium_line_t3

0x11a6,	// (0x0007baa4) list_medium_line_t3_g2

0x11a6,	// (0x0007baa4) list_medium_line_t3_g3

0x11a6,	// (0x0007baa4) list_medium_line_t3_right_iconx2

0x11a6,	// (0x0007baa4) list_medium_line_t4_g4

0x11a6,	// (0x0007baa4) list_medium_line_x2

0x11a6,	// (0x0007baa4) list_medium_line_x2_t2_g2

0x11a6,	// (0x0007baa4) list_medium_line_x2_t2_g3

0x11a6,	// (0x0007baa4) list_medium_line_x2_t2_g4

0x11a6,	// (0x0007baa4) list_medium_line_x2_t3

0x11a6,	// (0x0007baa4) list_medium_line_x2_t3_g2

0x11a6,	// (0x0007baa4) list_medium_line_x2_t3_g3

0x11a6,	// (0x0007baa4) list_medium_line_x2_t3_g4

0x11a6,	// (0x0007baa4) list_medium_line_x2_t4_g2

0x11a6,	// (0x0007baa4) list_medium_line_x2_t4_g4

0x11a6,	// (0x0007baa4) list_medium_line_x3

0x11a6,	// (0x0007baa4) list_medium_line_x3_t4

0x11a6,	// (0x0007baa4) list_medium_line_x3_t4_g4

0x11a6,	// (0x0007baa4) list_medium_line_x4_t4

0x11a6,	// (0x0007baa4) list_medium_line_x4_t4_g7

0x11a6,	// (0x0007baa4) list_medium_line_x4_t5

0x0ca9,	// (0x0007b5a7) list_single_fs_dyc_pane_ParamLimits

0x0ca9,	// (0x0007b5a7) list_single_fs_dyc_pane

0xac02,	// (0x00085500) list_medium_line_x4_t4_g7_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x4_t4_g7_g1

0xac02,	// (0x00085500) list_medium_line_x4_t4_g7_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x4_t4_g7_g2

0xac02,	// (0x00085500) list_medium_line_x4_t4_g7_g3_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x4_t4_g7_g3

0xac02,	// (0x00085500) list_medium_line_x4_t4_g7_g4_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x4_t4_g7_g4

0xac02,	// (0x00085500) list_medium_line_x4_t4_g7_g5_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x4_t4_g7_g5

0xac02,	// (0x00085500) list_medium_line_x4_t4_g7_g6_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x4_t4_g7_g6

0xac10,	// (0x0008550e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xac10,	// (0x0008550e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa91,	// (0x0008a38f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa91,	// (0x0008a38f) list_medium_line_x4_t4_g7_g

0xac52,	// (0x00085550) list_medium_line_x4_t4_g7_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x4_t4_g7_t1

0xac52,	// (0x00085550) list_medium_line_x4_t4_g7_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x4_t4_g7_t2

0xac52,	// (0x00085550) list_medium_line_x4_t4_g7_t3_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x4_t4_g7_t3

0xac66,	// (0x00085564) list_medium_line_x4_t4_g7_t4_ParamLimits

0xac66,	// (0x00085564) list_medium_line_x4_t4_g7_t4

0xac66,	// (0x00085564) list_medium_line_x4_t4_g7_t5_ParamLimits

0xac66,	// (0x00085564) list_medium_line_x4_t4_g7_t5

0x0004,

0xfaa0,	// (0x0008a39e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfaa0,	// (0x0008a39e) list_medium_line_x4_t4_g7_t

0x0cbd,	// (0x0007b5bb) list_single_dyc_row_pane_ParamLimits

0x0cbd,	// (0x0007b5bb) list_single_dyc_row_pane

0x773a,	// (0x00082038) call5_gesture_pane_ParamLimits

0x773a,	// (0x00082038) call5_gesture_pane

0x7790,	// (0x0008208e) call5_windows_pane_ParamLimits

0x7790,	// (0x0008208e) call5_windows_pane

0x787c,	// (0x0008217a) call5_swipe_1_pane_cp_ParamLimits

0x787c,	// (0x0008217a) call5_swipe_1_pane_cp

0x7888,	// (0x00082186) call5_swipe_2_pane_cp_ParamLimits

0x7888,	// (0x00082186) call5_swipe_2_pane_cp

0xaef5,	// (0x000857f3) call5_image_pane_cp

0x7894,	// (0x00082192) popup_call5_audio_first_window_cp_ParamLimits

0x7894,	// (0x00082192) popup_call5_audio_first_window_cp

0x78a2,	// (0x000821a0) call5_swipe_1_pane_g1_cp_ParamLimits

0x78a2,	// (0x000821a0) call5_swipe_1_pane_g1_cp

0x78af,	// (0x000821ad) call5_swipe_1_pane_g2_cp

0x78b7,	// (0x000821b5) call5_swipe_1_pane_t1_cp_ParamLimits

0x78b7,	// (0x000821b5) call5_swipe_1_pane_t1_cp

0x78a2,	// (0x000821a0) call5_swipe_2_pane_g1_cp_ParamLimits

0x78a2,	// (0x000821a0) call5_swipe_2_pane_g1_cp

0x78cc,	// (0x000821ca) call5_swipe_2_pane_g2_cp

0x78d4,	// (0x000821d2) call5_swipe_2_pane_t1_cp_ParamLimits

0x78d4,	// (0x000821d2) call5_swipe_2_pane_t1_cp

0xa52b,	// (0x00084e29) main_sp_fs_email_pane

0x78e9,	// (0x000821e7) main_sp_fs_listscroll_pane_te

0x78f2,	// (0x000821f0) popup_sp_fs_action_menu_pane_ParamLimits

0x78f2,	// (0x000821f0) popup_sp_fs_action_menu_pane

0xac48,	// (0x00085546) bg_sp_fs_ctrlbar_pane_g1

0x7934,	// (0x00082232) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x793d,	// (0x0008223b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcd68,	// (0x00087666) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xac48,	// (0x00085546) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb89,	// (0x0008a487) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcf08,	// (0x00087806) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcf08,	// (0x00087806) bg_sp_fs_ctrlbar_ddmenu_pane

0x7946,	// (0x00082244) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x7946,	// (0x00082244) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x7952,	// (0x00082250) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x7952,	// (0x00082250) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb92,	// (0x0008a490) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb92,	// (0x0008a490) main_sp_fs_ctrlbar_ddmenu_pane_g

0x795e,	// (0x0008225c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x795e,	// (0x0008225c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xac48,	// (0x00085546) list_medium_line_t2_right_icon_g1

0xb468,	// (0x00085d66) list_medium_line_t2_right_icon_t1

0xb468,	// (0x00085d66) list_medium_line_t2_right_icon_t2

0x0001,

0xfb97,	// (0x0008a495) list_medium_line_t2_right_icon_t

0xba86,	// (0x00086384) bg_sp_fs_ctrlbar_pane_ParamLimits

0xba86,	// (0x00086384) bg_sp_fs_ctrlbar_pane

0x79f8,	// (0x000822f6) main_sp_fs_ctrlbar_button_pane_cp01

0x7a02,	// (0x00082300) main_sp_fs_ctrlbar_ddmenu_pane

0x7a0c,	// (0x0008230a) main_sp_fs_ctrlbar_pane_g1

0x7a18,	// (0x00082316) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfb9c,	// (0x0008a49a) main_sp_fs_ctrlbar_pane_g

0x7a58,	// (0x00082356) main_sp_fs_ctrlbar_pane_t1

0x7a97,	// (0x00082395) main_sp_fs_ctrlbar_pane

0x7ad6,	// (0x000823d4) main_sp_fs_listscroll_pane_te_cp01

0x0d17,	// (0x0007b615) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0d17,	// (0x0007b615) popup_sp_fs_action_menu_pane_cp01

0xa52b,	// (0x00084e29) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa52b,	// (0x00084e29) bg_sp_fs_highlight_list_pane_cp01

0xde0d,	// (0x0008870b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xde0d,	// (0x0008870b) sp_fs_action_menu_list_gene_pane_g1

0x7b00,	// (0x000823fe) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x7b00,	// (0x000823fe) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbaa,	// (0x0008a4a8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbaa,	// (0x0008a4a8) sp_fs_action_menu_list_gene_pane_g

0xde1c,	// (0x0008871a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xde1c,	// (0x0008871a) sp_fs_action_menu_list_gene_pane_t1

0xde34,	// (0x00088732) sp_fs_action_menu_list_gene_pane_ParamLimits

0xde34,	// (0x00088732) sp_fs_action_menu_list_gene_pane

0x7b0d,	// (0x0008240b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x7b0d,	// (0x0008240b) popup_sp_fs_action_menu_bg_pane

0xde53,	// (0x00088751) sp_fs_action_menu_list_pane_ParamLimits

0xde53,	// (0x00088751) sp_fs_action_menu_list_pane

0x0d3c,	// (0x0007b63a) sp_fs_scroll_pane_cp01_ParamLimits

0x0d3c,	// (0x0007b63a) sp_fs_scroll_pane_cp01

0xb468,	// (0x00085d66) list_medium_line_plain_t2_t1

0xb468,	// (0x00085d66) list_medium_line_plain_t2_t2

0x0001,

0xfb97,	// (0x0008a495) list_medium_line_plain_t2_t

0xb468,	// (0x00085d66) list_medium_line_plain_t3_t1

0xb468,	// (0x00085d66) list_medium_line_plain_t3_t2

0xb468,	// (0x00085d66) list_medium_line_plain_t3_t3

0x0002,

0xf272,	// (0x00089b70) list_medium_line_plain_t3_t

0xac02,	// (0x00085500) list_medium_line_x2_t2_g2_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t2_g2_g1

0xac02,	// (0x00085500) list_medium_line_x2_t2_g2_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t2_g2_g2

0x0001,

0xf182,	// (0x00089a80) list_medium_line_x2_t2_g2_g_ParamLimits

0xf182,	// (0x00089a80) list_medium_line_x2_t2_g2_g

0xac52,	// (0x00085550) list_medium_line_x2_t2_g2_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t2_g2_t1

0xac52,	// (0x00085550) list_medium_line_x2_t2_g2_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x00089a8f) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x00089a8f) list_medium_line_x2_t2_g2_t

0xac02,	// (0x00085500) list_medium_line_x2_t4_g2_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t4_g2_g1

0xac02,	// (0x00085500) list_medium_line_x2_t4_g2_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t4_g2_g2

0x0001,

0xf182,	// (0x00089a80) list_medium_line_x2_t4_g2_g_ParamLimits

0xf182,	// (0x00089a80) list_medium_line_x2_t4_g2_g

0xac52,	// (0x00085550) list_medium_line_x2_t4_g2_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t4_g2_t1

0xac52,	// (0x00085550) list_medium_line_x2_t4_g2_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t4_g2_t2

0xac52,	// (0x00085550) list_medium_line_x2_t4_g2_t3_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t4_g2_t3

0xac52,	// (0x00085550) list_medium_line_x2_t4_g2_t4_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1c5,	// (0x00089ac3) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1c5,	// (0x00089ac3) list_medium_line_x2_t4_g2_t

0xac48,	// (0x00085546) list_medium_line_t3_right_iconx2_g1

0xac48,	// (0x00085546) list_medium_line_t3_right_iconx2_g2

0xac48,	// (0x00085546) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf38e,	// (0x00089c8c) list_medium_line_t3_right_iconx2_g

0xb468,	// (0x00085d66) list_medium_line_t3_right_iconx2_t1

0xb468,	// (0x00085d66) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfb97,	// (0x0008a495) list_medium_line_t3_right_iconx2_t

0xac02,	// (0x00085500) list_medium_line_x3_t4_g4_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x3_t4_g4_g1

0xac02,	// (0x00085500) list_medium_line_x3_t4_g4_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x3_t4_g4_g2

0xac02,	// (0x00085500) list_medium_line_x3_t4_g4_g3_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x3_t4_g4_g3

0xac02,	// (0x00085500) list_medium_line_x3_t4_g4_g4_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1bc,	// (0x00089aba) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1bc,	// (0x00089aba) list_medium_line_x3_t4_g4_g

0xac52,	// (0x00085550) list_medium_line_x3_t4_g4_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x3_t4_g4_t1

0xac52,	// (0x00085550) list_medium_line_x3_t4_g4_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x3_t4_g4_t2

0xac52,	// (0x00085550) list_medium_line_x3_t4_g4_t3_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x3_t4_g4_t3

0xac52,	// (0x00085550) list_medium_line_x3_t4_g4_t4_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1c5,	// (0x00089ac3) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1c5,	// (0x00089ac3) list_medium_line_x3_t4_g4_t

0x0d62,	// (0x0007b660) list_single_dyc_row_text_pane_t1_ParamLimits

0x0d62,	// (0x0007b660) list_single_dyc_row_text_pane_t1

0x0dab,	// (0x0007b6a9) list_single_dyc_row_text_pane_t2_ParamLimits

0x0dab,	// (0x0007b6a9) list_single_dyc_row_text_pane_t2

0xde73,	// (0x00088771) list_single_dyc_row_text_pane_t3_ParamLimits

0xde73,	// (0x00088771) list_single_dyc_row_text_pane_t3

0x0005,

0xfbaf,	// (0x0008a4ad) list_single_dyc_row_text_pane_t_ParamLimits

0xfbaf,	// (0x0008a4ad) list_single_dyc_row_text_pane_t

0xde97,	// (0x00088795) list_single_dyc_row_pane_g1_ParamLimits

0xde97,	// (0x00088795) list_single_dyc_row_pane_g1

0xdea3,	// (0x000887a1) list_single_dyc_row_pane_g2_ParamLimits

0xdea3,	// (0x000887a1) list_single_dyc_row_pane_g2

0xdeaf,	// (0x000887ad) list_single_dyc_row_pane_g3_ParamLimits

0xdeaf,	// (0x000887ad) list_single_dyc_row_pane_g3

0xdebb,	// (0x000887b9) list_single_dyc_row_pane_g4_ParamLimits

0xdebb,	// (0x000887b9) list_single_dyc_row_pane_g4

0x0003,

0xfbbc,	// (0x0008a4ba) list_single_dyc_row_pane_g_ParamLimits

0xfbbc,	// (0x0008a4ba) list_single_dyc_row_pane_g

0xdec7,	// (0x000887c5) list_single_dyc_row_text_pane_ParamLimits

0xdec7,	// (0x000887c5) list_single_dyc_row_text_pane

0x11a6,	// (0x0007baa4) bg_sp_fs_scroll_pane

0x7b1b,	// (0x00082419) thumb_sp_fs_scroll_pane

0xac02,	// (0x00085500) list_medium_line_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_g1

0xac52,	// (0x00085550) list_medium_line_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t1

0xac02,	// (0x00085500) list_medium_line_x2_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_g1

0xac02,	// (0x00085500) list_medium_line_x2_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_g2

0x0001,

0xf182,	// (0x00089a80) list_medium_line_x2_g_ParamLimits

0xf182,	// (0x00089a80) list_medium_line_x2_g

0xac52,	// (0x00085550) list_medium_line_x2_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t1

0xac02,	// (0x00085500) list_medium_line_x3_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x3_g1

0x7b24,	// (0x00082422) list_medium_line_x3_g2_ParamLimits

0x7b24,	// (0x00082422) list_medium_line_x3_g2

0x0001,

0xfbc5,	// (0x0008a4c3) list_medium_line_x3_g_ParamLimits

0xfbc5,	// (0x0008a4c3) list_medium_line_x3_g

0x7b32,	// (0x00082430) list_medium_line_x3_t1_ParamLimits

0x7b32,	// (0x00082430) list_medium_line_x3_t1

0x7b46,	// (0x00082444) thumb_sp_fs_scroll_pane_g1

0x7b4f,	// (0x0008244d) thumb_sp_fs_scroll_pane_g2

0x7b58,	// (0x00082456) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbca,	// (0x0008a4c8) thumb_sp_fs_scroll_pane_g

0x7b46,	// (0x00082444) bg_sp_fs_scroll_pane_g1

0x7b4f,	// (0x0008244d) bg_sp_fs_scroll_pane_g2

0x7b58,	// (0x00082456) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbca,	// (0x0008a4c8) bg_sp_fs_scroll_pane_g

0xac02,	// (0x00085500) list_medium_line_x2_t3_g4_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t3_g4_g1

0xac02,	// (0x00085500) list_medium_line_x2_t3_g4_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t3_g4_g2

0xac02,	// (0x00085500) list_medium_line_x2_t3_g4_g3_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t3_g4_g3

0xac02,	// (0x00085500) list_medium_line_x2_t3_g4_g4_ParamLimits

0xac02,	// (0x00085500) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1bc,	// (0x00089aba) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1bc,	// (0x00089aba) list_medium_line_x2_t3_g4_g

0xac52,	// (0x00085550) list_medium_line_x2_t3_g4_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t3_g4_t1

0xac52,	// (0x00085550) list_medium_line_x2_t3_g4_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t3_g4_t2

0xac52,	// (0x00085550) list_medium_line_x2_t3_g4_t3_ParamLimits

0xac52,	// (0x00085550) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x00089ab3) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x00089ab3) list_medium_line_x2_t3_g4_t

0xac02,	// (0x00085500) list_medium_line_g2_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_g2_g1

0xac02,	// (0x00085500) list_medium_line_g2_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_g2_g2

0x0001,

0xf182,	// (0x00089a80) list_medium_line_g2_g_ParamLimits

0xf182,	// (0x00089a80) list_medium_line_g2_g

0xac52,	// (0x00085550) list_medium_line_g2_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_g2_t1

0xac02,	// (0x00085500) list_medium_line_t3_g2_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_t3_g2_g1

0xac02,	// (0x00085500) list_medium_line_t3_g2_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_t3_g2_g2

0x0001,

0xf182,	// (0x00089a80) list_medium_line_t3_g2_g_ParamLimits

0xf182,	// (0x00089a80) list_medium_line_t3_g2_g

0xac52,	// (0x00085550) list_medium_line_t3_g2_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t3_g2_t1

0xac52,	// (0x00085550) list_medium_line_t3_g2_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t3_g2_t2

0xac52,	// (0x00085550) list_medium_line_t3_g2_t3_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x00089ab3) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x00089ab3) list_medium_line_t3_g2_t

0xac48,	// (0x00085546) list_medium_line_right_icon_g1

0xb468,	// (0x00085d66) list_medium_line_right_icon_t1

0xac02,	// (0x00085500) list_medium_line_t2_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_t2_g1

0xac52,	// (0x00085550) list_medium_line_t2_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t2_t1

0xac52,	// (0x00085550) list_medium_line_t2_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x00089a8f) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x00089a8f) list_medium_line_t2_t

0xac02,	// (0x00085500) list_medium_line_t3_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_t3_g1

0xac52,	// (0x00085550) list_medium_line_t3_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t3_t1

0xac52,	// (0x00085550) list_medium_line_t3_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t3_t2

0xac52,	// (0x00085550) list_medium_line_t3_t3_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x00089ab3) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x00089ab3) list_medium_line_t3_t

0xac02,	// (0x00085500) list_medium_line_g3_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_g3_g1

0xac02,	// (0x00085500) list_medium_line_g3_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_g3_g2

0xac02,	// (0x00085500) list_medium_line_g3_g3_ParamLimits

0xac02,	// (0x00085500) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00089aac) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00089aac) list_medium_line_g3_g

0xac52,	// (0x00085550) list_medium_line_g3_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_g3_t1

0xac02,	// (0x00085500) list_medium_line_t2_g3_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_t2_g3_g1

0xac02,	// (0x00085500) list_medium_line_t2_g3_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_t2_g3_g2

0xac02,	// (0x00085500) list_medium_line_t2_g3_g3_ParamLimits

0xac02,	// (0x00085500) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00089aac) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00089aac) list_medium_line_t2_g3_g

0xac52,	// (0x00085550) list_medium_line_t2_g3_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t2_g3_t1

0xac52,	// (0x00085550) list_medium_line_t2_g3_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x00089a8f) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x00089a8f) list_medium_line_t2_g3_t

0xac02,	// (0x00085500) list_medium_line_t3_g3_g1_ParamLimits

0xac02,	// (0x00085500) list_medium_line_t3_g3_g1

0xac02,	// (0x00085500) list_medium_line_t3_g3_g2_ParamLimits

0xac02,	// (0x00085500) list_medium_line_t3_g3_g2

0xac02,	// (0x00085500) list_medium_line_t3_g3_g3_ParamLimits

0xac02,	// (0x00085500) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00089aac) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00089aac) list_medium_line_t3_g3_g

0xac52,	// (0x00085550) list_medium_line_t3_g3_t1_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t3_g3_t1

0xac52,	// (0x00085550) list_medium_line_t3_g3_t2_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t3_g3_t2

0xac52,	// (0x00085550) list_medium_line_t3_g3_t3_ParamLimits

0xac52,	// (0x00085550) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x00089ab3) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x00089ab3) list_medium_line_t3_g3_t

0xac48,	// (0x00085546) list_medium_line_right_iconx2_g1

0xac48,	// (0x00085546) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x000899ad) list_medium_line_right_iconx2_g

0xb468,	// (0x00085d66) list_medium_line_right_iconx2_t1

0xac48,	// (0x00085546) list_medium_line_t2_right_iconx2_g1

0xac48,	// (0x00085546) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x000899ad) list_medium_line_t2_right_iconx2_g

0xb468,	// (0x00085d66) list_medium_line_t2_right_iconx2_t1

0xb468,	// (0x00085d66) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb97,	// (0x0008a495) list_medium_line_t2_right_iconx2_t

0xb468,	// (0x00085d66) list_medium_line_x4_t4_t1

0xb468,	// (0x00085d66) list_medium_line_x4_t4_t2

0xb468,	// (0x00085d66) list_medium_line_x4_t4_t3

0xb468,	// (0x00085d66) list_medium_line_x4_t4_t4

0x0003,

0xf279,	// (0x00089b77) list_medium_line_x4_t4_t

0x7ba4,	// (0x000824a2) tport_appsw_pane_ParamLimits

0x7ba4,	// (0x000824a2) tport_appsw_pane

0x7bbc,	// (0x000824ba) tport_contact_pane_ParamLimits

0x7bbc,	// (0x000824ba) tport_contact_pane

0x7bd4,	// (0x000824d2) tport_listscroll_pane_ParamLimits

0x7bd4,	// (0x000824d2) tport_listscroll_pane

0x7bee,	// (0x000824ec) cell_tport_appsw_pane_ParamLimits

0x7bee,	// (0x000824ec) cell_tport_appsw_pane

0xba64,	// (0x00086362) tport_appsw_pane_g1_ParamLimits

0xba64,	// (0x00086362) tport_appsw_pane_g1

0x7c2e,	// (0x0008252c) tport_contact_pane_g1

0x7c37,	// (0x00082535) tport_contact_pane_t1

0x7c45,	// (0x00082543) tport_contact_pane_t2

0x0001,

0xfbd1,	// (0x0008a4cf) tport_contact_pane_t

0x7c53,	// (0x00082551) list_tport_pane

0x7c5c,	// (0x0008255a) scroll_pane_cp_030

0x7c6d,	// (0x0008256b) cell_tport_appsw_pane_g1

0x7c7d,	// (0x0008257b) cell_tport_appsw_pane_t1

0x7c8b,	// (0x00082589) grid_highlight_pane_cp019

0x7c93,	// (0x00082591) list_tport_double_graphic_pane_ParamLimits

0x7c93,	// (0x00082591) list_tport_double_graphic_pane

0xa52b,	// (0x00084e29) list_highlight_pane_cp023_ParamLimits

0xa52b,	// (0x00084e29) list_highlight_pane_cp023

0x7ca0,	// (0x0008259e) list_tport_double_graphic_pane_g1_ParamLimits

0x7ca0,	// (0x0008259e) list_tport_double_graphic_pane_g1

0x7cad,	// (0x000825ab) list_tport_double_graphic_pane_t1_ParamLimits

0x7cad,	// (0x000825ab) list_tport_double_graphic_pane_t1

0x7cc2,	// (0x000825c0) list_tport_double_graphic_pane_t2_ParamLimits

0x7cc2,	// (0x000825c0) list_tport_double_graphic_pane_t2

0x0001,

0xfbdd,	// (0x0008a4db) list_tport_double_graphic_pane_t_ParamLimits

0xfbdd,	// (0x0008a4db) list_tport_double_graphic_pane_t

0x11a6,	// (0x0007baa4) main_cale_note_pane

0x578b,	// (0x00080089) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x578b,	// (0x00080089) cell_vitu2_function_top_wide_pane_cp01

0x73a8,	// (0x00081ca6) wait_bar_pane_cp05_ParamLimits

0xa52b,	// (0x00084e29) listscroll_cmail_pane

0x7cdc,	// (0x000825da) list_cmail_pane

0x7cf3,	// (0x000825f1) list_cmail_body_pane

0x7d09,	// (0x00082607) list_single_cmail_header_caption_pane

0x7d20,	// (0x0008261e) list_single_cmail_header_detail_pane_ParamLimits

0x7d20,	// (0x0008261e) list_single_cmail_header_detail_pane

0x7d4e,	// (0x0008264c) list_single_cmail_header_caption_pane_t1

0x0ee0,	// (0x0007b7de) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0ee0,	// (0x0007b7de) list_single_cmail_header_detail_pane_g1

0xe9d3,	// (0x000892d1) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe9d3,	// (0x000892d1) list_single_cmail_header_detail_pane_g2

0x0002,

0xfbe2,	// (0x0008a4e0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfbe2,	// (0x0008a4e0) list_single_cmail_header_detail_pane_g

0x0ef8,	// (0x0007b7f6) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0ef8,	// (0x0007b7f6) list_single_cmail_header_detail_pane_t1

0x0f36,	// (0x0007b834) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0f36,	// (0x0007b834) list_single_cmail_header_editor_pane_bg

0x7214,	// (0x00081b12) list_cmail_body_pane_g1

0x7d72,	// (0x00082670) list_cmail_body_pane_t1

0xe74d,	// (0x0008904b) list_single_cmail_header_editor_pane_bg_g1

0xb118,	// (0x00085a16) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe75d,	// (0x0008905b) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe755,	// (0x00089053) list_single_cmail_header_editor_pane_bg_g1_copy3

0xeabb,	// (0x000893b9) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe77d,	// (0x0008907b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe76d,	// (0x0008906b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe775,	// (0x00089073) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb0f8,	// (0x000859f6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7d80,	// (0x0008267e) calenote_gesture_pane_ParamLimits

0x7d80,	// (0x0008267e) calenote_gesture_pane

0x7da0,	// (0x0008269e) calenote_window_pane_ParamLimits

0x7da0,	// (0x0008269e) calenote_window_pane

0x7dbc,	// (0x000826ba) popup_note_window_cp01

0x7dc5,	// (0x000826c3) calenote_swipe_1_pane_ParamLimits

0x7dc5,	// (0x000826c3) calenote_swipe_1_pane

0x7888,	// (0x00082186) calenote_swipe_2_pane_ParamLimits

0x7888,	// (0x00082186) calenote_swipe_2_pane

0x78a2,	// (0x000821a0) calenote_swipe_1_pane_g1_ParamLimits

0x78a2,	// (0x000821a0) calenote_swipe_1_pane_g1

0x7de3,	// (0x000826e1) calenote_swipe_1_pane_g2_ParamLimits

0x7de3,	// (0x000826e1) calenote_swipe_1_pane_g2

0x0001,

0xfbee,	// (0x0008a4ec) calenote_swipe_1_pane_g_ParamLimits

0xfbee,	// (0x0008a4ec) calenote_swipe_1_pane_g

0x7def,	// (0x000826ed) calenote_swipe_1_pane_t1_ParamLimits

0x7def,	// (0x000826ed) calenote_swipe_1_pane_t1

0x78a2,	// (0x000821a0) calenote_swipe_2_pane_g1_ParamLimits

0x78a2,	// (0x000821a0) calenote_swipe_2_pane_g1

0x7e0e,	// (0x0008270c) calenote_swipe_2_pane_g2_ParamLimits

0x7e0e,	// (0x0008270c) calenote_swipe_2_pane_g2

0x0001,

0xfbf3,	// (0x0008a4f1) calenote_swipe_2_pane_g_ParamLimits

0xfbf3,	// (0x0008a4f1) calenote_swipe_2_pane_g

0x7e1a,	// (0x00082718) calenote_swipe_2_pane_t1_ParamLimits

0x7e1a,	// (0x00082718) calenote_swipe_2_pane_t1

0x11a6,	// (0x0007baa4) main_mup_navstr_pane

0x46d8,	// (0x0007efd6) main_mup3_pane_t7_ParamLimits

0x46d8,	// (0x0007efd6) main_mup3_pane_t7

0xdab8,	// (0x000883b6) main_mp4_pane_g6_ParamLimits

0xdab8,	// (0x000883b6) main_mp4_pane_g6

0xe5c1,	// (0x00088ebf) main_image3_pane_t4_ParamLimits

0xe5c1,	// (0x00088ebf) main_image3_pane_t4

0x7e41,	// (0x0008273f) popup_navstr_preview_pane_ParamLimits

0x7e41,	// (0x0008273f) popup_navstr_preview_pane

0x7e55,	// (0x00082753) scroll_navstr_pane_ParamLimits

0x7e55,	// (0x00082753) scroll_navstr_pane

0x11a6,	// (0x0007baa4) bg_popup_preview_window_pane_cp04

0x7e69,	// (0x00082767) popup_navstr_preview_pane_t1

0x7e77,	// (0x00082775) scroll_navstr_pane_g1_ParamLimits

0x7e77,	// (0x00082775) scroll_navstr_pane_g1

0x7e8b,	// (0x00082789) scroll_navstr_pane_t1_ParamLimits

0x7e8b,	// (0x00082789) scroll_navstr_pane_t1

0x7dda,	// (0x000826d8) bg_button_pane_cp014

0x7dda,	// (0x000826d8) bg_button_pane_cp030

0xddf0,	// (0x000886ee) list_double_fisheye_pane_g4_ParamLimits

0xddf0,	// (0x000886ee) list_double_fisheye_pane_g4

0xddfc,	// (0x000886fa) list_double_fisheye_pane_g5_ParamLimits

0xddfc,	// (0x000886fa) list_double_fisheye_pane_g5

0xeeb7,	// (0x000897b5) sp_fs_scroll_pane_cp03

0x7a0c,	// (0x0008230a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x7a18,	// (0x00082316) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb9c,	// (0x0008a49a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7a58,	// (0x00082356) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x7ceb,	// (0x000825e9) sp_fs_scroll_pane_cp02

0xae3d,	// (0x0008573b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xae3d,	// (0x0008573b) popup_sp_fs_calendar_preview_list_single_pane

0x11a6,	// (0x0007baa4) main_cam6_pano_pane

0xa52b,	// (0x00084e29) main_mup3_pane_ParamLimits

0x11a6,	// (0x0007baa4) main_phacti_pane

0x727b,	// (0x00081b79) bg_button_pane_cp11

0x7295,	// (0x00081b93) main_mobtv_info_pane_g2_ParamLimits

0x7295,	// (0x00081b93) main_mobtv_info_pane_g2

0x0001,

0xfb01,	// (0x0008a3ff) main_mobtv_info_pane_g_ParamLimits

0xfb01,	// (0x0008a3ff) main_mobtv_info_pane_g

0xac52,	// (0x00085550) sc_clock_pane_t5_ParamLimits

0xac52,	// (0x00085550) sc_clock_pane_t5

0xba64,	// (0x00086362) main_radioblah_pane_g1_ParamLimits

0xba72,	// (0x00086370) main_radioblah_pane_t3_ParamLimits

0xba72,	// (0x00086370) main_radioblah_pane_t3

0xba72,	// (0x00086370) main_radioblah_pane_t4_ParamLimits

0xba72,	// (0x00086370) main_radioblah_pane_t4

0xa52b,	// (0x00084e29) main_radioblah_text_pane_ParamLimits

0xa52b,	// (0x00084e29) main_radioblah_text_pane

0x7675,	// (0x00081f73) main_radioblah_info_pane_g1_ParamLimits

0x76b9,	// (0x00081fb7) main_radioblah_info_pane_t4_ParamLimits

0x76b9,	// (0x00081fb7) main_radioblah_info_pane_t4

0xa52b,	// (0x00084e29) main_sp_fs_calendar_pane

0x7ea2,	// (0x000827a0) main_phacti_pane_g1

0x7eb3,	// (0x000827b1) phacti_note_pane_ParamLimits

0x7eb3,	// (0x000827b1) phacti_note_pane

0x7ec7,	// (0x000827c5) phacti_term_pane_ParamLimits

0x7ec7,	// (0x000827c5) phacti_term_pane

0x7edc,	// (0x000827da) phacti_note_pane_t1_ParamLimits

0x7edc,	// (0x000827da) phacti_note_pane_t1

0xdf0a,	// (0x00088808) phacti_term_pane_g1

0xdf12,	// (0x00088810) phacti_term_pane_t1_ParamLimits

0xdf12,	// (0x00088810) phacti_term_pane_t1

0x7ef3,	// (0x000827f1) popup_sp_fs_calendar_preview_list_single_pane_g1

0x7efb,	// (0x000827f9) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfbfd,	// (0x0008a4fb) popup_sp_fs_calendar_preview_list_single_pane_g

0x7f03,	// (0x00082801) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x7f03,	// (0x00082801) popup_sp_fs_calendar_preview_list_single_pane_t1

0x7f19,	// (0x00082817) aid_popup_sp_fs_bg_corner_pane

0xac48,	// (0x00085546) popup_sp_fs_calendar_preview_bg_pane_g1

0x11a6,	// (0x0007baa4) popup_sp_fs_calendar_preview_bg_pane

0x7f21,	// (0x0008281f) popup_sp_fs_calendar_preview_list_pane

0xba86,	// (0x00086384) bg_main_sp_fs_cale_pane_ParamLimits

0xba86,	// (0x00086384) bg_main_sp_fs_cale_pane

0xdf45,	// (0x00088843) listscroll_cale_mrui_pane_ParamLimits

0xdf45,	// (0x00088843) listscroll_cale_mrui_pane

0xdf5a,	// (0x00088858) listscroll_sp_fs_schedule_track_pane

0xdf63,	// (0x00088861) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdf63,	// (0x00088861) main_sp_fs_ctrlbar_pane_cp01

0x7f8a,	// (0x00082888) main_sp_fs_ribbon_pane

0xdf76,	// (0x00088874) popup_sp_fs_cale_preview_window

0x7f92,	// (0x00082890) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7f92,	// (0x00082890) list_single_sp_fs_schedule_track_pane

0xa52b,	// (0x00084e29) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa52b,	// (0x00084e29) bg_sp_fs_highlight_list_pane_cp03

0x7fa6,	// (0x000828a4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7fa6,	// (0x000828a4) list_single_sp_fs_schedule_track_pane_g1

0x7fb2,	// (0x000828b0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7fb2,	// (0x000828b0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc02,	// (0x0008a500) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc02,	// (0x0008a500) list_single_sp_fs_schedule_track_pane_g

0x7fbe,	// (0x000828bc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7fbe,	// (0x000828bc) list_single_sp_fs_schedule_track_pane_t1

0x7fd8,	// (0x000828d6) sp_fs_schedule_track_pane_ParamLimits

0x7fd8,	// (0x000828d6) sp_fs_schedule_track_pane

0x7fe9,	// (0x000828e7) sp_fs_schedule_track_pane_g1

0x7ff1,	// (0x000828ef) sp_fs_schedule_track_pane_g2

0x7ff9,	// (0x000828f7) sp_fs_schedule_track_pane_g3

0x8001,	// (0x000828ff) sp_fs_schedule_track_pane_g4

0x8009,	// (0x00082907) sp_fs_schedule_track_pane_g5

0x0004,

0xfc07,	// (0x0008a505) sp_fs_schedule_track_pane_g

0xe74d,	// (0x0008904b) bg_sp_fs_schedule_viewer_highlight_g1

0xb118,	// (0x00085a16) bg_sp_fs_schedule_viewer_highlight_g2

0xe755,	// (0x00089053) bg_sp_fs_schedule_viewer_highlight_g3

0xe75d,	// (0x0008905b) bg_sp_fs_schedule_viewer_highlight_g4

0xeabb,	// (0x000893b9) bg_sp_fs_schedule_viewer_highlight_g5

0xe76d,	// (0x0008906b) bg_sp_fs_schedule_viewer_highlight_g6

0xe775,	// (0x00089073) bg_sp_fs_schedule_viewer_highlight_g7

0xe77d,	// (0x0008907b) bg_sp_fs_schedule_viewer_highlight_g8

0xb0f8,	// (0x000859f6) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc12,	// (0x0008a510) bg_sp_fs_schedule_viewer_highlight_g

0x11a6,	// (0x0007baa4) bg_main_sp_fs_ribbon_pane

0x8011,	// (0x0008290f) main_sp_fs_ribbon_pane_g1

0x801a,	// (0x00082918) main_sp_fs_ribbon_pane_t1

0x8029,	// (0x00082927) main_sp_fs_ribbon_pane_t2

0x8038,	// (0x00082936) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc25,	// (0x0008a523) main_sp_fs_ribbon_pane_t

0x8047,	// (0x00082945) main_sp_fs_ribbon_scheduler_pane

0x804f,	// (0x0008294d) bg_main_sp_fs_ribbon_pane_g1

0x8058,	// (0x00082956) bg_main_sp_fs_ribbon_pane_g2

0x8061,	// (0x0008295f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc2c,	// (0x0008a52a) bg_main_sp_fs_ribbon_pane_g

0x8069,	// (0x00082967) main_sp_fs_ribbon_scheduler_pane_g1

0x8072,	// (0x00082970) main_sp_fs_ribbon_scheduler_pane_g2

0x807b,	// (0x00082979) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc33,	// (0x0008a531) main_sp_fs_ribbon_scheduler_pane_g

0x8084,	// (0x00082982) list_cale_mrui_pane

0x8091,	// (0x0008298f) sp_fs_scroll_pane_cp07_ParamLimits

0x8091,	// (0x0008298f) sp_fs_scroll_pane_cp07

0x80ad,	// (0x000829ab) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x80ad,	// (0x000829ab) bg_sp_fs_schedule_viewer_highlight

0x80bd,	// (0x000829bb) list_single_sp_fs_schedule_track_pane_cp01

0x80c5,	// (0x000829c3) list_sp_fs_schedule_track_pane

0x80cd,	// (0x000829cb) sp_fs_scroll_pane_cp06_ParamLimits

0x80cd,	// (0x000829cb) sp_fs_scroll_pane_cp06

0xac48,	// (0x00085546) bgmain_sp_fs_calendar_pane_g1

0x0f4f,	// (0x0007b84d) list_single_cale_mrui_pane_ParamLimits

0x0f4f,	// (0x0007b84d) list_single_cale_mrui_pane

0xdf88,	// (0x00088886) list_single_cale_mrui_row_pane_ParamLimits

0xdf88,	// (0x00088886) list_single_cale_mrui_row_pane

0xdf95,	// (0x00088893) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdf95,	// (0x00088893) list_single_cale_mrui_row_pane_g1

0xdfcd,	// (0x000888cb) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdfcd,	// (0x000888cb) list_single_cale_mrui_row_pane_t1

0x0f70,	// (0x0007b86e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0f70,	// (0x0007b86e) list_single_cale_mrui_row_pane_t2

0xdfdf,	// (0x000888dd) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdfdf,	// (0x000888dd) list_single_cale_mrui_row_pane_t3

0xe00e,	// (0x0008890c) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe00e,	// (0x0008890c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc41,	// (0x0008a53f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc41,	// (0x0008a53f) list_single_cale_mrui_row_pane_t

0x0fd8,	// (0x0007b8d6) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0fd8,	// (0x0007b8d6) list_single_cmail_header_editor_pane_bg_cp01

0x1006,	// (0x0007b904) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1006,	// (0x0007b904) list_single_cmail_header_editor_pane_bg_cp02

0x80ec,	// (0x000829ea) main_radioblah_text_pane_t1_ParamLimits

0x80ec,	// (0x000829ea) main_radioblah_text_pane_t1

0x8106,	// (0x00082a04) cam6_indi_pane_cp01

0x810e,	// (0x00082a0c) cam6_mode_pane_cp01

0x8116,	// (0x00082a14) cam6_pano_pane

0x811f,	// (0x00082a1d) cam6_zoom_pane_cp01

0x8127,	// (0x00082a25) cam6_pano_image_pane

0x8132,	// (0x00082a30) cam6_pano_pane_g1

0x7214,	// (0x00081b12) cam6_pano_pane_g2

0x813b,	// (0x00082a39) cam6_pano_pane_g3

0x8144,	// (0x00082a42) cam6_pano_pane_g4

0xd84c,	// (0x0008814a) cam6_pano_pane_g5

0x814d,	// (0x00082a4b) cam6_pano_pane_g6

0x8157,	// (0x00082a55) cam6_pano_pane_g7

0x815f,	// (0x00082a5d) cam6_pano_pane_g8

0x8168,	// (0x00082a66) cam6_pano_pane_g9

0x0008,

0xfc4a,	// (0x0008a548) cam6_pano_pane_g

0x11a6,	// (0x0007baa4) main_browser_tag_pane

0x7e39,	// (0x00082737) grid_navstr_albumart_pane

0x8173,	// (0x00082a71) cell_navstr_albumart_pane_ParamLimits

0x8173,	// (0x00082a71) cell_navstr_albumart_pane

0x8193,	// (0x00082a91) cell_navstr_albumart_pane_g1

0xcbef,	// (0x000874ed) cell_navstr_albumart_pane_g2

0xcbff,	// (0x000874fd) cell_navstr_albumart_pane_g3

0xcbf7,	// (0x000874f5) cell_navstr_albumart_pane_g4

0x0003,

0xfc5d,	// (0x0008a55b) cell_navstr_albumart_pane_g

0x819b,	// (0x00082a99) bt_list_pane_ParamLimits

0x819b,	// (0x00082a99) bt_list_pane

0x81af,	// (0x00082aad) bt_list_pane_t1

0x81be,	// (0x00082abc) bt_list_pane_t2

0x0001,

0xfc66,	// (0x0008a564) bt_list_pane_t

0x11a6,	// (0x0007baa4) main_cale_prevew_pane

0x81cd,	// (0x00082acb) popup_cale_preview_window_ParamLimits

0x81cd,	// (0x00082acb) popup_cale_preview_window

0xa52b,	// (0x00084e29) bg_popup_preview_window_pane_cp05_ParamLimits

0xa52b,	// (0x00084e29) bg_popup_preview_window_pane_cp05

0x81e6,	// (0x00082ae4) list_cale_preview_pane_ParamLimits

0x81e6,	// (0x00082ae4) list_cale_preview_pane

0x81f2,	// (0x00082af0) list_double_cale_preview_pane_ParamLimits

0x81f2,	// (0x00082af0) list_double_cale_preview_pane

0xe785,	// (0x00089083) list_single_cale_preview_pane_ParamLimits

0xe785,	// (0x00089083) list_single_cale_preview_pane

0x8204,	// (0x00082b02) list_single_cale_preview_pane_g1

0x820c,	// (0x00082b0a) list_single_cale_preview_pane_t1_ParamLimits

0x820c,	// (0x00082b0a) list_single_cale_preview_pane_t1

0x8221,	// (0x00082b1f) list_double_cale_preview_pane_g1

0x8229,	// (0x00082b27) list_double_cale_preview_pane_t1_ParamLimits

0x8229,	// (0x00082b27) list_double_cale_preview_pane_t1

0x823e,	// (0x00082b3c) list_double_cale_preview_pane_t2_ParamLimits

0x823e,	// (0x00082b3c) list_double_cale_preview_pane_t2

0x0001,

0xfc6b,	// (0x0008a569) list_double_cale_preview_pane_t_ParamLimits

0xfc6b,	// (0x0008a569) list_double_cale_preview_pane_t

0x11a6,	// (0x0007baa4) main_ezdial_pane

0xa52b,	// (0x00084e29) main_sp_fs_email_pane_ParamLimits

0x7978,	// (0x00082276) cmail_ddmenu_btn01_pane_ParamLimits

0x7978,	// (0x00082276) cmail_ddmenu_btn01_pane

0x798b,	// (0x00082289) cmail_ddmenu_btn02_pane_ParamLimits

0x798b,	// (0x00082289) cmail_ddmenu_btn02_pane

0x79e6,	// (0x000822e4) cmail_ddmenu_btn03_pane_ParamLimits

0x79e6,	// (0x000822e4) cmail_ddmenu_btn03_pane

0x7a97,	// (0x00082395) main_sp_fs_ctrlbar_pane_ParamLimits

0x7ad6,	// (0x000823d4) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7cf3,	// (0x000825f1) list_cmail_body_pane_ParamLimits

0x7d5c,	// (0x0008265a) bg_button_pane_cp12

0x7d65,	// (0x00082663) list_single_cmail_header_detail_pane_g3_ParamLimits

0x7d65,	// (0x00082663) list_single_cmail_header_detail_pane_g3

0xdee6,	// (0x000887e4) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdee6,	// (0x000887e4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfbe9,	// (0x0008a4e7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfbe9,	// (0x0008a4e7) list_single_cmail_header_detail_pane_t

0xdf27,	// (0x00088825) phacti_term_pane_t2_ParamLimits

0xdf27,	// (0x00088825) phacti_term_pane_t2

0x0001,

0xfbf8,	// (0x0008a4f6) phacti_term_pane_t_ParamLimits

0xfbf8,	// (0x0008a4f6) phacti_term_pane_t

0x8256,	// (0x00082b54) aid_size_list_single_double

0x8262,	// (0x00082b60) popup_ezdial_listscroll_window

0x8279,	// (0x00082b77) popup_number_entry_window_cp01

0xaef5,	// (0x000857f3) bg_popup_call_pane_cp09

0x8286,	// (0x00082b84) ezdial_list_pane

0x828e,	// (0x00082b8c) scroll_pane_cp23

0xba86,	// (0x00086384) bg_button_pane_cp028_ParamLimits

0xba86,	// (0x00086384) bg_button_pane_cp028

0x8296,	// (0x00082b94) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8296,	// (0x00082b94) cmail_ddmenu_btn01_pane_g1

0x82a2,	// (0x00082ba0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x82a2,	// (0x00082ba0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc70,	// (0x0008a56e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc70,	// (0x0008a56e) cmail_ddmenu_btn01_pane_g

0x82ae,	// (0x00082bac) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x82ae,	// (0x00082bac) cmail_ddmenu_btn01_pane_t1

0xba86,	// (0x00086384) bg_button_pane_cp029_ParamLimits

0xba86,	// (0x00086384) bg_button_pane_cp029

0x82c3,	// (0x00082bc1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x82c3,	// (0x00082bc1) cmail_ddmenu_btn02_pane_g1

0x82db,	// (0x00082bd9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x82db,	// (0x00082bd9) cmail_ddmenu_btn02_pane_t1

0xa52b,	// (0x00084e29) bg_button_pane_cp031_ParamLimits

0xa52b,	// (0x00084e29) bg_button_pane_cp031

0x82c3,	// (0x00082bc1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x82c3,	// (0x00082bc1) cmail_ddmenu_btn03_pane_g1

0x82db,	// (0x00082bd9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x82db,	// (0x00082bd9) cmail_ddmenu_btn03_pane_t1

0xac52,	// (0x00085550) cell_dialer2_keypad_pane_t1_ParamLimits

0xd87a,	// (0x00088178) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xd87a,	// (0x00088178) cell_dialer2_keypad_pane_t1_copy1

0x6e25,	// (0x00081723) ncimui_group_button_pane

0xa52b,	// (0x00084e29) main_sp_fs_calendar_pane_ParamLimits

0x7d09,	// (0x00082607) list_single_cmail_header_caption_pane_ParamLimits

0xdf3c,	// (0x0008883a) aid_recal_txt_sm_pane

0x11a6,	// (0x0007baa4) mian_recal_day_pane

0xdf76,	// (0x00088874) popup_sp_fs_cale_preview_window_ParamLimits

0x82ff,	// (0x00082bfd) list_recal_day_pane

0xe058,	// (0x00088956) list_single_recal_day_pane_ParamLimits

0xe058,	// (0x00088956) list_single_recal_day_pane

0x8326,	// (0x00082c24) list_single_recal_day_pane_g1_ParamLimits

0x8326,	// (0x00082c24) list_single_recal_day_pane_g1

0xe06a,	// (0x00088968) list_single_recal_day_pane_g2_ParamLimits

0xe06a,	// (0x00088968) list_single_recal_day_pane_g2

0xe076,	// (0x00088974) list_single_recal_day_pane_g3_ParamLimits

0xe076,	// (0x00088974) list_single_recal_day_pane_g3

0x1026,	// (0x0007b924) list_single_recal_day_pane_g4_ParamLimits

0x1026,	// (0x0007b924) list_single_recal_day_pane_g4

0xe082,	// (0x00088980) list_single_recal_day_pane_g5_ParamLimits

0xe082,	// (0x00088980) list_single_recal_day_pane_g5

0xe08e,	// (0x0008898c) list_single_recal_day_pane_g6_ParamLimits

0xe08e,	// (0x0008898c) list_single_recal_day_pane_g6

0x0004,

0xfc7f,	// (0x0008a57d) list_single_recal_day_pane_g_ParamLimits

0xfc7f,	// (0x0008a57d) list_single_recal_day_pane_g

0xe0a2,	// (0x000889a0) list_single_recal_day_pane_t1

0xe0b4,	// (0x000889b2) list_single_recal_day_pane_t2

0x0001,

0xfc8a,	// (0x0008a588) list_single_recal_day_pane_t

0x8332,	// (0x00082c30) ncimui_query_button_pane_ParamLimits

0x8332,	// (0x00082c30) ncimui_query_button_pane

0x8342,	// (0x00082c40) ncimui_query_button_pane_t1_ParamLimits

0x8342,	// (0x00082c40) ncimui_query_button_pane_t1

0x8355,	// (0x00082c53) ncimui_query_button_pane_t2_ParamLimits

0x8355,	// (0x00082c53) ncimui_query_button_pane_t2

0x0001,

0xfc8f,	// (0x0008a58d) ncimui_query_button_pane_t_ParamLimits

0xfc8f,	// (0x0008a58d) ncimui_query_button_pane_t

0x8368,	// (0x00082c66) query_button_pane_ParamLimits

0x8368,	// (0x00082c66) query_button_pane

0x11a6,	// (0x0007baa4) bg_button_pane_cp0028

0x837b,	// (0x00082c79) query_button_pane_t1

0x3ad8,	// (0x0007e3d6) main_tport_pane_ParamLimits

0x7b61,	// (0x0008245f) bg_popup_window_pane_cp01_ParamLimits

0x7b61,	// (0x0008245f) bg_popup_window_pane_cp01

0x7b7c,	// (0x0008247a) heading_pane_cp08_ParamLimits

0x7b7c,	// (0x0008247a) heading_pane_cp08

0x7b8f,	// (0x0008248d) heading_pane_cp07_ParamLimits

0x7b8f,	// (0x0008248d) heading_pane_cp07

0x7c6d,	// (0x0008256b) cell_tport_appsw_pane_g2

0x0002,

0xfbd6,	// (0x0008a4d4) cell_tport_appsw_pane_g

0xbb21,	// (0x0008641f) input_candi_list_open_g1

0xb309,	// (0x00085c07) list_cale_time_pane_g6_ParamLimits

0xb309,	// (0x00085c07) list_cale_time_pane_g6

0x40e5,	// (0x0007e9e3) aid_size_touch_calib_1_ParamLimits

0x40e5,	// (0x0007e9e3) aid_size_touch_calib_1

0x40f7,	// (0x0007e9f5) aid_size_touch_calib_2_ParamLimits

0x40f7,	// (0x0007e9f5) aid_size_touch_calib_2

0x410f,	// (0x0007ea0d) aid_size_touch_calib_3_ParamLimits

0x410f,	// (0x0007ea0d) aid_size_touch_calib_3

0x412d,	// (0x0007ea2b) aid_size_touch_calib_4_ParamLimits

0x412d,	// (0x0007ea2b) aid_size_touch_calib_4

0x4145,	// (0x0007ea43) main_touch_calib_button_group_pane_ParamLimits

0x4145,	// (0x0007ea43) main_touch_calib_button_group_pane

0x415d,	// (0x0007ea5b) main_touch_calib_pane_g1_ParamLimits

0x416f,	// (0x0007ea6d) main_touch_calib_pane_g2_ParamLimits

0x4181,	// (0x0007ea7f) main_touch_calib_pane_g3_ParamLimits

0x4193,	// (0x0007ea91) main_touch_calib_pane_g4_ParamLimits

0xf68d,	// (0x00089f8b) main_touch_calib_pane_g_ParamLimits

0x41a5,	// (0x0007eaa3) main_touch_calib_pane_t1_ParamLimits

0x41bf,	// (0x0007eabd) main_touch_calib_pane_t2_ParamLimits

0x41d9,	// (0x0007ead7) main_touch_calib_pane_t3_ParamLimits

0x41ed,	// (0x0007eaeb) main_touch_calib_pane_t4_ParamLimits

0x4201,	// (0x0007eaff) main_touch_calib_pane_t5_ParamLimits

0xf696,	// (0x00089f94) main_touch_calib_pane_t_ParamLimits

0xd61a,	// (0x00087f18) list_single_fp_cale_pane_g3_ParamLimits

0xd61a,	// (0x00087f18) list_single_fp_cale_pane_g3

0xa52b,	// (0x00084e29) bg_button_pane_cp012_ParamLimits

0xa52b,	// (0x00084e29) bg_vkb2_func_pane_cp03_ParamLimits

0x5f4c,	// (0x0008084a) cell_vitu2_function_top_pane_g1_ParamLimits

0xa52b,	// (0x00084e29) bg_vkb2_func_pane_cp04_ParamLimits

0x6db0,	// (0x000816ae) main_ncimui_button_group_pane_ParamLimits

0x6db0,	// (0x000816ae) main_ncimui_button_group_pane

0x6e10,	// (0x0008170e) main_ncimui_pane_t3_ParamLimits

0x6e10,	// (0x0008170e) main_ncimui_pane_t3

0x7eaa,	// (0x000827a8) phacti_button_group_pane

0x8256,	// (0x00082b54) aid_size_list_single_double_ParamLimits

0x8262,	// (0x00082b60) popup_ezdial_listscroll_window_ParamLimits

0x8279,	// (0x00082b77) popup_number_entry_window_cp01_ParamLimits

0x8389,	// (0x00082c87) phacti_button_pane_ParamLimits

0x8389,	// (0x00082c87) phacti_button_pane

0x11a6,	// (0x0007baa4) bg_button_pane_cp14

0x839a,	// (0x00082c98) phacti_button_pane_t1

0x83a8,	// (0x00082ca6) main_touch_calib_button_pane_ParamLimits

0x83a8,	// (0x00082ca6) main_touch_calib_button_pane

0xacc0,	// (0x000855be) bg_button_pane_cp18_ParamLimits

0xacc0,	// (0x000855be) bg_button_pane_cp18

0x83bd,	// (0x00082cbb) main_touch_calib_button_pane_t1_ParamLimits

0x83bd,	// (0x00082cbb) main_touch_calib_button_pane_t1

0x83d3,	// (0x00082cd1) main_touch_calib_button_pane_t2_ParamLimits

0x83d3,	// (0x00082cd1) main_touch_calib_button_pane_t2

0x0001,

0xfc94,	// (0x0008a592) main_touch_calib_button_pane_t_ParamLimits

0xfc94,	// (0x0008a592) main_touch_calib_button_pane_t

0x11a6,	// (0x0007baa4) cell_ncimui_button_pane

0x11a6,	// (0x0007baa4) bg_button_pane_cp032

0x83f1,	// (0x00082cef) cell_ncimui_button_pane_t1

0xdcc2,	// (0x000885c0) image3_infobar_pane_ParamLimits

0xdcc2,	// (0x000885c0) image3_infobar_pane

0x74a1,	// (0x00081d9f) fs_bigclock_status_pane_ParamLimits

0x74a1,	// (0x00081d9f) fs_bigclock_status_pane

0x74ae,	// (0x00081dac) main_fs_bigclock_clock_pane_ParamLimits

0x74ae,	// (0x00081dac) main_fs_bigclock_clock_pane

0x74cc,	// (0x00081dca) main_fs_bigclock_indi_pane_ParamLimits

0x74cc,	// (0x00081dca) main_fs_bigclock_indi_pane

0x74fe,	// (0x00081dfc) main_fs_bigclock_swipe_pane_ParamLimits

0x74fe,	// (0x00081dfc) main_fs_bigclock_swipe_pane

0x11a6,	// (0x0007baa4) main_fs_clock_dumped_data

0x753d,	// (0x00081e3b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x753d,	// (0x00081e3b) list_single_fs_bigclock_indicator_pane_g1

0x7559,	// (0x00081e57) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7559,	// (0x00081e57) list_single_fs_bigclock_indicator_pane_g2

0x7573,	// (0x00081e71) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7573,	// (0x00081e71) list_single_fs_bigclock_indicator_pane_g3

0x758d,	// (0x00081e8b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x758d,	// (0x00081e8b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb35,	// (0x0008a433) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb35,	// (0x0008a433) list_single_fs_bigclock_indicator_pane_g

0x75b8,	// (0x00081eb6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x75b8,	// (0x00081eb6) list_single_fs_bigclock_indicator_pane_t1

0x75e0,	// (0x00081ede) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x75e0,	// (0x00081ede) list_single_fs_bigclock_indicator_pane_t2

0x7608,	// (0x00081f06) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7608,	// (0x00081f06) list_single_fs_bigclock_indicator_pane_t3

0x7630,	// (0x00081f2e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7630,	// (0x00081f2e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb40,	// (0x0008a43e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb40,	// (0x0008a43e) list_single_fs_bigclock_indicator_pane_t

0x83ff,	// (0x00082cfd) image3_infobar_fav_pane_ParamLimits

0x83ff,	// (0x00082cfd) image3_infobar_fav_pane

0x840f,	// (0x00082d0d) image3_infobar_loc_pane_ParamLimits

0x840f,	// (0x00082d0d) image3_infobar_loc_pane

0x8423,	// (0x00082d21) image3_infobar_time_pane_ParamLimits

0x8423,	// (0x00082d21) image3_infobar_time_pane

0xac48,	// (0x00085546) image3_infobar_time_pane_g1

0x8433,	// (0x00082d31) image3_infobar_time_pane_t1

0xac48,	// (0x00085546) image3_infobar_loc_pane_g1

0x8441,	// (0x00082d3f) image3_infobar_loc_pane_g2

0x0001,

0xfc99,	// (0x0008a597) image3_infobar_loc_pane_g

0x8449,	// (0x00082d47) image3_infobar_loc_pane_t1

0xac48,	// (0x00085546) image3_infobar_fav_pane_g1

0x8457,	// (0x00082d55) image3_infobar_fav_pane_g2

0x0001,

0xfc9e,	// (0x0008a59c) image3_infobar_fav_pane_g

0x845f,	// (0x00082d5d) fs_bigclock_status_battery_pane

0x8468,	// (0x00082d66) fs_bigclock_status_signal_pane

0x8471,	// (0x00082d6f) fs_bigclock_status_title_pane

0x847a,	// (0x00082d78) fs_bigclock_status_signal_pane_g1

0x8483,	// (0x00082d81) fs_bigclock_status_signal_pane_g2

0x0001,

0xfca3,	// (0x0008a5a1) fs_bigclock_status_signal_pane_g

0x848b,	// (0x00082d89) fs_bigclock_status_battery_pane_g1

0x8494,	// (0x00082d92) fs_bigclock_status_battery_pane_g2

0x0001,

0xfca8,	// (0x0008a5a6) fs_bigclock_status_battery_pane_g

0x849c,	// (0x00082d9a) fs_bigclock_status_title_pane_t1

0x84aa,	// (0x00082da8) main_fs_bigclock_clock_pane_g1

0x84aa,	// (0x00082da8) main_fs_bigclock_clock_pane_g2

0x84bb,	// (0x00082db9) main_fs_bigclock_clock_pane_g3

0x84bb,	// (0x00082db9) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcad,	// (0x0008a5ab) main_fs_bigclock_clock_pane_g

0x84ce,	// (0x00082dcc) main_fs_bigclock_clock_pane_t1

0x84e4,	// (0x00082de2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcb6,	// (0x0008a5b4) main_fs_bigclock_clock_pane_t

0x84fa,	// (0x00082df8) list_single_fs_bigclock_indicator_pane_ParamLimits

0x84fa,	// (0x00082df8) list_single_fs_bigclock_indicator_pane

0x850b,	// (0x00082e09) list_single_fs_bigclock_pane_ParamLimits

0x850b,	// (0x00082e09) list_single_fs_bigclock_pane

0x8575,	// (0x00082e73) main_fs_bigclock_indicator_pane_t1

0x8584,	// (0x00082e82) list_single_fs_bigclock_pane_g1

0x858c,	// (0x00082e8a) list_single_fs_bigclock_pane_t1

0xac48,	// (0x00085546) main_fs_bigclock_swipe_pane_g1

0x85cf,	// (0x00082ecd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcc7,	// (0x0008a5c5) main_fs_bigclock_swipe_pane_g

0x85d7,	// (0x00082ed5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x85d7,	// (0x00082ed5) main_fs_bigclock_swipe_pane_t1

0x2cda,	// (0x0007d5d8) call_type_pane_ParamLimits

0x11a6,	// (0x0007baa4) main_btmg_pane

0xdfc1,	// (0x000888bf) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdfc1,	// (0x000888bf) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc3a,	// (0x0008a538) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc3a,	// (0x0008a538) list_single_cale_mrui_row_pane_g

0xe047,	// (0x00088945) list_recal_vselct_arw_lo_pane

0x831e,	// (0x00082c1c) list_recal_vselct_arw_up_pane

0xe04f,	// (0x0008894d) list_recal_vselct_pane

0x85f4,	// (0x00082ef2) btmg_button_pane

0x85fe,	// (0x00082efc) main_btmg_pane_g1

0x11a6,	// (0x0007baa4) bg_button_pane_cp044

0x8608,	// (0x00082f06) btmg_button_pane_t1

0xcd7f,	// (0x0008767d) aid_listscroll_gen

0xa52b,	// (0x00084e29) main_cntbar_detail_pane

0x7cd4,	// (0x000825d2) list_cmail_folder_pane

0xeeb7,	// (0x000897b5) sp_fs_scroll_pane_cp03_ParamLimits

0x103e,	// (0x0007b93c) list_single_fs_dyc_pane_cp01_ParamLimits

0x103e,	// (0x0007b93c) list_single_fs_dyc_pane_cp01

0x8616,	// (0x00082f14) aid_size_cmail_indent

0xe0c6,	// (0x000889c4) list_single_dyc_row_pane_cp01

0x8651,	// (0x00082f4f) cntbar_detail_list_pane_ParamLimits

0x8651,	// (0x00082f4f) cntbar_detail_list_pane

0x869d,	// (0x00082f9b) main_cntbar_detail_cont_pane_ParamLimits

0x869d,	// (0x00082f9b) main_cntbar_detail_cont_pane

0xeeb7,	// (0x000897b5) scroll_pane_cp032_ParamLimits

0xeeb7,	// (0x000897b5) scroll_pane_cp032

0x86b1,	// (0x00082faf) cntbar_detail_list_event_pane_ParamLimits

0x86b1,	// (0x00082faf) cntbar_detail_list_event_pane

0x8661,	// (0x00082f5f) cntbar_detail_list_shct_pane

0xb166,	// (0x00085a64) aid_list_gen

0x86c1,	// (0x00082fbf) aid_scroll

0x86ca,	// (0x00082fc8) aid_size_touch_scroll_bar

0x7725,	// (0x00082023) aid_list_double

0x86d3,	// (0x00082fd1) aid_list_single

0x86dc,	// (0x00082fda) aid_list_single_lg

0x1054,	// (0x0007b952) aid_list_z_g_a_sm

0x86e5,	// (0x00082fe3) aid_list_z_g_d

0x105c,	// (0x0007b95a) aid_txt_z_prm

0x106a,	// (0x0007b968) aid_txt_z_prm_cp01

0x1078,	// (0x0007b976) aid_txt_z_sec

0x86ed,	// (0x00082feb) main_cntbar_detail_cont_pane_g1_ParamLimits

0x86ed,	// (0x00082feb) main_cntbar_detail_cont_pane_g1

0x8701,	// (0x00082fff) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8701,	// (0x00082fff) main_cntbar_detail_cont_pane_g2

0x0001,

0xfccc,	// (0x0008a5ca) main_cntbar_detail_cont_pane_g_ParamLimits

0xfccc,	// (0x0008a5ca) main_cntbar_detail_cont_pane_g

0x8711,	// (0x0008300f) main_cntbar_detail_cont_pane_t1

0x871f,	// (0x0008301d) main_cntbar_detail_cont_pane_t2

0x872d,	// (0x0008302b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcd1,	// (0x0008a5cf) main_cntbar_detail_cont_pane_t

0x873b,	// (0x00083039) cell_cntbar_detail_list_shct_pane_ParamLimits

0x873b,	// (0x00083039) cell_cntbar_detail_list_shct_pane

0x874f,	// (0x0008304d) cntbar_detail_list_shct_pane_g1

0x8758,	// (0x00083056) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcd8,	// (0x0008a5d6) cntbar_detail_list_shct_pane_g

0x8761,	// (0x0008305f) cntbar_detail_list_event_pane_g1_ParamLimits

0x8761,	// (0x0008305f) cntbar_detail_list_event_pane_g1

0x876d,	// (0x0008306b) cntbar_detail_list_event_pane_g2_ParamLimits

0x876d,	// (0x0008306b) cntbar_detail_list_event_pane_g2

0x0005,

0xfcdd,	// (0x0008a5db) cntbar_detail_list_event_pane_g_ParamLimits

0xfcdd,	// (0x0008a5db) cntbar_detail_list_event_pane_g

0x87d9,	// (0x000830d7) cntbar_detail_list_event_pane_t1_ParamLimits

0x87d9,	// (0x000830d7) cntbar_detail_list_event_pane_t1

0x87ee,	// (0x000830ec) cntbar_detail_list_event_pane_t2_ParamLimits

0x87ee,	// (0x000830ec) cntbar_detail_list_event_pane_t2

0x0002,

0xfcea,	// (0x0008a5e8) cntbar_detail_list_event_pane_t_ParamLimits

0xfcea,	// (0x0008a5e8) cntbar_detail_list_event_pane_t

0xac48,	// (0x00085546) cell_cntbar_detail_list_shct_pane_g1

0xb953,	// (0x00086251) navi_pane_mv_g3

0xa52b,	// (0x00084e29) main_cntbar_detail_pane_ParamLimits

0x11a6,	// (0x0007baa4) main_notif_wgt_pane

0xda42,	// (0x00088340) aid_tch_main_mp4_pane_g4

0xdcba,	// (0x000885b8) popup_slider_window_cp02

0xe03d,	// (0x0008893b) list_recal_day_event_pane

0x861f,	// (0x00082f1d) cntbar_detail_btn_pane_ParamLimits

0x861f,	// (0x00082f1d) cntbar_detail_btn_pane

0x8638,	// (0x00082f36) cntbar_detail_btn_pane_cp01_ParamLimits

0x8638,	// (0x00082f36) cntbar_detail_btn_pane_cp01

0x8661,	// (0x00082f5f) cntbar_detail_list_shct_pane_ParamLimits

0x8671,	// (0x00082f6f) cntbar_detail_pane_g1_ParamLimits

0x8671,	// (0x00082f6f) cntbar_detail_pane_g1

0x8681,	// (0x00082f7f) cntbar_detail_pane_t1_ParamLimits

0x8681,	// (0x00082f7f) cntbar_detail_pane_t1

0x8779,	// (0x00083077) cntbar_detail_list_event_pane_g3_ParamLimits

0x8779,	// (0x00083077) cntbar_detail_list_event_pane_g3

0x8791,	// (0x0008308f) cntbar_detail_list_event_pane_g4_ParamLimits

0x8791,	// (0x0008308f) cntbar_detail_list_event_pane_g4

0x87a9,	// (0x000830a7) cntbar_detail_list_event_pane_g5_ParamLimits

0x87a9,	// (0x000830a7) cntbar_detail_list_event_pane_g5

0x87c1,	// (0x000830bf) cntbar_detail_list_event_pane_g6_ParamLimits

0x87c1,	// (0x000830bf) cntbar_detail_list_event_pane_g6

0x8803,	// (0x00083101) cntbar_detail_list_event_pane_t3_ParamLimits

0x8803,	// (0x00083101) cntbar_detail_list_event_pane_t3

0x8815,	// (0x00083113) popup_notif_wgt_window_ParamLimits

0x8815,	// (0x00083113) popup_notif_wgt_window

0x882e,	// (0x0008312c) popup_submenu_window_cp01_ParamLimits

0x882e,	// (0x0008312c) popup_submenu_window_cp01

0xaef5,	// (0x000857f3) bg_popup_window_pane_cp10

0x8840,	// (0x0008313e) listscroll_notif_wgt_pane

0x8852,	// (0x00083150) list_notif_wgt_window

0x885b,	// (0x00083159) scroll_pane_cp033

0x8864,	// (0x00083162) list_notif_wgt_row_pane_ParamLimits

0x8864,	// (0x00083162) list_notif_wgt_row_pane

0x8874,	// (0x00083172) aid_size_list_notif_wgt_del

0x8881,	// (0x0008317f) list_notif_wgt_row_pane_g1

0x888d,	// (0x0008318b) list_notif_wgt_row_pane_g2

0x889c,	// (0x0008319a) list_notif_wgt_row_pane_g3

0x0002,

0xfcf1,	// (0x0008a5ef) list_notif_wgt_row_pane_g

0x88a9,	// (0x000831a7) list_notif_wgt_row_pane_t1

0x88bf,	// (0x000831bd) list_notif_wgt_row_pane_t2

0x88d1,	// (0x000831cf) list_notif_wgt_row_pane_t3

0x0002,

0xfcf8,	// (0x0008a5f6) list_notif_wgt_row_pane_t

0xeac3,	// (0x000893c1) list_recal_day_event_pane_g1

0x88e3,	// (0x000831e1) list_recal_day_event_pane_t1

0x11a6,	// (0x0007baa4) bg_button_pane_cp045

0x88f2,	// (0x000831f0) cntbar_detail_btn_pane_t1

0xba86,	// (0x00086384) main_callh_pane_ParamLimits

0xba86,	// (0x00086384) main_callh_pane

0x11a6,	// (0x0007baa4) main_coverflow0_pane

0x11a6,	// (0x0007baa4) main_wgtman_pane

0x7516,	// (0x00081e14) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7516,	// (0x00081e14) main_fs_bigclock_unlock_btn_pane

0x7c65,	// (0x00082563) bg_button_pane_cp16

0x7c75,	// (0x00082573) cell_tport_appsw_pane_g3

0x8900,	// (0x000831fe) cf0_flow_pane_ParamLimits

0x8900,	// (0x000831fe) cf0_flow_pane

0x8915,	// (0x00083213) listscroll_cf0_pane

0x8920,	// (0x0008321e) main_cf0_pane_g1

0x8932,	// (0x00083230) main_cf0_pane_t1_ParamLimits

0x8932,	// (0x00083230) main_cf0_pane_t1

0x8949,	// (0x00083247) main_cf0_pane_t2_ParamLimits

0x8949,	// (0x00083247) main_cf0_pane_t2

0x0001,

0xfd04,	// (0x0008a602) main_cf0_pane_t_ParamLimits

0xfd04,	// (0x0008a602) main_cf0_pane_t

0x8960,	// (0x0008325e) scroll_pane_cp11

0x896b,	// (0x00083269) cf0_flow_pane_g1

0x8973,	// (0x00083271) cf0_flow_pane_g2

0x0001,

0xfd09,	// (0x0008a607) cf0_flow_pane_g

0x897b,	// (0x00083279) cf0_flow_pane_t1

0x11a6,	// (0x0007baa4) main_call6_pane

0x11a6,	// (0x0007baa4) main_calllock_pane

0x8989,	// (0x00083287) call6_btn_grp_pane_ParamLimits

0x8989,	// (0x00083287) call6_btn_grp_pane

0x89a3,	// (0x000832a1) call6_pane_g1_ParamLimits

0x89a3,	// (0x000832a1) call6_pane_g1

0x89b9,	// (0x000832b7) popup_call6_1st_window_ParamLimits

0x89b9,	// (0x000832b7) popup_call6_1st_window

0x89ca,	// (0x000832c8) popup_call6_2nd_window_ParamLimits

0x89ca,	// (0x000832c8) popup_call6_2nd_window

0x89db,	// (0x000832d9) cell_call6_btn_pane_ParamLimits

0x89db,	// (0x000832d9) cell_call6_btn_pane

0xaef5,	// (0x000857f3) bg_popup_call2_in_pane_cp03

0x89ef,	// (0x000832ed) popup_call6_1st_window_g1

0x89f7,	// (0x000832f5) popup_call6_1st_window_g2

0x89ff,	// (0x000832fd) popup_call6_1st_window_g3

0x0002,

0xfd0e,	// (0x0008a60c) popup_call6_1st_window_g

0x8a07,	// (0x00083305) popup_call6_1st_window_t1

0x8a16,	// (0x00083314) popup_call6_1st_window_t2

0x8a24,	// (0x00083322) popup_call6_1st_window_t3

0x0002,

0xfd15,	// (0x0008a613) popup_call6_1st_window_t

0xaef5,	// (0x000857f3) bg_popup_call2_in_pane_cp04

0x8a32,	// (0x00083330) popup_call6_2nd_window_g1

0x8a3a,	// (0x00083338) popup_call6_2nd_window_g2

0x8a42,	// (0x00083340) popup_call6_2nd_window_g3

0x0002,

0xfd1c,	// (0x0008a61a) popup_call6_2nd_window_g

0x8a4a,	// (0x00083348) popup_call6_2nd_window_t1

0x11a6,	// (0x0007baa4) bg_button_pane_cp15

0x8a59,	// (0x00083357) cell_call6_btn_pane_g1

0x8a62,	// (0x00083360) cell_call6_btn_pane_t1

0x8a71,	// (0x0008336f) listscroll_wgtman_pane_ParamLimits

0x8a71,	// (0x0008336f) listscroll_wgtman_pane

0x8a92,	// (0x00083390) wgtman_btn_pane_ParamLimits

0x8a92,	// (0x00083390) wgtman_btn_pane

0xb767,	// (0x00086065) aid_scroll_copy1

0x8ad5,	// (0x000833d3) list_wgtman_pane

0x8adf,	// (0x000833dd) wgtman_btn_pane_g1_ParamLimits

0x8adf,	// (0x000833dd) wgtman_btn_pane_g1

0x8b0b,	// (0x00083409) wgtman_btn_pane_t1_ParamLimits

0x8b0b,	// (0x00083409) wgtman_btn_pane_t1

0x8b48,	// (0x00083446) wgtman_btn_pane_t2_ParamLimits

0x8b48,	// (0x00083446) wgtman_btn_pane_t2

0x0001,

0xfd23,	// (0x0008a621) wgtman_btn_pane_t_ParamLimits

0xfd23,	// (0x0008a621) wgtman_btn_pane_t

0x8b5f,	// (0x0008345d) listrow_wgtman_pane_ParamLimits

0x8b5f,	// (0x0008345d) listrow_wgtman_pane

0x8b72,	// (0x00083470) listrow_wgtman_pane_g1

0x8b7f,	// (0x0008347d) listrow_wgtman_pane_g2

0x0001,

0xfd28,	// (0x0008a626) listrow_wgtman_pane_g

0x1086,	// (0x0007b984) listrow_wgtman_pane_t1

0x109e,	// (0x0007b99c) listrow_wgtman_pane_t2

0x0001,

0xfd2d,	// (0x0008a62b) listrow_wgtman_pane_t

0x10c4,	// (0x0007b9c2) wait_bar_pane_cp09

0x8b9d,	// (0x0008349b) main_calllock_btn_pane

0x8ba7,	// (0x000834a5) main_calllock_pane_g1

0x11a6,	// (0x0007baa4) bg_button_pane_cp17

0x8a59,	// (0x00083357) main_calllock_btn_pane_g1

0x8baf,	// (0x000834ad) main_calllock_btn_pane_t1

0x11a6,	// (0x0007baa4) main_dialer3_pane

0x11a6,	// (0x0007baa4) main_fmrd2_pane

0xac48,	// (0x00085546) main_fs_bigclock_unlock_btn_pane_g1

0x8bc6,	// (0x000834c4) main_fs_bigclock_unlock_btn_pane_t1

0x8bd4,	// (0x000834d2) area_fmrd2_info_pane_ParamLimits

0x8bd4,	// (0x000834d2) area_fmrd2_info_pane

0x8be5,	// (0x000834e3) area_fmrd2_visual_pane_ParamLimits

0x8be5,	// (0x000834e3) area_fmrd2_visual_pane

0x8bf3,	// (0x000834f1) fmrd2_indi_pane_ParamLimits

0x8bf3,	// (0x000834f1) fmrd2_indi_pane

0x8c00,	// (0x000834fe) area_fmrd2_visual_pane_g1

0x8c08,	// (0x00083506) area_fmrd2_visual_pane_t1

0x8c18,	// (0x00083516) area_fmrd2_visual_pane_t2

0x8c28,	// (0x00083526) area_fmrd2_visual_pane_t3

0x0002,

0xfd37,	// (0x0008a635) area_fmrd2_visual_pane_t

0x8c38,	// (0x00083536) area_fmrd2_info_pane_g1

0x8c40,	// (0x0008353e) area_fmrd2_info_pane_t1

0x8c50,	// (0x0008354e) area_fmrd2_info_pane_t2

0x8c60,	// (0x0008355e) area_fmrd2_info_pane_t3

0x8c70,	// (0x0008356e) area_fmrd2_info_pane_t4

0x0003,

0xfd3e,	// (0x0008a63c) area_fmrd2_info_pane_t

0x8c7e,	// (0x0008357c) fmrd2_indi_pane_t1

0x8c8e,	// (0x0008358c) fmrd2_indi_pane_t2

0x8c9e,	// (0x0008359c) fmrd2_indi_pane_t3

0x0002,

0xfd47,	// (0x0008a645) fmrd2_indi_pane_t

0x759c,	// (0x00081e9a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x759c,	// (0x00081e9a) list_single_fs_bigclock_indicator_pane_g5

0x764d,	// (0x00081f4b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x764d,	// (0x00081f4b) list_single_fs_bigclock_indicator_pane_t5

0x7f29,	// (0x00082827) aid_cell_bcale_month_pane_ParamLimits

0x7f29,	// (0x00082827) aid_cell_bcale_month_pane

0x7f47,	// (0x00082845) bcale_month_pane_ParamLimits

0x7f47,	// (0x00082845) bcale_month_pane

0x7f6b,	// (0x00082869) bcale_preview_pane_ParamLimits

0x7f6b,	// (0x00082869) bcale_preview_pane

0x858c,	// (0x00082e8a) list_single_fs_bigclock_pane_t1_ParamLimits

0x85ab,	// (0x00082ea9) list_single_fs_bigclock_pane_t2_ParamLimits

0x85ab,	// (0x00082ea9) list_single_fs_bigclock_pane_t2

0x0001,

0xfcc2,	// (0x0008a5c0) list_single_fs_bigclock_pane_t_ParamLimits

0xfcc2,	// (0x0008a5c0) list_single_fs_bigclock_pane_t

0x8bbe,	// (0x000834bc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd32,	// (0x0008a630) main_fs_bigclock_unlock_btn_pane_g

0x8cae,	// (0x000835ac) aid_dia3_key_size_ParamLimits

0x8cae,	// (0x000835ac) aid_dia3_key_size

0x8cbd,	// (0x000835bb) aid_dia3_listrow_size_ParamLimits

0x8cbd,	// (0x000835bb) aid_dia3_listrow_size

0x8cd2,	// (0x000835d0) dia3_keypad_fun_pane_ParamLimits

0x8cd2,	// (0x000835d0) dia3_keypad_fun_pane

0x8cee,	// (0x000835ec) dia3_keypad_num_pane_ParamLimits

0x8cee,	// (0x000835ec) dia3_keypad_num_pane

0x8d09,	// (0x00083607) dia3_listscroll_pane_ParamLimits

0x8d09,	// (0x00083607) dia3_listscroll_pane

0x8d1c,	// (0x0008361a) dia3_numentry_pane_ParamLimits

0x8d1c,	// (0x0008361a) dia3_numentry_pane

0x8d34,	// (0x00083632) dia3_list_pane

0x8d3f,	// (0x0008363d) scroll_pane_cp12

0x11a6,	// (0x0007baa4) bg_dia3_numentry_pane

0x8d4a,	// (0x00083648) dia3_numentry_pane_t1

0x8d59,	// (0x00083657) cell_dia3_key_num_pane

0x8d61,	// (0x0008365f) cell_dia3_key0_fun_pane_ParamLimits

0x8d61,	// (0x0008365f) cell_dia3_key0_fun_pane

0x8d75,	// (0x00083673) cell_dia3_key1_fun_pane_ParamLimits

0x8d75,	// (0x00083673) cell_dia3_key1_fun_pane

0x8d8d,	// (0x0008368b) dia3_listrow_pane

0x702e,	// (0x0008192c) bg_dia3_numentry_pane_g1

0x11a6,	// (0x0007baa4) bg_button_pane_cp21

0x8d9f,	// (0x0008369d) cell_dia3_key_num_pane_t1

0x8dad,	// (0x000836ab) cell_dia3_key_num_pane_t2

0x8dbc,	// (0x000836ba) cell_dia3_key_num_pane_t3

0x8dcb,	// (0x000836c9) cell_dia3_key_num_pane_t4

0x0003,

0xfd4e,	// (0x0008a64c) cell_dia3_key_num_pane_t

0x11a6,	// (0x0007baa4) bg_button_pane_cp19

0x8dda,	// (0x000836d8) cell_dia3_key0_fun_pane_g1

0x11a6,	// (0x0007baa4) bg_button_pane_cp20

0x8de2,	// (0x000836e0) cell_dia3_key1_fun_pane_g1

0x8dea,	// (0x000836e8) area_left_week_number_pane

0x8df6,	// (0x000836f4) area_top_day_name_pane

0x8e09,	// (0x00083707) frame_month_view_pane

0x8e1c,	// (0x0008371a) grid_month_view_pane

0x8e2a,	// (0x00083728) cell_top_day_name_pane_ParamLimits

0x8e2a,	// (0x00083728) cell_top_day_name_pane

0x8e57,	// (0x00083755) cell_area_left_week_number_pane_ParamLimits

0x8e57,	// (0x00083755) cell_area_left_week_number_pane

0x8e6b,	// (0x00083769) cell_month_view_pane_ParamLimits

0x8e6b,	// (0x00083769) cell_month_view_pane

0x8e98,	// (0x00083796) frm_month_g1

0x8ea5,	// (0x000837a3) frm_month_g2

0x8eb8,	// (0x000837b6) frm_month_g3

0x8ecb,	// (0x000837c9) frm_month_g4

0x8ede,	// (0x000837dc) frm_month_g5

0x8ef1,	// (0x000837ef) frm_month_g6

0x8f04,	// (0x00083802) frm_month_g7

0x8f17,	// (0x00083815) frm_month_g8

0x8f24,	// (0x00083822) frm_month_g9

0x8f34,	// (0x00083832) frm_month_g10

0x8f44,	// (0x00083842) frm_month_g11

0x8f54,	// (0x00083852) frm_month_g12

0x8f66,	// (0x00083864) frm_month_g13

0x8f78,	// (0x00083876) frm_month_g14

0x8f8c,	// (0x0008388a) frm_month_g15

0x8fa0,	// (0x0008389e) frm_month_g16

0x000f,

0xfd57,	// (0x0008a655) frm_month_g

0x8fb4,	// (0x000838b2) cell_top_day_name_pane_t1

0x8fc7,	// (0x000838c5) cell_area_left_week_number_pane_g1

0x8fd3,	// (0x000838d1) cell_area_left_week_number_pane_t1

0xac02,	// (0x00085500) cell_month_view_pane_g1

0x8fe6,	// (0x000838e4) cell_month_view_pane_t1

0x11a6,	// (0x0007baa4) main_fps_pane

0x79ae,	// (0x000822ac) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x79ae,	// (0x000822ac) cmail_ddmenu_btn02_pane_cp1

0x79ca,	// (0x000822c8) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x79ca,	// (0x000822c8) cmail_ddmenu_btn02_pane_cp2

0x82cf,	// (0x00082bcd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x82cf,	// (0x00082bcd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc75,	// (0x0008a573) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc75,	// (0x0008a573) cmail_ddmenu_btn02_pane_g

0x82ed,	// (0x00082beb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x82ed,	// (0x00082beb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc7a,	// (0x0008a578) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc7a,	// (0x0008a578) cmail_ddmenu_btn02_pane_t

0x8ff9,	// (0x000838f7) fps_text_pane_ParamLimits

0x8ff9,	// (0x000838f7) fps_text_pane

0x9010,	// (0x0008390e) main_fps_pane_g1_ParamLimits

0x9010,	// (0x0008390e) main_fps_pane_g1

0x902a,	// (0x00083928) wait_bar_pane_cp010_ParamLimits

0x902a,	// (0x00083928) wait_bar_pane_cp010

0x903b,	// (0x00083939) fps_text_pane_t1_ParamLimits

0x903b,	// (0x00083939) fps_text_pane_t1

0x54ae,	// (0x0007fdac) cam4_image_uncrop_pane_g1

0x54b7,	// (0x0007fdb5) cam4_image_uncrop_pane_g2

0x54c0,	// (0x0007fdbe) cam4_image_uncrop_pane_g3

0x54c9,	// (0x0007fdc7) cam4_image_uncrop_pane_g4

0x0003,

0xf81f,	// (0x0008a11d) cam4_image_uncrop_pane_g

0x8d8d,	// (0x0008368b) dia3_listrow_pane_ParamLimits

0x11a6,	// (0x0007baa4) main_phob2_pane

0x7bff,	// (0x000824fd) cell_tport_appsw_pane_cp02_ParamLimits

0x7bff,	// (0x000824fd) cell_tport_appsw_pane_cp02

0x7c13,	// (0x00082511) cell_tport_appsw_pane_cp03_ParamLimits

0x7c13,	// (0x00082511) cell_tport_appsw_pane_cp03

0x11a6,	// (0x0007baa4) phob2_contact_card_pane

0x11a6,	// (0x0007baa4) phob2_listscroll_pane

0x9053,	// (0x00083951) phob2_list_pane

0x828e,	// (0x00082b8c) scroll_pane_cp034

0x905b,	// (0x00083959) phob2_cc_data_pane_ParamLimits

0x905b,	// (0x00083959) phob2_cc_data_pane

0x907a,	// (0x00083978) phob2_cc_listscroll_pane_ParamLimits

0x907a,	// (0x00083978) phob2_cc_listscroll_pane

0x8b5f,	// (0x0008345d) list_double_large_graphic_phob2_pane_ParamLimits

0x8b5f,	// (0x0008345d) list_double_large_graphic_phob2_pane

0x9098,	// (0x00083996) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9098,	// (0x00083996) list_double_large_graphic_phob2_pane_g1

0x10d6,	// (0x0007b9d4) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x10d6,	// (0x0007b9d4) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd78,	// (0x0008a676) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd78,	// (0x0008a676) list_double_large_graphic_phob2_pane_g

0x10ee,	// (0x0007b9ec) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x10ee,	// (0x0007b9ec) list_double_large_graphic_phob2_pane_t1

0x1103,	// (0x0007ba01) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1103,	// (0x0007ba01) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd81,	// (0x0008a67f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd81,	// (0x0008a67f) list_double_large_graphic_phob2_pane_t

0x11a6,	// (0x0007baa4) list_highlight_pane_cp024

0x90b3,	// (0x000839b1) phob2_cc_button_pane

0x90bb,	// (0x000839b9) phob2_cc_data_pane_g1_ParamLimits

0x90bb,	// (0x000839b9) phob2_cc_data_pane_g1

0x90d2,	// (0x000839d0) phob2_cc_data_pane_g2_ParamLimits

0x90d2,	// (0x000839d0) phob2_cc_data_pane_g2

0x0001,

0xfd86,	// (0x0008a684) phob2_cc_data_pane_g_ParamLimits

0xfd86,	// (0x0008a684) phob2_cc_data_pane_g

0x90e4,	// (0x000839e2) phob2_cc_data_pane_t1_ParamLimits

0x90e4,	// (0x000839e2) phob2_cc_data_pane_t1

0x90fc,	// (0x000839fa) phob2_cc_data_pane_t2_ParamLimits

0x90fc,	// (0x000839fa) phob2_cc_data_pane_t2

0x9114,	// (0x00083a12) phob2_cc_data_pane_t3_ParamLimits

0x9114,	// (0x00083a12) phob2_cc_data_pane_t3

0x0002,

0xfd8b,	// (0x0008a689) phob2_cc_data_pane_t_ParamLimits

0xfd8b,	// (0x0008a689) phob2_cc_data_pane_t

0x912c,	// (0x00083a2a) phob2_cc_list_pane_ParamLimits

0x912c,	// (0x00083a2a) phob2_cc_list_pane

0x61c6,	// (0x00080ac4) scroll_pane_cp035_ParamLimits

0x61c6,	// (0x00080ac4) scroll_pane_cp035

0xa52b,	// (0x00084e29) bg_button_pane_cp033

0x9138,	// (0x00083a36) phob2_cc_button_pane_g1

0x9144,	// (0x00083a42) phob2_cc_button_pane_t1

0x9159,	// (0x00083a57) phob2_cc_button_pane_t2

0x0001,

0xfd92,	// (0x0008a690) phob2_cc_button_pane_t

0x916b,	// (0x00083a69) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x916b,	// (0x00083a69) list_double_large_graphic_phob2_cc_pane

0x919d,	// (0x00083a9b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x919d,	// (0x00083a9b) list_double_large_graphic_phob2_cc_pane_g1

0x1118,	// (0x0007ba16) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1118,	// (0x0007ba16) list_double_large_graphic_phob2_cc_pane_g2

0x91a9,	// (0x00083aa7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x91a9,	// (0x00083aa7) list_double_large_graphic_phob2_cc_pane_g3

0x1124,	// (0x0007ba22) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1124,	// (0x0007ba22) list_double_large_graphic_phob2_cc_pane_g4

0x1130,	// (0x0007ba2e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1130,	// (0x0007ba2e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfd97,	// (0x0008a695) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfd97,	// (0x0008a695) list_double_large_graphic_phob2_cc_pane_g

0x113c,	// (0x0007ba3a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x113c,	// (0x0007ba3a) list_double_large_graphic_phob2_cc_pane_t1

0x1165,	// (0x0007ba63) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1165,	// (0x0007ba63) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfda2,	// (0x0008a6a0) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfda2,	// (0x0008a6a0) list_double_large_graphic_phob2_cc_pane_t

0x91b5,	// (0x00083ab3) list_highlight_pane_cp025_ParamLimits

0x91b5,	// (0x00083ab3) list_highlight_pane_cp025

0xa52b,	// (0x00084e29) bg_button_pane_cp033_ParamLimits

0x9138,	// (0x00083a36) phob2_cc_button_pane_g1_ParamLimits

0x9144,	// (0x00083a42) phob2_cc_button_pane_t1_ParamLimits

0x9159,	// (0x00083a57) phob2_cc_button_pane_t2_ParamLimits

0xfd92,	// (0x0008a690) phob2_cc_button_pane_t_ParamLimits

0x13d0,	// (0x0007bcce) popup_wgtman_window

0xe88d,	// (0x0008918b) scroll_pane_cp038

0x8ab7,	// (0x000833b5) wgtman_btn_pane_cp_01_ParamLimits

0x8ab7,	// (0x000833b5) wgtman_btn_pane_cp_01

0x91c3,	// (0x00083ac1) wgtman_content_pane

0x91cc,	// (0x00083aca) wgtman_heading_pane

0x11a6,	// (0x0007baa4) bg_heading_pane_cp02

0x91d5,	// (0x00083ad3) wgtman_heading_pane_g1

0x91dd,	// (0x00083adb) wgtman_heading_pane_t1

0x91eb,	// (0x00083ae9) scroll_pane_cp036

0x91f3,	// (0x00083af1) wgtman_list_pane

0x76f4,	// (0x00081ff2) wgtman_list_pane_t1_ParamLimits

0x76f4,	// (0x00081ff2) wgtman_list_pane_t1

0xe631,	// (0x00088f2f) cam4_grid_pane

0x0b4c,	// (0x0007b44a) bg_button_pane_cp015_ParamLimits

0x60d9,	// (0x000809d7) bg_button_pane_cp016_ParamLimits

0x60e5,	// (0x000809e3) bg_button_pane_cp017_ParamLimits

0x6116,	// (0x00080a14) popup_vitu2_query_window_g3_ParamLimits

0x6116,	// (0x00080a14) popup_vitu2_query_window_g3

0x0bed,	// (0x0007b4eb) popup_vitu2_query_window_t6_ParamLimits

0x0bed,	// (0x0007b4eb) popup_vitu2_query_window_t6

0x0c18,	// (0x0007b516) popup_vitu2_query_window_t7_ParamLimits

0x0c18,	// (0x0007b516) popup_vitu2_query_window_t7

0x54ae,	// (0x0007fdac) cam4_grid_pane_g1

0x54b7,	// (0x0007fdb5) cam4_grid_pane_g2

0x91fb,	// (0x00083af9) cam4_grid_pane_g3

0x9204,	// (0x00083b02) cam4_grid_pane_g4

0x0003,

0xfda7,	// (0x0008a6a5) cam4_grid_pane_g

0x1e9e,	// (0x0007c79c) aid_placing_vt_slider_lsc_ParamLimits

0x219b,	// (0x0007ca99) vidtel_button_pane_ParamLimits

0x219b,	// (0x0007ca99) vidtel_button_pane

0x11a6,	// (0x0007baa4) bg_button_pane_cp034

0x920f,	// (0x00083b0d) vidtel_button_pane_g1

0x9217,	// (0x00083b15) vidtel_button_pane_t1

0xeab3,	// (0x000893b1) aid_size_vtel_slider_touch

0x61c6,	// (0x00080ac4) scroll_pane_cp039

0x70a5,	// (0x000819a3) ncim_query_button_pane_cp01_ParamLimits

0x70c4,	// (0x000819c2) ncimui_query_pane_g1_ParamLimits

0xa52b,	// (0x00084e29) input_focus_pane_cp012_ParamLimits

0x70e9,	// (0x000819e7) ncim_query_entry_pane_t1_ParamLimits

0x61c6,	// (0x00080ac4) scroll_pane_cp039_ParamLimits

0xb83e,	// (0x0008613c) navi_pane_bcale_mc_g1

0xb846,	// (0x00086144) navi_pane_bcale_mc_t1

0x7abb,	// (0x000823b9) main_sp_fs_email_pane_g1

0x7ac7,	// (0x000823c5) main_sp_fs_email_pane_g2

0x0001,

0xfba5,	// (0x0008a4a3) main_sp_fs_email_pane_g

0x80df,	// (0x000829dd) list_single_cale_mrui_row_pane_g3_ParamLimits

0x80df,	// (0x000829dd) list_single_cale_mrui_row_pane_g3

0x1034,	// (0x0007b932) list_single_recal_day_pane_g5_event_pane

0xe09a,	// (0x00088998) list_single_recal_day_pane_g7

0x922d,	// (0x00083b2b) list_recal_day_event_pane_cp01

0x9236,	// (0x00083b34) list_recal_vselct_arw_lo_pane_cp01

0x923e,	// (0x00083b3c) list_recal_vselct_arw_up_pane_cp01

0x9246,	// (0x00083b44) list_recal_vselct_pane_cp01

0xeac3,	// (0x000893c1) list_recal_day_event_pane_cp01_g1

0xe0cf,	// (0x000889cd) list_recal_day_event_pane_cp01_t1

0xe0a2,	// (0x000889a0) list_single_recal_day_pane_t1_ParamLimits

0xe0b4,	// (0x000889b2) list_single_recal_day_pane_t2_ParamLimits

0xfc8a,	// (0x0008a588) list_single_recal_day_pane_t_ParamLimits

0xab87,	// (0x00085485) bg_notes_pane_ParamLimits

0xac84,	// (0x00085582) list_notes_pane_ParamLimits

0x153b,	// (0x0007be39) scroll_pane_cp06_ParamLimits

0xacc0,	// (0x000855be) main_notes_pane_ParamLimits

0xa52b,	// (0x00084e29) main_welc_pane

0x9285,	// (0x00083b83) main_welc_body_pane_ParamLimits

0x9285,	// (0x00083b83) main_welc_body_pane

0x92a2,	// (0x00083ba0) main_welc_opti_pane_ParamLimits

0x92a2,	// (0x00083ba0) main_welc_opti_pane

0x9319,	// (0x00083c17) main_welc_pane_t1_ParamLimits

0x9319,	// (0x00083c17) main_welc_pane_t1

0x9519,	// (0x00083e17) main_welc_body_row_pane_ParamLimits

0x9519,	// (0x00083e17) main_welc_body_row_pane

0xabf4,	// (0x000854f2) main_welc_opti_row_pane_ParamLimits

0xabf4,	// (0x000854f2) main_welc_opti_row_pane

0x952e,	// (0x00083e2c) main_welc_opti_row_pane_g1

0x9536,	// (0x00083e34) main_welc_opti_row_pane_t1

0x9545,	// (0x00083e43) main_welc_body_row_pane_t1

0x884a,	// (0x00083148) popup_notif_wgt_heading_pane

0x8874,	// (0x00083172) aid_size_list_notif_wgt_del_ParamLimits

0x8881,	// (0x0008317f) list_notif_wgt_row_pane_g1_ParamLimits

0x888d,	// (0x0008318b) list_notif_wgt_row_pane_g2_ParamLimits

0x889c,	// (0x0008319a) list_notif_wgt_row_pane_g3_ParamLimits

0xfcf1,	// (0x0008a5ef) list_notif_wgt_row_pane_g_ParamLimits

0x88a9,	// (0x000831a7) list_notif_wgt_row_pane_t1_ParamLimits

0x88bf,	// (0x000831bd) list_notif_wgt_row_pane_t2_ParamLimits

0x88d1,	// (0x000831cf) list_notif_wgt_row_pane_t3_ParamLimits

0xfcf8,	// (0x0008a5f6) list_notif_wgt_row_pane_t_ParamLimits

0x8b72,	// (0x00083470) listrow_wgtman_pane_g1_ParamLimits

0x8b7f,	// (0x0008347d) listrow_wgtman_pane_g2_ParamLimits

0xfd28,	// (0x0008a626) listrow_wgtman_pane_g_ParamLimits

0x1086,	// (0x0007b984) listrow_wgtman_pane_t1_ParamLimits

0x109e,	// (0x0007b99c) listrow_wgtman_pane_t2_ParamLimits

0xfd2d,	// (0x0008a62b) listrow_wgtman_pane_t_ParamLimits

0x10c4,	// (0x0007b9c2) wait_bar_pane_cp09_ParamLimits

0x11a6,	// (0x0007baa4) bg_popup_heading_pane_cp02

0x9554,	// (0x00083e52) popup_notif_wgt_heading_pane_g1

0x955c,	// (0x00083e5a) popup_notif_wgt_heading_pane_t1

0x11a6,	// (0x0007baa4) main_vids_pane

0x11a6,	// (0x0007baa4) vids_listscroll_pane

0x956a,	// (0x00083e68) scroll_pane_cp040

0x11a6,	// (0x0007baa4) vids_list_pane

0x9575,	// (0x00083e73) vids_list_double_pane_ParamLimits

0x9575,	// (0x00083e73) vids_list_double_pane

0x9586,	// (0x00083e84) vids_list_double_pane_g1

0x958f,	// (0x00083e8d) vids_list_double_pane_t1

0x959e,	// (0x00083e9c) vids_list_double_pane_t2

0x0001,

0xfdc6,	// (0x0008a6c4) vids_list_double_pane_t

0xa52b,	// (0x00084e29) main_ncimui_pane_ParamLimits

0x6dc4,	// (0x000816c2) main_ncimui_pane_g1_ParamLimits

0x6dd0,	// (0x000816ce) main_ncimui_pane_g2_ParamLimits

0x6dd0,	// (0x000816ce) main_ncimui_pane_g2

0x0001,

0xfaab,	// (0x0008a3a9) main_ncimui_pane_g_ParamLimits

0xfaab,	// (0x0008a3a9) main_ncimui_pane_g

0x92bd,	// (0x00083bbb) main_welc_pane_g1_ParamLimits

0x92bd,	// (0x00083bbb) main_welc_pane_g1

0x92d2,	// (0x00083bd0) main_welc_pane_g2_ParamLimits

0x92d2,	// (0x00083bd0) main_welc_pane_g2

0x0003,

0xfdb0,	// (0x0008a6ae) main_welc_pane_g_ParamLimits

0xfdb0,	// (0x0008a6ae) main_welc_pane_g

0xab87,	// (0x00085485) listscroll_mce_pane_ParamLimits

0xb993,	// (0x00086291) wait_bar_pane_cp10

0xcd87,	// (0x00087685) main_cale_day_pane_ParamLimits

0xcd87,	// (0x00087685) main_cale_week_pane_ParamLimits

0xab87,	// (0x00085485) main_messa_pane_ParamLimits

0x497a,	// (0x0007f278) main_clock2_btn_pane_ParamLimits

0x497a,	// (0x0007f278) main_clock2_btn_pane

0xd694,	// (0x00087f92) main_clock2_btn_pane_cp01_ParamLimits

0xd694,	// (0x00087f92) main_clock2_btn_pane_cp01

0x8084,	// (0x00082982) list_cale_mrui_pane_ParamLimits

0x892a,	// (0x00083228) main_cf0_pane_g2

0x0001,

0xfcff,	// (0x0008a5fd) main_cf0_pane_g

0x8dea,	// (0x000836e8) area_left_week_number_pane_ParamLimits

0x8df6,	// (0x000836f4) area_top_day_name_pane_ParamLimits

0x8e09,	// (0x00083707) frame_month_view_pane_ParamLimits

0x8e1c,	// (0x0008371a) grid_month_view_pane_ParamLimits

0x8e98,	// (0x00083796) frm_month_g1_ParamLimits

0x8ea5,	// (0x000837a3) frm_month_g2_ParamLimits

0x8eb8,	// (0x000837b6) frm_month_g3_ParamLimits

0x8ecb,	// (0x000837c9) frm_month_g4_ParamLimits

0x8ede,	// (0x000837dc) frm_month_g5_ParamLimits

0x8ef1,	// (0x000837ef) frm_month_g6_ParamLimits

0x8f04,	// (0x00083802) frm_month_g7_ParamLimits

0x8f17,	// (0x00083815) frm_month_g8_ParamLimits

0x8f24,	// (0x00083822) frm_month_g9_ParamLimits

0x8f34,	// (0x00083832) frm_month_g10_ParamLimits

0x8f44,	// (0x00083842) frm_month_g11_ParamLimits

0x8f54,	// (0x00083852) frm_month_g12_ParamLimits

0x8f66,	// (0x00083864) frm_month_g13_ParamLimits

0x8f78,	// (0x00083876) frm_month_g14_ParamLimits

0x8f8c,	// (0x0008388a) frm_month_g15_ParamLimits

0x8fa0,	// (0x0008389e) frm_month_g16_ParamLimits

0xfd57,	// (0x0008a655) frm_month_g_ParamLimits

0x8fb4,	// (0x000838b2) cell_top_day_name_pane_t1_ParamLimits

0x8fc7,	// (0x000838c5) cell_area_left_week_number_pane_g1_ParamLimits

0x8fd3,	// (0x000838d1) cell_area_left_week_number_pane_t1_ParamLimits

0xac02,	// (0x00085500) cell_month_view_pane_g1_ParamLimits

0x8fe6,	// (0x000838e4) cell_month_view_pane_t1_ParamLimits

0xab7f,	// (0x0008547d) main_clock2_btn_pane_g1

0x95ae,	// (0x00083eac) main_clock2_btn_pane_t1

0xa52b,	// (0x00084e29) listscroll_cmail_pane_ParamLimits

0x7abb,	// (0x000823b9) main_sp_fs_email_pane_g1_ParamLimits

0x7ac7,	// (0x000823c5) main_sp_fs_email_pane_g2_ParamLimits

0xfba5,	// (0x0008a4a3) main_sp_fs_email_pane_g_ParamLimits

0x82ff,	// (0x00082bfd) list_recal_day_pane_ParamLimits

0x8310,	// (0x00082c0e) mian_recal_day_pane_t1

0x0e21,	// (0x0007b71f) list_single_dyc_row_text_pane_t4_ParamLimits

0x0e21,	// (0x0007b71f) list_single_dyc_row_text_pane_t4

0x0e6a,	// (0x0007b768) list_single_dyc_row_text_pane_t5_ParamLimits

0x0e6a,	// (0x0007b768) list_single_dyc_row_text_pane_t5

0xde85,	// (0x00088783) list_single_dyc_row_text_pane_t6_ParamLimits

0xde85,	// (0x00088783) list_single_dyc_row_text_pane_t6

0x2c1f,	// (0x0007d51d) aid_mgn_list_cale_time_pane

0xa52b,	// (0x00084e29) main_gallery2_pane_ParamLimits

0xd6aa,	// (0x00087fa8) main_clock2_pane_cp01_t1

0xd6b8,	// (0x00087fb6) main_clock2_pane_cp01_t3

0x0001,

0xf700,	// (0x00089ffe) main_clock2_pane_cp01_t

0x18d7,	// (0x0007c1d5) cale_week_scroll_pane_g16_ParamLimits

0x18d7,	// (0x0007c1d5) cale_week_scroll_pane_g16

0xaef5,	// (0x000857f3) vorec_slider_pane

0x9217,	// (0x00083b15) vidtel_button_pane_t1_ParamLimits

0x84aa,	// (0x00082da8) main_fs_bigclock_clock_pane_g1_ParamLimits

0x84aa,	// (0x00082da8) main_fs_bigclock_clock_pane_g2_ParamLimits

0x84bb,	// (0x00082db9) main_fs_bigclock_clock_pane_g3_ParamLimits

0x84bb,	// (0x00082db9) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcad,	// (0x0008a5ab) main_fs_bigclock_clock_pane_g_ParamLimits

0x84ce,	// (0x00082dcc) main_fs_bigclock_clock_pane_t1_ParamLimits

0x84e4,	// (0x00082de2) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcb6,	// (0x0008a5b4) main_fs_bigclock_clock_pane_t_ParamLimits

0x4256,	// (0x0007eb54) main_mup3_lyrics_pane_ParamLimits

0x4256,	// (0x0007eb54) main_mup3_lyrics_pane

0x95d4,	// (0x00083ed2) main_mup3_lyrics_pane_t1_ParamLimits

0x95d4,	// (0x00083ed2) main_mup3_lyrics_pane_t1

0xda2c,	// (0x0008832a) aid_main_mp4_pane_t1_area

0xda36,	// (0x00088334) aid_main_mp4_pane_t2_area

0xdae0,	// (0x000883de) main_mp4_pane_g7_ParamLimits

0xdae0,	// (0x000883de) main_mp4_pane_g7

0xdaec,	// (0x000883ea) main_mp4_pane_g8_ParamLimits

0xdaec,	// (0x000883ea) main_mp4_pane_g8

0x527f,	// (0x0007fb7d) aid_call6_pane_g1_size

0x9186,	// (0x00083a84) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9186,	// (0x00083a84) list_double_large_graphic_phob2_other_pane

0xb76f,	// (0x0008606d) list_double_large_graphic_phob2_other_pane_g1

0x11a6,	// (0x0007baa4) list_highlight_pane_cp026

0xa52b,	// (0x00084e29) main_welc_pane_ParamLimits

0x7a24,	// (0x00082322) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7a24,	// (0x00082322) main_sp_fs_ctrlbar_pane_g3

0x7a3e,	// (0x0008233c) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7a3e,	// (0x0008233c) main_sp_fs_ctrlbar_pane_g4

0x7a72,	// (0x00082370) toolbar2_fixed_button_pane_cp01

0x7a7d,	// (0x0008237b) toolbar2_fixed_button_pane_cp02

0x7a8a,	// (0x00082388) toolbar2_fixed_button_pane_cp03

0x9263,	// (0x00083b61) list_welc_entry_pane_ParamLimits

0x9263,	// (0x00083b61) list_welc_entry_pane

0x92e7,	// (0x00083be5) main_welc_pane_g3_ParamLimits

0x92e7,	// (0x00083be5) main_welc_pane_g3

0x9337,	// (0x00083c35) main_welc_pane_t2_ParamLimits

0x9337,	// (0x00083c35) main_welc_pane_t2

0x9352,	// (0x00083c50) main_welc_pane_t3_ParamLimits

0x9352,	// (0x00083c50) main_welc_pane_t3

0x0005,

0xfdb9,	// (0x0008a6b7) main_welc_pane_t_ParamLimits

0xfdb9,	// (0x0008a6b7) main_welc_pane_t

0x9482,	// (0x00083d80) welc_button_pane_ParamLimits

0x9482,	// (0x00083d80) welc_button_pane

0x9504,	// (0x00083e02) welc_service_logo_pane_ParamLimits

0x9504,	// (0x00083e02) welc_service_logo_pane

0x95f0,	// (0x00083eee) list_single_welc_entry_pane_ParamLimits

0x95f0,	// (0x00083eee) list_single_welc_entry_pane

0x9601,	// (0x00083eff) list_single_welc_entry_pane_g1

0x9609,	// (0x00083f07) list_single_welc_entry_pane_t1

0x9617,	// (0x00083f15) list_single_welc_entry_pane_t2

0x0001,

0xfdcb,	// (0x0008a6c9) list_single_welc_entry_pane_t

0x11a6,	// (0x0007baa4) bg_button_pane_cp035

0x9625,	// (0x00083f23) welc_button_pane_t1

0x9633,	// (0x00083f31) welc_service_logo_pane_g1

0x963c,	// (0x00083f3a) welc_service_logo_pane_g2

0x0001,

0xfdd0,	// (0x0008a6ce) welc_service_logo_pane_g

0x11a6,	// (0x0007baa4) main_int_radio_pane

0x6d65,	// (0x00081663) list_single_fs_dyc_pane_g1

0x10e2,	// (0x0007b9e0) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x10e2,	// (0x0007b9e0) list_double_large_graphic_phob2_pane_g3

0x90a5,	// (0x000839a3) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x90a5,	// (0x000839a3) list_double_large_graphic_phob2_pane_g4

0x9645,	// (0x00083f43) main_int_radio1_pane_ParamLimits

0x9645,	// (0x00083f43) main_int_radio1_pane

0x9662,	// (0x00083f60) find_pane_cp02

0x966b,	// (0x00083f69) input_focus_pane_cp12_ParamLimits

0x966b,	// (0x00083f69) input_focus_pane_cp12

0x967b,	// (0x00083f79) input_focus_pane_cp13_ParamLimits

0x967b,	// (0x00083f79) input_focus_pane_cp13

0x968f,	// (0x00083f8d) input_focus_pane_cp14_ParamLimits

0x968f,	// (0x00083f8d) input_focus_pane_cp14

0x96a3,	// (0x00083fa1) int_radio1_listscroll_pane

0x96ad,	// (0x00083fab) main_int_radio1_pane_g1_ParamLimits

0x96ad,	// (0x00083fab) main_int_radio1_pane_g1

0x96c5,	// (0x00083fc3) main_int_radio1_pane_t1_ParamLimits

0x96c5,	// (0x00083fc3) main_int_radio1_pane_t1

0x96e0,	// (0x00083fde) main_int_radio1_pane_t2_ParamLimits

0x96e0,	// (0x00083fde) main_int_radio1_pane_t2

0x96fb,	// (0x00083ff9) main_int_radio1_pane_t3_ParamLimits

0x96fb,	// (0x00083ff9) main_int_radio1_pane_t3

0x9716,	// (0x00084014) main_int_radio1_pane_t4_ParamLimits

0x9716,	// (0x00084014) main_int_radio1_pane_t4

0x9728,	// (0x00084026) main_int_radio1_pane_t5_ParamLimits

0x9728,	// (0x00084026) main_int_radio1_pane_t5

0x973a,	// (0x00084038) main_int_radio1_pane_t6_ParamLimits

0x973a,	// (0x00084038) main_int_radio1_pane_t6

0x974f,	// (0x0008404d) main_int_radio1_pane_t7_ParamLimits

0x974f,	// (0x0008404d) main_int_radio1_pane_t7

0x9764,	// (0x00084062) main_int_radio1_pane_t8_ParamLimits

0x9764,	// (0x00084062) main_int_radio1_pane_t8

0x9783,	// (0x00084081) main_int_radio1_pane_t9_ParamLimits

0x9783,	// (0x00084081) main_int_radio1_pane_t9

0x9795,	// (0x00084093) main_int_radio1_pane_t10_ParamLimits

0x9795,	// (0x00084093) main_int_radio1_pane_t10

0x97bb,	// (0x000840b9) main_int_radio1_pane_t11_ParamLimits

0x97bb,	// (0x000840b9) main_int_radio1_pane_t11

0x97e1,	// (0x000840df) main_int_radio1_pane_t12_ParamLimits

0x97e1,	// (0x000840df) main_int_radio1_pane_t12

0x000b,

0xfdd5,	// (0x0008a6d3) main_int_radio1_pane_t_ParamLimits

0xfdd5,	// (0x0008a6d3) main_int_radio1_pane_t

0x97f3,	// (0x000840f1) int_radio_list_pane

0x828e,	// (0x00082b8c) scroll_pane_cp037

0x97fb,	// (0x000840f9) list_double_large_graphic_int_radio_pane_ParamLimits

0x97fb,	// (0x000840f9) list_double_large_graphic_int_radio_pane

0x9814,	// (0x00084112) list_double_large_graphic_int_radio_pane_g1

0xe0dd,	// (0x000889db) list_double_large_graphic_int_radio_pane_t1

0xe0eb,	// (0x000889e9) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfdee,	// (0x0008a6ec) list_double_large_graphic_int_radio_pane_t

0x11a6,	// (0x0007baa4) list_highlight_pane_cp027

0x927d,	// (0x00083b7b) main_button_pane_4

0x92fa,	// (0x00083bf8) main_welc_pane_g4_ParamLimits

0x92fa,	// (0x00083bf8) main_welc_pane_g4

0x936b,	// (0x00083c69) main_welc_pane_t4_ParamLimits

0x936b,	// (0x00083c69) main_welc_pane_t4

0x9382,	// (0x00083c80) main_welc_pane_t5_ParamLimits

0x9382,	// (0x00083c80) main_welc_pane_t5

0x93bf,	// (0x00083cbd) main_welc_pane_t6_ParamLimits

0x93bf,	// (0x00083cbd) main_welc_pane_t6

0x9499,	// (0x00083d97) welc_button_pane_2_ParamLimits

0x9499,	// (0x00083d97) welc_button_pane_2

0x94b5,	// (0x00083db3) welc_button_pane_3_ParamLimits

0x94b5,	// (0x00083db3) welc_button_pane_3

0x94d4,	// (0x00083dd2) welc_button_pane_4

0x94dc,	// (0x00083dda) welc_button_pane_5_ParamLimits

0x94dc,	// (0x00083dda) welc_button_pane_5

0x11d4,	// (0x0007bad2) main_popup_welc_pane

0x9835,	// (0x00084133) main_welc_sk_g3

0x983f,	// (0x0008413d) main_welc_sk_g4

0x9849,	// (0x00084147) main_welc_sk_t3

0x9859,	// (0x00084157) main_welc_sk_t4

0x9869,	// (0x00084167) popup_welc_pane_t4

0x9877,	// (0x00084175) popup_welc_pane_t5

0x9885,	// (0x00084183) popup_welc_pane_t6

0x11a6,	// (0x0007baa4) main_acti_pane

0x11a6,	// (0x0007baa4) main_sso_pane

0x98b3,	// (0x000841b1) sso_body_pane_ParamLimits

0x98b3,	// (0x000841b1) sso_body_pane

0x98c7,	// (0x000841c5) sso_logo_pane_ParamLimits

0x98c7,	// (0x000841c5) sso_logo_pane

0x9900,	// (0x000841fe) sso_sk_pane_ParamLimits

0x9900,	// (0x000841fe) sso_sk_pane

0xe109,	// (0x00088a07) main_sso_logo_pane_g1

0x9912,	// (0x00084210) sso_sk_pane_t1_ParamLimits

0x9912,	// (0x00084210) sso_sk_pane_t1

0x992c,	// (0x0008422a) sso_sk_pane_t2_ParamLimits

0x992c,	// (0x0008422a) sso_sk_pane_t2

0x0001,

0xfdf3,	// (0x0008a6f1) sso_sk_pane_t_ParamLimits

0xfdf3,	// (0x0008a6f1) sso_sk_pane_t

0xe114,	// (0x00088a12) aid_sso_gap

0xe11d,	// (0x00088a1b) aid_sso_txt1

0xe127,	// (0x00088a25) aid_sso_txt2

0xe131,	// (0x00088a2f) aid_sso_txt3

0x0002,

0xfdf8,	// (0x0008a6f6) aid_sso_txt

0xe13b,	// (0x00088a39) aid_sso_widget

0x9996,	// (0x00084294) sso_btn_pane_ParamLimits

0x9996,	// (0x00084294) sso_btn_pane

0x9a1a,	// (0x00084318) sso_option_pane_ParamLimits

0x9a1a,	// (0x00084318) sso_option_pane

0x9ad0,	// (0x000843ce) sso_query_pane_ParamLimits

0x9ad0,	// (0x000843ce) sso_query_pane

0x9b26,	// (0x00084424) sso_query_pane_cp01_ParamLimits

0x9b26,	// (0x00084424) sso_query_pane_cp01

0x9b80,	// (0x0008447e) sso_t_hdr_pane_ParamLimits

0x9b80,	// (0x0008447e) sso_t_hdr_pane

0x9baa,	// (0x000844a8) sso_t_nml_pane_ParamLimits

0x9baa,	// (0x000844a8) sso_t_nml_pane

0xe145,	// (0x00088a43) sso_t_sub_pane

0x98d4,	// (0x000841d2) sso_popup_window_ParamLimits

0x98d4,	// (0x000841d2) sso_popup_window

0x9942,	// (0x00084240) sso_apps_pane_ParamLimits

0x9942,	// (0x00084240) sso_apps_pane

0x996c,	// (0x0008426a) sso_body_pane_g1

0x9976,	// (0x00084274) sso_body_pane_t1

0x9986,	// (0x00084284) sso_body_pane_t2

0x0001,

0xfdff,	// (0x0008a6fd) sso_body_pane_t

0x99e2,	// (0x000842e0) sso_btn_pane_cp01_ParamLimits

0x99e2,	// (0x000842e0) sso_btn_pane_cp01

0x9aa4,	// (0x000843a2) sso_prog_pane_ParamLimits

0x9aa4,	// (0x000843a2) sso_prog_pane

0x9c00,	// (0x000844fe) sso_t_hdr_pane_t1_ParamLimits

0x9c00,	// (0x000844fe) sso_t_hdr_pane_t1

0xe15a,	// (0x00088a58) input_focus_pane_cp10_ParamLimits

0xe15a,	// (0x00088a58) input_focus_pane_cp10

0xe16e,	// (0x00088a6c) sso_query_pane_t1_ParamLimits

0xe16e,	// (0x00088a6c) sso_query_pane_t1

0xe181,	// (0x00088a7f) sso_query_pane_t2_ParamLimits

0xe181,	// (0x00088a7f) sso_query_pane_t2

0xe19a,	// (0x00088a98) sso_query_pane_t3_ParamLimits

0xe19a,	// (0x00088a98) sso_query_pane_t3

0xe1c4,	// (0x00088ac2) sso_query_pane_t4_ParamLimits

0xe1c4,	// (0x00088ac2) sso_query_pane_t4

0x0003,

0xfe04,	// (0x0008a702) sso_query_pane_t_ParamLimits

0xfe04,	// (0x0008a702) sso_query_pane_t

0x982c,	// (0x0008412a) bg_button_pane_cp22

0x981d,	// (0x0008411b) sso_btn_pane_t1

0x9c13,	// (0x00084511) sso_t_nml_pane_t1_ParamLimits

0x9c13,	// (0x00084511) sso_t_nml_pane_t1

0xe1e8,	// (0x00088ae6) sso_option_row_pane_ParamLimits

0xe1e8,	// (0x00088ae6) sso_option_row_pane

0xe1f5,	// (0x00088af3) sso_t_sub_pane_t1_ParamLimits

0xe1f5,	// (0x00088af3) sso_t_sub_pane_t1

0xa52b,	// (0x00084e29) bg_popup_window_pane_cp11_ParamLimits

0xa52b,	// (0x00084e29) bg_popup_window_pane_cp11

0xe212,	// (0x00088b10) popup_sk_window_cp01_ParamLimits

0xe212,	// (0x00088b10) popup_sk_window_cp01

0xe21f,	// (0x00088b1d) sso_popup_body_pane_ParamLimits

0xe21f,	// (0x00088b1d) sso_popup_body_pane

0xe22c,	// (0x00088b2a) scroll_pane_cp21_ParamLimits

0xe22c,	// (0x00088b2a) scroll_pane_cp21

0xe239,	// (0x00088b37) sso_popup_body_t_pane_ParamLimits

0xe239,	// (0x00088b37) sso_popup_body_t_pane

0xe246,	// (0x00088b44) sso_popup_body_t_hdr_pane_ParamLimits

0xe246,	// (0x00088b44) sso_popup_body_t_hdr_pane

0x9c2e,	// (0x0008452c) sso_popup_body_t_nml_pane_ParamLimits

0x9c2e,	// (0x0008452c) sso_popup_body_t_nml_pane

0x9c55,	// (0x00084553) sso_popup_body_t_sub_pane_ParamLimits

0x9c55,	// (0x00084553) sso_popup_body_t_sub_pane

0xe258,	// (0x00088b56) sso_popup_body_t_hdr_pane_t1

0x9c78,	// (0x00084576) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9c78,	// (0x00084576) sso_popup_body_t_nml_pane_t1

0xe268,	// (0x00088b66) sso_popup_body_t_sub_pane_t1_ParamLimits

0xe268,	// (0x00088b66) sso_popup_body_t_sub_pane_t1

0xac48,	// (0x00085546) sso_prog_pane_g1

0x9cb1,	// (0x000845af) sso_apps_pane_comp1_ParamLimits

0x9cb1,	// (0x000845af) sso_apps_pane_comp1

0xe28d,	// (0x00088b8b) sso_apps_pane_comp1_g1

0xe295,	// (0x00088b93) sso_apps_pane_comp1_t1

0xe2b1,	// (0x00088baf) sso_option_row_pane_g1

0xe2b9,	// (0x00088bb7) sso_option_row_pane_t1

0x7cdc,	// (0x000825da) list_cmail_pane_ParamLimits

0x11a6,	// (0x0007baa4) main_call7_pane

0x9250,	// (0x00083b4e) bg_welc_area_ParamLimits

0x9250,	// (0x00083b4e) bg_welc_area

0x93fd,	// (0x00083cfb) sso_t_hdr_pane_a_t1_ParamLimits

0x93fd,	// (0x00083cfb) sso_t_hdr_pane_a_t1

0x9418,	// (0x00083d16) sso_t_nml_pane_a_t1_ParamLimits

0x9418,	// (0x00083d16) sso_t_nml_pane_a_t1

0x9447,	// (0x00083d45) sso_t_sub_pane_a_t1_ParamLimits

0x9447,	// (0x00083d45) sso_t_sub_pane_a_t1

0x94f2,	// (0x00083df0) welc_button_pane_cp01_ParamLimits

0x94f2,	// (0x00083df0) welc_button_pane_cp01

0x981d,	// (0x0008411b) sso_btn_pane_t1_copy1

0x982c,	// (0x0008412a) welc_button_pane_2_comp1

0x9893,	// (0x00084191) sso_t_hdr_pane_p_t1

0x98a3,	// (0x000841a1) sso_t_nml_pane_p_t1

0xe0f9,	// (0x000889f7) sso_t_sub_pane_p_t1

0x11a6,	// (0x0007baa4) main_att_pane

0x11a6,	// (0x0007baa4) main_vod_pane

0xe145,	// (0x00088a43) sso_t_sub_pane_ParamLimits

0xe2a3,	// (0x00088ba1) input_focus_pane_cp10_t1

0xe2b9,	// (0x00088bb7) sso_option_row_pane_t1_ParamLimits

0x9ccb,	// (0x000845c9) main_att_body_pane_ParamLimits

0x9ccb,	// (0x000845c9) main_att_body_pane

0x9ce1,	// (0x000845df) att_btn_emg_pane_ParamLimits

0x9ce1,	// (0x000845df) att_btn_emg_pane

0x9d00,	// (0x000845fe) att_btn_pane_ParamLimits

0x9d00,	// (0x000845fe) att_btn_pane

0x9d71,	// (0x0008466f) att_btn_pane_cp01_ParamLimits

0x9d71,	// (0x0008466f) att_btn_pane_cp01

0x9d91,	// (0x0008468f) att_li_srv_pane_ParamLimits

0x9d91,	// (0x0008468f) att_li_srv_pane

0x9dae,	// (0x000846ac) att_opt_pane_ParamLimits

0x9dae,	// (0x000846ac) att_opt_pane

0x9df8,	// (0x000846f6) att_query_pane_ParamLimits

0x9df8,	// (0x000846f6) att_query_pane

0x9e71,	// (0x0008476f) att_query_pane_cp01_ParamLimits

0x9e71,	// (0x0008476f) att_query_pane_cp01

0x9ebd,	// (0x000847bb) att_t_hdr_pane_ParamLimits

0x9ebd,	// (0x000847bb) att_t_hdr_pane

0x9f29,	// (0x00084827) att_t_nml_pane_ParamLimits

0x9f29,	// (0x00084827) att_t_nml_pane

0x9f99,	// (0x00084897) att_t_nml_pane_cp01_ParamLimits

0x9f99,	// (0x00084897) att_t_nml_pane_cp01

0x9fc5,	// (0x000848c3) att_t_nmlb_pane_ParamLimits

0x9fc5,	// (0x000848c3) att_t_nmlb_pane

0xa032,	// (0x00084930) att_term_pane_ParamLimits

0xa032,	// (0x00084930) att_term_pane

0xa07c,	// (0x0008497a) main_att_body_pane_g1_ParamLimits

0xa07c,	// (0x0008497a) main_att_body_pane_g1

0xe2d2,	// (0x00088bd0) att_t_hdr_pane_t1_ParamLimits

0xe2d2,	// (0x00088bd0) att_t_hdr_pane_t1

0xe2eb,	// (0x00088be9) att_t_nml_pane_t1_ParamLimits

0xe2eb,	// (0x00088be9) att_t_nml_pane_t1

0xe310,	// (0x00088c0e) att_btn_pane_t1

0x982c,	// (0x0008412a) bg_button_pane_cp23

0xa0a8,	// (0x000849a6) att_li_srv_row_pane_ParamLimits

0xa0a8,	// (0x000849a6) att_li_srv_row_pane

0xe320,	// (0x00088c1e) att_t_nmlb_pane_t1_ParamLimits

0xe320,	// (0x00088c1e) att_t_nmlb_pane_t1

0xe33e,	// (0x00088c3c) att_query_pane_t1

0xe34d,	// (0x00088c4b) att_query_pane_t2

0xe35c,	// (0x00088c5a) att_query_pane_t3

0x0002,

0xfe0d,	// (0x0008a70b) att_query_pane_t

0xe36b,	// (0x00088c69) input_focus_pane_cp11

0xe374,	// (0x00088c72) att_term_pane_t1_ParamLimits

0xe374,	// (0x00088c72) att_term_pane_t1

0x11a6,	// (0x0007baa4) att_opt_row_pane

0xe2b1,	// (0x00088baf) att_opt_row_pane_g1

0xe391,	// (0x00088c8f) att_opt_row_pane_t1_ParamLimits

0xe391,	// (0x00088c8f) att_opt_row_pane_t1

0xa0b8,	// (0x000849b6) att_li_srv_row_pane_g1

0xa0c0,	// (0x000849be) att_li_srv_row_pane_t1_ParamLimits

0xa0c0,	// (0x000849be) att_li_srv_row_pane_t1

0xa0d5,	// (0x000849d3) att_li_srv_row_pane_t2_ParamLimits

0xa0d5,	// (0x000849d3) att_li_srv_row_pane_t2

0x0001,

0xfe14,	// (0x0008a712) att_li_srv_row_pane_t_ParamLimits

0xfe14,	// (0x0008a712) att_li_srv_row_pane_t

0xe3aa,	// (0x00088ca8) att_btn_close_pane_g1

0x11a6,	// (0x0007baa4) bg_button_pane_cp24

0xa0ea,	// (0x000849e8) main_vod_body_pane_ParamLimits

0xa0ea,	// (0x000849e8) main_vod_body_pane

0xa0fe,	// (0x000849fc) main_vod_body_pane_g1_ParamLimits

0xa0fe,	// (0x000849fc) main_vod_body_pane_g1

0xa132,	// (0x00084a30) scroll_pane_cp24_ParamLimits

0xa132,	// (0x00084a30) scroll_pane_cp24

0xa180,	// (0x00084a7e) vod_btn_pane_ParamLimits

0xa180,	// (0x00084a7e) vod_btn_pane

0xa1c2,	// (0x00084ac0) vod_det_pane_ParamLimits

0xa1c2,	// (0x00084ac0) vod_det_pane

0xa1f2,	// (0x00084af0) vod_logo_g1_ParamLimits

0xa1f2,	// (0x00084af0) vod_logo_g1

0xa230,	// (0x00084b2e) vod_opt_pane_ParamLimits

0xa230,	// (0x00084b2e) vod_opt_pane

0xa263,	// (0x00084b61) vod_opt_pane_cp01_ParamLimits

0xa263,	// (0x00084b61) vod_opt_pane_cp01

0xa28f,	// (0x00084b8d) vod_query_pane_ParamLimits

0xa28f,	// (0x00084b8d) vod_query_pane

0xa2ba,	// (0x00084bb8) vod_query_pane_cp01_ParamLimits

0xa2ba,	// (0x00084bb8) vod_query_pane_cp01

0xa2c6,	// (0x00084bc4) vod_t_nml_pane_ParamLimits

0xa2c6,	// (0x00084bc4) vod_t_nml_pane

0xa36f,	// (0x00084c6d) vod_t_nml_pane_cp01_ParamLimits

0xa36f,	// (0x00084c6d) vod_t_nml_pane_cp01

0xa3ab,	// (0x00084ca9) vod_t_sub_pane_ParamLimits

0xa3ab,	// (0x00084ca9) vod_t_sub_pane

0xa3dc,	// (0x00084cda) vod_t_sub_pane_cp01_ParamLimits

0xa3dc,	// (0x00084cda) vod_t_sub_pane_cp01

0xe36b,	// (0x00088c69) vod_query_field_pane

0xe3b2,	// (0x00088cb0) vod_query_pane_t1

0x982c,	// (0x0008412a) bg_button_pane_cp25

0x981d,	// (0x0008411b) sso_btn_pane_t1_copy2

0xa408,	// (0x00084d06) vod_t_nml_pane_t1_ParamLimits

0xa408,	// (0x00084d06) vod_t_nml_pane_t1

0xe3c1,	// (0x00088cbf) vod_opt_row_pane_ParamLimits

0xe3c1,	// (0x00088cbf) vod_opt_row_pane

0xe3d3,	// (0x00088cd1) vod_t_sub_pane_t1_ParamLimits

0xe3d3,	// (0x00088cd1) vod_t_sub_pane_t1

0xe3ec,	// (0x00088cea) vod_det_cell_pane_ParamLimits

0xe3ec,	// (0x00088cea) vod_det_cell_pane

0x11a6,	// (0x0007baa4) input_focus_pane_cp15

0xe3fd,	// (0x00088cfb) vod_query_field_pane_t1

0xe40b,	// (0x00088d09) vod_opt_row_pane_g1_ParamLimits

0xe40b,	// (0x00088d09) vod_opt_row_pane_g1

0xe417,	// (0x00088d15) vod_opt_row_pane_t1_ParamLimits

0xe417,	// (0x00088d15) vod_opt_row_pane_t1

0xe436,	// (0x00088d34) vod_det_cell_field_pane

0xe43f,	// (0x00088d3d) vod_det_cell_pane_g1

0xe447,	// (0x00088d45) vod_det_cell_pane_t1

0x11a6,	// (0x0007baa4) input_focus_pane_cp16

0xe456,	// (0x00088d54) vod_det_cell_field_pane_t1

0x8989,	// (0x00083287) call7_btn_grp_pane_ParamLimits

0x8989,	// (0x00083287) call7_btn_grp_pane

0xa437,	// (0x00084d35) call7_bubble_pane_ParamLimits

0xa437,	// (0x00084d35) call7_bubble_pane

0xa44e,	// (0x00084d4c) cell_call7_btn_pane_ParamLimits

0xa44e,	// (0x00084d4c) cell_call7_btn_pane

0xa462,	// (0x00084d60) call7_pane_g1_ParamLimits

0xa462,	// (0x00084d60) call7_pane_g1

0xa471,	// (0x00084d6f) call7_windows_conf_pane_ParamLimits

0xa471,	// (0x00084d6f) call7_windows_conf_pane

0xa48b,	// (0x00084d89) popup_call7_1st_window_ParamLimits

0xa48b,	// (0x00084d89) popup_call7_1st_window

0xa49c,	// (0x00084d9a) popup_call7_2nd_window_ParamLimits

0xa49c,	// (0x00084d9a) popup_call7_2nd_window

0xa4ad,	// (0x00084dab) popup_call7_3rd_window_ParamLimits

0xa4ad,	// (0x00084dab) popup_call7_3rd_window

0x11a6,	// (0x0007baa4) bg_button_pane_cp26

0x8a59,	// (0x00083357) cell_call7_btn_pane_g1

0x8a62,	// (0x00083360) cell_call7_btn_pane_t1

0x11a6,	// (0x0007baa4) bg_popup_window_pane_cp12

0xe464,	// (0x00088d62) popup_call7_1st_window_g1

0xe46c,	// (0x00088d6a) popup_call7_1st_window_g2

0xe474,	// (0x00088d72) popup_call7_1st_window_g3

0x0002,

0xfe19,	// (0x0008a717) popup_call7_1st_window_g

0xe47c,	// (0x00088d7a) popup_call7_1st_window_t1

0xe48b,	// (0x00088d89) popup_call7_1st_window_t2

0xe499,	// (0x00088d97) popup_call7_1st_window_t3

0x0002,

0xfe20,	// (0x0008a71e) popup_call7_1st_window_t

0x11a6,	// (0x0007baa4) bg_popup_window_pane_cp13

0xe4a7,	// (0x00088da5) popup_call7_2nd_window_g1

0xe4af,	// (0x00088dad) popup_call7_2nd_window_g2

0xe4b7,	// (0x00088db5) popup_call7_2nd_window_g3

0x0002,

0xfe27,	// (0x0008a725) popup_call7_2nd_window_g

0xe4bf,	// (0x00088dbd) popup_call7_2nd_window_t1

0x11a6,	// (0x0007baa4) bg_popup_window_pane_cp14

0xe4ce,	// (0x00088dcc) call7_list_conf_pane

0xe4d6,	// (0x00088dd4) call7_list_conf_row_pane_ParamLimits

0xe4d6,	// (0x00088dd4) call7_list_conf_row_pane

0xe4e9,	// (0x00088de7) call7_list_conf_row_pane_g1

0xe4f1,	// (0x00088def) call7_list_conf_row_pane_g2

0x0001,

0xfe2e,	// (0x0008a72c) call7_list_conf_row_pane_g

0xe4f9,	// (0x00088df7) call7_list_conf_row_pane_t1

0x11a6,	// (0x0007baa4) list_highlight_pane_cp22

0x9a70,	// (0x0008436e) sso_option_pane_cp01_ParamLimits

0x9a70,	// (0x0008436e) sso_option_pane_cp01

0xab87,	// (0x00085485) msg_header_pane_ParamLimits

0xbb31,	// (0x0008642f) bg_button_pane_cp01_ParamLimits

0xbb45,	// (0x00086443) input_focus_pane_cp07_ParamLimits

0x7af6,	// (0x000823f4) popup_email_progress_window

0xac48,	// (0x00085546) popup_email_progress_window_g1

0xe507,	// (0x00088e05) popup_email_progress_window_g2

0x0001,

0xfe33,	// (0x0008a731) popup_email_progress_window_g

0xe50f,	// (0x00088e0d) popup_email_progress_window_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
