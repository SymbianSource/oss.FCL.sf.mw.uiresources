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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0003d38d };

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
0x2133,	// (0x0003f4c0) Screen

0x213f,	// (0x0003f4cc) application_window

0x219b,	// (0x0003f528) area_bottom_pane_ParamLimits

0x219b,	// (0x0003f528) area_bottom_pane

0x21f4,	// (0x0003f581) area_top_pane_ParamLimits

0x21f4,	// (0x0003f581) area_top_pane

0x2258,	// (0x0003f5e5) call_video_uplink_pane_ParamLimits

0x2258,	// (0x0003f5e5) call_video_uplink_pane

0x2297,	// (0x0003f624) main_pane_ParamLimits

0x2297,	// (0x0003f624) main_pane

0xc85e,	// (0x00049beb) context_pane

0x5623,	// (0x000429b0) navi_pane

0x5649,	// (0x000429d6) popup_cale_events_window_ParamLimits

0x5649,	// (0x000429d6) popup_cale_events_window

0xc871,	// (0x00049bfe) popup_mup_playback_window

0x5661,	// (0x000429ee) signal_pane

0xa7c1,	// (0x00047b4e) main_browser_pane

0xa998,	// (0x00047d25) main_burst_pane

0x54b3,	// (0x00042840) main_calc_pane

0xc844,	// (0x00049bd1) main_cale_day_pane

0x29d0,	// (0x0003fd5d) main_cale_month_pane

0xc844,	// (0x00049bd1) main_cale_week_pane

0xa998,	// (0x00047d25) main_call_pane

0xa47f,	// (0x0004780c) main_call_poc_pane

0xa998,	// (0x00047d25) main_camera_pane

0xa998,	// (0x00047d25) main_chi_dic_pane

0xb19b,	// (0x00048528) main_clock_pane

0xa47f,	// (0x0004780c) main_fmradio_pane

0xa998,	// (0x00047d25) main_graph_messa_pane

0xa47f,	// (0x0004780c) main_help_pane

0xa7c1,	// (0x00047b4e) main_im_pane

0xa6f0,	// (0x00047a7d) main_image_pane_ParamLimits

0xa6f0,	// (0x00047a7d) main_image_pane

0xa47f,	// (0x0004780c) main_location2_pane

0xa998,	// (0x00047d25) main_location_pane

0xa6f0,	// (0x00047a7d) main_messa_pane

0xa47f,	// (0x0004780c) main_mp2_pane

0xa998,	// (0x00047d25) main_mp_pane

0xa47f,	// (0x0004780c) main_msg_pane

0xa47f,	// (0x0004780c) main_mup_eq_pane

0xa47f,	// (0x0004780c) main_mup_pane

0xa7c1,	// (0x00047b4e) main_notes_pane

0xa47f,	// (0x0004780c) main_pec_pane

0xa47f,	// (0x0004780c) main_phob_pane

0xa47f,	// (0x0004780c) main_pinb_pane

0xa47f,	// (0x0004780c) main_postcard_pane

0xa47f,	// (0x0004780c) main_qdial_pane

0xa998,	// (0x00047d25) main_skin_pane

0xa47f,	// (0x0004780c) main_smil2_pane

0xa998,	// (0x00047d25) main_smil_pane

0xa998,	// (0x00047d25) main_video_pane

0xa998,	// (0x00047d25) main_video_tele_pane

0xa6f0,	// (0x00047a7d) main_viewer_pane_ParamLimits

0xa6f0,	// (0x00047a7d) main_viewer_pane

0xa998,	// (0x00047d25) main_vorec_pane

0x54f1,	// (0x0004287e) popup_blid_sat_info_window_ParamLimits

0x54f1,	// (0x0004287e) popup_blid_sat_info_window

0x5511,	// (0x0004289e) popup_dyc_status_message_window_ParamLimits

0x5511,	// (0x0004289e) popup_dyc_status_message_window

0x551f,	// (0x000428ac) popup_grid_large_graphic_window_ParamLimits

0x551f,	// (0x000428ac) popup_grid_large_graphic_window

0x55ae,	// (0x0004293b) popup_loc_request_window_ParamLimits

0x55ae,	// (0x0004293b) popup_loc_request_window

0x55fb,	// (0x00042988) popup_wml_address_window_ParamLimits

0x55fb,	// (0x00042988) popup_wml_address_window

0x538b,	// (0x00042718) call_muted_g1

0x5047,	// (0x000423d4) popup_call_audio_conf_window_ParamLimits

0x5047,	// (0x000423d4) popup_call_audio_conf_window

0x539b,	// (0x00042728) popup_call_audio_first_window_ParamLimits

0x539b,	// (0x00042728) popup_call_audio_first_window

0x53db,	// (0x00042768) popup_call_audio_in_window_ParamLimits

0x53db,	// (0x00042768) popup_call_audio_in_window

0x53ff,	// (0x0004278c) popup_call_audio_out_window_ParamLimits

0x53ff,	// (0x0004278c) popup_call_audio_out_window

0x5421,	// (0x000427ae) popup_call_audio_second_window_ParamLimits

0x5421,	// (0x000427ae) popup_call_audio_second_window

0x5451,	// (0x000427de) popup_call_audio_wait_window_ParamLimits

0x5451,	// (0x000427de) popup_call_audio_wait_window

0x5472,	// (0x000427ff) popup_number_entry_window_ParamLimits

0x5472,	// (0x000427ff) popup_number_entry_window

0xa06c,	// (0x000473f9) bg_popup_call_pane_cp05_ParamLimits

0xa06c,	// (0x000473f9) bg_popup_call_pane_cp05

0xa08c,	// (0x00047419) popup_number_entry_window_t1

0xa09f,	// (0x0004742c) popup_number_entry_window_t2

0xa0b1,	// (0x0004743e) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0004c457) popup_number_entry_window_t

0xa0c3,	// (0x00047450) text_title_cp2

0xa0d6,	// (0x00047463) bg_popup_call_pane_cp_ParamLimits

0xa0d6,	// (0x00047463) bg_popup_call_pane_cp

0xa0e4,	// (0x00047471) call_thumbnail_pane

0xa0ec,	// (0x00047479) popup_call_audio_in_window_g1_ParamLimits

0xa0ec,	// (0x00047479) popup_call_audio_in_window_g1

0xa0f8,	// (0x00047485) popup_call_audio_in_window_g2_ParamLimits

0xa0f8,	// (0x00047485) popup_call_audio_in_window_g2

0xa104,	// (0x00047491) popup_call_audio_in_window_g3_ParamLimits

0xa104,	// (0x00047491) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0004c460) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0004c460) popup_call_audio_in_window_g

0xa110,	// (0x0004749d) popup_call_audio_in_window_t1_ParamLimits

0xa110,	// (0x0004749d) popup_call_audio_in_window_t1

0xa12c,	// (0x000474b9) popup_call_audio_in_window_t2_ParamLimits

0xa12c,	// (0x000474b9) popup_call_audio_in_window_t2

0xa148,	// (0x000474d5) popup_call_audio_in_window_t3_ParamLimits

0xa148,	// (0x000474d5) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0004c467) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0004c467) popup_call_audio_in_window_t

0xa0d6,	// (0x00047463) bg_popup_call_pane_cp01_ParamLimits

0xa0d6,	// (0x00047463) bg_popup_call_pane_cp01

0xa0e4,	// (0x00047471) call_thumbnail_pane_cp02

0xa15b,	// (0x000474e8) call_type_pane_cp022

0xa163,	// (0x000474f0) popup_call_audio_out_window_g1_ParamLimits

0xa163,	// (0x000474f0) popup_call_audio_out_window_g1

0xa175,	// (0x00047502) popup_call_audio_out_window_g2_ParamLimits

0xa175,	// (0x00047502) popup_call_audio_out_window_g2

0xa181,	// (0x0004750e) popup_call_audio_out_window_g3_ParamLimits

0xa181,	// (0x0004750e) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0004c46e) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0004c46e) popup_call_audio_out_window_g

0xa193,	// (0x00047520) popup_call_audio_out_window_t1_ParamLimits

0xa193,	// (0x00047520) popup_call_audio_out_window_t1

0xa1ab,	// (0x00047538) popup_call_audio_out_window_t2_ParamLimits

0xa1ab,	// (0x00047538) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0004c475) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0004c475) popup_call_audio_out_window_t

0xa1c0,	// (0x0004754d) bg_popup_call_pane_ParamLimits

0xa1c0,	// (0x0004754d) bg_popup_call_pane

0x249b,	// (0x0003f828) call_thumbnail_pane_cp_ParamLimits

0x249b,	// (0x0003f828) call_thumbnail_pane_cp

0xa244,	// (0x000475d1) call_type_pane_cp01_ParamLimits

0xa244,	// (0x000475d1) call_type_pane_cp01

0xa288,	// (0x00047615) popup_call_audio_first_window_g1_ParamLimits

0xa288,	// (0x00047615) popup_call_audio_first_window_g1

0xa2d4,	// (0x00047661) popup_call_audio_first_window_g2_ParamLimits

0xa2d4,	// (0x00047661) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0004c47a) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0004c47a) popup_call_audio_first_window_g

0xa318,	// (0x000476a5) popup_call_audio_first_window_t1_ParamLimits

0xa318,	// (0x000476a5) popup_call_audio_first_window_t1

0xa3c4,	// (0x00047751) popup_call_audio_first_window_t4_ParamLimits

0xa3c4,	// (0x00047751) popup_call_audio_first_window_t4

0xa450,	// (0x000477dd) popup_call_audio_first_window_t5_ParamLimits

0xa450,	// (0x000477dd) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0004c47f) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0004c47f) popup_call_audio_first_window_t

0xa47f,	// (0x0004780c) bg_popup_call_pane_cp02

0xa489,	// (0x00047816) call_type_pane_cp023

0xa491,	// (0x0004781e) popup_call_audio_wait_window_g1

0xa499,	// (0x00047826) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004c486) popup_call_audio_wait_window_g

0xa4a1,	// (0x0004782e) popup_call_audio_wait_window_t3

0xa4af,	// (0x0004783c) bg_popup_call_pane_cp03_ParamLimits

0xa4af,	// (0x0004783c) bg_popup_call_pane_cp03

0xa50f,	// (0x0004789c) call_thumbnail_pane_cp011_ParamLimits

0xa50f,	// (0x0004789c) call_thumbnail_pane_cp011

0xa51b,	// (0x000478a8) call_type_pane_cp034_ParamLimits

0xa51b,	// (0x000478a8) call_type_pane_cp034

0xa557,	// (0x000478e4) popup_call_audio_second_window_g1_ParamLimits

0xa557,	// (0x000478e4) popup_call_audio_second_window_g1

0xa593,	// (0x00047920) popup_call_audio_second_window_g2_ParamLimits

0xa593,	// (0x00047920) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0004c48b) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0004c48b) popup_call_audio_second_window_g

0xa5cf,	// (0x0004795c) popup_call_audio_second_window_t1_ParamLimits

0xa5cf,	// (0x0004795c) popup_call_audio_second_window_t1

0xa650,	// (0x000479dd) popup_call_audio_second_window_t2_ParamLimits

0xa650,	// (0x000479dd) popup_call_audio_second_window_t2

0xa686,	// (0x00047a13) popup_call_audio_second_window_t3_ParamLimits

0xa686,	// (0x00047a13) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0004c490) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0004c490) popup_call_audio_second_window_t

0xa47f,	// (0x0004780c) bg_popup_call_pane_cp04

0xa6bc,	// (0x00047a49) list_conf_pane

0xa6c4,	// (0x00047a51) popup_call_audio_conf_window_t1

0xa6d2,	// (0x00047a5f) call_thumbnail_pane_g1

0xa6f0,	// (0x00047a7d) bg_pinb_pane_ParamLimits

0xa6f0,	// (0x00047a7d) bg_pinb_pane

0xa6fe,	// (0x00047a8b) find_pinb_pane

0xa707,	// (0x00047a94) listscroll_pinb_pane_ParamLimits

0xa707,	// (0x00047a94) listscroll_pinb_pane

0xa716,	// (0x00047aa3) pinb_bg_pane_g1

0x24bf,	// (0x0003f84c) pinb_bg_pane_g2

0x24cb,	// (0x0003f858) pinb_bg_pane_g3

0x24d7,	// (0x0003f864) pinb_bg_pane_g4

0x24e3,	// (0x0003f870) pinb_bg_pane_g5

0x24ef,	// (0x0003f87c) pinb_bg_pane_g6

0x24fa,	// (0x0003f887) pinb_bg_pane_g7

0x2505,	// (0x0003f892) pinb_bg_pane_g8

0x2510,	// (0x0003f89d) pinb_bg_pane_g9

0x251a,	// (0x0003f8a7) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0004c497) pinb_bg_pane_g

0x2537,	// (0x0003f8c4) grid_pinb_pane

0x2542,	// (0x0003f8cf) list_pinb_pane

0x254d,	// (0x0003f8da) scroll_pane_cp01_ParamLimits

0x254d,	// (0x0003f8da) scroll_pane_cp01

0xa720,	// (0x00047aad) find_pinb_pane_g1_ParamLimits

0xa720,	// (0x00047aad) find_pinb_pane_g1

0xa738,	// (0x00047ac5) find_pinb_pane_t1

0xa74a,	// (0x00047ad7) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0004c4b1) find_pinb_pane_t

0xa75f,	// (0x00047aec) input_focus_pane_cp01_ParamLimits

0xa75f,	// (0x00047aec) input_focus_pane_cp01

0x255f,	// (0x0003f8ec) cell_pinb_pane_ParamLimits

0x255f,	// (0x0003f8ec) cell_pinb_pane

0x258a,	// (0x0003f917) cell_pinb_pane_g1_ParamLimits

0x258a,	// (0x0003f917) cell_pinb_pane_g1

0xa76b,	// (0x00047af8) cell_pinb_pane_g2_ParamLimits

0xa76b,	// (0x00047af8) cell_pinb_pane_g2

0xa777,	// (0x00047b04) cell_pinb_pane_g3_ParamLimits

0xa777,	// (0x00047b04) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0004c4b6) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0004c4b6) cell_pinb_pane_g

0xa47f,	// (0x0004780c) grid_highlight_pane_cp01

0x259f,	// (0x0003f92c) list_pinb_item_pane_ParamLimits

0x259f,	// (0x0003f92c) list_pinb_item_pane

0xa47f,	// (0x0004780c) list_highlight_pane_cp02

0x25c8,	// (0x0003f955) list_pinb_item_pane_g1_ParamLimits

0x25c8,	// (0x0003f955) list_pinb_item_pane_g1

0x25d5,	// (0x0003f962) list_pinb_item_pane_g2_ParamLimits

0x25d5,	// (0x0003f962) list_pinb_item_pane_g2

0x25e1,	// (0x0003f96e) list_pinb_item_pane_g3_ParamLimits

0x25e1,	// (0x0003f96e) list_pinb_item_pane_g3

0x25f2,	// (0x0003f97f) list_pinb_item_pane_g4_ParamLimits

0x25f2,	// (0x0003f97f) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0004c4bd) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0004c4bd) list_pinb_item_pane_g

0x25fe,	// (0x0003f98b) list_pinb_item_pane_t1_ParamLimits

0x25fe,	// (0x0003f98b) list_pinb_item_pane_t1

0x262f,	// (0x0003f9bc) calc_display_pane

0x264d,	// (0x0003f9da) calc_paper_pane

0x2669,	// (0x0003f9f6) grid_calc_pane

0xa47f,	// (0x0004780c) bg_list_pane_cp01

0x2695,	// (0x0003fa22) clock_g1

0x269d,	// (0x0003fa2a) clock_g2

0x0001,

0xf139,	// (0x0004c4c6) clock_g

0x26a7,	// (0x0003fa34) clock_t1_ParamLimits

0x26a7,	// (0x0003fa34) clock_t1

0x26bc,	// (0x0003fa49) clock_t2_ParamLimits

0x26bc,	// (0x0003fa49) clock_t2

0x26ce,	// (0x0003fa5b) clock_t3_ParamLimits

0x26ce,	// (0x0003fa5b) clock_t3

0x26e0,	// (0x0003fa6d) clock_t4_ParamLimits

0x26e0,	// (0x0003fa6d) clock_t4

0x26f2,	// (0x0003fa7f) clock_t5_ParamLimits

0x26f2,	// (0x0003fa7f) clock_t5

0x2707,	// (0x0003fa94) clock_t6_ParamLimits

0x2707,	// (0x0003fa94) clock_t6

0x2719,	// (0x0003faa6) clock_t7_ParamLimits

0x2719,	// (0x0003faa6) clock_t7

0x272b,	// (0x0003fab8) clock_t8_ParamLimits

0x272b,	// (0x0003fab8) clock_t8

0x2741,	// (0x0003face) clock_t9_ParamLimits

0x2741,	// (0x0003face) clock_t9

0x0008,

0xf13e,	// (0x0004c4cb) clock_t_ParamLimits

0xf13e,	// (0x0004c4cb) clock_t

0xa783,	// (0x00047b10) popup_clock_analogue_window_cp02

0xa783,	// (0x00047b10) popup_clock_digital_window_cp01

0xa78b,	// (0x00047b18) listscroll_help_pane

0xa47f,	// (0x0004780c) phob_pre_status_pane

0xa795,	// (0x00047b22) grid_qdial_pane

0xa6f0,	// (0x00047a7d) listscroll_mce_pane

0xa6f0,	// (0x00047a7d) bg_notes_pane

0xa79f,	// (0x00047b2c) list_notes_pane

0x2757,	// (0x0003fae4) scroll_pane_cp06

0xa7ad,	// (0x00047b3a) bg_calc_paper_pane

0x2766,	// (0x0003faf3) list_calc_pane

0xa7c1,	// (0x00047b4e) bg_calc_display_pane

0x2780,	// (0x0003fb0d) calc_display_pane_t1

0x2795,	// (0x0003fb22) calc_display_pane_t2

0x27aa,	// (0x0003fb37) calc_display_pane_t3

0x0002,

0xf151,	// (0x0004c4de) calc_display_pane_t

0x27bc,	// (0x0003fb49) cell_calc_pane_ParamLimits

0x27bc,	// (0x0003fb49) cell_calc_pane

0xa7cd,	// (0x00047b5a) bg_calc_paper_pane_g1

0xa7d9,	// (0x00047b66) bg_calc_paper_pane_g2

0xa7e5,	// (0x00047b72) bg_calc_paper_pane_g3

0xa7f1,	// (0x00047b7e) bg_calc_paper_pane_g4

0xa7fd,	// (0x00047b8a) bg_calc_paper_pane_g5

0x27e9,	// (0x0003fb76) bg_calc_paper_pane_g6

0x27fa,	// (0x0003fb87) bg_calc_paper_pane_g7

0x280b,	// (0x0003fb98) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0004c4e5) bg_calc_paper_pane_g

0x281c,	// (0x0003fba9) calc_bg_paper_pane_g9

0x282d,	// (0x0003fbba) list_calc_item_pane_ParamLimits

0x282d,	// (0x0003fbba) list_calc_item_pane

0xa809,	// (0x00047b96) list_calc_item_pane_g1

0x285d,	// (0x0003fbea) list_calc_item_pane_t1_ParamLimits

0x285d,	// (0x0003fbea) list_calc_item_pane_t1

0x286f,	// (0x0003fbfc) list_calc_item_pane_t2_ParamLimits

0x286f,	// (0x0003fbfc) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0004c4f6) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0004c4f6) list_calc_item_pane_t

0xa816,	// (0x00047ba3) cell_calc_pane_g1

0xa820,	// (0x00047bad) grid_highlight_pane_cp02

0xa842,	// (0x00047bcf) bg_calc_display_pane_g1

0x289f,	// (0x0003fc2c) bg_calc_display_pane_g2

0xa84b,	// (0x00047bd8) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0004c500) bg_calc_display_pane_g

0x28a9,	// (0x0003fc36) cell_qdial_pane_ParamLimits

0x28a9,	// (0x0003fc36) cell_qdial_pane

0x28bd,	// (0x0003fc4a) cell_qdial_pane_g1_ParamLimits

0x28bd,	// (0x0003fc4a) cell_qdial_pane_g1

0x28ca,	// (0x0003fc57) cell_qdial_pane_g2_ParamLimits

0x28ca,	// (0x0003fc57) cell_qdial_pane_g2

0xa854,	// (0x00047be1) cell_qdial_pane_g3_ParamLimits

0xa854,	// (0x00047be1) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0004c507) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0004c507) cell_qdial_pane_g

0x28e7,	// (0x0003fc74) cell_qdial_pane_t1_ParamLimits

0x28e7,	// (0x0003fc74) cell_qdial_pane_t1

0x28ff,	// (0x0003fc8c) cell_qdial_pane_t2_ParamLimits

0x28ff,	// (0x0003fc8c) cell_qdial_pane_t2

0x2912,	// (0x0003fc9f) cell_qdial_pane_t3_ParamLimits

0x2912,	// (0x0003fc9f) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0004c510) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0004c510) cell_qdial_pane_t

0xa47f,	// (0x0004780c) grid_highlight_pane_cp04

0xa860,	// (0x00047bed) thumbnail_qdial_pane_ParamLimits

0xa860,	// (0x00047bed) thumbnail_qdial_pane

0xa8bc,	// (0x00047c49) list_help_pane

0xa8c5,	// (0x00047c52) scroll_pane_cp02

0x2925,	// (0x0003fcb2) help_list_pane_t1_ParamLimits

0x2925,	// (0x0003fcb2) help_list_pane_t1

0x295c,	// (0x0003fce9) bg_notes_pane_g2

0x2964,	// (0x0003fcf1) bg_notes_pane_g3

0x296c,	// (0x0003fcf9) notes_bg_pane_g1

0x2974,	// (0x0003fd01) notes_bg_pane_g4

0x297c,	// (0x0003fd09) notes_bg_pane_g5

0x2984,	// (0x0003fd11) notes_bg_pane_g6

0x298c,	// (0x0003fd19) notes_bg_pane_g7

0x2994,	// (0x0003fd21) notes_bg_pane_g8

0x299c,	// (0x0003fd29) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0004c52e) notes_bg_pane_g

0x29a4,	// (0x0003fd31) list_notes_text_pane_ParamLimits

0x29a4,	// (0x0003fd31) list_notes_text_pane

0xa8ce,	// (0x00047c5b) list_notes_text_pane_g1

0x0d58,	// (0x0003e0e5) list_notes_text_pane_t1

0x29d0,	// (0x0003fd5d) listscroll_cale_week_pane

0x29f5,	// (0x0003fd82) bg_cale_heading_pane

0xa8f1,	// (0x00047c7e) bg_cale_pane_cp01

0x2a17,	// (0x0003fda4) cale_week_corner_pane

0x2a31,	// (0x0003fdbe) cale_week_day_heading_pane

0x2a53,	// (0x0003fde0) cale_week_scroll_pane_g1

0x2a70,	// (0x0003fdfd) cale_week_scroll_pane_g2

0x2a83,	// (0x0003fe10) cale_week_scroll_pane_g3

0x2a96,	// (0x0003fe23) cale_week_scroll_pane_g4

0x2aa9,	// (0x0003fe36) cale_week_scroll_pane_g5

0x2abc,	// (0x0003fe49) cale_week_scroll_pane_g6

0x2acf,	// (0x0003fe5c) cale_week_scroll_pane_g7

0x2ae2,	// (0x0003fe6f) cale_week_scroll_pane_g8

0x2af7,	// (0x0003fe84) cale_week_scroll_pane_g9

0x2b0a,	// (0x0003fe97) cale_week_scroll_pane_g10

0x2b1d,	// (0x0003feaa) cale_week_scroll_pane_g11

0x2b30,	// (0x0003febd) cale_week_scroll_pane_g12

0x2b47,	// (0x0003fed4) cale_week_scroll_pane_g13

0x2b62,	// (0x0003feef) cale_week_scroll_pane_g14

0x2b7d,	// (0x0003ff0a) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0004c53d) cale_week_scroll_pane_g

0x2bad,	// (0x0003ff3a) cale_week_time_pane

0x2bc2,	// (0x0003ff4f) grid_cale_week_pane

0xa920,	// (0x00047cad) scroll_pane_cp08

0x2be3,	// (0x0003ff70) cell_cale_week_pane_ParamLimits

0x2be3,	// (0x0003ff70) cell_cale_week_pane

0x2c47,	// (0x0003ffd4) cale_week_day_heading_pane_t1

0x2c82,	// (0x0004000f) cale_week_day_heading_pane_t2

0x2cbd,	// (0x0004004a) cale_week_day_heading_pane_t3

0x2cf8,	// (0x00040085) cale_week_day_heading_pane_t4

0x2d33,	// (0x000400c0) cale_week_day_heading_pane_t5

0x2d6e,	// (0x000400fb) cale_week_day_heading_pane_t6

0x2da9,	// (0x00040136) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0004c55e) cale_week_day_heading_pane_t

0xa93d,	// (0x00047cca) bg_cale_side_pane

0x2de4,	// (0x00040171) cale_week_time_pane_t1

0x2dfe,	// (0x0004018b) cale_week_time_pane_t2

0x2e18,	// (0x000401a5) cale_week_time_pane_t3

0x2e32,	// (0x000401bf) cale_week_time_pane_t4

0x2e4c,	// (0x000401d9) cale_week_time_pane_t5

0x2e66,	// (0x000401f3) cale_week_time_pane_t6

0x2e86,	// (0x00040213) cale_week_time_pane_t7

0x2eaa,	// (0x00040237) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0004c56d) cale_week_time_pane_t

0x2ece,	// (0x0004025b) cell_cale_week_pane_g2

0x2ef2,	// (0x0004027f) cell_cale_week_pane_g3_ParamLimits

0x2ef2,	// (0x0004027f) cell_cale_week_pane_g3

0xa94b,	// (0x00047cd8) grid_highlight_pane_cp07

0xa953,	// (0x00047ce0) listscroll_gms_pane

0xa95d,	// (0x00047cea) grid_gms_pane

0xa966,	// (0x00047cf3) listscroll_gms_pane_g1

0xa96e,	// (0x00047cfb) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0004c57e) listscroll_gms_pane_g

0x2f0a,	// (0x00040297) scroll_pane_cp010

0x2f15,	// (0x000402a2) cell_gms_pane_ParamLimits

0x2f15,	// (0x000402a2) cell_gms_pane

0x2f25,	// (0x000402b2) cell_gms_pane_g1

0xa976,	// (0x00047d03) cell_gms_pane_g2

0xa97e,	// (0x00047d0b) cell_gms_pane_g3

0xa987,	// (0x00047d14) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0004c583) cell_gms_pane_g

0xa990,	// (0x00047d1d) grid_highlight_pane_cp09

0x5333,	// (0x000426c0) phob_pre_status_pane_g1

0x533b,	// (0x000426c8) phob_pre_status_pane_g2

0x5343,	// (0x000426d0) phob_pre_status_pane_g3

0x534b,	// (0x000426d8) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0004c981) phob_pre_status_pane_g

0x535b,	// (0x000426e8) phob_pre_status_pane_t1

0x536b,	// (0x000426f8) phob_pre_status_pane_t2

0x537b,	// (0x00042708) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0004c98c) phob_pre_status_pane_t

0xa998,	// (0x00047d25) bg_list_pane_cp05

0x2f35,	// (0x000402c2) grid_vorec_pane

0x2f3f,	// (0x000402cc) vorec_t1

0x2f4d,	// (0x000402da) vorec_t2

0x2f5b,	// (0x000402e8) vorec_t3

0x2f69,	// (0x000402f6) vorec_t4

0xa03c,	// (0x000473c9) vorec_t5

0xa04a,	// (0x000473d7) vorec_t6

0x0004,

0xf1ff,	// (0x0004c58c) vorec_t

0xa058,	// (0x000473e5) wait_bar_pane_cp01

0x2f85,	// (0x00040312) cell_vorec_pane_ParamLimits

0x2f85,	// (0x00040312) cell_vorec_pane

0x2f98,	// (0x00040325) cell_vorec_pane_g1

0xa47f,	// (0x0004780c) grid_highlight_pane_cp05

0x2fb2,	// (0x0004033f) cams_zoom_pane

0x2fbe,	// (0x0004034b) image_vga_pane

0x2fcd,	// (0x0004035a) main_camera_pane_g1

0x2fdb,	// (0x00040368) main_camera_pane_g2

0x2fe7,	// (0x00040374) main_camera_pane_g3

0x2ff3,	// (0x00040380) main_camera_pane_g4

0x2fff,	// (0x0004038c) main_camera_pane_g5

0x300b,	// (0x00040398) main_camera_pane_g6

0x3017,	// (0x000403a4) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0004c597) main_camera_pane_g

0x3023,	// (0x000403b0) main_camera_pane_t1

0x3035,	// (0x000403c2) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0004c5a8) main_camera_pane_t

0x3056,	// (0x000403e3) cams_zoom_pane_cp_ParamLimits

0x3056,	// (0x000403e3) cams_zoom_pane_cp

0x307a,	// (0x00040407) image_cif_pane_ParamLimits

0x307a,	// (0x00040407) image_cif_pane

0x3098,	// (0x00040425) image_subqcif_pane

0x30a0,	// (0x0004042d) main_video_pane_g1_ParamLimits

0x30a0,	// (0x0004042d) main_video_pane_g1

0x30c0,	// (0x0004044d) main_video_pane_g2_ParamLimits

0x30c0,	// (0x0004044d) main_video_pane_g2

0x30f0,	// (0x0004047d) main_video_pane_g3_ParamLimits

0x30f0,	// (0x0004047d) main_video_pane_g3

0x3119,	// (0x000404a6) main_video_pane_g4_ParamLimits

0x3119,	// (0x000404a6) main_video_pane_g4

0x3142,	// (0x000404cf) main_video_pane_g5_ParamLimits

0x3142,	// (0x000404cf) main_video_pane_g5

0xa9ac,	// (0x00047d39) main_video_pane_g6_ParamLimits

0xa9ac,	// (0x00047d39) main_video_pane_g6

0x0006,

0xf220,	// (0x0004c5ad) main_video_pane_g_ParamLimits

0xf220,	// (0x0004c5ad) main_video_pane_g

0x3164,	// (0x000404f1) main_video_pane_t1_ParamLimits

0x3164,	// (0x000404f1) main_video_pane_t1

0xa9c6,	// (0x00047d53) cams_zoom_pane_g1

0xa9cf,	// (0x00047d5c) cams_zoom_pane_g2

0xa9d8,	// (0x00047d65) cams_zoom_pane_g3

0xa9e1,	// (0x00047d6e) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0004c5bc) cams_zoom_pane_g

0x31ae,	// (0x0004053b) grid_cams_pane

0x31bc,	// (0x00040549) linegrid_cams_pane

0x31ca,	// (0x00040557) cell_cams_pane_ParamLimits

0x31ca,	// (0x00040557) cell_cams_pane

0xa9ea,	// (0x00047d77) cams_burst_image_pane

0xa9f2,	// (0x00047d7f) cell_cams_pane_g1

0xa47f,	// (0x0004780c) grid_highlight_pane_cp03

0xa816,	// (0x00047ba3) mp_bg_pane_g1

0xa47f,	// (0x0004780c) bg_list_pane_cp03

0xc769,	// (0x00049af6) bg_mp_pane

0xc771,	// (0x00049afe) grid_mp_pane

0xc779,	// (0x00049b06) media_player_g1

0xc781,	// (0x00049b0e) media_player_t1

0xc78f,	// (0x00049b1c) media_player_t2

0xc79d,	// (0x00049b2a) media_player_t3

0xc7ab,	// (0x00049b38) media_player_t4

0xc7b9,	// (0x00049b46) media_player_t5

0xc7c7,	// (0x00049b54) media_player_t6

0xc7d5,	// (0x00049b62) media_player_t7

0x0006,

0xf5de,	// (0x0004c96b) media_player_t

0xc7e3,	// (0x00049b70) wait_bar_pane_cp02

0xf5c3,	// (0x0004c950) main_usb_pane_t

0x532a,	// (0x000426b7) cell_mp_pane

0xa816,	// (0x00047ba3) cell_mp_pane_g1

0xa47f,	// (0x0004780c) grid_highlight_pane_cp06

0xa9fa,	// (0x00047d87) grid_skin_colour_pane

0xaa02,	// (0x00047d8f) list_highlight_pane_cp03

0x31dd,	// (0x0004056a) skin_g1

0xaa0a,	// (0x00047d97) skin_t1

0xaa19,	// (0x00047da6) skin_t2

0x0001,

0xf264,	// (0x0004c5f1) skin_t

0x31e7,	// (0x00040574) cell_skin_colour_pane_ParamLimits

0x31e7,	// (0x00040574) cell_skin_colour_pane

0xaa27,	// (0x00047db4) cell_skin_colour_pane_g1

0x326b,	// (0x000405f8) call_video_g1_ParamLimits

0x326b,	// (0x000405f8) call_video_g1

0x327b,	// (0x00040608) call_video_g2_ParamLimits

0x327b,	// (0x00040608) call_video_g2

0x0001,

0xf269,	// (0x0004c5f6) call_video_g_ParamLimits

0xf269,	// (0x0004c5f6) call_video_g

0x32d5,	// (0x00040662) call_video_uplink_pane_cp1_ParamLimits

0x32d5,	// (0x00040662) call_video_uplink_pane_cp1

0xaa39,	// (0x00047dc6) call_video_uplink_pane_cp2

0x33a1,	// (0x0004072e) video_down_crop_pane_ParamLimits

0x33a1,	// (0x0004072e) video_down_crop_pane

0x3493,	// (0x00040820) video_down_pane_ParamLimits

0x3493,	// (0x00040820) video_down_pane

0xaa41,	// (0x00047dce) video_down_subqcif_pane_ParamLimits

0xaa41,	// (0x00047dce) video_down_subqcif_pane

0xaa59,	// (0x00047de6) video_down_subqcif_pane_cp_ParamLimits

0xaa59,	// (0x00047de6) video_down_subqcif_pane_cp

0xaa7f,	// (0x00047e0c) im_reading_pane_ParamLimits

0xaa7f,	// (0x00047e0c) im_reading_pane

0x35b3,	// (0x00040940) im_writing_pane_ParamLimits

0x35b3,	// (0x00040940) im_writing_pane

0x35d1,	// (0x0004095e) im_reading_pane_t1

0xaa99,	// (0x00047e26) list_im_pane

0xaaaa,	// (0x00047e37) scroll_pane_cp07

0x3629,	// (0x000409b6) im_writing_pane_t1_ParamLimits

0x3629,	// (0x000409b6) im_writing_pane_t1

0xaac3,	// (0x00047e50) im_writing_pane_t2_ParamLimits

0xaac3,	// (0x00047e50) im_writing_pane_t2

0x0001,

0xf273,	// (0x0004c600) im_writing_pane_t_ParamLimits

0xf273,	// (0x0004c600) im_writing_pane_t

0xa47f,	// (0x0004780c) input_focus_pane_cp04

0xa47f,	// (0x0004780c) input_focus_pane_cp05

0x363b,	// (0x000409c8) list_im_single_pane_ParamLimits

0x363b,	// (0x000409c8) list_im_single_pane

0x3662,	// (0x000409ef) list_single_im_pane_t1

0x52ee,	// (0x0004267b) blid_accuracy_pane

0x52f6,	// (0x00042683) blid_compass_pane

0x5300,	// (0x0004268d) main_location_t1

0x530e,	// (0x0004269b) main_location_t2

0x531c,	// (0x000426a9) main_location_t3

0x0002,

0xf5ed,	// (0x0004c97a) main_location_t

0xa47f,	// (0x0004780c) aid_levels_location

0xa816,	// (0x00047ba3) blid_accuracy_pane_g1

0xa816,	// (0x00047ba3) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0004c662) blid_accuracy_pane_g

0xab0b,	// (0x00047e98) wml_content_pane

0xab49,	// (0x00047ed6) wml_button_pane_ParamLimits

0xab49,	// (0x00047ed6) wml_button_pane

0x3671,	// (0x000409fe) wml_list_single_large_pane_ParamLimits

0x3671,	// (0x000409fe) wml_list_single_large_pane

0x369c,	// (0x00040a29) wml_list_single_medium_pane_ParamLimits

0x369c,	// (0x00040a29) wml_list_single_medium_pane

0x36ce,	// (0x00040a5b) wml_list_single_small_pane_ParamLimits

0x36ce,	// (0x00040a5b) wml_list_single_small_pane

0xab5d,	// (0x00047eea) wml_selection_box_pane_ParamLimits

0xab5d,	// (0x00047eea) wml_selection_box_pane

0xab70,	// (0x00047efd) wml_list_single_pane_t1

0xab7f,	// (0x00047f0c) wml_list_single_medium_pane_t1

0xab8e,	// (0x00047f1b) wml_list_single_large_pane_t1

0xab9d,	// (0x00047f2a) input_focus_pane_cp02_ParamLimits

0xab9d,	// (0x00047f2a) input_focus_pane_cp02

0xabb0,	// (0x00047f3d) wml_selection_box_pane_g1

0xabb9,	// (0x00047f46) wml_selection_box_pane_t1_ParamLimits

0xabb9,	// (0x00047f46) wml_selection_box_pane_t1

0xa6f0,	// (0x00047a7d) bg_wml_button_pane_ParamLimits

0xa6f0,	// (0x00047a7d) bg_wml_button_pane

0xabd1,	// (0x00047f5e) wml_button_pane_g1

0xabd9,	// (0x00047f66) wml_button_pane_t1

0xabd1,	// (0x00047f5e) wml_button_bg_pane_g1

0xabe9,	// (0x00047f76) wml_button_bg_pane_g2

0xabf1,	// (0x00047f7e) wml_button_bg_pane_g3

0xabf9,	// (0x00047f86) wml_button_bg_pane_g4

0xac01,	// (0x00047f8e) wml_button_bg_pane_g5

0xac09,	// (0x00047f96) wml_button_bg_pane_g6

0xac11,	// (0x00047f9e) wml_button_bg_pane_g7

0xac19,	// (0x00047fa6) wml_button_bg_pane_g8

0xac21,	// (0x00047fae) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0004c605) wml_button_bg_pane_g

0x370b,	// (0x00040a98) bg_list_pane_cp02

0xac29,	// (0x00047fb6) mce_header_pane_ParamLimits

0xac29,	// (0x00047fb6) mce_header_pane

0xac3f,	// (0x00047fcc) mce_icon_pane

0xac3f,	// (0x00047fcc) mce_image_pane

0xac48,	// (0x00047fd5) mce_text_pane_ParamLimits

0xac48,	// (0x00047fd5) mce_text_pane

0x3715,	// (0x00040aa2) scroll_pane_cp03

0xab41,	// (0x00047ece) scroll_pane_cp04

0xac5b,	// (0x00047fe8) scroll_pane_cp05_ParamLimits

0xac5b,	// (0x00047fe8) scroll_pane_cp05

0x371f,	// (0x00040aac) mce_header_field_pane_ParamLimits

0x371f,	// (0x00040aac) mce_header_field_pane

0x373f,	// (0x00040acc) mce_header_field_pane_2_ParamLimits

0x373f,	// (0x00040acc) mce_header_field_pane_2

0x3755,	// (0x00040ae2) mce_header_field_pane_3

0x375d,	// (0x00040aea) list_single_mce_message_pane_ParamLimits

0x375d,	// (0x00040aea) list_single_mce_message_pane

0x378b,	// (0x00040b18) list_single_mce_smart_pane_ParamLimits

0x378b,	// (0x00040b18) list_single_mce_smart_pane

0xac67,	// (0x00047ff4) input_focus_pane_cp03

0xac70,	// (0x00047ffd) list_header_data_pane

0x37c4,	// (0x00040b51) mce_header_field_pane_t1

0x37d2,	// (0x00040b5f) list_single_mce_header_pane_ParamLimits

0x37d2,	// (0x00040b5f) list_single_mce_header_pane

0xac78,	// (0x00048005) list_single_mce_header_pane_t1

0xac87,	// (0x00048014) list_single_mce_message_pane_g1

0xac8f,	// (0x0004801c) list_single_mce_message_pane_t1

0x3828,	// (0x00040bb5) bg_cale_heading_pane_cp01_ParamLimits

0x3828,	// (0x00040bb5) bg_cale_heading_pane_cp01

0xac9d,	// (0x0004802a) bg_cale_pane_cp02_ParamLimits

0xac9d,	// (0x0004802a) bg_cale_pane_cp02

0x386b,	// (0x00040bf8) cale_month_corner_pane

0x3885,	// (0x00040c12) cale_month_day_heading_pane_ParamLimits

0x3885,	// (0x00040c12) cale_month_day_heading_pane

0x38e0,	// (0x00040c6d) cale_month_pane_g1_ParamLimits

0x38e0,	// (0x00040c6d) cale_month_pane_g1

0x3918,	// (0x00040ca5) cale_month_pane_g2_ParamLimits

0x3918,	// (0x00040ca5) cale_month_pane_g2

0x3943,	// (0x00040cd0) cale_month_pane_g3_ParamLimits

0x3943,	// (0x00040cd0) cale_month_pane_g3

0x3993,	// (0x00040d20) cale_month_pane_g4_ParamLimits

0x3993,	// (0x00040d20) cale_month_pane_g4

0x39e3,	// (0x00040d70) cale_month_pane_g5_ParamLimits

0x39e3,	// (0x00040d70) cale_month_pane_g5

0x3a33,	// (0x00040dc0) cale_month_pane_g6_ParamLimits

0x3a33,	// (0x00040dc0) cale_month_pane_g6

0x3a83,	// (0x00040e10) cale_month_pane_g7_ParamLimits

0x3a83,	// (0x00040e10) cale_month_pane_g7

0x3aeb,	// (0x00040e78) cale_month_pane_g8_ParamLimits

0x3aeb,	// (0x00040e78) cale_month_pane_g8

0x3b53,	// (0x00040ee0) cale_month_pane_g9_ParamLimits

0x3b53,	// (0x00040ee0) cale_month_pane_g9

0x3bb1,	// (0x00040f3e) cale_month_pane_g10_ParamLimits

0x3bb1,	// (0x00040f3e) cale_month_pane_g10

0x3c0f,	// (0x00040f9c) cale_month_pane_g11_ParamLimits

0x3c0f,	// (0x00040f9c) cale_month_pane_g11

0x3c63,	// (0x00040ff0) cale_month_pane_g12_ParamLimits

0x3c63,	// (0x00040ff0) cale_month_pane_g12

0x3cb9,	// (0x00041046) cale_month_pane_g13_ParamLimits

0x3cb9,	// (0x00041046) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0004c618) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0004c618) cale_month_pane_g

0x3d0f,	// (0x0004109c) cale_month_week_pane

0x3d24,	// (0x000410b1) grid_cale_month_pane_ParamLimits

0x3d24,	// (0x000410b1) grid_cale_month_pane

0x3d76,	// (0x00041103) cale_month_day_heading_pane_t1

0x3dfc,	// (0x00041189) cale_month_day_heading_pane_t2

0x3e8d,	// (0x0004121a) cale_month_day_heading_pane_t3

0x3f1e,	// (0x000412ab) cale_month_day_heading_pane_t4

0x3faf,	// (0x0004133c) cale_month_day_heading_pane_t5

0x4040,	// (0x000413cd) cale_month_day_heading_pane_t6

0x40dd,	// (0x0004146a) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0004c633) cale_month_day_heading_pane_t

0xa93d,	// (0x00047cca) bg_cale_side_pane_cp01

0x4186,	// (0x00041513) cale_month_week_pane_t1

0x419f,	// (0x0004152c) cale_month_week_pane_t2

0x41b8,	// (0x00041545) cale_month_week_pane_t3

0x41d1,	// (0x0004155e) cale_month_week_pane_t4

0x41ec,	// (0x00041579) cale_month_week_pane_t5

0x420d,	// (0x0004159a) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0004c642) cale_month_week_pane_t

0x422e,	// (0x000415bb) cell_cale_month_pane_ParamLimits

0x422e,	// (0x000415bb) cell_cale_month_pane

0x4354,	// (0x000416e1) cell_cale_month_pane_g1

0x437a,	// (0x00041707) cell_cale_month_pane_t1_ParamLimits

0x437a,	// (0x00041707) cell_cale_month_pane_t1

0xa94b,	// (0x00047cd8) grid_highlight_pane_cp08

0xa816,	// (0x00047ba3) main_smil_g1

0x43a6,	// (0x00041733) smil_status_pane

0xacdc,	// (0x00048069) smil_text_pane

0xc649,	// (0x000499d6) bg_popup_call3_rect_pane_g8

0xc651,	// (0x000499de) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0004c8fb) bg_popup_call3_rect_pane_g

0xc8d8,	// (0x00049c65) smil_status_volume_pane_g1

0xace6,	// (0x00048073) smil_status_pane_t1

0x5717,	// (0x00042aa4) volume_smil_pane

0xacfd,	// (0x0004808a) list_smil_text_pane

0x43b9,	// (0x00041746) scroll_pane_cp011

0x43c4,	// (0x00041751) smil_text_list_pane_t1_ParamLimits

0x43c4,	// (0x00041751) smil_text_list_pane_t1

0x4451,	// (0x000417de) aid_volume_smil_ParamLimits

0x4451,	// (0x000417de) aid_volume_smil

0xa816,	// (0x00047ba3) smil_volume_pane_g1

0xa816,	// (0x00047ba3) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0004c662) smil_volume_pane_g

0x29d0,	// (0x0003fd5d) listscroll_cale_day_pane

0xad07,	// (0x00048094) bg_cale_pane

0xad1f,	// (0x000480ac) list_cale_pane

0xad6e,	// (0x000480fb) scroll_pane_cp09

0xad7f,	// (0x0004810c) cale_bg_pane_g1

0xad87,	// (0x00048114) cale_bg_pane_g2

0xad8f,	// (0x0004811c) cale_bg_pane_g3

0xad97,	// (0x00048124) cale_bg_pane_g4

0xad9f,	// (0x0004812c) cale_bg_pane_g5

0xada7,	// (0x00048134) cale_bg_pane_g6

0xadaf,	// (0x0004813c) cale_bg_pane_g7

0xadb7,	// (0x00048144) cale_bg_pane_g8

0xadbf,	// (0x0004814c) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0004c667) cale_bg_pane_g

0x447b,	// (0x00041808) list_cale_time_pane_ParamLimits

0x447b,	// (0x00041808) list_cale_time_pane

0xadc7,	// (0x00048154) list_cale_time_pane_g1_ParamLimits

0xadc7,	// (0x00048154) list_cale_time_pane_g1

0xadd3,	// (0x00048160) list_cale_time_pane_g2_ParamLimits

0xadd3,	// (0x00048160) list_cale_time_pane_g2

0x44a3,	// (0x00041830) list_cale_time_pane_g3_ParamLimits

0x44a3,	// (0x00041830) list_cale_time_pane_g3

0x44b1,	// (0x0004183e) list_cale_time_pane_g4_ParamLimits

0x44b1,	// (0x0004183e) list_cale_time_pane_g4

0x44bf,	// (0x0004184c) list_cale_time_pane_g5_ParamLimits

0x44bf,	// (0x0004184c) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0004c67a) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0004c67a) list_cale_time_pane_g

0xaded,	// (0x0004817a) list_cale_time_pane_t1_ParamLimits

0xaded,	// (0x0004817a) list_cale_time_pane_t1

0xae15,	// (0x000481a2) list_cale_time_pane_t2_ParamLimits

0xae15,	// (0x000481a2) list_cale_time_pane_t2

0x479e,	// (0x00041b2b) aid_blid_cardinal_pane

0x47e0,	// (0x00041b6d) compass_pane_t4

0xae3d,	// (0x000481ca) list_cale_time_pane_t4_ParamLimits

0xae3d,	// (0x000481ca) list_cale_time_pane_t4

0x47ee,	// (0x00041b7b) compass_pane_t5

0x47fe,	// (0x00041b8b) compass_pane_t6

0x480c,	// (0x00041b99) compass_pane_t7

0xb2b5,	// (0x00048642) navi_pane_cc_t1

0xb4ac,	// (0x00048839) aid_phob_thumbnail_center_pane

0x4def,	// (0x0004217c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0004c687) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0004c687) list_cale_time_pane_t

0xa0d6,	// (0x00047463) bg_popup_window_pane_cp02_ParamLimits

0xa0d6,	// (0x00047463) bg_popup_window_pane_cp02

0xae65,	// (0x000481f2) heading_pane_cp01_ParamLimits

0xae65,	// (0x000481f2) heading_pane_cp01

0xae71,	// (0x000481fe) loc_req_pane_ParamLimits

0xae71,	// (0x000481fe) loc_req_pane

0xae81,	// (0x0004820e) loc_type_pane_ParamLimits

0xae81,	// (0x0004820e) loc_type_pane

0xae93,	// (0x00048220) loc_type_pane_t1_ParamLimits

0xae93,	// (0x00048220) loc_type_pane_t1

0xaea5,	// (0x00048232) loc_type_pane_t2_ParamLimits

0xaea5,	// (0x00048232) loc_type_pane_t2

0xaeb7,	// (0x00048244) loc_type_pane_t3_ParamLimits

0xaeb7,	// (0x00048244) loc_type_pane_t3

0x0002,

0xf301,	// (0x0004c68e) loc_type_pane_t_ParamLimits

0xf301,	// (0x0004c68e) loc_type_pane_t

0xaec9,	// (0x00048256) list_loc_req_pane

0xaed3,	// (0x00048260) scroll_pane_cp012

0x0ea5,	// (0x0003e232) list_single_loc_request_popup_menu_pane_ParamLimits

0x0ea5,	// (0x0003e232) list_single_loc_request_popup_menu_pane

0xaede,	// (0x0004826b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaede,	// (0x0004826b) list_single_loc_request_popup_menu_pane_g1

0xaeea,	// (0x00048277) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaeea,	// (0x00048277) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0004c695) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0004c695) list_single_loc_request_popup_menu_pane_g

0xaef6,	// (0x00048283) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaef6,	// (0x00048283) list_single_loc_request_popup_menu_pane_t1

0x44cd,	// (0x0004185a) bg_popup_window_pane_cp03_ParamLimits

0x44cd,	// (0x0004185a) bg_popup_window_pane_cp03

0x44db,	// (0x00041868) heading_loc_req_pane_ParamLimits

0x44db,	// (0x00041868) heading_loc_req_pane

0x44e7,	// (0x00041874) popup_dyc_status_message_window_g1_ParamLimits

0x44e7,	// (0x00041874) popup_dyc_status_message_window_g1

0x44f3,	// (0x00041880) popup_dyc_status_message_window_t1_ParamLimits

0x44f3,	// (0x00041880) popup_dyc_status_message_window_t1

0x4505,	// (0x00041892) popup_dyc_status_message_window_t2_ParamLimits

0x4505,	// (0x00041892) popup_dyc_status_message_window_t2

0x4517,	// (0x000418a4) popup_dyc_status_message_window_t3_ParamLimits

0x4517,	// (0x000418a4) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0004c69a) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0004c69a) popup_dyc_status_message_window_t

0xa47f,	// (0x0004780c) bg_heading_pane_cp01

0xaf0c,	// (0x00048299) heading_loc_req_pane_g1

0xaf14,	// (0x000482a1) heading_loc_req_pane_g2

0xaf1c,	// (0x000482a9) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0004c6a1) heading_loc_req_pane_g

0xaf24,	// (0x000482b1) heading_loc_req_pane_t1

0xaf33,	// (0x000482c0) bg_popup_sub_pane_cp01_ParamLimits

0xaf33,	// (0x000482c0) bg_popup_sub_pane_cp01

0xaf41,	// (0x000482ce) popup_cale_events_window_g1_ParamLimits

0xaf41,	// (0x000482ce) popup_cale_events_window_g1

0xaf61,	// (0x000482ee) popup_cale_events_window_g2_ParamLimits

0xaf61,	// (0x000482ee) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0004c6d5) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0004c6d5) popup_cale_events_window_g

0xaf81,	// (0x0004830e) popup_cale_events_window_t1_ParamLimits

0xaf81,	// (0x0004830e) popup_cale_events_window_t1

0xaf93,	// (0x00048320) popup_cale_events_window_t2_ParamLimits

0xaf93,	// (0x00048320) popup_cale_events_window_t2

0xafd1,	// (0x0004835e) popup_cale_events_window_t3_ParamLimits

0xafd1,	// (0x0004835e) popup_cale_events_window_t3

0xb00b,	// (0x00048398) popup_cale_events_window_t4_ParamLimits

0xb00b,	// (0x00048398) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0004c6da) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0004c6da) popup_cale_events_window_t

0x4541,	// (0x000418ce) call_type_pane

0xb3e7,	// (0x00048774) popup_call_status_window_g1

0x454d,	// (0x000418da) popup_call_status_window_g2

0x4559,	// (0x000418e6) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0004c6e3) popup_call_status_window_g

0xb041,	// (0x000483ce) call_type_pane_g1

0xb04a,	// (0x000483d7) call_type_pane_g2

0x0001,

0xf35d,	// (0x0004c6ea) call_type_pane_g

0xa47f,	// (0x0004780c) bg_popup_sub_pane_cp02

0xb053,	// (0x000483e0) listscroll_popup_wml_pane

0xb05b,	// (0x000483e8) list_wml_pane

0xb065,	// (0x000483f2) scroll_pane_cp013

0xb070,	// (0x000483fd) list_single_graphic_popup_wml_pane_ParamLimits

0xb070,	// (0x000483fd) list_single_graphic_popup_wml_pane

0xa816,	// (0x00047ba3) list_single_graphic_popup_wml_pane_g1

0xb084,	// (0x00048411) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0004c6ef) list_single_graphic_popup_wml_pane_g

0xb08c,	// (0x00048419) list_single_graphic_popup_wml_pane_t1

0xb0a2,	// (0x0004842f) aid_call_pane

0xa6d2,	// (0x00047a5f) popup_clock_analogue_window_g1

0xa6d2,	// (0x00047a5f) popup_clock_analogue_window_g2

0x4565,	// (0x000418f2) popup_clock_analogue_window_g3

0x4565,	// (0x000418f2) popup_clock_analogue_window_g4

0xa816,	// (0x00047ba3) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0004c6f4) popup_clock_analogue_window_g

0x456d,	// (0x000418fa) popup_clock_analogue_window_t1

0x457b,	// (0x00041908) clock_digital_number_pane_ParamLimits

0x457b,	// (0x00041908) clock_digital_number_pane

0x4587,	// (0x00041914) clock_digital_number_pane_cp02_ParamLimits

0x4587,	// (0x00041914) clock_digital_number_pane_cp02

0x4593,	// (0x00041920) clock_digital_number_pane_cp03_ParamLimits

0x4593,	// (0x00041920) clock_digital_number_pane_cp03

0x459f,	// (0x0004192c) clock_digital_number_pane_cp04_ParamLimits

0x459f,	// (0x0004192c) clock_digital_number_pane_cp04

0x45ab,	// (0x00041938) clock_digital_separator_pane_ParamLimits

0x45ab,	// (0x00041938) clock_digital_separator_pane

0x45b7,	// (0x00041944) popup_clock_digital_window_t1

0xa816,	// (0x00047ba3) clock_digital_number_pane_g1

0xa816,	// (0x00047ba3) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0004c662) clock_digital_number_pane_g

0xa816,	// (0x00047ba3) clock_digital_separator_pane_g1

0xa816,	// (0x00047ba3) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0004c662) clock_digital_separator_pane_g

0xa47f,	// (0x0004780c) bg_popup_window_pane_cp04

0xb0aa,	// (0x00048437) heading_pane_cp03

0xb0b2,	// (0x0004843f) listscroll_popup_gms_pane

0xb0ba,	// (0x00048447) grid_large_graphic_popup_pane

0xb0c4,	// (0x00048451) listscroll_popup_gms_pane_g1

0xb0cc,	// (0x00048459) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0004c6ff) listscroll_popup_gms_pane_g

0xab41,	// (0x00047ece) scroll_pane_cp014

0x45d4,	// (0x00041961) cell_large_graphic_popup_pane_ParamLimits

0x45d4,	// (0x00041961) cell_large_graphic_popup_pane

0x45ec,	// (0x00041979) cell_large_graphic_popup_pane_g1_ParamLimits

0x45ec,	// (0x00041979) cell_large_graphic_popup_pane_g1

0xb0d4,	// (0x00048461) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0d4,	// (0x00048461) cell_large_graphic_popup_pane_g2

0xb0e0,	// (0x0004846d) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0e0,	// (0x0004846d) cell_large_graphic_popup_pane_g3

0xb0ed,	// (0x0004847a) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0ed,	// (0x0004847a) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0004c704) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0004c704) cell_large_graphic_popup_pane_g

0xb0fd,	// (0x0004848a) grid_highlight_pane_cp010

0xa816,	// (0x00047ba3) bg_popup_call_pane_g1

0xb107,	// (0x00048494) list_single_graphic_popup_conf_pane_ParamLimits

0xb107,	// (0x00048494) list_single_graphic_popup_conf_pane

0xb11a,	// (0x000484a7) list_highlight_pane_cp01

0xb123,	// (0x000484b0) list_single_graphic_popup_conf_pane_g1

0xb12b,	// (0x000484b8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0004c70d) list_single_graphic_popup_conf_pane_g

0xb133,	// (0x000484c0) list_single_graphic_popup_conf_pane_t1

0xb141,	// (0x000484ce) linegrid_cams_pane_g1

0x45f8,	// (0x00041985) linegrid_cams_pane_g2

0xa97e,	// (0x00047d0b) linegrid_cams_pane_g3

0xb14a,	// (0x000484d7) linegrid_cams_pane_g4

0x4601,	// (0x0004198e) linegrid_cams_pane_g5

0x460a,	// (0x00041997) linegrid_cams_pane_g6

0xa987,	// (0x00047d14) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0004c712) linegrid_cams_pane_g

0xb153,	// (0x000484e0) popup_clock_analogue_window

0xb153,	// (0x000484e0) popup_clock_digital_window

0xa47f,	// (0x0004780c) popup_phob_thumbnail_window

0xa816,	// (0x00047ba3) call_video_uplink_pane_g1

0xb15c,	// (0x000484e9) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0004c721) call_video_uplink_pane_g

0xb164,	// (0x000484f1) video_uplink_pane

0xb16c,	// (0x000484f9) mce_image_pane_g1

0x4613,	// (0x000419a0) mce_image_pane_g2

0x461b,	// (0x000419a8) mce_image_pane_g3

0x4623,	// (0x000419b0) mce_image_pane_g4

0x462b,	// (0x000419b8) mce_image_pane_g5

0x0004,

0xf399,	// (0x0004c726) mce_image_pane_g

0xb176,	// (0x00048503) control_top_pane_stacon_cp01_ParamLimits

0xb176,	// (0x00048503) control_top_pane_stacon_cp01

0xb18a,	// (0x00048517) uni_indicator_pane_stacon_cp01_ParamLimits

0xb18a,	// (0x00048517) uni_indicator_pane_stacon_cp01

0xb19b,	// (0x00048528) bg_popup_sub_pane_cp03

0x4633,	// (0x000419c0) chi_dic_find_pane

0x463b,	// (0x000419c8) listscroll_chi_dic_pane

0x4644,	// (0x000419d1) main_pane_chidic_g1

0x4657,	// (0x000419e4) chi_dic_find_pane_t1

0xb1a5,	// (0x00048532) find_chidic_pane

0xb1ae,	// (0x0004853b) chi_dic_list_pane_ParamLimits

0xb1ae,	// (0x0004853b) chi_dic_list_pane

0xb1bf,	// (0x0004854c) scroll_pane_cp020

0x4665,	// (0x000419f2) find_chidic_pane_t1

0xa47f,	// (0x0004780c) input_focus_pane_cp06

0x4674,	// (0x00041a01) list_chi_dic_pane_ParamLimits

0x4674,	// (0x00041a01) list_chi_dic_pane

0x4691,	// (0x00041a1e) list_chi_dic_pane_t1_ParamLimits

0x4691,	// (0x00041a1e) list_chi_dic_pane_t1

0xa47f,	// (0x0004780c) list_highlight_pane_cp020

0xb1c7,	// (0x00048554) bg_cale_heading_pane_g1

0x46a4,	// (0x00041a31) bg_cale_heading_pane_g2

0x46ac,	// (0x00041a39) bg_cale_heading_pane_g3

0x46b4,	// (0x00041a41) bg_cale_heading_pane_g4

0x46be,	// (0x00041a4b) bg_cale_heading_pane_g5

0x46c8,	// (0x00041a55) bg_cale_heading_pane_g6

0x46d0,	// (0x00041a5d) bg_cale_heading_pane_g7

0x46d8,	// (0x00041a65) bg_cale_heading_pane_g8

0x46e2,	// (0x00041a6f) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0004c731) bg_cale_heading_pane_g

0xb1c7,	// (0x00048554) bg_cale_side_pane_g1

0x46ec,	// (0x00041a79) bg_cale_side_pane_g2

0x46f6,	// (0x00041a83) bg_cale_side_pane_g3

0x4700,	// (0x00041a8d) bg_cale_side_pane_g4

0x470a,	// (0x00041a97) bg_cale_side_pane_g5

0x4714,	// (0x00041aa1) bg_cale_side_pane_g6

0x471e,	// (0x00041aab) bg_cale_side_pane_g7

0x4728,	// (0x00041ab5) bg_cale_side_pane_g8

0x4730,	// (0x00041abd) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0004c744) bg_cale_side_pane_g

0x4738,	// (0x00041ac5) popup_call_status_window_ParamLimits

0x4738,	// (0x00041ac5) popup_call_status_window

0xb1cf,	// (0x0004855c) stacon_top_pane

0xb1d7,	// (0x00048564) status_pane_ParamLimits

0xb1d7,	// (0x00048564) status_pane

0xb1ec,	// (0x00048579) status_small_pane

0xb1f4,	// (0x00048581) control_pane

0xa47f,	// (0x0004780c) stacon_bottom_pane

0xb1fc,	// (0x00048589) list_single_mce_smart_pane_t1_ParamLimits

0xb1fc,	// (0x00048589) list_single_mce_smart_pane_t1

0xb20f,	// (0x0004859c) list_single_mce_smart_pane_t2_ParamLimits

0xb20f,	// (0x0004859c) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0004c757) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0004c757) list_single_mce_smart_pane_t

0x4744,	// (0x00041ad1) compass_pane

0x4750,	// (0x00041add) main_location2_pane_t1

0x4764,	// (0x00041af1) main_location2_pane_t2

0x4778,	// (0x00041b05) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0004c75c) main_location2_pane_t

0xb22e,	// (0x000485bb) compass_pane_g1_ParamLimits

0xb22e,	// (0x000485bb) compass_pane_g1

0x47c2,	// (0x00041b4f) compass_pane_t1

0x47d1,	// (0x00041b5e) compass_pane_t2

0x0005,

0xf3d8,	// (0x0004c765) compass_pane_t

0x481c,	// (0x00041ba9) text_secondary_cp61

0xb2ac,	// (0x00048639) navi_pane_cams_g5

0xb328,	// (0x000486b5) navi_pane_im_t1

0xb336,	// (0x000486c3) navi_pane_mp_g1_ParamLimits

0xb336,	// (0x000486c3) navi_pane_mp_g1

0xb34a,	// (0x000486d7) navi_pane_mp_g2_ParamLimits

0xb34a,	// (0x000486d7) navi_pane_mp_g2

0xb356,	// (0x000486e3) navi_pane_mp_g3_ParamLimits

0xb356,	// (0x000486e3) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0004c779) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0004c779) navi_pane_mp_g

0xb362,	// (0x000486ef) navi_pane_mp_t1

0xb370,	// (0x000486fd) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0004c780) navi_pane_mp_t

0xb3f5,	// (0x00048782) navi_pane_vt_g1

0xb362,	// (0x000486ef) navi_pane_vt_t1

0xb3fd,	// (0x0004878a) navi_slider_pane

0xa998,	// (0x00047d25) zooming_pane

0xb40d,	// (0x0004879a) navi_slider_pane_g1

0x4857,	// (0x00041be4) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0004c787) navi_slider_pane_g

0xb431,	// (0x000487be) aid_levels_zoom

0xb439,	// (0x000487c6) zooming_pane_g1

0xb441,	// (0x000487ce) zooming_pane_g2

0xb441,	// (0x000487ce) zooming_pane_g3

0x0002,

0xf409,	// (0x0004c796) zooming_pane_g

0xb449,	// (0x000487d6) level_10_zoom

0xb452,	// (0x000487df) level_11_zoom

0xb45b,	// (0x000487e8) level_1_zoom

0xb464,	// (0x000487f1) level_2_zoom

0xb46d,	// (0x000487fa) level_3_zoom

0xb476,	// (0x00048803) level_4_zoom

0xb47f,	// (0x0004880c) level_5_zoom

0xb488,	// (0x00048815) level_6_zoom

0xb491,	// (0x0004881e) level_7_zoom

0xb49a,	// (0x00048827) level_8_zoom

0xb4a3,	// (0x00048830) level_9_zoom

0xb4b4,	// (0x00048841) popup_phob_thumbnail_window_g1

0xb4bc,	// (0x00048849) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0004c79d) popup_phob_thumbnail_window_g

0xc7eb,	// (0x00049b78) level_1_location

0xc7f3,	// (0x00049b80) level_2_location

0xc7fb,	// (0x00049b88) level_3_location

0xc803,	// (0x00049b90) level_4_location

0xa998,	// (0x00047d25) level_5_location

0x4869,	// (0x00041bf6) mce_icon_pane_g1

0x4871,	// (0x00041bfe) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0004c7a2) mce_icon_pane_g

0x4879,	// (0x00041c06) main_mup_pane_g1_ParamLimits

0x4879,	// (0x00041c06) main_mup_pane_g1

0x4891,	// (0x00041c1e) main_mup_pane_g2_ParamLimits

0x4891,	// (0x00041c1e) main_mup_pane_g2

0x48a5,	// (0x00041c32) main_mup_pane_g3_ParamLimits

0x48a5,	// (0x00041c32) main_mup_pane_g3

0x48b9,	// (0x00041c46) main_mup_pane_g4_ParamLimits

0x48b9,	// (0x00041c46) main_mup_pane_g4

0x48d5,	// (0x00041c62) main_mup_pane_g5_ParamLimits

0x48d5,	// (0x00041c62) main_mup_pane_g5

0x48f6,	// (0x00041c83) main_mup_pane_g6_ParamLimits

0x48f6,	// (0x00041c83) main_mup_pane_g6

0x4912,	// (0x00041c9f) main_mup_pane_g7_ParamLimits

0x4912,	// (0x00041c9f) main_mup_pane_g7

0x492e,	// (0x00041cbb) main_mup_pane_g8_ParamLimits

0x492e,	// (0x00041cbb) main_mup_pane_g8

0x494a,	// (0x00041cd7) main_mup_pane_g9_ParamLimits

0x494a,	// (0x00041cd7) main_mup_pane_g9

0x4969,	// (0x00041cf6) main_mup_pane_g10_ParamLimits

0x4969,	// (0x00041cf6) main_mup_pane_g10

0x4988,	// (0x00041d15) main_mup_pane_g11_ParamLimits

0x4988,	// (0x00041d15) main_mup_pane_g11

0x49a0,	// (0x00041d2d) main_mup_pane_g12_ParamLimits

0x49a0,	// (0x00041d2d) main_mup_pane_g12

0x49ae,	// (0x00041d3b) main_mup_pane_g13_ParamLimits

0x49ae,	// (0x00041d3b) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0004c7a7) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0004c7a7) main_mup_pane_g

0x49c4,	// (0x00041d51) main_mup_pane_t1_ParamLimits

0x49c4,	// (0x00041d51) main_mup_pane_t1

0x49e1,	// (0x00041d6e) main_mup_pane_t2_ParamLimits

0x49e1,	// (0x00041d6e) main_mup_pane_t2

0x49fb,	// (0x00041d88) main_mup_pane_t3_ParamLimits

0x49fb,	// (0x00041d88) main_mup_pane_t3

0x4a15,	// (0x00041da2) main_mup_pane_t4_ParamLimits

0x4a15,	// (0x00041da2) main_mup_pane_t4

0x4a27,	// (0x00041db4) main_mup_pane_t5_ParamLimits

0x4a27,	// (0x00041db4) main_mup_pane_t5

0x4a39,	// (0x00041dc6) main_mup_pane_t6_ParamLimits

0x4a39,	// (0x00041dc6) main_mup_pane_t6

0x0005,

0xf435,	// (0x0004c7c2) main_mup_pane_t_ParamLimits

0xf435,	// (0x0004c7c2) main_mup_pane_t

0x4a4f,	// (0x00041ddc) mup_progress_pane_ParamLimits

0x4a4f,	// (0x00041ddc) mup_progress_pane

0x4a5b,	// (0x00041de8) mup_visualizer_pane_ParamLimits

0x4a5b,	// (0x00041de8) mup_visualizer_pane

0x4a99,	// (0x00041e26) mup_volume_pane_ParamLimits

0x4a99,	// (0x00041e26) mup_volume_pane

0xb3e7,	// (0x00048774) mup_visualizer_pane_g1_ParamLimits

0xb3e7,	// (0x00048774) mup_visualizer_pane_g1

0xb3e7,	// (0x00048774) mup_visualizer_pane_g2_ParamLimits

0xb3e7,	// (0x00048774) mup_visualizer_pane_g2

0xb22e,	// (0x000485bb) mup_visualizer_pane_g3_ParamLimits

0xb22e,	// (0x000485bb) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0004c7cf) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0004c7cf) mup_visualizer_pane_g

0xa816,	// (0x00047ba3) mup_volume_pane_g1

0xb4cc,	// (0x00048859) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0004c7d6) mup_volume_pane_g

0xa816,	// (0x00047ba3) mup_progress_pane_g1

0xb4d5,	// (0x00048862) mup_progress_pane_g2

0xb4de,	// (0x0004886b) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0004c7db) mup_progress_pane_g

0xa47f,	// (0x0004780c) bg_popup_window_pane_cp05

0xb4e7,	// (0x00048874) heading_pane_cp02_ParamLimits

0xb4e7,	// (0x00048874) heading_pane_cp02

0xb501,	// (0x0004888e) list_popup_blid_pane

0xb509,	// (0x00048896) list_blid_sat_info_pane_ParamLimits

0xb509,	// (0x00048896) list_blid_sat_info_pane

0xb51c,	// (0x000488a9) list_blid_sat_info_pane_g1

0xb524,	// (0x000488b1) list_blid_sat_info_pane_t1

0x4ba4,	// (0x00041f31) mup_equalizer_pane_ParamLimits

0x4ba4,	// (0x00041f31) mup_equalizer_pane

0x4bc5,	// (0x00041f52) mup_equalizer_pane_cp1_ParamLimits

0x4bc5,	// (0x00041f52) mup_equalizer_pane_cp1

0x4be6,	// (0x00041f73) mup_equalizer_pane_cp2_ParamLimits

0x4be6,	// (0x00041f73) mup_equalizer_pane_cp2

0x4c07,	// (0x00041f94) mup_equalizer_pane_cp3_ParamLimits

0x4c07,	// (0x00041f94) mup_equalizer_pane_cp3

0x4c28,	// (0x00041fb5) mup_equalizer_pane_cp4_ParamLimits

0x4c28,	// (0x00041fb5) mup_equalizer_pane_cp4

0x4c49,	// (0x00041fd6) mup_equalizer_pane_cp5

0x4c5f,	// (0x00041fec) mup_equalizer_pane_cp6

0x4c77,	// (0x00042004) mup_equalizer_pane_cp7

0xc6c9,	// (0x00049a56) bg_popup_call_poc_act_pane_g9

0xc6d1,	// (0x00049a5e) bg_popup_call_poc_act_pane_g10

0xc6d9,	// (0x00049a66) bg_popup_call_poc_act_pane_g11

0x000a,

0xa6f0,	// (0x00047a7d) mup_scale_pane

0xa816,	// (0x00047ba3) mup_scale_pane_g1

0xb532,	// (0x000488bf) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0004c7f7) mup_scale_pane_g

0xb556,	// (0x000488e3) msg_data_pane

0xb55e,	// (0x000488eb) scroll_pane_cp017

0x0f8f,	// (0x0003e31c) bg_list_pane_cp04_ParamLimits

0x0f8f,	// (0x0003e31c) bg_list_pane_cp04

0xb566,	// (0x000488f3) msg_data_pane_g1

0x4ca1,	// (0x0004202e) msg_data_pane_g2

0x4ca9,	// (0x00042036) msg_data_pane_g3

0x4cb1,	// (0x0004203e) msg_data_pane_g4

0x4cb9,	// (0x00042046) msg_data_pane_g5

0x4cc1,	// (0x0004204e) msg_data_pane_g6

0x4cc9,	// (0x00042056) msg_data_pane_g7

0x0006,

0xf479,	// (0x0004c806) msg_data_pane_g

0x0faf,	// (0x0003e33c) msg_text_pane_ParamLimits

0x0faf,	// (0x0003e33c) msg_text_pane

0x4cd1,	// (0x0004205e) qrid_highlight_pane_cp011_ParamLimits

0x4cd1,	// (0x0004205e) qrid_highlight_pane_cp011

0xa47f,	// (0x0004780c) msg_body_pane

0xa47f,	// (0x0004780c) msg_header_pane

0xb577,	// (0x00048904) input_focus_pane_cp07

0x1001,	// (0x0003e38e) msg_header_pane_t1_ParamLimits

0x1001,	// (0x0003e38e) msg_header_pane_t1

0x1013,	// (0x0003e3a0) msg_header_pane_t2_ParamLimits

0x1013,	// (0x0003e3a0) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0004c81a) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0004c81a) msg_header_pane_t

0xb58c,	// (0x00048919) msg_body_pane_g1

0x1025,	// (0x0003e3b2) msg_body_pane_t1_ParamLimits

0x1025,	// (0x0003e3b2) msg_body_pane_t1

0x1056,	// (0x0003e3e3) msg_body_pane_t2_ParamLimits

0x1056,	// (0x0003e3e3) msg_body_pane_t2

0x1068,	// (0x0003e3f5) msg_body_pane_t3_ParamLimits

0x1068,	// (0x0003e3f5) msg_body_pane_t3

0x0002,

0xf492,	// (0x0004c81f) msg_body_pane_t_ParamLimits

0xf492,	// (0x0004c81f) msg_body_pane_t

0x4d3f,	// (0x000420cc) main_viewer_pane_g1_ParamLimits

0x4d3f,	// (0x000420cc) main_viewer_pane_g1

0x4d4b,	// (0x000420d8) main_viewer_pane_g2_ParamLimits

0x4d4b,	// (0x000420d8) main_viewer_pane_g2

0x4d57,	// (0x000420e4) main_viewer_pane_g3_ParamLimits

0x4d57,	// (0x000420e4) main_viewer_pane_g3

0x4d68,	// (0x000420f5) main_viewer_pane_g4_ParamLimits

0x4d68,	// (0x000420f5) main_viewer_pane_g4

0x4d79,	// (0x00042106) main_viewer_pane_g5_ParamLimits

0x4d79,	// (0x00042106) main_viewer_pane_g5

0x4d79,	// (0x00042106) main_viewer_pane_g7_ParamLimits

0x4d79,	// (0x00042106) main_viewer_pane_g7

0x4d8b,	// (0x00042118) main_viewer_pane_g8_ParamLimits

0x4d8b,	// (0x00042118) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0004c82f) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0004c82f) main_viewer_pane_g

0xb594,	// (0x00048921) viewer_content_pane_ParamLimits

0xb594,	// (0x00048921) viewer_content_pane

0x4dc3,	// (0x00042150) main_postcard_pane_g1_ParamLimits

0x4dc3,	// (0x00042150) main_postcard_pane_g1

0x4dd1,	// (0x0004215e) main_postcard_pane_g2_ParamLimits

0x4dd1,	// (0x0004215e) main_postcard_pane_g2

0x4ddf,	// (0x0004216c) main_postcard_pane_g3_ParamLimits

0x4ddf,	// (0x0004216c) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0004c840) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0004c840) main_postcard_pane_g

0x4def,	// (0x0004217c) main_postcard_pane_g4

0xc8eb,	// (0x00049c78) smil_status_volume_pane_g2

0x4e1b,	// (0x000421a8) postcard_pane_ParamLimits

0x4e1b,	// (0x000421a8) postcard_pane

0xb3e7,	// (0x00048774) postcard_pane_g1_ParamLimits

0xb3e7,	// (0x00048774) postcard_pane_g1

0x4e4d,	// (0x000421da) postcard_pane_g2_ParamLimits

0x4e4d,	// (0x000421da) postcard_pane_g2

0x4e59,	// (0x000421e6) postcard_pane_g3_ParamLimits

0x4e59,	// (0x000421e6) postcard_pane_g3

0xb5a2,	// (0x0004892f) postcard_pane_g4_ParamLimits

0xb5a2,	// (0x0004892f) postcard_pane_g4

0x4e65,	// (0x000421f2) postcard_pane_g5_ParamLimits

0x4e65,	// (0x000421f2) postcard_pane_g5

0x4e71,	// (0x000421fe) postcard_pane_g6_ParamLimits

0x4e71,	// (0x000421fe) postcard_pane_g6

0xb5b0,	// (0x0004893d) postcard_pane_g7_ParamLimits

0xb5b0,	// (0x0004893d) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0004c84d) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0004c84d) postcard_pane_g

0x4e7d,	// (0x0004220a) main_mp2_pane_g1_ParamLimits

0x4e7d,	// (0x0004220a) main_mp2_pane_g1

0x4e89,	// (0x00042216) main_mp2_pane_g2_ParamLimits

0x4e89,	// (0x00042216) main_mp2_pane_g2

0x4e95,	// (0x00042222) main_mp2_pane_g3_ParamLimits

0x4e95,	// (0x00042222) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0004c85c) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0004c85c) main_mp2_pane_g

0x4ea1,	// (0x0004222e) main_mp2_pane_t1_ParamLimits

0x4ea1,	// (0x0004222e) main_mp2_pane_t1

0x4eb8,	// (0x00042245) main_mp2_pane_t2_ParamLimits

0x4eb8,	// (0x00042245) main_mp2_pane_t2

0x4eca,	// (0x00042257) main_mp2_pane_t3_ParamLimits

0x4eca,	// (0x00042257) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0004c863) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0004c863) main_mp2_pane_t

0xb5be,	// (0x0004894b) pec_content_pane_ParamLimits

0xb5be,	// (0x0004894b) pec_content_pane

0xab41,	// (0x00047ece) scroll_pane_cp015

0xb5d0,	// (0x0004895d) pec_attribute_pane_ParamLimits

0xb5d0,	// (0x0004895d) pec_attribute_pane

0x4edc,	// (0x00042269) pec_content_pane_g1_ParamLimits

0x4edc,	// (0x00042269) pec_content_pane_g1

0xb5e0,	// (0x0004896d) pec_content_pane_t1_ParamLimits

0xb5e0,	// (0x0004896d) pec_content_pane_t1

0xb5f2,	// (0x0004897f) pec_content_pane_t2_ParamLimits

0xb5f2,	// (0x0004897f) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0004c86a) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0004c86a) pec_content_pane_t

0x4ee8,	// (0x00042275) list_single_graphic_pane_cp01_ParamLimits

0x4ee8,	// (0x00042275) list_single_graphic_pane_cp01

0xa6f0,	// (0x00047a7d) bg_popup_sub_pane_cp04

0xb604,	// (0x00048991) popup_mup_playback_window_g1

0xb610,	// (0x0004899d) popup_mup_playback_window_t1

0xb625,	// (0x000489b2) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0004c86f) popup_mup_playback_window_t

0xb65c,	// (0x000489e9) main_image_pane_g1_ParamLimits

0xb65c,	// (0x000489e9) main_image_pane_g1

0xb69f,	// (0x00048a2c) scroll_pane_cp018_ParamLimits

0xb69f,	// (0x00048a2c) scroll_pane_cp018

0xb6b7,	// (0x00048a44) scroll_pane_cp016_ParamLimits

0xb6b7,	// (0x00048a44) scroll_pane_cp016

0x4f82,	// (0x0004230f) smil2_image_pane_ParamLimits

0x4f82,	// (0x0004230f) smil2_image_pane

0x4fb2,	// (0x0004233f) smil2_root_pane_ParamLimits

0x4fb2,	// (0x0004233f) smil2_root_pane

0x4fde,	// (0x0004236b) smil2_text_pane_ParamLimits

0x4fde,	// (0x0004236b) smil2_text_pane

0xa47f,	// (0x0004780c) bg_list_pane_cp06

0xb6f3,	// (0x00048a80) grid_radio_pane

0xa47f,	// (0x0004780c) bg_popup_window_pane_cp06

0xb6fb,	// (0x00048a88) main_fmradio_pane_t1

0xb0aa,	// (0x00048437) heading_pane_cp04

0xb709,	// (0x00048a96) main_fmradio_pane_t2

0xc721,	// (0x00049aae) popup_cale_lunar_info_window_g1

0xb717,	// (0x00048aa4) main_fmradio_pane_t3

0xc729,	// (0x00049ab6) popup_cale_lunar_info_window_g2

0xb725,	// (0x00048ab2) main_fmradio_pane_t4

0x0001,

0xb733,	// (0x00048ac0) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0004c95d) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0004c884) main_fmradio_pane_t

0xb741,	// (0x00048ace) wait_bar_pane_cp03

0xb749,	// (0x00048ad6) cell_fmradio_pane_ParamLimits

0xb749,	// (0x00048ad6) cell_fmradio_pane

0xb5b0,	// (0x0004893d) cell_fmradio_pane_g1_ParamLimits

0xb5b0,	// (0x0004893d) cell_fmradio_pane_g1

0xa47f,	// (0x0004780c) grid_highlight_pane_cp011

0xb75c,	// (0x00048ae9) poc_content_pane_ParamLimits

0xb75c,	// (0x00048ae9) poc_content_pane

0xb76e,	// (0x00048afb) scroll_pane_cp019

0x501e,	// (0x000423ab) popup_call_poc_act_window_ParamLimits

0x501e,	// (0x000423ab) popup_call_poc_act_window

0x502b,	// (0x000423b8) popup_call_poc_inact_window_ParamLimits

0x502b,	// (0x000423b8) popup_call_poc_inact_window

0xf594,	// (0x0004c921) bg_popup_call_poc_act_pane_g

0xc6e1,	// (0x00049a6e) bg_popup_call_poc_inact_pane_g1

0xc6e9,	// (0x00049a76) bg_popup_call_poc_inact_pane_g2

0xb776,	// (0x00048b03) popup_call_poc_act_window_g2

0xc6f1,	// (0x00049a7e) bg_popup_call_poc_inact_pane_g3

0xc671,	// (0x000499fe) bg_popup_call_poc_inact_pane_g4

0xc6f9,	// (0x00049a86) bg_popup_call_poc_inact_pane_g5

0xb77e,	// (0x00048b0b) popup_call_poc_act_window_t1_ParamLimits

0xb77e,	// (0x00048b0b) popup_call_poc_act_window_t1

0xb7a6,	// (0x00048b33) popup_call_poc_act_window_t2_ParamLimits

0xb7a6,	// (0x00048b33) popup_call_poc_act_window_t2

0xb7ce,	// (0x00048b5b) popup_call_poc_act_window_t3_ParamLimits

0xb7ce,	// (0x00048b5b) popup_call_poc_act_window_t3

0xb7f6,	// (0x00048b83) popup_call_poc_act_window_t4_ParamLimits

0xb7f6,	// (0x00048b83) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0004c88f) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0004c88f) popup_call_poc_act_window_t

0xc701,	// (0x00049a8e) bg_popup_call_poc_inact_pane_g6

0xc709,	// (0x00049a96) bg_popup_call_poc_inact_pane_g7

0xc711,	// (0x00049a9e) bg_popup_call_poc_inact_pane_g8

0xb808,	// (0x00048b95) popup_call_poc_inact_window_g2

0xc719,	// (0x00049aa6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0004c938) bg_popup_call_poc_inact_pane_g

0xb810,	// (0x00048b9d) popup_call_poc_inact_window_t1_ParamLimits

0xb810,	// (0x00048b9d) popup_call_poc_inact_window_t1

0xb825,	// (0x00048bb2) popup_call_poc_inact_window_t2_ParamLimits

0xb825,	// (0x00048bb2) popup_call_poc_inact_window_t2

0xb83a,	// (0x00048bc7) popup_call_poc_inact_window_t3_ParamLimits

0xb83a,	// (0x00048bc7) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0004c898) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0004c898) popup_call_poc_inact_window_t

0xc85e,	// (0x00049beb) context_pane_ParamLimits

0x5661,	// (0x000429ee) signal_pane_ParamLimits

0xa998,	// (0x00047d25) main_call2_pane

0x55d4,	// (0x00042961) popup_phob_thumbnail2_window_ParamLimits

0x55d4,	// (0x00042961) popup_phob_thumbnail2_window

0x4ced,	// (0x0004207a) aid_hotspot_pointer_arrow_pane

0x4cf5,	// (0x00042082) aid_hotspot_pointer_hand_pane

0x5353,	// (0x000426e0) phob_pre_status_pane_g5

0x2fb2,	// (0x0004033f) cams_zoom_pane_ParamLimits

0x2fbe,	// (0x0004034b) image_vga_pane_ParamLimits

0x2fcd,	// (0x0004035a) main_camera_pane_g1_ParamLimits

0x2fdb,	// (0x00040368) main_camera_pane_g2_ParamLimits

0x2fe7,	// (0x00040374) main_camera_pane_g3_ParamLimits

0x2ff3,	// (0x00040380) main_camera_pane_g4_ParamLimits

0x2fff,	// (0x0004038c) main_camera_pane_g5_ParamLimits

0x300b,	// (0x00040398) main_camera_pane_g6_ParamLimits

0x3017,	// (0x000403a4) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0004c597) main_camera_pane_g_ParamLimits

0x3023,	// (0x000403b0) main_camera_pane_t1_ParamLimits

0x3035,	// (0x000403c2) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0004c5a8) main_camera_pane_t_ParamLimits

0xa6f0,	// (0x00047a7d) bg_popup_preview_window_pane_cp01_ParamLimits

0xa6f0,	// (0x00047a7d) bg_popup_preview_window_pane_cp01

0xb84f,	// (0x00048bdc) popup_phob_thumbnail2_window_g1_ParamLimits

0xb84f,	// (0x00048bdc) popup_phob_thumbnail2_window_g1

0xa47f,	// (0x0004780c) call2_cli_visual_pane

0x5047,	// (0x000423d4) popup_call2_audio_conf_window_ParamLimits

0x5047,	// (0x000423d4) popup_call2_audio_conf_window

0x505c,	// (0x000423e9) popup_call2_audio_first_window_ParamLimits

0x505c,	// (0x000423e9) popup_call2_audio_first_window

0x50fa,	// (0x00042487) popup_call2_audio_in_window_ParamLimits

0x50fa,	// (0x00042487) popup_call2_audio_in_window

0x513c,	// (0x000424c9) popup_call2_audio_out_window_ParamLimits

0x513c,	// (0x000424c9) popup_call2_audio_out_window

0x519e,	// (0x0004252b) popup_call2_audio_second_window_ParamLimits

0x519e,	// (0x0004252b) popup_call2_audio_second_window

0x51fc,	// (0x00042589) popup_call2_audio_wait_window_ParamLimits

0x51fc,	// (0x00042589) popup_call2_audio_wait_window

0xa47f,	// (0x0004780c) bg_popup_call2_act_pane_cp03

0xa6bc,	// (0x00047a49) list_conf_pane_cp

0xb85b,	// (0x00048be8) popup_call2_audio_conf_window_t1

0xb869,	// (0x00048bf6) list_single_graphic_popup_conf2_pane_ParamLimits

0xb869,	// (0x00048bf6) list_single_graphic_popup_conf2_pane

0xb11a,	// (0x000484a7) list_highlight_pane_cp04

0xb87c,	// (0x00048c09) list_single_graphic_popup_conf2_pane_g1

0xb12b,	// (0x000484b8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0004c89f) list_single_graphic_popup_conf2_pane_g

0xb886,	// (0x00048c13) list_single_graphic_popup_conf2_pane_t1

0xb894,	// (0x00048c21) bg_popup_call2_act_pane_cp01_ParamLimits

0xb894,	// (0x00048c21) bg_popup_call2_act_pane_cp01

0xb91e,	// (0x00048cab) call_type_pane_cp05_ParamLimits

0xb91e,	// (0x00048cab) call_type_pane_cp05

0xb972,	// (0x00048cff) popup_call2_audio_second_window_g1_ParamLimits

0xb972,	// (0x00048cff) popup_call2_audio_second_window_g1

0xb9c6,	// (0x00048d53) popup_call2_audio_second_window_g2_ParamLimits

0xb9c6,	// (0x00048d53) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0004c8a4) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0004c8a4) popup_call2_audio_second_window_g

0xba2b,	// (0x00048db8) popup_call2_audio_second_window_t1_ParamLimits

0xba2b,	// (0x00048db8) popup_call2_audio_second_window_t1

0xbae6,	// (0x00048e73) popup_call2_audio_second_window_t2_ParamLimits

0xbae6,	// (0x00048e73) popup_call2_audio_second_window_t2

0xbb39,	// (0x00048ec6) popup_call2_audio_second_window_t3_ParamLimits

0xbb39,	// (0x00048ec6) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0004c8ab) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0004c8ab) popup_call2_audio_second_window_t

0xa47f,	// (0x0004780c) bg_popup_call2_in_pane_cp02

0xa489,	// (0x00047816) call_type_pane_cp04

0xa491,	// (0x0004781e) popup_call2_audio_wait_window_g1

0xa499,	// (0x00047826) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004c486) popup_call2_audio_wait_window_g

0xa4a1,	// (0x0004782e) popup_call2_audio_wait_window_t3

0xbc2c,	// (0x00048fb9) bg_popup_call2_act_pane_ParamLimits

0xbc2c,	// (0x00048fb9) bg_popup_call2_act_pane

0xbcec,	// (0x00049079) call_type_pane_cp03_ParamLimits

0xbcec,	// (0x00049079) call_type_pane_cp03

0xbd50,	// (0x000490dd) popup_call2_audio_first_window_g1_ParamLimits

0xbd50,	// (0x000490dd) popup_call2_audio_first_window_g1

0xbdc0,	// (0x0004914d) popup_call2_audio_first_window_g2_ParamLimits

0xbdc0,	// (0x0004914d) popup_call2_audio_first_window_g2

0xb3e7,	// (0x00048774) popup_call2_audio_first_window_g3_ParamLimits

0xb3e7,	// (0x00048774) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0004c8b4) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0004c8b4) popup_call2_audio_first_window_g

0xbe9e,	// (0x0004922b) popup_call2_audio_first_window_t1_ParamLimits

0xbe9e,	// (0x0004922b) popup_call2_audio_first_window_t1

0xbfa1,	// (0x0004932e) popup_call2_audio_first_window_t4_ParamLimits

0xbfa1,	// (0x0004932e) popup_call2_audio_first_window_t4

0xc084,	// (0x00049411) popup_call2_audio_first_window_t5_ParamLimits

0xc084,	// (0x00049411) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0004c8bf) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0004c8bf) popup_call2_audio_first_window_t

0xa6d2,	// (0x00047a5f) bg_popup_call2_act_pane_g1

0xc731,	// (0x00049abe) popup_cale_lunar_info_window_t1

0xc73f,	// (0x00049acc) popup_cale_lunar_info_window_t2

0xc74d,	// (0x00049ada) popup_cale_lunar_info_window_t3

0xa47f,	// (0x0004780c) bg_popup_call2_bubble_pane

0xc185,	// (0x00049512) bg_popup_call2_in_pane_cp01_ParamLimits

0xc185,	// (0x00049512) bg_popup_call2_in_pane_cp01

0xa15b,	// (0x000474e8) call_type_pane_cp02

0xc1cd,	// (0x0004955a) popup_call2_audio_out_window_g1_ParamLimits

0xc1cd,	// (0x0004955a) popup_call2_audio_out_window_g1

0xc1f9,	// (0x00049586) popup_call2_audio_out_window_g2_ParamLimits

0xc1f9,	// (0x00049586) popup_call2_audio_out_window_g2

0xc221,	// (0x000495ae) popup_call2_audio_out_window_g3_ParamLimits

0xc221,	// (0x000495ae) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0004c8c8) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0004c8c8) popup_call2_audio_out_window_g

0xc25c,	// (0x000495e9) popup_call2_audio_out_window_t1_ParamLimits

0xc25c,	// (0x000495e9) popup_call2_audio_out_window_t1

0xc2bb,	// (0x00049648) popup_call2_audio_out_window_t2_ParamLimits

0xc2bb,	// (0x00049648) popup_call2_audio_out_window_t2

0xc30f,	// (0x0004969c) popup_call2_audio_out_window_t3_ParamLimits

0xc30f,	// (0x0004969c) popup_call2_audio_out_window_t3

0xc325,	// (0x000496b2) popup_call2_audio_out_window_t4_ParamLimits

0xc325,	// (0x000496b2) popup_call2_audio_out_window_t4

0xc33b,	// (0x000496c8) popup_call2_audio_out_window_t5_ParamLimits

0xc33b,	// (0x000496c8) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0004c8d1) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0004c8d1) popup_call2_audio_out_window_t

0xc39f,	// (0x0004972c) bg_popup_call2_in_pane_ParamLimits

0xc39f,	// (0x0004972c) bg_popup_call2_in_pane

0xc3fb,	// (0x00049788) popup_call2_audio_in_window_g1_ParamLimits

0xc3fb,	// (0x00049788) popup_call2_audio_in_window_g1

0xc433,	// (0x000497c0) popup_call2_audio_in_window_g2_ParamLimits

0xc433,	// (0x000497c0) popup_call2_audio_in_window_g2

0xc46b,	// (0x000497f8) popup_call2_audio_in_window_g3_ParamLimits

0xc46b,	// (0x000497f8) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0004c8de) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0004c8de) popup_call2_audio_in_window_g

0xc4c3,	// (0x00049850) popup_call2_audio_in_window_t1_ParamLimits

0xc4c3,	// (0x00049850) popup_call2_audio_in_window_t1

0xc543,	// (0x000498d0) popup_call2_audio_in_window_t2_ParamLimits

0xc543,	// (0x000498d0) popup_call2_audio_in_window_t2

0xc5c3,	// (0x00049950) popup_call2_audio_in_window_t3_ParamLimits

0xc5c3,	// (0x00049950) popup_call2_audio_in_window_t3

0xc5dd,	// (0x0004996a) popup_call2_audio_in_window_t4_ParamLimits

0xc5dd,	// (0x0004996a) popup_call2_audio_in_window_t4

0xc5ef,	// (0x0004997c) popup_call2_audio_in_window_t5_ParamLimits

0xc5ef,	// (0x0004997c) popup_call2_audio_in_window_t5

0xc604,	// (0x00049991) popup_call2_audio_in_window_t6_ParamLimits

0xc604,	// (0x00049991) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0004c8e7) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0004c8e7) popup_call2_audio_in_window_t

0xa6d2,	// (0x00047a5f) bg_popup_call2_in_pane_g1

0xc75b,	// (0x00049ae8) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0004c962) popup_cale_lunar_info_window_t

0xa6f0,	// (0x00047a7d) bg_popup_call2_rect_pane_ParamLimits

0xa6f0,	// (0x00047a7d) bg_popup_call2_rect_pane

0xa47f,	// (0x0004780c) call2_cli_visual_graphic_pane

0xa47f,	// (0x0004780c) call2_cli_visual_text_pane

0x570a,	// (0x00042a97) smil_status_volume_pane_g3

0x0002,

0xa816,	// (0x00047ba3) call2_cli_visual_graphic_pane_g1

0xa816,	// (0x00047ba3) call2_cli_visual_graphic_pane_g2

0xa816,	// (0x00047ba3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0004c8f4) call2_cli_visual_graphic_pane_g

0xc619,	// (0x000499a6) bg_popup_call2_rect_pane_g1

0xa8b4,	// (0x00047c41) bg_popup_call2_rect_pane_g2

0xc621,	// (0x000499ae) bg_popup_call2_rect_pane_g3

0xc629,	// (0x000499b6) bg_popup_call2_rect_pane_g4

0xc631,	// (0x000499be) bg_popup_call2_rect_pane_g5

0xc639,	// (0x000499c6) bg_popup_call2_rect_pane_g6

0xc641,	// (0x000499ce) bg_popup_call2_rect_pane_g7

0xc649,	// (0x000499d6) bg_popup_call2_rect_pane_g8

0xc651,	// (0x000499de) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0004c8fb) bg_popup_call2_rect_pane_g

0xc659,	// (0x000499e6) bg_popup_call2_bubble_pane_g1

0xc661,	// (0x000499ee) bg_popup_call2_bubble_pane_g2

0xc669,	// (0x000499f6) bg_popup_call2_bubble_pane_g3

0xc671,	// (0x000499fe) bg_popup_call2_bubble_pane_g4

0xc679,	// (0x00049a06) bg_popup_call2_bubble_pane_g5

0xc681,	// (0x00049a0e) bg_popup_call2_bubble_pane_g6

0xc689,	// (0x00049a16) bg_popup_call2_bubble_pane_g7

0xc691,	// (0x00049a1e) bg_popup_call2_bubble_pane_g8

0xc699,	// (0x00049a26) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0004c90e) bg_popup_call2_bubble_pane_g

0x29e0,	// (0x0003fd6d) aid_cale_week_size_cell_pane

0x3047,	// (0x000403d4) aid_cams_cif_uncrop_pane_ParamLimits

0x3047,	// (0x000403d4) aid_cams_cif_uncrop_pane

0x31a2,	// (0x0004052f) aid_cams_size_cell_ParamLimits

0x31a2,	// (0x0004052f) aid_cams_size_cell

0x31ae,	// (0x0004053b) grid_cams_pane_ParamLimits

0x31bc,	// (0x00040549) linegrid_cams_pane_ParamLimits

0x3293,	// (0x00040620) call_video_pane_t1

0x32b4,	// (0x00040641) call_video_pane_t2

0x0001,

0xf26e,	// (0x0004c5fb) call_video_pane_t

0x3802,	// (0x00040b8f) aid_cale_month_size_cell_pane_ParamLimits

0x3802,	// (0x00040b8f) aid_cale_month_size_cell_pane

0xf61e,	// (0x0004c9ab) smil_status_volume_pane_g

0x5717,	// (0x00042aa4) volume_smil_pane_ParamLimits

0x2153,	// (0x0003f4e0) aid_popup2_width_pane

0x28da,	// (0x0003fc67) cell_qdial_pane_g4_ParamLimits

0x28da,	// (0x0003fc67) cell_qdial_pane_g4

0x479e,	// (0x00041b2b) aid_blid_cardinal_pane_ParamLimits

0x47ae,	// (0x00041b3b) aid_blid_destination_pane_ParamLimits

0x47ae,	// (0x00041b3b) aid_blid_destination_pane

0xa6f0,	// (0x00047a7d) bg_popup_call_poc_act_pane_ParamLimits

0xa6f0,	// (0x00047a7d) bg_popup_call_poc_act_pane

0xa6f0,	// (0x00047a7d) bg_popup_call_poc_inact_pane_ParamLimits

0xa6f0,	// (0x00047a7d) bg_popup_call_poc_inact_pane

0xc6a1,	// (0x00049a2e) bg_popup_call_poc_act_pane_g1

0xc6a9,	// (0x00049a36) bg_popup_call_poc_act_pane_g2

0xc6b1,	// (0x00049a3e) bg_popup_call_poc_act_pane_g3

0xc671,	// (0x000499fe) bg_popup_call_poc_act_pane_g4

0xc679,	// (0x00049a06) bg_popup_call_poc_act_pane_g5

0xc6b9,	// (0x00049a46) bg_popup_call_poc_act_pane_g6

0xc689,	// (0x00049a16) bg_popup_call_poc_act_pane_g7

0xc6c1,	// (0x00049a4e) bg_popup_call_poc_act_pane_g8

0xa47f,	// (0x0004780c) main_usb_pane

0x5507,	// (0x00042894) popup_cale_lunar_info_window

0x35d1,	// (0x0004095e) im_reading_pane_t1_ParamLimits

0xaa99,	// (0x00047e26) list_im_pane_ParamLimits

0xaaaa,	// (0x00047e37) scroll_pane_cp07_ParamLimits

0xa47f,	// (0x0004780c) grid_highlight_pane_cp012

0xa6f0,	// (0x00047a7d) mup_scale_pane_ParamLimits

0xb3e7,	// (0x00048774) main_usb_pane_g1_ParamLimits

0xb3e7,	// (0x00048774) main_usb_pane_g1

0x5276,	// (0x00042603) main_usb_pane_g2_ParamLimits

0x5276,	// (0x00042603) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0004c94b) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0004c94b) main_usb_pane_g

0x5282,	// (0x0004260f) main_usb_pane_t1_ParamLimits

0x5282,	// (0x0004260f) main_usb_pane_t1

0x5294,	// (0x00042621) main_usb_pane_t2_ParamLimits

0x5294,	// (0x00042621) main_usb_pane_t2

0x52a6,	// (0x00042633) main_usb_pane_t3_ParamLimits

0x52a6,	// (0x00042633) main_usb_pane_t3

0x52b8,	// (0x00042645) main_usb_pane_t4_ParamLimits

0x52b8,	// (0x00042645) main_usb_pane_t4

0x52ca,	// (0x00042657) main_usb_pane_t5_ParamLimits

0x52ca,	// (0x00042657) main_usb_pane_t5

0x52dc,	// (0x00042669) main_usb_pane_t6_ParamLimits

0x52dc,	// (0x00042669) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0004c950) main_usb_pane_t_ParamLimits

0x4744,	// (0x00041ad1) aid_text_placing

0x4750,	// (0x00041add) main_location2_pane_t1_ParamLimits

0x4764,	// (0x00041af1) main_location2_pane_t2_ParamLimits

0x4778,	// (0x00041b05) main_location2_pane_t3_ParamLimits

0x478c,	// (0x00041b19) main_location2_pane_t4_ParamLimits

0x478c,	// (0x00041b19) main_location2_pane_t4

0xf3cf,	// (0x0004c75c) main_location2_pane_t_ParamLimits

0xa72c,	// (0x00047ab9) find_pinb_pane_g2_ParamLimits

0xa72c,	// (0x00047ab9) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0004c4ac) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0004c4ac) find_pinb_pane_g

0xa738,	// (0x00047ac5) find_pinb_pane_t1_ParamLimits

0xa74a,	// (0x00047ad7) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0004c4b1) find_pinb_pane_t_ParamLimits

0xa47f,	// (0x0004780c) main_call3_pane

0x3d76,	// (0x00041103) cale_month_day_heading_pane_t1_ParamLimits

0x3dfc,	// (0x00041189) cale_month_day_heading_pane_t2_ParamLimits

0x3e8d,	// (0x0004121a) cale_month_day_heading_pane_t3_ParamLimits

0x3f1e,	// (0x000412ab) cale_month_day_heading_pane_t4_ParamLimits

0x3faf,	// (0x0004133c) cale_month_day_heading_pane_t5_ParamLimits

0x4040,	// (0x000413cd) cale_month_day_heading_pane_t6_ParamLimits

0x40dd,	// (0x0004146a) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0004c633) cale_month_day_heading_pane_t_ParamLimits

0xacf4,	// (0x00048081) smil_status_volume_pane

0x4e35,	// (0x000421c2) postcard_address_pane_ParamLimits

0x4e35,	// (0x000421c2) postcard_address_pane

0x4e41,	// (0x000421ce) postcard_message_pane_ParamLimits

0x4e41,	// (0x000421ce) postcard_message_pane

0x523b,	// (0x000425c8) call2_cli_visual_pane_t1_ParamLimits

0x523b,	// (0x000425c8) call2_cli_visual_pane_t1

0x586e,	// (0x00042bfb) postcard_message_pane_t1_ParamLimits

0x586e,	// (0x00042bfb) postcard_message_pane_t1

0x5857,	// (0x00042be4) postcard_address_pane_t1_ParamLimits

0x5857,	// (0x00042be4) postcard_address_pane_t1

0x5848,	// (0x00042bd5) popup_call3_audio_in_window_ParamLimits

0x5848,	// (0x00042bd5) popup_call3_audio_in_window

0x572c,	// (0x00042ab9) bg_popup_call3_in_pane_ParamLimits

0x572c,	// (0x00042ab9) bg_popup_call3_in_pane

0x578e,	// (0x00042b1b) popup_call3_audio_in_window_g1_ParamLimits

0x578e,	// (0x00042b1b) popup_call3_audio_in_window_g1

0x57a6,	// (0x00042b33) popup_call3_audio_in_window_g2_ParamLimits

0x57a6,	// (0x00042b33) popup_call3_audio_in_window_g2

0x57be,	// (0x00042b4b) popup_call3_audio_in_window_g3_ParamLimits

0x57be,	// (0x00042b4b) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0004c9b2) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0004c9b2) popup_call3_audio_in_window_g

0x57e6,	// (0x00042b73) popup_call3_audio_in_window_t1_ParamLimits

0x57e6,	// (0x00042b73) popup_call3_audio_in_window_t1

0x580e,	// (0x00042b9b) popup_call3_audio_in_window_t2_ParamLimits

0x580e,	// (0x00042b9b) popup_call3_audio_in_window_t2

0x5836,	// (0x00042bc3) popup_call3_audio_in_window_t3_ParamLimits

0x5836,	// (0x00042bc3) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0004c9bb) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0004c9bb) popup_call3_audio_in_window_t

0xa998,	// (0x00047d25) bg_popup_call3_rect_pane

0xc619,	// (0x000499a6) bg_popup_call3_rect_pane_g1

0xa8b4,	// (0x00047c41) bg_popup_call3_rect_pane_g2

0xc621,	// (0x000499ae) bg_popup_call3_rect_pane_g3

0xc629,	// (0x000499b6) bg_popup_call3_rect_pane_g4

0xc631,	// (0x000499be) bg_popup_call3_rect_pane_g5

0xc639,	// (0x000499c6) bg_popup_call3_rect_pane_g6

0xc641,	// (0x000499ce) bg_popup_call3_rect_pane_g7

0x4ab4,	// (0x00041e41) mup_visualizer_osc_pane

0xb4c4,	// (0x00048851) mup_visualizer_spec_pane

0x574c,	// (0x00042ad9) call3_video_qcif_pane_ParamLimits

0x574c,	// (0x00042ad9) call3_video_qcif_pane

0x575e,	// (0x00042aeb) call3_video_qcif_uncrop_pane_ParamLimits

0x575e,	// (0x00042aeb) call3_video_qcif_uncrop_pane

0x576c,	// (0x00042af9) call3_video_subqcif_pane_ParamLimits

0x576c,	// (0x00042af9) call3_video_subqcif_pane

0x577e,	// (0x00042b0b) call3_video_subqcif_uncrop_pane_ParamLimits

0x577e,	// (0x00042b0b) call3_video_subqcif_uncrop_pane

0x57d6,	// (0x00042b63) popup_call3_audio_in_window_g4_ParamLimits

0x57d6,	// (0x00042b63) popup_call3_audio_in_window_g4

0x56f7,	// (0x00042a84) mup_spec_half_pane

0x5700,	// (0x00042a8d) mup_spec_half_pane_cp

0xc8be,	// (0x00049c4b) mup_osc_middle_pane

0xc8c7,	// (0x00049c54) mup_visualizer_osc_pane_g1

0x56d8,	// (0x00042a65) mup_spec_bar_pane_ParamLimits

0x56d8,	// (0x00042a65) mup_spec_bar_pane

0xc8ab,	// (0x00049c38) mup_spec_bar_pane_g1

0xc8b5,	// (0x00049c42) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0004c9a6) mup_spec_bar_pane_g

0x29e0,	// (0x0003fd6d) aid_cale_week_size_cell_pane_ParamLimits

0x29f5,	// (0x0003fd82) bg_cale_heading_pane_ParamLimits

0xa8f1,	// (0x00047c7e) bg_cale_pane_cp01_ParamLimits

0x2a17,	// (0x0003fda4) cale_week_corner_pane_ParamLimits

0x2a31,	// (0x0003fdbe) cale_week_day_heading_pane_ParamLimits

0x2a53,	// (0x0003fde0) cale_week_scroll_pane_g1_ParamLimits

0x2a70,	// (0x0003fdfd) cale_week_scroll_pane_g2_ParamLimits

0x2a83,	// (0x0003fe10) cale_week_scroll_pane_g3_ParamLimits

0x2a96,	// (0x0003fe23) cale_week_scroll_pane_g4_ParamLimits

0x2aa9,	// (0x0003fe36) cale_week_scroll_pane_g5_ParamLimits

0x2abc,	// (0x0003fe49) cale_week_scroll_pane_g6_ParamLimits

0x2acf,	// (0x0003fe5c) cale_week_scroll_pane_g7_ParamLimits

0x2ae2,	// (0x0003fe6f) cale_week_scroll_pane_g8_ParamLimits

0x2af7,	// (0x0003fe84) cale_week_scroll_pane_g9_ParamLimits

0x2b0a,	// (0x0003fe97) cale_week_scroll_pane_g10_ParamLimits

0x2b1d,	// (0x0003feaa) cale_week_scroll_pane_g11_ParamLimits

0x2b30,	// (0x0003febd) cale_week_scroll_pane_g12_ParamLimits

0x2b47,	// (0x0003fed4) cale_week_scroll_pane_g13_ParamLimits

0x2b62,	// (0x0003feef) cale_week_scroll_pane_g14_ParamLimits

0x2b7d,	// (0x0003ff0a) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0004c53d) cale_week_scroll_pane_g_ParamLimits

0x2bad,	// (0x0003ff3a) cale_week_time_pane_ParamLimits

0x2bc2,	// (0x0003ff4f) grid_cale_week_pane_ParamLimits

0xa90e,	// (0x00047c9b) listscroll_cale_week_pane_t1

0xa920,	// (0x00047cad) scroll_pane_cp08_ParamLimits

0x386b,	// (0x00040bf8) cale_month_corner_pane_ParamLimits

0xacca,	// (0x00048057) cale_month_pane_t1

0x3d0f,	// (0x0004109c) cale_month_week_pane_ParamLimits

0xb3e7,	// (0x00048774) popup_call_status_window_g1_ParamLimits

0x454d,	// (0x000418da) popup_call_status_window_g2_ParamLimits

0x4559,	// (0x000418e6) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0004c6e3) popup_call_status_window_g_ParamLimits

0xb09a,	// (0x00048427) aid_call2_pane

0x0ff5,	// (0x0003e382) msg_header_pane_g1

0x4e35,	// (0x000421c2) postcard_address2_pane_ParamLimits

0x4e35,	// (0x000421c2) postcard_address2_pane

0x4e41,	// (0x000421ce) postcard_message2_pane_ParamLimits

0x4e41,	// (0x000421ce) postcard_message2_pane

0x566f,	// (0x000429fc) message2_row_pane_ParamLimits

0x566f,	// (0x000429fc) message2_row_pane

0x568a,	// (0x00042a17) address2_row_pane_ParamLimits

0x568a,	// (0x00042a17) address2_row_pane

0xc879,	// (0x00049c06) postcard_message2_row_pane_g1

0xc881,	// (0x00049c0e) postcard_message2_row_pane_t1

0xc879,	// (0x00049c06) address2_row_pane_g1

0xc881,	// (0x00049c0e) address2_row_pane_t1

0x2f2d,	// (0x000402ba) aid_size_cell_vorec

0xa47f,	// (0x0004780c) main_rss_pane

0x569d,	// (0x00042a2a) rss_list_single_pane_ParamLimits

0x569d,	// (0x00042a2a) rss_list_single_pane

0xc88f,	// (0x00049c1c) rss_list_single_pane_t1

0xc89d,	// (0x00049c2a) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0004c9a1) rss_list_single_pane_t

0xa47f,	// (0x0004780c) main_camera2_pane

0xa47f,	// (0x0004780c) main_video2_pane

0x58d2,	// (0x00042c5f) cams_zoom_pane_cp2_ParamLimits

0x58d2,	// (0x00042c5f) cams_zoom_pane_cp2

0x58de,	// (0x00042c6b) image2_vga_pane_ParamLimits

0x58de,	// (0x00042c6b) image2_vga_pane

0x58ed,	// (0x00042c7a) main_camera2_pane_g1_ParamLimits

0x58ed,	// (0x00042c7a) main_camera2_pane_g1

0x58f9,	// (0x00042c86) main_camera2_pane_g2_ParamLimits

0x58f9,	// (0x00042c86) main_camera2_pane_g2

0x5905,	// (0x00042c92) main_camera2_pane_g3_ParamLimits

0x5905,	// (0x00042c92) main_camera2_pane_g3

0x5911,	// (0x00042c9e) main_camera2_pane_g4_ParamLimits

0x5911,	// (0x00042c9e) main_camera2_pane_g4

0x591d,	// (0x00042caa) main_camera2_pane_g5_ParamLimits

0x591d,	// (0x00042caa) main_camera2_pane_g5

0x5929,	// (0x00042cb6) main_camera2_pane_g6_ParamLimits

0x5929,	// (0x00042cb6) main_camera2_pane_g6

0x5935,	// (0x00042cc2) main_camera2_pane_g7_ParamLimits

0x5935,	// (0x00042cc2) main_camera2_pane_g7

0x5941,	// (0x00042cce) main_camera2_pane_g8_ParamLimits

0x5941,	// (0x00042cce) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0004c9c2) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0004c9c2) main_camera2_pane_g

0x5959,	// (0x00042ce6) main_camera2_pane_t1_ParamLimits

0x5959,	// (0x00042ce6) main_camera2_pane_t1

0x596b,	// (0x00042cf8) main_camera2_pane_t2_ParamLimits

0x596b,	// (0x00042cf8) main_camera2_pane_t2

0x597d,	// (0x00042d0a) main_camera2_pane_t3_ParamLimits

0x597d,	// (0x00042d0a) main_camera2_pane_t3

0x598f,	// (0x00042d1c) main_camera2_pane_t4_ParamLimits

0x598f,	// (0x00042d1c) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0004c9d5) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0004c9d5) main_camera2_pane_t

0x59f1,	// (0x00042d7e) cams_zoom_pane_cp4_ParamLimits

0x59f1,	// (0x00042d7e) cams_zoom_pane_cp4

0x5a01,	// (0x00042d8e) image2_cif_pane_ParamLimits

0x5a01,	// (0x00042d8e) image2_cif_pane

0x5a16,	// (0x00042da3) image2_subqcif_pane_ParamLimits

0x5a16,	// (0x00042da3) image2_subqcif_pane

0x5a25,	// (0x00042db2) main_video2_pane_g1_ParamLimits

0x5a25,	// (0x00042db2) main_video2_pane_g1

0x5a37,	// (0x00042dc4) main_video2_pane_g2_ParamLimits

0x5a37,	// (0x00042dc4) main_video2_pane_g2

0x5a47,	// (0x00042dd4) main_video2_pane_g3_ParamLimits

0x5a47,	// (0x00042dd4) main_video2_pane_g3

0x5a57,	// (0x00042de4) main_video2_pane_g4_ParamLimits

0x5a57,	// (0x00042de4) main_video2_pane_g4

0x5a67,	// (0x00042df4) main_video2_pane_g5_ParamLimits

0x5a67,	// (0x00042df4) main_video2_pane_g5

0x5a77,	// (0x00042e04) main_video2_pane_g6_ParamLimits

0x5a77,	// (0x00042e04) main_video2_pane_g6

0x0005,

0xf657,	// (0x0004c9e4) main_video2_pane_g_ParamLimits

0xf657,	// (0x0004c9e4) main_video2_pane_g

0x5a89,	// (0x00042e16) main_video2_pane_t1_ParamLimits

0x5a89,	// (0x00042e16) main_video2_pane_t1

0x5aa3,	// (0x00042e30) main_video2_pane_t2_ParamLimits

0x5aa3,	// (0x00042e30) main_video2_pane_t2

0x5ac9,	// (0x00042e56) main_video2_pane_t3_ParamLimits

0x5ac9,	// (0x00042e56) main_video2_pane_t3

0x0002,

0xf664,	// (0x0004c9f1) main_video2_pane_t_ParamLimits

0xf664,	// (0x0004c9f1) main_video2_pane_t

0x5393,	// (0x00042720) call_muted_g2

0x0001,

0xf606,	// (0x0004c993) call_muted_g

0xa47f,	// (0x0004780c) main_mup2_pane

0xc8fe,	// (0x00049c8b) main_mup2_pane_g1_ParamLimits

0xc8fe,	// (0x00049c8b) main_mup2_pane_g1

0x5aef,	// (0x00042e7c) main_mup2_pane_g2_ParamLimits

0x5aef,	// (0x00042e7c) main_mup2_pane_g2

0x5d71,	// (0x000430fe) main_mup_pane_g13_cp1

0x5d79,	// (0x00043106) mup_volume_pane_cp1

0x5b0f,	// (0x00042e9c) main_mup2_pane_g4_ParamLimits

0x5b0f,	// (0x00042e9c) main_mup2_pane_g4

0x5b24,	// (0x00042eb1) main_mup2_pane_g5_ParamLimits

0x5b24,	// (0x00042eb1) main_mup2_pane_g5

0x5b39,	// (0x00042ec6) main_mup2_pane_g6_ParamLimits

0x5b39,	// (0x00042ec6) main_mup2_pane_g6

0x5b4e,	// (0x00042edb) main_mup2_pane_g7_ParamLimits

0x5b4e,	// (0x00042edb) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0004c9f8) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0004c9f8) main_mup2_pane_g

0x5b6a,	// (0x00042ef7) main_mup2_pane_t1_ParamLimits

0x5b6a,	// (0x00042ef7) main_mup2_pane_t1

0x5b81,	// (0x00042f0e) main_mup2_pane_t2_ParamLimits

0x5b81,	// (0x00042f0e) main_mup2_pane_t2

0x5b98,	// (0x00042f25) main_mup2_pane_t3_ParamLimits

0x5b98,	// (0x00042f25) main_mup2_pane_t3

0x5baf,	// (0x00042f3c) main_mup2_pane_t4_ParamLimits

0x5baf,	// (0x00042f3c) main_mup2_pane_t4

0x5bc9,	// (0x00042f56) main_mup2_pane_t5_ParamLimits

0x5bc9,	// (0x00042f56) main_mup2_pane_t5

0x5be3,	// (0x00042f70) main_mup2_pane_t6_ParamLimits

0x5be3,	// (0x00042f70) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0004ca07) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0004ca07) main_mup2_pane_t

0x5c1b,	// (0x00042fa8) mup2_visualizer_pane_ParamLimits

0x5c1b,	// (0x00042fa8) mup2_visualizer_pane

0x5c51,	// (0x00042fde) mup_progress_pane_cp_ParamLimits

0x5c51,	// (0x00042fde) mup_progress_pane_cp

0x5d5c,	// (0x000430e9) mup_volume_pane_cp_ParamLimits

0x5d5c,	// (0x000430e9) mup_volume_pane_cp

0x5c68,	// (0x00042ff5) mup2_visualizer_pane_g1_ParamLimits

0x5c68,	// (0x00042ff5) mup2_visualizer_pane_g1

0xc90a,	// (0x00049c97) mup2_visualizer_pane_g2_ParamLimits

0xc90a,	// (0x00049c97) mup2_visualizer_pane_g2

0x5c7d,	// (0x0004300a) mup2_visualizer_pane_g3_ParamLimits

0x5c7d,	// (0x0004300a) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0004ca14) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0004ca14) mup2_visualizer_pane_g

0xb6eb,	// (0x00048a78) aid_size_cell_fmradio

0x54a9,	// (0x00042836) aid_height_parent_landcape

0xab28,	// (0x00047eb5) wml_content_pane_cp

0xab30,	// (0x00047ebd) wml_tabs_pane

0xab39,	// (0x00047ec6) popup_wml_miniature_window

0xab41,	// (0x00047ece) scroll_pane_cp021

0xab55,	// (0x00047ee2) wml_content_pane_comp8

0xa47f,	// (0x0004780c) bg_popup_sub_pane_cp05

0xc928,	// (0x00049cb5) popup_wml_miniature_window_g1

0xc930,	// (0x00049cbd) wml_miniature_view_pane

0x5c8b,	// (0x00043018) aid_size_wml_view

0x5c93,	// (0x00043020) wml_miniature_view_pane_g1

0x5c9c,	// (0x00043029) wml_miniature_view_pane_g2

0x5ca5,	// (0x00043032) wml_miniature_view_pane_g3

0x5cad,	// (0x0004303a) wml_miniature_view_pane_g4

0x5cb5,	// (0x00043042) wml_miniature_view_pane_g5

0x5cbd,	// (0x0004304a) wml_miniature_view_pane_g6

0x5cc5,	// (0x00043052) wml_miniature_view_pane_g7

0x5ccd,	// (0x0004305a) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0004ca1b) wml_miniature_view_pane_g

0xc8fe,	// (0x00049c8b) background_graphic_ParamLimits

0xc8fe,	// (0x00049c8b) background_graphic

0xc938,	// (0x00049cc5) wml_tabs_2_pane

0xc941,	// (0x00049cce) wml_tabs_3_pane_ParamLimits

0xc941,	// (0x00049cce) wml_tabs_3_pane

0xc953,	// (0x00049ce0) wml_tabs_4_pane_ParamLimits

0xc953,	// (0x00049ce0) wml_tabs_4_pane

0xc969,	// (0x00049cf6) wml_tabs_5_pane_ParamLimits

0xc969,	// (0x00049cf6) wml_tabs_5_pane

0xc983,	// (0x00049d10) wml_tabs_pane_g2_ParamLimits

0xc983,	// (0x00049d10) wml_tabs_pane_g2

0xc997,	// (0x00049d24) wml_tabs_pane_g3_ParamLimits

0xc997,	// (0x00049d24) wml_tabs_pane_g3

0x5cd5,	// (0x00043062) wml_tabs_2_active_pane_ParamLimits

0x5cd5,	// (0x00043062) wml_tabs_2_active_pane

0x5ce5,	// (0x00043072) wml_tabs_2_passive_pane_ParamLimits

0x5ce5,	// (0x00043072) wml_tabs_2_passive_pane

0x5cf5,	// (0x00043082) wml_tabs_3_active_pane_cp_ParamLimits

0x5cf5,	// (0x00043082) wml_tabs_3_active_pane_cp

0x5d06,	// (0x00043093) wml_tabs_3_passive_pane_ParamLimits

0x5d06,	// (0x00043093) wml_tabs_3_passive_pane

0x5d17,	// (0x000430a4) wml_tabs_3_passive_pane_cp_ParamLimits

0x5d17,	// (0x000430a4) wml_tabs_3_passive_pane_cp

0x5d28,	// (0x000430b5) tabs_4_active_pane

0x5d30,	// (0x000430bd) tabs_4_passive_pane

0x5d38,	// (0x000430c5) tabs_4_passive_pane_cp

0x5d40,	// (0x000430cd) tabs_4_passive_pane_cp2

0x526e,	// (0x000425fb) aid_height_text

0x4a7d,	// (0x00041e0a) mup_volume_cont_pane_ParamLimits

0x4a7d,	// (0x00041e0a) mup_volume_cont_pane

0x2525,	// (0x0003f8b2) aid_size_cell_pinb

0x252f,	// (0x0003f8bc) aid_size_list_pinb

0x5c3a,	// (0x00042fc7) mup2_volume_cont_pane_ParamLimits

0x5c3a,	// (0x00042fc7) mup2_volume_cont_pane

0x5d48,	// (0x000430d5) mup2_volume_cont_pane_g1_ParamLimits

0x5d48,	// (0x000430d5) mup2_volume_cont_pane_g1

0x215f,	// (0x0003f4ec) aid_size_cell_touch_ParamLimits

0x215f,	// (0x0003f4ec) aid_size_cell_touch

0x2408,	// (0x0003f795) touch_pane_ParamLimits

0x2408,	// (0x0003f795) touch_pane

0xa062,	// (0x000473ef) main_rss2_pane

0xc9b4,	// (0x00049d41) listscroll_rss2_pane

0xc9bd,	// (0x00049d4a) rss2_navigation_pane

0xc9c5,	// (0x00049d52) list_rss2_pane

0xb1bf,	// (0x0004854c) scroll_pane_cp22

0xc9cd,	// (0x00049d5a) rss2_navigation_pane_g1

0xc9d6,	// (0x00049d63) rss2_navigation_pane_g2

0xc9de,	// (0x00049d6b) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0004ca2c) rss2_navigation_pane_g

0xc9e6,	// (0x00049d73) rss2_navigation_pane_t1

0x5d81,	// (0x0004310e) rss2_list_single_pane_ParamLimits

0x5d81,	// (0x0004310e) rss2_list_single_pane

0xc9f4,	// (0x00049d81) rss2_list_single_pane_t2

0xca02,	// (0x00049d8f) rss2_list_single_pane_t3_ParamLimits

0xca02,	// (0x00049d8f) rss2_list_single_pane_t3

0xca1f,	// (0x00049dac) rss2_list_single_pane_t4

0x43b1,	// (0x0004173e) smil_status_pane_g1

0xad42,	// (0x000480cf) main_image2_pane_ParamLimits

0xad42,	// (0x000480cf) main_image2_pane

0x594d,	// (0x00042cda) main_camera2_pane_g9_ParamLimits

0x594d,	// (0x00042cda) main_camera2_pane_g9

0x59a1,	// (0x00042d2e) main_camera2_pane_t5_ParamLimits

0x59a1,	// (0x00042d2e) main_camera2_pane_t5

0x59b3,	// (0x00042d40) main_camera2_pane_t6_ParamLimits

0x59b3,	// (0x00042d40) main_camera2_pane_t6

0x5db5,	// (0x00043142) main_image2_pane_g1_ParamLimits

0x5db5,	// (0x00043142) main_image2_pane_g1

0x5008,	// (0x00042395) smil2_video_pane_ParamLimits

0x5008,	// (0x00042395) smil2_video_pane

0x0d50,	// (0x0003e0dd) aid_zoom_text_primary_cp

0x23b1,	// (0x0003f73e) popup_preview_fixed_window

0xaa91,	// (0x00047e1e) im_reading_pane_g1

0x5897,	// (0x00042c24) cams2_bc_adjust_pane_cp_ParamLimits

0x5897,	// (0x00042c24) cams2_bc_adjust_pane_cp

0x59e3,	// (0x00042d70) cams2_bc_adjust_pane_ParamLimits

0x59e3,	// (0x00042d70) cams2_bc_adjust_pane

0x5dc1,	// (0x0004314e) cams2_bc_adjust_pane_g1

0x5dc9,	// (0x00043156) cams2_slider_pane

0x5dd2,	// (0x0004315f) cams2_slider_pane_g1

0x5ddb,	// (0x00043168) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0004ca33) cams2_slider_pane_g

0x262f,	// (0x0003f9bc) calc_display_pane_ParamLimits

0x264d,	// (0x0003f9da) calc_paper_pane_ParamLimits

0x2669,	// (0x0003f9f6) grid_calc_pane_ParamLimits

0x45b7,	// (0x00041944) popup_clock_digital_window_t1_ParamLimits

0xb688,	// (0x00048a15) main_image_pane_t1

0x2615,	// (0x0003f9a2) aid_size_cell_calc_ParamLimits

0x2615,	// (0x0003f9a2) aid_size_cell_calc

0x54e3,	// (0x00042870) popup_blid_sat_info2_window_ParamLimits

0x54e3,	// (0x00042870) popup_blid_sat_info2_window

0xca35,	// (0x00049dc2) aid_size_cell_blid

0xca3d,	// (0x00049dca) bg_popup_window_pane_cp07

0xca60,	// (0x00049ded) grid_popup_blid_pane

0xca6a,	// (0x00049df7) heading_pane_cp05_ParamLimits

0xca6a,	// (0x00049df7) heading_pane_cp05

0xcb34,	// (0x00049ec1) cell_popup_blid_pane_ParamLimits

0xcb34,	// (0x00049ec1) cell_popup_blid_pane

0xcb58,	// (0x00049ee5) cell_popup_blid_pane_g1

0xcb60,	// (0x00049eed) cell_popup_blid_pane_t1

0x5c00,	// (0x00042f8d) mup2_indicator_pane_ParamLimits

0x5c00,	// (0x00042f8d) mup2_indicator_pane

0xa998,	// (0x00047d25) mup2_visualizer_osc_pane

0xc916,	// (0x00049ca3) mup2_visualizer_spec_pane_ParamLimits

0xc916,	// (0x00049ca3) mup2_visualizer_spec_pane

0x5df5,	// (0x00043182) mup2_spec_half_pane

0x5dfe,	// (0x0004318b) mup2_spec_half_pane_cp

0x5e08,	// (0x00043195) mup2_spec_bar_pane_ParamLimits

0x5e08,	// (0x00043195) mup2_spec_bar_pane

0xc8ab,	// (0x00049c38) mup2_spec_bar_pane_g1

0xc8b5,	// (0x00049c42) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0004c9a6) mup2_spec_bar_pane_g

0x5e27,	// (0x000431b4) mup2_osc_middle_pane

0xc8c7,	// (0x00049c54) mup2_visualizer_osc_pane_g1

0xa08c,	// (0x00047419) popup_number_entry_window_t1_ParamLimits

0xa09f,	// (0x0004742c) popup_number_entry_window_t2_ParamLimits

0xa0b1,	// (0x0004743e) popup_number_entry_window_t3_ParamLimits

0x245f,	// (0x0003f7ec) popup_number_entry_window_t5_ParamLimits

0x245f,	// (0x0003f7ec) popup_number_entry_window_t5

0xf0ca,	// (0x0004c457) popup_number_entry_window_t_ParamLimits

0xa0c3,	// (0x00047450) text_title_cp2_ParamLimits

0x4cfd,	// (0x0004208a) aid_hotspot_pointer_text2_pane

0x4d97,	// (0x00042124) main_viewer_pane_g9_ParamLimits

0x4d97,	// (0x00042124) main_viewer_pane_g9

0xacca,	// (0x00048057) cale_month_pane_t1_ParamLimits

0xad07,	// (0x00048094) bg_cale_pane_ParamLimits

0xad1f,	// (0x000480ac) list_cale_pane_ParamLimits

0xad30,	// (0x000480bd) listscroll_cale_day_pane_t1

0xad6e,	// (0x000480fb) scroll_pane_cp09_ParamLimits

0x4abc,	// (0x00041e49) main_mup_eq_pane_t1_ParamLimits

0x4abc,	// (0x00041e49) main_mup_eq_pane_t1

0x4ad6,	// (0x00041e63) main_mup_eq_pane_t2_ParamLimits

0x4ad6,	// (0x00041e63) main_mup_eq_pane_t2

0x4aee,	// (0x00041e7b) main_mup_eq_pane_t3_ParamLimits

0x4aee,	// (0x00041e7b) main_mup_eq_pane_t3

0x4b06,	// (0x00041e93) main_mup_eq_pane_t4_ParamLimits

0x4b06,	// (0x00041e93) main_mup_eq_pane_t4

0x4b1e,	// (0x00041eab) main_mup_eq_pane_t5_ParamLimits

0x4b1e,	// (0x00041eab) main_mup_eq_pane_t5

0x4b36,	// (0x00041ec3) main_mup_eq_pane_t6_ParamLimits

0x4b36,	// (0x00041ec3) main_mup_eq_pane_t6

0x4b4a,	// (0x00041ed7) main_mup_eq_pane_t7_ParamLimits

0x4b4a,	// (0x00041ed7) main_mup_eq_pane_t7

0x4b5e,	// (0x00041eeb) main_mup_eq_pane_t8_ParamLimits

0x4b5e,	// (0x00041eeb) main_mup_eq_pane_t8

0x4b74,	// (0x00041f01) main_mup_eq_pane_t9_ParamLimits

0x4b74,	// (0x00041f01) main_mup_eq_pane_t9

0x4b8c,	// (0x00041f19) main_mup_eq_pane_t10_ParamLimits

0x4b8c,	// (0x00041f19) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0004c7e2) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0004c7e2) main_mup_eq_pane_t

0x4c49,	// (0x00041fd6) mup_equalizer_pane_cp5_ParamLimits

0x4c5f,	// (0x00041fec) mup_equalizer_pane_cp6_ParamLimits

0x4c77,	// (0x00042004) mup_equalizer_pane_cp7_ParamLimits

0xa062,	// (0x000473ef) main_gallery_pane

0xc8d0,	// (0x00049c5d) smil2_volume_pane

0xc8d8,	// (0x00049c65) smil_status_volume_pane_g1_ParamLimits

0xc8eb,	// (0x00049c78) smil_status_volume_pane_g2_ParamLimits

0x570a,	// (0x00042a97) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0004c9ab) smil_status_volume_pane_g_ParamLimits

0xca3d,	// (0x00049dca) bg_popup_window_pane_cp07_ParamLimits

0xca4b,	// (0x00049dd8) blid_firmament_pane

0x5e30,	// (0x000431bd) aid_size_cell_gallery_ParamLimits

0x5e30,	// (0x000431bd) aid_size_cell_gallery

0x5e3e,	// (0x000431cb) grid_gallery_pane_ParamLimits

0x5e3e,	// (0x000431cb) grid_gallery_pane

0x5e4e,	// (0x000431db) cell_gallery_pane_ParamLimits

0x5e4e,	// (0x000431db) cell_gallery_pane

0xcb6e,	// (0x00049efb) bg_cell_gallery_focus_pane_ParamLimits

0xcb6e,	// (0x00049efb) bg_cell_gallery_focus_pane

0xcb80,	// (0x00049f0d) cell_gallery_pane_g1_ParamLimits

0xcb80,	// (0x00049f0d) cell_gallery_pane_g1

0x5e9c,	// (0x00043229) cell_gallery_pane_g2_ParamLimits

0x5e9c,	// (0x00043229) cell_gallery_pane_g2

0x5ea9,	// (0x00043236) cell_gallery_pane_g3_ParamLimits

0x5ea9,	// (0x00043236) cell_gallery_pane_g3

0xcb8c,	// (0x00049f19) cell_gallery_pane_g4_ParamLimits

0xcb8c,	// (0x00049f19) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0004ca59) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0004ca59) cell_gallery_pane_g

0xcb98,	// (0x00049f25) bg_cell_gallery_focus_pane_g1

0xcba0,	// (0x00049f2d) bg_cell_gallery_focus_pane_g2

0xcba8,	// (0x00049f35) bg_cell_gallery_focus_pane_g3

0xcbb0,	// (0x00049f3d) bg_cell_gallery_focus_pane_g4

0xcbb8,	// (0x00049f45) bg_cell_gallery_focus_pane_g5

0xcbc0,	// (0x00049f4d) bg_cell_gallery_focus_pane_g6

0xcbc8,	// (0x00049f55) bg_cell_gallery_focus_pane_g7

0xcbd0,	// (0x00049f5d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0004ca62) bg_cell_gallery_focus_pane_g

0xcbd8,	// (0x00049f65) aid_firma_cardinal

0xcbec,	// (0x00049f79) blid_firmament_pane_t1

0xcc03,	// (0x00049f90) blid_firmament_pane_t2

0xcc1a,	// (0x00049fa7) blid_firmament_pane_t3

0xcc31,	// (0x00049fbe) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0004ca73) blid_firmament_pane_t

0xcc48,	// (0x00049fd5) blid_sat_info_pane

0xcc58,	// (0x00049fe5) blid_sat_info_pane_g1

0xcc58,	// (0x00049fe5) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0004ca7c) blid_sat_info_pane_g

0xcc62,	// (0x00049fef) blid_sat_info_pane_t1

0xcc70,	// (0x00049ffd) smil2_volume_content_pane

0xcc79,	// (0x0004a006) smil2_volume_pane_g1

0xcc81,	// (0x0004a00e) smil2_volume_content_pane_g1

0xcc8a,	// (0x0004a017) smil2_volume_content_pane_g2

0xcc93,	// (0x0004a020) smil2_volume_content_pane_g3

0xcc9c,	// (0x0004a029) smil2_volume_content_pane_g4

0xcca5,	// (0x0004a032) smil2_volume_content_pane_g5

0xccae,	// (0x0004a03b) smil2_volume_content_pane_g6

0xccb7,	// (0x0004a044) smil2_volume_content_pane_g7

0xccc0,	// (0x0004a04d) smil2_volume_content_pane_g8

0xccc9,	// (0x0004a056) smil2_volume_content_pane_g9

0xccd2,	// (0x0004a05f) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0004ca81) smil2_volume_content_pane_g

0x2c47,	// (0x0003ffd4) cale_week_day_heading_pane_t1_ParamLimits

0x2c82,	// (0x0004000f) cale_week_day_heading_pane_t2_ParamLimits

0x2cbd,	// (0x0004004a) cale_week_day_heading_pane_t3_ParamLimits

0x2cf8,	// (0x00040085) cale_week_day_heading_pane_t4_ParamLimits

0x2d33,	// (0x000400c0) cale_week_day_heading_pane_t5_ParamLimits

0x2d6e,	// (0x000400fb) cale_week_day_heading_pane_t6_ParamLimits

0x2da9,	// (0x00040136) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0004c55e) cale_week_day_heading_pane_t_ParamLimits

0xa93d,	// (0x00047cca) bg_cale_side_pane_ParamLimits

0x2de4,	// (0x00040171) cale_week_time_pane_t1_ParamLimits

0x2dfe,	// (0x0004018b) cale_week_time_pane_t2_ParamLimits

0x2e18,	// (0x000401a5) cale_week_time_pane_t3_ParamLimits

0x2e32,	// (0x000401bf) cale_week_time_pane_t4_ParamLimits

0x2e4c,	// (0x000401d9) cale_week_time_pane_t5_ParamLimits

0x2e66,	// (0x000401f3) cale_week_time_pane_t6_ParamLimits

0x2e86,	// (0x00040213) cale_week_time_pane_t7_ParamLimits

0x2eaa,	// (0x00040237) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0004c56d) cale_week_time_pane_t_ParamLimits

0x2ece,	// (0x0004025b) cell_cale_week_pane_g2_ParamLimits

0xa93d,	// (0x00047cca) bg_cale_side_pane_cp01_ParamLimits

0x4186,	// (0x00041513) cale_month_week_pane_t1_ParamLimits

0x419f,	// (0x0004152c) cale_month_week_pane_t2_ParamLimits

0x41b8,	// (0x00041545) cale_month_week_pane_t3_ParamLimits

0x41d1,	// (0x0004155e) cale_month_week_pane_t4_ParamLimits

0x41ec,	// (0x00041579) cale_month_week_pane_t5_ParamLimits

0x420d,	// (0x0004159a) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0004c642) cale_month_week_pane_t_ParamLimits

0x4354,	// (0x000416e1) cell_cale_month_pane_g1_ParamLimits

0xa062,	// (0x000473ef) main_cale_event_viewer_pane

0xa062,	// (0x000473ef) listscroll_cale_event_viewer_pane

0xccdb,	// (0x0004a068) list_cale_ev_pane

0xcce3,	// (0x0004a070) scroll_pane_cp023

0xccef,	// (0x0004a07c) field_cale_ev_pane_ParamLimits

0xccef,	// (0x0004a07c) field_cale_ev_pane

0xcd0d,	// (0x0004a09a) field_cale_ev_content_pane_ParamLimits

0xcd0d,	// (0x0004a09a) field_cale_ev_content_pane

0xcd19,	// (0x0004a0a6) field_cale_ev_pane_g1_ParamLimits

0xcd19,	// (0x0004a0a6) field_cale_ev_pane_g1

0xcd25,	// (0x0004a0b2) field_cale_ev_pane_g2_ParamLimits

0xcd25,	// (0x0004a0b2) field_cale_ev_pane_g2

0xcd3d,	// (0x0004a0ca) field_cale_ev_pane_g3_ParamLimits

0xcd3d,	// (0x0004a0ca) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0004ca96) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0004ca96) field_cale_ev_pane_g

0xcd55,	// (0x0004a0e2) field_cale_ev_pane_t1_ParamLimits

0xcd55,	// (0x0004a0e2) field_cale_ev_pane_t1

0xad50,	// (0x000480dd) field_cale_ev_content_pane_t1_ParamLimits

0xad50,	// (0x000480dd) field_cale_ev_content_pane_t1

0xb56e,	// (0x000488fb) bg_button_pane_cp01

0x29d0,	// (0x0003fd5d) listscroll_cale_week_pane_ParamLimits

0xa8e8,	// (0x00047c75) popup_toolbar_window_cp01

0xa90e,	// (0x00047c9b) listscroll_cale_week_pane_t1_ParamLimits

0x29d0,	// (0x0003fd5d) listscroll_cale_day_pane_ParamLimits

0xa8e8,	// (0x00047c75) popup_toolbar_window_cp02

0xad30,	// (0x000480bd) listscroll_cale_day_pane_t1_ParamLimits

0x29d0,	// (0x0003fd5d) main_cale_month_pane_ParamLimits

0x55e6,	// (0x00042973) popup_toolbar_window_cp03_ParamLimits

0x55e6,	// (0x00042973) popup_toolbar_window_cp03

0x4f1e,	// (0x000422ab) main_image_pane_g2_ParamLimits

0x4f1e,	// (0x000422ab) main_image_pane_g2

0x4f2a,	// (0x000422b7) main_image_pane_g3_ParamLimits

0x4f2a,	// (0x000422b7) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0004c874) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0004c874) main_image_pane_g

0xb688,	// (0x00048a15) main_image_pane_t1_ParamLimits

0x4f36,	// (0x000422c3) main_image_pane_t2_ParamLimits

0x4f36,	// (0x000422c3) main_image_pane_t2

0x4f48,	// (0x000422d5) main_image_pane_t3_ParamLimits

0x4f48,	// (0x000422d5) main_image_pane_t3

0x4f5a,	// (0x000422e7) main_image_pane_t4_ParamLimits

0x4f5a,	// (0x000422e7) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0004c87b) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0004c87b) main_image_pane_t

0x4f6c,	// (0x000422f9) popup_image_details_window_cp01

0x4f76,	// (0x00042303) popup_toobar_trans_pane_cp01_ParamLimits

0x4f76,	// (0x00042303) popup_toobar_trans_pane_cp01

0x5536,	// (0x000428c3) popup_image_details_window_ParamLimits

0x5536,	// (0x000428c3) popup_image_details_window

0x5544,	// (0x000428d1) popup_image_focus_window

0x5889,	// (0x00042c16) camera2_autofocus_pane_ParamLimits

0x5889,	// (0x00042c16) camera2_autofocus_pane

0xa062,	// (0x000473ef) bg_popup_sub_pane_cp06

0xcd6c,	// (0x0004a0f9) popup_image_focus_window_g1

0xcd74,	// (0x0004a101) popup_image_focus_window_g2

0xcd7c,	// (0x0004a109) popup_image_focus_window_g3

0xcd84,	// (0x0004a111) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0004ca9d) popup_image_focus_window_g

0xcd8c,	// (0x0004a119) popup_image_focus_window_t1

0xcd9a,	// (0x0004a127) popup_image_focus_window_t2

0xcdaa,	// (0x0004a137) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0004caa6) popup_image_focus_window_t

0xcdb8,	// (0x0004a145) camera2_autofocus_pane_g1

0xad42,	// (0x000480cf) bg_tb_trans_pane_cp01

0xcdc6,	// (0x0004a153) popup_image_details_window_g1

0xcdd9,	// (0x0004a166) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0004cab8) popup_image_details_window_g

0xce02,	// (0x0004a18f) popup_image_details_window_t1

0xce14,	// (0x0004a1a1) popup_image_details_window_t2

0xce2d,	// (0x0004a1ba) popup_image_details_window_t3

0xce41,	// (0x0004a1ce) popup_image_details_window_t4

0xce5c,	// (0x0004a1e9) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0004cabf) popup_image_details_window_t

0xa7ad,	// (0x00047b3a) bg_calc_paper_pane_ParamLimits

0xa062,	// (0x000473ef) grid_highlight_pane_cp013

0x2766,	// (0x0003faf3) list_calc_pane_ParamLimits

0x2778,	// (0x0003fb05) scroll_pane_cp024

0xa7c1,	// (0x00047b4e) bg_calc_display_pane_ParamLimits

0x2780,	// (0x0003fb0d) calc_display_pane_t1_ParamLimits

0x2795,	// (0x0003fb22) calc_display_pane_t2_ParamLimits

0x27aa,	// (0x0003fb37) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0004c4de) calc_display_pane_t_ParamLimits

0x2887,	// (0x0003fc14) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0004c4fb) cell_calc_pane_g

0x2890,	// (0x0003fc1d) cell_calc_pane_t1

0xa820,	// (0x00047bad) grid_highlight_pane_cp02_ParamLimits

0xa836,	// (0x00047bc3) toolbar_button_pane_cp01_ParamLimits

0xa836,	// (0x00047bc3) toolbar_button_pane_cp01

0xb6cd,	// (0x00048a5a) temp_image_control_pane_ParamLimits

0xb6cd,	// (0x00048a5a) temp_image_control_pane

0xad42,	// (0x000480cf) main_mp3_pane

0xce76,	// (0x0004a203) temp_image_control_pane_g1_ParamLimits

0xce76,	// (0x0004a203) temp_image_control_pane_g1

0xce84,	// (0x0004a211) temp_image_control_pane_g2_ParamLimits

0xce84,	// (0x0004a211) temp_image_control_pane_g2

0xce96,	// (0x0004a223) temp_image_control_pane_g3_ParamLimits

0xce96,	// (0x0004a223) temp_image_control_pane_g3

0x5ee6,	// (0x00043273) temp_image_control_pane_g4_ParamLimits

0x5ee6,	// (0x00043273) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0004caca) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0004caca) temp_image_control_pane_g

0xce76,	// (0x0004a203) main_mp3_pane_g1

0x5ef7,	// (0x00043284) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0004cad3) main_mp3_pane_g

0xced9,	// (0x0004a266) main_mp3_pane_t1

0xa9a0,	// (0x00047d2d) main_camera_pane_g8_ParamLimits

0xa9a0,	// (0x00047d2d) main_camera_pane_g8

0x3158,	// (0x000404e5) main_video_pane_g7_ParamLimits

0x3158,	// (0x000404e5) main_video_pane_g7

0x59d1,	// (0x00042d5e) main_camera2_pane_t7_ParamLimits

0x59d1,	// (0x00042d5e) main_camera2_pane_t7

0xaae8,	// (0x00047e75) scroll_pane_cp025_ParamLimits

0xaae8,	// (0x00047e75) scroll_pane_cp025

0xaafc,	// (0x00047e89) scroll_pane_cp026_ParamLimits

0xaafc,	// (0x00047e89) scroll_pane_cp026

0xab0b,	// (0x00047e98) wml_content_pane_ParamLimits

0xa062,	// (0x000473ef) main_touch_calib_pane

0x5f9b,	// (0x00043328) main_touch_calib_pane_g1

0x5fa7,	// (0x00043334) main_touch_calib_pane_g2

0x5fb3,	// (0x00043340) main_touch_calib_pane_g3

0x5fbf,	// (0x0004334c) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0004caf1) main_touch_calib_pane_g

0x5fcb,	// (0x00043358) main_touch_calib_pane_t1

0x5fe4,	// (0x00043371) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0004cafa) main_touch_calib_pane_t

0xb28e,	// (0x0004861b) mup_progress_pane_cp02

0xb2c3,	// (0x00048650) navi_pane_g1

0xb37e,	// (0x0004870b) navi_pane_mp_t3

0xad42,	// (0x000480cf) main_mp3_pane_ParamLimits

0x5623,	// (0x000429b0) navi_pane_ParamLimits

0xce76,	// (0x0004a203) main_mp3_pane_g1_ParamLimits

0x5ef7,	// (0x00043284) main_mp3_pane_g2_ParamLimits

0x5f03,	// (0x00043290) main_mp3_pane_g3_ParamLimits

0x5f03,	// (0x00043290) main_mp3_pane_g3

0x5f0f,	// (0x0004329c) main_mp3_pane_g4_ParamLimits

0x5f0f,	// (0x0004329c) main_mp3_pane_g4

0xcea6,	// (0x0004a233) main_mp3_pane_g5_ParamLimits

0xcea6,	// (0x0004a233) main_mp3_pane_g5

0xceb4,	// (0x0004a241) main_mp3_pane_g6_ParamLimits

0xceb4,	// (0x0004a241) main_mp3_pane_g6

0xcec1,	// (0x0004a24e) main_mp3_pane_g7_ParamLimits

0xcec1,	// (0x0004a24e) main_mp3_pane_g7

0xcecd,	// (0x0004a25a) main_mp3_pane_g8_ParamLimits

0xcecd,	// (0x0004a25a) main_mp3_pane_g8

0xf746,	// (0x0004cad3) main_mp3_pane_g_ParamLimits

0x5f1b,	// (0x000432a8) main_mp3_pane_t2

0x5f2b,	// (0x000432b8) main_mp3_pane_t3

0xcee7,	// (0x0004a274) main_mp3_pane_t4

0xcef5,	// (0x0004a282) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0004cae4) main_mp3_pane_t

0xcf03,	// (0x0004a290) mup_progress_pane_cp01

0x0d50,	// (0x0003e0dd) aid_zoom_text_secondary2

0xccdb,	// (0x0004a068) list_cale_ev2_pane

0xcce3,	// (0x0004a070) scroll_pane_cp023_ParamLimits

0x603f,	// (0x000433cc) field_cale_ev2_pane_ParamLimits

0x603f,	// (0x000433cc) field_cale_ev2_pane

0x107a,	// (0x0003e407) field_cale_ev2_pane_g1_ParamLimits

0x107a,	// (0x0003e407) field_cale_ev2_pane_g1

0x1086,	// (0x0003e413) field_cale_ev2_pane_g2_ParamLimits

0x1086,	// (0x0003e413) field_cale_ev2_pane_g2

0x109e,	// (0x0003e42b) field_cale_ev2_pane_g3_ParamLimits

0x109e,	// (0x0003e42b) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0004cb05) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0004cb05) field_cale_ev2_pane_g

0x10c2,	// (0x0003e44f) field_cale_ev2_pane_t1_ParamLimits

0x10c2,	// (0x0003e44f) field_cale_ev2_pane_t1

0x10d9,	// (0x0003e466) field_cale_ev2_pane_t2_ParamLimits

0x10d9,	// (0x0003e466) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0004cb0e) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0004cb0e) field_cale_ev2_pane_t

0x4dff,	// (0x0004218c) main_postcard_pane_g5_ParamLimits

0x4dff,	// (0x0004218c) main_postcard_pane_g5

0x4e0d,	// (0x0004219a) main_postcard_pane_g6_ParamLimits

0x4e0d,	// (0x0004219a) main_postcard_pane_g6

0x2fa2,	// (0x0004032f) camera2_autofocus_pane_cp_ParamLimits

0x2fa2,	// (0x0004032f) camera2_autofocus_pane_cp

0xad42,	// (0x000480cf) main_mup3_pane

0x6089,	// (0x00043416) main_mup3_pane_g1_ParamLimits

0x6089,	// (0x00043416) main_mup3_pane_g1

0x60aa,	// (0x00043437) main_mup3_pane_g2_ParamLimits

0x60aa,	// (0x00043437) main_mup3_pane_g2

0x6124,	// (0x000434b1) main_mup3_pane_g3_ParamLimits

0x6124,	// (0x000434b1) main_mup3_pane_g3

0x6167,	// (0x000434f4) main_mup3_pane_g4_ParamLimits

0x6167,	// (0x000434f4) main_mup3_pane_g4

0x61aa,	// (0x00043537) main_mup3_pane_g5_ParamLimits

0x61aa,	// (0x00043537) main_mup3_pane_g5

0x61ed,	// (0x0004357a) main_mup3_pane_g6_ParamLimits

0x61ed,	// (0x0004357a) main_mup3_pane_g6

0xcf0b,	// (0x0004a298) main_mup3_pane_g7_ParamLimits

0xcf0b,	// (0x0004a298) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0004cb1e) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0004cb1e) main_mup3_pane_g

0x6263,	// (0x000435f0) main_mup3_pane_t1_ParamLimits

0x6263,	// (0x000435f0) main_mup3_pane_t1

0x62d2,	// (0x0004365f) main_mup3_pane_t2_ParamLimits

0x62d2,	// (0x0004365f) main_mup3_pane_t2

0x639b,	// (0x00043728) main_mup3_pane_t4_ParamLimits

0x639b,	// (0x00043728) main_mup3_pane_t4

0x63e9,	// (0x00043776) main_mup3_pane_t5_ParamLimits

0x63e9,	// (0x00043776) main_mup3_pane_t5

0x6499,	// (0x00043826) main_mup3_pane_t6_ParamLimits

0x6499,	// (0x00043826) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0004cb2f) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0004cb2f) main_mup3_pane_t

0x6545,	// (0x000438d2) mup3_progress_pane_ParamLimits

0x6545,	// (0x000438d2) mup3_progress_pane

0x65b9,	// (0x00043946) popup_mup3_control_window_ParamLimits

0x65b9,	// (0x00043946) popup_mup3_control_window

0xcf19,	// (0x0004a2a6) popup_mup3_text_window

0x65d2,	// (0x0004395f) mup3_progress_pane_t1

0x65f1,	// (0x0004397e) mup3_progress_pane_t2

0xcf21,	// (0x0004a2ae) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0004cb3c) mup3_progress_pane_t

0xcf3e,	// (0x0004a2cb) mup_progress_pane_cp03

0xa062,	// (0x000473ef) bg_tb_trans_pane_cp04

0x6610,	// (0x0004399d) mup3_volume_pane

0x6618,	// (0x000439a5) popup_mup3_control_window_g1

0x6621,	// (0x000439ae) mup3_volume_pane_g1

0x662a,	// (0x000439b7) mup3_volume_pane_g2

0x6633,	// (0x000439c0) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0004cb43) mup3_volume_pane_g

0xa062,	// (0x000473ef) bg_tb_trans_pane_cp03

0xcf4e,	// (0x0004a2db) popup_mup3_text_window_g1

0xcf56,	// (0x0004a2e3) popup_mup3_text_window_t1

0xa809,	// (0x00047b96) list_calc_item_pane_g1_ParamLimits

0xc9ab,	// (0x00049d38) mup_volume_pane_cp_g1

0x5ffd,	// (0x0004338a) main_touch_calib_pane_t3

0x6013,	// (0x000433a0) main_touch_calib_pane_t4

0x6029,	// (0x000433b6) main_touch_calib_pane_t5

0x214b,	// (0x0003f4d8) aid_cell_size_toolbar2

0x2153,	// (0x0003f4e0) aid_popup3_width_pane

0x0d48,	// (0x0003e0d5) aid_zoom_text_msg_primary

0x2f77,	// (0x00040304) vorec_t7

0xa7cd,	// (0x00047b5a) bg_calc_paper_pane_g1_ParamLimits

0xa7d9,	// (0x00047b66) bg_calc_paper_pane_g2_ParamLimits

0xa7e5,	// (0x00047b72) bg_calc_paper_pane_g3_ParamLimits

0xa7f1,	// (0x00047b7e) bg_calc_paper_pane_g4_ParamLimits

0xa7fd,	// (0x00047b8a) bg_calc_paper_pane_g5_ParamLimits

0x27e9,	// (0x0003fb76) bg_calc_paper_pane_g6_ParamLimits

0x27fa,	// (0x0003fb87) bg_calc_paper_pane_g7_ParamLimits

0x280b,	// (0x0003fb98) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0004c4e5) bg_calc_paper_pane_g_ParamLimits

0x281c,	// (0x0003fba9) calc_bg_paper_pane_g9_ParamLimits

0x3089,	// (0x00040416) image_qvga_pane_ParamLimits

0x3089,	// (0x00040416) image_qvga_pane

0xa6f0,	// (0x00047a7d) bg_popup_sub_pane_cp04_ParamLimits

0xb604,	// (0x00048991) popup_mup_playback_window_g1_ParamLimits

0xb610,	// (0x0004899d) popup_mup_playback_window_t1_ParamLimits

0xb625,	// (0x000489b2) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0004c86f) popup_mup_playback_window_t_ParamLimits

0x5b00,	// (0x00042e8d) main_mup2_pane_g3_ParamLimits

0x5b00,	// (0x00042e8d) main_mup2_pane_g3

0x3341,	// (0x000406ce) popup_toolbar_window_cp04

0xba1a,	// (0x00048da7) popup_call2_audio_second_window_g3_ParamLimits

0xba1a,	// (0x00048da7) popup_call2_audio_second_window_g3

0xbe24,	// (0x000491b1) popup_call2_audio_first_window_g4_ParamLimits

0xbe24,	// (0x000491b1) popup_call2_audio_first_window_g4

0xc4a3,	// (0x00049830) popup_call2_audio_in_window_g4_ParamLimits

0xc4a3,	// (0x00049830) popup_call2_audio_in_window_g4

0x4f11,	// (0x0004229e) aid_area_sk_bg_cut_ParamLimits

0x4f11,	// (0x0004229e) aid_area_sk_bg_cut

0xb63a,	// (0x000489c7) aid_area_sk_bg_cut_2_ParamLimits

0xb63a,	// (0x000489c7) aid_area_sk_bg_cut_2

0x5e8c,	// (0x00043219) aid_placing_details_win

0x5e94,	// (0x00043221) aid_placing_details_win_2

0xcdb8,	// (0x0004a145) camera2_autofocus_pane_g1_ParamLimits

0x23a2,	// (0x0003f72f) popup_fixed_preview_cale_window_ParamLimits

0x23a2,	// (0x0003f72f) popup_fixed_preview_cale_window

0xb416,	// (0x000487a3) navi_slider_pane_g3

0xb41f,	// (0x000487ac) navi_slider_pane_g4

0xb428,	// (0x000487b5) navi_slider_pane_g5

0xb416,	// (0x000487a3) navi_slider_pane_g6

0x4860,	// (0x00041bed) navi_slider_pane_g7

0xb53b,	// (0x000488c8) mup_scale_pane_g3

0xb544,	// (0x000488d1) mup_scale_pane_g4

0xb54d,	// (0x000488da) mup_scale_pane_g5

0x4c8f,	// (0x0004201c) mup_scale_pane_g6

0x4c98,	// (0x00042025) mup_scale_pane_g7

0xb416,	// (0x000487a3) cams2_slider_pane_g3

0xca2d,	// (0x00049dba) cams2_slider_pane_g4

0x5de4,	// (0x00043171) cams2_slider_pane_g5

0xb416,	// (0x000487a3) cams2_slider_pane_g6

0x5dec,	// (0x00043179) cams2_slider_pane_g7

0xcc58,	// (0x00049fe5) camera2_autofocus_pane_cp_g1

0xc844,	// (0x00049bd1) bg_popup_preview_window_pane_cp02_ParamLimits

0xc844,	// (0x00049bd1) bg_popup_preview_window_pane_cp02

0xcf64,	// (0x0004a2f1) list_fp_cale_pane_ParamLimits

0xcf64,	// (0x0004a2f1) list_fp_cale_pane

0xcf70,	// (0x0004a2fd) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf70,	// (0x0004a2fd) popup_fixed_preview_cale_window_t1

0x663c,	// (0x000439c9) popup_fixed_preview_cale_window_t2_ParamLimits

0x663c,	// (0x000439c9) popup_fixed_preview_cale_window_t2

0x6651,	// (0x000439de) popup_fixed_preview_cale_window_t3_ParamLimits

0x6651,	// (0x000439de) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0004cb4a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0004cb4a) popup_fixed_preview_cale_window_t

0x6666,	// (0x000439f3) list_single_fp_cale_pane_ParamLimits

0x6666,	// (0x000439f3) list_single_fp_cale_pane

0xcf8e,	// (0x0004a31b) list_single_fp_cale_pane_g1_ParamLimits

0xcf8e,	// (0x0004a31b) list_single_fp_cale_pane_g1

0xcf9a,	// (0x0004a327) list_single_fp_cale_pane_g2_ParamLimits

0xcf9a,	// (0x0004a327) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0004cb51) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0004cb51) list_single_fp_cale_pane_g

0xcfb3,	// (0x0004a340) list_single_fp_cale_pane_t1_ParamLimits

0xcfb3,	// (0x0004a340) list_single_fp_cale_pane_t1

0xcfc5,	// (0x0004a352) list_single_fp_cale_pane_t2_ParamLimits

0xcfc5,	// (0x0004a352) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0004cb58) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0004cb58) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa062,	// (0x000473ef) main_dialer_pane

0x6679,	// (0x00043a06) aid_cell_size_keypad

0x6683,	// (0x00043a10) dialer_ne_pane

0x668d,	// (0x00043a1a) grid_dialer_command_1_pane

0x6695,	// (0x00043a22) grid_dialer_command_2_pane

0x669d,	// (0x00043a2a) grid_dialer_keypad_pane

0x66b1,	// (0x00043a3e) bg_popup_call_pane_cp06_ParamLimits

0x66b1,	// (0x00043a3e) bg_popup_call_pane_cp06

0x66bd,	// (0x00043a4a) dialer_ne_clear_pane_ParamLimits

0x66bd,	// (0x00043a4a) dialer_ne_clear_pane

0xcff8,	// (0x0004a385) dialer_ne_pane_g1

0xd000,	// (0x0004a38d) dialer_ne_pane_t1_ParamLimits

0xd000,	// (0x0004a38d) dialer_ne_pane_t1

0x66c9,	// (0x00043a56) dialer_ne_pane_t2_ParamLimits

0x66c9,	// (0x00043a56) dialer_ne_pane_t2

0x66e6,	// (0x00043a73) dialer_ne_pane_t3_ParamLimits

0x66e6,	// (0x00043a73) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0004cb5d) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0004cb5d) dialer_ne_pane_t

0x670a,	// (0x00043a97) dialer_ne_pane_t3_copy1_ParamLimits

0x670a,	// (0x00043a97) dialer_ne_pane_t3_copy1

0x672e,	// (0x00043abb) cell_dialer_keypad_pane_ParamLimits

0x672e,	// (0x00043abb) cell_dialer_keypad_pane

0x6745,	// (0x00043ad2) cell_dialer_command_1_pane_ParamLimits

0x6745,	// (0x00043ad2) cell_dialer_command_1_pane

0x675b,	// (0x00043ae8) cell_dialer_command_2_pane_ParamLimits

0x675b,	// (0x00043ae8) cell_dialer_command_2_pane

0xd012,	// (0x0004a39f) bg_button_pane_cp02_ParamLimits

0xd012,	// (0x0004a39f) bg_button_pane_cp02

0x676a,	// (0x00043af7) cell_dialer_keypad_pane_g1_ParamLimits

0x676a,	// (0x00043af7) cell_dialer_keypad_pane_g1

0xd012,	// (0x0004a39f) bg_button_pane_cp03_ParamLimits

0xd012,	// (0x0004a39f) bg_button_pane_cp03

0x677f,	// (0x00043b0c) cell_dialer_command_1_pane_g1_ParamLimits

0x677f,	// (0x00043b0c) cell_dialer_command_1_pane_g1

0xd01e,	// (0x0004a3ab) bg_button_pane_cp04

0x6793,	// (0x00043b20) cell_dialer_command_2_pane_g1

0xa998,	// (0x00047d25) bg_button_pane_cp06

0xd026,	// (0x0004a3b3) dialer_ne_clear_pane_g1

0xb2cf,	// (0x0004865c) navi_pane_g2

0xb2fd,	// (0x0004868a) navi_pane_g3

0x0002,

0xf3e5,	// (0x0004c772) navi_pane_g

0xb38c,	// (0x00048719) navi_pane_mv_g2

0xb3b3,	// (0x00048740) navi_pane_mv_g5

0x482b,	// (0x00041bb8) navi_pane_mv_t1

0xa7c1,	// (0x00047b4e) main_clock2_pane

0x67d1,	// (0x00043b5e) main_clock2_list_pane_ParamLimits

0x67d1,	// (0x00043b5e) main_clock2_list_pane

0x67fb,	// (0x00043b88) main_clock2_pane_t1_ParamLimits

0x67fb,	// (0x00043b88) main_clock2_pane_t1

0x681f,	// (0x00043bac) main_clock2_pane_t2_ParamLimits

0x681f,	// (0x00043bac) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0004cb69) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0004cb69) main_clock2_pane_t

0x687a,	// (0x00043c07) popup_clock_analogue_window_cp03_ParamLimits

0x687a,	// (0x00043c07) popup_clock_analogue_window_cp03

0x6898,	// (0x00043c25) popup_clock_digital_window_cp02_ParamLimits

0x6898,	// (0x00043c25) popup_clock_digital_window_cp02

0x6905,	// (0x00043c92) main_clock2_list_single_pane_ParamLimits

0x6905,	// (0x00043c92) main_clock2_list_single_pane

0xa998,	// (0x00047d25) list_highlight_pane_cp05

0xd060,	// (0x0004a3ed) main_clock2_list_single_pane_t1

0x3341,	// (0x000406ce) popup_toolbar_window_cp04_ParamLimits

0x5eb6,	// (0x00043243) camera2_autofocus_pane_g2_ParamLimits

0x5eb6,	// (0x00043243) camera2_autofocus_pane_g2

0x5ec2,	// (0x0004324f) camera2_autofocus_pane_g3_ParamLimits

0x5ec2,	// (0x0004324f) camera2_autofocus_pane_g3

0x5ece,	// (0x0004325b) camera2_autofocus_pane_g4_ParamLimits

0x5ece,	// (0x0004325b) camera2_autofocus_pane_g4

0x5eda,	// (0x00043267) camera2_autofocus_pane_g5_ParamLimits

0x5eda,	// (0x00043267) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0004caad) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0004caad) camera2_autofocus_pane_g

0x6069,	// (0x000433f6) camera2_autofocus_pane_cp_g2

0x6071,	// (0x000433fe) camera2_autofocus_pane_cp_g3

0x6079,	// (0x00043406) camera2_autofocus_pane_cp_g4

0x6081,	// (0x0004340e) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0004cb13) camera2_autofocus_pane_cp_g

0x66a9,	// (0x00043a36) popup_dialer_spcha_window

0xa062,	// (0x000473ef) bg_popup_sub_pane_cp07

0xd06e,	// (0x0004a3fb) list_spcha_pane

0xd076,	// (0x0004a403) list_single_spcha_pane_ParamLimits

0xd076,	// (0x0004a403) list_single_spcha_pane

0xa062,	// (0x000473ef) list_highlight_pane_cp06

0xd087,	// (0x0004a414) list_single_spcha_pane_t1

0xc24d,	// (0x000495da) popup_call2_audio_out_window_g4_ParamLimits

0xc24d,	// (0x000495da) popup_call2_audio_out_window_g4

0xa062,	// (0x000473ef) main_imed2_pane

0x554c,	// (0x000428d9) popup_imed_adjust2_window

0x555f,	// (0x000428ec) popup_imed_trans_window_ParamLimits

0x555f,	// (0x000428ec) popup_imed_trans_window

0xca96,	// (0x00049e23) popup_blid_sat_info2_window_t1

0xcaa4,	// (0x00049e31) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0004ca42) popup_blid_sat_info2_window_t

0x69af,	// (0x00043d3c) aid_size_cell_colour_35

0x69c9,	// (0x00043d56) aid_size_cell_colour_112

0x69e0,	// (0x00043d6d) aid_size_cell_effect

0xad42,	// (0x000480cf) bg_tb_trans_pane_cp02

0xb3db,	// (0x00048768) heading_imed_pane

0x69fa,	// (0x00043d87) listscroll_imed_pane

0xd095,	// (0x0004a422) heading_imed_pane_g1

0xd09d,	// (0x0004a42a) heading_imed_pane_t1

0xd0ab,	// (0x0004a438) grid_imed_colour_35_pane_ParamLimits

0xd0ab,	// (0x0004a438) grid_imed_colour_35_pane

0x6a06,	// (0x00043d93) grid_imed_effect_pane

0xd0c3,	// (0x0004a450) list_imed_aspect_pane

0x6a16,	// (0x00043da3) scroll_pane_cp027_ParamLimits

0x6a16,	// (0x00043da3) scroll_pane_cp027

0x6a22,	// (0x00043daf) cell_imed_effect_pane_ParamLimits

0x6a22,	// (0x00043daf) cell_imed_effect_pane

0xd0cb,	// (0x0004a458) cell_imed_colour_pane_ParamLimits

0xd0cb,	// (0x0004a458) cell_imed_colour_pane

0xd10d,	// (0x0004a49a) cell_imed_colour_pane_g1_ParamLimits

0xd10d,	// (0x0004a49a) cell_imed_colour_pane_g1

0xd11e,	// (0x0004a4ab) hgihlgiht_grid_pane_cp016_ParamLimits

0xd11e,	// (0x0004a4ab) hgihlgiht_grid_pane_cp016

0x6a3a,	// (0x00043dc7) cell_imed_effect_pane_g1

0x6a42,	// (0x00043dcf) grid_highlight_pane_cp017

0xd12f,	// (0x0004a4bc) list_imed_single_pane_ParamLimits

0xd12f,	// (0x0004a4bc) list_imed_single_pane

0xa062,	// (0x000473ef) list_highlight_pane_cp07

0xd144,	// (0x0004a4d1) list_imed_aspect_pane_comp1_t1

0xc850,	// (0x00049bdd) bg_tb_trans_pane_cp05

0xd166,	// (0x0004a4f3) popup_imed_adjust2_window_g1

0xd18d,	// (0x0004a51a) popup_imed_adjust2_window_t1

0xd1a5,	// (0x0004a532) slider_imed_adjust_pane

0xd1b9,	// (0x0004a546) slider_imed_adjust_pane_g1

0xd1c9,	// (0x0004a556) slider_imed_adjust_pane_g2

0xd1d9,	// (0x0004a566) slider_imed_adjust_pane_g3

0xd1ea,	// (0x0004a577) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0004cb86) slider_imed_adjust_pane_g

0x6a4b,	// (0x00043dd8) aid_size_cell_clipart2

0x6a57,	// (0x00043de4) grid_imed_clipart_pane

0xd1fb,	// (0x0004a588) scroll_pane_cp031

0x6a61,	// (0x00043dee) cell_imed_clipart_pane_ParamLimits

0x6a61,	// (0x00043dee) cell_imed_clipart_pane

0x6a84,	// (0x00043e11) cell_imed_clipart_pane_g1

0xa062,	// (0x000473ef) grid_highlight_pane_cp014

0x67dd,	// (0x00043b6a) main_clock2_pane_g1_ParamLimits

0x67dd,	// (0x00043b6a) main_clock2_pane_g1

0x68b0,	// (0x00043c3d) aid_call2_pane_cp10

0x68c2,	// (0x00043c4f) aid_call_pane_cp10

0xb22e,	// (0x000485bb) popup_clock_analogue_window_cp10_g1

0xb22e,	// (0x000485bb) popup_clock_analogue_window_cp10_g2

0x68d4,	// (0x00043c61) popup_clock_analogue_window_cp10_g3

0x68d4,	// (0x00043c61) popup_clock_analogue_window_cp10_g4

0xb22e,	// (0x000485bb) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0004cb74) popup_clock_analogue_window_cp10_g

0x68e6,	// (0x00043c73) popup_clock_analogue_window_cp10_t1

0x6917,	// (0x00043ca4) clock_digital_number_pane_cp10_ParamLimits

0x6917,	// (0x00043ca4) clock_digital_number_pane_cp10

0x692f,	// (0x00043cbc) clock_digital_number_pane_cp11_ParamLimits

0x692f,	// (0x00043cbc) clock_digital_number_pane_cp11

0x6947,	// (0x00043cd4) clock_digital_number_pane_cp12_ParamLimits

0x6947,	// (0x00043cd4) clock_digital_number_pane_cp12

0x695f,	// (0x00043cec) clock_digital_number_pane_cp13_ParamLimits

0x695f,	// (0x00043cec) clock_digital_number_pane_cp13

0x6977,	// (0x00043d04) clock_digital_separator_pane_cp10_ParamLimits

0x6977,	// (0x00043d04) clock_digital_separator_pane_cp10

0x698f,	// (0x00043d1c) popup_clock_digital_window_cp02_t1_ParamLimits

0x698f,	// (0x00043d1c) popup_clock_digital_window_cp02_t1

0xa6d2,	// (0x00047a5f) clock_digital_number_pane_cp10_g1

0xa6d2,	// (0x00047a5f) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0004cb8f) clock_digital_number_pane_cp10_g

0xa6d2,	// (0x00047a5f) clock_digital_separator_pane_cp10_g1

0xa6d2,	// (0x00047a5f) clock_digital_separator_pane_g2_cp10

0xb3bb,	// (0x00048748) navi_pane_vded_g4

0xb3c4,	// (0x00048751) navi_pane_vded_g5

0xb3cd,	// (0x0004875a) navi_pane_vded_t1

0xa062,	// (0x000473ef) main_vded_pane

0x6a8d,	// (0x00043e1a) main_vded_pane_g1

0x6a99,	// (0x00043e26) main_vded_pane_g2

0x6aa3,	// (0x00043e30) main_vded_pane_g3

0x0002,

0xf807,	// (0x0004cb94) main_vded_pane_g

0x6aad,	// (0x00043e3a) main_vded_pane_t1

0x6abb,	// (0x00043e48) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0004cb9b) main_vded_pane_t

0x6ac9,	// (0x00043e56) vded_slider_pane

0x6ad3,	// (0x00043e60) vded_video_pane

0xd203,	// (0x0004a590) vded_video_pane_g1

0x6add,	// (0x00043e6a) vded_video_pane_g2

0xcc58,	// (0x00049fe5) vded_video_pane_g3

0x0002,

0xf813,	// (0x0004cba0) vded_video_pane_g

0xd20d,	// (0x0004a59a) vded_slider_pane_g1

0xc9ab,	// (0x00049d38) vded_slider_pane_g2

0xd216,	// (0x0004a5a3) vded_slider_pane_g3

0xd21f,	// (0x0004a5ac) vded_slider_pane_g4

0xd228,	// (0x0004a5b5) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0004cba7) vded_slider_pane_g

0x65ab,	// (0x00043938) mup3_rocker_pane_ParamLimits

0x65ab,	// (0x00043938) mup3_rocker_pane

0x6ae6,	// (0x00043e73) mup3_control_keys_pane_g1

0x6aee,	// (0x00043e7b) mup3_control_keys_pane_g2

0x6af6,	// (0x00043e83) mup3_control_keys_pane_g3

0x6afe,	// (0x00043e8b) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0004cbb2) mup3_control_keys_pane_g

0x23ca,	// (0x0003f757) popup_toolbar2_fixed_window_cp01_ParamLimits

0x23ca,	// (0x0003f757) popup_toolbar2_fixed_window_cp01

0x65c5,	// (0x00043952) popup_toolbar2_fixed_window_cp02_ParamLimits

0x65c5,	// (0x00043952) popup_toolbar2_fixed_window_cp02

0xbb8c,	// (0x00048f19) popup_call2_audio_second_window_t4_ParamLimits

0xbb8c,	// (0x00048f19) popup_call2_audio_second_window_t4

0xc0ba,	// (0x00049447) popup_call2_audio_first_window_t6_ParamLimits

0xc0ba,	// (0x00049447) popup_call2_audio_first_window_t6

0xc350,	// (0x000496dd) popup_call2_audio_out_window_t6_ParamLimits

0xc350,	// (0x000496dd) popup_call2_audio_out_window_t6

0xa062,	// (0x000473ef) main_vitu_pane

0x6b0e,	// (0x00043e9b) aid_size_cell_itu_ParamLimits

0x6b0e,	// (0x00043e9b) aid_size_cell_itu

0xdf46,	// (0x0004b2d3) bg_popup_window_pane_cp08_ParamLimits

0xdf46,	// (0x0004b2d3) bg_popup_window_pane_cp08

0x6b1c,	// (0x00043ea9) field_vitu_entry_pane_ParamLimits

0x6b1c,	// (0x00043ea9) field_vitu_entry_pane

0x6b2b,	// (0x00043eb8) grid_vitu_function_pane_ParamLimits

0x6b2b,	// (0x00043eb8) grid_vitu_function_pane

0x6b3b,	// (0x00043ec8) grid_vitu_itu_pane_ParamLimits

0x6b3b,	// (0x00043ec8) grid_vitu_itu_pane

0x6b4b,	// (0x00043ed8) cell_vitu_itu_pane_ParamLimits

0x6b4b,	// (0x00043ed8) cell_vitu_itu_pane

0x6b60,	// (0x00043eed) cell_vitu_function_pane_ParamLimits

0x6b60,	// (0x00043eed) cell_vitu_function_pane

0xad42,	// (0x000480cf) bg_popup_sub_pane_cp08_ParamLimits

0xad42,	// (0x000480cf) bg_popup_sub_pane_cp08

0x6b72,	// (0x00043eff) field_vitu_entry_pane_t1_ParamLimits

0x6b72,	// (0x00043eff) field_vitu_entry_pane_t1

0xd249,	// (0x0004a5d6) field_vitu_entry_pane_t2_ParamLimits

0xd249,	// (0x0004a5d6) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0004cbc0) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0004cbc0) field_vitu_entry_pane_t

0xd266,	// (0x0004a5f3) bg_button_pane_cp05_ParamLimits

0xd266,	// (0x0004a5f3) bg_button_pane_cp05

0x6b8f,	// (0x00043f1c) cell_vitu_itu_pane_g1

0x6ba7,	// (0x00043f34) cell_vitu_itu_pane_t1_ParamLimits

0x6ba7,	// (0x00043f34) cell_vitu_itu_pane_t1

0x6bb9,	// (0x00043f46) cell_vitu_itu_pane_t2_ParamLimits

0x6bb9,	// (0x00043f46) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0004cbc5) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0004cbc5) cell_vitu_itu_pane_t

0xd274,	// (0x0004a601) bg_button_pane_cp07

0x6bee,	// (0x00043f7b) cell_vitu_function_pane_g1

0x268d,	// (0x0003fa1a) main_calc_pane_g1

0x2187,	// (0x0003f514) aid_visual_content_pane

0xa062,	// (0x000473ef) main_vradio_pane

0x6bf7,	// (0x00043f84) main_vradio_pane_g1_ParamLimits

0x6bf7,	// (0x00043f84) main_vradio_pane_g1

0xd27e,	// (0x0004a60b) main_vradio_pane_g2_ParamLimits

0xd27e,	// (0x0004a60b) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0004cbcc) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0004cbcc) main_vradio_pane_g

0x6c07,	// (0x00043f94) main_vradio_pane_t1_ParamLimits

0x6c07,	// (0x00043f94) main_vradio_pane_t1

0x6c19,	// (0x00043fa6) main_vradio_pane_t2_ParamLimits

0x6c19,	// (0x00043fa6) main_vradio_pane_t2

0xd28b,	// (0x0004a618) main_vradio_pane_t3_ParamLimits

0xd28b,	// (0x0004a618) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0004cbd1) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0004cbd1) main_vradio_pane_t

0x6c2b,	// (0x00043fb8) vradio_rocker_control_pane_ParamLimits

0x6c2b,	// (0x00043fb8) vradio_rocker_control_pane

0x6c37,	// (0x00043fc4) vradio_station_info_pane_ParamLimits

0x6c37,	// (0x00043fc4) vradio_station_info_pane

0xd29f,	// (0x0004a62c) vradio_frequency_info_pane_ParamLimits

0xd29f,	// (0x0004a62c) vradio_frequency_info_pane

0xcc58,	// (0x00049fe5) vradio_station_info_pane_g1

0xd2ae,	// (0x0004a63b) vradio_station_info_pane_t1_ParamLimits

0xd2ae,	// (0x0004a63b) vradio_station_info_pane_t1

0xd2d0,	// (0x0004a65d) vradio_station_info_pane_t2_ParamLimits

0xd2d0,	// (0x0004a65d) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0004cbd8) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0004cbd8) vradio_station_info_pane_t

0xd2e2,	// (0x0004a66f) vradio_tuning_pane

0xd2ea,	// (0x0004a677) vradio_rocker_control_pane_g1

0xd2f2,	// (0x0004a67f) vradio_rocker_control_pane_g2

0xd2fa,	// (0x0004a687) vradio_rocker_control_pane_g3

0xd302,	// (0x0004a68f) vradio_rocker_control_pane_g4

0xd30a,	// (0x0004a697) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0004cbdd) vradio_rocker_control_pane_g

0x6c46,	// (0x00043fd3) vradio_frequency_info_pane_g1

0xd312,	// (0x0004a69f) vradio_frequency_info_pane_t1_ParamLimits

0xd312,	// (0x0004a69f) vradio_frequency_info_pane_t1

0x6c50,	// (0x00043fdd) vradio_tuning_pane_g1

0x6c59,	// (0x00043fe6) vradio_tuning_pane_t1

0x21d0,	// (0x0003f55d) area_side_right_pane_ParamLimits

0x21d0,	// (0x0003f55d) area_side_right_pane

0xc80b,	// (0x00049b98) status_small_pane_g1

0xc813,	// (0x00049ba0) status_small_pane_g2

0xc81c,	// (0x00049ba9) status_small_pane_g3

0xc825,	// (0x00049bb2) status_small_pane_g4

0x0003,

0xf60b,	// (0x0004c998) status_small_pane_g

0xc82e,	// (0x00049bbb) status_small_pane_t1

0xa062,	// (0x000473ef) main_video3_pane

0xd326,	// (0x0004a6b3) cams_zoom_vslider_pane

0xd32e,	// (0x0004a6bb) image3_wide_pane_ParamLimits

0xd32e,	// (0x0004a6bb) image3_wide_pane

0xd348,	// (0x0004a6d5) image3_wide_small_pane

0xd354,	// (0x0004a6e1) main_video3_pane_g1_ParamLimits

0xd354,	// (0x0004a6e1) main_video3_pane_g1

0xd370,	// (0x0004a6fd) main_video3_pane_g2_ParamLimits

0xd370,	// (0x0004a6fd) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0004cbe8) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0004cbe8) main_video3_pane_g

0xd38c,	// (0x0004a719) main_video3_pane_t1_ParamLimits

0xd38c,	// (0x0004a719) main_video3_pane_t1

0xd3b7,	// (0x0004a744) main_video3_pane_t2_ParamLimits

0xd3b7,	// (0x0004a744) main_video3_pane_t2

0xd3e2,	// (0x0004a76f) main_video3_pane_t3_ParamLimits

0xd3e2,	// (0x0004a76f) main_video3_pane_t3

0x0002,

0xf860,	// (0x0004cbed) main_video3_pane_t_ParamLimits

0xf860,	// (0x0004cbed) main_video3_pane_t

0xd40f,	// (0x0004a79c) cams_zoom_vslider_pane_g1

0xd418,	// (0x0004a7a5) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0004cbf4) cams_zoom_vslider_pane_g

0xd420,	// (0x0004a7ad) small_slider_vertical_pane

0xcc58,	// (0x00049fe5) small_slider_vertical_pane_g1

0xcc58,	// (0x00049fe5) small_slider_vertical_pane_g2

0xd428,	// (0x0004a7b5) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0004cbf9) small_slider_vertical_pane_g

0xa062,	// (0x000473ef) main_hwr_training_pane

0xd431,	// (0x0004a7be) hwr_training_instruct_pane_ParamLimits

0xd431,	// (0x0004a7be) hwr_training_instruct_pane

0x6c68,	// (0x00043ff5) hwr_training_navi_pane_ParamLimits

0x6c68,	// (0x00043ff5) hwr_training_navi_pane

0x6c82,	// (0x0004400f) hwr_training_write_pane_ParamLimits

0x6c82,	// (0x0004400f) hwr_training_write_pane

0xa062,	// (0x000473ef) bg_frame_shadow_pane

0xd47c,	// (0x0004a809) hwr_training_write_pane_g1

0xd484,	// (0x0004a811) hwr_training_write_pane_g2

0xd48c,	// (0x0004a819) hwr_training_write_pane_g3

0xd494,	// (0x0004a821) hwr_training_write_pane_g4

0xd49c,	// (0x0004a829) hwr_training_write_pane_g5

0xd4a4,	// (0x0004a831) hwr_training_write_pane_g6

0xd4ac,	// (0x0004a839) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0004cc00) hwr_training_write_pane_g

0x6cba,	// (0x00044047) hwr_training_navi_pane_g1_ParamLimits

0x6cba,	// (0x00044047) hwr_training_navi_pane_g1

0x6ccc,	// (0x00044059) hwr_training_navi_pane_g2_ParamLimits

0x6ccc,	// (0x00044059) hwr_training_navi_pane_g2

0x6cde,	// (0x0004406b) hwr_training_navi_pane_g3_ParamLimits

0x6cde,	// (0x0004406b) hwr_training_navi_pane_g3

0x6cee,	// (0x0004407b) hwr_training_navi_pane_g4_ParamLimits

0x6cee,	// (0x0004407b) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0004cc0f) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0004cc0f) hwr_training_navi_pane_g

0x6d08,	// (0x00044095) hwr_training_navi_pane_t1

0x6d16,	// (0x000440a3) list_single_hwr_training_instruct_pane_ParamLimits

0x6d16,	// (0x000440a3) list_single_hwr_training_instruct_pane

0xd4b4,	// (0x0004a841) list_single_hwr_training_instruct_pane_t1

0xcb98,	// (0x00049f25) bg_frame_shadow_pane_g1

0xd4c3,	// (0x0004a850) bg_frame_shadow_pane_g2

0xd4cb,	// (0x0004a858) bg_frame_shadow_pane_g3

0xd4d3,	// (0x0004a860) bg_frame_shadow_pane_g4

0xd4db,	// (0x0004a868) bg_frame_shadow_pane_g5

0xd4e3,	// (0x0004a870) bg_frame_shadow_pane_g6

0xd4eb,	// (0x0004a878) bg_frame_shadow_pane_g7

0xa88c,	// (0x00047c19) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0004cc1a) bg_frame_shadow_pane_g

0xa062,	// (0x000473ef) main_video_tele_dialer_pane

0x6d3f,	// (0x000440cc) aid_size_cell_video_keypad_ParamLimits

0x6d3f,	// (0x000440cc) aid_size_cell_video_keypad

0x6d4f,	// (0x000440dc) grid_video_dialer_keypad_pane_ParamLimits

0x6d4f,	// (0x000440dc) grid_video_dialer_keypad_pane

0x6d83,	// (0x00044110) video_down_pane_cp_ParamLimits

0x6d83,	// (0x00044110) video_down_pane_cp

0x6dad,	// (0x0004413a) cell_video_dialer_keypad_pane_ParamLimits

0x6dad,	// (0x0004413a) cell_video_dialer_keypad_pane

0xd4f3,	// (0x0004a880) bg_button_pane_cp08_ParamLimits

0xd4f3,	// (0x0004a880) bg_button_pane_cp08

0x6dc2,	// (0x0004414f) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6dc2,	// (0x0004414f) cell_video_dialer_keypad_pane_g1

0x659f,	// (0x0004392c) mup3_rocker2_pane_ParamLimits

0x659f,	// (0x0004392c) mup3_rocker2_pane

0xcc58,	// (0x00049fe5) mup3_rocker2_pane_g1

0x54c0,	// (0x0004284d) main_dialer2_pane

0xa062,	// (0x000473ef) main_mp4_pane

0x6e04,	// (0x00044191) main_mp4_pane_g1_ParamLimits

0x6e04,	// (0x00044191) main_mp4_pane_g1

0x6e12,	// (0x0004419f) main_mp4_pane_g2_ParamLimits

0x6e12,	// (0x0004419f) main_mp4_pane_g2

0x6e20,	// (0x000441ad) main_mp4_pane_g3_ParamLimits

0x6e20,	// (0x000441ad) main_mp4_pane_g3

0x6e65,	// (0x000441f2) main_mp4_pane_g4_ParamLimits

0x6e65,	// (0x000441f2) main_mp4_pane_g4

0x6e8d,	// (0x0004421a) main_mp4_pane_g5_ParamLimits

0x6e8d,	// (0x0004421a) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0004cc3a) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0004cc3a) main_mp4_pane_g

0x6edd,	// (0x0004426a) main_mp4_pane_t1_ParamLimits

0x6edd,	// (0x0004426a) main_mp4_pane_t1

0x6f39,	// (0x000442c6) main_mp4_pane_t2_ParamLimits

0x6f39,	// (0x000442c6) main_mp4_pane_t2

0xd4ff,	// (0x0004a88c) main_mp4_pane_t3_ParamLimits

0xd4ff,	// (0x0004a88c) main_mp4_pane_t3

0x6f8b,	// (0x00044318) main_mp4_pane_t4_ParamLimits

0x6f8b,	// (0x00044318) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0004cc47) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0004cc47) main_mp4_pane_t

0x6fcf,	// (0x0004435c) mp4_progress_pane_ParamLimits

0x6fcf,	// (0x0004435c) mp4_progress_pane

0x7019,	// (0x000443a6) mp4_rocker_pane_ParamLimits

0x7019,	// (0x000443a6) mp4_rocker_pane

0xd527,	// (0x0004a8b4) mp4_progress_pane_t1

0xd540,	// (0x0004a8cd) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0004cc50) mp4_progress_pane_t

0xd559,	// (0x0004a8e6) mup_progress_pane_cp04

0xcc58,	// (0x00049fe5) mp4_rocker_pane_g1

0x7039,	// (0x000443c6) aid_cell_size_keypad2_ParamLimits

0x7039,	// (0x000443c6) aid_cell_size_keypad2

0x7049,	// (0x000443d6) dialer2_ne_pane_ParamLimits

0x7049,	// (0x000443d6) dialer2_ne_pane

0x7057,	// (0x000443e4) grid_dialer2_keypad_pane_ParamLimits

0x7057,	// (0x000443e4) grid_dialer2_keypad_pane

0xda5a,	// (0x0004ade7) bg_popup_call_pane_cp07_ParamLimits

0xda5a,	// (0x0004ade7) bg_popup_call_pane_cp07

0x7067,	// (0x000443f4) dialer2_ne_pane_t1_ParamLimits

0x7067,	// (0x000443f4) dialer2_ne_pane_t1

0x708c,	// (0x00044419) cell_dialer2_keypad_pane_ParamLimits

0x708c,	// (0x00044419) cell_dialer2_keypad_pane

0xd577,	// (0x0004a904) bg_button_pane_pane_cp04_ParamLimits

0xd577,	// (0x0004a904) bg_button_pane_pane_cp04

0x70a1,	// (0x0004442e) cell_dialer2_keypad_pane_g1_ParamLimits

0x70a1,	// (0x0004442e) cell_dialer2_keypad_pane_g1

0x3203,	// (0x00040590) aid_placing_vt_set_content_ParamLimits

0x3203,	// (0x00040590) aid_placing_vt_set_content

0x322f,	// (0x000405bc) aid_placing_vt_set_title_ParamLimits

0x322f,	// (0x000405bc) aid_placing_vt_set_title

0xa062,	// (0x000473ef) main_image3_pane

0x713b,	// (0x000444c8) area_side_right_pane_cp01_ParamLimits

0x713b,	// (0x000444c8) area_side_right_pane_cp01

0xa6da,	// (0x00047a67) main_image3_pane_g1_ParamLimits

0xa6da,	// (0x00047a67) main_image3_pane_g1

0x7168,	// (0x000444f5) main_image3_pane_g2_ParamLimits

0x7168,	// (0x000444f5) main_image3_pane_g2

0x7181,	// (0x0004450e) main_image3_pane_g3_ParamLimits

0x7181,	// (0x0004450e) main_image3_pane_g3

0x719a,	// (0x00044527) main_image3_pane_g4_ParamLimits

0x719a,	// (0x00044527) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0004cc5f) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0004cc5f) main_image3_pane_g

0x71b3,	// (0x00044540) main_image3_pane_t1_ParamLimits

0x71b3,	// (0x00044540) main_image3_pane_t1

0x71d8,	// (0x00044565) main_image3_pane_t2_ParamLimits

0x71d8,	// (0x00044565) main_image3_pane_t2

0x71f7,	// (0x00044584) main_image3_pane_t3_ParamLimits

0x71f7,	// (0x00044584) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0004cc68) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0004cc68) main_image3_pane_t

0xdf46,	// (0x0004b2d3) grid_sctrl_middle_pane_cp01_ParamLimits

0xdf46,	// (0x0004b2d3) grid_sctrl_middle_pane_cp01

0x7258,	// (0x000445e5) cell_sctrl_middle_pane_cp01_ParamLimits

0x7258,	// (0x000445e5) cell_sctrl_middle_pane_cp01

0x7269,	// (0x000445f6) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7269,	// (0x000445f6) cell_sctrl_middle_pane_cp01_g1

0xa062,	// (0x000473ef) main_call4_pane

0x7276,	// (0x00044603) aid_size_button_call4_ParamLimits

0x7276,	// (0x00044603) aid_size_button_call4

0x72a6,	// (0x00044633) call4_windows_pane_ParamLimits

0x72a6,	// (0x00044633) call4_windows_pane

0x72c0,	// (0x0004464d) grid_call4_button_pane_ParamLimits

0x72c0,	// (0x0004464d) grid_call4_button_pane

0xd583,	// (0x0004a910) call4_windows_conf_pane

0xd59a,	// (0x0004a927) popup_call4_audio_first_window_ParamLimits

0xd59a,	// (0x0004a927) popup_call4_audio_first_window

0xd5e6,	// (0x0004a973) popup_call4_audio_second_window_ParamLimits

0xd5e6,	// (0x0004a973) popup_call4_audio_second_window

0xd5fa,	// (0x0004a987) popup_call4_audio_wait_window_ParamLimits

0xd5fa,	// (0x0004a987) popup_call4_audio_wait_window

0x72e4,	// (0x00044671) cell_call4_button_pane_ParamLimits

0x72e4,	// (0x00044671) cell_call4_button_pane

0x7309,	// (0x00044696) bg_button_pane_cp09_ParamLimits

0x7309,	// (0x00044696) bg_button_pane_cp09

0x7315,	// (0x000446a2) cell_call4_button_pane_g1_ParamLimits

0x7315,	// (0x000446a2) cell_call4_button_pane_g1

0x7322,	// (0x000446af) cell_call4_button_pane_t1_ParamLimits

0x7322,	// (0x000446af) cell_call4_button_pane_t1

0xd642,	// (0x0004a9cf) popup_call4_audio_conf_window_ParamLimits

0xd642,	// (0x0004a9cf) popup_call4_audio_conf_window

0x65d2,	// (0x0004395f) mup3_progress_pane_t1_ParamLimits

0x65f1,	// (0x0004397e) mup3_progress_pane_t2_ParamLimits

0xcf21,	// (0x0004a2ae) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0004cb3c) mup3_progress_pane_t_ParamLimits

0xcf3e,	// (0x0004a2cb) mup_progress_pane_cp03_ParamLimits

0x6b06,	// (0x00043e93) mup3_control_keys_pane_g4_copy1

0x6ffd,	// (0x0004438a) mp4_rocker2_pane_ParamLimits

0x6ffd,	// (0x0004438a) mp4_rocker2_pane

0xd656,	// (0x0004a9e3) mp4_rocker2_pane_g1

0xd65e,	// (0x0004a9eb) mp4_rocker2_pane_g2

0x7334,	// (0x000446c1) mp4_rocker2_pane_g3

0x733c,	// (0x000446c9) mp4_rocker2_pane_g4

0x7344,	// (0x000446d1) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0004cc71) mp4_rocker2_pane_g

0xa062,	// (0x000473ef) main_camera4_pane

0xa062,	// (0x000473ef) main_video4_pane

0x6d5f,	// (0x000440ec) main_video_tele_dialer_pane_t1_ParamLimits

0x6d5f,	// (0x000440ec) main_video_tele_dialer_pane_t1

0x6d71,	// (0x000440fe) main_video_tele_dialer_pane_t2_ParamLimits

0x6d71,	// (0x000440fe) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0004cc2b) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0004cc2b) main_video_tele_dialer_pane_t

0x7364,	// (0x000446f1) cam4_autofocus_pane_ParamLimits

0x7364,	// (0x000446f1) cam4_autofocus_pane

0x737e,	// (0x0004470b) cam4_image_uncrop_pane_ParamLimits

0x737e,	// (0x0004470b) cam4_image_uncrop_pane

0x7395,	// (0x00044722) cam4_indicators_pane_ParamLimits

0x7395,	// (0x00044722) cam4_indicators_pane

0x73b1,	// (0x0004473e) main_camera4_pane_g1_ParamLimits

0x73b1,	// (0x0004473e) main_camera4_pane_g1

0x73bd,	// (0x0004474a) main_camera4_pane_g2_ParamLimits

0x73bd,	// (0x0004474a) main_camera4_pane_g2

0x73bd,	// (0x0004474a) main_camera4_pane_g3_ParamLimits

0x73bd,	// (0x0004474a) main_camera4_pane_g3

0x73c9,	// (0x00044756) main_camera4_pane_g4_ParamLimits

0x73c9,	// (0x00044756) main_camera4_pane_g4

0x73d5,	// (0x00044762) main_camera4_pane_g5_ParamLimits

0x73d5,	// (0x00044762) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0004cc7c) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0004cc7c) main_camera4_pane_g

0x73ef,	// (0x0004477c) main_camera4_pane_t1_ParamLimits

0x73ef,	// (0x0004477c) main_camera4_pane_t1

0xcea6,	// (0x0004a233) bg_tb_trans_pane_cp06

0x743f,	// (0x000447cc) cam4_indicators_pane_g1

0x7450,	// (0x000447dd) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0004cc97) cam4_indicators_pane_g

0x7468,	// (0x000447f5) cam4_indicators_pane_t1

0x7492,	// (0x0004481f) main_video4_pane_g1_ParamLimits

0x7492,	// (0x0004481f) main_video4_pane_g1

0x749e,	// (0x0004482b) main_video4_pane_g2_ParamLimits

0x749e,	// (0x0004482b) main_video4_pane_g2

0x74aa,	// (0x00044837) main_video4_pane_g3_ParamLimits

0x74aa,	// (0x00044837) main_video4_pane_g3

0x74b6,	// (0x00044843) main_video4_pane_g4_ParamLimits

0x74b6,	// (0x00044843) main_video4_pane_g4

0x0004,

0xf911,	// (0x0004cc9e) main_video4_pane_g_ParamLimits

0xf911,	// (0x0004cc9e) main_video4_pane_g

0x74d6,	// (0x00044863) vid4_indicators_pane_ParamLimits

0x74d6,	// (0x00044863) vid4_indicators_pane

0x74f5,	// (0x00044882) video4_image_uncrop_cif_pane_ParamLimits

0x74f5,	// (0x00044882) video4_image_uncrop_cif_pane

0x7504,	// (0x00044891) video4_image_uncrop_nhd_pane_ParamLimits

0x7504,	// (0x00044891) video4_image_uncrop_nhd_pane

0x737e,	// (0x0004470b) video4_image_uncrop_vga_pane_ParamLimits

0x737e,	// (0x0004470b) video4_image_uncrop_vga_pane

0xad42,	// (0x000480cf) bg_tb_trans_pane_cp07

0x7519,	// (0x000448a6) vid4_indicators_pane_g1

0x752d,	// (0x000448ba) vid4_indicators_pane_g2

0x7541,	// (0x000448ce) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0004cca9) vid4_indicators_pane_g

0x756e,	// (0x000448fb) vid4_indicators_pane_t1

0x7585,	// (0x00044912) cam4_autofocus_pane_g1

0x758d,	// (0x0004491a) cam4_autofocus_pane_g2

0x7595,	// (0x00044922) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0004ccb4) cam4_autofocus_pane_g

0x759d,	// (0x0004492a) cam4_autofocus_pane_g3_copy1

0x6d91,	// (0x0004411e) video_down_pane_cp_t1

0x6d9f,	// (0x0004412c) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0004cc30) video_down_pane_cp_t

0xdf46,	// (0x0004b2d3) popup_vitu2_window_ParamLimits

0xdf46,	// (0x0004b2d3) popup_vitu2_window

0x75a5,	// (0x00044932) aid_size_cell2_itu2_ParamLimits

0x75a5,	// (0x00044932) aid_size_cell2_itu2

0x75c7,	// (0x00044954) aid_size_cell_itu2_ParamLimits

0x75c7,	// (0x00044954) aid_size_cell_itu2

0xda5a,	// (0x0004ade7) bg_popup_window_pane_cp09_ParamLimits

0xda5a,	// (0x0004ade7) bg_popup_window_pane_cp09

0x760b,	// (0x00044998) field_vitu2_entry_pane_ParamLimits

0x760b,	// (0x00044998) field_vitu2_entry_pane

0x762b,	// (0x000449b8) grid_vitu2_function_pane_ParamLimits

0x762b,	// (0x000449b8) grid_vitu2_function_pane

0x766f,	// (0x000449fc) grid_vitu2_itu_pane_ParamLimits

0x766f,	// (0x000449fc) grid_vitu2_itu_pane

0x76e9,	// (0x00044a76) cell_vitu2_itu_pane_ParamLimits

0x76e9,	// (0x00044a76) cell_vitu2_itu_pane

0x7702,	// (0x00044a8f) cell_vitu2_function_pane_ParamLimits

0x7702,	// (0x00044a8f) cell_vitu2_function_pane

0xd666,	// (0x0004a9f3) bg_popup_call_pane_cp08_ParamLimits

0xd666,	// (0x0004a9f3) bg_popup_call_pane_cp08

0xd67d,	// (0x0004aa0a) field_vitu2_entry_pane_g1

0xd689,	// (0x0004aa16) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0004ccbb) field_vitu2_entry_pane_g

0x10ee,	// (0x0003e47b) field_vitu2_entry_pane_t1_ParamLimits

0x10ee,	// (0x0003e47b) field_vitu2_entry_pane_t1

0x1120,	// (0x0003e4ad) field_vitu2_entry_pane_t2_ParamLimits

0x1120,	// (0x0003e4ad) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0004ccc2) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0004ccc2) field_vitu2_entry_pane_t

0x7743,	// (0x00044ad0) bg_button_pane_cp010_ParamLimits

0x7743,	// (0x00044ad0) bg_button_pane_cp010

0x7751,	// (0x00044ade) cell_vitu2_itu_pane_g1

0x7771,	// (0x00044afe) cell_vitu2_itu_pane_t1_ParamLimits

0x7771,	// (0x00044afe) cell_vitu2_itu_pane_t1

0x113d,	// (0x0003e4ca) cell_vitu2_itu_pane_t2_ParamLimits

0x113d,	// (0x0003e4ca) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0004cccc) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0004cccc) cell_vitu2_itu_pane_t

0xad42,	// (0x000480cf) bg_button_pane_cp011

0x77bd,	// (0x00044b4a) cell_vitu2_function_pane_g1

0xa062,	// (0x000473ef) main_myfav_hc_pane

0x7239,	// (0x000445c6) popup_image3_note_pane_ParamLimits

0x7239,	// (0x000445c6) popup_image3_note_pane

0x7247,	// (0x000445d4) popup_image3_tool_bar_pane_ParamLimits

0x7247,	// (0x000445d4) popup_image3_tool_bar_pane

0x11b3,	// (0x0003e540) cell_vitu2_itu_pane_t3_ParamLimits

0x11b3,	// (0x0003e540) cell_vitu2_itu_pane_t3

0xa062,	// (0x000473ef) bg_popup_trans_pane

0xd6ab,	// (0x0004aa38) grid_image3_tool_bar_pane

0xd6b5,	// (0x0004aa42) bg_popup_trans_pane_g1

0xabf1,	// (0x00047f7e) bg_popup_trans_pane_g2

0xd6bd,	// (0x0004aa4a) bg_popup_trans_pane_g3

0xd6c5,	// (0x0004aa52) bg_popup_trans_pane_g4

0xd6cd,	// (0x0004aa5a) bg_popup_trans_pane_g5

0xd6d5,	// (0x0004aa62) bg_popup_trans_pane_g6

0xd6dd,	// (0x0004aa6a) bg_popup_trans_pane_g7

0xd6e5,	// (0x0004aa72) bg_popup_trans_pane_g8

0xabd1,	// (0x00047f5e) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0004ccd3) bg_popup_trans_pane_g

0xd6ed,	// (0x0004aa7a) cell_image3_tool_bar_pane_ParamLimits

0xd6ed,	// (0x0004aa7a) cell_image3_tool_bar_pane

0xcc58,	// (0x00049fe5) cell_image3_tool_bar_pane_g1

0xa062,	// (0x000473ef) bg_popup_trans_pane_cp1

0xd701,	// (0x0004aa8e) popup_image3_note_pane_t1

0xd70f,	// (0x0004aa9c) popup_image3_note_pane_t2

0xd71d,	// (0x0004aaaa) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0004cce6) popup_image3_note_pane_t

0xd72b,	// (0x0004aab8) popup_image3_note_pane_t3_copy1

0x77d1,	// (0x00044b5e) bg_myfav_hc_instruction_pane_ParamLimits

0x77d1,	// (0x00044b5e) bg_myfav_hc_instruction_pane

0x77e9,	// (0x00044b76) cell_myfav_contact_pane_ParamLimits

0x77e9,	// (0x00044b76) cell_myfav_contact_pane

0x7803,	// (0x00044b90) cell_myfav_contact_pane_cp1_ParamLimits

0x7803,	// (0x00044b90) cell_myfav_contact_pane_cp1

0x781b,	// (0x00044ba8) cell_myfav_contact_pane_cp2_ParamLimits

0x781b,	// (0x00044ba8) cell_myfav_contact_pane_cp2

0x7833,	// (0x00044bc0) cell_myfav_contact_pane_cp3_ParamLimits

0x7833,	// (0x00044bc0) cell_myfav_contact_pane_cp3

0x784a,	// (0x00044bd7) cell_myfav_contact_pane_cp4_ParamLimits

0x784a,	// (0x00044bd7) cell_myfav_contact_pane_cp4

0x7860,	// (0x00044bed) cell_myfav_contact_pane_cp5_ParamLimits

0x7860,	// (0x00044bed) cell_myfav_contact_pane_cp5

0x7874,	// (0x00044c01) cell_myfav_contact_pane_cp6_ParamLimits

0x7874,	// (0x00044c01) cell_myfav_contact_pane_cp6

0x7888,	// (0x00044c15) cell_myfav_contact_pane_cp7_ParamLimits

0x7888,	// (0x00044c15) cell_myfav_contact_pane_cp7

0xd739,	// (0x0004aac6) listscroll_gen_pane_cp05

0x78a0,	// (0x00044c2d) main_myfav_hc_pane_g1_ParamLimits

0x78a0,	// (0x00044c2d) main_myfav_hc_pane_g1

0x78b6,	// (0x00044c43) main_myfav_hc_pane_g2_ParamLimits

0x78b6,	// (0x00044c43) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0004cced) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0004cced) main_myfav_hc_pane_g

0x78e6,	// (0x00044c73) main_myfav_hc_pane_t1_ParamLimits

0x78e6,	// (0x00044c73) main_myfav_hc_pane_t1

0xd742,	// (0x0004aacf) main_myfav_hc_pane_t2_ParamLimits

0xd742,	// (0x0004aacf) main_myfav_hc_pane_t2

0xd754,	// (0x0004aae1) main_myfav_hc_pane_t3_ParamLimits

0xd754,	// (0x0004aae1) main_myfav_hc_pane_t3

0x78fd,	// (0x00044c8a) main_myfav_hc_pane_t4_ParamLimits

0x78fd,	// (0x00044c8a) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0004ccf4) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0004ccf4) main_myfav_hc_pane_t

0xcc58,	// (0x00049fe5) bg_myfav_hc_instruction_pane_g1

0xd766,	// (0x0004aaf3) cell_myfav_contact_pane_g1_ParamLimits

0xd766,	// (0x0004aaf3) cell_myfav_contact_pane_g1

0xd766,	// (0x0004aaf3) cell_myfav_contact_pane_g2_ParamLimits

0xd766,	// (0x0004aaf3) cell_myfav_contact_pane_g2

0xd772,	// (0x0004aaff) cell_myfav_contact_pane_g3_ParamLimits

0xd772,	// (0x0004aaff) cell_myfav_contact_pane_g3

0xcf0b,	// (0x0004a298) cell_myfav_contact_pane_g4_ParamLimits

0xcf0b,	// (0x0004a298) cell_myfav_contact_pane_g4

0xd77f,	// (0x0004ab0c) cell_myfav_contact_pane_g5_ParamLimits

0xd77f,	// (0x0004ab0c) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0004ccff) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0004ccff) cell_myfav_contact_pane_g

0x78ce,	// (0x00044c5b) main_myfav_hc_pane_g3_ParamLimits

0x78ce,	// (0x00044c5b) main_myfav_hc_pane_g3

0x2305,	// (0x0003f692) popup_adpt_find_window

0x7927,	// (0x00044cb4) afind_page_pane_ParamLimits

0x7927,	// (0x00044cb4) afind_page_pane

0x7934,	// (0x00044cc1) aid_size_cell_afind_ParamLimits

0x7934,	// (0x00044cc1) aid_size_cell_afind

0x794e,	// (0x00044cdb) bg_popup_sub_pane_cp09_ParamLimits

0x794e,	// (0x00044cdb) bg_popup_sub_pane_cp09

0x795b,	// (0x00044ce8) find_pane_cp01_ParamLimits

0x795b,	// (0x00044ce8) find_pane_cp01

0xd78b,	// (0x0004ab18) grid_afind_control_pane_ParamLimits

0xd78b,	// (0x0004ab18) grid_afind_control_pane

0x7968,	// (0x00044cf5) grid_afind_pane_ParamLimits

0x7968,	// (0x00044cf5) grid_afind_pane

0x7982,	// (0x00044d0f) cell_afind_pane_ParamLimits

0x7982,	// (0x00044d0f) cell_afind_pane

0xcc58,	// (0x00049fe5) afind_page_pane_g1

0x79ca,	// (0x00044d57) afind_page_pane_g2

0x79d3,	// (0x00044d60) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0004cd0a) afind_page_pane_g

0x79dc,	// (0x00044d69) afind_page_pane_t1

0xd79f,	// (0x0004ab2c) cell_afind_grid_control_pane_ParamLimits

0xd79f,	// (0x0004ab2c) cell_afind_grid_control_pane

0xd577,	// (0x0004a904) bg_button_pane_cp69_ParamLimits

0xd577,	// (0x0004a904) bg_button_pane_cp69

0x79fc,	// (0x00044d89) cell_afind_pane_g1_ParamLimits

0x79fc,	// (0x00044d89) cell_afind_pane_g1

0x7a09,	// (0x00044d96) cell_afind_pane_t1_ParamLimits

0x7a09,	// (0x00044d96) cell_afind_pane_t1

0xa9ea,	// (0x00047d77) bg_button_pane_cp72

0xd7ae,	// (0x0004ab3b) cell_afind_grid_control_pane_g1

0x5038,	// (0x000423c5) aid_image_placing_area_ParamLimits

0x5038,	// (0x000423c5) aid_image_placing_area

0xd231,	// (0x0004a5be) field_vitu_entry_pane_g1_ParamLimits

0xd231,	// (0x0004a5be) field_vitu_entry_pane_g1

0xd23d,	// (0x0004a5ca) field_vitu_entry_pane_g2_ParamLimits

0xd23d,	// (0x0004a5ca) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0004cbbb) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0004cbbb) field_vitu_entry_pane_g

0x6b8f,	// (0x00043f1c) cell_vitu_itu_pane_g1_ParamLimits

0x6bd1,	// (0x00043f5e) cell_vitu_itu_pane_t3_ParamLimits

0x6bd1,	// (0x00043f5e) cell_vitu_itu_pane_t3

0xd527,	// (0x0004a8b4) mp4_progress_pane_t1_ParamLimits

0xd540,	// (0x0004a8cd) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0004cc50) mp4_progress_pane_t_ParamLimits

0xd559,	// (0x0004a8e6) mup_progress_pane_cp04_ParamLimits

0x7911,	// (0x00044c9e) main_myfav_hc_pane_t5_ParamLimits

0x7911,	// (0x00044c9e) main_myfav_hc_pane_t5

0x2193,	// (0x0003f520) aid_zoom_text_primary

0x2305,	// (0x0003f692) popup_adpt_find_window_ParamLimits

0xad42,	// (0x000480cf) main_cam_set_pane

0x73a3,	// (0x00044730) cam4_zoom_pane_ParamLimits

0x73a3,	// (0x00044730) cam4_zoom_pane

0x7a1b,	// (0x00044da8) main_cam_set_pane_g1_ParamLimits

0x7a1b,	// (0x00044da8) main_cam_set_pane_g1

0x7a29,	// (0x00044db6) main_cam_set_pane_g2_ParamLimits

0x7a29,	// (0x00044db6) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0004cd11) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0004cd11) main_cam_set_pane_g

0x7a35,	// (0x00044dc2) main_cam_set_pane_t1_ParamLimits

0x7a35,	// (0x00044dc2) main_cam_set_pane_t1

0x7a51,	// (0x00044dde) main_cset_listscroll_pane_ParamLimits

0x7a51,	// (0x00044dde) main_cset_listscroll_pane

0x7a7c,	// (0x00044e09) main_cset_slider_pane_ParamLimits

0x7a7c,	// (0x00044e09) main_cset_slider_pane

0xd7bf,	// (0x0004ab4c) main_cset_list_pane_ParamLimits

0xd7bf,	// (0x0004ab4c) main_cset_list_pane

0xd7cf,	// (0x0004ab5c) scroll_pane_cp028

0x7a9b,	// (0x00044e28) aid_area_touch_slider

0x7ab7,	// (0x00044e44) cset_slider_pane

0x7ae1,	// (0x00044e6e) main_cset_slider_pane_g1

0x7af6,	// (0x00044e83) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0004cd16) main_cset_slider_pane_g

0xd808,	// (0x0004ab95) main_cset_slider_pane_t1

0x7bbc,	// (0x00044f49) main_cset_slider_pane_t2

0x7bd6,	// (0x00044f63) main_cset_slider_pane_t3

0x7bf0,	// (0x00044f7d) main_cset_slider_pane_t4

0x7c0e,	// (0x00044f9b) main_cset_slider_pane_t5

0x7c2c,	// (0x00044fb9) main_cset_slider_pane_t6

0x7c43,	// (0x00044fd0) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0004cd3b) main_cset_slider_pane_t

0x7d51,	// (0x000450de) cset_list_set_pane_ParamLimits

0x7d51,	// (0x000450de) cset_list_set_pane

0x7d6a,	// (0x000450f7) aid_position_infowindow_above

0x7d72,	// (0x000450ff) aid_position_infowindow_below

0x1205,	// (0x0003e592) cset_list_set_pane_g1_ParamLimits

0x1205,	// (0x0003e592) cset_list_set_pane_g1

0x1211,	// (0x0003e59e) cset_list_set_pane_g3_ParamLimits

0x1211,	// (0x0003e59e) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0004cd5a) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0004cd5a) cset_list_set_pane_g

0x1220,	// (0x0003e5ad) cset_list_set_pane_t1_ParamLimits

0x1220,	// (0x0003e5ad) cset_list_set_pane_t1

0xad42,	// (0x000480cf) list_highlight_pane_cp021_ParamLimits

0xad42,	// (0x000480cf) list_highlight_pane_cp021

0xb53b,	// (0x000488c8) cset_slider_pane_g1

0xb54d,	// (0x000488da) cset_slider_pane_g2

0xb544,	// (0x000488d1) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0004cd5f) cset_slider_pane_g

0x7d7a,	// (0x00045107) aid_area_touch_cam4_zoom

0x7d82,	// (0x0004510f) cam4_zoom_cont_pane

0x7d8a,	// (0x00045117) cam4_zoom_pane_g1

0x7d92,	// (0x0004511f) cam4_zoom_pane_g2

0x7d9a,	// (0x00045127) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0004cd66) cam4_zoom_pane_g

0xd428,	// (0x0004a7b5) cam4_zoom_cont_pane_g1

0xda68,	// (0x0004adf5) cam4_zoom_cont_pane_g2

0xdf54,	// (0x0004b2e1) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0004cd6d) cam4_zoom_cont_pane_g

0x7290,	// (0x0004461d) call4_image_pane_ParamLimits

0x7290,	// (0x0004461d) call4_image_pane

0xd583,	// (0x0004a910) call4_windows_conf_pane_ParamLimits

0xd5c4,	// (0x0004a951) popup_call4_audio_in_window_ParamLimits

0xd5c4,	// (0x0004a951) popup_call4_audio_in_window

0xa062,	// (0x000473ef) bg_popup_call2_act_pane_cp02

0xd63a,	// (0x0004a9c7) call4_list_conf_pane

0xcc58,	// (0x00049fe5) call4_image_pane_g1

0xcc58,	// (0x00049fe5) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0004ca7c) call4_image_pane_g

0xd8a8,	// (0x0004ac35) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8a8,	// (0x0004ac35) list_single_graphic_popup_conf4_pane

0xa062,	// (0x000473ef) list_highlight_pane_cp022

0xd8bb,	// (0x0004ac48) list_single_graphic_popup_conf4_pane_g1

0xb12b,	// (0x000484b8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0004cd74) list_single_graphic_popup_conf4_pane_g

0xd8c3,	// (0x0004ac50) list_single_graphic_popup_conf4_pane_t1

0x3393,	// (0x00040720) popup_vtel_slider_window_ParamLimits

0x3393,	// (0x00040720) popup_vtel_slider_window

0xd565,	// (0x0004a8f2) dialer2_ne_pane_t2_ParamLimits

0xd565,	// (0x0004a8f2) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0004cc55) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0004cc55) dialer2_ne_pane_t

0xad42,	// (0x000480cf) bg_popup_sub_pane_cp010_ParamLimits

0xad42,	// (0x000480cf) bg_popup_sub_pane_cp010

0x7da2,	// (0x0004512f) popup_vtel_slider_window_g1_ParamLimits

0x7da2,	// (0x0004512f) popup_vtel_slider_window_g1

0x7dae,	// (0x0004513b) popup_vtel_slider_window_g2_ParamLimits

0x7dae,	// (0x0004513b) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0004cd79) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0004cd79) popup_vtel_slider_window_g

0x7df6,	// (0x00045183) vtel_slider_pane_ParamLimits

0x7df6,	// (0x00045183) vtel_slider_pane

0x7e05,	// (0x00045192) vtel_slider_pane_g1_ParamLimits

0x7e05,	// (0x00045192) vtel_slider_pane_g1

0x7e12,	// (0x0004519f) vtel_slider_pane_g2_ParamLimits

0x7e12,	// (0x0004519f) vtel_slider_pane_g2

0x7e1f,	// (0x000451ac) vtel_slider_pane_g3_ParamLimits

0x7e1f,	// (0x000451ac) vtel_slider_pane_g3

0x7e05,	// (0x00045192) vtel_slider_pane_g4_ParamLimits

0x7e05,	// (0x00045192) vtel_slider_pane_g4

0x7e2c,	// (0x000451b9) vtel_slider_pane_g5_ParamLimits

0x7e2c,	// (0x000451b9) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0004cd82) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0004cd82) vtel_slider_pane_g

0xad42,	// (0x000480cf) main_gallery2_pane

0x75ed,	// (0x0004497a) aid_size_row_itut2_dropdow_list_ParamLimits

0x75ed,	// (0x0004497a) aid_size_row_itut2_dropdow_list

0x764d,	// (0x000449da) grid_vitu2_function_top_pane_ParamLimits

0x764d,	// (0x000449da) grid_vitu2_function_top_pane

0x76a7,	// (0x00044a34) popup_vitu2_dropdown_list_window_ParamLimits

0x76a7,	// (0x00044a34) popup_vitu2_dropdown_list_window

0x76c7,	// (0x00044a54) popup_vitu2_match_list_window

0x7e39,	// (0x000451c6) cell_vitu2_function_top_pane_ParamLimits

0x7e39,	// (0x000451c6) cell_vitu2_function_top_pane

0x7e53,	// (0x000451e0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7e53,	// (0x000451e0) cell_vitu2_function_top_pane_cp01

0x7e6f,	// (0x000451fc) cell_vitu2_function_top_wide_pane_ParamLimits

0x7e6f,	// (0x000451fc) cell_vitu2_function_top_wide_pane

0xad42,	// (0x000480cf) bg_button_pane_cp012

0x7e8b,	// (0x00045218) cell_vitu2_function_top_pane_g1

0x7e9f,	// (0x0004522c) bg_button_pane_cp013_ParamLimits

0x7e9f,	// (0x0004522c) bg_button_pane_cp013

0x7ebb,	// (0x00045248) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7ebb,	// (0x00045248) cell_vitu2_function_top_wide_pane_g1

0xdf46,	// (0x0004b2d3) bg_popup_sub_pane_cp20

0x7ed3,	// (0x00045260) list_vitu2_match_list_pane

0xd6b5,	// (0x0004aa42) bg_popup_sub_pane_cp20_g1

0xd6bd,	// (0x0004aa4a) bg_popup_sub_pane_cp20_g2

0xabf1,	// (0x00047f7e) bg_popup_sub_pane_cp20_g3

0xd6c5,	// (0x0004aa52) bg_popup_sub_pane_cp20_g4

0xabd1,	// (0x00047f5e) bg_popup_sub_pane_cp20_g5

0xd8d9,	// (0x0004ac66) bg_popup_sub_pane_cp20_g6

0xd6d5,	// (0x0004aa62) bg_popup_sub_pane_cp20_g7

0xd6dd,	// (0x0004aa6a) bg_popup_sub_pane_cp20_g8

0xd6e5,	// (0x0004aa72) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0004cd8d) bg_popup_sub_pane_cp20_g

0x7eeb,	// (0x00045278) list_vitu2_match_list_item_pane_ParamLimits

0x7eeb,	// (0x00045278) list_vitu2_match_list_item_pane

0x7efd,	// (0x0004528a) list_vitu2_match_list_item_pane_t1

0xa062,	// (0x000473ef) bg_popup_sub_pane_cp21

0xb053,	// (0x000483e0) grid_vitu2_dropdown_list_pane

0x7f0b,	// (0x00045298) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7f0b,	// (0x00045298) cell_vitu2_dropdown_list_char_pane

0x7f2c,	// (0x000452b9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7f2c,	// (0x000452b9) cell_vitu2_dropdown_list_ctrl_pane

0xd8e1,	// (0x0004ac6e) cell_vitu2_dropdown_list_char_pane_g1

0xd8ea,	// (0x0004ac77) cell_vitu2_dropdown_list_char_pane_g2

0xd8f3,	// (0x0004ac80) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0004cdaa) cell_vitu2_dropdown_list_char_pane_g

0x7f58,	// (0x000452e5) cell_vitu2_dropdown_list_char_pane_t1

0x7f66,	// (0x000452f3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7f66,	// (0x000452f3) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7f76,	// (0x00045303) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7f76,	// (0x00045303) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7f87,	// (0x00045314) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7f87,	// (0x00045314) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7f97,	// (0x00045324) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7f97,	// (0x00045324) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcea6,	// (0x0004a233) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcea6,	// (0x0004a233) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0004cdb1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0004cdb1) cell_vitu2_dropdown_list_ctrl_pane_g

0x7fb3,	// (0x00045340) aid_size_cell_gallery2_ParamLimits

0x7fb3,	// (0x00045340) aid_size_cell_gallery2

0x7fcd,	// (0x0004535a) grid_gallery2_pane_ParamLimits

0x7fcd,	// (0x0004535a) grid_gallery2_pane

0x6a16,	// (0x00043da3) scroll_pane_cp029_ParamLimits

0x6a16,	// (0x00043da3) scroll_pane_cp029

0x7fe4,	// (0x00045371) cell_gallery2_pane_ParamLimits

0x7fe4,	// (0x00045371) cell_gallery2_pane

0xd8fc,	// (0x0004ac89) cell_gallery2_pane_g2

0x8036,	// (0x000453c3) cell_gallery2_pane_g3

0xd904,	// (0x0004ac91) cell_gallery2_pane_g4

0xd90c,	// (0x0004ac99) cell_gallery2_pane_g5

0xa998,	// (0x00047d25) grid_highlight_pane_cp10

0x76c7,	// (0x00044a54) popup_vitu2_match_list_window_ParamLimits

0x76d9,	// (0x00044a66) popup_vitu2_query_window_ParamLimits

0x76d9,	// (0x00044a66) popup_vitu2_query_window

0xa062,	// (0x000473ef) bg_vitu2_candi_button_pane

0xd8e1,	// (0x0004ac6e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8ea,	// (0x0004ac77) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8f3,	// (0x0004ac80) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x128b,	// (0x0003e618) bg_button_pane_cp015

0x803e,	// (0x000453cb) bg_button_pane_cp016

0x8051,	// (0x000453de) bg_button_pane_cp017

0xc850,	// (0x00049bdd) bg_popup_sub_pane_cp22

0xd914,	// (0x0004aca1) popup_vitu2_query_window_g1

0x12be,	// (0x0003e64b) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0004cdbc) popup_vitu2_query_window_g

0x12db,	// (0x0003e668) popup_vitu2_query_window_t1_ParamLimits

0x12db,	// (0x0003e668) popup_vitu2_query_window_t1

0x130e,	// (0x0003e69b) popup_vitu2_query_window_t2_ParamLimits

0x130e,	// (0x0003e69b) popup_vitu2_query_window_t2

0x1320,	// (0x0003e6ad) popup_vitu2_query_window_t3_ParamLimits

0x1320,	// (0x0003e6ad) popup_vitu2_query_window_t3

0x8075,	// (0x00045402) popup_vitu2_query_window_t4_ParamLimits

0x8075,	// (0x00045402) popup_vitu2_query_window_t4

0x8096,	// (0x00045423) popup_vitu2_query_window_t5_ParamLimits

0x8096,	// (0x00045423) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0004cdc3) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0004cdc3) popup_vitu2_query_window_t

0xd7b7,	// (0x0004ab44) main_cset_text_pane

0x7a9b,	// (0x00044e28) aid_area_touch_slider_ParamLimits

0x7ab7,	// (0x00044e44) cset_slider_pane_ParamLimits

0x7ae1,	// (0x00044e6e) main_cset_slider_pane_g1_ParamLimits

0x7af6,	// (0x00044e83) main_cset_slider_pane_g2_ParamLimits

0xd7d8,	// (0x0004ab65) main_cset_slider_pane_g3_ParamLimits

0xd7d8,	// (0x0004ab65) main_cset_slider_pane_g3

0x7b0b,	// (0x00044e98) main_cset_slider_pane_g4_ParamLimits

0x7b0b,	// (0x00044e98) main_cset_slider_pane_g4

0x7b1a,	// (0x00044ea7) main_cset_slider_pane_g5_ParamLimits

0x7b1a,	// (0x00044ea7) main_cset_slider_pane_g5

0x7b28,	// (0x00044eb5) main_cset_slider_pane_g6_ParamLimits

0x7b28,	// (0x00044eb5) main_cset_slider_pane_g6

0xf989,	// (0x0004cd16) main_cset_slider_pane_g_ParamLimits

0xd808,	// (0x0004ab95) main_cset_slider_pane_t1_ParamLimits

0x7bbc,	// (0x00044f49) main_cset_slider_pane_t2_ParamLimits

0x7bd6,	// (0x00044f63) main_cset_slider_pane_t3_ParamLimits

0x7bf0,	// (0x00044f7d) main_cset_slider_pane_t4_ParamLimits

0x7c0e,	// (0x00044f9b) main_cset_slider_pane_t5_ParamLimits

0x7c2c,	// (0x00044fb9) main_cset_slider_pane_t6_ParamLimits

0x7c43,	// (0x00044fd0) main_cset_slider_pane_t7_ParamLimits

0x7c71,	// (0x00044ffe) main_cset_slider_pane_t8_ParamLimits

0x7c71,	// (0x00044ffe) main_cset_slider_pane_t8

0x7c99,	// (0x00045026) main_cset_slider_pane_t9_ParamLimits

0x7c99,	// (0x00045026) main_cset_slider_pane_t9

0x7cc1,	// (0x0004504e) main_cset_slider_pane_t10_ParamLimits

0x7cc1,	// (0x0004504e) main_cset_slider_pane_t10

0x7ce9,	// (0x00045076) main_cset_slider_pane_t11_ParamLimits

0x7ce9,	// (0x00045076) main_cset_slider_pane_t11

0x7d13,	// (0x000450a0) main_cset_slider_pane_t12_ParamLimits

0x7d13,	// (0x000450a0) main_cset_slider_pane_t12

0x7d32,	// (0x000450bf) main_cset_slider_pane_t13_ParamLimits

0x7d32,	// (0x000450bf) main_cset_slider_pane_t13

0xf9ae,	// (0x0004cd3b) main_cset_slider_pane_t_ParamLimits

0xa062,	// (0x000473ef) bg_popup_sub_pane_cp011

0xd920,	// (0x0004acad) main_cset_text_pane_g1

0xd928,	// (0x0004acb5) main_cset_text_pane_t1

0xd936,	// (0x0004acc3) main_cset_text_pane_t2

0xd944,	// (0x0004acd1) main_cset_text_pane_t3

0xd952,	// (0x0004acdf) main_cset_text_pane_t4

0xd960,	// (0x0004aced) main_cset_text_pane_t5

0xd96e,	// (0x0004acfb) main_cset_text_pane_t6

0xd97c,	// (0x0004ad09) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0004cdd2) main_cset_text_pane_t

0xa062,	// (0x000473ef) main_cam4_burst_pane

0xa062,	// (0x000473ef) main_cam5_pane

0x79ea,	// (0x00044d77) bg_button_pane_cp019

0x79f3,	// (0x00044d80) bg_button_pane_cp020

0xd7e4,	// (0x0004ab71) main_cset_slider_pane_g7_ParamLimits

0xd7e4,	// (0x0004ab71) main_cset_slider_pane_g7

0xd7f0,	// (0x0004ab7d) main_cset_slider_pane_g8_ParamLimits

0xd7f0,	// (0x0004ab7d) main_cset_slider_pane_g8

0x7b3c,	// (0x00044ec9) main_cset_slider_pane_g9_ParamLimits

0x7b3c,	// (0x00044ec9) main_cset_slider_pane_g9

0x7b48,	// (0x00044ed5) main_cset_slider_pane_g10_ParamLimits

0x7b48,	// (0x00044ed5) main_cset_slider_pane_g10

0x7b54,	// (0x00044ee1) main_cset_slider_pane_g11_ParamLimits

0x7b54,	// (0x00044ee1) main_cset_slider_pane_g11

0x7b60,	// (0x00044eed) main_cset_slider_pane_g12_ParamLimits

0x7b60,	// (0x00044eed) main_cset_slider_pane_g12

0x7b6c,	// (0x00044ef9) main_cset_slider_pane_g13_ParamLimits

0x7b6c,	// (0x00044ef9) main_cset_slider_pane_g13

0x7b7a,	// (0x00044f07) main_cset_slider_pane_g14_ParamLimits

0x7b7a,	// (0x00044f07) main_cset_slider_pane_g14

0x7b88,	// (0x00044f15) main_cset_slider_pane_g15_ParamLimits

0x7b88,	// (0x00044f15) main_cset_slider_pane_g15

0xd836,	// (0x0004abc3) main_cset_slider_pane_t14_ParamLimits

0xd836,	// (0x0004abc3) main_cset_slider_pane_t14

0xd86f,	// (0x0004abfc) main_cset_slider_pane_t15_ParamLimits

0xd86f,	// (0x0004abfc) main_cset_slider_pane_t15

0x80b7,	// (0x00045444) aid_cam4_burst_size_cell_ParamLimits

0x80b7,	// (0x00045444) aid_cam4_burst_size_cell

0x80d3,	// (0x00045460) grid_cam4_burst_pane_ParamLimits

0x80d3,	// (0x00045460) grid_cam4_burst_pane

0x8103,	// (0x00045490) linegrid_cam4_burst_pane_ParamLimits

0x8103,	// (0x00045490) linegrid_cam4_burst_pane

0x8123,	// (0x000454b0) scroll_pane_cp30_ParamLimits

0x8123,	// (0x000454b0) scroll_pane_cp30

0x812f,	// (0x000454bc) cell_cam4_burst_pane_ParamLimits

0x812f,	// (0x000454bc) cell_cam4_burst_pane

0xd98a,	// (0x0004ad17) linegrid_cam4_burst_pane_g1_ParamLimits

0xd98a,	// (0x0004ad17) linegrid_cam4_burst_pane_g1

0x816b,	// (0x000454f8) linegrid_cam4_burst_pane_g2_ParamLimits

0x816b,	// (0x000454f8) linegrid_cam4_burst_pane_g2

0xd997,	// (0x0004ad24) linegrid_cam4_burst_pane_g3_ParamLimits

0xd997,	// (0x0004ad24) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0004cde1) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0004cde1) linegrid_cam4_burst_pane_g

0x817c,	// (0x00045509) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x817c,	// (0x00045509) linegrid_cam4_burst_pane_g3_copy1

0xd9a4,	// (0x0004ad31) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9a4,	// (0x0004ad31) linegrid_cam4_burst_pane_g4

0x8196,	// (0x00045523) linegrid_cam4_burst_pane_g5_ParamLimits

0x8196,	// (0x00045523) linegrid_cam4_burst_pane_g5

0x81a7,	// (0x00045534) linegrid_cam4_burst_pane_g6_ParamLimits

0x81a7,	// (0x00045534) linegrid_cam4_burst_pane_g6

0xd9b1,	// (0x0004ad3e) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9b1,	// (0x0004ad3e) linegrid_cam4_burst_pane_g7

0x81b8,	// (0x00045545) cell_cam4_burst_pane_g1

0xd9ca,	// (0x0004ad57) main_cam5_pane_t1_ParamLimits

0xd9ca,	// (0x0004ad57) main_cam5_pane_t1

0xd9dc,	// (0x0004ad69) main_cam5_pane_t2_ParamLimits

0xd9dc,	// (0x0004ad69) main_cam5_pane_t2

0xd9ee,	// (0x0004ad7b) main_cam5_pane_t3_ParamLimits

0xd9ee,	// (0x0004ad7b) main_cam5_pane_t3

0xda00,	// (0x0004ad8d) main_cam5_pane_t4_ParamLimits

0xda00,	// (0x0004ad8d) main_cam5_pane_t4

0xda18,	// (0x0004ada5) main_cam5_pane_t5_ParamLimits

0xda18,	// (0x0004ada5) main_cam5_pane_t5

0xda71,	// (0x0004adfe) main_cam5_pane_t6_ParamLimits

0xda71,	// (0x0004adfe) main_cam5_pane_t6

0xda85,	// (0x0004ae12) main_cam5_pane_t7_ParamLimits

0xda85,	// (0x0004ae12) main_cam5_pane_t7

0xda97,	// (0x0004ae24) main_cam5_pane_t8_ParamLimits

0xda97,	// (0x0004ae24) main_cam5_pane_t8

0xdab3,	// (0x0004ae40) main_cam5_pane_t9_ParamLimits

0xdab3,	// (0x0004ae40) main_cam5_pane_t9

0xdac5,	// (0x0004ae52) main_cam5_pane_t10_ParamLimits

0xdac5,	// (0x0004ae52) main_cam5_pane_t10

0xdad7,	// (0x0004ae64) main_cam5_pane_t11_ParamLimits

0xdad7,	// (0x0004ae64) main_cam5_pane_t11

0xdae9,	// (0x0004ae76) main_cam5_pane_t12_ParamLimits

0xdae9,	// (0x0004ae76) main_cam5_pane_t12

0xdafe,	// (0x0004ae8b) main_cam5_pane_t13_ParamLimits

0xdafe,	// (0x0004ae8b) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0004cded) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0004cded) main_cam5_pane_t

0x23bb,	// (0x0003f748) popup_scut_keymap_window_ParamLimits

0x23bb,	// (0x0003f748) popup_scut_keymap_window

0x81cb,	// (0x00045558) aid_size_cell_brow_shortcut

0xa998,	// (0x00047d25) bg_popup_window_pane_cp010

0x81d7,	// (0x00045564) grid_scut_pane

0x81e3,	// (0x00045570) cell_scut_pane_ParamLimits

0x81e3,	// (0x00045570) cell_scut_pane

0x81fa,	// (0x00045587) cell_scut_pane_g1

0xdb1b,	// (0x0004aea8) cell_scut_pane_t1

0xdb2a,	// (0x0004aeb7) cell_scut_pane_t2

0x8203,	// (0x00045590) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0004ce08) cell_scut_pane_t

0x61fb,	// (0x00043588) main_mup3_pane_g8_ParamLimits

0x61fb,	// (0x00043588) main_mup3_pane_g8

0x75fb,	// (0x00044988) area_vitu2_query_pane_ParamLimits

0x75fb,	// (0x00044988) area_vitu2_query_pane

0x129d,	// (0x0003e62a) input_focus_pane_cp08

0xdb39,	// (0x0004aec6) area_vitu2_query_pane_g1

0x139e,	// (0x0003e72b) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0004ce0f) area_vitu2_query_pane_g

0x8211,	// (0x0004559e) area_vitu2_query_pane_t1_ParamLimits

0x8211,	// (0x0004559e) area_vitu2_query_pane_t1

0x8225,	// (0x000455b2) area_vitu2_query_pane_t2_ParamLimits

0x8225,	// (0x000455b2) area_vitu2_query_pane_t2

0x13af,	// (0x0003e73c) area_vitu2_query_pane_t3_ParamLimits

0x13af,	// (0x0003e73c) area_vitu2_query_pane_t3

0x13d7,	// (0x0003e764) area_vitu2_query_pane_t4_ParamLimits

0x13d7,	// (0x0003e764) area_vitu2_query_pane_t4

0x13ff,	// (0x0003e78c) area_vitu2_query_pane_t5_ParamLimits

0x13ff,	// (0x0003e78c) area_vitu2_query_pane_t5

0x1427,	// (0x0003e7b4) area_vitu2_query_pane_t6_ParamLimits

0x1427,	// (0x0003e7b4) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0004ce14) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0004ce14) area_vitu2_query_pane_t

0x8239,	// (0x000455c6) bg_button_pane_cp018

0x8247,	// (0x000455d4) bg_button_pane_cp021

0x1473,	// (0x0003e800) bg_button_pane_cp022

0x1484,	// (0x0003e811) input_focus_pane_cp09

0xb23a,	// (0x000485c7) aid_size_touch_mv_arrow_left

0xb265,	// (0x000485f2) aid_size_touch_mv_arrow_right

0x7ba0,	// (0x00044f2d) main_cset_slider_pane_g16_ParamLimits

0x7ba0,	// (0x00044f2d) main_cset_slider_pane_g16

0x7bae,	// (0x00044f3b) main_cset_slider_pane_g17_ParamLimits

0x7bae,	// (0x00044f3b) main_cset_slider_pane_g17

0x81b8,	// (0x00045545) cell_cam4_burst_pane_g1_ParamLimits

0xa062,	// (0x000473ef) compa_mode_pane

0x7dba,	// (0x00045147) popup_vtel_slider_window_g3_ParamLimits

0x7dba,	// (0x00045147) popup_vtel_slider_window_g3

0x7dce,	// (0x0004515b) popup_vtel_slider_window_g4_ParamLimits

0x7dce,	// (0x0004515b) popup_vtel_slider_window_g4

0x7de2,	// (0x0004516f) popup_vtel_slider_window_t1_ParamLimits

0x7de2,	// (0x0004516f) popup_vtel_slider_window_t1

0xa062,	// (0x000473ef) main_cl_pane

0x554c,	// (0x000428d9) popup_imed_adjust2_window_ParamLimits

0xc850,	// (0x00049bdd) bg_tb_trans_pane_cp05_ParamLimits

0xd166,	// (0x0004a4f3) popup_imed_adjust2_window_g1_ParamLimits

0xd175,	// (0x0004a502) popup_imed_adjust2_window_g2_ParamLimits

0xd175,	// (0x0004a502) popup_imed_adjust2_window_g2

0xd181,	// (0x0004a50e) popup_imed_adjust2_window_g3_ParamLimits

0xd181,	// (0x0004a50e) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0004cb7f) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0004cb7f) popup_imed_adjust2_window_g

0xd18d,	// (0x0004a51a) popup_imed_adjust2_window_t1_ParamLimits

0xd1a5,	// (0x0004a532) slider_imed_adjust_pane_ParamLimits

0xd1b9,	// (0x0004a546) slider_imed_adjust_pane_g1_ParamLimits

0xd1c9,	// (0x0004a556) slider_imed_adjust_pane_g2_ParamLimits

0xd1d9,	// (0x0004a566) slider_imed_adjust_pane_g3_ParamLimits

0xd1ea,	// (0x0004a577) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0004cb86) slider_imed_adjust_pane_g_ParamLimits

0x734c,	// (0x000446d9) aid_touch_area_cam4_ParamLimits

0x734c,	// (0x000446d9) aid_touch_area_cam4

0x735c,	// (0x000446e9) battery_pane_cp01

0x73e3,	// (0x00044770) main_camera4_pane_g6_ParamLimits

0x73e3,	// (0x00044770) main_camera4_pane_g6

0x7401,	// (0x0004478e) main_camera4_pane_t2_ParamLimits

0x7401,	// (0x0004478e) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0004cc89) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0004cc89) main_camera4_pane_t

0x7482,	// (0x0004480f) aid_touch_area_vid4_ParamLimits

0x7482,	// (0x0004480f) aid_touch_area_vid4

0x74c2,	// (0x0004484f) main_video4_pane_g5_ParamLimits

0x74c2,	// (0x0004484f) main_video4_pane_g5

0x74e6,	// (0x00044873) vid4_progress_pane_ParamLimits

0x74e6,	// (0x00044873) vid4_progress_pane

0xd7fc,	// (0x0004ab89) main_cset_slider_pane_g18_ParamLimits

0xd7fc,	// (0x0004ab89) main_cset_slider_pane_g18

0xd9be,	// (0x0004ad4b) cell_cam4_burst_pane_g2_ParamLimits

0xd9be,	// (0x0004ad4b) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0004cde8) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0004cde8) cell_cam4_burst_pane_g

0x8253,	// (0x000455e0) bg_cl_pane_ParamLimits

0x8253,	// (0x000455e0) bg_cl_pane

0x825f,	// (0x000455ec) cl_header_pane_ParamLimits

0x825f,	// (0x000455ec) cl_header_pane

0x826b,	// (0x000455f8) cl_listscroll_pane_ParamLimits

0x826b,	// (0x000455f8) cl_listscroll_pane

0xdb45,	// (0x0004aed2) bg_cl_pane_g1

0xdb4d,	// (0x0004aeda) bg_cl_pane_g2

0xdb55,	// (0x0004aee2) bg_cl_pane_g3

0xdb5d,	// (0x0004aeea) bg_cl_pane_g4

0xdb65,	// (0x0004aef2) bg_cl_pane_g5

0xdb6d,	// (0x0004aefa) bg_cl_pane_g6

0xdb75,	// (0x0004af02) bg_cl_pane_g7

0xdb7d,	// (0x0004af0a) bg_cl_pane_g8

0xdb85,	// (0x0004af12) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0004ce23) bg_cl_pane_g

0x8277,	// (0x00045604) aid_height_cl_leading_ParamLimits

0x8277,	// (0x00045604) aid_height_cl_leading

0x8283,	// (0x00045610) aid_height_cl_text_ParamLimits

0x8283,	// (0x00045610) aid_height_cl_text

0xdf46,	// (0x0004b2d3) bg_cl_header_pane_ParamLimits

0xdf46,	// (0x0004b2d3) bg_cl_header_pane

0x829b,	// (0x00045628) cl_header_pane_g1_ParamLimits

0x829b,	// (0x00045628) cl_header_pane_g1

0x82a8,	// (0x00045635) cl_header_pane_t1_ParamLimits

0x82a8,	// (0x00045635) cl_header_pane_t1

0xdb8d,	// (0x0004af1a) cl_list_pane

0xd7cf,	// (0x0004ab5c) hc_scroll_pane_cp01

0xabd1,	// (0x00047f5e) bg_cl_header_pane_g1

0xd6b5,	// (0x0004aa42) bg_cl_header_pane_g2

0xabf1,	// (0x00047f7e) bg_cl_header_pane_g3

0xd6c5,	// (0x0004aa52) bg_cl_header_pane_g4

0xd6bd,	// (0x0004aa4a) bg_cl_header_pane_g5

0xd8d9,	// (0x0004ac66) bg_cl_header_pane_g6

0xd6dd,	// (0x0004aa6a) bg_cl_header_pane_g7

0xd6e5,	// (0x0004aa72) bg_cl_header_pane_g8

0xd6d5,	// (0x0004aa62) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0004ce36) bg_cl_header_pane_g

0x82ba,	// (0x00045647) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x82ba,	// (0x00045647) hc_cl_list_double_graphic_heading_pane

0x82ce,	// (0x0004565b) hc_cl_list_single_graphic_pane_ParamLimits

0x82ce,	// (0x0004565b) hc_cl_list_single_graphic_pane

0x82e8,	// (0x00045675) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x82e8,	// (0x00045675) hc_cl_list_single_graphic_pane_g1

0x82f4,	// (0x00045681) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x82f4,	// (0x00045681) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0004ce49) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0004ce49) hc_cl_list_single_graphic_pane_g

0x8308,	// (0x00045695) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8308,	// (0x00045695) hc_cl_list_single_graphic_pane_t1

0x82e8,	// (0x00045675) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x82e8,	// (0x00045675) hc_cl_list_double_graphic_heading_pane_g1

0x831d,	// (0x000456aa) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x831d,	// (0x000456aa) hc_cl_list_double_graphic_heading_pane_g2

0x8331,	// (0x000456be) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8331,	// (0x000456be) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0004ce4e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0004ce4e) hc_cl_list_double_graphic_heading_pane_g

0x8345,	// (0x000456d2) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8345,	// (0x000456d2) hc_cl_list_double_graphic_heading_pane_t1

0x835a,	// (0x000456e7) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x835a,	// (0x000456e7) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0004ce55) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0004ce55) hc_cl_list_double_graphic_heading_pane_t

0x8377,	// (0x00045704) vid4_progress_pane_g1

0x8387,	// (0x00045714) vid4_progress_pane_g2

0x8397,	// (0x00045724) vid4_progress_pane_g3

0x83a9,	// (0x00045736) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0004ce5a) vid4_progress_pane_g

0x83c1,	// (0x0004574e) vid4_progress_pane_t1

0x83d7,	// (0x00045764) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0004ce65) vid4_progress_pane_t

0x8402,	// (0x0004578f) wait_bar_pane_cp07

0xca4b,	// (0x00049dd8) blid_firmament_pane_ParamLimits

0xca8e,	// (0x00049e1b) popup_blid_sat_info2_window_g1

0xcab2,	// (0x00049e3f) popup_blid_sat_info2_window_t3

0xcac0,	// (0x00049e4d) popup_blid_sat_info2_window_t4

0xcace,	// (0x00049e5b) popup_blid_sat_info2_window_t5

0xcadc,	// (0x00049e69) popup_blid_sat_info2_window_t6

0xcaec,	// (0x00049e79) popup_blid_sat_info2_window_t7

0xcafa,	// (0x00049e87) popup_blid_sat_info2_window_t8

0xcb08,	// (0x00049e95) popup_blid_sat_info2_window_t9

0xcb16,	// (0x00049ea3) popup_blid_sat_info2_window_t10

0xcbd8,	// (0x00049f65) aid_firma_cardinal_ParamLimits

0xcbec,	// (0x00049f79) blid_firmament_pane_t1_ParamLimits

0xcc03,	// (0x00049f90) blid_firmament_pane_t2_ParamLimits

0xcc1a,	// (0x00049fa7) blid_firmament_pane_t3_ParamLimits

0xcc31,	// (0x00049fbe) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0004ca73) blid_firmament_pane_t_ParamLimits

0xcc48,	// (0x00049fd5) blid_sat_info_pane_ParamLimits

0xad42,	// (0x000480cf) main_cam_set_pane_ParamLimits

0x69af,	// (0x00043d3c) aid_size_cell_colour_35_ParamLimits

0x69c9,	// (0x00043d56) aid_size_cell_colour_112_ParamLimits

0x69e0,	// (0x00043d6d) aid_size_cell_effect_ParamLimits

0xad42,	// (0x000480cf) bg_tb_trans_pane_cp02_ParamLimits

0xb3db,	// (0x00048768) heading_imed_pane_ParamLimits

0x69fa,	// (0x00043d87) listscroll_imed_pane_ParamLimits

0xbe36,	// (0x000491c3) popup_call2_audio_first_window_g5_ParamLimits

0xbe36,	// (0x000491c3) popup_call2_audio_first_window_g5

0x7109,	// (0x00044496) aid_size_touch_image3_arrow_left_ParamLimits

0x7109,	// (0x00044496) aid_size_touch_image3_arrow_left

0x711f,	// (0x000444ac) aid_size_touch_image3_arrow_right_ParamLimits

0x711f,	// (0x000444ac) aid_size_touch_image3_arrow_right

0x83ec,	// (0x00045779) vid4_progress_pane_t3

0x6c9a,	// (0x00044027) main_hwr_training_symbol_option_pane_ParamLimits

0x6c9a,	// (0x00044027) main_hwr_training_symbol_option_pane

0xd453,	// (0x0004a7e0) popup_hwr_training_preview_window_ParamLimits

0xd453,	// (0x0004a7e0) popup_hwr_training_preview_window

0x6cfb,	// (0x00044088) hwr_training_navi_pane_g5_ParamLimits

0x6cfb,	// (0x00044088) hwr_training_navi_pane_g5

0xd6a3,	// (0x0004aa30) popup_char_count_window

0xdf46,	// (0x0004b2d3) bg_popup_sub_pane_cp20_ParamLimits

0x7ed3,	// (0x00045260) list_vitu2_match_list_pane_ParamLimits

0x7edf,	// (0x0004526c) vitu2_page_scroll_pane_ParamLimits

0x7edf,	// (0x0004526c) vitu2_page_scroll_pane

0xdb96,	// (0x0004af23) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb96,	// (0x0004af23) list_single_hwr_training_symbol_option_pane

0xdba9,	// (0x0004af36) list_single_hwr_training_symbol_option_pane_g1

0xdbb1,	// (0x0004af3e) list_single_hwr_training_symbol_option_pane_t1

0xdbbf,	// (0x0004af4c) bg_button_pane_cp023

0xdbc8,	// (0x0004af55) bg_button_pane_cp024

0x8437,	// (0x000457c4) vitu2_page_scroll_pane_g1

0x843f,	// (0x000457cc) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0004ce6c) vitu2_page_scroll_pane_g

0x8447,	// (0x000457d4) vitu2_page_scroll_pane_t1

0xcc81,	// (0x0004a00e) popup_char_count_window_g1

0xdbfb,	// (0x0004af88) popup_char_count_window_g2

0xdc04,	// (0x0004af91) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0004ce71) popup_char_count_window_g

0xdc0d,	// (0x0004af9a) popup_char_count_window_t1

0xa062,	// (0x000473ef) main_vded2_pane

0xd152,	// (0x0004a4df) aid_size_cell_imed_line

0xd15c,	// (0x0004a4e9) grid_imed_line_width_pane

0x7552,	// (0x000448df) vid4_indicators_pane_g4

0xdc1b,	// (0x0004afa8) cell_imed_line_width_pane_ParamLimits

0xdc1b,	// (0x0004afa8) cell_imed_line_width_pane

0xdc2f,	// (0x0004afbc) cell_imed_line_width_pane_g1

0xd468,	// (0x0004a7f5) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0004ce78) cell_imed_line_width_pane_g

0x8456,	// (0x000457e3) main_vded2_pane_g1_ParamLimits

0x8456,	// (0x000457e3) main_vded2_pane_g1

0x8463,	// (0x000457f0) main_vded2_pane_g2_ParamLimits

0x8463,	// (0x000457f0) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0004ce7d) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0004ce7d) main_vded2_pane_g

0x8471,	// (0x000457fe) vded2_slider_pane_ParamLimits

0x8471,	// (0x000457fe) vded2_slider_pane

0x847e,	// (0x0004580b) aid_size_touch_vded2_end

0x8488,	// (0x00045815) aid_size_touch_vded2_playhead

0xdc38,	// (0x0004afc5) aid_size_touch_vded2_start

0xdc40,	// (0x0004afcd) vded2_slider_bg_pane

0xdc49,	// (0x0004afd6) vded2_slider_pane_g1

0xdc52,	// (0x0004afdf) vded2_slider_pane_g2

0x8490,	// (0x0004581d) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0004ce82) vded2_slider_pane_g

0xdc5a,	// (0x0004afe7) vded2_slider_bg_pane_g1

0xdc63,	// (0x0004aff0) vded2_slider_bg_pane_g2

0xdc6c,	// (0x0004aff9) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0004ce89) vded2_slider_bg_pane_g

0x4da3,	// (0x00042130) aid_postcard_touch_down_pane_ParamLimits

0x4da3,	// (0x00042130) aid_postcard_touch_down_pane

0x4db3,	// (0x00042140) aid_postcard_touch_up_pane_ParamLimits

0x4db3,	// (0x00042140) aid_postcard_touch_up_pane

0xa062,	// (0x000473ef) main_blid2_pane

0x54db,	// (0x00042868) popup_blid2_search_window

0xa062,	// (0x000473ef) blid2_gps_pane

0xa062,	// (0x000473ef) blid2_navig_pane

0xa062,	// (0x000473ef) blid2_search_pane

0xa062,	// (0x000473ef) blid2_tripm_pane

0x8499,	// (0x00045826) blid2_search_pane_g1_ParamLimits

0x8499,	// (0x00045826) blid2_search_pane_g1

0x84a9,	// (0x00045836) blid2_search_pane_t1_ParamLimits

0x84a9,	// (0x00045836) blid2_search_pane_t1

0x84bb,	// (0x00045848) aid_size_cell_blid2_gps_ParamLimits

0x84bb,	// (0x00045848) aid_size_cell_blid2_gps

0x84cb,	// (0x00045858) blid2_gps_pane_g1_ParamLimits

0x84cb,	// (0x00045858) blid2_gps_pane_g1

0x84d7,	// (0x00045864) grid_blid2_satellite_pane_ParamLimits

0x84d7,	// (0x00045864) grid_blid2_satellite_pane

0x84e7,	// (0x00045874) blid2_navig_pane_g1_ParamLimits

0x84e7,	// (0x00045874) blid2_navig_pane_g1

0x84f3,	// (0x00045880) blid2_navig_pane_t1_ParamLimits

0x84f3,	// (0x00045880) blid2_navig_pane_t1

0x8505,	// (0x00045892) blid2_navig_pane_t2_ParamLimits

0x8505,	// (0x00045892) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0004ce90) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0004ce90) blid2_navig_pane_t

0x8517,	// (0x000458a4) blid2_navig_ring_pane_ParamLimits

0x8517,	// (0x000458a4) blid2_navig_ring_pane

0x8527,	// (0x000458b4) blid2_speed_pane_ParamLimits

0x8527,	// (0x000458b4) blid2_speed_pane

0x8533,	// (0x000458c0) blid2_tripm_pane_g1_ParamLimits

0x8533,	// (0x000458c0) blid2_tripm_pane_g1

0x8543,	// (0x000458d0) blid2_tripm_pane_g2_ParamLimits

0x8543,	// (0x000458d0) blid2_tripm_pane_g2

0x854f,	// (0x000458dc) blid2_tripm_pane_g3_ParamLimits

0x854f,	// (0x000458dc) blid2_tripm_pane_g3

0x855b,	// (0x000458e8) blid2_tripm_pane_g4_ParamLimits

0x855b,	// (0x000458e8) blid2_tripm_pane_g4

0x8567,	// (0x000458f4) blid2_tripm_pane_g5_ParamLimits

0x8567,	// (0x000458f4) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0004ce95) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0004ce95) blid2_tripm_pane_g

0x8583,	// (0x00045910) blid2_tripm_pane_t1_ParamLimits

0x8583,	// (0x00045910) blid2_tripm_pane_t1

0x8597,	// (0x00045924) blid2_tripm_pane_t2_ParamLimits

0x8597,	// (0x00045924) blid2_tripm_pane_t2

0x85a9,	// (0x00045936) blid2_tripm_pane_t3_ParamLimits

0x85a9,	// (0x00045936) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0004cea2) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0004cea2) blid2_tripm_pane_t

0x85db,	// (0x00045968) cell_blid2_satellite_pane_ParamLimits

0x85db,	// (0x00045968) cell_blid2_satellite_pane

0x85f5,	// (0x00045982) cell_blid2_satellite_pane_g1

0xdc75,	// (0x0004b002) cell_blid2_satellite_pane_t1

0xcc58,	// (0x00049fe5) blid2_speed_pane_g1

0xdc83,	// (0x0004b010) blid2_speed_pane_t1

0xdc91,	// (0x0004b01e) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0004ceab) blid2_speed_pane_t

0xcc58,	// (0x00049fe5) blid2_navig_ring_pane_g1

0x85fe,	// (0x0004598b) blid2_navig_ring_pane_g2

0x8606,	// (0x00045993) blid2_navig_ring_pane_g3

0x860e,	// (0x0004599b) blid2_navig_ring_pane_g4

0x8616,	// (0x000459a3) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0004ceb0) blid2_navig_ring_pane_g

0xa062,	// (0x000473ef) bg_popup_window_pane_cp011

0xdc9f,	// (0x0004b02c) popup_blid2_search_window_g1

0xdca7,	// (0x0004b034) popup_blid2_search_window_t1

0xdcb5,	// (0x0004b042) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0004cebb) popup_blid2_search_window_t

0xaae0,	// (0x00047e6d) main_browser_pane_g1

0xa7c1,	// (0x00047b4e) main_browser_pane_ParamLimits

0xad42,	// (0x000480cf) bg_button_pane_cp011_ParamLimits

0x77bd,	// (0x00044b4a) cell_vitu2_function_pane_g1_ParamLimits

0xc850,	// (0x00049bdd) bg_popup_sub_pane_cp22_ParamLimits

0x129d,	// (0x0003e62a) input_focus_pane_cp08_ParamLimits

0x8064,	// (0x000453f1) popup_vitu2_query_button_pane_ParamLimits

0x8064,	// (0x000453f1) popup_vitu2_query_button_pane

0x12b4,	// (0x0003e641) popup_vitu2_query_input_button_pane

0xd914,	// (0x0004aca1) popup_vitu2_query_window_g1_ParamLimits

0x12be,	// (0x0003e64b) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0004cdbc) popup_vitu2_query_window_g_ParamLimits

0xa062,	// (0x000473ef) bg_button_pane_cp026

0x861e,	// (0x000459ab) popup_vitu2_query_input_button_pane_g1

0xa062,	// (0x000473ef) bg_button_pane_cp025

0xdcc3,	// (0x0004b050) popup_vitu2_query_button_pane_t1

0x5f3b,	// (0x000432c8) main_mp3_pane_t6

0x5f4b,	// (0x000432d8) popup_slider_window_cp01

0x7437,	// (0x000447c4) cam4_battery_pane

0x7511,	// (0x0004489e) cam4_battery_pane_cp02

0x836f,	// (0x000456fc) cam4_battery_pane_cp01

0x836f,	// (0x000456fc) cam4_battery_pane_cp03

0xcc58,	// (0x00049fe5) cam4_battery_pane_g1

0xda2c,	// (0x0004adb9) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0004cec0) cam4_battery_pane_g

0xcb24,	// (0x00049eb1) popup_blid_sat_info2_window_t11

0xb23a,	// (0x000485c7) aid_size_touch_mv_arrow_left_ParamLimits

0xb265,	// (0x000485f2) aid_size_touch_mv_arrow_right_ParamLimits

0xb2c3,	// (0x00048650) navi_pane_g1_ParamLimits

0xb2cf,	// (0x0004865c) navi_pane_g2_ParamLimits

0xb2fd,	// (0x0004868a) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0004c772) navi_pane_g_ParamLimits

0x482b,	// (0x00041bb8) navi_pane_mv_t1_ParamLimits

0x6a06,	// (0x00043d93) grid_imed_effect_pane_ParamLimits

0x3253,	// (0x000405e0) aid_placing_vt_slider_lsc

0xaa2f,	// (0x00047dbc) aid_placing_vt_slider_prt

0xad42,	// (0x000480cf) bg_tb_trans_pane_cp01_ParamLimits

0xcdc6,	// (0x0004a153) popup_image_details_window_g1_ParamLimits

0xcdd9,	// (0x0004a166) popup_image_details_window_g2_ParamLimits

0xcdee,	// (0x0004a17b) popup_image_details_window_g3_ParamLimits

0xcdee,	// (0x0004a17b) popup_image_details_window_g3

0xf72b,	// (0x0004cab8) popup_image_details_window_g_ParamLimits

0xce02,	// (0x0004a18f) popup_image_details_window_t1_ParamLimits

0xce14,	// (0x0004a1a1) popup_image_details_window_t2_ParamLimits

0xce2d,	// (0x0004a1ba) popup_image_details_window_t3_ParamLimits

0xce41,	// (0x0004a1ce) popup_image_details_window_t4_ParamLimits

0xce5c,	// (0x0004a1e9) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0004cabf) popup_image_details_window_t_ParamLimits

0x828f,	// (0x0004561c) cl_header_name_pane_ParamLimits

0x828f,	// (0x0004561c) cl_header_name_pane

0x8626,	// (0x000459b3) cl_header_name_pane_t1_ParamLimits

0x8626,	// (0x000459b3) cl_header_name_pane_t1

0x863d,	// (0x000459ca) cl_header_name_pane_t2_ParamLimits

0x863d,	// (0x000459ca) cl_header_name_pane_t2

0x8667,	// (0x000459f4) cl_header_name_pane_t3_ParamLimits

0x8667,	// (0x000459f4) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0004cec5) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0004cec5) cl_header_name_pane_t

0xb38c,	// (0x00048719) navi_pane_mv_g2_ParamLimits

0xd67d,	// (0x0004aa0a) field_vitu2_entry_pane_g1_ParamLimits

0xd689,	// (0x0004aa16) field_vitu2_entry_pane_g2_ParamLimits

0xd695,	// (0x0004aa22) field_vitu2_entry_pane_g3_ParamLimits

0xd695,	// (0x0004aa22) field_vitu2_entry_pane_g3

0xf92e,	// (0x0004ccbb) field_vitu2_entry_pane_g_ParamLimits

0x7751,	// (0x00044ade) cell_vitu2_itu_pane_g1_ParamLimits

0x7763,	// (0x00044af0) cell_vitu2_itu_pane_g2_ParamLimits

0x7763,	// (0x00044af0) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0004ccc7) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0004ccc7) cell_vitu2_itu_pane_g

0xad42,	// (0x000480cf) bg_vkb2_func_pane_cp05_ParamLimits

0xad42,	// (0x000480cf) bg_vkb2_func_pane_cp05

0xad42,	// (0x000480cf) bg_vkb2_func_pane_cp03

0xad42,	// (0x000480cf) bg_vkb2_func_pane_cp04

0xad42,	// (0x000480cf) bg_vkb2_func_pane_cp10_ParamLimits

0xad42,	// (0x000480cf) bg_vkb2_func_pane_cp10

0x1473,	// (0x0003e800) bg_vkb2_func_pane_cp08

0x8239,	// (0x000455c6) bg_vkb2_func_pane_cp06

0x8247,	// (0x000455d4) bg_vkb2_func_pane_cp07

0xdbd1,	// (0x0004af5e) bg_vkb2_func_pane_cp11_ParamLimits

0xdbd1,	// (0x0004af5e) bg_vkb2_func_pane_cp11

0xdbe6,	// (0x0004af73) bg_vkb2_func_pane_cp12_ParamLimits

0xdbe6,	// (0x0004af73) bg_vkb2_func_pane_cp12

0xa062,	// (0x000473ef) bg_vkb2_func_pane_cp09

0xd6b5,	// (0x0004aa42) bg_vkb2_func_pane_g1

0xabf1,	// (0x00047f7e) bg_vkb2_func_pane_g2

0xd6bd,	// (0x0004aa4a) bg_vkb2_func_pane_g3

0xd6c5,	// (0x0004aa52) bg_vkb2_func_pane_g4

0xd8d9,	// (0x0004ac66) bg_vkb2_func_pane_g5

0xd6dd,	// (0x0004aa6a) bg_vkb2_func_pane_g6

0xd6e5,	// (0x0004aa72) bg_vkb2_func_pane_g7

0xd6d5,	// (0x0004aa62) bg_vkb2_func_pane_g8

0xabd1,	// (0x00047f5e) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0004cecc) bg_vkb2_func_pane_g

0x8575,	// (0x00045902) blid2_tripm_pane_g6_ParamLimits

0x8575,	// (0x00045902) blid2_tripm_pane_g6

0xd51f,	// (0x0004a8ac) mp4_progress_pane_g1

0x85cf,	// (0x0004595c) blid2_tripm_values_pane_ParamLimits

0x85cf,	// (0x0004595c) blid2_tripm_values_pane

0x868c,	// (0x00045a19) blid2_tripm_values_pane_t1

0x869a,	// (0x00045a27) blid2_tripm_values_pane_t2

0x86a8,	// (0x00045a35) blid2_tripm_values_pane_t3

0x86b6,	// (0x00045a43) blid2_tripm_values_pane_t4

0x86c4,	// (0x00045a51) blid2_tripm_values_pane_t5

0x86d2,	// (0x00045a5f) blid2_tripm_values_pane_t6

0x86e0,	// (0x00045a6d) blid2_tripm_values_pane_t7

0x86ee,	// (0x00045a7b) blid2_tripm_values_pane_t8

0x86fc,	// (0x00045a89) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0004cedf) blid2_tripm_values_pane_t

0x3293,	// (0x00040620) call_video_pane_t1_ParamLimits

0x32b4,	// (0x00040641) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0004c5fb) call_video_pane_t_ParamLimits

0x0ff5,	// (0x0003e382) msg_header_pane_g1_ParamLimits

0xb580,	// (0x0004890d) msg_header_pane_g2_ParamLimits

0xb580,	// (0x0004890d) msg_header_pane_g2

0x0001,

0xf488,	// (0x0004c815) msg_header_pane_g_ParamLimits

0xf488,	// (0x0004c815) msg_header_pane_g

0xa7c1,	// (0x00047b4e) main_clock2_pane_ParamLimits

0x679b,	// (0x00043b28) grid_clock2_toolbar_pane_ParamLimits

0x679b,	// (0x00043b28) grid_clock2_toolbar_pane

0x679b,	// (0x00043b28) listscroll_clock2_pane_ParamLimits

0x679b,	// (0x00043b28) listscroll_clock2_pane

0x6843,	// (0x00043bd0) main_clock2_pane_t3_ParamLimits

0x6843,	// (0x00043bd0) main_clock2_pane_t3

0x6855,	// (0x00043be2) main_clock2_pane_t4_ParamLimits

0x6855,	// (0x00043be2) main_clock2_pane_t4

0xdcd1,	// (0x0004b05e) cell_clock2_toolbar_pane

0xdcd9,	// (0x0004b066) cell_clock2_toolbar_pane_cp01

0xdcd9,	// (0x0004b066) cell_clock2_toolbar_pane_cp02

0xdce1,	// (0x0004b06e) cell_clock2_toolbar_pane_cp03

0xdce9,	// (0x0004b076) list_clock2_pane

0xb1bf,	// (0x0004854c) scroll_pane_cp10

0xdcf1,	// (0x0004b07e) list_single_clock2_pane_ParamLimits

0xdcf1,	// (0x0004b07e) list_single_clock2_pane

0xa998,	// (0x00047d25) list_highlight_pane_cp08

0xdcfe,	// (0x0004b08b) list_single_clock2_pane_t1

0xdd0c,	// (0x0004b099) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0004cef2) list_single_clock2_pane_t

0xa062,	// (0x000473ef) bg_button_pane_cp10

0xdd1a,	// (0x0004b0a7) cell_clock2_toolbar_pane_g1

0x4d05,	// (0x00042092) aid_main_viewer_pane_g1_ParamLimits

0x4d05,	// (0x00042092) aid_main_viewer_pane_g1

0x4d11,	// (0x0004209e) aid_main_viewer_pane_g2_ParamLimits

0x4d11,	// (0x0004209e) aid_main_viewer_pane_g2

0x4d1d,	// (0x000420aa) aid_main_viewer_pane_g3_ParamLimits

0x4d1d,	// (0x000420aa) aid_main_viewer_pane_g3

0x4d2e,	// (0x000420bb) aid_main_viewer_pane_g4_ParamLimits

0x4d2e,	// (0x000420bb) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0004c826) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0004c826) aid_main_viewer_pane_g

0x54b3,	// (0x00042840) main_calc_pane_ParamLimits

0x54c0,	// (0x0004284d) main_dialer2_pane_ParamLimits

0xa062,	// (0x000473ef) main_cam6_pane

0xa062,	// (0x000473ef) main_vid6_pane

0x67a7,	// (0x00043b34) listscroll_gen_pane_cp06_ParamLimits

0x67a7,	// (0x00043b34) listscroll_gen_pane_cp06

0x6867,	// (0x00043bf4) main_clock2_pane_t5_ParamLimits

0x6867,	// (0x00043bf4) main_clock2_pane_t5

0x68b0,	// (0x00043c3d) aid_call2_pane_cp10_ParamLimits

0x68c2,	// (0x00043c4f) aid_call_pane_cp10_ParamLimits

0xb22e,	// (0x000485bb) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb22e,	// (0x000485bb) popup_clock_analogue_window_cp10_g2_ParamLimits

0x68d4,	// (0x00043c61) popup_clock_analogue_window_cp10_g3_ParamLimits

0x68d4,	// (0x00043c61) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb22e,	// (0x000485bb) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0004cb74) popup_clock_analogue_window_cp10_g_ParamLimits

0x68e6,	// (0x00043c73) popup_clock_analogue_window_cp10_t1_ParamLimits

0x70b6,	// (0x00044443) cell_dialer2_keypad_pane_g2_ParamLimits

0x70b6,	// (0x00044443) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0004cc5a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0004cc5a) cell_dialer2_keypad_pane_g

0x70d2,	// (0x0004445f) cell_dialer2_keypad_pane_t1

0x7a88,	// (0x00044e15) main_cset_text2_pane_ParamLimits

0x7a88,	// (0x00044e15) main_cset_text2_pane

0xdb39,	// (0x0004aec6) area_vitu2_query_pane_g1_ParamLimits

0x139e,	// (0x0003e72b) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0004ce0f) area_vitu2_query_pane_g_ParamLimits

0x144f,	// (0x0003e7dc) area_vitu2_query_pane_t7_ParamLimits

0x144f,	// (0x0003e7dc) area_vitu2_query_pane_t7

0x8239,	// (0x000455c6) bg_button_pane_cp018_ParamLimits

0x8247,	// (0x000455d4) bg_button_pane_cp021_ParamLimits

0x1473,	// (0x0003e800) bg_button_pane_cp022_ParamLimits

0x1473,	// (0x0003e800) bg_vkb2_func_pane_cp08_ParamLimits

0x8239,	// (0x000455c6) bg_vkb2_func_pane_cp06_ParamLimits

0x8247,	// (0x000455d4) bg_vkb2_func_pane_cp07_ParamLimits

0x1484,	// (0x0003e811) input_focus_pane_cp09_ParamLimits

0x870a,	// (0x00045a97) cam6_autofocus_pane_ParamLimits

0x870a,	// (0x00045a97) cam6_autofocus_pane

0x872c,	// (0x00045ab9) cam6_image_uncrop_pane_ParamLimits

0x872c,	// (0x00045ab9) cam6_image_uncrop_pane

0x8759,	// (0x00045ae6) cam6_indi_pane_ParamLimits

0x8759,	// (0x00045ae6) cam6_indi_pane

0x8773,	// (0x00045b00) cam6_mode_pane_ParamLimits

0x8773,	// (0x00045b00) cam6_mode_pane

0x8787,	// (0x00045b14) cam6_timer_pane_ParamLimits

0x8787,	// (0x00045b14) cam6_timer_pane

0x8798,	// (0x00045b25) cam6_zoom_pane_ParamLimits

0x8798,	// (0x00045b25) cam6_zoom_pane

0x87b0,	// (0x00045b3d) cam6_mode_pane_g1_ParamLimits

0x87b0,	// (0x00045b3d) cam6_mode_pane_g1

0x87bc,	// (0x00045b49) cam6_mode_pane_g2_ParamLimits

0x87bc,	// (0x00045b49) cam6_mode_pane_g2

0x87c8,	// (0x00045b55) cam6_mode_pane_g3_ParamLimits

0x87c8,	// (0x00045b55) cam6_mode_pane_g3

0x87d4,	// (0x00045b61) cam6_mode_pane_g4_ParamLimits

0x87d4,	// (0x00045b61) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0004cef7) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0004cef7) cam6_mode_pane_g

0xda5a,	// (0x0004ade7) bg_tb_trans_pane_cp08_ParamLimits

0xda5a,	// (0x0004ade7) bg_tb_trans_pane_cp08

0xdd22,	// (0x0004b0af) cam6_battery_pane_ParamLimits

0xdd22,	// (0x0004b0af) cam6_battery_pane

0xdd38,	// (0x0004b0c5) cam6_indi_pane_g1_ParamLimits

0xdd38,	// (0x0004b0c5) cam6_indi_pane_g1

0xdd4a,	// (0x0004b0d7) cam6_indi_pane_g2_ParamLimits

0xdd4a,	// (0x0004b0d7) cam6_indi_pane_g2

0xdd5c,	// (0x0004b0e9) cam6_indi_pane_g3_ParamLimits

0xdd5c,	// (0x0004b0e9) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0004cf00) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0004cf00) cam6_indi_pane_g

0xdd6e,	// (0x0004b0fb) cam6_indi_pane_t1_ParamLimits

0xdd6e,	// (0x0004b0fb) cam6_indi_pane_t1

0x7585,	// (0x00044912) cam6_autofocus_pane_g1

0x758d,	// (0x0004491a) cam6_autofocus_pane_g2

0x7595,	// (0x00044922) cam6_autofocus_pane_g3

0x759d,	// (0x0004492a) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0004cf07) cam6_autofocus_pane_g

0xdd94,	// (0x0004b121) cam6_timer_pane_g1

0xdd9c,	// (0x0004b129) cam6_timer_pane_t1

0xddaa,	// (0x0004b137) cam6_zoom_cont_pane

0xddb2,	// (0x0004b13f) cam6_zoom_pane_g1

0xddba,	// (0x0004b147) cam6_zoom_pane_g2

0x87e0,	// (0x00045b6d) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0004cf10) cam6_zoom_pane_g

0xcc58,	// (0x00049fe5) cam6_battery_pane_g1

0xcc58,	// (0x00049fe5) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0004ca7c) cam6_battery_pane_g

0xddc2,	// (0x0004b14f) cam6_zoom_cont_pane_g1

0xddcb,	// (0x0004b158) cam6_zoom_cont_pane_g2

0xddd4,	// (0x0004b161) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0004cf17) cam6_zoom_cont_pane_g

0x87fd,	// (0x00045b8a) cam6_mode_pane_cp_ParamLimits

0x87fd,	// (0x00045b8a) cam6_mode_pane_cp

0x8798,	// (0x00045b25) cam6_zoom_pane_cp_ParamLimits

0x8798,	// (0x00045b25) cam6_zoom_pane_cp

0x8811,	// (0x00045b9e) vid6_image_uncrop_cif_pane_ParamLimits

0x8811,	// (0x00045b9e) vid6_image_uncrop_cif_pane

0x883d,	// (0x00045bca) vid6_image_uncrop_nhd_pane_ParamLimits

0x883d,	// (0x00045bca) vid6_image_uncrop_nhd_pane

0x872c,	// (0x00045ab9) vid6_image_uncrop_vga_pane_ParamLimits

0x872c,	// (0x00045ab9) vid6_image_uncrop_vga_pane

0x885a,	// (0x00045be7) vid6_image_uncrop_wvga_pane_ParamLimits

0x885a,	// (0x00045be7) vid6_image_uncrop_wvga_pane

0x8877,	// (0x00045c04) vid6_indi_pane_ParamLimits

0x8877,	// (0x00045c04) vid6_indi_pane

0xda5a,	// (0x0004ade7) bg_tb_trans_pane_cp09_ParamLimits

0xda5a,	// (0x0004ade7) bg_tb_trans_pane_cp09

0xddec,	// (0x0004b179) cam6_battery_pane_cp_ParamLimits

0xddec,	// (0x0004b179) cam6_battery_pane_cp

0xddf8,	// (0x0004b185) vid6_indi_pane_g1_ParamLimits

0xddf8,	// (0x0004b185) vid6_indi_pane_g1

0xde0a,	// (0x0004b197) vid6_indi_pane_g2_ParamLimits

0xde0a,	// (0x0004b197) vid6_indi_pane_g2

0xde1c,	// (0x0004b1a9) vid6_indi_pane_g3_ParamLimits

0xde1c,	// (0x0004b1a9) vid6_indi_pane_g3

0xde31,	// (0x0004b1be) vid6_indi_pane_g4_ParamLimits

0xde31,	// (0x0004b1be) vid6_indi_pane_g4

0xde46,	// (0x0004b1d3) vid6_indi_pane_g5_ParamLimits

0xde46,	// (0x0004b1d3) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0004cf1e) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0004cf1e) vid6_indi_pane_g

0xde60,	// (0x0004b1ed) vid6_indi_pane_t1_ParamLimits

0xde60,	// (0x0004b1ed) vid6_indi_pane_t1

0xde76,	// (0x0004b203) vid6_indi_pane_t2_ParamLimits

0xde76,	// (0x0004b203) vid6_indi_pane_t2

0xde9e,	// (0x0004b22b) vid6_indi_pane_t3_ParamLimits

0xde9e,	// (0x0004b22b) vid6_indi_pane_t3

0xdec6,	// (0x0004b253) vid6_indi_pane_t4_ParamLimits

0xdec6,	// (0x0004b253) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0004cf29) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0004cf29) vid6_indi_pane_t

0xdeea,	// (0x0004b277) wait_bar_pane_cp08

0x889a,	// (0x00045c27) main_cset_text2_pane_t1_ParamLimits

0x889a,	// (0x00045c27) main_cset_text2_pane_t1

0x87e8,	// (0x00045b75) listscroll_gen_pane_cp06_t1_ParamLimits

0x87e8,	// (0x00045b75) listscroll_gen_pane_cp06_t1

0xa062,	// (0x000473ef) main_cam6_set_pane

0xcea6,	// (0x0004a233) bg_tb_trans_pane_cp06_ParamLimits

0x743f,	// (0x000447cc) cam4_indicators_pane_g1_ParamLimits

0x7450,	// (0x000447dd) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0004cc97) cam4_indicators_pane_g_ParamLimits

0x7468,	// (0x000447f5) cam4_indicators_pane_t1_ParamLimits

0xad42,	// (0x000480cf) bg_tb_trans_pane_cp07_ParamLimits

0x7519,	// (0x000448a6) vid4_indicators_pane_g1_ParamLimits

0x752d,	// (0x000448ba) vid4_indicators_pane_g2_ParamLimits

0x7541,	// (0x000448ce) vid4_indicators_pane_g3_ParamLimits

0x7552,	// (0x000448df) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0004cca9) vid4_indicators_pane_g_ParamLimits

0x756e,	// (0x000448fb) vid4_indicators_pane_t1_ParamLimits

0x8377,	// (0x00045704) vid4_progress_pane_g1_ParamLimits

0x8387,	// (0x00045714) vid4_progress_pane_g2_ParamLimits

0x8397,	// (0x00045724) vid4_progress_pane_g3_ParamLimits

0x83a9,	// (0x00045736) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0004ce5a) vid4_progress_pane_g_ParamLimits

0x83c1,	// (0x0004574e) vid4_progress_pane_t1_ParamLimits

0x83d7,	// (0x00045764) vid4_progress_pane_t2_ParamLimits

0x83ec,	// (0x00045779) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0004ce65) vid4_progress_pane_t_ParamLimits

0x8402,	// (0x0004578f) wait_bar_pane_cp07_ParamLimits

0x88d1,	// (0x00045c5e) main_cam6_set_pane_g2_ParamLimits

0x88d1,	// (0x00045c5e) main_cam6_set_pane_g2

0x88dd,	// (0x00045c6a) main_cset6_listscroll_pane_ParamLimits

0x88dd,	// (0x00045c6a) main_cset6_listscroll_pane

0x8908,	// (0x00045c95) main_cset6_slider_pane_ParamLimits

0x8908,	// (0x00045c95) main_cset6_slider_pane

0x8914,	// (0x00045ca1) main_cset6_text2_pane_ParamLimits

0x8914,	// (0x00045ca1) main_cset6_text2_pane

0xdef9,	// (0x0004b286) main_cset6_text_pane

0xdf01,	// (0x0004b28e) main_cset_list_pane_copy1_ParamLimits

0xdf01,	// (0x0004b28e) main_cset_list_pane_copy1

0xdf11,	// (0x0004b29e) scroll_pane_cp028_copy1

0x8927,	// (0x00045cb4) cset_list_set_pane_copy1

0x893d,	// (0x00045cca) aid_position_infowindow_above_copy1

0x8945,	// (0x00045cd2) aid_position_infowindow_below_copy1

0x14c2,	// (0x0003e84f) cset_list_set_pane_g1_copy1

0x1211,	// (0x0003e59e) cset_list_set_pane_g3_copy1_ParamLimits

0x1211,	// (0x0003e59e) cset_list_set_pane_g3_copy1

0x1220,	// (0x0003e5ad) cset_list_set_pane_t1_copy1_ParamLimits

0x1220,	// (0x0003e5ad) cset_list_set_pane_t1_copy1

0xad42,	// (0x000480cf) list_highlight_pane_cp021_copy1_ParamLimits

0xad42,	// (0x000480cf) list_highlight_pane_cp021_copy1

0xdf1a,	// (0x0004b2a7) cset6_slider_pane_ParamLimits

0xdf1a,	// (0x0004b2a7) cset6_slider_pane

0xdf5d,	// (0x0004b2ea) main_cset6_slider_pane_g1_ParamLimits

0xdf5d,	// (0x0004b2ea) main_cset6_slider_pane_g1

0x894d,	// (0x00045cda) main_cset6_slider_pane_g2_ParamLimits

0x894d,	// (0x00045cda) main_cset6_slider_pane_g2

0xdf85,	// (0x0004b312) main_cset6_slider_pane_g3_ParamLimits

0xdf85,	// (0x0004b312) main_cset6_slider_pane_g3

0x8975,	// (0x00045d02) main_cset6_slider_pane_g4_ParamLimits

0x8975,	// (0x00045d02) main_cset6_slider_pane_g4

0x8981,	// (0x00045d0e) main_cset6_slider_pane_g5_ParamLimits

0x8981,	// (0x00045d0e) main_cset6_slider_pane_g5

0xd7e4,	// (0x0004ab71) main_cset6_slider_pane_g7_ParamLimits

0xd7e4,	// (0x0004ab71) main_cset6_slider_pane_g7

0xd7f0,	// (0x0004ab7d) main_cset6_slider_pane_g8_ParamLimits

0xd7f0,	// (0x0004ab7d) main_cset6_slider_pane_g8

0x898f,	// (0x00045d1c) main_cset6_slider_pane_g9_ParamLimits

0x898f,	// (0x00045d1c) main_cset6_slider_pane_g9

0x899b,	// (0x00045d28) main_cset6_slider_pane_g10_ParamLimits

0x899b,	// (0x00045d28) main_cset6_slider_pane_g10

0x89a7,	// (0x00045d34) main_cset6_slider_pane_g11_ParamLimits

0x89a7,	// (0x00045d34) main_cset6_slider_pane_g11

0x89b3,	// (0x00045d40) main_cset6_slider_pane_g12_ParamLimits

0x89b3,	// (0x00045d40) main_cset6_slider_pane_g12

0xda36,	// (0x0004adc3) main_cset6_slider_pane_g13_ParamLimits

0xda36,	// (0x0004adc3) main_cset6_slider_pane_g13

0xda42,	// (0x0004adcf) main_cset6_slider_pane_g14_ParamLimits

0xda42,	// (0x0004adcf) main_cset6_slider_pane_g14

0x89bf,	// (0x00045d4c) main_cset6_slider_pane_g15_ParamLimits

0x89bf,	// (0x00045d4c) main_cset6_slider_pane_g15

0x89d7,	// (0x00045d64) main_cset6_slider_pane_g16_ParamLimits

0x89d7,	// (0x00045d64) main_cset6_slider_pane_g16

0x89e5,	// (0x00045d72) main_cset6_slider_pane_g17_ParamLimits

0x89e5,	// (0x00045d72) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0004cf32) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0004cf32) main_cset6_slider_pane_g

0xdf9d,	// (0x0004b32a) main_cset6_slider_pane_t1_ParamLimits

0xdf9d,	// (0x0004b32a) main_cset6_slider_pane_t1

0x89ff,	// (0x00045d8c) main_cset6_slider_pane_t2_ParamLimits

0x89ff,	// (0x00045d8c) main_cset6_slider_pane_t2

0x8a2a,	// (0x00045db7) main_cset6_slider_pane_t3_ParamLimits

0x8a2a,	// (0x00045db7) main_cset6_slider_pane_t3

0x8a55,	// (0x00045de2) main_cset6_slider_pane_t4_ParamLimits

0x8a55,	// (0x00045de2) main_cset6_slider_pane_t4

0x8a80,	// (0x00045e0d) main_cset6_slider_pane_t5_ParamLimits

0x8a80,	// (0x00045e0d) main_cset6_slider_pane_t5

0xdfde,	// (0x0004b36b) main_cset6_slider_pane_t7_ParamLimits

0xdfde,	// (0x0004b36b) main_cset6_slider_pane_t7

0x8aad,	// (0x00045e3a) main_cset6_slider_pane_t8_ParamLimits

0x8aad,	// (0x00045e3a) main_cset6_slider_pane_t8

0x8ad1,	// (0x00045e5e) main_cset6_slider_pane_t9_ParamLimits

0x8ad1,	// (0x00045e5e) main_cset6_slider_pane_t9

0x8af5,	// (0x00045e82) main_cset6_slider_pane_t10_ParamLimits

0x8af5,	// (0x00045e82) main_cset6_slider_pane_t10

0x8b19,	// (0x00045ea6) main_cset6_slider_pane_t11_ParamLimits

0x8b19,	// (0x00045ea6) main_cset6_slider_pane_t11

0xe014,	// (0x0004b3a1) main_cset6_slider_pane_t14_ParamLimits

0xe014,	// (0x0004b3a1) main_cset6_slider_pane_t14

0xe04d,	// (0x0004b3da) main_cset6_slider_pane_t15_ParamLimits

0xe04d,	// (0x0004b3da) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0004cf57) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0004cf57) main_cset6_slider_pane_t

0xd428,	// (0x0004a7b5) cset_slider_pane_g1_copy1

0xda68,	// (0x0004adf5) cset_slider_pane_g2_copy1

0xdf54,	// (0x0004b2e1) cset_slider_pane_g3_copy1

0xa062,	// (0x000473ef) bg_popup_sub_pane_cp011_copy1

0xe086,	// (0x0004b413) main_cset_text_pane_g1_copy1

0xd928,	// (0x0004acb5) main_cset_text_pane_t1_copy1

0xd936,	// (0x0004acc3) main_cset_text_pane_t2_copy1

0xd944,	// (0x0004acd1) main_cset_text_pane_t3_copy1

0xd952,	// (0x0004acdf) main_cset_text_pane_t4_copy1

0xd960,	// (0x0004aced) main_cset_text_pane_t5_copy1

0xe08e,	// (0x0004b41b) main_cset_text_pane_t6_copy1

0xe09c,	// (0x0004b429) main_cset_text_pane_t7_copy1

0x8b3f,	// (0x00045ecc) main_cset_text2_pane_t1_copy1

0xad42,	// (0x000480cf) main_ncimui_pane

0x5511,	// (0x0004289e) popup_query_ncimui_window_ParamLimits

0x5511,	// (0x0004289e) popup_query_ncimui_window

0x10b6,	// (0x0003e443) field_cale_ev2_pane_g4_ParamLimits

0x10b6,	// (0x0003e443) field_cale_ev2_pane_g4

0x6dd6,	// (0x00044163) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6dd6,	// (0x00044163) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0004cc35) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0004cc35) cell_video_dialer_keypad_pane_g

0x6dee,	// (0x0004417b) cell_video_dialer_keypad_pane_t1

0xa062,	// (0x000473ef) bg_popup_window_pane_cp012

0xb0aa,	// (0x00048437) heading_pane_cp06

0xe0c8,	// (0x0004b455) ncim_query_content_pane

0xa062,	// (0x000473ef) bg_popup_heading_pane_cp01

0xe0d0,	// (0x0004b45d) ncim_heading_pane_t1

0xe0de,	// (0x0004b46b) ncim_indicator_popup_pane

0xe0f0,	// (0x0004b47d) ncim_query_button_pane

0xe104,	// (0x0004b491) ncim_query_content_pane_t1

0xe116,	// (0x0004b4a3) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0004cf9b) ncim_query_content_pane_t

0xe150,	// (0x0004b4dd) ncim_query_list_pane

0xe162,	// (0x0004b4ef) ncim_query_popup_pane

0xe0de,	// (0x0004b46b) ncim_indicator_popup_pane_ParamLimits

0x8c93,	// (0x00046020) ncim_query_content_pane_g1_ParamLimits

0x8c93,	// (0x00046020) ncim_query_content_pane_g1

0xe104,	// (0x0004b491) ncim_query_content_pane_t1_ParamLimits

0xe116,	// (0x0004b4a3) ncim_query_content_pane_t2_ParamLimits

0x8c9f,	// (0x0004602c) ncim_query_content_pane_t3_ParamLimits

0x8c9f,	// (0x0004602c) ncim_query_content_pane_t3

0x8cbc,	// (0x00046049) ncim_query_content_pane_t4_ParamLimits

0x8cbc,	// (0x00046049) ncim_query_content_pane_t4

0x8cd9,	// (0x00046066) ncim_query_content_pane_t5_ParamLimits

0x8cd9,	// (0x00046066) ncim_query_content_pane_t5

0xe128,	// (0x0004b4b5) ncim_query_content_pane_t6_ParamLimits

0xe128,	// (0x0004b4b5) ncim_query_content_pane_t6

0xfc0e,	// (0x0004cf9b) ncim_query_content_pane_t_ParamLimits

0xe150,	// (0x0004b4dd) ncim_query_list_pane_ParamLimits

0xe162,	// (0x0004b4ef) ncim_query_popup_pane_ParamLimits

0xe176,	// (0x0004b503) wait_bar_pane_cp04

0xa062,	// (0x000473ef) input_focus_pane_cp011

0xe17e,	// (0x0004b50b) ncim_query_popup_pane_t1

0xe18c,	// (0x0004b519) ncim_list_query_list_pane_ParamLimits

0xe18c,	// (0x0004b519) ncim_list_query_list_pane

0xa062,	// (0x000473ef) bg_button_pane_cp027

0xe199,	// (0x0004b526) ncim_query_button_pane_g1

0xa062,	// (0x000473ef) list_highlight_pane_cp012

0xe1a3,	// (0x0004b530) ncim_list_query_list_pane_g1

0xe1ab,	// (0x0004b538) ncim_list_query_list_pane_t1

0x745c,	// (0x000447e9) cam4_indicators_pane_g3_ParamLimits

0x745c,	// (0x000447e9) cam4_indicators_pane_g3

0x755e,	// (0x000448eb) vid4_indicators_pane_g5_ParamLimits

0x755e,	// (0x000448eb) vid4_indicators_pane_g5

0x83b5,	// (0x00045742) vid4_progress_pane_g5_ParamLimits

0x83b5,	// (0x00045742) vid4_progress_pane_g5

0x8b7f,	// (0x00045f0c) main_ncimui_pane_g1

0x8be7,	// (0x00045f74) ncimui_group_query_pane_ParamLimits

0x8be7,	// (0x00045f74) ncimui_group_query_pane

0x8c2f,	// (0x00045fbc) ncimui_list_pane_ParamLimits

0x8c2f,	// (0x00045fbc) ncimui_list_pane

0x8c56,	// (0x00045fe3) ncimui_text_pane_ParamLimits

0x8c56,	// (0x00045fe3) ncimui_text_pane

0x8cf6,	// (0x00046083) ncimui_text_pane_t1_ParamLimits

0x8cf6,	// (0x00046083) ncimui_text_pane_t1

0xe1b9,	// (0x0004b546) ncimui_list_single_graphic_pane_ParamLimits

0xe1b9,	// (0x0004b546) ncimui_list_single_graphic_pane

0x8d15,	// (0x000460a2) ncimui_query_pane_ParamLimits

0x8d15,	// (0x000460a2) ncimui_query_pane

0xa062,	// (0x000473ef) list_highlight_pane_cp013

0xe1c9,	// (0x0004b556) ncim_list_query_list_pane_t1_copy1

0xe1d7,	// (0x0004b564) ncim_list_single_graphic_pane_g1

0xe1df,	// (0x0004b56c) ncim_query_button_pane_cp01

0xe1eb,	// (0x0004b578) ncim_query_entry_pane_ParamLimits

0xe1eb,	// (0x0004b578) ncim_query_entry_pane

0xe1fe,	// (0x0004b58b) ncimui_query_pane_g1

0xe20a,	// (0x0004b597) ncimui_query_pane_t1_ParamLimits

0xe20a,	// (0x0004b597) ncimui_query_pane_t1

0xad42,	// (0x000480cf) input_focus_pane_cp012

0xe223,	// (0x0004b5b0) ncim_query_entry_pane_t1

0xa7c1,	// (0x00047b4e) main_im_pane_ParamLimits

0xad42,	// (0x000480cf) main_mobtv_pane_ParamLimits

0xad42,	// (0x000480cf) main_mobtv_pane

0x89f3,	// (0x00045d80) main_cset6_slider_pane_g18_ParamLimits

0x89f3,	// (0x00045d80) main_cset6_slider_pane_g18

0xdf91,	// (0x0004b31e) main_cset6_slider_pane_g19_ParamLimits

0xdf91,	// (0x0004b31e) main_cset6_slider_pane_g19

0xd695,	// (0x0004aa22) bg_main_mobtv_pane_ParamLimits

0xd695,	// (0x0004aa22) bg_main_mobtv_pane

0x8d28,	// (0x000460b5) main_mobtv_info_pane

0x8d33,	// (0x000460c0) main_mobtv_loading_pane_ParamLimits

0x8d33,	// (0x000460c0) main_mobtv_loading_pane

0xe235,	// (0x0004b5c2) main_mobtv_pg_channel_list_pane

0xe23f,	// (0x0004b5cc) main_mobtv_pg_hdr_pane

0x8d40,	// (0x000460cd) main_mobtv_programe_curr_pane_ParamLimits

0x8d40,	// (0x000460cd) main_mobtv_programe_curr_pane

0x8d4d,	// (0x000460da) main_mobtv_programe_next_pane_ParamLimits

0x8d4d,	// (0x000460da) main_mobtv_programe_next_pane

0xe248,	// (0x0004b5d5) popup_mobtv_noti_window

0xcc58,	// (0x00049fe5) main_tv_pg_hdr_pane_g1

0xe250,	// (0x0004b5dd) main_tv_pg_hdr_pane_g2

0xe258,	// (0x0004b5e5) main_tv_pg_hdr_pane_g3

0xe260,	// (0x0004b5ed) main_tv_pg_hdr_pane_g4

0xe268,	// (0x0004b5f5) main_tv_pg_hdr_pane_g5

0xe272,	// (0x0004b5ff) main_tv_pg_hdr_pane_g6

0xe27c,	// (0x0004b609) main_tv_pg_hdr_pane_g7

0xe286,	// (0x0004b613) main_tv_pg_hdr_pane_g8

0xe290,	// (0x0004b61d) main_tv_pg_hdr_pane_g9

0xe29a,	// (0x0004b627) main_tv_pg_hdr_pane_g10

0xe2a4,	// (0x0004b631) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0004cfa8) main_tv_pg_hdr_pane_g

0xe2ae,	// (0x0004b63b) main_tv_pg_hdr_pane_t1

0xe2bc,	// (0x0004b649) main_tv_pg_hdr_pane_t2

0xe2ca,	// (0x0004b657) main_tv_pg_hdr_pane_t3

0xe2da,	// (0x0004b667) main_tv_pg_hdr_pane_t4

0xe2ea,	// (0x0004b677) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0004cfbf) main_tv_pg_hdr_pane_t

0xe2fa,	// (0x0004b687) single_mobtv_pg_channel_pane_ParamLimits

0xe2fa,	// (0x0004b687) single_mobtv_pg_channel_pane

0xe30c,	// (0x0004b699) single_mobtv_pg_channel_table_pane

0xacf4,	// (0x00048081) single_mobtv_pg_channel_thumb_pane

0xe315,	// (0x0004b6a2) single_tv_pg_channel_pane_g1

0xe31e,	// (0x0004b6ab) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0004cfca) single_tv_pg_channel_pane_g

0xcea6,	// (0x0004a233) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcea6,	// (0x0004a233) bg_single_mobtv_pg_channel_thumb_pane

0xe327,	// (0x0004b6b4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe327,	// (0x0004b6b4) single_mobtv_pg_channel_thumb_pane_g1

0xe335,	// (0x0004b6c2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe335,	// (0x0004b6c2) single_mobtv_pg_channel_thumb_pane_g2

0xe341,	// (0x0004b6ce) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe341,	// (0x0004b6ce) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0004cfcf) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0004cfcf) single_mobtv_pg_channel_thumb_pane_g

0xe34d,	// (0x0004b6da) single_mobtv_pg_channel_thumb_pane_t1

0xe35b,	// (0x0004b6e8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0004cfd6) single_mobtv_pg_channel_thumb_pane_t

0xcc58,	// (0x00049fe5) bg_single_mobtv_pg_channel_table_pane_g1

0xcc58,	// (0x00049fe5) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0004ca7c) bg_single_mobtv_pg_channel_table_pane_g

0xe369,	// (0x0004b6f6) single_mobtv_pg_channel_table_pane_t1

0xe377,	// (0x0004b704) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0004cfdb) single_mobtv_pg_channel_table_pane_t

0x8d62,	// (0x000460ef) main_mobtv_info_pane_g1_ParamLimits

0x8d62,	// (0x000460ef) main_mobtv_info_pane_g1

0x8d7e,	// (0x0004610b) main_mobtv_info_pane_t1_ParamLimits

0x8d7e,	// (0x0004610b) main_mobtv_info_pane_t1

0x8df6,	// (0x00046183) main_mobtv_info_pane_t2_ParamLimits

0x8df6,	// (0x00046183) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0004cfe5) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0004cfe5) main_mobtv_info_pane_t

0x8e85,	// (0x00046212) wait_bar_pane_cp05

0x8e97,	// (0x00046224) main_mobtv_loading_pane_g1_ParamLimits

0x8e97,	// (0x00046224) main_mobtv_loading_pane_g1

0x8ea5,	// (0x00046232) main_mobtv_loading_pane_g2_ParamLimits

0x8ea5,	// (0x00046232) main_mobtv_loading_pane_g2

0x8eb1,	// (0x0004623e) main_mobtv_loading_pane_g3_ParamLimits

0x8eb1,	// (0x0004623e) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0004cfec) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0004cfec) main_mobtv_loading_pane_g

0xe385,	// (0x0004b712) main_mobtv_loading_pane_t1_ParamLimits

0xe385,	// (0x0004b712) main_mobtv_loading_pane_t1

0xe39d,	// (0x0004b72a) main_mobtv_loading_pane_t2_ParamLimits

0xe39d,	// (0x0004b72a) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0004cff3) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0004cff3) main_mobtv_loading_pane_t

0x8ebf,	// (0x0004624c) wait_bar_pane_cp06_ParamLimits

0x8ebf,	// (0x0004624c) wait_bar_pane_cp06

0xe3c1,	// (0x0004b74e) main_mobtv_programe_curr_pane_t1

0xe3cf,	// (0x0004b75c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0004cff8) main_mobtv_programe_curr_pane_t

0xe3dd,	// (0x0004b76a) main_mobtv_programe_next_pane_t1

0xe3eb,	// (0x0004b778) main_mobtv_programe_next_pane_t2

0xe3f9,	// (0x0004b786) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0004cffd) main_mobtv_programe_next_pane_t

0xa062,	// (0x000473ef) bg_popup_mobtv_noti_window_pane

0xe407,	// (0x0004b794) popup_mobtv_noti_window_g1

0xe40f,	// (0x0004b79c) popup_mobtv_noti_window_t1

0xe41d,	// (0x0004b7aa) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0004d004) popup_mobtv_noti_window_t

0xcc58,	// (0x00049fe5) bg_popup_mobtv_noti_window_pane_g1

0xa062,	// (0x000473ef) sc_clock_pane

0xa062,	// (0x000473ef) main_fs_bigclock_pane

0x85bd,	// (0x0004594a) blid2_tripm_pane_t4_ParamLimits

0x85bd,	// (0x0004594a) blid2_tripm_pane_t4

0x8ecb,	// (0x00046258) sc_clock_pane_g1_ParamLimits

0x8ecb,	// (0x00046258) sc_clock_pane_g1

0x8ed9,	// (0x00046266) sc_clock_pane_t1_ParamLimits

0x8ed9,	// (0x00046266) sc_clock_pane_t1

0x8eec,	// (0x00046279) sc_clock_pane_t2_ParamLimits

0x8eec,	// (0x00046279) sc_clock_pane_t2

0x8efe,	// (0x0004628b) sc_clock_pane_t3_ParamLimits

0x8efe,	// (0x0004628b) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0004d009) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0004d009) sc_clock_pane_t

0x975a,	// (0x00046ae7) main_fs_bigclock_indicator_pane_ParamLimits

0x975a,	// (0x00046ae7) main_fs_bigclock_indicator_pane

0x8f87,	// (0x00046314) main_fs_bigclock_pane_g1_ParamLimits

0x8f87,	// (0x00046314) main_fs_bigclock_pane_g1

0x9766,	// (0x00046af3) main_fs_bigclock_pane_t1_ParamLimits

0x9766,	// (0x00046af3) main_fs_bigclock_pane_t1

0x9778,	// (0x00046b05) main_fs_bigclock_pane_t2_ParamLimits

0x9778,	// (0x00046b05) main_fs_bigclock_pane_t2

0x978c,	// (0x00046b19) main_fs_bigclock_pane_t3_ParamLimits

0x978c,	// (0x00046b19) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x0004d213) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x0004d213) main_fs_bigclock_pane_t

0xeca2,	// (0x0004c02f) main_fs_bigclock_indicator_pane_g1

0xe0f8,	// (0x0004b485) ncim_query_content_pane_g2_ParamLimits

0xe0f8,	// (0x0004b485) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0004cf96) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0004cf96) ncim_query_content_pane_g

0x8f12,	// (0x0004629f) sc_clock_pane_t4_ParamLimits

0x8f12,	// (0x0004629f) sc_clock_pane_t4

0xad42,	// (0x000480cf) main_radioblah_pane

0xd608,	// (0x0004a995) cell_call4_button_pane_t1_copy1_ParamLimits

0xd608,	// (0x0004a995) cell_call4_button_pane_t1_copy1

0x8b99,	// (0x00045f26) main_ncimui_pane_t1_ParamLimits

0x8b99,	// (0x00045f26) main_ncimui_pane_t1

0x8bb3,	// (0x00045f40) main_ncimui_pane_t2_ParamLimits

0x8bb3,	// (0x00045f40) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0004cf8f) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0004cf8f) main_ncimui_pane_t

0xe562,	// (0x0004b8ef) main_radioblah_anim_pane_ParamLimits

0xe562,	// (0x0004b8ef) main_radioblah_anim_pane

0xe573,	// (0x0004b900) main_radioblah_info_pane_ParamLimits

0xe573,	// (0x0004b900) main_radioblah_info_pane

0xe587,	// (0x0004b914) main_radioblah_pane_t1_ParamLimits

0xe587,	// (0x0004b914) main_radioblah_pane_t1

0xe5a3,	// (0x0004b930) main_radioblah_pane_t2_ParamLimits

0xe5a3,	// (0x0004b930) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0004d02a) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0004d02a) main_radioblah_pane_t

0x8fd9,	// (0x00046366) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8fd9,	// (0x00046366) main_radioblah_rocker_ctrl_pane

0xe5eb,	// (0x0004b978) main_radioblah_info_pane_t1_ParamLimits

0xe5eb,	// (0x0004b978) main_radioblah_info_pane_t1

0x901e,	// (0x000463ab) main_radioblah_info_pane_t2_ParamLimits

0x901e,	// (0x000463ab) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0004d033) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0004d033) main_radioblah_info_pane_t

0xcc58,	// (0x00049fe5) main_radioblah_rocker_ctrl_pane_g1

0x90ce,	// (0x0004645b) main_radioblah_rocker_ctrl_pane_g2

0x90d6,	// (0x00046463) main_radioblah_rocker_ctrl_pane_g3

0x90de,	// (0x0004646b) main_radioblah_rocker_ctrl_pane_g4

0x90e6,	// (0x00046473) main_radioblah_rocker_ctrl_pane_g5

0x90ee,	// (0x0004647b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0004d03c) main_radioblah_rocker_ctrl_pane_g

0x8b3f,	// (0x00045ecc) main_cset_text2_pane_t1_copy1_ParamLimits

0x738d,	// (0x0004471a) cam4_image_uncrop_qvga_pane

0x74ce,	// (0x0004485b) vid4_image_uncrop_qcif_pane

0x874b,	// (0x00045ad8) cam6_image_uncrop_qvga_pane_ParamLimits

0x874b,	// (0x00045ad8) cam6_image_uncrop_qvga_pane

0xdddc,	// (0x0004b169) vid6_image_uncrop_qcif_pane_ParamLimits

0xdddc,	// (0x0004b169) vid6_image_uncrop_qcif_pane

0xa062,	// (0x000473ef) bg_popup_preview_window_pane_cp03

0xe0aa,	// (0x0004b437) list_cset_text2_pane

0xe0b2,	// (0x0004b43f) main_cset6_text2_pane_g1

0xe0ba,	// (0x0004b447) main_cset6_text2_pane_t1

0x90f6,	// (0x00046483) list_cset_text2_pane_t1_ParamLimits

0x90f6,	// (0x00046483) list_cset_text2_pane_t1

0xad42,	// (0x000480cf) main_radioblah_pane_ParamLimits

0x8e71,	// (0x000461fe) main_mobtv_info_pane_t3_ParamLimits

0x8e71,	// (0x000461fe) main_mobtv_info_pane_t3

0x8fc7,	// (0x00046354) main_radioblah_pane_g1

0x8ff2,	// (0x0004637f) main_radioblah_info_pane_g1

0x9073,	// (0x00046400) main_radioblah_info_pane_t3_ParamLimits

0x9073,	// (0x00046400) main_radioblah_info_pane_t3

0x432e,	// (0x000416bb) highlight_cell_cale_month_pane_ParamLimits

0x432e,	// (0x000416bb) highlight_cell_cale_month_pane

0xa062,	// (0x000473ef) main_phob_fisheye_pane

0xcf82,	// (0x0004a30f) scroll_pane_cp0031_ParamLimits

0xcf82,	// (0x0004a30f) scroll_pane_cp0031

0xdeea,	// (0x0004b277) wait_bar_pane_cp08_ParamLimits

0x8927,	// (0x00045cb4) cset_list_set_pane_copy1_ParamLimits

0xe625,	// (0x0004b9b2) highlight_cell_cale_month_pane_g1

0x9117,	// (0x000464a4) highlight_cell_cale_month_pane_t1

0xdb8d,	// (0x0004af1a) list_gen_pane_cp01

0xd7cf,	// (0x0004ab5c) scroll_pane_01

0x9125,	// (0x000464b2) list_single_double_fisheye_pane

0x1599,	// (0x0003e926) list_double_fisheye_pane_g1_ParamLimits

0x1599,	// (0x0003e926) list_double_fisheye_pane_g1

0x15a5,	// (0x0003e932) list_double_fisheye_pane_g2_ParamLimits

0x15a5,	// (0x0003e932) list_double_fisheye_pane_g2

0x912e,	// (0x000464bb) list_double_fisheye_pane_g3_ParamLimits

0x912e,	// (0x000464bb) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0004d049) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0004d049) list_double_fisheye_pane_g

0x15d6,	// (0x0003e963) list_double_fisheye_pane_t1_ParamLimits

0x15d6,	// (0x0003e963) list_double_fisheye_pane_t1

0x15f1,	// (0x0003e97e) list_double_fisheye_pane_t2_ParamLimits

0x15f1,	// (0x0003e97e) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0004d054) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0004d054) list_double_fisheye_pane_t

0xa062,	// (0x000473ef) main_call5_pane

0x8f38,	// (0x000462c5) sc_swipe_pane_ParamLimits

0x8f38,	// (0x000462c5) sc_swipe_pane

0x9146,	// (0x000464d3) call5_image_pane_ParamLimits

0x9146,	// (0x000464d3) call5_image_pane

0x9156,	// (0x000464e3) call5_swipe_1_pane_ParamLimits

0x9156,	// (0x000464e3) call5_swipe_1_pane

0x9162,	// (0x000464ef) call5_swipe_2_pane_ParamLimits

0x9162,	// (0x000464ef) call5_swipe_2_pane

0x917c,	// (0x00046509) popup_call5_audio_first_window_ParamLimits

0x917c,	// (0x00046509) popup_call5_audio_first_window

0xcea6,	// (0x0004a233) call5_swipe_1_pane_g1_ParamLimits

0xcea6,	// (0x0004a233) call5_swipe_1_pane_g1

0xe62d,	// (0x0004b9ba) call5_swipe_1_pane_g2_ParamLimits

0xe62d,	// (0x0004b9ba) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0004d059) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0004d059) call5_swipe_1_pane_g

0xe639,	// (0x0004b9c6) call5_swipe_1_pane_t1_ParamLimits

0xe639,	// (0x0004b9c6) call5_swipe_1_pane_t1

0xcea6,	// (0x0004a233) call5_swipe_2_pane_g1_ParamLimits

0xcea6,	// (0x0004a233) call5_swipe_2_pane_g1

0xe64e,	// (0x0004b9db) call5_swipe_2_pane_g2_ParamLimits

0xe64e,	// (0x0004b9db) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0004d05e) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0004d05e) call5_swipe_2_pane_g

0xe65a,	// (0x0004b9e7) call5_swipe_2_pane_t1_ParamLimits

0xe65a,	// (0x0004b9e7) call5_swipe_2_pane_t1

0xe66f,	// (0x0004b9fc) sc_swipe_pane_g1_ParamLimits

0xe66f,	// (0x0004b9fc) sc_swipe_pane_g1

0xe67c,	// (0x0004ba09) sc_swipe_pane_g2_ParamLimits

0xe67c,	// (0x0004ba09) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0004d063) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0004d063) sc_swipe_pane_g

0xe688,	// (0x0004ba15) sc_swipe_pane_t1_ParamLimits

0xe688,	// (0x0004ba15) sc_swipe_pane_t1

0xa062,	// (0x000473ef) main_cmail_launcher_pane

0x918a,	// (0x00046517) aid_size_cell_cmail_l_ParamLimits

0x918a,	// (0x00046517) aid_size_cell_cmail_l

0x919a,	// (0x00046527) grid_cmail_l_pane_ParamLimits

0x919a,	// (0x00046527) grid_cmail_l_pane

0x91aa,	// (0x00046537) cell_cmail_l_pane_ParamLimits

0x91aa,	// (0x00046537) cell_cmail_l_pane

0x91be,	// (0x0004654b) cell_cmail_l_pane_g1_ParamLimits

0x91be,	// (0x0004654b) cell_cmail_l_pane_g1

0x91cf,	// (0x0004655c) cell_cmail_l_pane_t1_ParamLimits

0x91cf,	// (0x0004655c) cell_cmail_l_pane_t1

0xe69d,	// (0x0004ba2a) cell_cmail_l_pane_t2_ParamLimits

0xe69d,	// (0x0004ba2a) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0004d068) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0004d068) cell_cmail_l_pane_t

0xad42,	// (0x000480cf) grid_highlight_pane_cp018_ParamLimits

0xad42,	// (0x000480cf) grid_highlight_pane_cp018

0x226c,	// (0x0003f5f9) main2_pane_ParamLimits

0x226c,	// (0x0003f5f9) main2_pane

0xa86c,	// (0x00047bf9) popup_sp_fs_action_menu_bg_pane_g1

0xa874,	// (0x00047c01) popup_sp_fs_action_menu_bg_pane_g2

0xa87c,	// (0x00047c09) popup_sp_fs_action_menu_bg_pane_g3

0xa884,	// (0x00047c11) popup_sp_fs_action_menu_bg_pane_g4

0xa88c,	// (0x00047c19) popup_sp_fs_action_menu_bg_pane_g5

0xa894,	// (0x00047c21) popup_sp_fs_action_menu_bg_pane_g6

0xa89c,	// (0x00047c29) popup_sp_fs_action_menu_bg_pane_g7

0xa8a4,	// (0x00047c31) popup_sp_fs_action_menu_bg_pane_g8

0xa8ac,	// (0x00047c39) popup_sp_fs_action_menu_bg_pane_g9

0xa8b4,	// (0x00047c41) popup_sp_fs_action_menu_bg_pane_g10

0xa8b4,	// (0x00047c41) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0004c517) popup_sp_fs_action_menu_bg_pane_g

0x0d66,	// (0x0003e0f3) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0d66,	// (0x0003e0f3) list_medium_line_x2_t3_g3_g1

0x0d72,	// (0x0003e0ff) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0d72,	// (0x0003e0ff) list_medium_line_x2_t3_g3_g2

0x0d7e,	// (0x0003e10b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0d7e,	// (0x0003e10b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0004c5c5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0004c5c5) list_medium_line_x2_t3_g3_g

0x0d8a,	// (0x0003e117) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0d8a,	// (0x0003e117) list_medium_line_x2_t3_g3_t1

0x0d9f,	// (0x0003e12c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d9f,	// (0x0003e12c) list_medium_line_x2_t3_g3_t2

0x0db1,	// (0x0003e13e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0db1,	// (0x0003e13e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0004c5cc) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0004c5cc) list_medium_line_x2_t3_g3_t

0x0d66,	// (0x0003e0f3) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0d66,	// (0x0003e0f3) list_medium_line_x2_t3_g2_g1

0x0d7e,	// (0x0003e10b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0d7e,	// (0x0003e10b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0004c5d3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0004c5d3) list_medium_line_x2_t3_g2_g

0x0dc6,	// (0x0003e153) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0dc6,	// (0x0003e153) list_medium_line_x2_t3_g2_t1

0x0ddc,	// (0x0003e169) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0ddc,	// (0x0003e169) list_medium_line_x2_t3_g2_t2

0x0dee,	// (0x0003e17b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0dee,	// (0x0003e17b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0004c5d8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0004c5d8) list_medium_line_x2_t3_g2_t

0x0d66,	// (0x0003e0f3) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0d66,	// (0x0003e0f3) list_medium_line_x2_t4_g4_g1

0x0e0c,	// (0x0003e199) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0e0c,	// (0x0003e199) list_medium_line_x2_t4_g4_g2

0x0d72,	// (0x0003e0ff) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0d72,	// (0x0003e0ff) list_medium_line_x2_t4_g4_g3

0x0e18,	// (0x0003e1a5) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0e18,	// (0x0003e1a5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0004c5df) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0004c5df) list_medium_line_x2_t4_g4_g

0x0e24,	// (0x0003e1b1) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0e24,	// (0x0003e1b1) list_medium_line_x2_t4_g4_t1

0x0e3e,	// (0x0003e1cb) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0e3e,	// (0x0003e1cb) list_medium_line_x2_t4_g4_t2

0x0e54,	// (0x0003e1e1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0e54,	// (0x0003e1e1) list_medium_line_x2_t4_g4_t3

0x0e69,	// (0x0003e1f6) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0e69,	// (0x0003e1f6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0004c5e8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0004c5e8) list_medium_line_x2_t4_g4_t

0x0d66,	// (0x0003e0f3) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0d66,	// (0x0003e0f3) list_medium_line_x2_t2_g4_g1

0x0e0c,	// (0x0003e199) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0e0c,	// (0x0003e199) list_medium_line_x2_t2_g4_g2

0x0d72,	// (0x0003e0ff) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0d72,	// (0x0003e0ff) list_medium_line_x2_t2_g4_g3

0x0d7e,	// (0x0003e10b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0d7e,	// (0x0003e10b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0004c64f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0004c64f) list_medium_line_x2_t2_g4_g

0x0e7b,	// (0x0003e208) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0e7b,	// (0x0003e208) list_medium_line_x2_t2_g4_t1

0x0db1,	// (0x0003e13e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0db1,	// (0x0003e13e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0004c658) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0004c658) list_medium_line_x2_t2_g4_t

0x0d66,	// (0x0003e0f3) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0d66,	// (0x0003e0f3) list_medium_line_x2_t2_g3_g1

0x0d72,	// (0x0003e0ff) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0d72,	// (0x0003e0ff) list_medium_line_x2_t2_g3_g2

0x0d7e,	// (0x0003e10b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0d7e,	// (0x0003e10b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0004c5c5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0004c5c5) list_medium_line_x2_t2_g3_g

0x0e90,	// (0x0003e21d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0e90,	// (0x0003e21d) list_medium_line_x2_t2_g3_t1

0x0db1,	// (0x0003e13e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0db1,	// (0x0003e13e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0004c65d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0004c65d) list_medium_line_x2_t2_g3_t

0x4529,	// (0x000418b6) main_sp_fs_list_pane_ParamLimits

0x4529,	// (0x000418b6) main_sp_fs_list_pane

0x4535,	// (0x000418c2) sp_fs_scroll_pane_ParamLimits

0x4535,	// (0x000418c2) sp_fs_scroll_pane

0x0ebe,	// (0x0003e24b) list_medium_line_x2_t3_t1

0x0ece,	// (0x0003e25b) list_medium_line_x2_t3_t2

0x0edc,	// (0x0003e269) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0004c6a8) list_medium_line_x2_t3_t

0x0eea,	// (0x0003e277) list_medium_line_x3_t4_t1

0x0efa,	// (0x0003e287) list_medium_line_x3_t4_t2

0x0f08,	// (0x0003e295) list_medium_line_x3_t4_t3

0x0edc,	// (0x0003e269) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0004c6af) list_medium_line_x3_t4_t

0x0f16,	// (0x0003e2a3) list_medium_line_x4_t5_t1

0x0f26,	// (0x0003e2b3) list_medium_line_x4_t5_t2

0x0f08,	// (0x0003e295) list_medium_line_x4_t5_t3

0x0f34,	// (0x0003e2c1) list_medium_line_x4_t5_t4

0x0edc,	// (0x0003e269) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0004c6b8) list_medium_line_x4_t5_t

0x0d66,	// (0x0003e0f3) list_medium_line_t4_g4_g1_ParamLimits

0x0d66,	// (0x0003e0f3) list_medium_line_t4_g4_g1

0x0e18,	// (0x0003e1a5) list_medium_line_t4_g4_g2_ParamLimits

0x0e18,	// (0x0003e1a5) list_medium_line_t4_g4_g2

0x0f42,	// (0x0003e2cf) list_medium_line_t4_g4_g3_ParamLimits

0x0f42,	// (0x0003e2cf) list_medium_line_t4_g4_g3

0x0d7e,	// (0x0003e10b) list_medium_line_t4_g4_g4_ParamLimits

0x0d7e,	// (0x0003e10b) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0004c6c3) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0004c6c3) list_medium_line_t4_g4_g

0x0f4e,	// (0x0003e2db) list_medium_line_t4_g4_t1_ParamLimits

0x0f4e,	// (0x0003e2db) list_medium_line_t4_g4_t1

0x0f63,	// (0x0003e2f0) list_medium_line_t4_g4_t2_ParamLimits

0x0f63,	// (0x0003e2f0) list_medium_line_t4_g4_t2

0x0f79,	// (0x0003e306) list_medium_line_t4_g4_t3_ParamLimits

0x0f79,	// (0x0003e306) list_medium_line_t4_g4_t3

0x0db1,	// (0x0003e13e) list_medium_line_t4_g4_t4_ParamLimits

0x0db1,	// (0x0003e13e) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0004c6cc) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0004c6cc) list_medium_line_t4_g4_t

0x464c,	// (0x000419d9) chi_dic_find_pane_g1

0x54ce,	// (0x0004285b) main_tport_pane

0x1235,	// (0x0003e5c2) list_medium_line_plain_t1

0x1243,	// (0x0003e5d0) list_medium_line_t2_g2_g1_ParamLimits

0x1243,	// (0x0003e5d0) list_medium_line_t2_g2_g1

0x124f,	// (0x0003e5dc) list_medium_line_t2_g2_g2_ParamLimits

0x124f,	// (0x0003e5dc) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0004cda0) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0004cda0) list_medium_line_t2_g2_g

0x125b,	// (0x0003e5e8) list_medium_line_t2_g2_t1_ParamLimits

0x125b,	// (0x0003e5e8) list_medium_line_t2_g2_t1

0x1275,	// (0x0003e602) list_medium_line_t2_g2_t2_ParamLimits

0x1275,	// (0x0003e602) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0004cda5) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0004cda5) list_medium_line_t2_g2_t

0x1495,	// (0x0003e822) aid_sp_fs_list_icon_a_sm

0x149d,	// (0x0003e82a) aid_sp_fs_list_icon_d

0x14a5,	// (0x0003e832) aid_sp_fs_text_primary

0xe7e9,	// (0x0004bb76) aid_sp_fs_text_secondary

0x8413,	// (0x000457a0) list_medium_line

0x8413,	// (0x000457a0) list_medium_line_g2

0x8413,	// (0x000457a0) list_medium_line_g3

0x8413,	// (0x000457a0) list_medium_line_plain

0x8413,	// (0x000457a0) list_medium_line_plain_t2

0x8413,	// (0x000457a0) list_medium_line_plain_t3

0x8413,	// (0x000457a0) list_medium_line_right_icon

0x8413,	// (0x000457a0) list_medium_line_right_iconx2

0x8413,	// (0x000457a0) list_medium_line_t2

0x8413,	// (0x000457a0) list_medium_line_t2_g2

0x8413,	// (0x000457a0) list_medium_line_t2_g3

0x8413,	// (0x000457a0) list_medium_line_t2_right_icon

0x8413,	// (0x000457a0) list_medium_line_t2_right_iconx2

0x8413,	// (0x000457a0) list_medium_line_t3

0x8413,	// (0x000457a0) list_medium_line_t3_g2

0x8413,	// (0x000457a0) list_medium_line_t3_g3

0x8413,	// (0x000457a0) list_medium_line_t3_right_iconx2

0x841c,	// (0x000457a9) list_medium_line_t4_g4

0x8425,	// (0x000457b2) list_medium_line_x2

0x8425,	// (0x000457b2) list_medium_line_x2_t2_g2

0x8425,	// (0x000457b2) list_medium_line_x2_t2_g3

0x8425,	// (0x000457b2) list_medium_line_x2_t2_g4

0x8425,	// (0x000457b2) list_medium_line_x2_t3

0x8425,	// (0x000457b2) list_medium_line_x2_t3_g2

0x8425,	// (0x000457b2) list_medium_line_x2_t3_g3

0x8425,	// (0x000457b2) list_medium_line_x2_t3_g4

0x8425,	// (0x000457b2) list_medium_line_x2_t4_g2

0x8425,	// (0x000457b2) list_medium_line_x2_t4_g4

0x842e,	// (0x000457bb) list_medium_line_x3

0x842e,	// (0x000457bb) list_medium_line_x3_t4

0x842e,	// (0x000457bb) list_medium_line_x3_t4_g4

0x841c,	// (0x000457a9) list_medium_line_x4_t4

0x841c,	// (0x000457a9) list_medium_line_x4_t4_g7

0x841c,	// (0x000457a9) list_medium_line_x4_t5

0x14ae,	// (0x0003e83b) list_single_fs_dyc_pane_ParamLimits

0x14ae,	// (0x0003e83b) list_single_fs_dyc_pane

0x0d66,	// (0x0003e0f3) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0d66,	// (0x0003e0f3) list_medium_line_x4_t4_g7_g1

0x14ca,	// (0x0003e857) list_medium_line_x4_t4_g7_g2_ParamLimits

0x14ca,	// (0x0003e857) list_medium_line_x4_t4_g7_g2

0x14d6,	// (0x0003e863) list_medium_line_x4_t4_g7_g3_ParamLimits

0x14d6,	// (0x0003e863) list_medium_line_x4_t4_g7_g3

0x14e5,	// (0x0003e872) list_medium_line_x4_t4_g7_g4_ParamLimits

0x14e5,	// (0x0003e872) list_medium_line_x4_t4_g7_g4

0x14f1,	// (0x0003e87e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x14f1,	// (0x0003e87e) list_medium_line_x4_t4_g7_g5

0x1500,	// (0x0003e88d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1500,	// (0x0003e88d) list_medium_line_x4_t4_g7_g6

0x150f,	// (0x0003e89c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x150f,	// (0x0003e89c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0004cf70) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0004cf70) list_medium_line_x4_t4_g7_g

0x151b,	// (0x0003e8a8) list_medium_line_x4_t4_g7_t1_ParamLimits

0x151b,	// (0x0003e8a8) list_medium_line_x4_t4_g7_t1

0x1530,	// (0x0003e8bd) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1530,	// (0x0003e8bd) list_medium_line_x4_t4_g7_t2

0x1545,	// (0x0003e8d2) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1545,	// (0x0003e8d2) list_medium_line_x4_t4_g7_t3

0x155a,	// (0x0003e8e7) list_medium_line_x4_t4_g7_t4_ParamLimits

0x155a,	// (0x0003e8e7) list_medium_line_x4_t4_g7_t4

0x156c,	// (0x0003e8f9) list_medium_line_x4_t4_g7_t5_ParamLimits

0x156c,	// (0x0003e8f9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0004cf7f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0004cf7f) list_medium_line_x4_t4_g7_t

0x157e,	// (0x0003e90b) list_single_dyc_row_pane_ParamLimits

0x157e,	// (0x0003e90b) list_single_dyc_row_pane

0x913a,	// (0x000464c7) call5_gesture_pane_ParamLimits

0x913a,	// (0x000464c7) call5_gesture_pane

0x916e,	// (0x000464fb) call5_windows_pane_ParamLimits

0x916e,	// (0x000464fb) call5_windows_pane

0x91e5,	// (0x00046572) call5_swipe_1_pane_cp_ParamLimits

0x91e5,	// (0x00046572) call5_swipe_1_pane_cp

0x91f1,	// (0x0004657e) call5_swipe_2_pane_cp_ParamLimits

0x91f1,	// (0x0004657e) call5_swipe_2_pane_cp

0xa998,	// (0x00047d25) call5_image_pane_cp

0x91fd,	// (0x0004658a) popup_call5_audio_first_window_cp_ParamLimits

0x91fd,	// (0x0004658a) popup_call5_audio_first_window_cp

0xe66f,	// (0x0004b9fc) call5_swipe_1_pane_g1_cp_ParamLimits

0xe66f,	// (0x0004b9fc) call5_swipe_1_pane_g1_cp

0xe6af,	// (0x0004ba3c) call5_swipe_1_pane_g2_cp

0xe688,	// (0x0004ba15) call5_swipe_1_pane_t1_cp_ParamLimits

0xe688,	// (0x0004ba15) call5_swipe_1_pane_t1_cp

0xe66f,	// (0x0004b9fc) call5_swipe_2_pane_g1_cp_ParamLimits

0xe66f,	// (0x0004b9fc) call5_swipe_2_pane_g1_cp

0xe6b7,	// (0x0004ba44) call5_swipe_2_pane_g2_cp

0xe6bf,	// (0x0004ba4c) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6bf,	// (0x0004ba4c) call5_swipe_2_pane_t1_cp

0xad42,	// (0x000480cf) main_sp_fs_email_pane

0xe6d4,	// (0x0004ba61) main_sp_fs_listscroll_pane_te

0x1613,	// (0x0003e9a0) popup_sp_fs_action_menu_pane_ParamLimits

0x1613,	// (0x0003e9a0) popup_sp_fs_action_menu_pane

0xcc58,	// (0x00049fe5) bg_sp_fs_ctrlbar_pane_g1

0xe6dd,	// (0x0004ba6a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6e6,	// (0x0004ba73) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6ef,	// (0x0004ba7c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc58,	// (0x00049fe5) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0004d06d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca3d,	// (0x00049dca) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca3d,	// (0x00049dca) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6f8,	// (0x0004ba85) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6f8,	// (0x0004ba85) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe704,	// (0x0004ba91) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe704,	// (0x0004ba91) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0004d076) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0004d076) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe710,	// (0x0004ba9d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe710,	// (0x0004ba9d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1655,	// (0x0003e9e2) list_medium_line_t2_right_icon_g1

0x165d,	// (0x0003e9ea) list_medium_line_t2_right_icon_t1

0x166d,	// (0x0003e9fa) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0004d07b) list_medium_line_t2_right_icon_t

0xc850,	// (0x00049bdd) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc850,	// (0x00049bdd) bg_sp_fs_ctrlbar_pane

0x924e,	// (0x000465db) main_sp_fs_ctrlbar_button_pane_cp01

0x9256,	// (0x000465e3) main_sp_fs_ctrlbar_ddmenu_pane

0xe762,	// (0x0004baef) main_sp_fs_ctrlbar_pane_g1

0xe76e,	// (0x0004bafb) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0004d080) main_sp_fs_ctrlbar_pane_g

0xe77a,	// (0x0004bb07) main_sp_fs_ctrlbar_pane_t1

0x9260,	// (0x000465ed) main_sp_fs_ctrlbar_pane

0x9276,	// (0x00046603) main_sp_fs_listscroll_pane_te_cp01

0x167b,	// (0x0003ea08) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x167b,	// (0x0003ea08) popup_sp_fs_action_menu_pane_cp01

0xad42,	// (0x000480cf) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xad42,	// (0x000480cf) bg_sp_fs_highlight_list_pane_cp01

0x16a5,	// (0x0003ea32) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x16a5,	// (0x0003ea32) sp_fs_action_menu_list_gene_pane_g1

0xe7aa,	// (0x0004bb37) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7aa,	// (0x0004bb37) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0004d08a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0004d08a) sp_fs_action_menu_list_gene_pane_g

0x16b4,	// (0x0003ea41) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x16b4,	// (0x0003ea41) sp_fs_action_menu_list_gene_pane_t1

0x16cc,	// (0x0003ea59) sp_fs_action_menu_list_gene_pane_ParamLimits

0x16cc,	// (0x0003ea59) sp_fs_action_menu_list_gene_pane

0xe7b7,	// (0x0004bb44) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7b7,	// (0x0004bb44) popup_sp_fs_action_menu_bg_pane

0x16eb,	// (0x0003ea78) sp_fs_action_menu_list_pane_ParamLimits

0x16eb,	// (0x0003ea78) sp_fs_action_menu_list_pane

0x170b,	// (0x0003ea98) sp_fs_scroll_pane_cp01_ParamLimits

0x170b,	// (0x0003ea98) sp_fs_scroll_pane_cp01

0x1731,	// (0x0003eabe) list_medium_line_plain_t2_t1

0x1741,	// (0x0003eace) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0004d08f) list_medium_line_plain_t2_t

0x174f,	// (0x0003eadc) list_medium_line_plain_t3_t1

0x175f,	// (0x0003eaec) list_medium_line_plain_t3_t2

0x176d,	// (0x0003eafa) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0004d094) list_medium_line_plain_t3_t

0x0d66,	// (0x0003e0f3) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0d66,	// (0x0003e0f3) list_medium_line_x2_t2_g2_g1

0x0d7e,	// (0x0003e10b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0d7e,	// (0x0003e10b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0004c5d3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0004c5d3) list_medium_line_x2_t2_g2_g

0x0f4e,	// (0x0003e2db) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0f4e,	// (0x0003e2db) list_medium_line_x2_t2_g2_t1

0x0db1,	// (0x0003e13e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0db1,	// (0x0003e13e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0004d09b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0004d09b) list_medium_line_x2_t2_g2_t

0x0d66,	// (0x0003e0f3) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0d66,	// (0x0003e0f3) list_medium_line_x2_t4_g2_g1

0x177b,	// (0x0003eb08) list_medium_line_x2_t4_g2_g2_ParamLimits

0x177b,	// (0x0003eb08) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x0004d0a0) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x0004d0a0) list_medium_line_x2_t4_g2_g

0x178d,	// (0x0003eb1a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x178d,	// (0x0003eb1a) list_medium_line_x2_t4_g2_t1

0x17a4,	// (0x0003eb31) list_medium_line_x2_t4_g2_t2_ParamLimits

0x17a4,	// (0x0003eb31) list_medium_line_x2_t4_g2_t2

0x17b9,	// (0x0003eb46) list_medium_line_x2_t4_g2_t3_ParamLimits

0x17b9,	// (0x0003eb46) list_medium_line_x2_t4_g2_t3

0x0db1,	// (0x0003e13e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0db1,	// (0x0003e13e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x0004d0a5) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x0004d0a5) list_medium_line_x2_t4_g2_t

0x17cb,	// (0x0003eb58) list_medium_line_t3_right_iconx2_g1

0x1655,	// (0x0003e9e2) list_medium_line_t3_right_iconx2_g2

0x17d3,	// (0x0003eb60) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x0004d0ae) list_medium_line_t3_right_iconx2_g

0x17db,	// (0x0003eb68) list_medium_line_t3_right_iconx2_t1

0x17eb,	// (0x0003eb78) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x0004d0b5) list_medium_line_t3_right_iconx2_t

0x0d66,	// (0x0003e0f3) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0d66,	// (0x0003e0f3) list_medium_line_x3_t4_g4_g1

0x0d72,	// (0x0003e0ff) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0d72,	// (0x0003e0ff) list_medium_line_x3_t4_g4_g2

0x0e18,	// (0x0003e1a5) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0e18,	// (0x0003e1a5) list_medium_line_x3_t4_g4_g3

0x17f9,	// (0x0003eb86) list_medium_line_x3_t4_g4_g4_ParamLimits

0x17f9,	// (0x0003eb86) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x0004d0ba) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x0004d0ba) list_medium_line_x3_t4_g4_g

0x1805,	// (0x0003eb92) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1805,	// (0x0003eb92) list_medium_line_x3_t4_g4_t1

0x181c,	// (0x0003eba9) list_medium_line_x3_t4_g4_t2_ParamLimits

0x181c,	// (0x0003eba9) list_medium_line_x3_t4_g4_t2

0x1831,	// (0x0003ebbe) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1831,	// (0x0003ebbe) list_medium_line_x3_t4_g4_t3

0x1846,	// (0x0003ebd3) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1846,	// (0x0003ebd3) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x0004d0c3) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x0004d0c3) list_medium_line_x3_t4_g4_t

0x1863,	// (0x0003ebf0) list_single_dyc_row_text_pane_t1_ParamLimits

0x1863,	// (0x0003ebf0) list_single_dyc_row_text_pane_t1

0x189a,	// (0x0003ec27) list_single_dyc_row_text_pane_t2_ParamLimits

0x189a,	// (0x0003ec27) list_single_dyc_row_text_pane_t2

0x1910,	// (0x0003ec9d) list_single_dyc_row_text_pane_t3_ParamLimits

0x1910,	// (0x0003ec9d) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x0004d0cc) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x0004d0cc) list_single_dyc_row_text_pane_t

0x19e1,	// (0x0003ed6e) list_single_dyc_row_pane_g1_ParamLimits

0x19e1,	// (0x0003ed6e) list_single_dyc_row_pane_g1

0x19ed,	// (0x0003ed7a) list_single_dyc_row_pane_g2_ParamLimits

0x19ed,	// (0x0003ed7a) list_single_dyc_row_pane_g2

0x19f9,	// (0x0003ed86) list_single_dyc_row_pane_g3_ParamLimits

0x19f9,	// (0x0003ed86) list_single_dyc_row_pane_g3

0x1a05,	// (0x0003ed92) list_single_dyc_row_pane_g4_ParamLimits

0x1a05,	// (0x0003ed92) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0004d0d9) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0004d0d9) list_single_dyc_row_pane_g

0x1a11,	// (0x0003ed9e) list_single_dyc_row_text_pane_ParamLimits

0x1a11,	// (0x0003ed9e) list_single_dyc_row_text_pane

0xa062,	// (0x000473ef) bg_sp_fs_scroll_pane

0xe7c5,	// (0x0004bb52) thumb_sp_fs_scroll_pane

0x1243,	// (0x0003e5d0) list_medium_line_g1_ParamLimits

0x1243,	// (0x0003e5d0) list_medium_line_g1

0x1a30,	// (0x0003edbd) list_medium_line_t1_ParamLimits

0x1a30,	// (0x0003edbd) list_medium_line_t1

0x0d66,	// (0x0003e0f3) list_medium_line_x2_g1_ParamLimits

0x0d66,	// (0x0003e0f3) list_medium_line_x2_g1

0x0d72,	// (0x0003e0ff) list_medium_line_x2_g2_ParamLimits

0x0d72,	// (0x0003e0ff) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x0004d0e2) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x0004d0e2) list_medium_line_x2_g

0x1a45,	// (0x0003edd2) list_medium_line_x2_t1_ParamLimits

0x1a45,	// (0x0003edd2) list_medium_line_x2_t1

0x0d66,	// (0x0003e0f3) list_medium_line_x3_g1_ParamLimits

0x0d66,	// (0x0003e0f3) list_medium_line_x3_g1

0x0d72,	// (0x0003e0ff) list_medium_line_x3_g2_ParamLimits

0x0d72,	// (0x0003e0ff) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x0004d0e2) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x0004d0e2) list_medium_line_x3_g

0x1a45,	// (0x0003edd2) list_medium_line_x3_t1_ParamLimits

0x1a45,	// (0x0003edd2) list_medium_line_x3_t1

0xe7ce,	// (0x0004bb5b) thumb_sp_fs_scroll_pane_g1

0xe7d7,	// (0x0004bb64) thumb_sp_fs_scroll_pane_g2

0xe7e0,	// (0x0004bb6d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0004d0e7) thumb_sp_fs_scroll_pane_g

0xe7ce,	// (0x0004bb5b) bg_sp_fs_scroll_pane_g1

0xe7d7,	// (0x0004bb64) bg_sp_fs_scroll_pane_g2

0xe7e0,	// (0x0004bb6d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0004d0e7) bg_sp_fs_scroll_pane_g

0x0d66,	// (0x0003e0f3) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0d66,	// (0x0003e0f3) list_medium_line_x2_t3_g4_g1

0x0e0c,	// (0x0003e199) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0e0c,	// (0x0003e199) list_medium_line_x2_t3_g4_g2

0x0d72,	// (0x0003e0ff) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0d72,	// (0x0003e0ff) list_medium_line_x2_t3_g4_g3

0x0d7e,	// (0x0003e10b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0d7e,	// (0x0003e10b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0004c64f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0004c64f) list_medium_line_x2_t3_g4_g

0x1a5b,	// (0x0003ede8) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1a5b,	// (0x0003ede8) list_medium_line_x2_t3_g4_t1

0x1a71,	// (0x0003edfe) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1a71,	// (0x0003edfe) list_medium_line_x2_t3_g4_t2

0x0db1,	// (0x0003e13e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0db1,	// (0x0003e13e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x0004d0ee) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x0004d0ee) list_medium_line_x2_t3_g4_t

0x1243,	// (0x0003e5d0) list_medium_line_g2_g1_ParamLimits

0x1243,	// (0x0003e5d0) list_medium_line_g2_g1

0x124f,	// (0x0003e5dc) list_medium_line_g2_g2_ParamLimits

0x124f,	// (0x0003e5dc) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0004cda0) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0004cda0) list_medium_line_g2_g

0x1a8a,	// (0x0003ee17) list_medium_line_g2_t1_ParamLimits

0x1a8a,	// (0x0003ee17) list_medium_line_g2_t1

0x1243,	// (0x0003e5d0) list_medium_line_t3_g2_g1_ParamLimits

0x1243,	// (0x0003e5d0) list_medium_line_t3_g2_g1

0x124f,	// (0x0003e5dc) list_medium_line_t3_g2_g2_ParamLimits

0x124f,	// (0x0003e5dc) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0004cda0) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0004cda0) list_medium_line_t3_g2_g

0x1a9f,	// (0x0003ee2c) list_medium_line_t3_g2_t1_ParamLimits

0x1a9f,	// (0x0003ee2c) list_medium_line_t3_g2_t1

0x1ab6,	// (0x0003ee43) list_medium_line_t3_g2_t2_ParamLimits

0x1ab6,	// (0x0003ee43) list_medium_line_t3_g2_t2

0x1acb,	// (0x0003ee58) list_medium_line_t3_g2_t3_ParamLimits

0x1acb,	// (0x0003ee58) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x0004d0f5) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x0004d0f5) list_medium_line_t3_g2_t

0x1655,	// (0x0003e9e2) list_medium_line_right_icon_g1

0x1ae0,	// (0x0003ee6d) list_medium_line_right_icon_t1

0x1243,	// (0x0003e5d0) list_medium_line_t2_g1_ParamLimits

0x1243,	// (0x0003e5d0) list_medium_line_t2_g1

0x1aee,	// (0x0003ee7b) list_medium_line_t2_t1_ParamLimits

0x1aee,	// (0x0003ee7b) list_medium_line_t2_t1

0x1b08,	// (0x0003ee95) list_medium_line_t2_t2_ParamLimits

0x1b08,	// (0x0003ee95) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x0004d0fc) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x0004d0fc) list_medium_line_t2_t

0x1243,	// (0x0003e5d0) list_medium_line_t3_g1_ParamLimits

0x1243,	// (0x0003e5d0) list_medium_line_t3_g1

0x1b1d,	// (0x0003eeaa) list_medium_line_t3_t1_ParamLimits

0x1b1d,	// (0x0003eeaa) list_medium_line_t3_t1

0x1b37,	// (0x0003eec4) list_medium_line_t3_t2_ParamLimits

0x1b37,	// (0x0003eec4) list_medium_line_t3_t2

0x1b4d,	// (0x0003eeda) list_medium_line_t3_t3_ParamLimits

0x1b4d,	// (0x0003eeda) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x0004d101) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x0004d101) list_medium_line_t3_t

0x1243,	// (0x0003e5d0) list_medium_line_g3_g1_ParamLimits

0x1243,	// (0x0003e5d0) list_medium_line_g3_g1

0x1b62,	// (0x0003eeef) list_medium_line_g3_g2_ParamLimits

0x1b62,	// (0x0003eeef) list_medium_line_g3_g2

0x124f,	// (0x0003e5dc) list_medium_line_g3_g3_ParamLimits

0x124f,	// (0x0003e5dc) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x0004d108) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x0004d108) list_medium_line_g3_g

0x1b6e,	// (0x0003eefb) list_medium_line_g3_t1_ParamLimits

0x1b6e,	// (0x0003eefb) list_medium_line_g3_t1

0x1243,	// (0x0003e5d0) list_medium_line_t2_g3_g1_ParamLimits

0x1243,	// (0x0003e5d0) list_medium_line_t2_g3_g1

0x1b62,	// (0x0003eeef) list_medium_line_t2_g3_g2_ParamLimits

0x1b62,	// (0x0003eeef) list_medium_line_t2_g3_g2

0x124f,	// (0x0003e5dc) list_medium_line_t2_g3_g3_ParamLimits

0x124f,	// (0x0003e5dc) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x0004d108) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x0004d108) list_medium_line_t2_g3_g

0x1b83,	// (0x0003ef10) list_medium_line_t2_g3_t1_ParamLimits

0x1b83,	// (0x0003ef10) list_medium_line_t2_g3_t1

0x1b9a,	// (0x0003ef27) list_medium_line_t2_g3_t2_ParamLimits

0x1b9a,	// (0x0003ef27) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x0004d10f) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x0004d10f) list_medium_line_t2_g3_t

0x1243,	// (0x0003e5d0) list_medium_line_t3_g3_g1_ParamLimits

0x1243,	// (0x0003e5d0) list_medium_line_t3_g3_g1

0x1b62,	// (0x0003eeef) list_medium_line_t3_g3_g2_ParamLimits

0x1b62,	// (0x0003eeef) list_medium_line_t3_g3_g2

0x124f,	// (0x0003e5dc) list_medium_line_t3_g3_g3_ParamLimits

0x124f,	// (0x0003e5dc) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x0004d108) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x0004d108) list_medium_line_t3_g3_g

0x1baf,	// (0x0003ef3c) list_medium_line_t3_g3_t1_ParamLimits

0x1baf,	// (0x0003ef3c) list_medium_line_t3_g3_t1

0x1bc3,	// (0x0003ef50) list_medium_line_t3_g3_t2_ParamLimits

0x1bc3,	// (0x0003ef50) list_medium_line_t3_g3_t2

0x1bd5,	// (0x0003ef62) list_medium_line_t3_g3_t3_ParamLimits

0x1bd5,	// (0x0003ef62) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x0004d114) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x0004d114) list_medium_line_t3_g3_t

0x17cb,	// (0x0003eb58) list_medium_line_right_iconx2_g1

0x1655,	// (0x0003e9e2) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0004d11b) list_medium_line_right_iconx2_g

0x1be7,	// (0x0003ef74) list_medium_line_right_iconx2_t1

0x17cb,	// (0x0003eb58) list_medium_line_t2_right_iconx2_g1

0x1655,	// (0x0003e9e2) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0004d11b) list_medium_line_t2_right_iconx2_g

0x1bf5,	// (0x0003ef82) list_medium_line_t2_right_iconx2_t1

0x1c05,	// (0x0003ef92) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x0004d120) list_medium_line_t2_right_iconx2_t

0x1c13,	// (0x0003efa0) list_medium_line_x4_t4_t1

0x1c21,	// (0x0003efae) list_medium_line_x4_t4_t2

0x1c31,	// (0x0003efbe) list_medium_line_x4_t4_t3

0x1c41,	// (0x0003efce) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x0004d125) list_medium_line_x4_t4_t

0x92b1,	// (0x0004663e) tport_appsw_pane_ParamLimits

0x92b1,	// (0x0004663e) tport_appsw_pane

0x92bf,	// (0x0004664c) tport_contact_pane_ParamLimits

0x92bf,	// (0x0004664c) tport_contact_pane

0x92cf,	// (0x0004665c) tport_listscroll_pane_ParamLimits

0x92cf,	// (0x0004665c) tport_listscroll_pane

0x92df,	// (0x0004666c) cell_tport_appsw_pane_ParamLimits

0x92df,	// (0x0004666c) cell_tport_appsw_pane

0xcf0b,	// (0x0004a298) tport_appsw_pane_g1_ParamLimits

0xcf0b,	// (0x0004a298) tport_appsw_pane_g1

0xe7f2,	// (0x0004bb7f) tport_contact_pane_g1

0xe7fb,	// (0x0004bb88) tport_contact_pane_t1

0xe809,	// (0x0004bb96) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x0004d12e) tport_contact_pane_t

0xe817,	// (0x0004bba4) list_tport_pane

0xe820,	// (0x0004bbad) scroll_pane_cp_030

0x9312,	// (0x0004669f) cell_tport_appsw_pane_g1

0x9322,	// (0x000466af) cell_tport_appsw_pane_t1

0x9330,	// (0x000466bd) grid_highlight_pane_cp019

0x9338,	// (0x000466c5) list_tport_double_graphic_pane_ParamLimits

0x9338,	// (0x000466c5) list_tport_double_graphic_pane

0xad42,	// (0x000480cf) list_highlight_pane_cp023_ParamLimits

0xad42,	// (0x000480cf) list_highlight_pane_cp023

0x9349,	// (0x000466d6) list_tport_double_graphic_pane_g1_ParamLimits

0x9349,	// (0x000466d6) list_tport_double_graphic_pane_g1

0x9356,	// (0x000466e3) list_tport_double_graphic_pane_t1_ParamLimits

0x9356,	// (0x000466e3) list_tport_double_graphic_pane_t1

0x936b,	// (0x000466f8) list_tport_double_graphic_pane_t2_ParamLimits

0x936b,	// (0x000466f8) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x0004d13a) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x0004d13a) list_tport_double_graphic_pane_t

0xa062,	// (0x000473ef) main_cale_note_pane

0x7729,	// (0x00044ab6) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7729,	// (0x00044ab6) cell_vitu2_function_top_wide_pane_cp01

0x8e85,	// (0x00046212) wait_bar_pane_cp05_ParamLimits

0xad42,	// (0x000480cf) listscroll_cmail_pane

0xe829,	// (0x0004bbb6) list_cmail_pane

0x937d,	// (0x0004670a) list_cmail_body_pane

0x93a0,	// (0x0004672d) list_single_cmail_header_caption_pane

0x93cc,	// (0x00046759) list_single_cmail_header_detail_pane_ParamLimits

0x93cc,	// (0x00046759) list_single_cmail_header_detail_pane

0xe839,	// (0x0004bbc6) list_single_cmail_header_caption_pane_t1

0x1c51,	// (0x0003efde) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1c51,	// (0x0003efde) list_single_cmail_header_detail_pane_g1

0x1c67,	// (0x0003eff4) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1c67,	// (0x0003eff4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x0004d13f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x0004d13f) list_single_cmail_header_detail_pane_g

0x1c73,	// (0x0003f000) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1c73,	// (0x0003f000) list_single_cmail_header_detail_pane_t1

0x1cd3,	// (0x0003f060) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1cd3,	// (0x0003f060) list_single_cmail_header_editor_pane_bg

0xe31e,	// (0x0004b6ab) list_cmail_body_pane_g1

0xe85d,	// (0x0004bbea) list_cmail_body_pane_t1

0xd6b5,	// (0x0004aa42) list_single_cmail_header_editor_pane_bg_g1

0xabf1,	// (0x00047f7e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6c5,	// (0x0004aa52) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6bd,	// (0x0004aa4a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8d9,	// (0x0004ac66) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6e5,	// (0x0004aa72) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6d5,	// (0x0004aa62) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6dd,	// (0x0004aa6a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xabd1,	// (0x00047f5e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9405,	// (0x00046792) calenote_gesture_pane_ParamLimits

0x9405,	// (0x00046792) calenote_gesture_pane

0x941f,	// (0x000467ac) calenote_window_pane_ParamLimits

0x941f,	// (0x000467ac) calenote_window_pane

0xe86b,	// (0x0004bbf8) popup_note_window_cp01

0x9437,	// (0x000467c4) calenote_swipe_1_pane_ParamLimits

0x9437,	// (0x000467c4) calenote_swipe_1_pane

0x91f1,	// (0x0004657e) calenote_swipe_2_pane_ParamLimits

0x91f1,	// (0x0004657e) calenote_swipe_2_pane

0xe66f,	// (0x0004b9fc) calenote_swipe_1_pane_g1_ParamLimits

0xe66f,	// (0x0004b9fc) calenote_swipe_1_pane_g1

0xe67c,	// (0x0004ba09) calenote_swipe_1_pane_g2_ParamLimits

0xe67c,	// (0x0004ba09) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0004d063) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0004d063) calenote_swipe_1_pane_g

0xe87d,	// (0x0004bc0a) calenote_swipe_1_pane_t1_ParamLimits

0xe87d,	// (0x0004bc0a) calenote_swipe_1_pane_t1

0xe66f,	// (0x0004b9fc) calenote_swipe_2_pane_g1_ParamLimits

0xe66f,	// (0x0004b9fc) calenote_swipe_2_pane_g1

0xe89c,	// (0x0004bc29) calenote_swipe_2_pane_g2_ParamLimits

0xe89c,	// (0x0004bc29) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x0004d14b) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x0004d14b) calenote_swipe_2_pane_g

0xe8a8,	// (0x0004bc35) calenote_swipe_2_pane_t1_ParamLimits

0xe8a8,	// (0x0004bc35) calenote_swipe_2_pane_t1

0xa062,	// (0x000473ef) main_mup_navstr_pane

0x64ab,	// (0x00043838) main_mup3_pane_t7_ParamLimits

0x64ab,	// (0x00043838) main_mup3_pane_t7

0x6eb5,	// (0x00044242) main_mp4_pane_g6_ParamLimits

0x6eb5,	// (0x00044242) main_mp4_pane_g6

0x7227,	// (0x000445b4) main_image3_pane_t4_ParamLimits

0x7227,	// (0x000445b4) main_image3_pane_t4

0x944a,	// (0x000467d7) popup_navstr_preview_pane_ParamLimits

0x944a,	// (0x000467d7) popup_navstr_preview_pane

0x9456,	// (0x000467e3) scroll_navstr_pane_ParamLimits

0x9456,	// (0x000467e3) scroll_navstr_pane

0xa062,	// (0x000473ef) bg_popup_preview_window_pane_cp04

0xe8cf,	// (0x0004bc5c) popup_navstr_preview_pane_t1

0x9462,	// (0x000467ef) scroll_navstr_pane_g1_ParamLimits

0x9462,	// (0x000467ef) scroll_navstr_pane_g1

0x946f,	// (0x000467fc) scroll_navstr_pane_t1_ParamLimits

0x946f,	// (0x000467fc) scroll_navstr_pane_t1

0xe874,	// (0x0004bc01) bg_button_pane_cp014

0xe874,	// (0x0004bc01) bg_button_pane_cp030

0x15b9,	// (0x0003e946) list_double_fisheye_pane_g4_ParamLimits

0x15b9,	// (0x0003e946) list_double_fisheye_pane_g4

0x15c5,	// (0x0003e952) list_double_fisheye_pane_g5_ParamLimits

0x15c5,	// (0x0003e952) list_double_fisheye_pane_g5

0xd470,	// (0x0004a7fd) sp_fs_scroll_pane_cp03

0xe762,	// (0x0004baef) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe76e,	// (0x0004bafb) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0004d080) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe77a,	// (0x0004bb07) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe831,	// (0x0004bbbe) sp_fs_scroll_pane_cp02

0xa8d7,	// (0x00047c64) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa8d7,	// (0x00047c64) popup_sp_fs_calendar_preview_list_single_pane

0xa062,	// (0x000473ef) main_cam6_pano_pane

0xad42,	// (0x000480cf) main_mup3_pane_ParamLimits

0xa062,	// (0x000473ef) main_phacti_pane

0x8d5a,	// (0x000460e7) bg_button_pane_cp11

0x8d72,	// (0x000460ff) main_mobtv_info_pane_g2_ParamLimits

0x8d72,	// (0x000460ff) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0004cfe0) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0004cfe0) main_mobtv_info_pane_g

0x8f24,	// (0x000462b1) sc_clock_pane_t5_ParamLimits

0x8f24,	// (0x000462b1) sc_clock_pane_t5

0x8fc7,	// (0x00046354) main_radioblah_pane_g1_ParamLimits

0xe5bb,	// (0x0004b948) main_radioblah_pane_t3_ParamLimits

0xe5bb,	// (0x0004b948) main_radioblah_pane_t3

0xe5d3,	// (0x0004b960) main_radioblah_pane_t4_ParamLimits

0xe5d3,	// (0x0004b960) main_radioblah_pane_t4

0x8fe5,	// (0x00046372) main_radioblah_text_pane_ParamLimits

0x8fe5,	// (0x00046372) main_radioblah_text_pane

0x8ff2,	// (0x0004637f) main_radioblah_info_pane_g1_ParamLimits

0x9087,	// (0x00046414) main_radioblah_info_pane_t4_ParamLimits

0x9087,	// (0x00046414) main_radioblah_info_pane_t4

0xad42,	// (0x000480cf) main_sp_fs_calendar_pane

0x9481,	// (0x0004680e) main_phacti_pane_g1

0x9489,	// (0x00046816) phacti_note_pane_ParamLimits

0x9489,	// (0x00046816) phacti_note_pane

0xe8e6,	// (0x0004bc73) phacti_term_pane_ParamLimits

0xe8e6,	// (0x0004bc73) phacti_term_pane

0xe8fb,	// (0x0004bc88) phacti_note_pane_t1_ParamLimits

0xe8fb,	// (0x0004bc88) phacti_note_pane_t1

0x1cea,	// (0x0003f077) phacti_term_pane_g1

0x1cf2,	// (0x0003f07f) phacti_term_pane_t1_ParamLimits

0x1cf2,	// (0x0003f07f) phacti_term_pane_t1

0xe912,	// (0x0004bc9f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe91a,	// (0x0004bca7) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x0004d155) popup_sp_fs_calendar_preview_list_single_pane_g

0xe922,	// (0x0004bcaf) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe922,	// (0x0004bcaf) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe938,	// (0x0004bcc5) aid_popup_sp_fs_bg_corner_pane

0xcc58,	// (0x00049fe5) popup_sp_fs_calendar_preview_bg_pane_g1

0xa062,	// (0x000473ef) popup_sp_fs_calendar_preview_bg_pane

0xa6e8,	// (0x00047a75) popup_sp_fs_calendar_preview_list_pane

0xc850,	// (0x00049bdd) bg_main_sp_fs_cale_pane_ParamLimits

0xc850,	// (0x00049bdd) bg_main_sp_fs_cale_pane

0x1d25,	// (0x0003f0b2) listscroll_cale_mrui_pane_ParamLimits

0x1d25,	// (0x0003f0b2) listscroll_cale_mrui_pane

0x1d3a,	// (0x0003f0c7) listscroll_sp_fs_schedule_track_pane

0x1d43,	// (0x0003f0d0) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1d43,	// (0x0003f0d0) main_sp_fs_ctrlbar_pane_cp01

0xe940,	// (0x0004bccd) main_sp_fs_ribbon_pane

0x1d56,	// (0x0003f0e3) popup_sp_fs_cale_preview_window

0x94ec,	// (0x00046879) list_single_sp_fs_schedule_track_pane_ParamLimits

0x94ec,	// (0x00046879) list_single_sp_fs_schedule_track_pane

0xdf46,	// (0x0004b2d3) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdf46,	// (0x0004b2d3) bg_sp_fs_highlight_list_pane_cp03

0x950f,	// (0x0004689c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x950f,	// (0x0004689c) list_single_sp_fs_schedule_track_pane_g1

0x951b,	// (0x000468a8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x951b,	// (0x000468a8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x0004d15a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x0004d15a) list_single_sp_fs_schedule_track_pane_g

0x9527,	// (0x000468b4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9527,	// (0x000468b4) list_single_sp_fs_schedule_track_pane_t1

0x953f,	// (0x000468cc) sp_fs_schedule_track_pane_ParamLimits

0x953f,	// (0x000468cc) sp_fs_schedule_track_pane

0xe948,	// (0x0004bcd5) sp_fs_schedule_track_pane_g1

0xe950,	// (0x0004bcdd) sp_fs_schedule_track_pane_g2

0xe958,	// (0x0004bce5) sp_fs_schedule_track_pane_g3

0xe960,	// (0x0004bced) sp_fs_schedule_track_pane_g4

0xe968,	// (0x0004bcf5) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x0004d15f) sp_fs_schedule_track_pane_g

0xd6b5,	// (0x0004aa42) bg_sp_fs_schedule_viewer_highlight_g1

0xabf1,	// (0x00047f7e) bg_sp_fs_schedule_viewer_highlight_g2

0xd6bd,	// (0x0004aa4a) bg_sp_fs_schedule_viewer_highlight_g3

0xd6c5,	// (0x0004aa52) bg_sp_fs_schedule_viewer_highlight_g4

0xd8d9,	// (0x0004ac66) bg_sp_fs_schedule_viewer_highlight_g5

0xd6d5,	// (0x0004aa62) bg_sp_fs_schedule_viewer_highlight_g6

0xd6dd,	// (0x0004aa6a) bg_sp_fs_schedule_viewer_highlight_g7

0xd6e5,	// (0x0004aa72) bg_sp_fs_schedule_viewer_highlight_g8

0xabd1,	// (0x00047f5e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x0004d16a) bg_sp_fs_schedule_viewer_highlight_g

0xa062,	// (0x000473ef) bg_main_sp_fs_ribbon_pane

0x954f,	// (0x000468dc) main_sp_fs_ribbon_pane_g1

0xe970,	// (0x0004bcfd) main_sp_fs_ribbon_pane_t1

0x9558,	// (0x000468e5) main_sp_fs_ribbon_pane_t2

0xe97f,	// (0x0004bd0c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x0004d17d) main_sp_fs_ribbon_pane_t

0xe98e,	// (0x0004bd1b) main_sp_fs_ribbon_scheduler_pane

0xe996,	// (0x0004bd23) bg_main_sp_fs_ribbon_pane_g1

0xe99f,	// (0x0004bd2c) bg_main_sp_fs_ribbon_pane_g2

0xe9a8,	// (0x0004bd35) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x0004d184) bg_main_sp_fs_ribbon_pane_g

0xe9b0,	// (0x0004bd3d) main_sp_fs_ribbon_scheduler_pane_g1

0xe9b9,	// (0x0004bd46) main_sp_fs_ribbon_scheduler_pane_g2

0xe9c2,	// (0x0004bd4f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x0004d18b) main_sp_fs_ribbon_scheduler_pane_g

0xe9cb,	// (0x0004bd58) list_cale_mrui_pane

0x9567,	// (0x000468f4) sp_fs_scroll_pane_cp07_ParamLimits

0x9567,	// (0x000468f4) sp_fs_scroll_pane_cp07

0x9583,	// (0x00046910) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9583,	// (0x00046910) bg_sp_fs_schedule_viewer_highlight

0xe9d8,	// (0x0004bd65) list_single_sp_fs_schedule_track_pane_cp01

0xe9e0,	// (0x0004bd6d) list_sp_fs_schedule_track_pane

0xe9e8,	// (0x0004bd75) sp_fs_scroll_pane_cp06_ParamLimits

0xe9e8,	// (0x0004bd75) sp_fs_scroll_pane_cp06

0xcc58,	// (0x00049fe5) bgmain_sp_fs_calendar_pane_g1

0x1d68,	// (0x0003f0f5) list_single_cale_mrui_pane_ParamLimits

0x1d68,	// (0x0003f0f5) list_single_cale_mrui_pane

0x1d99,	// (0x0003f126) list_single_cale_mrui_row_pane_ParamLimits

0x1d99,	// (0x0003f126) list_single_cale_mrui_row_pane

0x1da6,	// (0x0003f133) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1da6,	// (0x0003f133) list_single_cale_mrui_row_pane_g1

0x1dde,	// (0x0003f16b) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1dde,	// (0x0003f16b) list_single_cale_mrui_row_pane_t1

0x1df0,	// (0x0003f17d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1df0,	// (0x0003f17d) list_single_cale_mrui_row_pane_t2

0x1e56,	// (0x0003f1e3) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1e56,	// (0x0003f1e3) list_single_cale_mrui_row_pane_t3

0x1e85,	// (0x0003f212) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1e85,	// (0x0003f212) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x0004d199) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x0004d199) list_single_cale_mrui_row_pane_t

0x1eb4,	// (0x0003f241) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1eb4,	// (0x0003f241) list_single_cmail_header_editor_pane_bg_cp01

0x1ed4,	// (0x0003f261) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1ed4,	// (0x0003f261) list_single_cmail_header_editor_pane_bg_cp02

0x9590,	// (0x0004691d) main_radioblah_text_pane_t1_ParamLimits

0x9590,	// (0x0004691d) main_radioblah_text_pane_t1

0xea34,	// (0x0004bdc1) cam6_indi_pane_cp01

0xea3c,	// (0x0004bdc9) cam6_mode_pane_cp01

0xea44,	// (0x0004bdd1) cam6_pano_pane

0xea4d,	// (0x0004bdda) cam6_zoom_pane_cp01

0xea55,	// (0x0004bde2) cam6_pano_image_pane

0xea60,	// (0x0004bded) cam6_pano_pane_g1

0xe31e,	// (0x0004b6ab) cam6_pano_pane_g2

0xea69,	// (0x0004bdf6) cam6_pano_pane_g3

0xea72,	// (0x0004bdff) cam6_pano_pane_g4

0xd203,	// (0x0004a590) cam6_pano_pane_g5

0xea7b,	// (0x0004be08) cam6_pano_pane_g6

0xea85,	// (0x0004be12) cam6_pano_pane_g7

0xea8d,	// (0x0004be1a) cam6_pano_pane_g8

0xea96,	// (0x0004be23) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x0004d1a2) cam6_pano_pane_g

0xa062,	// (0x000473ef) main_browser_tag_pane

0xe8c7,	// (0x0004bc54) grid_navstr_albumart_pane

0xeaa1,	// (0x0004be2e) cell_navstr_albumart_pane_ParamLimits

0xeaa1,	// (0x0004be2e) cell_navstr_albumart_pane

0xeac1,	// (0x0004be4e) cell_navstr_albumart_pane_g1

0xc621,	// (0x000499ae) cell_navstr_albumart_pane_g2

0xc631,	// (0x000499be) cell_navstr_albumart_pane_g3

0xc629,	// (0x000499b6) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x0004d1b5) cell_navstr_albumart_pane_g

0x95ab,	// (0x00046938) bt_list_pane_ParamLimits

0x95ab,	// (0x00046938) bt_list_pane

0x95cc,	// (0x00046959) bt_list_pane_t1

0x95db,	// (0x00046968) bt_list_pane_t2

0x0001,

0xfe31,	// (0x0004d1be) bt_list_pane_t

0xa062,	// (0x000473ef) main_cale_prevew_pane

0x95ea,	// (0x00046977) popup_cale_preview_window_ParamLimits

0x95ea,	// (0x00046977) popup_cale_preview_window

0xad42,	// (0x000480cf) bg_popup_preview_window_pane_cp05_ParamLimits

0xad42,	// (0x000480cf) bg_popup_preview_window_pane_cp05

0xeac9,	// (0x0004be56) list_cale_preview_pane_ParamLimits

0xeac9,	// (0x0004be56) list_cale_preview_pane

0x9603,	// (0x00046990) list_double_cale_preview_pane_ParamLimits

0x9603,	// (0x00046990) list_double_cale_preview_pane

0x9615,	// (0x000469a2) list_single_cale_preview_pane_ParamLimits

0x9615,	// (0x000469a2) list_single_cale_preview_pane

0x9629,	// (0x000469b6) list_single_cale_preview_pane_g1

0x9631,	// (0x000469be) list_single_cale_preview_pane_t1_ParamLimits

0x9631,	// (0x000469be) list_single_cale_preview_pane_t1

0x9646,	// (0x000469d3) list_double_cale_preview_pane_g1

0x964e,	// (0x000469db) list_double_cale_preview_pane_t1_ParamLimits

0x964e,	// (0x000469db) list_double_cale_preview_pane_t1

0x9663,	// (0x000469f0) list_double_cale_preview_pane_t2_ParamLimits

0x9663,	// (0x000469f0) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x0004d1c3) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x0004d1c3) list_double_cale_preview_pane_t

0xa062,	// (0x000473ef) main_ezdial_pane

0xad42,	// (0x000480cf) main_sp_fs_email_pane_ParamLimits

0x920b,	// (0x00046598) cmail_ddmenu_btn01_pane_ParamLimits

0x920b,	// (0x00046598) cmail_ddmenu_btn01_pane

0x9220,	// (0x000465ad) cmail_ddmenu_btn02_pane_ParamLimits

0x9220,	// (0x000465ad) cmail_ddmenu_btn02_pane

0x9238,	// (0x000465c5) cmail_ddmenu_btn03_pane_ParamLimits

0x9238,	// (0x000465c5) cmail_ddmenu_btn03_pane

0x9260,	// (0x000465ed) main_sp_fs_ctrlbar_pane_ParamLimits

0x9276,	// (0x00046603) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x937d,	// (0x0004670a) list_cmail_body_pane_ParamLimits

0xe847,	// (0x0004bbd4) bg_button_pane_cp12

0xe850,	// (0x0004bbdd) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe850,	// (0x0004bbdd) list_single_cmail_header_detail_pane_g3

0x1caf,	// (0x0003f03c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1caf,	// (0x0003f03c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x0004d146) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x0004d146) list_single_cmail_header_detail_pane_t

0x1d07,	// (0x0003f094) phacti_term_pane_t2_ParamLimits

0x1d07,	// (0x0003f094) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x0004d150) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x0004d150) phacti_term_pane_t

0xead5,	// (0x0004be62) aid_size_list_single_double

0x967b,	// (0x00046a08) popup_ezdial_listscroll_window

0x969f,	// (0x00046a2c) popup_number_entry_window_cp01

0xa998,	// (0x00047d25) bg_popup_call_pane_cp09

0xeae1,	// (0x0004be6e) ezdial_list_pane

0xeae9,	// (0x0004be76) scroll_pane_cp23

0xca3d,	// (0x00049dca) bg_button_pane_cp028_ParamLimits

0xca3d,	// (0x00049dca) bg_button_pane_cp028

0x96ad,	// (0x00046a3a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x96ad,	// (0x00046a3a) cmail_ddmenu_btn01_pane_g1

0x96bd,	// (0x00046a4a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x96bd,	// (0x00046a4a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x0004d1c8) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x0004d1c8) cmail_ddmenu_btn01_pane_g

0xeaf1,	// (0x0004be7e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaf1,	// (0x0004be7e) cmail_ddmenu_btn01_pane_t1

0xc850,	// (0x00049bdd) bg_button_pane_cp029_ParamLimits

0xc850,	// (0x00049bdd) bg_button_pane_cp029

0x96bd,	// (0x00046a4a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x96bd,	// (0x00046a4a) cmail_ddmenu_btn02_pane_g1

0x96d6,	// (0x00046a63) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x96d6,	// (0x00046a63) cmail_ddmenu_btn02_pane_t1

0xdf46,	// (0x0004b2d3) bg_button_pane_cp031_ParamLimits

0xdf46,	// (0x0004b2d3) bg_button_pane_cp031

0x96bd,	// (0x00046a4a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x96bd,	// (0x00046a4a) cmail_ddmenu_btn03_pane_g1

0x96d6,	// (0x00046a63) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x96d6,	// (0x00046a63) cmail_ddmenu_btn03_pane_t1

0x70d2,	// (0x0004445f) cell_dialer2_keypad_pane_t1_ParamLimits

0x70ec,	// (0x00044479) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x70ec,	// (0x00044479) cell_dialer2_keypad_pane_t1_copy1

0x8bdf,	// (0x00045f6c) ncimui_group_button_pane

0xad42,	// (0x000480cf) main_sp_fs_calendar_pane_ParamLimits

0x93a0,	// (0x0004672d) list_single_cmail_header_caption_pane_ParamLimits

0x1d1c,	// (0x0003f0a9) aid_recal_txt_sm_pane

0xa062,	// (0x000473ef) mian_recal_day_pane

0x1d56,	// (0x0003f0e3) popup_sp_fs_cale_preview_window_ParamLimits

0xeb06,	// (0x0004be93) list_recal_day_pane

0x1f0b,	// (0x0003f298) list_single_recal_day_pane_ParamLimits

0x1f0b,	// (0x0003f298) list_single_recal_day_pane

0xeb2d,	// (0x0004beba) list_single_recal_day_pane_g1_ParamLimits

0xeb2d,	// (0x0004beba) list_single_recal_day_pane_g1

0x1f1d,	// (0x0003f2aa) list_single_recal_day_pane_g2_ParamLimits

0x1f1d,	// (0x0003f2aa) list_single_recal_day_pane_g2

0x1f2d,	// (0x0003f2ba) list_single_recal_day_pane_g3_ParamLimits

0x1f2d,	// (0x0003f2ba) list_single_recal_day_pane_g3

0x1f39,	// (0x0003f2c6) list_single_recal_day_pane_g4_ParamLimits

0x1f39,	// (0x0003f2c6) list_single_recal_day_pane_g4

0x1f4f,	// (0x0003f2dc) list_single_recal_day_pane_g5_ParamLimits

0x1f4f,	// (0x0003f2dc) list_single_recal_day_pane_g5

0x1f69,	// (0x0003f2f6) list_single_recal_day_pane_g6_ParamLimits

0x1f69,	// (0x0003f2f6) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x0004d1d7) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x0004d1d7) list_single_recal_day_pane_g

0x1f7d,	// (0x0003f30a) list_single_recal_day_pane_t1

0x1f8f,	// (0x0003f31c) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x0004d1e2) list_single_recal_day_pane_t

0x96fa,	// (0x00046a87) ncimui_query_button_pane_ParamLimits

0x96fa,	// (0x00046a87) ncimui_query_button_pane

0x970a,	// (0x00046a97) ncimui_query_button_pane_t1_ParamLimits

0x970a,	// (0x00046a97) ncimui_query_button_pane_t1

0xeb39,	// (0x0004bec6) ncimui_query_button_pane_t2_ParamLimits

0xeb39,	// (0x0004bec6) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x0004d1e7) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x0004d1e7) ncimui_query_button_pane_t

0x971d,	// (0x00046aaa) query_button_pane_ParamLimits

0x971d,	// (0x00046aaa) query_button_pane

0xa062,	// (0x000473ef) bg_button_pane_cp0028

0xeb4c,	// (0x0004bed9) query_button_pane_t1

0x54ce,	// (0x0004285b) main_tport_pane_ParamLimits

0x9287,	// (0x00046614) bg_popup_window_pane_cp01_ParamLimits

0x9287,	// (0x00046614) bg_popup_window_pane_cp01

0x9295,	// (0x00046622) heading_pane_cp08_ParamLimits

0x9295,	// (0x00046622) heading_pane_cp08

0x92a3,	// (0x00046630) heading_pane_cp07_ParamLimits

0x92a3,	// (0x00046630) heading_pane_cp07

0x9312,	// (0x0004669f) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x0004d133) cell_tport_appsw_pane_g

0x0fa7,	// (0x0003e334) input_candi_list_open_g1

0xade0,	// (0x0004816d) list_cale_time_pane_g6_ParamLimits

0xade0,	// (0x0004816d) list_cale_time_pane_g6

0x5f55,	// (0x000432e2) aid_size_touch_calib_1_ParamLimits

0x5f55,	// (0x000432e2) aid_size_touch_calib_1

0x5f61,	// (0x000432ee) aid_size_touch_calib_2_ParamLimits

0x5f61,	// (0x000432ee) aid_size_touch_calib_2

0x5f6f,	// (0x000432fc) aid_size_touch_calib_3_ParamLimits

0x5f6f,	// (0x000432fc) aid_size_touch_calib_3

0x5f7f,	// (0x0004330c) aid_size_touch_calib_4_ParamLimits

0x5f7f,	// (0x0004330c) aid_size_touch_calib_4

0x5f8d,	// (0x0004331a) main_touch_calib_button_group_pane_ParamLimits

0x5f8d,	// (0x0004331a) main_touch_calib_button_group_pane

0x5f9b,	// (0x00043328) main_touch_calib_pane_g1_ParamLimits

0x5fa7,	// (0x00043334) main_touch_calib_pane_g2_ParamLimits

0x5fb3,	// (0x00043340) main_touch_calib_pane_g3_ParamLimits

0x5fbf,	// (0x0004334c) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0004caf1) main_touch_calib_pane_g_ParamLimits

0x5fcb,	// (0x00043358) main_touch_calib_pane_t1_ParamLimits

0x5fe4,	// (0x00043371) main_touch_calib_pane_t2_ParamLimits

0x5ffd,	// (0x0004338a) main_touch_calib_pane_t3_ParamLimits

0x6013,	// (0x000433a0) main_touch_calib_pane_t4_ParamLimits

0x6029,	// (0x000433b6) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0004cafa) main_touch_calib_pane_t_ParamLimits

0xcfa6,	// (0x0004a333) list_single_fp_cale_pane_g3_ParamLimits

0xcfa6,	// (0x0004a333) list_single_fp_cale_pane_g3

0xad42,	// (0x000480cf) bg_button_pane_cp012_ParamLimits

0xad42,	// (0x000480cf) bg_vkb2_func_pane_cp03_ParamLimits

0x7e8b,	// (0x00045218) cell_vitu2_function_top_pane_g1_ParamLimits

0xad42,	// (0x000480cf) bg_vkb2_func_pane_cp04_ParamLimits

0x8b67,	// (0x00045ef4) main_ncimui_button_group_pane_ParamLimits

0x8b67,	// (0x00045ef4) main_ncimui_button_group_pane

0x8bcd,	// (0x00045f5a) main_ncimui_pane_t3_ParamLimits

0x8bcd,	// (0x00045f5a) main_ncimui_pane_t3

0xe8dd,	// (0x0004bc6a) phacti_button_group_pane

0xead5,	// (0x0004be62) aid_size_list_single_double_ParamLimits

0x967b,	// (0x00046a08) popup_ezdial_listscroll_window_ParamLimits

0x969f,	// (0x00046a2c) popup_number_entry_window_cp01_ParamLimits

0x972a,	// (0x00046ab7) phacti_button_pane_ParamLimits

0x972a,	// (0x00046ab7) phacti_button_pane

0xa062,	// (0x000473ef) bg_button_pane_cp14

0xeb5a,	// (0x0004bee7) phacti_button_pane_t1

0x973b,	// (0x00046ac8) main_touch_calib_button_pane_ParamLimits

0x973b,	// (0x00046ac8) main_touch_calib_button_pane

0xa7c1,	// (0x00047b4e) bg_button_pane_cp18_ParamLimits

0xa7c1,	// (0x00047b4e) bg_button_pane_cp18

0xeb68,	// (0x0004bef5) main_touch_calib_button_pane_t1_ParamLimits

0xeb68,	// (0x0004bef5) main_touch_calib_button_pane_t1

0xeb7e,	// (0x0004bf0b) main_touch_calib_button_pane_t2_ParamLimits

0xeb7e,	// (0x0004bf0b) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x0004d1ec) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x0004d1ec) main_touch_calib_button_pane_t

0xa062,	// (0x000473ef) cell_ncimui_button_pane

0xa062,	// (0x000473ef) bg_button_pane_cp032

0xeb9c,	// (0x0004bf29) cell_ncimui_button_pane_t1

0x7148,	// (0x000444d5) image3_infobar_pane_ParamLimits

0x7148,	// (0x000444d5) image3_infobar_pane

0x8f46,	// (0x000462d3) fs_bigclock_status_pane_ParamLimits

0x8f46,	// (0x000462d3) fs_bigclock_status_pane

0x8f53,	// (0x000462e0) main_fs_bigclock_clock_pane_ParamLimits

0x8f53,	// (0x000462e0) main_fs_bigclock_clock_pane

0x8f6d,	// (0x000462fa) main_fs_bigclock_indi_pane_ParamLimits

0x8f6d,	// (0x000462fa) main_fs_bigclock_indi_pane

0x8f95,	// (0x00046322) main_fs_bigclock_swipe_pane_ParamLimits

0x8f95,	// (0x00046322) main_fs_bigclock_swipe_pane

0xa062,	// (0x000473ef) main_fs_clock_dumped_data

0xe42b,	// (0x0004b7b8) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe42b,	// (0x0004b7b8) list_single_fs_bigclock_indicator_pane_g1

0xe447,	// (0x0004b7d4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe447,	// (0x0004b7d4) list_single_fs_bigclock_indicator_pane_g2

0xe461,	// (0x0004b7ee) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe461,	// (0x0004b7ee) list_single_fs_bigclock_indicator_pane_g3

0xe47b,	// (0x0004b808) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe47b,	// (0x0004b808) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0004d014) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0004d014) list_single_fs_bigclock_indicator_pane_g

0xe4a6,	// (0x0004b833) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4a6,	// (0x0004b833) list_single_fs_bigclock_indicator_pane_t1

0xe4ce,	// (0x0004b85b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4ce,	// (0x0004b85b) list_single_fs_bigclock_indicator_pane_t2

0xe4f6,	// (0x0004b883) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4f6,	// (0x0004b883) list_single_fs_bigclock_indicator_pane_t3

0xe51e,	// (0x0004b8ab) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe51e,	// (0x0004b8ab) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0004d01f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0004d01f) list_single_fs_bigclock_indicator_pane_t

0xebaa,	// (0x0004bf37) image3_infobar_fav_pane_ParamLimits

0xebaa,	// (0x0004bf37) image3_infobar_fav_pane

0xebba,	// (0x0004bf47) image3_infobar_loc_pane_ParamLimits

0xebba,	// (0x0004bf47) image3_infobar_loc_pane

0xebce,	// (0x0004bf5b) image3_infobar_time_pane_ParamLimits

0xebce,	// (0x0004bf5b) image3_infobar_time_pane

0xcc58,	// (0x00049fe5) image3_infobar_time_pane_g1

0xebde,	// (0x0004bf6b) image3_infobar_time_pane_t1

0xcc58,	// (0x00049fe5) image3_infobar_loc_pane_g1

0xebec,	// (0x0004bf79) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x0004d1f1) image3_infobar_loc_pane_g

0xebf4,	// (0x0004bf81) image3_infobar_loc_pane_t1

0xcc58,	// (0x00049fe5) image3_infobar_fav_pane_g1

0xec02,	// (0x0004bf8f) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x0004d1f6) image3_infobar_fav_pane_g

0xec0a,	// (0x0004bf97) fs_bigclock_status_battery_pane

0xec13,	// (0x0004bfa0) fs_bigclock_status_signal_pane

0xec1c,	// (0x0004bfa9) fs_bigclock_status_title_pane

0xec25,	// (0x0004bfb2) fs_bigclock_status_signal_pane_g1

0xec2e,	// (0x0004bfbb) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x0004d1fb) fs_bigclock_status_signal_pane_g

0xec36,	// (0x0004bfc3) fs_bigclock_status_battery_pane_g1

0xec3f,	// (0x0004bfcc) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x0004d200) fs_bigclock_status_battery_pane_g

0xec47,	// (0x0004bfd4) fs_bigclock_status_title_pane_t1

0xcc58,	// (0x00049fe5) main_fs_bigclock_clock_pane_g1

0xec55,	// (0x0004bfe2) main_fs_bigclock_clock_pane_g2

0xec5e,	// (0x0004bfeb) main_fs_bigclock_clock_pane_g3

0xec5e,	// (0x0004bfeb) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x0004d205) main_fs_bigclock_clock_pane_g

0xec66,	// (0x0004bff3) main_fs_bigclock_clock_pane_t1

0x974b,	// (0x00046ad8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x0004d20e) main_fs_bigclock_clock_pane_t

0xec74,	// (0x0004c001) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec74,	// (0x0004c001) list_single_fs_bigclock_indicator_pane

0xec85,	// (0x0004c012) list_single_fs_bigclock_pane_ParamLimits

0xec85,	// (0x0004c012) list_single_fs_bigclock_pane

0xecab,	// (0x0004c038) main_fs_bigclock_indicator_pane_t1

0xecba,	// (0x0004c047) list_single_fs_bigclock_pane_g1

0xecc2,	// (0x0004c04f) list_single_fs_bigclock_pane_t1

0xcc58,	// (0x00049fe5) main_fs_bigclock_swipe_pane_g1

0xed05,	// (0x0004c092) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x0004d21f) main_fs_bigclock_swipe_pane_g

0xed0d,	// (0x0004c09a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed0d,	// (0x0004c09a) main_fs_bigclock_swipe_pane_t1

0x4541,	// (0x000418ce) call_type_pane_ParamLimits

0xa062,	// (0x000473ef) main_btmg_pane

0x1dd2,	// (0x0003f15f) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1dd2,	// (0x0003f15f) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x0004d192) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x0004d192) list_single_cale_mrui_row_pane_g

0x1efa,	// (0x0003f287) list_recal_vselct_arw_lo_pane

0xeb25,	// (0x0004beb2) list_recal_vselct_arw_up_pane

0x1f02,	// (0x0003f28f) list_recal_vselct_pane

0x979e,	// (0x00046b2b) btmg_button_pane

0x97aa,	// (0x00046b37) main_btmg_pane_g1

0xa062,	// (0x000473ef) bg_button_pane_cp044

0xed2a,	// (0x0004c0b7) btmg_button_pane_t1

0xc83c,	// (0x00049bc9) aid_listscroll_gen

0xad42,	// (0x000480cf) main_cntbar_detail_pane

0xe829,	// (0x0004bbb6) list_cmail_folder_pane

0xd470,	// (0x0004a7fd) sp_fs_scroll_pane_cp03_ParamLimits

0x1fa1,	// (0x0003f32e) list_single_fs_dyc_pane_cp01_ParamLimits

0x1fa1,	// (0x0003f32e) list_single_fs_dyc_pane_cp01

0xed38,	// (0x0004c0c5) aid_size_cmail_indent

0x1fd0,	// (0x0003f35d) list_single_dyc_row_pane_cp01

0x97d2,	// (0x00046b5f) cntbar_detail_list_pane_ParamLimits

0x97d2,	// (0x00046b5f) cntbar_detail_list_pane

0x980c,	// (0x00046b99) main_cntbar_detail_cont_pane_ParamLimits

0x980c,	// (0x00046b99) main_cntbar_detail_cont_pane

0x4535,	// (0x000418c2) scroll_pane_cp032_ParamLimits

0x4535,	// (0x000418c2) scroll_pane_cp032

0x9818,	// (0x00046ba5) cntbar_detail_list_event_pane_ParamLimits

0x9818,	// (0x00046ba5) cntbar_detail_list_event_pane

0x97de,	// (0x00046b6b) cntbar_detail_list_shct_pane

0xac3f,	// (0x00047fcc) aid_list_gen

0xed41,	// (0x0004c0ce) aid_scroll

0xed4a,	// (0x0004c0d7) aid_size_touch_scroll_bar

0x8425,	// (0x000457b2) aid_list_double

0x1fd9,	// (0x0003f366) aid_list_single

0x8413,	// (0x000457a0) aid_list_single_lg

0x1fe2,	// (0x0003f36f) aid_list_z_g_a_sm

0x1fea,	// (0x0003f377) aid_list_z_g_d

0x1ff2,	// (0x0003f37f) aid_txt_z_prm

0x2000,	// (0x0003f38d) aid_txt_z_prm_cp01

0x200e,	// (0x0003f39b) aid_txt_z_sec

0x982c,	// (0x00046bb9) main_cntbar_detail_cont_pane_g1_ParamLimits

0x982c,	// (0x00046bb9) main_cntbar_detail_cont_pane_g1

0x9839,	// (0x00046bc6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9839,	// (0x00046bc6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x0004d224) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x0004d224) main_cntbar_detail_cont_pane_g

0xed53,	// (0x0004c0e0) main_cntbar_detail_cont_pane_t1

0xed61,	// (0x0004c0ee) main_cntbar_detail_cont_pane_t2

0xed6f,	// (0x0004c0fc) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x0004d229) main_cntbar_detail_cont_pane_t

0x9845,	// (0x00046bd2) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9845,	// (0x00046bd2) cell_cntbar_detail_list_shct_pane

0xed7d,	// (0x0004c10a) cntbar_detail_list_shct_pane_g1

0xed86,	// (0x0004c113) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x0004d230) cntbar_detail_list_shct_pane_g

0x9859,	// (0x00046be6) cntbar_detail_list_event_pane_g1_ParamLimits

0x9859,	// (0x00046be6) cntbar_detail_list_event_pane_g1

0x9865,	// (0x00046bf2) cntbar_detail_list_event_pane_g2_ParamLimits

0x9865,	// (0x00046bf2) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x0004d235) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x0004d235) cntbar_detail_list_event_pane_g

0x98d1,	// (0x00046c5e) cntbar_detail_list_event_pane_t1_ParamLimits

0x98d1,	// (0x00046c5e) cntbar_detail_list_event_pane_t1

0x98e6,	// (0x00046c73) cntbar_detail_list_event_pane_t2_ParamLimits

0x98e6,	// (0x00046c73) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x0004d242) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x0004d242) cntbar_detail_list_event_pane_t

0xcc58,	// (0x00049fe5) cell_cntbar_detail_list_shct_pane_g1

0xb3ab,	// (0x00048738) navi_pane_mv_g3

0xad42,	// (0x000480cf) main_cntbar_detail_pane_ParamLimits

0xa062,	// (0x000473ef) main_notif_wgt_pane

0x6dfc,	// (0x00044189) aid_tch_main_mp4_pane_g4

0x7031,	// (0x000443be) popup_slider_window_cp02

0x1ef0,	// (0x0003f27d) list_recal_day_event_pane

0x97b2,	// (0x00046b3f) cntbar_detail_btn_pane_ParamLimits

0x97b2,	// (0x00046b3f) cntbar_detail_btn_pane

0x97c2,	// (0x00046b4f) cntbar_detail_btn_pane_cp01_ParamLimits

0x97c2,	// (0x00046b4f) cntbar_detail_btn_pane_cp01

0x97de,	// (0x00046b6b) cntbar_detail_list_shct_pane_ParamLimits

0x97ea,	// (0x00046b77) cntbar_detail_pane_g1_ParamLimits

0x97ea,	// (0x00046b77) cntbar_detail_pane_g1

0x97f6,	// (0x00046b83) cntbar_detail_pane_t1_ParamLimits

0x97f6,	// (0x00046b83) cntbar_detail_pane_t1

0x9871,	// (0x00046bfe) cntbar_detail_list_event_pane_g3_ParamLimits

0x9871,	// (0x00046bfe) cntbar_detail_list_event_pane_g3

0x9889,	// (0x00046c16) cntbar_detail_list_event_pane_g4_ParamLimits

0x9889,	// (0x00046c16) cntbar_detail_list_event_pane_g4

0x98a1,	// (0x00046c2e) cntbar_detail_list_event_pane_g5_ParamLimits

0x98a1,	// (0x00046c2e) cntbar_detail_list_event_pane_g5

0x98b9,	// (0x00046c46) cntbar_detail_list_event_pane_g6_ParamLimits

0x98b9,	// (0x00046c46) cntbar_detail_list_event_pane_g6

0x98fb,	// (0x00046c88) cntbar_detail_list_event_pane_t3_ParamLimits

0x98fb,	// (0x00046c88) cntbar_detail_list_event_pane_t3

0x990d,	// (0x00046c9a) popup_notif_wgt_window_ParamLimits

0x990d,	// (0x00046c9a) popup_notif_wgt_window

0x991d,	// (0x00046caa) popup_submenu_window_cp01_ParamLimits

0x991d,	// (0x00046caa) popup_submenu_window_cp01

0xa998,	// (0x00047d25) bg_popup_window_pane_cp10

0xed8f,	// (0x0004c11c) listscroll_notif_wgt_pane

0xeda1,	// (0x0004c12e) list_notif_wgt_window

0xedaa,	// (0x0004c137) scroll_pane_cp033

0x992b,	// (0x00046cb8) list_notif_wgt_row_pane_ParamLimits

0x992b,	// (0x00046cb8) list_notif_wgt_row_pane

0xedb3,	// (0x0004c140) aid_size_list_notif_wgt_del

0xedc0,	// (0x0004c14d) list_notif_wgt_row_pane_g1

0xedcc,	// (0x0004c159) list_notif_wgt_row_pane_g2

0xede0,	// (0x0004c16d) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x0004d249) list_notif_wgt_row_pane_g

0xeded,	// (0x0004c17a) list_notif_wgt_row_pane_t1

0xee03,	// (0x0004c190) list_notif_wgt_row_pane_t2

0xee15,	// (0x0004c1a2) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x0004d250) list_notif_wgt_row_pane_t

0xd8e1,	// (0x0004ac6e) list_recal_day_event_pane_g1

0xee27,	// (0x0004c1b4) list_recal_day_event_pane_t1

0xa062,	// (0x000473ef) bg_button_pane_cp045

0x993d,	// (0x00046cca) cntbar_detail_btn_pane_t1

0xc850,	// (0x00049bdd) main_callh_pane_ParamLimits

0xc850,	// (0x00049bdd) main_callh_pane

0xa062,	// (0x000473ef) main_coverflow0_pane

0xa062,	// (0x000473ef) main_wgtman_pane

0x8fad,	// (0x0004633a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8fad,	// (0x0004633a) main_fs_bigclock_unlock_btn_pane

0x930a,	// (0x00046697) bg_button_pane_cp16

0x931a,	// (0x000466a7) cell_tport_appsw_pane_g3

0x994b,	// (0x00046cd8) cf0_flow_pane_ParamLimits

0x994b,	// (0x00046cd8) cf0_flow_pane

0xee36,	// (0x0004c1c3) listscroll_cf0_pane

0xee41,	// (0x0004c1ce) main_cf0_pane_g1

0x995a,	// (0x00046ce7) main_cf0_pane_t1_ParamLimits

0x995a,	// (0x00046ce7) main_cf0_pane_t1

0x996e,	// (0x00046cfb) main_cf0_pane_t2_ParamLimits

0x996e,	// (0x00046cfb) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0004d25c) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0004d25c) main_cf0_pane_t

0xee53,	// (0x0004c1e0) scroll_pane_cp11

0x9982,	// (0x00046d0f) cf0_flow_pane_g1

0x998a,	// (0x00046d17) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0004d261) cf0_flow_pane_g

0x9992,	// (0x00046d1f) cf0_flow_pane_t1

0xa062,	// (0x000473ef) main_call6_pane

0xa062,	// (0x000473ef) main_calllock_pane

0x99a0,	// (0x00046d2d) call6_btn_grp_pane_ParamLimits

0x99a0,	// (0x00046d2d) call6_btn_grp_pane

0x99af,	// (0x00046d3c) call6_pane_g1_ParamLimits

0x99af,	// (0x00046d3c) call6_pane_g1

0x99be,	// (0x00046d4b) popup_call6_1st_window_ParamLimits

0x99be,	// (0x00046d4b) popup_call6_1st_window

0x99cc,	// (0x00046d59) popup_call6_2nd_window_ParamLimits

0x99cc,	// (0x00046d59) popup_call6_2nd_window

0x99da,	// (0x00046d67) cell_call6_btn_pane_ParamLimits

0x99da,	// (0x00046d67) cell_call6_btn_pane

0xa998,	// (0x00047d25) bg_popup_call2_in_pane_cp03

0xee5e,	// (0x0004c1eb) popup_call6_1st_window_g1

0xee66,	// (0x0004c1f3) popup_call6_1st_window_g2

0xee6e,	// (0x0004c1fb) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0004d266) popup_call6_1st_window_g

0xee76,	// (0x0004c203) popup_call6_1st_window_t1

0xee85,	// (0x0004c212) popup_call6_1st_window_t2

0xee95,	// (0x0004c222) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0004d26d) popup_call6_1st_window_t

0xa998,	// (0x00047d25) bg_popup_call2_in_pane_cp04

0xee5e,	// (0x0004c1eb) popup_call6_2nd_window_g1

0xee66,	// (0x0004c1f3) popup_call6_2nd_window_g2

0xee6e,	// (0x0004c1fb) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0004d266) popup_call6_2nd_window_g

0xee76,	// (0x0004c203) popup_call6_2nd_window_t1

0xa062,	// (0x000473ef) bg_button_pane_cp15

0xeea5,	// (0x0004c232) cell_call6_btn_pane_g1

0xeeae,	// (0x0004c23b) cell_call6_btn_pane_t1

0x99e9,	// (0x00046d76) listscroll_wgtman_pane_ParamLimits

0x99e9,	// (0x00046d76) listscroll_wgtman_pane

0x9a05,	// (0x00046d92) wgtman_btn_pane_ParamLimits

0x9a05,	// (0x00046d92) wgtman_btn_pane

0xb1bf,	// (0x0004854c) aid_scroll_copy1

0xeebd,	// (0x0004c24a) list_wgtman_pane

0x9a3a,	// (0x00046dc7) wgtman_btn_pane_g1_ParamLimits

0x9a3a,	// (0x00046dc7) wgtman_btn_pane_g1

0x9a62,	// (0x00046def) wgtman_btn_pane_t1_ParamLimits

0x9a62,	// (0x00046def) wgtman_btn_pane_t1

0xeec7,	// (0x0004c254) wgtman_btn_pane_t2_ParamLimits

0xeec7,	// (0x0004c254) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0004d274) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0004d274) wgtman_btn_pane_t

0x9a99,	// (0x00046e26) listrow_wgtman_pane_ParamLimits

0x9a99,	// (0x00046e26) listrow_wgtman_pane

0x9ab5,	// (0x00046e42) listrow_wgtman_pane_g1

0x9ac2,	// (0x00046e4f) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0004d279) listrow_wgtman_pane_g

0x201c,	// (0x0003f3a9) listrow_wgtman_pane_t1

0x2034,	// (0x0003f3c1) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0004d27e) listrow_wgtman_pane_t

0x205a,	// (0x0003f3e7) wait_bar_pane_cp09

0xeede,	// (0x0004c26b) main_calllock_btn_pane

0xeee8,	// (0x0004c275) main_calllock_pane_g1

0xa062,	// (0x000473ef) bg_button_pane_cp17

0xeef3,	// (0x0004c280) main_calllock_btn_pane_g1

0xeefc,	// (0x0004c289) main_calllock_btn_pane_t1

0xa062,	// (0x000473ef) main_dialer3_pane

0xa062,	// (0x000473ef) main_fmrd2_pane

0xcc58,	// (0x00049fe5) main_fs_bigclock_unlock_btn_pane_g1

0xef13,	// (0x0004c2a0) main_fs_bigclock_unlock_btn_pane_t1

0x9ae0,	// (0x00046e6d) area_fmrd2_info_pane_ParamLimits

0x9ae0,	// (0x00046e6d) area_fmrd2_info_pane

0x9aee,	// (0x00046e7b) area_fmrd2_visual_pane_ParamLimits

0x9aee,	// (0x00046e7b) area_fmrd2_visual_pane

0x9afc,	// (0x00046e89) fmrd2_indi_pane_ParamLimits

0x9afc,	// (0x00046e89) fmrd2_indi_pane

0x9b09,	// (0x00046e96) area_fmrd2_visual_pane_g1

0x9b11,	// (0x00046e9e) area_fmrd2_visual_pane_t1

0x9b21,	// (0x00046eae) area_fmrd2_visual_pane_t2

0x9b31,	// (0x00046ebe) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x0004d288) area_fmrd2_visual_pane_t

0x9b41,	// (0x00046ece) area_fmrd2_info_pane_g1

0x9b49,	// (0x00046ed6) area_fmrd2_info_pane_t1

0x9b59,	// (0x00046ee6) area_fmrd2_info_pane_t2

0x9b69,	// (0x00046ef6) area_fmrd2_info_pane_t3

0x9b79,	// (0x00046f06) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0004d28f) area_fmrd2_info_pane_t

0x9b87,	// (0x00046f14) fmrd2_indi_pane_t1

0x9b97,	// (0x00046f24) fmrd2_indi_pane_t2

0x9ba7,	// (0x00046f34) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x0004d298) fmrd2_indi_pane_t

0xe48a,	// (0x0004b817) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe48a,	// (0x0004b817) list_single_fs_bigclock_indicator_pane_g5

0xe53a,	// (0x0004b8c7) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe53a,	// (0x0004b8c7) list_single_fs_bigclock_indicator_pane_t5

0x949f,	// (0x0004682c) aid_cell_bcale_month_pane_ParamLimits

0x949f,	// (0x0004682c) aid_cell_bcale_month_pane

0x94bd,	// (0x0004684a) bcale_month_pane_ParamLimits

0x94bd,	// (0x0004684a) bcale_month_pane

0x94db,	// (0x00046868) bcale_preview_pane_ParamLimits

0x94db,	// (0x00046868) bcale_preview_pane

0xecc2,	// (0x0004c04f) list_single_fs_bigclock_pane_t1_ParamLimits

0xece1,	// (0x0004c06e) list_single_fs_bigclock_pane_t2_ParamLimits

0xece1,	// (0x0004c06e) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x0004d21a) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x0004d21a) list_single_fs_bigclock_pane_t

0xef0b,	// (0x0004c298) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0004d283) main_fs_bigclock_unlock_btn_pane_g

0x9bb5,	// (0x00046f42) aid_dia3_key_size_ParamLimits

0x9bb5,	// (0x00046f42) aid_dia3_key_size

0x9bc1,	// (0x00046f4e) aid_dia3_listrow_size_ParamLimits

0x9bc1,	// (0x00046f4e) aid_dia3_listrow_size

0x9bd1,	// (0x00046f5e) dia3_keypad_fun_pane_ParamLimits

0x9bd1,	// (0x00046f5e) dia3_keypad_fun_pane

0x9be3,	// (0x00046f70) dia3_keypad_num_pane_ParamLimits

0x9be3,	// (0x00046f70) dia3_keypad_num_pane

0x9bf5,	// (0x00046f82) dia3_listscroll_pane_ParamLimits

0x9bf5,	// (0x00046f82) dia3_listscroll_pane

0x9c03,	// (0x00046f90) dia3_numentry_pane_ParamLimits

0x9c03,	// (0x00046f90) dia3_numentry_pane

0xef21,	// (0x0004c2ae) dia3_list_pane

0xef2c,	// (0x0004c2b9) scroll_pane_cp12

0xa062,	// (0x000473ef) bg_dia3_numentry_pane

0x9c11,	// (0x00046f9e) dia3_numentry_pane_t1

0x9c20,	// (0x00046fad) cell_dia3_key_num_pane

0x9c28,	// (0x00046fb5) cell_dia3_key0_fun_pane_ParamLimits

0x9c28,	// (0x00046fb5) cell_dia3_key0_fun_pane

0x9c35,	// (0x00046fc2) cell_dia3_key1_fun_pane_ParamLimits

0x9c35,	// (0x00046fc2) cell_dia3_key1_fun_pane

0x9c42,	// (0x00046fcf) dia3_listrow_pane

0xe199,	// (0x0004b526) bg_dia3_numentry_pane_g1

0xa062,	// (0x000473ef) bg_button_pane_cp21

0xef37,	// (0x0004c2c4) cell_dia3_key_num_pane_t1

0xef45,	// (0x0004c2d2) cell_dia3_key_num_pane_t2

0xef54,	// (0x0004c2e1) cell_dia3_key_num_pane_t3

0xef63,	// (0x0004c2f0) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x0004d29f) cell_dia3_key_num_pane_t

0xa062,	// (0x000473ef) bg_button_pane_cp19

0x9c4f,	// (0x00046fdc) cell_dia3_key0_fun_pane_g1

0xa062,	// (0x000473ef) bg_button_pane_cp20

0x9c57,	// (0x00046fe4) cell_dia3_key1_fun_pane_g1

0x9c5f,	// (0x00046fec) area_left_week_number_pane

0x9c72,	// (0x00046fff) area_top_day_name_pane

0x9c80,	// (0x0004700d) frame_month_view_pane

0xef72,	// (0x0004c2ff) grid_month_view_pane

0x9c95,	// (0x00047022) cell_top_day_name_pane_ParamLimits

0x9c95,	// (0x00047022) cell_top_day_name_pane

0x9caf,	// (0x0004703c) cell_area_left_week_number_pane_ParamLimits

0x9caf,	// (0x0004703c) cell_area_left_week_number_pane

0x9cd2,	// (0x0004705f) cell_month_view_pane_ParamLimits

0x9cd2,	// (0x0004705f) cell_month_view_pane

0xef80,	// (0x0004c30d) frm_month_g1

0x9cfe,	// (0x0004708b) frm_month_g2

0x9d0f,	// (0x0004709c) frm_month_g3

0x9d20,	// (0x000470ad) frm_month_g4

0x9d31,	// (0x000470be) frm_month_g5

0x9d44,	// (0x000470d1) frm_month_g6

0x9d57,	// (0x000470e4) frm_month_g7

0xef8d,	// (0x0004c31a) frm_month_g8

0x9d6a,	// (0x000470f7) frm_month_g9

0x9d77,	// (0x00047104) frm_month_g10

0x9d84,	// (0x00047111) frm_month_g11

0x9d91,	// (0x0004711e) frm_month_g12

0x9d9e,	// (0x0004712b) frm_month_g13

0x9dab,	// (0x00047138) frm_month_g14

0x9dba,	// (0x00047147) frm_month_g15

0x9dc9,	// (0x00047156) frm_month_g16

0x000f,

0xff1b,	// (0x0004d2a8) frm_month_g

0xef9a,	// (0x0004c327) cell_top_day_name_pane_t1

0x9dd8,	// (0x00047165) cell_area_left_week_number_pane_g1

0x9de7,	// (0x00047174) cell_area_left_week_number_pane_t1

0xcea6,	// (0x0004a233) cell_month_view_pane_g1

0x9dfd,	// (0x0004718a) cell_month_view_pane_t1

0xa062,	// (0x000473ef) main_fps_pane

0xe72a,	// (0x0004bab7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe72a,	// (0x0004bab7) cmail_ddmenu_btn02_pane_cp1

0xe746,	// (0x0004bad3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe746,	// (0x0004bad3) cmail_ddmenu_btn02_pane_cp2

0x96c9,	// (0x00046a56) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x96c9,	// (0x00046a56) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x0004d1cd) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x0004d1cd) cmail_ddmenu_btn02_pane_g

0x96e8,	// (0x00046a75) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x96e8,	// (0x00046a75) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x0004d1d2) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x0004d1d2) cmail_ddmenu_btn02_pane_t

0x9e13,	// (0x000471a0) fps_text_pane_ParamLimits

0x9e13,	// (0x000471a0) fps_text_pane

0x9e20,	// (0x000471ad) main_fps_pane_g1_ParamLimits

0x9e20,	// (0x000471ad) main_fps_pane_g1

0x9e2e,	// (0x000471bb) wait_bar_pane_cp010_ParamLimits

0x9e2e,	// (0x000471bb) wait_bar_pane_cp010

0x9e3a,	// (0x000471c7) fps_text_pane_t1_ParamLimits

0x9e3a,	// (0x000471c7) fps_text_pane_t1

0x7413,	// (0x000447a0) cam4_image_uncrop_pane_g1

0x741c,	// (0x000447a9) cam4_image_uncrop_pane_g2

0x7425,	// (0x000447b2) cam4_image_uncrop_pane_g3

0x742e,	// (0x000447bb) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0004cc8e) cam4_image_uncrop_pane_g

0x9c42,	// (0x00046fcf) dia3_listrow_pane_ParamLimits

0xa062,	// (0x000473ef) main_phob2_pane

0x92ec,	// (0x00046679) cell_tport_appsw_pane_cp02_ParamLimits

0x92ec,	// (0x00046679) cell_tport_appsw_pane_cp02

0x92fb,	// (0x00046688) cell_tport_appsw_pane_cp03_ParamLimits

0x92fb,	// (0x00046688) cell_tport_appsw_pane_cp03

0xa062,	// (0x000473ef) phob2_contact_card_pane

0xa062,	// (0x000473ef) phob2_listscroll_pane

0xefad,	// (0x0004c33a) phob2_list_pane

0xefb5,	// (0x0004c342) scroll_pane_cp034

0x9e53,	// (0x000471e0) phob2_cc_data_pane_ParamLimits

0x9e53,	// (0x000471e0) phob2_cc_data_pane

0x9e6d,	// (0x000471fa) phob2_cc_listscroll_pane_ParamLimits

0x9e6d,	// (0x000471fa) phob2_cc_listscroll_pane

0x9e87,	// (0x00047214) list_double_large_graphic_phob2_pane_ParamLimits

0x9e87,	// (0x00047214) list_double_large_graphic_phob2_pane

0x9ea6,	// (0x00047233) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9ea6,	// (0x00047233) list_double_large_graphic_phob2_pane_g1

0x206c,	// (0x0003f3f9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x206c,	// (0x0003f3f9) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0004d2c9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0004d2c9) list_double_large_graphic_phob2_pane_g

0x2078,	// (0x0003f405) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x2078,	// (0x0003f405) list_double_large_graphic_phob2_pane_t1

0x208e,	// (0x0003f41b) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x208e,	// (0x0003f41b) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0004d2ce) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0004d2ce) list_double_large_graphic_phob2_pane_t

0xa062,	// (0x000473ef) list_highlight_pane_cp024

0x9ebc,	// (0x00047249) phob2_cc_button_pane

0x9ec4,	// (0x00047251) phob2_cc_data_pane_g1_ParamLimits

0x9ec4,	// (0x00047251) phob2_cc_data_pane_g1

0x9ed0,	// (0x0004725d) phob2_cc_data_pane_g2_ParamLimits

0x9ed0,	// (0x0004725d) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x0004d2d3) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x0004d2d3) phob2_cc_data_pane_g

0x9edc,	// (0x00047269) phob2_cc_data_pane_t1_ParamLimits

0x9edc,	// (0x00047269) phob2_cc_data_pane_t1

0x9eee,	// (0x0004727b) phob2_cc_data_pane_t2_ParamLimits

0x9eee,	// (0x0004727b) phob2_cc_data_pane_t2

0x9f00,	// (0x0004728d) phob2_cc_data_pane_t3_ParamLimits

0x9f00,	// (0x0004728d) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x0004d2d8) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x0004d2d8) phob2_cc_data_pane_t

0xefbd,	// (0x0004c34a) phob2_cc_list_pane_ParamLimits

0xefbd,	// (0x0004c34a) phob2_cc_list_pane

0xda4e,	// (0x0004addb) scroll_pane_cp035_ParamLimits

0xda4e,	// (0x0004addb) scroll_pane_cp035

0xad42,	// (0x000480cf) bg_button_pane_cp033

0xefc9,	// (0x0004c356) phob2_cc_button_pane_g1

0xefd5,	// (0x0004c362) phob2_cc_button_pane_t1

0xefea,	// (0x0004c377) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x0004d2df) phob2_cc_button_pane_t

0x9f12,	// (0x0004729f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9f12,	// (0x0004729f) list_double_large_graphic_phob2_cc_pane

0x9f3b,	// (0x000472c8) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9f3b,	// (0x000472c8) list_double_large_graphic_phob2_cc_pane_g1

0x20a3,	// (0x0003f430) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x20a3,	// (0x0003f430) list_double_large_graphic_phob2_cc_pane_g2

0x20af,	// (0x0003f43c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x20af,	// (0x0003f43c) list_double_large_graphic_phob2_cc_pane_g3

0x20bb,	// (0x0003f448) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x20bb,	// (0x0003f448) list_double_large_graphic_phob2_cc_pane_g4

0x20c7,	// (0x0003f454) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x20c7,	// (0x0003f454) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x0004d2e4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x0004d2e4) list_double_large_graphic_phob2_cc_pane_g

0x20d3,	// (0x0003f460) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x20d3,	// (0x0003f460) list_double_large_graphic_phob2_cc_pane_t1

0x20fc,	// (0x0003f489) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x20fc,	// (0x0003f489) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0004d2ef) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0004d2ef) list_double_large_graphic_phob2_cc_pane_t

0xeffc,	// (0x0004c389) list_highlight_pane_cp025_ParamLimits

0xeffc,	// (0x0004c389) list_highlight_pane_cp025

0xad42,	// (0x000480cf) bg_button_pane_cp033_ParamLimits

0xefc9,	// (0x0004c356) phob2_cc_button_pane_g1_ParamLimits

0xefd5,	// (0x0004c362) phob2_cc_button_pane_t1_ParamLimits

0xefea,	// (0x0004c377) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x0004d2df) phob2_cc_button_pane_t_ParamLimits

0x23fc,	// (0x0003f789) popup_wgtman_window

0xd7cf,	// (0x0004ab5c) scroll_pane_cp038

0x9a22,	// (0x00046daf) wgtman_btn_pane_cp_01_ParamLimits

0x9a22,	// (0x00046daf) wgtman_btn_pane_cp_01

0xf00a,	// (0x0004c397) wgtman_content_pane

0xf013,	// (0x0004c3a0) wgtman_heading_pane

0xa062,	// (0x000473ef) bg_heading_pane_cp02

0xf01c,	// (0x0004c3a9) wgtman_heading_pane_g1

0xf024,	// (0x0004c3b1) wgtman_heading_pane_t1

0xf032,	// (0x0004c3bf) scroll_pane_cp036

0xf03a,	// (0x0004c3c7) wgtman_list_pane

0xea07,	// (0x0004bd94) wgtman_list_pane_t1_ParamLimits

0xea07,	// (0x0004bd94) wgtman_list_pane_t1

0x7372,	// (0x000446ff) cam4_grid_pane

0x128b,	// (0x0003e618) bg_button_pane_cp015_ParamLimits

0x803e,	// (0x000453cb) bg_button_pane_cp016_ParamLimits

0x8051,	// (0x000453de) bg_button_pane_cp017_ParamLimits

0x12cf,	// (0x0003e65c) popup_vitu2_query_window_g3_ParamLimits

0x12cf,	// (0x0003e65c) popup_vitu2_query_window_g3

0x1348,	// (0x0003e6d5) popup_vitu2_query_window_t6_ParamLimits

0x1348,	// (0x0003e6d5) popup_vitu2_query_window_t6

0x1373,	// (0x0003e700) popup_vitu2_query_window_t7_ParamLimits

0x1373,	// (0x0003e700) popup_vitu2_query_window_t7

0xea22,	// (0x0004bdaf) cam4_grid_pane_g1

0xea2b,	// (0x0004bdb8) cam4_grid_pane_g2

0xf042,	// (0x0004c3cf) cam4_grid_pane_g3

0xf04b,	// (0x0004c3d8) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x0004d2f4) cam4_grid_pane_g

0x3253,	// (0x000405e0) aid_placing_vt_slider_lsc_ParamLimits

0x3593,	// (0x00040920) vidtel_button_pane_ParamLimits

0x3593,	// (0x00040920) vidtel_button_pane

0xa062,	// (0x000473ef) bg_button_pane_cp034

0x9f4c,	// (0x000472d9) vidtel_button_pane_g1

0xf056,	// (0x0004c3e3) vidtel_button_pane_t1

0xd8d1,	// (0x0004ac5e) aid_size_vtel_slider_touch

0xda4e,	// (0x0004addb) scroll_pane_cp039

0xe1df,	// (0x0004b56c) ncim_query_button_pane_cp01_ParamLimits

0xe1fe,	// (0x0004b58b) ncimui_query_pane_g1_ParamLimits

0xad42,	// (0x000480cf) input_focus_pane_cp012_ParamLimits

0xe223,	// (0x0004b5b0) ncim_query_entry_pane_t1_ParamLimits

0xda4e,	// (0x0004addb) scroll_pane_cp039_ParamLimits

0xb296,	// (0x00048623) navi_pane_bcale_mc_g1

0xb29e,	// (0x0004862b) navi_pane_bcale_mc_t1

0xe78f,	// (0x0004bb1c) main_sp_fs_email_pane_g1

0xe79b,	// (0x0004bb28) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0004d085) main_sp_fs_email_pane_g

0xe9fa,	// (0x0004bd87) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9fa,	// (0x0004bd87) list_single_cale_mrui_row_pane_g3

0x1f5f,	// (0x0003f2ec) list_single_recal_day_pane_g5_event_pane

0x1f75,	// (0x0003f302) list_single_recal_day_pane_g7

0xf06c,	// (0x0004c3f9) list_recal_day_event_pane_cp01

0xf075,	// (0x0004c402) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0004c40a) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0004c412) list_recal_vselct_pane_cp01

0xd8e1,	// (0x0004ac6e) list_recal_day_event_pane_cp01_g1

0x2125,	// (0x0003f4b2) list_recal_day_event_pane_cp01_t1

0x1f7d,	// (0x0003f30a) list_single_recal_day_pane_t1_ParamLimits

0x1f8f,	// (0x0003f31c) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x0004d1e2) list_single_recal_day_pane_t_ParamLimits

0xa6f0,	// (0x00047a7d) bg_notes_pane_ParamLimits

0xa79f,	// (0x00047b2c) list_notes_pane_ParamLimits

0x2757,	// (0x0003fae4) scroll_pane_cp06_ParamLimits

0xa7c1,	// (0x00047b4e) main_notes_pane_ParamLimits

0xa062,	// (0x000473ef) main_welc_pane

0x9f54,	// (0x000472e1) main_welc_body_pane_ParamLimits

0x9f54,	// (0x000472e1) main_welc_body_pane

0x9f6d,	// (0x000472fa) main_welc_opti_pane_ParamLimits

0x9f6d,	// (0x000472fa) main_welc_opti_pane

0x9fa0,	// (0x0004732d) main_welc_pane_t1_ParamLimits

0x9fa0,	// (0x0004732d) main_welc_pane_t1

0x9fba,	// (0x00047347) main_welc_body_row_pane_ParamLimits

0x9fba,	// (0x00047347) main_welc_body_row_pane

0xdf46,	// (0x0004b2d3) main_welc_opti_row_pane_ParamLimits

0xdf46,	// (0x0004b2d3) main_welc_opti_row_pane

0xf08f,	// (0x0004c41c) main_welc_opti_row_pane_g1

0x9fe3,	// (0x00047370) main_welc_opti_row_pane_t1

0xf097,	// (0x0004c424) main_welc_body_row_pane_t1

0xed99,	// (0x0004c126) popup_notif_wgt_heading_pane

0xedb3,	// (0x0004c140) aid_size_list_notif_wgt_del_ParamLimits

0xedc0,	// (0x0004c14d) list_notif_wgt_row_pane_g1_ParamLimits

0xedcc,	// (0x0004c159) list_notif_wgt_row_pane_g2_ParamLimits

0xede0,	// (0x0004c16d) list_notif_wgt_row_pane_g3_ParamLimits

0xfebc,	// (0x0004d249) list_notif_wgt_row_pane_g_ParamLimits

0xeded,	// (0x0004c17a) list_notif_wgt_row_pane_t1_ParamLimits

0xee03,	// (0x0004c190) list_notif_wgt_row_pane_t2_ParamLimits

0xee15,	// (0x0004c1a2) list_notif_wgt_row_pane_t3_ParamLimits

0xfec3,	// (0x0004d250) list_notif_wgt_row_pane_t_ParamLimits

0x9ab5,	// (0x00046e42) listrow_wgtman_pane_g1_ParamLimits

0x9ac2,	// (0x00046e4f) listrow_wgtman_pane_g2_ParamLimits

0xfeec,	// (0x0004d279) listrow_wgtman_pane_g_ParamLimits

0x201c,	// (0x0003f3a9) listrow_wgtman_pane_t1_ParamLimits

0x2034,	// (0x0003f3c1) listrow_wgtman_pane_t2_ParamLimits

0xfef1,	// (0x0004d27e) listrow_wgtman_pane_t_ParamLimits

0x205a,	// (0x0003f3e7) wait_bar_pane_cp09_ParamLimits

0xa062,	// (0x000473ef) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0004c433) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0004c43b) popup_notif_wgt_heading_pane_t1

0xa062,	// (0x000473ef) main_vids_pane

0xa062,	// (0x000473ef) vids_listscroll_pane

0x9ff2,	// (0x0004737f) scroll_pane_cp040

0xa062,	// (0x000473ef) vids_list_pane

0x9ffd,	// (0x0004738a) vids_list_double_pane_ParamLimits

0x9ffd,	// (0x0004738a) vids_list_double_pane

0xa015,	// (0x000473a2) vids_list_double_pane_g1

0xa01e,	// (0x000473ab) vids_list_double_pane_t1

0xa02e,	// (0x000473bb) vids_list_double_pane_t2

0x0001,

0xff75,	// (0x0004d302) vids_list_double_pane_t

0xad42,	// (0x000480cf) main_ncimui_pane_ParamLimits

0x8b7f,	// (0x00045f0c) main_ncimui_pane_g1_ParamLimits

0x8b8b,	// (0x00045f18) main_ncimui_pane_g2_ParamLimits

0x8b8b,	// (0x00045f18) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0004cf8a) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0004cf8a) main_ncimui_pane_g

0x9f86,	// (0x00047313) main_welc_pane_g1_ParamLimits

0x9f86,	// (0x00047313) main_welc_pane_g1

0x9f92,	// (0x0004731f) main_welc_pane_g2_ParamLimits

0x9f92,	// (0x0004731f) main_welc_pane_g2

0x0001,

0xff70,	// (0x0004d2fd) main_welc_pane_g_ParamLimits

0xff70,	// (0x0004d2fd) main_welc_pane_g

0xa6f0,	// (0x00047a7d) listscroll_mce_pane_ParamLimits

0xb405,	// (0x00048792) wait_bar_pane_cp10

0xc844,	// (0x00049bd1) main_cale_day_pane_ParamLimits

0xc844,	// (0x00049bd1) main_cale_week_pane_ParamLimits

0xa6f0,	// (0x00047a7d) main_messa_pane_ParamLimits

0x67c5,	// (0x00043b52) main_clock2_btn_pane_ParamLimits

0x67c5,	// (0x00043b52) main_clock2_btn_pane

0xd02e,	// (0x0004a3bb) main_clock2_btn_pane_cp01_ParamLimits

0xd02e,	// (0x0004a3bb) main_clock2_btn_pane_cp01

0xe9cb,	// (0x0004bd58) list_cale_mrui_pane_ParamLimits

0xee4b,	// (0x0004c1d8) main_cf0_pane_g2

0x0001,

0xfeca,	// (0x0004d257) main_cf0_pane_g

0x9c5f,	// (0x00046fec) area_left_week_number_pane_ParamLimits

0x9c72,	// (0x00046fff) area_top_day_name_pane_ParamLimits

0x9c80,	// (0x0004700d) frame_month_view_pane_ParamLimits

0xef72,	// (0x0004c2ff) grid_month_view_pane_ParamLimits

0xef80,	// (0x0004c30d) frm_month_g1_ParamLimits

0x9cfe,	// (0x0004708b) frm_month_g2_ParamLimits

0x9d0f,	// (0x0004709c) frm_month_g3_ParamLimits

0x9d20,	// (0x000470ad) frm_month_g4_ParamLimits

0x9d31,	// (0x000470be) frm_month_g5_ParamLimits

0x9d44,	// (0x000470d1) frm_month_g6_ParamLimits

0x9d57,	// (0x000470e4) frm_month_g7_ParamLimits

0xef8d,	// (0x0004c31a) frm_month_g8_ParamLimits

0x9d6a,	// (0x000470f7) frm_month_g9_ParamLimits

0x9d77,	// (0x00047104) frm_month_g10_ParamLimits

0x9d84,	// (0x00047111) frm_month_g11_ParamLimits

0x9d91,	// (0x0004711e) frm_month_g12_ParamLimits

0x9d9e,	// (0x0004712b) frm_month_g13_ParamLimits

0x9dab,	// (0x00047138) frm_month_g14_ParamLimits

0x9dba,	// (0x00047147) frm_month_g15_ParamLimits

0x9dc9,	// (0x00047156) frm_month_g16_ParamLimits

0xff1b,	// (0x0004d2a8) frm_month_g_ParamLimits

0xef9a,	// (0x0004c327) cell_top_day_name_pane_t1_ParamLimits

0x9dd8,	// (0x00047165) cell_area_left_week_number_pane_g1_ParamLimits

0x9de7,	// (0x00047174) cell_area_left_week_number_pane_t1_ParamLimits

0xcea6,	// (0x0004a233) cell_month_view_pane_g1_ParamLimits

0x9dfd,	// (0x0004718a) cell_month_view_pane_t1_ParamLimits

0xa6d2,	// (0x00047a5f) main_clock2_btn_pane_g1

0xf0bc,	// (0x0004c449) main_clock2_btn_pane_t1

0xad42,	// (0x000480cf) listscroll_cmail_pane_ParamLimits

0xe78f,	// (0x0004bb1c) main_sp_fs_email_pane_g1_ParamLimits

0xe79b,	// (0x0004bb28) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0004d085) main_sp_fs_email_pane_g_ParamLimits

0xeb06,	// (0x0004be93) list_recal_day_pane_ParamLimits

0xeb17,	// (0x0004bea4) mian_recal_day_pane_t1

0x1922,	// (0x0003ecaf) list_single_dyc_row_text_pane_t4_ParamLimits

0x1922,	// (0x0003ecaf) list_single_dyc_row_text_pane_t4

0x1959,	// (0x0003ece6) list_single_dyc_row_text_pane_t5_ParamLimits

0x1959,	// (0x0003ece6) list_single_dyc_row_text_pane_t5

0x19cf,	// (0x0003ed5c) list_single_dyc_row_text_pane_t6_ParamLimits

0x19cf,	// (0x0003ed5c) list_single_dyc_row_text_pane_t6

0x4473,	// (0x00041800) aid_mgn_list_cale_time_pane

0xad42,	// (0x000480cf) main_gallery2_pane_ParamLimits

0xd044,	// (0x0004a3d1) main_clock2_pane_cp01_t1

0xd052,	// (0x0004a3df) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0004cb64) main_clock2_pane_cp01_t

0x2b98,	// (0x0003ff25) cale_week_scroll_pane_g16_ParamLimits

0x2b98,	// (0x0003ff25) cale_week_scroll_pane_g16

0xa998,	// (0x00047d25) vorec_slider_pane

0xf056,	// (0x0004c3e3) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
