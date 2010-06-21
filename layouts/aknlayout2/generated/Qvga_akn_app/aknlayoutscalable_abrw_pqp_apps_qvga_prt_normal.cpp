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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00016aeb };

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
0x85bd,	// (0x0001f0a8) Screen

0x85c7,	// (0x0001f0b2) application_window

0x85d1,	// (0x0001f0bc) area_bottom_pane_ParamLimits

0x85d1,	// (0x0001f0bc) area_bottom_pane

0x6d64,	// (0x0001d84f) area_top_pane_ParamLimits

0x6d64,	// (0x0001d84f) area_top_pane

0x6dc0,	// (0x0001d8ab) call_video_uplink_pane_ParamLimits

0x6dc0,	// (0x0001d8ab) call_video_uplink_pane

0x6dfb,	// (0x0001d8e6) main_pane_ParamLimits

0x6dfb,	// (0x0001d8e6) main_pane

0x2da3,	// (0x0001988e) context_pane

0xaeaa,	// (0x00021995) navi_pane

0xaec4,	// (0x000219af) popup_cale_events_window_ParamLimits

0xaec4,	// (0x000219af) popup_cale_events_window

0x2db6,	// (0x000198a1) popup_mup_playback_window

0xaedb,	// (0x000219c6) signal_pane

0x0b00,	// (0x000175eb) main_browser_pane

0x0d6f,	// (0x0001785a) main_burst_pane

0x6f24,	// (0x0001da0f) main_calc_pane

0x2d2f,	// (0x0001981a) main_cale_day_pane

0x895d,	// (0x0001f448) main_cale_month_pane

0x2d2f,	// (0x0001981a) main_cale_week_pane

0x0d6f,	// (0x0001785a) main_call_pane

0x07ba,	// (0x000172a5) main_call_poc_pane

0x0d6f,	// (0x0001785a) main_camera_pane

0x0d6f,	// (0x0001785a) main_chi_dic_pane

0x1604,	// (0x000180ef) main_clock_pane

0x07ba,	// (0x000172a5) main_fmradio_pane

0x0d6f,	// (0x0001785a) main_graph_messa_pane

0x07ba,	// (0x000172a5) main_help_pane

0x0b00,	// (0x000175eb) main_im_pane

0x0a15,	// (0x00017500) main_image_pane_ParamLimits

0x0a15,	// (0x00017500) main_image_pane

0x07ba,	// (0x000172a5) main_location2_pane

0x0d6f,	// (0x0001785a) main_location_pane

0x0a15,	// (0x00017500) main_messa_pane

0x07ba,	// (0x000172a5) main_mp2_pane

0x0d6f,	// (0x0001785a) main_mp_pane

0x07ba,	// (0x000172a5) main_msg_pane

0x07ba,	// (0x000172a5) main_mup_eq_pane

0x07ba,	// (0x000172a5) main_mup_pane

0x0b00,	// (0x000175eb) main_notes_pane

0x07ba,	// (0x000172a5) main_pec_pane

0x07ba,	// (0x000172a5) main_phob_pane

0x07ba,	// (0x000172a5) main_pinb_pane

0x07ba,	// (0x000172a5) main_postcard_pane

0x07ba,	// (0x000172a5) main_qdial_pane

0x0d6f,	// (0x0001785a) main_skin_pane

0x07ba,	// (0x000172a5) main_smil2_pane

0x0d6f,	// (0x0001785a) main_smil_pane

0x0d6f,	// (0x0001785a) main_video_pane

0x0d6f,	// (0x0001785a) main_video_tele_pane

0x0a15,	// (0x00017500) main_viewer_pane_ParamLimits

0x0a15,	// (0x00017500) main_viewer_pane

0x0d6f,	// (0x0001785a) main_vorec_pane

0x747a,	// (0x0001df65) popup_blid_sat_info_window_ParamLimits

0x747a,	// (0x0001df65) popup_blid_sat_info_window

0x7496,	// (0x0001df81) popup_dyc_status_message_window_ParamLimits

0x7496,	// (0x0001df81) popup_dyc_status_message_window

0x74a2,	// (0x0001df8d) popup_grid_large_graphic_window_ParamLimits

0x74a2,	// (0x0001df8d) popup_grid_large_graphic_window

0x7513,	// (0x0001dffe) popup_loc_request_window_ParamLimits

0x7513,	// (0x0001dffe) popup_loc_request_window

0x7556,	// (0x0001e041) popup_wml_address_window_ParamLimits

0x7556,	// (0x0001e041) popup_wml_address_window

0xadc0,	// (0x000218ab) call_muted_g1

0xaafb,	// (0x000215e6) popup_call_audio_conf_window_ParamLimits

0xaafb,	// (0x000215e6) popup_call_audio_conf_window

0xadd0,	// (0x000218bb) popup_call_audio_first_window_ParamLimits

0xadd0,	// (0x000218bb) popup_call_audio_first_window

0xae04,	// (0x000218ef) popup_call_audio_in_window_ParamLimits

0xae04,	// (0x000218ef) popup_call_audio_in_window

0xae20,	// (0x0002190b) popup_call_audio_out_window_ParamLimits

0xae20,	// (0x0002190b) popup_call_audio_out_window

0xae3c,	// (0x00021927) popup_call_audio_second_window_ParamLimits

0xae3c,	// (0x00021927) popup_call_audio_second_window

0xae64,	// (0x0002194f) popup_call_audio_wait_window_ParamLimits

0xae64,	// (0x0002194f) popup_call_audio_wait_window

0xae83,	// (0x0002196e) popup_number_entry_window_ParamLimits

0xae83,	// (0x0002196e) popup_number_entry_window

0x03a9,	// (0x00016e94) bg_popup_call_pane_cp05_ParamLimits

0x03a9,	// (0x00016e94) bg_popup_call_pane_cp05

0x03c9,	// (0x00016eb4) popup_number_entry_window_t1

0x03dc,	// (0x00016ec7) popup_number_entry_window_t2

0x03ee,	// (0x00016ed9) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x00025bb1) popup_number_entry_window_t

0x0400,	// (0x00016eeb) text_title_cp2

0x0413,	// (0x00016efe) bg_popup_call_pane_cp_ParamLimits

0x0413,	// (0x00016efe) bg_popup_call_pane_cp

0x0421,	// (0x00016f0c) call_thumbnail_pane

0x0429,	// (0x00016f14) popup_call_audio_in_window_g1_ParamLimits

0x0429,	// (0x00016f14) popup_call_audio_in_window_g1

0x0435,	// (0x00016f20) popup_call_audio_in_window_g2_ParamLimits

0x0435,	// (0x00016f20) popup_call_audio_in_window_g2

0x0441,	// (0x00016f2c) popup_call_audio_in_window_g3_ParamLimits

0x0441,	// (0x00016f2c) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x00025bba) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x00025bba) popup_call_audio_in_window_g

0x044d,	// (0x00016f38) popup_call_audio_in_window_t1_ParamLimits

0x044d,	// (0x00016f38) popup_call_audio_in_window_t1

0x0468,	// (0x00016f53) popup_call_audio_in_window_t2_ParamLimits

0x0468,	// (0x00016f53) popup_call_audio_in_window_t2

0x0483,	// (0x00016f6e) popup_call_audio_in_window_t3_ParamLimits

0x0483,	// (0x00016f6e) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x00025bc1) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x00025bc1) popup_call_audio_in_window_t

0x0413,	// (0x00016efe) bg_popup_call_pane_cp01_ParamLimits

0x0413,	// (0x00016efe) bg_popup_call_pane_cp01

0x0421,	// (0x00016f0c) call_thumbnail_pane_cp02

0x0496,	// (0x00016f81) call_type_pane_cp022

0x049e,	// (0x00016f89) popup_call_audio_out_window_g1_ParamLimits

0x049e,	// (0x00016f89) popup_call_audio_out_window_g1

0x04b0,	// (0x00016f9b) popup_call_audio_out_window_g2_ParamLimits

0x04b0,	// (0x00016f9b) popup_call_audio_out_window_g2

0x04bc,	// (0x00016fa7) popup_call_audio_out_window_g3_ParamLimits

0x04bc,	// (0x00016fa7) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x00025bc8) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x00025bc8) popup_call_audio_out_window_g

0x04ce,	// (0x00016fb9) popup_call_audio_out_window_t1_ParamLimits

0x04ce,	// (0x00016fb9) popup_call_audio_out_window_t1

0x04e6,	// (0x00016fd1) popup_call_audio_out_window_t2_ParamLimits

0x04e6,	// (0x00016fd1) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x00025bcf) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x00025bcf) popup_call_audio_out_window_t

0x04fb,	// (0x00016fe6) bg_popup_call_pane_ParamLimits

0x04fb,	// (0x00016fe6) bg_popup_call_pane

0x863d,	// (0x0001f128) call_thumbnail_pane_cp_ParamLimits

0x863d,	// (0x0001f128) call_thumbnail_pane_cp

0x057f,	// (0x0001706a) call_type_pane_cp01_ParamLimits

0x057f,	// (0x0001706a) call_type_pane_cp01

0x05c3,	// (0x000170ae) popup_call_audio_first_window_g1_ParamLimits

0x05c3,	// (0x000170ae) popup_call_audio_first_window_g1

0x060f,	// (0x000170fa) popup_call_audio_first_window_g2_ParamLimits

0x060f,	// (0x000170fa) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x00025bd4) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x00025bd4) popup_call_audio_first_window_g

0x0653,	// (0x0001713e) popup_call_audio_first_window_t1_ParamLimits

0x0653,	// (0x0001713e) popup_call_audio_first_window_t1

0x06ff,	// (0x000171ea) popup_call_audio_first_window_t4_ParamLimits

0x06ff,	// (0x000171ea) popup_call_audio_first_window_t4

0x078b,	// (0x00017276) popup_call_audio_first_window_t5_ParamLimits

0x078b,	// (0x00017276) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x00025bd9) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x00025bd9) popup_call_audio_first_window_t

0x07ba,	// (0x000172a5) bg_popup_call_pane_cp02

0x07c4,	// (0x000172af) call_type_pane_cp023

0x07cc,	// (0x000172b7) popup_call_audio_wait_window_g1

0x07d4,	// (0x000172bf) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x00025be0) popup_call_audio_wait_window_g

0x07dc,	// (0x000172c7) popup_call_audio_wait_window_t3

0x07ea,	// (0x000172d5) bg_popup_call_pane_cp03_ParamLimits

0x07ea,	// (0x000172d5) bg_popup_call_pane_cp03

0x084a,	// (0x00017335) call_thumbnail_pane_cp011_ParamLimits

0x084a,	// (0x00017335) call_thumbnail_pane_cp011

0x0856,	// (0x00017341) call_type_pane_cp034_ParamLimits

0x0856,	// (0x00017341) call_type_pane_cp034

0x0892,	// (0x0001737d) popup_call_audio_second_window_g1_ParamLimits

0x0892,	// (0x0001737d) popup_call_audio_second_window_g1

0x08ce,	// (0x000173b9) popup_call_audio_second_window_g2_ParamLimits

0x08ce,	// (0x000173b9) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x00025be5) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x00025be5) popup_call_audio_second_window_g

0x090a,	// (0x000173f5) popup_call_audio_second_window_t1_ParamLimits

0x090a,	// (0x000173f5) popup_call_audio_second_window_t1

0x098b,	// (0x00017476) popup_call_audio_second_window_t2_ParamLimits

0x098b,	// (0x00017476) popup_call_audio_second_window_t2

0x09c1,	// (0x000174ac) popup_call_audio_second_window_t3_ParamLimits

0x09c1,	// (0x000174ac) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x00025bea) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x00025bea) popup_call_audio_second_window_t

0x07ba,	// (0x000172a5) bg_popup_call_pane_cp04

0x09f7,	// (0x000174e2) list_conf_pane

0x09ff,	// (0x000174ea) popup_call_audio_conf_window_t1

0x0a0d,	// (0x000174f8) call_thumbnail_pane_g1

0x0a15,	// (0x00017500) bg_pinb_pane_ParamLimits

0x0a15,	// (0x00017500) bg_pinb_pane

0x0a23,	// (0x0001750e) find_pinb_pane

0x0a2c,	// (0x00017517) listscroll_pinb_pane_ParamLimits

0x0a2c,	// (0x00017517) listscroll_pinb_pane

0x0a3b,	// (0x00017526) pinb_bg_pane_g1

0x8661,	// (0x0001f14c) pinb_bg_pane_g2

0x866b,	// (0x0001f156) pinb_bg_pane_g3

0x8675,	// (0x0001f160) pinb_bg_pane_g4

0x867f,	// (0x0001f16a) pinb_bg_pane_g5

0x8689,	// (0x0001f174) pinb_bg_pane_g6

0x8694,	// (0x0001f17f) pinb_bg_pane_g7

0x869f,	// (0x0001f18a) pinb_bg_pane_g8

0x86a8,	// (0x0001f193) pinb_bg_pane_g9

0x86b0,	// (0x0001f19b) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x00025bf1) pinb_bg_pane_g

0x86cd,	// (0x0001f1b8) grid_pinb_pane

0x86d6,	// (0x0001f1c1) list_pinb_pane

0x86e1,	// (0x0001f1cc) scroll_pane_cp01_ParamLimits

0x86e1,	// (0x0001f1cc) scroll_pane_cp01

0x0a45,	// (0x00017530) find_pinb_pane_g1_ParamLimits

0x0a45,	// (0x00017530) find_pinb_pane_g1

0x0a5d,	// (0x00017548) find_pinb_pane_t1

0x0a6f,	// (0x0001755a) find_pinb_pane_t2

0x0001,

0xf120,	// (0x00025c0b) find_pinb_pane_t

0x0a84,	// (0x0001756f) input_focus_pane_cp01_ParamLimits

0x0a84,	// (0x0001756f) input_focus_pane_cp01

0x86f1,	// (0x0001f1dc) cell_pinb_pane_ParamLimits

0x86f1,	// (0x0001f1dc) cell_pinb_pane

0x870a,	// (0x0001f1f5) cell_pinb_pane_g1_ParamLimits

0x870a,	// (0x0001f1f5) cell_pinb_pane_g1

0x871e,	// (0x0001f209) cell_pinb_pane_g2_ParamLimits

0x871e,	// (0x0001f209) cell_pinb_pane_g2

0x0a90,	// (0x0001757b) cell_pinb_pane_g3_ParamLimits

0x0a90,	// (0x0001757b) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x00025c10) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x00025c10) cell_pinb_pane_g

0x07ba,	// (0x000172a5) grid_highlight_pane_cp01

0x872a,	// (0x0001f215) list_pinb_item_pane_ParamLimits

0x872a,	// (0x0001f215) list_pinb_item_pane

0x07ba,	// (0x000172a5) list_highlight_pane_cp02

0x873f,	// (0x0001f22a) list_pinb_item_pane_g1_ParamLimits

0x873f,	// (0x0001f22a) list_pinb_item_pane_g1

0x874c,	// (0x0001f237) list_pinb_item_pane_g2_ParamLimits

0x874c,	// (0x0001f237) list_pinb_item_pane_g2

0x8758,	// (0x0001f243) list_pinb_item_pane_g3_ParamLimits

0x8758,	// (0x0001f243) list_pinb_item_pane_g3

0x8767,	// (0x0001f252) list_pinb_item_pane_g4_ParamLimits

0x8767,	// (0x0001f252) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x00025c17) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x00025c17) list_pinb_item_pane_g

0x8773,	// (0x0001f25e) list_pinb_item_pane_t1_ParamLimits

0x8773,	// (0x0001f25e) list_pinb_item_pane_t1

0x6fa3,	// (0x0001da8e) calc_display_pane

0x6fbb,	// (0x0001daa6) calc_paper_pane

0x6fd7,	// (0x0001dac2) grid_calc_pane

0x07ba,	// (0x000172a5) bg_list_pane_cp01

0x878a,	// (0x0001f275) clock_g1

0x8792,	// (0x0001f27d) clock_g2

0x0001,

0xf135,	// (0x00025c20) clock_g

0x879a,	// (0x0001f285) clock_t1_ParamLimits

0x879a,	// (0x0001f285) clock_t1

0x87af,	// (0x0001f29a) clock_t2_ParamLimits

0x87af,	// (0x0001f29a) clock_t2

0x87c1,	// (0x0001f2ac) clock_t3_ParamLimits

0x87c1,	// (0x0001f2ac) clock_t3

0x87d3,	// (0x0001f2be) clock_t4_ParamLimits

0x87d3,	// (0x0001f2be) clock_t4

0x87e5,	// (0x0001f2d0) clock_t5_ParamLimits

0x87e5,	// (0x0001f2d0) clock_t5

0x87fa,	// (0x0001f2e5) clock_t6_ParamLimits

0x87fa,	// (0x0001f2e5) clock_t6

0x880c,	// (0x0001f2f7) clock_t7_ParamLimits

0x880c,	// (0x0001f2f7) clock_t7

0x881e,	// (0x0001f309) clock_t8_ParamLimits

0x881e,	// (0x0001f309) clock_t8

0x8830,	// (0x0001f31b) clock_t9_ParamLimits

0x8830,	// (0x0001f31b) clock_t9

0x0008,

0xf13a,	// (0x00025c25) clock_t_ParamLimits

0xf13a,	// (0x00025c25) clock_t

0x0aa4,	// (0x0001758f) popup_clock_analogue_window_cp02

0x0aa4,	// (0x0001758f) popup_clock_digital_window_cp01

0x0aac,	// (0x00017597) listscroll_help_pane

0x07ba,	// (0x000172a5) phob_pre_status_pane

0x0ab6,	// (0x000175a1) grid_qdial_pane

0x0a15,	// (0x00017500) listscroll_mce_pane

0x0a15,	// (0x00017500) bg_notes_pane

0x0ac0,	// (0x000175ab) list_notes_pane

0x8842,	// (0x0001f32d) scroll_pane_cp06

0x0ace,	// (0x000175b9) bg_calc_paper_pane

0x6ff7,	// (0x0001dae2) list_calc_pane

0x0b00,	// (0x000175eb) bg_calc_display_pane

0x7011,	// (0x0001dafc) calc_display_pane_t1

0x7026,	// (0x0001db11) calc_display_pane_t2

0x703b,	// (0x0001db26) calc_display_pane_t3

0x0002,

0xf14d,	// (0x00025c38) calc_display_pane_t

0x704d,	// (0x0001db38) cell_calc_pane_ParamLimits

0x704d,	// (0x0001db38) cell_calc_pane

0x0b48,	// (0x00017633) bg_calc_paper_pane_g1

0x0b60,	// (0x0001764b) bg_calc_paper_pane_g2

0x0b54,	// (0x0001763f) bg_calc_paper_pane_g3

0x0b78,	// (0x00017663) bg_calc_paper_pane_g4

0x0b6c,	// (0x00017657) bg_calc_paper_pane_g5

0x884f,	// (0x0001f33a) bg_calc_paper_pane_g6

0x885e,	// (0x0001f349) bg_calc_paper_pane_g7

0x886d,	// (0x0001f358) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x00025c3f) bg_calc_paper_pane_g

0x887c,	// (0x0001f367) calc_bg_paper_pane_g9

0x888b,	// (0x0001f376) list_calc_item_pane_ParamLimits

0x888b,	// (0x0001f376) list_calc_item_pane

0x0b84,	// (0x0001766f) list_calc_item_pane_g1

0x7074,	// (0x0001db5f) list_calc_item_pane_t1_ParamLimits

0x7074,	// (0x0001db5f) list_calc_item_pane_t1

0x7086,	// (0x0001db71) list_calc_item_pane_t2_ParamLimits

0x7086,	// (0x0001db71) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x00025c50) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x00025c50) list_calc_item_pane_t

0x0ba3,	// (0x0001768e) cell_calc_pane_g1

0x0bad,	// (0x00017698) grid_highlight_pane_cp02

0x0be2,	// (0x000176cd) bg_calc_display_pane_g1

0x70b4,	// (0x0001db9f) bg_calc_display_pane_g2

0x0bcf,	// (0x000176ba) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x00025c5a) bg_calc_display_pane_g

0x70be,	// (0x0001dba9) cell_qdial_pane_ParamLimits

0x70be,	// (0x0001dba9) cell_qdial_pane

0x88a4,	// (0x0001f38f) cell_qdial_pane_g1_ParamLimits

0x88a4,	// (0x0001f38f) cell_qdial_pane_g1

0x88b1,	// (0x0001f39c) cell_qdial_pane_g2_ParamLimits

0x88b1,	// (0x0001f39c) cell_qdial_pane_g2

0x0beb,	// (0x000176d6) cell_qdial_pane_g3_ParamLimits

0x0beb,	// (0x000176d6) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x00025c61) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x00025c61) cell_qdial_pane_g

0x88cf,	// (0x0001f3ba) cell_qdial_pane_t1_ParamLimits

0x88cf,	// (0x0001f3ba) cell_qdial_pane_t1

0x88e7,	// (0x0001f3d2) cell_qdial_pane_t2_ParamLimits

0x88e7,	// (0x0001f3d2) cell_qdial_pane_t2

0x88fa,	// (0x0001f3e5) cell_qdial_pane_t3_ParamLimits

0x88fa,	// (0x0001f3e5) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x00025c6a) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x00025c6a) cell_qdial_pane_t

0x07ba,	// (0x000172a5) grid_highlight_pane_cp04

0x0bf7,	// (0x000176e2) thumbnail_qdial_pane_ParamLimits

0x0bf7,	// (0x000176e2) thumbnail_qdial_pane

0x0c53,	// (0x0001773e) list_help_pane

0x0c5d,	// (0x00017748) scroll_pane_cp02

0x890d,	// (0x0001f3f8) help_list_pane_t1_ParamLimits

0x890d,	// (0x0001f3f8) help_list_pane_t1

0x70d0,	// (0x0001dbbb) bg_notes_pane_g2

0x70d8,	// (0x0001dbc3) bg_notes_pane_g3

0x70e0,	// (0x0001dbcb) notes_bg_pane_g1

0x70e8,	// (0x0001dbd3) notes_bg_pane_g4

0x70f0,	// (0x0001dbdb) notes_bg_pane_g5

0x70f8,	// (0x0001dbe3) notes_bg_pane_g6

0x7100,	// (0x0001dbeb) notes_bg_pane_g7

0x7108,	// (0x0001dbf3) notes_bg_pane_g8

0x7110,	// (0x0001dbfb) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x00025c88) notes_bg_pane_g

0x892b,	// (0x0001f416) list_notes_text_pane_ParamLimits

0x892b,	// (0x0001f416) list_notes_text_pane

0x0cae,	// (0x00017799) list_notes_text_pane_g1

0x894f,	// (0x0001f43a) list_notes_text_pane_t1

0x895d,	// (0x0001f448) listscroll_cale_week_pane

0x8982,	// (0x0001f46d) bg_cale_heading_pane

0x0cd1,	// (0x000177bc) bg_cale_pane_cp01

0x899a,	// (0x0001f485) cale_week_corner_pane

0x89b4,	// (0x0001f49f) cale_week_day_heading_pane

0x89cc,	// (0x0001f4b7) cale_week_scroll_pane_g1

0x89df,	// (0x0001f4ca) cale_week_scroll_pane_g2

0x89f2,	// (0x0001f4dd) cale_week_scroll_pane_g3

0x8a05,	// (0x0001f4f0) cale_week_scroll_pane_g4

0x8a18,	// (0x0001f503) cale_week_scroll_pane_g5

0x8a2b,	// (0x0001f516) cale_week_scroll_pane_g6

0x8a3e,	// (0x0001f529) cale_week_scroll_pane_g7

0x8a51,	// (0x0001f53c) cale_week_scroll_pane_g8

0x8a64,	// (0x0001f54f) cale_week_scroll_pane_g9

0x8a77,	// (0x0001f562) cale_week_scroll_pane_g10

0x8a8a,	// (0x0001f575) cale_week_scroll_pane_g11

0x8a9d,	// (0x0001f588) cale_week_scroll_pane_g12

0x8ab0,	// (0x0001f59b) cale_week_scroll_pane_g13

0x8ac3,	// (0x0001f5ae) cale_week_scroll_pane_g14

0x8ad6,	// (0x0001f5c1) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x00025c97) cale_week_scroll_pane_g

0x8afc,	// (0x0001f5e7) cale_week_time_pane

0x8b0f,	// (0x0001f5fa) grid_cale_week_pane

0x0d00,	// (0x000177eb) scroll_pane_cp08

0x8b24,	// (0x0001f60f) cell_cale_week_pane_ParamLimits

0x8b24,	// (0x0001f60f) cell_cale_week_pane

0x8b72,	// (0x0001f65d) cale_week_day_heading_pane_t1

0x8bad,	// (0x0001f698) cale_week_day_heading_pane_t2

0x8be8,	// (0x0001f6d3) cale_week_day_heading_pane_t3

0x8c23,	// (0x0001f70e) cale_week_day_heading_pane_t4

0x8c5e,	// (0x0001f749) cale_week_day_heading_pane_t5

0x8c99,	// (0x0001f784) cale_week_day_heading_pane_t6

0x8cd4,	// (0x0001f7bf) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x00025cb8) cale_week_day_heading_pane_t

0x0d1d,	// (0x00017808) bg_cale_side_pane

0x7118,	// (0x0001dc03) cale_week_time_pane_t1

0x7152,	// (0x0001dc3d) cale_week_time_pane_t2

0x718c,	// (0x0001dc77) cale_week_time_pane_t3

0x71c6,	// (0x0001dcb1) cale_week_time_pane_t4

0x7200,	// (0x0001dceb) cale_week_time_pane_t5

0x723a,	// (0x0001dd25) cale_week_time_pane_t6

0x7274,	// (0x0001dd5f) cale_week_time_pane_t7

0x72ae,	// (0x0001dd99) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x00025cc7) cale_week_time_pane_t

0x8d0f,	// (0x0001f7fa) cell_cale_week_pane_g2

0x8d33,	// (0x0001f81e) cell_cale_week_pane_g3_ParamLimits

0x8d33,	// (0x0001f81e) cell_cale_week_pane_g3

0x0d2b,	// (0x00017816) grid_highlight_pane_cp07

0x0d33,	// (0x0001781e) listscroll_gms_pane

0x0d3d,	// (0x00017828) grid_gms_pane

0x0d46,	// (0x00017831) listscroll_gms_pane_g1

0x0d4e,	// (0x00017839) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x00025cd8) listscroll_gms_pane_g

0x8d4b,	// (0x0001f836) scroll_pane_cp010

0x8d54,	// (0x0001f83f) cell_gms_pane_ParamLimits

0x8d54,	// (0x0001f83f) cell_gms_pane

0x8d65,	// (0x0001f850) cell_gms_pane_g1

0x0d56,	// (0x00017841) cell_gms_pane_g2

0x0cae,	// (0x00017799) cell_gms_pane_g3

0x0d5e,	// (0x00017849) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x00025cdd) cell_gms_pane_g

0x0d67,	// (0x00017852) grid_highlight_pane_cp09

0xad6e,	// (0x00021859) phob_pre_status_pane_g1

0xad76,	// (0x00021861) phob_pre_status_pane_g2

0xad7e,	// (0x00021869) phob_pre_status_pane_g3

0xad86,	// (0x00021871) phob_pre_status_pane_g4

0x0004,

0xf5f0,	// (0x000260db) phob_pre_status_pane_g

0xad96,	// (0x00021881) phob_pre_status_pane_t1

0xada4,	// (0x0002188f) phob_pre_status_pane_t2

0xadb2,	// (0x0002189d) phob_pre_status_pane_t3

0x0002,

0xf5fb,	// (0x000260e6) phob_pre_status_pane_t

0x0d6f,	// (0x0001785a) bg_list_pane_cp05

0x8d6d,	// (0x0001f858) grid_vorec_pane

0x0d77,	// (0x00017862) vorec_t1

0x0d85,	// (0x00017870) vorec_t2

0x0d93,	// (0x0001787e) vorec_t3

0x8d75,	// (0x0001f860) vorec_t4

0x8599,	// (0x0001f084) vorec_t5

0x85a7,	// (0x0001f092) vorec_t6

0x0004,

0xf1fb,	// (0x00025ce6) vorec_t

0x85b5,	// (0x0001f0a0) wait_bar_pane_cp01

0x1c48,	// (0x00018733) cell_vorec_pane_ParamLimits

0x1c48,	// (0x00018733) cell_vorec_pane

0x72e8,	// (0x0001ddd3) cell_vorec_pane_g1

0x07ba,	// (0x000172a5) grid_highlight_pane_cp05

0x8d8f,	// (0x0001f87a) cams_zoom_pane

0x8d9b,	// (0x0001f886) image_vga_pane

0x8da8,	// (0x0001f893) main_camera_pane_g1

0x8db4,	// (0x0001f89f) main_camera_pane_g2

0x8dc0,	// (0x0001f8ab) main_camera_pane_g3

0x8dcc,	// (0x0001f8b7) main_camera_pane_g4

0x8dd8,	// (0x0001f8c3) main_camera_pane_g5

0x8de4,	// (0x0001f8cf) main_camera_pane_g6

0x8df0,	// (0x0001f8db) main_camera_pane_g7

0x0007,

0xf206,	// (0x00025cf1) main_camera_pane_g

0x8dfc,	// (0x0001f8e7) main_camera_pane_t1

0x8e0e,	// (0x0001f8f9) main_camera_pane_t2

0x0001,

0xf217,	// (0x00025d02) main_camera_pane_t

0x8e32,	// (0x0001f91d) cams_zoom_pane_cp_ParamLimits

0x8e32,	// (0x0001f91d) cams_zoom_pane_cp

0x8e56,	// (0x0001f941) image_cif_pane_ParamLimits

0x8e56,	// (0x0001f941) image_cif_pane

0x8e70,	// (0x0001f95b) image_subqcif_pane

0x8e78,	// (0x0001f963) main_video_pane_g1_ParamLimits

0x8e78,	// (0x0001f963) main_video_pane_g1

0x8e98,	// (0x0001f983) main_video_pane_g2_ParamLimits

0x8e98,	// (0x0001f983) main_video_pane_g2

0x8ec6,	// (0x0001f9b1) main_video_pane_g3_ParamLimits

0x8ec6,	// (0x0001f9b1) main_video_pane_g3

0x8eef,	// (0x0001f9da) main_video_pane_g4_ParamLimits

0x8eef,	// (0x0001f9da) main_video_pane_g4

0x8f18,	// (0x0001fa03) main_video_pane_g5_ParamLimits

0x8f18,	// (0x0001fa03) main_video_pane_g5

0x0dc5,	// (0x000178b0) main_video_pane_g6_ParamLimits

0x0dc5,	// (0x000178b0) main_video_pane_g6

0x0006,

0xf21c,	// (0x00025d07) main_video_pane_g_ParamLimits

0xf21c,	// (0x00025d07) main_video_pane_g

0x8f3a,	// (0x0001fa25) main_video_pane_t1_ParamLimits

0x8f3a,	// (0x0001fa25) main_video_pane_t1

0x0ddf,	// (0x000178ca) cams_zoom_pane_g1

0x0de8,	// (0x000178d3) cams_zoom_pane_g2

0x0df1,	// (0x000178dc) cams_zoom_pane_g3

0x0dfa,	// (0x000178e5) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x00025d16) cams_zoom_pane_g

0x8f84,	// (0x0001fa6f) grid_cams_pane

0x8f90,	// (0x0001fa7b) linegrid_cams_pane

0x8f9c,	// (0x0001fa87) cell_cams_pane_ParamLimits

0x8f9c,	// (0x0001fa87) cell_cams_pane

0x0e03,	// (0x000178ee) cams_burst_image_pane

0x0e0b,	// (0x000178f6) cell_cams_pane_g1

0x07ba,	// (0x000172a5) grid_highlight_pane_cp03

0x0ba3,	// (0x0001768e) mp_bg_pane_g1

0x07ba,	// (0x000172a5) bg_list_pane_cp03

0x2c54,	// (0x0001973f) bg_mp_pane

0x2c5c,	// (0x00019747) grid_mp_pane

0x2c64,	// (0x0001974f) media_player_g1

0x2c6c,	// (0x00019757) media_player_t1

0x2c7a,	// (0x00019765) media_player_t2

0x2c88,	// (0x00019773) media_player_t3

0x2c96,	// (0x00019781) media_player_t4

0x2ca4,	// (0x0001978f) media_player_t5

0x2cb2,	// (0x0001979d) media_player_t6

0x2cc0,	// (0x000197ab) media_player_t7

0x0006,

0xf5da,	// (0x000260c5) media_player_t

0x2cce,	// (0x000197b9) wait_bar_pane_cp02

0xf5bf,	// (0x000260aa) main_usb_pane_t

0xad65,	// (0x00021850) cell_mp_pane

0x0ba3,	// (0x0001768e) cell_mp_pane_g1

0x07ba,	// (0x000172a5) grid_highlight_pane_cp06

0x0e13,	// (0x000178fe) grid_skin_colour_pane

0x0e1b,	// (0x00017906) list_highlight_pane_cp03

0x90a5,	// (0x0001fb90) skin_g1

0x0e23,	// (0x0001790e) skin_t1

0x0e32,	// (0x0001791d) skin_t2

0x0001,

0xf260,	// (0x00025d4b) skin_t

0x90ad,	// (0x0001fb98) cell_skin_colour_pane_ParamLimits

0x90ad,	// (0x0001fb98) cell_skin_colour_pane

0x0e40,	// (0x0001792b) cell_skin_colour_pane_g1

0x9123,	// (0x0001fc0e) call_video_g1_ParamLimits

0x9123,	// (0x0001fc0e) call_video_g1

0x912f,	// (0x0001fc1a) call_video_g2_ParamLimits

0x912f,	// (0x0001fc1a) call_video_g2

0x0001,

0xf265,	// (0x00025d50) call_video_g_ParamLimits

0xf265,	// (0x00025d50) call_video_g

0x917f,	// (0x0001fc6a) call_video_uplink_pane_cp1_ParamLimits

0x917f,	// (0x0001fc6a) call_video_uplink_pane_cp1

0x0e52,	// (0x0001793d) call_video_uplink_pane_cp2

0x923b,	// (0x0001fd26) video_down_crop_pane_ParamLimits

0x923b,	// (0x0001fd26) video_down_crop_pane

0x9305,	// (0x0001fdf0) video_down_pane_ParamLimits

0x9305,	// (0x0001fdf0) video_down_pane

0x0e5a,	// (0x00017945) video_down_subqcif_pane_ParamLimits

0x0e5a,	// (0x00017945) video_down_subqcif_pane

0x0e72,	// (0x0001795d) video_down_subqcif_pane_cp_ParamLimits

0x0e72,	// (0x0001795d) video_down_subqcif_pane_cp

0x0e96,	// (0x00017981) im_reading_pane_ParamLimits

0x0e96,	// (0x00017981) im_reading_pane

0x93d1,	// (0x0001febc) im_writing_pane_ParamLimits

0x93d1,	// (0x0001febc) im_writing_pane

0x93e7,	// (0x0001fed2) im_reading_pane_t1

0x0eb0,	// (0x0001799b) list_im_pane

0x0ec1,	// (0x000179ac) scroll_pane_cp07

0x941f,	// (0x0001ff0a) im_writing_pane_t1_ParamLimits

0x941f,	// (0x0001ff0a) im_writing_pane_t1

0x0eda,	// (0x000179c5) im_writing_pane_t2_ParamLimits

0x0eda,	// (0x000179c5) im_writing_pane_t2

0x0001,

0xf26f,	// (0x00025d5a) im_writing_pane_t_ParamLimits

0xf26f,	// (0x00025d5a) im_writing_pane_t

0x07ba,	// (0x000172a5) input_focus_pane_cp04

0x07ba,	// (0x000172a5) input_focus_pane_cp05

0x9434,	// (0x0001ff1f) list_im_single_pane_ParamLimits

0x9434,	// (0x0001ff1f) list_im_single_pane

0x0ef7,	// (0x000179e2) list_single_im_pane_t1

0xad2b,	// (0x00021816) blid_accuracy_pane

0xad33,	// (0x0002181e) blid_compass_pane

0xad3b,	// (0x00021826) main_location_t1

0xad49,	// (0x00021834) main_location_t2

0xad57,	// (0x00021842) main_location_t3

0x0002,

0xf5e9,	// (0x000260d4) main_location_t

0x07ba,	// (0x000172a5) aid_levels_location

0x0ba3,	// (0x0001768e) blid_accuracy_pane_g1

0x0ba3,	// (0x0001768e) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x00025dbc) blid_accuracy_pane_g

0x0f31,	// (0x00017a1c) wml_content_pane

0x0f6f,	// (0x00017a5a) wml_button_pane_ParamLimits

0x0f6f,	// (0x00017a5a) wml_button_pane

0x944c,	// (0x0001ff37) wml_list_single_large_pane_ParamLimits

0x944c,	// (0x0001ff37) wml_list_single_large_pane

0x9463,	// (0x0001ff4e) wml_list_single_medium_pane_ParamLimits

0x9463,	// (0x0001ff4e) wml_list_single_medium_pane

0x947b,	// (0x0001ff66) wml_list_single_small_pane_ParamLimits

0x947b,	// (0x0001ff66) wml_list_single_small_pane

0x0f83,	// (0x00017a6e) wml_selection_box_pane_ParamLimits

0x0f83,	// (0x00017a6e) wml_selection_box_pane

0x0f96,	// (0x00017a81) wml_list_single_pane_t1

0x0fa5,	// (0x00017a90) wml_list_single_medium_pane_t1

0x0fb4,	// (0x00017a9f) wml_list_single_large_pane_t1

0x0fc3,	// (0x00017aae) input_focus_pane_cp02_ParamLimits

0x0fc3,	// (0x00017aae) input_focus_pane_cp02

0x0fd6,	// (0x00017ac1) wml_selection_box_pane_g1

0x0fdf,	// (0x00017aca) wml_selection_box_pane_t1_ParamLimits

0x0fdf,	// (0x00017aca) wml_selection_box_pane_t1

0x0a15,	// (0x00017500) bg_wml_button_pane_ParamLimits

0x0a15,	// (0x00017500) bg_wml_button_pane

0x0ff7,	// (0x00017ae2) wml_button_pane_g1

0x0fff,	// (0x00017aea) wml_button_pane_t1

0x0ff7,	// (0x00017ae2) wml_button_bg_pane_g1

0x100f,	// (0x00017afa) wml_button_bg_pane_g2

0x1017,	// (0x00017b02) wml_button_bg_pane_g3

0x101f,	// (0x00017b0a) wml_button_bg_pane_g4

0x1027,	// (0x00017b12) wml_button_bg_pane_g5

0x102f,	// (0x00017b1a) wml_button_bg_pane_g6

0x1037,	// (0x00017b22) wml_button_bg_pane_g7

0x103f,	// (0x00017b2a) wml_button_bg_pane_g8

0x1047,	// (0x00017b32) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x00025d5f) wml_button_bg_pane_g

0x9496,	// (0x0001ff81) bg_list_pane_cp02

0x104f,	// (0x00017b3a) mce_header_pane_ParamLimits

0x104f,	// (0x00017b3a) mce_header_pane

0x1063,	// (0x00017b4e) mce_icon_pane

0x1063,	// (0x00017b4e) mce_image_pane

0x106c,	// (0x00017b57) mce_text_pane_ParamLimits

0x106c,	// (0x00017b57) mce_text_pane

0x949f,	// (0x0001ff8a) scroll_pane_cp03

0x949f,	// (0x0001ff8a) scroll_pane_cp04

0x1080,	// (0x00017b6b) scroll_pane_cp05_ParamLimits

0x1080,	// (0x00017b6b) scroll_pane_cp05

0x94a7,	// (0x0001ff92) mce_header_field_pane_ParamLimits

0x94a7,	// (0x0001ff92) mce_header_field_pane

0x94c7,	// (0x0001ffb2) mce_header_field_pane_2_ParamLimits

0x94c7,	// (0x0001ffb2) mce_header_field_pane_2

0x94dd,	// (0x0001ffc8) mce_header_field_pane_3

0x94e5,	// (0x0001ffd0) list_single_mce_message_pane_ParamLimits

0x94e5,	// (0x0001ffd0) list_single_mce_message_pane

0x94fc,	// (0x0001ffe7) list_single_mce_smart_pane_ParamLimits

0x94fc,	// (0x0001ffe7) list_single_mce_smart_pane

0x108c,	// (0x00017b77) input_focus_pane_cp03

0x1095,	// (0x00017b80) list_header_data_pane

0x951e,	// (0x00020009) mce_header_field_pane_t1

0x952c,	// (0x00020017) list_single_mce_header_pane_ParamLimits

0x952c,	// (0x00020017) list_single_mce_header_pane

0x109d,	// (0x00017b88) list_single_mce_header_pane_t1

0x10ac,	// (0x00017b97) list_single_mce_message_pane_g1

0x10b5,	// (0x00017ba0) list_single_mce_message_pane_t1

0x956a,	// (0x00020055) bg_cale_heading_pane_cp01_ParamLimits

0x956a,	// (0x00020055) bg_cale_heading_pane_cp01

0x10c4,	// (0x00017baf) bg_cale_pane_cp02_ParamLimits

0x10c4,	// (0x00017baf) bg_cale_pane_cp02

0x9599,	// (0x00020084) cale_month_corner_pane

0x95b3,	// (0x0002009e) cale_month_day_heading_pane_ParamLimits

0x95b3,	// (0x0002009e) cale_month_day_heading_pane

0x95e2,	// (0x000200cd) cale_month_pane_g1_ParamLimits

0x95e2,	// (0x000200cd) cale_month_pane_g1

0x9606,	// (0x000200f1) cale_month_pane_g2_ParamLimits

0x9606,	// (0x000200f1) cale_month_pane_g2

0x9625,	// (0x00020110) cale_month_pane_g3_ParamLimits

0x9625,	// (0x00020110) cale_month_pane_g3

0x9661,	// (0x0002014c) cale_month_pane_g4_ParamLimits

0x9661,	// (0x0002014c) cale_month_pane_g4

0x969d,	// (0x00020188) cale_month_pane_g5_ParamLimits

0x969d,	// (0x00020188) cale_month_pane_g5

0x96d9,	// (0x000201c4) cale_month_pane_g6_ParamLimits

0x96d9,	// (0x000201c4) cale_month_pane_g6

0x9715,	// (0x00020200) cale_month_pane_g7_ParamLimits

0x9715,	// (0x00020200) cale_month_pane_g7

0x9751,	// (0x0002023c) cale_month_pane_g8_ParamLimits

0x9751,	// (0x0002023c) cale_month_pane_g8

0x978d,	// (0x00020278) cale_month_pane_g9_ParamLimits

0x978d,	// (0x00020278) cale_month_pane_g9

0x97c7,	// (0x000202b2) cale_month_pane_g10_ParamLimits

0x97c7,	// (0x000202b2) cale_month_pane_g10

0x9801,	// (0x000202ec) cale_month_pane_g11_ParamLimits

0x9801,	// (0x000202ec) cale_month_pane_g11

0x983b,	// (0x00020326) cale_month_pane_g12_ParamLimits

0x983b,	// (0x00020326) cale_month_pane_g12

0x9875,	// (0x00020360) cale_month_pane_g13_ParamLimits

0x9875,	// (0x00020360) cale_month_pane_g13

0x000c,

0xf287,	// (0x00025d72) cale_month_pane_g_ParamLimits

0xf287,	// (0x00025d72) cale_month_pane_g

0x98af,	// (0x0002039a) cale_month_week_pane

0x98c2,	// (0x000203ad) grid_cale_month_pane_ParamLimits

0x98c2,	// (0x000203ad) grid_cale_month_pane

0x98e8,	// (0x000203d3) cale_month_day_heading_pane_t1

0x996e,	// (0x00020459) cale_month_day_heading_pane_t2

0x99ff,	// (0x000204ea) cale_month_day_heading_pane_t3

0x9a90,	// (0x0002057b) cale_month_day_heading_pane_t4

0x9b21,	// (0x0002060c) cale_month_day_heading_pane_t5

0x9bb2,	// (0x0002069d) cale_month_day_heading_pane_t6

0x9c43,	// (0x0002072e) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x00025d8d) cale_month_day_heading_pane_t

0x0d1d,	// (0x00017808) bg_cale_side_pane_cp01

0x9cd4,	// (0x000207bf) cale_month_week_pane_t1

0x9d0d,	// (0x000207f8) cale_month_week_pane_t2

0x9d46,	// (0x00020831) cale_month_week_pane_t3

0x9d7f,	// (0x0002086a) cale_month_week_pane_t4

0x9db8,	// (0x000208a3) cale_month_week_pane_t5

0x9df1,	// (0x000208dc) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x00025d9c) cale_month_week_pane_t

0x9e2a,	// (0x00020915) cell_cale_month_pane_ParamLimits

0x9e2a,	// (0x00020915) cell_cale_month_pane

0x72f2,	// (0x0001dddd) cell_cale_month_pane_g1

0x72fe,	// (0x0001dde9) cell_cale_month_pane_t1_ParamLimits

0x72fe,	// (0x0001dde9) cell_cale_month_pane_t1

0x0d2b,	// (0x00017816) grid_highlight_pane_cp08

0x0ba3,	// (0x0001768e) main_smil_g1

0x9f42,	// (0x00020a2d) smil_status_pane

0x110f,	// (0x00017bfa) smil_text_pane

0x2b34,	// (0x0001961f) bg_popup_call3_rect_pane_g8

0x2b3c,	// (0x00019627) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x00026055) bg_popup_call3_rect_pane_g

0x2e30,	// (0x0001991b) smil_status_volume_pane_g1

0x9f53,	// (0x00020a3e) smil_status_pane_t1

0x7589,	// (0x0001e074) volume_smil_pane

0x1119,	// (0x00017c04) list_smil_text_pane

0x9f6a,	// (0x00020a55) scroll_pane_cp011

0x9f73,	// (0x00020a5e) smil_text_list_pane_t1_ParamLimits

0x9f73,	// (0x00020a5e) smil_text_list_pane_t1

0x731e,	// (0x0001de09) aid_volume_smil_ParamLimits

0x731e,	// (0x0001de09) aid_volume_smil

0x0ba3,	// (0x0001768e) smil_volume_pane_g1

0x0ba3,	// (0x0001768e) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x00025dbc) smil_volume_pane_g

0x895d,	// (0x0001f448) listscroll_cale_day_pane

0x1145,	// (0x00017c30) bg_cale_pane

0x115d,	// (0x00017c48) list_cale_pane

0x1180,	// (0x00017c6b) scroll_pane_cp09

0x1191,	// (0x00017c7c) cale_bg_pane_g1

0x1199,	// (0x00017c84) cale_bg_pane_g2

0x11a1,	// (0x00017c8c) cale_bg_pane_g3

0x11a9,	// (0x00017c94) cale_bg_pane_g4

0x11b1,	// (0x00017c9c) cale_bg_pane_g5

0x11b9,	// (0x00017ca4) cale_bg_pane_g6

0x11c1,	// (0x00017cac) cale_bg_pane_g7

0x11c9,	// (0x00017cb4) cale_bg_pane_g8

0x11d1,	// (0x00017cbc) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x00025dc1) cale_bg_pane_g

0x9fba,	// (0x00020aa5) list_cale_time_pane_ParamLimits

0x9fba,	// (0x00020aa5) list_cale_time_pane

0x11d9,	// (0x00017cc4) list_cale_time_pane_g1_ParamLimits

0x11d9,	// (0x00017cc4) list_cale_time_pane_g1

0x11e5,	// (0x00017cd0) list_cale_time_pane_g2_ParamLimits

0x11e5,	// (0x00017cd0) list_cale_time_pane_g2

0x9fce,	// (0x00020ab9) list_cale_time_pane_g3_ParamLimits

0x9fce,	// (0x00020ab9) list_cale_time_pane_g3

0x9fda,	// (0x00020ac5) list_cale_time_pane_g4_ParamLimits

0x9fda,	// (0x00020ac5) list_cale_time_pane_g4

0x9fe6,	// (0x00020ad1) list_cale_time_pane_g5_ParamLimits

0x9fe6,	// (0x00020ad1) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x00025dd4) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x00025dd4) list_cale_time_pane_g

0x11ff,	// (0x00017cea) list_cale_time_pane_t1_ParamLimits

0x11ff,	// (0x00017cea) list_cale_time_pane_t1

0x1227,	// (0x00017d12) list_cale_time_pane_t2_ParamLimits

0x1227,	// (0x00017d12) list_cale_time_pane_t2

0xa328,	// (0x00020e13) aid_blid_cardinal_pane

0xa366,	// (0x00020e51) compass_pane_t4

0x124f,	// (0x00017d3a) list_cale_time_pane_t4_ParamLimits

0x124f,	// (0x00017d3a) list_cale_time_pane_t4

0xa374,	// (0x00020e5f) compass_pane_t5

0xa382,	// (0x00020e6d) compass_pane_t6

0xa390,	// (0x00020e7b) compass_pane_t7

0x1729,	// (0x00018214) navi_pane_cc_t1

0x18e0,	// (0x000183cb) aid_phob_thumbnail_center_pane

0xa8d8,	// (0x000213c3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x00025de1) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x00025de1) list_cale_time_pane_t

0x0413,	// (0x00016efe) bg_popup_window_pane_cp02_ParamLimits

0x0413,	// (0x00016efe) bg_popup_window_pane_cp02

0x1277,	// (0x00017d62) heading_pane_cp01_ParamLimits

0x1277,	// (0x00017d62) heading_pane_cp01

0x1283,	// (0x00017d6e) loc_req_pane_ParamLimits

0x1283,	// (0x00017d6e) loc_req_pane

0x1293,	// (0x00017d7e) loc_type_pane_ParamLimits

0x1293,	// (0x00017d7e) loc_type_pane

0x12a5,	// (0x00017d90) loc_type_pane_t1_ParamLimits

0x12a5,	// (0x00017d90) loc_type_pane_t1

0x12b7,	// (0x00017da2) loc_type_pane_t2_ParamLimits

0x12b7,	// (0x00017da2) loc_type_pane_t2

0x12c9,	// (0x00017db4) loc_type_pane_t3_ParamLimits

0x12c9,	// (0x00017db4) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x00025de8) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x00025de8) loc_type_pane_t

0x12db,	// (0x00017dc6) list_loc_req_pane

0x12e5,	// (0x00017dd0) scroll_pane_cp012

0x9ff2,	// (0x00020add) list_single_loc_request_popup_menu_pane_ParamLimits

0x9ff2,	// (0x00020add) list_single_loc_request_popup_menu_pane

0x12ee,	// (0x00017dd9) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x12ee,	// (0x00017dd9) list_single_loc_request_popup_menu_pane_g1

0x12fa,	// (0x00017de5) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x12fa,	// (0x00017de5) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x00025def) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x00025def) list_single_loc_request_popup_menu_pane_g

0x1306,	// (0x00017df1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1306,	// (0x00017df1) list_single_loc_request_popup_menu_pane_t1

0xa004,	// (0x00020aef) bg_popup_window_pane_cp03_ParamLimits

0xa004,	// (0x00020aef) bg_popup_window_pane_cp03

0xa012,	// (0x00020afd) heading_loc_req_pane_ParamLimits

0xa012,	// (0x00020afd) heading_loc_req_pane

0xa01e,	// (0x00020b09) popup_dyc_status_message_window_g1_ParamLimits

0xa01e,	// (0x00020b09) popup_dyc_status_message_window_g1

0xa02a,	// (0x00020b15) popup_dyc_status_message_window_t1_ParamLimits

0xa02a,	// (0x00020b15) popup_dyc_status_message_window_t1

0xa03c,	// (0x00020b27) popup_dyc_status_message_window_t2_ParamLimits

0xa03c,	// (0x00020b27) popup_dyc_status_message_window_t2

0xa04e,	// (0x00020b39) popup_dyc_status_message_window_t3_ParamLimits

0xa04e,	// (0x00020b39) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x00025df4) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x00025df4) popup_dyc_status_message_window_t

0x07ba,	// (0x000172a5) bg_heading_pane_cp01

0x1328,	// (0x00017e13) heading_loc_req_pane_g1

0x1330,	// (0x00017e1b) heading_loc_req_pane_g2

0x1338,	// (0x00017e23) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x00025dfb) heading_loc_req_pane_g

0x1340,	// (0x00017e2b) heading_loc_req_pane_t1

0x134f,	// (0x00017e3a) bg_popup_sub_pane_cp01_ParamLimits

0x134f,	// (0x00017e3a) bg_popup_sub_pane_cp01

0x135d,	// (0x00017e48) popup_cale_events_window_g1_ParamLimits

0x135d,	// (0x00017e48) popup_cale_events_window_g1

0x137d,	// (0x00017e68) popup_cale_events_window_g2_ParamLimits

0x137d,	// (0x00017e68) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x00025e2f) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x00025e2f) popup_cale_events_window_g

0x139d,	// (0x00017e88) popup_cale_events_window_t1_ParamLimits

0x139d,	// (0x00017e88) popup_cale_events_window_t1

0x13af,	// (0x00017e9a) popup_cale_events_window_t2_ParamLimits

0x13af,	// (0x00017e9a) popup_cale_events_window_t2

0x13ed,	// (0x00017ed8) popup_cale_events_window_t3_ParamLimits

0x13ed,	// (0x00017ed8) popup_cale_events_window_t3

0x1427,	// (0x00017f12) popup_cale_events_window_t4_ParamLimits

0x1427,	// (0x00017f12) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x00025e34) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x00025e34) popup_cale_events_window_t

0xa16e,	// (0x00020c59) call_type_pane

0x18f8,	// (0x000183e3) popup_call_status_window_g1

0xa17a,	// (0x00020c65) popup_call_status_window_g2

0xa186,	// (0x00020c71) popup_call_status_window_g3

0x0002,

0xf352,	// (0x00025e3d) popup_call_status_window_g

0x145d,	// (0x00017f48) call_type_pane_g1

0x1466,	// (0x00017f51) call_type_pane_g2

0x0001,

0xf359,	// (0x00025e44) call_type_pane_g

0x07ba,	// (0x000172a5) bg_popup_sub_pane_cp02

0x146f,	// (0x00017f5a) listscroll_popup_wml_pane

0x1477,	// (0x00017f62) list_wml_pane

0x1481,	// (0x00017f6c) scroll_pane_cp013

0xa192,	// (0x00020c7d) list_single_graphic_popup_wml_pane_ParamLimits

0xa192,	// (0x00020c7d) list_single_graphic_popup_wml_pane

0x0ba3,	// (0x0001768e) list_single_graphic_popup_wml_pane_g1

0x148a,	// (0x00017f75) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x00025e49) list_single_graphic_popup_wml_pane_g

0x1492,	// (0x00017f7d) list_single_graphic_popup_wml_pane_t1

0x14a0,	// (0x00017f8b) aid_call_pane

0x0a0d,	// (0x000174f8) popup_clock_analogue_window_g1

0x0a0d,	// (0x000174f8) popup_clock_analogue_window_g2

0x7340,	// (0x0001de2b) popup_clock_analogue_window_g3

0x7340,	// (0x0001de2b) popup_clock_analogue_window_g4

0x0ba3,	// (0x0001768e) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x00025e4e) popup_clock_analogue_window_g

0x7348,	// (0x0001de33) popup_clock_analogue_window_t1

0x7356,	// (0x0001de41) clock_digital_number_pane_ParamLimits

0x7356,	// (0x0001de41) clock_digital_number_pane

0x7362,	// (0x0001de4d) clock_digital_number_pane_cp02_ParamLimits

0x7362,	// (0x0001de4d) clock_digital_number_pane_cp02

0x736e,	// (0x0001de59) clock_digital_number_pane_cp03_ParamLimits

0x736e,	// (0x0001de59) clock_digital_number_pane_cp03

0x737a,	// (0x0001de65) clock_digital_number_pane_cp04_ParamLimits

0x737a,	// (0x0001de65) clock_digital_number_pane_cp04

0x7386,	// (0x0001de71) clock_digital_separator_pane_ParamLimits

0x7386,	// (0x0001de71) clock_digital_separator_pane

0x7392,	// (0x0001de7d) popup_clock_digital_window_t1

0x0ba3,	// (0x0001768e) clock_digital_number_pane_g1

0x0ba3,	// (0x0001768e) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x00025dbc) clock_digital_number_pane_g

0x0ba3,	// (0x0001768e) clock_digital_separator_pane_g1

0x0ba3,	// (0x0001768e) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x00025dbc) clock_digital_separator_pane_g

0x07ba,	// (0x000172a5) bg_popup_window_pane_cp04

0x151f,	// (0x0001800a) heading_pane_cp03

0x1527,	// (0x00018012) listscroll_popup_gms_pane

0x152f,	// (0x0001801a) grid_large_graphic_popup_pane

0x1539,	// (0x00018024) listscroll_popup_gms_pane_g1

0x1541,	// (0x0001802c) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x00025e59) listscroll_popup_gms_pane_g

0x0f67,	// (0x00017a52) scroll_pane_cp014

0xa1a6,	// (0x00020c91) cell_large_graphic_popup_pane_ParamLimits

0xa1a6,	// (0x00020c91) cell_large_graphic_popup_pane

0xa1bd,	// (0x00020ca8) cell_large_graphic_popup_pane_g1_ParamLimits

0xa1bd,	// (0x00020ca8) cell_large_graphic_popup_pane_g1

0x1549,	// (0x00018034) cell_large_graphic_popup_pane_g2_ParamLimits

0x1549,	// (0x00018034) cell_large_graphic_popup_pane_g2

0x1555,	// (0x00018040) cell_large_graphic_popup_pane_g3_ParamLimits

0x1555,	// (0x00018040) cell_large_graphic_popup_pane_g3

0x1562,	// (0x0001804d) cell_large_graphic_popup_pane_g4_ParamLimits

0x1562,	// (0x0001804d) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x00025e5e) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x00025e5e) cell_large_graphic_popup_pane_g

0x1572,	// (0x0001805d) grid_highlight_pane_cp010

0x0ba3,	// (0x0001768e) bg_popup_call_pane_g1

0x157c,	// (0x00018067) list_single_graphic_popup_conf_pane_ParamLimits

0x157c,	// (0x00018067) list_single_graphic_popup_conf_pane

0x158f,	// (0x0001807a) list_highlight_pane_cp01

0x1598,	// (0x00018083) list_single_graphic_popup_conf_pane_g1

0x15a0,	// (0x0001808b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x00025e67) list_single_graphic_popup_conf_pane_g

0x15a8,	// (0x00018093) list_single_graphic_popup_conf_pane_t1

0x15b6,	// (0x000180a1) linegrid_cams_pane_g1

0xa1c9,	// (0x00020cb4) linegrid_cams_pane_g2

0x0cae,	// (0x00017799) linegrid_cams_pane_g3

0x15bf,	// (0x000180aa) linegrid_cams_pane_g4

0xa1d2,	// (0x00020cbd) linegrid_cams_pane_g5

0xa1db,	// (0x00020cc6) linegrid_cams_pane_g6

0x0d5e,	// (0x00017849) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x00025e6c) linegrid_cams_pane_g

0x15c8,	// (0x000180b3) popup_clock_analogue_window

0x15c8,	// (0x000180b3) popup_clock_digital_window

0x07ba,	// (0x000172a5) popup_phob_thumbnail_window

0x0ba3,	// (0x0001768e) call_video_uplink_pane_g1

0x15d1,	// (0x000180bc) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x00025e7b) call_video_uplink_pane_g

0x0d2b,	// (0x00017816) video_uplink_pane

0x15d9,	// (0x000180c4) mce_image_pane_g1

0xa1e4,	// (0x00020ccf) mce_image_pane_g2

0xa1ec,	// (0x00020cd7) mce_image_pane_g3

0xa1f4,	// (0x00020cdf) mce_image_pane_g4

0xa1fc,	// (0x00020ce7) mce_image_pane_g5

0x0004,

0xf395,	// (0x00025e80) mce_image_pane_g

0x15e3,	// (0x000180ce) control_top_pane_stacon_cp01_ParamLimits

0x15e3,	// (0x000180ce) control_top_pane_stacon_cp01

0x15f3,	// (0x000180de) uni_indicator_pane_stacon_cp01_ParamLimits

0x15f3,	// (0x000180de) uni_indicator_pane_stacon_cp01

0x1604,	// (0x000180ef) bg_popup_sub_pane_cp03

0x160e,	// (0x000180f9) chi_dic_find_pane

0xa204,	// (0x00020cef) listscroll_chi_dic_pane

0x1616,	// (0x00018101) main_pane_chidic_g1

0x161e,	// (0x00018109) chi_dic_find_pane_t1

0x162c,	// (0x00018117) find_chidic_pane

0x1635,	// (0x00018120) chi_dic_list_pane_ParamLimits

0x1635,	// (0x00018120) chi_dic_list_pane

0x1646,	// (0x00018131) scroll_pane_cp020

0x164e,	// (0x00018139) find_chidic_pane_t1

0x07ba,	// (0x000172a5) input_focus_pane_cp06

0xa216,	// (0x00020d01) list_chi_dic_pane_ParamLimits

0xa216,	// (0x00020d01) list_chi_dic_pane

0xa229,	// (0x00020d14) list_chi_dic_pane_t1_ParamLimits

0xa229,	// (0x00020d14) list_chi_dic_pane_t1

0x07ba,	// (0x000172a5) list_highlight_pane_cp020

0x165d,	// (0x00018148) bg_cale_heading_pane_g1

0xa23c,	// (0x00020d27) bg_cale_heading_pane_g2

0xa244,	// (0x00020d2f) bg_cale_heading_pane_g3

0xa24c,	// (0x00020d37) bg_cale_heading_pane_g4

0xa254,	// (0x00020d3f) bg_cale_heading_pane_g5

0xa25c,	// (0x00020d47) bg_cale_heading_pane_g6

0xa264,	// (0x00020d4f) bg_cale_heading_pane_g7

0xa26c,	// (0x00020d57) bg_cale_heading_pane_g8

0xa274,	// (0x00020d5f) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x00025e8b) bg_cale_heading_pane_g

0x165d,	// (0x00018148) bg_cale_side_pane_g1

0xa27c,	// (0x00020d67) bg_cale_side_pane_g2

0xa284,	// (0x00020d6f) bg_cale_side_pane_g3

0xa28c,	// (0x00020d77) bg_cale_side_pane_g4

0xa294,	// (0x00020d7f) bg_cale_side_pane_g5

0xa29c,	// (0x00020d87) bg_cale_side_pane_g6

0xa2a4,	// (0x00020d8f) bg_cale_side_pane_g7

0xa2ac,	// (0x00020d97) bg_cale_side_pane_g8

0xa2b4,	// (0x00020d9f) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x00025e9e) bg_cale_side_pane_g

0xa2bc,	// (0x00020da7) popup_call_status_window_ParamLimits

0xa2bc,	// (0x00020da7) popup_call_status_window

0x1665,	// (0x00018150) stacon_top_pane

0x166d,	// (0x00018158) status_pane_ParamLimits

0x166d,	// (0x00018158) status_pane

0x1687,	// (0x00018172) status_small_pane

0x168f,	// (0x0001817a) control_pane

0x07ba,	// (0x000172a5) stacon_bottom_pane

0x1697,	// (0x00018182) list_single_mce_smart_pane_t1_ParamLimits

0x1697,	// (0x00018182) list_single_mce_smart_pane_t1

0x16aa,	// (0x00018195) list_single_mce_smart_pane_t2_ParamLimits

0x16aa,	// (0x00018195) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x00025eb1) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x00025eb1) list_single_mce_smart_pane_t

0xa2cb,	// (0x00020db6) compass_pane

0xa2d4,	// (0x00020dbf) main_location2_pane_t1

0xa2ea,	// (0x00020dd5) main_location2_pane_t2

0xa300,	// (0x00020deb) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x00025eb6) main_location2_pane_t

0x16d2,	// (0x000181bd) compass_pane_g1_ParamLimits

0x16d2,	// (0x000181bd) compass_pane_g1

0xa348,	// (0x00020e33) compass_pane_t1

0xa357,	// (0x00020e42) compass_pane_t2

0x0005,

0xf3d4,	// (0x00025ebf) compass_pane_t

0xa39e,	// (0x00020e89) text_secondary_cp61

0x1720,	// (0x0001820b) navi_pane_cams_g5

0x176c,	// (0x00018257) navi_pane_im_t1

0x177a,	// (0x00018265) navi_pane_mp_g1_ParamLimits

0x177a,	// (0x00018265) navi_pane_mp_g1

0x178e,	// (0x00018279) navi_pane_mp_g2_ParamLimits

0x178e,	// (0x00018279) navi_pane_mp_g2

0x179a,	// (0x00018285) navi_pane_mp_g3_ParamLimits

0x179a,	// (0x00018285) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x00025ed3) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x00025ed3) navi_pane_mp_g

0x17a6,	// (0x00018291) navi_pane_mp_t1

0x17b4,	// (0x0001829f) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x00025eda) navi_pane_mp_t

0x181f,	// (0x0001830a) navi_pane_vt_g1

0x17a6,	// (0x00018291) navi_pane_vt_t1

0x1827,	// (0x00018312) navi_slider_pane

0x0d6f,	// (0x0001785a) zooming_pane

0x182f,	// (0x0001831a) navi_slider_pane_g1

0x73af,	// (0x0001de9a) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x00025ee1) navi_slider_pane_g

0x1865,	// (0x00018350) aid_levels_zoom

0x186d,	// (0x00018358) zooming_pane_g1

0x1875,	// (0x00018360) zooming_pane_g2

0x1875,	// (0x00018360) zooming_pane_g3

0x0002,

0xf405,	// (0x00025ef0) zooming_pane_g

0x187d,	// (0x00018368) level_10_zoom

0x1886,	// (0x00018371) level_11_zoom

0x188f,	// (0x0001837a) level_1_zoom

0x1898,	// (0x00018383) level_2_zoom

0x18a1,	// (0x0001838c) level_3_zoom

0x18aa,	// (0x00018395) level_4_zoom

0x18b3,	// (0x0001839e) level_5_zoom

0x18bc,	// (0x000183a7) level_6_zoom

0x18c5,	// (0x000183b0) level_7_zoom

0x18ce,	// (0x000183b9) level_8_zoom

0x18d7,	// (0x000183c2) level_9_zoom

0x18e8,	// (0x000183d3) popup_phob_thumbnail_window_g1

0x18f0,	// (0x000183db) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x00025ef7) popup_phob_thumbnail_window_g

0x2cd6,	// (0x000197c1) level_1_location

0x2cde,	// (0x000197c9) level_2_location

0x2ce6,	// (0x000197d1) level_3_location

0x2cee,	// (0x000197d9) level_4_location

0x0d6f,	// (0x0001785a) level_5_location

0xa420,	// (0x00020f0b) mce_icon_pane_g1

0xa428,	// (0x00020f13) mce_icon_pane_g2

0x0001,

0xf411,	// (0x00025efc) mce_icon_pane_g

0xa430,	// (0x00020f1b) main_mup_pane_g1_ParamLimits

0xa430,	// (0x00020f1b) main_mup_pane_g1

0xa448,	// (0x00020f33) main_mup_pane_g2_ParamLimits

0xa448,	// (0x00020f33) main_mup_pane_g2

0xa464,	// (0x00020f4f) main_mup_pane_g3_ParamLimits

0xa464,	// (0x00020f4f) main_mup_pane_g3

0xa480,	// (0x00020f6b) main_mup_pane_g4_ParamLimits

0xa480,	// (0x00020f6b) main_mup_pane_g4

0xa49c,	// (0x00020f87) main_mup_pane_g5_ParamLimits

0xa49c,	// (0x00020f87) main_mup_pane_g5

0xa4b9,	// (0x00020fa4) main_mup_pane_g6_ParamLimits

0xa4b9,	// (0x00020fa4) main_mup_pane_g6

0xa4d5,	// (0x00020fc0) main_mup_pane_g7_ParamLimits

0xa4d5,	// (0x00020fc0) main_mup_pane_g7

0xa4f1,	// (0x00020fdc) main_mup_pane_g8_ParamLimits

0xa4f1,	// (0x00020fdc) main_mup_pane_g8

0xa50d,	// (0x00020ff8) main_mup_pane_g9_ParamLimits

0xa50d,	// (0x00020ff8) main_mup_pane_g9

0xa524,	// (0x0002100f) main_mup_pane_g10_ParamLimits

0xa524,	// (0x0002100f) main_mup_pane_g10

0xa53b,	// (0x00021026) main_mup_pane_g11_ParamLimits

0xa53b,	// (0x00021026) main_mup_pane_g11

0xa54f,	// (0x0002103a) main_mup_pane_g12_ParamLimits

0xa54f,	// (0x0002103a) main_mup_pane_g12

0xa55b,	// (0x00021046) main_mup_pane_g13_ParamLimits

0xa55b,	// (0x00021046) main_mup_pane_g13

0x000c,

0xf416,	// (0x00025f01) main_mup_pane_g_ParamLimits

0xf416,	// (0x00025f01) main_mup_pane_g

0xa56f,	// (0x0002105a) main_mup_pane_t1_ParamLimits

0xa56f,	// (0x0002105a) main_mup_pane_t1

0xa58c,	// (0x00021077) main_mup_pane_t2_ParamLimits

0xa58c,	// (0x00021077) main_mup_pane_t2

0xa5a6,	// (0x00021091) main_mup_pane_t3_ParamLimits

0xa5a6,	// (0x00021091) main_mup_pane_t3

0xa5c0,	// (0x000210ab) main_mup_pane_t4_ParamLimits

0xa5c0,	// (0x000210ab) main_mup_pane_t4

0xa5d2,	// (0x000210bd) main_mup_pane_t5_ParamLimits

0xa5d2,	// (0x000210bd) main_mup_pane_t5

0xa5e4,	// (0x000210cf) main_mup_pane_t6_ParamLimits

0xa5e4,	// (0x000210cf) main_mup_pane_t6

0x0005,

0xf431,	// (0x00025f1c) main_mup_pane_t_ParamLimits

0xf431,	// (0x00025f1c) main_mup_pane_t

0xa5fa,	// (0x000210e5) mup_progress_pane_ParamLimits

0xa5fa,	// (0x000210e5) mup_progress_pane

0xa606,	// (0x000210f1) mup_visualizer_pane_ParamLimits

0xa606,	// (0x000210f1) mup_visualizer_pane

0xa634,	// (0x0002111f) mup_volume_pane_ParamLimits

0xa634,	// (0x0002111f) mup_volume_pane

0x18f8,	// (0x000183e3) mup_visualizer_pane_g1_ParamLimits

0x18f8,	// (0x000183e3) mup_visualizer_pane_g1

0x18f8,	// (0x000183e3) mup_visualizer_pane_g2_ParamLimits

0x18f8,	// (0x000183e3) mup_visualizer_pane_g2

0x16d2,	// (0x000181bd) mup_visualizer_pane_g3_ParamLimits

0x16d2,	// (0x000181bd) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x00025f29) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x00025f29) mup_visualizer_pane_g

0x0ba3,	// (0x0001768e) mup_volume_pane_g1

0x190e,	// (0x000183f9) mup_volume_pane_g2

0x0001,

0xf445,	// (0x00025f30) mup_volume_pane_g

0x0ba3,	// (0x0001768e) mup_progress_pane_g1

0x1917,	// (0x00018402) mup_progress_pane_g2

0x1920,	// (0x0001840b) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x00025f35) mup_progress_pane_g

0x07ba,	// (0x000172a5) bg_popup_window_pane_cp05

0x1929,	// (0x00018414) heading_pane_cp02_ParamLimits

0x1929,	// (0x00018414) heading_pane_cp02

0x1943,	// (0x0001842e) list_popup_blid_pane

0x194b,	// (0x00018436) list_blid_sat_info_pane_ParamLimits

0x194b,	// (0x00018436) list_blid_sat_info_pane

0x195e,	// (0x00018449) list_blid_sat_info_pane_g1

0x1966,	// (0x00018451) list_blid_sat_info_pane_t1

0xa727,	// (0x00021212) mup_equalizer_pane_ParamLimits

0xa727,	// (0x00021212) mup_equalizer_pane

0xa740,	// (0x0002122b) mup_equalizer_pane_cp1_ParamLimits

0xa740,	// (0x0002122b) mup_equalizer_pane_cp1

0xa759,	// (0x00021244) mup_equalizer_pane_cp2_ParamLimits

0xa759,	// (0x00021244) mup_equalizer_pane_cp2

0xa772,	// (0x0002125d) mup_equalizer_pane_cp3_ParamLimits

0xa772,	// (0x0002125d) mup_equalizer_pane_cp3

0xa78b,	// (0x00021276) mup_equalizer_pane_cp4_ParamLimits

0xa78b,	// (0x00021276) mup_equalizer_pane_cp4

0xa7a4,	// (0x0002128f) mup_equalizer_pane_cp5

0xa7b6,	// (0x000212a1) mup_equalizer_pane_cp6

0xa7c8,	// (0x000212b3) mup_equalizer_pane_cp7

0x2bb4,	// (0x0001969f) bg_popup_call_poc_act_pane_g9

0x2bbc,	// (0x000196a7) bg_popup_call_poc_act_pane_g10

0x2bc4,	// (0x000196af) bg_popup_call_poc_act_pane_g11

0x000a,

0x0a15,	// (0x00017500) mup_scale_pane

0x0ba3,	// (0x0001768e) mup_scale_pane_g1

0x1974,	// (0x0001845f) mup_scale_pane_g2

0x0006,

0xf466,	// (0x00025f51) mup_scale_pane_g

0x1998,	// (0x00018483) msg_data_pane

0x19a0,	// (0x0001848b) scroll_pane_cp017

0xa7ec,	// (0x000212d7) bg_list_pane_cp04_ParamLimits

0xa7ec,	// (0x000212d7) bg_list_pane_cp04

0x19b0,	// (0x0001849b) msg_data_pane_g1

0xa1e4,	// (0x00020ccf) msg_data_pane_g2

0xa1ec,	// (0x00020cd7) msg_data_pane_g3

0xa804,	// (0x000212ef) msg_data_pane_g4

0xa1fc,	// (0x00020ce7) msg_data_pane_g5

0xa420,	// (0x00020f0b) msg_data_pane_g6

0xa80c,	// (0x000212f7) msg_data_pane_g7

0x0006,

0xf475,	// (0x00025f60) msg_data_pane_g

0xa814,	// (0x000212ff) msg_text_pane_ParamLimits

0xa814,	// (0x000212ff) msg_text_pane

0xa83e,	// (0x00021329) qrid_highlight_pane_cp011_ParamLimits

0xa83e,	// (0x00021329) qrid_highlight_pane_cp011

0x07ba,	// (0x000172a5) msg_body_pane

0x07ba,	// (0x000172a5) msg_header_pane

0x19c1,	// (0x000184ac) input_focus_pane_cp07

0x19d6,	// (0x000184c1) msg_header_pane_t1_ParamLimits

0x19d6,	// (0x000184c1) msg_header_pane_t1

0x19e8,	// (0x000184d3) msg_header_pane_t2_ParamLimits

0x19e8,	// (0x000184d3) msg_header_pane_t2

0x0001,

0xf489,	// (0x00025f74) msg_header_pane_t_ParamLimits

0xf489,	// (0x00025f74) msg_header_pane_t

0x19fa,	// (0x000184e5) msg_body_pane_g1

0x1a02,	// (0x000184ed) msg_body_pane_t1_ParamLimits

0x1a02,	// (0x000184ed) msg_body_pane_t1

0x1a2d,	// (0x00018518) msg_body_pane_t2_ParamLimits

0x1a2d,	// (0x00018518) msg_body_pane_t2

0x1a3f,	// (0x0001852a) msg_body_pane_t3_ParamLimits

0x1a3f,	// (0x0001852a) msg_body_pane_t3

0x0002,

0xf48e,	// (0x00025f79) msg_body_pane_t_ParamLimits

0xf48e,	// (0x00025f79) msg_body_pane_t

0x73f1,	// (0x0001dedc) main_viewer_pane_g1_ParamLimits

0x73f1,	// (0x0001dedc) main_viewer_pane_g1

0x73fd,	// (0x0001dee8) main_viewer_pane_g2_ParamLimits

0x73fd,	// (0x0001dee8) main_viewer_pane_g2

0xa87e,	// (0x00021369) main_viewer_pane_g3_ParamLimits

0xa87e,	// (0x00021369) main_viewer_pane_g3

0xa88d,	// (0x00021378) main_viewer_pane_g4_ParamLimits

0xa88d,	// (0x00021378) main_viewer_pane_g4

0x7409,	// (0x0001def4) main_viewer_pane_g5_ParamLimits

0x7409,	// (0x0001def4) main_viewer_pane_g5

0x7409,	// (0x0001def4) main_viewer_pane_g7_ParamLimits

0x7409,	// (0x0001def4) main_viewer_pane_g7

0x741b,	// (0x0001df06) main_viewer_pane_g8_ParamLimits

0x741b,	// (0x0001df06) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x00025f89) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x00025f89) main_viewer_pane_g

0x1a93,	// (0x0001857e) viewer_content_pane_ParamLimits

0x1a93,	// (0x0001857e) viewer_content_pane

0xa8b4,	// (0x0002139f) main_postcard_pane_g1_ParamLimits

0xa8b4,	// (0x0002139f) main_postcard_pane_g1

0xa8c0,	// (0x000213ab) main_postcard_pane_g2_ParamLimits

0xa8c0,	// (0x000213ab) main_postcard_pane_g2

0xa8cc,	// (0x000213b7) main_postcard_pane_g3_ParamLimits

0xa8cc,	// (0x000213b7) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x00025f9a) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x00025f9a) main_postcard_pane_g

0xa8d8,	// (0x000213c3) main_postcard_pane_g4

0x2e1d,	// (0x00019908) smil_status_volume_pane_g2

0xa8fc,	// (0x000213e7) postcard_pane_ParamLimits

0xa8fc,	// (0x000213e7) postcard_pane

0x18f8,	// (0x000183e3) postcard_pane_g1_ParamLimits

0x18f8,	// (0x000183e3) postcard_pane_g1

0xa92c,	// (0x00021417) postcard_pane_g2_ParamLimits

0xa92c,	// (0x00021417) postcard_pane_g2

0xa938,	// (0x00021423) postcard_pane_g3_ParamLimits

0xa938,	// (0x00021423) postcard_pane_g3

0x1aaf,	// (0x0001859a) postcard_pane_g4_ParamLimits

0x1aaf,	// (0x0001859a) postcard_pane_g4

0xa944,	// (0x0002142f) postcard_pane_g5_ParamLimits

0xa944,	// (0x0002142f) postcard_pane_g5

0xa950,	// (0x0002143b) postcard_pane_g6_ParamLimits

0xa950,	// (0x0002143b) postcard_pane_g6

0x1aa1,	// (0x0001858c) postcard_pane_g7_ParamLimits

0x1aa1,	// (0x0001858c) postcard_pane_g7

0x0006,

0xf4bc,	// (0x00025fa7) postcard_pane_g_ParamLimits

0xf4bc,	// (0x00025fa7) postcard_pane_g

0xa95c,	// (0x00021447) main_mp2_pane_g1_ParamLimits

0xa95c,	// (0x00021447) main_mp2_pane_g1

0xa968,	// (0x00021453) main_mp2_pane_g2_ParamLimits

0xa968,	// (0x00021453) main_mp2_pane_g2

0xa974,	// (0x0002145f) main_mp2_pane_g3_ParamLimits

0xa974,	// (0x0002145f) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x00025fb6) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x00025fb6) main_mp2_pane_g

0xa980,	// (0x0002146b) main_mp2_pane_t1_ParamLimits

0xa980,	// (0x0002146b) main_mp2_pane_t1

0xa995,	// (0x00021480) main_mp2_pane_t2_ParamLimits

0xa995,	// (0x00021480) main_mp2_pane_t2

0xa9a7,	// (0x00021492) main_mp2_pane_t3_ParamLimits

0xa9a7,	// (0x00021492) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x00025fbd) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x00025fbd) main_mp2_pane_t

0x1abd,	// (0x000185a8) pec_content_pane_ParamLimits

0x1abd,	// (0x000185a8) pec_content_pane

0x0f67,	// (0x00017a52) scroll_pane_cp015

0x1acf,	// (0x000185ba) pec_attribute_pane_ParamLimits

0x1acf,	// (0x000185ba) pec_attribute_pane

0xa9b9,	// (0x000214a4) pec_content_pane_g1_ParamLimits

0xa9b9,	// (0x000214a4) pec_content_pane_g1

0x1adf,	// (0x000185ca) pec_content_pane_t1_ParamLimits

0x1adf,	// (0x000185ca) pec_content_pane_t1

0x1af1,	// (0x000185dc) pec_content_pane_t2_ParamLimits

0x1af1,	// (0x000185dc) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x00025fc4) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x00025fc4) pec_content_pane_t

0xa9c5,	// (0x000214b0) list_single_graphic_pane_cp01_ParamLimits

0xa9c5,	// (0x000214b0) list_single_graphic_pane_cp01

0x0a15,	// (0x00017500) bg_popup_sub_pane_cp04

0x1b03,	// (0x000185ee) popup_mup_playback_window_g1

0x1b0f,	// (0x000185fa) popup_mup_playback_window_t1

0x1b24,	// (0x0001860f) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x00025fc9) popup_mup_playback_window_t

0x1b5b,	// (0x00018646) main_image_pane_g1_ParamLimits

0x1b5b,	// (0x00018646) main_image_pane_g1

0x1b9e,	// (0x00018689) scroll_pane_cp018_ParamLimits

0x1b9e,	// (0x00018689) scroll_pane_cp018

0x1bb6,	// (0x000186a1) scroll_pane_cp016_ParamLimits

0x1bb6,	// (0x000186a1) scroll_pane_cp016

0xaa4a,	// (0x00021535) smil2_image_pane_ParamLimits

0xaa4a,	// (0x00021535) smil2_image_pane

0xaa72,	// (0x0002155d) smil2_root_pane_ParamLimits

0xaa72,	// (0x0002155d) smil2_root_pane

0xaa9e,	// (0x00021589) smil2_text_pane_ParamLimits

0xaa9e,	// (0x00021589) smil2_text_pane

0x07ba,	// (0x000172a5) bg_list_pane_cp06

0x1bf2,	// (0x000186dd) grid_radio_pane

0x07ba,	// (0x000172a5) bg_popup_window_pane_cp06

0x1bfa,	// (0x000186e5) main_fmradio_pane_t1

0x151f,	// (0x0001800a) heading_pane_cp04

0x1c08,	// (0x000186f3) main_fmradio_pane_t2

0x2c0c,	// (0x000196f7) popup_cale_lunar_info_window_g1

0x1c16,	// (0x00018701) main_fmradio_pane_t3

0x2c14,	// (0x000196ff) popup_cale_lunar_info_window_g2

0x1c24,	// (0x0001870f) main_fmradio_pane_t4

0x0001,

0x1c32,	// (0x0001871d) main_fmradio_pane_t5

0x0004,

0xf5cc,	// (0x000260b7) popup_cale_lunar_info_window_g

0xf4f3,	// (0x00025fde) main_fmradio_pane_t

0x1c40,	// (0x0001872b) wait_bar_pane_cp03

0x1c48,	// (0x00018733) cell_fmradio_pane_ParamLimits

0x1c48,	// (0x00018733) cell_fmradio_pane

0x1aa1,	// (0x0001858c) cell_fmradio_pane_g1_ParamLimits

0x1aa1,	// (0x0001858c) cell_fmradio_pane_g1

0x07ba,	// (0x000172a5) grid_highlight_pane_cp011

0x1c5b,	// (0x00018746) poc_content_pane_ParamLimits

0x1c5b,	// (0x00018746) poc_content_pane

0x1c6e,	// (0x00018759) scroll_pane_cp019

0xaad2,	// (0x000215bd) popup_call_poc_act_window_ParamLimits

0xaad2,	// (0x000215bd) popup_call_poc_act_window

0xaadf,	// (0x000215ca) popup_call_poc_inact_window_ParamLimits

0xaadf,	// (0x000215ca) popup_call_poc_inact_window

0xf590,	// (0x0002607b) bg_popup_call_poc_act_pane_g

0x2bcc,	// (0x000196b7) bg_popup_call_poc_inact_pane_g1

0x2bd4,	// (0x000196bf) bg_popup_call_poc_inact_pane_g2

0x1c76,	// (0x00018761) popup_call_poc_act_window_g2

0x2bdc,	// (0x000196c7) bg_popup_call_poc_inact_pane_g3

0x2b5c,	// (0x00019647) bg_popup_call_poc_inact_pane_g4

0x2be4,	// (0x000196cf) bg_popup_call_poc_inact_pane_g5

0x1c7e,	// (0x00018769) popup_call_poc_act_window_t1_ParamLimits

0x1c7e,	// (0x00018769) popup_call_poc_act_window_t1

0x1ca6,	// (0x00018791) popup_call_poc_act_window_t2_ParamLimits

0x1ca6,	// (0x00018791) popup_call_poc_act_window_t2

0x1cce,	// (0x000187b9) popup_call_poc_act_window_t3_ParamLimits

0x1cce,	// (0x000187b9) popup_call_poc_act_window_t3

0x1cf6,	// (0x000187e1) popup_call_poc_act_window_t4_ParamLimits

0x1cf6,	// (0x000187e1) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x00025fe9) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x00025fe9) popup_call_poc_act_window_t

0x2bec,	// (0x000196d7) bg_popup_call_poc_inact_pane_g6

0x2bf4,	// (0x000196df) bg_popup_call_poc_inact_pane_g7

0x2bfc,	// (0x000196e7) bg_popup_call_poc_inact_pane_g8

0x1d08,	// (0x000187f3) popup_call_poc_inact_window_g2

0x2c04,	// (0x000196ef) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a7,	// (0x00026092) bg_popup_call_poc_inact_pane_g

0x1d10,	// (0x000187fb) popup_call_poc_inact_window_t1_ParamLimits

0x1d10,	// (0x000187fb) popup_call_poc_inact_window_t1

0x1d25,	// (0x00018810) popup_call_poc_inact_window_t2_ParamLimits

0x1d25,	// (0x00018810) popup_call_poc_inact_window_t2

0x1d3a,	// (0x00018825) popup_call_poc_inact_window_t3_ParamLimits

0x1d3a,	// (0x00018825) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x00025ff2) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x00025ff2) popup_call_poc_inact_window_t

0x2da3,	// (0x0001988e) context_pane_ParamLimits

0xaedb,	// (0x000219c6) signal_pane_ParamLimits

0x0d6f,	// (0x0001785a) main_call2_pane

0x752f,	// (0x0001e01a) popup_phob_thumbnail2_window_ParamLimits

0x752f,	// (0x0001e01a) popup_phob_thumbnail2_window

0x73c1,	// (0x0001deac) aid_hotspot_pointer_arrow_pane

0x73c9,	// (0x0001deb4) aid_hotspot_pointer_hand_pane

0xad8e,	// (0x00021879) phob_pre_status_pane_g5

0x8d8f,	// (0x0001f87a) cams_zoom_pane_ParamLimits

0x8d9b,	// (0x0001f886) image_vga_pane_ParamLimits

0x8da8,	// (0x0001f893) main_camera_pane_g1_ParamLimits

0x8db4,	// (0x0001f89f) main_camera_pane_g2_ParamLimits

0x8dc0,	// (0x0001f8ab) main_camera_pane_g3_ParamLimits

0x8dcc,	// (0x0001f8b7) main_camera_pane_g4_ParamLimits

0x8dd8,	// (0x0001f8c3) main_camera_pane_g5_ParamLimits

0x8de4,	// (0x0001f8cf) main_camera_pane_g6_ParamLimits

0x8df0,	// (0x0001f8db) main_camera_pane_g7_ParamLimits

0xf206,	// (0x00025cf1) main_camera_pane_g_ParamLimits

0x8dfc,	// (0x0001f8e7) main_camera_pane_t1_ParamLimits

0x8e0e,	// (0x0001f8f9) main_camera_pane_t2_ParamLimits

0xf217,	// (0x00025d02) main_camera_pane_t_ParamLimits

0x0a15,	// (0x00017500) bg_popup_preview_window_pane_cp01_ParamLimits

0x0a15,	// (0x00017500) bg_popup_preview_window_pane_cp01

0x1d4f,	// (0x0001883a) popup_phob_thumbnail2_window_g1_ParamLimits

0x1d4f,	// (0x0001883a) popup_phob_thumbnail2_window_g1

0x07ba,	// (0x000172a5) call2_cli_visual_pane

0xaafb,	// (0x000215e6) popup_call2_audio_conf_window_ParamLimits

0xaafb,	// (0x000215e6) popup_call2_audio_conf_window

0xab0e,	// (0x000215f9) popup_call2_audio_first_window_ParamLimits

0xab0e,	// (0x000215f9) popup_call2_audio_first_window

0xab8a,	// (0x00021675) popup_call2_audio_in_window_ParamLimits

0xab8a,	// (0x00021675) popup_call2_audio_in_window

0xabba,	// (0x000216a5) popup_call2_audio_out_window_ParamLimits

0xabba,	// (0x000216a5) popup_call2_audio_out_window

0xac06,	// (0x000216f1) popup_call2_audio_second_window_ParamLimits

0xac06,	// (0x000216f1) popup_call2_audio_second_window

0xac52,	// (0x0002173d) popup_call2_audio_wait_window_ParamLimits

0xac52,	// (0x0002173d) popup_call2_audio_wait_window

0x07ba,	// (0x000172a5) bg_popup_call2_act_pane_cp03

0x09f7,	// (0x000174e2) list_conf_pane_cp

0x1d5b,	// (0x00018846) popup_call2_audio_conf_window_t1

0x157c,	// (0x00018067) list_single_graphic_popup_conf2_pane_ParamLimits

0x157c,	// (0x00018067) list_single_graphic_popup_conf2_pane

0x158f,	// (0x0001807a) list_highlight_pane_cp04

0x1d69,	// (0x00018854) list_single_graphic_popup_conf2_pane_g1

0x15a0,	// (0x0001808b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x00025ff9) list_single_graphic_popup_conf2_pane_g

0x1d71,	// (0x0001885c) list_single_graphic_popup_conf2_pane_t1

0x1d7f,	// (0x0001886a) bg_popup_call2_act_pane_cp01_ParamLimits

0x1d7f,	// (0x0001886a) bg_popup_call2_act_pane_cp01

0x1e09,	// (0x000188f4) call_type_pane_cp05_ParamLimits

0x1e09,	// (0x000188f4) call_type_pane_cp05

0x1e5d,	// (0x00018948) popup_call2_audio_second_window_g1_ParamLimits

0x1e5d,	// (0x00018948) popup_call2_audio_second_window_g1

0x1eb1,	// (0x0001899c) popup_call2_audio_second_window_g2_ParamLimits

0x1eb1,	// (0x0001899c) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x00025ffe) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x00025ffe) popup_call2_audio_second_window_g

0x1f16,	// (0x00018a01) popup_call2_audio_second_window_t1_ParamLimits

0x1f16,	// (0x00018a01) popup_call2_audio_second_window_t1

0x1fd1,	// (0x00018abc) popup_call2_audio_second_window_t2_ParamLimits

0x1fd1,	// (0x00018abc) popup_call2_audio_second_window_t2

0x2024,	// (0x00018b0f) popup_call2_audio_second_window_t3_ParamLimits

0x2024,	// (0x00018b0f) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x00026005) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x00026005) popup_call2_audio_second_window_t

0x07ba,	// (0x000172a5) bg_popup_call2_in_pane_cp02

0x07c4,	// (0x000172af) call_type_pane_cp04

0x07cc,	// (0x000172b7) popup_call2_audio_wait_window_g1

0x07d4,	// (0x000172bf) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x00025be0) popup_call2_audio_wait_window_g

0x07dc,	// (0x000172c7) popup_call2_audio_wait_window_t3

0x2117,	// (0x00018c02) bg_popup_call2_act_pane_ParamLimits

0x2117,	// (0x00018c02) bg_popup_call2_act_pane

0x21d7,	// (0x00018cc2) call_type_pane_cp03_ParamLimits

0x21d7,	// (0x00018cc2) call_type_pane_cp03

0x223b,	// (0x00018d26) popup_call2_audio_first_window_g1_ParamLimits

0x223b,	// (0x00018d26) popup_call2_audio_first_window_g1

0x22ab,	// (0x00018d96) popup_call2_audio_first_window_g2_ParamLimits

0x22ab,	// (0x00018d96) popup_call2_audio_first_window_g2

0x18f8,	// (0x000183e3) popup_call2_audio_first_window_g3_ParamLimits

0x18f8,	// (0x000183e3) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0002600e) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0002600e) popup_call2_audio_first_window_g

0x2389,	// (0x00018e74) popup_call2_audio_first_window_t1_ParamLimits

0x2389,	// (0x00018e74) popup_call2_audio_first_window_t1

0x248c,	// (0x00018f77) popup_call2_audio_first_window_t4_ParamLimits

0x248c,	// (0x00018f77) popup_call2_audio_first_window_t4

0x256f,	// (0x0001905a) popup_call2_audio_first_window_t5_ParamLimits

0x256f,	// (0x0001905a) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x00026019) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x00026019) popup_call2_audio_first_window_t

0x0a0d,	// (0x000174f8) bg_popup_call2_act_pane_g1

0x2c1c,	// (0x00019707) popup_cale_lunar_info_window_t1

0x2c2a,	// (0x00019715) popup_cale_lunar_info_window_t2

0x2c38,	// (0x00019723) popup_cale_lunar_info_window_t3

0x07ba,	// (0x000172a5) bg_popup_call2_bubble_pane

0x2670,	// (0x0001915b) bg_popup_call2_in_pane_cp01_ParamLimits

0x2670,	// (0x0001915b) bg_popup_call2_in_pane_cp01

0x0496,	// (0x00016f81) call_type_pane_cp02

0x26b8,	// (0x000191a3) popup_call2_audio_out_window_g1_ParamLimits

0x26b8,	// (0x000191a3) popup_call2_audio_out_window_g1

0x26e4,	// (0x000191cf) popup_call2_audio_out_window_g2_ParamLimits

0x26e4,	// (0x000191cf) popup_call2_audio_out_window_g2

0x270c,	// (0x000191f7) popup_call2_audio_out_window_g3_ParamLimits

0x270c,	// (0x000191f7) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x00026022) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x00026022) popup_call2_audio_out_window_g

0x2747,	// (0x00019232) popup_call2_audio_out_window_t1_ParamLimits

0x2747,	// (0x00019232) popup_call2_audio_out_window_t1

0x27a6,	// (0x00019291) popup_call2_audio_out_window_t2_ParamLimits

0x27a6,	// (0x00019291) popup_call2_audio_out_window_t2

0x27fa,	// (0x000192e5) popup_call2_audio_out_window_t3_ParamLimits

0x27fa,	// (0x000192e5) popup_call2_audio_out_window_t3

0x2810,	// (0x000192fb) popup_call2_audio_out_window_t4_ParamLimits

0x2810,	// (0x000192fb) popup_call2_audio_out_window_t4

0x2826,	// (0x00019311) popup_call2_audio_out_window_t5_ParamLimits

0x2826,	// (0x00019311) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0002602b) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0002602b) popup_call2_audio_out_window_t

0x288a,	// (0x00019375) bg_popup_call2_in_pane_ParamLimits

0x288a,	// (0x00019375) bg_popup_call2_in_pane

0x28e6,	// (0x000193d1) popup_call2_audio_in_window_g1_ParamLimits

0x28e6,	// (0x000193d1) popup_call2_audio_in_window_g1

0x291e,	// (0x00019409) popup_call2_audio_in_window_g2_ParamLimits

0x291e,	// (0x00019409) popup_call2_audio_in_window_g2

0x2956,	// (0x00019441) popup_call2_audio_in_window_g3_ParamLimits

0x2956,	// (0x00019441) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x00026038) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x00026038) popup_call2_audio_in_window_g

0x29ae,	// (0x00019499) popup_call2_audio_in_window_t1_ParamLimits

0x29ae,	// (0x00019499) popup_call2_audio_in_window_t1

0x2a2e,	// (0x00019519) popup_call2_audio_in_window_t2_ParamLimits

0x2a2e,	// (0x00019519) popup_call2_audio_in_window_t2

0x2aae,	// (0x00019599) popup_call2_audio_in_window_t3_ParamLimits

0x2aae,	// (0x00019599) popup_call2_audio_in_window_t3

0x2ac8,	// (0x000195b3) popup_call2_audio_in_window_t4_ParamLimits

0x2ac8,	// (0x000195b3) popup_call2_audio_in_window_t4

0x2ada,	// (0x000195c5) popup_call2_audio_in_window_t5_ParamLimits

0x2ada,	// (0x000195c5) popup_call2_audio_in_window_t5

0x2aef,	// (0x000195da) popup_call2_audio_in_window_t6_ParamLimits

0x2aef,	// (0x000195da) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x00026041) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x00026041) popup_call2_audio_in_window_t

0x0a0d,	// (0x000174f8) bg_popup_call2_in_pane_g1

0x2c46,	// (0x00019731) popup_cale_lunar_info_window_t4

0x0003,

0xf5d1,	// (0x000260bc) popup_cale_lunar_info_window_t

0x0a15,	// (0x00017500) bg_popup_call2_rect_pane_ParamLimits

0x0a15,	// (0x00017500) bg_popup_call2_rect_pane

0x07ba,	// (0x000172a5) call2_cli_visual_graphic_pane

0x07ba,	// (0x000172a5) call2_cli_visual_text_pane

0x757c,	// (0x0001e067) smil_status_volume_pane_g3

0x0002,

0x0ba3,	// (0x0001768e) call2_cli_visual_graphic_pane_g1

0x0ba3,	// (0x0001768e) call2_cli_visual_graphic_pane_g2

0x0ba3,	// (0x0001768e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0002604e) call2_cli_visual_graphic_pane_g

0x2b04,	// (0x000195ef) bg_popup_call2_rect_pane_g1

0x0c4b,	// (0x00017736) bg_popup_call2_rect_pane_g2

0x2b0c,	// (0x000195f7) bg_popup_call2_rect_pane_g3

0x2b14,	// (0x000195ff) bg_popup_call2_rect_pane_g4

0x2b1c,	// (0x00019607) bg_popup_call2_rect_pane_g5

0x2b24,	// (0x0001960f) bg_popup_call2_rect_pane_g6

0x2b2c,	// (0x00019617) bg_popup_call2_rect_pane_g7

0x2b34,	// (0x0001961f) bg_popup_call2_rect_pane_g8

0x2b3c,	// (0x00019627) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x00026055) bg_popup_call2_rect_pane_g

0x2b44,	// (0x0001962f) bg_popup_call2_bubble_pane_g1

0x2b4c,	// (0x00019637) bg_popup_call2_bubble_pane_g2

0x2b54,	// (0x0001963f) bg_popup_call2_bubble_pane_g3

0x2b5c,	// (0x00019647) bg_popup_call2_bubble_pane_g4

0x2b64,	// (0x0001964f) bg_popup_call2_bubble_pane_g5

0x2b6c,	// (0x00019657) bg_popup_call2_bubble_pane_g6

0x2b74,	// (0x0001965f) bg_popup_call2_bubble_pane_g7

0x2b7c,	// (0x00019667) bg_popup_call2_bubble_pane_g8

0x2b84,	// (0x0001966f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x00026068) bg_popup_call2_bubble_pane_g

0x896d,	// (0x0001f458) aid_cale_week_size_cell_pane

0x8e20,	// (0x0001f90b) aid_cams_cif_uncrop_pane_ParamLimits

0x8e20,	// (0x0001f90b) aid_cams_cif_uncrop_pane

0x8f78,	// (0x0001fa63) aid_cams_size_cell_ParamLimits

0x8f78,	// (0x0001fa63) aid_cams_size_cell

0x8f84,	// (0x0001fa6f) grid_cams_pane_ParamLimits

0x8f90,	// (0x0001fa7b) linegrid_cams_pane_ParamLimits

0x9145,	// (0x0001fc30) call_video_pane_t1

0x9162,	// (0x0001fc4d) call_video_pane_t2

0x0001,

0xf26a,	// (0x00025d55) call_video_pane_t

0x9544,	// (0x0002002f) aid_cale_month_size_cell_pane_ParamLimits

0x9544,	// (0x0002002f) aid_cale_month_size_cell_pane

0xf61a,	// (0x00026105) smil_status_volume_pane_g

0x7589,	// (0x0001e074) volume_smil_pane_ParamLimits

0x6d0f,	// (0x0001d7fa) aid_popup2_width_pane

0x88c2,	// (0x0001f3ad) cell_qdial_pane_g4_ParamLimits

0x88c2,	// (0x0001f3ad) cell_qdial_pane_g4

0xa328,	// (0x00020e13) aid_blid_cardinal_pane_ParamLimits

0xa334,	// (0x00020e1f) aid_blid_destination_pane_ParamLimits

0xa334,	// (0x00020e1f) aid_blid_destination_pane

0x0a15,	// (0x00017500) bg_popup_call_poc_act_pane_ParamLimits

0x0a15,	// (0x00017500) bg_popup_call_poc_act_pane

0x0a15,	// (0x00017500) bg_popup_call_poc_inact_pane_ParamLimits

0x0a15,	// (0x00017500) bg_popup_call_poc_inact_pane

0x2b8c,	// (0x00019677) bg_popup_call_poc_act_pane_g1

0x2b94,	// (0x0001967f) bg_popup_call_poc_act_pane_g2

0x2b9c,	// (0x00019687) bg_popup_call_poc_act_pane_g3

0x2b5c,	// (0x00019647) bg_popup_call_poc_act_pane_g4

0x2b64,	// (0x0001964f) bg_popup_call_poc_act_pane_g5

0x2ba4,	// (0x0001968f) bg_popup_call_poc_act_pane_g6

0x2b74,	// (0x0001965f) bg_popup_call_poc_act_pane_g7

0x2bac,	// (0x00019697) bg_popup_call_poc_act_pane_g8

0x07ba,	// (0x000172a5) main_usb_pane

0x748e,	// (0x0001df79) popup_cale_lunar_info_window

0x93e7,	// (0x0001fed2) im_reading_pane_t1_ParamLimits

0x0eb0,	// (0x0001799b) list_im_pane_ParamLimits

0x0ec1,	// (0x000179ac) scroll_pane_cp07_ParamLimits

0x07ba,	// (0x000172a5) grid_highlight_pane_cp012

0x0a15,	// (0x00017500) mup_scale_pane_ParamLimits

0x18f8,	// (0x000183e3) main_usb_pane_g1_ParamLimits

0x18f8,	// (0x000183e3) main_usb_pane_g1

0xacb3,	// (0x0002179e) main_usb_pane_g2_ParamLimits

0xacb3,	// (0x0002179e) main_usb_pane_g2

0x0001,

0xf5ba,	// (0x000260a5) main_usb_pane_g_ParamLimits

0xf5ba,	// (0x000260a5) main_usb_pane_g

0xacbf,	// (0x000217aa) main_usb_pane_t1_ParamLimits

0xacbf,	// (0x000217aa) main_usb_pane_t1

0xacd1,	// (0x000217bc) main_usb_pane_t2_ParamLimits

0xacd1,	// (0x000217bc) main_usb_pane_t2

0xace3,	// (0x000217ce) main_usb_pane_t3_ParamLimits

0xace3,	// (0x000217ce) main_usb_pane_t3

0xacf5,	// (0x000217e0) main_usb_pane_t4_ParamLimits

0xacf5,	// (0x000217e0) main_usb_pane_t4

0xad07,	// (0x000217f2) main_usb_pane_t5_ParamLimits

0xad07,	// (0x000217f2) main_usb_pane_t5

0xad19,	// (0x00021804) main_usb_pane_t6_ParamLimits

0xad19,	// (0x00021804) main_usb_pane_t6

0x0005,

0xf5bf,	// (0x000260aa) main_usb_pane_t_ParamLimits

0x16c9,	// (0x000181b4) aid_text_placing

0xa2d4,	// (0x00020dbf) main_location2_pane_t1_ParamLimits

0xa2ea,	// (0x00020dd5) main_location2_pane_t2_ParamLimits

0xa300,	// (0x00020deb) main_location2_pane_t3_ParamLimits

0xa316,	// (0x00020e01) main_location2_pane_t4_ParamLimits

0xa316,	// (0x00020e01) main_location2_pane_t4

0xf3cb,	// (0x00025eb6) main_location2_pane_t_ParamLimits

0x0a51,	// (0x0001753c) find_pinb_pane_g2_ParamLimits

0x0a51,	// (0x0001753c) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x00025c06) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x00025c06) find_pinb_pane_g

0x0a5d,	// (0x00017548) find_pinb_pane_t1_ParamLimits

0x0a6f,	// (0x0001755a) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x00025c0b) find_pinb_pane_t_ParamLimits

0x07ba,	// (0x000172a5) main_call3_pane

0x98e8,	// (0x000203d3) cale_month_day_heading_pane_t1_ParamLimits

0x996e,	// (0x00020459) cale_month_day_heading_pane_t2_ParamLimits

0x99ff,	// (0x000204ea) cale_month_day_heading_pane_t3_ParamLimits

0x9a90,	// (0x0002057b) cale_month_day_heading_pane_t4_ParamLimits

0x9b21,	// (0x0002060c) cale_month_day_heading_pane_t5_ParamLimits

0x9bb2,	// (0x0002069d) cale_month_day_heading_pane_t6_ParamLimits

0x9c43,	// (0x0002072e) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x00025d8d) cale_month_day_heading_pane_t_ParamLimits

0x9f61,	// (0x00020a4c) smil_status_volume_pane

0xa914,	// (0x000213ff) postcard_address_pane_ParamLimits

0xa914,	// (0x000213ff) postcard_address_pane

0xa920,	// (0x0002140b) postcard_message_pane_ParamLimits

0xa920,	// (0x0002140b) postcard_message_pane

0xac8f,	// (0x0002177a) call2_cli_visual_pane_t1_ParamLimits

0xac8f,	// (0x0002177a) call2_cli_visual_pane_t1

0xb09c,	// (0x00021b87) postcard_message_pane_t1_ParamLimits

0xb09c,	// (0x00021b87) postcard_message_pane_t1

0xb085,	// (0x00021b70) postcard_address_pane_t1_ParamLimits

0xb085,	// (0x00021b70) postcard_address_pane_t1

0xb078,	// (0x00021b63) popup_call3_audio_in_window_ParamLimits

0xb078,	// (0x00021b63) popup_call3_audio_in_window

0xaf60,	// (0x00021a4b) bg_popup_call3_in_pane_ParamLimits

0xaf60,	// (0x00021a4b) bg_popup_call3_in_pane

0xafbe,	// (0x00021aa9) popup_call3_audio_in_window_g1_ParamLimits

0xafbe,	// (0x00021aa9) popup_call3_audio_in_window_g1

0xafd6,	// (0x00021ac1) popup_call3_audio_in_window_g2_ParamLimits

0xafd6,	// (0x00021ac1) popup_call3_audio_in_window_g2

0xafee,	// (0x00021ad9) popup_call3_audio_in_window_g3_ParamLimits

0xafee,	// (0x00021ad9) popup_call3_audio_in_window_g3

0x0003,

0xf621,	// (0x0002610c) popup_call3_audio_in_window_g_ParamLimits

0xf621,	// (0x0002610c) popup_call3_audio_in_window_g

0xb016,	// (0x00021b01) popup_call3_audio_in_window_t1_ParamLimits

0xb016,	// (0x00021b01) popup_call3_audio_in_window_t1

0xb03e,	// (0x00021b29) popup_call3_audio_in_window_t2_ParamLimits

0xb03e,	// (0x00021b29) popup_call3_audio_in_window_t2

0xb066,	// (0x00021b51) popup_call3_audio_in_window_t3_ParamLimits

0xb066,	// (0x00021b51) popup_call3_audio_in_window_t3

0x0002,

0xf62a,	// (0x00026115) popup_call3_audio_in_window_t_ParamLimits

0xf62a,	// (0x00026115) popup_call3_audio_in_window_t

0x0d6f,	// (0x0001785a) bg_popup_call3_rect_pane

0x2b04,	// (0x000195ef) bg_popup_call3_rect_pane_g1

0x0c4b,	// (0x00017736) bg_popup_call3_rect_pane_g2

0x2b0c,	// (0x000195f7) bg_popup_call3_rect_pane_g3

0x2b14,	// (0x000195ff) bg_popup_call3_rect_pane_g4

0x2b1c,	// (0x00019607) bg_popup_call3_rect_pane_g5

0x2b24,	// (0x0001960f) bg_popup_call3_rect_pane_g6

0x2b2c,	// (0x00019617) bg_popup_call3_rect_pane_g7

0xa64f,	// (0x0002113a) mup_visualizer_osc_pane

0x1906,	// (0x000183f1) mup_visualizer_spec_pane

0xaf80,	// (0x00021a6b) call3_video_qcif_pane_ParamLimits

0xaf80,	// (0x00021a6b) call3_video_qcif_pane

0xaf90,	// (0x00021a7b) call3_video_qcif_uncrop_pane_ParamLimits

0xaf90,	// (0x00021a7b) call3_video_qcif_uncrop_pane

0xaf9c,	// (0x00021a87) call3_video_subqcif_pane_ParamLimits

0xaf9c,	// (0x00021a87) call3_video_subqcif_pane

0xafae,	// (0x00021a99) call3_video_subqcif_uncrop_pane_ParamLimits

0xafae,	// (0x00021a99) call3_video_subqcif_uncrop_pane

0xb006,	// (0x00021af1) popup_call3_audio_in_window_g4_ParamLimits

0xb006,	// (0x00021af1) popup_call3_audio_in_window_g4

0xaf4f,	// (0x00021a3a) mup_spec_half_pane

0xaf58,	// (0x00021a43) mup_spec_half_pane_cp

0x2e03,	// (0x000198ee) mup_osc_middle_pane

0x2e0c,	// (0x000198f7) mup_visualizer_osc_pane_g1

0xaf30,	// (0x00021a1b) mup_spec_bar_pane_ParamLimits

0xaf30,	// (0x00021a1b) mup_spec_bar_pane

0x2df0,	// (0x000198db) mup_spec_bar_pane_g1

0x2dfa,	// (0x000198e5) mup_spec_bar_pane_g2

0x0001,

0xf615,	// (0x00026100) mup_spec_bar_pane_g

0x896d,	// (0x0001f458) aid_cale_week_size_cell_pane_ParamLimits

0x8982,	// (0x0001f46d) bg_cale_heading_pane_ParamLimits

0x0cd1,	// (0x000177bc) bg_cale_pane_cp01_ParamLimits

0x899a,	// (0x0001f485) cale_week_corner_pane_ParamLimits

0x89b4,	// (0x0001f49f) cale_week_day_heading_pane_ParamLimits

0x89cc,	// (0x0001f4b7) cale_week_scroll_pane_g1_ParamLimits

0x89df,	// (0x0001f4ca) cale_week_scroll_pane_g2_ParamLimits

0x89f2,	// (0x0001f4dd) cale_week_scroll_pane_g3_ParamLimits

0x8a05,	// (0x0001f4f0) cale_week_scroll_pane_g4_ParamLimits

0x8a18,	// (0x0001f503) cale_week_scroll_pane_g5_ParamLimits

0x8a2b,	// (0x0001f516) cale_week_scroll_pane_g6_ParamLimits

0x8a3e,	// (0x0001f529) cale_week_scroll_pane_g7_ParamLimits

0x8a51,	// (0x0001f53c) cale_week_scroll_pane_g8_ParamLimits

0x8a64,	// (0x0001f54f) cale_week_scroll_pane_g9_ParamLimits

0x8a77,	// (0x0001f562) cale_week_scroll_pane_g10_ParamLimits

0x8a8a,	// (0x0001f575) cale_week_scroll_pane_g11_ParamLimits

0x8a9d,	// (0x0001f588) cale_week_scroll_pane_g12_ParamLimits

0x8ab0,	// (0x0001f59b) cale_week_scroll_pane_g13_ParamLimits

0x8ac3,	// (0x0001f5ae) cale_week_scroll_pane_g14_ParamLimits

0x8ad6,	// (0x0001f5c1) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x00025c97) cale_week_scroll_pane_g_ParamLimits

0x8afc,	// (0x0001f5e7) cale_week_time_pane_ParamLimits

0x8b0f,	// (0x0001f5fa) grid_cale_week_pane_ParamLimits

0x0cee,	// (0x000177d9) listscroll_cale_week_pane_t1

0x0d00,	// (0x000177eb) scroll_pane_cp08_ParamLimits

0x9599,	// (0x00020084) cale_month_corner_pane_ParamLimits

0x10f1,	// (0x00017bdc) cale_month_pane_t1

0x98af,	// (0x0002039a) cale_month_week_pane_ParamLimits

0x18f8,	// (0x000183e3) popup_call_status_window_g1_ParamLimits

0xa17a,	// (0x00020c65) popup_call_status_window_g2_ParamLimits

0xa186,	// (0x00020c71) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x00025e3d) popup_call_status_window_g_ParamLimits

0x14a8,	// (0x00017f93) aid_call2_pane

0xa854,	// (0x0002133f) msg_header_pane_g1

0xa914,	// (0x000213ff) postcard_address2_pane_ParamLimits

0xa914,	// (0x000213ff) postcard_address2_pane

0xa920,	// (0x0002140b) postcard_message2_pane_ParamLimits

0xa920,	// (0x0002140b) postcard_message2_pane

0xaee7,	// (0x000219d2) message2_row_pane_ParamLimits

0xaee7,	// (0x000219d2) message2_row_pane

0xaeff,	// (0x000219ea) address2_row_pane_ParamLimits

0xaeff,	// (0x000219ea) address2_row_pane

0x2dbe,	// (0x000198a9) postcard_message2_row_pane_g1

0x2dc6,	// (0x000198b1) postcard_message2_row_pane_t1

0x2dbe,	// (0x000198a9) address2_row_pane_g1

0x2dc6,	// (0x000198b1) address2_row_pane_t1

0x1bea,	// (0x000186d5) aid_size_cell_vorec

0x07ba,	// (0x000172a5) main_rss_pane

0xaf12,	// (0x000219fd) rss_list_single_pane_ParamLimits

0xaf12,	// (0x000219fd) rss_list_single_pane

0x2dd4,	// (0x000198bf) rss_list_single_pane_t1

0x2de2,	// (0x000198cd) rss_list_single_pane_t2

0x0001,

0xf610,	// (0x000260fb) rss_list_single_pane_t

0x07ba,	// (0x000172a5) main_camera2_pane

0x07ba,	// (0x000172a5) main_video2_pane

0x75d3,	// (0x0001e0be) cams_zoom_pane_cp2_ParamLimits

0x75d3,	// (0x0001e0be) cams_zoom_pane_cp2

0x75df,	// (0x0001e0ca) image2_vga_pane_ParamLimits

0x75df,	// (0x0001e0ca) image2_vga_pane

0x75ee,	// (0x0001e0d9) main_camera2_pane_g1_ParamLimits

0x75ee,	// (0x0001e0d9) main_camera2_pane_g1

0x75fa,	// (0x0001e0e5) main_camera2_pane_g2_ParamLimits

0x75fa,	// (0x0001e0e5) main_camera2_pane_g2

0x7606,	// (0x0001e0f1) main_camera2_pane_g3_ParamLimits

0x7606,	// (0x0001e0f1) main_camera2_pane_g3

0x7612,	// (0x0001e0fd) main_camera2_pane_g4_ParamLimits

0x7612,	// (0x0001e0fd) main_camera2_pane_g4

0x761e,	// (0x0001e109) main_camera2_pane_g5_ParamLimits

0x761e,	// (0x0001e109) main_camera2_pane_g5

0x762a,	// (0x0001e115) main_camera2_pane_g6_ParamLimits

0x762a,	// (0x0001e115) main_camera2_pane_g6

0x7636,	// (0x0001e121) main_camera2_pane_g7_ParamLimits

0x7636,	// (0x0001e121) main_camera2_pane_g7

0x7642,	// (0x0001e12d) main_camera2_pane_g8_ParamLimits

0x7642,	// (0x0001e12d) main_camera2_pane_g8

0x0008,

0xf631,	// (0x0002611c) main_camera2_pane_g_ParamLimits

0xf631,	// (0x0002611c) main_camera2_pane_g

0x765a,	// (0x0001e145) main_camera2_pane_t1_ParamLimits

0x765a,	// (0x0001e145) main_camera2_pane_t1

0x766c,	// (0x0001e157) main_camera2_pane_t2_ParamLimits

0x766c,	// (0x0001e157) main_camera2_pane_t2

0x767e,	// (0x0001e169) main_camera2_pane_t3_ParamLimits

0x767e,	// (0x0001e169) main_camera2_pane_t3

0x7690,	// (0x0001e17b) main_camera2_pane_t4_ParamLimits

0x7690,	// (0x0001e17b) main_camera2_pane_t4

0x0006,

0xf644,	// (0x0002612f) main_camera2_pane_t_ParamLimits

0xf644,	// (0x0002612f) main_camera2_pane_t

0x76eb,	// (0x0001e1d6) cams_zoom_pane_cp4_ParamLimits

0x76eb,	// (0x0001e1d6) cams_zoom_pane_cp4

0x76fb,	// (0x0001e1e6) image2_cif_pane_ParamLimits

0x76fb,	// (0x0001e1e6) image2_cif_pane

0x770c,	// (0x0001e1f7) image2_subqcif_pane_ParamLimits

0x770c,	// (0x0001e1f7) image2_subqcif_pane

0x7719,	// (0x0001e204) main_video2_pane_g1_ParamLimits

0x7719,	// (0x0001e204) main_video2_pane_g1

0x772b,	// (0x0001e216) main_video2_pane_g2_ParamLimits

0x772b,	// (0x0001e216) main_video2_pane_g2

0x773b,	// (0x0001e226) main_video2_pane_g3_ParamLimits

0x773b,	// (0x0001e226) main_video2_pane_g3

0x774b,	// (0x0001e236) main_video2_pane_g4_ParamLimits

0x774b,	// (0x0001e236) main_video2_pane_g4

0x775b,	// (0x0001e246) main_video2_pane_g5_ParamLimits

0x775b,	// (0x0001e246) main_video2_pane_g5

0x776b,	// (0x0001e256) main_video2_pane_g6_ParamLimits

0x776b,	// (0x0001e256) main_video2_pane_g6

0x0005,

0xf653,	// (0x0002613e) main_video2_pane_g_ParamLimits

0xf653,	// (0x0002613e) main_video2_pane_g

0x777d,	// (0x0001e268) main_video2_pane_t1_ParamLimits

0x777d,	// (0x0001e268) main_video2_pane_t1

0x7797,	// (0x0001e282) main_video2_pane_t2_ParamLimits

0x7797,	// (0x0001e282) main_video2_pane_t2

0x77bd,	// (0x0001e2a8) main_video2_pane_t3_ParamLimits

0x77bd,	// (0x0001e2a8) main_video2_pane_t3

0x0002,

0xf660,	// (0x0002614b) main_video2_pane_t_ParamLimits

0xf660,	// (0x0002614b) main_video2_pane_t

0xadc8,	// (0x000218b3) call_muted_g2

0x0001,

0xf602,	// (0x000260ed) call_muted_g

0x07ba,	// (0x000172a5) main_mup2_pane

0x2ebe,	// (0x000199a9) main_mup2_pane_g1_ParamLimits

0x2ebe,	// (0x000199a9) main_mup2_pane_g1

0xb0b7,	// (0x00021ba2) main_mup2_pane_g2_ParamLimits

0xb0b7,	// (0x00021ba2) main_mup2_pane_g2

0x780c,	// (0x0001e2f7) main_mup_pane_g13_cp1

0x7814,	// (0x0001e2ff) mup_volume_pane_cp1

0xb0d7,	// (0x00021bc2) main_mup2_pane_g4_ParamLimits

0xb0d7,	// (0x00021bc2) main_mup2_pane_g4

0xb0e8,	// (0x00021bd3) main_mup2_pane_g5_ParamLimits

0xb0e8,	// (0x00021bd3) main_mup2_pane_g5

0xb0f9,	// (0x00021be4) main_mup2_pane_g6_ParamLimits

0xb0f9,	// (0x00021be4) main_mup2_pane_g6

0xb10a,	// (0x00021bf5) main_mup2_pane_g7_ParamLimits

0xb10a,	// (0x00021bf5) main_mup2_pane_g7

0x0006,

0xf667,	// (0x00026152) main_mup2_pane_g_ParamLimits

0xf667,	// (0x00026152) main_mup2_pane_g

0xb126,	// (0x00021c11) main_mup2_pane_t1_ParamLimits

0xb126,	// (0x00021c11) main_mup2_pane_t1

0xb13d,	// (0x00021c28) main_mup2_pane_t2_ParamLimits

0xb13d,	// (0x00021c28) main_mup2_pane_t2

0xb154,	// (0x00021c3f) main_mup2_pane_t3_ParamLimits

0xb154,	// (0x00021c3f) main_mup2_pane_t3

0xb16b,	// (0x00021c56) main_mup2_pane_t4_ParamLimits

0xb16b,	// (0x00021c56) main_mup2_pane_t4

0xb185,	// (0x00021c70) main_mup2_pane_t5_ParamLimits

0xb185,	// (0x00021c70) main_mup2_pane_t5

0xb19f,	// (0x00021c8a) main_mup2_pane_t6_ParamLimits

0xb19f,	// (0x00021c8a) main_mup2_pane_t6

0x0005,

0xf676,	// (0x00026161) main_mup2_pane_t_ParamLimits

0xf676,	// (0x00026161) main_mup2_pane_t

0xb1d7,	// (0x00021cc2) mup2_visualizer_pane_ParamLimits

0xb1d7,	// (0x00021cc2) mup2_visualizer_pane

0xb209,	// (0x00021cf4) mup_progress_pane_cp_ParamLimits

0xb209,	// (0x00021cf4) mup_progress_pane_cp

0x77f7,	// (0x0001e2e2) mup_volume_pane_cp_ParamLimits

0x77f7,	// (0x0001e2e2) mup_volume_pane_cp

0xb220,	// (0x00021d0b) mup2_visualizer_pane_g1_ParamLimits

0xb220,	// (0x00021d0b) mup2_visualizer_pane_g1

0x2e90,	// (0x0001997b) mup2_visualizer_pane_g2_ParamLimits

0x2e90,	// (0x0001997b) mup2_visualizer_pane_g2

0xb235,	// (0x00021d20) mup2_visualizer_pane_g3_ParamLimits

0xb235,	// (0x00021d20) mup2_visualizer_pane_g3

0x0002,

0xf683,	// (0x0002616e) mup2_visualizer_pane_g_ParamLimits

0xf683,	// (0x0002616e) mup2_visualizer_pane_g

0x1bea,	// (0x000186d5) aid_size_cell_fmradio

0x7433,	// (0x0001df1e) aid_height_parent_landcape

0x0f4e,	// (0x00017a39) wml_content_pane_cp

0x0f56,	// (0x00017a41) wml_tabs_pane

0x0f5f,	// (0x00017a4a) popup_wml_miniature_window

0x0f67,	// (0x00017a52) scroll_pane_cp021

0x0f7b,	// (0x00017a66) wml_content_pane_comp8

0x07ba,	// (0x000172a5) bg_popup_sub_pane_cp05

0x2eae,	// (0x00019999) popup_wml_miniature_window_g1

0x2eb6,	// (0x000199a1) wml_miniature_view_pane

0xb241,	// (0x00021d2c) aid_size_wml_view

0xb249,	// (0x00021d34) wml_miniature_view_pane_g1

0xb252,	// (0x00021d3d) wml_miniature_view_pane_g2

0xb25b,	// (0x00021d46) wml_miniature_view_pane_g3

0xb263,	// (0x00021d4e) wml_miniature_view_pane_g4

0xb26b,	// (0x00021d56) wml_miniature_view_pane_g5

0xb273,	// (0x00021d5e) wml_miniature_view_pane_g6

0xb27b,	// (0x00021d66) wml_miniature_view_pane_g7

0xb283,	// (0x00021d6e) wml_miniature_view_pane_g8

0x0007,

0xf68a,	// (0x00026175) wml_miniature_view_pane_g

0x2ebe,	// (0x000199a9) background_graphic_ParamLimits

0x2ebe,	// (0x000199a9) background_graphic

0x2eca,	// (0x000199b5) wml_tabs_2_pane

0x2ed3,	// (0x000199be) wml_tabs_3_pane_ParamLimits

0x2ed3,	// (0x000199be) wml_tabs_3_pane

0x2ee5,	// (0x000199d0) wml_tabs_4_pane_ParamLimits

0x2ee5,	// (0x000199d0) wml_tabs_4_pane

0x2efb,	// (0x000199e6) wml_tabs_5_pane_ParamLimits

0x2efb,	// (0x000199e6) wml_tabs_5_pane

0x2f15,	// (0x00019a00) wml_tabs_pane_g2_ParamLimits

0x2f15,	// (0x00019a00) wml_tabs_pane_g2

0x2f29,	// (0x00019a14) wml_tabs_pane_g3_ParamLimits

0x2f29,	// (0x00019a14) wml_tabs_pane_g3

0xb28b,	// (0x00021d76) wml_tabs_2_active_pane_ParamLimits

0xb28b,	// (0x00021d76) wml_tabs_2_active_pane

0xb29b,	// (0x00021d86) wml_tabs_2_passive_pane_ParamLimits

0xb29b,	// (0x00021d86) wml_tabs_2_passive_pane

0xb2ab,	// (0x00021d96) wml_tabs_3_active_pane_cp_ParamLimits

0xb2ab,	// (0x00021d96) wml_tabs_3_active_pane_cp

0xb2bc,	// (0x00021da7) wml_tabs_3_passive_pane_ParamLimits

0xb2bc,	// (0x00021da7) wml_tabs_3_passive_pane

0xb2cd,	// (0x00021db8) wml_tabs_3_passive_pane_cp_ParamLimits

0xb2cd,	// (0x00021db8) wml_tabs_3_passive_pane_cp

0xb2de,	// (0x00021dc9) tabs_4_active_pane

0xb2e6,	// (0x00021dd1) tabs_4_passive_pane

0xb2ee,	// (0x00021dd9) tabs_4_passive_pane_cp

0xb2f6,	// (0x00021de1) tabs_4_passive_pane_cp2

0xacab,	// (0x00021796) aid_height_text

0xa61c,	// (0x00021107) mup_volume_cont_pane_ParamLimits

0xa61c,	// (0x00021107) mup_volume_cont_pane

0x86bb,	// (0x0001f1a6) aid_size_cell_pinb

0x86c5,	// (0x0001f1b0) aid_size_list_pinb

0xb1f2,	// (0x00021cdd) mup2_volume_cont_pane_ParamLimits

0xb1f2,	// (0x00021cdd) mup2_volume_cont_pane

0x77e3,	// (0x0001e2ce) mup2_volume_cont_pane_g1_ParamLimits

0x77e3,	// (0x0001e2ce) mup2_volume_cont_pane_g1

0x6d17,	// (0x0001d802) aid_size_cell_touch_ParamLimits

0x6d17,	// (0x0001d802) aid_size_cell_touch

0x6f3c,	// (0x0001da27) touch_pane_ParamLimits

0x6f3c,	// (0x0001da27) touch_pane

0x6f32,	// (0x0001da1d) main_rss2_pane

0x2f7f,	// (0x00019a6a) listscroll_rss2_pane

0x2f88,	// (0x00019a73) rss2_navigation_pane

0x2f90,	// (0x00019a7b) list_rss2_pane

0x1646,	// (0x00018131) scroll_pane_cp22

0x2f98,	// (0x00019a83) rss2_navigation_pane_g1

0x2fa1,	// (0x00019a8c) rss2_navigation_pane_g2

0x2fa9,	// (0x00019a94) rss2_navigation_pane_g3

0x0002,

0xf69b,	// (0x00026186) rss2_navigation_pane_g

0x2fb1,	// (0x00019a9c) rss2_navigation_pane_t1

0xb2fe,	// (0x00021de9) rss2_list_single_pane_ParamLimits

0xb2fe,	// (0x00021de9) rss2_list_single_pane

0x2fbf,	// (0x00019aaa) rss2_list_single_pane_t2

0x2fcd,	// (0x00019ab8) rss2_list_single_pane_t3_ParamLimits

0x2fcd,	// (0x00019ab8) rss2_list_single_pane_t3

0x2fea,	// (0x00019ad5) rss2_list_single_pane_t4

0x9f4b,	// (0x00020a36) smil_status_pane_g1

0x743d,	// (0x0001df28) main_image2_pane_ParamLimits

0x743d,	// (0x0001df28) main_image2_pane

0x764e,	// (0x0001e139) main_camera2_pane_g9_ParamLimits

0x764e,	// (0x0001e139) main_camera2_pane_g9

0x76a2,	// (0x0001e18d) main_camera2_pane_t5_ParamLimits

0x76a2,	// (0x0001e18d) main_camera2_pane_t5

0x76b4,	// (0x0001e19f) main_camera2_pane_t6_ParamLimits

0x76b4,	// (0x0001e19f) main_camera2_pane_t6

0xb315,	// (0x00021e00) main_image2_pane_g1_ParamLimits

0xb315,	// (0x00021e00) main_image2_pane_g1

0xaac0,	// (0x000215ab) smil2_video_pane_ParamLimits

0xaac0,	// (0x000215ab) smil2_video_pane

0x6d47,	// (0x0001d832) aid_zoom_text_primary_cp

0x6edb,	// (0x0001d9c6) popup_preview_fixed_window

0x0ea8,	// (0x00017993) im_reading_pane_g1

0x75aa,	// (0x0001e095) cams2_bc_adjust_pane_cp_ParamLimits

0x75aa,	// (0x0001e095) cams2_bc_adjust_pane_cp

0x76df,	// (0x0001e1ca) cams2_bc_adjust_pane_ParamLimits

0x76df,	// (0x0001e1ca) cams2_bc_adjust_pane

0x4782,	// (0x0001b26d) cams2_bc_adjust_pane_g1

0x781c,	// (0x0001e307) cams2_slider_pane

0x7825,	// (0x0001e310) cams2_slider_pane_g1

0x782e,	// (0x0001e319) cams2_slider_pane_g2

0x0006,

0xf6a2,	// (0x0002618d) cams2_slider_pane_g

0x6fa3,	// (0x0001da8e) calc_display_pane_ParamLimits

0x6fbb,	// (0x0001daa6) calc_paper_pane_ParamLimits

0x6fd7,	// (0x0001dac2) grid_calc_pane_ParamLimits

0x7392,	// (0x0001de7d) popup_clock_digital_window_t1_ParamLimits

0x1b87,	// (0x00018672) main_image_pane_t1

0x6f89,	// (0x0001da74) aid_size_cell_calc_ParamLimits

0x6f89,	// (0x0001da74) aid_size_cell_calc

0x746e,	// (0x0001df59) popup_blid_sat_info2_window_ParamLimits

0x746e,	// (0x0001df59) popup_blid_sat_info2_window

0x3034,	// (0x00019b1f) aid_size_cell_blid

0x303c,	// (0x00019b27) bg_popup_window_pane_cp07

0x305f,	// (0x00019b4a) grid_popup_blid_pane

0x3067,	// (0x00019b52) heading_pane_cp05_ParamLimits

0x3067,	// (0x00019b52) heading_pane_cp05

0x312f,	// (0x00019c1a) cell_popup_blid_pane_ParamLimits

0x312f,	// (0x00019c1a) cell_popup_blid_pane

0x314f,	// (0x00019c3a) cell_popup_blid_pane_g1

0x3157,	// (0x00019c42) cell_popup_blid_pane_t1

0xb1bc,	// (0x00021ca7) mup2_indicator_pane_ParamLimits

0xb1bc,	// (0x00021ca7) mup2_indicator_pane

0x0d6f,	// (0x0001785a) mup2_visualizer_osc_pane

0x2e9c,	// (0x00019987) mup2_visualizer_spec_pane_ParamLimits

0x2e9c,	// (0x00019987) mup2_visualizer_spec_pane

0xb321,	// (0x00021e0c) mup2_spec_half_pane

0xb32a,	// (0x00021e15) mup2_spec_half_pane_cp

0xb332,	// (0x00021e1d) mup2_spec_bar_pane_ParamLimits

0xb332,	// (0x00021e1d) mup2_spec_bar_pane

0x2df0,	// (0x000198db) mup2_spec_bar_pane_g1

0x2dfa,	// (0x000198e5) mup2_spec_bar_pane_g2

0x0001,

0xf615,	// (0x00026100) mup2_spec_bar_pane_g

0xb351,	// (0x00021e3c) mup2_osc_middle_pane

0x2e0c,	// (0x000198f7) mup2_visualizer_osc_pane_g1

0x03c9,	// (0x00016eb4) popup_number_entry_window_t1_ParamLimits

0x03dc,	// (0x00016ec7) popup_number_entry_window_t2_ParamLimits

0x03ee,	// (0x00016ed9) popup_number_entry_window_t3_ParamLimits

0x8608,	// (0x0001f0f3) popup_number_entry_window_t5_ParamLimits

0x8608,	// (0x0001f0f3) popup_number_entry_window_t5

0xf0c6,	// (0x00025bb1) popup_number_entry_window_t_ParamLimits

0x0400,	// (0x00016eeb) text_title_cp2_ParamLimits

0x73d1,	// (0x0001debc) aid_hotspot_pointer_text2_pane

0x7427,	// (0x0001df12) main_viewer_pane_g9_ParamLimits

0x7427,	// (0x0001df12) main_viewer_pane_g9

0x10f1,	// (0x00017bdc) cale_month_pane_t1_ParamLimits

0x1145,	// (0x00017c30) bg_cale_pane_ParamLimits

0x115d,	// (0x00017c48) list_cale_pane_ParamLimits

0x116e,	// (0x00017c59) listscroll_cale_day_pane_t1

0x1180,	// (0x00017c6b) scroll_pane_cp09_ParamLimits

0xa657,	// (0x00021142) main_mup_eq_pane_t1_ParamLimits

0xa657,	// (0x00021142) main_mup_eq_pane_t1

0xa66d,	// (0x00021158) main_mup_eq_pane_t2_ParamLimits

0xa66d,	// (0x00021158) main_mup_eq_pane_t2

0xa683,	// (0x0002116e) main_mup_eq_pane_t3_ParamLimits

0xa683,	// (0x0002116e) main_mup_eq_pane_t3

0xa699,	// (0x00021184) main_mup_eq_pane_t4_ParamLimits

0xa699,	// (0x00021184) main_mup_eq_pane_t4

0xa6af,	// (0x0002119a) main_mup_eq_pane_t5_ParamLimits

0xa6af,	// (0x0002119a) main_mup_eq_pane_t5

0xa6c5,	// (0x000211b0) main_mup_eq_pane_t6_ParamLimits

0xa6c5,	// (0x000211b0) main_mup_eq_pane_t6

0xa6d7,	// (0x000211c2) main_mup_eq_pane_t7_ParamLimits

0xa6d7,	// (0x000211c2) main_mup_eq_pane_t7

0xa6e9,	// (0x000211d4) main_mup_eq_pane_t8_ParamLimits

0xa6e9,	// (0x000211d4) main_mup_eq_pane_t8

0xa6fb,	// (0x000211e6) main_mup_eq_pane_t9_ParamLimits

0xa6fb,	// (0x000211e6) main_mup_eq_pane_t9

0xa711,	// (0x000211fc) main_mup_eq_pane_t10_ParamLimits

0xa711,	// (0x000211fc) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x00025f3c) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x00025f3c) main_mup_eq_pane_t

0xa7a4,	// (0x0002128f) mup_equalizer_pane_cp5_ParamLimits

0xa7b6,	// (0x000212a1) mup_equalizer_pane_cp6_ParamLimits

0xa7c8,	// (0x000212b3) mup_equalizer_pane_cp7_ParamLimits

0x6f32,	// (0x0001da1d) main_gallery_pane

0x2e15,	// (0x00019900) smil2_volume_pane

0x2e30,	// (0x0001991b) smil_status_volume_pane_g1_ParamLimits

0x2e1d,	// (0x00019908) smil_status_volume_pane_g2_ParamLimits

0x757c,	// (0x0001e067) smil_status_volume_pane_g3_ParamLimits

0xf61a,	// (0x00026105) smil_status_volume_pane_g_ParamLimits

0x303c,	// (0x00019b27) bg_popup_window_pane_cp07_ParamLimits

0x304a,	// (0x00019b35) blid_firmament_pane

0xb35a,	// (0x00021e45) aid_size_cell_gallery_ParamLimits

0xb35a,	// (0x00021e45) aid_size_cell_gallery

0xb368,	// (0x00021e53) grid_gallery_pane_ParamLimits

0xb368,	// (0x00021e53) grid_gallery_pane

0xb374,	// (0x00021e5f) cell_gallery_pane_ParamLimits

0xb374,	// (0x00021e5f) cell_gallery_pane

0x3165,	// (0x00019c50) bg_cell_gallery_focus_pane_ParamLimits

0x3165,	// (0x00019c50) bg_cell_gallery_focus_pane

0x3177,	// (0x00019c62) cell_gallery_pane_g1_ParamLimits

0x3177,	// (0x00019c62) cell_gallery_pane_g1

0xb3b3,	// (0x00021e9e) cell_gallery_pane_g2_ParamLimits

0xb3b3,	// (0x00021e9e) cell_gallery_pane_g2

0xb3c0,	// (0x00021eab) cell_gallery_pane_g3_ParamLimits

0xb3c0,	// (0x00021eab) cell_gallery_pane_g3

0x3183,	// (0x00019c6e) cell_gallery_pane_g4_ParamLimits

0x3183,	// (0x00019c6e) cell_gallery_pane_g4

0x0003,

0xf6c8,	// (0x000261b3) cell_gallery_pane_g_ParamLimits

0xf6c8,	// (0x000261b3) cell_gallery_pane_g

0x318f,	// (0x00019c7a) bg_cell_gallery_focus_pane_g1

0x3197,	// (0x00019c82) bg_cell_gallery_focus_pane_g2

0x319f,	// (0x00019c8a) bg_cell_gallery_focus_pane_g3

0x31a7,	// (0x00019c92) bg_cell_gallery_focus_pane_g4

0x31af,	// (0x00019c9a) bg_cell_gallery_focus_pane_g5

0x31b7,	// (0x00019ca2) bg_cell_gallery_focus_pane_g6

0x31bf,	// (0x00019caa) bg_cell_gallery_focus_pane_g7

0x31c7,	// (0x00019cb2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d1,	// (0x000261bc) bg_cell_gallery_focus_pane_g

0x31cf,	// (0x00019cba) aid_firma_cardinal

0x31e3,	// (0x00019cce) blid_firmament_pane_t1

0x31fa,	// (0x00019ce5) blid_firmament_pane_t2

0x3211,	// (0x00019cfc) blid_firmament_pane_t3

0x3228,	// (0x00019d13) blid_firmament_pane_t4

0x0003,

0xf6e2,	// (0x000261cd) blid_firmament_pane_t

0x323f,	// (0x00019d2a) blid_sat_info_pane

0x324f,	// (0x00019d3a) blid_sat_info_pane_g1

0x324f,	// (0x00019d3a) blid_sat_info_pane_g2

0x0001,

0xf6eb,	// (0x000261d6) blid_sat_info_pane_g

0x3259,	// (0x00019d44) blid_sat_info_pane_t1

0x3267,	// (0x00019d52) smil2_volume_content_pane

0x3270,	// (0x00019d5b) smil2_volume_pane_g1

0x3278,	// (0x00019d63) smil2_volume_content_pane_g1

0x3281,	// (0x00019d6c) smil2_volume_content_pane_g2

0x328a,	// (0x00019d75) smil2_volume_content_pane_g3

0x3293,	// (0x00019d7e) smil2_volume_content_pane_g4

0x329c,	// (0x00019d87) smil2_volume_content_pane_g5

0x32a5,	// (0x00019d90) smil2_volume_content_pane_g6

0x32ae,	// (0x00019d99) smil2_volume_content_pane_g7

0x32b7,	// (0x00019da2) smil2_volume_content_pane_g8

0x32c0,	// (0x00019dab) smil2_volume_content_pane_g9

0x32c9,	// (0x00019db4) smil2_volume_content_pane_g10

0x0009,

0xf6f0,	// (0x000261db) smil2_volume_content_pane_g

0x8b72,	// (0x0001f65d) cale_week_day_heading_pane_t1_ParamLimits

0x8bad,	// (0x0001f698) cale_week_day_heading_pane_t2_ParamLimits

0x8be8,	// (0x0001f6d3) cale_week_day_heading_pane_t3_ParamLimits

0x8c23,	// (0x0001f70e) cale_week_day_heading_pane_t4_ParamLimits

0x8c5e,	// (0x0001f749) cale_week_day_heading_pane_t5_ParamLimits

0x8c99,	// (0x0001f784) cale_week_day_heading_pane_t6_ParamLimits

0x8cd4,	// (0x0001f7bf) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x00025cb8) cale_week_day_heading_pane_t_ParamLimits

0x0d1d,	// (0x00017808) bg_cale_side_pane_ParamLimits

0x7118,	// (0x0001dc03) cale_week_time_pane_t1_ParamLimits

0x7152,	// (0x0001dc3d) cale_week_time_pane_t2_ParamLimits

0x718c,	// (0x0001dc77) cale_week_time_pane_t3_ParamLimits

0x71c6,	// (0x0001dcb1) cale_week_time_pane_t4_ParamLimits

0x7200,	// (0x0001dceb) cale_week_time_pane_t5_ParamLimits

0x723a,	// (0x0001dd25) cale_week_time_pane_t6_ParamLimits

0x7274,	// (0x0001dd5f) cale_week_time_pane_t7_ParamLimits

0x72ae,	// (0x0001dd99) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x00025cc7) cale_week_time_pane_t_ParamLimits

0x8d0f,	// (0x0001f7fa) cell_cale_week_pane_g2_ParamLimits

0x0d1d,	// (0x00017808) bg_cale_side_pane_cp01_ParamLimits

0x9cd4,	// (0x000207bf) cale_month_week_pane_t1_ParamLimits

0x9d0d,	// (0x000207f8) cale_month_week_pane_t2_ParamLimits

0x9d46,	// (0x00020831) cale_month_week_pane_t3_ParamLimits

0x9d7f,	// (0x0002086a) cale_month_week_pane_t4_ParamLimits

0x9db8,	// (0x000208a3) cale_month_week_pane_t5_ParamLimits

0x9df1,	// (0x000208dc) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x00025d9c) cale_month_week_pane_t_ParamLimits

0x72f2,	// (0x0001dddd) cell_cale_month_pane_g1_ParamLimits

0x6f32,	// (0x0001da1d) main_cale_event_viewer_pane

0x0348,	// (0x00016e33) listscroll_cale_event_viewer_pane

0x32d2,	// (0x00019dbd) list_cale_ev_pane

0x32da,	// (0x00019dc5) scroll_pane_cp023

0xb3cd,	// (0x00021eb8) field_cale_ev_pane_ParamLimits

0xb3cd,	// (0x00021eb8) field_cale_ev_pane

0x32e6,	// (0x00019dd1) field_cale_ev_content_pane_ParamLimits

0x32e6,	// (0x00019dd1) field_cale_ev_content_pane

0x32f2,	// (0x00019ddd) field_cale_ev_pane_g1_ParamLimits

0x32f2,	// (0x00019ddd) field_cale_ev_pane_g1

0x32fe,	// (0x00019de9) field_cale_ev_pane_g2_ParamLimits

0x32fe,	// (0x00019de9) field_cale_ev_pane_g2

0x3316,	// (0x00019e01) field_cale_ev_pane_g3_ParamLimits

0x3316,	// (0x00019e01) field_cale_ev_pane_g3

0x0002,

0xf705,	// (0x000261f0) field_cale_ev_pane_g_ParamLimits

0xf705,	// (0x000261f0) field_cale_ev_pane_g

0x332e,	// (0x00019e19) field_cale_ev_pane_t1_ParamLimits

0x332e,	// (0x00019e19) field_cale_ev_pane_t1

0xb3e7,	// (0x00021ed2) field_cale_ev_content_pane_t1_ParamLimits

0xb3e7,	// (0x00021ed2) field_cale_ev_content_pane_t1

0x19b8,	// (0x000184a3) bg_button_pane_cp01

0x895d,	// (0x0001f448) listscroll_cale_week_pane_ParamLimits

0x0cc8,	// (0x000177b3) popup_toolbar_window_cp01

0x0cee,	// (0x000177d9) listscroll_cale_week_pane_t1_ParamLimits

0x895d,	// (0x0001f448) listscroll_cale_day_pane_ParamLimits

0x0cc8,	// (0x000177b3) popup_toolbar_window_cp02

0x116e,	// (0x00017c59) listscroll_cale_day_pane_t1_ParamLimits

0x895d,	// (0x0001f448) main_cale_month_pane_ParamLimits

0x7541,	// (0x0001e02c) popup_toolbar_window_cp03_ParamLimits

0x7541,	// (0x0001e02c) popup_toolbar_window_cp03

0xa9e8,	// (0x000214d3) main_image_pane_g2_ParamLimits

0xa9e8,	// (0x000214d3) main_image_pane_g2

0xa9f4,	// (0x000214df) main_image_pane_g3_ParamLimits

0xa9f4,	// (0x000214df) main_image_pane_g3

0x0002,

0xf4e3,	// (0x00025fce) main_image_pane_g_ParamLimits

0xf4e3,	// (0x00025fce) main_image_pane_g

0x1b87,	// (0x00018672) main_image_pane_t1_ParamLimits

0xaa00,	// (0x000214eb) main_image_pane_t2_ParamLimits

0xaa00,	// (0x000214eb) main_image_pane_t2

0xaa12,	// (0x000214fd) main_image_pane_t3_ParamLimits

0xaa12,	// (0x000214fd) main_image_pane_t3

0xaa24,	// (0x0002150f) main_image_pane_t4_ParamLimits

0xaa24,	// (0x0002150f) main_image_pane_t4

0x0003,

0xf4ea,	// (0x00025fd5) main_image_pane_t_ParamLimits

0xf4ea,	// (0x00025fd5) main_image_pane_t

0xaa36,	// (0x00021521) popup_image_details_window_cp01

0xaa3e,	// (0x00021529) popup_toobar_trans_pane_cp01_ParamLimits

0xaa3e,	// (0x00021529) popup_toobar_trans_pane_cp01

0x74b5,	// (0x0001dfa0) popup_image_details_window_ParamLimits

0x74b5,	// (0x0001dfa0) popup_image_details_window

0x74c1,	// (0x0001dfac) popup_image_focus_window

0x759e,	// (0x0001e089) camera2_autofocus_pane_ParamLimits

0x759e,	// (0x0001e089) camera2_autofocus_pane

0x0348,	// (0x00016e33) bg_popup_sub_pane_cp06

0x3345,	// (0x00019e30) popup_image_focus_window_g1

0x334d,	// (0x00019e38) popup_image_focus_window_g2

0x3355,	// (0x00019e40) popup_image_focus_window_g3

0x335d,	// (0x00019e48) popup_image_focus_window_g4

0x0003,

0xf70c,	// (0x000261f7) popup_image_focus_window_g

0x3365,	// (0x00019e50) popup_image_focus_window_t1

0x3373,	// (0x00019e5e) popup_image_focus_window_t2

0x3382,	// (0x00019e6d) popup_image_focus_window_t3

0x0002,

0xf715,	// (0x00026200) popup_image_focus_window_t

0x3390,	// (0x00019e7b) camera2_autofocus_pane_g1

0x039b,	// (0x00016e86) bg_tb_trans_pane_cp01

0x339e,	// (0x00019e89) popup_image_details_window_g1

0x33b1,	// (0x00019e9c) popup_image_details_window_g2

0x0002,

0xf727,	// (0x00026212) popup_image_details_window_g

0x33da,	// (0x00019ec5) popup_image_details_window_t1

0x33ec,	// (0x00019ed7) popup_image_details_window_t2

0x3405,	// (0x00019ef0) popup_image_details_window_t3

0x3419,	// (0x00019f04) popup_image_details_window_t4

0x3434,	// (0x00019f1f) popup_image_details_window_t5

0x0004,

0xf72e,	// (0x00026219) popup_image_details_window_t

0x0ace,	// (0x000175b9) bg_calc_paper_pane_ParamLimits

0x6f32,	// (0x0001da1d) grid_highlight_pane_cp013

0x6ff7,	// (0x0001dae2) list_calc_pane_ParamLimits

0x7009,	// (0x0001daf4) scroll_pane_cp024

0x0b00,	// (0x000175eb) bg_calc_display_pane_ParamLimits

0x7011,	// (0x0001dafc) calc_display_pane_t1_ParamLimits

0x7026,	// (0x0001db11) calc_display_pane_t2_ParamLimits

0x703b,	// (0x0001db26) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x00025c38) calc_display_pane_t_ParamLimits

0x709c,	// (0x0001db87) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x00025c55) cell_calc_pane_g

0x70a5,	// (0x0001db90) cell_calc_pane_t1

0x0bad,	// (0x00017698) grid_highlight_pane_cp02_ParamLimits

0x0bc3,	// (0x000176ae) toolbar_button_pane_cp01_ParamLimits

0x0bc3,	// (0x000176ae) toolbar_button_pane_cp01

0x1bcc,	// (0x000186b7) temp_image_control_pane_ParamLimits

0x1bcc,	// (0x000186b7) temp_image_control_pane

0x743d,	// (0x0001df28) main_mp3_pane

0x344e,	// (0x00019f39) temp_image_control_pane_g1_ParamLimits

0x344e,	// (0x00019f39) temp_image_control_pane_g1

0x345c,	// (0x00019f47) temp_image_control_pane_g2_ParamLimits

0x345c,	// (0x00019f47) temp_image_control_pane_g2

0x346e,	// (0x00019f59) temp_image_control_pane_g3_ParamLimits

0x346e,	// (0x00019f59) temp_image_control_pane_g3

0xb431,	// (0x00021f1c) temp_image_control_pane_g4_ParamLimits

0xb431,	// (0x00021f1c) temp_image_control_pane_g4

0x0003,

0xf739,	// (0x00026224) temp_image_control_pane_g_ParamLimits

0xf739,	// (0x00026224) temp_image_control_pane_g

0x344e,	// (0x00019f39) main_mp3_pane_g1

0xb442,	// (0x00021f2d) main_mp3_pane_g2

0x0007,

0xf742,	// (0x0002622d) main_mp3_pane_g

0x34b1,	// (0x00019f9c) main_mp3_pane_t1

0x0db9,	// (0x000178a4) main_camera_pane_g8_ParamLimits

0x0db9,	// (0x000178a4) main_camera_pane_g8

0x8f2e,	// (0x0001fa19) main_video_pane_g7_ParamLimits

0x8f2e,	// (0x0001fa19) main_video_pane_g7

0x76cd,	// (0x0001e1b8) main_camera2_pane_t7_ParamLimits

0x76cd,	// (0x0001e1b8) main_camera2_pane_t7

0x0f0e,	// (0x000179f9) scroll_pane_cp025_ParamLimits

0x0f0e,	// (0x000179f9) scroll_pane_cp025

0x0f22,	// (0x00017a0d) scroll_pane_cp026_ParamLimits

0x0f22,	// (0x00017a0d) scroll_pane_cp026

0x0f31,	// (0x00017a1c) wml_content_pane_ParamLimits

0x6f32,	// (0x0001da1d) main_touch_calib_pane

0xb4da,	// (0x00021fc5) main_touch_calib_pane_g1

0xb4e6,	// (0x00021fd1) main_touch_calib_pane_g2

0xb4f2,	// (0x00021fdd) main_touch_calib_pane_g3

0xb4fe,	// (0x00021fe9) main_touch_calib_pane_g4

0x0003,

0xf760,	// (0x0002624b) main_touch_calib_pane_g

0xb50a,	// (0x00021ff5) main_touch_calib_pane_t1

0xb51f,	// (0x0002200a) main_touch_calib_pane_t2

0x0004,

0xf769,	// (0x00026254) main_touch_calib_pane_t

0x1702,	// (0x000181ed) mup_progress_pane_cp02

0x1737,	// (0x00018222) navi_pane_g1

0x17c2,	// (0x000182ad) navi_pane_mp_t3

0x743d,	// (0x0001df28) main_mp3_pane_ParamLimits

0xaeaa,	// (0x00021995) navi_pane_ParamLimits

0x344e,	// (0x00019f39) main_mp3_pane_g1_ParamLimits

0xb442,	// (0x00021f2d) main_mp3_pane_g2_ParamLimits

0xb44e,	// (0x00021f39) main_mp3_pane_g3_ParamLimits

0xb44e,	// (0x00021f39) main_mp3_pane_g3

0xb45a,	// (0x00021f45) main_mp3_pane_g4_ParamLimits

0xb45a,	// (0x00021f45) main_mp3_pane_g4

0x347e,	// (0x00019f69) main_mp3_pane_g5_ParamLimits

0x347e,	// (0x00019f69) main_mp3_pane_g5

0x348c,	// (0x00019f77) main_mp3_pane_g6_ParamLimits

0x348c,	// (0x00019f77) main_mp3_pane_g6

0x3499,	// (0x00019f84) main_mp3_pane_g7_ParamLimits

0x3499,	// (0x00019f84) main_mp3_pane_g7

0x34a5,	// (0x00019f90) main_mp3_pane_g8_ParamLimits

0x34a5,	// (0x00019f90) main_mp3_pane_g8

0xf742,	// (0x0002622d) main_mp3_pane_g_ParamLimits

0xb466,	// (0x00021f51) main_mp3_pane_t2

0xb474,	// (0x00021f5f) main_mp3_pane_t3

0x34bf,	// (0x00019faa) main_mp3_pane_t4

0x34cd,	// (0x00019fb8) main_mp3_pane_t5

0x0005,

0xf753,	// (0x0002623e) main_mp3_pane_t

0x34db,	// (0x00019fc6) mup_progress_pane_cp01

0x6d47,	// (0x0001d832) aid_zoom_text_secondary2

0x32d2,	// (0x00019dbd) list_cale_ev2_pane

0x32da,	// (0x00019dc5) scroll_pane_cp023_ParamLimits

0xb56a,	// (0x00022055) field_cale_ev2_pane_ParamLimits

0xb56a,	// (0x00022055) field_cale_ev2_pane

0x34e3,	// (0x00019fce) field_cale_ev2_pane_g1_ParamLimits

0x34e3,	// (0x00019fce) field_cale_ev2_pane_g1

0x34ef,	// (0x00019fda) field_cale_ev2_pane_g2_ParamLimits

0x34ef,	// (0x00019fda) field_cale_ev2_pane_g2

0x3507,	// (0x00019ff2) field_cale_ev2_pane_g3_ParamLimits

0x3507,	// (0x00019ff2) field_cale_ev2_pane_g3

0x0003,

0xf774,	// (0x0002625f) field_cale_ev2_pane_g_ParamLimits

0xf774,	// (0x0002625f) field_cale_ev2_pane_g

0x352b,	// (0x0001a016) field_cale_ev2_pane_t1_ParamLimits

0x352b,	// (0x0001a016) field_cale_ev2_pane_t1

0x3542,	// (0x0001a02d) field_cale_ev2_pane_t2_ParamLimits

0x3542,	// (0x0001a02d) field_cale_ev2_pane_t2

0x0001,

0xf77d,	// (0x00026268) field_cale_ev2_pane_t_ParamLimits

0xf77d,	// (0x00026268) field_cale_ev2_pane_t

0xa8e4,	// (0x000213cf) main_postcard_pane_g5_ParamLimits

0xa8e4,	// (0x000213cf) main_postcard_pane_g5

0xa8f0,	// (0x000213db) main_postcard_pane_g6_ParamLimits

0xa8f0,	// (0x000213db) main_postcard_pane_g6

0x8d83,	// (0x0001f86e) camera2_autofocus_pane_cp_ParamLimits

0x8d83,	// (0x0001f86e) camera2_autofocus_pane_cp

0x743d,	// (0x0001df28) main_mup3_pane

0xb5b9,	// (0x000220a4) main_mup3_pane_g1_ParamLimits

0xb5b9,	// (0x000220a4) main_mup3_pane_g1

0xb5da,	// (0x000220c5) main_mup3_pane_g2_ParamLimits

0xb5da,	// (0x000220c5) main_mup3_pane_g2

0xb647,	// (0x00022132) main_mup3_pane_g3_ParamLimits

0xb647,	// (0x00022132) main_mup3_pane_g3

0xb682,	// (0x0002216d) main_mup3_pane_g4_ParamLimits

0xb682,	// (0x0002216d) main_mup3_pane_g4

0xb6bd,	// (0x000221a8) main_mup3_pane_g5_ParamLimits

0xb6bd,	// (0x000221a8) main_mup3_pane_g5

0xb6f8,	// (0x000221e3) main_mup3_pane_g6_ParamLimits

0xb6f8,	// (0x000221e3) main_mup3_pane_g6

0x3557,	// (0x0001a042) main_mup3_pane_g7_ParamLimits

0x3557,	// (0x0001a042) main_mup3_pane_g7

0x0007,

0xf78d,	// (0x00026278) main_mup3_pane_g_ParamLimits

0xf78d,	// (0x00026278) main_mup3_pane_g

0xb766,	// (0x00022251) main_mup3_pane_t1_ParamLimits

0xb766,	// (0x00022251) main_mup3_pane_t1

0xb7c7,	// (0x000222b2) main_mup3_pane_t2_ParamLimits

0xb7c7,	// (0x000222b2) main_mup3_pane_t2

0xb882,	// (0x0002236d) main_mup3_pane_t4_ParamLimits

0xb882,	// (0x0002236d) main_mup3_pane_t4

0xb8c8,	// (0x000223b3) main_mup3_pane_t5_ParamLimits

0xb8c8,	// (0x000223b3) main_mup3_pane_t5

0xb96c,	// (0x00022457) main_mup3_pane_t6_ParamLimits

0xb96c,	// (0x00022457) main_mup3_pane_t6

0x0005,

0xf79e,	// (0x00026289) main_mup3_pane_t_ParamLimits

0xf79e,	// (0x00026289) main_mup3_pane_t

0xba14,	// (0x000224ff) mup3_progress_pane_ParamLimits

0xba14,	// (0x000224ff) mup3_progress_pane

0xba78,	// (0x00022563) popup_mup3_control_window_ParamLimits

0xba78,	// (0x00022563) popup_mup3_control_window

0x3565,	// (0x0001a050) popup_mup3_text_window

0xba91,	// (0x0002257c) mup3_progress_pane_t1

0xbaaf,	// (0x0002259a) mup3_progress_pane_t2

0x356d,	// (0x0001a058) mup3_progress_pane_t3

0x0002,

0xf7ab,	// (0x00026296) mup3_progress_pane_t

0x358a,	// (0x0001a075) mup_progress_pane_cp03

0x0348,	// (0x00016e33) bg_tb_trans_pane_cp04

0xbacd,	// (0x000225b8) mup3_volume_pane

0xbad5,	// (0x000225c0) popup_mup3_control_window_g1

0xbade,	// (0x000225c9) mup3_volume_pane_g1

0xbae7,	// (0x000225d2) mup3_volume_pane_g2

0xbaf0,	// (0x000225db) mup3_volume_pane_g3

0x0002,

0xf7b2,	// (0x0002629d) mup3_volume_pane_g

0x0348,	// (0x00016e33) bg_tb_trans_pane_cp03

0x359a,	// (0x0001a085) popup_mup3_text_window_g1

0x35a2,	// (0x0001a08d) popup_mup3_text_window_t1

0x0b84,	// (0x0001766f) list_calc_item_pane_g1_ParamLimits

0x2f66,	// (0x00019a51) mup_volume_pane_cp_g1

0xb534,	// (0x0002201f) main_touch_calib_pane_t3

0xb546,	// (0x00022031) main_touch_calib_pane_t4

0xb558,	// (0x00022043) main_touch_calib_pane_t5

0x6d07,	// (0x0001d7f2) aid_cell_size_toolbar2

0x6d0f,	// (0x0001d7fa) aid_popup3_width_pane

0x6d47,	// (0x0001d832) aid_zoom_text_msg_primary

0x0da1,	// (0x0001788c) vorec_t7

0x0b48,	// (0x00017633) bg_calc_paper_pane_g1_ParamLimits

0x0b60,	// (0x0001764b) bg_calc_paper_pane_g2_ParamLimits

0x0b54,	// (0x0001763f) bg_calc_paper_pane_g3_ParamLimits

0x0b78,	// (0x00017663) bg_calc_paper_pane_g4_ParamLimits

0x0b6c,	// (0x00017657) bg_calc_paper_pane_g5_ParamLimits

0x884f,	// (0x0001f33a) bg_calc_paper_pane_g6_ParamLimits

0x885e,	// (0x0001f349) bg_calc_paper_pane_g7_ParamLimits

0x886d,	// (0x0001f358) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x00025c3f) bg_calc_paper_pane_g_ParamLimits

0x887c,	// (0x0001f367) calc_bg_paper_pane_g9_ParamLimits

0x8e63,	// (0x0001f94e) image_qvga_pane_ParamLimits

0x8e63,	// (0x0001f94e) image_qvga_pane

0x0a15,	// (0x00017500) bg_popup_sub_pane_cp04_ParamLimits

0x1b03,	// (0x000185ee) popup_mup_playback_window_g1_ParamLimits

0x1b0f,	// (0x000185fa) popup_mup_playback_window_t1_ParamLimits

0x1b24,	// (0x0001860f) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x00025fc9) popup_mup_playback_window_t_ParamLimits

0xb0c8,	// (0x00021bb3) main_mup2_pane_g3_ParamLimits

0xb0c8,	// (0x00021bb3) main_mup2_pane_g3

0x91e9,	// (0x0001fcd4) popup_toolbar_window_cp04

0x1f05,	// (0x000189f0) popup_call2_audio_second_window_g3_ParamLimits

0x1f05,	// (0x000189f0) popup_call2_audio_second_window_g3

0x230f,	// (0x00018dfa) popup_call2_audio_first_window_g4_ParamLimits

0x230f,	// (0x00018dfa) popup_call2_audio_first_window_g4

0x298e,	// (0x00019479) popup_call2_audio_in_window_g4_ParamLimits

0x298e,	// (0x00019479) popup_call2_audio_in_window_g4

0xa9db,	// (0x000214c6) aid_area_sk_bg_cut_ParamLimits

0xa9db,	// (0x000214c6) aid_area_sk_bg_cut

0x1b39,	// (0x00018624) aid_area_sk_bg_cut_2_ParamLimits

0x1b39,	// (0x00018624) aid_area_sk_bg_cut_2

0xb3a3,	// (0x00021e8e) aid_placing_details_win

0xb3ab,	// (0x00021e96) aid_placing_details_win_2

0x3390,	// (0x00019e7b) camera2_autofocus_pane_g1_ParamLimits

0x6ece,	// (0x0001d9b9) popup_fixed_preview_cale_window_ParamLimits

0x6ece,	// (0x0001d9b9) popup_fixed_preview_cale_window

0x1853,	// (0x0001833e) navi_slider_pane_g3

0x184a,	// (0x00018335) navi_slider_pane_g4

0x1841,	// (0x0001832c) navi_slider_pane_g5

0x1853,	// (0x0001833e) navi_slider_pane_g6

0x73b8,	// (0x0001dea3) navi_slider_pane_g7

0x197d,	// (0x00018468) mup_scale_pane_g3

0x1986,	// (0x00018471) mup_scale_pane_g4

0x198f,	// (0x0001847a) mup_scale_pane_g5

0xa7da,	// (0x000212c5) mup_scale_pane_g6

0xa7e3,	// (0x000212ce) mup_scale_pane_g7

0x1853,	// (0x0001833e) cams2_slider_pane_g3

0x301b,	// (0x00019b06) cams2_slider_pane_g4

0x7837,	// (0x0001e322) cams2_slider_pane_g5

0x1853,	// (0x0001833e) cams2_slider_pane_g6

0x783f,	// (0x0001e32a) cams2_slider_pane_g7

0x324f,	// (0x00019d3a) camera2_autofocus_pane_cp_g1

0x2d2f,	// (0x0001981a) bg_popup_preview_window_pane_cp02_ParamLimits

0x2d2f,	// (0x0001981a) bg_popup_preview_window_pane_cp02

0x35b0,	// (0x0001a09b) list_fp_cale_pane_ParamLimits

0x35b0,	// (0x0001a09b) list_fp_cale_pane

0x35bc,	// (0x0001a0a7) popup_fixed_preview_cale_window_t1_ParamLimits

0x35bc,	// (0x0001a0a7) popup_fixed_preview_cale_window_t1

0xbaf9,	// (0x000225e4) popup_fixed_preview_cale_window_t2_ParamLimits

0xbaf9,	// (0x000225e4) popup_fixed_preview_cale_window_t2

0xbb0e,	// (0x000225f9) popup_fixed_preview_cale_window_t3_ParamLimits

0xbb0e,	// (0x000225f9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b9,	// (0x000262a4) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b9,	// (0x000262a4) popup_fixed_preview_cale_window_t

0xbb23,	// (0x0002260e) list_single_fp_cale_pane_ParamLimits

0xbb23,	// (0x0002260e) list_single_fp_cale_pane

0x35da,	// (0x0001a0c5) list_single_fp_cale_pane_g1_ParamLimits

0x35da,	// (0x0001a0c5) list_single_fp_cale_pane_g1

0x35e6,	// (0x0001a0d1) list_single_fp_cale_pane_g2_ParamLimits

0x35e6,	// (0x0001a0d1) list_single_fp_cale_pane_g2

0x0002,

0xf7c0,	// (0x000262ab) list_single_fp_cale_pane_g_ParamLimits

0xf7c0,	// (0x000262ab) list_single_fp_cale_pane_g

0x35ff,	// (0x0001a0ea) list_single_fp_cale_pane_t1_ParamLimits

0x35ff,	// (0x0001a0ea) list_single_fp_cale_pane_t1

0x3611,	// (0x0001a0fc) list_single_fp_cale_pane_t2_ParamLimits

0x3611,	// (0x0001a0fc) list_single_fp_cale_pane_t2

0x0001,

0xf7c7,	// (0x000262b2) list_single_fp_cale_pane_t_ParamLimits

0xf7c7,	// (0x000262b2) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6f32,	// (0x0001da1d) main_dialer_pane

0xbb33,	// (0x0002261e) aid_cell_size_keypad

0xbb3d,	// (0x00022628) dialer_ne_pane

0xbb45,	// (0x00022630) grid_dialer_command_1_pane

0xbb4d,	// (0x00022638) grid_dialer_command_2_pane

0xbb55,	// (0x00022640) grid_dialer_keypad_pane

0xbb65,	// (0x00022650) bg_popup_call_pane_cp06_ParamLimits

0xbb65,	// (0x00022650) bg_popup_call_pane_cp06

0xbb71,	// (0x0002265c) dialer_ne_clear_pane_ParamLimits

0xbb71,	// (0x0002265c) dialer_ne_clear_pane

0x3644,	// (0x0001a12f) dialer_ne_pane_g1

0x364c,	// (0x0001a137) dialer_ne_pane_t1_ParamLimits

0x364c,	// (0x0001a137) dialer_ne_pane_t1

0xbb7d,	// (0x00022668) dialer_ne_pane_t2_ParamLimits

0xbb7d,	// (0x00022668) dialer_ne_pane_t2

0xbb9a,	// (0x00022685) dialer_ne_pane_t3_ParamLimits

0xbb9a,	// (0x00022685) dialer_ne_pane_t3

0x0002,

0xf7cc,	// (0x000262b7) dialer_ne_pane_t_ParamLimits

0xf7cc,	// (0x000262b7) dialer_ne_pane_t

0xbbbe,	// (0x000226a9) dialer_ne_pane_t3_copy1_ParamLimits

0xbbbe,	// (0x000226a9) dialer_ne_pane_t3_copy1

0xbbe2,	// (0x000226cd) cell_dialer_keypad_pane_ParamLimits

0xbbe2,	// (0x000226cd) cell_dialer_keypad_pane

0xbbf7,	// (0x000226e2) cell_dialer_command_1_pane_ParamLimits

0xbbf7,	// (0x000226e2) cell_dialer_command_1_pane

0xbc0d,	// (0x000226f8) cell_dialer_command_2_pane_ParamLimits

0xbc0d,	// (0x000226f8) cell_dialer_command_2_pane

0x365e,	// (0x0001a149) bg_button_pane_cp02_ParamLimits

0x365e,	// (0x0001a149) bg_button_pane_cp02

0xbc1c,	// (0x00022707) cell_dialer_keypad_pane_g1_ParamLimits

0xbc1c,	// (0x00022707) cell_dialer_keypad_pane_g1

0x365e,	// (0x0001a149) bg_button_pane_cp03_ParamLimits

0x365e,	// (0x0001a149) bg_button_pane_cp03

0xbc31,	// (0x0002271c) cell_dialer_command_1_pane_g1_ParamLimits

0xbc31,	// (0x0002271c) cell_dialer_command_1_pane_g1

0x366a,	// (0x0001a155) bg_button_pane_cp04

0xbc44,	// (0x0002272f) cell_dialer_command_2_pane_g1

0x0d6f,	// (0x0001785a) bg_button_pane_cp06

0x3672,	// (0x0001a15d) dialer_ne_clear_pane_g1

0x1743,	// (0x0001822e) navi_pane_g2

0xa3d1,	// (0x00020ebc) navi_pane_g3

0x0002,

0xf3e1,	// (0x00025ecc) navi_pane_g

0x17d0,	// (0x000182bb) navi_pane_mv_g2

0x17f7,	// (0x000182e2) navi_pane_mv_g5

0xa3ee,	// (0x00020ed9) navi_pane_mv_t1

0x0b00,	// (0x000175eb) main_clock2_pane

0xbc80,	// (0x0002276b) main_clock2_list_pane_ParamLimits

0xbc80,	// (0x0002276b) main_clock2_list_pane

0xbca6,	// (0x00022791) main_clock2_pane_t1_ParamLimits

0xbca6,	// (0x00022791) main_clock2_pane_t1

0xbcc6,	// (0x000227b1) main_clock2_pane_t2_ParamLimits

0xbcc6,	// (0x000227b1) main_clock2_pane_t2

0x0004,

0xf7d8,	// (0x000262c3) main_clock2_pane_t_ParamLimits

0xf7d8,	// (0x000262c3) main_clock2_pane_t

0xbd1f,	// (0x0002280a) popup_clock_analogue_window_cp03_ParamLimits

0xbd1f,	// (0x0002280a) popup_clock_analogue_window_cp03

0xbd3d,	// (0x00022828) popup_clock_digital_window_cp02_ParamLimits

0xbd3d,	// (0x00022828) popup_clock_digital_window_cp02

0xbdaa,	// (0x00022895) main_clock2_list_single_pane_ParamLimits

0xbdaa,	// (0x00022895) main_clock2_list_single_pane

0x0d6f,	// (0x0001785a) list_highlight_pane_cp05

0x36aa,	// (0x0001a195) main_clock2_list_single_pane_t1

0x91e9,	// (0x0001fcd4) popup_toolbar_window_cp04_ParamLimits

0xb401,	// (0x00021eec) camera2_autofocus_pane_g2_ParamLimits

0xb401,	// (0x00021eec) camera2_autofocus_pane_g2

0xb40d,	// (0x00021ef8) camera2_autofocus_pane_g3_ParamLimits

0xb40d,	// (0x00021ef8) camera2_autofocus_pane_g3

0xb419,	// (0x00021f04) camera2_autofocus_pane_g4_ParamLimits

0xb419,	// (0x00021f04) camera2_autofocus_pane_g4

0xb425,	// (0x00021f10) camera2_autofocus_pane_g5_ParamLimits

0xb425,	// (0x00021f10) camera2_autofocus_pane_g5

0x0004,

0xf71c,	// (0x00026207) camera2_autofocus_pane_g_ParamLimits

0xf71c,	// (0x00026207) camera2_autofocus_pane_g

0xb580,	// (0x0002206b) camera2_autofocus_pane_cp_g2

0xb588,	// (0x00022073) camera2_autofocus_pane_cp_g3

0xb590,	// (0x0002207b) camera2_autofocus_pane_cp_g4

0xb598,	// (0x00022083) camera2_autofocus_pane_cp_g5

0x0004,

0xf782,	// (0x0002626d) camera2_autofocus_pane_cp_g

0xbb5d,	// (0x00022648) popup_dialer_spcha_window

0x0348,	// (0x00016e33) bg_popup_sub_pane_cp07

0x36b8,	// (0x0001a1a3) list_spcha_pane

0x36c0,	// (0x0001a1ab) list_single_spcha_pane_ParamLimits

0x36c0,	// (0x0001a1ab) list_single_spcha_pane

0x0348,	// (0x00016e33) list_highlight_pane_cp06

0x36d1,	// (0x0001a1bc) list_single_spcha_pane_t1

0x2738,	// (0x00019223) popup_call2_audio_out_window_g4_ParamLimits

0x2738,	// (0x00019223) popup_call2_audio_out_window_g4

0x6f32,	// (0x0001da1d) main_imed2_pane

0x74c9,	// (0x0001dfb4) popup_imed_adjust2_window

0x74da,	// (0x0001dfc5) popup_imed_trans_window_ParamLimits

0x74da,	// (0x0001dfc5) popup_imed_trans_window

0x3093,	// (0x00019b7e) popup_blid_sat_info2_window_t1

0x30a1,	// (0x00019b8c) popup_blid_sat_info2_window_t2

0x000a,

0xf6b1,	// (0x0002619c) popup_blid_sat_info2_window_t

0xbddc,	// (0x000228c7) aid_size_cell_colour_35

0xbdf3,	// (0x000228de) aid_size_cell_colour_112

0xbe0a,	// (0x000228f5) aid_size_cell_effect

0x039b,	// (0x00016e86) bg_tb_trans_pane_cp02

0x131c,	// (0x00017e07) heading_imed_pane

0xbe24,	// (0x0002290f) listscroll_imed_pane

0x36df,	// (0x0001a1ca) heading_imed_pane_g1

0x36e7,	// (0x0001a1d2) heading_imed_pane_t1

0x36f5,	// (0x0001a1e0) grid_imed_colour_35_pane_ParamLimits

0x36f5,	// (0x0001a1e0) grid_imed_colour_35_pane

0xbe30,	// (0x0002291b) grid_imed_effect_pane

0x3708,	// (0x0001a1f3) list_imed_aspect_pane

0xbe3c,	// (0x00022927) scroll_pane_cp027_ParamLimits

0xbe3c,	// (0x00022927) scroll_pane_cp027

0xbe48,	// (0x00022933) cell_imed_effect_pane_ParamLimits

0xbe48,	// (0x00022933) cell_imed_effect_pane

0x3710,	// (0x0001a1fb) cell_imed_colour_pane_ParamLimits

0x3710,	// (0x0001a1fb) cell_imed_colour_pane

0x374a,	// (0x0001a235) cell_imed_colour_pane_g1_ParamLimits

0x374a,	// (0x0001a235) cell_imed_colour_pane_g1

0x375b,	// (0x0001a246) hgihlgiht_grid_pane_cp016_ParamLimits

0x375b,	// (0x0001a246) hgihlgiht_grid_pane_cp016

0xbe5e,	// (0x00022949) cell_imed_effect_pane_g1

0xbe66,	// (0x00022951) grid_highlight_pane_cp017

0x376c,	// (0x0001a257) list_imed_single_pane_ParamLimits

0x376c,	// (0x0001a257) list_imed_single_pane

0x0348,	// (0x00016e33) list_highlight_pane_cp07

0x377f,	// (0x0001a26a) list_imed_aspect_pane_comp1_t1

0x2d3b,	// (0x00019826) bg_tb_trans_pane_cp05

0x379f,	// (0x0001a28a) popup_imed_adjust2_window_g1

0x37c6,	// (0x0001a2b1) popup_imed_adjust2_window_t1

0x37de,	// (0x0001a2c9) slider_imed_adjust_pane

0x37f2,	// (0x0001a2dd) slider_imed_adjust_pane_g1

0x3802,	// (0x0001a2ed) slider_imed_adjust_pane_g2

0x3812,	// (0x0001a2fd) slider_imed_adjust_pane_g3

0x3823,	// (0x0001a30e) slider_imed_adjust_pane_g4

0x0003,

0xf7f5,	// (0x000262e0) slider_imed_adjust_pane_g

0xbe6f,	// (0x0002295a) aid_size_cell_clipart2

0xbe7b,	// (0x00022966) grid_imed_clipart_pane

0x3834,	// (0x0001a31f) scroll_pane_cp031

0xbe85,	// (0x00022970) cell_imed_clipart_pane_ParamLimits

0xbe85,	// (0x00022970) cell_imed_clipart_pane

0xbe9c,	// (0x00022987) cell_imed_clipart_pane_g1

0x0348,	// (0x00016e33) grid_highlight_pane_cp014

0xbc8c,	// (0x00022777) main_clock2_pane_g1_ParamLimits

0xbc8c,	// (0x00022777) main_clock2_pane_g1

0xbd55,	// (0x00022840) aid_call2_pane_cp10

0xbd67,	// (0x00022852) aid_call_pane_cp10

0x16d2,	// (0x000181bd) popup_clock_analogue_window_cp10_g1

0x16d2,	// (0x000181bd) popup_clock_analogue_window_cp10_g2

0xbd79,	// (0x00022864) popup_clock_analogue_window_cp10_g3

0xbd79,	// (0x00022864) popup_clock_analogue_window_cp10_g4

0x16d2,	// (0x000181bd) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e3,	// (0x000262ce) popup_clock_analogue_window_cp10_g

0xbd8b,	// (0x00022876) popup_clock_analogue_window_cp10_t1

0x7848,	// (0x0001e333) clock_digital_number_pane_cp10_ParamLimits

0x7848,	// (0x0001e333) clock_digital_number_pane_cp10

0x7860,	// (0x0001e34b) clock_digital_number_pane_cp11_ParamLimits

0x7860,	// (0x0001e34b) clock_digital_number_pane_cp11

0x7878,	// (0x0001e363) clock_digital_number_pane_cp12_ParamLimits

0x7878,	// (0x0001e363) clock_digital_number_pane_cp12

0x7890,	// (0x0001e37b) clock_digital_number_pane_cp13_ParamLimits

0x7890,	// (0x0001e37b) clock_digital_number_pane_cp13

0x78a8,	// (0x0001e393) clock_digital_separator_pane_cp10_ParamLimits

0x78a8,	// (0x0001e393) clock_digital_separator_pane_cp10

0xbdbc,	// (0x000228a7) popup_clock_digital_window_cp02_t1_ParamLimits

0xbdbc,	// (0x000228a7) popup_clock_digital_window_cp02_t1

0x0a0d,	// (0x000174f8) clock_digital_number_pane_cp10_g1

0x0a0d,	// (0x000174f8) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fe,	// (0x000262e9) clock_digital_number_pane_cp10_g

0x0a0d,	// (0x000174f8) clock_digital_separator_pane_cp10_g1

0x0a0d,	// (0x000174f8) clock_digital_separator_pane_g2_cp10

0x17ff,	// (0x000182ea) navi_pane_vded_g4

0x1808,	// (0x000182f3) navi_pane_vded_g5

0x1811,	// (0x000182fc) navi_pane_vded_t1

0x6f32,	// (0x0001da1d) main_vded_pane

0xbea5,	// (0x00022990) main_vded_pane_g1

0xbead,	// (0x00022998) main_vded_pane_g2

0xbeb5,	// (0x000229a0) main_vded_pane_g3

0x0002,

0xf803,	// (0x000262ee) main_vded_pane_g

0xbebd,	// (0x000229a8) main_vded_pane_t1

0xbecb,	// (0x000229b6) main_vded_pane_t2

0x0001,

0xf80a,	// (0x000262f5) main_vded_pane_t

0xbed9,	// (0x000229c4) vded_slider_pane

0xbee1,	// (0x000229cc) vded_video_pane

0x383c,	// (0x0001a327) vded_video_pane_g1

0xbee9,	// (0x000229d4) vded_video_pane_g2

0x324f,	// (0x00019d3a) vded_video_pane_g3

0x0002,

0xf80f,	// (0x000262fa) vded_video_pane_g

0x3846,	// (0x0001a331) vded_slider_pane_g1

0x2f66,	// (0x00019a51) vded_slider_pane_g2

0x384f,	// (0x0001a33a) vded_slider_pane_g3

0x3858,	// (0x0001a343) vded_slider_pane_g4

0x3861,	// (0x0001a34c) vded_slider_pane_g5

0x0004,

0xf816,	// (0x00026301) vded_slider_pane_g

0xba6c,	// (0x00022557) mup3_rocker_pane_ParamLimits

0xba6c,	// (0x00022557) mup3_rocker_pane

0xbef2,	// (0x000229dd) mup3_control_keys_pane_g1

0xbefa,	// (0x000229e5) mup3_control_keys_pane_g2

0xbf02,	// (0x000229ed) mup3_control_keys_pane_g3

0xbf0a,	// (0x000229f5) mup3_control_keys_pane_g4

0x0003,

0xf821,	// (0x0002630c) mup3_control_keys_pane_g

0x6ef2,	// (0x0001d9dd) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6ef2,	// (0x0001d9dd) popup_toolbar2_fixed_window_cp01

0xba84,	// (0x0002256f) popup_toolbar2_fixed_window_cp02_ParamLimits

0xba84,	// (0x0002256f) popup_toolbar2_fixed_window_cp02

0x2077,	// (0x00018b62) popup_call2_audio_second_window_t4_ParamLimits

0x2077,	// (0x00018b62) popup_call2_audio_second_window_t4

0x25a5,	// (0x00019090) popup_call2_audio_first_window_t6_ParamLimits

0x25a5,	// (0x00019090) popup_call2_audio_first_window_t6

0x283b,	// (0x00019326) popup_call2_audio_out_window_t6_ParamLimits

0x283b,	// (0x00019326) popup_call2_audio_out_window_t6

0x6f32,	// (0x0001da1d) main_vitu_pane

0xbf1a,	// (0x00022a05) aid_size_cell_itu_ParamLimits

0xbf1a,	// (0x00022a05) aid_size_cell_itu

0x3c25,	// (0x0001a710) bg_popup_window_pane_cp08_ParamLimits

0x3c25,	// (0x0001a710) bg_popup_window_pane_cp08

0xbf28,	// (0x00022a13) field_vitu_entry_pane_ParamLimits

0xbf28,	// (0x00022a13) field_vitu_entry_pane

0xbf35,	// (0x00022a20) grid_vitu_function_pane_ParamLimits

0xbf35,	// (0x00022a20) grid_vitu_function_pane

0xbf41,	// (0x00022a2c) grid_vitu_itu_pane_ParamLimits

0xbf41,	// (0x00022a2c) grid_vitu_itu_pane

0xbf4d,	// (0x00022a38) cell_vitu_itu_pane_ParamLimits

0xbf4d,	// (0x00022a38) cell_vitu_itu_pane

0xbf62,	// (0x00022a4d) cell_vitu_function_pane_ParamLimits

0xbf62,	// (0x00022a4d) cell_vitu_function_pane

0x039b,	// (0x00016e86) bg_popup_sub_pane_cp08_ParamLimits

0x039b,	// (0x00016e86) bg_popup_sub_pane_cp08

0xbf74,	// (0x00022a5f) field_vitu_entry_pane_t1_ParamLimits

0xbf74,	// (0x00022a5f) field_vitu_entry_pane_t1

0x3882,	// (0x0001a36d) field_vitu_entry_pane_t2_ParamLimits

0x3882,	// (0x0001a36d) field_vitu_entry_pane_t2

0x0001,

0xf82f,	// (0x0002631a) field_vitu_entry_pane_t_ParamLimits

0xf82f,	// (0x0002631a) field_vitu_entry_pane_t

0x389f,	// (0x0001a38a) bg_button_pane_cp05_ParamLimits

0x389f,	// (0x0001a38a) bg_button_pane_cp05

0xbf8d,	// (0x00022a78) cell_vitu_itu_pane_g1

0xbfa5,	// (0x00022a90) cell_vitu_itu_pane_t1_ParamLimits

0xbfa5,	// (0x00022a90) cell_vitu_itu_pane_t1

0xbfb7,	// (0x00022aa2) cell_vitu_itu_pane_t2_ParamLimits

0xbfb7,	// (0x00022aa2) cell_vitu_itu_pane_t2

0x0002,

0xf834,	// (0x0002631f) cell_vitu_itu_pane_t_ParamLimits

0xf834,	// (0x0002631f) cell_vitu_itu_pane_t

0x38ad,	// (0x0001a398) bg_button_pane_cp07

0xbfec,	// (0x00022ad7) cell_vitu_function_pane_g1

0x6fef,	// (0x0001dada) main_calc_pane_g1

0x6d3f,	// (0x0001d82a) aid_visual_content_pane

0x6f32,	// (0x0001da1d) main_vradio_pane

0xbff5,	// (0x00022ae0) main_vradio_pane_g1_ParamLimits

0xbff5,	// (0x00022ae0) main_vradio_pane_g1

0x38b7,	// (0x0001a3a2) main_vradio_pane_g2_ParamLimits

0x38b7,	// (0x0001a3a2) main_vradio_pane_g2

0x0001,

0xf83b,	// (0x00026326) main_vradio_pane_g_ParamLimits

0xf83b,	// (0x00026326) main_vradio_pane_g

0xc003,	// (0x00022aee) main_vradio_pane_t1_ParamLimits

0xc003,	// (0x00022aee) main_vradio_pane_t1

0xc015,	// (0x00022b00) main_vradio_pane_t2_ParamLimits

0xc015,	// (0x00022b00) main_vradio_pane_t2

0x38c4,	// (0x0001a3af) main_vradio_pane_t3_ParamLimits

0x38c4,	// (0x0001a3af) main_vradio_pane_t3

0x0002,

0xf840,	// (0x0002632b) main_vradio_pane_t_ParamLimits

0xf840,	// (0x0002632b) main_vradio_pane_t

0xc027,	// (0x00022b12) vradio_rocker_control_pane_ParamLimits

0xc027,	// (0x00022b12) vradio_rocker_control_pane

0xc033,	// (0x00022b1e) vradio_station_info_pane_ParamLimits

0xc033,	// (0x00022b1e) vradio_station_info_pane

0x38d6,	// (0x0001a3c1) vradio_frequency_info_pane_ParamLimits

0x38d6,	// (0x0001a3c1) vradio_frequency_info_pane

0x324f,	// (0x00019d3a) vradio_station_info_pane_g1

0x38e5,	// (0x0001a3d0) vradio_station_info_pane_t1_ParamLimits

0x38e5,	// (0x0001a3d0) vradio_station_info_pane_t1

0x3907,	// (0x0001a3f2) vradio_station_info_pane_t2_ParamLimits

0x3907,	// (0x0001a3f2) vradio_station_info_pane_t2

0x0001,

0xf847,	// (0x00026332) vradio_station_info_pane_t_ParamLimits

0xf847,	// (0x00026332) vradio_station_info_pane_t

0x3919,	// (0x0001a404) vradio_tuning_pane

0x3921,	// (0x0001a40c) vradio_rocker_control_pane_g1

0x3929,	// (0x0001a414) vradio_rocker_control_pane_g2

0x3931,	// (0x0001a41c) vradio_rocker_control_pane_g3

0x3939,	// (0x0001a424) vradio_rocker_control_pane_g4

0x3941,	// (0x0001a42c) vradio_rocker_control_pane_g5

0x0004,

0xf84c,	// (0x00026337) vradio_rocker_control_pane_g

0xc040,	// (0x00022b2b) vradio_frequency_info_pane_g1

0x3949,	// (0x0001a434) vradio_frequency_info_pane_t1_ParamLimits

0x3949,	// (0x0001a434) vradio_frequency_info_pane_t1

0xc048,	// (0x00022b33) vradio_tuning_pane_g1

0xc051,	// (0x00022b3c) vradio_tuning_pane_t1

0x6d57,	// (0x0001d842) area_side_right_pane_ParamLimits

0x6d57,	// (0x0001d842) area_side_right_pane

0x2cf6,	// (0x000197e1) status_small_pane_g1

0x2cfe,	// (0x000197e9) status_small_pane_g2

0x2d07,	// (0x000197f2) status_small_pane_g3

0x2d10,	// (0x000197fb) status_small_pane_g4

0x0003,

0xf607,	// (0x000260f2) status_small_pane_g

0x2d19,	// (0x00019804) status_small_pane_t1

0x6f32,	// (0x0001da1d) main_video3_pane

0x395d,	// (0x0001a448) cams_zoom_vslider_pane

0x3965,	// (0x0001a450) image3_wide_pane_ParamLimits

0x3965,	// (0x0001a450) image3_wide_pane

0x397f,	// (0x0001a46a) image3_wide_small_pane

0x3989,	// (0x0001a474) main_video3_pane_g1_ParamLimits

0x3989,	// (0x0001a474) main_video3_pane_g1

0x39a5,	// (0x0001a490) main_video3_pane_g2_ParamLimits

0x39a5,	// (0x0001a490) main_video3_pane_g2

0x0001,

0xf857,	// (0x00026342) main_video3_pane_g_ParamLimits

0xf857,	// (0x00026342) main_video3_pane_g

0x39c1,	// (0x0001a4ac) main_video3_pane_t1_ParamLimits

0x39c1,	// (0x0001a4ac) main_video3_pane_t1

0x39ec,	// (0x0001a4d7) main_video3_pane_t2_ParamLimits

0x39ec,	// (0x0001a4d7) main_video3_pane_t2

0x3a17,	// (0x0001a502) main_video3_pane_t3_ParamLimits

0x3a17,	// (0x0001a502) main_video3_pane_t3

0x0002,

0xf85c,	// (0x00026347) main_video3_pane_t_ParamLimits

0xf85c,	// (0x00026347) main_video3_pane_t

0x3a42,	// (0x0001a52d) cams_zoom_vslider_pane_g1

0x3a4b,	// (0x0001a536) cams_zoom_vslider_pane_g2

0x0001,

0xf863,	// (0x0002634e) cams_zoom_vslider_pane_g

0x3a53,	// (0x0001a53e) small_slider_vertical_pane

0x324f,	// (0x00019d3a) small_slider_vertical_pane_g1

0x324f,	// (0x00019d3a) small_slider_vertical_pane_g2

0x3a5b,	// (0x0001a546) small_slider_vertical_pane_g3

0x0002,

0xf868,	// (0x00026353) small_slider_vertical_pane_g

0x6f32,	// (0x0001da1d) main_hwr_training_pane

0x3a64,	// (0x0001a54f) hwr_training_instruct_pane_ParamLimits

0x3a64,	// (0x0001a54f) hwr_training_instruct_pane

0xc060,	// (0x00022b4b) hwr_training_navi_pane_ParamLimits

0xc060,	// (0x00022b4b) hwr_training_navi_pane

0xc074,	// (0x00022b5f) hwr_training_write_pane_ParamLimits

0xc074,	// (0x00022b5f) hwr_training_write_pane

0x0348,	// (0x00016e33) bg_frame_shadow_pane

0x3a93,	// (0x0001a57e) hwr_training_write_pane_g1

0x3a9b,	// (0x0001a586) hwr_training_write_pane_g2

0x3aa3,	// (0x0001a58e) hwr_training_write_pane_g3

0x3aab,	// (0x0001a596) hwr_training_write_pane_g4

0x3ab3,	// (0x0001a59e) hwr_training_write_pane_g5

0x3abb,	// (0x0001a5a6) hwr_training_write_pane_g6

0x3ac3,	// (0x0001a5ae) hwr_training_write_pane_g7

0x0006,

0xf86f,	// (0x0002635a) hwr_training_write_pane_g

0x78c0,	// (0x0001e3ab) hwr_training_navi_pane_g1_ParamLimits

0x78c0,	// (0x0001e3ab) hwr_training_navi_pane_g1

0x78d2,	// (0x0001e3bd) hwr_training_navi_pane_g2_ParamLimits

0x78d2,	// (0x0001e3bd) hwr_training_navi_pane_g2

0x78e4,	// (0x0001e3cf) hwr_training_navi_pane_g3_ParamLimits

0x78e4,	// (0x0001e3cf) hwr_training_navi_pane_g3

0x78f4,	// (0x0001e3df) hwr_training_navi_pane_g4_ParamLimits

0x78f4,	// (0x0001e3df) hwr_training_navi_pane_g4

0x0004,

0xf87e,	// (0x00026369) hwr_training_navi_pane_g_ParamLimits

0xf87e,	// (0x00026369) hwr_training_navi_pane_g

0x790e,	// (0x0001e3f9) hwr_training_navi_pane_t1

0xc0a2,	// (0x00022b8d) list_single_hwr_training_instruct_pane_ParamLimits

0xc0a2,	// (0x00022b8d) list_single_hwr_training_instruct_pane

0x3b1a,	// (0x0001a605) list_single_hwr_training_instruct_pane_t1

0x318f,	// (0x00019c7a) bg_frame_shadow_pane_g1

0x3b29,	// (0x0001a614) bg_frame_shadow_pane_g2

0x3b31,	// (0x0001a61c) bg_frame_shadow_pane_g3

0x3b39,	// (0x0001a624) bg_frame_shadow_pane_g4

0x3b41,	// (0x0001a62c) bg_frame_shadow_pane_g5

0x3b49,	// (0x0001a634) bg_frame_shadow_pane_g6

0x3b51,	// (0x0001a63c) bg_frame_shadow_pane_g7

0x0c23,	// (0x0001770e) bg_frame_shadow_pane_g8

0x0007,

0xf889,	// (0x00026374) bg_frame_shadow_pane_g

0x6f32,	// (0x0001da1d) main_video_tele_dialer_pane

0x791c,	// (0x0001e407) aid_size_cell_video_keypad_ParamLimits

0x791c,	// (0x0001e407) aid_size_cell_video_keypad

0x792c,	// (0x0001e417) grid_video_dialer_keypad_pane_ParamLimits

0x792c,	// (0x0001e417) grid_video_dialer_keypad_pane

0x795c,	// (0x0001e447) video_down_pane_cp_ParamLimits

0x795c,	// (0x0001e447) video_down_pane_cp

0x7968,	// (0x0001e453) cell_video_dialer_keypad_pane_ParamLimits

0x7968,	// (0x0001e453) cell_video_dialer_keypad_pane

0x3b59,	// (0x0001a644) bg_button_pane_cp08_ParamLimits

0x3b59,	// (0x0001a644) bg_button_pane_cp08

0xc0d6,	// (0x00022bc1) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc0d6,	// (0x00022bc1) cell_video_dialer_keypad_pane_g1

0xba60,	// (0x0002254b) mup3_rocker2_pane_ParamLimits

0xba60,	// (0x0002254b) mup3_rocker2_pane

0x324f,	// (0x00019d3a) mup3_rocker2_pane_g1

0x744b,	// (0x0001df36) main_dialer2_pane

0x6f32,	// (0x0001da1d) main_mp4_pane

0x798d,	// (0x0001e478) main_mp4_pane_g1_ParamLimits

0x798d,	// (0x0001e478) main_mp4_pane_g1

0x799b,	// (0x0001e486) main_mp4_pane_g2_ParamLimits

0x799b,	// (0x0001e486) main_mp4_pane_g2

0x79a9,	// (0x0001e494) main_mp4_pane_g3_ParamLimits

0x79a9,	// (0x0001e494) main_mp4_pane_g3

0x79de,	// (0x0001e4c9) main_mp4_pane_g4_ParamLimits

0x79de,	// (0x0001e4c9) main_mp4_pane_g4

0x7a0c,	// (0x0001e4f7) main_mp4_pane_g5_ParamLimits

0x7a0c,	// (0x0001e4f7) main_mp4_pane_g5

0x0007,

0xf8a9,	// (0x00026394) main_mp4_pane_g_ParamLimits

0xf8a9,	// (0x00026394) main_mp4_pane_g

0x7a80,	// (0x0001e56b) main_mp4_pane_t1_ParamLimits

0x7a80,	// (0x0001e56b) main_mp4_pane_t1

0x7ad8,	// (0x0001e5c3) main_mp4_pane_t2_ParamLimits

0x7ad8,	// (0x0001e5c3) main_mp4_pane_t2

0x3cdd,	// (0x0001a7c8) main_mp4_pane_t3_ParamLimits

0x3cdd,	// (0x0001a7c8) main_mp4_pane_t3

0x7b2a,	// (0x0001e615) main_mp4_pane_t4_ParamLimits

0x7b2a,	// (0x0001e615) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x000263a5) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x000263a5) main_mp4_pane_t

0x7b6a,	// (0x0001e655) mp4_progress_pane_ParamLimits

0x7b6a,	// (0x0001e655) mp4_progress_pane

0x7bae,	// (0x0001e699) mp4_rocker_pane_ParamLimits

0x7bae,	// (0x0001e699) mp4_rocker_pane

0x3dad,	// (0x0001a898) mp4_progress_pane_t1

0x3dc4,	// (0x0001a8af) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x000263ae) mp4_progress_pane_t

0x3ddb,	// (0x0001a8c6) mup_progress_pane_cp04

0x47e6,	// (0x0001b2d1) mp4_rocker_pane_g1

0x7bcc,	// (0x0001e6b7) aid_cell_size_keypad2_ParamLimits

0x7bcc,	// (0x0001e6b7) aid_cell_size_keypad2

0x7bdc,	// (0x0001e6c7) dialer2_ne_pane_ParamLimits

0x7bdc,	// (0x0001e6c7) dialer2_ne_pane

0x7be8,	// (0x0001e6d3) grid_dialer2_keypad_pane_ParamLimits

0x7be8,	// (0x0001e6d3) grid_dialer2_keypad_pane

0x4855,	// (0x0001b340) bg_popup_call_pane_cp07_ParamLimits

0x4855,	// (0x0001b340) bg_popup_call_pane_cp07

0xc10d,	// (0x00022bf8) dialer2_ne_pane_t1_ParamLimits

0xc10d,	// (0x00022bf8) dialer2_ne_pane_t1

0x7bf4,	// (0x0001e6df) cell_dialer2_keypad_pane_ParamLimits

0x7bf4,	// (0x0001e6df) cell_dialer2_keypad_pane

0x3df9,	// (0x0001a8e4) bg_button_pane_pane_cp04_ParamLimits

0x3df9,	// (0x0001a8e4) bg_button_pane_pane_cp04

0xc132,	// (0x00022c1d) cell_dialer2_keypad_pane_g1_ParamLimits

0xc132,	// (0x00022c1d) cell_dialer2_keypad_pane_g1

0x90c5,	// (0x0001fbb0) aid_placing_vt_set_content_ParamLimits

0x90c5,	// (0x0001fbb0) aid_placing_vt_set_content

0x90eb,	// (0x0001fbd6) aid_placing_vt_set_title_ParamLimits

0x90eb,	// (0x0001fbd6) aid_placing_vt_set_title

0x6f32,	// (0x0001da1d) main_image3_pane

0x7c31,	// (0x0001e71c) area_side_right_pane_cp01_ParamLimits

0x7c31,	// (0x0001e71c) area_side_right_pane_cp01

0x7c5e,	// (0x0001e749) main_image3_pane_g1_ParamLimits

0x7c5e,	// (0x0001e749) main_image3_pane_g1

0x7c6c,	// (0x0001e757) main_image3_pane_g2_ParamLimits

0x7c6c,	// (0x0001e757) main_image3_pane_g2

0x7c83,	// (0x0001e76e) main_image3_pane_g3_ParamLimits

0x7c83,	// (0x0001e76e) main_image3_pane_g3

0x7c9a,	// (0x0001e785) main_image3_pane_g4_ParamLimits

0x7c9a,	// (0x0001e785) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x000263bd) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x000263bd) main_image3_pane_g

0x7cb1,	// (0x0001e79c) main_image3_pane_t1_ParamLimits

0x7cb1,	// (0x0001e79c) main_image3_pane_t1

0x7cd6,	// (0x0001e7c1) main_image3_pane_t2_ParamLimits

0x7cd6,	// (0x0001e7c1) main_image3_pane_t2

0x7cf5,	// (0x0001e7e0) main_image3_pane_t3_ParamLimits

0x7cf5,	// (0x0001e7e0) main_image3_pane_t3

0x0003,

0xf8db,	// (0x000263c6) main_image3_pane_t_ParamLimits

0xf8db,	// (0x000263c6) main_image3_pane_t

0x3c25,	// (0x0001a710) grid_sctrl_middle_pane_cp01_ParamLimits

0x3c25,	// (0x0001a710) grid_sctrl_middle_pane_cp01

0xc17e,	// (0x00022c69) cell_sctrl_middle_pane_cp01_ParamLimits

0xc17e,	// (0x00022c69) cell_sctrl_middle_pane_cp01

0xc18f,	// (0x00022c7a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc18f,	// (0x00022c7a) cell_sctrl_middle_pane_cp01_g1

0x6f32,	// (0x0001da1d) main_call4_pane

0x7d50,	// (0x0001e83b) aid_size_button_call4_ParamLimits

0x7d50,	// (0x0001e83b) aid_size_button_call4

0x7d7a,	// (0x0001e865) call4_windows_pane_ParamLimits

0x7d7a,	// (0x0001e865) call4_windows_pane

0x7d8e,	// (0x0001e879) grid_call4_button_pane_ParamLimits

0x7d8e,	// (0x0001e879) grid_call4_button_pane

0x3e4f,	// (0x0001a93a) call4_windows_conf_pane

0xc1a4,	// (0x00022c8f) popup_call4_audio_first_window_ParamLimits

0xc1a4,	// (0x00022c8f) popup_call4_audio_first_window

0xc1c4,	// (0x00022caf) popup_call4_audio_second_window_ParamLimits

0xc1c4,	// (0x00022caf) popup_call4_audio_second_window

0x3e82,	// (0x0001a96d) popup_call4_audio_wait_window_ParamLimits

0x3e82,	// (0x0001a96d) popup_call4_audio_wait_window

0x7da8,	// (0x0001e893) cell_call4_button_pane_ParamLimits

0x7da8,	// (0x0001e893) cell_call4_button_pane

0x0bc3,	// (0x000176ae) bg_button_pane_cp09_ParamLimits

0x0bc3,	// (0x000176ae) bg_button_pane_cp09

0x7dcb,	// (0x0001e8b6) cell_call4_button_pane_g1_ParamLimits

0x7dcb,	// (0x0001e8b6) cell_call4_button_pane_g1

0xc1d6,	// (0x00022cc1) cell_call4_button_pane_t1_ParamLimits

0xc1d6,	// (0x00022cc1) cell_call4_button_pane_t1

0x3ec8,	// (0x0001a9b3) popup_call4_audio_conf_window_ParamLimits

0x3ec8,	// (0x0001a9b3) popup_call4_audio_conf_window

0xba91,	// (0x0002257c) mup3_progress_pane_t1_ParamLimits

0xbaaf,	// (0x0002259a) mup3_progress_pane_t2_ParamLimits

0x356d,	// (0x0001a058) mup3_progress_pane_t3_ParamLimits

0xf7ab,	// (0x00026296) mup3_progress_pane_t_ParamLimits

0x358a,	// (0x0001a075) mup_progress_pane_cp03_ParamLimits

0xbf12,	// (0x000229fd) mup3_control_keys_pane_g4_copy1

0x7b98,	// (0x0001e683) mp4_rocker2_pane_ParamLimits

0x7b98,	// (0x0001e683) mp4_rocker2_pane

0x3ee4,	// (0x0001a9cf) mp4_rocker2_pane_g1

0x3edc,	// (0x0001a9c7) mp4_rocker2_pane_g2

0x7e0a,	// (0x0001e8f5) mp4_rocker2_pane_g3

0x7e12,	// (0x0001e8fd) mp4_rocker2_pane_g4

0x7e1a,	// (0x0001e905) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x000263cf) mp4_rocker2_pane_g

0x6f32,	// (0x0001da1d) main_camera4_pane

0x6f32,	// (0x0001da1d) main_video4_pane

0x7938,	// (0x0001e423) main_video_tele_dialer_pane_t1_ParamLimits

0x7938,	// (0x0001e423) main_video_tele_dialer_pane_t1

0x794a,	// (0x0001e435) main_video_tele_dialer_pane_t2_ParamLimits

0x794a,	// (0x0001e435) main_video_tele_dialer_pane_t2

0x0001,

0xf89a,	// (0x00026385) main_video_tele_dialer_pane_t_ParamLimits

0xf89a,	// (0x00026385) main_video_tele_dialer_pane_t

0x7e38,	// (0x0001e923) cam4_autofocus_pane_ParamLimits

0x7e38,	// (0x0001e923) cam4_autofocus_pane

0x7e4e,	// (0x0001e939) cam4_image_uncrop_pane_ParamLimits

0x7e4e,	// (0x0001e939) cam4_image_uncrop_pane

0x7e63,	// (0x0001e94e) cam4_indicators_pane_ParamLimits

0x7e63,	// (0x0001e94e) cam4_indicators_pane

0x7e7d,	// (0x0001e968) main_camera4_pane_g1_ParamLimits

0x7e7d,	// (0x0001e968) main_camera4_pane_g1

0x7e89,	// (0x0001e974) main_camera4_pane_g2_ParamLimits

0x7e89,	// (0x0001e974) main_camera4_pane_g2

0x7e89,	// (0x0001e974) main_camera4_pane_g3_ParamLimits

0x7e89,	// (0x0001e974) main_camera4_pane_g3

0x7e95,	// (0x0001e980) main_camera4_pane_g4_ParamLimits

0x7e95,	// (0x0001e980) main_camera4_pane_g4

0x7ea1,	// (0x0001e98c) main_camera4_pane_g5_ParamLimits

0x7ea1,	// (0x0001e98c) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x000263da) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x000263da) main_camera4_pane_g

0x7ebb,	// (0x0001e9a6) main_camera4_pane_t1_ParamLimits

0x7ebb,	// (0x0001e9a6) main_camera4_pane_t1

0x7edf,	// (0x0001e9ca) bg_tb_trans_pane_cp06

0x7ef5,	// (0x0001e9e0) cam4_indicators_pane_g1

0x7f05,	// (0x0001e9f0) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x000263f5) cam4_indicators_pane_g

0x7f25,	// (0x0001ea10) cam4_indicators_pane_t1

0x7f4d,	// (0x0001ea38) main_video4_pane_g1_ParamLimits

0x7f4d,	// (0x0001ea38) main_video4_pane_g1

0x7e89,	// (0x0001e974) main_video4_pane_g2_ParamLimits

0x7e89,	// (0x0001e974) main_video4_pane_g2

0x7e89,	// (0x0001e974) main_video4_pane_g3_ParamLimits

0x7e89,	// (0x0001e974) main_video4_pane_g3

0x7e95,	// (0x0001e980) main_video4_pane_g4_ParamLimits

0x7e95,	// (0x0001e980) main_video4_pane_g4

0x0004,

0xf911,	// (0x000263fc) main_video4_pane_g_ParamLimits

0xf911,	// (0x000263fc) main_video4_pane_g

0x7f61,	// (0x0001ea4c) vid4_indicators_pane_ParamLimits

0x7f61,	// (0x0001ea4c) vid4_indicators_pane

0x7f7f,	// (0x0001ea6a) video4_image_uncrop_cif_pane_ParamLimits

0x7f7f,	// (0x0001ea6a) video4_image_uncrop_cif_pane

0x7f8c,	// (0x0001ea77) video4_image_uncrop_nhd_pane_ParamLimits

0x7f8c,	// (0x0001ea77) video4_image_uncrop_nhd_pane

0x7e4e,	// (0x0001e939) video4_image_uncrop_vga_pane_ParamLimits

0x7e4e,	// (0x0001e939) video4_image_uncrop_vga_pane

0x743d,	// (0x0001df28) bg_tb_trans_pane_cp07

0x7ef5,	// (0x0001e9e0) vid4_indicators_pane_g1

0x7f99,	// (0x0001ea84) vid4_indicators_pane_g2

0x7fa9,	// (0x0001ea94) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x00026407) vid4_indicators_pane_g

0x7fd6,	// (0x0001eac1) vid4_indicators_pane_t1

0xc20c,	// (0x00022cf7) cam4_autofocus_pane_g1

0xc214,	// (0x00022cff) cam4_autofocus_pane_g2

0xc21c,	// (0x00022d07) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x00026412) cam4_autofocus_pane_g

0xc224,	// (0x00022d0f) cam4_autofocus_pane_g3_copy1

0xc0ba,	// (0x00022ba5) video_down_pane_cp_t1

0xc0c8,	// (0x00022bb3) video_down_pane_cp_t2

0x0001,

0xf89f,	// (0x0002638a) video_down_pane_cp_t

0x6f24,	// (0x0001da0f) popup_vitu2_window_ParamLimits

0x6f24,	// (0x0001da0f) popup_vitu2_window

0x7ff0,	// (0x0001eadb) aid_size_cell2_itu2_ParamLimits

0x7ff0,	// (0x0001eadb) aid_size_cell2_itu2

0x8012,	// (0x0001eafd) aid_size_cell_itu2_ParamLimits

0x8012,	// (0x0001eafd) aid_size_cell_itu2

0x8050,	// (0x0001eb3b) bg_popup_window_pane_cp09_ParamLimits

0x8050,	// (0x0001eb3b) bg_popup_window_pane_cp09

0x805e,	// (0x0001eb49) field_vitu2_entry_pane_ParamLimits

0x805e,	// (0x0001eb49) field_vitu2_entry_pane

0x8072,	// (0x0001eb5d) grid_vitu2_function_pane_ParamLimits

0x8072,	// (0x0001eb5d) grid_vitu2_function_pane

0x80a0,	// (0x0001eb8b) grid_vitu2_itu_pane_ParamLimits

0x80a0,	// (0x0001eb8b) grid_vitu2_itu_pane

0x80f8,	// (0x0001ebe3) cell_vitu2_itu_pane_ParamLimits

0x80f8,	// (0x0001ebe3) cell_vitu2_itu_pane

0x8110,	// (0x0001ebfb) cell_vitu2_function_pane_ParamLimits

0x8110,	// (0x0001ebfb) cell_vitu2_function_pane

0x3fcf,	// (0x0001aaba) bg_popup_call_pane_cp08_ParamLimits

0x3fcf,	// (0x0001aaba) bg_popup_call_pane_cp08

0x3fe6,	// (0x0001aad1) field_vitu2_entry_pane_g1

0x3ff2,	// (0x0001aadd) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x00026419) field_vitu2_entry_pane_g

0xc22c,	// (0x00022d17) field_vitu2_entry_pane_t1_ParamLimits

0xc22c,	// (0x00022d17) field_vitu2_entry_pane_t1

0x400c,	// (0x0001aaf7) field_vitu2_entry_pane_t2_ParamLimits

0x400c,	// (0x0001aaf7) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x00026420) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x00026420) field_vitu2_entry_pane_t

0x814f,	// (0x0001ec3a) bg_button_pane_cp010_ParamLimits

0x814f,	// (0x0001ec3a) bg_button_pane_cp010

0x815d,	// (0x0001ec48) cell_vitu2_itu_pane_g1

0x817d,	// (0x0001ec68) cell_vitu2_itu_pane_t1_ParamLimits

0x817d,	// (0x0001ec68) cell_vitu2_itu_pane_t1

0x81c9,	// (0x0001ecb4) cell_vitu2_itu_pane_t2_ParamLimits

0x81c9,	// (0x0001ecb4) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0002642a) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0002642a) cell_vitu2_itu_pane_t

0x743d,	// (0x0001df28) bg_button_pane_cp011

0x8291,	// (0x0001ed7c) cell_vitu2_function_pane_g1

0x6f32,	// (0x0001da1d) main_myfav_hc_pane

0x7d35,	// (0x0001e820) popup_image3_note_pane_ParamLimits

0x7d35,	// (0x0001e820) popup_image3_note_pane

0x7d41,	// (0x0001e82c) popup_image3_tool_bar_pane_ParamLimits

0x7d41,	// (0x0001e82c) popup_image3_tool_bar_pane

0x823f,	// (0x0001ed2a) cell_vitu2_itu_pane_t3_ParamLimits

0x823f,	// (0x0001ed2a) cell_vitu2_itu_pane_t3

0x0348,	// (0x00016e33) bg_popup_trans_pane

0x4043,	// (0x0001ab2e) grid_image3_tool_bar_pane

0x404d,	// (0x0001ab38) bg_popup_trans_pane_g1

0x1017,	// (0x00017b02) bg_popup_trans_pane_g2

0x4055,	// (0x0001ab40) bg_popup_trans_pane_g3

0x405d,	// (0x0001ab48) bg_popup_trans_pane_g4

0x4065,	// (0x0001ab50) bg_popup_trans_pane_g5

0x406d,	// (0x0001ab58) bg_popup_trans_pane_g6

0x4075,	// (0x0001ab60) bg_popup_trans_pane_g7

0x407d,	// (0x0001ab68) bg_popup_trans_pane_g8

0x0ff7,	// (0x00017ae2) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x00026431) bg_popup_trans_pane_g

0x4085,	// (0x0001ab70) cell_image3_tool_bar_pane_ParamLimits

0x4085,	// (0x0001ab70) cell_image3_tool_bar_pane

0x324f,	// (0x00019d3a) cell_image3_tool_bar_pane_g1

0x0348,	// (0x00016e33) bg_popup_trans_pane_cp1

0x4099,	// (0x0001ab84) popup_image3_note_pane_t1

0x40a7,	// (0x0001ab92) popup_image3_note_pane_t2

0x40b5,	// (0x0001aba0) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x00026444) popup_image3_note_pane_t

0x40c3,	// (0x0001abae) popup_image3_note_pane_t3_copy1

0xc25a,	// (0x00022d45) bg_myfav_hc_instruction_pane_ParamLimits

0xc25a,	// (0x00022d45) bg_myfav_hc_instruction_pane

0xc26c,	// (0x00022d57) cell_myfav_contact_pane_ParamLimits

0xc26c,	// (0x00022d57) cell_myfav_contact_pane

0xc286,	// (0x00022d71) cell_myfav_contact_pane_cp1_ParamLimits

0xc286,	// (0x00022d71) cell_myfav_contact_pane_cp1

0xc29c,	// (0x00022d87) cell_myfav_contact_pane_cp2_ParamLimits

0xc29c,	// (0x00022d87) cell_myfav_contact_pane_cp2

0xc2b2,	// (0x00022d9d) cell_myfav_contact_pane_cp3_ParamLimits

0xc2b2,	// (0x00022d9d) cell_myfav_contact_pane_cp3

0xc2c7,	// (0x00022db2) cell_myfav_contact_pane_cp4_ParamLimits

0xc2c7,	// (0x00022db2) cell_myfav_contact_pane_cp4

0xc2db,	// (0x00022dc6) cell_myfav_contact_pane_cp5_ParamLimits

0xc2db,	// (0x00022dc6) cell_myfav_contact_pane_cp5

0xc2ef,	// (0x00022dda) cell_myfav_contact_pane_cp6_ParamLimits

0xc2ef,	// (0x00022dda) cell_myfav_contact_pane_cp6

0xc303,	// (0x00022dee) cell_myfav_contact_pane_cp7_ParamLimits

0xc303,	// (0x00022dee) cell_myfav_contact_pane_cp7

0x40d1,	// (0x0001abbc) listscroll_gen_pane_cp05

0xc31b,	// (0x00022e06) main_myfav_hc_pane_g1_ParamLimits

0xc31b,	// (0x00022e06) main_myfav_hc_pane_g1

0xc331,	// (0x00022e1c) main_myfav_hc_pane_g2_ParamLimits

0xc331,	// (0x00022e1c) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0002644b) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0002644b) main_myfav_hc_pane_g

0xc35b,	// (0x00022e46) main_myfav_hc_pane_t1_ParamLimits

0xc35b,	// (0x00022e46) main_myfav_hc_pane_t1

0x40da,	// (0x0001abc5) main_myfav_hc_pane_t2_ParamLimits

0x40da,	// (0x0001abc5) main_myfav_hc_pane_t2

0x40ec,	// (0x0001abd7) main_myfav_hc_pane_t3_ParamLimits

0x40ec,	// (0x0001abd7) main_myfav_hc_pane_t3

0xc370,	// (0x00022e5b) main_myfav_hc_pane_t4_ParamLimits

0xc370,	// (0x00022e5b) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x00026452) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x00026452) main_myfav_hc_pane_t

0x324f,	// (0x00019d3a) bg_myfav_hc_instruction_pane_g1

0x40fe,	// (0x0001abe9) cell_myfav_contact_pane_g1_ParamLimits

0x40fe,	// (0x0001abe9) cell_myfav_contact_pane_g1

0x40fe,	// (0x0001abe9) cell_myfav_contact_pane_g2_ParamLimits

0x40fe,	// (0x0001abe9) cell_myfav_contact_pane_g2

0x410a,	// (0x0001abf5) cell_myfav_contact_pane_g3_ParamLimits

0x410a,	// (0x0001abf5) cell_myfav_contact_pane_g3

0x3557,	// (0x0001a042) cell_myfav_contact_pane_g4_ParamLimits

0x3557,	// (0x0001a042) cell_myfav_contact_pane_g4

0x4117,	// (0x0001ac02) cell_myfav_contact_pane_g5_ParamLimits

0x4117,	// (0x0001ac02) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0002645d) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0002645d) cell_myfav_contact_pane_g

0xc347,	// (0x00022e32) main_myfav_hc_pane_g3_ParamLimits

0xc347,	// (0x00022e32) main_myfav_hc_pane_g3

0x6e68,	// (0x0001d953) popup_adpt_find_window

0xc394,	// (0x00022e7f) afind_page_pane_ParamLimits

0xc394,	// (0x00022e7f) afind_page_pane

0xc3a1,	// (0x00022e8c) aid_size_cell_afind_ParamLimits

0xc3a1,	// (0x00022e8c) aid_size_cell_afind

0xc3bb,	// (0x00022ea6) bg_popup_sub_pane_cp09_ParamLimits

0xc3bb,	// (0x00022ea6) bg_popup_sub_pane_cp09

0xc3c8,	// (0x00022eb3) find_pane_cp01_ParamLimits

0xc3c8,	// (0x00022eb3) find_pane_cp01

0x4123,	// (0x0001ac0e) grid_afind_control_pane_ParamLimits

0x4123,	// (0x0001ac0e) grid_afind_control_pane

0xc3d5,	// (0x00022ec0) grid_afind_pane_ParamLimits

0xc3d5,	// (0x00022ec0) grid_afind_pane

0xc3eb,	// (0x00022ed6) cell_afind_pane_ParamLimits

0xc3eb,	// (0x00022ed6) cell_afind_pane

0x324f,	// (0x00019d3a) afind_page_pane_g1

0xc421,	// (0x00022f0c) afind_page_pane_g2

0xc42a,	// (0x00022f15) afind_page_pane_g3

0x0002,

0xf97d,	// (0x00026468) afind_page_pane_g

0xc433,	// (0x00022f1e) afind_page_pane_t1

0x4137,	// (0x0001ac22) cell_afind_grid_control_pane_ParamLimits

0x4137,	// (0x0001ac22) cell_afind_grid_control_pane

0x3df9,	// (0x0001a8e4) bg_button_pane_cp69_ParamLimits

0x3df9,	// (0x0001a8e4) bg_button_pane_cp69

0xc453,	// (0x00022f3e) cell_afind_pane_g1_ParamLimits

0xc453,	// (0x00022f3e) cell_afind_pane_g1

0xc460,	// (0x00022f4b) cell_afind_pane_t1_ParamLimits

0xc460,	// (0x00022f4b) cell_afind_pane_t1

0x0e03,	// (0x000178ee) bg_button_pane_cp72

0x4146,	// (0x0001ac31) cell_afind_grid_control_pane_g1

0xaaec,	// (0x000215d7) aid_image_placing_area_ParamLimits

0xaaec,	// (0x000215d7) aid_image_placing_area

0x386a,	// (0x0001a355) field_vitu_entry_pane_g1_ParamLimits

0x386a,	// (0x0001a355) field_vitu_entry_pane_g1

0x3876,	// (0x0001a361) field_vitu_entry_pane_g2_ParamLimits

0x3876,	// (0x0001a361) field_vitu_entry_pane_g2

0x0001,

0xf82a,	// (0x00026315) field_vitu_entry_pane_g_ParamLimits

0xf82a,	// (0x00026315) field_vitu_entry_pane_g

0xbf8d,	// (0x00022a78) cell_vitu_itu_pane_g1_ParamLimits

0xbfcf,	// (0x00022aba) cell_vitu_itu_pane_t3_ParamLimits

0xbfcf,	// (0x00022aba) cell_vitu_itu_pane_t3

0x3dad,	// (0x0001a898) mp4_progress_pane_t1_ParamLimits

0x3dc4,	// (0x0001a8af) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x000263ae) mp4_progress_pane_t_ParamLimits

0x3ddb,	// (0x0001a8c6) mup_progress_pane_cp04_ParamLimits

0xc382,	// (0x00022e6d) main_myfav_hc_pane_t5_ParamLimits

0xc382,	// (0x00022e6d) main_myfav_hc_pane_t5

0x6d4f,	// (0x0001d83a) aid_zoom_text_primary

0x6e68,	// (0x0001d953) popup_adpt_find_window_ParamLimits

0x743d,	// (0x0001df28) main_cam_set_pane

0x7e71,	// (0x0001e95c) cam4_zoom_pane_ParamLimits

0x7e71,	// (0x0001e95c) cam4_zoom_pane

0xc472,	// (0x00022f5d) main_cam_set_pane_g1_ParamLimits

0xc472,	// (0x00022f5d) main_cam_set_pane_g1

0xc480,	// (0x00022f6b) main_cam_set_pane_g2_ParamLimits

0xc480,	// (0x00022f6b) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0002646f) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0002646f) main_cam_set_pane_g

0xc48c,	// (0x00022f77) main_cam_set_pane_t1_ParamLimits

0xc48c,	// (0x00022f77) main_cam_set_pane_t1

0xc49e,	// (0x00022f89) main_cset_listscroll_pane_ParamLimits

0xc49e,	// (0x00022f89) main_cset_listscroll_pane

0xc4c7,	// (0x00022fb2) main_cset_slider_pane_ParamLimits

0xc4c7,	// (0x00022fb2) main_cset_slider_pane

0x4157,	// (0x0001ac42) main_cset_list_pane_ParamLimits

0x4157,	// (0x0001ac42) main_cset_list_pane

0x4167,	// (0x0001ac52) scroll_pane_cp028

0xc4e6,	// (0x00022fd1) aid_area_touch_slider

0xc502,	// (0x00022fed) cset_slider_pane

0xc52c,	// (0x00023017) main_cset_slider_pane_g1

0xc541,	// (0x0002302c) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x00026474) main_cset_slider_pane_g

0x41a0,	// (0x0001ac8b) main_cset_slider_pane_t1

0xc5fd,	// (0x000230e8) main_cset_slider_pane_t2

0xc617,	// (0x00023102) main_cset_slider_pane_t3

0xc631,	// (0x0002311c) main_cset_slider_pane_t4

0xc64b,	// (0x00023136) main_cset_slider_pane_t5

0xc665,	// (0x00023150) main_cset_slider_pane_t6

0xc67a,	// (0x00023165) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x00026499) main_cset_slider_pane_t

0xc77e,	// (0x00023269) cset_list_set_pane_ParamLimits

0xc77e,	// (0x00023269) cset_list_set_pane

0xc78e,	// (0x00023279) aid_position_infowindow_above

0xc796,	// (0x00023281) aid_position_infowindow_below

0xc79e,	// (0x00023289) cset_list_set_pane_g1_ParamLimits

0xc79e,	// (0x00023289) cset_list_set_pane_g1

0xc7aa,	// (0x00023295) cset_list_set_pane_g3_ParamLimits

0xc7aa,	// (0x00023295) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x000264b8) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x000264b8) cset_list_set_pane_g

0xc7b9,	// (0x000232a4) cset_list_set_pane_t1_ParamLimits

0xc7b9,	// (0x000232a4) cset_list_set_pane_t1

0x039b,	// (0x00016e86) list_highlight_pane_cp021_ParamLimits

0x039b,	// (0x00016e86) list_highlight_pane_cp021

0x197d,	// (0x00018468) cset_slider_pane_g1

0x198f,	// (0x0001847a) cset_slider_pane_g2

0x1986,	// (0x00018471) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x000264bd) cset_slider_pane_g

0x82a5,	// (0x0001ed90) aid_area_touch_cam4_zoom

0x82ad,	// (0x0001ed98) cam4_zoom_cont_pane

0x82b5,	// (0x0001eda0) cam4_zoom_pane_g1

0x82bd,	// (0x0001eda8) cam4_zoom_pane_g2

0x82c5,	// (0x0001edb0) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x000264c4) cam4_zoom_pane_g

0x82cd,	// (0x0001edb8) cam4_zoom_cont_pane_g1

0x82d6,	// (0x0001edc1) cam4_zoom_cont_pane_g2

0x82df,	// (0x0001edca) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x000264cb) cam4_zoom_cont_pane_g

0x7d6a,	// (0x0001e855) call4_image_pane_ParamLimits

0x7d6a,	// (0x0001e855) call4_image_pane

0x3e4f,	// (0x0001a93a) call4_windows_conf_pane_ParamLimits

0x3e62,	// (0x0001a94d) popup_call4_audio_in_window_ParamLimits

0x3e62,	// (0x0001a94d) popup_call4_audio_in_window

0x0348,	// (0x00016e33) bg_popup_call2_act_pane_cp02

0x3ec0,	// (0x0001a9ab) call4_list_conf_pane

0x324f,	// (0x00019d3a) call4_image_pane_g1

0x324f,	// (0x00019d3a) call4_image_pane_g2

0x0001,

0xf6eb,	// (0x000261d6) call4_image_pane_g

0x427b,	// (0x0001ad66) list_single_graphic_popup_conf4_pane_ParamLimits

0x427b,	// (0x0001ad66) list_single_graphic_popup_conf4_pane

0x0348,	// (0x00016e33) list_highlight_pane_cp022

0x428e,	// (0x0001ad79) list_single_graphic_popup_conf4_pane_g1

0x15a0,	// (0x0001808b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x000264d2) list_single_graphic_popup_conf4_pane_g

0x4296,	// (0x0001ad81) list_single_graphic_popup_conf4_pane_t1

0x922f,	// (0x0001fd1a) popup_vtel_slider_window_ParamLimits

0x922f,	// (0x0001fd1a) popup_vtel_slider_window

0x3de7,	// (0x0001a8d2) dialer2_ne_pane_t2_ParamLimits

0x3de7,	// (0x0001a8d2) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x000263b3) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x000263b3) dialer2_ne_pane_t

0x039b,	// (0x00016e86) bg_popup_sub_pane_cp010_ParamLimits

0x039b,	// (0x00016e86) bg_popup_sub_pane_cp010

0xc7ce,	// (0x000232b9) popup_vtel_slider_window_g1_ParamLimits

0xc7ce,	// (0x000232b9) popup_vtel_slider_window_g1

0xc7da,	// (0x000232c5) popup_vtel_slider_window_g2_ParamLimits

0xc7da,	// (0x000232c5) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x000264d7) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x000264d7) popup_vtel_slider_window_g

0xc820,	// (0x0002330b) vtel_slider_pane_ParamLimits

0xc820,	// (0x0002330b) vtel_slider_pane

0xc82f,	// (0x0002331a) vtel_slider_pane_g1_ParamLimits

0xc82f,	// (0x0002331a) vtel_slider_pane_g1

0xc83c,	// (0x00023327) vtel_slider_pane_g2_ParamLimits

0xc83c,	// (0x00023327) vtel_slider_pane_g2

0xc849,	// (0x00023334) vtel_slider_pane_g3_ParamLimits

0xc849,	// (0x00023334) vtel_slider_pane_g3

0xc82f,	// (0x0002331a) vtel_slider_pane_g4_ParamLimits

0xc82f,	// (0x0002331a) vtel_slider_pane_g4

0xc856,	// (0x00023341) vtel_slider_pane_g5_ParamLimits

0xc856,	// (0x00023341) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x000264e0) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x000264e0) vtel_slider_pane_g

0x743d,	// (0x0001df28) main_gallery2_pane

0x8038,	// (0x0001eb23) aid_size_row_itut2_dropdow_list_ParamLimits

0x8038,	// (0x0001eb23) aid_size_row_itut2_dropdow_list

0x8088,	// (0x0001eb73) grid_vitu2_function_top_pane_ParamLimits

0x8088,	// (0x0001eb73) grid_vitu2_function_top_pane

0x80c4,	// (0x0001ebaf) popup_vitu2_dropdown_list_window_ParamLimits

0x80c4,	// (0x0001ebaf) popup_vitu2_dropdown_list_window

0x80dc,	// (0x0001ebc7) popup_vitu2_match_list_window

0x82e8,	// (0x0001edd3) cell_vitu2_function_top_pane_ParamLimits

0x82e8,	// (0x0001edd3) cell_vitu2_function_top_pane

0x8300,	// (0x0001edeb) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8300,	// (0x0001edeb) cell_vitu2_function_top_pane_cp01

0x831c,	// (0x0001ee07) cell_vitu2_function_top_wide_pane_ParamLimits

0x831c,	// (0x0001ee07) cell_vitu2_function_top_wide_pane

0x743d,	// (0x0001df28) bg_button_pane_cp012

0x8338,	// (0x0001ee23) cell_vitu2_function_top_pane_g1

0x834c,	// (0x0001ee37) bg_button_pane_cp013_ParamLimits

0x834c,	// (0x0001ee37) bg_button_pane_cp013

0xc863,	// (0x0002334e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc863,	// (0x0002334e) cell_vitu2_function_top_wide_pane_g1

0x6f24,	// (0x0001da0f) bg_popup_sub_pane_cp20

0x8368,	// (0x0001ee53) list_vitu2_match_list_pane

0x404d,	// (0x0001ab38) bg_popup_sub_pane_cp20_g1

0x4055,	// (0x0001ab40) bg_popup_sub_pane_cp20_g2

0x1017,	// (0x00017b02) bg_popup_sub_pane_cp20_g3

0x405d,	// (0x0001ab48) bg_popup_sub_pane_cp20_g4

0x0ff7,	// (0x00017ae2) bg_popup_sub_pane_cp20_g5

0x42d6,	// (0x0001adc1) bg_popup_sub_pane_cp20_g6

0x406d,	// (0x0001ab58) bg_popup_sub_pane_cp20_g7

0x4075,	// (0x0001ab60) bg_popup_sub_pane_cp20_g8

0x407d,	// (0x0001ab68) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x000264eb) bg_popup_sub_pane_cp20_g

0x8380,	// (0x0001ee6b) list_vitu2_match_list_item_pane_ParamLimits

0x8380,	// (0x0001ee6b) list_vitu2_match_list_item_pane

0x8392,	// (0x0001ee7d) list_vitu2_match_list_item_pane_t1

0x6f32,	// (0x0001da1d) bg_popup_sub_pane_cp21

0x83a0,	// (0x0001ee8b) grid_vitu2_dropdown_list_pane

0x83a8,	// (0x0001ee93) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x83a8,	// (0x0001ee93) cell_vitu2_dropdown_list_char_pane

0x83c9,	// (0x0001eeb4) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x83c9,	// (0x0001eeb4) cell_vitu2_dropdown_list_ctrl_pane

0x4328,	// (0x0001ae13) cell_vitu2_dropdown_list_char_pane_g1

0x431f,	// (0x0001ae0a) cell_vitu2_dropdown_list_char_pane_g2

0x4316,	// (0x0001ae01) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x00026508) cell_vitu2_dropdown_list_char_pane_g

0x83f5,	// (0x0001eee0) cell_vitu2_dropdown_list_char_pane_t1

0xc8a7,	// (0x00023392) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc8a7,	// (0x00023392) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc8b7,	// (0x000233a2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc8b7,	// (0x000233a2) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc8c8,	// (0x000233b3) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc8c8,	// (0x000233b3) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8403,	// (0x0001eeee) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8403,	// (0x0001eeee) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7edf,	// (0x0001e9ca) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7edf,	// (0x0001e9ca) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0002650f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0002650f) cell_vitu2_dropdown_list_ctrl_pane_g

0xc8d8,	// (0x000233c3) aid_size_cell_gallery2_ParamLimits

0xc8d8,	// (0x000233c3) aid_size_cell_gallery2

0xc8f2,	// (0x000233dd) grid_gallery2_pane_ParamLimits

0xc8f2,	// (0x000233dd) grid_gallery2_pane

0xbe3c,	// (0x00022927) scroll_pane_cp029_ParamLimits

0xbe3c,	// (0x00022927) scroll_pane_cp029

0xc903,	// (0x000233ee) cell_gallery2_pane_ParamLimits

0xc903,	// (0x000233ee) cell_gallery2_pane

0x4331,	// (0x0001ae1c) cell_gallery2_pane_g2

0xc950,	// (0x0002343b) cell_gallery2_pane_g3

0x4339,	// (0x0001ae24) cell_gallery2_pane_g4

0x4341,	// (0x0001ae2c) cell_gallery2_pane_g5

0x0d6f,	// (0x0001785a) grid_highlight_pane_cp10

0x80dc,	// (0x0001ebc7) popup_vitu2_match_list_window_ParamLimits

0x80ec,	// (0x0001ebd7) popup_vitu2_query_window_ParamLimits

0x80ec,	// (0x0001ebd7) popup_vitu2_query_window

0x6f32,	// (0x0001da1d) bg_vitu2_candi_button_pane

0x4328,	// (0x0001ae13) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x431f,	// (0x0001ae0a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x4316,	// (0x0001ae01) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xc958,	// (0x00023443) bg_button_pane_cp015

0xc968,	// (0x00023453) bg_button_pane_cp016

0xc97b,	// (0x00023466) bg_button_pane_cp017

0x2d3b,	// (0x00019826) bg_popup_sub_pane_cp22

0x4349,	// (0x0001ae34) popup_vitu2_query_window_g1

0xc9be,	// (0x000234a9) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0002651a) popup_vitu2_query_window_g

0xc9d9,	// (0x000234c4) popup_vitu2_query_window_t1_ParamLimits

0xc9d9,	// (0x000234c4) popup_vitu2_query_window_t1

0xca0c,	// (0x000234f7) popup_vitu2_query_window_t2_ParamLimits

0xca0c,	// (0x000234f7) popup_vitu2_query_window_t2

0xca1e,	// (0x00023509) popup_vitu2_query_window_t3_ParamLimits

0xca1e,	// (0x00023509) popup_vitu2_query_window_t3

0xca46,	// (0x00023531) popup_vitu2_query_window_t4_ParamLimits

0xca46,	// (0x00023531) popup_vitu2_query_window_t4

0xca63,	// (0x0002354e) popup_vitu2_query_window_t5_ParamLimits

0xca63,	// (0x0002354e) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x00026521) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x00026521) popup_vitu2_query_window_t

0x414f,	// (0x0001ac3a) main_cset_text_pane

0xc4e6,	// (0x00022fd1) aid_area_touch_slider_ParamLimits

0xc502,	// (0x00022fed) cset_slider_pane_ParamLimits

0xc52c,	// (0x00023017) main_cset_slider_pane_g1_ParamLimits

0xc541,	// (0x0002302c) main_cset_slider_pane_g2_ParamLimits

0x4170,	// (0x0001ac5b) main_cset_slider_pane_g3_ParamLimits

0x4170,	// (0x0001ac5b) main_cset_slider_pane_g3

0xc556,	// (0x00023041) main_cset_slider_pane_g4_ParamLimits

0xc556,	// (0x00023041) main_cset_slider_pane_g4

0xc565,	// (0x00023050) main_cset_slider_pane_g5_ParamLimits

0xc565,	// (0x00023050) main_cset_slider_pane_g5

0xc571,	// (0x0002305c) main_cset_slider_pane_g6_ParamLimits

0xc571,	// (0x0002305c) main_cset_slider_pane_g6

0xf989,	// (0x00026474) main_cset_slider_pane_g_ParamLimits

0x41a0,	// (0x0001ac8b) main_cset_slider_pane_t1_ParamLimits

0xc5fd,	// (0x000230e8) main_cset_slider_pane_t2_ParamLimits

0xc617,	// (0x00023102) main_cset_slider_pane_t3_ParamLimits

0xc631,	// (0x0002311c) main_cset_slider_pane_t4_ParamLimits

0xc64b,	// (0x00023136) main_cset_slider_pane_t5_ParamLimits

0xc665,	// (0x00023150) main_cset_slider_pane_t6_ParamLimits

0xc67a,	// (0x00023165) main_cset_slider_pane_t7_ParamLimits

0xc6a4,	// (0x0002318f) main_cset_slider_pane_t8_ParamLimits

0xc6a4,	// (0x0002318f) main_cset_slider_pane_t8

0xc6cc,	// (0x000231b7) main_cset_slider_pane_t9_ParamLimits

0xc6cc,	// (0x000231b7) main_cset_slider_pane_t9

0xc6f4,	// (0x000231df) main_cset_slider_pane_t10_ParamLimits

0xc6f4,	// (0x000231df) main_cset_slider_pane_t10

0xc71c,	// (0x00023207) main_cset_slider_pane_t11_ParamLimits

0xc71c,	// (0x00023207) main_cset_slider_pane_t11

0xc744,	// (0x0002322f) main_cset_slider_pane_t12_ParamLimits

0xc744,	// (0x0002322f) main_cset_slider_pane_t12

0xc761,	// (0x0002324c) main_cset_slider_pane_t13_ParamLimits

0xc761,	// (0x0002324c) main_cset_slider_pane_t13

0xf9ae,	// (0x00026499) main_cset_slider_pane_t_ParamLimits

0x0348,	// (0x00016e33) bg_popup_sub_pane_cp011

0x4355,	// (0x0001ae40) main_cset_text_pane_g1

0x435d,	// (0x0001ae48) main_cset_text_pane_t1

0x436b,	// (0x0001ae56) main_cset_text_pane_t2

0x4379,	// (0x0001ae64) main_cset_text_pane_t3

0x4387,	// (0x0001ae72) main_cset_text_pane_t4

0x4395,	// (0x0001ae80) main_cset_text_pane_t5

0x43a3,	// (0x0001ae8e) main_cset_text_pane_t6

0x43b1,	// (0x0001ae9c) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x00026530) main_cset_text_pane_t

0x6f32,	// (0x0001da1d) main_cam4_burst_pane

0x6f32,	// (0x0001da1d) main_cam5_pane

0xc441,	// (0x00022f2c) bg_button_pane_cp019

0xc44a,	// (0x00022f35) bg_button_pane_cp020

0x417c,	// (0x0001ac67) main_cset_slider_pane_g7_ParamLimits

0x417c,	// (0x0001ac67) main_cset_slider_pane_g7

0x4188,	// (0x0001ac73) main_cset_slider_pane_g8_ParamLimits

0x4188,	// (0x0001ac73) main_cset_slider_pane_g8

0xc585,	// (0x00023070) main_cset_slider_pane_g9_ParamLimits

0xc585,	// (0x00023070) main_cset_slider_pane_g9

0xc591,	// (0x0002307c) main_cset_slider_pane_g10_ParamLimits

0xc591,	// (0x0002307c) main_cset_slider_pane_g10

0xc59d,	// (0x00023088) main_cset_slider_pane_g11_ParamLimits

0xc59d,	// (0x00023088) main_cset_slider_pane_g11

0xc5a9,	// (0x00023094) main_cset_slider_pane_g12_ParamLimits

0xc5a9,	// (0x00023094) main_cset_slider_pane_g12

0xc5b5,	// (0x000230a0) main_cset_slider_pane_g13_ParamLimits

0xc5b5,	// (0x000230a0) main_cset_slider_pane_g13

0xc5c1,	// (0x000230ac) main_cset_slider_pane_g14_ParamLimits

0xc5c1,	// (0x000230ac) main_cset_slider_pane_g14

0xc5cd,	// (0x000230b8) main_cset_slider_pane_g15_ParamLimits

0xc5cd,	// (0x000230b8) main_cset_slider_pane_g15

0x41ce,	// (0x0001acb9) main_cset_slider_pane_t14_ParamLimits

0x41ce,	// (0x0001acb9) main_cset_slider_pane_t14

0x4207,	// (0x0001acf2) main_cset_slider_pane_t15_ParamLimits

0x4207,	// (0x0001acf2) main_cset_slider_pane_t15

0xcad6,	// (0x000235c1) aid_cam4_burst_size_cell_ParamLimits

0xcad6,	// (0x000235c1) aid_cam4_burst_size_cell

0xcaf2,	// (0x000235dd) grid_cam4_burst_pane_ParamLimits

0xcaf2,	// (0x000235dd) grid_cam4_burst_pane

0xcb14,	// (0x000235ff) linegrid_cam4_burst_pane_ParamLimits

0xcb14,	// (0x000235ff) linegrid_cam4_burst_pane

0xcb32,	// (0x0002361d) scroll_pane_cp30_ParamLimits

0xcb32,	// (0x0002361d) scroll_pane_cp30

0xcb3e,	// (0x00023629) cell_cam4_burst_pane_ParamLimits

0xcb3e,	// (0x00023629) cell_cam4_burst_pane

0x43bf,	// (0x0001aeaa) linegrid_cam4_burst_pane_g1_ParamLimits

0x43bf,	// (0x0001aeaa) linegrid_cam4_burst_pane_g1

0xcb76,	// (0x00023661) linegrid_cam4_burst_pane_g2_ParamLimits

0xcb76,	// (0x00023661) linegrid_cam4_burst_pane_g2

0x43cc,	// (0x0001aeb7) linegrid_cam4_burst_pane_g3_ParamLimits

0x43cc,	// (0x0001aeb7) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0002653f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0002653f) linegrid_cam4_burst_pane_g

0xcb87,	// (0x00023672) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcb87,	// (0x00023672) linegrid_cam4_burst_pane_g3_copy1

0x43d9,	// (0x0001aec4) linegrid_cam4_burst_pane_g4_ParamLimits

0x43d9,	// (0x0001aec4) linegrid_cam4_burst_pane_g4

0xcba1,	// (0x0002368c) linegrid_cam4_burst_pane_g5_ParamLimits

0xcba1,	// (0x0002368c) linegrid_cam4_burst_pane_g5

0xcbb2,	// (0x0002369d) linegrid_cam4_burst_pane_g6_ParamLimits

0xcbb2,	// (0x0002369d) linegrid_cam4_burst_pane_g6

0x43e6,	// (0x0001aed1) linegrid_cam4_burst_pane_g7_ParamLimits

0x43e6,	// (0x0001aed1) linegrid_cam4_burst_pane_g7

0xcbc3,	// (0x000236ae) cell_cam4_burst_pane_g1

0x43ff,	// (0x0001aeea) main_cam5_pane_t1_ParamLimits

0x43ff,	// (0x0001aeea) main_cam5_pane_t1

0x4411,	// (0x0001aefc) main_cam5_pane_t2_ParamLimits

0x4411,	// (0x0001aefc) main_cam5_pane_t2

0x4423,	// (0x0001af0e) main_cam5_pane_t3_ParamLimits

0x4423,	// (0x0001af0e) main_cam5_pane_t3

0x4435,	// (0x0001af20) main_cam5_pane_t4_ParamLimits

0x4435,	// (0x0001af20) main_cam5_pane_t4

0x444b,	// (0x0001af36) main_cam5_pane_t5_ParamLimits

0x444b,	// (0x0001af36) main_cam5_pane_t5

0x445d,	// (0x0001af48) main_cam5_pane_t6_ParamLimits

0x445d,	// (0x0001af48) main_cam5_pane_t6

0x446f,	// (0x0001af5a) main_cam5_pane_t7_ParamLimits

0x446f,	// (0x0001af5a) main_cam5_pane_t7

0x4481,	// (0x0001af6c) main_cam5_pane_t8_ParamLimits

0x4481,	// (0x0001af6c) main_cam5_pane_t8

0x449d,	// (0x0001af88) main_cam5_pane_t9_ParamLimits

0x449d,	// (0x0001af88) main_cam5_pane_t9

0x44af,	// (0x0001af9a) main_cam5_pane_t10_ParamLimits

0x44af,	// (0x0001af9a) main_cam5_pane_t10

0x44c1,	// (0x0001afac) main_cam5_pane_t11_ParamLimits

0x44c1,	// (0x0001afac) main_cam5_pane_t11

0x44d3,	// (0x0001afbe) main_cam5_pane_t12_ParamLimits

0x44d3,	// (0x0001afbe) main_cam5_pane_t12

0x44e8,	// (0x0001afd3) main_cam5_pane_t13_ParamLimits

0x44e8,	// (0x0001afd3) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0002654b) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0002654b) main_cam5_pane_t

0x6ee3,	// (0x0001d9ce) popup_scut_keymap_window_ParamLimits

0x6ee3,	// (0x0001d9ce) popup_scut_keymap_window

0xcbd6,	// (0x000236c1) aid_size_cell_brow_shortcut

0x0d6f,	// (0x0001785a) bg_popup_window_pane_cp010

0xcbe2,	// (0x000236cd) grid_scut_pane

0xcbec,	// (0x000236d7) cell_scut_pane_ParamLimits

0xcbec,	// (0x000236d7) cell_scut_pane

0xcc01,	// (0x000236ec) cell_scut_pane_g1

0x4505,	// (0x0001aff0) cell_scut_pane_t1

0x4514,	// (0x0001afff) cell_scut_pane_t2

0xcc0a,	// (0x000236f5) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x00026566) cell_scut_pane_t

0xb704,	// (0x000221ef) main_mup3_pane_g8_ParamLimits

0xb704,	// (0x000221ef) main_mup3_pane_g8

0x8044,	// (0x0001eb2f) area_vitu2_query_pane_ParamLimits

0x8044,	// (0x0001eb2f) area_vitu2_query_pane

0xc98e,	// (0x00023479) input_focus_pane_cp08

0x4523,	// (0x0001b00e) area_vitu2_query_pane_g1

0xcc18,	// (0x00023703) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0002656d) area_vitu2_query_pane_g

0xcc27,	// (0x00023712) area_vitu2_query_pane_t1_ParamLimits

0xcc27,	// (0x00023712) area_vitu2_query_pane_t1

0xcc39,	// (0x00023724) area_vitu2_query_pane_t2_ParamLimits

0xcc39,	// (0x00023724) area_vitu2_query_pane_t2

0xcc4b,	// (0x00023736) area_vitu2_query_pane_t3_ParamLimits

0xcc4b,	// (0x00023736) area_vitu2_query_pane_t3

0x452f,	// (0x0001b01a) area_vitu2_query_pane_t4_ParamLimits

0x452f,	// (0x0001b01a) area_vitu2_query_pane_t4

0x4557,	// (0x0001b042) area_vitu2_query_pane_t5_ParamLimits

0x4557,	// (0x0001b042) area_vitu2_query_pane_t5

0x457f,	// (0x0001b06a) area_vitu2_query_pane_t6_ParamLimits

0x457f,	// (0x0001b06a) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x00026572) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x00026572) area_vitu2_query_pane_t

0xcc73,	// (0x0002375e) bg_button_pane_cp018

0xcc80,	// (0x0002376b) bg_button_pane_cp021

0xcc8c,	// (0x00023777) bg_button_pane_cp022

0xcc9b,	// (0x00023786) input_focus_pane_cp09

0xa3ad,	// (0x00020e98) aid_size_touch_mv_arrow_left

0x16de,	// (0x000181c9) aid_size_touch_mv_arrow_right

0xc5e5,	// (0x000230d0) main_cset_slider_pane_g16_ParamLimits

0xc5e5,	// (0x000230d0) main_cset_slider_pane_g16

0xc5f1,	// (0x000230dc) main_cset_slider_pane_g17_ParamLimits

0xc5f1,	// (0x000230dc) main_cset_slider_pane_g17

0xcbc3,	// (0x000236ae) cell_cam4_burst_pane_g1_ParamLimits

0x0348,	// (0x00016e33) compa_mode_pane

0xc7e6,	// (0x000232d1) popup_vtel_slider_window_g3_ParamLimits

0xc7e6,	// (0x000232d1) popup_vtel_slider_window_g3

0xc7fa,	// (0x000232e5) popup_vtel_slider_window_g4_ParamLimits

0xc7fa,	// (0x000232e5) popup_vtel_slider_window_g4

0xc80e,	// (0x000232f9) popup_vtel_slider_window_t1_ParamLimits

0xc80e,	// (0x000232f9) popup_vtel_slider_window_t1

0x6f32,	// (0x0001da1d) main_cl_pane

0x74c9,	// (0x0001dfb4) popup_imed_adjust2_window_ParamLimits

0x2d3b,	// (0x00019826) bg_tb_trans_pane_cp05_ParamLimits

0x379f,	// (0x0001a28a) popup_imed_adjust2_window_g1_ParamLimits

0x37ae,	// (0x0001a299) popup_imed_adjust2_window_g2_ParamLimits

0x37ae,	// (0x0001a299) popup_imed_adjust2_window_g2

0x37ba,	// (0x0001a2a5) popup_imed_adjust2_window_g3_ParamLimits

0x37ba,	// (0x0001a2a5) popup_imed_adjust2_window_g3

0x0002,

0xf7ee,	// (0x000262d9) popup_imed_adjust2_window_g_ParamLimits

0xf7ee,	// (0x000262d9) popup_imed_adjust2_window_g

0x37c6,	// (0x0001a2b1) popup_imed_adjust2_window_t1_ParamLimits

0x37de,	// (0x0001a2c9) slider_imed_adjust_pane_ParamLimits

0x37f2,	// (0x0001a2dd) slider_imed_adjust_pane_g1_ParamLimits

0x3802,	// (0x0001a2ed) slider_imed_adjust_pane_g2_ParamLimits

0x3812,	// (0x0001a2fd) slider_imed_adjust_pane_g3_ParamLimits

0x3823,	// (0x0001a30e) slider_imed_adjust_pane_g4_ParamLimits

0xf7f5,	// (0x000262e0) slider_imed_adjust_pane_g_ParamLimits

0x7e22,	// (0x0001e90d) aid_touch_area_cam4_ParamLimits

0x7e22,	// (0x0001e90d) aid_touch_area_cam4

0x7e30,	// (0x0001e91b) battery_pane_cp01

0x7eaf,	// (0x0001e99a) main_camera4_pane_g6_ParamLimits

0x7eaf,	// (0x0001e99a) main_camera4_pane_g6

0x7ecd,	// (0x0001e9b8) main_camera4_pane_t2_ParamLimits

0x7ecd,	// (0x0001e9b8) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x000263e7) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x000263e7) main_camera4_pane_t

0x7f3f,	// (0x0001ea2a) aid_touch_area_vid4_ParamLimits

0x7f3f,	// (0x0001ea2a) aid_touch_area_vid4

0x7eaf,	// (0x0001e99a) main_video4_pane_g5_ParamLimits

0x7eaf,	// (0x0001e99a) main_video4_pane_g5

0x7f6f,	// (0x0001ea5a) vid4_progress_pane_ParamLimits

0x7f6f,	// (0x0001ea5a) vid4_progress_pane

0x4194,	// (0x0001ac7f) main_cset_slider_pane_g18_ParamLimits

0x4194,	// (0x0001ac7f) main_cset_slider_pane_g18

0x43f3,	// (0x0001aede) cell_cam4_burst_pane_g2_ParamLimits

0x43f3,	// (0x0001aede) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x00026546) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00026546) cell_cam4_burst_pane_g

0xccaa,	// (0x00023795) bg_cl_pane_ParamLimits

0xccaa,	// (0x00023795) bg_cl_pane

0xccb6,	// (0x000237a1) cl_header_pane_ParamLimits

0xccb6,	// (0x000237a1) cl_header_pane

0xccc2,	// (0x000237ad) cl_listscroll_pane_ParamLimits

0xccc2,	// (0x000237ad) cl_listscroll_pane

0x45cb,	// (0x0001b0b6) bg_cl_pane_g1

0x45d3,	// (0x0001b0be) bg_cl_pane_g2

0x45db,	// (0x0001b0c6) bg_cl_pane_g3

0x45e3,	// (0x0001b0ce) bg_cl_pane_g4

0x45eb,	// (0x0001b0d6) bg_cl_pane_g5

0x45f3,	// (0x0001b0de) bg_cl_pane_g6

0x45fb,	// (0x0001b0e6) bg_cl_pane_g7

0x4603,	// (0x0001b0ee) bg_cl_pane_g8

0x460b,	// (0x0001b0f6) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x00026581) bg_cl_pane_g

0xccce,	// (0x000237b9) aid_height_cl_leading_ParamLimits

0xccce,	// (0x000237b9) aid_height_cl_leading

0xccda,	// (0x000237c5) aid_height_cl_text_ParamLimits

0xccda,	// (0x000237c5) aid_height_cl_text

0x3c25,	// (0x0001a710) bg_cl_header_pane_ParamLimits

0x3c25,	// (0x0001a710) bg_cl_header_pane

0xccf2,	// (0x000237dd) cl_header_pane_g1_ParamLimits

0xccf2,	// (0x000237dd) cl_header_pane_g1

0xccff,	// (0x000237ea) cl_header_pane_t1_ParamLimits

0xccff,	// (0x000237ea) cl_header_pane_t1

0x4613,	// (0x0001b0fe) cl_list_pane

0x461c,	// (0x0001b107) hc_scroll_pane_cp01

0x0ff7,	// (0x00017ae2) bg_cl_header_pane_g1

0x404d,	// (0x0001ab38) bg_cl_header_pane_g2

0x1017,	// (0x00017b02) bg_cl_header_pane_g3

0x405d,	// (0x0001ab48) bg_cl_header_pane_g4

0x4055,	// (0x0001ab40) bg_cl_header_pane_g5

0x42d6,	// (0x0001adc1) bg_cl_header_pane_g6

0x4075,	// (0x0001ab60) bg_cl_header_pane_g7

0x407d,	// (0x0001ab68) bg_cl_header_pane_g8

0x406d,	// (0x0001ab58) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x00026594) bg_cl_header_pane_g

0xcd11,	// (0x000237fc) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcd11,	// (0x000237fc) hc_cl_list_double_graphic_heading_pane

0xcd21,	// (0x0002380c) hc_cl_list_single_graphic_pane_ParamLimits

0xcd21,	// (0x0002380c) hc_cl_list_single_graphic_pane

0xcd33,	// (0x0002381e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcd33,	// (0x0002381e) hc_cl_list_single_graphic_pane_g1

0xcd3f,	// (0x0002382a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xcd3f,	// (0x0002382a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x000265a7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x000265a7) hc_cl_list_single_graphic_pane_g

0xcd53,	// (0x0002383e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xcd53,	// (0x0002383e) hc_cl_list_single_graphic_pane_t1

0xcd33,	// (0x0002381e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcd33,	// (0x0002381e) hc_cl_list_double_graphic_heading_pane_g1

0xcd68,	// (0x00023853) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xcd68,	// (0x00023853) hc_cl_list_double_graphic_heading_pane_g2

0xcd7c,	// (0x00023867) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xcd7c,	// (0x00023867) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x000265ac) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x000265ac) hc_cl_list_double_graphic_heading_pane_g

0xcd90,	// (0x0002387b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xcd90,	// (0x0002387b) hc_cl_list_double_graphic_heading_pane_t1

0xcda5,	// (0x00023890) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xcda5,	// (0x00023890) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x000265b3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x000265b3) hc_cl_list_double_graphic_heading_pane_t

0x841c,	// (0x0001ef07) vid4_progress_pane_g1

0x842b,	// (0x0001ef16) vid4_progress_pane_g2

0x843a,	// (0x0001ef25) vid4_progress_pane_g3

0x8449,	// (0x0001ef34) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x000265b8) vid4_progress_pane_g

0x8461,	// (0x0001ef4c) vid4_progress_pane_t1

0x8477,	// (0x0001ef62) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x000265c3) vid4_progress_pane_t

0x84a1,	// (0x0001ef8c) wait_bar_pane_cp07

0x304a,	// (0x00019b35) blid_firmament_pane_ParamLimits

0x308b,	// (0x00019b76) popup_blid_sat_info2_window_g1

0x30af,	// (0x00019b9a) popup_blid_sat_info2_window_t3

0x30bd,	// (0x00019ba8) popup_blid_sat_info2_window_t4

0x30cb,	// (0x00019bb6) popup_blid_sat_info2_window_t5

0x30d9,	// (0x00019bc4) popup_blid_sat_info2_window_t6

0x30e9,	// (0x00019bd4) popup_blid_sat_info2_window_t7

0x30f7,	// (0x00019be2) popup_blid_sat_info2_window_t8

0x3105,	// (0x00019bf0) popup_blid_sat_info2_window_t9

0x3113,	// (0x00019bfe) popup_blid_sat_info2_window_t10

0x31cf,	// (0x00019cba) aid_firma_cardinal_ParamLimits

0x31e3,	// (0x00019cce) blid_firmament_pane_t1_ParamLimits

0x31fa,	// (0x00019ce5) blid_firmament_pane_t2_ParamLimits

0x3211,	// (0x00019cfc) blid_firmament_pane_t3_ParamLimits

0x3228,	// (0x00019d13) blid_firmament_pane_t4_ParamLimits

0xf6e2,	// (0x000261cd) blid_firmament_pane_t_ParamLimits

0x323f,	// (0x00019d2a) blid_sat_info_pane_ParamLimits

0x743d,	// (0x0001df28) main_cam_set_pane_ParamLimits

0xbddc,	// (0x000228c7) aid_size_cell_colour_35_ParamLimits

0xbdf3,	// (0x000228de) aid_size_cell_colour_112_ParamLimits

0xbe0a,	// (0x000228f5) aid_size_cell_effect_ParamLimits

0x039b,	// (0x00016e86) bg_tb_trans_pane_cp02_ParamLimits

0x131c,	// (0x00017e07) heading_imed_pane_ParamLimits

0xbe24,	// (0x0002290f) listscroll_imed_pane_ParamLimits

0x2321,	// (0x00018e0c) popup_call2_audio_first_window_g5_ParamLimits

0x2321,	// (0x00018e0c) popup_call2_audio_first_window_g5

0x7c09,	// (0x0001e6f4) aid_size_touch_image3_arrow_left_ParamLimits

0x7c09,	// (0x0001e6f4) aid_size_touch_image3_arrow_left

0x7c1d,	// (0x0001e708) aid_size_touch_image3_arrow_right_ParamLimits

0x7c1d,	// (0x0001e708) aid_size_touch_image3_arrow_right

0x848c,	// (0x0001ef77) vid4_progress_pane_t3

0xc088,	// (0x00022b73) main_hwr_training_symbol_option_pane_ParamLimits

0xc088,	// (0x00022b73) main_hwr_training_symbol_option_pane

0x3a7e,	// (0x0001a569) popup_hwr_training_preview_window_ParamLimits

0x3a7e,	// (0x0001a569) popup_hwr_training_preview_window

0x7901,	// (0x0001e3ec) hwr_training_navi_pane_g5_ParamLimits

0x7901,	// (0x0001e3ec) hwr_training_navi_pane_g5

0x4029,	// (0x0001ab14) popup_char_count_window

0x6f24,	// (0x0001da0f) bg_popup_sub_pane_cp20_ParamLimits

0x8368,	// (0x0001ee53) list_vitu2_match_list_pane_ParamLimits

0x8374,	// (0x0001ee5f) vitu2_page_scroll_pane_ParamLimits

0x8374,	// (0x0001ee5f) vitu2_page_scroll_pane

0x46e2,	// (0x0001b1cd) list_single_hwr_training_symbol_option_pane_ParamLimits

0x46e2,	// (0x0001b1cd) list_single_hwr_training_symbol_option_pane

0x46f5,	// (0x0001b1e0) list_single_hwr_training_symbol_option_pane_g1

0x46fd,	// (0x0001b1e8) list_single_hwr_training_symbol_option_pane_t1

0x470b,	// (0x0001b1f6) bg_button_pane_cp023

0x4714,	// (0x0001b1ff) bg_button_pane_cp024

0xcde9,	// (0x000238d4) vitu2_page_scroll_pane_g1

0xcdf1,	// (0x000238dc) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x000265ca) vitu2_page_scroll_pane_g

0xcdf9,	// (0x000238e4) vitu2_page_scroll_pane_t1

0x3278,	// (0x00019d63) popup_char_count_window_g1

0x4747,	// (0x0001b232) popup_char_count_window_g2

0x4750,	// (0x0001b23b) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x000265cf) popup_char_count_window_g

0x4759,	// (0x0001b244) popup_char_count_window_t1

0x6f32,	// (0x0001da1d) main_vded2_pane

0x378d,	// (0x0001a278) aid_size_cell_imed_line

0x3797,	// (0x0001a282) grid_imed_line_width_pane

0x7fba,	// (0x0001eaa5) vid4_indicators_pane_g4

0x4767,	// (0x0001b252) cell_imed_line_width_pane_ParamLimits

0x4767,	// (0x0001b252) cell_imed_line_width_pane

0x4779,	// (0x0001b264) cell_imed_line_width_pane_g1

0x4782,	// (0x0001b26d) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x000265d6) cell_imed_line_width_pane_g

0xce08,	// (0x000238f3) main_vded2_pane_g1_ParamLimits

0xce08,	// (0x000238f3) main_vded2_pane_g1

0xce15,	// (0x00023900) main_vded2_pane_g2_ParamLimits

0xce15,	// (0x00023900) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x000265db) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x000265db) main_vded2_pane_g

0xce21,	// (0x0002390c) vded2_slider_pane_ParamLimits

0xce21,	// (0x0002390c) vded2_slider_pane

0xce2e,	// (0x00023919) aid_size_touch_vded2_end

0xce36,	// (0x00023921) aid_size_touch_vded2_playhead

0xce3e,	// (0x00023929) aid_size_touch_vded2_start

0xce46,	// (0x00023931) vded2_slider_bg_pane

0xce4f,	// (0x0002393a) vded2_slider_pane_g1

0xce58,	// (0x00023943) vded2_slider_pane_g2

0xce60,	// (0x0002394b) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x000265e0) vded2_slider_pane_g

0xce69,	// (0x00023954) vded2_slider_bg_pane_g1

0xce72,	// (0x0002395d) vded2_slider_bg_pane_g2

0xce7b,	// (0x00023966) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x000265e7) vded2_slider_bg_pane_g

0xa89c,	// (0x00021387) aid_postcard_touch_down_pane_ParamLimits

0xa89c,	// (0x00021387) aid_postcard_touch_down_pane

0xa8a8,	// (0x00021393) aid_postcard_touch_up_pane_ParamLimits

0xa8a8,	// (0x00021393) aid_postcard_touch_up_pane

0x6f32,	// (0x0001da1d) main_blid2_pane

0x7466,	// (0x0001df51) popup_blid2_search_window

0x0348,	// (0x00016e33) blid2_gps_pane

0x0348,	// (0x00016e33) blid2_navig_pane

0x0348,	// (0x00016e33) blid2_search_pane

0x0348,	// (0x00016e33) blid2_tripm_pane

0xce84,	// (0x0002396f) blid2_search_pane_g1_ParamLimits

0xce84,	// (0x0002396f) blid2_search_pane_g1

0xce90,	// (0x0002397b) blid2_search_pane_t1_ParamLimits

0xce90,	// (0x0002397b) blid2_search_pane_t1

0xcea2,	// (0x0002398d) aid_size_cell_blid2_gps_ParamLimits

0xcea2,	// (0x0002398d) aid_size_cell_blid2_gps

0xceb2,	// (0x0002399d) blid2_gps_pane_g1_ParamLimits

0xceb2,	// (0x0002399d) blid2_gps_pane_g1

0xcebe,	// (0x000239a9) grid_blid2_satellite_pane_ParamLimits

0xcebe,	// (0x000239a9) grid_blid2_satellite_pane

0xceca,	// (0x000239b5) blid2_navig_pane_g1_ParamLimits

0xceca,	// (0x000239b5) blid2_navig_pane_g1

0xced6,	// (0x000239c1) blid2_navig_pane_t1_ParamLimits

0xced6,	// (0x000239c1) blid2_navig_pane_t1

0xcee8,	// (0x000239d3) blid2_navig_pane_t2_ParamLimits

0xcee8,	// (0x000239d3) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x000265ee) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x000265ee) blid2_navig_pane_t

0xcefa,	// (0x000239e5) blid2_navig_ring_pane_ParamLimits

0xcefa,	// (0x000239e5) blid2_navig_ring_pane

0xcf06,	// (0x000239f1) blid2_speed_pane_ParamLimits

0xcf06,	// (0x000239f1) blid2_speed_pane

0xcf12,	// (0x000239fd) blid2_tripm_pane_g1_ParamLimits

0xcf12,	// (0x000239fd) blid2_tripm_pane_g1

0xcf1e,	// (0x00023a09) blid2_tripm_pane_g2_ParamLimits

0xcf1e,	// (0x00023a09) blid2_tripm_pane_g2

0xcf2a,	// (0x00023a15) blid2_tripm_pane_g3_ParamLimits

0xcf2a,	// (0x00023a15) blid2_tripm_pane_g3

0xcf36,	// (0x00023a21) blid2_tripm_pane_g4_ParamLimits

0xcf36,	// (0x00023a21) blid2_tripm_pane_g4

0xcf42,	// (0x00023a2d) blid2_tripm_pane_g5_ParamLimits

0xcf42,	// (0x00023a2d) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x000265f3) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x000265f3) blid2_tripm_pane_g

0xcf5a,	// (0x00023a45) blid2_tripm_pane_t1_ParamLimits

0xcf5a,	// (0x00023a45) blid2_tripm_pane_t1

0xcf6c,	// (0x00023a57) blid2_tripm_pane_t2_ParamLimits

0xcf6c,	// (0x00023a57) blid2_tripm_pane_t2

0xcf7e,	// (0x00023a69) blid2_tripm_pane_t3_ParamLimits

0xcf7e,	// (0x00023a69) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x00026600) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x00026600) blid2_tripm_pane_t

0xcfae,	// (0x00023a99) cell_blid2_satellite_pane_ParamLimits

0xcfae,	// (0x00023a99) cell_blid2_satellite_pane

0xcfc6,	// (0x00023ab1) cell_blid2_satellite_pane_g1

0x478a,	// (0x0001b275) cell_blid2_satellite_pane_t1

0x324f,	// (0x00019d3a) blid2_speed_pane_g1

0x4798,	// (0x0001b283) blid2_speed_pane_t1

0x47a6,	// (0x0001b291) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x00026609) blid2_speed_pane_t

0x324f,	// (0x00019d3a) blid2_navig_ring_pane_g1

0xcfcf,	// (0x00023aba) blid2_navig_ring_pane_g2

0xcfd7,	// (0x00023ac2) blid2_navig_ring_pane_g3

0xcfdf,	// (0x00023aca) blid2_navig_ring_pane_g4

0xcfe7,	// (0x00023ad2) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0002660e) blid2_navig_ring_pane_g

0x0348,	// (0x00016e33) bg_popup_window_pane_cp011

0x47b4,	// (0x0001b29f) popup_blid2_search_window_g1

0x47bc,	// (0x0001b2a7) popup_blid2_search_window_t1

0x47ca,	// (0x0001b2b5) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x00026619) popup_blid2_search_window_t

0x0f06,	// (0x000179f1) main_browser_pane_g1

0x0b00,	// (0x000175eb) main_browser_pane_ParamLimits

0x743d,	// (0x0001df28) bg_button_pane_cp011_ParamLimits

0x8291,	// (0x0001ed7c) cell_vitu2_function_pane_g1_ParamLimits

0x2d3b,	// (0x00019826) bg_popup_sub_pane_cp22_ParamLimits

0xc98e,	// (0x00023479) input_focus_pane_cp08_ParamLimits

0xc9a5,	// (0x00023490) popup_vitu2_query_button_pane_ParamLimits

0xc9a5,	// (0x00023490) popup_vitu2_query_button_pane

0xc9b6,	// (0x000234a1) popup_vitu2_query_input_button_pane

0x4349,	// (0x0001ae34) popup_vitu2_query_window_g1_ParamLimits

0xc9be,	// (0x000234a9) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0002651a) popup_vitu2_query_window_g_ParamLimits

0x0348,	// (0x00016e33) bg_button_pane_cp026

0xcfef,	// (0x00023ada) popup_vitu2_query_input_button_pane_g1

0x0348,	// (0x00016e33) bg_button_pane_cp025

0x47d8,	// (0x0001b2c3) popup_vitu2_query_button_pane_t1

0xb482,	// (0x00021f6d) main_mp3_pane_t6

0xb490,	// (0x00021f7b) popup_slider_window_cp01

0x7eed,	// (0x0001e9d8) cam4_battery_pane

0x7eed,	// (0x0001e9d8) cam4_battery_pane_cp02

0x7eed,	// (0x0001e9d8) cam4_battery_pane_cp01

0x7eed,	// (0x0001e9d8) cam4_battery_pane_cp03

0x47e6,	// (0x0001b2d1) cam4_battery_pane_g1

0x324f,	// (0x00019d3a) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0002661e) cam4_battery_pane_g

0x3121,	// (0x00019c0c) popup_blid_sat_info2_window_t11

0xa3ad,	// (0x00020e98) aid_size_touch_mv_arrow_left_ParamLimits

0x16de,	// (0x000181c9) aid_size_touch_mv_arrow_right_ParamLimits

0x1737,	// (0x00018222) navi_pane_g1_ParamLimits

0x1743,	// (0x0001822e) navi_pane_g2_ParamLimits

0xa3d1,	// (0x00020ebc) navi_pane_g3_ParamLimits

0xf3e1,	// (0x00025ecc) navi_pane_g_ParamLimits

0xa3ee,	// (0x00020ed9) navi_pane_mv_t1_ParamLimits

0xbe30,	// (0x0002291b) grid_imed_effect_pane_ParamLimits

0x910b,	// (0x0001fbf6) aid_placing_vt_slider_lsc

0x0e48,	// (0x00017933) aid_placing_vt_slider_prt

0x039b,	// (0x00016e86) bg_tb_trans_pane_cp01_ParamLimits

0x339e,	// (0x00019e89) popup_image_details_window_g1_ParamLimits

0x33b1,	// (0x00019e9c) popup_image_details_window_g2_ParamLimits

0x33c6,	// (0x00019eb1) popup_image_details_window_g3_ParamLimits

0x33c6,	// (0x00019eb1) popup_image_details_window_g3

0xf727,	// (0x00026212) popup_image_details_window_g_ParamLimits

0x33da,	// (0x00019ec5) popup_image_details_window_t1_ParamLimits

0x33ec,	// (0x00019ed7) popup_image_details_window_t2_ParamLimits

0x3405,	// (0x00019ef0) popup_image_details_window_t3_ParamLimits

0x3419,	// (0x00019f04) popup_image_details_window_t4_ParamLimits

0x3434,	// (0x00019f1f) popup_image_details_window_t5_ParamLimits

0xf72e,	// (0x00026219) popup_image_details_window_t_ParamLimits

0xcce6,	// (0x000237d1) cl_header_name_pane_ParamLimits

0xcce6,	// (0x000237d1) cl_header_name_pane

0xcff7,	// (0x00023ae2) cl_header_name_pane_t1_ParamLimits

0xcff7,	// (0x00023ae2) cl_header_name_pane_t1

0xd00e,	// (0x00023af9) cl_header_name_pane_t2_ParamLimits

0xd00e,	// (0x00023af9) cl_header_name_pane_t2

0xd038,	// (0x00023b23) cl_header_name_pane_t3_ParamLimits

0xd038,	// (0x00023b23) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x00026623) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x00026623) cl_header_name_pane_t

0x17d0,	// (0x000182bb) navi_pane_mv_g2_ParamLimits

0x3fe6,	// (0x0001aad1) field_vitu2_entry_pane_g1_ParamLimits

0x3ff2,	// (0x0001aadd) field_vitu2_entry_pane_g2_ParamLimits

0x3ffe,	// (0x0001aae9) field_vitu2_entry_pane_g3_ParamLimits

0x3ffe,	// (0x0001aae9) field_vitu2_entry_pane_g3

0xf92e,	// (0x00026419) field_vitu2_entry_pane_g_ParamLimits

0x815d,	// (0x0001ec48) cell_vitu2_itu_pane_g1_ParamLimits

0x816f,	// (0x0001ec5a) cell_vitu2_itu_pane_g2_ParamLimits

0x816f,	// (0x0001ec5a) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x00026425) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x00026425) cell_vitu2_itu_pane_g

0x743d,	// (0x0001df28) bg_vkb2_func_pane_cp05_ParamLimits

0x743d,	// (0x0001df28) bg_vkb2_func_pane_cp05

0x743d,	// (0x0001df28) bg_vkb2_func_pane_cp03

0x743d,	// (0x0001df28) bg_vkb2_func_pane_cp04

0x743d,	// (0x0001df28) bg_vkb2_func_pane_cp10_ParamLimits

0x743d,	// (0x0001df28) bg_vkb2_func_pane_cp10

0xcc8c,	// (0x00023777) bg_vkb2_func_pane_cp08

0xcc73,	// (0x0002375e) bg_vkb2_func_pane_cp06

0xcc80,	// (0x0002376b) bg_vkb2_func_pane_cp07

0x471d,	// (0x0001b208) bg_vkb2_func_pane_cp11_ParamLimits

0x471d,	// (0x0001b208) bg_vkb2_func_pane_cp11

0x4732,	// (0x0001b21d) bg_vkb2_func_pane_cp12_ParamLimits

0x4732,	// (0x0001b21d) bg_vkb2_func_pane_cp12

0x0348,	// (0x00016e33) bg_vkb2_func_pane_cp09

0x404d,	// (0x0001ab38) bg_vkb2_func_pane_g1

0x1017,	// (0x00017b02) bg_vkb2_func_pane_g2

0x4055,	// (0x0001ab40) bg_vkb2_func_pane_g3

0x405d,	// (0x0001ab48) bg_vkb2_func_pane_g4

0x42d6,	// (0x0001adc1) bg_vkb2_func_pane_g5

0x4075,	// (0x0001ab60) bg_vkb2_func_pane_g6

0x407d,	// (0x0001ab68) bg_vkb2_func_pane_g7

0x406d,	// (0x0001ab58) bg_vkb2_func_pane_g8

0x0ff7,	// (0x00017ae2) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0002662a) bg_vkb2_func_pane_g

0xcf4e,	// (0x00023a39) blid2_tripm_pane_g6_ParamLimits

0xcf4e,	// (0x00023a39) blid2_tripm_pane_g6

0x3da5,	// (0x0001a890) mp4_progress_pane_g1

0xcfa2,	// (0x00023a8d) blid2_tripm_values_pane_ParamLimits

0xcfa2,	// (0x00023a8d) blid2_tripm_values_pane

0xd05d,	// (0x00023b48) blid2_tripm_values_pane_t1

0xd06b,	// (0x00023b56) blid2_tripm_values_pane_t2

0xd079,	// (0x00023b64) blid2_tripm_values_pane_t3

0xd087,	// (0x00023b72) blid2_tripm_values_pane_t4

0xd095,	// (0x00023b80) blid2_tripm_values_pane_t5

0xd0a3,	// (0x00023b8e) blid2_tripm_values_pane_t6

0xd0b1,	// (0x00023b9c) blid2_tripm_values_pane_t7

0xd0bf,	// (0x00023baa) blid2_tripm_values_pane_t8

0xd0cd,	// (0x00023bb8) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0002663d) blid2_tripm_values_pane_t

0x9145,	// (0x0001fc30) call_video_pane_t1_ParamLimits

0x9162,	// (0x0001fc4d) call_video_pane_t2_ParamLimits

0xf26a,	// (0x00025d55) call_video_pane_t_ParamLimits

0xa854,	// (0x0002133f) msg_header_pane_g1_ParamLimits

0x19ca,	// (0x000184b5) msg_header_pane_g2_ParamLimits

0x19ca,	// (0x000184b5) msg_header_pane_g2

0x0001,

0xf484,	// (0x00025f6f) msg_header_pane_g_ParamLimits

0xf484,	// (0x00025f6f) msg_header_pane_g

0x0b00,	// (0x000175eb) main_clock2_pane_ParamLimits

0xbc4c,	// (0x00022737) grid_clock2_toolbar_pane_ParamLimits

0xbc4c,	// (0x00022737) grid_clock2_toolbar_pane

0xbc4c,	// (0x00022737) listscroll_clock2_pane_ParamLimits

0xbc4c,	// (0x00022737) listscroll_clock2_pane

0xbce8,	// (0x000227d3) main_clock2_pane_t3_ParamLimits

0xbce8,	// (0x000227d3) main_clock2_pane_t3

0xbcfa,	// (0x000227e5) main_clock2_pane_t4_ParamLimits

0xbcfa,	// (0x000227e5) main_clock2_pane_t4

0x47f0,	// (0x0001b2db) cell_clock2_toolbar_pane

0x47f8,	// (0x0001b2e3) cell_clock2_toolbar_pane_cp01

0x47f8,	// (0x0001b2e3) cell_clock2_toolbar_pane_cp02

0x4800,	// (0x0001b2eb) cell_clock2_toolbar_pane_cp03

0x4808,	// (0x0001b2f3) list_clock2_pane

0x4810,	// (0x0001b2fb) scroll_pane_cp10

0x4818,	// (0x0001b303) list_single_clock2_pane_ParamLimits

0x4818,	// (0x0001b303) list_single_clock2_pane

0x0d6f,	// (0x0001785a) list_highlight_pane_cp08

0x4825,	// (0x0001b310) list_single_clock2_pane_t1

0x4833,	// (0x0001b31e) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x00026650) list_single_clock2_pane_t

0x0348,	// (0x00016e33) bg_button_pane_cp10

0x4841,	// (0x0001b32c) cell_clock2_toolbar_pane_g1

0x73d9,	// (0x0001dec4) aid_main_viewer_pane_g1_ParamLimits

0x73d9,	// (0x0001dec4) aid_main_viewer_pane_g1

0x73e5,	// (0x0001ded0) aid_main_viewer_pane_g2_ParamLimits

0x73e5,	// (0x0001ded0) aid_main_viewer_pane_g2

0xa860,	// (0x0002134b) aid_main_viewer_pane_g3_ParamLimits

0xa860,	// (0x0002134b) aid_main_viewer_pane_g3

0xa86f,	// (0x0002135a) aid_main_viewer_pane_g4_ParamLimits

0xa86f,	// (0x0002135a) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x00025f80) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x00025f80) aid_main_viewer_pane_g

0x6f24,	// (0x0001da0f) main_calc_pane_ParamLimits

0x744b,	// (0x0001df36) main_dialer2_pane_ParamLimits

0x6f32,	// (0x0001da1d) main_cam6_pane

0x6f32,	// (0x0001da1d) main_vid6_pane

0xbc58,	// (0x00022743) listscroll_gen_pane_cp06_ParamLimits

0xbc58,	// (0x00022743) listscroll_gen_pane_cp06

0xbd0c,	// (0x000227f7) main_clock2_pane_t5_ParamLimits

0xbd0c,	// (0x000227f7) main_clock2_pane_t5

0xbd55,	// (0x00022840) aid_call2_pane_cp10_ParamLimits

0xbd67,	// (0x00022852) aid_call_pane_cp10_ParamLimits

0x16d2,	// (0x000181bd) popup_clock_analogue_window_cp10_g1_ParamLimits

0x16d2,	// (0x000181bd) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbd79,	// (0x00022864) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbd79,	// (0x00022864) popup_clock_analogue_window_cp10_g4_ParamLimits

0x16d2,	// (0x000181bd) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e3,	// (0x000262ce) popup_clock_analogue_window_cp10_g_ParamLimits

0xbd8b,	// (0x00022876) popup_clock_analogue_window_cp10_t1_ParamLimits

0x3e05,	// (0x0001a8f0) cell_dialer2_keypad_pane_g2_ParamLimits

0x3e05,	// (0x0001a8f0) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x000263b8) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x000263b8) cell_dialer2_keypad_pane_g

0xc147,	// (0x00022c32) cell_dialer2_keypad_pane_t1

0xc4d3,	// (0x00022fbe) main_cset_text2_pane_ParamLimits

0xc4d3,	// (0x00022fbe) main_cset_text2_pane

0x4523,	// (0x0001b00e) area_vitu2_query_pane_g1_ParamLimits

0xcc18,	// (0x00023703) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0002656d) area_vitu2_query_pane_g_ParamLimits

0x45a7,	// (0x0001b092) area_vitu2_query_pane_t7_ParamLimits

0x45a7,	// (0x0001b092) area_vitu2_query_pane_t7

0xcc73,	// (0x0002375e) bg_button_pane_cp018_ParamLimits

0xcc80,	// (0x0002376b) bg_button_pane_cp021_ParamLimits

0xcc8c,	// (0x00023777) bg_button_pane_cp022_ParamLimits

0xcc8c,	// (0x00023777) bg_vkb2_func_pane_cp08_ParamLimits

0xcc73,	// (0x0002375e) bg_vkb2_func_pane_cp06_ParamLimits

0xcc80,	// (0x0002376b) bg_vkb2_func_pane_cp07_ParamLimits

0xcc9b,	// (0x00023786) input_focus_pane_cp09_ParamLimits

0x84b1,	// (0x0001ef9c) cam6_autofocus_pane_ParamLimits

0x84b1,	// (0x0001ef9c) cam6_autofocus_pane

0x84cd,	// (0x0001efb8) cam6_image_uncrop_pane_ParamLimits

0x84cd,	// (0x0001efb8) cam6_image_uncrop_pane

0x84f0,	// (0x0001efdb) cam6_indi_pane_ParamLimits

0x84f0,	// (0x0001efdb) cam6_indi_pane

0x850a,	// (0x0001eff5) cam6_mode_pane_ParamLimits

0x850a,	// (0x0001eff5) cam6_mode_pane

0x851e,	// (0x0001f009) cam6_timer_pane_ParamLimits

0x851e,	// (0x0001f009) cam6_timer_pane

0x852a,	// (0x0001f015) cam6_zoom_pane_ParamLimits

0x852a,	// (0x0001f015) cam6_zoom_pane

0xd0db,	// (0x00023bc6) cam6_mode_pane_g1_ParamLimits

0xd0db,	// (0x00023bc6) cam6_mode_pane_g1

0xd0e7,	// (0x00023bd2) cam6_mode_pane_g2_ParamLimits

0xd0e7,	// (0x00023bd2) cam6_mode_pane_g2

0xd0f3,	// (0x00023bde) cam6_mode_pane_g3_ParamLimits

0xd0f3,	// (0x00023bde) cam6_mode_pane_g3

0xd0ff,	// (0x00023bea) cam6_mode_pane_g4_ParamLimits

0xd0ff,	// (0x00023bea) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x00026655) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x00026655) cam6_mode_pane_g

0x4855,	// (0x0001b340) bg_tb_trans_pane_cp08_ParamLimits

0x4855,	// (0x0001b340) bg_tb_trans_pane_cp08

0x4863,	// (0x0001b34e) cam6_battery_pane_ParamLimits

0x4863,	// (0x0001b34e) cam6_battery_pane

0x4879,	// (0x0001b364) cam6_indi_pane_g1_ParamLimits

0x4879,	// (0x0001b364) cam6_indi_pane_g1

0x488b,	// (0x0001b376) cam6_indi_pane_g2_ParamLimits

0x488b,	// (0x0001b376) cam6_indi_pane_g2

0x489d,	// (0x0001b388) cam6_indi_pane_g3_ParamLimits

0x489d,	// (0x0001b388) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0002665e) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0002665e) cam6_indi_pane_g

0x48af,	// (0x0001b39a) cam6_indi_pane_t1_ParamLimits

0x48af,	// (0x0001b39a) cam6_indi_pane_t1

0xc214,	// (0x00022cff) cam6_autofocus_pane_g1

0xc20c,	// (0x00022cf7) cam6_autofocus_pane_g2

0xc224,	// (0x00022d0f) cam6_autofocus_pane_g3

0xc21c,	// (0x00022d07) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x00026665) cam6_autofocus_pane_g

0x48d5,	// (0x0001b3c0) cam6_timer_pane_g1

0x48dd,	// (0x0001b3c8) cam6_timer_pane_t1

0x48eb,	// (0x0001b3d6) cam6_zoom_cont_pane

0x48f3,	// (0x0001b3de) cam6_zoom_pane_g1

0x48fb,	// (0x0001b3e6) cam6_zoom_pane_g2

0xd10b,	// (0x00023bf6) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0002666e) cam6_zoom_pane_g

0x324f,	// (0x00019d3a) cam6_battery_pane_g1

0x324f,	// (0x00019d3a) cam6_battery_pane_g2

0x0001,

0xf6eb,	// (0x000261d6) cam6_battery_pane_g

0x4903,	// (0x0001b3ee) cam6_zoom_cont_pane_g1

0x490c,	// (0x0001b3f7) cam6_zoom_cont_pane_g2

0x4915,	// (0x0001b400) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x00026675) cam6_zoom_cont_pane_g

0xd128,	// (0x00023c13) cam6_mode_pane_cp_ParamLimits

0xd128,	// (0x00023c13) cam6_mode_pane_cp

0xd13c,	// (0x00023c27) cam6_zoom_pane_cp_ParamLimits

0xd13c,	// (0x00023c27) cam6_zoom_pane_cp

0xd152,	// (0x00023c3d) vid6_image_uncrop_cif_pane_ParamLimits

0xd152,	// (0x00023c3d) vid6_image_uncrop_cif_pane

0xd174,	// (0x00023c5f) vid6_image_uncrop_nhd_pane_ParamLimits

0xd174,	// (0x00023c5f) vid6_image_uncrop_nhd_pane

0xd18b,	// (0x00023c76) vid6_image_uncrop_vga_pane_ParamLimits

0xd18b,	// (0x00023c76) vid6_image_uncrop_vga_pane

0xd1a2,	// (0x00023c8d) vid6_image_uncrop_wvga_pane_ParamLimits

0xd1a2,	// (0x00023c8d) vid6_image_uncrop_wvga_pane

0xd1b9,	// (0x00023ca4) vid6_indi_pane_ParamLimits

0xd1b9,	// (0x00023ca4) vid6_indi_pane

0x4855,	// (0x0001b340) bg_tb_trans_pane_cp09_ParamLimits

0x4855,	// (0x0001b340) bg_tb_trans_pane_cp09

0x4929,	// (0x0001b414) cam6_battery_pane_cp_ParamLimits

0x4929,	// (0x0001b414) cam6_battery_pane_cp

0x4935,	// (0x0001b420) vid6_indi_pane_g1_ParamLimits

0x4935,	// (0x0001b420) vid6_indi_pane_g1

0x4947,	// (0x0001b432) vid6_indi_pane_g2_ParamLimits

0x4947,	// (0x0001b432) vid6_indi_pane_g2

0x4959,	// (0x0001b444) vid6_indi_pane_g3_ParamLimits

0x4959,	// (0x0001b444) vid6_indi_pane_g3

0x496e,	// (0x0001b459) vid6_indi_pane_g4_ParamLimits

0x496e,	// (0x0001b459) vid6_indi_pane_g4

0x4983,	// (0x0001b46e) vid6_indi_pane_g5_ParamLimits

0x4983,	// (0x0001b46e) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0002667c) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0002667c) vid6_indi_pane_g

0x499d,	// (0x0001b488) vid6_indi_pane_t1_ParamLimits

0x499d,	// (0x0001b488) vid6_indi_pane_t1

0x49b3,	// (0x0001b49e) vid6_indi_pane_t2_ParamLimits

0x49b3,	// (0x0001b49e) vid6_indi_pane_t2

0x49db,	// (0x0001b4c6) vid6_indi_pane_t3_ParamLimits

0x49db,	// (0x0001b4c6) vid6_indi_pane_t3

0x4a03,	// (0x0001b4ee) vid6_indi_pane_t4_ParamLimits

0x4a03,	// (0x0001b4ee) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x00026687) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x00026687) vid6_indi_pane_t

0x4a27,	// (0x0001b512) wait_bar_pane_cp08

0xd1d9,	// (0x00023cc4) main_cset_text2_pane_t1_ParamLimits

0xd1d9,	// (0x00023cc4) main_cset_text2_pane_t1

0xd113,	// (0x00023bfe) listscroll_gen_pane_cp06_t1_ParamLimits

0xd113,	// (0x00023bfe) listscroll_gen_pane_cp06_t1

0x6f32,	// (0x0001da1d) main_cam6_set_pane

0x7edf,	// (0x0001e9ca) bg_tb_trans_pane_cp06_ParamLimits

0x7ef5,	// (0x0001e9e0) cam4_indicators_pane_g1_ParamLimits

0x7f05,	// (0x0001e9f0) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x000263f5) cam4_indicators_pane_g_ParamLimits

0x7f25,	// (0x0001ea10) cam4_indicators_pane_t1_ParamLimits

0x743d,	// (0x0001df28) bg_tb_trans_pane_cp07_ParamLimits

0x7ef5,	// (0x0001e9e0) vid4_indicators_pane_g1_ParamLimits

0x7f99,	// (0x0001ea84) vid4_indicators_pane_g2_ParamLimits

0x7fa9,	// (0x0001ea94) vid4_indicators_pane_g3_ParamLimits

0x7fba,	// (0x0001eaa5) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x00026407) vid4_indicators_pane_g_ParamLimits

0x7fd6,	// (0x0001eac1) vid4_indicators_pane_t1_ParamLimits

0x841c,	// (0x0001ef07) vid4_progress_pane_g1_ParamLimits

0x842b,	// (0x0001ef16) vid4_progress_pane_g2_ParamLimits

0x843a,	// (0x0001ef25) vid4_progress_pane_g3_ParamLimits

0x8449,	// (0x0001ef34) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x000265b8) vid4_progress_pane_g_ParamLimits

0x8461,	// (0x0001ef4c) vid4_progress_pane_t1_ParamLimits

0x8477,	// (0x0001ef62) vid4_progress_pane_t2_ParamLimits

0x848c,	// (0x0001ef77) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x000265c3) vid4_progress_pane_t_ParamLimits

0x84a1,	// (0x0001ef8c) wait_bar_pane_cp07_ParamLimits

0xd1f5,	// (0x00023ce0) main_cam6_set_pane_g2_ParamLimits

0xd1f5,	// (0x00023ce0) main_cam6_set_pane_g2

0xd201,	// (0x00023cec) main_cset6_listscroll_pane_ParamLimits

0xd201,	// (0x00023cec) main_cset6_listscroll_pane

0xd22a,	// (0x00023d15) main_cset6_slider_pane_ParamLimits

0xd22a,	// (0x00023d15) main_cset6_slider_pane

0xd236,	// (0x00023d21) main_cset6_text2_pane_ParamLimits

0xd236,	// (0x00023d21) main_cset6_text2_pane

0x4a37,	// (0x0001b522) main_cset6_text_pane

0x4157,	// (0x0001ac42) main_cset_list_pane_copy1_ParamLimits

0x4157,	// (0x0001ac42) main_cset_list_pane_copy1

0x4167,	// (0x0001ac52) scroll_pane_cp028_copy1

0xd249,	// (0x00023d34) cset_list_set_pane_copy1

0xc78e,	// (0x00023279) aid_position_infowindow_above_copy1

0xc796,	// (0x00023281) aid_position_infowindow_below_copy1

0xd258,	// (0x00023d43) cset_list_set_pane_g1_copy1

0xd260,	// (0x00023d4b) cset_list_set_pane_g3_copy1_ParamLimits

0xd260,	// (0x00023d4b) cset_list_set_pane_g3_copy1

0xd26f,	// (0x00023d5a) cset_list_set_pane_t1_copy1_ParamLimits

0xd26f,	// (0x00023d5a) cset_list_set_pane_t1_copy1

0x039b,	// (0x00016e86) list_highlight_pane_cp021_copy1_ParamLimits

0x039b,	// (0x00016e86) list_highlight_pane_cp021_copy1

0x4a3f,	// (0x0001b52a) cset6_slider_pane_ParamLimits

0x4a3f,	// (0x0001b52a) cset6_slider_pane

0x4a6b,	// (0x0001b556) main_cset6_slider_pane_g1_ParamLimits

0x4a6b,	// (0x0001b556) main_cset6_slider_pane_g1

0xd284,	// (0x00023d6f) main_cset6_slider_pane_g2_ParamLimits

0xd284,	// (0x00023d6f) main_cset6_slider_pane_g2

0x417c,	// (0x0001ac67) main_cset6_slider_pane_g3_ParamLimits

0x417c,	// (0x0001ac67) main_cset6_slider_pane_g3

0xd2ac,	// (0x00023d97) main_cset6_slider_pane_g4_ParamLimits

0xd2ac,	// (0x00023d97) main_cset6_slider_pane_g4

0xd2b8,	// (0x00023da3) main_cset6_slider_pane_g5_ParamLimits

0xd2b8,	// (0x00023da3) main_cset6_slider_pane_g5

0x417c,	// (0x0001ac67) main_cset6_slider_pane_g7_ParamLimits

0x417c,	// (0x0001ac67) main_cset6_slider_pane_g7

0x4188,	// (0x0001ac73) main_cset6_slider_pane_g8_ParamLimits

0x4188,	// (0x0001ac73) main_cset6_slider_pane_g8

0xd2c4,	// (0x00023daf) main_cset6_slider_pane_g9_ParamLimits

0xd2c4,	// (0x00023daf) main_cset6_slider_pane_g9

0xd2d0,	// (0x00023dbb) main_cset6_slider_pane_g10_ParamLimits

0xd2d0,	// (0x00023dbb) main_cset6_slider_pane_g10

0xd2ac,	// (0x00023d97) main_cset6_slider_pane_g11_ParamLimits

0xd2ac,	// (0x00023d97) main_cset6_slider_pane_g11

0xd2dc,	// (0x00023dc7) main_cset6_slider_pane_g12_ParamLimits

0xd2dc,	// (0x00023dc7) main_cset6_slider_pane_g12

0xd2e8,	// (0x00023dd3) main_cset6_slider_pane_g13_ParamLimits

0xd2e8,	// (0x00023dd3) main_cset6_slider_pane_g13

0xd2f4,	// (0x00023ddf) main_cset6_slider_pane_g14_ParamLimits

0xd2f4,	// (0x00023ddf) main_cset6_slider_pane_g14

0xd300,	// (0x00023deb) main_cset6_slider_pane_g15_ParamLimits

0xd300,	// (0x00023deb) main_cset6_slider_pane_g15

0xd2b8,	// (0x00023da3) main_cset6_slider_pane_g16_ParamLimits

0xd2b8,	// (0x00023da3) main_cset6_slider_pane_g16

0xd318,	// (0x00023e03) main_cset6_slider_pane_g17_ParamLimits

0xd318,	// (0x00023e03) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x00026690) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x00026690) main_cset6_slider_pane_g

0x4a93,	// (0x0001b57e) main_cset6_slider_pane_t1_ParamLimits

0x4a93,	// (0x0001b57e) main_cset6_slider_pane_t1

0xd324,	// (0x00023e0f) main_cset6_slider_pane_t2_ParamLimits

0xd324,	// (0x00023e0f) main_cset6_slider_pane_t2

0x4ad4,	// (0x0001b5bf) main_cset6_slider_pane_t3_ParamLimits

0x4ad4,	// (0x0001b5bf) main_cset6_slider_pane_t3

0xd34f,	// (0x00023e3a) main_cset6_slider_pane_t4_ParamLimits

0xd34f,	// (0x00023e3a) main_cset6_slider_pane_t4

0x4aff,	// (0x0001b5ea) main_cset6_slider_pane_t5_ParamLimits

0x4aff,	// (0x0001b5ea) main_cset6_slider_pane_t5

0x4b2a,	// (0x0001b615) main_cset6_slider_pane_t7_ParamLimits

0x4b2a,	// (0x0001b615) main_cset6_slider_pane_t7

0xd37a,	// (0x00023e65) main_cset6_slider_pane_t8_ParamLimits

0xd37a,	// (0x00023e65) main_cset6_slider_pane_t8

0xd39e,	// (0x00023e89) main_cset6_slider_pane_t9_ParamLimits

0xd39e,	// (0x00023e89) main_cset6_slider_pane_t9

0xd3c2,	// (0x00023ead) main_cset6_slider_pane_t10_ParamLimits

0xd3c2,	// (0x00023ead) main_cset6_slider_pane_t10

0xd3e6,	// (0x00023ed1) main_cset6_slider_pane_t11_ParamLimits

0xd3e6,	// (0x00023ed1) main_cset6_slider_pane_t11

0x4b60,	// (0x0001b64b) main_cset6_slider_pane_t14_ParamLimits

0x4b60,	// (0x0001b64b) main_cset6_slider_pane_t14

0x4b99,	// (0x0001b684) main_cset6_slider_pane_t15_ParamLimits

0x4b99,	// (0x0001b684) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x000266b5) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x000266b5) main_cset6_slider_pane_t

0x4260,	// (0x0001ad4b) cset_slider_pane_g1_copy1

0x4269,	// (0x0001ad54) cset_slider_pane_g2_copy1

0x4272,	// (0x0001ad5d) cset_slider_pane_g3_copy1

0x0348,	// (0x00016e33) bg_popup_sub_pane_cp011_copy1

0x4355,	// (0x0001ae40) main_cset_text_pane_g1_copy1

0x435d,	// (0x0001ae48) main_cset_text_pane_t1_copy1

0x436b,	// (0x0001ae56) main_cset_text_pane_t2_copy1

0x4379,	// (0x0001ae64) main_cset_text_pane_t3_copy1

0x4387,	// (0x0001ae72) main_cset_text_pane_t4_copy1

0x4395,	// (0x0001ae80) main_cset_text_pane_t5_copy1

0x43a3,	// (0x0001ae8e) main_cset_text_pane_t6_copy1

0x43b1,	// (0x0001ae9c) main_cset_text_pane_t7_copy1

0xd4db,	// (0x00023fc6) main_cset_text2_pane_t1_copy1

0x743d,	// (0x0001df28) main_ncimui_pane

0x7496,	// (0x0001df81) popup_query_ncimui_window_ParamLimits

0x7496,	// (0x0001df81) popup_query_ncimui_window

0x351f,	// (0x0001a00a) field_cale_ev2_pane_g4_ParamLimits

0x351f,	// (0x0001a00a) field_cale_ev2_pane_g4

0xc0e7,	// (0x00022bd2) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc0e7,	// (0x00022bd2) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a4,	// (0x0002638f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a4,	// (0x0002638f) cell_video_dialer_keypad_pane_g

0xc0ff,	// (0x00022bea) cell_video_dialer_keypad_pane_t1

0x0348,	// (0x00016e33) bg_popup_window_pane_cp012

0x151f,	// (0x0001800a) heading_pane_cp06

0x4bfc,	// (0x0001b6e7) ncim_query_content_pane

0x0348,	// (0x00016e33) bg_popup_heading_pane_cp01

0x4c04,	// (0x0001b6ef) ncim_heading_pane_t1

0x4c12,	// (0x0001b6fd) ncim_indicator_popup_pane

0x4c24,	// (0x0001b70f) ncim_query_button_pane

0x4c38,	// (0x0001b723) ncim_query_content_pane_t1

0x4c4a,	// (0x0001b735) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x000266f9) ncim_query_content_pane_t

0x4c84,	// (0x0001b76f) ncim_query_list_pane

0x4c96,	// (0x0001b781) ncim_query_popup_pane

0x4c12,	// (0x0001b6fd) ncim_indicator_popup_pane_ParamLimits

0xd61c,	// (0x00024107) ncim_query_content_pane_g1_ParamLimits

0xd61c,	// (0x00024107) ncim_query_content_pane_g1

0x4c38,	// (0x0001b723) ncim_query_content_pane_t1_ParamLimits

0x4c4a,	// (0x0001b735) ncim_query_content_pane_t2_ParamLimits

0xd628,	// (0x00024113) ncim_query_content_pane_t3_ParamLimits

0xd628,	// (0x00024113) ncim_query_content_pane_t3

0xd645,	// (0x00024130) ncim_query_content_pane_t4_ParamLimits

0xd645,	// (0x00024130) ncim_query_content_pane_t4

0xd662,	// (0x0002414d) ncim_query_content_pane_t5_ParamLimits

0xd662,	// (0x0002414d) ncim_query_content_pane_t5

0x4c5c,	// (0x0001b747) ncim_query_content_pane_t6_ParamLimits

0x4c5c,	// (0x0001b747) ncim_query_content_pane_t6

0xfc0e,	// (0x000266f9) ncim_query_content_pane_t_ParamLimits

0x4c84,	// (0x0001b76f) ncim_query_list_pane_ParamLimits

0x4c96,	// (0x0001b781) ncim_query_popup_pane_ParamLimits

0x4caa,	// (0x0001b795) wait_bar_pane_cp04

0x0348,	// (0x00016e33) input_focus_pane_cp011

0x4cb2,	// (0x0001b79d) ncim_query_popup_pane_t1

0x4cc0,	// (0x0001b7ab) ncim_list_query_list_pane_ParamLimits

0x4cc0,	// (0x0001b7ab) ncim_list_query_list_pane

0x0348,	// (0x00016e33) bg_button_pane_cp027

0x4cd3,	// (0x0001b7be) ncim_query_button_pane_g1

0x0348,	// (0x00016e33) list_highlight_pane_cp012

0x4cdd,	// (0x0001b7c8) ncim_list_query_list_pane_g1

0x4ce5,	// (0x0001b7d0) ncim_list_query_list_pane_t1

0x7f15,	// (0x0001ea00) cam4_indicators_pane_g3_ParamLimits

0x7f15,	// (0x0001ea00) cam4_indicators_pane_g3

0x7fc6,	// (0x0001eab1) vid4_indicators_pane_g5_ParamLimits

0x7fc6,	// (0x0001eab1) vid4_indicators_pane_g5

0x8455,	// (0x0001ef40) vid4_progress_pane_g5_ParamLimits

0x8455,	// (0x0001ef40) vid4_progress_pane_g5

0xd50c,	// (0x00023ff7) main_ncimui_pane_g1

0xd572,	// (0x0002405d) ncimui_group_query_pane_ParamLimits

0xd572,	// (0x0002405d) ncimui_group_query_pane

0xd5ba,	// (0x000240a5) ncimui_list_pane_ParamLimits

0xd5ba,	// (0x000240a5) ncimui_list_pane

0xd5df,	// (0x000240ca) ncimui_text_pane_ParamLimits

0xd5df,	// (0x000240ca) ncimui_text_pane

0xd67f,	// (0x0002416a) ncimui_text_pane_t1_ParamLimits

0xd67f,	// (0x0002416a) ncimui_text_pane_t1

0x4cfc,	// (0x0001b7e7) ncimui_list_single_graphic_pane_ParamLimits

0x4cfc,	// (0x0001b7e7) ncimui_list_single_graphic_pane

0xd69d,	// (0x00024188) ncimui_query_pane_ParamLimits

0xd69d,	// (0x00024188) ncimui_query_pane

0x0348,	// (0x00016e33) list_highlight_pane_cp013

0x4d0c,	// (0x0001b7f7) ncim_list_query_list_pane_t1_copy1

0x4d1a,	// (0x0001b805) ncim_list_single_graphic_pane_g1

0x4d22,	// (0x0001b80d) ncim_query_button_pane_cp01

0x4d2e,	// (0x0001b819) ncim_query_entry_pane_ParamLimits

0x4d2e,	// (0x0001b819) ncim_query_entry_pane

0x4d41,	// (0x0001b82c) ncimui_query_pane_g1

0x4d4d,	// (0x0001b838) ncimui_query_pane_t1_ParamLimits

0x4d4d,	// (0x0001b838) ncimui_query_pane_t1

0x039b,	// (0x00016e86) input_focus_pane_cp012

0x4d66,	// (0x0001b851) ncim_query_entry_pane_t1

0x0b00,	// (0x000175eb) main_im_pane_ParamLimits

0x743d,	// (0x0001df28) main_mobtv_pane_ParamLimits

0x743d,	// (0x0001df28) main_mobtv_pane

0xd2c4,	// (0x00023daf) main_cset6_slider_pane_g18_ParamLimits

0xd2c4,	// (0x00023daf) main_cset6_slider_pane_g18

0xd2e8,	// (0x00023dd3) main_cset6_slider_pane_g19_ParamLimits

0xd2e8,	// (0x00023dd3) main_cset6_slider_pane_g19

0x3ffe,	// (0x0001aae9) bg_main_mobtv_pane_ParamLimits

0x3ffe,	// (0x0001aae9) bg_main_mobtv_pane

0xd6ad,	// (0x00024198) main_mobtv_info_pane

0xd6b6,	// (0x000241a1) main_mobtv_loading_pane_ParamLimits

0xd6b6,	// (0x000241a1) main_mobtv_loading_pane

0x4d86,	// (0x0001b871) main_mobtv_pg_channel_list_pane

0x4d90,	// (0x0001b87b) main_mobtv_pg_hdr_pane

0xd6c3,	// (0x000241ae) main_mobtv_programe_curr_pane_ParamLimits

0xd6c3,	// (0x000241ae) main_mobtv_programe_curr_pane

0xd6d0,	// (0x000241bb) main_mobtv_programe_next_pane_ParamLimits

0xd6d0,	// (0x000241bb) main_mobtv_programe_next_pane

0x4d99,	// (0x0001b884) popup_mobtv_noti_window

0x324f,	// (0x00019d3a) main_tv_pg_hdr_pane_g1

0x4da1,	// (0x0001b88c) main_tv_pg_hdr_pane_g2

0x4da9,	// (0x0001b894) main_tv_pg_hdr_pane_g3

0x4db1,	// (0x0001b89c) main_tv_pg_hdr_pane_g4

0x4db9,	// (0x0001b8a4) main_tv_pg_hdr_pane_g5

0x4dc1,	// (0x0001b8ac) main_tv_pg_hdr_pane_g6

0x4dc9,	// (0x0001b8b4) main_tv_pg_hdr_pane_g7

0x4dd1,	// (0x0001b8bc) main_tv_pg_hdr_pane_g8

0x4dd9,	// (0x0001b8c4) main_tv_pg_hdr_pane_g9

0x4de1,	// (0x0001b8cc) main_tv_pg_hdr_pane_g10

0x4deb,	// (0x0001b8d6) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x00026706) main_tv_pg_hdr_pane_g

0x4df5,	// (0x0001b8e0) main_tv_pg_hdr_pane_t1

0x4e03,	// (0x0001b8ee) main_tv_pg_hdr_pane_t2

0x4e11,	// (0x0001b8fc) main_tv_pg_hdr_pane_t3

0x4e1f,	// (0x0001b90a) main_tv_pg_hdr_pane_t4

0x4e2d,	// (0x0001b918) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0002671d) main_tv_pg_hdr_pane_t

0x4e3b,	// (0x0001b926) single_mobtv_pg_channel_pane_ParamLimits

0x4e3b,	// (0x0001b926) single_mobtv_pg_channel_pane

0x4e4d,	// (0x0001b938) single_mobtv_pg_channel_table_pane

0x4e56,	// (0x0001b941) single_mobtv_pg_channel_thumb_pane

0x4e5f,	// (0x0001b94a) single_tv_pg_channel_pane_g1

0x4e68,	// (0x0001b953) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x00026728) single_tv_pg_channel_pane_g

0x347e,	// (0x00019f69) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x347e,	// (0x00019f69) bg_single_mobtv_pg_channel_thumb_pane

0x4e71,	// (0x0001b95c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4e71,	// (0x0001b95c) single_mobtv_pg_channel_thumb_pane_g1

0x4e7f,	// (0x0001b96a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4e7f,	// (0x0001b96a) single_mobtv_pg_channel_thumb_pane_g2

0x4e8b,	// (0x0001b976) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4e8b,	// (0x0001b976) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0002672d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0002672d) single_mobtv_pg_channel_thumb_pane_g

0x4e97,	// (0x0001b982) single_mobtv_pg_channel_thumb_pane_t1

0x4ea5,	// (0x0001b990) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x00026734) single_mobtv_pg_channel_thumb_pane_t

0x324f,	// (0x00019d3a) bg_single_mobtv_pg_channel_table_pane_g1

0x324f,	// (0x00019d3a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6eb,	// (0x000261d6) bg_single_mobtv_pg_channel_table_pane_g

0x4eb3,	// (0x0001b99e) single_mobtv_pg_channel_table_pane_t1

0x4ec1,	// (0x0001b9ac) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x00026739) single_mobtv_pg_channel_table_pane_t

0xd6e5,	// (0x000241d0) main_mobtv_info_pane_g1_ParamLimits

0xd6e5,	// (0x000241d0) main_mobtv_info_pane_g1

0xd701,	// (0x000241ec) main_mobtv_info_pane_t1_ParamLimits

0xd701,	// (0x000241ec) main_mobtv_info_pane_t1

0xd767,	// (0x00024252) main_mobtv_info_pane_t2_ParamLimits

0xd767,	// (0x00024252) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x00026743) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x00026743) main_mobtv_info_pane_t

0xd7ea,	// (0x000242d5) wait_bar_pane_cp05

0xd7fa,	// (0x000242e5) main_mobtv_loading_pane_g1_ParamLimits

0xd7fa,	// (0x000242e5) main_mobtv_loading_pane_g1

0xd806,	// (0x000242f1) main_mobtv_loading_pane_g2_ParamLimits

0xd806,	// (0x000242f1) main_mobtv_loading_pane_g2

0xd812,	// (0x000242fd) main_mobtv_loading_pane_g3_ParamLimits

0xd812,	// (0x000242fd) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0002674a) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0002674a) main_mobtv_loading_pane_g

0x4ecf,	// (0x0001b9ba) main_mobtv_loading_pane_t1_ParamLimits

0x4ecf,	// (0x0001b9ba) main_mobtv_loading_pane_t1

0x4ee7,	// (0x0001b9d2) main_mobtv_loading_pane_t2_ParamLimits

0x4ee7,	// (0x0001b9d2) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x00026751) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x00026751) main_mobtv_loading_pane_t

0xd81e,	// (0x00024309) wait_bar_pane_cp06_ParamLimits

0xd81e,	// (0x00024309) wait_bar_pane_cp06

0x4f0b,	// (0x0001b9f6) main_mobtv_programe_curr_pane_t1

0x4f19,	// (0x0001ba04) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x00026756) main_mobtv_programe_curr_pane_t

0x4f27,	// (0x0001ba12) main_mobtv_programe_next_pane_t1

0x4f35,	// (0x0001ba20) main_mobtv_programe_next_pane_t2

0x4f43,	// (0x0001ba2e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0002675b) main_mobtv_programe_next_pane_t

0x0348,	// (0x00016e33) bg_popup_mobtv_noti_window_pane

0x4f51,	// (0x0001ba3c) popup_mobtv_noti_window_g1

0x4f59,	// (0x0001ba44) popup_mobtv_noti_window_t1

0x4f67,	// (0x0001ba52) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x00026762) popup_mobtv_noti_window_t

0x324f,	// (0x00019d3a) bg_popup_mobtv_noti_window_pane_g1

0x6f32,	// (0x0001da1d) sc_clock_pane

0x6f32,	// (0x0001da1d) main_fs_bigclock_pane

0xcf90,	// (0x00023a7b) blid2_tripm_pane_t4_ParamLimits

0xcf90,	// (0x00023a7b) blid2_tripm_pane_t4

0xd82a,	// (0x00024315) sc_clock_pane_g1_ParamLimits

0xd82a,	// (0x00024315) sc_clock_pane_g1

0xd838,	// (0x00024323) sc_clock_pane_t1_ParamLimits

0xd838,	// (0x00024323) sc_clock_pane_t1

0xd84b,	// (0x00024336) sc_clock_pane_t2_ParamLimits

0xd84b,	// (0x00024336) sc_clock_pane_t2

0xd85d,	// (0x00024348) sc_clock_pane_t3_ParamLimits

0xd85d,	// (0x00024348) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x00026767) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x00026767) sc_clock_pane_t

0xe732,	// (0x0002521d) main_fs_bigclock_indicator_pane_ParamLimits

0xe732,	// (0x0002521d) main_fs_bigclock_indicator_pane

0xd8d8,	// (0x000243c3) main_fs_bigclock_pane_g1_ParamLimits

0xd8d8,	// (0x000243c3) main_fs_bigclock_pane_g1

0xe73e,	// (0x00025229) main_fs_bigclock_pane_t1_ParamLimits

0xe73e,	// (0x00025229) main_fs_bigclock_pane_t1

0xe750,	// (0x0002523b) main_fs_bigclock_pane_t2_ParamLimits

0xe750,	// (0x0002523b) main_fs_bigclock_pane_t2

0xe762,	// (0x0002524d) main_fs_bigclock_pane_t3_ParamLimits

0xe762,	// (0x0002524d) main_fs_bigclock_pane_t3

0x0002,

0xfe81,	// (0x0002696c) main_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0002696c) main_fs_bigclock_pane_t

0x5a16,	// (0x0001c501) main_fs_bigclock_indicator_pane_g1

0x4c2c,	// (0x0001b717) ncim_query_content_pane_g2_ParamLimits

0x4c2c,	// (0x0001b717) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x000266f4) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x000266f4) ncim_query_content_pane_g

0xd86f,	// (0x0002435a) sc_clock_pane_t4_ParamLimits

0xd86f,	// (0x0002435a) sc_clock_pane_t4

0x743d,	// (0x0001df28) main_radioblah_pane

0x7dd8,	// (0x0001e8c3) cell_call4_button_pane_t1_copy1_ParamLimits

0x7dd8,	// (0x0001e8c3) cell_call4_button_pane_t1_copy1

0xd524,	// (0x0002400f) main_ncimui_pane_t1_ParamLimits

0xd524,	// (0x0002400f) main_ncimui_pane_t1

0xd53e,	// (0x00024029) main_ncimui_pane_t2_ParamLimits

0xd53e,	// (0x00024029) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x000266ed) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x000266ed) main_ncimui_pane_t

0x50a8,	// (0x0001bb93) main_radioblah_anim_pane_ParamLimits

0x50a8,	// (0x0001bb93) main_radioblah_anim_pane

0x50b9,	// (0x0001bba4) main_radioblah_info_pane_ParamLimits

0x50b9,	// (0x0001bba4) main_radioblah_info_pane

0x50cd,	// (0x0001bbb8) main_radioblah_pane_t1_ParamLimits

0x50cd,	// (0x0001bbb8) main_radioblah_pane_t1

0x50e9,	// (0x0001bbd4) main_radioblah_pane_t2_ParamLimits

0x50e9,	// (0x0001bbd4) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x00026788) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x00026788) main_radioblah_pane_t

0xd920,	// (0x0002440b) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd920,	// (0x0002440b) main_radioblah_rocker_ctrl_pane

0x5131,	// (0x0001bc1c) main_radioblah_info_pane_t1_ParamLimits

0x5131,	// (0x0001bc1c) main_radioblah_info_pane_t1

0xd965,	// (0x00024450) main_radioblah_info_pane_t2_ParamLimits

0xd965,	// (0x00024450) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x00026791) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x00026791) main_radioblah_info_pane_t

0x324f,	// (0x00019d3a) main_radioblah_rocker_ctrl_pane_g1

0xda0d,	// (0x000244f8) main_radioblah_rocker_ctrl_pane_g2

0xda15,	// (0x00024500) main_radioblah_rocker_ctrl_pane_g3

0xda1d,	// (0x00024508) main_radioblah_rocker_ctrl_pane_g4

0xda25,	// (0x00024510) main_radioblah_rocker_ctrl_pane_g5

0xda2d,	// (0x00024518) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0002679a) main_radioblah_rocker_ctrl_pane_g

0xd4db,	// (0x00023fc6) main_cset_text2_pane_t1_copy1_ParamLimits

0x7e5b,	// (0x0001e946) cam4_image_uncrop_qvga_pane

0x7f59,	// (0x0001ea44) vid4_image_uncrop_qcif_pane

0x84e4,	// (0x0001efcf) cam6_image_uncrop_qvga_pane_ParamLimits

0x84e4,	// (0x0001efcf) cam6_image_uncrop_qvga_pane

0x491d,	// (0x0001b408) vid6_image_uncrop_qcif_pane_ParamLimits

0x491d,	// (0x0001b408) vid6_image_uncrop_qcif_pane

0x0348,	// (0x00016e33) bg_popup_preview_window_pane_cp03

0x4bd2,	// (0x0001b6bd) list_cset_text2_pane

0x4bda,	// (0x0001b6c5) main_cset6_text2_pane_g1

0x4be2,	// (0x0001b6cd) main_cset6_text2_pane_t1

0x52d4,	// (0x0001bdbf) list_cset_text2_pane_t1_ParamLimits

0x52d4,	// (0x0001bdbf) list_cset_text2_pane_t1

0x743d,	// (0x0001df28) main_radioblah_pane_ParamLimits

0xd7d8,	// (0x000242c3) main_mobtv_info_pane_t3_ParamLimits

0xd7d8,	// (0x000242c3) main_mobtv_info_pane_t3

0xd90e,	// (0x000243f9) main_radioblah_pane_g1

0xd939,	// (0x00024424) main_radioblah_info_pane_g1

0xd9b4,	// (0x0002449f) main_radioblah_info_pane_t3_ParamLimits

0xd9b4,	// (0x0002449f) main_radioblah_info_pane_t3

0x9ef2,	// (0x000209dd) highlight_cell_cale_month_pane_ParamLimits

0x9ef2,	// (0x000209dd) highlight_cell_cale_month_pane

0x6f32,	// (0x0001da1d) main_phob_fisheye_pane

0x35ce,	// (0x0001a0b9) scroll_pane_cp0031_ParamLimits

0x35ce,	// (0x0001a0b9) scroll_pane_cp0031

0x4a27,	// (0x0001b512) wait_bar_pane_cp08_ParamLimits

0xd249,	// (0x00023d34) cset_list_set_pane_copy1_ParamLimits

0x516b,	// (0x0001bc56) highlight_cell_cale_month_pane_g1

0xda35,	// (0x00024520) highlight_cell_cale_month_pane_t1

0x5173,	// (0x0001bc5e) list_gen_pane_cp01

0x4167,	// (0x0001ac52) scroll_pane_01

0x46d9,	// (0x0001b1c4) list_single_double_fisheye_pane

0xda43,	// (0x0002452e) list_double_fisheye_pane_g1_ParamLimits

0xda43,	// (0x0002452e) list_double_fisheye_pane_g1

0xda4f,	// (0x0002453a) list_double_fisheye_pane_g2_ParamLimits

0xda4f,	// (0x0002453a) list_double_fisheye_pane_g2

0xda63,	// (0x0002454e) list_double_fisheye_pane_g3_ParamLimits

0xda63,	// (0x0002454e) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x000267a7) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x000267a7) list_double_fisheye_pane_g

0xda8c,	// (0x00024577) list_double_fisheye_pane_t1_ParamLimits

0xda8c,	// (0x00024577) list_double_fisheye_pane_t1

0xdaa7,	// (0x00024592) list_double_fisheye_pane_t2_ParamLimits

0xdaa7,	// (0x00024592) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x000267b2) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x000267b2) list_double_fisheye_pane_t

0x6f32,	// (0x0001da1d) main_call5_pane

0xd895,	// (0x00024380) sc_swipe_pane_ParamLimits

0xd895,	// (0x00024380) sc_swipe_pane

0xdad5,	// (0x000245c0) call5_image_pane_ParamLimits

0xdad5,	// (0x000245c0) call5_image_pane

0xdae1,	// (0x000245cc) call5_swipe_1_pane_ParamLimits

0xdae1,	// (0x000245cc) call5_swipe_1_pane

0xdaed,	// (0x000245d8) call5_swipe_2_pane_ParamLimits

0xdaed,	// (0x000245d8) call5_swipe_2_pane

0xdb05,	// (0x000245f0) popup_call5_audio_first_window_ParamLimits

0xdb05,	// (0x000245f0) popup_call5_audio_first_window

0x347e,	// (0x00019f69) call5_swipe_1_pane_g1_ParamLimits

0x347e,	// (0x00019f69) call5_swipe_1_pane_g1

0x517c,	// (0x0001bc67) call5_swipe_1_pane_g2_ParamLimits

0x517c,	// (0x0001bc67) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x000267b7) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x000267b7) call5_swipe_1_pane_g

0x5188,	// (0x0001bc73) call5_swipe_1_pane_t1_ParamLimits

0x5188,	// (0x0001bc73) call5_swipe_1_pane_t1

0x347e,	// (0x00019f69) call5_swipe_2_pane_g1_ParamLimits

0x347e,	// (0x00019f69) call5_swipe_2_pane_g1

0x519d,	// (0x0001bc88) call5_swipe_2_pane_g2_ParamLimits

0x519d,	// (0x0001bc88) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x000267bc) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x000267bc) call5_swipe_2_pane_g

0x51a9,	// (0x0001bc94) call5_swipe_2_pane_t1_ParamLimits

0x51a9,	// (0x0001bc94) call5_swipe_2_pane_t1

0x51be,	// (0x0001bca9) sc_swipe_pane_g1_ParamLimits

0x51be,	// (0x0001bca9) sc_swipe_pane_g1

0x51cb,	// (0x0001bcb6) sc_swipe_pane_g2_ParamLimits

0x51cb,	// (0x0001bcb6) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x000267c1) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x000267c1) sc_swipe_pane_g

0x51d7,	// (0x0001bcc2) sc_swipe_pane_t1_ParamLimits

0x51d7,	// (0x0001bcc2) sc_swipe_pane_t1

0x6f32,	// (0x0001da1d) main_cmail_launcher_pane

0xdb11,	// (0x000245fc) aid_size_cell_cmail_l_ParamLimits

0xdb11,	// (0x000245fc) aid_size_cell_cmail_l

0xdb21,	// (0x0002460c) grid_cmail_l_pane_ParamLimits

0xdb21,	// (0x0002460c) grid_cmail_l_pane

0xdb2d,	// (0x00024618) cell_cmail_l_pane_ParamLimits

0xdb2d,	// (0x00024618) cell_cmail_l_pane

0xdb3f,	// (0x0002462a) cell_cmail_l_pane_g1_ParamLimits

0xdb3f,	// (0x0002462a) cell_cmail_l_pane_g1

0xdb4f,	// (0x0002463a) cell_cmail_l_pane_t1_ParamLimits

0xdb4f,	// (0x0002463a) cell_cmail_l_pane_t1

0xdb65,	// (0x00024650) cell_cmail_l_pane_t2_ParamLimits

0xdb65,	// (0x00024650) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x000267c6) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x000267c6) cell_cmail_l_pane_t

0x039b,	// (0x00016e86) grid_highlight_pane_cp018_ParamLimits

0x039b,	// (0x00016e86) grid_highlight_pane_cp018

0x6dd4,	// (0x0001d8bf) main2_pane_ParamLimits

0x6dd4,	// (0x0001d8bf) main2_pane

0x0c03,	// (0x000176ee) popup_sp_fs_action_menu_bg_pane_g1

0x0c0b,	// (0x000176f6) popup_sp_fs_action_menu_bg_pane_g2

0x0c13,	// (0x000176fe) popup_sp_fs_action_menu_bg_pane_g3

0x0c1b,	// (0x00017706) popup_sp_fs_action_menu_bg_pane_g4

0x0c23,	// (0x0001770e) popup_sp_fs_action_menu_bg_pane_g5

0x0c2b,	// (0x00017716) popup_sp_fs_action_menu_bg_pane_g6

0x0c33,	// (0x0001771e) popup_sp_fs_action_menu_bg_pane_g7

0x0c3b,	// (0x00017726) popup_sp_fs_action_menu_bg_pane_g8

0x0c43,	// (0x0001772e) popup_sp_fs_action_menu_bg_pane_g9

0x0c4b,	// (0x00017736) popup_sp_fs_action_menu_bg_pane_g10

0x0c4b,	// (0x00017736) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x00025c71) popup_sp_fs_action_menu_bg_pane_g

0x8faf,	// (0x0001fa9a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x8faf,	// (0x0001fa9a) list_medium_line_x2_t3_g3_g1

0x8fbb,	// (0x0001faa6) list_medium_line_x2_t3_g3_g2_ParamLimits

0x8fbb,	// (0x0001faa6) list_medium_line_x2_t3_g3_g2

0x8fc7,	// (0x0001fab2) list_medium_line_x2_t3_g3_g3_ParamLimits

0x8fc7,	// (0x0001fab2) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x00025d1f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x00025d1f) list_medium_line_x2_t3_g3_g

0x8fd3,	// (0x0001fabe) list_medium_line_x2_t3_g3_t1_ParamLimits

0x8fd3,	// (0x0001fabe) list_medium_line_x2_t3_g3_t1

0x8fe8,	// (0x0001fad3) list_medium_line_x2_t3_g3_t2_ParamLimits

0x8fe8,	// (0x0001fad3) list_medium_line_x2_t3_g3_t2

0x8ffa,	// (0x0001fae5) list_medium_line_x2_t3_g3_t3_ParamLimits

0x8ffa,	// (0x0001fae5) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x00025d26) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x00025d26) list_medium_line_x2_t3_g3_t

0x8faf,	// (0x0001fa9a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x8faf,	// (0x0001fa9a) list_medium_line_x2_t3_g2_g1

0x8fc7,	// (0x0001fab2) list_medium_line_x2_t3_g2_g2_ParamLimits

0x8fc7,	// (0x0001fab2) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x00025d2d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x00025d2d) list_medium_line_x2_t3_g2_g

0x900f,	// (0x0001fafa) list_medium_line_x2_t3_g2_t1_ParamLimits

0x900f,	// (0x0001fafa) list_medium_line_x2_t3_g2_t1

0x9025,	// (0x0001fb10) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9025,	// (0x0001fb10) list_medium_line_x2_t3_g2_t2

0x8ffa,	// (0x0001fae5) list_medium_line_x2_t3_g2_t3_ParamLimits

0x8ffa,	// (0x0001fae5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x00025d32) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x00025d32) list_medium_line_x2_t3_g2_t

0x8faf,	// (0x0001fa9a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x8faf,	// (0x0001fa9a) list_medium_line_x2_t4_g4_g1

0x9037,	// (0x0001fb22) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9037,	// (0x0001fb22) list_medium_line_x2_t4_g4_g2

0x8fbb,	// (0x0001faa6) list_medium_line_x2_t4_g4_g3_ParamLimits

0x8fbb,	// (0x0001faa6) list_medium_line_x2_t4_g4_g3

0x9043,	// (0x0001fb2e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9043,	// (0x0001fb2e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x00025d39) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x00025d39) list_medium_line_x2_t4_g4_g

0x904f,	// (0x0001fb3a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x904f,	// (0x0001fb3a) list_medium_line_x2_t4_g4_t1

0x9069,	// (0x0001fb54) list_medium_line_x2_t4_g4_t2_ParamLimits

0x9069,	// (0x0001fb54) list_medium_line_x2_t4_g4_t2

0x907e,	// (0x0001fb69) list_medium_line_x2_t4_g4_t3_ParamLimits

0x907e,	// (0x0001fb69) list_medium_line_x2_t4_g4_t3

0x9093,	// (0x0001fb7e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9093,	// (0x0001fb7e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x00025d42) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x00025d42) list_medium_line_x2_t4_g4_t

0x8faf,	// (0x0001fa9a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x8faf,	// (0x0001fa9a) list_medium_line_x2_t2_g4_g1

0x9037,	// (0x0001fb22) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9037,	// (0x0001fb22) list_medium_line_x2_t2_g4_g2

0x8fbb,	// (0x0001faa6) list_medium_line_x2_t2_g4_g3_ParamLimits

0x8fbb,	// (0x0001faa6) list_medium_line_x2_t2_g4_g3

0x8fc7,	// (0x0001fab2) list_medium_line_x2_t2_g4_g4_ParamLimits

0x8fc7,	// (0x0001fab2) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x00025da9) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x00025da9) list_medium_line_x2_t2_g4_g

0x9f18,	// (0x00020a03) list_medium_line_x2_t2_g4_t1_ParamLimits

0x9f18,	// (0x00020a03) list_medium_line_x2_t2_g4_t1

0x8ffa,	// (0x0001fae5) list_medium_line_x2_t2_g4_t2_ParamLimits

0x8ffa,	// (0x0001fae5) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x00025db2) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x00025db2) list_medium_line_x2_t2_g4_t

0x8faf,	// (0x0001fa9a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x8faf,	// (0x0001fa9a) list_medium_line_x2_t2_g3_g1

0x8fbb,	// (0x0001faa6) list_medium_line_x2_t2_g3_g2_ParamLimits

0x8fbb,	// (0x0001faa6) list_medium_line_x2_t2_g3_g2

0x8fc7,	// (0x0001fab2) list_medium_line_x2_t2_g3_g3_ParamLimits

0x8fc7,	// (0x0001fab2) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x00025d1f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x00025d1f) list_medium_line_x2_t2_g3_g

0x9f2d,	// (0x00020a18) list_medium_line_x2_t2_g3_t1_ParamLimits

0x9f2d,	// (0x00020a18) list_medium_line_x2_t2_g3_t1

0x8ffa,	// (0x0001fae5) list_medium_line_x2_t2_g3_t2_ParamLimits

0x8ffa,	// (0x0001fae5) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x00025db7) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x00025db7) list_medium_line_x2_t2_g3_t

0xa060,	// (0x00020b4b) main_sp_fs_list_pane_ParamLimits

0xa060,	// (0x00020b4b) main_sp_fs_list_pane

0xa06d,	// (0x00020b58) sp_fs_scroll_pane_ParamLimits

0xa06d,	// (0x00020b58) sp_fs_scroll_pane

0xa07a,	// (0x00020b65) list_medium_line_x2_t3_t1

0xa08a,	// (0x00020b75) list_medium_line_x2_t3_t2

0xa098,	// (0x00020b83) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x00025e02) list_medium_line_x2_t3_t

0xa0a6,	// (0x00020b91) list_medium_line_x3_t4_t1

0xa0b6,	// (0x00020ba1) list_medium_line_x3_t4_t2

0xa0c4,	// (0x00020baf) list_medium_line_x3_t4_t3

0xa0d2,	// (0x00020bbd) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x00025e09) list_medium_line_x3_t4_t

0xa0e0,	// (0x00020bcb) list_medium_line_x4_t5_t1

0xa0f0,	// (0x00020bdb) list_medium_line_x4_t5_t2

0xa0c4,	// (0x00020baf) list_medium_line_x4_t5_t3

0xa0fe,	// (0x00020be9) list_medium_line_x4_t5_t4

0xa0d2,	// (0x00020bbd) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x00025e12) list_medium_line_x4_t5_t

0x8faf,	// (0x0001fa9a) list_medium_line_t4_g4_g1_ParamLimits

0x8faf,	// (0x0001fa9a) list_medium_line_t4_g4_g1

0x9043,	// (0x0001fb2e) list_medium_line_t4_g4_g2_ParamLimits

0x9043,	// (0x0001fb2e) list_medium_line_t4_g4_g2

0xa10c,	// (0x00020bf7) list_medium_line_t4_g4_g3_ParamLimits

0xa10c,	// (0x00020bf7) list_medium_line_t4_g4_g3

0x8fc7,	// (0x0001fab2) list_medium_line_t4_g4_g4_ParamLimits

0x8fc7,	// (0x0001fab2) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x00025e1d) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x00025e1d) list_medium_line_t4_g4_g

0xa118,	// (0x00020c03) list_medium_line_t4_g4_t1_ParamLimits

0xa118,	// (0x00020c03) list_medium_line_t4_g4_t1

0xa12d,	// (0x00020c18) list_medium_line_t4_g4_t2_ParamLimits

0xa12d,	// (0x00020c18) list_medium_line_t4_g4_t2

0xa143,	// (0x00020c2e) list_medium_line_t4_g4_t3_ParamLimits

0xa143,	// (0x00020c2e) list_medium_line_t4_g4_t3

0xa159,	// (0x00020c44) list_medium_line_t4_g4_t4_ParamLimits

0xa159,	// (0x00020c44) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x00025e26) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x00025e26) list_medium_line_t4_g4_t

0xa20d,	// (0x00020cf8) chi_dic_find_pane_g1

0x7459,	// (0x0001df44) main_tport_pane

0x42ac,	// (0x0001ad97) list_medium_line_plain_t1

0x42fe,	// (0x0001ade9) list_medium_line_t2_g2_g1_ParamLimits

0x42fe,	// (0x0001ade9) list_medium_line_t2_g2_g1

0x430a,	// (0x0001adf5) list_medium_line_t2_g2_g2_ParamLimits

0x430a,	// (0x0001adf5) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x000264fe) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x000264fe) list_medium_line_t2_g2_g

0xc87b,	// (0x00023366) list_medium_line_t2_g2_t1_ParamLimits

0xc87b,	// (0x00023366) list_medium_line_t2_g2_t1

0xc892,	// (0x0002337d) list_medium_line_t2_g2_t2_ParamLimits

0xc892,	// (0x0002337d) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x00026503) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x00026503) list_medium_line_t2_g2_t

0x46ae,	// (0x0001b199) aid_sp_fs_list_icon_a_sm

0x46b6,	// (0x0001b1a1) aid_sp_fs_list_icon_d

0x46be,	// (0x0001b1a9) aid_sp_fs_text_primary

0x46c7,	// (0x0001b1b2) aid_sp_fs_text_secondary

0x46d0,	// (0x0001b1bb) list_medium_line

0x46d0,	// (0x0001b1bb) list_medium_line_g2

0x46d0,	// (0x0001b1bb) list_medium_line_g3

0x46d0,	// (0x0001b1bb) list_medium_line_plain

0x46d0,	// (0x0001b1bb) list_medium_line_plain_t2

0x46d0,	// (0x0001b1bb) list_medium_line_plain_t3

0x46d0,	// (0x0001b1bb) list_medium_line_right_icon

0x46d0,	// (0x0001b1bb) list_medium_line_right_iconx2

0x46d0,	// (0x0001b1bb) list_medium_line_t2

0x46d0,	// (0x0001b1bb) list_medium_line_t2_g2

0x46d0,	// (0x0001b1bb) list_medium_line_t2_g3

0x46d0,	// (0x0001b1bb) list_medium_line_t2_right_icon

0x46d0,	// (0x0001b1bb) list_medium_line_t2_right_iconx2

0x46d0,	// (0x0001b1bb) list_medium_line_t3

0x46d0,	// (0x0001b1bb) list_medium_line_t3_g2

0x46d0,	// (0x0001b1bb) list_medium_line_t3_g3

0x46d0,	// (0x0001b1bb) list_medium_line_t3_right_iconx2

0xcdba,	// (0x000238a5) list_medium_line_t4_g4

0xcdc3,	// (0x000238ae) list_medium_line_x2

0xcdc3,	// (0x000238ae) list_medium_line_x2_t2_g2

0xcdc3,	// (0x000238ae) list_medium_line_x2_t2_g3

0xcdc3,	// (0x000238ae) list_medium_line_x2_t2_g4

0xcdc3,	// (0x000238ae) list_medium_line_x2_t3

0xcdc3,	// (0x000238ae) list_medium_line_x2_t3_g2

0xcdc3,	// (0x000238ae) list_medium_line_x2_t3_g3

0xcdc3,	// (0x000238ae) list_medium_line_x2_t3_g4

0xcdc3,	// (0x000238ae) list_medium_line_x2_t4_g2

0xcdc3,	// (0x000238ae) list_medium_line_x2_t4_g4

0xcdcc,	// (0x000238b7) list_medium_line_x3

0xcdcc,	// (0x000238b7) list_medium_line_x3_t4

0xcdcc,	// (0x000238b7) list_medium_line_x3_t4_g4

0xcdba,	// (0x000238a5) list_medium_line_x4_t4

0xcdba,	// (0x000238a5) list_medium_line_x4_t4_g7

0xcdba,	// (0x000238a5) list_medium_line_x4_t5

0xcdd5,	// (0x000238c0) list_single_fs_dyc_pane_ParamLimits

0xcdd5,	// (0x000238c0) list_single_fs_dyc_pane

0x8faf,	// (0x0001fa9a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x8faf,	// (0x0001fa9a) list_medium_line_x4_t4_g7_g1

0xd40a,	// (0x00023ef5) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd40a,	// (0x00023ef5) list_medium_line_x4_t4_g7_g2

0xd416,	// (0x00023f01) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd416,	// (0x00023f01) list_medium_line_x4_t4_g7_g3

0xd425,	// (0x00023f10) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd425,	// (0x00023f10) list_medium_line_x4_t4_g7_g4

0xd431,	// (0x00023f1c) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd431,	// (0x00023f1c) list_medium_line_x4_t4_g7_g5

0xd440,	// (0x00023f2b) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd440,	// (0x00023f2b) list_medium_line_x4_t4_g7_g6

0xd44f,	// (0x00023f3a) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd44f,	// (0x00023f3a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x000266ce) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x000266ce) list_medium_line_x4_t4_g7_g

0xd45b,	// (0x00023f46) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd45b,	// (0x00023f46) list_medium_line_x4_t4_g7_t1

0xd470,	// (0x00023f5b) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd470,	// (0x00023f5b) list_medium_line_x4_t4_g7_t2

0xd485,	// (0x00023f70) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd485,	// (0x00023f70) list_medium_line_x4_t4_g7_t3

0xd49a,	// (0x00023f85) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd49a,	// (0x00023f85) list_medium_line_x4_t4_g7_t4

0xd4ac,	// (0x00023f97) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd4ac,	// (0x00023f97) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x000266dd) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x000266dd) list_medium_line_x4_t4_g7_t

0xd4be,	// (0x00023fa9) list_single_dyc_row_pane_ParamLimits

0xd4be,	// (0x00023fa9) list_single_dyc_row_pane

0xdac9,	// (0x000245b4) call5_gesture_pane_ParamLimits

0xdac9,	// (0x000245b4) call5_gesture_pane

0xdaf9,	// (0x000245e4) call5_windows_pane_ParamLimits

0xdaf9,	// (0x000245e4) call5_windows_pane

0xdb7d,	// (0x00024668) call5_swipe_1_pane_cp_ParamLimits

0xdb7d,	// (0x00024668) call5_swipe_1_pane_cp

0xdb89,	// (0x00024674) call5_swipe_2_pane_cp_ParamLimits

0xdb89,	// (0x00024674) call5_swipe_2_pane_cp

0x0d6f,	// (0x0001785a) call5_image_pane_cp

0xdb95,	// (0x00024680) popup_call5_audio_first_window_cp_ParamLimits

0xdb95,	// (0x00024680) popup_call5_audio_first_window_cp

0x51be,	// (0x0001bca9) call5_swipe_1_pane_g1_cp_ParamLimits

0x51be,	// (0x0001bca9) call5_swipe_1_pane_g1_cp

0x51ec,	// (0x0001bcd7) call5_swipe_1_pane_g2_cp

0x51d7,	// (0x0001bcc2) call5_swipe_1_pane_t1_cp_ParamLimits

0x51d7,	// (0x0001bcc2) call5_swipe_1_pane_t1_cp

0x51be,	// (0x0001bca9) call5_swipe_2_pane_g1_cp_ParamLimits

0x51be,	// (0x0001bca9) call5_swipe_2_pane_g1_cp

0x51f4,	// (0x0001bcdf) call5_swipe_2_pane_g2_cp

0x51fc,	// (0x0001bce7) call5_swipe_2_pane_t1_cp_ParamLimits

0x51fc,	// (0x0001bce7) call5_swipe_2_pane_t1_cp

0x039b,	// (0x00016e86) main_sp_fs_email_pane

0x5211,	// (0x0001bcfc) main_sp_fs_listscroll_pane_te

0xdba1,	// (0x0002468c) popup_sp_fs_action_menu_pane_ParamLimits

0xdba1,	// (0x0002468c) popup_sp_fs_action_menu_pane

0x324f,	// (0x00019d3a) bg_sp_fs_ctrlbar_pane_g1

0x384f,	// (0x0001a33a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3861,	// (0x0001a34c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3858,	// (0x0001a343) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x324f,	// (0x00019d3a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x000267cb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x303c,	// (0x00019b27) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x303c,	// (0x00019b27) bg_sp_fs_ctrlbar_ddmenu_pane

0x521a,	// (0x0001bd05) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x521a,	// (0x0001bd05) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x5226,	// (0x0001bd11) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x5226,	// (0x0001bd11) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x000267d4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x000267d4) main_sp_fs_ctrlbar_ddmenu_pane_g

0x5232,	// (0x0001bd1d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x5232,	// (0x0001bd1d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x524c,	// (0x0001bd37) list_medium_line_t2_right_icon_g1

0xdbd3,	// (0x000246be) list_medium_line_t2_right_icon_t1

0xdbe2,	// (0x000246cd) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x000267d9) list_medium_line_t2_right_icon_t

0x2d3b,	// (0x00019826) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2d3b,	// (0x00019826) bg_sp_fs_ctrlbar_pane

0xdc45,	// (0x00024730) main_sp_fs_ctrlbar_button_pane_cp01

0xdc4d,	// (0x00024738) main_sp_fs_ctrlbar_ddmenu_pane

0x528c,	// (0x0001bd77) main_sp_fs_ctrlbar_pane_g1

0x5298,	// (0x0001bd83) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x000267de) main_sp_fs_ctrlbar_pane_g

0x52a4,	// (0x0001bd8f) main_sp_fs_ctrlbar_pane_t1

0xdc57,	// (0x00024742) main_sp_fs_ctrlbar_pane

0xdc6b,	// (0x00024756) main_sp_fs_listscroll_pane_te_cp01

0xdc7c,	// (0x00024767) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xdc7c,	// (0x00024767) popup_sp_fs_action_menu_pane_cp01

0x039b,	// (0x00016e86) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x039b,	// (0x00016e86) bg_sp_fs_highlight_list_pane_cp01

0xdca2,	// (0x0002478d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdca2,	// (0x0002478d) sp_fs_action_menu_list_gene_pane_g1

0x52fb,	// (0x0001bde6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x52fb,	// (0x0001bde6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x000267e8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x000267e8) sp_fs_action_menu_list_gene_pane_g

0xdcb1,	// (0x0002479c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdcb1,	// (0x0002479c) sp_fs_action_menu_list_gene_pane_t1

0xdcc9,	// (0x000247b4) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdcc9,	// (0x000247b4) sp_fs_action_menu_list_gene_pane

0x5308,	// (0x0001bdf3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x5308,	// (0x0001bdf3) popup_sp_fs_action_menu_bg_pane

0xdce6,	// (0x000247d1) sp_fs_action_menu_list_pane_ParamLimits

0xdce6,	// (0x000247d1) sp_fs_action_menu_list_pane

0x5316,	// (0x0001be01) sp_fs_scroll_pane_cp01_ParamLimits

0x5316,	// (0x0001be01) sp_fs_scroll_pane_cp01

0xdd04,	// (0x000247ef) list_medium_line_plain_t2_t1

0xdd13,	// (0x000247fe) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x000267ed) list_medium_line_plain_t2_t

0xdd21,	// (0x0002480c) list_medium_line_plain_t3_t1

0xdd31,	// (0x0002481c) list_medium_line_plain_t3_t2

0xdd3f,	// (0x0002482a) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x000267f2) list_medium_line_plain_t3_t

0x8faf,	// (0x0001fa9a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x8faf,	// (0x0001fa9a) list_medium_line_x2_t2_g2_g1

0x8fc7,	// (0x0001fab2) list_medium_line_x2_t2_g2_g2_ParamLimits

0x8fc7,	// (0x0001fab2) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x00025d2d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x00025d2d) list_medium_line_x2_t2_g2_g

0xa118,	// (0x00020c03) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa118,	// (0x00020c03) list_medium_line_x2_t2_g2_t1

0x8ffa,	// (0x0001fae5) list_medium_line_x2_t2_g2_t2_ParamLimits

0x8ffa,	// (0x0001fae5) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x000267f9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x000267f9) list_medium_line_x2_t2_g2_t

0x8faf,	// (0x0001fa9a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x8faf,	// (0x0001fa9a) list_medium_line_x2_t4_g2_g1

0x8fc7,	// (0x0001fab2) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8fc7,	// (0x0001fab2) list_medium_line_x2_t4_g2_g2

0x0001,

0xf242,	// (0x00025d2d) list_medium_line_x2_t4_g2_g_ParamLimits

0xf242,	// (0x00025d2d) list_medium_line_x2_t4_g2_g

0xdd4d,	// (0x00024838) list_medium_line_x2_t4_g2_t1_ParamLimits

0xdd4d,	// (0x00024838) list_medium_line_x2_t4_g2_t1

0xdd67,	// (0x00024852) list_medium_line_x2_t4_g2_t2_ParamLimits

0xdd67,	// (0x00024852) list_medium_line_x2_t4_g2_t2

0xdd7c,	// (0x00024867) list_medium_line_x2_t4_g2_t3_ParamLimits

0xdd7c,	// (0x00024867) list_medium_line_x2_t4_g2_t3

0x8ffa,	// (0x0001fae5) list_medium_line_x2_t4_g2_t4_ParamLimits

0x8ffa,	// (0x0001fae5) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x000267fe) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x000267fe) list_medium_line_x2_t4_g2_t

0x533c,	// (0x0001be27) list_medium_line_t3_right_iconx2_g1

0x524c,	// (0x0001bd37) list_medium_line_t3_right_iconx2_g2

0xdd91,	// (0x0002487c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x00026807) list_medium_line_t3_right_iconx2_g

0x52eb,	// (0x0001bdd6) list_medium_line_t3_right_iconx2_t1

0xdd99,	// (0x00024884) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0002680e) list_medium_line_t3_right_iconx2_t

0x8faf,	// (0x0001fa9a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x8faf,	// (0x0001fa9a) list_medium_line_x3_t4_g4_g1

0x8fbb,	// (0x0001faa6) list_medium_line_x3_t4_g4_g2_ParamLimits

0x8fbb,	// (0x0001faa6) list_medium_line_x3_t4_g4_g2

0x9043,	// (0x0001fb2e) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9043,	// (0x0001fb2e) list_medium_line_x3_t4_g4_g3

0xdda7,	// (0x00024892) list_medium_line_x3_t4_g4_g4_ParamLimits

0xdda7,	// (0x00024892) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x00026813) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x00026813) list_medium_line_x3_t4_g4_g

0xddb3,	// (0x0002489e) list_medium_line_x3_t4_g4_t1_ParamLimits

0xddb3,	// (0x0002489e) list_medium_line_x3_t4_g4_t1

0xddca,	// (0x000248b5) list_medium_line_x3_t4_g4_t2_ParamLimits

0xddca,	// (0x000248b5) list_medium_line_x3_t4_g4_t2

0xdddf,	// (0x000248ca) list_medium_line_x3_t4_g4_t3_ParamLimits

0xdddf,	// (0x000248ca) list_medium_line_x3_t4_g4_t3

0xddf4,	// (0x000248df) list_medium_line_x3_t4_g4_t4_ParamLimits

0xddf4,	// (0x000248df) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0002681c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0002681c) list_medium_line_x3_t4_g4_t

0xde11,	// (0x000248fc) list_single_dyc_row_text_pane_t1_ParamLimits

0xde11,	// (0x000248fc) list_single_dyc_row_text_pane_t1

0xde48,	// (0x00024933) list_single_dyc_row_text_pane_t2_ParamLimits

0xde48,	// (0x00024933) list_single_dyc_row_text_pane_t2

0x5344,	// (0x0001be2f) list_single_dyc_row_text_pane_t3_ParamLimits

0x5344,	// (0x0001be2f) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3a,	// (0x00026825) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x00026825) list_single_dyc_row_text_pane_t

0x5368,	// (0x0001be53) list_single_dyc_row_pane_g1_ParamLimits

0x5368,	// (0x0001be53) list_single_dyc_row_pane_g1

0x5374,	// (0x0001be5f) list_single_dyc_row_pane_g2_ParamLimits

0x5374,	// (0x0001be5f) list_single_dyc_row_pane_g2

0x5380,	// (0x0001be6b) list_single_dyc_row_pane_g3_ParamLimits

0x5380,	// (0x0001be6b) list_single_dyc_row_pane_g3

0x538c,	// (0x0001be77) list_single_dyc_row_pane_g4_ParamLimits

0x538c,	// (0x0001be77) list_single_dyc_row_pane_g4

0x0003,

0xfd47,	// (0x00026832) list_single_dyc_row_pane_g_ParamLimits

0xfd47,	// (0x00026832) list_single_dyc_row_pane_g

0x5398,	// (0x0001be83) list_single_dyc_row_text_pane_ParamLimits

0x5398,	// (0x0001be83) list_single_dyc_row_text_pane

0x0348,	// (0x00016e33) bg_sp_fs_scroll_pane

0x53b7,	// (0x0001bea2) thumb_sp_fs_scroll_pane

0x42fe,	// (0x0001ade9) list_medium_line_g1_ParamLimits

0x42fe,	// (0x0001ade9) list_medium_line_g1

0x53c0,	// (0x0001beab) list_medium_line_t1_ParamLimits

0x53c0,	// (0x0001beab) list_medium_line_t1

0x8faf,	// (0x0001fa9a) list_medium_line_x2_g1_ParamLimits

0x8faf,	// (0x0001fa9a) list_medium_line_x2_g1

0x8fbb,	// (0x0001faa6) list_medium_line_x2_g2_ParamLimits

0x8fbb,	// (0x0001faa6) list_medium_line_x2_g2

0x0001,

0xfd50,	// (0x0002683b) list_medium_line_x2_g_ParamLimits

0xfd50,	// (0x0002683b) list_medium_line_x2_g

0x53d5,	// (0x0001bec0) list_medium_line_x2_t1_ParamLimits

0x53d5,	// (0x0001bec0) list_medium_line_x2_t1

0x8faf,	// (0x0001fa9a) list_medium_line_x3_g1_ParamLimits

0x8faf,	// (0x0001fa9a) list_medium_line_x3_g1

0x8fbb,	// (0x0001faa6) list_medium_line_x3_g2_ParamLimits

0x8fbb,	// (0x0001faa6) list_medium_line_x3_g2

0x0001,

0xfd50,	// (0x0002683b) list_medium_line_x3_g_ParamLimits

0xfd50,	// (0x0002683b) list_medium_line_x3_g

0x53d5,	// (0x0001bec0) list_medium_line_x3_t1_ParamLimits

0x53d5,	// (0x0001bec0) list_medium_line_x3_t1

0x53eb,	// (0x0001bed6) thumb_sp_fs_scroll_pane_g1

0x53f4,	// (0x0001bedf) thumb_sp_fs_scroll_pane_g2

0x53fd,	// (0x0001bee8) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x00026840) thumb_sp_fs_scroll_pane_g

0x53eb,	// (0x0001bed6) bg_sp_fs_scroll_pane_g1

0x53f4,	// (0x0001bedf) bg_sp_fs_scroll_pane_g2

0x53fd,	// (0x0001bee8) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x00026840) bg_sp_fs_scroll_pane_g

0x8faf,	// (0x0001fa9a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x8faf,	// (0x0001fa9a) list_medium_line_x2_t3_g4_g1

0x9037,	// (0x0001fb22) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9037,	// (0x0001fb22) list_medium_line_x2_t3_g4_g2

0x8fbb,	// (0x0001faa6) list_medium_line_x2_t3_g4_g3_ParamLimits

0x8fbb,	// (0x0001faa6) list_medium_line_x2_t3_g4_g3

0x8fc7,	// (0x0001fab2) list_medium_line_x2_t3_g4_g4_ParamLimits

0x8fc7,	// (0x0001fab2) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x00025da9) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x00025da9) list_medium_line_x2_t3_g4_g

0xdf65,	// (0x00024a50) list_medium_line_x2_t3_g4_t1_ParamLimits

0xdf65,	// (0x00024a50) list_medium_line_x2_t3_g4_t1

0xdf7b,	// (0x00024a66) list_medium_line_x2_t3_g4_t2_ParamLimits

0xdf7b,	// (0x00024a66) list_medium_line_x2_t3_g4_t2

0x8ffa,	// (0x0001fae5) list_medium_line_x2_t3_g4_t3_ParamLimits

0x8ffa,	// (0x0001fae5) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5c,	// (0x00026847) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5c,	// (0x00026847) list_medium_line_x2_t3_g4_t

0x42fe,	// (0x0001ade9) list_medium_line_g2_g1_ParamLimits

0x42fe,	// (0x0001ade9) list_medium_line_g2_g1

0x430a,	// (0x0001adf5) list_medium_line_g2_g2_ParamLimits

0x430a,	// (0x0001adf5) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x000264fe) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x000264fe) list_medium_line_g2_g

0x5406,	// (0x0001bef1) list_medium_line_g2_t1_ParamLimits

0x5406,	// (0x0001bef1) list_medium_line_g2_t1

0x42fe,	// (0x0001ade9) list_medium_line_t3_g2_g1_ParamLimits

0x42fe,	// (0x0001ade9) list_medium_line_t3_g2_g1

0x430a,	// (0x0001adf5) list_medium_line_t3_g2_g2_ParamLimits

0x430a,	// (0x0001adf5) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x000264fe) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x000264fe) list_medium_line_t3_g2_g

0xdf94,	// (0x00024a7f) list_medium_line_t3_g2_t1_ParamLimits

0xdf94,	// (0x00024a7f) list_medium_line_t3_g2_t1

0xdfae,	// (0x00024a99) list_medium_line_t3_g2_t2_ParamLimits

0xdfae,	// (0x00024a99) list_medium_line_t3_g2_t2

0xdfc3,	// (0x00024aae) list_medium_line_t3_g2_t3_ParamLimits

0xdfc3,	// (0x00024aae) list_medium_line_t3_g2_t3

0x0002,

0xfd63,	// (0x0002684e) list_medium_line_t3_g2_t_ParamLimits

0xfd63,	// (0x0002684e) list_medium_line_t3_g2_t

0x524c,	// (0x0001bd37) list_medium_line_right_icon_g1

0x541b,	// (0x0001bf06) list_medium_line_right_icon_t1

0x42fe,	// (0x0001ade9) list_medium_line_t2_g1_ParamLimits

0x42fe,	// (0x0001ade9) list_medium_line_t2_g1

0xdfd9,	// (0x00024ac4) list_medium_line_t2_t1_ParamLimits

0xdfd9,	// (0x00024ac4) list_medium_line_t2_t1

0xdff0,	// (0x00024adb) list_medium_line_t2_t2_ParamLimits

0xdff0,	// (0x00024adb) list_medium_line_t2_t2

0x0001,

0xfd6a,	// (0x00026855) list_medium_line_t2_t_ParamLimits

0xfd6a,	// (0x00026855) list_medium_line_t2_t

0x42fe,	// (0x0001ade9) list_medium_line_t3_g1_ParamLimits

0x42fe,	// (0x0001ade9) list_medium_line_t3_g1

0xe002,	// (0x00024aed) list_medium_line_t3_t1_ParamLimits

0xe002,	// (0x00024aed) list_medium_line_t3_t1

0xe01c,	// (0x00024b07) list_medium_line_t3_t2_ParamLimits

0xe01c,	// (0x00024b07) list_medium_line_t3_t2

0xe031,	// (0x00024b1c) list_medium_line_t3_t3_ParamLimits

0xe031,	// (0x00024b1c) list_medium_line_t3_t3

0x0002,

0xfd6f,	// (0x0002685a) list_medium_line_t3_t_ParamLimits

0xfd6f,	// (0x0002685a) list_medium_line_t3_t

0x42fe,	// (0x0001ade9) list_medium_line_g3_g1_ParamLimits

0x42fe,	// (0x0001ade9) list_medium_line_g3_g1

0x5429,	// (0x0001bf14) list_medium_line_g3_g2_ParamLimits

0x5429,	// (0x0001bf14) list_medium_line_g3_g2

0x430a,	// (0x0001adf5) list_medium_line_g3_g3_ParamLimits

0x430a,	// (0x0001adf5) list_medium_line_g3_g3

0x0002,

0xfd76,	// (0x00026861) list_medium_line_g3_g_ParamLimits

0xfd76,	// (0x00026861) list_medium_line_g3_g

0x5435,	// (0x0001bf20) list_medium_line_g3_t1_ParamLimits

0x5435,	// (0x0001bf20) list_medium_line_g3_t1

0x42fe,	// (0x0001ade9) list_medium_line_t2_g3_g1_ParamLimits

0x42fe,	// (0x0001ade9) list_medium_line_t2_g3_g1

0x5429,	// (0x0001bf14) list_medium_line_t2_g3_g2_ParamLimits

0x5429,	// (0x0001bf14) list_medium_line_t2_g3_g2

0x430a,	// (0x0001adf5) list_medium_line_t2_g3_g3_ParamLimits

0x430a,	// (0x0001adf5) list_medium_line_t2_g3_g3

0x0002,

0xfd76,	// (0x00026861) list_medium_line_t2_g3_g_ParamLimits

0xfd76,	// (0x00026861) list_medium_line_t2_g3_g

0xe046,	// (0x00024b31) list_medium_line_t2_g3_t1_ParamLimits

0xe046,	// (0x00024b31) list_medium_line_t2_g3_t1

0xe060,	// (0x00024b4b) list_medium_line_t2_g3_t2_ParamLimits

0xe060,	// (0x00024b4b) list_medium_line_t2_g3_t2

0x0001,

0xfd7d,	// (0x00026868) list_medium_line_t2_g3_t_ParamLimits

0xfd7d,	// (0x00026868) list_medium_line_t2_g3_t

0x42fe,	// (0x0001ade9) list_medium_line_t3_g3_g1_ParamLimits

0x42fe,	// (0x0001ade9) list_medium_line_t3_g3_g1

0x5429,	// (0x0001bf14) list_medium_line_t3_g3_g2_ParamLimits

0x5429,	// (0x0001bf14) list_medium_line_t3_g3_g2

0x430a,	// (0x0001adf5) list_medium_line_t3_g3_g3_ParamLimits

0x430a,	// (0x0001adf5) list_medium_line_t3_g3_g3

0x0002,

0xfd76,	// (0x00026861) list_medium_line_t3_g3_g_ParamLimits

0xfd76,	// (0x00026861) list_medium_line_t3_g3_g

0xe075,	// (0x00024b60) list_medium_line_t3_g3_t1_ParamLimits

0xe075,	// (0x00024b60) list_medium_line_t3_g3_t1

0xe089,	// (0x00024b74) list_medium_line_t3_g3_t2_ParamLimits

0xe089,	// (0x00024b74) list_medium_line_t3_g3_t2

0xe09b,	// (0x00024b86) list_medium_line_t3_g3_t3_ParamLimits

0xe09b,	// (0x00024b86) list_medium_line_t3_g3_t3

0x0002,

0xfd82,	// (0x0002686d) list_medium_line_t3_g3_t_ParamLimits

0xfd82,	// (0x0002686d) list_medium_line_t3_g3_t

0x533c,	// (0x0001be27) list_medium_line_right_iconx2_g1

0x524c,	// (0x0001bd37) list_medium_line_right_iconx2_g2

0x0001,

0xfd89,	// (0x00026874) list_medium_line_right_iconx2_g

0x544a,	// (0x0001bf35) list_medium_line_right_iconx2_t1

0x533c,	// (0x0001be27) list_medium_line_t2_right_iconx2_g1

0x524c,	// (0x0001bd37) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd89,	// (0x00026874) list_medium_line_t2_right_iconx2_g

0xe0ad,	// (0x00024b98) list_medium_line_t2_right_iconx2_t1

0xe0bd,	// (0x00024ba8) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8e,	// (0x00026879) list_medium_line_t2_right_iconx2_t

0xe0cb,	// (0x00024bb6) list_medium_line_x4_t4_t1

0xe0d9,	// (0x00024bc4) list_medium_line_x4_t4_t2

0xe0e7,	// (0x00024bd2) list_medium_line_x4_t4_t3

0xe0f5,	// (0x00024be0) list_medium_line_x4_t4_t4

0x0003,

0xfd93,	// (0x0002687e) list_medium_line_x4_t4_t

0xe127,	// (0x00024c12) tport_appsw_pane_ParamLimits

0xe127,	// (0x00024c12) tport_appsw_pane

0xe133,	// (0x00024c1e) tport_contact_pane_ParamLimits

0xe133,	// (0x00024c1e) tport_contact_pane

0xe141,	// (0x00024c2c) tport_listscroll_pane_ParamLimits

0xe141,	// (0x00024c2c) tport_listscroll_pane

0xe14f,	// (0x00024c3a) cell_tport_appsw_pane_ParamLimits

0xe14f,	// (0x00024c3a) cell_tport_appsw_pane

0x3557,	// (0x0001a042) tport_appsw_pane_g1_ParamLimits

0x3557,	// (0x0001a042) tport_appsw_pane_g1

0x5458,	// (0x0001bf43) tport_contact_pane_g1

0x5461,	// (0x0001bf4c) tport_contact_pane_t1

0x546f,	// (0x0001bf5a) tport_contact_pane_t2

0x0001,

0xfd9c,	// (0x00026887) tport_contact_pane_t

0x547d,	// (0x0001bf68) list_tport_pane

0x0c5d,	// (0x00017748) scroll_pane_cp_030

0x548e,	// (0x0001bf79) cell_tport_appsw_pane_g1

0x549e,	// (0x0001bf89) cell_tport_appsw_pane_t1

0x54ac,	// (0x0001bf97) grid_highlight_pane_cp019

0xe176,	// (0x00024c61) list_tport_double_graphic_pane_ParamLimits

0xe176,	// (0x00024c61) list_tport_double_graphic_pane

0x039b,	// (0x00016e86) list_highlight_pane_cp023_ParamLimits

0x039b,	// (0x00016e86) list_highlight_pane_cp023

0xe183,	// (0x00024c6e) list_tport_double_graphic_pane_g1_ParamLimits

0xe183,	// (0x00024c6e) list_tport_double_graphic_pane_g1

0xe190,	// (0x00024c7b) list_tport_double_graphic_pane_t1_ParamLimits

0xe190,	// (0x00024c7b) list_tport_double_graphic_pane_t1

0xe1a5,	// (0x00024c90) list_tport_double_graphic_pane_t2_ParamLimits

0xe1a5,	// (0x00024c90) list_tport_double_graphic_pane_t2

0x0001,

0xfda8,	// (0x00026893) list_tport_double_graphic_pane_t_ParamLimits

0xfda8,	// (0x00026893) list_tport_double_graphic_pane_t

0x0348,	// (0x00016e33) main_cale_note_pane

0x8135,	// (0x0001ec20) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8135,	// (0x0001ec20) cell_vitu2_function_top_wide_pane_cp01

0xd7ea,	// (0x000242d5) wait_bar_pane_cp05_ParamLimits

0x039b,	// (0x00016e86) listscroll_cmail_pane

0x54b4,	// (0x0001bf9f) list_cmail_pane

0xe1b7,	// (0x00024ca2) list_cmail_body_pane

0xe1b7,	// (0x00024ca2) list_single_cmail_header_caption_pane

0xe1d0,	// (0x00024cbb) list_single_cmail_header_detail_pane_ParamLimits

0xe1d0,	// (0x00024cbb) list_single_cmail_header_detail_pane

0x54d0,	// (0x0001bfbb) list_single_cmail_header_caption_pane_t1

0xe1fb,	// (0x00024ce6) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe1fb,	// (0x00024ce6) list_single_cmail_header_detail_pane_g1

0x54e7,	// (0x0001bfd2) list_single_cmail_header_detail_pane_g2_ParamLimits

0x54e7,	// (0x0001bfd2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdad,	// (0x00026898) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdad,	// (0x00026898) list_single_cmail_header_detail_pane_g

0xe211,	// (0x00024cfc) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe211,	// (0x00024cfc) list_single_cmail_header_detail_pane_t1

0x5524,	// (0x0001c00f) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5524,	// (0x0001c00f) list_single_cmail_header_editor_pane_bg

0x553b,	// (0x0001c026) list_cmail_body_pane_g1

0x5544,	// (0x0001c02f) list_cmail_body_pane_t1

0x404d,	// (0x0001ab38) list_single_cmail_header_editor_pane_bg_g1

0x1017,	// (0x00017b02) list_single_cmail_header_editor_pane_bg_g1_copy1

0x405d,	// (0x0001ab48) list_single_cmail_header_editor_pane_bg_g1_copy2

0x4055,	// (0x0001ab40) list_single_cmail_header_editor_pane_bg_g1_copy3

0x42d6,	// (0x0001adc1) list_single_cmail_header_editor_pane_bg_g1_copy4

0x407d,	// (0x0001ab68) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x406d,	// (0x0001ab58) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x4075,	// (0x0001ab60) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0ff7,	// (0x00017ae2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe24d,	// (0x00024d38) calenote_gesture_pane_ParamLimits

0xe24d,	// (0x00024d38) calenote_gesture_pane

0xe265,	// (0x00024d50) calenote_window_pane_ParamLimits

0xe265,	// (0x00024d50) calenote_window_pane

0x5552,	// (0x0001c03d) popup_note_window_cp01

0xe27d,	// (0x00024d68) calenote_swipe_1_pane_ParamLimits

0xe27d,	// (0x00024d68) calenote_swipe_1_pane

0xdb89,	// (0x00024674) calenote_swipe_2_pane_ParamLimits

0xdb89,	// (0x00024674) calenote_swipe_2_pane

0x51be,	// (0x0001bca9) calenote_swipe_1_pane_g1_ParamLimits

0x51be,	// (0x0001bca9) calenote_swipe_1_pane_g1

0x51cb,	// (0x0001bcb6) calenote_swipe_1_pane_g2_ParamLimits

0x51cb,	// (0x0001bcb6) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x000267c1) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x000267c1) calenote_swipe_1_pane_g

0x5564,	// (0x0001c04f) calenote_swipe_1_pane_t1_ParamLimits

0x5564,	// (0x0001c04f) calenote_swipe_1_pane_t1

0x51be,	// (0x0001bca9) calenote_swipe_2_pane_g1_ParamLimits

0x51be,	// (0x0001bca9) calenote_swipe_2_pane_g1

0x5583,	// (0x0001c06e) calenote_swipe_2_pane_g2_ParamLimits

0x5583,	// (0x0001c06e) calenote_swipe_2_pane_g2

0x0001,

0xfdb9,	// (0x000268a4) calenote_swipe_2_pane_g_ParamLimits

0xfdb9,	// (0x000268a4) calenote_swipe_2_pane_g

0x558f,	// (0x0001c07a) calenote_swipe_2_pane_t1_ParamLimits

0x558f,	// (0x0001c07a) calenote_swipe_2_pane_t1

0x0348,	// (0x00016e33) main_mup_navstr_pane

0xb97e,	// (0x00022469) main_mup3_pane_t7_ParamLimits

0xb97e,	// (0x00022469) main_mup3_pane_t7

0x7a3a,	// (0x0001e525) main_mp4_pane_g6_ParamLimits

0x7a3a,	// (0x0001e525) main_mp4_pane_g6

0x7d23,	// (0x0001e80e) main_image3_pane_t4_ParamLimits

0x7d23,	// (0x0001e80e) main_image3_pane_t4

0xe290,	// (0x00024d7b) popup_navstr_preview_pane_ParamLimits

0xe290,	// (0x00024d7b) popup_navstr_preview_pane

0xe29c,	// (0x00024d87) scroll_navstr_pane_ParamLimits

0xe29c,	// (0x00024d87) scroll_navstr_pane

0x0348,	// (0x00016e33) bg_popup_preview_window_pane_cp04

0x55b6,	// (0x0001c0a1) popup_navstr_preview_pane_t1

0xe2a8,	// (0x00024d93) scroll_navstr_pane_g1_ParamLimits

0xe2a8,	// (0x00024d93) scroll_navstr_pane_g1

0xe2b5,	// (0x00024da0) scroll_navstr_pane_t1_ParamLimits

0xe2b5,	// (0x00024da0) scroll_navstr_pane_t1

0x555b,	// (0x0001c046) bg_button_pane_cp014

0x555b,	// (0x0001c046) bg_button_pane_cp030

0xda6f,	// (0x0002455a) list_double_fisheye_pane_g4_ParamLimits

0xda6f,	// (0x0002455a) list_double_fisheye_pane_g4

0xda7b,	// (0x00024566) list_double_fisheye_pane_g5_ParamLimits

0xda7b,	// (0x00024566) list_double_fisheye_pane_g5

0x54c4,	// (0x0001bfaf) sp_fs_scroll_pane_cp03

0x528c,	// (0x0001bd77) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x5298,	// (0x0001bd83) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x000267de) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x52a4,	// (0x0001bd8f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x54bc,	// (0x0001bfa7) sp_fs_scroll_pane_cp02

0x0cb7,	// (0x000177a2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0cb7,	// (0x000177a2) popup_sp_fs_calendar_preview_list_single_pane

0x0348,	// (0x00016e33) main_cam6_pano_pane

0x743d,	// (0x0001df28) main_mup3_pane_ParamLimits

0x0348,	// (0x00016e33) main_phacti_pane

0xd6dd,	// (0x000241c8) bg_button_pane_cp11

0xd6f5,	// (0x000241e0) main_mobtv_info_pane_g2_ParamLimits

0xd6f5,	// (0x000241e0) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0002673e) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0002673e) main_mobtv_info_pane_g

0xd881,	// (0x0002436c) sc_clock_pane_t5_ParamLimits

0xd881,	// (0x0002436c) sc_clock_pane_t5

0xd90e,	// (0x000243f9) main_radioblah_pane_g1_ParamLimits

0x5101,	// (0x0001bbec) main_radioblah_pane_t3_ParamLimits

0x5101,	// (0x0001bbec) main_radioblah_pane_t3

0x5119,	// (0x0001bc04) main_radioblah_pane_t4_ParamLimits

0x5119,	// (0x0001bc04) main_radioblah_pane_t4

0xd92c,	// (0x00024417) main_radioblah_text_pane_ParamLimits

0xd92c,	// (0x00024417) main_radioblah_text_pane

0xd939,	// (0x00024424) main_radioblah_info_pane_g1_ParamLimits

0xd9c6,	// (0x000244b1) main_radioblah_info_pane_t4_ParamLimits

0xd9c6,	// (0x000244b1) main_radioblah_info_pane_t4

0x039b,	// (0x00016e86) main_sp_fs_calendar_pane

0xe2c7,	// (0x00024db2) main_phacti_pane_g1

0xe2cf,	// (0x00024dba) phacti_note_pane_ParamLimits

0xe2cf,	// (0x00024dba) phacti_note_pane

0x55cd,	// (0x0001c0b8) phacti_term_pane_ParamLimits

0x55cd,	// (0x0001c0b8) phacti_term_pane

0x55e2,	// (0x0001c0cd) phacti_note_pane_t1_ParamLimits

0x55e2,	// (0x0001c0cd) phacti_note_pane_t1

0x55f9,	// (0x0001c0e4) phacti_term_pane_g1

0x5601,	// (0x0001c0ec) phacti_term_pane_t1_ParamLimits

0x5601,	// (0x0001c0ec) phacti_term_pane_t1

0x562b,	// (0x0001c116) popup_sp_fs_calendar_preview_list_single_pane_g1

0x5633,	// (0x0001c11e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc3,	// (0x000268ae) popup_sp_fs_calendar_preview_list_single_pane_g

0x563b,	// (0x0001c126) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x563b,	// (0x0001c126) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5651,	// (0x0001c13c) aid_popup_sp_fs_bg_corner_pane

0x324f,	// (0x00019d3a) popup_sp_fs_calendar_preview_bg_pane_g1

0x0348,	// (0x00016e33) popup_sp_fs_calendar_preview_bg_pane

0x5659,	// (0x0001c144) popup_sp_fs_calendar_preview_list_pane

0x2d3b,	// (0x00019826) bg_main_sp_fs_cale_pane_ParamLimits

0x2d3b,	// (0x00019826) bg_main_sp_fs_cale_pane

0x566a,	// (0x0001c155) listscroll_cale_mrui_pane_ParamLimits

0x566a,	// (0x0001c155) listscroll_cale_mrui_pane

0x567f,	// (0x0001c16a) listscroll_sp_fs_schedule_track_pane

0x5688,	// (0x0001c173) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5688,	// (0x0001c173) main_sp_fs_ctrlbar_pane_cp01

0x569b,	// (0x0001c186) main_sp_fs_ribbon_pane

0x56a3,	// (0x0001c18e) popup_sp_fs_cale_preview_window

0x5ab1,	// (0x0001c59c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x5ab1,	// (0x0001c59c) list_single_sp_fs_schedule_track_pane

0x3c25,	// (0x0001a710) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3c25,	// (0x0001a710) bg_sp_fs_highlight_list_pane_cp03

0xe326,	// (0x00024e11) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe326,	// (0x00024e11) list_single_sp_fs_schedule_track_pane_g1

0xe332,	// (0x00024e1d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe332,	// (0x00024e1d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc8,	// (0x000268b3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc8,	// (0x000268b3) list_single_sp_fs_schedule_track_pane_g

0xe33e,	// (0x00024e29) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe33e,	// (0x00024e29) list_single_sp_fs_schedule_track_pane_t1

0xe356,	// (0x00024e41) sp_fs_schedule_track_pane_ParamLimits

0xe356,	// (0x00024e41) sp_fs_schedule_track_pane

0x56b5,	// (0x0001c1a0) sp_fs_schedule_track_pane_g1

0x56bd,	// (0x0001c1a8) sp_fs_schedule_track_pane_g2

0x56c5,	// (0x0001c1b0) sp_fs_schedule_track_pane_g3

0x56cd,	// (0x0001c1b8) sp_fs_schedule_track_pane_g4

0x56d5,	// (0x0001c1c0) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcd,	// (0x000268b8) sp_fs_schedule_track_pane_g

0x404d,	// (0x0001ab38) bg_sp_fs_schedule_viewer_highlight_g1

0x1017,	// (0x00017b02) bg_sp_fs_schedule_viewer_highlight_g2

0x4055,	// (0x0001ab40) bg_sp_fs_schedule_viewer_highlight_g3

0x405d,	// (0x0001ab48) bg_sp_fs_schedule_viewer_highlight_g4

0x42d6,	// (0x0001adc1) bg_sp_fs_schedule_viewer_highlight_g5

0x406d,	// (0x0001ab58) bg_sp_fs_schedule_viewer_highlight_g6

0x4075,	// (0x0001ab60) bg_sp_fs_schedule_viewer_highlight_g7

0x407d,	// (0x0001ab68) bg_sp_fs_schedule_viewer_highlight_g8

0x0ff7,	// (0x00017ae2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd8,	// (0x000268c3) bg_sp_fs_schedule_viewer_highlight_g

0x0348,	// (0x00016e33) bg_main_sp_fs_ribbon_pane

0xc1f1,	// (0x00022cdc) main_sp_fs_ribbon_pane_g1

0x56dd,	// (0x0001c1c8) main_sp_fs_ribbon_pane_t1

0xe366,	// (0x00024e51) main_sp_fs_ribbon_pane_t2

0x56ec,	// (0x0001c1d7) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdeb,	// (0x000268d6) main_sp_fs_ribbon_pane_t

0x56fb,	// (0x0001c1e6) main_sp_fs_ribbon_scheduler_pane

0x5703,	// (0x0001c1ee) bg_main_sp_fs_ribbon_pane_g1

0x570c,	// (0x0001c1f7) bg_main_sp_fs_ribbon_pane_g2

0x5715,	// (0x0001c200) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf2,	// (0x000268dd) bg_main_sp_fs_ribbon_pane_g

0x571d,	// (0x0001c208) main_sp_fs_ribbon_scheduler_pane_g1

0x5726,	// (0x0001c211) main_sp_fs_ribbon_scheduler_pane_g2

0x572f,	// (0x0001c21a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf9,	// (0x000268e4) main_sp_fs_ribbon_scheduler_pane_g

0x5738,	// (0x0001c223) list_cale_mrui_pane

0xe375,	// (0x00024e60) sp_fs_scroll_pane_cp07_ParamLimits

0xe375,	// (0x00024e60) sp_fs_scroll_pane_cp07

0xe38d,	// (0x00024e78) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe38d,	// (0x00024e78) bg_sp_fs_schedule_viewer_highlight

0x5745,	// (0x0001c230) list_single_sp_fs_schedule_track_pane_cp01

0x574d,	// (0x0001c238) list_sp_fs_schedule_track_pane

0x5755,	// (0x0001c240) sp_fs_scroll_pane_cp06_ParamLimits

0x5755,	// (0x0001c240) sp_fs_scroll_pane_cp06

0x324f,	// (0x00019d3a) bgmain_sp_fs_calendar_pane_g1

0xe39a,	// (0x00024e85) list_single_cale_mrui_pane_ParamLimits

0xe39a,	// (0x00024e85) list_single_cale_mrui_pane

0x5767,	// (0x0001c252) list_single_cale_mrui_row_pane_ParamLimits

0x5767,	// (0x0001c252) list_single_cale_mrui_row_pane

0xe3bc,	// (0x00024ea7) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe3bc,	// (0x00024ea7) list_single_cale_mrui_row_pane_g1

0xe3f4,	// (0x00024edf) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe3f4,	// (0x00024edf) list_single_cale_mrui_row_pane_t1

0xe406,	// (0x00024ef1) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe406,	// (0x00024ef1) list_single_cale_mrui_row_pane_t2

0xe46c,	// (0x00024f57) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe46c,	// (0x00024f57) list_single_cale_mrui_row_pane_t3

0xe49b,	// (0x00024f86) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe49b,	// (0x00024f86) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe07,	// (0x000268f2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe07,	// (0x000268f2) list_single_cale_mrui_row_pane_t

0xe4ca,	// (0x00024fb5) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe4ca,	// (0x00024fb5) list_single_cmail_header_editor_pane_bg_cp01

0xe4ee,	// (0x00024fd9) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe4ee,	// (0x00024fd9) list_single_cmail_header_editor_pane_bg_cp02

0xe50c,	// (0x00024ff7) main_radioblah_text_pane_t1_ParamLimits

0xe50c,	// (0x00024ff7) main_radioblah_text_pane_t1

0x578a,	// (0x0001c275) cam6_indi_pane_cp01

0x5792,	// (0x0001c27d) cam6_mode_pane_cp01

0x579a,	// (0x0001c285) cam6_pano_pane

0x57a3,	// (0x0001c28e) cam6_zoom_pane_cp01

0x57ab,	// (0x0001c296) cam6_pano_image_pane

0x57b4,	// (0x0001c29f) cam6_pano_pane_g1

0x4e68,	// (0x0001b953) cam6_pano_pane_g2

0x57bd,	// (0x0001c2a8) cam6_pano_pane_g3

0x57c6,	// (0x0001c2b1) cam6_pano_pane_g4

0x383c,	// (0x0001a327) cam6_pano_pane_g5

0x57cf,	// (0x0001c2ba) cam6_pano_pane_g6

0x57d7,	// (0x0001c2c2) cam6_pano_pane_g7

0x57df,	// (0x0001c2ca) cam6_pano_pane_g8

0x57e8,	// (0x0001c2d3) cam6_pano_pane_g9

0x0008,

0xfe10,	// (0x000268fb) cam6_pano_pane_g

0x0348,	// (0x00016e33) main_browser_tag_pane

0x55ae,	// (0x0001c099) grid_navstr_albumart_pane

0x57f1,	// (0x0001c2dc) cell_navstr_albumart_pane_ParamLimits

0x57f1,	// (0x0001c2dc) cell_navstr_albumart_pane

0x19b0,	// (0x0001849b) cell_navstr_albumart_pane_g1

0x2b0c,	// (0x000195f7) cell_navstr_albumart_pane_g2

0x2b1c,	// (0x00019607) cell_navstr_albumart_pane_g3

0x2b14,	// (0x000195ff) cell_navstr_albumart_pane_g4

0x0003,

0xfe23,	// (0x0002690e) cell_navstr_albumart_pane_g

0xe525,	// (0x00025010) bt_list_pane_ParamLimits

0xe525,	// (0x00025010) bt_list_pane

0xe53a,	// (0x00025025) bt_list_pane_t1

0xe549,	// (0x00025034) bt_list_pane_t2

0x0001,

0xfe2c,	// (0x00026917) bt_list_pane_t

0x0348,	// (0x00016e33) main_cale_prevew_pane

0xe558,	// (0x00025043) popup_cale_preview_window_ParamLimits

0xe558,	// (0x00025043) popup_cale_preview_window

0x039b,	// (0x00016e86) bg_popup_preview_window_pane_cp05_ParamLimits

0x039b,	// (0x00016e86) bg_popup_preview_window_pane_cp05

0x5808,	// (0x0001c2f3) list_cale_preview_pane_ParamLimits

0x5808,	// (0x0001c2f3) list_cale_preview_pane

0xe56d,	// (0x00025058) list_double_cale_preview_pane_ParamLimits

0xe56d,	// (0x00025058) list_double_cale_preview_pane

0xe57e,	// (0x00025069) list_single_cale_preview_pane_ParamLimits

0xe57e,	// (0x00025069) list_single_cale_preview_pane

0xe592,	// (0x0002507d) list_single_cale_preview_pane_g1

0xe59a,	// (0x00025085) list_single_cale_preview_pane_t1_ParamLimits

0xe59a,	// (0x00025085) list_single_cale_preview_pane_t1

0x5814,	// (0x0001c2ff) list_double_cale_preview_pane_g1

0x581c,	// (0x0001c307) list_double_cale_preview_pane_t1_ParamLimits

0x581c,	// (0x0001c307) list_double_cale_preview_pane_t1

0xe5af,	// (0x0002509a) list_double_cale_preview_pane_t2_ParamLimits

0xe5af,	// (0x0002509a) list_double_cale_preview_pane_t2

0x0001,

0xfe31,	// (0x0002691c) list_double_cale_preview_pane_t_ParamLimits

0xfe31,	// (0x0002691c) list_double_cale_preview_pane_t

0x0348,	// (0x00016e33) main_ezdial_pane

0x039b,	// (0x00016e86) main_sp_fs_email_pane_ParamLimits

0xdbf0,	// (0x000246db) cmail_ddmenu_btn01_pane_ParamLimits

0xdbf0,	// (0x000246db) cmail_ddmenu_btn01_pane

0xdc0d,	// (0x000246f8) cmail_ddmenu_btn02_pane_ParamLimits

0xdc0d,	// (0x000246f8) cmail_ddmenu_btn02_pane

0xdc2b,	// (0x00024716) cmail_ddmenu_btn03_pane_ParamLimits

0xdc2b,	// (0x00024716) cmail_ddmenu_btn03_pane

0xdc57,	// (0x00024742) main_sp_fs_ctrlbar_pane_ParamLimits

0xdc6b,	// (0x00024756) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe1b7,	// (0x00024ca2) list_cmail_body_pane_ParamLimits

0x54de,	// (0x0001bfc9) bg_button_pane_cp12

0x54f3,	// (0x0001bfde) list_single_cmail_header_detail_pane_g3_ParamLimits

0x54f3,	// (0x0001bfde) list_single_cmail_header_detail_pane_g3

0x5500,	// (0x0001bfeb) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5500,	// (0x0001bfeb) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb4,	// (0x0002689f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb4,	// (0x0002689f) list_single_cmail_header_detail_pane_t

0x5616,	// (0x0001c101) phacti_term_pane_t2_ParamLimits

0x5616,	// (0x0001c101) phacti_term_pane_t2

0x0001,

0xfdbe,	// (0x000268a9) phacti_term_pane_t_ParamLimits

0xfdbe,	// (0x000268a9) phacti_term_pane_t

0x5831,	// (0x0001c31c) aid_size_list_single_double

0xe5c7,	// (0x000250b2) popup_ezdial_listscroll_window

0xe5e0,	// (0x000250cb) popup_number_entry_window_cp01

0x0d6f,	// (0x0001785a) bg_popup_call_pane_cp09

0x583d,	// (0x0001c328) ezdial_list_pane

0x5845,	// (0x0001c330) scroll_pane_cp23

0x303c,	// (0x00019b27) bg_button_pane_cp028_ParamLimits

0x303c,	// (0x00019b27) bg_button_pane_cp028

0xe5ec,	// (0x000250d7) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe5ec,	// (0x000250d7) cmail_ddmenu_btn01_pane_g1

0xe5fc,	// (0x000250e7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe5fc,	// (0x000250e7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe36,	// (0x00026921) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe36,	// (0x00026921) cmail_ddmenu_btn01_pane_g

0x584d,	// (0x0001c338) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x584d,	// (0x0001c338) cmail_ddmenu_btn01_pane_t1

0x2d3b,	// (0x00019826) bg_button_pane_cp029_ParamLimits

0x2d3b,	// (0x00019826) bg_button_pane_cp029

0xe5fc,	// (0x000250e7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe5fc,	// (0x000250e7) cmail_ddmenu_btn02_pane_g1

0xe614,	// (0x000250ff) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe614,	// (0x000250ff) cmail_ddmenu_btn02_pane_t1

0x3c25,	// (0x0001a710) bg_button_pane_cp031_ParamLimits

0x3c25,	// (0x0001a710) bg_button_pane_cp031

0xe5fc,	// (0x000250e7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe5fc,	// (0x000250e7) cmail_ddmenu_btn03_pane_g1

0xe614,	// (0x000250ff) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe614,	// (0x000250ff) cmail_ddmenu_btn03_pane_t1

0xc147,	// (0x00022c32) cell_dialer2_keypad_pane_t1_ParamLimits

0xc161,	// (0x00022c4c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc161,	// (0x00022c4c) cell_dialer2_keypad_pane_t1_copy1

0xd56a,	// (0x00024055) ncimui_group_button_pane

0x039b,	// (0x00016e86) main_sp_fs_calendar_pane_ParamLimits

0xe1b7,	// (0x00024ca2) list_single_cmail_header_caption_pane_ParamLimits

0x5661,	// (0x0001c14c) aid_recal_txt_sm_pane

0x0348,	// (0x00016e33) mian_recal_day_pane

0x56a3,	// (0x0001c18e) popup_sp_fs_cale_preview_window_ParamLimits

0x5862,	// (0x0001c34d) list_recal_day_pane

0x58a4,	// (0x0001c38f) list_single_recal_day_pane_ParamLimits

0x58a4,	// (0x0001c38f) list_single_recal_day_pane

0x58b6,	// (0x0001c3a1) list_single_recal_day_pane_g1_ParamLimits

0x58b6,	// (0x0001c3a1) list_single_recal_day_pane_g1

0x58c2,	// (0x0001c3ad) list_single_recal_day_pane_g2_ParamLimits

0x58c2,	// (0x0001c3ad) list_single_recal_day_pane_g2

0x58ce,	// (0x0001c3b9) list_single_recal_day_pane_g3_ParamLimits

0x58ce,	// (0x0001c3b9) list_single_recal_day_pane_g3

0xe638,	// (0x00025123) list_single_recal_day_pane_g4_ParamLimits

0xe638,	// (0x00025123) list_single_recal_day_pane_g4

0x58da,	// (0x0001c3c5) list_single_recal_day_pane_g5_ParamLimits

0x58da,	// (0x0001c3c5) list_single_recal_day_pane_g5

0xe64c,	// (0x00025137) list_single_recal_day_pane_g6_ParamLimits

0xe64c,	// (0x00025137) list_single_recal_day_pane_g6

0x0004,

0xfe45,	// (0x00026930) list_single_recal_day_pane_g_ParamLimits

0xfe45,	// (0x00026930) list_single_recal_day_pane_g

0x58ee,	// (0x0001c3d9) list_single_recal_day_pane_t1

0xe65b,	// (0x00025146) list_single_recal_day_pane_t2

0x0001,

0xfe50,	// (0x0002693b) list_single_recal_day_pane_t

0xe670,	// (0x0002515b) ncimui_query_button_pane_ParamLimits

0xe670,	// (0x0002515b) ncimui_query_button_pane

0xe680,	// (0x0002516b) ncimui_query_button_pane_t1_ParamLimits

0xe680,	// (0x0002516b) ncimui_query_button_pane_t1

0x5900,	// (0x0001c3eb) ncimui_query_button_pane_t2_ParamLimits

0x5900,	// (0x0001c3eb) ncimui_query_button_pane_t2

0x0001,

0xfe55,	// (0x00026940) ncimui_query_button_pane_t_ParamLimits

0xfe55,	// (0x00026940) ncimui_query_button_pane_t

0xe693,	// (0x0002517e) query_button_pane_ParamLimits

0xe693,	// (0x0002517e) query_button_pane

0x0348,	// (0x00016e33) bg_button_pane_cp0028

0x5913,	// (0x0001c3fe) query_button_pane_t1

0x7459,	// (0x0001df44) main_tport_pane_ParamLimits

0xe103,	// (0x00024bee) bg_popup_window_pane_cp01_ParamLimits

0xe103,	// (0x00024bee) bg_popup_window_pane_cp01

0xe10f,	// (0x00024bfa) heading_pane_cp08_ParamLimits

0xe10f,	// (0x00024bfa) heading_pane_cp08

0xe11b,	// (0x00024c06) heading_pane_cp07_ParamLimits

0xe11b,	// (0x00024c06) heading_pane_cp07

0x548e,	// (0x0001bf79) cell_tport_appsw_pane_g2

0x0002,

0xfda1,	// (0x0002688c) cell_tport_appsw_pane_g

0x19a8,	// (0x00018493) input_candi_list_open_g1

0x11f2,	// (0x00017cdd) list_cale_time_pane_g6_ParamLimits

0x11f2,	// (0x00017cdd) list_cale_time_pane_g6

0xb498,	// (0x00021f83) aid_size_touch_calib_1_ParamLimits

0xb498,	// (0x00021f83) aid_size_touch_calib_1

0xb4a4,	// (0x00021f8f) aid_size_touch_calib_2_ParamLimits

0xb4a4,	// (0x00021f8f) aid_size_touch_calib_2

0xb4b0,	// (0x00021f9b) aid_size_touch_calib_3_ParamLimits

0xb4b0,	// (0x00021f9b) aid_size_touch_calib_3

0xb4be,	// (0x00021fa9) aid_size_touch_calib_4_ParamLimits

0xb4be,	// (0x00021fa9) aid_size_touch_calib_4

0xb4cc,	// (0x00021fb7) main_touch_calib_button_group_pane_ParamLimits

0xb4cc,	// (0x00021fb7) main_touch_calib_button_group_pane

0xb4da,	// (0x00021fc5) main_touch_calib_pane_g1_ParamLimits

0xb4e6,	// (0x00021fd1) main_touch_calib_pane_g2_ParamLimits

0xb4f2,	// (0x00021fdd) main_touch_calib_pane_g3_ParamLimits

0xb4fe,	// (0x00021fe9) main_touch_calib_pane_g4_ParamLimits

0xf760,	// (0x0002624b) main_touch_calib_pane_g_ParamLimits

0xb50a,	// (0x00021ff5) main_touch_calib_pane_t1_ParamLimits

0xb51f,	// (0x0002200a) main_touch_calib_pane_t2_ParamLimits

0xb534,	// (0x0002201f) main_touch_calib_pane_t3_ParamLimits

0xb546,	// (0x00022031) main_touch_calib_pane_t4_ParamLimits

0xb558,	// (0x00022043) main_touch_calib_pane_t5_ParamLimits

0xf769,	// (0x00026254) main_touch_calib_pane_t_ParamLimits

0x35f2,	// (0x0001a0dd) list_single_fp_cale_pane_g3_ParamLimits

0x35f2,	// (0x0001a0dd) list_single_fp_cale_pane_g3

0x743d,	// (0x0001df28) bg_button_pane_cp012_ParamLimits

0x743d,	// (0x0001df28) bg_vkb2_func_pane_cp03_ParamLimits

0x8338,	// (0x0001ee23) cell_vitu2_function_top_pane_g1_ParamLimits

0x743d,	// (0x0001df28) bg_vkb2_func_pane_cp04_ParamLimits

0xd4f6,	// (0x00023fe1) main_ncimui_button_group_pane_ParamLimits

0xd4f6,	// (0x00023fe1) main_ncimui_button_group_pane

0xd558,	// (0x00024043) main_ncimui_pane_t3_ParamLimits

0xd558,	// (0x00024043) main_ncimui_pane_t3

0x55c4,	// (0x0001c0af) phacti_button_group_pane

0x5831,	// (0x0001c31c) aid_size_list_single_double_ParamLimits

0xe5c7,	// (0x000250b2) popup_ezdial_listscroll_window_ParamLimits

0xe5e0,	// (0x000250cb) popup_number_entry_window_cp01_ParamLimits

0xe6a0,	// (0x0002518b) phacti_button_pane_ParamLimits

0xe6a0,	// (0x0002518b) phacti_button_pane

0x0348,	// (0x00016e33) bg_button_pane_cp14

0x5921,	// (0x0001c40c) phacti_button_pane_t1

0xe6af,	// (0x0002519a) main_touch_calib_button_pane_ParamLimits

0xe6af,	// (0x0002519a) main_touch_calib_button_pane

0x0b00,	// (0x000175eb) bg_button_pane_cp18_ParamLimits

0x0b00,	// (0x000175eb) bg_button_pane_cp18

0xe6c0,	// (0x000251ab) main_touch_calib_button_pane_t1_ParamLimits

0xe6c0,	// (0x000251ab) main_touch_calib_button_pane_t1

0xe6d6,	// (0x000251c1) main_touch_calib_button_pane_t2_ParamLimits

0xe6d6,	// (0x000251c1) main_touch_calib_button_pane_t2

0x0001,

0xfe5a,	// (0x00026945) main_touch_calib_button_pane_t_ParamLimits

0xfe5a,	// (0x00026945) main_touch_calib_button_pane_t

0x0348,	// (0x00016e33) cell_ncimui_button_pane

0x0348,	// (0x00016e33) bg_button_pane_cp032

0x592f,	// (0x0001c41a) cell_ncimui_button_pane_t1

0x7c3e,	// (0x0001e729) image3_infobar_pane_ParamLimits

0x7c3e,	// (0x0001e729) image3_infobar_pane

0xd8a1,	// (0x0002438c) fs_bigclock_status_pane_ParamLimits

0xd8a1,	// (0x0002438c) fs_bigclock_status_pane

0xd8ae,	// (0x00024399) main_fs_bigclock_clock_pane_ParamLimits

0xd8ae,	// (0x00024399) main_fs_bigclock_clock_pane

0xd8c6,	// (0x000243b1) main_fs_bigclock_indi_pane_ParamLimits

0xd8c6,	// (0x000243b1) main_fs_bigclock_indi_pane

0xd8e6,	// (0x000243d1) main_fs_bigclock_swipe_pane_ParamLimits

0xd8e6,	// (0x000243d1) main_fs_bigclock_swipe_pane

0x0348,	// (0x00016e33) main_fs_clock_dumped_data

0x4f75,	// (0x0001ba60) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x4f75,	// (0x0001ba60) list_single_fs_bigclock_indicator_pane_g1

0x4f8f,	// (0x0001ba7a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4f8f,	// (0x0001ba7a) list_single_fs_bigclock_indicator_pane_g2

0x4fa9,	// (0x0001ba94) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4fa9,	// (0x0001ba94) list_single_fs_bigclock_indicator_pane_g3

0x4fc3,	// (0x0001baae) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x4fc3,	// (0x0001baae) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x00026772) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x00026772) list_single_fs_bigclock_indicator_pane_g

0x4fec,	// (0x0001bad7) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4fec,	// (0x0001bad7) list_single_fs_bigclock_indicator_pane_t1

0x5014,	// (0x0001baff) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x5014,	// (0x0001baff) list_single_fs_bigclock_indicator_pane_t2

0x503c,	// (0x0001bb27) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x503c,	// (0x0001bb27) list_single_fs_bigclock_indicator_pane_t3

0x5064,	// (0x0001bb4f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x5064,	// (0x0001bb4f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0002677d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0002677d) list_single_fs_bigclock_indicator_pane_t

0x593d,	// (0x0001c428) image3_infobar_fav_pane_ParamLimits

0x593d,	// (0x0001c428) image3_infobar_fav_pane

0x594d,	// (0x0001c438) image3_infobar_loc_pane_ParamLimits

0x594d,	// (0x0001c438) image3_infobar_loc_pane

0x5961,	// (0x0001c44c) image3_infobar_time_pane_ParamLimits

0x5961,	// (0x0001c44c) image3_infobar_time_pane

0x324f,	// (0x00019d3a) image3_infobar_time_pane_g1

0x5971,	// (0x0001c45c) image3_infobar_time_pane_t1

0x324f,	// (0x00019d3a) image3_infobar_loc_pane_g1

0x597f,	// (0x0001c46a) image3_infobar_loc_pane_g2

0x0001,

0xfe5f,	// (0x0002694a) image3_infobar_loc_pane_g

0x5987,	// (0x0001c472) image3_infobar_loc_pane_t1

0x324f,	// (0x00019d3a) image3_infobar_fav_pane_g1

0x5995,	// (0x0001c480) image3_infobar_fav_pane_g2

0x0001,

0xfe64,	// (0x0002694f) image3_infobar_fav_pane_g

0x599d,	// (0x0001c488) fs_bigclock_status_battery_pane

0x59a6,	// (0x0001c491) fs_bigclock_status_signal_pane

0x59af,	// (0x0001c49a) fs_bigclock_status_title_pane

0x59b8,	// (0x0001c4a3) fs_bigclock_status_signal_pane_g1

0x59c1,	// (0x0001c4ac) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe69,	// (0x00026954) fs_bigclock_status_signal_pane_g

0x59c9,	// (0x0001c4b4) fs_bigclock_status_battery_pane_g1

0x59d2,	// (0x0001c4bd) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6e,	// (0x00026959) fs_bigclock_status_battery_pane_g

0x59da,	// (0x0001c4c5) fs_bigclock_status_title_pane_t1

0x3557,	// (0x0001a042) main_fs_bigclock_clock_pane_g1

0xe6f4,	// (0x000251df) main_fs_bigclock_clock_pane_g2

0xe701,	// (0x000251ec) main_fs_bigclock_clock_pane_g3

0xe701,	// (0x000251ec) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe73,	// (0x0002695e) main_fs_bigclock_clock_pane_g

0xe70d,	// (0x000251f8) main_fs_bigclock_clock_pane_t1

0xe71f,	// (0x0002520a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7c,	// (0x00026967) main_fs_bigclock_clock_pane_t

0x59e8,	// (0x0001c4d3) list_single_fs_bigclock_indicator_pane_ParamLimits

0x59e8,	// (0x0001c4d3) list_single_fs_bigclock_indicator_pane

0x59f9,	// (0x0001c4e4) list_single_fs_bigclock_pane_ParamLimits

0x59f9,	// (0x0001c4e4) list_single_fs_bigclock_pane

0x5a1f,	// (0x0001c50a) main_fs_bigclock_indicator_pane_t1

0x5a2e,	// (0x0001c519) list_single_fs_bigclock_pane_g1

0x5a36,	// (0x0001c521) list_single_fs_bigclock_pane_t1

0x324f,	// (0x00019d3a) main_fs_bigclock_swipe_pane_g1

0x5a76,	// (0x0001c561) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8d,	// (0x00026978) main_fs_bigclock_swipe_pane_g

0x5a7e,	// (0x0001c569) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5a7e,	// (0x0001c569) main_fs_bigclock_swipe_pane_t1

0xa16e,	// (0x00020c59) call_type_pane_ParamLimits

0x0348,	// (0x00016e33) main_btmg_pane

0xe3e8,	// (0x00024ed3) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe3e8,	// (0x00024ed3) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe00,	// (0x000268eb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe00,	// (0x000268eb) list_single_cale_mrui_row_pane_g

0x588b,	// (0x0001c376) list_recal_vselct_arw_lo_pane

0x5893,	// (0x0001c37e) list_recal_vselct_arw_up_pane

0x589b,	// (0x0001c386) list_recal_vselct_pane

0x5a9b,	// (0x0001c586) btmg_button_pane

0xe774,	// (0x0002525f) main_btmg_pane_g1

0x0348,	// (0x00016e33) bg_button_pane_cp044

0x5aa3,	// (0x0001c58e) btmg_button_pane_t1

0x2d27,	// (0x00019812) aid_listscroll_gen

0x039b,	// (0x00016e86) main_cntbar_detail_pane

0x54b4,	// (0x0001bf9f) list_cmail_folder_pane

0x54c4,	// (0x0001bfaf) sp_fs_scroll_pane_cp03_ParamLimits

0xe77c,	// (0x00025267) list_single_fs_dyc_pane_cp01_ParamLimits

0xe77c,	// (0x00025267) list_single_fs_dyc_pane_cp01

0x5ac7,	// (0x0001c5b2) aid_size_cmail_indent

0x5ad0,	// (0x0001c5bb) list_single_dyc_row_pane_cp01

0xe7ae,	// (0x00025299) cntbar_detail_list_pane_ParamLimits

0xe7ae,	// (0x00025299) cntbar_detail_list_pane

0xe7e4,	// (0x000252cf) main_cntbar_detail_cont_pane_ParamLimits

0xe7e4,	// (0x000252cf) main_cntbar_detail_cont_pane

0xe7f0,	// (0x000252db) scroll_pane_cp032_ParamLimits

0xe7f0,	// (0x000252db) scroll_pane_cp032

0xe7fc,	// (0x000252e7) cntbar_detail_list_event_pane_ParamLimits

0xe7fc,	// (0x000252e7) cntbar_detail_list_event_pane

0xe7ba,	// (0x000252a5) cntbar_detail_list_shct_pane

0x5ad9,	// (0x0001c5c4) aid_list_gen

0x0c5d,	// (0x00017748) aid_scroll

0x461c,	// (0x0001b107) aid_size_touch_scroll_bar

0xcdc3,	// (0x000238ae) aid_list_double

0x470b,	// (0x0001b1f6) aid_list_single

0x46d0,	// (0x0001b1bb) aid_list_single_lg

0xe80c,	// (0x000252f7) aid_list_z_g_a_sm

0xe814,	// (0x000252ff) aid_list_z_g_d

0xe81c,	// (0x00025307) aid_txt_z_prm

0xe82a,	// (0x00025315) aid_txt_z_prm_cp01

0xe838,	// (0x00025323) aid_txt_z_sec

0xe846,	// (0x00025331) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe846,	// (0x00025331) main_cntbar_detail_cont_pane_g1

0xe853,	// (0x0002533e) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe853,	// (0x0002533e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe92,	// (0x0002697d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe92,	// (0x0002697d) main_cntbar_detail_cont_pane_g

0x5ae2,	// (0x0001c5cd) main_cntbar_detail_cont_pane_t1

0x5af0,	// (0x0001c5db) main_cntbar_detail_cont_pane_t2

0x5afe,	// (0x0001c5e9) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe97,	// (0x00026982) main_cntbar_detail_cont_pane_t

0xe85f,	// (0x0002534a) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe85f,	// (0x0002534a) cell_cntbar_detail_list_shct_pane

0x5b0c,	// (0x0001c5f7) cntbar_detail_list_shct_pane_g1

0x5b15,	// (0x0001c600) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9e,	// (0x00026989) cntbar_detail_list_shct_pane_g

0xe871,	// (0x0002535c) cntbar_detail_list_event_pane_g1_ParamLimits

0xe871,	// (0x0002535c) cntbar_detail_list_event_pane_g1

0xe87d,	// (0x00025368) cntbar_detail_list_event_pane_g2_ParamLimits

0xe87d,	// (0x00025368) cntbar_detail_list_event_pane_g2

0x0005,

0xfea3,	// (0x0002698e) cntbar_detail_list_event_pane_g_ParamLimits

0xfea3,	// (0x0002698e) cntbar_detail_list_event_pane_g

0xe8e9,	// (0x000253d4) cntbar_detail_list_event_pane_t1_ParamLimits

0xe8e9,	// (0x000253d4) cntbar_detail_list_event_pane_t1

0xe8fe,	// (0x000253e9) cntbar_detail_list_event_pane_t2_ParamLimits

0xe8fe,	// (0x000253e9) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb0,	// (0x0002699b) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb0,	// (0x0002699b) cntbar_detail_list_event_pane_t

0x324f,	// (0x00019d3a) cell_cntbar_detail_list_shct_pane_g1

0x17ef,	// (0x000182da) navi_pane_mv_g3

0x039b,	// (0x00016e86) main_cntbar_detail_pane_ParamLimits

0x0348,	// (0x00016e33) main_notif_wgt_pane

0x7985,	// (0x0001e470) aid_tch_main_mp4_pane_g4

0x7bc4,	// (0x0001e6af) popup_slider_window_cp02

0x5881,	// (0x0001c36c) list_recal_day_event_pane

0xe794,	// (0x0002527f) cntbar_detail_btn_pane_ParamLimits

0xe794,	// (0x0002527f) cntbar_detail_btn_pane

0xe7a0,	// (0x0002528b) cntbar_detail_btn_pane_cp01_ParamLimits

0xe7a0,	// (0x0002528b) cntbar_detail_btn_pane_cp01

0xe7ba,	// (0x000252a5) cntbar_detail_list_shct_pane_ParamLimits

0xe7c6,	// (0x000252b1) cntbar_detail_pane_g1_ParamLimits

0xe7c6,	// (0x000252b1) cntbar_detail_pane_g1

0xe7d2,	// (0x000252bd) cntbar_detail_pane_t1_ParamLimits

0xe7d2,	// (0x000252bd) cntbar_detail_pane_t1

0xe889,	// (0x00025374) cntbar_detail_list_event_pane_g3_ParamLimits

0xe889,	// (0x00025374) cntbar_detail_list_event_pane_g3

0xe8a1,	// (0x0002538c) cntbar_detail_list_event_pane_g4_ParamLimits

0xe8a1,	// (0x0002538c) cntbar_detail_list_event_pane_g4

0xe8b9,	// (0x000253a4) cntbar_detail_list_event_pane_g5_ParamLimits

0xe8b9,	// (0x000253a4) cntbar_detail_list_event_pane_g5

0xe8d1,	// (0x000253bc) cntbar_detail_list_event_pane_g6_ParamLimits

0xe8d1,	// (0x000253bc) cntbar_detail_list_event_pane_g6

0xe913,	// (0x000253fe) cntbar_detail_list_event_pane_t3_ParamLimits

0xe913,	// (0x000253fe) cntbar_detail_list_event_pane_t3

0xe925,	// (0x00025410) popup_notif_wgt_window_ParamLimits

0xe925,	// (0x00025410) popup_notif_wgt_window

0xe933,	// (0x0002541e) popup_submenu_window_cp01_ParamLimits

0xe933,	// (0x0002541e) popup_submenu_window_cp01

0x0d6f,	// (0x0001785a) bg_popup_window_pane_cp10

0x5b1e,	// (0x0001c609) listscroll_notif_wgt_pane

0x5b2f,	// (0x0001c61a) list_notif_wgt_window

0x5b38,	// (0x0001c623) scroll_pane_cp033

0xe93f,	// (0x0002542a) list_notif_wgt_row_pane_ParamLimits

0xe93f,	// (0x0002542a) list_notif_wgt_row_pane

0x5b41,	// (0x0001c62c) aid_size_list_notif_wgt_del

0x5b4e,	// (0x0001c639) list_notif_wgt_row_pane_g1

0x5b5a,	// (0x0001c645) list_notif_wgt_row_pane_g2

0x5b6e,	// (0x0001c659) list_notif_wgt_row_pane_g3

0x0002,

0xfeb7,	// (0x000269a2) list_notif_wgt_row_pane_g

0x5b7b,	// (0x0001c666) list_notif_wgt_row_pane_t1

0x5b91,	// (0x0001c67c) list_notif_wgt_row_pane_t2

0x5ba3,	// (0x0001c68e) list_notif_wgt_row_pane_t3

0x0002,

0xfebe,	// (0x000269a9) list_notif_wgt_row_pane_t

0x4316,	// (0x0001ae01) list_recal_day_event_pane_g1

0x5bb5,	// (0x0001c6a0) list_recal_day_event_pane_t1

0x0348,	// (0x00016e33) bg_button_pane_cp045

0xe951,	// (0x0002543c) cntbar_detail_btn_pane_t1

0x2d3b,	// (0x00019826) main_callh_pane_ParamLimits

0x2d3b,	// (0x00019826) main_callh_pane

0x0348,	// (0x00016e33) main_coverflow0_pane

0x0348,	// (0x00016e33) main_wgtman_pane

0xd8f8,	// (0x000243e3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd8f8,	// (0x000243e3) main_fs_bigclock_unlock_btn_pane

0x5486,	// (0x0001bf71) bg_button_pane_cp16

0x5496,	// (0x0001bf81) cell_tport_appsw_pane_g3

0xe95f,	// (0x0002544a) cf0_flow_pane_ParamLimits

0xe95f,	// (0x0002544a) cf0_flow_pane

0x5bc4,	// (0x0001c6af) listscroll_cf0_pane

0x5bcd,	// (0x0001c6b8) main_cf0_pane_g1

0xe96e,	// (0x00025459) main_cf0_pane_t1_ParamLimits

0xe96e,	// (0x00025459) main_cf0_pane_t1

0xe980,	// (0x0002546b) main_cf0_pane_t2_ParamLimits

0xe980,	// (0x0002546b) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x000269b5) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x000269b5) main_cf0_pane_t

0x5bdf,	// (0x0001c6ca) scroll_pane_cp11

0xe992,	// (0x0002547d) cf0_flow_pane_g1

0xe99a,	// (0x00025485) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x000269ba) cf0_flow_pane_g

0xe9a2,	// (0x0002548d) cf0_flow_pane_t1

0x0348,	// (0x00016e33) main_call6_pane

0x0348,	// (0x00016e33) main_calllock_pane

0x8540,	// (0x0001f02b) call6_btn_grp_pane_ParamLimits

0x8540,	// (0x0001f02b) call6_btn_grp_pane

0x854d,	// (0x0001f038) call6_pane_g1_ParamLimits

0x854d,	// (0x0001f038) call6_pane_g1

0x855a,	// (0x0001f045) popup_call6_1st_window_ParamLimits

0x855a,	// (0x0001f045) popup_call6_1st_window

0x8566,	// (0x0001f051) popup_call6_2nd_window_ParamLimits

0x8566,	// (0x0001f051) popup_call6_2nd_window

0x8572,	// (0x0001f05d) cell_call6_btn_pane_ParamLimits

0x8572,	// (0x0001f05d) cell_call6_btn_pane

0x0d6f,	// (0x0001785a) bg_popup_call2_in_pane_cp03

0x5be8,	// (0x0001c6d3) popup_call6_1st_window_g1

0x5bf0,	// (0x0001c6db) popup_call6_1st_window_g2

0x5bf8,	// (0x0001c6e3) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x000269bf) popup_call6_1st_window_g

0x5c00,	// (0x0001c6eb) popup_call6_1st_window_t1

0x5c0f,	// (0x0001c6fa) popup_call6_1st_window_t2

0x5c1d,	// (0x0001c708) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x000269c6) popup_call6_1st_window_t

0x0d6f,	// (0x0001785a) bg_popup_call2_in_pane_cp04

0x5be8,	// (0x0001c6d3) popup_call6_2nd_window_g1

0x5bf0,	// (0x0001c6db) popup_call6_2nd_window_g2

0x5bf8,	// (0x0001c6e3) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x000269bf) popup_call6_2nd_window_g

0x5c00,	// (0x0001c6eb) popup_call6_2nd_window_t1

0x6f32,	// (0x0001da1d) bg_button_pane_cp15

0x8581,	// (0x0001f06c) cell_call6_btn_pane_g1

0x858a,	// (0x0001f075) cell_call6_btn_pane_t1

0xe9b0,	// (0x0002549b) listscroll_wgtman_pane_ParamLimits

0xe9b0,	// (0x0002549b) listscroll_wgtman_pane

0xe9cc,	// (0x000254b7) wgtman_btn_pane_ParamLimits

0xe9cc,	// (0x000254b7) wgtman_btn_pane

0x1646,	// (0x00018131) aid_scroll_copy1

0x5c55,	// (0x0001c740) list_wgtman_pane

0xe9ff,	// (0x000254ea) wgtman_btn_pane_g1_ParamLimits

0xe9ff,	// (0x000254ea) wgtman_btn_pane_g1

0xea27,	// (0x00025512) wgtman_btn_pane_t1_ParamLimits

0xea27,	// (0x00025512) wgtman_btn_pane_t1

0x5c5f,	// (0x0001c74a) wgtman_btn_pane_t2_ParamLimits

0x5c5f,	// (0x0001c74a) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x000269cd) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x000269cd) wgtman_btn_pane_t

0xea5e,	// (0x00025549) listrow_wgtman_pane_ParamLimits

0xea5e,	// (0x00025549) listrow_wgtman_pane

0xea6f,	// (0x0002555a) listrow_wgtman_pane_g1

0xea7c,	// (0x00025567) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x000269d2) listrow_wgtman_pane_g

0xea94,	// (0x0002557f) listrow_wgtman_pane_t1

0xeaac,	// (0x00025597) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x000269d7) listrow_wgtman_pane_t

0xead2,	// (0x000255bd) wait_bar_pane_cp09

0x5c76,	// (0x0001c761) main_calllock_btn_pane

0x5c7e,	// (0x0001c769) main_calllock_pane_g1

0x0348,	// (0x00016e33) bg_button_pane_cp17

0x5c87,	// (0x0001c772) main_calllock_btn_pane_g1

0x5c90,	// (0x0001c77b) main_calllock_btn_pane_t1

0x0348,	// (0x00016e33) main_dialer3_pane

0x0348,	// (0x00016e33) main_fmrd2_pane

0x324f,	// (0x00019d3a) main_fs_bigclock_unlock_btn_pane_g1

0x5ca7,	// (0x0001c792) main_fs_bigclock_unlock_btn_pane_t1

0xeae4,	// (0x000255cf) area_fmrd2_info_pane_ParamLimits

0xeae4,	// (0x000255cf) area_fmrd2_info_pane

0xeaf0,	// (0x000255db) area_fmrd2_visual_pane_ParamLimits

0xeaf0,	// (0x000255db) area_fmrd2_visual_pane

0xeafe,	// (0x000255e9) fmrd2_indi_pane_ParamLimits

0xeafe,	// (0x000255e9) fmrd2_indi_pane

0xeb0b,	// (0x000255f6) area_fmrd2_visual_pane_g1

0xeb13,	// (0x000255fe) area_fmrd2_visual_pane_t1

0xeb21,	// (0x0002560c) area_fmrd2_visual_pane_t2

0xeb2f,	// (0x0002561a) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x000269e1) area_fmrd2_visual_pane_t

0xeb3d,	// (0x00025628) area_fmrd2_info_pane_g1

0xeb45,	// (0x00025630) area_fmrd2_info_pane_t1

0xeb53,	// (0x0002563e) area_fmrd2_info_pane_t2

0xeb61,	// (0x0002564c) area_fmrd2_info_pane_t3

0xeb6f,	// (0x0002565a) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x000269e8) area_fmrd2_info_pane_t

0xeb7d,	// (0x00025668) fmrd2_indi_pane_t1

0xeb8b,	// (0x00025676) fmrd2_indi_pane_t2

0xeb99,	// (0x00025684) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x000269f1) fmrd2_indi_pane_t

0x4fd2,	// (0x0001babd) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4fd2,	// (0x0001babd) list_single_fs_bigclock_indicator_pane_g5

0x5080,	// (0x0001bb6b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x5080,	// (0x0001bb6b) list_single_fs_bigclock_indicator_pane_t5

0xe2e3,	// (0x00024dce) aid_cell_bcale_month_pane_ParamLimits

0xe2e3,	// (0x00024dce) aid_cell_bcale_month_pane

0xe301,	// (0x00024dec) bcale_month_pane_ParamLimits

0xe301,	// (0x00024dec) bcale_month_pane

0xe317,	// (0x00024e02) bcale_preview_pane_ParamLimits

0xe317,	// (0x00024e02) bcale_preview_pane

0x5a36,	// (0x0001c521) list_single_fs_bigclock_pane_t1_ParamLimits

0x5a52,	// (0x0001c53d) list_single_fs_bigclock_pane_t2_ParamLimits

0x5a52,	// (0x0001c53d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe88,	// (0x00026973) list_single_fs_bigclock_pane_t_ParamLimits

0xfe88,	// (0x00026973) list_single_fs_bigclock_pane_t

0x5c9f,	// (0x0001c78a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x000269dc) main_fs_bigclock_unlock_btn_pane_g

0xeba7,	// (0x00025692) aid_dia3_key_size_ParamLimits

0xeba7,	// (0x00025692) aid_dia3_key_size

0xebb3,	// (0x0002569e) aid_dia3_listrow_size_ParamLimits

0xebb3,	// (0x0002569e) aid_dia3_listrow_size

0xebc1,	// (0x000256ac) dia3_keypad_fun_pane_ParamLimits

0xebc1,	// (0x000256ac) dia3_keypad_fun_pane

0xebcd,	// (0x000256b8) dia3_keypad_num_pane_ParamLimits

0xebcd,	// (0x000256b8) dia3_keypad_num_pane

0xebd9,	// (0x000256c4) dia3_listscroll_pane_ParamLimits

0xebd9,	// (0x000256c4) dia3_listscroll_pane

0xebe5,	// (0x000256d0) dia3_numentry_pane_ParamLimits

0xebe5,	// (0x000256d0) dia3_numentry_pane

0x5cb5,	// (0x0001c7a0) dia3_list_pane

0x5cbe,	// (0x0001c7a9) scroll_pane_cp12

0x0348,	// (0x00016e33) bg_dia3_numentry_pane

0xebf1,	// (0x000256dc) dia3_numentry_pane_t1

0xec00,	// (0x000256eb) cell_dia3_key_num_pane

0xec08,	// (0x000256f3) cell_dia3_key0_fun_pane_ParamLimits

0xec08,	// (0x000256f3) cell_dia3_key0_fun_pane

0xec15,	// (0x00025700) cell_dia3_key1_fun_pane_ParamLimits

0xec15,	// (0x00025700) cell_dia3_key1_fun_pane

0xec22,	// (0x0002570d) dia3_listrow_pane

0x4cd3,	// (0x0001b7be) bg_dia3_numentry_pane_g1

0x0348,	// (0x00016e33) bg_button_pane_cp21

0x5cc7,	// (0x0001c7b2) cell_dia3_key_num_pane_t1

0x5cd5,	// (0x0001c7c0) cell_dia3_key_num_pane_t2

0x5ce4,	// (0x0001c7cf) cell_dia3_key_num_pane_t3

0x5cf3,	// (0x0001c7de) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x000269f8) cell_dia3_key_num_pane_t

0x0348,	// (0x00016e33) bg_button_pane_cp19

0x5d02,	// (0x0001c7ed) cell_dia3_key0_fun_pane_g1

0x0348,	// (0x00016e33) bg_button_pane_cp20

0xec2f,	// (0x0002571a) cell_dia3_key1_fun_pane_g1

0xec37,	// (0x00025722) area_left_week_number_pane

0xec48,	// (0x00025733) area_top_day_name_pane

0xec54,	// (0x0002573f) frame_month_view_pane

0x5d0a,	// (0x0001c7f5) grid_month_view_pane

0xec65,	// (0x00025750) cell_top_day_name_pane_ParamLimits

0xec65,	// (0x00025750) cell_top_day_name_pane

0xec7b,	// (0x00025766) cell_area_left_week_number_pane_ParamLimits

0xec7b,	// (0x00025766) cell_area_left_week_number_pane

0xec9a,	// (0x00025785) cell_month_view_pane_ParamLimits

0xec9a,	// (0x00025785) cell_month_view_pane

0x5d18,	// (0x0001c803) frm_month_g1

0xecc0,	// (0x000257ab) frm_month_g2

0xeccf,	// (0x000257ba) frm_month_g3

0xecde,	// (0x000257c9) frm_month_g4

0xeced,	// (0x000257d8) frm_month_g5

0xecfc,	// (0x000257e7) frm_month_g6

0xed0b,	// (0x000257f6) frm_month_g7

0x5d25,	// (0x0001c810) frm_month_g8

0xed1a,	// (0x00025805) frm_month_g9

0xed27,	// (0x00025812) frm_month_g10

0xed34,	// (0x0002581f) frm_month_g11

0xed41,	// (0x0002582c) frm_month_g12

0xed4e,	// (0x00025839) frm_month_g13

0xed5b,	// (0x00025846) frm_month_g14

0xed68,	// (0x00025853) frm_month_g15

0xed75,	// (0x00025860) frm_month_g16

0x000f,

0xff16,	// (0x00026a01) frm_month_g

0x5d32,	// (0x0001c81d) cell_top_day_name_pane_t1

0xed82,	// (0x0002586d) cell_area_left_week_number_pane_g1

0xed91,	// (0x0002587c) cell_area_left_week_number_pane_t1

0x347e,	// (0x00019f69) cell_month_view_pane_g1

0xeda7,	// (0x00025892) cell_month_view_pane_t1

0x0348,	// (0x00016e33) main_fps_pane

0x5254,	// (0x0001bd3f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x5254,	// (0x0001bd3f) cmail_ddmenu_btn02_pane_cp1

0x5270,	// (0x0001bd5b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x5270,	// (0x0001bd5b) cmail_ddmenu_btn02_pane_cp2

0xe608,	// (0x000250f3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe608,	// (0x000250f3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3b,	// (0x00026926) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3b,	// (0x00026926) cmail_ddmenu_btn02_pane_g

0xe626,	// (0x00025111) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe626,	// (0x00025111) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe40,	// (0x0002692b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe40,	// (0x0002692b) cmail_ddmenu_btn02_pane_t

0xedbd,	// (0x000258a8) fps_text_pane_ParamLimits

0xedbd,	// (0x000258a8) fps_text_pane

0xedca,	// (0x000258b5) main_fps_pane_g1_ParamLimits

0xedca,	// (0x000258b5) main_fps_pane_g1

0xedd6,	// (0x000258c1) wait_bar_pane_cp010_ParamLimits

0xedd6,	// (0x000258c1) wait_bar_pane_cp010

0xede2,	// (0x000258cd) fps_text_pane_t1_ParamLimits

0xede2,	// (0x000258cd) fps_text_pane_t1

0xc1e8,	// (0x00022cd3) cam4_image_uncrop_pane_g1

0xc1f1,	// (0x00022cdc) cam4_image_uncrop_pane_g2

0xc1fa,	// (0x00022ce5) cam4_image_uncrop_pane_g3

0xc203,	// (0x00022cee) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x000263ec) cam4_image_uncrop_pane_g

0xec22,	// (0x0002570d) dia3_listrow_pane_ParamLimits

0x0348,	// (0x00016e33) main_phob2_pane

0xe15c,	// (0x00024c47) cell_tport_appsw_pane_cp02_ParamLimits

0xe15c,	// (0x00024c47) cell_tport_appsw_pane_cp02

0xe169,	// (0x00024c54) cell_tport_appsw_pane_cp03_ParamLimits

0xe169,	// (0x00024c54) cell_tport_appsw_pane_cp03

0x0348,	// (0x00016e33) phob2_contact_card_pane

0x0348,	// (0x00016e33) phob2_listscroll_pane

0x5d45,	// (0x0001c830) phob2_list_pane

0x5d4d,	// (0x0001c838) scroll_pane_cp034

0xedfb,	// (0x000258e6) phob2_cc_data_pane_ParamLimits

0xedfb,	// (0x000258e6) phob2_cc_data_pane

0xee13,	// (0x000258fe) phob2_cc_listscroll_pane_ParamLimits

0xee13,	// (0x000258fe) phob2_cc_listscroll_pane

0xee2b,	// (0x00025916) list_double_large_graphic_phob2_pane_ParamLimits

0xee2b,	// (0x00025916) list_double_large_graphic_phob2_pane

0xee3d,	// (0x00025928) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xee3d,	// (0x00025928) list_double_large_graphic_phob2_pane_g1

0xee53,	// (0x0002593e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xee53,	// (0x0002593e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x00026a22) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x00026a22) list_double_large_graphic_phob2_pane_g

0xee5f,	// (0x0002594a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xee5f,	// (0x0002594a) list_double_large_graphic_phob2_pane_t1

0xee75,	// (0x00025960) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xee75,	// (0x00025960) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x00026a27) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x00026a27) list_double_large_graphic_phob2_pane_t

0x0348,	// (0x00016e33) list_highlight_pane_cp024

0xee8a,	// (0x00025975) phob2_cc_button_pane

0xee92,	// (0x0002597d) phob2_cc_data_pane_g1_ParamLimits

0xee92,	// (0x0002597d) phob2_cc_data_pane_g1

0xee9e,	// (0x00025989) phob2_cc_data_pane_g2_ParamLimits

0xee9e,	// (0x00025989) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x00026a2c) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x00026a2c) phob2_cc_data_pane_g

0xeeaa,	// (0x00025995) phob2_cc_data_pane_t1_ParamLimits

0xeeaa,	// (0x00025995) phob2_cc_data_pane_t1

0xeebc,	// (0x000259a7) phob2_cc_data_pane_t2_ParamLimits

0xeebc,	// (0x000259a7) phob2_cc_data_pane_t2

0xeece,	// (0x000259b9) phob2_cc_data_pane_t3_ParamLimits

0xeece,	// (0x000259b9) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x00026a31) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x00026a31) phob2_cc_data_pane_t

0x5d55,	// (0x0001c840) phob2_cc_list_pane_ParamLimits

0x5d55,	// (0x0001c840) phob2_cc_list_pane

0x4bf0,	// (0x0001b6db) scroll_pane_cp035_ParamLimits

0x4bf0,	// (0x0001b6db) scroll_pane_cp035

0x039b,	// (0x00016e86) bg_button_pane_cp033

0x5d61,	// (0x0001c84c) phob2_cc_button_pane_g1

0x5d6d,	// (0x0001c858) phob2_cc_button_pane_t1

0x5d82,	// (0x0001c86d) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x00026a38) phob2_cc_button_pane_t

0xeee0,	// (0x000259cb) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xeee0,	// (0x000259cb) list_double_large_graphic_phob2_cc_pane

0xef26,	// (0x00025a11) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xef26,	// (0x00025a11) list_double_large_graphic_phob2_cc_pane_g1

0xef37,	// (0x00025a22) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xef37,	// (0x00025a22) list_double_large_graphic_phob2_cc_pane_g2

0xef46,	// (0x00025a31) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xef46,	// (0x00025a31) list_double_large_graphic_phob2_cc_pane_g3

0xef55,	// (0x00025a40) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xef55,	// (0x00025a40) list_double_large_graphic_phob2_cc_pane_g4

0xef66,	// (0x00025a51) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xef66,	// (0x00025a51) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x00026a3d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x00026a3d) list_double_large_graphic_phob2_cc_pane_g

0xef75,	// (0x00025a60) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xef75,	// (0x00025a60) list_double_large_graphic_phob2_cc_pane_t1

0xef9e,	// (0x00025a89) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xef9e,	// (0x00025a89) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x00026a48) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x00026a48) list_double_large_graphic_phob2_cc_pane_t

0x5d94,	// (0x0001c87f) list_highlight_pane_cp025_ParamLimits

0x5d94,	// (0x0001c87f) list_highlight_pane_cp025

0x039b,	// (0x00016e86) bg_button_pane_cp033_ParamLimits

0x5d61,	// (0x0001c84c) phob2_cc_button_pane_g1_ParamLimits

0x5d6d,	// (0x0001c858) phob2_cc_button_pane_t1_ParamLimits

0x5d82,	// (0x0001c86d) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x00026a38) phob2_cc_button_pane_t_ParamLimits

0x8600,	// (0x0001f0eb) popup_wgtman_window

0x4cf3,	// (0x0001b7de) scroll_pane_cp038

0xe9e7,	// (0x000254d2) wgtman_btn_pane_cp_01_ParamLimits

0xe9e7,	// (0x000254d2) wgtman_btn_pane_cp_01

0x5da2,	// (0x0001c88d) wgtman_content_pane

0x5dab,	// (0x0001c896) wgtman_heading_pane

0x0348,	// (0x00016e33) bg_heading_pane_cp02

0x5db4,	// (0x0001c89f) wgtman_heading_pane_g1

0x5dbc,	// (0x0001c8a7) wgtman_heading_pane_t1

0x5dca,	// (0x0001c8b5) scroll_pane_cp036

0x5dd2,	// (0x0001c8bd) wgtman_list_pane

0x52d4,	// (0x0001bdbf) wgtman_list_pane_t1_ParamLimits

0x52d4,	// (0x0001bdbf) wgtman_list_pane_t1

0x7e44,	// (0x0001e92f) cam4_grid_pane

0xc958,	// (0x00023443) bg_button_pane_cp015_ParamLimits

0xc968,	// (0x00023453) bg_button_pane_cp016_ParamLimits

0xc97b,	// (0x00023466) bg_button_pane_cp017_ParamLimits

0xc9cd,	// (0x000234b8) popup_vitu2_query_window_g3_ParamLimits

0xc9cd,	// (0x000234b8) popup_vitu2_query_window_g3

0xca80,	// (0x0002356b) popup_vitu2_query_window_t6_ParamLimits

0xca80,	// (0x0002356b) popup_vitu2_query_window_t6

0xcaab,	// (0x00023596) popup_vitu2_query_window_t7_ParamLimits

0xcaab,	// (0x00023596) popup_vitu2_query_window_t7

0x5c43,	// (0x0001c72e) cam4_grid_pane_g1

0x5c4c,	// (0x0001c737) cam4_grid_pane_g2

0x5dda,	// (0x0001c8c5) cam4_grid_pane_g3

0x5de3,	// (0x0001c8ce) cam4_grid_pane_g4

0x0003,

0xff62,	// (0x00026a4d) cam4_grid_pane_g

0x910b,	// (0x0001fbf6) aid_placing_vt_slider_lsc_ParamLimits

0x93b5,	// (0x0001fea0) vidtel_button_pane_ParamLimits

0x93b5,	// (0x0001fea0) vidtel_button_pane

0x0348,	// (0x00016e33) bg_button_pane_cp034

0xefc7,	// (0x00025ab2) vidtel_button_pane_g1

0xefcf,	// (0x00025aba) vidtel_button_pane_t1

0x42a4,	// (0x0001ad8f) aid_size_vtel_slider_touch

0x4bf0,	// (0x0001b6db) scroll_pane_cp039

0x4d22,	// (0x0001b80d) ncim_query_button_pane_cp01_ParamLimits

0x4d41,	// (0x0001b82c) ncimui_query_pane_g1_ParamLimits

0x039b,	// (0x00016e86) input_focus_pane_cp012_ParamLimits

0x4d66,	// (0x0001b851) ncim_query_entry_pane_t1_ParamLimits

0x4bf0,	// (0x0001b6db) scroll_pane_cp039_ParamLimits

0x170a,	// (0x000181f5) navi_pane_bcale_mc_g1

0x1712,	// (0x000181fd) navi_pane_bcale_mc_t1

0x52b9,	// (0x0001bda4) main_sp_fs_email_pane_g1

0x52c5,	// (0x0001bdb0) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x000267e3) main_sp_fs_email_pane_g

0x577d,	// (0x0001c268) list_single_cale_mrui_row_pane_g3_ParamLimits

0x577d,	// (0x0001c268) list_single_cale_mrui_row_pane_g3

0xe644,	// (0x0002512f) list_single_recal_day_pane_g5_event_pane

0x58e6,	// (0x0001c3d1) list_single_recal_day_pane_g7

0x5dec,	// (0x0001c8d7) list_recal_day_event_pane_cp01

0x5df5,	// (0x0001c8e0) list_recal_vselct_arw_lo_pane_cp01

0x5dfd,	// (0x0001c8e8) list_recal_vselct_arw_up_pane_cp01

0x5e05,	// (0x0001c8f0) list_recal_vselct_pane_cp01

0x4316,	// (0x0001ae01) list_recal_day_event_pane_cp01_g1

0x5e0f,	// (0x0001c8fa) list_recal_day_event_pane_cp01_t1

0x58ee,	// (0x0001c3d9) list_single_recal_day_pane_t1_ParamLimits

0xe65b,	// (0x00025146) list_single_recal_day_pane_t2_ParamLimits

0xfe50,	// (0x0002693b) list_single_recal_day_pane_t_ParamLimits

0x0a15,	// (0x00017500) bg_notes_pane_ParamLimits

0x0ac0,	// (0x000175ab) list_notes_pane_ParamLimits

0x8842,	// (0x0001f32d) scroll_pane_cp06_ParamLimits

0x0b00,	// (0x000175eb) main_notes_pane_ParamLimits

0x0348,	// (0x00016e33) main_welc_pane

0xefe5,	// (0x00025ad0) main_welc_body_pane_ParamLimits

0xefe5,	// (0x00025ad0) main_welc_body_pane

0xeffe,	// (0x00025ae9) main_welc_opti_pane_ParamLimits

0xeffe,	// (0x00025ae9) main_welc_opti_pane

0xf02b,	// (0x00025b16) main_welc_pane_t1_ParamLimits

0xf02b,	// (0x00025b16) main_welc_pane_t1

0xf043,	// (0x00025b2e) main_welc_body_row_pane_ParamLimits

0xf043,	// (0x00025b2e) main_welc_body_row_pane

0x3c25,	// (0x0001a710) main_welc_opti_row_pane_ParamLimits

0x3c25,	// (0x0001a710) main_welc_opti_row_pane

0x5e1d,	// (0x0001c908) main_welc_opti_row_pane_g1

0xf058,	// (0x00025b43) main_welc_opti_row_pane_t1

0x5e25,	// (0x0001c910) main_welc_body_row_pane_t1

0x5b27,	// (0x0001c612) popup_notif_wgt_heading_pane

0x5b41,	// (0x0001c62c) aid_size_list_notif_wgt_del_ParamLimits

0x5b4e,	// (0x0001c639) list_notif_wgt_row_pane_g1_ParamLimits

0x5b5a,	// (0x0001c645) list_notif_wgt_row_pane_g2_ParamLimits

0x5b6e,	// (0x0001c659) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb7,	// (0x000269a2) list_notif_wgt_row_pane_g_ParamLimits

0x5b7b,	// (0x0001c666) list_notif_wgt_row_pane_t1_ParamLimits

0x5b91,	// (0x0001c67c) list_notif_wgt_row_pane_t2_ParamLimits

0x5ba3,	// (0x0001c68e) list_notif_wgt_row_pane_t3_ParamLimits

0xfebe,	// (0x000269a9) list_notif_wgt_row_pane_t_ParamLimits

0xea6f,	// (0x0002555a) listrow_wgtman_pane_g1_ParamLimits

0xea7c,	// (0x00025567) listrow_wgtman_pane_g2_ParamLimits

0xfee7,	// (0x000269d2) listrow_wgtman_pane_g_ParamLimits

0xea94,	// (0x0002557f) listrow_wgtman_pane_t1_ParamLimits

0xeaac,	// (0x00025597) listrow_wgtman_pane_t2_ParamLimits

0xfeec,	// (0x000269d7) listrow_wgtman_pane_t_ParamLimits

0xead2,	// (0x000255bd) wait_bar_pane_cp09_ParamLimits

0x0348,	// (0x00016e33) bg_popup_heading_pane_cp02

0x5e34,	// (0x0001c91f) popup_notif_wgt_heading_pane_g1

0x5e3c,	// (0x0001c927) popup_notif_wgt_heading_pane_t1

0x2d49,	// (0x00019834) main_vids_pane

0x0348,	// (0x00016e33) vids_listscroll_pane

0xf067,	// (0x00025b52) scroll_pane_cp040

0x0348,	// (0x00016e33) vids_list_pane

0xf070,	// (0x00025b5b) vids_list_double_pane_ParamLimits

0xf070,	// (0x00025b5b) vids_list_double_pane

0xf081,	// (0x00025b6c) vids_list_double_pane_g1

0xf08a,	// (0x00025b75) vids_list_double_pane_t1

0xf09a,	// (0x00025b85) vids_list_double_pane_t2

0x0001,

0xff70,	// (0x00026a5b) vids_list_double_pane_t

0x743d,	// (0x0001df28) main_ncimui_pane_ParamLimits

0xd50c,	// (0x00023ff7) main_ncimui_pane_g1_ParamLimits

0xd518,	// (0x00024003) main_ncimui_pane_g2_ParamLimits

0xd518,	// (0x00024003) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x000266e8) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x000266e8) main_ncimui_pane_g

0xf013,	// (0x00025afe) main_welc_pane_g1_ParamLimits

0xf013,	// (0x00025afe) main_welc_pane_g1

0xf01f,	// (0x00025b0a) main_welc_pane_g2_ParamLimits

0xf01f,	// (0x00025b0a) main_welc_pane_g2

0x0001,

0xff6b,	// (0x00026a56) main_welc_pane_g_ParamLimits

0xff6b,	// (0x00026a56) main_welc_pane_g

0x0a15,	// (0x00017500) listscroll_mce_pane_ParamLimits

0xa418,	// (0x00020f03) wait_bar_pane_cp10

0x2d2f,	// (0x0001981a) main_cale_day_pane_ParamLimits

0x2d2f,	// (0x0001981a) main_cale_week_pane_ParamLimits

0x0a15,	// (0x00017500) main_messa_pane_ParamLimits

0xbc74,	// (0x0002275f) main_clock2_btn_pane_ParamLimits

0xbc74,	// (0x0002275f) main_clock2_btn_pane

0x367a,	// (0x0001a165) main_clock2_btn_pane_cp01_ParamLimits

0x367a,	// (0x0001a165) main_clock2_btn_pane_cp01

0x5738,	// (0x0001c223) list_cale_mrui_pane_ParamLimits

0x5bd7,	// (0x0001c6c2) main_cf0_pane_g2

0x0001,

0xfec5,	// (0x000269b0) main_cf0_pane_g

0xec37,	// (0x00025722) area_left_week_number_pane_ParamLimits

0xec48,	// (0x00025733) area_top_day_name_pane_ParamLimits

0xec54,	// (0x0002573f) frame_month_view_pane_ParamLimits

0x5d0a,	// (0x0001c7f5) grid_month_view_pane_ParamLimits

0x5d18,	// (0x0001c803) frm_month_g1_ParamLimits

0xecc0,	// (0x000257ab) frm_month_g2_ParamLimits

0xeccf,	// (0x000257ba) frm_month_g3_ParamLimits

0xecde,	// (0x000257c9) frm_month_g4_ParamLimits

0xeced,	// (0x000257d8) frm_month_g5_ParamLimits

0xecfc,	// (0x000257e7) frm_month_g6_ParamLimits

0xed0b,	// (0x000257f6) frm_month_g7_ParamLimits

0x5d25,	// (0x0001c810) frm_month_g8_ParamLimits

0xed1a,	// (0x00025805) frm_month_g9_ParamLimits

0xed27,	// (0x00025812) frm_month_g10_ParamLimits

0xed34,	// (0x0002581f) frm_month_g11_ParamLimits

0xed41,	// (0x0002582c) frm_month_g12_ParamLimits

0xed4e,	// (0x00025839) frm_month_g13_ParamLimits

0xed5b,	// (0x00025846) frm_month_g14_ParamLimits

0xed68,	// (0x00025853) frm_month_g15_ParamLimits

0xed75,	// (0x00025860) frm_month_g16_ParamLimits

0xff16,	// (0x00026a01) frm_month_g_ParamLimits

0x5d32,	// (0x0001c81d) cell_top_day_name_pane_t1_ParamLimits

0xed82,	// (0x0002586d) cell_area_left_week_number_pane_g1_ParamLimits

0xed91,	// (0x0002587c) cell_area_left_week_number_pane_t1_ParamLimits

0x347e,	// (0x00019f69) cell_month_view_pane_g1_ParamLimits

0xeda7,	// (0x00025892) cell_month_view_pane_t1_ParamLimits

0x0a0d,	// (0x000174f8) main_clock2_btn_pane_g1

0x5e4a,	// (0x0001c935) main_clock2_btn_pane_t1

0x039b,	// (0x00016e86) listscroll_cmail_pane_ParamLimits

0x52b9,	// (0x0001bda4) main_sp_fs_email_pane_g1_ParamLimits

0x52c5,	// (0x0001bdb0) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x000267e3) main_sp_fs_email_pane_g_ParamLimits

0x5862,	// (0x0001c34d) list_recal_day_pane_ParamLimits

0x5873,	// (0x0001c35e) mian_recal_day_pane_t1

0xdebb,	// (0x000249a6) list_single_dyc_row_text_pane_t4_ParamLimits

0xdebb,	// (0x000249a6) list_single_dyc_row_text_pane_t4

0xdef2,	// (0x000249dd) list_single_dyc_row_text_pane_t5_ParamLimits

0xdef2,	// (0x000249dd) list_single_dyc_row_text_pane_t5

0x5356,	// (0x0001be41) list_single_dyc_row_text_pane_t6_ParamLimits

0x5356,	// (0x0001be41) list_single_dyc_row_text_pane_t6

0x9fb2,	// (0x00020a9d) aid_mgn_list_cale_time_pane

0x743d,	// (0x0001df28) main_gallery2_pane_ParamLimits

0x368e,	// (0x0001a179) main_clock2_pane_cp01_t1

0x369c,	// (0x0001a187) main_clock2_pane_cp01_t3

0x0001,

0xf7d3,	// (0x000262be) main_clock2_pane_cp01_t

0x8ae9,	// (0x0001f5d4) cale_week_scroll_pane_g16_ParamLimits

0x8ae9,	// (0x0001f5d4) cale_week_scroll_pane_g16

0x0d6f,	// (0x0001785a) vorec_slider_pane

0xefcf,	// (0x00025aba) vidtel_button_pane_t1_ParamLimits

0x3557,	// (0x0001a042) main_fs_bigclock_clock_pane_g1_ParamLimits

0xe6f4,	// (0x000251df) main_fs_bigclock_clock_pane_g2_ParamLimits

0xe701,	// (0x000251ec) main_fs_bigclock_clock_pane_g3_ParamLimits

0xe701,	// (0x000251ec) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe73,	// (0x0002695e) main_fs_bigclock_clock_pane_g_ParamLimits

0xe70d,	// (0x000251f8) main_fs_bigclock_clock_pane_t1_ParamLimits

0xe71f,	// (0x0002520a) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe7c,	// (0x00026967) main_fs_bigclock_clock_pane_t_ParamLimits

0xb5a0,	// (0x0002208b) main_mup3_lyrics_pane_ParamLimits

0xb5a0,	// (0x0002208b) main_mup3_lyrics_pane

0xf0a8,	// (0x00025b93) main_mup3_lyrics_pane_t1_ParamLimits

0xf0a8,	// (0x00025b93) main_mup3_lyrics_pane_t1

0x797d,	// (0x0001e468) aid_main_mp4_pane_t1_area

0x797d,	// (0x0001e468) aid_main_mp4_pane_t2_area

0x7a68,	// (0x0001e553) main_mp4_pane_g7_ParamLimits

0x7a68,	// (0x0001e553) main_mp4_pane_g7

0x7a74,	// (0x0001e55f) main_mp4_pane_g8_ParamLimits

0x7a74,	// (0x0001e55f) main_mp4_pane_g8

0xc19c,	// (0x00022c87) aid_call6_pane_g1_size

0xef0a,	// (0x000259f5) list_double_large_graphic_phob2_other_pane_ParamLimits

0xef0a,	// (0x000259f5) list_double_large_graphic_phob2_other_pane

0x165d,	// (0x00018148) list_double_large_graphic_phob2_other_pane_g1

0x0348,	// (0x00016e33) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Normal
