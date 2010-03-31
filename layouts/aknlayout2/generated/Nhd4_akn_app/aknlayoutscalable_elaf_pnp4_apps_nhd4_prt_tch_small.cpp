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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0003d3d9 };

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
0x2121,	// (0x0003f4fa) Screen

0x212d,	// (0x0003f506) application_window

0x2189,	// (0x0003f562) area_bottom_pane_ParamLimits

0x2189,	// (0x0003f562) area_bottom_pane

0x21e2,	// (0x0003f5bb) area_top_pane_ParamLimits

0x21e2,	// (0x0003f5bb) area_top_pane

0x2246,	// (0x0003f61f) call_video_uplink_pane_ParamLimits

0x2246,	// (0x0003f61f) call_video_uplink_pane

0x2285,	// (0x0003f65e) main_pane_ParamLimits

0x2285,	// (0x0003f65e) main_pane

0xc817,	// (0x00049bf0) context_pane

0x55e5,	// (0x000429be) navi_pane

0x560b,	// (0x000429e4) popup_cale_events_window_ParamLimits

0x560b,	// (0x000429e4) popup_cale_events_window

0xc82a,	// (0x00049c03) popup_mup_playback_window

0x5623,	// (0x000429fc) signal_pane

0xa7a8,	// (0x00047b81) main_browser_pane

0xb3ed,	// (0x000487c6) main_burst_pane

0x547b,	// (0x00042854) main_calc_pane

0xc7fd,	// (0x00049bd6) main_cale_day_pane

0x29b8,	// (0x0003fd91) main_cale_month_pane

0xc7fd,	// (0x00049bd6) main_cale_week_pane

0xb3ed,	// (0x000487c6) main_call_pane

0xa43e,	// (0x00047817) main_call_poc_pane

0xb3ed,	// (0x000487c6) main_camera_pane

0xb3ed,	// (0x000487c6) main_chi_dic_pane

0xb178,	// (0x00048551) main_clock_pane

0xa43e,	// (0x00047817) main_fmradio_pane

0xb3ed,	// (0x000487c6) main_graph_messa_pane

0xa43e,	// (0x00047817) main_help_pane

0xa7a8,	// (0x00047b81) main_im_pane

0xa699,	// (0x00047a72) main_image_pane_ParamLimits

0xa699,	// (0x00047a72) main_image_pane

0xa43e,	// (0x00047817) main_location2_pane

0xb3ed,	// (0x000487c6) main_location_pane

0xa699,	// (0x00047a72) main_messa_pane

0xa43e,	// (0x00047817) main_mp2_pane

0xb3ed,	// (0x000487c6) main_mp_pane

0xa43e,	// (0x00047817) main_msg_pane

0xa43e,	// (0x00047817) main_mup_eq_pane

0xa43e,	// (0x00047817) main_mup_pane

0xa7a8,	// (0x00047b81) main_notes_pane

0xa43e,	// (0x00047817) main_pec_pane

0xa43e,	// (0x00047817) main_phob_pane

0xa43e,	// (0x00047817) main_pinb_pane

0xa43e,	// (0x00047817) main_postcard_pane

0xa43e,	// (0x00047817) main_qdial_pane

0xb3ed,	// (0x000487c6) main_skin_pane

0xa43e,	// (0x00047817) main_smil2_pane

0xb3ed,	// (0x000487c6) main_smil_pane

0xb3ed,	// (0x000487c6) main_video_pane

0xb3ed,	// (0x000487c6) main_video_tele_pane

0xa699,	// (0x00047a72) main_viewer_pane_ParamLimits

0xa699,	// (0x00047a72) main_viewer_pane

0xb3ed,	// (0x000487c6) main_vorec_pane

0x54b9,	// (0x00042892) popup_blid_sat_info_window_ParamLimits

0x54b9,	// (0x00042892) popup_blid_sat_info_window

0x54d9,	// (0x000428b2) popup_dyc_status_message_window_ParamLimits

0x54d9,	// (0x000428b2) popup_dyc_status_message_window

0x54e7,	// (0x000428c0) popup_grid_large_graphic_window_ParamLimits

0x54e7,	// (0x000428c0) popup_grid_large_graphic_window

0x5576,	// (0x0004294f) popup_loc_request_window_ParamLimits

0x5576,	// (0x0004294f) popup_loc_request_window

0x55bd,	// (0x00042996) popup_wml_address_window_ParamLimits

0x55bd,	// (0x00042996) popup_wml_address_window

0x5353,	// (0x0004272c) call_muted_g1

0x5011,	// (0x000423ea) popup_call_audio_conf_window_ParamLimits

0x5011,	// (0x000423ea) popup_call_audio_conf_window

0x5363,	// (0x0004273c) popup_call_audio_first_window_ParamLimits

0x5363,	// (0x0004273c) popup_call_audio_first_window

0x53a3,	// (0x0004277c) popup_call_audio_in_window_ParamLimits

0x53a3,	// (0x0004277c) popup_call_audio_in_window

0x53c7,	// (0x000427a0) popup_call_audio_out_window_ParamLimits

0x53c7,	// (0x000427a0) popup_call_audio_out_window

0x53e9,	// (0x000427c2) popup_call_audio_second_window_ParamLimits

0x53e9,	// (0x000427c2) popup_call_audio_second_window

0x5419,	// (0x000427f2) popup_call_audio_wait_window_ParamLimits

0x5419,	// (0x000427f2) popup_call_audio_wait_window

0x543a,	// (0x00042813) popup_number_entry_window_ParamLimits

0x543a,	// (0x00042813) popup_number_entry_window

0xa02b,	// (0x00047404) bg_popup_call_pane_cp05_ParamLimits

0xa02b,	// (0x00047404) bg_popup_call_pane_cp05

0xa04b,	// (0x00047424) popup_number_entry_window_t1

0xa05e,	// (0x00047437) popup_number_entry_window_t2

0xa070,	// (0x00047449) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0004c4a6) popup_number_entry_window_t

0xa082,	// (0x0004745b) text_title_cp2

0xa095,	// (0x0004746e) bg_popup_call_pane_cp_ParamLimits

0xa095,	// (0x0004746e) bg_popup_call_pane_cp

0xa0a3,	// (0x0004747c) call_thumbnail_pane

0xa0ab,	// (0x00047484) popup_call_audio_in_window_g1_ParamLimits

0xa0ab,	// (0x00047484) popup_call_audio_in_window_g1

0xa0b7,	// (0x00047490) popup_call_audio_in_window_g2_ParamLimits

0xa0b7,	// (0x00047490) popup_call_audio_in_window_g2

0xa0c3,	// (0x0004749c) popup_call_audio_in_window_g3_ParamLimits

0xa0c3,	// (0x0004749c) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0004c4af) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0004c4af) popup_call_audio_in_window_g

0xa0cf,	// (0x000474a8) popup_call_audio_in_window_t1_ParamLimits

0xa0cf,	// (0x000474a8) popup_call_audio_in_window_t1

0xa0eb,	// (0x000474c4) popup_call_audio_in_window_t2_ParamLimits

0xa0eb,	// (0x000474c4) popup_call_audio_in_window_t2

0xa107,	// (0x000474e0) popup_call_audio_in_window_t3_ParamLimits

0xa107,	// (0x000474e0) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0004c4b6) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0004c4b6) popup_call_audio_in_window_t

0xa095,	// (0x0004746e) bg_popup_call_pane_cp01_ParamLimits

0xa095,	// (0x0004746e) bg_popup_call_pane_cp01

0xa0a3,	// (0x0004747c) call_thumbnail_pane_cp02

0xa11a,	// (0x000474f3) call_type_pane_cp022

0xa122,	// (0x000474fb) popup_call_audio_out_window_g1_ParamLimits

0xa122,	// (0x000474fb) popup_call_audio_out_window_g1

0xa134,	// (0x0004750d) popup_call_audio_out_window_g2_ParamLimits

0xa134,	// (0x0004750d) popup_call_audio_out_window_g2

0xa140,	// (0x00047519) popup_call_audio_out_window_g3_ParamLimits

0xa140,	// (0x00047519) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0004c4bd) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0004c4bd) popup_call_audio_out_window_g

0xa152,	// (0x0004752b) popup_call_audio_out_window_t1_ParamLimits

0xa152,	// (0x0004752b) popup_call_audio_out_window_t1

0xa16a,	// (0x00047543) popup_call_audio_out_window_t2_ParamLimits

0xa16a,	// (0x00047543) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0004c4c4) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0004c4c4) popup_call_audio_out_window_t

0xa17f,	// (0x00047558) bg_popup_call_pane_ParamLimits

0xa17f,	// (0x00047558) bg_popup_call_pane

0x2489,	// (0x0003f862) call_thumbnail_pane_cp_ParamLimits

0x2489,	// (0x0003f862) call_thumbnail_pane_cp

0xa203,	// (0x000475dc) call_type_pane_cp01_ParamLimits

0xa203,	// (0x000475dc) call_type_pane_cp01

0xa247,	// (0x00047620) popup_call_audio_first_window_g1_ParamLimits

0xa247,	// (0x00047620) popup_call_audio_first_window_g1

0xa293,	// (0x0004766c) popup_call_audio_first_window_g2_ParamLimits

0xa293,	// (0x0004766c) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0004c4c9) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0004c4c9) popup_call_audio_first_window_g

0xa2d7,	// (0x000476b0) popup_call_audio_first_window_t1_ParamLimits

0xa2d7,	// (0x000476b0) popup_call_audio_first_window_t1

0xa383,	// (0x0004775c) popup_call_audio_first_window_t4_ParamLimits

0xa383,	// (0x0004775c) popup_call_audio_first_window_t4

0xa40f,	// (0x000477e8) popup_call_audio_first_window_t5_ParamLimits

0xa40f,	// (0x000477e8) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0004c4ce) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0004c4ce) popup_call_audio_first_window_t

0xa43e,	// (0x00047817) bg_popup_call_pane_cp02

0xa448,	// (0x00047821) call_type_pane_cp023

0xa450,	// (0x00047829) popup_call_audio_wait_window_g1

0xa458,	// (0x00047831) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0004c4d5) popup_call_audio_wait_window_g

0xa460,	// (0x00047839) popup_call_audio_wait_window_t3

0xa46e,	// (0x00047847) bg_popup_call_pane_cp03_ParamLimits

0xa46e,	// (0x00047847) bg_popup_call_pane_cp03

0xa4ce,	// (0x000478a7) call_thumbnail_pane_cp011_ParamLimits

0xa4ce,	// (0x000478a7) call_thumbnail_pane_cp011

0xa4da,	// (0x000478b3) call_type_pane_cp034_ParamLimits

0xa4da,	// (0x000478b3) call_type_pane_cp034

0xa516,	// (0x000478ef) popup_call_audio_second_window_g1_ParamLimits

0xa516,	// (0x000478ef) popup_call_audio_second_window_g1

0xa552,	// (0x0004792b) popup_call_audio_second_window_g2_ParamLimits

0xa552,	// (0x0004792b) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0004c4da) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0004c4da) popup_call_audio_second_window_g

0xa58e,	// (0x00047967) popup_call_audio_second_window_t1_ParamLimits

0xa58e,	// (0x00047967) popup_call_audio_second_window_t1

0xa60f,	// (0x000479e8) popup_call_audio_second_window_t2_ParamLimits

0xa60f,	// (0x000479e8) popup_call_audio_second_window_t2

0xa645,	// (0x00047a1e) popup_call_audio_second_window_t3_ParamLimits

0xa645,	// (0x00047a1e) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0004c4df) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0004c4df) popup_call_audio_second_window_t

0xa43e,	// (0x00047817) bg_popup_call_pane_cp04

0xa67b,	// (0x00047a54) list_conf_pane

0xa683,	// (0x00047a5c) popup_call_audio_conf_window_t1

0xa691,	// (0x00047a6a) call_thumbnail_pane_g1

0xa699,	// (0x00047a72) bg_pinb_pane_ParamLimits

0xa699,	// (0x00047a72) bg_pinb_pane

0xa6d2,	// (0x00047aab) find_pinb_pane

0xa6db,	// (0x00047ab4) listscroll_pinb_pane_ParamLimits

0xa6db,	// (0x00047ab4) listscroll_pinb_pane

0xa6ea,	// (0x00047ac3) pinb_bg_pane_g1

0x24ad,	// (0x0003f886) pinb_bg_pane_g2

0x24b9,	// (0x0003f892) pinb_bg_pane_g3

0x24c5,	// (0x0003f89e) pinb_bg_pane_g4

0x24d1,	// (0x0003f8aa) pinb_bg_pane_g5

0x24dd,	// (0x0003f8b6) pinb_bg_pane_g6

0x24e8,	// (0x0003f8c1) pinb_bg_pane_g7

0x24f3,	// (0x0003f8cc) pinb_bg_pane_g8

0x24fe,	// (0x0003f8d7) pinb_bg_pane_g9

0x2508,	// (0x0003f8e1) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0004c4e6) pinb_bg_pane_g

0x2525,	// (0x0003f8fe) grid_pinb_pane

0x2530,	// (0x0003f909) list_pinb_pane

0x253b,	// (0x0003f914) scroll_pane_cp01_ParamLimits

0x253b,	// (0x0003f914) scroll_pane_cp01

0xa6f4,	// (0x00047acd) find_pinb_pane_g1_ParamLimits

0xa6f4,	// (0x00047acd) find_pinb_pane_g1

0xa70c,	// (0x00047ae5) find_pinb_pane_t1

0xa71e,	// (0x00047af7) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0004c500) find_pinb_pane_t

0xa733,	// (0x00047b0c) input_focus_pane_cp01_ParamLimits

0xa733,	// (0x00047b0c) input_focus_pane_cp01

0x254d,	// (0x0003f926) cell_pinb_pane_ParamLimits

0x254d,	// (0x0003f926) cell_pinb_pane

0xa73f,	// (0x00047b18) cell_pinb_pane_g1_ParamLimits

0xa73f,	// (0x00047b18) cell_pinb_pane_g1

0xa752,	// (0x00047b2b) cell_pinb_pane_g2_ParamLimits

0xa752,	// (0x00047b2b) cell_pinb_pane_g2

0xa75e,	// (0x00047b37) cell_pinb_pane_g3_ParamLimits

0xa75e,	// (0x00047b37) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0004c505) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0004c505) cell_pinb_pane_g

0xa43e,	// (0x00047817) grid_highlight_pane_cp01

0x257c,	// (0x0003f955) list_pinb_item_pane_ParamLimits

0x257c,	// (0x0003f955) list_pinb_item_pane

0xa43e,	// (0x00047817) list_highlight_pane_cp02

0x25a6,	// (0x0003f97f) list_pinb_item_pane_g1_ParamLimits

0x25a6,	// (0x0003f97f) list_pinb_item_pane_g1

0x25b3,	// (0x0003f98c) list_pinb_item_pane_g2_ParamLimits

0x25b3,	// (0x0003f98c) list_pinb_item_pane_g2

0x25bf,	// (0x0003f998) list_pinb_item_pane_g3_ParamLimits

0x25bf,	// (0x0003f998) list_pinb_item_pane_g3

0x25d0,	// (0x0003f9a9) list_pinb_item_pane_g4_ParamLimits

0x25d0,	// (0x0003f9a9) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0004c50c) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0004c50c) list_pinb_item_pane_g

0x25dc,	// (0x0003f9b5) list_pinb_item_pane_t1_ParamLimits

0x25dc,	// (0x0003f9b5) list_pinb_item_pane_t1

0x260d,	// (0x0003f9e6) calc_display_pane

0x262b,	// (0x0003fa04) calc_paper_pane

0x2647,	// (0x0003fa20) grid_calc_pane

0xa43e,	// (0x00047817) bg_list_pane_cp01

0x2673,	// (0x0003fa4c) clock_g1

0x267b,	// (0x0003fa54) clock_g2

0x0001,

0xf13c,	// (0x0004c515) clock_g

0x2685,	// (0x0003fa5e) clock_t1_ParamLimits

0x2685,	// (0x0003fa5e) clock_t1

0x269a,	// (0x0003fa73) clock_t2_ParamLimits

0x269a,	// (0x0003fa73) clock_t2

0x26ac,	// (0x0003fa85) clock_t3_ParamLimits

0x26ac,	// (0x0003fa85) clock_t3

0x26be,	// (0x0003fa97) clock_t4_ParamLimits

0x26be,	// (0x0003fa97) clock_t4

0x26d0,	// (0x0003faa9) clock_t5_ParamLimits

0x26d0,	// (0x0003faa9) clock_t5

0x26e5,	// (0x0003fabe) clock_t6_ParamLimits

0x26e5,	// (0x0003fabe) clock_t6

0x26f7,	// (0x0003fad0) clock_t7_ParamLimits

0x26f7,	// (0x0003fad0) clock_t7

0x2709,	// (0x0003fae2) clock_t8_ParamLimits

0x2709,	// (0x0003fae2) clock_t8

0x271f,	// (0x0003faf8) clock_t9_ParamLimits

0x271f,	// (0x0003faf8) clock_t9

0x0008,

0xf141,	// (0x0004c51a) clock_t_ParamLimits

0xf141,	// (0x0004c51a) clock_t

0xa76a,	// (0x00047b43) popup_clock_analogue_window_cp02

0xa76a,	// (0x00047b43) popup_clock_digital_window_cp01

0xa772,	// (0x00047b4b) listscroll_help_pane

0xa43e,	// (0x00047817) phob_pre_status_pane

0xa77c,	// (0x00047b55) grid_qdial_pane

0xa699,	// (0x00047a72) listscroll_mce_pane

0xa699,	// (0x00047a72) bg_notes_pane

0xa786,	// (0x00047b5f) list_notes_pane

0x2735,	// (0x0003fb0e) scroll_pane_cp06

0xa794,	// (0x00047b6d) bg_calc_paper_pane

0x2744,	// (0x0003fb1d) list_calc_pane

0xa7a8,	// (0x00047b81) bg_calc_display_pane

0x275e,	// (0x0003fb37) calc_display_pane_t1

0x2773,	// (0x0003fb4c) calc_display_pane_t2

0x2788,	// (0x0003fb61) calc_display_pane_t3

0x0002,

0xf154,	// (0x0004c52d) calc_display_pane_t

0x279a,	// (0x0003fb73) cell_calc_pane_ParamLimits

0x279a,	// (0x0003fb73) cell_calc_pane

0xa7b4,	// (0x00047b8d) bg_calc_paper_pane_g1

0xa7c0,	// (0x00047b99) bg_calc_paper_pane_g2

0xa7cc,	// (0x00047ba5) bg_calc_paper_pane_g3

0xa7d8,	// (0x00047bb1) bg_calc_paper_pane_g4

0xa7e4,	// (0x00047bbd) bg_calc_paper_pane_g5

0x27c7,	// (0x0003fba0) bg_calc_paper_pane_g6

0x27d8,	// (0x0003fbb1) bg_calc_paper_pane_g7

0x27e9,	// (0x0003fbc2) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0004c534) bg_calc_paper_pane_g

0x27fa,	// (0x0003fbd3) calc_bg_paper_pane_g9

0x280b,	// (0x0003fbe4) list_calc_item_pane_ParamLimits

0x280b,	// (0x0003fbe4) list_calc_item_pane

0xa7f0,	// (0x00047bc9) list_calc_item_pane_g1

0x283f,	// (0x0003fc18) list_calc_item_pane_t1_ParamLimits

0x283f,	// (0x0003fc18) list_calc_item_pane_t1

0x2851,	// (0x0003fc2a) list_calc_item_pane_t2_ParamLimits

0x2851,	// (0x0003fc2a) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0004c545) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0004c545) list_calc_item_pane_t

0xa7fd,	// (0x00047bd6) cell_calc_pane_g1

0xa807,	// (0x00047be0) grid_highlight_pane_cp02

0xa829,	// (0x00047c02) bg_calc_display_pane_g1

0x2881,	// (0x0003fc5a) bg_calc_display_pane_g2

0xa832,	// (0x00047c0b) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0004c54f) bg_calc_display_pane_g

0x288b,	// (0x0003fc64) cell_qdial_pane_ParamLimits

0x288b,	// (0x0003fc64) cell_qdial_pane

0x289f,	// (0x0003fc78) cell_qdial_pane_g1_ParamLimits

0x289f,	// (0x0003fc78) cell_qdial_pane_g1

0x28ac,	// (0x0003fc85) cell_qdial_pane_g2_ParamLimits

0x28ac,	// (0x0003fc85) cell_qdial_pane_g2

0xa83b,	// (0x00047c14) cell_qdial_pane_g3_ParamLimits

0xa83b,	// (0x00047c14) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0004c556) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0004c556) cell_qdial_pane_g

0x28c9,	// (0x0003fca2) cell_qdial_pane_t1_ParamLimits

0x28c9,	// (0x0003fca2) cell_qdial_pane_t1

0x28e1,	// (0x0003fcba) cell_qdial_pane_t2_ParamLimits

0x28e1,	// (0x0003fcba) cell_qdial_pane_t2

0x28f4,	// (0x0003fccd) cell_qdial_pane_t3_ParamLimits

0x28f4,	// (0x0003fccd) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0004c55f) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0004c55f) cell_qdial_pane_t

0xa43e,	// (0x00047817) grid_highlight_pane_cp04

0xa847,	// (0x00047c20) thumbnail_qdial_pane_ParamLimits

0xa847,	// (0x00047c20) thumbnail_qdial_pane

0xa8a3,	// (0x00047c7c) list_help_pane

0xa8ac,	// (0x00047c85) scroll_pane_cp02

0x2907,	// (0x0003fce0) help_list_pane_t1_ParamLimits

0x2907,	// (0x0003fce0) help_list_pane_t1

0x2941,	// (0x0003fd1a) bg_notes_pane_g2

0x2949,	// (0x0003fd22) bg_notes_pane_g3

0x2951,	// (0x0003fd2a) notes_bg_pane_g1

0x2959,	// (0x0003fd32) notes_bg_pane_g4

0x2961,	// (0x0003fd3a) notes_bg_pane_g5

0x2969,	// (0x0003fd42) notes_bg_pane_g6

0x2971,	// (0x0003fd4a) notes_bg_pane_g7

0x2979,	// (0x0003fd52) notes_bg_pane_g8

0x2981,	// (0x0003fd5a) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0004c57d) notes_bg_pane_g

0x2989,	// (0x0003fd62) list_notes_text_pane_ParamLimits

0x2989,	// (0x0003fd62) list_notes_text_pane

0xa8b5,	// (0x00047c8e) list_notes_text_pane_g1

0x0d0f,	// (0x0003e0e8) list_notes_text_pane_t1

0x29b8,	// (0x0003fd91) listscroll_cale_week_pane

0x29dd,	// (0x0003fdb6) bg_cale_heading_pane

0xa8d8,	// (0x00047cb1) bg_cale_pane_cp01

0x29ff,	// (0x0003fdd8) cale_week_corner_pane

0x2a19,	// (0x0003fdf2) cale_week_day_heading_pane

0x2a3b,	// (0x0003fe14) cale_week_scroll_pane_g1

0x2a58,	// (0x0003fe31) cale_week_scroll_pane_g2

0x2a6b,	// (0x0003fe44) cale_week_scroll_pane_g3

0x2a7e,	// (0x0003fe57) cale_week_scroll_pane_g4

0x2a91,	// (0x0003fe6a) cale_week_scroll_pane_g5

0x2aa4,	// (0x0003fe7d) cale_week_scroll_pane_g6

0x2ab7,	// (0x0003fe90) cale_week_scroll_pane_g7

0x2aca,	// (0x0003fea3) cale_week_scroll_pane_g8

0x2adf,	// (0x0003feb8) cale_week_scroll_pane_g9

0x2af2,	// (0x0003fecb) cale_week_scroll_pane_g10

0x2b05,	// (0x0003fede) cale_week_scroll_pane_g11

0x2b18,	// (0x0003fef1) cale_week_scroll_pane_g12

0x2b2f,	// (0x0003ff08) cale_week_scroll_pane_g13

0x2b4a,	// (0x0003ff23) cale_week_scroll_pane_g14

0x2b65,	// (0x0003ff3e) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0004c58c) cale_week_scroll_pane_g

0x2b80,	// (0x0003ff59) cale_week_time_pane

0x2b95,	// (0x0003ff6e) grid_cale_week_pane

0xa908,	// (0x00047ce1) scroll_pane_cp08

0x2bb6,	// (0x0003ff8f) cell_cale_week_pane_ParamLimits

0x2bb6,	// (0x0003ff8f) cell_cale_week_pane

0x2c1a,	// (0x0003fff3) cale_week_day_heading_pane_t1

0x2c55,	// (0x0004002e) cale_week_day_heading_pane_t2

0x2c90,	// (0x00040069) cale_week_day_heading_pane_t3

0x2ccb,	// (0x000400a4) cale_week_day_heading_pane_t4

0x2d06,	// (0x000400df) cale_week_day_heading_pane_t5

0x2d41,	// (0x0004011a) cale_week_day_heading_pane_t6

0x2d7c,	// (0x00040155) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0004c5ab) cale_week_day_heading_pane_t

0xa925,	// (0x00047cfe) bg_cale_side_pane

0x2db7,	// (0x00040190) cale_week_time_pane_t1

0x2dd1,	// (0x000401aa) cale_week_time_pane_t2

0x2deb,	// (0x000401c4) cale_week_time_pane_t3

0x2e05,	// (0x000401de) cale_week_time_pane_t4

0x2e1f,	// (0x000401f8) cale_week_time_pane_t5

0x2e3b,	// (0x00040214) cale_week_time_pane_t6

0x2e5d,	// (0x00040236) cale_week_time_pane_t7

0x2e81,	// (0x0004025a) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0004c5ba) cale_week_time_pane_t

0x2ea7,	// (0x00040280) cell_cale_week_pane_g2

0x2eba,	// (0x00040293) cell_cale_week_pane_g3_ParamLimits

0x2eba,	// (0x00040293) cell_cale_week_pane_g3

0xa933,	// (0x00047d0c) grid_highlight_pane_cp07

0xa93b,	// (0x00047d14) listscroll_gms_pane

0xa945,	// (0x00047d1e) grid_gms_pane

0xa94e,	// (0x00047d27) listscroll_gms_pane_g1

0xa956,	// (0x00047d2f) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0004c5cb) listscroll_gms_pane_g

0x2ed2,	// (0x000402ab) scroll_pane_cp010

0x2edd,	// (0x000402b6) cell_gms_pane_ParamLimits

0x2edd,	// (0x000402b6) cell_gms_pane

0x2eed,	// (0x000402c6) cell_gms_pane_g1

0xa95e,	// (0x00047d37) cell_gms_pane_g2

0xa8b5,	// (0x00047c8e) cell_gms_pane_g3

0xa966,	// (0x00047d3f) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0004c5d0) cell_gms_pane_g

0xa96f,	// (0x00047d48) grid_highlight_pane_cp09

0x52fb,	// (0x000426d4) phob_pre_status_pane_g1

0x5303,	// (0x000426dc) phob_pre_status_pane_g2

0x530b,	// (0x000426e4) phob_pre_status_pane_g3

0x5313,	// (0x000426ec) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0004c9bf) phob_pre_status_pane_g

0x5323,	// (0x000426fc) phob_pre_status_pane_t1

0x5333,	// (0x0004270c) phob_pre_status_pane_t2

0x5343,	// (0x0004271c) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0004c9ca) phob_pre_status_pane_t

0xa43e,	// (0x00047817) bg_list_pane_cp05

0x2efd,	// (0x000402d6) grid_vorec_pane

0x2f07,	// (0x000402e0) vorec_t1

0x2f15,	// (0x000402ee) vorec_t2

0x2f23,	// (0x000402fc) vorec_t3

0x2f31,	// (0x0004030a) vorec_t4

0x2f3f,	// (0x00040318) vorec_t5

0x2f4d,	// (0x00040326) vorec_t6

0x0006,

0xf200,	// (0x0004c5d9) vorec_t

0x2f69,	// (0x00040342) wait_bar_pane_cp01

0x2f71,	// (0x0004034a) cell_vorec_pane_ParamLimits

0x2f71,	// (0x0004034a) cell_vorec_pane

0x2f84,	// (0x0004035d) cell_vorec_pane_g1

0xa43e,	// (0x00047817) grid_highlight_pane_cp05

0x2f9e,	// (0x00040377) cams_zoom_pane

0x2faa,	// (0x00040383) image_vga_pane

0x2fb9,	// (0x00040392) main_camera_pane_g1

0x2fc7,	// (0x000403a0) main_camera_pane_g2

0x2fd3,	// (0x000403ac) main_camera_pane_g3

0x2fdf,	// (0x000403b8) main_camera_pane_g4

0x2feb,	// (0x000403c4) main_camera_pane_g5

0x2ff7,	// (0x000403d0) main_camera_pane_g6

0x3003,	// (0x000403dc) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0004c5e8) main_camera_pane_g

0x300f,	// (0x000403e8) main_camera_pane_t1

0x3021,	// (0x000403fa) main_camera_pane_t2

0x0001,

0xf220,	// (0x0004c5f9) main_camera_pane_t

0x3042,	// (0x0004041b) cams_zoom_pane_cp_ParamLimits

0x3042,	// (0x0004041b) cams_zoom_pane_cp

0x3066,	// (0x0004043f) image_cif_pane_ParamLimits

0x3066,	// (0x0004043f) image_cif_pane

0x3084,	// (0x0004045d) image_subqcif_pane

0x308c,	// (0x00040465) main_video_pane_g1_ParamLimits

0x308c,	// (0x00040465) main_video_pane_g1

0x30ac,	// (0x00040485) main_video_pane_g2_ParamLimits

0x30ac,	// (0x00040485) main_video_pane_g2

0x30dc,	// (0x000404b5) main_video_pane_g3_ParamLimits

0x30dc,	// (0x000404b5) main_video_pane_g3

0x3105,	// (0x000404de) main_video_pane_g4_ParamLimits

0x3105,	// (0x000404de) main_video_pane_g4

0x312e,	// (0x00040507) main_video_pane_g5_ParamLimits

0x312e,	// (0x00040507) main_video_pane_g5

0xa983,	// (0x00047d5c) main_video_pane_g6_ParamLimits

0xa983,	// (0x00047d5c) main_video_pane_g6

0x0006,

0xf225,	// (0x0004c5fe) main_video_pane_g_ParamLimits

0xf225,	// (0x0004c5fe) main_video_pane_g

0x3150,	// (0x00040529) main_video_pane_t1_ParamLimits

0x3150,	// (0x00040529) main_video_pane_t1

0xa99d,	// (0x00047d76) cams_zoom_pane_g1

0xa9a6,	// (0x00047d7f) cams_zoom_pane_g2

0xa9af,	// (0x00047d88) cams_zoom_pane_g3

0xa9b8,	// (0x00047d91) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0004c60d) cams_zoom_pane_g

0x319a,	// (0x00040573) grid_cams_pane

0x31a8,	// (0x00040581) linegrid_cams_pane

0x31b6,	// (0x0004058f) cell_cams_pane_ParamLimits

0x31b6,	// (0x0004058f) cell_cams_pane

0xa9c1,	// (0x00047d9a) cams_burst_image_pane

0xa9c9,	// (0x00047da2) cell_cams_pane_g1

0xa43e,	// (0x00047817) grid_highlight_pane_cp03

0xa7fd,	// (0x00047bd6) mp_bg_pane_g1

0xa43e,	// (0x00047817) bg_list_pane_cp03

0xc722,	// (0x00049afb) bg_mp_pane

0xc72a,	// (0x00049b03) grid_mp_pane

0xc732,	// (0x00049b0b) media_player_g1

0xc73a,	// (0x00049b13) media_player_t1

0xc748,	// (0x00049b21) media_player_t2

0xc756,	// (0x00049b2f) media_player_t3

0xc764,	// (0x00049b3d) media_player_t4

0xc772,	// (0x00049b4b) media_player_t5

0xc780,	// (0x00049b59) media_player_t6

0xc78e,	// (0x00049b67) media_player_t7

0x0006,

0xf5d0,	// (0x0004c9a9) media_player_t

0xc79c,	// (0x00049b75) wait_bar_pane_cp02

0xf5b5,	// (0x0004c98e) main_usb_pane_t

0x52f2,	// (0x000426cb) cell_mp_pane

0xa7fd,	// (0x00047bd6) cell_mp_pane_g1

0xa43e,	// (0x00047817) grid_highlight_pane_cp06

0xa9d1,	// (0x00047daa) grid_skin_colour_pane

0xa9d9,	// (0x00047db2) list_highlight_pane_cp03

0x31c9,	// (0x000405a2) skin_g1

0xa9e1,	// (0x00047dba) skin_t1

0xa9f0,	// (0x00047dc9) skin_t2

0x0001,

0xf269,	// (0x0004c642) skin_t

0x31d3,	// (0x000405ac) cell_skin_colour_pane_ParamLimits

0x31d3,	// (0x000405ac) cell_skin_colour_pane

0xa9fe,	// (0x00047dd7) cell_skin_colour_pane_g1

0x3257,	// (0x00040630) call_video_g1_ParamLimits

0x3257,	// (0x00040630) call_video_g1

0x3267,	// (0x00040640) call_video_g2_ParamLimits

0x3267,	// (0x00040640) call_video_g2

0x0001,

0xf26e,	// (0x0004c647) call_video_g_ParamLimits

0xf26e,	// (0x0004c647) call_video_g

0x32c1,	// (0x0004069a) call_video_uplink_pane_cp1_ParamLimits

0x32c1,	// (0x0004069a) call_video_uplink_pane_cp1

0xaa10,	// (0x00047de9) call_video_uplink_pane_cp2

0x338d,	// (0x00040766) video_down_crop_pane_ParamLimits

0x338d,	// (0x00040766) video_down_crop_pane

0x347f,	// (0x00040858) video_down_pane_ParamLimits

0x347f,	// (0x00040858) video_down_pane

0xaa18,	// (0x00047df1) video_down_subqcif_pane_ParamLimits

0xaa18,	// (0x00047df1) video_down_subqcif_pane

0xaa30,	// (0x00047e09) video_down_subqcif_pane_cp_ParamLimits

0xaa30,	// (0x00047e09) video_down_subqcif_pane_cp

0xaa56,	// (0x00047e2f) im_reading_pane_ParamLimits

0xaa56,	// (0x00047e2f) im_reading_pane

0x35a1,	// (0x0004097a) im_writing_pane_ParamLimits

0x35a1,	// (0x0004097a) im_writing_pane

0x35bf,	// (0x00040998) im_reading_pane_t1

0xaa70,	// (0x00047e49) list_im_pane

0xaa81,	// (0x00047e5a) scroll_pane_cp07

0x361a,	// (0x000409f3) im_writing_pane_t1_ParamLimits

0x361a,	// (0x000409f3) im_writing_pane_t1

0xaa9a,	// (0x00047e73) im_writing_pane_t2_ParamLimits

0xaa9a,	// (0x00047e73) im_writing_pane_t2

0x0001,

0xf278,	// (0x0004c651) im_writing_pane_t_ParamLimits

0xf278,	// (0x0004c651) im_writing_pane_t

0xa43e,	// (0x00047817) input_focus_pane_cp04

0xa43e,	// (0x00047817) input_focus_pane_cp05

0x362c,	// (0x00040a05) list_im_single_pane_ParamLimits

0x362c,	// (0x00040a05) list_im_single_pane

0x3654,	// (0x00040a2d) list_single_im_pane_t1

0x52b6,	// (0x0004268f) blid_accuracy_pane

0x52be,	// (0x00042697) blid_compass_pane

0x52c8,	// (0x000426a1) main_location_t1

0x52d6,	// (0x000426af) main_location_t2

0x52e4,	// (0x000426bd) main_location_t3

0x0002,

0xf5df,	// (0x0004c9b8) main_location_t

0xa43e,	// (0x00047817) aid_levels_location

0xa7fd,	// (0x00047bd6) blid_accuracy_pane_g1

0xa7fd,	// (0x00047bd6) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0004c6b3) blid_accuracy_pane_g

0xaae2,	// (0x00047ebb) wml_content_pane

0xab20,	// (0x00047ef9) wml_button_pane_ParamLimits

0xab20,	// (0x00047ef9) wml_button_pane

0x3663,	// (0x00040a3c) wml_list_single_large_pane_ParamLimits

0x3663,	// (0x00040a3c) wml_list_single_large_pane

0x3694,	// (0x00040a6d) wml_list_single_medium_pane_ParamLimits

0x3694,	// (0x00040a6d) wml_list_single_medium_pane

0x36cc,	// (0x00040aa5) wml_list_single_small_pane_ParamLimits

0x36cc,	// (0x00040aa5) wml_list_single_small_pane

0xab34,	// (0x00047f0d) wml_selection_box_pane_ParamLimits

0xab34,	// (0x00047f0d) wml_selection_box_pane

0xab47,	// (0x00047f20) wml_list_single_pane_t1

0xab56,	// (0x00047f2f) wml_list_single_medium_pane_t1

0xab65,	// (0x00047f3e) wml_list_single_large_pane_t1

0xab74,	// (0x00047f4d) input_focus_pane_cp02_ParamLimits

0xab74,	// (0x00047f4d) input_focus_pane_cp02

0xab87,	// (0x00047f60) wml_selection_box_pane_g1

0xab90,	// (0x00047f69) wml_selection_box_pane_t1_ParamLimits

0xab90,	// (0x00047f69) wml_selection_box_pane_t1

0xa699,	// (0x00047a72) bg_wml_button_pane_ParamLimits

0xa699,	// (0x00047a72) bg_wml_button_pane

0xaba8,	// (0x00047f81) wml_button_pane_g1

0xabb0,	// (0x00047f89) wml_button_pane_t1

0xaba8,	// (0x00047f81) wml_button_bg_pane_g1

0xabc0,	// (0x00047f99) wml_button_bg_pane_g2

0xabc8,	// (0x00047fa1) wml_button_bg_pane_g3

0xabd0,	// (0x00047fa9) wml_button_bg_pane_g4

0xabd8,	// (0x00047fb1) wml_button_bg_pane_g5

0xabe0,	// (0x00047fb9) wml_button_bg_pane_g6

0xabe8,	// (0x00047fc1) wml_button_bg_pane_g7

0xabf0,	// (0x00047fc9) wml_button_bg_pane_g8

0xabf8,	// (0x00047fd1) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0004c656) wml_button_bg_pane_g

0x370d,	// (0x00040ae6) bg_list_pane_cp02

0xac00,	// (0x00047fd9) mce_header_pane_ParamLimits

0xac00,	// (0x00047fd9) mce_header_pane

0xac16,	// (0x00047fef) mce_icon_pane

0xac16,	// (0x00047fef) mce_image_pane

0xac1f,	// (0x00047ff8) mce_text_pane_ParamLimits

0xac1f,	// (0x00047ff8) mce_text_pane

0x3717,	// (0x00040af0) scroll_pane_cp03

0xab18,	// (0x00047ef1) scroll_pane_cp04

0xac32,	// (0x0004800b) scroll_pane_cp05_ParamLimits

0xac32,	// (0x0004800b) scroll_pane_cp05

0x3721,	// (0x00040afa) mce_header_field_pane_ParamLimits

0x3721,	// (0x00040afa) mce_header_field_pane

0x3741,	// (0x00040b1a) mce_header_field_pane_2_ParamLimits

0x3741,	// (0x00040b1a) mce_header_field_pane_2

0x3757,	// (0x00040b30) mce_header_field_pane_3

0x375f,	// (0x00040b38) list_single_mce_message_pane_ParamLimits

0x375f,	// (0x00040b38) list_single_mce_message_pane

0x3791,	// (0x00040b6a) list_single_mce_smart_pane_ParamLimits

0x3791,	// (0x00040b6a) list_single_mce_smart_pane

0xac3e,	// (0x00048017) input_focus_pane_cp03

0xac47,	// (0x00048020) list_header_data_pane

0x37ce,	// (0x00040ba7) mce_header_field_pane_t1

0x37de,	// (0x00040bb7) list_single_mce_header_pane_ParamLimits

0x37de,	// (0x00040bb7) list_single_mce_header_pane

0xac4f,	// (0x00048028) list_single_mce_header_pane_t1

0xac5e,	// (0x00048037) list_single_mce_message_pane_g1

0xac66,	// (0x0004803f) list_single_mce_message_pane_t1

0x3835,	// (0x00040c0e) bg_cale_heading_pane_cp01_ParamLimits

0x3835,	// (0x00040c0e) bg_cale_heading_pane_cp01

0xac74,	// (0x0004804d) bg_cale_pane_cp02_ParamLimits

0xac74,	// (0x0004804d) bg_cale_pane_cp02

0x3878,	// (0x00040c51) cale_month_corner_pane

0x3892,	// (0x00040c6b) cale_month_day_heading_pane_ParamLimits

0x3892,	// (0x00040c6b) cale_month_day_heading_pane

0x38ed,	// (0x00040cc6) cale_month_pane_g1_ParamLimits

0x38ed,	// (0x00040cc6) cale_month_pane_g1

0x3925,	// (0x00040cfe) cale_month_pane_g2_ParamLimits

0x3925,	// (0x00040cfe) cale_month_pane_g2

0x3950,	// (0x00040d29) cale_month_pane_g3_ParamLimits

0x3950,	// (0x00040d29) cale_month_pane_g3

0x39a0,	// (0x00040d79) cale_month_pane_g4_ParamLimits

0x39a0,	// (0x00040d79) cale_month_pane_g4

0x39f0,	// (0x00040dc9) cale_month_pane_g5_ParamLimits

0x39f0,	// (0x00040dc9) cale_month_pane_g5

0x3a40,	// (0x00040e19) cale_month_pane_g6_ParamLimits

0x3a40,	// (0x00040e19) cale_month_pane_g6

0x3a90,	// (0x00040e69) cale_month_pane_g7_ParamLimits

0x3a90,	// (0x00040e69) cale_month_pane_g7

0x3af8,	// (0x00040ed1) cale_month_pane_g8_ParamLimits

0x3af8,	// (0x00040ed1) cale_month_pane_g8

0x3b60,	// (0x00040f39) cale_month_pane_g9_ParamLimits

0x3b60,	// (0x00040f39) cale_month_pane_g9

0x3bbe,	// (0x00040f97) cale_month_pane_g10_ParamLimits

0x3bbe,	// (0x00040f97) cale_month_pane_g10

0x3c1c,	// (0x00040ff5) cale_month_pane_g11_ParamLimits

0x3c1c,	// (0x00040ff5) cale_month_pane_g11

0x3c70,	// (0x00041049) cale_month_pane_g12_ParamLimits

0x3c70,	// (0x00041049) cale_month_pane_g12

0x3cc6,	// (0x0004109f) cale_month_pane_g13_ParamLimits

0x3cc6,	// (0x0004109f) cale_month_pane_g13

0x000c,

0xf290,	// (0x0004c669) cale_month_pane_g_ParamLimits

0xf290,	// (0x0004c669) cale_month_pane_g

0x3d1c,	// (0x000410f5) cale_month_week_pane

0x3d31,	// (0x0004110a) grid_cale_month_pane_ParamLimits

0x3d31,	// (0x0004110a) grid_cale_month_pane

0x3d83,	// (0x0004115c) cale_month_day_heading_pane_t1

0x3e09,	// (0x000411e2) cale_month_day_heading_pane_t2

0x3e9a,	// (0x00041273) cale_month_day_heading_pane_t3

0x3f2b,	// (0x00041304) cale_month_day_heading_pane_t4

0x3fbc,	// (0x00041395) cale_month_day_heading_pane_t5

0x404d,	// (0x00041426) cale_month_day_heading_pane_t6

0x40ea,	// (0x000414c3) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0004c684) cale_month_day_heading_pane_t

0xa925,	// (0x00047cfe) bg_cale_side_pane_cp01

0x4193,	// (0x0004156c) cale_month_week_pane_t1

0x41ac,	// (0x00041585) cale_month_week_pane_t2

0x41c5,	// (0x0004159e) cale_month_week_pane_t3

0x41de,	// (0x000415b7) cale_month_week_pane_t4

0x41fb,	// (0x000415d4) cale_month_week_pane_t5

0x421c,	// (0x000415f5) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0004c693) cale_month_week_pane_t

0x423d,	// (0x00041616) cell_cale_month_pane_ParamLimits

0x423d,	// (0x00041616) cell_cale_month_pane

0x4363,	// (0x0004173c) cell_cale_month_pane_g1

0x436f,	// (0x00041748) cell_cale_month_pane_t1_ParamLimits

0x436f,	// (0x00041748) cell_cale_month_pane_t1

0xa933,	// (0x00047d0c) grid_highlight_pane_cp08

0xa7fd,	// (0x00047bd6) main_smil_g1

0x438f,	// (0x00041768) smil_status_pane

0xacb3,	// (0x0004808c) smil_text_pane

0xc642,	// (0x00049a1b) bg_popup_call3_rect_pane_g8

0xc64a,	// (0x00049a23) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0004c94c) bg_popup_call3_rect_pane_g

0xc891,	// (0x00049c6a) smil_status_volume_pane_g1

0xacbd,	// (0x00048096) smil_status_pane_t1

0x56de,	// (0x00042ab7) volume_smil_pane

0xacd4,	// (0x000480ad) list_smil_text_pane

0x43a2,	// (0x0004177b) scroll_pane_cp011

0x43ad,	// (0x00041786) smil_text_list_pane_t1_ParamLimits

0x43ad,	// (0x00041786) smil_text_list_pane_t1

0x4441,	// (0x0004181a) aid_volume_smil_ParamLimits

0x4441,	// (0x0004181a) aid_volume_smil

0xa7fd,	// (0x00047bd6) smil_volume_pane_g1

0xa7fd,	// (0x00047bd6) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0004c6b3) smil_volume_pane_g

0x29b8,	// (0x0003fd91) listscroll_cale_day_pane

0xacde,	// (0x000480b7) bg_cale_pane

0xacf6,	// (0x000480cf) list_cale_pane

0xad19,	// (0x000480f2) scroll_pane_cp09

0xad2a,	// (0x00048103) cale_bg_pane_g1

0xad32,	// (0x0004810b) cale_bg_pane_g2

0xad3a,	// (0x00048113) cale_bg_pane_g3

0xad42,	// (0x0004811b) cale_bg_pane_g4

0xad4a,	// (0x00048123) cale_bg_pane_g5

0xad52,	// (0x0004812b) cale_bg_pane_g6

0xad5a,	// (0x00048133) cale_bg_pane_g7

0xad70,	// (0x00048149) cale_bg_pane_g8

0xad78,	// (0x00048151) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0004c6b8) cale_bg_pane_g

0x4463,	// (0x0004183c) list_cale_time_pane_ParamLimits

0x4463,	// (0x0004183c) list_cale_time_pane

0xad88,	// (0x00048161) list_cale_time_pane_g1_ParamLimits

0xad88,	// (0x00048161) list_cale_time_pane_g1

0xad94,	// (0x0004816d) list_cale_time_pane_g2_ParamLimits

0xad94,	// (0x0004816d) list_cale_time_pane_g2

0x448f,	// (0x00041868) list_cale_time_pane_g3_ParamLimits

0x448f,	// (0x00041868) list_cale_time_pane_g3

0x449d,	// (0x00041876) list_cale_time_pane_g4_ParamLimits

0x449d,	// (0x00041876) list_cale_time_pane_g4

0x44ab,	// (0x00041884) list_cale_time_pane_g5_ParamLimits

0x44ab,	// (0x00041884) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0004c6cb) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0004c6cb) list_cale_time_pane_g

0xadae,	// (0x00048187) list_cale_time_pane_t1_ParamLimits

0xadae,	// (0x00048187) list_cale_time_pane_t1

0xadd6,	// (0x000481af) list_cale_time_pane_t2_ParamLimits

0xadd6,	// (0x000481af) list_cale_time_pane_t2

0x474d,	// (0x00041b26) aid_blid_cardinal_pane

0x478f,	// (0x00041b68) compass_pane_t4

0xadfe,	// (0x000481d7) list_cale_time_pane_t4_ParamLimits

0xadfe,	// (0x000481d7) list_cale_time_pane_t4

0x479d,	// (0x00041b76) compass_pane_t5

0x47ad,	// (0x00041b86) compass_pane_t6

0x47bb,	// (0x00041b94) compass_pane_t7

0xb2af,	// (0x00048688) navi_pane_cc_t1

0xb4ae,	// (0x00048887) aid_phob_thumbnail_center_pane

0x4daf,	// (0x00042188) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0004c6d8) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0004c6d8) list_cale_time_pane_t

0xa095,	// (0x0004746e) bg_popup_window_pane_cp02_ParamLimits

0xa095,	// (0x0004746e) bg_popup_window_pane_cp02

0xae26,	// (0x000481ff) heading_pane_cp01_ParamLimits

0xae26,	// (0x000481ff) heading_pane_cp01

0xae32,	// (0x0004820b) loc_req_pane_ParamLimits

0xae32,	// (0x0004820b) loc_req_pane

0xae42,	// (0x0004821b) loc_type_pane_ParamLimits

0xae42,	// (0x0004821b) loc_type_pane

0xae54,	// (0x0004822d) loc_type_pane_t1_ParamLimits

0xae54,	// (0x0004822d) loc_type_pane_t1

0xae66,	// (0x0004823f) loc_type_pane_t2_ParamLimits

0xae66,	// (0x0004823f) loc_type_pane_t2

0xae78,	// (0x00048251) loc_type_pane_t3_ParamLimits

0xae78,	// (0x00048251) loc_type_pane_t3

0x0002,

0xf306,	// (0x0004c6df) loc_type_pane_t_ParamLimits

0xf306,	// (0x0004c6df) loc_type_pane_t

0xae8a,	// (0x00048263) list_loc_req_pane

0xae94,	// (0x0004826d) scroll_pane_cp012

0x0e57,	// (0x0003e230) list_single_loc_request_popup_menu_pane_ParamLimits

0x0e57,	// (0x0003e230) list_single_loc_request_popup_menu_pane

0xae9f,	// (0x00048278) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae9f,	// (0x00048278) list_single_loc_request_popup_menu_pane_g1

0xaeab,	// (0x00048284) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaeab,	// (0x00048284) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0004c6e6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0004c6e6) list_single_loc_request_popup_menu_pane_g

0xaeb7,	// (0x00048290) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaeb7,	// (0x00048290) list_single_loc_request_popup_menu_pane_t1

0x44b9,	// (0x00041892) bg_popup_window_pane_cp03_ParamLimits

0x44b9,	// (0x00041892) bg_popup_window_pane_cp03

0x44c7,	// (0x000418a0) heading_loc_req_pane_ParamLimits

0x44c7,	// (0x000418a0) heading_loc_req_pane

0x44d3,	// (0x000418ac) popup_dyc_status_message_window_g1_ParamLimits

0x44d3,	// (0x000418ac) popup_dyc_status_message_window_g1

0x44df,	// (0x000418b8) popup_dyc_status_message_window_t1_ParamLimits

0x44df,	// (0x000418b8) popup_dyc_status_message_window_t1

0x44f1,	// (0x000418ca) popup_dyc_status_message_window_t2_ParamLimits

0x44f1,	// (0x000418ca) popup_dyc_status_message_window_t2

0x4503,	// (0x000418dc) popup_dyc_status_message_window_t3_ParamLimits

0x4503,	// (0x000418dc) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0004c6eb) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0004c6eb) popup_dyc_status_message_window_t

0xa43e,	// (0x00047817) bg_heading_pane_cp01

0xaecd,	// (0x000482a6) heading_loc_req_pane_g1

0xaed5,	// (0x000482ae) heading_loc_req_pane_g2

0xaedd,	// (0x000482b6) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0004c6f2) heading_loc_req_pane_g

0xaee5,	// (0x000482be) heading_loc_req_pane_t1

0xaef4,	// (0x000482cd) bg_popup_sub_pane_cp01_ParamLimits

0xaef4,	// (0x000482cd) bg_popup_sub_pane_cp01

0xaf02,	// (0x000482db) popup_cale_events_window_g1_ParamLimits

0xaf02,	// (0x000482db) popup_cale_events_window_g1

0xaf22,	// (0x000482fb) popup_cale_events_window_g2_ParamLimits

0xaf22,	// (0x000482fb) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0004c726) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0004c726) popup_cale_events_window_g

0xaf42,	// (0x0004831b) popup_cale_events_window_t1_ParamLimits

0xaf42,	// (0x0004831b) popup_cale_events_window_t1

0xaf54,	// (0x0004832d) popup_cale_events_window_t2_ParamLimits

0xaf54,	// (0x0004832d) popup_cale_events_window_t2

0xaf92,	// (0x0004836b) popup_cale_events_window_t3_ParamLimits

0xaf92,	// (0x0004836b) popup_cale_events_window_t3

0xafcc,	// (0x000483a5) popup_cale_events_window_t4_ParamLimits

0xafcc,	// (0x000483a5) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0004c72b) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0004c72b) popup_cale_events_window_t

0x452d,	// (0x00041906) call_type_pane

0xb413,	// (0x000487ec) popup_call_status_window_g1

0x4539,	// (0x00041912) popup_call_status_window_g2

0x4545,	// (0x0004191e) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0004c734) popup_call_status_window_g

0xb002,	// (0x000483db) call_type_pane_g1

0xb00b,	// (0x000483e4) call_type_pane_g2

0x0001,

0xf362,	// (0x0004c73b) call_type_pane_g

0xa43e,	// (0x00047817) bg_popup_sub_pane_cp02

0xb014,	// (0x000483ed) listscroll_popup_wml_pane

0xb01c,	// (0x000483f5) list_wml_pane

0xb026,	// (0x000483ff) scroll_pane_cp013

0xb031,	// (0x0004840a) list_single_graphic_popup_wml_pane_ParamLimits

0xb031,	// (0x0004840a) list_single_graphic_popup_wml_pane

0xa7fd,	// (0x00047bd6) list_single_graphic_popup_wml_pane_g1

0xb045,	// (0x0004841e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0004c740) list_single_graphic_popup_wml_pane_g

0xb04d,	// (0x00048426) list_single_graphic_popup_wml_pane_t1

0xb063,	// (0x0004843c) aid_call_pane

0xa691,	// (0x00047a6a) popup_clock_analogue_window_g1

0xa691,	// (0x00047a6a) popup_clock_analogue_window_g2

0x4551,	// (0x0004192a) popup_clock_analogue_window_g3

0x4551,	// (0x0004192a) popup_clock_analogue_window_g4

0xa7fd,	// (0x00047bd6) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0004c745) popup_clock_analogue_window_g

0x4559,	// (0x00041932) popup_clock_analogue_window_t1

0x4567,	// (0x00041940) clock_digital_number_pane_ParamLimits

0x4567,	// (0x00041940) clock_digital_number_pane

0x4573,	// (0x0004194c) clock_digital_number_pane_cp02_ParamLimits

0x4573,	// (0x0004194c) clock_digital_number_pane_cp02

0x457f,	// (0x00041958) clock_digital_number_pane_cp03_ParamLimits

0x457f,	// (0x00041958) clock_digital_number_pane_cp03

0x458b,	// (0x00041964) clock_digital_number_pane_cp04_ParamLimits

0x458b,	// (0x00041964) clock_digital_number_pane_cp04

0x459b,	// (0x00041974) clock_digital_separator_pane_ParamLimits

0x459b,	// (0x00041974) clock_digital_separator_pane

0x45a7,	// (0x00041980) popup_clock_digital_window_t1

0xa7fd,	// (0x00047bd6) clock_digital_number_pane_g1

0xa7fd,	// (0x00047bd6) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0004c6b3) clock_digital_number_pane_g

0xa7fd,	// (0x00047bd6) clock_digital_separator_pane_g1

0xa7fd,	// (0x00047bd6) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0004c6b3) clock_digital_separator_pane_g

0xa43e,	// (0x00047817) bg_popup_window_pane_cp04

0xb06b,	// (0x00048444) heading_pane_cp03

0xb073,	// (0x0004844c) listscroll_popup_gms_pane

0xb07b,	// (0x00048454) grid_large_graphic_popup_pane

0xb085,	// (0x0004845e) listscroll_popup_gms_pane_g1

0xb08d,	// (0x00048466) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0004c750) listscroll_popup_gms_pane_g

0xab18,	// (0x00047ef1) scroll_pane_cp014

0xb095,	// (0x0004846e) cell_large_graphic_popup_pane_ParamLimits

0xb095,	// (0x0004846e) cell_large_graphic_popup_pane

0xb0ad,	// (0x00048486) cell_large_graphic_popup_pane_g1_ParamLimits

0xb0ad,	// (0x00048486) cell_large_graphic_popup_pane_g1

0xb0b9,	// (0x00048492) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0b9,	// (0x00048492) cell_large_graphic_popup_pane_g2

0xb0c5,	// (0x0004849e) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0c5,	// (0x0004849e) cell_large_graphic_popup_pane_g3

0xb0d2,	// (0x000484ab) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0d2,	// (0x000484ab) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0004c755) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0004c755) cell_large_graphic_popup_pane_g

0xb0e2,	// (0x000484bb) grid_highlight_pane_cp010

0xa7fd,	// (0x00047bd6) bg_popup_call_pane_g1

0xb0ec,	// (0x000484c5) list_single_graphic_popup_conf_pane_ParamLimits

0xb0ec,	// (0x000484c5) list_single_graphic_popup_conf_pane

0xb0ff,	// (0x000484d8) list_highlight_pane_cp01

0xb108,	// (0x000484e1) list_single_graphic_popup_conf_pane_g1

0xb110,	// (0x000484e9) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0004c75e) list_single_graphic_popup_conf_pane_g

0xb118,	// (0x000484f1) list_single_graphic_popup_conf_pane_t1

0xb126,	// (0x000484ff) linegrid_cams_pane_g1

0x45c4,	// (0x0004199d) linegrid_cams_pane_g2

0xa8b5,	// (0x00047c8e) linegrid_cams_pane_g3

0xb12f,	// (0x00048508) linegrid_cams_pane_g4

0x45cd,	// (0x000419a6) linegrid_cams_pane_g5

0x45d6,	// (0x000419af) linegrid_cams_pane_g6

0xa966,	// (0x00047d3f) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0004c763) linegrid_cams_pane_g

0xb138,	// (0x00048511) popup_clock_analogue_window

0xb138,	// (0x00048511) popup_clock_digital_window

0xa43e,	// (0x00047817) popup_phob_thumbnail_window

0xa7fd,	// (0x00047bd6) call_video_uplink_pane_g1

0xb141,	// (0x0004851a) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0004c772) call_video_uplink_pane_g

0xa933,	// (0x00047d0c) video_uplink_pane

0xb149,	// (0x00048522) mce_image_pane_g1

0x45df,	// (0x000419b8) mce_image_pane_g2

0x45e7,	// (0x000419c0) mce_image_pane_g3

0x45ef,	// (0x000419c8) mce_image_pane_g4

0x45f7,	// (0x000419d0) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0004c777) mce_image_pane_g

0xb153,	// (0x0004852c) control_top_pane_stacon_cp01_ParamLimits

0xb153,	// (0x0004852c) control_top_pane_stacon_cp01

0xb167,	// (0x00048540) uni_indicator_pane_stacon_cp01_ParamLimits

0xb167,	// (0x00048540) uni_indicator_pane_stacon_cp01

0xb178,	// (0x00048551) bg_popup_sub_pane_cp03

0x45ff,	// (0x000419d8) chi_dic_find_pane

0x4607,	// (0x000419e0) listscroll_chi_dic_pane

0x4610,	// (0x000419e9) main_pane_chidic_g1

0xb182,	// (0x0004855b) chi_dic_find_pane_t1

0xb190,	// (0x00048569) find_chidic_pane

0xb199,	// (0x00048572) chi_dic_list_pane_ParamLimits

0xb199,	// (0x00048572) chi_dic_list_pane

0xb1aa,	// (0x00048583) scroll_pane_cp020

0xb1b2,	// (0x0004858b) find_chidic_pane_t1

0xa43e,	// (0x00047817) input_focus_pane_cp06

0x4623,	// (0x000419fc) list_chi_dic_pane_ParamLimits

0x4623,	// (0x000419fc) list_chi_dic_pane

0x4640,	// (0x00041a19) list_chi_dic_pane_t1_ParamLimits

0x4640,	// (0x00041a19) list_chi_dic_pane_t1

0xa43e,	// (0x00047817) list_highlight_pane_cp020

0xb1c1,	// (0x0004859a) bg_cale_heading_pane_g1

0x4653,	// (0x00041a2c) bg_cale_heading_pane_g2

0x465b,	// (0x00041a34) bg_cale_heading_pane_g3

0x4663,	// (0x00041a3c) bg_cale_heading_pane_g4

0x466d,	// (0x00041a46) bg_cale_heading_pane_g5

0x4677,	// (0x00041a50) bg_cale_heading_pane_g6

0x467f,	// (0x00041a58) bg_cale_heading_pane_g7

0x4687,	// (0x00041a60) bg_cale_heading_pane_g8

0x4691,	// (0x00041a6a) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0004c782) bg_cale_heading_pane_g

0xb1c1,	// (0x0004859a) bg_cale_side_pane_g1

0x469b,	// (0x00041a74) bg_cale_side_pane_g2

0x46a5,	// (0x00041a7e) bg_cale_side_pane_g3

0x46af,	// (0x00041a88) bg_cale_side_pane_g4

0x46b9,	// (0x00041a92) bg_cale_side_pane_g5

0x46c3,	// (0x00041a9c) bg_cale_side_pane_g6

0x46cd,	// (0x00041aa6) bg_cale_side_pane_g7

0x46d7,	// (0x00041ab0) bg_cale_side_pane_g8

0x46df,	// (0x00041ab8) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0004c795) bg_cale_side_pane_g

0x46e7,	// (0x00041ac0) popup_call_status_window_ParamLimits

0x46e7,	// (0x00041ac0) popup_call_status_window

0xb1c9,	// (0x000485a2) stacon_top_pane

0xb1d1,	// (0x000485aa) status_pane_ParamLimits

0xb1d1,	// (0x000485aa) status_pane

0xb1e6,	// (0x000485bf) status_small_pane

0xb1ee,	// (0x000485c7) control_pane

0xa43e,	// (0x00047817) stacon_bottom_pane

0xb1f6,	// (0x000485cf) list_single_mce_smart_pane_t1_ParamLimits

0xb1f6,	// (0x000485cf) list_single_mce_smart_pane_t1

0xb209,	// (0x000485e2) list_single_mce_smart_pane_t2_ParamLimits

0xb209,	// (0x000485e2) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0004c7a8) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0004c7a8) list_single_mce_smart_pane_t

0x46f3,	// (0x00041acc) compass_pane

0x46ff,	// (0x00041ad8) main_location2_pane_t1

0x4713,	// (0x00041aec) main_location2_pane_t2

0x4727,	// (0x00041b00) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0004c7ad) main_location2_pane_t

0xb228,	// (0x00048601) compass_pane_g1_ParamLimits

0xb228,	// (0x00048601) compass_pane_g1

0x4771,	// (0x00041b4a) compass_pane_t1

0x4780,	// (0x00041b59) compass_pane_t2

0x0005,

0xf3dd,	// (0x0004c7b6) compass_pane_t

0x47cb,	// (0x00041ba4) text_secondary_cp61

0xb2a6,	// (0x0004867f) navi_pane_cams_g5

0xb322,	// (0x000486fb) navi_pane_im_t1

0xb330,	// (0x00048709) navi_pane_mp_g1_ParamLimits

0xb330,	// (0x00048709) navi_pane_mp_g1

0xb344,	// (0x0004871d) navi_pane_mp_g2_ParamLimits

0xb344,	// (0x0004871d) navi_pane_mp_g2

0xb350,	// (0x00048729) navi_pane_mp_g3_ParamLimits

0xb350,	// (0x00048729) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0004c7ca) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0004c7ca) navi_pane_mp_g

0xb35c,	// (0x00048735) navi_pane_mp_t1

0xb36a,	// (0x00048743) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0004c7d1) navi_pane_mp_t

0xb3d5,	// (0x000487ae) navi_pane_vt_g1

0xb35c,	// (0x00048735) navi_pane_vt_t1

0xb3dd,	// (0x000487b6) navi_slider_pane

0xb3ed,	// (0x000487c6) zooming_pane

0xb3f5,	// (0x000487ce) navi_slider_pane_g1

0x4806,	// (0x00041bdf) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0004c7d8) navi_slider_pane_g

0xb433,	// (0x0004880c) aid_levels_zoom

0xb43b,	// (0x00048814) zooming_pane_g1

0xb443,	// (0x0004881c) zooming_pane_g2

0xb443,	// (0x0004881c) zooming_pane_g3

0x0002,

0xf40e,	// (0x0004c7e7) zooming_pane_g

0xb44b,	// (0x00048824) level_10_zoom

0xb454,	// (0x0004882d) level_11_zoom

0xb45d,	// (0x00048836) level_1_zoom

0xb466,	// (0x0004883f) level_2_zoom

0xb46f,	// (0x00048848) level_3_zoom

0xb478,	// (0x00048851) level_4_zoom

0xb481,	// (0x0004885a) level_5_zoom

0xb48a,	// (0x00048863) level_6_zoom

0xb493,	// (0x0004886c) level_7_zoom

0xb49c,	// (0x00048875) level_8_zoom

0xb4a5,	// (0x0004887e) level_9_zoom

0xb4b6,	// (0x0004888f) popup_phob_thumbnail_window_g1

0xb4be,	// (0x00048897) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0004c7ee) popup_phob_thumbnail_window_g

0xc7a4,	// (0x00049b7d) level_1_location

0xc7ac,	// (0x00049b85) level_2_location

0xc7b4,	// (0x00049b8d) level_3_location

0xc7bc,	// (0x00049b95) level_4_location

0xb3ed,	// (0x000487c6) level_5_location

0x4818,	// (0x00041bf1) mce_icon_pane_g1

0x4820,	// (0x00041bf9) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0004c7f3) mce_icon_pane_g

0x4828,	// (0x00041c01) main_mup_pane_g1_ParamLimits

0x4828,	// (0x00041c01) main_mup_pane_g1

0x4840,	// (0x00041c19) main_mup_pane_g2_ParamLimits

0x4840,	// (0x00041c19) main_mup_pane_g2

0x485c,	// (0x00041c35) main_mup_pane_g3_ParamLimits

0x485c,	// (0x00041c35) main_mup_pane_g3

0x4878,	// (0x00041c51) main_mup_pane_g4_ParamLimits

0x4878,	// (0x00041c51) main_mup_pane_g4

0x4894,	// (0x00041c6d) main_mup_pane_g5_ParamLimits

0x4894,	// (0x00041c6d) main_mup_pane_g5

0x48b5,	// (0x00041c8e) main_mup_pane_g6_ParamLimits

0x48b5,	// (0x00041c8e) main_mup_pane_g6

0x48d1,	// (0x00041caa) main_mup_pane_g7_ParamLimits

0x48d1,	// (0x00041caa) main_mup_pane_g7

0x48ed,	// (0x00041cc6) main_mup_pane_g8_ParamLimits

0x48ed,	// (0x00041cc6) main_mup_pane_g8

0x4909,	// (0x00041ce2) main_mup_pane_g9_ParamLimits

0x4909,	// (0x00041ce2) main_mup_pane_g9

0x4928,	// (0x00041d01) main_mup_pane_g10_ParamLimits

0x4928,	// (0x00041d01) main_mup_pane_g10

0x4947,	// (0x00041d20) main_mup_pane_g11_ParamLimits

0x4947,	// (0x00041d20) main_mup_pane_g11

0x495f,	// (0x00041d38) main_mup_pane_g12_ParamLimits

0x495f,	// (0x00041d38) main_mup_pane_g12

0x496d,	// (0x00041d46) main_mup_pane_g13_ParamLimits

0x496d,	// (0x00041d46) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0004c7f8) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0004c7f8) main_mup_pane_g

0x4983,	// (0x00041d5c) main_mup_pane_t1_ParamLimits

0x4983,	// (0x00041d5c) main_mup_pane_t1

0x49a0,	// (0x00041d79) main_mup_pane_t2_ParamLimits

0x49a0,	// (0x00041d79) main_mup_pane_t2

0x49ba,	// (0x00041d93) main_mup_pane_t3_ParamLimits

0x49ba,	// (0x00041d93) main_mup_pane_t3

0x49d4,	// (0x00041dad) main_mup_pane_t4_ParamLimits

0x49d4,	// (0x00041dad) main_mup_pane_t4

0x49e6,	// (0x00041dbf) main_mup_pane_t5_ParamLimits

0x49e6,	// (0x00041dbf) main_mup_pane_t5

0x49f8,	// (0x00041dd1) main_mup_pane_t6_ParamLimits

0x49f8,	// (0x00041dd1) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0004c813) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0004c813) main_mup_pane_t

0x4a0e,	// (0x00041de7) mup_progress_pane_ParamLimits

0x4a0e,	// (0x00041de7) mup_progress_pane

0x4a1a,	// (0x00041df3) mup_visualizer_pane_ParamLimits

0x4a1a,	// (0x00041df3) mup_visualizer_pane

0x4a58,	// (0x00041e31) mup_volume_pane_ParamLimits

0x4a58,	// (0x00041e31) mup_volume_pane

0xb413,	// (0x000487ec) mup_visualizer_pane_g1_ParamLimits

0xb413,	// (0x000487ec) mup_visualizer_pane_g1

0xb413,	// (0x000487ec) mup_visualizer_pane_g2_ParamLimits

0xb413,	// (0x000487ec) mup_visualizer_pane_g2

0xb228,	// (0x00048601) mup_visualizer_pane_g3_ParamLimits

0xb228,	// (0x00048601) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0004c820) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0004c820) mup_visualizer_pane_g

0xa7fd,	// (0x00047bd6) mup_volume_pane_g1

0xb4ce,	// (0x000488a7) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0004c827) mup_volume_pane_g

0xa7fd,	// (0x00047bd6) mup_progress_pane_g1

0xb4d7,	// (0x000488b0) mup_progress_pane_g2

0xb4e0,	// (0x000488b9) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0004c82c) mup_progress_pane_g

0xa43e,	// (0x00047817) bg_popup_window_pane_cp05

0xb4e9,	// (0x000488c2) heading_pane_cp02_ParamLimits

0xb4e9,	// (0x000488c2) heading_pane_cp02

0xb503,	// (0x000488dc) list_popup_blid_pane

0xb50b,	// (0x000488e4) list_blid_sat_info_pane_ParamLimits

0xb50b,	// (0x000488e4) list_blid_sat_info_pane

0xb51e,	// (0x000488f7) list_blid_sat_info_pane_g1

0xb526,	// (0x000488ff) list_blid_sat_info_pane_t1

0x4b63,	// (0x00041f3c) mup_equalizer_pane_ParamLimits

0x4b63,	// (0x00041f3c) mup_equalizer_pane

0x4b84,	// (0x00041f5d) mup_equalizer_pane_cp1_ParamLimits

0x4b84,	// (0x00041f5d) mup_equalizer_pane_cp1

0x4ba5,	// (0x00041f7e) mup_equalizer_pane_cp2_ParamLimits

0x4ba5,	// (0x00041f7e) mup_equalizer_pane_cp2

0x4bc6,	// (0x00041f9f) mup_equalizer_pane_cp3_ParamLimits

0x4bc6,	// (0x00041f9f) mup_equalizer_pane_cp3

0x4be7,	// (0x00041fc0) mup_equalizer_pane_cp4_ParamLimits

0x4be7,	// (0x00041fc0) mup_equalizer_pane_cp4

0x4c08,	// (0x00041fe1) mup_equalizer_pane_cp5

0x4c1e,	// (0x00041ff7) mup_equalizer_pane_cp6

0x4c36,	// (0x0004200f) mup_equalizer_pane_cp7

0xc6c2,	// (0x00049a9b) bg_popup_call_poc_act_pane_g9

0xc6ca,	// (0x00049aa3) bg_popup_call_poc_act_pane_g10

0xc6d2,	// (0x00049aab) bg_popup_call_poc_act_pane_g11

0x000a,

0xa699,	// (0x00047a72) mup_scale_pane

0xa7fd,	// (0x00047bd6) mup_scale_pane_g1

0xb534,	// (0x0004890d) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0004c848) mup_scale_pane_g

0xb558,	// (0x00048931) msg_data_pane

0xb560,	// (0x00048939) scroll_pane_cp017

0x0f41,	// (0x0003e31a) bg_list_pane_cp04_ParamLimits

0x0f41,	// (0x0003e31a) bg_list_pane_cp04

0xb568,	// (0x00048941) msg_data_pane_g1

0x4c60,	// (0x00042039) msg_data_pane_g2

0x45e7,	// (0x000419c0) msg_data_pane_g3

0x4c68,	// (0x00042041) msg_data_pane_g4

0x4c70,	// (0x00042049) msg_data_pane_g5

0x4c78,	// (0x00042051) msg_data_pane_g6

0x4c80,	// (0x00042059) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0004c857) msg_data_pane_g

0x0f61,	// (0x0003e33a) msg_text_pane_ParamLimits

0x0f61,	// (0x0003e33a) msg_text_pane

0x4c88,	// (0x00042061) qrid_highlight_pane_cp011_ParamLimits

0x4c88,	// (0x00042061) qrid_highlight_pane_cp011

0xa43e,	// (0x00047817) msg_body_pane

0xa43e,	// (0x00047817) msg_header_pane

0xb570,	// (0x00048949) input_focus_pane_cp07

0x0fbc,	// (0x0003e395) msg_header_pane_t1_ParamLimits

0x0fbc,	// (0x0003e395) msg_header_pane_t1

0x0fce,	// (0x0003e3a7) msg_header_pane_t2_ParamLimits

0x0fce,	// (0x0003e3a7) msg_header_pane_t2

0x0001,

0xf492,	// (0x0004c86b) msg_header_pane_t_ParamLimits

0xf492,	// (0x0004c86b) msg_header_pane_t

0xb585,	// (0x0004895e) msg_body_pane_g1

0x0fe0,	// (0x0003e3b9) msg_body_pane_t1_ParamLimits

0x0fe0,	// (0x0003e3b9) msg_body_pane_t1

0x1011,	// (0x0003e3ea) msg_body_pane_t2_ParamLimits

0x1011,	// (0x0003e3ea) msg_body_pane_t2

0x1023,	// (0x0003e3fc) msg_body_pane_t3_ParamLimits

0x1023,	// (0x0003e3fc) msg_body_pane_t3

0x0002,

0xf497,	// (0x0004c870) msg_body_pane_t_ParamLimits

0xf497,	// (0x0004c870) msg_body_pane_t

0x4cff,	// (0x000420d8) main_viewer_pane_g1_ParamLimits

0x4cff,	// (0x000420d8) main_viewer_pane_g1

0x4d0b,	// (0x000420e4) main_viewer_pane_g2_ParamLimits

0x4d0b,	// (0x000420e4) main_viewer_pane_g2

0x4d17,	// (0x000420f0) main_viewer_pane_g3_ParamLimits

0x4d17,	// (0x000420f0) main_viewer_pane_g3

0x4d28,	// (0x00042101) main_viewer_pane_g4_ParamLimits

0x4d28,	// (0x00042101) main_viewer_pane_g4

0x4d39,	// (0x00042112) main_viewer_pane_g5_ParamLimits

0x4d39,	// (0x00042112) main_viewer_pane_g5

0x4d39,	// (0x00042112) main_viewer_pane_g7_ParamLimits

0x4d39,	// (0x00042112) main_viewer_pane_g7

0x4d4b,	// (0x00042124) main_viewer_pane_g8_ParamLimits

0x4d4b,	// (0x00042124) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0004c880) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0004c880) main_viewer_pane_g

0xb58d,	// (0x00048966) viewer_content_pane_ParamLimits

0xb58d,	// (0x00048966) viewer_content_pane

0x4d83,	// (0x0004215c) main_postcard_pane_g1_ParamLimits

0x4d83,	// (0x0004215c) main_postcard_pane_g1

0x4d91,	// (0x0004216a) main_postcard_pane_g2_ParamLimits

0x4d91,	// (0x0004216a) main_postcard_pane_g2

0x4d9f,	// (0x00042178) main_postcard_pane_g3_ParamLimits

0x4d9f,	// (0x00042178) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0004c891) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0004c891) main_postcard_pane_g

0x4daf,	// (0x00042188) main_postcard_pane_g4

0xc8a4,	// (0x00049c7d) smil_status_volume_pane_g2

0x4ddb,	// (0x000421b4) postcard_pane_ParamLimits

0x4ddb,	// (0x000421b4) postcard_pane

0xb413,	// (0x000487ec) postcard_pane_g1_ParamLimits

0xb413,	// (0x000487ec) postcard_pane_g1

0x4e0d,	// (0x000421e6) postcard_pane_g2_ParamLimits

0x4e0d,	// (0x000421e6) postcard_pane_g2

0x4e19,	// (0x000421f2) postcard_pane_g3_ParamLimits

0x4e19,	// (0x000421f2) postcard_pane_g3

0xb59b,	// (0x00048974) postcard_pane_g4_ParamLimits

0xb59b,	// (0x00048974) postcard_pane_g4

0x4e25,	// (0x000421fe) postcard_pane_g5_ParamLimits

0x4e25,	// (0x000421fe) postcard_pane_g5

0x4e31,	// (0x0004220a) postcard_pane_g6_ParamLimits

0x4e31,	// (0x0004220a) postcard_pane_g6

0xb5a9,	// (0x00048982) postcard_pane_g7_ParamLimits

0xb5a9,	// (0x00048982) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0004c89e) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0004c89e) postcard_pane_g

0x4e3d,	// (0x00042216) main_mp2_pane_g1_ParamLimits

0x4e3d,	// (0x00042216) main_mp2_pane_g1

0x4e49,	// (0x00042222) main_mp2_pane_g2_ParamLimits

0x4e49,	// (0x00042222) main_mp2_pane_g2

0x4e55,	// (0x0004222e) main_mp2_pane_g3_ParamLimits

0x4e55,	// (0x0004222e) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0004c8ad) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0004c8ad) main_mp2_pane_g

0x4e61,	// (0x0004223a) main_mp2_pane_t1_ParamLimits

0x4e61,	// (0x0004223a) main_mp2_pane_t1

0x4e78,	// (0x00042251) main_mp2_pane_t2_ParamLimits

0x4e78,	// (0x00042251) main_mp2_pane_t2

0x4e8a,	// (0x00042263) main_mp2_pane_t3_ParamLimits

0x4e8a,	// (0x00042263) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0004c8b4) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0004c8b4) main_mp2_pane_t

0xb5b7,	// (0x00048990) pec_content_pane_ParamLimits

0xb5b7,	// (0x00048990) pec_content_pane

0xab18,	// (0x00047ef1) scroll_pane_cp015

0xb5c9,	// (0x000489a2) pec_attribute_pane_ParamLimits

0xb5c9,	// (0x000489a2) pec_attribute_pane

0x4e9c,	// (0x00042275) pec_content_pane_g1_ParamLimits

0x4e9c,	// (0x00042275) pec_content_pane_g1

0xb5d9,	// (0x000489b2) pec_content_pane_t1_ParamLimits

0xb5d9,	// (0x000489b2) pec_content_pane_t1

0xb5eb,	// (0x000489c4) pec_content_pane_t2_ParamLimits

0xb5eb,	// (0x000489c4) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0004c8bb) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0004c8bb) pec_content_pane_t

0x4ea8,	// (0x00042281) list_single_graphic_pane_cp01_ParamLimits

0x4ea8,	// (0x00042281) list_single_graphic_pane_cp01

0xa699,	// (0x00047a72) bg_popup_sub_pane_cp04

0xb5fd,	// (0x000489d6) popup_mup_playback_window_g1

0xb609,	// (0x000489e2) popup_mup_playback_window_t1

0xb61e,	// (0x000489f7) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0004c8c0) popup_mup_playback_window_t

0xb655,	// (0x00048a2e) main_image_pane_g1_ParamLimits

0xb655,	// (0x00048a2e) main_image_pane_g1

0xb698,	// (0x00048a71) scroll_pane_cp018_ParamLimits

0xb698,	// (0x00048a71) scroll_pane_cp018

0xb6b0,	// (0x00048a89) scroll_pane_cp016_ParamLimits

0xb6b0,	// (0x00048a89) scroll_pane_cp016

0x4f48,	// (0x00042321) smil2_image_pane_ParamLimits

0x4f48,	// (0x00042321) smil2_image_pane

0x4f7c,	// (0x00042355) smil2_root_pane_ParamLimits

0x4f7c,	// (0x00042355) smil2_root_pane

0x4fa8,	// (0x00042381) smil2_text_pane_ParamLimits

0x4fa8,	// (0x00042381) smil2_text_pane

0xa43e,	// (0x00047817) bg_list_pane_cp06

0xb6ec,	// (0x00048ac5) grid_radio_pane

0xa43e,	// (0x00047817) bg_popup_window_pane_cp06

0xb6f4,	// (0x00048acd) main_fmradio_pane_t1

0xb06b,	// (0x00048444) heading_pane_cp04

0xb702,	// (0x00048adb) main_fmradio_pane_t2

0xc6da,	// (0x00049ab3) popup_cale_lunar_info_window_g1

0xb710,	// (0x00048ae9) main_fmradio_pane_t3

0xc6e2,	// (0x00049abb) popup_cale_lunar_info_window_g2

0xb71e,	// (0x00048af7) main_fmradio_pane_t4

0x0001,

0xb72c,	// (0x00048b05) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0004c99b) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0004c8d5) main_fmradio_pane_t

0xb73a,	// (0x00048b13) wait_bar_pane_cp03

0xb742,	// (0x00048b1b) cell_fmradio_pane_ParamLimits

0xb742,	// (0x00048b1b) cell_fmradio_pane

0xb5a9,	// (0x00048982) cell_fmradio_pane_g1_ParamLimits

0xb5a9,	// (0x00048982) cell_fmradio_pane_g1

0xa43e,	// (0x00047817) grid_highlight_pane_cp011

0xb755,	// (0x00048b2e) poc_content_pane_ParamLimits

0xb755,	// (0x00048b2e) poc_content_pane

0xb767,	// (0x00048b40) scroll_pane_cp019

0x4fe8,	// (0x000423c1) popup_call_poc_act_window_ParamLimits

0x4fe8,	// (0x000423c1) popup_call_poc_act_window

0x4ff5,	// (0x000423ce) popup_call_poc_inact_window_ParamLimits

0x4ff5,	// (0x000423ce) popup_call_poc_inact_window

0xf599,	// (0x0004c972) bg_popup_call_poc_act_pane_g

0xc652,	// (0x00049a2b) bg_popup_call_poc_inact_pane_g1

0xc65a,	// (0x00049a33) bg_popup_call_poc_inact_pane_g2

0xb76f,	// (0x00048b48) popup_call_poc_act_window_g2

0xc662,	// (0x00049a3b) bg_popup_call_poc_inact_pane_g3

0xc66a,	// (0x00049a43) bg_popup_call_poc_inact_pane_g4

0xc672,	// (0x00049a4b) bg_popup_call_poc_inact_pane_g5

0xb777,	// (0x00048b50) popup_call_poc_act_window_t1_ParamLimits

0xb777,	// (0x00048b50) popup_call_poc_act_window_t1

0xb79f,	// (0x00048b78) popup_call_poc_act_window_t2_ParamLimits

0xb79f,	// (0x00048b78) popup_call_poc_act_window_t2

0xb7c7,	// (0x00048ba0) popup_call_poc_act_window_t3_ParamLimits

0xb7c7,	// (0x00048ba0) popup_call_poc_act_window_t3

0xb7ef,	// (0x00048bc8) popup_call_poc_act_window_t4_ParamLimits

0xb7ef,	// (0x00048bc8) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0004c8e0) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0004c8e0) popup_call_poc_act_window_t

0xc67a,	// (0x00049a53) bg_popup_call_poc_inact_pane_g6

0xc682,	// (0x00049a5b) bg_popup_call_poc_inact_pane_g7

0xc68a,	// (0x00049a63) bg_popup_call_poc_inact_pane_g8

0xb801,	// (0x00048bda) popup_call_poc_inact_window_g2

0xc692,	// (0x00049a6b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0004c95f) bg_popup_call_poc_inact_pane_g

0xb809,	// (0x00048be2) popup_call_poc_inact_window_t1_ParamLimits

0xb809,	// (0x00048be2) popup_call_poc_inact_window_t1

0xb81e,	// (0x00048bf7) popup_call_poc_inact_window_t2_ParamLimits

0xb81e,	// (0x00048bf7) popup_call_poc_inact_window_t2

0xb833,	// (0x00048c0c) popup_call_poc_inact_window_t3_ParamLimits

0xb833,	// (0x00048c0c) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0004c8e9) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0004c8e9) popup_call_poc_inact_window_t

0xc817,	// (0x00049bf0) context_pane_ParamLimits

0x5623,	// (0x000429fc) signal_pane_ParamLimits

0xb3ed,	// (0x000487c6) main_call2_pane

0x5596,	// (0x0004296f) popup_phob_thumbnail2_window_ParamLimits

0x5596,	// (0x0004296f) popup_phob_thumbnail2_window

0x4cad,	// (0x00042086) aid_hotspot_pointer_arrow_pane

0x4cb5,	// (0x0004208e) aid_hotspot_pointer_hand_pane

0x531b,	// (0x000426f4) phob_pre_status_pane_g5

0x2f9e,	// (0x00040377) cams_zoom_pane_ParamLimits

0x2faa,	// (0x00040383) image_vga_pane_ParamLimits

0x2fb9,	// (0x00040392) main_camera_pane_g1_ParamLimits

0x2fc7,	// (0x000403a0) main_camera_pane_g2_ParamLimits

0x2fd3,	// (0x000403ac) main_camera_pane_g3_ParamLimits

0x2fdf,	// (0x000403b8) main_camera_pane_g4_ParamLimits

0x2feb,	// (0x000403c4) main_camera_pane_g5_ParamLimits

0x2ff7,	// (0x000403d0) main_camera_pane_g6_ParamLimits

0x3003,	// (0x000403dc) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0004c5e8) main_camera_pane_g_ParamLimits

0x300f,	// (0x000403e8) main_camera_pane_t1_ParamLimits

0x3021,	// (0x000403fa) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0004c5f9) main_camera_pane_t_ParamLimits

0xa699,	// (0x00047a72) bg_popup_preview_window_pane_cp01_ParamLimits

0xa699,	// (0x00047a72) bg_popup_preview_window_pane_cp01

0xb848,	// (0x00048c21) popup_phob_thumbnail2_window_g1_ParamLimits

0xb848,	// (0x00048c21) popup_phob_thumbnail2_window_g1

0xa43e,	// (0x00047817) call2_cli_visual_pane

0x5011,	// (0x000423ea) popup_call2_audio_conf_window_ParamLimits

0x5011,	// (0x000423ea) popup_call2_audio_conf_window

0x5026,	// (0x000423ff) popup_call2_audio_first_window_ParamLimits

0x5026,	// (0x000423ff) popup_call2_audio_first_window

0x50c4,	// (0x0004249d) popup_call2_audio_in_window_ParamLimits

0x50c4,	// (0x0004249d) popup_call2_audio_in_window

0x5106,	// (0x000424df) popup_call2_audio_out_window_ParamLimits

0x5106,	// (0x000424df) popup_call2_audio_out_window

0x5168,	// (0x00042541) popup_call2_audio_second_window_ParamLimits

0x5168,	// (0x00042541) popup_call2_audio_second_window

0x51c6,	// (0x0004259f) popup_call2_audio_wait_window_ParamLimits

0x51c6,	// (0x0004259f) popup_call2_audio_wait_window

0xa43e,	// (0x00047817) bg_popup_call2_act_pane_cp03

0xa67b,	// (0x00047a54) list_conf_pane_cp

0xb854,	// (0x00048c2d) popup_call2_audio_conf_window_t1

0xb862,	// (0x00048c3b) list_single_graphic_popup_conf2_pane_ParamLimits

0xb862,	// (0x00048c3b) list_single_graphic_popup_conf2_pane

0xb0ff,	// (0x000484d8) list_highlight_pane_cp04

0xb875,	// (0x00048c4e) list_single_graphic_popup_conf2_pane_g1

0xb110,	// (0x000484e9) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0004c8f0) list_single_graphic_popup_conf2_pane_g

0xb87f,	// (0x00048c58) list_single_graphic_popup_conf2_pane_t1

0xb88d,	// (0x00048c66) bg_popup_call2_act_pane_cp01_ParamLimits

0xb88d,	// (0x00048c66) bg_popup_call2_act_pane_cp01

0xb917,	// (0x00048cf0) call_type_pane_cp05_ParamLimits

0xb917,	// (0x00048cf0) call_type_pane_cp05

0xb96b,	// (0x00048d44) popup_call2_audio_second_window_g1_ParamLimits

0xb96b,	// (0x00048d44) popup_call2_audio_second_window_g1

0xb9bf,	// (0x00048d98) popup_call2_audio_second_window_g2_ParamLimits

0xb9bf,	// (0x00048d98) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0004c8f5) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0004c8f5) popup_call2_audio_second_window_g

0xba24,	// (0x00048dfd) popup_call2_audio_second_window_t1_ParamLimits

0xba24,	// (0x00048dfd) popup_call2_audio_second_window_t1

0xbadf,	// (0x00048eb8) popup_call2_audio_second_window_t2_ParamLimits

0xbadf,	// (0x00048eb8) popup_call2_audio_second_window_t2

0xbb32,	// (0x00048f0b) popup_call2_audio_second_window_t3_ParamLimits

0xbb32,	// (0x00048f0b) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0004c8fc) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0004c8fc) popup_call2_audio_second_window_t

0xa43e,	// (0x00047817) bg_popup_call2_in_pane_cp02

0xa448,	// (0x00047821) call_type_pane_cp04

0xa450,	// (0x00047829) popup_call2_audio_wait_window_g1

0xa458,	// (0x00047831) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0004c4d5) popup_call2_audio_wait_window_g

0xa460,	// (0x00047839) popup_call2_audio_wait_window_t3

0xbc25,	// (0x00048ffe) bg_popup_call2_act_pane_ParamLimits

0xbc25,	// (0x00048ffe) bg_popup_call2_act_pane

0xbce5,	// (0x000490be) call_type_pane_cp03_ParamLimits

0xbce5,	// (0x000490be) call_type_pane_cp03

0xbd49,	// (0x00049122) popup_call2_audio_first_window_g1_ParamLimits

0xbd49,	// (0x00049122) popup_call2_audio_first_window_g1

0xbdb9,	// (0x00049192) popup_call2_audio_first_window_g2_ParamLimits

0xbdb9,	// (0x00049192) popup_call2_audio_first_window_g2

0xb413,	// (0x000487ec) popup_call2_audio_first_window_g3_ParamLimits

0xb413,	// (0x000487ec) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0004c905) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0004c905) popup_call2_audio_first_window_g

0xbe97,	// (0x00049270) popup_call2_audio_first_window_t1_ParamLimits

0xbe97,	// (0x00049270) popup_call2_audio_first_window_t1

0xbf9a,	// (0x00049373) popup_call2_audio_first_window_t4_ParamLimits

0xbf9a,	// (0x00049373) popup_call2_audio_first_window_t4

0xc07d,	// (0x00049456) popup_call2_audio_first_window_t5_ParamLimits

0xc07d,	// (0x00049456) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0004c910) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0004c910) popup_call2_audio_first_window_t

0xa691,	// (0x00047a6a) bg_popup_call2_act_pane_g1

0xc6ea,	// (0x00049ac3) popup_cale_lunar_info_window_t1

0xc6f8,	// (0x00049ad1) popup_cale_lunar_info_window_t2

0xc706,	// (0x00049adf) popup_cale_lunar_info_window_t3

0xa43e,	// (0x00047817) bg_popup_call2_bubble_pane

0xc17e,	// (0x00049557) bg_popup_call2_in_pane_cp01_ParamLimits

0xc17e,	// (0x00049557) bg_popup_call2_in_pane_cp01

0xa11a,	// (0x000474f3) call_type_pane_cp02

0xc1c6,	// (0x0004959f) popup_call2_audio_out_window_g1_ParamLimits

0xc1c6,	// (0x0004959f) popup_call2_audio_out_window_g1

0xc1f2,	// (0x000495cb) popup_call2_audio_out_window_g2_ParamLimits

0xc1f2,	// (0x000495cb) popup_call2_audio_out_window_g2

0xc21a,	// (0x000495f3) popup_call2_audio_out_window_g3_ParamLimits

0xc21a,	// (0x000495f3) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0004c919) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0004c919) popup_call2_audio_out_window_g

0xc255,	// (0x0004962e) popup_call2_audio_out_window_t1_ParamLimits

0xc255,	// (0x0004962e) popup_call2_audio_out_window_t1

0xc2b4,	// (0x0004968d) popup_call2_audio_out_window_t2_ParamLimits

0xc2b4,	// (0x0004968d) popup_call2_audio_out_window_t2

0xc308,	// (0x000496e1) popup_call2_audio_out_window_t3_ParamLimits

0xc308,	// (0x000496e1) popup_call2_audio_out_window_t3

0xc31e,	// (0x000496f7) popup_call2_audio_out_window_t4_ParamLimits

0xc31e,	// (0x000496f7) popup_call2_audio_out_window_t4

0xc334,	// (0x0004970d) popup_call2_audio_out_window_t5_ParamLimits

0xc334,	// (0x0004970d) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0004c922) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0004c922) popup_call2_audio_out_window_t

0xc398,	// (0x00049771) bg_popup_call2_in_pane_ParamLimits

0xc398,	// (0x00049771) bg_popup_call2_in_pane

0xc3f4,	// (0x000497cd) popup_call2_audio_in_window_g1_ParamLimits

0xc3f4,	// (0x000497cd) popup_call2_audio_in_window_g1

0xc42c,	// (0x00049805) popup_call2_audio_in_window_g2_ParamLimits

0xc42c,	// (0x00049805) popup_call2_audio_in_window_g2

0xc464,	// (0x0004983d) popup_call2_audio_in_window_g3_ParamLimits

0xc464,	// (0x0004983d) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0004c92f) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0004c92f) popup_call2_audio_in_window_g

0xc4bc,	// (0x00049895) popup_call2_audio_in_window_t1_ParamLimits

0xc4bc,	// (0x00049895) popup_call2_audio_in_window_t1

0xc53c,	// (0x00049915) popup_call2_audio_in_window_t2_ParamLimits

0xc53c,	// (0x00049915) popup_call2_audio_in_window_t2

0xc5bc,	// (0x00049995) popup_call2_audio_in_window_t3_ParamLimits

0xc5bc,	// (0x00049995) popup_call2_audio_in_window_t3

0xc5d6,	// (0x000499af) popup_call2_audio_in_window_t4_ParamLimits

0xc5d6,	// (0x000499af) popup_call2_audio_in_window_t4

0xc5e8,	// (0x000499c1) popup_call2_audio_in_window_t5_ParamLimits

0xc5e8,	// (0x000499c1) popup_call2_audio_in_window_t5

0xc5fd,	// (0x000499d6) popup_call2_audio_in_window_t6_ParamLimits

0xc5fd,	// (0x000499d6) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0004c938) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0004c938) popup_call2_audio_in_window_t

0xa691,	// (0x00047a6a) bg_popup_call2_in_pane_g1

0xc714,	// (0x00049aed) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0004c9a0) popup_cale_lunar_info_window_t

0xa699,	// (0x00047a72) bg_popup_call2_rect_pane_ParamLimits

0xa699,	// (0x00047a72) bg_popup_call2_rect_pane

0xa43e,	// (0x00047817) call2_cli_visual_graphic_pane

0xa43e,	// (0x00047817) call2_cli_visual_text_pane

0x56d1,	// (0x00042aaa) smil_status_volume_pane_g3

0x0002,

0xa7fd,	// (0x00047bd6) call2_cli_visual_graphic_pane_g1

0xa7fd,	// (0x00047bd6) call2_cli_visual_graphic_pane_g2

0xa7fd,	// (0x00047bd6) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0004c945) call2_cli_visual_graphic_pane_g

0xc612,	// (0x000499eb) bg_popup_call2_rect_pane_g1

0xa89b,	// (0x00047c74) bg_popup_call2_rect_pane_g2

0xc61a,	// (0x000499f3) bg_popup_call2_rect_pane_g3

0xc622,	// (0x000499fb) bg_popup_call2_rect_pane_g4

0xc62a,	// (0x00049a03) bg_popup_call2_rect_pane_g5

0xc632,	// (0x00049a0b) bg_popup_call2_rect_pane_g6

0xc63a,	// (0x00049a13) bg_popup_call2_rect_pane_g7

0xc642,	// (0x00049a1b) bg_popup_call2_rect_pane_g8

0xc64a,	// (0x00049a23) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0004c94c) bg_popup_call2_rect_pane_g

0xc652,	// (0x00049a2b) bg_popup_call2_bubble_pane_g1

0xc65a,	// (0x00049a33) bg_popup_call2_bubble_pane_g2

0xc662,	// (0x00049a3b) bg_popup_call2_bubble_pane_g3

0xc66a,	// (0x00049a43) bg_popup_call2_bubble_pane_g4

0xc672,	// (0x00049a4b) bg_popup_call2_bubble_pane_g5

0xc67a,	// (0x00049a53) bg_popup_call2_bubble_pane_g6

0xc682,	// (0x00049a5b) bg_popup_call2_bubble_pane_g7

0xc68a,	// (0x00049a63) bg_popup_call2_bubble_pane_g8

0xc692,	// (0x00049a6b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0004c95f) bg_popup_call2_bubble_pane_g

0x29c8,	// (0x0003fda1) aid_cale_week_size_cell_pane

0x3033,	// (0x0004040c) aid_cams_cif_uncrop_pane_ParamLimits

0x3033,	// (0x0004040c) aid_cams_cif_uncrop_pane

0x318e,	// (0x00040567) aid_cams_size_cell_ParamLimits

0x318e,	// (0x00040567) aid_cams_size_cell

0x319a,	// (0x00040573) grid_cams_pane_ParamLimits

0x31a8,	// (0x00040581) linegrid_cams_pane_ParamLimits

0x327f,	// (0x00040658) call_video_pane_t1

0x32a0,	// (0x00040679) call_video_pane_t2

0x0001,

0xf273,	// (0x0004c64c) call_video_pane_t

0x380f,	// (0x00040be8) aid_cale_month_size_cell_pane_ParamLimits

0x380f,	// (0x00040be8) aid_cale_month_size_cell_pane

0xf610,	// (0x0004c9e9) smil_status_volume_pane_g

0x56de,	// (0x00042ab7) volume_smil_pane_ParamLimits

0x2141,	// (0x0003f51a) aid_popup2_width_pane

0x28bc,	// (0x0003fc95) cell_qdial_pane_g4_ParamLimits

0x28bc,	// (0x0003fc95) cell_qdial_pane_g4

0x474d,	// (0x00041b26) aid_blid_cardinal_pane_ParamLimits

0x475d,	// (0x00041b36) aid_blid_destination_pane_ParamLimits

0x475d,	// (0x00041b36) aid_blid_destination_pane

0xa699,	// (0x00047a72) bg_popup_call_poc_act_pane_ParamLimits

0xa699,	// (0x00047a72) bg_popup_call_poc_act_pane

0xa699,	// (0x00047a72) bg_popup_call_poc_inact_pane_ParamLimits

0xa699,	// (0x00047a72) bg_popup_call_poc_inact_pane

0xc69a,	// (0x00049a73) bg_popup_call_poc_act_pane_g1

0xc6a2,	// (0x00049a7b) bg_popup_call_poc_act_pane_g2

0xc6aa,	// (0x00049a83) bg_popup_call_poc_act_pane_g3

0xc66a,	// (0x00049a43) bg_popup_call_poc_act_pane_g4

0xc672,	// (0x00049a4b) bg_popup_call_poc_act_pane_g5

0xc6b2,	// (0x00049a8b) bg_popup_call_poc_act_pane_g6

0xc682,	// (0x00049a5b) bg_popup_call_poc_act_pane_g7

0xc6ba,	// (0x00049a93) bg_popup_call_poc_act_pane_g8

0xa43e,	// (0x00047817) main_usb_pane

0x54cf,	// (0x000428a8) popup_cale_lunar_info_window

0x35bf,	// (0x00040998) im_reading_pane_t1_ParamLimits

0xaa70,	// (0x00047e49) list_im_pane_ParamLimits

0xaa81,	// (0x00047e5a) scroll_pane_cp07_ParamLimits

0xa43e,	// (0x00047817) grid_highlight_pane_cp012

0xa699,	// (0x00047a72) mup_scale_pane_ParamLimits

0xb413,	// (0x000487ec) main_usb_pane_g1_ParamLimits

0xb413,	// (0x000487ec) main_usb_pane_g1

0x523e,	// (0x00042617) main_usb_pane_g2_ParamLimits

0x523e,	// (0x00042617) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0004c989) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0004c989) main_usb_pane_g

0x524a,	// (0x00042623) main_usb_pane_t1_ParamLimits

0x524a,	// (0x00042623) main_usb_pane_t1

0x525c,	// (0x00042635) main_usb_pane_t2_ParamLimits

0x525c,	// (0x00042635) main_usb_pane_t2

0x526e,	// (0x00042647) main_usb_pane_t3_ParamLimits

0x526e,	// (0x00042647) main_usb_pane_t3

0x5280,	// (0x00042659) main_usb_pane_t4_ParamLimits

0x5280,	// (0x00042659) main_usb_pane_t4

0x5292,	// (0x0004266b) main_usb_pane_t5_ParamLimits

0x5292,	// (0x0004266b) main_usb_pane_t5

0x52a4,	// (0x0004267d) main_usb_pane_t6_ParamLimits

0x52a4,	// (0x0004267d) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0004c98e) main_usb_pane_t_ParamLimits

0x46f3,	// (0x00041acc) aid_text_placing

0x46ff,	// (0x00041ad8) main_location2_pane_t1_ParamLimits

0x4713,	// (0x00041aec) main_location2_pane_t2_ParamLimits

0x4727,	// (0x00041b00) main_location2_pane_t3_ParamLimits

0x473b,	// (0x00041b14) main_location2_pane_t4_ParamLimits

0x473b,	// (0x00041b14) main_location2_pane_t4

0xf3d4,	// (0x0004c7ad) main_location2_pane_t_ParamLimits

0xa700,	// (0x00047ad9) find_pinb_pane_g2_ParamLimits

0xa700,	// (0x00047ad9) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0004c4fb) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0004c4fb) find_pinb_pane_g

0xa70c,	// (0x00047ae5) find_pinb_pane_t1_ParamLimits

0xa71e,	// (0x00047af7) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0004c500) find_pinb_pane_t_ParamLimits

0xa43e,	// (0x00047817) main_call3_pane

0x3d83,	// (0x0004115c) cale_month_day_heading_pane_t1_ParamLimits

0x3e09,	// (0x000411e2) cale_month_day_heading_pane_t2_ParamLimits

0x3e9a,	// (0x00041273) cale_month_day_heading_pane_t3_ParamLimits

0x3f2b,	// (0x00041304) cale_month_day_heading_pane_t4_ParamLimits

0x3fbc,	// (0x00041395) cale_month_day_heading_pane_t5_ParamLimits

0x404d,	// (0x00041426) cale_month_day_heading_pane_t6_ParamLimits

0x40ea,	// (0x000414c3) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0004c684) cale_month_day_heading_pane_t_ParamLimits

0xaccb,	// (0x000480a4) smil_status_volume_pane

0x4df5,	// (0x000421ce) postcard_address_pane_ParamLimits

0x4df5,	// (0x000421ce) postcard_address_pane

0x4e01,	// (0x000421da) postcard_message_pane_ParamLimits

0x4e01,	// (0x000421da) postcard_message_pane

0x5205,	// (0x000425de) call2_cli_visual_pane_t1_ParamLimits

0x5205,	// (0x000425de) call2_cli_visual_pane_t1

0x5833,	// (0x00042c0c) postcard_message_pane_t1_ParamLimits

0x5833,	// (0x00042c0c) postcard_message_pane_t1

0x581c,	// (0x00042bf5) postcard_address_pane_t1_ParamLimits

0x581c,	// (0x00042bf5) postcard_address_pane_t1

0x580d,	// (0x00042be6) popup_call3_audio_in_window_ParamLimits

0x580d,	// (0x00042be6) popup_call3_audio_in_window

0x56f3,	// (0x00042acc) bg_popup_call3_in_pane_ParamLimits

0x56f3,	// (0x00042acc) bg_popup_call3_in_pane

0x5753,	// (0x00042b2c) popup_call3_audio_in_window_g1_ParamLimits

0x5753,	// (0x00042b2c) popup_call3_audio_in_window_g1

0x576b,	// (0x00042b44) popup_call3_audio_in_window_g2_ParamLimits

0x576b,	// (0x00042b44) popup_call3_audio_in_window_g2

0x5783,	// (0x00042b5c) popup_call3_audio_in_window_g3_ParamLimits

0x5783,	// (0x00042b5c) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0004c9f0) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0004c9f0) popup_call3_audio_in_window_g

0x57ab,	// (0x00042b84) popup_call3_audio_in_window_t1_ParamLimits

0x57ab,	// (0x00042b84) popup_call3_audio_in_window_t1

0x57d3,	// (0x00042bac) popup_call3_audio_in_window_t2_ParamLimits

0x57d3,	// (0x00042bac) popup_call3_audio_in_window_t2

0x57fb,	// (0x00042bd4) popup_call3_audio_in_window_t3_ParamLimits

0x57fb,	// (0x00042bd4) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0004c9f9) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0004c9f9) popup_call3_audio_in_window_t

0xb3ed,	// (0x000487c6) bg_popup_call3_rect_pane

0xc612,	// (0x000499eb) bg_popup_call3_rect_pane_g1

0xa89b,	// (0x00047c74) bg_popup_call3_rect_pane_g2

0xc61a,	// (0x000499f3) bg_popup_call3_rect_pane_g3

0xc622,	// (0x000499fb) bg_popup_call3_rect_pane_g4

0xc62a,	// (0x00049a03) bg_popup_call3_rect_pane_g5

0xc632,	// (0x00049a0b) bg_popup_call3_rect_pane_g6

0xc63a,	// (0x00049a13) bg_popup_call3_rect_pane_g7

0x4a73,	// (0x00041e4c) mup_visualizer_osc_pane

0xb4c6,	// (0x0004889f) mup_visualizer_spec_pane

0x5713,	// (0x00042aec) call3_video_qcif_pane_ParamLimits

0x5713,	// (0x00042aec) call3_video_qcif_pane

0x5723,	// (0x00042afc) call3_video_qcif_uncrop_pane_ParamLimits

0x5723,	// (0x00042afc) call3_video_qcif_uncrop_pane

0x5731,	// (0x00042b0a) call3_video_subqcif_pane_ParamLimits

0x5731,	// (0x00042b0a) call3_video_subqcif_pane

0x5743,	// (0x00042b1c) call3_video_subqcif_uncrop_pane_ParamLimits

0x5743,	// (0x00042b1c) call3_video_subqcif_uncrop_pane

0x579b,	// (0x00042b74) popup_call3_audio_in_window_g4_ParamLimits

0x579b,	// (0x00042b74) popup_call3_audio_in_window_g4

0x56be,	// (0x00042a97) mup_spec_half_pane

0x56c7,	// (0x00042aa0) mup_spec_half_pane_cp

0xc877,	// (0x00049c50) mup_osc_middle_pane

0xc880,	// (0x00049c59) mup_visualizer_osc_pane_g1

0x569f,	// (0x00042a78) mup_spec_bar_pane_ParamLimits

0x569f,	// (0x00042a78) mup_spec_bar_pane

0xc864,	// (0x00049c3d) mup_spec_bar_pane_g1

0xc86e,	// (0x00049c47) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0004c9e4) mup_spec_bar_pane_g

0x29c8,	// (0x0003fda1) aid_cale_week_size_cell_pane_ParamLimits

0x29dd,	// (0x0003fdb6) bg_cale_heading_pane_ParamLimits

0xa8d8,	// (0x00047cb1) bg_cale_pane_cp01_ParamLimits

0x29ff,	// (0x0003fdd8) cale_week_corner_pane_ParamLimits

0x2a19,	// (0x0003fdf2) cale_week_day_heading_pane_ParamLimits

0x2a3b,	// (0x0003fe14) cale_week_scroll_pane_g1_ParamLimits

0x2a58,	// (0x0003fe31) cale_week_scroll_pane_g2_ParamLimits

0x2a6b,	// (0x0003fe44) cale_week_scroll_pane_g3_ParamLimits

0x2a7e,	// (0x0003fe57) cale_week_scroll_pane_g4_ParamLimits

0x2a91,	// (0x0003fe6a) cale_week_scroll_pane_g5_ParamLimits

0x2aa4,	// (0x0003fe7d) cale_week_scroll_pane_g6_ParamLimits

0x2ab7,	// (0x0003fe90) cale_week_scroll_pane_g7_ParamLimits

0x2aca,	// (0x0003fea3) cale_week_scroll_pane_g8_ParamLimits

0x2adf,	// (0x0003feb8) cale_week_scroll_pane_g9_ParamLimits

0x2af2,	// (0x0003fecb) cale_week_scroll_pane_g10_ParamLimits

0x2b05,	// (0x0003fede) cale_week_scroll_pane_g11_ParamLimits

0x2b18,	// (0x0003fef1) cale_week_scroll_pane_g12_ParamLimits

0x2b2f,	// (0x0003ff08) cale_week_scroll_pane_g13_ParamLimits

0x2b4a,	// (0x0003ff23) cale_week_scroll_pane_g14_ParamLimits

0x2b65,	// (0x0003ff3e) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0004c58c) cale_week_scroll_pane_g_ParamLimits

0x2b80,	// (0x0003ff59) cale_week_time_pane_ParamLimits

0x2b95,	// (0x0003ff6e) grid_cale_week_pane_ParamLimits

0xa8f6,	// (0x00047ccf) listscroll_cale_week_pane_t1

0xa908,	// (0x00047ce1) scroll_pane_cp08_ParamLimits

0x3878,	// (0x00040c51) cale_month_corner_pane_ParamLimits

0xaca1,	// (0x0004807a) cale_month_pane_t1

0x3d1c,	// (0x000410f5) cale_month_week_pane_ParamLimits

0xb413,	// (0x000487ec) popup_call_status_window_g1_ParamLimits

0x4539,	// (0x00041912) popup_call_status_window_g2_ParamLimits

0x4545,	// (0x0004191e) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0004c734) popup_call_status_window_g_ParamLimits

0xb05b,	// (0x00048434) aid_call2_pane

0x0fae,	// (0x0003e387) msg_header_pane_g1

0x4df5,	// (0x000421ce) postcard_address2_pane_ParamLimits

0x4df5,	// (0x000421ce) postcard_address2_pane

0x4e01,	// (0x000421da) postcard_message2_pane_ParamLimits

0x4e01,	// (0x000421da) postcard_message2_pane

0x5631,	// (0x00042a0a) message2_row_pane_ParamLimits

0x5631,	// (0x00042a0a) message2_row_pane

0x564e,	// (0x00042a27) address2_row_pane_ParamLimits

0x564e,	// (0x00042a27) address2_row_pane

0xc832,	// (0x00049c0b) postcard_message2_row_pane_g1

0xc83a,	// (0x00049c13) postcard_message2_row_pane_t1

0xc832,	// (0x00049c0b) address2_row_pane_g1

0xc83a,	// (0x00049c13) address2_row_pane_t1

0x2ef5,	// (0x000402ce) aid_size_cell_vorec

0xa43e,	// (0x00047817) main_rss_pane

0x5661,	// (0x00042a3a) rss_list_single_pane_ParamLimits

0x5661,	// (0x00042a3a) rss_list_single_pane

0xc848,	// (0x00049c21) rss_list_single_pane_t1

0xc856,	// (0x00049c2f) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0004c9df) rss_list_single_pane_t

0xa43e,	// (0x00047817) main_camera2_pane

0xa43e,	// (0x00047817) main_video2_pane

0x5897,	// (0x00042c70) cams_zoom_pane_cp2_ParamLimits

0x5897,	// (0x00042c70) cams_zoom_pane_cp2

0x58a3,	// (0x00042c7c) image2_vga_pane_ParamLimits

0x58a3,	// (0x00042c7c) image2_vga_pane

0x58b2,	// (0x00042c8b) main_camera2_pane_g1_ParamLimits

0x58b2,	// (0x00042c8b) main_camera2_pane_g1

0x58be,	// (0x00042c97) main_camera2_pane_g2_ParamLimits

0x58be,	// (0x00042c97) main_camera2_pane_g2

0x58ca,	// (0x00042ca3) main_camera2_pane_g3_ParamLimits

0x58ca,	// (0x00042ca3) main_camera2_pane_g3

0x58d6,	// (0x00042caf) main_camera2_pane_g4_ParamLimits

0x58d6,	// (0x00042caf) main_camera2_pane_g4

0x58e2,	// (0x00042cbb) main_camera2_pane_g5_ParamLimits

0x58e2,	// (0x00042cbb) main_camera2_pane_g5

0x58ee,	// (0x00042cc7) main_camera2_pane_g6_ParamLimits

0x58ee,	// (0x00042cc7) main_camera2_pane_g6

0x58fa,	// (0x00042cd3) main_camera2_pane_g7_ParamLimits

0x58fa,	// (0x00042cd3) main_camera2_pane_g7

0x5906,	// (0x00042cdf) main_camera2_pane_g8_ParamLimits

0x5906,	// (0x00042cdf) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0004ca00) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0004ca00) main_camera2_pane_g

0x591e,	// (0x00042cf7) main_camera2_pane_t1_ParamLimits

0x591e,	// (0x00042cf7) main_camera2_pane_t1

0x5930,	// (0x00042d09) main_camera2_pane_t2_ParamLimits

0x5930,	// (0x00042d09) main_camera2_pane_t2

0x5942,	// (0x00042d1b) main_camera2_pane_t3_ParamLimits

0x5942,	// (0x00042d1b) main_camera2_pane_t3

0x5954,	// (0x00042d2d) main_camera2_pane_t4_ParamLimits

0x5954,	// (0x00042d2d) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0004ca13) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0004ca13) main_camera2_pane_t

0x59b6,	// (0x00042d8f) cams_zoom_pane_cp4_ParamLimits

0x59b6,	// (0x00042d8f) cams_zoom_pane_cp4

0x59c6,	// (0x00042d9f) image2_cif_pane_ParamLimits

0x59c6,	// (0x00042d9f) image2_cif_pane

0x59db,	// (0x00042db4) image2_subqcif_pane_ParamLimits

0x59db,	// (0x00042db4) image2_subqcif_pane

0x59ea,	// (0x00042dc3) main_video2_pane_g1_ParamLimits

0x59ea,	// (0x00042dc3) main_video2_pane_g1

0x59fc,	// (0x00042dd5) main_video2_pane_g2_ParamLimits

0x59fc,	// (0x00042dd5) main_video2_pane_g2

0x5a0c,	// (0x00042de5) main_video2_pane_g3_ParamLimits

0x5a0c,	// (0x00042de5) main_video2_pane_g3

0x5a1c,	// (0x00042df5) main_video2_pane_g4_ParamLimits

0x5a1c,	// (0x00042df5) main_video2_pane_g4

0x5a2c,	// (0x00042e05) main_video2_pane_g5_ParamLimits

0x5a2c,	// (0x00042e05) main_video2_pane_g5

0x5a3c,	// (0x00042e15) main_video2_pane_g6_ParamLimits

0x5a3c,	// (0x00042e15) main_video2_pane_g6

0x0005,

0xf649,	// (0x0004ca22) main_video2_pane_g_ParamLimits

0xf649,	// (0x0004ca22) main_video2_pane_g

0x5a4e,	// (0x00042e27) main_video2_pane_t1_ParamLimits

0x5a4e,	// (0x00042e27) main_video2_pane_t1

0x5a68,	// (0x00042e41) main_video2_pane_t2_ParamLimits

0x5a68,	// (0x00042e41) main_video2_pane_t2

0x5a8e,	// (0x00042e67) main_video2_pane_t3_ParamLimits

0x5a8e,	// (0x00042e67) main_video2_pane_t3

0x0002,

0xf656,	// (0x0004ca2f) main_video2_pane_t_ParamLimits

0xf656,	// (0x0004ca2f) main_video2_pane_t

0x535b,	// (0x00042734) call_muted_g2

0x0001,

0xf5f8,	// (0x0004c9d1) call_muted_g

0xa43e,	// (0x00047817) main_mup2_pane

0xc8b7,	// (0x00049c90) main_mup2_pane_g1_ParamLimits

0xc8b7,	// (0x00049c90) main_mup2_pane_g1

0x5ab4,	// (0x00042e8d) main_mup2_pane_g2_ParamLimits

0x5ab4,	// (0x00042e8d) main_mup2_pane_g2

0x5d36,	// (0x0004310f) main_mup_pane_g13_cp1

0x5d3e,	// (0x00043117) mup_volume_pane_cp1

0x5ad4,	// (0x00042ead) main_mup2_pane_g4_ParamLimits

0x5ad4,	// (0x00042ead) main_mup2_pane_g4

0x5ae9,	// (0x00042ec2) main_mup2_pane_g5_ParamLimits

0x5ae9,	// (0x00042ec2) main_mup2_pane_g5

0x5afe,	// (0x00042ed7) main_mup2_pane_g6_ParamLimits

0x5afe,	// (0x00042ed7) main_mup2_pane_g6

0x5b13,	// (0x00042eec) main_mup2_pane_g7_ParamLimits

0x5b13,	// (0x00042eec) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0004ca36) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0004ca36) main_mup2_pane_g

0x5b2f,	// (0x00042f08) main_mup2_pane_t1_ParamLimits

0x5b2f,	// (0x00042f08) main_mup2_pane_t1

0x5b46,	// (0x00042f1f) main_mup2_pane_t2_ParamLimits

0x5b46,	// (0x00042f1f) main_mup2_pane_t2

0x5b5d,	// (0x00042f36) main_mup2_pane_t3_ParamLimits

0x5b5d,	// (0x00042f36) main_mup2_pane_t3

0x5b74,	// (0x00042f4d) main_mup2_pane_t4_ParamLimits

0x5b74,	// (0x00042f4d) main_mup2_pane_t4

0x5b8e,	// (0x00042f67) main_mup2_pane_t5_ParamLimits

0x5b8e,	// (0x00042f67) main_mup2_pane_t5

0x5ba8,	// (0x00042f81) main_mup2_pane_t6_ParamLimits

0x5ba8,	// (0x00042f81) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0004ca45) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0004ca45) main_mup2_pane_t

0x5be0,	// (0x00042fb9) mup2_visualizer_pane_ParamLimits

0x5be0,	// (0x00042fb9) mup2_visualizer_pane

0x5c16,	// (0x00042fef) mup_progress_pane_cp_ParamLimits

0x5c16,	// (0x00042fef) mup_progress_pane_cp

0x5d21,	// (0x000430fa) mup_volume_pane_cp_ParamLimits

0x5d21,	// (0x000430fa) mup_volume_pane_cp

0x5c2d,	// (0x00043006) mup2_visualizer_pane_g1_ParamLimits

0x5c2d,	// (0x00043006) mup2_visualizer_pane_g1

0xc8c3,	// (0x00049c9c) mup2_visualizer_pane_g2_ParamLimits

0xc8c3,	// (0x00049c9c) mup2_visualizer_pane_g2

0x5c42,	// (0x0004301b) mup2_visualizer_pane_g3_ParamLimits

0x5c42,	// (0x0004301b) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0004ca52) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0004ca52) mup2_visualizer_pane_g

0xb6e4,	// (0x00048abd) aid_size_cell_fmradio

0x5471,	// (0x0004284a) aid_height_parent_landcape

0xaaff,	// (0x00047ed8) wml_content_pane_cp

0xab07,	// (0x00047ee0) wml_tabs_pane

0xab10,	// (0x00047ee9) popup_wml_miniature_window

0xab18,	// (0x00047ef1) scroll_pane_cp021

0xab2c,	// (0x00047f05) wml_content_pane_comp8

0xa43e,	// (0x00047817) bg_popup_sub_pane_cp05

0xc8e1,	// (0x00049cba) popup_wml_miniature_window_g1

0xc8e9,	// (0x00049cc2) wml_miniature_view_pane

0x5c50,	// (0x00043029) aid_size_wml_view

0x5c58,	// (0x00043031) wml_miniature_view_pane_g1

0x5c61,	// (0x0004303a) wml_miniature_view_pane_g2

0x5c6a,	// (0x00043043) wml_miniature_view_pane_g3

0x5c72,	// (0x0004304b) wml_miniature_view_pane_g4

0x5c7a,	// (0x00043053) wml_miniature_view_pane_g5

0x5c82,	// (0x0004305b) wml_miniature_view_pane_g6

0x5c8a,	// (0x00043063) wml_miniature_view_pane_g7

0x5c92,	// (0x0004306b) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0004ca59) wml_miniature_view_pane_g

0xc8b7,	// (0x00049c90) background_graphic_ParamLimits

0xc8b7,	// (0x00049c90) background_graphic

0xc8f1,	// (0x00049cca) wml_tabs_2_pane

0xc8fa,	// (0x00049cd3) wml_tabs_3_pane_ParamLimits

0xc8fa,	// (0x00049cd3) wml_tabs_3_pane

0xc90c,	// (0x00049ce5) wml_tabs_4_pane_ParamLimits

0xc90c,	// (0x00049ce5) wml_tabs_4_pane

0xc922,	// (0x00049cfb) wml_tabs_5_pane_ParamLimits

0xc922,	// (0x00049cfb) wml_tabs_5_pane

0xc93c,	// (0x00049d15) wml_tabs_pane_g2_ParamLimits

0xc93c,	// (0x00049d15) wml_tabs_pane_g2

0xc950,	// (0x00049d29) wml_tabs_pane_g3_ParamLimits

0xc950,	// (0x00049d29) wml_tabs_pane_g3

0x5c9a,	// (0x00043073) wml_tabs_2_active_pane_ParamLimits

0x5c9a,	// (0x00043073) wml_tabs_2_active_pane

0x5caa,	// (0x00043083) wml_tabs_2_passive_pane_ParamLimits

0x5caa,	// (0x00043083) wml_tabs_2_passive_pane

0x5cba,	// (0x00043093) wml_tabs_3_active_pane_cp_ParamLimits

0x5cba,	// (0x00043093) wml_tabs_3_active_pane_cp

0x5ccb,	// (0x000430a4) wml_tabs_3_passive_pane_ParamLimits

0x5ccb,	// (0x000430a4) wml_tabs_3_passive_pane

0x5cdc,	// (0x000430b5) wml_tabs_3_passive_pane_cp_ParamLimits

0x5cdc,	// (0x000430b5) wml_tabs_3_passive_pane_cp

0x5ced,	// (0x000430c6) tabs_4_active_pane

0x5cf5,	// (0x000430ce) tabs_4_passive_pane

0x5cfd,	// (0x000430d6) tabs_4_passive_pane_cp

0x5d05,	// (0x000430de) tabs_4_passive_pane_cp2

0x5236,	// (0x0004260f) aid_height_text

0x4a3c,	// (0x00041e15) mup_volume_cont_pane_ParamLimits

0x4a3c,	// (0x00041e15) mup_volume_cont_pane

0x2513,	// (0x0003f8ec) aid_size_cell_pinb

0x251d,	// (0x0003f8f6) aid_size_list_pinb

0x5bff,	// (0x00042fd8) mup2_volume_cont_pane_ParamLimits

0x5bff,	// (0x00042fd8) mup2_volume_cont_pane

0x5d0d,	// (0x000430e6) mup2_volume_cont_pane_g1_ParamLimits

0x5d0d,	// (0x000430e6) mup2_volume_cont_pane_g1

0x214d,	// (0x0003f526) aid_size_cell_touch_ParamLimits

0x214d,	// (0x0003f526) aid_size_cell_touch

0x23f6,	// (0x0003f7cf) touch_pane_ParamLimits

0x23f6,	// (0x0003f7cf) touch_pane

0xa021,	// (0x000473fa) main_rss2_pane

0xc96d,	// (0x00049d46) listscroll_rss2_pane

0xc976,	// (0x00049d4f) rss2_navigation_pane

0xc97e,	// (0x00049d57) list_rss2_pane

0xb1aa,	// (0x00048583) scroll_pane_cp22

0xc986,	// (0x00049d5f) rss2_navigation_pane_g1

0xc98f,	// (0x00049d68) rss2_navigation_pane_g2

0xc997,	// (0x00049d70) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0004ca6a) rss2_navigation_pane_g

0xc99f,	// (0x00049d78) rss2_navigation_pane_t1

0x5d46,	// (0x0004311f) rss2_list_single_pane_ParamLimits

0x5d46,	// (0x0004311f) rss2_list_single_pane

0xc9ad,	// (0x00049d86) rss2_list_single_pane_t2

0xc9bb,	// (0x00049d94) rss2_list_single_pane_t3_ParamLimits

0xc9bb,	// (0x00049d94) rss2_list_single_pane_t3

0xc9d8,	// (0x00049db1) rss2_list_single_pane_t4

0x439a,	// (0x00041773) smil_status_pane_g1

0xad62,	// (0x0004813b) main_image2_pane_ParamLimits

0xad62,	// (0x0004813b) main_image2_pane

0x5912,	// (0x00042ceb) main_camera2_pane_g9_ParamLimits

0x5912,	// (0x00042ceb) main_camera2_pane_g9

0x5966,	// (0x00042d3f) main_camera2_pane_t5_ParamLimits

0x5966,	// (0x00042d3f) main_camera2_pane_t5

0x5978,	// (0x00042d51) main_camera2_pane_t6_ParamLimits

0x5978,	// (0x00042d51) main_camera2_pane_t6

0x5d7e,	// (0x00043157) main_image2_pane_g1_ParamLimits

0x5d7e,	// (0x00043157) main_image2_pane_g1

0x4fd2,	// (0x000423ab) smil2_video_pane_ParamLimits

0x4fd2,	// (0x000423ab) smil2_video_pane

0x0d07,	// (0x0003e0e0) aid_zoom_text_primary_cp

0x239f,	// (0x0003f778) popup_preview_fixed_window

0xaa68,	// (0x00047e41) im_reading_pane_g1

0x585c,	// (0x00042c35) cams2_bc_adjust_pane_cp_ParamLimits

0x585c,	// (0x00042c35) cams2_bc_adjust_pane_cp

0x59a8,	// (0x00042d81) cams2_bc_adjust_pane_ParamLimits

0x59a8,	// (0x00042d81) cams2_bc_adjust_pane

0x5d8a,	// (0x00043163) cams2_bc_adjust_pane_g1

0x5d92,	// (0x0004316b) cams2_slider_pane

0x5d9b,	// (0x00043174) cams2_slider_pane_g1

0x5da4,	// (0x0004317d) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0004ca71) cams2_slider_pane_g

0x260d,	// (0x0003f9e6) calc_display_pane_ParamLimits

0x262b,	// (0x0003fa04) calc_paper_pane_ParamLimits

0x2647,	// (0x0003fa20) grid_calc_pane_ParamLimits

0x45a7,	// (0x00041980) popup_clock_digital_window_t1_ParamLimits

0xb681,	// (0x00048a5a) main_image_pane_t1

0x25f3,	// (0x0003f9cc) aid_size_cell_calc_ParamLimits

0x25f3,	// (0x0003f9cc) aid_size_cell_calc

0x54ab,	// (0x00042884) popup_blid_sat_info2_window_ParamLimits

0x54ab,	// (0x00042884) popup_blid_sat_info2_window

0xc9ee,	// (0x00049dc7) aid_size_cell_blid

0xc9f6,	// (0x00049dcf) bg_popup_window_pane_cp07

0xca19,	// (0x00049df2) grid_popup_blid_pane

0xca23,	// (0x00049dfc) heading_pane_cp05_ParamLimits

0xca23,	// (0x00049dfc) heading_pane_cp05

0xcaed,	// (0x00049ec6) cell_popup_blid_pane_ParamLimits

0xcaed,	// (0x00049ec6) cell_popup_blid_pane

0xcb13,	// (0x00049eec) cell_popup_blid_pane_g1

0xcb1b,	// (0x00049ef4) cell_popup_blid_pane_t1

0x5bc5,	// (0x00042f9e) mup2_indicator_pane_ParamLimits

0x5bc5,	// (0x00042f9e) mup2_indicator_pane

0xb3ed,	// (0x000487c6) mup2_visualizer_osc_pane

0xc8cf,	// (0x00049ca8) mup2_visualizer_spec_pane_ParamLimits

0xc8cf,	// (0x00049ca8) mup2_visualizer_spec_pane

0x5dbe,	// (0x00043197) mup2_spec_half_pane

0x5dc7,	// (0x000431a0) mup2_spec_half_pane_cp

0x5dd1,	// (0x000431aa) mup2_spec_bar_pane_ParamLimits

0x5dd1,	// (0x000431aa) mup2_spec_bar_pane

0xc864,	// (0x00049c3d) mup2_spec_bar_pane_g1

0xc86e,	// (0x00049c47) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0004c9e4) mup2_spec_bar_pane_g

0x5df0,	// (0x000431c9) mup2_osc_middle_pane

0xc880,	// (0x00049c59) mup2_visualizer_osc_pane_g1

0xa04b,	// (0x00047424) popup_number_entry_window_t1_ParamLimits

0xa05e,	// (0x00047437) popup_number_entry_window_t2_ParamLimits

0xa070,	// (0x00047449) popup_number_entry_window_t3_ParamLimits

0x244d,	// (0x0003f826) popup_number_entry_window_t5_ParamLimits

0x244d,	// (0x0003f826) popup_number_entry_window_t5

0xf0cd,	// (0x0004c4a6) popup_number_entry_window_t_ParamLimits

0xa082,	// (0x0004745b) text_title_cp2_ParamLimits

0x4cbd,	// (0x00042096) aid_hotspot_pointer_text2_pane

0x4d57,	// (0x00042130) main_viewer_pane_g9_ParamLimits

0x4d57,	// (0x00042130) main_viewer_pane_g9

0xaca1,	// (0x0004807a) cale_month_pane_t1_ParamLimits

0xacde,	// (0x000480b7) bg_cale_pane_ParamLimits

0xacf6,	// (0x000480cf) list_cale_pane_ParamLimits

0xad07,	// (0x000480e0) listscroll_cale_day_pane_t1

0xad19,	// (0x000480f2) scroll_pane_cp09_ParamLimits

0x4a7b,	// (0x00041e54) main_mup_eq_pane_t1_ParamLimits

0x4a7b,	// (0x00041e54) main_mup_eq_pane_t1

0x4a95,	// (0x00041e6e) main_mup_eq_pane_t2_ParamLimits

0x4a95,	// (0x00041e6e) main_mup_eq_pane_t2

0x4aad,	// (0x00041e86) main_mup_eq_pane_t3_ParamLimits

0x4aad,	// (0x00041e86) main_mup_eq_pane_t3

0x4ac5,	// (0x00041e9e) main_mup_eq_pane_t4_ParamLimits

0x4ac5,	// (0x00041e9e) main_mup_eq_pane_t4

0x4add,	// (0x00041eb6) main_mup_eq_pane_t5_ParamLimits

0x4add,	// (0x00041eb6) main_mup_eq_pane_t5

0x4af5,	// (0x00041ece) main_mup_eq_pane_t6_ParamLimits

0x4af5,	// (0x00041ece) main_mup_eq_pane_t6

0x4b09,	// (0x00041ee2) main_mup_eq_pane_t7_ParamLimits

0x4b09,	// (0x00041ee2) main_mup_eq_pane_t7

0x4b1d,	// (0x00041ef6) main_mup_eq_pane_t8_ParamLimits

0x4b1d,	// (0x00041ef6) main_mup_eq_pane_t8

0x4b33,	// (0x00041f0c) main_mup_eq_pane_t9_ParamLimits

0x4b33,	// (0x00041f0c) main_mup_eq_pane_t9

0x4b4b,	// (0x00041f24) main_mup_eq_pane_t10_ParamLimits

0x4b4b,	// (0x00041f24) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0004c833) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0004c833) main_mup_eq_pane_t

0x4c08,	// (0x00041fe1) mup_equalizer_pane_cp5_ParamLimits

0x4c1e,	// (0x00041ff7) mup_equalizer_pane_cp6_ParamLimits

0x4c36,	// (0x0004200f) mup_equalizer_pane_cp7_ParamLimits

0xa021,	// (0x000473fa) main_gallery_pane

0xc889,	// (0x00049c62) smil2_volume_pane

0xc891,	// (0x00049c6a) smil_status_volume_pane_g1_ParamLimits

0xc8a4,	// (0x00049c7d) smil_status_volume_pane_g2_ParamLimits

0x56d1,	// (0x00042aaa) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0004c9e9) smil_status_volume_pane_g_ParamLimits

0xc9f6,	// (0x00049dcf) bg_popup_window_pane_cp07_ParamLimits

0xca04,	// (0x00049ddd) blid_firmament_pane

0x5df9,	// (0x000431d2) aid_size_cell_gallery_ParamLimits

0x5df9,	// (0x000431d2) aid_size_cell_gallery

0x5e07,	// (0x000431e0) grid_gallery_pane_ParamLimits

0x5e07,	// (0x000431e0) grid_gallery_pane

0x5e17,	// (0x000431f0) cell_gallery_pane_ParamLimits

0x5e17,	// (0x000431f0) cell_gallery_pane

0xcb29,	// (0x00049f02) bg_cell_gallery_focus_pane_ParamLimits

0xcb29,	// (0x00049f02) bg_cell_gallery_focus_pane

0xcb3b,	// (0x00049f14) cell_gallery_pane_g1_ParamLimits

0xcb3b,	// (0x00049f14) cell_gallery_pane_g1

0x5e65,	// (0x0004323e) cell_gallery_pane_g2_ParamLimits

0x5e65,	// (0x0004323e) cell_gallery_pane_g2

0x5e72,	// (0x0004324b) cell_gallery_pane_g3_ParamLimits

0x5e72,	// (0x0004324b) cell_gallery_pane_g3

0xcb47,	// (0x00049f20) cell_gallery_pane_g4_ParamLimits

0xcb47,	// (0x00049f20) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0004ca97) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0004ca97) cell_gallery_pane_g

0xcb53,	// (0x00049f2c) bg_cell_gallery_focus_pane_g1

0xcb5b,	// (0x00049f34) bg_cell_gallery_focus_pane_g2

0xcb63,	// (0x00049f3c) bg_cell_gallery_focus_pane_g3

0xcb6b,	// (0x00049f44) bg_cell_gallery_focus_pane_g4

0xcb73,	// (0x00049f4c) bg_cell_gallery_focus_pane_g5

0xcb7b,	// (0x00049f54) bg_cell_gallery_focus_pane_g6

0xcb83,	// (0x00049f5c) bg_cell_gallery_focus_pane_g7

0xcb8b,	// (0x00049f64) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0004caa0) bg_cell_gallery_focus_pane_g

0xcb93,	// (0x00049f6c) aid_firma_cardinal

0xcba7,	// (0x00049f80) blid_firmament_pane_t1

0xcbbe,	// (0x00049f97) blid_firmament_pane_t2

0xcbd5,	// (0x00049fae) blid_firmament_pane_t3

0xcbec,	// (0x00049fc5) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0004cab1) blid_firmament_pane_t

0xcc03,	// (0x00049fdc) blid_sat_info_pane

0xcc13,	// (0x00049fec) blid_sat_info_pane_g1

0xcc13,	// (0x00049fec) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0004caba) blid_sat_info_pane_g

0xcc1d,	// (0x00049ff6) blid_sat_info_pane_t1

0xcc2b,	// (0x0004a004) smil2_volume_content_pane

0xcc34,	// (0x0004a00d) smil2_volume_pane_g1

0xa829,	// (0x00047c02) smil2_volume_content_pane_g1

0xcc3c,	// (0x0004a015) smil2_volume_content_pane_g2

0xcc45,	// (0x0004a01e) smil2_volume_content_pane_g3

0xcc4e,	// (0x0004a027) smil2_volume_content_pane_g4

0xcc57,	// (0x0004a030) smil2_volume_content_pane_g5

0xcc60,	// (0x0004a039) smil2_volume_content_pane_g6

0xcc69,	// (0x0004a042) smil2_volume_content_pane_g7

0xcc72,	// (0x0004a04b) smil2_volume_content_pane_g8

0xcc7b,	// (0x0004a054) smil2_volume_content_pane_g9

0xcc84,	// (0x0004a05d) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0004cabf) smil2_volume_content_pane_g

0x2c1a,	// (0x0003fff3) cale_week_day_heading_pane_t1_ParamLimits

0x2c55,	// (0x0004002e) cale_week_day_heading_pane_t2_ParamLimits

0x2c90,	// (0x00040069) cale_week_day_heading_pane_t3_ParamLimits

0x2ccb,	// (0x000400a4) cale_week_day_heading_pane_t4_ParamLimits

0x2d06,	// (0x000400df) cale_week_day_heading_pane_t5_ParamLimits

0x2d41,	// (0x0004011a) cale_week_day_heading_pane_t6_ParamLimits

0x2d7c,	// (0x00040155) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0004c5ab) cale_week_day_heading_pane_t_ParamLimits

0xa925,	// (0x00047cfe) bg_cale_side_pane_ParamLimits

0x2db7,	// (0x00040190) cale_week_time_pane_t1_ParamLimits

0x2dd1,	// (0x000401aa) cale_week_time_pane_t2_ParamLimits

0x2deb,	// (0x000401c4) cale_week_time_pane_t3_ParamLimits

0x2e05,	// (0x000401de) cale_week_time_pane_t4_ParamLimits

0x2e1f,	// (0x000401f8) cale_week_time_pane_t5_ParamLimits

0x2e3b,	// (0x00040214) cale_week_time_pane_t6_ParamLimits

0x2e5d,	// (0x00040236) cale_week_time_pane_t7_ParamLimits

0x2e81,	// (0x0004025a) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0004c5ba) cale_week_time_pane_t_ParamLimits

0x2ea7,	// (0x00040280) cell_cale_week_pane_g2_ParamLimits

0xa925,	// (0x00047cfe) bg_cale_side_pane_cp01_ParamLimits

0x4193,	// (0x0004156c) cale_month_week_pane_t1_ParamLimits

0x41ac,	// (0x00041585) cale_month_week_pane_t2_ParamLimits

0x41c5,	// (0x0004159e) cale_month_week_pane_t3_ParamLimits

0x41de,	// (0x000415b7) cale_month_week_pane_t4_ParamLimits

0x41fb,	// (0x000415d4) cale_month_week_pane_t5_ParamLimits

0x421c,	// (0x000415f5) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0004c693) cale_month_week_pane_t_ParamLimits

0x4363,	// (0x0004173c) cell_cale_month_pane_g1_ParamLimits

0xa021,	// (0x000473fa) main_cale_event_viewer_pane

0xa021,	// (0x000473fa) listscroll_cale_event_viewer_pane

0xcc8d,	// (0x0004a066) list_cale_ev_pane

0xcc95,	// (0x0004a06e) scroll_pane_cp023

0xcca1,	// (0x0004a07a) field_cale_ev_pane_ParamLimits

0xcca1,	// (0x0004a07a) field_cale_ev_pane

0xccbd,	// (0x0004a096) field_cale_ev_content_pane_ParamLimits

0xccbd,	// (0x0004a096) field_cale_ev_content_pane

0xccc9,	// (0x0004a0a2) field_cale_ev_pane_g1_ParamLimits

0xccc9,	// (0x0004a0a2) field_cale_ev_pane_g1

0xccd5,	// (0x0004a0ae) field_cale_ev_pane_g2_ParamLimits

0xccd5,	// (0x0004a0ae) field_cale_ev_pane_g2

0xcced,	// (0x0004a0c6) field_cale_ev_pane_g3_ParamLimits

0xcced,	// (0x0004a0c6) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0004cad4) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0004cad4) field_cale_ev_pane_g

0xcd05,	// (0x0004a0de) field_cale_ev_pane_t1_ParamLimits

0xcd05,	// (0x0004a0de) field_cale_ev_pane_t1

0xcd1c,	// (0x0004a0f5) field_cale_ev_content_pane_t1_ParamLimits

0xcd1c,	// (0x0004a0f5) field_cale_ev_content_pane_t1

0x4ca4,	// (0x0004207d) bg_button_pane_cp01

0x29b8,	// (0x0003fd91) listscroll_cale_week_pane_ParamLimits

0xa8cf,	// (0x00047ca8) popup_toolbar_window_cp01

0xa8f6,	// (0x00047ccf) listscroll_cale_week_pane_t1_ParamLimits

0x29b8,	// (0x0003fd91) listscroll_cale_day_pane_ParamLimits

0xa8cf,	// (0x00047ca8) popup_toolbar_window_cp02

0xad07,	// (0x000480e0) listscroll_cale_day_pane_t1_ParamLimits

0x29b8,	// (0x0003fd91) main_cale_month_pane_ParamLimits

0x55a8,	// (0x00042981) popup_toolbar_window_cp03_ParamLimits

0x55a8,	// (0x00042981) popup_toolbar_window_cp03

0x4ee4,	// (0x000422bd) main_image_pane_g2_ParamLimits

0x4ee4,	// (0x000422bd) main_image_pane_g2

0x4ef0,	// (0x000422c9) main_image_pane_g3_ParamLimits

0x4ef0,	// (0x000422c9) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0004c8c5) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0004c8c5) main_image_pane_g

0xb681,	// (0x00048a5a) main_image_pane_t1_ParamLimits

0x4efc,	// (0x000422d5) main_image_pane_t2_ParamLimits

0x4efc,	// (0x000422d5) main_image_pane_t2

0x4f0e,	// (0x000422e7) main_image_pane_t3_ParamLimits

0x4f0e,	// (0x000422e7) main_image_pane_t3

0x4f20,	// (0x000422f9) main_image_pane_t4_ParamLimits

0x4f20,	// (0x000422f9) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0004c8cc) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0004c8cc) main_image_pane_t

0x4f32,	// (0x0004230b) popup_image_details_window_cp01

0x4f3c,	// (0x00042315) popup_toobar_trans_pane_cp01_ParamLimits

0x4f3c,	// (0x00042315) popup_toobar_trans_pane_cp01

0x54fe,	// (0x000428d7) popup_image_details_window_ParamLimits

0x54fe,	// (0x000428d7) popup_image_details_window

0x550c,	// (0x000428e5) popup_image_focus_window

0x584e,	// (0x00042c27) camera2_autofocus_pane_ParamLimits

0x584e,	// (0x00042c27) camera2_autofocus_pane

0xa021,	// (0x000473fa) bg_popup_sub_pane_cp06

0xcd39,	// (0x0004a112) popup_image_focus_window_g1

0xcd41,	// (0x0004a11a) popup_image_focus_window_g2

0xcd49,	// (0x0004a122) popup_image_focus_window_g3

0xcd51,	// (0x0004a12a) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0004cadb) popup_image_focus_window_g

0xcd59,	// (0x0004a132) popup_image_focus_window_t1

0xcd67,	// (0x0004a140) popup_image_focus_window_t2

0xcd77,	// (0x0004a150) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0004cae4) popup_image_focus_window_t

0xcd85,	// (0x0004a15e) camera2_autofocus_pane_g1

0xad62,	// (0x0004813b) bg_tb_trans_pane_cp01

0xcd93,	// (0x0004a16c) popup_image_details_window_g1

0xcda6,	// (0x0004a17f) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0004caf6) popup_image_details_window_g

0xcdcf,	// (0x0004a1a8) popup_image_details_window_t1

0xcde1,	// (0x0004a1ba) popup_image_details_window_t2

0xcdfa,	// (0x0004a1d3) popup_image_details_window_t3

0xce0e,	// (0x0004a1e7) popup_image_details_window_t4

0xce29,	// (0x0004a202) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0004cafd) popup_image_details_window_t

0xa794,	// (0x00047b6d) bg_calc_paper_pane_ParamLimits

0xa021,	// (0x000473fa) grid_highlight_pane_cp013

0x2744,	// (0x0003fb1d) list_calc_pane_ParamLimits

0x2756,	// (0x0003fb2f) scroll_pane_cp024

0xa7a8,	// (0x00047b81) bg_calc_display_pane_ParamLimits

0x275e,	// (0x0003fb37) calc_display_pane_t1_ParamLimits

0x2773,	// (0x0003fb4c) calc_display_pane_t2_ParamLimits

0x2788,	// (0x0003fb61) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0004c52d) calc_display_pane_t_ParamLimits

0x2869,	// (0x0003fc42) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0004c54a) cell_calc_pane_g

0x2872,	// (0x0003fc4b) cell_calc_pane_t1

0xa807,	// (0x00047be0) grid_highlight_pane_cp02_ParamLimits

0xa81d,	// (0x00047bf6) toolbar_button_pane_cp01_ParamLimits

0xa81d,	// (0x00047bf6) toolbar_button_pane_cp01

0xb6c6,	// (0x00048a9f) temp_image_control_pane_ParamLimits

0xb6c6,	// (0x00048a9f) temp_image_control_pane

0xad62,	// (0x0004813b) main_mp3_pane

0xce43,	// (0x0004a21c) temp_image_control_pane_g1_ParamLimits

0xce43,	// (0x0004a21c) temp_image_control_pane_g1

0xce51,	// (0x0004a22a) temp_image_control_pane_g2_ParamLimits

0xce51,	// (0x0004a22a) temp_image_control_pane_g2

0xce63,	// (0x0004a23c) temp_image_control_pane_g3_ParamLimits

0xce63,	// (0x0004a23c) temp_image_control_pane_g3

0x5eaf,	// (0x00043288) temp_image_control_pane_g4_ParamLimits

0x5eaf,	// (0x00043288) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0004cb08) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0004cb08) temp_image_control_pane_g

0xce43,	// (0x0004a21c) main_mp3_pane_g1

0x5ec0,	// (0x00043299) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0004cb11) main_mp3_pane_g

0xcea6,	// (0x0004a27f) main_mp3_pane_t1

0xa977,	// (0x00047d50) main_camera_pane_g8_ParamLimits

0xa977,	// (0x00047d50) main_camera_pane_g8

0x3144,	// (0x0004051d) main_video_pane_g7_ParamLimits

0x3144,	// (0x0004051d) main_video_pane_g7

0x5996,	// (0x00042d6f) main_camera2_pane_t7_ParamLimits

0x5996,	// (0x00042d6f) main_camera2_pane_t7

0xaabf,	// (0x00047e98) scroll_pane_cp025_ParamLimits

0xaabf,	// (0x00047e98) scroll_pane_cp025

0xaad3,	// (0x00047eac) scroll_pane_cp026_ParamLimits

0xaad3,	// (0x00047eac) scroll_pane_cp026

0xaae2,	// (0x00047ebb) wml_content_pane_ParamLimits

0xa021,	// (0x000473fa) main_touch_calib_pane

0x5f64,	// (0x0004333d) main_touch_calib_pane_g1

0x5f70,	// (0x00043349) main_touch_calib_pane_g2

0x5f7c,	// (0x00043355) main_touch_calib_pane_g3

0x5f88,	// (0x00043361) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0004cb2f) main_touch_calib_pane_g

0x5f94,	// (0x0004336d) main_touch_calib_pane_t1

0x5fad,	// (0x00043386) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0004cb38) main_touch_calib_pane_t

0xb288,	// (0x00048661) mup_progress_pane_cp02

0xb2bd,	// (0x00048696) navi_pane_g1

0xb378,	// (0x00048751) navi_pane_mp_t3

0xad62,	// (0x0004813b) main_mp3_pane_ParamLimits

0x55e5,	// (0x000429be) navi_pane_ParamLimits

0xce43,	// (0x0004a21c) main_mp3_pane_g1_ParamLimits

0x5ec0,	// (0x00043299) main_mp3_pane_g2_ParamLimits

0x5ecc,	// (0x000432a5) main_mp3_pane_g3_ParamLimits

0x5ecc,	// (0x000432a5) main_mp3_pane_g3

0x5ed8,	// (0x000432b1) main_mp3_pane_g4_ParamLimits

0x5ed8,	// (0x000432b1) main_mp3_pane_g4

0xce73,	// (0x0004a24c) main_mp3_pane_g5_ParamLimits

0xce73,	// (0x0004a24c) main_mp3_pane_g5

0xce81,	// (0x0004a25a) main_mp3_pane_g6_ParamLimits

0xce81,	// (0x0004a25a) main_mp3_pane_g6

0xce8e,	// (0x0004a267) main_mp3_pane_g7_ParamLimits

0xce8e,	// (0x0004a267) main_mp3_pane_g7

0xce9a,	// (0x0004a273) main_mp3_pane_g8_ParamLimits

0xce9a,	// (0x0004a273) main_mp3_pane_g8

0xf738,	// (0x0004cb11) main_mp3_pane_g_ParamLimits

0x5ee4,	// (0x000432bd) main_mp3_pane_t2

0x5ef4,	// (0x000432cd) main_mp3_pane_t3

0xceb4,	// (0x0004a28d) main_mp3_pane_t4

0xcec2,	// (0x0004a29b) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0004cb22) main_mp3_pane_t

0xced0,	// (0x0004a2a9) mup_progress_pane_cp01

0x0d07,	// (0x0003e0e0) aid_zoom_text_secondary2

0xcc8d,	// (0x0004a066) list_cale_ev2_pane

0xcc95,	// (0x0004a06e) scroll_pane_cp023_ParamLimits

0x6008,	// (0x000433e1) field_cale_ev2_pane_ParamLimits

0x6008,	// (0x000433e1) field_cale_ev2_pane

0x1035,	// (0x0003e40e) field_cale_ev2_pane_g1_ParamLimits

0x1035,	// (0x0003e40e) field_cale_ev2_pane_g1

0x1041,	// (0x0003e41a) field_cale_ev2_pane_g2_ParamLimits

0x1041,	// (0x0003e41a) field_cale_ev2_pane_g2

0x1059,	// (0x0003e432) field_cale_ev2_pane_g3_ParamLimits

0x1059,	// (0x0003e432) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0004cb43) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0004cb43) field_cale_ev2_pane_g

0x107d,	// (0x0003e456) field_cale_ev2_pane_t1_ParamLimits

0x107d,	// (0x0003e456) field_cale_ev2_pane_t1

0x1094,	// (0x0003e46d) field_cale_ev2_pane_t2_ParamLimits

0x1094,	// (0x0003e46d) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0004cb4c) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0004cb4c) field_cale_ev2_pane_t

0x4dbf,	// (0x00042198) main_postcard_pane_g5_ParamLimits

0x4dbf,	// (0x00042198) main_postcard_pane_g5

0x4dcd,	// (0x000421a6) main_postcard_pane_g6_ParamLimits

0x4dcd,	// (0x000421a6) main_postcard_pane_g6

0x2f8e,	// (0x00040367) camera2_autofocus_pane_cp_ParamLimits

0x2f8e,	// (0x00040367) camera2_autofocus_pane_cp

0xad62,	// (0x0004813b) main_mup3_pane

0x6056,	// (0x0004342f) main_mup3_pane_g1_ParamLimits

0x6056,	// (0x0004342f) main_mup3_pane_g1

0x6077,	// (0x00043450) main_mup3_pane_g2_ParamLimits

0x6077,	// (0x00043450) main_mup3_pane_g2

0x60f3,	// (0x000434cc) main_mup3_pane_g3_ParamLimits

0x60f3,	// (0x000434cc) main_mup3_pane_g3

0x6136,	// (0x0004350f) main_mup3_pane_g4_ParamLimits

0x6136,	// (0x0004350f) main_mup3_pane_g4

0x6179,	// (0x00043552) main_mup3_pane_g5_ParamLimits

0x6179,	// (0x00043552) main_mup3_pane_g5

0x61be,	// (0x00043597) main_mup3_pane_g6_ParamLimits

0x61be,	// (0x00043597) main_mup3_pane_g6

0xced8,	// (0x0004a2b1) main_mup3_pane_g7_ParamLimits

0xced8,	// (0x0004a2b1) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0004cb5c) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0004cb5c) main_mup3_pane_g

0x6234,	// (0x0004360d) main_mup3_pane_t1_ParamLimits

0x6234,	// (0x0004360d) main_mup3_pane_t1

0x62a3,	// (0x0004367c) main_mup3_pane_t2_ParamLimits

0x62a3,	// (0x0004367c) main_mup3_pane_t2

0x636c,	// (0x00043745) main_mup3_pane_t4_ParamLimits

0x636c,	// (0x00043745) main_mup3_pane_t4

0x63ba,	// (0x00043793) main_mup3_pane_t5_ParamLimits

0x63ba,	// (0x00043793) main_mup3_pane_t5

0x646a,	// (0x00043843) main_mup3_pane_t6_ParamLimits

0x646a,	// (0x00043843) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0004cb6d) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0004cb6d) main_mup3_pane_t

0x6516,	// (0x000438ef) mup3_progress_pane_ParamLimits

0x6516,	// (0x000438ef) mup3_progress_pane

0x658a,	// (0x00043963) popup_mup3_control_window_ParamLimits

0x658a,	// (0x00043963) popup_mup3_control_window

0xcee6,	// (0x0004a2bf) popup_mup3_text_window

0x65a3,	// (0x0004397c) mup3_progress_pane_t1

0x65c2,	// (0x0004399b) mup3_progress_pane_t2

0xceee,	// (0x0004a2c7) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0004cb7a) mup3_progress_pane_t

0xcf0b,	// (0x0004a2e4) mup_progress_pane_cp03

0xa021,	// (0x000473fa) bg_tb_trans_pane_cp04

0x65e1,	// (0x000439ba) mup3_volume_pane

0x65e9,	// (0x000439c2) popup_mup3_control_window_g1

0x65f2,	// (0x000439cb) mup3_volume_pane_g1

0x65fb,	// (0x000439d4) mup3_volume_pane_g2

0x6604,	// (0x000439dd) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0004cb81) mup3_volume_pane_g

0xa021,	// (0x000473fa) bg_tb_trans_pane_cp03

0xcf1b,	// (0x0004a2f4) popup_mup3_text_window_g1

0xcf23,	// (0x0004a2fc) popup_mup3_text_window_t1

0xa7f0,	// (0x00047bc9) list_calc_item_pane_g1_ParamLimits

0xc964,	// (0x00049d3d) mup_volume_pane_cp_g1

0x5fc6,	// (0x0004339f) main_touch_calib_pane_t3

0x5fdc,	// (0x000433b5) main_touch_calib_pane_t4

0x5ff2,	// (0x000433cb) main_touch_calib_pane_t5

0x2139,	// (0x0003f512) aid_cell_size_toolbar2

0x2141,	// (0x0003f51a) aid_popup3_width_pane

0x0cff,	// (0x0003e0d8) aid_zoom_text_msg_primary

0x2f5b,	// (0x00040334) vorec_t7

0xa7b4,	// (0x00047b8d) bg_calc_paper_pane_g1_ParamLimits

0xa7c0,	// (0x00047b99) bg_calc_paper_pane_g2_ParamLimits

0xa7cc,	// (0x00047ba5) bg_calc_paper_pane_g3_ParamLimits

0xa7d8,	// (0x00047bb1) bg_calc_paper_pane_g4_ParamLimits

0xa7e4,	// (0x00047bbd) bg_calc_paper_pane_g5_ParamLimits

0x27c7,	// (0x0003fba0) bg_calc_paper_pane_g6_ParamLimits

0x27d8,	// (0x0003fbb1) bg_calc_paper_pane_g7_ParamLimits

0x27e9,	// (0x0003fbc2) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0004c534) bg_calc_paper_pane_g_ParamLimits

0x27fa,	// (0x0003fbd3) calc_bg_paper_pane_g9_ParamLimits

0x3075,	// (0x0004044e) image_qvga_pane_ParamLimits

0x3075,	// (0x0004044e) image_qvga_pane

0xa699,	// (0x00047a72) bg_popup_sub_pane_cp04_ParamLimits

0xb5fd,	// (0x000489d6) popup_mup_playback_window_g1_ParamLimits

0xb609,	// (0x000489e2) popup_mup_playback_window_t1_ParamLimits

0xb61e,	// (0x000489f7) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0004c8c0) popup_mup_playback_window_t_ParamLimits

0x5ac5,	// (0x00042e9e) main_mup2_pane_g3_ParamLimits

0x5ac5,	// (0x00042e9e) main_mup2_pane_g3

0x332d,	// (0x00040706) popup_toolbar_window_cp04

0xba13,	// (0x00048dec) popup_call2_audio_second_window_g3_ParamLimits

0xba13,	// (0x00048dec) popup_call2_audio_second_window_g3

0xbe1d,	// (0x000491f6) popup_call2_audio_first_window_g4_ParamLimits

0xbe1d,	// (0x000491f6) popup_call2_audio_first_window_g4

0xc49c,	// (0x00049875) popup_call2_audio_in_window_g4_ParamLimits

0xc49c,	// (0x00049875) popup_call2_audio_in_window_g4

0x4ed7,	// (0x000422b0) aid_area_sk_bg_cut_ParamLimits

0x4ed7,	// (0x000422b0) aid_area_sk_bg_cut

0xb633,	// (0x00048a0c) aid_area_sk_bg_cut_2_ParamLimits

0xb633,	// (0x00048a0c) aid_area_sk_bg_cut_2

0x5e55,	// (0x0004322e) aid_placing_details_win

0x5e5d,	// (0x00043236) aid_placing_details_win_2

0xcd85,	// (0x0004a15e) camera2_autofocus_pane_g1_ParamLimits

0x2390,	// (0x0003f769) popup_fixed_preview_cale_window_ParamLimits

0x2390,	// (0x0003f769) popup_fixed_preview_cale_window

0xb421,	// (0x000487fa) navi_slider_pane_g3

0xb42a,	// (0x00048803) navi_slider_pane_g4

0xb3fe,	// (0x000487d7) navi_slider_pane_g5

0xb421,	// (0x000487fa) navi_slider_pane_g6

0x480f,	// (0x00041be8) navi_slider_pane_g7

0xb53d,	// (0x00048916) mup_scale_pane_g3

0xb546,	// (0x0004891f) mup_scale_pane_g4

0xb54f,	// (0x00048928) mup_scale_pane_g5

0x4c4e,	// (0x00042027) mup_scale_pane_g6

0x4c57,	// (0x00042030) mup_scale_pane_g7

0xb421,	// (0x000487fa) cams2_slider_pane_g3

0xc9e6,	// (0x00049dbf) cams2_slider_pane_g4

0x5dad,	// (0x00043186) cams2_slider_pane_g5

0xb421,	// (0x000487fa) cams2_slider_pane_g6

0x5db5,	// (0x0004318e) cams2_slider_pane_g7

0xcc13,	// (0x00049fec) camera2_autofocus_pane_cp_g1

0xc7fd,	// (0x00049bd6) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7fd,	// (0x00049bd6) bg_popup_preview_window_pane_cp02

0xcf31,	// (0x0004a30a) list_fp_cale_pane_ParamLimits

0xcf31,	// (0x0004a30a) list_fp_cale_pane

0xcf3d,	// (0x0004a316) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf3d,	// (0x0004a316) popup_fixed_preview_cale_window_t1

0x660d,	// (0x000439e6) popup_fixed_preview_cale_window_t2_ParamLimits

0x660d,	// (0x000439e6) popup_fixed_preview_cale_window_t2

0x6622,	// (0x000439fb) popup_fixed_preview_cale_window_t3_ParamLimits

0x6622,	// (0x000439fb) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0004cb88) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0004cb88) popup_fixed_preview_cale_window_t

0x6637,	// (0x00043a10) list_single_fp_cale_pane_ParamLimits

0x6637,	// (0x00043a10) list_single_fp_cale_pane

0xcf5b,	// (0x0004a334) list_single_fp_cale_pane_g1_ParamLimits

0xcf5b,	// (0x0004a334) list_single_fp_cale_pane_g1

0xcf67,	// (0x0004a340) list_single_fp_cale_pane_g2_ParamLimits

0xcf67,	// (0x0004a340) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0004cb8f) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0004cb8f) list_single_fp_cale_pane_g

0xcf80,	// (0x0004a359) list_single_fp_cale_pane_t1_ParamLimits

0xcf80,	// (0x0004a359) list_single_fp_cale_pane_t1

0xcf92,	// (0x0004a36b) list_single_fp_cale_pane_t2_ParamLimits

0xcf92,	// (0x0004a36b) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0004cb96) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0004cb96) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa021,	// (0x000473fa) main_dialer_pane

0x664b,	// (0x00043a24) aid_cell_size_keypad

0x6655,	// (0x00043a2e) dialer_ne_pane

0x665f,	// (0x00043a38) grid_dialer_command_1_pane

0x6667,	// (0x00043a40) grid_dialer_command_2_pane

0x666f,	// (0x00043a48) grid_dialer_keypad_pane

0x6683,	// (0x00043a5c) bg_popup_call_pane_cp06_ParamLimits

0x6683,	// (0x00043a5c) bg_popup_call_pane_cp06

0x668f,	// (0x00043a68) dialer_ne_clear_pane_ParamLimits

0x668f,	// (0x00043a68) dialer_ne_clear_pane

0xcfc5,	// (0x0004a39e) dialer_ne_pane_g1

0xcfcd,	// (0x0004a3a6) dialer_ne_pane_t1_ParamLimits

0xcfcd,	// (0x0004a3a6) dialer_ne_pane_t1

0x669b,	// (0x00043a74) dialer_ne_pane_t2_ParamLimits

0x669b,	// (0x00043a74) dialer_ne_pane_t2

0x66b8,	// (0x00043a91) dialer_ne_pane_t3_ParamLimits

0x66b8,	// (0x00043a91) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0004cb9b) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0004cb9b) dialer_ne_pane_t

0x66dc,	// (0x00043ab5) dialer_ne_pane_t3_copy1_ParamLimits

0x66dc,	// (0x00043ab5) dialer_ne_pane_t3_copy1

0x6700,	// (0x00043ad9) cell_dialer_keypad_pane_ParamLimits

0x6700,	// (0x00043ad9) cell_dialer_keypad_pane

0x6717,	// (0x00043af0) cell_dialer_command_1_pane_ParamLimits

0x6717,	// (0x00043af0) cell_dialer_command_1_pane

0x672d,	// (0x00043b06) cell_dialer_command_2_pane_ParamLimits

0x672d,	// (0x00043b06) cell_dialer_command_2_pane

0xcfdf,	// (0x0004a3b8) bg_button_pane_cp02_ParamLimits

0xcfdf,	// (0x0004a3b8) bg_button_pane_cp02

0x673c,	// (0x00043b15) cell_dialer_keypad_pane_g1_ParamLimits

0x673c,	// (0x00043b15) cell_dialer_keypad_pane_g1

0xcfdf,	// (0x0004a3b8) bg_button_pane_cp03_ParamLimits

0xcfdf,	// (0x0004a3b8) bg_button_pane_cp03

0x6751,	// (0x00043b2a) cell_dialer_command_1_pane_g1_ParamLimits

0x6751,	// (0x00043b2a) cell_dialer_command_1_pane_g1

0xcfeb,	// (0x0004a3c4) bg_button_pane_cp04

0x6765,	// (0x00043b3e) cell_dialer_command_2_pane_g1

0xb3ed,	// (0x000487c6) bg_button_pane_cp06

0xcff3,	// (0x0004a3cc) dialer_ne_clear_pane_g1

0xb2c9,	// (0x000486a2) navi_pane_g2

0xb2f7,	// (0x000486d0) navi_pane_g3

0x0002,

0xf3ea,	// (0x0004c7c3) navi_pane_g

0xb386,	// (0x0004875f) navi_pane_mv_g2

0xb3ad,	// (0x00048786) navi_pane_mv_g5

0x47da,	// (0x00041bb3) navi_pane_mv_t1

0xa7a8,	// (0x00047b81) main_clock2_pane

0x67a5,	// (0x00043b7e) main_clock2_list_pane_ParamLimits

0x67a5,	// (0x00043b7e) main_clock2_list_pane

0x67cf,	// (0x00043ba8) main_clock2_pane_t1_ParamLimits

0x67cf,	// (0x00043ba8) main_clock2_pane_t1

0x67f3,	// (0x00043bcc) main_clock2_pane_t2_ParamLimits

0x67f3,	// (0x00043bcc) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0004cba2) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0004cba2) main_clock2_pane_t

0x684e,	// (0x00043c27) popup_clock_analogue_window_cp03_ParamLimits

0x684e,	// (0x00043c27) popup_clock_analogue_window_cp03

0x686c,	// (0x00043c45) popup_clock_digital_window_cp02_ParamLimits

0x686c,	// (0x00043c45) popup_clock_digital_window_cp02

0x68db,	// (0x00043cb4) main_clock2_list_single_pane_ParamLimits

0x68db,	// (0x00043cb4) main_clock2_list_single_pane

0xb3ed,	// (0x000487c6) list_highlight_pane_cp05

0xd011,	// (0x0004a3ea) main_clock2_list_single_pane_t1

0x332d,	// (0x00040706) popup_toolbar_window_cp04_ParamLimits

0x5e7f,	// (0x00043258) camera2_autofocus_pane_g2_ParamLimits

0x5e7f,	// (0x00043258) camera2_autofocus_pane_g2

0x5e8b,	// (0x00043264) camera2_autofocus_pane_g3_ParamLimits

0x5e8b,	// (0x00043264) camera2_autofocus_pane_g3

0x5e97,	// (0x00043270) camera2_autofocus_pane_g4_ParamLimits

0x5e97,	// (0x00043270) camera2_autofocus_pane_g4

0x5ea3,	// (0x0004327c) camera2_autofocus_pane_g5_ParamLimits

0x5ea3,	// (0x0004327c) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0004caeb) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0004caeb) camera2_autofocus_pane_g

0x6036,	// (0x0004340f) camera2_autofocus_pane_cp_g2

0x603e,	// (0x00043417) camera2_autofocus_pane_cp_g3

0x6046,	// (0x0004341f) camera2_autofocus_pane_cp_g4

0x604e,	// (0x00043427) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0004cb51) camera2_autofocus_pane_cp_g

0x667b,	// (0x00043a54) popup_dialer_spcha_window

0xa021,	// (0x000473fa) bg_popup_sub_pane_cp07

0xd01f,	// (0x0004a3f8) list_spcha_pane

0xd027,	// (0x0004a400) list_single_spcha_pane_ParamLimits

0xd027,	// (0x0004a400) list_single_spcha_pane

0xa021,	// (0x000473fa) list_highlight_pane_cp06

0xd038,	// (0x0004a411) list_single_spcha_pane_t1

0xc246,	// (0x0004961f) popup_call2_audio_out_window_g4_ParamLimits

0xc246,	// (0x0004961f) popup_call2_audio_out_window_g4

0xa021,	// (0x000473fa) main_imed2_pane

0x5514,	// (0x000428ed) popup_imed_adjust2_window

0x5527,	// (0x00042900) popup_imed_trans_window_ParamLimits

0x5527,	// (0x00042900) popup_imed_trans_window

0xca4f,	// (0x00049e28) popup_blid_sat_info2_window_t1

0xca5d,	// (0x00049e36) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0004ca80) popup_blid_sat_info2_window_t

0x6985,	// (0x00043d5e) aid_size_cell_colour_35

0x699f,	// (0x00043d78) aid_size_cell_colour_112

0x69b6,	// (0x00043d8f) aid_size_cell_effect

0xad62,	// (0x0004813b) bg_tb_trans_pane_cp02

0xb407,	// (0x000487e0) heading_imed_pane

0x69d0,	// (0x00043da9) listscroll_imed_pane

0xd046,	// (0x0004a41f) heading_imed_pane_g1

0xd04e,	// (0x0004a427) heading_imed_pane_t1

0xd05c,	// (0x0004a435) grid_imed_colour_35_pane_ParamLimits

0xd05c,	// (0x0004a435) grid_imed_colour_35_pane

0x69dc,	// (0x00043db5) grid_imed_effect_pane

0xd074,	// (0x0004a44d) list_imed_aspect_pane

0x69ec,	// (0x00043dc5) scroll_pane_cp027_ParamLimits

0x69ec,	// (0x00043dc5) scroll_pane_cp027

0x69f8,	// (0x00043dd1) cell_imed_effect_pane_ParamLimits

0x69f8,	// (0x00043dd1) cell_imed_effect_pane

0xd07c,	// (0x0004a455) cell_imed_colour_pane_ParamLimits

0xd07c,	// (0x0004a455) cell_imed_colour_pane

0xd0be,	// (0x0004a497) cell_imed_colour_pane_g1_ParamLimits

0xd0be,	// (0x0004a497) cell_imed_colour_pane_g1

0xd0cf,	// (0x0004a4a8) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0cf,	// (0x0004a4a8) hgihlgiht_grid_pane_cp016

0x6a10,	// (0x00043de9) cell_imed_effect_pane_g1

0x6a18,	// (0x00043df1) grid_highlight_pane_cp017

0xd0e0,	// (0x0004a4b9) list_imed_single_pane_ParamLimits

0xd0e0,	// (0x0004a4b9) list_imed_single_pane

0xa021,	// (0x000473fa) list_highlight_pane_cp07

0xd0f6,	// (0x0004a4cf) list_imed_aspect_pane_comp1_t1

0xc809,	// (0x00049be2) bg_tb_trans_pane_cp05

0xd118,	// (0x0004a4f1) popup_imed_adjust2_window_g1

0xd13f,	// (0x0004a518) popup_imed_adjust2_window_t1

0xd157,	// (0x0004a530) slider_imed_adjust_pane

0xd16b,	// (0x0004a544) slider_imed_adjust_pane_g1

0xd17b,	// (0x0004a554) slider_imed_adjust_pane_g2

0xd18b,	// (0x0004a564) slider_imed_adjust_pane_g3

0xd19c,	// (0x0004a575) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0004cbbf) slider_imed_adjust_pane_g

0x6a21,	// (0x00043dfa) aid_size_cell_clipart2

0x6a2d,	// (0x00043e06) grid_imed_clipart_pane

0xd1ad,	// (0x0004a586) scroll_pane_cp031

0x6a37,	// (0x00043e10) cell_imed_clipart_pane_ParamLimits

0x6a37,	// (0x00043e10) cell_imed_clipart_pane

0x6a5e,	// (0x00043e37) cell_imed_clipart_pane_g1

0xa021,	// (0x000473fa) grid_highlight_pane_cp014

0x67b1,	// (0x00043b8a) main_clock2_pane_g1_ParamLimits

0x67b1,	// (0x00043b8a) main_clock2_pane_g1

0x6886,	// (0x00043c5f) aid_call2_pane_cp10

0x6898,	// (0x00043c71) aid_call_pane_cp10

0xb228,	// (0x00048601) popup_clock_analogue_window_cp10_g1

0xb228,	// (0x00048601) popup_clock_analogue_window_cp10_g2

0x68aa,	// (0x00043c83) popup_clock_analogue_window_cp10_g3

0x68aa,	// (0x00043c83) popup_clock_analogue_window_cp10_g4

0xb228,	// (0x00048601) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0004cbad) popup_clock_analogue_window_cp10_g

0x68bc,	// (0x00043c95) popup_clock_analogue_window_cp10_t1

0x68ed,	// (0x00043cc6) clock_digital_number_pane_cp10_ParamLimits

0x68ed,	// (0x00043cc6) clock_digital_number_pane_cp10

0x6905,	// (0x00043cde) clock_digital_number_pane_cp11_ParamLimits

0x6905,	// (0x00043cde) clock_digital_number_pane_cp11

0x691d,	// (0x00043cf6) clock_digital_number_pane_cp12_ParamLimits

0x691d,	// (0x00043cf6) clock_digital_number_pane_cp12

0x6935,	// (0x00043d0e) clock_digital_number_pane_cp13_ParamLimits

0x6935,	// (0x00043d0e) clock_digital_number_pane_cp13

0x694d,	// (0x00043d26) clock_digital_separator_pane_cp10_ParamLimits

0x694d,	// (0x00043d26) clock_digital_separator_pane_cp10

0x6965,	// (0x00043d3e) popup_clock_digital_window_cp02_t1_ParamLimits

0x6965,	// (0x00043d3e) popup_clock_digital_window_cp02_t1

0xa691,	// (0x00047a6a) clock_digital_number_pane_cp10_g1

0xa691,	// (0x00047a6a) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0004cbc8) clock_digital_number_pane_cp10_g

0xa691,	// (0x00047a6a) clock_digital_separator_pane_cp10_g1

0xa691,	// (0x00047a6a) clock_digital_separator_pane_g2_cp10

0xb3b5,	// (0x0004878e) navi_pane_vded_g4

0xb3be,	// (0x00048797) navi_pane_vded_g5

0xb3c7,	// (0x000487a0) navi_pane_vded_t1

0xa021,	// (0x000473fa) main_vded_pane

0x6a67,	// (0x00043e40) main_vded_pane_g1

0x6a73,	// (0x00043e4c) main_vded_pane_g2

0x6a7d,	// (0x00043e56) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0004cbcd) main_vded_pane_g

0x6a87,	// (0x00043e60) main_vded_pane_t1

0x6a95,	// (0x00043e6e) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0004cbd4) main_vded_pane_t

0x6aa3,	// (0x00043e7c) vded_slider_pane

0x6aad,	// (0x00043e86) vded_video_pane

0xd1b5,	// (0x0004a58e) vded_video_pane_g1

0x6ab7,	// (0x00043e90) vded_video_pane_g2

0xcc13,	// (0x00049fec) vded_video_pane_g3

0x0002,

0xf800,	// (0x0004cbd9) vded_video_pane_g

0xd1bf,	// (0x0004a598) vded_slider_pane_g1

0xd1c8,	// (0x0004a5a1) vded_slider_pane_g2

0xd1d1,	// (0x0004a5aa) vded_slider_pane_g3

0xd1da,	// (0x0004a5b3) vded_slider_pane_g4

0xd1e3,	// (0x0004a5bc) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0004cbe0) vded_slider_pane_g

0x657c,	// (0x00043955) mup3_rocker_pane_ParamLimits

0x657c,	// (0x00043955) mup3_rocker_pane

0x6ac0,	// (0x00043e99) mup3_control_keys_pane_g1

0x6ac8,	// (0x00043ea1) mup3_control_keys_pane_g2

0x6ad0,	// (0x00043ea9) mup3_control_keys_pane_g3

0x6ad8,	// (0x00043eb1) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0004cbeb) mup3_control_keys_pane_g

0x23b8,	// (0x0003f791) popup_toolbar2_fixed_window_cp01_ParamLimits

0x23b8,	// (0x0003f791) popup_toolbar2_fixed_window_cp01

0x6596,	// (0x0004396f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6596,	// (0x0004396f) popup_toolbar2_fixed_window_cp02

0xbb85,	// (0x00048f5e) popup_call2_audio_second_window_t4_ParamLimits

0xbb85,	// (0x00048f5e) popup_call2_audio_second_window_t4

0xc0b3,	// (0x0004948c) popup_call2_audio_first_window_t6_ParamLimits

0xc0b3,	// (0x0004948c) popup_call2_audio_first_window_t6

0xc349,	// (0x00049722) popup_call2_audio_out_window_t6_ParamLimits

0xc349,	// (0x00049722) popup_call2_audio_out_window_t6

0xa021,	// (0x000473fa) main_vitu_pane

0x6ae8,	// (0x00043ec1) aid_size_cell_itu_ParamLimits

0x6ae8,	// (0x00043ec1) aid_size_cell_itu

0xdf11,	// (0x0004b2ea) bg_popup_window_pane_cp08_ParamLimits

0xdf11,	// (0x0004b2ea) bg_popup_window_pane_cp08

0x6af6,	// (0x00043ecf) field_vitu_entry_pane_ParamLimits

0x6af6,	// (0x00043ecf) field_vitu_entry_pane

0x6b05,	// (0x00043ede) grid_vitu_function_pane_ParamLimits

0x6b05,	// (0x00043ede) grid_vitu_function_pane

0x6b15,	// (0x00043eee) grid_vitu_itu_pane_ParamLimits

0x6b15,	// (0x00043eee) grid_vitu_itu_pane

0x6b25,	// (0x00043efe) cell_vitu_itu_pane_ParamLimits

0x6b25,	// (0x00043efe) cell_vitu_itu_pane

0x6b3a,	// (0x00043f13) cell_vitu_function_pane_ParamLimits

0x6b3a,	// (0x00043f13) cell_vitu_function_pane

0xad62,	// (0x0004813b) bg_popup_sub_pane_cp08_ParamLimits

0xad62,	// (0x0004813b) bg_popup_sub_pane_cp08

0x6b4e,	// (0x00043f27) field_vitu_entry_pane_t1_ParamLimits

0x6b4e,	// (0x00043f27) field_vitu_entry_pane_t1

0xd204,	// (0x0004a5dd) field_vitu_entry_pane_t2_ParamLimits

0xd204,	// (0x0004a5dd) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0004cbf9) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0004cbf9) field_vitu_entry_pane_t

0xd221,	// (0x0004a5fa) bg_button_pane_cp05_ParamLimits

0xd221,	// (0x0004a5fa) bg_button_pane_cp05

0x6b6b,	// (0x00043f44) cell_vitu_itu_pane_g1

0x6b83,	// (0x00043f5c) cell_vitu_itu_pane_t1_ParamLimits

0x6b83,	// (0x00043f5c) cell_vitu_itu_pane_t1

0x6b95,	// (0x00043f6e) cell_vitu_itu_pane_t2_ParamLimits

0x6b95,	// (0x00043f6e) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0004cbfe) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0004cbfe) cell_vitu_itu_pane_t

0xd22f,	// (0x0004a608) bg_button_pane_cp07

0x6bd8,	// (0x00043fb1) cell_vitu_function_pane_g1

0x266b,	// (0x0003fa44) main_calc_pane_g1

0x2175,	// (0x0003f54e) aid_visual_content_pane

0xa021,	// (0x000473fa) main_vradio_pane

0x6be1,	// (0x00043fba) main_vradio_pane_g1_ParamLimits

0x6be1,	// (0x00043fba) main_vradio_pane_g1

0xd239,	// (0x0004a612) main_vradio_pane_g2_ParamLimits

0xd239,	// (0x0004a612) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0004cc05) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0004cc05) main_vradio_pane_g

0x6bf1,	// (0x00043fca) main_vradio_pane_t1_ParamLimits

0x6bf1,	// (0x00043fca) main_vradio_pane_t1

0x6c03,	// (0x00043fdc) main_vradio_pane_t2_ParamLimits

0x6c03,	// (0x00043fdc) main_vradio_pane_t2

0xd246,	// (0x0004a61f) main_vradio_pane_t3_ParamLimits

0xd246,	// (0x0004a61f) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0004cc0a) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0004cc0a) main_vradio_pane_t

0x6c15,	// (0x00043fee) vradio_rocker_control_pane_ParamLimits

0x6c15,	// (0x00043fee) vradio_rocker_control_pane

0x6c21,	// (0x00043ffa) vradio_station_info_pane_ParamLimits

0x6c21,	// (0x00043ffa) vradio_station_info_pane

0xd25a,	// (0x0004a633) vradio_frequency_info_pane_ParamLimits

0xd25a,	// (0x0004a633) vradio_frequency_info_pane

0xcc13,	// (0x00049fec) vradio_station_info_pane_g1

0xd269,	// (0x0004a642) vradio_station_info_pane_t1_ParamLimits

0xd269,	// (0x0004a642) vradio_station_info_pane_t1

0xd28b,	// (0x0004a664) vradio_station_info_pane_t2_ParamLimits

0xd28b,	// (0x0004a664) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0004cc11) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0004cc11) vradio_station_info_pane_t

0xd29d,	// (0x0004a676) vradio_tuning_pane

0xd2a5,	// (0x0004a67e) vradio_rocker_control_pane_g1

0xd2ad,	// (0x0004a686) vradio_rocker_control_pane_g2

0xd2b5,	// (0x0004a68e) vradio_rocker_control_pane_g3

0xd2bd,	// (0x0004a696) vradio_rocker_control_pane_g4

0xd2c5,	// (0x0004a69e) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0004cc16) vradio_rocker_control_pane_g

0x6c30,	// (0x00044009) vradio_frequency_info_pane_g1

0xd2cd,	// (0x0004a6a6) vradio_frequency_info_pane_t1_ParamLimits

0xd2cd,	// (0x0004a6a6) vradio_frequency_info_pane_t1

0x6c3a,	// (0x00044013) vradio_tuning_pane_g1

0x6c43,	// (0x0004401c) vradio_tuning_pane_t1

0x21be,	// (0x0003f597) area_side_right_pane_ParamLimits

0x21be,	// (0x0003f597) area_side_right_pane

0xc7c4,	// (0x00049b9d) status_small_pane_g1

0xc7cc,	// (0x00049ba5) status_small_pane_g2

0xc7d5,	// (0x00049bae) status_small_pane_g3

0xc7de,	// (0x00049bb7) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0004c9d6) status_small_pane_g

0xc7e7,	// (0x00049bc0) status_small_pane_t1

0xa021,	// (0x000473fa) main_video3_pane

0xd2e1,	// (0x0004a6ba) cams_zoom_vslider_pane

0xd2e9,	// (0x0004a6c2) image3_wide_pane_ParamLimits

0xd2e9,	// (0x0004a6c2) image3_wide_pane

0xd303,	// (0x0004a6dc) image3_wide_small_pane

0xd30f,	// (0x0004a6e8) main_video3_pane_g1_ParamLimits

0xd30f,	// (0x0004a6e8) main_video3_pane_g1

0xd32b,	// (0x0004a704) main_video3_pane_g2_ParamLimits

0xd32b,	// (0x0004a704) main_video3_pane_g2

0x0001,

0xf848,	// (0x0004cc21) main_video3_pane_g_ParamLimits

0xf848,	// (0x0004cc21) main_video3_pane_g

0xd347,	// (0x0004a720) main_video3_pane_t1_ParamLimits

0xd347,	// (0x0004a720) main_video3_pane_t1

0xd372,	// (0x0004a74b) main_video3_pane_t2_ParamLimits

0xd372,	// (0x0004a74b) main_video3_pane_t2

0xd39d,	// (0x0004a776) main_video3_pane_t3_ParamLimits

0xd39d,	// (0x0004a776) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0004cc26) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0004cc26) main_video3_pane_t

0xd3ca,	// (0x0004a7a3) cams_zoom_vslider_pane_g1

0xd3d3,	// (0x0004a7ac) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0004cc2d) cams_zoom_vslider_pane_g

0xd3db,	// (0x0004a7b4) small_slider_vertical_pane

0xcc13,	// (0x00049fec) small_slider_vertical_pane_g1

0xcc13,	// (0x00049fec) small_slider_vertical_pane_g2

0xd3e3,	// (0x0004a7bc) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0004cc32) small_slider_vertical_pane_g

0xa021,	// (0x000473fa) main_hwr_training_pane

0xd3ec,	// (0x0004a7c5) hwr_training_instruct_pane_ParamLimits

0xd3ec,	// (0x0004a7c5) hwr_training_instruct_pane

0x6c52,	// (0x0004402b) hwr_training_navi_pane_ParamLimits

0x6c52,	// (0x0004402b) hwr_training_navi_pane

0x6c6c,	// (0x00044045) hwr_training_write_pane_ParamLimits

0x6c6c,	// (0x00044045) hwr_training_write_pane

0xa021,	// (0x000473fa) bg_frame_shadow_pane

0xd437,	// (0x0004a810) hwr_training_write_pane_g1

0xd43f,	// (0x0004a818) hwr_training_write_pane_g2

0xd447,	// (0x0004a820) hwr_training_write_pane_g3

0xd44f,	// (0x0004a828) hwr_training_write_pane_g4

0xd457,	// (0x0004a830) hwr_training_write_pane_g5

0xd45f,	// (0x0004a838) hwr_training_write_pane_g6

0xd467,	// (0x0004a840) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0004cc39) hwr_training_write_pane_g

0x6ca4,	// (0x0004407d) hwr_training_navi_pane_g1_ParamLimits

0x6ca4,	// (0x0004407d) hwr_training_navi_pane_g1

0x6cb6,	// (0x0004408f) hwr_training_navi_pane_g2_ParamLimits

0x6cb6,	// (0x0004408f) hwr_training_navi_pane_g2

0x6cc8,	// (0x000440a1) hwr_training_navi_pane_g3_ParamLimits

0x6cc8,	// (0x000440a1) hwr_training_navi_pane_g3

0x6cd8,	// (0x000440b1) hwr_training_navi_pane_g4_ParamLimits

0x6cd8,	// (0x000440b1) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0004cc48) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0004cc48) hwr_training_navi_pane_g

0x6cf2,	// (0x000440cb) hwr_training_navi_pane_t1

0x6d00,	// (0x000440d9) list_single_hwr_training_instruct_pane_ParamLimits

0x6d00,	// (0x000440d9) list_single_hwr_training_instruct_pane

0xd46f,	// (0x0004a848) list_single_hwr_training_instruct_pane_t1

0xcb53,	// (0x00049f2c) bg_frame_shadow_pane_g1

0xd47e,	// (0x0004a857) bg_frame_shadow_pane_g2

0xd486,	// (0x0004a85f) bg_frame_shadow_pane_g3

0xd48e,	// (0x0004a867) bg_frame_shadow_pane_g4

0xd496,	// (0x0004a86f) bg_frame_shadow_pane_g5

0xd49e,	// (0x0004a877) bg_frame_shadow_pane_g6

0xd4a6,	// (0x0004a87f) bg_frame_shadow_pane_g7

0xa873,	// (0x00047c4c) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0004cc53) bg_frame_shadow_pane_g

0xa021,	// (0x000473fa) main_video_tele_dialer_pane

0x6d2f,	// (0x00044108) aid_size_cell_video_keypad_ParamLimits

0x6d2f,	// (0x00044108) aid_size_cell_video_keypad

0x6d3f,	// (0x00044118) grid_video_dialer_keypad_pane_ParamLimits

0x6d3f,	// (0x00044118) grid_video_dialer_keypad_pane

0x6d73,	// (0x0004414c) video_down_pane_cp_ParamLimits

0x6d73,	// (0x0004414c) video_down_pane_cp

0x6d9d,	// (0x00044176) cell_video_dialer_keypad_pane_ParamLimits

0x6d9d,	// (0x00044176) cell_video_dialer_keypad_pane

0xd4ae,	// (0x0004a887) bg_button_pane_cp08_ParamLimits

0xd4ae,	// (0x0004a887) bg_button_pane_cp08

0x6db2,	// (0x0004418b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6db2,	// (0x0004418b) cell_video_dialer_keypad_pane_g1

0x6570,	// (0x00043949) mup3_rocker2_pane_ParamLimits

0x6570,	// (0x00043949) mup3_rocker2_pane

0xcc13,	// (0x00049fec) mup3_rocker2_pane_g1

0x5488,	// (0x00042861) main_dialer2_pane

0xa021,	// (0x000473fa) main_mp4_pane

0x6df5,	// (0x000441ce) main_mp4_pane_g1_ParamLimits

0x6df5,	// (0x000441ce) main_mp4_pane_g1

0x6e03,	// (0x000441dc) main_mp4_pane_g2_ParamLimits

0x6e03,	// (0x000441dc) main_mp4_pane_g2

0x6e11,	// (0x000441ea) main_mp4_pane_g3_ParamLimits

0x6e11,	// (0x000441ea) main_mp4_pane_g3

0x6e56,	// (0x0004422f) main_mp4_pane_g4_ParamLimits

0x6e56,	// (0x0004422f) main_mp4_pane_g4

0x6e7e,	// (0x00044257) main_mp4_pane_g5_ParamLimits

0x6e7e,	// (0x00044257) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0004cc73) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0004cc73) main_mp4_pane_g

0x6ece,	// (0x000442a7) main_mp4_pane_t1_ParamLimits

0x6ece,	// (0x000442a7) main_mp4_pane_t1

0x6f2a,	// (0x00044303) main_mp4_pane_t2_ParamLimits

0x6f2a,	// (0x00044303) main_mp4_pane_t2

0xd4ba,	// (0x0004a893) main_mp4_pane_t3_ParamLimits

0xd4ba,	// (0x0004a893) main_mp4_pane_t3

0x6f7c,	// (0x00044355) main_mp4_pane_t4_ParamLimits

0x6f7c,	// (0x00044355) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0004cc80) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0004cc80) main_mp4_pane_t

0x6fc0,	// (0x00044399) mp4_progress_pane_ParamLimits

0x6fc0,	// (0x00044399) mp4_progress_pane

0x700a,	// (0x000443e3) mp4_rocker_pane_ParamLimits

0x700a,	// (0x000443e3) mp4_rocker_pane

0xd4e2,	// (0x0004a8bb) mp4_progress_pane_t1

0xd4fb,	// (0x0004a8d4) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0004cc89) mp4_progress_pane_t

0xd514,	// (0x0004a8ed) mup_progress_pane_cp04

0xcc13,	// (0x00049fec) mp4_rocker_pane_g1

0x702a,	// (0x00044403) aid_cell_size_keypad2_ParamLimits

0x702a,	// (0x00044403) aid_cell_size_keypad2

0x703a,	// (0x00044413) dialer2_ne_pane_ParamLimits

0x703a,	// (0x00044413) dialer2_ne_pane

0x7048,	// (0x00044421) grid_dialer2_keypad_pane_ParamLimits

0x7048,	// (0x00044421) grid_dialer2_keypad_pane

0xd9e9,	// (0x0004adc2) bg_popup_call_pane_cp07_ParamLimits

0xd9e9,	// (0x0004adc2) bg_popup_call_pane_cp07

0x7058,	// (0x00044431) dialer2_ne_pane_t1_ParamLimits

0x7058,	// (0x00044431) dialer2_ne_pane_t1

0x707d,	// (0x00044456) cell_dialer2_keypad_pane_ParamLimits

0x707d,	// (0x00044456) cell_dialer2_keypad_pane

0xd532,	// (0x0004a90b) bg_button_pane_pane_cp04_ParamLimits

0xd532,	// (0x0004a90b) bg_button_pane_pane_cp04

0x7092,	// (0x0004446b) cell_dialer2_keypad_pane_g1_ParamLimits

0x7092,	// (0x0004446b) cell_dialer2_keypad_pane_g1

0x31ef,	// (0x000405c8) aid_placing_vt_set_content_ParamLimits

0x31ef,	// (0x000405c8) aid_placing_vt_set_content

0x321b,	// (0x000405f4) aid_placing_vt_set_title_ParamLimits

0x321b,	// (0x000405f4) aid_placing_vt_set_title

0xa021,	// (0x000473fa) main_image3_pane

0x712c,	// (0x00044505) area_side_right_pane_cp01_ParamLimits

0x712c,	// (0x00044505) area_side_right_pane_cp01

0xa6a7,	// (0x00047a80) main_image3_pane_g1_ParamLimits

0xa6a7,	// (0x00047a80) main_image3_pane_g1

0x7159,	// (0x00044532) main_image3_pane_g2_ParamLimits

0x7159,	// (0x00044532) main_image3_pane_g2

0x7172,	// (0x0004454b) main_image3_pane_g3_ParamLimits

0x7172,	// (0x0004454b) main_image3_pane_g3

0x718b,	// (0x00044564) main_image3_pane_g4_ParamLimits

0x718b,	// (0x00044564) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0004cc98) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0004cc98) main_image3_pane_g

0x71a4,	// (0x0004457d) main_image3_pane_t1_ParamLimits

0x71a4,	// (0x0004457d) main_image3_pane_t1

0x71c9,	// (0x000445a2) main_image3_pane_t2_ParamLimits

0x71c9,	// (0x000445a2) main_image3_pane_t2

0x71e8,	// (0x000445c1) main_image3_pane_t3_ParamLimits

0x71e8,	// (0x000445c1) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0004cca1) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0004cca1) main_image3_pane_t

0xdf11,	// (0x0004b2ea) grid_sctrl_middle_pane_cp01_ParamLimits

0xdf11,	// (0x0004b2ea) grid_sctrl_middle_pane_cp01

0x7249,	// (0x00044622) cell_sctrl_middle_pane_cp01_ParamLimits

0x7249,	// (0x00044622) cell_sctrl_middle_pane_cp01

0x725a,	// (0x00044633) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x725a,	// (0x00044633) cell_sctrl_middle_pane_cp01_g1

0xa021,	// (0x000473fa) main_call4_pane

0x7267,	// (0x00044640) aid_size_button_call4_ParamLimits

0x7267,	// (0x00044640) aid_size_button_call4

0x7297,	// (0x00044670) call4_windows_pane_ParamLimits

0x7297,	// (0x00044670) call4_windows_pane

0x72b1,	// (0x0004468a) grid_call4_button_pane_ParamLimits

0x72b1,	// (0x0004468a) grid_call4_button_pane

0xd53e,	// (0x0004a917) call4_windows_conf_pane

0xd553,	// (0x0004a92c) popup_call4_audio_first_window_ParamLimits

0xd553,	// (0x0004a92c) popup_call4_audio_first_window

0xd59f,	// (0x0004a978) popup_call4_audio_second_window_ParamLimits

0xd59f,	// (0x0004a978) popup_call4_audio_second_window

0xd5b3,	// (0x0004a98c) popup_call4_audio_wait_window_ParamLimits

0xd5b3,	// (0x0004a98c) popup_call4_audio_wait_window

0x72d5,	// (0x000446ae) cell_call4_button_pane_ParamLimits

0x72d5,	// (0x000446ae) cell_call4_button_pane

0x72fa,	// (0x000446d3) bg_button_pane_cp09_ParamLimits

0x72fa,	// (0x000446d3) bg_button_pane_cp09

0x7306,	// (0x000446df) cell_call4_button_pane_g1_ParamLimits

0x7306,	// (0x000446df) cell_call4_button_pane_g1

0x7313,	// (0x000446ec) cell_call4_button_pane_t1_ParamLimits

0x7313,	// (0x000446ec) cell_call4_button_pane_t1

0xd5fb,	// (0x0004a9d4) popup_call4_audio_conf_window_ParamLimits

0xd5fb,	// (0x0004a9d4) popup_call4_audio_conf_window

0x65a3,	// (0x0004397c) mup3_progress_pane_t1_ParamLimits

0x65c2,	// (0x0004399b) mup3_progress_pane_t2_ParamLimits

0xceee,	// (0x0004a2c7) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0004cb7a) mup3_progress_pane_t_ParamLimits

0xcf0b,	// (0x0004a2e4) mup_progress_pane_cp03_ParamLimits

0x6ae0,	// (0x00043eb9) mup3_control_keys_pane_g4_copy1

0x6fee,	// (0x000443c7) mp4_rocker2_pane_ParamLimits

0x6fee,	// (0x000443c7) mp4_rocker2_pane

0xd60f,	// (0x0004a9e8) mp4_rocker2_pane_g1

0xd617,	// (0x0004a9f0) mp4_rocker2_pane_g2

0x7325,	// (0x000446fe) mp4_rocker2_pane_g3

0x732d,	// (0x00044706) mp4_rocker2_pane_g4

0x7335,	// (0x0004470e) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0004ccaa) mp4_rocker2_pane_g

0xa021,	// (0x000473fa) main_camera4_pane

0xa021,	// (0x000473fa) main_video4_pane

0x6d4f,	// (0x00044128) main_video_tele_dialer_pane_t1_ParamLimits

0x6d4f,	// (0x00044128) main_video_tele_dialer_pane_t1

0x6d61,	// (0x0004413a) main_video_tele_dialer_pane_t2_ParamLimits

0x6d61,	// (0x0004413a) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0004cc64) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0004cc64) main_video_tele_dialer_pane_t

0x7355,	// (0x0004472e) cam4_autofocus_pane_ParamLimits

0x7355,	// (0x0004472e) cam4_autofocus_pane

0x736f,	// (0x00044748) cam4_image_uncrop_pane_ParamLimits

0x736f,	// (0x00044748) cam4_image_uncrop_pane

0x7386,	// (0x0004475f) cam4_indicators_pane_ParamLimits

0x7386,	// (0x0004475f) cam4_indicators_pane

0x73a2,	// (0x0004477b) main_camera4_pane_g1_ParamLimits

0x73a2,	// (0x0004477b) main_camera4_pane_g1

0x73ae,	// (0x00044787) main_camera4_pane_g2_ParamLimits

0x73ae,	// (0x00044787) main_camera4_pane_g2

0x73ae,	// (0x00044787) main_camera4_pane_g3_ParamLimits

0x73ae,	// (0x00044787) main_camera4_pane_g3

0x73ba,	// (0x00044793) main_camera4_pane_g4_ParamLimits

0x73ba,	// (0x00044793) main_camera4_pane_g4

0x73c6,	// (0x0004479f) main_camera4_pane_g5_ParamLimits

0x73c6,	// (0x0004479f) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0004ccb5) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0004ccb5) main_camera4_pane_g

0x73e0,	// (0x000447b9) main_camera4_pane_t1_ParamLimits

0x73e0,	// (0x000447b9) main_camera4_pane_t1

0xce73,	// (0x0004a24c) bg_tb_trans_pane_cp06

0x7430,	// (0x00044809) cam4_indicators_pane_g1

0x7441,	// (0x0004481a) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0004ccd0) cam4_indicators_pane_g

0x745f,	// (0x00044838) cam4_indicators_pane_t1

0x7489,	// (0x00044862) main_video4_pane_g1_ParamLimits

0x7489,	// (0x00044862) main_video4_pane_g1

0x7495,	// (0x0004486e) main_video4_pane_g2_ParamLimits

0x7495,	// (0x0004486e) main_video4_pane_g2

0x74a1,	// (0x0004487a) main_video4_pane_g3_ParamLimits

0x74a1,	// (0x0004487a) main_video4_pane_g3

0x74ad,	// (0x00044886) main_video4_pane_g4_ParamLimits

0x74ad,	// (0x00044886) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0004ccd7) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0004ccd7) main_video4_pane_g

0x74cd,	// (0x000448a6) vid4_indicators_pane_ParamLimits

0x74cd,	// (0x000448a6) vid4_indicators_pane

0x74ec,	// (0x000448c5) video4_image_uncrop_cif_pane_ParamLimits

0x74ec,	// (0x000448c5) video4_image_uncrop_cif_pane

0x74fb,	// (0x000448d4) video4_image_uncrop_nhd_pane_ParamLimits

0x74fb,	// (0x000448d4) video4_image_uncrop_nhd_pane

0x736f,	// (0x00044748) video4_image_uncrop_vga_pane_ParamLimits

0x736f,	// (0x00044748) video4_image_uncrop_vga_pane

0xad62,	// (0x0004813b) bg_tb_trans_pane_cp07

0x7510,	// (0x000448e9) vid4_indicators_pane_g1

0x7524,	// (0x000448fd) vid4_indicators_pane_g2

0x7538,	// (0x00044911) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0004cce2) vid4_indicators_pane_g

0x7565,	// (0x0004493e) vid4_indicators_pane_t1

0x757c,	// (0x00044955) cam4_autofocus_pane_g1

0x7584,	// (0x0004495d) cam4_autofocus_pane_g2

0x758c,	// (0x00044965) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0004cced) cam4_autofocus_pane_g

0x7594,	// (0x0004496d) cam4_autofocus_pane_g3_copy1

0x6d81,	// (0x0004415a) video_down_pane_cp_t1

0x6d8f,	// (0x00044168) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0004cc69) video_down_pane_cp_t

0xdf11,	// (0x0004b2ea) popup_vitu2_window_ParamLimits

0xdf11,	// (0x0004b2ea) popup_vitu2_window

0x759c,	// (0x00044975) aid_size_cell2_itu2_ParamLimits

0x759c,	// (0x00044975) aid_size_cell2_itu2

0x75be,	// (0x00044997) aid_size_cell_itu2_ParamLimits

0x75be,	// (0x00044997) aid_size_cell_itu2

0xd9e9,	// (0x0004adc2) bg_popup_window_pane_cp09_ParamLimits

0xd9e9,	// (0x0004adc2) bg_popup_window_pane_cp09

0x7602,	// (0x000449db) field_vitu2_entry_pane_ParamLimits

0x7602,	// (0x000449db) field_vitu2_entry_pane

0x7622,	// (0x000449fb) grid_vitu2_function_pane_ParamLimits

0x7622,	// (0x000449fb) grid_vitu2_function_pane

0x7666,	// (0x00044a3f) grid_vitu2_itu_pane_ParamLimits

0x7666,	// (0x00044a3f) grid_vitu2_itu_pane

0x76dc,	// (0x00044ab5) cell_vitu2_itu_pane_ParamLimits

0x76dc,	// (0x00044ab5) cell_vitu2_itu_pane

0x76f1,	// (0x00044aca) cell_vitu2_function_pane_ParamLimits

0x76f1,	// (0x00044aca) cell_vitu2_function_pane

0xd61f,	// (0x0004a9f8) bg_popup_call_pane_cp08_ParamLimits

0xd61f,	// (0x0004a9f8) bg_popup_call_pane_cp08

0xd638,	// (0x0004aa11) field_vitu2_entry_pane_g1

0xd644,	// (0x0004aa1d) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0004ccf4) field_vitu2_entry_pane_g

0x10a9,	// (0x0003e482) field_vitu2_entry_pane_t1_ParamLimits

0x10a9,	// (0x0003e482) field_vitu2_entry_pane_t1

0x10dc,	// (0x0003e4b5) field_vitu2_entry_pane_t2_ParamLimits

0x10dc,	// (0x0003e4b5) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0004ccfb) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0004ccfb) field_vitu2_entry_pane_t

0x7732,	// (0x00044b0b) bg_button_pane_cp010_ParamLimits

0x7732,	// (0x00044b0b) bg_button_pane_cp010

0x7740,	// (0x00044b19) cell_vitu2_itu_pane_g1

0x7769,	// (0x00044b42) cell_vitu2_itu_pane_t1_ParamLimits

0x7769,	// (0x00044b42) cell_vitu2_itu_pane_t1

0x10f9,	// (0x0003e4d2) cell_vitu2_itu_pane_t2_ParamLimits

0x10f9,	// (0x0003e4d2) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0004cd05) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0004cd05) cell_vitu2_itu_pane_t

0xad62,	// (0x0004813b) bg_button_pane_cp011

0x77b5,	// (0x00044b8e) cell_vitu2_function_pane_g1

0xa021,	// (0x000473fa) main_myfav_hc_pane

0x722a,	// (0x00044603) popup_image3_note_pane_ParamLimits

0x722a,	// (0x00044603) popup_image3_note_pane

0x7238,	// (0x00044611) popup_image3_tool_bar_pane_ParamLimits

0x7238,	// (0x00044611) popup_image3_tool_bar_pane

0x116f,	// (0x0003e548) cell_vitu2_itu_pane_t3_ParamLimits

0x116f,	// (0x0003e548) cell_vitu2_itu_pane_t3

0xa021,	// (0x000473fa) bg_popup_trans_pane

0xd666,	// (0x0004aa3f) grid_image3_tool_bar_pane

0xd670,	// (0x0004aa49) bg_popup_trans_pane_g1

0xabc8,	// (0x00047fa1) bg_popup_trans_pane_g2

0xd678,	// (0x0004aa51) bg_popup_trans_pane_g3

0xd680,	// (0x0004aa59) bg_popup_trans_pane_g4

0xd688,	// (0x0004aa61) bg_popup_trans_pane_g5

0xd690,	// (0x0004aa69) bg_popup_trans_pane_g6

0xd698,	// (0x0004aa71) bg_popup_trans_pane_g7

0xd6a0,	// (0x0004aa79) bg_popup_trans_pane_g8

0xaba8,	// (0x00047f81) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0004cd0c) bg_popup_trans_pane_g

0xd6a8,	// (0x0004aa81) cell_image3_tool_bar_pane_ParamLimits

0xd6a8,	// (0x0004aa81) cell_image3_tool_bar_pane

0xcc13,	// (0x00049fec) cell_image3_tool_bar_pane_g1

0xa021,	// (0x000473fa) bg_popup_trans_pane_cp1

0xd6bc,	// (0x0004aa95) popup_image3_note_pane_t1

0xd6ca,	// (0x0004aaa3) popup_image3_note_pane_t2

0xd6d8,	// (0x0004aab1) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0004cd1f) popup_image3_note_pane_t

0xd6e6,	// (0x0004aabf) popup_image3_note_pane_t3_copy1

0x77c9,	// (0x00044ba2) bg_myfav_hc_instruction_pane_ParamLimits

0x77c9,	// (0x00044ba2) bg_myfav_hc_instruction_pane

0x77e1,	// (0x00044bba) cell_myfav_contact_pane_ParamLimits

0x77e1,	// (0x00044bba) cell_myfav_contact_pane

0x77fb,	// (0x00044bd4) cell_myfav_contact_pane_cp1_ParamLimits

0x77fb,	// (0x00044bd4) cell_myfav_contact_pane_cp1

0x7813,	// (0x00044bec) cell_myfav_contact_pane_cp2_ParamLimits

0x7813,	// (0x00044bec) cell_myfav_contact_pane_cp2

0x782b,	// (0x00044c04) cell_myfav_contact_pane_cp3_ParamLimits

0x782b,	// (0x00044c04) cell_myfav_contact_pane_cp3

0x7842,	// (0x00044c1b) cell_myfav_contact_pane_cp4_ParamLimits

0x7842,	// (0x00044c1b) cell_myfav_contact_pane_cp4

0x7858,	// (0x00044c31) cell_myfav_contact_pane_cp5_ParamLimits

0x7858,	// (0x00044c31) cell_myfav_contact_pane_cp5

0x786c,	// (0x00044c45) cell_myfav_contact_pane_cp6_ParamLimits

0x786c,	// (0x00044c45) cell_myfav_contact_pane_cp6

0x7880,	// (0x00044c59) cell_myfav_contact_pane_cp7_ParamLimits

0x7880,	// (0x00044c59) cell_myfav_contact_pane_cp7

0xd6f4,	// (0x0004aacd) listscroll_gen_pane_cp05

0x7898,	// (0x00044c71) main_myfav_hc_pane_g1_ParamLimits

0x7898,	// (0x00044c71) main_myfav_hc_pane_g1

0x78b0,	// (0x00044c89) main_myfav_hc_pane_g2_ParamLimits

0x78b0,	// (0x00044c89) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0004cd26) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0004cd26) main_myfav_hc_pane_g

0x78e0,	// (0x00044cb9) main_myfav_hc_pane_t1_ParamLimits

0x78e0,	// (0x00044cb9) main_myfav_hc_pane_t1

0xd6fd,	// (0x0004aad6) main_myfav_hc_pane_t2_ParamLimits

0xd6fd,	// (0x0004aad6) main_myfav_hc_pane_t2

0xd70f,	// (0x0004aae8) main_myfav_hc_pane_t3_ParamLimits

0xd70f,	// (0x0004aae8) main_myfav_hc_pane_t3

0x78f7,	// (0x00044cd0) main_myfav_hc_pane_t4_ParamLimits

0x78f7,	// (0x00044cd0) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0004cd2d) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0004cd2d) main_myfav_hc_pane_t

0xcc13,	// (0x00049fec) bg_myfav_hc_instruction_pane_g1

0xd721,	// (0x0004aafa) cell_myfav_contact_pane_g1_ParamLimits

0xd721,	// (0x0004aafa) cell_myfav_contact_pane_g1

0xd721,	// (0x0004aafa) cell_myfav_contact_pane_g2_ParamLimits

0xd721,	// (0x0004aafa) cell_myfav_contact_pane_g2

0xd72d,	// (0x0004ab06) cell_myfav_contact_pane_g3_ParamLimits

0xd72d,	// (0x0004ab06) cell_myfav_contact_pane_g3

0xced8,	// (0x0004a2b1) cell_myfav_contact_pane_g4_ParamLimits

0xced8,	// (0x0004a2b1) cell_myfav_contact_pane_g4

0xd73a,	// (0x0004ab13) cell_myfav_contact_pane_g5_ParamLimits

0xd73a,	// (0x0004ab13) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0004cd38) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0004cd38) cell_myfav_contact_pane_g

0x78c8,	// (0x00044ca1) main_myfav_hc_pane_g3_ParamLimits

0x78c8,	// (0x00044ca1) main_myfav_hc_pane_g3

0x22f3,	// (0x0003f6cc) popup_adpt_find_window

0x7921,	// (0x00044cfa) afind_page_pane_ParamLimits

0x7921,	// (0x00044cfa) afind_page_pane

0x792e,	// (0x00044d07) aid_size_cell_afind_ParamLimits

0x792e,	// (0x00044d07) aid_size_cell_afind

0x7948,	// (0x00044d21) bg_popup_sub_pane_cp09_ParamLimits

0x7948,	// (0x00044d21) bg_popup_sub_pane_cp09

0x7955,	// (0x00044d2e) find_pane_cp01_ParamLimits

0x7955,	// (0x00044d2e) find_pane_cp01

0xd746,	// (0x0004ab1f) grid_afind_control_pane_ParamLimits

0xd746,	// (0x0004ab1f) grid_afind_control_pane

0x7962,	// (0x00044d3b) grid_afind_pane_ParamLimits

0x7962,	// (0x00044d3b) grid_afind_pane

0x797c,	// (0x00044d55) cell_afind_pane_ParamLimits

0x797c,	// (0x00044d55) cell_afind_pane

0xcc13,	// (0x00049fec) afind_page_pane_g1

0x79c4,	// (0x00044d9d) afind_page_pane_g2

0x79cd,	// (0x00044da6) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0004cd43) afind_page_pane_g

0x79d6,	// (0x00044daf) afind_page_pane_t1

0xd75a,	// (0x0004ab33) cell_afind_grid_control_pane_ParamLimits

0xd75a,	// (0x0004ab33) cell_afind_grid_control_pane

0xd532,	// (0x0004a90b) bg_button_pane_cp69_ParamLimits

0xd532,	// (0x0004a90b) bg_button_pane_cp69

0x79f6,	// (0x00044dcf) cell_afind_pane_g1_ParamLimits

0x79f6,	// (0x00044dcf) cell_afind_pane_g1

0x7a03,	// (0x00044ddc) cell_afind_pane_t1_ParamLimits

0x7a03,	// (0x00044ddc) cell_afind_pane_t1

0xa9c1,	// (0x00047d9a) bg_button_pane_cp72

0xd769,	// (0x0004ab42) cell_afind_grid_control_pane_g1

0x5002,	// (0x000423db) aid_image_placing_area_ParamLimits

0x5002,	// (0x000423db) aid_image_placing_area

0xd1ec,	// (0x0004a5c5) field_vitu_entry_pane_g1_ParamLimits

0xd1ec,	// (0x0004a5c5) field_vitu_entry_pane_g1

0xd1f8,	// (0x0004a5d1) field_vitu_entry_pane_g2_ParamLimits

0xd1f8,	// (0x0004a5d1) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0004cbf4) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0004cbf4) field_vitu_entry_pane_g

0x6b6b,	// (0x00043f44) cell_vitu_itu_pane_g1_ParamLimits

0x6bbb,	// (0x00043f94) cell_vitu_itu_pane_t3_ParamLimits

0x6bbb,	// (0x00043f94) cell_vitu_itu_pane_t3

0xd4e2,	// (0x0004a8bb) mp4_progress_pane_t1_ParamLimits

0xd4fb,	// (0x0004a8d4) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0004cc89) mp4_progress_pane_t_ParamLimits

0xd514,	// (0x0004a8ed) mup_progress_pane_cp04_ParamLimits

0x790b,	// (0x00044ce4) main_myfav_hc_pane_t5_ParamLimits

0x790b,	// (0x00044ce4) main_myfav_hc_pane_t5

0x2181,	// (0x0003f55a) aid_zoom_text_primary

0x22f3,	// (0x0003f6cc) popup_adpt_find_window_ParamLimits

0xad62,	// (0x0004813b) main_cam_set_pane

0x7394,	// (0x0004476d) cam4_zoom_pane_ParamLimits

0x7394,	// (0x0004476d) cam4_zoom_pane

0x7a15,	// (0x00044dee) main_cam_set_pane_g1_ParamLimits

0x7a15,	// (0x00044dee) main_cam_set_pane_g1

0x7a23,	// (0x00044dfc) main_cam_set_pane_g2_ParamLimits

0x7a23,	// (0x00044dfc) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0004cd4a) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0004cd4a) main_cam_set_pane_g

0x7a2f,	// (0x00044e08) main_cam_set_pane_t1_ParamLimits

0x7a2f,	// (0x00044e08) main_cam_set_pane_t1

0x7a4b,	// (0x00044e24) main_cset_listscroll_pane_ParamLimits

0x7a4b,	// (0x00044e24) main_cset_listscroll_pane

0x7a76,	// (0x00044e4f) main_cset_slider_pane_ParamLimits

0x7a76,	// (0x00044e4f) main_cset_slider_pane

0xd77a,	// (0x0004ab53) main_cset_list_pane_ParamLimits

0xd77a,	// (0x0004ab53) main_cset_list_pane

0xd78a,	// (0x0004ab63) scroll_pane_cp028

0x7a95,	// (0x00044e6e) aid_area_touch_slider

0x7ab1,	// (0x00044e8a) cset_slider_pane

0x7adb,	// (0x00044eb4) main_cset_slider_pane_g1

0x7af0,	// (0x00044ec9) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0004cd4f) main_cset_slider_pane_g

0xd7c3,	// (0x0004ab9c) main_cset_slider_pane_t1

0x7bb6,	// (0x00044f8f) main_cset_slider_pane_t2

0x7bd0,	// (0x00044fa9) main_cset_slider_pane_t3

0x7bea,	// (0x00044fc3) main_cset_slider_pane_t4

0x7c08,	// (0x00044fe1) main_cset_slider_pane_t5

0x7c26,	// (0x00044fff) main_cset_slider_pane_t6

0x7c3d,	// (0x00045016) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0004cd74) main_cset_slider_pane_t

0x7d4b,	// (0x00045124) cset_list_set_pane_ParamLimits

0x7d4b,	// (0x00045124) cset_list_set_pane

0x7d67,	// (0x00045140) aid_position_infowindow_above

0x7d6f,	// (0x00045148) aid_position_infowindow_below

0x11bc,	// (0x0003e595) cset_list_set_pane_g1_ParamLimits

0x11bc,	// (0x0003e595) cset_list_set_pane_g1

0x11c8,	// (0x0003e5a1) cset_list_set_pane_g3_ParamLimits

0x11c8,	// (0x0003e5a1) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0004cd93) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0004cd93) cset_list_set_pane_g

0x11d7,	// (0x0003e5b0) cset_list_set_pane_t1_ParamLimits

0x11d7,	// (0x0003e5b0) cset_list_set_pane_t1

0xad62,	// (0x0004813b) list_highlight_pane_cp021_ParamLimits

0xad62,	// (0x0004813b) list_highlight_pane_cp021

0xb53d,	// (0x00048916) cset_slider_pane_g1

0xb54f,	// (0x00048928) cset_slider_pane_g2

0xb546,	// (0x0004891f) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0004cd98) cset_slider_pane_g

0x7d77,	// (0x00045150) aid_area_touch_cam4_zoom

0x7d7f,	// (0x00045158) cam4_zoom_cont_pane

0x7d87,	// (0x00045160) cam4_zoom_pane_g1

0x7d8f,	// (0x00045168) cam4_zoom_pane_g2

0x7d97,	// (0x00045170) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0004cd9f) cam4_zoom_pane_g

0xdf1f,	// (0x0004b2f8) cam4_zoom_cont_pane_g1

0xdf28,	// (0x0004b301) cam4_zoom_cont_pane_g2

0xdf31,	// (0x0004b30a) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0004cda6) cam4_zoom_cont_pane_g

0x7281,	// (0x0004465a) call4_image_pane_ParamLimits

0x7281,	// (0x0004465a) call4_image_pane

0xd53e,	// (0x0004a917) call4_windows_conf_pane_ParamLimits

0xd57d,	// (0x0004a956) popup_call4_audio_in_window_ParamLimits

0xd57d,	// (0x0004a956) popup_call4_audio_in_window

0xa021,	// (0x000473fa) bg_popup_call2_act_pane_cp02

0xd5f3,	// (0x0004a9cc) call4_list_conf_pane

0xcc13,	// (0x00049fec) call4_image_pane_g1

0xcc13,	// (0x00049fec) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0004caba) call4_image_pane_g

0xd863,	// (0x0004ac3c) list_single_graphic_popup_conf4_pane_ParamLimits

0xd863,	// (0x0004ac3c) list_single_graphic_popup_conf4_pane

0xa021,	// (0x000473fa) list_highlight_pane_cp022

0xd876,	// (0x0004ac4f) list_single_graphic_popup_conf4_pane_g1

0xb110,	// (0x000484e9) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0004cdad) list_single_graphic_popup_conf4_pane_g

0xd87e,	// (0x0004ac57) list_single_graphic_popup_conf4_pane_t1

0x337f,	// (0x00040758) popup_vtel_slider_window_ParamLimits

0x337f,	// (0x00040758) popup_vtel_slider_window

0xd520,	// (0x0004a8f9) dialer2_ne_pane_t2_ParamLimits

0xd520,	// (0x0004a8f9) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0004cc8e) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0004cc8e) dialer2_ne_pane_t

0xad62,	// (0x0004813b) bg_popup_sub_pane_cp010_ParamLimits

0xad62,	// (0x0004813b) bg_popup_sub_pane_cp010

0x7d9f,	// (0x00045178) popup_vtel_slider_window_g1_ParamLimits

0x7d9f,	// (0x00045178) popup_vtel_slider_window_g1

0x7dab,	// (0x00045184) popup_vtel_slider_window_g2_ParamLimits

0x7dab,	// (0x00045184) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0004cdb2) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0004cdb2) popup_vtel_slider_window_g

0x7df3,	// (0x000451cc) vtel_slider_pane_ParamLimits

0x7df3,	// (0x000451cc) vtel_slider_pane

0x7e02,	// (0x000451db) vtel_slider_pane_g1_ParamLimits

0x7e02,	// (0x000451db) vtel_slider_pane_g1

0x7e0f,	// (0x000451e8) vtel_slider_pane_g2_ParamLimits

0x7e0f,	// (0x000451e8) vtel_slider_pane_g2

0x7e1c,	// (0x000451f5) vtel_slider_pane_g3_ParamLimits

0x7e1c,	// (0x000451f5) vtel_slider_pane_g3

0x7e02,	// (0x000451db) vtel_slider_pane_g4_ParamLimits

0x7e02,	// (0x000451db) vtel_slider_pane_g4

0x7e29,	// (0x00045202) vtel_slider_pane_g5_ParamLimits

0x7e29,	// (0x00045202) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0004cdbb) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0004cdbb) vtel_slider_pane_g

0xad62,	// (0x0004813b) main_gallery2_pane

0x75e4,	// (0x000449bd) aid_size_row_itut2_dropdow_list_ParamLimits

0x75e4,	// (0x000449bd) aid_size_row_itut2_dropdow_list

0x7644,	// (0x00044a1d) grid_vitu2_function_top_pane_ParamLimits

0x7644,	// (0x00044a1d) grid_vitu2_function_top_pane

0x769a,	// (0x00044a73) popup_vitu2_dropdown_list_window_ParamLimits

0x769a,	// (0x00044a73) popup_vitu2_dropdown_list_window

0x76ba,	// (0x00044a93) popup_vitu2_match_list_window

0x7e36,	// (0x0004520f) cell_vitu2_function_top_pane_ParamLimits

0x7e36,	// (0x0004520f) cell_vitu2_function_top_pane

0x7e56,	// (0x0004522f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7e56,	// (0x0004522f) cell_vitu2_function_top_pane_cp01

0x7e74,	// (0x0004524d) cell_vitu2_function_top_wide_pane_ParamLimits

0x7e74,	// (0x0004524d) cell_vitu2_function_top_wide_pane

0xad62,	// (0x0004813b) bg_button_pane_cp012

0x7e92,	// (0x0004526b) cell_vitu2_function_top_pane_g1

0x7ea6,	// (0x0004527f) bg_button_pane_cp013_ParamLimits

0x7ea6,	// (0x0004527f) bg_button_pane_cp013

0x7ec2,	// (0x0004529b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7ec2,	// (0x0004529b) cell_vitu2_function_top_wide_pane_g1

0xdf11,	// (0x0004b2ea) bg_popup_sub_pane_cp20

0x7eda,	// (0x000452b3) list_vitu2_match_list_pane

0xd670,	// (0x0004aa49) bg_popup_sub_pane_cp20_g1

0xd678,	// (0x0004aa51) bg_popup_sub_pane_cp20_g2

0xabc8,	// (0x00047fa1) bg_popup_sub_pane_cp20_g3

0xd680,	// (0x0004aa59) bg_popup_sub_pane_cp20_g4

0xaba8,	// (0x00047f81) bg_popup_sub_pane_cp20_g5

0xd894,	// (0x0004ac6d) bg_popup_sub_pane_cp20_g6

0xd690,	// (0x0004aa69) bg_popup_sub_pane_cp20_g7

0xd698,	// (0x0004aa71) bg_popup_sub_pane_cp20_g8

0xd6a0,	// (0x0004aa79) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0004cdc6) bg_popup_sub_pane_cp20_g

0x7ef2,	// (0x000452cb) list_vitu2_match_list_item_pane_ParamLimits

0x7ef2,	// (0x000452cb) list_vitu2_match_list_item_pane

0x7f04,	// (0x000452dd) list_vitu2_match_list_item_pane_t1

0xa021,	// (0x000473fa) bg_popup_sub_pane_cp21

0xb014,	// (0x000483ed) grid_vitu2_dropdown_list_pane

0x7f12,	// (0x000452eb) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7f12,	// (0x000452eb) cell_vitu2_dropdown_list_char_pane

0x7f33,	// (0x0004530c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7f33,	// (0x0004530c) cell_vitu2_dropdown_list_ctrl_pane

0xd89c,	// (0x0004ac75) cell_vitu2_dropdown_list_char_pane_g1

0xd8a5,	// (0x0004ac7e) cell_vitu2_dropdown_list_char_pane_g2

0xd8ae,	// (0x0004ac87) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0004cde3) cell_vitu2_dropdown_list_char_pane_g

0x7f5f,	// (0x00045338) cell_vitu2_dropdown_list_char_pane_t1

0x7f6d,	// (0x00045346) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7f6d,	// (0x00045346) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7f7d,	// (0x00045356) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7f7d,	// (0x00045356) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7f8e,	// (0x00045367) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7f8e,	// (0x00045367) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7f9e,	// (0x00045377) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7f9e,	// (0x00045377) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce73,	// (0x0004a24c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce73,	// (0x0004a24c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0004cdea) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0004cdea) cell_vitu2_dropdown_list_ctrl_pane_g

0x7fba,	// (0x00045393) aid_size_cell_gallery2_ParamLimits

0x7fba,	// (0x00045393) aid_size_cell_gallery2

0x7fd4,	// (0x000453ad) grid_gallery2_pane_ParamLimits

0x7fd4,	// (0x000453ad) grid_gallery2_pane

0x69ec,	// (0x00043dc5) scroll_pane_cp029_ParamLimits

0x69ec,	// (0x00043dc5) scroll_pane_cp029

0x7feb,	// (0x000453c4) cell_gallery2_pane_ParamLimits

0x7feb,	// (0x000453c4) cell_gallery2_pane

0xd8b7,	// (0x0004ac90) cell_gallery2_pane_g2

0x8040,	// (0x00045419) cell_gallery2_pane_g3

0xd8bf,	// (0x0004ac98) cell_gallery2_pane_g4

0xd8c7,	// (0x0004aca0) cell_gallery2_pane_g5

0xb3ed,	// (0x000487c6) grid_highlight_pane_cp10

0x76ba,	// (0x00044a93) popup_vitu2_match_list_window_ParamLimits

0x76cc,	// (0x00044aa5) popup_vitu2_query_window_ParamLimits

0x76cc,	// (0x00044aa5) popup_vitu2_query_window

0xa021,	// (0x000473fa) bg_vitu2_candi_button_pane

0xd89c,	// (0x0004ac75) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8a5,	// (0x0004ac7e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8ae,	// (0x0004ac87) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1241,	// (0x0003e61a) bg_button_pane_cp015

0x8048,	// (0x00045421) bg_button_pane_cp016

0x805b,	// (0x00045434) bg_button_pane_cp017

0xc809,	// (0x00049be2) bg_popup_sub_pane_cp22

0xd8cf,	// (0x0004aca8) popup_vitu2_query_window_g1

0x1274,	// (0x0003e64d) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0004cdf5) popup_vitu2_query_window_g

0x1291,	// (0x0003e66a) popup_vitu2_query_window_t1_ParamLimits

0x1291,	// (0x0003e66a) popup_vitu2_query_window_t1

0x12c4,	// (0x0003e69d) popup_vitu2_query_window_t2_ParamLimits

0x12c4,	// (0x0003e69d) popup_vitu2_query_window_t2

0x12d6,	// (0x0003e6af) popup_vitu2_query_window_t3_ParamLimits

0x12d6,	// (0x0003e6af) popup_vitu2_query_window_t3

0x807f,	// (0x00045458) popup_vitu2_query_window_t4_ParamLimits

0x807f,	// (0x00045458) popup_vitu2_query_window_t4

0x80a0,	// (0x00045479) popup_vitu2_query_window_t5_ParamLimits

0x80a0,	// (0x00045479) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0004cdfc) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0004cdfc) popup_vitu2_query_window_t

0xd772,	// (0x0004ab4b) main_cset_text_pane

0x7a95,	// (0x00044e6e) aid_area_touch_slider_ParamLimits

0x7ab1,	// (0x00044e8a) cset_slider_pane_ParamLimits

0x7adb,	// (0x00044eb4) main_cset_slider_pane_g1_ParamLimits

0x7af0,	// (0x00044ec9) main_cset_slider_pane_g2_ParamLimits

0xd793,	// (0x0004ab6c) main_cset_slider_pane_g3_ParamLimits

0xd793,	// (0x0004ab6c) main_cset_slider_pane_g3

0x7b05,	// (0x00044ede) main_cset_slider_pane_g4_ParamLimits

0x7b05,	// (0x00044ede) main_cset_slider_pane_g4

0x7b14,	// (0x00044eed) main_cset_slider_pane_g5_ParamLimits

0x7b14,	// (0x00044eed) main_cset_slider_pane_g5

0x7b22,	// (0x00044efb) main_cset_slider_pane_g6_ParamLimits

0x7b22,	// (0x00044efb) main_cset_slider_pane_g6

0xf976,	// (0x0004cd4f) main_cset_slider_pane_g_ParamLimits

0xd7c3,	// (0x0004ab9c) main_cset_slider_pane_t1_ParamLimits

0x7bb6,	// (0x00044f8f) main_cset_slider_pane_t2_ParamLimits

0x7bd0,	// (0x00044fa9) main_cset_slider_pane_t3_ParamLimits

0x7bea,	// (0x00044fc3) main_cset_slider_pane_t4_ParamLimits

0x7c08,	// (0x00044fe1) main_cset_slider_pane_t5_ParamLimits

0x7c26,	// (0x00044fff) main_cset_slider_pane_t6_ParamLimits

0x7c3d,	// (0x00045016) main_cset_slider_pane_t7_ParamLimits

0x7c6b,	// (0x00045044) main_cset_slider_pane_t8_ParamLimits

0x7c6b,	// (0x00045044) main_cset_slider_pane_t8

0x7c93,	// (0x0004506c) main_cset_slider_pane_t9_ParamLimits

0x7c93,	// (0x0004506c) main_cset_slider_pane_t9

0x7cbb,	// (0x00045094) main_cset_slider_pane_t10_ParamLimits

0x7cbb,	// (0x00045094) main_cset_slider_pane_t10

0x7ce3,	// (0x000450bc) main_cset_slider_pane_t11_ParamLimits

0x7ce3,	// (0x000450bc) main_cset_slider_pane_t11

0x7d0d,	// (0x000450e6) main_cset_slider_pane_t12_ParamLimits

0x7d0d,	// (0x000450e6) main_cset_slider_pane_t12

0x7d2c,	// (0x00045105) main_cset_slider_pane_t13_ParamLimits

0x7d2c,	// (0x00045105) main_cset_slider_pane_t13

0xf99b,	// (0x0004cd74) main_cset_slider_pane_t_ParamLimits

0xa021,	// (0x000473fa) bg_popup_sub_pane_cp011

0xd8db,	// (0x0004acb4) main_cset_text_pane_g1

0xd8e3,	// (0x0004acbc) main_cset_text_pane_t1

0xd8f1,	// (0x0004acca) main_cset_text_pane_t2

0xd8ff,	// (0x0004acd8) main_cset_text_pane_t3

0xd90d,	// (0x0004ace6) main_cset_text_pane_t4

0xd91b,	// (0x0004acf4) main_cset_text_pane_t5

0xd929,	// (0x0004ad02) main_cset_text_pane_t6

0xd937,	// (0x0004ad10) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0004ce0b) main_cset_text_pane_t

0xa021,	// (0x000473fa) main_cam4_burst_pane

0xa021,	// (0x000473fa) main_cam5_pane

0x79e4,	// (0x00044dbd) bg_button_pane_cp019

0x79ed,	// (0x00044dc6) bg_button_pane_cp020

0xd79f,	// (0x0004ab78) main_cset_slider_pane_g7_ParamLimits

0xd79f,	// (0x0004ab78) main_cset_slider_pane_g7

0xd7ab,	// (0x0004ab84) main_cset_slider_pane_g8_ParamLimits

0xd7ab,	// (0x0004ab84) main_cset_slider_pane_g8

0x7b36,	// (0x00044f0f) main_cset_slider_pane_g9_ParamLimits

0x7b36,	// (0x00044f0f) main_cset_slider_pane_g9

0x7b42,	// (0x00044f1b) main_cset_slider_pane_g10_ParamLimits

0x7b42,	// (0x00044f1b) main_cset_slider_pane_g10

0x7b4e,	// (0x00044f27) main_cset_slider_pane_g11_ParamLimits

0x7b4e,	// (0x00044f27) main_cset_slider_pane_g11

0x7b5a,	// (0x00044f33) main_cset_slider_pane_g12_ParamLimits

0x7b5a,	// (0x00044f33) main_cset_slider_pane_g12

0x7b66,	// (0x00044f3f) main_cset_slider_pane_g13_ParamLimits

0x7b66,	// (0x00044f3f) main_cset_slider_pane_g13

0x7b74,	// (0x00044f4d) main_cset_slider_pane_g14_ParamLimits

0x7b74,	// (0x00044f4d) main_cset_slider_pane_g14

0x7b82,	// (0x00044f5b) main_cset_slider_pane_g15_ParamLimits

0x7b82,	// (0x00044f5b) main_cset_slider_pane_g15

0xd7f1,	// (0x0004abca) main_cset_slider_pane_t14_ParamLimits

0xd7f1,	// (0x0004abca) main_cset_slider_pane_t14

0xd82a,	// (0x0004ac03) main_cset_slider_pane_t15_ParamLimits

0xd82a,	// (0x0004ac03) main_cset_slider_pane_t15

0x80c1,	// (0x0004549a) aid_cam4_burst_size_cell_ParamLimits

0x80c1,	// (0x0004549a) aid_cam4_burst_size_cell

0x80dd,	// (0x000454b6) grid_cam4_burst_pane_ParamLimits

0x80dd,	// (0x000454b6) grid_cam4_burst_pane

0x810d,	// (0x000454e6) linegrid_cam4_burst_pane_ParamLimits

0x810d,	// (0x000454e6) linegrid_cam4_burst_pane

0x812f,	// (0x00045508) scroll_pane_cp30_ParamLimits

0x812f,	// (0x00045508) scroll_pane_cp30

0x813b,	// (0x00045514) cell_cam4_burst_pane_ParamLimits

0x813b,	// (0x00045514) cell_cam4_burst_pane

0xd945,	// (0x0004ad1e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd945,	// (0x0004ad1e) linegrid_cam4_burst_pane_g1

0x8177,	// (0x00045550) linegrid_cam4_burst_pane_g2_ParamLimits

0x8177,	// (0x00045550) linegrid_cam4_burst_pane_g2

0xd952,	// (0x0004ad2b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd952,	// (0x0004ad2b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0004ce1a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0004ce1a) linegrid_cam4_burst_pane_g

0x8188,	// (0x00045561) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8188,	// (0x00045561) linegrid_cam4_burst_pane_g3_copy1

0xd95f,	// (0x0004ad38) linegrid_cam4_burst_pane_g4_ParamLimits

0xd95f,	// (0x0004ad38) linegrid_cam4_burst_pane_g4

0x81a2,	// (0x0004557b) linegrid_cam4_burst_pane_g5_ParamLimits

0x81a2,	// (0x0004557b) linegrid_cam4_burst_pane_g5

0x81b3,	// (0x0004558c) linegrid_cam4_burst_pane_g6_ParamLimits

0x81b3,	// (0x0004558c) linegrid_cam4_burst_pane_g6

0xd96c,	// (0x0004ad45) linegrid_cam4_burst_pane_g7_ParamLimits

0xd96c,	// (0x0004ad45) linegrid_cam4_burst_pane_g7

0x81c4,	// (0x0004559d) cell_cam4_burst_pane_g1

0xd985,	// (0x0004ad5e) main_cam5_pane_t1_ParamLimits

0xd985,	// (0x0004ad5e) main_cam5_pane_t1

0xd997,	// (0x0004ad70) main_cam5_pane_t2_ParamLimits

0xd997,	// (0x0004ad70) main_cam5_pane_t2

0xd9a9,	// (0x0004ad82) main_cam5_pane_t3_ParamLimits

0xd9a9,	// (0x0004ad82) main_cam5_pane_t3

0xd9bb,	// (0x0004ad94) main_cam5_pane_t4_ParamLimits

0xd9bb,	// (0x0004ad94) main_cam5_pane_t4

0xd9f7,	// (0x0004add0) main_cam5_pane_t5_ParamLimits

0xd9f7,	// (0x0004add0) main_cam5_pane_t5

0xda0b,	// (0x0004ade4) main_cam5_pane_t6_ParamLimits

0xda0b,	// (0x0004ade4) main_cam5_pane_t6

0xda1f,	// (0x0004adf8) main_cam5_pane_t7_ParamLimits

0xda1f,	// (0x0004adf8) main_cam5_pane_t7

0xda31,	// (0x0004ae0a) main_cam5_pane_t8_ParamLimits

0xda31,	// (0x0004ae0a) main_cam5_pane_t8

0xda4d,	// (0x0004ae26) main_cam5_pane_t9_ParamLimits

0xda4d,	// (0x0004ae26) main_cam5_pane_t9

0xda5f,	// (0x0004ae38) main_cam5_pane_t10_ParamLimits

0xda5f,	// (0x0004ae38) main_cam5_pane_t10

0xda71,	// (0x0004ae4a) main_cam5_pane_t11_ParamLimits

0xda71,	// (0x0004ae4a) main_cam5_pane_t11

0xda83,	// (0x0004ae5c) main_cam5_pane_t12_ParamLimits

0xda83,	// (0x0004ae5c) main_cam5_pane_t12

0xda98,	// (0x0004ae71) main_cam5_pane_t13_ParamLimits

0xda98,	// (0x0004ae71) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0004ce26) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0004ce26) main_cam5_pane_t

0x23a9,	// (0x0003f782) popup_scut_keymap_window_ParamLimits

0x23a9,	// (0x0003f782) popup_scut_keymap_window

0x81d9,	// (0x000455b2) aid_size_cell_brow_shortcut

0xb3ed,	// (0x000487c6) bg_popup_window_pane_cp010

0x81e5,	// (0x000455be) grid_scut_pane

0x81f1,	// (0x000455ca) cell_scut_pane_ParamLimits

0x81f1,	// (0x000455ca) cell_scut_pane

0x8208,	// (0x000455e1) cell_scut_pane_g1

0xdab5,	// (0x0004ae8e) cell_scut_pane_t1

0xdac4,	// (0x0004ae9d) cell_scut_pane_t2

0x8211,	// (0x000455ea) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0004ce41) cell_scut_pane_t

0x61cc,	// (0x000435a5) main_mup3_pane_g8_ParamLimits

0x61cc,	// (0x000435a5) main_mup3_pane_g8

0x75f2,	// (0x000449cb) area_vitu2_query_pane_ParamLimits

0x75f2,	// (0x000449cb) area_vitu2_query_pane

0x1253,	// (0x0003e62c) input_focus_pane_cp08

0xdad3,	// (0x0004aeac) area_vitu2_query_pane_g1

0x1354,	// (0x0003e72d) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0004ce48) area_vitu2_query_pane_g

0x821f,	// (0x000455f8) area_vitu2_query_pane_t1_ParamLimits

0x821f,	// (0x000455f8) area_vitu2_query_pane_t1

0x8233,	// (0x0004560c) area_vitu2_query_pane_t2_ParamLimits

0x8233,	// (0x0004560c) area_vitu2_query_pane_t2

0x1365,	// (0x0003e73e) area_vitu2_query_pane_t3_ParamLimits

0x1365,	// (0x0003e73e) area_vitu2_query_pane_t3

0x138d,	// (0x0003e766) area_vitu2_query_pane_t4_ParamLimits

0x138d,	// (0x0003e766) area_vitu2_query_pane_t4

0x13b5,	// (0x0003e78e) area_vitu2_query_pane_t5_ParamLimits

0x13b5,	// (0x0003e78e) area_vitu2_query_pane_t5

0x13dd,	// (0x0003e7b6) area_vitu2_query_pane_t6_ParamLimits

0x13dd,	// (0x0003e7b6) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0004ce4d) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0004ce4d) area_vitu2_query_pane_t

0x8247,	// (0x00045620) bg_button_pane_cp018

0x8255,	// (0x0004562e) bg_button_pane_cp021

0x1429,	// (0x0003e802) bg_button_pane_cp022

0x143a,	// (0x0003e813) input_focus_pane_cp09

0xb234,	// (0x0004860d) aid_size_touch_mv_arrow_left

0xb25f,	// (0x00048638) aid_size_touch_mv_arrow_right

0x7b9a,	// (0x00044f73) main_cset_slider_pane_g16_ParamLimits

0x7b9a,	// (0x00044f73) main_cset_slider_pane_g16

0x7ba8,	// (0x00044f81) main_cset_slider_pane_g17_ParamLimits

0x7ba8,	// (0x00044f81) main_cset_slider_pane_g17

0x81c4,	// (0x0004559d) cell_cam4_burst_pane_g1_ParamLimits

0xa021,	// (0x000473fa) compa_mode_pane

0x7db7,	// (0x00045190) popup_vtel_slider_window_g3_ParamLimits

0x7db7,	// (0x00045190) popup_vtel_slider_window_g3

0x7dcb,	// (0x000451a4) popup_vtel_slider_window_g4_ParamLimits

0x7dcb,	// (0x000451a4) popup_vtel_slider_window_g4

0x7ddf,	// (0x000451b8) popup_vtel_slider_window_t1_ParamLimits

0x7ddf,	// (0x000451b8) popup_vtel_slider_window_t1

0xa021,	// (0x000473fa) main_cl_pane

0x5514,	// (0x000428ed) popup_imed_adjust2_window_ParamLimits

0xc809,	// (0x00049be2) bg_tb_trans_pane_cp05_ParamLimits

0xd118,	// (0x0004a4f1) popup_imed_adjust2_window_g1_ParamLimits

0xd127,	// (0x0004a500) popup_imed_adjust2_window_g2_ParamLimits

0xd127,	// (0x0004a500) popup_imed_adjust2_window_g2

0xd133,	// (0x0004a50c) popup_imed_adjust2_window_g3_ParamLimits

0xd133,	// (0x0004a50c) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0004cbb8) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0004cbb8) popup_imed_adjust2_window_g

0xd13f,	// (0x0004a518) popup_imed_adjust2_window_t1_ParamLimits

0xd157,	// (0x0004a530) slider_imed_adjust_pane_ParamLimits

0xd16b,	// (0x0004a544) slider_imed_adjust_pane_g1_ParamLimits

0xd17b,	// (0x0004a554) slider_imed_adjust_pane_g2_ParamLimits

0xd18b,	// (0x0004a564) slider_imed_adjust_pane_g3_ParamLimits

0xd19c,	// (0x0004a575) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0004cbbf) slider_imed_adjust_pane_g_ParamLimits

0x733d,	// (0x00044716) aid_touch_area_cam4_ParamLimits

0x733d,	// (0x00044716) aid_touch_area_cam4

0x734d,	// (0x00044726) battery_pane_cp01

0x73d4,	// (0x000447ad) main_camera4_pane_g6_ParamLimits

0x73d4,	// (0x000447ad) main_camera4_pane_g6

0x73f2,	// (0x000447cb) main_camera4_pane_t2_ParamLimits

0x73f2,	// (0x000447cb) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0004ccc2) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0004ccc2) main_camera4_pane_t

0x7479,	// (0x00044852) aid_touch_area_vid4_ParamLimits

0x7479,	// (0x00044852) aid_touch_area_vid4

0x74b9,	// (0x00044892) main_video4_pane_g5_ParamLimits

0x74b9,	// (0x00044892) main_video4_pane_g5

0x74dd,	// (0x000448b6) vid4_progress_pane_ParamLimits

0x74dd,	// (0x000448b6) vid4_progress_pane

0xd7b7,	// (0x0004ab90) main_cset_slider_pane_g18_ParamLimits

0xd7b7,	// (0x0004ab90) main_cset_slider_pane_g18

0xd979,	// (0x0004ad52) cell_cam4_burst_pane_g2_ParamLimits

0xd979,	// (0x0004ad52) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0004ce21) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0004ce21) cell_cam4_burst_pane_g

0x8261,	// (0x0004563a) bg_cl_pane_ParamLimits

0x8261,	// (0x0004563a) bg_cl_pane

0x826d,	// (0x00045646) cl_header_pane_ParamLimits

0x826d,	// (0x00045646) cl_header_pane

0x8279,	// (0x00045652) cl_listscroll_pane_ParamLimits

0x8279,	// (0x00045652) cl_listscroll_pane

0xdadf,	// (0x0004aeb8) bg_cl_pane_g1

0xdae7,	// (0x0004aec0) bg_cl_pane_g2

0xdaef,	// (0x0004aec8) bg_cl_pane_g3

0xdaf7,	// (0x0004aed0) bg_cl_pane_g4

0xdaff,	// (0x0004aed8) bg_cl_pane_g5

0xdb07,	// (0x0004aee0) bg_cl_pane_g6

0xdb0f,	// (0x0004aee8) bg_cl_pane_g7

0xdb17,	// (0x0004aef0) bg_cl_pane_g8

0xdb1f,	// (0x0004aef8) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0004ce5c) bg_cl_pane_g

0x8285,	// (0x0004565e) aid_height_cl_leading_ParamLimits

0x8285,	// (0x0004565e) aid_height_cl_leading

0x8291,	// (0x0004566a) aid_height_cl_text_ParamLimits

0x8291,	// (0x0004566a) aid_height_cl_text

0xdf11,	// (0x0004b2ea) bg_cl_header_pane_ParamLimits

0xdf11,	// (0x0004b2ea) bg_cl_header_pane

0x82a9,	// (0x00045682) cl_header_pane_g1_ParamLimits

0x82a9,	// (0x00045682) cl_header_pane_g1

0x82b6,	// (0x0004568f) cl_header_pane_t1_ParamLimits

0x82b6,	// (0x0004568f) cl_header_pane_t1

0xdb27,	// (0x0004af00) cl_list_pane

0xd78a,	// (0x0004ab63) hc_scroll_pane_cp01

0xaba8,	// (0x00047f81) bg_cl_header_pane_g1

0xd670,	// (0x0004aa49) bg_cl_header_pane_g2

0xabc8,	// (0x00047fa1) bg_cl_header_pane_g3

0xd680,	// (0x0004aa59) bg_cl_header_pane_g4

0xd678,	// (0x0004aa51) bg_cl_header_pane_g5

0xd894,	// (0x0004ac6d) bg_cl_header_pane_g6

0xd698,	// (0x0004aa71) bg_cl_header_pane_g7

0xd6a0,	// (0x0004aa79) bg_cl_header_pane_g8

0xd690,	// (0x0004aa69) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0004ce6f) bg_cl_header_pane_g

0x82c8,	// (0x000456a1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x82c8,	// (0x000456a1) hc_cl_list_double_graphic_heading_pane

0x82dc,	// (0x000456b5) hc_cl_list_single_graphic_pane_ParamLimits

0x82dc,	// (0x000456b5) hc_cl_list_single_graphic_pane

0x82f6,	// (0x000456cf) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x82f6,	// (0x000456cf) hc_cl_list_single_graphic_pane_g1

0x8302,	// (0x000456db) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8302,	// (0x000456db) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0004ce82) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0004ce82) hc_cl_list_single_graphic_pane_g

0x8316,	// (0x000456ef) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8316,	// (0x000456ef) hc_cl_list_single_graphic_pane_t1

0x82f6,	// (0x000456cf) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x82f6,	// (0x000456cf) hc_cl_list_double_graphic_heading_pane_g1

0x832b,	// (0x00045704) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x832b,	// (0x00045704) hc_cl_list_double_graphic_heading_pane_g2

0x833f,	// (0x00045718) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x833f,	// (0x00045718) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0004ce87) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0004ce87) hc_cl_list_double_graphic_heading_pane_g

0x8353,	// (0x0004572c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8353,	// (0x0004572c) hc_cl_list_double_graphic_heading_pane_t1

0x8368,	// (0x00045741) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8368,	// (0x00045741) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0004ce8e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0004ce8e) hc_cl_list_double_graphic_heading_pane_t

0x8385,	// (0x0004575e) vid4_progress_pane_g1

0x8397,	// (0x00045770) vid4_progress_pane_g2

0x4d4b,	// (0x00042124) vid4_progress_pane_g3

0x83a7,	// (0x00045780) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0004ce93) vid4_progress_pane_g

0x83c5,	// (0x0004579e) vid4_progress_pane_t1

0x83da,	// (0x000457b3) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0004ce9e) vid4_progress_pane_t

0x8406,	// (0x000457df) wait_bar_pane_cp07

0xca04,	// (0x00049ddd) blid_firmament_pane_ParamLimits

0xca47,	// (0x00049e20) popup_blid_sat_info2_window_g1

0xca6b,	// (0x00049e44) popup_blid_sat_info2_window_t3

0xca79,	// (0x00049e52) popup_blid_sat_info2_window_t4

0xca87,	// (0x00049e60) popup_blid_sat_info2_window_t5

0xca95,	// (0x00049e6e) popup_blid_sat_info2_window_t6

0xcaa5,	// (0x00049e7e) popup_blid_sat_info2_window_t7

0xcab3,	// (0x00049e8c) popup_blid_sat_info2_window_t8

0xcac1,	// (0x00049e9a) popup_blid_sat_info2_window_t9

0xcacf,	// (0x00049ea8) popup_blid_sat_info2_window_t10

0xcb93,	// (0x00049f6c) aid_firma_cardinal_ParamLimits

0xcba7,	// (0x00049f80) blid_firmament_pane_t1_ParamLimits

0xcbbe,	// (0x00049f97) blid_firmament_pane_t2_ParamLimits

0xcbd5,	// (0x00049fae) blid_firmament_pane_t3_ParamLimits

0xcbec,	// (0x00049fc5) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0004cab1) blid_firmament_pane_t_ParamLimits

0xcc03,	// (0x00049fdc) blid_sat_info_pane_ParamLimits

0xad62,	// (0x0004813b) main_cam_set_pane_ParamLimits

0x6985,	// (0x00043d5e) aid_size_cell_colour_35_ParamLimits

0x699f,	// (0x00043d78) aid_size_cell_colour_112_ParamLimits

0x69b6,	// (0x00043d8f) aid_size_cell_effect_ParamLimits

0xad62,	// (0x0004813b) bg_tb_trans_pane_cp02_ParamLimits

0xb407,	// (0x000487e0) heading_imed_pane_ParamLimits

0x69d0,	// (0x00043da9) listscroll_imed_pane_ParamLimits

0xbe2f,	// (0x00049208) popup_call2_audio_first_window_g5_ParamLimits

0xbe2f,	// (0x00049208) popup_call2_audio_first_window_g5

0x70fa,	// (0x000444d3) aid_size_touch_image3_arrow_left_ParamLimits

0x70fa,	// (0x000444d3) aid_size_touch_image3_arrow_left

0x7110,	// (0x000444e9) aid_size_touch_image3_arrow_right_ParamLimits

0x7110,	// (0x000444e9) aid_size_touch_image3_arrow_right

0x83f0,	// (0x000457c9) vid4_progress_pane_t3

0x6c84,	// (0x0004405d) main_hwr_training_symbol_option_pane_ParamLimits

0x6c84,	// (0x0004405d) main_hwr_training_symbol_option_pane

0xd422,	// (0x0004a7fb) popup_hwr_training_preview_window_ParamLimits

0xd422,	// (0x0004a7fb) popup_hwr_training_preview_window

0x6ce5,	// (0x000440be) hwr_training_navi_pane_g5_ParamLimits

0x6ce5,	// (0x000440be) hwr_training_navi_pane_g5

0xd65e,	// (0x0004aa37) popup_char_count_window

0xdf11,	// (0x0004b2ea) bg_popup_sub_pane_cp20_ParamLimits

0x7eda,	// (0x000452b3) list_vitu2_match_list_pane_ParamLimits

0x7ee6,	// (0x000452bf) vitu2_page_scroll_pane_ParamLimits

0x7ee6,	// (0x000452bf) vitu2_page_scroll_pane

0xdb30,	// (0x0004af09) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb30,	// (0x0004af09) list_single_hwr_training_symbol_option_pane

0xdb43,	// (0x0004af1c) list_single_hwr_training_symbol_option_pane_g1

0xdb4b,	// (0x0004af24) list_single_hwr_training_symbol_option_pane_t1

0xdb59,	// (0x0004af32) bg_button_pane_cp023

0xdb62,	// (0x0004af3b) bg_button_pane_cp024

0x8416,	// (0x000457ef) vitu2_page_scroll_pane_g1

0x841e,	// (0x000457f7) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0004cea5) vitu2_page_scroll_pane_g

0x8426,	// (0x000457ff) vitu2_page_scroll_pane_t1

0xd1c8,	// (0x0004a5a1) popup_char_count_window_g1

0xdb95,	// (0x0004af6e) popup_char_count_window_g2

0xdb9e,	// (0x0004af77) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0004ceaa) popup_char_count_window_g

0xdba7,	// (0x0004af80) popup_char_count_window_t1

0xa021,	// (0x000473fa) main_vded2_pane

0xd104,	// (0x0004a4dd) aid_size_cell_imed_line

0xd10e,	// (0x0004a4e7) grid_imed_line_width_pane

0x7549,	// (0x00044922) vid4_indicators_pane_g4

0xdbb5,	// (0x0004af8e) cell_imed_line_width_pane_ParamLimits

0xdbb5,	// (0x0004af8e) cell_imed_line_width_pane

0xdbc9,	// (0x0004afa2) cell_imed_line_width_pane_g1

0xd40e,	// (0x0004a7e7) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0004ceb1) cell_imed_line_width_pane_g

0x8435,	// (0x0004580e) main_vded2_pane_g1_ParamLimits

0x8435,	// (0x0004580e) main_vded2_pane_g1

0x8442,	// (0x0004581b) main_vded2_pane_g2_ParamLimits

0x8442,	// (0x0004581b) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0004ceb6) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0004ceb6) main_vded2_pane_g

0x8450,	// (0x00045829) vded2_slider_pane_ParamLimits

0x8450,	// (0x00045829) vded2_slider_pane

0x845d,	// (0x00045836) aid_size_touch_vded2_end

0x8467,	// (0x00045840) aid_size_touch_vded2_playhead

0xdbd2,	// (0x0004afab) aid_size_touch_vded2_start

0xdbda,	// (0x0004afb3) vded2_slider_bg_pane

0xdbe3,	// (0x0004afbc) vded2_slider_pane_g1

0xdbec,	// (0x0004afc5) vded2_slider_pane_g2

0x846f,	// (0x00045848) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0004cebb) vded2_slider_pane_g

0xdbf4,	// (0x0004afcd) vded2_slider_bg_pane_g1

0xdbfd,	// (0x0004afd6) vded2_slider_bg_pane_g2

0xdc06,	// (0x0004afdf) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0004cec2) vded2_slider_bg_pane_g

0x4d63,	// (0x0004213c) aid_postcard_touch_down_pane_ParamLimits

0x4d63,	// (0x0004213c) aid_postcard_touch_down_pane

0x4d73,	// (0x0004214c) aid_postcard_touch_up_pane_ParamLimits

0x4d73,	// (0x0004214c) aid_postcard_touch_up_pane

0xa021,	// (0x000473fa) main_blid2_pane

0x54a3,	// (0x0004287c) popup_blid2_search_window

0xa021,	// (0x000473fa) blid2_gps_pane

0xa021,	// (0x000473fa) blid2_navig_pane

0xa021,	// (0x000473fa) blid2_search_pane

0xa021,	// (0x000473fa) blid2_tripm_pane

0x8478,	// (0x00045851) blid2_search_pane_g1_ParamLimits

0x8478,	// (0x00045851) blid2_search_pane_g1

0x8488,	// (0x00045861) blid2_search_pane_t1_ParamLimits

0x8488,	// (0x00045861) blid2_search_pane_t1

0x849a,	// (0x00045873) aid_size_cell_blid2_gps_ParamLimits

0x849a,	// (0x00045873) aid_size_cell_blid2_gps

0x84aa,	// (0x00045883) blid2_gps_pane_g1_ParamLimits

0x84aa,	// (0x00045883) blid2_gps_pane_g1

0x84b6,	// (0x0004588f) grid_blid2_satellite_pane_ParamLimits

0x84b6,	// (0x0004588f) grid_blid2_satellite_pane

0x84c6,	// (0x0004589f) blid2_navig_pane_g1_ParamLimits

0x84c6,	// (0x0004589f) blid2_navig_pane_g1

0x84d2,	// (0x000458ab) blid2_navig_pane_t1_ParamLimits

0x84d2,	// (0x000458ab) blid2_navig_pane_t1

0x84e4,	// (0x000458bd) blid2_navig_pane_t2_ParamLimits

0x84e4,	// (0x000458bd) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0004cec9) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0004cec9) blid2_navig_pane_t

0x84f6,	// (0x000458cf) blid2_navig_ring_pane_ParamLimits

0x84f6,	// (0x000458cf) blid2_navig_ring_pane

0x8506,	// (0x000458df) blid2_speed_pane_ParamLimits

0x8506,	// (0x000458df) blid2_speed_pane

0x8512,	// (0x000458eb) blid2_tripm_pane_g1_ParamLimits

0x8512,	// (0x000458eb) blid2_tripm_pane_g1

0x8522,	// (0x000458fb) blid2_tripm_pane_g2_ParamLimits

0x8522,	// (0x000458fb) blid2_tripm_pane_g2

0x852e,	// (0x00045907) blid2_tripm_pane_g3_ParamLimits

0x852e,	// (0x00045907) blid2_tripm_pane_g3

0x853a,	// (0x00045913) blid2_tripm_pane_g4_ParamLimits

0x853a,	// (0x00045913) blid2_tripm_pane_g4

0x8546,	// (0x0004591f) blid2_tripm_pane_g5_ParamLimits

0x8546,	// (0x0004591f) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0004cece) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0004cece) blid2_tripm_pane_g

0x8562,	// (0x0004593b) blid2_tripm_pane_t1_ParamLimits

0x8562,	// (0x0004593b) blid2_tripm_pane_t1

0x8576,	// (0x0004594f) blid2_tripm_pane_t2_ParamLimits

0x8576,	// (0x0004594f) blid2_tripm_pane_t2

0x8588,	// (0x00045961) blid2_tripm_pane_t3_ParamLimits

0x8588,	// (0x00045961) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0004cedb) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0004cedb) blid2_tripm_pane_t

0x85ba,	// (0x00045993) cell_blid2_satellite_pane_ParamLimits

0x85ba,	// (0x00045993) cell_blid2_satellite_pane

0x85d4,	// (0x000459ad) cell_blid2_satellite_pane_g1

0xdc0f,	// (0x0004afe8) cell_blid2_satellite_pane_t1

0xcc13,	// (0x00049fec) blid2_speed_pane_g1

0xdc1d,	// (0x0004aff6) blid2_speed_pane_t1

0xdc2b,	// (0x0004b004) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0004cee4) blid2_speed_pane_t

0xcc13,	// (0x00049fec) blid2_navig_ring_pane_g1

0x85dd,	// (0x000459b6) blid2_navig_ring_pane_g2

0x85e5,	// (0x000459be) blid2_navig_ring_pane_g3

0x85ed,	// (0x000459c6) blid2_navig_ring_pane_g4

0x85f5,	// (0x000459ce) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0004cee9) blid2_navig_ring_pane_g

0xa021,	// (0x000473fa) bg_popup_window_pane_cp011

0xdc39,	// (0x0004b012) popup_blid2_search_window_g1

0xdc41,	// (0x0004b01a) popup_blid2_search_window_t1

0xdc4f,	// (0x0004b028) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0004cef4) popup_blid2_search_window_t

0xaab7,	// (0x00047e90) main_browser_pane_g1

0xa7a8,	// (0x00047b81) main_browser_pane_ParamLimits

0xad62,	// (0x0004813b) bg_button_pane_cp011_ParamLimits

0x77b5,	// (0x00044b8e) cell_vitu2_function_pane_g1_ParamLimits

0xc809,	// (0x00049be2) bg_popup_sub_pane_cp22_ParamLimits

0x1253,	// (0x0003e62c) input_focus_pane_cp08_ParamLimits

0x806e,	// (0x00045447) popup_vitu2_query_button_pane_ParamLimits

0x806e,	// (0x00045447) popup_vitu2_query_button_pane

0x126a,	// (0x0003e643) popup_vitu2_query_input_button_pane

0xd8cf,	// (0x0004aca8) popup_vitu2_query_window_g1_ParamLimits

0x1274,	// (0x0003e64d) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0004cdf5) popup_vitu2_query_window_g_ParamLimits

0xa021,	// (0x000473fa) bg_button_pane_cp026

0x85fd,	// (0x000459d6) popup_vitu2_query_input_button_pane_g1

0xa021,	// (0x000473fa) bg_button_pane_cp025

0xdc5d,	// (0x0004b036) popup_vitu2_query_button_pane_t1

0x5f04,	// (0x000432dd) main_mp3_pane_t6

0x5f14,	// (0x000432ed) popup_slider_window_cp01

0x7428,	// (0x00044801) cam4_battery_pane

0x7508,	// (0x000448e1) cam4_battery_pane_cp02

0x837d,	// (0x00045756) cam4_battery_pane_cp01

0x837d,	// (0x00045756) cam4_battery_pane_cp03

0xcc13,	// (0x00049fec) cam4_battery_pane_g1

0xd9d3,	// (0x0004adac) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0004cef9) cam4_battery_pane_g

0xcadd,	// (0x00049eb6) popup_blid_sat_info2_window_t11

0xb234,	// (0x0004860d) aid_size_touch_mv_arrow_left_ParamLimits

0xb25f,	// (0x00048638) aid_size_touch_mv_arrow_right_ParamLimits

0xb2bd,	// (0x00048696) navi_pane_g1_ParamLimits

0xb2c9,	// (0x000486a2) navi_pane_g2_ParamLimits

0xb2f7,	// (0x000486d0) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0004c7c3) navi_pane_g_ParamLimits

0x47da,	// (0x00041bb3) navi_pane_mv_t1_ParamLimits

0x69dc,	// (0x00043db5) grid_imed_effect_pane_ParamLimits

0x323f,	// (0x00040618) aid_placing_vt_slider_lsc

0xaa06,	// (0x00047ddf) aid_placing_vt_slider_prt

0xad62,	// (0x0004813b) bg_tb_trans_pane_cp01_ParamLimits

0xcd93,	// (0x0004a16c) popup_image_details_window_g1_ParamLimits

0xcda6,	// (0x0004a17f) popup_image_details_window_g2_ParamLimits

0xcdbb,	// (0x0004a194) popup_image_details_window_g3_ParamLimits

0xcdbb,	// (0x0004a194) popup_image_details_window_g3

0xf71d,	// (0x0004caf6) popup_image_details_window_g_ParamLimits

0xcdcf,	// (0x0004a1a8) popup_image_details_window_t1_ParamLimits

0xcde1,	// (0x0004a1ba) popup_image_details_window_t2_ParamLimits

0xcdfa,	// (0x0004a1d3) popup_image_details_window_t3_ParamLimits

0xce0e,	// (0x0004a1e7) popup_image_details_window_t4_ParamLimits

0xce29,	// (0x0004a202) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0004cafd) popup_image_details_window_t_ParamLimits

0x829d,	// (0x00045676) cl_header_name_pane_ParamLimits

0x829d,	// (0x00045676) cl_header_name_pane

0x8605,	// (0x000459de) cl_header_name_pane_t1_ParamLimits

0x8605,	// (0x000459de) cl_header_name_pane_t1

0x861c,	// (0x000459f5) cl_header_name_pane_t2_ParamLimits

0x861c,	// (0x000459f5) cl_header_name_pane_t2

0x8646,	// (0x00045a1f) cl_header_name_pane_t3_ParamLimits

0x8646,	// (0x00045a1f) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0004cefe) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0004cefe) cl_header_name_pane_t

0xb386,	// (0x0004875f) navi_pane_mv_g2_ParamLimits

0xd638,	// (0x0004aa11) field_vitu2_entry_pane_g1_ParamLimits

0xd644,	// (0x0004aa1d) field_vitu2_entry_pane_g2_ParamLimits

0xd650,	// (0x0004aa29) field_vitu2_entry_pane_g3_ParamLimits

0xd650,	// (0x0004aa29) field_vitu2_entry_pane_g3

0xf91b,	// (0x0004ccf4) field_vitu2_entry_pane_g_ParamLimits

0x7740,	// (0x00044b19) cell_vitu2_itu_pane_g1_ParamLimits

0x7750,	// (0x00044b29) cell_vitu2_itu_pane_g2_ParamLimits

0x7750,	// (0x00044b29) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0004cd00) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0004cd00) cell_vitu2_itu_pane_g

0xad62,	// (0x0004813b) bg_vkb2_func_pane_cp05_ParamLimits

0xad62,	// (0x0004813b) bg_vkb2_func_pane_cp05

0xad62,	// (0x0004813b) bg_vkb2_func_pane_cp03

0xad62,	// (0x0004813b) bg_vkb2_func_pane_cp04

0xad62,	// (0x0004813b) bg_vkb2_func_pane_cp10_ParamLimits

0xad62,	// (0x0004813b) bg_vkb2_func_pane_cp10

0x1429,	// (0x0003e802) bg_vkb2_func_pane_cp08

0x8247,	// (0x00045620) bg_vkb2_func_pane_cp06

0x8255,	// (0x0004562e) bg_vkb2_func_pane_cp07

0xdb6b,	// (0x0004af44) bg_vkb2_func_pane_cp11_ParamLimits

0xdb6b,	// (0x0004af44) bg_vkb2_func_pane_cp11

0xdb80,	// (0x0004af59) bg_vkb2_func_pane_cp12_ParamLimits

0xdb80,	// (0x0004af59) bg_vkb2_func_pane_cp12

0xa021,	// (0x000473fa) bg_vkb2_func_pane_cp09

0xd670,	// (0x0004aa49) bg_vkb2_func_pane_g1

0xabc8,	// (0x00047fa1) bg_vkb2_func_pane_g2

0xd678,	// (0x0004aa51) bg_vkb2_func_pane_g3

0xd680,	// (0x0004aa59) bg_vkb2_func_pane_g4

0xd894,	// (0x0004ac6d) bg_vkb2_func_pane_g5

0xd698,	// (0x0004aa71) bg_vkb2_func_pane_g6

0xd6a0,	// (0x0004aa79) bg_vkb2_func_pane_g7

0xd690,	// (0x0004aa69) bg_vkb2_func_pane_g8

0xaba8,	// (0x00047f81) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0004cf05) bg_vkb2_func_pane_g

0x8554,	// (0x0004592d) blid2_tripm_pane_g6_ParamLimits

0x8554,	// (0x0004592d) blid2_tripm_pane_g6

0xd4da,	// (0x0004a8b3) mp4_progress_pane_g1

0x85ae,	// (0x00045987) blid2_tripm_values_pane_ParamLimits

0x85ae,	// (0x00045987) blid2_tripm_values_pane

0x866b,	// (0x00045a44) blid2_tripm_values_pane_t1

0x8679,	// (0x00045a52) blid2_tripm_values_pane_t2

0x8687,	// (0x00045a60) blid2_tripm_values_pane_t3

0x8695,	// (0x00045a6e) blid2_tripm_values_pane_t4

0x86a3,	// (0x00045a7c) blid2_tripm_values_pane_t5

0x86b1,	// (0x00045a8a) blid2_tripm_values_pane_t6

0x86bf,	// (0x00045a98) blid2_tripm_values_pane_t7

0x86cd,	// (0x00045aa6) blid2_tripm_values_pane_t8

0x86db,	// (0x00045ab4) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0004cf18) blid2_tripm_values_pane_t

0x327f,	// (0x00040658) call_video_pane_t1_ParamLimits

0x32a0,	// (0x00040679) call_video_pane_t2_ParamLimits

0xf273,	// (0x0004c64c) call_video_pane_t_ParamLimits

0x0fae,	// (0x0003e387) msg_header_pane_g1_ParamLimits

0xb579,	// (0x00048952) msg_header_pane_g2_ParamLimits

0xb579,	// (0x00048952) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0004c866) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0004c866) msg_header_pane_g

0xa7a8,	// (0x00047b81) main_clock2_pane_ParamLimits

0x676d,	// (0x00043b46) grid_clock2_toolbar_pane_ParamLimits

0x676d,	// (0x00043b46) grid_clock2_toolbar_pane

0x676d,	// (0x00043b46) listscroll_clock2_pane_ParamLimits

0x676d,	// (0x00043b46) listscroll_clock2_pane

0x6817,	// (0x00043bf0) main_clock2_pane_t3_ParamLimits

0x6817,	// (0x00043bf0) main_clock2_pane_t3

0x6829,	// (0x00043c02) main_clock2_pane_t4_ParamLimits

0x6829,	// (0x00043c02) main_clock2_pane_t4

0xdc6b,	// (0x0004b044) cell_clock2_toolbar_pane

0xdc73,	// (0x0004b04c) cell_clock2_toolbar_pane_cp01

0xdc73,	// (0x0004b04c) cell_clock2_toolbar_pane_cp02

0xdc7b,	// (0x0004b054) cell_clock2_toolbar_pane_cp03

0xdc83,	// (0x0004b05c) list_clock2_pane

0xb1aa,	// (0x00048583) scroll_pane_cp10

0xdc8b,	// (0x0004b064) list_single_clock2_pane_ParamLimits

0xdc8b,	// (0x0004b064) list_single_clock2_pane

0xb3ed,	// (0x000487c6) list_highlight_pane_cp08

0xdc98,	// (0x0004b071) list_single_clock2_pane_t1

0xdca6,	// (0x0004b07f) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0004cf2b) list_single_clock2_pane_t

0xa021,	// (0x000473fa) bg_button_pane_cp10

0xdcb4,	// (0x0004b08d) cell_clock2_toolbar_pane_g1

0x4cc5,	// (0x0004209e) aid_main_viewer_pane_g1_ParamLimits

0x4cc5,	// (0x0004209e) aid_main_viewer_pane_g1

0x4cd1,	// (0x000420aa) aid_main_viewer_pane_g2_ParamLimits

0x4cd1,	// (0x000420aa) aid_main_viewer_pane_g2

0x4cdd,	// (0x000420b6) aid_main_viewer_pane_g3_ParamLimits

0x4cdd,	// (0x000420b6) aid_main_viewer_pane_g3

0x4cee,	// (0x000420c7) aid_main_viewer_pane_g4_ParamLimits

0x4cee,	// (0x000420c7) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0004c877) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0004c877) aid_main_viewer_pane_g

0x547b,	// (0x00042854) main_calc_pane_ParamLimits

0x5488,	// (0x00042861) main_dialer2_pane_ParamLimits

0xa021,	// (0x000473fa) main_cam6_pane

0xa021,	// (0x000473fa) main_vid6_pane

0x6779,	// (0x00043b52) listscroll_gen_pane_cp06_ParamLimits

0x6779,	// (0x00043b52) listscroll_gen_pane_cp06

0x683b,	// (0x00043c14) main_clock2_pane_t5_ParamLimits

0x683b,	// (0x00043c14) main_clock2_pane_t5

0x6886,	// (0x00043c5f) aid_call2_pane_cp10_ParamLimits

0x6898,	// (0x00043c71) aid_call_pane_cp10_ParamLimits

0xb228,	// (0x00048601) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb228,	// (0x00048601) popup_clock_analogue_window_cp10_g2_ParamLimits

0x68aa,	// (0x00043c83) popup_clock_analogue_window_cp10_g3_ParamLimits

0x68aa,	// (0x00043c83) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb228,	// (0x00048601) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0004cbad) popup_clock_analogue_window_cp10_g_ParamLimits

0x68bc,	// (0x00043c95) popup_clock_analogue_window_cp10_t1_ParamLimits

0x70a7,	// (0x00044480) cell_dialer2_keypad_pane_g2_ParamLimits

0x70a7,	// (0x00044480) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0004cc93) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0004cc93) cell_dialer2_keypad_pane_g

0x70c3,	// (0x0004449c) cell_dialer2_keypad_pane_t1

0x7a82,	// (0x00044e5b) main_cset_text2_pane_ParamLimits

0x7a82,	// (0x00044e5b) main_cset_text2_pane

0xdad3,	// (0x0004aeac) area_vitu2_query_pane_g1_ParamLimits

0x1354,	// (0x0003e72d) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0004ce48) area_vitu2_query_pane_g_ParamLimits

0x1405,	// (0x0003e7de) area_vitu2_query_pane_t7_ParamLimits

0x1405,	// (0x0003e7de) area_vitu2_query_pane_t7

0x8247,	// (0x00045620) bg_button_pane_cp018_ParamLimits

0x8255,	// (0x0004562e) bg_button_pane_cp021_ParamLimits

0x1429,	// (0x0003e802) bg_button_pane_cp022_ParamLimits

0x1429,	// (0x0003e802) bg_vkb2_func_pane_cp08_ParamLimits

0x8247,	// (0x00045620) bg_vkb2_func_pane_cp06_ParamLimits

0x8255,	// (0x0004562e) bg_vkb2_func_pane_cp07_ParamLimits

0x143a,	// (0x0003e813) input_focus_pane_cp09_ParamLimits

0x86e9,	// (0x00045ac2) cam6_autofocus_pane_ParamLimits

0x86e9,	// (0x00045ac2) cam6_autofocus_pane

0x870b,	// (0x00045ae4) cam6_image_uncrop_pane_ParamLimits

0x870b,	// (0x00045ae4) cam6_image_uncrop_pane

0x8738,	// (0x00045b11) cam6_indi_pane_ParamLimits

0x8738,	// (0x00045b11) cam6_indi_pane

0x8752,	// (0x00045b2b) cam6_mode_pane_ParamLimits

0x8752,	// (0x00045b2b) cam6_mode_pane

0x8766,	// (0x00045b3f) cam6_timer_pane_ParamLimits

0x8766,	// (0x00045b3f) cam6_timer_pane

0x8772,	// (0x00045b4b) cam6_zoom_pane_ParamLimits

0x8772,	// (0x00045b4b) cam6_zoom_pane

0x878a,	// (0x00045b63) cam6_mode_pane_g1_ParamLimits

0x878a,	// (0x00045b63) cam6_mode_pane_g1

0x8796,	// (0x00045b6f) cam6_mode_pane_g2_ParamLimits

0x8796,	// (0x00045b6f) cam6_mode_pane_g2

0x87a2,	// (0x00045b7b) cam6_mode_pane_g3_ParamLimits

0x87a2,	// (0x00045b7b) cam6_mode_pane_g3

0x87ae,	// (0x00045b87) cam6_mode_pane_g4_ParamLimits

0x87ae,	// (0x00045b87) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0004cf30) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0004cf30) cam6_mode_pane_g

0xd9e9,	// (0x0004adc2) bg_tb_trans_pane_cp08_ParamLimits

0xd9e9,	// (0x0004adc2) bg_tb_trans_pane_cp08

0xdcbc,	// (0x0004b095) cam6_battery_pane_ParamLimits

0xdcbc,	// (0x0004b095) cam6_battery_pane

0xdcd2,	// (0x0004b0ab) cam6_indi_pane_g1_ParamLimits

0xdcd2,	// (0x0004b0ab) cam6_indi_pane_g1

0xdce4,	// (0x0004b0bd) cam6_indi_pane_g2_ParamLimits

0xdce4,	// (0x0004b0bd) cam6_indi_pane_g2

0xdcf6,	// (0x0004b0cf) cam6_indi_pane_g3_ParamLimits

0xdcf6,	// (0x0004b0cf) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0004cf39) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0004cf39) cam6_indi_pane_g

0xdd08,	// (0x0004b0e1) cam6_indi_pane_t1_ParamLimits

0xdd08,	// (0x0004b0e1) cam6_indi_pane_t1

0x757c,	// (0x00044955) cam6_autofocus_pane_g1

0x7584,	// (0x0004495d) cam6_autofocus_pane_g2

0x758c,	// (0x00044965) cam6_autofocus_pane_g3

0x7594,	// (0x0004496d) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0004cf40) cam6_autofocus_pane_g

0xdd2e,	// (0x0004b107) cam6_timer_pane_g1

0xdd36,	// (0x0004b10f) cam6_timer_pane_t1

0xdd44,	// (0x0004b11d) cam6_zoom_cont_pane

0xdd4c,	// (0x0004b125) cam6_zoom_pane_g1

0xdd54,	// (0x0004b12d) cam6_zoom_pane_g2

0x87ba,	// (0x00045b93) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0004cf49) cam6_zoom_pane_g

0xcc13,	// (0x00049fec) cam6_battery_pane_g1

0xcc13,	// (0x00049fec) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0004caba) cam6_battery_pane_g

0xdd5c,	// (0x0004b135) cam6_zoom_cont_pane_g1

0xdd65,	// (0x0004b13e) cam6_zoom_cont_pane_g2

0xdd6e,	// (0x0004b147) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0004cf50) cam6_zoom_cont_pane_g

0x87d7,	// (0x00045bb0) cam6_mode_pane_cp_ParamLimits

0x87d7,	// (0x00045bb0) cam6_mode_pane_cp

0x8772,	// (0x00045b4b) cam6_zoom_pane_cp_ParamLimits

0x8772,	// (0x00045b4b) cam6_zoom_pane_cp

0x87eb,	// (0x00045bc4) vid6_image_uncrop_cif_pane_ParamLimits

0x87eb,	// (0x00045bc4) vid6_image_uncrop_cif_pane

0x8817,	// (0x00045bf0) vid6_image_uncrop_nhd_pane_ParamLimits

0x8817,	// (0x00045bf0) vid6_image_uncrop_nhd_pane

0x870b,	// (0x00045ae4) vid6_image_uncrop_vga_pane_ParamLimits

0x870b,	// (0x00045ae4) vid6_image_uncrop_vga_pane

0x8834,	// (0x00045c0d) vid6_image_uncrop_wvga_pane_ParamLimits

0x8834,	// (0x00045c0d) vid6_image_uncrop_wvga_pane

0x8851,	// (0x00045c2a) vid6_indi_pane_ParamLimits

0x8851,	// (0x00045c2a) vid6_indi_pane

0xd9e9,	// (0x0004adc2) bg_tb_trans_pane_cp09_ParamLimits

0xd9e9,	// (0x0004adc2) bg_tb_trans_pane_cp09

0xdd86,	// (0x0004b15f) cam6_battery_pane_cp_ParamLimits

0xdd86,	// (0x0004b15f) cam6_battery_pane_cp

0xdd92,	// (0x0004b16b) vid6_indi_pane_g1_ParamLimits

0xdd92,	// (0x0004b16b) vid6_indi_pane_g1

0xdda4,	// (0x0004b17d) vid6_indi_pane_g2_ParamLimits

0xdda4,	// (0x0004b17d) vid6_indi_pane_g2

0xddb6,	// (0x0004b18f) vid6_indi_pane_g3_ParamLimits

0xddb6,	// (0x0004b18f) vid6_indi_pane_g3

0xddcb,	// (0x0004b1a4) vid6_indi_pane_g4_ParamLimits

0xddcb,	// (0x0004b1a4) vid6_indi_pane_g4

0xdde0,	// (0x0004b1b9) vid6_indi_pane_g5_ParamLimits

0xdde0,	// (0x0004b1b9) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0004cf57) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0004cf57) vid6_indi_pane_g

0xddfa,	// (0x0004b1d3) vid6_indi_pane_t1_ParamLimits

0xddfa,	// (0x0004b1d3) vid6_indi_pane_t1

0xde10,	// (0x0004b1e9) vid6_indi_pane_t2_ParamLimits

0xde10,	// (0x0004b1e9) vid6_indi_pane_t2

0xde38,	// (0x0004b211) vid6_indi_pane_t3_ParamLimits

0xde38,	// (0x0004b211) vid6_indi_pane_t3

0xde60,	// (0x0004b239) vid6_indi_pane_t4_ParamLimits

0xde60,	// (0x0004b239) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0004cf62) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0004cf62) vid6_indi_pane_t

0xde84,	// (0x0004b25d) wait_bar_pane_cp08

0x8874,	// (0x00045c4d) main_cset_text2_pane_t1_ParamLimits

0x8874,	// (0x00045c4d) main_cset_text2_pane_t1

0x87c2,	// (0x00045b9b) listscroll_gen_pane_cp06_t1_ParamLimits

0x87c2,	// (0x00045b9b) listscroll_gen_pane_cp06_t1

0xa021,	// (0x000473fa) main_cam6_set_pane

0xce73,	// (0x0004a24c) bg_tb_trans_pane_cp06_ParamLimits

0x7430,	// (0x00044809) cam4_indicators_pane_g1_ParamLimits

0x7441,	// (0x0004481a) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0004ccd0) cam4_indicators_pane_g_ParamLimits

0x745f,	// (0x00044838) cam4_indicators_pane_t1_ParamLimits

0xad62,	// (0x0004813b) bg_tb_trans_pane_cp07_ParamLimits

0x7510,	// (0x000448e9) vid4_indicators_pane_g1_ParamLimits

0x7524,	// (0x000448fd) vid4_indicators_pane_g2_ParamLimits

0x7538,	// (0x00044911) vid4_indicators_pane_g3_ParamLimits

0x7549,	// (0x00044922) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0004cce2) vid4_indicators_pane_g_ParamLimits

0x7565,	// (0x0004493e) vid4_indicators_pane_t1_ParamLimits

0x8385,	// (0x0004575e) vid4_progress_pane_g1_ParamLimits

0x8397,	// (0x00045770) vid4_progress_pane_g2_ParamLimits

0x4d4b,	// (0x00042124) vid4_progress_pane_g3_ParamLimits

0x83a7,	// (0x00045780) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0004ce93) vid4_progress_pane_g_ParamLimits

0x83c5,	// (0x0004579e) vid4_progress_pane_t1_ParamLimits

0x83da,	// (0x000457b3) vid4_progress_pane_t2_ParamLimits

0x83f0,	// (0x000457c9) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0004ce9e) vid4_progress_pane_t_ParamLimits

0x8406,	// (0x000457df) wait_bar_pane_cp07_ParamLimits

0x88ae,	// (0x00045c87) main_cam6_set_pane_g2_ParamLimits

0x88ae,	// (0x00045c87) main_cam6_set_pane_g2

0x88ba,	// (0x00045c93) main_cset6_listscroll_pane_ParamLimits

0x88ba,	// (0x00045c93) main_cset6_listscroll_pane

0x88e5,	// (0x00045cbe) main_cset6_slider_pane_ParamLimits

0x88e5,	// (0x00045cbe) main_cset6_slider_pane

0x88f1,	// (0x00045cca) main_cset6_text2_pane_ParamLimits

0x88f1,	// (0x00045cca) main_cset6_text2_pane

0xde93,	// (0x0004b26c) main_cset6_text_pane

0xde9b,	// (0x0004b274) main_cset_list_pane_copy1_ParamLimits

0xde9b,	// (0x0004b274) main_cset_list_pane_copy1

0xdeab,	// (0x0004b284) scroll_pane_cp028_copy1

0x8904,	// (0x00045cdd) cset_list_set_pane_copy1

0x891d,	// (0x00045cf6) aid_position_infowindow_above_copy1

0x8925,	// (0x00045cfe) aid_position_infowindow_below_copy1

0x149c,	// (0x0003e875) cset_list_set_pane_g1_copy1

0x11c8,	// (0x0003e5a1) cset_list_set_pane_g3_copy1_ParamLimits

0x11c8,	// (0x0003e5a1) cset_list_set_pane_g3_copy1

0x11d7,	// (0x0003e5b0) cset_list_set_pane_t1_copy1_ParamLimits

0x11d7,	// (0x0003e5b0) cset_list_set_pane_t1_copy1

0xad62,	// (0x0004813b) list_highlight_pane_cp021_copy1_ParamLimits

0xad62,	// (0x0004813b) list_highlight_pane_cp021_copy1

0xdeb4,	// (0x0004b28d) cset6_slider_pane_ParamLimits

0xdeb4,	// (0x0004b28d) cset6_slider_pane

0xdee0,	// (0x0004b2b9) main_cset6_slider_pane_g1_ParamLimits

0xdee0,	// (0x0004b2b9) main_cset6_slider_pane_g1

0x892d,	// (0x00045d06) main_cset6_slider_pane_g2_ParamLimits

0x892d,	// (0x00045d06) main_cset6_slider_pane_g2

0xdf3a,	// (0x0004b313) main_cset6_slider_pane_g3_ParamLimits

0xdf3a,	// (0x0004b313) main_cset6_slider_pane_g3

0x8955,	// (0x00045d2e) main_cset6_slider_pane_g4_ParamLimits

0x8955,	// (0x00045d2e) main_cset6_slider_pane_g4

0x8961,	// (0x00045d3a) main_cset6_slider_pane_g5_ParamLimits

0x8961,	// (0x00045d3a) main_cset6_slider_pane_g5

0xd79f,	// (0x0004ab78) main_cset6_slider_pane_g7_ParamLimits

0xd79f,	// (0x0004ab78) main_cset6_slider_pane_g7

0xd7ab,	// (0x0004ab84) main_cset6_slider_pane_g8_ParamLimits

0xd7ab,	// (0x0004ab84) main_cset6_slider_pane_g8

0x896f,	// (0x00045d48) main_cset6_slider_pane_g9_ParamLimits

0x896f,	// (0x00045d48) main_cset6_slider_pane_g9

0x897b,	// (0x00045d54) main_cset6_slider_pane_g10_ParamLimits

0x897b,	// (0x00045d54) main_cset6_slider_pane_g10

0x8987,	// (0x00045d60) main_cset6_slider_pane_g11_ParamLimits

0x8987,	// (0x00045d60) main_cset6_slider_pane_g11

0x8993,	// (0x00045d6c) main_cset6_slider_pane_g12_ParamLimits

0x8993,	// (0x00045d6c) main_cset6_slider_pane_g12

0x899f,	// (0x00045d78) main_cset6_slider_pane_g13_ParamLimits

0x899f,	// (0x00045d78) main_cset6_slider_pane_g13

0x89ab,	// (0x00045d84) main_cset6_slider_pane_g14_ParamLimits

0x89ab,	// (0x00045d84) main_cset6_slider_pane_g14

0x89b7,	// (0x00045d90) main_cset6_slider_pane_g15_ParamLimits

0x89b7,	// (0x00045d90) main_cset6_slider_pane_g15

0x89cf,	// (0x00045da8) main_cset6_slider_pane_g16_ParamLimits

0x89cf,	// (0x00045da8) main_cset6_slider_pane_g16

0x89dd,	// (0x00045db6) main_cset6_slider_pane_g17_ParamLimits

0x89dd,	// (0x00045db6) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0004cf6b) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0004cf6b) main_cset6_slider_pane_g

0xdf46,	// (0x0004b31f) main_cset6_slider_pane_t1_ParamLimits

0xdf46,	// (0x0004b31f) main_cset6_slider_pane_t1

0x8a03,	// (0x00045ddc) main_cset6_slider_pane_t2_ParamLimits

0x8a03,	// (0x00045ddc) main_cset6_slider_pane_t2

0x8a2e,	// (0x00045e07) main_cset6_slider_pane_t3_ParamLimits

0x8a2e,	// (0x00045e07) main_cset6_slider_pane_t3

0x8a59,	// (0x00045e32) main_cset6_slider_pane_t4_ParamLimits

0x8a59,	// (0x00045e32) main_cset6_slider_pane_t4

0x8a84,	// (0x00045e5d) main_cset6_slider_pane_t5_ParamLimits

0x8a84,	// (0x00045e5d) main_cset6_slider_pane_t5

0xdf87,	// (0x0004b360) main_cset6_slider_pane_t7_ParamLimits

0xdf87,	// (0x0004b360) main_cset6_slider_pane_t7

0x8ab1,	// (0x00045e8a) main_cset6_slider_pane_t8_ParamLimits

0x8ab1,	// (0x00045e8a) main_cset6_slider_pane_t8

0x8ad5,	// (0x00045eae) main_cset6_slider_pane_t9_ParamLimits

0x8ad5,	// (0x00045eae) main_cset6_slider_pane_t9

0x8af9,	// (0x00045ed2) main_cset6_slider_pane_t10_ParamLimits

0x8af9,	// (0x00045ed2) main_cset6_slider_pane_t10

0x8b1d,	// (0x00045ef6) main_cset6_slider_pane_t11_ParamLimits

0x8b1d,	// (0x00045ef6) main_cset6_slider_pane_t11

0xdfbd,	// (0x0004b396) main_cset6_slider_pane_t14_ParamLimits

0xdfbd,	// (0x0004b396) main_cset6_slider_pane_t14

0xdff6,	// (0x0004b3cf) main_cset6_slider_pane_t15_ParamLimits

0xdff6,	// (0x0004b3cf) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0004cf90) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0004cf90) main_cset6_slider_pane_t

0xdf1f,	// (0x0004b2f8) cset_slider_pane_g1_copy1

0xdf28,	// (0x0004b301) cset_slider_pane_g2_copy1

0xdf31,	// (0x0004b30a) cset_slider_pane_g3_copy1

0xa021,	// (0x000473fa) bg_popup_sub_pane_cp011_copy1

0xe02f,	// (0x0004b408) main_cset_text_pane_g1_copy1

0xd8e3,	// (0x0004acbc) main_cset_text_pane_t1_copy1

0xd8f1,	// (0x0004acca) main_cset_text_pane_t2_copy1

0xd8ff,	// (0x0004acd8) main_cset_text_pane_t3_copy1

0xd90d,	// (0x0004ace6) main_cset_text_pane_t4_copy1

0xd91b,	// (0x0004acf4) main_cset_text_pane_t5_copy1

0xe037,	// (0x0004b410) main_cset_text_pane_t6_copy1

0xe045,	// (0x0004b41e) main_cset_text_pane_t7_copy1

0x8b43,	// (0x00045f1c) main_cset_text2_pane_t1_copy1

0xad62,	// (0x0004813b) main_ncimui_pane

0x54d9,	// (0x000428b2) popup_query_ncimui_window_ParamLimits

0x54d9,	// (0x000428b2) popup_query_ncimui_window

0x1071,	// (0x0003e44a) field_cale_ev2_pane_g4_ParamLimits

0x1071,	// (0x0003e44a) field_cale_ev2_pane_g4

0x6dc7,	// (0x000441a0) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6dc7,	// (0x000441a0) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0004cc6e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0004cc6e) cell_video_dialer_keypad_pane_g

0x6ddf,	// (0x000441b8) cell_video_dialer_keypad_pane_t1

0xa021,	// (0x000473fa) bg_popup_window_pane_cp012

0xb06b,	// (0x00048444) heading_pane_cp06

0xe071,	// (0x0004b44a) ncim_query_content_pane

0xa021,	// (0x000473fa) bg_popup_heading_pane_cp01

0xe079,	// (0x0004b452) ncim_heading_pane_t1

0xe087,	// (0x0004b460) ncim_indicator_popup_pane

0xe099,	// (0x0004b472) ncim_query_button_pane

0xe0ad,	// (0x0004b486) ncim_query_content_pane_t1

0xe0bf,	// (0x0004b498) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0004cfd4) ncim_query_content_pane_t

0xe0f9,	// (0x0004b4d2) ncim_query_list_pane

0xe10b,	// (0x0004b4e4) ncim_query_popup_pane

0xe087,	// (0x0004b460) ncim_indicator_popup_pane_ParamLimits

0x8c9d,	// (0x00046076) ncim_query_content_pane_g1_ParamLimits

0x8c9d,	// (0x00046076) ncim_query_content_pane_g1

0xe0ad,	// (0x0004b486) ncim_query_content_pane_t1_ParamLimits

0xe0bf,	// (0x0004b498) ncim_query_content_pane_t2_ParamLimits

0x8ca9,	// (0x00046082) ncim_query_content_pane_t3_ParamLimits

0x8ca9,	// (0x00046082) ncim_query_content_pane_t3

0x8cc6,	// (0x0004609f) ncim_query_content_pane_t4_ParamLimits

0x8cc6,	// (0x0004609f) ncim_query_content_pane_t4

0x8ce3,	// (0x000460bc) ncim_query_content_pane_t5_ParamLimits

0x8ce3,	// (0x000460bc) ncim_query_content_pane_t5

0xe0d1,	// (0x0004b4aa) ncim_query_content_pane_t6_ParamLimits

0xe0d1,	// (0x0004b4aa) ncim_query_content_pane_t6

0xfbfb,	// (0x0004cfd4) ncim_query_content_pane_t_ParamLimits

0xe0f9,	// (0x0004b4d2) ncim_query_list_pane_ParamLimits

0xe10b,	// (0x0004b4e4) ncim_query_popup_pane_ParamLimits

0xe11f,	// (0x0004b4f8) wait_bar_pane_cp04

0xa021,	// (0x000473fa) input_focus_pane_cp011

0xe127,	// (0x0004b500) ncim_query_popup_pane_t1

0xe135,	// (0x0004b50e) ncim_list_query_list_pane_ParamLimits

0xe135,	// (0x0004b50e) ncim_list_query_list_pane

0xa021,	// (0x000473fa) bg_button_pane_cp027

0xe148,	// (0x0004b521) ncim_query_button_pane_g1

0xa021,	// (0x000473fa) list_highlight_pane_cp012

0xe152,	// (0x0004b52b) ncim_list_query_list_pane_g1

0xe15a,	// (0x0004b533) ncim_list_query_list_pane_t1

0x7450,	// (0x00044829) cam4_indicators_pane_g3_ParamLimits

0x7450,	// (0x00044829) cam4_indicators_pane_g3

0x7555,	// (0x0004492e) vid4_indicators_pane_g5_ParamLimits

0x7555,	// (0x0004492e) vid4_indicators_pane_g5

0x83b6,	// (0x0004578f) vid4_progress_pane_g5_ParamLimits

0x83b6,	// (0x0004578f) vid4_progress_pane_g5

0x8b89,	// (0x00045f62) main_ncimui_pane_g1

0x8bf1,	// (0x00045fca) ncimui_group_query_pane_ParamLimits

0x8bf1,	// (0x00045fca) ncimui_group_query_pane

0x8c39,	// (0x00046012) ncimui_list_pane_ParamLimits

0x8c39,	// (0x00046012) ncimui_list_pane

0x8c60,	// (0x00046039) ncimui_text_pane_ParamLimits

0x8c60,	// (0x00046039) ncimui_text_pane

0x8d00,	// (0x000460d9) ncimui_text_pane_t1_ParamLimits

0x8d00,	// (0x000460d9) ncimui_text_pane_t1

0xe168,	// (0x0004b541) ncimui_list_single_graphic_pane_ParamLimits

0xe168,	// (0x0004b541) ncimui_list_single_graphic_pane

0x8d1f,	// (0x000460f8) ncimui_query_pane_ParamLimits

0x8d1f,	// (0x000460f8) ncimui_query_pane

0xa021,	// (0x000473fa) list_highlight_pane_cp013

0xe178,	// (0x0004b551) ncim_list_query_list_pane_t1_copy1

0xe152,	// (0x0004b52b) ncim_list_single_graphic_pane_g1

0xe186,	// (0x0004b55f) ncim_query_button_pane_cp01

0xe192,	// (0x0004b56b) ncim_query_entry_pane_ParamLimits

0xe192,	// (0x0004b56b) ncim_query_entry_pane

0xe1a5,	// (0x0004b57e) ncimui_query_pane_g1

0xe1b1,	// (0x0004b58a) ncimui_query_pane_t1_ParamLimits

0xe1b1,	// (0x0004b58a) ncimui_query_pane_t1

0xad62,	// (0x0004813b) input_focus_pane_cp012

0xe1ca,	// (0x0004b5a3) ncim_query_entry_pane_t1

0xa7a8,	// (0x00047b81) main_im_pane_ParamLimits

0xad62,	// (0x0004813b) main_mobtv_pane_ParamLimits

0xad62,	// (0x0004813b) main_mobtv_pane

0x89eb,	// (0x00045dc4) main_cset6_slider_pane_g18_ParamLimits

0x89eb,	// (0x00045dc4) main_cset6_slider_pane_g18

0x89f7,	// (0x00045dd0) main_cset6_slider_pane_g19_ParamLimits

0x89f7,	// (0x00045dd0) main_cset6_slider_pane_g19

0xd650,	// (0x0004aa29) bg_main_mobtv_pane_ParamLimits

0xd650,	// (0x0004aa29) bg_main_mobtv_pane

0x8d32,	// (0x0004610b) main_mobtv_info_pane

0x8d3d,	// (0x00046116) main_mobtv_loading_pane_ParamLimits

0x8d3d,	// (0x00046116) main_mobtv_loading_pane

0xe1dc,	// (0x0004b5b5) main_mobtv_pg_channel_list_pane

0xe1e6,	// (0x0004b5bf) main_mobtv_pg_hdr_pane

0x8d4a,	// (0x00046123) main_mobtv_programe_curr_pane_ParamLimits

0x8d4a,	// (0x00046123) main_mobtv_programe_curr_pane

0x8d57,	// (0x00046130) main_mobtv_programe_next_pane_ParamLimits

0x8d57,	// (0x00046130) main_mobtv_programe_next_pane

0xe1ef,	// (0x0004b5c8) popup_mobtv_noti_window

0xcc13,	// (0x00049fec) main_tv_pg_hdr_pane_g1

0xe1f7,	// (0x0004b5d0) main_tv_pg_hdr_pane_g2

0xe1ff,	// (0x0004b5d8) main_tv_pg_hdr_pane_g3

0xe207,	// (0x0004b5e0) main_tv_pg_hdr_pane_g4

0xe20f,	// (0x0004b5e8) main_tv_pg_hdr_pane_g5

0xe219,	// (0x0004b5f2) main_tv_pg_hdr_pane_g6

0xe223,	// (0x0004b5fc) main_tv_pg_hdr_pane_g7

0xe22d,	// (0x0004b606) main_tv_pg_hdr_pane_g8

0xe237,	// (0x0004b610) main_tv_pg_hdr_pane_g9

0xe241,	// (0x0004b61a) main_tv_pg_hdr_pane_g10

0xe24b,	// (0x0004b624) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0004cfe1) main_tv_pg_hdr_pane_g

0xe255,	// (0x0004b62e) main_tv_pg_hdr_pane_t1

0xe263,	// (0x0004b63c) main_tv_pg_hdr_pane_t2

0xe271,	// (0x0004b64a) main_tv_pg_hdr_pane_t3

0xe281,	// (0x0004b65a) main_tv_pg_hdr_pane_t4

0xe291,	// (0x0004b66a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0004cff8) main_tv_pg_hdr_pane_t

0xe2a1,	// (0x0004b67a) single_mobtv_pg_channel_pane_ParamLimits

0xe2a1,	// (0x0004b67a) single_mobtv_pg_channel_pane

0xe2b3,	// (0x0004b68c) single_mobtv_pg_channel_table_pane

0xe2bc,	// (0x0004b695) single_mobtv_pg_channel_thumb_pane

0xe2c5,	// (0x0004b69e) single_tv_pg_channel_pane_g1

0xe2ce,	// (0x0004b6a7) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0004d003) single_tv_pg_channel_pane_g

0xce73,	// (0x0004a24c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce73,	// (0x0004a24c) bg_single_mobtv_pg_channel_thumb_pane

0xe2d7,	// (0x0004b6b0) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2d7,	// (0x0004b6b0) single_mobtv_pg_channel_thumb_pane_g1

0xe2e5,	// (0x0004b6be) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2e5,	// (0x0004b6be) single_mobtv_pg_channel_thumb_pane_g2

0xe2f1,	// (0x0004b6ca) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2f1,	// (0x0004b6ca) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0004d008) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0004d008) single_mobtv_pg_channel_thumb_pane_g

0xe2fd,	// (0x0004b6d6) single_mobtv_pg_channel_thumb_pane_t1

0xe30b,	// (0x0004b6e4) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0004d00f) single_mobtv_pg_channel_thumb_pane_t

0xcc13,	// (0x00049fec) bg_single_mobtv_pg_channel_table_pane_g1

0xcc13,	// (0x00049fec) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0004caba) bg_single_mobtv_pg_channel_table_pane_g

0xe319,	// (0x0004b6f2) single_mobtv_pg_channel_table_pane_t1

0xe327,	// (0x0004b700) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0004d014) single_mobtv_pg_channel_table_pane_t

0x8d6c,	// (0x00046145) main_mobtv_info_pane_g1_ParamLimits

0x8d6c,	// (0x00046145) main_mobtv_info_pane_g1

0x8d88,	// (0x00046161) main_mobtv_info_pane_t1_ParamLimits

0x8d88,	// (0x00046161) main_mobtv_info_pane_t1

0x8e00,	// (0x000461d9) main_mobtv_info_pane_t2_ParamLimits

0x8e00,	// (0x000461d9) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0004d01e) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0004d01e) main_mobtv_info_pane_t

0x8e8f,	// (0x00046268) wait_bar_pane_cp05

0x8ea1,	// (0x0004627a) main_mobtv_loading_pane_g1_ParamLimits

0x8ea1,	// (0x0004627a) main_mobtv_loading_pane_g1

0x8eaf,	// (0x00046288) main_mobtv_loading_pane_g2_ParamLimits

0x8eaf,	// (0x00046288) main_mobtv_loading_pane_g2

0x8ebb,	// (0x00046294) main_mobtv_loading_pane_g3_ParamLimits

0x8ebb,	// (0x00046294) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0004d025) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0004d025) main_mobtv_loading_pane_g

0xe335,	// (0x0004b70e) main_mobtv_loading_pane_t1_ParamLimits

0xe335,	// (0x0004b70e) main_mobtv_loading_pane_t1

0xe34d,	// (0x0004b726) main_mobtv_loading_pane_t2_ParamLimits

0xe34d,	// (0x0004b726) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0004d02c) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0004d02c) main_mobtv_loading_pane_t

0x8ec9,	// (0x000462a2) wait_bar_pane_cp06_ParamLimits

0x8ec9,	// (0x000462a2) wait_bar_pane_cp06

0xe371,	// (0x0004b74a) main_mobtv_programe_curr_pane_t1

0xe37f,	// (0x0004b758) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0004d031) main_mobtv_programe_curr_pane_t

0xe38d,	// (0x0004b766) main_mobtv_programe_next_pane_t1

0xe39b,	// (0x0004b774) main_mobtv_programe_next_pane_t2

0xe3a9,	// (0x0004b782) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0004d036) main_mobtv_programe_next_pane_t

0xa021,	// (0x000473fa) bg_popup_mobtv_noti_window_pane

0xe3b7,	// (0x0004b790) popup_mobtv_noti_window_g1

0xe3bf,	// (0x0004b798) popup_mobtv_noti_window_t1

0xe3cd,	// (0x0004b7a6) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0004d03d) popup_mobtv_noti_window_t

0xcc13,	// (0x00049fec) bg_popup_mobtv_noti_window_pane_g1

0xa021,	// (0x000473fa) sc_clock_pane

0xa021,	// (0x000473fa) main_fs_bigclock_pane

0x859c,	// (0x00045975) blid2_tripm_pane_t4_ParamLimits

0x859c,	// (0x00045975) blid2_tripm_pane_t4

0x8ed5,	// (0x000462ae) sc_clock_pane_g1_ParamLimits

0x8ed5,	// (0x000462ae) sc_clock_pane_g1

0x8ee3,	// (0x000462bc) sc_clock_pane_t1_ParamLimits

0x8ee3,	// (0x000462bc) sc_clock_pane_t1

0x8ef6,	// (0x000462cf) sc_clock_pane_t2_ParamLimits

0x8ef6,	// (0x000462cf) sc_clock_pane_t2

0x8f08,	// (0x000462e1) sc_clock_pane_t3_ParamLimits

0x8f08,	// (0x000462e1) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0004d042) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0004d042) sc_clock_pane_t

0x974c,	// (0x00046b25) main_fs_bigclock_indicator_pane_ParamLimits

0x974c,	// (0x00046b25) main_fs_bigclock_indicator_pane

0x8fa3,	// (0x0004637c) main_fs_bigclock_pane_g1_ParamLimits

0x8fa3,	// (0x0004637c) main_fs_bigclock_pane_g1

0x9758,	// (0x00046b31) main_fs_bigclock_pane_t1_ParamLimits

0x9758,	// (0x00046b31) main_fs_bigclock_pane_t1

0x976a,	// (0x00046b43) main_fs_bigclock_pane_t2_ParamLimits

0x976a,	// (0x00046b43) main_fs_bigclock_pane_t2

0x977c,	// (0x00046b55) main_fs_bigclock_pane_t3_ParamLimits

0x977c,	// (0x00046b55) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0004d24c) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004d24c) main_fs_bigclock_pane_t

0xec73,	// (0x0004c04c) main_fs_bigclock_indicator_pane_g1

0xe0a1,	// (0x0004b47a) ncim_query_content_pane_g2_ParamLimits

0xe0a1,	// (0x0004b47a) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0004cfcf) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0004cfcf) ncim_query_content_pane_g

0x8f1c,	// (0x000462f5) sc_clock_pane_t4_ParamLimits

0x8f1c,	// (0x000462f5) sc_clock_pane_t4

0xad62,	// (0x0004813b) main_radioblah_pane

0xd5c1,	// (0x0004a99a) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5c1,	// (0x0004a99a) cell_call4_button_pane_t1_copy1

0x8ba3,	// (0x00045f7c) main_ncimui_pane_t1_ParamLimits

0x8ba3,	// (0x00045f7c) main_ncimui_pane_t1

0x8bbd,	// (0x00045f96) main_ncimui_pane_t2_ParamLimits

0x8bbd,	// (0x00045f96) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0004cfc8) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0004cfc8) main_ncimui_pane_t

0xe508,	// (0x0004b8e1) main_radioblah_anim_pane_ParamLimits

0xe508,	// (0x0004b8e1) main_radioblah_anim_pane

0xe519,	// (0x0004b8f2) main_radioblah_info_pane_ParamLimits

0xe519,	// (0x0004b8f2) main_radioblah_info_pane

0xe52d,	// (0x0004b906) main_radioblah_pane_t1_ParamLimits

0xe52d,	// (0x0004b906) main_radioblah_pane_t1

0xe549,	// (0x0004b922) main_radioblah_pane_t2_ParamLimits

0xe549,	// (0x0004b922) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0004d063) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0004d063) main_radioblah_pane_t

0x8ff5,	// (0x000463ce) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8ff5,	// (0x000463ce) main_radioblah_rocker_ctrl_pane

0xe591,	// (0x0004b96a) main_radioblah_info_pane_t1_ParamLimits

0xe591,	// (0x0004b96a) main_radioblah_info_pane_t1

0x903a,	// (0x00046413) main_radioblah_info_pane_t2_ParamLimits

0x903a,	// (0x00046413) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0004d06c) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0004d06c) main_radioblah_info_pane_t

0xcc13,	// (0x00049fec) main_radioblah_rocker_ctrl_pane_g1

0x90ea,	// (0x000464c3) main_radioblah_rocker_ctrl_pane_g2

0x90f2,	// (0x000464cb) main_radioblah_rocker_ctrl_pane_g3

0x90fa,	// (0x000464d3) main_radioblah_rocker_ctrl_pane_g4

0x9102,	// (0x000464db) main_radioblah_rocker_ctrl_pane_g5

0x910a,	// (0x000464e3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0004d075) main_radioblah_rocker_ctrl_pane_g

0x8b43,	// (0x00045f1c) main_cset_text2_pane_t1_copy1_ParamLimits

0x737e,	// (0x00044757) cam4_image_uncrop_qvga_pane

0x74c5,	// (0x0004489e) vid4_image_uncrop_qcif_pane

0x872a,	// (0x00045b03) cam6_image_uncrop_qvga_pane_ParamLimits

0x872a,	// (0x00045b03) cam6_image_uncrop_qvga_pane

0xdd76,	// (0x0004b14f) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd76,	// (0x0004b14f) vid6_image_uncrop_qcif_pane

0xa021,	// (0x000473fa) bg_popup_preview_window_pane_cp03

0xe053,	// (0x0004b42c) list_cset_text2_pane

0xe05b,	// (0x0004b434) main_cset6_text2_pane_g1

0xe063,	// (0x0004b43c) main_cset6_text2_pane_t1

0x9112,	// (0x000464eb) list_cset_text2_pane_t1_ParamLimits

0x9112,	// (0x000464eb) list_cset_text2_pane_t1

0xad62,	// (0x0004813b) main_radioblah_pane_ParamLimits

0x8e7b,	// (0x00046254) main_mobtv_info_pane_t3_ParamLimits

0x8e7b,	// (0x00046254) main_mobtv_info_pane_t3

0x8fe3,	// (0x000463bc) main_radioblah_pane_g1

0x900e,	// (0x000463e7) main_radioblah_info_pane_g1

0x908f,	// (0x00046468) main_radioblah_info_pane_t3_ParamLimits

0x908f,	// (0x00046468) main_radioblah_info_pane_t3

0x433d,	// (0x00041716) highlight_cell_cale_month_pane_ParamLimits

0x433d,	// (0x00041716) highlight_cell_cale_month_pane

0xa021,	// (0x000473fa) main_phob_fisheye_pane

0xcf4f,	// (0x0004a328) scroll_pane_cp0031_ParamLimits

0xcf4f,	// (0x0004a328) scroll_pane_cp0031

0xde84,	// (0x0004b25d) wait_bar_pane_cp08_ParamLimits

0x8904,	// (0x00045cdd) cset_list_set_pane_copy1_ParamLimits

0xe5cb,	// (0x0004b9a4) highlight_cell_cale_month_pane_g1

0x9139,	// (0x00046512) highlight_cell_cale_month_pane_t1

0xdb27,	// (0x0004af00) list_gen_pane_cp01

0xd78a,	// (0x0004ab63) scroll_pane_01

0xa6b5,	// (0x00047a8e) list_single_double_fisheye_pane

0x1573,	// (0x0003e94c) list_double_fisheye_pane_g1_ParamLimits

0x1573,	// (0x0003e94c) list_double_fisheye_pane_g1

0x157f,	// (0x0003e958) list_double_fisheye_pane_g2_ParamLimits

0x157f,	// (0x0003e958) list_double_fisheye_pane_g2

0xa6be,	// (0x00047a97) list_double_fisheye_pane_g3_ParamLimits

0xa6be,	// (0x00047a97) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0004d082) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0004d082) list_double_fisheye_pane_g

0x15b0,	// (0x0003e989) list_double_fisheye_pane_t1_ParamLimits

0x15b0,	// (0x0003e989) list_double_fisheye_pane_t1

0x15cb,	// (0x0003e9a4) list_double_fisheye_pane_t2_ParamLimits

0x15cb,	// (0x0003e9a4) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0004d08d) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0004d08d) list_double_fisheye_pane_t

0xa021,	// (0x000473fa) main_call5_pane

0x8f42,	// (0x0004631b) sc_swipe_pane_ParamLimits

0x8f42,	// (0x0004631b) sc_swipe_pane

0x9153,	// (0x0004652c) call5_image_pane_ParamLimits

0x9153,	// (0x0004652c) call5_image_pane

0x9163,	// (0x0004653c) call5_swipe_1_pane_ParamLimits

0x9163,	// (0x0004653c) call5_swipe_1_pane

0x916f,	// (0x00046548) call5_swipe_2_pane_ParamLimits

0x916f,	// (0x00046548) call5_swipe_2_pane

0x9189,	// (0x00046562) popup_call5_audio_first_window_ParamLimits

0x9189,	// (0x00046562) popup_call5_audio_first_window

0xce73,	// (0x0004a24c) call5_swipe_1_pane_g1_ParamLimits

0xce73,	// (0x0004a24c) call5_swipe_1_pane_g1

0xe5d3,	// (0x0004b9ac) call5_swipe_1_pane_g2_ParamLimits

0xe5d3,	// (0x0004b9ac) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0004d092) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0004d092) call5_swipe_1_pane_g

0xe5df,	// (0x0004b9b8) call5_swipe_1_pane_t1_ParamLimits

0xe5df,	// (0x0004b9b8) call5_swipe_1_pane_t1

0xce73,	// (0x0004a24c) call5_swipe_2_pane_g1_ParamLimits

0xce73,	// (0x0004a24c) call5_swipe_2_pane_g1

0xe5f4,	// (0x0004b9cd) call5_swipe_2_pane_g2_ParamLimits

0xe5f4,	// (0x0004b9cd) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0004d097) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0004d097) call5_swipe_2_pane_g

0xe600,	// (0x0004b9d9) call5_swipe_2_pane_t1_ParamLimits

0xe600,	// (0x0004b9d9) call5_swipe_2_pane_t1

0xe615,	// (0x0004b9ee) sc_swipe_pane_g1_ParamLimits

0xe615,	// (0x0004b9ee) sc_swipe_pane_g1

0xe622,	// (0x0004b9fb) sc_swipe_pane_g2_ParamLimits

0xe622,	// (0x0004b9fb) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0004d09c) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0004d09c) sc_swipe_pane_g

0xe62e,	// (0x0004ba07) sc_swipe_pane_t1_ParamLimits

0xe62e,	// (0x0004ba07) sc_swipe_pane_t1

0xa021,	// (0x000473fa) main_cmail_launcher_pane

0x9197,	// (0x00046570) aid_size_cell_cmail_l_ParamLimits

0x9197,	// (0x00046570) aid_size_cell_cmail_l

0x91a7,	// (0x00046580) grid_cmail_l_pane_ParamLimits

0x91a7,	// (0x00046580) grid_cmail_l_pane

0x91b7,	// (0x00046590) cell_cmail_l_pane_ParamLimits

0x91b7,	// (0x00046590) cell_cmail_l_pane

0x91cb,	// (0x000465a4) cell_cmail_l_pane_g1_ParamLimits

0x91cb,	// (0x000465a4) cell_cmail_l_pane_g1

0x91dc,	// (0x000465b5) cell_cmail_l_pane_t1_ParamLimits

0x91dc,	// (0x000465b5) cell_cmail_l_pane_t1

0xe643,	// (0x0004ba1c) cell_cmail_l_pane_t2_ParamLimits

0xe643,	// (0x0004ba1c) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0004d0a1) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0004d0a1) cell_cmail_l_pane_t

0xad62,	// (0x0004813b) grid_highlight_pane_cp018_ParamLimits

0xad62,	// (0x0004813b) grid_highlight_pane_cp018

0x225a,	// (0x0003f633) main2_pane_ParamLimits

0x225a,	// (0x0003f633) main2_pane

0xa853,	// (0x00047c2c) popup_sp_fs_action_menu_bg_pane_g1

0xa85b,	// (0x00047c34) popup_sp_fs_action_menu_bg_pane_g2

0xa863,	// (0x00047c3c) popup_sp_fs_action_menu_bg_pane_g3

0xa86b,	// (0x00047c44) popup_sp_fs_action_menu_bg_pane_g4

0xa873,	// (0x00047c4c) popup_sp_fs_action_menu_bg_pane_g5

0xa87b,	// (0x00047c54) popup_sp_fs_action_menu_bg_pane_g6

0xa883,	// (0x00047c5c) popup_sp_fs_action_menu_bg_pane_g7

0xa88b,	// (0x00047c64) popup_sp_fs_action_menu_bg_pane_g8

0xa893,	// (0x00047c6c) popup_sp_fs_action_menu_bg_pane_g9

0xa89b,	// (0x00047c74) popup_sp_fs_action_menu_bg_pane_g10

0xa89b,	// (0x00047c74) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0004c566) popup_sp_fs_action_menu_bg_pane_g

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_t3_g3_g1

0x0d29,	// (0x0003e102) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0d29,	// (0x0003e102) list_medium_line_x2_t3_g3_g2

0x0d35,	// (0x0003e10e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0d35,	// (0x0003e10e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0004c616) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0004c616) list_medium_line_x2_t3_g3_g

0x0d41,	// (0x0003e11a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0d41,	// (0x0003e11a) list_medium_line_x2_t3_g3_t1

0x0d56,	// (0x0003e12f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d56,	// (0x0003e12f) list_medium_line_x2_t3_g3_t2

0x0d6a,	// (0x0003e143) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0d6a,	// (0x0003e143) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0004c61d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0004c61d) list_medium_line_x2_t3_g3_t

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_t3_g2_g1

0x0d35,	// (0x0003e10e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0d35,	// (0x0003e10e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0004c624) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0004c624) list_medium_line_x2_t3_g2_g

0x0d7f,	// (0x0003e158) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0d7f,	// (0x0003e158) list_medium_line_x2_t3_g2_t1

0x0d95,	// (0x0003e16e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0d95,	// (0x0003e16e) list_medium_line_x2_t3_g2_t2

0x0da7,	// (0x0003e180) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0da7,	// (0x0003e180) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0004c629) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0004c629) list_medium_line_x2_t3_g2_t

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_t4_g4_g1

0x0dc5,	// (0x0003e19e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0dc5,	// (0x0003e19e) list_medium_line_x2_t4_g4_g2

0x0d29,	// (0x0003e102) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0d29,	// (0x0003e102) list_medium_line_x2_t4_g4_g3

0x0dd1,	// (0x0003e1aa) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0dd1,	// (0x0003e1aa) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0004c630) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0004c630) list_medium_line_x2_t4_g4_g

0x0ddd,	// (0x0003e1b6) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0ddd,	// (0x0003e1b6) list_medium_line_x2_t4_g4_t1

0x0df4,	// (0x0003e1cd) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0df4,	// (0x0003e1cd) list_medium_line_x2_t4_g4_t2

0x0e09,	// (0x0003e1e2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0e09,	// (0x0003e1e2) list_medium_line_x2_t4_g4_t3

0x0e1b,	// (0x0003e1f4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0e1b,	// (0x0003e1f4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0004c639) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0004c639) list_medium_line_x2_t4_g4_t

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_t2_g4_g1

0x0dc5,	// (0x0003e19e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0dc5,	// (0x0003e19e) list_medium_line_x2_t2_g4_g2

0x0d29,	// (0x0003e102) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0d29,	// (0x0003e102) list_medium_line_x2_t2_g4_g3

0x0d35,	// (0x0003e10e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0d35,	// (0x0003e10e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0004c6a0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0004c6a0) list_medium_line_x2_t2_g4_g

0x0e2d,	// (0x0003e206) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0e2d,	// (0x0003e206) list_medium_line_x2_t2_g4_t1

0x0d6a,	// (0x0003e143) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0d6a,	// (0x0003e143) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0004c6a9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0004c6a9) list_medium_line_x2_t2_g4_t

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_t2_g3_g1

0x0d29,	// (0x0003e102) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0d29,	// (0x0003e102) list_medium_line_x2_t2_g3_g2

0x0d35,	// (0x0003e10e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0d35,	// (0x0003e10e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0004c616) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0004c616) list_medium_line_x2_t2_g3_g

0x0e42,	// (0x0003e21b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0e42,	// (0x0003e21b) list_medium_line_x2_t2_g3_t1

0x0d6a,	// (0x0003e143) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0d6a,	// (0x0003e143) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0004c6ae) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0004c6ae) list_medium_line_x2_t2_g3_t

0x4515,	// (0x000418ee) main_sp_fs_list_pane_ParamLimits

0x4515,	// (0x000418ee) main_sp_fs_list_pane

0x4521,	// (0x000418fa) sp_fs_scroll_pane_ParamLimits

0x4521,	// (0x000418fa) sp_fs_scroll_pane

0x0e70,	// (0x0003e249) list_medium_line_x2_t3_t1

0x0e80,	// (0x0003e259) list_medium_line_x2_t3_t2

0x0e8e,	// (0x0003e267) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0004c6f9) list_medium_line_x2_t3_t

0x0e9c,	// (0x0003e275) list_medium_line_x3_t4_t1

0x0eac,	// (0x0003e285) list_medium_line_x3_t4_t2

0x0eba,	// (0x0003e293) list_medium_line_x3_t4_t3

0x0e8e,	// (0x0003e267) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0004c700) list_medium_line_x3_t4_t

0x0ec8,	// (0x0003e2a1) list_medium_line_x4_t5_t1

0x0ed8,	// (0x0003e2b1) list_medium_line_x4_t5_t2

0x0eba,	// (0x0003e293) list_medium_line_x4_t5_t3

0x0ee6,	// (0x0003e2bf) list_medium_line_x4_t5_t4

0x0e8e,	// (0x0003e267) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0004c709) list_medium_line_x4_t5_t

0x0d1d,	// (0x0003e0f6) list_medium_line_t4_g4_g1_ParamLimits

0x0d1d,	// (0x0003e0f6) list_medium_line_t4_g4_g1

0x0dd1,	// (0x0003e1aa) list_medium_line_t4_g4_g2_ParamLimits

0x0dd1,	// (0x0003e1aa) list_medium_line_t4_g4_g2

0x0ef4,	// (0x0003e2cd) list_medium_line_t4_g4_g3_ParamLimits

0x0ef4,	// (0x0003e2cd) list_medium_line_t4_g4_g3

0x0d35,	// (0x0003e10e) list_medium_line_t4_g4_g4_ParamLimits

0x0d35,	// (0x0003e10e) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0004c714) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0004c714) list_medium_line_t4_g4_g

0x0f00,	// (0x0003e2d9) list_medium_line_t4_g4_t1_ParamLimits

0x0f00,	// (0x0003e2d9) list_medium_line_t4_g4_t1

0x0f15,	// (0x0003e2ee) list_medium_line_t4_g4_t2_ParamLimits

0x0f15,	// (0x0003e2ee) list_medium_line_t4_g4_t2

0x0f2b,	// (0x0003e304) list_medium_line_t4_g4_t3_ParamLimits

0x0f2b,	// (0x0003e304) list_medium_line_t4_g4_t3

0x0d6a,	// (0x0003e143) list_medium_line_t4_g4_t4_ParamLimits

0x0d6a,	// (0x0003e143) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0004c71d) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0004c71d) list_medium_line_t4_g4_t

0x4618,	// (0x000419f1) chi_dic_find_pane_g1

0x5496,	// (0x0004286f) main_tport_pane

0x11ec,	// (0x0003e5c5) list_medium_line_plain_t1

0x11fa,	// (0x0003e5d3) list_medium_line_t2_g2_g1_ParamLimits

0x11fa,	// (0x0003e5d3) list_medium_line_t2_g2_g1

0x1206,	// (0x0003e5df) list_medium_line_t2_g2_g2_ParamLimits

0x1206,	// (0x0003e5df) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0004cdd9) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0004cdd9) list_medium_line_t2_g2_g

0x1212,	// (0x0003e5eb) list_medium_line_t2_g2_t1_ParamLimits

0x1212,	// (0x0003e5eb) list_medium_line_t2_g2_t1

0x122c,	// (0x0003e605) list_medium_line_t2_g2_t2_ParamLimits

0x122c,	// (0x0003e605) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0004cdde) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0004cdde) list_medium_line_t2_g2_t

0x144b,	// (0x0003e824) aid_sp_fs_list_icon_a_sm

0x1453,	// (0x0003e82c) aid_sp_fs_list_icon_d

0x145b,	// (0x0003e834) aid_sp_fs_text_primary

0x1464,	// (0x0003e83d) aid_sp_fs_text_secondary

0xec0e,	// (0x0004bfe7) list_medium_line

0xec0e,	// (0x0004bfe7) list_medium_line_g2

0xec0e,	// (0x0004bfe7) list_medium_line_g3

0xec0e,	// (0x0004bfe7) list_medium_line_plain

0xec0e,	// (0x0004bfe7) list_medium_line_plain_t2

0xec0e,	// (0x0004bfe7) list_medium_line_plain_t3

0xec0e,	// (0x0004bfe7) list_medium_line_right_icon

0xec0e,	// (0x0004bfe7) list_medium_line_right_iconx2

0xec0e,	// (0x0004bfe7) list_medium_line_t2

0xec0e,	// (0x0004bfe7) list_medium_line_t2_g2

0xec0e,	// (0x0004bfe7) list_medium_line_t2_g3

0xec0e,	// (0x0004bfe7) list_medium_line_t2_right_icon

0xec0e,	// (0x0004bfe7) list_medium_line_t2_right_iconx2

0xec0e,	// (0x0004bfe7) list_medium_line_t3

0xec0e,	// (0x0004bfe7) list_medium_line_t3_g2

0xec0e,	// (0x0004bfe7) list_medium_line_t3_g3

0xec0e,	// (0x0004bfe7) list_medium_line_t3_right_iconx2

0x146d,	// (0x0003e846) list_medium_line_t4_g4

0x1476,	// (0x0003e84f) list_medium_line_x2

0x1476,	// (0x0003e84f) list_medium_line_x2_t2_g2

0x1476,	// (0x0003e84f) list_medium_line_x2_t2_g3

0x1476,	// (0x0003e84f) list_medium_line_x2_t2_g4

0x1476,	// (0x0003e84f) list_medium_line_x2_t3

0x1476,	// (0x0003e84f) list_medium_line_x2_t3_g2

0x1476,	// (0x0003e84f) list_medium_line_x2_t3_g3

0x1476,	// (0x0003e84f) list_medium_line_x2_t3_g4

0x1476,	// (0x0003e84f) list_medium_line_x2_t4_g2

0x1476,	// (0x0003e84f) list_medium_line_x2_t4_g4

0x147f,	// (0x0003e858) list_medium_line_x3

0x147f,	// (0x0003e858) list_medium_line_x3_t4

0x147f,	// (0x0003e858) list_medium_line_x3_t4_g4

0x146d,	// (0x0003e846) list_medium_line_x4_t4

0x146d,	// (0x0003e846) list_medium_line_x4_t4_g7

0x146d,	// (0x0003e846) list_medium_line_x4_t5

0x1488,	// (0x0003e861) list_single_fs_dyc_pane_ParamLimits

0x1488,	// (0x0003e861) list_single_fs_dyc_pane

0x0d1d,	// (0x0003e0f6) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0d1d,	// (0x0003e0f6) list_medium_line_x4_t4_g7_g1

0x14a4,	// (0x0003e87d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x14a4,	// (0x0003e87d) list_medium_line_x4_t4_g7_g2

0x14b0,	// (0x0003e889) list_medium_line_x4_t4_g7_g3_ParamLimits

0x14b0,	// (0x0003e889) list_medium_line_x4_t4_g7_g3

0x14bf,	// (0x0003e898) list_medium_line_x4_t4_g7_g4_ParamLimits

0x14bf,	// (0x0003e898) list_medium_line_x4_t4_g7_g4

0x14cb,	// (0x0003e8a4) list_medium_line_x4_t4_g7_g5_ParamLimits

0x14cb,	// (0x0003e8a4) list_medium_line_x4_t4_g7_g5

0x14da,	// (0x0003e8b3) list_medium_line_x4_t4_g7_g6_ParamLimits

0x14da,	// (0x0003e8b3) list_medium_line_x4_t4_g7_g6

0x14e9,	// (0x0003e8c2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x14e9,	// (0x0003e8c2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0004cfa9) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0004cfa9) list_medium_line_x4_t4_g7_g

0x14f5,	// (0x0003e8ce) list_medium_line_x4_t4_g7_t1_ParamLimits

0x14f5,	// (0x0003e8ce) list_medium_line_x4_t4_g7_t1

0x150a,	// (0x0003e8e3) list_medium_line_x4_t4_g7_t2_ParamLimits

0x150a,	// (0x0003e8e3) list_medium_line_x4_t4_g7_t2

0x151f,	// (0x0003e8f8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x151f,	// (0x0003e8f8) list_medium_line_x4_t4_g7_t3

0x1534,	// (0x0003e90d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1534,	// (0x0003e90d) list_medium_line_x4_t4_g7_t4

0x1546,	// (0x0003e91f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1546,	// (0x0003e91f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0004cfb8) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0004cfb8) list_medium_line_x4_t4_g7_t

0x1558,	// (0x0003e931) list_single_dyc_row_pane_ParamLimits

0x1558,	// (0x0003e931) list_single_dyc_row_pane

0x9147,	// (0x00046520) call5_gesture_pane_ParamLimits

0x9147,	// (0x00046520) call5_gesture_pane

0x917b,	// (0x00046554) call5_windows_pane_ParamLimits

0x917b,	// (0x00046554) call5_windows_pane

0x91f2,	// (0x000465cb) call5_swipe_1_pane_cp_ParamLimits

0x91f2,	// (0x000465cb) call5_swipe_1_pane_cp

0x91fe,	// (0x000465d7) call5_swipe_2_pane_cp_ParamLimits

0x91fe,	// (0x000465d7) call5_swipe_2_pane_cp

0xb3ed,	// (0x000487c6) call5_image_pane_cp

0x920a,	// (0x000465e3) popup_call5_audio_first_window_cp_ParamLimits

0x920a,	// (0x000465e3) popup_call5_audio_first_window_cp

0xe615,	// (0x0004b9ee) call5_swipe_1_pane_g1_cp_ParamLimits

0xe615,	// (0x0004b9ee) call5_swipe_1_pane_g1_cp

0xe655,	// (0x0004ba2e) call5_swipe_1_pane_g2_cp

0xe62e,	// (0x0004ba07) call5_swipe_1_pane_t1_cp_ParamLimits

0xe62e,	// (0x0004ba07) call5_swipe_1_pane_t1_cp

0xe615,	// (0x0004b9ee) call5_swipe_2_pane_g1_cp_ParamLimits

0xe615,	// (0x0004b9ee) call5_swipe_2_pane_g1_cp

0xe65d,	// (0x0004ba36) call5_swipe_2_pane_g2_cp

0xe665,	// (0x0004ba3e) call5_swipe_2_pane_t1_cp_ParamLimits

0xe665,	// (0x0004ba3e) call5_swipe_2_pane_t1_cp

0xad62,	// (0x0004813b) main_sp_fs_email_pane

0xe67a,	// (0x0004ba53) main_sp_fs_listscroll_pane_te

0x15ed,	// (0x0003e9c6) popup_sp_fs_action_menu_pane_ParamLimits

0x15ed,	// (0x0003e9c6) popup_sp_fs_action_menu_pane

0xcc13,	// (0x00049fec) bg_sp_fs_ctrlbar_pane_g1

0xe683,	// (0x0004ba5c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe68c,	// (0x0004ba65) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe695,	// (0x0004ba6e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc13,	// (0x00049fec) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0004d0a6) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9f6,	// (0x00049dcf) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9f6,	// (0x00049dcf) bg_sp_fs_ctrlbar_ddmenu_pane

0xe69e,	// (0x0004ba77) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe69e,	// (0x0004ba77) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6aa,	// (0x0004ba83) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6aa,	// (0x0004ba83) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0004d0af) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0004d0af) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6b6,	// (0x0004ba8f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6b6,	// (0x0004ba8f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x162f,	// (0x0003ea08) list_medium_line_t2_right_icon_g1

0x1637,	// (0x0003ea10) list_medium_line_t2_right_icon_t1

0x1647,	// (0x0003ea20) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0004d0b4) list_medium_line_t2_right_icon_t

0xc809,	// (0x00049be2) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc809,	// (0x00049be2) bg_sp_fs_ctrlbar_pane

0x926f,	// (0x00046648) main_sp_fs_ctrlbar_button_pane_cp01

0x9277,	// (0x00046650) main_sp_fs_ctrlbar_ddmenu_pane

0xe708,	// (0x0004bae1) main_sp_fs_ctrlbar_pane_g1

0xe714,	// (0x0004baed) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0004d0b9) main_sp_fs_ctrlbar_pane_g

0xe720,	// (0x0004baf9) main_sp_fs_ctrlbar_pane_t1

0x9281,	// (0x0004665a) main_sp_fs_ctrlbar_pane

0x9297,	// (0x00046670) main_sp_fs_listscroll_pane_te_cp01

0x1655,	// (0x0003ea2e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1655,	// (0x0003ea2e) popup_sp_fs_action_menu_pane_cp01

0xad62,	// (0x0004813b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xad62,	// (0x0004813b) bg_sp_fs_highlight_list_pane_cp01

0x167f,	// (0x0003ea58) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x167f,	// (0x0003ea58) sp_fs_action_menu_list_gene_pane_g1

0xe750,	// (0x0004bb29) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe750,	// (0x0004bb29) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0004d0c3) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0004d0c3) sp_fs_action_menu_list_gene_pane_g

0x168e,	// (0x0003ea67) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x168e,	// (0x0003ea67) sp_fs_action_menu_list_gene_pane_t1

0x16a6,	// (0x0003ea7f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x16a6,	// (0x0003ea7f) sp_fs_action_menu_list_gene_pane

0xe75d,	// (0x0004bb36) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe75d,	// (0x0004bb36) popup_sp_fs_action_menu_bg_pane

0x16c3,	// (0x0003ea9c) sp_fs_action_menu_list_pane_ParamLimits

0x16c3,	// (0x0003ea9c) sp_fs_action_menu_list_pane

0x16e1,	// (0x0003eaba) sp_fs_scroll_pane_cp01_ParamLimits

0x16e1,	// (0x0003eaba) sp_fs_scroll_pane_cp01

0x1707,	// (0x0003eae0) list_medium_line_plain_t2_t1

0x1717,	// (0x0003eaf0) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0004d0c8) list_medium_line_plain_t2_t

0x1725,	// (0x0003eafe) list_medium_line_plain_t3_t1

0x1735,	// (0x0003eb0e) list_medium_line_plain_t3_t2

0x1743,	// (0x0003eb1c) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0004d0cd) list_medium_line_plain_t3_t

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_t2_g2_g1

0x0d35,	// (0x0003e10e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0d35,	// (0x0003e10e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0004c624) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0004c624) list_medium_line_x2_t2_g2_g

0x0f00,	// (0x0003e2d9) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0f00,	// (0x0003e2d9) list_medium_line_x2_t2_g2_t1

0x0d6a,	// (0x0003e143) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0d6a,	// (0x0003e143) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0004d0d4) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0004d0d4) list_medium_line_x2_t2_g2_t

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_t4_g2_g1

0x1751,	// (0x0003eb2a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1751,	// (0x0003eb2a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0004d0d9) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0004d0d9) list_medium_line_x2_t4_g2_g

0x1763,	// (0x0003eb3c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1763,	// (0x0003eb3c) list_medium_line_x2_t4_g2_t1

0x177d,	// (0x0003eb56) list_medium_line_x2_t4_g2_t2_ParamLimits

0x177d,	// (0x0003eb56) list_medium_line_x2_t4_g2_t2

0x1792,	// (0x0003eb6b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1792,	// (0x0003eb6b) list_medium_line_x2_t4_g2_t3

0x0d6a,	// (0x0003e143) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0d6a,	// (0x0003e143) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0004d0de) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0004d0de) list_medium_line_x2_t4_g2_t

0x17a7,	// (0x0003eb80) list_medium_line_t3_right_iconx2_g1

0x162f,	// (0x0003ea08) list_medium_line_t3_right_iconx2_g2

0x17af,	// (0x0003eb88) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0004d0e7) list_medium_line_t3_right_iconx2_g

0x17b7,	// (0x0003eb90) list_medium_line_t3_right_iconx2_t1

0x17c7,	// (0x0003eba0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0004d0ee) list_medium_line_t3_right_iconx2_t

0x0d1d,	// (0x0003e0f6) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0d1d,	// (0x0003e0f6) list_medium_line_x3_t4_g4_g1

0x0d29,	// (0x0003e102) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0d29,	// (0x0003e102) list_medium_line_x3_t4_g4_g2

0x0dd1,	// (0x0003e1aa) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0dd1,	// (0x0003e1aa) list_medium_line_x3_t4_g4_g3

0x17d5,	// (0x0003ebae) list_medium_line_x3_t4_g4_g4_ParamLimits

0x17d5,	// (0x0003ebae) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0004d0f3) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0004d0f3) list_medium_line_x3_t4_g4_g

0x17e1,	// (0x0003ebba) list_medium_line_x3_t4_g4_t1_ParamLimits

0x17e1,	// (0x0003ebba) list_medium_line_x3_t4_g4_t1

0x17f8,	// (0x0003ebd1) list_medium_line_x3_t4_g4_t2_ParamLimits

0x17f8,	// (0x0003ebd1) list_medium_line_x3_t4_g4_t2

0x180d,	// (0x0003ebe6) list_medium_line_x3_t4_g4_t3_ParamLimits

0x180d,	// (0x0003ebe6) list_medium_line_x3_t4_g4_t3

0x1822,	// (0x0003ebfb) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1822,	// (0x0003ebfb) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0004d0fc) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0004d0fc) list_medium_line_x3_t4_g4_t

0x183f,	// (0x0003ec18) list_single_dyc_row_text_pane_t1_ParamLimits

0x183f,	// (0x0003ec18) list_single_dyc_row_text_pane_t1

0x1876,	// (0x0003ec4f) list_single_dyc_row_text_pane_t2_ParamLimits

0x1876,	// (0x0003ec4f) list_single_dyc_row_text_pane_t2

0x18ec,	// (0x0003ecc5) list_single_dyc_row_text_pane_t3_ParamLimits

0x18ec,	// (0x0003ecc5) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0004d105) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0004d105) list_single_dyc_row_text_pane_t

0x19bd,	// (0x0003ed96) list_single_dyc_row_pane_g1_ParamLimits

0x19bd,	// (0x0003ed96) list_single_dyc_row_pane_g1

0x19c9,	// (0x0003eda2) list_single_dyc_row_pane_g2_ParamLimits

0x19c9,	// (0x0003eda2) list_single_dyc_row_pane_g2

0x19d5,	// (0x0003edae) list_single_dyc_row_pane_g3_ParamLimits

0x19d5,	// (0x0003edae) list_single_dyc_row_pane_g3

0x19e1,	// (0x0003edba) list_single_dyc_row_pane_g4_ParamLimits

0x19e1,	// (0x0003edba) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0004d112) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0004d112) list_single_dyc_row_pane_g

0x19ed,	// (0x0003edc6) list_single_dyc_row_text_pane_ParamLimits

0x19ed,	// (0x0003edc6) list_single_dyc_row_text_pane

0xa021,	// (0x000473fa) bg_sp_fs_scroll_pane

0xe76b,	// (0x0004bb44) thumb_sp_fs_scroll_pane

0x11fa,	// (0x0003e5d3) list_medium_line_g1_ParamLimits

0x11fa,	// (0x0003e5d3) list_medium_line_g1

0x1a0c,	// (0x0003ede5) list_medium_line_t1_ParamLimits

0x1a0c,	// (0x0003ede5) list_medium_line_t1

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_g1_ParamLimits

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_g1

0x0d29,	// (0x0003e102) list_medium_line_x2_g2_ParamLimits

0x0d29,	// (0x0003e102) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0004d11b) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0004d11b) list_medium_line_x2_g

0x1a21,	// (0x0003edfa) list_medium_line_x2_t1_ParamLimits

0x1a21,	// (0x0003edfa) list_medium_line_x2_t1

0x0d1d,	// (0x0003e0f6) list_medium_line_x3_g1_ParamLimits

0x0d1d,	// (0x0003e0f6) list_medium_line_x3_g1

0x0d29,	// (0x0003e102) list_medium_line_x3_g2_ParamLimits

0x0d29,	// (0x0003e102) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0004d11b) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0004d11b) list_medium_line_x3_g

0x1a21,	// (0x0003edfa) list_medium_line_x3_t1_ParamLimits

0x1a21,	// (0x0003edfa) list_medium_line_x3_t1

0xe774,	// (0x0004bb4d) thumb_sp_fs_scroll_pane_g1

0xe77d,	// (0x0004bb56) thumb_sp_fs_scroll_pane_g2

0xe786,	// (0x0004bb5f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004d120) thumb_sp_fs_scroll_pane_g

0xe774,	// (0x0004bb4d) bg_sp_fs_scroll_pane_g1

0xe77d,	// (0x0004bb56) bg_sp_fs_scroll_pane_g2

0xe786,	// (0x0004bb5f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004d120) bg_sp_fs_scroll_pane_g

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0d1d,	// (0x0003e0f6) list_medium_line_x2_t3_g4_g1

0x0dc5,	// (0x0003e19e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0dc5,	// (0x0003e19e) list_medium_line_x2_t3_g4_g2

0x0d29,	// (0x0003e102) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0d29,	// (0x0003e102) list_medium_line_x2_t3_g4_g3

0x0d35,	// (0x0003e10e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0d35,	// (0x0003e10e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0004c6a0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0004c6a0) list_medium_line_x2_t3_g4_g

0x1a37,	// (0x0003ee10) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1a37,	// (0x0003ee10) list_medium_line_x2_t3_g4_t1

0x1a4d,	// (0x0003ee26) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1a4d,	// (0x0003ee26) list_medium_line_x2_t3_g4_t2

0x0d6a,	// (0x0003e143) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0d6a,	// (0x0003e143) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0004d127) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0004d127) list_medium_line_x2_t3_g4_t

0x11fa,	// (0x0003e5d3) list_medium_line_g2_g1_ParamLimits

0x11fa,	// (0x0003e5d3) list_medium_line_g2_g1

0x1206,	// (0x0003e5df) list_medium_line_g2_g2_ParamLimits

0x1206,	// (0x0003e5df) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0004cdd9) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0004cdd9) list_medium_line_g2_g

0x1a66,	// (0x0003ee3f) list_medium_line_g2_t1_ParamLimits

0x1a66,	// (0x0003ee3f) list_medium_line_g2_t1

0x11fa,	// (0x0003e5d3) list_medium_line_t3_g2_g1_ParamLimits

0x11fa,	// (0x0003e5d3) list_medium_line_t3_g2_g1

0x1206,	// (0x0003e5df) list_medium_line_t3_g2_g2_ParamLimits

0x1206,	// (0x0003e5df) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0004cdd9) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0004cdd9) list_medium_line_t3_g2_g

0x1a7b,	// (0x0003ee54) list_medium_line_t3_g2_t1_ParamLimits

0x1a7b,	// (0x0003ee54) list_medium_line_t3_g2_t1

0x1a92,	// (0x0003ee6b) list_medium_line_t3_g2_t2_ParamLimits

0x1a92,	// (0x0003ee6b) list_medium_line_t3_g2_t2

0x1aa7,	// (0x0003ee80) list_medium_line_t3_g2_t3_ParamLimits

0x1aa7,	// (0x0003ee80) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0004d12e) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0004d12e) list_medium_line_t3_g2_t

0x162f,	// (0x0003ea08) list_medium_line_right_icon_g1

0x1abc,	// (0x0003ee95) list_medium_line_right_icon_t1

0x11fa,	// (0x0003e5d3) list_medium_line_t2_g1_ParamLimits

0x11fa,	// (0x0003e5d3) list_medium_line_t2_g1

0x1aca,	// (0x0003eea3) list_medium_line_t2_t1_ParamLimits

0x1aca,	// (0x0003eea3) list_medium_line_t2_t1

0x1ae4,	// (0x0003eebd) list_medium_line_t2_t2_ParamLimits

0x1ae4,	// (0x0003eebd) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0004d135) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0004d135) list_medium_line_t2_t

0x11fa,	// (0x0003e5d3) list_medium_line_t3_g1_ParamLimits

0x11fa,	// (0x0003e5d3) list_medium_line_t3_g1

0x1af9,	// (0x0003eed2) list_medium_line_t3_t1_ParamLimits

0x1af9,	// (0x0003eed2) list_medium_line_t3_t1

0x1b13,	// (0x0003eeec) list_medium_line_t3_t2_ParamLimits

0x1b13,	// (0x0003eeec) list_medium_line_t3_t2

0x1b28,	// (0x0003ef01) list_medium_line_t3_t3_ParamLimits

0x1b28,	// (0x0003ef01) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0004d13a) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0004d13a) list_medium_line_t3_t

0x11fa,	// (0x0003e5d3) list_medium_line_g3_g1_ParamLimits

0x11fa,	// (0x0003e5d3) list_medium_line_g3_g1

0x1b3d,	// (0x0003ef16) list_medium_line_g3_g2_ParamLimits

0x1b3d,	// (0x0003ef16) list_medium_line_g3_g2

0x1206,	// (0x0003e5df) list_medium_line_g3_g3_ParamLimits

0x1206,	// (0x0003e5df) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0004d141) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0004d141) list_medium_line_g3_g

0x1b49,	// (0x0003ef22) list_medium_line_g3_t1_ParamLimits

0x1b49,	// (0x0003ef22) list_medium_line_g3_t1

0x11fa,	// (0x0003e5d3) list_medium_line_t2_g3_g1_ParamLimits

0x11fa,	// (0x0003e5d3) list_medium_line_t2_g3_g1

0x1b3d,	// (0x0003ef16) list_medium_line_t2_g3_g2_ParamLimits

0x1b3d,	// (0x0003ef16) list_medium_line_t2_g3_g2

0x1206,	// (0x0003e5df) list_medium_line_t2_g3_g3_ParamLimits

0x1206,	// (0x0003e5df) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0004d141) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0004d141) list_medium_line_t2_g3_g

0x1b5e,	// (0x0003ef37) list_medium_line_t2_g3_t1_ParamLimits

0x1b5e,	// (0x0003ef37) list_medium_line_t2_g3_t1

0x1b78,	// (0x0003ef51) list_medium_line_t2_g3_t2_ParamLimits

0x1b78,	// (0x0003ef51) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0004d148) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0004d148) list_medium_line_t2_g3_t

0x11fa,	// (0x0003e5d3) list_medium_line_t3_g3_g1_ParamLimits

0x11fa,	// (0x0003e5d3) list_medium_line_t3_g3_g1

0x1b3d,	// (0x0003ef16) list_medium_line_t3_g3_g2_ParamLimits

0x1b3d,	// (0x0003ef16) list_medium_line_t3_g3_g2

0x1206,	// (0x0003e5df) list_medium_line_t3_g3_g3_ParamLimits

0x1206,	// (0x0003e5df) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0004d141) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0004d141) list_medium_line_t3_g3_g

0x1b8d,	// (0x0003ef66) list_medium_line_t3_g3_t1_ParamLimits

0x1b8d,	// (0x0003ef66) list_medium_line_t3_g3_t1

0x1ba1,	// (0x0003ef7a) list_medium_line_t3_g3_t2_ParamLimits

0x1ba1,	// (0x0003ef7a) list_medium_line_t3_g3_t2

0x1bb3,	// (0x0003ef8c) list_medium_line_t3_g3_t3_ParamLimits

0x1bb3,	// (0x0003ef8c) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0004d14d) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0004d14d) list_medium_line_t3_g3_t

0x17a7,	// (0x0003eb80) list_medium_line_right_iconx2_g1

0x162f,	// (0x0003ea08) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004d154) list_medium_line_right_iconx2_g

0x1bc5,	// (0x0003ef9e) list_medium_line_right_iconx2_t1

0x17a7,	// (0x0003eb80) list_medium_line_t2_right_iconx2_g1

0x162f,	// (0x0003ea08) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004d154) list_medium_line_t2_right_iconx2_g

0x1bd3,	// (0x0003efac) list_medium_line_t2_right_iconx2_t1

0x1be3,	// (0x0003efbc) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0004d159) list_medium_line_t2_right_iconx2_t

0x1bf1,	// (0x0003efca) list_medium_line_x4_t4_t1

0x1bff,	// (0x0003efd8) list_medium_line_x4_t4_t2

0x1c0f,	// (0x0003efe8) list_medium_line_x4_t4_t3

0x1c1f,	// (0x0003eff8) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0004d15e) list_medium_line_x4_t4_t

0x92d2,	// (0x000466ab) tport_appsw_pane_ParamLimits

0x92d2,	// (0x000466ab) tport_appsw_pane

0x92e0,	// (0x000466b9) tport_contact_pane_ParamLimits

0x92e0,	// (0x000466b9) tport_contact_pane

0x92f0,	// (0x000466c9) tport_listscroll_pane_ParamLimits

0x92f0,	// (0x000466c9) tport_listscroll_pane

0x9300,	// (0x000466d9) cell_tport_appsw_pane_ParamLimits

0x9300,	// (0x000466d9) cell_tport_appsw_pane

0xced8,	// (0x0004a2b1) tport_appsw_pane_g1_ParamLimits

0xced8,	// (0x0004a2b1) tport_appsw_pane_g1

0xe78f,	// (0x0004bb68) tport_contact_pane_g1

0xe127,	// (0x0004b500) tport_contact_pane_t1

0xe798,	// (0x0004bb71) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0004d167) tport_contact_pane_t

0xe7a6,	// (0x0004bb7f) list_tport_pane

0xe7af,	// (0x0004bb88) scroll_pane_cp_030

0x9333,	// (0x0004670c) cell_tport_appsw_pane_g1

0x9343,	// (0x0004671c) cell_tport_appsw_pane_t1

0x9351,	// (0x0004672a) grid_highlight_pane_cp019

0x9359,	// (0x00046732) list_tport_double_graphic_pane_ParamLimits

0x9359,	// (0x00046732) list_tport_double_graphic_pane

0xad62,	// (0x0004813b) list_highlight_pane_cp023_ParamLimits

0xad62,	// (0x0004813b) list_highlight_pane_cp023

0x936b,	// (0x00046744) list_tport_double_graphic_pane_g1_ParamLimits

0x936b,	// (0x00046744) list_tport_double_graphic_pane_g1

0x9378,	// (0x00046751) list_tport_double_graphic_pane_t1_ParamLimits

0x9378,	// (0x00046751) list_tport_double_graphic_pane_t1

0x938d,	// (0x00046766) list_tport_double_graphic_pane_t2_ParamLimits

0x938d,	// (0x00046766) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0004d173) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0004d173) list_tport_double_graphic_pane_t

0xa021,	// (0x000473fa) main_cale_note_pane

0x7718,	// (0x00044af1) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7718,	// (0x00044af1) cell_vitu2_function_top_wide_pane_cp01

0x8e8f,	// (0x00046268) wait_bar_pane_cp05_ParamLimits

0xad62,	// (0x0004813b) listscroll_cmail_pane

0xe7b8,	// (0x0004bb91) list_cmail_pane

0x939f,	// (0x00046778) list_cmail_body_pane

0x93c6,	// (0x0004679f) list_single_cmail_header_caption_pane

0x93fa,	// (0x000467d3) list_single_cmail_header_detail_pane_ParamLimits

0x93fa,	// (0x000467d3) list_single_cmail_header_detail_pane

0xe7c8,	// (0x0004bba1) list_single_cmail_header_caption_pane_t1

0x1c2f,	// (0x0003f008) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1c2f,	// (0x0003f008) list_single_cmail_header_detail_pane_g1

0x1c45,	// (0x0003f01e) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1c45,	// (0x0003f01e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0004d178) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0004d178) list_single_cmail_header_detail_pane_g

0x1c51,	// (0x0003f02a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1c51,	// (0x0003f02a) list_single_cmail_header_detail_pane_t1

0x1cb1,	// (0x0003f08a) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1cb1,	// (0x0003f08a) list_single_cmail_header_editor_pane_bg

0xe7e3,	// (0x0004bbbc) list_cmail_body_pane_g1

0xe7ec,	// (0x0004bbc5) list_cmail_body_pane_t1

0xd670,	// (0x0004aa49) list_single_cmail_header_editor_pane_bg_g1

0xabc8,	// (0x00047fa1) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd680,	// (0x0004aa59) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd678,	// (0x0004aa51) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd894,	// (0x0004ac6d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6a0,	// (0x0004aa79) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd690,	// (0x0004aa69) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd698,	// (0x0004aa71) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xaba8,	// (0x00047f81) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x943e,	// (0x00046817) calenote_gesture_pane_ParamLimits

0x943e,	// (0x00046817) calenote_gesture_pane

0x9458,	// (0x00046831) calenote_window_pane_ParamLimits

0x9458,	// (0x00046831) calenote_window_pane

0xe7fa,	// (0x0004bbd3) popup_note_window_cp01

0x9470,	// (0x00046849) calenote_swipe_1_pane_ParamLimits

0x9470,	// (0x00046849) calenote_swipe_1_pane

0x91fe,	// (0x000465d7) calenote_swipe_2_pane_ParamLimits

0x91fe,	// (0x000465d7) calenote_swipe_2_pane

0xe615,	// (0x0004b9ee) calenote_swipe_1_pane_g1_ParamLimits

0xe615,	// (0x0004b9ee) calenote_swipe_1_pane_g1

0xe622,	// (0x0004b9fb) calenote_swipe_1_pane_g2_ParamLimits

0xe622,	// (0x0004b9fb) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0004d09c) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0004d09c) calenote_swipe_1_pane_g

0xe80c,	// (0x0004bbe5) calenote_swipe_1_pane_t1_ParamLimits

0xe80c,	// (0x0004bbe5) calenote_swipe_1_pane_t1

0xe615,	// (0x0004b9ee) calenote_swipe_2_pane_g1_ParamLimits

0xe615,	// (0x0004b9ee) calenote_swipe_2_pane_g1

0xe82b,	// (0x0004bc04) calenote_swipe_2_pane_g2_ParamLimits

0xe82b,	// (0x0004bc04) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0004d184) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0004d184) calenote_swipe_2_pane_g

0xe837,	// (0x0004bc10) calenote_swipe_2_pane_t1_ParamLimits

0xe837,	// (0x0004bc10) calenote_swipe_2_pane_t1

0xa021,	// (0x000473fa) main_mup_navstr_pane

0x647c,	// (0x00043855) main_mup3_pane_t7_ParamLimits

0x647c,	// (0x00043855) main_mup3_pane_t7

0x6ea6,	// (0x0004427f) main_mp4_pane_g6_ParamLimits

0x6ea6,	// (0x0004427f) main_mp4_pane_g6

0x7218,	// (0x000445f1) main_image3_pane_t4_ParamLimits

0x7218,	// (0x000445f1) main_image3_pane_t4

0x9483,	// (0x0004685c) popup_navstr_preview_pane_ParamLimits

0x9483,	// (0x0004685c) popup_navstr_preview_pane

0x948f,	// (0x00046868) scroll_navstr_pane_ParamLimits

0x948f,	// (0x00046868) scroll_navstr_pane

0xa021,	// (0x000473fa) bg_popup_preview_window_pane_cp04

0xe85e,	// (0x0004bc37) popup_navstr_preview_pane_t1

0x949b,	// (0x00046874) scroll_navstr_pane_g1_ParamLimits

0x949b,	// (0x00046874) scroll_navstr_pane_g1

0x94a8,	// (0x00046881) scroll_navstr_pane_t1_ParamLimits

0x94a8,	// (0x00046881) scroll_navstr_pane_t1

0xe803,	// (0x0004bbdc) bg_button_pane_cp014

0xe803,	// (0x0004bbdc) bg_button_pane_cp030

0x1593,	// (0x0003e96c) list_double_fisheye_pane_g4_ParamLimits

0x1593,	// (0x0003e96c) list_double_fisheye_pane_g4

0x159f,	// (0x0003e978) list_double_fisheye_pane_g5_ParamLimits

0x159f,	// (0x0003e978) list_double_fisheye_pane_g5

0xd416,	// (0x0004a7ef) sp_fs_scroll_pane_cp03

0xe708,	// (0x0004bae1) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe714,	// (0x0004baed) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0004d0b9) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe720,	// (0x0004baf9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7c0,	// (0x0004bb99) sp_fs_scroll_pane_cp02

0xa8be,	// (0x00047c97) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa8be,	// (0x00047c97) popup_sp_fs_calendar_preview_list_single_pane

0xa021,	// (0x000473fa) main_cam6_pano_pane

0xad62,	// (0x0004813b) main_mup3_pane_ParamLimits

0xa021,	// (0x000473fa) main_phacti_pane

0x8d64,	// (0x0004613d) bg_button_pane_cp11

0x8d7c,	// (0x00046155) main_mobtv_info_pane_g2_ParamLimits

0x8d7c,	// (0x00046155) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0004d019) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0004d019) main_mobtv_info_pane_g

0x8f2e,	// (0x00046307) sc_clock_pane_t5_ParamLimits

0x8f2e,	// (0x00046307) sc_clock_pane_t5

0x8fe3,	// (0x000463bc) main_radioblah_pane_g1_ParamLimits

0xe561,	// (0x0004b93a) main_radioblah_pane_t3_ParamLimits

0xe561,	// (0x0004b93a) main_radioblah_pane_t3

0xe579,	// (0x0004b952) main_radioblah_pane_t4_ParamLimits

0xe579,	// (0x0004b952) main_radioblah_pane_t4

0x9001,	// (0x000463da) main_radioblah_text_pane_ParamLimits

0x9001,	// (0x000463da) main_radioblah_text_pane

0x900e,	// (0x000463e7) main_radioblah_info_pane_g1_ParamLimits

0x90a3,	// (0x0004647c) main_radioblah_info_pane_t4_ParamLimits

0x90a3,	// (0x0004647c) main_radioblah_info_pane_t4

0xad62,	// (0x0004813b) main_sp_fs_calendar_pane

0x94ba,	// (0x00046893) main_phacti_pane_g1

0x94c2,	// (0x0004689b) phacti_note_pane_ParamLimits

0x94c2,	// (0x0004689b) phacti_note_pane

0xe875,	// (0x0004bc4e) phacti_term_pane_ParamLimits

0xe875,	// (0x0004bc4e) phacti_term_pane

0xe88a,	// (0x0004bc63) phacti_note_pane_t1_ParamLimits

0xe88a,	// (0x0004bc63) phacti_note_pane_t1

0x1cc8,	// (0x0003f0a1) phacti_term_pane_g1

0x1cd0,	// (0x0003f0a9) phacti_term_pane_t1_ParamLimits

0x1cd0,	// (0x0003f0a9) phacti_term_pane_t1

0xe8a1,	// (0x0004bc7a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8a9,	// (0x0004bc82) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0004d18e) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8b1,	// (0x0004bc8a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8b1,	// (0x0004bc8a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8c7,	// (0x0004bca0) aid_popup_sp_fs_bg_corner_pane

0xcc13,	// (0x00049fec) popup_sp_fs_calendar_preview_bg_pane_g1

0xa021,	// (0x000473fa) popup_sp_fs_calendar_preview_bg_pane

0xa6ca,	// (0x00047aa3) popup_sp_fs_calendar_preview_list_pane

0xc809,	// (0x00049be2) bg_main_sp_fs_cale_pane_ParamLimits

0xc809,	// (0x00049be2) bg_main_sp_fs_cale_pane

0x1cfa,	// (0x0003f0d3) listscroll_cale_mrui_pane_ParamLimits

0x1cfa,	// (0x0003f0d3) listscroll_cale_mrui_pane

0x1d0f,	// (0x0003f0e8) listscroll_sp_fs_schedule_track_pane

0x1d18,	// (0x0003f0f1) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1d18,	// (0x0003f0f1) main_sp_fs_ctrlbar_pane_cp01

0xe8cf,	// (0x0004bca8) main_sp_fs_ribbon_pane

0x1d2b,	// (0x0003f104) popup_sp_fs_cale_preview_window

0x9525,	// (0x000468fe) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9525,	// (0x000468fe) list_single_sp_fs_schedule_track_pane

0xdf11,	// (0x0004b2ea) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdf11,	// (0x0004b2ea) bg_sp_fs_highlight_list_pane_cp03

0x9553,	// (0x0004692c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9553,	// (0x0004692c) list_single_sp_fs_schedule_track_pane_g1

0x955f,	// (0x00046938) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x955f,	// (0x00046938) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0004d193) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0004d193) list_single_sp_fs_schedule_track_pane_g

0x956b,	// (0x00046944) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x956b,	// (0x00046944) list_single_sp_fs_schedule_track_pane_t1

0x9583,	// (0x0004695c) sp_fs_schedule_track_pane_ParamLimits

0x9583,	// (0x0004695c) sp_fs_schedule_track_pane

0xe8d7,	// (0x0004bcb0) sp_fs_schedule_track_pane_g1

0xe8df,	// (0x0004bcb8) sp_fs_schedule_track_pane_g2

0xe8e7,	// (0x0004bcc0) sp_fs_schedule_track_pane_g3

0xe8ef,	// (0x0004bcc8) sp_fs_schedule_track_pane_g4

0xe8f7,	// (0x0004bcd0) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0004d198) sp_fs_schedule_track_pane_g

0xd670,	// (0x0004aa49) bg_sp_fs_schedule_viewer_highlight_g1

0xabc8,	// (0x00047fa1) bg_sp_fs_schedule_viewer_highlight_g2

0xd678,	// (0x0004aa51) bg_sp_fs_schedule_viewer_highlight_g3

0xd680,	// (0x0004aa59) bg_sp_fs_schedule_viewer_highlight_g4

0xd894,	// (0x0004ac6d) bg_sp_fs_schedule_viewer_highlight_g5

0xd690,	// (0x0004aa69) bg_sp_fs_schedule_viewer_highlight_g6

0xd698,	// (0x0004aa71) bg_sp_fs_schedule_viewer_highlight_g7

0xd6a0,	// (0x0004aa79) bg_sp_fs_schedule_viewer_highlight_g8

0xaba8,	// (0x00047f81) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0004d1a3) bg_sp_fs_schedule_viewer_highlight_g

0xa021,	// (0x000473fa) bg_main_sp_fs_ribbon_pane

0x9593,	// (0x0004696c) main_sp_fs_ribbon_pane_g1

0xe8ff,	// (0x0004bcd8) main_sp_fs_ribbon_pane_t1

0x959c,	// (0x00046975) main_sp_fs_ribbon_pane_t2

0xe90e,	// (0x0004bce7) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0004d1b6) main_sp_fs_ribbon_pane_t

0xe91d,	// (0x0004bcf6) main_sp_fs_ribbon_scheduler_pane

0xe925,	// (0x0004bcfe) bg_main_sp_fs_ribbon_pane_g1

0xe92e,	// (0x0004bd07) bg_main_sp_fs_ribbon_pane_g2

0xe937,	// (0x0004bd10) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0004d1bd) bg_main_sp_fs_ribbon_pane_g

0xe93f,	// (0x0004bd18) main_sp_fs_ribbon_scheduler_pane_g1

0xe948,	// (0x0004bd21) main_sp_fs_ribbon_scheduler_pane_g2

0xe951,	// (0x0004bd2a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0004d1c4) main_sp_fs_ribbon_scheduler_pane_g

0xe95a,	// (0x0004bd33) list_cale_mrui_pane

0x95ad,	// (0x00046986) sp_fs_scroll_pane_cp07_ParamLimits

0x95ad,	// (0x00046986) sp_fs_scroll_pane_cp07

0x95c9,	// (0x000469a2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x95c9,	// (0x000469a2) bg_sp_fs_schedule_viewer_highlight

0xe967,	// (0x0004bd40) list_single_sp_fs_schedule_track_pane_cp01

0xe96f,	// (0x0004bd48) list_sp_fs_schedule_track_pane

0xe977,	// (0x0004bd50) sp_fs_scroll_pane_cp06_ParamLimits

0xe977,	// (0x0004bd50) sp_fs_scroll_pane_cp06

0xcc13,	// (0x00049fec) bgmain_sp_fs_calendar_pane_g1

0x1d3d,	// (0x0003f116) list_single_cale_mrui_pane_ParamLimits

0x1d3d,	// (0x0003f116) list_single_cale_mrui_pane

0x1d6f,	// (0x0003f148) list_single_cale_mrui_row_pane_ParamLimits

0x1d6f,	// (0x0003f148) list_single_cale_mrui_row_pane

0x1d7c,	// (0x0003f155) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1d7c,	// (0x0003f155) list_single_cale_mrui_row_pane_g1

0x1db4,	// (0x0003f18d) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1db4,	// (0x0003f18d) list_single_cale_mrui_row_pane_t1

0x1dc6,	// (0x0003f19f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1dc6,	// (0x0003f19f) list_single_cale_mrui_row_pane_t2

0x1e2c,	// (0x0003f205) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1e2c,	// (0x0003f205) list_single_cale_mrui_row_pane_t3

0x1e5b,	// (0x0003f234) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1e5b,	// (0x0003f234) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0004d1d2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0004d1d2) list_single_cale_mrui_row_pane_t

0x1e8a,	// (0x0003f263) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1e8a,	// (0x0003f263) list_single_cmail_header_editor_pane_bg_cp01

0x1eac,	// (0x0003f285) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1eac,	// (0x0003f285) list_single_cmail_header_editor_pane_bg_cp02

0x95d6,	// (0x000469af) main_radioblah_text_pane_t1_ParamLimits

0x95d6,	// (0x000469af) main_radioblah_text_pane_t1

0xe996,	// (0x0004bd6f) cam6_indi_pane_cp01

0xe99e,	// (0x0004bd77) cam6_mode_pane_cp01

0xe9a6,	// (0x0004bd7f) cam6_pano_pane

0xe9af,	// (0x0004bd88) cam6_zoom_pane_cp01

0xe9b7,	// (0x0004bd90) cam6_pano_image_pane

0xe9c2,	// (0x0004bd9b) cam6_pano_pane_g1

0xe2ce,	// (0x0004b6a7) cam6_pano_pane_g2

0xe9cb,	// (0x0004bda4) cam6_pano_pane_g3

0xe9d4,	// (0x0004bdad) cam6_pano_pane_g4

0xd1b5,	// (0x0004a58e) cam6_pano_pane_g5

0xe9dd,	// (0x0004bdb6) cam6_pano_pane_g6

0xe9e7,	// (0x0004bdc0) cam6_pano_pane_g7

0xe9ef,	// (0x0004bdc8) cam6_pano_pane_g8

0xe9f8,	// (0x0004bdd1) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0004d1db) cam6_pano_pane_g

0xa021,	// (0x000473fa) main_browser_tag_pane

0xe856,	// (0x0004bc2f) grid_navstr_albumart_pane

0xea03,	// (0x0004bddc) cell_navstr_albumart_pane_ParamLimits

0xea03,	// (0x0004bddc) cell_navstr_albumart_pane

0xb568,	// (0x00048941) cell_navstr_albumart_pane_g1

0xc61a,	// (0x000499f3) cell_navstr_albumart_pane_g2

0xc62a,	// (0x00049a03) cell_navstr_albumart_pane_g3

0xc622,	// (0x000499fb) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0004d1ee) cell_navstr_albumart_pane_g

0x95f1,	// (0x000469ca) bt_list_pane_ParamLimits

0x95f1,	// (0x000469ca) bt_list_pane

0xea25,	// (0x0004bdfe) bt_list_pane_t1

0xea46,	// (0x0004be1f) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0004d1f7) bt_list_pane_t

0xa021,	// (0x000473fa) main_cale_prevew_pane

0x9615,	// (0x000469ee) popup_cale_preview_window_ParamLimits

0x9615,	// (0x000469ee) popup_cale_preview_window

0xad62,	// (0x0004813b) bg_popup_preview_window_pane_cp05_ParamLimits

0xad62,	// (0x0004813b) bg_popup_preview_window_pane_cp05

0xea55,	// (0x0004be2e) list_cale_preview_pane_ParamLimits

0xea55,	// (0x0004be2e) list_cale_preview_pane

0xea61,	// (0x0004be3a) list_double_cale_preview_pane_ParamLimits

0xea61,	// (0x0004be3a) list_double_cale_preview_pane

0xea73,	// (0x0004be4c) list_single_cale_preview_pane_ParamLimits

0xea73,	// (0x0004be4c) list_single_cale_preview_pane

0xea87,	// (0x0004be60) list_single_cale_preview_pane_g1

0xea8f,	// (0x0004be68) list_single_cale_preview_pane_t1_ParamLimits

0xea8f,	// (0x0004be68) list_single_cale_preview_pane_t1

0xeaa4,	// (0x0004be7d) list_double_cale_preview_pane_g1

0xeaac,	// (0x0004be85) list_double_cale_preview_pane_t1_ParamLimits

0xeaac,	// (0x0004be85) list_double_cale_preview_pane_t1

0xeac1,	// (0x0004be9a) list_double_cale_preview_pane_t2_ParamLimits

0xeac1,	// (0x0004be9a) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0004d1fc) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0004d1fc) list_double_cale_preview_pane_t

0xa021,	// (0x000473fa) main_ezdial_pane

0xad62,	// (0x0004813b) main_sp_fs_email_pane_ParamLimits

0x9218,	// (0x000465f1) cmail_ddmenu_btn01_pane_ParamLimits

0x9218,	// (0x000465f1) cmail_ddmenu_btn01_pane

0x9235,	// (0x0004660e) cmail_ddmenu_btn02_pane_ParamLimits

0x9235,	// (0x0004660e) cmail_ddmenu_btn02_pane

0x9253,	// (0x0004662c) cmail_ddmenu_btn03_pane_ParamLimits

0x9253,	// (0x0004662c) cmail_ddmenu_btn03_pane

0x9281,	// (0x0004665a) main_sp_fs_ctrlbar_pane_ParamLimits

0x9297,	// (0x00046670) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x939f,	// (0x00046778) list_cmail_body_pane_ParamLimits

0x9435,	// (0x0004680e) bg_button_pane_cp12

0xe7d6,	// (0x0004bbaf) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7d6,	// (0x0004bbaf) list_single_cmail_header_detail_pane_g3

0x1c8d,	// (0x0003f066) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1c8d,	// (0x0003f066) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0004d17f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0004d17f) list_single_cmail_header_detail_pane_t

0x1ce5,	// (0x0003f0be) phacti_term_pane_t2_ParamLimits

0x1ce5,	// (0x0003f0be) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0004d189) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0004d189) phacti_term_pane_t

0xead9,	// (0x0004beb2) aid_size_list_single_double

0x962c,	// (0x00046a05) popup_ezdial_listscroll_window

0x964f,	// (0x00046a28) popup_number_entry_window_cp01

0xb3ed,	// (0x000487c6) bg_popup_call_pane_cp09

0xeae5,	// (0x0004bebe) ezdial_list_pane

0xeaed,	// (0x0004bec6) scroll_pane_cp23

0xc9f6,	// (0x00049dcf) bg_button_pane_cp028_ParamLimits

0xc9f6,	// (0x00049dcf) bg_button_pane_cp028

0x965d,	// (0x00046a36) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x965d,	// (0x00046a36) cmail_ddmenu_btn01_pane_g1

0x966f,	// (0x00046a48) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x966f,	// (0x00046a48) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0004d201) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0004d201) cmail_ddmenu_btn01_pane_g

0xeaf5,	// (0x0004bece) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaf5,	// (0x0004bece) cmail_ddmenu_btn01_pane_t1

0xc809,	// (0x00049be2) bg_button_pane_cp029_ParamLimits

0xc809,	// (0x00049be2) bg_button_pane_cp029

0x967b,	// (0x00046a54) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x967b,	// (0x00046a54) cmail_ddmenu_btn02_pane_g1

0x9693,	// (0x00046a6c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9693,	// (0x00046a6c) cmail_ddmenu_btn02_pane_t1

0xdf11,	// (0x0004b2ea) bg_button_pane_cp031_ParamLimits

0xdf11,	// (0x0004b2ea) bg_button_pane_cp031

0x967b,	// (0x00046a54) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x967b,	// (0x00046a54) cmail_ddmenu_btn03_pane_g1

0x9693,	// (0x00046a6c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9693,	// (0x00046a6c) cmail_ddmenu_btn03_pane_t1

0x70c3,	// (0x0004449c) cell_dialer2_keypad_pane_t1_ParamLimits

0x70dd,	// (0x000444b6) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x70dd,	// (0x000444b6) cell_dialer2_keypad_pane_t1_copy1

0x8be9,	// (0x00045fc2) ncimui_group_button_pane

0xad62,	// (0x0004813b) main_sp_fs_calendar_pane_ParamLimits

0x93c6,	// (0x0004679f) list_single_cmail_header_caption_pane_ParamLimits

0xdf08,	// (0x0004b2e1) aid_recal_txt_sm_pane

0xa021,	// (0x000473fa) mian_recal_day_pane

0x1d2b,	// (0x0003f104) popup_sp_fs_cale_preview_window_ParamLimits

0xeb0a,	// (0x0004bee3) list_recal_day_pane

0x1ee3,	// (0x0003f2bc) list_single_recal_day_pane_ParamLimits

0x1ee3,	// (0x0003f2bc) list_single_recal_day_pane

0xeb31,	// (0x0004bf0a) list_single_recal_day_pane_g1_ParamLimits

0xeb31,	// (0x0004bf0a) list_single_recal_day_pane_g1

0x1ef5,	// (0x0003f2ce) list_single_recal_day_pane_g2_ParamLimits

0x1ef5,	// (0x0003f2ce) list_single_recal_day_pane_g2

0x1f05,	// (0x0003f2de) list_single_recal_day_pane_g3_ParamLimits

0x1f05,	// (0x0003f2de) list_single_recal_day_pane_g3

0x1f11,	// (0x0003f2ea) list_single_recal_day_pane_g4_ParamLimits

0x1f11,	// (0x0003f2ea) list_single_recal_day_pane_g4

0x1f27,	// (0x0003f300) list_single_recal_day_pane_g5_ParamLimits

0x1f27,	// (0x0003f300) list_single_recal_day_pane_g5

0x1f41,	// (0x0003f31a) list_single_recal_day_pane_g6_ParamLimits

0x1f41,	// (0x0003f31a) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0004d210) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0004d210) list_single_recal_day_pane_g

0x1f55,	// (0x0003f32e) list_single_recal_day_pane_t1

0x1f67,	// (0x0003f340) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0004d21b) list_single_recal_day_pane_t

0x96b7,	// (0x00046a90) ncimui_query_button_pane_ParamLimits

0x96b7,	// (0x00046a90) ncimui_query_button_pane

0x96c7,	// (0x00046aa0) ncimui_query_button_pane_t1_ParamLimits

0x96c7,	// (0x00046aa0) ncimui_query_button_pane_t1

0xeb3d,	// (0x0004bf16) ncimui_query_button_pane_t2_ParamLimits

0xeb3d,	// (0x0004bf16) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0004d220) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0004d220) ncimui_query_button_pane_t

0x96da,	// (0x00046ab3) query_button_pane_ParamLimits

0x96da,	// (0x00046ab3) query_button_pane

0xa021,	// (0x000473fa) bg_button_pane_cp0028

0xeb50,	// (0x0004bf29) query_button_pane_t1

0x5496,	// (0x0004286f) main_tport_pane_ParamLimits

0x92a8,	// (0x00046681) bg_popup_window_pane_cp01_ParamLimits

0x92a8,	// (0x00046681) bg_popup_window_pane_cp01

0x92b6,	// (0x0004668f) heading_pane_cp08_ParamLimits

0x92b6,	// (0x0004668f) heading_pane_cp08

0x92c4,	// (0x0004669d) heading_pane_cp07_ParamLimits

0x92c4,	// (0x0004669d) heading_pane_cp07

0x9333,	// (0x0004670c) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0004d16c) cell_tport_appsw_pane_g

0x0f59,	// (0x0003e332) input_candi_list_open_g1

0xada1,	// (0x0004817a) list_cale_time_pane_g6_ParamLimits

0xada1,	// (0x0004817a) list_cale_time_pane_g6

0x5f1e,	// (0x000432f7) aid_size_touch_calib_1_ParamLimits

0x5f1e,	// (0x000432f7) aid_size_touch_calib_1

0x5f2a,	// (0x00043303) aid_size_touch_calib_2_ParamLimits

0x5f2a,	// (0x00043303) aid_size_touch_calib_2

0x5f38,	// (0x00043311) aid_size_touch_calib_3_ParamLimits

0x5f38,	// (0x00043311) aid_size_touch_calib_3

0x5f48,	// (0x00043321) aid_size_touch_calib_4_ParamLimits

0x5f48,	// (0x00043321) aid_size_touch_calib_4

0x5f56,	// (0x0004332f) main_touch_calib_button_group_pane_ParamLimits

0x5f56,	// (0x0004332f) main_touch_calib_button_group_pane

0x5f64,	// (0x0004333d) main_touch_calib_pane_g1_ParamLimits

0x5f70,	// (0x00043349) main_touch_calib_pane_g2_ParamLimits

0x5f7c,	// (0x00043355) main_touch_calib_pane_g3_ParamLimits

0x5f88,	// (0x00043361) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0004cb2f) main_touch_calib_pane_g_ParamLimits

0x5f94,	// (0x0004336d) main_touch_calib_pane_t1_ParamLimits

0x5fad,	// (0x00043386) main_touch_calib_pane_t2_ParamLimits

0x5fc6,	// (0x0004339f) main_touch_calib_pane_t3_ParamLimits

0x5fdc,	// (0x000433b5) main_touch_calib_pane_t4_ParamLimits

0x5ff2,	// (0x000433cb) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0004cb38) main_touch_calib_pane_t_ParamLimits

0xcf73,	// (0x0004a34c) list_single_fp_cale_pane_g3_ParamLimits

0xcf73,	// (0x0004a34c) list_single_fp_cale_pane_g3

0xad62,	// (0x0004813b) bg_button_pane_cp012_ParamLimits

0xad62,	// (0x0004813b) bg_vkb2_func_pane_cp03_ParamLimits

0x7e92,	// (0x0004526b) cell_vitu2_function_top_pane_g1_ParamLimits

0xad62,	// (0x0004813b) bg_vkb2_func_pane_cp04_ParamLimits

0x8b71,	// (0x00045f4a) main_ncimui_button_group_pane_ParamLimits

0x8b71,	// (0x00045f4a) main_ncimui_button_group_pane

0x8bd7,	// (0x00045fb0) main_ncimui_pane_t3_ParamLimits

0x8bd7,	// (0x00045fb0) main_ncimui_pane_t3

0xe86c,	// (0x0004bc45) phacti_button_group_pane

0xead9,	// (0x0004beb2) aid_size_list_single_double_ParamLimits

0x962c,	// (0x00046a05) popup_ezdial_listscroll_window_ParamLimits

0x964f,	// (0x00046a28) popup_number_entry_window_cp01_ParamLimits

0x96e7,	// (0x00046ac0) phacti_button_pane_ParamLimits

0x96e7,	// (0x00046ac0) phacti_button_pane

0xa021,	// (0x000473fa) bg_button_pane_cp14

0xeb5e,	// (0x0004bf37) phacti_button_pane_t1

0x96f8,	// (0x00046ad1) main_touch_calib_button_pane_ParamLimits

0x96f8,	// (0x00046ad1) main_touch_calib_button_pane

0xa7a8,	// (0x00047b81) bg_button_pane_cp18_ParamLimits

0xa7a8,	// (0x00047b81) bg_button_pane_cp18

0xeb6c,	// (0x0004bf45) main_touch_calib_button_pane_t1_ParamLimits

0xeb6c,	// (0x0004bf45) main_touch_calib_button_pane_t1

0xeb82,	// (0x0004bf5b) main_touch_calib_button_pane_t2_ParamLimits

0xeb82,	// (0x0004bf5b) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0004d225) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0004d225) main_touch_calib_button_pane_t

0xa021,	// (0x000473fa) cell_ncimui_button_pane

0xa021,	// (0x000473fa) bg_button_pane_cp032

0xeba0,	// (0x0004bf79) cell_ncimui_button_pane_t1

0x7139,	// (0x00044512) image3_infobar_pane_ParamLimits

0x7139,	// (0x00044512) image3_infobar_pane

0x8f50,	// (0x00046329) fs_bigclock_status_pane_ParamLimits

0x8f50,	// (0x00046329) fs_bigclock_status_pane

0x8f5d,	// (0x00046336) main_fs_bigclock_clock_pane_ParamLimits

0x8f5d,	// (0x00046336) main_fs_bigclock_clock_pane

0x8f81,	// (0x0004635a) main_fs_bigclock_indi_pane_ParamLimits

0x8f81,	// (0x0004635a) main_fs_bigclock_indi_pane

0x8fb1,	// (0x0004638a) main_fs_bigclock_swipe_pane_ParamLimits

0x8fb1,	// (0x0004638a) main_fs_bigclock_swipe_pane

0xa021,	// (0x000473fa) main_fs_clock_dumped_data

0xe3db,	// (0x0004b7b4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3db,	// (0x0004b7b4) list_single_fs_bigclock_indicator_pane_g1

0xe3f6,	// (0x0004b7cf) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3f6,	// (0x0004b7cf) list_single_fs_bigclock_indicator_pane_g2

0xe410,	// (0x0004b7e9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe410,	// (0x0004b7e9) list_single_fs_bigclock_indicator_pane_g3

0xe42a,	// (0x0004b803) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe42a,	// (0x0004b803) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0004d04d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0004d04d) list_single_fs_bigclock_indicator_pane_g

0xe453,	// (0x0004b82c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe453,	// (0x0004b82c) list_single_fs_bigclock_indicator_pane_t1

0xe47b,	// (0x0004b854) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe47b,	// (0x0004b854) list_single_fs_bigclock_indicator_pane_t2

0xe4a3,	// (0x0004b87c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4a3,	// (0x0004b87c) list_single_fs_bigclock_indicator_pane_t3

0xe4cb,	// (0x0004b8a4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4cb,	// (0x0004b8a4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0004d058) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0004d058) list_single_fs_bigclock_indicator_pane_t

0xebae,	// (0x0004bf87) image3_infobar_fav_pane_ParamLimits

0xebae,	// (0x0004bf87) image3_infobar_fav_pane

0xebbe,	// (0x0004bf97) image3_infobar_loc_pane_ParamLimits

0xebbe,	// (0x0004bf97) image3_infobar_loc_pane

0xebd2,	// (0x0004bfab) image3_infobar_time_pane_ParamLimits

0xebd2,	// (0x0004bfab) image3_infobar_time_pane

0xcc13,	// (0x00049fec) image3_infobar_time_pane_g1

0xebe2,	// (0x0004bfbb) image3_infobar_time_pane_t1

0xcc13,	// (0x00049fec) image3_infobar_loc_pane_g1

0xebf0,	// (0x0004bfc9) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0004d22a) image3_infobar_loc_pane_g

0xebf8,	// (0x0004bfd1) image3_infobar_loc_pane_t1

0xcc13,	// (0x00049fec) image3_infobar_fav_pane_g1

0xec06,	// (0x0004bfdf) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0004d22f) image3_infobar_fav_pane_g

0xec17,	// (0x0004bff0) fs_bigclock_status_battery_pane

0xec20,	// (0x0004bff9) fs_bigclock_status_signal_pane

0xec29,	// (0x0004c002) fs_bigclock_status_title_pane

0xec32,	// (0x0004c00b) fs_bigclock_status_signal_pane_g1

0xec3b,	// (0x0004c014) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0004d234) fs_bigclock_status_signal_pane_g

0xec43,	// (0x0004c01c) fs_bigclock_status_battery_pane_g1

0xec4c,	// (0x0004c025) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0004d239) fs_bigclock_status_battery_pane_g

0xec54,	// (0x0004c02d) fs_bigclock_status_title_pane_t1

0xcc13,	// (0x00049fec) main_fs_bigclock_clock_pane_g1

0x9708,	// (0x00046ae1) main_fs_bigclock_clock_pane_g2

0x9708,	// (0x00046ae1) main_fs_bigclock_clock_pane_g3

0x9708,	// (0x00046ae1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0004d23e) main_fs_bigclock_clock_pane_g

0x9710,	// (0x00046ae9) main_fs_bigclock_clock_pane_t1

0x971e,	// (0x00046af7) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0004d247) main_fs_bigclock_clock_pane_t

0xec62,	// (0x0004c03b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec62,	// (0x0004c03b) list_single_fs_bigclock_indicator_pane

0x972d,	// (0x00046b06) list_single_fs_bigclock_pane_ParamLimits

0x972d,	// (0x00046b06) list_single_fs_bigclock_pane

0xec7c,	// (0x0004c055) main_fs_bigclock_indicator_pane_t1

0xec8b,	// (0x0004c064) list_single_fs_bigclock_pane_g1

0xec93,	// (0x0004c06c) list_single_fs_bigclock_pane_t1

0xcc13,	// (0x00049fec) main_fs_bigclock_swipe_pane_g1

0xecd6,	// (0x0004c0af) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0004d258) main_fs_bigclock_swipe_pane_g

0xecde,	// (0x0004c0b7) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecde,	// (0x0004c0b7) main_fs_bigclock_swipe_pane_t1

0x452d,	// (0x00041906) call_type_pane_ParamLimits

0xa021,	// (0x000473fa) main_btmg_pane

0x1da8,	// (0x0003f181) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1da8,	// (0x0003f181) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0004d1cb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0004d1cb) list_single_cale_mrui_row_pane_g

0x1ed2,	// (0x0003f2ab) list_recal_vselct_arw_lo_pane

0xeb29,	// (0x0004bf02) list_recal_vselct_arw_up_pane

0x1eda,	// (0x0003f2b3) list_recal_vselct_pane

0x978e,	// (0x00046b67) btmg_button_pane

0x979a,	// (0x00046b73) main_btmg_pane_g1

0xa021,	// (0x000473fa) bg_button_pane_cp044

0xecfb,	// (0x0004c0d4) btmg_button_pane_t1

0xc7f5,	// (0x00049bce) aid_listscroll_gen

0xad62,	// (0x0004813b) main_cntbar_detail_pane

0xe7b8,	// (0x0004bb91) list_cmail_folder_pane

0xd416,	// (0x0004a7ef) sp_fs_scroll_pane_cp03_ParamLimits

0x1f79,	// (0x0003f352) list_single_fs_dyc_pane_cp01_ParamLimits

0x1f79,	// (0x0003f352) list_single_fs_dyc_pane_cp01

0xed09,	// (0x0004c0e2) aid_size_cmail_indent

0x1fb0,	// (0x0003f389) list_single_dyc_row_pane_cp01

0x97c2,	// (0x00046b9b) cntbar_detail_list_pane_ParamLimits

0x97c2,	// (0x00046b9b) cntbar_detail_list_pane

0x97fc,	// (0x00046bd5) main_cntbar_detail_cont_pane_ParamLimits

0x97fc,	// (0x00046bd5) main_cntbar_detail_cont_pane

0x4521,	// (0x000418fa) scroll_pane_cp032_ParamLimits

0x4521,	// (0x000418fa) scroll_pane_cp032

0x9808,	// (0x00046be1) cntbar_detail_list_event_pane_ParamLimits

0x9808,	// (0x00046be1) cntbar_detail_list_event_pane

0x97ce,	// (0x00046ba7) cntbar_detail_list_shct_pane

0xac16,	// (0x00047fef) aid_list_gen

0xed12,	// (0x0004c0eb) aid_scroll

0xed1b,	// (0x0004c0f4) aid_size_touch_scroll_bar

0x1476,	// (0x0003e84f) aid_list_double

0x1fb9,	// (0x0003f392) aid_list_single

0xec0e,	// (0x0004bfe7) aid_list_single_lg

0x1fc2,	// (0x0003f39b) aid_list_z_g_a_sm

0x1fca,	// (0x0003f3a3) aid_list_z_g_d

0x1fd2,	// (0x0003f3ab) aid_txt_z_prm

0x1fe0,	// (0x0003f3b9) aid_txt_z_prm_cp01

0x1fee,	// (0x0003f3c7) aid_txt_z_sec

0x981c,	// (0x00046bf5) main_cntbar_detail_cont_pane_g1_ParamLimits

0x981c,	// (0x00046bf5) main_cntbar_detail_cont_pane_g1

0x9829,	// (0x00046c02) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9829,	// (0x00046c02) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0004d25d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0004d25d) main_cntbar_detail_cont_pane_g

0xed24,	// (0x0004c0fd) main_cntbar_detail_cont_pane_t1

0xed32,	// (0x0004c10b) main_cntbar_detail_cont_pane_t2

0xed40,	// (0x0004c119) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0004d262) main_cntbar_detail_cont_pane_t

0x9835,	// (0x00046c0e) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9835,	// (0x00046c0e) cell_cntbar_detail_list_shct_pane

0xed4e,	// (0x0004c127) cntbar_detail_list_shct_pane_g1

0xed57,	// (0x0004c130) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0004d269) cntbar_detail_list_shct_pane_g

0x9849,	// (0x00046c22) cntbar_detail_list_event_pane_g1_ParamLimits

0x9849,	// (0x00046c22) cntbar_detail_list_event_pane_g1

0x9855,	// (0x00046c2e) cntbar_detail_list_event_pane_g2_ParamLimits

0x9855,	// (0x00046c2e) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0004d26e) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0004d26e) cntbar_detail_list_event_pane_g

0x98c1,	// (0x00046c9a) cntbar_detail_list_event_pane_t1_ParamLimits

0x98c1,	// (0x00046c9a) cntbar_detail_list_event_pane_t1

0x98d6,	// (0x00046caf) cntbar_detail_list_event_pane_t2_ParamLimits

0x98d6,	// (0x00046caf) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0004d27b) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0004d27b) cntbar_detail_list_event_pane_t

0xcc13,	// (0x00049fec) cell_cntbar_detail_list_shct_pane_g1

0xb3a5,	// (0x0004877e) navi_pane_mv_g3

0xad62,	// (0x0004813b) main_cntbar_detail_pane_ParamLimits

0xa021,	// (0x000473fa) main_notif_wgt_pane

0x6ded,	// (0x000441c6) aid_tch_main_mp4_pane_g4

0x7022,	// (0x000443fb) popup_slider_window_cp02

0x1ec8,	// (0x0003f2a1) list_recal_day_event_pane

0x97a2,	// (0x00046b7b) cntbar_detail_btn_pane_ParamLimits

0x97a2,	// (0x00046b7b) cntbar_detail_btn_pane

0x97b2,	// (0x00046b8b) cntbar_detail_btn_pane_cp01_ParamLimits

0x97b2,	// (0x00046b8b) cntbar_detail_btn_pane_cp01

0x97ce,	// (0x00046ba7) cntbar_detail_list_shct_pane_ParamLimits

0x97da,	// (0x00046bb3) cntbar_detail_pane_g1_ParamLimits

0x97da,	// (0x00046bb3) cntbar_detail_pane_g1

0x97e6,	// (0x00046bbf) cntbar_detail_pane_t1_ParamLimits

0x97e6,	// (0x00046bbf) cntbar_detail_pane_t1

0x9861,	// (0x00046c3a) cntbar_detail_list_event_pane_g3_ParamLimits

0x9861,	// (0x00046c3a) cntbar_detail_list_event_pane_g3

0x9879,	// (0x00046c52) cntbar_detail_list_event_pane_g4_ParamLimits

0x9879,	// (0x00046c52) cntbar_detail_list_event_pane_g4

0x9891,	// (0x00046c6a) cntbar_detail_list_event_pane_g5_ParamLimits

0x9891,	// (0x00046c6a) cntbar_detail_list_event_pane_g5

0x98a9,	// (0x00046c82) cntbar_detail_list_event_pane_g6_ParamLimits

0x98a9,	// (0x00046c82) cntbar_detail_list_event_pane_g6

0x98eb,	// (0x00046cc4) cntbar_detail_list_event_pane_t3_ParamLimits

0x98eb,	// (0x00046cc4) cntbar_detail_list_event_pane_t3

0x98fd,	// (0x00046cd6) popup_notif_wgt_window_ParamLimits

0x98fd,	// (0x00046cd6) popup_notif_wgt_window

0x990d,	// (0x00046ce6) popup_submenu_window_cp01_ParamLimits

0x990d,	// (0x00046ce6) popup_submenu_window_cp01

0xb3ed,	// (0x000487c6) bg_popup_window_pane_cp10

0xed60,	// (0x0004c139) listscroll_notif_wgt_pane

0xed71,	// (0x0004c14a) list_notif_wgt_window

0xed7a,	// (0x0004c153) scroll_pane_cp033

0x991b,	// (0x00046cf4) list_notif_wgt_row_pane_ParamLimits

0x991b,	// (0x00046cf4) list_notif_wgt_row_pane

0xed83,	// (0x0004c15c) aid_size_list_notif_wgt_del

0xed90,	// (0x0004c169) list_notif_wgt_row_pane_g1

0xed9c,	// (0x0004c175) list_notif_wgt_row_pane_g2

0xeda8,	// (0x0004c181) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0004d282) list_notif_wgt_row_pane_g

0xedb5,	// (0x0004c18e) list_notif_wgt_row_pane_t1

0xedca,	// (0x0004c1a3) list_notif_wgt_row_pane_t2

0xeddc,	// (0x0004c1b5) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0004d289) list_notif_wgt_row_pane_t

0xd89c,	// (0x0004ac75) list_recal_day_event_pane_g1

0xedee,	// (0x0004c1c7) list_recal_day_event_pane_t1

0xa021,	// (0x000473fa) bg_button_pane_cp045

0xedfd,	// (0x0004c1d6) cntbar_detail_btn_pane_t1

0xc809,	// (0x00049be2) main_callh_pane_ParamLimits

0xc809,	// (0x00049be2) main_callh_pane

0xa021,	// (0x000473fa) main_coverflow0_pane

0xa021,	// (0x000473fa) main_wgtman_pane

0x8fc9,	// (0x000463a2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8fc9,	// (0x000463a2) main_fs_bigclock_unlock_btn_pane

0x932b,	// (0x00046704) bg_button_pane_cp16

0x933b,	// (0x00046714) cell_tport_appsw_pane_g3

0x992d,	// (0x00046d06) cf0_flow_pane_ParamLimits

0x992d,	// (0x00046d06) cf0_flow_pane

0xee0b,	// (0x0004c1e4) listscroll_cf0_pane

0xee16,	// (0x0004c1ef) main_cf0_pane_g1

0x993c,	// (0x00046d15) main_cf0_pane_t1_ParamLimits

0x993c,	// (0x00046d15) main_cf0_pane_t1

0x9950,	// (0x00046d29) main_cf0_pane_t2_ParamLimits

0x9950,	// (0x00046d29) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0004d295) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0004d295) main_cf0_pane_t

0xee28,	// (0x0004c201) scroll_pane_cp11

0x9964,	// (0x00046d3d) cf0_flow_pane_g1

0x996c,	// (0x00046d45) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0004d29a) cf0_flow_pane_g

0x9974,	// (0x00046d4d) cf0_flow_pane_t1

0xa021,	// (0x000473fa) main_call6_pane

0xa021,	// (0x000473fa) main_calllock_pane

0x9982,	// (0x00046d5b) call6_btn_grp_pane_ParamLimits

0x9982,	// (0x00046d5b) call6_btn_grp_pane

0x9991,	// (0x00046d6a) call6_pane_g1_ParamLimits

0x9991,	// (0x00046d6a) call6_pane_g1

0x99a0,	// (0x00046d79) popup_call6_1st_window_ParamLimits

0x99a0,	// (0x00046d79) popup_call6_1st_window

0x99ae,	// (0x00046d87) popup_call6_2nd_window_ParamLimits

0x99ae,	// (0x00046d87) popup_call6_2nd_window

0x99bc,	// (0x00046d95) cell_call6_btn_pane_ParamLimits

0x99bc,	// (0x00046d95) cell_call6_btn_pane

0xb3ed,	// (0x000487c6) bg_popup_call2_in_pane_cp03

0xee33,	// (0x0004c20c) popup_call6_1st_window_g1

0xee3b,	// (0x0004c214) popup_call6_1st_window_g2

0xee43,	// (0x0004c21c) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0004d29f) popup_call6_1st_window_g

0xee4b,	// (0x0004c224) popup_call6_1st_window_t1

0xee5a,	// (0x0004c233) popup_call6_1st_window_t2

0xee6a,	// (0x0004c243) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0004d2a6) popup_call6_1st_window_t

0xb3ed,	// (0x000487c6) bg_popup_call2_in_pane_cp04

0xee33,	// (0x0004c20c) popup_call6_2nd_window_g1

0xee3b,	// (0x0004c214) popup_call6_2nd_window_g2

0xee43,	// (0x0004c21c) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0004d29f) popup_call6_2nd_window_g

0xee4b,	// (0x0004c224) popup_call6_2nd_window_t1

0xa021,	// (0x000473fa) bg_button_pane_cp15

0xee7a,	// (0x0004c253) cell_call6_btn_pane_g1

0xee83,	// (0x0004c25c) cell_call6_btn_pane_t1

0x99cb,	// (0x00046da4) listscroll_wgtman_pane_ParamLimits

0x99cb,	// (0x00046da4) listscroll_wgtman_pane

0x99e7,	// (0x00046dc0) wgtman_btn_pane_ParamLimits

0x99e7,	// (0x00046dc0) wgtman_btn_pane

0xb1aa,	// (0x00048583) aid_scroll_copy1

0xee92,	// (0x0004c26b) list_wgtman_pane

0x9a1c,	// (0x00046df5) wgtman_btn_pane_g1_ParamLimits

0x9a1c,	// (0x00046df5) wgtman_btn_pane_g1

0x9a44,	// (0x00046e1d) wgtman_btn_pane_t1_ParamLimits

0x9a44,	// (0x00046e1d) wgtman_btn_pane_t1

0xee9c,	// (0x0004c275) wgtman_btn_pane_t2_ParamLimits

0xee9c,	// (0x0004c275) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0004d2ad) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0004d2ad) wgtman_btn_pane_t

0x9a7b,	// (0x00046e54) listrow_wgtman_pane_ParamLimits

0x9a7b,	// (0x00046e54) listrow_wgtman_pane

0x9a97,	// (0x00046e70) listrow_wgtman_pane_g1

0x9aa4,	// (0x00046e7d) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0004d2b2) listrow_wgtman_pane_g

0x1ffc,	// (0x0003f3d5) listrow_wgtman_pane_t1

0x2014,	// (0x0003f3ed) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0004d2b7) listrow_wgtman_pane_t

0x203a,	// (0x0003f413) wait_bar_pane_cp09

0xeeb3,	// (0x0004c28c) main_calllock_btn_pane

0xeebd,	// (0x0004c296) main_calllock_pane_g1

0xa021,	// (0x000473fa) bg_button_pane_cp17

0xeec8,	// (0x0004c2a1) main_calllock_btn_pane_g1

0xeed1,	// (0x0004c2aa) main_calllock_btn_pane_t1

0xa021,	// (0x000473fa) main_dialer3_pane

0xa021,	// (0x000473fa) main_fmrd2_pane

0xcc13,	// (0x00049fec) main_fs_bigclock_unlock_btn_pane_g1

0xeee8,	// (0x0004c2c1) main_fs_bigclock_unlock_btn_pane_t1

0x9ac2,	// (0x00046e9b) area_fmrd2_info_pane_ParamLimits

0x9ac2,	// (0x00046e9b) area_fmrd2_info_pane

0x9ad0,	// (0x00046ea9) area_fmrd2_visual_pane_ParamLimits

0x9ad0,	// (0x00046ea9) area_fmrd2_visual_pane

0x9ade,	// (0x00046eb7) fmrd2_indi_pane_ParamLimits

0x9ade,	// (0x00046eb7) fmrd2_indi_pane

0x9aeb,	// (0x00046ec4) area_fmrd2_visual_pane_g1

0x9af3,	// (0x00046ecc) area_fmrd2_visual_pane_t1

0x9b03,	// (0x00046edc) area_fmrd2_visual_pane_t2

0x9b13,	// (0x00046eec) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0004d2c1) area_fmrd2_visual_pane_t

0x9b23,	// (0x00046efc) area_fmrd2_info_pane_g1

0x9b2b,	// (0x00046f04) area_fmrd2_info_pane_t1

0x9b3b,	// (0x00046f14) area_fmrd2_info_pane_t2

0x9b4b,	// (0x00046f24) area_fmrd2_info_pane_t3

0x9b5b,	// (0x00046f34) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0004d2c8) area_fmrd2_info_pane_t

0x9b69,	// (0x00046f42) fmrd2_indi_pane_t1

0x9b79,	// (0x00046f52) fmrd2_indi_pane_t2

0x9b89,	// (0x00046f62) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0004d2d1) fmrd2_indi_pane_t

0xe439,	// (0x0004b812) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe439,	// (0x0004b812) list_single_fs_bigclock_indicator_pane_g5

0xe4e0,	// (0x0004b8b9) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4e0,	// (0x0004b8b9) list_single_fs_bigclock_indicator_pane_t5

0x94d8,	// (0x000468b1) aid_cell_bcale_month_pane_ParamLimits

0x94d8,	// (0x000468b1) aid_cell_bcale_month_pane

0x94f6,	// (0x000468cf) bcale_month_pane_ParamLimits

0x94f6,	// (0x000468cf) bcale_month_pane

0x9514,	// (0x000468ed) bcale_preview_pane_ParamLimits

0x9514,	// (0x000468ed) bcale_preview_pane

0xec93,	// (0x0004c06c) list_single_fs_bigclock_pane_t1_ParamLimits

0xecb2,	// (0x0004c08b) list_single_fs_bigclock_pane_t2_ParamLimits

0xecb2,	// (0x0004c08b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0004d253) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0004d253) list_single_fs_bigclock_pane_t

0xeee0,	// (0x0004c2b9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0004d2bc) main_fs_bigclock_unlock_btn_pane_g

0x9b97,	// (0x00046f70) aid_dia3_key_size_ParamLimits

0x9b97,	// (0x00046f70) aid_dia3_key_size

0x9ba3,	// (0x00046f7c) aid_dia3_listrow_size_ParamLimits

0x9ba3,	// (0x00046f7c) aid_dia3_listrow_size

0x9bb3,	// (0x00046f8c) dia3_keypad_fun_pane_ParamLimits

0x9bb3,	// (0x00046f8c) dia3_keypad_fun_pane

0x9bc5,	// (0x00046f9e) dia3_keypad_num_pane_ParamLimits

0x9bc5,	// (0x00046f9e) dia3_keypad_num_pane

0x9bd7,	// (0x00046fb0) dia3_listscroll_pane_ParamLimits

0x9bd7,	// (0x00046fb0) dia3_listscroll_pane

0x9be5,	// (0x00046fbe) dia3_numentry_pane_ParamLimits

0x9be5,	// (0x00046fbe) dia3_numentry_pane

0xeef6,	// (0x0004c2cf) dia3_list_pane

0xef01,	// (0x0004c2da) scroll_pane_cp12

0xa021,	// (0x000473fa) bg_dia3_numentry_pane

0x9bf3,	// (0x00046fcc) dia3_numentry_pane_t1

0x9c02,	// (0x00046fdb) cell_dia3_key_num_pane

0x9c0a,	// (0x00046fe3) cell_dia3_key0_fun_pane_ParamLimits

0x9c0a,	// (0x00046fe3) cell_dia3_key0_fun_pane

0x9c17,	// (0x00046ff0) cell_dia3_key1_fun_pane_ParamLimits

0x9c17,	// (0x00046ff0) cell_dia3_key1_fun_pane

0x9c24,	// (0x00046ffd) dia3_listrow_pane

0xe148,	// (0x0004b521) bg_dia3_numentry_pane_g1

0xa021,	// (0x000473fa) bg_button_pane_cp21

0xef0c,	// (0x0004c2e5) cell_dia3_key_num_pane_t1

0xef1a,	// (0x0004c2f3) cell_dia3_key_num_pane_t2

0xef29,	// (0x0004c302) cell_dia3_key_num_pane_t3

0xef38,	// (0x0004c311) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0004d2d8) cell_dia3_key_num_pane_t

0xa021,	// (0x000473fa) bg_button_pane_cp19

0x9c31,	// (0x0004700a) cell_dia3_key0_fun_pane_g1

0xa021,	// (0x000473fa) bg_button_pane_cp20

0x9c39,	// (0x00047012) cell_dia3_key1_fun_pane_g1

0x9c41,	// (0x0004701a) area_left_week_number_pane

0x9c54,	// (0x0004702d) area_top_day_name_pane

0x9c62,	// (0x0004703b) frame_month_view_pane

0xef47,	// (0x0004c320) grid_month_view_pane

0x9c77,	// (0x00047050) cell_top_day_name_pane_ParamLimits

0x9c77,	// (0x00047050) cell_top_day_name_pane

0x9c91,	// (0x0004706a) cell_area_left_week_number_pane_ParamLimits

0x9c91,	// (0x0004706a) cell_area_left_week_number_pane

0x9cb4,	// (0x0004708d) cell_month_view_pane_ParamLimits

0x9cb4,	// (0x0004708d) cell_month_view_pane

0xef55,	// (0x0004c32e) frm_month_g1

0x9ce0,	// (0x000470b9) frm_month_g2

0x9cf1,	// (0x000470ca) frm_month_g3

0x9d02,	// (0x000470db) frm_month_g4

0x9d13,	// (0x000470ec) frm_month_g5

0x9d26,	// (0x000470ff) frm_month_g6

0x9d39,	// (0x00047112) frm_month_g7

0xef62,	// (0x0004c33b) frm_month_g8

0x9d4c,	// (0x00047125) frm_month_g9

0x9d59,	// (0x00047132) frm_month_g10

0x9d66,	// (0x0004713f) frm_month_g11

0x9d73,	// (0x0004714c) frm_month_g12

0x9d80,	// (0x00047159) frm_month_g13

0x9d8d,	// (0x00047166) frm_month_g14

0x9d9c,	// (0x00047175) frm_month_g15

0x9dab,	// (0x00047184) frm_month_g16

0x000f,

0xff08,	// (0x0004d2e1) frm_month_g

0xef6f,	// (0x0004c348) cell_top_day_name_pane_t1

0x9dba,	// (0x00047193) cell_area_left_week_number_pane_g1

0x9dc9,	// (0x000471a2) cell_area_left_week_number_pane_t1

0xce73,	// (0x0004a24c) cell_month_view_pane_g1

0x9ddf,	// (0x000471b8) cell_month_view_pane_t1

0xa021,	// (0x000473fa) main_fps_pane

0xe6d0,	// (0x0004baa9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6d0,	// (0x0004baa9) cmail_ddmenu_btn02_pane_cp1

0xe6ec,	// (0x0004bac5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6ec,	// (0x0004bac5) cmail_ddmenu_btn02_pane_cp2

0x9687,	// (0x00046a60) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9687,	// (0x00046a60) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0004d206) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0004d206) cmail_ddmenu_btn02_pane_g

0x96a5,	// (0x00046a7e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x96a5,	// (0x00046a7e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0004d20b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0004d20b) cmail_ddmenu_btn02_pane_t

0x9df5,	// (0x000471ce) fps_text_pane_ParamLimits

0x9df5,	// (0x000471ce) fps_text_pane

0x9e02,	// (0x000471db) main_fps_pane_g1_ParamLimits

0x9e02,	// (0x000471db) main_fps_pane_g1

0x9e10,	// (0x000471e9) wait_bar_pane_cp010_ParamLimits

0x9e10,	// (0x000471e9) wait_bar_pane_cp010

0x9e1c,	// (0x000471f5) fps_text_pane_t1_ParamLimits

0x9e1c,	// (0x000471f5) fps_text_pane_t1

0x7404,	// (0x000447dd) cam4_image_uncrop_pane_g1

0x740d,	// (0x000447e6) cam4_image_uncrop_pane_g2

0x7416,	// (0x000447ef) cam4_image_uncrop_pane_g3

0x741f,	// (0x000447f8) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0004ccc7) cam4_image_uncrop_pane_g

0x9c24,	// (0x00046ffd) dia3_listrow_pane_ParamLimits

0xa021,	// (0x000473fa) main_phob2_pane

0x930d,	// (0x000466e6) cell_tport_appsw_pane_cp02_ParamLimits

0x930d,	// (0x000466e6) cell_tport_appsw_pane_cp02

0x931c,	// (0x000466f5) cell_tport_appsw_pane_cp03_ParamLimits

0x931c,	// (0x000466f5) cell_tport_appsw_pane_cp03

0xa021,	// (0x000473fa) phob2_contact_card_pane

0xa021,	// (0x000473fa) phob2_listscroll_pane

0xef82,	// (0x0004c35b) phob2_list_pane

0xef8a,	// (0x0004c363) scroll_pane_cp034

0x9e35,	// (0x0004720e) phob2_cc_data_pane_ParamLimits

0x9e35,	// (0x0004720e) phob2_cc_data_pane

0x9e4f,	// (0x00047228) phob2_cc_listscroll_pane_ParamLimits

0x9e4f,	// (0x00047228) phob2_cc_listscroll_pane

0x9e69,	// (0x00047242) list_double_large_graphic_phob2_pane_ParamLimits

0x9e69,	// (0x00047242) list_double_large_graphic_phob2_pane

0x9e8b,	// (0x00047264) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9e8b,	// (0x00047264) list_double_large_graphic_phob2_pane_g1

0x204c,	// (0x0003f425) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x204c,	// (0x0003f425) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0004d302) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0004d302) list_double_large_graphic_phob2_pane_g

0x2058,	// (0x0003f431) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x2058,	// (0x0003f431) list_double_large_graphic_phob2_pane_t1

0x206e,	// (0x0003f447) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x206e,	// (0x0003f447) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0004d307) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0004d307) list_double_large_graphic_phob2_pane_t

0xa021,	// (0x000473fa) list_highlight_pane_cp024

0x9ea1,	// (0x0004727a) phob2_cc_button_pane

0x9ea9,	// (0x00047282) phob2_cc_data_pane_g1_ParamLimits

0x9ea9,	// (0x00047282) phob2_cc_data_pane_g1

0x9eb5,	// (0x0004728e) phob2_cc_data_pane_g2_ParamLimits

0x9eb5,	// (0x0004728e) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0004d30c) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0004d30c) phob2_cc_data_pane_g

0x9ec1,	// (0x0004729a) phob2_cc_data_pane_t1_ParamLimits

0x9ec1,	// (0x0004729a) phob2_cc_data_pane_t1

0x9ed3,	// (0x000472ac) phob2_cc_data_pane_t2_ParamLimits

0x9ed3,	// (0x000472ac) phob2_cc_data_pane_t2

0x9ee5,	// (0x000472be) phob2_cc_data_pane_t3_ParamLimits

0x9ee5,	// (0x000472be) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0004d311) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0004d311) phob2_cc_data_pane_t

0xef92,	// (0x0004c36b) phob2_cc_list_pane_ParamLimits

0xef92,	// (0x0004c36b) phob2_cc_list_pane

0xd9dd,	// (0x0004adb6) scroll_pane_cp035_ParamLimits

0xd9dd,	// (0x0004adb6) scroll_pane_cp035

0xad62,	// (0x0004813b) bg_button_pane_cp033

0xef9e,	// (0x0004c377) phob2_cc_button_pane_g1

0xefaa,	// (0x0004c383) phob2_cc_button_pane_t1

0xefbf,	// (0x0004c398) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0004d318) phob2_cc_button_pane_t

0x9ef7,	// (0x000472d0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9ef7,	// (0x000472d0) list_double_large_graphic_phob2_cc_pane

0x9f26,	// (0x000472ff) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9f26,	// (0x000472ff) list_double_large_graphic_phob2_cc_pane_g1

0x2083,	// (0x0003f45c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x2083,	// (0x0003f45c) list_double_large_graphic_phob2_cc_pane_g2

0x2092,	// (0x0003f46b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x2092,	// (0x0003f46b) list_double_large_graphic_phob2_cc_pane_g3

0x20a1,	// (0x0003f47a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x20a1,	// (0x0003f47a) list_double_large_graphic_phob2_cc_pane_g4

0x20b2,	// (0x0003f48b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x20b2,	// (0x0003f48b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0004d31d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0004d31d) list_double_large_graphic_phob2_cc_pane_g

0x20c1,	// (0x0003f49a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x20c1,	// (0x0003f49a) list_double_large_graphic_phob2_cc_pane_t1

0x20ea,	// (0x0003f4c3) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x20ea,	// (0x0003f4c3) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0004d328) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0004d328) list_double_large_graphic_phob2_cc_pane_t

0xefd1,	// (0x0004c3aa) list_highlight_pane_cp025_ParamLimits

0xefd1,	// (0x0004c3aa) list_highlight_pane_cp025

0xad62,	// (0x0004813b) bg_button_pane_cp033_ParamLimits

0xef9e,	// (0x0004c377) phob2_cc_button_pane_g1_ParamLimits

0xefaa,	// (0x0004c383) phob2_cc_button_pane_t1_ParamLimits

0xefbf,	// (0x0004c398) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0004d318) phob2_cc_button_pane_t_ParamLimits

0x23ea,	// (0x0003f7c3) popup_wgtman_window

0xd78a,	// (0x0004ab63) scroll_pane_cp038

0x9a04,	// (0x00046ddd) wgtman_btn_pane_cp_01_ParamLimits

0x9a04,	// (0x00046ddd) wgtman_btn_pane_cp_01

0xefdf,	// (0x0004c3b8) wgtman_content_pane

0xefe8,	// (0x0004c3c1) wgtman_heading_pane

0xa021,	// (0x000473fa) bg_heading_pane_cp02

0xeff1,	// (0x0004c3ca) wgtman_heading_pane_g1

0xeff9,	// (0x0004c3d2) wgtman_heading_pane_t1

0xf007,	// (0x0004c3e0) scroll_pane_cp036

0xf00f,	// (0x0004c3e8) wgtman_list_pane

0xf017,	// (0x0004c3f0) wgtman_list_pane_t1_ParamLimits

0xf017,	// (0x0004c3f0) wgtman_list_pane_t1

0x7363,	// (0x0004473c) cam4_grid_pane

0x1241,	// (0x0003e61a) bg_button_pane_cp015_ParamLimits

0x8048,	// (0x00045421) bg_button_pane_cp016_ParamLimits

0x805b,	// (0x00045434) bg_button_pane_cp017_ParamLimits

0x1285,	// (0x0003e65e) popup_vitu2_query_window_g3_ParamLimits

0x1285,	// (0x0003e65e) popup_vitu2_query_window_g3

0x12fe,	// (0x0003e6d7) popup_vitu2_query_window_t6_ParamLimits

0x12fe,	// (0x0003e6d7) popup_vitu2_query_window_t6

0x1329,	// (0x0003e702) popup_vitu2_query_window_t7_ParamLimits

0x1329,	// (0x0003e702) popup_vitu2_query_window_t7

0xea34,	// (0x0004be0d) cam4_grid_pane_g1

0xea3d,	// (0x0004be16) cam4_grid_pane_g2

0xf033,	// (0x0004c40c) cam4_grid_pane_g3

0xf03c,	// (0x0004c415) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0004d32d) cam4_grid_pane_g

0x323f,	// (0x00040618) aid_placing_vt_slider_lsc_ParamLimits

0x357f,	// (0x00040958) vidtel_button_pane_ParamLimits

0x357f,	// (0x00040958) vidtel_button_pane

0xf047,	// (0x0004c420) bg_button_pane_cp034

0x9f37,	// (0x00047310) vidtel_button_pane_g1

0xf051,	// (0x0004c42a) vidtel_button_pane_t1

0xd88c,	// (0x0004ac65) aid_size_vtel_slider_touch

0xd9dd,	// (0x0004adb6) scroll_pane_cp039

0xe186,	// (0x0004b55f) ncim_query_button_pane_cp01_ParamLimits

0xe1a5,	// (0x0004b57e) ncimui_query_pane_g1_ParamLimits

0xad62,	// (0x0004813b) input_focus_pane_cp012_ParamLimits

0xe1ca,	// (0x0004b5a3) ncim_query_entry_pane_t1_ParamLimits

0xd9dd,	// (0x0004adb6) scroll_pane_cp039_ParamLimits

0xb290,	// (0x00048669) navi_pane_bcale_mc_g1

0xb298,	// (0x00048671) navi_pane_bcale_mc_t1

0xe735,	// (0x0004bb0e) main_sp_fs_email_pane_g1

0xe741,	// (0x0004bb1a) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0004d0be) main_sp_fs_email_pane_g

0xe989,	// (0x0004bd62) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe989,	// (0x0004bd62) list_single_cale_mrui_row_pane_g3

0x1f37,	// (0x0003f310) list_single_recal_day_pane_g5_event_pane

0x1f4d,	// (0x0003f326) list_single_recal_day_pane_g7

0xf05f,	// (0x0004c438) list_recal_day_event_pane_cp01

0xf068,	// (0x0004c441) list_recal_vselct_arw_lo_pane_cp01

0xf070,	// (0x0004c449) list_recal_vselct_arw_up_pane_cp01

0xf078,	// (0x0004c451) list_recal_vselct_pane_cp01

0xd89c,	// (0x0004ac75) list_recal_day_event_pane_cp01_g1

0x2113,	// (0x0003f4ec) list_recal_day_event_pane_cp01_t1

0x1f55,	// (0x0003f32e) list_single_recal_day_pane_t1_ParamLimits

0x1f67,	// (0x0003f340) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0004d21b) list_single_recal_day_pane_t_ParamLimits

0xa699,	// (0x00047a72) bg_notes_pane_ParamLimits

0xa786,	// (0x00047b5f) list_notes_pane_ParamLimits

0x2735,	// (0x0003fb0e) scroll_pane_cp06_ParamLimits

0xa7a8,	// (0x00047b81) main_notes_pane_ParamLimits

0xa021,	// (0x000473fa) main_welc_pane

0x9f3f,	// (0x00047318) main_welc_body_pane_ParamLimits

0x9f3f,	// (0x00047318) main_welc_body_pane

0x9f58,	// (0x00047331) main_welc_opti_pane_ParamLimits

0x9f58,	// (0x00047331) main_welc_opti_pane

0x9f8d,	// (0x00047366) main_welc_pane_t1_ParamLimits

0x9f8d,	// (0x00047366) main_welc_pane_t1

0x9fab,	// (0x00047384) main_welc_body_row_pane_ParamLimits

0x9fab,	// (0x00047384) main_welc_body_row_pane

0xdf11,	// (0x0004b2ea) main_welc_opti_row_pane_ParamLimits

0xdf11,	// (0x0004b2ea) main_welc_opti_row_pane

0xf082,	// (0x0004c45b) main_welc_opti_row_pane_g1

0xf08a,	// (0x0004c463) main_welc_opti_row_pane_t1

0xf09a,	// (0x0004c473) main_welc_body_row_pane_t1

0xed69,	// (0x0004c142) popup_notif_wgt_heading_pane

0xed83,	// (0x0004c15c) aid_size_list_notif_wgt_del_ParamLimits

0xed90,	// (0x0004c169) list_notif_wgt_row_pane_g1_ParamLimits

0xed9c,	// (0x0004c175) list_notif_wgt_row_pane_g2_ParamLimits

0xeda8,	// (0x0004c181) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0004d282) list_notif_wgt_row_pane_g_ParamLimits

0xedb5,	// (0x0004c18e) list_notif_wgt_row_pane_t1_ParamLimits

0xedca,	// (0x0004c1a3) list_notif_wgt_row_pane_t2_ParamLimits

0xeddc,	// (0x0004c1b5) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0004d289) list_notif_wgt_row_pane_t_ParamLimits

0x9a97,	// (0x00046e70) listrow_wgtman_pane_g1_ParamLimits

0x9aa4,	// (0x00046e7d) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0004d2b2) listrow_wgtman_pane_g_ParamLimits

0x1ffc,	// (0x0003f3d5) listrow_wgtman_pane_t1_ParamLimits

0x2014,	// (0x0003f3ed) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0004d2b7) listrow_wgtman_pane_t_ParamLimits

0x203a,	// (0x0003f413) wait_bar_pane_cp09_ParamLimits

0xa021,	// (0x000473fa) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0004c482) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0004c48a) popup_notif_wgt_heading_pane_t1

0xa021,	// (0x000473fa) main_vids_pane

0xa021,	// (0x000473fa) vids_listscroll_pane

0x9fd7,	// (0x000473b0) scroll_pane_cp040

0xa021,	// (0x000473fa) vids_list_pane

0x9fe2,	// (0x000473bb) vids_list_double_pane_ParamLimits

0x9fe2,	// (0x000473bb) vids_list_double_pane

0x9ffa,	// (0x000473d3) vids_list_double_pane_g1

0xa003,	// (0x000473dc) vids_list_double_pane_t1

0xa013,	// (0x000473ec) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0004d33b) vids_list_double_pane_t

0xad62,	// (0x0004813b) main_ncimui_pane_ParamLimits

0x8b89,	// (0x00045f62) main_ncimui_pane_g1_ParamLimits

0x8b95,	// (0x00045f6e) main_ncimui_pane_g2_ParamLimits

0x8b95,	// (0x00045f6e) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0004cfc3) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0004cfc3) main_ncimui_pane_g

0x9f73,	// (0x0004734c) main_welc_pane_g1_ParamLimits

0x9f73,	// (0x0004734c) main_welc_pane_g1

0x9f7f,	// (0x00047358) main_welc_pane_g2_ParamLimits

0x9f7f,	// (0x00047358) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0004d336) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0004d336) main_welc_pane_g

0xa699,	// (0x00047a72) listscroll_mce_pane_ParamLimits

0xb3e5,	// (0x000487be) wait_bar_pane_cp10

0xc7fd,	// (0x00049bd6) main_cale_day_pane_ParamLimits

0xc7fd,	// (0x00049bd6) main_cale_week_pane_ParamLimits

0xa699,	// (0x00047a72) main_messa_pane_ParamLimits

0x6797,	// (0x00043b70) main_clock2_btn_pane_ParamLimits

0x6797,	// (0x00043b70) main_clock2_btn_pane

0xcffb,	// (0x0004a3d4) main_clock2_btn_pane_cp01_ParamLimits

0xcffb,	// (0x0004a3d4) main_clock2_btn_pane_cp01

0xe95a,	// (0x0004bd33) list_cale_mrui_pane_ParamLimits

0xee20,	// (0x0004c1f9) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0004d290) main_cf0_pane_g

0x9c41,	// (0x0004701a) area_left_week_number_pane_ParamLimits

0x9c54,	// (0x0004702d) area_top_day_name_pane_ParamLimits

0x9c62,	// (0x0004703b) frame_month_view_pane_ParamLimits

0xef47,	// (0x0004c320) grid_month_view_pane_ParamLimits

0xef55,	// (0x0004c32e) frm_month_g1_ParamLimits

0x9ce0,	// (0x000470b9) frm_month_g2_ParamLimits

0x9cf1,	// (0x000470ca) frm_month_g3_ParamLimits

0x9d02,	// (0x000470db) frm_month_g4_ParamLimits

0x9d13,	// (0x000470ec) frm_month_g5_ParamLimits

0x9d26,	// (0x000470ff) frm_month_g6_ParamLimits

0x9d39,	// (0x00047112) frm_month_g7_ParamLimits

0xef62,	// (0x0004c33b) frm_month_g8_ParamLimits

0x9d4c,	// (0x00047125) frm_month_g9_ParamLimits

0x9d59,	// (0x00047132) frm_month_g10_ParamLimits

0x9d66,	// (0x0004713f) frm_month_g11_ParamLimits

0x9d73,	// (0x0004714c) frm_month_g12_ParamLimits

0x9d80,	// (0x00047159) frm_month_g13_ParamLimits

0x9d8d,	// (0x00047166) frm_month_g14_ParamLimits

0x9d9c,	// (0x00047175) frm_month_g15_ParamLimits

0x9dab,	// (0x00047184) frm_month_g16_ParamLimits

0xff08,	// (0x0004d2e1) frm_month_g_ParamLimits

0xef6f,	// (0x0004c348) cell_top_day_name_pane_t1_ParamLimits

0x9dba,	// (0x00047193) cell_area_left_week_number_pane_g1_ParamLimits

0x9dc9,	// (0x000471a2) cell_area_left_week_number_pane_t1_ParamLimits

0xce73,	// (0x0004a24c) cell_month_view_pane_g1_ParamLimits

0x9ddf,	// (0x000471b8) cell_month_view_pane_t1_ParamLimits

0xa691,	// (0x00047a6a) main_clock2_btn_pane_g1

0xf0bf,	// (0x0004c498) main_clock2_btn_pane_t1

0xad62,	// (0x0004813b) listscroll_cmail_pane_ParamLimits

0xe735,	// (0x0004bb0e) main_sp_fs_email_pane_g1_ParamLimits

0xe741,	// (0x0004bb1a) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0004d0be) main_sp_fs_email_pane_g_ParamLimits

0xeb0a,	// (0x0004bee3) list_recal_day_pane_ParamLimits

0xeb1b,	// (0x0004bef4) mian_recal_day_pane_t1

0x18fe,	// (0x0003ecd7) list_single_dyc_row_text_pane_t4_ParamLimits

0x18fe,	// (0x0003ecd7) list_single_dyc_row_text_pane_t4

0x1935,	// (0x0003ed0e) list_single_dyc_row_text_pane_t5_ParamLimits

0x1935,	// (0x0003ed0e) list_single_dyc_row_text_pane_t5

0x19ab,	// (0x0003ed84) list_single_dyc_row_text_pane_t6_ParamLimits

0x19ab,	// (0x0003ed84) list_single_dyc_row_text_pane_t6

0xad80,	// (0x00048159) aid_mgn_list_cale_time_pane

0xad62,	// (0x0004813b) main_gallery2_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
