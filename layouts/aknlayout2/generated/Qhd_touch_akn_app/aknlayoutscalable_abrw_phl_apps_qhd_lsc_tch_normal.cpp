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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00025b88 };

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
0x1f58,	// (0x00027ae0) Screen

0x1f64,	// (0x00027aec) application_window

0x1fce,	// (0x00027b56) area_bottom_pane_ParamLimits

0x1fce,	// (0x00027b56) area_bottom_pane

0x202b,	// (0x00027bb3) area_top_pane_ParamLimits

0x202b,	// (0x00027bb3) area_top_pane

0x2088,	// (0x00027c10) call_video_uplink_pane_ParamLimits

0x2088,	// (0x00027c10) call_video_uplink_pane

0x20b4,	// (0x00027c3c) main_pane_ParamLimits

0x20b4,	// (0x00027c3c) main_pane

0xbf05,	// (0x00031a8d) context_pane

0x6957,	// (0x0002c4df) navi_pane

0x697f,	// (0x0002c507) popup_cale_events_window_ParamLimits

0x697f,	// (0x0002c507) popup_cale_events_window

0xbf18,	// (0x00031aa0) popup_mup_playback_window

0x6997,	// (0x0002c51f) signal_pane

0x2bda,	// (0x00028762) main_browser_pane

0x51b5,	// (0x0002ad3d) main_burst_pane

0x66a9,	// (0x0002c231) main_calc_pane

0x51b5,	// (0x0002ad3d) main_cale_day_pane

0x2bda,	// (0x00028762) main_cale_month_pane

0x51b5,	// (0x0002ad3d) main_cale_week_pane

0x51b5,	// (0x0002ad3d) main_call_pane

0x26ad,	// (0x00028235) main_call_poc_pane

0x51b5,	// (0x0002ad3d) main_camera_pane

0x51b5,	// (0x0002ad3d) main_chi_dic_pane

0x4d34,	// (0x0002a8bc) main_clock_pane

0x26ad,	// (0x00028235) main_fmradio_pane

0x51b5,	// (0x0002ad3d) main_graph_messa_pane

0x26ad,	// (0x00028235) main_help_pane

0x2bda,	// (0x00028762) main_im_pane

0x2908,	// (0x00028490) main_image_pane_ParamLimits

0x2908,	// (0x00028490) main_image_pane

0x26ad,	// (0x00028235) main_location2_pane

0x51b5,	// (0x0002ad3d) main_location_pane

0x26ad,	// (0x00028235) main_messa_pane

0x26ad,	// (0x00028235) main_mp2_pane

0x51b5,	// (0x0002ad3d) main_mp_pane

0x26ad,	// (0x00028235) main_msg_pane

0x26ad,	// (0x00028235) main_mup_eq_pane

0x26ad,	// (0x00028235) main_mup_pane

0x51b5,	// (0x0002ad3d) main_notes_pane

0x26ad,	// (0x00028235) main_pec_pane

0x26ad,	// (0x00028235) main_phob_pane

0x26ad,	// (0x00028235) main_pinb_pane

0x26ad,	// (0x00028235) main_postcard_pane

0x26ad,	// (0x00028235) main_qdial_pane

0x51b5,	// (0x0002ad3d) main_skin_pane

0x26ad,	// (0x00028235) main_smil2_pane

0x51b5,	// (0x0002ad3d) main_smil_pane

0x51b5,	// (0x0002ad3d) main_video_pane

0x51b5,	// (0x0002ad3d) main_video_tele_pane

0x2908,	// (0x00028490) main_viewer_pane_ParamLimits

0x2908,	// (0x00028490) main_viewer_pane

0x51b5,	// (0x0002ad3d) main_vorec_pane

0x66fd,	// (0x0002c285) popup_blid_sat_info_window_ParamLimits

0x66fd,	// (0x0002c285) popup_blid_sat_info_window

0x6755,	// (0x0002c2dd) popup_dyc_status_message_window_ParamLimits

0x6755,	// (0x0002c2dd) popup_dyc_status_message_window

0x676f,	// (0x0002c2f7) popup_grid_large_graphic_window_ParamLimits

0x676f,	// (0x0002c2f7) popup_grid_large_graphic_window

0x682b,	// (0x0002c3b3) popup_loc_request_window_ParamLimits

0x682b,	// (0x0002c3b3) popup_loc_request_window

0x692f,	// (0x0002c4b7) popup_wml_address_window_ParamLimits

0x692f,	// (0x0002c4b7) popup_wml_address_window

0x64e3,	// (0x0002c06b) call_muted_g1

0x5f20,	// (0x0002baa8) popup_call_audio_conf_window_ParamLimits

0x5f20,	// (0x0002baa8) popup_call_audio_conf_window

0x64f7,	// (0x0002c07f) popup_call_audio_first_window_ParamLimits

0x64f7,	// (0x0002c07f) popup_call_audio_first_window

0x656d,	// (0x0002c0f5) popup_call_audio_in_window_ParamLimits

0x656d,	// (0x0002c0f5) popup_call_audio_in_window

0x65a9,	// (0x0002c131) popup_call_audio_out_window_ParamLimits

0x65a9,	// (0x0002c131) popup_call_audio_out_window

0x65e3,	// (0x0002c16b) popup_call_audio_second_window_ParamLimits

0x65e3,	// (0x0002c16b) popup_call_audio_second_window

0x6639,	// (0x0002c1c1) popup_call_audio_wait_window_ParamLimits

0x6639,	// (0x0002c1c1) popup_call_audio_wait_window

0x666e,	// (0x0002c1f6) popup_number_entry_window_ParamLimits

0x666e,	// (0x0002c1f6) popup_number_entry_window

0x2242,	// (0x00027dca) bg_popup_call_pane_cp05_ParamLimits

0x2242,	// (0x00027dca) bg_popup_call_pane_cp05

0x2262,	// (0x00027dea) popup_number_entry_window_t1

0x2275,	// (0x00027dfd) popup_number_entry_window_t2

0x2287,	// (0x00027e0f) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00034c74) popup_number_entry_window_t

0x22cd,	// (0x00027e55) text_title_cp2

0x22e0,	// (0x00027e68) bg_popup_call_pane_cp_ParamLimits

0x22e0,	// (0x00027e68) bg_popup_call_pane_cp

0x22ee,	// (0x00027e76) call_thumbnail_pane

0x22f6,	// (0x00027e7e) popup_call_audio_in_window_g1_ParamLimits

0x22f6,	// (0x00027e7e) popup_call_audio_in_window_g1

0x2302,	// (0x00027e8a) popup_call_audio_in_window_g2_ParamLimits

0x2302,	// (0x00027e8a) popup_call_audio_in_window_g2

0x230e,	// (0x00027e96) popup_call_audio_in_window_g3_ParamLimits

0x230e,	// (0x00027e96) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00034c7d) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00034c7d) popup_call_audio_in_window_g

0x231a,	// (0x00027ea2) popup_call_audio_in_window_t1_ParamLimits

0x231a,	// (0x00027ea2) popup_call_audio_in_window_t1

0x2336,	// (0x00027ebe) popup_call_audio_in_window_t2_ParamLimits

0x2336,	// (0x00027ebe) popup_call_audio_in_window_t2

0x2352,	// (0x00027eda) popup_call_audio_in_window_t3_ParamLimits

0x2352,	// (0x00027eda) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00034c84) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00034c84) popup_call_audio_in_window_t

0x22e0,	// (0x00027e68) bg_popup_call_pane_cp01_ParamLimits

0x22e0,	// (0x00027e68) bg_popup_call_pane_cp01

0x22ee,	// (0x00027e76) call_thumbnail_pane_cp02

0x2365,	// (0x00027eed) call_type_pane_cp022

0x236d,	// (0x00027ef5) popup_call_audio_out_window_g1_ParamLimits

0x236d,	// (0x00027ef5) popup_call_audio_out_window_g1

0x237f,	// (0x00027f07) popup_call_audio_out_window_g2_ParamLimits

0x237f,	// (0x00027f07) popup_call_audio_out_window_g2

0x238b,	// (0x00027f13) popup_call_audio_out_window_g3_ParamLimits

0x238b,	// (0x00027f13) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00034c8b) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00034c8b) popup_call_audio_out_window_g

0x239d,	// (0x00027f25) popup_call_audio_out_window_t1_ParamLimits

0x239d,	// (0x00027f25) popup_call_audio_out_window_t1

0x23b5,	// (0x00027f3d) popup_call_audio_out_window_t2_ParamLimits

0x23b5,	// (0x00027f3d) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00034c92) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00034c92) popup_call_audio_out_window_t

0x23ca,	// (0x00027f52) bg_popup_call_pane_ParamLimits

0x23ca,	// (0x00027f52) bg_popup_call_pane

0x244e,	// (0x00027fd6) call_thumbnail_pane_cp_ParamLimits

0x244e,	// (0x00027fd6) call_thumbnail_pane_cp

0x2472,	// (0x00027ffa) call_type_pane_cp01_ParamLimits

0x2472,	// (0x00027ffa) call_type_pane_cp01

0x24b6,	// (0x0002803e) popup_call_audio_first_window_g1_ParamLimits

0x24b6,	// (0x0002803e) popup_call_audio_first_window_g1

0x2502,	// (0x0002808a) popup_call_audio_first_window_g2_ParamLimits

0x2502,	// (0x0002808a) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00034c97) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00034c97) popup_call_audio_first_window_g

0x2546,	// (0x000280ce) popup_call_audio_first_window_t1_ParamLimits

0x2546,	// (0x000280ce) popup_call_audio_first_window_t1

0x25f2,	// (0x0002817a) popup_call_audio_first_window_t4_ParamLimits

0x25f2,	// (0x0002817a) popup_call_audio_first_window_t4

0x267e,	// (0x00028206) popup_call_audio_first_window_t5_ParamLimits

0x267e,	// (0x00028206) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00034c9c) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00034c9c) popup_call_audio_first_window_t

0x26ad,	// (0x00028235) bg_popup_call_pane_cp02

0x26b7,	// (0x0002823f) call_type_pane_cp023

0x26bf,	// (0x00028247) popup_call_audio_wait_window_g1

0x26c7,	// (0x0002824f) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00034ca3) popup_call_audio_wait_window_g

0x26cf,	// (0x00028257) popup_call_audio_wait_window_t3

0x26dd,	// (0x00028265) bg_popup_call_pane_cp03_ParamLimits

0x26dd,	// (0x00028265) bg_popup_call_pane_cp03

0x273d,	// (0x000282c5) call_thumbnail_pane_cp011_ParamLimits

0x273d,	// (0x000282c5) call_thumbnail_pane_cp011

0x2749,	// (0x000282d1) call_type_pane_cp034_ParamLimits

0x2749,	// (0x000282d1) call_type_pane_cp034

0x2785,	// (0x0002830d) popup_call_audio_second_window_g1_ParamLimits

0x2785,	// (0x0002830d) popup_call_audio_second_window_g1

0x27c1,	// (0x00028349) popup_call_audio_second_window_g2_ParamLimits

0x27c1,	// (0x00028349) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00034ca8) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00034ca8) popup_call_audio_second_window_g

0x27fd,	// (0x00028385) popup_call_audio_second_window_t1_ParamLimits

0x27fd,	// (0x00028385) popup_call_audio_second_window_t1

0x287e,	// (0x00028406) popup_call_audio_second_window_t2_ParamLimits

0x287e,	// (0x00028406) popup_call_audio_second_window_t2

0x28b4,	// (0x0002843c) popup_call_audio_second_window_t3_ParamLimits

0x28b4,	// (0x0002843c) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00034cad) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00034cad) popup_call_audio_second_window_t

0x26ad,	// (0x00028235) bg_popup_call_pane_cp04

0x28ea,	// (0x00028472) list_conf_pane

0x28f2,	// (0x0002847a) popup_call_audio_conf_window_t1

0x2900,	// (0x00028488) call_thumbnail_pane_g1

0x2908,	// (0x00028490) bg_pinb_pane_ParamLimits

0x2908,	// (0x00028490) bg_pinb_pane

0x2916,	// (0x0002849e) find_pinb_pane

0x291f,	// (0x000284a7) listscroll_pinb_pane_ParamLimits

0x291f,	// (0x000284a7) listscroll_pinb_pane

0x292e,	// (0x000284b6) pinb_bg_pane_g1

0x2938,	// (0x000284c0) pinb_bg_pane_g2

0x2944,	// (0x000284cc) pinb_bg_pane_g3

0x2950,	// (0x000284d8) pinb_bg_pane_g4

0x295c,	// (0x000284e4) pinb_bg_pane_g5

0x2968,	// (0x000284f0) pinb_bg_pane_g6

0x2973,	// (0x000284fb) pinb_bg_pane_g7

0x297e,	// (0x00028506) pinb_bg_pane_g8

0x2989,	// (0x00028511) pinb_bg_pane_g9

0x2993,	// (0x0002851b) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00034cb4) pinb_bg_pane_g

0x29b0,	// (0x00028538) grid_pinb_pane

0x29b9,	// (0x00028541) list_pinb_pane

0x29c2,	// (0x0002854a) scroll_pane_cp01_ParamLimits

0x29c2,	// (0x0002854a) scroll_pane_cp01

0x29d4,	// (0x0002855c) find_pinb_pane_g1_ParamLimits

0x29d4,	// (0x0002855c) find_pinb_pane_g1

0x29ec,	// (0x00028574) find_pinb_pane_t1

0x29fe,	// (0x00028586) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00034cce) find_pinb_pane_t

0x2a13,	// (0x0002859b) input_focus_pane_cp01_ParamLimits

0x2a13,	// (0x0002859b) input_focus_pane_cp01

0x2a1f,	// (0x000285a7) cell_pinb_pane_ParamLimits

0x2a1f,	// (0x000285a7) cell_pinb_pane

0x2a48,	// (0x000285d0) cell_pinb_pane_g1_ParamLimits

0x2a48,	// (0x000285d0) cell_pinb_pane_g1

0x2a58,	// (0x000285e0) cell_pinb_pane_g2_ParamLimits

0x2a58,	// (0x000285e0) cell_pinb_pane_g2

0x2a64,	// (0x000285ec) cell_pinb_pane_g3_ParamLimits

0x2a64,	// (0x000285ec) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00034cd3) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00034cd3) cell_pinb_pane_g

0x26ad,	// (0x00028235) grid_highlight_pane_cp01

0x2a70,	// (0x000285f8) list_pinb_item_pane_ParamLimits

0x2a70,	// (0x000285f8) list_pinb_item_pane

0x26ad,	// (0x00028235) list_highlight_pane_cp02

0x2a82,	// (0x0002860a) list_pinb_item_pane_g1_ParamLimits

0x2a82,	// (0x0002860a) list_pinb_item_pane_g1

0x2a8f,	// (0x00028617) list_pinb_item_pane_g2_ParamLimits

0x2a8f,	// (0x00028617) list_pinb_item_pane_g2

0x2a9b,	// (0x00028623) list_pinb_item_pane_g3_ParamLimits

0x2a9b,	// (0x00028623) list_pinb_item_pane_g3

0x2aac,	// (0x00028634) list_pinb_item_pane_g4_ParamLimits

0x2aac,	// (0x00028634) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00034cda) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00034cda) list_pinb_item_pane_g

0x2ab8,	// (0x00028640) list_pinb_item_pane_t1_ParamLimits

0x2ab8,	// (0x00028640) list_pinb_item_pane_t1

0x0d39,	// (0x000268c1) calc_display_pane

0x0d61,	// (0x000268e9) calc_paper_pane

0x0d84,	// (0x0002690c) grid_calc_pane

0x26ad,	// (0x00028235) bg_list_pane_cp01

0x2acf,	// (0x00028657) clock_g1

0x2ad7,	// (0x0002865f) clock_g2

0x0001,

0xf15b,	// (0x00034ce3) clock_g

0x2adf,	// (0x00028667) clock_t1_ParamLimits

0x2adf,	// (0x00028667) clock_t1

0x2af4,	// (0x0002867c) clock_t2_ParamLimits

0x2af4,	// (0x0002867c) clock_t2

0x2b06,	// (0x0002868e) clock_t3_ParamLimits

0x2b06,	// (0x0002868e) clock_t3

0x2b18,	// (0x000286a0) clock_t4_ParamLimits

0x2b18,	// (0x000286a0) clock_t4

0x2b2a,	// (0x000286b2) clock_t5_ParamLimits

0x2b2a,	// (0x000286b2) clock_t5

0x2b3f,	// (0x000286c7) clock_t6_ParamLimits

0x2b3f,	// (0x000286c7) clock_t6

0x2b51,	// (0x000286d9) clock_t7_ParamLimits

0x2b51,	// (0x000286d9) clock_t7

0x2b63,	// (0x000286eb) clock_t8_ParamLimits

0x2b63,	// (0x000286eb) clock_t8

0x2b77,	// (0x000286ff) clock_t9_ParamLimits

0x2b77,	// (0x000286ff) clock_t9

0x0008,

0xf160,	// (0x00034ce8) clock_t_ParamLimits

0xf160,	// (0x00034ce8) clock_t

0x2b8b,	// (0x00028713) popup_clock_analogue_window_cp02

0x2b8b,	// (0x00028713) popup_clock_digital_window_cp01

0x2b93,	// (0x0002871b) listscroll_help_pane

0x26ad,	// (0x00028235) phob_pre_status_pane

0x2b9d,	// (0x00028725) grid_qdial_pane

0x26ad,	// (0x00028235) listscroll_mce_pane

0x2ba7,	// (0x0002872f) bg_notes_pane

0x2bb1,	// (0x00028739) list_notes_pane

0x2bbb,	// (0x00028743) scroll_pane_cp06

0x2bc6,	// (0x0002874e) bg_calc_paper_pane

0xafc1,	// (0x00030b49) list_calc_pane

0x2bda,	// (0x00028762) bg_calc_display_pane

0x0dae,	// (0x00026936) calc_display_pane_t1

0x0dc0,	// (0x00026948) calc_display_pane_t2

0xafdb,	// (0x00030b63) calc_display_pane_t3

0x0002,

0xf173,	// (0x00034cfb) calc_display_pane_t

0x0dd2,	// (0x0002695a) cell_calc_pane_ParamLimits

0x0dd2,	// (0x0002695a) cell_calc_pane

0x2be6,	// (0x0002876e) bg_calc_paper_pane_g1

0x2bf2,	// (0x0002877a) bg_calc_paper_pane_g2

0x2bfe,	// (0x00028786) bg_calc_paper_pane_g3

0x2c0a,	// (0x00028792) bg_calc_paper_pane_g4

0x2c16,	// (0x0002879e) bg_calc_paper_pane_g5

0x2c22,	// (0x000287aa) bg_calc_paper_pane_g6

0x2c31,	// (0x000287b9) bg_calc_paper_pane_g7

0x2c40,	// (0x000287c8) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00034d02) bg_calc_paper_pane_g

0x2c53,	// (0x000287db) calc_bg_paper_pane_g9

0x2c66,	// (0x000287ee) list_calc_item_pane_ParamLimits

0x2c66,	// (0x000287ee) list_calc_item_pane

0x2c79,	// (0x00028801) list_calc_item_pane_g1

0xafed,	// (0x00030b75) list_calc_item_pane_t1_ParamLimits

0xafed,	// (0x00030b75) list_calc_item_pane_t1

0x0e07,	// (0x0002698f) list_calc_item_pane_t2_ParamLimits

0x0e07,	// (0x0002698f) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00034d13) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00034d13) list_calc_item_pane_t

0x2c86,	// (0x0002880e) cell_calc_pane_g1

0x2c90,	// (0x00028818) grid_highlight_pane_cp02

0x2cb2,	// (0x0002883a) bg_calc_display_pane_g1

0x0e39,	// (0x000269c1) bg_calc_display_pane_g2

0x2cbb,	// (0x00028843) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00034d1d) bg_calc_display_pane_g

0x0e43,	// (0x000269cb) cell_qdial_pane_ParamLimits

0x0e43,	// (0x000269cb) cell_qdial_pane

0x2cc4,	// (0x0002884c) cell_qdial_pane_g1_ParamLimits

0x2cc4,	// (0x0002884c) cell_qdial_pane_g1

0x2cda,	// (0x00028862) cell_qdial_pane_g2_ParamLimits

0x2cda,	// (0x00028862) cell_qdial_pane_g2

0x2ceb,	// (0x00028873) cell_qdial_pane_g3_ParamLimits

0x2ceb,	// (0x00028873) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00034d24) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00034d24) cell_qdial_pane_g

0x2d0d,	// (0x00028895) cell_qdial_pane_t1_ParamLimits

0x2d0d,	// (0x00028895) cell_qdial_pane_t1

0x2d25,	// (0x000288ad) cell_qdial_pane_t2_ParamLimits

0x2d25,	// (0x000288ad) cell_qdial_pane_t2

0x2d38,	// (0x000288c0) cell_qdial_pane_t3_ParamLimits

0x2d38,	// (0x000288c0) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00034d2d) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00034d2d) cell_qdial_pane_t

0x26ad,	// (0x00028235) grid_highlight_pane_cp04

0x2d4b,	// (0x000288d3) thumbnail_qdial_pane_ParamLimits

0x2d4b,	// (0x000288d3) thumbnail_qdial_pane

0x2da7,	// (0x0002892f) list_help_pane

0x2db0,	// (0x00028938) scroll_pane_cp02

0x2db9,	// (0x00028941) help_list_pane_t1_ParamLimits

0x2db9,	// (0x00028941) help_list_pane_t1

0xafff,	// (0x00030b87) bg_notes_pane_g2

0xb007,	// (0x00030b8f) bg_notes_pane_g3

0xb00f,	// (0x00030b97) notes_bg_pane_g1

0xb017,	// (0x00030b9f) notes_bg_pane_g4

0xb01f,	// (0x00030ba7) notes_bg_pane_g5

0xb027,	// (0x00030baf) notes_bg_pane_g6

0xb02f,	// (0x00030bb7) notes_bg_pane_g7

0xb037,	// (0x00030bbf) notes_bg_pane_g8

0xb03f,	// (0x00030bc7) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00034d4b) notes_bg_pane_g

0x2dd6,	// (0x0002895e) list_notes_text_pane_ParamLimits

0x2dd6,	// (0x0002895e) list_notes_text_pane

0x2deb,	// (0x00028973) list_notes_text_pane_g1

0x2df4,	// (0x0002897c) list_notes_text_pane_t1

0x2bda,	// (0x00028762) listscroll_cale_week_pane

0x2e30,	// (0x000289b8) bg_cale_heading_pane

0x2e44,	// (0x000289cc) bg_cale_pane_cp01

0x2e5d,	// (0x000289e5) cale_week_corner_pane

0x2e73,	// (0x000289fb) cale_week_day_heading_pane

0x2e87,	// (0x00028a0f) cale_week_scroll_pane_g1

0x2e98,	// (0x00028a20) cale_week_scroll_pane_g2

0x2ea9,	// (0x00028a31) cale_week_scroll_pane_g3

0x2eba,	// (0x00028a42) cale_week_scroll_pane_g4

0x2ecb,	// (0x00028a53) cale_week_scroll_pane_g5

0x2ede,	// (0x00028a66) cale_week_scroll_pane_g6

0x2ef1,	// (0x00028a79) cale_week_scroll_pane_g7

0x2f04,	// (0x00028a8c) cale_week_scroll_pane_g8

0x2f17,	// (0x00028a9f) cale_week_scroll_pane_g9

0x2f28,	// (0x00028ab0) cale_week_scroll_pane_g10

0x2f39,	// (0x00028ac1) cale_week_scroll_pane_g11

0x2f4a,	// (0x00028ad2) cale_week_scroll_pane_g12

0x2f5b,	// (0x00028ae3) cale_week_scroll_pane_g13

0x2f6c,	// (0x00028af4) cale_week_scroll_pane_g14

0x2f7d,	// (0x00028b05) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00034d5a) cale_week_scroll_pane_g

0x2f8e,	// (0x00028b16) cale_week_time_pane

0x2fa1,	// (0x00028b29) grid_cale_week_pane

0x2fc8,	// (0x00028b50) scroll_pane_cp08

0x2fe2,	// (0x00028b6a) cell_cale_week_pane_ParamLimits

0x2fe2,	// (0x00028b6a) cell_cale_week_pane

0x3022,	// (0x00028baa) cale_week_day_heading_pane_t1

0x304f,	// (0x00028bd7) cale_week_day_heading_pane_t2

0x307c,	// (0x00028c04) cale_week_day_heading_pane_t3

0x30a9,	// (0x00028c31) cale_week_day_heading_pane_t4

0x30d6,	// (0x00028c5e) cale_week_day_heading_pane_t5

0x3103,	// (0x00028c8b) cale_week_day_heading_pane_t6

0x3132,	// (0x00028cba) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00034d79) cale_week_day_heading_pane_t

0x315f,	// (0x00028ce7) bg_cale_side_pane

0x0e57,	// (0x000269df) cale_week_time_pane_t1

0x0e6f,	// (0x000269f7) cale_week_time_pane_t2

0x0e87,	// (0x00026a0f) cale_week_time_pane_t3

0x0e9f,	// (0x00026a27) cale_week_time_pane_t4

0x0eb7,	// (0x00026a3f) cale_week_time_pane_t5

0x0ecf,	// (0x00026a57) cale_week_time_pane_t6

0x0ee7,	// (0x00026a6f) cale_week_time_pane_t7

0x0eff,	// (0x00026a87) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00034d88) cale_week_time_pane_t

0x316d,	// (0x00028cf5) cell_cale_week_pane_g2

0x3186,	// (0x00028d0e) cell_cale_week_pane_g3_ParamLimits

0x3186,	// (0x00028d0e) cell_cale_week_pane_g3

0x319e,	// (0x00028d26) grid_highlight_pane_cp07

0x31a6,	// (0x00028d2e) listscroll_gms_pane

0x31b0,	// (0x00028d38) grid_gms_pane

0x31b9,	// (0x00028d41) listscroll_gms_pane_g1

0x31c1,	// (0x00028d49) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00034d99) listscroll_gms_pane_g

0x31c9,	// (0x00028d51) scroll_pane_cp010

0x31d4,	// (0x00028d5c) cell_gms_pane_ParamLimits

0x31d4,	// (0x00028d5c) cell_gms_pane

0x31e7,	// (0x00028d6f) cell_gms_pane_g1

0x31ef,	// (0x00028d77) cell_gms_pane_g2

0x31f7,	// (0x00028d7f) cell_gms_pane_g3

0x3200,	// (0x00028d88) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00034d9e) cell_gms_pane_g

0x3209,	// (0x00028d91) grid_highlight_pane_cp09

0x648d,	// (0x0002c015) phob_pre_status_pane_g1

0x6495,	// (0x0002c01d) phob_pre_status_pane_g2

0x649d,	// (0x0002c025) phob_pre_status_pane_g3

0x64a5,	// (0x0002c02d) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0003518d) phob_pre_status_pane_g

0x64b5,	// (0x0002c03d) phob_pre_status_pane_t1

0x64c3,	// (0x0002c04b) phob_pre_status_pane_t2

0x64d3,	// (0x0002c05b) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00035198) phob_pre_status_pane_t

0x26ad,	// (0x00028235) bg_list_pane_cp05

0x0f1f,	// (0x00026aa7) grid_vorec_pane

0xb047,	// (0x00030bcf) vorec_t1

0xb055,	// (0x00030bdd) vorec_t2

0xb063,	// (0x00030beb) vorec_t3

0xb071,	// (0x00030bf9) vorec_t4

0xb07f,	// (0x00030c07) vorec_t5

0xb08d,	// (0x00030c15) vorec_t6

0x0006,

0xf21f,	// (0x00034da7) vorec_t

0xb0a9,	// (0x00030c31) wait_bar_pane_cp01

0x3211,	// (0x00028d99) cell_vorec_pane_ParamLimits

0x3211,	// (0x00028d99) cell_vorec_pane

0x3224,	// (0x00028dac) cell_vorec_pane_g1

0x26ad,	// (0x00028235) grid_highlight_pane_cp05

0x3246,	// (0x00028dce) cams_zoom_pane

0x3255,	// (0x00028ddd) image_vga_pane

0x326f,	// (0x00028df7) main_camera_pane_g1

0x3281,	// (0x00028e09) main_camera_pane_g2

0x3291,	// (0x00028e19) main_camera_pane_g3

0x32a1,	// (0x00028e29) main_camera_pane_g4

0x32b1,	// (0x00028e39) main_camera_pane_g5

0x32c1,	// (0x00028e49) main_camera_pane_g6

0x32d3,	// (0x00028e5b) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00034db6) main_camera_pane_g

0x32ef,	// (0x00028e77) main_camera_pane_t1

0x3305,	// (0x00028e8d) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00034dc7) main_camera_pane_t

0x333f,	// (0x00028ec7) cams_zoom_pane_cp_ParamLimits

0x333f,	// (0x00028ec7) cams_zoom_pane_cp

0x3367,	// (0x00028eef) image_cif_pane_ParamLimits

0x3367,	// (0x00028eef) image_cif_pane

0x33a2,	// (0x00028f2a) image_subqcif_pane

0x33aa,	// (0x00028f32) main_video_pane_g1_ParamLimits

0x33aa,	// (0x00028f32) main_video_pane_g1

0x33ce,	// (0x00028f56) main_video_pane_g2_ParamLimits

0x33ce,	// (0x00028f56) main_video_pane_g2

0x3402,	// (0x00028f8a) main_video_pane_g3_ParamLimits

0x3402,	// (0x00028f8a) main_video_pane_g3

0x3430,	// (0x00028fb8) main_video_pane_g4_ParamLimits

0x3430,	// (0x00028fb8) main_video_pane_g4

0x345e,	// (0x00028fe6) main_video_pane_g5_ParamLimits

0x345e,	// (0x00028fe6) main_video_pane_g5

0x347a,	// (0x00029002) main_video_pane_g6_ParamLimits

0x347a,	// (0x00029002) main_video_pane_g6

0x0006,

0xf244,	// (0x00034dcc) main_video_pane_g_ParamLimits

0xf244,	// (0x00034dcc) main_video_pane_g

0x34a5,	// (0x0002902d) main_video_pane_t1_ParamLimits

0x34a5,	// (0x0002902d) main_video_pane_t1

0x34ee,	// (0x00029076) cams_zoom_pane_g1

0x34f7,	// (0x0002907f) cams_zoom_pane_g2

0x3500,	// (0x00029088) cams_zoom_pane_g3

0x3509,	// (0x00029091) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00034ddb) cams_zoom_pane_g

0x3526,	// (0x000290ae) grid_cams_pane

0x3540,	// (0x000290c8) linegrid_cams_pane

0x3554,	// (0x000290dc) cell_cams_pane_ParamLimits

0x3554,	// (0x000290dc) cell_cams_pane

0x3574,	// (0x000290fc) cams_burst_image_pane

0x357c,	// (0x00029104) cell_cams_pane_g1

0x26ad,	// (0x00028235) grid_highlight_pane_cp03

0x2c86,	// (0x0002880e) mp_bg_pane_g1

0x26ad,	// (0x00028235) bg_list_pane_cp03

0xbddd,	// (0x00031965) bg_mp_pane

0xbde5,	// (0x0003196d) grid_mp_pane

0xbded,	// (0x00031975) media_player_g1

0xbdf5,	// (0x0003197d) media_player_t1

0xbe03,	// (0x0003198b) media_player_t2

0xbe11,	// (0x00031999) media_player_t3

0xbe1f,	// (0x000319a7) media_player_t4

0xbe2d,	// (0x000319b5) media_player_t5

0xbe3b,	// (0x000319c3) media_player_t6

0xbe49,	// (0x000319d1) media_player_t7

0x0006,

0xf5ef,	// (0x00035177) media_player_t

0xbe57,	// (0x000319df) wait_bar_pane_cp02

0xf5d4,	// (0x0003515c) main_usb_pane_t

0x6484,	// (0x0002c00c) cell_mp_pane

0x2c86,	// (0x0002880e) cell_mp_pane_g1

0x26ad,	// (0x00028235) grid_highlight_pane_cp06

0x3676,	// (0x000291fe) grid_skin_colour_pane

0x367e,	// (0x00029206) list_highlight_pane_cp03

0x3686,	// (0x0002920e) skin_g1

0x368e,	// (0x00029216) skin_t1

0x369d,	// (0x00029225) skin_t2

0x0001,

0xf288,	// (0x00034e10) skin_t

0x36ab,	// (0x00029233) cell_skin_colour_pane_ParamLimits

0x36ab,	// (0x00029233) cell_skin_colour_pane

0x36cb,	// (0x00029253) cell_skin_colour_pane_g1

0x3734,	// (0x000292bc) call_video_g1_ParamLimits

0x3734,	// (0x000292bc) call_video_g1

0x3750,	// (0x000292d8) call_video_g2_ParamLimits

0x3750,	// (0x000292d8) call_video_g2

0x0001,

0xf28d,	// (0x00034e15) call_video_g_ParamLimits

0xf28d,	// (0x00034e15) call_video_g

0x37a2,	// (0x0002932a) call_video_uplink_pane_cp1_ParamLimits

0x37a2,	// (0x0002932a) call_video_uplink_pane_cp1

0x3807,	// (0x0002938f) call_video_uplink_pane_cp2

0x3849,	// (0x000293d1) video_down_crop_pane_ParamLimits

0x3849,	// (0x000293d1) video_down_crop_pane

0x3940,	// (0x000294c8) video_down_pane_ParamLimits

0x3940,	// (0x000294c8) video_down_pane

0x3a37,	// (0x000295bf) video_down_subqcif_pane_ParamLimits

0x3a37,	// (0x000295bf) video_down_subqcif_pane

0x3a4f,	// (0x000295d7) video_down_subqcif_pane_cp_ParamLimits

0x3a4f,	// (0x000295d7) video_down_subqcif_pane_cp

0x3a8a,	// (0x00029612) im_reading_pane_ParamLimits

0x3a8a,	// (0x00029612) im_reading_pane

0x3a9c,	// (0x00029624) im_writing_pane_ParamLimits

0x3a9c,	// (0x00029624) im_writing_pane

0x3aba,	// (0x00029642) im_reading_pane_t1

0x3af3,	// (0x0002967b) list_im_pane

0x3b04,	// (0x0002968c) scroll_pane_cp07

0x3b1d,	// (0x000296a5) im_writing_pane_t1_ParamLimits

0x3b1d,	// (0x000296a5) im_writing_pane_t1

0x3b32,	// (0x000296ba) im_writing_pane_t2_ParamLimits

0x3b32,	// (0x000296ba) im_writing_pane_t2

0x0001,

0xf297,	// (0x00034e1f) im_writing_pane_t_ParamLimits

0xf297,	// (0x00034e1f) im_writing_pane_t

0x26ad,	// (0x00028235) input_focus_pane_cp04

0x26ad,	// (0x00028235) input_focus_pane_cp05

0x3b4f,	// (0x000296d7) list_im_single_pane_ParamLimits

0x3b4f,	// (0x000296d7) list_im_single_pane

0x3b63,	// (0x000296eb) list_single_im_pane_t1

0x6444,	// (0x0002bfcc) blid_accuracy_pane

0x644c,	// (0x0002bfd4) blid_compass_pane

0x6456,	// (0x0002bfde) main_location_t1

0x6466,	// (0x0002bfee) main_location_t2

0x6476,	// (0x0002bffe) main_location_t3

0x0002,

0xf5fe,	// (0x00035186) main_location_t

0x26ad,	// (0x00028235) aid_levels_location

0x2c86,	// (0x0002880e) blid_accuracy_pane_g1

0x2c86,	// (0x0002880e) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00034e81) blid_accuracy_pane_g

0x3b9d,	// (0x00029725) wml_content_pane

0x3bdb,	// (0x00029763) wml_button_pane_ParamLimits

0x3bdb,	// (0x00029763) wml_button_pane

0x3bef,	// (0x00029777) wml_list_single_large_pane_ParamLimits

0x3bef,	// (0x00029777) wml_list_single_large_pane

0x3c04,	// (0x0002978c) wml_list_single_medium_pane_ParamLimits

0x3c04,	// (0x0002978c) wml_list_single_medium_pane

0x3c1a,	// (0x000297a2) wml_list_single_small_pane_ParamLimits

0x3c1a,	// (0x000297a2) wml_list_single_small_pane

0x3c32,	// (0x000297ba) wml_selection_box_pane_ParamLimits

0x3c32,	// (0x000297ba) wml_selection_box_pane

0x3c45,	// (0x000297cd) wml_list_single_pane_t1

0x3c54,	// (0x000297dc) wml_list_single_medium_pane_t1

0x3c63,	// (0x000297eb) wml_list_single_large_pane_t1

0x3c72,	// (0x000297fa) input_focus_pane_cp02_ParamLimits

0x3c72,	// (0x000297fa) input_focus_pane_cp02

0x3c85,	// (0x0002980d) wml_selection_box_pane_g1

0x3c8e,	// (0x00029816) wml_selection_box_pane_t1_ParamLimits

0x3c8e,	// (0x00029816) wml_selection_box_pane_t1

0x2908,	// (0x00028490) bg_wml_button_pane_ParamLimits

0x2908,	// (0x00028490) bg_wml_button_pane

0x3ca6,	// (0x0002982e) wml_button_pane_g1

0x3cae,	// (0x00029836) wml_button_pane_t1

0x3ca6,	// (0x0002982e) wml_button_bg_pane_g1

0x3cbe,	// (0x00029846) wml_button_bg_pane_g2

0x3cc6,	// (0x0002984e) wml_button_bg_pane_g3

0x3cce,	// (0x00029856) wml_button_bg_pane_g4

0x3cd6,	// (0x0002985e) wml_button_bg_pane_g5

0x3cde,	// (0x00029866) wml_button_bg_pane_g6

0x3ce6,	// (0x0002986e) wml_button_bg_pane_g7

0x3cee,	// (0x00029876) wml_button_bg_pane_g8

0x3cf6,	// (0x0002987e) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00034e24) wml_button_bg_pane_g

0x3cfe,	// (0x00029886) bg_list_pane_cp02

0x3d06,	// (0x0002988e) mce_header_pane_ParamLimits

0x3d06,	// (0x0002988e) mce_header_pane

0x3d1c,	// (0x000298a4) mce_icon_pane

0x3d1c,	// (0x000298a4) mce_image_pane

0x3d25,	// (0x000298ad) mce_text_pane_ParamLimits

0x3d25,	// (0x000298ad) mce_text_pane

0x3d38,	// (0x000298c0) scroll_pane_cp03

0x3bd3,	// (0x0002975b) scroll_pane_cp04

0x3d42,	// (0x000298ca) scroll_pane_cp05_ParamLimits

0x3d42,	// (0x000298ca) scroll_pane_cp05

0x3d4e,	// (0x000298d6) mce_header_field_pane_ParamLimits

0x3d4e,	// (0x000298d6) mce_header_field_pane

0x3d65,	// (0x000298ed) mce_header_field_pane_2_ParamLimits

0x3d65,	// (0x000298ed) mce_header_field_pane_2

0x3d7b,	// (0x00029903) mce_header_field_pane_3

0x3d83,	// (0x0002990b) list_single_mce_message_pane_ParamLimits

0x3d83,	// (0x0002990b) list_single_mce_message_pane

0x3d98,	// (0x00029920) list_single_mce_smart_pane_ParamLimits

0x3d98,	// (0x00029920) list_single_mce_smart_pane

0x3db8,	// (0x00029940) input_focus_pane_cp03

0x3dc1,	// (0x00029949) list_header_data_pane

0x3dc9,	// (0x00029951) mce_header_field_pane_t1

0x3dd9,	// (0x00029961) list_single_mce_header_pane_ParamLimits

0x3dd9,	// (0x00029961) list_single_mce_header_pane

0x3ded,	// (0x00029975) list_single_mce_header_pane_t1

0x3dfc,	// (0x00029984) list_single_mce_message_pane_g1

0x3e04,	// (0x0002998c) list_single_mce_message_pane_t1

0x3e30,	// (0x000299b8) bg_cale_heading_pane_cp01_ParamLimits

0x3e30,	// (0x000299b8) bg_cale_heading_pane_cp01

0x3e53,	// (0x000299db) bg_cale_pane_cp02_ParamLimits

0x3e53,	// (0x000299db) bg_cale_pane_cp02

0x3e76,	// (0x000299fe) cale_month_corner_pane

0x3e8c,	// (0x00029a14) cale_month_day_heading_pane_ParamLimits

0x3e8c,	// (0x00029a14) cale_month_day_heading_pane

0x3ebf,	// (0x00029a47) cale_month_pane_g1_ParamLimits

0x3ebf,	// (0x00029a47) cale_month_pane_g1

0x3edb,	// (0x00029a63) cale_month_pane_g2_ParamLimits

0x3edb,	// (0x00029a63) cale_month_pane_g2

0x3ef6,	// (0x00029a7e) cale_month_pane_g3_ParamLimits

0x3ef6,	// (0x00029a7e) cale_month_pane_g3

0x3f22,	// (0x00029aaa) cale_month_pane_g4_ParamLimits

0x3f22,	// (0x00029aaa) cale_month_pane_g4

0x3f4e,	// (0x00029ad6) cale_month_pane_g5_ParamLimits

0x3f4e,	// (0x00029ad6) cale_month_pane_g5

0x3f82,	// (0x00029b0a) cale_month_pane_g6_ParamLimits

0x3f82,	// (0x00029b0a) cale_month_pane_g6

0x3fbe,	// (0x00029b46) cale_month_pane_g7_ParamLimits

0x3fbe,	// (0x00029b46) cale_month_pane_g7

0x3ffa,	// (0x00029b82) cale_month_pane_g8_ParamLimits

0x3ffa,	// (0x00029b82) cale_month_pane_g8

0x4036,	// (0x00029bbe) cale_month_pane_g9_ParamLimits

0x4036,	// (0x00029bbe) cale_month_pane_g9

0x4070,	// (0x00029bf8) cale_month_pane_g10_ParamLimits

0x4070,	// (0x00029bf8) cale_month_pane_g10

0x40aa,	// (0x00029c32) cale_month_pane_g11_ParamLimits

0x40aa,	// (0x00029c32) cale_month_pane_g11

0x40e4,	// (0x00029c6c) cale_month_pane_g12_ParamLimits

0x40e4,	// (0x00029c6c) cale_month_pane_g12

0x411e,	// (0x00029ca6) cale_month_pane_g13_ParamLimits

0x411e,	// (0x00029ca6) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00034e37) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00034e37) cale_month_pane_g

0x416a,	// (0x00029cf2) cale_month_week_pane

0x417d,	// (0x00029d05) grid_cale_month_pane_ParamLimits

0x417d,	// (0x00029d05) grid_cale_month_pane

0x41ab,	// (0x00029d33) cale_month_day_heading_pane_t1

0x4209,	// (0x00029d91) cale_month_day_heading_pane_t2

0x426e,	// (0x00029df6) cale_month_day_heading_pane_t3

0x42d3,	// (0x00029e5b) cale_month_day_heading_pane_t4

0x4338,	// (0x00029ec0) cale_month_day_heading_pane_t5

0x43ad,	// (0x00029f35) cale_month_day_heading_pane_t6

0x4422,	// (0x00029faa) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00034e52) cale_month_day_heading_pane_t

0x315f,	// (0x00028ce7) bg_cale_side_pane_cp01

0x4497,	// (0x0002a01f) cale_month_week_pane_t1

0x44ae,	// (0x0002a036) cale_month_week_pane_t2

0x44c5,	// (0x0002a04d) cale_month_week_pane_t3

0x44dc,	// (0x0002a064) cale_month_week_pane_t4

0x44f3,	// (0x0002a07b) cale_month_week_pane_t5

0x450a,	// (0x0002a092) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00034e61) cale_month_week_pane_t

0x4521,	// (0x0002a0a9) cell_cale_month_pane_ParamLimits

0x4521,	// (0x0002a0a9) cell_cale_month_pane

0xb0b1,	// (0x00030c39) cell_cale_month_pane_g1

0x0f27,	// (0x00026aaf) cell_cale_month_pane_t1_ParamLimits

0x0f27,	// (0x00026aaf) cell_cale_month_pane_t1

0x319e,	// (0x00028d26) grid_highlight_pane_cp08

0x2c86,	// (0x0002880e) main_smil_g1

0x4621,	// (0x0002a1a9) smil_status_pane

0x462a,	// (0x0002a1b2) smil_text_pane

0xbcfd,	// (0x00031885) bg_popup_call3_rect_pane_g8

0xbd05,	// (0x0003188d) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0003511a) bg_popup_call3_rect_pane_g

0xbf7f,	// (0x00031b07) smil_status_volume_pane_g1

0x463e,	// (0x0002a1c6) smil_status_pane_t1

0xbfb2,	// (0x00031b3a) volume_smil_pane

0x4655,	// (0x0002a1dd) list_smil_text_pane

0x465f,	// (0x0002a1e7) scroll_pane_cp011

0x466a,	// (0x0002a1f2) smil_text_list_pane_t1_ParamLimits

0x466a,	// (0x0002a1f2) smil_text_list_pane_t1

0xb0bd,	// (0x00030c45) aid_volume_smil_ParamLimits

0xb0bd,	// (0x00030c45) aid_volume_smil

0x2c86,	// (0x0002880e) smil_volume_pane_g1

0x2c86,	// (0x0002880e) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00034e81) smil_volume_pane_g

0x2bda,	// (0x00028762) listscroll_cale_day_pane

0x46b0,	// (0x0002a238) bg_cale_pane

0x46c8,	// (0x0002a250) list_cale_pane

0x46d9,	// (0x0002a261) scroll_pane_cp09

0x46ea,	// (0x0002a272) cale_bg_pane_g1

0x46f2,	// (0x0002a27a) cale_bg_pane_g2

0x46fa,	// (0x0002a282) cale_bg_pane_g3

0x4702,	// (0x0002a28a) cale_bg_pane_g4

0x470a,	// (0x0002a292) cale_bg_pane_g5

0x4712,	// (0x0002a29a) cale_bg_pane_g6

0x471a,	// (0x0002a2a2) cale_bg_pane_g7

0x4722,	// (0x0002a2aa) cale_bg_pane_g8

0x472a,	// (0x0002a2b2) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00034e86) cale_bg_pane_g

0x3211,	// (0x00028d99) list_cale_time_pane_ParamLimits

0x3211,	// (0x00028d99) list_cale_time_pane

0x4732,	// (0x0002a2ba) list_cale_time_pane_g1_ParamLimits

0x4732,	// (0x0002a2ba) list_cale_time_pane_g1

0x473e,	// (0x0002a2c6) list_cale_time_pane_g2_ParamLimits

0x473e,	// (0x0002a2c6) list_cale_time_pane_g2

0x474b,	// (0x0002a2d3) list_cale_time_pane_g3_ParamLimits

0x474b,	// (0x0002a2d3) list_cale_time_pane_g3

0x4759,	// (0x0002a2e1) list_cale_time_pane_g4_ParamLimits

0x4759,	// (0x0002a2e1) list_cale_time_pane_g4

0x4767,	// (0x0002a2ef) list_cale_time_pane_g5_ParamLimits

0x4767,	// (0x0002a2ef) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00034e99) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00034e99) list_cale_time_pane_g

0x4782,	// (0x0002a30a) list_cale_time_pane_t1_ParamLimits

0x4782,	// (0x0002a30a) list_cale_time_pane_t1

0x47aa,	// (0x0002a332) list_cale_time_pane_t2_ParamLimits

0x47aa,	// (0x0002a332) list_cale_time_pane_t2

0x4f4f,	// (0x0002aad7) aid_blid_cardinal_pane

0x4f99,	// (0x0002ab21) compass_pane_t4

0x47d2,	// (0x0002a35a) list_cale_time_pane_t4_ParamLimits

0x47d2,	// (0x0002a35a) list_cale_time_pane_t4

0x4fa7,	// (0x0002ab2f) compass_pane_t5

0x4fb5,	// (0x0002ab3d) compass_pane_t6

0x4fc3,	// (0x0002ab4b) compass_pane_t7

0x5043,	// (0x0002abcb) navi_pane_cc_t1

0x525c,	// (0x0002ade4) aid_phob_thumbnail_center_pane

0x592b,	// (0x0002b4b3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00034ea6) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00034ea6) list_cale_time_pane_t

0x22e0,	// (0x00027e68) bg_popup_window_pane_cp02_ParamLimits

0x22e0,	// (0x00027e68) bg_popup_window_pane_cp02

0x47fa,	// (0x0002a382) heading_pane_cp01_ParamLimits

0x47fa,	// (0x0002a382) heading_pane_cp01

0x4806,	// (0x0002a38e) loc_req_pane_ParamLimits

0x4806,	// (0x0002a38e) loc_req_pane

0x4816,	// (0x0002a39e) loc_type_pane_ParamLimits

0x4816,	// (0x0002a39e) loc_type_pane

0x4828,	// (0x0002a3b0) loc_type_pane_t1_ParamLimits

0x4828,	// (0x0002a3b0) loc_type_pane_t1

0x483a,	// (0x0002a3c2) loc_type_pane_t2_ParamLimits

0x483a,	// (0x0002a3c2) loc_type_pane_t2

0x484c,	// (0x0002a3d4) loc_type_pane_t3_ParamLimits

0x484c,	// (0x0002a3d4) loc_type_pane_t3

0x0002,

0xf325,	// (0x00034ead) loc_type_pane_t_ParamLimits

0xf325,	// (0x00034ead) loc_type_pane_t

0x485e,	// (0x0002a3e6) list_loc_req_pane

0x4868,	// (0x0002a3f0) scroll_pane_cp012

0x4873,	// (0x0002a3fb) list_single_loc_request_popup_menu_pane_ParamLimits

0x4873,	// (0x0002a3fb) list_single_loc_request_popup_menu_pane

0x4880,	// (0x0002a408) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4880,	// (0x0002a408) list_single_loc_request_popup_menu_pane_g1

0x488c,	// (0x0002a414) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x488c,	// (0x0002a414) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00034eb4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00034eb4) list_single_loc_request_popup_menu_pane_g

0x4898,	// (0x0002a420) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4898,	// (0x0002a420) list_single_loc_request_popup_menu_pane_t1

0x2908,	// (0x00028490) bg_popup_window_pane_cp03_ParamLimits

0x2908,	// (0x00028490) bg_popup_window_pane_cp03

0x48ae,	// (0x0002a436) heading_loc_req_pane_ParamLimits

0x48ae,	// (0x0002a436) heading_loc_req_pane

0x48ba,	// (0x0002a442) popup_dyc_status_message_window_g1_ParamLimits

0x48ba,	// (0x0002a442) popup_dyc_status_message_window_g1

0x48ce,	// (0x0002a456) popup_dyc_status_message_window_t1_ParamLimits

0x48ce,	// (0x0002a456) popup_dyc_status_message_window_t1

0x48e3,	// (0x0002a46b) popup_dyc_status_message_window_t2_ParamLimits

0x48e3,	// (0x0002a46b) popup_dyc_status_message_window_t2

0x48f8,	// (0x0002a480) popup_dyc_status_message_window_t3_ParamLimits

0x48f8,	// (0x0002a480) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00034eb9) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00034eb9) popup_dyc_status_message_window_t

0x26ad,	// (0x00028235) bg_heading_pane_cp01

0x4914,	// (0x0002a49c) heading_loc_req_pane_g1

0x491c,	// (0x0002a4a4) heading_loc_req_pane_g2

0x4924,	// (0x0002a4ac) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00034ec0) heading_loc_req_pane_g

0x492c,	// (0x0002a4b4) heading_loc_req_pane_t1

0x4a22,	// (0x0002a5aa) bg_popup_sub_pane_cp01_ParamLimits

0x4a22,	// (0x0002a5aa) bg_popup_sub_pane_cp01

0x4a30,	// (0x0002a5b8) popup_cale_events_window_g1_ParamLimits

0x4a30,	// (0x0002a5b8) popup_cale_events_window_g1

0x4a50,	// (0x0002a5d8) popup_cale_events_window_g2_ParamLimits

0x4a50,	// (0x0002a5d8) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00034ef4) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00034ef4) popup_cale_events_window_g

0x4a70,	// (0x0002a5f8) popup_cale_events_window_t1_ParamLimits

0x4a70,	// (0x0002a5f8) popup_cale_events_window_t1

0x4a82,	// (0x0002a60a) popup_cale_events_window_t2_ParamLimits

0x4a82,	// (0x0002a60a) popup_cale_events_window_t2

0x4ac0,	// (0x0002a648) popup_cale_events_window_t3_ParamLimits

0x4ac0,	// (0x0002a648) popup_cale_events_window_t3

0x4afa,	// (0x0002a682) popup_cale_events_window_t4_ParamLimits

0x4afa,	// (0x0002a682) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00034ef9) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00034ef9) popup_cale_events_window_t

0x4b30,	// (0x0002a6b8) call_type_pane

0x4b40,	// (0x0002a6c8) popup_call_status_window_g1

0x4b54,	// (0x0002a6dc) popup_call_status_window_g2

0x4b68,	// (0x0002a6f0) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00034f02) popup_call_status_window_g

0x4b77,	// (0x0002a6ff) call_type_pane_g1

0x4b80,	// (0x0002a708) call_type_pane_g2

0x0001,

0xf381,	// (0x00034f09) call_type_pane_g

0x26ad,	// (0x00028235) bg_popup_sub_pane_cp02

0x4b89,	// (0x0002a711) listscroll_popup_wml_pane

0x4b91,	// (0x0002a719) list_wml_pane

0x4b9b,	// (0x0002a723) scroll_pane_cp013

0x4ba6,	// (0x0002a72e) list_single_graphic_popup_wml_pane_ParamLimits

0x4ba6,	// (0x0002a72e) list_single_graphic_popup_wml_pane

0x2c86,	// (0x0002880e) list_single_graphic_popup_wml_pane_g1

0x4bba,	// (0x0002a742) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00034f0e) list_single_graphic_popup_wml_pane_g

0x4bc2,	// (0x0002a74a) list_single_graphic_popup_wml_pane_t1

0x4bd8,	// (0x0002a760) aid_call_pane

0x2900,	// (0x00028488) popup_clock_analogue_window_g1

0x2900,	// (0x00028488) popup_clock_analogue_window_g2

0xb0df,	// (0x00030c67) popup_clock_analogue_window_g3

0xb0df,	// (0x00030c67) popup_clock_analogue_window_g4

0x2c86,	// (0x0002880e) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00034f13) popup_clock_analogue_window_g

0xb0e7,	// (0x00030c6f) popup_clock_analogue_window_t1

0xb0f5,	// (0x00030c7d) clock_digital_number_pane_ParamLimits

0xb0f5,	// (0x00030c7d) clock_digital_number_pane

0xb101,	// (0x00030c89) clock_digital_number_pane_cp02_ParamLimits

0xb101,	// (0x00030c89) clock_digital_number_pane_cp02

0xb10d,	// (0x00030c95) clock_digital_number_pane_cp03_ParamLimits

0xb10d,	// (0x00030c95) clock_digital_number_pane_cp03

0xb119,	// (0x00030ca1) clock_digital_number_pane_cp04_ParamLimits

0xb119,	// (0x00030ca1) clock_digital_number_pane_cp04

0xb129,	// (0x00030cb1) clock_digital_separator_pane_ParamLimits

0xb129,	// (0x00030cb1) clock_digital_separator_pane

0xb135,	// (0x00030cbd) popup_clock_digital_window_t1

0x2c86,	// (0x0002880e) clock_digital_number_pane_g1

0x2c86,	// (0x0002880e) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00034e81) clock_digital_number_pane_g

0x2c86,	// (0x0002880e) clock_digital_separator_pane_g1

0x2c86,	// (0x0002880e) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00034e81) clock_digital_separator_pane_g

0x26ad,	// (0x00028235) bg_popup_window_pane_cp04

0x4be0,	// (0x0002a768) heading_pane_cp03

0x4be8,	// (0x0002a770) listscroll_popup_gms_pane

0x4bf0,	// (0x0002a778) grid_large_graphic_popup_pane

0x4bfa,	// (0x0002a782) listscroll_popup_gms_pane_g1

0x4c02,	// (0x0002a78a) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00034f1e) listscroll_popup_gms_pane_g

0x3bd3,	// (0x0002975b) scroll_pane_cp014

0x4c0a,	// (0x0002a792) cell_large_graphic_popup_pane_ParamLimits

0x4c0a,	// (0x0002a792) cell_large_graphic_popup_pane

0x4c22,	// (0x0002a7aa) cell_large_graphic_popup_pane_g1_ParamLimits

0x4c22,	// (0x0002a7aa) cell_large_graphic_popup_pane_g1

0x4c2e,	// (0x0002a7b6) cell_large_graphic_popup_pane_g2_ParamLimits

0x4c2e,	// (0x0002a7b6) cell_large_graphic_popup_pane_g2

0x4c3a,	// (0x0002a7c2) cell_large_graphic_popup_pane_g3_ParamLimits

0x4c3a,	// (0x0002a7c2) cell_large_graphic_popup_pane_g3

0x4c47,	// (0x0002a7cf) cell_large_graphic_popup_pane_g4_ParamLimits

0x4c47,	// (0x0002a7cf) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00034f23) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00034f23) cell_large_graphic_popup_pane_g

0x4c57,	// (0x0002a7df) grid_highlight_pane_cp010

0x2c86,	// (0x0002880e) bg_popup_call_pane_g1

0x4c61,	// (0x0002a7e9) list_single_graphic_popup_conf_pane_ParamLimits

0x4c61,	// (0x0002a7e9) list_single_graphic_popup_conf_pane

0x4c74,	// (0x0002a7fc) list_highlight_pane_cp01

0x4c7d,	// (0x0002a805) list_single_graphic_popup_conf_pane_g1

0x4c85,	// (0x0002a80d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00034f2c) list_single_graphic_popup_conf_pane_g

0x4c8d,	// (0x0002a815) list_single_graphic_popup_conf_pane_t1

0x4c9b,	// (0x0002a823) linegrid_cams_pane_g1

0x4ca4,	// (0x0002a82c) linegrid_cams_pane_g2

0x31f7,	// (0x00028d7f) linegrid_cams_pane_g3

0x4cad,	// (0x0002a835) linegrid_cams_pane_g4

0x4cb6,	// (0x0002a83e) linegrid_cams_pane_g5

0x4cbf,	// (0x0002a847) linegrid_cams_pane_g6

0x3200,	// (0x00028d88) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00034f31) linegrid_cams_pane_g

0x4cca,	// (0x0002a852) popup_clock_analogue_window

0x4cca,	// (0x0002a852) popup_clock_digital_window

0x26ad,	// (0x00028235) popup_phob_thumbnail_window

0x2c86,	// (0x0002880e) call_video_uplink_pane_g1

0x4cd3,	// (0x0002a85b) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00034f40) call_video_uplink_pane_g

0x4cdb,	// (0x0002a863) video_uplink_pane

0x4ce3,	// (0x0002a86b) mce_image_pane_g1

0x4ced,	// (0x0002a875) mce_image_pane_g2

0x4cf7,	// (0x0002a87f) mce_image_pane_g3

0x4cff,	// (0x0002a887) mce_image_pane_g4

0x4d07,	// (0x0002a88f) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00034f45) mce_image_pane_g

0x4d0f,	// (0x0002a897) control_top_pane_stacon_cp01_ParamLimits

0x4d0f,	// (0x0002a897) control_top_pane_stacon_cp01

0x4d23,	// (0x0002a8ab) uni_indicator_pane_stacon_cp01_ParamLimits

0x4d23,	// (0x0002a8ab) uni_indicator_pane_stacon_cp01

0x4d34,	// (0x0002a8bc) bg_popup_sub_pane_cp03

0x4d3e,	// (0x0002a8c6) chi_dic_find_pane

0x4d46,	// (0x0002a8ce) listscroll_chi_dic_pane

0x4d4f,	// (0x0002a8d7) main_pane_chidic_g1

0x4d62,	// (0x0002a8ea) chi_dic_find_pane_t1

0x4d70,	// (0x0002a8f8) find_chidic_pane

0x4d79,	// (0x0002a901) chi_dic_list_pane_ParamLimits

0x4d79,	// (0x0002a901) chi_dic_list_pane

0x4d8a,	// (0x0002a912) scroll_pane_cp020

0x4d92,	// (0x0002a91a) find_chidic_pane_t1

0x26ad,	// (0x00028235) input_focus_pane_cp06

0x4da1,	// (0x0002a929) list_chi_dic_pane_ParamLimits

0x4da1,	// (0x0002a929) list_chi_dic_pane

0x4db3,	// (0x0002a93b) list_chi_dic_pane_t1_ParamLimits

0x4db3,	// (0x0002a93b) list_chi_dic_pane_t1

0x26ad,	// (0x00028235) list_highlight_pane_cp020

0x4dc6,	// (0x0002a94e) bg_cale_heading_pane_g1

0x4dce,	// (0x0002a956) bg_cale_heading_pane_g2

0x4dd6,	// (0x0002a95e) bg_cale_heading_pane_g3

0x4dde,	// (0x0002a966) bg_cale_heading_pane_g4

0x4de8,	// (0x0002a970) bg_cale_heading_pane_g5

0x4df2,	// (0x0002a97a) bg_cale_heading_pane_g6

0x4dfa,	// (0x0002a982) bg_cale_heading_pane_g7

0x4e02,	// (0x0002a98a) bg_cale_heading_pane_g8

0x4e0c,	// (0x0002a994) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00034f50) bg_cale_heading_pane_g

0x4dc6,	// (0x0002a94e) bg_cale_side_pane_g1

0x4e16,	// (0x0002a99e) bg_cale_side_pane_g2

0x4e1e,	// (0x0002a9a6) bg_cale_side_pane_g3

0x4e26,	// (0x0002a9ae) bg_cale_side_pane_g4

0x4e2e,	// (0x0002a9b6) bg_cale_side_pane_g5

0x4e36,	// (0x0002a9be) bg_cale_side_pane_g6

0x4e3e,	// (0x0002a9c6) bg_cale_side_pane_g7

0x4e46,	// (0x0002a9ce) bg_cale_side_pane_g8

0x4e4e,	// (0x0002a9d6) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00034f63) bg_cale_side_pane_g

0x4e56,	// (0x0002a9de) popup_call_status_window_ParamLimits

0x4e56,	// (0x0002a9de) popup_call_status_window

0x4e9f,	// (0x0002aa27) stacon_top_pane

0x4ea7,	// (0x0002aa2f) status_pane_ParamLimits

0x4ea7,	// (0x0002aa2f) status_pane

0x4ebc,	// (0x0002aa44) status_small_pane

0x4ec4,	// (0x0002aa4c) control_pane

0x26ad,	// (0x00028235) stacon_bottom_pane

0x4ecc,	// (0x0002aa54) list_single_mce_smart_pane_t1_ParamLimits

0x4ecc,	// (0x0002aa54) list_single_mce_smart_pane_t1

0x4edf,	// (0x0002aa67) list_single_mce_smart_pane_t2_ParamLimits

0x4edf,	// (0x0002aa67) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00034f76) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00034f76) list_single_mce_smart_pane_t

0x4efe,	// (0x0002aa86) compass_pane

0x4f07,	// (0x0002aa8f) main_location2_pane_t1

0x4f19,	// (0x0002aaa1) main_location2_pane_t2

0x4f2b,	// (0x0002aab3) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00034f7b) main_location2_pane_t

0x4f6f,	// (0x0002aaf7) compass_pane_g1_ParamLimits

0x4f6f,	// (0x0002aaf7) compass_pane_g1

0x4f7b,	// (0x0002ab03) compass_pane_t1

0x4f8a,	// (0x0002ab12) compass_pane_t2

0x0005,

0xf3fc,	// (0x00034f84) compass_pane_t

0x4fd1,	// (0x0002ab59) text_secondary_cp61

0x503a,	// (0x0002abc2) navi_pane_cams_g5

0x50b4,	// (0x0002ac3c) navi_pane_im_t1

0x50c2,	// (0x0002ac4a) navi_pane_mp_g1_ParamLimits

0x50c2,	// (0x0002ac4a) navi_pane_mp_g1

0x50d6,	// (0x0002ac5e) navi_pane_mp_g2_ParamLimits

0x50d6,	// (0x0002ac5e) navi_pane_mp_g2

0x50e2,	// (0x0002ac6a) navi_pane_mp_g3_ParamLimits

0x50e2,	// (0x0002ac6a) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00034f98) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00034f98) navi_pane_mp_g

0x50ee,	// (0x0002ac76) navi_pane_mp_t1

0x50fc,	// (0x0002ac84) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00034f9f) navi_pane_mp_t

0x51a5,	// (0x0002ad2d) navi_pane_vt_g1

0x50ee,	// (0x0002ac76) navi_pane_vt_t1

0x51ad,	// (0x0002ad35) navi_slider_pane

0x51b5,	// (0x0002ad3d) zooming_pane

0x51bd,	// (0x0002ad45) navi_slider_pane_g1

0xb152,	// (0x00030cda) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00034fa6) navi_slider_pane_g

0x51e1,	// (0x0002ad69) aid_levels_zoom

0x51e9,	// (0x0002ad71) zooming_pane_g1

0x51f1,	// (0x0002ad79) zooming_pane_g2

0x51f1,	// (0x0002ad79) zooming_pane_g3

0x0002,

0xf42d,	// (0x00034fb5) zooming_pane_g

0x51f9,	// (0x0002ad81) level_10_zoom

0x5202,	// (0x0002ad8a) level_11_zoom

0x520b,	// (0x0002ad93) level_1_zoom

0x5214,	// (0x0002ad9c) level_2_zoom

0x521d,	// (0x0002ada5) level_3_zoom

0x5226,	// (0x0002adae) level_4_zoom

0x522f,	// (0x0002adb7) level_5_zoom

0x5238,	// (0x0002adc0) level_6_zoom

0x5241,	// (0x0002adc9) level_7_zoom

0x524a,	// (0x0002add2) level_8_zoom

0x5253,	// (0x0002addb) level_9_zoom

0x5264,	// (0x0002adec) popup_phob_thumbnail_window_g1

0x526c,	// (0x0002adf4) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00034fbc) popup_phob_thumbnail_window_g

0xbe5f,	// (0x000319e7) level_1_location

0xbe67,	// (0x000319ef) level_2_location

0xbe6f,	// (0x000319f7) level_3_location

0xbe77,	// (0x000319ff) level_4_location

0x51b5,	// (0x0002ad3d) level_5_location

0x5274,	// (0x0002adfc) mce_icon_pane_g1

0x527c,	// (0x0002ae04) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00034fc1) mce_icon_pane_g

0x5284,	// (0x0002ae0c) main_mup_pane_g1_ParamLimits

0x5284,	// (0x0002ae0c) main_mup_pane_g1

0x529a,	// (0x0002ae22) main_mup_pane_g2_ParamLimits

0x529a,	// (0x0002ae22) main_mup_pane_g2

0x52b2,	// (0x0002ae3a) main_mup_pane_g3_ParamLimits

0x52b2,	// (0x0002ae3a) main_mup_pane_g3

0x52ca,	// (0x0002ae52) main_mup_pane_g4_ParamLimits

0x52ca,	// (0x0002ae52) main_mup_pane_g4

0x52e2,	// (0x0002ae6a) main_mup_pane_g5_ParamLimits

0x52e2,	// (0x0002ae6a) main_mup_pane_g5

0x52fe,	// (0x0002ae86) main_mup_pane_g6_ParamLimits

0x52fe,	// (0x0002ae86) main_mup_pane_g6

0x5316,	// (0x0002ae9e) main_mup_pane_g7_ParamLimits

0x5316,	// (0x0002ae9e) main_mup_pane_g7

0x532e,	// (0x0002aeb6) main_mup_pane_g8_ParamLimits

0x532e,	// (0x0002aeb6) main_mup_pane_g8

0x5348,	// (0x0002aed0) main_mup_pane_g9_ParamLimits

0x5348,	// (0x0002aed0) main_mup_pane_g9

0x5362,	// (0x0002aeea) main_mup_pane_g10_ParamLimits

0x5362,	// (0x0002aeea) main_mup_pane_g10

0x537c,	// (0x0002af04) main_mup_pane_g11_ParamLimits

0x537c,	// (0x0002af04) main_mup_pane_g11

0x5390,	// (0x0002af18) main_mup_pane_g12_ParamLimits

0x5390,	// (0x0002af18) main_mup_pane_g12

0x53a6,	// (0x0002af2e) main_mup_pane_g13_ParamLimits

0x53a6,	// (0x0002af2e) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00034fc6) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00034fc6) main_mup_pane_g

0x53ba,	// (0x0002af42) main_mup_pane_t1_ParamLimits

0x53ba,	// (0x0002af42) main_mup_pane_t1

0x53d4,	// (0x0002af5c) main_mup_pane_t2_ParamLimits

0x53d4,	// (0x0002af5c) main_mup_pane_t2

0x53ec,	// (0x0002af74) main_mup_pane_t3_ParamLimits

0x53ec,	// (0x0002af74) main_mup_pane_t3

0x5404,	// (0x0002af8c) main_mup_pane_t4_ParamLimits

0x5404,	// (0x0002af8c) main_mup_pane_t4

0x5422,	// (0x0002afaa) main_mup_pane_t5_ParamLimits

0x5422,	// (0x0002afaa) main_mup_pane_t5

0x5437,	// (0x0002afbf) main_mup_pane_t6_ParamLimits

0x5437,	// (0x0002afbf) main_mup_pane_t6

0x0005,

0xf459,	// (0x00034fe1) main_mup_pane_t_ParamLimits

0xf459,	// (0x00034fe1) main_mup_pane_t

0x5449,	// (0x0002afd1) mup_progress_pane_ParamLimits

0x5449,	// (0x0002afd1) mup_progress_pane

0x5455,	// (0x0002afdd) mup_visualizer_pane_ParamLimits

0x5455,	// (0x0002afdd) mup_visualizer_pane

0x5485,	// (0x0002b00d) mup_volume_pane_ParamLimits

0x5485,	// (0x0002b00d) mup_volume_pane

0x54a3,	// (0x0002b02b) mup_visualizer_pane_g1_ParamLimits

0x54a3,	// (0x0002b02b) mup_visualizer_pane_g1

0x54a3,	// (0x0002b02b) mup_visualizer_pane_g2_ParamLimits

0x54a3,	// (0x0002b02b) mup_visualizer_pane_g2

0x4f6f,	// (0x0002aaf7) mup_visualizer_pane_g3_ParamLimits

0x4f6f,	// (0x0002aaf7) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00034fee) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00034fee) mup_visualizer_pane_g

0x2c86,	// (0x0002880e) mup_volume_pane_g1

0x54b9,	// (0x0002b041) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00034ff5) mup_volume_pane_g

0x2c86,	// (0x0002880e) mup_progress_pane_g1

0x54c2,	// (0x0002b04a) mup_progress_pane_g2

0x54cb,	// (0x0002b053) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00034ffa) mup_progress_pane_g

0x26ad,	// (0x00028235) bg_popup_window_pane_cp05

0x54d4,	// (0x0002b05c) heading_pane_cp02_ParamLimits

0x54d4,	// (0x0002b05c) heading_pane_cp02

0x54ee,	// (0x0002b076) list_popup_blid_pane

0x54f6,	// (0x0002b07e) list_blid_sat_info_pane_ParamLimits

0x54f6,	// (0x0002b07e) list_blid_sat_info_pane

0x5509,	// (0x0002b091) list_blid_sat_info_pane_g1

0x5511,	// (0x0002b099) list_blid_sat_info_pane_t1

0x5617,	// (0x0002b19f) mup_equalizer_pane_ParamLimits

0x5617,	// (0x0002b19f) mup_equalizer_pane

0x5630,	// (0x0002b1b8) mup_equalizer_pane_cp1_ParamLimits

0x5630,	// (0x0002b1b8) mup_equalizer_pane_cp1

0x564d,	// (0x0002b1d5) mup_equalizer_pane_cp2_ParamLimits

0x564d,	// (0x0002b1d5) mup_equalizer_pane_cp2

0x566a,	// (0x0002b1f2) mup_equalizer_pane_cp3_ParamLimits

0x566a,	// (0x0002b1f2) mup_equalizer_pane_cp3

0x568b,	// (0x0002b213) mup_equalizer_pane_cp4_ParamLimits

0x568b,	// (0x0002b213) mup_equalizer_pane_cp4

0x56ac,	// (0x0002b234) mup_equalizer_pane_cp5

0x56c0,	// (0x0002b248) mup_equalizer_pane_cp6

0x56d4,	// (0x0002b25c) mup_equalizer_pane_cp7

0xbd7d,	// (0x00031905) bg_popup_call_poc_act_pane_g9

0xbd85,	// (0x0003190d) bg_popup_call_poc_act_pane_g10

0xbd8d,	// (0x00031915) bg_popup_call_poc_act_pane_g11

0x000a,

0x2908,	// (0x00028490) mup_scale_pane

0x2c86,	// (0x0002880e) mup_scale_pane_g1

0x56e8,	// (0x0002b270) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00035016) mup_scale_pane_g

0x571e,	// (0x0002b2a6) msg_data_pane

0x5726,	// (0x0002b2ae) scroll_pane_cp017

0x572e,	// (0x0002b2b6) bg_list_pane_cp04_ParamLimits

0x572e,	// (0x0002b2b6) bg_list_pane_cp04

0x574e,	// (0x0002b2d6) msg_data_pane_g1

0x5756,	// (0x0002b2de) msg_data_pane_g2

0x5760,	// (0x0002b2e8) msg_data_pane_g3

0x5768,	// (0x0002b2f0) msg_data_pane_g4

0x5770,	// (0x0002b2f8) msg_data_pane_g5

0x5778,	// (0x0002b300) msg_data_pane_g6

0x5780,	// (0x0002b308) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00035025) msg_data_pane_g

0x5788,	// (0x0002b310) msg_text_pane_ParamLimits

0x5788,	// (0x0002b310) msg_text_pane

0x57ac,	// (0x0002b334) qrid_highlight_pane_cp011_ParamLimits

0x57ac,	// (0x0002b334) qrid_highlight_pane_cp011

0x26ad,	// (0x00028235) msg_body_pane

0x26ad,	// (0x00028235) msg_header_pane

0x57cb,	// (0x0002b353) input_focus_pane_cp07

0x57ee,	// (0x0002b376) msg_header_pane_t1_ParamLimits

0x57ee,	// (0x0002b376) msg_header_pane_t1

0x5802,	// (0x0002b38a) msg_header_pane_t2_ParamLimits

0x5802,	// (0x0002b38a) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00035039) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00035039) msg_header_pane_t

0x5814,	// (0x0002b39c) msg_body_pane_g1

0x581c,	// (0x0002b3a4) msg_body_pane_t1_ParamLimits

0x581c,	// (0x0002b3a4) msg_body_pane_t1

0x584d,	// (0x0002b3d5) msg_body_pane_t2_ParamLimits

0x584d,	// (0x0002b3d5) msg_body_pane_t2

0x585f,	// (0x0002b3e7) msg_body_pane_t3_ParamLimits

0x585f,	// (0x0002b3e7) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0003503e) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0003503e) msg_body_pane_t

0x0f5f,	// (0x00026ae7) main_viewer_pane_g1_ParamLimits

0x0f5f,	// (0x00026ae7) main_viewer_pane_g1

0x0f6d,	// (0x00026af5) main_viewer_pane_g2_ParamLimits

0x0f6d,	// (0x00026af5) main_viewer_pane_g2

0x588f,	// (0x0002b417) main_viewer_pane_g3_ParamLimits

0x588f,	// (0x0002b417) main_viewer_pane_g3

0x589e,	// (0x0002b426) main_viewer_pane_g4_ParamLimits

0x589e,	// (0x0002b426) main_viewer_pane_g4

0xb17c,	// (0x00030d04) main_viewer_pane_g5_ParamLimits

0xb17c,	// (0x00030d04) main_viewer_pane_g5

0xb17c,	// (0x00030d04) main_viewer_pane_g7_ParamLimits

0xb17c,	// (0x00030d04) main_viewer_pane_g7

0x4880,	// (0x0002a408) main_viewer_pane_g8_ParamLimits

0x4880,	// (0x0002a408) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0003504e) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0003504e) main_viewer_pane_g

0x58ad,	// (0x0002b435) viewer_content_pane_ParamLimits

0x58ad,	// (0x0002b435) viewer_content_pane

0x58e8,	// (0x0002b470) main_postcard_pane_g1_ParamLimits

0x58e8,	// (0x0002b470) main_postcard_pane_g1

0x58fe,	// (0x0002b486) main_postcard_pane_g2_ParamLimits

0x58fe,	// (0x0002b486) main_postcard_pane_g2

0x5914,	// (0x0002b49c) main_postcard_pane_g3_ParamLimits

0x5914,	// (0x0002b49c) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0003505f) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0003505f) main_postcard_pane_g

0x592b,	// (0x0002b4b3) main_postcard_pane_g4

0xbf92,	// (0x00031b1a) smil_status_volume_pane_g2

0x596e,	// (0x0002b4f6) postcard_pane_ParamLimits

0x596e,	// (0x0002b4f6) postcard_pane

0x59b0,	// (0x0002b538) postcard_pane_g1_ParamLimits

0x59b0,	// (0x0002b538) postcard_pane_g1

0x59be,	// (0x0002b546) postcard_pane_g2_ParamLimits

0x59be,	// (0x0002b546) postcard_pane_g2

0x59ca,	// (0x0002b552) postcard_pane_g3_ParamLimits

0x59ca,	// (0x0002b552) postcard_pane_g3

0x59d6,	// (0x0002b55e) postcard_pane_g4_ParamLimits

0x59d6,	// (0x0002b55e) postcard_pane_g4

0x59e4,	// (0x0002b56c) postcard_pane_g5_ParamLimits

0x59e4,	// (0x0002b56c) postcard_pane_g5

0x59f9,	// (0x0002b581) postcard_pane_g6_ParamLimits

0x59f9,	// (0x0002b581) postcard_pane_g6

0x59b0,	// (0x0002b538) postcard_pane_g7_ParamLimits

0x59b0,	// (0x0002b538) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0003506c) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0003506c) postcard_pane_g

0x5a0d,	// (0x0002b595) main_mp2_pane_g1_ParamLimits

0x5a0d,	// (0x0002b595) main_mp2_pane_g1

0x5a19,	// (0x0002b5a1) main_mp2_pane_g2_ParamLimits

0x5a19,	// (0x0002b5a1) main_mp2_pane_g2

0x5a25,	// (0x0002b5ad) main_mp2_pane_g3_ParamLimits

0x5a25,	// (0x0002b5ad) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0003507b) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0003507b) main_mp2_pane_g

0x5a31,	// (0x0002b5b9) main_mp2_pane_t1_ParamLimits

0x5a31,	// (0x0002b5b9) main_mp2_pane_t1

0x5a46,	// (0x0002b5ce) main_mp2_pane_t2_ParamLimits

0x5a46,	// (0x0002b5ce) main_mp2_pane_t2

0x5a58,	// (0x0002b5e0) main_mp2_pane_t3_ParamLimits

0x5a58,	// (0x0002b5e0) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00035082) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00035082) main_mp2_pane_t

0x5a6a,	// (0x0002b5f2) pec_content_pane_ParamLimits

0x5a6a,	// (0x0002b5f2) pec_content_pane

0x3bd3,	// (0x0002975b) scroll_pane_cp015

0x5a7c,	// (0x0002b604) pec_attribute_pane_ParamLimits

0x5a7c,	// (0x0002b604) pec_attribute_pane

0x5a8c,	// (0x0002b614) pec_content_pane_g1_ParamLimits

0x5a8c,	// (0x0002b614) pec_content_pane_g1

0x5a98,	// (0x0002b620) pec_content_pane_t1_ParamLimits

0x5a98,	// (0x0002b620) pec_content_pane_t1

0x5aaa,	// (0x0002b632) pec_content_pane_t2_ParamLimits

0x5aaa,	// (0x0002b632) pec_content_pane_t2

0x0001,

0xf501,	// (0x00035089) pec_content_pane_t_ParamLimits

0xf501,	// (0x00035089) pec_content_pane_t

0x5abc,	// (0x0002b644) list_single_graphic_pane_cp01_ParamLimits

0x5abc,	// (0x0002b644) list_single_graphic_pane_cp01

0x2908,	// (0x00028490) bg_popup_sub_pane_cp04

0x5ad1,	// (0x0002b659) popup_mup_playback_window_g1

0x5add,	// (0x0002b665) popup_mup_playback_window_t1

0x5af2,	// (0x0002b67a) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0003508e) popup_mup_playback_window_t

0x5b47,	// (0x0002b6cf) main_image_pane_g1_ParamLimits

0x5b47,	// (0x0002b6cf) main_image_pane_g1

0x5c24,	// (0x0002b7ac) scroll_pane_cp018_ParamLimits

0x5c24,	// (0x0002b7ac) scroll_pane_cp018

0x5c3c,	// (0x0002b7c4) scroll_pane_cp016_ParamLimits

0x5c3c,	// (0x0002b7c4) scroll_pane_cp016

0x5c70,	// (0x0002b7f8) smil2_image_pane_ParamLimits

0x5c70,	// (0x0002b7f8) smil2_image_pane

0x5ca0,	// (0x0002b828) smil2_root_pane_ParamLimits

0x5ca0,	// (0x0002b828) smil2_root_pane

0x5cd8,	// (0x0002b860) smil2_text_pane_ParamLimits

0x5cd8,	// (0x0002b860) smil2_text_pane

0x26ad,	// (0x00028235) bg_list_pane_cp06

0x5d60,	// (0x0002b8e8) grid_radio_pane

0x26ad,	// (0x00028235) bg_popup_window_pane_cp06

0x5d68,	// (0x0002b8f0) main_fmradio_pane_t1

0x4be0,	// (0x0002a768) heading_pane_cp04

0x5d76,	// (0x0002b8fe) main_fmradio_pane_t2

0xbd95,	// (0x0003191d) popup_cale_lunar_info_window_g1

0x5d84,	// (0x0002b90c) main_fmradio_pane_t3

0xbd9d,	// (0x00031925) popup_cale_lunar_info_window_g2

0x5d92,	// (0x0002b91a) main_fmradio_pane_t4

0x0001,

0x5da0,	// (0x0002b928) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00035169) popup_cale_lunar_info_window_g

0xf51b,	// (0x000350a3) main_fmradio_pane_t

0x5dae,	// (0x0002b936) wait_bar_pane_cp03

0x5db6,	// (0x0002b93e) cell_fmradio_pane_ParamLimits

0x5db6,	// (0x0002b93e) cell_fmradio_pane

0x59b0,	// (0x0002b538) cell_fmradio_pane_g1_ParamLimits

0x59b0,	// (0x0002b538) cell_fmradio_pane_g1

0x26ad,	// (0x00028235) grid_highlight_pane_cp011

0x5dc9,	// (0x0002b951) poc_content_pane_ParamLimits

0x5dc9,	// (0x0002b951) poc_content_pane

0x5ddb,	// (0x0002b963) scroll_pane_cp019

0x5de3,	// (0x0002b96b) popup_call_poc_act_window_ParamLimits

0x5de3,	// (0x0002b96b) popup_call_poc_act_window

0x5e07,	// (0x0002b98f) popup_call_poc_inact_window_ParamLimits

0x5e07,	// (0x0002b98f) popup_call_poc_inact_window

0xf5b8,	// (0x00035140) bg_popup_call_poc_act_pane_g

0xbd0d,	// (0x00031895) bg_popup_call_poc_inact_pane_g1

0xbd15,	// (0x0003189d) bg_popup_call_poc_inact_pane_g2

0x5e20,	// (0x0002b9a8) popup_call_poc_act_window_g2

0xbd1d,	// (0x000318a5) bg_popup_call_poc_inact_pane_g3

0xbd25,	// (0x000318ad) bg_popup_call_poc_inact_pane_g4

0xbd2d,	// (0x000318b5) bg_popup_call_poc_inact_pane_g5

0x5e28,	// (0x0002b9b0) popup_call_poc_act_window_t1_ParamLimits

0x5e28,	// (0x0002b9b0) popup_call_poc_act_window_t1

0x5e50,	// (0x0002b9d8) popup_call_poc_act_window_t2_ParamLimits

0x5e50,	// (0x0002b9d8) popup_call_poc_act_window_t2

0x5e78,	// (0x0002ba00) popup_call_poc_act_window_t3_ParamLimits

0x5e78,	// (0x0002ba00) popup_call_poc_act_window_t3

0x5ea0,	// (0x0002ba28) popup_call_poc_act_window_t4_ParamLimits

0x5ea0,	// (0x0002ba28) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x000350ae) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x000350ae) popup_call_poc_act_window_t

0xbd35,	// (0x000318bd) bg_popup_call_poc_inact_pane_g6

0xbd3d,	// (0x000318c5) bg_popup_call_poc_inact_pane_g7

0xbd45,	// (0x000318cd) bg_popup_call_poc_inact_pane_g8

0x5eb2,	// (0x0002ba3a) popup_call_poc_inact_window_g2

0xbd4d,	// (0x000318d5) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0003512d) bg_popup_call_poc_inact_pane_g

0x5eba,	// (0x0002ba42) popup_call_poc_inact_window_t1_ParamLimits

0x5eba,	// (0x0002ba42) popup_call_poc_inact_window_t1

0x5ecf,	// (0x0002ba57) popup_call_poc_inact_window_t2_ParamLimits

0x5ecf,	// (0x0002ba57) popup_call_poc_inact_window_t2

0x5ee4,	// (0x0002ba6c) popup_call_poc_inact_window_t3_ParamLimits

0x5ee4,	// (0x0002ba6c) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x000350b7) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x000350b7) popup_call_poc_inact_window_t

0xbf05,	// (0x00031a8d) context_pane_ParamLimits

0x6997,	// (0x0002c51f) signal_pane_ParamLimits

0x51b5,	// (0x0002ad3d) main_call2_pane

0xbef3,	// (0x00031a7b) popup_phob_thumbnail2_window_ParamLimits

0xbef3,	// (0x00031a7b) popup_phob_thumbnail2_window

0xb164,	// (0x00030cec) aid_hotspot_pointer_arrow_pane

0xb16c,	// (0x00030cf4) aid_hotspot_pointer_hand_pane

0x64ad,	// (0x0002c035) phob_pre_status_pane_g5

0x3246,	// (0x00028dce) cams_zoom_pane_ParamLimits

0x3255,	// (0x00028ddd) image_vga_pane_ParamLimits

0x326f,	// (0x00028df7) main_camera_pane_g1_ParamLimits

0x3281,	// (0x00028e09) main_camera_pane_g2_ParamLimits

0x3291,	// (0x00028e19) main_camera_pane_g3_ParamLimits

0x32a1,	// (0x00028e29) main_camera_pane_g4_ParamLimits

0x32b1,	// (0x00028e39) main_camera_pane_g5_ParamLimits

0x32c1,	// (0x00028e49) main_camera_pane_g6_ParamLimits

0x32d3,	// (0x00028e5b) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00034db6) main_camera_pane_g_ParamLimits

0x32ef,	// (0x00028e77) main_camera_pane_t1_ParamLimits

0x3305,	// (0x00028e8d) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00034dc7) main_camera_pane_t_ParamLimits

0x2908,	// (0x00028490) bg_popup_preview_window_pane_cp01_ParamLimits

0x2908,	// (0x00028490) bg_popup_preview_window_pane_cp01

0x5ef9,	// (0x0002ba81) popup_phob_thumbnail2_window_g1_ParamLimits

0x5ef9,	// (0x0002ba81) popup_phob_thumbnail2_window_g1

0x26ad,	// (0x00028235) call2_cli_visual_pane

0x5f20,	// (0x0002baa8) popup_call2_audio_conf_window_ParamLimits

0x5f20,	// (0x0002baa8) popup_call2_audio_conf_window

0x5f40,	// (0x0002bac8) popup_call2_audio_first_window_ParamLimits

0x5f40,	// (0x0002bac8) popup_call2_audio_first_window

0x5fd6,	// (0x0002bb5e) popup_call2_audio_in_window_ParamLimits

0x5fd6,	// (0x0002bb5e) popup_call2_audio_in_window

0x601e,	// (0x0002bba6) popup_call2_audio_out_window_ParamLimits

0x601e,	// (0x0002bba6) popup_call2_audio_out_window

0x6088,	// (0x0002bc10) popup_call2_audio_second_window_ParamLimits

0x6088,	// (0x0002bc10) popup_call2_audio_second_window

0x60ee,	// (0x0002bc76) popup_call2_audio_wait_window_ParamLimits

0x60ee,	// (0x0002bc76) popup_call2_audio_wait_window

0x26ad,	// (0x00028235) bg_popup_call2_act_pane_cp03

0x28ea,	// (0x00028472) list_conf_pane_cp

0x6128,	// (0x0002bcb0) popup_call2_audio_conf_window_t1

0x4c61,	// (0x0002a7e9) list_single_graphic_popup_conf2_pane_ParamLimits

0x4c61,	// (0x0002a7e9) list_single_graphic_popup_conf2_pane

0x4c74,	// (0x0002a7fc) list_highlight_pane_cp04

0x6136,	// (0x0002bcbe) list_single_graphic_popup_conf2_pane_g1

0x4c85,	// (0x0002a80d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x000350be) list_single_graphic_popup_conf2_pane_g

0x6140,	// (0x0002bcc8) list_single_graphic_popup_conf2_pane_t1

0x614e,	// (0x0002bcd6) bg_popup_call2_act_pane_cp01_ParamLimits

0x614e,	// (0x0002bcd6) bg_popup_call2_act_pane_cp01

0x61d8,	// (0x0002bd60) call_type_pane_cp05_ParamLimits

0x61d8,	// (0x0002bd60) call_type_pane_cp05

0x622c,	// (0x0002bdb4) popup_call2_audio_second_window_g1_ParamLimits

0x622c,	// (0x0002bdb4) popup_call2_audio_second_window_g1

0x6280,	// (0x0002be08) popup_call2_audio_second_window_g2_ParamLimits

0x6280,	// (0x0002be08) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x000350c3) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x000350c3) popup_call2_audio_second_window_g

0x62e5,	// (0x0002be6d) popup_call2_audio_second_window_t1_ParamLimits

0x62e5,	// (0x0002be6d) popup_call2_audio_second_window_t1

0xb19a,	// (0x00030d22) popup_call2_audio_second_window_t2_ParamLimits

0xb19a,	// (0x00030d22) popup_call2_audio_second_window_t2

0xb1ed,	// (0x00030d75) popup_call2_audio_second_window_t3_ParamLimits

0xb1ed,	// (0x00030d75) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x000350ca) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x000350ca) popup_call2_audio_second_window_t

0x26ad,	// (0x00028235) bg_popup_call2_in_pane_cp02

0x26b7,	// (0x0002823f) call_type_pane_cp04

0x26bf,	// (0x00028247) popup_call2_audio_wait_window_g1

0x26c7,	// (0x0002824f) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00034ca3) popup_call2_audio_wait_window_g

0x26cf,	// (0x00028257) popup_call2_audio_wait_window_t3

0xb2e0,	// (0x00030e68) bg_popup_call2_act_pane_ParamLimits

0xb2e0,	// (0x00030e68) bg_popup_call2_act_pane

0xb3a0,	// (0x00030f28) call_type_pane_cp03_ParamLimits

0xb3a0,	// (0x00030f28) call_type_pane_cp03

0xb404,	// (0x00030f8c) popup_call2_audio_first_window_g1_ParamLimits

0xb404,	// (0x00030f8c) popup_call2_audio_first_window_g1

0xb474,	// (0x00030ffc) popup_call2_audio_first_window_g2_ParamLimits

0xb474,	// (0x00030ffc) popup_call2_audio_first_window_g2

0x54a3,	// (0x0002b02b) popup_call2_audio_first_window_g3_ParamLimits

0x54a3,	// (0x0002b02b) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x000350d3) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x000350d3) popup_call2_audio_first_window_g

0xb552,	// (0x000310da) popup_call2_audio_first_window_t1_ParamLimits

0xb552,	// (0x000310da) popup_call2_audio_first_window_t1

0xb655,	// (0x000311dd) popup_call2_audio_first_window_t4_ParamLimits

0xb655,	// (0x000311dd) popup_call2_audio_first_window_t4

0xb738,	// (0x000312c0) popup_call2_audio_first_window_t5_ParamLimits

0xb738,	// (0x000312c0) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x000350de) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x000350de) popup_call2_audio_first_window_t

0x2900,	// (0x00028488) bg_popup_call2_act_pane_g1

0xbda5,	// (0x0003192d) popup_cale_lunar_info_window_t1

0xbdb3,	// (0x0003193b) popup_cale_lunar_info_window_t2

0xbdc1,	// (0x00031949) popup_cale_lunar_info_window_t3

0x26ad,	// (0x00028235) bg_popup_call2_bubble_pane

0xb839,	// (0x000313c1) bg_popup_call2_in_pane_cp01_ParamLimits

0xb839,	// (0x000313c1) bg_popup_call2_in_pane_cp01

0x2365,	// (0x00027eed) call_type_pane_cp02

0xb881,	// (0x00031409) popup_call2_audio_out_window_g1_ParamLimits

0xb881,	// (0x00031409) popup_call2_audio_out_window_g1

0xb8ad,	// (0x00031435) popup_call2_audio_out_window_g2_ParamLimits

0xb8ad,	// (0x00031435) popup_call2_audio_out_window_g2

0xb8d5,	// (0x0003145d) popup_call2_audio_out_window_g3_ParamLimits

0xb8d5,	// (0x0003145d) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x000350e7) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x000350e7) popup_call2_audio_out_window_g

0xb910,	// (0x00031498) popup_call2_audio_out_window_t1_ParamLimits

0xb910,	// (0x00031498) popup_call2_audio_out_window_t1

0xb96f,	// (0x000314f7) popup_call2_audio_out_window_t2_ParamLimits

0xb96f,	// (0x000314f7) popup_call2_audio_out_window_t2

0xb9c3,	// (0x0003154b) popup_call2_audio_out_window_t3_ParamLimits

0xb9c3,	// (0x0003154b) popup_call2_audio_out_window_t3

0xb9d9,	// (0x00031561) popup_call2_audio_out_window_t4_ParamLimits

0xb9d9,	// (0x00031561) popup_call2_audio_out_window_t4

0xb9ef,	// (0x00031577) popup_call2_audio_out_window_t5_ParamLimits

0xb9ef,	// (0x00031577) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x000350f0) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x000350f0) popup_call2_audio_out_window_t

0xba53,	// (0x000315db) bg_popup_call2_in_pane_ParamLimits

0xba53,	// (0x000315db) bg_popup_call2_in_pane

0xbaaf,	// (0x00031637) popup_call2_audio_in_window_g1_ParamLimits

0xbaaf,	// (0x00031637) popup_call2_audio_in_window_g1

0xbae7,	// (0x0003166f) popup_call2_audio_in_window_g2_ParamLimits

0xbae7,	// (0x0003166f) popup_call2_audio_in_window_g2

0xbb1f,	// (0x000316a7) popup_call2_audio_in_window_g3_ParamLimits

0xbb1f,	// (0x000316a7) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x000350fd) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x000350fd) popup_call2_audio_in_window_g

0xbb77,	// (0x000316ff) popup_call2_audio_in_window_t1_ParamLimits

0xbb77,	// (0x000316ff) popup_call2_audio_in_window_t1

0xbbf7,	// (0x0003177f) popup_call2_audio_in_window_t2_ParamLimits

0xbbf7,	// (0x0003177f) popup_call2_audio_in_window_t2

0xbc77,	// (0x000317ff) popup_call2_audio_in_window_t3_ParamLimits

0xbc77,	// (0x000317ff) popup_call2_audio_in_window_t3

0xbc91,	// (0x00031819) popup_call2_audio_in_window_t4_ParamLimits

0xbc91,	// (0x00031819) popup_call2_audio_in_window_t4

0xbca3,	// (0x0003182b) popup_call2_audio_in_window_t5_ParamLimits

0xbca3,	// (0x0003182b) popup_call2_audio_in_window_t5

0xbcb8,	// (0x00031840) popup_call2_audio_in_window_t6_ParamLimits

0xbcb8,	// (0x00031840) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00035106) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00035106) popup_call2_audio_in_window_t

0x2900,	// (0x00028488) bg_popup_call2_in_pane_g1

0xbdcf,	// (0x00031957) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0003516e) popup_cale_lunar_info_window_t

0x2908,	// (0x00028490) bg_popup_call2_rect_pane_ParamLimits

0x2908,	// (0x00028490) bg_popup_call2_rect_pane

0x26ad,	// (0x00028235) call2_cli_visual_graphic_pane

0x26ad,	// (0x00028235) call2_cli_visual_text_pane

0xbfa5,	// (0x00031b2d) smil_status_volume_pane_g3

0x0002,

0x2c86,	// (0x0002880e) call2_cli_visual_graphic_pane_g1

0x2c86,	// (0x0002880e) call2_cli_visual_graphic_pane_g2

0x2c86,	// (0x0002880e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00035113) call2_cli_visual_graphic_pane_g

0xbccd,	// (0x00031855) bg_popup_call2_rect_pane_g1

0x2d9f,	// (0x00028927) bg_popup_call2_rect_pane_g2

0xbcd5,	// (0x0003185d) bg_popup_call2_rect_pane_g3

0xbcdd,	// (0x00031865) bg_popup_call2_rect_pane_g4

0xbce5,	// (0x0003186d) bg_popup_call2_rect_pane_g5

0xbced,	// (0x00031875) bg_popup_call2_rect_pane_g6

0xbcf5,	// (0x0003187d) bg_popup_call2_rect_pane_g7

0xbcfd,	// (0x00031885) bg_popup_call2_rect_pane_g8

0xbd05,	// (0x0003188d) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0003511a) bg_popup_call2_rect_pane_g

0xbd0d,	// (0x00031895) bg_popup_call2_bubble_pane_g1

0xbd15,	// (0x0003189d) bg_popup_call2_bubble_pane_g2

0xbd1d,	// (0x000318a5) bg_popup_call2_bubble_pane_g3

0xbd25,	// (0x000318ad) bg_popup_call2_bubble_pane_g4

0xbd2d,	// (0x000318b5) bg_popup_call2_bubble_pane_g5

0xbd35,	// (0x000318bd) bg_popup_call2_bubble_pane_g6

0xbd3d,	// (0x000318c5) bg_popup_call2_bubble_pane_g7

0xbd45,	// (0x000318cd) bg_popup_call2_bubble_pane_g8

0xbd4d,	// (0x000318d5) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0003512d) bg_popup_call2_bubble_pane_g

0x2e1d,	// (0x000289a5) aid_cale_week_size_cell_pane

0x331b,	// (0x00028ea3) aid_cams_cif_uncrop_pane_ParamLimits

0x331b,	// (0x00028ea3) aid_cams_cif_uncrop_pane

0x3512,	// (0x0002909a) aid_cams_size_cell_ParamLimits

0x3512,	// (0x0002909a) aid_cams_size_cell

0x3526,	// (0x000290ae) grid_cams_pane_ParamLimits

0x3540,	// (0x000290c8) linegrid_cams_pane_ParamLimits

0x3766,	// (0x000292ee) call_video_pane_t1

0x3784,	// (0x0002930c) call_video_pane_t2

0x0001,

0xf292,	// (0x00034e1a) call_video_pane_t

0x3e12,	// (0x0002999a) aid_cale_month_size_cell_pane_ParamLimits

0x3e12,	// (0x0002999a) aid_cale_month_size_cell_pane

0xf62f,	// (0x000351b7) smil_status_volume_pane_g

0xbfb2,	// (0x00031b3a) volume_smil_pane_ParamLimits

0x1f82,	// (0x00027b0a) aid_popup2_width_pane

0x2cf7,	// (0x0002887f) cell_qdial_pane_g4_ParamLimits

0x2cf7,	// (0x0002887f) cell_qdial_pane_g4

0x4f4f,	// (0x0002aad7) aid_blid_cardinal_pane_ParamLimits

0x4f5b,	// (0x0002aae3) aid_blid_destination_pane_ParamLimits

0x4f5b,	// (0x0002aae3) aid_blid_destination_pane

0x2908,	// (0x00028490) bg_popup_call_poc_act_pane_ParamLimits

0x2908,	// (0x00028490) bg_popup_call_poc_act_pane

0x2908,	// (0x00028490) bg_popup_call_poc_inact_pane_ParamLimits

0x2908,	// (0x00028490) bg_popup_call_poc_inact_pane

0xbd55,	// (0x000318dd) bg_popup_call_poc_act_pane_g1

0xbd5d,	// (0x000318e5) bg_popup_call_poc_act_pane_g2

0xbd65,	// (0x000318ed) bg_popup_call_poc_act_pane_g3

0xbd25,	// (0x000318ad) bg_popup_call_poc_act_pane_g4

0xbd2d,	// (0x000318b5) bg_popup_call_poc_act_pane_g5

0xbd6d,	// (0x000318f5) bg_popup_call_poc_act_pane_g6

0xbd3d,	// (0x000318c5) bg_popup_call_poc_act_pane_g7

0xbd75,	// (0x000318fd) bg_popup_call_poc_act_pane_g8

0x26ad,	// (0x00028235) main_usb_pane

0xbece,	// (0x00031a56) popup_cale_lunar_info_window

0x3aba,	// (0x00029642) im_reading_pane_t1_ParamLimits

0x3af3,	// (0x0002967b) list_im_pane_ParamLimits

0x3b04,	// (0x0002968c) scroll_pane_cp07_ParamLimits

0x26ad,	// (0x00028235) grid_highlight_pane_cp012

0x2908,	// (0x00028490) mup_scale_pane_ParamLimits

0x59b0,	// (0x0002b538) main_usb_pane_g1_ParamLimits

0x59b0,	// (0x0002b538) main_usb_pane_g1

0x63c2,	// (0x0002bf4a) main_usb_pane_g2_ParamLimits

0x63c2,	// (0x0002bf4a) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00035157) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00035157) main_usb_pane_g

0x63d8,	// (0x0002bf60) main_usb_pane_t1_ParamLimits

0x63d8,	// (0x0002bf60) main_usb_pane_t1

0x63ea,	// (0x0002bf72) main_usb_pane_t2_ParamLimits

0x63ea,	// (0x0002bf72) main_usb_pane_t2

0x63fc,	// (0x0002bf84) main_usb_pane_t3_ParamLimits

0x63fc,	// (0x0002bf84) main_usb_pane_t3

0x640e,	// (0x0002bf96) main_usb_pane_t4_ParamLimits

0x640e,	// (0x0002bf96) main_usb_pane_t4

0x6420,	// (0x0002bfa8) main_usb_pane_t5_ParamLimits

0x6420,	// (0x0002bfa8) main_usb_pane_t5

0x6432,	// (0x0002bfba) main_usb_pane_t6_ParamLimits

0x6432,	// (0x0002bfba) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0003515c) main_usb_pane_t_ParamLimits

0x4efe,	// (0x0002aa86) aid_text_placing

0x4f07,	// (0x0002aa8f) main_location2_pane_t1_ParamLimits

0x4f19,	// (0x0002aaa1) main_location2_pane_t2_ParamLimits

0x4f2b,	// (0x0002aab3) main_location2_pane_t3_ParamLimits

0x4f3d,	// (0x0002aac5) main_location2_pane_t4_ParamLimits

0x4f3d,	// (0x0002aac5) main_location2_pane_t4

0xf3f3,	// (0x00034f7b) main_location2_pane_t_ParamLimits

0x29e0,	// (0x00028568) find_pinb_pane_g2_ParamLimits

0x29e0,	// (0x00028568) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00034cc9) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00034cc9) find_pinb_pane_g

0x29ec,	// (0x00028574) find_pinb_pane_t1_ParamLimits

0x29fe,	// (0x00028586) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00034cce) find_pinb_pane_t_ParamLimits

0x26ad,	// (0x00028235) main_call3_pane

0x41ab,	// (0x00029d33) cale_month_day_heading_pane_t1_ParamLimits

0x4209,	// (0x00029d91) cale_month_day_heading_pane_t2_ParamLimits

0x426e,	// (0x00029df6) cale_month_day_heading_pane_t3_ParamLimits

0x42d3,	// (0x00029e5b) cale_month_day_heading_pane_t4_ParamLimits

0x4338,	// (0x00029ec0) cale_month_day_heading_pane_t5_ParamLimits

0x43ad,	// (0x00029f35) cale_month_day_heading_pane_t6_ParamLimits

0x4422,	// (0x00029faa) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00034e52) cale_month_day_heading_pane_t_ParamLimits

0x464c,	// (0x0002a1d4) smil_status_volume_pane

0x598c,	// (0x0002b514) postcard_address_pane_ParamLimits

0x598c,	// (0x0002b514) postcard_address_pane

0x599e,	// (0x0002b526) postcard_message_pane_ParamLimits

0x599e,	// (0x0002b526) postcard_message_pane

0x63a0,	// (0x0002bf28) call2_cli_visual_pane_t1_ParamLimits

0x63a0,	// (0x0002bf28) call2_cli_visual_pane_t1

0x6bc4,	// (0x0002c74c) postcard_message_pane_t1_ParamLimits

0x6bc4,	// (0x0002c74c) postcard_message_pane_t1

0x6bad,	// (0x0002c735) postcard_address_pane_t1_ParamLimits

0x6bad,	// (0x0002c735) postcard_address_pane_t1

0x6b99,	// (0x0002c721) popup_call3_audio_in_window_ParamLimits

0x6b99,	// (0x0002c721) popup_call3_audio_in_window

0x6a24,	// (0x0002c5ac) bg_popup_call3_in_pane_ParamLimits

0x6a24,	// (0x0002c5ac) bg_popup_call3_in_pane

0x6a9a,	// (0x0002c622) popup_call3_audio_in_window_g1_ParamLimits

0x6a9a,	// (0x0002c622) popup_call3_audio_in_window_g1

0x6aba,	// (0x0002c642) popup_call3_audio_in_window_g2_ParamLimits

0x6aba,	// (0x0002c642) popup_call3_audio_in_window_g2

0x6ada,	// (0x0002c662) popup_call3_audio_in_window_g3_ParamLimits

0x6ada,	// (0x0002c662) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x000351be) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x000351be) popup_call3_audio_in_window_g

0x6b0b,	// (0x0002c693) popup_call3_audio_in_window_t1_ParamLimits

0x6b0b,	// (0x0002c693) popup_call3_audio_in_window_t1

0x6b49,	// (0x0002c6d1) popup_call3_audio_in_window_t2_ParamLimits

0x6b49,	// (0x0002c6d1) popup_call3_audio_in_window_t2

0x6b87,	// (0x0002c70f) popup_call3_audio_in_window_t3_ParamLimits

0x6b87,	// (0x0002c70f) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x000351c7) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x000351c7) popup_call3_audio_in_window_t

0x51b5,	// (0x0002ad3d) bg_popup_call3_rect_pane

0xbccd,	// (0x00031855) bg_popup_call3_rect_pane_g1

0x2d9f,	// (0x00028927) bg_popup_call3_rect_pane_g2

0xbcd5,	// (0x0003185d) bg_popup_call3_rect_pane_g3

0xbcdd,	// (0x00031865) bg_popup_call3_rect_pane_g4

0xbce5,	// (0x0003186d) bg_popup_call3_rect_pane_g5

0xbced,	// (0x00031875) bg_popup_call3_rect_pane_g6

0xbcf5,	// (0x0003187d) bg_popup_call3_rect_pane_g7

0x549b,	// (0x0002b023) mup_visualizer_osc_pane

0x54b1,	// (0x0002b039) mup_visualizer_spec_pane

0x6a54,	// (0x0002c5dc) call3_video_qcif_pane_ParamLimits

0x6a54,	// (0x0002c5dc) call3_video_qcif_pane

0x6a67,	// (0x0002c5ef) call3_video_qcif_uncrop_pane_ParamLimits

0x6a67,	// (0x0002c5ef) call3_video_qcif_uncrop_pane

0x6a75,	// (0x0002c5fd) call3_video_subqcif_pane_ParamLimits

0x6a75,	// (0x0002c5fd) call3_video_subqcif_pane

0x6a89,	// (0x0002c611) call3_video_subqcif_uncrop_pane_ParamLimits

0x6a89,	// (0x0002c611) call3_video_subqcif_uncrop_pane

0x6afa,	// (0x0002c682) popup_call3_audio_in_window_g4_ParamLimits

0x6afa,	// (0x0002c682) popup_call3_audio_in_window_g4

0x6a13,	// (0x0002c59b) mup_spec_half_pane

0x6a1c,	// (0x0002c5a4) mup_spec_half_pane_cp

0xbf65,	// (0x00031aed) mup_osc_middle_pane

0xbf6e,	// (0x00031af6) mup_visualizer_osc_pane_g1

0x69f3,	// (0x0002c57b) mup_spec_bar_pane_ParamLimits

0x69f3,	// (0x0002c57b) mup_spec_bar_pane

0xbf52,	// (0x00031ada) mup_spec_bar_pane_g1

0xbf5c,	// (0x00031ae4) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x000351b2) mup_spec_bar_pane_g

0x2e1d,	// (0x000289a5) aid_cale_week_size_cell_pane_ParamLimits

0x2e30,	// (0x000289b8) bg_cale_heading_pane_ParamLimits

0x2e44,	// (0x000289cc) bg_cale_pane_cp01_ParamLimits

0x2e5d,	// (0x000289e5) cale_week_corner_pane_ParamLimits

0x2e73,	// (0x000289fb) cale_week_day_heading_pane_ParamLimits

0x2e87,	// (0x00028a0f) cale_week_scroll_pane_g1_ParamLimits

0x2e98,	// (0x00028a20) cale_week_scroll_pane_g2_ParamLimits

0x2ea9,	// (0x00028a31) cale_week_scroll_pane_g3_ParamLimits

0x2eba,	// (0x00028a42) cale_week_scroll_pane_g4_ParamLimits

0x2ecb,	// (0x00028a53) cale_week_scroll_pane_g5_ParamLimits

0x2ede,	// (0x00028a66) cale_week_scroll_pane_g6_ParamLimits

0x2ef1,	// (0x00028a79) cale_week_scroll_pane_g7_ParamLimits

0x2f04,	// (0x00028a8c) cale_week_scroll_pane_g8_ParamLimits

0x2f17,	// (0x00028a9f) cale_week_scroll_pane_g9_ParamLimits

0x2f28,	// (0x00028ab0) cale_week_scroll_pane_g10_ParamLimits

0x2f39,	// (0x00028ac1) cale_week_scroll_pane_g11_ParamLimits

0x2f4a,	// (0x00028ad2) cale_week_scroll_pane_g12_ParamLimits

0x2f5b,	// (0x00028ae3) cale_week_scroll_pane_g13_ParamLimits

0x2f6c,	// (0x00028af4) cale_week_scroll_pane_g14_ParamLimits

0x2f7d,	// (0x00028b05) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00034d5a) cale_week_scroll_pane_g_ParamLimits

0x2f8e,	// (0x00028b16) cale_week_time_pane_ParamLimits

0x2fa1,	// (0x00028b29) grid_cale_week_pane_ParamLimits

0x2fb6,	// (0x00028b3e) listscroll_cale_week_pane_t1

0x2fc8,	// (0x00028b50) scroll_pane_cp08_ParamLimits

0x3e76,	// (0x000299fe) cale_month_corner_pane_ParamLimits

0x4158,	// (0x00029ce0) cale_month_pane_t1

0x416a,	// (0x00029cf2) cale_month_week_pane_ParamLimits

0x4b40,	// (0x0002a6c8) popup_call_status_window_g1_ParamLimits

0x4b54,	// (0x0002a6dc) popup_call_status_window_g2_ParamLimits

0x4b68,	// (0x0002a6f0) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00034f02) popup_call_status_window_g_ParamLimits

0x4bd0,	// (0x0002a758) aid_call2_pane

0x57d4,	// (0x0002b35c) msg_header_pane_g1

0x598c,	// (0x0002b514) postcard_address2_pane_ParamLimits

0x598c,	// (0x0002b514) postcard_address2_pane

0x599e,	// (0x0002b526) postcard_message2_pane_ParamLimits

0x599e,	// (0x0002b526) postcard_message2_pane

0x69a5,	// (0x0002c52d) message2_row_pane_ParamLimits

0x69a5,	// (0x0002c52d) message2_row_pane

0x69c1,	// (0x0002c549) address2_row_pane_ParamLimits

0x69c1,	// (0x0002c549) address2_row_pane

0xbf20,	// (0x00031aa8) postcard_message2_row_pane_g1

0xbf28,	// (0x00031ab0) postcard_message2_row_pane_t1

0xbf20,	// (0x00031aa8) address2_row_pane_g1

0xbf28,	// (0x00031ab0) address2_row_pane_t1

0x0f17,	// (0x00026a9f) aid_size_cell_vorec

0x26ad,	// (0x00028235) main_rss_pane

0x69d4,	// (0x0002c55c) rss_list_single_pane_ParamLimits

0x69d4,	// (0x0002c55c) rss_list_single_pane

0xbf36,	// (0x00031abe) rss_list_single_pane_t1

0xbf44,	// (0x00031acc) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x000351ad) rss_list_single_pane_t

0x26ad,	// (0x00028235) main_camera2_pane

0x26ad,	// (0x00028235) main_video2_pane

0x0fd9,	// (0x00026b61) cams_zoom_pane_cp2_ParamLimits

0x0fd9,	// (0x00026b61) cams_zoom_pane_cp2

0x0ff9,	// (0x00026b81) image2_vga_pane_ParamLimits

0x0ff9,	// (0x00026b81) image2_vga_pane

0x104a,	// (0x00026bd2) main_camera2_pane_g1_ParamLimits

0x104a,	// (0x00026bd2) main_camera2_pane_g1

0x106a,	// (0x00026bf2) main_camera2_pane_g2_ParamLimits

0x106a,	// (0x00026bf2) main_camera2_pane_g2

0x108a,	// (0x00026c12) main_camera2_pane_g3_ParamLimits

0x108a,	// (0x00026c12) main_camera2_pane_g3

0x10aa,	// (0x00026c32) main_camera2_pane_g4_ParamLimits

0x10aa,	// (0x00026c32) main_camera2_pane_g4

0x10ca,	// (0x00026c52) main_camera2_pane_g5_ParamLimits

0x10ca,	// (0x00026c52) main_camera2_pane_g5

0x10ea,	// (0x00026c72) main_camera2_pane_g6_ParamLimits

0x10ea,	// (0x00026c72) main_camera2_pane_g6

0x110a,	// (0x00026c92) main_camera2_pane_g7_ParamLimits

0x110a,	// (0x00026c92) main_camera2_pane_g7

0x112a,	// (0x00026cb2) main_camera2_pane_g8_ParamLimits

0x112a,	// (0x00026cb2) main_camera2_pane_g8

0x0008,

0xf646,	// (0x000351ce) main_camera2_pane_g_ParamLimits

0xf646,	// (0x000351ce) main_camera2_pane_g

0x116a,	// (0x00026cf2) main_camera2_pane_t1_ParamLimits

0x116a,	// (0x00026cf2) main_camera2_pane_t1

0x119f,	// (0x00026d27) main_camera2_pane_t2_ParamLimits

0x119f,	// (0x00026d27) main_camera2_pane_t2

0x11c5,	// (0x00026d4d) main_camera2_pane_t3_ParamLimits

0x11c5,	// (0x00026d4d) main_camera2_pane_t3

0x1223,	// (0x00026dab) main_camera2_pane_t4_ParamLimits

0x1223,	// (0x00026dab) main_camera2_pane_t4

0x0006,

0xf659,	// (0x000351e1) main_camera2_pane_t_ParamLimits

0xf659,	// (0x000351e1) main_camera2_pane_t

0x12b5,	// (0x00026e3d) cams_zoom_pane_cp4_ParamLimits

0x12b5,	// (0x00026e3d) cams_zoom_pane_cp4

0x12cb,	// (0x00026e53) image2_cif_pane_ParamLimits

0x12cb,	// (0x00026e53) image2_cif_pane

0x12f6,	// (0x00026e7e) image2_subqcif_pane_ParamLimits

0x12f6,	// (0x00026e7e) image2_subqcif_pane

0x1310,	// (0x00026e98) main_video2_pane_g1_ParamLimits

0x1310,	// (0x00026e98) main_video2_pane_g1

0x132a,	// (0x00026eb2) main_video2_pane_g2_ParamLimits

0x132a,	// (0x00026eb2) main_video2_pane_g2

0x1340,	// (0x00026ec8) main_video2_pane_g3_ParamLimits

0x1340,	// (0x00026ec8) main_video2_pane_g3

0x1356,	// (0x00026ede) main_video2_pane_g4_ParamLimits

0x1356,	// (0x00026ede) main_video2_pane_g4

0x136c,	// (0x00026ef4) main_video2_pane_g5_ParamLimits

0x136c,	// (0x00026ef4) main_video2_pane_g5

0x1382,	// (0x00026f0a) main_video2_pane_g6_ParamLimits

0x1382,	// (0x00026f0a) main_video2_pane_g6

0x0005,

0xf668,	// (0x000351f0) main_video2_pane_g_ParamLimits

0xf668,	// (0x000351f0) main_video2_pane_g

0x139c,	// (0x00026f24) main_video2_pane_t1_ParamLimits

0x139c,	// (0x00026f24) main_video2_pane_t1

0x13c0,	// (0x00026f48) main_video2_pane_t2_ParamLimits

0x13c0,	// (0x00026f48) main_video2_pane_t2

0x140e,	// (0x00026f96) main_video2_pane_t3_ParamLimits

0x140e,	// (0x00026f96) main_video2_pane_t3

0x0002,

0xf675,	// (0x000351fd) main_video2_pane_t_ParamLimits

0xf675,	// (0x000351fd) main_video2_pane_t

0x64ed,	// (0x0002c075) call_muted_g2

0x0001,

0xf617,	// (0x0003519f) call_muted_g

0x26ad,	// (0x00028235) main_mup2_pane

0x6bdf,	// (0x0002c767) main_mup2_pane_g1_ParamLimits

0x6bdf,	// (0x0002c767) main_mup2_pane_g1

0x6beb,	// (0x0002c773) main_mup2_pane_g2_ParamLimits

0x6beb,	// (0x0002c773) main_mup2_pane_g2

0xc0d6,	// (0x00031c5e) main_mup_pane_g13_cp1

0xc0de,	// (0x00031c66) mup_volume_pane_cp1

0x6c07,	// (0x0002c78f) main_mup2_pane_g4_ParamLimits

0x6c07,	// (0x0002c78f) main_mup2_pane_g4

0x6c19,	// (0x0002c7a1) main_mup2_pane_g5_ParamLimits

0x6c19,	// (0x0002c7a1) main_mup2_pane_g5

0x6c2b,	// (0x0002c7b3) main_mup2_pane_g6_ParamLimits

0x6c2b,	// (0x0002c7b3) main_mup2_pane_g6

0x6c3d,	// (0x0002c7c5) main_mup2_pane_g7_ParamLimits

0x6c3d,	// (0x0002c7c5) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00035204) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00035204) main_mup2_pane_g

0x6c55,	// (0x0002c7dd) main_mup2_pane_t1_ParamLimits

0x6c55,	// (0x0002c7dd) main_mup2_pane_t1

0x6c6b,	// (0x0002c7f3) main_mup2_pane_t2_ParamLimits

0x6c6b,	// (0x0002c7f3) main_mup2_pane_t2

0x6c81,	// (0x0002c809) main_mup2_pane_t3_ParamLimits

0x6c81,	// (0x0002c809) main_mup2_pane_t3

0x6c97,	// (0x0002c81f) main_mup2_pane_t4_ParamLimits

0x6c97,	// (0x0002c81f) main_mup2_pane_t4

0x6caf,	// (0x0002c837) main_mup2_pane_t5_ParamLimits

0x6caf,	// (0x0002c837) main_mup2_pane_t5

0x6cc7,	// (0x0002c84f) main_mup2_pane_t6_ParamLimits

0x6cc7,	// (0x0002c84f) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00035213) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00035213) main_mup2_pane_t

0x6cf7,	// (0x0002c87f) mup2_visualizer_pane_ParamLimits

0x6cf7,	// (0x0002c87f) mup2_visualizer_pane

0x6d25,	// (0x0002c8ad) mup_progress_pane_cp_ParamLimits

0x6d25,	// (0x0002c8ad) mup_progress_pane_cp

0xc0b8,	// (0x00031c40) mup_volume_pane_cp_ParamLimits

0xc0b8,	// (0x00031c40) mup_volume_pane_cp

0x6d39,	// (0x0002c8c1) mup2_visualizer_pane_g1_ParamLimits

0x6d39,	// (0x0002c8c1) mup2_visualizer_pane_g1

0xbff7,	// (0x00031b7f) mup2_visualizer_pane_g2_ParamLimits

0xbff7,	// (0x00031b7f) mup2_visualizer_pane_g2

0x6d50,	// (0x0002c8d8) mup2_visualizer_pane_g3_ParamLimits

0x6d50,	// (0x0002c8d8) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00035220) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00035220) mup2_visualizer_pane_g

0x5d58,	// (0x0002b8e0) aid_size_cell_fmradio

0x669f,	// (0x0002c227) aid_height_parent_landcape

0x3bba,	// (0x00029742) wml_content_pane_cp

0x3bc2,	// (0x0002974a) wml_tabs_pane

0x3bcb,	// (0x00029753) popup_wml_miniature_window

0x3bd3,	// (0x0002975b) scroll_pane_cp021

0x3be7,	// (0x0002976f) wml_content_pane_comp8

0x26ad,	// (0x00028235) bg_popup_sub_pane_cp05

0xc015,	// (0x00031b9d) popup_wml_miniature_window_g1

0xc01d,	// (0x00031ba5) wml_miniature_view_pane

0x6d5c,	// (0x0002c8e4) aid_size_wml_view

0x6d64,	// (0x0002c8ec) wml_miniature_view_pane_g1

0x6d6d,	// (0x0002c8f5) wml_miniature_view_pane_g2

0x6d76,	// (0x0002c8fe) wml_miniature_view_pane_g3

0x6d7e,	// (0x0002c906) wml_miniature_view_pane_g4

0x6d86,	// (0x0002c90e) wml_miniature_view_pane_g5

0x6d8e,	// (0x0002c916) wml_miniature_view_pane_g6

0x6d96,	// (0x0002c91e) wml_miniature_view_pane_g7

0x6d9e,	// (0x0002c926) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00035227) wml_miniature_view_pane_g

0xc025,	// (0x00031bad) background_graphic_ParamLimits

0xc025,	// (0x00031bad) background_graphic

0xc031,	// (0x00031bb9) wml_tabs_2_pane

0xc03a,	// (0x00031bc2) wml_tabs_3_pane_ParamLimits

0xc03a,	// (0x00031bc2) wml_tabs_3_pane

0xc04c,	// (0x00031bd4) wml_tabs_4_pane_ParamLimits

0xc04c,	// (0x00031bd4) wml_tabs_4_pane

0xc062,	// (0x00031bea) wml_tabs_5_pane_ParamLimits

0xc062,	// (0x00031bea) wml_tabs_5_pane

0xc07c,	// (0x00031c04) wml_tabs_pane_g2_ParamLimits

0xc07c,	// (0x00031c04) wml_tabs_pane_g2

0xc090,	// (0x00031c18) wml_tabs_pane_g3_ParamLimits

0xc090,	// (0x00031c18) wml_tabs_pane_g3

0x6da6,	// (0x0002c92e) wml_tabs_2_active_pane_ParamLimits

0x6da6,	// (0x0002c92e) wml_tabs_2_active_pane

0x6dba,	// (0x0002c942) wml_tabs_2_passive_pane_ParamLimits

0x6dba,	// (0x0002c942) wml_tabs_2_passive_pane

0x6dce,	// (0x0002c956) wml_tabs_3_active_pane_cp_ParamLimits

0x6dce,	// (0x0002c956) wml_tabs_3_active_pane_cp

0x6de3,	// (0x0002c96b) wml_tabs_3_passive_pane_ParamLimits

0x6de3,	// (0x0002c96b) wml_tabs_3_passive_pane

0x6df6,	// (0x0002c97e) wml_tabs_3_passive_pane_cp_ParamLimits

0x6df6,	// (0x0002c97e) wml_tabs_3_passive_pane_cp

0x6e0d,	// (0x0002c995) tabs_4_active_pane

0x6e15,	// (0x0002c99d) tabs_4_passive_pane

0x6e1f,	// (0x0002c9a7) tabs_4_passive_pane_cp

0x6e27,	// (0x0002c9af) tabs_4_passive_pane_cp2

0x63ba,	// (0x0002bf42) aid_height_text

0x5471,	// (0x0002aff9) mup_volume_cont_pane_ParamLimits

0x5471,	// (0x0002aff9) mup_volume_cont_pane

0x299e,	// (0x00028526) aid_size_cell_pinb

0x29a8,	// (0x00028530) aid_size_list_pinb

0x6d11,	// (0x0002c899) mup2_volume_cont_pane_ParamLimits

0x6d11,	// (0x0002c899) mup2_volume_cont_pane

0xc0a4,	// (0x00031c2c) mup2_volume_cont_pane_g1_ParamLimits

0xc0a4,	// (0x00031c2c) mup2_volume_cont_pane_g1

0x1f8e,	// (0x00027b16) aid_size_cell_touch_ParamLimits

0x1f8e,	// (0x00027b16) aid_size_cell_touch

0x21f0,	// (0x00027d78) touch_pane_ParamLimits

0x21f0,	// (0x00027d78) touch_pane

0x1f70,	// (0x00027af8) main_rss2_pane

0xc0e6,	// (0x00031c6e) listscroll_rss2_pane

0xc0ef,	// (0x00031c77) rss2_navigation_pane

0xc0f7,	// (0x00031c7f) list_rss2_pane

0x4d8a,	// (0x0002a912) scroll_pane_cp22

0xc0ff,	// (0x00031c87) rss2_navigation_pane_g1

0xc108,	// (0x00031c90) rss2_navigation_pane_g2

0xc110,	// (0x00031c98) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x00035238) rss2_navigation_pane_g

0xc118,	// (0x00031ca0) rss2_navigation_pane_t1

0x6e31,	// (0x0002c9b9) rss2_list_single_pane_ParamLimits

0x6e31,	// (0x0002c9b9) rss2_list_single_pane

0xc126,	// (0x00031cae) rss2_list_single_pane_t2

0xc134,	// (0x00031cbc) rss2_list_single_pane_t3_ParamLimits

0xc134,	// (0x00031cbc) rss2_list_single_pane_t3

0xc151,	// (0x00031cd9) rss2_list_single_pane_t4

0x4634,	// (0x0002a1bc) smil_status_pane_g1

0x21e2,	// (0x00027d6a) main_image2_pane_ParamLimits

0x21e2,	// (0x00027d6a) main_image2_pane

0x114a,	// (0x00026cd2) main_camera2_pane_g9_ParamLimits

0x114a,	// (0x00026cd2) main_camera2_pane_g9

0x1278,	// (0x00026e00) main_camera2_pane_t5_ParamLimits

0x1278,	// (0x00026e00) main_camera2_pane_t5

0xbfc7,	// (0x00031b4f) main_camera2_pane_t6_ParamLimits

0xbfc7,	// (0x00031b4f) main_camera2_pane_t6

0x6e46,	// (0x0002c9ce) main_image2_pane_g1_ParamLimits

0x6e46,	// (0x0002c9ce) main_image2_pane_g1

0x5d0e,	// (0x0002b896) smil2_video_pane_ParamLimits

0x5d0e,	// (0x0002b896) smil2_video_pane

0x1fbe,	// (0x00027b46) aid_zoom_text_primary_cp

0x219e,	// (0x00027d26) popup_preview_fixed_window

0x3ab2,	// (0x0002963a) im_reading_pane_g1

0x0fc1,	// (0x00026b49) cams2_bc_adjust_pane_cp_ParamLimits

0x0fc1,	// (0x00026b49) cams2_bc_adjust_pane_cp

0x12a7,	// (0x00026e2f) cams2_bc_adjust_pane_ParamLimits

0x12a7,	// (0x00026e2f) cams2_bc_adjust_pane

0xc15f,	// (0x00031ce7) cams2_bc_adjust_pane_g1

0xc167,	// (0x00031cef) cams2_slider_pane

0xc170,	// (0x00031cf8) cams2_slider_pane_g1

0xc179,	// (0x00031d01) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0003523f) cams2_slider_pane_g

0x0d39,	// (0x000268c1) calc_display_pane_ParamLimits

0x0d61,	// (0x000268e9) calc_paper_pane_ParamLimits

0x0d84,	// (0x0002690c) grid_calc_pane_ParamLimits

0xb135,	// (0x00030cbd) popup_clock_digital_window_t1_ParamLimits

0x5b95,	// (0x0002b71d) main_image_pane_t1

0x0d1b,	// (0x000268a3) aid_size_cell_calc_ParamLimits

0x0d1b,	// (0x000268a3) aid_size_cell_calc

0x66e5,	// (0x0002c26d) popup_blid_sat_info2_window_ParamLimits

0x66e5,	// (0x0002c26d) popup_blid_sat_info2_window

0xc19b,	// (0x00031d23) aid_size_cell_blid

0xc1a3,	// (0x00031d2b) bg_popup_window_pane_cp07

0xc1c6,	// (0x00031d4e) grid_popup_blid_pane

0xc1d0,	// (0x00031d58) heading_pane_cp05_ParamLimits

0xc1d0,	// (0x00031d58) heading_pane_cp05

0xc29a,	// (0x00031e22) cell_popup_blid_pane_ParamLimits

0xc29a,	// (0x00031e22) cell_popup_blid_pane

0xc2be,	// (0x00031e46) cell_popup_blid_pane_g1

0xc2c6,	// (0x00031e4e) cell_popup_blid_pane_t1

0x6ce1,	// (0x0002c869) mup2_indicator_pane_ParamLimits

0x6ce1,	// (0x0002c869) mup2_indicator_pane

0x51b5,	// (0x0002ad3d) mup2_visualizer_osc_pane

0xc003,	// (0x00031b8b) mup2_visualizer_spec_pane_ParamLimits

0xc003,	// (0x00031b8b) mup2_visualizer_spec_pane

0x6e5c,	// (0x0002c9e4) mup2_spec_half_pane

0x6e65,	// (0x0002c9ed) mup2_spec_half_pane_cp

0x6e6d,	// (0x0002c9f5) mup2_spec_bar_pane_ParamLimits

0x6e6d,	// (0x0002c9f5) mup2_spec_bar_pane

0xbf52,	// (0x00031ada) mup2_spec_bar_pane_g1

0xbf5c,	// (0x00031ae4) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x000351b2) mup2_spec_bar_pane_g

0x6e8d,	// (0x0002ca15) mup2_osc_middle_pane

0xbf6e,	// (0x00031af6) mup2_visualizer_osc_pane_g1

0x2262,	// (0x00027dea) popup_number_entry_window_t1_ParamLimits

0x2275,	// (0x00027dfd) popup_number_entry_window_t2_ParamLimits

0x2287,	// (0x00027e0f) popup_number_entry_window_t3_ParamLimits

0x2299,	// (0x00027e21) popup_number_entry_window_t5_ParamLimits

0x2299,	// (0x00027e21) popup_number_entry_window_t5

0xf0ec,	// (0x00034c74) popup_number_entry_window_t_ParamLimits

0x22cd,	// (0x00027e55) text_title_cp2_ParamLimits

0xb174,	// (0x00030cfc) aid_hotspot_pointer_text2_pane

0xb18e,	// (0x00030d16) main_viewer_pane_g9_ParamLimits

0xb18e,	// (0x00030d16) main_viewer_pane_g9

0x4158,	// (0x00029ce0) cale_month_pane_t1_ParamLimits

0x46b0,	// (0x0002a238) bg_cale_pane_ParamLimits

0x46c8,	// (0x0002a250) list_cale_pane_ParamLimits

0x2fb6,	// (0x00028b3e) listscroll_cale_day_pane_t1

0x46d9,	// (0x0002a261) scroll_pane_cp09_ParamLimits

0x551f,	// (0x0002b0a7) main_mup_eq_pane_t1_ParamLimits

0x551f,	// (0x0002b0a7) main_mup_eq_pane_t1

0x5539,	// (0x0002b0c1) main_mup_eq_pane_t2_ParamLimits

0x5539,	// (0x0002b0c1) main_mup_eq_pane_t2

0x5553,	// (0x0002b0db) main_mup_eq_pane_t3_ParamLimits

0x5553,	// (0x0002b0db) main_mup_eq_pane_t3

0x556f,	// (0x0002b0f7) main_mup_eq_pane_t4_ParamLimits

0x556f,	// (0x0002b0f7) main_mup_eq_pane_t4

0x558b,	// (0x0002b113) main_mup_eq_pane_t5_ParamLimits

0x558b,	// (0x0002b113) main_mup_eq_pane_t5

0x55a7,	// (0x0002b12f) main_mup_eq_pane_t6_ParamLimits

0x55a7,	// (0x0002b12f) main_mup_eq_pane_t6

0x55bb,	// (0x0002b143) main_mup_eq_pane_t7_ParamLimits

0x55bb,	// (0x0002b143) main_mup_eq_pane_t7

0x55cf,	// (0x0002b157) main_mup_eq_pane_t8_ParamLimits

0x55cf,	// (0x0002b157) main_mup_eq_pane_t8

0x55e3,	// (0x0002b16b) main_mup_eq_pane_t9_ParamLimits

0x55e3,	// (0x0002b16b) main_mup_eq_pane_t9

0x55fd,	// (0x0002b185) main_mup_eq_pane_t10_ParamLimits

0x55fd,	// (0x0002b185) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00035001) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00035001) main_mup_eq_pane_t

0x56ac,	// (0x0002b234) mup_equalizer_pane_cp5_ParamLimits

0x56c0,	// (0x0002b248) mup_equalizer_pane_cp6_ParamLimits

0x56d4,	// (0x0002b25c) mup_equalizer_pane_cp7_ParamLimits

0x1f70,	// (0x00027af8) main_gallery_pane

0xbf77,	// (0x00031aff) smil2_volume_pane

0xbf7f,	// (0x00031b07) smil_status_volume_pane_g1_ParamLimits

0xbf92,	// (0x00031b1a) smil_status_volume_pane_g2_ParamLimits

0xbfa5,	// (0x00031b2d) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x000351b7) smil_status_volume_pane_g_ParamLimits

0xc1a3,	// (0x00031d2b) bg_popup_window_pane_cp07_ParamLimits

0xc1b1,	// (0x00031d39) blid_firmament_pane

0x6e96,	// (0x0002ca1e) aid_size_cell_gallery_ParamLimits

0x6e96,	// (0x0002ca1e) aid_size_cell_gallery

0x6eac,	// (0x0002ca34) grid_gallery_pane_ParamLimits

0x6eac,	// (0x0002ca34) grid_gallery_pane

0x6ec5,	// (0x0002ca4d) cell_gallery_pane_ParamLimits

0x6ec5,	// (0x0002ca4d) cell_gallery_pane

0xc2d4,	// (0x00031e5c) bg_cell_gallery_focus_pane_ParamLimits

0xc2d4,	// (0x00031e5c) bg_cell_gallery_focus_pane

0xc2e6,	// (0x00031e6e) cell_gallery_pane_g1_ParamLimits

0xc2e6,	// (0x00031e6e) cell_gallery_pane_g1

0x6f0e,	// (0x0002ca96) cell_gallery_pane_g2_ParamLimits

0x6f0e,	// (0x0002ca96) cell_gallery_pane_g2

0x6f1b,	// (0x0002caa3) cell_gallery_pane_g3_ParamLimits

0x6f1b,	// (0x0002caa3) cell_gallery_pane_g3

0xc2f2,	// (0x00031e7a) cell_gallery_pane_g4_ParamLimits

0xc2f2,	// (0x00031e7a) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00035265) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00035265) cell_gallery_pane_g

0xc2fe,	// (0x00031e86) bg_cell_gallery_focus_pane_g1

0xc306,	// (0x00031e8e) bg_cell_gallery_focus_pane_g2

0xc30e,	// (0x00031e96) bg_cell_gallery_focus_pane_g3

0xc316,	// (0x00031e9e) bg_cell_gallery_focus_pane_g4

0xc31e,	// (0x00031ea6) bg_cell_gallery_focus_pane_g5

0xc326,	// (0x00031eae) bg_cell_gallery_focus_pane_g6

0xc32e,	// (0x00031eb6) bg_cell_gallery_focus_pane_g7

0xc336,	// (0x00031ebe) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0003526e) bg_cell_gallery_focus_pane_g

0xc33e,	// (0x00031ec6) aid_firma_cardinal

0xc352,	// (0x00031eda) blid_firmament_pane_t1

0xc369,	// (0x00031ef1) blid_firmament_pane_t2

0xc380,	// (0x00031f08) blid_firmament_pane_t3

0xc397,	// (0x00031f1f) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0003527f) blid_firmament_pane_t

0xc3ae,	// (0x00031f36) blid_sat_info_pane

0xc3be,	// (0x00031f46) blid_sat_info_pane_g1

0xc3be,	// (0x00031f46) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00035288) blid_sat_info_pane_g

0xc3c8,	// (0x00031f50) blid_sat_info_pane_t1

0xc3d6,	// (0x00031f5e) smil2_volume_content_pane

0xc3df,	// (0x00031f67) smil2_volume_pane_g1

0xc3e7,	// (0x00031f6f) smil2_volume_content_pane_g1

0xc3f0,	// (0x00031f78) smil2_volume_content_pane_g2

0xc3f9,	// (0x00031f81) smil2_volume_content_pane_g3

0xc402,	// (0x00031f8a) smil2_volume_content_pane_g4

0xc40b,	// (0x00031f93) smil2_volume_content_pane_g5

0xc414,	// (0x00031f9c) smil2_volume_content_pane_g6

0xc41d,	// (0x00031fa5) smil2_volume_content_pane_g7

0xc426,	// (0x00031fae) smil2_volume_content_pane_g8

0xc42f,	// (0x00031fb7) smil2_volume_content_pane_g9

0xc438,	// (0x00031fc0) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0003528d) smil2_volume_content_pane_g

0x3022,	// (0x00028baa) cale_week_day_heading_pane_t1_ParamLimits

0x304f,	// (0x00028bd7) cale_week_day_heading_pane_t2_ParamLimits

0x307c,	// (0x00028c04) cale_week_day_heading_pane_t3_ParamLimits

0x30a9,	// (0x00028c31) cale_week_day_heading_pane_t4_ParamLimits

0x30d6,	// (0x00028c5e) cale_week_day_heading_pane_t5_ParamLimits

0x3103,	// (0x00028c8b) cale_week_day_heading_pane_t6_ParamLimits

0x3132,	// (0x00028cba) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00034d79) cale_week_day_heading_pane_t_ParamLimits

0x315f,	// (0x00028ce7) bg_cale_side_pane_ParamLimits

0x0e57,	// (0x000269df) cale_week_time_pane_t1_ParamLimits

0x0e6f,	// (0x000269f7) cale_week_time_pane_t2_ParamLimits

0x0e87,	// (0x00026a0f) cale_week_time_pane_t3_ParamLimits

0x0e9f,	// (0x00026a27) cale_week_time_pane_t4_ParamLimits

0x0eb7,	// (0x00026a3f) cale_week_time_pane_t5_ParamLimits

0x0ecf,	// (0x00026a57) cale_week_time_pane_t6_ParamLimits

0x0ee7,	// (0x00026a6f) cale_week_time_pane_t7_ParamLimits

0x0eff,	// (0x00026a87) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00034d88) cale_week_time_pane_t_ParamLimits

0x316d,	// (0x00028cf5) cell_cale_week_pane_g2_ParamLimits

0x315f,	// (0x00028ce7) bg_cale_side_pane_cp01_ParamLimits

0x4497,	// (0x0002a01f) cale_month_week_pane_t1_ParamLimits

0x44ae,	// (0x0002a036) cale_month_week_pane_t2_ParamLimits

0x44c5,	// (0x0002a04d) cale_month_week_pane_t3_ParamLimits

0x44dc,	// (0x0002a064) cale_month_week_pane_t4_ParamLimits

0x44f3,	// (0x0002a07b) cale_month_week_pane_t5_ParamLimits

0x450a,	// (0x0002a092) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00034e61) cale_month_week_pane_t_ParamLimits

0xb0b1,	// (0x00030c39) cell_cale_month_pane_g1_ParamLimits

0x1f70,	// (0x00027af8) main_cale_event_viewer_pane

0x1f70,	// (0x00027af8) listscroll_cale_event_viewer_pane

0xc441,	// (0x00031fc9) list_cale_ev_pane

0xc449,	// (0x00031fd1) scroll_pane_cp023

0xc455,	// (0x00031fdd) field_cale_ev_pane_ParamLimits

0xc455,	// (0x00031fdd) field_cale_ev_pane

0xc473,	// (0x00031ffb) field_cale_ev_content_pane_ParamLimits

0xc473,	// (0x00031ffb) field_cale_ev_content_pane

0xc47f,	// (0x00032007) field_cale_ev_pane_g1_ParamLimits

0xc47f,	// (0x00032007) field_cale_ev_pane_g1

0xc48b,	// (0x00032013) field_cale_ev_pane_g2_ParamLimits

0xc48b,	// (0x00032013) field_cale_ev_pane_g2

0xc4a3,	// (0x0003202b) field_cale_ev_pane_g3_ParamLimits

0xc4a3,	// (0x0003202b) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x000352a2) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x000352a2) field_cale_ev_pane_g

0xc4bb,	// (0x00032043) field_cale_ev_pane_t1_ParamLimits

0xc4bb,	// (0x00032043) field_cale_ev_pane_t1

0xc4d2,	// (0x0003205a) field_cale_ev_content_pane_t1_ParamLimits

0xc4d2,	// (0x0003205a) field_cale_ev_content_pane_t1

0x57c2,	// (0x0002b34a) bg_button_pane_cp01

0x2bda,	// (0x00028762) listscroll_cale_week_pane_ParamLimits

0x2e13,	// (0x0002899b) popup_toolbar_window_cp01

0x2fb6,	// (0x00028b3e) listscroll_cale_week_pane_t1_ParamLimits

0x2bda,	// (0x00028762) listscroll_cale_day_pane_ParamLimits

0x46a6,	// (0x0002a22e) popup_toolbar_window_cp02

0x2fb6,	// (0x00028b3e) listscroll_cale_day_pane_t1_ParamLimits

0x2bda,	// (0x00028762) main_cale_month_pane_ParamLimits

0x6919,	// (0x0002c4a1) popup_toolbar_window_cp03_ParamLimits

0x6919,	// (0x0002c4a1) popup_toolbar_window_cp03

0x5b73,	// (0x0002b6fb) main_image_pane_g2_ParamLimits

0x5b73,	// (0x0002b6fb) main_image_pane_g2

0x5b84,	// (0x0002b70c) main_image_pane_g3_ParamLimits

0x5b84,	// (0x0002b70c) main_image_pane_g3

0x0002,

0xf50b,	// (0x00035093) main_image_pane_g_ParamLimits

0xf50b,	// (0x00035093) main_image_pane_g

0x5b95,	// (0x0002b71d) main_image_pane_t1_ParamLimits

0x5bac,	// (0x0002b734) main_image_pane_t2_ParamLimits

0x5bac,	// (0x0002b734) main_image_pane_t2

0x5bbe,	// (0x0002b746) main_image_pane_t3_ParamLimits

0x5bbe,	// (0x0002b746) main_image_pane_t3

0x5be6,	// (0x0002b76e) main_image_pane_t4_ParamLimits

0x5be6,	// (0x0002b76e) main_image_pane_t4

0x0003,

0xf512,	// (0x0003509a) main_image_pane_t_ParamLimits

0xf512,	// (0x0003509a) main_image_pane_t

0x5c06,	// (0x0002b78e) popup_image_details_window_cp01

0x5c10,	// (0x0002b798) popup_toobar_trans_pane_cp01_ParamLimits

0x5c10,	// (0x0002b798) popup_toobar_trans_pane_cp01

0x67c4,	// (0x0002c34c) popup_image_details_window_ParamLimits

0x67c4,	// (0x0002c34c) popup_image_details_window

0xbed8,	// (0x00031a60) popup_image_focus_window

0x0f7b,	// (0x00026b03) camera2_autofocus_pane_ParamLimits

0x0f7b,	// (0x00026b03) camera2_autofocus_pane

0x1f70,	// (0x00027af8) bg_popup_sub_pane_cp06

0xc4f0,	// (0x00032078) popup_image_focus_window_g1

0xc4f8,	// (0x00032080) popup_image_focus_window_g2

0xc500,	// (0x00032088) popup_image_focus_window_g3

0xc508,	// (0x00032090) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x000352a9) popup_image_focus_window_g

0xc510,	// (0x00032098) popup_image_focus_window_t1

0xc51e,	// (0x000320a6) popup_image_focus_window_t2

0xc52e,	// (0x000320b6) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x000352b2) popup_image_focus_window_t

0xc53c,	// (0x000320c4) camera2_autofocus_pane_g1

0x21e2,	// (0x00027d6a) bg_tb_trans_pane_cp01

0xc54a,	// (0x000320d2) popup_image_details_window_g1

0xc55d,	// (0x000320e5) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x000352c4) popup_image_details_window_g

0xc586,	// (0x0003210e) popup_image_details_window_t1

0xc598,	// (0x00032120) popup_image_details_window_t2

0xc5b1,	// (0x00032139) popup_image_details_window_t3

0xc5c5,	// (0x0003214d) popup_image_details_window_t4

0xc5e0,	// (0x00032168) popup_image_details_window_t5

0x0004,

0xf743,	// (0x000352cb) popup_image_details_window_t

0x2bc6,	// (0x0002874e) bg_calc_paper_pane_ParamLimits

0xafb7,	// (0x00030b3f) grid_highlight_pane_cp013

0xafc1,	// (0x00030b49) list_calc_pane_ParamLimits

0xafd3,	// (0x00030b5b) scroll_pane_cp024

0x2bda,	// (0x00028762) bg_calc_display_pane_ParamLimits

0x0dae,	// (0x00026936) calc_display_pane_t1_ParamLimits

0x0dc0,	// (0x00026948) calc_display_pane_t2_ParamLimits

0xafdb,	// (0x00030b63) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00034cfb) calc_display_pane_t_ParamLimits

0x0e21,	// (0x000269a9) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00034d18) cell_calc_pane_g

0x0e2a,	// (0x000269b2) cell_calc_pane_t1

0x2c90,	// (0x00028818) grid_highlight_pane_cp02_ParamLimits

0x2ca6,	// (0x0002882e) toolbar_button_pane_cp01_ParamLimits

0x2ca6,	// (0x0002882e) toolbar_button_pane_cp01

0x5c52,	// (0x0002b7da) temp_image_control_pane_ParamLimits

0x5c52,	// (0x0002b7da) temp_image_control_pane

0x21e2,	// (0x00027d6a) main_mp3_pane

0xc5fa,	// (0x00032182) temp_image_control_pane_g1_ParamLimits

0xc5fa,	// (0x00032182) temp_image_control_pane_g1

0xc608,	// (0x00032190) temp_image_control_pane_g2_ParamLimits

0xc608,	// (0x00032190) temp_image_control_pane_g2

0xc61a,	// (0x000321a2) temp_image_control_pane_g3_ParamLimits

0xc61a,	// (0x000321a2) temp_image_control_pane_g3

0x6f58,	// (0x0002cae0) temp_image_control_pane_g4_ParamLimits

0x6f58,	// (0x0002cae0) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x000352d6) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x000352d6) temp_image_control_pane_g

0xc5fa,	// (0x00032182) main_mp3_pane_g1

0x6f6b,	// (0x0002caf3) main_mp3_pane_g2

0x0007,

0xf757,	// (0x000352df) main_mp3_pane_g

0xc65d,	// (0x000321e5) main_mp3_pane_t1

0x32e3,	// (0x00028e6b) main_camera_pane_g8_ParamLimits

0x32e3,	// (0x00028e6b) main_camera_pane_g8

0x3494,	// (0x0002901c) main_video_pane_g7_ParamLimits

0x3494,	// (0x0002901c) main_video_pane_g7

0xbfe5,	// (0x00031b6d) main_camera2_pane_t7_ParamLimits

0xbfe5,	// (0x00031b6d) main_camera2_pane_t7

0x3b7a,	// (0x00029702) scroll_pane_cp025_ParamLimits

0x3b7a,	// (0x00029702) scroll_pane_cp025

0x3b8e,	// (0x00029716) scroll_pane_cp026_ParamLimits

0x3b8e,	// (0x00029716) scroll_pane_cp026

0x3b9d,	// (0x00029725) wml_content_pane_ParamLimits

0x1f70,	// (0x00027af8) main_touch_calib_pane

0x7035,	// (0x0002cbbd) main_touch_calib_pane_g1

0x7041,	// (0x0002cbc9) main_touch_calib_pane_g2

0x704d,	// (0x0002cbd5) main_touch_calib_pane_g3

0x7059,	// (0x0002cbe1) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x000352fd) main_touch_calib_pane_g

0x7065,	// (0x0002cbed) main_touch_calib_pane_t1

0x707f,	// (0x0002cc07) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00035306) main_touch_calib_pane_t

0x5032,	// (0x0002abba) mup_progress_pane_cp02

0x5051,	// (0x0002abd9) navi_pane_g1

0x510a,	// (0x0002ac92) navi_pane_mp_t3

0x21e2,	// (0x00027d6a) main_mp3_pane_ParamLimits

0x6957,	// (0x0002c4df) navi_pane_ParamLimits

0xc5fa,	// (0x00032182) main_mp3_pane_g1_ParamLimits

0x6f6b,	// (0x0002caf3) main_mp3_pane_g2_ParamLimits

0x6f79,	// (0x0002cb01) main_mp3_pane_g3_ParamLimits

0x6f79,	// (0x0002cb01) main_mp3_pane_g3

0x6f87,	// (0x0002cb0f) main_mp3_pane_g4_ParamLimits

0x6f87,	// (0x0002cb0f) main_mp3_pane_g4

0xc62a,	// (0x000321b2) main_mp3_pane_g5_ParamLimits

0xc62a,	// (0x000321b2) main_mp3_pane_g5

0xc638,	// (0x000321c0) main_mp3_pane_g6_ParamLimits

0xc638,	// (0x000321c0) main_mp3_pane_g6

0xc645,	// (0x000321cd) main_mp3_pane_g7_ParamLimits

0xc645,	// (0x000321cd) main_mp3_pane_g7

0xc651,	// (0x000321d9) main_mp3_pane_g8_ParamLimits

0xc651,	// (0x000321d9) main_mp3_pane_g8

0xf757,	// (0x000352df) main_mp3_pane_g_ParamLimits

0x6f93,	// (0x0002cb1b) main_mp3_pane_t2

0x6fa1,	// (0x0002cb29) main_mp3_pane_t3

0xc66b,	// (0x000321f3) main_mp3_pane_t4

0xc679,	// (0x00032201) main_mp3_pane_t5

0x0005,

0xf768,	// (0x000352f0) main_mp3_pane_t

0xc687,	// (0x0003220f) mup_progress_pane_cp01

0x1fbe,	// (0x00027b46) aid_zoom_text_secondary2

0xc441,	// (0x00031fc9) list_cale_ev2_pane

0xc449,	// (0x00031fd1) scroll_pane_cp023_ParamLimits

0x70d5,	// (0x0002cc5d) field_cale_ev2_pane_ParamLimits

0x70d5,	// (0x0002cc5d) field_cale_ev2_pane

0x70f5,	// (0x0002cc7d) field_cale_ev2_pane_g1_ParamLimits

0x70f5,	// (0x0002cc7d) field_cale_ev2_pane_g1

0x7101,	// (0x0002cc89) field_cale_ev2_pane_g2_ParamLimits

0x7101,	// (0x0002cc89) field_cale_ev2_pane_g2

0x7119,	// (0x0002cca1) field_cale_ev2_pane_g3_ParamLimits

0x7119,	// (0x0002cca1) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x00035311) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x00035311) field_cale_ev2_pane_g

0x7131,	// (0x0002ccb9) field_cale_ev2_pane_t1_ParamLimits

0x7131,	// (0x0002ccb9) field_cale_ev2_pane_t1

0x7148,	// (0x0002ccd0) field_cale_ev2_pane_t2_ParamLimits

0x7148,	// (0x0002ccd0) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0003531a) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0003531a) field_cale_ev2_pane_t

0x5942,	// (0x0002b4ca) main_postcard_pane_g5_ParamLimits

0x5942,	// (0x0002b4ca) main_postcard_pane_g5

0x5958,	// (0x0002b4e0) main_postcard_pane_g6_ParamLimits

0x5958,	// (0x0002b4e0) main_postcard_pane_g6

0x322e,	// (0x00028db6) camera2_autofocus_pane_cp_ParamLimits

0x322e,	// (0x00028db6) camera2_autofocus_pane_cp

0x21e2,	// (0x00027d6a) main_mup3_pane

0x717d,	// (0x0002cd05) main_mup3_pane_g1_ParamLimits

0x717d,	// (0x0002cd05) main_mup3_pane_g1

0x719f,	// (0x0002cd27) main_mup3_pane_g2_ParamLimits

0x719f,	// (0x0002cd27) main_mup3_pane_g2

0x721d,	// (0x0002cda5) main_mup3_pane_g3_ParamLimits

0x721d,	// (0x0002cda5) main_mup3_pane_g3

0x725f,	// (0x0002cde7) main_mup3_pane_g4_ParamLimits

0x725f,	// (0x0002cde7) main_mup3_pane_g4

0x72a1,	// (0x0002ce29) main_mup3_pane_g5_ParamLimits

0x72a1,	// (0x0002ce29) main_mup3_pane_g5

0x72e3,	// (0x0002ce6b) main_mup3_pane_g6_ParamLimits

0x72e3,	// (0x0002ce6b) main_mup3_pane_g6

0xc69b,	// (0x00032223) main_mup3_pane_g7_ParamLimits

0xc69b,	// (0x00032223) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0003532a) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0003532a) main_mup3_pane_g

0x735d,	// (0x0002cee5) main_mup3_pane_t1_ParamLimits

0x735d,	// (0x0002cee5) main_mup3_pane_t1

0x73cd,	// (0x0002cf55) main_mup3_pane_t2_ParamLimits

0x73cd,	// (0x0002cf55) main_mup3_pane_t2

0x749d,	// (0x0002d025) main_mup3_pane_t4_ParamLimits

0x749d,	// (0x0002d025) main_mup3_pane_t4

0x74f3,	// (0x0002d07b) main_mup3_pane_t5_ParamLimits

0x74f3,	// (0x0002d07b) main_mup3_pane_t5

0x75a7,	// (0x0002d12f) main_mup3_pane_t6_ParamLimits

0x75a7,	// (0x0002d12f) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0003533b) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0003533b) main_mup3_pane_t

0x765b,	// (0x0002d1e3) mup3_progress_pane_ParamLimits

0x765b,	// (0x0002d1e3) mup3_progress_pane

0x76dd,	// (0x0002d265) popup_mup3_control_window_ParamLimits

0x76dd,	// (0x0002d265) popup_mup3_control_window

0xc6a9,	// (0x00032231) popup_mup3_text_window

0x770f,	// (0x0002d297) mup3_progress_pane_t1

0x7726,	// (0x0002d2ae) mup3_progress_pane_t2

0xc6b1,	// (0x00032239) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x00035348) mup3_progress_pane_t

0xc6c8,	// (0x00032250) mup_progress_pane_cp03

0x1f70,	// (0x00027af8) bg_tb_trans_pane_cp04

0x773d,	// (0x0002d2c5) mup3_volume_pane

0x7745,	// (0x0002d2cd) popup_mup3_control_window_g1

0x774e,	// (0x0002d2d6) mup3_volume_pane_g1

0x7757,	// (0x0002d2df) mup3_volume_pane_g2

0x7760,	// (0x0002d2e8) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0003534f) mup3_volume_pane_g

0x1f70,	// (0x00027af8) bg_tb_trans_pane_cp03

0xc6d8,	// (0x00032260) popup_mup3_text_window_g1

0xc6e0,	// (0x00032268) popup_mup3_text_window_t1

0x2c79,	// (0x00028801) list_calc_item_pane_g1_ParamLimits

0xc0cd,	// (0x00031c55) mup_volume_pane_cp_g1

0x7099,	// (0x0002cc21) main_touch_calib_pane_t3

0x70ad,	// (0x0002cc35) main_touch_calib_pane_t4

0x70c1,	// (0x0002cc49) main_touch_calib_pane_t5

0x1f7a,	// (0x00027b02) aid_cell_size_toolbar2

0x1f82,	// (0x00027b0a) aid_popup3_width_pane

0x1fbe,	// (0x00027b46) aid_zoom_text_msg_primary

0xb09b,	// (0x00030c23) vorec_t7

0x2be6,	// (0x0002876e) bg_calc_paper_pane_g1_ParamLimits

0x2bf2,	// (0x0002877a) bg_calc_paper_pane_g2_ParamLimits

0x2bfe,	// (0x00028786) bg_calc_paper_pane_g3_ParamLimits

0x2c0a,	// (0x00028792) bg_calc_paper_pane_g4_ParamLimits

0x2c16,	// (0x0002879e) bg_calc_paper_pane_g5_ParamLimits

0x2c22,	// (0x000287aa) bg_calc_paper_pane_g6_ParamLimits

0x2c31,	// (0x000287b9) bg_calc_paper_pane_g7_ParamLimits

0x2c40,	// (0x000287c8) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00034d02) bg_calc_paper_pane_g_ParamLimits

0x2c53,	// (0x000287db) calc_bg_paper_pane_g9_ParamLimits

0x3388,	// (0x00028f10) image_qvga_pane_ParamLimits

0x3388,	// (0x00028f10) image_qvga_pane

0x2908,	// (0x00028490) bg_popup_sub_pane_cp04_ParamLimits

0x5ad1,	// (0x0002b659) popup_mup_playback_window_g1_ParamLimits

0x5add,	// (0x0002b665) popup_mup_playback_window_t1_ParamLimits

0x5af2,	// (0x0002b67a) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0003508e) popup_mup_playback_window_t_ParamLimits

0x6bfb,	// (0x0002c783) main_mup2_pane_g3_ParamLimits

0x6bfb,	// (0x0002c783) main_mup2_pane_g3

0x380f,	// (0x00029397) popup_toolbar_window_cp04

0x62d4,	// (0x0002be5c) popup_call2_audio_second_window_g3_ParamLimits

0x62d4,	// (0x0002be5c) popup_call2_audio_second_window_g3

0xb4d8,	// (0x00031060) popup_call2_audio_first_window_g4_ParamLimits

0xb4d8,	// (0x00031060) popup_call2_audio_first_window_g4

0xbb57,	// (0x000316df) popup_call2_audio_in_window_g4_ParamLimits

0xbb57,	// (0x000316df) popup_call2_audio_in_window_g4

0x5b07,	// (0x0002b68f) aid_area_sk_bg_cut_ParamLimits

0x5b07,	// (0x0002b68f) aid_area_sk_bg_cut

0x5b25,	// (0x0002b6ad) aid_area_sk_bg_cut_2_ParamLimits

0x5b25,	// (0x0002b6ad) aid_area_sk_bg_cut_2

0x6efe,	// (0x0002ca86) aid_placing_details_win

0x6f06,	// (0x0002ca8e) aid_placing_details_win_2

0xc53c,	// (0x000320c4) camera2_autofocus_pane_g1_ParamLimits

0x2183,	// (0x00027d0b) popup_fixed_preview_cale_window_ParamLimits

0x2183,	// (0x00027d0b) popup_fixed_preview_cale_window

0x51c6,	// (0x0002ad4e) navi_slider_pane_g3

0x51cf,	// (0x0002ad57) navi_slider_pane_g4

0x51d8,	// (0x0002ad60) navi_slider_pane_g5

0x51c6,	// (0x0002ad4e) navi_slider_pane_g6

0xb15b,	// (0x00030ce3) navi_slider_pane_g7

0x56f1,	// (0x0002b279) mup_scale_pane_g3

0x56fa,	// (0x0002b282) mup_scale_pane_g4

0x5703,	// (0x0002b28b) mup_scale_pane_g5

0x570c,	// (0x0002b294) mup_scale_pane_g6

0x5715,	// (0x0002b29d) mup_scale_pane_g7

0x51c6,	// (0x0002ad4e) cams2_slider_pane_g3

0xc182,	// (0x00031d0a) cams2_slider_pane_g4

0xc18a,	// (0x00031d12) cams2_slider_pane_g5

0x51c6,	// (0x0002ad4e) cams2_slider_pane_g6

0xc192,	// (0x00031d1a) cams2_slider_pane_g7

0xc3be,	// (0x00031f46) camera2_autofocus_pane_cp_g1

0xc6ee,	// (0x00032276) bg_popup_preview_window_pane_cp02_ParamLimits

0xc6ee,	// (0x00032276) bg_popup_preview_window_pane_cp02

0xc6fa,	// (0x00032282) list_fp_cale_pane_ParamLimits

0xc6fa,	// (0x00032282) list_fp_cale_pane

0xc706,	// (0x0003228e) popup_fixed_preview_cale_window_t1_ParamLimits

0xc706,	// (0x0003228e) popup_fixed_preview_cale_window_t1

0x7769,	// (0x0002d2f1) popup_fixed_preview_cale_window_t2_ParamLimits

0x7769,	// (0x0002d2f1) popup_fixed_preview_cale_window_t2

0x777e,	// (0x0002d306) popup_fixed_preview_cale_window_t3_ParamLimits

0x777e,	// (0x0002d306) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00035356) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00035356) popup_fixed_preview_cale_window_t

0x7793,	// (0x0002d31b) list_single_fp_cale_pane_ParamLimits

0x7793,	// (0x0002d31b) list_single_fp_cale_pane

0xc724,	// (0x000322ac) list_single_fp_cale_pane_g1_ParamLimits

0xc724,	// (0x000322ac) list_single_fp_cale_pane_g1

0xc730,	// (0x000322b8) list_single_fp_cale_pane_g2_ParamLimits

0xc730,	// (0x000322b8) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0003535d) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0003535d) list_single_fp_cale_pane_g

0xc749,	// (0x000322d1) list_single_fp_cale_pane_t1_ParamLimits

0xc749,	// (0x000322d1) list_single_fp_cale_pane_t1

0xc75b,	// (0x000322e3) list_single_fp_cale_pane_t2_ParamLimits

0xc75b,	// (0x000322e3) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x00035364) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x00035364) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1f70,	// (0x00027af8) main_dialer_pane

0x77a8,	// (0x0002d330) aid_cell_size_keypad

0x77b2,	// (0x0002d33a) dialer_ne_pane

0x77ba,	// (0x0002d342) grid_dialer_command_1_pane

0x77c2,	// (0x0002d34a) grid_dialer_command_2_pane

0x77ca,	// (0x0002d352) grid_dialer_keypad_pane

0x77dc,	// (0x0002d364) bg_popup_call_pane_cp06_ParamLimits

0x77dc,	// (0x0002d364) bg_popup_call_pane_cp06

0x77e8,	// (0x0002d370) dialer_ne_clear_pane_ParamLimits

0x77e8,	// (0x0002d370) dialer_ne_clear_pane

0xc78e,	// (0x00032316) dialer_ne_pane_g1

0xc796,	// (0x0003231e) dialer_ne_pane_t1_ParamLimits

0xc796,	// (0x0003231e) dialer_ne_pane_t1

0x77f4,	// (0x0002d37c) dialer_ne_pane_t2_ParamLimits

0x77f4,	// (0x0002d37c) dialer_ne_pane_t2

0x781e,	// (0x0002d3a6) dialer_ne_pane_t3_ParamLimits

0x781e,	// (0x0002d3a6) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x00035369) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x00035369) dialer_ne_pane_t

0x784e,	// (0x0002d3d6) dialer_ne_pane_t3_copy1_ParamLimits

0x784e,	// (0x0002d3d6) dialer_ne_pane_t3_copy1

0x787d,	// (0x0002d405) cell_dialer_keypad_pane_ParamLimits

0x787d,	// (0x0002d405) cell_dialer_keypad_pane

0x7894,	// (0x0002d41c) cell_dialer_command_1_pane_ParamLimits

0x7894,	// (0x0002d41c) cell_dialer_command_1_pane

0x78aa,	// (0x0002d432) cell_dialer_command_2_pane_ParamLimits

0x78aa,	// (0x0002d432) cell_dialer_command_2_pane

0xc7a8,	// (0x00032330) bg_button_pane_cp02_ParamLimits

0xc7a8,	// (0x00032330) bg_button_pane_cp02

0x78b9,	// (0x0002d441) cell_dialer_keypad_pane_g1_ParamLimits

0x78b9,	// (0x0002d441) cell_dialer_keypad_pane_g1

0xc7a8,	// (0x00032330) bg_button_pane_cp03_ParamLimits

0xc7a8,	// (0x00032330) bg_button_pane_cp03

0x78cd,	// (0x0002d455) cell_dialer_command_1_pane_g1_ParamLimits

0x78cd,	// (0x0002d455) cell_dialer_command_1_pane_g1

0xc7b4,	// (0x0003233c) bg_button_pane_cp04

0x78e1,	// (0x0002d469) cell_dialer_command_2_pane_g1

0x51b5,	// (0x0002ad3d) bg_button_pane_cp06

0xc7bc,	// (0x00032344) dialer_ne_clear_pane_g1

0x505d,	// (0x0002abe5) navi_pane_g2

0x508b,	// (0x0002ac13) navi_pane_g3

0x0002,

0xf409,	// (0x00034f91) navi_pane_g

0x5118,	// (0x0002aca0) navi_pane_mv_g2

0x513f,	// (0x0002acc7) navi_pane_mv_g5

0x5147,	// (0x0002accf) navi_pane_mv_t1

0x2bda,	// (0x00028762) main_clock2_pane

0x7915,	// (0x0002d49d) main_clock2_list_pane_ParamLimits

0x7915,	// (0x0002d49d) main_clock2_list_pane

0x794b,	// (0x0002d4d3) main_clock2_pane_t1_ParamLimits

0x794b,	// (0x0002d4d3) main_clock2_pane_t1

0x7987,	// (0x0002d50f) main_clock2_pane_t2_ParamLimits

0x7987,	// (0x0002d50f) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x00035370) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x00035370) main_clock2_pane_t

0x7a11,	// (0x0002d599) popup_clock_analogue_window_cp03_ParamLimits

0x7a11,	// (0x0002d599) popup_clock_analogue_window_cp03

0x7a36,	// (0x0002d5be) popup_clock_digital_window_cp02_ParamLimits

0x7a36,	// (0x0002d5be) popup_clock_digital_window_cp02

0x7aa7,	// (0x0002d62f) main_clock2_list_single_pane_ParamLimits

0x7aa7,	// (0x0002d62f) main_clock2_list_single_pane

0x51b5,	// (0x0002ad3d) list_highlight_pane_cp05

0xc7c4,	// (0x0003234c) main_clock2_list_single_pane_t1

0x380f,	// (0x00029397) popup_toolbar_window_cp04_ParamLimits

0x6f28,	// (0x0002cab0) camera2_autofocus_pane_g2_ParamLimits

0x6f28,	// (0x0002cab0) camera2_autofocus_pane_g2

0x6f34,	// (0x0002cabc) camera2_autofocus_pane_g3_ParamLimits

0x6f34,	// (0x0002cabc) camera2_autofocus_pane_g3

0x6f40,	// (0x0002cac8) camera2_autofocus_pane_g4_ParamLimits

0x6f40,	// (0x0002cac8) camera2_autofocus_pane_g4

0x6f4c,	// (0x0002cad4) camera2_autofocus_pane_g5_ParamLimits

0x6f4c,	// (0x0002cad4) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x000352b9) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x000352b9) camera2_autofocus_pane_g

0x715d,	// (0x0002cce5) camera2_autofocus_pane_cp_g2

0x7165,	// (0x0002cced) camera2_autofocus_pane_cp_g3

0x716d,	// (0x0002ccf5) camera2_autofocus_pane_cp_g4

0x7175,	// (0x0002ccfd) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0003531f) camera2_autofocus_pane_cp_g

0x77d4,	// (0x0002d35c) popup_dialer_spcha_window

0x1f70,	// (0x00027af8) bg_popup_sub_pane_cp07

0xc7d2,	// (0x0003235a) list_spcha_pane

0xc7da,	// (0x00032362) list_single_spcha_pane_ParamLimits

0xc7da,	// (0x00032362) list_single_spcha_pane

0x1f70,	// (0x00027af8) list_highlight_pane_cp06

0xc7eb,	// (0x00032373) list_single_spcha_pane_t1

0xb901,	// (0x00031489) popup_call2_audio_out_window_g4_ParamLimits

0xb901,	// (0x00031489) popup_call2_audio_out_window_g4

0x1f70,	// (0x00027af8) main_imed2_pane

0xbee0,	// (0x00031a68) popup_imed_adjust2_window

0x67dc,	// (0x0002c364) popup_imed_trans_window_ParamLimits

0x67dc,	// (0x0002c364) popup_imed_trans_window

0xc1fc,	// (0x00031d84) popup_blid_sat_info2_window_t1

0xc20a,	// (0x00031d92) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0003524e) popup_blid_sat_info2_window_t

0x7ad9,	// (0x0002d661) aid_size_cell_colour_35

0x7af9,	// (0x0002d681) aid_size_cell_colour_112

0x7b19,	// (0x0002d6a1) aid_size_cell_effect

0xbeb8,	// (0x00031a40) bg_tb_trans_pane_cp02

0x47fa,	// (0x0002a382) heading_imed_pane

0x7b39,	// (0x0002d6c1) listscroll_imed_pane

0xc7f9,	// (0x00032381) heading_imed_pane_g1

0xc801,	// (0x00032389) heading_imed_pane_t1

0xc80f,	// (0x00032397) grid_imed_colour_35_pane_ParamLimits

0xc80f,	// (0x00032397) grid_imed_colour_35_pane

0x7b45,	// (0x0002d6cd) grid_imed_effect_pane

0xc826,	// (0x000323ae) list_imed_aspect_pane

0x7b5b,	// (0x0002d6e3) scroll_pane_cp027_ParamLimits

0x7b5b,	// (0x0002d6e3) scroll_pane_cp027

0x7b6c,	// (0x0002d6f4) cell_imed_effect_pane_ParamLimits

0x7b6c,	// (0x0002d6f4) cell_imed_effect_pane

0xc82e,	// (0x000323b6) cell_imed_colour_pane_ParamLimits

0xc82e,	// (0x000323b6) cell_imed_colour_pane

0xc870,	// (0x000323f8) cell_imed_colour_pane_g1_ParamLimits

0xc870,	// (0x000323f8) cell_imed_colour_pane_g1

0xc881,	// (0x00032409) hgihlgiht_grid_pane_cp016_ParamLimits

0xc881,	// (0x00032409) hgihlgiht_grid_pane_cp016

0x7b93,	// (0x0002d71b) cell_imed_effect_pane_g1

0x7b9b,	// (0x0002d723) grid_highlight_pane_cp017

0xc892,	// (0x0003241a) list_imed_single_pane_ParamLimits

0xc892,	// (0x0003241a) list_imed_single_pane

0x1f70,	// (0x00027af8) list_highlight_pane_cp07

0xc8a7,	// (0x0003242f) list_imed_aspect_pane_comp1_t1

0xbeb8,	// (0x00031a40) bg_tb_trans_pane_cp05

0xc8c9,	// (0x00032451) popup_imed_adjust2_window_g1

0xc8f0,	// (0x00032478) popup_imed_adjust2_window_t1

0xc908,	// (0x00032490) slider_imed_adjust_pane

0xc91c,	// (0x000324a4) slider_imed_adjust_pane_g1

0xc92c,	// (0x000324b4) slider_imed_adjust_pane_g2

0xc93c,	// (0x000324c4) slider_imed_adjust_pane_g3

0xc94d,	// (0x000324d5) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0003538d) slider_imed_adjust_pane_g

0x7ba4,	// (0x0002d72c) aid_size_cell_clipart2

0x7bb0,	// (0x0002d738) grid_imed_clipart_pane

0xc95e,	// (0x000324e6) scroll_pane_cp031

0x7bba,	// (0x0002d742) cell_imed_clipart_pane_ParamLimits

0x7bba,	// (0x0002d742) cell_imed_clipart_pane

0x7bdc,	// (0x0002d764) cell_imed_clipart_pane_g1

0x1f70,	// (0x00027af8) grid_highlight_pane_cp014

0x792a,	// (0x0002d4b2) main_clock2_pane_g1_ParamLimits

0x792a,	// (0x0002d4b2) main_clock2_pane_g1

0x7a52,	// (0x0002d5da) aid_call2_pane_cp10

0x7a64,	// (0x0002d5ec) aid_call_pane_cp10

0x4f6f,	// (0x0002aaf7) popup_clock_analogue_window_cp10_g1

0x4f6f,	// (0x0002aaf7) popup_clock_analogue_window_cp10_g2

0x7a76,	// (0x0002d5fe) popup_clock_analogue_window_cp10_g3

0x7a76,	// (0x0002d5fe) popup_clock_analogue_window_cp10_g4

0x4f6f,	// (0x0002aaf7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0003537b) popup_clock_analogue_window_cp10_g

0x7a88,	// (0x0002d610) popup_clock_analogue_window_cp10_t1

0x1452,	// (0x00026fda) clock_digital_number_pane_cp10_ParamLimits

0x1452,	// (0x00026fda) clock_digital_number_pane_cp10

0x146a,	// (0x00026ff2) clock_digital_number_pane_cp11_ParamLimits

0x146a,	// (0x00026ff2) clock_digital_number_pane_cp11

0x1482,	// (0x0002700a) clock_digital_number_pane_cp12_ParamLimits

0x1482,	// (0x0002700a) clock_digital_number_pane_cp12

0x149a,	// (0x00027022) clock_digital_number_pane_cp13_ParamLimits

0x149a,	// (0x00027022) clock_digital_number_pane_cp13

0x14b2,	// (0x0002703a) clock_digital_separator_pane_cp10_ParamLimits

0x14b2,	// (0x0002703a) clock_digital_separator_pane_cp10

0x7ab9,	// (0x0002d641) popup_clock_digital_window_cp02_t1_ParamLimits

0x7ab9,	// (0x0002d641) popup_clock_digital_window_cp02_t1

0x2900,	// (0x00028488) clock_digital_number_pane_cp10_g1

0x2900,	// (0x00028488) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x00035396) clock_digital_number_pane_cp10_g

0x2900,	// (0x00028488) clock_digital_separator_pane_cp10_g1

0x2900,	// (0x00028488) clock_digital_separator_pane_g2_cp10

0x5185,	// (0x0002ad0d) navi_pane_vded_g4

0x518e,	// (0x0002ad16) navi_pane_vded_g5

0x5197,	// (0x0002ad1f) navi_pane_vded_t1

0x1f70,	// (0x00027af8) main_vded_pane

0x7be5,	// (0x0002d76d) main_vded_pane_g1

0x7bef,	// (0x0002d777) main_vded_pane_g2

0x7bf9,	// (0x0002d781) main_vded_pane_g3

0x0002,

0xf813,	// (0x0003539b) main_vded_pane_g

0x7c03,	// (0x0002d78b) main_vded_pane_t1

0x7c11,	// (0x0002d799) main_vded_pane_t2

0x0001,

0xf81a,	// (0x000353a2) main_vded_pane_t

0x7c1f,	// (0x0002d7a7) vded_slider_pane

0x7c27,	// (0x0002d7af) vded_video_pane

0xc966,	// (0x000324ee) vded_video_pane_g1

0x7c2f,	// (0x0002d7b7) vded_video_pane_g2

0xc3be,	// (0x00031f46) vded_video_pane_g3

0x0002,

0xf81f,	// (0x000353a7) vded_video_pane_g

0xc970,	// (0x000324f8) vded_slider_pane_g1

0xc0cd,	// (0x00031c55) vded_slider_pane_g2

0xc979,	// (0x00032501) vded_slider_pane_g3

0xc982,	// (0x0003250a) vded_slider_pane_g4

0xc98b,	// (0x00032513) vded_slider_pane_g5

0x0004,

0xf826,	// (0x000353ae) vded_slider_pane_g

0x76c5,	// (0x0002d24d) mup3_rocker_pane_ParamLimits

0x76c5,	// (0x0002d24d) mup3_rocker_pane

0x7c38,	// (0x0002d7c0) mup3_control_keys_pane_g1

0x7c40,	// (0x0002d7c8) mup3_control_keys_pane_g2

0x7c48,	// (0x0002d7d0) mup3_control_keys_pane_g3

0x7c50,	// (0x0002d7d8) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x000353b9) mup3_control_keys_pane_g

0x21c4,	// (0x00027d4c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x21c4,	// (0x00027d4c) popup_toolbar2_fixed_window_cp01

0x76f9,	// (0x0002d281) popup_toolbar2_fixed_window_cp02_ParamLimits

0x76f9,	// (0x0002d281) popup_toolbar2_fixed_window_cp02

0xb240,	// (0x00030dc8) popup_call2_audio_second_window_t4_ParamLimits

0xb240,	// (0x00030dc8) popup_call2_audio_second_window_t4

0xb76e,	// (0x000312f6) popup_call2_audio_first_window_t6_ParamLimits

0xb76e,	// (0x000312f6) popup_call2_audio_first_window_t6

0xba04,	// (0x0003158c) popup_call2_audio_out_window_t6_ParamLimits

0xba04,	// (0x0003158c) popup_call2_audio_out_window_t6

0x1f70,	// (0x00027af8) main_vitu_pane

0x7c60,	// (0x0002d7e8) aid_size_cell_itu_ParamLimits

0x7c60,	// (0x0002d7e8) aid_size_cell_itu

0x21e2,	// (0x00027d6a) bg_popup_window_pane_cp08_ParamLimits

0x21e2,	// (0x00027d6a) bg_popup_window_pane_cp08

0x7c76,	// (0x0002d7fe) field_vitu_entry_pane_ParamLimits

0x7c76,	// (0x0002d7fe) field_vitu_entry_pane

0x7c8d,	// (0x0002d815) grid_vitu_function_pane_ParamLimits

0x7c8d,	// (0x0002d815) grid_vitu_function_pane

0x7ca8,	// (0x0002d830) grid_vitu_itu_pane_ParamLimits

0x7ca8,	// (0x0002d830) grid_vitu_itu_pane

0x7cc6,	// (0x0002d84e) cell_vitu_itu_pane_ParamLimits

0x7cc6,	// (0x0002d84e) cell_vitu_itu_pane

0x7ce8,	// (0x0002d870) cell_vitu_function_pane_ParamLimits

0x7ce8,	// (0x0002d870) cell_vitu_function_pane

0x21e2,	// (0x00027d6a) bg_popup_sub_pane_cp08_ParamLimits

0x21e2,	// (0x00027d6a) bg_popup_sub_pane_cp08

0x7d01,	// (0x0002d889) field_vitu_entry_pane_t1_ParamLimits

0x7d01,	// (0x0002d889) field_vitu_entry_pane_t1

0xc9ac,	// (0x00032534) field_vitu_entry_pane_t2_ParamLimits

0xc9ac,	// (0x00032534) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x000353c7) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x000353c7) field_vitu_entry_pane_t

0xc9c9,	// (0x00032551) bg_button_pane_cp05_ParamLimits

0xc9c9,	// (0x00032551) bg_button_pane_cp05

0x7d1f,	// (0x0002d8a7) cell_vitu_itu_pane_g1

0x7d37,	// (0x0002d8bf) cell_vitu_itu_pane_t1_ParamLimits

0x7d37,	// (0x0002d8bf) cell_vitu_itu_pane_t1

0x7d49,	// (0x0002d8d1) cell_vitu_itu_pane_t2_ParamLimits

0x7d49,	// (0x0002d8d1) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x000353cc) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x000353cc) cell_vitu_itu_pane_t

0xc9d7,	// (0x0003255f) bg_button_pane_cp07

0x7d7e,	// (0x0002d906) cell_vitu_function_pane_g1

0xafaf,	// (0x00030b37) main_calc_pane_g1

0x1fb2,	// (0x00027b3a) aid_visual_content_pane

0x1f70,	// (0x00027af8) main_vradio_pane

0x7d87,	// (0x0002d90f) main_vradio_pane_g1_ParamLimits

0x7d87,	// (0x0002d90f) main_vradio_pane_g1

0xc9e1,	// (0x00032569) main_vradio_pane_g2_ParamLimits

0xc9e1,	// (0x00032569) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x000353d3) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x000353d3) main_vradio_pane_g

0x7da0,	// (0x0002d928) main_vradio_pane_t1_ParamLimits

0x7da0,	// (0x0002d928) main_vradio_pane_t1

0x7db5,	// (0x0002d93d) main_vradio_pane_t2_ParamLimits

0x7db5,	// (0x0002d93d) main_vradio_pane_t2

0xc9ee,	// (0x00032576) main_vradio_pane_t3_ParamLimits

0xc9ee,	// (0x00032576) main_vradio_pane_t3

0x0002,

0xf850,	// (0x000353d8) main_vradio_pane_t_ParamLimits

0xf850,	// (0x000353d8) main_vradio_pane_t

0x7dca,	// (0x0002d952) vradio_rocker_control_pane_ParamLimits

0x7dca,	// (0x0002d952) vradio_rocker_control_pane

0x7ddc,	// (0x0002d964) vradio_station_info_pane_ParamLimits

0x7ddc,	// (0x0002d964) vradio_station_info_pane

0xca02,	// (0x0003258a) vradio_frequency_info_pane_ParamLimits

0xca02,	// (0x0003258a) vradio_frequency_info_pane

0xc3be,	// (0x00031f46) vradio_station_info_pane_g1

0xca11,	// (0x00032599) vradio_station_info_pane_t1_ParamLimits

0xca11,	// (0x00032599) vradio_station_info_pane_t1

0xca33,	// (0x000325bb) vradio_station_info_pane_t2_ParamLimits

0xca33,	// (0x000325bb) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x000353df) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x000353df) vradio_station_info_pane_t

0xca45,	// (0x000325cd) vradio_tuning_pane

0xca4d,	// (0x000325d5) vradio_rocker_control_pane_g1

0xca55,	// (0x000325dd) vradio_rocker_control_pane_g2

0xca5d,	// (0x000325e5) vradio_rocker_control_pane_g3

0xca65,	// (0x000325ed) vradio_rocker_control_pane_g4

0xca6d,	// (0x000325f5) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x000353e4) vradio_rocker_control_pane_g

0x7dee,	// (0x0002d976) vradio_frequency_info_pane_g1

0xca75,	// (0x000325fd) vradio_frequency_info_pane_t1_ParamLimits

0xca75,	// (0x000325fd) vradio_frequency_info_pane_t1

0x7df8,	// (0x0002d980) vradio_tuning_pane_g1

0x7e03,	// (0x0002d98b) vradio_tuning_pane_t1

0x2007,	// (0x00027b8f) area_side_right_pane_ParamLimits

0x2007,	// (0x00027b8f) area_side_right_pane

0xbe7f,	// (0x00031a07) status_small_pane_g1

0xbe87,	// (0x00031a0f) status_small_pane_g2

0xbe90,	// (0x00031a18) status_small_pane_g3

0xbe99,	// (0x00031a21) status_small_pane_g4

0x0003,

0xf61c,	// (0x000351a4) status_small_pane_g

0xbea2,	// (0x00031a2a) status_small_pane_t1

0x1f70,	// (0x00027af8) main_video3_pane

0xca89,	// (0x00032611) cams_zoom_vslider_pane

0xca91,	// (0x00032619) image3_wide_pane_ParamLimits

0xca91,	// (0x00032619) image3_wide_pane

0xcaab,	// (0x00032633) image3_wide_small_pane

0xcab7,	// (0x0003263f) main_video3_pane_g1_ParamLimits

0xcab7,	// (0x0003263f) main_video3_pane_g1

0xcad3,	// (0x0003265b) main_video3_pane_g2_ParamLimits

0xcad3,	// (0x0003265b) main_video3_pane_g2

0x0001,

0xf867,	// (0x000353ef) main_video3_pane_g_ParamLimits

0xf867,	// (0x000353ef) main_video3_pane_g

0xcaef,	// (0x00032677) main_video3_pane_t1_ParamLimits

0xcaef,	// (0x00032677) main_video3_pane_t1

0xcb1a,	// (0x000326a2) main_video3_pane_t2_ParamLimits

0xcb1a,	// (0x000326a2) main_video3_pane_t2

0xcb45,	// (0x000326cd) main_video3_pane_t3_ParamLimits

0xcb45,	// (0x000326cd) main_video3_pane_t3

0x0002,

0xf86c,	// (0x000353f4) main_video3_pane_t_ParamLimits

0xf86c,	// (0x000353f4) main_video3_pane_t

0xcb72,	// (0x000326fa) cams_zoom_vslider_pane_g1

0xcb7b,	// (0x00032703) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x000353fb) cams_zoom_vslider_pane_g

0xcb83,	// (0x0003270b) small_slider_vertical_pane

0xc3be,	// (0x00031f46) small_slider_vertical_pane_g1

0xc3be,	// (0x00031f46) small_slider_vertical_pane_g2

0xcb8b,	// (0x00032713) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x00035400) small_slider_vertical_pane_g

0x1f70,	// (0x00027af8) main_hwr_training_pane

0xcb94,	// (0x0003271c) hwr_training_instruct_pane_ParamLimits

0xcb94,	// (0x0003271c) hwr_training_instruct_pane

0x7e12,	// (0x0002d99a) hwr_training_navi_pane_ParamLimits

0x7e12,	// (0x0002d99a) hwr_training_navi_pane

0x7e31,	// (0x0002d9b9) hwr_training_write_pane_ParamLimits

0x7e31,	// (0x0002d9b9) hwr_training_write_pane

0x1f70,	// (0x00027af8) bg_frame_shadow_pane

0xcbcb,	// (0x00032753) hwr_training_write_pane_g1

0xcbd3,	// (0x0003275b) hwr_training_write_pane_g2

0xcbdb,	// (0x00032763) hwr_training_write_pane_g3

0xcbe3,	// (0x0003276b) hwr_training_write_pane_g4

0xcbeb,	// (0x00032773) hwr_training_write_pane_g5

0xcbf3,	// (0x0003277b) hwr_training_write_pane_g6

0xcbfb,	// (0x00032783) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x00035407) hwr_training_write_pane_g

0xcc03,	// (0x0003278b) hwr_training_navi_pane_g1_ParamLimits

0xcc03,	// (0x0003278b) hwr_training_navi_pane_g1

0xcc15,	// (0x0003279d) hwr_training_navi_pane_g2_ParamLimits

0xcc15,	// (0x0003279d) hwr_training_navi_pane_g2

0xcc27,	// (0x000327af) hwr_training_navi_pane_g3_ParamLimits

0xcc27,	// (0x000327af) hwr_training_navi_pane_g3

0xcc37,	// (0x000327bf) hwr_training_navi_pane_g4_ParamLimits

0xcc37,	// (0x000327bf) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x00035416) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x00035416) hwr_training_navi_pane_g

0xcc44,	// (0x000327cc) hwr_training_navi_pane_t1

0x7e6c,	// (0x0002d9f4) list_single_hwr_training_instruct_pane_ParamLimits

0x7e6c,	// (0x0002d9f4) list_single_hwr_training_instruct_pane

0xcc52,	// (0x000327da) list_single_hwr_training_instruct_pane_t1

0xc2fe,	// (0x00031e86) bg_frame_shadow_pane_g1

0xcc61,	// (0x000327e9) bg_frame_shadow_pane_g2

0xcc69,	// (0x000327f1) bg_frame_shadow_pane_g3

0xcc71,	// (0x000327f9) bg_frame_shadow_pane_g4

0xcc79,	// (0x00032801) bg_frame_shadow_pane_g5

0xcc81,	// (0x00032809) bg_frame_shadow_pane_g6

0xcc89,	// (0x00032811) bg_frame_shadow_pane_g7

0x2d77,	// (0x000288ff) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x00035421) bg_frame_shadow_pane_g

0x1f70,	// (0x00027af8) main_video_tele_dialer_pane

0x14d7,	// (0x0002705f) aid_size_cell_video_keypad_ParamLimits

0x14d7,	// (0x0002705f) aid_size_cell_video_keypad

0x14f1,	// (0x00027079) grid_video_dialer_keypad_pane_ParamLimits

0x14f1,	// (0x00027079) grid_video_dialer_keypad_pane

0x153b,	// (0x000270c3) video_down_pane_cp_ParamLimits

0x153b,	// (0x000270c3) video_down_pane_cp

0x154b,	// (0x000270d3) cell_video_dialer_keypad_pane_ParamLimits

0x154b,	// (0x000270d3) cell_video_dialer_keypad_pane

0xccad,	// (0x00032835) bg_button_pane_cp08_ParamLimits

0xccad,	// (0x00032835) bg_button_pane_cp08

0x7e81,	// (0x0002da09) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7e81,	// (0x0002da09) cell_video_dialer_keypad_pane_g1

0x76af,	// (0x0002d237) mup3_rocker2_pane_ParamLimits

0x76af,	// (0x0002d237) mup3_rocker2_pane

0xc3be,	// (0x00031f46) mup3_rocker2_pane_g1

0x66bd,	// (0x0002c245) main_dialer2_pane

0x1f70,	// (0x00027af8) main_mp4_pane

0xccc1,	// (0x00032849) main_mp4_pane_g1_ParamLimits

0xccc1,	// (0x00032849) main_mp4_pane_g1

0xccc1,	// (0x00032849) main_mp4_pane_g2_ParamLimits

0xccc1,	// (0x00032849) main_mp4_pane_g2

0x156d,	// (0x000270f5) main_mp4_pane_g3_ParamLimits

0x156d,	// (0x000270f5) main_mp4_pane_g3

0xcccf,	// (0x00032857) main_mp4_pane_g4_ParamLimits

0xcccf,	// (0x00032857) main_mp4_pane_g4

0xccf7,	// (0x0003287f) main_mp4_pane_g5_ParamLimits

0xccf7,	// (0x0003287f) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x00035441) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x00035441) main_mp4_pane_g

0xcd47,	// (0x000328cf) main_mp4_pane_t1_ParamLimits

0xcd47,	// (0x000328cf) main_mp4_pane_t1

0xcda3,	// (0x0003292b) main_mp4_pane_t2_ParamLimits

0xcda3,	// (0x0003292b) main_mp4_pane_t2

0xcdf5,	// (0x0003297d) main_mp4_pane_t3_ParamLimits

0xcdf5,	// (0x0003297d) main_mp4_pane_t3

0xce15,	// (0x0003299d) main_mp4_pane_t4_ParamLimits

0xce15,	// (0x0003299d) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0003544e) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0003544e) main_mp4_pane_t

0xce59,	// (0x000329e1) mp4_progress_pane_ParamLimits

0xce59,	// (0x000329e1) mp4_progress_pane

0xcea3,	// (0x00032a2b) mp4_rocker_pane_ParamLimits

0xcea3,	// (0x00032a2b) mp4_rocker_pane

0xcecb,	// (0x00032a53) mp4_progress_pane_t1

0xcee4,	// (0x00032a6c) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x00035457) mp4_progress_pane_t

0xcefd,	// (0x00032a85) mup_progress_pane_cp04

0xcf09,	// (0x00032a91) mp4_rocker_pane_g1

0x15a9,	// (0x00027131) aid_cell_size_keypad2_ParamLimits

0x15a9,	// (0x00027131) aid_cell_size_keypad2

0x15bf,	// (0x00027147) dialer2_ne_pane_ParamLimits

0x15bf,	// (0x00027147) dialer2_ne_pane

0x15d9,	// (0x00027161) grid_dialer2_keypad_pane_ParamLimits

0x15d9,	// (0x00027161) grid_dialer2_keypad_pane

0xc1a3,	// (0x00031d2b) bg_popup_call_pane_cp07_ParamLimits

0xc1a3,	// (0x00031d2b) bg_popup_call_pane_cp07

0x7ebb,	// (0x0002da43) dialer2_ne_pane_t1_ParamLimits

0x7ebb,	// (0x0002da43) dialer2_ne_pane_t1

0x15f5,	// (0x0002717d) cell_dialer2_keypad_pane_ParamLimits

0x15f5,	// (0x0002717d) cell_dialer2_keypad_pane

0xcf25,	// (0x00032aad) bg_button_pane_pane_cp04_ParamLimits

0xcf25,	// (0x00032aad) bg_button_pane_pane_cp04

0x7ef6,	// (0x0002da7e) cell_dialer2_keypad_pane_g1_ParamLimits

0x7ef6,	// (0x0002da7e) cell_dialer2_keypad_pane_g1

0x36d3,	// (0x0002925b) aid_placing_vt_set_content_ParamLimits

0x36d3,	// (0x0002925b) aid_placing_vt_set_content

0x36f9,	// (0x00029281) aid_placing_vt_set_title_ParamLimits

0x36f9,	// (0x00029281) aid_placing_vt_set_title

0x1f70,	// (0x00027af8) main_image3_pane

0x1675,	// (0x000271fd) area_side_right_pane_cp01_ParamLimits

0x1675,	// (0x000271fd) area_side_right_pane_cp01

0xccc1,	// (0x00032849) main_image3_pane_g1_ParamLimits

0xccc1,	// (0x00032849) main_image3_pane_g1

0x168c,	// (0x00027214) main_image3_pane_g2_ParamLimits

0x168c,	// (0x00027214) main_image3_pane_g2

0x16b4,	// (0x0002723c) main_image3_pane_g3_ParamLimits

0x16b4,	// (0x0002723c) main_image3_pane_g3

0x16de,	// (0x00027266) main_image3_pane_g4_ParamLimits

0x16de,	// (0x00027266) main_image3_pane_g4

0x0003,

0xf8de,	// (0x00035466) main_image3_pane_g_ParamLimits

0xf8de,	// (0x00035466) main_image3_pane_g

0x1708,	// (0x00027290) main_image3_pane_t1_ParamLimits

0x1708,	// (0x00027290) main_image3_pane_t1

0x1760,	// (0x000272e8) main_image3_pane_t2_ParamLimits

0x1760,	// (0x000272e8) main_image3_pane_t2

0x17b2,	// (0x0002733a) main_image3_pane_t3_ParamLimits

0x17b2,	// (0x0002733a) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0003546f) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0003546f) main_image3_pane_t

0x21e2,	// (0x00027d6a) grid_sctrl_middle_pane_cp01_ParamLimits

0x21e2,	// (0x00027d6a) grid_sctrl_middle_pane_cp01

0x7f5e,	// (0x0002dae6) cell_sctrl_middle_pane_cp01_ParamLimits

0x7f5e,	// (0x0002dae6) cell_sctrl_middle_pane_cp01

0x7f7b,	// (0x0002db03) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7f7b,	// (0x0002db03) cell_sctrl_middle_pane_cp01_g1

0x1f70,	// (0x00027af8) main_call4_pane

0x7f91,	// (0x0002db19) aid_size_button_call4_ParamLimits

0x7f91,	// (0x0002db19) aid_size_button_call4

0x7fc2,	// (0x0002db4a) call4_windows_pane_ParamLimits

0x7fc2,	// (0x0002db4a) call4_windows_pane

0x7fe2,	// (0x0002db6a) grid_call4_button_pane_ParamLimits

0x7fe2,	// (0x0002db6a) grid_call4_button_pane

0xcf63,	// (0x00032aeb) call4_windows_conf_pane

0xcf7a,	// (0x00032b02) popup_call4_audio_first_window_ParamLimits

0xcf7a,	// (0x00032b02) popup_call4_audio_first_window

0xcfc6,	// (0x00032b4e) popup_call4_audio_second_window_ParamLimits

0xcfc6,	// (0x00032b4e) popup_call4_audio_second_window

0xcfda,	// (0x00032b62) popup_call4_audio_wait_window_ParamLimits

0xcfda,	// (0x00032b62) popup_call4_audio_wait_window

0x800f,	// (0x0002db97) cell_call4_button_pane_ParamLimits

0x800f,	// (0x0002db97) cell_call4_button_pane

0x8038,	// (0x0002dbc0) bg_button_pane_cp09_ParamLimits

0x8038,	// (0x0002dbc0) bg_button_pane_cp09

0x8044,	// (0x0002dbcc) cell_call4_button_pane_g1_ParamLimits

0x8044,	// (0x0002dbcc) cell_call4_button_pane_g1

0x806a,	// (0x0002dbf2) cell_call4_button_pane_t1_ParamLimits

0x806a,	// (0x0002dbf2) cell_call4_button_pane_t1

0xd022,	// (0x00032baa) popup_call4_audio_conf_window_ParamLimits

0xd022,	// (0x00032baa) popup_call4_audio_conf_window

0x770f,	// (0x0002d297) mup3_progress_pane_t1_ParamLimits

0x7726,	// (0x0002d2ae) mup3_progress_pane_t2_ParamLimits

0xc6b1,	// (0x00032239) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x00035348) mup3_progress_pane_t_ParamLimits

0xc6c8,	// (0x00032250) mup_progress_pane_cp03_ParamLimits

0x7c58,	// (0x0002d7e0) mup3_control_keys_pane_g4_copy1

0xce87,	// (0x00032a0f) mp4_rocker2_pane_ParamLimits

0xce87,	// (0x00032a0f) mp4_rocker2_pane

0xd036,	// (0x00032bbe) mp4_rocker2_pane_g1

0xd03e,	// (0x00032bc6) mp4_rocker2_pane_g2

0xd046,	// (0x00032bce) mp4_rocker2_pane_g3

0xd04e,	// (0x00032bd6) mp4_rocker2_pane_g4

0xd056,	// (0x00032bde) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x00035478) mp4_rocker2_pane_g

0x1f70,	// (0x00027af8) main_camera4_pane

0x1f70,	// (0x00027af8) main_video4_pane

0x1509,	// (0x00027091) main_video_tele_dialer_pane_t1_ParamLimits

0x1509,	// (0x00027091) main_video_tele_dialer_pane_t1

0x1522,	// (0x000270aa) main_video_tele_dialer_pane_t2_ParamLimits

0x1522,	// (0x000270aa) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x00035432) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x00035432) main_video_tele_dialer_pane_t

0x1852,	// (0x000273da) cam4_autofocus_pane_ParamLimits

0x1852,	// (0x000273da) cam4_autofocus_pane

0x1868,	// (0x000273f0) cam4_image_uncrop_pane_ParamLimits

0x1868,	// (0x000273f0) cam4_image_uncrop_pane

0x1882,	// (0x0002740a) cam4_indicators_pane_ParamLimits

0x1882,	// (0x0002740a) cam4_indicators_pane

0x18ad,	// (0x00027435) main_camera4_pane_g1_ParamLimits

0x18ad,	// (0x00027435) main_camera4_pane_g1

0x18c0,	// (0x00027448) main_camera4_pane_g2_ParamLimits

0x18c0,	// (0x00027448) main_camera4_pane_g2

0x18d3,	// (0x0002745b) main_camera4_pane_g3_ParamLimits

0x18d3,	// (0x0002745b) main_camera4_pane_g3

0x18e6,	// (0x0002746e) main_camera4_pane_g4_ParamLimits

0x18e6,	// (0x0002746e) main_camera4_pane_g4

0x18f9,	// (0x00027481) main_camera4_pane_g5_ParamLimits

0x18f9,	// (0x00027481) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x00035483) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x00035483) main_camera4_pane_g

0x191d,	// (0x000274a5) main_camera4_pane_t1_ParamLimits

0x191d,	// (0x000274a5) main_camera4_pane_t1

0xd08c,	// (0x00032c14) bg_tb_trans_pane_cp06

0xd0a2,	// (0x00032c2a) cam4_indicators_pane_g1

0xd0b3,	// (0x00032c3b) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0003549e) cam4_indicators_pane_g

0xd0d1,	// (0x00032c59) cam4_indicators_pane_t1

0x196d,	// (0x000274f5) main_video4_pane_g1_ParamLimits

0x196d,	// (0x000274f5) main_video4_pane_g1

0x1980,	// (0x00027508) main_video4_pane_g2_ParamLimits

0x1980,	// (0x00027508) main_video4_pane_g2

0x1994,	// (0x0002751c) main_video4_pane_g3_ParamLimits

0x1994,	// (0x0002751c) main_video4_pane_g3

0x19a8,	// (0x00027530) main_video4_pane_g4_ParamLimits

0x19a8,	// (0x00027530) main_video4_pane_g4

0x0004,

0xf91d,	// (0x000354a5) main_video4_pane_g_ParamLimits

0xf91d,	// (0x000354a5) main_video4_pane_g

0x19d0,	// (0x00027558) vid4_indicators_pane_ParamLimits

0x19d0,	// (0x00027558) vid4_indicators_pane

0x1a00,	// (0x00027588) video4_image_uncrop_cif_pane_ParamLimits

0x1a00,	// (0x00027588) video4_image_uncrop_cif_pane

0x1a1a,	// (0x000275a2) video4_image_uncrop_nhd_pane_ParamLimits

0x1a1a,	// (0x000275a2) video4_image_uncrop_nhd_pane

0x1868,	// (0x000273f0) video4_image_uncrop_vga_pane_ParamLimits

0x1868,	// (0x000273f0) video4_image_uncrop_vga_pane

0xd0f3,	// (0x00032c7b) bg_tb_trans_pane_cp07

0x1a2e,	// (0x000275b6) vid4_indicators_pane_g1

0x1a3b,	// (0x000275c3) vid4_indicators_pane_g2

0x1a48,	// (0x000275d0) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x000354b0) vid4_indicators_pane_g

0x1a6d,	// (0x000275f5) vid4_indicators_pane_t1

0x80a4,	// (0x0002dc2c) cam4_autofocus_pane_g1

0x80ac,	// (0x0002dc34) cam4_autofocus_pane_g2

0x80b4,	// (0x0002dc3c) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x000354bb) cam4_autofocus_pane_g

0x80bc,	// (0x0002dc44) cam4_autofocus_pane_g3_copy1

0xcc91,	// (0x00032819) video_down_pane_cp_t1

0xcc9f,	// (0x00032827) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x00035437) video_down_pane_cp_t

0x21e2,	// (0x00027d6a) popup_vitu2_window_ParamLimits

0x21e2,	// (0x00027d6a) popup_vitu2_window

0x1a7f,	// (0x00027607) aid_size_cell2_itu2_ParamLimits

0x1a7f,	// (0x00027607) aid_size_cell2_itu2

0x1aa5,	// (0x0002762d) aid_size_cell_itu2_ParamLimits

0x1aa5,	// (0x0002762d) aid_size_cell_itu2

0x1b01,	// (0x00027689) bg_popup_window_pane_cp09_ParamLimits

0x1b01,	// (0x00027689) bg_popup_window_pane_cp09

0x1b0f,	// (0x00027697) field_vitu2_entry_pane_ParamLimits

0x1b0f,	// (0x00027697) field_vitu2_entry_pane

0x1b35,	// (0x000276bd) grid_vitu2_function_pane_ParamLimits

0x1b35,	// (0x000276bd) grid_vitu2_function_pane

0x1b86,	// (0x0002770e) grid_vitu2_itu_pane_ParamLimits

0x1b86,	// (0x0002770e) grid_vitu2_itu_pane

0x1c19,	// (0x000277a1) cell_vitu2_itu_pane_ParamLimits

0x1c19,	// (0x000277a1) cell_vitu2_itu_pane

0x1c3d,	// (0x000277c5) cell_vitu2_function_pane_ParamLimits

0x1c3d,	// (0x000277c5) cell_vitu2_function_pane

0xd10b,	// (0x00032c93) bg_popup_call_pane_cp08_ParamLimits

0xd10b,	// (0x00032c93) bg_popup_call_pane_cp08

0xd124,	// (0x00032cac) field_vitu2_entry_pane_g1

0xd130,	// (0x00032cb8) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x000354c2) field_vitu2_entry_pane_g

0xd14a,	// (0x00032cd2) field_vitu2_entry_pane_t1_ParamLimits

0xd14a,	// (0x00032cd2) field_vitu2_entry_pane_t1

0xd179,	// (0x00032d01) field_vitu2_entry_pane_t2_ParamLimits

0xd179,	// (0x00032d01) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x000354c9) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x000354c9) field_vitu2_entry_pane_t

0x1c7c,	// (0x00027804) bg_button_pane_cp010_ParamLimits

0x1c7c,	// (0x00027804) bg_button_pane_cp010

0x1c8a,	// (0x00027812) cell_vitu2_itu_pane_g1

0x1ca8,	// (0x00027830) cell_vitu2_itu_pane_t1_ParamLimits

0x1ca8,	// (0x00027830) cell_vitu2_itu_pane_t1

0x1d0e,	// (0x00027896) cell_vitu2_itu_pane_t2_ParamLimits

0x1d0e,	// (0x00027896) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x000354d3) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x000354d3) cell_vitu2_itu_pane_t

0xd19e,	// (0x00032d26) bg_button_pane_cp011

0x1dea,	// (0x00027972) cell_vitu2_function_pane_g1

0x1f70,	// (0x00027af8) main_myfav_hc_pane

0x1802,	// (0x0002738a) popup_image3_note_pane_ParamLimits

0x1802,	// (0x0002738a) popup_image3_note_pane

0x181e,	// (0x000273a6) popup_image3_tool_bar_pane_ParamLimits

0x181e,	// (0x000273a6) popup_image3_tool_bar_pane

0x1d92,	// (0x0002791a) cell_vitu2_itu_pane_t3_ParamLimits

0x1d92,	// (0x0002791a) cell_vitu2_itu_pane_t3

0x1f70,	// (0x00027af8) bg_popup_trans_pane

0xd1ac,	// (0x00032d34) grid_image3_tool_bar_pane

0xd1b6,	// (0x00032d3e) bg_popup_trans_pane_g1

0x3cc6,	// (0x0002984e) bg_popup_trans_pane_g2

0xd1be,	// (0x00032d46) bg_popup_trans_pane_g3

0xd1c6,	// (0x00032d4e) bg_popup_trans_pane_g4

0xd1ce,	// (0x00032d56) bg_popup_trans_pane_g5

0xd1d6,	// (0x00032d5e) bg_popup_trans_pane_g6

0xd1de,	// (0x00032d66) bg_popup_trans_pane_g7

0xd1e6,	// (0x00032d6e) bg_popup_trans_pane_g8

0x3ca6,	// (0x0002982e) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x000354da) bg_popup_trans_pane_g

0xd1ee,	// (0x00032d76) cell_image3_tool_bar_pane_ParamLimits

0xd1ee,	// (0x00032d76) cell_image3_tool_bar_pane

0xc3be,	// (0x00031f46) cell_image3_tool_bar_pane_g1

0x1f70,	// (0x00027af8) bg_popup_trans_pane_cp1

0xd202,	// (0x00032d8a) popup_image3_note_pane_t1

0xd210,	// (0x00032d98) popup_image3_note_pane_t2

0xd21e,	// (0x00032da6) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x000354ed) popup_image3_note_pane_t

0xd22c,	// (0x00032db4) popup_image3_note_pane_t3_copy1

0x80c4,	// (0x0002dc4c) bg_myfav_hc_instruction_pane_ParamLimits

0x80c4,	// (0x0002dc4c) bg_myfav_hc_instruction_pane

0x80d8,	// (0x0002dc60) cell_myfav_contact_pane_ParamLimits

0x80d8,	// (0x0002dc60) cell_myfav_contact_pane

0x80f6,	// (0x0002dc7e) cell_myfav_contact_pane_cp1_ParamLimits

0x80f6,	// (0x0002dc7e) cell_myfav_contact_pane_cp1

0x810e,	// (0x0002dc96) cell_myfav_contact_pane_cp2_ParamLimits

0x810e,	// (0x0002dc96) cell_myfav_contact_pane_cp2

0x8126,	// (0x0002dcae) cell_myfav_contact_pane_cp3_ParamLimits

0x8126,	// (0x0002dcae) cell_myfav_contact_pane_cp3

0x813d,	// (0x0002dcc5) cell_myfav_contact_pane_cp4_ParamLimits

0x813d,	// (0x0002dcc5) cell_myfav_contact_pane_cp4

0x8155,	// (0x0002dcdd) cell_myfav_contact_pane_cp5_ParamLimits

0x8155,	// (0x0002dcdd) cell_myfav_contact_pane_cp5

0x8169,	// (0x0002dcf1) cell_myfav_contact_pane_cp6_ParamLimits

0x8169,	// (0x0002dcf1) cell_myfav_contact_pane_cp6

0x817f,	// (0x0002dd07) cell_myfav_contact_pane_cp7_ParamLimits

0x817f,	// (0x0002dd07) cell_myfav_contact_pane_cp7

0xd23a,	// (0x00032dc2) listscroll_gen_pane_cp05

0x8199,	// (0x0002dd21) main_myfav_hc_pane_g1_ParamLimits

0x8199,	// (0x0002dd21) main_myfav_hc_pane_g1

0x81b3,	// (0x0002dd3b) main_myfav_hc_pane_g2_ParamLimits

0x81b3,	// (0x0002dd3b) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x000354f4) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x000354f4) main_myfav_hc_pane_g

0x81e5,	// (0x0002dd6d) main_myfav_hc_pane_t1_ParamLimits

0x81e5,	// (0x0002dd6d) main_myfav_hc_pane_t1

0xd243,	// (0x00032dcb) main_myfav_hc_pane_t2_ParamLimits

0xd243,	// (0x00032dcb) main_myfav_hc_pane_t2

0xd255,	// (0x00032ddd) main_myfav_hc_pane_t3_ParamLimits

0xd255,	// (0x00032ddd) main_myfav_hc_pane_t3

0x81fc,	// (0x0002dd84) main_myfav_hc_pane_t4_ParamLimits

0x81fc,	// (0x0002dd84) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x000354fb) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x000354fb) main_myfav_hc_pane_t

0xc3be,	// (0x00031f46) bg_myfav_hc_instruction_pane_g1

0xd267,	// (0x00032def) cell_myfav_contact_pane_g1_ParamLimits

0xd267,	// (0x00032def) cell_myfav_contact_pane_g1

0xd267,	// (0x00032def) cell_myfav_contact_pane_g2_ParamLimits

0xd267,	// (0x00032def) cell_myfav_contact_pane_g2

0xd273,	// (0x00032dfb) cell_myfav_contact_pane_g3_ParamLimits

0xd273,	// (0x00032dfb) cell_myfav_contact_pane_g3

0xc69b,	// (0x00032223) cell_myfav_contact_pane_g4_ParamLimits

0xc69b,	// (0x00032223) cell_myfav_contact_pane_g4

0xd280,	// (0x00032e08) cell_myfav_contact_pane_g5_ParamLimits

0xd280,	// (0x00032e08) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x00035506) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x00035506) cell_myfav_contact_pane_g

0x81cd,	// (0x0002dd55) main_myfav_hc_pane_g3_ParamLimits

0x81cd,	// (0x0002dd55) main_myfav_hc_pane_g3

0x211c,	// (0x00027ca4) popup_adpt_find_window

0x8224,	// (0x0002ddac) afind_page_pane_ParamLimits

0x8224,	// (0x0002ddac) afind_page_pane

0x8239,	// (0x0002ddc1) aid_size_cell_afind_ParamLimits

0x8239,	// (0x0002ddc1) aid_size_cell_afind

0x8257,	// (0x0002dddf) bg_popup_sub_pane_cp09_ParamLimits

0x8257,	// (0x0002dddf) bg_popup_sub_pane_cp09

0x8264,	// (0x0002ddec) find_pane_cp01_ParamLimits

0x8264,	// (0x0002ddec) find_pane_cp01

0xd28c,	// (0x00032e14) grid_afind_control_pane_ParamLimits

0xd28c,	// (0x00032e14) grid_afind_control_pane

0x8271,	// (0x0002ddf9) grid_afind_pane_ParamLimits

0x8271,	// (0x0002ddf9) grid_afind_pane

0x8293,	// (0x0002de1b) cell_afind_pane_ParamLimits

0x8293,	// (0x0002de1b) cell_afind_pane

0xc3be,	// (0x00031f46) afind_page_pane_g1

0x82f4,	// (0x0002de7c) afind_page_pane_g2

0x82fd,	// (0x0002de85) afind_page_pane_g3

0x0002,

0xf989,	// (0x00035511) afind_page_pane_g

0x8306,	// (0x0002de8e) afind_page_pane_t1

0xd2a0,	// (0x00032e28) cell_afind_grid_control_pane_ParamLimits

0xd2a0,	// (0x00032e28) cell_afind_grid_control_pane

0xcf25,	// (0x00032aad) bg_button_pane_cp69_ParamLimits

0xcf25,	// (0x00032aad) bg_button_pane_cp69

0x8326,	// (0x0002deae) cell_afind_pane_g1_ParamLimits

0x8326,	// (0x0002deae) cell_afind_pane_g1

0x8333,	// (0x0002debb) cell_afind_pane_t1_ParamLimits

0x8333,	// (0x0002debb) cell_afind_pane_t1

0x3574,	// (0x000290fc) bg_button_pane_cp72

0xd2af,	// (0x00032e37) cell_afind_grid_control_pane_g1

0x5f05,	// (0x0002ba8d) aid_image_placing_area_ParamLimits

0x5f05,	// (0x0002ba8d) aid_image_placing_area

0xc994,	// (0x0003251c) field_vitu_entry_pane_g1_ParamLimits

0xc994,	// (0x0003251c) field_vitu_entry_pane_g1

0xc9a0,	// (0x00032528) field_vitu_entry_pane_g2_ParamLimits

0xc9a0,	// (0x00032528) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x000353c2) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x000353c2) field_vitu_entry_pane_g

0x7d1f,	// (0x0002d8a7) cell_vitu_itu_pane_g1_ParamLimits

0x7d61,	// (0x0002d8e9) cell_vitu_itu_pane_t3_ParamLimits

0x7d61,	// (0x0002d8e9) cell_vitu_itu_pane_t3

0xcecb,	// (0x00032a53) mp4_progress_pane_t1_ParamLimits

0xcee4,	// (0x00032a6c) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x00035457) mp4_progress_pane_t_ParamLimits

0xcefd,	// (0x00032a85) mup_progress_pane_cp04_ParamLimits

0x8210,	// (0x0002dd98) main_myfav_hc_pane_t5_ParamLimits

0x8210,	// (0x0002dd98) main_myfav_hc_pane_t5

0x1fc6,	// (0x00027b4e) aid_zoom_text_primary

0x211c,	// (0x00027ca4) popup_adpt_find_window_ParamLimits

0x21e2,	// (0x00027d6a) main_cam_set_pane

0x1899,	// (0x00027421) cam4_zoom_pane_ParamLimits

0x1899,	// (0x00027421) cam4_zoom_pane

0x8345,	// (0x0002decd) main_cam_set_pane_g1_ParamLimits

0x8345,	// (0x0002decd) main_cam_set_pane_g1

0x8353,	// (0x0002dedb) main_cam_set_pane_g2_ParamLimits

0x8353,	// (0x0002dedb) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x00035518) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x00035518) main_cam_set_pane_g

0x8374,	// (0x0002defc) main_cam_set_pane_t1_ParamLimits

0x8374,	// (0x0002defc) main_cam_set_pane_t1

0x838f,	// (0x0002df17) main_cset_listscroll_pane_ParamLimits

0x838f,	// (0x0002df17) main_cset_listscroll_pane

0x83af,	// (0x0002df37) main_cset_slider_pane_ParamLimits

0x83af,	// (0x0002df37) main_cset_slider_pane

0xd2c0,	// (0x00032e48) main_cset_list_pane_ParamLimits

0xd2c0,	// (0x00032e48) main_cset_list_pane

0xd2d0,	// (0x00032e58) scroll_pane_cp028

0x83d5,	// (0x0002df5d) aid_area_touch_slider

0x83f1,	// (0x0002df79) cset_slider_pane

0x841b,	// (0x0002dfa3) main_cset_slider_pane_g1

0x8430,	// (0x0002dfb8) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0003551d) main_cset_slider_pane_g

0xd309,	// (0x00032e91) main_cset_slider_pane_t1

0x84ec,	// (0x0002e074) main_cset_slider_pane_t2

0x8506,	// (0x0002e08e) main_cset_slider_pane_t3

0x8520,	// (0x0002e0a8) main_cset_slider_pane_t4

0x853a,	// (0x0002e0c2) main_cset_slider_pane_t5

0x8554,	// (0x0002e0dc) main_cset_slider_pane_t6

0x8569,	// (0x0002e0f1) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x00035542) main_cset_slider_pane_t

0x866d,	// (0x0002e1f5) cset_list_set_pane_ParamLimits

0x866d,	// (0x0002e1f5) cset_list_set_pane

0x867f,	// (0x0002e207) aid_position_infowindow_above

0x8687,	// (0x0002e20f) aid_position_infowindow_below

0x868f,	// (0x0002e217) cset_list_set_pane_g1_ParamLimits

0x868f,	// (0x0002e217) cset_list_set_pane_g1

0xd3a9,	// (0x00032f31) cset_list_set_pane_g3_ParamLimits

0xd3a9,	// (0x00032f31) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x00035561) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x00035561) cset_list_set_pane_g

0xd3b8,	// (0x00032f40) cset_list_set_pane_t1_ParamLimits

0xd3b8,	// (0x00032f40) cset_list_set_pane_t1

0x21e2,	// (0x00027d6a) list_highlight_pane_cp021_ParamLimits

0x21e2,	// (0x00027d6a) list_highlight_pane_cp021

0x56f1,	// (0x0002b279) cset_slider_pane_g1

0x5703,	// (0x0002b28b) cset_slider_pane_g2

0x56fa,	// (0x0002b282) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x00035566) cset_slider_pane_g

0xd3cd,	// (0x00032f55) aid_area_touch_cam4_zoom

0xd3d5,	// (0x00032f5d) cam4_zoom_cont_pane

0xd3dd,	// (0x00032f65) cam4_zoom_pane_g1

0xd3e5,	// (0x00032f6d) cam4_zoom_pane_g2

0x1dfe,	// (0x00027986) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0003556d) cam4_zoom_pane_g

0xd3ed,	// (0x00032f75) cam4_zoom_cont_pane_g1

0xd3f6,	// (0x00032f7e) cam4_zoom_cont_pane_g2

0xd3ff,	// (0x00032f87) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x00035574) cam4_zoom_cont_pane_g

0x7faf,	// (0x0002db37) call4_image_pane_ParamLimits

0x7faf,	// (0x0002db37) call4_image_pane

0xcf63,	// (0x00032aeb) call4_windows_conf_pane_ParamLimits

0xcfa4,	// (0x00032b2c) popup_call4_audio_in_window_ParamLimits

0xcfa4,	// (0x00032b2c) popup_call4_audio_in_window

0x1f70,	// (0x00027af8) bg_popup_call2_act_pane_cp02

0xd01a,	// (0x00032ba2) call4_list_conf_pane

0xc3be,	// (0x00031f46) call4_image_pane_g1

0xc3be,	// (0x00031f46) call4_image_pane_g2

0x0001,

0xf700,	// (0x00035288) call4_image_pane_g

0xd408,	// (0x00032f90) list_single_graphic_popup_conf4_pane_ParamLimits

0xd408,	// (0x00032f90) list_single_graphic_popup_conf4_pane

0x1f70,	// (0x00027af8) list_highlight_pane_cp022

0xd41b,	// (0x00032fa3) list_single_graphic_popup_conf4_pane_g1

0x4c85,	// (0x0002a80d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0003557b) list_single_graphic_popup_conf4_pane_g

0xd423,	// (0x00032fab) list_single_graphic_popup_conf4_pane_t1

0x382f,	// (0x000293b7) popup_vtel_slider_window_ParamLimits

0x382f,	// (0x000293b7) popup_vtel_slider_window

0xcf13,	// (0x00032a9b) dialer2_ne_pane_t2_ParamLimits

0xcf13,	// (0x00032a9b) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0003545c) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0003545c) dialer2_ne_pane_t

0xc1a3,	// (0x00031d2b) bg_popup_sub_pane_cp010_ParamLimits

0xc1a3,	// (0x00031d2b) bg_popup_sub_pane_cp010

0x869b,	// (0x0002e223) popup_vtel_slider_window_g1_ParamLimits

0x869b,	// (0x0002e223) popup_vtel_slider_window_g1

0x86ae,	// (0x0002e236) popup_vtel_slider_window_g2_ParamLimits

0x86ae,	// (0x0002e236) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x00035580) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x00035580) popup_vtel_slider_window_g

0x8704,	// (0x0002e28c) vtel_slider_pane_ParamLimits

0x8704,	// (0x0002e28c) vtel_slider_pane

0x8726,	// (0x0002e2ae) vtel_slider_pane_g1_ParamLimits

0x8726,	// (0x0002e2ae) vtel_slider_pane_g1

0x873a,	// (0x0002e2c2) vtel_slider_pane_g2_ParamLimits

0x873a,	// (0x0002e2c2) vtel_slider_pane_g2

0x8752,	// (0x0002e2da) vtel_slider_pane_g3_ParamLimits

0x8752,	// (0x0002e2da) vtel_slider_pane_g3

0x8726,	// (0x0002e2ae) vtel_slider_pane_g4_ParamLimits

0x8726,	// (0x0002e2ae) vtel_slider_pane_g4

0x8768,	// (0x0002e2f0) vtel_slider_pane_g5_ParamLimits

0x8768,	// (0x0002e2f0) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00035589) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00035589) vtel_slider_pane_g

0x1f70,	// (0x00027af8) main_gallery2_pane

0x1ad1,	// (0x00027659) aid_size_row_itut2_dropdow_list_ParamLimits

0x1ad1,	// (0x00027659) aid_size_row_itut2_dropdow_list

0x1b5d,	// (0x000276e5) grid_vitu2_function_top_pane_ParamLimits

0x1b5d,	// (0x000276e5) grid_vitu2_function_top_pane

0x1bc2,	// (0x0002774a) popup_vitu2_dropdown_list_window_ParamLimits

0x1bc2,	// (0x0002774a) popup_vitu2_dropdown_list_window

0x1beb,	// (0x00027773) popup_vitu2_match_list_window

0x1e06,	// (0x0002798e) cell_vitu2_function_top_pane_ParamLimits

0x1e06,	// (0x0002798e) cell_vitu2_function_top_pane

0x1e24,	// (0x000279ac) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1e24,	// (0x000279ac) cell_vitu2_function_top_pane_cp01

0x1e42,	// (0x000279ca) cell_vitu2_function_top_wide_pane_ParamLimits

0x1e42,	// (0x000279ca) cell_vitu2_function_top_wide_pane

0xd19e,	// (0x00032d26) bg_button_pane_cp012

0x1e60,	// (0x000279e8) cell_vitu2_function_top_pane_g1

0xd447,	// (0x00032fcf) bg_button_pane_cp013_ParamLimits

0xd447,	// (0x00032fcf) bg_button_pane_cp013

0x877e,	// (0x0002e306) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x877e,	// (0x0002e306) cell_vitu2_function_top_wide_pane_g1

0xd19e,	// (0x00032d26) bg_popup_sub_pane_cp20

0x1e74,	// (0x000279fc) list_vitu2_match_list_pane

0xd1b6,	// (0x00032d3e) bg_popup_sub_pane_cp20_g1

0xd1be,	// (0x00032d46) bg_popup_sub_pane_cp20_g2

0x3cc6,	// (0x0002984e) bg_popup_sub_pane_cp20_g3

0xd1c6,	// (0x00032d4e) bg_popup_sub_pane_cp20_g4

0x3ca6,	// (0x0002982e) bg_popup_sub_pane_cp20_g5

0xd463,	// (0x00032feb) bg_popup_sub_pane_cp20_g6

0xd1d6,	// (0x00032d5e) bg_popup_sub_pane_cp20_g7

0xd1de,	// (0x00032d66) bg_popup_sub_pane_cp20_g8

0xd1e6,	// (0x00032d6e) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x00035594) bg_popup_sub_pane_cp20_g

0xd46b,	// (0x00032ff3) list_vitu2_match_list_item_pane_ParamLimits

0xd46b,	// (0x00032ff3) list_vitu2_match_list_item_pane

0xd47d,	// (0x00033005) list_vitu2_match_list_item_pane_t1

0xafb7,	// (0x00030b3f) bg_popup_sub_pane_cp21

0xd4a3,	// (0x0003302b) grid_vitu2_dropdown_list_pane

0x1e92,	// (0x00027a1a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1e92,	// (0x00027a1a) cell_vitu2_dropdown_list_char_pane

0x1eb3,	// (0x00027a3b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1eb3,	// (0x00027a3b) cell_vitu2_dropdown_list_ctrl_pane

0xd4ab,	// (0x00033033) cell_vitu2_dropdown_list_char_pane_g1

0xd4b4,	// (0x0003303c) cell_vitu2_dropdown_list_char_pane_g2

0xd4bd,	// (0x00033045) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x000355b1) cell_vitu2_dropdown_list_char_pane_g

0x1edf,	// (0x00027a67) cell_vitu2_dropdown_list_char_pane_t1

0x87cb,	// (0x0002e353) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x87cb,	// (0x0002e353) cell_vitu2_dropdown_list_ctrl_pane_g1

0x87d8,	// (0x0002e360) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x87d8,	// (0x0002e360) cell_vitu2_dropdown_list_ctrl_pane_g2

0x87e5,	// (0x0002e36d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x87e5,	// (0x0002e36d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1eed,	// (0x00027a75) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1eed,	// (0x00027a75) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd08c,	// (0x00032c14) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd08c,	// (0x00032c14) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x000355b8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x000355b8) cell_vitu2_dropdown_list_ctrl_pane_g

0x87f2,	// (0x0002e37a) aid_size_cell_gallery2_ParamLimits

0x87f2,	// (0x0002e37a) aid_size_cell_gallery2

0x8808,	// (0x0002e390) grid_gallery2_pane_ParamLimits

0x8808,	// (0x0002e390) grid_gallery2_pane

0x881c,	// (0x0002e3a4) scroll_pane_cp029_ParamLimits

0x881c,	// (0x0002e3a4) scroll_pane_cp029

0x8828,	// (0x0002e3b0) cell_gallery2_pane_ParamLimits

0x8828,	// (0x0002e3b0) cell_gallery2_pane

0xd4c6,	// (0x0003304e) cell_gallery2_pane_g2

0x885e,	// (0x0002e3e6) cell_gallery2_pane_g3

0xd4d0,	// (0x00033058) cell_gallery2_pane_g4

0xd4d8,	// (0x00033060) cell_gallery2_pane_g5

0x51b5,	// (0x0002ad3d) grid_highlight_pane_cp10

0x1beb,	// (0x00027773) popup_vitu2_match_list_window_ParamLimits

0x1c02,	// (0x0002778a) popup_vitu2_query_window_ParamLimits

0x1c02,	// (0x0002778a) popup_vitu2_query_window

0xafb7,	// (0x00030b3f) bg_vitu2_candi_button_pane

0xd4ab,	// (0x00033033) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4b4,	// (0x0003303c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4bd,	// (0x00033045) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8866,	// (0x0002e3ee) bg_button_pane_cp015

0x8878,	// (0x0002e400) bg_button_pane_cp016

0x888b,	// (0x0002e413) bg_button_pane_cp017

0xbeb8,	// (0x00031a40) bg_popup_sub_pane_cp22

0xd4e0,	// (0x00033068) popup_vitu2_query_window_g1

0x88d0,	// (0x0002e458) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x000355c3) popup_vitu2_query_window_g

0x88ef,	// (0x0002e477) popup_vitu2_query_window_t1_ParamLimits

0x88ef,	// (0x0002e477) popup_vitu2_query_window_t1

0x8924,	// (0x0002e4ac) popup_vitu2_query_window_t2_ParamLimits

0x8924,	// (0x0002e4ac) popup_vitu2_query_window_t2

0x8936,	// (0x0002e4be) popup_vitu2_query_window_t3_ParamLimits

0x8936,	// (0x0002e4be) popup_vitu2_query_window_t3

0x895e,	// (0x0002e4e6) popup_vitu2_query_window_t4_ParamLimits

0x895e,	// (0x0002e4e6) popup_vitu2_query_window_t4

0x897f,	// (0x0002e507) popup_vitu2_query_window_t5_ParamLimits

0x897f,	// (0x0002e507) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x000355ca) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x000355ca) popup_vitu2_query_window_t

0xd2b8,	// (0x00032e40) main_cset_text_pane

0x83d5,	// (0x0002df5d) aid_area_touch_slider_ParamLimits

0x83f1,	// (0x0002df79) cset_slider_pane_ParamLimits

0x841b,	// (0x0002dfa3) main_cset_slider_pane_g1_ParamLimits

0x8430,	// (0x0002dfb8) main_cset_slider_pane_g2_ParamLimits

0xd2d9,	// (0x00032e61) main_cset_slider_pane_g3_ParamLimits

0xd2d9,	// (0x00032e61) main_cset_slider_pane_g3

0x8445,	// (0x0002dfcd) main_cset_slider_pane_g4_ParamLimits

0x8445,	// (0x0002dfcd) main_cset_slider_pane_g4

0x8454,	// (0x0002dfdc) main_cset_slider_pane_g5_ParamLimits

0x8454,	// (0x0002dfdc) main_cset_slider_pane_g5

0x8460,	// (0x0002dfe8) main_cset_slider_pane_g6_ParamLimits

0x8460,	// (0x0002dfe8) main_cset_slider_pane_g6

0xf995,	// (0x0003551d) main_cset_slider_pane_g_ParamLimits

0xd309,	// (0x00032e91) main_cset_slider_pane_t1_ParamLimits

0x84ec,	// (0x0002e074) main_cset_slider_pane_t2_ParamLimits

0x8506,	// (0x0002e08e) main_cset_slider_pane_t3_ParamLimits

0x8520,	// (0x0002e0a8) main_cset_slider_pane_t4_ParamLimits

0x853a,	// (0x0002e0c2) main_cset_slider_pane_t5_ParamLimits

0x8554,	// (0x0002e0dc) main_cset_slider_pane_t6_ParamLimits

0x8569,	// (0x0002e0f1) main_cset_slider_pane_t7_ParamLimits

0x8593,	// (0x0002e11b) main_cset_slider_pane_t8_ParamLimits

0x8593,	// (0x0002e11b) main_cset_slider_pane_t8

0x85bb,	// (0x0002e143) main_cset_slider_pane_t9_ParamLimits

0x85bb,	// (0x0002e143) main_cset_slider_pane_t9

0x85e3,	// (0x0002e16b) main_cset_slider_pane_t10_ParamLimits

0x85e3,	// (0x0002e16b) main_cset_slider_pane_t10

0x860b,	// (0x0002e193) main_cset_slider_pane_t11_ParamLimits

0x860b,	// (0x0002e193) main_cset_slider_pane_t11

0x8633,	// (0x0002e1bb) main_cset_slider_pane_t12_ParamLimits

0x8633,	// (0x0002e1bb) main_cset_slider_pane_t12

0x8650,	// (0x0002e1d8) main_cset_slider_pane_t13_ParamLimits

0x8650,	// (0x0002e1d8) main_cset_slider_pane_t13

0xf9ba,	// (0x00035542) main_cset_slider_pane_t_ParamLimits

0x1f70,	// (0x00027af8) bg_popup_sub_pane_cp011

0xd4ec,	// (0x00033074) main_cset_text_pane_g1

0xd4f4,	// (0x0003307c) main_cset_text_pane_t1

0xd502,	// (0x0003308a) main_cset_text_pane_t2

0xd510,	// (0x00033098) main_cset_text_pane_t3

0xd51e,	// (0x000330a6) main_cset_text_pane_t4

0xd52c,	// (0x000330b4) main_cset_text_pane_t5

0xd53a,	// (0x000330c2) main_cset_text_pane_t6

0xd548,	// (0x000330d0) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x000355d9) main_cset_text_pane_t

0x1f70,	// (0x00027af8) main_cam4_burst_pane

0x1f70,	// (0x00027af8) main_cam5_pane

0x8314,	// (0x0002de9c) bg_button_pane_cp019

0x831d,	// (0x0002dea5) bg_button_pane_cp020

0xd2e5,	// (0x00032e6d) main_cset_slider_pane_g7_ParamLimits

0xd2e5,	// (0x00032e6d) main_cset_slider_pane_g7

0xd2f1,	// (0x00032e79) main_cset_slider_pane_g8_ParamLimits

0xd2f1,	// (0x00032e79) main_cset_slider_pane_g8

0x8474,	// (0x0002dffc) main_cset_slider_pane_g9_ParamLimits

0x8474,	// (0x0002dffc) main_cset_slider_pane_g9

0x8480,	// (0x0002e008) main_cset_slider_pane_g10_ParamLimits

0x8480,	// (0x0002e008) main_cset_slider_pane_g10

0x848c,	// (0x0002e014) main_cset_slider_pane_g11_ParamLimits

0x848c,	// (0x0002e014) main_cset_slider_pane_g11

0x8498,	// (0x0002e020) main_cset_slider_pane_g12_ParamLimits

0x8498,	// (0x0002e020) main_cset_slider_pane_g12

0x84a4,	// (0x0002e02c) main_cset_slider_pane_g13_ParamLimits

0x84a4,	// (0x0002e02c) main_cset_slider_pane_g13

0x84b0,	// (0x0002e038) main_cset_slider_pane_g14_ParamLimits

0x84b0,	// (0x0002e038) main_cset_slider_pane_g14

0x84bc,	// (0x0002e044) main_cset_slider_pane_g15_ParamLimits

0x84bc,	// (0x0002e044) main_cset_slider_pane_g15

0xd337,	// (0x00032ebf) main_cset_slider_pane_t14_ParamLimits

0xd337,	// (0x00032ebf) main_cset_slider_pane_t14

0xd370,	// (0x00032ef8) main_cset_slider_pane_t15_ParamLimits

0xd370,	// (0x00032ef8) main_cset_slider_pane_t15

0x89f6,	// (0x0002e57e) aid_cam4_burst_size_cell_ParamLimits

0x89f6,	// (0x0002e57e) aid_cam4_burst_size_cell

0x8a16,	// (0x0002e59e) grid_cam4_burst_pane_ParamLimits

0x8a16,	// (0x0002e59e) grid_cam4_burst_pane

0x8a4e,	// (0x0002e5d6) linegrid_cam4_burst_pane_ParamLimits

0x8a4e,	// (0x0002e5d6) linegrid_cam4_burst_pane

0xd556,	// (0x000330de) scroll_pane_cp30_ParamLimits

0xd556,	// (0x000330de) scroll_pane_cp30

0x8a72,	// (0x0002e5fa) cell_cam4_burst_pane_ParamLimits

0x8a72,	// (0x0002e5fa) cell_cam4_burst_pane

0xd562,	// (0x000330ea) linegrid_cam4_burst_pane_g1_ParamLimits

0xd562,	// (0x000330ea) linegrid_cam4_burst_pane_g1

0x8abf,	// (0x0002e647) linegrid_cam4_burst_pane_g2_ParamLimits

0x8abf,	// (0x0002e647) linegrid_cam4_burst_pane_g2

0xd56f,	// (0x000330f7) linegrid_cam4_burst_pane_g3_ParamLimits

0xd56f,	// (0x000330f7) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x000355e8) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x000355e8) linegrid_cam4_burst_pane_g

0x8ad0,	// (0x0002e658) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8ad0,	// (0x0002e658) linegrid_cam4_burst_pane_g3_copy1

0xd57c,	// (0x00033104) linegrid_cam4_burst_pane_g4_ParamLimits

0xd57c,	// (0x00033104) linegrid_cam4_burst_pane_g4

0x8aea,	// (0x0002e672) linegrid_cam4_burst_pane_g5_ParamLimits

0x8aea,	// (0x0002e672) linegrid_cam4_burst_pane_g5

0x8afb,	// (0x0002e683) linegrid_cam4_burst_pane_g6_ParamLimits

0x8afb,	// (0x0002e683) linegrid_cam4_burst_pane_g6

0xd589,	// (0x00033111) linegrid_cam4_burst_pane_g7_ParamLimits

0xd589,	// (0x00033111) linegrid_cam4_burst_pane_g7

0x8b12,	// (0x0002e69a) cell_cam4_burst_pane_g1

0xd5a2,	// (0x0003312a) main_cam5_pane_t1_ParamLimits

0xd5a2,	// (0x0003312a) main_cam5_pane_t1

0xd5b4,	// (0x0003313c) main_cam5_pane_t2_ParamLimits

0xd5b4,	// (0x0003313c) main_cam5_pane_t2

0xd5c6,	// (0x0003314e) main_cam5_pane_t3_ParamLimits

0xd5c6,	// (0x0003314e) main_cam5_pane_t3

0xd5d8,	// (0x00033160) main_cam5_pane_t4_ParamLimits

0xd5d8,	// (0x00033160) main_cam5_pane_t4

0xd5f0,	// (0x00033178) main_cam5_pane_t5_ParamLimits

0xd5f0,	// (0x00033178) main_cam5_pane_t5

0xd604,	// (0x0003318c) main_cam5_pane_t6_ParamLimits

0xd604,	// (0x0003318c) main_cam5_pane_t6

0xd618,	// (0x000331a0) main_cam5_pane_t7_ParamLimits

0xd618,	// (0x000331a0) main_cam5_pane_t7

0xd62a,	// (0x000331b2) main_cam5_pane_t8_ParamLimits

0xd62a,	// (0x000331b2) main_cam5_pane_t8

0xd646,	// (0x000331ce) main_cam5_pane_t9_ParamLimits

0xd646,	// (0x000331ce) main_cam5_pane_t9

0xd658,	// (0x000331e0) main_cam5_pane_t10_ParamLimits

0xd658,	// (0x000331e0) main_cam5_pane_t10

0xd66a,	// (0x000331f2) main_cam5_pane_t11_ParamLimits

0xd66a,	// (0x000331f2) main_cam5_pane_t11

0xd67c,	// (0x00033204) main_cam5_pane_t12_ParamLimits

0xd67c,	// (0x00033204) main_cam5_pane_t12

0xd691,	// (0x00033219) main_cam5_pane_t13_ParamLimits

0xd691,	// (0x00033219) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x000355f4) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x000355f4) main_cam5_pane_t

0x21a8,	// (0x00027d30) popup_scut_keymap_window_ParamLimits

0x21a8,	// (0x00027d30) popup_scut_keymap_window

0x8b25,	// (0x0002e6ad) aid_size_cell_brow_shortcut

0x51b5,	// (0x0002ad3d) bg_popup_window_pane_cp010

0x8b31,	// (0x0002e6b9) grid_scut_pane

0x8b3d,	// (0x0002e6c5) cell_scut_pane_ParamLimits

0x8b3d,	// (0x0002e6c5) cell_scut_pane

0x8b54,	// (0x0002e6dc) cell_scut_pane_g1

0xd6ae,	// (0x00033236) cell_scut_pane_t1

0xd6bd,	// (0x00033245) cell_scut_pane_t2

0x8b5d,	// (0x0002e6e5) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0003560f) cell_scut_pane_t

0x72f4,	// (0x0002ce7c) main_mup3_pane_g8_ParamLimits

0x72f4,	// (0x0002ce7c) main_mup3_pane_g8

0x1ae9,	// (0x00027671) area_vitu2_query_pane_ParamLimits

0x1ae9,	// (0x00027671) area_vitu2_query_pane

0x889e,	// (0x0002e426) input_focus_pane_cp08

0xd6cc,	// (0x00033254) area_vitu2_query_pane_g1

0x8b6b,	// (0x0002e6f3) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x00035616) area_vitu2_query_pane_g

0x8b7c,	// (0x0002e704) area_vitu2_query_pane_t1_ParamLimits

0x8b7c,	// (0x0002e704) area_vitu2_query_pane_t1

0x8b90,	// (0x0002e718) area_vitu2_query_pane_t2_ParamLimits

0x8b90,	// (0x0002e718) area_vitu2_query_pane_t2

0x8ba4,	// (0x0002e72c) area_vitu2_query_pane_t3_ParamLimits

0x8ba4,	// (0x0002e72c) area_vitu2_query_pane_t3

0xd6d8,	// (0x00033260) area_vitu2_query_pane_t4_ParamLimits

0xd6d8,	// (0x00033260) area_vitu2_query_pane_t4

0xd700,	// (0x00033288) area_vitu2_query_pane_t5_ParamLimits

0xd700,	// (0x00033288) area_vitu2_query_pane_t5

0xd728,	// (0x000332b0) area_vitu2_query_pane_t6_ParamLimits

0xd728,	// (0x000332b0) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0003561b) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0003561b) area_vitu2_query_pane_t

0x8bcc,	// (0x0002e754) bg_button_pane_cp018

0x8bda,	// (0x0002e762) bg_button_pane_cp021

0x8be6,	// (0x0002e76e) bg_button_pane_cp022

0x8bf5,	// (0x0002e77d) input_focus_pane_cp09

0x4fe0,	// (0x0002ab68) aid_size_touch_mv_arrow_left

0x5009,	// (0x0002ab91) aid_size_touch_mv_arrow_right

0x84d4,	// (0x0002e05c) main_cset_slider_pane_g16_ParamLimits

0x84d4,	// (0x0002e05c) main_cset_slider_pane_g16

0x84e0,	// (0x0002e068) main_cset_slider_pane_g17_ParamLimits

0x84e0,	// (0x0002e068) main_cset_slider_pane_g17

0x8b12,	// (0x0002e69a) cell_cam4_burst_pane_g1_ParamLimits

0x1f70,	// (0x00027af8) compa_mode_pane

0x86be,	// (0x0002e246) popup_vtel_slider_window_g3_ParamLimits

0x86be,	// (0x0002e246) popup_vtel_slider_window_g3

0x86d5,	// (0x0002e25d) popup_vtel_slider_window_g4_ParamLimits

0x86d5,	// (0x0002e25d) popup_vtel_slider_window_g4

0x86ec,	// (0x0002e274) popup_vtel_slider_window_t1_ParamLimits

0x86ec,	// (0x0002e274) popup_vtel_slider_window_t1

0x1f70,	// (0x00027af8) main_cl_pane

0xbee0,	// (0x00031a68) popup_imed_adjust2_window_ParamLimits

0xbeb8,	// (0x00031a40) bg_tb_trans_pane_cp05_ParamLimits

0xc8c9,	// (0x00032451) popup_imed_adjust2_window_g1_ParamLimits

0xc8d8,	// (0x00032460) popup_imed_adjust2_window_g2_ParamLimits

0xc8d8,	// (0x00032460) popup_imed_adjust2_window_g2

0xc8e4,	// (0x0003246c) popup_imed_adjust2_window_g3_ParamLimits

0xc8e4,	// (0x0003246c) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x00035386) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x00035386) popup_imed_adjust2_window_g

0xc8f0,	// (0x00032478) popup_imed_adjust2_window_t1_ParamLimits

0xc908,	// (0x00032490) slider_imed_adjust_pane_ParamLimits

0xc91c,	// (0x000324a4) slider_imed_adjust_pane_g1_ParamLimits

0xc92c,	// (0x000324b4) slider_imed_adjust_pane_g2_ParamLimits

0xc93c,	// (0x000324c4) slider_imed_adjust_pane_g3_ParamLimits

0xc94d,	// (0x000324d5) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0003538d) slider_imed_adjust_pane_g_ParamLimits

0x183a,	// (0x000273c2) aid_touch_area_cam4_ParamLimits

0x183a,	// (0x000273c2) aid_touch_area_cam4

0xd05e,	// (0x00032be6) battery_pane_cp01

0x190a,	// (0x00027492) main_camera4_pane_g6_ParamLimits

0x190a,	// (0x00027492) main_camera4_pane_g6

0x1934,	// (0x000274bc) main_camera4_pane_t2_ParamLimits

0x1934,	// (0x000274bc) main_camera4_pane_t2

0x0001,

0xf908,	// (0x00035490) main_camera4_pane_t_ParamLimits

0xf908,	// (0x00035490) main_camera4_pane_t

0x1955,	// (0x000274dd) aid_touch_area_vid4_ParamLimits

0x1955,	// (0x000274dd) aid_touch_area_vid4

0x19bc,	// (0x00027544) main_video4_pane_g5_ParamLimits

0x19bc,	// (0x00027544) main_video4_pane_g5

0x19e7,	// (0x0002756f) vid4_progress_pane_ParamLimits

0x19e7,	// (0x0002756f) vid4_progress_pane

0xd2fd,	// (0x00032e85) main_cset_slider_pane_g18_ParamLimits

0xd2fd,	// (0x00032e85) main_cset_slider_pane_g18

0xd596,	// (0x0003311e) cell_cam4_burst_pane_g2_ParamLimits

0xd596,	// (0x0003311e) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x000355ef) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x000355ef) cell_cam4_burst_pane_g

0x2bda,	// (0x00028762) bg_cl_pane_ParamLimits

0x2bda,	// (0x00028762) bg_cl_pane

0x8c04,	// (0x0002e78c) cl_header_pane_ParamLimits

0x8c04,	// (0x0002e78c) cl_header_pane

0x8c18,	// (0x0002e7a0) cl_listscroll_pane_ParamLimits

0x8c18,	// (0x0002e7a0) cl_listscroll_pane

0xd774,	// (0x000332fc) bg_cl_pane_g1

0xd77c,	// (0x00033304) bg_cl_pane_g2

0xd784,	// (0x0003330c) bg_cl_pane_g3

0xd78c,	// (0x00033314) bg_cl_pane_g4

0xd794,	// (0x0003331c) bg_cl_pane_g5

0xd79c,	// (0x00033324) bg_cl_pane_g6

0xd7a4,	// (0x0003332c) bg_cl_pane_g7

0xd7ac,	// (0x00033334) bg_cl_pane_g8

0xd7b4,	// (0x0003333c) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0003562a) bg_cl_pane_g

0x8c28,	// (0x0002e7b0) aid_height_cl_leading_ParamLimits

0x8c28,	// (0x0002e7b0) aid_height_cl_leading

0x8c34,	// (0x0002e7bc) aid_height_cl_text_ParamLimits

0x8c34,	// (0x0002e7bc) aid_height_cl_text

0x21e2,	// (0x00027d6a) bg_cl_header_pane_ParamLimits

0x21e2,	// (0x00027d6a) bg_cl_header_pane

0x8c53,	// (0x0002e7db) cl_header_pane_g1_ParamLimits

0x8c53,	// (0x0002e7db) cl_header_pane_g1

0x8c69,	// (0x0002e7f1) cl_header_pane_t1_ParamLimits

0x8c69,	// (0x0002e7f1) cl_header_pane_t1

0xd7bc,	// (0x00033344) cl_list_pane

0xd2d0,	// (0x00032e58) hc_scroll_pane_cp01

0x3ca6,	// (0x0002982e) bg_cl_header_pane_g1

0xd1b6,	// (0x00032d3e) bg_cl_header_pane_g2

0x3cc6,	// (0x0002984e) bg_cl_header_pane_g3

0xd1c6,	// (0x00032d4e) bg_cl_header_pane_g4

0xd1be,	// (0x00032d46) bg_cl_header_pane_g5

0xd463,	// (0x00032feb) bg_cl_header_pane_g6

0xd1de,	// (0x00032d66) bg_cl_header_pane_g7

0xd1e6,	// (0x00032d6e) bg_cl_header_pane_g8

0xd1d6,	// (0x00032d5e) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0003563d) bg_cl_header_pane_g

0x8c82,	// (0x0002e80a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8c82,	// (0x0002e80a) hc_cl_list_double_graphic_heading_pane

0x8c93,	// (0x0002e81b) hc_cl_list_single_graphic_pane_ParamLimits

0x8c93,	// (0x0002e81b) hc_cl_list_single_graphic_pane

0x8ca9,	// (0x0002e831) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8ca9,	// (0x0002e831) hc_cl_list_single_graphic_pane_g1

0x8cb5,	// (0x0002e83d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8cb5,	// (0x0002e83d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x00035650) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x00035650) hc_cl_list_single_graphic_pane_g

0x8cc9,	// (0x0002e851) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8cc9,	// (0x0002e851) hc_cl_list_single_graphic_pane_t1

0x8ca9,	// (0x0002e831) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8ca9,	// (0x0002e831) hc_cl_list_double_graphic_heading_pane_g1

0x8cde,	// (0x0002e866) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8cde,	// (0x0002e866) hc_cl_list_double_graphic_heading_pane_g2

0x8cf2,	// (0x0002e87a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8cf2,	// (0x0002e87a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x00035655) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x00035655) hc_cl_list_double_graphic_heading_pane_g

0x8d06,	// (0x0002e88e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8d06,	// (0x0002e88e) hc_cl_list_double_graphic_heading_pane_t1

0x8d1b,	// (0x0002e8a3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8d1b,	// (0x0002e8a3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0003565c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0003565c) hc_cl_list_double_graphic_heading_pane_t

0xd7cd,	// (0x00033355) vid4_progress_pane_g1

0xd7dd,	// (0x00033365) vid4_progress_pane_g2

0x4880,	// (0x0002a408) vid4_progress_pane_g3

0xd7ed,	// (0x00033375) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x00035661) vid4_progress_pane_g

0xd80b,	// (0x00033393) vid4_progress_pane_t1

0xd820,	// (0x000333a8) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0003566c) vid4_progress_pane_t

0xd84b,	// (0x000333d3) wait_bar_pane_cp07

0xc1b1,	// (0x00031d39) blid_firmament_pane_ParamLimits

0xc1f4,	// (0x00031d7c) popup_blid_sat_info2_window_g1

0xc218,	// (0x00031da0) popup_blid_sat_info2_window_t3

0xc226,	// (0x00031dae) popup_blid_sat_info2_window_t4

0xc234,	// (0x00031dbc) popup_blid_sat_info2_window_t5

0xc242,	// (0x00031dca) popup_blid_sat_info2_window_t6

0xc252,	// (0x00031dda) popup_blid_sat_info2_window_t7

0xc260,	// (0x00031de8) popup_blid_sat_info2_window_t8

0xc26e,	// (0x00031df6) popup_blid_sat_info2_window_t9

0xc27c,	// (0x00031e04) popup_blid_sat_info2_window_t10

0xc33e,	// (0x00031ec6) aid_firma_cardinal_ParamLimits

0xc352,	// (0x00031eda) blid_firmament_pane_t1_ParamLimits

0xc369,	// (0x00031ef1) blid_firmament_pane_t2_ParamLimits

0xc380,	// (0x00031f08) blid_firmament_pane_t3_ParamLimits

0xc397,	// (0x00031f1f) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0003527f) blid_firmament_pane_t_ParamLimits

0xc3ae,	// (0x00031f36) blid_sat_info_pane_ParamLimits

0x21e2,	// (0x00027d6a) main_cam_set_pane_ParamLimits

0x7ad9,	// (0x0002d661) aid_size_cell_colour_35_ParamLimits

0x7af9,	// (0x0002d681) aid_size_cell_colour_112_ParamLimits

0x7b19,	// (0x0002d6a1) aid_size_cell_effect_ParamLimits

0xbeb8,	// (0x00031a40) bg_tb_trans_pane_cp02_ParamLimits

0x47fa,	// (0x0002a382) heading_imed_pane_ParamLimits

0x7b39,	// (0x0002d6c1) listscroll_imed_pane_ParamLimits

0xb4ea,	// (0x00031072) popup_call2_audio_first_window_g5_ParamLimits

0xb4ea,	// (0x00031072) popup_call2_audio_first_window_g5

0x1617,	// (0x0002719f) aid_size_touch_image3_arrow_left_ParamLimits

0x1617,	// (0x0002719f) aid_size_touch_image3_arrow_left

0x1643,	// (0x000271cb) aid_size_touch_image3_arrow_right_ParamLimits

0x1643,	// (0x000271cb) aid_size_touch_image3_arrow_right

0xd836,	// (0x000333be) vid4_progress_pane_t3

0x7e4c,	// (0x0002d9d4) main_hwr_training_symbol_option_pane_ParamLimits

0x7e4c,	// (0x0002d9d4) main_hwr_training_symbol_option_pane

0xcbb6,	// (0x0003273e) popup_hwr_training_preview_window_ParamLimits

0xcbb6,	// (0x0003273e) popup_hwr_training_preview_window

0x14ca,	// (0x00027052) hwr_training_navi_pane_g5_ParamLimits

0x14ca,	// (0x00027052) hwr_training_navi_pane_g5

0xd196,	// (0x00032d1e) popup_char_count_window

0xd19e,	// (0x00032d26) bg_popup_sub_pane_cp20_ParamLimits

0x1e74,	// (0x000279fc) list_vitu2_match_list_pane_ParamLimits

0x1e83,	// (0x00027a0b) vitu2_page_scroll_pane_ParamLimits

0x1e83,	// (0x00027a0b) vitu2_page_scroll_pane

0xd8b7,	// (0x0003343f) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd8b7,	// (0x0003343f) list_single_hwr_training_symbol_option_pane

0xd8ca,	// (0x00033452) list_single_hwr_training_symbol_option_pane_g1

0xd8d2,	// (0x0003345a) list_single_hwr_training_symbol_option_pane_t1

0xd8e0,	// (0x00033468) bg_button_pane_cp023

0xd8e9,	// (0x00033471) bg_button_pane_cp024

0x8d30,	// (0x0002e8b8) vitu2_page_scroll_pane_g1

0x8d38,	// (0x0002e8c0) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x00035673) vitu2_page_scroll_pane_g

0x8d40,	// (0x0002e8c8) vitu2_page_scroll_pane_t1

0xd91c,	// (0x000334a4) popup_char_count_window_g1

0xd925,	// (0x000334ad) popup_char_count_window_g2

0xd92e,	// (0x000334b6) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x00035678) popup_char_count_window_g

0xd937,	// (0x000334bf) popup_char_count_window_t1

0x1f70,	// (0x00027af8) main_vded2_pane

0xc8b5,	// (0x0003243d) aid_size_cell_imed_line

0xc8bf,	// (0x00032447) grid_imed_line_width_pane

0x1a55,	// (0x000275dd) vid4_indicators_pane_g4

0xd945,	// (0x000334cd) cell_imed_line_width_pane_ParamLimits

0xd945,	// (0x000334cd) cell_imed_line_width_pane

0xd959,	// (0x000334e1) cell_imed_line_width_pane_g1

0xc15f,	// (0x00031ce7) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0003567f) cell_imed_line_width_pane_g

0x8d4f,	// (0x0002e8d7) main_vded2_pane_g1_ParamLimits

0x8d4f,	// (0x0002e8d7) main_vded2_pane_g1

0x8d65,	// (0x0002e8ed) main_vded2_pane_g2_ParamLimits

0x8d65,	// (0x0002e8ed) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x00035684) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x00035684) main_vded2_pane_g

0x8d77,	// (0x0002e8ff) vded2_slider_pane_ParamLimits

0x8d77,	// (0x0002e8ff) vded2_slider_pane

0x8d87,	// (0x0002e90f) aid_size_touch_vded2_end

0x8d91,	// (0x0002e919) aid_size_touch_vded2_playhead

0xd962,	// (0x000334ea) aid_size_touch_vded2_start

0xd96a,	// (0x000334f2) vded2_slider_bg_pane

0xd973,	// (0x000334fb) vded2_slider_pane_g1

0xd97c,	// (0x00033504) vded2_slider_pane_g2

0x8d9b,	// (0x0002e923) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00035689) vded2_slider_pane_g

0xd984,	// (0x0003350c) vded2_slider_bg_pane_g1

0xd98d,	// (0x00033515) vded2_slider_bg_pane_g2

0xd996,	// (0x0003351e) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x00035690) vded2_slider_bg_pane_g

0x58bb,	// (0x0002b443) aid_postcard_touch_down_pane_ParamLimits

0x58bb,	// (0x0002b443) aid_postcard_touch_down_pane

0x58d1,	// (0x0002b459) aid_postcard_touch_up_pane_ParamLimits

0x58d1,	// (0x0002b459) aid_postcard_touch_up_pane

0x1f70,	// (0x00027af8) main_blid2_pane

0xbec6,	// (0x00031a4e) popup_blid2_search_window

0x1f70,	// (0x00027af8) blid2_gps_pane

0x1f70,	// (0x00027af8) blid2_navig_pane

0x1f70,	// (0x00027af8) blid2_search_pane

0x1f70,	// (0x00027af8) blid2_tripm_pane

0x8da6,	// (0x0002e92e) blid2_search_pane_g1_ParamLimits

0x8da6,	// (0x0002e92e) blid2_search_pane_g1

0x8dc0,	// (0x0002e948) blid2_search_pane_t1_ParamLimits

0x8dc0,	// (0x0002e948) blid2_search_pane_t1

0x8dd2,	// (0x0002e95a) aid_size_cell_blid2_gps_ParamLimits

0x8dd2,	// (0x0002e95a) aid_size_cell_blid2_gps

0x8dea,	// (0x0002e972) blid2_gps_pane_g1_ParamLimits

0x8dea,	// (0x0002e972) blid2_gps_pane_g1

0x8dfe,	// (0x0002e986) grid_blid2_satellite_pane_ParamLimits

0x8dfe,	// (0x0002e986) grid_blid2_satellite_pane

0x8e18,	// (0x0002e9a0) blid2_navig_pane_g1_ParamLimits

0x8e18,	// (0x0002e9a0) blid2_navig_pane_g1

0x8e24,	// (0x0002e9ac) blid2_navig_pane_t1_ParamLimits

0x8e24,	// (0x0002e9ac) blid2_navig_pane_t1

0x8e3f,	// (0x0002e9c7) blid2_navig_pane_t2_ParamLimits

0x8e3f,	// (0x0002e9c7) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x00035697) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x00035697) blid2_navig_pane_t

0x8e5a,	// (0x0002e9e2) blid2_navig_ring_pane_ParamLimits

0x8e5a,	// (0x0002e9e2) blid2_navig_ring_pane

0x8e73,	// (0x0002e9fb) blid2_speed_pane_ParamLimits

0x8e73,	// (0x0002e9fb) blid2_speed_pane

0x8e7f,	// (0x0002ea07) blid2_tripm_pane_g1_ParamLimits

0x8e7f,	// (0x0002ea07) blid2_tripm_pane_g1

0x8e98,	// (0x0002ea20) blid2_tripm_pane_g2_ParamLimits

0x8e98,	// (0x0002ea20) blid2_tripm_pane_g2

0x8eac,	// (0x0002ea34) blid2_tripm_pane_g3_ParamLimits

0x8eac,	// (0x0002ea34) blid2_tripm_pane_g3

0x8ec0,	// (0x0002ea48) blid2_tripm_pane_g4_ParamLimits

0x8ec0,	// (0x0002ea48) blid2_tripm_pane_g4

0x8ed4,	// (0x0002ea5c) blid2_tripm_pane_g5_ParamLimits

0x8ed4,	// (0x0002ea5c) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0003569c) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0003569c) blid2_tripm_pane_g

0x8efa,	// (0x0002ea82) blid2_tripm_pane_t1_ParamLimits

0x8efa,	// (0x0002ea82) blid2_tripm_pane_t1

0x8f15,	// (0x0002ea9d) blid2_tripm_pane_t2_ParamLimits

0x8f15,	// (0x0002ea9d) blid2_tripm_pane_t2

0x8f2e,	// (0x0002eab6) blid2_tripm_pane_t3_ParamLimits

0x8f2e,	// (0x0002eab6) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x000356a9) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x000356a9) blid2_tripm_pane_t

0x8f75,	// (0x0002eafd) cell_blid2_satellite_pane_ParamLimits

0x8f75,	// (0x0002eafd) cell_blid2_satellite_pane

0x8f93,	// (0x0002eb1b) cell_blid2_satellite_pane_g1

0xd99f,	// (0x00033527) cell_blid2_satellite_pane_t1

0xc3be,	// (0x00031f46) blid2_speed_pane_g1

0xd9ad,	// (0x00033535) blid2_speed_pane_t1

0xd9bb,	// (0x00033543) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x000356b2) blid2_speed_pane_t

0xc3be,	// (0x00031f46) blid2_navig_ring_pane_g1

0x8f9c,	// (0x0002eb24) blid2_navig_ring_pane_g2

0x8fa4,	// (0x0002eb2c) blid2_navig_ring_pane_g3

0x8fac,	// (0x0002eb34) blid2_navig_ring_pane_g4

0x8fb4,	// (0x0002eb3c) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x000356b7) blid2_navig_ring_pane_g

0x1f70,	// (0x00027af8) bg_popup_window_pane_cp011

0xd9c9,	// (0x00033551) popup_blid2_search_window_g1

0xd9d1,	// (0x00033559) popup_blid2_search_window_t1

0xd9df,	// (0x00033567) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x000356c2) popup_blid2_search_window_t

0x3b72,	// (0x000296fa) main_browser_pane_g1

0x2bda,	// (0x00028762) main_browser_pane_ParamLimits

0xd19e,	// (0x00032d26) bg_button_pane_cp011_ParamLimits

0x1dea,	// (0x00027972) cell_vitu2_function_pane_g1_ParamLimits

0xbeb8,	// (0x00031a40) bg_popup_sub_pane_cp22_ParamLimits

0x889e,	// (0x0002e426) input_focus_pane_cp08_ParamLimits

0x88b5,	// (0x0002e43d) popup_vitu2_query_button_pane_ParamLimits

0x88b5,	// (0x0002e43d) popup_vitu2_query_button_pane

0x88c6,	// (0x0002e44e) popup_vitu2_query_input_button_pane

0xd4e0,	// (0x00033068) popup_vitu2_query_window_g1_ParamLimits

0x88d0,	// (0x0002e458) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x000355c3) popup_vitu2_query_window_g_ParamLimits

0x1f70,	// (0x00027af8) bg_button_pane_cp026

0x8fbc,	// (0x0002eb44) popup_vitu2_query_input_button_pane_g1

0x1f70,	// (0x00027af8) bg_button_pane_cp025

0xd9ed,	// (0x00033575) popup_vitu2_query_button_pane_t1

0x6faf,	// (0x0002cb37) main_mp3_pane_t6

0x6fbd,	// (0x0002cb45) popup_slider_window_cp01

0xd09a,	// (0x00032c22) cam4_battery_pane

0xd101,	// (0x00032c89) cam4_battery_pane_cp02

0xd7c5,	// (0x0003334d) cam4_battery_pane_cp01

0xd7c5,	// (0x0003334d) cam4_battery_pane_cp03

0xcf09,	// (0x00032a91) cam4_battery_pane_g1

0xc3be,	// (0x00031f46) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x000356c7) cam4_battery_pane_g

0xc28a,	// (0x00031e12) popup_blid_sat_info2_window_t11

0x4fe0,	// (0x0002ab68) aid_size_touch_mv_arrow_left_ParamLimits

0x5009,	// (0x0002ab91) aid_size_touch_mv_arrow_right_ParamLimits

0x5051,	// (0x0002abd9) navi_pane_g1_ParamLimits

0x505d,	// (0x0002abe5) navi_pane_g2_ParamLimits

0x508b,	// (0x0002ac13) navi_pane_g3_ParamLimits

0xf409,	// (0x00034f91) navi_pane_g_ParamLimits

0x5147,	// (0x0002accf) navi_pane_mv_t1_ParamLimits

0x7b45,	// (0x0002d6cd) grid_imed_effect_pane_ParamLimits

0x371a,	// (0x000292a2) aid_placing_vt_slider_lsc

0x372a,	// (0x000292b2) aid_placing_vt_slider_prt

0x21e2,	// (0x00027d6a) bg_tb_trans_pane_cp01_ParamLimits

0xc54a,	// (0x000320d2) popup_image_details_window_g1_ParamLimits

0xc55d,	// (0x000320e5) popup_image_details_window_g2_ParamLimits

0xc572,	// (0x000320fa) popup_image_details_window_g3_ParamLimits

0xc572,	// (0x000320fa) popup_image_details_window_g3

0xf73c,	// (0x000352c4) popup_image_details_window_g_ParamLimits

0xc586,	// (0x0003210e) popup_image_details_window_t1_ParamLimits

0xc598,	// (0x00032120) popup_image_details_window_t2_ParamLimits

0xc5b1,	// (0x00032139) popup_image_details_window_t3_ParamLimits

0xc5c5,	// (0x0003214d) popup_image_details_window_t4_ParamLimits

0xc5e0,	// (0x00032168) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x000352cb) popup_image_details_window_t_ParamLimits

0x8c40,	// (0x0002e7c8) cl_header_name_pane_ParamLimits

0x8c40,	// (0x0002e7c8) cl_header_name_pane

0x8fc4,	// (0x0002eb4c) cl_header_name_pane_t1_ParamLimits

0x8fc4,	// (0x0002eb4c) cl_header_name_pane_t1

0x8fe5,	// (0x0002eb6d) cl_header_name_pane_t2_ParamLimits

0x8fe5,	// (0x0002eb6d) cl_header_name_pane_t2

0x9027,	// (0x0002ebaf) cl_header_name_pane_t3_ParamLimits

0x9027,	// (0x0002ebaf) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x000356cc) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x000356cc) cl_header_name_pane_t

0x5118,	// (0x0002aca0) navi_pane_mv_g2_ParamLimits

0xd124,	// (0x00032cac) field_vitu2_entry_pane_g1_ParamLimits

0xd130,	// (0x00032cb8) field_vitu2_entry_pane_g2_ParamLimits

0xd13c,	// (0x00032cc4) field_vitu2_entry_pane_g3_ParamLimits

0xd13c,	// (0x00032cc4) field_vitu2_entry_pane_g3

0xf93a,	// (0x000354c2) field_vitu2_entry_pane_g_ParamLimits

0x1c8a,	// (0x00027812) cell_vitu2_itu_pane_g1_ParamLimits

0x1c9a,	// (0x00027822) cell_vitu2_itu_pane_g2_ParamLimits

0x1c9a,	// (0x00027822) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x000354ce) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x000354ce) cell_vitu2_itu_pane_g

0xd19e,	// (0x00032d26) bg_vkb2_func_pane_cp05_ParamLimits

0xd19e,	// (0x00032d26) bg_vkb2_func_pane_cp05

0xd19e,	// (0x00032d26) bg_vkb2_func_pane_cp03

0xd19e,	// (0x00032d26) bg_vkb2_func_pane_cp04

0xd19e,	// (0x00032d26) bg_vkb2_func_pane_cp10_ParamLimits

0xd19e,	// (0x00032d26) bg_vkb2_func_pane_cp10

0x8be6,	// (0x0002e76e) bg_vkb2_func_pane_cp08

0x8bcc,	// (0x0002e754) bg_vkb2_func_pane_cp06

0x8bda,	// (0x0002e762) bg_vkb2_func_pane_cp07

0xd8f2,	// (0x0003347a) bg_vkb2_func_pane_cp11_ParamLimits

0xd8f2,	// (0x0003347a) bg_vkb2_func_pane_cp11

0xd907,	// (0x0003348f) bg_vkb2_func_pane_cp12_ParamLimits

0xd907,	// (0x0003348f) bg_vkb2_func_pane_cp12

0x1f70,	// (0x00027af8) bg_vkb2_func_pane_cp09

0xd1b6,	// (0x00032d3e) bg_vkb2_func_pane_g1

0x3cc6,	// (0x0002984e) bg_vkb2_func_pane_g2

0xd1be,	// (0x00032d46) bg_vkb2_func_pane_g3

0xd1c6,	// (0x00032d4e) bg_vkb2_func_pane_g4

0xd463,	// (0x00032feb) bg_vkb2_func_pane_g5

0xd1de,	// (0x00032d66) bg_vkb2_func_pane_g6

0xd1e6,	// (0x00032d6e) bg_vkb2_func_pane_g7

0xd1d6,	// (0x00032d5e) bg_vkb2_func_pane_g8

0x3ca6,	// (0x0002982e) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x000356d3) bg_vkb2_func_pane_g

0x8ee8,	// (0x0002ea70) blid2_tripm_pane_g6_ParamLimits

0x8ee8,	// (0x0002ea70) blid2_tripm_pane_g6

0xcec3,	// (0x00032a4b) mp4_progress_pane_g1

0x8f61,	// (0x0002eae9) blid2_tripm_values_pane_ParamLimits

0x8f61,	// (0x0002eae9) blid2_tripm_values_pane

0x9058,	// (0x0002ebe0) blid2_tripm_values_pane_t1

0x9066,	// (0x0002ebee) blid2_tripm_values_pane_t2

0x9074,	// (0x0002ebfc) blid2_tripm_values_pane_t3

0x9082,	// (0x0002ec0a) blid2_tripm_values_pane_t4

0x9090,	// (0x0002ec18) blid2_tripm_values_pane_t5

0x909e,	// (0x0002ec26) blid2_tripm_values_pane_t6

0x90ac,	// (0x0002ec34) blid2_tripm_values_pane_t7

0x90ba,	// (0x0002ec42) blid2_tripm_values_pane_t8

0x90c8,	// (0x0002ec50) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x000356e6) blid2_tripm_values_pane_t

0x3766,	// (0x000292ee) call_video_pane_t1_ParamLimits

0x3784,	// (0x0002930c) call_video_pane_t2_ParamLimits

0xf292,	// (0x00034e1a) call_video_pane_t_ParamLimits

0x57d4,	// (0x0002b35c) msg_header_pane_g1_ParamLimits

0x57e2,	// (0x0002b36a) msg_header_pane_g2_ParamLimits

0x57e2,	// (0x0002b36a) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00035034) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00035034) msg_header_pane_g

0x2bda,	// (0x00028762) main_clock2_pane_ParamLimits

0x78e9,	// (0x0002d471) grid_clock2_toolbar_pane_ParamLimits

0x78e9,	// (0x0002d471) grid_clock2_toolbar_pane

0x78e9,	// (0x0002d471) listscroll_clock2_pane_ParamLimits

0x78e9,	// (0x0002d471) listscroll_clock2_pane

0x79c5,	// (0x0002d54d) main_clock2_pane_t3_ParamLimits

0x79c5,	// (0x0002d54d) main_clock2_pane_t3

0x79e0,	// (0x0002d568) main_clock2_pane_t4_ParamLimits

0x79e0,	// (0x0002d568) main_clock2_pane_t4

0xd9fb,	// (0x00033583) cell_clock2_toolbar_pane

0xda03,	// (0x0003358b) cell_clock2_toolbar_pane_cp01

0xda03,	// (0x0003358b) cell_clock2_toolbar_pane_cp02

0xda0b,	// (0x00033593) cell_clock2_toolbar_pane_cp03

0xda13,	// (0x0003359b) list_clock2_pane

0x4d8a,	// (0x0002a912) scroll_pane_cp10

0xda1b,	// (0x000335a3) list_single_clock2_pane_ParamLimits

0xda1b,	// (0x000335a3) list_single_clock2_pane

0x51b5,	// (0x0002ad3d) list_highlight_pane_cp08

0xda28,	// (0x000335b0) list_single_clock2_pane_t1

0xda36,	// (0x000335be) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x000356f9) list_single_clock2_pane_t

0x1f70,	// (0x00027af8) bg_button_pane_cp10

0xda44,	// (0x000335cc) cell_clock2_toolbar_pane_g1

0x0f43,	// (0x00026acb) aid_main_viewer_pane_g1_ParamLimits

0x0f43,	// (0x00026acb) aid_main_viewer_pane_g1

0x0f51,	// (0x00026ad9) aid_main_viewer_pane_g2_ParamLimits

0x0f51,	// (0x00026ad9) aid_main_viewer_pane_g2

0x5871,	// (0x0002b3f9) aid_main_viewer_pane_g3_ParamLimits

0x5871,	// (0x0002b3f9) aid_main_viewer_pane_g3

0x5880,	// (0x0002b408) aid_main_viewer_pane_g4_ParamLimits

0x5880,	// (0x0002b408) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00035045) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00035045) aid_main_viewer_pane_g

0x66a9,	// (0x0002c231) main_calc_pane_ParamLimits

0x66bd,	// (0x0002c245) main_dialer2_pane_ParamLimits

0x1f70,	// (0x00027af8) main_cam6_pane

0x1f70,	// (0x00027af8) main_vid6_pane

0x78f5,	// (0x0002d47d) listscroll_gen_pane_cp06_ParamLimits

0x78f5,	// (0x0002d47d) listscroll_gen_pane_cp06

0x79fb,	// (0x0002d583) main_clock2_pane_t5_ParamLimits

0x79fb,	// (0x0002d583) main_clock2_pane_t5

0x7a52,	// (0x0002d5da) aid_call2_pane_cp10_ParamLimits

0x7a64,	// (0x0002d5ec) aid_call_pane_cp10_ParamLimits

0x4f6f,	// (0x0002aaf7) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4f6f,	// (0x0002aaf7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7a76,	// (0x0002d5fe) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7a76,	// (0x0002d5fe) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4f6f,	// (0x0002aaf7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0003537b) popup_clock_analogue_window_cp10_g_ParamLimits

0x7a88,	// (0x0002d610) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7f0b,	// (0x0002da93) cell_dialer2_keypad_pane_g2_ParamLimits

0x7f0b,	// (0x0002da93) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x00035461) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x00035461) cell_dialer2_keypad_pane_g

0x7f27,	// (0x0002daaf) cell_dialer2_keypad_pane_t1

0x83c7,	// (0x0002df4f) main_cset_text2_pane_ParamLimits

0x83c7,	// (0x0002df4f) main_cset_text2_pane

0xd6cc,	// (0x00033254) area_vitu2_query_pane_g1_ParamLimits

0x8b6b,	// (0x0002e6f3) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x00035616) area_vitu2_query_pane_g_ParamLimits

0xd750,	// (0x000332d8) area_vitu2_query_pane_t7_ParamLimits

0xd750,	// (0x000332d8) area_vitu2_query_pane_t7

0x8bcc,	// (0x0002e754) bg_button_pane_cp018_ParamLimits

0x8bda,	// (0x0002e762) bg_button_pane_cp021_ParamLimits

0x8be6,	// (0x0002e76e) bg_button_pane_cp022_ParamLimits

0x8be6,	// (0x0002e76e) bg_vkb2_func_pane_cp08_ParamLimits

0x8bcc,	// (0x0002e754) bg_vkb2_func_pane_cp06_ParamLimits

0x8bda,	// (0x0002e762) bg_vkb2_func_pane_cp07_ParamLimits

0x8bf5,	// (0x0002e77d) input_focus_pane_cp09_ParamLimits

0xda4c,	// (0x000335d4) cam6_autofocus_pane_ParamLimits

0xda4c,	// (0x000335d4) cam6_autofocus_pane

0x1f09,	// (0x00027a91) cam6_image_uncrop_pane_ParamLimits

0x1f09,	// (0x00027a91) cam6_image_uncrop_pane

0x1f18,	// (0x00027aa0) cam6_indi_pane_ParamLimits

0x1f18,	// (0x00027aa0) cam6_indi_pane

0x1f2e,	// (0x00027ab6) cam6_mode_pane_ParamLimits

0x1f2e,	// (0x00027ab6) cam6_mode_pane

0x1f40,	// (0x00027ac8) cam6_timer_pane_ParamLimits

0x1f40,	// (0x00027ac8) cam6_timer_pane

0x1f4c,	// (0x00027ad4) cam6_zoom_pane_ParamLimits

0x1f4c,	// (0x00027ad4) cam6_zoom_pane

0x90d6,	// (0x0002ec5e) cam6_mode_pane_g1_ParamLimits

0x90d6,	// (0x0002ec5e) cam6_mode_pane_g1

0x90e6,	// (0x0002ec6e) cam6_mode_pane_g2_ParamLimits

0x90e6,	// (0x0002ec6e) cam6_mode_pane_g2

0x90f6,	// (0x0002ec7e) cam6_mode_pane_g3_ParamLimits

0x90f6,	// (0x0002ec7e) cam6_mode_pane_g3

0x9106,	// (0x0002ec8e) cam6_mode_pane_g4_ParamLimits

0x9106,	// (0x0002ec8e) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x000356fe) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x000356fe) cam6_mode_pane_g

0xda5a,	// (0x000335e2) bg_tb_trans_pane_cp08_ParamLimits

0xda5a,	// (0x000335e2) bg_tb_trans_pane_cp08

0xda68,	// (0x000335f0) cam6_battery_pane_ParamLimits

0xda68,	// (0x000335f0) cam6_battery_pane

0xda7e,	// (0x00033606) cam6_indi_pane_g1_ParamLimits

0xda7e,	// (0x00033606) cam6_indi_pane_g1

0xda90,	// (0x00033618) cam6_indi_pane_g2_ParamLimits

0xda90,	// (0x00033618) cam6_indi_pane_g2

0xdaa2,	// (0x0003362a) cam6_indi_pane_g3_ParamLimits

0xdaa2,	// (0x0003362a) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x00035707) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x00035707) cam6_indi_pane_g

0xdab4,	// (0x0003363c) cam6_indi_pane_t1_ParamLimits

0xdab4,	// (0x0003363c) cam6_indi_pane_t1

0x9116,	// (0x0002ec9e) cam6_autofocus_pane_g1

0x911e,	// (0x0002eca6) cam6_autofocus_pane_g2

0x9126,	// (0x0002ecae) cam6_autofocus_pane_g3

0x912e,	// (0x0002ecb6) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x0003570e) cam6_autofocus_pane_g

0xdada,	// (0x00033662) cam6_timer_pane_g1

0xdae2,	// (0x0003366a) cam6_timer_pane_t1

0xdaf0,	// (0x00033678) cam6_zoom_cont_pane

0xdaf8,	// (0x00033680) cam6_zoom_pane_g1

0xdb00,	// (0x00033688) cam6_zoom_pane_g2

0x9136,	// (0x0002ecbe) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x00035717) cam6_zoom_pane_g

0xc3be,	// (0x00031f46) cam6_battery_pane_g1

0xc3be,	// (0x00031f46) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00035288) cam6_battery_pane_g

0xdb08,	// (0x00033690) cam6_zoom_cont_pane_g1

0xdb11,	// (0x00033699) cam6_zoom_cont_pane_g2

0xdb1a,	// (0x000336a2) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x0003571e) cam6_zoom_cont_pane_g

0x9153,	// (0x0002ecdb) cam6_mode_pane_cp_ParamLimits

0x9153,	// (0x0002ecdb) cam6_mode_pane_cp

0x9165,	// (0x0002eced) cam6_zoom_pane_cp_ParamLimits

0x9165,	// (0x0002eced) cam6_zoom_pane_cp

0x9171,	// (0x0002ecf9) vid6_image_uncrop_cif_pane_ParamLimits

0x9171,	// (0x0002ecf9) vid6_image_uncrop_cif_pane

0x9181,	// (0x0002ed09) vid6_image_uncrop_nhd_pane_ParamLimits

0x9181,	// (0x0002ed09) vid6_image_uncrop_nhd_pane

0x9190,	// (0x0002ed18) vid6_image_uncrop_vga_pane_ParamLimits

0x9190,	// (0x0002ed18) vid6_image_uncrop_vga_pane

0x919f,	// (0x0002ed27) vid6_image_uncrop_wvga_pane_ParamLimits

0x919f,	// (0x0002ed27) vid6_image_uncrop_wvga_pane

0x91ae,	// (0x0002ed36) vid6_indi_pane_ParamLimits

0x91ae,	// (0x0002ed36) vid6_indi_pane

0xda5a,	// (0x000335e2) bg_tb_trans_pane_cp09_ParamLimits

0xda5a,	// (0x000335e2) bg_tb_trans_pane_cp09

0xdb32,	// (0x000336ba) cam6_battery_pane_cp_ParamLimits

0xdb32,	// (0x000336ba) cam6_battery_pane_cp

0xdb3e,	// (0x000336c6) vid6_indi_pane_g1_ParamLimits

0xdb3e,	// (0x000336c6) vid6_indi_pane_g1

0xdb50,	// (0x000336d8) vid6_indi_pane_g2_ParamLimits

0xdb50,	// (0x000336d8) vid6_indi_pane_g2

0xdb62,	// (0x000336ea) vid6_indi_pane_g3_ParamLimits

0xdb62,	// (0x000336ea) vid6_indi_pane_g3

0xdb77,	// (0x000336ff) vid6_indi_pane_g4_ParamLimits

0xdb77,	// (0x000336ff) vid6_indi_pane_g4

0xdb8c,	// (0x00033714) vid6_indi_pane_g5_ParamLimits

0xdb8c,	// (0x00033714) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x00035725) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x00035725) vid6_indi_pane_g

0xdba6,	// (0x0003372e) vid6_indi_pane_t1_ParamLimits

0xdba6,	// (0x0003372e) vid6_indi_pane_t1

0xdbbc,	// (0x00033744) vid6_indi_pane_t2_ParamLimits

0xdbbc,	// (0x00033744) vid6_indi_pane_t2

0xdbe4,	// (0x0003376c) vid6_indi_pane_t3_ParamLimits

0xdbe4,	// (0x0003376c) vid6_indi_pane_t3

0xdc0c,	// (0x00033794) vid6_indi_pane_t4_ParamLimits

0xdc0c,	// (0x00033794) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x00035730) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x00035730) vid6_indi_pane_t

0xdc30,	// (0x000337b8) wait_bar_pane_cp08

0x91c6,	// (0x0002ed4e) main_cset_text2_pane_t1_ParamLimits

0x91c6,	// (0x0002ed4e) main_cset_text2_pane_t1

0x913e,	// (0x0002ecc6) listscroll_gen_pane_cp06_t1_ParamLimits

0x913e,	// (0x0002ecc6) listscroll_gen_pane_cp06_t1

0x1f70,	// (0x00027af8) main_cam6_set_pane

0xd08c,	// (0x00032c14) bg_tb_trans_pane_cp06_ParamLimits

0xd0a2,	// (0x00032c2a) cam4_indicators_pane_g1_ParamLimits

0xd0b3,	// (0x00032c3b) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0003549e) cam4_indicators_pane_g_ParamLimits

0xd0d1,	// (0x00032c59) cam4_indicators_pane_t1_ParamLimits

0xd0f3,	// (0x00032c7b) bg_tb_trans_pane_cp07_ParamLimits

0x1a2e,	// (0x000275b6) vid4_indicators_pane_g1_ParamLimits

0x1a3b,	// (0x000275c3) vid4_indicators_pane_g2_ParamLimits

0x1a48,	// (0x000275d0) vid4_indicators_pane_g3_ParamLimits

0x1a55,	// (0x000275dd) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x000354b0) vid4_indicators_pane_g_ParamLimits

0x1a6d,	// (0x000275f5) vid4_indicators_pane_t1_ParamLimits

0xd7cd,	// (0x00033355) vid4_progress_pane_g1_ParamLimits

0xd7dd,	// (0x00033365) vid4_progress_pane_g2_ParamLimits

0x4880,	// (0x0002a408) vid4_progress_pane_g3_ParamLimits

0xd7ed,	// (0x00033375) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x00035661) vid4_progress_pane_g_ParamLimits

0xd80b,	// (0x00033393) vid4_progress_pane_t1_ParamLimits

0xd820,	// (0x000333a8) vid4_progress_pane_t2_ParamLimits

0xd836,	// (0x000333be) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0003566c) vid4_progress_pane_t_ParamLimits

0xd84b,	// (0x000333d3) wait_bar_pane_cp07_ParamLimits

0x91e3,	// (0x0002ed6b) main_cam6_set_pane_g2_ParamLimits

0x91e3,	// (0x0002ed6b) main_cam6_set_pane_g2

0x9207,	// (0x0002ed8f) main_cset6_listscroll_pane_ParamLimits

0x9207,	// (0x0002ed8f) main_cset6_listscroll_pane

0x9227,	// (0x0002edaf) main_cset6_slider_pane_ParamLimits

0x9227,	// (0x0002edaf) main_cset6_slider_pane

0x923d,	// (0x0002edc5) main_cset6_text2_pane_ParamLimits

0x923d,	// (0x0002edc5) main_cset6_text2_pane

0xdc3f,	// (0x000337c7) main_cset6_text_pane

0xdc47,	// (0x000337cf) main_cset_list_pane_copy1_ParamLimits

0xdc47,	// (0x000337cf) main_cset_list_pane_copy1

0xdc57,	// (0x000337df) scroll_pane_cp028_copy1

0x924b,	// (0x0002edd3) cset_list_set_pane_copy1

0x925c,	// (0x0002ede4) aid_position_infowindow_above_copy1

0x9264,	// (0x0002edec) aid_position_infowindow_below_copy1

0x926c,	// (0x0002edf4) cset_list_set_pane_g1_copy1

0x9274,	// (0x0002edfc) cset_list_set_pane_g3_copy1_ParamLimits

0x9274,	// (0x0002edfc) cset_list_set_pane_g3_copy1

0x9283,	// (0x0002ee0b) cset_list_set_pane_t1_copy1_ParamLimits

0x9283,	// (0x0002ee0b) cset_list_set_pane_t1_copy1

0x21e2,	// (0x00027d6a) list_highlight_pane_cp021_copy1_ParamLimits

0x21e2,	// (0x00027d6a) list_highlight_pane_cp021_copy1

0xdc60,	// (0x000337e8) cset6_slider_pane_ParamLimits

0xdc60,	// (0x000337e8) cset6_slider_pane

0xdc8c,	// (0x00033814) main_cset6_slider_pane_g1_ParamLimits

0xdc8c,	// (0x00033814) main_cset6_slider_pane_g1

0x9298,	// (0x0002ee20) main_cset6_slider_pane_g2_ParamLimits

0x9298,	// (0x0002ee20) main_cset6_slider_pane_g2

0xdcb4,	// (0x0003383c) main_cset6_slider_pane_g3_ParamLimits

0xdcb4,	// (0x0003383c) main_cset6_slider_pane_g3

0x92c0,	// (0x0002ee48) main_cset6_slider_pane_g4_ParamLimits

0x92c0,	// (0x0002ee48) main_cset6_slider_pane_g4

0x92cc,	// (0x0002ee54) main_cset6_slider_pane_g5_ParamLimits

0x92cc,	// (0x0002ee54) main_cset6_slider_pane_g5

0xd2e5,	// (0x00032e6d) main_cset6_slider_pane_g7_ParamLimits

0xd2e5,	// (0x00032e6d) main_cset6_slider_pane_g7

0xd2f1,	// (0x00032e79) main_cset6_slider_pane_g8_ParamLimits

0xd2f1,	// (0x00032e79) main_cset6_slider_pane_g8

0x8474,	// (0x0002dffc) main_cset6_slider_pane_g9_ParamLimits

0x8474,	// (0x0002dffc) main_cset6_slider_pane_g9

0x8480,	// (0x0002e008) main_cset6_slider_pane_g10_ParamLimits

0x8480,	// (0x0002e008) main_cset6_slider_pane_g10

0x848c,	// (0x0002e014) main_cset6_slider_pane_g11_ParamLimits

0x848c,	// (0x0002e014) main_cset6_slider_pane_g11

0x8498,	// (0x0002e020) main_cset6_slider_pane_g12_ParamLimits

0x8498,	// (0x0002e020) main_cset6_slider_pane_g12

0x84a4,	// (0x0002e02c) main_cset6_slider_pane_g13_ParamLimits

0x84a4,	// (0x0002e02c) main_cset6_slider_pane_g13

0x84b0,	// (0x0002e038) main_cset6_slider_pane_g14_ParamLimits

0x84b0,	// (0x0002e038) main_cset6_slider_pane_g14

0x92d8,	// (0x0002ee60) main_cset6_slider_pane_g15_ParamLimits

0x92d8,	// (0x0002ee60) main_cset6_slider_pane_g15

0x84d4,	// (0x0002e05c) main_cset6_slider_pane_g16_ParamLimits

0x84d4,	// (0x0002e05c) main_cset6_slider_pane_g16

0x84e0,	// (0x0002e068) main_cset6_slider_pane_g17_ParamLimits

0x84e0,	// (0x0002e068) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x00035739) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x00035739) main_cset6_slider_pane_g

0xdcc0,	// (0x00033848) main_cset6_slider_pane_t1_ParamLimits

0xdcc0,	// (0x00033848) main_cset6_slider_pane_t1

0x9308,	// (0x0002ee90) main_cset6_slider_pane_t2_ParamLimits

0x9308,	// (0x0002ee90) main_cset6_slider_pane_t2

0x9333,	// (0x0002eebb) main_cset6_slider_pane_t3_ParamLimits

0x9333,	// (0x0002eebb) main_cset6_slider_pane_t3

0x935e,	// (0x0002eee6) main_cset6_slider_pane_t4_ParamLimits

0x935e,	// (0x0002eee6) main_cset6_slider_pane_t4

0x9389,	// (0x0002ef11) main_cset6_slider_pane_t5_ParamLimits

0x9389,	// (0x0002ef11) main_cset6_slider_pane_t5

0xdd01,	// (0x00033889) main_cset6_slider_pane_t7_ParamLimits

0xdd01,	// (0x00033889) main_cset6_slider_pane_t7

0x93b4,	// (0x0002ef3c) main_cset6_slider_pane_t8_ParamLimits

0x93b4,	// (0x0002ef3c) main_cset6_slider_pane_t8

0x93d8,	// (0x0002ef60) main_cset6_slider_pane_t9_ParamLimits

0x93d8,	// (0x0002ef60) main_cset6_slider_pane_t9

0x93fc,	// (0x0002ef84) main_cset6_slider_pane_t10_ParamLimits

0x93fc,	// (0x0002ef84) main_cset6_slider_pane_t10

0x9420,	// (0x0002efa8) main_cset6_slider_pane_t11_ParamLimits

0x9420,	// (0x0002efa8) main_cset6_slider_pane_t11

0xdd37,	// (0x000338bf) main_cset6_slider_pane_t14_ParamLimits

0xdd37,	// (0x000338bf) main_cset6_slider_pane_t14

0xdd70,	// (0x000338f8) main_cset6_slider_pane_t15_ParamLimits

0xdd70,	// (0x000338f8) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0003575e) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0003575e) main_cset6_slider_pane_t

0xdda9,	// (0x00033931) cset_slider_pane_g1_copy1

0xddb2,	// (0x0003393a) cset_slider_pane_g2_copy1

0xddbb,	// (0x00033943) cset_slider_pane_g3_copy1

0x1f70,	// (0x00027af8) bg_popup_sub_pane_cp011_copy1

0xd4ec,	// (0x00033074) main_cset_text_pane_g1_copy1

0xd4f4,	// (0x0003307c) main_cset_text_pane_t1_copy1

0xd502,	// (0x0003308a) main_cset_text_pane_t2_copy1

0xd510,	// (0x00033098) main_cset_text_pane_t3_copy1

0xd51e,	// (0x000330a6) main_cset_text_pane_t4_copy1

0xd52c,	// (0x000330b4) main_cset_text_pane_t5_copy1

0xd53a,	// (0x000330c2) main_cset_text_pane_t6_copy1

0xd548,	// (0x000330d0) main_cset_text_pane_t7_copy1

0x9444,	// (0x0002efcc) main_cset_text2_pane_t1_copy1

0x1f70,	// (0x00027af8) main_ncimui_pane

0x68ff,	// (0x0002c487) popup_query_ncimui_window_ParamLimits

0x68ff,	// (0x0002c487) popup_query_ncimui_window

0xc68f,	// (0x00032217) field_cale_ev2_pane_g4_ParamLimits

0xc68f,	// (0x00032217) field_cale_ev2_pane_g4

0x7e95,	// (0x0002da1d) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7e95,	// (0x0002da1d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0003543c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0003543c) cell_video_dialer_keypad_pane_g

0x7ead,	// (0x0002da35) cell_video_dialer_keypad_pane_t1

0x1f70,	// (0x00027af8) bg_popup_window_pane_cp012

0x4be0,	// (0x0002a768) heading_pane_cp06

0xdeb3,	// (0x00033a3b) ncim_query_content_pane

0x1f70,	// (0x00027af8) bg_popup_heading_pane_cp01

0xdebb,	// (0x00033a43) ncim_heading_pane_t1

0xdec9,	// (0x00033a51) ncim_indicator_popup_pane

0xdedb,	// (0x00033a63) ncim_query_button_pane

0xdeef,	// (0x00033a77) ncim_query_content_pane_t1

0xdf01,	// (0x00033a89) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0003579d) ncim_query_content_pane_t

0xdf3b,	// (0x00033ac3) ncim_query_list_pane

0xdf4d,	// (0x00033ad5) ncim_query_popup_pane

0xdec9,	// (0x00033a51) ncim_indicator_popup_pane_ParamLimits

0x9559,	// (0x0002f0e1) ncim_query_content_pane_g1_ParamLimits

0x9559,	// (0x0002f0e1) ncim_query_content_pane_g1

0xdeef,	// (0x00033a77) ncim_query_content_pane_t1_ParamLimits

0xdf01,	// (0x00033a89) ncim_query_content_pane_t2_ParamLimits

0x9565,	// (0x0002f0ed) ncim_query_content_pane_t3_ParamLimits

0x9565,	// (0x0002f0ed) ncim_query_content_pane_t3

0x958d,	// (0x0002f115) ncim_query_content_pane_t4_ParamLimits

0x958d,	// (0x0002f115) ncim_query_content_pane_t4

0x95b5,	// (0x0002f13d) ncim_query_content_pane_t5_ParamLimits

0x95b5,	// (0x0002f13d) ncim_query_content_pane_t5

0xdf13,	// (0x00033a9b) ncim_query_content_pane_t6_ParamLimits

0xdf13,	// (0x00033a9b) ncim_query_content_pane_t6

0xfc15,	// (0x0003579d) ncim_query_content_pane_t_ParamLimits

0xdf3b,	// (0x00033ac3) ncim_query_list_pane_ParamLimits

0xdf4d,	// (0x00033ad5) ncim_query_popup_pane_ParamLimits

0xdf61,	// (0x00033ae9) wait_bar_pane_cp04

0x1f70,	// (0x00027af8) input_focus_pane_cp011

0xdf69,	// (0x00033af1) ncim_query_popup_pane_t1

0xdf77,	// (0x00033aff) ncim_list_query_list_pane_ParamLimits

0xdf77,	// (0x00033aff) ncim_list_query_list_pane

0x1f70,	// (0x00027af8) bg_button_pane_cp027

0xdf84,	// (0x00033b0c) ncim_query_button_pane_g1

0x1f70,	// (0x00027af8) list_highlight_pane_cp012

0xdf8e,	// (0x00033b16) ncim_list_query_list_pane_g1

0xdf96,	// (0x00033b1e) ncim_list_query_list_pane_t1

0xd0c2,	// (0x00032c4a) cam4_indicators_pane_g3_ParamLimits

0xd0c2,	// (0x00032c4a) cam4_indicators_pane_g3

0x1a61,	// (0x000275e9) vid4_indicators_pane_g5_ParamLimits

0x1a61,	// (0x000275e9) vid4_indicators_pane_g5

0xd7fc,	// (0x00033384) vid4_progress_pane_g5_ParamLimits

0xd7fc,	// (0x00033384) vid4_progress_pane_g5

0x9472,	// (0x0002effa) main_ncimui_pane_g1

0x94c8,	// (0x0002f050) ncimui_group_query_pane_ParamLimits

0x94c8,	// (0x0002f050) ncimui_group_query_pane

0x9504,	// (0x0002f08c) ncimui_list_pane_ParamLimits

0x9504,	// (0x0002f08c) ncimui_list_pane

0x9525,	// (0x0002f0ad) ncimui_text_pane_ParamLimits

0x9525,	// (0x0002f0ad) ncimui_text_pane

0x95dd,	// (0x0002f165) ncimui_text_pane_t1_ParamLimits

0x95dd,	// (0x0002f165) ncimui_text_pane_t1

0xdfa4,	// (0x00033b2c) ncimui_list_single_graphic_pane_ParamLimits

0xdfa4,	// (0x00033b2c) ncimui_list_single_graphic_pane

0x95fb,	// (0x0002f183) ncimui_query_pane_ParamLimits

0x95fb,	// (0x0002f183) ncimui_query_pane

0x1f70,	// (0x00027af8) list_highlight_pane_cp013

0xdfb4,	// (0x00033b3c) ncim_list_query_list_pane_t1_copy1

0xdf8e,	// (0x00033b16) ncim_list_single_graphic_pane_g1

0xdfc2,	// (0x00033b4a) ncim_query_button_pane_cp01

0xdfce,	// (0x00033b56) ncim_query_entry_pane_ParamLimits

0xdfce,	// (0x00033b56) ncim_query_entry_pane

0xdfe1,	// (0x00033b69) ncimui_query_pane_g1

0xdfed,	// (0x00033b75) ncimui_query_pane_t1_ParamLimits

0xdfed,	// (0x00033b75) ncimui_query_pane_t1

0x21e2,	// (0x00027d6a) input_focus_pane_cp012

0xe006,	// (0x00033b8e) ncim_query_entry_pane_t1

0x2bda,	// (0x00028762) main_im_pane_ParamLimits

0x21e2,	// (0x00027d6a) main_mobtv_pane_ParamLimits

0x21e2,	// (0x00027d6a) main_mobtv_pane

0x92f0,	// (0x0002ee78) main_cset6_slider_pane_g18_ParamLimits

0x92f0,	// (0x0002ee78) main_cset6_slider_pane_g18

0x92fc,	// (0x0002ee84) main_cset6_slider_pane_g19_ParamLimits

0x92fc,	// (0x0002ee84) main_cset6_slider_pane_g19

0xe018,	// (0x00033ba0) bg_main_mobtv_pane_ParamLimits

0xe018,	// (0x00033ba0) bg_main_mobtv_pane

0x960e,	// (0x0002f196) main_mobtv_info_pane

0x9617,	// (0x0002f19f) main_mobtv_loading_pane_ParamLimits

0x9617,	// (0x0002f19f) main_mobtv_loading_pane

0xe026,	// (0x00033bae) main_mobtv_pg_channel_list_pane

0xe030,	// (0x00033bb8) main_mobtv_pg_hdr_pane

0x9624,	// (0x0002f1ac) main_mobtv_programe_curr_pane_ParamLimits

0x9624,	// (0x0002f1ac) main_mobtv_programe_curr_pane

0x9631,	// (0x0002f1b9) main_mobtv_programe_next_pane_ParamLimits

0x9631,	// (0x0002f1b9) main_mobtv_programe_next_pane

0xe039,	// (0x00033bc1) popup_mobtv_noti_window

0xc3be,	// (0x00031f46) main_tv_pg_hdr_pane_g1

0xe041,	// (0x00033bc9) main_tv_pg_hdr_pane_g2

0xe049,	// (0x00033bd1) main_tv_pg_hdr_pane_g3

0xe051,	// (0x00033bd9) main_tv_pg_hdr_pane_g4

0xe059,	// (0x00033be1) main_tv_pg_hdr_pane_g5

0xe063,	// (0x00033beb) main_tv_pg_hdr_pane_g6

0xe06d,	// (0x00033bf5) main_tv_pg_hdr_pane_g7

0xe077,	// (0x00033bff) main_tv_pg_hdr_pane_g8

0xe081,	// (0x00033c09) main_tv_pg_hdr_pane_g9

0xe08b,	// (0x00033c13) main_tv_pg_hdr_pane_g10

0xe095,	// (0x00033c1d) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x000357aa) main_tv_pg_hdr_pane_g

0xe09f,	// (0x00033c27) main_tv_pg_hdr_pane_t1

0xe0ad,	// (0x00033c35) main_tv_pg_hdr_pane_t2

0xe0bb,	// (0x00033c43) main_tv_pg_hdr_pane_t3

0xe0cb,	// (0x00033c53) main_tv_pg_hdr_pane_t4

0xe0db,	// (0x00033c63) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x000357c1) main_tv_pg_hdr_pane_t

0xe0eb,	// (0x00033c73) single_mobtv_pg_channel_pane_ParamLimits

0xe0eb,	// (0x00033c73) single_mobtv_pg_channel_pane

0xe0fd,	// (0x00033c85) single_mobtv_pg_channel_table_pane

0xe106,	// (0x00033c8e) single_mobtv_pg_channel_thumb_pane

0xe10f,	// (0x00033c97) single_tv_pg_channel_pane_g1

0xe118,	// (0x00033ca0) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x000357cc) single_tv_pg_channel_pane_g

0xc62a,	// (0x000321b2) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc62a,	// (0x000321b2) bg_single_mobtv_pg_channel_thumb_pane

0xe121,	// (0x00033ca9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe121,	// (0x00033ca9) single_mobtv_pg_channel_thumb_pane_g1

0xe12f,	// (0x00033cb7) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe12f,	// (0x00033cb7) single_mobtv_pg_channel_thumb_pane_g2

0xe13b,	// (0x00033cc3) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe13b,	// (0x00033cc3) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x000357d1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x000357d1) single_mobtv_pg_channel_thumb_pane_g

0xe147,	// (0x00033ccf) single_mobtv_pg_channel_thumb_pane_t1

0xe155,	// (0x00033cdd) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x000357d8) single_mobtv_pg_channel_thumb_pane_t

0xc3be,	// (0x00031f46) bg_single_mobtv_pg_channel_table_pane_g1

0xc3be,	// (0x00031f46) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00035288) bg_single_mobtv_pg_channel_table_pane_g

0xe163,	// (0x00033ceb) single_mobtv_pg_channel_table_pane_t1

0xe171,	// (0x00033cf9) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x000357dd) single_mobtv_pg_channel_table_pane_t

0x9646,	// (0x0002f1ce) main_mobtv_info_pane_g1_ParamLimits

0x9646,	// (0x0002f1ce) main_mobtv_info_pane_g1

0x9664,	// (0x0002f1ec) main_mobtv_info_pane_t1_ParamLimits

0x9664,	// (0x0002f1ec) main_mobtv_info_pane_t1

0x96dc,	// (0x0002f264) main_mobtv_info_pane_t2_ParamLimits

0x96dc,	// (0x0002f264) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x000357e7) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x000357e7) main_mobtv_info_pane_t

0x976b,	// (0x0002f2f3) wait_bar_pane_cp05

0x977d,	// (0x0002f305) main_mobtv_loading_pane_g1_ParamLimits

0x977d,	// (0x0002f305) main_mobtv_loading_pane_g1

0x9790,	// (0x0002f318) main_mobtv_loading_pane_g2_ParamLimits

0x9790,	// (0x0002f318) main_mobtv_loading_pane_g2

0x979c,	// (0x0002f324) main_mobtv_loading_pane_g3_ParamLimits

0x979c,	// (0x0002f324) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x000357ee) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x000357ee) main_mobtv_loading_pane_g

0xe17f,	// (0x00033d07) main_mobtv_loading_pane_t1_ParamLimits

0xe17f,	// (0x00033d07) main_mobtv_loading_pane_t1

0xe197,	// (0x00033d1f) main_mobtv_loading_pane_t2_ParamLimits

0xe197,	// (0x00033d1f) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x000357f5) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x000357f5) main_mobtv_loading_pane_t

0x97af,	// (0x0002f337) wait_bar_pane_cp06_ParamLimits

0x97af,	// (0x0002f337) wait_bar_pane_cp06

0xe1bb,	// (0x00033d43) main_mobtv_programe_curr_pane_t1

0xe1c9,	// (0x00033d51) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x000357fa) main_mobtv_programe_curr_pane_t

0xe1d7,	// (0x00033d5f) main_mobtv_programe_next_pane_t1

0xe1e5,	// (0x00033d6d) main_mobtv_programe_next_pane_t2

0xe1f3,	// (0x00033d7b) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x000357ff) main_mobtv_programe_next_pane_t

0x1f70,	// (0x00027af8) bg_popup_mobtv_noti_window_pane

0xe201,	// (0x00033d89) popup_mobtv_noti_window_g1

0xe209,	// (0x00033d91) popup_mobtv_noti_window_t1

0xe217,	// (0x00033d9f) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x00035806) popup_mobtv_noti_window_t

0xc3be,	// (0x00031f46) bg_popup_mobtv_noti_window_pane_g1

0x1f70,	// (0x00027af8) sc_clock_pane

0x1f70,	// (0x00027af8) main_fs_bigclock_pane

0x8f4b,	// (0x0002ead3) blid2_tripm_pane_t4_ParamLimits

0x8f4b,	// (0x0002ead3) blid2_tripm_pane_t4

0x97be,	// (0x0002f346) sc_clock_pane_g1_ParamLimits

0x97be,	// (0x0002f346) sc_clock_pane_g1

0x97d0,	// (0x0002f358) sc_clock_pane_t1_ParamLimits

0x97d0,	// (0x0002f358) sc_clock_pane_t1

0x97f2,	// (0x0002f37a) sc_clock_pane_t2_ParamLimits

0x97f2,	// (0x0002f37a) sc_clock_pane_t2

0x980a,	// (0x0002f392) sc_clock_pane_t3_ParamLimits

0x980a,	// (0x0002f392) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x0003580b) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x0003580b) sc_clock_pane_t

0xa723,	// (0x000302ab) main_fs_bigclock_indicator_pane_ParamLimits

0xa723,	// (0x000302ab) main_fs_bigclock_indicator_pane

0xc5fa,	// (0x00032182) main_fs_bigclock_pane_g1_ParamLimits

0xc5fa,	// (0x00032182) main_fs_bigclock_pane_g1

0xa72f,	// (0x000302b7) main_fs_bigclock_pane_t1_ParamLimits

0xa72f,	// (0x000302b7) main_fs_bigclock_pane_t1

0xa741,	// (0x000302c9) main_fs_bigclock_pane_t2_ParamLimits

0xa741,	// (0x000302c9) main_fs_bigclock_pane_t2

0xa755,	// (0x000302dd) main_fs_bigclock_pane_t3_ParamLimits

0xa755,	// (0x000302dd) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x00035a05) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x00035a05) main_fs_bigclock_pane_t

0xecd0,	// (0x00034858) main_fs_bigclock_indicator_pane_g1

0xdee3,	// (0x00033a6b) ncim_query_content_pane_g2_ParamLimits

0xdee3,	// (0x00033a6b) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x00035798) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x00035798) ncim_query_content_pane_g

0x9823,	// (0x0002f3ab) sc_clock_pane_t4_ParamLimits

0x9823,	// (0x0002f3ab) sc_clock_pane_t4

0x21e2,	// (0x00027d6a) main_radioblah_pane

0xcfe8,	// (0x00032b70) cell_call4_button_pane_t1_copy1_ParamLimits

0xcfe8,	// (0x00032b70) cell_call4_button_pane_t1_copy1

0x947a,	// (0x0002f002) main_ncimui_pane_t1_ParamLimits

0x947a,	// (0x0002f002) main_ncimui_pane_t1

0x9494,	// (0x0002f01c) main_ncimui_pane_t2_ParamLimits

0x9494,	// (0x0002f01c) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x00035791) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x00035791) main_ncimui_pane_t

0xe225,	// (0x00033dad) main_radioblah_anim_pane_ParamLimits

0xe225,	// (0x00033dad) main_radioblah_anim_pane

0xe236,	// (0x00033dbe) main_radioblah_info_pane_ParamLimits

0xe236,	// (0x00033dbe) main_radioblah_info_pane

0xe24a,	// (0x00033dd2) main_radioblah_pane_t1_ParamLimits

0xe24a,	// (0x00033dd2) main_radioblah_pane_t1

0xe266,	// (0x00033dee) main_radioblah_pane_t2_ParamLimits

0xe266,	// (0x00033dee) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x0003582c) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x0003582c) main_radioblah_pane_t

0x99ef,	// (0x0002f577) main_radioblah_rocker_ctrl_pane_ParamLimits

0x99ef,	// (0x0002f577) main_radioblah_rocker_ctrl_pane

0xe2ae,	// (0x00033e36) main_radioblah_info_pane_t1_ParamLimits

0xe2ae,	// (0x00033e36) main_radioblah_info_pane_t1

0x9a47,	// (0x0002f5cf) main_radioblah_info_pane_t2_ParamLimits

0x9a47,	// (0x0002f5cf) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x00035835) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x00035835) main_radioblah_info_pane_t

0xc3be,	// (0x00031f46) main_radioblah_rocker_ctrl_pane_g1

0x9af7,	// (0x0002f67f) main_radioblah_rocker_ctrl_pane_g2

0x9aff,	// (0x0002f687) main_radioblah_rocker_ctrl_pane_g3

0x9b07,	// (0x0002f68f) main_radioblah_rocker_ctrl_pane_g4

0x9b0f,	// (0x0002f697) main_radioblah_rocker_ctrl_pane_g5

0x9b17,	// (0x0002f69f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0003583e) main_radioblah_rocker_ctrl_pane_g

0x9444,	// (0x0002efcc) main_cset_text2_pane_t1_copy1_ParamLimits

0xd072,	// (0x00032bfa) cam4_image_uncrop_qvga_pane

0xd0eb,	// (0x00032c73) vid4_image_uncrop_qcif_pane

0xda4c,	// (0x000335d4) cam6_image_uncrop_qvga_pane_ParamLimits

0xda4c,	// (0x000335d4) cam6_image_uncrop_qvga_pane

0xdb22,	// (0x000336aa) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb22,	// (0x000336aa) vid6_image_uncrop_qcif_pane

0x1f70,	// (0x00027af8) bg_popup_preview_window_pane_cp03

0xde95,	// (0x00033a1d) list_cset_text2_pane

0xde9d,	// (0x00033a25) main_cset6_text2_pane_g1

0xdea5,	// (0x00033a2d) main_cset6_text2_pane_t1

0x9b1f,	// (0x0002f6a7) list_cset_text2_pane_t1_ParamLimits

0x9b1f,	// (0x0002f6a7) list_cset_text2_pane_t1

0x21e2,	// (0x00027d6a) main_radioblah_pane_ParamLimits

0x9757,	// (0x0002f2df) main_mobtv_info_pane_t3_ParamLimits

0x9757,	// (0x0002f2df) main_mobtv_info_pane_t3

0x99dd,	// (0x0002f565) main_radioblah_pane_g1

0x9a17,	// (0x0002f59f) main_radioblah_info_pane_g1

0x9a9c,	// (0x0002f624) main_radioblah_info_pane_t3_ParamLimits

0x9a9c,	// (0x0002f624) main_radioblah_info_pane_t3

0x45d9,	// (0x0002a161) highlight_cell_cale_month_pane_ParamLimits

0x45d9,	// (0x0002a161) highlight_cell_cale_month_pane

0x1f70,	// (0x00027af8) main_phob_fisheye_pane

0xc718,	// (0x000322a0) scroll_pane_cp0031_ParamLimits

0xc718,	// (0x000322a0) scroll_pane_cp0031

0xdc30,	// (0x000337b8) wait_bar_pane_cp08_ParamLimits

0x924b,	// (0x0002edd3) cset_list_set_pane_copy1_ParamLimits

0xe2e8,	// (0x00033e70) highlight_cell_cale_month_pane_g1

0x9b38,	// (0x0002f6c0) highlight_cell_cale_month_pane_t1

0xd7bc,	// (0x00033344) list_gen_pane_cp01

0xd2d0,	// (0x00032e58) scroll_pane_01

0xe2f0,	// (0x00033e78) list_single_double_fisheye_pane

0x9b46,	// (0x0002f6ce) list_double_fisheye_pane_g1_ParamLimits

0x9b46,	// (0x0002f6ce) list_double_fisheye_pane_g1

0x9b52,	// (0x0002f6da) list_double_fisheye_pane_g2_ParamLimits

0x9b52,	// (0x0002f6da) list_double_fisheye_pane_g2

0x9b66,	// (0x0002f6ee) list_double_fisheye_pane_g3_ParamLimits

0x9b66,	// (0x0002f6ee) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0003584b) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0003584b) list_double_fisheye_pane_g

0x9b8f,	// (0x0002f717) list_double_fisheye_pane_t1_ParamLimits

0x9b8f,	// (0x0002f717) list_double_fisheye_pane_t1

0x9baa,	// (0x0002f732) list_double_fisheye_pane_t2_ParamLimits

0x9baa,	// (0x0002f732) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x00035856) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x00035856) list_double_fisheye_pane_t

0x1f70,	// (0x00027af8) main_call5_pane

0x984e,	// (0x0002f3d6) sc_swipe_pane_ParamLimits

0x984e,	// (0x0002f3d6) sc_swipe_pane

0x9bdf,	// (0x0002f767) call5_image_pane_ParamLimits

0x9bdf,	// (0x0002f767) call5_image_pane

0x9bfc,	// (0x0002f784) call5_swipe_1_pane_ParamLimits

0x9bfc,	// (0x0002f784) call5_swipe_1_pane

0x9c0f,	// (0x0002f797) call5_swipe_2_pane_ParamLimits

0x9c0f,	// (0x0002f797) call5_swipe_2_pane

0x9c3a,	// (0x0002f7c2) popup_call5_audio_first_window_ParamLimits

0x9c3a,	// (0x0002f7c2) popup_call5_audio_first_window

0xc62a,	// (0x000321b2) call5_swipe_1_pane_g1_ParamLimits

0xc62a,	// (0x000321b2) call5_swipe_1_pane_g1

0xe2f9,	// (0x00033e81) call5_swipe_1_pane_g2_ParamLimits

0xe2f9,	// (0x00033e81) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0003585b) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0003585b) call5_swipe_1_pane_g

0xe305,	// (0x00033e8d) call5_swipe_1_pane_t1_ParamLimits

0xe305,	// (0x00033e8d) call5_swipe_1_pane_t1

0xc62a,	// (0x000321b2) call5_swipe_2_pane_g1_ParamLimits

0xc62a,	// (0x000321b2) call5_swipe_2_pane_g1

0xe31a,	// (0x00033ea2) call5_swipe_2_pane_g2_ParamLimits

0xe31a,	// (0x00033ea2) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x00035860) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x00035860) call5_swipe_2_pane_g

0xe326,	// (0x00033eae) call5_swipe_2_pane_t1_ParamLimits

0xe326,	// (0x00033eae) call5_swipe_2_pane_t1

0xe33b,	// (0x00033ec3) sc_swipe_pane_g1_ParamLimits

0xe33b,	// (0x00033ec3) sc_swipe_pane_g1

0xe348,	// (0x00033ed0) sc_swipe_pane_g2_ParamLimits

0xe348,	// (0x00033ed0) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x00035865) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x00035865) sc_swipe_pane_g

0xe354,	// (0x00033edc) sc_swipe_pane_t1_ParamLimits

0xe354,	// (0x00033edc) sc_swipe_pane_t1

0x1f70,	// (0x00027af8) main_cmail_launcher_pane

0x9c4b,	// (0x0002f7d3) aid_size_cell_cmail_l_ParamLimits

0x9c4b,	// (0x0002f7d3) aid_size_cell_cmail_l

0x9c65,	// (0x0002f7ed) grid_cmail_l_pane_ParamLimits

0x9c65,	// (0x0002f7ed) grid_cmail_l_pane

0x9c80,	// (0x0002f808) cell_cmail_l_pane_ParamLimits

0x9c80,	// (0x0002f808) cell_cmail_l_pane

0x9ca6,	// (0x0002f82e) cell_cmail_l_pane_g1_ParamLimits

0x9ca6,	// (0x0002f82e) cell_cmail_l_pane_g1

0x9cb2,	// (0x0002f83a) cell_cmail_l_pane_t1_ParamLimits

0x9cb2,	// (0x0002f83a) cell_cmail_l_pane_t1

0xe369,	// (0x00033ef1) cell_cmail_l_pane_t2_ParamLimits

0xe369,	// (0x00033ef1) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x0003586a) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x0003586a) cell_cmail_l_pane_t

0x21e2,	// (0x00027d6a) grid_highlight_pane_cp018_ParamLimits

0x21e2,	// (0x00027d6a) grid_highlight_pane_cp018

0x209c,	// (0x00027c24) main2_pane_ParamLimits

0x209c,	// (0x00027c24) main2_pane

0x2d57,	// (0x000288df) popup_sp_fs_action_menu_bg_pane_g1

0x2d5f,	// (0x000288e7) popup_sp_fs_action_menu_bg_pane_g2

0x2d67,	// (0x000288ef) popup_sp_fs_action_menu_bg_pane_g3

0x2d6f,	// (0x000288f7) popup_sp_fs_action_menu_bg_pane_g4

0x2d77,	// (0x000288ff) popup_sp_fs_action_menu_bg_pane_g5

0x2d7f,	// (0x00028907) popup_sp_fs_action_menu_bg_pane_g6

0x2d87,	// (0x0002890f) popup_sp_fs_action_menu_bg_pane_g7

0x2d8f,	// (0x00028917) popup_sp_fs_action_menu_bg_pane_g8

0x2d97,	// (0x0002891f) popup_sp_fs_action_menu_bg_pane_g9

0x2d9f,	// (0x00028927) popup_sp_fs_action_menu_bg_pane_g10

0x2d9f,	// (0x00028927) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00034d34) popup_sp_fs_action_menu_bg_pane_g

0x3584,	// (0x0002910c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3584,	// (0x0002910c) list_medium_line_x2_t3_g3_g1

0x3590,	// (0x00029118) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3590,	// (0x00029118) list_medium_line_x2_t3_g3_g2

0x359c,	// (0x00029124) list_medium_line_x2_t3_g3_g3_ParamLimits

0x359c,	// (0x00029124) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00034de4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00034de4) list_medium_line_x2_t3_g3_g

0x35a8,	// (0x00029130) list_medium_line_x2_t3_g3_t1_ParamLimits

0x35a8,	// (0x00029130) list_medium_line_x2_t3_g3_t1

0x35bd,	// (0x00029145) list_medium_line_x2_t3_g3_t2_ParamLimits

0x35bd,	// (0x00029145) list_medium_line_x2_t3_g3_t2

0x35d1,	// (0x00029159) list_medium_line_x2_t3_g3_t3_ParamLimits

0x35d1,	// (0x00029159) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00034deb) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00034deb) list_medium_line_x2_t3_g3_t

0x3584,	// (0x0002910c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3584,	// (0x0002910c) list_medium_line_x2_t3_g2_g1

0x359c,	// (0x00029124) list_medium_line_x2_t3_g2_g2_ParamLimits

0x359c,	// (0x00029124) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00034df2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00034df2) list_medium_line_x2_t3_g2_g

0x35e6,	// (0x0002916e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x35e6,	// (0x0002916e) list_medium_line_x2_t3_g2_t1

0x35fc,	// (0x00029184) list_medium_line_x2_t3_g2_t2_ParamLimits

0x35fc,	// (0x00029184) list_medium_line_x2_t3_g2_t2

0x35d1,	// (0x00029159) list_medium_line_x2_t3_g2_t3_ParamLimits

0x35d1,	// (0x00029159) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00034df7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00034df7) list_medium_line_x2_t3_g2_t

0x3584,	// (0x0002910c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3584,	// (0x0002910c) list_medium_line_x2_t4_g4_g1

0x360e,	// (0x00029196) list_medium_line_x2_t4_g4_g2_ParamLimits

0x360e,	// (0x00029196) list_medium_line_x2_t4_g4_g2

0x3590,	// (0x00029118) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3590,	// (0x00029118) list_medium_line_x2_t4_g4_g3

0x361a,	// (0x000291a2) list_medium_line_x2_t4_g4_g4_ParamLimits

0x361a,	// (0x000291a2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00034dfe) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00034dfe) list_medium_line_x2_t4_g4_g

0x3626,	// (0x000291ae) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3626,	// (0x000291ae) list_medium_line_x2_t4_g4_t1

0x363d,	// (0x000291c5) list_medium_line_x2_t4_g4_t2_ParamLimits

0x363d,	// (0x000291c5) list_medium_line_x2_t4_g4_t2

0x3652,	// (0x000291da) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3652,	// (0x000291da) list_medium_line_x2_t4_g4_t3

0x3664,	// (0x000291ec) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3664,	// (0x000291ec) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00034e07) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00034e07) list_medium_line_x2_t4_g4_t

0x3584,	// (0x0002910c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3584,	// (0x0002910c) list_medium_line_x2_t2_g4_g1

0x360e,	// (0x00029196) list_medium_line_x2_t2_g4_g2_ParamLimits

0x360e,	// (0x00029196) list_medium_line_x2_t2_g4_g2

0x3590,	// (0x00029118) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3590,	// (0x00029118) list_medium_line_x2_t2_g4_g3

0x359c,	// (0x00029124) list_medium_line_x2_t2_g4_g4_ParamLimits

0x359c,	// (0x00029124) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00034e6e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00034e6e) list_medium_line_x2_t2_g4_g

0x45f7,	// (0x0002a17f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x45f7,	// (0x0002a17f) list_medium_line_x2_t2_g4_t1

0x35d1,	// (0x00029159) list_medium_line_x2_t2_g4_t2_ParamLimits

0x35d1,	// (0x00029159) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00034e77) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00034e77) list_medium_line_x2_t2_g4_t

0x3584,	// (0x0002910c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3584,	// (0x0002910c) list_medium_line_x2_t2_g3_g1

0x3590,	// (0x00029118) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3590,	// (0x00029118) list_medium_line_x2_t2_g3_g2

0x359c,	// (0x00029124) list_medium_line_x2_t2_g3_g3_ParamLimits

0x359c,	// (0x00029124) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00034de4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00034de4) list_medium_line_x2_t2_g3_g

0x460c,	// (0x0002a194) list_medium_line_x2_t2_g3_t1_ParamLimits

0x460c,	// (0x0002a194) list_medium_line_x2_t2_g3_t1

0x35d1,	// (0x00029159) list_medium_line_x2_t2_g3_t2_ParamLimits

0x35d1,	// (0x00029159) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00034e7c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00034e7c) list_medium_line_x2_t2_g3_t

0x493b,	// (0x0002a4c3) main_sp_fs_list_pane_ParamLimits

0x493b,	// (0x0002a4c3) main_sp_fs_list_pane

0x4947,	// (0x0002a4cf) sp_fs_scroll_pane_ParamLimits

0x4947,	// (0x0002a4cf) sp_fs_scroll_pane

0x4953,	// (0x0002a4db) list_medium_line_x2_t3_t1

0x4963,	// (0x0002a4eb) list_medium_line_x2_t3_t2

0x4971,	// (0x0002a4f9) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00034ec7) list_medium_line_x2_t3_t

0x497f,	// (0x0002a507) list_medium_line_x3_t4_t1

0x498f,	// (0x0002a517) list_medium_line_x3_t4_t2

0x499d,	// (0x0002a525) list_medium_line_x3_t4_t3

0x4971,	// (0x0002a4f9) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00034ece) list_medium_line_x3_t4_t

0x49ab,	// (0x0002a533) list_medium_line_x4_t5_t1

0x49bb,	// (0x0002a543) list_medium_line_x4_t5_t2

0x499d,	// (0x0002a525) list_medium_line_x4_t5_t3

0x49c9,	// (0x0002a551) list_medium_line_x4_t5_t4

0x4971,	// (0x0002a4f9) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00034ed7) list_medium_line_x4_t5_t

0x3584,	// (0x0002910c) list_medium_line_t4_g4_g1_ParamLimits

0x3584,	// (0x0002910c) list_medium_line_t4_g4_g1

0x361a,	// (0x000291a2) list_medium_line_t4_g4_g2_ParamLimits

0x361a,	// (0x000291a2) list_medium_line_t4_g4_g2

0x49d7,	// (0x0002a55f) list_medium_line_t4_g4_g3_ParamLimits

0x49d7,	// (0x0002a55f) list_medium_line_t4_g4_g3

0x359c,	// (0x00029124) list_medium_line_t4_g4_g4_ParamLimits

0x359c,	// (0x00029124) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00034ee2) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00034ee2) list_medium_line_t4_g4_g

0x49e3,	// (0x0002a56b) list_medium_line_t4_g4_t1_ParamLimits

0x49e3,	// (0x0002a56b) list_medium_line_t4_g4_t1

0x49f8,	// (0x0002a580) list_medium_line_t4_g4_t2_ParamLimits

0x49f8,	// (0x0002a580) list_medium_line_t4_g4_t2

0x4a0d,	// (0x0002a595) list_medium_line_t4_g4_t3_ParamLimits

0x4a0d,	// (0x0002a595) list_medium_line_t4_g4_t3

0x35d1,	// (0x00029159) list_medium_line_t4_g4_t4_ParamLimits

0x35d1,	// (0x00029159) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00034eeb) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00034eeb) list_medium_line_t4_g4_t

0x4d57,	// (0x0002a8df) chi_dic_find_pane_g1

0x66d1,	// (0x0002c259) main_tport_pane

0xd439,	// (0x00032fc1) list_medium_line_plain_t1

0xd48b,	// (0x00033013) list_medium_line_t2_g2_g1_ParamLimits

0xd48b,	// (0x00033013) list_medium_line_t2_g2_g1

0xd497,	// (0x0003301f) list_medium_line_t2_g2_g2_ParamLimits

0xd497,	// (0x0003301f) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x000355a7) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x000355a7) list_medium_line_t2_g2_g

0x8796,	// (0x0002e31e) list_medium_line_t2_g2_t1_ParamLimits

0x8796,	// (0x0002e31e) list_medium_line_t2_g2_t1

0x87b0,	// (0x0002e338) list_medium_line_t2_g2_t2_ParamLimits

0x87b0,	// (0x0002e338) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x000355ac) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x000355ac) list_medium_line_t2_g2_t

0xd85d,	// (0x000333e5) aid_sp_fs_list_icon_a_sm

0xd865,	// (0x000333ed) aid_sp_fs_list_icon_d

0xd86d,	// (0x000333f5) aid_sp_fs_text_primary

0xd876,	// (0x000333fe) aid_sp_fs_text_secondary

0xd87f,	// (0x00033407) list_medium_line

0xd87f,	// (0x00033407) list_medium_line_g2

0xd87f,	// (0x00033407) list_medium_line_g3

0xd87f,	// (0x00033407) list_medium_line_plain

0xd87f,	// (0x00033407) list_medium_line_plain_t2

0xd87f,	// (0x00033407) list_medium_line_plain_t3

0xd87f,	// (0x00033407) list_medium_line_right_icon

0xd87f,	// (0x00033407) list_medium_line_right_iconx2

0xd87f,	// (0x00033407) list_medium_line_t2

0xd87f,	// (0x00033407) list_medium_line_t2_g2

0xd87f,	// (0x00033407) list_medium_line_t2_g3

0xd87f,	// (0x00033407) list_medium_line_t2_right_icon

0xd87f,	// (0x00033407) list_medium_line_t2_right_iconx2

0xd87f,	// (0x00033407) list_medium_line_t3

0xd87f,	// (0x00033407) list_medium_line_t3_g2

0xd87f,	// (0x00033407) list_medium_line_t3_g3

0xd87f,	// (0x00033407) list_medium_line_t3_right_iconx2

0xd888,	// (0x00033410) list_medium_line_t4_g4

0xd891,	// (0x00033419) list_medium_line_x2

0xd891,	// (0x00033419) list_medium_line_x2_t2_g2

0xd891,	// (0x00033419) list_medium_line_x2_t2_g3

0xd891,	// (0x00033419) list_medium_line_x2_t2_g4

0xd891,	// (0x00033419) list_medium_line_x2_t3

0xd891,	// (0x00033419) list_medium_line_x2_t3_g2

0xd891,	// (0x00033419) list_medium_line_x2_t3_g3

0xd891,	// (0x00033419) list_medium_line_x2_t3_g4

0xd891,	// (0x00033419) list_medium_line_x2_t4_g2

0xd891,	// (0x00033419) list_medium_line_x2_t4_g4

0xd89a,	// (0x00033422) list_medium_line_x3

0xd89a,	// (0x00033422) list_medium_line_x3_t4

0xd89a,	// (0x00033422) list_medium_line_x3_t4_g4

0xd888,	// (0x00033410) list_medium_line_x4_t4

0xd888,	// (0x00033410) list_medium_line_x4_t4_g7

0xd888,	// (0x00033410) list_medium_line_x4_t5

0xd8a3,	// (0x0003342b) list_single_fs_dyc_pane_ParamLimits

0xd8a3,	// (0x0003342b) list_single_fs_dyc_pane

0x3584,	// (0x0002910c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3584,	// (0x0002910c) list_medium_line_x4_t4_g7_g1

0xddc4,	// (0x0003394c) list_medium_line_x4_t4_g7_g2_ParamLimits

0xddc4,	// (0x0003394c) list_medium_line_x4_t4_g7_g2

0xddd0,	// (0x00033958) list_medium_line_x4_t4_g7_g3_ParamLimits

0xddd0,	// (0x00033958) list_medium_line_x4_t4_g7_g3

0xdddf,	// (0x00033967) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdddf,	// (0x00033967) list_medium_line_x4_t4_g7_g4

0xddeb,	// (0x00033973) list_medium_line_x4_t4_g7_g5_ParamLimits

0xddeb,	// (0x00033973) list_medium_line_x4_t4_g7_g5

0xddfa,	// (0x00033982) list_medium_line_x4_t4_g7_g6_ParamLimits

0xddfa,	// (0x00033982) list_medium_line_x4_t4_g7_g6

0xde09,	// (0x00033991) list_medium_line_x4_t4_g7_g7_ParamLimits

0xde09,	// (0x00033991) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x00035777) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x00035777) list_medium_line_x4_t4_g7_g

0xde15,	// (0x0003399d) list_medium_line_x4_t4_g7_t1_ParamLimits

0xde15,	// (0x0003399d) list_medium_line_x4_t4_g7_t1

0xde2a,	// (0x000339b2) list_medium_line_x4_t4_g7_t2_ParamLimits

0xde2a,	// (0x000339b2) list_medium_line_x4_t4_g7_t2

0xde3f,	// (0x000339c7) list_medium_line_x4_t4_g7_t3_ParamLimits

0xde3f,	// (0x000339c7) list_medium_line_x4_t4_g7_t3

0xde54,	// (0x000339dc) list_medium_line_x4_t4_g7_t4_ParamLimits

0xde54,	// (0x000339dc) list_medium_line_x4_t4_g7_t4

0xde66,	// (0x000339ee) list_medium_line_x4_t4_g7_t5_ParamLimits

0xde66,	// (0x000339ee) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x00035786) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x00035786) list_medium_line_x4_t4_g7_t

0xde78,	// (0x00033a00) list_single_dyc_row_pane_ParamLimits

0xde78,	// (0x00033a00) list_single_dyc_row_pane

0x9bcc,	// (0x0002f754) call5_gesture_pane_ParamLimits

0x9bcc,	// (0x0002f754) call5_gesture_pane

0x9c22,	// (0x0002f7aa) call5_windows_pane_ParamLimits

0x9c22,	// (0x0002f7aa) call5_windows_pane

0x9cc8,	// (0x0002f850) call5_swipe_1_pane_cp_ParamLimits

0x9cc8,	// (0x0002f850) call5_swipe_1_pane_cp

0x9cd4,	// (0x0002f85c) call5_swipe_2_pane_cp_ParamLimits

0x9cd4,	// (0x0002f85c) call5_swipe_2_pane_cp

0x51b5,	// (0x0002ad3d) call5_image_pane_cp

0x9ce0,	// (0x0002f868) popup_call5_audio_first_window_cp_ParamLimits

0x9ce0,	// (0x0002f868) popup_call5_audio_first_window_cp

0xe33b,	// (0x00033ec3) call5_swipe_1_pane_g1_cp_ParamLimits

0xe33b,	// (0x00033ec3) call5_swipe_1_pane_g1_cp

0xe37b,	// (0x00033f03) call5_swipe_1_pane_g2_cp

0xe354,	// (0x00033edc) call5_swipe_1_pane_t1_cp_ParamLimits

0xe354,	// (0x00033edc) call5_swipe_1_pane_t1_cp

0xe33b,	// (0x00033ec3) call5_swipe_2_pane_g1_cp_ParamLimits

0xe33b,	// (0x00033ec3) call5_swipe_2_pane_g1_cp

0xe383,	// (0x00033f0b) call5_swipe_2_pane_g2_cp

0xe38b,	// (0x00033f13) call5_swipe_2_pane_t1_cp_ParamLimits

0xe38b,	// (0x00033f13) call5_swipe_2_pane_t1_cp

0x21e2,	// (0x00027d6a) main_sp_fs_email_pane

0xe3a0,	// (0x00033f28) main_sp_fs_listscroll_pane_te

0xe3a9,	// (0x00033f31) popup_sp_fs_action_menu_pane_ParamLimits

0xe3a9,	// (0x00033f31) popup_sp_fs_action_menu_pane

0xc3be,	// (0x00031f46) bg_sp_fs_ctrlbar_pane_g1

0xe3ed,	// (0x00033f75) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3f6,	// (0x00033f7e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3ff,	// (0x00033f87) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc3be,	// (0x00031f46) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0003586f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1a3,	// (0x00031d2b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1a3,	// (0x00031d2b) bg_sp_fs_ctrlbar_ddmenu_pane

0xe408,	// (0x00033f90) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe408,	// (0x00033f90) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe414,	// (0x00033f9c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe414,	// (0x00033f9c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x00035878) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x00035878) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe420,	// (0x00033fa8) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe420,	// (0x00033fa8) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe43a,	// (0x00033fc2) list_medium_line_t2_right_icon_g1

0x9cee,	// (0x0002f876) list_medium_line_t2_right_icon_t1

0x9cfe,	// (0x0002f886) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0003587d) list_medium_line_t2_right_icon_t

0xbeb8,	// (0x00031a40) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbeb8,	// (0x00031a40) bg_sp_fs_ctrlbar_pane

0x9d58,	// (0x0002f8e0) main_sp_fs_ctrlbar_button_pane_cp01

0x9d62,	// (0x0002f8ea) main_sp_fs_ctrlbar_ddmenu_pane

0xe47a,	// (0x00034002) main_sp_fs_ctrlbar_pane_g1

0xe486,	// (0x0003400e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x00035882) main_sp_fs_ctrlbar_pane_g

0xe492,	// (0x0003401a) main_sp_fs_ctrlbar_pane_t1

0x9d6c,	// (0x0002f8f4) main_sp_fs_ctrlbar_pane

0x9d90,	// (0x0002f918) main_sp_fs_listscroll_pane_te_cp01

0x9db0,	// (0x0002f938) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9db0,	// (0x0002f938) popup_sp_fs_action_menu_pane_cp01

0x21e2,	// (0x00027d6a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x21e2,	// (0x00027d6a) bg_sp_fs_highlight_list_pane_cp01

0xe4a7,	// (0x0003402f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe4a7,	// (0x0003402f) sp_fs_action_menu_list_gene_pane_g1

0xe4b6,	// (0x0003403e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4b6,	// (0x0003403e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00035887) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00035887) sp_fs_action_menu_list_gene_pane_g

0xe4c3,	// (0x0003404b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4c3,	// (0x0003404b) sp_fs_action_menu_list_gene_pane_t1

0xe4db,	// (0x00034063) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4db,	// (0x00034063) sp_fs_action_menu_list_gene_pane

0xe4fc,	// (0x00034084) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4fc,	// (0x00034084) popup_sp_fs_action_menu_bg_pane

0xe50a,	// (0x00034092) sp_fs_action_menu_list_pane_ParamLimits

0xe50a,	// (0x00034092) sp_fs_action_menu_list_pane

0xe52c,	// (0x000340b4) sp_fs_scroll_pane_cp01_ParamLimits

0xe52c,	// (0x000340b4) sp_fs_scroll_pane_cp01

0x9dca,	// (0x0002f952) list_medium_line_plain_t2_t1

0x9dda,	// (0x0002f962) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0003588c) list_medium_line_plain_t2_t

0x9dea,	// (0x0002f972) list_medium_line_plain_t3_t1

0x9dfa,	// (0x0002f982) list_medium_line_plain_t3_t2

0x9e08,	// (0x0002f990) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x00035891) list_medium_line_plain_t3_t

0x3584,	// (0x0002910c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3584,	// (0x0002910c) list_medium_line_x2_t2_g2_g1

0x359c,	// (0x00029124) list_medium_line_x2_t2_g2_g2_ParamLimits

0x359c,	// (0x00029124) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00034df2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00034df2) list_medium_line_x2_t2_g2_g

0x49e3,	// (0x0002a56b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x49e3,	// (0x0002a56b) list_medium_line_x2_t2_g2_t1

0x35d1,	// (0x00029159) list_medium_line_x2_t2_g2_t2_ParamLimits

0x35d1,	// (0x00029159) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00035898) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00035898) list_medium_line_x2_t2_g2_t

0x3584,	// (0x0002910c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3584,	// (0x0002910c) list_medium_line_x2_t4_g2_g1

0x359c,	// (0x00029124) list_medium_line_x2_t4_g2_g2_ParamLimits

0x359c,	// (0x00029124) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x00034df2) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x00034df2) list_medium_line_x2_t4_g2_g

0x9e16,	// (0x0002f99e) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9e16,	// (0x0002f99e) list_medium_line_x2_t4_g2_t1

0x9e30,	// (0x0002f9b8) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9e30,	// (0x0002f9b8) list_medium_line_x2_t4_g2_t2

0x9e45,	// (0x0002f9cd) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9e45,	// (0x0002f9cd) list_medium_line_x2_t4_g2_t3

0x35d1,	// (0x00029159) list_medium_line_x2_t4_g2_t4_ParamLimits

0x35d1,	// (0x00029159) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x0003589d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x0003589d) list_medium_line_x2_t4_g2_t

0xe552,	// (0x000340da) list_medium_line_t3_right_iconx2_g1

0xe43a,	// (0x00033fc2) list_medium_line_t3_right_iconx2_g2

0x9e5a,	// (0x0002f9e2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x000358a6) list_medium_line_t3_right_iconx2_g

0x9e64,	// (0x0002f9ec) list_medium_line_t3_right_iconx2_t1

0x9e74,	// (0x0002f9fc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x000358ad) list_medium_line_t3_right_iconx2_t

0x3584,	// (0x0002910c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3584,	// (0x0002910c) list_medium_line_x3_t4_g4_g1

0x3590,	// (0x00029118) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3590,	// (0x00029118) list_medium_line_x3_t4_g4_g2

0x361a,	// (0x000291a2) list_medium_line_x3_t4_g4_g3_ParamLimits

0x361a,	// (0x000291a2) list_medium_line_x3_t4_g4_g3

0xe55a,	// (0x000340e2) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe55a,	// (0x000340e2) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x000358b2) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x000358b2) list_medium_line_x3_t4_g4_g

0x9e82,	// (0x0002fa0a) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9e82,	// (0x0002fa0a) list_medium_line_x3_t4_g4_t1

0x9e99,	// (0x0002fa21) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9e99,	// (0x0002fa21) list_medium_line_x3_t4_g4_t2

0x49f8,	// (0x0002a580) list_medium_line_x3_t4_g4_t3_ParamLimits

0x49f8,	// (0x0002a580) list_medium_line_x3_t4_g4_t3

0xe566,	// (0x000340ee) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe566,	// (0x000340ee) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x000358bb) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x000358bb) list_medium_line_x3_t4_g4_t

0x9eb4,	// (0x0002fa3c) list_single_dyc_row_text_pane_t1_ParamLimits

0x9eb4,	// (0x0002fa3c) list_single_dyc_row_text_pane_t1

0x9efd,	// (0x0002fa85) list_single_dyc_row_text_pane_t2_ParamLimits

0x9efd,	// (0x0002fa85) list_single_dyc_row_text_pane_t2

0xe583,	// (0x0003410b) list_single_dyc_row_text_pane_t3_ParamLimits

0xe583,	// (0x0003410b) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x000358c4) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x000358c4) list_single_dyc_row_text_pane_t

0xe595,	// (0x0003411d) list_single_dyc_row_pane_g1_ParamLimits

0xe595,	// (0x0003411d) list_single_dyc_row_pane_g1

0xe5a1,	// (0x00034129) list_single_dyc_row_pane_g2_ParamLimits

0xe5a1,	// (0x00034129) list_single_dyc_row_pane_g2

0xe5ad,	// (0x00034135) list_single_dyc_row_pane_g3_ParamLimits

0xe5ad,	// (0x00034135) list_single_dyc_row_pane_g3

0xe5b9,	// (0x00034141) list_single_dyc_row_pane_g4_ParamLimits

0xe5b9,	// (0x00034141) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x000358cb) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x000358cb) list_single_dyc_row_pane_g

0xe5c5,	// (0x0003414d) list_single_dyc_row_text_pane_ParamLimits

0xe5c5,	// (0x0003414d) list_single_dyc_row_text_pane

0x1f70,	// (0x00027af8) bg_sp_fs_scroll_pane

0xe5e4,	// (0x0003416c) thumb_sp_fs_scroll_pane

0xd48b,	// (0x00033013) list_medium_line_g1_ParamLimits

0xd48b,	// (0x00033013) list_medium_line_g1

0xe5ed,	// (0x00034175) list_medium_line_t1_ParamLimits

0xe5ed,	// (0x00034175) list_medium_line_t1

0x3584,	// (0x0002910c) list_medium_line_x2_g1_ParamLimits

0x3584,	// (0x0002910c) list_medium_line_x2_g1

0x3590,	// (0x00029118) list_medium_line_x2_g2_ParamLimits

0x3590,	// (0x00029118) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x000358d4) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x000358d4) list_medium_line_x2_g

0xe602,	// (0x0003418a) list_medium_line_x2_t1_ParamLimits

0xe602,	// (0x0003418a) list_medium_line_x2_t1

0x3584,	// (0x0002910c) list_medium_line_x3_g1_ParamLimits

0x3584,	// (0x0002910c) list_medium_line_x3_g1

0x3590,	// (0x00029118) list_medium_line_x3_g2_ParamLimits

0x3590,	// (0x00029118) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x000358d4) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x000358d4) list_medium_line_x3_g

0xe602,	// (0x0003418a) list_medium_line_x3_t1_ParamLimits

0xe602,	// (0x0003418a) list_medium_line_x3_t1

0xe618,	// (0x000341a0) thumb_sp_fs_scroll_pane_g1

0xe621,	// (0x000341a9) thumb_sp_fs_scroll_pane_g2

0xe62a,	// (0x000341b2) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x000358d9) thumb_sp_fs_scroll_pane_g

0xe618,	// (0x000341a0) bg_sp_fs_scroll_pane_g1

0xe621,	// (0x000341a9) bg_sp_fs_scroll_pane_g2

0xe62a,	// (0x000341b2) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x000358d9) bg_sp_fs_scroll_pane_g

0x3584,	// (0x0002910c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3584,	// (0x0002910c) list_medium_line_x2_t3_g4_g1

0x360e,	// (0x00029196) list_medium_line_x2_t3_g4_g2_ParamLimits

0x360e,	// (0x00029196) list_medium_line_x2_t3_g4_g2

0x3590,	// (0x00029118) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3590,	// (0x00029118) list_medium_line_x2_t3_g4_g3

0x359c,	// (0x00029124) list_medium_line_x2_t3_g4_g4_ParamLimits

0x359c,	// (0x00029124) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00034e6e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00034e6e) list_medium_line_x2_t3_g4_g

0x9f57,	// (0x0002fadf) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9f57,	// (0x0002fadf) list_medium_line_x2_t3_g4_t1

0x9f71,	// (0x0002faf9) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9f71,	// (0x0002faf9) list_medium_line_x2_t3_g4_t2

0x35d1,	// (0x00029159) list_medium_line_x2_t3_g4_t3_ParamLimits

0x35d1,	// (0x00029159) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x000358e0) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x000358e0) list_medium_line_x2_t3_g4_t

0xd48b,	// (0x00033013) list_medium_line_g2_g1_ParamLimits

0xd48b,	// (0x00033013) list_medium_line_g2_g1

0xd497,	// (0x0003301f) list_medium_line_g2_g2_ParamLimits

0xd497,	// (0x0003301f) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x000355a7) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x000355a7) list_medium_line_g2_g

0xe633,	// (0x000341bb) list_medium_line_g2_t1_ParamLimits

0xe633,	// (0x000341bb) list_medium_line_g2_t1

0xd48b,	// (0x00033013) list_medium_line_t3_g2_g1_ParamLimits

0xd48b,	// (0x00033013) list_medium_line_t3_g2_g1

0xd497,	// (0x0003301f) list_medium_line_t3_g2_g2_ParamLimits

0xd497,	// (0x0003301f) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x000355a7) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x000355a7) list_medium_line_t3_g2_g

0x9f8b,	// (0x0002fb13) list_medium_line_t3_g2_t1_ParamLimits

0x9f8b,	// (0x0002fb13) list_medium_line_t3_g2_t1

0x9fa5,	// (0x0002fb2d) list_medium_line_t3_g2_t2_ParamLimits

0x9fa5,	// (0x0002fb2d) list_medium_line_t3_g2_t2

0x9fba,	// (0x0002fb42) list_medium_line_t3_g2_t3_ParamLimits

0x9fba,	// (0x0002fb42) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x000358e7) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x000358e7) list_medium_line_t3_g2_t

0xe43a,	// (0x00033fc2) list_medium_line_right_icon_g1

0xe648,	// (0x000341d0) list_medium_line_right_icon_t1

0xd48b,	// (0x00033013) list_medium_line_t2_g1_ParamLimits

0xd48b,	// (0x00033013) list_medium_line_t2_g1

0x9fd4,	// (0x0002fb5c) list_medium_line_t2_t1_ParamLimits

0x9fd4,	// (0x0002fb5c) list_medium_line_t2_t1

0x9fee,	// (0x0002fb76) list_medium_line_t2_t2_ParamLimits

0x9fee,	// (0x0002fb76) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x000358ee) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x000358ee) list_medium_line_t2_t

0xd48b,	// (0x00033013) list_medium_line_t3_g1_ParamLimits

0xd48b,	// (0x00033013) list_medium_line_t3_g1

0xa007,	// (0x0002fb8f) list_medium_line_t3_t1_ParamLimits

0xa007,	// (0x0002fb8f) list_medium_line_t3_t1

0xa01e,	// (0x0002fba6) list_medium_line_t3_t2_ParamLimits

0xa01e,	// (0x0002fba6) list_medium_line_t3_t2

0xa033,	// (0x0002fbbb) list_medium_line_t3_t3_ParamLimits

0xa033,	// (0x0002fbbb) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x000358f3) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x000358f3) list_medium_line_t3_t

0xd48b,	// (0x00033013) list_medium_line_g3_g1_ParamLimits

0xd48b,	// (0x00033013) list_medium_line_g3_g1

0xe656,	// (0x000341de) list_medium_line_g3_g2_ParamLimits

0xe656,	// (0x000341de) list_medium_line_g3_g2

0xd497,	// (0x0003301f) list_medium_line_g3_g3_ParamLimits

0xd497,	// (0x0003301f) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x000358fa) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x000358fa) list_medium_line_g3_g

0xe662,	// (0x000341ea) list_medium_line_g3_t1_ParamLimits

0xe662,	// (0x000341ea) list_medium_line_g3_t1

0xd48b,	// (0x00033013) list_medium_line_t2_g3_g1_ParamLimits

0xd48b,	// (0x00033013) list_medium_line_t2_g3_g1

0xe656,	// (0x000341de) list_medium_line_t2_g3_g2_ParamLimits

0xe656,	// (0x000341de) list_medium_line_t2_g3_g2

0xd497,	// (0x0003301f) list_medium_line_t2_g3_g3_ParamLimits

0xd497,	// (0x0003301f) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x000358fa) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x000358fa) list_medium_line_t2_g3_g

0xa045,	// (0x0002fbcd) list_medium_line_t2_g3_t1_ParamLimits

0xa045,	// (0x0002fbcd) list_medium_line_t2_g3_t1

0xa05f,	// (0x0002fbe7) list_medium_line_t2_g3_t2_ParamLimits

0xa05f,	// (0x0002fbe7) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x00035901) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x00035901) list_medium_line_t2_g3_t

0xd48b,	// (0x00033013) list_medium_line_t3_g3_g1_ParamLimits

0xd48b,	// (0x00033013) list_medium_line_t3_g3_g1

0xe656,	// (0x000341de) list_medium_line_t3_g3_g2_ParamLimits

0xe656,	// (0x000341de) list_medium_line_t3_g3_g2

0xd497,	// (0x0003301f) list_medium_line_t3_g3_g3_ParamLimits

0xd497,	// (0x0003301f) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x000358fa) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x000358fa) list_medium_line_t3_g3_g

0xa07a,	// (0x0002fc02) list_medium_line_t3_g3_t1_ParamLimits

0xa07a,	// (0x0002fc02) list_medium_line_t3_g3_t1

0xa093,	// (0x0002fc1b) list_medium_line_t3_g3_t2_ParamLimits

0xa093,	// (0x0002fc1b) list_medium_line_t3_g3_t2

0xa0a9,	// (0x0002fc31) list_medium_line_t3_g3_t3_ParamLimits

0xa0a9,	// (0x0002fc31) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x00035906) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x00035906) list_medium_line_t3_g3_t

0xe552,	// (0x000340da) list_medium_line_right_iconx2_g1

0xe43a,	// (0x00033fc2) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x0003590d) list_medium_line_right_iconx2_g

0xe677,	// (0x000341ff) list_medium_line_right_iconx2_t1

0xe552,	// (0x000340da) list_medium_line_t2_right_iconx2_g1

0xe43a,	// (0x00033fc2) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x0003590d) list_medium_line_t2_right_iconx2_g

0xa0c3,	// (0x0002fc4b) list_medium_line_t2_right_iconx2_t1

0xa0d3,	// (0x0002fc5b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x00035912) list_medium_line_t2_right_iconx2_t

0xe685,	// (0x0003420d) list_medium_line_x4_t4_t1

0xa0e5,	// (0x0002fc6d) list_medium_line_x4_t4_t2

0xa0f5,	// (0x0002fc7d) list_medium_line_x4_t4_t3

0xa105,	// (0x0002fc8d) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x00035917) list_medium_line_x4_t4_t

0xa158,	// (0x0002fce0) tport_appsw_pane_ParamLimits

0xa158,	// (0x0002fce0) tport_appsw_pane

0xa169,	// (0x0002fcf1) tport_contact_pane_ParamLimits

0xa169,	// (0x0002fcf1) tport_contact_pane

0xa182,	// (0x0002fd0a) tport_listscroll_pane_ParamLimits

0xa182,	// (0x0002fd0a) tport_listscroll_pane

0xa19d,	// (0x0002fd25) cell_tport_appsw_pane_ParamLimits

0xa19d,	// (0x0002fd25) cell_tport_appsw_pane

0xd13c,	// (0x00032cc4) tport_appsw_pane_g1_ParamLimits

0xd13c,	// (0x00032cc4) tport_appsw_pane_g1

0xe693,	// (0x0003421b) tport_contact_pane_g1

0xdf69,	// (0x00033af1) tport_contact_pane_t1

0xe69c,	// (0x00034224) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x00035920) tport_contact_pane_t

0xe6aa,	// (0x00034232) list_tport_pane

0xe6b3,	// (0x0003423b) scroll_pane_cp_030

0xe6c4,	// (0x0003424c) cell_tport_appsw_pane_g1

0xe6d4,	// (0x0003425c) cell_tport_appsw_pane_t1

0x1f70,	// (0x00027af8) grid_highlight_pane_cp019

0xa1dd,	// (0x0002fd65) list_tport_double_graphic_pane_ParamLimits

0xa1dd,	// (0x0002fd65) list_tport_double_graphic_pane

0x21e2,	// (0x00027d6a) list_highlight_pane_cp023_ParamLimits

0x21e2,	// (0x00027d6a) list_highlight_pane_cp023

0xa1ea,	// (0x0002fd72) list_tport_double_graphic_pane_g1_ParamLimits

0xa1ea,	// (0x0002fd72) list_tport_double_graphic_pane_g1

0xa1f7,	// (0x0002fd7f) list_tport_double_graphic_pane_t1_ParamLimits

0xa1f7,	// (0x0002fd7f) list_tport_double_graphic_pane_t1

0xa20c,	// (0x0002fd94) list_tport_double_graphic_pane_t2_ParamLimits

0xa20c,	// (0x0002fd94) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x0003592c) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x0003592c) list_tport_double_graphic_pane_t

0x1f70,	// (0x00027af8) main_cale_note_pane

0x1c62,	// (0x000277ea) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1c62,	// (0x000277ea) cell_vitu2_function_top_wide_pane_cp01

0x976b,	// (0x0002f2f3) wait_bar_pane_cp05_ParamLimits

0x1f70,	// (0x00027af8) listscroll_cmail_pane

0xe6ea,	// (0x00034272) list_cmail_pane

0xd408,	// (0x00032f90) list_cmail_body_pane

0xa228,	// (0x0002fdb0) list_single_cmail_header_caption_pane

0xa23e,	// (0x0002fdc6) list_single_cmail_header_detail_pane_ParamLimits

0xa23e,	// (0x0002fdc6) list_single_cmail_header_detail_pane

0xa267,	// (0x0002fdef) list_single_cmail_header_caption_pane_t1

0xa277,	// (0x0002fdff) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa277,	// (0x0002fdff) list_single_cmail_header_detail_pane_g1

0xe70b,	// (0x00034293) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe70b,	// (0x00034293) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x00035931) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x00035931) list_single_cmail_header_detail_pane_g

0xe724,	// (0x000342ac) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe724,	// (0x000342ac) list_single_cmail_header_detail_pane_t1

0xe75a,	// (0x000342e2) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe75a,	// (0x000342e2) list_single_cmail_header_editor_pane_bg

0xe118,	// (0x00033ca0) list_cmail_body_pane_g1

0xe76c,	// (0x000342f4) list_cmail_body_pane_t1

0xd1b6,	// (0x00032d3e) list_single_cmail_header_editor_pane_bg_g1

0x3cc6,	// (0x0002984e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1c6,	// (0x00032d4e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1be,	// (0x00032d46) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd463,	// (0x00032feb) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1e6,	// (0x00032d6e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1d6,	// (0x00032d5e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1de,	// (0x00032d66) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3ca6,	// (0x0002982e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa2b5,	// (0x0002fe3d) calenote_gesture_pane_ParamLimits

0xa2b5,	// (0x0002fe3d) calenote_gesture_pane

0xa2d5,	// (0x0002fe5d) calenote_window_pane_ParamLimits

0xa2d5,	// (0x0002fe5d) calenote_window_pane

0xe77a,	// (0x00034302) popup_note_window_cp01

0xa2f1,	// (0x0002fe79) calenote_swipe_1_pane_ParamLimits

0xa2f1,	// (0x0002fe79) calenote_swipe_1_pane

0x9cd4,	// (0x0002f85c) calenote_swipe_2_pane_ParamLimits

0x9cd4,	// (0x0002f85c) calenote_swipe_2_pane

0xe33b,	// (0x00033ec3) calenote_swipe_1_pane_g1_ParamLimits

0xe33b,	// (0x00033ec3) calenote_swipe_1_pane_g1

0xe348,	// (0x00033ed0) calenote_swipe_1_pane_g2_ParamLimits

0xe348,	// (0x00033ed0) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x00035865) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x00035865) calenote_swipe_1_pane_g

0xe78c,	// (0x00034314) calenote_swipe_1_pane_t1_ParamLimits

0xe78c,	// (0x00034314) calenote_swipe_1_pane_t1

0xe33b,	// (0x00033ec3) calenote_swipe_2_pane_g1_ParamLimits

0xe33b,	// (0x00033ec3) calenote_swipe_2_pane_g1

0xe7ab,	// (0x00034333) calenote_swipe_2_pane_g2_ParamLimits

0xe7ab,	// (0x00034333) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x0003593d) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x0003593d) calenote_swipe_2_pane_g

0xe7b7,	// (0x0003433f) calenote_swipe_2_pane_t1_ParamLimits

0xe7b7,	// (0x0003433f) calenote_swipe_2_pane_t1

0x1f70,	// (0x00027af8) main_mup_navstr_pane

0x75b9,	// (0x0002d141) main_mup3_pane_t7_ParamLimits

0x75b9,	// (0x0002d141) main_mup3_pane_t7

0xcd1f,	// (0x000328a7) main_mp4_pane_g6_ParamLimits

0xcd1f,	// (0x000328a7) main_mp4_pane_g6

0xcf51,	// (0x00032ad9) main_image3_pane_t4_ParamLimits

0xcf51,	// (0x00032ad9) main_image3_pane_t4

0xa306,	// (0x0002fe8e) popup_navstr_preview_pane_ParamLimits

0xa306,	// (0x0002fe8e) popup_navstr_preview_pane

0xa31a,	// (0x0002fea2) scroll_navstr_pane_ParamLimits

0xa31a,	// (0x0002fea2) scroll_navstr_pane

0x1f70,	// (0x00027af8) bg_popup_preview_window_pane_cp04

0xe7de,	// (0x00034366) popup_navstr_preview_pane_t1

0xa32e,	// (0x0002feb6) scroll_navstr_pane_g1_ParamLimits

0xa32e,	// (0x0002feb6) scroll_navstr_pane_g1

0xa342,	// (0x0002feca) scroll_navstr_pane_t1_ParamLimits

0xa342,	// (0x0002feca) scroll_navstr_pane_t1

0xe783,	// (0x0003430b) bg_button_pane_cp014

0xe783,	// (0x0003430b) bg_button_pane_cp030

0x9b72,	// (0x0002f6fa) list_double_fisheye_pane_g4_ParamLimits

0x9b72,	// (0x0002f6fa) list_double_fisheye_pane_g4

0x9b7e,	// (0x0002f706) list_double_fisheye_pane_g5_ParamLimits

0x9b7e,	// (0x0002f706) list_double_fisheye_pane_g5

0xe6f2,	// (0x0003427a) sp_fs_scroll_pane_cp03

0xe47a,	// (0x00034002) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe486,	// (0x0003400e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x00035882) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe492,	// (0x0003401a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa21e,	// (0x0002fda6) sp_fs_scroll_pane_cp02

0x2e02,	// (0x0002898a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2e02,	// (0x0002898a) popup_sp_fs_calendar_preview_list_single_pane

0x1f70,	// (0x00027af8) main_cam6_pano_pane

0x21e2,	// (0x00027d6a) main_mup3_pane_ParamLimits

0x1f70,	// (0x00027af8) main_phacti_pane

0x963e,	// (0x0002f1c6) bg_button_pane_cp11

0x9658,	// (0x0002f1e0) main_mobtv_info_pane_g2_ParamLimits

0x9658,	// (0x0002f1e0) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x000357e2) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x000357e2) main_mobtv_info_pane_g

0x9835,	// (0x0002f3bd) sc_clock_pane_t5_ParamLimits

0x9835,	// (0x0002f3bd) sc_clock_pane_t5

0x99dd,	// (0x0002f565) main_radioblah_pane_g1_ParamLimits

0xe27e,	// (0x00033e06) main_radioblah_pane_t3_ParamLimits

0xe27e,	// (0x00033e06) main_radioblah_pane_t3

0xe296,	// (0x00033e1e) main_radioblah_pane_t4_ParamLimits

0xe296,	// (0x00033e1e) main_radioblah_pane_t4

0x9a05,	// (0x0002f58d) main_radioblah_text_pane_ParamLimits

0x9a05,	// (0x0002f58d) main_radioblah_text_pane

0x9a17,	// (0x0002f59f) main_radioblah_info_pane_g1_ParamLimits

0x9ab0,	// (0x0002f638) main_radioblah_info_pane_t4_ParamLimits

0x9ab0,	// (0x0002f638) main_radioblah_info_pane_t4

0x21e2,	// (0x00027d6a) main_sp_fs_calendar_pane

0xa359,	// (0x0002fee1) main_phacti_pane_g1

0xa361,	// (0x0002fee9) phacti_note_pane_ParamLimits

0xa361,	// (0x0002fee9) phacti_note_pane

0xe7f5,	// (0x0003437d) phacti_term_pane_ParamLimits

0xe7f5,	// (0x0003437d) phacti_term_pane

0xe80a,	// (0x00034392) phacti_note_pane_t1_ParamLimits

0xe80a,	// (0x00034392) phacti_note_pane_t1

0xe821,	// (0x000343a9) phacti_term_pane_g1

0xe829,	// (0x000343b1) phacti_term_pane_t1_ParamLimits

0xe829,	// (0x000343b1) phacti_term_pane_t1

0xe853,	// (0x000343db) popup_sp_fs_calendar_preview_list_single_pane_g1

0x357c,	// (0x00029104) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x00035947) popup_sp_fs_calendar_preview_list_single_pane_g

0xe85b,	// (0x000343e3) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe85b,	// (0x000343e3) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe870,	// (0x000343f8) aid_popup_sp_fs_bg_corner_pane

0xc3be,	// (0x00031f46) popup_sp_fs_calendar_preview_bg_pane_g1

0x1f70,	// (0x00027af8) popup_sp_fs_calendar_preview_bg_pane

0xe878,	// (0x00034400) popup_sp_fs_calendar_preview_list_pane

0x21e2,	// (0x00027d6a) bg_main_sp_fs_cale_pane_ParamLimits

0x21e2,	// (0x00027d6a) bg_main_sp_fs_cale_pane

0xe889,	// (0x00034411) listscroll_cale_mrui_pane_ParamLimits

0xe889,	// (0x00034411) listscroll_cale_mrui_pane

0xe89d,	// (0x00034425) listscroll_sp_fs_schedule_track_pane

0xe8a6,	// (0x0003442e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe8a6,	// (0x0003442e) main_sp_fs_ctrlbar_pane_cp01

0xe8b7,	// (0x0003443f) main_sp_fs_ribbon_pane

0xe8bf,	// (0x00034447) popup_sp_fs_cale_preview_window

0xa3b8,	// (0x0002ff40) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa3b8,	// (0x0002ff40) list_single_sp_fs_schedule_track_pane

0x21e2,	// (0x00027d6a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x21e2,	// (0x00027d6a) bg_sp_fs_highlight_list_pane_cp03

0xa3ca,	// (0x0002ff52) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa3ca,	// (0x0002ff52) list_single_sp_fs_schedule_track_pane_g1

0xa3d6,	// (0x0002ff5e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa3d6,	// (0x0002ff5e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x0003594c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x0003594c) list_single_sp_fs_schedule_track_pane_g

0xa3e2,	// (0x0002ff6a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa3e2,	// (0x0002ff6a) list_single_sp_fs_schedule_track_pane_t1

0xa3fc,	// (0x0002ff84) sp_fs_schedule_track_pane_ParamLimits

0xa3fc,	// (0x0002ff84) sp_fs_schedule_track_pane

0xe8d1,	// (0x00034459) sp_fs_schedule_track_pane_g1

0xe8d9,	// (0x00034461) sp_fs_schedule_track_pane_g2

0xe8e1,	// (0x00034469) sp_fs_schedule_track_pane_g3

0xe8e9,	// (0x00034471) sp_fs_schedule_track_pane_g4

0xe8f1,	// (0x00034479) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x00035951) sp_fs_schedule_track_pane_g

0xd1b6,	// (0x00032d3e) bg_sp_fs_schedule_viewer_highlight_g1

0x3cc6,	// (0x0002984e) bg_sp_fs_schedule_viewer_highlight_g2

0xd1be,	// (0x00032d46) bg_sp_fs_schedule_viewer_highlight_g3

0xd1c6,	// (0x00032d4e) bg_sp_fs_schedule_viewer_highlight_g4

0xd463,	// (0x00032feb) bg_sp_fs_schedule_viewer_highlight_g5

0xd1d6,	// (0x00032d5e) bg_sp_fs_schedule_viewer_highlight_g6

0xd1de,	// (0x00032d66) bg_sp_fs_schedule_viewer_highlight_g7

0xd1e6,	// (0x00032d6e) bg_sp_fs_schedule_viewer_highlight_g8

0x3ca6,	// (0x0002982e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x0003595c) bg_sp_fs_schedule_viewer_highlight_g

0x1f70,	// (0x00027af8) bg_main_sp_fs_ribbon_pane

0xa40d,	// (0x0002ff95) main_sp_fs_ribbon_pane_g1

0xe8f9,	// (0x00034481) main_sp_fs_ribbon_pane_t1

0xa416,	// (0x0002ff9e) main_sp_fs_ribbon_pane_t2

0xe908,	// (0x00034490) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x0003596f) main_sp_fs_ribbon_pane_t

0xe917,	// (0x0003449f) main_sp_fs_ribbon_scheduler_pane

0xe91f,	// (0x000344a7) bg_main_sp_fs_ribbon_pane_g1

0xe928,	// (0x000344b0) bg_main_sp_fs_ribbon_pane_g2

0xe931,	// (0x000344b9) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x00035976) bg_main_sp_fs_ribbon_pane_g

0xe939,	// (0x000344c1) main_sp_fs_ribbon_scheduler_pane_g1

0xe942,	// (0x000344ca) main_sp_fs_ribbon_scheduler_pane_g2

0xe94b,	// (0x000344d3) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x0003597d) main_sp_fs_ribbon_scheduler_pane_g

0xe954,	// (0x000344dc) list_cale_mrui_pane

0xa425,	// (0x0002ffad) sp_fs_scroll_pane_cp07_ParamLimits

0xa425,	// (0x0002ffad) sp_fs_scroll_pane_cp07

0xa439,	// (0x0002ffc1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa439,	// (0x0002ffc1) bg_sp_fs_schedule_viewer_highlight

0xe95d,	// (0x000344e5) list_single_sp_fs_schedule_track_pane_cp01

0xe965,	// (0x000344ed) list_sp_fs_schedule_track_pane

0xe96d,	// (0x000344f5) sp_fs_scroll_pane_cp06_ParamLimits

0xe96d,	// (0x000344f5) sp_fs_scroll_pane_cp06

0xc3be,	// (0x00031f46) bgmain_sp_fs_calendar_pane_g1

0xa449,	// (0x0002ffd1) list_single_cale_mrui_pane_ParamLimits

0xa449,	// (0x0002ffd1) list_single_cale_mrui_pane

0xe97f,	// (0x00034507) list_single_cale_mrui_row_pane_ParamLimits

0xe97f,	// (0x00034507) list_single_cale_mrui_row_pane

0xe98c,	// (0x00034514) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe98c,	// (0x00034514) list_single_cale_mrui_row_pane_g1

0xe9c4,	// (0x0003454c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe9c4,	// (0x0003454c) list_single_cale_mrui_row_pane_t1

0xa469,	// (0x0002fff1) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa469,	// (0x0002fff1) list_single_cale_mrui_row_pane_t2

0xe9d6,	// (0x0003455e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe9d6,	// (0x0003455e) list_single_cale_mrui_row_pane_t3

0xea05,	// (0x0003458d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xea05,	// (0x0003458d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x00035989) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x00035989) list_single_cale_mrui_row_pane_t

0xa4d1,	// (0x00030059) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa4d1,	// (0x00030059) list_single_cmail_header_editor_pane_bg_cp01

0xa4f7,	// (0x0003007f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa4f7,	// (0x0003007f) list_single_cmail_header_editor_pane_bg_cp02

0xa517,	// (0x0003009f) main_radioblah_text_pane_t1_ParamLimits

0xa517,	// (0x0003009f) main_radioblah_text_pane_t1

0xea34,	// (0x000345bc) cam6_indi_pane_cp01

0xea3c,	// (0x000345c4) cam6_mode_pane_cp01

0xea44,	// (0x000345cc) cam6_pano_pane

0xea4d,	// (0x000345d5) cam6_zoom_pane_cp01

0xea55,	// (0x000345dd) cam6_pano_image_pane

0xea60,	// (0x000345e8) cam6_pano_pane_g1

0xe118,	// (0x00033ca0) cam6_pano_pane_g2

0xea69,	// (0x000345f1) cam6_pano_pane_g3

0xea72,	// (0x000345fa) cam6_pano_pane_g4

0xc966,	// (0x000324ee) cam6_pano_pane_g5

0xea7b,	// (0x00034603) cam6_pano_pane_g6

0xea85,	// (0x0003460d) cam6_pano_pane_g7

0xea8d,	// (0x00034615) cam6_pano_pane_g8

0xea96,	// (0x0003461e) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x00035992) cam6_pano_pane_g

0x1f70,	// (0x00027af8) main_browser_tag_pane

0xe7d6,	// (0x0003435e) grid_navstr_albumart_pane

0xeaa1,	// (0x00034629) cell_navstr_albumart_pane_ParamLimits

0xeaa1,	// (0x00034629) cell_navstr_albumart_pane

0xeac4,	// (0x0003464c) cell_navstr_albumart_pane_g1

0xbcd5,	// (0x0003185d) cell_navstr_albumart_pane_g2

0xbce5,	// (0x0003186d) cell_navstr_albumart_pane_g3

0xbcdd,	// (0x00031865) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x000359a5) cell_navstr_albumart_pane_g

0xa531,	// (0x000300b9) bt_list_pane_ParamLimits

0xa531,	// (0x000300b9) bt_list_pane

0xa545,	// (0x000300cd) bt_list_pane_t1

0xa554,	// (0x000300dc) bt_list_pane_t2

0x0001,

0xfe26,	// (0x000359ae) bt_list_pane_t

0x1f70,	// (0x00027af8) main_cale_prevew_pane

0xa563,	// (0x000300eb) popup_cale_preview_window_ParamLimits

0xa563,	// (0x000300eb) popup_cale_preview_window

0x21e2,	// (0x00027d6a) bg_popup_preview_window_pane_cp05_ParamLimits

0x21e2,	// (0x00027d6a) bg_popup_preview_window_pane_cp05

0xeacc,	// (0x00034654) list_cale_preview_pane_ParamLimits

0xeacc,	// (0x00034654) list_cale_preview_pane

0xa57e,	// (0x00030106) list_double_cale_preview_pane_ParamLimits

0xa57e,	// (0x00030106) list_double_cale_preview_pane

0xa590,	// (0x00030118) list_single_cale_preview_pane_ParamLimits

0xa590,	// (0x00030118) list_single_cale_preview_pane

0xa5a6,	// (0x0003012e) list_single_cale_preview_pane_g1

0xa5ae,	// (0x00030136) list_single_cale_preview_pane_t1_ParamLimits

0xa5ae,	// (0x00030136) list_single_cale_preview_pane_t1

0xa5c3,	// (0x0003014b) list_double_cale_preview_pane_g1

0xa5cb,	// (0x00030153) list_double_cale_preview_pane_t1_ParamLimits

0xa5cb,	// (0x00030153) list_double_cale_preview_pane_t1

0xa5e0,	// (0x00030168) list_double_cale_preview_pane_t2_ParamLimits

0xa5e0,	// (0x00030168) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x000359b3) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x000359b3) list_double_cale_preview_pane_t

0x1f70,	// (0x00027af8) main_ezdial_pane

0x21e2,	// (0x00027d6a) main_sp_fs_email_pane_ParamLimits

0x9d10,	// (0x0002f898) cmail_ddmenu_btn01_pane_ParamLimits

0x9d10,	// (0x0002f898) cmail_ddmenu_btn01_pane

0x9d23,	// (0x0002f8ab) cmail_ddmenu_btn02_pane_ParamLimits

0x9d23,	// (0x0002f8ab) cmail_ddmenu_btn02_pane

0x9d46,	// (0x0002f8ce) cmail_ddmenu_btn03_pane_ParamLimits

0x9d46,	// (0x0002f8ce) cmail_ddmenu_btn03_pane

0x9d6c,	// (0x0002f8f4) main_sp_fs_ctrlbar_pane_ParamLimits

0x9d90,	// (0x0002f918) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd408,	// (0x00032f90) list_cmail_body_pane_ParamLimits

0xe702,	// (0x0003428a) bg_button_pane_cp12

0xe717,	// (0x0003429f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe717,	// (0x0003429f) list_single_cmail_header_detail_pane_g3

0xa28f,	// (0x0002fe17) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa28f,	// (0x0002fe17) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x00035938) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x00035938) list_single_cmail_header_detail_pane_t

0xe83e,	// (0x000343c6) phacti_term_pane_t2_ParamLimits

0xe83e,	// (0x000343c6) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x00035942) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x00035942) phacti_term_pane_t

0xead8,	// (0x00034660) aid_size_list_single_double

0xa5f8,	// (0x00030180) popup_ezdial_listscroll_window

0xa614,	// (0x0003019c) popup_number_entry_window_cp01

0x51b5,	// (0x0002ad3d) bg_popup_call_pane_cp09

0xeae4,	// (0x0003466c) ezdial_list_pane

0xeaec,	// (0x00034674) scroll_pane_cp23

0xbeb8,	// (0x00031a40) bg_button_pane_cp028_ParamLimits

0xbeb8,	// (0x00031a40) bg_button_pane_cp028

0xa622,	// (0x000301aa) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa622,	// (0x000301aa) cmail_ddmenu_btn01_pane_g1

0xa62e,	// (0x000301b6) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa62e,	// (0x000301b6) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x000359b8) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x000359b8) cmail_ddmenu_btn01_pane_g

0xeaf4,	// (0x0003467c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaf4,	// (0x0003467c) cmail_ddmenu_btn01_pane_t1

0xbeb8,	// (0x00031a40) bg_button_pane_cp029_ParamLimits

0xbeb8,	// (0x00031a40) bg_button_pane_cp029

0xa63a,	// (0x000301c2) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa63a,	// (0x000301c2) cmail_ddmenu_btn02_pane_g1

0xa652,	// (0x000301da) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa652,	// (0x000301da) cmail_ddmenu_btn02_pane_t1

0x21e2,	// (0x00027d6a) bg_button_pane_cp031_ParamLimits

0x21e2,	// (0x00027d6a) bg_button_pane_cp031

0xa63a,	// (0x000301c2) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa63a,	// (0x000301c2) cmail_ddmenu_btn03_pane_g1

0xa652,	// (0x000301da) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa652,	// (0x000301da) cmail_ddmenu_btn03_pane_t1

0x7f27,	// (0x0002daaf) cell_dialer2_keypad_pane_t1_ParamLimits

0x7f41,	// (0x0002dac9) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7f41,	// (0x0002dac9) cell_dialer2_keypad_pane_t1_copy1

0x94c0,	// (0x0002f048) ncimui_group_button_pane

0x21e2,	// (0x00027d6a) main_sp_fs_calendar_pane_ParamLimits

0xa228,	// (0x0002fdb0) list_single_cmail_header_caption_pane_ParamLimits

0xe880,	// (0x00034408) aid_recal_txt_sm_pane

0x1f70,	// (0x00027af8) mian_recal_day_pane

0xe8bf,	// (0x00034447) popup_sp_fs_cale_preview_window_ParamLimits

0x1f70,	// (0x00027af8) list_recal_day_pane

0xeb2b,	// (0x000346b3) list_single_recal_day_pane_ParamLimits

0xeb2b,	// (0x000346b3) list_single_recal_day_pane

0xeb3d,	// (0x000346c5) list_single_recal_day_pane_g1_ParamLimits

0xeb3d,	// (0x000346c5) list_single_recal_day_pane_g1

0xeb49,	// (0x000346d1) list_single_recal_day_pane_g2_ParamLimits

0xeb49,	// (0x000346d1) list_single_recal_day_pane_g2

0xeb58,	// (0x000346e0) list_single_recal_day_pane_g3_ParamLimits

0xeb58,	// (0x000346e0) list_single_recal_day_pane_g3

0xa676,	// (0x000301fe) list_single_recal_day_pane_g4_ParamLimits

0xa676,	// (0x000301fe) list_single_recal_day_pane_g4

0xeb64,	// (0x000346ec) list_single_recal_day_pane_g5_ParamLimits

0xeb64,	// (0x000346ec) list_single_recal_day_pane_g5

0xeb73,	// (0x000346fb) list_single_recal_day_pane_g6_ParamLimits

0xeb73,	// (0x000346fb) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x000359c7) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x000359c7) list_single_recal_day_pane_g

0xeb7f,	// (0x00034707) list_single_recal_day_pane_t1

0xeb8d,	// (0x00034715) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x000359d4) list_single_recal_day_pane_t

0xa689,	// (0x00030211) ncimui_query_button_pane_ParamLimits

0xa689,	// (0x00030211) ncimui_query_button_pane

0xa699,	// (0x00030221) ncimui_query_button_pane_t1_ParamLimits

0xa699,	// (0x00030221) ncimui_query_button_pane_t1

0xeb9b,	// (0x00034723) ncimui_query_button_pane_t2_ParamLimits

0xeb9b,	// (0x00034723) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x000359d9) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x000359d9) ncimui_query_button_pane_t

0xa6ac,	// (0x00030234) query_button_pane_ParamLimits

0xa6ac,	// (0x00030234) query_button_pane

0x1f70,	// (0x00027af8) bg_button_pane_cp0028

0xebae,	// (0x00034736) query_button_pane_t1

0x66d1,	// (0x0002c259) main_tport_pane_ParamLimits

0xa115,	// (0x0002fc9d) bg_popup_window_pane_cp01_ParamLimits

0xa115,	// (0x0002fc9d) bg_popup_window_pane_cp01

0xa12f,	// (0x0002fcb7) heading_pane_cp08_ParamLimits

0xa12f,	// (0x0002fcb7) heading_pane_cp08

0xa143,	// (0x0002fccb) heading_pane_cp07_ParamLimits

0xa143,	// (0x0002fccb) heading_pane_cp07

0xe6c4,	// (0x0003424c) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x00035925) cell_tport_appsw_pane_g

0x5746,	// (0x0002b2ce) input_candi_list_open_g1

0x4775,	// (0x0002a2fd) list_cale_time_pane_g6_ParamLimits

0x4775,	// (0x0002a2fd) list_cale_time_pane_g6

0x6fc7,	// (0x0002cb4f) aid_size_touch_calib_1_ParamLimits

0x6fc7,	// (0x0002cb4f) aid_size_touch_calib_1

0x6fd3,	// (0x0002cb5b) aid_size_touch_calib_2_ParamLimits

0x6fd3,	// (0x0002cb5b) aid_size_touch_calib_2

0x6fe9,	// (0x0002cb71) aid_size_touch_calib_3_ParamLimits

0x6fe9,	// (0x0002cb71) aid_size_touch_calib_3

0x7007,	// (0x0002cb8f) aid_size_touch_calib_4_ParamLimits

0x7007,	// (0x0002cb8f) aid_size_touch_calib_4

0x701d,	// (0x0002cba5) main_touch_calib_button_group_pane_ParamLimits

0x701d,	// (0x0002cba5) main_touch_calib_button_group_pane

0x7035,	// (0x0002cbbd) main_touch_calib_pane_g1_ParamLimits

0x7041,	// (0x0002cbc9) main_touch_calib_pane_g2_ParamLimits

0x704d,	// (0x0002cbd5) main_touch_calib_pane_g3_ParamLimits

0x7059,	// (0x0002cbe1) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x000352fd) main_touch_calib_pane_g_ParamLimits

0x7065,	// (0x0002cbed) main_touch_calib_pane_t1_ParamLimits

0x707f,	// (0x0002cc07) main_touch_calib_pane_t2_ParamLimits

0x7099,	// (0x0002cc21) main_touch_calib_pane_t3_ParamLimits

0x70ad,	// (0x0002cc35) main_touch_calib_pane_t4_ParamLimits

0x70c1,	// (0x0002cc49) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00035306) main_touch_calib_pane_t_ParamLimits

0xc73c,	// (0x000322c4) list_single_fp_cale_pane_g3_ParamLimits

0xc73c,	// (0x000322c4) list_single_fp_cale_pane_g3

0xd19e,	// (0x00032d26) bg_button_pane_cp012_ParamLimits

0xd19e,	// (0x00032d26) bg_vkb2_func_pane_cp03_ParamLimits

0x1e60,	// (0x000279e8) cell_vitu2_function_top_pane_g1_ParamLimits

0xd19e,	// (0x00032d26) bg_vkb2_func_pane_cp04_ParamLimits

0x9460,	// (0x0002efe8) main_ncimui_button_group_pane_ParamLimits

0x9460,	// (0x0002efe8) main_ncimui_button_group_pane

0x94ae,	// (0x0002f036) main_ncimui_pane_t3_ParamLimits

0x94ae,	// (0x0002f036) main_ncimui_pane_t3

0xe7ec,	// (0x00034374) phacti_button_group_pane

0xead8,	// (0x00034660) aid_size_list_single_double_ParamLimits

0xa5f8,	// (0x00030180) popup_ezdial_listscroll_window_ParamLimits

0xa614,	// (0x0003019c) popup_number_entry_window_cp01_ParamLimits

0xa6bf,	// (0x00030247) phacti_button_pane_ParamLimits

0xa6bf,	// (0x00030247) phacti_button_pane

0x1f70,	// (0x00027af8) bg_button_pane_cp14

0xebbc,	// (0x00034744) phacti_button_pane_t1

0xa6d0,	// (0x00030258) main_touch_calib_button_pane_ParamLimits

0xa6d0,	// (0x00030258) main_touch_calib_button_pane

0x2bda,	// (0x00028762) bg_button_pane_cp18_ParamLimits

0x2bda,	// (0x00028762) bg_button_pane_cp18

0xebca,	// (0x00034752) main_touch_calib_button_pane_t1_ParamLimits

0xebca,	// (0x00034752) main_touch_calib_button_pane_t1

0xebe0,	// (0x00034768) main_touch_calib_button_pane_t2_ParamLimits

0xebe0,	// (0x00034768) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x000359de) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x000359de) main_touch_calib_button_pane_t

0x1f70,	// (0x00027af8) cell_ncimui_button_pane

0x1f70,	// (0x00027af8) bg_button_pane_cp032

0xebfe,	// (0x00034786) cell_ncimui_button_pane_t1

0xcf31,	// (0x00032ab9) image3_infobar_pane_ParamLimits

0xcf31,	// (0x00032ab9) image3_infobar_pane

0x9861,	// (0x0002f3e9) fs_bigclock_status_pane_ParamLimits

0x9861,	// (0x0002f3e9) fs_bigclock_status_pane

0x986e,	// (0x0002f3f6) main_fs_bigclock_clock_pane_ParamLimits

0x986e,	// (0x0002f3f6) main_fs_bigclock_clock_pane

0x9881,	// (0x0002f409) main_fs_bigclock_indi_pane_ParamLimits

0x9881,	// (0x0002f409) main_fs_bigclock_indi_pane

0x989c,	// (0x0002f424) main_fs_bigclock_swipe_pane_ParamLimits

0x989c,	// (0x0002f424) main_fs_bigclock_swipe_pane

0x1f70,	// (0x00027af8) main_fs_clock_dumped_data

0x98bd,	// (0x0002f445) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x98bd,	// (0x0002f445) list_single_fs_bigclock_indicator_pane_g1

0x98d9,	// (0x0002f461) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x98d9,	// (0x0002f461) list_single_fs_bigclock_indicator_pane_g2

0x98f3,	// (0x0002f47b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x98f3,	// (0x0002f47b) list_single_fs_bigclock_indicator_pane_g3

0x990d,	// (0x0002f495) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x990d,	// (0x0002f495) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x00035816) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x00035816) list_single_fs_bigclock_indicator_pane_g

0x9933,	// (0x0002f4bb) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9933,	// (0x0002f4bb) list_single_fs_bigclock_indicator_pane_t1

0x995b,	// (0x0002f4e3) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x995b,	// (0x0002f4e3) list_single_fs_bigclock_indicator_pane_t2

0x9983,	// (0x0002f50b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9983,	// (0x0002f50b) list_single_fs_bigclock_indicator_pane_t3

0x99ab,	// (0x0002f533) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x99ab,	// (0x0002f533) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x00035821) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x00035821) list_single_fs_bigclock_indicator_pane_t

0xec0c,	// (0x00034794) image3_infobar_fav_pane_ParamLimits

0xec0c,	// (0x00034794) image3_infobar_fav_pane

0xec1c,	// (0x000347a4) image3_infobar_loc_pane_ParamLimits

0xec1c,	// (0x000347a4) image3_infobar_loc_pane

0xec30,	// (0x000347b8) image3_infobar_time_pane_ParamLimits

0xec30,	// (0x000347b8) image3_infobar_time_pane

0xc3be,	// (0x00031f46) image3_infobar_time_pane_g1

0xec40,	// (0x000347c8) image3_infobar_time_pane_t1

0xc3be,	// (0x00031f46) image3_infobar_loc_pane_g1

0xec4e,	// (0x000347d6) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x000359e3) image3_infobar_loc_pane_g

0xec56,	// (0x000347de) image3_infobar_loc_pane_t1

0xc3be,	// (0x00031f46) image3_infobar_fav_pane_g1

0xec64,	// (0x000347ec) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x000359e8) image3_infobar_fav_pane_g

0xec6c,	// (0x000347f4) fs_bigclock_status_battery_pane

0xec75,	// (0x000347fd) fs_bigclock_status_signal_pane

0xec7e,	// (0x00034806) fs_bigclock_status_title_pane

0xec87,	// (0x0003480f) fs_bigclock_status_signal_pane_g1

0xec90,	// (0x00034818) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x000359ed) fs_bigclock_status_signal_pane_g

0xec98,	// (0x00034820) fs_bigclock_status_battery_pane_g1

0xeca1,	// (0x00034829) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x000359f2) fs_bigclock_status_battery_pane_g

0xeca9,	// (0x00034831) fs_bigclock_status_title_pane_t1

0xc3be,	// (0x00031f46) main_fs_bigclock_clock_pane_g1

0xecb7,	// (0x0003483f) main_fs_bigclock_clock_pane_g2

0xecb7,	// (0x0003483f) main_fs_bigclock_clock_pane_g3

0xecb7,	// (0x0003483f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x000359f7) main_fs_bigclock_clock_pane_g

0xa6e5,	// (0x0003026d) main_fs_bigclock_clock_pane_t1

0xa6f3,	// (0x0003027b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x00035a00) main_fs_bigclock_clock_pane_t

0xecbf,	// (0x00034847) list_single_fs_bigclock_indicator_pane_ParamLimits

0xecbf,	// (0x00034847) list_single_fs_bigclock_indicator_pane

0xa702,	// (0x0003028a) list_single_fs_bigclock_pane_ParamLimits

0xa702,	// (0x0003028a) list_single_fs_bigclock_pane

0xecd9,	// (0x00034861) main_fs_bigclock_indicator_pane_t1

0xece8,	// (0x00034870) list_single_fs_bigclock_pane_g1

0xecf0,	// (0x00034878) list_single_fs_bigclock_pane_t1

0xc3be,	// (0x00031f46) main_fs_bigclock_swipe_pane_g1

0xed30,	// (0x000348b8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x00035a11) main_fs_bigclock_swipe_pane_g

0xed38,	// (0x000348c0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed38,	// (0x000348c0) main_fs_bigclock_swipe_pane_t1

0x4b30,	// (0x0002a6b8) call_type_pane_ParamLimits

0x1f70,	// (0x00027af8) main_btmg_pane

0xe9b8,	// (0x00034540) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe9b8,	// (0x00034540) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x00035984) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x00035984) list_single_cale_mrui_row_pane_g

0xeb12,	// (0x0003469a) list_recal_vselct_arw_lo_pane

0xeb1a,	// (0x000346a2) list_recal_vselct_arw_up_pane

0xeb22,	// (0x000346aa) list_recal_vselct_pane

0xed55,	// (0x000348dd) btmg_button_pane

0xa767,	// (0x000302ef) main_btmg_pane_g1

0x1f70,	// (0x00027af8) bg_button_pane_cp044

0xed5f,	// (0x000348e7) btmg_button_pane_t1

0xbeb0,	// (0x00031a38) aid_listscroll_gen

0x21e2,	// (0x00027d6a) main_cntbar_detail_pane

0xe6e2,	// (0x0003426a) list_cmail_folder_pane

0xe6f2,	// (0x0003427a) sp_fs_scroll_pane_cp03_ParamLimits

0xa228,	// (0x0002fdb0) list_single_fs_dyc_pane_cp01_ParamLimits

0xa228,	// (0x0002fdb0) list_single_fs_dyc_pane_cp01

0xed6d,	// (0x000348f5) aid_size_cmail_indent

0xed76,	// (0x000348fe) list_single_dyc_row_pane_cp01

0xa79d,	// (0x00030325) cntbar_detail_list_pane_ParamLimits

0xa79d,	// (0x00030325) cntbar_detail_list_pane

0xa7e9,	// (0x00030371) main_cntbar_detail_cont_pane_ParamLimits

0xa7e9,	// (0x00030371) main_cntbar_detail_cont_pane

0x4947,	// (0x0002a4cf) scroll_pane_cp032_ParamLimits

0x4947,	// (0x0002a4cf) scroll_pane_cp032

0xa7fd,	// (0x00030385) cntbar_detail_list_event_pane_ParamLimits

0xa7fd,	// (0x00030385) cntbar_detail_list_event_pane

0xa7ad,	// (0x00030335) cntbar_detail_list_shct_pane

0x3d1c,	// (0x000298a4) aid_list_gen

0xed7f,	// (0x00034907) aid_scroll

0xed88,	// (0x00034910) aid_size_touch_scroll_bar

0xa80d,	// (0x00030395) aid_list_double

0xed91,	// (0x00034919) aid_list_single

0xa80d,	// (0x00030395) aid_list_single_lg

0xed9a,	// (0x00034922) aid_list_z_g_a_sm

0xeda2,	// (0x0003492a) aid_list_z_g_d

0xedaa,	// (0x00034932) aid_txt_z_prm

0xa816,	// (0x0003039e) aid_txt_z_prm_cp01

0xa824,	// (0x000303ac) aid_txt_z_sec

0xa832,	// (0x000303ba) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa832,	// (0x000303ba) main_cntbar_detail_cont_pane_g1

0xa846,	// (0x000303ce) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa846,	// (0x000303ce) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x00035a16) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x00035a16) main_cntbar_detail_cont_pane_g

0xedb8,	// (0x00034940) main_cntbar_detail_cont_pane_t1

0xedc6,	// (0x0003494e) main_cntbar_detail_cont_pane_t2

0xedd4,	// (0x0003495c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x00035a1b) main_cntbar_detail_cont_pane_t

0xa856,	// (0x000303de) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa856,	// (0x000303de) cell_cntbar_detail_list_shct_pane

0xede2,	// (0x0003496a) cntbar_detail_list_shct_pane_g1

0xedeb,	// (0x00034973) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x00035a22) cntbar_detail_list_shct_pane_g

0xa86a,	// (0x000303f2) cntbar_detail_list_event_pane_g1_ParamLimits

0xa86a,	// (0x000303f2) cntbar_detail_list_event_pane_g1

0xa876,	// (0x000303fe) cntbar_detail_list_event_pane_g2_ParamLimits

0xa876,	// (0x000303fe) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x00035a27) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x00035a27) cntbar_detail_list_event_pane_g

0xa8e2,	// (0x0003046a) cntbar_detail_list_event_pane_t1_ParamLimits

0xa8e2,	// (0x0003046a) cntbar_detail_list_event_pane_t1

0xa8f7,	// (0x0003047f) cntbar_detail_list_event_pane_t2_ParamLimits

0xa8f7,	// (0x0003047f) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x00035a34) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x00035a34) cntbar_detail_list_event_pane_t

0xc3be,	// (0x00031f46) cell_cntbar_detail_list_shct_pane_g1

0x5137,	// (0x0002acbf) navi_pane_mv_g3

0x21e2,	// (0x00027d6a) main_cntbar_detail_pane_ParamLimits

0x1f70,	// (0x00027af8) main_notif_wgt_pane

0xccb9,	// (0x00032841) aid_tch_main_mp4_pane_g4

0xcebb,	// (0x00032a43) popup_slider_window_cp02

0xeb09,	// (0x00034691) list_recal_day_event_pane

0xa771,	// (0x000302f9) cntbar_detail_btn_pane_ParamLimits

0xa771,	// (0x000302f9) cntbar_detail_btn_pane

0xa787,	// (0x0003030f) cntbar_detail_btn_pane_cp01_ParamLimits

0xa787,	// (0x0003030f) cntbar_detail_btn_pane_cp01

0xa7ad,	// (0x00030335) cntbar_detail_list_shct_pane_ParamLimits

0xa7bd,	// (0x00030345) cntbar_detail_pane_g1_ParamLimits

0xa7bd,	// (0x00030345) cntbar_detail_pane_g1

0xa7cd,	// (0x00030355) cntbar_detail_pane_t1_ParamLimits

0xa7cd,	// (0x00030355) cntbar_detail_pane_t1

0xa882,	// (0x0003040a) cntbar_detail_list_event_pane_g3_ParamLimits

0xa882,	// (0x0003040a) cntbar_detail_list_event_pane_g3

0xa89a,	// (0x00030422) cntbar_detail_list_event_pane_g4_ParamLimits

0xa89a,	// (0x00030422) cntbar_detail_list_event_pane_g4

0xa8b2,	// (0x0003043a) cntbar_detail_list_event_pane_g5_ParamLimits

0xa8b2,	// (0x0003043a) cntbar_detail_list_event_pane_g5

0xa8ca,	// (0x00030452) cntbar_detail_list_event_pane_g6_ParamLimits

0xa8ca,	// (0x00030452) cntbar_detail_list_event_pane_g6

0xa90c,	// (0x00030494) cntbar_detail_list_event_pane_t3_ParamLimits

0xa90c,	// (0x00030494) cntbar_detail_list_event_pane_t3

0xa91e,	// (0x000304a6) popup_notif_wgt_window_ParamLimits

0xa91e,	// (0x000304a6) popup_notif_wgt_window

0xa937,	// (0x000304bf) popup_submenu_window_cp01_ParamLimits

0xa937,	// (0x000304bf) popup_submenu_window_cp01

0x51b5,	// (0x0002ad3d) bg_popup_window_pane_cp10

0xedf4,	// (0x0003497c) listscroll_notif_wgt_pane

0xedfe,	// (0x00034986) list_notif_wgt_window

0xee07,	// (0x0003498f) scroll_pane_cp033

0xee10,	// (0x00034998) list_notif_wgt_row_pane_ParamLimits

0xee10,	// (0x00034998) list_notif_wgt_row_pane

0xee22,	// (0x000349aa) aid_size_list_notif_wgt_del

0xee2b,	// (0x000349b3) list_notif_wgt_row_pane_g1

0xee33,	// (0x000349bb) list_notif_wgt_row_pane_g2

0xee3b,	// (0x000349c3) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x00035a3b) list_notif_wgt_row_pane_g

0xee44,	// (0x000349cc) list_notif_wgt_row_pane_t1

0xee52,	// (0x000349da) list_notif_wgt_row_pane_t2

0xee60,	// (0x000349e8) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x00035a42) list_notif_wgt_row_pane_t

0xd4bd,	// (0x00033045) list_recal_day_event_pane_g1

0xee6e,	// (0x000349f6) list_recal_day_event_pane_t1

0x1f70,	// (0x00027af8) bg_button_pane_cp045

0xee7d,	// (0x00034a05) cntbar_detail_btn_pane_t1

0xbeb8,	// (0x00031a40) main_callh_pane_ParamLimits

0xbeb8,	// (0x00031a40) main_callh_pane

0x1f70,	// (0x00027af8) main_coverflow0_pane

0x1f70,	// (0x00027af8) main_wgtman_pane

0x98aa,	// (0x0002f432) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x98aa,	// (0x0002f432) main_fs_bigclock_unlock_btn_pane

0xe6bc,	// (0x00034244) bg_button_pane_cp16

0xe6cc,	// (0x00034254) cell_tport_appsw_pane_g3

0xa949,	// (0x000304d1) cf0_flow_pane_ParamLimits

0xa949,	// (0x000304d1) cf0_flow_pane

0xee8b,	// (0x00034a13) listscroll_cf0_pane

0xee94,	// (0x00034a1c) main_cf0_pane_g1

0xa95e,	// (0x000304e6) main_cf0_pane_t1_ParamLimits

0xa95e,	// (0x000304e6) main_cf0_pane_t1

0xa975,	// (0x000304fd) main_cf0_pane_t2_ParamLimits

0xa975,	// (0x000304fd) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x00035a49) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x00035a49) main_cf0_pane_t

0xee9e,	// (0x00034a26) scroll_pane_cp11

0xa98c,	// (0x00030514) cf0_flow_pane_g1

0xa994,	// (0x0003051c) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x00035a4e) cf0_flow_pane_g

0xa99c,	// (0x00030524) cf0_flow_pane_t1

0x1f70,	// (0x00027af8) main_call6_pane

0x1f70,	// (0x00027af8) main_calllock_pane

0xa9aa,	// (0x00030532) call6_btn_grp_pane_ParamLimits

0xa9aa,	// (0x00030532) call6_btn_grp_pane

0xa9c4,	// (0x0003054c) call6_pane_g1_ParamLimits

0xa9c4,	// (0x0003054c) call6_pane_g1

0xa9d9,	// (0x00030561) popup_call6_1st_window_ParamLimits

0xa9d9,	// (0x00030561) popup_call6_1st_window

0xa9ea,	// (0x00030572) popup_call6_2nd_window_ParamLimits

0xa9ea,	// (0x00030572) popup_call6_2nd_window

0xa9fb,	// (0x00030583) cell_call6_btn_pane_ParamLimits

0xa9fb,	// (0x00030583) cell_call6_btn_pane

0x51b5,	// (0x0002ad3d) bg_popup_call2_in_pane_cp03

0xeea9,	// (0x00034a31) popup_call6_1st_window_g1

0xeeb1,	// (0x00034a39) popup_call6_1st_window_g2

0xeeb9,	// (0x00034a41) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x00035a53) popup_call6_1st_window_g

0xeec1,	// (0x00034a49) popup_call6_1st_window_t1

0xeed0,	// (0x00034a58) popup_call6_1st_window_t2

0xeee0,	// (0x00034a68) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x00035a5a) popup_call6_1st_window_t

0x51b5,	// (0x0002ad3d) bg_popup_call2_in_pane_cp04

0xeea9,	// (0x00034a31) popup_call6_2nd_window_g1

0xeeb1,	// (0x00034a39) popup_call6_2nd_window_g2

0xeeb9,	// (0x00034a41) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x00035a53) popup_call6_2nd_window_g

0xeec1,	// (0x00034a49) popup_call6_2nd_window_t1

0x1f70,	// (0x00027af8) bg_button_pane_cp15

0xeef0,	// (0x00034a78) cell_call6_btn_pane_g1

0xeef9,	// (0x00034a81) cell_call6_btn_pane_t1

0xaa0f,	// (0x00030597) listscroll_wgtman_pane_ParamLimits

0xaa0f,	// (0x00030597) listscroll_wgtman_pane

0xaa32,	// (0x000305ba) wgtman_btn_pane_ParamLimits

0xaa32,	// (0x000305ba) wgtman_btn_pane

0x4d8a,	// (0x0002a912) aid_scroll_copy1

0xef08,	// (0x00034a90) list_wgtman_pane

0xaa75,	// (0x000305fd) wgtman_btn_pane_g1_ParamLimits

0xaa75,	// (0x000305fd) wgtman_btn_pane_g1

0xaaa1,	// (0x00030629) wgtman_btn_pane_t1_ParamLimits

0xaaa1,	// (0x00030629) wgtman_btn_pane_t1

0xef12,	// (0x00034a9a) wgtman_btn_pane_t2_ParamLimits

0xef12,	// (0x00034a9a) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x00035a61) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x00035a61) wgtman_btn_pane_t

0xaade,	// (0x00030666) listrow_wgtman_pane_ParamLimits

0xaade,	// (0x00030666) listrow_wgtman_pane

0xaaf0,	// (0x00030678) listrow_wgtman_pane_g1

0xaaf9,	// (0x00030681) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x00035a66) listrow_wgtman_pane_g

0xab03,	// (0x0003068b) listrow_wgtman_pane_t1

0xab11,	// (0x00030699) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x00035a6b) listrow_wgtman_pane_t

0xab1f,	// (0x000306a7) wait_bar_pane_cp09

0xef29,	// (0x00034ab1) main_calllock_btn_pane

0xef33,	// (0x00034abb) main_calllock_pane_g1

0x1f70,	// (0x00027af8) bg_button_pane_cp17

0xef3f,	// (0x00034ac7) main_calllock_btn_pane_g1

0xef48,	// (0x00034ad0) main_calllock_btn_pane_t1

0x1f70,	// (0x00027af8) main_dialer3_pane

0x1f70,	// (0x00027af8) main_fmrd2_pane

0xc3be,	// (0x00031f46) main_fs_bigclock_unlock_btn_pane_g1

0xef5f,	// (0x00034ae7) main_fs_bigclock_unlock_btn_pane_t1

0xab27,	// (0x000306af) area_fmrd2_info_pane_ParamLimits

0xab27,	// (0x000306af) area_fmrd2_info_pane

0xab38,	// (0x000306c0) area_fmrd2_visual_pane_ParamLimits

0xab38,	// (0x000306c0) area_fmrd2_visual_pane

0xab46,	// (0x000306ce) fmrd2_indi_pane_ParamLimits

0xab46,	// (0x000306ce) fmrd2_indi_pane

0xab53,	// (0x000306db) area_fmrd2_visual_pane_g1

0xab5b,	// (0x000306e3) area_fmrd2_visual_pane_t1

0xab6b,	// (0x000306f3) area_fmrd2_visual_pane_t2

0xab7b,	// (0x00030703) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x00035a75) area_fmrd2_visual_pane_t

0xab8b,	// (0x00030713) area_fmrd2_info_pane_g1

0xab93,	// (0x0003071b) area_fmrd2_info_pane_t1

0xaba3,	// (0x0003072b) area_fmrd2_info_pane_t2

0xabb3,	// (0x0003073b) area_fmrd2_info_pane_t3

0xabc3,	// (0x0003074b) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x00035a7c) area_fmrd2_info_pane_t

0xabd1,	// (0x00030759) fmrd2_indi_pane_t1

0xabe1,	// (0x00030769) fmrd2_indi_pane_t2

0xabf1,	// (0x00030779) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x00035a85) fmrd2_indi_pane_t

0x991c,	// (0x0002f4a4) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x991c,	// (0x0002f4a4) list_single_fs_bigclock_indicator_pane_g5

0x99c0,	// (0x0002f548) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x99c0,	// (0x0002f548) list_single_fs_bigclock_indicator_pane_t5

0xa375,	// (0x0002fefd) aid_cell_bcale_month_pane_ParamLimits

0xa375,	// (0x0002fefd) aid_cell_bcale_month_pane

0xa387,	// (0x0002ff0f) bcale_month_pane_ParamLimits

0xa387,	// (0x0002ff0f) bcale_month_pane

0xa39f,	// (0x0002ff27) bcale_preview_pane_ParamLimits

0xa39f,	// (0x0002ff27) bcale_preview_pane

0xecf0,	// (0x00034878) list_single_fs_bigclock_pane_t1_ParamLimits

0xed0c,	// (0x00034894) list_single_fs_bigclock_pane_t2_ParamLimits

0xed0c,	// (0x00034894) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x00035a0c) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x00035a0c) list_single_fs_bigclock_pane_t

0xef57,	// (0x00034adf) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x00035a70) main_fs_bigclock_unlock_btn_pane_g

0xac01,	// (0x00030789) aid_dia3_key_size_ParamLimits

0xac01,	// (0x00030789) aid_dia3_key_size

0xac10,	// (0x00030798) aid_dia3_listrow_size_ParamLimits

0xac10,	// (0x00030798) aid_dia3_listrow_size

0xac25,	// (0x000307ad) dia3_keypad_fun_pane_ParamLimits

0xac25,	// (0x000307ad) dia3_keypad_fun_pane

0xac41,	// (0x000307c9) dia3_keypad_num_pane_ParamLimits

0xac41,	// (0x000307c9) dia3_keypad_num_pane

0xac5c,	// (0x000307e4) dia3_listscroll_pane_ParamLimits

0xac5c,	// (0x000307e4) dia3_listscroll_pane

0xac6f,	// (0x000307f7) dia3_numentry_pane_ParamLimits

0xac6f,	// (0x000307f7) dia3_numentry_pane

0xef6d,	// (0x00034af5) dia3_list_pane

0xef78,	// (0x00034b00) scroll_pane_cp12

0x1f70,	// (0x00027af8) bg_dia3_numentry_pane

0xac83,	// (0x0003080b) dia3_numentry_pane_t1

0xac92,	// (0x0003081a) cell_dia3_key_num_pane

0xac9a,	// (0x00030822) cell_dia3_key0_fun_pane_ParamLimits

0xac9a,	// (0x00030822) cell_dia3_key0_fun_pane

0xacae,	// (0x00030836) cell_dia3_key1_fun_pane_ParamLimits

0xacae,	// (0x00030836) cell_dia3_key1_fun_pane

0xacc6,	// (0x0003084e) dia3_listrow_pane

0xdf84,	// (0x00033b0c) bg_dia3_numentry_pane_g1

0x1f70,	// (0x00027af8) bg_button_pane_cp21

0xef83,	// (0x00034b0b) cell_dia3_key_num_pane_t1

0xef91,	// (0x00034b19) cell_dia3_key_num_pane_t2

0xefa0,	// (0x00034b28) cell_dia3_key_num_pane_t3

0xefaf,	// (0x00034b37) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x00035a8c) cell_dia3_key_num_pane_t

0x1f70,	// (0x00027af8) bg_button_pane_cp19

0xacd8,	// (0x00030860) cell_dia3_key0_fun_pane_g1

0x1f70,	// (0x00027af8) bg_button_pane_cp20

0xace0,	// (0x00030868) cell_dia3_key1_fun_pane_g1

0xace8,	// (0x00030870) area_left_week_number_pane

0xacf1,	// (0x00030879) area_top_day_name_pane

0xacfa,	// (0x00030882) frame_month_view_pane

0xad02,	// (0x0003088a) grid_month_view_pane

0xad0c,	// (0x00030894) cell_top_day_name_pane_ParamLimits

0xad0c,	// (0x00030894) cell_top_day_name_pane

0xad22,	// (0x000308aa) cell_area_left_week_number_pane_ParamLimits

0xad22,	// (0x000308aa) cell_area_left_week_number_pane

0xad36,	// (0x000308be) cell_month_view_pane_ParamLimits

0xad36,	// (0x000308be) cell_month_view_pane

0xefbe,	// (0x00034b46) frm_month_g1

0xad51,	// (0x000308d9) frm_month_g2

0xad59,	// (0x000308e1) frm_month_g3

0xad61,	// (0x000308e9) frm_month_g4

0xad69,	// (0x000308f1) frm_month_g5

0xad71,	// (0x000308f9) frm_month_g6

0xad79,	// (0x00030901) frm_month_g7

0xefc7,	// (0x00034b4f) frm_month_g8

0xad81,	// (0x00030909) frm_month_g9

0xad8a,	// (0x00030912) frm_month_g10

0xad93,	// (0x0003091b) frm_month_g11

0xad9c,	// (0x00030924) frm_month_g12

0xada5,	// (0x0003092d) frm_month_g13

0xadae,	// (0x00030936) frm_month_g14

0xadb7,	// (0x0003093f) frm_month_g15

0xadc0,	// (0x00030948) frm_month_g16

0x000f,

0xff0d,	// (0x00035a95) frm_month_g

0xadc9,	// (0x00030951) cell_top_day_name_pane_t1

0xadd8,	// (0x00030960) cell_area_left_week_number_pane_g1

0xadc9,	// (0x00030951) cell_area_left_week_number_pane_t1

0xc3be,	// (0x00031f46) cell_month_view_pane_g1

0xade0,	// (0x00030968) cell_month_view_pane_t1

0x1f70,	// (0x00027af8) main_fps_pane

0xe442,	// (0x00033fca) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe442,	// (0x00033fca) cmail_ddmenu_btn02_pane_cp1

0xe45e,	// (0x00033fe6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe45e,	// (0x00033fe6) cmail_ddmenu_btn02_pane_cp2

0xa646,	// (0x000301ce) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa646,	// (0x000301ce) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x000359bd) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x000359bd) cmail_ddmenu_btn02_pane_g

0xa664,	// (0x000301ec) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa664,	// (0x000301ec) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x000359c2) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x000359c2) cmail_ddmenu_btn02_pane_t

0xadef,	// (0x00030977) fps_text_pane_ParamLimits

0xadef,	// (0x00030977) fps_text_pane

0xae06,	// (0x0003098e) main_fps_pane_g1_ParamLimits

0xae06,	// (0x0003098e) main_fps_pane_g1

0xae20,	// (0x000309a8) wait_bar_pane_cp010_ParamLimits

0xae20,	// (0x000309a8) wait_bar_pane_cp010

0xae31,	// (0x000309b9) fps_text_pane_t1_ParamLimits

0xae31,	// (0x000309b9) fps_text_pane_t1

0xd07a,	// (0x00032c02) cam4_image_uncrop_pane_g1

0xd083,	// (0x00032c0b) cam4_image_uncrop_pane_g2

0x8090,	// (0x0002dc18) cam4_image_uncrop_pane_g3

0x8099,	// (0x0002dc21) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x00035495) cam4_image_uncrop_pane_g

0xacc6,	// (0x0003084e) dia3_listrow_pane_ParamLimits

0x1f70,	// (0x00027af8) main_phob2_pane

0xa1ae,	// (0x0002fd36) cell_tport_appsw_pane_cp02_ParamLimits

0xa1ae,	// (0x0002fd36) cell_tport_appsw_pane_cp02

0xa1c2,	// (0x0002fd4a) cell_tport_appsw_pane_cp03_ParamLimits

0xa1c2,	// (0x0002fd4a) cell_tport_appsw_pane_cp03

0x1f70,	// (0x00027af8) phob2_contact_card_pane

0x1f70,	// (0x00027af8) phob2_listscroll_pane

0xefd0,	// (0x00034b58) phob2_list_pane

0xefd8,	// (0x00034b60) scroll_pane_cp034

0xae49,	// (0x000309d1) phob2_cc_data_pane_ParamLimits

0xae49,	// (0x000309d1) phob2_cc_data_pane

0xae68,	// (0x000309f0) phob2_cc_listscroll_pane_ParamLimits

0xae68,	// (0x000309f0) phob2_cc_listscroll_pane

0xae86,	// (0x00030a0e) list_double_large_graphic_phob2_pane_ParamLimits

0xae86,	// (0x00030a0e) list_double_large_graphic_phob2_pane

0xefe0,	// (0x00034b68) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xefe0,	// (0x00034b68) list_double_large_graphic_phob2_pane_g1

0xefed,	// (0x00034b75) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xefed,	// (0x00034b75) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x00035ab6) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x00035ab6) list_double_large_graphic_phob2_pane_g

0xeff9,	// (0x00034b81) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xeff9,	// (0x00034b81) list_double_large_graphic_phob2_pane_t1

0xf00e,	// (0x00034b96) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xf00e,	// (0x00034b96) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x00035abb) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x00035abb) list_double_large_graphic_phob2_pane_t

0x1f70,	// (0x00027af8) list_highlight_pane_cp024

0xf020,	// (0x00034ba8) phob2_cc_button_pane

0xae98,	// (0x00030a20) phob2_cc_data_pane_g1_ParamLimits

0xae98,	// (0x00030a20) phob2_cc_data_pane_g1

0xaead,	// (0x00030a35) phob2_cc_data_pane_g2_ParamLimits

0xaead,	// (0x00030a35) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x00035ac0) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x00035ac0) phob2_cc_data_pane_g

0xaebf,	// (0x00030a47) phob2_cc_data_pane_t1_ParamLimits

0xaebf,	// (0x00030a47) phob2_cc_data_pane_t1

0xaed7,	// (0x00030a5f) phob2_cc_data_pane_t2_ParamLimits

0xaed7,	// (0x00030a5f) phob2_cc_data_pane_t2

0xaeef,	// (0x00030a77) phob2_cc_data_pane_t3_ParamLimits

0xaeef,	// (0x00030a77) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x00035ac5) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x00035ac5) phob2_cc_data_pane_t

0xf028,	// (0x00034bb0) phob2_cc_list_pane_ParamLimits

0xf028,	// (0x00034bb0) phob2_cc_list_pane

0xd556,	// (0x000330de) scroll_pane_cp035_ParamLimits

0xd556,	// (0x000330de) scroll_pane_cp035

0x21e2,	// (0x00027d6a) bg_button_pane_cp033

0xf034,	// (0x00034bbc) phob2_cc_button_pane_g1

0xf040,	// (0x00034bc8) phob2_cc_button_pane_t1

0xf055,	// (0x00034bdd) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x00035acc) phob2_cc_button_pane_t

0xaf07,	// (0x00030a8f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaf07,	// (0x00030a8f) list_double_large_graphic_phob2_cc_pane

0xaf19,	// (0x00030aa1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaf19,	// (0x00030aa1) list_double_large_graphic_phob2_cc_pane_g1

0xaf25,	// (0x00030aad) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaf25,	// (0x00030aad) list_double_large_graphic_phob2_cc_pane_g2

0xaf31,	// (0x00030ab9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xaf31,	// (0x00030ab9) list_double_large_graphic_phob2_cc_pane_g3

0xaf3d,	// (0x00030ac5) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xaf3d,	// (0x00030ac5) list_double_large_graphic_phob2_cc_pane_g4

0xaf49,	// (0x00030ad1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xaf49,	// (0x00030ad1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x00035ad1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x00035ad1) list_double_large_graphic_phob2_cc_pane_g

0xaf55,	// (0x00030add) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xaf55,	// (0x00030add) list_double_large_graphic_phob2_cc_pane_t1

0xaf7e,	// (0x00030b06) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xaf7e,	// (0x00030b06) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x00035adc) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x00035adc) list_double_large_graphic_phob2_cc_pane_t

0xf067,	// (0x00034bef) list_highlight_pane_cp025_ParamLimits

0xf067,	// (0x00034bef) list_highlight_pane_cp025

0x21e2,	// (0x00027d6a) bg_button_pane_cp033_ParamLimits

0xf034,	// (0x00034bbc) phob2_cc_button_pane_g1_ParamLimits

0xf040,	// (0x00034bc8) phob2_cc_button_pane_t1_ParamLimits

0xf055,	// (0x00034bdd) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x00035acc) phob2_cc_button_pane_t_ParamLimits

0x1fb2,	// (0x00027b3a) popup_wgtman_window

0xd2d0,	// (0x00032e58) scroll_pane_cp038

0xaa57,	// (0x000305df) wgtman_btn_pane_cp_01_ParamLimits

0xaa57,	// (0x000305df) wgtman_btn_pane_cp_01

0xf075,	// (0x00034bfd) wgtman_content_pane

0xf07e,	// (0x00034c06) wgtman_heading_pane

0x1f70,	// (0x00027af8) bg_heading_pane_cp02

0xf087,	// (0x00034c0f) wgtman_heading_pane_g1

0xf08f,	// (0x00034c17) wgtman_heading_pane_t1

0xf09d,	// (0x00034c25) scroll_pane_cp036

0xf0a5,	// (0x00034c2d) wgtman_list_pane

0xf0ad,	// (0x00034c35) wgtman_list_pane_t1_ParamLimits

0xf0ad,	// (0x00034c35) wgtman_list_pane_t1

0xd066,	// (0x00032bee) cam4_grid_pane

0x8866,	// (0x0002e3ee) bg_button_pane_cp015_ParamLimits

0x8878,	// (0x0002e400) bg_button_pane_cp016_ParamLimits

0x888b,	// (0x0002e413) bg_button_pane_cp017_ParamLimits

0x88e3,	// (0x0002e46b) popup_vitu2_query_window_g3_ParamLimits

0x88e3,	// (0x0002e46b) popup_vitu2_query_window_g3

0x89a0,	// (0x0002e528) popup_vitu2_query_window_t6_ParamLimits

0x89a0,	// (0x0002e528) popup_vitu2_query_window_t6

0x89cb,	// (0x0002e553) popup_vitu2_query_window_t7_ParamLimits

0x89cb,	// (0x0002e553) popup_vitu2_query_window_t7

0xd07a,	// (0x00032c02) cam4_grid_pane_g1

0xd083,	// (0x00032c0b) cam4_grid_pane_g2

0xf0ca,	// (0x00034c52) cam4_grid_pane_g3

0xf0d3,	// (0x00034c5b) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x00035ae1) cam4_grid_pane_g

0x371a,	// (0x000292a2) aid_placing_vt_slider_lsc_ParamLimits

0x3a73,	// (0x000295fb) vidtel_button_pane_ParamLimits

0x3a73,	// (0x000295fb) vidtel_button_pane

0x1f70,	// (0x00027af8) bg_button_pane_cp034

0xafa7,	// (0x00030b2f) vidtel_button_pane_g1

0xf0de,	// (0x00034c66) vidtel_button_pane_t1

0xd431,	// (0x00032fb9) aid_size_vtel_slider_touch

0xd556,	// (0x000330de) scroll_pane_cp039

0xdfc2,	// (0x00033b4a) ncim_query_button_pane_cp01_ParamLimits

0xdfe1,	// (0x00033b69) ncimui_query_pane_g1_ParamLimits

0x21e2,	// (0x00027d6a) input_focus_pane_cp012_ParamLimits

0xe006,	// (0x00033b8e) ncim_query_entry_pane_t1_ParamLimits

0xd556,	// (0x000330de) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
