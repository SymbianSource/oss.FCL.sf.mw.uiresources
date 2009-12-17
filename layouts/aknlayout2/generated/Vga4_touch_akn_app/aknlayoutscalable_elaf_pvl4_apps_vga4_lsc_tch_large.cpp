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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0006f689 };

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
0x1c58,	// (0x000712e1) Screen

0x1c64,	// (0x000712ed) application_window

0x1cbe,	// (0x00071347) area_bottom_pane_ParamLimits

0x1cbe,	// (0x00071347) area_bottom_pane

0x1d1c,	// (0x000713a5) area_top_pane_ParamLimits

0x1d1c,	// (0x000713a5) area_top_pane

0x1d79,	// (0x00071402) call_video_uplink_pane_ParamLimits

0x1d79,	// (0x00071402) call_video_uplink_pane

0x1daa,	// (0x00071433) main_pane_ParamLimits

0x1daa,	// (0x00071433) main_pane

0xeb7c,	// (0x0007e205) context_pane

0x5965,	// (0x00074fee) navi_pane

0x5995,	// (0x0007501e) popup_cale_events_window_ParamLimits

0x5995,	// (0x0007501e) popup_cale_events_window

0xeb8f,	// (0x0007e218) popup_mup_playback_window

0x59ad,	// (0x00075036) signal_pane

0x2964,	// (0x00071fed) main_browser_pane

0xb278,	// (0x0007a901) main_burst_pane

0x5667,	// (0x00074cf0) main_calc_pane

0xb278,	// (0x0007a901) main_cale_day_pane

0x2964,	// (0x00071fed) main_cale_month_pane

0xb278,	// (0x0007a901) main_cale_week_pane

0xb278,	// (0x0007a901) main_call_pane

0x239e,	// (0x00071a27) main_call_poc_pane

0xb278,	// (0x0007a901) main_camera_pane

0xb278,	// (0x0007a901) main_chi_dic_pane

0xb11a,	// (0x0007a7a3) main_clock_pane

0x239e,	// (0x00071a27) main_fmradio_pane

0xb278,	// (0x0007a901) main_graph_messa_pane

0x239e,	// (0x00071a27) main_help_pane

0x2964,	// (0x00071fed) main_im_pane

0x25f9,	// (0x00071c82) main_image_pane_ParamLimits

0x25f9,	// (0x00071c82) main_image_pane

0x239e,	// (0x00071a27) main_location2_pane

0xb278,	// (0x0007a901) main_location_pane

0x239e,	// (0x00071a27) main_messa_pane

0x239e,	// (0x00071a27) main_mp2_pane

0xb278,	// (0x0007a901) main_mp_pane

0x239e,	// (0x00071a27) main_msg_pane

0x239e,	// (0x00071a27) main_mup_eq_pane

0x239e,	// (0x00071a27) main_mup_pane

0xb278,	// (0x0007a901) main_notes_pane

0x239e,	// (0x00071a27) main_pec_pane

0x239e,	// (0x00071a27) main_phob_pane

0x239e,	// (0x00071a27) main_pinb_pane

0x239e,	// (0x00071a27) main_postcard_pane

0x239e,	// (0x00071a27) main_qdial_pane

0xb278,	// (0x0007a901) main_skin_pane

0x239e,	// (0x00071a27) main_smil2_pane

0xb278,	// (0x0007a901) main_smil_pane

0xb278,	// (0x0007a901) main_video_pane

0xb278,	// (0x0007a901) main_video_tele_pane

0x25f9,	// (0x00071c82) main_viewer_pane_ParamLimits

0x25f9,	// (0x00071c82) main_viewer_pane

0xb278,	// (0x0007a901) main_vorec_pane

0x56bd,	// (0x00074d46) popup_blid_sat_info_window_ParamLimits

0x56bd,	// (0x00074d46) popup_blid_sat_info_window

0x5721,	// (0x00074daa) popup_dyc_status_message_window_ParamLimits

0x5721,	// (0x00074daa) popup_dyc_status_message_window

0x573b,	// (0x00074dc4) popup_grid_large_graphic_window_ParamLimits

0x573b,	// (0x00074dc4) popup_grid_large_graphic_window

0x57fd,	// (0x00074e86) popup_loc_request_window_ParamLimits

0x57fd,	// (0x00074e86) popup_loc_request_window

0x5939,	// (0x00074fc2) popup_wml_address_window_ParamLimits

0x5939,	// (0x00074fc2) popup_wml_address_window

0x54a5,	// (0x00074b2e) call_muted_g1

0x5136,	// (0x000747bf) popup_call_audio_conf_window_ParamLimits

0x5136,	// (0x000747bf) popup_call_audio_conf_window

0x54b5,	// (0x00074b3e) popup_call_audio_first_window_ParamLimits

0x54b5,	// (0x00074b3e) popup_call_audio_first_window

0x552b,	// (0x00074bb4) popup_call_audio_in_window_ParamLimits

0x552b,	// (0x00074bb4) popup_call_audio_in_window

0x5567,	// (0x00074bf0) popup_call_audio_out_window_ParamLimits

0x5567,	// (0x00074bf0) popup_call_audio_out_window

0x55a1,	// (0x00074c2a) popup_call_audio_second_window_ParamLimits

0x55a1,	// (0x00074c2a) popup_call_audio_second_window

0x55f7,	// (0x00074c80) popup_call_audio_wait_window_ParamLimits

0x55f7,	// (0x00074c80) popup_call_audio_wait_window

0x562c,	// (0x00074cb5) popup_number_entry_window_ParamLimits

0x562c,	// (0x00074cb5) popup_number_entry_window

0x1f32,	// (0x000715bb) bg_popup_call_pane_cp05_ParamLimits

0x1f32,	// (0x000715bb) bg_popup_call_pane_cp05

0x1f52,	// (0x000715db) popup_number_entry_window_t1

0x1f65,	// (0x000715ee) popup_number_entry_window_t2

0x1f77,	// (0x00071600) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0007e7b8) popup_number_entry_window_t

0x1fbe,	// (0x00071647) text_title_cp2

0x1fd1,	// (0x0007165a) bg_popup_call_pane_cp_ParamLimits

0x1fd1,	// (0x0007165a) bg_popup_call_pane_cp

0x1fdf,	// (0x00071668) call_thumbnail_pane

0x1fe7,	// (0x00071670) popup_call_audio_in_window_g1_ParamLimits

0x1fe7,	// (0x00071670) popup_call_audio_in_window_g1

0x1ff3,	// (0x0007167c) popup_call_audio_in_window_g2_ParamLimits

0x1ff3,	// (0x0007167c) popup_call_audio_in_window_g2

0x1fff,	// (0x00071688) popup_call_audio_in_window_g3_ParamLimits

0x1fff,	// (0x00071688) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0007e7c1) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0007e7c1) popup_call_audio_in_window_g

0x200b,	// (0x00071694) popup_call_audio_in_window_t1_ParamLimits

0x200b,	// (0x00071694) popup_call_audio_in_window_t1

0x2027,	// (0x000716b0) popup_call_audio_in_window_t2_ParamLimits

0x2027,	// (0x000716b0) popup_call_audio_in_window_t2

0x2043,	// (0x000716cc) popup_call_audio_in_window_t3_ParamLimits

0x2043,	// (0x000716cc) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0007e7c8) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0007e7c8) popup_call_audio_in_window_t

0x1fd1,	// (0x0007165a) bg_popup_call_pane_cp01_ParamLimits

0x1fd1,	// (0x0007165a) bg_popup_call_pane_cp01

0x1fdf,	// (0x00071668) call_thumbnail_pane_cp02

0x2056,	// (0x000716df) call_type_pane_cp022

0x205e,	// (0x000716e7) popup_call_audio_out_window_g1_ParamLimits

0x205e,	// (0x000716e7) popup_call_audio_out_window_g1

0x2070,	// (0x000716f9) popup_call_audio_out_window_g2_ParamLimits

0x2070,	// (0x000716f9) popup_call_audio_out_window_g2

0x207c,	// (0x00071705) popup_call_audio_out_window_g3_ParamLimits

0x207c,	// (0x00071705) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0007e7cf) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0007e7cf) popup_call_audio_out_window_g

0x208e,	// (0x00071717) popup_call_audio_out_window_t1_ParamLimits

0x208e,	// (0x00071717) popup_call_audio_out_window_t1

0x20a6,	// (0x0007172f) popup_call_audio_out_window_t2_ParamLimits

0x20a6,	// (0x0007172f) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0007e7d6) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0007e7d6) popup_call_audio_out_window_t

0x20bb,	// (0x00071744) bg_popup_call_pane_ParamLimits

0x20bb,	// (0x00071744) bg_popup_call_pane

0x213f,	// (0x000717c8) call_thumbnail_pane_cp_ParamLimits

0x213f,	// (0x000717c8) call_thumbnail_pane_cp

0x2163,	// (0x000717ec) call_type_pane_cp01_ParamLimits

0x2163,	// (0x000717ec) call_type_pane_cp01

0x21a7,	// (0x00071830) popup_call_audio_first_window_g1_ParamLimits

0x21a7,	// (0x00071830) popup_call_audio_first_window_g1

0x21f3,	// (0x0007187c) popup_call_audio_first_window_g2_ParamLimits

0x21f3,	// (0x0007187c) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0007e7db) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0007e7db) popup_call_audio_first_window_g

0x2237,	// (0x000718c0) popup_call_audio_first_window_t1_ParamLimits

0x2237,	// (0x000718c0) popup_call_audio_first_window_t1

0x22e3,	// (0x0007196c) popup_call_audio_first_window_t4_ParamLimits

0x22e3,	// (0x0007196c) popup_call_audio_first_window_t4

0x236f,	// (0x000719f8) popup_call_audio_first_window_t5_ParamLimits

0x236f,	// (0x000719f8) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0007e7e0) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0007e7e0) popup_call_audio_first_window_t

0x239e,	// (0x00071a27) bg_popup_call_pane_cp02

0x23a8,	// (0x00071a31) call_type_pane_cp023

0x23b0,	// (0x00071a39) popup_call_audio_wait_window_g1

0x23b8,	// (0x00071a41) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0007e7e7) popup_call_audio_wait_window_g

0x23c0,	// (0x00071a49) popup_call_audio_wait_window_t3

0x23ce,	// (0x00071a57) bg_popup_call_pane_cp03_ParamLimits

0x23ce,	// (0x00071a57) bg_popup_call_pane_cp03

0x242e,	// (0x00071ab7) call_thumbnail_pane_cp011_ParamLimits

0x242e,	// (0x00071ab7) call_thumbnail_pane_cp011

0x243a,	// (0x00071ac3) call_type_pane_cp034_ParamLimits

0x243a,	// (0x00071ac3) call_type_pane_cp034

0x2476,	// (0x00071aff) popup_call_audio_second_window_g1_ParamLimits

0x2476,	// (0x00071aff) popup_call_audio_second_window_g1

0x24b2,	// (0x00071b3b) popup_call_audio_second_window_g2_ParamLimits

0x24b2,	// (0x00071b3b) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0007e7ec) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0007e7ec) popup_call_audio_second_window_g

0x24ee,	// (0x00071b77) popup_call_audio_second_window_t1_ParamLimits

0x24ee,	// (0x00071b77) popup_call_audio_second_window_t1

0x256f,	// (0x00071bf8) popup_call_audio_second_window_t2_ParamLimits

0x256f,	// (0x00071bf8) popup_call_audio_second_window_t2

0x25a5,	// (0x00071c2e) popup_call_audio_second_window_t3_ParamLimits

0x25a5,	// (0x00071c2e) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0007e7f1) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0007e7f1) popup_call_audio_second_window_t

0x239e,	// (0x00071a27) bg_popup_call_pane_cp04

0x25db,	// (0x00071c64) list_conf_pane

0x25e3,	// (0x00071c6c) popup_call_audio_conf_window_t1

0x25f1,	// (0x00071c7a) call_thumbnail_pane_g1

0x25f9,	// (0x00071c82) bg_pinb_pane_ParamLimits

0x25f9,	// (0x00071c82) bg_pinb_pane

0x2607,	// (0x00071c90) find_pinb_pane

0x2610,	// (0x00071c99) listscroll_pinb_pane_ParamLimits

0x2610,	// (0x00071c99) listscroll_pinb_pane

0x261f,	// (0x00071ca8) pinb_bg_pane_g1

0x2629,	// (0x00071cb2) pinb_bg_pane_g2

0x2635,	// (0x00071cbe) pinb_bg_pane_g3

0x2641,	// (0x00071cca) pinb_bg_pane_g4

0x264d,	// (0x00071cd6) pinb_bg_pane_g5

0x2659,	// (0x00071ce2) pinb_bg_pane_g6

0x2664,	// (0x00071ced) pinb_bg_pane_g7

0x266f,	// (0x00071cf8) pinb_bg_pane_g8

0x267a,	// (0x00071d03) pinb_bg_pane_g9

0x2684,	// (0x00071d0d) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0007e7f8) pinb_bg_pane_g

0x26a1,	// (0x00071d2a) grid_pinb_pane

0x26ac,	// (0x00071d35) list_pinb_pane

0x26b7,	// (0x00071d40) scroll_pane_cp01_ParamLimits

0x26b7,	// (0x00071d40) scroll_pane_cp01

0x26c9,	// (0x00071d52) find_pinb_pane_g1_ParamLimits

0x26c9,	// (0x00071d52) find_pinb_pane_g1

0x26e1,	// (0x00071d6a) find_pinb_pane_t1

0x26f3,	// (0x00071d7c) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0007e812) find_pinb_pane_t

0x2708,	// (0x00071d91) input_focus_pane_cp01_ParamLimits

0x2708,	// (0x00071d91) input_focus_pane_cp01

0x2714,	// (0x00071d9d) cell_pinb_pane_ParamLimits

0x2714,	// (0x00071d9d) cell_pinb_pane

0x2736,	// (0x00071dbf) cell_pinb_pane_g1_ParamLimits

0x2736,	// (0x00071dbf) cell_pinb_pane_g1

0x274a,	// (0x00071dd3) cell_pinb_pane_g2_ParamLimits

0x274a,	// (0x00071dd3) cell_pinb_pane_g2

0x2756,	// (0x00071ddf) cell_pinb_pane_g3_ParamLimits

0x2756,	// (0x00071ddf) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0007e817) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0007e817) cell_pinb_pane_g

0x239e,	// (0x00071a27) grid_highlight_pane_cp01

0x2762,	// (0x00071deb) list_pinb_item_pane_ParamLimits

0x2762,	// (0x00071deb) list_pinb_item_pane

0x239e,	// (0x00071a27) list_highlight_pane_cp02

0x2775,	// (0x00071dfe) list_pinb_item_pane_g1_ParamLimits

0x2775,	// (0x00071dfe) list_pinb_item_pane_g1

0x2782,	// (0x00071e0b) list_pinb_item_pane_g2_ParamLimits

0x2782,	// (0x00071e0b) list_pinb_item_pane_g2

0x278e,	// (0x00071e17) list_pinb_item_pane_g3_ParamLimits

0x278e,	// (0x00071e17) list_pinb_item_pane_g3

0x279f,	// (0x00071e28) list_pinb_item_pane_g4_ParamLimits

0x279f,	// (0x00071e28) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0007e81e) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0007e81e) list_pinb_item_pane_g

0x27ab,	// (0x00071e34) list_pinb_item_pane_t1_ParamLimits

0x27ab,	// (0x00071e34) list_pinb_item_pane_t1

0x27e0,	// (0x00071e69) calc_display_pane

0x2806,	// (0x00071e8f) calc_paper_pane

0x2829,	// (0x00071eb2) grid_calc_pane

0x239e,	// (0x00071a27) bg_list_pane_cp01

0x2857,	// (0x00071ee0) clock_g1

0x285f,	// (0x00071ee8) clock_g2

0x0001,

0xf19e,	// (0x0007e827) clock_g

0x2867,	// (0x00071ef0) clock_t1_ParamLimits

0x2867,	// (0x00071ef0) clock_t1

0x287c,	// (0x00071f05) clock_t2_ParamLimits

0x287c,	// (0x00071f05) clock_t2

0x288e,	// (0x00071f17) clock_t3_ParamLimits

0x288e,	// (0x00071f17) clock_t3

0x28a0,	// (0x00071f29) clock_t4_ParamLimits

0x28a0,	// (0x00071f29) clock_t4

0x28b2,	// (0x00071f3b) clock_t5_ParamLimits

0x28b2,	// (0x00071f3b) clock_t5

0x28c7,	// (0x00071f50) clock_t6_ParamLimits

0x28c7,	// (0x00071f50) clock_t6

0x28d9,	// (0x00071f62) clock_t7_ParamLimits

0x28d9,	// (0x00071f62) clock_t7

0x28eb,	// (0x00071f74) clock_t8_ParamLimits

0x28eb,	// (0x00071f74) clock_t8

0x28ff,	// (0x00071f88) clock_t9_ParamLimits

0x28ff,	// (0x00071f88) clock_t9

0x0008,

0xf1a3,	// (0x0007e82c) clock_t_ParamLimits

0xf1a3,	// (0x0007e82c) clock_t

0x2915,	// (0x00071f9e) popup_clock_analogue_window_cp02

0x2915,	// (0x00071f9e) popup_clock_digital_window_cp01

0x291d,	// (0x00071fa6) listscroll_help_pane

0x239e,	// (0x00071a27) phob_pre_status_pane

0x2927,	// (0x00071fb0) grid_qdial_pane

0x239e,	// (0x00071a27) listscroll_mce_pane

0x2931,	// (0x00071fba) bg_notes_pane

0x293b,	// (0x00071fc4) list_notes_pane

0x2945,	// (0x00071fce) scroll_pane_cp06

0x2950,	// (0x00071fd9) bg_calc_paper_pane

0xa9b7,	// (0x0007a040) list_calc_pane

0x2964,	// (0x00071fed) bg_calc_display_pane

0x2970,	// (0x00071ff9) calc_display_pane_t1

0x2982,	// (0x0007200b) calc_display_pane_t2

0xa9d1,	// (0x0007a05a) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0007e83f) calc_display_pane_t

0x2994,	// (0x0007201d) cell_calc_pane_ParamLimits

0x2994,	// (0x0007201d) cell_calc_pane

0x29cf,	// (0x00072058) bg_calc_paper_pane_g1

0x29db,	// (0x00072064) bg_calc_paper_pane_g2

0x29e7,	// (0x00072070) bg_calc_paper_pane_g3

0x29f3,	// (0x0007207c) bg_calc_paper_pane_g4

0x29ff,	// (0x00072088) bg_calc_paper_pane_g5

0x2a0b,	// (0x00072094) bg_calc_paper_pane_g6

0x2a1e,	// (0x000720a7) bg_calc_paper_pane_g7

0x2a31,	// (0x000720ba) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0007e846) bg_calc_paper_pane_g

0x2a42,	// (0x000720cb) calc_bg_paper_pane_g9

0x2a53,	// (0x000720dc) list_calc_item_pane_ParamLimits

0x2a53,	// (0x000720dc) list_calc_item_pane

0x2a67,	// (0x000720f0) list_calc_item_pane_g1

0xa9e3,	// (0x0007a06c) list_calc_item_pane_t1_ParamLimits

0xa9e3,	// (0x0007a06c) list_calc_item_pane_t1

0x2a74,	// (0x000720fd) list_calc_item_pane_t2_ParamLimits

0x2a74,	// (0x000720fd) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0007e857) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0007e857) list_calc_item_pane_t

0x2a8e,	// (0x00072117) cell_calc_pane_g1

0x2ab0,	// (0x00072139) grid_highlight_pane_cp02

0x2ad2,	// (0x0007215b) bg_calc_display_pane_g1

0xa9f5,	// (0x0007a07e) bg_calc_display_pane_g2

0x2adb,	// (0x00072164) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0007e861) bg_calc_display_pane_g

0x2ae4,	// (0x0007216d) cell_qdial_pane_ParamLimits

0x2ae4,	// (0x0007216d) cell_qdial_pane

0x2afa,	// (0x00072183) cell_qdial_pane_g1_ParamLimits

0x2afa,	// (0x00072183) cell_qdial_pane_g1

0x2b10,	// (0x00072199) cell_qdial_pane_g2_ParamLimits

0x2b10,	// (0x00072199) cell_qdial_pane_g2

0x2b21,	// (0x000721aa) cell_qdial_pane_g3_ParamLimits

0x2b21,	// (0x000721aa) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0007e868) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0007e868) cell_qdial_pane_g

0x2b42,	// (0x000721cb) cell_qdial_pane_t1_ParamLimits

0x2b42,	// (0x000721cb) cell_qdial_pane_t1

0x2b5a,	// (0x000721e3) cell_qdial_pane_t2_ParamLimits

0x2b5a,	// (0x000721e3) cell_qdial_pane_t2

0x2b6d,	// (0x000721f6) cell_qdial_pane_t3_ParamLimits

0x2b6d,	// (0x000721f6) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0007e871) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0007e871) cell_qdial_pane_t

0x239e,	// (0x00071a27) grid_highlight_pane_cp04

0x2b80,	// (0x00072209) thumbnail_qdial_pane_ParamLimits

0x2b80,	// (0x00072209) thumbnail_qdial_pane

0x2bdc,	// (0x00072265) list_help_pane

0x2be5,	// (0x0007226e) scroll_pane_cp02

0x2bee,	// (0x00072277) help_list_pane_t1_ParamLimits

0x2bee,	// (0x00072277) help_list_pane_t1

0xa9ff,	// (0x0007a088) bg_notes_pane_g2

0xaa07,	// (0x0007a090) bg_notes_pane_g3

0xaa0f,	// (0x0007a098) notes_bg_pane_g1

0xaa17,	// (0x0007a0a0) notes_bg_pane_g4

0xaa1f,	// (0x0007a0a8) notes_bg_pane_g5

0xaa27,	// (0x0007a0b0) notes_bg_pane_g6

0xaa2f,	// (0x0007a0b8) notes_bg_pane_g7

0xaa37,	// (0x0007a0c0) notes_bg_pane_g8

0xaa3f,	// (0x0007a0c8) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0007e88f) notes_bg_pane_g

0x054b,	// (0x0006fbd4) list_notes_text_pane_ParamLimits

0x054b,	// (0x0006fbd4) list_notes_text_pane

0x2c12,	// (0x0007229b) list_notes_text_pane_g1

0xaa47,	// (0x0007a0d0) list_notes_text_pane_t1

0x2964,	// (0x00071fed) listscroll_cale_week_pane

0x2c49,	// (0x000722d2) bg_cale_heading_pane

0x2c65,	// (0x000722ee) bg_cale_pane_cp01

0x2c7e,	// (0x00072307) cale_week_corner_pane

0x2c94,	// (0x0007231d) cale_week_day_heading_pane

0x2cb0,	// (0x00072339) cale_week_scroll_pane_g1

0x2cc9,	// (0x00072352) cale_week_scroll_pane_g2

0x2cda,	// (0x00072363) cale_week_scroll_pane_g3

0x2ceb,	// (0x00072374) cale_week_scroll_pane_g4

0x2cfc,	// (0x00072385) cale_week_scroll_pane_g5

0x2d0d,	// (0x00072396) cale_week_scroll_pane_g6

0x2d1e,	// (0x000723a7) cale_week_scroll_pane_g7

0x2d2f,	// (0x000723b8) cale_week_scroll_pane_g8

0x2d40,	// (0x000723c9) cale_week_scroll_pane_g9

0x2d51,	// (0x000723da) cale_week_scroll_pane_g10

0x2d62,	// (0x000723eb) cale_week_scroll_pane_g11

0x2d73,	// (0x000723fc) cale_week_scroll_pane_g12

0x2d84,	// (0x0007240d) cale_week_scroll_pane_g13

0x2d9d,	// (0x00072426) cale_week_scroll_pane_g14

0x2db6,	// (0x0007243f) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0007e89e) cale_week_scroll_pane_g

0x2dcf,	// (0x00072458) cale_week_time_pane

0x2de0,	// (0x00072469) grid_cale_week_pane

0x2e0d,	// (0x00072496) scroll_pane_cp08

0x2e25,	// (0x000724ae) cell_cale_week_pane_ParamLimits

0x2e25,	// (0x000724ae) cell_cale_week_pane

0x2e6d,	// (0x000724f6) cale_week_day_heading_pane_t1

0x2e81,	// (0x0007250a) cale_week_day_heading_pane_t2

0x2e95,	// (0x0007251e) cale_week_day_heading_pane_t3

0x2ea9,	// (0x00072532) cale_week_day_heading_pane_t4

0x2ebd,	// (0x00072546) cale_week_day_heading_pane_t5

0x2ed1,	// (0x0007255a) cale_week_day_heading_pane_t6

0x2ee5,	// (0x0007256e) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0007e8bd) cale_week_day_heading_pane_t

0x2ef9,	// (0x00072582) bg_cale_side_pane

0x2f07,	// (0x00072590) cale_week_time_pane_t1

0x2f1f,	// (0x000725a8) cale_week_time_pane_t2

0x2f37,	// (0x000725c0) cale_week_time_pane_t3

0x2f4f,	// (0x000725d8) cale_week_time_pane_t4

0x2f67,	// (0x000725f0) cale_week_time_pane_t5

0x2f7f,	// (0x00072608) cale_week_time_pane_t6

0x2f97,	// (0x00072620) cale_week_time_pane_t7

0x2fb3,	// (0x0007263c) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0007e8cc) cale_week_time_pane_t

0x2fd3,	// (0x0007265c) cell_cale_week_pane_g2

0x2fe4,	// (0x0007266d) cell_cale_week_pane_g3_ParamLimits

0x2fe4,	// (0x0007266d) cell_cale_week_pane_g3

0x2ffc,	// (0x00072685) grid_highlight_pane_cp07

0x3004,	// (0x0007268d) listscroll_gms_pane

0x300e,	// (0x00072697) grid_gms_pane

0x3017,	// (0x000726a0) listscroll_gms_pane_g1

0x301f,	// (0x000726a8) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0007e8dd) listscroll_gms_pane_g

0x3027,	// (0x000726b0) scroll_pane_cp010

0x3032,	// (0x000726bb) cell_gms_pane_ParamLimits

0x3032,	// (0x000726bb) cell_gms_pane

0x304c,	// (0x000726d5) cell_gms_pane_g1

0x3054,	// (0x000726dd) cell_gms_pane_g2

0x305c,	// (0x000726e5) cell_gms_pane_g3

0x3065,	// (0x000726ee) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0007e8e2) cell_gms_pane_g

0x306e,	// (0x000726f7) grid_highlight_pane_cp09

0x544d,	// (0x00074ad6) phob_pre_status_pane_g1

0x5455,	// (0x00074ade) phob_pre_status_pane_g2

0x545d,	// (0x00074ae6) phob_pre_status_pane_g3

0x5465,	// (0x00074aee) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0007ecd1) phob_pre_status_pane_g

0x5475,	// (0x00074afe) phob_pre_status_pane_t1

0x5485,	// (0x00074b0e) phob_pre_status_pane_t2

0x5495,	// (0x00074b1e) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x0007ecdc) phob_pre_status_pane_t

0x239e,	// (0x00071a27) bg_list_pane_cp05

0x307e,	// (0x00072707) grid_vorec_pane

0xaa55,	// (0x0007a0de) vorec_t1

0xaa63,	// (0x0007a0ec) vorec_t2

0xaa71,	// (0x0007a0fa) vorec_t3

0xaa7f,	// (0x0007a108) vorec_t4

0xaa8d,	// (0x0007a116) vorec_t5

0xaa9b,	// (0x0007a124) vorec_t6

0x0006,

0xf262,	// (0x0007e8eb) vorec_t

0xaab7,	// (0x0007a140) wait_bar_pane_cp01

0x3088,	// (0x00072711) cell_vorec_pane_ParamLimits

0x3088,	// (0x00072711) cell_vorec_pane

0x309d,	// (0x00072726) cell_vorec_pane_g1

0x239e,	// (0x00071a27) grid_highlight_pane_cp05

0x30bd,	// (0x00072746) cams_zoom_pane

0x30cc,	// (0x00072755) image_vga_pane

0x30e6,	// (0x0007276f) main_camera_pane_g1

0x30f8,	// (0x00072781) main_camera_pane_g2

0x3108,	// (0x00072791) main_camera_pane_g3

0x311c,	// (0x000727a5) main_camera_pane_g4

0x3130,	// (0x000727b9) main_camera_pane_g5

0x3144,	// (0x000727cd) main_camera_pane_g6

0x3158,	// (0x000727e1) main_camera_pane_g7

0x0007,

0xf271,	// (0x0007e8fa) main_camera_pane_g

0x3178,	// (0x00072801) main_camera_pane_t1

0x318e,	// (0x00072817) main_camera_pane_t2

0x0001,

0xf282,	// (0x0007e90b) main_camera_pane_t

0x31cc,	// (0x00072855) cams_zoom_pane_cp_ParamLimits

0x31cc,	// (0x00072855) cams_zoom_pane_cp

0x31f4,	// (0x0007287d) image_cif_pane_ParamLimits

0x31f4,	// (0x0007287d) image_cif_pane

0x322f,	// (0x000728b8) image_subqcif_pane

0x3239,	// (0x000728c2) main_video_pane_g1_ParamLimits

0x3239,	// (0x000728c2) main_video_pane_g1

0x325d,	// (0x000728e6) main_video_pane_g2_ParamLimits

0x325d,	// (0x000728e6) main_video_pane_g2

0x3293,	// (0x0007291c) main_video_pane_g3_ParamLimits

0x3293,	// (0x0007291c) main_video_pane_g3

0x32c1,	// (0x0007294a) main_video_pane_g4_ParamLimits

0x32c1,	// (0x0007294a) main_video_pane_g4

0x32ef,	// (0x00072978) main_video_pane_g5_ParamLimits

0x32ef,	// (0x00072978) main_video_pane_g5

0x3307,	// (0x00072990) main_video_pane_g6_ParamLimits

0x3307,	// (0x00072990) main_video_pane_g6

0x0006,

0xf287,	// (0x0007e910) main_video_pane_g_ParamLimits

0xf287,	// (0x0007e910) main_video_pane_g

0x3332,	// (0x000729bb) main_video_pane_t1_ParamLimits

0x3332,	// (0x000729bb) main_video_pane_t1

0x337b,	// (0x00072a04) cams_zoom_pane_g1

0x3384,	// (0x00072a0d) cams_zoom_pane_g2

0x338d,	// (0x00072a16) cams_zoom_pane_g3

0x3396,	// (0x00072a1f) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0007e91f) cams_zoom_pane_g

0x33b3,	// (0x00072a3c) grid_cams_pane

0x33cd,	// (0x00072a56) linegrid_cams_pane

0x33e1,	// (0x00072a6a) cell_cams_pane_ParamLimits

0x33e1,	// (0x00072a6a) cell_cams_pane

0x3403,	// (0x00072a8c) cams_burst_image_pane

0x340b,	// (0x00072a94) cell_cams_pane_g1

0x239e,	// (0x00071a27) grid_highlight_pane_cp03

0x2a8e,	// (0x00072117) mp_bg_pane_g1

0x239e,	// (0x00071a27) bg_list_pane_cp03

0xc608,	// (0x0007bc91) bg_mp_pane

0xc610,	// (0x0007bc99) grid_mp_pane

0xc618,	// (0x0007bca1) media_player_g1

0xc622,	// (0x0007bcab) media_player_t1

0xc630,	// (0x0007bcb9) media_player_t2

0xc63e,	// (0x0007bcc7) media_player_t3

0xc64c,	// (0x0007bcd5) media_player_t4

0xc65a,	// (0x0007bce3) media_player_t5

0xc668,	// (0x0007bcf1) media_player_t6

0xc676,	// (0x0007bcff) media_player_t7

0x0006,

0xf632,	// (0x0007ecbb) media_player_t

0xc684,	// (0x0007bd0d) wait_bar_pane_cp02

0xf617,	// (0x0007eca0) main_usb_pane_t

0x5444,	// (0x00074acd) cell_mp_pane

0x2a8e,	// (0x00072117) cell_mp_pane_g1

0x239e,	// (0x00071a27) grid_highlight_pane_cp06

0x3413,	// (0x00072a9c) grid_skin_colour_pane

0x341b,	// (0x00072aa4) list_highlight_pane_cp03

0x3423,	// (0x00072aac) skin_g1

0x342d,	// (0x00072ab6) skin_t1

0x343c,	// (0x00072ac5) skin_t2

0x0001,

0xf2cb,	// (0x0007e954) skin_t

0x344a,	// (0x00072ad3) cell_skin_colour_pane_ParamLimits

0x344a,	// (0x00072ad3) cell_skin_colour_pane

0x346a,	// (0x00072af3) cell_skin_colour_pane_g1

0x34c0,	// (0x00072b49) call_video_g1_ParamLimits

0x34c0,	// (0x00072b49) call_video_g1

0x34dc,	// (0x00072b65) call_video_g2_ParamLimits

0x34dc,	// (0x00072b65) call_video_g2

0x0001,

0xf2d0,	// (0x0007e959) call_video_g_ParamLimits

0xf2d0,	// (0x0007e959) call_video_g

0x3512,	// (0x00072b9b) call_video_uplink_pane_cp1_ParamLimits

0x3512,	// (0x00072b9b) call_video_uplink_pane_cp1

0x3556,	// (0x00072bdf) call_video_uplink_pane_cp2

0x359a,	// (0x00072c23) video_down_crop_pane_ParamLimits

0x359a,	// (0x00072c23) video_down_crop_pane

0x3660,	// (0x00072ce9) video_down_pane_ParamLimits

0x3660,	// (0x00072ce9) video_down_pane

0x372c,	// (0x00072db5) video_down_subqcif_pane_ParamLimits

0x372c,	// (0x00072db5) video_down_subqcif_pane

0x3746,	// (0x00072dcf) video_down_subqcif_pane_cp_ParamLimits

0x3746,	// (0x00072dcf) video_down_subqcif_pane_cp

0x376c,	// (0x00072df5) im_reading_pane_ParamLimits

0x376c,	// (0x00072df5) im_reading_pane

0x377e,	// (0x00072e07) im_writing_pane_ParamLimits

0x377e,	// (0x00072e07) im_writing_pane

0x37a4,	// (0x00072e2d) im_reading_pane_t1

0x37e3,	// (0x00072e6c) list_im_pane

0x37f4,	// (0x00072e7d) scroll_pane_cp07

0x380d,	// (0x00072e96) im_writing_pane_t1_ParamLimits

0x380d,	// (0x00072e96) im_writing_pane_t1

0x3822,	// (0x00072eab) im_writing_pane_t2_ParamLimits

0x3822,	// (0x00072eab) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0007e963) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0007e963) im_writing_pane_t

0x239e,	// (0x00071a27) input_focus_pane_cp04

0x239e,	// (0x00071a27) input_focus_pane_cp05

0x383f,	// (0x00072ec8) list_im_single_pane_ParamLimits

0x383f,	// (0x00072ec8) list_im_single_pane

0x3858,	// (0x00072ee1) list_single_im_pane_t1

0x5404,	// (0x00074a8d) blid_accuracy_pane

0x540c,	// (0x00074a95) blid_compass_pane

0x5416,	// (0x00074a9f) main_location_t1

0x5426,	// (0x00074aaf) main_location_t2

0x5436,	// (0x00074abf) main_location_t3

0x0002,

0xf641,	// (0x0007ecca) main_location_t

0x239e,	// (0x00071a27) aid_levels_location

0x2a8e,	// (0x00072117) blid_accuracy_pane_g1

0x2a8e,	// (0x00072117) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0007e9c5) blid_accuracy_pane_g

0x3892,	// (0x00072f1b) wml_content_pane

0x38d0,	// (0x00072f59) wml_button_pane_ParamLimits

0x38d0,	// (0x00072f59) wml_button_pane

0x38e4,	// (0x00072f6d) wml_list_single_large_pane_ParamLimits

0x38e4,	// (0x00072f6d) wml_list_single_large_pane

0x38fd,	// (0x00072f86) wml_list_single_medium_pane_ParamLimits

0x38fd,	// (0x00072f86) wml_list_single_medium_pane

0x3917,	// (0x00072fa0) wml_list_single_small_pane_ParamLimits

0x3917,	// (0x00072fa0) wml_list_single_small_pane

0x3936,	// (0x00072fbf) wml_selection_box_pane_ParamLimits

0x3936,	// (0x00072fbf) wml_selection_box_pane

0x3949,	// (0x00072fd2) wml_list_single_pane_t1

0x3958,	// (0x00072fe1) wml_list_single_medium_pane_t1

0x3967,	// (0x00072ff0) wml_list_single_large_pane_t1

0x3976,	// (0x00072fff) input_focus_pane_cp02_ParamLimits

0x3976,	// (0x00072fff) input_focus_pane_cp02

0x3989,	// (0x00073012) wml_selection_box_pane_g1

0x3992,	// (0x0007301b) wml_selection_box_pane_t1_ParamLimits

0x3992,	// (0x0007301b) wml_selection_box_pane_t1

0x25f9,	// (0x00071c82) bg_wml_button_pane_ParamLimits

0x25f9,	// (0x00071c82) bg_wml_button_pane

0x39aa,	// (0x00073033) wml_button_pane_g1

0x39b2,	// (0x0007303b) wml_button_pane_t1

0x39aa,	// (0x00073033) wml_button_bg_pane_g1

0x39c2,	// (0x0007304b) wml_button_bg_pane_g2

0x39ca,	// (0x00073053) wml_button_bg_pane_g3

0x39d2,	// (0x0007305b) wml_button_bg_pane_g4

0x39da,	// (0x00073063) wml_button_bg_pane_g5

0x39e2,	// (0x0007306b) wml_button_bg_pane_g6

0x39ea,	// (0x00073073) wml_button_bg_pane_g7

0x39f2,	// (0x0007307b) wml_button_bg_pane_g8

0x39fa,	// (0x00073083) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0007e968) wml_button_bg_pane_g

0x3a02,	// (0x0007308b) bg_list_pane_cp02

0x3a0c,	// (0x00073095) mce_header_pane_ParamLimits

0x3a0c,	// (0x00073095) mce_header_pane

0x3a22,	// (0x000730ab) mce_icon_pane

0x3a22,	// (0x000730ab) mce_image_pane

0x3a2b,	// (0x000730b4) mce_text_pane_ParamLimits

0x3a2b,	// (0x000730b4) mce_text_pane

0x3a3e,	// (0x000730c7) scroll_pane_cp03

0x38c8,	// (0x00072f51) scroll_pane_cp04

0x3a48,	// (0x000730d1) scroll_pane_cp05_ParamLimits

0x3a48,	// (0x000730d1) scroll_pane_cp05

0x3a54,	// (0x000730dd) mce_header_field_pane_ParamLimits

0x3a54,	// (0x000730dd) mce_header_field_pane

0x3a6d,	// (0x000730f6) mce_header_field_pane_2_ParamLimits

0x3a6d,	// (0x000730f6) mce_header_field_pane_2

0x3a83,	// (0x0007310c) mce_header_field_pane_3

0x3a8b,	// (0x00073114) list_single_mce_message_pane_ParamLimits

0x3a8b,	// (0x00073114) list_single_mce_message_pane

0x3aa7,	// (0x00073130) list_single_mce_smart_pane_ParamLimits

0x3aa7,	// (0x00073130) list_single_mce_smart_pane

0x3ace,	// (0x00073157) input_focus_pane_cp03

0xab7d,	// (0x0007a206) list_header_data_pane

0x3ad7,	// (0x00073160) mce_header_field_pane_t1

0x3ae7,	// (0x00073170) list_single_mce_header_pane_ParamLimits

0x3ae7,	// (0x00073170) list_single_mce_header_pane

0xab85,	// (0x0007a20e) list_single_mce_header_pane_t1

0xab94,	// (0x0007a21d) list_single_mce_message_pane_g1

0xab9c,	// (0x0007a225) list_single_mce_message_pane_t1

0x3b19,	// (0x000731a2) bg_cale_heading_pane_cp01_ParamLimits

0x3b19,	// (0x000731a2) bg_cale_heading_pane_cp01

0xabaa,	// (0x0007a233) bg_cale_pane_cp02_ParamLimits

0xabaa,	// (0x0007a233) bg_cale_pane_cp02

0x3b4c,	// (0x000731d5) cale_month_corner_pane

0x3b62,	// (0x000731eb) cale_month_day_heading_pane_ParamLimits

0x3b62,	// (0x000731eb) cale_month_day_heading_pane

0x3b95,	// (0x0007321e) cale_month_pane_g1_ParamLimits

0x3b95,	// (0x0007321e) cale_month_pane_g1

0x3bc1,	// (0x0007324a) cale_month_pane_g2_ParamLimits

0x3bc1,	// (0x0007324a) cale_month_pane_g2

0x3be2,	// (0x0007326b) cale_month_pane_g3_ParamLimits

0x3be2,	// (0x0007326b) cale_month_pane_g3

0x3c1e,	// (0x000732a7) cale_month_pane_g4_ParamLimits

0x3c1e,	// (0x000732a7) cale_month_pane_g4

0x3c5a,	// (0x000732e3) cale_month_pane_g5_ParamLimits

0x3c5a,	// (0x000732e3) cale_month_pane_g5

0x3c96,	// (0x0007331f) cale_month_pane_g6_ParamLimits

0x3c96,	// (0x0007331f) cale_month_pane_g6

0x3cd2,	// (0x0007335b) cale_month_pane_g7_ParamLimits

0x3cd2,	// (0x0007335b) cale_month_pane_g7

0x3d0e,	// (0x00073397) cale_month_pane_g8_ParamLimits

0x3d0e,	// (0x00073397) cale_month_pane_g8

0x3d4a,	// (0x000733d3) cale_month_pane_g9_ParamLimits

0x3d4a,	// (0x000733d3) cale_month_pane_g9

0x3d80,	// (0x00073409) cale_month_pane_g10_ParamLimits

0x3d80,	// (0x00073409) cale_month_pane_g10

0x3daa,	// (0x00073433) cale_month_pane_g11_ParamLimits

0x3daa,	// (0x00073433) cale_month_pane_g11

0x3dd4,	// (0x0007345d) cale_month_pane_g12_ParamLimits

0x3dd4,	// (0x0007345d) cale_month_pane_g12

0x3e02,	// (0x0007348b) cale_month_pane_g13_ParamLimits

0x3e02,	// (0x0007348b) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0007e97b) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0007e97b) cale_month_pane_g

0x3e30,	// (0x000734b9) cale_month_week_pane

0x3e41,	// (0x000734ca) grid_cale_month_pane_ParamLimits

0x3e41,	// (0x000734ca) grid_cale_month_pane

0x3e6f,	// (0x000734f8) cale_month_day_heading_pane_t1

0x3ecd,	// (0x00073556) cale_month_day_heading_pane_t2

0x3f32,	// (0x000735bb) cale_month_day_heading_pane_t3

0x3f97,	// (0x00073620) cale_month_day_heading_pane_t4

0x3ffc,	// (0x00073685) cale_month_day_heading_pane_t5

0x4061,	// (0x000736ea) cale_month_day_heading_pane_t6

0x40c6,	// (0x0007374f) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0007e996) cale_month_day_heading_pane_t

0x2ef9,	// (0x00072582) bg_cale_side_pane_cp01

0x412b,	// (0x000737b4) cale_month_week_pane_t1

0x4142,	// (0x000737cb) cale_month_week_pane_t2

0x4159,	// (0x000737e2) cale_month_week_pane_t3

0x4170,	// (0x000737f9) cale_month_week_pane_t4

0x4187,	// (0x00073810) cale_month_week_pane_t5

0x419e,	// (0x00073827) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0007e9a5) cale_month_week_pane_t

0x41bd,	// (0x00073846) cell_cale_month_pane_ParamLimits

0x41bd,	// (0x00073846) cell_cale_month_pane

0xac09,	// (0x0007a292) cell_cale_month_pane_g1

0x426b,	// (0x000738f4) cell_cale_month_pane_t1_ParamLimits

0x426b,	// (0x000738f4) cell_cale_month_pane_t1

0x2ffc,	// (0x00072685) grid_highlight_pane_cp08

0x2a8e,	// (0x00072117) main_smil_g1

0x4287,	// (0x00073910) smil_status_pane

0xac15,	// (0x0007a29e) smil_text_pane

0xc526,	// (0x0007bbaf) bg_popup_call3_rect_pane_g8

0xc52e,	// (0x0007bbb7) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0007ec5e) bg_popup_call3_rect_pane_g

0xec09,	// (0x0007e292) smil_status_volume_pane_g1

0xac1f,	// (0x0007a2a8) smil_status_pane_t1

0xec3c,	// (0x0007e2c5) volume_smil_pane

0xac36,	// (0x0007a2bf) list_smil_text_pane

0x429c,	// (0x00073925) scroll_pane_cp011

0x42a7,	// (0x00073930) smil_text_list_pane_t1_ParamLimits

0x42a7,	// (0x00073930) smil_text_list_pane_t1

0xac40,	// (0x0007a2c9) aid_volume_smil_ParamLimits

0xac40,	// (0x0007a2c9) aid_volume_smil

0x2a8e,	// (0x00072117) smil_volume_pane_g1

0x2a8e,	// (0x00072117) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0007e9c5) smil_volume_pane_g

0x2964,	// (0x00071fed) listscroll_cale_day_pane

0xac62,	// (0x0007a2eb) bg_cale_pane

0xac7a,	// (0x0007a303) list_cale_pane

0xac8b,	// (0x0007a314) scroll_pane_cp09

0xac9c,	// (0x0007a325) cale_bg_pane_g1

0xaca4,	// (0x0007a32d) cale_bg_pane_g2

0xacac,	// (0x0007a335) cale_bg_pane_g3

0xacb4,	// (0x0007a33d) cale_bg_pane_g4

0xacbc,	// (0x0007a345) cale_bg_pane_g5

0xacc4,	// (0x0007a34d) cale_bg_pane_g6

0xaccc,	// (0x0007a355) cale_bg_pane_g7

0xacd4,	// (0x0007a35d) cale_bg_pane_g8

0xacdc,	// (0x0007a365) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0007e9ca) cale_bg_pane_g

0x42fc,	// (0x00073985) list_cale_time_pane_ParamLimits

0x42fc,	// (0x00073985) list_cale_time_pane

0x4311,	// (0x0007399a) list_cale_time_pane_g1_ParamLimits

0x4311,	// (0x0007399a) list_cale_time_pane_g1

0xace4,	// (0x0007a36d) list_cale_time_pane_g2_ParamLimits

0xace4,	// (0x0007a36d) list_cale_time_pane_g2

0x431d,	// (0x000739a6) list_cale_time_pane_g3_ParamLimits

0x431d,	// (0x000739a6) list_cale_time_pane_g3

0x432b,	// (0x000739b4) list_cale_time_pane_g4_ParamLimits

0x432b,	// (0x000739b4) list_cale_time_pane_g4

0x4339,	// (0x000739c2) list_cale_time_pane_g5_ParamLimits

0x4339,	// (0x000739c2) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0007e9dd) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0007e9dd) list_cale_time_pane_g

0x4347,	// (0x000739d0) list_cale_time_pane_t1_ParamLimits

0x4347,	// (0x000739d0) list_cale_time_pane_t1

0x436f,	// (0x000739f8) list_cale_time_pane_t2_ParamLimits

0x436f,	// (0x000739f8) list_cale_time_pane_t2

0x468b,	// (0x00073d14) aid_blid_cardinal_pane

0x46cd,	// (0x00073d56) compass_pane_t4

0x4397,	// (0x00073a20) list_cale_time_pane_t4_ParamLimits

0x4397,	// (0x00073a20) list_cale_time_pane_t4

0x46db,	// (0x00073d64) compass_pane_t5

0x46eb,	// (0x00073d74) compass_pane_t6

0x46f9,	// (0x00073d82) compass_pane_t7

0xb1ca,	// (0x0007a853) navi_pane_cc_t1

0xb331,	// (0x0007a9ba) aid_phob_thumbnail_center_pane

0x4dca,	// (0x00074453) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0007e9ea) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0007e9ea) list_cale_time_pane_t

0x1fd1,	// (0x0007165a) bg_popup_window_pane_cp02_ParamLimits

0x1fd1,	// (0x0007165a) bg_popup_window_pane_cp02

0xacfe,	// (0x0007a387) heading_pane_cp01_ParamLimits

0xacfe,	// (0x0007a387) heading_pane_cp01

0xad0a,	// (0x0007a393) loc_req_pane_ParamLimits

0xad0a,	// (0x0007a393) loc_req_pane

0xad1a,	// (0x0007a3a3) loc_type_pane_ParamLimits

0xad1a,	// (0x0007a3a3) loc_type_pane

0xad2c,	// (0x0007a3b5) loc_type_pane_t1_ParamLimits

0xad2c,	// (0x0007a3b5) loc_type_pane_t1

0xad3e,	// (0x0007a3c7) loc_type_pane_t2_ParamLimits

0xad3e,	// (0x0007a3c7) loc_type_pane_t2

0xad50,	// (0x0007a3d9) loc_type_pane_t3_ParamLimits

0xad50,	// (0x0007a3d9) loc_type_pane_t3

0x0002,

0xf368,	// (0x0007e9f1) loc_type_pane_t_ParamLimits

0xf368,	// (0x0007e9f1) loc_type_pane_t

0xad62,	// (0x0007a3eb) list_loc_req_pane

0xad6c,	// (0x0007a3f5) scroll_pane_cp012

0x43bf,	// (0x00073a48) list_single_loc_request_popup_menu_pane_ParamLimits

0x43bf,	// (0x00073a48) list_single_loc_request_popup_menu_pane

0xad77,	// (0x0007a400) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xad77,	// (0x0007a400) list_single_loc_request_popup_menu_pane_g1

0xad83,	// (0x0007a40c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xad83,	// (0x0007a40c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0007e9f8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0007e9f8) list_single_loc_request_popup_menu_pane_g

0xad8f,	// (0x0007a418) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xad8f,	// (0x0007a418) list_single_loc_request_popup_menu_pane_t1

0x25f9,	// (0x00071c82) bg_popup_window_pane_cp03_ParamLimits

0x25f9,	// (0x00071c82) bg_popup_window_pane_cp03

0xeac6,	// (0x0007e14f) heading_loc_req_pane_ParamLimits

0xeac6,	// (0x0007e14f) heading_loc_req_pane

0x43cc,	// (0x00073a55) popup_dyc_status_message_window_g1_ParamLimits

0x43cc,	// (0x00073a55) popup_dyc_status_message_window_g1

0x43e0,	// (0x00073a69) popup_dyc_status_message_window_t1_ParamLimits

0x43e0,	// (0x00073a69) popup_dyc_status_message_window_t1

0x43f5,	// (0x00073a7e) popup_dyc_status_message_window_t2_ParamLimits

0x43f5,	// (0x00073a7e) popup_dyc_status_message_window_t2

0x440a,	// (0x00073a93) popup_dyc_status_message_window_t3_ParamLimits

0x440a,	// (0x00073a93) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0007e9fd) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0007e9fd) popup_dyc_status_message_window_t

0x239e,	// (0x00071a27) bg_heading_pane_cp01

0xada5,	// (0x0007a42e) heading_loc_req_pane_g1

0xadad,	// (0x0007a436) heading_loc_req_pane_g2

0xadb5,	// (0x0007a43e) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0007ea04) heading_loc_req_pane_g

0xadbd,	// (0x0007a446) heading_loc_req_pane_t1

0xae44,	// (0x0007a4cd) bg_popup_sub_pane_cp01_ParamLimits

0xae44,	// (0x0007a4cd) bg_popup_sub_pane_cp01

0xae52,	// (0x0007a4db) popup_cale_events_window_g1_ParamLimits

0xae52,	// (0x0007a4db) popup_cale_events_window_g1

0xae72,	// (0x0007a4fb) popup_cale_events_window_g2_ParamLimits

0xae72,	// (0x0007a4fb) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0007ea38) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0007ea38) popup_cale_events_window_g

0xae92,	// (0x0007a51b) popup_cale_events_window_t1_ParamLimits

0xae92,	// (0x0007a51b) popup_cale_events_window_t1

0xaea4,	// (0x0007a52d) popup_cale_events_window_t2_ParamLimits

0xaea4,	// (0x0007a52d) popup_cale_events_window_t2

0xaee2,	// (0x0007a56b) popup_cale_events_window_t3_ParamLimits

0xaee2,	// (0x0007a56b) popup_cale_events_window_t3

0xaf1c,	// (0x0007a5a5) popup_cale_events_window_t4_ParamLimits

0xaf1c,	// (0x0007a5a5) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0007ea3d) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0007ea3d) popup_cale_events_window_t

0x443e,	// (0x00073ac7) call_type_pane

0x444e,	// (0x00073ad7) popup_call_status_window_g1

0x4462,	// (0x00073aeb) popup_call_status_window_g2

0x4476,	// (0x00073aff) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0007ea46) popup_call_status_window_g

0xaf52,	// (0x0007a5db) call_type_pane_g1

0xaf5b,	// (0x0007a5e4) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0007ea4d) call_type_pane_g

0x239e,	// (0x00071a27) bg_popup_sub_pane_cp02

0xaf64,	// (0x0007a5ed) listscroll_popup_wml_pane

0xaf6c,	// (0x0007a5f5) list_wml_pane

0xaf76,	// (0x0007a5ff) scroll_pane_cp013

0xaf81,	// (0x0007a60a) list_single_graphic_popup_wml_pane_ParamLimits

0xaf81,	// (0x0007a60a) list_single_graphic_popup_wml_pane

0x2a8e,	// (0x00072117) list_single_graphic_popup_wml_pane_g1

0xaf95,	// (0x0007a61e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0007ea52) list_single_graphic_popup_wml_pane_g

0xaf9d,	// (0x0007a626) list_single_graphic_popup_wml_pane_t1

0xafb3,	// (0x0007a63c) aid_call_pane

0x25f1,	// (0x00071c7a) popup_clock_analogue_window_g1

0x25f1,	// (0x00071c7a) popup_clock_analogue_window_g2

0xafbb,	// (0x0007a644) popup_clock_analogue_window_g3

0xafbb,	// (0x0007a644) popup_clock_analogue_window_g4

0x2a8e,	// (0x00072117) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0007ea57) popup_clock_analogue_window_g

0xafc3,	// (0x0007a64c) popup_clock_analogue_window_t1

0xafd1,	// (0x0007a65a) clock_digital_number_pane_ParamLimits

0xafd1,	// (0x0007a65a) clock_digital_number_pane

0xafdd,	// (0x0007a666) clock_digital_number_pane_cp02_ParamLimits

0xafdd,	// (0x0007a666) clock_digital_number_pane_cp02

0xafe9,	// (0x0007a672) clock_digital_number_pane_cp03_ParamLimits

0xafe9,	// (0x0007a672) clock_digital_number_pane_cp03

0xaff5,	// (0x0007a67e) clock_digital_number_pane_cp04_ParamLimits

0xaff5,	// (0x0007a67e) clock_digital_number_pane_cp04

0xb001,	// (0x0007a68a) clock_digital_separator_pane_ParamLimits

0xb001,	// (0x0007a68a) clock_digital_separator_pane

0xb00d,	// (0x0007a696) popup_clock_digital_window_t1

0x2a8e,	// (0x00072117) clock_digital_number_pane_g1

0x2a8e,	// (0x00072117) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0007e9c5) clock_digital_number_pane_g

0x2a8e,	// (0x00072117) clock_digital_separator_pane_g1

0x2a8e,	// (0x00072117) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0007e9c5) clock_digital_separator_pane_g

0x239e,	// (0x00071a27) bg_popup_window_pane_cp04

0xb02a,	// (0x0007a6b3) heading_pane_cp03

0xb032,	// (0x0007a6bb) listscroll_popup_gms_pane

0xb03a,	// (0x0007a6c3) grid_large_graphic_popup_pane

0xb044,	// (0x0007a6cd) listscroll_popup_gms_pane_g1

0xb04c,	// (0x0007a6d5) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0007ea62) listscroll_popup_gms_pane_g

0x38c8,	// (0x00072f51) scroll_pane_cp014

0x4486,	// (0x00073b0f) cell_large_graphic_popup_pane_ParamLimits

0x4486,	// (0x00073b0f) cell_large_graphic_popup_pane

0x449e,	// (0x00073b27) cell_large_graphic_popup_pane_g1_ParamLimits

0x449e,	// (0x00073b27) cell_large_graphic_popup_pane_g1

0xb054,	// (0x0007a6dd) cell_large_graphic_popup_pane_g2_ParamLimits

0xb054,	// (0x0007a6dd) cell_large_graphic_popup_pane_g2

0xb060,	// (0x0007a6e9) cell_large_graphic_popup_pane_g3_ParamLimits

0xb060,	// (0x0007a6e9) cell_large_graphic_popup_pane_g3

0xb06d,	// (0x0007a6f6) cell_large_graphic_popup_pane_g4_ParamLimits

0xb06d,	// (0x0007a6f6) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0007ea67) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0007ea67) cell_large_graphic_popup_pane_g

0xb07d,	// (0x0007a706) grid_highlight_pane_cp010

0x2a8e,	// (0x00072117) bg_popup_call_pane_g1

0xb087,	// (0x0007a710) list_single_graphic_popup_conf_pane_ParamLimits

0xb087,	// (0x0007a710) list_single_graphic_popup_conf_pane

0xb099,	// (0x0007a722) list_highlight_pane_cp01

0xb0a2,	// (0x0007a72b) list_single_graphic_popup_conf_pane_g1

0xb0aa,	// (0x0007a733) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0007ea70) list_single_graphic_popup_conf_pane_g

0xb0b2,	// (0x0007a73b) list_single_graphic_popup_conf_pane_t1

0xb0c0,	// (0x0007a749) linegrid_cams_pane_g1

0x44aa,	// (0x00073b33) linegrid_cams_pane_g2

0x305c,	// (0x000726e5) linegrid_cams_pane_g3

0xb0c9,	// (0x0007a752) linegrid_cams_pane_g4

0x44b3,	// (0x00073b3c) linegrid_cams_pane_g5

0x44bc,	// (0x00073b45) linegrid_cams_pane_g6

0x3065,	// (0x000726ee) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0007ea75) linegrid_cams_pane_g

0xb0d2,	// (0x0007a75b) popup_clock_analogue_window

0xb0d2,	// (0x0007a75b) popup_clock_digital_window

0x239e,	// (0x00071a27) popup_phob_thumbnail_window

0x2a8e,	// (0x00072117) call_video_uplink_pane_g1

0xb0db,	// (0x0007a764) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0007ea84) call_video_uplink_pane_g

0xb0e3,	// (0x0007a76c) video_uplink_pane

0xb0eb,	// (0x0007a774) mce_image_pane_g1

0x44c7,	// (0x00073b50) mce_image_pane_g2

0x44d1,	// (0x00073b5a) mce_image_pane_g3

0x44db,	// (0x00073b64) mce_image_pane_g4

0x44e3,	// (0x00073b6c) mce_image_pane_g5

0x0004,

0xf400,	// (0x0007ea89) mce_image_pane_g

0xb0f5,	// (0x0007a77e) control_top_pane_stacon_cp01_ParamLimits

0xb0f5,	// (0x0007a77e) control_top_pane_stacon_cp01

0xb109,	// (0x0007a792) uni_indicator_pane_stacon_cp01_ParamLimits

0xb109,	// (0x0007a792) uni_indicator_pane_stacon_cp01

0xb11a,	// (0x0007a7a3) bg_popup_sub_pane_cp03

0x44eb,	// (0x00073b74) chi_dic_find_pane

0x44f3,	// (0x00073b7c) listscroll_chi_dic_pane

0x44fc,	// (0x00073b85) main_pane_chidic_g1

0x450f,	// (0x00073b98) chi_dic_find_pane_t1

0xb124,	// (0x0007a7ad) find_chidic_pane

0xb12d,	// (0x0007a7b6) chi_dic_list_pane_ParamLimits

0xb12d,	// (0x0007a7b6) chi_dic_list_pane

0xb13e,	// (0x0007a7c7) scroll_pane_cp020

0x451d,	// (0x00073ba6) find_chidic_pane_t1

0x239e,	// (0x00071a27) input_focus_pane_cp06

0x452c,	// (0x00073bb5) list_chi_dic_pane_ParamLimits

0x452c,	// (0x00073bb5) list_chi_dic_pane

0x453e,	// (0x00073bc7) list_chi_dic_pane_t1_ParamLimits

0x453e,	// (0x00073bc7) list_chi_dic_pane_t1

0x239e,	// (0x00071a27) list_highlight_pane_cp020

0xb146,	// (0x0007a7cf) bg_cale_heading_pane_g1

0x4551,	// (0x00073bda) bg_cale_heading_pane_g2

0x4559,	// (0x00073be2) bg_cale_heading_pane_g3

0x4561,	// (0x00073bea) bg_cale_heading_pane_g4

0x4569,	// (0x00073bf2) bg_cale_heading_pane_g5

0x4571,	// (0x00073bfa) bg_cale_heading_pane_g6

0x4579,	// (0x00073c02) bg_cale_heading_pane_g7

0x4581,	// (0x00073c0a) bg_cale_heading_pane_g8

0x4589,	// (0x00073c12) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0007ea94) bg_cale_heading_pane_g

0xb146,	// (0x0007a7cf) bg_cale_side_pane_g1

0x4591,	// (0x00073c1a) bg_cale_side_pane_g2

0x459b,	// (0x00073c24) bg_cale_side_pane_g3

0x45a5,	// (0x00073c2e) bg_cale_side_pane_g4

0x45af,	// (0x00073c38) bg_cale_side_pane_g5

0x45b9,	// (0x00073c42) bg_cale_side_pane_g6

0x45c3,	// (0x00073c4c) bg_cale_side_pane_g7

0x45cd,	// (0x00073c56) bg_cale_side_pane_g8

0x45d5,	// (0x00073c5e) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0007eaa7) bg_cale_side_pane_g

0x45dd,	// (0x00073c66) popup_call_status_window_ParamLimits

0x45dd,	// (0x00073c66) popup_call_status_window

0xb14e,	// (0x0007a7d7) stacon_top_pane

0xb156,	// (0x0007a7df) status_pane_ParamLimits

0xb156,	// (0x0007a7df) status_pane

0xb16b,	// (0x0007a7f4) status_small_pane

0xb173,	// (0x0007a7fc) control_pane

0x239e,	// (0x00071a27) stacon_bottom_pane

0xb17b,	// (0x0007a804) list_single_mce_smart_pane_t1_ParamLimits

0xb17b,	// (0x0007a804) list_single_mce_smart_pane_t1

0xb18e,	// (0x0007a817) list_single_mce_smart_pane_t2_ParamLimits

0xb18e,	// (0x0007a817) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0007eaba) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0007eaba) list_single_mce_smart_pane_t

0x462a,	// (0x00073cb3) compass_pane

0x4635,	// (0x00073cbe) main_location2_pane_t1

0x464b,	// (0x00073cd4) main_location2_pane_t2

0x4661,	// (0x00073cea) main_location2_pane_t3

0x0003,

0xf436,	// (0x0007eabf) main_location2_pane_t

0xb1ad,	// (0x0007a836) compass_pane_g1_ParamLimits

0xb1ad,	// (0x0007a836) compass_pane_g1

0x46af,	// (0x00073d38) compass_pane_t1

0x46be,	// (0x00073d47) compass_pane_t2

0x0005,

0xf43f,	// (0x0007eac8) compass_pane_t

0x4709,	// (0x00073d92) text_secondary_cp61

0xb1c1,	// (0x0007a84a) navi_pane_cams_g5

0xb1e4,	// (0x0007a86d) navi_pane_im_t1

0xb1f2,	// (0x0007a87b) navi_pane_mp_g1_ParamLimits

0xb1f2,	// (0x0007a87b) navi_pane_mp_g1

0xb206,	// (0x0007a88f) navi_pane_mp_g2_ParamLimits

0xb206,	// (0x0007a88f) navi_pane_mp_g2

0xb212,	// (0x0007a89b) navi_pane_mp_g3_ParamLimits

0xb212,	// (0x0007a89b) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0007eadc) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0007eadc) navi_pane_mp_g

0xb21e,	// (0x0007a8a7) navi_pane_mp_t1

0xb22c,	// (0x0007a8b5) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0007eae3) navi_pane_mp_t

0xb268,	// (0x0007a8f1) navi_pane_vt_g1

0xb21e,	// (0x0007a8a7) navi_pane_vt_t1

0xb270,	// (0x0007a8f9) navi_slider_pane

0xb278,	// (0x0007a901) zooming_pane

0xb280,	// (0x0007a909) navi_slider_pane_g1

0xb289,	// (0x0007a912) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0007eaea) navi_slider_pane_g

0xb2b6,	// (0x0007a93f) aid_levels_zoom

0xb2be,	// (0x0007a947) zooming_pane_g1

0xb2c6,	// (0x0007a94f) zooming_pane_g2

0xb2c6,	// (0x0007a94f) zooming_pane_g3

0x0002,

0xf470,	// (0x0007eaf9) zooming_pane_g

0xb2ce,	// (0x0007a957) level_10_zoom

0xb2d7,	// (0x0007a960) level_11_zoom

0xb2e0,	// (0x0007a969) level_1_zoom

0xb2e9,	// (0x0007a972) level_2_zoom

0xb2f2,	// (0x0007a97b) level_3_zoom

0xb2fb,	// (0x0007a984) level_4_zoom

0xb304,	// (0x0007a98d) level_5_zoom

0xb30d,	// (0x0007a996) level_6_zoom

0xb316,	// (0x0007a99f) level_7_zoom

0xb31f,	// (0x0007a9a8) level_8_zoom

0xb328,	// (0x0007a9b1) level_9_zoom

0xb339,	// (0x0007a9c2) popup_phob_thumbnail_window_g1

0xb341,	// (0x0007a9ca) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0007eb00) popup_phob_thumbnail_window_g

0xead2,	// (0x0007e15b) level_1_location

0xeada,	// (0x0007e163) level_2_location

0xeae2,	// (0x0007e16b) level_3_location

0xeaea,	// (0x0007e173) level_4_location

0xb278,	// (0x0007a901) level_5_location

0x4834,	// (0x00073ebd) mce_icon_pane_g1

0x483c,	// (0x00073ec5) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0007eb05) mce_icon_pane_g

0x4844,	// (0x00073ecd) main_mup_pane_g1_ParamLimits

0x4844,	// (0x00073ecd) main_mup_pane_g1

0x485a,	// (0x00073ee3) main_mup_pane_g2_ParamLimits

0x485a,	// (0x00073ee3) main_mup_pane_g2

0x4872,	// (0x00073efb) main_mup_pane_g3_ParamLimits

0x4872,	// (0x00073efb) main_mup_pane_g3

0x488a,	// (0x00073f13) main_mup_pane_g4_ParamLimits

0x488a,	// (0x00073f13) main_mup_pane_g4

0x489c,	// (0x00073f25) main_mup_pane_g5_ParamLimits

0x489c,	// (0x00073f25) main_mup_pane_g5

0x48b8,	// (0x00073f41) main_mup_pane_g6_ParamLimits

0x48b8,	// (0x00073f41) main_mup_pane_g6

0x48d2,	// (0x00073f5b) main_mup_pane_g7_ParamLimits

0x48d2,	// (0x00073f5b) main_mup_pane_g7

0x48f0,	// (0x00073f79) main_mup_pane_g8_ParamLimits

0x48f0,	// (0x00073f79) main_mup_pane_g8

0x490e,	// (0x00073f97) main_mup_pane_g9_ParamLimits

0x490e,	// (0x00073f97) main_mup_pane_g9

0x492a,	// (0x00073fb3) main_mup_pane_g10_ParamLimits

0x492a,	// (0x00073fb3) main_mup_pane_g10

0x4948,	// (0x00073fd1) main_mup_pane_g11_ParamLimits

0x4948,	// (0x00073fd1) main_mup_pane_g11

0x4962,	// (0x00073feb) main_mup_pane_g12_ParamLimits

0x4962,	// (0x00073feb) main_mup_pane_g12

0x4978,	// (0x00074001) main_mup_pane_g13_ParamLimits

0x4978,	// (0x00074001) main_mup_pane_g13

0x000c,

0xf481,	// (0x0007eb0a) main_mup_pane_g_ParamLimits

0xf481,	// (0x0007eb0a) main_mup_pane_g

0x498c,	// (0x00074015) main_mup_pane_t1_ParamLimits

0x498c,	// (0x00074015) main_mup_pane_t1

0x49a8,	// (0x00074031) main_mup_pane_t2_ParamLimits

0x49a8,	// (0x00074031) main_mup_pane_t2

0x49c0,	// (0x00074049) main_mup_pane_t3_ParamLimits

0x49c0,	// (0x00074049) main_mup_pane_t3

0x49d8,	// (0x00074061) main_mup_pane_t4_ParamLimits

0x49d8,	// (0x00074061) main_mup_pane_t4

0x49f6,	// (0x0007407f) main_mup_pane_t5_ParamLimits

0x49f6,	// (0x0007407f) main_mup_pane_t5

0x4a0b,	// (0x00074094) main_mup_pane_t6_ParamLimits

0x4a0b,	// (0x00074094) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0007eb25) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0007eb25) main_mup_pane_t

0x4a1d,	// (0x000740a6) mup_progress_pane_ParamLimits

0x4a1d,	// (0x000740a6) mup_progress_pane

0x4a29,	// (0x000740b2) mup_visualizer_pane_ParamLimits

0x4a29,	// (0x000740b2) mup_visualizer_pane

0x4a5d,	// (0x000740e6) mup_volume_pane_ParamLimits

0x4a5d,	// (0x000740e6) mup_volume_pane

0xb349,	// (0x0007a9d2) mup_visualizer_pane_g1_ParamLimits

0xb349,	// (0x0007a9d2) mup_visualizer_pane_g1

0xb349,	// (0x0007a9d2) mup_visualizer_pane_g2_ParamLimits

0xb349,	// (0x0007a9d2) mup_visualizer_pane_g2

0xb1ad,	// (0x0007a836) mup_visualizer_pane_g3_ParamLimits

0xb1ad,	// (0x0007a836) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0007eb32) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0007eb32) mup_visualizer_pane_g

0x2a8e,	// (0x00072117) mup_volume_pane_g1

0xb35f,	// (0x0007a9e8) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0007eb39) mup_volume_pane_g

0x2a8e,	// (0x00072117) mup_progress_pane_g1

0xb368,	// (0x0007a9f1) mup_progress_pane_g2

0xb371,	// (0x0007a9fa) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0007eb3e) mup_progress_pane_g

0x239e,	// (0x00071a27) bg_popup_window_pane_cp05

0xb37a,	// (0x0007aa03) heading_pane_cp02_ParamLimits

0xb37a,	// (0x0007aa03) heading_pane_cp02

0xb396,	// (0x0007aa1f) list_popup_blid_pane

0xb39e,	// (0x0007aa27) list_blid_sat_info_pane_ParamLimits

0xb39e,	// (0x0007aa27) list_blid_sat_info_pane

0xb3b1,	// (0x0007aa3a) list_blid_sat_info_pane_g1

0xb3b9,	// (0x0007aa42) list_blid_sat_info_pane_t1

0x4b87,	// (0x00074210) mup_equalizer_pane_ParamLimits

0x4b87,	// (0x00074210) mup_equalizer_pane

0x4ba8,	// (0x00074231) mup_equalizer_pane_cp1_ParamLimits

0x4ba8,	// (0x00074231) mup_equalizer_pane_cp1

0x4bc9,	// (0x00074252) mup_equalizer_pane_cp2_ParamLimits

0x4bc9,	// (0x00074252) mup_equalizer_pane_cp2

0x4bee,	// (0x00074277) mup_equalizer_pane_cp3_ParamLimits

0x4bee,	// (0x00074277) mup_equalizer_pane_cp3

0x4c17,	// (0x000742a0) mup_equalizer_pane_cp4_ParamLimits

0x4c17,	// (0x000742a0) mup_equalizer_pane_cp4

0x4c40,	// (0x000742c9) mup_equalizer_pane_cp5

0x4c58,	// (0x000742e1) mup_equalizer_pane_cp6

0x4c70,	// (0x000742f9) mup_equalizer_pane_cp7

0xc5a6,	// (0x0007bc2f) bg_popup_call_poc_act_pane_g9

0xc5ae,	// (0x0007bc37) bg_popup_call_poc_act_pane_g10

0xc5b6,	// (0x0007bc3f) bg_popup_call_poc_act_pane_g11

0x000a,

0x25f9,	// (0x00071c82) mup_scale_pane

0x2a8e,	// (0x00072117) mup_scale_pane_g1

0xb3c7,	// (0x0007aa50) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0007eb5a) mup_scale_pane_g

0xb3eb,	// (0x0007aa74) msg_data_pane

0xb3f3,	// (0x0007aa7c) scroll_pane_cp017

0x1446,	// (0x00070acf) bg_list_pane_cp04_ParamLimits

0x1446,	// (0x00070acf) bg_list_pane_cp04

0xb3fb,	// (0x0007aa84) msg_data_pane_g1

0x4c9a,	// (0x00074323) msg_data_pane_g2

0x4ca4,	// (0x0007432d) msg_data_pane_g3

0x4cae,	// (0x00074337) msg_data_pane_g4

0x4cb6,	// (0x0007433f) msg_data_pane_g5

0x4cbe,	// (0x00074347) msg_data_pane_g6

0x4cc6,	// (0x0007434f) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0007eb69) msg_data_pane_g

0x146e,	// (0x00070af7) msg_text_pane_ParamLimits

0x146e,	// (0x00070af7) msg_text_pane

0x4cce,	// (0x00074357) qrid_highlight_pane_cp011_ParamLimits

0x4cce,	// (0x00074357) qrid_highlight_pane_cp011

0x239e,	// (0x00071a27) msg_body_pane

0x239e,	// (0x00071a27) msg_header_pane

0xb40c,	// (0x0007aa95) input_focus_pane_cp07

0x14a8,	// (0x00070b31) msg_header_pane_t1_ParamLimits

0x14a8,	// (0x00070b31) msg_header_pane_t1

0x14bc,	// (0x00070b45) msg_header_pane_t2_ParamLimits

0x14bc,	// (0x00070b45) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0007eb7d) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0007eb7d) msg_header_pane_t

0xb421,	// (0x0007aaaa) msg_body_pane_g1

0x14ce,	// (0x00070b57) msg_body_pane_t1_ParamLimits

0x14ce,	// (0x00070b57) msg_body_pane_t1

0x14ff,	// (0x00070b88) msg_body_pane_t2_ParamLimits

0x14ff,	// (0x00070b88) msg_body_pane_t2

0x1511,	// (0x00070b9a) msg_body_pane_t3_ParamLimits

0x1511,	// (0x00070b9a) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0007eb82) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0007eb82) msg_body_pane_t

0x4d1e,	// (0x000743a7) main_viewer_pane_g1_ParamLimits

0x4d1e,	// (0x000743a7) main_viewer_pane_g1

0x4d2c,	// (0x000743b5) main_viewer_pane_g2_ParamLimits

0x4d2c,	// (0x000743b5) main_viewer_pane_g2

0x4d3a,	// (0x000743c3) main_viewer_pane_g3_ParamLimits

0x4d3a,	// (0x000743c3) main_viewer_pane_g3

0x4d49,	// (0x000743d2) main_viewer_pane_g4_ParamLimits

0x4d49,	// (0x000743d2) main_viewer_pane_g4

0xb441,	// (0x0007aaca) main_viewer_pane_g5_ParamLimits

0xb441,	// (0x0007aaca) main_viewer_pane_g5

0xb441,	// (0x0007aaca) main_viewer_pane_g7_ParamLimits

0xb441,	// (0x0007aaca) main_viewer_pane_g7

0xb453,	// (0x0007aadc) main_viewer_pane_g8_ParamLimits

0xb453,	// (0x0007aadc) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0007eb92) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0007eb92) main_viewer_pane_g

0xb46b,	// (0x0007aaf4) viewer_content_pane_ParamLimits

0xb46b,	// (0x0007aaf4) viewer_content_pane

0x4d87,	// (0x00074410) main_postcard_pane_g1_ParamLimits

0x4d87,	// (0x00074410) main_postcard_pane_g1

0x4d9d,	// (0x00074426) main_postcard_pane_g2_ParamLimits

0x4d9d,	// (0x00074426) main_postcard_pane_g2

0x4db3,	// (0x0007443c) main_postcard_pane_g3_ParamLimits

0x4db3,	// (0x0007443c) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0007eba3) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0007eba3) main_postcard_pane_g

0x4dca,	// (0x00074453) main_postcard_pane_g4

0xec1c,	// (0x0007e2a5) smil_status_volume_pane_g2

0x4e0d,	// (0x00074496) postcard_pane_ParamLimits

0x4e0d,	// (0x00074496) postcard_pane

0xb479,	// (0x0007ab02) postcard_pane_g1_ParamLimits

0xb479,	// (0x0007ab02) postcard_pane_g1

0x4e5d,	// (0x000744e6) postcard_pane_g2_ParamLimits

0x4e5d,	// (0x000744e6) postcard_pane_g2

0x4e69,	// (0x000744f2) postcard_pane_g3_ParamLimits

0x4e69,	// (0x000744f2) postcard_pane_g3

0xb487,	// (0x0007ab10) postcard_pane_g4_ParamLimits

0xb487,	// (0x0007ab10) postcard_pane_g4

0x4e75,	// (0x000744fe) postcard_pane_g5_ParamLimits

0x4e75,	// (0x000744fe) postcard_pane_g5

0x4e87,	// (0x00074510) postcard_pane_g6_ParamLimits

0x4e87,	// (0x00074510) postcard_pane_g6

0xb479,	// (0x0007ab02) postcard_pane_g7_ParamLimits

0xb479,	// (0x0007ab02) postcard_pane_g7

0x0006,

0xf527,	// (0x0007ebb0) postcard_pane_g_ParamLimits

0xf527,	// (0x0007ebb0) postcard_pane_g

0x4e9f,	// (0x00074528) main_mp2_pane_g1_ParamLimits

0x4e9f,	// (0x00074528) main_mp2_pane_g1

0x4ead,	// (0x00074536) main_mp2_pane_g2_ParamLimits

0x4ead,	// (0x00074536) main_mp2_pane_g2

0x4eb9,	// (0x00074542) main_mp2_pane_g3_ParamLimits

0x4eb9,	// (0x00074542) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0007ebbf) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0007ebbf) main_mp2_pane_g

0x4ec5,	// (0x0007454e) main_mp2_pane_t1_ParamLimits

0x4ec5,	// (0x0007454e) main_mp2_pane_t1

0x4edc,	// (0x00074565) main_mp2_pane_t2_ParamLimits

0x4edc,	// (0x00074565) main_mp2_pane_t2

0x4ef0,	// (0x00074579) main_mp2_pane_t3_ParamLimits

0x4ef0,	// (0x00074579) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0007ebc6) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0007ebc6) main_mp2_pane_t

0xb495,	// (0x0007ab1e) pec_content_pane_ParamLimits

0xb495,	// (0x0007ab1e) pec_content_pane

0x38c8,	// (0x00072f51) scroll_pane_cp015

0xb4a7,	// (0x0007ab30) pec_attribute_pane_ParamLimits

0xb4a7,	// (0x0007ab30) pec_attribute_pane

0x4f02,	// (0x0007458b) pec_content_pane_g1_ParamLimits

0x4f02,	// (0x0007458b) pec_content_pane_g1

0xb4b7,	// (0x0007ab40) pec_content_pane_t1_ParamLimits

0xb4b7,	// (0x0007ab40) pec_content_pane_t1

0xb4c9,	// (0x0007ab52) pec_content_pane_t2_ParamLimits

0xb4c9,	// (0x0007ab52) pec_content_pane_t2

0x0001,

0xf544,	// (0x0007ebcd) pec_content_pane_t_ParamLimits

0xf544,	// (0x0007ebcd) pec_content_pane_t

0x4f0e,	// (0x00074597) list_single_graphic_pane_cp01_ParamLimits

0x4f0e,	// (0x00074597) list_single_graphic_pane_cp01

0x25f9,	// (0x00071c82) bg_popup_sub_pane_cp04

0xb4db,	// (0x0007ab64) popup_mup_playback_window_g1

0xb4e7,	// (0x0007ab70) popup_mup_playback_window_t1

0xb4fc,	// (0x0007ab85) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0007ebd2) popup_mup_playback_window_t

0xb533,	// (0x0007abbc) main_image_pane_g1_ParamLimits

0xb533,	// (0x0007abbc) main_image_pane_g1

0xb576,	// (0x0007abff) scroll_pane_cp018_ParamLimits

0xb576,	// (0x0007abff) scroll_pane_cp018

0xb58e,	// (0x0007ac17) scroll_pane_cp016_ParamLimits

0xb58e,	// (0x0007ac17) scroll_pane_cp016

0x4fe0,	// (0x00074669) smil2_image_pane_ParamLimits

0x4fe0,	// (0x00074669) smil2_image_pane

0x5016,	// (0x0007469f) smil2_root_pane_ParamLimits

0x5016,	// (0x0007469f) smil2_root_pane

0x504e,	// (0x000746d7) smil2_text_pane_ParamLimits

0x504e,	// (0x000746d7) smil2_text_pane

0x239e,	// (0x00071a27) bg_list_pane_cp06

0xb5ca,	// (0x0007ac53) grid_radio_pane

0x239e,	// (0x00071a27) bg_popup_window_pane_cp06

0xb5d4,	// (0x0007ac5d) main_fmradio_pane_t1

0xb02a,	// (0x0007a6b3) heading_pane_cp04

0xb5e2,	// (0x0007ac6b) main_fmradio_pane_t2

0xc5be,	// (0x0007bc47) popup_cale_lunar_info_window_g1

0xb5f0,	// (0x0007ac79) main_fmradio_pane_t3

0xc5c6,	// (0x0007bc4f) popup_cale_lunar_info_window_g2

0xb600,	// (0x0007ac89) main_fmradio_pane_t4

0x0001,

0xb60e,	// (0x0007ac97) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x0007ecad) popup_cale_lunar_info_window_g

0xf55e,	// (0x0007ebe7) main_fmradio_pane_t

0xb61c,	// (0x0007aca5) wait_bar_pane_cp03

0xb624,	// (0x0007acad) cell_fmradio_pane_ParamLimits

0xb624,	// (0x0007acad) cell_fmradio_pane

0xb479,	// (0x0007ab02) cell_fmradio_pane_g1_ParamLimits

0xb479,	// (0x0007ab02) cell_fmradio_pane_g1

0x239e,	// (0x00071a27) grid_highlight_pane_cp011

0xb639,	// (0x0007acc2) poc_content_pane_ParamLimits

0xb639,	// (0x0007acc2) poc_content_pane

0xb64b,	// (0x0007acd4) scroll_pane_cp019

0x50de,	// (0x00074767) popup_call_poc_act_window_ParamLimits

0x50de,	// (0x00074767) popup_call_poc_act_window

0x5102,	// (0x0007478b) popup_call_poc_inact_window_ParamLimits

0x5102,	// (0x0007478b) popup_call_poc_inact_window

0xf5fb,	// (0x0007ec84) bg_popup_call_poc_act_pane_g

0xc536,	// (0x0007bbbf) bg_popup_call_poc_inact_pane_g1

0xc53e,	// (0x0007bbc7) bg_popup_call_poc_inact_pane_g2

0xb653,	// (0x0007acdc) popup_call_poc_act_window_g2

0xc546,	// (0x0007bbcf) bg_popup_call_poc_inact_pane_g3

0xc54e,	// (0x0007bbd7) bg_popup_call_poc_inact_pane_g4

0xc556,	// (0x0007bbdf) bg_popup_call_poc_inact_pane_g5

0xb65b,	// (0x0007ace4) popup_call_poc_act_window_t1_ParamLimits

0xb65b,	// (0x0007ace4) popup_call_poc_act_window_t1

0xb683,	// (0x0007ad0c) popup_call_poc_act_window_t2_ParamLimits

0xb683,	// (0x0007ad0c) popup_call_poc_act_window_t2

0xb6ab,	// (0x0007ad34) popup_call_poc_act_window_t3_ParamLimits

0xb6ab,	// (0x0007ad34) popup_call_poc_act_window_t3

0xb6d3,	// (0x0007ad5c) popup_call_poc_act_window_t4_ParamLimits

0xb6d3,	// (0x0007ad5c) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0007ebf2) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0007ebf2) popup_call_poc_act_window_t

0xc55e,	// (0x0007bbe7) bg_popup_call_poc_inact_pane_g6

0xc566,	// (0x0007bbef) bg_popup_call_poc_inact_pane_g7

0xc56e,	// (0x0007bbf7) bg_popup_call_poc_inact_pane_g8

0xb6e5,	// (0x0007ad6e) popup_call_poc_inact_window_g2

0xc576,	// (0x0007bbff) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0007ec71) bg_popup_call_poc_inact_pane_g

0xb6ed,	// (0x0007ad76) popup_call_poc_inact_window_t1_ParamLimits

0xb6ed,	// (0x0007ad76) popup_call_poc_inact_window_t1

0xb702,	// (0x0007ad8b) popup_call_poc_inact_window_t2_ParamLimits

0xb702,	// (0x0007ad8b) popup_call_poc_inact_window_t2

0xb717,	// (0x0007ada0) popup_call_poc_inact_window_t3_ParamLimits

0xb717,	// (0x0007ada0) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0007ebfb) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0007ebfb) popup_call_poc_inact_window_t

0xeb7c,	// (0x0007e205) context_pane_ParamLimits

0x59ad,	// (0x00075036) signal_pane_ParamLimits

0xb278,	// (0x0007a901) main_call2_pane

0xeb6a,	// (0x0007e1f3) popup_phob_thumbnail2_window_ParamLimits

0xeb6a,	// (0x0007e1f3) popup_phob_thumbnail2_window

0xb429,	// (0x0007aab2) aid_hotspot_pointer_arrow_pane

0xb431,	// (0x0007aaba) aid_hotspot_pointer_hand_pane

0x546d,	// (0x00074af6) phob_pre_status_pane_g5

0x30bd,	// (0x00072746) cams_zoom_pane_ParamLimits

0x30cc,	// (0x00072755) image_vga_pane_ParamLimits

0x30e6,	// (0x0007276f) main_camera_pane_g1_ParamLimits

0x30f8,	// (0x00072781) main_camera_pane_g2_ParamLimits

0x3108,	// (0x00072791) main_camera_pane_g3_ParamLimits

0x311c,	// (0x000727a5) main_camera_pane_g4_ParamLimits

0x3130,	// (0x000727b9) main_camera_pane_g5_ParamLimits

0x3144,	// (0x000727cd) main_camera_pane_g6_ParamLimits

0x3158,	// (0x000727e1) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0007e8fa) main_camera_pane_g_ParamLimits

0x3178,	// (0x00072801) main_camera_pane_t1_ParamLimits

0x318e,	// (0x00072817) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0007e90b) main_camera_pane_t_ParamLimits

0x25f9,	// (0x00071c82) bg_popup_preview_window_pane_cp01_ParamLimits

0x25f9,	// (0x00071c82) bg_popup_preview_window_pane_cp01

0xb72c,	// (0x0007adb5) popup_phob_thumbnail2_window_g1_ParamLimits

0xb72c,	// (0x0007adb5) popup_phob_thumbnail2_window_g1

0x239e,	// (0x00071a27) call2_cli_visual_pane

0x5136,	// (0x000747bf) popup_call2_audio_conf_window_ParamLimits

0x5136,	// (0x000747bf) popup_call2_audio_conf_window

0x515e,	// (0x000747e7) popup_call2_audio_first_window_ParamLimits

0x515e,	// (0x000747e7) popup_call2_audio_first_window

0x51f4,	// (0x0007487d) popup_call2_audio_in_window_ParamLimits

0x51f4,	// (0x0007487d) popup_call2_audio_in_window

0x5240,	// (0x000748c9) popup_call2_audio_out_window_ParamLimits

0x5240,	// (0x000748c9) popup_call2_audio_out_window

0x52b2,	// (0x0007493b) popup_call2_audio_second_window_ParamLimits

0x52b2,	// (0x0007493b) popup_call2_audio_second_window

0x5318,	// (0x000749a1) popup_call2_audio_wait_window_ParamLimits

0x5318,	// (0x000749a1) popup_call2_audio_wait_window

0x239e,	// (0x00071a27) bg_popup_call2_act_pane_cp03

0x25db,	// (0x00071c64) list_conf_pane_cp

0xb738,	// (0x0007adc1) popup_call2_audio_conf_window_t1

0xb746,	// (0x0007adcf) list_single_graphic_popup_conf2_pane_ParamLimits

0xb746,	// (0x0007adcf) list_single_graphic_popup_conf2_pane

0xb099,	// (0x0007a722) list_highlight_pane_cp04

0xb759,	// (0x0007ade2) list_single_graphic_popup_conf2_pane_g1

0xb0aa,	// (0x0007a733) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0007ec02) list_single_graphic_popup_conf2_pane_g

0xb763,	// (0x0007adec) list_single_graphic_popup_conf2_pane_t1

0xb771,	// (0x0007adfa) bg_popup_call2_act_pane_cp01_ParamLimits

0xb771,	// (0x0007adfa) bg_popup_call2_act_pane_cp01

0xb7fb,	// (0x0007ae84) call_type_pane_cp05_ParamLimits

0xb7fb,	// (0x0007ae84) call_type_pane_cp05

0xb84f,	// (0x0007aed8) popup_call2_audio_second_window_g1_ParamLimits

0xb84f,	// (0x0007aed8) popup_call2_audio_second_window_g1

0xb8a3,	// (0x0007af2c) popup_call2_audio_second_window_g2_ParamLimits

0xb8a3,	// (0x0007af2c) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0007ec07) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0007ec07) popup_call2_audio_second_window_g

0xb908,	// (0x0007af91) popup_call2_audio_second_window_t1_ParamLimits

0xb908,	// (0x0007af91) popup_call2_audio_second_window_t1

0xb9c3,	// (0x0007b04c) popup_call2_audio_second_window_t2_ParamLimits

0xb9c3,	// (0x0007b04c) popup_call2_audio_second_window_t2

0xba16,	// (0x0007b09f) popup_call2_audio_second_window_t3_ParamLimits

0xba16,	// (0x0007b09f) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0007ec0e) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0007ec0e) popup_call2_audio_second_window_t

0x239e,	// (0x00071a27) bg_popup_call2_in_pane_cp02

0x23a8,	// (0x00071a31) call_type_pane_cp04

0x23b0,	// (0x00071a39) popup_call2_audio_wait_window_g1

0x23b8,	// (0x00071a41) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0007e7e7) popup_call2_audio_wait_window_g

0x23c0,	// (0x00071a49) popup_call2_audio_wait_window_t3

0xbb09,	// (0x0007b192) bg_popup_call2_act_pane_ParamLimits

0xbb09,	// (0x0007b192) bg_popup_call2_act_pane

0xbbc9,	// (0x0007b252) call_type_pane_cp03_ParamLimits

0xbbc9,	// (0x0007b252) call_type_pane_cp03

0xbc2d,	// (0x0007b2b6) popup_call2_audio_first_window_g1_ParamLimits

0xbc2d,	// (0x0007b2b6) popup_call2_audio_first_window_g1

0xbc9d,	// (0x0007b326) popup_call2_audio_first_window_g2_ParamLimits

0xbc9d,	// (0x0007b326) popup_call2_audio_first_window_g2

0xb349,	// (0x0007a9d2) popup_call2_audio_first_window_g3_ParamLimits

0xb349,	// (0x0007a9d2) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0007ec17) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0007ec17) popup_call2_audio_first_window_g

0xbd7b,	// (0x0007b404) popup_call2_audio_first_window_t1_ParamLimits

0xbd7b,	// (0x0007b404) popup_call2_audio_first_window_t1

0xbe7e,	// (0x0007b507) popup_call2_audio_first_window_t4_ParamLimits

0xbe7e,	// (0x0007b507) popup_call2_audio_first_window_t4

0xbf61,	// (0x0007b5ea) popup_call2_audio_first_window_t5_ParamLimits

0xbf61,	// (0x0007b5ea) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0007ec22) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0007ec22) popup_call2_audio_first_window_t

0x25f1,	// (0x00071c7a) bg_popup_call2_act_pane_g1

0xc5d0,	// (0x0007bc59) popup_cale_lunar_info_window_t1

0xc5de,	// (0x0007bc67) popup_cale_lunar_info_window_t2

0xc5ec,	// (0x0007bc75) popup_cale_lunar_info_window_t3

0x239e,	// (0x00071a27) bg_popup_call2_bubble_pane

0xc062,	// (0x0007b6eb) bg_popup_call2_in_pane_cp01_ParamLimits

0xc062,	// (0x0007b6eb) bg_popup_call2_in_pane_cp01

0x2056,	// (0x000716df) call_type_pane_cp02

0xc0aa,	// (0x0007b733) popup_call2_audio_out_window_g1_ParamLimits

0xc0aa,	// (0x0007b733) popup_call2_audio_out_window_g1

0xc0d6,	// (0x0007b75f) popup_call2_audio_out_window_g2_ParamLimits

0xc0d6,	// (0x0007b75f) popup_call2_audio_out_window_g2

0xc0fe,	// (0x0007b787) popup_call2_audio_out_window_g3_ParamLimits

0xc0fe,	// (0x0007b787) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0007ec2b) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0007ec2b) popup_call2_audio_out_window_g

0xc139,	// (0x0007b7c2) popup_call2_audio_out_window_t1_ParamLimits

0xc139,	// (0x0007b7c2) popup_call2_audio_out_window_t1

0xc198,	// (0x0007b821) popup_call2_audio_out_window_t2_ParamLimits

0xc198,	// (0x0007b821) popup_call2_audio_out_window_t2

0xc1ec,	// (0x0007b875) popup_call2_audio_out_window_t3_ParamLimits

0xc1ec,	// (0x0007b875) popup_call2_audio_out_window_t3

0xc202,	// (0x0007b88b) popup_call2_audio_out_window_t4_ParamLimits

0xc202,	// (0x0007b88b) popup_call2_audio_out_window_t4

0xc218,	// (0x0007b8a1) popup_call2_audio_out_window_t5_ParamLimits

0xc218,	// (0x0007b8a1) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0007ec34) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0007ec34) popup_call2_audio_out_window_t

0xc27c,	// (0x0007b905) bg_popup_call2_in_pane_ParamLimits

0xc27c,	// (0x0007b905) bg_popup_call2_in_pane

0xc2d8,	// (0x0007b961) popup_call2_audio_in_window_g1_ParamLimits

0xc2d8,	// (0x0007b961) popup_call2_audio_in_window_g1

0xc310,	// (0x0007b999) popup_call2_audio_in_window_g2_ParamLimits

0xc310,	// (0x0007b999) popup_call2_audio_in_window_g2

0xc348,	// (0x0007b9d1) popup_call2_audio_in_window_g3_ParamLimits

0xc348,	// (0x0007b9d1) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0007ec41) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0007ec41) popup_call2_audio_in_window_g

0xc3a0,	// (0x0007ba29) popup_call2_audio_in_window_t1_ParamLimits

0xc3a0,	// (0x0007ba29) popup_call2_audio_in_window_t1

0xc420,	// (0x0007baa9) popup_call2_audio_in_window_t2_ParamLimits

0xc420,	// (0x0007baa9) popup_call2_audio_in_window_t2

0xc4a0,	// (0x0007bb29) popup_call2_audio_in_window_t3_ParamLimits

0xc4a0,	// (0x0007bb29) popup_call2_audio_in_window_t3

0xc4ba,	// (0x0007bb43) popup_call2_audio_in_window_t4_ParamLimits

0xc4ba,	// (0x0007bb43) popup_call2_audio_in_window_t4

0xc4cc,	// (0x0007bb55) popup_call2_audio_in_window_t5_ParamLimits

0xc4cc,	// (0x0007bb55) popup_call2_audio_in_window_t5

0xc4e1,	// (0x0007bb6a) popup_call2_audio_in_window_t6_ParamLimits

0xc4e1,	// (0x0007bb6a) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0007ec4a) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0007ec4a) popup_call2_audio_in_window_t

0x25f1,	// (0x00071c7a) bg_popup_call2_in_pane_g1

0xc5fa,	// (0x0007bc83) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0007ecb2) popup_cale_lunar_info_window_t

0x25f9,	// (0x00071c82) bg_popup_call2_rect_pane_ParamLimits

0x25f9,	// (0x00071c82) bg_popup_call2_rect_pane

0x239e,	// (0x00071a27) call2_cli_visual_graphic_pane

0x239e,	// (0x00071a27) call2_cli_visual_text_pane

0xec2f,	// (0x0007e2b8) smil_status_volume_pane_g3

0x0002,

0x2a8e,	// (0x00072117) call2_cli_visual_graphic_pane_g1

0x2a8e,	// (0x00072117) call2_cli_visual_graphic_pane_g2

0x2a8e,	// (0x00072117) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0007ec57) call2_cli_visual_graphic_pane_g

0xc4f6,	// (0x0007bb7f) bg_popup_call2_rect_pane_g1

0x2bd4,	// (0x0007225d) bg_popup_call2_rect_pane_g2

0xc4fe,	// (0x0007bb87) bg_popup_call2_rect_pane_g3

0xc506,	// (0x0007bb8f) bg_popup_call2_rect_pane_g4

0xc50e,	// (0x0007bb97) bg_popup_call2_rect_pane_g5

0xc516,	// (0x0007bb9f) bg_popup_call2_rect_pane_g6

0xc51e,	// (0x0007bba7) bg_popup_call2_rect_pane_g7

0xc526,	// (0x0007bbaf) bg_popup_call2_rect_pane_g8

0xc52e,	// (0x0007bbb7) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0007ec5e) bg_popup_call2_rect_pane_g

0xc536,	// (0x0007bbbf) bg_popup_call2_bubble_pane_g1

0xc53e,	// (0x0007bbc7) bg_popup_call2_bubble_pane_g2

0xc546,	// (0x0007bbcf) bg_popup_call2_bubble_pane_g3

0xc54e,	// (0x0007bbd7) bg_popup_call2_bubble_pane_g4

0xc556,	// (0x0007bbdf) bg_popup_call2_bubble_pane_g5

0xc55e,	// (0x0007bbe7) bg_popup_call2_bubble_pane_g6

0xc566,	// (0x0007bbef) bg_popup_call2_bubble_pane_g7

0xc56e,	// (0x0007bbf7) bg_popup_call2_bubble_pane_g8

0xc576,	// (0x0007bbff) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0007ec71) bg_popup_call2_bubble_pane_g

0x2c36,	// (0x000722bf) aid_cale_week_size_cell_pane

0x31a8,	// (0x00072831) aid_cams_cif_uncrop_pane_ParamLimits

0x31a8,	// (0x00072831) aid_cams_cif_uncrop_pane

0x339f,	// (0x00072a28) aid_cams_size_cell_ParamLimits

0x339f,	// (0x00072a28) aid_cams_size_cell

0x33b3,	// (0x00072a3c) grid_cams_pane_ParamLimits

0x33cd,	// (0x00072a56) linegrid_cams_pane_ParamLimits

0x34ee,	// (0x00072b77) call_video_pane_t1

0x3500,	// (0x00072b89) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0007e95e) call_video_pane_t

0x3afb,	// (0x00073184) aid_cale_month_size_cell_pane_ParamLimits

0x3afb,	// (0x00073184) aid_cale_month_size_cell_pane

0xf672,	// (0x0007ecfb) smil_status_volume_pane_g

0xec3c,	// (0x0007e2c5) volume_smil_pane_ParamLimits

0x1c82,	// (0x0007130b) aid_popup2_width_pane

0x2b2d,	// (0x000721b6) cell_qdial_pane_g4_ParamLimits

0x2b2d,	// (0x000721b6) cell_qdial_pane_g4

0x468b,	// (0x00073d14) aid_blid_cardinal_pane_ParamLimits

0x469b,	// (0x00073d24) aid_blid_destination_pane_ParamLimits

0x469b,	// (0x00073d24) aid_blid_destination_pane

0x25f9,	// (0x00071c82) bg_popup_call_poc_act_pane_ParamLimits

0x25f9,	// (0x00071c82) bg_popup_call_poc_act_pane

0x25f9,	// (0x00071c82) bg_popup_call_poc_inact_pane_ParamLimits

0x25f9,	// (0x00071c82) bg_popup_call_poc_inact_pane

0xc57e,	// (0x0007bc07) bg_popup_call_poc_act_pane_g1

0xc586,	// (0x0007bc0f) bg_popup_call_poc_act_pane_g2

0xc58e,	// (0x0007bc17) bg_popup_call_poc_act_pane_g3

0xc54e,	// (0x0007bbd7) bg_popup_call_poc_act_pane_g4

0xc556,	// (0x0007bbdf) bg_popup_call_poc_act_pane_g5

0xc596,	// (0x0007bc1f) bg_popup_call_poc_act_pane_g6

0xc566,	// (0x0007bbef) bg_popup_call_poc_act_pane_g7

0xc59e,	// (0x0007bc27) bg_popup_call_poc_act_pane_g8

0x239e,	// (0x00071a27) main_usb_pane

0xeb41,	// (0x0007e1ca) popup_cale_lunar_info_window

0x37a4,	// (0x00072e2d) im_reading_pane_t1_ParamLimits

0x37e3,	// (0x00072e6c) list_im_pane_ParamLimits

0x37f4,	// (0x00072e7d) scroll_pane_cp07_ParamLimits

0x239e,	// (0x00071a27) grid_highlight_pane_cp012

0x25f9,	// (0x00071c82) mup_scale_pane_ParamLimits

0xb479,	// (0x0007ab02) main_usb_pane_g1_ParamLimits

0xb479,	// (0x0007ab02) main_usb_pane_g1

0x5379,	// (0x00074a02) main_usb_pane_g2_ParamLimits

0x5379,	// (0x00074a02) main_usb_pane_g2

0x0001,

0xf612,	// (0x0007ec9b) main_usb_pane_g_ParamLimits

0xf612,	// (0x0007ec9b) main_usb_pane_g

0x538f,	// (0x00074a18) main_usb_pane_t1_ParamLimits

0x538f,	// (0x00074a18) main_usb_pane_t1

0x53a1,	// (0x00074a2a) main_usb_pane_t2_ParamLimits

0x53a1,	// (0x00074a2a) main_usb_pane_t2

0x53b3,	// (0x00074a3c) main_usb_pane_t3_ParamLimits

0x53b3,	// (0x00074a3c) main_usb_pane_t3

0x53c5,	// (0x00074a4e) main_usb_pane_t4_ParamLimits

0x53c5,	// (0x00074a4e) main_usb_pane_t4

0x53da,	// (0x00074a63) main_usb_pane_t5_ParamLimits

0x53da,	// (0x00074a63) main_usb_pane_t5

0x53ef,	// (0x00074a78) main_usb_pane_t6_ParamLimits

0x53ef,	// (0x00074a78) main_usb_pane_t6

0x0005,

0xf617,	// (0x0007eca0) main_usb_pane_t_ParamLimits

0x462a,	// (0x00073cb3) aid_text_placing

0x4635,	// (0x00073cbe) main_location2_pane_t1_ParamLimits

0x464b,	// (0x00073cd4) main_location2_pane_t2_ParamLimits

0x4661,	// (0x00073cea) main_location2_pane_t3_ParamLimits

0x4677,	// (0x00073d00) main_location2_pane_t4_ParamLimits

0x4677,	// (0x00073d00) main_location2_pane_t4

0xf436,	// (0x0007eabf) main_location2_pane_t_ParamLimits

0x26d5,	// (0x00071d5e) find_pinb_pane_g2_ParamLimits

0x26d5,	// (0x00071d5e) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0007e80d) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0007e80d) find_pinb_pane_g

0x26e1,	// (0x00071d6a) find_pinb_pane_t1_ParamLimits

0x26f3,	// (0x00071d7c) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0007e812) find_pinb_pane_t_ParamLimits

0x239e,	// (0x00071a27) main_call3_pane

0x3e6f,	// (0x000734f8) cale_month_day_heading_pane_t1_ParamLimits

0x3ecd,	// (0x00073556) cale_month_day_heading_pane_t2_ParamLimits

0x3f32,	// (0x000735bb) cale_month_day_heading_pane_t3_ParamLimits

0x3f97,	// (0x00073620) cale_month_day_heading_pane_t4_ParamLimits

0x3ffc,	// (0x00073685) cale_month_day_heading_pane_t5_ParamLimits

0x4061,	// (0x000736ea) cale_month_day_heading_pane_t6_ParamLimits

0x40c6,	// (0x0007374f) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0007e996) cale_month_day_heading_pane_t_ParamLimits

0xac2d,	// (0x0007a2b6) smil_status_volume_pane

0x4e31,	// (0x000744ba) postcard_address_pane_ParamLimits

0x4e31,	// (0x000744ba) postcard_address_pane

0x4e47,	// (0x000744d0) postcard_message_pane_ParamLimits

0x4e47,	// (0x000744d0) postcard_message_pane

0x5352,	// (0x000749db) call2_cli_visual_pane_t1_ParamLimits

0x5352,	// (0x000749db) call2_cli_visual_pane_t1

0x5bbe,	// (0x00075247) postcard_message_pane_t1_ParamLimits

0x5bbe,	// (0x00075247) postcard_message_pane_t1

0xec51,	// (0x0007e2da) postcard_address_pane_t1_ParamLimits

0xec51,	// (0x0007e2da) postcard_address_pane_t1

0x5baa,	// (0x00075233) popup_call3_audio_in_window_ParamLimits

0x5baa,	// (0x00075233) popup_call3_audio_in_window

0x5a2f,	// (0x000750b8) bg_popup_call3_in_pane_ParamLimits

0x5a2f,	// (0x000750b8) bg_popup_call3_in_pane

0x5aab,	// (0x00075134) popup_call3_audio_in_window_g1_ParamLimits

0x5aab,	// (0x00075134) popup_call3_audio_in_window_g1

0x5acb,	// (0x00075154) popup_call3_audio_in_window_g2_ParamLimits

0x5acb,	// (0x00075154) popup_call3_audio_in_window_g2

0x5aeb,	// (0x00075174) popup_call3_audio_in_window_g3_ParamLimits

0x5aeb,	// (0x00075174) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x0007ed02) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x0007ed02) popup_call3_audio_in_window_g

0x5b1c,	// (0x000751a5) popup_call3_audio_in_window_t1_ParamLimits

0x5b1c,	// (0x000751a5) popup_call3_audio_in_window_t1

0x5b5a,	// (0x000751e3) popup_call3_audio_in_window_t2_ParamLimits

0x5b5a,	// (0x000751e3) popup_call3_audio_in_window_t2

0x5b98,	// (0x00075221) popup_call3_audio_in_window_t3_ParamLimits

0x5b98,	// (0x00075221) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0007ed0b) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0007ed0b) popup_call3_audio_in_window_t

0xb278,	// (0x0007a901) bg_popup_call3_rect_pane

0xc4f6,	// (0x0007bb7f) bg_popup_call3_rect_pane_g1

0x2bd4,	// (0x0007225d) bg_popup_call3_rect_pane_g2

0xc4fe,	// (0x0007bb87) bg_popup_call3_rect_pane_g3

0xc506,	// (0x0007bb8f) bg_popup_call3_rect_pane_g4

0xc50e,	// (0x0007bb97) bg_popup_call3_rect_pane_g5

0xc516,	// (0x0007bb9f) bg_popup_call3_rect_pane_g6

0xc51e,	// (0x0007bba7) bg_popup_call3_rect_pane_g7

0x4a73,	// (0x000740fc) mup_visualizer_osc_pane

0xb357,	// (0x0007a9e0) mup_visualizer_spec_pane

0x5a5f,	// (0x000750e8) call3_video_qcif_pane_ParamLimits

0x5a5f,	// (0x000750e8) call3_video_qcif_pane

0x5a72,	// (0x000750fb) call3_video_qcif_uncrop_pane_ParamLimits

0x5a72,	// (0x000750fb) call3_video_qcif_uncrop_pane

0x5a82,	// (0x0007510b) call3_video_subqcif_pane_ParamLimits

0x5a82,	// (0x0007510b) call3_video_subqcif_pane

0x5a98,	// (0x00075121) call3_video_subqcif_uncrop_pane_ParamLimits

0x5a98,	// (0x00075121) call3_video_subqcif_uncrop_pane

0x5b0b,	// (0x00075194) popup_call3_audio_in_window_g4_ParamLimits

0x5b0b,	// (0x00075194) popup_call3_audio_in_window_g4

0x5a1e,	// (0x000750a7) mup_spec_half_pane

0x5a27,	// (0x000750b0) mup_spec_half_pane_cp

0xebef,	// (0x0007e278) mup_osc_middle_pane

0xebf8,	// (0x0007e281) mup_visualizer_osc_pane_g1

0x59fe,	// (0x00075087) mup_spec_bar_pane_ParamLimits

0x59fe,	// (0x00075087) mup_spec_bar_pane

0xebdc,	// (0x0007e265) mup_spec_bar_pane_g1

0xebe6,	// (0x0007e26f) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0007ecf6) mup_spec_bar_pane_g

0x2c36,	// (0x000722bf) aid_cale_week_size_cell_pane_ParamLimits

0x2c49,	// (0x000722d2) bg_cale_heading_pane_ParamLimits

0x2c65,	// (0x000722ee) bg_cale_pane_cp01_ParamLimits

0x2c7e,	// (0x00072307) cale_week_corner_pane_ParamLimits

0x2c94,	// (0x0007231d) cale_week_day_heading_pane_ParamLimits

0x2cb0,	// (0x00072339) cale_week_scroll_pane_g1_ParamLimits

0x2cc9,	// (0x00072352) cale_week_scroll_pane_g2_ParamLimits

0x2cda,	// (0x00072363) cale_week_scroll_pane_g3_ParamLimits

0x2ceb,	// (0x00072374) cale_week_scroll_pane_g4_ParamLimits

0x2cfc,	// (0x00072385) cale_week_scroll_pane_g5_ParamLimits

0x2d0d,	// (0x00072396) cale_week_scroll_pane_g6_ParamLimits

0x2d1e,	// (0x000723a7) cale_week_scroll_pane_g7_ParamLimits

0x2d2f,	// (0x000723b8) cale_week_scroll_pane_g8_ParamLimits

0x2d40,	// (0x000723c9) cale_week_scroll_pane_g9_ParamLimits

0x2d51,	// (0x000723da) cale_week_scroll_pane_g10_ParamLimits

0x2d62,	// (0x000723eb) cale_week_scroll_pane_g11_ParamLimits

0x2d73,	// (0x000723fc) cale_week_scroll_pane_g12_ParamLimits

0x2d84,	// (0x0007240d) cale_week_scroll_pane_g13_ParamLimits

0x2d9d,	// (0x00072426) cale_week_scroll_pane_g14_ParamLimits

0x2db6,	// (0x0007243f) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0007e89e) cale_week_scroll_pane_g_ParamLimits

0x2dcf,	// (0x00072458) cale_week_time_pane_ParamLimits

0x2de0,	// (0x00072469) grid_cale_week_pane_ParamLimits

0x2dfb,	// (0x00072484) listscroll_cale_week_pane_t1

0x2e0d,	// (0x00072496) scroll_pane_cp08_ParamLimits

0x3b4c,	// (0x000731d5) cale_month_corner_pane_ParamLimits

0xabcd,	// (0x0007a256) cale_month_pane_t1

0x3e30,	// (0x000734b9) cale_month_week_pane_ParamLimits

0x444e,	// (0x00073ad7) popup_call_status_window_g1_ParamLimits

0x4462,	// (0x00073aeb) popup_call_status_window_g2_ParamLimits

0x4476,	// (0x00073aff) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0007ea46) popup_call_status_window_g_ParamLimits

0xafab,	// (0x0007a634) aid_call2_pane

0x149a,	// (0x00070b23) msg_header_pane_g1

0x4e31,	// (0x000744ba) postcard_address2_pane_ParamLimits

0x4e31,	// (0x000744ba) postcard_address2_pane

0x4e47,	// (0x000744d0) postcard_message2_pane_ParamLimits

0x4e47,	// (0x000744d0) postcard_message2_pane

0x59bb,	// (0x00075044) message2_row_pane_ParamLimits

0x59bb,	// (0x00075044) message2_row_pane

0xeb97,	// (0x0007e220) address2_row_pane_ParamLimits

0xeb97,	// (0x0007e220) address2_row_pane

0xebaa,	// (0x0007e233) postcard_message2_row_pane_g1

0xebb2,	// (0x0007e23b) postcard_message2_row_pane_t1

0xebaa,	// (0x0007e233) address2_row_pane_g1

0xebb2,	// (0x0007e23b) address2_row_pane_t1

0x3076,	// (0x000726ff) aid_size_cell_vorec

0x239e,	// (0x00071a27) main_rss_pane

0x59de,	// (0x00075067) rss_list_single_pane_ParamLimits

0x59de,	// (0x00075067) rss_list_single_pane

0xebc0,	// (0x0007e249) rss_list_single_pane_t1

0xebce,	// (0x0007e257) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x0007ecf1) rss_list_single_pane_t

0x239e,	// (0x00071a27) main_camera2_pane

0x239e,	// (0x00071a27) main_video2_pane

0x5c2d,	// (0x000752b6) cams_zoom_pane_cp2_ParamLimits

0x5c2d,	// (0x000752b6) cams_zoom_pane_cp2

0x5c44,	// (0x000752cd) image2_vga_pane_ParamLimits

0x5c44,	// (0x000752cd) image2_vga_pane

0x5c8c,	// (0x00075315) main_camera2_pane_g1_ParamLimits

0x5c8c,	// (0x00075315) main_camera2_pane_g1

0x5cac,	// (0x00075335) main_camera2_pane_g2_ParamLimits

0x5cac,	// (0x00075335) main_camera2_pane_g2

0x5cc3,	// (0x0007534c) main_camera2_pane_g3_ParamLimits

0x5cc3,	// (0x0007534c) main_camera2_pane_g3

0x5cda,	// (0x00075363) main_camera2_pane_g4_ParamLimits

0x5cda,	// (0x00075363) main_camera2_pane_g4

0x5cf1,	// (0x0007537a) main_camera2_pane_g5_ParamLimits

0x5cf1,	// (0x0007537a) main_camera2_pane_g5

0x5d08,	// (0x00075391) main_camera2_pane_g6_ParamLimits

0x5d08,	// (0x00075391) main_camera2_pane_g6

0x5d1f,	// (0x000753a8) main_camera2_pane_g7_ParamLimits

0x5d1f,	// (0x000753a8) main_camera2_pane_g7

0x5d36,	// (0x000753bf) main_camera2_pane_g8_ParamLimits

0x5d36,	// (0x000753bf) main_camera2_pane_g8

0x0008,

0xf689,	// (0x0007ed12) main_camera2_pane_g_ParamLimits

0xf689,	// (0x0007ed12) main_camera2_pane_g

0x5d64,	// (0x000753ed) main_camera2_pane_t1_ParamLimits

0x5d64,	// (0x000753ed) main_camera2_pane_t1

0x5d99,	// (0x00075422) main_camera2_pane_t2_ParamLimits

0x5d99,	// (0x00075422) main_camera2_pane_t2

0x5db6,	// (0x0007543f) main_camera2_pane_t3_ParamLimits

0x5db6,	// (0x0007543f) main_camera2_pane_t3

0x5e14,	// (0x0007549d) main_camera2_pane_t4_ParamLimits

0x5e14,	// (0x0007549d) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x0007ed25) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x0007ed25) main_camera2_pane_t

0x5e9d,	// (0x00075526) cams_zoom_pane_cp4_ParamLimits

0x5e9d,	// (0x00075526) cams_zoom_pane_cp4

0x5eb3,	// (0x0007553c) image2_cif_pane_ParamLimits

0x5eb3,	// (0x0007553c) image2_cif_pane

0x5ede,	// (0x00075567) image2_subqcif_pane_ParamLimits

0x5ede,	// (0x00075567) image2_subqcif_pane

0x5ef9,	// (0x00075582) main_video2_pane_g1_ParamLimits

0x5ef9,	// (0x00075582) main_video2_pane_g1

0x5f13,	// (0x0007559c) main_video2_pane_g2_ParamLimits

0x5f13,	// (0x0007559c) main_video2_pane_g2

0x5f29,	// (0x000755b2) main_video2_pane_g3_ParamLimits

0x5f29,	// (0x000755b2) main_video2_pane_g3

0x5f3f,	// (0x000755c8) main_video2_pane_g4_ParamLimits

0x5f3f,	// (0x000755c8) main_video2_pane_g4

0x5f55,	// (0x000755de) main_video2_pane_g5_ParamLimits

0x5f55,	// (0x000755de) main_video2_pane_g5

0x5f6b,	// (0x000755f4) main_video2_pane_g6_ParamLimits

0x5f6b,	// (0x000755f4) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x0007ed34) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x0007ed34) main_video2_pane_g

0x5f85,	// (0x0007560e) main_video2_pane_t1_ParamLimits

0x5f85,	// (0x0007560e) main_video2_pane_t1

0x5fa9,	// (0x00075632) main_video2_pane_t2_ParamLimits

0x5fa9,	// (0x00075632) main_video2_pane_t2

0x5ff9,	// (0x00075682) main_video2_pane_t3_ParamLimits

0x5ff9,	// (0x00075682) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x0007ed41) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x0007ed41) main_video2_pane_t

0x54ad,	// (0x00074b36) call_muted_g2

0x0001,

0xf65a,	// (0x0007ece3) call_muted_g

0x239e,	// (0x00071a27) main_mup2_pane

0x6041,	// (0x000756ca) main_mup2_pane_g1_ParamLimits

0x6041,	// (0x000756ca) main_mup2_pane_g1

0x604d,	// (0x000756d6) main_mup2_pane_g2_ParamLimits

0x604d,	// (0x000756d6) main_mup2_pane_g2

0xecea,	// (0x0007e373) main_mup_pane_g13_cp1

0xecf2,	// (0x0007e37b) mup_volume_pane_cp1

0x606b,	// (0x000756f4) main_mup2_pane_g4_ParamLimits

0x606b,	// (0x000756f4) main_mup2_pane_g4

0x607d,	// (0x00075706) main_mup2_pane_g5_ParamLimits

0x607d,	// (0x00075706) main_mup2_pane_g5

0x608f,	// (0x00075718) main_mup2_pane_g6_ParamLimits

0x608f,	// (0x00075718) main_mup2_pane_g6

0x60a1,	// (0x0007572a) main_mup2_pane_g7_ParamLimits

0x60a1,	// (0x0007572a) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0007ed48) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0007ed48) main_mup2_pane_g

0x60b9,	// (0x00075742) main_mup2_pane_t1_ParamLimits

0x60b9,	// (0x00075742) main_mup2_pane_t1

0x60cf,	// (0x00075758) main_mup2_pane_t2_ParamLimits

0x60cf,	// (0x00075758) main_mup2_pane_t2

0x60e5,	// (0x0007576e) main_mup2_pane_t3_ParamLimits

0x60e5,	// (0x0007576e) main_mup2_pane_t3

0x60fb,	// (0x00075784) main_mup2_pane_t4_ParamLimits

0x60fb,	// (0x00075784) main_mup2_pane_t4

0x6113,	// (0x0007579c) main_mup2_pane_t5_ParamLimits

0x6113,	// (0x0007579c) main_mup2_pane_t5

0x612b,	// (0x000757b4) main_mup2_pane_t6_ParamLimits

0x612b,	// (0x000757b4) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0007ed57) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0007ed57) main_mup2_pane_t

0x615b,	// (0x000757e4) mup2_visualizer_pane_ParamLimits

0x615b,	// (0x000757e4) mup2_visualizer_pane

0x6189,	// (0x00075812) mup_progress_pane_cp_ParamLimits

0x6189,	// (0x00075812) mup_progress_pane_cp

0xecd5,	// (0x0007e35e) mup_volume_pane_cp_ParamLimits

0xecd5,	// (0x0007e35e) mup_volume_pane_cp

0x619f,	// (0x00075828) mup2_visualizer_pane_g1_ParamLimits

0x619f,	// (0x00075828) mup2_visualizer_pane_g1

0xec93,	// (0x0007e31c) mup2_visualizer_pane_g2_ParamLimits

0xec93,	// (0x0007e31c) mup2_visualizer_pane_g2

0x61b4,	// (0x0007583d) mup2_visualizer_pane_g3_ParamLimits

0x61b4,	// (0x0007583d) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x0007ed64) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x0007ed64) mup2_visualizer_pane_g

0xb5c2,	// (0x0007ac4b) aid_size_cell_fmradio

0x565d,	// (0x00074ce6) aid_height_parent_landcape

0x38af,	// (0x00072f38) wml_content_pane_cp

0x38b7,	// (0x00072f40) wml_tabs_pane

0x38c0,	// (0x00072f49) popup_wml_miniature_window

0x38c8,	// (0x00072f51) scroll_pane_cp021

0x38dc,	// (0x00072f65) wml_content_pane_comp8

0x239e,	// (0x00071a27) bg_popup_sub_pane_cp05

0xecb1,	// (0x0007e33a) popup_wml_miniature_window_g1

0xecb9,	// (0x0007e342) wml_miniature_view_pane

0x61c0,	// (0x00075849) aid_size_wml_view

0x61c8,	// (0x00075851) wml_miniature_view_pane_g1

0x61d1,	// (0x0007585a) wml_miniature_view_pane_g2

0x61da,	// (0x00075863) wml_miniature_view_pane_g3

0x61e2,	// (0x0007586b) wml_miniature_view_pane_g4

0x61ea,	// (0x00075873) wml_miniature_view_pane_g5

0x61f2,	// (0x0007587b) wml_miniature_view_pane_g6

0x61fa,	// (0x00075883) wml_miniature_view_pane_g7

0x6202,	// (0x0007588b) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0007ed6b) wml_miniature_view_pane_g

0x02b9,	// (0x0006f942) background_graphic_ParamLimits

0x02b9,	// (0x0006f942) background_graphic

0x02c5,	// (0x0006f94e) wml_tabs_2_pane

0x02ce,	// (0x0006f957) wml_tabs_3_pane_ParamLimits

0x02ce,	// (0x0006f957) wml_tabs_3_pane

0x02e0,	// (0x0006f969) wml_tabs_4_pane_ParamLimits

0x02e0,	// (0x0006f969) wml_tabs_4_pane

0x02f6,	// (0x0006f97f) wml_tabs_5_pane_ParamLimits

0x02f6,	// (0x0006f97f) wml_tabs_5_pane

0x0310,	// (0x0006f999) wml_tabs_pane_g2_ParamLimits

0x0310,	// (0x0006f999) wml_tabs_pane_g2

0x0324,	// (0x0006f9ad) wml_tabs_pane_g3_ParamLimits

0x0324,	// (0x0006f9ad) wml_tabs_pane_g3

0x620a,	// (0x00075893) wml_tabs_2_active_pane_ParamLimits

0x620a,	// (0x00075893) wml_tabs_2_active_pane

0x621e,	// (0x000758a7) wml_tabs_2_passive_pane_ParamLimits

0x621e,	// (0x000758a7) wml_tabs_2_passive_pane

0x6232,	// (0x000758bb) wml_tabs_3_active_pane_cp_ParamLimits

0x6232,	// (0x000758bb) wml_tabs_3_active_pane_cp

0x6247,	// (0x000758d0) wml_tabs_3_passive_pane_ParamLimits

0x6247,	// (0x000758d0) wml_tabs_3_passive_pane

0x625a,	// (0x000758e3) wml_tabs_3_passive_pane_cp_ParamLimits

0x625a,	// (0x000758e3) wml_tabs_3_passive_pane_cp

0x6271,	// (0x000758fa) tabs_4_active_pane

0x6279,	// (0x00075902) tabs_4_passive_pane

0x6283,	// (0x0007590c) tabs_4_passive_pane_cp

0x628b,	// (0x00075914) tabs_4_passive_pane_cp2

0x5371,	// (0x000749fa) aid_height_text

0x4a45,	// (0x000740ce) mup_volume_cont_pane_ParamLimits

0x4a45,	// (0x000740ce) mup_volume_cont_pane

0x268f,	// (0x00071d18) aid_size_cell_pinb

0x2699,	// (0x00071d22) aid_size_list_pinb

0x6175,	// (0x000757fe) mup2_volume_cont_pane_ParamLimits

0x6175,	// (0x000757fe) mup2_volume_cont_pane

0xecc1,	// (0x0007e34a) mup2_volume_cont_pane_g1_ParamLimits

0xecc1,	// (0x0007e34a) mup2_volume_cont_pane_g1

0x1c8e,	// (0x00071317) aid_size_cell_touch_ParamLimits

0x1c8e,	// (0x00071317) aid_size_cell_touch

0x1ee0,	// (0x00071569) touch_pane_ParamLimits

0x1ee0,	// (0x00071569) touch_pane

0x1c70,	// (0x000712f9) main_rss2_pane

0x0341,	// (0x0006f9ca) listscroll_rss2_pane

0x034a,	// (0x0006f9d3) rss2_navigation_pane

0x0352,	// (0x0006f9db) list_rss2_pane

0xb13e,	// (0x0007a7c7) scroll_pane_cp22

0x035a,	// (0x0006f9e3) rss2_navigation_pane_g1

0x0363,	// (0x0006f9ec) rss2_navigation_pane_g2

0x036b,	// (0x0006f9f4) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x0007ed7c) rss2_navigation_pane_g

0x0373,	// (0x0006f9fc) rss2_navigation_pane_t1

0x6295,	// (0x0007591e) rss2_list_single_pane_ParamLimits

0x6295,	// (0x0007591e) rss2_list_single_pane

0x0381,	// (0x0006fa0a) rss2_list_single_pane_t2

0x038f,	// (0x0006fa18) rss2_list_single_pane_t3_ParamLimits

0x038f,	// (0x0006fa18) rss2_list_single_pane_t3

0x03ac,	// (0x0006fa35) rss2_list_single_pane_t4

0x4292,	// (0x0007391b) smil_status_pane_g1

0xeab8,	// (0x0007e141) main_image2_pane_ParamLimits

0xeab8,	// (0x0007e141) main_image2_pane

0x5d4d,	// (0x000753d6) main_camera2_pane_g9_ParamLimits

0x5d4d,	// (0x000753d6) main_camera2_pane_g9

0x5e69,	// (0x000754f2) main_camera2_pane_t5_ParamLimits

0x5e69,	// (0x000754f2) main_camera2_pane_t5

0xec68,	// (0x0007e2f1) main_camera2_pane_t6_ParamLimits

0xec68,	// (0x0007e2f1) main_camera2_pane_t6

0x62af,	// (0x00075938) main_image2_pane_g1_ParamLimits

0x62af,	// (0x00075938) main_image2_pane_g1

0x5088,	// (0x00074711) smil2_video_pane_ParamLimits

0x5088,	// (0x00074711) smil2_video_pane

0xa9a7,	// (0x0007a030) aid_zoom_text_primary_cp

0x1e9c,	// (0x00071525) popup_preview_fixed_window

0x379c,	// (0x00072e25) im_reading_pane_g1

0x5c1f,	// (0x000752a8) cams2_bc_adjust_pane_cp_ParamLimits

0x5c1f,	// (0x000752a8) cams2_bc_adjust_pane_cp

0x5e8f,	// (0x00075518) cams2_bc_adjust_pane_ParamLimits

0x5e8f,	// (0x00075518) cams2_bc_adjust_pane

0xecfa,	// (0x0007e383) cams2_bc_adjust_pane_g1

0xed02,	// (0x0007e38b) cams2_slider_pane

0xed0b,	// (0x0007e394) cams2_slider_pane_g1

0xed14,	// (0x0007e39d) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0007ed83) cams2_slider_pane_g

0x27e0,	// (0x00071e69) calc_display_pane_ParamLimits

0x2806,	// (0x00071e8f) calc_paper_pane_ParamLimits

0x2829,	// (0x00071eb2) grid_calc_pane_ParamLimits

0xb00d,	// (0x0007a696) popup_clock_digital_window_t1_ParamLimits

0xb55f,	// (0x0007abe8) main_image_pane_t1

0x27c2,	// (0x00071e4b) aid_size_cell_calc_ParamLimits

0x27c2,	// (0x00071e4b) aid_size_cell_calc

0x56a3,	// (0x00074d2c) popup_blid_sat_info2_window_ParamLimits

0x56a3,	// (0x00074d2c) popup_blid_sat_info2_window

0x03c2,	// (0x0006fa4b) aid_size_cell_blid

0x03ca,	// (0x0006fa53) bg_popup_window_pane_cp07

0x03ed,	// (0x0006fa76) grid_popup_blid_pane

0x03f7,	// (0x0006fa80) heading_pane_cp05_ParamLimits

0x03f7,	// (0x0006fa80) heading_pane_cp05

0x04c1,	// (0x0006fb4a) cell_popup_blid_pane_ParamLimits

0x04c1,	// (0x0006fb4a) cell_popup_blid_pane

0x04eb,	// (0x0006fb74) cell_popup_blid_pane_g1

0x04f3,	// (0x0006fb7c) cell_popup_blid_pane_t1

0x6145,	// (0x000757ce) mup2_indicator_pane_ParamLimits

0x6145,	// (0x000757ce) mup2_indicator_pane

0xb278,	// (0x0007a901) mup2_visualizer_osc_pane

0xec9f,	// (0x0007e328) mup2_visualizer_spec_pane_ParamLimits

0xec9f,	// (0x0007e328) mup2_visualizer_spec_pane

0x62c5,	// (0x0007594e) mup2_spec_half_pane

0x62ce,	// (0x00075957) mup2_spec_half_pane_cp

0x62d6,	// (0x0007595f) mup2_spec_bar_pane_ParamLimits

0x62d6,	// (0x0007595f) mup2_spec_bar_pane

0xebdc,	// (0x0007e265) mup2_spec_bar_pane_g1

0xebe6,	// (0x0007e26f) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0007ecf6) mup2_spec_bar_pane_g

0x62f6,	// (0x0007597f) mup2_osc_middle_pane

0xebf8,	// (0x0007e281) mup2_visualizer_osc_pane_g1

0x1f52,	// (0x000715db) popup_number_entry_window_t1_ParamLimits

0x1f65,	// (0x000715ee) popup_number_entry_window_t2_ParamLimits

0x1f77,	// (0x00071600) popup_number_entry_window_t3_ParamLimits

0x1f89,	// (0x00071612) popup_number_entry_window_t5_ParamLimits

0x1f89,	// (0x00071612) popup_number_entry_window_t5

0xf12f,	// (0x0007e7b8) popup_number_entry_window_t_ParamLimits

0x1fbe,	// (0x00071647) text_title_cp2_ParamLimits

0xb439,	// (0x0007aac2) aid_hotspot_pointer_text2_pane

0xb45f,	// (0x0007aae8) main_viewer_pane_g9_ParamLimits

0xb45f,	// (0x0007aae8) main_viewer_pane_g9

0xabcd,	// (0x0007a256) cale_month_pane_t1_ParamLimits

0xac62,	// (0x0007a2eb) bg_cale_pane_ParamLimits

0xac7a,	// (0x0007a303) list_cale_pane_ParamLimits

0x2dfb,	// (0x00072484) listscroll_cale_day_pane_t1

0xac8b,	// (0x0007a314) scroll_pane_cp09_ParamLimits

0x4a7b,	// (0x00074104) main_mup_eq_pane_t1_ParamLimits

0x4a7b,	// (0x00074104) main_mup_eq_pane_t1

0x4a97,	// (0x00074120) main_mup_eq_pane_t2_ParamLimits

0x4a97,	// (0x00074120) main_mup_eq_pane_t2

0x4ab3,	// (0x0007413c) main_mup_eq_pane_t3_ParamLimits

0x4ab3,	// (0x0007413c) main_mup_eq_pane_t3

0x4ad1,	// (0x0007415a) main_mup_eq_pane_t4_ParamLimits

0x4ad1,	// (0x0007415a) main_mup_eq_pane_t4

0x4aef,	// (0x00074178) main_mup_eq_pane_t5_ParamLimits

0x4aef,	// (0x00074178) main_mup_eq_pane_t5

0x4b0d,	// (0x00074196) main_mup_eq_pane_t6_ParamLimits

0x4b0d,	// (0x00074196) main_mup_eq_pane_t6

0x4b23,	// (0x000741ac) main_mup_eq_pane_t7_ParamLimits

0x4b23,	// (0x000741ac) main_mup_eq_pane_t7

0x4b39,	// (0x000741c2) main_mup_eq_pane_t8_ParamLimits

0x4b39,	// (0x000741c2) main_mup_eq_pane_t8

0x4b4f,	// (0x000741d8) main_mup_eq_pane_t9_ParamLimits

0x4b4f,	// (0x000741d8) main_mup_eq_pane_t9

0x4b6b,	// (0x000741f4) main_mup_eq_pane_t10_ParamLimits

0x4b6b,	// (0x000741f4) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0007eb45) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0007eb45) main_mup_eq_pane_t

0x4c40,	// (0x000742c9) mup_equalizer_pane_cp5_ParamLimits

0x4c58,	// (0x000742e1) mup_equalizer_pane_cp6_ParamLimits

0x4c70,	// (0x000742f9) mup_equalizer_pane_cp7_ParamLimits

0x1c70,	// (0x000712f9) main_gallery_pane

0xec01,	// (0x0007e28a) smil2_volume_pane

0xec09,	// (0x0007e292) smil_status_volume_pane_g1_ParamLimits

0xec1c,	// (0x0007e2a5) smil_status_volume_pane_g2_ParamLimits

0xec2f,	// (0x0007e2b8) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x0007ecfb) smil_status_volume_pane_g_ParamLimits

0x03ca,	// (0x0006fa53) bg_popup_window_pane_cp07_ParamLimits

0x03d8,	// (0x0006fa61) blid_firmament_pane

0x62ff,	// (0x00075988) aid_size_cell_gallery_ParamLimits

0x62ff,	// (0x00075988) aid_size_cell_gallery

0x6315,	// (0x0007599e) grid_gallery_pane_ParamLimits

0x6315,	// (0x0007599e) grid_gallery_pane

0x6330,	// (0x000759b9) cell_gallery_pane_ParamLimits

0x6330,	// (0x000759b9) cell_gallery_pane

0x0501,	// (0x0006fb8a) bg_cell_gallery_focus_pane_ParamLimits

0x0501,	// (0x0006fb8a) bg_cell_gallery_focus_pane

0x0513,	// (0x0006fb9c) cell_gallery_pane_g1_ParamLimits

0x0513,	// (0x0006fb9c) cell_gallery_pane_g1

0x6381,	// (0x00075a0a) cell_gallery_pane_g2_ParamLimits

0x6381,	// (0x00075a0a) cell_gallery_pane_g2

0x638e,	// (0x00075a17) cell_gallery_pane_g3_ParamLimits

0x638e,	// (0x00075a17) cell_gallery_pane_g3

0x051f,	// (0x0006fba8) cell_gallery_pane_g4_ParamLimits

0x051f,	// (0x0006fba8) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x0007eda9) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x0007eda9) cell_gallery_pane_g

0x052b,	// (0x0006fbb4) bg_cell_gallery_focus_pane_g1

0x0533,	// (0x0006fbbc) bg_cell_gallery_focus_pane_g2

0x053b,	// (0x0006fbc4) bg_cell_gallery_focus_pane_g3

0x0543,	// (0x0006fbcc) bg_cell_gallery_focus_pane_g4

0x639b,	// (0x00075a24) bg_cell_gallery_focus_pane_g5

0x63a3,	// (0x00075a2c) bg_cell_gallery_focus_pane_g6

0x63ab,	// (0x00075a34) bg_cell_gallery_focus_pane_g7

0x63b3,	// (0x00075a3c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0007edb2) bg_cell_gallery_focus_pane_g

0x63bb,	// (0x00075a44) aid_firma_cardinal

0x63cf,	// (0x00075a58) blid_firmament_pane_t1

0x63e6,	// (0x00075a6f) blid_firmament_pane_t2

0x63fd,	// (0x00075a86) blid_firmament_pane_t3

0x6414,	// (0x00075a9d) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x0007edc3) blid_firmament_pane_t

0x642b,	// (0x00075ab4) blid_sat_info_pane

0x643b,	// (0x00075ac4) blid_sat_info_pane_g1

0x643b,	// (0x00075ac4) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x0007edcc) blid_sat_info_pane_g

0x6445,	// (0x00075ace) blid_sat_info_pane_t1

0x6453,	// (0x00075adc) smil2_volume_content_pane

0x645c,	// (0x00075ae5) smil2_volume_pane_g1

0x6464,	// (0x00075aed) smil2_volume_content_pane_g1

0x646d,	// (0x00075af6) smil2_volume_content_pane_g2

0x6476,	// (0x00075aff) smil2_volume_content_pane_g3

0x647f,	// (0x00075b08) smil2_volume_content_pane_g4

0x6488,	// (0x00075b11) smil2_volume_content_pane_g5

0x6491,	// (0x00075b1a) smil2_volume_content_pane_g6

0x649a,	// (0x00075b23) smil2_volume_content_pane_g7

0x64a3,	// (0x00075b2c) smil2_volume_content_pane_g8

0x64ac,	// (0x00075b35) smil2_volume_content_pane_g9

0x64b5,	// (0x00075b3e) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x0007edd1) smil2_volume_content_pane_g

0x2e6d,	// (0x000724f6) cale_week_day_heading_pane_t1_ParamLimits

0x2e81,	// (0x0007250a) cale_week_day_heading_pane_t2_ParamLimits

0x2e95,	// (0x0007251e) cale_week_day_heading_pane_t3_ParamLimits

0x2ea9,	// (0x00072532) cale_week_day_heading_pane_t4_ParamLimits

0x2ebd,	// (0x00072546) cale_week_day_heading_pane_t5_ParamLimits

0x2ed1,	// (0x0007255a) cale_week_day_heading_pane_t6_ParamLimits

0x2ee5,	// (0x0007256e) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0007e8bd) cale_week_day_heading_pane_t_ParamLimits

0x2ef9,	// (0x00072582) bg_cale_side_pane_ParamLimits

0x2f07,	// (0x00072590) cale_week_time_pane_t1_ParamLimits

0x2f1f,	// (0x000725a8) cale_week_time_pane_t2_ParamLimits

0x2f37,	// (0x000725c0) cale_week_time_pane_t3_ParamLimits

0x2f4f,	// (0x000725d8) cale_week_time_pane_t4_ParamLimits

0x2f67,	// (0x000725f0) cale_week_time_pane_t5_ParamLimits

0x2f7f,	// (0x00072608) cale_week_time_pane_t6_ParamLimits

0x2f97,	// (0x00072620) cale_week_time_pane_t7_ParamLimits

0x2fb3,	// (0x0007263c) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0007e8cc) cale_week_time_pane_t_ParamLimits

0x2fd3,	// (0x0007265c) cell_cale_week_pane_g2_ParamLimits

0x2ef9,	// (0x00072582) bg_cale_side_pane_cp01_ParamLimits

0x412b,	// (0x000737b4) cale_month_week_pane_t1_ParamLimits

0x4142,	// (0x000737cb) cale_month_week_pane_t2_ParamLimits

0x4159,	// (0x000737e2) cale_month_week_pane_t3_ParamLimits

0x4170,	// (0x000737f9) cale_month_week_pane_t4_ParamLimits

0x4187,	// (0x00073810) cale_month_week_pane_t5_ParamLimits

0x419e,	// (0x00073827) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0007e9a5) cale_month_week_pane_t_ParamLimits

0xac09,	// (0x0007a292) cell_cale_month_pane_g1_ParamLimits

0x1c70,	// (0x000712f9) main_cale_event_viewer_pane

0x1c70,	// (0x000712f9) listscroll_cale_event_viewer_pane

0x64be,	// (0x00075b47) list_cale_ev_pane

0x64c6,	// (0x00075b4f) scroll_pane_cp023

0x64d2,	// (0x00075b5b) field_cale_ev_pane_ParamLimits

0x64d2,	// (0x00075b5b) field_cale_ev_pane

0x64f6,	// (0x00075b7f) field_cale_ev_content_pane_ParamLimits

0x64f6,	// (0x00075b7f) field_cale_ev_content_pane

0x6502,	// (0x00075b8b) field_cale_ev_pane_g1_ParamLimits

0x6502,	// (0x00075b8b) field_cale_ev_pane_g1

0x650e,	// (0x00075b97) field_cale_ev_pane_g2_ParamLimits

0x650e,	// (0x00075b97) field_cale_ev_pane_g2

0x6526,	// (0x00075baf) field_cale_ev_pane_g3_ParamLimits

0x6526,	// (0x00075baf) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x0007ede6) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x0007ede6) field_cale_ev_pane_g

0x653e,	// (0x00075bc7) field_cale_ev_pane_t1_ParamLimits

0x653e,	// (0x00075bc7) field_cale_ev_pane_t1

0x6555,	// (0x00075bde) field_cale_ev_content_pane_t1_ParamLimits

0x6555,	// (0x00075bde) field_cale_ev_content_pane_t1

0xb403,	// (0x0007aa8c) bg_button_pane_cp01

0x2964,	// (0x00071fed) listscroll_cale_week_pane_ParamLimits

0x2c2c,	// (0x000722b5) popup_toolbar_window_cp01

0x2dfb,	// (0x00072484) listscroll_cale_week_pane_t1_ParamLimits

0x2964,	// (0x00071fed) listscroll_cale_day_pane_ParamLimits

0x42f2,	// (0x0007397b) popup_toolbar_window_cp02

0x2dfb,	// (0x00072484) listscroll_cale_day_pane_t1_ParamLimits

0x2964,	// (0x00071fed) main_cale_month_pane_ParamLimits

0x5923,	// (0x00074fac) popup_toolbar_window_cp03_ParamLimits

0x5923,	// (0x00074fac) popup_toolbar_window_cp03

0x4f46,	// (0x000745cf) main_image_pane_g2_ParamLimits

0x4f46,	// (0x000745cf) main_image_pane_g2

0x4f57,	// (0x000745e0) main_image_pane_g3_ParamLimits

0x4f57,	// (0x000745e0) main_image_pane_g3

0x0002,

0xf54e,	// (0x0007ebd7) main_image_pane_g_ParamLimits

0xf54e,	// (0x0007ebd7) main_image_pane_g

0xb55f,	// (0x0007abe8) main_image_pane_t1_ParamLimits

0x4f68,	// (0x000745f1) main_image_pane_t2_ParamLimits

0x4f68,	// (0x000745f1) main_image_pane_t2

0x4f7a,	// (0x00074603) main_image_pane_t3_ParamLimits

0x4f7a,	// (0x00074603) main_image_pane_t3

0x4fa2,	// (0x0007462b) main_image_pane_t4_ParamLimits

0x4fa2,	// (0x0007462b) main_image_pane_t4

0x0003,

0xf555,	// (0x0007ebde) main_image_pane_t_ParamLimits

0xf555,	// (0x0007ebde) main_image_pane_t

0x4fc2,	// (0x0007464b) popup_image_details_window_cp01

0x4fcc,	// (0x00074655) popup_toobar_trans_pane_cp01_ParamLimits

0x4fcc,	// (0x00074655) popup_toobar_trans_pane_cp01

0x5796,	// (0x00074e1f) popup_image_details_window_ParamLimits

0x5796,	// (0x00074e1f) popup_image_details_window

0xeb4d,	// (0x0007e1d6) popup_image_focus_window

0x5bd9,	// (0x00075262) camera2_autofocus_pane_ParamLimits

0x5bd9,	// (0x00075262) camera2_autofocus_pane

0x1c70,	// (0x000712f9) bg_popup_sub_pane_cp06

0x6576,	// (0x00075bff) popup_image_focus_window_g1

0x657e,	// (0x00075c07) popup_image_focus_window_g2

0x6586,	// (0x00075c0f) popup_image_focus_window_g3

0x658e,	// (0x00075c17) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x0007eded) popup_image_focus_window_g

0x6596,	// (0x00075c1f) popup_image_focus_window_t1

0x65a4,	// (0x00075c2d) popup_image_focus_window_t2

0x65b4,	// (0x00075c3d) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x0007edf6) popup_image_focus_window_t

0x65c2,	// (0x00075c4b) camera2_autofocus_pane_g1

0xeab8,	// (0x0007e141) bg_tb_trans_pane_cp01

0x6600,	// (0x00075c89) popup_image_details_window_g1

0x6613,	// (0x00075c9c) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0007ee08) popup_image_details_window_g

0x663c,	// (0x00075cc5) popup_image_details_window_t1

0x664e,	// (0x00075cd7) popup_image_details_window_t2

0x6667,	// (0x00075cf0) popup_image_details_window_t3

0x667b,	// (0x00075d04) popup_image_details_window_t4

0x6696,	// (0x00075d1f) popup_image_details_window_t5

0x0004,

0xf786,	// (0x0007ee0f) popup_image_details_window_t

0x2950,	// (0x00071fd9) bg_calc_paper_pane_ParamLimits

0x1c70,	// (0x000712f9) grid_highlight_pane_cp013

0xa9b7,	// (0x0007a040) list_calc_pane_ParamLimits

0xa9c9,	// (0x0007a052) scroll_pane_cp024

0x2964,	// (0x00071fed) bg_calc_display_pane_ParamLimits

0x2970,	// (0x00071ff9) calc_display_pane_t1_ParamLimits

0x2982,	// (0x0007200b) calc_display_pane_t2_ParamLimits

0xa9d1,	// (0x0007a05a) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0007e83f) calc_display_pane_t_ParamLimits

0x2a98,	// (0x00072121) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0007e85c) cell_calc_pane_g

0x2aa1,	// (0x0007212a) cell_calc_pane_t1

0x2ab0,	// (0x00072139) grid_highlight_pane_cp02_ParamLimits

0x2ac6,	// (0x0007214f) toolbar_button_pane_cp01_ParamLimits

0x2ac6,	// (0x0007214f) toolbar_button_pane_cp01

0xb5a4,	// (0x0007ac2d) temp_image_control_pane_ParamLimits

0xb5a4,	// (0x0007ac2d) temp_image_control_pane

0xeab8,	// (0x0007e141) main_mp3_pane

0x66b0,	// (0x00075d39) temp_image_control_pane_g1_ParamLimits

0x66b0,	// (0x00075d39) temp_image_control_pane_g1

0x66be,	// (0x00075d47) temp_image_control_pane_g2_ParamLimits

0x66be,	// (0x00075d47) temp_image_control_pane_g2

0x66d0,	// (0x00075d59) temp_image_control_pane_g3_ParamLimits

0x66d0,	// (0x00075d59) temp_image_control_pane_g3

0x66e0,	// (0x00075d69) temp_image_control_pane_g4_ParamLimits

0x66e0,	// (0x00075d69) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0007ee1a) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0007ee1a) temp_image_control_pane_g

0x66b0,	// (0x00075d39) main_mp3_pane_g1

0x66f3,	// (0x00075d7c) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x0007ee23) main_mp3_pane_g

0x674c,	// (0x00075dd5) main_mp3_pane_t1

0x316c,	// (0x000727f5) main_camera_pane_g8_ParamLimits

0x316c,	// (0x000727f5) main_camera_pane_g8

0x3321,	// (0x000729aa) main_video_pane_g7_ParamLimits

0x3321,	// (0x000729aa) main_video_pane_g7

0xec81,	// (0x0007e30a) main_camera2_pane_t7_ParamLimits

0xec81,	// (0x0007e30a) main_camera2_pane_t7

0x386f,	// (0x00072ef8) scroll_pane_cp025_ParamLimits

0x386f,	// (0x00072ef8) scroll_pane_cp025

0x3883,	// (0x00072f0c) scroll_pane_cp026_ParamLimits

0x3883,	// (0x00072f0c) scroll_pane_cp026

0x3892,	// (0x00072f1b) wml_content_pane_ParamLimits

0x1c70,	// (0x000712f9) main_touch_calib_pane

0x681f,	// (0x00075ea8) main_touch_calib_pane_g1

0x682b,	// (0x00075eb4) main_touch_calib_pane_g2

0x6837,	// (0x00075ec0) main_touch_calib_pane_g3

0x6843,	// (0x00075ecc) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x0007ee41) main_touch_calib_pane_g

0x684f,	// (0x00075ed8) main_touch_calib_pane_t1

0x6869,	// (0x00075ef2) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0007ee4a) main_touch_calib_pane_t

0xb1b9,	// (0x0007a842) mup_progress_pane_cp02

0xb1d8,	// (0x0007a861) navi_pane_g1

0xb23a,	// (0x0007a8c3) navi_pane_mp_t3

0xeab8,	// (0x0007e141) main_mp3_pane_ParamLimits

0x5965,	// (0x00074fee) navi_pane_ParamLimits

0x66b0,	// (0x00075d39) main_mp3_pane_g1_ParamLimits

0x66f3,	// (0x00075d7c) main_mp3_pane_g2_ParamLimits

0x66ff,	// (0x00075d88) main_mp3_pane_g3_ParamLimits

0x66ff,	// (0x00075d88) main_mp3_pane_g3

0x670d,	// (0x00075d96) main_mp3_pane_g4_ParamLimits

0x670d,	// (0x00075d96) main_mp3_pane_g4

0x6719,	// (0x00075da2) main_mp3_pane_g5_ParamLimits

0x6719,	// (0x00075da2) main_mp3_pane_g5

0x6727,	// (0x00075db0) main_mp3_pane_g6_ParamLimits

0x6727,	// (0x00075db0) main_mp3_pane_g6

0x6734,	// (0x00075dbd) main_mp3_pane_g7_ParamLimits

0x6734,	// (0x00075dbd) main_mp3_pane_g7

0x6740,	// (0x00075dc9) main_mp3_pane_g8_ParamLimits

0x6740,	// (0x00075dc9) main_mp3_pane_g8

0xf79a,	// (0x0007ee23) main_mp3_pane_g_ParamLimits

0x675a,	// (0x00075de3) main_mp3_pane_t2

0x6768,	// (0x00075df1) main_mp3_pane_t3

0x6776,	// (0x00075dff) main_mp3_pane_t4

0x6784,	// (0x00075e0d) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x0007ee34) main_mp3_pane_t

0x67a0,	// (0x00075e29) mup_progress_pane_cp01

0xa9a7,	// (0x0007a030) aid_zoom_text_secondary2

0x64be,	// (0x00075b47) list_cale_ev2_pane

0x64c6,	// (0x00075b4f) scroll_pane_cp023_ParamLimits

0x68c1,	// (0x00075f4a) field_cale_ev2_pane_ParamLimits

0x68c1,	// (0x00075f4a) field_cale_ev2_pane

0xed2e,	// (0x0007e3b7) field_cale_ev2_pane_g1_ParamLimits

0xed2e,	// (0x0007e3b7) field_cale_ev2_pane_g1

0xed3a,	// (0x0007e3c3) field_cale_ev2_pane_g2_ParamLimits

0xed3a,	// (0x0007e3c3) field_cale_ev2_pane_g2

0xed52,	// (0x0007e3db) field_cale_ev2_pane_g3_ParamLimits

0xed52,	// (0x0007e3db) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x0007ee55) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x0007ee55) field_cale_ev2_pane_g

0xc68c,	// (0x0007bd15) field_cale_ev2_pane_t1_ParamLimits

0xc68c,	// (0x0007bd15) field_cale_ev2_pane_t1

0xc6a3,	// (0x0007bd2c) field_cale_ev2_pane_t2_ParamLimits

0xc6a3,	// (0x0007bd2c) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x0007ee5e) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x0007ee5e) field_cale_ev2_pane_t

0x4de1,	// (0x0007446a) main_postcard_pane_g5_ParamLimits

0x4de1,	// (0x0007446a) main_postcard_pane_g5

0x4df7,	// (0x00074480) main_postcard_pane_g6_ParamLimits

0x4df7,	// (0x00074480) main_postcard_pane_g6

0x30a7,	// (0x00072730) camera2_autofocus_pane_cp_ParamLimits

0x30a7,	// (0x00072730) camera2_autofocus_pane_cp

0xeab8,	// (0x0007e141) main_mup3_pane

0x6905,	// (0x00075f8e) main_mup3_pane_g1_ParamLimits

0x6905,	// (0x00075f8e) main_mup3_pane_g1

0x6927,	// (0x00075fb0) main_mup3_pane_g2_ParamLimits

0x6927,	// (0x00075fb0) main_mup3_pane_g2

0x69aa,	// (0x00076033) main_mup3_pane_g3_ParamLimits

0x69aa,	// (0x00076033) main_mup3_pane_g3

0x69ee,	// (0x00076077) main_mup3_pane_g4_ParamLimits

0x69ee,	// (0x00076077) main_mup3_pane_g4

0x6a32,	// (0x000760bb) main_mup3_pane_g5_ParamLimits

0x6a32,	// (0x000760bb) main_mup3_pane_g5

0x6a76,	// (0x000760ff) main_mup3_pane_g6_ParamLimits

0x6a76,	// (0x000760ff) main_mup3_pane_g6

0x6a89,	// (0x00076112) main_mup3_pane_g7_ParamLimits

0x6a89,	// (0x00076112) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x0007ee6e) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x0007ee6e) main_mup3_pane_g

0x6b00,	// (0x00076189) main_mup3_pane_t1_ParamLimits

0x6b00,	// (0x00076189) main_mup3_pane_t1

0x6b7a,	// (0x00076203) main_mup3_pane_t2_ParamLimits

0x6b7a,	// (0x00076203) main_mup3_pane_t2

0x6c54,	// (0x000762dd) main_mup3_pane_t4_ParamLimits

0x6c54,	// (0x000762dd) main_mup3_pane_t4

0x6cb2,	// (0x0007633b) main_mup3_pane_t5_ParamLimits

0x6cb2,	// (0x0007633b) main_mup3_pane_t5

0x6d6a,	// (0x000763f3) main_mup3_pane_t6_ParamLimits

0x6d6a,	// (0x000763f3) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x0007ee7f) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x0007ee7f) main_mup3_pane_t

0x6e20,	// (0x000764a9) mup3_progress_pane_ParamLimits

0x6e20,	// (0x000764a9) mup3_progress_pane

0x6ea4,	// (0x0007652d) popup_mup3_control_window_ParamLimits

0x6ea4,	// (0x0007652d) popup_mup3_control_window

0x6ec4,	// (0x0007654d) popup_mup3_text_window

0x6ee2,	// (0x0007656b) mup3_progress_pane_t1

0x6ef9,	// (0x00076582) mup3_progress_pane_t2

0x6f10,	// (0x00076599) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x0007ee8c) mup3_progress_pane_t

0x6f27,	// (0x000765b0) mup_progress_pane_cp03

0x1c70,	// (0x000712f9) bg_tb_trans_pane_cp04

0x6f37,	// (0x000765c0) mup3_volume_pane

0x6f3f,	// (0x000765c8) popup_mup3_control_window_g1

0x6f48,	// (0x000765d1) mup3_volume_pane_g1

0x6f51,	// (0x000765da) mup3_volume_pane_g2

0x6f5a,	// (0x000765e3) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x0007ee93) mup3_volume_pane_g

0x1c70,	// (0x000712f9) bg_tb_trans_pane_cp03

0x6f63,	// (0x000765ec) popup_mup3_text_window_g1

0x6f6b,	// (0x000765f4) popup_mup3_text_window_t1

0x2a67,	// (0x000720f0) list_calc_item_pane_g1_ParamLimits

0x0338,	// (0x0006f9c1) mup_volume_pane_cp_g1

0x6883,	// (0x00075f0c) main_touch_calib_pane_t3

0x6897,	// (0x00075f20) main_touch_calib_pane_t4

0x68ab,	// (0x00075f34) main_touch_calib_pane_t5

0x1c7a,	// (0x00071303) aid_cell_size_toolbar2

0x1c82,	// (0x0007130b) aid_popup3_width_pane

0xa997,	// (0x0007a020) aid_zoom_text_msg_primary

0xaaa9,	// (0x0007a132) vorec_t7

0x29cf,	// (0x00072058) bg_calc_paper_pane_g1_ParamLimits

0x29db,	// (0x00072064) bg_calc_paper_pane_g2_ParamLimits

0x29e7,	// (0x00072070) bg_calc_paper_pane_g3_ParamLimits

0x29f3,	// (0x0007207c) bg_calc_paper_pane_g4_ParamLimits

0x29ff,	// (0x00072088) bg_calc_paper_pane_g5_ParamLimits

0x2a0b,	// (0x00072094) bg_calc_paper_pane_g6_ParamLimits

0x2a1e,	// (0x000720a7) bg_calc_paper_pane_g7_ParamLimits

0x2a31,	// (0x000720ba) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0007e846) bg_calc_paper_pane_g_ParamLimits

0x2a42,	// (0x000720cb) calc_bg_paper_pane_g9_ParamLimits

0x3215,	// (0x0007289e) image_qvga_pane_ParamLimits

0x3215,	// (0x0007289e) image_qvga_pane

0x25f9,	// (0x00071c82) bg_popup_sub_pane_cp04_ParamLimits

0xb4db,	// (0x0007ab64) popup_mup_playback_window_g1_ParamLimits

0xb4e7,	// (0x0007ab70) popup_mup_playback_window_t1_ParamLimits

0xb4fc,	// (0x0007ab85) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0007ebd2) popup_mup_playback_window_t_ParamLimits

0x605d,	// (0x000756e6) main_mup2_pane_g3_ParamLimits

0x605d,	// (0x000756e6) main_mup2_pane_g3

0x355e,	// (0x00072be7) popup_toolbar_window_cp04

0xb8f7,	// (0x0007af80) popup_call2_audio_second_window_g3_ParamLimits

0xb8f7,	// (0x0007af80) popup_call2_audio_second_window_g3

0xbd01,	// (0x0007b38a) popup_call2_audio_first_window_g4_ParamLimits

0xbd01,	// (0x0007b38a) popup_call2_audio_first_window_g4

0xc380,	// (0x0007ba09) popup_call2_audio_in_window_g4_ParamLimits

0xc380,	// (0x0007ba09) popup_call2_audio_in_window_g4

0x4f28,	// (0x000745b1) aid_area_sk_bg_cut_ParamLimits

0x4f28,	// (0x000745b1) aid_area_sk_bg_cut

0xb511,	// (0x0007ab9a) aid_area_sk_bg_cut_2_ParamLimits

0xb511,	// (0x0007ab9a) aid_area_sk_bg_cut_2

0x6371,	// (0x000759fa) aid_placing_details_win

0x6379,	// (0x00075a02) aid_placing_details_win_2

0x65c2,	// (0x00075c4b) camera2_autofocus_pane_g1_ParamLimits

0x1e81,	// (0x0007150a) popup_fixed_preview_cale_window_ParamLimits

0x1e81,	// (0x0007150a) popup_fixed_preview_cale_window

0xb292,	// (0x0007a91b) navi_slider_pane_g3

0xb29b,	// (0x0007a924) navi_slider_pane_g4

0xb2a4,	// (0x0007a92d) navi_slider_pane_g5

0xb292,	// (0x0007a91b) navi_slider_pane_g6

0xb2ad,	// (0x0007a936) navi_slider_pane_g7

0xb3d0,	// (0x0007aa59) mup_scale_pane_g3

0xb3d9,	// (0x0007aa62) mup_scale_pane_g4

0xb3e2,	// (0x0007aa6b) mup_scale_pane_g5

0x4c88,	// (0x00074311) mup_scale_pane_g6

0x4c91,	// (0x0007431a) mup_scale_pane_g7

0xb292,	// (0x0007a91b) cams2_slider_pane_g3

0x03ba,	// (0x0006fa43) cams2_slider_pane_g4

0xed1d,	// (0x0007e3a6) cams2_slider_pane_g5

0xb292,	// (0x0007a91b) cams2_slider_pane_g6

0xed25,	// (0x0007e3ae) cams2_slider_pane_g7

0x643b,	// (0x00075ac4) camera2_autofocus_pane_cp_g1

0x6f79,	// (0x00076602) bg_popup_preview_window_pane_cp02_ParamLimits

0x6f79,	// (0x00076602) bg_popup_preview_window_pane_cp02

0x6f85,	// (0x0007660e) list_fp_cale_pane_ParamLimits

0x6f85,	// (0x0007660e) list_fp_cale_pane

0x6f91,	// (0x0007661a) popup_fixed_preview_cale_window_t1_ParamLimits

0x6f91,	// (0x0007661a) popup_fixed_preview_cale_window_t1

0x6fa3,	// (0x0007662c) popup_fixed_preview_cale_window_t2_ParamLimits

0x6fa3,	// (0x0007662c) popup_fixed_preview_cale_window_t2

0x6fb8,	// (0x00076641) popup_fixed_preview_cale_window_t3_ParamLimits

0x6fb8,	// (0x00076641) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0007ee9a) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0007ee9a) popup_fixed_preview_cale_window_t

0x6fdb,	// (0x00076664) list_single_fp_cale_pane_ParamLimits

0x6fdb,	// (0x00076664) list_single_fp_cale_pane

0x6ff3,	// (0x0007667c) list_single_fp_cale_pane_g1_ParamLimits

0x6ff3,	// (0x0007667c) list_single_fp_cale_pane_g1

0x6fff,	// (0x00076688) list_single_fp_cale_pane_g2_ParamLimits

0x6fff,	// (0x00076688) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x0007eea1) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x0007eea1) list_single_fp_cale_pane_g

0x7018,	// (0x000766a1) list_single_fp_cale_pane_t1_ParamLimits

0x7018,	// (0x000766a1) list_single_fp_cale_pane_t1

0x702a,	// (0x000766b3) list_single_fp_cale_pane_t2_ParamLimits

0x702a,	// (0x000766b3) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x0007eea8) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x0007eea8) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1c70,	// (0x000712f9) main_dialer_pane

0x705d,	// (0x000766e6) aid_cell_size_keypad

0x7067,	// (0x000766f0) dialer_ne_pane

0x7071,	// (0x000766fa) grid_dialer_command_1_pane

0x7079,	// (0x00076702) grid_dialer_command_2_pane

0x7081,	// (0x0007670a) grid_dialer_keypad_pane

0x7095,	// (0x0007671e) bg_popup_call_pane_cp06_ParamLimits

0x7095,	// (0x0007671e) bg_popup_call_pane_cp06

0x70a1,	// (0x0007672a) dialer_ne_clear_pane_ParamLimits

0x70a1,	// (0x0007672a) dialer_ne_clear_pane

0x70ad,	// (0x00076736) dialer_ne_pane_g1

0x70b5,	// (0x0007673e) dialer_ne_pane_t1_ParamLimits

0x70b5,	// (0x0007673e) dialer_ne_pane_t1

0x70c7,	// (0x00076750) dialer_ne_pane_t2_ParamLimits

0x70c7,	// (0x00076750) dialer_ne_pane_t2

0x70f1,	// (0x0007677a) dialer_ne_pane_t3_ParamLimits

0x70f1,	// (0x0007677a) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0007eead) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0007eead) dialer_ne_pane_t

0x7121,	// (0x000767aa) dialer_ne_pane_t3_copy1_ParamLimits

0x7121,	// (0x000767aa) dialer_ne_pane_t3_copy1

0x7150,	// (0x000767d9) cell_dialer_keypad_pane_ParamLimits

0x7150,	// (0x000767d9) cell_dialer_keypad_pane

0x7167,	// (0x000767f0) cell_dialer_command_1_pane_ParamLimits

0x7167,	// (0x000767f0) cell_dialer_command_1_pane

0x717d,	// (0x00076806) cell_dialer_command_2_pane_ParamLimits

0x717d,	// (0x00076806) cell_dialer_command_2_pane

0x718c,	// (0x00076815) bg_button_pane_cp02_ParamLimits

0x718c,	// (0x00076815) bg_button_pane_cp02

0x7198,	// (0x00076821) cell_dialer_keypad_pane_g1_ParamLimits

0x7198,	// (0x00076821) cell_dialer_keypad_pane_g1

0x718c,	// (0x00076815) bg_button_pane_cp03_ParamLimits

0x718c,	// (0x00076815) bg_button_pane_cp03

0x71ad,	// (0x00076836) cell_dialer_command_1_pane_g1_ParamLimits

0x71ad,	// (0x00076836) cell_dialer_command_1_pane_g1

0x71c1,	// (0x0007684a) bg_button_pane_cp04

0x71c9,	// (0x00076852) cell_dialer_command_2_pane_g1

0xb278,	// (0x0007a901) bg_button_pane_cp06

0x71d1,	// (0x0007685a) dialer_ne_clear_pane_g1

0x476a,	// (0x00073df3) navi_pane_g2

0x4798,	// (0x00073e21) navi_pane_g3

0x0002,

0xf44c,	// (0x0007ead5) navi_pane_g

0x47c3,	// (0x00073e4c) navi_pane_mv_g2

0x47ea,	// (0x00073e73) navi_pane_mv_g5

0x47f2,	// (0x00073e7b) navi_pane_mv_t1

0x2964,	// (0x00071fed) main_clock2_pane

0x7209,	// (0x00076892) main_clock2_list_pane_ParamLimits

0x7209,	// (0x00076892) main_clock2_list_pane

0x7241,	// (0x000768ca) main_clock2_pane_t1_ParamLimits

0x7241,	// (0x000768ca) main_clock2_pane_t1

0x727d,	// (0x00076906) main_clock2_pane_t2_ParamLimits

0x727d,	// (0x00076906) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x0007eeb4) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x0007eeb4) main_clock2_pane_t

0x7309,	// (0x00076992) popup_clock_analogue_window_cp03_ParamLimits

0x7309,	// (0x00076992) popup_clock_analogue_window_cp03

0x7330,	// (0x000769b9) popup_clock_digital_window_cp02_ParamLimits

0x7330,	// (0x000769b9) popup_clock_digital_window_cp02

0x73a9,	// (0x00076a32) main_clock2_list_single_pane_ParamLimits

0x73a9,	// (0x00076a32) main_clock2_list_single_pane

0xb278,	// (0x0007a901) list_highlight_pane_cp05

0x73bb,	// (0x00076a44) main_clock2_list_single_pane_t1

0x355e,	// (0x00072be7) popup_toolbar_window_cp04_ParamLimits

0x65d0,	// (0x00075c59) camera2_autofocus_pane_g2_ParamLimits

0x65d0,	// (0x00075c59) camera2_autofocus_pane_g2

0x65dc,	// (0x00075c65) camera2_autofocus_pane_g3_ParamLimits

0x65dc,	// (0x00075c65) camera2_autofocus_pane_g3

0x65e8,	// (0x00075c71) camera2_autofocus_pane_g4_ParamLimits

0x65e8,	// (0x00075c71) camera2_autofocus_pane_g4

0x65f4,	// (0x00075c7d) camera2_autofocus_pane_g5_ParamLimits

0x65f4,	// (0x00075c7d) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x0007edfd) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x0007edfd) camera2_autofocus_pane_g

0x68e5,	// (0x00075f6e) camera2_autofocus_pane_cp_g2

0x68ed,	// (0x00075f76) camera2_autofocus_pane_cp_g3

0x68f5,	// (0x00075f7e) camera2_autofocus_pane_cp_g4

0x68fd,	// (0x00075f86) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x0007ee63) camera2_autofocus_pane_cp_g

0x708d,	// (0x00076716) popup_dialer_spcha_window

0x1c70,	// (0x000712f9) bg_popup_sub_pane_cp07

0x746d,	// (0x00076af6) list_spcha_pane

0x7475,	// (0x00076afe) list_single_spcha_pane_ParamLimits

0x7475,	// (0x00076afe) list_single_spcha_pane

0x1c70,	// (0x000712f9) list_highlight_pane_cp06

0x7486,	// (0x00076b0f) list_single_spcha_pane_t1

0xc12a,	// (0x0007b7b3) popup_call2_audio_out_window_g4_ParamLimits

0xc12a,	// (0x0007b7b3) popup_call2_audio_out_window_g4

0x1c70,	// (0x000712f9) main_imed2_pane

0xeb57,	// (0x0007e1e0) popup_imed_adjust2_window

0x57ae,	// (0x00074e37) popup_imed_trans_window_ParamLimits

0x57ae,	// (0x00074e37) popup_imed_trans_window

0x0423,	// (0x0006faac) popup_blid_sat_info2_window_t1

0x0431,	// (0x0006faba) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0007ed92) popup_blid_sat_info2_window_t

0x7494,	// (0x00076b1d) aid_size_cell_colour_35

0x74b4,	// (0x00076b3d) aid_size_cell_colour_112

0x74d4,	// (0x00076b5d) aid_size_cell_effect

0xeb2b,	// (0x0007e1b4) bg_tb_trans_pane_cp02

0xacfe,	// (0x0007a387) heading_imed_pane

0x74f4,	// (0x00076b7d) listscroll_imed_pane

0x7500,	// (0x00076b89) heading_imed_pane_g1

0x7508,	// (0x00076b91) heading_imed_pane_t1

0x7516,	// (0x00076b9f) grid_imed_colour_35_pane_ParamLimits

0x7516,	// (0x00076b9f) grid_imed_colour_35_pane

0x7532,	// (0x00076bbb) grid_imed_effect_pane

0x7549,	// (0x00076bd2) list_imed_aspect_pane

0x7551,	// (0x00076bda) scroll_pane_cp027_ParamLimits

0x7551,	// (0x00076bda) scroll_pane_cp027

0x7562,	// (0x00076beb) cell_imed_effect_pane_ParamLimits

0x7562,	// (0x00076beb) cell_imed_effect_pane

0x7587,	// (0x00076c10) cell_imed_colour_pane_ParamLimits

0x7587,	// (0x00076c10) cell_imed_colour_pane

0x75d1,	// (0x00076c5a) cell_imed_colour_pane_g1_ParamLimits

0x75d1,	// (0x00076c5a) cell_imed_colour_pane_g1

0x75e2,	// (0x00076c6b) hgihlgiht_grid_pane_cp016_ParamLimits

0x75e2,	// (0x00076c6b) hgihlgiht_grid_pane_cp016

0x75f3,	// (0x00076c7c) cell_imed_effect_pane_g1

0x75fb,	// (0x00076c84) grid_highlight_pane_cp017

0x7604,	// (0x00076c8d) list_imed_single_pane_ParamLimits

0x7604,	// (0x00076c8d) list_imed_single_pane

0x1c70,	// (0x000712f9) list_highlight_pane_cp07

0xc6b8,	// (0x0007bd41) list_imed_aspect_pane_comp1_t1

0xeb2b,	// (0x0007e1b4) bg_tb_trans_pane_cp05

0xc6da,	// (0x0007bd63) popup_imed_adjust2_window_g1

0xc701,	// (0x0007bd8a) popup_imed_adjust2_window_t1

0xc719,	// (0x0007bda2) slider_imed_adjust_pane

0xc72d,	// (0x0007bdb6) slider_imed_adjust_pane_g1

0xc73d,	// (0x0007bdc6) slider_imed_adjust_pane_g2

0xc74d,	// (0x0007bdd6) slider_imed_adjust_pane_g3

0xc75e,	// (0x0007bde7) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x0007eed1) slider_imed_adjust_pane_g

0x7618,	// (0x00076ca1) aid_size_cell_clipart2

0x7624,	// (0x00076cad) grid_imed_clipart_pane

0xc76f,	// (0x0007bdf8) scroll_pane_cp031

0x762e,	// (0x00076cb7) cell_imed_clipart_pane_ParamLimits

0x762e,	// (0x00076cb7) cell_imed_clipart_pane

0x764b,	// (0x00076cd4) cell_imed_clipart_pane_g1

0x1c70,	// (0x000712f9) grid_highlight_pane_cp014

0x721e,	// (0x000768a7) main_clock2_pane_g1_ParamLimits

0x721e,	// (0x000768a7) main_clock2_pane_g1

0x7350,	// (0x000769d9) aid_call2_pane_cp10

0x7362,	// (0x000769eb) aid_call_pane_cp10

0xb1ad,	// (0x0007a836) popup_clock_analogue_window_cp10_g1

0xb1ad,	// (0x0007a836) popup_clock_analogue_window_cp10_g2

0x7374,	// (0x000769fd) popup_clock_analogue_window_cp10_g3

0x7374,	// (0x000769fd) popup_clock_analogue_window_cp10_g4

0xb1ad,	// (0x0007a836) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0007eebf) popup_clock_analogue_window_cp10_g

0x738a,	// (0x00076a13) popup_clock_analogue_window_cp10_t1

0x73c9,	// (0x00076a52) clock_digital_number_pane_cp10_ParamLimits

0x73c9,	// (0x00076a52) clock_digital_number_pane_cp10

0x73e3,	// (0x00076a6c) clock_digital_number_pane_cp11_ParamLimits

0x73e3,	// (0x00076a6c) clock_digital_number_pane_cp11

0x73fd,	// (0x00076a86) clock_digital_number_pane_cp12_ParamLimits

0x73fd,	// (0x00076a86) clock_digital_number_pane_cp12

0x7417,	// (0x00076aa0) clock_digital_number_pane_cp13_ParamLimits

0x7417,	// (0x00076aa0) clock_digital_number_pane_cp13

0x7431,	// (0x00076aba) clock_digital_separator_pane_cp10_ParamLimits

0x7431,	// (0x00076aba) clock_digital_separator_pane_cp10

0x744b,	// (0x00076ad4) popup_clock_digital_window_cp02_t1_ParamLimits

0x744b,	// (0x00076ad4) popup_clock_digital_window_cp02_t1

0x25f1,	// (0x00071c7a) clock_digital_number_pane_cp10_g1

0x25f1,	// (0x00071c7a) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0007eeda) clock_digital_number_pane_cp10_g

0x25f1,	// (0x00071c7a) clock_digital_separator_pane_cp10_g1

0x25f1,	// (0x00071c7a) clock_digital_separator_pane_g2_cp10

0xb248,	// (0x0007a8d1) navi_pane_vded_g4

0xb251,	// (0x0007a8da) navi_pane_vded_g5

0xb25a,	// (0x0007a8e3) navi_pane_vded_t1

0x1c70,	// (0x000712f9) main_vded_pane

0x7654,	// (0x00076cdd) main_vded_pane_g1

0x7660,	// (0x00076ce9) main_vded_pane_g2

0x766c,	// (0x00076cf5) main_vded_pane_g3

0x0002,

0xf856,	// (0x0007eedf) main_vded_pane_g

0x7678,	// (0x00076d01) main_vded_pane_t1

0x7686,	// (0x00076d0f) main_vded_pane_t2

0x0001,

0xf85d,	// (0x0007eee6) main_vded_pane_t

0x7694,	// (0x00076d1d) vded_slider_pane

0x769e,	// (0x00076d27) vded_video_pane

0xc777,	// (0x0007be00) vded_video_pane_g1

0x76aa,	// (0x00076d33) vded_video_pane_g2

0x643b,	// (0x00075ac4) vded_video_pane_g3

0x0002,

0xf862,	// (0x0007eeeb) vded_video_pane_g

0xc781,	// (0x0007be0a) vded_slider_pane_g1

0x0338,	// (0x0006f9c1) vded_slider_pane_g2

0xc78a,	// (0x0007be13) vded_slider_pane_g3

0xc793,	// (0x0007be1c) vded_slider_pane_g4

0xc79c,	// (0x0007be25) vded_slider_pane_g5

0x0004,

0xf869,	// (0x0007eef2) vded_slider_pane_g

0x6e8e,	// (0x00076517) mup3_rocker_pane_ParamLimits

0x6e8e,	// (0x00076517) mup3_rocker_pane

0x76b3,	// (0x00076d3c) mup3_control_keys_pane_g1

0x76bb,	// (0x00076d44) mup3_control_keys_pane_g2

0x76c3,	// (0x00076d4c) mup3_control_keys_pane_g3

0x76cb,	// (0x00076d54) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0007eefd) mup3_control_keys_pane_g

0x1ec2,	// (0x0007154b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1ec2,	// (0x0007154b) popup_toolbar2_fixed_window_cp01

0x6ecc,	// (0x00076555) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6ecc,	// (0x00076555) popup_toolbar2_fixed_window_cp02

0xba69,	// (0x0007b0f2) popup_call2_audio_second_window_t4_ParamLimits

0xba69,	// (0x0007b0f2) popup_call2_audio_second_window_t4

0xbf97,	// (0x0007b620) popup_call2_audio_first_window_t6_ParamLimits

0xbf97,	// (0x0007b620) popup_call2_audio_first_window_t6

0xc22d,	// (0x0007b8b6) popup_call2_audio_out_window_t6_ParamLimits

0xc22d,	// (0x0007b8b6) popup_call2_audio_out_window_t6

0x1c70,	// (0x000712f9) main_vitu_pane

0x76db,	// (0x00076d64) aid_size_cell_itu_ParamLimits

0x76db,	// (0x00076d64) aid_size_cell_itu

0xeab8,	// (0x0007e141) bg_popup_window_pane_cp08_ParamLimits

0xeab8,	// (0x0007e141) bg_popup_window_pane_cp08

0x76f1,	// (0x00076d7a) field_vitu_entry_pane_ParamLimits

0x76f1,	// (0x00076d7a) field_vitu_entry_pane

0x7708,	// (0x00076d91) grid_vitu_function_pane_ParamLimits

0x7708,	// (0x00076d91) grid_vitu_function_pane

0x7723,	// (0x00076dac) grid_vitu_itu_pane_ParamLimits

0x7723,	// (0x00076dac) grid_vitu_itu_pane

0x7741,	// (0x00076dca) cell_vitu_itu_pane_ParamLimits

0x7741,	// (0x00076dca) cell_vitu_itu_pane

0x7767,	// (0x00076df0) cell_vitu_function_pane_ParamLimits

0x7767,	// (0x00076df0) cell_vitu_function_pane

0xeab8,	// (0x0007e141) bg_popup_sub_pane_cp08_ParamLimits

0xeab8,	// (0x0007e141) bg_popup_sub_pane_cp08

0x7782,	// (0x00076e0b) field_vitu_entry_pane_t1_ParamLimits

0x7782,	// (0x00076e0b) field_vitu_entry_pane_t1

0xc7bd,	// (0x0007be46) field_vitu_entry_pane_t2_ParamLimits

0xc7bd,	// (0x0007be46) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0007ef0b) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0007ef0b) field_vitu_entry_pane_t

0xc7da,	// (0x0007be63) bg_button_pane_cp05_ParamLimits

0xc7da,	// (0x0007be63) bg_button_pane_cp05

0x77a2,	// (0x00076e2b) cell_vitu_itu_pane_g1

0x77ba,	// (0x00076e43) cell_vitu_itu_pane_t1_ParamLimits

0x77ba,	// (0x00076e43) cell_vitu_itu_pane_t1

0x77cc,	// (0x00076e55) cell_vitu_itu_pane_t2_ParamLimits

0x77cc,	// (0x00076e55) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0007ef10) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0007ef10) cell_vitu_itu_pane_t

0xc7e8,	// (0x0007be71) bg_button_pane_cp07

0x7801,	// (0x00076e8a) cell_vitu_function_pane_g1

0xa9af,	// (0x0007a038) main_calc_pane_g1

0x1cb2,	// (0x0007133b) aid_visual_content_pane

0x1c70,	// (0x000712f9) main_vradio_pane

0x780a,	// (0x00076e93) main_vradio_pane_g1_ParamLimits

0x780a,	// (0x00076e93) main_vradio_pane_g1

0xc7f2,	// (0x0007be7b) main_vradio_pane_g2_ParamLimits

0xc7f2,	// (0x0007be7b) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x0007ef17) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x0007ef17) main_vradio_pane_g

0x7821,	// (0x00076eaa) main_vradio_pane_t1_ParamLimits

0x7821,	// (0x00076eaa) main_vradio_pane_t1

0x7836,	// (0x00076ebf) main_vradio_pane_t2_ParamLimits

0x7836,	// (0x00076ebf) main_vradio_pane_t2

0xc7ff,	// (0x0007be88) main_vradio_pane_t3_ParamLimits

0xc7ff,	// (0x0007be88) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0007ef1c) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0007ef1c) main_vradio_pane_t

0x784b,	// (0x00076ed4) vradio_rocker_control_pane_ParamLimits

0x784b,	// (0x00076ed4) vradio_rocker_control_pane

0x785d,	// (0x00076ee6) vradio_station_info_pane_ParamLimits

0x785d,	// (0x00076ee6) vradio_station_info_pane

0xc813,	// (0x0007be9c) vradio_frequency_info_pane_ParamLimits

0xc813,	// (0x0007be9c) vradio_frequency_info_pane

0x643b,	// (0x00075ac4) vradio_station_info_pane_g1

0xc822,	// (0x0007beab) vradio_station_info_pane_t1_ParamLimits

0xc822,	// (0x0007beab) vradio_station_info_pane_t1

0xc844,	// (0x0007becd) vradio_station_info_pane_t2_ParamLimits

0xc844,	// (0x0007becd) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x0007ef23) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x0007ef23) vradio_station_info_pane_t

0xc856,	// (0x0007bedf) vradio_tuning_pane

0xc85e,	// (0x0007bee7) vradio_rocker_control_pane_g1

0xc866,	// (0x0007beef) vradio_rocker_control_pane_g2

0xc86e,	// (0x0007bef7) vradio_rocker_control_pane_g3

0xc876,	// (0x0007beff) vradio_rocker_control_pane_g4

0xc87e,	// (0x0007bf07) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0007ef28) vradio_rocker_control_pane_g

0x786d,	// (0x00076ef6) vradio_frequency_info_pane_g1

0xc886,	// (0x0007bf0f) vradio_frequency_info_pane_t1_ParamLimits

0xc886,	// (0x0007bf0f) vradio_frequency_info_pane_t1

0x7877,	// (0x00076f00) vradio_tuning_pane_g1

0x7882,	// (0x00076f0b) vradio_tuning_pane_t1

0x1cf7,	// (0x00071380) area_side_right_pane_ParamLimits

0x1cf7,	// (0x00071380) area_side_right_pane

0xeaf2,	// (0x0007e17b) status_small_pane_g1

0xeafa,	// (0x0007e183) status_small_pane_g2

0xeb03,	// (0x0007e18c) status_small_pane_g3

0xeb0c,	// (0x0007e195) status_small_pane_g4

0x0003,

0xf65f,	// (0x0007ece8) status_small_pane_g

0xeb15,	// (0x0007e19e) status_small_pane_t1

0x1c70,	// (0x000712f9) main_video3_pane

0xc89a,	// (0x0007bf23) cams_zoom_vslider_pane

0xc8a2,	// (0x0007bf2b) image3_wide_pane_ParamLimits

0xc8a2,	// (0x0007bf2b) image3_wide_pane

0xc8bc,	// (0x0007bf45) image3_wide_small_pane

0xc8c8,	// (0x0007bf51) main_video3_pane_g1_ParamLimits

0xc8c8,	// (0x0007bf51) main_video3_pane_g1

0xc8e4,	// (0x0007bf6d) main_video3_pane_g2_ParamLimits

0xc8e4,	// (0x0007bf6d) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x0007ef33) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x0007ef33) main_video3_pane_g

0xc900,	// (0x0007bf89) main_video3_pane_t1_ParamLimits

0xc900,	// (0x0007bf89) main_video3_pane_t1

0xc92b,	// (0x0007bfb4) main_video3_pane_t2_ParamLimits

0xc92b,	// (0x0007bfb4) main_video3_pane_t2

0xc958,	// (0x0007bfe1) main_video3_pane_t3_ParamLimits

0xc958,	// (0x0007bfe1) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0007ef38) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0007ef38) main_video3_pane_t

0xc985,	// (0x0007c00e) cams_zoom_vslider_pane_g1

0xc98e,	// (0x0007c017) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x0007ef3f) cams_zoom_vslider_pane_g

0xc996,	// (0x0007c01f) small_slider_vertical_pane

0x643b,	// (0x00075ac4) small_slider_vertical_pane_g1

0x643b,	// (0x00075ac4) small_slider_vertical_pane_g2

0xc99e,	// (0x0007c027) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x0007ef44) small_slider_vertical_pane_g

0x1c70,	// (0x000712f9) main_hwr_training_pane

0xc9a7,	// (0x0007c030) hwr_training_instruct_pane_ParamLimits

0xc9a7,	// (0x0007c030) hwr_training_instruct_pane

0x7891,	// (0x00076f1a) hwr_training_navi_pane_ParamLimits

0x7891,	// (0x00076f1a) hwr_training_navi_pane

0x78b0,	// (0x00076f39) hwr_training_write_pane_ParamLimits

0x78b0,	// (0x00076f39) hwr_training_write_pane

0x1c70,	// (0x000712f9) bg_frame_shadow_pane

0xc9de,	// (0x0007c067) hwr_training_write_pane_g1

0xc9e6,	// (0x0007c06f) hwr_training_write_pane_g2

0xc9ee,	// (0x0007c077) hwr_training_write_pane_g3

0xc9f6,	// (0x0007c07f) hwr_training_write_pane_g4

0xc9fe,	// (0x0007c087) hwr_training_write_pane_g5

0xca06,	// (0x0007c08f) hwr_training_write_pane_g6

0xca0e,	// (0x0007c097) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0007ef4b) hwr_training_write_pane_g

0xed76,	// (0x0007e3ff) hwr_training_navi_pane_g1_ParamLimits

0xed76,	// (0x0007e3ff) hwr_training_navi_pane_g1

0xed88,	// (0x0007e411) hwr_training_navi_pane_g2_ParamLimits

0xed88,	// (0x0007e411) hwr_training_navi_pane_g2

0xed9a,	// (0x0007e423) hwr_training_navi_pane_g3_ParamLimits

0xed9a,	// (0x0007e423) hwr_training_navi_pane_g3

0xedaa,	// (0x0007e433) hwr_training_navi_pane_g4_ParamLimits

0xedaa,	// (0x0007e433) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0007ef5a) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0007ef5a) hwr_training_navi_pane_g

0xedb7,	// (0x0007e440) hwr_training_navi_pane_t1

0x78f8,	// (0x00076f81) list_single_hwr_training_instruct_pane_ParamLimits

0x78f8,	// (0x00076f81) list_single_hwr_training_instruct_pane

0xca16,	// (0x0007c09f) list_single_hwr_training_instruct_pane_t1

0x052b,	// (0x0006fbb4) bg_frame_shadow_pane_g1

0xca25,	// (0x0007c0ae) bg_frame_shadow_pane_g2

0xca2d,	// (0x0007c0b6) bg_frame_shadow_pane_g3

0xca35,	// (0x0007c0be) bg_frame_shadow_pane_g4

0xca3d,	// (0x0007c0c6) bg_frame_shadow_pane_g5

0xca45,	// (0x0007c0ce) bg_frame_shadow_pane_g6

0xca4d,	// (0x0007c0d6) bg_frame_shadow_pane_g7

0x2bac,	// (0x00072235) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x0007ef65) bg_frame_shadow_pane_g

0x1c70,	// (0x000712f9) main_video_tele_dialer_pane

0x7914,	// (0x00076f9d) aid_size_cell_video_keypad_ParamLimits

0x7914,	// (0x00076f9d) aid_size_cell_video_keypad

0x792e,	// (0x00076fb7) grid_video_dialer_keypad_pane_ParamLimits

0x792e,	// (0x00076fb7) grid_video_dialer_keypad_pane

0x797c,	// (0x00077005) video_down_pane_cp_ParamLimits

0x797c,	// (0x00077005) video_down_pane_cp

0x79b0,	// (0x00077039) cell_video_dialer_keypad_pane_ParamLimits

0x79b0,	// (0x00077039) cell_video_dialer_keypad_pane

0xca55,	// (0x0007c0de) bg_button_pane_cp08_ParamLimits

0xca55,	// (0x0007c0de) bg_button_pane_cp08

0x79d6,	// (0x0007705f) cell_video_dialer_keypad_pane_g1_ParamLimits

0x79d6,	// (0x0007705f) cell_video_dialer_keypad_pane_g1

0x6e78,	// (0x00076501) mup3_rocker2_pane_ParamLimits

0x6e78,	// (0x00076501) mup3_rocker2_pane

0x643b,	// (0x00075ac4) mup3_rocker2_pane_g1

0x567b,	// (0x00074d04) main_dialer2_pane

0x1c70,	// (0x000712f9) main_mp4_pane

0xedcd,	// (0x0007e456) main_mp4_pane_g1_ParamLimits

0xedcd,	// (0x0007e456) main_mp4_pane_g1

0xedcd,	// (0x0007e456) main_mp4_pane_g2_ParamLimits

0xedcd,	// (0x0007e456) main_mp4_pane_g2

0x7a11,	// (0x0007709a) main_mp4_pane_g3_ParamLimits

0x7a11,	// (0x0007709a) main_mp4_pane_g3

0xeddb,	// (0x0007e464) main_mp4_pane_g4_ParamLimits

0xeddb,	// (0x0007e464) main_mp4_pane_g4

0xedf5,	// (0x0007e47e) main_mp4_pane_g5_ParamLimits

0xedf5,	// (0x0007e47e) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x0007ef85) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x0007ef85) main_mp4_pane_g

0xee29,	// (0x0007e4b2) main_mp4_pane_t1_ParamLimits

0xee29,	// (0x0007e4b2) main_mp4_pane_t1

0xee85,	// (0x0007e50e) main_mp4_pane_t2_ParamLimits

0xee85,	// (0x0007e50e) main_mp4_pane_t2

0xca61,	// (0x0007c0ea) main_mp4_pane_t3_ParamLimits

0xca61,	// (0x0007c0ea) main_mp4_pane_t3

0xeed7,	// (0x0007e560) main_mp4_pane_t4_ParamLimits

0xeed7,	// (0x0007e560) main_mp4_pane_t4

0x0003,

0xf909,	// (0x0007ef92) main_mp4_pane_t_ParamLimits

0xf909,	// (0x0007ef92) main_mp4_pane_t

0xef17,	// (0x0007e5a0) mp4_progress_pane_ParamLimits

0xef17,	// (0x0007e5a0) mp4_progress_pane

0xef61,	// (0x0007e5ea) mp4_rocker_pane_ParamLimits

0xef61,	// (0x0007e5ea) mp4_rocker_pane

0xca89,	// (0x0007c112) mp4_progress_pane_t1

0xcaa2,	// (0x0007c12b) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0007ef9b) mp4_progress_pane_t

0xcabb,	// (0x0007c144) mup_progress_pane_cp04

0x643b,	// (0x00075ac4) mp4_rocker_pane_g1

0x7a5b,	// (0x000770e4) aid_cell_size_keypad2_ParamLimits

0x7a5b,	// (0x000770e4) aid_cell_size_keypad2

0x7a71,	// (0x000770fa) dialer2_ne_pane_ParamLimits

0x7a71,	// (0x000770fa) dialer2_ne_pane

0x7a89,	// (0x00077112) grid_dialer2_keypad_pane_ParamLimits

0x7a89,	// (0x00077112) grid_dialer2_keypad_pane

0x03ca,	// (0x0006fa53) bg_popup_call_pane_cp07_ParamLimits

0x03ca,	// (0x0006fa53) bg_popup_call_pane_cp07

0x7aa5,	// (0x0007712e) dialer2_ne_pane_t1_ParamLimits

0x7aa5,	// (0x0007712e) dialer2_ne_pane_t1

0x7ae5,	// (0x0007716e) cell_dialer2_keypad_pane_ParamLimits

0x7ae5,	// (0x0007716e) cell_dialer2_keypad_pane

0xcad9,	// (0x0007c162) bg_button_pane_pane_cp04_ParamLimits

0xcad9,	// (0x0007c162) bg_button_pane_pane_cp04

0x7b0b,	// (0x00077194) cell_dialer2_keypad_pane_g1_ParamLimits

0x7b0b,	// (0x00077194) cell_dialer2_keypad_pane_g1

0x3472,	// (0x00072afb) aid_placing_vt_set_content_ParamLimits

0x3472,	// (0x00072afb) aid_placing_vt_set_content

0x3492,	// (0x00072b1b) aid_placing_vt_set_title_ParamLimits

0x3492,	// (0x00072b1b) aid_placing_vt_set_title

0x1c70,	// (0x000712f9) main_image3_pane

0x7bd1,	// (0x0007725a) area_side_right_pane_cp01_ParamLimits

0x7bd1,	// (0x0007725a) area_side_right_pane_cp01

0xedcd,	// (0x0007e456) main_image3_pane_g1_ParamLimits

0xedcd,	// (0x0007e456) main_image3_pane_g1

0x7bea,	// (0x00077273) main_image3_pane_g2_ParamLimits

0x7bea,	// (0x00077273) main_image3_pane_g2

0x7c12,	// (0x0007729b) main_image3_pane_g3_ParamLimits

0x7c12,	// (0x0007729b) main_image3_pane_g3

0x7c3c,	// (0x000772c5) main_image3_pane_g4_ParamLimits

0x7c3c,	// (0x000772c5) main_image3_pane_g4

0x0003,

0xf921,	// (0x0007efaa) main_image3_pane_g_ParamLimits

0xf921,	// (0x0007efaa) main_image3_pane_g

0x7c66,	// (0x000772ef) main_image3_pane_t1_ParamLimits

0x7c66,	// (0x000772ef) main_image3_pane_t1

0x7cbe,	// (0x00077347) main_image3_pane_t2_ParamLimits

0x7cbe,	// (0x00077347) main_image3_pane_t2

0x7d10,	// (0x00077399) main_image3_pane_t3_ParamLimits

0x7d10,	// (0x00077399) main_image3_pane_t3

0x0003,

0xf92a,	// (0x0007efb3) main_image3_pane_t_ParamLimits

0xf92a,	// (0x0007efb3) main_image3_pane_t

0xeab8,	// (0x0007e141) grid_sctrl_middle_pane_cp01_ParamLimits

0xeab8,	// (0x0007e141) grid_sctrl_middle_pane_cp01

0x7d98,	// (0x00077421) cell_sctrl_middle_pane_cp01_ParamLimits

0x7d98,	// (0x00077421) cell_sctrl_middle_pane_cp01

0x7db5,	// (0x0007743e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7db5,	// (0x0007743e) cell_sctrl_middle_pane_cp01_g1

0x1c70,	// (0x000712f9) main_call4_pane

0x7dca,	// (0x00077453) aid_size_button_call4_ParamLimits

0x7dca,	// (0x00077453) aid_size_button_call4

0x7dfd,	// (0x00077486) call4_windows_pane_ParamLimits

0x7dfd,	// (0x00077486) call4_windows_pane

0x7e1f,	// (0x000774a8) grid_call4_button_pane_ParamLimits

0x7e1f,	// (0x000774a8) grid_call4_button_pane

0xcae5,	// (0x0007c16e) call4_windows_conf_pane

0xcb00,	// (0x0007c189) popup_call4_audio_first_window_ParamLimits

0xcb00,	// (0x0007c189) popup_call4_audio_first_window

0xcb4e,	// (0x0007c1d7) popup_call4_audio_second_window_ParamLimits

0xcb4e,	// (0x0007c1d7) popup_call4_audio_second_window

0xcb64,	// (0x0007c1ed) popup_call4_audio_wait_window_ParamLimits

0xcb64,	// (0x0007c1ed) popup_call4_audio_wait_window

0x7e4a,	// (0x000774d3) cell_call4_button_pane_ParamLimits

0x7e4a,	// (0x000774d3) cell_call4_button_pane

0x7e71,	// (0x000774fa) bg_button_pane_cp09_ParamLimits

0x7e71,	// (0x000774fa) bg_button_pane_cp09

0x7e7d,	// (0x00077506) cell_call4_button_pane_g1_ParamLimits

0x7e7d,	// (0x00077506) cell_call4_button_pane_g1

0x7ea3,	// (0x0007752c) cell_call4_button_pane_t1_ParamLimits

0x7ea3,	// (0x0007752c) cell_call4_button_pane_t1

0xcbac,	// (0x0007c235) popup_call4_audio_conf_window_ParamLimits

0xcbac,	// (0x0007c235) popup_call4_audio_conf_window

0x6ee2,	// (0x0007656b) mup3_progress_pane_t1_ParamLimits

0x6ef9,	// (0x00076582) mup3_progress_pane_t2_ParamLimits

0x6f10,	// (0x00076599) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x0007ee8c) mup3_progress_pane_t_ParamLimits

0x6f27,	// (0x000765b0) mup_progress_pane_cp03_ParamLimits

0x76d3,	// (0x00076d5c) mup3_control_keys_pane_g4_copy1

0xef45,	// (0x0007e5ce) mp4_rocker2_pane_ParamLimits

0xef45,	// (0x0007e5ce) mp4_rocker2_pane

0xcbc6,	// (0x0007c24f) mp4_rocker2_pane_g1

0xcbce,	// (0x0007c257) mp4_rocker2_pane_g2

0xefb7,	// (0x0007e640) mp4_rocker2_pane_g3

0xefbf,	// (0x0007e648) mp4_rocker2_pane_g4

0xefc7,	// (0x0007e650) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0007efbc) mp4_rocker2_pane_g

0x1c70,	// (0x000712f9) main_camera4_pane

0x1c70,	// (0x000712f9) main_video4_pane

0x794a,	// (0x00076fd3) main_video_tele_dialer_pane_t1_ParamLimits

0x794a,	// (0x00076fd3) main_video_tele_dialer_pane_t1

0x7963,	// (0x00076fec) main_video_tele_dialer_pane_t2_ParamLimits

0x7963,	// (0x00076fec) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0007ef76) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0007ef76) main_video_tele_dialer_pane_t

0x7ee1,	// (0x0007756a) cam4_autofocus_pane_ParamLimits

0x7ee1,	// (0x0007756a) cam4_autofocus_pane

0x7ef7,	// (0x00077580) cam4_image_uncrop_pane_ParamLimits

0x7ef7,	// (0x00077580) cam4_image_uncrop_pane

0x7f10,	// (0x00077599) cam4_indicators_pane_ParamLimits

0x7f10,	// (0x00077599) cam4_indicators_pane

0x7f3f,	// (0x000775c8) main_camera4_pane_g1_ParamLimits

0x7f3f,	// (0x000775c8) main_camera4_pane_g1

0x7f4b,	// (0x000775d4) main_camera4_pane_g2_ParamLimits

0x7f4b,	// (0x000775d4) main_camera4_pane_g2

0x7f57,	// (0x000775e0) main_camera4_pane_g3_ParamLimits

0x7f57,	// (0x000775e0) main_camera4_pane_g3

0x7f63,	// (0x000775ec) main_camera4_pane_g4_ParamLimits

0x7f63,	// (0x000775ec) main_camera4_pane_g4

0x7f6f,	// (0x000775f8) main_camera4_pane_g5_ParamLimits

0x7f6f,	// (0x000775f8) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x0007efc7) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x0007efc7) main_camera4_pane_g

0x7f8c,	// (0x00077615) main_camera4_pane_t1_ParamLimits

0x7f8c,	// (0x00077615) main_camera4_pane_t1

0x6a89,	// (0x00076112) bg_tb_trans_pane_cp06

0x7fc4,	// (0x0007764d) cam4_indicators_pane_g1

0x7fd1,	// (0x0007765a) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x0007efd9) cam4_indicators_pane_g

0x7fe9,	// (0x00077672) cam4_indicators_pane_t1

0x8013,	// (0x0007769c) main_video4_pane_g1_ParamLimits

0x8013,	// (0x0007769c) main_video4_pane_g1

0x8025,	// (0x000776ae) main_video4_pane_g2_ParamLimits

0x8025,	// (0x000776ae) main_video4_pane_g2

0x8039,	// (0x000776c2) main_video4_pane_g3_ParamLimits

0x8039,	// (0x000776c2) main_video4_pane_g3

0x8049,	// (0x000776d2) main_video4_pane_g4_ParamLimits

0x8049,	// (0x000776d2) main_video4_pane_g4

0x0004,

0xf957,	// (0x0007efe0) main_video4_pane_g_ParamLimits

0xf957,	// (0x0007efe0) main_video4_pane_g

0x8069,	// (0x000776f2) vid4_indicators_pane_ParamLimits

0x8069,	// (0x000776f2) vid4_indicators_pane

0x8099,	// (0x00077722) video4_image_uncrop_cif_pane_ParamLimits

0x8099,	// (0x00077722) video4_image_uncrop_cif_pane

0x80b3,	// (0x0007773c) video4_image_uncrop_nhd_pane_ParamLimits

0x80b3,	// (0x0007773c) video4_image_uncrop_nhd_pane

0x7ef7,	// (0x00077580) video4_image_uncrop_vga_pane_ParamLimits

0x7ef7,	// (0x00077580) video4_image_uncrop_vga_pane

0xcbd6,	// (0x0007c25f) bg_tb_trans_pane_cp07

0x7fc4,	// (0x0007764d) vid4_indicators_pane_g1

0x80c9,	// (0x00077752) vid4_indicators_pane_g2

0x80d6,	// (0x0007775f) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0007efeb) vid4_indicators_pane_g

0x80ef,	// (0x00077778) vid4_indicators_pane_t1

0x8101,	// (0x0007778a) cam4_autofocus_pane_g1

0x8109,	// (0x00077792) cam4_autofocus_pane_g2

0x8111,	// (0x0007779a) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x0007eff6) cam4_autofocus_pane_g

0x8119,	// (0x000777a2) cam4_autofocus_pane_g3_copy1

0x7994,	// (0x0007701d) video_down_pane_cp_t1

0x79a2,	// (0x0007702b) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0007ef7b) video_down_pane_cp_t

0xeab8,	// (0x0007e141) popup_vitu2_window_ParamLimits

0xeab8,	// (0x0007e141) popup_vitu2_window

0x8121,	// (0x000777aa) aid_size_cell2_itu2_ParamLimits

0x8121,	// (0x000777aa) aid_size_cell2_itu2

0x8147,	// (0x000777d0) aid_size_cell_itu2_ParamLimits

0x8147,	// (0x000777d0) aid_size_cell_itu2

0x81a5,	// (0x0007782e) bg_popup_window_pane_cp09_ParamLimits

0x81a5,	// (0x0007782e) bg_popup_window_pane_cp09

0x81b3,	// (0x0007783c) field_vitu2_entry_pane_ParamLimits

0x81b3,	// (0x0007783c) field_vitu2_entry_pane

0x81db,	// (0x00077864) grid_vitu2_function_pane_ParamLimits

0x81db,	// (0x00077864) grid_vitu2_function_pane

0x822c,	// (0x000778b5) grid_vitu2_itu_pane_ParamLimits

0x822c,	// (0x000778b5) grid_vitu2_itu_pane

0x82b7,	// (0x00077940) cell_vitu2_itu_pane_ParamLimits

0x82b7,	// (0x00077940) cell_vitu2_itu_pane

0x82dd,	// (0x00077966) cell_vitu2_function_pane_ParamLimits

0x82dd,	// (0x00077966) cell_vitu2_function_pane

0xcbe4,	// (0x0007c26d) bg_popup_call_pane_cp08_ParamLimits

0xcbe4,	// (0x0007c26d) bg_popup_call_pane_cp08

0xcbfd,	// (0x0007c286) field_vitu2_entry_pane_g1

0xcc09,	// (0x0007c292) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0007effd) field_vitu2_entry_pane_g

0x1523,	// (0x00070bac) field_vitu2_entry_pane_t1_ParamLimits

0x1523,	// (0x00070bac) field_vitu2_entry_pane_t1

0xcc23,	// (0x0007c2ac) field_vitu2_entry_pane_t2_ParamLimits

0xcc23,	// (0x0007c2ac) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x0007f004) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x0007f004) field_vitu2_entry_pane_t

0x8321,	// (0x000779aa) bg_button_pane_cp010_ParamLimits

0x8321,	// (0x000779aa) bg_button_pane_cp010

0x832f,	// (0x000779b8) cell_vitu2_itu_pane_g1

0x834d,	// (0x000779d6) cell_vitu2_itu_pane_t1_ParamLimits

0x834d,	// (0x000779d6) cell_vitu2_itu_pane_t1

0x1540,	// (0x00070bc9) cell_vitu2_itu_pane_t2_ParamLimits

0x1540,	// (0x00070bc9) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0007f00e) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0007f00e) cell_vitu2_itu_pane_t

0xeab8,	// (0x0007e141) bg_button_pane_cp011

0x83b3,	// (0x00077a3c) cell_vitu2_function_pane_g1

0x1c70,	// (0x000712f9) main_myfav_hc_pane

0x7d60,	// (0x000773e9) popup_image3_note_pane_ParamLimits

0x7d60,	// (0x000773e9) popup_image3_note_pane

0x7d7c,	// (0x00077405) popup_image3_tool_bar_pane_ParamLimits

0x7d7c,	// (0x00077405) popup_image3_tool_bar_pane

0x15c4,	// (0x00070c4d) cell_vitu2_itu_pane_t3_ParamLimits

0x15c4,	// (0x00070c4d) cell_vitu2_itu_pane_t3

0x1c70,	// (0x000712f9) bg_popup_trans_pane

0xcc48,	// (0x0007c2d1) grid_image3_tool_bar_pane

0xcc52,	// (0x0007c2db) bg_popup_trans_pane_g1

0x39ca,	// (0x00073053) bg_popup_trans_pane_g2

0xcc5a,	// (0x0007c2e3) bg_popup_trans_pane_g3

0xcc62,	// (0x0007c2eb) bg_popup_trans_pane_g4

0xcc6a,	// (0x0007c2f3) bg_popup_trans_pane_g5

0xcc72,	// (0x0007c2fb) bg_popup_trans_pane_g6

0xcc7a,	// (0x0007c303) bg_popup_trans_pane_g7

0xcc82,	// (0x0007c30b) bg_popup_trans_pane_g8

0x39aa,	// (0x00073033) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x0007f015) bg_popup_trans_pane_g

0xcc8a,	// (0x0007c313) cell_image3_tool_bar_pane_ParamLimits

0xcc8a,	// (0x0007c313) cell_image3_tool_bar_pane

0x643b,	// (0x00075ac4) cell_image3_tool_bar_pane_g1

0x1c70,	// (0x000712f9) bg_popup_trans_pane_cp1

0xcca0,	// (0x0007c329) popup_image3_note_pane_t1

0xccae,	// (0x0007c337) popup_image3_note_pane_t2

0xccbc,	// (0x0007c345) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0007f028) popup_image3_note_pane_t

0xcccc,	// (0x0007c355) popup_image3_note_pane_t3_copy1

0x83c7,	// (0x00077a50) bg_myfav_hc_instruction_pane_ParamLimits

0x83c7,	// (0x00077a50) bg_myfav_hc_instruction_pane

0x83df,	// (0x00077a68) cell_myfav_contact_pane_ParamLimits

0x83df,	// (0x00077a68) cell_myfav_contact_pane

0x83fb,	// (0x00077a84) cell_myfav_contact_pane_cp1_ParamLimits

0x83fb,	// (0x00077a84) cell_myfav_contact_pane_cp1

0x8413,	// (0x00077a9c) cell_myfav_contact_pane_cp2_ParamLimits

0x8413,	// (0x00077a9c) cell_myfav_contact_pane_cp2

0x842b,	// (0x00077ab4) cell_myfav_contact_pane_cp3_ParamLimits

0x842b,	// (0x00077ab4) cell_myfav_contact_pane_cp3

0x8442,	// (0x00077acb) cell_myfav_contact_pane_cp4_ParamLimits

0x8442,	// (0x00077acb) cell_myfav_contact_pane_cp4

0x845a,	// (0x00077ae3) cell_myfav_contact_pane_cp5_ParamLimits

0x845a,	// (0x00077ae3) cell_myfav_contact_pane_cp5

0x846e,	// (0x00077af7) cell_myfav_contact_pane_cp6_ParamLimits

0x846e,	// (0x00077af7) cell_myfav_contact_pane_cp6

0x8484,	// (0x00077b0d) cell_myfav_contact_pane_cp7_ParamLimits

0x8484,	// (0x00077b0d) cell_myfav_contact_pane_cp7

0xccda,	// (0x0007c363) listscroll_gen_pane_cp05

0x849c,	// (0x00077b25) main_myfav_hc_pane_g1_ParamLimits

0x849c,	// (0x00077b25) main_myfav_hc_pane_g1

0x84b6,	// (0x00077b3f) main_myfav_hc_pane_g2_ParamLimits

0x84b6,	// (0x00077b3f) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0007f02f) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0007f02f) main_myfav_hc_pane_g

0x84ea,	// (0x00077b73) main_myfav_hc_pane_t1_ParamLimits

0x84ea,	// (0x00077b73) main_myfav_hc_pane_t1

0xcce3,	// (0x0007c36c) main_myfav_hc_pane_t2_ParamLimits

0xcce3,	// (0x0007c36c) main_myfav_hc_pane_t2

0xccf5,	// (0x0007c37e) main_myfav_hc_pane_t3_ParamLimits

0xccf5,	// (0x0007c37e) main_myfav_hc_pane_t3

0x8501,	// (0x00077b8a) main_myfav_hc_pane_t4_ParamLimits

0x8501,	// (0x00077b8a) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x0007f036) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x0007f036) main_myfav_hc_pane_t

0x643b,	// (0x00075ac4) bg_myfav_hc_instruction_pane_g1

0xcd07,	// (0x0007c390) cell_myfav_contact_pane_g1_ParamLimits

0xcd07,	// (0x0007c390) cell_myfav_contact_pane_g1

0xcd07,	// (0x0007c390) cell_myfav_contact_pane_g2_ParamLimits

0xcd07,	// (0x0007c390) cell_myfav_contact_pane_g2

0xcd13,	// (0x0007c39c) cell_myfav_contact_pane_g3_ParamLimits

0xcd13,	// (0x0007c39c) cell_myfav_contact_pane_g3

0x6a89,	// (0x00076112) cell_myfav_contact_pane_g4_ParamLimits

0x6a89,	// (0x00076112) cell_myfav_contact_pane_g4

0xcd20,	// (0x0007c3a9) cell_myfav_contact_pane_g5_ParamLimits

0xcd20,	// (0x0007c3a9) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x0007f041) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x0007f041) cell_myfav_contact_pane_g

0x84d0,	// (0x00077b59) main_myfav_hc_pane_g3_ParamLimits

0x84d0,	// (0x00077b59) main_myfav_hc_pane_g3

0x1e18,	// (0x000714a1) popup_adpt_find_window

0x852b,	// (0x00077bb4) afind_page_pane_ParamLimits

0x852b,	// (0x00077bb4) afind_page_pane

0x8540,	// (0x00077bc9) aid_size_cell_afind_ParamLimits

0x8540,	// (0x00077bc9) aid_size_cell_afind

0x855e,	// (0x00077be7) bg_popup_sub_pane_cp09_ParamLimits

0x855e,	// (0x00077be7) bg_popup_sub_pane_cp09

0x856b,	// (0x00077bf4) find_pane_cp01_ParamLimits

0x856b,	// (0x00077bf4) find_pane_cp01

0xcd2c,	// (0x0007c3b5) grid_afind_control_pane_ParamLimits

0xcd2c,	// (0x0007c3b5) grid_afind_control_pane

0x8578,	// (0x00077c01) grid_afind_pane_ParamLimits

0x8578,	// (0x00077c01) grid_afind_pane

0x859a,	// (0x00077c23) cell_afind_pane_ParamLimits

0x859a,	// (0x00077c23) cell_afind_pane

0x643b,	// (0x00075ac4) afind_page_pane_g1

0x8601,	// (0x00077c8a) afind_page_pane_g2

0x860a,	// (0x00077c93) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0007f04c) afind_page_pane_g

0x8613,	// (0x00077c9c) afind_page_pane_t1

0xcd40,	// (0x0007c3c9) cell_afind_grid_control_pane_ParamLimits

0xcd40,	// (0x0007c3c9) cell_afind_grid_control_pane

0xcad9,	// (0x0007c162) bg_button_pane_cp69_ParamLimits

0xcad9,	// (0x0007c162) bg_button_pane_cp69

0x8633,	// (0x00077cbc) cell_afind_pane_g1_ParamLimits

0x8633,	// (0x00077cbc) cell_afind_pane_g1

0x8640,	// (0x00077cc9) cell_afind_pane_t1_ParamLimits

0x8640,	// (0x00077cc9) cell_afind_pane_t1

0x3403,	// (0x00072a8c) bg_button_pane_cp72

0xcd4f,	// (0x0007c3d8) cell_afind_grid_control_pane_g1

0x511b,	// (0x000747a4) aid_image_placing_area_ParamLimits

0x511b,	// (0x000747a4) aid_image_placing_area

0xc7a5,	// (0x0007be2e) field_vitu_entry_pane_g1_ParamLimits

0xc7a5,	// (0x0007be2e) field_vitu_entry_pane_g1

0xc7b1,	// (0x0007be3a) field_vitu_entry_pane_g2_ParamLimits

0xc7b1,	// (0x0007be3a) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x0007ef06) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x0007ef06) field_vitu_entry_pane_g

0x77a2,	// (0x00076e2b) cell_vitu_itu_pane_g1_ParamLimits

0x77e4,	// (0x00076e6d) cell_vitu_itu_pane_t3_ParamLimits

0x77e4,	// (0x00076e6d) cell_vitu_itu_pane_t3

0xca89,	// (0x0007c112) mp4_progress_pane_t1_ParamLimits

0xcaa2,	// (0x0007c12b) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0007ef9b) mp4_progress_pane_t_ParamLimits

0xcabb,	// (0x0007c144) mup_progress_pane_cp04_ParamLimits

0x8515,	// (0x00077b9e) main_myfav_hc_pane_t5_ParamLimits

0x8515,	// (0x00077b9e) main_myfav_hc_pane_t5

0xa99f,	// (0x0007a028) aid_zoom_text_primary

0x1e18,	// (0x000714a1) popup_adpt_find_window_ParamLimits

0xeab8,	// (0x0007e141) main_cam_set_pane

0x7f29,	// (0x000775b2) cam4_zoom_pane_ParamLimits

0x7f29,	// (0x000775b2) cam4_zoom_pane

0x8652,	// (0x00077cdb) main_cam_set_pane_g1_ParamLimits

0x8652,	// (0x00077cdb) main_cam_set_pane_g1

0x8660,	// (0x00077ce9) main_cam_set_pane_g2_ParamLimits

0x8660,	// (0x00077ce9) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x0007f053) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x0007f053) main_cam_set_pane_g

0x8683,	// (0x00077d0c) main_cam_set_pane_t1_ParamLimits

0x8683,	// (0x00077d0c) main_cam_set_pane_t1

0x869e,	// (0x00077d27) main_cset_listscroll_pane_ParamLimits

0x869e,	// (0x00077d27) main_cset_listscroll_pane

0x86c2,	// (0x00077d4b) main_cset_slider_pane_ParamLimits

0x86c2,	// (0x00077d4b) main_cset_slider_pane

0xcd60,	// (0x0007c3e9) main_cset_list_pane_ParamLimits

0xcd60,	// (0x0007c3e9) main_cset_list_pane

0xcd70,	// (0x0007c3f9) scroll_pane_cp028

0x86ec,	// (0x00077d75) aid_area_touch_slider

0x8708,	// (0x00077d91) cset_slider_pane

0x8732,	// (0x00077dbb) main_cset_slider_pane_g1

0x8747,	// (0x00077dd0) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0007f058) main_cset_slider_pane_g

0xcda9,	// (0x0007c432) main_cset_slider_pane_t1

0x8809,	// (0x00077e92) main_cset_slider_pane_t2

0x8823,	// (0x00077eac) main_cset_slider_pane_t3

0x883d,	// (0x00077ec6) main_cset_slider_pane_t4

0x8857,	// (0x00077ee0) main_cset_slider_pane_t5

0x8875,	// (0x00077efe) main_cset_slider_pane_t6

0x888c,	// (0x00077f15) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0007f07d) main_cset_slider_pane_t

0x8998,	// (0x00078021) cset_list_set_pane_ParamLimits

0x8998,	// (0x00078021) cset_list_set_pane

0x89ac,	// (0x00078035) aid_position_infowindow_above

0x89b4,	// (0x0007803d) aid_position_infowindow_below

0xeffd,	// (0x0007e686) cset_list_set_pane_g1_ParamLimits

0xeffd,	// (0x0007e686) cset_list_set_pane_g1

0x161c,	// (0x00070ca5) cset_list_set_pane_g3_ParamLimits

0x161c,	// (0x00070ca5) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0007f09c) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0007f09c) cset_list_set_pane_g

0x162b,	// (0x00070cb4) cset_list_set_pane_t1_ParamLimits

0x162b,	// (0x00070cb4) cset_list_set_pane_t1

0xeab8,	// (0x0007e141) list_highlight_pane_cp021_ParamLimits

0xeab8,	// (0x0007e141) list_highlight_pane_cp021

0xb3d0,	// (0x0007aa59) cset_slider_pane_g1

0xb3e2,	// (0x0007aa6b) cset_slider_pane_g2

0xb3d9,	// (0x0007aa62) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x0007f0a1) cset_slider_pane_g

0xf009,	// (0x0007e692) aid_area_touch_cam4_zoom

0xf011,	// (0x0007e69a) cam4_zoom_cont_pane

0xf019,	// (0x0007e6a2) cam4_zoom_pane_g1

0xf021,	// (0x0007e6aa) cam4_zoom_pane_g2

0x89bc,	// (0x00078045) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x0007f0a8) cam4_zoom_pane_g

0xce49,	// (0x0007c4d2) cam4_zoom_cont_pane_g1

0xce52,	// (0x0007c4db) cam4_zoom_cont_pane_g2

0xce5b,	// (0x0007c4e4) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0007f0af) cam4_zoom_cont_pane_g

0x7de8,	// (0x00077471) call4_image_pane_ParamLimits

0x7de8,	// (0x00077471) call4_image_pane

0xcae5,	// (0x0007c16e) call4_windows_conf_pane_ParamLimits

0xcb2c,	// (0x0007c1b5) popup_call4_audio_in_window_ParamLimits

0xcb2c,	// (0x0007c1b5) popup_call4_audio_in_window

0x1c70,	// (0x000712f9) bg_popup_call2_act_pane_cp02

0xcba4,	// (0x0007c22d) call4_list_conf_pane

0x643b,	// (0x00075ac4) call4_image_pane_g1

0x643b,	// (0x00075ac4) call4_image_pane_g2

0x0001,

0xf743,	// (0x0007edcc) call4_image_pane_g

0xce64,	// (0x0007c4ed) list_single_graphic_popup_conf4_pane_ParamLimits

0xce64,	// (0x0007c4ed) list_single_graphic_popup_conf4_pane

0x1c70,	// (0x000712f9) list_highlight_pane_cp022

0xce79,	// (0x0007c502) list_single_graphic_popup_conf4_pane_g1

0xb0aa,	// (0x0007a733) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x0007f0b6) list_single_graphic_popup_conf4_pane_g

0xce81,	// (0x0007c50a) list_single_graphic_popup_conf4_pane_t1

0x3580,	// (0x00072c09) popup_vtel_slider_window_ParamLimits

0x3580,	// (0x00072c09) popup_vtel_slider_window

0xcac7,	// (0x0007c150) dialer2_ne_pane_t2_ParamLimits

0xcac7,	// (0x0007c150) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x0007efa0) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x0007efa0) dialer2_ne_pane_t

0x03ca,	// (0x0006fa53) bg_popup_sub_pane_cp010_ParamLimits

0x03ca,	// (0x0006fa53) bg_popup_sub_pane_cp010

0x89c4,	// (0x0007804d) popup_vtel_slider_window_g1_ParamLimits

0x89c4,	// (0x0007804d) popup_vtel_slider_window_g1

0x89d7,	// (0x00078060) popup_vtel_slider_window_g2_ParamLimits

0x89d7,	// (0x00078060) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0007f0bb) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0007f0bb) popup_vtel_slider_window_g

0x8a2d,	// (0x000780b6) vtel_slider_pane_ParamLimits

0x8a2d,	// (0x000780b6) vtel_slider_pane

0x8a4f,	// (0x000780d8) vtel_slider_pane_g1_ParamLimits

0x8a4f,	// (0x000780d8) vtel_slider_pane_g1

0x8a63,	// (0x000780ec) vtel_slider_pane_g2_ParamLimits

0x8a63,	// (0x000780ec) vtel_slider_pane_g2

0x8a7b,	// (0x00078104) vtel_slider_pane_g3_ParamLimits

0x8a7b,	// (0x00078104) vtel_slider_pane_g3

0x8a4f,	// (0x000780d8) vtel_slider_pane_g4_ParamLimits

0x8a4f,	// (0x000780d8) vtel_slider_pane_g4

0x8a91,	// (0x0007811a) vtel_slider_pane_g5_ParamLimits

0x8a91,	// (0x0007811a) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x0007f0c4) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x0007f0c4) vtel_slider_pane_g

0x1c70,	// (0x000712f9) main_gallery2_pane

0x8173,	// (0x000777fc) aid_size_row_itut2_dropdow_list_ParamLimits

0x8173,	// (0x000777fc) aid_size_row_itut2_dropdow_list

0x8203,	// (0x0007788c) grid_vitu2_function_top_pane_ParamLimits

0x8203,	// (0x0007788c) grid_vitu2_function_top_pane

0x8262,	// (0x000778eb) popup_vitu2_dropdown_list_window_ParamLimits

0x8262,	// (0x000778eb) popup_vitu2_dropdown_list_window

0x828b,	// (0x00077914) popup_vitu2_match_list_window

0x8aa7,	// (0x00078130) cell_vitu2_function_top_pane_ParamLimits

0x8aa7,	// (0x00078130) cell_vitu2_function_top_pane

0x8ac7,	// (0x00078150) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8ac7,	// (0x00078150) cell_vitu2_function_top_pane_cp01

0x8ae5,	// (0x0007816e) cell_vitu2_function_top_wide_pane_ParamLimits

0x8ae5,	// (0x0007816e) cell_vitu2_function_top_wide_pane

0xeab8,	// (0x0007e141) bg_button_pane_cp012

0x8b03,	// (0x0007818c) cell_vitu2_function_top_pane_g1

0xf029,	// (0x0007e6b2) bg_button_pane_cp013_ParamLimits

0xf029,	// (0x0007e6b2) bg_button_pane_cp013

0x8b17,	// (0x000781a0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8b17,	// (0x000781a0) cell_vitu2_function_top_wide_pane_g1

0xeab8,	// (0x0007e141) bg_popup_sub_pane_cp20

0x8b2f,	// (0x000781b8) list_vitu2_match_list_pane

0xcc52,	// (0x0007c2db) bg_popup_sub_pane_cp20_g1

0xcc5a,	// (0x0007c2e3) bg_popup_sub_pane_cp20_g2

0x39ca,	// (0x00073053) bg_popup_sub_pane_cp20_g3

0xcc62,	// (0x0007c2eb) bg_popup_sub_pane_cp20_g4

0x39aa,	// (0x00073033) bg_popup_sub_pane_cp20_g5

0xce9d,	// (0x0007c526) bg_popup_sub_pane_cp20_g6

0xcc72,	// (0x0007c2fb) bg_popup_sub_pane_cp20_g7

0xcc7a,	// (0x0007c303) bg_popup_sub_pane_cp20_g8

0xcc82,	// (0x0007c30b) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0007f0cf) bg_popup_sub_pane_cp20_g

0xf045,	// (0x0007e6ce) list_vitu2_match_list_item_pane_ParamLimits

0xf045,	// (0x0007e6ce) list_vitu2_match_list_item_pane

0xf057,	// (0x0007e6e0) list_vitu2_match_list_item_pane_t1

0x1c70,	// (0x000712f9) bg_popup_sub_pane_cp21

0xaf64,	// (0x0007a5ed) grid_vitu2_dropdown_list_pane

0x8b4d,	// (0x000781d6) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8b4d,	// (0x000781d6) cell_vitu2_dropdown_list_char_pane

0x8b70,	// (0x000781f9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8b70,	// (0x000781f9) cell_vitu2_dropdown_list_ctrl_pane

0xcebd,	// (0x0007c546) cell_vitu2_dropdown_list_char_pane_g1

0xcec6,	// (0x0007c54f) cell_vitu2_dropdown_list_char_pane_g2

0xcecf,	// (0x0007c558) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0007f0ec) cell_vitu2_dropdown_list_char_pane_g

0x8b9e,	// (0x00078227) cell_vitu2_dropdown_list_char_pane_t1

0x8bac,	// (0x00078235) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8bac,	// (0x00078235) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8bbc,	// (0x00078245) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8bbc,	// (0x00078245) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8bcd,	// (0x00078256) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8bcd,	// (0x00078256) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8bdd,	// (0x00078266) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8bdd,	// (0x00078266) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6719,	// (0x00075da2) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6719,	// (0x00075da2) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x0007f0f3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x0007f0f3) cell_vitu2_dropdown_list_ctrl_pane_g

0x8bf9,	// (0x00078282) aid_size_cell_gallery2_ParamLimits

0x8bf9,	// (0x00078282) aid_size_cell_gallery2

0x8c0f,	// (0x00078298) grid_gallery2_pane_ParamLimits

0x8c0f,	// (0x00078298) grid_gallery2_pane

0x8c23,	// (0x000782ac) scroll_pane_cp029_ParamLimits

0x8c23,	// (0x000782ac) scroll_pane_cp029

0x8c2f,	// (0x000782b8) cell_gallery2_pane_ParamLimits

0x8c2f,	// (0x000782b8) cell_gallery2_pane

0xced8,	// (0x0007c561) cell_gallery2_pane_g2

0x8c69,	// (0x000782f2) cell_gallery2_pane_g3

0xcee2,	// (0x0007c56b) cell_gallery2_pane_g4

0xceea,	// (0x0007c573) cell_gallery2_pane_g5

0xb278,	// (0x0007a901) grid_highlight_pane_cp10

0x828b,	// (0x00077914) popup_vitu2_match_list_window_ParamLimits

0x82a2,	// (0x0007792b) popup_vitu2_query_window_ParamLimits

0x82a2,	// (0x0007792b) popup_vitu2_query_window

0x1c70,	// (0x000712f9) bg_vitu2_candi_button_pane

0xcebd,	// (0x0007c546) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcec6,	// (0x0007c54f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcecf,	// (0x0007c558) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x166c,	// (0x00070cf5) bg_button_pane_cp015

0x8c71,	// (0x000782fa) bg_button_pane_cp016

0x8c7b,	// (0x00078304) bg_button_pane_cp017

0xeab8,	// (0x0007e141) bg_popup_sub_pane_cp22

0xcef2,	// (0x0007c57b) popup_vitu2_query_window_g1

0x1683,	// (0x00070d0c) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0007f0fe) popup_vitu2_query_window_g

0x1691,	// (0x00070d1a) popup_vitu2_query_window_t1_ParamLimits

0x1691,	// (0x00070d1a) popup_vitu2_query_window_t1

0x16b9,	// (0x00070d42) popup_vitu2_query_window_t2_ParamLimits

0x16b9,	// (0x00070d42) popup_vitu2_query_window_t2

0x16cb,	// (0x00070d54) popup_vitu2_query_window_t3_ParamLimits

0x16cb,	// (0x00070d54) popup_vitu2_query_window_t3

0x8c96,	// (0x0007831f) popup_vitu2_query_window_t4_ParamLimits

0x8c96,	// (0x0007831f) popup_vitu2_query_window_t4

0x8caa,	// (0x00078333) popup_vitu2_query_window_t5_ParamLimits

0x8caa,	// (0x00078333) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x0007f103) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x0007f103) popup_vitu2_query_window_t

0xcd58,	// (0x0007c3e1) main_cset_text_pane

0x86ec,	// (0x00077d75) aid_area_touch_slider_ParamLimits

0x8708,	// (0x00077d91) cset_slider_pane_ParamLimits

0x8732,	// (0x00077dbb) main_cset_slider_pane_g1_ParamLimits

0x8747,	// (0x00077dd0) main_cset_slider_pane_g2_ParamLimits

0xcd79,	// (0x0007c402) main_cset_slider_pane_g3_ParamLimits

0xcd79,	// (0x0007c402) main_cset_slider_pane_g3

0x875c,	// (0x00077de5) main_cset_slider_pane_g4_ParamLimits

0x875c,	// (0x00077de5) main_cset_slider_pane_g4

0x876b,	// (0x00077df4) main_cset_slider_pane_g5_ParamLimits

0x876b,	// (0x00077df4) main_cset_slider_pane_g5

0x8779,	// (0x00077e02) main_cset_slider_pane_g6_ParamLimits

0x8779,	// (0x00077e02) main_cset_slider_pane_g6

0xf9cf,	// (0x0007f058) main_cset_slider_pane_g_ParamLimits

0xcda9,	// (0x0007c432) main_cset_slider_pane_t1_ParamLimits

0x8809,	// (0x00077e92) main_cset_slider_pane_t2_ParamLimits

0x8823,	// (0x00077eac) main_cset_slider_pane_t3_ParamLimits

0x883d,	// (0x00077ec6) main_cset_slider_pane_t4_ParamLimits

0x8857,	// (0x00077ee0) main_cset_slider_pane_t5_ParamLimits

0x8875,	// (0x00077efe) main_cset_slider_pane_t6_ParamLimits

0x888c,	// (0x00077f15) main_cset_slider_pane_t7_ParamLimits

0x88ba,	// (0x00077f43) main_cset_slider_pane_t8_ParamLimits

0x88ba,	// (0x00077f43) main_cset_slider_pane_t8

0x88e2,	// (0x00077f6b) main_cset_slider_pane_t9_ParamLimits

0x88e2,	// (0x00077f6b) main_cset_slider_pane_t9

0x890a,	// (0x00077f93) main_cset_slider_pane_t10_ParamLimits

0x890a,	// (0x00077f93) main_cset_slider_pane_t10

0x8932,	// (0x00077fbb) main_cset_slider_pane_t11_ParamLimits

0x8932,	// (0x00077fbb) main_cset_slider_pane_t11

0x895c,	// (0x00077fe5) main_cset_slider_pane_t12_ParamLimits

0x895c,	// (0x00077fe5) main_cset_slider_pane_t12

0x8979,	// (0x00078002) main_cset_slider_pane_t13_ParamLimits

0x8979,	// (0x00078002) main_cset_slider_pane_t13

0xf9f4,	// (0x0007f07d) main_cset_slider_pane_t_ParamLimits

0x1c70,	// (0x000712f9) bg_popup_sub_pane_cp011

0xcefe,	// (0x0007c587) main_cset_text_pane_g1

0xcf06,	// (0x0007c58f) main_cset_text_pane_t1

0xcf14,	// (0x0007c59d) main_cset_text_pane_t2

0xcf22,	// (0x0007c5ab) main_cset_text_pane_t3

0xcf30,	// (0x0007c5b9) main_cset_text_pane_t4

0xcf3e,	// (0x0007c5c7) main_cset_text_pane_t5

0xcf4c,	// (0x0007c5d5) main_cset_text_pane_t6

0xcf5a,	// (0x0007c5e3) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0007f10e) main_cset_text_pane_t

0x1c70,	// (0x000712f9) main_cam4_burst_pane

0x1c70,	// (0x000712f9) main_cam5_pane

0x8621,	// (0x00077caa) bg_button_pane_cp019

0x862a,	// (0x00077cb3) bg_button_pane_cp020

0xcd85,	// (0x0007c40e) main_cset_slider_pane_g7_ParamLimits

0xcd85,	// (0x0007c40e) main_cset_slider_pane_g7

0xcd91,	// (0x0007c41a) main_cset_slider_pane_g8_ParamLimits

0xcd91,	// (0x0007c41a) main_cset_slider_pane_g8

0x878d,	// (0x00077e16) main_cset_slider_pane_g9_ParamLimits

0x878d,	// (0x00077e16) main_cset_slider_pane_g9

0x8799,	// (0x00077e22) main_cset_slider_pane_g10_ParamLimits

0x8799,	// (0x00077e22) main_cset_slider_pane_g10

0x87a5,	// (0x00077e2e) main_cset_slider_pane_g11_ParamLimits

0x87a5,	// (0x00077e2e) main_cset_slider_pane_g11

0x87b1,	// (0x00077e3a) main_cset_slider_pane_g12_ParamLimits

0x87b1,	// (0x00077e3a) main_cset_slider_pane_g12

0x87bd,	// (0x00077e46) main_cset_slider_pane_g13_ParamLimits

0x87bd,	// (0x00077e46) main_cset_slider_pane_g13

0x87c9,	// (0x00077e52) main_cset_slider_pane_g14_ParamLimits

0x87c9,	// (0x00077e52) main_cset_slider_pane_g14

0x87d5,	// (0x00077e5e) main_cset_slider_pane_g15_ParamLimits

0x87d5,	// (0x00077e5e) main_cset_slider_pane_g15

0xcdd7,	// (0x0007c460) main_cset_slider_pane_t14_ParamLimits

0xcdd7,	// (0x0007c460) main_cset_slider_pane_t14

0xce10,	// (0x0007c499) main_cset_slider_pane_t15_ParamLimits

0xce10,	// (0x0007c499) main_cset_slider_pane_t15

0x8cbe,	// (0x00078347) aid_cam4_burst_size_cell_ParamLimits

0x8cbe,	// (0x00078347) aid_cam4_burst_size_cell

0x8cde,	// (0x00078367) grid_cam4_burst_pane_ParamLimits

0x8cde,	// (0x00078367) grid_cam4_burst_pane

0x8d18,	// (0x000783a1) linegrid_cam4_burst_pane_ParamLimits

0x8d18,	// (0x000783a1) linegrid_cam4_burst_pane

0x8d3c,	// (0x000783c5) scroll_pane_cp30_ParamLimits

0x8d3c,	// (0x000783c5) scroll_pane_cp30

0x8d48,	// (0x000783d1) cell_cam4_burst_pane_ParamLimits

0x8d48,	// (0x000783d1) cell_cam4_burst_pane

0xcf68,	// (0x0007c5f1) linegrid_cam4_burst_pane_g1_ParamLimits

0xcf68,	// (0x0007c5f1) linegrid_cam4_burst_pane_g1

0x8d9d,	// (0x00078426) linegrid_cam4_burst_pane_g2_ParamLimits

0x8d9d,	// (0x00078426) linegrid_cam4_burst_pane_g2

0xcf75,	// (0x0007c5fe) linegrid_cam4_burst_pane_g3_ParamLimits

0xcf75,	// (0x0007c5fe) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0007f11d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0007f11d) linegrid_cam4_burst_pane_g

0x8dae,	// (0x00078437) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8dae,	// (0x00078437) linegrid_cam4_burst_pane_g3_copy1

0xcf82,	// (0x0007c60b) linegrid_cam4_burst_pane_g4_ParamLimits

0xcf82,	// (0x0007c60b) linegrid_cam4_burst_pane_g4

0x8dcc,	// (0x00078455) linegrid_cam4_burst_pane_g5_ParamLimits

0x8dcc,	// (0x00078455) linegrid_cam4_burst_pane_g5

0x8ddd,	// (0x00078466) linegrid_cam4_burst_pane_g6_ParamLimits

0x8ddd,	// (0x00078466) linegrid_cam4_burst_pane_g6

0xcf8f,	// (0x0007c618) linegrid_cam4_burst_pane_g7_ParamLimits

0xcf8f,	// (0x0007c618) linegrid_cam4_burst_pane_g7

0x8df4,	// (0x0007847d) cell_cam4_burst_pane_g1

0xcfa8,	// (0x0007c631) main_cam5_pane_t1_ParamLimits

0xcfa8,	// (0x0007c631) main_cam5_pane_t1

0xcfba,	// (0x0007c643) main_cam5_pane_t2_ParamLimits

0xcfba,	// (0x0007c643) main_cam5_pane_t2

0xcfcc,	// (0x0007c655) main_cam5_pane_t3_ParamLimits

0xcfcc,	// (0x0007c655) main_cam5_pane_t3

0xcfde,	// (0x0007c667) main_cam5_pane_t4_ParamLimits

0xcfde,	// (0x0007c667) main_cam5_pane_t4

0xcff6,	// (0x0007c67f) main_cam5_pane_t5_ParamLimits

0xcff6,	// (0x0007c67f) main_cam5_pane_t5

0xd00a,	// (0x0007c693) main_cam5_pane_t6_ParamLimits

0xd00a,	// (0x0007c693) main_cam5_pane_t6

0xd01e,	// (0x0007c6a7) main_cam5_pane_t7_ParamLimits

0xd01e,	// (0x0007c6a7) main_cam5_pane_t7

0xd030,	// (0x0007c6b9) main_cam5_pane_t8_ParamLimits

0xd030,	// (0x0007c6b9) main_cam5_pane_t8

0xd04e,	// (0x0007c6d7) main_cam5_pane_t9_ParamLimits

0xd04e,	// (0x0007c6d7) main_cam5_pane_t9

0xd060,	// (0x0007c6e9) main_cam5_pane_t10_ParamLimits

0xd060,	// (0x0007c6e9) main_cam5_pane_t10

0xd072,	// (0x0007c6fb) main_cam5_pane_t11_ParamLimits

0xd072,	// (0x0007c6fb) main_cam5_pane_t11

0xd086,	// (0x0007c70f) main_cam5_pane_t12_ParamLimits

0xd086,	// (0x0007c70f) main_cam5_pane_t12

0xd09d,	// (0x0007c726) main_cam5_pane_t13_ParamLimits

0xd09d,	// (0x0007c726) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x0007f129) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x0007f129) main_cam5_pane_t

0x1ea6,	// (0x0007152f) popup_scut_keymap_window_ParamLimits

0x1ea6,	// (0x0007152f) popup_scut_keymap_window

0x8e07,	// (0x00078490) aid_size_cell_brow_shortcut

0xb278,	// (0x0007a901) bg_popup_window_pane_cp010

0x8e13,	// (0x0007849c) grid_scut_pane

0x8e1f,	// (0x000784a8) cell_scut_pane_ParamLimits

0x8e1f,	// (0x000784a8) cell_scut_pane

0x8e38,	// (0x000784c1) cell_scut_pane_g1

0xd0c0,	// (0x0007c749) cell_scut_pane_t1

0xd0cf,	// (0x0007c758) cell_scut_pane_t2

0x8e41,	// (0x000784ca) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x0007f144) cell_scut_pane_t

0x6a97,	// (0x00076120) main_mup3_pane_g8_ParamLimits

0x6a97,	// (0x00076120) main_mup3_pane_g8

0x818d,	// (0x00077816) area_vitu2_query_pane_ParamLimits

0x818d,	// (0x00077816) area_vitu2_query_pane

0x1676,	// (0x00070cff) input_focus_pane_cp08

0xd0de,	// (0x0007c767) area_vitu2_query_pane_g1

0x16f3,	// (0x00070d7c) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0007f14b) area_vitu2_query_pane_g

0x8e4f,	// (0x000784d8) area_vitu2_query_pane_t1_ParamLimits

0x8e4f,	// (0x000784d8) area_vitu2_query_pane_t1

0x8e63,	// (0x000784ec) area_vitu2_query_pane_t2_ParamLimits

0x8e63,	// (0x000784ec) area_vitu2_query_pane_t2

0x1706,	// (0x00070d8f) area_vitu2_query_pane_t3_ParamLimits

0x1706,	// (0x00070d8f) area_vitu2_query_pane_t3

0xd0ea,	// (0x0007c773) area_vitu2_query_pane_t4_ParamLimits

0xd0ea,	// (0x0007c773) area_vitu2_query_pane_t4

0xd112,	// (0x0007c79b) area_vitu2_query_pane_t5_ParamLimits

0xd112,	// (0x0007c79b) area_vitu2_query_pane_t5

0xd13a,	// (0x0007c7c3) area_vitu2_query_pane_t6_ParamLimits

0xd13a,	// (0x0007c7c3) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x0007f150) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x0007f150) area_vitu2_query_pane_t

0x8e77,	// (0x00078500) bg_button_pane_cp018

0x8e85,	// (0x0007850e) bg_button_pane_cp021

0x172e,	// (0x00070db7) bg_button_pane_cp022

0x173f,	// (0x00070dc8) input_focus_pane_cp09

0x4718,	// (0x00073da1) aid_size_touch_mv_arrow_left

0x4741,	// (0x00073dca) aid_size_touch_mv_arrow_right

0x87ed,	// (0x00077e76) main_cset_slider_pane_g16_ParamLimits

0x87ed,	// (0x00077e76) main_cset_slider_pane_g16

0x87fb,	// (0x00077e84) main_cset_slider_pane_g17_ParamLimits

0x87fb,	// (0x00077e84) main_cset_slider_pane_g17

0x8df4,	// (0x0007847d) cell_cam4_burst_pane_g1_ParamLimits

0x1c70,	// (0x000712f9) compa_mode_pane

0x89e7,	// (0x00078070) popup_vtel_slider_window_g3_ParamLimits

0x89e7,	// (0x00078070) popup_vtel_slider_window_g3

0x89fe,	// (0x00078087) popup_vtel_slider_window_g4_ParamLimits

0x89fe,	// (0x00078087) popup_vtel_slider_window_g4

0x8a15,	// (0x0007809e) popup_vtel_slider_window_t1_ParamLimits

0x8a15,	// (0x0007809e) popup_vtel_slider_window_t1

0x1c70,	// (0x000712f9) main_cl_pane

0xeb57,	// (0x0007e1e0) popup_imed_adjust2_window_ParamLimits

0xeb2b,	// (0x0007e1b4) bg_tb_trans_pane_cp05_ParamLimits

0xc6da,	// (0x0007bd63) popup_imed_adjust2_window_g1_ParamLimits

0xc6e9,	// (0x0007bd72) popup_imed_adjust2_window_g2_ParamLimits

0xc6e9,	// (0x0007bd72) popup_imed_adjust2_window_g2

0xc6f5,	// (0x0007bd7e) popup_imed_adjust2_window_g3_ParamLimits

0xc6f5,	// (0x0007bd7e) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x0007eeca) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x0007eeca) popup_imed_adjust2_window_g

0xc701,	// (0x0007bd8a) popup_imed_adjust2_window_t1_ParamLimits

0xc719,	// (0x0007bda2) slider_imed_adjust_pane_ParamLimits

0xc72d,	// (0x0007bdb6) slider_imed_adjust_pane_g1_ParamLimits

0xc73d,	// (0x0007bdc6) slider_imed_adjust_pane_g2_ParamLimits

0xc74d,	// (0x0007bdd6) slider_imed_adjust_pane_g3_ParamLimits

0xc75e,	// (0x0007bde7) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x0007eed1) slider_imed_adjust_pane_g_ParamLimits

0x7ec9,	// (0x00077552) aid_touch_area_cam4_ParamLimits

0x7ec9,	// (0x00077552) aid_touch_area_cam4

0xefcf,	// (0x0007e658) battery_pane_cp01

0x7f80,	// (0x00077609) main_camera4_pane_g6_ParamLimits

0x7f80,	// (0x00077609) main_camera4_pane_g6

0x7fa3,	// (0x0007762c) main_camera4_pane_t2_ParamLimits

0x7fa3,	// (0x0007762c) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x0007efd4) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x0007efd4) main_camera4_pane_t

0x7ffb,	// (0x00077684) aid_touch_area_vid4_ParamLimits

0x7ffb,	// (0x00077684) aid_touch_area_vid4

0x8059,	// (0x000776e2) main_video4_pane_g5_ParamLimits

0x8059,	// (0x000776e2) main_video4_pane_g5

0x8080,	// (0x00077709) vid4_progress_pane_ParamLimits

0x8080,	// (0x00077709) vid4_progress_pane

0xcd9d,	// (0x0007c426) main_cset_slider_pane_g18_ParamLimits

0xcd9d,	// (0x0007c426) main_cset_slider_pane_g18

0xcf9c,	// (0x0007c625) cell_cam4_burst_pane_g2_ParamLimits

0xcf9c,	// (0x0007c625) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x0007f124) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x0007f124) cell_cam4_burst_pane_g

0x2964,	// (0x00071fed) bg_cl_pane_ParamLimits

0x2964,	// (0x00071fed) bg_cl_pane

0x8e91,	// (0x0007851a) cl_header_pane_ParamLimits

0x8e91,	// (0x0007851a) cl_header_pane

0x8ea5,	// (0x0007852e) cl_listscroll_pane_ParamLimits

0x8ea5,	// (0x0007852e) cl_listscroll_pane

0xd186,	// (0x0007c80f) bg_cl_pane_g1

0xd18e,	// (0x0007c817) bg_cl_pane_g2

0xd196,	// (0x0007c81f) bg_cl_pane_g3

0xd19e,	// (0x0007c827) bg_cl_pane_g4

0xd1a6,	// (0x0007c82f) bg_cl_pane_g5

0xd1ae,	// (0x0007c837) bg_cl_pane_g6

0xd1b6,	// (0x0007c83f) bg_cl_pane_g7

0xd1be,	// (0x0007c847) bg_cl_pane_g8

0xd1c6,	// (0x0007c84f) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x0007f15f) bg_cl_pane_g

0x8eb5,	// (0x0007853e) aid_height_cl_leading_ParamLimits

0x8eb5,	// (0x0007853e) aid_height_cl_leading

0x8ec1,	// (0x0007854a) aid_height_cl_text_ParamLimits

0x8ec1,	// (0x0007854a) aid_height_cl_text

0xeab8,	// (0x0007e141) bg_cl_header_pane_ParamLimits

0xeab8,	// (0x0007e141) bg_cl_header_pane

0x8ee0,	// (0x00078569) cl_header_pane_g1_ParamLimits

0x8ee0,	// (0x00078569) cl_header_pane_g1

0x8ef6,	// (0x0007857f) cl_header_pane_t1_ParamLimits

0x8ef6,	// (0x0007857f) cl_header_pane_t1

0xd1ce,	// (0x0007c857) cl_list_pane

0xcd70,	// (0x0007c3f9) hc_scroll_pane_cp01

0x39aa,	// (0x00073033) bg_cl_header_pane_g1

0xcc52,	// (0x0007c2db) bg_cl_header_pane_g2

0x39ca,	// (0x00073053) bg_cl_header_pane_g3

0xcc62,	// (0x0007c2eb) bg_cl_header_pane_g4

0xcc5a,	// (0x0007c2e3) bg_cl_header_pane_g5

0xce9d,	// (0x0007c526) bg_cl_header_pane_g6

0xcc7a,	// (0x0007c303) bg_cl_header_pane_g7

0xcc82,	// (0x0007c30b) bg_cl_header_pane_g8

0xcc72,	// (0x0007c2fb) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x0007f172) bg_cl_header_pane_g

0x8f0f,	// (0x00078598) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8f0f,	// (0x00078598) hc_cl_list_double_graphic_heading_pane

0x8f22,	// (0x000785ab) hc_cl_list_single_graphic_pane_ParamLimits

0x8f22,	// (0x000785ab) hc_cl_list_single_graphic_pane

0x8f3a,	// (0x000785c3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8f3a,	// (0x000785c3) hc_cl_list_single_graphic_pane_g1

0x8f46,	// (0x000785cf) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8f46,	// (0x000785cf) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x0007f185) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x0007f185) hc_cl_list_single_graphic_pane_g

0x8f5a,	// (0x000785e3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8f5a,	// (0x000785e3) hc_cl_list_single_graphic_pane_t1

0x8f3a,	// (0x000785c3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8f3a,	// (0x000785c3) hc_cl_list_double_graphic_heading_pane_g1

0x8f6f,	// (0x000785f8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8f6f,	// (0x000785f8) hc_cl_list_double_graphic_heading_pane_g2

0x8f83,	// (0x0007860c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8f83,	// (0x0007860c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0007f18a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0007f18a) hc_cl_list_double_graphic_heading_pane_g

0x8f97,	// (0x00078620) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8f97,	// (0x00078620) hc_cl_list_double_graphic_heading_pane_t1

0x8fac,	// (0x00078635) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8fac,	// (0x00078635) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x0007f191) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x0007f191) hc_cl_list_double_graphic_heading_pane_t

0xf06d,	// (0x0007e6f6) vid4_progress_pane_g1

0xf079,	// (0x0007e702) vid4_progress_pane_g2

0xf085,	// (0x0007e70e) vid4_progress_pane_g3

0xf094,	// (0x0007e71d) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x0007f196) vid4_progress_pane_g

0xf0b2,	// (0x0007e73b) vid4_progress_pane_t1

0xf0c8,	// (0x0007e751) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x0007f1a1) vid4_progress_pane_t

0xf0f3,	// (0x0007e77c) wait_bar_pane_cp07

0x03d8,	// (0x0006fa61) blid_firmament_pane_ParamLimits

0x041b,	// (0x0006faa4) popup_blid_sat_info2_window_g1

0x043f,	// (0x0006fac8) popup_blid_sat_info2_window_t3

0x044d,	// (0x0006fad6) popup_blid_sat_info2_window_t4

0x045b,	// (0x0006fae4) popup_blid_sat_info2_window_t5

0x0469,	// (0x0006faf2) popup_blid_sat_info2_window_t6

0x0479,	// (0x0006fb02) popup_blid_sat_info2_window_t7

0x0487,	// (0x0006fb10) popup_blid_sat_info2_window_t8

0x0495,	// (0x0006fb1e) popup_blid_sat_info2_window_t9

0x04a3,	// (0x0006fb2c) popup_blid_sat_info2_window_t10

0x63bb,	// (0x00075a44) aid_firma_cardinal_ParamLimits

0x63cf,	// (0x00075a58) blid_firmament_pane_t1_ParamLimits

0x63e6,	// (0x00075a6f) blid_firmament_pane_t2_ParamLimits

0x63fd,	// (0x00075a86) blid_firmament_pane_t3_ParamLimits

0x6414,	// (0x00075a9d) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x0007edc3) blid_firmament_pane_t_ParamLimits

0x642b,	// (0x00075ab4) blid_sat_info_pane_ParamLimits

0xeab8,	// (0x0007e141) main_cam_set_pane_ParamLimits

0x7494,	// (0x00076b1d) aid_size_cell_colour_35_ParamLimits

0x74b4,	// (0x00076b3d) aid_size_cell_colour_112_ParamLimits

0x74d4,	// (0x00076b5d) aid_size_cell_effect_ParamLimits

0xeb2b,	// (0x0007e1b4) bg_tb_trans_pane_cp02_ParamLimits

0xacfe,	// (0x0007a387) heading_imed_pane_ParamLimits

0x74f4,	// (0x00076b7d) listscroll_imed_pane_ParamLimits

0xbd13,	// (0x0007b39c) popup_call2_audio_first_window_g5_ParamLimits

0xbd13,	// (0x0007b39c) popup_call2_audio_first_window_g5

0x7b73,	// (0x000771fc) aid_size_touch_image3_arrow_left_ParamLimits

0x7b73,	// (0x000771fc) aid_size_touch_image3_arrow_left

0x7b9f,	// (0x00077228) aid_size_touch_image3_arrow_right_ParamLimits

0x7b9f,	// (0x00077228) aid_size_touch_image3_arrow_right

0xf0de,	// (0x0007e767) vid4_progress_pane_t3

0x78cb,	// (0x00076f54) main_hwr_training_symbol_option_pane_ParamLimits

0x78cb,	// (0x00076f54) main_hwr_training_symbol_option_pane

0xc9c9,	// (0x0007c052) popup_hwr_training_preview_window_ParamLimits

0xc9c9,	// (0x0007c052) popup_hwr_training_preview_window

0x78eb,	// (0x00076f74) hwr_training_navi_pane_g5_ParamLimits

0x78eb,	// (0x00076f74) hwr_training_navi_pane_g5

0xcc40,	// (0x0007c2c9) popup_char_count_window

0xeab8,	// (0x0007e141) bg_popup_sub_pane_cp20_ParamLimits

0x8b2f,	// (0x000781b8) list_vitu2_match_list_pane_ParamLimits

0x8b3e,	// (0x000781c7) vitu2_page_scroll_pane_ParamLimits

0x8b3e,	// (0x000781c7) vitu2_page_scroll_pane

0xd229,	// (0x0007c8b2) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd229,	// (0x0007c8b2) list_single_hwr_training_symbol_option_pane

0xd23c,	// (0x0007c8c5) list_single_hwr_training_symbol_option_pane_g1

0xd244,	// (0x0007c8cd) list_single_hwr_training_symbol_option_pane_t1

0xd252,	// (0x0007c8db) bg_button_pane_cp023

0xd25b,	// (0x0007c8e4) bg_button_pane_cp024

0x8fcb,	// (0x00078654) vitu2_page_scroll_pane_g1

0x8fd3,	// (0x0007865c) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x0007f1a8) vitu2_page_scroll_pane_g

0x8fdd,	// (0x00078666) vitu2_page_scroll_pane_t1

0x0338,	// (0x0006f9c1) popup_char_count_window_g1

0xd28e,	// (0x0007c917) popup_char_count_window_g2

0xd297,	// (0x0007c920) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0007f1ad) popup_char_count_window_g

0xd2a0,	// (0x0007c929) popup_char_count_window_t1

0x1c70,	// (0x000712f9) main_vded2_pane

0xc6c6,	// (0x0007bd4f) aid_size_cell_imed_line

0xc6d0,	// (0x0007bd59) grid_imed_line_width_pane

0x80e3,	// (0x0007776c) vid4_indicators_pane_g4

0xd2ae,	// (0x0007c937) cell_imed_line_width_pane_ParamLimits

0xd2ae,	// (0x0007c937) cell_imed_line_width_pane

0xd2c4,	// (0x0007c94d) cell_imed_line_width_pane_g1

0x8fec,	// (0x00078675) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x0007f1b4) cell_imed_line_width_pane_g

0x8ff4,	// (0x0007867d) main_vded2_pane_g1_ParamLimits

0x8ff4,	// (0x0007867d) main_vded2_pane_g1

0x900f,	// (0x00078698) main_vded2_pane_g2_ParamLimits

0x900f,	// (0x00078698) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x0007f1b9) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x0007f1b9) main_vded2_pane_g

0x9021,	// (0x000786aa) vded2_slider_pane_ParamLimits

0x9021,	// (0x000786aa) vded2_slider_pane

0x9031,	// (0x000786ba) aid_size_touch_vded2_end

0x903b,	// (0x000786c4) aid_size_touch_vded2_playhead

0xd2cd,	// (0x0007c956) aid_size_touch_vded2_start

0xd2d5,	// (0x0007c95e) vded2_slider_bg_pane

0xd2de,	// (0x0007c967) vded2_slider_pane_g1

0xd2e7,	// (0x0007c970) vded2_slider_pane_g2

0x9045,	// (0x000786ce) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0007f1be) vded2_slider_pane_g

0xd2ef,	// (0x0007c978) vded2_slider_bg_pane_g1

0xd2f8,	// (0x0007c981) vded2_slider_bg_pane_g2

0xd301,	// (0x0007c98a) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x0007f1c5) vded2_slider_bg_pane_g

0x4d58,	// (0x000743e1) aid_postcard_touch_down_pane_ParamLimits

0x4d58,	// (0x000743e1) aid_postcard_touch_down_pane

0x4d70,	// (0x000743f9) aid_postcard_touch_up_pane_ParamLimits

0x4d70,	// (0x000743f9) aid_postcard_touch_up_pane

0x1c70,	// (0x000712f9) main_blid2_pane

0xeb39,	// (0x0007e1c2) popup_blid2_search_window

0x1c70,	// (0x000712f9) blid2_gps_pane

0x1c70,	// (0x000712f9) blid2_navig_pane

0x1c70,	// (0x000712f9) blid2_search_pane

0x1c70,	// (0x000712f9) blid2_tripm_pane

0x9050,	// (0x000786d9) blid2_search_pane_g1_ParamLimits

0x9050,	// (0x000786d9) blid2_search_pane_g1

0x9068,	// (0x000786f1) blid2_search_pane_t1_ParamLimits

0x9068,	// (0x000786f1) blid2_search_pane_t1

0x907a,	// (0x00078703) aid_size_cell_blid2_gps_ParamLimits

0x907a,	// (0x00078703) aid_size_cell_blid2_gps

0x9092,	// (0x0007871b) blid2_gps_pane_g1_ParamLimits

0x9092,	// (0x0007871b) blid2_gps_pane_g1

0x90a6,	// (0x0007872f) grid_blid2_satellite_pane_ParamLimits

0x90a6,	// (0x0007872f) grid_blid2_satellite_pane

0x90be,	// (0x00078747) blid2_navig_pane_g1_ParamLimits

0x90be,	// (0x00078747) blid2_navig_pane_g1

0x90ca,	// (0x00078753) blid2_navig_pane_t1_ParamLimits

0x90ca,	// (0x00078753) blid2_navig_pane_t1

0x90e5,	// (0x0007876e) blid2_navig_pane_t2_ParamLimits

0x90e5,	// (0x0007876e) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0007f1cc) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0007f1cc) blid2_navig_pane_t

0x9100,	// (0x00078789) blid2_navig_ring_pane_ParamLimits

0x9100,	// (0x00078789) blid2_navig_ring_pane

0x911b,	// (0x000787a4) blid2_speed_pane_ParamLimits

0x911b,	// (0x000787a4) blid2_speed_pane

0x9127,	// (0x000787b0) blid2_tripm_pane_g1_ParamLimits

0x9127,	// (0x000787b0) blid2_tripm_pane_g1

0x9142,	// (0x000787cb) blid2_tripm_pane_g2_ParamLimits

0x9142,	// (0x000787cb) blid2_tripm_pane_g2

0x9156,	// (0x000787df) blid2_tripm_pane_g3_ParamLimits

0x9156,	// (0x000787df) blid2_tripm_pane_g3

0x916a,	// (0x000787f3) blid2_tripm_pane_g4_ParamLimits

0x916a,	// (0x000787f3) blid2_tripm_pane_g4

0x917e,	// (0x00078807) blid2_tripm_pane_g5_ParamLimits

0x917e,	// (0x00078807) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x0007f1d1) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x0007f1d1) blid2_tripm_pane_g

0x91a4,	// (0x0007882d) blid2_tripm_pane_t1_ParamLimits

0x91a4,	// (0x0007882d) blid2_tripm_pane_t1

0x91bf,	// (0x00078848) blid2_tripm_pane_t2_ParamLimits

0x91bf,	// (0x00078848) blid2_tripm_pane_t2

0x91d8,	// (0x00078861) blid2_tripm_pane_t3_ParamLimits

0x91d8,	// (0x00078861) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0007f1de) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0007f1de) blid2_tripm_pane_t

0x921f,	// (0x000788a8) cell_blid2_satellite_pane_ParamLimits

0x921f,	// (0x000788a8) cell_blid2_satellite_pane

0x923b,	// (0x000788c4) cell_blid2_satellite_pane_g1

0xd30a,	// (0x0007c993) cell_blid2_satellite_pane_t1

0x643b,	// (0x00075ac4) blid2_speed_pane_g1

0xd318,	// (0x0007c9a1) blid2_speed_pane_t1

0xd326,	// (0x0007c9af) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x0007f1e7) blid2_speed_pane_t

0x643b,	// (0x00075ac4) blid2_navig_ring_pane_g1

0x9244,	// (0x000788cd) blid2_navig_ring_pane_g2

0x924c,	// (0x000788d5) blid2_navig_ring_pane_g3

0x9254,	// (0x000788dd) blid2_navig_ring_pane_g4

0x925c,	// (0x000788e5) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0007f1ec) blid2_navig_ring_pane_g

0x1c70,	// (0x000712f9) bg_popup_window_pane_cp011

0xd334,	// (0x0007c9bd) popup_blid2_search_window_g1

0xd33c,	// (0x0007c9c5) popup_blid2_search_window_t1

0xd34a,	// (0x0007c9d3) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x0007f1f7) popup_blid2_search_window_t

0x3867,	// (0x00072ef0) main_browser_pane_g1

0x2964,	// (0x00071fed) main_browser_pane_ParamLimits

0xeab8,	// (0x0007e141) bg_button_pane_cp011_ParamLimits

0x83b3,	// (0x00077a3c) cell_vitu2_function_pane_g1_ParamLimits

0xeab8,	// (0x0007e141) bg_popup_sub_pane_cp22_ParamLimits

0x1676,	// (0x00070cff) input_focus_pane_cp08_ParamLimits

0x8c85,	// (0x0007830e) popup_vitu2_query_button_pane_ParamLimits

0x8c85,	// (0x0007830e) popup_vitu2_query_button_pane

0x166c,	// (0x00070cf5) popup_vitu2_query_input_button_pane

0xcef2,	// (0x0007c57b) popup_vitu2_query_window_g1_ParamLimits

0x1683,	// (0x00070d0c) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0007f0fe) popup_vitu2_query_window_g_ParamLimits

0x1c70,	// (0x000712f9) bg_button_pane_cp026

0x9264,	// (0x000788ed) popup_vitu2_query_input_button_pane_g1

0x1c70,	// (0x000712f9) bg_button_pane_cp025

0xd358,	// (0x0007c9e1) popup_vitu2_query_button_pane_t1

0x6792,	// (0x00075e1b) main_mp3_pane_t6

0x67a8,	// (0x00075e31) popup_slider_window_cp01

0xefe1,	// (0x0007e66a) cam4_battery_pane

0xeff3,	// (0x0007e67c) cam4_battery_pane_cp02

0x8fc1,	// (0x0007864a) cam4_battery_pane_cp01

0xf065,	// (0x0007e6ee) cam4_battery_pane_cp03

0x643b,	// (0x00075ac4) cam4_battery_pane_g1

0xd366,	// (0x0007c9ef) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x0007f1fc) cam4_battery_pane_g

0x04b1,	// (0x0006fb3a) popup_blid_sat_info2_window_t11

0x4718,	// (0x00073da1) aid_size_touch_mv_arrow_left_ParamLimits

0x4741,	// (0x00073dca) aid_size_touch_mv_arrow_right_ParamLimits

0xb1d8,	// (0x0007a861) navi_pane_g1_ParamLimits

0x476a,	// (0x00073df3) navi_pane_g2_ParamLimits

0x4798,	// (0x00073e21) navi_pane_g3_ParamLimits

0xf44c,	// (0x0007ead5) navi_pane_g_ParamLimits

0x47f2,	// (0x00073e7b) navi_pane_mv_t1_ParamLimits

0x7532,	// (0x00076bbb) grid_imed_effect_pane_ParamLimits

0x34ae,	// (0x00072b37) aid_placing_vt_slider_lsc

0x34b6,	// (0x00072b3f) aid_placing_vt_slider_prt

0xeab8,	// (0x0007e141) bg_tb_trans_pane_cp01_ParamLimits

0x6600,	// (0x00075c89) popup_image_details_window_g1_ParamLimits

0x6613,	// (0x00075c9c) popup_image_details_window_g2_ParamLimits

0x6628,	// (0x00075cb1) popup_image_details_window_g3_ParamLimits

0x6628,	// (0x00075cb1) popup_image_details_window_g3

0xf77f,	// (0x0007ee08) popup_image_details_window_g_ParamLimits

0x663c,	// (0x00075cc5) popup_image_details_window_t1_ParamLimits

0x664e,	// (0x00075cd7) popup_image_details_window_t2_ParamLimits

0x6667,	// (0x00075cf0) popup_image_details_window_t3_ParamLimits

0x667b,	// (0x00075d04) popup_image_details_window_t4_ParamLimits

0x6696,	// (0x00075d1f) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x0007ee0f) popup_image_details_window_t_ParamLimits

0x8ecd,	// (0x00078556) cl_header_name_pane_ParamLimits

0x8ecd,	// (0x00078556) cl_header_name_pane

0x926c,	// (0x000788f5) cl_header_name_pane_t1_ParamLimits

0x926c,	// (0x000788f5) cl_header_name_pane_t1

0x928d,	// (0x00078916) cl_header_name_pane_t2_ParamLimits

0x928d,	// (0x00078916) cl_header_name_pane_t2

0x92cf,	// (0x00078958) cl_header_name_pane_t3_ParamLimits

0x92cf,	// (0x00078958) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x0007f201) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x0007f201) cl_header_name_pane_t

0x47c3,	// (0x00073e4c) navi_pane_mv_g2_ParamLimits

0xcbfd,	// (0x0007c286) field_vitu2_entry_pane_g1_ParamLimits

0xcc09,	// (0x0007c292) field_vitu2_entry_pane_g2_ParamLimits

0xcc15,	// (0x0007c29e) field_vitu2_entry_pane_g3_ParamLimits

0xcc15,	// (0x0007c29e) field_vitu2_entry_pane_g3

0xf974,	// (0x0007effd) field_vitu2_entry_pane_g_ParamLimits

0x832f,	// (0x000779b8) cell_vitu2_itu_pane_g1_ParamLimits

0x833f,	// (0x000779c8) cell_vitu2_itu_pane_g2_ParamLimits

0x833f,	// (0x000779c8) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x0007f009) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x0007f009) cell_vitu2_itu_pane_g

0xeab8,	// (0x0007e141) bg_vkb2_func_pane_cp05_ParamLimits

0xeab8,	// (0x0007e141) bg_vkb2_func_pane_cp05

0xeab8,	// (0x0007e141) bg_vkb2_func_pane_cp03

0xeab8,	// (0x0007e141) bg_vkb2_func_pane_cp04

0xeab8,	// (0x0007e141) bg_vkb2_func_pane_cp10_ParamLimits

0xeab8,	// (0x0007e141) bg_vkb2_func_pane_cp10

0x172e,	// (0x00070db7) bg_vkb2_func_pane_cp08

0x8e77,	// (0x00078500) bg_vkb2_func_pane_cp06

0x8e85,	// (0x0007850e) bg_vkb2_func_pane_cp07

0xd264,	// (0x0007c8ed) bg_vkb2_func_pane_cp11_ParamLimits

0xd264,	// (0x0007c8ed) bg_vkb2_func_pane_cp11

0xd279,	// (0x0007c902) bg_vkb2_func_pane_cp12_ParamLimits

0xd279,	// (0x0007c902) bg_vkb2_func_pane_cp12

0x1c70,	// (0x000712f9) bg_vkb2_func_pane_cp09

0xcc52,	// (0x0007c2db) bg_vkb2_func_pane_g1

0x39ca,	// (0x00073053) bg_vkb2_func_pane_g2

0xcc5a,	// (0x0007c2e3) bg_vkb2_func_pane_g3

0xcc62,	// (0x0007c2eb) bg_vkb2_func_pane_g4

0xce9d,	// (0x0007c526) bg_vkb2_func_pane_g5

0xcc7a,	// (0x0007c303) bg_vkb2_func_pane_g6

0xcc82,	// (0x0007c30b) bg_vkb2_func_pane_g7

0xcc72,	// (0x0007c2fb) bg_vkb2_func_pane_g8

0x39aa,	// (0x00073033) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x0007f208) bg_vkb2_func_pane_g

0x9192,	// (0x0007881b) blid2_tripm_pane_g6_ParamLimits

0x9192,	// (0x0007881b) blid2_tripm_pane_g6

0xca81,	// (0x0007c10a) mp4_progress_pane_g1

0x920b,	// (0x00078894) blid2_tripm_values_pane_ParamLimits

0x920b,	// (0x00078894) blid2_tripm_values_pane

0x9300,	// (0x00078989) blid2_tripm_values_pane_t1

0x930e,	// (0x00078997) blid2_tripm_values_pane_t2

0x931c,	// (0x000789a5) blid2_tripm_values_pane_t3

0x932a,	// (0x000789b3) blid2_tripm_values_pane_t4

0x9338,	// (0x000789c1) blid2_tripm_values_pane_t5

0x9346,	// (0x000789cf) blid2_tripm_values_pane_t6

0x9354,	// (0x000789dd) blid2_tripm_values_pane_t7

0x9362,	// (0x000789eb) blid2_tripm_values_pane_t8

0x9370,	// (0x000789f9) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x0007f21b) blid2_tripm_values_pane_t

0x34ee,	// (0x00072b77) call_video_pane_t1_ParamLimits

0x3500,	// (0x00072b89) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0007e95e) call_video_pane_t_ParamLimits

0x149a,	// (0x00070b23) msg_header_pane_g1_ParamLimits

0xb415,	// (0x0007aa9e) msg_header_pane_g2_ParamLimits

0xb415,	// (0x0007aa9e) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0007eb78) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0007eb78) msg_header_pane_g

0x2964,	// (0x00071fed) main_clock2_pane_ParamLimits

0x71d9,	// (0x00076862) grid_clock2_toolbar_pane_ParamLimits

0x71d9,	// (0x00076862) grid_clock2_toolbar_pane

0x71d9,	// (0x00076862) listscroll_clock2_pane_ParamLimits

0x71d9,	// (0x00076862) listscroll_clock2_pane

0x72bd,	// (0x00076946) main_clock2_pane_t3_ParamLimits

0x72bd,	// (0x00076946) main_clock2_pane_t3

0x72d8,	// (0x00076961) main_clock2_pane_t4_ParamLimits

0x72d8,	// (0x00076961) main_clock2_pane_t4

0xd370,	// (0x0007c9f9) cell_clock2_toolbar_pane

0xd378,	// (0x0007ca01) cell_clock2_toolbar_pane_cp01

0xd378,	// (0x0007ca01) cell_clock2_toolbar_pane_cp02

0xd380,	// (0x0007ca09) cell_clock2_toolbar_pane_cp03

0xd388,	// (0x0007ca11) list_clock2_pane

0xb13e,	// (0x0007a7c7) scroll_pane_cp10

0xd390,	// (0x0007ca19) list_single_clock2_pane_ParamLimits

0xd390,	// (0x0007ca19) list_single_clock2_pane

0xb278,	// (0x0007a901) list_highlight_pane_cp08

0xd39d,	// (0x0007ca26) list_single_clock2_pane_t1

0xd3ab,	// (0x0007ca34) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x0007f22e) list_single_clock2_pane_t

0x1c70,	// (0x000712f9) bg_button_pane_cp10

0xd3b9,	// (0x0007ca42) cell_clock2_toolbar_pane_g1

0x4ce4,	// (0x0007436d) aid_main_viewer_pane_g1_ParamLimits

0x4ce4,	// (0x0007436d) aid_main_viewer_pane_g1

0x4cf2,	// (0x0007437b) aid_main_viewer_pane_g2_ParamLimits

0x4cf2,	// (0x0007437b) aid_main_viewer_pane_g2

0x4d00,	// (0x00074389) aid_main_viewer_pane_g3_ParamLimits

0x4d00,	// (0x00074389) aid_main_viewer_pane_g3

0x4d0f,	// (0x00074398) aid_main_viewer_pane_g4_ParamLimits

0x4d0f,	// (0x00074398) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0007eb89) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0007eb89) aid_main_viewer_pane_g

0x5667,	// (0x00074cf0) main_calc_pane_ParamLimits

0x567b,	// (0x00074d04) main_dialer2_pane_ParamLimits

0x1c70,	// (0x000712f9) main_cam6_pane

0x1c70,	// (0x000712f9) main_vid6_pane

0x71e5,	// (0x0007686e) listscroll_gen_pane_cp06_ParamLimits

0x71e5,	// (0x0007686e) listscroll_gen_pane_cp06

0x72f3,	// (0x0007697c) main_clock2_pane_t5_ParamLimits

0x72f3,	// (0x0007697c) main_clock2_pane_t5

0x7350,	// (0x000769d9) aid_call2_pane_cp10_ParamLimits

0x7362,	// (0x000769eb) aid_call_pane_cp10_ParamLimits

0xb1ad,	// (0x0007a836) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1ad,	// (0x0007a836) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7374,	// (0x000769fd) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7374,	// (0x000769fd) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1ad,	// (0x0007a836) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0007eebf) popup_clock_analogue_window_cp10_g_ParamLimits

0x738a,	// (0x00076a13) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7b20,	// (0x000771a9) cell_dialer2_keypad_pane_g2_ParamLimits

0x7b20,	// (0x000771a9) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x0007efa5) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x0007efa5) cell_dialer2_keypad_pane_g

0x7b3c,	// (0x000771c5) cell_dialer2_keypad_pane_t1

0x86de,	// (0x00077d67) main_cset_text2_pane_ParamLimits

0x86de,	// (0x00077d67) main_cset_text2_pane

0xd0de,	// (0x0007c767) area_vitu2_query_pane_g1_ParamLimits

0x16f3,	// (0x00070d7c) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0007f14b) area_vitu2_query_pane_g_ParamLimits

0xd162,	// (0x0007c7eb) area_vitu2_query_pane_t7_ParamLimits

0xd162,	// (0x0007c7eb) area_vitu2_query_pane_t7

0x8e77,	// (0x00078500) bg_button_pane_cp018_ParamLimits

0x8e85,	// (0x0007850e) bg_button_pane_cp021_ParamLimits

0x172e,	// (0x00070db7) bg_button_pane_cp022_ParamLimits

0x172e,	// (0x00070db7) bg_vkb2_func_pane_cp08_ParamLimits

0x8e77,	// (0x00078500) bg_vkb2_func_pane_cp06_ParamLimits

0x8e85,	// (0x0007850e) bg_vkb2_func_pane_cp07_ParamLimits

0x173f,	// (0x00070dc8) input_focus_pane_cp09_ParamLimits

0xf10d,	// (0x0007e796) cam6_autofocus_pane_ParamLimits

0xf10d,	// (0x0007e796) cam6_autofocus_pane

0x937e,	// (0x00078a07) cam6_image_uncrop_pane_ParamLimits

0x937e,	// (0x00078a07) cam6_image_uncrop_pane

0x938d,	// (0x00078a16) cam6_indi_pane_ParamLimits

0x938d,	// (0x00078a16) cam6_indi_pane

0x93a3,	// (0x00078a2c) cam6_mode_pane_ParamLimits

0x93a3,	// (0x00078a2c) cam6_mode_pane

0x93b5,	// (0x00078a3e) cam6_timer_pane_ParamLimits

0x93b5,	// (0x00078a3e) cam6_timer_pane

0x93c1,	// (0x00078a4a) cam6_zoom_pane_ParamLimits

0x93c1,	// (0x00078a4a) cam6_zoom_pane

0x93cf,	// (0x00078a58) cam6_mode_pane_g1_ParamLimits

0x93cf,	// (0x00078a58) cam6_mode_pane_g1

0x93df,	// (0x00078a68) cam6_mode_pane_g2_ParamLimits

0x93df,	// (0x00078a68) cam6_mode_pane_g2

0x93ef,	// (0x00078a78) cam6_mode_pane_g3_ParamLimits

0x93ef,	// (0x00078a78) cam6_mode_pane_g3

0x93ff,	// (0x00078a88) cam6_mode_pane_g4_ParamLimits

0x93ff,	// (0x00078a88) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x0007f233) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x0007f233) cam6_mode_pane_g

0xd3c1,	// (0x0007ca4a) bg_tb_trans_pane_cp08_ParamLimits

0xd3c1,	// (0x0007ca4a) bg_tb_trans_pane_cp08

0xd3cf,	// (0x0007ca58) cam6_battery_pane_ParamLimits

0xd3cf,	// (0x0007ca58) cam6_battery_pane

0xd3e5,	// (0x0007ca6e) cam6_indi_pane_g1_ParamLimits

0xd3e5,	// (0x0007ca6e) cam6_indi_pane_g1

0xd3f7,	// (0x0007ca80) cam6_indi_pane_g2_ParamLimits

0xd3f7,	// (0x0007ca80) cam6_indi_pane_g2

0xd409,	// (0x0007ca92) cam6_indi_pane_g3_ParamLimits

0xd409,	// (0x0007ca92) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x0007f23c) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x0007f23c) cam6_indi_pane_g

0xd41b,	// (0x0007caa4) cam6_indi_pane_t1_ParamLimits

0xd41b,	// (0x0007caa4) cam6_indi_pane_t1

0x8101,	// (0x0007778a) cam6_autofocus_pane_g1

0x8109,	// (0x00077792) cam6_autofocus_pane_g2

0x8111,	// (0x0007779a) cam6_autofocus_pane_g3

0x8119,	// (0x000777a2) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x0007f243) cam6_autofocus_pane_g

0xd441,	// (0x0007caca) cam6_timer_pane_g1

0xd449,	// (0x0007cad2) cam6_timer_pane_t1

0xd457,	// (0x0007cae0) cam6_zoom_cont_pane

0xd45f,	// (0x0007cae8) cam6_zoom_pane_g1

0xd467,	// (0x0007caf0) cam6_zoom_pane_g2

0x940f,	// (0x00078a98) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x0007f24c) cam6_zoom_pane_g

0x643b,	// (0x00075ac4) cam6_battery_pane_g1

0x643b,	// (0x00075ac4) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x0007edcc) cam6_battery_pane_g

0xd46f,	// (0x0007caf8) cam6_zoom_cont_pane_g1

0xd478,	// (0x0007cb01) cam6_zoom_cont_pane_g2

0xd481,	// (0x0007cb0a) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x0007f253) cam6_zoom_cont_pane_g

0x942c,	// (0x00078ab5) cam6_mode_pane_cp_ParamLimits

0x942c,	// (0x00078ab5) cam6_mode_pane_cp

0x93c1,	// (0x00078a4a) cam6_zoom_pane_cp_ParamLimits

0x93c1,	// (0x00078a4a) cam6_zoom_pane_cp

0x943e,	// (0x00078ac7) vid6_image_uncrop_cif_pane_ParamLimits

0x943e,	// (0x00078ac7) vid6_image_uncrop_cif_pane

0x944e,	// (0x00078ad7) vid6_image_uncrop_nhd_pane_ParamLimits

0x944e,	// (0x00078ad7) vid6_image_uncrop_nhd_pane

0x937e,	// (0x00078a07) vid6_image_uncrop_vga_pane_ParamLimits

0x937e,	// (0x00078a07) vid6_image_uncrop_vga_pane

0x945d,	// (0x00078ae6) vid6_image_uncrop_wvga_pane_ParamLimits

0x945d,	// (0x00078ae6) vid6_image_uncrop_wvga_pane

0x946c,	// (0x00078af5) vid6_indi_pane_ParamLimits

0x946c,	// (0x00078af5) vid6_indi_pane

0xd3c1,	// (0x0007ca4a) bg_tb_trans_pane_cp09_ParamLimits

0xd3c1,	// (0x0007ca4a) bg_tb_trans_pane_cp09

0xd499,	// (0x0007cb22) cam6_battery_pane_cp_ParamLimits

0xd499,	// (0x0007cb22) cam6_battery_pane_cp

0xd4a5,	// (0x0007cb2e) vid6_indi_pane_g1_ParamLimits

0xd4a5,	// (0x0007cb2e) vid6_indi_pane_g1

0xd4b7,	// (0x0007cb40) vid6_indi_pane_g2_ParamLimits

0xd4b7,	// (0x0007cb40) vid6_indi_pane_g2

0xd4c9,	// (0x0007cb52) vid6_indi_pane_g3_ParamLimits

0xd4c9,	// (0x0007cb52) vid6_indi_pane_g3

0xd4e0,	// (0x0007cb69) vid6_indi_pane_g4_ParamLimits

0xd4e0,	// (0x0007cb69) vid6_indi_pane_g4

0xd4f7,	// (0x0007cb80) vid6_indi_pane_g5_ParamLimits

0xd4f7,	// (0x0007cb80) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x0007f25a) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x0007f25a) vid6_indi_pane_g

0xd511,	// (0x0007cb9a) vid6_indi_pane_t1_ParamLimits

0xd511,	// (0x0007cb9a) vid6_indi_pane_t1

0xd527,	// (0x0007cbb0) vid6_indi_pane_t2_ParamLimits

0xd527,	// (0x0007cbb0) vid6_indi_pane_t2

0xd54f,	// (0x0007cbd8) vid6_indi_pane_t3_ParamLimits

0xd54f,	// (0x0007cbd8) vid6_indi_pane_t3

0xd577,	// (0x0007cc00) vid6_indi_pane_t4_ParamLimits

0xd577,	// (0x0007cc00) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x0007f265) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x0007f265) vid6_indi_pane_t

0xd59b,	// (0x0007cc24) wait_bar_pane_cp08

0x9484,	// (0x00078b0d) main_cset_text2_pane_t1_ParamLimits

0x9484,	// (0x00078b0d) main_cset_text2_pane_t1

0x9417,	// (0x00078aa0) listscroll_gen_pane_cp06_t1_ParamLimits

0x9417,	// (0x00078aa0) listscroll_gen_pane_cp06_t1

0x1c70,	// (0x000712f9) main_cam6_set_pane

0x6a89,	// (0x00076112) bg_tb_trans_pane_cp06_ParamLimits

0x7fc4,	// (0x0007764d) cam4_indicators_pane_g1_ParamLimits

0x7fd1,	// (0x0007765a) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x0007efd9) cam4_indicators_pane_g_ParamLimits

0x7fe9,	// (0x00077672) cam4_indicators_pane_t1_ParamLimits

0xcbd6,	// (0x0007c25f) bg_tb_trans_pane_cp07_ParamLimits

0x7fc4,	// (0x0007764d) vid4_indicators_pane_g1_ParamLimits

0x80c9,	// (0x00077752) vid4_indicators_pane_g2_ParamLimits

0x80d6,	// (0x0007775f) vid4_indicators_pane_g3_ParamLimits

0x80e3,	// (0x0007776c) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0007efeb) vid4_indicators_pane_g_ParamLimits

0x80ef,	// (0x00077778) vid4_indicators_pane_t1_ParamLimits

0xf06d,	// (0x0007e6f6) vid4_progress_pane_g1_ParamLimits

0xf079,	// (0x0007e702) vid4_progress_pane_g2_ParamLimits

0xf085,	// (0x0007e70e) vid4_progress_pane_g3_ParamLimits

0xf094,	// (0x0007e71d) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x0007f196) vid4_progress_pane_g_ParamLimits

0xf0b2,	// (0x0007e73b) vid4_progress_pane_t1_ParamLimits

0xf0c8,	// (0x0007e751) vid4_progress_pane_t2_ParamLimits

0xf0de,	// (0x0007e767) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x0007f1a1) vid4_progress_pane_t_ParamLimits

0xf0f3,	// (0x0007e77c) wait_bar_pane_cp07_ParamLimits

0x94a5,	// (0x00078b2e) main_cam6_set_pane_g2_ParamLimits

0x94a5,	// (0x00078b2e) main_cam6_set_pane_g2

0x94cb,	// (0x00078b54) main_cset6_listscroll_pane_ParamLimits

0x94cb,	// (0x00078b54) main_cset6_listscroll_pane

0x94e9,	// (0x00078b72) main_cset6_slider_pane_ParamLimits

0x94e9,	// (0x00078b72) main_cset6_slider_pane

0x94ff,	// (0x00078b88) main_cset6_text2_pane_ParamLimits

0x94ff,	// (0x00078b88) main_cset6_text2_pane

0xd5aa,	// (0x0007cc33) main_cset6_text_pane

0xd5b2,	// (0x0007cc3b) main_cset_list_pane_copy1_ParamLimits

0xd5b2,	// (0x0007cc3b) main_cset_list_pane_copy1

0xd5c2,	// (0x0007cc4b) scroll_pane_cp028_copy1

0x950d,	// (0x00078b96) cset_list_set_pane_copy1

0x9521,	// (0x00078baa) aid_position_infowindow_above_copy1

0x9529,	// (0x00078bb2) aid_position_infowindow_below_copy1

0x9531,	// (0x00078bba) cset_list_set_pane_g1_copy1

0xd5cb,	// (0x0007cc54) cset_list_set_pane_g3_copy1_ParamLimits

0xd5cb,	// (0x0007cc54) cset_list_set_pane_g3_copy1

0xd5da,	// (0x0007cc63) cset_list_set_pane_t1_copy1_ParamLimits

0xd5da,	// (0x0007cc63) cset_list_set_pane_t1_copy1

0xeab8,	// (0x0007e141) list_highlight_pane_cp021_copy1_ParamLimits

0xeab8,	// (0x0007e141) list_highlight_pane_cp021_copy1

0xd5ef,	// (0x0007cc78) cset6_slider_pane_ParamLimits

0xd5ef,	// (0x0007cc78) cset6_slider_pane

0xd61b,	// (0x0007cca4) main_cset6_slider_pane_g1_ParamLimits

0xd61b,	// (0x0007cca4) main_cset6_slider_pane_g1

0x9539,	// (0x00078bc2) main_cset6_slider_pane_g2_ParamLimits

0x9539,	// (0x00078bc2) main_cset6_slider_pane_g2

0xd643,	// (0x0007cccc) main_cset6_slider_pane_g3_ParamLimits

0xd643,	// (0x0007cccc) main_cset6_slider_pane_g3

0x9561,	// (0x00078bea) main_cset6_slider_pane_g4_ParamLimits

0x9561,	// (0x00078bea) main_cset6_slider_pane_g4

0x956d,	// (0x00078bf6) main_cset6_slider_pane_g5_ParamLimits

0x956d,	// (0x00078bf6) main_cset6_slider_pane_g5

0xcd85,	// (0x0007c40e) main_cset6_slider_pane_g7_ParamLimits

0xcd85,	// (0x0007c40e) main_cset6_slider_pane_g7

0xcd91,	// (0x0007c41a) main_cset6_slider_pane_g8_ParamLimits

0xcd91,	// (0x0007c41a) main_cset6_slider_pane_g8

0x878d,	// (0x00077e16) main_cset6_slider_pane_g9_ParamLimits

0x878d,	// (0x00077e16) main_cset6_slider_pane_g9

0x8799,	// (0x00077e22) main_cset6_slider_pane_g10_ParamLimits

0x8799,	// (0x00077e22) main_cset6_slider_pane_g10

0x87a5,	// (0x00077e2e) main_cset6_slider_pane_g11_ParamLimits

0x87a5,	// (0x00077e2e) main_cset6_slider_pane_g11

0x87b1,	// (0x00077e3a) main_cset6_slider_pane_g12_ParamLimits

0x87b1,	// (0x00077e3a) main_cset6_slider_pane_g12

0x87bd,	// (0x00077e46) main_cset6_slider_pane_g13_ParamLimits

0x87bd,	// (0x00077e46) main_cset6_slider_pane_g13

0x87c9,	// (0x00077e52) main_cset6_slider_pane_g14_ParamLimits

0x87c9,	// (0x00077e52) main_cset6_slider_pane_g14

0x957b,	// (0x00078c04) main_cset6_slider_pane_g15_ParamLimits

0x957b,	// (0x00078c04) main_cset6_slider_pane_g15

0x87ed,	// (0x00077e76) main_cset6_slider_pane_g16_ParamLimits

0x87ed,	// (0x00077e76) main_cset6_slider_pane_g16

0x87fb,	// (0x00077e84) main_cset6_slider_pane_g17_ParamLimits

0x87fb,	// (0x00077e84) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x0007f26e) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x0007f26e) main_cset6_slider_pane_g

0xd64f,	// (0x0007ccd8) main_cset6_slider_pane_t1_ParamLimits

0xd64f,	// (0x0007ccd8) main_cset6_slider_pane_t1

0x95ab,	// (0x00078c34) main_cset6_slider_pane_t2_ParamLimits

0x95ab,	// (0x00078c34) main_cset6_slider_pane_t2

0x95d6,	// (0x00078c5f) main_cset6_slider_pane_t3_ParamLimits

0x95d6,	// (0x00078c5f) main_cset6_slider_pane_t3

0x9601,	// (0x00078c8a) main_cset6_slider_pane_t4_ParamLimits

0x9601,	// (0x00078c8a) main_cset6_slider_pane_t4

0x962e,	// (0x00078cb7) main_cset6_slider_pane_t5_ParamLimits

0x962e,	// (0x00078cb7) main_cset6_slider_pane_t5

0xd690,	// (0x0007cd19) main_cset6_slider_pane_t7_ParamLimits

0xd690,	// (0x0007cd19) main_cset6_slider_pane_t7

0x965b,	// (0x00078ce4) main_cset6_slider_pane_t8_ParamLimits

0x965b,	// (0x00078ce4) main_cset6_slider_pane_t8

0x967f,	// (0x00078d08) main_cset6_slider_pane_t9_ParamLimits

0x967f,	// (0x00078d08) main_cset6_slider_pane_t9

0x96a3,	// (0x00078d2c) main_cset6_slider_pane_t10_ParamLimits

0x96a3,	// (0x00078d2c) main_cset6_slider_pane_t10

0x96c7,	// (0x00078d50) main_cset6_slider_pane_t11_ParamLimits

0x96c7,	// (0x00078d50) main_cset6_slider_pane_t11

0xd6c6,	// (0x0007cd4f) main_cset6_slider_pane_t14_ParamLimits

0xd6c6,	// (0x0007cd4f) main_cset6_slider_pane_t14

0xd6ff,	// (0x0007cd88) main_cset6_slider_pane_t15_ParamLimits

0xd6ff,	// (0x0007cd88) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x0007f293) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x0007f293) main_cset6_slider_pane_t

0xce49,	// (0x0007c4d2) cset_slider_pane_g1_copy1

0xce52,	// (0x0007c4db) cset_slider_pane_g2_copy1

0xce5b,	// (0x0007c4e4) cset_slider_pane_g3_copy1

0x1c70,	// (0x000712f9) bg_popup_sub_pane_cp011_copy1

0xcefe,	// (0x0007c587) main_cset_text_pane_g1_copy1

0xcf06,	// (0x0007c58f) main_cset_text_pane_t1_copy1

0xcf14,	// (0x0007c59d) main_cset_text_pane_t2_copy1

0xcf22,	// (0x0007c5ab) main_cset_text_pane_t3_copy1

0xcf30,	// (0x0007c5b9) main_cset_text_pane_t4_copy1

0xcf3e,	// (0x0007c5c7) main_cset_text_pane_t5_copy1

0xcf4c,	// (0x0007c5d5) main_cset_text_pane_t6_copy1

0xcf5a,	// (0x0007c5e3) main_cset_text_pane_t7_copy1

0x9484,	// (0x00078b0d) main_cset_text2_pane_t1_copy1

0x1c70,	// (0x000712f9) main_ncimui_pane

0x5909,	// (0x00074f92) popup_query_ncimui_window_ParamLimits

0x5909,	// (0x00074f92) popup_query_ncimui_window

0xed6a,	// (0x0007e3f3) field_cale_ev2_pane_g4_ParamLimits

0xed6a,	// (0x0007e3f3) field_cale_ev2_pane_g4

0x79eb,	// (0x00077074) cell_video_dialer_keypad_pane_g2_ParamLimits

0x79eb,	// (0x00077074) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x0007ef80) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x0007ef80) cell_video_dialer_keypad_pane_g

0x7a03,	// (0x0007708c) cell_video_dialer_keypad_pane_t1

0x1c70,	// (0x000712f9) bg_popup_window_pane_cp012

0xb02a,	// (0x0007a6b3) heading_pane_cp06

0xd827,	// (0x0007ceb0) ncim_query_content_pane

0x1c70,	// (0x000712f9) bg_popup_heading_pane_cp01

0xd82f,	// (0x0007ceb8) ncim_heading_pane_t1

0xd83d,	// (0x0007cec6) ncim_indicator_popup_pane

0xd84f,	// (0x0007ced8) ncim_query_button_pane

0xd865,	// (0x0007ceee) ncim_query_content_pane_t1

0xd877,	// (0x0007cf00) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x0007f2d2) ncim_query_content_pane_t

0xd8b1,	// (0x0007cf3a) ncim_query_list_pane

0xd8c3,	// (0x0007cf4c) ncim_query_popup_pane

0xd83d,	// (0x0007cec6) ncim_indicator_popup_pane_ParamLimits

0x97b3,	// (0x00078e3c) ncim_query_content_pane_g1_ParamLimits

0x97b3,	// (0x00078e3c) ncim_query_content_pane_g1

0xd865,	// (0x0007ceee) ncim_query_content_pane_t1_ParamLimits

0xd877,	// (0x0007cf00) ncim_query_content_pane_t2_ParamLimits

0x97bf,	// (0x00078e48) ncim_query_content_pane_t3_ParamLimits

0x97bf,	// (0x00078e48) ncim_query_content_pane_t3

0x97e7,	// (0x00078e70) ncim_query_content_pane_t4_ParamLimits

0x97e7,	// (0x00078e70) ncim_query_content_pane_t4

0x980f,	// (0x00078e98) ncim_query_content_pane_t5_ParamLimits

0x980f,	// (0x00078e98) ncim_query_content_pane_t5

0xd889,	// (0x0007cf12) ncim_query_content_pane_t6_ParamLimits

0xd889,	// (0x0007cf12) ncim_query_content_pane_t6

0xfc49,	// (0x0007f2d2) ncim_query_content_pane_t_ParamLimits

0xd8b1,	// (0x0007cf3a) ncim_query_list_pane_ParamLimits

0xd8c3,	// (0x0007cf4c) ncim_query_popup_pane_ParamLimits

0xd8d7,	// (0x0007cf60) wait_bar_pane_cp04

0x1c70,	// (0x000712f9) input_focus_pane_cp011

0xd8df,	// (0x0007cf68) ncim_query_popup_pane_t1

0xd8ed,	// (0x0007cf76) ncim_list_query_list_pane_ParamLimits

0xd8ed,	// (0x0007cf76) ncim_list_query_list_pane

0x1c70,	// (0x000712f9) bg_button_pane_cp027

0xd900,	// (0x0007cf89) ncim_query_button_pane_g1

0x1c70,	// (0x000712f9) list_highlight_pane_cp012

0xd90a,	// (0x0007cf93) ncim_list_query_list_pane_g1

0xd912,	// (0x0007cf9b) ncim_list_query_list_pane_t1

0x7fdd,	// (0x00077666) cam4_indicators_pane_g3_ParamLimits

0x7fdd,	// (0x00077666) cam4_indicators_pane_g3

0x7fdd,	// (0x00077666) vid4_indicators_pane_g5_ParamLimits

0x7fdd,	// (0x00077666) vid4_indicators_pane_g5

0xf0a3,	// (0x0007e72c) vid4_progress_pane_g5_ParamLimits

0xf0a3,	// (0x0007e72c) vid4_progress_pane_g5

0x96fb,	// (0x00078d84) main_ncimui_pane_g1

0x9741,	// (0x00078dca) ncimui_group_query_pane_ParamLimits

0x9741,	// (0x00078dca) ncimui_group_query_pane

0x9775,	// (0x00078dfe) ncimui_list_pane_ParamLimits

0x9775,	// (0x00078dfe) ncimui_list_pane

0x978f,	// (0x00078e18) ncimui_text_pane_ParamLimits

0x978f,	// (0x00078e18) ncimui_text_pane

0x9837,	// (0x00078ec0) ncimui_text_pane_t1_ParamLimits

0x9837,	// (0x00078ec0) ncimui_text_pane_t1

0xd920,	// (0x0007cfa9) ncimui_list_single_graphic_pane_ParamLimits

0xd920,	// (0x0007cfa9) ncimui_list_single_graphic_pane

0x9854,	// (0x00078edd) ncimui_query_pane_ParamLimits

0x9854,	// (0x00078edd) ncimui_query_pane

0x1c70,	// (0x000712f9) list_highlight_pane_cp013

0xd930,	// (0x0007cfb9) ncim_list_query_list_pane_t1_copy1

0xd90a,	// (0x0007cf93) ncim_list_single_graphic_pane_g1

0xd93e,	// (0x0007cfc7) ncim_query_button_pane_cp01

0xd946,	// (0x0007cfcf) ncim_query_entry_pane_ParamLimits

0xd946,	// (0x0007cfcf) ncim_query_entry_pane

0xd956,	// (0x0007cfdf) ncimui_query_pane_g1

0xd95e,	// (0x0007cfe7) ncimui_query_pane_t1_ParamLimits

0xd95e,	// (0x0007cfe7) ncimui_query_pane_t1

0x1c70,	// (0x000712f9) input_focus_pane_cp012

0xd8df,	// (0x0007cf68) ncim_query_entry_pane_t1

0x2964,	// (0x00071fed) main_im_pane_ParamLimits

0xeab8,	// (0x0007e141) main_mobtv_pane_ParamLimits

0xeab8,	// (0x0007e141) main_mobtv_pane

0x9593,	// (0x00078c1c) main_cset6_slider_pane_g18_ParamLimits

0x9593,	// (0x00078c1c) main_cset6_slider_pane_g18

0x959f,	// (0x00078c28) main_cset6_slider_pane_g19_ParamLimits

0x959f,	// (0x00078c28) main_cset6_slider_pane_g19

0xd974,	// (0x0007cffd) bg_main_mobtv_pane_ParamLimits

0xd974,	// (0x0007cffd) bg_main_mobtv_pane

0x9864,	// (0x00078eed) main_mobtv_info_pane

0x986f,	// (0x00078ef8) main_mobtv_loading_pane_ParamLimits

0x986f,	// (0x00078ef8) main_mobtv_loading_pane

0xd982,	// (0x0007d00b) main_mobtv_pg_channel_list_pane

0xd98c,	// (0x0007d015) main_mobtv_pg_hdr_pane

0x987c,	// (0x00078f05) main_mobtv_programe_curr_pane_ParamLimits

0x987c,	// (0x00078f05) main_mobtv_programe_curr_pane

0x9889,	// (0x00078f12) main_mobtv_programe_next_pane_ParamLimits

0x9889,	// (0x00078f12) main_mobtv_programe_next_pane

0xd995,	// (0x0007d01e) popup_mobtv_noti_window

0x643b,	// (0x00075ac4) main_tv_pg_hdr_pane_g1

0xd99f,	// (0x0007d028) main_tv_pg_hdr_pane_g2

0xd9a7,	// (0x0007d030) main_tv_pg_hdr_pane_g3

0xd9af,	// (0x0007d038) main_tv_pg_hdr_pane_g4

0xd9b7,	// (0x0007d040) main_tv_pg_hdr_pane_g5

0xd9c1,	// (0x0007d04a) main_tv_pg_hdr_pane_g6

0xd9cb,	// (0x0007d054) main_tv_pg_hdr_pane_g7

0xd9d5,	// (0x0007d05e) main_tv_pg_hdr_pane_g8

0xd9df,	// (0x0007d068) main_tv_pg_hdr_pane_g9

0xd9e9,	// (0x0007d072) main_tv_pg_hdr_pane_g10

0xd9f3,	// (0x0007d07c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0007f2df) main_tv_pg_hdr_pane_g

0xd9fd,	// (0x0007d086) main_tv_pg_hdr_pane_t1

0xda0b,	// (0x0007d094) main_tv_pg_hdr_pane_t2

0xda19,	// (0x0007d0a2) main_tv_pg_hdr_pane_t3

0xda29,	// (0x0007d0b2) main_tv_pg_hdr_pane_t4

0xda39,	// (0x0007d0c2) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x0007f2f6) main_tv_pg_hdr_pane_t

0xda49,	// (0x0007d0d2) single_mobtv_pg_channel_pane_ParamLimits

0xda49,	// (0x0007d0d2) single_mobtv_pg_channel_pane

0xda5b,	// (0x0007d0e4) single_mobtv_pg_channel_table_pane

0xda64,	// (0x0007d0ed) single_mobtv_pg_channel_thumb_pane

0xda6d,	// (0x0007d0f6) single_tv_pg_channel_pane_g1

0xda76,	// (0x0007d0ff) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x0007f301) single_tv_pg_channel_pane_g

0x6719,	// (0x00075da2) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x6719,	// (0x00075da2) bg_single_mobtv_pg_channel_thumb_pane

0xda7f,	// (0x0007d108) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xda7f,	// (0x0007d108) single_mobtv_pg_channel_thumb_pane_g1

0xda8d,	// (0x0007d116) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xda8d,	// (0x0007d116) single_mobtv_pg_channel_thumb_pane_g2

0xda99,	// (0x0007d122) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xda99,	// (0x0007d122) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x0007f306) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x0007f306) single_mobtv_pg_channel_thumb_pane_g

0xdaa5,	// (0x0007d12e) single_mobtv_pg_channel_thumb_pane_t1

0xdab3,	// (0x0007d13c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0007f30d) single_mobtv_pg_channel_thumb_pane_t

0x643b,	// (0x00075ac4) bg_single_mobtv_pg_channel_table_pane_g1

0x643b,	// (0x00075ac4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x0007edcc) bg_single_mobtv_pg_channel_table_pane_g

0xdac1,	// (0x0007d14a) single_mobtv_pg_channel_table_pane_t1

0xdacf,	// (0x0007d158) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x0007f312) single_mobtv_pg_channel_table_pane_t

0x989e,	// (0x00078f27) main_mobtv_info_pane_g1_ParamLimits

0x989e,	// (0x00078f27) main_mobtv_info_pane_g1

0x98bc,	// (0x00078f45) main_mobtv_info_pane_t1_ParamLimits

0x98bc,	// (0x00078f45) main_mobtv_info_pane_t1

0x9934,	// (0x00078fbd) main_mobtv_info_pane_t2_ParamLimits

0x9934,	// (0x00078fbd) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x0007f31c) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x0007f31c) main_mobtv_info_pane_t

0x99c5,	// (0x0007904e) wait_bar_pane_cp05

0x99d7,	// (0x00079060) main_mobtv_loading_pane_g1_ParamLimits

0x99d7,	// (0x00079060) main_mobtv_loading_pane_g1

0x99e8,	// (0x00079071) main_mobtv_loading_pane_g2_ParamLimits

0x99e8,	// (0x00079071) main_mobtv_loading_pane_g2

0x99f4,	// (0x0007907d) main_mobtv_loading_pane_g3_ParamLimits

0x99f4,	// (0x0007907d) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x0007f323) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x0007f323) main_mobtv_loading_pane_g

0xdadd,	// (0x0007d166) main_mobtv_loading_pane_t1_ParamLimits

0xdadd,	// (0x0007d166) main_mobtv_loading_pane_t1

0xdaf5,	// (0x0007d17e) main_mobtv_loading_pane_t2_ParamLimits

0xdaf5,	// (0x0007d17e) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x0007f32a) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x0007f32a) main_mobtv_loading_pane_t

0x9a07,	// (0x00079090) wait_bar_pane_cp06_ParamLimits

0x9a07,	// (0x00079090) wait_bar_pane_cp06

0xdb19,	// (0x0007d1a2) main_mobtv_programe_curr_pane_t1

0xdb27,	// (0x0007d1b0) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x0007f32f) main_mobtv_programe_curr_pane_t

0xdb35,	// (0x0007d1be) main_mobtv_programe_next_pane_t1

0xdb43,	// (0x0007d1cc) main_mobtv_programe_next_pane_t2

0xdb51,	// (0x0007d1da) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x0007f334) main_mobtv_programe_next_pane_t

0x1c70,	// (0x000712f9) bg_popup_mobtv_noti_window_pane

0xdb5f,	// (0x0007d1e8) popup_mobtv_noti_window_g1

0xdb67,	// (0x0007d1f0) popup_mobtv_noti_window_t1

0xdb75,	// (0x0007d1fe) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x0007f33b) popup_mobtv_noti_window_t

0x643b,	// (0x00075ac4) bg_popup_mobtv_noti_window_pane_g1

0x1c70,	// (0x000712f9) sc_clock_pane

0x1c70,	// (0x000712f9) main_fs_bigclock_pane

0x91f5,	// (0x0007887e) blid2_tripm_pane_t4_ParamLimits

0x91f5,	// (0x0007887e) blid2_tripm_pane_t4

0x9a16,	// (0x0007909f) sc_clock_pane_g1_ParamLimits

0x9a16,	// (0x0007909f) sc_clock_pane_g1

0x9a28,	// (0x000790b1) sc_clock_pane_t1_ParamLimits

0x9a28,	// (0x000790b1) sc_clock_pane_t1

0x9a4c,	// (0x000790d5) sc_clock_pane_t2_ParamLimits

0x9a4c,	// (0x000790d5) sc_clock_pane_t2

0x9a64,	// (0x000790ed) sc_clock_pane_t3_ParamLimits

0x9a64,	// (0x000790ed) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x0007f340) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x0007f340) sc_clock_pane_t

0xa320,	// (0x000799a9) main_fs_bigclock_indicator_pane_ParamLimits

0xa320,	// (0x000799a9) main_fs_bigclock_indicator_pane

0x66b0,	// (0x00075d39) main_fs_bigclock_pane_g1_ParamLimits

0x66b0,	// (0x00075d39) main_fs_bigclock_pane_g1

0xa32c,	// (0x000799b5) main_fs_bigclock_pane_t1_ParamLimits

0xa32c,	// (0x000799b5) main_fs_bigclock_pane_t1

0xa33e,	// (0x000799c7) main_fs_bigclock_pane_t2_ParamLimits

0xa33e,	// (0x000799c7) main_fs_bigclock_pane_t2

0xa352,	// (0x000799db) main_fs_bigclock_pane_t3_ParamLimits

0xa352,	// (0x000799db) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x0007f53f) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x0007f53f) main_fs_bigclock_pane_t

0xe7c0,	// (0x0007de49) main_fs_bigclock_indicator_pane_g1

0xd857,	// (0x0007cee0) ncim_query_content_pane_g2_ParamLimits

0xd857,	// (0x0007cee0) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0007f2cd) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0007f2cd) ncim_query_content_pane_g

0x9a79,	// (0x00079102) sc_clock_pane_t4_ParamLimits

0x9a79,	// (0x00079102) sc_clock_pane_t4

0xeab8,	// (0x0007e141) main_radioblah_pane

0xcb72,	// (0x0007c1fb) cell_call4_button_pane_t1_copy1_ParamLimits

0xcb72,	// (0x0007c1fb) cell_call4_button_pane_t1_copy1

0x9703,	// (0x00078d8c) main_ncimui_pane_t1_ParamLimits

0x9703,	// (0x00078d8c) main_ncimui_pane_t1

0x9715,	// (0x00078d9e) main_ncimui_pane_t2_ParamLimits

0x9715,	// (0x00078d9e) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x0007f2c6) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x0007f2c6) main_ncimui_pane_t

0xdcad,	// (0x0007d336) main_radioblah_anim_pane_ParamLimits

0xdcad,	// (0x0007d336) main_radioblah_anim_pane

0xdcbe,	// (0x0007d347) main_radioblah_info_pane_ParamLimits

0xdcbe,	// (0x0007d347) main_radioblah_info_pane

0xdcd2,	// (0x0007d35b) main_radioblah_pane_t1_ParamLimits

0xdcd2,	// (0x0007d35b) main_radioblah_pane_t1

0xdcee,	// (0x0007d377) main_radioblah_pane_t2_ParamLimits

0xdcee,	// (0x0007d377) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x0007f361) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x0007f361) main_radioblah_pane_t

0x9b27,	// (0x000791b0) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9b27,	// (0x000791b0) main_radioblah_rocker_ctrl_pane

0xdd36,	// (0x0007d3bf) main_radioblah_info_pane_t1_ParamLimits

0xdd36,	// (0x0007d3bf) main_radioblah_info_pane_t1

0x9b7f,	// (0x00079208) main_radioblah_info_pane_t2_ParamLimits

0x9b7f,	// (0x00079208) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x0007f36a) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x0007f36a) main_radioblah_info_pane_t

0x643b,	// (0x00075ac4) main_radioblah_rocker_ctrl_pane_g1

0x9c2f,	// (0x000792b8) main_radioblah_rocker_ctrl_pane_g2

0x9c37,	// (0x000792c0) main_radioblah_rocker_ctrl_pane_g3

0x9c3f,	// (0x000792c8) main_radioblah_rocker_ctrl_pane_g4

0x9c47,	// (0x000792d0) main_radioblah_rocker_ctrl_pane_g5

0x9c4f,	// (0x000792d8) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x0007f373) main_radioblah_rocker_ctrl_pane_g

0x9484,	// (0x00078b0d) main_cset_text2_pane_t1_copy1_ParamLimits

0xefd7,	// (0x0007e660) cam4_image_uncrop_qvga_pane

0xefe9,	// (0x0007e672) vid4_image_uncrop_qcif_pane

0xf10d,	// (0x0007e796) cam6_image_uncrop_qvga_pane_ParamLimits

0xf10d,	// (0x0007e796) cam6_image_uncrop_qvga_pane

0xd489,	// (0x0007cb12) vid6_image_uncrop_qcif_pane_ParamLimits

0xd489,	// (0x0007cb12) vid6_image_uncrop_qcif_pane

0x1c70,	// (0x000712f9) bg_popup_preview_window_pane_cp03

0xd809,	// (0x0007ce92) list_cset_text2_pane

0xd811,	// (0x0007ce9a) main_cset6_text2_pane_g1

0xd819,	// (0x0007cea2) main_cset6_text2_pane_t1

0x9c57,	// (0x000792e0) list_cset_text2_pane_t1_ParamLimits

0x9c57,	// (0x000792e0) list_cset_text2_pane_t1

0xeab8,	// (0x0007e141) main_radioblah_pane_ParamLimits

0x99b1,	// (0x0007903a) main_mobtv_info_pane_t3_ParamLimits

0x99b1,	// (0x0007903a) main_mobtv_info_pane_t3

0x9b15,	// (0x0007919e) main_radioblah_pane_g1

0x9b4f,	// (0x000791d8) main_radioblah_info_pane_g1

0x9bd4,	// (0x0007925d) main_radioblah_info_pane_t3_ParamLimits

0x9bd4,	// (0x0007925d) main_radioblah_info_pane_t3

0x424d,	// (0x000738d6) highlight_cell_cale_month_pane_ParamLimits

0x424d,	// (0x000738d6) highlight_cell_cale_month_pane

0x1c70,	// (0x000712f9) main_phob_fisheye_pane

0x6fcf,	// (0x00076658) scroll_pane_cp0031_ParamLimits

0x6fcf,	// (0x00076658) scroll_pane_cp0031

0xd59b,	// (0x0007cc24) wait_bar_pane_cp08_ParamLimits

0x950d,	// (0x00078b96) cset_list_set_pane_copy1_ParamLimits

0xdd70,	// (0x0007d3f9) highlight_cell_cale_month_pane_g1

0x9c71,	// (0x000792fa) highlight_cell_cale_month_pane_t1

0xd1ce,	// (0x0007c857) list_gen_pane_cp01

0xcd70,	// (0x0007c3f9) scroll_pane_01

0x9c7f,	// (0x00079308) list_single_double_fisheye_pane

0xdd78,	// (0x0007d401) list_double_fisheye_pane_g1_ParamLimits

0xdd78,	// (0x0007d401) list_double_fisheye_pane_g1

0xdd84,	// (0x0007d40d) list_double_fisheye_pane_g2_ParamLimits

0xdd84,	// (0x0007d40d) list_double_fisheye_pane_g2

0x9c88,	// (0x00079311) list_double_fisheye_pane_g3_ParamLimits

0x9c88,	// (0x00079311) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x0007f380) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x0007f380) list_double_fisheye_pane_g

0x1750,	// (0x00070dd9) list_double_fisheye_pane_t1_ParamLimits

0x1750,	// (0x00070dd9) list_double_fisheye_pane_t1

0x176b,	// (0x00070df4) list_double_fisheye_pane_t2_ParamLimits

0x176b,	// (0x00070df4) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0007f38b) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0007f38b) list_double_fisheye_pane_t

0x1c70,	// (0x000712f9) main_call5_pane

0x9aa4,	// (0x0007912d) sc_swipe_pane_ParamLimits

0x9aa4,	// (0x0007912d) sc_swipe_pane

0x9ca7,	// (0x00079330) call5_image_pane_ParamLimits

0x9ca7,	// (0x00079330) call5_image_pane

0x9cc4,	// (0x0007934d) call5_swipe_1_pane_ParamLimits

0x9cc4,	// (0x0007934d) call5_swipe_1_pane

0x9cd7,	// (0x00079360) call5_swipe_2_pane_ParamLimits

0x9cd7,	// (0x00079360) call5_swipe_2_pane

0x9d04,	// (0x0007938d) popup_call5_audio_first_window_ParamLimits

0x9d04,	// (0x0007938d) popup_call5_audio_first_window

0x6719,	// (0x00075da2) call5_swipe_1_pane_g1_ParamLimits

0x6719,	// (0x00075da2) call5_swipe_1_pane_g1

0xddb5,	// (0x0007d43e) call5_swipe_1_pane_g2_ParamLimits

0xddb5,	// (0x0007d43e) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x0007f390) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x0007f390) call5_swipe_1_pane_g

0xddc1,	// (0x0007d44a) call5_swipe_1_pane_t1_ParamLimits

0xddc1,	// (0x0007d44a) call5_swipe_1_pane_t1

0x6719,	// (0x00075da2) call5_swipe_2_pane_g1_ParamLimits

0x6719,	// (0x00075da2) call5_swipe_2_pane_g1

0xddd6,	// (0x0007d45f) call5_swipe_2_pane_g2_ParamLimits

0xddd6,	// (0x0007d45f) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x0007f395) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x0007f395) call5_swipe_2_pane_g

0xdde2,	// (0x0007d46b) call5_swipe_2_pane_t1_ParamLimits

0xdde2,	// (0x0007d46b) call5_swipe_2_pane_t1

0xddf7,	// (0x0007d480) sc_swipe_pane_g1_ParamLimits

0xddf7,	// (0x0007d480) sc_swipe_pane_g1

0xde04,	// (0x0007d48d) sc_swipe_pane_g2_ParamLimits

0xde04,	// (0x0007d48d) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0007f39a) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0007f39a) sc_swipe_pane_g

0xde10,	// (0x0007d499) sc_swipe_pane_t1_ParamLimits

0xde10,	// (0x0007d499) sc_swipe_pane_t1

0x1c70,	// (0x000712f9) main_cmail_launcher_pane

0x9d19,	// (0x000793a2) aid_size_cell_cmail_l_ParamLimits

0x9d19,	// (0x000793a2) aid_size_cell_cmail_l

0x9d33,	// (0x000793bc) grid_cmail_l_pane_ParamLimits

0x9d33,	// (0x000793bc) grid_cmail_l_pane

0x9d4f,	// (0x000793d8) cell_cmail_l_pane_ParamLimits

0x9d4f,	// (0x000793d8) cell_cmail_l_pane

0x9d77,	// (0x00079400) cell_cmail_l_pane_g1_ParamLimits

0x9d77,	// (0x00079400) cell_cmail_l_pane_g1

0x9d83,	// (0x0007940c) cell_cmail_l_pane_t1_ParamLimits

0x9d83,	// (0x0007940c) cell_cmail_l_pane_t1

0xde25,	// (0x0007d4ae) cell_cmail_l_pane_t2_ParamLimits

0xde25,	// (0x0007d4ae) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0007f39f) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0007f39f) cell_cmail_l_pane_t

0xeab8,	// (0x0007e141) grid_highlight_pane_cp018_ParamLimits

0xeab8,	// (0x0007e141) grid_highlight_pane_cp018

0x1d8d,	// (0x00071416) main2_pane_ParamLimits

0x1d8d,	// (0x00071416) main2_pane

0x2b8c,	// (0x00072215) popup_sp_fs_action_menu_bg_pane_g1

0x2b94,	// (0x0007221d) popup_sp_fs_action_menu_bg_pane_g2

0x2b9c,	// (0x00072225) popup_sp_fs_action_menu_bg_pane_g3

0x2ba4,	// (0x0007222d) popup_sp_fs_action_menu_bg_pane_g4

0x2bac,	// (0x00072235) popup_sp_fs_action_menu_bg_pane_g5

0x2bb4,	// (0x0007223d) popup_sp_fs_action_menu_bg_pane_g6

0x2bbc,	// (0x00072245) popup_sp_fs_action_menu_bg_pane_g7

0x2bc4,	// (0x0007224d) popup_sp_fs_action_menu_bg_pane_g8

0x2bcc,	// (0x00072255) popup_sp_fs_action_menu_bg_pane_g9

0x2bd4,	// (0x0007225d) popup_sp_fs_action_menu_bg_pane_g10

0x2bd4,	// (0x0007225d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0007e878) popup_sp_fs_action_menu_bg_pane_g

0xaabf,	// (0x0007a148) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaabf,	// (0x0007a148) list_medium_line_x2_t3_g3_g1

0xaacb,	// (0x0007a154) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaacb,	// (0x0007a154) list_medium_line_x2_t3_g3_g2

0xaad7,	// (0x0007a160) list_medium_line_x2_t3_g3_g3_ParamLimits

0xaad7,	// (0x0007a160) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0007e928) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0007e928) list_medium_line_x2_t3_g3_g

0xaae3,	// (0x0007a16c) list_medium_line_x2_t3_g3_t1_ParamLimits

0xaae3,	// (0x0007a16c) list_medium_line_x2_t3_g3_t1

0x1393,	// (0x00070a1c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1393,	// (0x00070a1c) list_medium_line_x2_t3_g3_t2

0xaaf8,	// (0x0007a181) list_medium_line_x2_t3_g3_t3_ParamLimits

0xaaf8,	// (0x0007a181) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0007e92f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0007e92f) list_medium_line_x2_t3_g3_t

0xaabf,	// (0x0007a148) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaabf,	// (0x0007a148) list_medium_line_x2_t3_g2_g1

0xaad7,	// (0x0007a160) list_medium_line_x2_t3_g2_g2_ParamLimits

0xaad7,	// (0x0007a160) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0007e936) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0007e936) list_medium_line_x2_t3_g2_g

0xab0d,	// (0x0007a196) list_medium_line_x2_t3_g2_t1_ParamLimits

0xab0d,	// (0x0007a196) list_medium_line_x2_t3_g2_t1

0xab23,	// (0x0007a1ac) list_medium_line_x2_t3_g2_t2_ParamLimits

0xab23,	// (0x0007a1ac) list_medium_line_x2_t3_g2_t2

0xab35,	// (0x0007a1be) list_medium_line_x2_t3_g2_t3_ParamLimits

0xab35,	// (0x0007a1be) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0007e93b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0007e93b) list_medium_line_x2_t3_g2_t

0xaabf,	// (0x0007a148) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaabf,	// (0x0007a148) list_medium_line_x2_t4_g4_g1

0xab53,	// (0x0007a1dc) list_medium_line_x2_t4_g4_g2_ParamLimits

0xab53,	// (0x0007a1dc) list_medium_line_x2_t4_g4_g2

0xaacb,	// (0x0007a154) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaacb,	// (0x0007a154) list_medium_line_x2_t4_g4_g3

0xab5f,	// (0x0007a1e8) list_medium_line_x2_t4_g4_g4_ParamLimits

0xab5f,	// (0x0007a1e8) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0007e942) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0007e942) list_medium_line_x2_t4_g4_g

0x13a7,	// (0x00070a30) list_medium_line_x2_t4_g4_t1_ParamLimits

0x13a7,	// (0x00070a30) list_medium_line_x2_t4_g4_t1

0x13c1,	// (0x00070a4a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x13c1,	// (0x00070a4a) list_medium_line_x2_t4_g4_t2

0x13d7,	// (0x00070a60) list_medium_line_x2_t4_g4_t3_ParamLimits

0x13d7,	// (0x00070a60) list_medium_line_x2_t4_g4_t3

0xab6b,	// (0x0007a1f4) list_medium_line_x2_t4_g4_t4_ParamLimits

0xab6b,	// (0x0007a1f4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0007e94b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0007e94b) list_medium_line_x2_t4_g4_t

0xaabf,	// (0x0007a148) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaabf,	// (0x0007a148) list_medium_line_x2_t2_g4_g1

0xab53,	// (0x0007a1dc) list_medium_line_x2_t2_g4_g2_ParamLimits

0xab53,	// (0x0007a1dc) list_medium_line_x2_t2_g4_g2

0xaacb,	// (0x0007a154) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaacb,	// (0x0007a154) list_medium_line_x2_t2_g4_g3

0xaad7,	// (0x0007a160) list_medium_line_x2_t2_g4_g4_ParamLimits

0xaad7,	// (0x0007a160) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0007e9b2) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0007e9b2) list_medium_line_x2_t2_g4_g

0xabdf,	// (0x0007a268) list_medium_line_x2_t2_g4_t1_ParamLimits

0xabdf,	// (0x0007a268) list_medium_line_x2_t2_g4_t1

0xaaf8,	// (0x0007a181) list_medium_line_x2_t2_g4_t2_ParamLimits

0xaaf8,	// (0x0007a181) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0007e9bb) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0007e9bb) list_medium_line_x2_t2_g4_t

0xaabf,	// (0x0007a148) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaabf,	// (0x0007a148) list_medium_line_x2_t2_g3_g1

0xaacb,	// (0x0007a154) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaacb,	// (0x0007a154) list_medium_line_x2_t2_g3_g2

0xaad7,	// (0x0007a160) list_medium_line_x2_t2_g3_g3_ParamLimits

0xaad7,	// (0x0007a160) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0007e928) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0007e928) list_medium_line_x2_t2_g3_g

0xabf4,	// (0x0007a27d) list_medium_line_x2_t2_g3_t1_ParamLimits

0xabf4,	// (0x0007a27d) list_medium_line_x2_t2_g3_t1

0xaaf8,	// (0x0007a181) list_medium_line_x2_t2_g3_t2_ParamLimits

0xaaf8,	// (0x0007a181) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0007e9c0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0007e9c0) list_medium_line_x2_t2_g3_t

0x4426,	// (0x00073aaf) main_sp_fs_list_pane_ParamLimits

0x4426,	// (0x00073aaf) main_sp_fs_list_pane

0x4432,	// (0x00073abb) sp_fs_scroll_pane_ParamLimits

0x4432,	// (0x00073abb) sp_fs_scroll_pane

0x13ec,	// (0x00070a75) list_medium_line_x2_t3_t1

0x13fc,	// (0x00070a85) list_medium_line_x2_t3_t2

0xadcd,	// (0x0007a456) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0007ea0b) list_medium_line_x2_t3_t

0x140a,	// (0x00070a93) list_medium_line_x3_t4_t1

0x141a,	// (0x00070aa3) list_medium_line_x3_t4_t2

0xaddb,	// (0x0007a464) list_medium_line_x3_t4_t3

0xadcd,	// (0x0007a456) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0007ea12) list_medium_line_x3_t4_t

0x1428,	// (0x00070ab1) list_medium_line_x4_t5_t1

0x1438,	// (0x00070ac1) list_medium_line_x4_t5_t2

0xaddb,	// (0x0007a464) list_medium_line_x4_t5_t3

0xade9,	// (0x0007a472) list_medium_line_x4_t5_t4

0xadcd,	// (0x0007a456) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0007ea1b) list_medium_line_x4_t5_t

0xaabf,	// (0x0007a148) list_medium_line_t4_g4_g1_ParamLimits

0xaabf,	// (0x0007a148) list_medium_line_t4_g4_g1

0xab5f,	// (0x0007a1e8) list_medium_line_t4_g4_g2_ParamLimits

0xab5f,	// (0x0007a1e8) list_medium_line_t4_g4_g2

0xadf7,	// (0x0007a480) list_medium_line_t4_g4_g3_ParamLimits

0xadf7,	// (0x0007a480) list_medium_line_t4_g4_g3

0xaad7,	// (0x0007a160) list_medium_line_t4_g4_g4_ParamLimits

0xaad7,	// (0x0007a160) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0007ea26) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0007ea26) list_medium_line_t4_g4_g

0xae03,	// (0x0007a48c) list_medium_line_t4_g4_t1_ParamLimits

0xae03,	// (0x0007a48c) list_medium_line_t4_g4_t1

0xae18,	// (0x0007a4a1) list_medium_line_t4_g4_t2_ParamLimits

0xae18,	// (0x0007a4a1) list_medium_line_t4_g4_t2

0xae2e,	// (0x0007a4b7) list_medium_line_t4_g4_t3_ParamLimits

0xae2e,	// (0x0007a4b7) list_medium_line_t4_g4_t3

0xaaf8,	// (0x0007a181) list_medium_line_t4_g4_t4_ParamLimits

0xaaf8,	// (0x0007a181) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0007ea2f) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0007ea2f) list_medium_line_t4_g4_t

0x4504,	// (0x00073b8d) chi_dic_find_pane_g1

0x568f,	// (0x00074d18) main_tport_pane

0xce8f,	// (0x0007c518) list_medium_line_plain_t1

0xcea5,	// (0x0007c52e) list_medium_line_t2_g2_g1_ParamLimits

0xcea5,	// (0x0007c52e) list_medium_line_t2_g2_g1

0xceb1,	// (0x0007c53a) list_medium_line_t2_g2_g2_ParamLimits

0xceb1,	// (0x0007c53a) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x0007f0e2) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x0007f0e2) list_medium_line_t2_g2_g

0x1640,	// (0x00070cc9) list_medium_line_t2_g2_t1_ParamLimits

0x1640,	// (0x00070cc9) list_medium_line_t2_g2_t1

0x1657,	// (0x00070ce0) list_medium_line_t2_g2_t2_ParamLimits

0x1657,	// (0x00070ce0) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x0007f0e7) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x0007f0e7) list_medium_line_t2_g2_t

0xd1d7,	// (0x0007c860) aid_sp_fs_list_icon_a_sm

0xf105,	// (0x0007e78e) aid_sp_fs_list_icon_d

0xd1df,	// (0x0007c868) aid_sp_fs_text_primary

0xd1e8,	// (0x0007c871) aid_sp_fs_text_secondary

0xd1f1,	// (0x0007c87a) list_medium_line

0xd1f1,	// (0x0007c87a) list_medium_line_g2

0xd1f1,	// (0x0007c87a) list_medium_line_g3

0xd1f1,	// (0x0007c87a) list_medium_line_plain

0xd1f1,	// (0x0007c87a) list_medium_line_plain_t2

0xd1f1,	// (0x0007c87a) list_medium_line_plain_t3

0xd1f1,	// (0x0007c87a) list_medium_line_right_icon

0xd1f1,	// (0x0007c87a) list_medium_line_right_iconx2

0xd1f1,	// (0x0007c87a) list_medium_line_t2

0xd1f1,	// (0x0007c87a) list_medium_line_t2_g2

0xd1f1,	// (0x0007c87a) list_medium_line_t2_g3

0xd1f1,	// (0x0007c87a) list_medium_line_t2_right_icon

0xd1f1,	// (0x0007c87a) list_medium_line_t2_right_iconx2

0xd1f1,	// (0x0007c87a) list_medium_line_t3

0xd1f1,	// (0x0007c87a) list_medium_line_t3_g2

0xd1f1,	// (0x0007c87a) list_medium_line_t3_g3

0xd1f1,	// (0x0007c87a) list_medium_line_t3_right_iconx2

0xd1fa,	// (0x0007c883) list_medium_line_t4_g4

0xd203,	// (0x0007c88c) list_medium_line_x2

0xd203,	// (0x0007c88c) list_medium_line_x2_t2_g2

0xd203,	// (0x0007c88c) list_medium_line_x2_t2_g3

0xd203,	// (0x0007c88c) list_medium_line_x2_t2_g4

0xd203,	// (0x0007c88c) list_medium_line_x2_t3

0xd203,	// (0x0007c88c) list_medium_line_x2_t3_g2

0xd203,	// (0x0007c88c) list_medium_line_x2_t3_g3

0xd203,	// (0x0007c88c) list_medium_line_x2_t3_g4

0xd203,	// (0x0007c88c) list_medium_line_x2_t4_g2

0xd203,	// (0x0007c88c) list_medium_line_x2_t4_g4

0xd20c,	// (0x0007c895) list_medium_line_x3

0xd20c,	// (0x0007c895) list_medium_line_x3_t4

0xd20c,	// (0x0007c895) list_medium_line_x3_t4_g4

0xd1fa,	// (0x0007c883) list_medium_line_x4_t4

0xd1fa,	// (0x0007c883) list_medium_line_x4_t4_g7

0xd1fa,	// (0x0007c883) list_medium_line_x4_t5

0xd215,	// (0x0007c89e) list_single_fs_dyc_pane_ParamLimits

0xd215,	// (0x0007c89e) list_single_fs_dyc_pane

0xaabf,	// (0x0007a148) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaabf,	// (0x0007a148) list_medium_line_x4_t4_g7_g1

0xd738,	// (0x0007cdc1) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd738,	// (0x0007cdc1) list_medium_line_x4_t4_g7_g2

0xd744,	// (0x0007cdcd) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd744,	// (0x0007cdcd) list_medium_line_x4_t4_g7_g3

0xd753,	// (0x0007cddc) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd753,	// (0x0007cddc) list_medium_line_x4_t4_g7_g4

0xd75f,	// (0x0007cde8) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd75f,	// (0x0007cde8) list_medium_line_x4_t4_g7_g5

0xd76e,	// (0x0007cdf7) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd76e,	// (0x0007cdf7) list_medium_line_x4_t4_g7_g6

0xd77d,	// (0x0007ce06) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd77d,	// (0x0007ce06) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0007f2ac) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0007f2ac) list_medium_line_x4_t4_g7_g

0xd789,	// (0x0007ce12) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd789,	// (0x0007ce12) list_medium_line_x4_t4_g7_t1

0xd79e,	// (0x0007ce27) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd79e,	// (0x0007ce27) list_medium_line_x4_t4_g7_t2

0xd7b3,	// (0x0007ce3c) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd7b3,	// (0x0007ce3c) list_medium_line_x4_t4_g7_t3

0xd7c8,	// (0x0007ce51) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd7c8,	// (0x0007ce51) list_medium_line_x4_t4_g7_t4

0xd7da,	// (0x0007ce63) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd7da,	// (0x0007ce63) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0007f2bb) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0007f2bb) list_medium_line_x4_t4_g7_t

0xd7ec,	// (0x0007ce75) list_single_dyc_row_pane_ParamLimits

0xd7ec,	// (0x0007ce75) list_single_dyc_row_pane

0x9c94,	// (0x0007931d) call5_gesture_pane_ParamLimits

0x9c94,	// (0x0007931d) call5_gesture_pane

0x9cea,	// (0x00079373) call5_windows_pane_ParamLimits

0x9cea,	// (0x00079373) call5_windows_pane

0x9d99,	// (0x00079422) call5_swipe_1_pane_cp_ParamLimits

0x9d99,	// (0x00079422) call5_swipe_1_pane_cp

0x9da5,	// (0x0007942e) call5_swipe_2_pane_cp_ParamLimits

0x9da5,	// (0x0007942e) call5_swipe_2_pane_cp

0xb278,	// (0x0007a901) call5_image_pane_cp

0x9db1,	// (0x0007943a) popup_call5_audio_first_window_cp_ParamLimits

0x9db1,	// (0x0007943a) popup_call5_audio_first_window_cp

0xddf7,	// (0x0007d480) call5_swipe_1_pane_g1_cp_ParamLimits

0xddf7,	// (0x0007d480) call5_swipe_1_pane_g1_cp

0xde37,	// (0x0007d4c0) call5_swipe_1_pane_g2_cp

0xde10,	// (0x0007d499) call5_swipe_1_pane_t1_cp_ParamLimits

0xde10,	// (0x0007d499) call5_swipe_1_pane_t1_cp

0xddf7,	// (0x0007d480) call5_swipe_2_pane_g1_cp_ParamLimits

0xddf7,	// (0x0007d480) call5_swipe_2_pane_g1_cp

0xde3f,	// (0x0007d4c8) call5_swipe_2_pane_g2_cp

0xde47,	// (0x0007d4d0) call5_swipe_2_pane_t1_cp_ParamLimits

0xde47,	// (0x0007d4d0) call5_swipe_2_pane_t1_cp

0xeab8,	// (0x0007e141) main_sp_fs_email_pane

0xde5c,	// (0x0007d4e5) main_sp_fs_listscroll_pane_te

0xde65,	// (0x0007d4ee) popup_sp_fs_action_menu_pane_ParamLimits

0xde65,	// (0x0007d4ee) popup_sp_fs_action_menu_pane

0x643b,	// (0x00075ac4) bg_sp_fs_ctrlbar_pane_g1

0xdeab,	// (0x0007d534) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdeb4,	// (0x0007d53d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdebd,	// (0x0007d546) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x643b,	// (0x00075ac4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x0007f3a4) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x03ca,	// (0x0006fa53) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x03ca,	// (0x0006fa53) bg_sp_fs_ctrlbar_ddmenu_pane

0xdec6,	// (0x0007d54f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdec6,	// (0x0007d54f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xded2,	// (0x0007d55b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xded2,	// (0x0007d55b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x0007f3ad) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x0007f3ad) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdede,	// (0x0007d567) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdede,	// (0x0007d567) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xdef8,	// (0x0007d581) list_medium_line_t2_right_icon_g1

0x178d,	// (0x00070e16) list_medium_line_t2_right_icon_t1

0x179d,	// (0x00070e26) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x0007f3b2) list_medium_line_t2_right_icon_t

0xeb2b,	// (0x0007e1b4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xeb2b,	// (0x0007e1b4) bg_sp_fs_ctrlbar_pane

0x9e07,	// (0x00079490) main_sp_fs_ctrlbar_button_pane_cp01

0x9e0f,	// (0x00079498) main_sp_fs_ctrlbar_ddmenu_pane

0xdf3a,	// (0x0007d5c3) main_sp_fs_ctrlbar_pane_g1

0xdf46,	// (0x0007d5cf) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x0007f3b7) main_sp_fs_ctrlbar_pane_g

0xdf52,	// (0x0007d5db) main_sp_fs_ctrlbar_pane_t1

0x17ab,	// (0x00070e34) main_sp_fs_ctrlbar_pane

0x17cf,	// (0x00070e58) main_sp_fs_listscroll_pane_te_cp01

0x17ef,	// (0x00070e78) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x17ef,	// (0x00070e78) popup_sp_fs_action_menu_pane_cp01

0xeab8,	// (0x0007e141) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xeab8,	// (0x0007e141) bg_sp_fs_highlight_list_pane_cp01

0xdf67,	// (0x0007d5f0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdf67,	// (0x0007d5f0) sp_fs_action_menu_list_gene_pane_g1

0xdf76,	// (0x0007d5ff) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdf76,	// (0x0007d5ff) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0007f3bc) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0007f3bc) sp_fs_action_menu_list_gene_pane_g

0xdf83,	// (0x0007d60c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdf83,	// (0x0007d60c) sp_fs_action_menu_list_gene_pane_t1

0xdf9b,	// (0x0007d624) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdf9b,	// (0x0007d624) sp_fs_action_menu_list_gene_pane

0xdfbe,	// (0x0007d647) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdfbe,	// (0x0007d647) popup_sp_fs_action_menu_bg_pane

0xdfcc,	// (0x0007d655) sp_fs_action_menu_list_pane_ParamLimits

0xdfcc,	// (0x0007d655) sp_fs_action_menu_list_pane

0xdff0,	// (0x0007d679) sp_fs_scroll_pane_cp01_ParamLimits

0xdff0,	// (0x0007d679) sp_fs_scroll_pane_cp01

0x180b,	// (0x00070e94) list_medium_line_plain_t2_t1

0x181b,	// (0x00070ea4) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x0007f3c1) list_medium_line_plain_t2_t

0x1829,	// (0x00070eb2) list_medium_line_plain_t3_t1

0x1839,	// (0x00070ec2) list_medium_line_plain_t3_t2

0x1847,	// (0x00070ed0) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x0007f3c6) list_medium_line_plain_t3_t

0xaabf,	// (0x0007a148) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaabf,	// (0x0007a148) list_medium_line_x2_t2_g2_g1

0xaad7,	// (0x0007a160) list_medium_line_x2_t2_g2_g2_ParamLimits

0xaad7,	// (0x0007a160) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0007e936) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0007e936) list_medium_line_x2_t2_g2_g

0xae03,	// (0x0007a48c) list_medium_line_x2_t2_g2_t1_ParamLimits

0xae03,	// (0x0007a48c) list_medium_line_x2_t2_g2_t1

0xaaf8,	// (0x0007a181) list_medium_line_x2_t2_g2_t2_ParamLimits

0xaaf8,	// (0x0007a181) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x0007f3cd) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x0007f3cd) list_medium_line_x2_t2_g2_t

0xaabf,	// (0x0007a148) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaabf,	// (0x0007a148) list_medium_line_x2_t4_g2_g1

0xe016,	// (0x0007d69f) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe016,	// (0x0007d69f) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x0007f3d2) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x0007f3d2) list_medium_line_x2_t4_g2_g

0x1855,	// (0x00070ede) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1855,	// (0x00070ede) list_medium_line_x2_t4_g2_t1

0x186f,	// (0x00070ef8) list_medium_line_x2_t4_g2_t2_ParamLimits

0x186f,	// (0x00070ef8) list_medium_line_x2_t4_g2_t2

0x1885,	// (0x00070f0e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1885,	// (0x00070f0e) list_medium_line_x2_t4_g2_t3

0xaaf8,	// (0x0007a181) list_medium_line_x2_t4_g2_t4_ParamLimits

0xaaf8,	// (0x0007a181) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x0007f3d7) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x0007f3d7) list_medium_line_x2_t4_g2_t

0xe028,	// (0x0007d6b1) list_medium_line_t3_right_iconx2_g1

0xdef8,	// (0x0007d581) list_medium_line_t3_right_iconx2_g2

0x189a,	// (0x00070f23) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x0007f3e0) list_medium_line_t3_right_iconx2_g

0x18a4,	// (0x00070f2d) list_medium_line_t3_right_iconx2_t1

0x18b4,	// (0x00070f3d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x0007f3e7) list_medium_line_t3_right_iconx2_t

0xaabf,	// (0x0007a148) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaabf,	// (0x0007a148) list_medium_line_x3_t4_g4_g1

0xaacb,	// (0x0007a154) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaacb,	// (0x0007a154) list_medium_line_x3_t4_g4_g2

0xab5f,	// (0x0007a1e8) list_medium_line_x3_t4_g4_g3_ParamLimits

0xab5f,	// (0x0007a1e8) list_medium_line_x3_t4_g4_g3

0xe030,	// (0x0007d6b9) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe030,	// (0x0007d6b9) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x0007f3ec) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x0007f3ec) list_medium_line_x3_t4_g4_g

0x18c2,	// (0x00070f4b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x18c2,	// (0x00070f4b) list_medium_line_x3_t4_g4_t1

0x18d9,	// (0x00070f62) list_medium_line_x3_t4_g4_t2_ParamLimits

0x18d9,	// (0x00070f62) list_medium_line_x3_t4_g4_t2

0xe03c,	// (0x0007d6c5) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe03c,	// (0x0007d6c5) list_medium_line_x3_t4_g4_t3

0xe051,	// (0x0007d6da) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe051,	// (0x0007d6da) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x0007f3f5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x0007f3f5) list_medium_line_x3_t4_g4_t

0x18ee,	// (0x00070f77) list_single_dyc_row_text_pane_t1_ParamLimits

0x18ee,	// (0x00070f77) list_single_dyc_row_text_pane_t1

0x1935,	// (0x00070fbe) list_single_dyc_row_text_pane_t2_ParamLimits

0x1935,	// (0x00070fbe) list_single_dyc_row_text_pane_t2

0xe06e,	// (0x0007d6f7) list_single_dyc_row_text_pane_t3_ParamLimits

0xe06e,	// (0x0007d6f7) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x0007f3fe) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x0007f3fe) list_single_dyc_row_text_pane_t

0xe080,	// (0x0007d709) list_single_dyc_row_pane_g1_ParamLimits

0xe080,	// (0x0007d709) list_single_dyc_row_pane_g1

0xe08c,	// (0x0007d715) list_single_dyc_row_pane_g2_ParamLimits

0xe08c,	// (0x0007d715) list_single_dyc_row_pane_g2

0xe098,	// (0x0007d721) list_single_dyc_row_pane_g3_ParamLimits

0xe098,	// (0x0007d721) list_single_dyc_row_pane_g3

0xe0a4,	// (0x0007d72d) list_single_dyc_row_pane_g4_ParamLimits

0xe0a4,	// (0x0007d72d) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x0007f405) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x0007f405) list_single_dyc_row_pane_g

0xe0b0,	// (0x0007d739) list_single_dyc_row_text_pane_ParamLimits

0xe0b0,	// (0x0007d739) list_single_dyc_row_text_pane

0x1c70,	// (0x000712f9) bg_sp_fs_scroll_pane

0xe0cf,	// (0x0007d758) thumb_sp_fs_scroll_pane

0xcea5,	// (0x0007c52e) list_medium_line_g1_ParamLimits

0xcea5,	// (0x0007c52e) list_medium_line_g1

0xe0d8,	// (0x0007d761) list_medium_line_t1_ParamLimits

0xe0d8,	// (0x0007d761) list_medium_line_t1

0xaabf,	// (0x0007a148) list_medium_line_x2_g1_ParamLimits

0xaabf,	// (0x0007a148) list_medium_line_x2_g1

0xaacb,	// (0x0007a154) list_medium_line_x2_g2_ParamLimits

0xaacb,	// (0x0007a154) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x0007f40e) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x0007f40e) list_medium_line_x2_g

0xe0ed,	// (0x0007d776) list_medium_line_x2_t1_ParamLimits

0xe0ed,	// (0x0007d776) list_medium_line_x2_t1

0xaabf,	// (0x0007a148) list_medium_line_x3_g1_ParamLimits

0xaabf,	// (0x0007a148) list_medium_line_x3_g1

0xaacb,	// (0x0007a154) list_medium_line_x3_g2_ParamLimits

0xaacb,	// (0x0007a154) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x0007f40e) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x0007f40e) list_medium_line_x3_g

0xe0ed,	// (0x0007d776) list_medium_line_x3_t1_ParamLimits

0xe0ed,	// (0x0007d776) list_medium_line_x3_t1

0xe103,	// (0x0007d78c) thumb_sp_fs_scroll_pane_g1

0xe10c,	// (0x0007d795) thumb_sp_fs_scroll_pane_g2

0xe115,	// (0x0007d79e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0007f413) thumb_sp_fs_scroll_pane_g

0xe103,	// (0x0007d78c) bg_sp_fs_scroll_pane_g1

0xe10c,	// (0x0007d795) bg_sp_fs_scroll_pane_g2

0xe115,	// (0x0007d79e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0007f413) bg_sp_fs_scroll_pane_g

0xaabf,	// (0x0007a148) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaabf,	// (0x0007a148) list_medium_line_x2_t3_g4_g1

0xab53,	// (0x0007a1dc) list_medium_line_x2_t3_g4_g2_ParamLimits

0xab53,	// (0x0007a1dc) list_medium_line_x2_t3_g4_g2

0xaacb,	// (0x0007a154) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaacb,	// (0x0007a154) list_medium_line_x2_t3_g4_g3

0xaad7,	// (0x0007a160) list_medium_line_x2_t3_g4_g4_ParamLimits

0xaad7,	// (0x0007a160) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0007e9b2) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0007e9b2) list_medium_line_x2_t3_g4_g

0x198f,	// (0x00071018) list_medium_line_x2_t3_g4_t1_ParamLimits

0x198f,	// (0x00071018) list_medium_line_x2_t3_g4_t1

0x19a5,	// (0x0007102e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x19a5,	// (0x0007102e) list_medium_line_x2_t3_g4_t2

0xaaf8,	// (0x0007a181) list_medium_line_x2_t3_g4_t3_ParamLimits

0xaaf8,	// (0x0007a181) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x0007f41a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x0007f41a) list_medium_line_x2_t3_g4_t

0xcea5,	// (0x0007c52e) list_medium_line_g2_g1_ParamLimits

0xcea5,	// (0x0007c52e) list_medium_line_g2_g1

0xceb1,	// (0x0007c53a) list_medium_line_g2_g2_ParamLimits

0xceb1,	// (0x0007c53a) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x0007f0e2) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x0007f0e2) list_medium_line_g2_g

0xe11e,	// (0x0007d7a7) list_medium_line_g2_t1_ParamLimits

0xe11e,	// (0x0007d7a7) list_medium_line_g2_t1

0xcea5,	// (0x0007c52e) list_medium_line_t3_g2_g1_ParamLimits

0xcea5,	// (0x0007c52e) list_medium_line_t3_g2_g1

0xceb1,	// (0x0007c53a) list_medium_line_t3_g2_g2_ParamLimits

0xceb1,	// (0x0007c53a) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x0007f0e2) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x0007f0e2) list_medium_line_t3_g2_g

0x19be,	// (0x00071047) list_medium_line_t3_g2_t1_ParamLimits

0x19be,	// (0x00071047) list_medium_line_t3_g2_t1

0x19d5,	// (0x0007105e) list_medium_line_t3_g2_t2_ParamLimits

0x19d5,	// (0x0007105e) list_medium_line_t3_g2_t2

0x19ea,	// (0x00071073) list_medium_line_t3_g2_t3_ParamLimits

0x19ea,	// (0x00071073) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x0007f421) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x0007f421) list_medium_line_t3_g2_t

0xdef8,	// (0x0007d581) list_medium_line_right_icon_g1

0xe133,	// (0x0007d7bc) list_medium_line_right_icon_t1

0xcea5,	// (0x0007c52e) list_medium_line_t2_g1_ParamLimits

0xcea5,	// (0x0007c52e) list_medium_line_t2_g1

0x1a03,	// (0x0007108c) list_medium_line_t2_t1_ParamLimits

0x1a03,	// (0x0007108c) list_medium_line_t2_t1

0x1a1d,	// (0x000710a6) list_medium_line_t2_t2_ParamLimits

0x1a1d,	// (0x000710a6) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x0007f428) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x0007f428) list_medium_line_t2_t

0xcea5,	// (0x0007c52e) list_medium_line_t3_g1_ParamLimits

0xcea5,	// (0x0007c52e) list_medium_line_t3_g1

0x1a32,	// (0x000710bb) list_medium_line_t3_t1_ParamLimits

0x1a32,	// (0x000710bb) list_medium_line_t3_t1

0x1a49,	// (0x000710d2) list_medium_line_t3_t2_ParamLimits

0x1a49,	// (0x000710d2) list_medium_line_t3_t2

0x1a5e,	// (0x000710e7) list_medium_line_t3_t3_ParamLimits

0x1a5e,	// (0x000710e7) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x0007f42d) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x0007f42d) list_medium_line_t3_t

0xcea5,	// (0x0007c52e) list_medium_line_g3_g1_ParamLimits

0xcea5,	// (0x0007c52e) list_medium_line_g3_g1

0xe141,	// (0x0007d7ca) list_medium_line_g3_g2_ParamLimits

0xe141,	// (0x0007d7ca) list_medium_line_g3_g2

0xceb1,	// (0x0007c53a) list_medium_line_g3_g3_ParamLimits

0xceb1,	// (0x0007c53a) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x0007f434) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x0007f434) list_medium_line_g3_g

0xe14d,	// (0x0007d7d6) list_medium_line_g3_t1_ParamLimits

0xe14d,	// (0x0007d7d6) list_medium_line_g3_t1

0xcea5,	// (0x0007c52e) list_medium_line_t2_g3_g1_ParamLimits

0xcea5,	// (0x0007c52e) list_medium_line_t2_g3_g1

0xe141,	// (0x0007d7ca) list_medium_line_t2_g3_g2_ParamLimits

0xe141,	// (0x0007d7ca) list_medium_line_t2_g3_g2

0xceb1,	// (0x0007c53a) list_medium_line_t2_g3_g3_ParamLimits

0xceb1,	// (0x0007c53a) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x0007f434) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x0007f434) list_medium_line_t2_g3_g

0x1a70,	// (0x000710f9) list_medium_line_t2_g3_t1_ParamLimits

0x1a70,	// (0x000710f9) list_medium_line_t2_g3_t1

0x1a87,	// (0x00071110) list_medium_line_t2_g3_t2_ParamLimits

0x1a87,	// (0x00071110) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x0007f43b) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x0007f43b) list_medium_line_t2_g3_t

0xcea5,	// (0x0007c52e) list_medium_line_t3_g3_g1_ParamLimits

0xcea5,	// (0x0007c52e) list_medium_line_t3_g3_g1

0xe141,	// (0x0007d7ca) list_medium_line_t3_g3_g2_ParamLimits

0xe141,	// (0x0007d7ca) list_medium_line_t3_g3_g2

0xceb1,	// (0x0007c53a) list_medium_line_t3_g3_g3_ParamLimits

0xceb1,	// (0x0007c53a) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x0007f434) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x0007f434) list_medium_line_t3_g3_g

0x1a9c,	// (0x00071125) list_medium_line_t3_g3_t1_ParamLimits

0x1a9c,	// (0x00071125) list_medium_line_t3_g3_t1

0x1ab5,	// (0x0007113e) list_medium_line_t3_g3_t2_ParamLimits

0x1ab5,	// (0x0007113e) list_medium_line_t3_g3_t2

0x1acb,	// (0x00071154) list_medium_line_t3_g3_t3_ParamLimits

0x1acb,	// (0x00071154) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x0007f440) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x0007f440) list_medium_line_t3_g3_t

0xe028,	// (0x0007d6b1) list_medium_line_right_iconx2_g1

0xdef8,	// (0x0007d581) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0007f447) list_medium_line_right_iconx2_g

0xe162,	// (0x0007d7eb) list_medium_line_right_iconx2_t1

0xe028,	// (0x0007d6b1) list_medium_line_t2_right_iconx2_g1

0xdef8,	// (0x0007d581) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0007f447) list_medium_line_t2_right_iconx2_g

0x1ae5,	// (0x0007116e) list_medium_line_t2_right_iconx2_t1

0x1af5,	// (0x0007117e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x0007f44c) list_medium_line_t2_right_iconx2_t

0xe170,	// (0x0007d7f9) list_medium_line_x4_t4_t1

0x1b03,	// (0x0007118c) list_medium_line_x4_t4_t2

0x1b13,	// (0x0007119c) list_medium_line_x4_t4_t3

0x1b23,	// (0x000711ac) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x0007f451) list_medium_line_x4_t4_t

0x9e53,	// (0x000794dc) tport_appsw_pane_ParamLimits

0x9e53,	// (0x000794dc) tport_appsw_pane

0x9e66,	// (0x000794ef) tport_contact_pane_ParamLimits

0x9e66,	// (0x000794ef) tport_contact_pane

0x9e79,	// (0x00079502) tport_listscroll_pane_ParamLimits

0x9e79,	// (0x00079502) tport_listscroll_pane

0x9e8f,	// (0x00079518) cell_tport_appsw_pane_ParamLimits

0x9e8f,	// (0x00079518) cell_tport_appsw_pane

0xcc15,	// (0x0007c29e) tport_appsw_pane_g1_ParamLimits

0xcc15,	// (0x0007c29e) tport_appsw_pane_g1

0xe17e,	// (0x0007d807) tport_contact_pane_g1

0xe187,	// (0x0007d810) tport_contact_pane_t1

0xe195,	// (0x0007d81e) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x0007f45a) tport_contact_pane_t

0xe1a3,	// (0x0007d82c) list_tport_pane

0xe1ac,	// (0x0007d835) scroll_pane_cp_030

0x9eac,	// (0x00079535) cell_tport_appsw_pane_g1

0xe1b5,	// (0x0007d83e) cell_tport_appsw_pane_t1

0x1c70,	// (0x000712f9) grid_highlight_pane_cp019

0x9ec4,	// (0x0007954d) list_tport_double_graphic_pane_ParamLimits

0x9ec4,	// (0x0007954d) list_tport_double_graphic_pane

0xeab8,	// (0x0007e141) list_highlight_pane_cp023_ParamLimits

0xeab8,	// (0x0007e141) list_highlight_pane_cp023

0x9ed4,	// (0x0007955d) list_tport_double_graphic_pane_g1_ParamLimits

0x9ed4,	// (0x0007955d) list_tport_double_graphic_pane_g1

0x9ee1,	// (0x0007956a) list_tport_double_graphic_pane_t1_ParamLimits

0x9ee1,	// (0x0007956a) list_tport_double_graphic_pane_t1

0x9ef6,	// (0x0007957f) list_tport_double_graphic_pane_t2_ParamLimits

0x9ef6,	// (0x0007957f) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x0007f466) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x0007f466) list_tport_double_graphic_pane_t

0x1c70,	// (0x000712f9) main_cale_note_pane

0x8306,	// (0x0007798f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8306,	// (0x0007798f) cell_vitu2_function_top_wide_pane_cp01

0x99c5,	// (0x0007904e) wait_bar_pane_cp05_ParamLimits

0x1c70,	// (0x000712f9) listscroll_cmail_pane

0xe1cb,	// (0x0007d854) list_cmail_pane

0x9f12,	// (0x0007959b) list_cmail_body_pane

0x9f2a,	// (0x000795b3) list_single_cmail_header_caption_pane

0x9f4a,	// (0x000795d3) list_single_cmail_header_detail_pane_ParamLimits

0x9f4a,	// (0x000795d3) list_single_cmail_header_detail_pane

0x9f7c,	// (0x00079605) list_single_cmail_header_caption_pane_t1

0x1b33,	// (0x000711bc) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1b33,	// (0x000711bc) list_single_cmail_header_detail_pane_g1

0xf11b,	// (0x0007e7a4) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf11b,	// (0x0007e7a4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x0007f46b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x0007f46b) list_single_cmail_header_detail_pane_g

0xe1f8,	// (0x0007d881) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe1f8,	// (0x0007d881) list_single_cmail_header_detail_pane_t1

0xe236,	// (0x0007d8bf) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe236,	// (0x0007d8bf) list_single_cmail_header_editor_pane_bg

0xda76,	// (0x0007d0ff) list_cmail_body_pane_g1

0xe248,	// (0x0007d8d1) list_cmail_body_pane_t1

0xcc52,	// (0x0007c2db) list_single_cmail_header_editor_pane_bg_g1

0x39ca,	// (0x00073053) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcc62,	// (0x0007c2eb) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcc5a,	// (0x0007c2e3) list_single_cmail_header_editor_pane_bg_g1_copy3

0xce9d,	// (0x0007c526) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcc82,	// (0x0007c30b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcc72,	// (0x0007c2fb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcc7a,	// (0x0007c303) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x39aa,	// (0x00073033) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9f8c,	// (0x00079615) calenote_gesture_pane_ParamLimits

0x9f8c,	// (0x00079615) calenote_gesture_pane

0x9fac,	// (0x00079635) calenote_window_pane_ParamLimits

0x9fac,	// (0x00079635) calenote_window_pane

0xe256,	// (0x0007d8df) popup_note_window_cp01

0x9fc8,	// (0x00079651) calenote_swipe_1_pane_ParamLimits

0x9fc8,	// (0x00079651) calenote_swipe_1_pane

0x9da5,	// (0x0007942e) calenote_swipe_2_pane_ParamLimits

0x9da5,	// (0x0007942e) calenote_swipe_2_pane

0xddf7,	// (0x0007d480) calenote_swipe_1_pane_g1_ParamLimits

0xddf7,	// (0x0007d480) calenote_swipe_1_pane_g1

0xde04,	// (0x0007d48d) calenote_swipe_1_pane_g2_ParamLimits

0xde04,	// (0x0007d48d) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0007f39a) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0007f39a) calenote_swipe_1_pane_g

0xe268,	// (0x0007d8f1) calenote_swipe_1_pane_t1_ParamLimits

0xe268,	// (0x0007d8f1) calenote_swipe_1_pane_t1

0xddf7,	// (0x0007d480) calenote_swipe_2_pane_g1_ParamLimits

0xddf7,	// (0x0007d480) calenote_swipe_2_pane_g1

0xe287,	// (0x0007d910) calenote_swipe_2_pane_g2_ParamLimits

0xe287,	// (0x0007d910) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x0007f477) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x0007f477) calenote_swipe_2_pane_g

0xe293,	// (0x0007d91c) calenote_swipe_2_pane_t1_ParamLimits

0xe293,	// (0x0007d91c) calenote_swipe_2_pane_t1

0x1c70,	// (0x000712f9) main_mup_navstr_pane

0x6d7c,	// (0x00076405) main_mup3_pane_t7_ParamLimits

0x6d7c,	// (0x00076405) main_mup3_pane_t7

0xee0f,	// (0x0007e498) main_mp4_pane_g6_ParamLimits

0xee0f,	// (0x0007e498) main_mp4_pane_g6

0xefa5,	// (0x0007e62e) main_image3_pane_t4_ParamLimits

0xefa5,	// (0x0007e62e) main_image3_pane_t4

0x9fdd,	// (0x00079666) popup_navstr_preview_pane_ParamLimits

0x9fdd,	// (0x00079666) popup_navstr_preview_pane

0x9fed,	// (0x00079676) scroll_navstr_pane_ParamLimits

0x9fed,	// (0x00079676) scroll_navstr_pane

0x1c70,	// (0x000712f9) bg_popup_preview_window_pane_cp04

0xe2ba,	// (0x0007d943) popup_navstr_preview_pane_t1

0xa001,	// (0x0007968a) scroll_navstr_pane_g1_ParamLimits

0xa001,	// (0x0007968a) scroll_navstr_pane_g1

0xa015,	// (0x0007969e) scroll_navstr_pane_t1_ParamLimits

0xa015,	// (0x0007969e) scroll_navstr_pane_t1

0xe25f,	// (0x0007d8e8) bg_button_pane_cp014

0xe25f,	// (0x0007d8e8) bg_button_pane_cp030

0xdd98,	// (0x0007d421) list_double_fisheye_pane_g4_ParamLimits

0xdd98,	// (0x0007d421) list_double_fisheye_pane_g4

0xdda4,	// (0x0007d42d) list_double_fisheye_pane_g5_ParamLimits

0xdda4,	// (0x0007d42d) list_double_fisheye_pane_g5

0xe1d3,	// (0x0007d85c) sp_fs_scroll_pane_cp03

0xdf3a,	// (0x0007d5c3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdf46,	// (0x0007d5cf) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x0007f3b7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdf52,	// (0x0007d5db) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9f08,	// (0x00079591) sp_fs_scroll_pane_cp02

0x2c1b,	// (0x000722a4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2c1b,	// (0x000722a4) popup_sp_fs_calendar_preview_list_single_pane

0x1c70,	// (0x000712f9) main_cam6_pano_pane

0xeab8,	// (0x0007e141) main_mup3_pane_ParamLimits

0x1c70,	// (0x000712f9) main_phacti_pane

0x9896,	// (0x00078f1f) bg_button_pane_cp11

0x98b0,	// (0x00078f39) main_mobtv_info_pane_g2_ParamLimits

0x98b0,	// (0x00078f39) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x0007f317) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x0007f317) main_mobtv_info_pane_g

0x9a8b,	// (0x00079114) sc_clock_pane_t5_ParamLimits

0x9a8b,	// (0x00079114) sc_clock_pane_t5

0x9b15,	// (0x0007919e) main_radioblah_pane_g1_ParamLimits

0xdd06,	// (0x0007d38f) main_radioblah_pane_t3_ParamLimits

0xdd06,	// (0x0007d38f) main_radioblah_pane_t3

0xdd1e,	// (0x0007d3a7) main_radioblah_pane_t4_ParamLimits

0xdd1e,	// (0x0007d3a7) main_radioblah_pane_t4

0x9b3d,	// (0x000791c6) main_radioblah_text_pane_ParamLimits

0x9b3d,	// (0x000791c6) main_radioblah_text_pane

0x9b4f,	// (0x000791d8) main_radioblah_info_pane_g1_ParamLimits

0x9be8,	// (0x00079271) main_radioblah_info_pane_t4_ParamLimits

0x9be8,	// (0x00079271) main_radioblah_info_pane_t4

0xeab8,	// (0x0007e141) main_sp_fs_calendar_pane

0xa02c,	// (0x000796b5) main_phacti_pane_g1

0xa034,	// (0x000796bd) phacti_note_pane_ParamLimits

0xa034,	// (0x000796bd) phacti_note_pane

0xe2d1,	// (0x0007d95a) phacti_term_pane_ParamLimits

0xe2d1,	// (0x0007d95a) phacti_term_pane

0xe2e6,	// (0x0007d96f) phacti_note_pane_t1_ParamLimits

0xe2e6,	// (0x0007d96f) phacti_note_pane_t1

0xe2fd,	// (0x0007d986) phacti_term_pane_g1

0xe305,	// (0x0007d98e) phacti_term_pane_t1_ParamLimits

0xe305,	// (0x0007d98e) phacti_term_pane_t1

0xe32f,	// (0x0007d9b8) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe337,	// (0x0007d9c0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x0007f481) popup_sp_fs_calendar_preview_list_single_pane_g

0xe33f,	// (0x0007d9c8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe33f,	// (0x0007d9c8) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe355,	// (0x0007d9de) aid_popup_sp_fs_bg_corner_pane

0x643b,	// (0x00075ac4) popup_sp_fs_calendar_preview_bg_pane_g1

0x1c70,	// (0x000712f9) popup_sp_fs_calendar_preview_bg_pane

0xe35d,	// (0x0007d9e6) popup_sp_fs_calendar_preview_list_pane

0xeab8,	// (0x0007e141) bg_main_sp_fs_cale_pane_ParamLimits

0xeab8,	// (0x0007e141) bg_main_sp_fs_cale_pane

0xe36e,	// (0x0007d9f7) listscroll_cale_mrui_pane_ParamLimits

0xe36e,	// (0x0007d9f7) listscroll_cale_mrui_pane

0xe382,	// (0x0007da0b) listscroll_sp_fs_schedule_track_pane

0xe38b,	// (0x0007da14) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe38b,	// (0x0007da14) main_sp_fs_ctrlbar_pane_cp01

0xe39c,	// (0x0007da25) main_sp_fs_ribbon_pane

0xe3a4,	// (0x0007da2d) popup_sp_fs_cale_preview_window

0xa08b,	// (0x00079714) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa08b,	// (0x00079714) list_single_sp_fs_schedule_track_pane

0xeab8,	// (0x0007e141) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xeab8,	// (0x0007e141) bg_sp_fs_highlight_list_pane_cp03

0xa09f,	// (0x00079728) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa09f,	// (0x00079728) list_single_sp_fs_schedule_track_pane_g1

0xa0ab,	// (0x00079734) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa0ab,	// (0x00079734) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x0007f486) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x0007f486) list_single_sp_fs_schedule_track_pane_g

0xa0b7,	// (0x00079740) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa0b7,	// (0x00079740) list_single_sp_fs_schedule_track_pane_t1

0xa0d9,	// (0x00079762) sp_fs_schedule_track_pane_ParamLimits

0xa0d9,	// (0x00079762) sp_fs_schedule_track_pane

0xe3b6,	// (0x0007da3f) sp_fs_schedule_track_pane_g1

0xe3be,	// (0x0007da47) sp_fs_schedule_track_pane_g2

0xe3c6,	// (0x0007da4f) sp_fs_schedule_track_pane_g3

0xe3ce,	// (0x0007da57) sp_fs_schedule_track_pane_g4

0xe3d6,	// (0x0007da5f) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x0007f48b) sp_fs_schedule_track_pane_g

0xcc52,	// (0x0007c2db) bg_sp_fs_schedule_viewer_highlight_g1

0x39ca,	// (0x00073053) bg_sp_fs_schedule_viewer_highlight_g2

0xcc5a,	// (0x0007c2e3) bg_sp_fs_schedule_viewer_highlight_g3

0xcc62,	// (0x0007c2eb) bg_sp_fs_schedule_viewer_highlight_g4

0xce9d,	// (0x0007c526) bg_sp_fs_schedule_viewer_highlight_g5

0xcc72,	// (0x0007c2fb) bg_sp_fs_schedule_viewer_highlight_g6

0xcc7a,	// (0x0007c303) bg_sp_fs_schedule_viewer_highlight_g7

0xcc82,	// (0x0007c30b) bg_sp_fs_schedule_viewer_highlight_g8

0x39aa,	// (0x00073033) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x0007f496) bg_sp_fs_schedule_viewer_highlight_g

0x1c70,	// (0x000712f9) bg_main_sp_fs_ribbon_pane

0xa0ee,	// (0x00079777) main_sp_fs_ribbon_pane_g1

0xe3de,	// (0x0007da67) main_sp_fs_ribbon_pane_t1

0xa0f7,	// (0x00079780) main_sp_fs_ribbon_pane_t2

0xe3ed,	// (0x0007da76) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x0007f4a9) main_sp_fs_ribbon_pane_t

0xe3fc,	// (0x0007da85) main_sp_fs_ribbon_scheduler_pane

0xe404,	// (0x0007da8d) bg_main_sp_fs_ribbon_pane_g1

0xe40d,	// (0x0007da96) bg_main_sp_fs_ribbon_pane_g2

0xe416,	// (0x0007da9f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x0007f4b0) bg_main_sp_fs_ribbon_pane_g

0xe41e,	// (0x0007daa7) main_sp_fs_ribbon_scheduler_pane_g1

0xe427,	// (0x0007dab0) main_sp_fs_ribbon_scheduler_pane_g2

0xe430,	// (0x0007dab9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x0007f4b7) main_sp_fs_ribbon_scheduler_pane_g

0xe439,	// (0x0007dac2) list_cale_mrui_pane

0xa106,	// (0x0007978f) sp_fs_scroll_pane_cp07_ParamLimits

0xa106,	// (0x0007978f) sp_fs_scroll_pane_cp07

0xa11c,	// (0x000797a5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa11c,	// (0x000797a5) bg_sp_fs_schedule_viewer_highlight

0xe442,	// (0x0007dacb) list_single_sp_fs_schedule_track_pane_cp01

0xe44a,	// (0x0007dad3) list_sp_fs_schedule_track_pane

0xe452,	// (0x0007dadb) sp_fs_scroll_pane_cp06_ParamLimits

0xe452,	// (0x0007dadb) sp_fs_scroll_pane_cp06

0x643b,	// (0x00075ac4) bgmain_sp_fs_calendar_pane_g1

0x1b71,	// (0x000711fa) list_single_cale_mrui_pane_ParamLimits

0x1b71,	// (0x000711fa) list_single_cale_mrui_pane

0xe464,	// (0x0007daed) list_single_cale_mrui_row_pane_ParamLimits

0xe464,	// (0x0007daed) list_single_cale_mrui_row_pane

0xe471,	// (0x0007dafa) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe471,	// (0x0007dafa) list_single_cale_mrui_row_pane_g1

0xe4a9,	// (0x0007db32) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe4a9,	// (0x0007db32) list_single_cale_mrui_row_pane_t1

0x1b98,	// (0x00071221) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1b98,	// (0x00071221) list_single_cale_mrui_row_pane_t2

0xe4bb,	// (0x0007db44) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe4bb,	// (0x0007db44) list_single_cale_mrui_row_pane_t3

0xe4ea,	// (0x0007db73) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe4ea,	// (0x0007db73) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x0007f4c3) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x0007f4c3) list_single_cale_mrui_row_pane_t

0x1bfe,	// (0x00071287) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1bfe,	// (0x00071287) list_single_cmail_header_editor_pane_bg_cp01

0x1c22,	// (0x000712ab) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1c22,	// (0x000712ab) list_single_cmail_header_editor_pane_bg_cp02

0xa12e,	// (0x000797b7) main_radioblah_text_pane_t1_ParamLimits

0xa12e,	// (0x000797b7) main_radioblah_text_pane_t1

0xe519,	// (0x0007dba2) cam6_indi_pane_cp01

0xe521,	// (0x0007dbaa) cam6_mode_pane_cp01

0xe529,	// (0x0007dbb2) cam6_pano_pane

0xe532,	// (0x0007dbbb) cam6_zoom_pane_cp01

0xe53c,	// (0x0007dbc5) cam6_pano_image_pane

0xe545,	// (0x0007dbce) cam6_pano_pane_g1

0xda76,	// (0x0007d0ff) cam6_pano_pane_g2

0xe54e,	// (0x0007dbd7) cam6_pano_pane_g3

0xe557,	// (0x0007dbe0) cam6_pano_pane_g4

0xc777,	// (0x0007be00) cam6_pano_pane_g5

0xe560,	// (0x0007dbe9) cam6_pano_pane_g6

0xe568,	// (0x0007dbf1) cam6_pano_pane_g7

0xe570,	// (0x0007dbf9) cam6_pano_pane_g8

0xe579,	// (0x0007dc02) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x0007f4cc) cam6_pano_pane_g

0x1c70,	// (0x000712f9) main_browser_tag_pane

0xe2b2,	// (0x0007d93b) grid_navstr_albumart_pane

0xe584,	// (0x0007dc0d) cell_navstr_albumart_pane_ParamLimits

0xe584,	// (0x0007dc0d) cell_navstr_albumart_pane

0xe5a0,	// (0x0007dc29) cell_navstr_albumart_pane_g1

0xc4fe,	// (0x0007bb87) cell_navstr_albumart_pane_g2

0xc50e,	// (0x0007bb97) cell_navstr_albumart_pane_g3

0xc506,	// (0x0007bb8f) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x0007f4df) cell_navstr_albumart_pane_g

0xa149,	// (0x000797d2) bt_list_pane_ParamLimits

0xa149,	// (0x000797d2) bt_list_pane

0xa15f,	// (0x000797e8) bt_list_pane_t1

0xa16e,	// (0x000797f7) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x0007f4e8) bt_list_pane_t

0x1c70,	// (0x000712f9) main_cale_prevew_pane

0xa17d,	// (0x00079806) popup_cale_preview_window_ParamLimits

0xa17d,	// (0x00079806) popup_cale_preview_window

0xeab8,	// (0x0007e141) bg_popup_preview_window_pane_cp05_ParamLimits

0xeab8,	// (0x0007e141) bg_popup_preview_window_pane_cp05

0xe5a8,	// (0x0007dc31) list_cale_preview_pane_ParamLimits

0xe5a8,	// (0x0007dc31) list_cale_preview_pane

0xa198,	// (0x00079821) list_double_cale_preview_pane_ParamLimits

0xa198,	// (0x00079821) list_double_cale_preview_pane

0xa1ac,	// (0x00079835) list_single_cale_preview_pane_ParamLimits

0xa1ac,	// (0x00079835) list_single_cale_preview_pane

0xa1c4,	// (0x0007984d) list_single_cale_preview_pane_g1

0xa1cc,	// (0x00079855) list_single_cale_preview_pane_t1_ParamLimits

0xa1cc,	// (0x00079855) list_single_cale_preview_pane_t1

0xa1e1,	// (0x0007986a) list_double_cale_preview_pane_g1

0xa1e9,	// (0x00079872) list_double_cale_preview_pane_t1_ParamLimits

0xa1e9,	// (0x00079872) list_double_cale_preview_pane_t1

0xa1fe,	// (0x00079887) list_double_cale_preview_pane_t2_ParamLimits

0xa1fe,	// (0x00079887) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x0007f4ed) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x0007f4ed) list_double_cale_preview_pane_t

0x1c70,	// (0x000712f9) main_ezdial_pane

0xeab8,	// (0x0007e141) main_sp_fs_email_pane_ParamLimits

0x9dbf,	// (0x00079448) cmail_ddmenu_btn01_pane_ParamLimits

0x9dbf,	// (0x00079448) cmail_ddmenu_btn01_pane

0x9dd2,	// (0x0007945b) cmail_ddmenu_btn02_pane_ParamLimits

0x9dd2,	// (0x0007945b) cmail_ddmenu_btn02_pane

0x9df5,	// (0x0007947e) cmail_ddmenu_btn03_pane_ParamLimits

0x9df5,	// (0x0007947e) cmail_ddmenu_btn03_pane

0x17ab,	// (0x00070e34) main_sp_fs_ctrlbar_pane_ParamLimits

0x17cf,	// (0x00070e58) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9f12,	// (0x0007959b) list_cmail_body_pane_ParamLimits

0xe1e2,	// (0x0007d86b) bg_button_pane_cp12

0xe1eb,	// (0x0007d874) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe1eb,	// (0x0007d874) list_single_cmail_header_detail_pane_g3

0x1b4b,	// (0x000711d4) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1b4b,	// (0x000711d4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x0007f472) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x0007f472) list_single_cmail_header_detail_pane_t

0xe31a,	// (0x0007d9a3) phacti_term_pane_t2_ParamLimits

0xe31a,	// (0x0007d9a3) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x0007f47c) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x0007f47c) phacti_term_pane_t

0xe5b4,	// (0x0007dc3d) aid_size_list_single_double

0xa216,	// (0x0007989f) popup_ezdial_listscroll_window

0xa232,	// (0x000798bb) popup_number_entry_window_cp01

0xb278,	// (0x0007a901) bg_popup_call_pane_cp09

0xe5c0,	// (0x0007dc49) ezdial_list_pane

0xe5c8,	// (0x0007dc51) scroll_pane_cp23

0xeb2b,	// (0x0007e1b4) bg_button_pane_cp028_ParamLimits

0xeb2b,	// (0x0007e1b4) bg_button_pane_cp028

0xa240,	// (0x000798c9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa240,	// (0x000798c9) cmail_ddmenu_btn01_pane_g1

0xa24c,	// (0x000798d5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa24c,	// (0x000798d5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x0007f4f2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x0007f4f2) cmail_ddmenu_btn01_pane_g

0xe5d0,	// (0x0007dc59) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe5d0,	// (0x0007dc59) cmail_ddmenu_btn01_pane_t1

0xeb2b,	// (0x0007e1b4) bg_button_pane_cp029_ParamLimits

0xeb2b,	// (0x0007e1b4) bg_button_pane_cp029

0xa258,	// (0x000798e1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa258,	// (0x000798e1) cmail_ddmenu_btn02_pane_g1

0xa270,	// (0x000798f9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa270,	// (0x000798f9) cmail_ddmenu_btn02_pane_t1

0xeab8,	// (0x0007e141) bg_button_pane_cp031_ParamLimits

0xeab8,	// (0x0007e141) bg_button_pane_cp031

0xa258,	// (0x000798e1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa258,	// (0x000798e1) cmail_ddmenu_btn03_pane_g1

0xa270,	// (0x000798f9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa270,	// (0x000798f9) cmail_ddmenu_btn03_pane_t1

0x7b3c,	// (0x000771c5) cell_dialer2_keypad_pane_t1_ParamLimits

0x7b56,	// (0x000771df) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7b56,	// (0x000771df) cell_dialer2_keypad_pane_t1_copy1

0x9739,	// (0x00078dc2) ncimui_group_button_pane

0xeab8,	// (0x0007e141) main_sp_fs_calendar_pane_ParamLimits

0x9f2a,	// (0x000795b3) list_single_cmail_header_caption_pane_ParamLimits

0xe365,	// (0x0007d9ee) aid_recal_txt_sm_pane

0x1c70,	// (0x000712f9) mian_recal_day_pane

0xe3a4,	// (0x0007da2d) popup_sp_fs_cale_preview_window_ParamLimits

0x1c70,	// (0x000712f9) list_recal_day_pane

0xe5fe,	// (0x0007dc87) list_single_recal_day_pane_ParamLimits

0xe5fe,	// (0x0007dc87) list_single_recal_day_pane

0xe610,	// (0x0007dc99) list_single_recal_day_pane_g1_ParamLimits

0xe610,	// (0x0007dc99) list_single_recal_day_pane_g1

0xe61c,	// (0x0007dca5) list_single_recal_day_pane_g2_ParamLimits

0xe61c,	// (0x0007dca5) list_single_recal_day_pane_g2

0xe628,	// (0x0007dcb1) list_single_recal_day_pane_g3_ParamLimits

0xe628,	// (0x0007dcb1) list_single_recal_day_pane_g3

0xa294,	// (0x0007991d) list_single_recal_day_pane_g4_ParamLimits

0xa294,	// (0x0007991d) list_single_recal_day_pane_g4

0xe634,	// (0x0007dcbd) list_single_recal_day_pane_g5_ParamLimits

0xe634,	// (0x0007dcbd) list_single_recal_day_pane_g5

0xe640,	// (0x0007dcc9) list_single_recal_day_pane_g6_ParamLimits

0xe640,	// (0x0007dcc9) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x0007f501) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x0007f501) list_single_recal_day_pane_g

0xe64c,	// (0x0007dcd5) list_single_recal_day_pane_t1

0xe65a,	// (0x0007dce3) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x0007f50e) list_single_recal_day_pane_t

0xa2a2,	// (0x0007992b) ncimui_query_button_pane_ParamLimits

0xa2a2,	// (0x0007992b) ncimui_query_button_pane

0xa2b2,	// (0x0007993b) ncimui_query_button_pane_t1_ParamLimits

0xa2b2,	// (0x0007993b) ncimui_query_button_pane_t1

0xe668,	// (0x0007dcf1) ncimui_query_button_pane_t2_ParamLimits

0xe668,	// (0x0007dcf1) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x0007f513) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x0007f513) ncimui_query_button_pane_t

0xa2c5,	// (0x0007994e) query_button_pane_ParamLimits

0xa2c5,	// (0x0007994e) query_button_pane

0x1c70,	// (0x000712f9) bg_button_pane_cp0028

0xe67b,	// (0x0007dd04) query_button_pane_t1

0x568f,	// (0x00074d18) main_tport_pane_ParamLimits

0x9e19,	// (0x000794a2) bg_popup_window_pane_cp01_ParamLimits

0x9e19,	// (0x000794a2) bg_popup_window_pane_cp01

0x9e2f,	// (0x000794b8) heading_pane_cp08_ParamLimits

0x9e2f,	// (0x000794b8) heading_pane_cp08

0x9e40,	// (0x000794c9) heading_pane_cp07_ParamLimits

0x9e40,	// (0x000794c9) heading_pane_cp07

0x9eb4,	// (0x0007953d) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x0007f45f) cell_tport_appsw_pane_g

0x1466,	// (0x00070aef) input_candi_list_open_g1

0xacf1,	// (0x0007a37a) list_cale_time_pane_g6_ParamLimits

0xacf1,	// (0x0007a37a) list_cale_time_pane_g6

0x67b2,	// (0x00075e3b) aid_size_touch_calib_1_ParamLimits

0x67b2,	// (0x00075e3b) aid_size_touch_calib_1

0x67be,	// (0x00075e47) aid_size_touch_calib_2_ParamLimits

0x67be,	// (0x00075e47) aid_size_touch_calib_2

0x67d4,	// (0x00075e5d) aid_size_touch_calib_3_ParamLimits

0x67d4,	// (0x00075e5d) aid_size_touch_calib_3

0x67f2,	// (0x00075e7b) aid_size_touch_calib_4_ParamLimits

0x67f2,	// (0x00075e7b) aid_size_touch_calib_4

0x6808,	// (0x00075e91) main_touch_calib_button_group_pane_ParamLimits

0x6808,	// (0x00075e91) main_touch_calib_button_group_pane

0x681f,	// (0x00075ea8) main_touch_calib_pane_g1_ParamLimits

0x682b,	// (0x00075eb4) main_touch_calib_pane_g2_ParamLimits

0x6837,	// (0x00075ec0) main_touch_calib_pane_g3_ParamLimits

0x6843,	// (0x00075ecc) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x0007ee41) main_touch_calib_pane_g_ParamLimits

0x684f,	// (0x00075ed8) main_touch_calib_pane_t1_ParamLimits

0x6869,	// (0x00075ef2) main_touch_calib_pane_t2_ParamLimits

0x6883,	// (0x00075f0c) main_touch_calib_pane_t3_ParamLimits

0x6897,	// (0x00075f20) main_touch_calib_pane_t4_ParamLimits

0x68ab,	// (0x00075f34) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0007ee4a) main_touch_calib_pane_t_ParamLimits

0x700b,	// (0x00076694) list_single_fp_cale_pane_g3_ParamLimits

0x700b,	// (0x00076694) list_single_fp_cale_pane_g3

0xeab8,	// (0x0007e141) bg_button_pane_cp012_ParamLimits

0xeab8,	// (0x0007e141) bg_vkb2_func_pane_cp03_ParamLimits

0x8b03,	// (0x0007818c) cell_vitu2_function_top_pane_g1_ParamLimits

0xeab8,	// (0x0007e141) bg_vkb2_func_pane_cp04_ParamLimits

0x96ed,	// (0x00078d76) main_ncimui_button_group_pane_ParamLimits

0x96ed,	// (0x00078d76) main_ncimui_button_group_pane

0x9727,	// (0x00078db0) main_ncimui_pane_t3_ParamLimits

0x9727,	// (0x00078db0) main_ncimui_pane_t3

0xe2c8,	// (0x0007d951) phacti_button_group_pane

0xe5b4,	// (0x0007dc3d) aid_size_list_single_double_ParamLimits

0xa216,	// (0x0007989f) popup_ezdial_listscroll_window_ParamLimits

0xa232,	// (0x000798bb) popup_number_entry_window_cp01_ParamLimits

0xa2d8,	// (0x00079961) phacti_button_pane_ParamLimits

0xa2d8,	// (0x00079961) phacti_button_pane

0x1c70,	// (0x000712f9) bg_button_pane_cp14

0xe689,	// (0x0007dd12) phacti_button_pane_t1

0xa2e9,	// (0x00079972) main_touch_calib_button_pane_ParamLimits

0xa2e9,	// (0x00079972) main_touch_calib_button_pane

0x2964,	// (0x00071fed) bg_button_pane_cp18_ParamLimits

0x2964,	// (0x00071fed) bg_button_pane_cp18

0xe697,	// (0x0007dd20) main_touch_calib_button_pane_t1_ParamLimits

0xe697,	// (0x0007dd20) main_touch_calib_button_pane_t1

0xe6ad,	// (0x0007dd36) main_touch_calib_button_pane_t2_ParamLimits

0xe6ad,	// (0x0007dd36) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x0007f518) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x0007f518) main_touch_calib_button_pane_t

0x1c70,	// (0x000712f9) cell_ncimui_button_pane

0x1c70,	// (0x000712f9) bg_button_pane_cp032

0xe6cb,	// (0x0007dd54) cell_ncimui_button_pane_t1

0xef83,	// (0x0007e60c) image3_infobar_pane_ParamLimits

0xef83,	// (0x0007e60c) image3_infobar_pane

0x9ab7,	// (0x00079140) fs_bigclock_status_pane_ParamLimits

0x9ab7,	// (0x00079140) fs_bigclock_status_pane

0x9ac4,	// (0x0007914d) main_fs_bigclock_clock_pane_ParamLimits

0x9ac4,	// (0x0007914d) main_fs_bigclock_clock_pane

0x9ad7,	// (0x00079160) main_fs_bigclock_indi_pane_ParamLimits

0x9ad7,	// (0x00079160) main_fs_bigclock_indi_pane

0x9af2,	// (0x0007917b) main_fs_bigclock_swipe_pane_ParamLimits

0x9af2,	// (0x0007917b) main_fs_bigclock_swipe_pane

0x1c70,	// (0x000712f9) main_fs_clock_dumped_data

0xdb83,	// (0x0007d20c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdb83,	// (0x0007d20c) list_single_fs_bigclock_indicator_pane_g1

0xdba3,	// (0x0007d22c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdba3,	// (0x0007d22c) list_single_fs_bigclock_indicator_pane_g2

0xdbbd,	// (0x0007d246) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdbbd,	// (0x0007d246) list_single_fs_bigclock_indicator_pane_g3

0xdbd9,	// (0x0007d262) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdbd9,	// (0x0007d262) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x0007f34b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x0007f34b) list_single_fs_bigclock_indicator_pane_g

0xdbff,	// (0x0007d288) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdbff,	// (0x0007d288) list_single_fs_bigclock_indicator_pane_t1

0xdc27,	// (0x0007d2b0) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdc27,	// (0x0007d2b0) list_single_fs_bigclock_indicator_pane_t2

0xdc4f,	// (0x0007d2d8) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdc4f,	// (0x0007d2d8) list_single_fs_bigclock_indicator_pane_t3

0xdc79,	// (0x0007d302) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdc79,	// (0x0007d302) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x0007f356) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x0007f356) list_single_fs_bigclock_indicator_pane_t

0xe6d9,	// (0x0007dd62) image3_infobar_fav_pane_ParamLimits

0xe6d9,	// (0x0007dd62) image3_infobar_fav_pane

0xe6e9,	// (0x0007dd72) image3_infobar_loc_pane_ParamLimits

0xe6e9,	// (0x0007dd72) image3_infobar_loc_pane

0xe6ff,	// (0x0007dd88) image3_infobar_time_pane_ParamLimits

0xe6ff,	// (0x0007dd88) image3_infobar_time_pane

0x643b,	// (0x00075ac4) image3_infobar_time_pane_g1

0xe70f,	// (0x0007dd98) image3_infobar_time_pane_t1

0x643b,	// (0x00075ac4) image3_infobar_loc_pane_g1

0xe71d,	// (0x0007dda6) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x0007f51d) image3_infobar_loc_pane_g

0xe725,	// (0x0007ddae) image3_infobar_loc_pane_t1

0x643b,	// (0x00075ac4) image3_infobar_fav_pane_g1

0xe733,	// (0x0007ddbc) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x0007f522) image3_infobar_fav_pane_g

0xe73b,	// (0x0007ddc4) fs_bigclock_status_battery_pane

0xe744,	// (0x0007ddcd) fs_bigclock_status_signal_pane

0xe74d,	// (0x0007ddd6) fs_bigclock_status_title_pane

0xe756,	// (0x0007dddf) fs_bigclock_status_signal_pane_g1

0xe75f,	// (0x0007dde8) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x0007f527) fs_bigclock_status_signal_pane_g

0xe767,	// (0x0007ddf0) fs_bigclock_status_battery_pane_g1

0xe770,	// (0x0007ddf9) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x0007f52c) fs_bigclock_status_battery_pane_g

0xe778,	// (0x0007de01) fs_bigclock_status_title_pane_t1

0x643b,	// (0x00075ac4) main_fs_bigclock_clock_pane_g1

0xe786,	// (0x0007de0f) main_fs_bigclock_clock_pane_g2

0xe786,	// (0x0007de0f) main_fs_bigclock_clock_pane_g3

0xe786,	// (0x0007de0f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x0007f531) main_fs_bigclock_clock_pane_g

0xe792,	// (0x0007de1b) main_fs_bigclock_clock_pane_t1

0xe7a0,	// (0x0007de29) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x0007f53a) main_fs_bigclock_clock_pane_t

0xe7af,	// (0x0007de38) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe7af,	// (0x0007de38) list_single_fs_bigclock_indicator_pane

0xa2fe,	// (0x00079987) list_single_fs_bigclock_pane_ParamLimits

0xa2fe,	// (0x00079987) list_single_fs_bigclock_pane

0xe7c9,	// (0x0007de52) main_fs_bigclock_indicator_pane_t1

0xe7d8,	// (0x0007de61) list_single_fs_bigclock_pane_g1

0xe7e0,	// (0x0007de69) list_single_fs_bigclock_pane_t1

0x643b,	// (0x00075ac4) main_fs_bigclock_swipe_pane_g1

0xe81e,	// (0x0007dea7) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x0007f54b) main_fs_bigclock_swipe_pane_g

0xe826,	// (0x0007deaf) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe826,	// (0x0007deaf) main_fs_bigclock_swipe_pane_t1

0x443e,	// (0x00073ac7) call_type_pane_ParamLimits

0x1c70,	// (0x000712f9) main_btmg_pane

0xe49d,	// (0x0007db26) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe49d,	// (0x0007db26) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x0007f4be) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x0007f4be) list_single_cale_mrui_row_pane_g

0xe5ee,	// (0x0007dc77) list_recal_vselct_arw_lo_pane

0xe5f6,	// (0x0007dc7f) list_recal_vselct_arw_up_pane

0xd1e8,	// (0x0007c871) list_recal_vselct_pane

0xe843,	// (0x0007decc) btmg_button_pane

0xa364,	// (0x000799ed) main_btmg_pane_g1

0x1c70,	// (0x000712f9) bg_button_pane_cp044

0xe84d,	// (0x0007ded6) btmg_button_pane_t1

0xeb23,	// (0x0007e1ac) aid_listscroll_gen

0xeab8,	// (0x0007e141) main_cntbar_detail_pane

0xe1c3,	// (0x0007d84c) list_cmail_folder_pane

0xe1d3,	// (0x0007d85c) sp_fs_scroll_pane_cp03_ParamLimits

0x1c3e,	// (0x000712c7) list_single_fs_dyc_pane_cp01_ParamLimits

0x1c3e,	// (0x000712c7) list_single_fs_dyc_pane_cp01

0xe85b,	// (0x0007dee4) aid_size_cmail_indent

0xe864,	// (0x0007deed) list_single_dyc_row_pane_cp01

0xa39e,	// (0x00079a27) cntbar_detail_list_pane_ParamLimits

0xa39e,	// (0x00079a27) cntbar_detail_list_pane

0xa3f0,	// (0x00079a79) main_cntbar_detail_cont_pane_ParamLimits

0xa3f0,	// (0x00079a79) main_cntbar_detail_cont_pane

0x4432,	// (0x00073abb) scroll_pane_cp032_ParamLimits

0x4432,	// (0x00073abb) scroll_pane_cp032

0xa404,	// (0x00079a8d) cntbar_detail_list_event_pane_ParamLimits

0xa404,	// (0x00079a8d) cntbar_detail_list_event_pane

0xa3b0,	// (0x00079a39) cntbar_detail_list_shct_pane

0x3a22,	// (0x000730ab) aid_list_gen

0xe86d,	// (0x0007def6) aid_scroll

0xe876,	// (0x0007deff) aid_size_touch_scroll_bar

0xe87f,	// (0x0007df08) aid_list_double

0xe888,	// (0x0007df11) aid_list_single

0x00ee,	// (0x0006f777) aid_list_single_lg

0xe891,	// (0x0007df1a) aid_list_z_g_a_sm

0xf127,	// (0x0007e7b0) aid_list_z_g_d

0xe899,	// (0x0007df22) aid_txt_z_prm

0xe8a7,	// (0x0007df30) aid_txt_z_prm_cp01

0xe8b5,	// (0x0007df3e) aid_txt_z_sec

0xa414,	// (0x00079a9d) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa414,	// (0x00079a9d) main_cntbar_detail_cont_pane_g1

0xa428,	// (0x00079ab1) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa428,	// (0x00079ab1) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x0007f550) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x0007f550) main_cntbar_detail_cont_pane_g

0xe8c3,	// (0x0007df4c) main_cntbar_detail_cont_pane_t1

0xe8d1,	// (0x0007df5a) main_cntbar_detail_cont_pane_t2

0xe8df,	// (0x0007df68) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x0007f555) main_cntbar_detail_cont_pane_t

0xa438,	// (0x00079ac1) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa438,	// (0x00079ac1) cell_cntbar_detail_list_shct_pane

0xe8ed,	// (0x0007df76) cntbar_detail_list_shct_pane_g1

0xe8f6,	// (0x0007df7f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x0007f55c) cntbar_detail_list_shct_pane_g

0xa44a,	// (0x00079ad3) cntbar_detail_list_event_pane_g1_ParamLimits

0xa44a,	// (0x00079ad3) cntbar_detail_list_event_pane_g1

0xa456,	// (0x00079adf) cntbar_detail_list_event_pane_g2_ParamLimits

0xa456,	// (0x00079adf) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x0007f561) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x0007f561) cntbar_detail_list_event_pane_g

0xa4c4,	// (0x00079b4d) cntbar_detail_list_event_pane_t1_ParamLimits

0xa4c4,	// (0x00079b4d) cntbar_detail_list_event_pane_t1

0xa4d9,	// (0x00079b62) cntbar_detail_list_event_pane_t2_ParamLimits

0xa4d9,	// (0x00079b62) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x0007f56e) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x0007f56e) cntbar_detail_list_event_pane_t

0x643b,	// (0x00075ac4) cell_cntbar_detail_list_shct_pane_g1

0x47e2,	// (0x00073e6b) navi_pane_mv_g3

0xeab8,	// (0x0007e141) main_cntbar_detail_pane_ParamLimits

0x1c70,	// (0x000712f9) main_notif_wgt_pane

0xedc5,	// (0x0007e44e) aid_tch_main_mp4_pane_g4

0xef79,	// (0x0007e602) popup_slider_window_cp02

0xe5e5,	// (0x0007dc6e) list_recal_day_event_pane

0xa36e,	// (0x000799f7) cntbar_detail_btn_pane_ParamLimits

0xa36e,	// (0x000799f7) cntbar_detail_btn_pane

0xa386,	// (0x00079a0f) cntbar_detail_btn_pane_cp01_ParamLimits

0xa386,	// (0x00079a0f) cntbar_detail_btn_pane_cp01

0xa3b0,	// (0x00079a39) cntbar_detail_list_shct_pane_ParamLimits

0xa3c0,	// (0x00079a49) cntbar_detail_pane_g1_ParamLimits

0xa3c0,	// (0x00079a49) cntbar_detail_pane_g1

0xa3d4,	// (0x00079a5d) cntbar_detail_pane_t1_ParamLimits

0xa3d4,	// (0x00079a5d) cntbar_detail_pane_t1

0xa462,	// (0x00079aeb) cntbar_detail_list_event_pane_g3_ParamLimits

0xa462,	// (0x00079aeb) cntbar_detail_list_event_pane_g3

0xa47a,	// (0x00079b03) cntbar_detail_list_event_pane_g4_ParamLimits

0xa47a,	// (0x00079b03) cntbar_detail_list_event_pane_g4

0xa492,	// (0x00079b1b) cntbar_detail_list_event_pane_g5_ParamLimits

0xa492,	// (0x00079b1b) cntbar_detail_list_event_pane_g5

0xa4aa,	// (0x00079b33) cntbar_detail_list_event_pane_g6_ParamLimits

0xa4aa,	// (0x00079b33) cntbar_detail_list_event_pane_g6

0xa4ee,	// (0x00079b77) cntbar_detail_list_event_pane_t3_ParamLimits

0xa4ee,	// (0x00079b77) cntbar_detail_list_event_pane_t3

0xa500,	// (0x00079b89) popup_notif_wgt_window_ParamLimits

0xa500,	// (0x00079b89) popup_notif_wgt_window

0xa519,	// (0x00079ba2) popup_submenu_window_cp01_ParamLimits

0xa519,	// (0x00079ba2) popup_submenu_window_cp01

0xb278,	// (0x0007a901) bg_popup_window_pane_cp10

0xe8ff,	// (0x0007df88) listscroll_notif_wgt_pane

0xe909,	// (0x0007df92) list_notif_wgt_window

0xe912,	// (0x0007df9b) scroll_pane_cp033

0xe91b,	// (0x0007dfa4) list_notif_wgt_row_pane_ParamLimits

0xe91b,	// (0x0007dfa4) list_notif_wgt_row_pane

0xe92f,	// (0x0007dfb8) aid_size_list_notif_wgt_del

0xe938,	// (0x0007dfc1) list_notif_wgt_row_pane_g1

0xe940,	// (0x0007dfc9) list_notif_wgt_row_pane_g2

0xe948,	// (0x0007dfd1) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x0007f575) list_notif_wgt_row_pane_g

0xe951,	// (0x0007dfda) list_notif_wgt_row_pane_t1

0xe95f,	// (0x0007dfe8) list_notif_wgt_row_pane_t2

0xe96d,	// (0x0007dff6) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x0007f57c) list_notif_wgt_row_pane_t

0xcebd,	// (0x0007c546) list_recal_day_event_pane_g1

0xe97b,	// (0x0007e004) list_recal_day_event_pane_t1

0x1c70,	// (0x000712f9) bg_button_pane_cp045

0xe98a,	// (0x0007e013) cntbar_detail_btn_pane_t1

0xeb2b,	// (0x0007e1b4) main_callh_pane_ParamLimits

0xeb2b,	// (0x0007e1b4) main_callh_pane

0x1c70,	// (0x000712f9) main_coverflow0_pane

0x1c70,	// (0x000712f9) main_wgtman_pane

0x9b00,	// (0x00079189) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9b00,	// (0x00079189) main_fs_bigclock_unlock_btn_pane

0x9ea4,	// (0x0007952d) bg_button_pane_cp16

0x9ebc,	// (0x00079545) cell_tport_appsw_pane_g3

0xa52b,	// (0x00079bb4) cf0_flow_pane_ParamLimits

0xa52b,	// (0x00079bb4) cf0_flow_pane

0xe998,	// (0x0007e021) listscroll_cf0_pane

0xe9a1,	// (0x0007e02a) main_cf0_pane_g1

0xa540,	// (0x00079bc9) main_cf0_pane_t1_ParamLimits

0xa540,	// (0x00079bc9) main_cf0_pane_t1

0xa558,	// (0x00079be1) main_cf0_pane_t2_ParamLimits

0xa558,	// (0x00079be1) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x0007f583) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x0007f583) main_cf0_pane_t

0xe9ab,	// (0x0007e034) scroll_pane_cp11

0xa570,	// (0x00079bf9) cf0_flow_pane_g1

0xa57c,	// (0x00079c05) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x0007f588) cf0_flow_pane_g

0xa588,	// (0x00079c11) cf0_flow_pane_t1

0x1c70,	// (0x000712f9) main_call6_pane

0x1c70,	// (0x000712f9) main_calllock_pane

0xa59a,	// (0x00079c23) call6_btn_grp_pane_ParamLimits

0xa59a,	// (0x00079c23) call6_btn_grp_pane

0xa5b6,	// (0x00079c3f) call6_pane_g1_ParamLimits

0xa5b6,	// (0x00079c3f) call6_pane_g1

0xa5cc,	// (0x00079c55) popup_call6_1st_window_ParamLimits

0xa5cc,	// (0x00079c55) popup_call6_1st_window

0xa5dd,	// (0x00079c66) popup_call6_2nd_window_ParamLimits

0xa5dd,	// (0x00079c66) popup_call6_2nd_window

0xa5ee,	// (0x00079c77) cell_call6_btn_pane_ParamLimits

0xa5ee,	// (0x00079c77) cell_call6_btn_pane

0xb278,	// (0x0007a901) bg_popup_call2_in_pane_cp03

0xe9b6,	// (0x0007e03f) popup_call6_1st_window_g1

0xe9be,	// (0x0007e047) popup_call6_1st_window_g2

0xe9c6,	// (0x0007e04f) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x0007f58d) popup_call6_1st_window_g

0xe9ce,	// (0x0007e057) popup_call6_1st_window_t1

0xe9dd,	// (0x0007e066) popup_call6_1st_window_t2

0xe9ed,	// (0x0007e076) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x0007f594) popup_call6_1st_window_t

0xb278,	// (0x0007a901) bg_popup_call2_in_pane_cp04

0xe9b6,	// (0x0007e03f) popup_call6_2nd_window_g1

0xe9be,	// (0x0007e047) popup_call6_2nd_window_g2

0xe9c6,	// (0x0007e04f) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x0007f58d) popup_call6_2nd_window_g

0xe9ce,	// (0x0007e057) popup_call6_2nd_window_t1

0x1c70,	// (0x000712f9) bg_button_pane_cp15

0xe9fd,	// (0x0007e086) cell_call6_btn_pane_g1

0xea06,	// (0x0007e08f) cell_call6_btn_pane_t1

0xa602,	// (0x00079c8b) listscroll_wgtman_pane_ParamLimits

0xa602,	// (0x00079c8b) listscroll_wgtman_pane

0xa61a,	// (0x00079ca3) wgtman_btn_pane_ParamLimits

0xa61a,	// (0x00079ca3) wgtman_btn_pane

0xb13e,	// (0x0007a7c7) aid_scroll_copy1

0xea15,	// (0x0007e09e) list_wgtman_pane

0xa633,	// (0x00079cbc) wgtman_btn_pane_g1_ParamLimits

0xa633,	// (0x00079cbc) wgtman_btn_pane_g1

0xa647,	// (0x00079cd0) wgtman_btn_pane_t1_ParamLimits

0xa647,	// (0x00079cd0) wgtman_btn_pane_t1

0xea1f,	// (0x0007e0a8) wgtman_btn_pane_t2_ParamLimits

0xea1f,	// (0x0007e0a8) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x0007f59b) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x0007f59b) wgtman_btn_pane_t

0xea33,	// (0x0007e0bc) listrow_wgtman_pane_ParamLimits

0xea33,	// (0x0007e0bc) listrow_wgtman_pane

0xea47,	// (0x0007e0d0) listrow_wgtman_pane_g1

0xa662,	// (0x00079ceb) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x0007f5a0) listrow_wgtman_pane_g

0xea50,	// (0x0007e0d9) listrow_wgtman_pane_t1

0xea5e,	// (0x0007e0e7) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x0007f5a5) listrow_wgtman_pane_t

0xea6c,	// (0x0007e0f5) wait_bar_pane_cp09

0xea74,	// (0x0007e0fd) main_calllock_btn_pane

0xea7e,	// (0x0007e107) main_calllock_pane_g1

0x1c70,	// (0x000712f9) bg_button_pane_cp17

0xea8a,	// (0x0007e113) main_calllock_btn_pane_g1

0xea93,	// (0x0007e11c) main_calllock_btn_pane_t1

0x1c70,	// (0x000712f9) main_dialer3_pane

0x1c70,	// (0x000712f9) main_fmrd2_pane

0x643b,	// (0x00075ac4) main_fs_bigclock_unlock_btn_pane_g1

0xeaaa,	// (0x0007e133) main_fs_bigclock_unlock_btn_pane_t1

0xa66c,	// (0x00079cf5) area_fmrd2_info_pane_ParamLimits

0xa66c,	// (0x00079cf5) area_fmrd2_info_pane

0xa680,	// (0x00079d09) area_fmrd2_visual_pane_ParamLimits

0xa680,	// (0x00079d09) area_fmrd2_visual_pane

0xa68e,	// (0x00079d17) fmrd2_indi_pane_ParamLimits

0xa68e,	// (0x00079d17) fmrd2_indi_pane

0xa69b,	// (0x00079d24) area_fmrd2_visual_pane_g1

0xa6a3,	// (0x00079d2c) area_fmrd2_visual_pane_t1

0xa6b3,	// (0x00079d3c) area_fmrd2_visual_pane_t2

0xa6c3,	// (0x00079d4c) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x0007f5af) area_fmrd2_visual_pane_t

0xa6d3,	// (0x00079d5c) area_fmrd2_info_pane_g1

0xa6db,	// (0x00079d64) area_fmrd2_info_pane_t1

0xa6eb,	// (0x00079d74) area_fmrd2_info_pane_t2

0xa6fb,	// (0x00079d84) area_fmrd2_info_pane_t3

0xa70b,	// (0x00079d94) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x0007f5b6) area_fmrd2_info_pane_t

0xa71b,	// (0x00079da4) fmrd2_indi_pane_t1

0xa72b,	// (0x00079db4) fmrd2_indi_pane_t2

0xa73b,	// (0x00079dc4) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x0007f5bf) fmrd2_indi_pane_t

0xdbe8,	// (0x0007d271) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdbe8,	// (0x0007d271) list_single_fs_bigclock_indicator_pane_g5

0xdc8e,	// (0x0007d317) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdc8e,	// (0x0007d317) list_single_fs_bigclock_indicator_pane_t5

0xa048,	// (0x000796d1) aid_cell_bcale_month_pane_ParamLimits

0xa048,	// (0x000796d1) aid_cell_bcale_month_pane

0xa05a,	// (0x000796e3) bcale_month_pane_ParamLimits

0xa05a,	// (0x000796e3) bcale_month_pane

0xa072,	// (0x000796fb) bcale_preview_pane_ParamLimits

0xa072,	// (0x000796fb) bcale_preview_pane

0xe7e0,	// (0x0007de69) list_single_fs_bigclock_pane_t1_ParamLimits

0xe7fa,	// (0x0007de83) list_single_fs_bigclock_pane_t2_ParamLimits

0xe7fa,	// (0x0007de83) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x0007f546) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x0007f546) list_single_fs_bigclock_pane_t

0xeaa2,	// (0x0007e12b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x0007f5aa) main_fs_bigclock_unlock_btn_pane_g

0xa74b,	// (0x00079dd4) aid_dia3_key_size_ParamLimits

0xa74b,	// (0x00079dd4) aid_dia3_key_size

0xa75a,	// (0x00079de3) aid_dia3_listrow_size_ParamLimits

0xa75a,	// (0x00079de3) aid_dia3_listrow_size

0xa768,	// (0x00079df1) dia3_keypad_fun_pane_ParamLimits

0xa768,	// (0x00079df1) dia3_keypad_fun_pane

0xa784,	// (0x00079e0d) dia3_keypad_num_pane_ParamLimits

0xa784,	// (0x00079e0d) dia3_keypad_num_pane

0xa79d,	// (0x00079e26) dia3_listscroll_pane_ParamLimits

0xa79d,	// (0x00079e26) dia3_listscroll_pane

0xa7b0,	// (0x00079e39) dia3_numentry_pane_ParamLimits

0xa7b0,	// (0x00079e39) dia3_numentry_pane

0x00a7,	// (0x0006f730) dia3_list_pane

0x00b2,	// (0x0006f73b) scroll_pane_cp12

0x1c70,	// (0x000712f9) bg_dia3_numentry_pane

0x00bd,	// (0x0006f746) dia3_numentry_pane_t1

0xa7c1,	// (0x00079e4a) cell_dia3_key_num_pane

0xa7c9,	// (0x00079e52) cell_dia3_key0_fun_pane_ParamLimits

0xa7c9,	// (0x00079e52) cell_dia3_key0_fun_pane

0xa7dd,	// (0x00079e66) cell_dia3_key1_fun_pane_ParamLimits

0xa7dd,	// (0x00079e66) cell_dia3_key1_fun_pane

0xa7f5,	// (0x00079e7e) dia3_listrow_pane

0xd900,	// (0x0007cf89) bg_dia3_numentry_pane_g1

0x1c70,	// (0x000712f9) bg_button_pane_cp21

0x00f7,	// (0x0006f780) cell_dia3_key_num_pane_t1

0x0105,	// (0x0006f78e) cell_dia3_key_num_pane_t2

0x0114,	// (0x0006f79d) cell_dia3_key_num_pane_t3

0x0123,	// (0x0006f7ac) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x0007f5c6) cell_dia3_key_num_pane_t

0x1c70,	// (0x000712f9) bg_button_pane_cp19

0xa7fe,	// (0x00079e87) cell_dia3_key0_fun_pane_g1

0x1c70,	// (0x000712f9) bg_button_pane_cp20

0xa806,	// (0x00079e8f) cell_dia3_key1_fun_pane_g1

0xa80e,	// (0x00079e97) area_left_week_number_pane

0xa817,	// (0x00079ea0) area_top_day_name_pane

0xa820,	// (0x00079ea9) frame_month_view_pane

0xa82c,	// (0x00079eb5) grid_month_view_pane

0xa836,	// (0x00079ebf) cell_top_day_name_pane_ParamLimits

0xa836,	// (0x00079ebf) cell_top_day_name_pane

0xa852,	// (0x00079edb) cell_area_left_week_number_pane_ParamLimits

0xa852,	// (0x00079edb) cell_area_left_week_number_pane

0xa868,	// (0x00079ef1) cell_month_view_pane_ParamLimits

0xa868,	// (0x00079ef1) cell_month_view_pane

0x01b7,	// (0x0006f840) frm_month_g1

0xa889,	// (0x00079f12) frm_month_g2

0xa893,	// (0x00079f1c) frm_month_g3

0xa89d,	// (0x00079f26) frm_month_g4

0xa8a7,	// (0x00079f30) frm_month_g5

0xa8b1,	// (0x00079f3a) frm_month_g6

0xa8bd,	// (0x00079f46) frm_month_g7

0x01fc,	// (0x0006f885) frm_month_g8

0xa8c9,	// (0x00079f52) frm_month_g9

0xa8d2,	// (0x00079f5b) frm_month_g10

0xa8db,	// (0x00079f64) frm_month_g11

0xa8e4,	// (0x00079f6d) frm_month_g12

0xa8ed,	// (0x00079f76) frm_month_g13

0xa8f6,	// (0x00079f7f) frm_month_g14

0xa901,	// (0x00079f8a) frm_month_g15

0xa90c,	// (0x00079f95) frm_month_g16

0x000f,

0xff46,	// (0x0007f5cf) frm_month_g

0xa917,	// (0x00079fa0) cell_top_day_name_pane_t1

0xa926,	// (0x00079faf) cell_area_left_week_number_pane_g1

0xa917,	// (0x00079fa0) cell_area_left_week_number_pane_t1

0x643b,	// (0x00075ac4) cell_month_view_pane_g1

0xa92e,	// (0x00079fb7) cell_month_view_pane_t1

0x1c70,	// (0x000712f9) main_fps_pane

0xdf00,	// (0x0007d589) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdf00,	// (0x0007d589) cmail_ddmenu_btn02_pane_cp1

0xdf1c,	// (0x0007d5a5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdf1c,	// (0x0007d5a5) cmail_ddmenu_btn02_pane_cp2

0xa264,	// (0x000798ed) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa264,	// (0x000798ed) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x0007f4f7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x0007f4f7) cmail_ddmenu_btn02_pane_g

0xa282,	// (0x0007990b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa282,	// (0x0007990b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x0007f4fc) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x0007f4fc) cmail_ddmenu_btn02_pane_t

0xa93d,	// (0x00079fc6) fps_text_pane_ParamLimits

0xa93d,	// (0x00079fc6) fps_text_pane

0xa954,	// (0x00079fdd) main_fps_pane_g1_ParamLimits

0xa954,	// (0x00079fdd) main_fps_pane_g1

0xa96c,	// (0x00079ff5) wait_bar_pane_cp010_ParamLimits

0xa96c,	// (0x00079ff5) wait_bar_pane_cp010

0xa97f,	// (0x0007a008) fps_text_pane_t1_ParamLimits

0xa97f,	// (0x0007a008) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
