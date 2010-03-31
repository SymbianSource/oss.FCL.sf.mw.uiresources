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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0003e0e9 };

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
0x1f91,	// (0x0004007a) Screen

0x1f9d,	// (0x00040086) application_window

0x1fdd,	// (0x000400c6) area_bottom_pane_ParamLimits

0x1fdd,	// (0x000400c6) area_bottom_pane

0x2012,	// (0x000400fb) area_top_pane_ParamLimits

0x2012,	// (0x000400fb) area_top_pane

0xa1b1,	// (0x0004829a) call_video_uplink_pane_ParamLimits

0xa1b1,	// (0x0004829a) call_video_uplink_pane

0x20a1,	// (0x0004018a) main_pane_ParamLimits

0x20a1,	// (0x0004018a) main_pane

0xc8b1,	// (0x0004a99a) context_pane

0x576e,	// (0x00043857) navi_pane

0x5792,	// (0x0004387b) popup_cale_events_window_ParamLimits

0x5792,	// (0x0004387b) popup_cale_events_window

0xc8c4,	// (0x0004a9ad) popup_mup_playback_window

0x57aa,	// (0x00043893) signal_pane

0xa902,	// (0x000489eb) main_browser_pane

0xb434,	// (0x0004951d) main_burst_pane

0x5620,	// (0x00043709) main_calc_pane

0xc854,	// (0x0004a93d) main_cale_day_pane

0x27bb,	// (0x000408a4) main_cale_month_pane

0xc854,	// (0x0004a93d) main_cale_week_pane

0xb434,	// (0x0004951d) main_call_pane

0xa5e2,	// (0x000486cb) main_call_poc_pane

0xb434,	// (0x0004951d) main_camera_pane

0xb434,	// (0x0004951d) main_chi_dic_pane

0xb2d6,	// (0x000493bf) main_clock_pane

0xa5e2,	// (0x000486cb) main_fmradio_pane

0xb434,	// (0x0004951d) main_graph_messa_pane

0xa5e2,	// (0x000486cb) main_help_pane

0xa902,	// (0x000489eb) main_im_pane

0xa83d,	// (0x00048926) main_image_pane_ParamLimits

0xa83d,	// (0x00048926) main_image_pane

0xa5e2,	// (0x000486cb) main_location2_pane

0xb434,	// (0x0004951d) main_location_pane

0xa83d,	// (0x00048926) main_messa_pane

0xa5e2,	// (0x000486cb) main_mp2_pane

0xb434,	// (0x0004951d) main_mp_pane

0xa5e2,	// (0x000486cb) main_msg_pane

0xa5e2,	// (0x000486cb) main_mup_eq_pane

0xa5e2,	// (0x000486cb) main_mup_pane

0xa902,	// (0x000489eb) main_notes_pane

0xa5e2,	// (0x000486cb) main_pec_pane

0xa5e2,	// (0x000486cb) main_phob_pane

0xa5e2,	// (0x000486cb) main_pinb_pane

0xa5e2,	// (0x000486cb) main_postcard_pane

0xa5e2,	// (0x000486cb) main_qdial_pane

0xb434,	// (0x0004951d) main_skin_pane

0xa5e2,	// (0x000486cb) main_smil2_pane

0xb434,	// (0x0004951d) main_smil_pane

0xb434,	// (0x0004951d) main_video_pane

0xb434,	// (0x0004951d) main_video_tele_pane

0xa83d,	// (0x00048926) main_viewer_pane_ParamLimits

0xa83d,	// (0x00048926) main_viewer_pane

0xb434,	// (0x0004951d) main_vorec_pane

0x5658,	// (0x00043741) popup_blid_sat_info_window_ParamLimits

0x5658,	// (0x00043741) popup_blid_sat_info_window

0x5672,	// (0x0004375b) popup_dyc_status_message_window_ParamLimits

0x5672,	// (0x0004375b) popup_dyc_status_message_window

0x5682,	// (0x0004376b) popup_grid_large_graphic_window_ParamLimits

0x5682,	// (0x0004376b) popup_grid_large_graphic_window

0x56fa,	// (0x000437e3) popup_loc_request_window_ParamLimits

0x56fa,	// (0x000437e3) popup_loc_request_window

0x5742,	// (0x0004382b) popup_wml_address_window_ParamLimits

0x5742,	// (0x0004382b) popup_wml_address_window

0x54f8,	// (0x000435e1) call_muted_g1

0x51b7,	// (0x000432a0) popup_call_audio_conf_window_ParamLimits

0x51b7,	// (0x000432a0) popup_call_audio_conf_window

0x5508,	// (0x000435f1) popup_call_audio_first_window_ParamLimits

0x5508,	// (0x000435f1) popup_call_audio_first_window

0x5548,	// (0x00043631) popup_call_audio_in_window_ParamLimits

0x5548,	// (0x00043631) popup_call_audio_in_window

0x556c,	// (0x00043655) popup_call_audio_out_window_ParamLimits

0x556c,	// (0x00043655) popup_call_audio_out_window

0x558e,	// (0x00043677) popup_call_audio_second_window_ParamLimits

0x558e,	// (0x00043677) popup_call_audio_second_window

0x55be,	// (0x000436a7) popup_call_audio_wait_window_ParamLimits

0x55be,	// (0x000436a7) popup_call_audio_wait_window

0x55df,	// (0x000436c8) popup_number_entry_window_ParamLimits

0x55df,	// (0x000436c8) popup_number_entry_window

0xa1cf,	// (0x000482b8) bg_popup_call_pane_cp05_ParamLimits

0xa1cf,	// (0x000482b8) bg_popup_call_pane_cp05

0xa1ef,	// (0x000482d8) popup_number_entry_window_t1

0xa202,	// (0x000482eb) popup_number_entry_window_t2

0xa214,	// (0x000482fd) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0004d1b6) popup_number_entry_window_t

0xa226,	// (0x0004830f) text_title_cp2

0xa239,	// (0x00048322) bg_popup_call_pane_cp_ParamLimits

0xa239,	// (0x00048322) bg_popup_call_pane_cp

0xa247,	// (0x00048330) call_thumbnail_pane

0xa24f,	// (0x00048338) popup_call_audio_in_window_g1_ParamLimits

0xa24f,	// (0x00048338) popup_call_audio_in_window_g1

0xa25b,	// (0x00048344) popup_call_audio_in_window_g2_ParamLimits

0xa25b,	// (0x00048344) popup_call_audio_in_window_g2

0xa267,	// (0x00048350) popup_call_audio_in_window_g3_ParamLimits

0xa267,	// (0x00048350) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0004d1bf) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0004d1bf) popup_call_audio_in_window_g

0xa273,	// (0x0004835c) popup_call_audio_in_window_t1_ParamLimits

0xa273,	// (0x0004835c) popup_call_audio_in_window_t1

0xa28f,	// (0x00048378) popup_call_audio_in_window_t2_ParamLimits

0xa28f,	// (0x00048378) popup_call_audio_in_window_t2

0xa2ab,	// (0x00048394) popup_call_audio_in_window_t3_ParamLimits

0xa2ab,	// (0x00048394) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0004d1c6) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0004d1c6) popup_call_audio_in_window_t

0xa239,	// (0x00048322) bg_popup_call_pane_cp01_ParamLimits

0xa239,	// (0x00048322) bg_popup_call_pane_cp01

0xa247,	// (0x00048330) call_thumbnail_pane_cp02

0xa2be,	// (0x000483a7) call_type_pane_cp022

0xa2c6,	// (0x000483af) popup_call_audio_out_window_g1_ParamLimits

0xa2c6,	// (0x000483af) popup_call_audio_out_window_g1

0xa2d8,	// (0x000483c1) popup_call_audio_out_window_g2_ParamLimits

0xa2d8,	// (0x000483c1) popup_call_audio_out_window_g2

0xa2e4,	// (0x000483cd) popup_call_audio_out_window_g3_ParamLimits

0xa2e4,	// (0x000483cd) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0004d1cd) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0004d1cd) popup_call_audio_out_window_g

0xa2f6,	// (0x000483df) popup_call_audio_out_window_t1_ParamLimits

0xa2f6,	// (0x000483df) popup_call_audio_out_window_t1

0xa30e,	// (0x000483f7) popup_call_audio_out_window_t2_ParamLimits

0xa30e,	// (0x000483f7) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0004d1d4) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0004d1d4) popup_call_audio_out_window_t

0xa323,	// (0x0004840c) bg_popup_call_pane_ParamLimits

0xa323,	// (0x0004840c) bg_popup_call_pane

0x22a5,	// (0x0004038e) call_thumbnail_pane_cp_ParamLimits

0x22a5,	// (0x0004038e) call_thumbnail_pane_cp

0xa3a7,	// (0x00048490) call_type_pane_cp01_ParamLimits

0xa3a7,	// (0x00048490) call_type_pane_cp01

0xa3eb,	// (0x000484d4) popup_call_audio_first_window_g1_ParamLimits

0xa3eb,	// (0x000484d4) popup_call_audio_first_window_g1

0xa437,	// (0x00048520) popup_call_audio_first_window_g2_ParamLimits

0xa437,	// (0x00048520) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0004d1d9) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0004d1d9) popup_call_audio_first_window_g

0xa47b,	// (0x00048564) popup_call_audio_first_window_t1_ParamLimits

0xa47b,	// (0x00048564) popup_call_audio_first_window_t1

0xa527,	// (0x00048610) popup_call_audio_first_window_t4_ParamLimits

0xa527,	// (0x00048610) popup_call_audio_first_window_t4

0xa5b3,	// (0x0004869c) popup_call_audio_first_window_t5_ParamLimits

0xa5b3,	// (0x0004869c) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0004d1de) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0004d1de) popup_call_audio_first_window_t

0xa5e2,	// (0x000486cb) bg_popup_call_pane_cp02

0xa5ec,	// (0x000486d5) call_type_pane_cp023

0xa5f4,	// (0x000486dd) popup_call_audio_wait_window_g1

0xa5fc,	// (0x000486e5) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0004d1e5) popup_call_audio_wait_window_g

0xa604,	// (0x000486ed) popup_call_audio_wait_window_t3

0xa612,	// (0x000486fb) bg_popup_call_pane_cp03_ParamLimits

0xa612,	// (0x000486fb) bg_popup_call_pane_cp03

0xa672,	// (0x0004875b) call_thumbnail_pane_cp011_ParamLimits

0xa672,	// (0x0004875b) call_thumbnail_pane_cp011

0xa67e,	// (0x00048767) call_type_pane_cp034_ParamLimits

0xa67e,	// (0x00048767) call_type_pane_cp034

0xa6ba,	// (0x000487a3) popup_call_audio_second_window_g1_ParamLimits

0xa6ba,	// (0x000487a3) popup_call_audio_second_window_g1

0xa6f6,	// (0x000487df) popup_call_audio_second_window_g2_ParamLimits

0xa6f6,	// (0x000487df) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0004d1ea) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0004d1ea) popup_call_audio_second_window_g

0xa732,	// (0x0004881b) popup_call_audio_second_window_t1_ParamLimits

0xa732,	// (0x0004881b) popup_call_audio_second_window_t1

0xa7b3,	// (0x0004889c) popup_call_audio_second_window_t2_ParamLimits

0xa7b3,	// (0x0004889c) popup_call_audio_second_window_t2

0xa7e9,	// (0x000488d2) popup_call_audio_second_window_t3_ParamLimits

0xa7e9,	// (0x000488d2) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0004d1ef) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0004d1ef) popup_call_audio_second_window_t

0xa5e2,	// (0x000486cb) bg_popup_call_pane_cp04

0xa81f,	// (0x00048908) list_conf_pane

0xa827,	// (0x00048910) popup_call_audio_conf_window_t1

0xa835,	// (0x0004891e) call_thumbnail_pane_g1

0xa83d,	// (0x00048926) bg_pinb_pane_ParamLimits

0xa83d,	// (0x00048926) bg_pinb_pane

0xa84b,	// (0x00048934) find_pinb_pane

0xa854,	// (0x0004893d) listscroll_pinb_pane_ParamLimits

0xa854,	// (0x0004893d) listscroll_pinb_pane

0xa863,	// (0x0004894c) pinb_bg_pane_g1

0x22c9,	// (0x000403b2) pinb_bg_pane_g2

0x22d5,	// (0x000403be) pinb_bg_pane_g3

0x22e1,	// (0x000403ca) pinb_bg_pane_g4

0x22ed,	// (0x000403d6) pinb_bg_pane_g5

0x22f9,	// (0x000403e2) pinb_bg_pane_g6

0x2304,	// (0x000403ed) pinb_bg_pane_g7

0x230f,	// (0x000403f8) pinb_bg_pane_g8

0x231a,	// (0x00040403) pinb_bg_pane_g9

0x2324,	// (0x0004040d) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0004d1f6) pinb_bg_pane_g

0x2341,	// (0x0004042a) grid_pinb_pane

0x234c,	// (0x00040435) list_pinb_pane

0x2357,	// (0x00040440) scroll_pane_cp01_ParamLimits

0x2357,	// (0x00040440) scroll_pane_cp01

0xa86d,	// (0x00048956) find_pinb_pane_g1_ParamLimits

0xa86d,	// (0x00048956) find_pinb_pane_g1

0xa885,	// (0x0004896e) find_pinb_pane_t1

0xa897,	// (0x00048980) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0004d210) find_pinb_pane_t

0xa8ac,	// (0x00048995) input_focus_pane_cp01_ParamLimits

0xa8ac,	// (0x00048995) input_focus_pane_cp01

0x2369,	// (0x00040452) cell_pinb_pane_ParamLimits

0x2369,	// (0x00040452) cell_pinb_pane

0x238e,	// (0x00040477) cell_pinb_pane_g1_ParamLimits

0x238e,	// (0x00040477) cell_pinb_pane_g1

0x23a3,	// (0x0004048c) cell_pinb_pane_g2_ParamLimits

0x23a3,	// (0x0004048c) cell_pinb_pane_g2

0xa8b8,	// (0x000489a1) cell_pinb_pane_g3_ParamLimits

0xa8b8,	// (0x000489a1) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0004d215) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0004d215) cell_pinb_pane_g

0xa5e2,	// (0x000486cb) grid_highlight_pane_cp01

0x23af,	// (0x00040498) list_pinb_item_pane_ParamLimits

0x23af,	// (0x00040498) list_pinb_item_pane

0xa5e2,	// (0x000486cb) list_highlight_pane_cp02

0x23cd,	// (0x000404b6) list_pinb_item_pane_g1_ParamLimits

0x23cd,	// (0x000404b6) list_pinb_item_pane_g1

0x23da,	// (0x000404c3) list_pinb_item_pane_g2_ParamLimits

0x23da,	// (0x000404c3) list_pinb_item_pane_g2

0x23e6,	// (0x000404cf) list_pinb_item_pane_g3_ParamLimits

0x23e6,	// (0x000404cf) list_pinb_item_pane_g3

0x23f7,	// (0x000404e0) list_pinb_item_pane_g4_ParamLimits

0x23f7,	// (0x000404e0) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0004d21c) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0004d21c) list_pinb_item_pane_g

0x2403,	// (0x000404ec) list_pinb_item_pane_t1_ParamLimits

0x2403,	// (0x000404ec) list_pinb_item_pane_t1

0x2434,	// (0x0004051d) calc_display_pane

0x2452,	// (0x0004053b) calc_paper_pane

0x246e,	// (0x00040557) grid_calc_pane

0xa5e2,	// (0x000486cb) bg_list_pane_cp01

0x249a,	// (0x00040583) clock_g1

0x24a2,	// (0x0004058b) clock_g2

0x0001,

0xf13c,	// (0x0004d225) clock_g

0x24ac,	// (0x00040595) clock_t1_ParamLimits

0x24ac,	// (0x00040595) clock_t1

0x24c1,	// (0x000405aa) clock_t2_ParamLimits

0x24c1,	// (0x000405aa) clock_t2

0x24d3,	// (0x000405bc) clock_t3_ParamLimits

0x24d3,	// (0x000405bc) clock_t3

0x24e5,	// (0x000405ce) clock_t4_ParamLimits

0x24e5,	// (0x000405ce) clock_t4

0x24f7,	// (0x000405e0) clock_t5_ParamLimits

0x24f7,	// (0x000405e0) clock_t5

0x250c,	// (0x000405f5) clock_t6_ParamLimits

0x250c,	// (0x000405f5) clock_t6

0x251e,	// (0x00040607) clock_t7_ParamLimits

0x251e,	// (0x00040607) clock_t7

0x2530,	// (0x00040619) clock_t8_ParamLimits

0x2530,	// (0x00040619) clock_t8

0x2546,	// (0x0004062f) clock_t9_ParamLimits

0x2546,	// (0x0004062f) clock_t9

0x0008,

0xf141,	// (0x0004d22a) clock_t_ParamLimits

0xf141,	// (0x0004d22a) clock_t

0xa8c4,	// (0x000489ad) popup_clock_analogue_window_cp02

0xa8c4,	// (0x000489ad) popup_clock_digital_window_cp01

0xa8cc,	// (0x000489b5) listscroll_help_pane

0xa5e2,	// (0x000486cb) phob_pre_status_pane

0xa8d6,	// (0x000489bf) grid_qdial_pane

0xa83d,	// (0x00048926) listscroll_mce_pane

0xa83d,	// (0x00048926) bg_notes_pane

0xa8e0,	// (0x000489c9) list_notes_pane

0x255c,	// (0x00040645) scroll_pane_cp06

0xa8ee,	// (0x000489d7) bg_calc_paper_pane

0x256b,	// (0x00040654) list_calc_pane

0xa902,	// (0x000489eb) bg_calc_display_pane

0x2585,	// (0x0004066e) calc_display_pane_t1

0x259a,	// (0x00040683) calc_display_pane_t2

0x25af,	// (0x00040698) calc_display_pane_t3

0x0002,

0xf154,	// (0x0004d23d) calc_display_pane_t

0x25c1,	// (0x000406aa) cell_calc_pane_ParamLimits

0x25c1,	// (0x000406aa) cell_calc_pane

0xa90e,	// (0x000489f7) bg_calc_paper_pane_g1

0xa91a,	// (0x00048a03) bg_calc_paper_pane_g2

0xa926,	// (0x00048a0f) bg_calc_paper_pane_g3

0xa96c,	// (0x00048a55) bg_calc_paper_pane_g4

0xa932,	// (0x00048a1b) bg_calc_paper_pane_g5

0x25f0,	// (0x000406d9) bg_calc_paper_pane_g6

0x2601,	// (0x000406ea) bg_calc_paper_pane_g7

0x2612,	// (0x000406fb) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0004d244) bg_calc_paper_pane_g

0x2625,	// (0x0004070e) calc_bg_paper_pane_g9

0x2638,	// (0x00040721) list_calc_item_pane_ParamLimits

0x2638,	// (0x00040721) list_calc_item_pane

0xa978,	// (0x00048a61) list_calc_item_pane_g1

0x2659,	// (0x00040742) list_calc_item_pane_t1_ParamLimits

0x2659,	// (0x00040742) list_calc_item_pane_t1

0x266b,	// (0x00040754) list_calc_item_pane_t2_ParamLimits

0x266b,	// (0x00040754) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0004d255) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0004d255) list_calc_item_pane_t

0xa985,	// (0x00048a6e) cell_calc_pane_g1

0xa98f,	// (0x00048a78) grid_highlight_pane_cp02

0xa9b1,	// (0x00048a9a) bg_calc_display_pane_g1

0x269b,	// (0x00040784) bg_calc_display_pane_g2

0xa9ba,	// (0x00048aa3) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0004d25f) bg_calc_display_pane_g

0x26a5,	// (0x0004078e) cell_qdial_pane_ParamLimits

0x26a5,	// (0x0004078e) cell_qdial_pane

0x26bb,	// (0x000407a4) cell_qdial_pane_g1_ParamLimits

0x26bb,	// (0x000407a4) cell_qdial_pane_g1

0x26c8,	// (0x000407b1) cell_qdial_pane_g2_ParamLimits

0x26c8,	// (0x000407b1) cell_qdial_pane_g2

0xa9c3,	// (0x00048aac) cell_qdial_pane_g3_ParamLimits

0xa9c3,	// (0x00048aac) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0004d266) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0004d266) cell_qdial_pane_g

0x26e6,	// (0x000407cf) cell_qdial_pane_t1_ParamLimits

0x26e6,	// (0x000407cf) cell_qdial_pane_t1

0x26fe,	// (0x000407e7) cell_qdial_pane_t2_ParamLimits

0x26fe,	// (0x000407e7) cell_qdial_pane_t2

0x2711,	// (0x000407fa) cell_qdial_pane_t3_ParamLimits

0x2711,	// (0x000407fa) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0004d26f) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0004d26f) cell_qdial_pane_t

0xa5e2,	// (0x000486cb) grid_highlight_pane_cp04

0xa9cf,	// (0x00048ab8) thumbnail_qdial_pane_ParamLimits

0xa9cf,	// (0x00048ab8) thumbnail_qdial_pane

0xaa2b,	// (0x00048b14) list_help_pane

0xaa34,	// (0x00048b1d) scroll_pane_cp02

0x2724,	// (0x0004080d) help_list_pane_t1_ParamLimits

0x2724,	// (0x0004080d) help_list_pane_t1

0x274b,	// (0x00040834) bg_notes_pane_g2

0x2753,	// (0x0004083c) bg_notes_pane_g3

0x275b,	// (0x00040844) notes_bg_pane_g1

0x2763,	// (0x0004084c) notes_bg_pane_g4

0x276b,	// (0x00040854) notes_bg_pane_g5

0x2773,	// (0x0004085c) notes_bg_pane_g6

0x277b,	// (0x00040864) notes_bg_pane_g7

0x2783,	// (0x0004086c) notes_bg_pane_g8

0x278b,	// (0x00040874) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0004d28d) notes_bg_pane_g

0x2793,	// (0x0004087c) list_notes_text_pane_ParamLimits

0x2793,	// (0x0004087c) list_notes_text_pane

0xaa3d,	// (0x00048b26) list_notes_text_pane_g1

0x0bd3,	// (0x0003ecbc) list_notes_text_pane_t1

0x27bb,	// (0x000408a4) listscroll_cale_week_pane

0x27f1,	// (0x000408da) bg_cale_heading_pane

0xaa57,	// (0x00048b40) bg_cale_pane_cp01

0x281a,	// (0x00040903) cale_week_corner_pane

0x2839,	// (0x00040922) cale_week_day_heading_pane

0x2867,	// (0x00040950) cale_week_scroll_pane_g1

0x288b,	// (0x00040974) cale_week_scroll_pane_g2

0x28a3,	// (0x0004098c) cale_week_scroll_pane_g3

0x28bb,	// (0x000409a4) cale_week_scroll_pane_g4

0x28d3,	// (0x000409bc) cale_week_scroll_pane_g5

0x28eb,	// (0x000409d4) cale_week_scroll_pane_g6

0x290b,	// (0x000409f4) cale_week_scroll_pane_g7

0x292b,	// (0x00040a14) cale_week_scroll_pane_g8

0x294b,	// (0x00040a34) cale_week_scroll_pane_g9

0x2968,	// (0x00040a51) cale_week_scroll_pane_g10

0x2985,	// (0x00040a6e) cale_week_scroll_pane_g11

0x29a2,	// (0x00040a8b) cale_week_scroll_pane_g12

0x29bf,	// (0x00040aa8) cale_week_scroll_pane_g13

0x29e4,	// (0x00040acd) cale_week_scroll_pane_g14

0x2a0d,	// (0x00040af6) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0004d29c) cale_week_scroll_pane_g

0x2a36,	// (0x00040b1f) cale_week_time_pane

0x2a56,	// (0x00040b3f) grid_cale_week_pane

0xaa87,	// (0x00048b70) scroll_pane_cp08

0x2a89,	// (0x00040b72) cell_cale_week_pane_ParamLimits

0x2a89,	// (0x00040b72) cell_cale_week_pane

0x2b14,	// (0x00040bfd) cale_week_day_heading_pane_t1

0x2b5c,	// (0x00040c45) cale_week_day_heading_pane_t2

0x2ba9,	// (0x00040c92) cale_week_day_heading_pane_t3

0x2bf6,	// (0x00040cdf) cale_week_day_heading_pane_t4

0x2c43,	// (0x00040d2c) cale_week_day_heading_pane_t5

0x2c90,	// (0x00040d79) cale_week_day_heading_pane_t6

0x2cdd,	// (0x00040dc6) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0004d2bb) cale_week_day_heading_pane_t

0xaaa9,	// (0x00048b92) bg_cale_side_pane

0x2d25,	// (0x00040e0e) cale_week_time_pane_t1

0x2d69,	// (0x00040e52) cale_week_time_pane_t2

0x2dad,	// (0x00040e96) cale_week_time_pane_t3

0x2df1,	// (0x00040eda) cale_week_time_pane_t4

0x2e35,	// (0x00040f1e) cale_week_time_pane_t5

0x2e79,	// (0x00040f62) cale_week_time_pane_t6

0x2ebd,	// (0x00040fa6) cale_week_time_pane_t7

0x2f09,	// (0x00040ff2) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0004d2ca) cale_week_time_pane_t

0x2f57,	// (0x00041040) cell_cale_week_pane_g2

0x2f76,	// (0x0004105f) cell_cale_week_pane_g3_ParamLimits

0x2f76,	// (0x0004105f) cell_cale_week_pane_g3

0xaab7,	// (0x00048ba0) grid_highlight_pane_cp07

0xaabf,	// (0x00048ba8) listscroll_gms_pane

0xaac9,	// (0x00048bb2) grid_gms_pane

0xaad2,	// (0x00048bbb) listscroll_gms_pane_g1

0xaada,	// (0x00048bc3) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0004d2db) listscroll_gms_pane_g

0x2f8e,	// (0x00041077) scroll_pane_cp010

0x2f99,	// (0x00041082) cell_gms_pane_ParamLimits

0x2f99,	// (0x00041082) cell_gms_pane

0x2fac,	// (0x00041095) cell_gms_pane_g1

0xaae2,	// (0x00048bcb) cell_gms_pane_g2

0xaaea,	// (0x00048bd3) cell_gms_pane_g3

0xaaf3,	// (0x00048bdc) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0004d2e0) cell_gms_pane_g

0xaafc,	// (0x00048be5) grid_highlight_pane_cp09

0x54a0,	// (0x00043589) phob_pre_status_pane_g1

0x54a8,	// (0x00043591) phob_pre_status_pane_g2

0x54b0,	// (0x00043599) phob_pre_status_pane_g3

0x54b8,	// (0x000435a1) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0004d6cf) phob_pre_status_pane_g

0x54c8,	// (0x000435b1) phob_pre_status_pane_t1

0x54d8,	// (0x000435c1) phob_pre_status_pane_t2

0x54e8,	// (0x000435d1) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0004d6da) phob_pre_status_pane_t

0xa5e2,	// (0x000486cb) bg_list_pane_cp05

0x2fbc,	// (0x000410a5) grid_vorec_pane

0x2fc8,	// (0x000410b1) vorec_t1

0x2fd6,	// (0x000410bf) vorec_t2

0x2fe4,	// (0x000410cd) vorec_t3

0x2ff2,	// (0x000410db) vorec_t4

0x3000,	// (0x000410e9) vorec_t5

0x300e,	// (0x000410f7) vorec_t6

0x0006,

0xf200,	// (0x0004d2e9) vorec_t

0x302a,	// (0x00041113) wait_bar_pane_cp01

0x3032,	// (0x0004111b) cell_vorec_pane_ParamLimits

0x3032,	// (0x0004111b) cell_vorec_pane

0x3047,	// (0x00041130) cell_vorec_pane_g1

0xa5e2,	// (0x000486cb) grid_highlight_pane_cp05

0x305f,	// (0x00041148) cams_zoom_pane

0x306b,	// (0x00041154) image_vga_pane

0x307a,	// (0x00041163) main_camera_pane_g1

0x3088,	// (0x00041171) main_camera_pane_g2

0x3094,	// (0x0004117d) main_camera_pane_g3

0x30a2,	// (0x0004118b) main_camera_pane_g4

0x30b0,	// (0x00041199) main_camera_pane_g5

0x30be,	// (0x000411a7) main_camera_pane_g6

0x30cc,	// (0x000411b5) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0004d2f8) main_camera_pane_g

0x30da,	// (0x000411c3) main_camera_pane_t1

0x30ec,	// (0x000411d5) main_camera_pane_t2

0x0001,

0xf220,	// (0x0004d309) main_camera_pane_t

0x310f,	// (0x000411f8) cams_zoom_pane_cp_ParamLimits

0x310f,	// (0x000411f8) cams_zoom_pane_cp

0x3133,	// (0x0004121c) image_cif_pane_ParamLimits

0x3133,	// (0x0004121c) image_cif_pane

0x3151,	// (0x0004123a) image_subqcif_pane

0x315b,	// (0x00041244) main_video_pane_g1_ParamLimits

0x315b,	// (0x00041244) main_video_pane_g1

0x317b,	// (0x00041264) main_video_pane_g2_ParamLimits

0x317b,	// (0x00041264) main_video_pane_g2

0x31ab,	// (0x00041294) main_video_pane_g3_ParamLimits

0x31ab,	// (0x00041294) main_video_pane_g3

0x31d4,	// (0x000412bd) main_video_pane_g4_ParamLimits

0x31d4,	// (0x000412bd) main_video_pane_g4

0x31fd,	// (0x000412e6) main_video_pane_g5_ParamLimits

0x31fd,	// (0x000412e6) main_video_pane_g5

0xab10,	// (0x00048bf9) main_video_pane_g6_ParamLimits

0xab10,	// (0x00048bf9) main_video_pane_g6

0x0006,

0xf225,	// (0x0004d30e) main_video_pane_g_ParamLimits

0xf225,	// (0x0004d30e) main_video_pane_g

0x321f,	// (0x00041308) main_video_pane_t1_ParamLimits

0x321f,	// (0x00041308) main_video_pane_t1

0xab2a,	// (0x00048c13) cams_zoom_pane_g1

0xab33,	// (0x00048c1c) cams_zoom_pane_g2

0xab3c,	// (0x00048c25) cams_zoom_pane_g3

0xab45,	// (0x00048c2e) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0004d31d) cams_zoom_pane_g

0x3269,	// (0x00041352) grid_cams_pane

0x3277,	// (0x00041360) linegrid_cams_pane

0x3283,	// (0x0004136c) cell_cams_pane_ParamLimits

0x3283,	// (0x0004136c) cell_cams_pane

0xab4e,	// (0x00048c37) cams_burst_image_pane

0xab56,	// (0x00048c3f) cell_cams_pane_g1

0xa5e2,	// (0x000486cb) grid_highlight_pane_cp03

0xa985,	// (0x00048a6e) mp_bg_pane_g1

0xa5e2,	// (0x000486cb) bg_list_pane_cp03

0xc777,	// (0x0004a860) bg_mp_pane

0xc77f,	// (0x0004a868) grid_mp_pane

0xc787,	// (0x0004a870) media_player_g1

0xc791,	// (0x0004a87a) media_player_t1

0xc79f,	// (0x0004a888) media_player_t2

0xc7ad,	// (0x0004a896) media_player_t3

0xc7bb,	// (0x0004a8a4) media_player_t4

0xc7c9,	// (0x0004a8b2) media_player_t5

0xc7d7,	// (0x0004a8c0) media_player_t6

0xc7e5,	// (0x0004a8ce) media_player_t7

0x0006,

0xf5d0,	// (0x0004d6b9) media_player_t

0xc7f3,	// (0x0004a8dc) wait_bar_pane_cp02

0xf5b5,	// (0x0004d69e) main_usb_pane_t

0x5497,	// (0x00043580) cell_mp_pane

0xa985,	// (0x00048a6e) cell_mp_pane_g1

0xa5e2,	// (0x000486cb) grid_highlight_pane_cp06

0xab5e,	// (0x00048c47) grid_skin_colour_pane

0xab66,	// (0x00048c4f) list_highlight_pane_cp03

0x3298,	// (0x00041381) skin_g1

0xab6e,	// (0x00048c57) skin_t1

0xab7d,	// (0x00048c66) skin_t2

0x0001,

0xf269,	// (0x0004d352) skin_t

0x32a2,	// (0x0004138b) cell_skin_colour_pane_ParamLimits

0x32a2,	// (0x0004138b) cell_skin_colour_pane

0xab8b,	// (0x00048c74) cell_skin_colour_pane_g1

0x3322,	// (0x0004140b) call_video_g1_ParamLimits

0x3322,	// (0x0004140b) call_video_g1

0x3332,	// (0x0004141b) call_video_g2_ParamLimits

0x3332,	// (0x0004141b) call_video_g2

0x0001,

0xf26e,	// (0x0004d357) call_video_g_ParamLimits

0xf26e,	// (0x0004d357) call_video_g

0x3382,	// (0x0004146b) call_video_uplink_pane_cp1_ParamLimits

0x3382,	// (0x0004146b) call_video_uplink_pane_cp1

0xab9d,	// (0x00048c86) call_video_uplink_pane_cp2

0x3450,	// (0x00041539) video_down_crop_pane_ParamLimits

0x3450,	// (0x00041539) video_down_crop_pane

0x3542,	// (0x0004162b) video_down_pane_ParamLimits

0x3542,	// (0x0004162b) video_down_pane

0xaba5,	// (0x00048c8e) video_down_subqcif_pane_ParamLimits

0xaba5,	// (0x00048c8e) video_down_subqcif_pane

0xabbf,	// (0x00048ca8) video_down_subqcif_pane_cp_ParamLimits

0xabbf,	// (0x00048ca8) video_down_subqcif_pane_cp

0xabe7,	// (0x00048cd0) im_reading_pane_ParamLimits

0xabe7,	// (0x00048cd0) im_reading_pane

0x365f,	// (0x00041748) im_writing_pane_ParamLimits

0x365f,	// (0x00041748) im_writing_pane

0x367d,	// (0x00041766) im_reading_pane_t1

0xac01,	// (0x00048cea) list_im_pane

0xac12,	// (0x00048cfb) scroll_pane_cp07

0x36bf,	// (0x000417a8) im_writing_pane_t1_ParamLimits

0x36bf,	// (0x000417a8) im_writing_pane_t1

0xac2b,	// (0x00048d14) im_writing_pane_t2_ParamLimits

0xac2b,	// (0x00048d14) im_writing_pane_t2

0x0001,

0xf278,	// (0x0004d361) im_writing_pane_t_ParamLimits

0xf278,	// (0x0004d361) im_writing_pane_t

0xa5e2,	// (0x000486cb) input_focus_pane_cp04

0xa5e2,	// (0x000486cb) input_focus_pane_cp05

0x36d1,	// (0x000417ba) list_im_single_pane_ParamLimits

0x36d1,	// (0x000417ba) list_im_single_pane

0x36ea,	// (0x000417d3) list_single_im_pane_t1

0x545b,	// (0x00043544) blid_accuracy_pane

0x5463,	// (0x0004354c) blid_compass_pane

0x546d,	// (0x00043556) main_location_t1

0x547b,	// (0x00043564) main_location_t2

0x5489,	// (0x00043572) main_location_t3

0x0002,

0xf5df,	// (0x0004d6c8) main_location_t

0xa5e2,	// (0x000486cb) aid_levels_location

0xa985,	// (0x00048a6e) blid_accuracy_pane_g1

0xa985,	// (0x00048a6e) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0004d3c3) blid_accuracy_pane_g

0xac73,	// (0x00048d5c) wml_content_pane

0xacb1,	// (0x00048d9a) wml_button_pane_ParamLimits

0xacb1,	// (0x00048d9a) wml_button_pane

0x36f9,	// (0x000417e2) wml_list_single_large_pane_ParamLimits

0x36f9,	// (0x000417e2) wml_list_single_large_pane

0x371b,	// (0x00041804) wml_list_single_medium_pane_ParamLimits

0x371b,	// (0x00041804) wml_list_single_medium_pane

0x373e,	// (0x00041827) wml_list_single_small_pane_ParamLimits

0x373e,	// (0x00041827) wml_list_single_small_pane

0xacc5,	// (0x00048dae) wml_selection_box_pane_ParamLimits

0xacc5,	// (0x00048dae) wml_selection_box_pane

0xacd8,	// (0x00048dc1) wml_list_single_pane_t1

0xace7,	// (0x00048dd0) wml_list_single_medium_pane_t1

0xacf6,	// (0x00048ddf) wml_list_single_large_pane_t1

0xad05,	// (0x00048dee) input_focus_pane_cp02_ParamLimits

0xad05,	// (0x00048dee) input_focus_pane_cp02

0xad18,	// (0x00048e01) wml_selection_box_pane_g1

0xad21,	// (0x00048e0a) wml_selection_box_pane_t1_ParamLimits

0xad21,	// (0x00048e0a) wml_selection_box_pane_t1

0xa83d,	// (0x00048926) bg_wml_button_pane_ParamLimits

0xa83d,	// (0x00048926) bg_wml_button_pane

0xad39,	// (0x00048e22) wml_button_pane_g1

0xad41,	// (0x00048e2a) wml_button_pane_t1

0xad39,	// (0x00048e22) wml_button_bg_pane_g1

0xad51,	// (0x00048e3a) wml_button_bg_pane_g2

0xad59,	// (0x00048e42) wml_button_bg_pane_g3

0xad61,	// (0x00048e4a) wml_button_bg_pane_g4

0xad69,	// (0x00048e52) wml_button_bg_pane_g5

0xad71,	// (0x00048e5a) wml_button_bg_pane_g6

0xad79,	// (0x00048e62) wml_button_bg_pane_g7

0xad81,	// (0x00048e6a) wml_button_bg_pane_g8

0xad89,	// (0x00048e72) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0004d366) wml_button_bg_pane_g

0x3766,	// (0x0004184f) bg_list_pane_cp02

0xad91,	// (0x00048e7a) mce_header_pane_ParamLimits

0xad91,	// (0x00048e7a) mce_header_pane

0xada7,	// (0x00048e90) mce_icon_pane

0xada7,	// (0x00048e90) mce_image_pane

0xadb0,	// (0x00048e99) mce_text_pane_ParamLimits

0xadb0,	// (0x00048e99) mce_text_pane

0x3770,	// (0x00041859) scroll_pane_cp03

0xaca9,	// (0x00048d92) scroll_pane_cp04

0xadc3,	// (0x00048eac) scroll_pane_cp05_ParamLimits

0xadc3,	// (0x00048eac) scroll_pane_cp05

0x377a,	// (0x00041863) mce_header_field_pane_ParamLimits

0x377a,	// (0x00041863) mce_header_field_pane

0x379c,	// (0x00041885) mce_header_field_pane_2_ParamLimits

0x379c,	// (0x00041885) mce_header_field_pane_2

0x37b2,	// (0x0004189b) mce_header_field_pane_3

0x37ba,	// (0x000418a3) list_single_mce_message_pane_ParamLimits

0x37ba,	// (0x000418a3) list_single_mce_message_pane

0x37d9,	// (0x000418c2) list_single_mce_smart_pane_ParamLimits

0x37d9,	// (0x000418c2) list_single_mce_smart_pane

0xadcf,	// (0x00048eb8) input_focus_pane_cp03

0xadd8,	// (0x00048ec1) list_header_data_pane

0x3803,	// (0x000418ec) mce_header_field_pane_t1

0x3813,	// (0x000418fc) list_single_mce_header_pane_ParamLimits

0x3813,	// (0x000418fc) list_single_mce_header_pane

0xade0,	// (0x00048ec9) list_single_mce_header_pane_t1

0xadef,	// (0x00048ed8) list_single_mce_message_pane_g1

0xadf7,	// (0x00048ee0) list_single_mce_message_pane_t1

0x3857,	// (0x00041940) bg_cale_heading_pane_cp01_ParamLimits

0x3857,	// (0x00041940) bg_cale_heading_pane_cp01

0xae05,	// (0x00048eee) bg_cale_pane_cp02_ParamLimits

0xae05,	// (0x00048eee) bg_cale_pane_cp02

0x389e,	// (0x00041987) cale_month_corner_pane

0x38bd,	// (0x000419a6) cale_month_day_heading_pane_ParamLimits

0x38bd,	// (0x000419a6) cale_month_day_heading_pane

0x3914,	// (0x000419fd) cale_month_pane_g1_ParamLimits

0x3914,	// (0x000419fd) cale_month_pane_g1

0x3950,	// (0x00041a39) cale_month_pane_g2_ParamLimits

0x3950,	// (0x00041a39) cale_month_pane_g2

0x3988,	// (0x00041a71) cale_month_pane_g3_ParamLimits

0x3988,	// (0x00041a71) cale_month_pane_g3

0x39dc,	// (0x00041ac5) cale_month_pane_g4_ParamLimits

0x39dc,	// (0x00041ac5) cale_month_pane_g4

0x3a30,	// (0x00041b19) cale_month_pane_g5_ParamLimits

0x3a30,	// (0x00041b19) cale_month_pane_g5

0x3a84,	// (0x00041b6d) cale_month_pane_g6_ParamLimits

0x3a84,	// (0x00041b6d) cale_month_pane_g6

0x3ae8,	// (0x00041bd1) cale_month_pane_g7_ParamLimits

0x3ae8,	// (0x00041bd1) cale_month_pane_g7

0x3b4c,	// (0x00041c35) cale_month_pane_g8_ParamLimits

0x3b4c,	// (0x00041c35) cale_month_pane_g8

0x3bb0,	// (0x00041c99) cale_month_pane_g9_ParamLimits

0x3bb0,	// (0x00041c99) cale_month_pane_g9

0x3c08,	// (0x00041cf1) cale_month_pane_g10_ParamLimits

0x3c08,	// (0x00041cf1) cale_month_pane_g10

0x3c56,	// (0x00041d3f) cale_month_pane_g11_ParamLimits

0x3c56,	// (0x00041d3f) cale_month_pane_g11

0x3ca2,	// (0x00041d8b) cale_month_pane_g12_ParamLimits

0x3ca2,	// (0x00041d8b) cale_month_pane_g12

0x3cf2,	// (0x00041ddb) cale_month_pane_g13_ParamLimits

0x3cf2,	// (0x00041ddb) cale_month_pane_g13

0x000c,

0xf290,	// (0x0004d379) cale_month_pane_g_ParamLimits

0xf290,	// (0x0004d379) cale_month_pane_g

0x3d42,	// (0x00041e2b) cale_month_week_pane

0x3d62,	// (0x00041e4b) grid_cale_month_pane_ParamLimits

0x3d62,	// (0x00041e4b) grid_cale_month_pane

0x3db0,	// (0x00041e99) cale_month_day_heading_pane_t1

0x3e32,	// (0x00041f1b) cale_month_day_heading_pane_t2

0x3ebf,	// (0x00041fa8) cale_month_day_heading_pane_t3

0x3f4c,	// (0x00042035) cale_month_day_heading_pane_t4

0x3fd9,	// (0x000420c2) cale_month_day_heading_pane_t5

0x406e,	// (0x00042157) cale_month_day_heading_pane_t6

0x410b,	// (0x000421f4) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0004d394) cale_month_day_heading_pane_t

0xaaa9,	// (0x00048b92) bg_cale_side_pane_cp01

0x41a8,	// (0x00042291) cale_month_week_pane_t1

0x41c1,	// (0x000422aa) cale_month_week_pane_t2

0x41da,	// (0x000422c3) cale_month_week_pane_t3

0x41f3,	// (0x000422dc) cale_month_week_pane_t4

0x420c,	// (0x000422f5) cale_month_week_pane_t5

0x4227,	// (0x00042310) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0004d3a3) cale_month_week_pane_t

0x4248,	// (0x00042331) cell_cale_month_pane_ParamLimits

0x4248,	// (0x00042331) cell_cale_month_pane

0x436a,	// (0x00042453) cell_cale_month_pane_g1

0x4376,	// (0x0004245f) cell_cale_month_pane_t1_ParamLimits

0x4376,	// (0x0004245f) cell_cale_month_pane_t1

0xaab7,	// (0x00048ba0) grid_highlight_pane_cp08

0xa985,	// (0x00048a6e) main_smil_g1

0x4396,	// (0x0004247f) smil_status_pane

0xae44,	// (0x00048f2d) smil_text_pane

0xc695,	// (0x0004a77e) bg_popup_call3_rect_pane_g8

0xc69d,	// (0x0004a786) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0004d65c) bg_popup_call3_rect_pane_g

0xc92b,	// (0x0004aa14) smil_status_volume_pane_g1

0x43a9,	// (0x00042492) smil_status_pane_t1

0x584f,	// (0x00043938) volume_smil_pane

0xae4e,	// (0x00048f37) list_smil_text_pane

0x43c0,	// (0x000424a9) scroll_pane_cp011

0x43cb,	// (0x000424b4) smil_text_list_pane_t1_ParamLimits

0x43cb,	// (0x000424b4) smil_text_list_pane_t1

0x441d,	// (0x00042506) aid_volume_smil_ParamLimits

0x441d,	// (0x00042506) aid_volume_smil

0xa985,	// (0x00048a6e) smil_volume_pane_g1

0xa985,	// (0x00048a6e) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0004d3c3) smil_volume_pane_g

0x27bb,	// (0x000408a4) listscroll_cale_day_pane

0xae58,	// (0x00048f41) bg_cale_pane

0xae70,	// (0x00048f59) list_cale_pane

0xae93,	// (0x00048f7c) scroll_pane_cp09

0xaea4,	// (0x00048f8d) cale_bg_pane_g1

0xaeac,	// (0x00048f95) cale_bg_pane_g2

0xaeb4,	// (0x00048f9d) cale_bg_pane_g3

0xaebc,	// (0x00048fa5) cale_bg_pane_g4

0xaec4,	// (0x00048fad) cale_bg_pane_g5

0xaecc,	// (0x00048fb5) cale_bg_pane_g6

0xaed4,	// (0x00048fbd) cale_bg_pane_g7

0xaedc,	// (0x00048fc5) cale_bg_pane_g8

0xaee4,	// (0x00048fcd) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0004d3c8) cale_bg_pane_g

0x443f,	// (0x00042528) list_cale_time_pane_ParamLimits

0x443f,	// (0x00042528) list_cale_time_pane

0xaef4,	// (0x00048fdd) list_cale_time_pane_g1_ParamLimits

0xaef4,	// (0x00048fdd) list_cale_time_pane_g1

0xaf00,	// (0x00048fe9) list_cale_time_pane_g2_ParamLimits

0xaf00,	// (0x00048fe9) list_cale_time_pane_g2

0x4453,	// (0x0004253c) list_cale_time_pane_g3_ParamLimits

0x4453,	// (0x0004253c) list_cale_time_pane_g3

0x4461,	// (0x0004254a) list_cale_time_pane_g4_ParamLimits

0x4461,	// (0x0004254a) list_cale_time_pane_g4

0x446f,	// (0x00042558) list_cale_time_pane_g5_ParamLimits

0x446f,	// (0x00042558) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0004d3db) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0004d3db) list_cale_time_pane_g

0xaf1a,	// (0x00049003) list_cale_time_pane_t1_ParamLimits

0xaf1a,	// (0x00049003) list_cale_time_pane_t1

0xaf42,	// (0x0004902b) list_cale_time_pane_t2_ParamLimits

0xaf42,	// (0x0004902b) list_cale_time_pane_t2

0x4767,	// (0x00042850) aid_blid_cardinal_pane

0x47a9,	// (0x00042892) compass_pane_t4

0xaf6a,	// (0x00049053) list_cale_time_pane_t4_ParamLimits

0xaf6a,	// (0x00049053) list_cale_time_pane_t4

0x47b7,	// (0x000428a0) compass_pane_t5

0x47c7,	// (0x000428b0) compass_pane_t6

0x47d5,	// (0x000428be) compass_pane_t7

0xb386,	// (0x0004946f) navi_pane_cc_t1

0xb4db,	// (0x000495c4) aid_phob_thumbnail_center_pane

0x4f57,	// (0x00043040) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0004d3e8) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0004d3e8) list_cale_time_pane_t

0xa239,	// (0x00048322) bg_popup_window_pane_cp02_ParamLimits

0xa239,	// (0x00048322) bg_popup_window_pane_cp02

0xaf92,	// (0x0004907b) heading_pane_cp01_ParamLimits

0xaf92,	// (0x0004907b) heading_pane_cp01

0xaf9e,	// (0x00049087) loc_req_pane_ParamLimits

0xaf9e,	// (0x00049087) loc_req_pane

0xafae,	// (0x00049097) loc_type_pane_ParamLimits

0xafae,	// (0x00049097) loc_type_pane

0xafc0,	// (0x000490a9) loc_type_pane_t1_ParamLimits

0xafc0,	// (0x000490a9) loc_type_pane_t1

0xafd2,	// (0x000490bb) loc_type_pane_t2_ParamLimits

0xafd2,	// (0x000490bb) loc_type_pane_t2

0xafe4,	// (0x000490cd) loc_type_pane_t3_ParamLimits

0xafe4,	// (0x000490cd) loc_type_pane_t3

0x0002,

0xf306,	// (0x0004d3ef) loc_type_pane_t_ParamLimits

0xf306,	// (0x0004d3ef) loc_type_pane_t

0xaff6,	// (0x000490df) list_loc_req_pane

0xb000,	// (0x000490e9) scroll_pane_cp012

0x447d,	// (0x00042566) list_single_loc_request_popup_menu_pane_ParamLimits

0x447d,	// (0x00042566) list_single_loc_request_popup_menu_pane

0xb00b,	// (0x000490f4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb00b,	// (0x000490f4) list_single_loc_request_popup_menu_pane_g1

0xb017,	// (0x00049100) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb017,	// (0x00049100) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0004d3f6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0004d3f6) list_single_loc_request_popup_menu_pane_g

0xb023,	// (0x0004910c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb023,	// (0x0004910c) list_single_loc_request_popup_menu_pane_t1

0x448f,	// (0x00042578) bg_popup_window_pane_cp03_ParamLimits

0x448f,	// (0x00042578) bg_popup_window_pane_cp03

0x449d,	// (0x00042586) heading_loc_req_pane_ParamLimits

0x449d,	// (0x00042586) heading_loc_req_pane

0x44a9,	// (0x00042592) popup_dyc_status_message_window_g1_ParamLimits

0x44a9,	// (0x00042592) popup_dyc_status_message_window_g1

0x44b5,	// (0x0004259e) popup_dyc_status_message_window_t1_ParamLimits

0x44b5,	// (0x0004259e) popup_dyc_status_message_window_t1

0x44c7,	// (0x000425b0) popup_dyc_status_message_window_t2_ParamLimits

0x44c7,	// (0x000425b0) popup_dyc_status_message_window_t2

0x44d9,	// (0x000425c2) popup_dyc_status_message_window_t3_ParamLimits

0x44d9,	// (0x000425c2) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0004d3fb) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0004d3fb) popup_dyc_status_message_window_t

0xa5e2,	// (0x000486cb) bg_heading_pane_cp01

0xb039,	// (0x00049122) heading_loc_req_pane_g1

0xb041,	// (0x0004912a) heading_loc_req_pane_g2

0xb049,	// (0x00049132) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0004d402) heading_loc_req_pane_g

0xb051,	// (0x0004913a) heading_loc_req_pane_t1

0xb061,	// (0x0004914a) bg_popup_sub_pane_cp01_ParamLimits

0xb061,	// (0x0004914a) bg_popup_sub_pane_cp01

0xb06f,	// (0x00049158) popup_cale_events_window_g1_ParamLimits

0xb06f,	// (0x00049158) popup_cale_events_window_g1

0xb08f,	// (0x00049178) popup_cale_events_window_g2_ParamLimits

0xb08f,	// (0x00049178) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0004d436) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0004d436) popup_cale_events_window_g

0xb0af,	// (0x00049198) popup_cale_events_window_t1_ParamLimits

0xb0af,	// (0x00049198) popup_cale_events_window_t1

0xb0c1,	// (0x000491aa) popup_cale_events_window_t2_ParamLimits

0xb0c1,	// (0x000491aa) popup_cale_events_window_t2

0xb0ff,	// (0x000491e8) popup_cale_events_window_t3_ParamLimits

0xb0ff,	// (0x000491e8) popup_cale_events_window_t3

0xb139,	// (0x00049222) popup_cale_events_window_t4_ParamLimits

0xb139,	// (0x00049222) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0004d43b) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0004d43b) popup_cale_events_window_t

0x4503,	// (0x000425ec) call_type_pane

0xb16f,	// (0x00049258) popup_call_status_window_g1

0x450f,	// (0x000425f8) popup_call_status_window_g2

0x451b,	// (0x00042604) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0004d444) popup_call_status_window_g

0xb17d,	// (0x00049266) call_type_pane_g1

0xb186,	// (0x0004926f) call_type_pane_g2

0x0001,

0xf362,	// (0x0004d44b) call_type_pane_g

0xa5e2,	// (0x000486cb) bg_popup_sub_pane_cp02

0xb18f,	// (0x00049278) listscroll_popup_wml_pane

0xb197,	// (0x00049280) list_wml_pane

0xb1a1,	// (0x0004928a) scroll_pane_cp013

0xb1ac,	// (0x00049295) list_single_graphic_popup_wml_pane_ParamLimits

0xb1ac,	// (0x00049295) list_single_graphic_popup_wml_pane

0xa985,	// (0x00048a6e) list_single_graphic_popup_wml_pane_g1

0xb1c0,	// (0x000492a9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0004d450) list_single_graphic_popup_wml_pane_g

0xb1c8,	// (0x000492b1) list_single_graphic_popup_wml_pane_t1

0xb1de,	// (0x000492c7) aid_call_pane

0xa835,	// (0x0004891e) popup_clock_analogue_window_g1

0xa835,	// (0x0004891e) popup_clock_analogue_window_g2

0x4527,	// (0x00042610) popup_clock_analogue_window_g3

0x4527,	// (0x00042610) popup_clock_analogue_window_g4

0xa985,	// (0x00048a6e) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0004d455) popup_clock_analogue_window_g

0x452f,	// (0x00042618) popup_clock_analogue_window_t1

0x453d,	// (0x00042626) clock_digital_number_pane_ParamLimits

0x453d,	// (0x00042626) clock_digital_number_pane

0x4549,	// (0x00042632) clock_digital_number_pane_cp02_ParamLimits

0x4549,	// (0x00042632) clock_digital_number_pane_cp02

0x4555,	// (0x0004263e) clock_digital_number_pane_cp03_ParamLimits

0x4555,	// (0x0004263e) clock_digital_number_pane_cp03

0x4561,	// (0x0004264a) clock_digital_number_pane_cp04_ParamLimits

0x4561,	// (0x0004264a) clock_digital_number_pane_cp04

0x456d,	// (0x00042656) clock_digital_separator_pane_ParamLimits

0x456d,	// (0x00042656) clock_digital_separator_pane

0x4579,	// (0x00042662) popup_clock_digital_window_t1

0xa985,	// (0x00048a6e) clock_digital_number_pane_g1

0xa985,	// (0x00048a6e) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0004d3c3) clock_digital_number_pane_g

0xa985,	// (0x00048a6e) clock_digital_separator_pane_g1

0xa985,	// (0x00048a6e) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0004d3c3) clock_digital_separator_pane_g

0xa5e2,	// (0x000486cb) bg_popup_window_pane_cp04

0xb1e6,	// (0x000492cf) heading_pane_cp03

0xb1ee,	// (0x000492d7) listscroll_popup_gms_pane

0xb1f6,	// (0x000492df) grid_large_graphic_popup_pane

0xb200,	// (0x000492e9) listscroll_popup_gms_pane_g1

0xb208,	// (0x000492f1) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0004d460) listscroll_popup_gms_pane_g

0xaca9,	// (0x00048d92) scroll_pane_cp014

0x4596,	// (0x0004267f) cell_large_graphic_popup_pane_ParamLimits

0x4596,	// (0x0004267f) cell_large_graphic_popup_pane

0x45b0,	// (0x00042699) cell_large_graphic_popup_pane_g1_ParamLimits

0x45b0,	// (0x00042699) cell_large_graphic_popup_pane_g1

0xb210,	// (0x000492f9) cell_large_graphic_popup_pane_g2_ParamLimits

0xb210,	// (0x000492f9) cell_large_graphic_popup_pane_g2

0xb21c,	// (0x00049305) cell_large_graphic_popup_pane_g3_ParamLimits

0xb21c,	// (0x00049305) cell_large_graphic_popup_pane_g3

0xb229,	// (0x00049312) cell_large_graphic_popup_pane_g4_ParamLimits

0xb229,	// (0x00049312) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0004d465) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0004d465) cell_large_graphic_popup_pane_g

0xb239,	// (0x00049322) grid_highlight_pane_cp010

0xa985,	// (0x00048a6e) bg_popup_call_pane_g1

0xb243,	// (0x0004932c) list_single_graphic_popup_conf_pane_ParamLimits

0xb243,	// (0x0004932c) list_single_graphic_popup_conf_pane

0xb255,	// (0x0004933e) list_highlight_pane_cp01

0xb25e,	// (0x00049347) list_single_graphic_popup_conf_pane_g1

0xb266,	// (0x0004934f) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0004d46e) list_single_graphic_popup_conf_pane_g

0xb26e,	// (0x00049357) list_single_graphic_popup_conf_pane_t1

0xb27c,	// (0x00049365) linegrid_cams_pane_g1

0x45bc,	// (0x000426a5) linegrid_cams_pane_g2

0xaaea,	// (0x00048bd3) linegrid_cams_pane_g3

0xb285,	// (0x0004936e) linegrid_cams_pane_g4

0x45c5,	// (0x000426ae) linegrid_cams_pane_g5

0x45ce,	// (0x000426b7) linegrid_cams_pane_g6

0xaaf3,	// (0x00048bdc) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0004d473) linegrid_cams_pane_g

0xb28e,	// (0x00049377) popup_clock_analogue_window

0xb28e,	// (0x00049377) popup_clock_digital_window

0xa5e2,	// (0x000486cb) popup_phob_thumbnail_window

0xa985,	// (0x00048a6e) call_video_uplink_pane_g1

0xb297,	// (0x00049380) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0004d482) call_video_uplink_pane_g

0xb29f,	// (0x00049388) video_uplink_pane

0xb2a7,	// (0x00049390) mce_image_pane_g1

0x45d9,	// (0x000426c2) mce_image_pane_g2

0x45e3,	// (0x000426cc) mce_image_pane_g3

0x45ed,	// (0x000426d6) mce_image_pane_g4

0x45f5,	// (0x000426de) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0004d487) mce_image_pane_g

0xb2b1,	// (0x0004939a) control_top_pane_stacon_cp01_ParamLimits

0xb2b1,	// (0x0004939a) control_top_pane_stacon_cp01

0xb2c5,	// (0x000493ae) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2c5,	// (0x000493ae) uni_indicator_pane_stacon_cp01

0xb2d6,	// (0x000493bf) bg_popup_sub_pane_cp03

0x45fd,	// (0x000426e6) chi_dic_find_pane

0x4605,	// (0x000426ee) listscroll_chi_dic_pane

0x460e,	// (0x000426f7) main_pane_chidic_g1

0x4621,	// (0x0004270a) chi_dic_find_pane_t1

0xb2e0,	// (0x000493c9) find_chidic_pane

0xb2e9,	// (0x000493d2) chi_dic_list_pane_ParamLimits

0xb2e9,	// (0x000493d2) chi_dic_list_pane

0xb2fa,	// (0x000493e3) scroll_pane_cp020

0x462f,	// (0x00042718) find_chidic_pane_t1

0xa5e2,	// (0x000486cb) input_focus_pane_cp06

0x463e,	// (0x00042727) list_chi_dic_pane_ParamLimits

0x463e,	// (0x00042727) list_chi_dic_pane

0x4653,	// (0x0004273c) list_chi_dic_pane_t1_ParamLimits

0x4653,	// (0x0004273c) list_chi_dic_pane_t1

0xa5e2,	// (0x000486cb) list_highlight_pane_cp020

0xb302,	// (0x000493eb) bg_cale_heading_pane_g1

0x4666,	// (0x0004274f) bg_cale_heading_pane_g2

0x466e,	// (0x00042757) bg_cale_heading_pane_g3

0x4676,	// (0x0004275f) bg_cale_heading_pane_g4

0x4680,	// (0x00042769) bg_cale_heading_pane_g5

0x468a,	// (0x00042773) bg_cale_heading_pane_g6

0x4692,	// (0x0004277b) bg_cale_heading_pane_g7

0x469a,	// (0x00042783) bg_cale_heading_pane_g8

0x46a4,	// (0x0004278d) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0004d492) bg_cale_heading_pane_g

0xb302,	// (0x000493eb) bg_cale_side_pane_g1

0x46ae,	// (0x00042797) bg_cale_side_pane_g2

0x46b8,	// (0x000427a1) bg_cale_side_pane_g3

0x46c2,	// (0x000427ab) bg_cale_side_pane_g4

0x46cc,	// (0x000427b5) bg_cale_side_pane_g5

0x46d6,	// (0x000427bf) bg_cale_side_pane_g6

0x46e0,	// (0x000427c9) bg_cale_side_pane_g7

0x46ea,	// (0x000427d3) bg_cale_side_pane_g8

0x46f2,	// (0x000427db) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0004d4a5) bg_cale_side_pane_g

0x46fa,	// (0x000427e3) popup_call_status_window_ParamLimits

0x46fa,	// (0x000427e3) popup_call_status_window

0xb30a,	// (0x000493f3) stacon_top_pane

0xb312,	// (0x000493fb) status_pane_ParamLimits

0xb312,	// (0x000493fb) status_pane

0xb327,	// (0x00049410) status_small_pane

0xb32f,	// (0x00049418) control_pane

0xa5e2,	// (0x000486cb) stacon_bottom_pane

0xb337,	// (0x00049420) list_single_mce_smart_pane_t1_ParamLimits

0xb337,	// (0x00049420) list_single_mce_smart_pane_t1

0xb34a,	// (0x00049433) list_single_mce_smart_pane_t2_ParamLimits

0xb34a,	// (0x00049433) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0004d4b8) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0004d4b8) list_single_mce_smart_pane_t

0x4706,	// (0x000427ef) compass_pane

0x4711,	// (0x000427fa) main_location2_pane_t1

0x4727,	// (0x00042810) main_location2_pane_t2

0x473d,	// (0x00042826) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0004d4bd) main_location2_pane_t

0xb369,	// (0x00049452) compass_pane_g1_ParamLimits

0xb369,	// (0x00049452) compass_pane_g1

0x478b,	// (0x00042874) compass_pane_t1

0x479a,	// (0x00042883) compass_pane_t2

0x0005,

0xf3dd,	// (0x0004d4c6) compass_pane_t

0x47e5,	// (0x000428ce) text_secondary_cp61

0xb37d,	// (0x00049466) navi_pane_cams_g5

0xb3a0,	// (0x00049489) navi_pane_im_t1

0xb3ae,	// (0x00049497) navi_pane_mp_g1_ParamLimits

0xb3ae,	// (0x00049497) navi_pane_mp_g1

0xb3c2,	// (0x000494ab) navi_pane_mp_g2_ParamLimits

0xb3c2,	// (0x000494ab) navi_pane_mp_g2

0xb3ce,	// (0x000494b7) navi_pane_mp_g3_ParamLimits

0xb3ce,	// (0x000494b7) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0004d4da) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0004d4da) navi_pane_mp_g

0xb3da,	// (0x000494c3) navi_pane_mp_t1

0xb3e8,	// (0x000494d1) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0004d4e1) navi_pane_mp_t

0xb424,	// (0x0004950d) navi_pane_vt_g1

0xb3da,	// (0x000494c3) navi_pane_vt_t1

0xb42c,	// (0x00049515) navi_slider_pane

0xb434,	// (0x0004951d) zooming_pane

0xb43c,	// (0x00049525) navi_slider_pane_g1

0x491a,	// (0x00042a03) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0004d4e8) navi_slider_pane_g

0xb460,	// (0x00049549) aid_levels_zoom

0xb468,	// (0x00049551) zooming_pane_g1

0xb470,	// (0x00049559) zooming_pane_g2

0xb470,	// (0x00049559) zooming_pane_g3

0x0002,

0xf40e,	// (0x0004d4f7) zooming_pane_g

0xb478,	// (0x00049561) level_10_zoom

0xb481,	// (0x0004956a) level_11_zoom

0xb48a,	// (0x00049573) level_1_zoom

0xb493,	// (0x0004957c) level_2_zoom

0xb49c,	// (0x00049585) level_3_zoom

0xb4a5,	// (0x0004958e) level_4_zoom

0xb4ae,	// (0x00049597) level_5_zoom

0xb4b7,	// (0x000495a0) level_6_zoom

0xb4c0,	// (0x000495a9) level_7_zoom

0xb4c9,	// (0x000495b2) level_8_zoom

0xb4d2,	// (0x000495bb) level_9_zoom

0xb4e3,	// (0x000495cc) popup_phob_thumbnail_window_g1

0xb4eb,	// (0x000495d4) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0004d4fe) popup_phob_thumbnail_window_g

0xc7fb,	// (0x0004a8e4) level_1_location

0xc803,	// (0x0004a8ec) level_2_location

0xc80b,	// (0x0004a8f4) level_3_location

0xc813,	// (0x0004a8fc) level_4_location

0xb434,	// (0x0004951d) level_5_location

0x492c,	// (0x00042a15) mce_icon_pane_g1

0x4934,	// (0x00042a1d) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0004d503) mce_icon_pane_g

0x493c,	// (0x00042a25) main_mup_pane_g1_ParamLimits

0x493c,	// (0x00042a25) main_mup_pane_g1

0x4954,	// (0x00042a3d) main_mup_pane_g2_ParamLimits

0x4954,	// (0x00042a3d) main_mup_pane_g2

0x4970,	// (0x00042a59) main_mup_pane_g3_ParamLimits

0x4970,	// (0x00042a59) main_mup_pane_g3

0x498c,	// (0x00042a75) main_mup_pane_g4_ParamLimits

0x498c,	// (0x00042a75) main_mup_pane_g4

0x49a8,	// (0x00042a91) main_mup_pane_g5_ParamLimits

0x49a8,	// (0x00042a91) main_mup_pane_g5

0x49c9,	// (0x00042ab2) main_mup_pane_g6_ParamLimits

0x49c9,	// (0x00042ab2) main_mup_pane_g6

0x49e9,	// (0x00042ad2) main_mup_pane_g7_ParamLimits

0x49e9,	// (0x00042ad2) main_mup_pane_g7

0x4a0d,	// (0x00042af6) main_mup_pane_g8_ParamLimits

0x4a0d,	// (0x00042af6) main_mup_pane_g8

0x4a31,	// (0x00042b1a) main_mup_pane_g9_ParamLimits

0x4a31,	// (0x00042b1a) main_mup_pane_g9

0x4a54,	// (0x00042b3d) main_mup_pane_g10_ParamLimits

0x4a54,	// (0x00042b3d) main_mup_pane_g10

0x4a77,	// (0x00042b60) main_mup_pane_g11_ParamLimits

0x4a77,	// (0x00042b60) main_mup_pane_g11

0x4a97,	// (0x00042b80) main_mup_pane_g12_ParamLimits

0x4a97,	// (0x00042b80) main_mup_pane_g12

0x4aa5,	// (0x00042b8e) main_mup_pane_g13_ParamLimits

0x4aa5,	// (0x00042b8e) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0004d508) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0004d508) main_mup_pane_g

0x4abb,	// (0x00042ba4) main_mup_pane_t1_ParamLimits

0x4abb,	// (0x00042ba4) main_mup_pane_t1

0x4ada,	// (0x00042bc3) main_mup_pane_t2_ParamLimits

0x4ada,	// (0x00042bc3) main_mup_pane_t2

0x4af4,	// (0x00042bdd) main_mup_pane_t3_ParamLimits

0x4af4,	// (0x00042bdd) main_mup_pane_t3

0x4b0e,	// (0x00042bf7) main_mup_pane_t4_ParamLimits

0x4b0e,	// (0x00042bf7) main_mup_pane_t4

0x4b20,	// (0x00042c09) main_mup_pane_t5_ParamLimits

0x4b20,	// (0x00042c09) main_mup_pane_t5

0x4b32,	// (0x00042c1b) main_mup_pane_t6_ParamLimits

0x4b32,	// (0x00042c1b) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0004d523) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0004d523) main_mup_pane_t

0x4b48,	// (0x00042c31) mup_progress_pane_ParamLimits

0x4b48,	// (0x00042c31) mup_progress_pane

0x4b54,	// (0x00042c3d) mup_visualizer_pane_ParamLimits

0x4b54,	// (0x00042c3d) mup_visualizer_pane

0x4b92,	// (0x00042c7b) mup_volume_pane_ParamLimits

0x4b92,	// (0x00042c7b) mup_volume_pane

0xb16f,	// (0x00049258) mup_visualizer_pane_g1_ParamLimits

0xb16f,	// (0x00049258) mup_visualizer_pane_g1

0xb16f,	// (0x00049258) mup_visualizer_pane_g2_ParamLimits

0xb16f,	// (0x00049258) mup_visualizer_pane_g2

0xb369,	// (0x00049452) mup_visualizer_pane_g3_ParamLimits

0xb369,	// (0x00049452) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0004d530) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0004d530) mup_visualizer_pane_g

0xa985,	// (0x00048a6e) mup_volume_pane_g1

0xb4fb,	// (0x000495e4) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0004d537) mup_volume_pane_g

0xa985,	// (0x00048a6e) mup_progress_pane_g1

0xb504,	// (0x000495ed) mup_progress_pane_g2

0xb50d,	// (0x000495f6) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0004d53c) mup_progress_pane_g

0xa5e2,	// (0x000486cb) bg_popup_window_pane_cp05

0xb516,	// (0x000495ff) heading_pane_cp02_ParamLimits

0xb516,	// (0x000495ff) heading_pane_cp02

0xb532,	// (0x0004961b) list_popup_blid_pane

0xb53a,	// (0x00049623) list_blid_sat_info_pane_ParamLimits

0xb53a,	// (0x00049623) list_blid_sat_info_pane

0xb54d,	// (0x00049636) list_blid_sat_info_pane_g1

0xb555,	// (0x0004963e) list_blid_sat_info_pane_t1

0x4cb1,	// (0x00042d9a) mup_equalizer_pane_ParamLimits

0x4cb1,	// (0x00042d9a) mup_equalizer_pane

0x4cd2,	// (0x00042dbb) mup_equalizer_pane_cp1_ParamLimits

0x4cd2,	// (0x00042dbb) mup_equalizer_pane_cp1

0x4cf3,	// (0x00042ddc) mup_equalizer_pane_cp2_ParamLimits

0x4cf3,	// (0x00042ddc) mup_equalizer_pane_cp2

0x4d14,	// (0x00042dfd) mup_equalizer_pane_cp3_ParamLimits

0x4d14,	// (0x00042dfd) mup_equalizer_pane_cp3

0x4d39,	// (0x00042e22) mup_equalizer_pane_cp4_ParamLimits

0x4d39,	// (0x00042e22) mup_equalizer_pane_cp4

0x4d5e,	// (0x00042e47) mup_equalizer_pane_cp5

0x4d76,	// (0x00042e5f) mup_equalizer_pane_cp6

0x4d8e,	// (0x00042e77) mup_equalizer_pane_cp7

0xc715,	// (0x0004a7fe) bg_popup_call_poc_act_pane_g9

0xc71d,	// (0x0004a806) bg_popup_call_poc_act_pane_g10

0xc725,	// (0x0004a80e) bg_popup_call_poc_act_pane_g11

0x000a,

0xa83d,	// (0x00048926) mup_scale_pane

0xa985,	// (0x00048a6e) mup_scale_pane_g1

0xb563,	// (0x0004964c) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0004d558) mup_scale_pane_g

0xb587,	// (0x00049670) msg_data_pane

0xb58f,	// (0x00049678) scroll_pane_cp017

0x4db8,	// (0x00042ea1) bg_list_pane_cp04_ParamLimits

0x4db8,	// (0x00042ea1) bg_list_pane_cp04

0xb597,	// (0x00049680) msg_data_pane_g1

0x4dd8,	// (0x00042ec1) msg_data_pane_g2

0x4de2,	// (0x00042ecb) msg_data_pane_g3

0x4dec,	// (0x00042ed5) msg_data_pane_g4

0x4df4,	// (0x00042edd) msg_data_pane_g5

0x4dfc,	// (0x00042ee5) msg_data_pane_g6

0x4e04,	// (0x00042eed) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0004d567) msg_data_pane_g

0x4e0c,	// (0x00042ef5) msg_text_pane_ParamLimits

0x4e0c,	// (0x00042ef5) msg_text_pane

0x4e34,	// (0x00042f1d) qrid_highlight_pane_cp011_ParamLimits

0x4e34,	// (0x00042f1d) qrid_highlight_pane_cp011

0xa5e2,	// (0x000486cb) msg_body_pane

0xa5e2,	// (0x000486cb) msg_header_pane

0xb59f,	// (0x00049688) input_focus_pane_cp07

0xb5b4,	// (0x0004969d) msg_header_pane_t1_ParamLimits

0xb5b4,	// (0x0004969d) msg_header_pane_t1

0x0e15,	// (0x0003eefe) msg_header_pane_t2_ParamLimits

0x0e15,	// (0x0003eefe) msg_header_pane_t2

0x0001,

0xf492,	// (0x0004d57b) msg_header_pane_t_ParamLimits

0xf492,	// (0x0004d57b) msg_header_pane_t

0xb5c6,	// (0x000496af) msg_body_pane_g1

0x0e27,	// (0x0003ef10) msg_body_pane_t1_ParamLimits

0x0e27,	// (0x0003ef10) msg_body_pane_t1

0x0e58,	// (0x0003ef41) msg_body_pane_t2_ParamLimits

0x0e58,	// (0x0003ef41) msg_body_pane_t2

0x0e6a,	// (0x0003ef53) msg_body_pane_t3_ParamLimits

0x0e6a,	// (0x0003ef53) msg_body_pane_t3

0x0002,

0xf497,	// (0x0004d580) msg_body_pane_t_ParamLimits

0xf497,	// (0x0004d580) msg_body_pane_t

0x4ea7,	// (0x00042f90) main_viewer_pane_g1_ParamLimits

0x4ea7,	// (0x00042f90) main_viewer_pane_g1

0x4eb3,	// (0x00042f9c) main_viewer_pane_g2_ParamLimits

0x4eb3,	// (0x00042f9c) main_viewer_pane_g2

0x4ebf,	// (0x00042fa8) main_viewer_pane_g3_ParamLimits

0x4ebf,	// (0x00042fa8) main_viewer_pane_g3

0x4ed0,	// (0x00042fb9) main_viewer_pane_g4_ParamLimits

0x4ed0,	// (0x00042fb9) main_viewer_pane_g4

0x4ee1,	// (0x00042fca) main_viewer_pane_g5_ParamLimits

0x4ee1,	// (0x00042fca) main_viewer_pane_g5

0x4ee1,	// (0x00042fca) main_viewer_pane_g7_ParamLimits

0x4ee1,	// (0x00042fca) main_viewer_pane_g7

0x4ef3,	// (0x00042fdc) main_viewer_pane_g8_ParamLimits

0x4ef3,	// (0x00042fdc) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0004d590) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0004d590) main_viewer_pane_g

0xb5ce,	// (0x000496b7) viewer_content_pane_ParamLimits

0xb5ce,	// (0x000496b7) viewer_content_pane

0x4f2b,	// (0x00043014) main_postcard_pane_g1_ParamLimits

0x4f2b,	// (0x00043014) main_postcard_pane_g1

0x4f39,	// (0x00043022) main_postcard_pane_g2_ParamLimits

0x4f39,	// (0x00043022) main_postcard_pane_g2

0x4f47,	// (0x00043030) main_postcard_pane_g3_ParamLimits

0x4f47,	// (0x00043030) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0004d5a1) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0004d5a1) main_postcard_pane_g

0x4f57,	// (0x00043040) main_postcard_pane_g4

0xc93e,	// (0x0004aa27) smil_status_volume_pane_g2

0x4f83,	// (0x0004306c) postcard_pane_ParamLimits

0x4f83,	// (0x0004306c) postcard_pane

0xb16f,	// (0x00049258) postcard_pane_g1_ParamLimits

0xb16f,	// (0x00049258) postcard_pane_g1

0x4fbd,	// (0x000430a6) postcard_pane_g2_ParamLimits

0x4fbd,	// (0x000430a6) postcard_pane_g2

0x4fc9,	// (0x000430b2) postcard_pane_g3_ParamLimits

0x4fc9,	// (0x000430b2) postcard_pane_g3

0xb5dc,	// (0x000496c5) postcard_pane_g4_ParamLimits

0xb5dc,	// (0x000496c5) postcard_pane_g4

0x4fd5,	// (0x000430be) postcard_pane_g5_ParamLimits

0x4fd5,	// (0x000430be) postcard_pane_g5

0x4fe1,	// (0x000430ca) postcard_pane_g6_ParamLimits

0x4fe1,	// (0x000430ca) postcard_pane_g6

0xb5ea,	// (0x000496d3) postcard_pane_g7_ParamLimits

0xb5ea,	// (0x000496d3) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0004d5ae) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0004d5ae) postcard_pane_g

0x4fef,	// (0x000430d8) main_mp2_pane_g1_ParamLimits

0x4fef,	// (0x000430d8) main_mp2_pane_g1

0x4ffd,	// (0x000430e6) main_mp2_pane_g2_ParamLimits

0x4ffd,	// (0x000430e6) main_mp2_pane_g2

0x5009,	// (0x000430f2) main_mp2_pane_g3_ParamLimits

0x5009,	// (0x000430f2) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0004d5bd) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0004d5bd) main_mp2_pane_g

0x5015,	// (0x000430fe) main_mp2_pane_t1_ParamLimits

0x5015,	// (0x000430fe) main_mp2_pane_t1

0x502c,	// (0x00043115) main_mp2_pane_t2_ParamLimits

0x502c,	// (0x00043115) main_mp2_pane_t2

0x5040,	// (0x00043129) main_mp2_pane_t3_ParamLimits

0x5040,	// (0x00043129) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0004d5c4) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0004d5c4) main_mp2_pane_t

0xb5f8,	// (0x000496e1) pec_content_pane_ParamLimits

0xb5f8,	// (0x000496e1) pec_content_pane

0xaca9,	// (0x00048d92) scroll_pane_cp015

0xb60a,	// (0x000496f3) pec_attribute_pane_ParamLimits

0xb60a,	// (0x000496f3) pec_attribute_pane

0x5052,	// (0x0004313b) pec_content_pane_g1_ParamLimits

0x5052,	// (0x0004313b) pec_content_pane_g1

0xb61a,	// (0x00049703) pec_content_pane_t1_ParamLimits

0xb61a,	// (0x00049703) pec_content_pane_t1

0xb62c,	// (0x00049715) pec_content_pane_t2_ParamLimits

0xb62c,	// (0x00049715) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0004d5cb) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0004d5cb) pec_content_pane_t

0x505e,	// (0x00043147) list_single_graphic_pane_cp01_ParamLimits

0x505e,	// (0x00043147) list_single_graphic_pane_cp01

0xa83d,	// (0x00048926) bg_popup_sub_pane_cp04

0xb63e,	// (0x00049727) popup_mup_playback_window_g1

0xb64a,	// (0x00049733) popup_mup_playback_window_t1

0xb65f,	// (0x00049748) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0004d5d0) popup_mup_playback_window_t

0xb696,	// (0x0004977f) main_image_pane_g1_ParamLimits

0xb696,	// (0x0004977f) main_image_pane_g1

0xb6d9,	// (0x000497c2) scroll_pane_cp018_ParamLimits

0xb6d9,	// (0x000497c2) scroll_pane_cp018

0xb6f1,	// (0x000497da) scroll_pane_cp016_ParamLimits

0xb6f1,	// (0x000497da) scroll_pane_cp016

0x50ec,	// (0x000431d5) smil2_image_pane_ParamLimits

0x50ec,	// (0x000431d5) smil2_image_pane

0x5122,	// (0x0004320b) smil2_root_pane_ParamLimits

0x5122,	// (0x0004320b) smil2_root_pane

0x514e,	// (0x00043237) smil2_text_pane_ParamLimits

0x514e,	// (0x00043237) smil2_text_pane

0xa5e2,	// (0x000486cb) bg_list_pane_cp06

0xb72d,	// (0x00049816) grid_radio_pane

0xa5e2,	// (0x000486cb) bg_popup_window_pane_cp06

0xb737,	// (0x00049820) main_fmradio_pane_t1

0xb1e6,	// (0x000492cf) heading_pane_cp04

0xb745,	// (0x0004982e) main_fmradio_pane_t2

0xc72d,	// (0x0004a816) popup_cale_lunar_info_window_g1

0xb753,	// (0x0004983c) main_fmradio_pane_t3

0xc735,	// (0x0004a81e) popup_cale_lunar_info_window_g2

0xb763,	// (0x0004984c) main_fmradio_pane_t4

0x0001,

0xb771,	// (0x0004985a) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0004d6ab) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0004d5e5) main_fmradio_pane_t

0xb77f,	// (0x00049868) wait_bar_pane_cp03

0xb787,	// (0x00049870) cell_fmradio_pane_ParamLimits

0xb787,	// (0x00049870) cell_fmradio_pane

0xb5ea,	// (0x000496d3) cell_fmradio_pane_g1_ParamLimits

0xb5ea,	// (0x000496d3) cell_fmradio_pane_g1

0xa5e2,	// (0x000486cb) grid_highlight_pane_cp011

0xb79c,	// (0x00049885) poc_content_pane_ParamLimits

0xb79c,	// (0x00049885) poc_content_pane

0xb7ae,	// (0x00049897) scroll_pane_cp019

0x518e,	// (0x00043277) popup_call_poc_act_window_ParamLimits

0x518e,	// (0x00043277) popup_call_poc_act_window

0x519b,	// (0x00043284) popup_call_poc_inact_window_ParamLimits

0x519b,	// (0x00043284) popup_call_poc_inact_window

0xf599,	// (0x0004d682) bg_popup_call_poc_act_pane_g

0xc6a5,	// (0x0004a78e) bg_popup_call_poc_inact_pane_g1

0xc6ad,	// (0x0004a796) bg_popup_call_poc_inact_pane_g2

0xb7b6,	// (0x0004989f) popup_call_poc_act_window_g2

0xc6b5,	// (0x0004a79e) bg_popup_call_poc_inact_pane_g3

0xc6bd,	// (0x0004a7a6) bg_popup_call_poc_inact_pane_g4

0xc6c5,	// (0x0004a7ae) bg_popup_call_poc_inact_pane_g5

0xb7be,	// (0x000498a7) popup_call_poc_act_window_t1_ParamLimits

0xb7be,	// (0x000498a7) popup_call_poc_act_window_t1

0xb7e6,	// (0x000498cf) popup_call_poc_act_window_t2_ParamLimits

0xb7e6,	// (0x000498cf) popup_call_poc_act_window_t2

0xb80e,	// (0x000498f7) popup_call_poc_act_window_t3_ParamLimits

0xb80e,	// (0x000498f7) popup_call_poc_act_window_t3

0xb836,	// (0x0004991f) popup_call_poc_act_window_t4_ParamLimits

0xb836,	// (0x0004991f) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0004d5f0) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0004d5f0) popup_call_poc_act_window_t

0xc6cd,	// (0x0004a7b6) bg_popup_call_poc_inact_pane_g6

0xc6d5,	// (0x0004a7be) bg_popup_call_poc_inact_pane_g7

0xc6dd,	// (0x0004a7c6) bg_popup_call_poc_inact_pane_g8

0xb848,	// (0x00049931) popup_call_poc_inact_window_g2

0xc6e5,	// (0x0004a7ce) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0004d66f) bg_popup_call_poc_inact_pane_g

0xb850,	// (0x00049939) popup_call_poc_inact_window_t1_ParamLimits

0xb850,	// (0x00049939) popup_call_poc_inact_window_t1

0xb865,	// (0x0004994e) popup_call_poc_inact_window_t2_ParamLimits

0xb865,	// (0x0004994e) popup_call_poc_inact_window_t2

0xb87a,	// (0x00049963) popup_call_poc_inact_window_t3_ParamLimits

0xb87a,	// (0x00049963) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0004d5f9) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0004d5f9) popup_call_poc_inact_window_t

0xc8b1,	// (0x0004a99a) context_pane_ParamLimits

0x57aa,	// (0x00043893) signal_pane_ParamLimits

0xb434,	// (0x0004951d) main_call2_pane

0xc89f,	// (0x0004a988) popup_phob_thumbnail2_window_ParamLimits

0xc89f,	// (0x0004a988) popup_phob_thumbnail2_window

0x4e55,	// (0x00042f3e) aid_hotspot_pointer_arrow_pane

0x4e5d,	// (0x00042f46) aid_hotspot_pointer_hand_pane

0x54c0,	// (0x000435a9) phob_pre_status_pane_g5

0x305f,	// (0x00041148) cams_zoom_pane_ParamLimits

0x306b,	// (0x00041154) image_vga_pane_ParamLimits

0x307a,	// (0x00041163) main_camera_pane_g1_ParamLimits

0x3088,	// (0x00041171) main_camera_pane_g2_ParamLimits

0x3094,	// (0x0004117d) main_camera_pane_g3_ParamLimits

0x30a2,	// (0x0004118b) main_camera_pane_g4_ParamLimits

0x30b0,	// (0x00041199) main_camera_pane_g5_ParamLimits

0x30be,	// (0x000411a7) main_camera_pane_g6_ParamLimits

0x30cc,	// (0x000411b5) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0004d2f8) main_camera_pane_g_ParamLimits

0x30da,	// (0x000411c3) main_camera_pane_t1_ParamLimits

0x30ec,	// (0x000411d5) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0004d309) main_camera_pane_t_ParamLimits

0xa83d,	// (0x00048926) bg_popup_preview_window_pane_cp01_ParamLimits

0xa83d,	// (0x00048926) bg_popup_preview_window_pane_cp01

0xb88f,	// (0x00049978) popup_phob_thumbnail2_window_g1_ParamLimits

0xb88f,	// (0x00049978) popup_phob_thumbnail2_window_g1

0xa5e2,	// (0x000486cb) call2_cli_visual_pane

0x51b7,	// (0x000432a0) popup_call2_audio_conf_window_ParamLimits

0x51b7,	// (0x000432a0) popup_call2_audio_conf_window

0x51d0,	// (0x000432b9) popup_call2_audio_first_window_ParamLimits

0x51d0,	// (0x000432b9) popup_call2_audio_first_window

0x526e,	// (0x00043357) popup_call2_audio_in_window_ParamLimits

0x526e,	// (0x00043357) popup_call2_audio_in_window

0x52b2,	// (0x0004339b) popup_call2_audio_out_window_ParamLimits

0x52b2,	// (0x0004339b) popup_call2_audio_out_window

0x531c,	// (0x00043405) popup_call2_audio_second_window_ParamLimits

0x531c,	// (0x00043405) popup_call2_audio_second_window

0x537a,	// (0x00043463) popup_call2_audio_wait_window_ParamLimits

0x537a,	// (0x00043463) popup_call2_audio_wait_window

0xa5e2,	// (0x000486cb) bg_popup_call2_act_pane_cp03

0xa81f,	// (0x00048908) list_conf_pane_cp

0xb89b,	// (0x00049984) popup_call2_audio_conf_window_t1

0xb8a9,	// (0x00049992) list_single_graphic_popup_conf2_pane_ParamLimits

0xb8a9,	// (0x00049992) list_single_graphic_popup_conf2_pane

0xb255,	// (0x0004933e) list_highlight_pane_cp04

0xb8bc,	// (0x000499a5) list_single_graphic_popup_conf2_pane_g1

0xb266,	// (0x0004934f) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0004d600) list_single_graphic_popup_conf2_pane_g

0xb8c6,	// (0x000499af) list_single_graphic_popup_conf2_pane_t1

0xb8d4,	// (0x000499bd) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8d4,	// (0x000499bd) bg_popup_call2_act_pane_cp01

0xb96a,	// (0x00049a53) call_type_pane_cp05_ParamLimits

0xb96a,	// (0x00049a53) call_type_pane_cp05

0xb9be,	// (0x00049aa7) popup_call2_audio_second_window_g1_ParamLimits

0xb9be,	// (0x00049aa7) popup_call2_audio_second_window_g1

0xba12,	// (0x00049afb) popup_call2_audio_second_window_g2_ParamLimits

0xba12,	// (0x00049afb) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0004d605) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0004d605) popup_call2_audio_second_window_g

0xba77,	// (0x00049b60) popup_call2_audio_second_window_t1_ParamLimits

0xba77,	// (0x00049b60) popup_call2_audio_second_window_t1

0xbb32,	// (0x00049c1b) popup_call2_audio_second_window_t2_ParamLimits

0xbb32,	// (0x00049c1b) popup_call2_audio_second_window_t2

0xbb85,	// (0x00049c6e) popup_call2_audio_second_window_t3_ParamLimits

0xbb85,	// (0x00049c6e) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0004d60c) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0004d60c) popup_call2_audio_second_window_t

0xa5e2,	// (0x000486cb) bg_popup_call2_in_pane_cp02

0xa5ec,	// (0x000486d5) call_type_pane_cp04

0xa5f4,	// (0x000486dd) popup_call2_audio_wait_window_g1

0xa5fc,	// (0x000486e5) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0004d1e5) popup_call2_audio_wait_window_g

0xa604,	// (0x000486ed) popup_call2_audio_wait_window_t3

0xbc78,	// (0x00049d61) bg_popup_call2_act_pane_ParamLimits

0xbc78,	// (0x00049d61) bg_popup_call2_act_pane

0xbd38,	// (0x00049e21) call_type_pane_cp03_ParamLimits

0xbd38,	// (0x00049e21) call_type_pane_cp03

0xbd9c,	// (0x00049e85) popup_call2_audio_first_window_g1_ParamLimits

0xbd9c,	// (0x00049e85) popup_call2_audio_first_window_g1

0xbe0c,	// (0x00049ef5) popup_call2_audio_first_window_g2_ParamLimits

0xbe0c,	// (0x00049ef5) popup_call2_audio_first_window_g2

0xb16f,	// (0x00049258) popup_call2_audio_first_window_g3_ParamLimits

0xb16f,	// (0x00049258) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0004d615) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0004d615) popup_call2_audio_first_window_g

0xbeea,	// (0x00049fd3) popup_call2_audio_first_window_t1_ParamLimits

0xbeea,	// (0x00049fd3) popup_call2_audio_first_window_t1

0xbfed,	// (0x0004a0d6) popup_call2_audio_first_window_t4_ParamLimits

0xbfed,	// (0x0004a0d6) popup_call2_audio_first_window_t4

0xc0d0,	// (0x0004a1b9) popup_call2_audio_first_window_t5_ParamLimits

0xc0d0,	// (0x0004a1b9) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0004d620) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0004d620) popup_call2_audio_first_window_t

0xa835,	// (0x0004891e) bg_popup_call2_act_pane_g1

0xc73f,	// (0x0004a828) popup_cale_lunar_info_window_t1

0xc74d,	// (0x0004a836) popup_cale_lunar_info_window_t2

0xc75b,	// (0x0004a844) popup_cale_lunar_info_window_t3

0xa5e2,	// (0x000486cb) bg_popup_call2_bubble_pane

0xc1d1,	// (0x0004a2ba) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1d1,	// (0x0004a2ba) bg_popup_call2_in_pane_cp01

0xa2be,	// (0x000483a7) call_type_pane_cp02

0xc219,	// (0x0004a302) popup_call2_audio_out_window_g1_ParamLimits

0xc219,	// (0x0004a302) popup_call2_audio_out_window_g1

0xc245,	// (0x0004a32e) popup_call2_audio_out_window_g2_ParamLimits

0xc245,	// (0x0004a32e) popup_call2_audio_out_window_g2

0xc26d,	// (0x0004a356) popup_call2_audio_out_window_g3_ParamLimits

0xc26d,	// (0x0004a356) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0004d629) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0004d629) popup_call2_audio_out_window_g

0xc2a8,	// (0x0004a391) popup_call2_audio_out_window_t1_ParamLimits

0xc2a8,	// (0x0004a391) popup_call2_audio_out_window_t1

0xc307,	// (0x0004a3f0) popup_call2_audio_out_window_t2_ParamLimits

0xc307,	// (0x0004a3f0) popup_call2_audio_out_window_t2

0xc35b,	// (0x0004a444) popup_call2_audio_out_window_t3_ParamLimits

0xc35b,	// (0x0004a444) popup_call2_audio_out_window_t3

0xc371,	// (0x0004a45a) popup_call2_audio_out_window_t4_ParamLimits

0xc371,	// (0x0004a45a) popup_call2_audio_out_window_t4

0xc387,	// (0x0004a470) popup_call2_audio_out_window_t5_ParamLimits

0xc387,	// (0x0004a470) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0004d632) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0004d632) popup_call2_audio_out_window_t

0xc3eb,	// (0x0004a4d4) bg_popup_call2_in_pane_ParamLimits

0xc3eb,	// (0x0004a4d4) bg_popup_call2_in_pane

0xc447,	// (0x0004a530) popup_call2_audio_in_window_g1_ParamLimits

0xc447,	// (0x0004a530) popup_call2_audio_in_window_g1

0xc47f,	// (0x0004a568) popup_call2_audio_in_window_g2_ParamLimits

0xc47f,	// (0x0004a568) popup_call2_audio_in_window_g2

0xc4b7,	// (0x0004a5a0) popup_call2_audio_in_window_g3_ParamLimits

0xc4b7,	// (0x0004a5a0) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0004d63f) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0004d63f) popup_call2_audio_in_window_g

0xc50f,	// (0x0004a5f8) popup_call2_audio_in_window_t1_ParamLimits

0xc50f,	// (0x0004a5f8) popup_call2_audio_in_window_t1

0xc58f,	// (0x0004a678) popup_call2_audio_in_window_t2_ParamLimits

0xc58f,	// (0x0004a678) popup_call2_audio_in_window_t2

0xc60f,	// (0x0004a6f8) popup_call2_audio_in_window_t3_ParamLimits

0xc60f,	// (0x0004a6f8) popup_call2_audio_in_window_t3

0xc629,	// (0x0004a712) popup_call2_audio_in_window_t4_ParamLimits

0xc629,	// (0x0004a712) popup_call2_audio_in_window_t4

0xc63b,	// (0x0004a724) popup_call2_audio_in_window_t5_ParamLimits

0xc63b,	// (0x0004a724) popup_call2_audio_in_window_t5

0xc650,	// (0x0004a739) popup_call2_audio_in_window_t6_ParamLimits

0xc650,	// (0x0004a739) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0004d648) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0004d648) popup_call2_audio_in_window_t

0xa835,	// (0x0004891e) bg_popup_call2_in_pane_g1

0xc769,	// (0x0004a852) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0004d6b0) popup_cale_lunar_info_window_t

0xa83d,	// (0x00048926) bg_popup_call2_rect_pane_ParamLimits

0xa83d,	// (0x00048926) bg_popup_call2_rect_pane

0xa5e2,	// (0x000486cb) call2_cli_visual_graphic_pane

0xa5e2,	// (0x000486cb) call2_cli_visual_text_pane

0x5842,	// (0x0004392b) smil_status_volume_pane_g3

0x0002,

0xa985,	// (0x00048a6e) call2_cli_visual_graphic_pane_g1

0xa985,	// (0x00048a6e) call2_cli_visual_graphic_pane_g2

0xa985,	// (0x00048a6e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0004d655) call2_cli_visual_graphic_pane_g

0xc665,	// (0x0004a74e) bg_popup_call2_rect_pane_g1

0xaa23,	// (0x00048b0c) bg_popup_call2_rect_pane_g2

0xc66d,	// (0x0004a756) bg_popup_call2_rect_pane_g3

0xc675,	// (0x0004a75e) bg_popup_call2_rect_pane_g4

0xc67d,	// (0x0004a766) bg_popup_call2_rect_pane_g5

0xc685,	// (0x0004a76e) bg_popup_call2_rect_pane_g6

0xc68d,	// (0x0004a776) bg_popup_call2_rect_pane_g7

0xc695,	// (0x0004a77e) bg_popup_call2_rect_pane_g8

0xc69d,	// (0x0004a786) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0004d65c) bg_popup_call2_rect_pane_g

0xc6a5,	// (0x0004a78e) bg_popup_call2_bubble_pane_g1

0xc6ad,	// (0x0004a796) bg_popup_call2_bubble_pane_g2

0xc6b5,	// (0x0004a79e) bg_popup_call2_bubble_pane_g3

0xc6bd,	// (0x0004a7a6) bg_popup_call2_bubble_pane_g4

0xc6c5,	// (0x0004a7ae) bg_popup_call2_bubble_pane_g5

0xc6cd,	// (0x0004a7b6) bg_popup_call2_bubble_pane_g6

0xc6d5,	// (0x0004a7be) bg_popup_call2_bubble_pane_g7

0xc6dd,	// (0x0004a7c6) bg_popup_call2_bubble_pane_g8

0xc6e5,	// (0x0004a7ce) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0004d66f) bg_popup_call2_bubble_pane_g

0x27d7,	// (0x000408c0) aid_cale_week_size_cell_pane

0x3100,	// (0x000411e9) aid_cams_cif_uncrop_pane_ParamLimits

0x3100,	// (0x000411e9) aid_cams_cif_uncrop_pane

0x325d,	// (0x00041346) aid_cams_size_cell_ParamLimits

0x325d,	// (0x00041346) aid_cams_size_cell

0x3269,	// (0x00041352) grid_cams_pane_ParamLimits

0x3277,	// (0x00041360) linegrid_cams_pane_ParamLimits

0x3348,	// (0x00041431) call_video_pane_t1

0x3365,	// (0x0004144e) call_video_pane_t2

0x0001,

0xf273,	// (0x0004d35c) call_video_pane_t

0x3831,	// (0x0004191a) aid_cale_month_size_cell_pane_ParamLimits

0x3831,	// (0x0004191a) aid_cale_month_size_cell_pane

0xf610,	// (0x0004d6f9) smil_status_volume_pane_g

0x584f,	// (0x00043938) volume_smil_pane_ParamLimits

0xa188,	// (0x00048271) aid_popup2_width_pane

0x26d9,	// (0x000407c2) cell_qdial_pane_g4_ParamLimits

0x26d9,	// (0x000407c2) cell_qdial_pane_g4

0x4767,	// (0x00042850) aid_blid_cardinal_pane_ParamLimits

0x4777,	// (0x00042860) aid_blid_destination_pane_ParamLimits

0x4777,	// (0x00042860) aid_blid_destination_pane

0xa83d,	// (0x00048926) bg_popup_call_poc_act_pane_ParamLimits

0xa83d,	// (0x00048926) bg_popup_call_poc_act_pane

0xa83d,	// (0x00048926) bg_popup_call_poc_inact_pane_ParamLimits

0xa83d,	// (0x00048926) bg_popup_call_poc_inact_pane

0xc6ed,	// (0x0004a7d6) bg_popup_call_poc_act_pane_g1

0xc6f5,	// (0x0004a7de) bg_popup_call_poc_act_pane_g2

0xc6fd,	// (0x0004a7e6) bg_popup_call_poc_act_pane_g3

0xc6bd,	// (0x0004a7a6) bg_popup_call_poc_act_pane_g4

0xc6c5,	// (0x0004a7ae) bg_popup_call_poc_act_pane_g5

0xc705,	// (0x0004a7ee) bg_popup_call_poc_act_pane_g6

0xc6d5,	// (0x0004a7be) bg_popup_call_poc_act_pane_g7

0xc70d,	// (0x0004a7f6) bg_popup_call_poc_act_pane_g8

0xa5e2,	// (0x000486cb) main_usb_pane

0xc876,	// (0x0004a95f) popup_cale_lunar_info_window

0x367d,	// (0x00041766) im_reading_pane_t1_ParamLimits

0xac01,	// (0x00048cea) list_im_pane_ParamLimits

0xac12,	// (0x00048cfb) scroll_pane_cp07_ParamLimits

0xa5e2,	// (0x000486cb) grid_highlight_pane_cp012

0xa83d,	// (0x00048926) mup_scale_pane_ParamLimits

0xb16f,	// (0x00049258) main_usb_pane_g1_ParamLimits

0xb16f,	// (0x00049258) main_usb_pane_g1

0x53e3,	// (0x000434cc) main_usb_pane_g2_ParamLimits

0x53e3,	// (0x000434cc) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0004d699) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0004d699) main_usb_pane_g

0x53ef,	// (0x000434d8) main_usb_pane_t1_ParamLimits

0x53ef,	// (0x000434d8) main_usb_pane_t1

0x5401,	// (0x000434ea) main_usb_pane_t2_ParamLimits

0x5401,	// (0x000434ea) main_usb_pane_t2

0x5413,	// (0x000434fc) main_usb_pane_t3_ParamLimits

0x5413,	// (0x000434fc) main_usb_pane_t3

0x5425,	// (0x0004350e) main_usb_pane_t4_ParamLimits

0x5425,	// (0x0004350e) main_usb_pane_t4

0x5437,	// (0x00043520) main_usb_pane_t5_ParamLimits

0x5437,	// (0x00043520) main_usb_pane_t5

0x5449,	// (0x00043532) main_usb_pane_t6_ParamLimits

0x5449,	// (0x00043532) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0004d69e) main_usb_pane_t_ParamLimits

0x4706,	// (0x000427ef) aid_text_placing

0x4711,	// (0x000427fa) main_location2_pane_t1_ParamLimits

0x4727,	// (0x00042810) main_location2_pane_t2_ParamLimits

0x473d,	// (0x00042826) main_location2_pane_t3_ParamLimits

0x4753,	// (0x0004283c) main_location2_pane_t4_ParamLimits

0x4753,	// (0x0004283c) main_location2_pane_t4

0xf3d4,	// (0x0004d4bd) main_location2_pane_t_ParamLimits

0xa879,	// (0x00048962) find_pinb_pane_g2_ParamLimits

0xa879,	// (0x00048962) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0004d20b) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0004d20b) find_pinb_pane_g

0xa885,	// (0x0004896e) find_pinb_pane_t1_ParamLimits

0xa897,	// (0x00048980) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0004d210) find_pinb_pane_t_ParamLimits

0xa5e2,	// (0x000486cb) main_call3_pane

0x3db0,	// (0x00041e99) cale_month_day_heading_pane_t1_ParamLimits

0x3e32,	// (0x00041f1b) cale_month_day_heading_pane_t2_ParamLimits

0x3ebf,	// (0x00041fa8) cale_month_day_heading_pane_t3_ParamLimits

0x3f4c,	// (0x00042035) cale_month_day_heading_pane_t4_ParamLimits

0x3fd9,	// (0x000420c2) cale_month_day_heading_pane_t5_ParamLimits

0x406e,	// (0x00042157) cale_month_day_heading_pane_t6_ParamLimits

0x410b,	// (0x000421f4) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0004d394) cale_month_day_heading_pane_t_ParamLimits

0x43b7,	// (0x000424a0) smil_status_volume_pane

0x4fa1,	// (0x0004308a) postcard_address_pane_ParamLimits

0x4fa1,	// (0x0004308a) postcard_address_pane

0x4faf,	// (0x00043098) postcard_message_pane_ParamLimits

0x4faf,	// (0x00043098) postcard_message_pane

0x53b9,	// (0x000434a2) call2_cli_visual_pane_t1_ParamLimits

0x53b9,	// (0x000434a2) call2_cli_visual_pane_t1

0x59ae,	// (0x00043a97) postcard_message_pane_t1_ParamLimits

0x59ae,	// (0x00043a97) postcard_message_pane_t1

0x5997,	// (0x00043a80) postcard_address_pane_t1_ParamLimits

0x5997,	// (0x00043a80) postcard_address_pane_t1

0x5988,	// (0x00043a71) popup_call3_audio_in_window_ParamLimits

0x5988,	// (0x00043a71) popup_call3_audio_in_window

0x5866,	// (0x0004394f) bg_popup_call3_in_pane_ParamLimits

0x5866,	// (0x0004394f) bg_popup_call3_in_pane

0x58ce,	// (0x000439b7) popup_call3_audio_in_window_g1_ParamLimits

0x58ce,	// (0x000439b7) popup_call3_audio_in_window_g1

0x58e6,	// (0x000439cf) popup_call3_audio_in_window_g2_ParamLimits

0x58e6,	// (0x000439cf) popup_call3_audio_in_window_g2

0x58fe,	// (0x000439e7) popup_call3_audio_in_window_g3_ParamLimits

0x58fe,	// (0x000439e7) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0004d700) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0004d700) popup_call3_audio_in_window_g

0x5926,	// (0x00043a0f) popup_call3_audio_in_window_t1_ParamLimits

0x5926,	// (0x00043a0f) popup_call3_audio_in_window_t1

0x594e,	// (0x00043a37) popup_call3_audio_in_window_t2_ParamLimits

0x594e,	// (0x00043a37) popup_call3_audio_in_window_t2

0x5976,	// (0x00043a5f) popup_call3_audio_in_window_t3_ParamLimits

0x5976,	// (0x00043a5f) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0004d709) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0004d709) popup_call3_audio_in_window_t

0xb434,	// (0x0004951d) bg_popup_call3_rect_pane

0xc665,	// (0x0004a74e) bg_popup_call3_rect_pane_g1

0xaa23,	// (0x00048b0c) bg_popup_call3_rect_pane_g2

0xc66d,	// (0x0004a756) bg_popup_call3_rect_pane_g3

0xc675,	// (0x0004a75e) bg_popup_call3_rect_pane_g4

0xc67d,	// (0x0004a766) bg_popup_call3_rect_pane_g5

0xc685,	// (0x0004a76e) bg_popup_call3_rect_pane_g6

0xc68d,	// (0x0004a776) bg_popup_call3_rect_pane_g7

0x4bad,	// (0x00042c96) mup_visualizer_osc_pane

0xb4f3,	// (0x000495dc) mup_visualizer_spec_pane

0x5886,	// (0x0004396f) call3_video_qcif_pane_ParamLimits

0x5886,	// (0x0004396f) call3_video_qcif_pane

0x5898,	// (0x00043981) call3_video_qcif_uncrop_pane_ParamLimits

0x5898,	// (0x00043981) call3_video_qcif_uncrop_pane

0x58a8,	// (0x00043991) call3_video_subqcif_pane_ParamLimits

0x58a8,	// (0x00043991) call3_video_subqcif_pane

0x58bc,	// (0x000439a5) call3_video_subqcif_uncrop_pane_ParamLimits

0x58bc,	// (0x000439a5) call3_video_subqcif_uncrop_pane

0x5916,	// (0x000439ff) popup_call3_audio_in_window_g4_ParamLimits

0x5916,	// (0x000439ff) popup_call3_audio_in_window_g4

0x5831,	// (0x0004391a) mup_spec_half_pane

0x583a,	// (0x00043923) mup_spec_half_pane_cp

0xc911,	// (0x0004a9fa) mup_osc_middle_pane

0xc91a,	// (0x0004aa03) mup_visualizer_osc_pane_g1

0x5811,	// (0x000438fa) mup_spec_bar_pane_ParamLimits

0x5811,	// (0x000438fa) mup_spec_bar_pane

0xc8fe,	// (0x0004a9e7) mup_spec_bar_pane_g1

0xc908,	// (0x0004a9f1) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0004d6f4) mup_spec_bar_pane_g

0x27d7,	// (0x000408c0) aid_cale_week_size_cell_pane_ParamLimits

0x27f1,	// (0x000408da) bg_cale_heading_pane_ParamLimits

0xaa57,	// (0x00048b40) bg_cale_pane_cp01_ParamLimits

0x281a,	// (0x00040903) cale_week_corner_pane_ParamLimits

0x2839,	// (0x00040922) cale_week_day_heading_pane_ParamLimits

0x2867,	// (0x00040950) cale_week_scroll_pane_g1_ParamLimits

0x288b,	// (0x00040974) cale_week_scroll_pane_g2_ParamLimits

0x28a3,	// (0x0004098c) cale_week_scroll_pane_g3_ParamLimits

0x28bb,	// (0x000409a4) cale_week_scroll_pane_g4_ParamLimits

0x28d3,	// (0x000409bc) cale_week_scroll_pane_g5_ParamLimits

0x28eb,	// (0x000409d4) cale_week_scroll_pane_g6_ParamLimits

0x290b,	// (0x000409f4) cale_week_scroll_pane_g7_ParamLimits

0x292b,	// (0x00040a14) cale_week_scroll_pane_g8_ParamLimits

0x294b,	// (0x00040a34) cale_week_scroll_pane_g9_ParamLimits

0x2968,	// (0x00040a51) cale_week_scroll_pane_g10_ParamLimits

0x2985,	// (0x00040a6e) cale_week_scroll_pane_g11_ParamLimits

0x29a2,	// (0x00040a8b) cale_week_scroll_pane_g12_ParamLimits

0x29bf,	// (0x00040aa8) cale_week_scroll_pane_g13_ParamLimits

0x29e4,	// (0x00040acd) cale_week_scroll_pane_g14_ParamLimits

0x2a0d,	// (0x00040af6) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0004d29c) cale_week_scroll_pane_g_ParamLimits

0x2a36,	// (0x00040b1f) cale_week_time_pane_ParamLimits

0x2a56,	// (0x00040b3f) grid_cale_week_pane_ParamLimits

0xaa75,	// (0x00048b5e) listscroll_cale_week_pane_t1

0xaa87,	// (0x00048b70) scroll_pane_cp08_ParamLimits

0x389e,	// (0x00041987) cale_month_corner_pane_ParamLimits

0xae32,	// (0x00048f1b) cale_month_pane_t1

0x3d42,	// (0x00041e2b) cale_month_week_pane_ParamLimits

0xb16f,	// (0x00049258) popup_call_status_window_g1_ParamLimits

0x450f,	// (0x000425f8) popup_call_status_window_g2_ParamLimits

0x451b,	// (0x00042604) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0004d444) popup_call_status_window_g_ParamLimits

0xb1d6,	// (0x000492bf) aid_call2_pane

0x0e07,	// (0x0003eef0) msg_header_pane_g1

0x4fa1,	// (0x0004308a) postcard_address2_pane_ParamLimits

0x4fa1,	// (0x0004308a) postcard_address2_pane

0x4faf,	// (0x00043098) postcard_message2_pane_ParamLimits

0x4faf,	// (0x00043098) postcard_message2_pane

0x57b8,	// (0x000438a1) message2_row_pane_ParamLimits

0x57b8,	// (0x000438a1) message2_row_pane

0x57d2,	// (0x000438bb) address2_row_pane_ParamLimits

0x57d2,	// (0x000438bb) address2_row_pane

0xc8cc,	// (0x0004a9b5) postcard_message2_row_pane_g1

0xc8d4,	// (0x0004a9bd) postcard_message2_row_pane_t1

0xc8cc,	// (0x0004a9b5) address2_row_pane_g1

0xc8d4,	// (0x0004a9bd) address2_row_pane_t1

0x2fb4,	// (0x0004109d) aid_size_cell_vorec

0xa5e2,	// (0x000486cb) main_rss_pane

0x57e5,	// (0x000438ce) rss_list_single_pane_ParamLimits

0x57e5,	// (0x000438ce) rss_list_single_pane

0xc8e2,	// (0x0004a9cb) rss_list_single_pane_t1

0xc8f0,	// (0x0004a9d9) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0004d6ef) rss_list_single_pane_t

0xa5e2,	// (0x000486cb) main_camera2_pane

0xa5e2,	// (0x000486cb) main_video2_pane

0x5a12,	// (0x00043afb) cams_zoom_pane_cp2_ParamLimits

0x5a12,	// (0x00043afb) cams_zoom_pane_cp2

0x5a1e,	// (0x00043b07) image2_vga_pane_ParamLimits

0x5a1e,	// (0x00043b07) image2_vga_pane

0x5a2d,	// (0x00043b16) main_camera2_pane_g1_ParamLimits

0x5a2d,	// (0x00043b16) main_camera2_pane_g1

0x5a39,	// (0x00043b22) main_camera2_pane_g2_ParamLimits

0x5a39,	// (0x00043b22) main_camera2_pane_g2

0x5a45,	// (0x00043b2e) main_camera2_pane_g3_ParamLimits

0x5a45,	// (0x00043b2e) main_camera2_pane_g3

0x5a51,	// (0x00043b3a) main_camera2_pane_g4_ParamLimits

0x5a51,	// (0x00043b3a) main_camera2_pane_g4

0x5a5d,	// (0x00043b46) main_camera2_pane_g5_ParamLimits

0x5a5d,	// (0x00043b46) main_camera2_pane_g5

0x5a69,	// (0x00043b52) main_camera2_pane_g6_ParamLimits

0x5a69,	// (0x00043b52) main_camera2_pane_g6

0x5a75,	// (0x00043b5e) main_camera2_pane_g7_ParamLimits

0x5a75,	// (0x00043b5e) main_camera2_pane_g7

0x5a81,	// (0x00043b6a) main_camera2_pane_g8_ParamLimits

0x5a81,	// (0x00043b6a) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0004d710) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0004d710) main_camera2_pane_g

0x5a99,	// (0x00043b82) main_camera2_pane_t1_ParamLimits

0x5a99,	// (0x00043b82) main_camera2_pane_t1

0x5aab,	// (0x00043b94) main_camera2_pane_t2_ParamLimits

0x5aab,	// (0x00043b94) main_camera2_pane_t2

0x5abd,	// (0x00043ba6) main_camera2_pane_t3_ParamLimits

0x5abd,	// (0x00043ba6) main_camera2_pane_t3

0x5acf,	// (0x00043bb8) main_camera2_pane_t4_ParamLimits

0x5acf,	// (0x00043bb8) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0004d723) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0004d723) main_camera2_pane_t

0x5b2c,	// (0x00043c15) cams_zoom_pane_cp4_ParamLimits

0x5b2c,	// (0x00043c15) cams_zoom_pane_cp4

0x5b3c,	// (0x00043c25) image2_cif_pane_ParamLimits

0x5b3c,	// (0x00043c25) image2_cif_pane

0x5b51,	// (0x00043c3a) image2_subqcif_pane_ParamLimits

0x5b51,	// (0x00043c3a) image2_subqcif_pane

0x5b60,	// (0x00043c49) main_video2_pane_g1_ParamLimits

0x5b60,	// (0x00043c49) main_video2_pane_g1

0x5b72,	// (0x00043c5b) main_video2_pane_g2_ParamLimits

0x5b72,	// (0x00043c5b) main_video2_pane_g2

0x5b82,	// (0x00043c6b) main_video2_pane_g3_ParamLimits

0x5b82,	// (0x00043c6b) main_video2_pane_g3

0x5b92,	// (0x00043c7b) main_video2_pane_g4_ParamLimits

0x5b92,	// (0x00043c7b) main_video2_pane_g4

0x5ba2,	// (0x00043c8b) main_video2_pane_g5_ParamLimits

0x5ba2,	// (0x00043c8b) main_video2_pane_g5

0x5bb2,	// (0x00043c9b) main_video2_pane_g6_ParamLimits

0x5bb2,	// (0x00043c9b) main_video2_pane_g6

0x0005,

0xf649,	// (0x0004d732) main_video2_pane_g_ParamLimits

0xf649,	// (0x0004d732) main_video2_pane_g

0x5bc4,	// (0x00043cad) main_video2_pane_t1_ParamLimits

0x5bc4,	// (0x00043cad) main_video2_pane_t1

0x5bde,	// (0x00043cc7) main_video2_pane_t2_ParamLimits

0x5bde,	// (0x00043cc7) main_video2_pane_t2

0x5c04,	// (0x00043ced) main_video2_pane_t3_ParamLimits

0x5c04,	// (0x00043ced) main_video2_pane_t3

0x0002,

0xf656,	// (0x0004d73f) main_video2_pane_t_ParamLimits

0xf656,	// (0x0004d73f) main_video2_pane_t

0x5500,	// (0x000435e9) call_muted_g2

0x0001,

0xf5f8,	// (0x0004d6e1) call_muted_g

0xa5e2,	// (0x000486cb) main_mup2_pane

0xc951,	// (0x0004aa3a) main_mup2_pane_g1_ParamLimits

0xc951,	// (0x0004aa3a) main_mup2_pane_g1

0x5c2a,	// (0x00043d13) main_mup2_pane_g2_ParamLimits

0x5c2a,	// (0x00043d13) main_mup2_pane_g2

0x5ebc,	// (0x00043fa5) main_mup_pane_g13_cp1

0x5ec4,	// (0x00043fad) mup_volume_pane_cp1

0x5c4c,	// (0x00043d35) main_mup2_pane_g4_ParamLimits

0x5c4c,	// (0x00043d35) main_mup2_pane_g4

0x5c61,	// (0x00043d4a) main_mup2_pane_g5_ParamLimits

0x5c61,	// (0x00043d4a) main_mup2_pane_g5

0x5c76,	// (0x00043d5f) main_mup2_pane_g6_ParamLimits

0x5c76,	// (0x00043d5f) main_mup2_pane_g6

0x5c8b,	// (0x00043d74) main_mup2_pane_g7_ParamLimits

0x5c8b,	// (0x00043d74) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0004d746) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0004d746) main_mup2_pane_g

0x5ca7,	// (0x00043d90) main_mup2_pane_t1_ParamLimits

0x5ca7,	// (0x00043d90) main_mup2_pane_t1

0x5cbe,	// (0x00043da7) main_mup2_pane_t2_ParamLimits

0x5cbe,	// (0x00043da7) main_mup2_pane_t2

0x5cd5,	// (0x00043dbe) main_mup2_pane_t3_ParamLimits

0x5cd5,	// (0x00043dbe) main_mup2_pane_t3

0x5cec,	// (0x00043dd5) main_mup2_pane_t4_ParamLimits

0x5cec,	// (0x00043dd5) main_mup2_pane_t4

0x5d06,	// (0x00043def) main_mup2_pane_t5_ParamLimits

0x5d06,	// (0x00043def) main_mup2_pane_t5

0x5d20,	// (0x00043e09) main_mup2_pane_t6_ParamLimits

0x5d20,	// (0x00043e09) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0004d755) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0004d755) main_mup2_pane_t

0x5d58,	// (0x00043e41) mup2_visualizer_pane_ParamLimits

0x5d58,	// (0x00043e41) mup2_visualizer_pane

0x5d8e,	// (0x00043e77) mup_progress_pane_cp_ParamLimits

0x5d8e,	// (0x00043e77) mup_progress_pane_cp

0x5ea7,	// (0x00043f90) mup_volume_pane_cp_ParamLimits

0x5ea7,	// (0x00043f90) mup_volume_pane_cp

0x5da7,	// (0x00043e90) mup2_visualizer_pane_g1_ParamLimits

0x5da7,	// (0x00043e90) mup2_visualizer_pane_g1

0xc95d,	// (0x0004aa46) mup2_visualizer_pane_g2_ParamLimits

0xc95d,	// (0x0004aa46) mup2_visualizer_pane_g2

0x5dbc,	// (0x00043ea5) mup2_visualizer_pane_g3_ParamLimits

0x5dbc,	// (0x00043ea5) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0004d762) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0004d762) mup2_visualizer_pane_g

0xb725,	// (0x0004980e) aid_size_cell_fmradio

0x5616,	// (0x000436ff) aid_height_parent_landcape

0xac90,	// (0x00048d79) wml_content_pane_cp

0xac98,	// (0x00048d81) wml_tabs_pane

0xaca1,	// (0x00048d8a) popup_wml_miniature_window

0xaca9,	// (0x00048d92) scroll_pane_cp021

0xacbd,	// (0x00048da6) wml_content_pane_comp8

0xa5e2,	// (0x000486cb) bg_popup_sub_pane_cp05

0xc97b,	// (0x0004aa64) popup_wml_miniature_window_g1

0xc983,	// (0x0004aa6c) wml_miniature_view_pane

0x5dca,	// (0x00043eb3) aid_size_wml_view

0x5dd2,	// (0x00043ebb) wml_miniature_view_pane_g1

0x5ddb,	// (0x00043ec4) wml_miniature_view_pane_g2

0x5de4,	// (0x00043ecd) wml_miniature_view_pane_g3

0x5dec,	// (0x00043ed5) wml_miniature_view_pane_g4

0x5df4,	// (0x00043edd) wml_miniature_view_pane_g5

0x5dfc,	// (0x00043ee5) wml_miniature_view_pane_g6

0x5e04,	// (0x00043eed) wml_miniature_view_pane_g7

0x5e0c,	// (0x00043ef5) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0004d769) wml_miniature_view_pane_g

0xc951,	// (0x0004aa3a) background_graphic_ParamLimits

0xc951,	// (0x0004aa3a) background_graphic

0xc98b,	// (0x0004aa74) wml_tabs_2_pane

0xc994,	// (0x0004aa7d) wml_tabs_3_pane_ParamLimits

0xc994,	// (0x0004aa7d) wml_tabs_3_pane

0xc9a6,	// (0x0004aa8f) wml_tabs_4_pane_ParamLimits

0xc9a6,	// (0x0004aa8f) wml_tabs_4_pane

0xc9bc,	// (0x0004aaa5) wml_tabs_5_pane_ParamLimits

0xc9bc,	// (0x0004aaa5) wml_tabs_5_pane

0xc9d6,	// (0x0004aabf) wml_tabs_pane_g2_ParamLimits

0xc9d6,	// (0x0004aabf) wml_tabs_pane_g2

0xc9ea,	// (0x0004aad3) wml_tabs_pane_g3_ParamLimits

0xc9ea,	// (0x0004aad3) wml_tabs_pane_g3

0x5e14,	// (0x00043efd) wml_tabs_2_active_pane_ParamLimits

0x5e14,	// (0x00043efd) wml_tabs_2_active_pane

0x5e26,	// (0x00043f0f) wml_tabs_2_passive_pane_ParamLimits

0x5e26,	// (0x00043f0f) wml_tabs_2_passive_pane

0x5e38,	// (0x00043f21) wml_tabs_3_active_pane_cp_ParamLimits

0x5e38,	// (0x00043f21) wml_tabs_3_active_pane_cp

0x5e4b,	// (0x00043f34) wml_tabs_3_passive_pane_ParamLimits

0x5e4b,	// (0x00043f34) wml_tabs_3_passive_pane

0x5e5c,	// (0x00043f45) wml_tabs_3_passive_pane_cp_ParamLimits

0x5e5c,	// (0x00043f45) wml_tabs_3_passive_pane_cp

0x5e71,	// (0x00043f5a) tabs_4_active_pane

0x5e79,	// (0x00043f62) tabs_4_passive_pane

0x5e81,	// (0x00043f6a) tabs_4_passive_pane_cp

0x5e89,	// (0x00043f72) tabs_4_passive_pane_cp2

0x53db,	// (0x000434c4) aid_height_text

0x4b76,	// (0x00042c5f) mup_volume_cont_pane_ParamLimits

0x4b76,	// (0x00042c5f) mup_volume_cont_pane

0x232f,	// (0x00040418) aid_size_cell_pinb

0x2339,	// (0x00040422) aid_size_list_pinb

0x5d77,	// (0x00043e60) mup2_volume_cont_pane_ParamLimits

0x5d77,	// (0x00043e60) mup2_volume_cont_pane

0x5e93,	// (0x00043f7c) mup2_volume_cont_pane_g1_ParamLimits

0x5e93,	// (0x00043f7c) mup2_volume_cont_pane_g1

0x1fa9,	// (0x00040092) aid_size_cell_touch_ParamLimits

0x1fa9,	// (0x00040092) aid_size_cell_touch

0x2219,	// (0x00040302) touch_pane_ParamLimits

0x2219,	// (0x00040302) touch_pane

0xa176,	// (0x0004825f) main_rss2_pane

0xca07,	// (0x0004aaf0) listscroll_rss2_pane

0xca10,	// (0x0004aaf9) rss2_navigation_pane

0xca18,	// (0x0004ab01) list_rss2_pane

0xb2fa,	// (0x000493e3) scroll_pane_cp22

0xca20,	// (0x0004ab09) rss2_navigation_pane_g1

0xca29,	// (0x0004ab12) rss2_navigation_pane_g2

0xca31,	// (0x0004ab1a) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0004d77a) rss2_navigation_pane_g

0xca39,	// (0x0004ab22) rss2_navigation_pane_t1

0x5ecc,	// (0x00043fb5) rss2_list_single_pane_ParamLimits

0x5ecc,	// (0x00043fb5) rss2_list_single_pane

0xca47,	// (0x0004ab30) rss2_list_single_pane_t2

0xca55,	// (0x0004ab3e) rss2_list_single_pane_t3_ParamLimits

0xca55,	// (0x0004ab3e) rss2_list_single_pane_t3

0xca72,	// (0x0004ab5b) rss2_list_single_pane_t4

0x43a1,	// (0x0004248a) smil_status_pane_g1

0xa93e,	// (0x00048a27) main_image2_pane_ParamLimits

0xa93e,	// (0x00048a27) main_image2_pane

0x5a8d,	// (0x00043b76) main_camera2_pane_g9_ParamLimits

0x5a8d,	// (0x00043b76) main_camera2_pane_g9

0x5ae1,	// (0x00043bca) main_camera2_pane_t5_ParamLimits

0x5ae1,	// (0x00043bca) main_camera2_pane_t5

0x5af3,	// (0x00043bdc) main_camera2_pane_t6_ParamLimits

0x5af3,	// (0x00043bdc) main_camera2_pane_t6

0x5eef,	// (0x00043fd8) main_image2_pane_g1_ParamLimits

0x5eef,	// (0x00043fd8) main_image2_pane_g1

0x5178,	// (0x00043261) smil2_video_pane_ParamLimits

0x5178,	// (0x00043261) smil2_video_pane

0x0bcb,	// (0x0003ecb4) aid_zoom_text_primary_cp

0xa1c5,	// (0x000482ae) popup_preview_fixed_window

0xabf9,	// (0x00048ce2) im_reading_pane_g1

0x59d7,	// (0x00043ac0) cams2_bc_adjust_pane_cp_ParamLimits

0x59d7,	// (0x00043ac0) cams2_bc_adjust_pane_cp

0x5b1e,	// (0x00043c07) cams2_bc_adjust_pane_ParamLimits

0x5b1e,	// (0x00043c07) cams2_bc_adjust_pane

0x5efb,	// (0x00043fe4) cams2_bc_adjust_pane_g1

0x5f03,	// (0x00043fec) cams2_slider_pane

0x5f0c,	// (0x00043ff5) cams2_slider_pane_g1

0x5f15,	// (0x00043ffe) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0004d781) cams2_slider_pane_g

0x2434,	// (0x0004051d) calc_display_pane_ParamLimits

0x2452,	// (0x0004053b) calc_paper_pane_ParamLimits

0x246e,	// (0x00040557) grid_calc_pane_ParamLimits

0x4579,	// (0x00042662) popup_clock_digital_window_t1_ParamLimits

0xb6c2,	// (0x000497ab) main_image_pane_t1

0x241a,	// (0x00040503) aid_size_cell_calc_ParamLimits

0x241a,	// (0x00040503) aid_size_cell_calc

0x5648,	// (0x00043731) popup_blid_sat_info2_window_ParamLimits

0x5648,	// (0x00043731) popup_blid_sat_info2_window

0xca88,	// (0x0004ab71) aid_size_cell_blid

0xca90,	// (0x0004ab79) bg_popup_window_pane_cp07

0xcab3,	// (0x0004ab9c) grid_popup_blid_pane

0xcabd,	// (0x0004aba6) heading_pane_cp05_ParamLimits

0xcabd,	// (0x0004aba6) heading_pane_cp05

0xcb87,	// (0x0004ac70) cell_popup_blid_pane_ParamLimits

0xcb87,	// (0x0004ac70) cell_popup_blid_pane

0xcbb1,	// (0x0004ac9a) cell_popup_blid_pane_g1

0xcbb9,	// (0x0004aca2) cell_popup_blid_pane_t1

0x5d3d,	// (0x00043e26) mup2_indicator_pane_ParamLimits

0x5d3d,	// (0x00043e26) mup2_indicator_pane

0xb434,	// (0x0004951d) mup2_visualizer_osc_pane

0xc969,	// (0x0004aa52) mup2_visualizer_spec_pane_ParamLimits

0xc969,	// (0x0004aa52) mup2_visualizer_spec_pane

0x5f2f,	// (0x00044018) mup2_spec_half_pane

0x5f38,	// (0x00044021) mup2_spec_half_pane_cp

0x5f42,	// (0x0004402b) mup2_spec_bar_pane_ParamLimits

0x5f42,	// (0x0004402b) mup2_spec_bar_pane

0xc8fe,	// (0x0004a9e7) mup2_spec_bar_pane_g1

0xc908,	// (0x0004a9f1) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0004d6f4) mup2_spec_bar_pane_g

0x5f61,	// (0x0004404a) mup2_osc_middle_pane

0xc91a,	// (0x0004aa03) mup2_visualizer_osc_pane_g1

0xa1ef,	// (0x000482d8) popup_number_entry_window_t1_ParamLimits

0xa202,	// (0x000482eb) popup_number_entry_window_t2_ParamLimits

0xa214,	// (0x000482fd) popup_number_entry_window_t3_ParamLimits

0x2270,	// (0x00040359) popup_number_entry_window_t5_ParamLimits

0x2270,	// (0x00040359) popup_number_entry_window_t5

0xf0cd,	// (0x0004d1b6) popup_number_entry_window_t_ParamLimits

0xa226,	// (0x0004830f) text_title_cp2_ParamLimits

0x4e65,	// (0x00042f4e) aid_hotspot_pointer_text2_pane

0x4eff,	// (0x00042fe8) main_viewer_pane_g9_ParamLimits

0x4eff,	// (0x00042fe8) main_viewer_pane_g9

0xae32,	// (0x00048f1b) cale_month_pane_t1_ParamLimits

0xae58,	// (0x00048f41) bg_cale_pane_ParamLimits

0xae70,	// (0x00048f59) list_cale_pane_ParamLimits

0xae81,	// (0x00048f6a) listscroll_cale_day_pane_t1

0xae93,	// (0x00048f7c) scroll_pane_cp09_ParamLimits

0x4bb5,	// (0x00042c9e) main_mup_eq_pane_t1_ParamLimits

0x4bb5,	// (0x00042c9e) main_mup_eq_pane_t1

0x4bd1,	// (0x00042cba) main_mup_eq_pane_t2_ParamLimits

0x4bd1,	// (0x00042cba) main_mup_eq_pane_t2

0x4bed,	// (0x00042cd6) main_mup_eq_pane_t3_ParamLimits

0x4bed,	// (0x00042cd6) main_mup_eq_pane_t3

0x4c07,	// (0x00042cf0) main_mup_eq_pane_t4_ParamLimits

0x4c07,	// (0x00042cf0) main_mup_eq_pane_t4

0x4c21,	// (0x00042d0a) main_mup_eq_pane_t5_ParamLimits

0x4c21,	// (0x00042d0a) main_mup_eq_pane_t5

0x4c3b,	// (0x00042d24) main_mup_eq_pane_t6_ParamLimits

0x4c3b,	// (0x00042d24) main_mup_eq_pane_t6

0x4c51,	// (0x00042d3a) main_mup_eq_pane_t7_ParamLimits

0x4c51,	// (0x00042d3a) main_mup_eq_pane_t7

0x4c67,	// (0x00042d50) main_mup_eq_pane_t8_ParamLimits

0x4c67,	// (0x00042d50) main_mup_eq_pane_t8

0x4c7d,	// (0x00042d66) main_mup_eq_pane_t9_ParamLimits

0x4c7d,	// (0x00042d66) main_mup_eq_pane_t9

0x4c99,	// (0x00042d82) main_mup_eq_pane_t10_ParamLimits

0x4c99,	// (0x00042d82) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0004d543) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0004d543) main_mup_eq_pane_t

0x4d5e,	// (0x00042e47) mup_equalizer_pane_cp5_ParamLimits

0x4d76,	// (0x00042e5f) mup_equalizer_pane_cp6_ParamLimits

0x4d8e,	// (0x00042e77) mup_equalizer_pane_cp7_ParamLimits

0xa176,	// (0x0004825f) main_gallery_pane

0xc923,	// (0x0004aa0c) smil2_volume_pane

0xc92b,	// (0x0004aa14) smil_status_volume_pane_g1_ParamLimits

0xc93e,	// (0x0004aa27) smil_status_volume_pane_g2_ParamLimits

0x5842,	// (0x0004392b) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0004d6f9) smil_status_volume_pane_g_ParamLimits

0xca90,	// (0x0004ab79) bg_popup_window_pane_cp07_ParamLimits

0xca9e,	// (0x0004ab87) blid_firmament_pane

0x5f6a,	// (0x00044053) aid_size_cell_gallery_ParamLimits

0x5f6a,	// (0x00044053) aid_size_cell_gallery

0x5f78,	// (0x00044061) grid_gallery_pane_ParamLimits

0x5f78,	// (0x00044061) grid_gallery_pane

0x5f88,	// (0x00044071) cell_gallery_pane_ParamLimits

0x5f88,	// (0x00044071) cell_gallery_pane

0xcbc7,	// (0x0004acb0) bg_cell_gallery_focus_pane_ParamLimits

0xcbc7,	// (0x0004acb0) bg_cell_gallery_focus_pane

0xcbd9,	// (0x0004acc2) cell_gallery_pane_g1_ParamLimits

0xcbd9,	// (0x0004acc2) cell_gallery_pane_g1

0x5fce,	// (0x000440b7) cell_gallery_pane_g2_ParamLimits

0x5fce,	// (0x000440b7) cell_gallery_pane_g2

0x5fdb,	// (0x000440c4) cell_gallery_pane_g3_ParamLimits

0x5fdb,	// (0x000440c4) cell_gallery_pane_g3

0xcbe5,	// (0x0004acce) cell_gallery_pane_g4_ParamLimits

0xcbe5,	// (0x0004acce) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0004d7a7) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0004d7a7) cell_gallery_pane_g

0xcbf1,	// (0x0004acda) bg_cell_gallery_focus_pane_g1

0xcbf9,	// (0x0004ace2) bg_cell_gallery_focus_pane_g2

0xcc01,	// (0x0004acea) bg_cell_gallery_focus_pane_g3

0xcc09,	// (0x0004acf2) bg_cell_gallery_focus_pane_g4

0xcc11,	// (0x0004acfa) bg_cell_gallery_focus_pane_g5

0xcc19,	// (0x0004ad02) bg_cell_gallery_focus_pane_g6

0xcc21,	// (0x0004ad0a) bg_cell_gallery_focus_pane_g7

0xcc29,	// (0x0004ad12) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0004d7b0) bg_cell_gallery_focus_pane_g

0xcc31,	// (0x0004ad1a) aid_firma_cardinal

0xcc45,	// (0x0004ad2e) blid_firmament_pane_t1

0xcc5c,	// (0x0004ad45) blid_firmament_pane_t2

0xcc73,	// (0x0004ad5c) blid_firmament_pane_t3

0xcc8a,	// (0x0004ad73) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0004d7c1) blid_firmament_pane_t

0xcca1,	// (0x0004ad8a) blid_sat_info_pane

0xccb1,	// (0x0004ad9a) blid_sat_info_pane_g1

0xccb1,	// (0x0004ad9a) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0004d7ca) blid_sat_info_pane_g

0xccbb,	// (0x0004ada4) blid_sat_info_pane_t1

0xccc9,	// (0x0004adb2) smil2_volume_content_pane

0xccd2,	// (0x0004adbb) smil2_volume_pane_g1

0xccda,	// (0x0004adc3) smil2_volume_content_pane_g1

0xcce3,	// (0x0004adcc) smil2_volume_content_pane_g2

0xccec,	// (0x0004add5) smil2_volume_content_pane_g3

0xccf5,	// (0x0004adde) smil2_volume_content_pane_g4

0xccfe,	// (0x0004ade7) smil2_volume_content_pane_g5

0xcd07,	// (0x0004adf0) smil2_volume_content_pane_g6

0xcd10,	// (0x0004adf9) smil2_volume_content_pane_g7

0xcd19,	// (0x0004ae02) smil2_volume_content_pane_g8

0xcd22,	// (0x0004ae0b) smil2_volume_content_pane_g9

0xcd2b,	// (0x0004ae14) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0004d7cf) smil2_volume_content_pane_g

0x2b14,	// (0x00040bfd) cale_week_day_heading_pane_t1_ParamLimits

0x2b5c,	// (0x00040c45) cale_week_day_heading_pane_t2_ParamLimits

0x2ba9,	// (0x00040c92) cale_week_day_heading_pane_t3_ParamLimits

0x2bf6,	// (0x00040cdf) cale_week_day_heading_pane_t4_ParamLimits

0x2c43,	// (0x00040d2c) cale_week_day_heading_pane_t5_ParamLimits

0x2c90,	// (0x00040d79) cale_week_day_heading_pane_t6_ParamLimits

0x2cdd,	// (0x00040dc6) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0004d2bb) cale_week_day_heading_pane_t_ParamLimits

0xaaa9,	// (0x00048b92) bg_cale_side_pane_ParamLimits

0x2d25,	// (0x00040e0e) cale_week_time_pane_t1_ParamLimits

0x2d69,	// (0x00040e52) cale_week_time_pane_t2_ParamLimits

0x2dad,	// (0x00040e96) cale_week_time_pane_t3_ParamLimits

0x2df1,	// (0x00040eda) cale_week_time_pane_t4_ParamLimits

0x2e35,	// (0x00040f1e) cale_week_time_pane_t5_ParamLimits

0x2e79,	// (0x00040f62) cale_week_time_pane_t6_ParamLimits

0x2ebd,	// (0x00040fa6) cale_week_time_pane_t7_ParamLimits

0x2f09,	// (0x00040ff2) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0004d2ca) cale_week_time_pane_t_ParamLimits

0x2f57,	// (0x00041040) cell_cale_week_pane_g2_ParamLimits

0xaaa9,	// (0x00048b92) bg_cale_side_pane_cp01_ParamLimits

0x41a8,	// (0x00042291) cale_month_week_pane_t1_ParamLimits

0x41c1,	// (0x000422aa) cale_month_week_pane_t2_ParamLimits

0x41da,	// (0x000422c3) cale_month_week_pane_t3_ParamLimits

0x41f3,	// (0x000422dc) cale_month_week_pane_t4_ParamLimits

0x420c,	// (0x000422f5) cale_month_week_pane_t5_ParamLimits

0x4227,	// (0x00042310) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0004d3a3) cale_month_week_pane_t_ParamLimits

0x436a,	// (0x00042453) cell_cale_month_pane_g1_ParamLimits

0xa176,	// (0x0004825f) main_cale_event_viewer_pane

0xa176,	// (0x0004825f) listscroll_cale_event_viewer_pane

0xcd34,	// (0x0004ae1d) list_cale_ev_pane

0xcd3c,	// (0x0004ae25) scroll_pane_cp023

0x5fe8,	// (0x000440d1) field_cale_ev_pane_ParamLimits

0x5fe8,	// (0x000440d1) field_cale_ev_pane

0xcd48,	// (0x0004ae31) field_cale_ev_content_pane_ParamLimits

0xcd48,	// (0x0004ae31) field_cale_ev_content_pane

0xcd54,	// (0x0004ae3d) field_cale_ev_pane_g1_ParamLimits

0xcd54,	// (0x0004ae3d) field_cale_ev_pane_g1

0xcd60,	// (0x0004ae49) field_cale_ev_pane_g2_ParamLimits

0xcd60,	// (0x0004ae49) field_cale_ev_pane_g2

0xcd78,	// (0x0004ae61) field_cale_ev_pane_g3_ParamLimits

0xcd78,	// (0x0004ae61) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0004d7e4) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0004d7e4) field_cale_ev_pane_g

0xcd90,	// (0x0004ae79) field_cale_ev_pane_t1_ParamLimits

0xcd90,	// (0x0004ae79) field_cale_ev_pane_t1

0x600c,	// (0x000440f5) field_cale_ev_content_pane_t1_ParamLimits

0x600c,	// (0x000440f5) field_cale_ev_content_pane_t1

0x4e4a,	// (0x00042f33) bg_button_pane_cp01

0x27bb,	// (0x000408a4) listscroll_cale_week_pane_ParamLimits

0x27cd,	// (0x000408b6) popup_toolbar_window_cp01

0xaa75,	// (0x00048b5e) listscroll_cale_week_pane_t1_ParamLimits

0x27bb,	// (0x000408a4) listscroll_cale_day_pane_ParamLimits

0x27cd,	// (0x000408b6) popup_toolbar_window_cp02

0xae81,	// (0x00048f6a) listscroll_cale_day_pane_t1_ParamLimits

0x27bb,	// (0x000408a4) main_cale_month_pane_ParamLimits

0x572c,	// (0x00043815) popup_toolbar_window_cp03_ParamLimits

0x572c,	// (0x00043815) popup_toolbar_window_cp03

0x5088,	// (0x00043171) main_image_pane_g2_ParamLimits

0x5088,	// (0x00043171) main_image_pane_g2

0x5094,	// (0x0004317d) main_image_pane_g3_ParamLimits

0x5094,	// (0x0004317d) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0004d5d5) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0004d5d5) main_image_pane_g

0xb6c2,	// (0x000497ab) main_image_pane_t1_ParamLimits

0x50a0,	// (0x00043189) main_image_pane_t2_ParamLimits

0x50a0,	// (0x00043189) main_image_pane_t2

0x50b2,	// (0x0004319b) main_image_pane_t3_ParamLimits

0x50b2,	// (0x0004319b) main_image_pane_t3

0x50c4,	// (0x000431ad) main_image_pane_t4_ParamLimits

0x50c4,	// (0x000431ad) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0004d5dc) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0004d5dc) main_image_pane_t

0x50d6,	// (0x000431bf) popup_image_details_window_cp01

0x50e0,	// (0x000431c9) popup_toobar_trans_pane_cp01_ParamLimits

0x50e0,	// (0x000431c9) popup_toobar_trans_pane_cp01

0x569d,	// (0x00043786) popup_image_details_window_ParamLimits

0x569d,	// (0x00043786) popup_image_details_window

0xc882,	// (0x0004a96b) popup_image_focus_window

0x59c9,	// (0x00043ab2) camera2_autofocus_pane_ParamLimits

0x59c9,	// (0x00043ab2) camera2_autofocus_pane

0xa176,	// (0x0004825f) bg_popup_sub_pane_cp06

0xcda7,	// (0x0004ae90) popup_image_focus_window_g1

0xcdaf,	// (0x0004ae98) popup_image_focus_window_g2

0xcdb7,	// (0x0004aea0) popup_image_focus_window_g3

0xcdbf,	// (0x0004aea8) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0004d7eb) popup_image_focus_window_g

0xcdc7,	// (0x0004aeb0) popup_image_focus_window_t1

0xcdd5,	// (0x0004aebe) popup_image_focus_window_t2

0xcde5,	// (0x0004aece) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0004d7f4) popup_image_focus_window_t

0xcdf3,	// (0x0004aedc) camera2_autofocus_pane_g1

0xa93e,	// (0x00048a27) bg_tb_trans_pane_cp01

0xce01,	// (0x0004aeea) popup_image_details_window_g1

0xce14,	// (0x0004aefd) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0004d806) popup_image_details_window_g

0xce3d,	// (0x0004af26) popup_image_details_window_t1

0xce4f,	// (0x0004af38) popup_image_details_window_t2

0xce68,	// (0x0004af51) popup_image_details_window_t3

0xce7c,	// (0x0004af65) popup_image_details_window_t4

0xce97,	// (0x0004af80) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0004d80d) popup_image_details_window_t

0xa8ee,	// (0x000489d7) bg_calc_paper_pane_ParamLimits

0xa176,	// (0x0004825f) grid_highlight_pane_cp013

0x256b,	// (0x00040654) list_calc_pane_ParamLimits

0x257d,	// (0x00040666) scroll_pane_cp024

0xa902,	// (0x000489eb) bg_calc_display_pane_ParamLimits

0x2585,	// (0x0004066e) calc_display_pane_t1_ParamLimits

0x259a,	// (0x00040683) calc_display_pane_t2_ParamLimits

0x25af,	// (0x00040698) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0004d23d) calc_display_pane_t_ParamLimits

0x2683,	// (0x0004076c) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0004d25a) cell_calc_pane_g

0x268c,	// (0x00040775) cell_calc_pane_t1

0xa98f,	// (0x00048a78) grid_highlight_pane_cp02_ParamLimits

0xa9a5,	// (0x00048a8e) toolbar_button_pane_cp01_ParamLimits

0xa9a5,	// (0x00048a8e) toolbar_button_pane_cp01

0xb707,	// (0x000497f0) temp_image_control_pane_ParamLimits

0xb707,	// (0x000497f0) temp_image_control_pane

0xa93e,	// (0x00048a27) main_mp3_pane

0xceb1,	// (0x0004af9a) temp_image_control_pane_g1_ParamLimits

0xceb1,	// (0x0004af9a) temp_image_control_pane_g1

0xcebf,	// (0x0004afa8) temp_image_control_pane_g2_ParamLimits

0xcebf,	// (0x0004afa8) temp_image_control_pane_g2

0xced1,	// (0x0004afba) temp_image_control_pane_g3_ParamLimits

0xced1,	// (0x0004afba) temp_image_control_pane_g3

0x6057,	// (0x00044140) temp_image_control_pane_g4_ParamLimits

0x6057,	// (0x00044140) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0004d818) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0004d818) temp_image_control_pane_g

0xceb1,	// (0x0004af9a) main_mp3_pane_g1

0x6068,	// (0x00044151) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0004d821) main_mp3_pane_g

0xcf14,	// (0x0004affd) main_mp3_pane_t1

0xab04,	// (0x00048bed) main_camera_pane_g8_ParamLimits

0xab04,	// (0x00048bed) main_camera_pane_g8

0x3213,	// (0x000412fc) main_video_pane_g7_ParamLimits

0x3213,	// (0x000412fc) main_video_pane_g7

0x5b0c,	// (0x00043bf5) main_camera2_pane_t7_ParamLimits

0x5b0c,	// (0x00043bf5) main_camera2_pane_t7

0xac50,	// (0x00048d39) scroll_pane_cp025_ParamLimits

0xac50,	// (0x00048d39) scroll_pane_cp025

0xac64,	// (0x00048d4d) scroll_pane_cp026_ParamLimits

0xac64,	// (0x00048d4d) scroll_pane_cp026

0xac73,	// (0x00048d5c) wml_content_pane_ParamLimits

0xa176,	// (0x0004825f) main_touch_calib_pane

0x610c,	// (0x000441f5) main_touch_calib_pane_g1

0x6118,	// (0x00044201) main_touch_calib_pane_g2

0x6124,	// (0x0004420d) main_touch_calib_pane_g3

0x6130,	// (0x00044219) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0004d83f) main_touch_calib_pane_g

0x613c,	// (0x00044225) main_touch_calib_pane_t1

0x6153,	// (0x0004423c) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0004d848) main_touch_calib_pane_t

0xb375,	// (0x0004945e) mup_progress_pane_cp02

0xb394,	// (0x0004947d) navi_pane_g1

0xb3f6,	// (0x000494df) navi_pane_mp_t3

0xa93e,	// (0x00048a27) main_mp3_pane_ParamLimits

0x576e,	// (0x00043857) navi_pane_ParamLimits

0xceb1,	// (0x0004af9a) main_mp3_pane_g1_ParamLimits

0x6068,	// (0x00044151) main_mp3_pane_g2_ParamLimits

0x6074,	// (0x0004415d) main_mp3_pane_g3_ParamLimits

0x6074,	// (0x0004415d) main_mp3_pane_g3

0x6080,	// (0x00044169) main_mp3_pane_g4_ParamLimits

0x6080,	// (0x00044169) main_mp3_pane_g4

0xcee1,	// (0x0004afca) main_mp3_pane_g5_ParamLimits

0xcee1,	// (0x0004afca) main_mp3_pane_g5

0xceef,	// (0x0004afd8) main_mp3_pane_g6_ParamLimits

0xceef,	// (0x0004afd8) main_mp3_pane_g6

0xcefc,	// (0x0004afe5) main_mp3_pane_g7_ParamLimits

0xcefc,	// (0x0004afe5) main_mp3_pane_g7

0xcf08,	// (0x0004aff1) main_mp3_pane_g8_ParamLimits

0xcf08,	// (0x0004aff1) main_mp3_pane_g8

0xf738,	// (0x0004d821) main_mp3_pane_g_ParamLimits

0x608c,	// (0x00044175) main_mp3_pane_t2

0x609c,	// (0x00044185) main_mp3_pane_t3

0xcf22,	// (0x0004b00b) main_mp3_pane_t4

0xcf30,	// (0x0004b019) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0004d832) main_mp3_pane_t

0xcf3e,	// (0x0004b027) mup_progress_pane_cp01

0x0bcb,	// (0x0003ecb4) aid_zoom_text_secondary2

0xcd34,	// (0x0004ae1d) list_cale_ev2_pane

0xcd3c,	// (0x0004ae25) scroll_pane_cp023_ParamLimits

0xdfaa,	// (0x0004c093) field_cale_ev2_pane_ParamLimits

0xdfaa,	// (0x0004c093) field_cale_ev2_pane

0x0e7c,	// (0x0003ef65) field_cale_ev2_pane_g1_ParamLimits

0x0e7c,	// (0x0003ef65) field_cale_ev2_pane_g1

0x0e88,	// (0x0003ef71) field_cale_ev2_pane_g2_ParamLimits

0x0e88,	// (0x0003ef71) field_cale_ev2_pane_g2

0x0ea0,	// (0x0003ef89) field_cale_ev2_pane_g3_ParamLimits

0x0ea0,	// (0x0003ef89) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0004d853) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0004d853) field_cale_ev2_pane_g

0x0ec4,	// (0x0003efad) field_cale_ev2_pane_t1_ParamLimits

0x0ec4,	// (0x0003efad) field_cale_ev2_pane_t1

0x0edb,	// (0x0003efc4) field_cale_ev2_pane_t2_ParamLimits

0x0edb,	// (0x0003efc4) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0004d85c) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0004d85c) field_cale_ev2_pane_t

0x4f67,	// (0x00043050) main_postcard_pane_g5_ParamLimits

0x4f67,	// (0x00043050) main_postcard_pane_g5

0x4f75,	// (0x0004305e) main_postcard_pane_g6_ParamLimits

0x4f75,	// (0x0004305e) main_postcard_pane_g6

0x3051,	// (0x0004113a) camera2_autofocus_pane_cp_ParamLimits

0x3051,	// (0x0004113a) camera2_autofocus_pane_cp

0xa93e,	// (0x00048a27) main_mup3_pane

0x61ce,	// (0x000442b7) main_mup3_pane_g1_ParamLimits

0x61ce,	// (0x000442b7) main_mup3_pane_g1

0x61ef,	// (0x000442d8) main_mup3_pane_g2_ParamLimits

0x61ef,	// (0x000442d8) main_mup3_pane_g2

0x626b,	// (0x00044354) main_mup3_pane_g3_ParamLimits

0x626b,	// (0x00044354) main_mup3_pane_g3

0x62b0,	// (0x00044399) main_mup3_pane_g4_ParamLimits

0x62b0,	// (0x00044399) main_mup3_pane_g4

0x62f3,	// (0x000443dc) main_mup3_pane_g5_ParamLimits

0x62f3,	// (0x000443dc) main_mup3_pane_g5

0x6338,	// (0x00044421) main_mup3_pane_g6_ParamLimits

0x6338,	// (0x00044421) main_mup3_pane_g6

0xcf46,	// (0x0004b02f) main_mup3_pane_g7_ParamLimits

0xcf46,	// (0x0004b02f) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0004d86c) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0004d86c) main_mup3_pane_g

0x63ae,	// (0x00044497) main_mup3_pane_t1_ParamLimits

0x63ae,	// (0x00044497) main_mup3_pane_t1

0x6417,	// (0x00044500) main_mup3_pane_t2_ParamLimits

0x6417,	// (0x00044500) main_mup3_pane_t2

0x64e0,	// (0x000445c9) main_mup3_pane_t4_ParamLimits

0x64e0,	// (0x000445c9) main_mup3_pane_t4

0x6534,	// (0x0004461d) main_mup3_pane_t5_ParamLimits

0x6534,	// (0x0004461d) main_mup3_pane_t5

0x65e2,	// (0x000446cb) main_mup3_pane_t6_ParamLimits

0x65e2,	// (0x000446cb) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0004d87d) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0004d87d) main_mup3_pane_t

0x668e,	// (0x00044777) mup3_progress_pane_ParamLimits

0x668e,	// (0x00044777) mup3_progress_pane

0x6708,	// (0x000447f1) popup_mup3_control_window_ParamLimits

0x6708,	// (0x000447f1) popup_mup3_control_window

0xcf54,	// (0x0004b03d) popup_mup3_text_window

0x6725,	// (0x0004480e) mup3_progress_pane_t1

0x6744,	// (0x0004482d) mup3_progress_pane_t2

0xcf5c,	// (0x0004b045) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0004d88a) mup3_progress_pane_t

0xcf79,	// (0x0004b062) mup_progress_pane_cp03

0xa176,	// (0x0004825f) bg_tb_trans_pane_cp04

0x6763,	// (0x0004484c) mup3_volume_pane

0x676b,	// (0x00044854) popup_mup3_control_window_g1

0xd8c3,	// (0x0004b9ac) mup3_volume_pane_g1

0xd8cc,	// (0x0004b9b5) mup3_volume_pane_g2

0xd8d5,	// (0x0004b9be) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0004d891) mup3_volume_pane_g

0xa176,	// (0x0004825f) bg_tb_trans_pane_cp03

0xcf89,	// (0x0004b072) popup_mup3_text_window_g1

0xcf91,	// (0x0004b07a) popup_mup3_text_window_t1

0xa978,	// (0x00048a61) list_calc_item_pane_g1_ParamLimits

0xc9fe,	// (0x0004aae7) mup_volume_pane_cp_g1

0x616c,	// (0x00044255) main_touch_calib_pane_t3

0x6182,	// (0x0004426b) main_touch_calib_pane_t4

0x6198,	// (0x00044281) main_touch_calib_pane_t5

0xa180,	// (0x00048269) aid_cell_size_toolbar2

0xa188,	// (0x00048271) aid_popup3_width_pane

0x0bc3,	// (0x0003ecac) aid_zoom_text_msg_primary

0x301c,	// (0x00041105) vorec_t7

0xa90e,	// (0x000489f7) bg_calc_paper_pane_g1_ParamLimits

0xa91a,	// (0x00048a03) bg_calc_paper_pane_g2_ParamLimits

0xa926,	// (0x00048a0f) bg_calc_paper_pane_g3_ParamLimits

0xa96c,	// (0x00048a55) bg_calc_paper_pane_g4_ParamLimits

0xa932,	// (0x00048a1b) bg_calc_paper_pane_g5_ParamLimits

0x25f0,	// (0x000406d9) bg_calc_paper_pane_g6_ParamLimits

0x2601,	// (0x000406ea) bg_calc_paper_pane_g7_ParamLimits

0x2612,	// (0x000406fb) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0004d244) bg_calc_paper_pane_g_ParamLimits

0x2625,	// (0x0004070e) calc_bg_paper_pane_g9_ParamLimits

0x3142,	// (0x0004122b) image_qvga_pane_ParamLimits

0x3142,	// (0x0004122b) image_qvga_pane

0xa83d,	// (0x00048926) bg_popup_sub_pane_cp04_ParamLimits

0xb63e,	// (0x00049727) popup_mup_playback_window_g1_ParamLimits

0xb64a,	// (0x00049733) popup_mup_playback_window_t1_ParamLimits

0xb65f,	// (0x00049748) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0004d5d0) popup_mup_playback_window_t_ParamLimits

0x5c3b,	// (0x00043d24) main_mup2_pane_g3_ParamLimits

0x5c3b,	// (0x00043d24) main_mup2_pane_g3

0x33ee,	// (0x000414d7) popup_toolbar_window_cp04

0xba66,	// (0x00049b4f) popup_call2_audio_second_window_g3_ParamLimits

0xba66,	// (0x00049b4f) popup_call2_audio_second_window_g3

0xbe70,	// (0x00049f59) popup_call2_audio_first_window_g4_ParamLimits

0xbe70,	// (0x00049f59) popup_call2_audio_first_window_g4

0xc4ef,	// (0x0004a5d8) popup_call2_audio_in_window_g4_ParamLimits

0xc4ef,	// (0x0004a5d8) popup_call2_audio_in_window_g4

0x507b,	// (0x00043164) aid_area_sk_bg_cut_ParamLimits

0x507b,	// (0x00043164) aid_area_sk_bg_cut

0xb674,	// (0x0004975d) aid_area_sk_bg_cut_2_ParamLimits

0xb674,	// (0x0004975d) aid_area_sk_bg_cut_2

0x5fbe,	// (0x000440a7) aid_placing_details_win

0x5fc6,	// (0x000440af) aid_placing_details_win_2

0xcdf3,	// (0x0004aedc) camera2_autofocus_pane_g1_ParamLimits

0x21af,	// (0x00040298) popup_fixed_preview_cale_window_ParamLimits

0x21af,	// (0x00040298) popup_fixed_preview_cale_window

0xb445,	// (0x0004952e) navi_slider_pane_g3

0xb44e,	// (0x00049537) navi_slider_pane_g4

0xb457,	// (0x00049540) navi_slider_pane_g5

0xb445,	// (0x0004952e) navi_slider_pane_g6

0x4923,	// (0x00042a0c) navi_slider_pane_g7

0xb56c,	// (0x00049655) mup_scale_pane_g3

0xb575,	// (0x0004965e) mup_scale_pane_g4

0xb57e,	// (0x00049667) mup_scale_pane_g5

0x4da6,	// (0x00042e8f) mup_scale_pane_g6

0x4daf,	// (0x00042e98) mup_scale_pane_g7

0xb445,	// (0x0004952e) cams2_slider_pane_g3

0xca80,	// (0x0004ab69) cams2_slider_pane_g4

0x5f1e,	// (0x00044007) cams2_slider_pane_g5

0xb445,	// (0x0004952e) cams2_slider_pane_g6

0x5f26,	// (0x0004400f) cams2_slider_pane_g7

0xccb1,	// (0x0004ad9a) camera2_autofocus_pane_cp_g1

0xc854,	// (0x0004a93d) bg_popup_preview_window_pane_cp02_ParamLimits

0xc854,	// (0x0004a93d) bg_popup_preview_window_pane_cp02

0xcf9f,	// (0x0004b088) list_fp_cale_pane_ParamLimits

0xcf9f,	// (0x0004b088) list_fp_cale_pane

0xcfab,	// (0x0004b094) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfab,	// (0x0004b094) popup_fixed_preview_cale_window_t1

0x6774,	// (0x0004485d) popup_fixed_preview_cale_window_t2_ParamLimits

0x6774,	// (0x0004485d) popup_fixed_preview_cale_window_t2

0x6789,	// (0x00044872) popup_fixed_preview_cale_window_t3_ParamLimits

0x6789,	// (0x00044872) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0004d898) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0004d898) popup_fixed_preview_cale_window_t

0x679e,	// (0x00044887) list_single_fp_cale_pane_ParamLimits

0x679e,	// (0x00044887) list_single_fp_cale_pane

0xcfc9,	// (0x0004b0b2) list_single_fp_cale_pane_g1_ParamLimits

0xcfc9,	// (0x0004b0b2) list_single_fp_cale_pane_g1

0xcfd5,	// (0x0004b0be) list_single_fp_cale_pane_g2_ParamLimits

0xcfd5,	// (0x0004b0be) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0004d89f) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0004d89f) list_single_fp_cale_pane_g

0xcfee,	// (0x0004b0d7) list_single_fp_cale_pane_t1_ParamLimits

0xcfee,	// (0x0004b0d7) list_single_fp_cale_pane_t1

0xd000,	// (0x0004b0e9) list_single_fp_cale_pane_t2_ParamLimits

0xd000,	// (0x0004b0e9) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0004d8a6) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0004d8a6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa176,	// (0x0004825f) main_dialer_pane

0x67ae,	// (0x00044897) aid_cell_size_keypad

0x67b8,	// (0x000448a1) dialer_ne_pane

0x67c2,	// (0x000448ab) grid_dialer_command_1_pane

0x67ca,	// (0x000448b3) grid_dialer_command_2_pane

0x67d2,	// (0x000448bb) grid_dialer_keypad_pane

0x67e6,	// (0x000448cf) bg_popup_call_pane_cp06_ParamLimits

0x67e6,	// (0x000448cf) bg_popup_call_pane_cp06

0x67f2,	// (0x000448db) dialer_ne_clear_pane_ParamLimits

0x67f2,	// (0x000448db) dialer_ne_clear_pane

0xd033,	// (0x0004b11c) dialer_ne_pane_g1

0xd03b,	// (0x0004b124) dialer_ne_pane_t1_ParamLimits

0xd03b,	// (0x0004b124) dialer_ne_pane_t1

0x67fe,	// (0x000448e7) dialer_ne_pane_t2_ParamLimits

0x67fe,	// (0x000448e7) dialer_ne_pane_t2

0x681b,	// (0x00044904) dialer_ne_pane_t3_ParamLimits

0x681b,	// (0x00044904) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0004d8ab) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0004d8ab) dialer_ne_pane_t

0x683f,	// (0x00044928) dialer_ne_pane_t3_copy1_ParamLimits

0x683f,	// (0x00044928) dialer_ne_pane_t3_copy1

0x6863,	// (0x0004494c) cell_dialer_keypad_pane_ParamLimits

0x6863,	// (0x0004494c) cell_dialer_keypad_pane

0x687a,	// (0x00044963) cell_dialer_command_1_pane_ParamLimits

0x687a,	// (0x00044963) cell_dialer_command_1_pane

0x6890,	// (0x00044979) cell_dialer_command_2_pane_ParamLimits

0x6890,	// (0x00044979) cell_dialer_command_2_pane

0xd04d,	// (0x0004b136) bg_button_pane_cp02_ParamLimits

0xd04d,	// (0x0004b136) bg_button_pane_cp02

0x689f,	// (0x00044988) cell_dialer_keypad_pane_g1_ParamLimits

0x689f,	// (0x00044988) cell_dialer_keypad_pane_g1

0xd04d,	// (0x0004b136) bg_button_pane_cp03_ParamLimits

0xd04d,	// (0x0004b136) bg_button_pane_cp03

0x68b4,	// (0x0004499d) cell_dialer_command_1_pane_g1_ParamLimits

0x68b4,	// (0x0004499d) cell_dialer_command_1_pane_g1

0xd059,	// (0x0004b142) bg_button_pane_cp04

0x68c8,	// (0x000449b1) cell_dialer_command_2_pane_g1

0xb434,	// (0x0004951d) bg_button_pane_cp06

0xd061,	// (0x0004b14a) dialer_ne_clear_pane_g1

0x485e,	// (0x00042947) navi_pane_g2

0x488c,	// (0x00042975) navi_pane_g3

0x0002,

0xf3ea,	// (0x0004d4d3) navi_pane_g

0x48b7,	// (0x000429a0) navi_pane_mv_g2

0x48de,	// (0x000429c7) navi_pane_mv_g5

0x48e6,	// (0x000429cf) navi_pane_mv_t1

0xa902,	// (0x000489eb) main_clock2_pane

0x6906,	// (0x000449ef) main_clock2_list_pane_ParamLimits

0x6906,	// (0x000449ef) main_clock2_list_pane

0x6930,	// (0x00044a19) main_clock2_pane_t1_ParamLimits

0x6930,	// (0x00044a19) main_clock2_pane_t1

0x6952,	// (0x00044a3b) main_clock2_pane_t2_ParamLimits

0x6952,	// (0x00044a3b) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0004d8b2) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0004d8b2) main_clock2_pane_t

0x69af,	// (0x00044a98) popup_clock_analogue_window_cp03_ParamLimits

0x69af,	// (0x00044a98) popup_clock_analogue_window_cp03

0x69cf,	// (0x00044ab8) popup_clock_digital_window_cp02_ParamLimits

0x69cf,	// (0x00044ab8) popup_clock_digital_window_cp02

0x6a40,	// (0x00044b29) main_clock2_list_single_pane_ParamLimits

0x6a40,	// (0x00044b29) main_clock2_list_single_pane

0xb434,	// (0x0004951d) list_highlight_pane_cp05

0xd07d,	// (0x0004b166) main_clock2_list_single_pane_t1

0x33ee,	// (0x000414d7) popup_toolbar_window_cp04_ParamLimits

0x6027,	// (0x00044110) camera2_autofocus_pane_g2_ParamLimits

0x6027,	// (0x00044110) camera2_autofocus_pane_g2

0x6033,	// (0x0004411c) camera2_autofocus_pane_g3_ParamLimits

0x6033,	// (0x0004411c) camera2_autofocus_pane_g3

0x603f,	// (0x00044128) camera2_autofocus_pane_g4_ParamLimits

0x603f,	// (0x00044128) camera2_autofocus_pane_g4

0x604b,	// (0x00044134) camera2_autofocus_pane_g5_ParamLimits

0x604b,	// (0x00044134) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0004d7fb) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0004d7fb) camera2_autofocus_pane_g

0x61ae,	// (0x00044297) camera2_autofocus_pane_cp_g2

0x61b6,	// (0x0004429f) camera2_autofocus_pane_cp_g3

0x61be,	// (0x000442a7) camera2_autofocus_pane_cp_g4

0x61c6,	// (0x000442af) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0004d861) camera2_autofocus_pane_cp_g

0x67de,	// (0x000448c7) popup_dialer_spcha_window

0xa176,	// (0x0004825f) bg_popup_sub_pane_cp07

0xd08b,	// (0x0004b174) list_spcha_pane

0xd093,	// (0x0004b17c) list_single_spcha_pane_ParamLimits

0xd093,	// (0x0004b17c) list_single_spcha_pane

0xa176,	// (0x0004825f) list_highlight_pane_cp06

0xd0a4,	// (0x0004b18d) list_single_spcha_pane_t1

0xc299,	// (0x0004a382) popup_call2_audio_out_window_g4_ParamLimits

0xc299,	// (0x0004a382) popup_call2_audio_out_window_g4

0xa176,	// (0x0004825f) main_imed2_pane

0xc88c,	// (0x0004a975) popup_imed_adjust2_window

0x56ab,	// (0x00043794) popup_imed_trans_window_ParamLimits

0x56ab,	// (0x00043794) popup_imed_trans_window

0xcae9,	// (0x0004abd2) popup_blid_sat_info2_window_t1

0xcaf7,	// (0x0004abe0) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0004d790) popup_blid_sat_info2_window_t

0x6aea,	// (0x00044bd3) aid_size_cell_colour_35

0x6b04,	// (0x00044bed) aid_size_cell_colour_112

0x6b1b,	// (0x00044c04) aid_size_cell_effect

0xa93e,	// (0x00048a27) bg_tb_trans_pane_cp02

0xb95e,	// (0x00049a47) heading_imed_pane

0x6b35,	// (0x00044c1e) listscroll_imed_pane

0xd0b2,	// (0x0004b19b) heading_imed_pane_g1

0xd0ba,	// (0x0004b1a3) heading_imed_pane_t1

0xd0c8,	// (0x0004b1b1) grid_imed_colour_35_pane_ParamLimits

0xd0c8,	// (0x0004b1b1) grid_imed_colour_35_pane

0x6b41,	// (0x00044c2a) grid_imed_effect_pane

0xd0e4,	// (0x0004b1cd) list_imed_aspect_pane

0x6b51,	// (0x00044c3a) scroll_pane_cp027_ParamLimits

0x6b51,	// (0x00044c3a) scroll_pane_cp027

0x6b5d,	// (0x00044c46) cell_imed_effect_pane_ParamLimits

0x6b5d,	// (0x00044c46) cell_imed_effect_pane

0xd0ec,	// (0x0004b1d5) cell_imed_colour_pane_ParamLimits

0xd0ec,	// (0x0004b1d5) cell_imed_colour_pane

0xd136,	// (0x0004b21f) cell_imed_colour_pane_g1_ParamLimits

0xd136,	// (0x0004b21f) cell_imed_colour_pane_g1

0xd147,	// (0x0004b230) hgihlgiht_grid_pane_cp016_ParamLimits

0xd147,	// (0x0004b230) hgihlgiht_grid_pane_cp016

0x6b79,	// (0x00044c62) cell_imed_effect_pane_g1

0x6b81,	// (0x00044c6a) grid_highlight_pane_cp017

0xd158,	// (0x0004b241) list_imed_single_pane_ParamLimits

0xd158,	// (0x0004b241) list_imed_single_pane

0xa176,	// (0x0004825f) list_highlight_pane_cp07

0xd16c,	// (0x0004b255) list_imed_aspect_pane_comp1_t1

0xc860,	// (0x0004a949) bg_tb_trans_pane_cp05

0xd18e,	// (0x0004b277) popup_imed_adjust2_window_g1

0xd1b5,	// (0x0004b29e) popup_imed_adjust2_window_t1

0xd1cd,	// (0x0004b2b6) slider_imed_adjust_pane

0xd1e1,	// (0x0004b2ca) slider_imed_adjust_pane_g1

0xd1f1,	// (0x0004b2da) slider_imed_adjust_pane_g2

0xd201,	// (0x0004b2ea) slider_imed_adjust_pane_g3

0xd212,	// (0x0004b2fb) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0004d8cf) slider_imed_adjust_pane_g

0x6b8a,	// (0x00044c73) aid_size_cell_clipart2

0x6b96,	// (0x00044c7f) grid_imed_clipart_pane

0xd223,	// (0x0004b30c) scroll_pane_cp031

0x6ba0,	// (0x00044c89) cell_imed_clipart_pane_ParamLimits

0x6ba0,	// (0x00044c89) cell_imed_clipart_pane

0x6bbe,	// (0x00044ca7) cell_imed_clipart_pane_g1

0xa176,	// (0x0004825f) grid_highlight_pane_cp014

0x6912,	// (0x000449fb) main_clock2_pane_g1_ParamLimits

0x6912,	// (0x000449fb) main_clock2_pane_g1

0x69eb,	// (0x00044ad4) aid_call2_pane_cp10

0x69fd,	// (0x00044ae6) aid_call_pane_cp10

0xb369,	// (0x00049452) popup_clock_analogue_window_cp10_g1

0xb369,	// (0x00049452) popup_clock_analogue_window_cp10_g2

0x6a0f,	// (0x00044af8) popup_clock_analogue_window_cp10_g3

0x6a0f,	// (0x00044af8) popup_clock_analogue_window_cp10_g4

0xb369,	// (0x00049452) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0004d8bd) popup_clock_analogue_window_cp10_g

0x6a21,	// (0x00044b0a) popup_clock_analogue_window_cp10_t1

0x6a52,	// (0x00044b3b) clock_digital_number_pane_cp10_ParamLimits

0x6a52,	// (0x00044b3b) clock_digital_number_pane_cp10

0x6a6a,	// (0x00044b53) clock_digital_number_pane_cp11_ParamLimits

0x6a6a,	// (0x00044b53) clock_digital_number_pane_cp11

0x6a82,	// (0x00044b6b) clock_digital_number_pane_cp12_ParamLimits

0x6a82,	// (0x00044b6b) clock_digital_number_pane_cp12

0x6a9a,	// (0x00044b83) clock_digital_number_pane_cp13_ParamLimits

0x6a9a,	// (0x00044b83) clock_digital_number_pane_cp13

0x6ab2,	// (0x00044b9b) clock_digital_separator_pane_cp10_ParamLimits

0x6ab2,	// (0x00044b9b) clock_digital_separator_pane_cp10

0x6aca,	// (0x00044bb3) popup_clock_digital_window_cp02_t1_ParamLimits

0x6aca,	// (0x00044bb3) popup_clock_digital_window_cp02_t1

0xa835,	// (0x0004891e) clock_digital_number_pane_cp10_g1

0xa835,	// (0x0004891e) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0004d8d8) clock_digital_number_pane_cp10_g

0xa835,	// (0x0004891e) clock_digital_separator_pane_cp10_g1

0xa835,	// (0x0004891e) clock_digital_separator_pane_g2_cp10

0xb404,	// (0x000494ed) navi_pane_vded_g4

0xb40d,	// (0x000494f6) navi_pane_vded_g5

0xb416,	// (0x000494ff) navi_pane_vded_t1

0xa176,	// (0x0004825f) main_vded_pane

0x6bc7,	// (0x00044cb0) main_vded_pane_g1

0x6bd3,	// (0x00044cbc) main_vded_pane_g2

0x6bdd,	// (0x00044cc6) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0004d8dd) main_vded_pane_g

0x6be7,	// (0x00044cd0) main_vded_pane_t1

0x6bf5,	// (0x00044cde) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0004d8e4) main_vded_pane_t

0x6c03,	// (0x00044cec) vded_slider_pane

0x6c0d,	// (0x00044cf6) vded_video_pane

0xd22b,	// (0x0004b314) vded_video_pane_g1

0x6c19,	// (0x00044d02) vded_video_pane_g2

0xccb1,	// (0x0004ad9a) vded_video_pane_g3

0x0002,

0xf800,	// (0x0004d8e9) vded_video_pane_g

0xd235,	// (0x0004b31e) vded_slider_pane_g1

0xc9fe,	// (0x0004aae7) vded_slider_pane_g2

0xd23e,	// (0x0004b327) vded_slider_pane_g3

0xd247,	// (0x0004b330) vded_slider_pane_g4

0xd250,	// (0x0004b339) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0004d8f0) vded_slider_pane_g

0x66fc,	// (0x000447e5) mup3_rocker_pane_ParamLimits

0x66fc,	// (0x000447e5) mup3_rocker_pane

0x6c22,	// (0x00044d0b) mup3_control_keys_pane_g1

0x6c2a,	// (0x00044d13) mup3_control_keys_pane_g2

0x6c32,	// (0x00044d1b) mup3_control_keys_pane_g3

0x6c3a,	// (0x00044d23) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0004d8fb) mup3_control_keys_pane_g

0x21cd,	// (0x000402b6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x21cd,	// (0x000402b6) popup_toolbar2_fixed_window_cp01

0x6718,	// (0x00044801) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6718,	// (0x00044801) popup_toolbar2_fixed_window_cp02

0xbbd8,	// (0x00049cc1) popup_call2_audio_second_window_t4_ParamLimits

0xbbd8,	// (0x00049cc1) popup_call2_audio_second_window_t4

0xc106,	// (0x0004a1ef) popup_call2_audio_first_window_t6_ParamLimits

0xc106,	// (0x0004a1ef) popup_call2_audio_first_window_t6

0xc39c,	// (0x0004a485) popup_call2_audio_out_window_t6_ParamLimits

0xc39c,	// (0x0004a485) popup_call2_audio_out_window_t6

0xa176,	// (0x0004825f) main_vitu_pane

0x6c4a,	// (0x00044d33) aid_size_cell_itu_ParamLimits

0x6c4a,	// (0x00044d33) aid_size_cell_itu

0x21ff,	// (0x000402e8) bg_popup_window_pane_cp08_ParamLimits

0x21ff,	// (0x000402e8) bg_popup_window_pane_cp08

0x6c58,	// (0x00044d41) field_vitu_entry_pane_ParamLimits

0x6c58,	// (0x00044d41) field_vitu_entry_pane

0x6c67,	// (0x00044d50) grid_vitu_function_pane_ParamLimits

0x6c67,	// (0x00044d50) grid_vitu_function_pane

0x6c77,	// (0x00044d60) grid_vitu_itu_pane_ParamLimits

0x6c77,	// (0x00044d60) grid_vitu_itu_pane

0x6c87,	// (0x00044d70) cell_vitu_itu_pane_ParamLimits

0x6c87,	// (0x00044d70) cell_vitu_itu_pane

0x6c9e,	// (0x00044d87) cell_vitu_function_pane_ParamLimits

0x6c9e,	// (0x00044d87) cell_vitu_function_pane

0xa93e,	// (0x00048a27) bg_popup_sub_pane_cp08_ParamLimits

0xa93e,	// (0x00048a27) bg_popup_sub_pane_cp08

0x6cb2,	// (0x00044d9b) field_vitu_entry_pane_t1_ParamLimits

0x6cb2,	// (0x00044d9b) field_vitu_entry_pane_t1

0xd271,	// (0x0004b35a) field_vitu_entry_pane_t2_ParamLimits

0xd271,	// (0x0004b35a) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0004d909) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0004d909) field_vitu_entry_pane_t

0xd28e,	// (0x0004b377) bg_button_pane_cp05_ParamLimits

0xd28e,	// (0x0004b377) bg_button_pane_cp05

0x6ccc,	// (0x00044db5) cell_vitu_itu_pane_g1

0x6ce4,	// (0x00044dcd) cell_vitu_itu_pane_t1_ParamLimits

0x6ce4,	// (0x00044dcd) cell_vitu_itu_pane_t1

0x6cf6,	// (0x00044ddf) cell_vitu_itu_pane_t2_ParamLimits

0x6cf6,	// (0x00044ddf) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0004d90e) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0004d90e) cell_vitu_itu_pane_t

0xd29c,	// (0x0004b385) bg_button_pane_cp07

0x6d39,	// (0x00044e22) cell_vitu_function_pane_g1

0x2492,	// (0x0004057b) main_calc_pane_g1

0x1fd1,	// (0x000400ba) aid_visual_content_pane

0xa176,	// (0x0004825f) main_vradio_pane

0x6d42,	// (0x00044e2b) main_vradio_pane_g1_ParamLimits

0x6d42,	// (0x00044e2b) main_vradio_pane_g1

0xd2a6,	// (0x0004b38f) main_vradio_pane_g2_ParamLimits

0xd2a6,	// (0x0004b38f) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0004d915) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0004d915) main_vradio_pane_g

0x6d50,	// (0x00044e39) main_vradio_pane_t1_ParamLimits

0x6d50,	// (0x00044e39) main_vradio_pane_t1

0x6d62,	// (0x00044e4b) main_vradio_pane_t2_ParamLimits

0x6d62,	// (0x00044e4b) main_vradio_pane_t2

0xd2b3,	// (0x0004b39c) main_vradio_pane_t3_ParamLimits

0xd2b3,	// (0x0004b39c) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0004d91a) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0004d91a) main_vradio_pane_t

0x6d74,	// (0x00044e5d) vradio_rocker_control_pane_ParamLimits

0x6d74,	// (0x00044e5d) vradio_rocker_control_pane

0x6d80,	// (0x00044e69) vradio_station_info_pane_ParamLimits

0x6d80,	// (0x00044e69) vradio_station_info_pane

0xd2c7,	// (0x0004b3b0) vradio_frequency_info_pane_ParamLimits

0xd2c7,	// (0x0004b3b0) vradio_frequency_info_pane

0xccb1,	// (0x0004ad9a) vradio_station_info_pane_g1

0xd2d6,	// (0x0004b3bf) vradio_station_info_pane_t1_ParamLimits

0xd2d6,	// (0x0004b3bf) vradio_station_info_pane_t1

0xd2f8,	// (0x0004b3e1) vradio_station_info_pane_t2_ParamLimits

0xd2f8,	// (0x0004b3e1) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0004d921) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0004d921) vradio_station_info_pane_t

0xd30a,	// (0x0004b3f3) vradio_tuning_pane

0xd312,	// (0x0004b3fb) vradio_rocker_control_pane_g1

0xd31a,	// (0x0004b403) vradio_rocker_control_pane_g2

0xd322,	// (0x0004b40b) vradio_rocker_control_pane_g3

0xd32a,	// (0x0004b413) vradio_rocker_control_pane_g4

0xd332,	// (0x0004b41b) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0004d926) vradio_rocker_control_pane_g

0x6d8d,	// (0x00044e76) vradio_frequency_info_pane_g1

0xd33a,	// (0x0004b423) vradio_frequency_info_pane_t1_ParamLimits

0xd33a,	// (0x0004b423) vradio_frequency_info_pane_t1

0x6d97,	// (0x00044e80) vradio_tuning_pane_g1

0x6da2,	// (0x00044e8b) vradio_tuning_pane_t1

0xa19c,	// (0x00048285) area_side_right_pane_ParamLimits

0xa19c,	// (0x00048285) area_side_right_pane

0xc81b,	// (0x0004a904) status_small_pane_g1

0xc823,	// (0x0004a90c) status_small_pane_g2

0xc82c,	// (0x0004a915) status_small_pane_g3

0xc835,	// (0x0004a91e) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0004d6e6) status_small_pane_g

0xc83e,	// (0x0004a927) status_small_pane_t1

0xa176,	// (0x0004825f) main_video3_pane

0xd34e,	// (0x0004b437) cams_zoom_vslider_pane

0xd356,	// (0x0004b43f) image3_wide_pane_ParamLimits

0xd356,	// (0x0004b43f) image3_wide_pane

0xd370,	// (0x0004b459) image3_wide_small_pane

0xd37c,	// (0x0004b465) main_video3_pane_g1_ParamLimits

0xd37c,	// (0x0004b465) main_video3_pane_g1

0xd398,	// (0x0004b481) main_video3_pane_g2_ParamLimits

0xd398,	// (0x0004b481) main_video3_pane_g2

0x0001,

0xf848,	// (0x0004d931) main_video3_pane_g_ParamLimits

0xf848,	// (0x0004d931) main_video3_pane_g

0xd3b4,	// (0x0004b49d) main_video3_pane_t1_ParamLimits

0xd3b4,	// (0x0004b49d) main_video3_pane_t1

0xd3df,	// (0x0004b4c8) main_video3_pane_t2_ParamLimits

0xd3df,	// (0x0004b4c8) main_video3_pane_t2

0xd40c,	// (0x0004b4f5) main_video3_pane_t3_ParamLimits

0xd40c,	// (0x0004b4f5) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0004d936) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0004d936) main_video3_pane_t

0xd439,	// (0x0004b522) cams_zoom_vslider_pane_g1

0xd442,	// (0x0004b52b) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0004d93d) cams_zoom_vslider_pane_g

0xd44a,	// (0x0004b533) small_slider_vertical_pane

0xccb1,	// (0x0004ad9a) small_slider_vertical_pane_g1

0xccb1,	// (0x0004ad9a) small_slider_vertical_pane_g2

0xd452,	// (0x0004b53b) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0004d942) small_slider_vertical_pane_g

0xa176,	// (0x0004825f) main_hwr_training_pane

0xd45b,	// (0x0004b544) hwr_training_instruct_pane_ParamLimits

0xd45b,	// (0x0004b544) hwr_training_instruct_pane

0x6db1,	// (0x00044e9a) hwr_training_navi_pane_ParamLimits

0x6db1,	// (0x00044e9a) hwr_training_navi_pane

0x6dcb,	// (0x00044eb4) hwr_training_write_pane_ParamLimits

0x6dcb,	// (0x00044eb4) hwr_training_write_pane

0xa176,	// (0x0004825f) bg_frame_shadow_pane

0xd492,	// (0x0004b57b) hwr_training_write_pane_g1

0xd49a,	// (0x0004b583) hwr_training_write_pane_g2

0xd4a2,	// (0x0004b58b) hwr_training_write_pane_g3

0xd4aa,	// (0x0004b593) hwr_training_write_pane_g4

0xd4b2,	// (0x0004b59b) hwr_training_write_pane_g5

0xd4ba,	// (0x0004b5a3) hwr_training_write_pane_g6

0xd4c2,	// (0x0004b5ab) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0004d949) hwr_training_write_pane_g

0x6e03,	// (0x00044eec) hwr_training_navi_pane_g1_ParamLimits

0x6e03,	// (0x00044eec) hwr_training_navi_pane_g1

0x6e15,	// (0x00044efe) hwr_training_navi_pane_g2_ParamLimits

0x6e15,	// (0x00044efe) hwr_training_navi_pane_g2

0x6e27,	// (0x00044f10) hwr_training_navi_pane_g3_ParamLimits

0x6e27,	// (0x00044f10) hwr_training_navi_pane_g3

0x6e37,	// (0x00044f20) hwr_training_navi_pane_g4_ParamLimits

0x6e37,	// (0x00044f20) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0004d958) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0004d958) hwr_training_navi_pane_g

0x6e51,	// (0x00044f3a) hwr_training_navi_pane_t1

0x6e5f,	// (0x00044f48) list_single_hwr_training_instruct_pane_ParamLimits

0x6e5f,	// (0x00044f48) list_single_hwr_training_instruct_pane

0xd4ca,	// (0x0004b5b3) list_single_hwr_training_instruct_pane_t1

0xcbf1,	// (0x0004acda) bg_frame_shadow_pane_g1

0xd4d9,	// (0x0004b5c2) bg_frame_shadow_pane_g2

0xd4e1,	// (0x0004b5ca) bg_frame_shadow_pane_g3

0xd4e9,	// (0x0004b5d2) bg_frame_shadow_pane_g4

0xd4f1,	// (0x0004b5da) bg_frame_shadow_pane_g5

0xd4f9,	// (0x0004b5e2) bg_frame_shadow_pane_g6

0xd501,	// (0x0004b5ea) bg_frame_shadow_pane_g7

0xa9fb,	// (0x00048ae4) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0004d963) bg_frame_shadow_pane_g

0xa176,	// (0x0004825f) main_video_tele_dialer_pane

0x6e78,	// (0x00044f61) aid_size_cell_video_keypad_ParamLimits

0x6e78,	// (0x00044f61) aid_size_cell_video_keypad

0x6e88,	// (0x00044f71) grid_video_dialer_keypad_pane_ParamLimits

0x6e88,	// (0x00044f71) grid_video_dialer_keypad_pane

0x6eba,	// (0x00044fa3) video_down_pane_cp_ParamLimits

0x6eba,	// (0x00044fa3) video_down_pane_cp

0x6ee2,	// (0x00044fcb) cell_video_dialer_keypad_pane_ParamLimits

0x6ee2,	// (0x00044fcb) cell_video_dialer_keypad_pane

0xd509,	// (0x0004b5f2) bg_button_pane_cp08_ParamLimits

0xd509,	// (0x0004b5f2) bg_button_pane_cp08

0x6ef9,	// (0x00044fe2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6ef9,	// (0x00044fe2) cell_video_dialer_keypad_pane_g1

0x66f0,	// (0x000447d9) mup3_rocker2_pane_ParamLimits

0x66f0,	// (0x000447d9) mup3_rocker2_pane

0xccb1,	// (0x0004ad9a) mup3_rocker2_pane_g1

0x562d,	// (0x00043716) main_dialer2_pane

0xa176,	// (0x0004825f) main_mp4_pane

0x6f38,	// (0x00045021) main_mp4_pane_g1_ParamLimits

0x6f38,	// (0x00045021) main_mp4_pane_g1

0x6f46,	// (0x0004502f) main_mp4_pane_g2_ParamLimits

0x6f46,	// (0x0004502f) main_mp4_pane_g2

0x6f54,	// (0x0004503d) main_mp4_pane_g3_ParamLimits

0x6f54,	// (0x0004503d) main_mp4_pane_g3

0x6fa7,	// (0x00045090) main_mp4_pane_g4_ParamLimits

0x6fa7,	// (0x00045090) main_mp4_pane_g4

0x6fcf,	// (0x000450b8) main_mp4_pane_g5_ParamLimits

0x6fcf,	// (0x000450b8) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0004d983) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0004d983) main_mp4_pane_g

0x701f,	// (0x00045108) main_mp4_pane_t1_ParamLimits

0x701f,	// (0x00045108) main_mp4_pane_t1

0x707b,	// (0x00045164) main_mp4_pane_t2_ParamLimits

0x707b,	// (0x00045164) main_mp4_pane_t2

0xd515,	// (0x0004b5fe) main_mp4_pane_t3_ParamLimits

0xd515,	// (0x0004b5fe) main_mp4_pane_t3

0x70cd,	// (0x000451b6) main_mp4_pane_t4_ParamLimits

0x70cd,	// (0x000451b6) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0004d990) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0004d990) main_mp4_pane_t

0x710d,	// (0x000451f6) mp4_progress_pane_ParamLimits

0x710d,	// (0x000451f6) mp4_progress_pane

0x7157,	// (0x00045240) mp4_rocker_pane_ParamLimits

0x7157,	// (0x00045240) mp4_rocker_pane

0xd53d,	// (0x0004b626) mp4_progress_pane_t1

0xd556,	// (0x0004b63f) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0004d999) mp4_progress_pane_t

0xd56f,	// (0x0004b658) mup_progress_pane_cp04

0xccb1,	// (0x0004ad9a) mp4_rocker_pane_g1

0x7179,	// (0x00045262) aid_cell_size_keypad2_ParamLimits

0x7179,	// (0x00045262) aid_cell_size_keypad2

0x7189,	// (0x00045272) dialer2_ne_pane_ParamLimits

0x7189,	// (0x00045272) dialer2_ne_pane

0x7195,	// (0x0004527e) grid_dialer2_keypad_pane_ParamLimits

0x7195,	// (0x0004527e) grid_dialer2_keypad_pane

0xd8de,	// (0x0004b9c7) bg_popup_call_pane_cp07_ParamLimits

0xd8de,	// (0x0004b9c7) bg_popup_call_pane_cp07

0x71a3,	// (0x0004528c) dialer2_ne_pane_t1_ParamLimits

0x71a3,	// (0x0004528c) dialer2_ne_pane_t1

0x71c8,	// (0x000452b1) cell_dialer2_keypad_pane_ParamLimits

0x71c8,	// (0x000452b1) cell_dialer2_keypad_pane

0xd58d,	// (0x0004b676) bg_button_pane_pane_cp04_ParamLimits

0xd58d,	// (0x0004b676) bg_button_pane_pane_cp04

0x71df,	// (0x000452c8) cell_dialer2_keypad_pane_g1_ParamLimits

0x71df,	// (0x000452c8) cell_dialer2_keypad_pane_g1

0x32c0,	// (0x000413a9) aid_placing_vt_set_content_ParamLimits

0x32c0,	// (0x000413a9) aid_placing_vt_set_content

0x32e8,	// (0x000413d1) aid_placing_vt_set_title_ParamLimits

0x32e8,	// (0x000413d1) aid_placing_vt_set_title

0xa176,	// (0x0004825f) main_image3_pane

0x7279,	// (0x00045362) area_side_right_pane_cp01_ParamLimits

0x7279,	// (0x00045362) area_side_right_pane_cp01

0xa94c,	// (0x00048a35) main_image3_pane_g1_ParamLimits

0xa94c,	// (0x00048a35) main_image3_pane_g1

0x72a8,	// (0x00045391) main_image3_pane_g2_ParamLimits

0x72a8,	// (0x00045391) main_image3_pane_g2

0x72c1,	// (0x000453aa) main_image3_pane_g3_ParamLimits

0x72c1,	// (0x000453aa) main_image3_pane_g3

0x72da,	// (0x000453c3) main_image3_pane_g4_ParamLimits

0x72da,	// (0x000453c3) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0004d9a8) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0004d9a8) main_image3_pane_g

0x72f3,	// (0x000453dc) main_image3_pane_t1_ParamLimits

0x72f3,	// (0x000453dc) main_image3_pane_t1

0x7318,	// (0x00045401) main_image3_pane_t2_ParamLimits

0x7318,	// (0x00045401) main_image3_pane_t2

0x7337,	// (0x00045420) main_image3_pane_t3_ParamLimits

0x7337,	// (0x00045420) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0004d9b1) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0004d9b1) main_image3_pane_t

0x21ff,	// (0x000402e8) grid_sctrl_middle_pane_cp01_ParamLimits

0x21ff,	// (0x000402e8) grid_sctrl_middle_pane_cp01

0x7398,	// (0x00045481) cell_sctrl_middle_pane_cp01_ParamLimits

0x7398,	// (0x00045481) cell_sctrl_middle_pane_cp01

0x73a9,	// (0x00045492) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x73a9,	// (0x00045492) cell_sctrl_middle_pane_cp01_g1

0xa176,	// (0x0004825f) main_call4_pane

0x73b6,	// (0x0004549f) aid_size_button_call4_ParamLimits

0x73b6,	// (0x0004549f) aid_size_button_call4

0x73e8,	// (0x000454d1) call4_windows_pane_ParamLimits

0x73e8,	// (0x000454d1) call4_windows_pane

0x7404,	// (0x000454ed) grid_call4_button_pane_ParamLimits

0x7404,	// (0x000454ed) grid_call4_button_pane

0xd599,	// (0x0004b682) call4_windows_conf_pane

0x7428,	// (0x00045511) popup_call4_audio_first_window_ParamLimits

0x7428,	// (0x00045511) popup_call4_audio_first_window

0x7454,	// (0x0004553d) popup_call4_audio_second_window_ParamLimits

0x7454,	// (0x0004553d) popup_call4_audio_second_window

0xd5d6,	// (0x0004b6bf) popup_call4_audio_wait_window_ParamLimits

0xd5d6,	// (0x0004b6bf) popup_call4_audio_wait_window

0x7468,	// (0x00045551) cell_call4_button_pane_ParamLimits

0x7468,	// (0x00045551) cell_call4_button_pane

0x748b,	// (0x00045574) bg_button_pane_cp09_ParamLimits

0x748b,	// (0x00045574) bg_button_pane_cp09

0x7497,	// (0x00045580) cell_call4_button_pane_g1_ParamLimits

0x7497,	// (0x00045580) cell_call4_button_pane_g1

0x74a4,	// (0x0004558d) cell_call4_button_pane_t1_ParamLimits

0x74a4,	// (0x0004558d) cell_call4_button_pane_t1

0xd61e,	// (0x0004b707) popup_call4_audio_conf_window_ParamLimits

0xd61e,	// (0x0004b707) popup_call4_audio_conf_window

0x6725,	// (0x0004480e) mup3_progress_pane_t1_ParamLimits

0x6744,	// (0x0004482d) mup3_progress_pane_t2_ParamLimits

0xcf5c,	// (0x0004b045) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0004d88a) mup3_progress_pane_t_ParamLimits

0xcf79,	// (0x0004b062) mup_progress_pane_cp03_ParamLimits

0x6c42,	// (0x00044d2b) mup3_control_keys_pane_g4_copy1

0x713b,	// (0x00045224) mp4_rocker2_pane_ParamLimits

0x713b,	// (0x00045224) mp4_rocker2_pane

0xd638,	// (0x0004b721) mp4_rocker2_pane_g1

0xd640,	// (0x0004b729) mp4_rocker2_pane_g2

0x74b6,	// (0x0004559f) mp4_rocker2_pane_g3

0x74be,	// (0x000455a7) mp4_rocker2_pane_g4

0x74c6,	// (0x000455af) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0004d9ba) mp4_rocker2_pane_g

0xa176,	// (0x0004825f) main_camera4_pane

0xa176,	// (0x0004825f) main_video4_pane

0x6e96,	// (0x00044f7f) main_video_tele_dialer_pane_t1_ParamLimits

0x6e96,	// (0x00044f7f) main_video_tele_dialer_pane_t1

0x6ea8,	// (0x00044f91) main_video_tele_dialer_pane_t2_ParamLimits

0x6ea8,	// (0x00044f91) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0004d974) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0004d974) main_video_tele_dialer_pane_t

0x74e6,	// (0x000455cf) cam4_autofocus_pane_ParamLimits

0x74e6,	// (0x000455cf) cam4_autofocus_pane

0x74fe,	// (0x000455e7) cam4_image_uncrop_pane_ParamLimits

0x74fe,	// (0x000455e7) cam4_image_uncrop_pane

0x7517,	// (0x00045600) cam4_indicators_pane_ParamLimits

0x7517,	// (0x00045600) cam4_indicators_pane

0x7533,	// (0x0004561c) main_camera4_pane_g1_ParamLimits

0x7533,	// (0x0004561c) main_camera4_pane_g1

0x753f,	// (0x00045628) main_camera4_pane_g2_ParamLimits

0x753f,	// (0x00045628) main_camera4_pane_g2

0x753f,	// (0x00045628) main_camera4_pane_g3_ParamLimits

0x753f,	// (0x00045628) main_camera4_pane_g3

0x754b,	// (0x00045634) main_camera4_pane_g4_ParamLimits

0x754b,	// (0x00045634) main_camera4_pane_g4

0x7557,	// (0x00045640) main_camera4_pane_g5_ParamLimits

0x7557,	// (0x00045640) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0004d9c5) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0004d9c5) main_camera4_pane_g

0x7571,	// (0x0004565a) main_camera4_pane_t1_ParamLimits

0x7571,	// (0x0004565a) main_camera4_pane_t1

0xcee1,	// (0x0004afca) bg_tb_trans_pane_cp06

0x75c3,	// (0x000456ac) cam4_indicators_pane_g1

0x75d4,	// (0x000456bd) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0004d9e0) cam4_indicators_pane_g

0x75ec,	// (0x000456d5) cam4_indicators_pane_t1

0x7616,	// (0x000456ff) main_video4_pane_g1_ParamLimits

0x7616,	// (0x000456ff) main_video4_pane_g1

0x7622,	// (0x0004570b) main_video4_pane_g2_ParamLimits

0x7622,	// (0x0004570b) main_video4_pane_g2

0x762e,	// (0x00045717) main_video4_pane_g3_ParamLimits

0x762e,	// (0x00045717) main_video4_pane_g3

0x763a,	// (0x00045723) main_video4_pane_g4_ParamLimits

0x763a,	// (0x00045723) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0004d9e7) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0004d9e7) main_video4_pane_g

0x765c,	// (0x00045745) vid4_indicators_pane_ParamLimits

0x765c,	// (0x00045745) vid4_indicators_pane

0x767b,	// (0x00045764) video4_image_uncrop_cif_pane_ParamLimits

0x767b,	// (0x00045764) video4_image_uncrop_cif_pane

0x768a,	// (0x00045773) video4_image_uncrop_nhd_pane_ParamLimits

0x768a,	// (0x00045773) video4_image_uncrop_nhd_pane

0x74fe,	// (0x000455e7) video4_image_uncrop_vga_pane_ParamLimits

0x74fe,	// (0x000455e7) video4_image_uncrop_vga_pane

0xa93e,	// (0x00048a27) bg_tb_trans_pane_cp07

0x76a3,	// (0x0004578c) vid4_indicators_pane_g1

0x76b9,	// (0x000457a2) vid4_indicators_pane_g2

0x76cd,	// (0x000457b6) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0004d9f2) vid4_indicators_pane_g

0x76fe,	// (0x000457e7) vid4_indicators_pane_t1

0x7715,	// (0x000457fe) cam4_autofocus_pane_g1

0x771d,	// (0x00045806) cam4_autofocus_pane_g2

0x7725,	// (0x0004580e) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0004d9fd) cam4_autofocus_pane_g

0x772d,	// (0x00045816) cam4_autofocus_pane_g3_copy1

0x6ec6,	// (0x00044faf) video_down_pane_cp_t1

0x6ed4,	// (0x00044fbd) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0004d979) video_down_pane_cp_t

0x21ff,	// (0x000402e8) popup_vitu2_window_ParamLimits

0x21ff,	// (0x000402e8) popup_vitu2_window

0x7735,	// (0x0004581e) aid_size_cell2_itu2_ParamLimits

0x7735,	// (0x0004581e) aid_size_cell2_itu2

0x7757,	// (0x00045840) aid_size_cell_itu2_ParamLimits

0x7757,	// (0x00045840) aid_size_cell_itu2

0xd8de,	// (0x0004b9c7) bg_popup_window_pane_cp09_ParamLimits

0xd8de,	// (0x0004b9c7) bg_popup_window_pane_cp09

0x779d,	// (0x00045886) field_vitu2_entry_pane_ParamLimits

0x779d,	// (0x00045886) field_vitu2_entry_pane

0x77bd,	// (0x000458a6) grid_vitu2_function_pane_ParamLimits

0x77bd,	// (0x000458a6) grid_vitu2_function_pane

0x7801,	// (0x000458ea) grid_vitu2_itu_pane_ParamLimits

0x7801,	// (0x000458ea) grid_vitu2_itu_pane

0x7879,	// (0x00045962) cell_vitu2_itu_pane_ParamLimits

0x7879,	// (0x00045962) cell_vitu2_itu_pane

0x7890,	// (0x00045979) cell_vitu2_function_pane_ParamLimits

0x7890,	// (0x00045979) cell_vitu2_function_pane

0xd648,	// (0x0004b731) bg_popup_call_pane_cp08_ParamLimits

0xd648,	// (0x0004b731) bg_popup_call_pane_cp08

0xd661,	// (0x0004b74a) field_vitu2_entry_pane_g1

0xd66d,	// (0x0004b756) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0004da04) field_vitu2_entry_pane_g

0x0ef0,	// (0x0003efd9) field_vitu2_entry_pane_t1_ParamLimits

0x0ef0,	// (0x0003efd9) field_vitu2_entry_pane_t1

0x0f20,	// (0x0003f009) field_vitu2_entry_pane_t2_ParamLimits

0x0f20,	// (0x0003f009) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0004da0b) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0004da0b) field_vitu2_entry_pane_t

0x78d4,	// (0x000459bd) bg_button_pane_cp010_ParamLimits

0x78d4,	// (0x000459bd) bg_button_pane_cp010

0x78e2,	// (0x000459cb) cell_vitu2_itu_pane_g1

0x790b,	// (0x000459f4) cell_vitu2_itu_pane_t1_ParamLimits

0x790b,	// (0x000459f4) cell_vitu2_itu_pane_t1

0x0f3d,	// (0x0003f026) cell_vitu2_itu_pane_t2_ParamLimits

0x0f3d,	// (0x0003f026) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0004da15) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0004da15) cell_vitu2_itu_pane_t

0xa93e,	// (0x00048a27) bg_button_pane_cp011

0x7957,	// (0x00045a40) cell_vitu2_function_pane_g1

0xa176,	// (0x0004825f) main_myfav_hc_pane

0x7379,	// (0x00045462) popup_image3_note_pane_ParamLimits

0x7379,	// (0x00045462) popup_image3_note_pane

0x7387,	// (0x00045470) popup_image3_tool_bar_pane_ParamLimits

0x7387,	// (0x00045470) popup_image3_tool_bar_pane

0x0fb3,	// (0x0003f09c) cell_vitu2_itu_pane_t3_ParamLimits

0x0fb3,	// (0x0003f09c) cell_vitu2_itu_pane_t3

0xa176,	// (0x0004825f) bg_popup_trans_pane

0xd68f,	// (0x0004b778) grid_image3_tool_bar_pane

0xd699,	// (0x0004b782) bg_popup_trans_pane_g1

0xad59,	// (0x00048e42) bg_popup_trans_pane_g2

0xd6a1,	// (0x0004b78a) bg_popup_trans_pane_g3

0xd6a9,	// (0x0004b792) bg_popup_trans_pane_g4

0xd6b1,	// (0x0004b79a) bg_popup_trans_pane_g5

0xd6b9,	// (0x0004b7a2) bg_popup_trans_pane_g6

0xd6c1,	// (0x0004b7aa) bg_popup_trans_pane_g7

0xd6c9,	// (0x0004b7b2) bg_popup_trans_pane_g8

0xad39,	// (0x00048e22) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0004da1c) bg_popup_trans_pane_g

0xd6d1,	// (0x0004b7ba) cell_image3_tool_bar_pane_ParamLimits

0xd6d1,	// (0x0004b7ba) cell_image3_tool_bar_pane

0xccb1,	// (0x0004ad9a) cell_image3_tool_bar_pane_g1

0xa176,	// (0x0004825f) bg_popup_trans_pane_cp1

0xd6e7,	// (0x0004b7d0) popup_image3_note_pane_t1

0xd6f5,	// (0x0004b7de) popup_image3_note_pane_t2

0xd703,	// (0x0004b7ec) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0004da2f) popup_image3_note_pane_t

0xd713,	// (0x0004b7fc) popup_image3_note_pane_t3_copy1

0x796b,	// (0x00045a54) bg_myfav_hc_instruction_pane_ParamLimits

0x796b,	// (0x00045a54) bg_myfav_hc_instruction_pane

0x7983,	// (0x00045a6c) cell_myfav_contact_pane_ParamLimits

0x7983,	// (0x00045a6c) cell_myfav_contact_pane

0x799d,	// (0x00045a86) cell_myfav_contact_pane_cp1_ParamLimits

0x799d,	// (0x00045a86) cell_myfav_contact_pane_cp1

0x79b5,	// (0x00045a9e) cell_myfav_contact_pane_cp2_ParamLimits

0x79b5,	// (0x00045a9e) cell_myfav_contact_pane_cp2

0x79cd,	// (0x00045ab6) cell_myfav_contact_pane_cp3_ParamLimits

0x79cd,	// (0x00045ab6) cell_myfav_contact_pane_cp3

0x79e4,	// (0x00045acd) cell_myfav_contact_pane_cp4_ParamLimits

0x79e4,	// (0x00045acd) cell_myfav_contact_pane_cp4

0x79fa,	// (0x00045ae3) cell_myfav_contact_pane_cp5_ParamLimits

0x79fa,	// (0x00045ae3) cell_myfav_contact_pane_cp5

0x7a0e,	// (0x00045af7) cell_myfav_contact_pane_cp6_ParamLimits

0x7a0e,	// (0x00045af7) cell_myfav_contact_pane_cp6

0x7a22,	// (0x00045b0b) cell_myfav_contact_pane_cp7_ParamLimits

0x7a22,	// (0x00045b0b) cell_myfav_contact_pane_cp7

0xd721,	// (0x0004b80a) listscroll_gen_pane_cp05

0x7a3a,	// (0x00045b23) main_myfav_hc_pane_g1_ParamLimits

0x7a3a,	// (0x00045b23) main_myfav_hc_pane_g1

0x7a54,	// (0x00045b3d) main_myfav_hc_pane_g2_ParamLimits

0x7a54,	// (0x00045b3d) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0004da36) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0004da36) main_myfav_hc_pane_g

0x7a86,	// (0x00045b6f) main_myfav_hc_pane_t1_ParamLimits

0x7a86,	// (0x00045b6f) main_myfav_hc_pane_t1

0xd72a,	// (0x0004b813) main_myfav_hc_pane_t2_ParamLimits

0xd72a,	// (0x0004b813) main_myfav_hc_pane_t2

0xd73c,	// (0x0004b825) main_myfav_hc_pane_t3_ParamLimits

0xd73c,	// (0x0004b825) main_myfav_hc_pane_t3

0x7a9d,	// (0x00045b86) main_myfav_hc_pane_t4_ParamLimits

0x7a9d,	// (0x00045b86) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0004da3d) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0004da3d) main_myfav_hc_pane_t

0xccb1,	// (0x0004ad9a) bg_myfav_hc_instruction_pane_g1

0xd74e,	// (0x0004b837) cell_myfav_contact_pane_g1_ParamLimits

0xd74e,	// (0x0004b837) cell_myfav_contact_pane_g1

0xd74e,	// (0x0004b837) cell_myfav_contact_pane_g2_ParamLimits

0xd74e,	// (0x0004b837) cell_myfav_contact_pane_g2

0xd75a,	// (0x0004b843) cell_myfav_contact_pane_g3_ParamLimits

0xd75a,	// (0x0004b843) cell_myfav_contact_pane_g3

0xcf46,	// (0x0004b02f) cell_myfav_contact_pane_g4_ParamLimits

0xcf46,	// (0x0004b02f) cell_myfav_contact_pane_g4

0xd767,	// (0x0004b850) cell_myfav_contact_pane_g5_ParamLimits

0xd767,	// (0x0004b850) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0004da48) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0004da48) cell_myfav_contact_pane_g

0x7a6e,	// (0x00045b57) main_myfav_hc_pane_g3_ParamLimits

0x7a6e,	// (0x00045b57) main_myfav_hc_pane_g3

0x2111,	// (0x000401fa) popup_adpt_find_window

0x7ac7,	// (0x00045bb0) afind_page_pane_ParamLimits

0x7ac7,	// (0x00045bb0) afind_page_pane

0x7ad4,	// (0x00045bbd) aid_size_cell_afind_ParamLimits

0x7ad4,	// (0x00045bbd) aid_size_cell_afind

0x7aee,	// (0x00045bd7) bg_popup_sub_pane_cp09_ParamLimits

0x7aee,	// (0x00045bd7) bg_popup_sub_pane_cp09

0x7afb,	// (0x00045be4) find_pane_cp01_ParamLimits

0x7afb,	// (0x00045be4) find_pane_cp01

0xd773,	// (0x0004b85c) grid_afind_control_pane_ParamLimits

0xd773,	// (0x0004b85c) grid_afind_control_pane

0x7b08,	// (0x00045bf1) grid_afind_pane_ParamLimits

0x7b08,	// (0x00045bf1) grid_afind_pane

0x7b24,	// (0x00045c0d) cell_afind_pane_ParamLimits

0x7b24,	// (0x00045c0d) cell_afind_pane

0xccb1,	// (0x0004ad9a) afind_page_pane_g1

0x7b70,	// (0x00045c59) afind_page_pane_g2

0x7b79,	// (0x00045c62) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0004da53) afind_page_pane_g

0x7b82,	// (0x00045c6b) afind_page_pane_t1

0xd787,	// (0x0004b870) cell_afind_grid_control_pane_ParamLimits

0xd787,	// (0x0004b870) cell_afind_grid_control_pane

0xd58d,	// (0x0004b676) bg_button_pane_cp69_ParamLimits

0xd58d,	// (0x0004b676) bg_button_pane_cp69

0x7ba2,	// (0x00045c8b) cell_afind_pane_g1_ParamLimits

0x7ba2,	// (0x00045c8b) cell_afind_pane_g1

0x7baf,	// (0x00045c98) cell_afind_pane_t1_ParamLimits

0x7baf,	// (0x00045c98) cell_afind_pane_t1

0xab4e,	// (0x00048c37) bg_button_pane_cp72

0xd796,	// (0x0004b87f) cell_afind_grid_control_pane_g1

0x51a8,	// (0x00043291) aid_image_placing_area_ParamLimits

0x51a8,	// (0x00043291) aid_image_placing_area

0xd259,	// (0x0004b342) field_vitu_entry_pane_g1_ParamLimits

0xd259,	// (0x0004b342) field_vitu_entry_pane_g1

0xd265,	// (0x0004b34e) field_vitu_entry_pane_g2_ParamLimits

0xd265,	// (0x0004b34e) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0004d904) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0004d904) field_vitu_entry_pane_g

0x6ccc,	// (0x00044db5) cell_vitu_itu_pane_g1_ParamLimits

0x6d1c,	// (0x00044e05) cell_vitu_itu_pane_t3_ParamLimits

0x6d1c,	// (0x00044e05) cell_vitu_itu_pane_t3

0xd53d,	// (0x0004b626) mp4_progress_pane_t1_ParamLimits

0xd556,	// (0x0004b63f) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0004d999) mp4_progress_pane_t_ParamLimits

0xd56f,	// (0x0004b658) mup_progress_pane_cp04_ParamLimits

0x7ab1,	// (0x00045b9a) main_myfav_hc_pane_t5_ParamLimits

0x7ab1,	// (0x00045b9a) main_myfav_hc_pane_t5

0xa194,	// (0x0004827d) aid_zoom_text_primary

0x2111,	// (0x000401fa) popup_adpt_find_window_ParamLimits

0xa93e,	// (0x00048a27) main_cam_set_pane

0x7525,	// (0x0004560e) cam4_zoom_pane_ParamLimits

0x7525,	// (0x0004560e) cam4_zoom_pane

0x7bc1,	// (0x00045caa) main_cam_set_pane_g1_ParamLimits

0x7bc1,	// (0x00045caa) main_cam_set_pane_g1

0x7bcf,	// (0x00045cb8) main_cam_set_pane_g2_ParamLimits

0x7bcf,	// (0x00045cb8) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0004da5a) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0004da5a) main_cam_set_pane_g

0x7bdb,	// (0x00045cc4) main_cam_set_pane_t1_ParamLimits

0x7bdb,	// (0x00045cc4) main_cam_set_pane_t1

0x7bf7,	// (0x00045ce0) main_cset_listscroll_pane_ParamLimits

0x7bf7,	// (0x00045ce0) main_cset_listscroll_pane

0x7c26,	// (0x00045d0f) main_cset_slider_pane_ParamLimits

0x7c26,	// (0x00045d0f) main_cset_slider_pane

0xd7a7,	// (0x0004b890) main_cset_list_pane_ParamLimits

0xd7a7,	// (0x0004b890) main_cset_list_pane

0xd7b7,	// (0x0004b8a0) scroll_pane_cp028

0x7c47,	// (0x00045d30) aid_area_touch_slider

0x7c63,	// (0x00045d4c) cset_slider_pane

0x7c8d,	// (0x00045d76) main_cset_slider_pane_g1

0x7ca2,	// (0x00045d8b) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0004da5f) main_cset_slider_pane_g

0xd7f0,	// (0x0004b8d9) main_cset_slider_pane_t1

0x7d5e,	// (0x00045e47) main_cset_slider_pane_t2

0x7d78,	// (0x00045e61) main_cset_slider_pane_t3

0x7d92,	// (0x00045e7b) main_cset_slider_pane_t4

0x7dac,	// (0x00045e95) main_cset_slider_pane_t5

0x7dc6,	// (0x00045eaf) main_cset_slider_pane_t6

0x7ddb,	// (0x00045ec4) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0004da84) main_cset_slider_pane_t

0x7edf,	// (0x00045fc8) cset_list_set_pane_ParamLimits

0x7edf,	// (0x00045fc8) cset_list_set_pane

0x7ef0,	// (0x00045fd9) aid_position_infowindow_above

0x7ef8,	// (0x00045fe1) aid_position_infowindow_below

0x1000,	// (0x0003f0e9) cset_list_set_pane_g1_ParamLimits

0x1000,	// (0x0003f0e9) cset_list_set_pane_g1

0x100c,	// (0x0003f0f5) cset_list_set_pane_g3_ParamLimits

0x100c,	// (0x0003f0f5) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0004daa3) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0004daa3) cset_list_set_pane_g

0x101b,	// (0x0003f104) cset_list_set_pane_t1_ParamLimits

0x101b,	// (0x0003f104) cset_list_set_pane_t1

0xa93e,	// (0x00048a27) list_highlight_pane_cp021_ParamLimits

0xa93e,	// (0x00048a27) list_highlight_pane_cp021

0xb56c,	// (0x00049655) cset_slider_pane_g1

0xb57e,	// (0x00049667) cset_slider_pane_g2

0xb575,	// (0x0004965e) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0004daa8) cset_slider_pane_g

0x7f00,	// (0x00045fe9) aid_area_touch_cam4_zoom

0x7f08,	// (0x00045ff1) cam4_zoom_cont_pane

0x7f10,	// (0x00045ff9) cam4_zoom_pane_g1

0x7f18,	// (0x00046001) cam4_zoom_pane_g2

0x7f20,	// (0x00046009) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0004daaf) cam4_zoom_pane_g

0xdfc5,	// (0x0004c0ae) cam4_zoom_cont_pane_g1

0xdfce,	// (0x0004c0b7) cam4_zoom_cont_pane_g2

0xdfd7,	// (0x0004c0c0) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0004dab6) cam4_zoom_cont_pane_g

0x73d0,	// (0x000454b9) call4_image_pane_ParamLimits

0x73d0,	// (0x000454b9) call4_image_pane

0xd599,	// (0x0004b682) call4_windows_conf_pane_ParamLimits

0xd5b4,	// (0x0004b69d) popup_call4_audio_in_window_ParamLimits

0xd5b4,	// (0x0004b69d) popup_call4_audio_in_window

0xa176,	// (0x0004825f) bg_popup_call2_act_pane_cp02

0xd616,	// (0x0004b6ff) call4_list_conf_pane

0xccb1,	// (0x0004ad9a) call4_image_pane_g1

0xccb1,	// (0x0004ad9a) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0004d7ca) call4_image_pane_g

0xd890,	// (0x0004b979) list_single_graphic_popup_conf4_pane_ParamLimits

0xd890,	// (0x0004b979) list_single_graphic_popup_conf4_pane

0xa176,	// (0x0004825f) list_highlight_pane_cp022

0xd8ec,	// (0x0004b9d5) list_single_graphic_popup_conf4_pane_g1

0xb266,	// (0x0004934f) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0004dabd) list_single_graphic_popup_conf4_pane_g

0xd8f4,	// (0x0004b9dd) list_single_graphic_popup_conf4_pane_t1

0x3442,	// (0x0004152b) popup_vtel_slider_window_ParamLimits

0x3442,	// (0x0004152b) popup_vtel_slider_window

0xd57b,	// (0x0004b664) dialer2_ne_pane_t2_ParamLimits

0xd57b,	// (0x0004b664) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0004d99e) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0004d99e) dialer2_ne_pane_t

0xa93e,	// (0x00048a27) bg_popup_sub_pane_cp010_ParamLimits

0xa93e,	// (0x00048a27) bg_popup_sub_pane_cp010

0x7f28,	// (0x00046011) popup_vtel_slider_window_g1_ParamLimits

0x7f28,	// (0x00046011) popup_vtel_slider_window_g1

0x7f34,	// (0x0004601d) popup_vtel_slider_window_g2_ParamLimits

0x7f34,	// (0x0004601d) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0004dac2) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0004dac2) popup_vtel_slider_window_g

0x7f7c,	// (0x00046065) vtel_slider_pane_ParamLimits

0x7f7c,	// (0x00046065) vtel_slider_pane

0x7f8b,	// (0x00046074) vtel_slider_pane_g1_ParamLimits

0x7f8b,	// (0x00046074) vtel_slider_pane_g1

0x7f98,	// (0x00046081) vtel_slider_pane_g2_ParamLimits

0x7f98,	// (0x00046081) vtel_slider_pane_g2

0x7fa5,	// (0x0004608e) vtel_slider_pane_g3_ParamLimits

0x7fa5,	// (0x0004608e) vtel_slider_pane_g3

0x7f8b,	// (0x00046074) vtel_slider_pane_g4_ParamLimits

0x7f8b,	// (0x00046074) vtel_slider_pane_g4

0x7fb2,	// (0x0004609b) vtel_slider_pane_g5_ParamLimits

0x7fb2,	// (0x0004609b) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0004dacb) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0004dacb) vtel_slider_pane_g

0xa93e,	// (0x00048a27) main_gallery2_pane

0x777d,	// (0x00045866) aid_size_row_itut2_dropdow_list_ParamLimits

0x777d,	// (0x00045866) aid_size_row_itut2_dropdow_list

0x77df,	// (0x000458c8) grid_vitu2_function_top_pane_ParamLimits

0x77df,	// (0x000458c8) grid_vitu2_function_top_pane

0x7831,	// (0x0004591a) popup_vitu2_dropdown_list_window_ParamLimits

0x7831,	// (0x0004591a) popup_vitu2_dropdown_list_window

0x7855,	// (0x0004593e) popup_vitu2_match_list_window

0x7fbf,	// (0x000460a8) cell_vitu2_function_top_pane_ParamLimits

0x7fbf,	// (0x000460a8) cell_vitu2_function_top_pane

0x7fdf,	// (0x000460c8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7fdf,	// (0x000460c8) cell_vitu2_function_top_pane_cp01

0x7ffd,	// (0x000460e6) cell_vitu2_function_top_wide_pane_ParamLimits

0x7ffd,	// (0x000460e6) cell_vitu2_function_top_wide_pane

0xa93e,	// (0x00048a27) bg_button_pane_cp012

0x801b,	// (0x00046104) cell_vitu2_function_top_pane_g1

0x802f,	// (0x00046118) bg_button_pane_cp013_ParamLimits

0x802f,	// (0x00046118) bg_button_pane_cp013

0x804b,	// (0x00046134) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x804b,	// (0x00046134) cell_vitu2_function_top_wide_pane_g1

0x21ff,	// (0x000402e8) bg_popup_sub_pane_cp20

0x8063,	// (0x0004614c) list_vitu2_match_list_pane

0xd699,	// (0x0004b782) bg_popup_sub_pane_cp20_g1

0xd6a1,	// (0x0004b78a) bg_popup_sub_pane_cp20_g2

0xad59,	// (0x00048e42) bg_popup_sub_pane_cp20_g3

0xd6a9,	// (0x0004b792) bg_popup_sub_pane_cp20_g4

0xad39,	// (0x00048e22) bg_popup_sub_pane_cp20_g5

0xd90a,	// (0x0004b9f3) bg_popup_sub_pane_cp20_g6

0xd6b9,	// (0x0004b7a2) bg_popup_sub_pane_cp20_g7

0xd6c1,	// (0x0004b7aa) bg_popup_sub_pane_cp20_g8

0xd6c9,	// (0x0004b7b2) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0004dad6) bg_popup_sub_pane_cp20_g

0xa95a,	// (0x00048a43) list_vitu2_match_list_item_pane_ParamLimits

0xa95a,	// (0x00048a43) list_vitu2_match_list_item_pane

0x807b,	// (0x00046164) list_vitu2_match_list_item_pane_t1

0xa176,	// (0x0004825f) bg_popup_sub_pane_cp21

0xb18f,	// (0x00049278) grid_vitu2_dropdown_list_pane

0x8089,	// (0x00046172) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8089,	// (0x00046172) cell_vitu2_dropdown_list_char_pane

0x80ae,	// (0x00046197) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x80ae,	// (0x00046197) cell_vitu2_dropdown_list_ctrl_pane

0xd912,	// (0x0004b9fb) cell_vitu2_dropdown_list_char_pane_g1

0xd91b,	// (0x0004ba04) cell_vitu2_dropdown_list_char_pane_g2

0xd924,	// (0x0004ba0d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0004daf3) cell_vitu2_dropdown_list_char_pane_g

0x80dc,	// (0x000461c5) cell_vitu2_dropdown_list_char_pane_t1

0x80ea,	// (0x000461d3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x80ea,	// (0x000461d3) cell_vitu2_dropdown_list_ctrl_pane_g1

0x80fa,	// (0x000461e3) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x80fa,	// (0x000461e3) cell_vitu2_dropdown_list_ctrl_pane_g2

0x810b,	// (0x000461f4) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x810b,	// (0x000461f4) cell_vitu2_dropdown_list_ctrl_pane_g3

0x811b,	// (0x00046204) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x811b,	// (0x00046204) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcee1,	// (0x0004afca) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcee1,	// (0x0004afca) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0004dafa) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0004dafa) cell_vitu2_dropdown_list_ctrl_pane_g

0x8134,	// (0x0004621d) aid_size_cell_gallery2_ParamLimits

0x8134,	// (0x0004621d) aid_size_cell_gallery2

0x814e,	// (0x00046237) grid_gallery2_pane_ParamLimits

0x814e,	// (0x00046237) grid_gallery2_pane

0x6b51,	// (0x00044c3a) scroll_pane_cp029_ParamLimits

0x6b51,	// (0x00044c3a) scroll_pane_cp029

0x8165,	// (0x0004624e) cell_gallery2_pane_ParamLimits

0x8165,	// (0x0004624e) cell_gallery2_pane

0xd92d,	// (0x0004ba16) cell_gallery2_pane_g2

0x81b1,	// (0x0004629a) cell_gallery2_pane_g3

0xd935,	// (0x0004ba1e) cell_gallery2_pane_g4

0xd93d,	// (0x0004ba26) cell_gallery2_pane_g5

0xb434,	// (0x0004951d) grid_highlight_pane_cp10

0x7855,	// (0x0004593e) popup_vitu2_match_list_window_ParamLimits

0x7869,	// (0x00045952) popup_vitu2_query_window_ParamLimits

0x7869,	// (0x00045952) popup_vitu2_query_window

0xa176,	// (0x0004825f) bg_vitu2_candi_button_pane

0xd912,	// (0x0004b9fb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd91b,	// (0x0004ba04) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd924,	// (0x0004ba0d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1082,	// (0x0003f16b) bg_button_pane_cp015

0x81b9,	// (0x000462a2) bg_button_pane_cp016

0x81cc,	// (0x000462b5) bg_button_pane_cp017

0xc860,	// (0x0004a949) bg_popup_sub_pane_cp22

0xd945,	// (0x0004ba2e) popup_vitu2_query_window_g1

0x10b5,	// (0x0003f19e) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0004db05) popup_vitu2_query_window_g

0x10d2,	// (0x0003f1bb) popup_vitu2_query_window_t1_ParamLimits

0x10d2,	// (0x0003f1bb) popup_vitu2_query_window_t1

0x1105,	// (0x0003f1ee) popup_vitu2_query_window_t2_ParamLimits

0x1105,	// (0x0003f1ee) popup_vitu2_query_window_t2

0x1117,	// (0x0003f200) popup_vitu2_query_window_t3_ParamLimits

0x1117,	// (0x0003f200) popup_vitu2_query_window_t3

0x81f0,	// (0x000462d9) popup_vitu2_query_window_t4_ParamLimits

0x81f0,	// (0x000462d9) popup_vitu2_query_window_t4

0x8213,	// (0x000462fc) popup_vitu2_query_window_t5_ParamLimits

0x8213,	// (0x000462fc) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0004db0c) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0004db0c) popup_vitu2_query_window_t

0xd79f,	// (0x0004b888) main_cset_text_pane

0x7c47,	// (0x00045d30) aid_area_touch_slider_ParamLimits

0x7c63,	// (0x00045d4c) cset_slider_pane_ParamLimits

0x7c8d,	// (0x00045d76) main_cset_slider_pane_g1_ParamLimits

0x7ca2,	// (0x00045d8b) main_cset_slider_pane_g2_ParamLimits

0xd7c0,	// (0x0004b8a9) main_cset_slider_pane_g3_ParamLimits

0xd7c0,	// (0x0004b8a9) main_cset_slider_pane_g3

0x7cb7,	// (0x00045da0) main_cset_slider_pane_g4_ParamLimits

0x7cb7,	// (0x00045da0) main_cset_slider_pane_g4

0x7cc6,	// (0x00045daf) main_cset_slider_pane_g5_ParamLimits

0x7cc6,	// (0x00045daf) main_cset_slider_pane_g5

0x7cd2,	// (0x00045dbb) main_cset_slider_pane_g6_ParamLimits

0x7cd2,	// (0x00045dbb) main_cset_slider_pane_g6

0xf976,	// (0x0004da5f) main_cset_slider_pane_g_ParamLimits

0xd7f0,	// (0x0004b8d9) main_cset_slider_pane_t1_ParamLimits

0x7d5e,	// (0x00045e47) main_cset_slider_pane_t2_ParamLimits

0x7d78,	// (0x00045e61) main_cset_slider_pane_t3_ParamLimits

0x7d92,	// (0x00045e7b) main_cset_slider_pane_t4_ParamLimits

0x7dac,	// (0x00045e95) main_cset_slider_pane_t5_ParamLimits

0x7dc6,	// (0x00045eaf) main_cset_slider_pane_t6_ParamLimits

0x7ddb,	// (0x00045ec4) main_cset_slider_pane_t7_ParamLimits

0x7e05,	// (0x00045eee) main_cset_slider_pane_t8_ParamLimits

0x7e05,	// (0x00045eee) main_cset_slider_pane_t8

0x7e2d,	// (0x00045f16) main_cset_slider_pane_t9_ParamLimits

0x7e2d,	// (0x00045f16) main_cset_slider_pane_t9

0x7e55,	// (0x00045f3e) main_cset_slider_pane_t10_ParamLimits

0x7e55,	// (0x00045f3e) main_cset_slider_pane_t10

0x7e7d,	// (0x00045f66) main_cset_slider_pane_t11_ParamLimits

0x7e7d,	// (0x00045f66) main_cset_slider_pane_t11

0x7ea5,	// (0x00045f8e) main_cset_slider_pane_t12_ParamLimits

0x7ea5,	// (0x00045f8e) main_cset_slider_pane_t12

0x7ec2,	// (0x00045fab) main_cset_slider_pane_t13_ParamLimits

0x7ec2,	// (0x00045fab) main_cset_slider_pane_t13

0xf99b,	// (0x0004da84) main_cset_slider_pane_t_ParamLimits

0xa176,	// (0x0004825f) bg_popup_sub_pane_cp011

0xd951,	// (0x0004ba3a) main_cset_text_pane_g1

0xd959,	// (0x0004ba42) main_cset_text_pane_t1

0xd967,	// (0x0004ba50) main_cset_text_pane_t2

0xd975,	// (0x0004ba5e) main_cset_text_pane_t3

0xd983,	// (0x0004ba6c) main_cset_text_pane_t4

0xd991,	// (0x0004ba7a) main_cset_text_pane_t5

0xd99f,	// (0x0004ba88) main_cset_text_pane_t6

0xd9ad,	// (0x0004ba96) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0004db1b) main_cset_text_pane_t

0xa176,	// (0x0004825f) main_cam4_burst_pane

0xa176,	// (0x0004825f) main_cam5_pane

0x7b90,	// (0x00045c79) bg_button_pane_cp019

0x7b99,	// (0x00045c82) bg_button_pane_cp020

0xd7cc,	// (0x0004b8b5) main_cset_slider_pane_g7_ParamLimits

0xd7cc,	// (0x0004b8b5) main_cset_slider_pane_g7

0xd7d8,	// (0x0004b8c1) main_cset_slider_pane_g8_ParamLimits

0xd7d8,	// (0x0004b8c1) main_cset_slider_pane_g8

0x7ce6,	// (0x00045dcf) main_cset_slider_pane_g9_ParamLimits

0x7ce6,	// (0x00045dcf) main_cset_slider_pane_g9

0x7cf2,	// (0x00045ddb) main_cset_slider_pane_g10_ParamLimits

0x7cf2,	// (0x00045ddb) main_cset_slider_pane_g10

0x7cfe,	// (0x00045de7) main_cset_slider_pane_g11_ParamLimits

0x7cfe,	// (0x00045de7) main_cset_slider_pane_g11

0x7d0a,	// (0x00045df3) main_cset_slider_pane_g12_ParamLimits

0x7d0a,	// (0x00045df3) main_cset_slider_pane_g12

0x7d16,	// (0x00045dff) main_cset_slider_pane_g13_ParamLimits

0x7d16,	// (0x00045dff) main_cset_slider_pane_g13

0x7d22,	// (0x00045e0b) main_cset_slider_pane_g14_ParamLimits

0x7d22,	// (0x00045e0b) main_cset_slider_pane_g14

0x7d2e,	// (0x00045e17) main_cset_slider_pane_g15_ParamLimits

0x7d2e,	// (0x00045e17) main_cset_slider_pane_g15

0xd81e,	// (0x0004b907) main_cset_slider_pane_t14_ParamLimits

0xd81e,	// (0x0004b907) main_cset_slider_pane_t14

0xd857,	// (0x0004b940) main_cset_slider_pane_t15_ParamLimits

0xd857,	// (0x0004b940) main_cset_slider_pane_t15

0x8236,	// (0x0004631f) aid_cam4_burst_size_cell_ParamLimits

0x8236,	// (0x0004631f) aid_cam4_burst_size_cell

0x8252,	// (0x0004633b) grid_cam4_burst_pane_ParamLimits

0x8252,	// (0x0004633b) grid_cam4_burst_pane

0x8284,	// (0x0004636d) linegrid_cam4_burst_pane_ParamLimits

0x8284,	// (0x0004636d) linegrid_cam4_burst_pane

0x82a2,	// (0x0004638b) scroll_pane_cp30_ParamLimits

0x82a2,	// (0x0004638b) scroll_pane_cp30

0x82ae,	// (0x00046397) cell_cam4_burst_pane_ParamLimits

0x82ae,	// (0x00046397) cell_cam4_burst_pane

0xd9bb,	// (0x0004baa4) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9bb,	// (0x0004baa4) linegrid_cam4_burst_pane_g1

0x82ee,	// (0x000463d7) linegrid_cam4_burst_pane_g2_ParamLimits

0x82ee,	// (0x000463d7) linegrid_cam4_burst_pane_g2

0xd9c8,	// (0x0004bab1) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9c8,	// (0x0004bab1) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0004db2a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0004db2a) linegrid_cam4_burst_pane_g

0x82ff,	// (0x000463e8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x82ff,	// (0x000463e8) linegrid_cam4_burst_pane_g3_copy1

0xd9d5,	// (0x0004babe) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9d5,	// (0x0004babe) linegrid_cam4_burst_pane_g4

0x8319,	// (0x00046402) linegrid_cam4_burst_pane_g5_ParamLimits

0x8319,	// (0x00046402) linegrid_cam4_burst_pane_g5

0x832a,	// (0x00046413) linegrid_cam4_burst_pane_g6_ParamLimits

0x832a,	// (0x00046413) linegrid_cam4_burst_pane_g6

0xd9e2,	// (0x0004bacb) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9e2,	// (0x0004bacb) linegrid_cam4_burst_pane_g7

0x8341,	// (0x0004642a) cell_cam4_burst_pane_g1

0xd9fb,	// (0x0004bae4) main_cam5_pane_t1_ParamLimits

0xd9fb,	// (0x0004bae4) main_cam5_pane_t1

0xda0d,	// (0x0004baf6) main_cam5_pane_t2_ParamLimits

0xda0d,	// (0x0004baf6) main_cam5_pane_t2

0xda1f,	// (0x0004bb08) main_cam5_pane_t3_ParamLimits

0xda1f,	// (0x0004bb08) main_cam5_pane_t3

0xda31,	// (0x0004bb1a) main_cam5_pane_t4_ParamLimits

0xda31,	// (0x0004bb1a) main_cam5_pane_t4

0xda49,	// (0x0004bb32) main_cam5_pane_t5_ParamLimits

0xda49,	// (0x0004bb32) main_cam5_pane_t5

0xda5d,	// (0x0004bb46) main_cam5_pane_t6_ParamLimits

0xda5d,	// (0x0004bb46) main_cam5_pane_t6

0xda71,	// (0x0004bb5a) main_cam5_pane_t7_ParamLimits

0xda71,	// (0x0004bb5a) main_cam5_pane_t7

0xda83,	// (0x0004bb6c) main_cam5_pane_t8_ParamLimits

0xda83,	// (0x0004bb6c) main_cam5_pane_t8

0xdaa1,	// (0x0004bb8a) main_cam5_pane_t9_ParamLimits

0xdaa1,	// (0x0004bb8a) main_cam5_pane_t9

0xdab3,	// (0x0004bb9c) main_cam5_pane_t10_ParamLimits

0xdab3,	// (0x0004bb9c) main_cam5_pane_t10

0xdac5,	// (0x0004bbae) main_cam5_pane_t11_ParamLimits

0xdac5,	// (0x0004bbae) main_cam5_pane_t11

0xdad9,	// (0x0004bbc2) main_cam5_pane_t12_ParamLimits

0xdad9,	// (0x0004bbc2) main_cam5_pane_t12

0xdaf0,	// (0x0004bbd9) main_cam5_pane_t13_ParamLimits

0xdaf0,	// (0x0004bbd9) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0004db36) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0004db36) main_cam5_pane_t

0x21be,	// (0x000402a7) popup_scut_keymap_window_ParamLimits

0x21be,	// (0x000402a7) popup_scut_keymap_window

0x8354,	// (0x0004643d) aid_size_cell_brow_shortcut

0xb434,	// (0x0004951d) bg_popup_window_pane_cp010

0x8360,	// (0x00046449) grid_scut_pane

0x836c,	// (0x00046455) cell_scut_pane_ParamLimits

0x836c,	// (0x00046455) cell_scut_pane

0x8387,	// (0x00046470) cell_scut_pane_g1

0xdb13,	// (0x0004bbfc) cell_scut_pane_t1

0xdb22,	// (0x0004bc0b) cell_scut_pane_t2

0x8390,	// (0x00046479) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0004db51) cell_scut_pane_t

0x6346,	// (0x0004442f) main_mup3_pane_g8_ParamLimits

0x6346,	// (0x0004442f) main_mup3_pane_g8

0x778d,	// (0x00045876) area_vitu2_query_pane_ParamLimits

0x778d,	// (0x00045876) area_vitu2_query_pane

0x1094,	// (0x0003f17d) input_focus_pane_cp08

0xdb31,	// (0x0004bc1a) area_vitu2_query_pane_g1

0x1195,	// (0x0003f27e) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0004db58) area_vitu2_query_pane_g

0x839e,	// (0x00046487) area_vitu2_query_pane_t1_ParamLimits

0x839e,	// (0x00046487) area_vitu2_query_pane_t1

0x83b2,	// (0x0004649b) area_vitu2_query_pane_t2_ParamLimits

0x83b2,	// (0x0004649b) area_vitu2_query_pane_t2

0x11a6,	// (0x0003f28f) area_vitu2_query_pane_t3_ParamLimits

0x11a6,	// (0x0003f28f) area_vitu2_query_pane_t3

0x11ce,	// (0x0003f2b7) area_vitu2_query_pane_t4_ParamLimits

0x11ce,	// (0x0003f2b7) area_vitu2_query_pane_t4

0x11f6,	// (0x0003f2df) area_vitu2_query_pane_t5_ParamLimits

0x11f6,	// (0x0003f2df) area_vitu2_query_pane_t5

0x121e,	// (0x0003f307) area_vitu2_query_pane_t6_ParamLimits

0x121e,	// (0x0003f307) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0004db5d) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0004db5d) area_vitu2_query_pane_t

0x83c6,	// (0x000464af) bg_button_pane_cp018

0x83d4,	// (0x000464bd) bg_button_pane_cp021

0x126a,	// (0x0003f353) bg_button_pane_cp022

0x127b,	// (0x0003f364) input_focus_pane_cp09

0x47f4,	// (0x000428dd) aid_size_touch_mv_arrow_left

0x481f,	// (0x00042908) aid_size_touch_mv_arrow_right

0x7d46,	// (0x00045e2f) main_cset_slider_pane_g16_ParamLimits

0x7d46,	// (0x00045e2f) main_cset_slider_pane_g16

0x7d52,	// (0x00045e3b) main_cset_slider_pane_g17_ParamLimits

0x7d52,	// (0x00045e3b) main_cset_slider_pane_g17

0x8341,	// (0x0004642a) cell_cam4_burst_pane_g1_ParamLimits

0xa176,	// (0x0004825f) compa_mode_pane

0x7f40,	// (0x00046029) popup_vtel_slider_window_g3_ParamLimits

0x7f40,	// (0x00046029) popup_vtel_slider_window_g3

0x7f54,	// (0x0004603d) popup_vtel_slider_window_g4_ParamLimits

0x7f54,	// (0x0004603d) popup_vtel_slider_window_g4

0x7f68,	// (0x00046051) popup_vtel_slider_window_t1_ParamLimits

0x7f68,	// (0x00046051) popup_vtel_slider_window_t1

0xa176,	// (0x0004825f) main_cl_pane

0xc88c,	// (0x0004a975) popup_imed_adjust2_window_ParamLimits

0xc860,	// (0x0004a949) bg_tb_trans_pane_cp05_ParamLimits

0xd18e,	// (0x0004b277) popup_imed_adjust2_window_g1_ParamLimits

0xd19d,	// (0x0004b286) popup_imed_adjust2_window_g2_ParamLimits

0xd19d,	// (0x0004b286) popup_imed_adjust2_window_g2

0xd1a9,	// (0x0004b292) popup_imed_adjust2_window_g3_ParamLimits

0xd1a9,	// (0x0004b292) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0004d8c8) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0004d8c8) popup_imed_adjust2_window_g

0xd1b5,	// (0x0004b29e) popup_imed_adjust2_window_t1_ParamLimits

0xd1cd,	// (0x0004b2b6) slider_imed_adjust_pane_ParamLimits

0xd1e1,	// (0x0004b2ca) slider_imed_adjust_pane_g1_ParamLimits

0xd1f1,	// (0x0004b2da) slider_imed_adjust_pane_g2_ParamLimits

0xd201,	// (0x0004b2ea) slider_imed_adjust_pane_g3_ParamLimits

0xd212,	// (0x0004b2fb) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0004d8cf) slider_imed_adjust_pane_g_ParamLimits

0x74ce,	// (0x000455b7) aid_touch_area_cam4_ParamLimits

0x74ce,	// (0x000455b7) aid_touch_area_cam4

0x74de,	// (0x000455c7) battery_pane_cp01

0x7565,	// (0x0004564e) main_camera4_pane_g6_ParamLimits

0x7565,	// (0x0004564e) main_camera4_pane_g6

0x7583,	// (0x0004566c) main_camera4_pane_t2_ParamLimits

0x7583,	// (0x0004566c) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0004d9d2) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0004d9d2) main_camera4_pane_t

0x7606,	// (0x000456ef) aid_touch_area_vid4_ParamLimits

0x7606,	// (0x000456ef) aid_touch_area_vid4

0x7646,	// (0x0004572f) main_video4_pane_g5_ParamLimits

0x7646,	// (0x0004572f) main_video4_pane_g5

0x766c,	// (0x00045755) vid4_progress_pane_ParamLimits

0x766c,	// (0x00045755) vid4_progress_pane

0xd7e4,	// (0x0004b8cd) main_cset_slider_pane_g18_ParamLimits

0xd7e4,	// (0x0004b8cd) main_cset_slider_pane_g18

0xd9ef,	// (0x0004bad8) cell_cam4_burst_pane_g2_ParamLimits

0xd9ef,	// (0x0004bad8) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0004db31) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0004db31) cell_cam4_burst_pane_g

0x83e0,	// (0x000464c9) bg_cl_pane_ParamLimits

0x83e0,	// (0x000464c9) bg_cl_pane

0x83ec,	// (0x000464d5) cl_header_pane_ParamLimits

0x83ec,	// (0x000464d5) cl_header_pane

0x83f8,	// (0x000464e1) cl_listscroll_pane_ParamLimits

0x83f8,	// (0x000464e1) cl_listscroll_pane

0xdb3d,	// (0x0004bc26) bg_cl_pane_g1

0xdb45,	// (0x0004bc2e) bg_cl_pane_g2

0xdb4d,	// (0x0004bc36) bg_cl_pane_g3

0xdb55,	// (0x0004bc3e) bg_cl_pane_g4

0xdb5d,	// (0x0004bc46) bg_cl_pane_g5

0xdb65,	// (0x0004bc4e) bg_cl_pane_g6

0xdb6d,	// (0x0004bc56) bg_cl_pane_g7

0xdb75,	// (0x0004bc5e) bg_cl_pane_g8

0xdb7d,	// (0x0004bc66) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0004db6c) bg_cl_pane_g

0x8404,	// (0x000464ed) aid_height_cl_leading_ParamLimits

0x8404,	// (0x000464ed) aid_height_cl_leading

0x8410,	// (0x000464f9) aid_height_cl_text_ParamLimits

0x8410,	// (0x000464f9) aid_height_cl_text

0x21ff,	// (0x000402e8) bg_cl_header_pane_ParamLimits

0x21ff,	// (0x000402e8) bg_cl_header_pane

0x8428,	// (0x00046511) cl_header_pane_g1_ParamLimits

0x8428,	// (0x00046511) cl_header_pane_g1

0x8435,	// (0x0004651e) cl_header_pane_t1_ParamLimits

0x8435,	// (0x0004651e) cl_header_pane_t1

0xdb85,	// (0x0004bc6e) cl_list_pane

0xd7b7,	// (0x0004b8a0) hc_scroll_pane_cp01

0xad39,	// (0x00048e22) bg_cl_header_pane_g1

0xd699,	// (0x0004b782) bg_cl_header_pane_g2

0xad59,	// (0x00048e42) bg_cl_header_pane_g3

0xd6a9,	// (0x0004b792) bg_cl_header_pane_g4

0xd6a1,	// (0x0004b78a) bg_cl_header_pane_g5

0xd90a,	// (0x0004b9f3) bg_cl_header_pane_g6

0xd6c1,	// (0x0004b7aa) bg_cl_header_pane_g7

0xd6c9,	// (0x0004b7b2) bg_cl_header_pane_g8

0xd6b9,	// (0x0004b7a2) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0004db7f) bg_cl_header_pane_g

0x8447,	// (0x00046530) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8447,	// (0x00046530) hc_cl_list_double_graphic_heading_pane

0x8457,	// (0x00046540) hc_cl_list_single_graphic_pane_ParamLimits

0x8457,	// (0x00046540) hc_cl_list_single_graphic_pane

0x8469,	// (0x00046552) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8469,	// (0x00046552) hc_cl_list_single_graphic_pane_g1

0x8475,	// (0x0004655e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8475,	// (0x0004655e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0004db92) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0004db92) hc_cl_list_single_graphic_pane_g

0x8489,	// (0x00046572) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8489,	// (0x00046572) hc_cl_list_single_graphic_pane_t1

0x8469,	// (0x00046552) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8469,	// (0x00046552) hc_cl_list_double_graphic_heading_pane_g1

0x849e,	// (0x00046587) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x849e,	// (0x00046587) hc_cl_list_double_graphic_heading_pane_g2

0x84b2,	// (0x0004659b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x84b2,	// (0x0004659b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0004db97) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0004db97) hc_cl_list_double_graphic_heading_pane_g

0x84c6,	// (0x000465af) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x84c6,	// (0x000465af) hc_cl_list_double_graphic_heading_pane_t1

0x84db,	// (0x000465c4) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x84db,	// (0x000465c4) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0004db9e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0004db9e) hc_cl_list_double_graphic_heading_pane_t

0x84f8,	// (0x000465e1) vid4_progress_pane_g1

0x850a,	// (0x000465f3) vid4_progress_pane_g2

0x4ef3,	// (0x00042fdc) vid4_progress_pane_g3

0x851c,	// (0x00046605) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0004dba3) vid4_progress_pane_g

0x853a,	// (0x00046623) vid4_progress_pane_t1

0x854f,	// (0x00046638) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0004dbae) vid4_progress_pane_t

0x857a,	// (0x00046663) wait_bar_pane_cp07

0xca9e,	// (0x0004ab87) blid_firmament_pane_ParamLimits

0xcae1,	// (0x0004abca) popup_blid_sat_info2_window_g1

0xcb05,	// (0x0004abee) popup_blid_sat_info2_window_t3

0xcb13,	// (0x0004abfc) popup_blid_sat_info2_window_t4

0xcb21,	// (0x0004ac0a) popup_blid_sat_info2_window_t5

0xcb2f,	// (0x0004ac18) popup_blid_sat_info2_window_t6

0xcb3f,	// (0x0004ac28) popup_blid_sat_info2_window_t7

0xcb4d,	// (0x0004ac36) popup_blid_sat_info2_window_t8

0xcb5b,	// (0x0004ac44) popup_blid_sat_info2_window_t9

0xcb69,	// (0x0004ac52) popup_blid_sat_info2_window_t10

0xcc31,	// (0x0004ad1a) aid_firma_cardinal_ParamLimits

0xcc45,	// (0x0004ad2e) blid_firmament_pane_t1_ParamLimits

0xcc5c,	// (0x0004ad45) blid_firmament_pane_t2_ParamLimits

0xcc73,	// (0x0004ad5c) blid_firmament_pane_t3_ParamLimits

0xcc8a,	// (0x0004ad73) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0004d7c1) blid_firmament_pane_t_ParamLimits

0xcca1,	// (0x0004ad8a) blid_sat_info_pane_ParamLimits

0xa93e,	// (0x00048a27) main_cam_set_pane_ParamLimits

0x6aea,	// (0x00044bd3) aid_size_cell_colour_35_ParamLimits

0x6b04,	// (0x00044bed) aid_size_cell_colour_112_ParamLimits

0x6b1b,	// (0x00044c04) aid_size_cell_effect_ParamLimits

0xa93e,	// (0x00048a27) bg_tb_trans_pane_cp02_ParamLimits

0xb95e,	// (0x00049a47) heading_imed_pane_ParamLimits

0x6b35,	// (0x00044c1e) listscroll_imed_pane_ParamLimits

0xbe82,	// (0x00049f6b) popup_call2_audio_first_window_g5_ParamLimits

0xbe82,	// (0x00049f6b) popup_call2_audio_first_window_g5

0x7247,	// (0x00045330) aid_size_touch_image3_arrow_left_ParamLimits

0x7247,	// (0x00045330) aid_size_touch_image3_arrow_left

0x725d,	// (0x00045346) aid_size_touch_image3_arrow_right_ParamLimits

0x725d,	// (0x00045346) aid_size_touch_image3_arrow_right

0x8565,	// (0x0004664e) vid4_progress_pane_t3

0x6de3,	// (0x00044ecc) main_hwr_training_symbol_option_pane_ParamLimits

0x6de3,	// (0x00044ecc) main_hwr_training_symbol_option_pane

0xd47d,	// (0x0004b566) popup_hwr_training_preview_window_ParamLimits

0xd47d,	// (0x0004b566) popup_hwr_training_preview_window

0x6e44,	// (0x00044f2d) hwr_training_navi_pane_g5_ParamLimits

0x6e44,	// (0x00044f2d) hwr_training_navi_pane_g5

0xd687,	// (0x0004b770) popup_char_count_window

0x21ff,	// (0x000402e8) bg_popup_sub_pane_cp20_ParamLimits

0x8063,	// (0x0004614c) list_vitu2_match_list_pane_ParamLimits

0x806f,	// (0x00046158) vitu2_page_scroll_pane_ParamLimits

0x806f,	// (0x00046158) vitu2_page_scroll_pane

0xdb8e,	// (0x0004bc77) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb8e,	// (0x0004bc77) list_single_hwr_training_symbol_option_pane

0xdba1,	// (0x0004bc8a) list_single_hwr_training_symbol_option_pane_g1

0xdba9,	// (0x0004bc92) list_single_hwr_training_symbol_option_pane_t1

0xdbb7,	// (0x0004bca0) bg_button_pane_cp023

0xdbc0,	// (0x0004bca9) bg_button_pane_cp024

0x8597,	// (0x00046680) vitu2_page_scroll_pane_g1

0x859f,	// (0x00046688) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0004dbb5) vitu2_page_scroll_pane_g

0x85a9,	// (0x00046692) vitu2_page_scroll_pane_t1

0xc9fe,	// (0x0004aae7) popup_char_count_window_g1

0xdbf3,	// (0x0004bcdc) popup_char_count_window_g2

0xdbfc,	// (0x0004bce5) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0004dbba) popup_char_count_window_g

0xdc05,	// (0x0004bcee) popup_char_count_window_t1

0xa176,	// (0x0004825f) main_vded2_pane

0xd17a,	// (0x0004b263) aid_size_cell_imed_line

0xd184,	// (0x0004b26d) grid_imed_line_width_pane

0x76e0,	// (0x000457c9) vid4_indicators_pane_g4

0xdc13,	// (0x0004bcfc) cell_imed_line_width_pane_ParamLimits

0xdc13,	// (0x0004bcfc) cell_imed_line_width_pane

0xdc29,	// (0x0004bd12) cell_imed_line_width_pane_g1

0xd8a5,	// (0x0004b98e) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0004dbc1) cell_imed_line_width_pane_g

0x85b8,	// (0x000466a1) main_vded2_pane_g1_ParamLimits

0x85b8,	// (0x000466a1) main_vded2_pane_g1

0x85c7,	// (0x000466b0) main_vded2_pane_g2_ParamLimits

0x85c7,	// (0x000466b0) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0004dbc6) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0004dbc6) main_vded2_pane_g

0x85d5,	// (0x000466be) vded2_slider_pane_ParamLimits

0x85d5,	// (0x000466be) vded2_slider_pane

0x85e2,	// (0x000466cb) aid_size_touch_vded2_end

0x85ec,	// (0x000466d5) aid_size_touch_vded2_playhead

0xdc32,	// (0x0004bd1b) aid_size_touch_vded2_start

0xdc3a,	// (0x0004bd23) vded2_slider_bg_pane

0xdc43,	// (0x0004bd2c) vded2_slider_pane_g1

0xdc4c,	// (0x0004bd35) vded2_slider_pane_g2

0x85f4,	// (0x000466dd) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0004dbcb) vded2_slider_pane_g

0xd8c3,	// (0x0004b9ac) vded2_slider_bg_pane_g1

0xd8cc,	// (0x0004b9b5) vded2_slider_bg_pane_g2

0xd8d5,	// (0x0004b9be) vded2_slider_bg_pane_g3

0x0002,

0xf7a8,	// (0x0004d891) vded2_slider_bg_pane_g

0x4f0b,	// (0x00042ff4) aid_postcard_touch_down_pane_ParamLimits

0x4f0b,	// (0x00042ff4) aid_postcard_touch_down_pane

0x4f1b,	// (0x00043004) aid_postcard_touch_up_pane_ParamLimits

0x4f1b,	// (0x00043004) aid_postcard_touch_up_pane

0xa176,	// (0x0004825f) main_blid2_pane

0xc86e,	// (0x0004a957) popup_blid2_search_window

0xa176,	// (0x0004825f) blid2_gps_pane

0xa176,	// (0x0004825f) blid2_navig_pane

0xa176,	// (0x0004825f) blid2_search_pane

0xa176,	// (0x0004825f) blid2_tripm_pane

0x85fd,	// (0x000466e6) blid2_search_pane_g1_ParamLimits

0x85fd,	// (0x000466e6) blid2_search_pane_g1

0x8609,	// (0x000466f2) blid2_search_pane_t1_ParamLimits

0x8609,	// (0x000466f2) blid2_search_pane_t1

0x861b,	// (0x00046704) aid_size_cell_blid2_gps_ParamLimits

0x861b,	// (0x00046704) aid_size_cell_blid2_gps

0x862b,	// (0x00046714) blid2_gps_pane_g1_ParamLimits

0x862b,	// (0x00046714) blid2_gps_pane_g1

0x8637,	// (0x00046720) grid_blid2_satellite_pane_ParamLimits

0x8637,	// (0x00046720) grid_blid2_satellite_pane

0x8645,	// (0x0004672e) blid2_navig_pane_g1_ParamLimits

0x8645,	// (0x0004672e) blid2_navig_pane_g1

0x8651,	// (0x0004673a) blid2_navig_pane_t1_ParamLimits

0x8651,	// (0x0004673a) blid2_navig_pane_t1

0x8663,	// (0x0004674c) blid2_navig_pane_t2_ParamLimits

0x8663,	// (0x0004674c) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0004dbd2) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0004dbd2) blid2_navig_pane_t

0x8675,	// (0x0004675e) blid2_navig_ring_pane_ParamLimits

0x8675,	// (0x0004675e) blid2_navig_ring_pane

0x8685,	// (0x0004676e) blid2_speed_pane_ParamLimits

0x8685,	// (0x0004676e) blid2_speed_pane

0x8691,	// (0x0004677a) blid2_tripm_pane_g1_ParamLimits

0x8691,	// (0x0004677a) blid2_tripm_pane_g1

0x86a1,	// (0x0004678a) blid2_tripm_pane_g2_ParamLimits

0x86a1,	// (0x0004678a) blid2_tripm_pane_g2

0x86ad,	// (0x00046796) blid2_tripm_pane_g3_ParamLimits

0x86ad,	// (0x00046796) blid2_tripm_pane_g3

0x86b9,	// (0x000467a2) blid2_tripm_pane_g4_ParamLimits

0x86b9,	// (0x000467a2) blid2_tripm_pane_g4

0x86c5,	// (0x000467ae) blid2_tripm_pane_g5_ParamLimits

0x86c5,	// (0x000467ae) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0004dbd7) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0004dbd7) blid2_tripm_pane_g

0x86e1,	// (0x000467ca) blid2_tripm_pane_t1_ParamLimits

0x86e1,	// (0x000467ca) blid2_tripm_pane_t1

0x86f3,	// (0x000467dc) blid2_tripm_pane_t2_ParamLimits

0x86f3,	// (0x000467dc) blid2_tripm_pane_t2

0x8705,	// (0x000467ee) blid2_tripm_pane_t3_ParamLimits

0x8705,	// (0x000467ee) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0004dbe4) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0004dbe4) blid2_tripm_pane_t

0x8737,	// (0x00046820) cell_blid2_satellite_pane_ParamLimits

0x8737,	// (0x00046820) cell_blid2_satellite_pane

0x8755,	// (0x0004683e) cell_blid2_satellite_pane_g1

0xdc54,	// (0x0004bd3d) cell_blid2_satellite_pane_t1

0xccb1,	// (0x0004ad9a) blid2_speed_pane_g1

0xdc62,	// (0x0004bd4b) blid2_speed_pane_t1

0xdc70,	// (0x0004bd59) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0004dbed) blid2_speed_pane_t

0xccb1,	// (0x0004ad9a) blid2_navig_ring_pane_g1

0x875e,	// (0x00046847) blid2_navig_ring_pane_g2

0x8766,	// (0x0004684f) blid2_navig_ring_pane_g3

0x876e,	// (0x00046857) blid2_navig_ring_pane_g4

0x8776,	// (0x0004685f) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0004dbf2) blid2_navig_ring_pane_g

0xa176,	// (0x0004825f) bg_popup_window_pane_cp011

0xdc7e,	// (0x0004bd67) popup_blid2_search_window_g1

0xdc86,	// (0x0004bd6f) popup_blid2_search_window_t1

0xdc94,	// (0x0004bd7d) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0004dbfd) popup_blid2_search_window_t

0xac48,	// (0x00048d31) main_browser_pane_g1

0xa902,	// (0x000489eb) main_browser_pane_ParamLimits

0xa93e,	// (0x00048a27) bg_button_pane_cp011_ParamLimits

0x7957,	// (0x00045a40) cell_vitu2_function_pane_g1_ParamLimits

0xc860,	// (0x0004a949) bg_popup_sub_pane_cp22_ParamLimits

0x1094,	// (0x0003f17d) input_focus_pane_cp08_ParamLimits

0x81df,	// (0x000462c8) popup_vitu2_query_button_pane_ParamLimits

0x81df,	// (0x000462c8) popup_vitu2_query_button_pane

0x10ab,	// (0x0003f194) popup_vitu2_query_input_button_pane

0xd945,	// (0x0004ba2e) popup_vitu2_query_window_g1_ParamLimits

0x10b5,	// (0x0003f19e) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0004db05) popup_vitu2_query_window_g_ParamLimits

0xa176,	// (0x0004825f) bg_button_pane_cp026

0x877e,	// (0x00046867) popup_vitu2_query_input_button_pane_g1

0xa176,	// (0x0004825f) bg_button_pane_cp025

0xdca2,	// (0x0004bd8b) popup_vitu2_query_button_pane_t1

0x60ac,	// (0x00044195) main_mp3_pane_t6

0x60bc,	// (0x000441a5) popup_slider_window_cp01

0x75bb,	// (0x000456a4) cam4_battery_pane

0x7699,	// (0x00045782) cam4_battery_pane_cp02

0x84f0,	// (0x000465d9) cam4_battery_pane_cp01

0x84f0,	// (0x000465d9) cam4_battery_pane_cp03

0xccb1,	// (0x0004ad9a) cam4_battery_pane_g1

0xd8ad,	// (0x0004b996) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0004dc02) cam4_battery_pane_g

0xcb77,	// (0x0004ac60) popup_blid_sat_info2_window_t11

0x47f4,	// (0x000428dd) aid_size_touch_mv_arrow_left_ParamLimits

0x481f,	// (0x00042908) aid_size_touch_mv_arrow_right_ParamLimits

0xb394,	// (0x0004947d) navi_pane_g1_ParamLimits

0x485e,	// (0x00042947) navi_pane_g2_ParamLimits

0x488c,	// (0x00042975) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0004d4d3) navi_pane_g_ParamLimits

0x48e6,	// (0x000429cf) navi_pane_mv_t1_ParamLimits

0x6b41,	// (0x00044c2a) grid_imed_effect_pane_ParamLimits

0x330a,	// (0x000413f3) aid_placing_vt_slider_lsc

0xab93,	// (0x00048c7c) aid_placing_vt_slider_prt

0xa93e,	// (0x00048a27) bg_tb_trans_pane_cp01_ParamLimits

0xce01,	// (0x0004aeea) popup_image_details_window_g1_ParamLimits

0xce14,	// (0x0004aefd) popup_image_details_window_g2_ParamLimits

0xce29,	// (0x0004af12) popup_image_details_window_g3_ParamLimits

0xce29,	// (0x0004af12) popup_image_details_window_g3

0xf71d,	// (0x0004d806) popup_image_details_window_g_ParamLimits

0xce3d,	// (0x0004af26) popup_image_details_window_t1_ParamLimits

0xce4f,	// (0x0004af38) popup_image_details_window_t2_ParamLimits

0xce68,	// (0x0004af51) popup_image_details_window_t3_ParamLimits

0xce7c,	// (0x0004af65) popup_image_details_window_t4_ParamLimits

0xce97,	// (0x0004af80) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0004d80d) popup_image_details_window_t_ParamLimits

0x841c,	// (0x00046505) cl_header_name_pane_ParamLimits

0x841c,	// (0x00046505) cl_header_name_pane

0x8786,	// (0x0004686f) cl_header_name_pane_t1_ParamLimits

0x8786,	// (0x0004686f) cl_header_name_pane_t1

0x879d,	// (0x00046886) cl_header_name_pane_t2_ParamLimits

0x879d,	// (0x00046886) cl_header_name_pane_t2

0x87c7,	// (0x000468b0) cl_header_name_pane_t3_ParamLimits

0x87c7,	// (0x000468b0) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0004dc07) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0004dc07) cl_header_name_pane_t

0x48b7,	// (0x000429a0) navi_pane_mv_g2_ParamLimits

0xd661,	// (0x0004b74a) field_vitu2_entry_pane_g1_ParamLimits

0xd66d,	// (0x0004b756) field_vitu2_entry_pane_g2_ParamLimits

0xd679,	// (0x0004b762) field_vitu2_entry_pane_g3_ParamLimits

0xd679,	// (0x0004b762) field_vitu2_entry_pane_g3

0xf91b,	// (0x0004da04) field_vitu2_entry_pane_g_ParamLimits

0x78e2,	// (0x000459cb) cell_vitu2_itu_pane_g1_ParamLimits

0x78f2,	// (0x000459db) cell_vitu2_itu_pane_g2_ParamLimits

0x78f2,	// (0x000459db) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0004da10) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0004da10) cell_vitu2_itu_pane_g

0xa93e,	// (0x00048a27) bg_vkb2_func_pane_cp05_ParamLimits

0xa93e,	// (0x00048a27) bg_vkb2_func_pane_cp05

0xa93e,	// (0x00048a27) bg_vkb2_func_pane_cp03

0xa93e,	// (0x00048a27) bg_vkb2_func_pane_cp04

0xa93e,	// (0x00048a27) bg_vkb2_func_pane_cp10_ParamLimits

0xa93e,	// (0x00048a27) bg_vkb2_func_pane_cp10

0x126a,	// (0x0003f353) bg_vkb2_func_pane_cp08

0x83c6,	// (0x000464af) bg_vkb2_func_pane_cp06

0x83d4,	// (0x000464bd) bg_vkb2_func_pane_cp07

0xdbc9,	// (0x0004bcb2) bg_vkb2_func_pane_cp11_ParamLimits

0xdbc9,	// (0x0004bcb2) bg_vkb2_func_pane_cp11

0xdbde,	// (0x0004bcc7) bg_vkb2_func_pane_cp12_ParamLimits

0xdbde,	// (0x0004bcc7) bg_vkb2_func_pane_cp12

0xa176,	// (0x0004825f) bg_vkb2_func_pane_cp09

0xd699,	// (0x0004b782) bg_vkb2_func_pane_g1

0xad59,	// (0x00048e42) bg_vkb2_func_pane_g2

0xd6a1,	// (0x0004b78a) bg_vkb2_func_pane_g3

0xd6a9,	// (0x0004b792) bg_vkb2_func_pane_g4

0xd90a,	// (0x0004b9f3) bg_vkb2_func_pane_g5

0xd6c1,	// (0x0004b7aa) bg_vkb2_func_pane_g6

0xd6c9,	// (0x0004b7b2) bg_vkb2_func_pane_g7

0xd6b9,	// (0x0004b7a2) bg_vkb2_func_pane_g8

0xad39,	// (0x00048e22) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0004dc0e) bg_vkb2_func_pane_g

0x86d3,	// (0x000467bc) blid2_tripm_pane_g6_ParamLimits

0x86d3,	// (0x000467bc) blid2_tripm_pane_g6

0xd535,	// (0x0004b61e) mp4_progress_pane_g1

0x872b,	// (0x00046814) blid2_tripm_values_pane_ParamLimits

0x872b,	// (0x00046814) blid2_tripm_values_pane

0x87ec,	// (0x000468d5) blid2_tripm_values_pane_t1

0x87fa,	// (0x000468e3) blid2_tripm_values_pane_t2

0x8808,	// (0x000468f1) blid2_tripm_values_pane_t3

0x8816,	// (0x000468ff) blid2_tripm_values_pane_t4

0x8824,	// (0x0004690d) blid2_tripm_values_pane_t5

0x8832,	// (0x0004691b) blid2_tripm_values_pane_t6

0x8840,	// (0x00046929) blid2_tripm_values_pane_t7

0x884e,	// (0x00046937) blid2_tripm_values_pane_t8

0x885c,	// (0x00046945) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0004dc21) blid2_tripm_values_pane_t

0x3348,	// (0x00041431) call_video_pane_t1_ParamLimits

0x3365,	// (0x0004144e) call_video_pane_t2_ParamLimits

0xf273,	// (0x0004d35c) call_video_pane_t_ParamLimits

0x0e07,	// (0x0003eef0) msg_header_pane_g1_ParamLimits

0xb5a8,	// (0x00049691) msg_header_pane_g2_ParamLimits

0xb5a8,	// (0x00049691) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0004d576) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0004d576) msg_header_pane_g

0xa902,	// (0x000489eb) main_clock2_pane_ParamLimits

0x68d0,	// (0x000449b9) grid_clock2_toolbar_pane_ParamLimits

0x68d0,	// (0x000449b9) grid_clock2_toolbar_pane

0x68d0,	// (0x000449b9) listscroll_clock2_pane_ParamLimits

0x68d0,	// (0x000449b9) listscroll_clock2_pane

0x6978,	// (0x00044a61) main_clock2_pane_t3_ParamLimits

0x6978,	// (0x00044a61) main_clock2_pane_t3

0x698a,	// (0x00044a73) main_clock2_pane_t4_ParamLimits

0x698a,	// (0x00044a73) main_clock2_pane_t4

0xdcb0,	// (0x0004bd99) cell_clock2_toolbar_pane

0xdcb8,	// (0x0004bda1) cell_clock2_toolbar_pane_cp01

0xdcb8,	// (0x0004bda1) cell_clock2_toolbar_pane_cp02

0xdcc0,	// (0x0004bda9) cell_clock2_toolbar_pane_cp03

0xdcc8,	// (0x0004bdb1) list_clock2_pane

0xb2fa,	// (0x000493e3) scroll_pane_cp10

0xdcd0,	// (0x0004bdb9) list_single_clock2_pane_ParamLimits

0xdcd0,	// (0x0004bdb9) list_single_clock2_pane

0xb434,	// (0x0004951d) list_highlight_pane_cp08

0xdcdd,	// (0x0004bdc6) list_single_clock2_pane_t1

0xdceb,	// (0x0004bdd4) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0004dc34) list_single_clock2_pane_t

0xa176,	// (0x0004825f) bg_button_pane_cp10

0xdcf9,	// (0x0004bde2) cell_clock2_toolbar_pane_g1

0x4e6d,	// (0x00042f56) aid_main_viewer_pane_g1_ParamLimits

0x4e6d,	// (0x00042f56) aid_main_viewer_pane_g1

0x4e79,	// (0x00042f62) aid_main_viewer_pane_g2_ParamLimits

0x4e79,	// (0x00042f62) aid_main_viewer_pane_g2

0x4e85,	// (0x00042f6e) aid_main_viewer_pane_g3_ParamLimits

0x4e85,	// (0x00042f6e) aid_main_viewer_pane_g3

0x4e96,	// (0x00042f7f) aid_main_viewer_pane_g4_ParamLimits

0x4e96,	// (0x00042f7f) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0004d587) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0004d587) aid_main_viewer_pane_g

0x5620,	// (0x00043709) main_calc_pane_ParamLimits

0x562d,	// (0x00043716) main_dialer2_pane_ParamLimits

0xa176,	// (0x0004825f) main_cam6_pane

0xa176,	// (0x0004825f) main_vid6_pane

0x68dc,	// (0x000449c5) listscroll_gen_pane_cp06_ParamLimits

0x68dc,	// (0x000449c5) listscroll_gen_pane_cp06

0x699c,	// (0x00044a85) main_clock2_pane_t5_ParamLimits

0x699c,	// (0x00044a85) main_clock2_pane_t5

0x69eb,	// (0x00044ad4) aid_call2_pane_cp10_ParamLimits

0x69fd,	// (0x00044ae6) aid_call_pane_cp10_ParamLimits

0xb369,	// (0x00049452) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb369,	// (0x00049452) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6a0f,	// (0x00044af8) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6a0f,	// (0x00044af8) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb369,	// (0x00049452) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0004d8bd) popup_clock_analogue_window_cp10_g_ParamLimits

0x6a21,	// (0x00044b0a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x71f4,	// (0x000452dd) cell_dialer2_keypad_pane_g2_ParamLimits

0x71f4,	// (0x000452dd) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0004d9a3) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0004d9a3) cell_dialer2_keypad_pane_g

0x7210,	// (0x000452f9) cell_dialer2_keypad_pane_t1

0x7c34,	// (0x00045d1d) main_cset_text2_pane_ParamLimits

0x7c34,	// (0x00045d1d) main_cset_text2_pane

0xdb31,	// (0x0004bc1a) area_vitu2_query_pane_g1_ParamLimits

0x1195,	// (0x0003f27e) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0004db58) area_vitu2_query_pane_g_ParamLimits

0x1246,	// (0x0003f32f) area_vitu2_query_pane_t7_ParamLimits

0x1246,	// (0x0003f32f) area_vitu2_query_pane_t7

0x83c6,	// (0x000464af) bg_button_pane_cp018_ParamLimits

0x83d4,	// (0x000464bd) bg_button_pane_cp021_ParamLimits

0x126a,	// (0x0003f353) bg_button_pane_cp022_ParamLimits

0x126a,	// (0x0003f353) bg_vkb2_func_pane_cp08_ParamLimits

0x83c6,	// (0x000464af) bg_vkb2_func_pane_cp06_ParamLimits

0x83d4,	// (0x000464bd) bg_vkb2_func_pane_cp07_ParamLimits

0x127b,	// (0x0003f364) input_focus_pane_cp09_ParamLimits

0x886a,	// (0x00046953) cam6_autofocus_pane_ParamLimits

0x886a,	// (0x00046953) cam6_autofocus_pane

0x888c,	// (0x00046975) cam6_image_uncrop_pane_ParamLimits

0x888c,	// (0x00046975) cam6_image_uncrop_pane

0x88b9,	// (0x000469a2) cam6_indi_pane_ParamLimits

0x88b9,	// (0x000469a2) cam6_indi_pane

0x88d3,	// (0x000469bc) cam6_mode_pane_ParamLimits

0x88d3,	// (0x000469bc) cam6_mode_pane

0x88e7,	// (0x000469d0) cam6_timer_pane_ParamLimits

0x88e7,	// (0x000469d0) cam6_timer_pane

0x88f3,	// (0x000469dc) cam6_zoom_pane_ParamLimits

0x88f3,	// (0x000469dc) cam6_zoom_pane

0x890f,	// (0x000469f8) cam6_mode_pane_g1_ParamLimits

0x890f,	// (0x000469f8) cam6_mode_pane_g1

0x891b,	// (0x00046a04) cam6_mode_pane_g2_ParamLimits

0x891b,	// (0x00046a04) cam6_mode_pane_g2

0x8927,	// (0x00046a10) cam6_mode_pane_g3_ParamLimits

0x8927,	// (0x00046a10) cam6_mode_pane_g3

0x8933,	// (0x00046a1c) cam6_mode_pane_g4_ParamLimits

0x8933,	// (0x00046a1c) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0004dc39) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0004dc39) cam6_mode_pane_g

0xd8de,	// (0x0004b9c7) bg_tb_trans_pane_cp08_ParamLimits

0xd8de,	// (0x0004b9c7) bg_tb_trans_pane_cp08

0xdd01,	// (0x0004bdea) cam6_battery_pane_ParamLimits

0xdd01,	// (0x0004bdea) cam6_battery_pane

0xdd17,	// (0x0004be00) cam6_indi_pane_g1_ParamLimits

0xdd17,	// (0x0004be00) cam6_indi_pane_g1

0xdd29,	// (0x0004be12) cam6_indi_pane_g2_ParamLimits

0xdd29,	// (0x0004be12) cam6_indi_pane_g2

0xdd3b,	// (0x0004be24) cam6_indi_pane_g3_ParamLimits

0xdd3b,	// (0x0004be24) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x0004dc42) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x0004dc42) cam6_indi_pane_g

0xdd4d,	// (0x0004be36) cam6_indi_pane_t1_ParamLimits

0xdd4d,	// (0x0004be36) cam6_indi_pane_t1

0x7715,	// (0x000457fe) cam6_autofocus_pane_g1

0x771d,	// (0x00045806) cam6_autofocus_pane_g2

0x7725,	// (0x0004580e) cam6_autofocus_pane_g3

0x772d,	// (0x00045816) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0004dc49) cam6_autofocus_pane_g

0xdd73,	// (0x0004be5c) cam6_timer_pane_g1

0xdd7b,	// (0x0004be64) cam6_timer_pane_t1

0xdd89,	// (0x0004be72) cam6_zoom_cont_pane

0xdd91,	// (0x0004be7a) cam6_zoom_pane_g1

0xdd99,	// (0x0004be82) cam6_zoom_pane_g2

0x893f,	// (0x00046a28) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0004dc52) cam6_zoom_pane_g

0xccb1,	// (0x0004ad9a) cam6_battery_pane_g1

0xccb1,	// (0x0004ad9a) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0004d7ca) cam6_battery_pane_g

0xdda1,	// (0x0004be8a) cam6_zoom_cont_pane_g1

0xddaa,	// (0x0004be93) cam6_zoom_cont_pane_g2

0xddb3,	// (0x0004be9c) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x0004dc59) cam6_zoom_cont_pane_g

0x895c,	// (0x00046a45) cam6_mode_pane_cp_ParamLimits

0x895c,	// (0x00046a45) cam6_mode_pane_cp

0x88f3,	// (0x000469dc) cam6_zoom_pane_cp_ParamLimits

0x88f3,	// (0x000469dc) cam6_zoom_pane_cp

0x8970,	// (0x00046a59) vid6_image_uncrop_cif_pane_ParamLimits

0x8970,	// (0x00046a59) vid6_image_uncrop_cif_pane

0x899c,	// (0x00046a85) vid6_image_uncrop_nhd_pane_ParamLimits

0x899c,	// (0x00046a85) vid6_image_uncrop_nhd_pane

0x888c,	// (0x00046975) vid6_image_uncrop_vga_pane_ParamLimits

0x888c,	// (0x00046975) vid6_image_uncrop_vga_pane

0x89bb,	// (0x00046aa4) vid6_image_uncrop_wvga_pane_ParamLimits

0x89bb,	// (0x00046aa4) vid6_image_uncrop_wvga_pane

0x89da,	// (0x00046ac3) vid6_indi_pane_ParamLimits

0x89da,	// (0x00046ac3) vid6_indi_pane

0xd8de,	// (0x0004b9c7) bg_tb_trans_pane_cp09_ParamLimits

0xd8de,	// (0x0004b9c7) bg_tb_trans_pane_cp09

0xddcb,	// (0x0004beb4) cam6_battery_pane_cp_ParamLimits

0xddcb,	// (0x0004beb4) cam6_battery_pane_cp

0xddd7,	// (0x0004bec0) vid6_indi_pane_g1_ParamLimits

0xddd7,	// (0x0004bec0) vid6_indi_pane_g1

0xdde9,	// (0x0004bed2) vid6_indi_pane_g2_ParamLimits

0xdde9,	// (0x0004bed2) vid6_indi_pane_g2

0xddfb,	// (0x0004bee4) vid6_indi_pane_g3_ParamLimits

0xddfb,	// (0x0004bee4) vid6_indi_pane_g3

0xde12,	// (0x0004befb) vid6_indi_pane_g4_ParamLimits

0xde12,	// (0x0004befb) vid6_indi_pane_g4

0xde29,	// (0x0004bf12) vid6_indi_pane_g5_ParamLimits

0xde29,	// (0x0004bf12) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x0004dc60) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x0004dc60) vid6_indi_pane_g

0xde43,	// (0x0004bf2c) vid6_indi_pane_t1_ParamLimits

0xde43,	// (0x0004bf2c) vid6_indi_pane_t1

0xde59,	// (0x0004bf42) vid6_indi_pane_t2_ParamLimits

0xde59,	// (0x0004bf42) vid6_indi_pane_t2

0xde81,	// (0x0004bf6a) vid6_indi_pane_t3_ParamLimits

0xde81,	// (0x0004bf6a) vid6_indi_pane_t3

0xdea9,	// (0x0004bf92) vid6_indi_pane_t4_ParamLimits

0xdea9,	// (0x0004bf92) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x0004dc6b) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x0004dc6b) vid6_indi_pane_t

0xdecd,	// (0x0004bfb6) wait_bar_pane_cp08

0x89ff,	// (0x00046ae8) main_cset_text2_pane_t1_ParamLimits

0x89ff,	// (0x00046ae8) main_cset_text2_pane_t1

0x8947,	// (0x00046a30) listscroll_gen_pane_cp06_t1_ParamLimits

0x8947,	// (0x00046a30) listscroll_gen_pane_cp06_t1

0xa176,	// (0x0004825f) main_cam6_set_pane

0xcee1,	// (0x0004afca) bg_tb_trans_pane_cp06_ParamLimits

0x75c3,	// (0x000456ac) cam4_indicators_pane_g1_ParamLimits

0x75d4,	// (0x000456bd) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0004d9e0) cam4_indicators_pane_g_ParamLimits

0x75ec,	// (0x000456d5) cam4_indicators_pane_t1_ParamLimits

0xa93e,	// (0x00048a27) bg_tb_trans_pane_cp07_ParamLimits

0x76a3,	// (0x0004578c) vid4_indicators_pane_g1_ParamLimits

0x76b9,	// (0x000457a2) vid4_indicators_pane_g2_ParamLimits

0x76cd,	// (0x000457b6) vid4_indicators_pane_g3_ParamLimits

0x76e0,	// (0x000457c9) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0004d9f2) vid4_indicators_pane_g_ParamLimits

0x76fe,	// (0x000457e7) vid4_indicators_pane_t1_ParamLimits

0x84f8,	// (0x000465e1) vid4_progress_pane_g1_ParamLimits

0x850a,	// (0x000465f3) vid4_progress_pane_g2_ParamLimits

0x4ef3,	// (0x00042fdc) vid4_progress_pane_g3_ParamLimits

0x851c,	// (0x00046605) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0004dba3) vid4_progress_pane_g_ParamLimits

0x853a,	// (0x00046623) vid4_progress_pane_t1_ParamLimits

0x854f,	// (0x00046638) vid4_progress_pane_t2_ParamLimits

0x8565,	// (0x0004664e) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0004dbae) vid4_progress_pane_t_ParamLimits

0x857a,	// (0x00046663) wait_bar_pane_cp07_ParamLimits

0x8a26,	// (0x00046b0f) main_cam6_set_pane_g2_ParamLimits

0x8a26,	// (0x00046b0f) main_cam6_set_pane_g2

0x8a32,	// (0x00046b1b) main_cset6_listscroll_pane_ParamLimits

0x8a32,	// (0x00046b1b) main_cset6_listscroll_pane

0x8a5f,	// (0x00046b48) main_cset6_slider_pane_ParamLimits

0x8a5f,	// (0x00046b48) main_cset6_slider_pane

0x8a6b,	// (0x00046b54) main_cset6_text2_pane_ParamLimits

0x8a6b,	// (0x00046b54) main_cset6_text2_pane

0xdedc,	// (0x0004bfc5) main_cset6_text_pane

0xdee4,	// (0x0004bfcd) main_cset_list_pane_copy1_ParamLimits

0xdee4,	// (0x0004bfcd) main_cset_list_pane_copy1

0xdef4,	// (0x0004bfdd) scroll_pane_cp028_copy1

0x8a7e,	// (0x00046b67) cset_list_set_pane_copy1

0x8a8e,	// (0x00046b77) aid_position_infowindow_above_copy1

0x8a96,	// (0x00046b7f) aid_position_infowindow_below_copy1

0x12dd,	// (0x0003f3c6) cset_list_set_pane_g1_copy1

0x12e5,	// (0x0003f3ce) cset_list_set_pane_g3_copy1_ParamLimits

0x12e5,	// (0x0003f3ce) cset_list_set_pane_g3_copy1

0x12f4,	// (0x0003f3dd) cset_list_set_pane_t1_copy1_ParamLimits

0x12f4,	// (0x0003f3dd) cset_list_set_pane_t1_copy1

0xa93e,	// (0x00048a27) list_highlight_pane_cp021_copy1_ParamLimits

0xa93e,	// (0x00048a27) list_highlight_pane_cp021_copy1

0xdefd,	// (0x0004bfe6) cset6_slider_pane_ParamLimits

0xdefd,	// (0x0004bfe6) cset6_slider_pane

0xdf29,	// (0x0004c012) main_cset6_slider_pane_g1_ParamLimits

0xdf29,	// (0x0004c012) main_cset6_slider_pane_g1

0x8a9e,	// (0x00046b87) main_cset6_slider_pane_g2_ParamLimits

0x8a9e,	// (0x00046b87) main_cset6_slider_pane_g2

0xdf51,	// (0x0004c03a) main_cset6_slider_pane_g3_ParamLimits

0xdf51,	// (0x0004c03a) main_cset6_slider_pane_g3

0x8ac6,	// (0x00046baf) main_cset6_slider_pane_g4_ParamLimits

0x8ac6,	// (0x00046baf) main_cset6_slider_pane_g4

0x8ad2,	// (0x00046bbb) main_cset6_slider_pane_g5_ParamLimits

0x8ad2,	// (0x00046bbb) main_cset6_slider_pane_g5

0xd7cc,	// (0x0004b8b5) main_cset6_slider_pane_g7_ParamLimits

0xd7cc,	// (0x0004b8b5) main_cset6_slider_pane_g7

0xd7d8,	// (0x0004b8c1) main_cset6_slider_pane_g8_ParamLimits

0xd7d8,	// (0x0004b8c1) main_cset6_slider_pane_g8

0x8ade,	// (0x00046bc7) main_cset6_slider_pane_g9_ParamLimits

0x8ade,	// (0x00046bc7) main_cset6_slider_pane_g9

0x8aea,	// (0x00046bd3) main_cset6_slider_pane_g10_ParamLimits

0x8aea,	// (0x00046bd3) main_cset6_slider_pane_g10

0x8af6,	// (0x00046bdf) main_cset6_slider_pane_g11_ParamLimits

0x8af6,	// (0x00046bdf) main_cset6_slider_pane_g11

0x8b02,	// (0x00046beb) main_cset6_slider_pane_g12_ParamLimits

0x8b02,	// (0x00046beb) main_cset6_slider_pane_g12

0x8b0e,	// (0x00046bf7) main_cset6_slider_pane_g13_ParamLimits

0x8b0e,	// (0x00046bf7) main_cset6_slider_pane_g13

0x8b1a,	// (0x00046c03) main_cset6_slider_pane_g14_ParamLimits

0x8b1a,	// (0x00046c03) main_cset6_slider_pane_g14

0x8b26,	// (0x00046c0f) main_cset6_slider_pane_g15_ParamLimits

0x8b26,	// (0x00046c0f) main_cset6_slider_pane_g15

0x8b3e,	// (0x00046c27) main_cset6_slider_pane_g16_ParamLimits

0x8b3e,	// (0x00046c27) main_cset6_slider_pane_g16

0x8b4a,	// (0x00046c33) main_cset6_slider_pane_g17_ParamLimits

0x8b4a,	// (0x00046c33) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x0004dc74) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x0004dc74) main_cset6_slider_pane_g

0xdf5d,	// (0x0004c046) main_cset6_slider_pane_t1_ParamLimits

0xdf5d,	// (0x0004c046) main_cset6_slider_pane_t1

0x8b6e,	// (0x00046c57) main_cset6_slider_pane_t2_ParamLimits

0x8b6e,	// (0x00046c57) main_cset6_slider_pane_t2

0x8b99,	// (0x00046c82) main_cset6_slider_pane_t3_ParamLimits

0x8b99,	// (0x00046c82) main_cset6_slider_pane_t3

0x8bc4,	// (0x00046cad) main_cset6_slider_pane_t4_ParamLimits

0x8bc4,	// (0x00046cad) main_cset6_slider_pane_t4

0x8bef,	// (0x00046cd8) main_cset6_slider_pane_t5_ParamLimits

0x8bef,	// (0x00046cd8) main_cset6_slider_pane_t5

0xdfe0,	// (0x0004c0c9) main_cset6_slider_pane_t7_ParamLimits

0xdfe0,	// (0x0004c0c9) main_cset6_slider_pane_t7

0x8c1a,	// (0x00046d03) main_cset6_slider_pane_t8_ParamLimits

0x8c1a,	// (0x00046d03) main_cset6_slider_pane_t8

0x8c3e,	// (0x00046d27) main_cset6_slider_pane_t9_ParamLimits

0x8c3e,	// (0x00046d27) main_cset6_slider_pane_t9

0x8c62,	// (0x00046d4b) main_cset6_slider_pane_t10_ParamLimits

0x8c62,	// (0x00046d4b) main_cset6_slider_pane_t10

0x8c86,	// (0x00046d6f) main_cset6_slider_pane_t11_ParamLimits

0x8c86,	// (0x00046d6f) main_cset6_slider_pane_t11

0xe016,	// (0x0004c0ff) main_cset6_slider_pane_t14_ParamLimits

0xe016,	// (0x0004c0ff) main_cset6_slider_pane_t14

0xe04f,	// (0x0004c138) main_cset6_slider_pane_t15_ParamLimits

0xe04f,	// (0x0004c138) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x0004dc99) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x0004dc99) main_cset6_slider_pane_t

0xdfc5,	// (0x0004c0ae) cset_slider_pane_g1_copy1

0xdfce,	// (0x0004c0b7) cset_slider_pane_g2_copy1

0xdfd7,	// (0x0004c0c0) cset_slider_pane_g3_copy1

0xa176,	// (0x0004825f) bg_popup_sub_pane_cp011_copy1

0xe088,	// (0x0004c171) main_cset_text_pane_g1_copy1

0xd959,	// (0x0004ba42) main_cset_text_pane_t1_copy1

0xd967,	// (0x0004ba50) main_cset_text_pane_t2_copy1

0xd975,	// (0x0004ba5e) main_cset_text_pane_t3_copy1

0xd983,	// (0x0004ba6c) main_cset_text_pane_t4_copy1

0xd991,	// (0x0004ba7a) main_cset_text_pane_t5_copy1

0xe090,	// (0x0004c179) main_cset_text_pane_t6_copy1

0xe09e,	// (0x0004c187) main_cset_text_pane_t7_copy1

0x8caa,	// (0x00046d93) main_cset_text2_pane_t1_copy1

0xa93e,	// (0x00048a27) main_ncimui_pane

0x5672,	// (0x0004375b) popup_query_ncimui_window_ParamLimits

0x5672,	// (0x0004375b) popup_query_ncimui_window

0x0eb8,	// (0x0003efa1) field_cale_ev2_pane_g4_ParamLimits

0x0eb8,	// (0x0003efa1) field_cale_ev2_pane_g4

0x6f0a,	// (0x00044ff3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6f0a,	// (0x00044ff3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0004d97e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0004d97e) cell_video_dialer_keypad_pane_g

0x6f22,	// (0x0004500b) cell_video_dialer_keypad_pane_t1

0xa176,	// (0x0004825f) bg_popup_window_pane_cp012

0xb1e6,	// (0x000492cf) heading_pane_cp06

0xe0ca,	// (0x0004c1b3) ncim_query_content_pane

0xa176,	// (0x0004825f) bg_popup_heading_pane_cp01

0xe0d2,	// (0x0004c1bb) ncim_heading_pane_t1

0xe0e0,	// (0x0004c1c9) ncim_indicator_popup_pane

0xe0f2,	// (0x0004c1db) ncim_query_button_pane

0xe108,	// (0x0004c1f1) ncim_query_content_pane_t1

0xe11a,	// (0x0004c203) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x0004dcdd) ncim_query_content_pane_t

0xe154,	// (0x0004c23d) ncim_query_list_pane

0xe166,	// (0x0004c24f) ncim_query_popup_pane

0xe0e0,	// (0x0004c1c9) ncim_indicator_popup_pane_ParamLimits

0x8e06,	// (0x00046eef) ncim_query_content_pane_g1_ParamLimits

0x8e06,	// (0x00046eef) ncim_query_content_pane_g1

0xe108,	// (0x0004c1f1) ncim_query_content_pane_t1_ParamLimits

0xe11a,	// (0x0004c203) ncim_query_content_pane_t2_ParamLimits

0x8e12,	// (0x00046efb) ncim_query_content_pane_t3_ParamLimits

0x8e12,	// (0x00046efb) ncim_query_content_pane_t3

0x8e2f,	// (0x00046f18) ncim_query_content_pane_t4_ParamLimits

0x8e2f,	// (0x00046f18) ncim_query_content_pane_t4

0x8e4c,	// (0x00046f35) ncim_query_content_pane_t5_ParamLimits

0x8e4c,	// (0x00046f35) ncim_query_content_pane_t5

0xe12c,	// (0x0004c215) ncim_query_content_pane_t6_ParamLimits

0xe12c,	// (0x0004c215) ncim_query_content_pane_t6

0xfbf4,	// (0x0004dcdd) ncim_query_content_pane_t_ParamLimits

0xe154,	// (0x0004c23d) ncim_query_list_pane_ParamLimits

0xe166,	// (0x0004c24f) ncim_query_popup_pane_ParamLimits

0xe17a,	// (0x0004c263) wait_bar_pane_cp04

0xa176,	// (0x0004825f) input_focus_pane_cp011

0xe182,	// (0x0004c26b) ncim_query_popup_pane_t1

0xe190,	// (0x0004c279) ncim_list_query_list_pane_ParamLimits

0xe190,	// (0x0004c279) ncim_list_query_list_pane

0xa176,	// (0x0004825f) bg_button_pane_cp027

0xe1a3,	// (0x0004c28c) ncim_query_button_pane_g1

0xa176,	// (0x0004825f) list_highlight_pane_cp012

0xe1ad,	// (0x0004c296) ncim_list_query_list_pane_g1

0xe1b5,	// (0x0004c29e) ncim_list_query_list_pane_t1

0x75e0,	// (0x000456c9) cam4_indicators_pane_g3_ParamLimits

0x75e0,	// (0x000456c9) cam4_indicators_pane_g3

0x76ec,	// (0x000457d5) vid4_indicators_pane_g5_ParamLimits

0x76ec,	// (0x000457d5) vid4_indicators_pane_g5

0x852b,	// (0x00046614) vid4_progress_pane_g5_ParamLimits

0x852b,	// (0x00046614) vid4_progress_pane_g5

0x8cdc,	// (0x00046dc5) main_ncimui_pane_g1

0x8d48,	// (0x00046e31) ncimui_group_query_pane_ParamLimits

0x8d48,	// (0x00046e31) ncimui_group_query_pane

0x8da2,	// (0x00046e8b) ncimui_list_pane_ParamLimits

0x8da2,	// (0x00046e8b) ncimui_list_pane

0x8dc9,	// (0x00046eb2) ncimui_text_pane_ParamLimits

0x8dc9,	// (0x00046eb2) ncimui_text_pane

0x8e69,	// (0x00046f52) ncimui_text_pane_t1_ParamLimits

0x8e69,	// (0x00046f52) ncimui_text_pane_t1

0xe1c3,	// (0x0004c2ac) ncimui_list_single_graphic_pane_ParamLimits

0xe1c3,	// (0x0004c2ac) ncimui_list_single_graphic_pane

0x8e88,	// (0x00046f71) ncimui_query_pane_ParamLimits

0x8e88,	// (0x00046f71) ncimui_query_pane

0xa176,	// (0x0004825f) list_highlight_pane_cp013

0xe1d3,	// (0x0004c2bc) ncim_list_query_list_pane_t1_copy1

0xe1ad,	// (0x0004c296) ncim_list_single_graphic_pane_g1

0xe1e1,	// (0x0004c2ca) ncim_query_button_pane_cp01

0xe1ed,	// (0x0004c2d6) ncim_query_entry_pane_ParamLimits

0xe1ed,	// (0x0004c2d6) ncim_query_entry_pane

0xe200,	// (0x0004c2e9) ncimui_query_pane_g1

0xe20c,	// (0x0004c2f5) ncimui_query_pane_t1_ParamLimits

0xe20c,	// (0x0004c2f5) ncimui_query_pane_t1

0xa93e,	// (0x00048a27) input_focus_pane_cp012

0xe225,	// (0x0004c30e) ncim_query_entry_pane_t1

0xa902,	// (0x000489eb) main_im_pane_ParamLimits

0xa93e,	// (0x00048a27) main_mobtv_pane_ParamLimits

0xa93e,	// (0x00048a27) main_mobtv_pane

0x8b56,	// (0x00046c3f) main_cset6_slider_pane_g18_ParamLimits

0x8b56,	// (0x00046c3f) main_cset6_slider_pane_g18

0x8b62,	// (0x00046c4b) main_cset6_slider_pane_g19_ParamLimits

0x8b62,	// (0x00046c4b) main_cset6_slider_pane_g19

0xd679,	// (0x0004b762) bg_main_mobtv_pane_ParamLimits

0xd679,	// (0x0004b762) bg_main_mobtv_pane

0x8e9b,	// (0x00046f84) main_mobtv_info_pane

0x8ea6,	// (0x00046f8f) main_mobtv_loading_pane_ParamLimits

0x8ea6,	// (0x00046f8f) main_mobtv_loading_pane

0xe237,	// (0x0004c320) main_mobtv_pg_channel_list_pane

0xe241,	// (0x0004c32a) main_mobtv_pg_hdr_pane

0x8eb3,	// (0x00046f9c) main_mobtv_programe_curr_pane_ParamLimits

0x8eb3,	// (0x00046f9c) main_mobtv_programe_curr_pane

0x8ec0,	// (0x00046fa9) main_mobtv_programe_next_pane_ParamLimits

0x8ec0,	// (0x00046fa9) main_mobtv_programe_next_pane

0xe24a,	// (0x0004c333) popup_mobtv_noti_window

0xccb1,	// (0x0004ad9a) main_tv_pg_hdr_pane_g1

0xe254,	// (0x0004c33d) main_tv_pg_hdr_pane_g2

0xe25c,	// (0x0004c345) main_tv_pg_hdr_pane_g3

0xe264,	// (0x0004c34d) main_tv_pg_hdr_pane_g4

0xe26c,	// (0x0004c355) main_tv_pg_hdr_pane_g5

0xe276,	// (0x0004c35f) main_tv_pg_hdr_pane_g6

0xe280,	// (0x0004c369) main_tv_pg_hdr_pane_g7

0xe28a,	// (0x0004c373) main_tv_pg_hdr_pane_g8

0xe294,	// (0x0004c37d) main_tv_pg_hdr_pane_g9

0xe29e,	// (0x0004c387) main_tv_pg_hdr_pane_g10

0xe2a8,	// (0x0004c391) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x0004dcea) main_tv_pg_hdr_pane_g

0xe2b2,	// (0x0004c39b) main_tv_pg_hdr_pane_t1

0xe2c0,	// (0x0004c3a9) main_tv_pg_hdr_pane_t2

0xe2ce,	// (0x0004c3b7) main_tv_pg_hdr_pane_t3

0xe2de,	// (0x0004c3c7) main_tv_pg_hdr_pane_t4

0xe2ee,	// (0x0004c3d7) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x0004dd01) main_tv_pg_hdr_pane_t

0xe2fe,	// (0x0004c3e7) single_mobtv_pg_channel_pane_ParamLimits

0xe2fe,	// (0x0004c3e7) single_mobtv_pg_channel_pane

0xe310,	// (0x0004c3f9) single_mobtv_pg_channel_table_pane

0xe319,	// (0x0004c402) single_mobtv_pg_channel_thumb_pane

0xe322,	// (0x0004c40b) single_tv_pg_channel_pane_g1

0xe32b,	// (0x0004c414) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x0004dd0c) single_tv_pg_channel_pane_g

0xcee1,	// (0x0004afca) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcee1,	// (0x0004afca) bg_single_mobtv_pg_channel_thumb_pane

0xe334,	// (0x0004c41d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe334,	// (0x0004c41d) single_mobtv_pg_channel_thumb_pane_g1

0xe342,	// (0x0004c42b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe342,	// (0x0004c42b) single_mobtv_pg_channel_thumb_pane_g2

0xe34e,	// (0x0004c437) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe34e,	// (0x0004c437) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x0004dd11) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x0004dd11) single_mobtv_pg_channel_thumb_pane_g

0xe35a,	// (0x0004c443) single_mobtv_pg_channel_thumb_pane_t1

0xe368,	// (0x0004c451) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x0004dd18) single_mobtv_pg_channel_thumb_pane_t

0xccb1,	// (0x0004ad9a) bg_single_mobtv_pg_channel_table_pane_g1

0xccb1,	// (0x0004ad9a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0004d7ca) bg_single_mobtv_pg_channel_table_pane_g

0xe376,	// (0x0004c45f) single_mobtv_pg_channel_table_pane_t1

0xe384,	// (0x0004c46d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x0004dd1d) single_mobtv_pg_channel_table_pane_t

0x8ed5,	// (0x00046fbe) main_mobtv_info_pane_g1_ParamLimits

0x8ed5,	// (0x00046fbe) main_mobtv_info_pane_g1

0x8ef1,	// (0x00046fda) main_mobtv_info_pane_t1_ParamLimits

0x8ef1,	// (0x00046fda) main_mobtv_info_pane_t1

0x8f69,	// (0x00047052) main_mobtv_info_pane_t2_ParamLimits

0x8f69,	// (0x00047052) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x0004dd27) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x0004dd27) main_mobtv_info_pane_t

0x8ffa,	// (0x000470e3) wait_bar_pane_cp05

0x900c,	// (0x000470f5) main_mobtv_loading_pane_g1_ParamLimits

0x900c,	// (0x000470f5) main_mobtv_loading_pane_g1

0x9018,	// (0x00047101) main_mobtv_loading_pane_g2_ParamLimits

0x9018,	// (0x00047101) main_mobtv_loading_pane_g2

0x9024,	// (0x0004710d) main_mobtv_loading_pane_g3_ParamLimits

0x9024,	// (0x0004710d) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x0004dd2e) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x0004dd2e) main_mobtv_loading_pane_g

0xe392,	// (0x0004c47b) main_mobtv_loading_pane_t1_ParamLimits

0xe392,	// (0x0004c47b) main_mobtv_loading_pane_t1

0xe3aa,	// (0x0004c493) main_mobtv_loading_pane_t2_ParamLimits

0xe3aa,	// (0x0004c493) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x0004dd35) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x0004dd35) main_mobtv_loading_pane_t

0x9032,	// (0x0004711b) wait_bar_pane_cp06_ParamLimits

0x9032,	// (0x0004711b) wait_bar_pane_cp06

0xe3ce,	// (0x0004c4b7) main_mobtv_programe_curr_pane_t1

0xe3dc,	// (0x0004c4c5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x0004dd3a) main_mobtv_programe_curr_pane_t

0xe3ea,	// (0x0004c4d3) main_mobtv_programe_next_pane_t1

0xe3f8,	// (0x0004c4e1) main_mobtv_programe_next_pane_t2

0xe406,	// (0x0004c4ef) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x0004dd3f) main_mobtv_programe_next_pane_t

0xa176,	// (0x0004825f) bg_popup_mobtv_noti_window_pane

0xe414,	// (0x0004c4fd) popup_mobtv_noti_window_g1

0xe41c,	// (0x0004c505) popup_mobtv_noti_window_t1

0xe42a,	// (0x0004c513) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x0004dd46) popup_mobtv_noti_window_t

0xccb1,	// (0x0004ad9a) bg_popup_mobtv_noti_window_pane_g1

0xa176,	// (0x0004825f) sc_clock_pane

0xa176,	// (0x0004825f) main_fs_bigclock_pane

0x8719,	// (0x00046802) blid2_tripm_pane_t4_ParamLimits

0x8719,	// (0x00046802) blid2_tripm_pane_t4

0x903e,	// (0x00047127) sc_clock_pane_g1_ParamLimits

0x903e,	// (0x00047127) sc_clock_pane_g1

0x904c,	// (0x00047135) sc_clock_pane_t1_ParamLimits

0x904c,	// (0x00047135) sc_clock_pane_t1

0x9061,	// (0x0004714a) sc_clock_pane_t2_ParamLimits

0x9061,	// (0x0004714a) sc_clock_pane_t2

0x9073,	// (0x0004715c) sc_clock_pane_t3_ParamLimits

0x9073,	// (0x0004715c) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x0004dd4b) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x0004dd4b) sc_clock_pane_t

0x98c4,	// (0x000479ad) main_fs_bigclock_indicator_pane_ParamLimits

0x98c4,	// (0x000479ad) main_fs_bigclock_indicator_pane

0x9100,	// (0x000471e9) main_fs_bigclock_pane_g1_ParamLimits

0x9100,	// (0x000471e9) main_fs_bigclock_pane_g1

0x98d0,	// (0x000479b9) main_fs_bigclock_pane_t1_ParamLimits

0x98d0,	// (0x000479b9) main_fs_bigclock_pane_t1

0x98e2,	// (0x000479cb) main_fs_bigclock_pane_t2_ParamLimits

0x98e2,	// (0x000479cb) main_fs_bigclock_pane_t2

0x98f6,	// (0x000479df) main_fs_bigclock_pane_t3_ParamLimits

0x98f6,	// (0x000479df) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x0004df55) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x0004df55) main_fs_bigclock_pane_t

0xec6b,	// (0x0004cd54) main_fs_bigclock_indicator_pane_g1

0xe0fa,	// (0x0004c1e3) ncim_query_content_pane_g2_ParamLimits

0xe0fa,	// (0x0004c1e3) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x0004dcd8) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x0004dcd8) ncim_query_content_pane_g

0x9085,	// (0x0004716e) sc_clock_pane_t4_ParamLimits

0x9085,	// (0x0004716e) sc_clock_pane_t4

0xa93e,	// (0x00048a27) main_radioblah_pane

0xd5e4,	// (0x0004b6cd) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5e4,	// (0x0004b6cd) cell_call4_button_pane_t1_copy1

0x8cf8,	// (0x00046de1) main_ncimui_pane_t1_ParamLimits

0x8cf8,	// (0x00046de1) main_ncimui_pane_t1

0x8d12,	// (0x00046dfb) main_ncimui_pane_t2_ParamLimits

0x8d12,	// (0x00046dfb) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x0004dcd1) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x0004dcd1) main_ncimui_pane_t

0xe576,	// (0x0004c65f) main_radioblah_anim_pane_ParamLimits

0xe576,	// (0x0004c65f) main_radioblah_anim_pane

0xe587,	// (0x0004c670) main_radioblah_info_pane_ParamLimits

0xe587,	// (0x0004c670) main_radioblah_info_pane

0xe59b,	// (0x0004c684) main_radioblah_pane_t1_ParamLimits

0xe59b,	// (0x0004c684) main_radioblah_pane_t1

0xe5b7,	// (0x0004c6a0) main_radioblah_pane_t2_ParamLimits

0xe5b7,	// (0x0004c6a0) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x0004dd6c) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x0004dd6c) main_radioblah_pane_t

0x9152,	// (0x0004723b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9152,	// (0x0004723b) main_radioblah_rocker_ctrl_pane

0xe5ff,	// (0x0004c6e8) main_radioblah_info_pane_t1_ParamLimits

0xe5ff,	// (0x0004c6e8) main_radioblah_info_pane_t1

0x919b,	// (0x00047284) main_radioblah_info_pane_t2_ParamLimits

0x919b,	// (0x00047284) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x0004dd75) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x0004dd75) main_radioblah_info_pane_t

0xccb1,	// (0x0004ad9a) main_radioblah_rocker_ctrl_pane_g1

0x924b,	// (0x00047334) main_radioblah_rocker_ctrl_pane_g2

0x9253,	// (0x0004733c) main_radioblah_rocker_ctrl_pane_g3

0x925b,	// (0x00047344) main_radioblah_rocker_ctrl_pane_g4

0x9263,	// (0x0004734c) main_radioblah_rocker_ctrl_pane_g5

0x926b,	// (0x00047354) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x0004dd7e) main_radioblah_rocker_ctrl_pane_g

0x8caa,	// (0x00046d93) main_cset_text2_pane_t1_copy1_ParamLimits

0x750d,	// (0x000455f6) cam4_image_uncrop_qvga_pane

0x7652,	// (0x0004573b) vid4_image_uncrop_qcif_pane

0x88ab,	// (0x00046994) cam6_image_uncrop_qvga_pane_ParamLimits

0x88ab,	// (0x00046994) cam6_image_uncrop_qvga_pane

0xddbb,	// (0x0004bea4) vid6_image_uncrop_qcif_pane_ParamLimits

0xddbb,	// (0x0004bea4) vid6_image_uncrop_qcif_pane

0xa176,	// (0x0004825f) bg_popup_preview_window_pane_cp03

0xe0ac,	// (0x0004c195) list_cset_text2_pane

0xe0b4,	// (0x0004c19d) main_cset6_text2_pane_g1

0xe0bc,	// (0x0004c1a5) main_cset6_text2_pane_t1

0x9273,	// (0x0004735c) list_cset_text2_pane_t1_ParamLimits

0x9273,	// (0x0004735c) list_cset_text2_pane_t1

0xa93e,	// (0x00048a27) main_radioblah_pane_ParamLimits

0x8fe6,	// (0x000470cf) main_mobtv_info_pane_t3_ParamLimits

0x8fe6,	// (0x000470cf) main_mobtv_info_pane_t3

0x9140,	// (0x00047229) main_radioblah_pane_g1

0x916b,	// (0x00047254) main_radioblah_info_pane_g1

0x91f0,	// (0x000472d9) main_radioblah_info_pane_t3_ParamLimits

0x91f0,	// (0x000472d9) main_radioblah_info_pane_t3

0x4344,	// (0x0004242d) highlight_cell_cale_month_pane_ParamLimits

0x4344,	// (0x0004242d) highlight_cell_cale_month_pane

0xa176,	// (0x0004825f) main_phob_fisheye_pane

0xcfbd,	// (0x0004b0a6) scroll_pane_cp0031_ParamLimits

0xcfbd,	// (0x0004b0a6) scroll_pane_cp0031

0xdecd,	// (0x0004bfb6) wait_bar_pane_cp08_ParamLimits

0x8a7e,	// (0x00046b67) cset_list_set_pane_copy1_ParamLimits

0xe639,	// (0x0004c722) highlight_cell_cale_month_pane_g1

0x928a,	// (0x00047373) highlight_cell_cale_month_pane_t1

0xdb85,	// (0x0004bc6e) list_gen_pane_cp01

0xd7b7,	// (0x0004b8a0) scroll_pane_01

0x13d8,	// (0x0003f4c1) list_single_double_fisheye_pane

0x13e1,	// (0x0003f4ca) list_double_fisheye_pane_g1_ParamLimits

0x13e1,	// (0x0003f4ca) list_double_fisheye_pane_g1

0x13ed,	// (0x0003f4d6) list_double_fisheye_pane_g2_ParamLimits

0x13ed,	// (0x0003f4d6) list_double_fisheye_pane_g2

0x1401,	// (0x0003f4ea) list_double_fisheye_pane_g3_ParamLimits

0x1401,	// (0x0003f4ea) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x0004dd8b) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x0004dd8b) list_double_fisheye_pane_g

0x142a,	// (0x0003f513) list_double_fisheye_pane_t1_ParamLimits

0x142a,	// (0x0003f513) list_double_fisheye_pane_t1

0x1445,	// (0x0003f52e) list_double_fisheye_pane_t2_ParamLimits

0x1445,	// (0x0003f52e) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x0004dd96) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x0004dd96) list_double_fisheye_pane_t

0xa176,	// (0x0004825f) main_call5_pane

0x90ab,	// (0x00047194) sc_swipe_pane_ParamLimits

0x90ab,	// (0x00047194) sc_swipe_pane

0x92a4,	// (0x0004738d) call5_image_pane_ParamLimits

0x92a4,	// (0x0004738d) call5_image_pane

0x92b6,	// (0x0004739f) call5_swipe_1_pane_ParamLimits

0x92b6,	// (0x0004739f) call5_swipe_1_pane

0x92c2,	// (0x000473ab) call5_swipe_2_pane_ParamLimits

0x92c2,	// (0x000473ab) call5_swipe_2_pane

0x92de,	// (0x000473c7) popup_call5_audio_first_window_ParamLimits

0x92de,	// (0x000473c7) popup_call5_audio_first_window

0xcee1,	// (0x0004afca) call5_swipe_1_pane_g1_ParamLimits

0xcee1,	// (0x0004afca) call5_swipe_1_pane_g1

0xe641,	// (0x0004c72a) call5_swipe_1_pane_g2_ParamLimits

0xe641,	// (0x0004c72a) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x0004dd9b) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x0004dd9b) call5_swipe_1_pane_g

0xe661,	// (0x0004c74a) call5_swipe_1_pane_t1_ParamLimits

0xe661,	// (0x0004c74a) call5_swipe_1_pane_t1

0xcee1,	// (0x0004afca) call5_swipe_2_pane_g1_ParamLimits

0xcee1,	// (0x0004afca) call5_swipe_2_pane_g1

0xe676,	// (0x0004c75f) call5_swipe_2_pane_g2_ParamLimits

0xe676,	// (0x0004c75f) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x0004dda0) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x0004dda0) call5_swipe_2_pane_g

0xe682,	// (0x0004c76b) call5_swipe_2_pane_t1_ParamLimits

0xe682,	// (0x0004c76b) call5_swipe_2_pane_t1

0xe697,	// (0x0004c780) sc_swipe_pane_g1_ParamLimits

0xe697,	// (0x0004c780) sc_swipe_pane_g1

0xe6a4,	// (0x0004c78d) sc_swipe_pane_g2_ParamLimits

0xe6a4,	// (0x0004c78d) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x0004dda5) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x0004dda5) sc_swipe_pane_g

0xe6b0,	// (0x0004c799) sc_swipe_pane_t1_ParamLimits

0xe6b0,	// (0x0004c799) sc_swipe_pane_t1

0xa176,	// (0x0004825f) main_cmail_launcher_pane

0x92ee,	// (0x000473d7) aid_size_cell_cmail_l_ParamLimits

0x92ee,	// (0x000473d7) aid_size_cell_cmail_l

0x92fe,	// (0x000473e7) grid_cmail_l_pane_ParamLimits

0x92fe,	// (0x000473e7) grid_cmail_l_pane

0x930e,	// (0x000473f7) cell_cmail_l_pane_ParamLimits

0x930e,	// (0x000473f7) cell_cmail_l_pane

0x9324,	// (0x0004740d) cell_cmail_l_pane_g1_ParamLimits

0x9324,	// (0x0004740d) cell_cmail_l_pane_g1

0x9330,	// (0x00047419) cell_cmail_l_pane_t1_ParamLimits

0x9330,	// (0x00047419) cell_cmail_l_pane_t1

0xe6c5,	// (0x0004c7ae) cell_cmail_l_pane_t2_ParamLimits

0xe6c5,	// (0x0004c7ae) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x0004ddaa) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x0004ddaa) cell_cmail_l_pane_t

0xa93e,	// (0x00048a27) grid_highlight_pane_cp018_ParamLimits

0xa93e,	// (0x00048a27) grid_highlight_pane_cp018

0x2076,	// (0x0004015f) main2_pane_ParamLimits

0x2076,	// (0x0004015f) main2_pane

0xa9db,	// (0x00048ac4) popup_sp_fs_action_menu_bg_pane_g1

0xa9e3,	// (0x00048acc) popup_sp_fs_action_menu_bg_pane_g2

0xa9eb,	// (0x00048ad4) popup_sp_fs_action_menu_bg_pane_g3

0xa9f3,	// (0x00048adc) popup_sp_fs_action_menu_bg_pane_g4

0xa9fb,	// (0x00048ae4) popup_sp_fs_action_menu_bg_pane_g5

0xaa03,	// (0x00048aec) popup_sp_fs_action_menu_bg_pane_g6

0xaa0b,	// (0x00048af4) popup_sp_fs_action_menu_bg_pane_g7

0xaa13,	// (0x00048afc) popup_sp_fs_action_menu_bg_pane_g8

0xaa1b,	// (0x00048b04) popup_sp_fs_action_menu_bg_pane_g9

0xaa23,	// (0x00048b0c) popup_sp_fs_action_menu_bg_pane_g10

0xaa23,	// (0x00048b0c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0004d276) popup_sp_fs_action_menu_bg_pane_g

0x0be1,	// (0x0003ecca) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0be1,	// (0x0003ecca) list_medium_line_x2_t3_g3_g1

0x0bed,	// (0x0003ecd6) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0bed,	// (0x0003ecd6) list_medium_line_x2_t3_g3_g2

0x0bf9,	// (0x0003ece2) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0bf9,	// (0x0003ece2) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0004d326) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0004d326) list_medium_line_x2_t3_g3_g

0x0c05,	// (0x0003ecee) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0c05,	// (0x0003ecee) list_medium_line_x2_t3_g3_t1

0x0c1a,	// (0x0003ed03) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0c1a,	// (0x0003ed03) list_medium_line_x2_t3_g3_t2

0x0c2e,	// (0x0003ed17) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0c2e,	// (0x0003ed17) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0004d32d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0004d32d) list_medium_line_x2_t3_g3_t

0x0be1,	// (0x0003ecca) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0be1,	// (0x0003ecca) list_medium_line_x2_t3_g2_g1

0x0bf9,	// (0x0003ece2) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0bf9,	// (0x0003ece2) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0004d334) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0004d334) list_medium_line_x2_t3_g2_g

0x0c43,	// (0x0003ed2c) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0c43,	// (0x0003ed2c) list_medium_line_x2_t3_g2_t1

0x0c59,	// (0x0003ed42) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0c59,	// (0x0003ed42) list_medium_line_x2_t3_g2_t2

0x0c6b,	// (0x0003ed54) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0c6b,	// (0x0003ed54) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0004d339) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0004d339) list_medium_line_x2_t3_g2_t

0x0be1,	// (0x0003ecca) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0be1,	// (0x0003ecca) list_medium_line_x2_t4_g4_g1

0x0c89,	// (0x0003ed72) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0c89,	// (0x0003ed72) list_medium_line_x2_t4_g4_g2

0x0bed,	// (0x0003ecd6) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0bed,	// (0x0003ecd6) list_medium_line_x2_t4_g4_g3

0x0c95,	// (0x0003ed7e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0c95,	// (0x0003ed7e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0004d340) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0004d340) list_medium_line_x2_t4_g4_g

0x0ca1,	// (0x0003ed8a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0ca1,	// (0x0003ed8a) list_medium_line_x2_t4_g4_t1

0x0cbb,	// (0x0003eda4) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0cbb,	// (0x0003eda4) list_medium_line_x2_t4_g4_t2

0x0cd1,	// (0x0003edba) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0cd1,	// (0x0003edba) list_medium_line_x2_t4_g4_t3

0x0ce6,	// (0x0003edcf) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0ce6,	// (0x0003edcf) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0004d349) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0004d349) list_medium_line_x2_t4_g4_t

0x0be1,	// (0x0003ecca) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0be1,	// (0x0003ecca) list_medium_line_x2_t2_g4_g1

0x0c89,	// (0x0003ed72) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0c89,	// (0x0003ed72) list_medium_line_x2_t2_g4_g2

0x0bed,	// (0x0003ecd6) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0bed,	// (0x0003ecd6) list_medium_line_x2_t2_g4_g3

0x0bf9,	// (0x0003ece2) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0bf9,	// (0x0003ece2) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0004d3b0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0004d3b0) list_medium_line_x2_t2_g4_g

0x0cf8,	// (0x0003ede1) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0cf8,	// (0x0003ede1) list_medium_line_x2_t2_g4_t1

0x0c2e,	// (0x0003ed17) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0c2e,	// (0x0003ed17) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0004d3b9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0004d3b9) list_medium_line_x2_t2_g4_t

0x0be1,	// (0x0003ecca) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0be1,	// (0x0003ecca) list_medium_line_x2_t2_g3_g1

0x0bed,	// (0x0003ecd6) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0bed,	// (0x0003ecd6) list_medium_line_x2_t2_g3_g2

0x0bf9,	// (0x0003ece2) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0bf9,	// (0x0003ece2) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0004d326) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0004d326) list_medium_line_x2_t2_g3_g

0x0d0d,	// (0x0003edf6) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0d0d,	// (0x0003edf6) list_medium_line_x2_t2_g3_t1

0x0c2e,	// (0x0003ed17) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0c2e,	// (0x0003ed17) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0004d3be) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0004d3be) list_medium_line_x2_t2_g3_t

0x44eb,	// (0x000425d4) main_sp_fs_list_pane_ParamLimits

0x44eb,	// (0x000425d4) main_sp_fs_list_pane

0x44f7,	// (0x000425e0) sp_fs_scroll_pane_ParamLimits

0x44f7,	// (0x000425e0) sp_fs_scroll_pane

0x0d22,	// (0x0003ee0b) list_medium_line_x2_t3_t1

0x0d32,	// (0x0003ee1b) list_medium_line_x2_t3_t2

0x0d40,	// (0x0003ee29) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0004d409) list_medium_line_x2_t3_t

0x0d4e,	// (0x0003ee37) list_medium_line_x3_t4_t1

0x0d5e,	// (0x0003ee47) list_medium_line_x3_t4_t2

0x0d6c,	// (0x0003ee55) list_medium_line_x3_t4_t3

0x0d40,	// (0x0003ee29) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0004d410) list_medium_line_x3_t4_t

0x0d7a,	// (0x0003ee63) list_medium_line_x4_t5_t1

0x0d8a,	// (0x0003ee73) list_medium_line_x4_t5_t2

0x0d6c,	// (0x0003ee55) list_medium_line_x4_t5_t3

0x0d98,	// (0x0003ee81) list_medium_line_x4_t5_t4

0x0d40,	// (0x0003ee29) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0004d419) list_medium_line_x4_t5_t

0x0be1,	// (0x0003ecca) list_medium_line_t4_g4_g1_ParamLimits

0x0be1,	// (0x0003ecca) list_medium_line_t4_g4_g1

0x0da6,	// (0x0003ee8f) list_medium_line_t4_g4_g2_ParamLimits

0x0da6,	// (0x0003ee8f) list_medium_line_t4_g4_g2

0x0db2,	// (0x0003ee9b) list_medium_line_t4_g4_g3_ParamLimits

0x0db2,	// (0x0003ee9b) list_medium_line_t4_g4_g3

0x0bf9,	// (0x0003ece2) list_medium_line_t4_g4_g4_ParamLimits

0x0bf9,	// (0x0003ece2) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0004d424) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0004d424) list_medium_line_t4_g4_g

0x0dbe,	// (0x0003eea7) list_medium_line_t4_g4_t1_ParamLimits

0x0dbe,	// (0x0003eea7) list_medium_line_t4_g4_t1

0x0dd3,	// (0x0003eebc) list_medium_line_t4_g4_t2_ParamLimits

0x0dd3,	// (0x0003eebc) list_medium_line_t4_g4_t2

0x0de9,	// (0x0003eed2) list_medium_line_t4_g4_t3_ParamLimits

0x0de9,	// (0x0003eed2) list_medium_line_t4_g4_t3

0x0c2e,	// (0x0003ed17) list_medium_line_t4_g4_t4_ParamLimits

0x0c2e,	// (0x0003ed17) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0004d42d) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0004d42d) list_medium_line_t4_g4_t

0x4616,	// (0x000426ff) chi_dic_find_pane_g1

0x563b,	// (0x00043724) main_tport_pane

0x1030,	// (0x0003f119) list_medium_line_plain_t1

0x103e,	// (0x0003f127) list_medium_line_t2_g2_g1_ParamLimits

0x103e,	// (0x0003f127) list_medium_line_t2_g2_g1

0x104a,	// (0x0003f133) list_medium_line_t2_g2_g2_ParamLimits

0x104a,	// (0x0003f133) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0004dae9) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0004dae9) list_medium_line_t2_g2_g

0x1056,	// (0x0003f13f) list_medium_line_t2_g2_t1_ParamLimits

0x1056,	// (0x0003f13f) list_medium_line_t2_g2_t1

0x106d,	// (0x0003f156) list_medium_line_t2_g2_t2_ParamLimits

0x106d,	// (0x0003f156) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0004daee) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0004daee) list_medium_line_t2_g2_t

0x128c,	// (0x0003f375) aid_sp_fs_list_icon_a_sm

0x1294,	// (0x0003f37d) aid_sp_fs_list_icon_d

0x129c,	// (0x0003f385) aid_sp_fs_text_primary

0x12a5,	// (0x0003f38e) aid_sp_fs_text_secondary

0x12ae,	// (0x0003f397) list_medium_line

0x12ae,	// (0x0003f397) list_medium_line_g2

0x12ae,	// (0x0003f397) list_medium_line_g3

0x12ae,	// (0x0003f397) list_medium_line_plain

0x12ae,	// (0x0003f397) list_medium_line_plain_t2

0x12ae,	// (0x0003f397) list_medium_line_plain_t3

0x12ae,	// (0x0003f397) list_medium_line_right_icon

0x12ae,	// (0x0003f397) list_medium_line_right_iconx2

0x12ae,	// (0x0003f397) list_medium_line_t2

0x12ae,	// (0x0003f397) list_medium_line_t2_g2

0x12ae,	// (0x0003f397) list_medium_line_t2_g3

0x12ae,	// (0x0003f397) list_medium_line_t2_right_icon

0x12ae,	// (0x0003f397) list_medium_line_t2_right_iconx2

0x12ae,	// (0x0003f397) list_medium_line_t3

0x12ae,	// (0x0003f397) list_medium_line_t3_g2

0x12ae,	// (0x0003f397) list_medium_line_t3_g3

0x12ae,	// (0x0003f397) list_medium_line_t3_right_iconx2

0x12b7,	// (0x0003f3a0) list_medium_line_t4_g4

0x858e,	// (0x00046677) list_medium_line_x2

0x858e,	// (0x00046677) list_medium_line_x2_t2_g2

0x858e,	// (0x00046677) list_medium_line_x2_t2_g3

0x858e,	// (0x00046677) list_medium_line_x2_t2_g4

0x858e,	// (0x00046677) list_medium_line_x2_t3

0x858e,	// (0x00046677) list_medium_line_x2_t3_g2

0x858e,	// (0x00046677) list_medium_line_x2_t3_g3

0x858e,	// (0x00046677) list_medium_line_x2_t3_g4

0x858e,	// (0x00046677) list_medium_line_x2_t4_g2

0x858e,	// (0x00046677) list_medium_line_x2_t4_g4

0x12c0,	// (0x0003f3a9) list_medium_line_x3

0x12c0,	// (0x0003f3a9) list_medium_line_x3_t4

0x12c0,	// (0x0003f3a9) list_medium_line_x3_t4_g4

0x12b7,	// (0x0003f3a0) list_medium_line_x4_t4

0x12b7,	// (0x0003f3a0) list_medium_line_x4_t4_g7

0x12b7,	// (0x0003f3a0) list_medium_line_x4_t5

0x12c9,	// (0x0003f3b2) list_single_fs_dyc_pane_ParamLimits

0x12c9,	// (0x0003f3b2) list_single_fs_dyc_pane

0x0be1,	// (0x0003ecca) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0be1,	// (0x0003ecca) list_medium_line_x4_t4_g7_g1

0x1309,	// (0x0003f3f2) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1309,	// (0x0003f3f2) list_medium_line_x4_t4_g7_g2

0x1315,	// (0x0003f3fe) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1315,	// (0x0003f3fe) list_medium_line_x4_t4_g7_g3

0x1324,	// (0x0003f40d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1324,	// (0x0003f40d) list_medium_line_x4_t4_g7_g4

0x1330,	// (0x0003f419) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1330,	// (0x0003f419) list_medium_line_x4_t4_g7_g5

0x133f,	// (0x0003f428) list_medium_line_x4_t4_g7_g6_ParamLimits

0x133f,	// (0x0003f428) list_medium_line_x4_t4_g7_g6

0x134e,	// (0x0003f437) list_medium_line_x4_t4_g7_g7_ParamLimits

0x134e,	// (0x0003f437) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x0004dcb2) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x0004dcb2) list_medium_line_x4_t4_g7_g

0x135a,	// (0x0003f443) list_medium_line_x4_t4_g7_t1_ParamLimits

0x135a,	// (0x0003f443) list_medium_line_x4_t4_g7_t1

0x136f,	// (0x0003f458) list_medium_line_x4_t4_g7_t2_ParamLimits

0x136f,	// (0x0003f458) list_medium_line_x4_t4_g7_t2

0x1384,	// (0x0003f46d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1384,	// (0x0003f46d) list_medium_line_x4_t4_g7_t3

0x1399,	// (0x0003f482) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1399,	// (0x0003f482) list_medium_line_x4_t4_g7_t4

0x13ab,	// (0x0003f494) list_medium_line_x4_t4_g7_t5_ParamLimits

0x13ab,	// (0x0003f494) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x0004dcc1) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x0004dcc1) list_medium_line_x4_t4_g7_t

0x13bd,	// (0x0003f4a6) list_single_dyc_row_pane_ParamLimits

0x13bd,	// (0x0003f4a6) list_single_dyc_row_pane

0x9298,	// (0x00047381) call5_gesture_pane_ParamLimits

0x9298,	// (0x00047381) call5_gesture_pane

0x92ce,	// (0x000473b7) call5_windows_pane_ParamLimits

0x92ce,	// (0x000473b7) call5_windows_pane

0x9346,	// (0x0004742f) call5_swipe_1_pane_cp_ParamLimits

0x9346,	// (0x0004742f) call5_swipe_1_pane_cp

0x9352,	// (0x0004743b) call5_swipe_2_pane_cp_ParamLimits

0x9352,	// (0x0004743b) call5_swipe_2_pane_cp

0xb434,	// (0x0004951d) call5_image_pane_cp

0x935e,	// (0x00047447) popup_call5_audio_first_window_cp_ParamLimits

0x935e,	// (0x00047447) popup_call5_audio_first_window_cp

0xe697,	// (0x0004c780) call5_swipe_1_pane_g1_cp_ParamLimits

0xe697,	// (0x0004c780) call5_swipe_1_pane_g1_cp

0xe6d7,	// (0x0004c7c0) call5_swipe_1_pane_g2_cp

0xe6b0,	// (0x0004c799) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6b0,	// (0x0004c799) call5_swipe_1_pane_t1_cp

0xe697,	// (0x0004c780) call5_swipe_2_pane_g1_cp_ParamLimits

0xe697,	// (0x0004c780) call5_swipe_2_pane_g1_cp

0xe6df,	// (0x0004c7c8) call5_swipe_2_pane_g2_cp

0xe6e7,	// (0x0004c7d0) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6e7,	// (0x0004c7d0) call5_swipe_2_pane_t1_cp

0xa93e,	// (0x00048a27) main_sp_fs_email_pane

0xe6fc,	// (0x0004c7e5) main_sp_fs_listscroll_pane_te

0x1467,	// (0x0003f550) popup_sp_fs_action_menu_pane_ParamLimits

0x1467,	// (0x0003f550) popup_sp_fs_action_menu_pane

0xccb1,	// (0x0004ad9a) bg_sp_fs_ctrlbar_pane_g1

0xd23e,	// (0x0004b327) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd250,	// (0x0004b339) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd247,	// (0x0004b330) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xccb1,	// (0x0004ad9a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x0004ddaf) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca90,	// (0x0004ab79) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca90,	// (0x0004ab79) bg_sp_fs_ctrlbar_ddmenu_pane

0xe705,	// (0x0004c7ee) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe705,	// (0x0004c7ee) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe711,	// (0x0004c7fa) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe711,	// (0x0004c7fa) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x0004ddb8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x0004ddb8) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe71d,	// (0x0004c806) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe71d,	// (0x0004c806) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x14ad,	// (0x0003f596) list_medium_line_t2_right_icon_g1

0x14b5,	// (0x0003f59e) list_medium_line_t2_right_icon_t1

0x14c5,	// (0x0003f5ae) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x0004ddbd) list_medium_line_t2_right_icon_t

0xc860,	// (0x0004a949) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc860,	// (0x0004a949) bg_sp_fs_ctrlbar_pane

0x93c5,	// (0x000474ae) main_sp_fs_ctrlbar_button_pane_cp01

0x93cd,	// (0x000474b6) main_sp_fs_ctrlbar_ddmenu_pane

0xd8b7,	// (0x0004b9a0) main_sp_fs_ctrlbar_pane_g1

0xe76f,	// (0x0004c858) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x0004ddc2) main_sp_fs_ctrlbar_pane_g

0xe77b,	// (0x0004c864) main_sp_fs_ctrlbar_pane_t1

0x14d3,	// (0x0003f5bc) main_sp_fs_ctrlbar_pane

0x14ed,	// (0x0003f5d6) main_sp_fs_listscroll_pane_te_cp01

0x14fe,	// (0x0003f5e7) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x14fe,	// (0x0003f5e7) popup_sp_fs_action_menu_pane_cp01

0xa93e,	// (0x00048a27) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa93e,	// (0x00048a27) bg_sp_fs_highlight_list_pane_cp01

0x1528,	// (0x0003f611) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1528,	// (0x0003f611) sp_fs_action_menu_list_gene_pane_g1

0xe7ab,	// (0x0004c894) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7ab,	// (0x0004c894) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x0004ddcc) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x0004ddcc) sp_fs_action_menu_list_gene_pane_g

0x1537,	// (0x0003f620) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1537,	// (0x0003f620) sp_fs_action_menu_list_gene_pane_t1

0x154f,	// (0x0003f638) sp_fs_action_menu_list_gene_pane_ParamLimits

0x154f,	// (0x0003f638) sp_fs_action_menu_list_gene_pane

0xe7b8,	// (0x0004c8a1) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7b8,	// (0x0004c8a1) popup_sp_fs_action_menu_bg_pane

0x1572,	// (0x0003f65b) sp_fs_action_menu_list_pane_ParamLimits

0x1572,	// (0x0003f65b) sp_fs_action_menu_list_pane

0xe7c6,	// (0x0004c8af) sp_fs_scroll_pane_cp01_ParamLimits

0xe7c6,	// (0x0004c8af) sp_fs_scroll_pane_cp01

0x1596,	// (0x0003f67f) list_medium_line_plain_t2_t1

0x15a6,	// (0x0003f68f) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x0004ddd1) list_medium_line_plain_t2_t

0x15b4,	// (0x0003f69d) list_medium_line_plain_t3_t1

0x15c4,	// (0x0003f6ad) list_medium_line_plain_t3_t2

0x15d2,	// (0x0003f6bb) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x0004ddd6) list_medium_line_plain_t3_t

0x0be1,	// (0x0003ecca) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0be1,	// (0x0003ecca) list_medium_line_x2_t2_g2_g1

0x0bf9,	// (0x0003ece2) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0bf9,	// (0x0003ece2) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0004d334) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0004d334) list_medium_line_x2_t2_g2_g

0x0dbe,	// (0x0003eea7) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0dbe,	// (0x0003eea7) list_medium_line_x2_t2_g2_t1

0x0c2e,	// (0x0003ed17) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0c2e,	// (0x0003ed17) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x0004dddd) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x0004dddd) list_medium_line_x2_t2_g2_t

0x0be1,	// (0x0003ecca) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0be1,	// (0x0003ecca) list_medium_line_x2_t4_g2_g1

0x15e0,	// (0x0003f6c9) list_medium_line_x2_t4_g2_g2_ParamLimits

0x15e0,	// (0x0003f6c9) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x0004dde2) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x0004dde2) list_medium_line_x2_t4_g2_g

0x15f2,	// (0x0003f6db) list_medium_line_x2_t4_g2_t1_ParamLimits

0x15f2,	// (0x0003f6db) list_medium_line_x2_t4_g2_t1

0x160c,	// (0x0003f6f5) list_medium_line_x2_t4_g2_t2_ParamLimits

0x160c,	// (0x0003f6f5) list_medium_line_x2_t4_g2_t2

0x1622,	// (0x0003f70b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1622,	// (0x0003f70b) list_medium_line_x2_t4_g2_t3

0x0c2e,	// (0x0003ed17) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0c2e,	// (0x0003ed17) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x0004dde7) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x0004dde7) list_medium_line_x2_t4_g2_t

0x1637,	// (0x0003f720) list_medium_line_t3_right_iconx2_g1

0x14ad,	// (0x0003f596) list_medium_line_t3_right_iconx2_g2

0x163f,	// (0x0003f728) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x0004ddf0) list_medium_line_t3_right_iconx2_g

0x1649,	// (0x0003f732) list_medium_line_t3_right_iconx2_t1

0x1659,	// (0x0003f742) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x0004ddf7) list_medium_line_t3_right_iconx2_t

0x0be1,	// (0x0003ecca) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0be1,	// (0x0003ecca) list_medium_line_x3_t4_g4_g1

0x0bed,	// (0x0003ecd6) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0bed,	// (0x0003ecd6) list_medium_line_x3_t4_g4_g2

0x0da6,	// (0x0003ee8f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0da6,	// (0x0003ee8f) list_medium_line_x3_t4_g4_g3

0x1667,	// (0x0003f750) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1667,	// (0x0003f750) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x0004ddfc) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x0004ddfc) list_medium_line_x3_t4_g4_g

0x1673,	// (0x0003f75c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1673,	// (0x0003f75c) list_medium_line_x3_t4_g4_t1

0x168a,	// (0x0003f773) list_medium_line_x3_t4_g4_t2_ParamLimits

0x168a,	// (0x0003f773) list_medium_line_x3_t4_g4_t2

0x169f,	// (0x0003f788) list_medium_line_x3_t4_g4_t3_ParamLimits

0x169f,	// (0x0003f788) list_medium_line_x3_t4_g4_t3

0x16b4,	// (0x0003f79d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x16b4,	// (0x0003f79d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x0004de05) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x0004de05) list_medium_line_x3_t4_g4_t

0x16d1,	// (0x0003f7ba) list_single_dyc_row_text_pane_t1_ParamLimits

0x16d1,	// (0x0003f7ba) list_single_dyc_row_text_pane_t1

0x170e,	// (0x0003f7f7) list_single_dyc_row_text_pane_t2_ParamLimits

0x170e,	// (0x0003f7f7) list_single_dyc_row_text_pane_t2

0x1784,	// (0x0003f86d) list_single_dyc_row_text_pane_t3_ParamLimits

0x1784,	// (0x0003f86d) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x0004de0e) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x0004de0e) list_single_dyc_row_text_pane_t

0x185b,	// (0x0003f944) list_single_dyc_row_pane_g1_ParamLimits

0x185b,	// (0x0003f944) list_single_dyc_row_pane_g1

0x1867,	// (0x0003f950) list_single_dyc_row_pane_g2_ParamLimits

0x1867,	// (0x0003f950) list_single_dyc_row_pane_g2

0x1873,	// (0x0003f95c) list_single_dyc_row_pane_g3_ParamLimits

0x1873,	// (0x0003f95c) list_single_dyc_row_pane_g3

0x187f,	// (0x0003f968) list_single_dyc_row_pane_g4_ParamLimits

0x187f,	// (0x0003f968) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x0004de1b) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x0004de1b) list_single_dyc_row_pane_g

0x188b,	// (0x0003f974) list_single_dyc_row_text_pane_ParamLimits

0x188b,	// (0x0003f974) list_single_dyc_row_text_pane

0xa176,	// (0x0004825f) bg_sp_fs_scroll_pane

0xe7ec,	// (0x0004c8d5) thumb_sp_fs_scroll_pane

0x103e,	// (0x0003f127) list_medium_line_g1_ParamLimits

0x103e,	// (0x0003f127) list_medium_line_g1

0x18aa,	// (0x0003f993) list_medium_line_t1_ParamLimits

0x18aa,	// (0x0003f993) list_medium_line_t1

0x0be1,	// (0x0003ecca) list_medium_line_x2_g1_ParamLimits

0x0be1,	// (0x0003ecca) list_medium_line_x2_g1

0x0bed,	// (0x0003ecd6) list_medium_line_x2_g2_ParamLimits

0x0bed,	// (0x0003ecd6) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x0004de24) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x0004de24) list_medium_line_x2_g

0x18bf,	// (0x0003f9a8) list_medium_line_x2_t1_ParamLimits

0x18bf,	// (0x0003f9a8) list_medium_line_x2_t1

0x0be1,	// (0x0003ecca) list_medium_line_x3_g1_ParamLimits

0x0be1,	// (0x0003ecca) list_medium_line_x3_g1

0x0bed,	// (0x0003ecd6) list_medium_line_x3_g2_ParamLimits

0x0bed,	// (0x0003ecd6) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x0004de24) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x0004de24) list_medium_line_x3_g

0x18bf,	// (0x0003f9a8) list_medium_line_x3_t1_ParamLimits

0x18bf,	// (0x0003f9a8) list_medium_line_x3_t1

0xe7f5,	// (0x0004c8de) thumb_sp_fs_scroll_pane_g1

0xe7fe,	// (0x0004c8e7) thumb_sp_fs_scroll_pane_g2

0xe807,	// (0x0004c8f0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0004de29) thumb_sp_fs_scroll_pane_g

0xe7f5,	// (0x0004c8de) bg_sp_fs_scroll_pane_g1

0xe7fe,	// (0x0004c8e7) bg_sp_fs_scroll_pane_g2

0xe807,	// (0x0004c8f0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0004de29) bg_sp_fs_scroll_pane_g

0x0be1,	// (0x0003ecca) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0be1,	// (0x0003ecca) list_medium_line_x2_t3_g4_g1

0x0c89,	// (0x0003ed72) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0c89,	// (0x0003ed72) list_medium_line_x2_t3_g4_g2

0x0bed,	// (0x0003ecd6) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0bed,	// (0x0003ecd6) list_medium_line_x2_t3_g4_g3

0x0bf9,	// (0x0003ece2) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0bf9,	// (0x0003ece2) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0004d3b0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0004d3b0) list_medium_line_x2_t3_g4_g

0x18d5,	// (0x0003f9be) list_medium_line_x2_t3_g4_t1_ParamLimits

0x18d5,	// (0x0003f9be) list_medium_line_x2_t3_g4_t1

0x18eb,	// (0x0003f9d4) list_medium_line_x2_t3_g4_t2_ParamLimits

0x18eb,	// (0x0003f9d4) list_medium_line_x2_t3_g4_t2

0x0c2e,	// (0x0003ed17) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0c2e,	// (0x0003ed17) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x0004de30) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x0004de30) list_medium_line_x2_t3_g4_t

0x103e,	// (0x0003f127) list_medium_line_g2_g1_ParamLimits

0x103e,	// (0x0003f127) list_medium_line_g2_g1

0x104a,	// (0x0003f133) list_medium_line_g2_g2_ParamLimits

0x104a,	// (0x0003f133) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0004dae9) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0004dae9) list_medium_line_g2_g

0x1904,	// (0x0003f9ed) list_medium_line_g2_t1_ParamLimits

0x1904,	// (0x0003f9ed) list_medium_line_g2_t1

0x103e,	// (0x0003f127) list_medium_line_t3_g2_g1_ParamLimits

0x103e,	// (0x0003f127) list_medium_line_t3_g2_g1

0x104a,	// (0x0003f133) list_medium_line_t3_g2_g2_ParamLimits

0x104a,	// (0x0003f133) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0004dae9) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0004dae9) list_medium_line_t3_g2_g

0x1919,	// (0x0003fa02) list_medium_line_t3_g2_t1_ParamLimits

0x1919,	// (0x0003fa02) list_medium_line_t3_g2_t1

0x1933,	// (0x0003fa1c) list_medium_line_t3_g2_t2_ParamLimits

0x1933,	// (0x0003fa1c) list_medium_line_t3_g2_t2

0x1949,	// (0x0003fa32) list_medium_line_t3_g2_t3_ParamLimits

0x1949,	// (0x0003fa32) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0004de37) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0004de37) list_medium_line_t3_g2_t

0x14ad,	// (0x0003f596) list_medium_line_right_icon_g1

0x1960,	// (0x0003fa49) list_medium_line_right_icon_t1

0x103e,	// (0x0003f127) list_medium_line_t2_g1_ParamLimits

0x103e,	// (0x0003f127) list_medium_line_t2_g1

0x196e,	// (0x0003fa57) list_medium_line_t2_t1_ParamLimits

0x196e,	// (0x0003fa57) list_medium_line_t2_t1

0x1988,	// (0x0003fa71) list_medium_line_t2_t2_ParamLimits

0x1988,	// (0x0003fa71) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0004de3e) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0004de3e) list_medium_line_t2_t

0x103e,	// (0x0003f127) list_medium_line_t3_g1_ParamLimits

0x103e,	// (0x0003f127) list_medium_line_t3_g1

0x199d,	// (0x0003fa86) list_medium_line_t3_t1_ParamLimits

0x199d,	// (0x0003fa86) list_medium_line_t3_t1

0x19b4,	// (0x0003fa9d) list_medium_line_t3_t2_ParamLimits

0x19b4,	// (0x0003fa9d) list_medium_line_t3_t2

0x19c9,	// (0x0003fab2) list_medium_line_t3_t3_ParamLimits

0x19c9,	// (0x0003fab2) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0004de43) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0004de43) list_medium_line_t3_t

0x103e,	// (0x0003f127) list_medium_line_g3_g1_ParamLimits

0x103e,	// (0x0003f127) list_medium_line_g3_g1

0x19db,	// (0x0003fac4) list_medium_line_g3_g2_ParamLimits

0x19db,	// (0x0003fac4) list_medium_line_g3_g2

0x104a,	// (0x0003f133) list_medium_line_g3_g3_ParamLimits

0x104a,	// (0x0003f133) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0004de4a) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0004de4a) list_medium_line_g3_g

0x19e7,	// (0x0003fad0) list_medium_line_g3_t1_ParamLimits

0x19e7,	// (0x0003fad0) list_medium_line_g3_t1

0x103e,	// (0x0003f127) list_medium_line_t2_g3_g1_ParamLimits

0x103e,	// (0x0003f127) list_medium_line_t2_g3_g1

0x19db,	// (0x0003fac4) list_medium_line_t2_g3_g2_ParamLimits

0x19db,	// (0x0003fac4) list_medium_line_t2_g3_g2

0x104a,	// (0x0003f133) list_medium_line_t2_g3_g3_ParamLimits

0x104a,	// (0x0003f133) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0004de4a) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0004de4a) list_medium_line_t2_g3_g

0x19fc,	// (0x0003fae5) list_medium_line_t2_g3_t1_ParamLimits

0x19fc,	// (0x0003fae5) list_medium_line_t2_g3_t1

0x1a13,	// (0x0003fafc) list_medium_line_t2_g3_t2_ParamLimits

0x1a13,	// (0x0003fafc) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0004de51) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0004de51) list_medium_line_t2_g3_t

0x103e,	// (0x0003f127) list_medium_line_t3_g3_g1_ParamLimits

0x103e,	// (0x0003f127) list_medium_line_t3_g3_g1

0x19db,	// (0x0003fac4) list_medium_line_t3_g3_g2_ParamLimits

0x19db,	// (0x0003fac4) list_medium_line_t3_g3_g2

0x104a,	// (0x0003f133) list_medium_line_t3_g3_g3_ParamLimits

0x104a,	// (0x0003f133) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0004de4a) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0004de4a) list_medium_line_t3_g3_g

0x1a28,	// (0x0003fb11) list_medium_line_t3_g3_t1_ParamLimits

0x1a28,	// (0x0003fb11) list_medium_line_t3_g3_t1

0x1a3c,	// (0x0003fb25) list_medium_line_t3_g3_t2_ParamLimits

0x1a3c,	// (0x0003fb25) list_medium_line_t3_g3_t2

0x1a4e,	// (0x0003fb37) list_medium_line_t3_g3_t3_ParamLimits

0x1a4e,	// (0x0003fb37) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0004de56) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0004de56) list_medium_line_t3_g3_t

0x1637,	// (0x0003f720) list_medium_line_right_iconx2_g1

0x14ad,	// (0x0003f596) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0004de5d) list_medium_line_right_iconx2_g

0x1a62,	// (0x0003fb4b) list_medium_line_right_iconx2_t1

0x1637,	// (0x0003f720) list_medium_line_t2_right_iconx2_g1

0x14ad,	// (0x0003f596) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0004de5d) list_medium_line_t2_right_iconx2_g

0x1a70,	// (0x0003fb59) list_medium_line_t2_right_iconx2_t1

0x1a80,	// (0x0003fb69) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0004de62) list_medium_line_t2_right_iconx2_t

0x1a8e,	// (0x0003fb77) list_medium_line_x4_t4_t1

0x1a9c,	// (0x0003fb85) list_medium_line_x4_t4_t2

0x1aac,	// (0x0003fb95) list_medium_line_x4_t4_t3

0x1abc,	// (0x0003fba5) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0004de67) list_medium_line_x4_t4_t

0x9401,	// (0x000474ea) tport_appsw_pane_ParamLimits

0x9401,	// (0x000474ea) tport_appsw_pane

0x940f,	// (0x000474f8) tport_contact_pane_ParamLimits

0x940f,	// (0x000474f8) tport_contact_pane

0x941f,	// (0x00047508) tport_listscroll_pane_ParamLimits

0x941f,	// (0x00047508) tport_listscroll_pane

0x942f,	// (0x00047518) cell_tport_appsw_pane_ParamLimits

0x942f,	// (0x00047518) cell_tport_appsw_pane

0xcf46,	// (0x0004b02f) tport_appsw_pane_g1_ParamLimits

0xcf46,	// (0x0004b02f) tport_appsw_pane_g1

0xe810,	// (0x0004c8f9) tport_contact_pane_g1

0xe819,	// (0x0004c902) tport_contact_pane_t1

0xe827,	// (0x0004c910) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0004de70) tport_contact_pane_t

0xe835,	// (0x0004c91e) list_tport_pane

0xe83e,	// (0x0004c927) scroll_pane_cp_030

0x9464,	// (0x0004754d) cell_tport_appsw_pane_g1

0x9474,	// (0x0004755d) cell_tport_appsw_pane_t1

0x9482,	// (0x0004756b) grid_highlight_pane_cp019

0x948a,	// (0x00047573) list_tport_double_graphic_pane_ParamLimits

0x948a,	// (0x00047573) list_tport_double_graphic_pane

0xa93e,	// (0x00048a27) list_highlight_pane_cp023_ParamLimits

0xa93e,	// (0x00048a27) list_highlight_pane_cp023

0x9497,	// (0x00047580) list_tport_double_graphic_pane_g1_ParamLimits

0x9497,	// (0x00047580) list_tport_double_graphic_pane_g1

0x94a4,	// (0x0004758d) list_tport_double_graphic_pane_t1_ParamLimits

0x94a4,	// (0x0004758d) list_tport_double_graphic_pane_t1

0x94b9,	// (0x000475a2) list_tport_double_graphic_pane_t2_ParamLimits

0x94b9,	// (0x000475a2) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0004de7c) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0004de7c) list_tport_double_graphic_pane_t

0xa176,	// (0x0004825f) main_cale_note_pane

0x78b9,	// (0x000459a2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x78b9,	// (0x000459a2) cell_vitu2_function_top_wide_pane_cp01

0x8ffa,	// (0x000470e3) wait_bar_pane_cp05_ParamLimits

0xa93e,	// (0x00048a27) listscroll_cmail_pane

0xe84f,	// (0x0004c938) list_cmail_pane

0x94d5,	// (0x000475be) list_cmail_body_pane

0x94ee,	// (0x000475d7) list_single_cmail_header_caption_pane

0x950f,	// (0x000475f8) list_single_cmail_header_detail_pane_ParamLimits

0x950f,	// (0x000475f8) list_single_cmail_header_detail_pane

0x9540,	// (0x00047629) list_single_cmail_header_caption_pane_t1

0x1acc,	// (0x0003fbb5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1acc,	// (0x0003fbb5) list_single_cmail_header_detail_pane_g1

0x1ae4,	// (0x0003fbcd) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1ae4,	// (0x0003fbcd) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0004de81) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0004de81) list_single_cmail_header_detail_pane_g

0x1af0,	// (0x0003fbd9) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1af0,	// (0x0003fbd9) list_single_cmail_header_detail_pane_t1

0x1b5c,	// (0x0003fc45) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1b5c,	// (0x0003fc45) list_single_cmail_header_editor_pane_bg

0xe32b,	// (0x0004c414) list_cmail_body_pane_g1

0xe873,	// (0x0004c95c) list_cmail_body_pane_t1

0xd699,	// (0x0004b782) list_single_cmail_header_editor_pane_bg_g1

0xad59,	// (0x00048e42) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6a9,	// (0x0004b792) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6a1,	// (0x0004b78a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd90a,	// (0x0004b9f3) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6c9,	// (0x0004b7b2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6b9,	// (0x0004b7a2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6c1,	// (0x0004b7aa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad39,	// (0x00048e22) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x955b,	// (0x00047644) calenote_gesture_pane_ParamLimits

0x955b,	// (0x00047644) calenote_gesture_pane

0x9575,	// (0x0004765e) calenote_window_pane_ParamLimits

0x9575,	// (0x0004765e) calenote_window_pane

0xe881,	// (0x0004c96a) popup_note_window_cp01

0x958d,	// (0x00047676) calenote_swipe_1_pane_ParamLimits

0x958d,	// (0x00047676) calenote_swipe_1_pane

0x9352,	// (0x0004743b) calenote_swipe_2_pane_ParamLimits

0x9352,	// (0x0004743b) calenote_swipe_2_pane

0xe697,	// (0x0004c780) calenote_swipe_1_pane_g1_ParamLimits

0xe697,	// (0x0004c780) calenote_swipe_1_pane_g1

0xe6a4,	// (0x0004c78d) calenote_swipe_1_pane_g2_ParamLimits

0xe6a4,	// (0x0004c78d) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x0004dda5) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x0004dda5) calenote_swipe_1_pane_g

0xe893,	// (0x0004c97c) calenote_swipe_1_pane_t1_ParamLimits

0xe893,	// (0x0004c97c) calenote_swipe_1_pane_t1

0xe697,	// (0x0004c780) calenote_swipe_2_pane_g1_ParamLimits

0xe697,	// (0x0004c780) calenote_swipe_2_pane_g1

0xe8b2,	// (0x0004c99b) calenote_swipe_2_pane_g2_ParamLimits

0xe8b2,	// (0x0004c99b) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0004de8d) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0004de8d) calenote_swipe_2_pane_g

0xe8be,	// (0x0004c9a7) calenote_swipe_2_pane_t1_ParamLimits

0xe8be,	// (0x0004c9a7) calenote_swipe_2_pane_t1

0xa176,	// (0x0004825f) main_mup_navstr_pane

0x65f4,	// (0x000446dd) main_mup3_pane_t7_ParamLimits

0x65f4,	// (0x000446dd) main_mup3_pane_t7

0x6ff7,	// (0x000450e0) main_mp4_pane_g6_ParamLimits

0x6ff7,	// (0x000450e0) main_mp4_pane_g6

0x7367,	// (0x00045450) main_image3_pane_t4_ParamLimits

0x7367,	// (0x00045450) main_image3_pane_t4

0x95a0,	// (0x00047689) popup_navstr_preview_pane_ParamLimits

0x95a0,	// (0x00047689) popup_navstr_preview_pane

0x95ac,	// (0x00047695) scroll_navstr_pane_ParamLimits

0x95ac,	// (0x00047695) scroll_navstr_pane

0xa176,	// (0x0004825f) bg_popup_preview_window_pane_cp04

0xe8e5,	// (0x0004c9ce) popup_navstr_preview_pane_t1

0x95b8,	// (0x000476a1) scroll_navstr_pane_g1_ParamLimits

0x95b8,	// (0x000476a1) scroll_navstr_pane_g1

0x95c5,	// (0x000476ae) scroll_navstr_pane_t1_ParamLimits

0x95c5,	// (0x000476ae) scroll_navstr_pane_t1

0xe88a,	// (0x0004c973) bg_button_pane_cp014

0xe88a,	// (0x0004c973) bg_button_pane_cp030

0x140d,	// (0x0003f4f6) list_double_fisheye_pane_g4_ParamLimits

0x140d,	// (0x0003f4f6) list_double_fisheye_pane_g4

0x1419,	// (0x0003f502) list_double_fisheye_pane_g5_ParamLimits

0x1419,	// (0x0003f502) list_double_fisheye_pane_g5

0xe857,	// (0x0004c940) sp_fs_scroll_pane_cp03

0xd8b7,	// (0x0004b9a0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe76f,	// (0x0004c858) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x0004ddc2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe77b,	// (0x0004c864) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x94cb,	// (0x000475b4) sp_fs_scroll_pane_cp02

0xaa46,	// (0x00048b2f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa46,	// (0x00048b2f) popup_sp_fs_calendar_preview_list_single_pane

0xa176,	// (0x0004825f) main_cam6_pano_pane

0xa93e,	// (0x00048a27) main_mup3_pane_ParamLimits

0xa176,	// (0x0004825f) main_phacti_pane

0x8ecd,	// (0x00046fb6) bg_button_pane_cp11

0x8ee5,	// (0x00046fce) main_mobtv_info_pane_g2_ParamLimits

0x8ee5,	// (0x00046fce) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x0004dd22) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x0004dd22) main_mobtv_info_pane_g

0x9097,	// (0x00047180) sc_clock_pane_t5_ParamLimits

0x9097,	// (0x00047180) sc_clock_pane_t5

0x9140,	// (0x00047229) main_radioblah_pane_g1_ParamLimits

0xe5cf,	// (0x0004c6b8) main_radioblah_pane_t3_ParamLimits

0xe5cf,	// (0x0004c6b8) main_radioblah_pane_t3

0xe5e7,	// (0x0004c6d0) main_radioblah_pane_t4_ParamLimits

0xe5e7,	// (0x0004c6d0) main_radioblah_pane_t4

0x915e,	// (0x00047247) main_radioblah_text_pane_ParamLimits

0x915e,	// (0x00047247) main_radioblah_text_pane

0x916b,	// (0x00047254) main_radioblah_info_pane_g1_ParamLimits

0x9204,	// (0x000472ed) main_radioblah_info_pane_t4_ParamLimits

0x9204,	// (0x000472ed) main_radioblah_info_pane_t4

0xa93e,	// (0x00048a27) main_sp_fs_calendar_pane

0x95d7,	// (0x000476c0) main_phacti_pane_g1

0x95df,	// (0x000476c8) phacti_note_pane_ParamLimits

0x95df,	// (0x000476c8) phacti_note_pane

0xe8fc,	// (0x0004c9e5) phacti_term_pane_ParamLimits

0xe8fc,	// (0x0004c9e5) phacti_term_pane

0xe911,	// (0x0004c9fa) phacti_note_pane_t1_ParamLimits

0xe911,	// (0x0004c9fa) phacti_note_pane_t1

0x1b73,	// (0x0003fc5c) phacti_term_pane_g1

0x1b7b,	// (0x0003fc64) phacti_term_pane_t1_ParamLimits

0x1b7b,	// (0x0003fc64) phacti_term_pane_t1

0xe928,	// (0x0004ca11) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe930,	// (0x0004ca19) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x0004de97) popup_sp_fs_calendar_preview_list_single_pane_g

0xe938,	// (0x0004ca21) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe938,	// (0x0004ca21) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe94e,	// (0x0004ca37) aid_popup_sp_fs_bg_corner_pane

0xccb1,	// (0x0004ad9a) popup_sp_fs_calendar_preview_bg_pane_g1

0xa176,	// (0x0004825f) popup_sp_fs_calendar_preview_bg_pane

0xe956,	// (0x0004ca3f) popup_sp_fs_calendar_preview_list_pane

0xc860,	// (0x0004a949) bg_main_sp_fs_cale_pane_ParamLimits

0xc860,	// (0x0004a949) bg_main_sp_fs_cale_pane

0x1bae,	// (0x0003fc97) listscroll_cale_mrui_pane_ParamLimits

0x1bae,	// (0x0003fc97) listscroll_cale_mrui_pane

0x1bc3,	// (0x0003fcac) listscroll_sp_fs_schedule_track_pane

0x1bcc,	// (0x0003fcb5) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1bcc,	// (0x0003fcb5) main_sp_fs_ctrlbar_pane_cp01

0xe95e,	// (0x0004ca47) main_sp_fs_ribbon_pane

0x1bdf,	// (0x0003fcc8) popup_sp_fs_cale_preview_window

0x963e,	// (0x00047727) list_single_sp_fs_schedule_track_pane_ParamLimits

0x963e,	// (0x00047727) list_single_sp_fs_schedule_track_pane

0x21ff,	// (0x000402e8) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x21ff,	// (0x000402e8) bg_sp_fs_highlight_list_pane_cp03

0x9653,	// (0x0004773c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9653,	// (0x0004773c) list_single_sp_fs_schedule_track_pane_g1

0x965f,	// (0x00047748) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x965f,	// (0x00047748) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x0004de9c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x0004de9c) list_single_sp_fs_schedule_track_pane_g

0x966b,	// (0x00047754) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x966b,	// (0x00047754) list_single_sp_fs_schedule_track_pane_t1

0x9689,	// (0x00047772) sp_fs_schedule_track_pane_ParamLimits

0x9689,	// (0x00047772) sp_fs_schedule_track_pane

0xe966,	// (0x0004ca4f) sp_fs_schedule_track_pane_g1

0xe96e,	// (0x0004ca57) sp_fs_schedule_track_pane_g2

0xe976,	// (0x0004ca5f) sp_fs_schedule_track_pane_g3

0xe97e,	// (0x0004ca67) sp_fs_schedule_track_pane_g4

0xe986,	// (0x0004ca6f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0004dea1) sp_fs_schedule_track_pane_g

0xd699,	// (0x0004b782) bg_sp_fs_schedule_viewer_highlight_g1

0xad59,	// (0x00048e42) bg_sp_fs_schedule_viewer_highlight_g2

0xd6a1,	// (0x0004b78a) bg_sp_fs_schedule_viewer_highlight_g3

0xd6a9,	// (0x0004b792) bg_sp_fs_schedule_viewer_highlight_g4

0xd90a,	// (0x0004b9f3) bg_sp_fs_schedule_viewer_highlight_g5

0xd6b9,	// (0x0004b7a2) bg_sp_fs_schedule_viewer_highlight_g6

0xd6c1,	// (0x0004b7aa) bg_sp_fs_schedule_viewer_highlight_g7

0xd6c9,	// (0x0004b7b2) bg_sp_fs_schedule_viewer_highlight_g8

0xad39,	// (0x00048e22) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x0004deac) bg_sp_fs_schedule_viewer_highlight_g

0xa176,	// (0x0004825f) bg_main_sp_fs_ribbon_pane

0x969b,	// (0x00047784) main_sp_fs_ribbon_pane_g1

0xe98e,	// (0x0004ca77) main_sp_fs_ribbon_pane_t1

0x96a4,	// (0x0004778d) main_sp_fs_ribbon_pane_t2

0xe99d,	// (0x0004ca86) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0004debf) main_sp_fs_ribbon_pane_t

0xe9ac,	// (0x0004ca95) main_sp_fs_ribbon_scheduler_pane

0xe9b4,	// (0x0004ca9d) bg_main_sp_fs_ribbon_pane_g1

0xe9bd,	// (0x0004caa6) bg_main_sp_fs_ribbon_pane_g2

0xe9c6,	// (0x0004caaf) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x0004dec6) bg_main_sp_fs_ribbon_pane_g

0xe9ce,	// (0x0004cab7) main_sp_fs_ribbon_scheduler_pane_g1

0xe9d7,	// (0x0004cac0) main_sp_fs_ribbon_scheduler_pane_g2

0xe9e0,	// (0x0004cac9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x0004decd) main_sp_fs_ribbon_scheduler_pane_g

0xe9e9,	// (0x0004cad2) list_cale_mrui_pane

0x96b3,	// (0x0004779c) sp_fs_scroll_pane_cp07_ParamLimits

0x96b3,	// (0x0004779c) sp_fs_scroll_pane_cp07

0x96cf,	// (0x000477b8) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x96cf,	// (0x000477b8) bg_sp_fs_schedule_viewer_highlight

0xe9f6,	// (0x0004cadf) list_single_sp_fs_schedule_track_pane_cp01

0xe9fe,	// (0x0004cae7) list_sp_fs_schedule_track_pane

0xea06,	// (0x0004caef) sp_fs_scroll_pane_cp06_ParamLimits

0xea06,	// (0x0004caef) sp_fs_scroll_pane_cp06

0xccb1,	// (0x0004ad9a) bgmain_sp_fs_calendar_pane_g1

0x1bf1,	// (0x0003fcda) list_single_cale_mrui_pane_ParamLimits

0x1bf1,	// (0x0003fcda) list_single_cale_mrui_pane

0x1c06,	// (0x0003fcef) list_single_cale_mrui_row_pane_ParamLimits

0x1c06,	// (0x0003fcef) list_single_cale_mrui_row_pane

0x1c1c,	// (0x0003fd05) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1c1c,	// (0x0003fd05) list_single_cale_mrui_row_pane_g1

0x1c54,	// (0x0003fd3d) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1c54,	// (0x0003fd3d) list_single_cale_mrui_row_pane_t1

0x1c66,	// (0x0003fd4f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1c66,	// (0x0003fd4f) list_single_cale_mrui_row_pane_t2

0x1ccc,	// (0x0003fdb5) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1ccc,	// (0x0003fdb5) list_single_cale_mrui_row_pane_t3

0x1cfb,	// (0x0003fde4) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1cfb,	// (0x0003fde4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x0004dedb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x0004dedb) list_single_cale_mrui_row_pane_t

0x1d2a,	// (0x0003fe13) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1d2a,	// (0x0003fe13) list_single_cmail_header_editor_pane_bg_cp01

0x1d4e,	// (0x0003fe37) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1d4e,	// (0x0003fe37) list_single_cmail_header_editor_pane_bg_cp02

0x96dc,	// (0x000477c5) main_radioblah_text_pane_t1_ParamLimits

0x96dc,	// (0x000477c5) main_radioblah_text_pane_t1

0xea25,	// (0x0004cb0e) cam6_indi_pane_cp01

0xea2d,	// (0x0004cb16) cam6_mode_pane_cp01

0xea35,	// (0x0004cb1e) cam6_pano_pane

0xea3e,	// (0x0004cb27) cam6_zoom_pane_cp01

0xea48,	// (0x0004cb31) cam6_pano_image_pane

0xea51,	// (0x0004cb3a) cam6_pano_pane_g1

0xe32b,	// (0x0004c414) cam6_pano_pane_g2

0xea5a,	// (0x0004cb43) cam6_pano_pane_g3

0xea63,	// (0x0004cb4c) cam6_pano_pane_g4

0xd22b,	// (0x0004b314) cam6_pano_pane_g5

0xea6c,	// (0x0004cb55) cam6_pano_pane_g6

0xea74,	// (0x0004cb5d) cam6_pano_pane_g7

0xea7c,	// (0x0004cb65) cam6_pano_pane_g8

0xea85,	// (0x0004cb6e) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x0004dee4) cam6_pano_pane_g

0xa176,	// (0x0004825f) main_browser_tag_pane

0xe8dd,	// (0x0004c9c6) grid_navstr_albumart_pane

0xea90,	// (0x0004cb79) cell_navstr_albumart_pane_ParamLimits

0xea90,	// (0x0004cb79) cell_navstr_albumart_pane

0xeaaf,	// (0x0004cb98) cell_navstr_albumart_pane_g1

0xc66d,	// (0x0004a756) cell_navstr_albumart_pane_g2

0xc67d,	// (0x0004a766) cell_navstr_albumart_pane_g3

0xc675,	// (0x0004a75e) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x0004def7) cell_navstr_albumart_pane_g

0x96f6,	// (0x000477df) bt_list_pane_ParamLimits

0x96f6,	// (0x000477df) bt_list_pane

0x970f,	// (0x000477f8) bt_list_pane_t1

0x971e,	// (0x00047807) bt_list_pane_t2

0x0001,

0xfe17,	// (0x0004df00) bt_list_pane_t

0xa176,	// (0x0004825f) main_cale_prevew_pane

0x972d,	// (0x00047816) popup_cale_preview_window_ParamLimits

0x972d,	// (0x00047816) popup_cale_preview_window

0xa93e,	// (0x00048a27) bg_popup_preview_window_pane_cp05_ParamLimits

0xa93e,	// (0x00048a27) bg_popup_preview_window_pane_cp05

0xeab7,	// (0x0004cba0) list_cale_preview_pane_ParamLimits

0xeab7,	// (0x0004cba0) list_cale_preview_pane

0x9748,	// (0x00047831) list_double_cale_preview_pane_ParamLimits

0x9748,	// (0x00047831) list_double_cale_preview_pane

0x975c,	// (0x00047845) list_single_cale_preview_pane_ParamLimits

0x975c,	// (0x00047845) list_single_cale_preview_pane

0x9774,	// (0x0004785d) list_single_cale_preview_pane_g1

0x977c,	// (0x00047865) list_single_cale_preview_pane_t1_ParamLimits

0x977c,	// (0x00047865) list_single_cale_preview_pane_t1

0x9791,	// (0x0004787a) list_double_cale_preview_pane_g1

0x9799,	// (0x00047882) list_double_cale_preview_pane_t1_ParamLimits

0x9799,	// (0x00047882) list_double_cale_preview_pane_t1

0x97ae,	// (0x00047897) list_double_cale_preview_pane_t2_ParamLimits

0x97ae,	// (0x00047897) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x0004df05) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x0004df05) list_double_cale_preview_pane_t

0xa176,	// (0x0004825f) main_ezdial_pane

0xa93e,	// (0x00048a27) main_sp_fs_email_pane_ParamLimits

0x936c,	// (0x00047455) cmail_ddmenu_btn01_pane_ParamLimits

0x936c,	// (0x00047455) cmail_ddmenu_btn01_pane

0x9389,	// (0x00047472) cmail_ddmenu_btn02_pane_ParamLimits

0x9389,	// (0x00047472) cmail_ddmenu_btn02_pane

0x93a7,	// (0x00047490) cmail_ddmenu_btn03_pane_ParamLimits

0x93a7,	// (0x00047490) cmail_ddmenu_btn03_pane

0x14d3,	// (0x0003f5bc) main_sp_fs_ctrlbar_pane_ParamLimits

0x14ed,	// (0x0003f5d6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x94d5,	// (0x000475be) list_cmail_body_pane_ParamLimits

0x9550,	// (0x00047639) bg_button_pane_cp12

0xe866,	// (0x0004c94f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe866,	// (0x0004c94f) list_single_cmail_header_detail_pane_g3

0x1b38,	// (0x0003fc21) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1b38,	// (0x0003fc21) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0004de88) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0004de88) list_single_cmail_header_detail_pane_t

0x1b90,	// (0x0003fc79) phacti_term_pane_t2_ParamLimits

0x1b90,	// (0x0003fc79) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0004de92) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0004de92) phacti_term_pane_t

0xeac3,	// (0x0004cbac) aid_size_list_single_double

0x97c6,	// (0x000478af) popup_ezdial_listscroll_window

0x97e8,	// (0x000478d1) popup_number_entry_window_cp01

0xb434,	// (0x0004951d) bg_popup_call_pane_cp09

0xeacf,	// (0x0004cbb8) ezdial_list_pane

0xead7,	// (0x0004cbc0) scroll_pane_cp23

0xca90,	// (0x0004ab79) bg_button_pane_cp028_ParamLimits

0xca90,	// (0x0004ab79) bg_button_pane_cp028

0x97f6,	// (0x000478df) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x97f6,	// (0x000478df) cmail_ddmenu_btn01_pane_g1

0x9808,	// (0x000478f1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9808,	// (0x000478f1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x0004df0a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x0004df0a) cmail_ddmenu_btn01_pane_g

0xeadf,	// (0x0004cbc8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeadf,	// (0x0004cbc8) cmail_ddmenu_btn01_pane_t1

0xc860,	// (0x0004a949) bg_button_pane_cp029_ParamLimits

0xc860,	// (0x0004a949) bg_button_pane_cp029

0x9814,	// (0x000478fd) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9814,	// (0x000478fd) cmail_ddmenu_btn02_pane_g1

0x982c,	// (0x00047915) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x982c,	// (0x00047915) cmail_ddmenu_btn02_pane_t1

0x21ff,	// (0x000402e8) bg_button_pane_cp031_ParamLimits

0x21ff,	// (0x000402e8) bg_button_pane_cp031

0x9814,	// (0x000478fd) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9814,	// (0x000478fd) cmail_ddmenu_btn03_pane_g1

0x982c,	// (0x00047915) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x982c,	// (0x00047915) cmail_ddmenu_btn03_pane_t1

0x7210,	// (0x000452f9) cell_dialer2_keypad_pane_t1_ParamLimits

0x722a,	// (0x00045313) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x722a,	// (0x00045313) cell_dialer2_keypad_pane_t1_copy1

0x8d3e,	// (0x00046e27) ncimui_group_button_pane

0xa93e,	// (0x00048a27) main_sp_fs_calendar_pane_ParamLimits

0x94ee,	// (0x000475d7) list_single_cmail_header_caption_pane_ParamLimits

0x1ba5,	// (0x0003fc8e) aid_recal_txt_sm_pane

0xa176,	// (0x0004825f) mian_recal_day_pane

0x1bdf,	// (0x0003fcc8) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf5,	// (0x0004cbde) list_recal_day_pane

0x1d86,	// (0x0003fe6f) list_single_recal_day_pane_ParamLimits

0x1d86,	// (0x0003fe6f) list_single_recal_day_pane

0xeb1c,	// (0x0004cc05) list_single_recal_day_pane_g1_ParamLimits

0xeb1c,	// (0x0004cc05) list_single_recal_day_pane_g1

0x1d98,	// (0x0003fe81) list_single_recal_day_pane_g2_ParamLimits

0x1d98,	// (0x0003fe81) list_single_recal_day_pane_g2

0x1da4,	// (0x0003fe8d) list_single_recal_day_pane_g3_ParamLimits

0x1da4,	// (0x0003fe8d) list_single_recal_day_pane_g3

0x1db0,	// (0x0003fe99) list_single_recal_day_pane_g4_ParamLimits

0x1db0,	// (0x0003fe99) list_single_recal_day_pane_g4

0x1dbe,	// (0x0003fea7) list_single_recal_day_pane_g5_ParamLimits

0x1dbe,	// (0x0003fea7) list_single_recal_day_pane_g5

0x1dd4,	// (0x0003febd) list_single_recal_day_pane_g6_ParamLimits

0x1dd4,	// (0x0003febd) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x0004df19) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x0004df19) list_single_recal_day_pane_g

0x1de8,	// (0x0003fed1) list_single_recal_day_pane_t1

0x1dfa,	// (0x0003fee3) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x0004df24) list_single_recal_day_pane_t

0x9850,	// (0x00047939) ncimui_query_button_pane_ParamLimits

0x9850,	// (0x00047939) ncimui_query_button_pane

0x9860,	// (0x00047949) ncimui_query_button_pane_t1_ParamLimits

0x9860,	// (0x00047949) ncimui_query_button_pane_t1

0xeb28,	// (0x0004cc11) ncimui_query_button_pane_t2_ParamLimits

0xeb28,	// (0x0004cc11) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x0004df29) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x0004df29) ncimui_query_button_pane_t

0x9873,	// (0x0004795c) query_button_pane_ParamLimits

0x9873,	// (0x0004795c) query_button_pane

0xa176,	// (0x0004825f) bg_button_pane_cp0028

0xeb3b,	// (0x0004cc24) query_button_pane_t1

0x563b,	// (0x00043724) main_tport_pane_ParamLimits

0x93d7,	// (0x000474c0) bg_popup_window_pane_cp01_ParamLimits

0x93d7,	// (0x000474c0) bg_popup_window_pane_cp01

0x93e5,	// (0x000474ce) heading_pane_cp08_ParamLimits

0x93e5,	// (0x000474ce) heading_pane_cp08

0x93f3,	// (0x000474dc) heading_pane_cp07_ParamLimits

0x93f3,	// (0x000474dc) heading_pane_cp07

0x9464,	// (0x0004754d) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0004de75) cell_tport_appsw_pane_g

0x0dff,	// (0x0003eee8) input_candi_list_open_g1

0xaf0d,	// (0x00048ff6) list_cale_time_pane_g6_ParamLimits

0xaf0d,	// (0x00048ff6) list_cale_time_pane_g6

0x60c6,	// (0x000441af) aid_size_touch_calib_1_ParamLimits

0x60c6,	// (0x000441af) aid_size_touch_calib_1

0x60d2,	// (0x000441bb) aid_size_touch_calib_2_ParamLimits

0x60d2,	// (0x000441bb) aid_size_touch_calib_2

0x60e0,	// (0x000441c9) aid_size_touch_calib_3_ParamLimits

0x60e0,	// (0x000441c9) aid_size_touch_calib_3

0x60f0,	// (0x000441d9) aid_size_touch_calib_4_ParamLimits

0x60f0,	// (0x000441d9) aid_size_touch_calib_4

0x60fe,	// (0x000441e7) main_touch_calib_button_group_pane_ParamLimits

0x60fe,	// (0x000441e7) main_touch_calib_button_group_pane

0x610c,	// (0x000441f5) main_touch_calib_pane_g1_ParamLimits

0x6118,	// (0x00044201) main_touch_calib_pane_g2_ParamLimits

0x6124,	// (0x0004420d) main_touch_calib_pane_g3_ParamLimits

0x6130,	// (0x00044219) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0004d83f) main_touch_calib_pane_g_ParamLimits

0x613c,	// (0x00044225) main_touch_calib_pane_t1_ParamLimits

0x6153,	// (0x0004423c) main_touch_calib_pane_t2_ParamLimits

0x616c,	// (0x00044255) main_touch_calib_pane_t3_ParamLimits

0x6182,	// (0x0004426b) main_touch_calib_pane_t4_ParamLimits

0x6198,	// (0x00044281) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0004d848) main_touch_calib_pane_t_ParamLimits

0xcfe1,	// (0x0004b0ca) list_single_fp_cale_pane_g3_ParamLimits

0xcfe1,	// (0x0004b0ca) list_single_fp_cale_pane_g3

0xa93e,	// (0x00048a27) bg_button_pane_cp012_ParamLimits

0xa93e,	// (0x00048a27) bg_vkb2_func_pane_cp03_ParamLimits

0x801b,	// (0x00046104) cell_vitu2_function_top_pane_g1_ParamLimits

0xa93e,	// (0x00048a27) bg_vkb2_func_pane_cp04_ParamLimits

0x8cc4,	// (0x00046dad) main_ncimui_button_group_pane_ParamLimits

0x8cc4,	// (0x00046dad) main_ncimui_button_group_pane

0x8d2c,	// (0x00046e15) main_ncimui_pane_t3_ParamLimits

0x8d2c,	// (0x00046e15) main_ncimui_pane_t3

0xe8f3,	// (0x0004c9dc) phacti_button_group_pane

0xeac3,	// (0x0004cbac) aid_size_list_single_double_ParamLimits

0x97c6,	// (0x000478af) popup_ezdial_listscroll_window_ParamLimits

0x97e8,	// (0x000478d1) popup_number_entry_window_cp01_ParamLimits

0x9880,	// (0x00047969) phacti_button_pane_ParamLimits

0x9880,	// (0x00047969) phacti_button_pane

0xa176,	// (0x0004825f) bg_button_pane_cp14

0xeb49,	// (0x0004cc32) phacti_button_pane_t1

0x9891,	// (0x0004797a) main_touch_calib_button_pane_ParamLimits

0x9891,	// (0x0004797a) main_touch_calib_button_pane

0xa902,	// (0x000489eb) bg_button_pane_cp18_ParamLimits

0xa902,	// (0x000489eb) bg_button_pane_cp18

0xeb57,	// (0x0004cc40) main_touch_calib_button_pane_t1_ParamLimits

0xeb57,	// (0x0004cc40) main_touch_calib_button_pane_t1

0xeb6d,	// (0x0004cc56) main_touch_calib_button_pane_t2_ParamLimits

0xeb6d,	// (0x0004cc56) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x0004df2e) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x0004df2e) main_touch_calib_button_pane_t

0xa176,	// (0x0004825f) cell_ncimui_button_pane

0xa176,	// (0x0004825f) bg_button_pane_cp032

0xeb8b,	// (0x0004cc74) cell_ncimui_button_pane_t1

0x7286,	// (0x0004536f) image3_infobar_pane_ParamLimits

0x7286,	// (0x0004536f) image3_infobar_pane

0x90b9,	// (0x000471a2) fs_bigclock_status_pane_ParamLimits

0x90b9,	// (0x000471a2) fs_bigclock_status_pane

0x90c6,	// (0x000471af) main_fs_bigclock_clock_pane_ParamLimits

0x90c6,	// (0x000471af) main_fs_bigclock_clock_pane

0x90dc,	// (0x000471c5) main_fs_bigclock_indi_pane_ParamLimits

0x90dc,	// (0x000471c5) main_fs_bigclock_indi_pane

0x910e,	// (0x000471f7) main_fs_bigclock_swipe_pane_ParamLimits

0x910e,	// (0x000471f7) main_fs_bigclock_swipe_pane

0xa176,	// (0x0004825f) main_fs_clock_dumped_data

0xe438,	// (0x0004c521) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe438,	// (0x0004c521) list_single_fs_bigclock_indicator_pane_g1

0xe462,	// (0x0004c54b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe462,	// (0x0004c54b) list_single_fs_bigclock_indicator_pane_g2

0xe47c,	// (0x0004c565) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe47c,	// (0x0004c565) list_single_fs_bigclock_indicator_pane_g3

0xe496,	// (0x0004c57f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe496,	// (0x0004c57f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x0004dd56) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x0004dd56) list_single_fs_bigclock_indicator_pane_g

0xe4c1,	// (0x0004c5aa) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4c1,	// (0x0004c5aa) list_single_fs_bigclock_indicator_pane_t1

0xe4e9,	// (0x0004c5d2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4e9,	// (0x0004c5d2) list_single_fs_bigclock_indicator_pane_t2

0xe511,	// (0x0004c5fa) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe511,	// (0x0004c5fa) list_single_fs_bigclock_indicator_pane_t3

0xe539,	// (0x0004c622) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe539,	// (0x0004c622) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x0004dd61) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x0004dd61) list_single_fs_bigclock_indicator_pane_t

0xeb99,	// (0x0004cc82) image3_infobar_fav_pane_ParamLimits

0xeb99,	// (0x0004cc82) image3_infobar_fav_pane

0xeba9,	// (0x0004cc92) image3_infobar_loc_pane_ParamLimits

0xeba9,	// (0x0004cc92) image3_infobar_loc_pane

0xebbf,	// (0x0004cca8) image3_infobar_time_pane_ParamLimits

0xebbf,	// (0x0004cca8) image3_infobar_time_pane

0xccb1,	// (0x0004ad9a) image3_infobar_time_pane_g1

0xebcf,	// (0x0004ccb8) image3_infobar_time_pane_t1

0xccb1,	// (0x0004ad9a) image3_infobar_loc_pane_g1

0xebdd,	// (0x0004ccc6) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x0004df33) image3_infobar_loc_pane_g

0xebe5,	// (0x0004ccce) image3_infobar_loc_pane_t1

0xccb1,	// (0x0004ad9a) image3_infobar_fav_pane_g1

0xebf3,	// (0x0004ccdc) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x0004df38) image3_infobar_fav_pane_g

0xebfb,	// (0x0004cce4) fs_bigclock_status_battery_pane

0xec04,	// (0x0004cced) fs_bigclock_status_signal_pane

0xec0d,	// (0x0004ccf6) fs_bigclock_status_title_pane

0xec16,	// (0x0004ccff) fs_bigclock_status_signal_pane_g1

0xec1f,	// (0x0004cd08) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x0004df3d) fs_bigclock_status_signal_pane_g

0xec27,	// (0x0004cd10) fs_bigclock_status_battery_pane_g1

0xec30,	// (0x0004cd19) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x0004df42) fs_bigclock_status_battery_pane_g

0xec38,	// (0x0004cd21) fs_bigclock_status_title_pane_t1

0xccb1,	// (0x0004ad9a) main_fs_bigclock_clock_pane_g1

0xec46,	// (0x0004cd2f) main_fs_bigclock_clock_pane_g2

0xec46,	// (0x0004cd2f) main_fs_bigclock_clock_pane_g3

0xec46,	// (0x0004cd2f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x0004df47) main_fs_bigclock_clock_pane_g

0xec4e,	// (0x0004cd37) main_fs_bigclock_clock_pane_t1

0xec5c,	// (0x0004cd45) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x0004df50) main_fs_bigclock_clock_pane_t

0x98a1,	// (0x0004798a) list_single_fs_bigclock_indicator_pane_ParamLimits

0x98a1,	// (0x0004798a) list_single_fs_bigclock_indicator_pane

0x98b2,	// (0x0004799b) list_single_fs_bigclock_pane_ParamLimits

0x98b2,	// (0x0004799b) list_single_fs_bigclock_pane

0xec74,	// (0x0004cd5d) main_fs_bigclock_indicator_pane_t1

0xec83,	// (0x0004cd6c) list_single_fs_bigclock_pane_g1

0xec8b,	// (0x0004cd74) list_single_fs_bigclock_pane_t1

0xccb1,	// (0x0004ad9a) main_fs_bigclock_swipe_pane_g1

0xecce,	// (0x0004cdb7) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0004df61) main_fs_bigclock_swipe_pane_g

0xecd6,	// (0x0004cdbf) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecd6,	// (0x0004cdbf) main_fs_bigclock_swipe_pane_t1

0x4503,	// (0x000425ec) call_type_pane_ParamLimits

0xa176,	// (0x0004825f) main_btmg_pane

0x1c48,	// (0x0003fd31) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1c48,	// (0x0003fd31) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x0004ded4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x0004ded4) list_single_cale_mrui_row_pane_g

0x1d74,	// (0x0003fe5d) list_recal_vselct_arw_lo_pane

0xeb14,	// (0x0004cbfd) list_recal_vselct_arw_up_pane

0x1d7c,	// (0x0003fe65) list_recal_vselct_pane

0x9908,	// (0x000479f1) btmg_button_pane

0x9914,	// (0x000479fd) main_btmg_pane_g1

0xa176,	// (0x0004825f) bg_button_pane_cp044

0xecf3,	// (0x0004cddc) btmg_button_pane_t1

0xc84c,	// (0x0004a935) aid_listscroll_gen

0xa93e,	// (0x00048a27) main_cntbar_detail_pane

0xe847,	// (0x0004c930) list_cmail_folder_pane

0xe857,	// (0x0004c940) sp_fs_scroll_pane_cp03_ParamLimits

0x1e0c,	// (0x0003fef5) list_single_fs_dyc_pane_cp01_ParamLimits

0x1e0c,	// (0x0003fef5) list_single_fs_dyc_pane_cp01

0xed01,	// (0x0004cdea) aid_size_cmail_indent

0x1e2d,	// (0x0003ff16) list_single_dyc_row_pane_cp01

0x993c,	// (0x00047a25) cntbar_detail_list_pane_ParamLimits

0x993c,	// (0x00047a25) cntbar_detail_list_pane

0x997c,	// (0x00047a65) main_cntbar_detail_cont_pane_ParamLimits

0x997c,	// (0x00047a65) main_cntbar_detail_cont_pane

0x44f7,	// (0x000425e0) scroll_pane_cp032_ParamLimits

0x44f7,	// (0x000425e0) scroll_pane_cp032

0x9988,	// (0x00047a71) cntbar_detail_list_event_pane_ParamLimits

0x9988,	// (0x00047a71) cntbar_detail_list_event_pane

0x994a,	// (0x00047a33) cntbar_detail_list_shct_pane

0xada7,	// (0x00048e90) aid_list_gen

0xed0a,	// (0x0004cdf3) aid_scroll

0xed13,	// (0x0004cdfc) aid_size_touch_scroll_bar

0x858e,	// (0x00046677) aid_list_double

0xed1c,	// (0x0004ce05) aid_list_single

0x12ae,	// (0x0003f397) aid_list_single_lg

0x1e36,	// (0x0003ff1f) aid_list_z_g_a_sm

0x1e3e,	// (0x0003ff27) aid_list_z_g_d

0x1e46,	// (0x0003ff2f) aid_txt_z_prm

0x1e54,	// (0x0003ff3d) aid_txt_z_prm_cp01

0x1e62,	// (0x0003ff4b) aid_txt_z_sec

0x9998,	// (0x00047a81) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9998,	// (0x00047a81) main_cntbar_detail_cont_pane_g1

0x99a5,	// (0x00047a8e) main_cntbar_detail_cont_pane_g2_ParamLimits

0x99a5,	// (0x00047a8e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x0004df66) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x0004df66) main_cntbar_detail_cont_pane_g

0xed25,	// (0x0004ce0e) main_cntbar_detail_cont_pane_t1

0xed33,	// (0x0004ce1c) main_cntbar_detail_cont_pane_t2

0xed41,	// (0x0004ce2a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x0004df6b) main_cntbar_detail_cont_pane_t

0x99b1,	// (0x00047a9a) cell_cntbar_detail_list_shct_pane_ParamLimits

0x99b1,	// (0x00047a9a) cell_cntbar_detail_list_shct_pane

0xed4f,	// (0x0004ce38) cntbar_detail_list_shct_pane_g1

0xed58,	// (0x0004ce41) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0004df72) cntbar_detail_list_shct_pane_g

0x99c5,	// (0x00047aae) cntbar_detail_list_event_pane_g1_ParamLimits

0x99c5,	// (0x00047aae) cntbar_detail_list_event_pane_g1

0x99d1,	// (0x00047aba) cntbar_detail_list_event_pane_g2_ParamLimits

0x99d1,	// (0x00047aba) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x0004df77) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x0004df77) cntbar_detail_list_event_pane_g

0x9a3f,	// (0x00047b28) cntbar_detail_list_event_pane_t1_ParamLimits

0x9a3f,	// (0x00047b28) cntbar_detail_list_event_pane_t1

0x9a54,	// (0x00047b3d) cntbar_detail_list_event_pane_t2_ParamLimits

0x9a54,	// (0x00047b3d) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x0004df84) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x0004df84) cntbar_detail_list_event_pane_t

0xccb1,	// (0x0004ad9a) cell_cntbar_detail_list_shct_pane_g1

0x48d6,	// (0x000429bf) navi_pane_mv_g3

0xa93e,	// (0x00048a27) main_cntbar_detail_pane_ParamLimits

0xa176,	// (0x0004825f) main_notif_wgt_pane

0x6f30,	// (0x00045019) aid_tch_main_mp4_pane_g4

0x716f,	// (0x00045258) popup_slider_window_cp02

0x1d6a,	// (0x0003fe53) list_recal_day_event_pane

0x991c,	// (0x00047a05) cntbar_detail_btn_pane_ParamLimits

0x991c,	// (0x00047a05) cntbar_detail_btn_pane

0x992c,	// (0x00047a15) cntbar_detail_btn_pane_cp01_ParamLimits

0x992c,	// (0x00047a15) cntbar_detail_btn_pane_cp01

0x994a,	// (0x00047a33) cntbar_detail_list_shct_pane_ParamLimits

0x9956,	// (0x00047a3f) cntbar_detail_pane_g1_ParamLimits

0x9956,	// (0x00047a3f) cntbar_detail_pane_g1

0x9966,	// (0x00047a4f) cntbar_detail_pane_t1_ParamLimits

0x9966,	// (0x00047a4f) cntbar_detail_pane_t1

0x99dd,	// (0x00047ac6) cntbar_detail_list_event_pane_g3_ParamLimits

0x99dd,	// (0x00047ac6) cntbar_detail_list_event_pane_g3

0x99f5,	// (0x00047ade) cntbar_detail_list_event_pane_g4_ParamLimits

0x99f5,	// (0x00047ade) cntbar_detail_list_event_pane_g4

0x9a0d,	// (0x00047af6) cntbar_detail_list_event_pane_g5_ParamLimits

0x9a0d,	// (0x00047af6) cntbar_detail_list_event_pane_g5

0x9a25,	// (0x00047b0e) cntbar_detail_list_event_pane_g6_ParamLimits

0x9a25,	// (0x00047b0e) cntbar_detail_list_event_pane_g6

0x9a69,	// (0x00047b52) cntbar_detail_list_event_pane_t3_ParamLimits

0x9a69,	// (0x00047b52) cntbar_detail_list_event_pane_t3

0x9a7b,	// (0x00047b64) popup_notif_wgt_window_ParamLimits

0x9a7b,	// (0x00047b64) popup_notif_wgt_window

0x9a8b,	// (0x00047b74) popup_submenu_window_cp01_ParamLimits

0x9a8b,	// (0x00047b74) popup_submenu_window_cp01

0xb434,	// (0x0004951d) bg_popup_window_pane_cp10

0xed61,	// (0x0004ce4a) listscroll_notif_wgt_pane

0xed73,	// (0x0004ce5c) list_notif_wgt_window

0xed7c,	// (0x0004ce65) scroll_pane_cp033

0x9a9b,	// (0x00047b84) list_notif_wgt_row_pane_ParamLimits

0x9a9b,	// (0x00047b84) list_notif_wgt_row_pane

0xed85,	// (0x0004ce6e) aid_size_list_notif_wgt_del

0xed92,	// (0x0004ce7b) list_notif_wgt_row_pane_g1

0xed9e,	// (0x0004ce87) list_notif_wgt_row_pane_g2

0xedaa,	// (0x0004ce93) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x0004df8b) list_notif_wgt_row_pane_g

0xedb7,	// (0x0004cea0) list_notif_wgt_row_pane_t1

0xedcc,	// (0x0004ceb5) list_notif_wgt_row_pane_t2

0xedde,	// (0x0004cec7) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0004df92) list_notif_wgt_row_pane_t

0xd912,	// (0x0004b9fb) list_recal_day_event_pane_g1

0xedf0,	// (0x0004ced9) list_recal_day_event_pane_t1

0xa176,	// (0x0004825f) bg_button_pane_cp045

0xedff,	// (0x0004cee8) cntbar_detail_btn_pane_t1

0xc860,	// (0x0004a949) main_callh_pane_ParamLimits

0xc860,	// (0x0004a949) main_callh_pane

0xa176,	// (0x0004825f) main_coverflow0_pane

0xa176,	// (0x0004825f) main_wgtman_pane

0x9126,	// (0x0004720f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9126,	// (0x0004720f) main_fs_bigclock_unlock_btn_pane

0x945c,	// (0x00047545) bg_button_pane_cp16

0x946c,	// (0x00047555) cell_tport_appsw_pane_g3

0x9aac,	// (0x00047b95) cf0_flow_pane_ParamLimits

0x9aac,	// (0x00047b95) cf0_flow_pane

0xee0d,	// (0x0004cef6) listscroll_cf0_pane

0xee18,	// (0x0004cf01) main_cf0_pane_g1

0x9abb,	// (0x00047ba4) main_cf0_pane_t1_ParamLimits

0x9abb,	// (0x00047ba4) main_cf0_pane_t1

0x9acf,	// (0x00047bb8) main_cf0_pane_t2_ParamLimits

0x9acf,	// (0x00047bb8) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0004df9e) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0004df9e) main_cf0_pane_t

0xee2a,	// (0x0004cf13) scroll_pane_cp11

0x9ae3,	// (0x00047bcc) cf0_flow_pane_g1

0x9aeb,	// (0x00047bd4) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0004dfa3) cf0_flow_pane_g

0x9af3,	// (0x00047bdc) cf0_flow_pane_t1

0xa176,	// (0x0004825f) main_call6_pane

0xa176,	// (0x0004825f) main_calllock_pane

0x9b01,	// (0x00047bea) call6_btn_grp_pane_ParamLimits

0x9b01,	// (0x00047bea) call6_btn_grp_pane

0x9b0e,	// (0x00047bf7) call6_pane_g1_ParamLimits

0x9b0e,	// (0x00047bf7) call6_pane_g1

0x9b1e,	// (0x00047c07) popup_call6_1st_window_ParamLimits

0x9b1e,	// (0x00047c07) popup_call6_1st_window

0x9b2c,	// (0x00047c15) popup_call6_2nd_window_ParamLimits

0x9b2c,	// (0x00047c15) popup_call6_2nd_window

0x9b3a,	// (0x00047c23) cell_call6_btn_pane_ParamLimits

0x9b3a,	// (0x00047c23) cell_call6_btn_pane

0xb434,	// (0x0004951d) bg_popup_call2_in_pane_cp03

0xee35,	// (0x0004cf1e) popup_call6_1st_window_g1

0xee3d,	// (0x0004cf26) popup_call6_1st_window_g2

0xee45,	// (0x0004cf2e) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0004dfa8) popup_call6_1st_window_g

0xee4d,	// (0x0004cf36) popup_call6_1st_window_t1

0xee5c,	// (0x0004cf45) popup_call6_1st_window_t2

0xee6c,	// (0x0004cf55) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0004dfaf) popup_call6_1st_window_t

0xb434,	// (0x0004951d) bg_popup_call2_in_pane_cp04

0xee35,	// (0x0004cf1e) popup_call6_2nd_window_g1

0xee3d,	// (0x0004cf26) popup_call6_2nd_window_g2

0xee45,	// (0x0004cf2e) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0004dfa8) popup_call6_2nd_window_g

0xee4d,	// (0x0004cf36) popup_call6_2nd_window_t1

0xa176,	// (0x0004825f) bg_button_pane_cp15

0xee7c,	// (0x0004cf65) cell_call6_btn_pane_g1

0xee85,	// (0x0004cf6e) cell_call6_btn_pane_t1

0x9b49,	// (0x00047c32) listscroll_wgtman_pane_ParamLimits

0x9b49,	// (0x00047c32) listscroll_wgtman_pane

0x9b65,	// (0x00047c4e) wgtman_btn_pane_ParamLimits

0x9b65,	// (0x00047c4e) wgtman_btn_pane

0xb2fa,	// (0x000493e3) aid_scroll_copy1

0xee94,	// (0x0004cf7d) list_wgtman_pane

0x9b9a,	// (0x00047c83) wgtman_btn_pane_g1_ParamLimits

0x9b9a,	// (0x00047c83) wgtman_btn_pane_g1

0x9bc2,	// (0x00047cab) wgtman_btn_pane_t1_ParamLimits

0x9bc2,	// (0x00047cab) wgtman_btn_pane_t1

0xee9e,	// (0x0004cf87) wgtman_btn_pane_t2_ParamLimits

0xee9e,	// (0x0004cf87) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0004dfb6) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0004dfb6) wgtman_btn_pane_t

0x9bf9,	// (0x00047ce2) listrow_wgtman_pane_ParamLimits

0x9bf9,	// (0x00047ce2) listrow_wgtman_pane

0x9c0d,	// (0x00047cf6) listrow_wgtman_pane_g1

0x9c1a,	// (0x00047d03) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0004dfbb) listrow_wgtman_pane_g

0x1e70,	// (0x0003ff59) listrow_wgtman_pane_t1

0x1e88,	// (0x0003ff71) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0004dfc0) listrow_wgtman_pane_t

0x1eae,	// (0x0003ff97) wait_bar_pane_cp09

0xeeb5,	// (0x0004cf9e) main_calllock_btn_pane

0xeebf,	// (0x0004cfa8) main_calllock_pane_g1

0xa176,	// (0x0004825f) bg_button_pane_cp17

0xeecb,	// (0x0004cfb4) main_calllock_btn_pane_g1

0xeed4,	// (0x0004cfbd) main_calllock_btn_pane_t1

0xa176,	// (0x0004825f) main_dialer3_pane

0xa176,	// (0x0004825f) main_fmrd2_pane

0xccb1,	// (0x0004ad9a) main_fs_bigclock_unlock_btn_pane_g1

0xeeeb,	// (0x0004cfd4) main_fs_bigclock_unlock_btn_pane_t1

0x9c38,	// (0x00047d21) area_fmrd2_info_pane_ParamLimits

0x9c38,	// (0x00047d21) area_fmrd2_info_pane

0x9c44,	// (0x00047d2d) area_fmrd2_visual_pane_ParamLimits

0x9c44,	// (0x00047d2d) area_fmrd2_visual_pane

0x9c52,	// (0x00047d3b) fmrd2_indi_pane_ParamLimits

0x9c52,	// (0x00047d3b) fmrd2_indi_pane

0x9c5f,	// (0x00047d48) area_fmrd2_visual_pane_g1

0x9c67,	// (0x00047d50) area_fmrd2_visual_pane_t1

0x9c77,	// (0x00047d60) area_fmrd2_visual_pane_t2

0x9c87,	// (0x00047d70) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0004dfca) area_fmrd2_visual_pane_t

0x9c97,	// (0x00047d80) area_fmrd2_info_pane_g1

0x9c9f,	// (0x00047d88) area_fmrd2_info_pane_t1

0x9caf,	// (0x00047d98) area_fmrd2_info_pane_t2

0x9cbf,	// (0x00047da8) area_fmrd2_info_pane_t3

0x9ccf,	// (0x00047db8) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0004dfd1) area_fmrd2_info_pane_t

0x9cdf,	// (0x00047dc8) fmrd2_indi_pane_t1

0x9cef,	// (0x00047dd8) fmrd2_indi_pane_t2

0x9cff,	// (0x00047de8) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0004dfda) fmrd2_indi_pane_t

0xe4a5,	// (0x0004c58e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4a5,	// (0x0004c58e) list_single_fs_bigclock_indicator_pane_g5

0xe54e,	// (0x0004c637) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe54e,	// (0x0004c637) list_single_fs_bigclock_indicator_pane_t5

0x95f5,	// (0x000476de) aid_cell_bcale_month_pane_ParamLimits

0x95f5,	// (0x000476de) aid_cell_bcale_month_pane

0x9613,	// (0x000476fc) bcale_month_pane_ParamLimits

0x9613,	// (0x000476fc) bcale_month_pane

0x962f,	// (0x00047718) bcale_preview_pane_ParamLimits

0x962f,	// (0x00047718) bcale_preview_pane

0xec8b,	// (0x0004cd74) list_single_fs_bigclock_pane_t1_ParamLimits

0xecaa,	// (0x0004cd93) list_single_fs_bigclock_pane_t2_ParamLimits

0xecaa,	// (0x0004cd93) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x0004df5c) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004df5c) list_single_fs_bigclock_pane_t

0xeee3,	// (0x0004cfcc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0004dfc5) main_fs_bigclock_unlock_btn_pane_g

0x9d0f,	// (0x00047df8) aid_dia3_key_size_ParamLimits

0x9d0f,	// (0x00047df8) aid_dia3_key_size

0x9d1b,	// (0x00047e04) aid_dia3_listrow_size_ParamLimits

0x9d1b,	// (0x00047e04) aid_dia3_listrow_size

0x9d2b,	// (0x00047e14) dia3_keypad_fun_pane_ParamLimits

0x9d2b,	// (0x00047e14) dia3_keypad_fun_pane

0x9d3b,	// (0x00047e24) dia3_keypad_num_pane_ParamLimits

0x9d3b,	// (0x00047e24) dia3_keypad_num_pane

0x9d4b,	// (0x00047e34) dia3_listscroll_pane_ParamLimits

0x9d4b,	// (0x00047e34) dia3_listscroll_pane

0x9d59,	// (0x00047e42) dia3_numentry_pane_ParamLimits

0x9d59,	// (0x00047e42) dia3_numentry_pane

0xeef9,	// (0x0004cfe2) dia3_list_pane

0xef04,	// (0x0004cfed) scroll_pane_cp12

0xa176,	// (0x0004825f) bg_dia3_numentry_pane

0x9d67,	// (0x00047e50) dia3_numentry_pane_t1

0x9d76,	// (0x00047e5f) cell_dia3_key_num_pane

0x9d7e,	// (0x00047e67) cell_dia3_key0_fun_pane_ParamLimits

0x9d7e,	// (0x00047e67) cell_dia3_key0_fun_pane

0x9d8b,	// (0x00047e74) cell_dia3_key1_fun_pane_ParamLimits

0x9d8b,	// (0x00047e74) cell_dia3_key1_fun_pane

0x9d98,	// (0x00047e81) dia3_listrow_pane

0xe1a3,	// (0x0004c28c) bg_dia3_numentry_pane_g1

0xa176,	// (0x0004825f) bg_button_pane_cp21

0xef0f,	// (0x0004cff8) cell_dia3_key_num_pane_t1

0xef1d,	// (0x0004d006) cell_dia3_key_num_pane_t2

0xef2c,	// (0x0004d015) cell_dia3_key_num_pane_t3

0xef3b,	// (0x0004d024) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0004dfe1) cell_dia3_key_num_pane_t

0xa176,	// (0x0004825f) bg_button_pane_cp19

0x9da5,	// (0x00047e8e) cell_dia3_key0_fun_pane_g1

0xa176,	// (0x0004825f) bg_button_pane_cp20

0x9dad,	// (0x00047e96) cell_dia3_key1_fun_pane_g1

0x9db5,	// (0x00047e9e) area_left_week_number_pane

0x9dc8,	// (0x00047eb1) area_top_day_name_pane

0x9dd6,	// (0x00047ebf) frame_month_view_pane

0xef4a,	// (0x0004d033) grid_month_view_pane

0x9deb,	// (0x00047ed4) cell_top_day_name_pane_ParamLimits

0x9deb,	// (0x00047ed4) cell_top_day_name_pane

0x9e07,	// (0x00047ef0) cell_area_left_week_number_pane_ParamLimits

0x9e07,	// (0x00047ef0) cell_area_left_week_number_pane

0x9e28,	// (0x00047f11) cell_month_view_pane_ParamLimits

0x9e28,	// (0x00047f11) cell_month_view_pane

0xef58,	// (0x0004d041) frm_month_g1

0x9e54,	// (0x00047f3d) frm_month_g2

0x9e65,	// (0x00047f4e) frm_month_g3

0x9e76,	// (0x00047f5f) frm_month_g4

0x9e87,	// (0x00047f70) frm_month_g5

0x9e98,	// (0x00047f81) frm_month_g6

0x9eab,	// (0x00047f94) frm_month_g7

0xef65,	// (0x0004d04e) frm_month_g8

0x9ebe,	// (0x00047fa7) frm_month_g9

0x9ecb,	// (0x00047fb4) frm_month_g10

0x9ed8,	// (0x00047fc1) frm_month_g11

0x9ee5,	// (0x00047fce) frm_month_g12

0x9ef2,	// (0x00047fdb) frm_month_g13

0x9f01,	// (0x00047fea) frm_month_g14

0x9f10,	// (0x00047ff9) frm_month_g15

0x9f1f,	// (0x00048008) frm_month_g16

0x000f,

0xff01,	// (0x0004dfea) frm_month_g

0xef72,	// (0x0004d05b) cell_top_day_name_pane_t1

0x9f2e,	// (0x00048017) cell_area_left_week_number_pane_g1

0x9f3d,	// (0x00048026) cell_area_left_week_number_pane_t1

0xcee1,	// (0x0004afca) cell_month_view_pane_g1

0x9f53,	// (0x0004803c) cell_month_view_pane_t1

0xa176,	// (0x0004825f) main_fps_pane

0xe737,	// (0x0004c820) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe737,	// (0x0004c820) cmail_ddmenu_btn02_pane_cp1

0xe753,	// (0x0004c83c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe753,	// (0x0004c83c) cmail_ddmenu_btn02_pane_cp2

0x9820,	// (0x00047909) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9820,	// (0x00047909) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x0004df0f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x0004df0f) cmail_ddmenu_btn02_pane_g

0x983e,	// (0x00047927) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x983e,	// (0x00047927) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x0004df14) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x0004df14) cmail_ddmenu_btn02_pane_t

0x9f69,	// (0x00048052) fps_text_pane_ParamLimits

0x9f69,	// (0x00048052) fps_text_pane

0x9f76,	// (0x0004805f) main_fps_pane_g1_ParamLimits

0x9f76,	// (0x0004805f) main_fps_pane_g1

0x9f82,	// (0x0004806b) wait_bar_pane_cp010_ParamLimits

0x9f82,	// (0x0004806b) wait_bar_pane_cp010

0x9f8e,	// (0x00048077) fps_text_pane_t1_ParamLimits

0x9f8e,	// (0x00048077) fps_text_pane_t1

0x7595,	// (0x0004567e) cam4_image_uncrop_pane_g1

0x759e,	// (0x00045687) cam4_image_uncrop_pane_g2

0x75a7,	// (0x00045690) cam4_image_uncrop_pane_g3

0x75b0,	// (0x00045699) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0004d9d7) cam4_image_uncrop_pane_g

0x9d98,	// (0x00047e81) dia3_listrow_pane_ParamLimits

0xa176,	// (0x0004825f) main_phob2_pane

0x943e,	// (0x00047527) cell_tport_appsw_pane_cp02_ParamLimits

0x943e,	// (0x00047527) cell_tport_appsw_pane_cp02

0x944d,	// (0x00047536) cell_tport_appsw_pane_cp03_ParamLimits

0x944d,	// (0x00047536) cell_tport_appsw_pane_cp03

0xa176,	// (0x0004825f) phob2_contact_card_pane

0xa176,	// (0x0004825f) phob2_listscroll_pane

0xef85,	// (0x0004d06e) phob2_list_pane

0xef8d,	// (0x0004d076) scroll_pane_cp034

0x9fa7,	// (0x00048090) phob2_cc_data_pane_ParamLimits

0x9fa7,	// (0x00048090) phob2_cc_data_pane

0x9fc3,	// (0x000480ac) phob2_cc_listscroll_pane_ParamLimits

0x9fc3,	// (0x000480ac) phob2_cc_listscroll_pane

0x9fdf,	// (0x000480c8) list_double_large_graphic_phob2_pane_ParamLimits

0x9fdf,	// (0x000480c8) list_double_large_graphic_phob2_pane

0x9ff7,	// (0x000480e0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9ff7,	// (0x000480e0) list_double_large_graphic_phob2_pane_g1

0x1ec0,	// (0x0003ffa9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1ec0,	// (0x0003ffa9) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0004e00b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0004e00b) list_double_large_graphic_phob2_pane_g

0x1ecc,	// (0x0003ffb5) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1ecc,	// (0x0003ffb5) list_double_large_graphic_phob2_pane_t1

0x1ee1,	// (0x0003ffca) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1ee1,	// (0x0003ffca) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0004e010) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0004e010) list_double_large_graphic_phob2_pane_t

0xa176,	// (0x0004825f) list_highlight_pane_cp024

0xa00d,	// (0x000480f6) phob2_cc_button_pane

0xa015,	// (0x000480fe) phob2_cc_data_pane_g1_ParamLimits

0xa015,	// (0x000480fe) phob2_cc_data_pane_g1

0xa021,	// (0x0004810a) phob2_cc_data_pane_g2_ParamLimits

0xa021,	// (0x0004810a) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0004e015) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0004e015) phob2_cc_data_pane_g

0xa02d,	// (0x00048116) phob2_cc_data_pane_t1_ParamLimits

0xa02d,	// (0x00048116) phob2_cc_data_pane_t1

0xa03f,	// (0x00048128) phob2_cc_data_pane_t2_ParamLimits

0xa03f,	// (0x00048128) phob2_cc_data_pane_t2

0xa051,	// (0x0004813a) phob2_cc_data_pane_t3_ParamLimits

0xa051,	// (0x0004813a) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0004e01a) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0004e01a) phob2_cc_data_pane_t

0xef95,	// (0x0004d07e) phob2_cc_list_pane_ParamLimits

0xef95,	// (0x0004d07e) phob2_cc_list_pane

0xdf9e,	// (0x0004c087) scroll_pane_cp035_ParamLimits

0xdf9e,	// (0x0004c087) scroll_pane_cp035

0xa93e,	// (0x00048a27) bg_button_pane_cp033

0xefa1,	// (0x0004d08a) phob2_cc_button_pane_g1

0xefad,	// (0x0004d096) phob2_cc_button_pane_t1

0xefc2,	// (0x0004d0ab) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0004e021) phob2_cc_button_pane_t

0xa063,	// (0x0004814c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa063,	// (0x0004814c) list_double_large_graphic_phob2_cc_pane

0xa07f,	// (0x00048168) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa07f,	// (0x00048168) list_double_large_graphic_phob2_cc_pane_g1

0x1ef3,	// (0x0003ffdc) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1ef3,	// (0x0003ffdc) list_double_large_graphic_phob2_cc_pane_g2

0x1f02,	// (0x0003ffeb) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1f02,	// (0x0003ffeb) list_double_large_graphic_phob2_cc_pane_g3

0x1f11,	// (0x0003fffa) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1f11,	// (0x0003fffa) list_double_large_graphic_phob2_cc_pane_g4

0x1f22,	// (0x0004000b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1f22,	// (0x0004000b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0004e026) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0004e026) list_double_large_graphic_phob2_cc_pane_g

0x1f31,	// (0x0004001a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1f31,	// (0x0004001a) list_double_large_graphic_phob2_cc_pane_t1

0x1f5a,	// (0x00040043) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1f5a,	// (0x00040043) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0004e031) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0004e031) list_double_large_graphic_phob2_cc_pane_t

0xefd4,	// (0x0004d0bd) list_highlight_pane_cp025_ParamLimits

0xefd4,	// (0x0004d0bd) list_highlight_pane_cp025

0xa93e,	// (0x00048a27) bg_button_pane_cp033_ParamLimits

0xefa1,	// (0x0004d08a) phob2_cc_button_pane_g1_ParamLimits

0xefad,	// (0x0004d096) phob2_cc_button_pane_t1_ParamLimits

0xefc2,	// (0x0004d0ab) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0004e021) phob2_cc_button_pane_t_ParamLimits

0x220d,	// (0x000402f6) popup_wgtman_window

0xd7b7,	// (0x0004b8a0) scroll_pane_cp038

0x9b82,	// (0x00047c6b) wgtman_btn_pane_cp_01_ParamLimits

0x9b82,	// (0x00047c6b) wgtman_btn_pane_cp_01

0xefe2,	// (0x0004d0cb) wgtman_content_pane

0xefeb,	// (0x0004d0d4) wgtman_heading_pane

0xa176,	// (0x0004825f) bg_heading_pane_cp02

0xeff4,	// (0x0004d0dd) wgtman_heading_pane_g1

0xeffc,	// (0x0004d0e5) wgtman_heading_pane_t1

0xf00a,	// (0x0004d0f3) scroll_pane_cp036

0xf012,	// (0x0004d0fb) wgtman_list_pane

0xf01a,	// (0x0004d103) wgtman_list_pane_t1_ParamLimits

0xf01a,	// (0x0004d103) wgtman_list_pane_t1

0x74f2,	// (0x000455db) cam4_grid_pane

0x1082,	// (0x0003f16b) bg_button_pane_cp015_ParamLimits

0x81b9,	// (0x000462a2) bg_button_pane_cp016_ParamLimits

0x81cc,	// (0x000462b5) bg_button_pane_cp017_ParamLimits

0x10c6,	// (0x0003f1af) popup_vitu2_query_window_g3_ParamLimits

0x10c6,	// (0x0003f1af) popup_vitu2_query_window_g3

0x113f,	// (0x0003f228) popup_vitu2_query_window_t6_ParamLimits

0x113f,	// (0x0003f228) popup_vitu2_query_window_t6

0x116a,	// (0x0003f253) popup_vitu2_query_window_t7_ParamLimits

0x116a,	// (0x0003f253) popup_vitu2_query_window_t7

0xe64d,	// (0x0004c736) cam4_grid_pane_g1

0xe656,	// (0x0004c73f) cam4_grid_pane_g2

0xf034,	// (0x0004d11d) cam4_grid_pane_g3

0xf03d,	// (0x0004d126) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0004e036) cam4_grid_pane_g

0x330a,	// (0x000413f3) aid_placing_vt_slider_lsc_ParamLimits

0x363d,	// (0x00041726) vidtel_button_pane_ParamLimits

0x363d,	// (0x00041726) vidtel_button_pane

0xf048,	// (0x0004d131) bg_button_pane_cp034

0xa090,	// (0x00048179) vidtel_button_pane_g1

0xf052,	// (0x0004d13b) vidtel_button_pane_t1

0xd902,	// (0x0004b9eb) aid_size_vtel_slider_touch

0xdf9e,	// (0x0004c087) scroll_pane_cp039

0xe1e1,	// (0x0004c2ca) ncim_query_button_pane_cp01_ParamLimits

0xe200,	// (0x0004c2e9) ncimui_query_pane_g1_ParamLimits

0xa93e,	// (0x00048a27) input_focus_pane_cp012_ParamLimits

0xe225,	// (0x0004c30e) ncim_query_entry_pane_t1_ParamLimits

0xdf9e,	// (0x0004c087) scroll_pane_cp039_ParamLimits

0x4848,	// (0x00042931) navi_pane_bcale_mc_g1

0x4850,	// (0x00042939) navi_pane_bcale_mc_t1

0xe790,	// (0x0004c879) main_sp_fs_email_pane_g1

0xe79c,	// (0x0004c885) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x0004ddc7) main_sp_fs_email_pane_g

0xea18,	// (0x0004cb01) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea18,	// (0x0004cb01) list_single_cale_mrui_row_pane_g3

0x1dca,	// (0x0003feb3) list_single_recal_day_pane_g5_event_pane

0x1de0,	// (0x0003fec9) list_single_recal_day_pane_g7

0xf060,	// (0x0004d149) list_recal_day_event_pane_cp01

0xf069,	// (0x0004d152) list_recal_vselct_arw_lo_pane_cp01

0xf071,	// (0x0004d15a) list_recal_vselct_arw_up_pane_cp01

0xf079,	// (0x0004d162) list_recal_vselct_pane_cp01

0xd912,	// (0x0004b9fb) list_recal_day_event_pane_cp01_g1

0x1f83,	// (0x0004006c) list_recal_day_event_pane_cp01_t1

0x1de8,	// (0x0003fed1) list_single_recal_day_pane_t1_ParamLimits

0x1dfa,	// (0x0003fee3) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x0004df24) list_single_recal_day_pane_t_ParamLimits

0xa83d,	// (0x00048926) bg_notes_pane_ParamLimits

0xa8e0,	// (0x000489c9) list_notes_pane_ParamLimits

0x255c,	// (0x00040645) scroll_pane_cp06_ParamLimits

0xa902,	// (0x000489eb) main_notes_pane_ParamLimits

0xa176,	// (0x0004825f) main_welc_pane

0xa098,	// (0x00048181) main_welc_body_pane_ParamLimits

0xa098,	// (0x00048181) main_welc_body_pane

0xa0b3,	// (0x0004819c) main_welc_opti_pane_ParamLimits

0xa0b3,	// (0x0004819c) main_welc_opti_pane

0xa0e8,	// (0x000481d1) main_welc_pane_t1_ParamLimits

0xa0e8,	// (0x000481d1) main_welc_pane_t1

0xa106,	// (0x000481ef) main_welc_body_row_pane_ParamLimits

0xa106,	// (0x000481ef) main_welc_body_row_pane

0xa120,	// (0x00048209) main_welc_opti_row_pane_ParamLimits

0xa120,	// (0x00048209) main_welc_opti_row_pane

0xf083,	// (0x0004d16c) main_welc_opti_row_pane_g1

0xf08b,	// (0x0004d174) main_welc_opti_row_pane_t1

0xf09a,	// (0x0004d183) main_welc_body_row_pane_t1

0xed6b,	// (0x0004ce54) popup_notif_wgt_heading_pane

0xed85,	// (0x0004ce6e) aid_size_list_notif_wgt_del_ParamLimits

0xed92,	// (0x0004ce7b) list_notif_wgt_row_pane_g1_ParamLimits

0xed9e,	// (0x0004ce87) list_notif_wgt_row_pane_g2_ParamLimits

0xedaa,	// (0x0004ce93) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x0004df8b) list_notif_wgt_row_pane_g_ParamLimits

0xedb7,	// (0x0004cea0) list_notif_wgt_row_pane_t1_ParamLimits

0xedcc,	// (0x0004ceb5) list_notif_wgt_row_pane_t2_ParamLimits

0xedde,	// (0x0004cec7) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0004df92) list_notif_wgt_row_pane_t_ParamLimits

0x9c0d,	// (0x00047cf6) listrow_wgtman_pane_g1_ParamLimits

0x9c1a,	// (0x00047d03) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0004dfbb) listrow_wgtman_pane_g_ParamLimits

0x1e70,	// (0x0003ff59) listrow_wgtman_pane_t1_ParamLimits

0x1e88,	// (0x0003ff71) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0004dfc0) listrow_wgtman_pane_t_ParamLimits

0x1eae,	// (0x0003ff97) wait_bar_pane_cp09_ParamLimits

0xa176,	// (0x0004825f) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0004d192) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0004d19a) popup_notif_wgt_heading_pane_t1

0xa176,	// (0x0004825f) main_vids_pane

0xa176,	// (0x0004825f) vids_listscroll_pane

0xa131,	// (0x0004821a) scroll_pane_cp040

0xa176,	// (0x0004825f) vids_list_pane

0xa13c,	// (0x00048225) vids_list_double_pane_ParamLimits

0xa13c,	// (0x00048225) vids_list_double_pane

0xa14f,	// (0x00048238) vids_list_double_pane_g1

0xa158,	// (0x00048241) vids_list_double_pane_t1

0xa168,	// (0x00048251) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x0004e044) vids_list_double_pane_t

0xa93e,	// (0x00048a27) main_ncimui_pane_ParamLimits

0x8cdc,	// (0x00046dc5) main_ncimui_pane_g1_ParamLimits

0x8cea,	// (0x00046dd3) main_ncimui_pane_g2_ParamLimits

0x8cea,	// (0x00046dd3) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x0004dccc) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x0004dccc) main_ncimui_pane_g

0xa0ce,	// (0x000481b7) main_welc_pane_g1_ParamLimits

0xa0ce,	// (0x000481b7) main_welc_pane_g1

0xa0da,	// (0x000481c3) main_welc_pane_g2_ParamLimits

0xa0da,	// (0x000481c3) main_welc_pane_g2

0x0001,

0xff56,	// (0x0004e03f) main_welc_pane_g_ParamLimits

0xff56,	// (0x0004e03f) main_welc_pane_g

0xa83d,	// (0x00048926) listscroll_mce_pane_ParamLimits

0x4912,	// (0x000429fb) wait_bar_pane_cp10

0xc854,	// (0x0004a93d) main_cale_day_pane_ParamLimits

0xc854,	// (0x0004a93d) main_cale_week_pane_ParamLimits

0xa83d,	// (0x00048926) main_messa_pane_ParamLimits

0x68fa,	// (0x000449e3) main_clock2_btn_pane_ParamLimits

0x68fa,	// (0x000449e3) main_clock2_btn_pane

0xd069,	// (0x0004b152) main_clock2_btn_pane_cp01_ParamLimits

0xd069,	// (0x0004b152) main_clock2_btn_pane_cp01

0xe9e9,	// (0x0004cad2) list_cale_mrui_pane_ParamLimits

0xee22,	// (0x0004cf0b) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x0004df99) main_cf0_pane_g

0x9db5,	// (0x00047e9e) area_left_week_number_pane_ParamLimits

0x9dc8,	// (0x00047eb1) area_top_day_name_pane_ParamLimits

0x9dd6,	// (0x00047ebf) frame_month_view_pane_ParamLimits

0xef4a,	// (0x0004d033) grid_month_view_pane_ParamLimits

0xef58,	// (0x0004d041) frm_month_g1_ParamLimits

0x9e54,	// (0x00047f3d) frm_month_g2_ParamLimits

0x9e65,	// (0x00047f4e) frm_month_g3_ParamLimits

0x9e76,	// (0x00047f5f) frm_month_g4_ParamLimits

0x9e87,	// (0x00047f70) frm_month_g5_ParamLimits

0x9e98,	// (0x00047f81) frm_month_g6_ParamLimits

0x9eab,	// (0x00047f94) frm_month_g7_ParamLimits

0xef65,	// (0x0004d04e) frm_month_g8_ParamLimits

0x9ebe,	// (0x00047fa7) frm_month_g9_ParamLimits

0x9ecb,	// (0x00047fb4) frm_month_g10_ParamLimits

0x9ed8,	// (0x00047fc1) frm_month_g11_ParamLimits

0x9ee5,	// (0x00047fce) frm_month_g12_ParamLimits

0x9ef2,	// (0x00047fdb) frm_month_g13_ParamLimits

0x9f01,	// (0x00047fea) frm_month_g14_ParamLimits

0x9f10,	// (0x00047ff9) frm_month_g15_ParamLimits

0x9f1f,	// (0x00048008) frm_month_g16_ParamLimits

0xff01,	// (0x0004dfea) frm_month_g_ParamLimits

0xef72,	// (0x0004d05b) cell_top_day_name_pane_t1_ParamLimits

0x9f2e,	// (0x00048017) cell_area_left_week_number_pane_g1_ParamLimits

0x9f3d,	// (0x00048026) cell_area_left_week_number_pane_t1_ParamLimits

0xcee1,	// (0x0004afca) cell_month_view_pane_g1_ParamLimits

0x9f53,	// (0x0004803c) cell_month_view_pane_t1_ParamLimits

0xa835,	// (0x0004891e) main_clock2_btn_pane_g1

0xf0bf,	// (0x0004d1a8) main_clock2_btn_pane_t1

0xa93e,	// (0x00048a27) listscroll_cmail_pane_ParamLimits

0xe790,	// (0x0004c879) main_sp_fs_email_pane_g1_ParamLimits

0xe79c,	// (0x0004c885) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x0004ddc7) main_sp_fs_email_pane_g_ParamLimits

0xeaf5,	// (0x0004cbde) list_recal_day_pane_ParamLimits

0xeb06,	// (0x0004cbef) mian_recal_day_pane_t1

0x1796,	// (0x0003f87f) list_single_dyc_row_text_pane_t4_ParamLimits

0x1796,	// (0x0003f87f) list_single_dyc_row_text_pane_t4

0x17d3,	// (0x0003f8bc) list_single_dyc_row_text_pane_t5_ParamLimits

0x17d3,	// (0x0003f8bc) list_single_dyc_row_text_pane_t5

0x1849,	// (0x0003f932) list_single_dyc_row_text_pane_t6_ParamLimits

0x1849,	// (0x0003f932) list_single_dyc_row_text_pane_t6

0xaeec,	// (0x00048fd5) aid_mgn_list_cale_time_pane

0xa93e,	// (0x00048a27) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
