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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0001dfbb };

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
0x2743,	// (0x000206fe) Screen

0x274f,	// (0x0002070a) application_window

0x275b,	// (0x00020716) area_bottom_pane_ParamLimits

0x275b,	// (0x00020716) area_bottom_pane

0x0de5,	// (0x0001eda0) area_top_pane_ParamLimits

0x0de5,	// (0x0001eda0) area_top_pane

0x0e49,	// (0x0001ee04) call_video_uplink_pane_ParamLimits

0x0e49,	// (0x0001ee04) call_video_uplink_pane

0x0e88,	// (0x0001ee43) main_pane_ParamLimits

0x0e88,	// (0x0001ee43) main_pane

0xc3cf,	// (0x0002a38a) context_pane

0x55d5,	// (0x00023590) navi_pane

0x55fb,	// (0x000235b6) popup_cale_events_window_ParamLimits

0x55fb,	// (0x000235b6) popup_cale_events_window

0xc3e2,	// (0x0002a39d) popup_mup_playback_window

0x5613,	// (0x000235ce) signal_pane

0xa324,	// (0x000282df) main_browser_pane

0xa517,	// (0x000284d2) main_burst_pane

0x1444,	// (0x0001f3ff) main_calc_pane

0xc3b5,	// (0x0002a370) main_cale_day_pane

0x2b62,	// (0x00020b1d) main_cale_month_pane

0xc3b5,	// (0x0002a370) main_cale_week_pane

0xa517,	// (0x000284d2) main_call_pane

0x9ff8,	// (0x00027fb3) main_call_poc_pane

0xa517,	// (0x000284d2) main_camera_pane

0xa517,	// (0x000284d2) main_chi_dic_pane

0xad26,	// (0x00028ce1) main_clock_pane

0x9ff8,	// (0x00027fb3) main_fmradio_pane

0xa517,	// (0x000284d2) main_graph_messa_pane

0x9ff8,	// (0x00027fb3) main_help_pane

0xa324,	// (0x000282df) main_im_pane

0xa253,	// (0x0002820e) main_image_pane_ParamLimits

0xa253,	// (0x0002820e) main_image_pane

0x9ff8,	// (0x00027fb3) main_location2_pane

0xa517,	// (0x000284d2) main_location_pane

0xa253,	// (0x0002820e) main_messa_pane

0x9ff8,	// (0x00027fb3) main_mp2_pane

0xa517,	// (0x000284d2) main_mp_pane

0x9ff8,	// (0x00027fb3) main_msg_pane

0x9ff8,	// (0x00027fb3) main_mup_eq_pane

0x9ff8,	// (0x00027fb3) main_mup_pane

0xa324,	// (0x000282df) main_notes_pane

0x9ff8,	// (0x00027fb3) main_pec_pane

0x9ff8,	// (0x00027fb3) main_phob_pane

0x9ff8,	// (0x00027fb3) main_pinb_pane

0x9ff8,	// (0x00027fb3) main_postcard_pane

0x9ff8,	// (0x00027fb3) main_qdial_pane

0xa517,	// (0x000284d2) main_skin_pane

0x9ff8,	// (0x00027fb3) main_smil2_pane

0xa517,	// (0x000284d2) main_smil_pane

0xa517,	// (0x000284d2) main_video_pane

0xa517,	// (0x000284d2) main_video_tele_pane

0xa253,	// (0x0002820e) main_viewer_pane_ParamLimits

0xa253,	// (0x0002820e) main_viewer_pane

0xa517,	// (0x000284d2) main_vorec_pane

0x1490,	// (0x0001f44b) popup_blid_sat_info_window_ParamLimits

0x1490,	// (0x0001f44b) popup_blid_sat_info_window

0x14b0,	// (0x0001f46b) popup_dyc_status_message_window_ParamLimits

0x14b0,	// (0x0001f46b) popup_dyc_status_message_window

0x14be,	// (0x0001f479) popup_grid_large_graphic_window_ParamLimits

0x14be,	// (0x0001f479) popup_grid_large_graphic_window

0x154d,	// (0x0001f508) popup_loc_request_window_ParamLimits

0x154d,	// (0x0001f508) popup_loc_request_window

0x159a,	// (0x0001f555) popup_wml_address_window_ParamLimits

0x159a,	// (0x0001f555) popup_wml_address_window

0x54b7,	// (0x00023472) call_muted_g1

0x5173,	// (0x0002312e) popup_call_audio_conf_window_ParamLimits

0x5173,	// (0x0002312e) popup_call_audio_conf_window

0x54c7,	// (0x00023482) popup_call_audio_first_window_ParamLimits

0x54c7,	// (0x00023482) popup_call_audio_first_window

0x5507,	// (0x000234c2) popup_call_audio_in_window_ParamLimits

0x5507,	// (0x000234c2) popup_call_audio_in_window

0x552b,	// (0x000234e6) popup_call_audio_out_window_ParamLimits

0x552b,	// (0x000234e6) popup_call_audio_out_window

0x554d,	// (0x00023508) popup_call_audio_second_window_ParamLimits

0x554d,	// (0x00023508) popup_call_audio_second_window

0x557d,	// (0x00023538) popup_call_audio_wait_window_ParamLimits

0x557d,	// (0x00023538) popup_call_audio_wait_window

0x559e,	// (0x00023559) popup_number_entry_window_ParamLimits

0x559e,	// (0x00023559) popup_number_entry_window

0x9be5,	// (0x00027ba0) bg_popup_call_pane_cp05_ParamLimits

0x9be5,	// (0x00027ba0) bg_popup_call_pane_cp05

0x9c05,	// (0x00027bc0) popup_number_entry_window_t1

0x9c18,	// (0x00027bd3) popup_number_entry_window_t2

0x9c2a,	// (0x00027be5) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0002d085) popup_number_entry_window_t

0x9c3c,	// (0x00027bf7) text_title_cp2

0x9c4f,	// (0x00027c0a) bg_popup_call_pane_cp_ParamLimits

0x9c4f,	// (0x00027c0a) bg_popup_call_pane_cp

0x9c5d,	// (0x00027c18) call_thumbnail_pane

0x9c65,	// (0x00027c20) popup_call_audio_in_window_g1_ParamLimits

0x9c65,	// (0x00027c20) popup_call_audio_in_window_g1

0x9c71,	// (0x00027c2c) popup_call_audio_in_window_g2_ParamLimits

0x9c71,	// (0x00027c2c) popup_call_audio_in_window_g2

0x9c7d,	// (0x00027c38) popup_call_audio_in_window_g3_ParamLimits

0x9c7d,	// (0x00027c38) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0002d08e) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0002d08e) popup_call_audio_in_window_g

0x9c89,	// (0x00027c44) popup_call_audio_in_window_t1_ParamLimits

0x9c89,	// (0x00027c44) popup_call_audio_in_window_t1

0x9ca5,	// (0x00027c60) popup_call_audio_in_window_t2_ParamLimits

0x9ca5,	// (0x00027c60) popup_call_audio_in_window_t2

0x9cc1,	// (0x00027c7c) popup_call_audio_in_window_t3_ParamLimits

0x9cc1,	// (0x00027c7c) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0002d095) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0002d095) popup_call_audio_in_window_t

0x9c4f,	// (0x00027c0a) bg_popup_call_pane_cp01_ParamLimits

0x9c4f,	// (0x00027c0a) bg_popup_call_pane_cp01

0x9c5d,	// (0x00027c18) call_thumbnail_pane_cp02

0x9cd4,	// (0x00027c8f) call_type_pane_cp022

0x9cdc,	// (0x00027c97) popup_call_audio_out_window_g1_ParamLimits

0x9cdc,	// (0x00027c97) popup_call_audio_out_window_g1

0x9cee,	// (0x00027ca9) popup_call_audio_out_window_g2_ParamLimits

0x9cee,	// (0x00027ca9) popup_call_audio_out_window_g2

0x9cfa,	// (0x00027cb5) popup_call_audio_out_window_g3_ParamLimits

0x9cfa,	// (0x00027cb5) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0002d09c) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0002d09c) popup_call_audio_out_window_g

0x9d0c,	// (0x00027cc7) popup_call_audio_out_window_t1_ParamLimits

0x9d0c,	// (0x00027cc7) popup_call_audio_out_window_t1

0x9d24,	// (0x00027cdf) popup_call_audio_out_window_t2_ParamLimits

0x9d24,	// (0x00027cdf) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0002d0a3) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0002d0a3) popup_call_audio_out_window_t

0x9d39,	// (0x00027cf4) bg_popup_call_pane_ParamLimits

0x9d39,	// (0x00027cf4) bg_popup_call_pane

0x27d8,	// (0x00020793) call_thumbnail_pane_cp_ParamLimits

0x27d8,	// (0x00020793) call_thumbnail_pane_cp

0x9dbd,	// (0x00027d78) call_type_pane_cp01_ParamLimits

0x9dbd,	// (0x00027d78) call_type_pane_cp01

0x9e01,	// (0x00027dbc) popup_call_audio_first_window_g1_ParamLimits

0x9e01,	// (0x00027dbc) popup_call_audio_first_window_g1

0x9e4d,	// (0x00027e08) popup_call_audio_first_window_g2_ParamLimits

0x9e4d,	// (0x00027e08) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0002d0a8) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0002d0a8) popup_call_audio_first_window_g

0x9e91,	// (0x00027e4c) popup_call_audio_first_window_t1_ParamLimits

0x9e91,	// (0x00027e4c) popup_call_audio_first_window_t1

0x9f3d,	// (0x00027ef8) popup_call_audio_first_window_t4_ParamLimits

0x9f3d,	// (0x00027ef8) popup_call_audio_first_window_t4

0x9fc9,	// (0x00027f84) popup_call_audio_first_window_t5_ParamLimits

0x9fc9,	// (0x00027f84) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0002d0ad) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0002d0ad) popup_call_audio_first_window_t

0x9ff8,	// (0x00027fb3) bg_popup_call_pane_cp02

0xa002,	// (0x00027fbd) call_type_pane_cp023

0xa00a,	// (0x00027fc5) popup_call_audio_wait_window_g1

0xa012,	// (0x00027fcd) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002d0b4) popup_call_audio_wait_window_g

0xa01a,	// (0x00027fd5) popup_call_audio_wait_window_t3

0xa028,	// (0x00027fe3) bg_popup_call_pane_cp03_ParamLimits

0xa028,	// (0x00027fe3) bg_popup_call_pane_cp03

0xa088,	// (0x00028043) call_thumbnail_pane_cp011_ParamLimits

0xa088,	// (0x00028043) call_thumbnail_pane_cp011

0xa094,	// (0x0002804f) call_type_pane_cp034_ParamLimits

0xa094,	// (0x0002804f) call_type_pane_cp034

0xa0d0,	// (0x0002808b) popup_call_audio_second_window_g1_ParamLimits

0xa0d0,	// (0x0002808b) popup_call_audio_second_window_g1

0xa10c,	// (0x000280c7) popup_call_audio_second_window_g2_ParamLimits

0xa10c,	// (0x000280c7) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0002d0b9) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0002d0b9) popup_call_audio_second_window_g

0xa148,	// (0x00028103) popup_call_audio_second_window_t1_ParamLimits

0xa148,	// (0x00028103) popup_call_audio_second_window_t1

0xa1c9,	// (0x00028184) popup_call_audio_second_window_t2_ParamLimits

0xa1c9,	// (0x00028184) popup_call_audio_second_window_t2

0xa1ff,	// (0x000281ba) popup_call_audio_second_window_t3_ParamLimits

0xa1ff,	// (0x000281ba) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0002d0be) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0002d0be) popup_call_audio_second_window_t

0x9ff8,	// (0x00027fb3) bg_popup_call_pane_cp04

0xa235,	// (0x000281f0) list_conf_pane

0xa23d,	// (0x000281f8) popup_call_audio_conf_window_t1

0xa24b,	// (0x00028206) call_thumbnail_pane_g1

0xa253,	// (0x0002820e) bg_pinb_pane_ParamLimits

0xa253,	// (0x0002820e) bg_pinb_pane

0xa261,	// (0x0002821c) find_pinb_pane

0xa26a,	// (0x00028225) listscroll_pinb_pane_ParamLimits

0xa26a,	// (0x00028225) listscroll_pinb_pane

0xa279,	// (0x00028234) pinb_bg_pane_g1

0x27fc,	// (0x000207b7) pinb_bg_pane_g2

0x2808,	// (0x000207c3) pinb_bg_pane_g3

0x2814,	// (0x000207cf) pinb_bg_pane_g4

0x2820,	// (0x000207db) pinb_bg_pane_g5

0x282c,	// (0x000207e7) pinb_bg_pane_g6

0x2837,	// (0x000207f2) pinb_bg_pane_g7

0x2842,	// (0x000207fd) pinb_bg_pane_g8

0x284d,	// (0x00020808) pinb_bg_pane_g9

0x2857,	// (0x00020812) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0002d0c5) pinb_bg_pane_g

0x2874,	// (0x0002082f) grid_pinb_pane

0x287f,	// (0x0002083a) list_pinb_pane

0x288a,	// (0x00020845) scroll_pane_cp01_ParamLimits

0x288a,	// (0x00020845) scroll_pane_cp01

0xa283,	// (0x0002823e) find_pinb_pane_g1_ParamLimits

0xa283,	// (0x0002823e) find_pinb_pane_g1

0xa29b,	// (0x00028256) find_pinb_pane_t1

0xa2ad,	// (0x00028268) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0002d0df) find_pinb_pane_t

0xa2c2,	// (0x0002827d) input_focus_pane_cp01_ParamLimits

0xa2c2,	// (0x0002827d) input_focus_pane_cp01

0x289c,	// (0x00020857) cell_pinb_pane_ParamLimits

0x289c,	// (0x00020857) cell_pinb_pane

0x28c7,	// (0x00020882) cell_pinb_pane_g1_ParamLimits

0x28c7,	// (0x00020882) cell_pinb_pane_g1

0xa2ce,	// (0x00028289) cell_pinb_pane_g2_ParamLimits

0xa2ce,	// (0x00028289) cell_pinb_pane_g2

0xa2da,	// (0x00028295) cell_pinb_pane_g3_ParamLimits

0xa2da,	// (0x00028295) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0002d0e4) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0002d0e4) cell_pinb_pane_g

0x9ff8,	// (0x00027fb3) grid_highlight_pane_cp01

0x28dc,	// (0x00020897) list_pinb_item_pane_ParamLimits

0x28dc,	// (0x00020897) list_pinb_item_pane

0x9ff8,	// (0x00027fb3) list_highlight_pane_cp02

0x2905,	// (0x000208c0) list_pinb_item_pane_g1_ParamLimits

0x2905,	// (0x000208c0) list_pinb_item_pane_g1

0x2912,	// (0x000208cd) list_pinb_item_pane_g2_ParamLimits

0x2912,	// (0x000208cd) list_pinb_item_pane_g2

0x291e,	// (0x000208d9) list_pinb_item_pane_g3_ParamLimits

0x291e,	// (0x000208d9) list_pinb_item_pane_g3

0x292f,	// (0x000208ea) list_pinb_item_pane_g4_ParamLimits

0x292f,	// (0x000208ea) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0002d0eb) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0002d0eb) list_pinb_item_pane_g

0x293b,	// (0x000208f6) list_pinb_item_pane_t1_ParamLimits

0x293b,	// (0x000208f6) list_pinb_item_pane_t1

0x1076,	// (0x0001f031) calc_display_pane

0x1094,	// (0x0001f04f) calc_paper_pane

0x10b0,	// (0x0001f06b) grid_calc_pane

0x9ff8,	// (0x00027fb3) bg_list_pane_cp01

0x2952,	// (0x0002090d) clock_g1

0x295a,	// (0x00020915) clock_g2

0x0001,

0xf139,	// (0x0002d0f4) clock_g

0x2964,	// (0x0002091f) clock_t1_ParamLimits

0x2964,	// (0x0002091f) clock_t1

0x2979,	// (0x00020934) clock_t2_ParamLimits

0x2979,	// (0x00020934) clock_t2

0x298b,	// (0x00020946) clock_t3_ParamLimits

0x298b,	// (0x00020946) clock_t3

0x299d,	// (0x00020958) clock_t4_ParamLimits

0x299d,	// (0x00020958) clock_t4

0x29af,	// (0x0002096a) clock_t5_ParamLimits

0x29af,	// (0x0002096a) clock_t5

0x29c4,	// (0x0002097f) clock_t6_ParamLimits

0x29c4,	// (0x0002097f) clock_t6

0x29d6,	// (0x00020991) clock_t7_ParamLimits

0x29d6,	// (0x00020991) clock_t7

0x29e8,	// (0x000209a3) clock_t8_ParamLimits

0x29e8,	// (0x000209a3) clock_t8

0x29fe,	// (0x000209b9) clock_t9_ParamLimits

0x29fe,	// (0x000209b9) clock_t9

0x0008,

0xf13e,	// (0x0002d0f9) clock_t_ParamLimits

0xf13e,	// (0x0002d0f9) clock_t

0xa2e6,	// (0x000282a1) popup_clock_analogue_window_cp02

0xa2e6,	// (0x000282a1) popup_clock_digital_window_cp01

0xa2ee,	// (0x000282a9) listscroll_help_pane

0x9ff8,	// (0x00027fb3) phob_pre_status_pane

0xa2f8,	// (0x000282b3) grid_qdial_pane

0xa253,	// (0x0002820e) listscroll_mce_pane

0xa253,	// (0x0002820e) bg_notes_pane

0xa302,	// (0x000282bd) list_notes_pane

0x2a14,	// (0x000209cf) scroll_pane_cp06

0xa310,	// (0x000282cb) bg_calc_paper_pane

0x10dc,	// (0x0001f097) list_calc_pane

0xa324,	// (0x000282df) bg_calc_display_pane

0x10f6,	// (0x0001f0b1) calc_display_pane_t1

0x110b,	// (0x0001f0c6) calc_display_pane_t2

0x1120,	// (0x0001f0db) calc_display_pane_t3

0x0002,

0xf151,	// (0x0002d10c) calc_display_pane_t

0x1132,	// (0x0001f0ed) cell_calc_pane_ParamLimits

0x1132,	// (0x0001f0ed) cell_calc_pane

0xa330,	// (0x000282eb) bg_calc_paper_pane_g1

0xa33c,	// (0x000282f7) bg_calc_paper_pane_g2

0xa348,	// (0x00028303) bg_calc_paper_pane_g3

0xa354,	// (0x0002830f) bg_calc_paper_pane_g4

0xa360,	// (0x0002831b) bg_calc_paper_pane_g5

0x2a23,	// (0x000209de) bg_calc_paper_pane_g6

0x2a34,	// (0x000209ef) bg_calc_paper_pane_g7

0x2a45,	// (0x00020a00) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0002d113) bg_calc_paper_pane_g

0x2a56,	// (0x00020a11) calc_bg_paper_pane_g9

0x2a67,	// (0x00020a22) list_calc_item_pane_ParamLimits

0x2a67,	// (0x00020a22) list_calc_item_pane

0xa36c,	// (0x00028327) list_calc_item_pane_g1

0x115f,	// (0x0001f11a) list_calc_item_pane_t1_ParamLimits

0x115f,	// (0x0001f11a) list_calc_item_pane_t1

0x1171,	// (0x0001f12c) list_calc_item_pane_t2_ParamLimits

0x1171,	// (0x0001f12c) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0002d124) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0002d124) list_calc_item_pane_t

0xa379,	// (0x00028334) cell_calc_pane_g1

0xa383,	// (0x0002833e) grid_highlight_pane_cp02

0xa3a5,	// (0x00028360) bg_calc_display_pane_g1

0x11a1,	// (0x0001f15c) bg_calc_display_pane_g2

0xa3ae,	// (0x00028369) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0002d12e) bg_calc_display_pane_g

0x11ab,	// (0x0001f166) cell_qdial_pane_ParamLimits

0x11ab,	// (0x0001f166) cell_qdial_pane

0x2a97,	// (0x00020a52) cell_qdial_pane_g1_ParamLimits

0x2a97,	// (0x00020a52) cell_qdial_pane_g1

0x2aa4,	// (0x00020a5f) cell_qdial_pane_g2_ParamLimits

0x2aa4,	// (0x00020a5f) cell_qdial_pane_g2

0xa3b7,	// (0x00028372) cell_qdial_pane_g3_ParamLimits

0xa3b7,	// (0x00028372) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0002d135) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0002d135) cell_qdial_pane_g

0x2ac1,	// (0x00020a7c) cell_qdial_pane_t1_ParamLimits

0x2ac1,	// (0x00020a7c) cell_qdial_pane_t1

0x2ad9,	// (0x00020a94) cell_qdial_pane_t2_ParamLimits

0x2ad9,	// (0x00020a94) cell_qdial_pane_t2

0x2aec,	// (0x00020aa7) cell_qdial_pane_t3_ParamLimits

0x2aec,	// (0x00020aa7) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0002d13e) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0002d13e) cell_qdial_pane_t

0x9ff8,	// (0x00027fb3) grid_highlight_pane_cp04

0xa3c3,	// (0x0002837e) thumbnail_qdial_pane_ParamLimits

0xa3c3,	// (0x0002837e) thumbnail_qdial_pane

0xa42d,	// (0x000283e8) list_help_pane

0xa436,	// (0x000283f1) scroll_pane_cp02

0x2aff,	// (0x00020aba) help_list_pane_t1_ParamLimits

0x2aff,	// (0x00020aba) help_list_pane_t1

0x11bf,	// (0x0001f17a) bg_notes_pane_g2

0x11c7,	// (0x0001f182) bg_notes_pane_g3

0x11cf,	// (0x0001f18a) notes_bg_pane_g1

0x11d7,	// (0x0001f192) notes_bg_pane_g4

0x11df,	// (0x0001f19a) notes_bg_pane_g5

0x11e7,	// (0x0001f1a2) notes_bg_pane_g6

0x11ef,	// (0x0001f1aa) notes_bg_pane_g7

0x11f7,	// (0x0001f1b2) notes_bg_pane_g8

0x11ff,	// (0x0001f1ba) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0002d15c) notes_bg_pane_g

0x2b36,	// (0x00020af1) list_notes_text_pane_ParamLimits

0x2b36,	// (0x00020af1) list_notes_text_pane

0xa43f,	// (0x000283fa) list_notes_text_pane_g1

0xa448,	// (0x00028403) list_notes_text_pane_t1

0x2b62,	// (0x00020b1d) listscroll_cale_week_pane

0x2b87,	// (0x00020b42) bg_cale_heading_pane

0xa470,	// (0x0002842b) bg_cale_pane_cp01

0x2ba9,	// (0x00020b64) cale_week_corner_pane

0x2bc3,	// (0x00020b7e) cale_week_day_heading_pane

0x2be5,	// (0x00020ba0) cale_week_scroll_pane_g1

0x2c02,	// (0x00020bbd) cale_week_scroll_pane_g2

0x2c15,	// (0x00020bd0) cale_week_scroll_pane_g3

0x2c28,	// (0x00020be3) cale_week_scroll_pane_g4

0x2c3b,	// (0x00020bf6) cale_week_scroll_pane_g5

0x2c4e,	// (0x00020c09) cale_week_scroll_pane_g6

0x2c61,	// (0x00020c1c) cale_week_scroll_pane_g7

0x2c76,	// (0x00020c31) cale_week_scroll_pane_g8

0x2c8b,	// (0x00020c46) cale_week_scroll_pane_g9

0x2c9e,	// (0x00020c59) cale_week_scroll_pane_g10

0x2cb1,	// (0x00020c6c) cale_week_scroll_pane_g11

0x2cc4,	// (0x00020c7f) cale_week_scroll_pane_g12

0x2cdb,	// (0x00020c96) cale_week_scroll_pane_g13

0x2cf6,	// (0x00020cb1) cale_week_scroll_pane_g14

0x2d11,	// (0x00020ccc) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0002d16b) cale_week_scroll_pane_g

0x2d41,	// (0x00020cfc) cale_week_time_pane

0x2d56,	// (0x00020d11) grid_cale_week_pane

0xa49f,	// (0x0002845a) scroll_pane_cp08

0x2d75,	// (0x00020d30) cell_cale_week_pane_ParamLimits

0x2d75,	// (0x00020d30) cell_cale_week_pane

0x2dd7,	// (0x00020d92) cale_week_day_heading_pane_t1

0x2df2,	// (0x00020dad) cale_week_day_heading_pane_t2

0x2e0d,	// (0x00020dc8) cale_week_day_heading_pane_t3

0x2e28,	// (0x00020de3) cale_week_day_heading_pane_t4

0x2e43,	// (0x00020dfe) cale_week_day_heading_pane_t5

0x2e5e,	// (0x00020e19) cale_week_day_heading_pane_t6

0x2e79,	// (0x00020e34) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0002d18c) cale_week_day_heading_pane_t

0xa4bc,	// (0x00028477) bg_cale_side_pane

0x1207,	// (0x0001f1c2) cale_week_time_pane_t1

0x1221,	// (0x0001f1dc) cale_week_time_pane_t2

0x123b,	// (0x0001f1f6) cale_week_time_pane_t3

0x1255,	// (0x0001f210) cale_week_time_pane_t4

0x126f,	// (0x0001f22a) cale_week_time_pane_t5

0x1289,	// (0x0001f244) cale_week_time_pane_t6

0x12a9,	// (0x0001f264) cale_week_time_pane_t7

0x12cb,	// (0x0001f286) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0002d19b) cale_week_time_pane_t

0x2e94,	// (0x00020e4f) cell_cale_week_pane_g2

0x2eb8,	// (0x00020e73) cell_cale_week_pane_g3_ParamLimits

0x2eb8,	// (0x00020e73) cell_cale_week_pane_g3

0xa4ca,	// (0x00028485) grid_highlight_pane_cp07

0xa4d2,	// (0x0002848d) listscroll_gms_pane

0xa4dc,	// (0x00028497) grid_gms_pane

0xa4e5,	// (0x000284a0) listscroll_gms_pane_g1

0xa4ed,	// (0x000284a8) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0002d1ac) listscroll_gms_pane_g

0x2ed0,	// (0x00020e8b) scroll_pane_cp010

0x2edb,	// (0x00020e96) cell_gms_pane_ParamLimits

0x2edb,	// (0x00020e96) cell_gms_pane

0x2eeb,	// (0x00020ea6) cell_gms_pane_g1

0xa4f5,	// (0x000284b0) cell_gms_pane_g2

0xa4fd,	// (0x000284b8) cell_gms_pane_g3

0xa506,	// (0x000284c1) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0002d1b1) cell_gms_pane_g

0xa50f,	// (0x000284ca) grid_highlight_pane_cp09

0x545f,	// (0x0002341a) phob_pre_status_pane_g1

0x5467,	// (0x00023422) phob_pre_status_pane_g2

0x546f,	// (0x0002342a) phob_pre_status_pane_g3

0x5477,	// (0x00023432) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0002d5af) phob_pre_status_pane_g

0x5487,	// (0x00023442) phob_pre_status_pane_t1

0x5497,	// (0x00023452) phob_pre_status_pane_t2

0x54a7,	// (0x00023462) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0002d5ba) phob_pre_status_pane_t

0xa517,	// (0x000284d2) bg_list_pane_cp05

0x2efb,	// (0x00020eb6) grid_vorec_pane

0x2f05,	// (0x00020ec0) vorec_t1

0x2f13,	// (0x00020ece) vorec_t2

0x2f21,	// (0x00020edc) vorec_t3

0x2f2f,	// (0x00020eea) vorec_t4

0x271d,	// (0x000206d8) vorec_t5

0x272b,	// (0x000206e6) vorec_t6

0x0004,

0xf1ff,	// (0x0002d1ba) vorec_t

0x2739,	// (0x000206f4) wait_bar_pane_cp01

0x2f4b,	// (0x00020f06) cell_vorec_pane_ParamLimits

0x2f4b,	// (0x00020f06) cell_vorec_pane

0x12ef,	// (0x0001f2aa) cell_vorec_pane_g1

0x9ff8,	// (0x00027fb3) grid_highlight_pane_cp05

0x2f6e,	// (0x00020f29) cams_zoom_pane

0x2f7a,	// (0x00020f35) image_vga_pane

0x2f89,	// (0x00020f44) main_camera_pane_g1

0x2f97,	// (0x00020f52) main_camera_pane_g2

0x2fa3,	// (0x00020f5e) main_camera_pane_g3

0x2faf,	// (0x00020f6a) main_camera_pane_g4

0x2fbb,	// (0x00020f76) main_camera_pane_g5

0x2fc7,	// (0x00020f82) main_camera_pane_g6

0x2fd3,	// (0x00020f8e) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0002d1c5) main_camera_pane_g

0x2fdf,	// (0x00020f9a) main_camera_pane_t1

0x2ff1,	// (0x00020fac) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0002d1d6) main_camera_pane_t

0x3012,	// (0x00020fcd) cams_zoom_pane_cp_ParamLimits

0x3012,	// (0x00020fcd) cams_zoom_pane_cp

0x3036,	// (0x00020ff1) image_cif_pane_ParamLimits

0x3036,	// (0x00020ff1) image_cif_pane

0x3054,	// (0x0002100f) image_subqcif_pane

0x305c,	// (0x00021017) main_video_pane_g1_ParamLimits

0x305c,	// (0x00021017) main_video_pane_g1

0x307c,	// (0x00021037) main_video_pane_g2_ParamLimits

0x307c,	// (0x00021037) main_video_pane_g2

0x30ac,	// (0x00021067) main_video_pane_g3_ParamLimits

0x30ac,	// (0x00021067) main_video_pane_g3

0x30d5,	// (0x00021090) main_video_pane_g4_ParamLimits

0x30d5,	// (0x00021090) main_video_pane_g4

0x30fe,	// (0x000210b9) main_video_pane_g5_ParamLimits

0x30fe,	// (0x000210b9) main_video_pane_g5

0xa52b,	// (0x000284e6) main_video_pane_g6_ParamLimits

0xa52b,	// (0x000284e6) main_video_pane_g6

0x0006,

0xf220,	// (0x0002d1db) main_video_pane_g_ParamLimits

0xf220,	// (0x0002d1db) main_video_pane_g

0x3120,	// (0x000210db) main_video_pane_t1_ParamLimits

0x3120,	// (0x000210db) main_video_pane_t1

0xa545,	// (0x00028500) cams_zoom_pane_g1

0xa54e,	// (0x00028509) cams_zoom_pane_g2

0xa557,	// (0x00028512) cams_zoom_pane_g3

0xa560,	// (0x0002851b) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0002d1ea) cams_zoom_pane_g

0x316a,	// (0x00021125) grid_cams_pane

0x3178,	// (0x00021133) linegrid_cams_pane

0x3186,	// (0x00021141) cell_cams_pane_ParamLimits

0x3186,	// (0x00021141) cell_cams_pane

0xa569,	// (0x00028524) cams_burst_image_pane

0xa571,	// (0x0002852c) cell_cams_pane_g1

0x9ff8,	// (0x00027fb3) grid_highlight_pane_cp03

0xa379,	// (0x00028334) mp_bg_pane_g1

0x9ff8,	// (0x00027fb3) bg_list_pane_cp03

0xc2da,	// (0x0002a295) bg_mp_pane

0xc2e2,	// (0x0002a29d) grid_mp_pane

0xc2ea,	// (0x0002a2a5) media_player_g1

0xc2f2,	// (0x0002a2ad) media_player_t1

0xc300,	// (0x0002a2bb) media_player_t2

0xc30e,	// (0x0002a2c9) media_player_t3

0xc31c,	// (0x0002a2d7) media_player_t4

0xc32a,	// (0x0002a2e5) media_player_t5

0xc338,	// (0x0002a2f3) media_player_t6

0xc346,	// (0x0002a301) media_player_t7

0x0006,

0xf5de,	// (0x0002d599) media_player_t

0xc354,	// (0x0002a30f) wait_bar_pane_cp02

0xf5c3,	// (0x0002d57e) main_usb_pane_t

0x5456,	// (0x00023411) cell_mp_pane

0xa379,	// (0x00028334) cell_mp_pane_g1

0x9ff8,	// (0x00027fb3) grid_highlight_pane_cp06

0xa579,	// (0x00028534) grid_skin_colour_pane

0xa581,	// (0x0002853c) list_highlight_pane_cp03

0x32ae,	// (0x00021269) skin_g1

0xa589,	// (0x00028544) skin_t1

0xa598,	// (0x00028553) skin_t2

0x0001,

0xf264,	// (0x0002d21f) skin_t

0x32b8,	// (0x00021273) cell_skin_colour_pane_ParamLimits

0x32b8,	// (0x00021273) cell_skin_colour_pane

0xa5a6,	// (0x00028561) cell_skin_colour_pane_g1

0x333c,	// (0x000212f7) call_video_g1_ParamLimits

0x333c,	// (0x000212f7) call_video_g1

0x334c,	// (0x00021307) call_video_g2_ParamLimits

0x334c,	// (0x00021307) call_video_g2

0x0001,

0xf269,	// (0x0002d224) call_video_g_ParamLimits

0xf269,	// (0x0002d224) call_video_g

0x33a6,	// (0x00021361) call_video_uplink_pane_cp1_ParamLimits

0x33a6,	// (0x00021361) call_video_uplink_pane_cp1

0xa5b8,	// (0x00028573) call_video_uplink_pane_cp2

0x3472,	// (0x0002142d) video_down_crop_pane_ParamLimits

0x3472,	// (0x0002142d) video_down_crop_pane

0x3564,	// (0x0002151f) video_down_pane_ParamLimits

0x3564,	// (0x0002151f) video_down_pane

0xa5c0,	// (0x0002857b) video_down_subqcif_pane_ParamLimits

0xa5c0,	// (0x0002857b) video_down_subqcif_pane

0xa5d8,	// (0x00028593) video_down_subqcif_pane_cp_ParamLimits

0xa5d8,	// (0x00028593) video_down_subqcif_pane_cp

0xa5fe,	// (0x000285b9) im_reading_pane_ParamLimits

0xa5fe,	// (0x000285b9) im_reading_pane

0x3684,	// (0x0002163f) im_writing_pane_ParamLimits

0x3684,	// (0x0002163f) im_writing_pane

0x36a2,	// (0x0002165d) im_reading_pane_t1

0xa618,	// (0x000285d3) list_im_pane

0xa629,	// (0x000285e4) scroll_pane_cp07

0x36fa,	// (0x000216b5) im_writing_pane_t1_ParamLimits

0x36fa,	// (0x000216b5) im_writing_pane_t1

0xa642,	// (0x000285fd) im_writing_pane_t2_ParamLimits

0xa642,	// (0x000285fd) im_writing_pane_t2

0x0001,

0xf273,	// (0x0002d22e) im_writing_pane_t_ParamLimits

0xf273,	// (0x0002d22e) im_writing_pane_t

0x9ff8,	// (0x00027fb3) input_focus_pane_cp04

0x9ff8,	// (0x00027fb3) input_focus_pane_cp05

0x370c,	// (0x000216c7) list_im_single_pane_ParamLimits

0x370c,	// (0x000216c7) list_im_single_pane

0x3733,	// (0x000216ee) list_single_im_pane_t1

0x541a,	// (0x000233d5) blid_accuracy_pane

0x5422,	// (0x000233dd) blid_compass_pane

0x542c,	// (0x000233e7) main_location_t1

0x543a,	// (0x000233f5) main_location_t2

0x5448,	// (0x00023403) main_location_t3

0x0002,

0xf5ed,	// (0x0002d5a8) main_location_t

0x9ff8,	// (0x00027fb3) aid_levels_location

0xa379,	// (0x00028334) blid_accuracy_pane_g1

0xa379,	// (0x00028334) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0002d290) blid_accuracy_pane_g

0xa68a,	// (0x00028645) wml_content_pane

0xa6c8,	// (0x00028683) wml_button_pane_ParamLimits

0xa6c8,	// (0x00028683) wml_button_pane

0x3742,	// (0x000216fd) wml_list_single_large_pane_ParamLimits

0x3742,	// (0x000216fd) wml_list_single_large_pane

0x376d,	// (0x00021728) wml_list_single_medium_pane_ParamLimits

0x376d,	// (0x00021728) wml_list_single_medium_pane

0x379f,	// (0x0002175a) wml_list_single_small_pane_ParamLimits

0x379f,	// (0x0002175a) wml_list_single_small_pane

0xa6dc,	// (0x00028697) wml_selection_box_pane_ParamLimits

0xa6dc,	// (0x00028697) wml_selection_box_pane

0xa6ef,	// (0x000286aa) wml_list_single_pane_t1

0xa6fe,	// (0x000286b9) wml_list_single_medium_pane_t1

0xa70d,	// (0x000286c8) wml_list_single_large_pane_t1

0xa71c,	// (0x000286d7) input_focus_pane_cp02_ParamLimits

0xa71c,	// (0x000286d7) input_focus_pane_cp02

0xa72f,	// (0x000286ea) wml_selection_box_pane_g1

0xa738,	// (0x000286f3) wml_selection_box_pane_t1_ParamLimits

0xa738,	// (0x000286f3) wml_selection_box_pane_t1

0xa253,	// (0x0002820e) bg_wml_button_pane_ParamLimits

0xa253,	// (0x0002820e) bg_wml_button_pane

0xa750,	// (0x0002870b) wml_button_pane_g1

0xa758,	// (0x00028713) wml_button_pane_t1

0xa750,	// (0x0002870b) wml_button_bg_pane_g1

0xa768,	// (0x00028723) wml_button_bg_pane_g2

0xa770,	// (0x0002872b) wml_button_bg_pane_g3

0xa778,	// (0x00028733) wml_button_bg_pane_g4

0xa780,	// (0x0002873b) wml_button_bg_pane_g5

0xa788,	// (0x00028743) wml_button_bg_pane_g6

0xa790,	// (0x0002874b) wml_button_bg_pane_g7

0xa798,	// (0x00028753) wml_button_bg_pane_g8

0xa7a0,	// (0x0002875b) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0002d233) wml_button_bg_pane_g

0x37dc,	// (0x00021797) bg_list_pane_cp02

0xa7a8,	// (0x00028763) mce_header_pane_ParamLimits

0xa7a8,	// (0x00028763) mce_header_pane

0xa7be,	// (0x00028779) mce_icon_pane

0xa7be,	// (0x00028779) mce_image_pane

0xa7c7,	// (0x00028782) mce_text_pane_ParamLimits

0xa7c7,	// (0x00028782) mce_text_pane

0x37e6,	// (0x000217a1) scroll_pane_cp03

0xa6c0,	// (0x0002867b) scroll_pane_cp04

0xa7da,	// (0x00028795) scroll_pane_cp05_ParamLimits

0xa7da,	// (0x00028795) scroll_pane_cp05

0x37f0,	// (0x000217ab) mce_header_field_pane_ParamLimits

0x37f0,	// (0x000217ab) mce_header_field_pane

0x3810,	// (0x000217cb) mce_header_field_pane_2_ParamLimits

0x3810,	// (0x000217cb) mce_header_field_pane_2

0x3826,	// (0x000217e1) mce_header_field_pane_3

0x382e,	// (0x000217e9) list_single_mce_message_pane_ParamLimits

0x382e,	// (0x000217e9) list_single_mce_message_pane

0x385c,	// (0x00021817) list_single_mce_smart_pane_ParamLimits

0x385c,	// (0x00021817) list_single_mce_smart_pane

0xa7e6,	// (0x000287a1) input_focus_pane_cp03

0xa7ef,	// (0x000287aa) list_header_data_pane

0x3895,	// (0x00021850) mce_header_field_pane_t1

0x38a3,	// (0x0002185e) list_single_mce_header_pane_ParamLimits

0x38a3,	// (0x0002185e) list_single_mce_header_pane

0xa7f7,	// (0x000287b2) list_single_mce_header_pane_t1

0xa806,	// (0x000287c1) list_single_mce_message_pane_g1

0xa80e,	// (0x000287c9) list_single_mce_message_pane_t1

0x38f9,	// (0x000218b4) bg_cale_heading_pane_cp01_ParamLimits

0x38f9,	// (0x000218b4) bg_cale_heading_pane_cp01

0xa81c,	// (0x000287d7) bg_cale_pane_cp02_ParamLimits

0xa81c,	// (0x000287d7) bg_cale_pane_cp02

0x3947,	// (0x00021902) cale_month_corner_pane

0x3966,	// (0x00021921) cale_month_day_heading_pane_ParamLimits

0x3966,	// (0x00021921) cale_month_day_heading_pane

0x39cc,	// (0x00021987) cale_month_pane_g1_ParamLimits

0x39cc,	// (0x00021987) cale_month_pane_g1

0x3a0f,	// (0x000219ca) cale_month_pane_g2_ParamLimits

0x3a0f,	// (0x000219ca) cale_month_pane_g2

0x3a49,	// (0x00021a04) cale_month_pane_g3_ParamLimits

0x3a49,	// (0x00021a04) cale_month_pane_g3

0x3a99,	// (0x00021a54) cale_month_pane_g4_ParamLimits

0x3a99,	// (0x00021a54) cale_month_pane_g4

0x3ae9,	// (0x00021aa4) cale_month_pane_g5_ParamLimits

0x3ae9,	// (0x00021aa4) cale_month_pane_g5

0x3b39,	// (0x00021af4) cale_month_pane_g6_ParamLimits

0x3b39,	// (0x00021af4) cale_month_pane_g6

0x3b89,	// (0x00021b44) cale_month_pane_g7_ParamLimits

0x3b89,	// (0x00021b44) cale_month_pane_g7

0x3bf1,	// (0x00021bac) cale_month_pane_g8_ParamLimits

0x3bf1,	// (0x00021bac) cale_month_pane_g8

0x3c59,	// (0x00021c14) cale_month_pane_g9_ParamLimits

0x3c59,	// (0x00021c14) cale_month_pane_g9

0x3cb7,	// (0x00021c72) cale_month_pane_g10_ParamLimits

0x3cb7,	// (0x00021c72) cale_month_pane_g10

0x3d15,	// (0x00021cd0) cale_month_pane_g11_ParamLimits

0x3d15,	// (0x00021cd0) cale_month_pane_g11

0x3d69,	// (0x00021d24) cale_month_pane_g12_ParamLimits

0x3d69,	// (0x00021d24) cale_month_pane_g12

0x3dbf,	// (0x00021d7a) cale_month_pane_g13_ParamLimits

0x3dbf,	// (0x00021d7a) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0002d246) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0002d246) cale_month_pane_g

0x3e15,	// (0x00021dd0) cale_month_week_pane

0x3e39,	// (0x00021df4) grid_cale_month_pane_ParamLimits

0x3e39,	// (0x00021df4) grid_cale_month_pane

0x3e96,	// (0x00021e51) cale_month_day_heading_pane_t1

0x3f1c,	// (0x00021ed7) cale_month_day_heading_pane_t2

0x3f95,	// (0x00021f50) cale_month_day_heading_pane_t3

0x400e,	// (0x00021fc9) cale_month_day_heading_pane_t4

0x4087,	// (0x00022042) cale_month_day_heading_pane_t5

0x4100,	// (0x000220bb) cale_month_day_heading_pane_t6

0x4179,	// (0x00022134) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0002d261) cale_month_day_heading_pane_t

0xa4bc,	// (0x00028477) bg_cale_side_pane_cp01

0x420a,	// (0x000221c5) cale_month_week_pane_t1

0x4223,	// (0x000221de) cale_month_week_pane_t2

0x423c,	// (0x000221f7) cale_month_week_pane_t3

0x4255,	// (0x00022210) cale_month_week_pane_t4

0x4270,	// (0x0002222b) cale_month_week_pane_t5

0x4291,	// (0x0002224c) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0002d270) cale_month_week_pane_t

0x42b2,	// (0x0002226d) cell_cale_month_pane_ParamLimits

0x42b2,	// (0x0002226d) cell_cale_month_pane

0x12f9,	// (0x0001f2b4) cell_cale_month_pane_g1

0x1305,	// (0x0001f2c0) cell_cale_month_pane_t1_ParamLimits

0x1305,	// (0x0001f2c0) cell_cale_month_pane_t1

0xa4ca,	// (0x00028485) grid_highlight_pane_cp08

0xa379,	// (0x00028334) main_smil_g1

0x4402,	// (0x000223bd) smil_status_pane

0xa85b,	// (0x00028816) smil_text_pane

0xc1ba,	// (0x0002a175) bg_popup_call3_rect_pane_g8

0xc1c2,	// (0x0002a17d) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0002d529) bg_popup_call3_rect_pane_g

0xc449,	// (0x0002a404) smil_status_volume_pane_g1

0xa865,	// (0x00028820) smil_status_pane_t1

0x15cf,	// (0x0001f58a) volume_smil_pane

0xa87c,	// (0x00028837) list_smil_text_pane

0x4415,	// (0x000223d0) scroll_pane_cp011

0x4420,	// (0x000223db) smil_text_list_pane_t1_ParamLimits

0x4420,	// (0x000223db) smil_text_list_pane_t1

0x1331,	// (0x0001f2ec) aid_volume_smil_ParamLimits

0x1331,	// (0x0001f2ec) aid_volume_smil

0xa379,	// (0x00028334) smil_volume_pane_g1

0xa379,	// (0x00028334) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0002d290) smil_volume_pane_g

0x2b62,	// (0x00020b1d) listscroll_cale_day_pane

0xa886,	// (0x00028841) bg_cale_pane

0xa89e,	// (0x00028859) list_cale_pane

0xa8c1,	// (0x0002887c) scroll_pane_cp09

0xa8d2,	// (0x0002888d) cale_bg_pane_g1

0xa8da,	// (0x00028895) cale_bg_pane_g2

0xa8e2,	// (0x0002889d) cale_bg_pane_g3

0xa8ea,	// (0x000288a5) cale_bg_pane_g4

0xa8f2,	// (0x000288ad) cale_bg_pane_g5

0xa8fa,	// (0x000288b5) cale_bg_pane_g6

0xa902,	// (0x000288bd) cale_bg_pane_g7

0xa90a,	// (0x000288c5) cale_bg_pane_g8

0xa912,	// (0x000288cd) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0002d295) cale_bg_pane_g

0x44b5,	// (0x00022470) list_cale_time_pane_ParamLimits

0x44b5,	// (0x00022470) list_cale_time_pane

0xa91a,	// (0x000288d5) list_cale_time_pane_g1_ParamLimits

0xa91a,	// (0x000288d5) list_cale_time_pane_g1

0xa926,	// (0x000288e1) list_cale_time_pane_g2_ParamLimits

0xa926,	// (0x000288e1) list_cale_time_pane_g2

0x44dd,	// (0x00022498) list_cale_time_pane_g3_ParamLimits

0x44dd,	// (0x00022498) list_cale_time_pane_g3

0x44eb,	// (0x000224a6) list_cale_time_pane_g4_ParamLimits

0x44eb,	// (0x000224a6) list_cale_time_pane_g4

0x44f9,	// (0x000224b4) list_cale_time_pane_g5_ParamLimits

0x44f9,	// (0x000224b4) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0002d2a8) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0002d2a8) list_cale_time_pane_g

0xa940,	// (0x000288fb) list_cale_time_pane_t1_ParamLimits

0xa940,	// (0x000288fb) list_cale_time_pane_t1

0xa968,	// (0x00028923) list_cale_time_pane_t2_ParamLimits

0xa968,	// (0x00028923) list_cale_time_pane_t2

0x4852,	// (0x0002280d) aid_blid_cardinal_pane

0x4894,	// (0x0002284f) compass_pane_t4

0xa990,	// (0x0002894b) list_cale_time_pane_t4_ParamLimits

0xa990,	// (0x0002894b) list_cale_time_pane_t4

0x48a2,	// (0x0002285d) compass_pane_t5

0x48b2,	// (0x0002286d) compass_pane_t6

0x48c0,	// (0x0002287b) compass_pane_t7

0xae40,	// (0x00028dfb) navi_pane_cc_t1

0xb01d,	// (0x00028fd8) aid_phob_thumbnail_center_pane

0x4f1b,	// (0x00022ed6) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0002d2b5) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0002d2b5) list_cale_time_pane_t

0x9c4f,	// (0x00027c0a) bg_popup_window_pane_cp02_ParamLimits

0x9c4f,	// (0x00027c0a) bg_popup_window_pane_cp02

0xa9b8,	// (0x00028973) heading_pane_cp01_ParamLimits

0xa9b8,	// (0x00028973) heading_pane_cp01

0xa9c4,	// (0x0002897f) loc_req_pane_ParamLimits

0xa9c4,	// (0x0002897f) loc_req_pane

0xa9d4,	// (0x0002898f) loc_type_pane_ParamLimits

0xa9d4,	// (0x0002898f) loc_type_pane

0xa9e6,	// (0x000289a1) loc_type_pane_t1_ParamLimits

0xa9e6,	// (0x000289a1) loc_type_pane_t1

0xa9f8,	// (0x000289b3) loc_type_pane_t2_ParamLimits

0xa9f8,	// (0x000289b3) loc_type_pane_t2

0xaa0a,	// (0x000289c5) loc_type_pane_t3_ParamLimits

0xaa0a,	// (0x000289c5) loc_type_pane_t3

0x0002,

0xf301,	// (0x0002d2bc) loc_type_pane_t_ParamLimits

0xf301,	// (0x0002d2bc) loc_type_pane_t

0xaa1c,	// (0x000289d7) list_loc_req_pane

0xaa26,	// (0x000289e1) scroll_pane_cp012

0x4507,	// (0x000224c2) list_single_loc_request_popup_menu_pane_ParamLimits

0x4507,	// (0x000224c2) list_single_loc_request_popup_menu_pane

0xaa31,	// (0x000289ec) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa31,	// (0x000289ec) list_single_loc_request_popup_menu_pane_g1

0xaa3d,	// (0x000289f8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa3d,	// (0x000289f8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0002d2c3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0002d2c3) list_single_loc_request_popup_menu_pane_g

0xaa49,	// (0x00028a04) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa49,	// (0x00028a04) list_single_loc_request_popup_menu_pane_t1

0x451f,	// (0x000224da) bg_popup_window_pane_cp03_ParamLimits

0x451f,	// (0x000224da) bg_popup_window_pane_cp03

0x452d,	// (0x000224e8) heading_loc_req_pane_ParamLimits

0x452d,	// (0x000224e8) heading_loc_req_pane

0x4539,	// (0x000224f4) popup_dyc_status_message_window_g1_ParamLimits

0x4539,	// (0x000224f4) popup_dyc_status_message_window_g1

0x4545,	// (0x00022500) popup_dyc_status_message_window_t1_ParamLimits

0x4545,	// (0x00022500) popup_dyc_status_message_window_t1

0x4557,	// (0x00022512) popup_dyc_status_message_window_t2_ParamLimits

0x4557,	// (0x00022512) popup_dyc_status_message_window_t2

0x4569,	// (0x00022524) popup_dyc_status_message_window_t3_ParamLimits

0x4569,	// (0x00022524) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0002d2c8) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0002d2c8) popup_dyc_status_message_window_t

0x9ff8,	// (0x00027fb3) bg_heading_pane_cp01

0xaa5f,	// (0x00028a1a) heading_loc_req_pane_g1

0xaa67,	// (0x00028a22) heading_loc_req_pane_g2

0xaa6f,	// (0x00028a2a) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0002d2cf) heading_loc_req_pane_g

0xaa77,	// (0x00028a32) heading_loc_req_pane_t1

0xaa86,	// (0x00028a41) bg_popup_sub_pane_cp01_ParamLimits

0xaa86,	// (0x00028a41) bg_popup_sub_pane_cp01

0xaa94,	// (0x00028a4f) popup_cale_events_window_g1_ParamLimits

0xaa94,	// (0x00028a4f) popup_cale_events_window_g1

0xaab4,	// (0x00028a6f) popup_cale_events_window_g2_ParamLimits

0xaab4,	// (0x00028a6f) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0002d303) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0002d303) popup_cale_events_window_g

0xaad4,	// (0x00028a8f) popup_cale_events_window_t1_ParamLimits

0xaad4,	// (0x00028a8f) popup_cale_events_window_t1

0xaae6,	// (0x00028aa1) popup_cale_events_window_t2_ParamLimits

0xaae6,	// (0x00028aa1) popup_cale_events_window_t2

0xab24,	// (0x00028adf) popup_cale_events_window_t3_ParamLimits

0xab24,	// (0x00028adf) popup_cale_events_window_t3

0xab5e,	// (0x00028b19) popup_cale_events_window_t4_ParamLimits

0xab5e,	// (0x00028b19) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0002d308) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0002d308) popup_cale_events_window_t

0x4664,	// (0x0002261f) call_type_pane

0xabd0,	// (0x00028b8b) popup_call_status_window_g1

0x4670,	// (0x0002262b) popup_call_status_window_g2

0x467c,	// (0x00022637) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0002d311) popup_call_status_window_g

0xab94,	// (0x00028b4f) call_type_pane_g1

0xab9d,	// (0x00028b58) call_type_pane_g2

0x0001,

0xf35d,	// (0x0002d318) call_type_pane_g

0x9ff8,	// (0x00027fb3) bg_popup_sub_pane_cp02

0xabde,	// (0x00028b99) listscroll_popup_wml_pane

0xabe6,	// (0x00028ba1) list_wml_pane

0xabf0,	// (0x00028bab) scroll_pane_cp013

0xabfb,	// (0x00028bb6) list_single_graphic_popup_wml_pane_ParamLimits

0xabfb,	// (0x00028bb6) list_single_graphic_popup_wml_pane

0xa379,	// (0x00028334) list_single_graphic_popup_wml_pane_g1

0xac0f,	// (0x00028bca) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0002d31d) list_single_graphic_popup_wml_pane_g

0xac17,	// (0x00028bd2) list_single_graphic_popup_wml_pane_t1

0xac2d,	// (0x00028be8) aid_call_pane

0xa24b,	// (0x00028206) popup_clock_analogue_window_g1

0xa24b,	// (0x00028206) popup_clock_analogue_window_g2

0x1353,	// (0x0001f30e) popup_clock_analogue_window_g3

0x1353,	// (0x0001f30e) popup_clock_analogue_window_g4

0xa379,	// (0x00028334) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0002d322) popup_clock_analogue_window_g

0x135b,	// (0x0001f316) popup_clock_analogue_window_t1

0x1369,	// (0x0001f324) clock_digital_number_pane_ParamLimits

0x1369,	// (0x0001f324) clock_digital_number_pane

0x1375,	// (0x0001f330) clock_digital_number_pane_cp02_ParamLimits

0x1375,	// (0x0001f330) clock_digital_number_pane_cp02

0x1381,	// (0x0001f33c) clock_digital_number_pane_cp03_ParamLimits

0x1381,	// (0x0001f33c) clock_digital_number_pane_cp03

0x138d,	// (0x0001f348) clock_digital_number_pane_cp04_ParamLimits

0x138d,	// (0x0001f348) clock_digital_number_pane_cp04

0x1399,	// (0x0001f354) clock_digital_separator_pane_ParamLimits

0x1399,	// (0x0001f354) clock_digital_separator_pane

0x13a5,	// (0x0001f360) popup_clock_digital_window_t1

0xa379,	// (0x00028334) clock_digital_number_pane_g1

0xa379,	// (0x00028334) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0002d290) clock_digital_number_pane_g

0xa379,	// (0x00028334) clock_digital_separator_pane_g1

0xa379,	// (0x00028334) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0002d290) clock_digital_separator_pane_g

0x9ff8,	// (0x00027fb3) bg_popup_window_pane_cp04

0xac35,	// (0x00028bf0) heading_pane_cp03

0xac3d,	// (0x00028bf8) listscroll_popup_gms_pane

0xac45,	// (0x00028c00) grid_large_graphic_popup_pane

0xac4f,	// (0x00028c0a) listscroll_popup_gms_pane_g1

0xac57,	// (0x00028c12) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0002d32d) listscroll_popup_gms_pane_g

0xa6c0,	// (0x0002867b) scroll_pane_cp014

0x4688,	// (0x00022643) cell_large_graphic_popup_pane_ParamLimits

0x4688,	// (0x00022643) cell_large_graphic_popup_pane

0x46a0,	// (0x0002265b) cell_large_graphic_popup_pane_g1_ParamLimits

0x46a0,	// (0x0002265b) cell_large_graphic_popup_pane_g1

0xac5f,	// (0x00028c1a) cell_large_graphic_popup_pane_g2_ParamLimits

0xac5f,	// (0x00028c1a) cell_large_graphic_popup_pane_g2

0xac6b,	// (0x00028c26) cell_large_graphic_popup_pane_g3_ParamLimits

0xac6b,	// (0x00028c26) cell_large_graphic_popup_pane_g3

0xac78,	// (0x00028c33) cell_large_graphic_popup_pane_g4_ParamLimits

0xac78,	// (0x00028c33) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0002d332) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0002d332) cell_large_graphic_popup_pane_g

0xac88,	// (0x00028c43) grid_highlight_pane_cp010

0xa379,	// (0x00028334) bg_popup_call_pane_g1

0xac92,	// (0x00028c4d) list_single_graphic_popup_conf_pane_ParamLimits

0xac92,	// (0x00028c4d) list_single_graphic_popup_conf_pane

0xaca5,	// (0x00028c60) list_highlight_pane_cp01

0xacae,	// (0x00028c69) list_single_graphic_popup_conf_pane_g1

0xacb6,	// (0x00028c71) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0002d33b) list_single_graphic_popup_conf_pane_g

0xacbe,	// (0x00028c79) list_single_graphic_popup_conf_pane_t1

0xaccc,	// (0x00028c87) linegrid_cams_pane_g1

0x46ac,	// (0x00022667) linegrid_cams_pane_g2

0xa4fd,	// (0x000284b8) linegrid_cams_pane_g3

0xacd5,	// (0x00028c90) linegrid_cams_pane_g4

0x46b5,	// (0x00022670) linegrid_cams_pane_g5

0x46be,	// (0x00022679) linegrid_cams_pane_g6

0xa506,	// (0x000284c1) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0002d340) linegrid_cams_pane_g

0xacde,	// (0x00028c99) popup_clock_analogue_window

0xacde,	// (0x00028c99) popup_clock_digital_window

0x9ff8,	// (0x00027fb3) popup_phob_thumbnail_window

0xa379,	// (0x00028334) call_video_uplink_pane_g1

0xace7,	// (0x00028ca2) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0002d34f) call_video_uplink_pane_g

0xacef,	// (0x00028caa) video_uplink_pane

0xacf7,	// (0x00028cb2) mce_image_pane_g1

0x46c7,	// (0x00022682) mce_image_pane_g2

0x46cf,	// (0x0002268a) mce_image_pane_g3

0x46d7,	// (0x00022692) mce_image_pane_g4

0x46df,	// (0x0002269a) mce_image_pane_g5

0x0004,

0xf399,	// (0x0002d354) mce_image_pane_g

0xad01,	// (0x00028cbc) control_top_pane_stacon_cp01_ParamLimits

0xad01,	// (0x00028cbc) control_top_pane_stacon_cp01

0xad15,	// (0x00028cd0) uni_indicator_pane_stacon_cp01_ParamLimits

0xad15,	// (0x00028cd0) uni_indicator_pane_stacon_cp01

0xad26,	// (0x00028ce1) bg_popup_sub_pane_cp03

0x46e7,	// (0x000226a2) chi_dic_find_pane

0x46ef,	// (0x000226aa) listscroll_chi_dic_pane

0x46f8,	// (0x000226b3) main_pane_chidic_g1

0x470b,	// (0x000226c6) chi_dic_find_pane_t1

0xad30,	// (0x00028ceb) find_chidic_pane

0xad39,	// (0x00028cf4) chi_dic_list_pane_ParamLimits

0xad39,	// (0x00028cf4) chi_dic_list_pane

0xad4a,	// (0x00028d05) scroll_pane_cp020

0x4719,	// (0x000226d4) find_chidic_pane_t1

0x9ff8,	// (0x00027fb3) input_focus_pane_cp06

0x4728,	// (0x000226e3) list_chi_dic_pane_ParamLimits

0x4728,	// (0x000226e3) list_chi_dic_pane

0x4745,	// (0x00022700) list_chi_dic_pane_t1_ParamLimits

0x4745,	// (0x00022700) list_chi_dic_pane_t1

0x9ff8,	// (0x00027fb3) list_highlight_pane_cp020

0xad52,	// (0x00028d0d) bg_cale_heading_pane_g1

0x4758,	// (0x00022713) bg_cale_heading_pane_g2

0x4760,	// (0x0002271b) bg_cale_heading_pane_g3

0x4768,	// (0x00022723) bg_cale_heading_pane_g4

0x4772,	// (0x0002272d) bg_cale_heading_pane_g5

0x477c,	// (0x00022737) bg_cale_heading_pane_g6

0x4784,	// (0x0002273f) bg_cale_heading_pane_g7

0x478c,	// (0x00022747) bg_cale_heading_pane_g8

0x4796,	// (0x00022751) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0002d35f) bg_cale_heading_pane_g

0xad52,	// (0x00028d0d) bg_cale_side_pane_g1

0x47a0,	// (0x0002275b) bg_cale_side_pane_g2

0x47aa,	// (0x00022765) bg_cale_side_pane_g3

0x47b4,	// (0x0002276f) bg_cale_side_pane_g4

0x47be,	// (0x00022779) bg_cale_side_pane_g5

0x47c8,	// (0x00022783) bg_cale_side_pane_g6

0x47d2,	// (0x0002278d) bg_cale_side_pane_g7

0x47dc,	// (0x00022797) bg_cale_side_pane_g8

0x47e4,	// (0x0002279f) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0002d372) bg_cale_side_pane_g

0x47ec,	// (0x000227a7) popup_call_status_window_ParamLimits

0x47ec,	// (0x000227a7) popup_call_status_window

0xad5a,	// (0x00028d15) stacon_top_pane

0xad62,	// (0x00028d1d) status_pane_ParamLimits

0xad62,	// (0x00028d1d) status_pane

0xad77,	// (0x00028d32) status_small_pane

0xad7f,	// (0x00028d3a) control_pane

0x9ff8,	// (0x00027fb3) stacon_bottom_pane

0xad87,	// (0x00028d42) list_single_mce_smart_pane_t1_ParamLimits

0xad87,	// (0x00028d42) list_single_mce_smart_pane_t1

0xad9a,	// (0x00028d55) list_single_mce_smart_pane_t2_ParamLimits

0xad9a,	// (0x00028d55) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0002d385) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0002d385) list_single_mce_smart_pane_t

0x47f8,	// (0x000227b3) compass_pane

0x4804,	// (0x000227bf) main_location2_pane_t1

0x4818,	// (0x000227d3) main_location2_pane_t2

0x482c,	// (0x000227e7) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0002d38a) main_location2_pane_t

0xadb9,	// (0x00028d74) compass_pane_g1_ParamLimits

0xadb9,	// (0x00028d74) compass_pane_g1

0x4876,	// (0x00022831) compass_pane_t1

0x4885,	// (0x00022840) compass_pane_t2

0x0005,

0xf3d8,	// (0x0002d393) compass_pane_t

0x48d0,	// (0x0002288b) text_secondary_cp61

0xae37,	// (0x00028df2) navi_pane_cams_g5

0xaeb3,	// (0x00028e6e) navi_pane_im_t1

0xaec1,	// (0x00028e7c) navi_pane_mp_g1_ParamLimits

0xaec1,	// (0x00028e7c) navi_pane_mp_g1

0xaed5,	// (0x00028e90) navi_pane_mp_g2_ParamLimits

0xaed5,	// (0x00028e90) navi_pane_mp_g2

0xaee1,	// (0x00028e9c) navi_pane_mp_g3_ParamLimits

0xaee1,	// (0x00028e9c) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0002d3a7) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0002d3a7) navi_pane_mp_g

0xaeed,	// (0x00028ea8) navi_pane_mp_t1

0xaefb,	// (0x00028eb6) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0002d3ae) navi_pane_mp_t

0xaf66,	// (0x00028f21) navi_pane_vt_g1

0xaeed,	// (0x00028ea8) navi_pane_vt_t1

0xaf6e,	// (0x00028f29) navi_slider_pane

0xa517,	// (0x000284d2) zooming_pane

0xaf7e,	// (0x00028f39) navi_slider_pane_g1

0x13c2,	// (0x0001f37d) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0002d3b5) navi_slider_pane_g

0xafa2,	// (0x00028f5d) aid_levels_zoom

0xafaa,	// (0x00028f65) zooming_pane_g1

0xafb2,	// (0x00028f6d) zooming_pane_g2

0xafb2,	// (0x00028f6d) zooming_pane_g3

0x0002,

0xf409,	// (0x0002d3c4) zooming_pane_g

0xafba,	// (0x00028f75) level_10_zoom

0xafc3,	// (0x00028f7e) level_11_zoom

0xafcc,	// (0x00028f87) level_1_zoom

0xafd5,	// (0x00028f90) level_2_zoom

0xafde,	// (0x00028f99) level_3_zoom

0xafe7,	// (0x00028fa2) level_4_zoom

0xaff0,	// (0x00028fab) level_5_zoom

0xaff9,	// (0x00028fb4) level_6_zoom

0xb002,	// (0x00028fbd) level_7_zoom

0xb00b,	// (0x00028fc6) level_8_zoom

0xb014,	// (0x00028fcf) level_9_zoom

0xb025,	// (0x00028fe0) popup_phob_thumbnail_window_g1

0xb02d,	// (0x00028fe8) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0002d3cb) popup_phob_thumbnail_window_g

0xc35c,	// (0x0002a317) level_1_location

0xc364,	// (0x0002a31f) level_2_location

0xc36c,	// (0x0002a327) level_3_location

0xc374,	// (0x0002a32f) level_4_location

0xa517,	// (0x000284d2) level_5_location

0x490b,	// (0x000228c6) mce_icon_pane_g1

0x4913,	// (0x000228ce) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0002d3d0) mce_icon_pane_g

0x491b,	// (0x000228d6) main_mup_pane_g1_ParamLimits

0x491b,	// (0x000228d6) main_mup_pane_g1

0x4933,	// (0x000228ee) main_mup_pane_g2_ParamLimits

0x4933,	// (0x000228ee) main_mup_pane_g2

0x4947,	// (0x00022902) main_mup_pane_g3_ParamLimits

0x4947,	// (0x00022902) main_mup_pane_g3

0x495b,	// (0x00022916) main_mup_pane_g4_ParamLimits

0x495b,	// (0x00022916) main_mup_pane_g4

0x4977,	// (0x00022932) main_mup_pane_g5_ParamLimits

0x4977,	// (0x00022932) main_mup_pane_g5

0x4998,	// (0x00022953) main_mup_pane_g6_ParamLimits

0x4998,	// (0x00022953) main_mup_pane_g6

0x49b4,	// (0x0002296f) main_mup_pane_g7_ParamLimits

0x49b4,	// (0x0002296f) main_mup_pane_g7

0x49d0,	// (0x0002298b) main_mup_pane_g8_ParamLimits

0x49d0,	// (0x0002298b) main_mup_pane_g8

0x49ec,	// (0x000229a7) main_mup_pane_g9_ParamLimits

0x49ec,	// (0x000229a7) main_mup_pane_g9

0x4a0b,	// (0x000229c6) main_mup_pane_g10_ParamLimits

0x4a0b,	// (0x000229c6) main_mup_pane_g10

0x4a2a,	// (0x000229e5) main_mup_pane_g11_ParamLimits

0x4a2a,	// (0x000229e5) main_mup_pane_g11

0x4a42,	// (0x000229fd) main_mup_pane_g12_ParamLimits

0x4a42,	// (0x000229fd) main_mup_pane_g12

0x4a50,	// (0x00022a0b) main_mup_pane_g13_ParamLimits

0x4a50,	// (0x00022a0b) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0002d3d5) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0002d3d5) main_mup_pane_g

0x4a66,	// (0x00022a21) main_mup_pane_t1_ParamLimits

0x4a66,	// (0x00022a21) main_mup_pane_t1

0x4a83,	// (0x00022a3e) main_mup_pane_t2_ParamLimits

0x4a83,	// (0x00022a3e) main_mup_pane_t2

0x4a9d,	// (0x00022a58) main_mup_pane_t3_ParamLimits

0x4a9d,	// (0x00022a58) main_mup_pane_t3

0x4ab7,	// (0x00022a72) main_mup_pane_t4_ParamLimits

0x4ab7,	// (0x00022a72) main_mup_pane_t4

0x4ac9,	// (0x00022a84) main_mup_pane_t5_ParamLimits

0x4ac9,	// (0x00022a84) main_mup_pane_t5

0x4adb,	// (0x00022a96) main_mup_pane_t6_ParamLimits

0x4adb,	// (0x00022a96) main_mup_pane_t6

0x0005,

0xf435,	// (0x0002d3f0) main_mup_pane_t_ParamLimits

0xf435,	// (0x0002d3f0) main_mup_pane_t

0x4af1,	// (0x00022aac) mup_progress_pane_ParamLimits

0x4af1,	// (0x00022aac) mup_progress_pane

0x4afd,	// (0x00022ab8) mup_visualizer_pane_ParamLimits

0x4afd,	// (0x00022ab8) mup_visualizer_pane

0x4b3b,	// (0x00022af6) mup_volume_pane_ParamLimits

0x4b3b,	// (0x00022af6) mup_volume_pane

0xabd0,	// (0x00028b8b) mup_visualizer_pane_g1_ParamLimits

0xabd0,	// (0x00028b8b) mup_visualizer_pane_g1

0xabd0,	// (0x00028b8b) mup_visualizer_pane_g2_ParamLimits

0xabd0,	// (0x00028b8b) mup_visualizer_pane_g2

0xadb9,	// (0x00028d74) mup_visualizer_pane_g3_ParamLimits

0xadb9,	// (0x00028d74) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0002d3fd) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0002d3fd) mup_visualizer_pane_g

0xa379,	// (0x00028334) mup_volume_pane_g1

0xb03d,	// (0x00028ff8) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0002d404) mup_volume_pane_g

0xa379,	// (0x00028334) mup_progress_pane_g1

0xb046,	// (0x00029001) mup_progress_pane_g2

0xb04f,	// (0x0002900a) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0002d409) mup_progress_pane_g

0x9ff8,	// (0x00027fb3) bg_popup_window_pane_cp05

0xb058,	// (0x00029013) heading_pane_cp02_ParamLimits

0xb058,	// (0x00029013) heading_pane_cp02

0xb072,	// (0x0002902d) list_popup_blid_pane

0xb07a,	// (0x00029035) list_blid_sat_info_pane_ParamLimits

0xb07a,	// (0x00029035) list_blid_sat_info_pane

0xb08d,	// (0x00029048) list_blid_sat_info_pane_g1

0xb095,	// (0x00029050) list_blid_sat_info_pane_t1

0x4c46,	// (0x00022c01) mup_equalizer_pane_ParamLimits

0x4c46,	// (0x00022c01) mup_equalizer_pane

0x4c67,	// (0x00022c22) mup_equalizer_pane_cp1_ParamLimits

0x4c67,	// (0x00022c22) mup_equalizer_pane_cp1

0x4c88,	// (0x00022c43) mup_equalizer_pane_cp2_ParamLimits

0x4c88,	// (0x00022c43) mup_equalizer_pane_cp2

0x4ca9,	// (0x00022c64) mup_equalizer_pane_cp3_ParamLimits

0x4ca9,	// (0x00022c64) mup_equalizer_pane_cp3

0x4cca,	// (0x00022c85) mup_equalizer_pane_cp4_ParamLimits

0x4cca,	// (0x00022c85) mup_equalizer_pane_cp4

0x4ceb,	// (0x00022ca6) mup_equalizer_pane_cp5

0x4d01,	// (0x00022cbc) mup_equalizer_pane_cp6

0x4d19,	// (0x00022cd4) mup_equalizer_pane_cp7

0xc23a,	// (0x0002a1f5) bg_popup_call_poc_act_pane_g9

0xc242,	// (0x0002a1fd) bg_popup_call_poc_act_pane_g10

0xc24a,	// (0x0002a205) bg_popup_call_poc_act_pane_g11

0x000a,

0xa253,	// (0x0002820e) mup_scale_pane

0xa379,	// (0x00028334) mup_scale_pane_g1

0xb0a3,	// (0x0002905e) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0002d425) mup_scale_pane_g

0xb0c7,	// (0x00029082) msg_data_pane

0xb0cf,	// (0x0002908a) scroll_pane_cp017

0x4d43,	// (0x00022cfe) bg_list_pane_cp04_ParamLimits

0x4d43,	// (0x00022cfe) bg_list_pane_cp04

0xb0d7,	// (0x00029092) msg_data_pane_g1

0x4d67,	// (0x00022d22) msg_data_pane_g2

0x4d6f,	// (0x00022d2a) msg_data_pane_g3

0x4d77,	// (0x00022d32) msg_data_pane_g4

0x4d7f,	// (0x00022d3a) msg_data_pane_g5

0x4d87,	// (0x00022d42) msg_data_pane_g6

0x4d8f,	// (0x00022d4a) msg_data_pane_g7

0x0006,

0xf479,	// (0x0002d434) msg_data_pane_g

0x4d97,	// (0x00022d52) msg_text_pane_ParamLimits

0x4d97,	// (0x00022d52) msg_text_pane

0x4dea,	// (0x00022da5) qrid_highlight_pane_cp011_ParamLimits

0x4dea,	// (0x00022da5) qrid_highlight_pane_cp011

0x9ff8,	// (0x00027fb3) msg_body_pane

0x9ff8,	// (0x00027fb3) msg_header_pane

0xb0e8,	// (0x000290a3) input_focus_pane_cp07

0x4e12,	// (0x00022dcd) msg_header_pane_t1_ParamLimits

0x4e12,	// (0x00022dcd) msg_header_pane_t1

0x4e24,	// (0x00022ddf) msg_header_pane_t2_ParamLimits

0x4e24,	// (0x00022ddf) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0002d448) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0002d448) msg_header_pane_t

0xb0fd,	// (0x000290b8) msg_body_pane_g1

0x4e36,	// (0x00022df1) msg_body_pane_t1_ParamLimits

0x4e36,	// (0x00022df1) msg_body_pane_t1

0x4e67,	// (0x00022e22) msg_body_pane_t2_ParamLimits

0x4e67,	// (0x00022e22) msg_body_pane_t2

0x4e79,	// (0x00022e34) msg_body_pane_t3_ParamLimits

0x4e79,	// (0x00022e34) msg_body_pane_t3

0x0002,

0xf492,	// (0x0002d44d) msg_body_pane_t_ParamLimits

0xf492,	// (0x0002d44d) msg_body_pane_t

0x1404,	// (0x0001f3bf) main_viewer_pane_g1_ParamLimits

0x1404,	// (0x0001f3bf) main_viewer_pane_g1

0x1410,	// (0x0001f3cb) main_viewer_pane_g2_ParamLimits

0x1410,	// (0x0001f3cb) main_viewer_pane_g2

0x4ead,	// (0x00022e68) main_viewer_pane_g3_ParamLimits

0x4ead,	// (0x00022e68) main_viewer_pane_g3

0x4ebe,	// (0x00022e79) main_viewer_pane_g4_ParamLimits

0x4ebe,	// (0x00022e79) main_viewer_pane_g4

0x141c,	// (0x0001f3d7) main_viewer_pane_g5_ParamLimits

0x141c,	// (0x0001f3d7) main_viewer_pane_g5

0x141c,	// (0x0001f3d7) main_viewer_pane_g7_ParamLimits

0x141c,	// (0x0001f3d7) main_viewer_pane_g7

0xaa31,	// (0x000289ec) main_viewer_pane_g8_ParamLimits

0xaa31,	// (0x000289ec) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0002d45d) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0002d45d) main_viewer_pane_g

0xb105,	// (0x000290c0) viewer_content_pane_ParamLimits

0xb105,	// (0x000290c0) viewer_content_pane

0x4eef,	// (0x00022eaa) main_postcard_pane_g1_ParamLimits

0x4eef,	// (0x00022eaa) main_postcard_pane_g1

0x4efd,	// (0x00022eb8) main_postcard_pane_g2_ParamLimits

0x4efd,	// (0x00022eb8) main_postcard_pane_g2

0x4f0b,	// (0x00022ec6) main_postcard_pane_g3_ParamLimits

0x4f0b,	// (0x00022ec6) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0002d46e) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0002d46e) main_postcard_pane_g

0x4f1b,	// (0x00022ed6) main_postcard_pane_g4

0xc45c,	// (0x0002a417) smil_status_volume_pane_g2

0x4f47,	// (0x00022f02) postcard_pane_ParamLimits

0x4f47,	// (0x00022f02) postcard_pane

0xabd0,	// (0x00028b8b) postcard_pane_g1_ParamLimits

0xabd0,	// (0x00028b8b) postcard_pane_g1

0x4f79,	// (0x00022f34) postcard_pane_g2_ParamLimits

0x4f79,	// (0x00022f34) postcard_pane_g2

0x4f85,	// (0x00022f40) postcard_pane_g3_ParamLimits

0x4f85,	// (0x00022f40) postcard_pane_g3

0xb113,	// (0x000290ce) postcard_pane_g4_ParamLimits

0xb113,	// (0x000290ce) postcard_pane_g4

0x4f91,	// (0x00022f4c) postcard_pane_g5_ParamLimits

0x4f91,	// (0x00022f4c) postcard_pane_g5

0x4f9d,	// (0x00022f58) postcard_pane_g6_ParamLimits

0x4f9d,	// (0x00022f58) postcard_pane_g6

0xb121,	// (0x000290dc) postcard_pane_g7_ParamLimits

0xb121,	// (0x000290dc) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0002d47b) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0002d47b) postcard_pane_g

0x4fa9,	// (0x00022f64) main_mp2_pane_g1_ParamLimits

0x4fa9,	// (0x00022f64) main_mp2_pane_g1

0x4fb5,	// (0x00022f70) main_mp2_pane_g2_ParamLimits

0x4fb5,	// (0x00022f70) main_mp2_pane_g2

0x4fc1,	// (0x00022f7c) main_mp2_pane_g3_ParamLimits

0x4fc1,	// (0x00022f7c) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0002d48a) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0002d48a) main_mp2_pane_g

0x4fcd,	// (0x00022f88) main_mp2_pane_t1_ParamLimits

0x4fcd,	// (0x00022f88) main_mp2_pane_t1

0x4fe4,	// (0x00022f9f) main_mp2_pane_t2_ParamLimits

0x4fe4,	// (0x00022f9f) main_mp2_pane_t2

0x4ff6,	// (0x00022fb1) main_mp2_pane_t3_ParamLimits

0x4ff6,	// (0x00022fb1) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0002d491) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0002d491) main_mp2_pane_t

0xb12f,	// (0x000290ea) pec_content_pane_ParamLimits

0xb12f,	// (0x000290ea) pec_content_pane

0xa6c0,	// (0x0002867b) scroll_pane_cp015

0xb141,	// (0x000290fc) pec_attribute_pane_ParamLimits

0xb141,	// (0x000290fc) pec_attribute_pane

0x5008,	// (0x00022fc3) pec_content_pane_g1_ParamLimits

0x5008,	// (0x00022fc3) pec_content_pane_g1

0xb151,	// (0x0002910c) pec_content_pane_t1_ParamLimits

0xb151,	// (0x0002910c) pec_content_pane_t1

0xb163,	// (0x0002911e) pec_content_pane_t2_ParamLimits

0xb163,	// (0x0002911e) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0002d498) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0002d498) pec_content_pane_t

0x5014,	// (0x00022fcf) list_single_graphic_pane_cp01_ParamLimits

0x5014,	// (0x00022fcf) list_single_graphic_pane_cp01

0xa253,	// (0x0002820e) bg_popup_sub_pane_cp04

0xb175,	// (0x00029130) popup_mup_playback_window_g1

0xb181,	// (0x0002913c) popup_mup_playback_window_t1

0xb196,	// (0x00029151) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0002d49d) popup_mup_playback_window_t

0xb1cd,	// (0x00029188) main_image_pane_g1_ParamLimits

0xb1cd,	// (0x00029188) main_image_pane_g1

0xb210,	// (0x000291cb) scroll_pane_cp018_ParamLimits

0xb210,	// (0x000291cb) scroll_pane_cp018

0xb228,	// (0x000291e3) scroll_pane_cp016_ParamLimits

0xb228,	// (0x000291e3) scroll_pane_cp016

0x50ae,	// (0x00023069) smil2_image_pane_ParamLimits

0x50ae,	// (0x00023069) smil2_image_pane

0x50de,	// (0x00023099) smil2_root_pane_ParamLimits

0x50de,	// (0x00023099) smil2_root_pane

0x510a,	// (0x000230c5) smil2_text_pane_ParamLimits

0x510a,	// (0x000230c5) smil2_text_pane

0x9ff8,	// (0x00027fb3) bg_list_pane_cp06

0xb264,	// (0x0002921f) grid_radio_pane

0x9ff8,	// (0x00027fb3) bg_popup_window_pane_cp06

0xb26c,	// (0x00029227) main_fmradio_pane_t1

0xac35,	// (0x00028bf0) heading_pane_cp04

0xb27a,	// (0x00029235) main_fmradio_pane_t2

0xc292,	// (0x0002a24d) popup_cale_lunar_info_window_g1

0xb288,	// (0x00029243) main_fmradio_pane_t3

0xc29a,	// (0x0002a255) popup_cale_lunar_info_window_g2

0xb296,	// (0x00029251) main_fmradio_pane_t4

0x0001,

0xb2a4,	// (0x0002925f) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0002d58b) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0002d4b2) main_fmradio_pane_t

0xb2b2,	// (0x0002926d) wait_bar_pane_cp03

0xb2ba,	// (0x00029275) cell_fmradio_pane_ParamLimits

0xb2ba,	// (0x00029275) cell_fmradio_pane

0xb121,	// (0x000290dc) cell_fmradio_pane_g1_ParamLimits

0xb121,	// (0x000290dc) cell_fmradio_pane_g1

0x9ff8,	// (0x00027fb3) grid_highlight_pane_cp011

0xb2cd,	// (0x00029288) poc_content_pane_ParamLimits

0xb2cd,	// (0x00029288) poc_content_pane

0xb2df,	// (0x0002929a) scroll_pane_cp019

0x514a,	// (0x00023105) popup_call_poc_act_window_ParamLimits

0x514a,	// (0x00023105) popup_call_poc_act_window

0x5157,	// (0x00023112) popup_call_poc_inact_window_ParamLimits

0x5157,	// (0x00023112) popup_call_poc_inact_window

0xf594,	// (0x0002d54f) bg_popup_call_poc_act_pane_g

0xc252,	// (0x0002a20d) bg_popup_call_poc_inact_pane_g1

0xc25a,	// (0x0002a215) bg_popup_call_poc_inact_pane_g2

0xb2e7,	// (0x000292a2) popup_call_poc_act_window_g2

0xc262,	// (0x0002a21d) bg_popup_call_poc_inact_pane_g3

0xc1e2,	// (0x0002a19d) bg_popup_call_poc_inact_pane_g4

0xc26a,	// (0x0002a225) bg_popup_call_poc_inact_pane_g5

0xb2ef,	// (0x000292aa) popup_call_poc_act_window_t1_ParamLimits

0xb2ef,	// (0x000292aa) popup_call_poc_act_window_t1

0xb317,	// (0x000292d2) popup_call_poc_act_window_t2_ParamLimits

0xb317,	// (0x000292d2) popup_call_poc_act_window_t2

0xb33f,	// (0x000292fa) popup_call_poc_act_window_t3_ParamLimits

0xb33f,	// (0x000292fa) popup_call_poc_act_window_t3

0xb367,	// (0x00029322) popup_call_poc_act_window_t4_ParamLimits

0xb367,	// (0x00029322) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0002d4bd) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0002d4bd) popup_call_poc_act_window_t

0xc272,	// (0x0002a22d) bg_popup_call_poc_inact_pane_g6

0xc27a,	// (0x0002a235) bg_popup_call_poc_inact_pane_g7

0xc282,	// (0x0002a23d) bg_popup_call_poc_inact_pane_g8

0xb379,	// (0x00029334) popup_call_poc_inact_window_g2

0xc28a,	// (0x0002a245) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0002d566) bg_popup_call_poc_inact_pane_g

0xb381,	// (0x0002933c) popup_call_poc_inact_window_t1_ParamLimits

0xb381,	// (0x0002933c) popup_call_poc_inact_window_t1

0xb396,	// (0x00029351) popup_call_poc_inact_window_t2_ParamLimits

0xb396,	// (0x00029351) popup_call_poc_inact_window_t2

0xb3ab,	// (0x00029366) popup_call_poc_inact_window_t3_ParamLimits

0xb3ab,	// (0x00029366) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0002d4c6) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0002d4c6) popup_call_poc_inact_window_t

0xc3cf,	// (0x0002a38a) context_pane_ParamLimits

0x5613,	// (0x000235ce) signal_pane_ParamLimits

0xa517,	// (0x000284d2) main_call2_pane

0x1573,	// (0x0001f52e) popup_phob_thumbnail2_window_ParamLimits

0x1573,	// (0x0001f52e) popup_phob_thumbnail2_window

0x13d4,	// (0x0001f38f) aid_hotspot_pointer_arrow_pane

0x13dc,	// (0x0001f397) aid_hotspot_pointer_hand_pane

0x547f,	// (0x0002343a) phob_pre_status_pane_g5

0x2f6e,	// (0x00020f29) cams_zoom_pane_ParamLimits

0x2f7a,	// (0x00020f35) image_vga_pane_ParamLimits

0x2f89,	// (0x00020f44) main_camera_pane_g1_ParamLimits

0x2f97,	// (0x00020f52) main_camera_pane_g2_ParamLimits

0x2fa3,	// (0x00020f5e) main_camera_pane_g3_ParamLimits

0x2faf,	// (0x00020f6a) main_camera_pane_g4_ParamLimits

0x2fbb,	// (0x00020f76) main_camera_pane_g5_ParamLimits

0x2fc7,	// (0x00020f82) main_camera_pane_g6_ParamLimits

0x2fd3,	// (0x00020f8e) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0002d1c5) main_camera_pane_g_ParamLimits

0x2fdf,	// (0x00020f9a) main_camera_pane_t1_ParamLimits

0x2ff1,	// (0x00020fac) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0002d1d6) main_camera_pane_t_ParamLimits

0xa253,	// (0x0002820e) bg_popup_preview_window_pane_cp01_ParamLimits

0xa253,	// (0x0002820e) bg_popup_preview_window_pane_cp01

0xb3c0,	// (0x0002937b) popup_phob_thumbnail2_window_g1_ParamLimits

0xb3c0,	// (0x0002937b) popup_phob_thumbnail2_window_g1

0x9ff8,	// (0x00027fb3) call2_cli_visual_pane

0x5173,	// (0x0002312e) popup_call2_audio_conf_window_ParamLimits

0x5173,	// (0x0002312e) popup_call2_audio_conf_window

0x5188,	// (0x00023143) popup_call2_audio_first_window_ParamLimits

0x5188,	// (0x00023143) popup_call2_audio_first_window

0x5226,	// (0x000231e1) popup_call2_audio_in_window_ParamLimits

0x5226,	// (0x000231e1) popup_call2_audio_in_window

0x5268,	// (0x00023223) popup_call2_audio_out_window_ParamLimits

0x5268,	// (0x00023223) popup_call2_audio_out_window

0x52ca,	// (0x00023285) popup_call2_audio_second_window_ParamLimits

0x52ca,	// (0x00023285) popup_call2_audio_second_window

0x5328,	// (0x000232e3) popup_call2_audio_wait_window_ParamLimits

0x5328,	// (0x000232e3) popup_call2_audio_wait_window

0x9ff8,	// (0x00027fb3) bg_popup_call2_act_pane_cp03

0xa235,	// (0x000281f0) list_conf_pane_cp

0xb3cc,	// (0x00029387) popup_call2_audio_conf_window_t1

0xb3da,	// (0x00029395) list_single_graphic_popup_conf2_pane_ParamLimits

0xb3da,	// (0x00029395) list_single_graphic_popup_conf2_pane

0xaca5,	// (0x00028c60) list_highlight_pane_cp04

0xb3ed,	// (0x000293a8) list_single_graphic_popup_conf2_pane_g1

0xacb6,	// (0x00028c71) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0002d4cd) list_single_graphic_popup_conf2_pane_g

0xb3f7,	// (0x000293b2) list_single_graphic_popup_conf2_pane_t1

0xb405,	// (0x000293c0) bg_popup_call2_act_pane_cp01_ParamLimits

0xb405,	// (0x000293c0) bg_popup_call2_act_pane_cp01

0xb48f,	// (0x0002944a) call_type_pane_cp05_ParamLimits

0xb48f,	// (0x0002944a) call_type_pane_cp05

0xb4e3,	// (0x0002949e) popup_call2_audio_second_window_g1_ParamLimits

0xb4e3,	// (0x0002949e) popup_call2_audio_second_window_g1

0xb537,	// (0x000294f2) popup_call2_audio_second_window_g2_ParamLimits

0xb537,	// (0x000294f2) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0002d4d2) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0002d4d2) popup_call2_audio_second_window_g

0xb59c,	// (0x00029557) popup_call2_audio_second_window_t1_ParamLimits

0xb59c,	// (0x00029557) popup_call2_audio_second_window_t1

0xb657,	// (0x00029612) popup_call2_audio_second_window_t2_ParamLimits

0xb657,	// (0x00029612) popup_call2_audio_second_window_t2

0xb6aa,	// (0x00029665) popup_call2_audio_second_window_t3_ParamLimits

0xb6aa,	// (0x00029665) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0002d4d9) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0002d4d9) popup_call2_audio_second_window_t

0x9ff8,	// (0x00027fb3) bg_popup_call2_in_pane_cp02

0xa002,	// (0x00027fbd) call_type_pane_cp04

0xa00a,	// (0x00027fc5) popup_call2_audio_wait_window_g1

0xa012,	// (0x00027fcd) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002d0b4) popup_call2_audio_wait_window_g

0xa01a,	// (0x00027fd5) popup_call2_audio_wait_window_t3

0xb79d,	// (0x00029758) bg_popup_call2_act_pane_ParamLimits

0xb79d,	// (0x00029758) bg_popup_call2_act_pane

0xb85d,	// (0x00029818) call_type_pane_cp03_ParamLimits

0xb85d,	// (0x00029818) call_type_pane_cp03

0xb8c1,	// (0x0002987c) popup_call2_audio_first_window_g1_ParamLimits

0xb8c1,	// (0x0002987c) popup_call2_audio_first_window_g1

0xb931,	// (0x000298ec) popup_call2_audio_first_window_g2_ParamLimits

0xb931,	// (0x000298ec) popup_call2_audio_first_window_g2

0xabd0,	// (0x00028b8b) popup_call2_audio_first_window_g3_ParamLimits

0xabd0,	// (0x00028b8b) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0002d4e2) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0002d4e2) popup_call2_audio_first_window_g

0xba0f,	// (0x000299ca) popup_call2_audio_first_window_t1_ParamLimits

0xba0f,	// (0x000299ca) popup_call2_audio_first_window_t1

0xbb12,	// (0x00029acd) popup_call2_audio_first_window_t4_ParamLimits

0xbb12,	// (0x00029acd) popup_call2_audio_first_window_t4

0xbbf5,	// (0x00029bb0) popup_call2_audio_first_window_t5_ParamLimits

0xbbf5,	// (0x00029bb0) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0002d4ed) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0002d4ed) popup_call2_audio_first_window_t

0xa24b,	// (0x00028206) bg_popup_call2_act_pane_g1

0xc2a2,	// (0x0002a25d) popup_cale_lunar_info_window_t1

0xc2b0,	// (0x0002a26b) popup_cale_lunar_info_window_t2

0xc2be,	// (0x0002a279) popup_cale_lunar_info_window_t3

0x9ff8,	// (0x00027fb3) bg_popup_call2_bubble_pane

0xbcf6,	// (0x00029cb1) bg_popup_call2_in_pane_cp01_ParamLimits

0xbcf6,	// (0x00029cb1) bg_popup_call2_in_pane_cp01

0x9cd4,	// (0x00027c8f) call_type_pane_cp02

0xbd3e,	// (0x00029cf9) popup_call2_audio_out_window_g1_ParamLimits

0xbd3e,	// (0x00029cf9) popup_call2_audio_out_window_g1

0xbd6a,	// (0x00029d25) popup_call2_audio_out_window_g2_ParamLimits

0xbd6a,	// (0x00029d25) popup_call2_audio_out_window_g2

0xbd92,	// (0x00029d4d) popup_call2_audio_out_window_g3_ParamLimits

0xbd92,	// (0x00029d4d) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0002d4f6) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0002d4f6) popup_call2_audio_out_window_g

0xbdcd,	// (0x00029d88) popup_call2_audio_out_window_t1_ParamLimits

0xbdcd,	// (0x00029d88) popup_call2_audio_out_window_t1

0xbe2c,	// (0x00029de7) popup_call2_audio_out_window_t2_ParamLimits

0xbe2c,	// (0x00029de7) popup_call2_audio_out_window_t2

0xbe80,	// (0x00029e3b) popup_call2_audio_out_window_t3_ParamLimits

0xbe80,	// (0x00029e3b) popup_call2_audio_out_window_t3

0xbe96,	// (0x00029e51) popup_call2_audio_out_window_t4_ParamLimits

0xbe96,	// (0x00029e51) popup_call2_audio_out_window_t4

0xbeac,	// (0x00029e67) popup_call2_audio_out_window_t5_ParamLimits

0xbeac,	// (0x00029e67) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0002d4ff) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0002d4ff) popup_call2_audio_out_window_t

0xbf10,	// (0x00029ecb) bg_popup_call2_in_pane_ParamLimits

0xbf10,	// (0x00029ecb) bg_popup_call2_in_pane

0xbf6c,	// (0x00029f27) popup_call2_audio_in_window_g1_ParamLimits

0xbf6c,	// (0x00029f27) popup_call2_audio_in_window_g1

0xbfa4,	// (0x00029f5f) popup_call2_audio_in_window_g2_ParamLimits

0xbfa4,	// (0x00029f5f) popup_call2_audio_in_window_g2

0xbfdc,	// (0x00029f97) popup_call2_audio_in_window_g3_ParamLimits

0xbfdc,	// (0x00029f97) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0002d50c) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0002d50c) popup_call2_audio_in_window_g

0xc034,	// (0x00029fef) popup_call2_audio_in_window_t1_ParamLimits

0xc034,	// (0x00029fef) popup_call2_audio_in_window_t1

0xc0b4,	// (0x0002a06f) popup_call2_audio_in_window_t2_ParamLimits

0xc0b4,	// (0x0002a06f) popup_call2_audio_in_window_t2

0xc134,	// (0x0002a0ef) popup_call2_audio_in_window_t3_ParamLimits

0xc134,	// (0x0002a0ef) popup_call2_audio_in_window_t3

0xc14e,	// (0x0002a109) popup_call2_audio_in_window_t4_ParamLimits

0xc14e,	// (0x0002a109) popup_call2_audio_in_window_t4

0xc160,	// (0x0002a11b) popup_call2_audio_in_window_t5_ParamLimits

0xc160,	// (0x0002a11b) popup_call2_audio_in_window_t5

0xc175,	// (0x0002a130) popup_call2_audio_in_window_t6_ParamLimits

0xc175,	// (0x0002a130) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0002d515) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0002d515) popup_call2_audio_in_window_t

0xa24b,	// (0x00028206) bg_popup_call2_in_pane_g1

0xc2cc,	// (0x0002a287) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0002d590) popup_cale_lunar_info_window_t

0xa253,	// (0x0002820e) bg_popup_call2_rect_pane_ParamLimits

0xa253,	// (0x0002820e) bg_popup_call2_rect_pane

0x9ff8,	// (0x00027fb3) call2_cli_visual_graphic_pane

0x9ff8,	// (0x00027fb3) call2_cli_visual_text_pane

0x15c2,	// (0x0001f57d) smil_status_volume_pane_g3

0x0002,

0xa379,	// (0x00028334) call2_cli_visual_graphic_pane_g1

0xa379,	// (0x00028334) call2_cli_visual_graphic_pane_g2

0xa379,	// (0x00028334) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0002d522) call2_cli_visual_graphic_pane_g

0xc18a,	// (0x0002a145) bg_popup_call2_rect_pane_g1

0xa425,	// (0x000283e0) bg_popup_call2_rect_pane_g2

0xc192,	// (0x0002a14d) bg_popup_call2_rect_pane_g3

0xc19a,	// (0x0002a155) bg_popup_call2_rect_pane_g4

0xc1a2,	// (0x0002a15d) bg_popup_call2_rect_pane_g5

0xc1aa,	// (0x0002a165) bg_popup_call2_rect_pane_g6

0xc1b2,	// (0x0002a16d) bg_popup_call2_rect_pane_g7

0xc1ba,	// (0x0002a175) bg_popup_call2_rect_pane_g8

0xc1c2,	// (0x0002a17d) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0002d529) bg_popup_call2_rect_pane_g

0xc1ca,	// (0x0002a185) bg_popup_call2_bubble_pane_g1

0xc1d2,	// (0x0002a18d) bg_popup_call2_bubble_pane_g2

0xc1da,	// (0x0002a195) bg_popup_call2_bubble_pane_g3

0xc1e2,	// (0x0002a19d) bg_popup_call2_bubble_pane_g4

0xc1ea,	// (0x0002a1a5) bg_popup_call2_bubble_pane_g5

0xc1f2,	// (0x0002a1ad) bg_popup_call2_bubble_pane_g6

0xc1fa,	// (0x0002a1b5) bg_popup_call2_bubble_pane_g7

0xc202,	// (0x0002a1bd) bg_popup_call2_bubble_pane_g8

0xc20a,	// (0x0002a1c5) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0002d53c) bg_popup_call2_bubble_pane_g

0x2b72,	// (0x00020b2d) aid_cale_week_size_cell_pane

0x3003,	// (0x00020fbe) aid_cams_cif_uncrop_pane_ParamLimits

0x3003,	// (0x00020fbe) aid_cams_cif_uncrop_pane

0x315e,	// (0x00021119) aid_cams_size_cell_ParamLimits

0x315e,	// (0x00021119) aid_cams_size_cell

0x316a,	// (0x00021125) grid_cams_pane_ParamLimits

0x3178,	// (0x00021133) linegrid_cams_pane_ParamLimits

0x3364,	// (0x0002131f) call_video_pane_t1

0x3385,	// (0x00021340) call_video_pane_t2

0x0001,

0xf26e,	// (0x0002d229) call_video_pane_t

0x38d3,	// (0x0002188e) aid_cale_month_size_cell_pane_ParamLimits

0x38d3,	// (0x0002188e) aid_cale_month_size_cell_pane

0xf61e,	// (0x0002d5d9) smil_status_volume_pane_g

0x15cf,	// (0x0001f58a) volume_smil_pane_ParamLimits

0x0d71,	// (0x0001ed2c) aid_popup2_width_pane

0x2ab4,	// (0x00020a6f) cell_qdial_pane_g4_ParamLimits

0x2ab4,	// (0x00020a6f) cell_qdial_pane_g4

0x4852,	// (0x0002280d) aid_blid_cardinal_pane_ParamLimits

0x4862,	// (0x0002281d) aid_blid_destination_pane_ParamLimits

0x4862,	// (0x0002281d) aid_blid_destination_pane

0xa253,	// (0x0002820e) bg_popup_call_poc_act_pane_ParamLimits

0xa253,	// (0x0002820e) bg_popup_call_poc_act_pane

0xa253,	// (0x0002820e) bg_popup_call_poc_inact_pane_ParamLimits

0xa253,	// (0x0002820e) bg_popup_call_poc_inact_pane

0xc212,	// (0x0002a1cd) bg_popup_call_poc_act_pane_g1

0xc21a,	// (0x0002a1d5) bg_popup_call_poc_act_pane_g2

0xc222,	// (0x0002a1dd) bg_popup_call_poc_act_pane_g3

0xc1e2,	// (0x0002a19d) bg_popup_call_poc_act_pane_g4

0xc1ea,	// (0x0002a1a5) bg_popup_call_poc_act_pane_g5

0xc22a,	// (0x0002a1e5) bg_popup_call_poc_act_pane_g6

0xc1fa,	// (0x0002a1b5) bg_popup_call_poc_act_pane_g7

0xc232,	// (0x0002a1ed) bg_popup_call_poc_act_pane_g8

0x9ff8,	// (0x00027fb3) main_usb_pane

0x14a6,	// (0x0001f461) popup_cale_lunar_info_window

0x36a2,	// (0x0002165d) im_reading_pane_t1_ParamLimits

0xa618,	// (0x000285d3) list_im_pane_ParamLimits

0xa629,	// (0x000285e4) scroll_pane_cp07_ParamLimits

0x9ff8,	// (0x00027fb3) grid_highlight_pane_cp012

0xa253,	// (0x0002820e) mup_scale_pane_ParamLimits

0xabd0,	// (0x00028b8b) main_usb_pane_g1_ParamLimits

0xabd0,	// (0x00028b8b) main_usb_pane_g1

0x53a2,	// (0x0002335d) main_usb_pane_g2_ParamLimits

0x53a2,	// (0x0002335d) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0002d579) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0002d579) main_usb_pane_g

0x53ae,	// (0x00023369) main_usb_pane_t1_ParamLimits

0x53ae,	// (0x00023369) main_usb_pane_t1

0x53c0,	// (0x0002337b) main_usb_pane_t2_ParamLimits

0x53c0,	// (0x0002337b) main_usb_pane_t2

0x53d2,	// (0x0002338d) main_usb_pane_t3_ParamLimits

0x53d2,	// (0x0002338d) main_usb_pane_t3

0x53e4,	// (0x0002339f) main_usb_pane_t4_ParamLimits

0x53e4,	// (0x0002339f) main_usb_pane_t4

0x53f6,	// (0x000233b1) main_usb_pane_t5_ParamLimits

0x53f6,	// (0x000233b1) main_usb_pane_t5

0x5408,	// (0x000233c3) main_usb_pane_t6_ParamLimits

0x5408,	// (0x000233c3) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0002d57e) main_usb_pane_t_ParamLimits

0x47f8,	// (0x000227b3) aid_text_placing

0x4804,	// (0x000227bf) main_location2_pane_t1_ParamLimits

0x4818,	// (0x000227d3) main_location2_pane_t2_ParamLimits

0x482c,	// (0x000227e7) main_location2_pane_t3_ParamLimits

0x4840,	// (0x000227fb) main_location2_pane_t4_ParamLimits

0x4840,	// (0x000227fb) main_location2_pane_t4

0xf3cf,	// (0x0002d38a) main_location2_pane_t_ParamLimits

0xa28f,	// (0x0002824a) find_pinb_pane_g2_ParamLimits

0xa28f,	// (0x0002824a) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0002d0da) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0002d0da) find_pinb_pane_g

0xa29b,	// (0x00028256) find_pinb_pane_t1_ParamLimits

0xa2ad,	// (0x00028268) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0002d0df) find_pinb_pane_t_ParamLimits

0x9ff8,	// (0x00027fb3) main_call3_pane

0x3e96,	// (0x00021e51) cale_month_day_heading_pane_t1_ParamLimits

0x3f1c,	// (0x00021ed7) cale_month_day_heading_pane_t2_ParamLimits

0x3f95,	// (0x00021f50) cale_month_day_heading_pane_t3_ParamLimits

0x400e,	// (0x00021fc9) cale_month_day_heading_pane_t4_ParamLimits

0x4087,	// (0x00022042) cale_month_day_heading_pane_t5_ParamLimits

0x4100,	// (0x000220bb) cale_month_day_heading_pane_t6_ParamLimits

0x4179,	// (0x00022134) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0002d261) cale_month_day_heading_pane_t_ParamLimits

0xa873,	// (0x0002882e) smil_status_volume_pane

0x4f61,	// (0x00022f1c) postcard_address_pane_ParamLimits

0x4f61,	// (0x00022f1c) postcard_address_pane

0x4f6d,	// (0x00022f28) postcard_message_pane_ParamLimits

0x4f6d,	// (0x00022f28) postcard_message_pane

0x5367,	// (0x00023322) call2_cli_visual_pane_t1_ParamLimits

0x5367,	// (0x00023322) call2_cli_visual_pane_t1

0x57fe,	// (0x000237b9) postcard_message_pane_t1_ParamLimits

0x57fe,	// (0x000237b9) postcard_message_pane_t1

0x57e7,	// (0x000237a2) postcard_address_pane_t1_ParamLimits

0x57e7,	// (0x000237a2) postcard_address_pane_t1

0x57d8,	// (0x00023793) popup_call3_audio_in_window_ParamLimits

0x57d8,	// (0x00023793) popup_call3_audio_in_window

0x56bc,	// (0x00023677) bg_popup_call3_in_pane_ParamLimits

0x56bc,	// (0x00023677) bg_popup_call3_in_pane

0x571e,	// (0x000236d9) popup_call3_audio_in_window_g1_ParamLimits

0x571e,	// (0x000236d9) popup_call3_audio_in_window_g1

0x5736,	// (0x000236f1) popup_call3_audio_in_window_g2_ParamLimits

0x5736,	// (0x000236f1) popup_call3_audio_in_window_g2

0x574e,	// (0x00023709) popup_call3_audio_in_window_g3_ParamLimits

0x574e,	// (0x00023709) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0002d5e0) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0002d5e0) popup_call3_audio_in_window_g

0x5776,	// (0x00023731) popup_call3_audio_in_window_t1_ParamLimits

0x5776,	// (0x00023731) popup_call3_audio_in_window_t1

0x579e,	// (0x00023759) popup_call3_audio_in_window_t2_ParamLimits

0x579e,	// (0x00023759) popup_call3_audio_in_window_t2

0x57c6,	// (0x00023781) popup_call3_audio_in_window_t3_ParamLimits

0x57c6,	// (0x00023781) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0002d5e9) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0002d5e9) popup_call3_audio_in_window_t

0xa517,	// (0x000284d2) bg_popup_call3_rect_pane

0xc18a,	// (0x0002a145) bg_popup_call3_rect_pane_g1

0xa425,	// (0x000283e0) bg_popup_call3_rect_pane_g2

0xc192,	// (0x0002a14d) bg_popup_call3_rect_pane_g3

0xc19a,	// (0x0002a155) bg_popup_call3_rect_pane_g4

0xc1a2,	// (0x0002a15d) bg_popup_call3_rect_pane_g5

0xc1aa,	// (0x0002a165) bg_popup_call3_rect_pane_g6

0xc1b2,	// (0x0002a16d) bg_popup_call3_rect_pane_g7

0x4b56,	// (0x00022b11) mup_visualizer_osc_pane

0xb035,	// (0x00028ff0) mup_visualizer_spec_pane

0x56dc,	// (0x00023697) call3_video_qcif_pane_ParamLimits

0x56dc,	// (0x00023697) call3_video_qcif_pane

0x56ee,	// (0x000236a9) call3_video_qcif_uncrop_pane_ParamLimits

0x56ee,	// (0x000236a9) call3_video_qcif_uncrop_pane

0x56fc,	// (0x000236b7) call3_video_subqcif_pane_ParamLimits

0x56fc,	// (0x000236b7) call3_video_subqcif_pane

0x570e,	// (0x000236c9) call3_video_subqcif_uncrop_pane_ParamLimits

0x570e,	// (0x000236c9) call3_video_subqcif_uncrop_pane

0x5766,	// (0x00023721) popup_call3_audio_in_window_g4_ParamLimits

0x5766,	// (0x00023721) popup_call3_audio_in_window_g4

0x56a9,	// (0x00023664) mup_spec_half_pane

0x56b2,	// (0x0002366d) mup_spec_half_pane_cp

0xc42f,	// (0x0002a3ea) mup_osc_middle_pane

0xc438,	// (0x0002a3f3) mup_visualizer_osc_pane_g1

0x568a,	// (0x00023645) mup_spec_bar_pane_ParamLimits

0x568a,	// (0x00023645) mup_spec_bar_pane

0xc41c,	// (0x0002a3d7) mup_spec_bar_pane_g1

0xc426,	// (0x0002a3e1) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0002d5d4) mup_spec_bar_pane_g

0x2b72,	// (0x00020b2d) aid_cale_week_size_cell_pane_ParamLimits

0x2b87,	// (0x00020b42) bg_cale_heading_pane_ParamLimits

0xa470,	// (0x0002842b) bg_cale_pane_cp01_ParamLimits

0x2ba9,	// (0x00020b64) cale_week_corner_pane_ParamLimits

0x2bc3,	// (0x00020b7e) cale_week_day_heading_pane_ParamLimits

0x2be5,	// (0x00020ba0) cale_week_scroll_pane_g1_ParamLimits

0x2c02,	// (0x00020bbd) cale_week_scroll_pane_g2_ParamLimits

0x2c15,	// (0x00020bd0) cale_week_scroll_pane_g3_ParamLimits

0x2c28,	// (0x00020be3) cale_week_scroll_pane_g4_ParamLimits

0x2c3b,	// (0x00020bf6) cale_week_scroll_pane_g5_ParamLimits

0x2c4e,	// (0x00020c09) cale_week_scroll_pane_g6_ParamLimits

0x2c61,	// (0x00020c1c) cale_week_scroll_pane_g7_ParamLimits

0x2c76,	// (0x00020c31) cale_week_scroll_pane_g8_ParamLimits

0x2c8b,	// (0x00020c46) cale_week_scroll_pane_g9_ParamLimits

0x2c9e,	// (0x00020c59) cale_week_scroll_pane_g10_ParamLimits

0x2cb1,	// (0x00020c6c) cale_week_scroll_pane_g11_ParamLimits

0x2cc4,	// (0x00020c7f) cale_week_scroll_pane_g12_ParamLimits

0x2cdb,	// (0x00020c96) cale_week_scroll_pane_g13_ParamLimits

0x2cf6,	// (0x00020cb1) cale_week_scroll_pane_g14_ParamLimits

0x2d11,	// (0x00020ccc) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0002d16b) cale_week_scroll_pane_g_ParamLimits

0x2d41,	// (0x00020cfc) cale_week_time_pane_ParamLimits

0x2d56,	// (0x00020d11) grid_cale_week_pane_ParamLimits

0xa48d,	// (0x00028448) listscroll_cale_week_pane_t1

0xa49f,	// (0x0002845a) scroll_pane_cp08_ParamLimits

0x3947,	// (0x00021902) cale_month_corner_pane_ParamLimits

0xa849,	// (0x00028804) cale_month_pane_t1

0x3e15,	// (0x00021dd0) cale_month_week_pane_ParamLimits

0xabd0,	// (0x00028b8b) popup_call_status_window_g1_ParamLimits

0x4670,	// (0x0002262b) popup_call_status_window_g2_ParamLimits

0x467c,	// (0x00022637) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0002d311) popup_call_status_window_g_ParamLimits

0xac25,	// (0x00028be0) aid_call2_pane

0x4e06,	// (0x00022dc1) msg_header_pane_g1

0x4f61,	// (0x00022f1c) postcard_address2_pane_ParamLimits

0x4f61,	// (0x00022f1c) postcard_address2_pane

0x4f6d,	// (0x00022f28) postcard_message2_pane_ParamLimits

0x4f6d,	// (0x00022f28) postcard_message2_pane

0x5621,	// (0x000235dc) message2_row_pane_ParamLimits

0x5621,	// (0x000235dc) message2_row_pane

0x563c,	// (0x000235f7) address2_row_pane_ParamLimits

0x563c,	// (0x000235f7) address2_row_pane

0xc3ea,	// (0x0002a3a5) postcard_message2_row_pane_g1

0xc3f2,	// (0x0002a3ad) postcard_message2_row_pane_t1

0xc3ea,	// (0x0002a3a5) address2_row_pane_g1

0xc3f2,	// (0x0002a3ad) address2_row_pane_t1

0x2ef3,	// (0x00020eae) aid_size_cell_vorec

0x9ff8,	// (0x00027fb3) main_rss_pane

0x564f,	// (0x0002360a) rss_list_single_pane_ParamLimits

0x564f,	// (0x0002360a) rss_list_single_pane

0xc400,	// (0x0002a3bb) rss_list_single_pane_t1

0xc40e,	// (0x0002a3c9) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0002d5cf) rss_list_single_pane_t

0x9ff8,	// (0x00027fb3) main_camera2_pane

0x9ff8,	// (0x00027fb3) main_video2_pane

0x162d,	// (0x0001f5e8) cams_zoom_pane_cp2_ParamLimits

0x162d,	// (0x0001f5e8) cams_zoom_pane_cp2

0x1639,	// (0x0001f5f4) image2_vga_pane_ParamLimits

0x1639,	// (0x0001f5f4) image2_vga_pane

0x1648,	// (0x0001f603) main_camera2_pane_g1_ParamLimits

0x1648,	// (0x0001f603) main_camera2_pane_g1

0x1654,	// (0x0001f60f) main_camera2_pane_g2_ParamLimits

0x1654,	// (0x0001f60f) main_camera2_pane_g2

0x1660,	// (0x0001f61b) main_camera2_pane_g3_ParamLimits

0x1660,	// (0x0001f61b) main_camera2_pane_g3

0x166c,	// (0x0001f627) main_camera2_pane_g4_ParamLimits

0x166c,	// (0x0001f627) main_camera2_pane_g4

0x1678,	// (0x0001f633) main_camera2_pane_g5_ParamLimits

0x1678,	// (0x0001f633) main_camera2_pane_g5

0x1684,	// (0x0001f63f) main_camera2_pane_g6_ParamLimits

0x1684,	// (0x0001f63f) main_camera2_pane_g6

0x1690,	// (0x0001f64b) main_camera2_pane_g7_ParamLimits

0x1690,	// (0x0001f64b) main_camera2_pane_g7

0x169c,	// (0x0001f657) main_camera2_pane_g8_ParamLimits

0x169c,	// (0x0001f657) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0002d5f0) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0002d5f0) main_camera2_pane_g

0x16b4,	// (0x0001f66f) main_camera2_pane_t1_ParamLimits

0x16b4,	// (0x0001f66f) main_camera2_pane_t1

0x16c6,	// (0x0001f681) main_camera2_pane_t2_ParamLimits

0x16c6,	// (0x0001f681) main_camera2_pane_t2

0x16d8,	// (0x0001f693) main_camera2_pane_t3_ParamLimits

0x16d8,	// (0x0001f693) main_camera2_pane_t3

0x16ea,	// (0x0001f6a5) main_camera2_pane_t4_ParamLimits

0x16ea,	// (0x0001f6a5) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0002d603) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0002d603) main_camera2_pane_t

0x174c,	// (0x0001f707) cams_zoom_pane_cp4_ParamLimits

0x174c,	// (0x0001f707) cams_zoom_pane_cp4

0x175c,	// (0x0001f717) image2_cif_pane_ParamLimits

0x175c,	// (0x0001f717) image2_cif_pane

0x1771,	// (0x0001f72c) image2_subqcif_pane_ParamLimits

0x1771,	// (0x0001f72c) image2_subqcif_pane

0x1780,	// (0x0001f73b) main_video2_pane_g1_ParamLimits

0x1780,	// (0x0001f73b) main_video2_pane_g1

0x1792,	// (0x0001f74d) main_video2_pane_g2_ParamLimits

0x1792,	// (0x0001f74d) main_video2_pane_g2

0x17a2,	// (0x0001f75d) main_video2_pane_g3_ParamLimits

0x17a2,	// (0x0001f75d) main_video2_pane_g3

0x17b2,	// (0x0001f76d) main_video2_pane_g4_ParamLimits

0x17b2,	// (0x0001f76d) main_video2_pane_g4

0x17c2,	// (0x0001f77d) main_video2_pane_g5_ParamLimits

0x17c2,	// (0x0001f77d) main_video2_pane_g5

0x17d2,	// (0x0001f78d) main_video2_pane_g6_ParamLimits

0x17d2,	// (0x0001f78d) main_video2_pane_g6

0x0005,

0xf657,	// (0x0002d612) main_video2_pane_g_ParamLimits

0xf657,	// (0x0002d612) main_video2_pane_g

0x17e4,	// (0x0001f79f) main_video2_pane_t1_ParamLimits

0x17e4,	// (0x0001f79f) main_video2_pane_t1

0x17fe,	// (0x0001f7b9) main_video2_pane_t2_ParamLimits

0x17fe,	// (0x0001f7b9) main_video2_pane_t2

0x1824,	// (0x0001f7df) main_video2_pane_t3_ParamLimits

0x1824,	// (0x0001f7df) main_video2_pane_t3

0x0002,

0xf664,	// (0x0002d61f) main_video2_pane_t_ParamLimits

0xf664,	// (0x0002d61f) main_video2_pane_t

0x54bf,	// (0x0002347a) call_muted_g2

0x0001,

0xf606,	// (0x0002d5c1) call_muted_g

0x9ff8,	// (0x00027fb3) main_mup2_pane

0xc46f,	// (0x0002a42a) main_mup2_pane_g1_ParamLimits

0xc46f,	// (0x0002a42a) main_mup2_pane_g1

0x5819,	// (0x000237d4) main_mup2_pane_g2_ParamLimits

0x5819,	// (0x000237d4) main_mup2_pane_g2

0x1873,	// (0x0001f82e) main_mup_pane_g13_cp1

0x187b,	// (0x0001f836) mup_volume_pane_cp1

0x5839,	// (0x000237f4) main_mup2_pane_g4_ParamLimits

0x5839,	// (0x000237f4) main_mup2_pane_g4

0x584e,	// (0x00023809) main_mup2_pane_g5_ParamLimits

0x584e,	// (0x00023809) main_mup2_pane_g5

0x5863,	// (0x0002381e) main_mup2_pane_g6_ParamLimits

0x5863,	// (0x0002381e) main_mup2_pane_g6

0x5878,	// (0x00023833) main_mup2_pane_g7_ParamLimits

0x5878,	// (0x00023833) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0002d626) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0002d626) main_mup2_pane_g

0x5894,	// (0x0002384f) main_mup2_pane_t1_ParamLimits

0x5894,	// (0x0002384f) main_mup2_pane_t1

0x58ab,	// (0x00023866) main_mup2_pane_t2_ParamLimits

0x58ab,	// (0x00023866) main_mup2_pane_t2

0x58c2,	// (0x0002387d) main_mup2_pane_t3_ParamLimits

0x58c2,	// (0x0002387d) main_mup2_pane_t3

0x58d9,	// (0x00023894) main_mup2_pane_t4_ParamLimits

0x58d9,	// (0x00023894) main_mup2_pane_t4

0x58f3,	// (0x000238ae) main_mup2_pane_t5_ParamLimits

0x58f3,	// (0x000238ae) main_mup2_pane_t5

0x590d,	// (0x000238c8) main_mup2_pane_t6_ParamLimits

0x590d,	// (0x000238c8) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0002d635) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0002d635) main_mup2_pane_t

0x5945,	// (0x00023900) mup2_visualizer_pane_ParamLimits

0x5945,	// (0x00023900) mup2_visualizer_pane

0x597b,	// (0x00023936) mup_progress_pane_cp_ParamLimits

0x597b,	// (0x00023936) mup_progress_pane_cp

0x185e,	// (0x0001f819) mup_volume_pane_cp_ParamLimits

0x185e,	// (0x0001f819) mup_volume_pane_cp

0x5992,	// (0x0002394d) mup2_visualizer_pane_g1_ParamLimits

0x5992,	// (0x0002394d) mup2_visualizer_pane_g1

0xc47b,	// (0x0002a436) mup2_visualizer_pane_g2_ParamLimits

0xc47b,	// (0x0002a436) mup2_visualizer_pane_g2

0x59a7,	// (0x00023962) mup2_visualizer_pane_g3_ParamLimits

0x59a7,	// (0x00023962) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0002d642) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0002d642) mup2_visualizer_pane_g

0xb25c,	// (0x00029217) aid_size_cell_fmradio

0x143a,	// (0x0001f3f5) aid_height_parent_landcape

0xa6a7,	// (0x00028662) wml_content_pane_cp

0xa6af,	// (0x0002866a) wml_tabs_pane

0xa6b8,	// (0x00028673) popup_wml_miniature_window

0xa6c0,	// (0x0002867b) scroll_pane_cp021

0xa6d4,	// (0x0002868f) wml_content_pane_comp8

0x9ff8,	// (0x00027fb3) bg_popup_sub_pane_cp05

0xc499,	// (0x0002a454) popup_wml_miniature_window_g1

0xc4a1,	// (0x0002a45c) wml_miniature_view_pane

0x59b5,	// (0x00023970) aid_size_wml_view

0x59bd,	// (0x00023978) wml_miniature_view_pane_g1

0x59c6,	// (0x00023981) wml_miniature_view_pane_g2

0x59cf,	// (0x0002398a) wml_miniature_view_pane_g3

0x59d7,	// (0x00023992) wml_miniature_view_pane_g4

0x59df,	// (0x0002399a) wml_miniature_view_pane_g5

0x59e7,	// (0x000239a2) wml_miniature_view_pane_g6

0x59ef,	// (0x000239aa) wml_miniature_view_pane_g7

0x59f7,	// (0x000239b2) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0002d649) wml_miniature_view_pane_g

0xc46f,	// (0x0002a42a) background_graphic_ParamLimits

0xc46f,	// (0x0002a42a) background_graphic

0xc4a9,	// (0x0002a464) wml_tabs_2_pane

0xc4b2,	// (0x0002a46d) wml_tabs_3_pane_ParamLimits

0xc4b2,	// (0x0002a46d) wml_tabs_3_pane

0xc4c4,	// (0x0002a47f) wml_tabs_4_pane_ParamLimits

0xc4c4,	// (0x0002a47f) wml_tabs_4_pane

0xc4da,	// (0x0002a495) wml_tabs_5_pane_ParamLimits

0xc4da,	// (0x0002a495) wml_tabs_5_pane

0xc4f4,	// (0x0002a4af) wml_tabs_pane_g2_ParamLimits

0xc4f4,	// (0x0002a4af) wml_tabs_pane_g2

0xc508,	// (0x0002a4c3) wml_tabs_pane_g3_ParamLimits

0xc508,	// (0x0002a4c3) wml_tabs_pane_g3

0x59ff,	// (0x000239ba) wml_tabs_2_active_pane_ParamLimits

0x59ff,	// (0x000239ba) wml_tabs_2_active_pane

0x5a0f,	// (0x000239ca) wml_tabs_2_passive_pane_ParamLimits

0x5a0f,	// (0x000239ca) wml_tabs_2_passive_pane

0x5a1f,	// (0x000239da) wml_tabs_3_active_pane_cp_ParamLimits

0x5a1f,	// (0x000239da) wml_tabs_3_active_pane_cp

0x5a30,	// (0x000239eb) wml_tabs_3_passive_pane_ParamLimits

0x5a30,	// (0x000239eb) wml_tabs_3_passive_pane

0x5a41,	// (0x000239fc) wml_tabs_3_passive_pane_cp_ParamLimits

0x5a41,	// (0x000239fc) wml_tabs_3_passive_pane_cp

0x5a52,	// (0x00023a0d) tabs_4_active_pane

0x5a5a,	// (0x00023a15) tabs_4_passive_pane

0x5a62,	// (0x00023a1d) tabs_4_passive_pane_cp

0x5a6a,	// (0x00023a25) tabs_4_passive_pane_cp2

0x539a,	// (0x00023355) aid_height_text

0x4b1f,	// (0x00022ada) mup_volume_cont_pane_ParamLimits

0x4b1f,	// (0x00022ada) mup_volume_cont_pane

0x2862,	// (0x0002081d) aid_size_cell_pinb

0x286c,	// (0x00020827) aid_size_list_pinb

0x5964,	// (0x0002391f) mup2_volume_cont_pane_ParamLimits

0x5964,	// (0x0002391f) mup2_volume_cont_pane

0x184a,	// (0x0001f805) mup2_volume_cont_pane_g1_ParamLimits

0x184a,	// (0x0001f805) mup2_volume_cont_pane_g1

0x0d7d,	// (0x0001ed38) aid_size_cell_touch_ParamLimits

0x0d7d,	// (0x0001ed38) aid_size_cell_touch

0x1005,	// (0x0001efc0) touch_pane_ParamLimits

0x1005,	// (0x0001efc0) touch_pane

0x0ffb,	// (0x0001efb6) main_rss2_pane

0xc525,	// (0x0002a4e0) listscroll_rss2_pane

0xc52e,	// (0x0002a4e9) rss2_navigation_pane

0xc536,	// (0x0002a4f1) list_rss2_pane

0xad4a,	// (0x00028d05) scroll_pane_cp22

0xc53e,	// (0x0002a4f9) rss2_navigation_pane_g1

0xc547,	// (0x0002a502) rss2_navigation_pane_g2

0xc54f,	// (0x0002a50a) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0002d65a) rss2_navigation_pane_g

0xc557,	// (0x0002a512) rss2_navigation_pane_t1

0x5a72,	// (0x00023a2d) rss2_list_single_pane_ParamLimits

0x5a72,	// (0x00023a2d) rss2_list_single_pane

0xc565,	// (0x0002a520) rss2_list_single_pane_t2

0xc573,	// (0x0002a52e) rss2_list_single_pane_t3_ParamLimits

0xc573,	// (0x0002a52e) rss2_list_single_pane_t3

0xc590,	// (0x0002a54b) rss2_list_single_pane_t4

0x440d,	// (0x000223c8) smil_status_pane_g1

0x1451,	// (0x0001f40c) main_image2_pane_ParamLimits

0x1451,	// (0x0001f40c) main_image2_pane

0x16a8,	// (0x0001f663) main_camera2_pane_g9_ParamLimits

0x16a8,	// (0x0001f663) main_camera2_pane_g9

0x16fc,	// (0x0001f6b7) main_camera2_pane_t5_ParamLimits

0x16fc,	// (0x0001f6b7) main_camera2_pane_t5

0x170e,	// (0x0001f6c9) main_camera2_pane_t6_ParamLimits

0x170e,	// (0x0001f6c9) main_camera2_pane_t6

0x5aa6,	// (0x00023a61) main_image2_pane_g1_ParamLimits

0x5aa6,	// (0x00023a61) main_image2_pane_g1

0x5134,	// (0x000230ef) smil2_video_pane_ParamLimits

0x5134,	// (0x000230ef) smil2_video_pane

0x0db1,	// (0x0001ed6c) aid_zoom_text_primary_cp

0x0fa2,	// (0x0001ef5d) popup_preview_fixed_window

0xa610,	// (0x000285cb) im_reading_pane_g1

0x15f2,	// (0x0001f5ad) cams2_bc_adjust_pane_cp_ParamLimits

0x15f2,	// (0x0001f5ad) cams2_bc_adjust_pane_cp

0x173e,	// (0x0001f6f9) cams2_bc_adjust_pane_ParamLimits

0x173e,	// (0x0001f6f9) cams2_bc_adjust_pane

0xd82f,	// (0x0002b7ea) cams2_bc_adjust_pane_g1

0x1883,	// (0x0001f83e) cams2_slider_pane

0x188c,	// (0x0001f847) cams2_slider_pane_g1

0x1895,	// (0x0001f850) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0002d661) cams2_slider_pane_g

0x1076,	// (0x0001f031) calc_display_pane_ParamLimits

0x1094,	// (0x0001f04f) calc_paper_pane_ParamLimits

0x10b0,	// (0x0001f06b) grid_calc_pane_ParamLimits

0x13a5,	// (0x0001f360) popup_clock_digital_window_t1_ParamLimits

0xb1f9,	// (0x000291b4) main_image_pane_t1

0x105c,	// (0x0001f017) aid_size_cell_calc_ParamLimits

0x105c,	// (0x0001f017) aid_size_cell_calc

0x1482,	// (0x0001f43d) popup_blid_sat_info2_window_ParamLimits

0x1482,	// (0x0001f43d) popup_blid_sat_info2_window

0xc5a6,	// (0x0002a561) aid_size_cell_blid

0xc5ae,	// (0x0002a569) bg_popup_window_pane_cp07

0xc5d1,	// (0x0002a58c) grid_popup_blid_pane

0xc5db,	// (0x0002a596) heading_pane_cp05_ParamLimits

0xc5db,	// (0x0002a596) heading_pane_cp05

0xc6a5,	// (0x0002a660) cell_popup_blid_pane_ParamLimits

0xc6a5,	// (0x0002a660) cell_popup_blid_pane

0xc6c9,	// (0x0002a684) cell_popup_blid_pane_g1

0xc6d1,	// (0x0002a68c) cell_popup_blid_pane_t1

0x592a,	// (0x000238e5) mup2_indicator_pane_ParamLimits

0x592a,	// (0x000238e5) mup2_indicator_pane

0xa517,	// (0x000284d2) mup2_visualizer_osc_pane

0xc487,	// (0x0002a442) mup2_visualizer_spec_pane_ParamLimits

0xc487,	// (0x0002a442) mup2_visualizer_spec_pane

0x5ab2,	// (0x00023a6d) mup2_spec_half_pane

0x5abb,	// (0x00023a76) mup2_spec_half_pane_cp

0x5ac5,	// (0x00023a80) mup2_spec_bar_pane_ParamLimits

0x5ac5,	// (0x00023a80) mup2_spec_bar_pane

0xc41c,	// (0x0002a3d7) mup2_spec_bar_pane_g1

0xc426,	// (0x0002a3e1) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0002d5d4) mup2_spec_bar_pane_g

0x5ae4,	// (0x00023a9f) mup2_osc_middle_pane

0xc438,	// (0x0002a3f3) mup2_visualizer_osc_pane_g1

0x9c05,	// (0x00027bc0) popup_number_entry_window_t1_ParamLimits

0x9c18,	// (0x00027bd3) popup_number_entry_window_t2_ParamLimits

0x9c2a,	// (0x00027be5) popup_number_entry_window_t3_ParamLimits

0x279c,	// (0x00020757) popup_number_entry_window_t5_ParamLimits

0x279c,	// (0x00020757) popup_number_entry_window_t5

0xf0ca,	// (0x0002d085) popup_number_entry_window_t_ParamLimits

0x9c3c,	// (0x00027bf7) text_title_cp2_ParamLimits

0x13e4,	// (0x0001f39f) aid_hotspot_pointer_text2_pane

0x142e,	// (0x0001f3e9) main_viewer_pane_g9_ParamLimits

0x142e,	// (0x0001f3e9) main_viewer_pane_g9

0xa849,	// (0x00028804) cale_month_pane_t1_ParamLimits

0xa886,	// (0x00028841) bg_cale_pane_ParamLimits

0xa89e,	// (0x00028859) list_cale_pane_ParamLimits

0xa8af,	// (0x0002886a) listscroll_cale_day_pane_t1

0xa8c1,	// (0x0002887c) scroll_pane_cp09_ParamLimits

0x4b5e,	// (0x00022b19) main_mup_eq_pane_t1_ParamLimits

0x4b5e,	// (0x00022b19) main_mup_eq_pane_t1

0x4b78,	// (0x00022b33) main_mup_eq_pane_t2_ParamLimits

0x4b78,	// (0x00022b33) main_mup_eq_pane_t2

0x4b90,	// (0x00022b4b) main_mup_eq_pane_t3_ParamLimits

0x4b90,	// (0x00022b4b) main_mup_eq_pane_t3

0x4ba8,	// (0x00022b63) main_mup_eq_pane_t4_ParamLimits

0x4ba8,	// (0x00022b63) main_mup_eq_pane_t4

0x4bc0,	// (0x00022b7b) main_mup_eq_pane_t5_ParamLimits

0x4bc0,	// (0x00022b7b) main_mup_eq_pane_t5

0x4bd8,	// (0x00022b93) main_mup_eq_pane_t6_ParamLimits

0x4bd8,	// (0x00022b93) main_mup_eq_pane_t6

0x4bec,	// (0x00022ba7) main_mup_eq_pane_t7_ParamLimits

0x4bec,	// (0x00022ba7) main_mup_eq_pane_t7

0x4c00,	// (0x00022bbb) main_mup_eq_pane_t8_ParamLimits

0x4c00,	// (0x00022bbb) main_mup_eq_pane_t8

0x4c16,	// (0x00022bd1) main_mup_eq_pane_t9_ParamLimits

0x4c16,	// (0x00022bd1) main_mup_eq_pane_t9

0x4c2e,	// (0x00022be9) main_mup_eq_pane_t10_ParamLimits

0x4c2e,	// (0x00022be9) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0002d410) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0002d410) main_mup_eq_pane_t

0x4ceb,	// (0x00022ca6) mup_equalizer_pane_cp5_ParamLimits

0x4d01,	// (0x00022cbc) mup_equalizer_pane_cp6_ParamLimits

0x4d19,	// (0x00022cd4) mup_equalizer_pane_cp7_ParamLimits

0x0ffb,	// (0x0001efb6) main_gallery_pane

0xc441,	// (0x0002a3fc) smil2_volume_pane

0xc449,	// (0x0002a404) smil_status_volume_pane_g1_ParamLimits

0xc45c,	// (0x0002a417) smil_status_volume_pane_g2_ParamLimits

0x15c2,	// (0x0001f57d) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0002d5d9) smil_status_volume_pane_g_ParamLimits

0xc5ae,	// (0x0002a569) bg_popup_window_pane_cp07_ParamLimits

0xc5bc,	// (0x0002a577) blid_firmament_pane

0x5aed,	// (0x00023aa8) aid_size_cell_gallery_ParamLimits

0x5aed,	// (0x00023aa8) aid_size_cell_gallery

0x5afb,	// (0x00023ab6) grid_gallery_pane_ParamLimits

0x5afb,	// (0x00023ab6) grid_gallery_pane

0x5b0b,	// (0x00023ac6) cell_gallery_pane_ParamLimits

0x5b0b,	// (0x00023ac6) cell_gallery_pane

0xc6df,	// (0x0002a69a) bg_cell_gallery_focus_pane_ParamLimits

0xc6df,	// (0x0002a69a) bg_cell_gallery_focus_pane

0xc6f1,	// (0x0002a6ac) cell_gallery_pane_g1_ParamLimits

0xc6f1,	// (0x0002a6ac) cell_gallery_pane_g1

0x5b59,	// (0x00023b14) cell_gallery_pane_g2_ParamLimits

0x5b59,	// (0x00023b14) cell_gallery_pane_g2

0x5b66,	// (0x00023b21) cell_gallery_pane_g3_ParamLimits

0x5b66,	// (0x00023b21) cell_gallery_pane_g3

0xc6fd,	// (0x0002a6b8) cell_gallery_pane_g4_ParamLimits

0xc6fd,	// (0x0002a6b8) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0002d687) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0002d687) cell_gallery_pane_g

0xc709,	// (0x0002a6c4) bg_cell_gallery_focus_pane_g1

0xc711,	// (0x0002a6cc) bg_cell_gallery_focus_pane_g2

0xc719,	// (0x0002a6d4) bg_cell_gallery_focus_pane_g3

0xc721,	// (0x0002a6dc) bg_cell_gallery_focus_pane_g4

0xc729,	// (0x0002a6e4) bg_cell_gallery_focus_pane_g5

0xc731,	// (0x0002a6ec) bg_cell_gallery_focus_pane_g6

0xc739,	// (0x0002a6f4) bg_cell_gallery_focus_pane_g7

0xc741,	// (0x0002a6fc) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0002d690) bg_cell_gallery_focus_pane_g

0xc749,	// (0x0002a704) aid_firma_cardinal

0xc75d,	// (0x0002a718) blid_firmament_pane_t1

0xc774,	// (0x0002a72f) blid_firmament_pane_t2

0xc78b,	// (0x0002a746) blid_firmament_pane_t3

0xc7a2,	// (0x0002a75d) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0002d6a1) blid_firmament_pane_t

0xc7b9,	// (0x0002a774) blid_sat_info_pane

0xc7c9,	// (0x0002a784) blid_sat_info_pane_g1

0xc7c9,	// (0x0002a784) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0002d6aa) blid_sat_info_pane_g

0xc7d3,	// (0x0002a78e) blid_sat_info_pane_t1

0xc7e1,	// (0x0002a79c) smil2_volume_content_pane

0xc7ea,	// (0x0002a7a5) smil2_volume_pane_g1

0xc7f2,	// (0x0002a7ad) smil2_volume_content_pane_g1

0xc7fb,	// (0x0002a7b6) smil2_volume_content_pane_g2

0xc804,	// (0x0002a7bf) smil2_volume_content_pane_g3

0xc80d,	// (0x0002a7c8) smil2_volume_content_pane_g4

0xc816,	// (0x0002a7d1) smil2_volume_content_pane_g5

0xc81f,	// (0x0002a7da) smil2_volume_content_pane_g6

0xc828,	// (0x0002a7e3) smil2_volume_content_pane_g7

0xc831,	// (0x0002a7ec) smil2_volume_content_pane_g8

0xc83a,	// (0x0002a7f5) smil2_volume_content_pane_g9

0xc843,	// (0x0002a7fe) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0002d6af) smil2_volume_content_pane_g

0x2dd7,	// (0x00020d92) cale_week_day_heading_pane_t1_ParamLimits

0x2df2,	// (0x00020dad) cale_week_day_heading_pane_t2_ParamLimits

0x2e0d,	// (0x00020dc8) cale_week_day_heading_pane_t3_ParamLimits

0x2e28,	// (0x00020de3) cale_week_day_heading_pane_t4_ParamLimits

0x2e43,	// (0x00020dfe) cale_week_day_heading_pane_t5_ParamLimits

0x2e5e,	// (0x00020e19) cale_week_day_heading_pane_t6_ParamLimits

0x2e79,	// (0x00020e34) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0002d18c) cale_week_day_heading_pane_t_ParamLimits

0xa4bc,	// (0x00028477) bg_cale_side_pane_ParamLimits

0x1207,	// (0x0001f1c2) cale_week_time_pane_t1_ParamLimits

0x1221,	// (0x0001f1dc) cale_week_time_pane_t2_ParamLimits

0x123b,	// (0x0001f1f6) cale_week_time_pane_t3_ParamLimits

0x1255,	// (0x0001f210) cale_week_time_pane_t4_ParamLimits

0x126f,	// (0x0001f22a) cale_week_time_pane_t5_ParamLimits

0x1289,	// (0x0001f244) cale_week_time_pane_t6_ParamLimits

0x12a9,	// (0x0001f264) cale_week_time_pane_t7_ParamLimits

0x12cb,	// (0x0001f286) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0002d19b) cale_week_time_pane_t_ParamLimits

0x2e94,	// (0x00020e4f) cell_cale_week_pane_g2_ParamLimits

0xa4bc,	// (0x00028477) bg_cale_side_pane_cp01_ParamLimits

0x420a,	// (0x000221c5) cale_month_week_pane_t1_ParamLimits

0x4223,	// (0x000221de) cale_month_week_pane_t2_ParamLimits

0x423c,	// (0x000221f7) cale_month_week_pane_t3_ParamLimits

0x4255,	// (0x00022210) cale_month_week_pane_t4_ParamLimits

0x4270,	// (0x0002222b) cale_month_week_pane_t5_ParamLimits

0x4291,	// (0x0002224c) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0002d270) cale_month_week_pane_t_ParamLimits

0x12f9,	// (0x0001f2b4) cell_cale_month_pane_g1_ParamLimits

0x0ffb,	// (0x0001efb6) main_cale_event_viewer_pane

0x9bdb,	// (0x00027b96) listscroll_cale_event_viewer_pane

0xc84c,	// (0x0002a807) list_cale_ev_pane

0xc854,	// (0x0002a80f) scroll_pane_cp023

0xc860,	// (0x0002a81b) field_cale_ev_pane_ParamLimits

0xc860,	// (0x0002a81b) field_cale_ev_pane

0xc87e,	// (0x0002a839) field_cale_ev_content_pane_ParamLimits

0xc87e,	// (0x0002a839) field_cale_ev_content_pane

0xc88a,	// (0x0002a845) field_cale_ev_pane_g1_ParamLimits

0xc88a,	// (0x0002a845) field_cale_ev_pane_g1

0xc896,	// (0x0002a851) field_cale_ev_pane_g2_ParamLimits

0xc896,	// (0x0002a851) field_cale_ev_pane_g2

0xc8ae,	// (0x0002a869) field_cale_ev_pane_g3_ParamLimits

0xc8ae,	// (0x0002a869) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0002d6c4) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0002d6c4) field_cale_ev_pane_g

0xc8c6,	// (0x0002a881) field_cale_ev_pane_t1_ParamLimits

0xc8c6,	// (0x0002a881) field_cale_ev_pane_t1

0xaba6,	// (0x00028b61) field_cale_ev_content_pane_t1_ParamLimits

0xaba6,	// (0x00028b61) field_cale_ev_content_pane_t1

0xb0df,	// (0x0002909a) bg_button_pane_cp01

0x2b62,	// (0x00020b1d) listscroll_cale_week_pane_ParamLimits

0xa467,	// (0x00028422) popup_toolbar_window_cp01

0xa48d,	// (0x00028448) listscroll_cale_week_pane_t1_ParamLimits

0x2b62,	// (0x00020b1d) listscroll_cale_day_pane_ParamLimits

0xa467,	// (0x00028422) popup_toolbar_window_cp02

0xa8af,	// (0x0002886a) listscroll_cale_day_pane_t1_ParamLimits

0x2b62,	// (0x00020b1d) main_cale_month_pane_ParamLimits

0x1585,	// (0x0001f540) popup_toolbar_window_cp03_ParamLimits

0x1585,	// (0x0001f540) popup_toolbar_window_cp03

0x504a,	// (0x00023005) main_image_pane_g2_ParamLimits

0x504a,	// (0x00023005) main_image_pane_g2

0x5056,	// (0x00023011) main_image_pane_g3_ParamLimits

0x5056,	// (0x00023011) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0002d4a2) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0002d4a2) main_image_pane_g

0xb1f9,	// (0x000291b4) main_image_pane_t1_ParamLimits

0x5062,	// (0x0002301d) main_image_pane_t2_ParamLimits

0x5062,	// (0x0002301d) main_image_pane_t2

0x5074,	// (0x0002302f) main_image_pane_t3_ParamLimits

0x5074,	// (0x0002302f) main_image_pane_t3

0x5086,	// (0x00023041) main_image_pane_t4_ParamLimits

0x5086,	// (0x00023041) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0002d4a9) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0002d4a9) main_image_pane_t

0x5098,	// (0x00023053) popup_image_details_window_cp01

0x50a2,	// (0x0002305d) popup_toobar_trans_pane_cp01_ParamLimits

0x50a2,	// (0x0002305d) popup_toobar_trans_pane_cp01

0x14d5,	// (0x0001f490) popup_image_details_window_ParamLimits

0x14d5,	// (0x0001f490) popup_image_details_window

0x14e3,	// (0x0001f49e) popup_image_focus_window

0x15e4,	// (0x0001f59f) camera2_autofocus_pane_ParamLimits

0x15e4,	// (0x0001f59f) camera2_autofocus_pane

0x9bdb,	// (0x00027b96) bg_popup_sub_pane_cp06

0xc8dd,	// (0x0002a898) popup_image_focus_window_g1

0xc8e5,	// (0x0002a8a0) popup_image_focus_window_g2

0xc8ed,	// (0x0002a8a8) popup_image_focus_window_g3

0xc8f5,	// (0x0002a8b0) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0002d6cb) popup_image_focus_window_g

0xc8fd,	// (0x0002a8b8) popup_image_focus_window_t1

0xc90b,	// (0x0002a8c6) popup_image_focus_window_t2

0xc91b,	// (0x0002a8d6) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0002d6d4) popup_image_focus_window_t

0xc929,	// (0x0002a8e4) camera2_autofocus_pane_g1

0xa407,	// (0x000283c2) bg_tb_trans_pane_cp01

0xc937,	// (0x0002a8f2) popup_image_details_window_g1

0xc94a,	// (0x0002a905) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0002d6e6) popup_image_details_window_g

0xc973,	// (0x0002a92e) popup_image_details_window_t1

0xc985,	// (0x0002a940) popup_image_details_window_t2

0xc99e,	// (0x0002a959) popup_image_details_window_t3

0xc9b2,	// (0x0002a96d) popup_image_details_window_t4

0xc9cd,	// (0x0002a988) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0002d6ed) popup_image_details_window_t

0xa310,	// (0x000282cb) bg_calc_paper_pane_ParamLimits

0x0ffb,	// (0x0001efb6) grid_highlight_pane_cp013

0x10dc,	// (0x0001f097) list_calc_pane_ParamLimits

0x10ee,	// (0x0001f0a9) scroll_pane_cp024

0xa324,	// (0x000282df) bg_calc_display_pane_ParamLimits

0x10f6,	// (0x0001f0b1) calc_display_pane_t1_ParamLimits

0x110b,	// (0x0001f0c6) calc_display_pane_t2_ParamLimits

0x1120,	// (0x0001f0db) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0002d10c) calc_display_pane_t_ParamLimits

0x1189,	// (0x0001f144) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0002d129) cell_calc_pane_g

0x1192,	// (0x0001f14d) cell_calc_pane_t1

0xa383,	// (0x0002833e) grid_highlight_pane_cp02_ParamLimits

0xa399,	// (0x00028354) toolbar_button_pane_cp01_ParamLimits

0xa399,	// (0x00028354) toolbar_button_pane_cp01

0xb23e,	// (0x000291f9) temp_image_control_pane_ParamLimits

0xb23e,	// (0x000291f9) temp_image_control_pane

0x1451,	// (0x0001f40c) main_mp3_pane

0xc9e7,	// (0x0002a9a2) temp_image_control_pane_g1_ParamLimits

0xc9e7,	// (0x0002a9a2) temp_image_control_pane_g1

0xc9f5,	// (0x0002a9b0) temp_image_control_pane_g2_ParamLimits

0xc9f5,	// (0x0002a9b0) temp_image_control_pane_g2

0xca07,	// (0x0002a9c2) temp_image_control_pane_g3_ParamLimits

0xca07,	// (0x0002a9c2) temp_image_control_pane_g3

0x5ba3,	// (0x00023b5e) temp_image_control_pane_g4_ParamLimits

0x5ba3,	// (0x00023b5e) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0002d6f8) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0002d6f8) temp_image_control_pane_g

0xc9e7,	// (0x0002a9a2) main_mp3_pane_g1

0x5bb4,	// (0x00023b6f) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0002d701) main_mp3_pane_g

0xca4a,	// (0x0002aa05) main_mp3_pane_t1

0xa51f,	// (0x000284da) main_camera_pane_g8_ParamLimits

0xa51f,	// (0x000284da) main_camera_pane_g8

0x3114,	// (0x000210cf) main_video_pane_g7_ParamLimits

0x3114,	// (0x000210cf) main_video_pane_g7

0x172c,	// (0x0001f6e7) main_camera2_pane_t7_ParamLimits

0x172c,	// (0x0001f6e7) main_camera2_pane_t7

0xa667,	// (0x00028622) scroll_pane_cp025_ParamLimits

0xa667,	// (0x00028622) scroll_pane_cp025

0xa67b,	// (0x00028636) scroll_pane_cp026_ParamLimits

0xa67b,	// (0x00028636) scroll_pane_cp026

0xa68a,	// (0x00028645) wml_content_pane_ParamLimits

0x0ffb,	// (0x0001efb6) main_touch_calib_pane

0x5c58,	// (0x00023c13) main_touch_calib_pane_g1

0x5c64,	// (0x00023c1f) main_touch_calib_pane_g2

0x5c70,	// (0x00023c2b) main_touch_calib_pane_g3

0x5c7c,	// (0x00023c37) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0002d71f) main_touch_calib_pane_g

0x5c88,	// (0x00023c43) main_touch_calib_pane_t1

0x5ca1,	// (0x00023c5c) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0002d728) main_touch_calib_pane_t

0xae19,	// (0x00028dd4) mup_progress_pane_cp02

0xae4e,	// (0x00028e09) navi_pane_g1

0xaf09,	// (0x00028ec4) navi_pane_mp_t3

0x1451,	// (0x0001f40c) main_mp3_pane_ParamLimits

0x55d5,	// (0x00023590) navi_pane_ParamLimits

0xc9e7,	// (0x0002a9a2) main_mp3_pane_g1_ParamLimits

0x5bb4,	// (0x00023b6f) main_mp3_pane_g2_ParamLimits

0x5bc0,	// (0x00023b7b) main_mp3_pane_g3_ParamLimits

0x5bc0,	// (0x00023b7b) main_mp3_pane_g3

0x5bcc,	// (0x00023b87) main_mp3_pane_g4_ParamLimits

0x5bcc,	// (0x00023b87) main_mp3_pane_g4

0xca17,	// (0x0002a9d2) main_mp3_pane_g5_ParamLimits

0xca17,	// (0x0002a9d2) main_mp3_pane_g5

0xca25,	// (0x0002a9e0) main_mp3_pane_g6_ParamLimits

0xca25,	// (0x0002a9e0) main_mp3_pane_g6

0xca32,	// (0x0002a9ed) main_mp3_pane_g7_ParamLimits

0xca32,	// (0x0002a9ed) main_mp3_pane_g7

0xca3e,	// (0x0002a9f9) main_mp3_pane_g8_ParamLimits

0xca3e,	// (0x0002a9f9) main_mp3_pane_g8

0xf746,	// (0x0002d701) main_mp3_pane_g_ParamLimits

0x5bd8,	// (0x00023b93) main_mp3_pane_t2

0x5be8,	// (0x00023ba3) main_mp3_pane_t3

0xca58,	// (0x0002aa13) main_mp3_pane_t4

0xca66,	// (0x0002aa21) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0002d712) main_mp3_pane_t

0xca74,	// (0x0002aa2f) mup_progress_pane_cp01

0x0db1,	// (0x0001ed6c) aid_zoom_text_secondary2

0xc84c,	// (0x0002a807) list_cale_ev2_pane

0xc854,	// (0x0002a80f) scroll_pane_cp023_ParamLimits

0x5cfc,	// (0x00023cb7) field_cale_ev2_pane_ParamLimits

0x5cfc,	// (0x00023cb7) field_cale_ev2_pane

0xca7c,	// (0x0002aa37) field_cale_ev2_pane_g1_ParamLimits

0xca7c,	// (0x0002aa37) field_cale_ev2_pane_g1

0xca88,	// (0x0002aa43) field_cale_ev2_pane_g2_ParamLimits

0xca88,	// (0x0002aa43) field_cale_ev2_pane_g2

0xcaa0,	// (0x0002aa5b) field_cale_ev2_pane_g3_ParamLimits

0xcaa0,	// (0x0002aa5b) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0002d733) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0002d733) field_cale_ev2_pane_g

0xcac4,	// (0x0002aa7f) field_cale_ev2_pane_t1_ParamLimits

0xcac4,	// (0x0002aa7f) field_cale_ev2_pane_t1

0xcadb,	// (0x0002aa96) field_cale_ev2_pane_t2_ParamLimits

0xcadb,	// (0x0002aa96) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0002d73c) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0002d73c) field_cale_ev2_pane_t

0x4f2b,	// (0x00022ee6) main_postcard_pane_g5_ParamLimits

0x4f2b,	// (0x00022ee6) main_postcard_pane_g5

0x4f39,	// (0x00022ef4) main_postcard_pane_g6_ParamLimits

0x4f39,	// (0x00022ef4) main_postcard_pane_g6

0x2f5e,	// (0x00020f19) camera2_autofocus_pane_cp_ParamLimits

0x2f5e,	// (0x00020f19) camera2_autofocus_pane_cp

0x1451,	// (0x0001f40c) main_mup3_pane

0x5d65,	// (0x00023d20) main_mup3_pane_g1_ParamLimits

0x5d65,	// (0x00023d20) main_mup3_pane_g1

0x5d86,	// (0x00023d41) main_mup3_pane_g2_ParamLimits

0x5d86,	// (0x00023d41) main_mup3_pane_g2

0x5e00,	// (0x00023dbb) main_mup3_pane_g3_ParamLimits

0x5e00,	// (0x00023dbb) main_mup3_pane_g3

0x5e43,	// (0x00023dfe) main_mup3_pane_g4_ParamLimits

0x5e43,	// (0x00023dfe) main_mup3_pane_g4

0x5e86,	// (0x00023e41) main_mup3_pane_g5_ParamLimits

0x5e86,	// (0x00023e41) main_mup3_pane_g5

0x5ec9,	// (0x00023e84) main_mup3_pane_g6_ParamLimits

0x5ec9,	// (0x00023e84) main_mup3_pane_g6

0xcaf0,	// (0x0002aaab) main_mup3_pane_g7_ParamLimits

0xcaf0,	// (0x0002aaab) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0002d74c) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0002d74c) main_mup3_pane_g

0x5f3f,	// (0x00023efa) main_mup3_pane_t1_ParamLimits

0x5f3f,	// (0x00023efa) main_mup3_pane_t1

0x5fae,	// (0x00023f69) main_mup3_pane_t2_ParamLimits

0x5fae,	// (0x00023f69) main_mup3_pane_t2

0x6077,	// (0x00024032) main_mup3_pane_t4_ParamLimits

0x6077,	// (0x00024032) main_mup3_pane_t4

0x60c5,	// (0x00024080) main_mup3_pane_t5_ParamLimits

0x60c5,	// (0x00024080) main_mup3_pane_t5

0x6175,	// (0x00024130) main_mup3_pane_t6_ParamLimits

0x6175,	// (0x00024130) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0002d75d) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0002d75d) main_mup3_pane_t

0x6221,	// (0x000241dc) mup3_progress_pane_ParamLimits

0x6221,	// (0x000241dc) mup3_progress_pane

0x6295,	// (0x00024250) popup_mup3_control_window_ParamLimits

0x6295,	// (0x00024250) popup_mup3_control_window

0xcafe,	// (0x0002aab9) popup_mup3_text_window

0x62ae,	// (0x00024269) mup3_progress_pane_t1

0x62cd,	// (0x00024288) mup3_progress_pane_t2

0xcb06,	// (0x0002aac1) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0002d76a) mup3_progress_pane_t

0xcb23,	// (0x0002aade) mup_progress_pane_cp03

0x9bdb,	// (0x00027b96) bg_tb_trans_pane_cp04

0x62ec,	// (0x000242a7) mup3_volume_pane

0x62f4,	// (0x000242af) popup_mup3_control_window_g1

0x62fd,	// (0x000242b8) mup3_volume_pane_g1

0x6306,	// (0x000242c1) mup3_volume_pane_g2

0x630f,	// (0x000242ca) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0002d771) mup3_volume_pane_g

0x9bdb,	// (0x00027b96) bg_tb_trans_pane_cp03

0xcb33,	// (0x0002aaee) popup_mup3_text_window_g1

0xcb3b,	// (0x0002aaf6) popup_mup3_text_window_t1

0xa36c,	// (0x00028327) list_calc_item_pane_g1_ParamLimits

0xc51c,	// (0x0002a4d7) mup_volume_pane_cp_g1

0x5cba,	// (0x00023c75) main_touch_calib_pane_t3

0x5cd0,	// (0x00023c8b) main_touch_calib_pane_t4

0x5ce6,	// (0x00023ca1) main_touch_calib_pane_t5

0x0d69,	// (0x0001ed24) aid_cell_size_toolbar2

0x0d71,	// (0x0001ed2c) aid_popup3_width_pane

0x0db1,	// (0x0001ed6c) aid_zoom_text_msg_primary

0x2f3d,	// (0x00020ef8) vorec_t7

0xa330,	// (0x000282eb) bg_calc_paper_pane_g1_ParamLimits

0xa33c,	// (0x000282f7) bg_calc_paper_pane_g2_ParamLimits

0xa348,	// (0x00028303) bg_calc_paper_pane_g3_ParamLimits

0xa354,	// (0x0002830f) bg_calc_paper_pane_g4_ParamLimits

0xa360,	// (0x0002831b) bg_calc_paper_pane_g5_ParamLimits

0x2a23,	// (0x000209de) bg_calc_paper_pane_g6_ParamLimits

0x2a34,	// (0x000209ef) bg_calc_paper_pane_g7_ParamLimits

0x2a45,	// (0x00020a00) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0002d113) bg_calc_paper_pane_g_ParamLimits

0x2a56,	// (0x00020a11) calc_bg_paper_pane_g9_ParamLimits

0x3045,	// (0x00021000) image_qvga_pane_ParamLimits

0x3045,	// (0x00021000) image_qvga_pane

0xa253,	// (0x0002820e) bg_popup_sub_pane_cp04_ParamLimits

0xb175,	// (0x00029130) popup_mup_playback_window_g1_ParamLimits

0xb181,	// (0x0002913c) popup_mup_playback_window_t1_ParamLimits

0xb196,	// (0x00029151) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0002d49d) popup_mup_playback_window_t_ParamLimits

0x582a,	// (0x000237e5) main_mup2_pane_g3_ParamLimits

0x582a,	// (0x000237e5) main_mup2_pane_g3

0x3412,	// (0x000213cd) popup_toolbar_window_cp04

0xb58b,	// (0x00029546) popup_call2_audio_second_window_g3_ParamLimits

0xb58b,	// (0x00029546) popup_call2_audio_second_window_g3

0xb995,	// (0x00029950) popup_call2_audio_first_window_g4_ParamLimits

0xb995,	// (0x00029950) popup_call2_audio_first_window_g4

0xc014,	// (0x00029fcf) popup_call2_audio_in_window_g4_ParamLimits

0xc014,	// (0x00029fcf) popup_call2_audio_in_window_g4

0x503d,	// (0x00022ff8) aid_area_sk_bg_cut_ParamLimits

0x503d,	// (0x00022ff8) aid_area_sk_bg_cut

0xb1ab,	// (0x00029166) aid_area_sk_bg_cut_2_ParamLimits

0xb1ab,	// (0x00029166) aid_area_sk_bg_cut_2

0x5b49,	// (0x00023b04) aid_placing_details_win

0x5b51,	// (0x00023b0c) aid_placing_details_win_2

0xc929,	// (0x0002a8e4) camera2_autofocus_pane_g1_ParamLimits

0x0f93,	// (0x0001ef4e) popup_fixed_preview_cale_window_ParamLimits

0x0f93,	// (0x0001ef4e) popup_fixed_preview_cale_window

0xaf87,	// (0x00028f42) navi_slider_pane_g3

0xaf90,	// (0x00028f4b) navi_slider_pane_g4

0xaf99,	// (0x00028f54) navi_slider_pane_g5

0xaf87,	// (0x00028f42) navi_slider_pane_g6

0x13cb,	// (0x0001f386) navi_slider_pane_g7

0xb0ac,	// (0x00029067) mup_scale_pane_g3

0xb0b5,	// (0x00029070) mup_scale_pane_g4

0xb0be,	// (0x00029079) mup_scale_pane_g5

0x4d31,	// (0x00022cec) mup_scale_pane_g6

0x4d3a,	// (0x00022cf5) mup_scale_pane_g7

0xaf87,	// (0x00028f42) cams2_slider_pane_g3

0xc59e,	// (0x0002a559) cams2_slider_pane_g4

0x189e,	// (0x0001f859) cams2_slider_pane_g5

0xaf87,	// (0x00028f42) cams2_slider_pane_g6

0x18a6,	// (0x0001f861) cams2_slider_pane_g7

0xc7c9,	// (0x0002a784) camera2_autofocus_pane_cp_g1

0xc3b5,	// (0x0002a370) bg_popup_preview_window_pane_cp02_ParamLimits

0xc3b5,	// (0x0002a370) bg_popup_preview_window_pane_cp02

0xcb49,	// (0x0002ab04) list_fp_cale_pane_ParamLimits

0xcb49,	// (0x0002ab04) list_fp_cale_pane

0xcb55,	// (0x0002ab10) popup_fixed_preview_cale_window_t1_ParamLimits

0xcb55,	// (0x0002ab10) popup_fixed_preview_cale_window_t1

0x6318,	// (0x000242d3) popup_fixed_preview_cale_window_t2_ParamLimits

0x6318,	// (0x000242d3) popup_fixed_preview_cale_window_t2

0x632d,	// (0x000242e8) popup_fixed_preview_cale_window_t3_ParamLimits

0x632d,	// (0x000242e8) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0002d778) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0002d778) popup_fixed_preview_cale_window_t

0x6342,	// (0x000242fd) list_single_fp_cale_pane_ParamLimits

0x6342,	// (0x000242fd) list_single_fp_cale_pane

0xcb73,	// (0x0002ab2e) list_single_fp_cale_pane_g1_ParamLimits

0xcb73,	// (0x0002ab2e) list_single_fp_cale_pane_g1

0xcb7f,	// (0x0002ab3a) list_single_fp_cale_pane_g2_ParamLimits

0xcb7f,	// (0x0002ab3a) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0002d77f) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0002d77f) list_single_fp_cale_pane_g

0xcb98,	// (0x0002ab53) list_single_fp_cale_pane_t1_ParamLimits

0xcb98,	// (0x0002ab53) list_single_fp_cale_pane_t1

0xcbaa,	// (0x0002ab65) list_single_fp_cale_pane_t2_ParamLimits

0xcbaa,	// (0x0002ab65) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0002d786) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0002d786) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0ffb,	// (0x0001efb6) main_dialer_pane

0x6355,	// (0x00024310) aid_cell_size_keypad

0x635f,	// (0x0002431a) dialer_ne_pane

0x6369,	// (0x00024324) grid_dialer_command_1_pane

0x6371,	// (0x0002432c) grid_dialer_command_2_pane

0x6379,	// (0x00024334) grid_dialer_keypad_pane

0x638d,	// (0x00024348) bg_popup_call_pane_cp06_ParamLimits

0x638d,	// (0x00024348) bg_popup_call_pane_cp06

0x6399,	// (0x00024354) dialer_ne_clear_pane_ParamLimits

0x6399,	// (0x00024354) dialer_ne_clear_pane

0xcbdd,	// (0x0002ab98) dialer_ne_pane_g1

0xcbe5,	// (0x0002aba0) dialer_ne_pane_t1_ParamLimits

0xcbe5,	// (0x0002aba0) dialer_ne_pane_t1

0x63a5,	// (0x00024360) dialer_ne_pane_t2_ParamLimits

0x63a5,	// (0x00024360) dialer_ne_pane_t2

0x63c2,	// (0x0002437d) dialer_ne_pane_t3_ParamLimits

0x63c2,	// (0x0002437d) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0002d78b) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0002d78b) dialer_ne_pane_t

0x63e6,	// (0x000243a1) dialer_ne_pane_t3_copy1_ParamLimits

0x63e6,	// (0x000243a1) dialer_ne_pane_t3_copy1

0x640a,	// (0x000243c5) cell_dialer_keypad_pane_ParamLimits

0x640a,	// (0x000243c5) cell_dialer_keypad_pane

0x6421,	// (0x000243dc) cell_dialer_command_1_pane_ParamLimits

0x6421,	// (0x000243dc) cell_dialer_command_1_pane

0x6437,	// (0x000243f2) cell_dialer_command_2_pane_ParamLimits

0x6437,	// (0x000243f2) cell_dialer_command_2_pane

0xcbf7,	// (0x0002abb2) bg_button_pane_cp02_ParamLimits

0xcbf7,	// (0x0002abb2) bg_button_pane_cp02

0x6446,	// (0x00024401) cell_dialer_keypad_pane_g1_ParamLimits

0x6446,	// (0x00024401) cell_dialer_keypad_pane_g1

0xcbf7,	// (0x0002abb2) bg_button_pane_cp03_ParamLimits

0xcbf7,	// (0x0002abb2) bg_button_pane_cp03

0x645b,	// (0x00024416) cell_dialer_command_1_pane_g1_ParamLimits

0x645b,	// (0x00024416) cell_dialer_command_1_pane_g1

0xcc03,	// (0x0002abbe) bg_button_pane_cp04

0x646f,	// (0x0002442a) cell_dialer_command_2_pane_g1

0xa517,	// (0x000284d2) bg_button_pane_cp06

0xcc0b,	// (0x0002abc6) dialer_ne_clear_pane_g1

0xae5a,	// (0x00028e15) navi_pane_g2

0xae88,	// (0x00028e43) navi_pane_g3

0x0002,

0xf3e5,	// (0x0002d3a0) navi_pane_g

0xaf17,	// (0x00028ed2) navi_pane_mv_g2

0xaf3e,	// (0x00028ef9) navi_pane_mv_g5

0x48df,	// (0x0002289a) navi_pane_mv_t1

0xa324,	// (0x000282df) main_clock2_pane

0x64af,	// (0x0002446a) main_clock2_list_pane_ParamLimits

0x64af,	// (0x0002446a) main_clock2_list_pane

0x64d9,	// (0x00024494) main_clock2_pane_t1_ParamLimits

0x64d9,	// (0x00024494) main_clock2_pane_t1

0x64fd,	// (0x000244b8) main_clock2_pane_t2_ParamLimits

0x64fd,	// (0x000244b8) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0002d797) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0002d797) main_clock2_pane_t

0x6558,	// (0x00024513) popup_clock_analogue_window_cp03_ParamLimits

0x6558,	// (0x00024513) popup_clock_analogue_window_cp03

0x6576,	// (0x00024531) popup_clock_digital_window_cp02_ParamLimits

0x6576,	// (0x00024531) popup_clock_digital_window_cp02

0x65e3,	// (0x0002459e) main_clock2_list_single_pane_ParamLimits

0x65e3,	// (0x0002459e) main_clock2_list_single_pane

0xa517,	// (0x000284d2) list_highlight_pane_cp05

0xcc45,	// (0x0002ac00) main_clock2_list_single_pane_t1

0x3412,	// (0x000213cd) popup_toolbar_window_cp04_ParamLimits

0x5b73,	// (0x00023b2e) camera2_autofocus_pane_g2_ParamLimits

0x5b73,	// (0x00023b2e) camera2_autofocus_pane_g2

0x5b7f,	// (0x00023b3a) camera2_autofocus_pane_g3_ParamLimits

0x5b7f,	// (0x00023b3a) camera2_autofocus_pane_g3

0x5b8b,	// (0x00023b46) camera2_autofocus_pane_g4_ParamLimits

0x5b8b,	// (0x00023b46) camera2_autofocus_pane_g4

0x5b97,	// (0x00023b52) camera2_autofocus_pane_g5_ParamLimits

0x5b97,	// (0x00023b52) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0002d6db) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0002d6db) camera2_autofocus_pane_g

0x5d26,	// (0x00023ce1) camera2_autofocus_pane_cp_g2

0x5d2e,	// (0x00023ce9) camera2_autofocus_pane_cp_g3

0x5d36,	// (0x00023cf1) camera2_autofocus_pane_cp_g4

0x5d3e,	// (0x00023cf9) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0002d741) camera2_autofocus_pane_cp_g

0x6385,	// (0x00024340) popup_dialer_spcha_window

0x9bdb,	// (0x00027b96) bg_popup_sub_pane_cp07

0xcc53,	// (0x0002ac0e) list_spcha_pane

0xcc5b,	// (0x0002ac16) list_single_spcha_pane_ParamLimits

0xcc5b,	// (0x0002ac16) list_single_spcha_pane

0x9bdb,	// (0x00027b96) list_highlight_pane_cp06

0xcc6c,	// (0x0002ac27) list_single_spcha_pane_t1

0xbdbe,	// (0x00029d79) popup_call2_audio_out_window_g4_ParamLimits

0xbdbe,	// (0x00029d79) popup_call2_audio_out_window_g4

0x0ffb,	// (0x0001efb6) main_imed2_pane

0x14eb,	// (0x0001f4a6) popup_imed_adjust2_window

0x14fe,	// (0x0001f4b9) popup_imed_trans_window_ParamLimits

0x14fe,	// (0x0001f4b9) popup_imed_trans_window

0xc607,	// (0x0002a5c2) popup_blid_sat_info2_window_t1

0xc615,	// (0x0002a5d0) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0002d670) popup_blid_sat_info2_window_t

0x65f5,	// (0x000245b0) aid_size_cell_colour_35

0x660f,	// (0x000245ca) aid_size_cell_colour_112

0x6626,	// (0x000245e1) aid_size_cell_effect

0xa407,	// (0x000283c2) bg_tb_trans_pane_cp02

0xabc4,	// (0x00028b7f) heading_imed_pane

0x6640,	// (0x000245fb) listscroll_imed_pane

0xcc7a,	// (0x0002ac35) heading_imed_pane_g1

0xcc82,	// (0x0002ac3d) heading_imed_pane_t1

0xcc90,	// (0x0002ac4b) grid_imed_colour_35_pane_ParamLimits

0xcc90,	// (0x0002ac4b) grid_imed_colour_35_pane

0x664c,	// (0x00024607) grid_imed_effect_pane

0xcca8,	// (0x0002ac63) list_imed_aspect_pane

0x665c,	// (0x00024617) scroll_pane_cp027_ParamLimits

0x665c,	// (0x00024617) scroll_pane_cp027

0x6668,	// (0x00024623) cell_imed_effect_pane_ParamLimits

0x6668,	// (0x00024623) cell_imed_effect_pane

0xccb0,	// (0x0002ac6b) cell_imed_colour_pane_ParamLimits

0xccb0,	// (0x0002ac6b) cell_imed_colour_pane

0xccf2,	// (0x0002acad) cell_imed_colour_pane_g1_ParamLimits

0xccf2,	// (0x0002acad) cell_imed_colour_pane_g1

0xcd03,	// (0x0002acbe) hgihlgiht_grid_pane_cp016_ParamLimits

0xcd03,	// (0x0002acbe) hgihlgiht_grid_pane_cp016

0x6680,	// (0x0002463b) cell_imed_effect_pane_g1

0x6688,	// (0x00024643) grid_highlight_pane_cp017

0xcd14,	// (0x0002accf) list_imed_single_pane_ParamLimits

0xcd14,	// (0x0002accf) list_imed_single_pane

0x9bdb,	// (0x00027b96) list_highlight_pane_cp07

0xcd29,	// (0x0002ace4) list_imed_aspect_pane_comp1_t1

0xc3c1,	// (0x0002a37c) bg_tb_trans_pane_cp05

0xcd4b,	// (0x0002ad06) popup_imed_adjust2_window_g1

0xcd72,	// (0x0002ad2d) popup_imed_adjust2_window_t1

0xcd8a,	// (0x0002ad45) slider_imed_adjust_pane

0xcd9e,	// (0x0002ad59) slider_imed_adjust_pane_g1

0xcdae,	// (0x0002ad69) slider_imed_adjust_pane_g2

0xcdbe,	// (0x0002ad79) slider_imed_adjust_pane_g3

0xcdcf,	// (0x0002ad8a) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0002d7b4) slider_imed_adjust_pane_g

0x6691,	// (0x0002464c) aid_size_cell_clipart2

0x669d,	// (0x00024658) grid_imed_clipart_pane

0xcde0,	// (0x0002ad9b) scroll_pane_cp031

0x66a7,	// (0x00024662) cell_imed_clipart_pane_ParamLimits

0x66a7,	// (0x00024662) cell_imed_clipart_pane

0x66ca,	// (0x00024685) cell_imed_clipart_pane_g1

0x9bdb,	// (0x00027b96) grid_highlight_pane_cp014

0x64bb,	// (0x00024476) main_clock2_pane_g1_ParamLimits

0x64bb,	// (0x00024476) main_clock2_pane_g1

0x658e,	// (0x00024549) aid_call2_pane_cp10

0x65a0,	// (0x0002455b) aid_call_pane_cp10

0xadb9,	// (0x00028d74) popup_clock_analogue_window_cp10_g1

0xadb9,	// (0x00028d74) popup_clock_analogue_window_cp10_g2

0x65b2,	// (0x0002456d) popup_clock_analogue_window_cp10_g3

0x65b2,	// (0x0002456d) popup_clock_analogue_window_cp10_g4

0xadb9,	// (0x00028d74) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0002d7a2) popup_clock_analogue_window_cp10_g

0x65c4,	// (0x0002457f) popup_clock_analogue_window_cp10_t1

0x18af,	// (0x0001f86a) clock_digital_number_pane_cp10_ParamLimits

0x18af,	// (0x0001f86a) clock_digital_number_pane_cp10

0x18c7,	// (0x0001f882) clock_digital_number_pane_cp11_ParamLimits

0x18c7,	// (0x0001f882) clock_digital_number_pane_cp11

0x18df,	// (0x0001f89a) clock_digital_number_pane_cp12_ParamLimits

0x18df,	// (0x0001f89a) clock_digital_number_pane_cp12

0x18f7,	// (0x0001f8b2) clock_digital_number_pane_cp13_ParamLimits

0x18f7,	// (0x0001f8b2) clock_digital_number_pane_cp13

0x190f,	// (0x0001f8ca) clock_digital_separator_pane_cp10_ParamLimits

0x190f,	// (0x0001f8ca) clock_digital_separator_pane_cp10

0x1927,	// (0x0001f8e2) popup_clock_digital_window_cp02_t1_ParamLimits

0x1927,	// (0x0001f8e2) popup_clock_digital_window_cp02_t1

0xa24b,	// (0x00028206) clock_digital_number_pane_cp10_g1

0xa24b,	// (0x00028206) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0002d7bd) clock_digital_number_pane_cp10_g

0xa24b,	// (0x00028206) clock_digital_separator_pane_cp10_g1

0xa24b,	// (0x00028206) clock_digital_separator_pane_g2_cp10

0xaf46,	// (0x00028f01) navi_pane_vded_g4

0xaf4f,	// (0x00028f0a) navi_pane_vded_g5

0xaf58,	// (0x00028f13) navi_pane_vded_t1

0x0ffb,	// (0x0001efb6) main_vded_pane

0x66d3,	// (0x0002468e) main_vded_pane_g1

0x66df,	// (0x0002469a) main_vded_pane_g2

0x66e9,	// (0x000246a4) main_vded_pane_g3

0x0002,

0xf807,	// (0x0002d7c2) main_vded_pane_g

0x66f3,	// (0x000246ae) main_vded_pane_t1

0x6701,	// (0x000246bc) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0002d7c9) main_vded_pane_t

0x670f,	// (0x000246ca) vded_slider_pane

0x6719,	// (0x000246d4) vded_video_pane

0xcde8,	// (0x0002ada3) vded_video_pane_g1

0x6723,	// (0x000246de) vded_video_pane_g2

0xc7c9,	// (0x0002a784) vded_video_pane_g3

0x0002,

0xf813,	// (0x0002d7ce) vded_video_pane_g

0xcdf2,	// (0x0002adad) vded_slider_pane_g1

0xc51c,	// (0x0002a4d7) vded_slider_pane_g2

0xcdfb,	// (0x0002adb6) vded_slider_pane_g3

0xce04,	// (0x0002adbf) vded_slider_pane_g4

0xce0d,	// (0x0002adc8) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0002d7d5) vded_slider_pane_g

0x6287,	// (0x00024242) mup3_rocker_pane_ParamLimits

0x6287,	// (0x00024242) mup3_rocker_pane

0x672c,	// (0x000246e7) mup3_control_keys_pane_g1

0x6734,	// (0x000246ef) mup3_control_keys_pane_g2

0x673c,	// (0x000246f7) mup3_control_keys_pane_g3

0x6744,	// (0x000246ff) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0002d7e0) mup3_control_keys_pane_g

0x0fbb,	// (0x0001ef76) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0fbb,	// (0x0001ef76) popup_toolbar2_fixed_window_cp01

0x62a1,	// (0x0002425c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x62a1,	// (0x0002425c) popup_toolbar2_fixed_window_cp02

0xb6fd,	// (0x000296b8) popup_call2_audio_second_window_t4_ParamLimits

0xb6fd,	// (0x000296b8) popup_call2_audio_second_window_t4

0xbc2b,	// (0x00029be6) popup_call2_audio_first_window_t6_ParamLimits

0xbc2b,	// (0x00029be6) popup_call2_audio_first_window_t6

0xbec1,	// (0x00029e7c) popup_call2_audio_out_window_t6_ParamLimits

0xbec1,	// (0x00029e7c) popup_call2_audio_out_window_t6

0x0ffb,	// (0x0001efb6) main_vitu_pane

0x6754,	// (0x0002470f) aid_size_cell_itu_ParamLimits

0x6754,	// (0x0002470f) aid_size_cell_itu

0xd0f0,	// (0x0002b0ab) bg_popup_window_pane_cp08_ParamLimits

0xd0f0,	// (0x0002b0ab) bg_popup_window_pane_cp08

0x6762,	// (0x0002471d) field_vitu_entry_pane_ParamLimits

0x6762,	// (0x0002471d) field_vitu_entry_pane

0x6771,	// (0x0002472c) grid_vitu_function_pane_ParamLimits

0x6771,	// (0x0002472c) grid_vitu_function_pane

0x6781,	// (0x0002473c) grid_vitu_itu_pane_ParamLimits

0x6781,	// (0x0002473c) grid_vitu_itu_pane

0x6791,	// (0x0002474c) cell_vitu_itu_pane_ParamLimits

0x6791,	// (0x0002474c) cell_vitu_itu_pane

0x67a6,	// (0x00024761) cell_vitu_function_pane_ParamLimits

0x67a6,	// (0x00024761) cell_vitu_function_pane

0xa407,	// (0x000283c2) bg_popup_sub_pane_cp08_ParamLimits

0xa407,	// (0x000283c2) bg_popup_sub_pane_cp08

0x67b8,	// (0x00024773) field_vitu_entry_pane_t1_ParamLimits

0x67b8,	// (0x00024773) field_vitu_entry_pane_t1

0xce2e,	// (0x0002ade9) field_vitu_entry_pane_t2_ParamLimits

0xce2e,	// (0x0002ade9) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0002d7ee) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0002d7ee) field_vitu_entry_pane_t

0xce4b,	// (0x0002ae06) bg_button_pane_cp05_ParamLimits

0xce4b,	// (0x0002ae06) bg_button_pane_cp05

0x67d5,	// (0x00024790) cell_vitu_itu_pane_g1

0x67ed,	// (0x000247a8) cell_vitu_itu_pane_t1_ParamLimits

0x67ed,	// (0x000247a8) cell_vitu_itu_pane_t1

0x67ff,	// (0x000247ba) cell_vitu_itu_pane_t2_ParamLimits

0x67ff,	// (0x000247ba) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0002d7f3) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0002d7f3) cell_vitu_itu_pane_t

0xce59,	// (0x0002ae14) bg_button_pane_cp07

0x6834,	// (0x000247ef) cell_vitu_function_pane_g1

0x10d4,	// (0x0001f08f) main_calc_pane_g1

0x0da5,	// (0x0001ed60) aid_visual_content_pane

0x0ffb,	// (0x0001efb6) main_vradio_pane

0x683d,	// (0x000247f8) main_vradio_pane_g1_ParamLimits

0x683d,	// (0x000247f8) main_vradio_pane_g1

0xce63,	// (0x0002ae1e) main_vradio_pane_g2_ParamLimits

0xce63,	// (0x0002ae1e) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0002d7fa) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0002d7fa) main_vradio_pane_g

0x684d,	// (0x00024808) main_vradio_pane_t1_ParamLimits

0x684d,	// (0x00024808) main_vradio_pane_t1

0x685f,	// (0x0002481a) main_vradio_pane_t2_ParamLimits

0x685f,	// (0x0002481a) main_vradio_pane_t2

0xce70,	// (0x0002ae2b) main_vradio_pane_t3_ParamLimits

0xce70,	// (0x0002ae2b) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0002d7ff) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0002d7ff) main_vradio_pane_t

0x6871,	// (0x0002482c) vradio_rocker_control_pane_ParamLimits

0x6871,	// (0x0002482c) vradio_rocker_control_pane

0x687d,	// (0x00024838) vradio_station_info_pane_ParamLimits

0x687d,	// (0x00024838) vradio_station_info_pane

0xce84,	// (0x0002ae3f) vradio_frequency_info_pane_ParamLimits

0xce84,	// (0x0002ae3f) vradio_frequency_info_pane

0xc7c9,	// (0x0002a784) vradio_station_info_pane_g1

0xce93,	// (0x0002ae4e) vradio_station_info_pane_t1_ParamLimits

0xce93,	// (0x0002ae4e) vradio_station_info_pane_t1

0xceb5,	// (0x0002ae70) vradio_station_info_pane_t2_ParamLimits

0xceb5,	// (0x0002ae70) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0002d806) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0002d806) vradio_station_info_pane_t

0xcec7,	// (0x0002ae82) vradio_tuning_pane

0xcecf,	// (0x0002ae8a) vradio_rocker_control_pane_g1

0xced7,	// (0x0002ae92) vradio_rocker_control_pane_g2

0xcedf,	// (0x0002ae9a) vradio_rocker_control_pane_g3

0xcee7,	// (0x0002aea2) vradio_rocker_control_pane_g4

0xceef,	// (0x0002aeaa) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0002d80b) vradio_rocker_control_pane_g

0x688c,	// (0x00024847) vradio_frequency_info_pane_g1

0xcef7,	// (0x0002aeb2) vradio_frequency_info_pane_t1_ParamLimits

0xcef7,	// (0x0002aeb2) vradio_frequency_info_pane_t1

0x6896,	// (0x00024851) vradio_tuning_pane_g1

0x689f,	// (0x0002485a) vradio_tuning_pane_t1

0x0dc1,	// (0x0001ed7c) area_side_right_pane_ParamLimits

0x0dc1,	// (0x0001ed7c) area_side_right_pane

0xc37c,	// (0x0002a337) status_small_pane_g1

0xc384,	// (0x0002a33f) status_small_pane_g2

0xc38d,	// (0x0002a348) status_small_pane_g3

0xc396,	// (0x0002a351) status_small_pane_g4

0x0003,

0xf60b,	// (0x0002d5c6) status_small_pane_g

0xc39f,	// (0x0002a35a) status_small_pane_t1

0x0ffb,	// (0x0001efb6) main_video3_pane

0xcf0b,	// (0x0002aec6) cams_zoom_vslider_pane

0xcf13,	// (0x0002aece) image3_wide_pane_ParamLimits

0xcf13,	// (0x0002aece) image3_wide_pane

0xcf2d,	// (0x0002aee8) image3_wide_small_pane

0xcf39,	// (0x0002aef4) main_video3_pane_g1_ParamLimits

0xcf39,	// (0x0002aef4) main_video3_pane_g1

0xcf55,	// (0x0002af10) main_video3_pane_g2_ParamLimits

0xcf55,	// (0x0002af10) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0002d816) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0002d816) main_video3_pane_g

0xcf71,	// (0x0002af2c) main_video3_pane_t1_ParamLimits

0xcf71,	// (0x0002af2c) main_video3_pane_t1

0xcf9c,	// (0x0002af57) main_video3_pane_t2_ParamLimits

0xcf9c,	// (0x0002af57) main_video3_pane_t2

0xcfc7,	// (0x0002af82) main_video3_pane_t3_ParamLimits

0xcfc7,	// (0x0002af82) main_video3_pane_t3

0x0002,

0xf860,	// (0x0002d81b) main_video3_pane_t_ParamLimits

0xf860,	// (0x0002d81b) main_video3_pane_t

0xcff4,	// (0x0002afaf) cams_zoom_vslider_pane_g1

0xcffd,	// (0x0002afb8) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0002d822) cams_zoom_vslider_pane_g

0xd005,	// (0x0002afc0) small_slider_vertical_pane

0xc7c9,	// (0x0002a784) small_slider_vertical_pane_g1

0xc7c9,	// (0x0002a784) small_slider_vertical_pane_g2

0xd00d,	// (0x0002afc8) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0002d827) small_slider_vertical_pane_g

0x0ffb,	// (0x0001efb6) main_hwr_training_pane

0xd016,	// (0x0002afd1) hwr_training_instruct_pane_ParamLimits

0xd016,	// (0x0002afd1) hwr_training_instruct_pane

0x68ae,	// (0x00024869) hwr_training_navi_pane_ParamLimits

0x68ae,	// (0x00024869) hwr_training_navi_pane

0x68c8,	// (0x00024883) hwr_training_write_pane_ParamLimits

0x68c8,	// (0x00024883) hwr_training_write_pane

0x9bdb,	// (0x00027b96) bg_frame_shadow_pane

0xd04d,	// (0x0002b008) hwr_training_write_pane_g1

0xd055,	// (0x0002b010) hwr_training_write_pane_g2

0xd05d,	// (0x0002b018) hwr_training_write_pane_g3

0xd065,	// (0x0002b020) hwr_training_write_pane_g4

0xd06d,	// (0x0002b028) hwr_training_write_pane_g5

0xd075,	// (0x0002b030) hwr_training_write_pane_g6

0xd07d,	// (0x0002b038) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0002d82e) hwr_training_write_pane_g

0x1946,	// (0x0001f901) hwr_training_navi_pane_g1_ParamLimits

0x1946,	// (0x0001f901) hwr_training_navi_pane_g1

0x1958,	// (0x0001f913) hwr_training_navi_pane_g2_ParamLimits

0x1958,	// (0x0001f913) hwr_training_navi_pane_g2

0x196a,	// (0x0001f925) hwr_training_navi_pane_g3_ParamLimits

0x196a,	// (0x0001f925) hwr_training_navi_pane_g3

0x197a,	// (0x0001f935) hwr_training_navi_pane_g4_ParamLimits

0x197a,	// (0x0001f935) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0002d83d) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0002d83d) hwr_training_navi_pane_g

0x1994,	// (0x0001f94f) hwr_training_navi_pane_t1

0x6900,	// (0x000248bb) list_single_hwr_training_instruct_pane_ParamLimits

0x6900,	// (0x000248bb) list_single_hwr_training_instruct_pane

0xd085,	// (0x0002b040) list_single_hwr_training_instruct_pane_t1

0xc709,	// (0x0002a6c4) bg_frame_shadow_pane_g1

0xd094,	// (0x0002b04f) bg_frame_shadow_pane_g2

0xd09c,	// (0x0002b057) bg_frame_shadow_pane_g3

0xd0a4,	// (0x0002b05f) bg_frame_shadow_pane_g4

0xd0ac,	// (0x0002b067) bg_frame_shadow_pane_g5

0xd0b4,	// (0x0002b06f) bg_frame_shadow_pane_g6

0xd0bc,	// (0x0002b077) bg_frame_shadow_pane_g7

0xa3ef,	// (0x000283aa) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0002d848) bg_frame_shadow_pane_g

0x0ffb,	// (0x0001efb6) main_video_tele_dialer_pane

0x19a2,	// (0x0001f95d) aid_size_cell_video_keypad_ParamLimits

0x19a2,	// (0x0001f95d) aid_size_cell_video_keypad

0x19b2,	// (0x0001f96d) grid_video_dialer_keypad_pane_ParamLimits

0x19b2,	// (0x0001f96d) grid_video_dialer_keypad_pane

0x19e6,	// (0x0001f9a1) video_down_pane_cp_ParamLimits

0x19e6,	// (0x0001f9a1) video_down_pane_cp

0x19f4,	// (0x0001f9af) cell_video_dialer_keypad_pane_ParamLimits

0x19f4,	// (0x0001f9af) cell_video_dialer_keypad_pane

0xd0c4,	// (0x0002b07f) bg_button_pane_cp08_ParamLimits

0xd0c4,	// (0x0002b07f) bg_button_pane_cp08

0x6945,	// (0x00024900) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6945,	// (0x00024900) cell_video_dialer_keypad_pane_g1

0x627b,	// (0x00024236) mup3_rocker2_pane_ParamLimits

0x627b,	// (0x00024236) mup3_rocker2_pane

0xc7c9,	// (0x0002a784) mup3_rocker2_pane_g1

0x145f,	// (0x0001f41a) main_dialer2_pane

0x0ffb,	// (0x0001efb6) main_mp4_pane

0x1a11,	// (0x0001f9cc) main_mp4_pane_g1_ParamLimits

0x1a11,	// (0x0001f9cc) main_mp4_pane_g1

0x1a1f,	// (0x0001f9da) main_mp4_pane_g2_ParamLimits

0x1a1f,	// (0x0001f9da) main_mp4_pane_g2

0x1a2d,	// (0x0001f9e8) main_mp4_pane_g3_ParamLimits

0x1a2d,	// (0x0001f9e8) main_mp4_pane_g3

0x1a72,	// (0x0001fa2d) main_mp4_pane_g4_ParamLimits

0x1a72,	// (0x0001fa2d) main_mp4_pane_g4

0x1a9a,	// (0x0001fa55) main_mp4_pane_g5_ParamLimits

0x1a9a,	// (0x0001fa55) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0002d868) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0002d868) main_mp4_pane_g

0x1aea,	// (0x0001faa5) main_mp4_pane_t1_ParamLimits

0x1aea,	// (0x0001faa5) main_mp4_pane_t1

0x1b46,	// (0x0001fb01) main_mp4_pane_t2_ParamLimits

0x1b46,	// (0x0001fb01) main_mp4_pane_t2

0xd0d0,	// (0x0002b08b) main_mp4_pane_t3_ParamLimits

0xd0d0,	// (0x0002b08b) main_mp4_pane_t3

0x1b98,	// (0x0001fb53) main_mp4_pane_t4_ParamLimits

0x1b98,	// (0x0001fb53) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0002d875) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0002d875) main_mp4_pane_t

0x1bdc,	// (0x0001fb97) mp4_progress_pane_ParamLimits

0x1bdc,	// (0x0001fb97) mp4_progress_pane

0x1c26,	// (0x0001fbe1) mp4_rocker_pane_ParamLimits

0x1c26,	// (0x0001fbe1) mp4_rocker_pane

0xd106,	// (0x0002b0c1) mp4_progress_pane_t1

0xd11f,	// (0x0002b0da) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0002d87e) mp4_progress_pane_t

0xd138,	// (0x0002b0f3) mup_progress_pane_cp04

0xd837,	// (0x0002b7f2) mp4_rocker_pane_g1

0x1c46,	// (0x0001fc01) aid_cell_size_keypad2_ParamLimits

0x1c46,	// (0x0001fc01) aid_cell_size_keypad2

0x1c56,	// (0x0001fc11) dialer2_ne_pane_ParamLimits

0x1c56,	// (0x0001fc11) dialer2_ne_pane

0x1c64,	// (0x0001fc1f) grid_dialer2_keypad_pane_ParamLimits

0x1c64,	// (0x0001fc1f) grid_dialer2_keypad_pane

0xd144,	// (0x0002b0ff) bg_popup_call_pane_cp07_ParamLimits

0xd144,	// (0x0002b0ff) bg_popup_call_pane_cp07

0x697f,	// (0x0002493a) dialer2_ne_pane_t1_ParamLimits

0x697f,	// (0x0002493a) dialer2_ne_pane_t1

0x1c74,	// (0x0001fc2f) cell_dialer2_keypad_pane_ParamLimits

0x1c74,	// (0x0001fc2f) cell_dialer2_keypad_pane

0xd164,	// (0x0002b11f) bg_button_pane_pane_cp04_ParamLimits

0xd164,	// (0x0002b11f) bg_button_pane_pane_cp04

0x69a4,	// (0x0002495f) cell_dialer2_keypad_pane_g1_ParamLimits

0x69a4,	// (0x0002495f) cell_dialer2_keypad_pane_g1

0x32d4,	// (0x0002128f) aid_placing_vt_set_content_ParamLimits

0x32d4,	// (0x0002128f) aid_placing_vt_set_content

0x3300,	// (0x000212bb) aid_placing_vt_set_title_ParamLimits

0x3300,	// (0x000212bb) aid_placing_vt_set_title

0x0ffb,	// (0x0001efb6) main_image3_pane

0x1cbb,	// (0x0001fc76) area_side_right_pane_cp01_ParamLimits

0x1cbb,	// (0x0001fc76) area_side_right_pane_cp01

0x1ce8,	// (0x0001fca3) main_image3_pane_g1_ParamLimits

0x1ce8,	// (0x0001fca3) main_image3_pane_g1

0x1cf6,	// (0x0001fcb1) main_image3_pane_g2_ParamLimits

0x1cf6,	// (0x0001fcb1) main_image3_pane_g2

0x1d0f,	// (0x0001fcca) main_image3_pane_g3_ParamLimits

0x1d0f,	// (0x0001fcca) main_image3_pane_g3

0x1d28,	// (0x0001fce3) main_image3_pane_g4_ParamLimits

0x1d28,	// (0x0001fce3) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0002d88d) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0002d88d) main_image3_pane_g

0x1d41,	// (0x0001fcfc) main_image3_pane_t1_ParamLimits

0x1d41,	// (0x0001fcfc) main_image3_pane_t1

0x1d66,	// (0x0001fd21) main_image3_pane_t2_ParamLimits

0x1d66,	// (0x0001fd21) main_image3_pane_t2

0x1d85,	// (0x0001fd40) main_image3_pane_t3_ParamLimits

0x1d85,	// (0x0001fd40) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0002d896) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0002d896) main_image3_pane_t

0xd0f0,	// (0x0002b0ab) grid_sctrl_middle_pane_cp01_ParamLimits

0xd0f0,	// (0x0002b0ab) grid_sctrl_middle_pane_cp01

0x6a0c,	// (0x000249c7) cell_sctrl_middle_pane_cp01_ParamLimits

0x6a0c,	// (0x000249c7) cell_sctrl_middle_pane_cp01

0x6a1d,	// (0x000249d8) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6a1d,	// (0x000249d8) cell_sctrl_middle_pane_cp01_g1

0x0ffb,	// (0x0001efb6) main_call4_pane

0x1de6,	// (0x0001fda1) aid_size_button_call4_ParamLimits

0x1de6,	// (0x0001fda1) aid_size_button_call4

0x1e16,	// (0x0001fdd1) call4_windows_pane_ParamLimits

0x1e16,	// (0x0001fdd1) call4_windows_pane

0x1e30,	// (0x0001fdeb) grid_call4_button_pane_ParamLimits

0x1e30,	// (0x0001fdeb) grid_call4_button_pane

0xd170,	// (0x0002b12b) call4_windows_conf_pane

0xd187,	// (0x0002b142) popup_call4_audio_first_window_ParamLimits

0xd187,	// (0x0002b142) popup_call4_audio_first_window

0xd1cf,	// (0x0002b18a) popup_call4_audio_second_window_ParamLimits

0xd1cf,	// (0x0002b18a) popup_call4_audio_second_window

0xd1e8,	// (0x0002b1a3) popup_call4_audio_wait_window_ParamLimits

0xd1e8,	// (0x0002b1a3) popup_call4_audio_wait_window

0x1e54,	// (0x0001fe0f) cell_call4_button_pane_ParamLimits

0x1e54,	// (0x0001fe0f) cell_call4_button_pane

0x6a2a,	// (0x000249e5) bg_button_pane_cp09_ParamLimits

0x6a2a,	// (0x000249e5) bg_button_pane_cp09

0x1e79,	// (0x0001fe34) cell_call4_button_pane_g1_ParamLimits

0x1e79,	// (0x0001fe34) cell_call4_button_pane_g1

0x6a36,	// (0x000249f1) cell_call4_button_pane_t1_ParamLimits

0x6a36,	// (0x000249f1) cell_call4_button_pane_t1

0xd1fe,	// (0x0002b1b9) popup_call4_audio_conf_window_ParamLimits

0xd1fe,	// (0x0002b1b9) popup_call4_audio_conf_window

0x62ae,	// (0x00024269) mup3_progress_pane_t1_ParamLimits

0x62cd,	// (0x00024288) mup3_progress_pane_t2_ParamLimits

0xcb06,	// (0x0002aac1) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0002d76a) mup3_progress_pane_t_ParamLimits

0xcb23,	// (0x0002aade) mup_progress_pane_cp03_ParamLimits

0x674c,	// (0x00024707) mup3_control_keys_pane_g4_copy1

0x1c0a,	// (0x0001fbc5) mp4_rocker2_pane_ParamLimits

0x1c0a,	// (0x0001fbc5) mp4_rocker2_pane

0xd212,	// (0x0002b1cd) mp4_rocker2_pane_g1

0xd21a,	// (0x0002b1d5) mp4_rocker2_pane_g2

0x1eb8,	// (0x0001fe73) mp4_rocker2_pane_g3

0x1ec0,	// (0x0001fe7b) mp4_rocker2_pane_g4

0x1ec8,	// (0x0001fe83) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0002d89f) mp4_rocker2_pane_g

0x0ffb,	// (0x0001efb6) main_camera4_pane

0x0ffb,	// (0x0001efb6) main_video4_pane

0x19c2,	// (0x0001f97d) main_video_tele_dialer_pane_t1_ParamLimits

0x19c2,	// (0x0001f97d) main_video_tele_dialer_pane_t1

0x19d4,	// (0x0001f98f) main_video_tele_dialer_pane_t2_ParamLimits

0x19d4,	// (0x0001f98f) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0002d859) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0002d859) main_video_tele_dialer_pane_t

0x1ee8,	// (0x0001fea3) cam4_autofocus_pane_ParamLimits

0x1ee8,	// (0x0001fea3) cam4_autofocus_pane

0x1f02,	// (0x0001febd) cam4_image_uncrop_pane_ParamLimits

0x1f02,	// (0x0001febd) cam4_image_uncrop_pane

0x1f19,	// (0x0001fed4) cam4_indicators_pane_ParamLimits

0x1f19,	// (0x0001fed4) cam4_indicators_pane

0x1f35,	// (0x0001fef0) main_camera4_pane_g1_ParamLimits

0x1f35,	// (0x0001fef0) main_camera4_pane_g1

0x1f41,	// (0x0001fefc) main_camera4_pane_g2_ParamLimits

0x1f41,	// (0x0001fefc) main_camera4_pane_g2

0x1f41,	// (0x0001fefc) main_camera4_pane_g3_ParamLimits

0x1f41,	// (0x0001fefc) main_camera4_pane_g3

0x1f4d,	// (0x0001ff08) main_camera4_pane_g4_ParamLimits

0x1f4d,	// (0x0001ff08) main_camera4_pane_g4

0x1f59,	// (0x0001ff14) main_camera4_pane_g5_ParamLimits

0x1f59,	// (0x0001ff14) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0002d8aa) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0002d8aa) main_camera4_pane_g

0x1f73,	// (0x0001ff2e) main_camera4_pane_t1_ParamLimits

0x1f73,	// (0x0001ff2e) main_camera4_pane_t1

0x1f97,	// (0x0001ff52) bg_tb_trans_pane_cp06

0x1fad,	// (0x0001ff68) cam4_indicators_pane_g1

0x1fbe,	// (0x0001ff79) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0002d8c5) cam4_indicators_pane_g

0x1fd6,	// (0x0001ff91) cam4_indicators_pane_t1

0x2000,	// (0x0001ffbb) main_video4_pane_g1_ParamLimits

0x2000,	// (0x0001ffbb) main_video4_pane_g1

0x200c,	// (0x0001ffc7) main_video4_pane_g2_ParamLimits

0x200c,	// (0x0001ffc7) main_video4_pane_g2

0x2018,	// (0x0001ffd3) main_video4_pane_g3_ParamLimits

0x2018,	// (0x0001ffd3) main_video4_pane_g3

0x2024,	// (0x0001ffdf) main_video4_pane_g4_ParamLimits

0x2024,	// (0x0001ffdf) main_video4_pane_g4

0x0004,

0xf911,	// (0x0002d8cc) main_video4_pane_g_ParamLimits

0xf911,	// (0x0002d8cc) main_video4_pane_g

0x2044,	// (0x0001ffff) vid4_indicators_pane_ParamLimits

0x2044,	// (0x0001ffff) vid4_indicators_pane

0x2063,	// (0x0002001e) video4_image_uncrop_cif_pane_ParamLimits

0x2063,	// (0x0002001e) video4_image_uncrop_cif_pane

0x2072,	// (0x0002002d) video4_image_uncrop_nhd_pane_ParamLimits

0x2072,	// (0x0002002d) video4_image_uncrop_nhd_pane

0x1f02,	// (0x0001febd) video4_image_uncrop_vga_pane_ParamLimits

0x1f02,	// (0x0001febd) video4_image_uncrop_vga_pane

0x1451,	// (0x0001f40c) bg_tb_trans_pane_cp07

0x2087,	// (0x00020042) vid4_indicators_pane_g1

0x209b,	// (0x00020056) vid4_indicators_pane_g2

0x20af,	// (0x0002006a) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0002d8d7) vid4_indicators_pane_g

0x20dc,	// (0x00020097) vid4_indicators_pane_t1

0x6a6c,	// (0x00024a27) cam4_autofocus_pane_g1

0x6a74,	// (0x00024a2f) cam4_autofocus_pane_g2

0x6a7c,	// (0x00024a37) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0002d8e2) cam4_autofocus_pane_g

0x6a84,	// (0x00024a3f) cam4_autofocus_pane_g3_copy1

0x6929,	// (0x000248e4) video_down_pane_cp_t1

0x6937,	// (0x000248f2) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0002d85e) video_down_pane_cp_t

0x0fed,	// (0x0001efa8) popup_vitu2_window_ParamLimits

0x0fed,	// (0x0001efa8) popup_vitu2_window

0x20f3,	// (0x000200ae) aid_size_cell2_itu2_ParamLimits

0x20f3,	// (0x000200ae) aid_size_cell2_itu2

0x2115,	// (0x000200d0) aid_size_cell_itu2_ParamLimits

0x2115,	// (0x000200d0) aid_size_cell_itu2

0x2159,	// (0x00020114) bg_popup_window_pane_cp09_ParamLimits

0x2159,	// (0x00020114) bg_popup_window_pane_cp09

0x2167,	// (0x00020122) field_vitu2_entry_pane_ParamLimits

0x2167,	// (0x00020122) field_vitu2_entry_pane

0x2187,	// (0x00020142) grid_vitu2_function_pane_ParamLimits

0x2187,	// (0x00020142) grid_vitu2_function_pane

0x21cb,	// (0x00020186) grid_vitu2_itu_pane_ParamLimits

0x21cb,	// (0x00020186) grid_vitu2_itu_pane

0x2245,	// (0x00020200) cell_vitu2_itu_pane_ParamLimits

0x2245,	// (0x00020200) cell_vitu2_itu_pane

0x225e,	// (0x00020219) cell_vitu2_function_pane_ParamLimits

0x225e,	// (0x00020219) cell_vitu2_function_pane

0xd222,	// (0x0002b1dd) bg_popup_call_pane_cp08_ParamLimits

0xd222,	// (0x0002b1dd) bg_popup_call_pane_cp08

0xd239,	// (0x0002b1f4) field_vitu2_entry_pane_g1

0xd245,	// (0x0002b200) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0002d8e9) field_vitu2_entry_pane_g

0x6a8c,	// (0x00024a47) field_vitu2_entry_pane_t1_ParamLimits

0x6a8c,	// (0x00024a47) field_vitu2_entry_pane_t1

0xd25f,	// (0x0002b21a) field_vitu2_entry_pane_t2_ParamLimits

0xd25f,	// (0x0002b21a) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0002d8f0) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0002d8f0) field_vitu2_entry_pane_t

0x229f,	// (0x0002025a) bg_button_pane_cp010_ParamLimits

0x229f,	// (0x0002025a) bg_button_pane_cp010

0x22ad,	// (0x00020268) cell_vitu2_itu_pane_g1

0x22cd,	// (0x00020288) cell_vitu2_itu_pane_t1_ParamLimits

0x22cd,	// (0x00020288) cell_vitu2_itu_pane_t1

0x2319,	// (0x000202d4) cell_vitu2_itu_pane_t2_ParamLimits

0x2319,	// (0x000202d4) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0002d8fa) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0002d8fa) cell_vitu2_itu_pane_t

0x1451,	// (0x0001f40c) bg_button_pane_cp011

0x23e1,	// (0x0002039c) cell_vitu2_function_pane_g1

0x0ffb,	// (0x0001efb6) main_myfav_hc_pane

0x1dc7,	// (0x0001fd82) popup_image3_note_pane_ParamLimits

0x1dc7,	// (0x0001fd82) popup_image3_note_pane

0x1dd5,	// (0x0001fd90) popup_image3_tool_bar_pane_ParamLimits

0x1dd5,	// (0x0001fd90) popup_image3_tool_bar_pane

0x238f,	// (0x0002034a) cell_vitu2_itu_pane_t3_ParamLimits

0x238f,	// (0x0002034a) cell_vitu2_itu_pane_t3

0x9bdb,	// (0x00027b96) bg_popup_trans_pane

0xd284,	// (0x0002b23f) grid_image3_tool_bar_pane

0xd28e,	// (0x0002b249) bg_popup_trans_pane_g1

0xa770,	// (0x0002872b) bg_popup_trans_pane_g2

0xd296,	// (0x0002b251) bg_popup_trans_pane_g3

0xd29e,	// (0x0002b259) bg_popup_trans_pane_g4

0xd2a6,	// (0x0002b261) bg_popup_trans_pane_g5

0xd2ae,	// (0x0002b269) bg_popup_trans_pane_g6

0xd2b6,	// (0x0002b271) bg_popup_trans_pane_g7

0xd2be,	// (0x0002b279) bg_popup_trans_pane_g8

0xa750,	// (0x0002870b) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0002d901) bg_popup_trans_pane_g

0xd2c6,	// (0x0002b281) cell_image3_tool_bar_pane_ParamLimits

0xd2c6,	// (0x0002b281) cell_image3_tool_bar_pane

0xc7c9,	// (0x0002a784) cell_image3_tool_bar_pane_g1

0x9bdb,	// (0x00027b96) bg_popup_trans_pane_cp1

0xd2da,	// (0x0002b295) popup_image3_note_pane_t1

0xd2e8,	// (0x0002b2a3) popup_image3_note_pane_t2

0xd2f6,	// (0x0002b2b1) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0002d914) popup_image3_note_pane_t

0xd304,	// (0x0002b2bf) popup_image3_note_pane_t3_copy1

0x6abd,	// (0x00024a78) bg_myfav_hc_instruction_pane_ParamLimits

0x6abd,	// (0x00024a78) bg_myfav_hc_instruction_pane

0x6ad5,	// (0x00024a90) cell_myfav_contact_pane_ParamLimits

0x6ad5,	// (0x00024a90) cell_myfav_contact_pane

0x6aef,	// (0x00024aaa) cell_myfav_contact_pane_cp1_ParamLimits

0x6aef,	// (0x00024aaa) cell_myfav_contact_pane_cp1

0x6b07,	// (0x00024ac2) cell_myfav_contact_pane_cp2_ParamLimits

0x6b07,	// (0x00024ac2) cell_myfav_contact_pane_cp2

0x6b1f,	// (0x00024ada) cell_myfav_contact_pane_cp3_ParamLimits

0x6b1f,	// (0x00024ada) cell_myfav_contact_pane_cp3

0x6b36,	// (0x00024af1) cell_myfav_contact_pane_cp4_ParamLimits

0x6b36,	// (0x00024af1) cell_myfav_contact_pane_cp4

0x6b4c,	// (0x00024b07) cell_myfav_contact_pane_cp5_ParamLimits

0x6b4c,	// (0x00024b07) cell_myfav_contact_pane_cp5

0x6b60,	// (0x00024b1b) cell_myfav_contact_pane_cp6_ParamLimits

0x6b60,	// (0x00024b1b) cell_myfav_contact_pane_cp6

0x6b74,	// (0x00024b2f) cell_myfav_contact_pane_cp7_ParamLimits

0x6b74,	// (0x00024b2f) cell_myfav_contact_pane_cp7

0xd31e,	// (0x0002b2d9) listscroll_gen_pane_cp05

0x6b8c,	// (0x00024b47) main_myfav_hc_pane_g1_ParamLimits

0x6b8c,	// (0x00024b47) main_myfav_hc_pane_g1

0x6ba2,	// (0x00024b5d) main_myfav_hc_pane_g2_ParamLimits

0x6ba2,	// (0x00024b5d) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0002d91b) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0002d91b) main_myfav_hc_pane_g

0x6bd2,	// (0x00024b8d) main_myfav_hc_pane_t1_ParamLimits

0x6bd2,	// (0x00024b8d) main_myfav_hc_pane_t1

0xd327,	// (0x0002b2e2) main_myfav_hc_pane_t2_ParamLimits

0xd327,	// (0x0002b2e2) main_myfav_hc_pane_t2

0xd339,	// (0x0002b2f4) main_myfav_hc_pane_t3_ParamLimits

0xd339,	// (0x0002b2f4) main_myfav_hc_pane_t3

0x6be9,	// (0x00024ba4) main_myfav_hc_pane_t4_ParamLimits

0x6be9,	// (0x00024ba4) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0002d922) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0002d922) main_myfav_hc_pane_t

0xc7c9,	// (0x0002a784) bg_myfav_hc_instruction_pane_g1

0xd34b,	// (0x0002b306) cell_myfav_contact_pane_g1_ParamLimits

0xd34b,	// (0x0002b306) cell_myfav_contact_pane_g1

0xd34b,	// (0x0002b306) cell_myfav_contact_pane_g2_ParamLimits

0xd34b,	// (0x0002b306) cell_myfav_contact_pane_g2

0xd357,	// (0x0002b312) cell_myfav_contact_pane_g3_ParamLimits

0xd357,	// (0x0002b312) cell_myfav_contact_pane_g3

0xcaf0,	// (0x0002aaab) cell_myfav_contact_pane_g4_ParamLimits

0xcaf0,	// (0x0002aaab) cell_myfav_contact_pane_g4

0xd364,	// (0x0002b31f) cell_myfav_contact_pane_g5_ParamLimits

0xd364,	// (0x0002b31f) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0002d92d) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0002d92d) cell_myfav_contact_pane_g

0x6bba,	// (0x00024b75) main_myfav_hc_pane_g3_ParamLimits

0x6bba,	// (0x00024b75) main_myfav_hc_pane_g3

0x0ef6,	// (0x0001eeb1) popup_adpt_find_window

0x6c13,	// (0x00024bce) afind_page_pane_ParamLimits

0x6c13,	// (0x00024bce) afind_page_pane

0x6c20,	// (0x00024bdb) aid_size_cell_afind_ParamLimits

0x6c20,	// (0x00024bdb) aid_size_cell_afind

0x6c3a,	// (0x00024bf5) bg_popup_sub_pane_cp09_ParamLimits

0x6c3a,	// (0x00024bf5) bg_popup_sub_pane_cp09

0x6c47,	// (0x00024c02) find_pane_cp01_ParamLimits

0x6c47,	// (0x00024c02) find_pane_cp01

0xd370,	// (0x0002b32b) grid_afind_control_pane_ParamLimits

0xd370,	// (0x0002b32b) grid_afind_control_pane

0x6c54,	// (0x00024c0f) grid_afind_pane_ParamLimits

0x6c54,	// (0x00024c0f) grid_afind_pane

0x6c6e,	// (0x00024c29) cell_afind_pane_ParamLimits

0x6c6e,	// (0x00024c29) cell_afind_pane

0xc7c9,	// (0x0002a784) afind_page_pane_g1

0x6cb6,	// (0x00024c71) afind_page_pane_g2

0x6cbf,	// (0x00024c7a) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0002d938) afind_page_pane_g

0x6cc8,	// (0x00024c83) afind_page_pane_t1

0xd384,	// (0x0002b33f) cell_afind_grid_control_pane_ParamLimits

0xd384,	// (0x0002b33f) cell_afind_grid_control_pane

0xd164,	// (0x0002b11f) bg_button_pane_cp69_ParamLimits

0xd164,	// (0x0002b11f) bg_button_pane_cp69

0x6ce8,	// (0x00024ca3) cell_afind_pane_g1_ParamLimits

0x6ce8,	// (0x00024ca3) cell_afind_pane_g1

0x6cf5,	// (0x00024cb0) cell_afind_pane_t1_ParamLimits

0x6cf5,	// (0x00024cb0) cell_afind_pane_t1

0xa569,	// (0x00028524) bg_button_pane_cp72

0xd393,	// (0x0002b34e) cell_afind_grid_control_pane_g1

0x5164,	// (0x0002311f) aid_image_placing_area_ParamLimits

0x5164,	// (0x0002311f) aid_image_placing_area

0xce16,	// (0x0002add1) field_vitu_entry_pane_g1_ParamLimits

0xce16,	// (0x0002add1) field_vitu_entry_pane_g1

0xce22,	// (0x0002addd) field_vitu_entry_pane_g2_ParamLimits

0xce22,	// (0x0002addd) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0002d7e9) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0002d7e9) field_vitu_entry_pane_g

0x67d5,	// (0x00024790) cell_vitu_itu_pane_g1_ParamLimits

0x6817,	// (0x000247d2) cell_vitu_itu_pane_t3_ParamLimits

0x6817,	// (0x000247d2) cell_vitu_itu_pane_t3

0xd106,	// (0x0002b0c1) mp4_progress_pane_t1_ParamLimits

0xd11f,	// (0x0002b0da) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0002d87e) mp4_progress_pane_t_ParamLimits

0xd138,	// (0x0002b0f3) mup_progress_pane_cp04_ParamLimits

0x6bfd,	// (0x00024bb8) main_myfav_hc_pane_t5_ParamLimits

0x6bfd,	// (0x00024bb8) main_myfav_hc_pane_t5

0x0db9,	// (0x0001ed74) aid_zoom_text_primary

0x0ef6,	// (0x0001eeb1) popup_adpt_find_window_ParamLimits

0x1451,	// (0x0001f40c) main_cam_set_pane

0x1f27,	// (0x0001fee2) cam4_zoom_pane_ParamLimits

0x1f27,	// (0x0001fee2) cam4_zoom_pane

0x6d07,	// (0x00024cc2) main_cam_set_pane_g1_ParamLimits

0x6d07,	// (0x00024cc2) main_cam_set_pane_g1

0x6d15,	// (0x00024cd0) main_cam_set_pane_g2_ParamLimits

0x6d15,	// (0x00024cd0) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0002d93f) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0002d93f) main_cam_set_pane_g

0x6d21,	// (0x00024cdc) main_cam_set_pane_t1_ParamLimits

0x6d21,	// (0x00024cdc) main_cam_set_pane_t1

0x6d3d,	// (0x00024cf8) main_cset_listscroll_pane_ParamLimits

0x6d3d,	// (0x00024cf8) main_cset_listscroll_pane

0x6d68,	// (0x00024d23) main_cset_slider_pane_ParamLimits

0x6d68,	// (0x00024d23) main_cset_slider_pane

0xd3a4,	// (0x0002b35f) main_cset_list_pane_ParamLimits

0xd3a4,	// (0x0002b35f) main_cset_list_pane

0xd3b4,	// (0x0002b36f) scroll_pane_cp028

0x6d87,	// (0x00024d42) aid_area_touch_slider

0x6da3,	// (0x00024d5e) cset_slider_pane

0x6dcd,	// (0x00024d88) main_cset_slider_pane_g1

0x6de2,	// (0x00024d9d) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0002d944) main_cset_slider_pane_g

0xd3ed,	// (0x0002b3a8) main_cset_slider_pane_t1

0x6ea8,	// (0x00024e63) main_cset_slider_pane_t2

0x6ec2,	// (0x00024e7d) main_cset_slider_pane_t3

0x6edc,	// (0x00024e97) main_cset_slider_pane_t4

0x6efa,	// (0x00024eb5) main_cset_slider_pane_t5

0x6f18,	// (0x00024ed3) main_cset_slider_pane_t6

0x6f2f,	// (0x00024eea) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0002d969) main_cset_slider_pane_t

0x703d,	// (0x00024ff8) cset_list_set_pane_ParamLimits

0x703d,	// (0x00024ff8) cset_list_set_pane

0x7056,	// (0x00025011) aid_position_infowindow_above

0x705e,	// (0x00025019) aid_position_infowindow_below

0x7066,	// (0x00025021) cset_list_set_pane_g1_ParamLimits

0x7066,	// (0x00025021) cset_list_set_pane_g1

0x7072,	// (0x0002502d) cset_list_set_pane_g3_ParamLimits

0x7072,	// (0x0002502d) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0002d988) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0002d988) cset_list_set_pane_g

0x7081,	// (0x0002503c) cset_list_set_pane_t1_ParamLimits

0x7081,	// (0x0002503c) cset_list_set_pane_t1

0xa407,	// (0x000283c2) list_highlight_pane_cp021_ParamLimits

0xa407,	// (0x000283c2) list_highlight_pane_cp021

0xb0ac,	// (0x00029067) cset_slider_pane_g1

0xb0be,	// (0x00029079) cset_slider_pane_g2

0xb0b5,	// (0x00029070) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0002d98d) cset_slider_pane_g

0x23f5,	// (0x000203b0) aid_area_touch_cam4_zoom

0x23fd,	// (0x000203b8) cam4_zoom_cont_pane

0x2405,	// (0x000203c0) cam4_zoom_pane_g1

0x240d,	// (0x000203c8) cam4_zoom_pane_g2

0x2415,	// (0x000203d0) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0002d994) cam4_zoom_pane_g

0x241d,	// (0x000203d8) cam4_zoom_cont_pane_g1

0x2426,	// (0x000203e1) cam4_zoom_cont_pane_g2

0x242f,	// (0x000203ea) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0002d99b) cam4_zoom_cont_pane_g

0x1e00,	// (0x0001fdbb) call4_image_pane_ParamLimits

0x1e00,	// (0x0001fdbb) call4_image_pane

0xd170,	// (0x0002b12b) call4_windows_conf_pane_ParamLimits

0xd1ad,	// (0x0002b168) popup_call4_audio_in_window_ParamLimits

0xd1ad,	// (0x0002b168) popup_call4_audio_in_window

0x9bdb,	// (0x00027b96) bg_popup_call2_act_pane_cp02

0xd1f6,	// (0x0002b1b1) call4_list_conf_pane

0xc7c9,	// (0x0002a784) call4_image_pane_g1

0xc7c9,	// (0x0002a784) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0002d6aa) call4_image_pane_g

0xd48d,	// (0x0002b448) list_single_graphic_popup_conf4_pane_ParamLimits

0xd48d,	// (0x0002b448) list_single_graphic_popup_conf4_pane

0x9bdb,	// (0x00027b96) list_highlight_pane_cp022

0xd4a0,	// (0x0002b45b) list_single_graphic_popup_conf4_pane_g1

0xacb6,	// (0x00028c71) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0002d9a2) list_single_graphic_popup_conf4_pane_g

0xd4a8,	// (0x0002b463) list_single_graphic_popup_conf4_pane_t1

0x3464,	// (0x0002141f) popup_vtel_slider_window_ParamLimits

0x3464,	// (0x0002141f) popup_vtel_slider_window

0xd152,	// (0x0002b10d) dialer2_ne_pane_t2_ParamLimits

0xd152,	// (0x0002b10d) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0002d883) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0002d883) dialer2_ne_pane_t

0xa407,	// (0x000283c2) bg_popup_sub_pane_cp010_ParamLimits

0xa407,	// (0x000283c2) bg_popup_sub_pane_cp010

0x7096,	// (0x00025051) popup_vtel_slider_window_g1_ParamLimits

0x7096,	// (0x00025051) popup_vtel_slider_window_g1

0x70a2,	// (0x0002505d) popup_vtel_slider_window_g2_ParamLimits

0x70a2,	// (0x0002505d) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0002d9a7) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0002d9a7) popup_vtel_slider_window_g

0x70ea,	// (0x000250a5) vtel_slider_pane_ParamLimits

0x70ea,	// (0x000250a5) vtel_slider_pane

0x70f9,	// (0x000250b4) vtel_slider_pane_g1_ParamLimits

0x70f9,	// (0x000250b4) vtel_slider_pane_g1

0x7106,	// (0x000250c1) vtel_slider_pane_g2_ParamLimits

0x7106,	// (0x000250c1) vtel_slider_pane_g2

0x7113,	// (0x000250ce) vtel_slider_pane_g3_ParamLimits

0x7113,	// (0x000250ce) vtel_slider_pane_g3

0x70f9,	// (0x000250b4) vtel_slider_pane_g4_ParamLimits

0x70f9,	// (0x000250b4) vtel_slider_pane_g4

0x7120,	// (0x000250db) vtel_slider_pane_g5_ParamLimits

0x7120,	// (0x000250db) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0002d9b0) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0002d9b0) vtel_slider_pane_g

0x1451,	// (0x0001f40c) main_gallery2_pane

0x213b,	// (0x000200f6) aid_size_row_itut2_dropdow_list_ParamLimits

0x213b,	// (0x000200f6) aid_size_row_itut2_dropdow_list

0x21a9,	// (0x00020164) grid_vitu2_function_top_pane_ParamLimits

0x21a9,	// (0x00020164) grid_vitu2_function_top_pane

0x2203,	// (0x000201be) popup_vitu2_dropdown_list_window_ParamLimits

0x2203,	// (0x000201be) popup_vitu2_dropdown_list_window

0x2223,	// (0x000201de) popup_vitu2_match_list_window

0x2438,	// (0x000203f3) cell_vitu2_function_top_pane_ParamLimits

0x2438,	// (0x000203f3) cell_vitu2_function_top_pane

0x2452,	// (0x0002040d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x2452,	// (0x0002040d) cell_vitu2_function_top_pane_cp01

0x246e,	// (0x00020429) cell_vitu2_function_top_wide_pane_ParamLimits

0x246e,	// (0x00020429) cell_vitu2_function_top_wide_pane

0x1451,	// (0x0001f40c) bg_button_pane_cp012

0x248a,	// (0x00020445) cell_vitu2_function_top_pane_g1

0x249e,	// (0x00020459) bg_button_pane_cp013_ParamLimits

0x249e,	// (0x00020459) bg_button_pane_cp013

0x712d,	// (0x000250e8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x712d,	// (0x000250e8) cell_vitu2_function_top_wide_pane_g1

0x0fed,	// (0x0001efa8) bg_popup_sub_pane_cp20

0x24ba,	// (0x00020475) list_vitu2_match_list_pane

0xd28e,	// (0x0002b249) bg_popup_sub_pane_cp20_g1

0xd296,	// (0x0002b251) bg_popup_sub_pane_cp20_g2

0xa770,	// (0x0002872b) bg_popup_sub_pane_cp20_g3

0xd29e,	// (0x0002b259) bg_popup_sub_pane_cp20_g4

0xa750,	// (0x0002870b) bg_popup_sub_pane_cp20_g5

0xd4cc,	// (0x0002b487) bg_popup_sub_pane_cp20_g6

0xd2ae,	// (0x0002b269) bg_popup_sub_pane_cp20_g7

0xd2b6,	// (0x0002b271) bg_popup_sub_pane_cp20_g8

0xd2be,	// (0x0002b279) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0002d9bb) bg_popup_sub_pane_cp20_g

0x24d2,	// (0x0002048d) list_vitu2_match_list_item_pane_ParamLimits

0x24d2,	// (0x0002048d) list_vitu2_match_list_item_pane

0x24e4,	// (0x0002049f) list_vitu2_match_list_item_pane_t1

0x0ffb,	// (0x0001efb6) bg_popup_sub_pane_cp21

0x24f2,	// (0x000204ad) grid_vitu2_dropdown_list_pane

0x24fa,	// (0x000204b5) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x24fa,	// (0x000204b5) cell_vitu2_dropdown_list_char_pane

0x251b,	// (0x000204d6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x251b,	// (0x000204d6) cell_vitu2_dropdown_list_ctrl_pane

0xd4fe,	// (0x0002b4b9) cell_vitu2_dropdown_list_char_pane_g1

0xd507,	// (0x0002b4c2) cell_vitu2_dropdown_list_char_pane_g2

0xd510,	// (0x0002b4cb) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0002d9d8) cell_vitu2_dropdown_list_char_pane_g

0x2547,	// (0x00020502) cell_vitu2_dropdown_list_char_pane_t1

0x718d,	// (0x00025148) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x718d,	// (0x00025148) cell_vitu2_dropdown_list_ctrl_pane_g1

0x719d,	// (0x00025158) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x719d,	// (0x00025158) cell_vitu2_dropdown_list_ctrl_pane_g2

0x71ae,	// (0x00025169) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x71ae,	// (0x00025169) cell_vitu2_dropdown_list_ctrl_pane_g3

0x2555,	// (0x00020510) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x2555,	// (0x00020510) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1f97,	// (0x0001ff52) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1f97,	// (0x0001ff52) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0002d9df) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0002d9df) cell_vitu2_dropdown_list_ctrl_pane_g

0x71be,	// (0x00025179) aid_size_cell_gallery2_ParamLimits

0x71be,	// (0x00025179) aid_size_cell_gallery2

0x71d8,	// (0x00025193) grid_gallery2_pane_ParamLimits

0x71d8,	// (0x00025193) grid_gallery2_pane

0x71ef,	// (0x000251aa) scroll_pane_cp029_ParamLimits

0x71ef,	// (0x000251aa) scroll_pane_cp029

0x71ff,	// (0x000251ba) cell_gallery2_pane_ParamLimits

0x71ff,	// (0x000251ba) cell_gallery2_pane

0xd519,	// (0x0002b4d4) cell_gallery2_pane_g2

0x7254,	// (0x0002520f) cell_gallery2_pane_g3

0xd521,	// (0x0002b4dc) cell_gallery2_pane_g4

0xd529,	// (0x0002b4e4) cell_gallery2_pane_g5

0xa517,	// (0x000284d2) grid_highlight_pane_cp10

0x2223,	// (0x000201de) popup_vitu2_match_list_window_ParamLimits

0x2235,	// (0x000201f0) popup_vitu2_query_window_ParamLimits

0x2235,	// (0x000201f0) popup_vitu2_query_window

0x0ffb,	// (0x0001efb6) bg_vitu2_candi_button_pane

0xd4fe,	// (0x0002b4b9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd507,	// (0x0002b4c2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd510,	// (0x0002b4cb) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x725c,	// (0x00025217) bg_button_pane_cp015

0x726e,	// (0x00025229) bg_button_pane_cp016

0x7281,	// (0x0002523c) bg_button_pane_cp017

0xc3c1,	// (0x0002a37c) bg_popup_sub_pane_cp22

0xd531,	// (0x0002b4ec) popup_vitu2_query_window_g1

0x72c6,	// (0x00025281) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0002d9ea) popup_vitu2_query_window_g

0x72e3,	// (0x0002529e) popup_vitu2_query_window_t1_ParamLimits

0x72e3,	// (0x0002529e) popup_vitu2_query_window_t1

0x7316,	// (0x000252d1) popup_vitu2_query_window_t2_ParamLimits

0x7316,	// (0x000252d1) popup_vitu2_query_window_t2

0x7328,	// (0x000252e3) popup_vitu2_query_window_t3_ParamLimits

0x7328,	// (0x000252e3) popup_vitu2_query_window_t3

0x7350,	// (0x0002530b) popup_vitu2_query_window_t4_ParamLimits

0x7350,	// (0x0002530b) popup_vitu2_query_window_t4

0x7371,	// (0x0002532c) popup_vitu2_query_window_t5_ParamLimits

0x7371,	// (0x0002532c) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0002d9f1) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0002d9f1) popup_vitu2_query_window_t

0xd39c,	// (0x0002b357) main_cset_text_pane

0x6d87,	// (0x00024d42) aid_area_touch_slider_ParamLimits

0x6da3,	// (0x00024d5e) cset_slider_pane_ParamLimits

0x6dcd,	// (0x00024d88) main_cset_slider_pane_g1_ParamLimits

0x6de2,	// (0x00024d9d) main_cset_slider_pane_g2_ParamLimits

0xd3bd,	// (0x0002b378) main_cset_slider_pane_g3_ParamLimits

0xd3bd,	// (0x0002b378) main_cset_slider_pane_g3

0x6df7,	// (0x00024db2) main_cset_slider_pane_g4_ParamLimits

0x6df7,	// (0x00024db2) main_cset_slider_pane_g4

0x6e06,	// (0x00024dc1) main_cset_slider_pane_g5_ParamLimits

0x6e06,	// (0x00024dc1) main_cset_slider_pane_g5

0x6e14,	// (0x00024dcf) main_cset_slider_pane_g6_ParamLimits

0x6e14,	// (0x00024dcf) main_cset_slider_pane_g6

0xf989,	// (0x0002d944) main_cset_slider_pane_g_ParamLimits

0xd3ed,	// (0x0002b3a8) main_cset_slider_pane_t1_ParamLimits

0x6ea8,	// (0x00024e63) main_cset_slider_pane_t2_ParamLimits

0x6ec2,	// (0x00024e7d) main_cset_slider_pane_t3_ParamLimits

0x6edc,	// (0x00024e97) main_cset_slider_pane_t4_ParamLimits

0x6efa,	// (0x00024eb5) main_cset_slider_pane_t5_ParamLimits

0x6f18,	// (0x00024ed3) main_cset_slider_pane_t6_ParamLimits

0x6f2f,	// (0x00024eea) main_cset_slider_pane_t7_ParamLimits

0x6f5d,	// (0x00024f18) main_cset_slider_pane_t8_ParamLimits

0x6f5d,	// (0x00024f18) main_cset_slider_pane_t8

0x6f85,	// (0x00024f40) main_cset_slider_pane_t9_ParamLimits

0x6f85,	// (0x00024f40) main_cset_slider_pane_t9

0x6fad,	// (0x00024f68) main_cset_slider_pane_t10_ParamLimits

0x6fad,	// (0x00024f68) main_cset_slider_pane_t10

0x6fd5,	// (0x00024f90) main_cset_slider_pane_t11_ParamLimits

0x6fd5,	// (0x00024f90) main_cset_slider_pane_t11

0x6fff,	// (0x00024fba) main_cset_slider_pane_t12_ParamLimits

0x6fff,	// (0x00024fba) main_cset_slider_pane_t12

0x701e,	// (0x00024fd9) main_cset_slider_pane_t13_ParamLimits

0x701e,	// (0x00024fd9) main_cset_slider_pane_t13

0xf9ae,	// (0x0002d969) main_cset_slider_pane_t_ParamLimits

0x9bdb,	// (0x00027b96) bg_popup_sub_pane_cp011

0xd53d,	// (0x0002b4f8) main_cset_text_pane_g1

0xd545,	// (0x0002b500) main_cset_text_pane_t1

0xd553,	// (0x0002b50e) main_cset_text_pane_t2

0xd561,	// (0x0002b51c) main_cset_text_pane_t3

0xd56f,	// (0x0002b52a) main_cset_text_pane_t4

0xd57d,	// (0x0002b538) main_cset_text_pane_t5

0xd58b,	// (0x0002b546) main_cset_text_pane_t6

0xd599,	// (0x0002b554) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0002da00) main_cset_text_pane_t

0x0ffb,	// (0x0001efb6) main_cam4_burst_pane

0x0ffb,	// (0x0001efb6) main_cam5_pane

0x6cd6,	// (0x00024c91) bg_button_pane_cp019

0x6cdf,	// (0x00024c9a) bg_button_pane_cp020

0xd3c9,	// (0x0002b384) main_cset_slider_pane_g7_ParamLimits

0xd3c9,	// (0x0002b384) main_cset_slider_pane_g7

0xd3d5,	// (0x0002b390) main_cset_slider_pane_g8_ParamLimits

0xd3d5,	// (0x0002b390) main_cset_slider_pane_g8

0x6e28,	// (0x00024de3) main_cset_slider_pane_g9_ParamLimits

0x6e28,	// (0x00024de3) main_cset_slider_pane_g9

0x6e34,	// (0x00024def) main_cset_slider_pane_g10_ParamLimits

0x6e34,	// (0x00024def) main_cset_slider_pane_g10

0x6e40,	// (0x00024dfb) main_cset_slider_pane_g11_ParamLimits

0x6e40,	// (0x00024dfb) main_cset_slider_pane_g11

0x6e4c,	// (0x00024e07) main_cset_slider_pane_g12_ParamLimits

0x6e4c,	// (0x00024e07) main_cset_slider_pane_g12

0x6e58,	// (0x00024e13) main_cset_slider_pane_g13_ParamLimits

0x6e58,	// (0x00024e13) main_cset_slider_pane_g13

0x6e66,	// (0x00024e21) main_cset_slider_pane_g14_ParamLimits

0x6e66,	// (0x00024e21) main_cset_slider_pane_g14

0x6e74,	// (0x00024e2f) main_cset_slider_pane_g15_ParamLimits

0x6e74,	// (0x00024e2f) main_cset_slider_pane_g15

0xd41b,	// (0x0002b3d6) main_cset_slider_pane_t14_ParamLimits

0xd41b,	// (0x0002b3d6) main_cset_slider_pane_t14

0xd454,	// (0x0002b40f) main_cset_slider_pane_t15_ParamLimits

0xd454,	// (0x0002b40f) main_cset_slider_pane_t15

0x73e8,	// (0x000253a3) aid_cam4_burst_size_cell_ParamLimits

0x73e8,	// (0x000253a3) aid_cam4_burst_size_cell

0x7404,	// (0x000253bf) grid_cam4_burst_pane_ParamLimits

0x7404,	// (0x000253bf) grid_cam4_burst_pane

0x7434,	// (0x000253ef) linegrid_cam4_burst_pane_ParamLimits

0x7434,	// (0x000253ef) linegrid_cam4_burst_pane

0x7454,	// (0x0002540f) scroll_pane_cp30_ParamLimits

0x7454,	// (0x0002540f) scroll_pane_cp30

0x7460,	// (0x0002541b) cell_cam4_burst_pane_ParamLimits

0x7460,	// (0x0002541b) cell_cam4_burst_pane

0xd5a7,	// (0x0002b562) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5a7,	// (0x0002b562) linegrid_cam4_burst_pane_g1

0x749c,	// (0x00025457) linegrid_cam4_burst_pane_g2_ParamLimits

0x749c,	// (0x00025457) linegrid_cam4_burst_pane_g2

0xd5b4,	// (0x0002b56f) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5b4,	// (0x0002b56f) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0002da0f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0002da0f) linegrid_cam4_burst_pane_g

0x74ad,	// (0x00025468) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x74ad,	// (0x00025468) linegrid_cam4_burst_pane_g3_copy1

0xd5c1,	// (0x0002b57c) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5c1,	// (0x0002b57c) linegrid_cam4_burst_pane_g4

0x74c7,	// (0x00025482) linegrid_cam4_burst_pane_g5_ParamLimits

0x74c7,	// (0x00025482) linegrid_cam4_burst_pane_g5

0x74d8,	// (0x00025493) linegrid_cam4_burst_pane_g6_ParamLimits

0x74d8,	// (0x00025493) linegrid_cam4_burst_pane_g6

0xd5ce,	// (0x0002b589) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5ce,	// (0x0002b589) linegrid_cam4_burst_pane_g7

0x74e9,	// (0x000254a4) cell_cam4_burst_pane_g1

0xd5e7,	// (0x0002b5a2) main_cam5_pane_t1_ParamLimits

0xd5e7,	// (0x0002b5a2) main_cam5_pane_t1

0xd5f9,	// (0x0002b5b4) main_cam5_pane_t2_ParamLimits

0xd5f9,	// (0x0002b5b4) main_cam5_pane_t2

0xd60b,	// (0x0002b5c6) main_cam5_pane_t3_ParamLimits

0xd60b,	// (0x0002b5c6) main_cam5_pane_t3

0xd61d,	// (0x0002b5d8) main_cam5_pane_t4_ParamLimits

0xd61d,	// (0x0002b5d8) main_cam5_pane_t4

0xd635,	// (0x0002b5f0) main_cam5_pane_t5_ParamLimits

0xd635,	// (0x0002b5f0) main_cam5_pane_t5

0xd649,	// (0x0002b604) main_cam5_pane_t6_ParamLimits

0xd649,	// (0x0002b604) main_cam5_pane_t6

0xd65d,	// (0x0002b618) main_cam5_pane_t7_ParamLimits

0xd65d,	// (0x0002b618) main_cam5_pane_t7

0xd66f,	// (0x0002b62a) main_cam5_pane_t8_ParamLimits

0xd66f,	// (0x0002b62a) main_cam5_pane_t8

0xd68b,	// (0x0002b646) main_cam5_pane_t9_ParamLimits

0xd68b,	// (0x0002b646) main_cam5_pane_t9

0xd69d,	// (0x0002b658) main_cam5_pane_t10_ParamLimits

0xd69d,	// (0x0002b658) main_cam5_pane_t10

0xd6af,	// (0x0002b66a) main_cam5_pane_t11_ParamLimits

0xd6af,	// (0x0002b66a) main_cam5_pane_t11

0xd6cd,	// (0x0002b688) main_cam5_pane_t12_ParamLimits

0xd6cd,	// (0x0002b688) main_cam5_pane_t12

0xd6e2,	// (0x0002b69d) main_cam5_pane_t13_ParamLimits

0xd6e2,	// (0x0002b69d) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0002da1b) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0002da1b) main_cam5_pane_t

0x0fac,	// (0x0001ef67) popup_scut_keymap_window_ParamLimits

0x0fac,	// (0x0001ef67) popup_scut_keymap_window

0x74fc,	// (0x000254b7) aid_size_cell_brow_shortcut

0xa517,	// (0x000284d2) bg_popup_window_pane_cp010

0x7508,	// (0x000254c3) grid_scut_pane

0x7514,	// (0x000254cf) cell_scut_pane_ParamLimits

0x7514,	// (0x000254cf) cell_scut_pane

0x752b,	// (0x000254e6) cell_scut_pane_g1

0xd6ff,	// (0x0002b6ba) cell_scut_pane_t1

0xd70e,	// (0x0002b6c9) cell_scut_pane_t2

0x7534,	// (0x000254ef) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0002da36) cell_scut_pane_t

0x5ed7,	// (0x00023e92) main_mup3_pane_g8_ParamLimits

0x5ed7,	// (0x00023e92) main_mup3_pane_g8

0x2149,	// (0x00020104) area_vitu2_query_pane_ParamLimits

0x2149,	// (0x00020104) area_vitu2_query_pane

0x7294,	// (0x0002524f) input_focus_pane_cp08

0xd71d,	// (0x0002b6d8) area_vitu2_query_pane_g1

0x7542,	// (0x000254fd) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0002da3d) area_vitu2_query_pane_g

0x7553,	// (0x0002550e) area_vitu2_query_pane_t1_ParamLimits

0x7553,	// (0x0002550e) area_vitu2_query_pane_t1

0x7567,	// (0x00025522) area_vitu2_query_pane_t2_ParamLimits

0x7567,	// (0x00025522) area_vitu2_query_pane_t2

0x757b,	// (0x00025536) area_vitu2_query_pane_t3_ParamLimits

0x757b,	// (0x00025536) area_vitu2_query_pane_t3

0xd729,	// (0x0002b6e4) area_vitu2_query_pane_t4_ParamLimits

0xd729,	// (0x0002b6e4) area_vitu2_query_pane_t4

0xd751,	// (0x0002b70c) area_vitu2_query_pane_t5_ParamLimits

0xd751,	// (0x0002b70c) area_vitu2_query_pane_t5

0xd779,	// (0x0002b734) area_vitu2_query_pane_t6_ParamLimits

0xd779,	// (0x0002b734) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0002da42) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0002da42) area_vitu2_query_pane_t

0x75a3,	// (0x0002555e) bg_button_pane_cp018

0x75b1,	// (0x0002556c) bg_button_pane_cp021

0x75bd,	// (0x00025578) bg_button_pane_cp022

0x75ce,	// (0x00025589) input_focus_pane_cp09

0xadc5,	// (0x00028d80) aid_size_touch_mv_arrow_left

0xadf0,	// (0x00028dab) aid_size_touch_mv_arrow_right

0x6e8c,	// (0x00024e47) main_cset_slider_pane_g16_ParamLimits

0x6e8c,	// (0x00024e47) main_cset_slider_pane_g16

0x6e9a,	// (0x00024e55) main_cset_slider_pane_g17_ParamLimits

0x6e9a,	// (0x00024e55) main_cset_slider_pane_g17

0x74e9,	// (0x000254a4) cell_cam4_burst_pane_g1_ParamLimits

0x9bdb,	// (0x00027b96) compa_mode_pane

0x70ae,	// (0x00025069) popup_vtel_slider_window_g3_ParamLimits

0x70ae,	// (0x00025069) popup_vtel_slider_window_g3

0x70c2,	// (0x0002507d) popup_vtel_slider_window_g4_ParamLimits

0x70c2,	// (0x0002507d) popup_vtel_slider_window_g4

0x70d6,	// (0x00025091) popup_vtel_slider_window_t1_ParamLimits

0x70d6,	// (0x00025091) popup_vtel_slider_window_t1

0x0ffb,	// (0x0001efb6) main_cl_pane

0x14eb,	// (0x0001f4a6) popup_imed_adjust2_window_ParamLimits

0xc3c1,	// (0x0002a37c) bg_tb_trans_pane_cp05_ParamLimits

0xcd4b,	// (0x0002ad06) popup_imed_adjust2_window_g1_ParamLimits

0xcd5a,	// (0x0002ad15) popup_imed_adjust2_window_g2_ParamLimits

0xcd5a,	// (0x0002ad15) popup_imed_adjust2_window_g2

0xcd66,	// (0x0002ad21) popup_imed_adjust2_window_g3_ParamLimits

0xcd66,	// (0x0002ad21) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0002d7ad) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0002d7ad) popup_imed_adjust2_window_g

0xcd72,	// (0x0002ad2d) popup_imed_adjust2_window_t1_ParamLimits

0xcd8a,	// (0x0002ad45) slider_imed_adjust_pane_ParamLimits

0xcd9e,	// (0x0002ad59) slider_imed_adjust_pane_g1_ParamLimits

0xcdae,	// (0x0002ad69) slider_imed_adjust_pane_g2_ParamLimits

0xcdbe,	// (0x0002ad79) slider_imed_adjust_pane_g3_ParamLimits

0xcdcf,	// (0x0002ad8a) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0002d7b4) slider_imed_adjust_pane_g_ParamLimits

0x1ed0,	// (0x0001fe8b) aid_touch_area_cam4_ParamLimits

0x1ed0,	// (0x0001fe8b) aid_touch_area_cam4

0x1ee0,	// (0x0001fe9b) battery_pane_cp01

0x1f67,	// (0x0001ff22) main_camera4_pane_g6_ParamLimits

0x1f67,	// (0x0001ff22) main_camera4_pane_g6

0x1f85,	// (0x0001ff40) main_camera4_pane_t2_ParamLimits

0x1f85,	// (0x0001ff40) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0002d8b7) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0002d8b7) main_camera4_pane_t

0x1ff0,	// (0x0001ffab) aid_touch_area_vid4_ParamLimits

0x1ff0,	// (0x0001ffab) aid_touch_area_vid4

0x2030,	// (0x0001ffeb) main_video4_pane_g5_ParamLimits

0x2030,	// (0x0001ffeb) main_video4_pane_g5

0x2054,	// (0x0002000f) vid4_progress_pane_ParamLimits

0x2054,	// (0x0002000f) vid4_progress_pane

0xd3e1,	// (0x0002b39c) main_cset_slider_pane_g18_ParamLimits

0xd3e1,	// (0x0002b39c) main_cset_slider_pane_g18

0xd5db,	// (0x0002b596) cell_cam4_burst_pane_g2_ParamLimits

0xd5db,	// (0x0002b596) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0002da16) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0002da16) cell_cam4_burst_pane_g

0x75df,	// (0x0002559a) bg_cl_pane_ParamLimits

0x75df,	// (0x0002559a) bg_cl_pane

0x75eb,	// (0x000255a6) cl_header_pane_ParamLimits

0x75eb,	// (0x000255a6) cl_header_pane

0x75f7,	// (0x000255b2) cl_listscroll_pane_ParamLimits

0x75f7,	// (0x000255b2) cl_listscroll_pane

0xd7c5,	// (0x0002b780) bg_cl_pane_g1

0xd7cd,	// (0x0002b788) bg_cl_pane_g2

0xd7d5,	// (0x0002b790) bg_cl_pane_g3

0xd7dd,	// (0x0002b798) bg_cl_pane_g4

0xd7e5,	// (0x0002b7a0) bg_cl_pane_g5

0xd7ed,	// (0x0002b7a8) bg_cl_pane_g6

0xd7f5,	// (0x0002b7b0) bg_cl_pane_g7

0xd7fd,	// (0x0002b7b8) bg_cl_pane_g8

0xd805,	// (0x0002b7c0) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0002da51) bg_cl_pane_g

0x7603,	// (0x000255be) aid_height_cl_leading_ParamLimits

0x7603,	// (0x000255be) aid_height_cl_leading

0x760f,	// (0x000255ca) aid_height_cl_text_ParamLimits

0x760f,	// (0x000255ca) aid_height_cl_text

0xd0f0,	// (0x0002b0ab) bg_cl_header_pane_ParamLimits

0xd0f0,	// (0x0002b0ab) bg_cl_header_pane

0x7627,	// (0x000255e2) cl_header_pane_g1_ParamLimits

0x7627,	// (0x000255e2) cl_header_pane_g1

0x7634,	// (0x000255ef) cl_header_pane_t1_ParamLimits

0x7634,	// (0x000255ef) cl_header_pane_t1

0xd80d,	// (0x0002b7c8) cl_list_pane

0xd3b4,	// (0x0002b36f) hc_scroll_pane_cp01

0xa750,	// (0x0002870b) bg_cl_header_pane_g1

0xd28e,	// (0x0002b249) bg_cl_header_pane_g2

0xa770,	// (0x0002872b) bg_cl_header_pane_g3

0xd29e,	// (0x0002b259) bg_cl_header_pane_g4

0xd296,	// (0x0002b251) bg_cl_header_pane_g5

0xd4cc,	// (0x0002b487) bg_cl_header_pane_g6

0xd2b6,	// (0x0002b271) bg_cl_header_pane_g7

0xd2be,	// (0x0002b279) bg_cl_header_pane_g8

0xd2ae,	// (0x0002b269) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0002da64) bg_cl_header_pane_g

0x7646,	// (0x00025601) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7646,	// (0x00025601) hc_cl_list_double_graphic_heading_pane

0x765a,	// (0x00025615) hc_cl_list_single_graphic_pane_ParamLimits

0x765a,	// (0x00025615) hc_cl_list_single_graphic_pane

0x7674,	// (0x0002562f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7674,	// (0x0002562f) hc_cl_list_single_graphic_pane_g1

0x7680,	// (0x0002563b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7680,	// (0x0002563b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0002da77) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0002da77) hc_cl_list_single_graphic_pane_g

0x7694,	// (0x0002564f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7694,	// (0x0002564f) hc_cl_list_single_graphic_pane_t1

0x7674,	// (0x0002562f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7674,	// (0x0002562f) hc_cl_list_double_graphic_heading_pane_g1

0x76a9,	// (0x00025664) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x76a9,	// (0x00025664) hc_cl_list_double_graphic_heading_pane_g2

0x76bd,	// (0x00025678) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x76bd,	// (0x00025678) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0002da7c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0002da7c) hc_cl_list_double_graphic_heading_pane_g

0x76d1,	// (0x0002568c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x76d1,	// (0x0002568c) hc_cl_list_double_graphic_heading_pane_t1

0x76e6,	// (0x000256a1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x76e6,	// (0x000256a1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0002da83) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0002da83) hc_cl_list_double_graphic_heading_pane_t

0x2579,	// (0x00020534) vid4_progress_pane_g1

0x2589,	// (0x00020544) vid4_progress_pane_g2

0x2599,	// (0x00020554) vid4_progress_pane_g3

0x25ab,	// (0x00020566) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0002da88) vid4_progress_pane_g

0x25c3,	// (0x0002057e) vid4_progress_pane_t1

0x25d9,	// (0x00020594) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0002da93) vid4_progress_pane_t

0x2604,	// (0x000205bf) wait_bar_pane_cp07

0xc5bc,	// (0x0002a577) blid_firmament_pane_ParamLimits

0xc5ff,	// (0x0002a5ba) popup_blid_sat_info2_window_g1

0xc623,	// (0x0002a5de) popup_blid_sat_info2_window_t3

0xc631,	// (0x0002a5ec) popup_blid_sat_info2_window_t4

0xc63f,	// (0x0002a5fa) popup_blid_sat_info2_window_t5

0xc64d,	// (0x0002a608) popup_blid_sat_info2_window_t6

0xc65d,	// (0x0002a618) popup_blid_sat_info2_window_t7

0xc66b,	// (0x0002a626) popup_blid_sat_info2_window_t8

0xc679,	// (0x0002a634) popup_blid_sat_info2_window_t9

0xc687,	// (0x0002a642) popup_blid_sat_info2_window_t10

0xc749,	// (0x0002a704) aid_firma_cardinal_ParamLimits

0xc75d,	// (0x0002a718) blid_firmament_pane_t1_ParamLimits

0xc774,	// (0x0002a72f) blid_firmament_pane_t2_ParamLimits

0xc78b,	// (0x0002a746) blid_firmament_pane_t3_ParamLimits

0xc7a2,	// (0x0002a75d) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0002d6a1) blid_firmament_pane_t_ParamLimits

0xc7b9,	// (0x0002a774) blid_sat_info_pane_ParamLimits

0x1451,	// (0x0001f40c) main_cam_set_pane_ParamLimits

0x65f5,	// (0x000245b0) aid_size_cell_colour_35_ParamLimits

0x660f,	// (0x000245ca) aid_size_cell_colour_112_ParamLimits

0x6626,	// (0x000245e1) aid_size_cell_effect_ParamLimits

0xa407,	// (0x000283c2) bg_tb_trans_pane_cp02_ParamLimits

0xabc4,	// (0x00028b7f) heading_imed_pane_ParamLimits

0x6640,	// (0x000245fb) listscroll_imed_pane_ParamLimits

0xb9a7,	// (0x00029962) popup_call2_audio_first_window_g5_ParamLimits

0xb9a7,	// (0x00029962) popup_call2_audio_first_window_g5

0x1c89,	// (0x0001fc44) aid_size_touch_image3_arrow_left_ParamLimits

0x1c89,	// (0x0001fc44) aid_size_touch_image3_arrow_left

0x1c9f,	// (0x0001fc5a) aid_size_touch_image3_arrow_right_ParamLimits

0x1c9f,	// (0x0001fc5a) aid_size_touch_image3_arrow_right

0x25ee,	// (0x000205a9) vid4_progress_pane_t3

0x68e0,	// (0x0002489b) main_hwr_training_symbol_option_pane_ParamLimits

0x68e0,	// (0x0002489b) main_hwr_training_symbol_option_pane

0xd038,	// (0x0002aff3) popup_hwr_training_preview_window_ParamLimits

0xd038,	// (0x0002aff3) popup_hwr_training_preview_window

0x1987,	// (0x0001f942) hwr_training_navi_pane_g5_ParamLimits

0x1987,	// (0x0001f942) hwr_training_navi_pane_g5

0xd27c,	// (0x0002b237) popup_char_count_window

0x0fed,	// (0x0001efa8) bg_popup_sub_pane_cp20_ParamLimits

0x24ba,	// (0x00020475) list_vitu2_match_list_pane_ParamLimits

0x24c6,	// (0x00020481) vitu2_page_scroll_pane_ParamLimits

0x24c6,	// (0x00020481) vitu2_page_scroll_pane

0xd84a,	// (0x0002b805) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd84a,	// (0x0002b805) list_single_hwr_training_symbol_option_pane

0xd85d,	// (0x0002b818) list_single_hwr_training_symbol_option_pane_g1

0xd865,	// (0x0002b820) list_single_hwr_training_symbol_option_pane_t1

0xd873,	// (0x0002b82e) bg_button_pane_cp023

0xd87c,	// (0x0002b837) bg_button_pane_cp024

0x7733,	// (0x000256ee) vitu2_page_scroll_pane_g1

0x773b,	// (0x000256f6) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0002da9a) vitu2_page_scroll_pane_g

0x7743,	// (0x000256fe) vitu2_page_scroll_pane_t1

0xc7f2,	// (0x0002a7ad) popup_char_count_window_g1

0xd8af,	// (0x0002b86a) popup_char_count_window_g2

0xd8b8,	// (0x0002b873) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0002da9f) popup_char_count_window_g

0xd8c1,	// (0x0002b87c) popup_char_count_window_t1

0x0ffb,	// (0x0001efb6) main_vded2_pane

0xcd37,	// (0x0002acf2) aid_size_cell_imed_line

0xcd41,	// (0x0002acfc) grid_imed_line_width_pane

0x20c0,	// (0x0002007b) vid4_indicators_pane_g4

0xd8cf,	// (0x0002b88a) cell_imed_line_width_pane_ParamLimits

0xd8cf,	// (0x0002b88a) cell_imed_line_width_pane

0xd8e3,	// (0x0002b89e) cell_imed_line_width_pane_g1

0xd82f,	// (0x0002b7ea) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0002daa6) cell_imed_line_width_pane_g

0x7752,	// (0x0002570d) main_vded2_pane_g1_ParamLimits

0x7752,	// (0x0002570d) main_vded2_pane_g1

0x775f,	// (0x0002571a) main_vded2_pane_g2_ParamLimits

0x775f,	// (0x0002571a) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0002daab) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0002daab) main_vded2_pane_g

0x776d,	// (0x00025728) vded2_slider_pane_ParamLimits

0x776d,	// (0x00025728) vded2_slider_pane

0x777a,	// (0x00025735) aid_size_touch_vded2_end

0x7784,	// (0x0002573f) aid_size_touch_vded2_playhead

0xd8ec,	// (0x0002b8a7) aid_size_touch_vded2_start

0xd8f4,	// (0x0002b8af) vded2_slider_bg_pane

0xd8fd,	// (0x0002b8b8) vded2_slider_pane_g1

0xd906,	// (0x0002b8c1) vded2_slider_pane_g2

0x778c,	// (0x00025747) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0002dab0) vded2_slider_pane_g

0xd90e,	// (0x0002b8c9) vded2_slider_bg_pane_g1

0xd917,	// (0x0002b8d2) vded2_slider_bg_pane_g2

0xd920,	// (0x0002b8db) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0002dab7) vded2_slider_bg_pane_g

0x4ecf,	// (0x00022e8a) aid_postcard_touch_down_pane_ParamLimits

0x4ecf,	// (0x00022e8a) aid_postcard_touch_down_pane

0x4edf,	// (0x00022e9a) aid_postcard_touch_up_pane_ParamLimits

0x4edf,	// (0x00022e9a) aid_postcard_touch_up_pane

0x0ffb,	// (0x0001efb6) main_blid2_pane

0x147a,	// (0x0001f435) popup_blid2_search_window

0x9bdb,	// (0x00027b96) blid2_gps_pane

0x9bdb,	// (0x00027b96) blid2_navig_pane

0x9bdb,	// (0x00027b96) blid2_search_pane

0x9bdb,	// (0x00027b96) blid2_tripm_pane

0x7795,	// (0x00025750) blid2_search_pane_g1_ParamLimits

0x7795,	// (0x00025750) blid2_search_pane_g1

0x77a5,	// (0x00025760) blid2_search_pane_t1_ParamLimits

0x77a5,	// (0x00025760) blid2_search_pane_t1

0x77b7,	// (0x00025772) aid_size_cell_blid2_gps_ParamLimits

0x77b7,	// (0x00025772) aid_size_cell_blid2_gps

0x77c7,	// (0x00025782) blid2_gps_pane_g1_ParamLimits

0x77c7,	// (0x00025782) blid2_gps_pane_g1

0x77d3,	// (0x0002578e) grid_blid2_satellite_pane_ParamLimits

0x77d3,	// (0x0002578e) grid_blid2_satellite_pane

0x77e3,	// (0x0002579e) blid2_navig_pane_g1_ParamLimits

0x77e3,	// (0x0002579e) blid2_navig_pane_g1

0x77ef,	// (0x000257aa) blid2_navig_pane_t1_ParamLimits

0x77ef,	// (0x000257aa) blid2_navig_pane_t1

0x7801,	// (0x000257bc) blid2_navig_pane_t2_ParamLimits

0x7801,	// (0x000257bc) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0002dabe) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0002dabe) blid2_navig_pane_t

0x7813,	// (0x000257ce) blid2_navig_ring_pane_ParamLimits

0x7813,	// (0x000257ce) blid2_navig_ring_pane

0x7823,	// (0x000257de) blid2_speed_pane_ParamLimits

0x7823,	// (0x000257de) blid2_speed_pane

0x782f,	// (0x000257ea) blid2_tripm_pane_g1_ParamLimits

0x782f,	// (0x000257ea) blid2_tripm_pane_g1

0x783f,	// (0x000257fa) blid2_tripm_pane_g2_ParamLimits

0x783f,	// (0x000257fa) blid2_tripm_pane_g2

0x784b,	// (0x00025806) blid2_tripm_pane_g3_ParamLimits

0x784b,	// (0x00025806) blid2_tripm_pane_g3

0x7857,	// (0x00025812) blid2_tripm_pane_g4_ParamLimits

0x7857,	// (0x00025812) blid2_tripm_pane_g4

0x7863,	// (0x0002581e) blid2_tripm_pane_g5_ParamLimits

0x7863,	// (0x0002581e) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0002dac3) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0002dac3) blid2_tripm_pane_g

0x787f,	// (0x0002583a) blid2_tripm_pane_t1_ParamLimits

0x787f,	// (0x0002583a) blid2_tripm_pane_t1

0x7893,	// (0x0002584e) blid2_tripm_pane_t2_ParamLimits

0x7893,	// (0x0002584e) blid2_tripm_pane_t2

0x78a5,	// (0x00025860) blid2_tripm_pane_t3_ParamLimits

0x78a5,	// (0x00025860) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0002dad0) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0002dad0) blid2_tripm_pane_t

0x78d7,	// (0x00025892) cell_blid2_satellite_pane_ParamLimits

0x78d7,	// (0x00025892) cell_blid2_satellite_pane

0x78f1,	// (0x000258ac) cell_blid2_satellite_pane_g1

0xd929,	// (0x0002b8e4) cell_blid2_satellite_pane_t1

0xc7c9,	// (0x0002a784) blid2_speed_pane_g1

0xd937,	// (0x0002b8f2) blid2_speed_pane_t1

0xd945,	// (0x0002b900) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0002dad9) blid2_speed_pane_t

0xc7c9,	// (0x0002a784) blid2_navig_ring_pane_g1

0x78fa,	// (0x000258b5) blid2_navig_ring_pane_g2

0x7902,	// (0x000258bd) blid2_navig_ring_pane_g3

0x790a,	// (0x000258c5) blid2_navig_ring_pane_g4

0x7912,	// (0x000258cd) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0002dade) blid2_navig_ring_pane_g

0x9bdb,	// (0x00027b96) bg_popup_window_pane_cp011

0xd953,	// (0x0002b90e) popup_blid2_search_window_g1

0xd95b,	// (0x0002b916) popup_blid2_search_window_t1

0xd969,	// (0x0002b924) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0002dae9) popup_blid2_search_window_t

0xa65f,	// (0x0002861a) main_browser_pane_g1

0xa324,	// (0x000282df) main_browser_pane_ParamLimits

0x1451,	// (0x0001f40c) bg_button_pane_cp011_ParamLimits

0x23e1,	// (0x0002039c) cell_vitu2_function_pane_g1_ParamLimits

0xc3c1,	// (0x0002a37c) bg_popup_sub_pane_cp22_ParamLimits

0x7294,	// (0x0002524f) input_focus_pane_cp08_ParamLimits

0x72ab,	// (0x00025266) popup_vitu2_query_button_pane_ParamLimits

0x72ab,	// (0x00025266) popup_vitu2_query_button_pane

0x72bc,	// (0x00025277) popup_vitu2_query_input_button_pane

0xd531,	// (0x0002b4ec) popup_vitu2_query_window_g1_ParamLimits

0x72c6,	// (0x00025281) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0002d9ea) popup_vitu2_query_window_g_ParamLimits

0x9bdb,	// (0x00027b96) bg_button_pane_cp026

0x791a,	// (0x000258d5) popup_vitu2_query_input_button_pane_g1

0x9bdb,	// (0x00027b96) bg_button_pane_cp025

0xd977,	// (0x0002b932) popup_vitu2_query_button_pane_t1

0x5bf8,	// (0x00023bb3) main_mp3_pane_t6

0x5c08,	// (0x00023bc3) popup_slider_window_cp01

0x1fa5,	// (0x0001ff60) cam4_battery_pane

0x207f,	// (0x0002003a) cam4_battery_pane_cp02

0x2571,	// (0x0002052c) cam4_battery_pane_cp01

0x2571,	// (0x0002052c) cam4_battery_pane_cp03

0xd837,	// (0x0002b7f2) cam4_battery_pane_g1

0xc7c9,	// (0x0002a784) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0002daee) cam4_battery_pane_g

0xc695,	// (0x0002a650) popup_blid_sat_info2_window_t11

0xadc5,	// (0x00028d80) aid_size_touch_mv_arrow_left_ParamLimits

0xadf0,	// (0x00028dab) aid_size_touch_mv_arrow_right_ParamLimits

0xae4e,	// (0x00028e09) navi_pane_g1_ParamLimits

0xae5a,	// (0x00028e15) navi_pane_g2_ParamLimits

0xae88,	// (0x00028e43) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0002d3a0) navi_pane_g_ParamLimits

0x48df,	// (0x0002289a) navi_pane_mv_t1_ParamLimits

0x664c,	// (0x00024607) grid_imed_effect_pane_ParamLimits

0x3324,	// (0x000212df) aid_placing_vt_slider_lsc

0xa5ae,	// (0x00028569) aid_placing_vt_slider_prt

0xa407,	// (0x000283c2) bg_tb_trans_pane_cp01_ParamLimits

0xc937,	// (0x0002a8f2) popup_image_details_window_g1_ParamLimits

0xc94a,	// (0x0002a905) popup_image_details_window_g2_ParamLimits

0xc95f,	// (0x0002a91a) popup_image_details_window_g3_ParamLimits

0xc95f,	// (0x0002a91a) popup_image_details_window_g3

0xf72b,	// (0x0002d6e6) popup_image_details_window_g_ParamLimits

0xc973,	// (0x0002a92e) popup_image_details_window_t1_ParamLimits

0xc985,	// (0x0002a940) popup_image_details_window_t2_ParamLimits

0xc99e,	// (0x0002a959) popup_image_details_window_t3_ParamLimits

0xc9b2,	// (0x0002a96d) popup_image_details_window_t4_ParamLimits

0xc9cd,	// (0x0002a988) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0002d6ed) popup_image_details_window_t_ParamLimits

0x761b,	// (0x000255d6) cl_header_name_pane_ParamLimits

0x761b,	// (0x000255d6) cl_header_name_pane

0x7922,	// (0x000258dd) cl_header_name_pane_t1_ParamLimits

0x7922,	// (0x000258dd) cl_header_name_pane_t1

0x7939,	// (0x000258f4) cl_header_name_pane_t2_ParamLimits

0x7939,	// (0x000258f4) cl_header_name_pane_t2

0x7963,	// (0x0002591e) cl_header_name_pane_t3_ParamLimits

0x7963,	// (0x0002591e) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0002daf3) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0002daf3) cl_header_name_pane_t

0xaf17,	// (0x00028ed2) navi_pane_mv_g2_ParamLimits

0xd239,	// (0x0002b1f4) field_vitu2_entry_pane_g1_ParamLimits

0xd245,	// (0x0002b200) field_vitu2_entry_pane_g2_ParamLimits

0xd251,	// (0x0002b20c) field_vitu2_entry_pane_g3_ParamLimits

0xd251,	// (0x0002b20c) field_vitu2_entry_pane_g3

0xf92e,	// (0x0002d8e9) field_vitu2_entry_pane_g_ParamLimits

0x22ad,	// (0x00020268) cell_vitu2_itu_pane_g1_ParamLimits

0x22bf,	// (0x0002027a) cell_vitu2_itu_pane_g2_ParamLimits

0x22bf,	// (0x0002027a) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0002d8f5) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0002d8f5) cell_vitu2_itu_pane_g

0x1451,	// (0x0001f40c) bg_vkb2_func_pane_cp05_ParamLimits

0x1451,	// (0x0001f40c) bg_vkb2_func_pane_cp05

0x1451,	// (0x0001f40c) bg_vkb2_func_pane_cp03

0x1451,	// (0x0001f40c) bg_vkb2_func_pane_cp04

0x1451,	// (0x0001f40c) bg_vkb2_func_pane_cp10_ParamLimits

0x1451,	// (0x0001f40c) bg_vkb2_func_pane_cp10

0x75bd,	// (0x00025578) bg_vkb2_func_pane_cp08

0x75a3,	// (0x0002555e) bg_vkb2_func_pane_cp06

0x75b1,	// (0x0002556c) bg_vkb2_func_pane_cp07

0xd885,	// (0x0002b840) bg_vkb2_func_pane_cp11_ParamLimits

0xd885,	// (0x0002b840) bg_vkb2_func_pane_cp11

0xd89a,	// (0x0002b855) bg_vkb2_func_pane_cp12_ParamLimits

0xd89a,	// (0x0002b855) bg_vkb2_func_pane_cp12

0x9bdb,	// (0x00027b96) bg_vkb2_func_pane_cp09

0xd28e,	// (0x0002b249) bg_vkb2_func_pane_g1

0xa770,	// (0x0002872b) bg_vkb2_func_pane_g2

0xd296,	// (0x0002b251) bg_vkb2_func_pane_g3

0xd29e,	// (0x0002b259) bg_vkb2_func_pane_g4

0xd4cc,	// (0x0002b487) bg_vkb2_func_pane_g5

0xd2b6,	// (0x0002b271) bg_vkb2_func_pane_g6

0xd2be,	// (0x0002b279) bg_vkb2_func_pane_g7

0xd2ae,	// (0x0002b269) bg_vkb2_func_pane_g8

0xa750,	// (0x0002870b) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0002dafa) bg_vkb2_func_pane_g

0x7871,	// (0x0002582c) blid2_tripm_pane_g6_ParamLimits

0x7871,	// (0x0002582c) blid2_tripm_pane_g6

0xd0fe,	// (0x0002b0b9) mp4_progress_pane_g1

0x78cb,	// (0x00025886) blid2_tripm_values_pane_ParamLimits

0x78cb,	// (0x00025886) blid2_tripm_values_pane

0x7988,	// (0x00025943) blid2_tripm_values_pane_t1

0x7996,	// (0x00025951) blid2_tripm_values_pane_t2

0x79a4,	// (0x0002595f) blid2_tripm_values_pane_t3

0x79b2,	// (0x0002596d) blid2_tripm_values_pane_t4

0x79c0,	// (0x0002597b) blid2_tripm_values_pane_t5

0x79ce,	// (0x00025989) blid2_tripm_values_pane_t6

0x79dc,	// (0x00025997) blid2_tripm_values_pane_t7

0x79ea,	// (0x000259a5) blid2_tripm_values_pane_t8

0x79f8,	// (0x000259b3) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0002db0d) blid2_tripm_values_pane_t

0x3364,	// (0x0002131f) call_video_pane_t1_ParamLimits

0x3385,	// (0x00021340) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0002d229) call_video_pane_t_ParamLimits

0x4e06,	// (0x00022dc1) msg_header_pane_g1_ParamLimits

0xb0f1,	// (0x000290ac) msg_header_pane_g2_ParamLimits

0xb0f1,	// (0x000290ac) msg_header_pane_g2

0x0001,

0xf488,	// (0x0002d443) msg_header_pane_g_ParamLimits

0xf488,	// (0x0002d443) msg_header_pane_g

0xa324,	// (0x000282df) main_clock2_pane_ParamLimits

0x6477,	// (0x00024432) grid_clock2_toolbar_pane_ParamLimits

0x6477,	// (0x00024432) grid_clock2_toolbar_pane

0x6477,	// (0x00024432) listscroll_clock2_pane_ParamLimits

0x6477,	// (0x00024432) listscroll_clock2_pane

0x6521,	// (0x000244dc) main_clock2_pane_t3_ParamLimits

0x6521,	// (0x000244dc) main_clock2_pane_t3

0x6533,	// (0x000244ee) main_clock2_pane_t4_ParamLimits

0x6533,	// (0x000244ee) main_clock2_pane_t4

0xd985,	// (0x0002b940) cell_clock2_toolbar_pane

0xd98d,	// (0x0002b948) cell_clock2_toolbar_pane_cp01

0xd98d,	// (0x0002b948) cell_clock2_toolbar_pane_cp02

0xd995,	// (0x0002b950) cell_clock2_toolbar_pane_cp03

0xd99d,	// (0x0002b958) list_clock2_pane

0xad4a,	// (0x00028d05) scroll_pane_cp10

0xd9a5,	// (0x0002b960) list_single_clock2_pane_ParamLimits

0xd9a5,	// (0x0002b960) list_single_clock2_pane

0xa517,	// (0x000284d2) list_highlight_pane_cp08

0xd9b2,	// (0x0002b96d) list_single_clock2_pane_t1

0xd9c0,	// (0x0002b97b) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0002db20) list_single_clock2_pane_t

0x9bdb,	// (0x00027b96) bg_button_pane_cp10

0xd9ce,	// (0x0002b989) cell_clock2_toolbar_pane_g1

0x13ec,	// (0x0001f3a7) aid_main_viewer_pane_g1_ParamLimits

0x13ec,	// (0x0001f3a7) aid_main_viewer_pane_g1

0x13f8,	// (0x0001f3b3) aid_main_viewer_pane_g2_ParamLimits

0x13f8,	// (0x0001f3b3) aid_main_viewer_pane_g2

0x4e8b,	// (0x00022e46) aid_main_viewer_pane_g3_ParamLimits

0x4e8b,	// (0x00022e46) aid_main_viewer_pane_g3

0x4e9c,	// (0x00022e57) aid_main_viewer_pane_g4_ParamLimits

0x4e9c,	// (0x00022e57) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0002d454) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0002d454) aid_main_viewer_pane_g

0x1444,	// (0x0001f3ff) main_calc_pane_ParamLimits

0x145f,	// (0x0001f41a) main_dialer2_pane_ParamLimits

0x0ffb,	// (0x0001efb6) main_cam6_pane

0x0ffb,	// (0x0001efb6) main_vid6_pane

0x6483,	// (0x0002443e) listscroll_gen_pane_cp06_ParamLimits

0x6483,	// (0x0002443e) listscroll_gen_pane_cp06

0x6545,	// (0x00024500) main_clock2_pane_t5_ParamLimits

0x6545,	// (0x00024500) main_clock2_pane_t5

0x658e,	// (0x00024549) aid_call2_pane_cp10_ParamLimits

0x65a0,	// (0x0002455b) aid_call_pane_cp10_ParamLimits

0xadb9,	// (0x00028d74) popup_clock_analogue_window_cp10_g1_ParamLimits

0xadb9,	// (0x00028d74) popup_clock_analogue_window_cp10_g2_ParamLimits

0x65b2,	// (0x0002456d) popup_clock_analogue_window_cp10_g3_ParamLimits

0x65b2,	// (0x0002456d) popup_clock_analogue_window_cp10_g4_ParamLimits

0xadb9,	// (0x00028d74) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0002d7a2) popup_clock_analogue_window_cp10_g_ParamLimits

0x65c4,	// (0x0002457f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x69b9,	// (0x00024974) cell_dialer2_keypad_pane_g2_ParamLimits

0x69b9,	// (0x00024974) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0002d888) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0002d888) cell_dialer2_keypad_pane_g

0x69d5,	// (0x00024990) cell_dialer2_keypad_pane_t1

0x6d74,	// (0x00024d2f) main_cset_text2_pane_ParamLimits

0x6d74,	// (0x00024d2f) main_cset_text2_pane

0xd71d,	// (0x0002b6d8) area_vitu2_query_pane_g1_ParamLimits

0x7542,	// (0x000254fd) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0002da3d) area_vitu2_query_pane_g_ParamLimits

0xd7a1,	// (0x0002b75c) area_vitu2_query_pane_t7_ParamLimits

0xd7a1,	// (0x0002b75c) area_vitu2_query_pane_t7

0x75a3,	// (0x0002555e) bg_button_pane_cp018_ParamLimits

0x75b1,	// (0x0002556c) bg_button_pane_cp021_ParamLimits

0x75bd,	// (0x00025578) bg_button_pane_cp022_ParamLimits

0x75bd,	// (0x00025578) bg_vkb2_func_pane_cp08_ParamLimits

0x75a3,	// (0x0002555e) bg_vkb2_func_pane_cp06_ParamLimits

0x75b1,	// (0x0002556c) bg_vkb2_func_pane_cp07_ParamLimits

0x75ce,	// (0x00025589) input_focus_pane_cp09_ParamLimits

0x2615,	// (0x000205d0) cam6_autofocus_pane_ParamLimits

0x2615,	// (0x000205d0) cam6_autofocus_pane

0x2637,	// (0x000205f2) cam6_image_uncrop_pane_ParamLimits

0x2637,	// (0x000205f2) cam6_image_uncrop_pane

0x2664,	// (0x0002061f) cam6_indi_pane_ParamLimits

0x2664,	// (0x0002061f) cam6_indi_pane

0x267e,	// (0x00020639) cam6_mode_pane_ParamLimits

0x267e,	// (0x00020639) cam6_mode_pane

0x2692,	// (0x0002064d) cam6_timer_pane_ParamLimits

0x2692,	// (0x0002064d) cam6_timer_pane

0x26a3,	// (0x0002065e) cam6_zoom_pane_ParamLimits

0x26a3,	// (0x0002065e) cam6_zoom_pane

0x7a06,	// (0x000259c1) cam6_mode_pane_g1_ParamLimits

0x7a06,	// (0x000259c1) cam6_mode_pane_g1

0x7a12,	// (0x000259cd) cam6_mode_pane_g2_ParamLimits

0x7a12,	// (0x000259cd) cam6_mode_pane_g2

0x7a1e,	// (0x000259d9) cam6_mode_pane_g3_ParamLimits

0x7a1e,	// (0x000259d9) cam6_mode_pane_g3

0x7a2a,	// (0x000259e5) cam6_mode_pane_g4_ParamLimits

0x7a2a,	// (0x000259e5) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0002db25) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0002db25) cam6_mode_pane_g

0xd144,	// (0x0002b0ff) bg_tb_trans_pane_cp08_ParamLimits

0xd144,	// (0x0002b0ff) bg_tb_trans_pane_cp08

0xd9d6,	// (0x0002b991) cam6_battery_pane_ParamLimits

0xd9d6,	// (0x0002b991) cam6_battery_pane

0xd9ec,	// (0x0002b9a7) cam6_indi_pane_g1_ParamLimits

0xd9ec,	// (0x0002b9a7) cam6_indi_pane_g1

0xd9fe,	// (0x0002b9b9) cam6_indi_pane_g2_ParamLimits

0xd9fe,	// (0x0002b9b9) cam6_indi_pane_g2

0xda10,	// (0x0002b9cb) cam6_indi_pane_g3_ParamLimits

0xda10,	// (0x0002b9cb) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0002db2e) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0002db2e) cam6_indi_pane_g

0xda22,	// (0x0002b9dd) cam6_indi_pane_t1_ParamLimits

0xda22,	// (0x0002b9dd) cam6_indi_pane_t1

0x6a74,	// (0x00024a2f) cam6_autofocus_pane_g1

0x6a6c,	// (0x00024a27) cam6_autofocus_pane_g2

0x6a84,	// (0x00024a3f) cam6_autofocus_pane_g3

0x6a7c,	// (0x00024a37) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0002db35) cam6_autofocus_pane_g

0xda48,	// (0x0002ba03) cam6_timer_pane_g1

0xda50,	// (0x0002ba0b) cam6_timer_pane_t1

0xda5e,	// (0x0002ba19) cam6_zoom_cont_pane

0xda66,	// (0x0002ba21) cam6_zoom_pane_g1

0xda6e,	// (0x0002ba29) cam6_zoom_pane_g2

0x7a36,	// (0x000259f1) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0002db3e) cam6_zoom_pane_g

0xc7c9,	// (0x0002a784) cam6_battery_pane_g1

0xc7c9,	// (0x0002a784) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0002d6aa) cam6_battery_pane_g

0xda76,	// (0x0002ba31) cam6_zoom_cont_pane_g1

0xda7f,	// (0x0002ba3a) cam6_zoom_cont_pane_g2

0xda88,	// (0x0002ba43) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0002db45) cam6_zoom_cont_pane_g

0x7a53,	// (0x00025a0e) cam6_mode_pane_cp_ParamLimits

0x7a53,	// (0x00025a0e) cam6_mode_pane_cp

0x7a67,	// (0x00025a22) cam6_zoom_pane_cp_ParamLimits

0x7a67,	// (0x00025a22) cam6_zoom_pane_cp

0x7a7f,	// (0x00025a3a) vid6_image_uncrop_cif_pane_ParamLimits

0x7a7f,	// (0x00025a3a) vid6_image_uncrop_cif_pane

0x7aab,	// (0x00025a66) vid6_image_uncrop_nhd_pane_ParamLimits

0x7aab,	// (0x00025a66) vid6_image_uncrop_nhd_pane

0x7ac8,	// (0x00025a83) vid6_image_uncrop_vga_pane_ParamLimits

0x7ac8,	// (0x00025a83) vid6_image_uncrop_vga_pane

0x7ae7,	// (0x00025aa2) vid6_image_uncrop_wvga_pane_ParamLimits

0x7ae7,	// (0x00025aa2) vid6_image_uncrop_wvga_pane

0x7b04,	// (0x00025abf) vid6_indi_pane_ParamLimits

0x7b04,	// (0x00025abf) vid6_indi_pane

0xd144,	// (0x0002b0ff) bg_tb_trans_pane_cp09_ParamLimits

0xd144,	// (0x0002b0ff) bg_tb_trans_pane_cp09

0xdaa0,	// (0x0002ba5b) cam6_battery_pane_cp_ParamLimits

0xdaa0,	// (0x0002ba5b) cam6_battery_pane_cp

0xdaac,	// (0x0002ba67) vid6_indi_pane_g1_ParamLimits

0xdaac,	// (0x0002ba67) vid6_indi_pane_g1

0xdabe,	// (0x0002ba79) vid6_indi_pane_g2_ParamLimits

0xdabe,	// (0x0002ba79) vid6_indi_pane_g2

0xdad0,	// (0x0002ba8b) vid6_indi_pane_g3_ParamLimits

0xdad0,	// (0x0002ba8b) vid6_indi_pane_g3

0xdae5,	// (0x0002baa0) vid6_indi_pane_g4_ParamLimits

0xdae5,	// (0x0002baa0) vid6_indi_pane_g4

0xdafa,	// (0x0002bab5) vid6_indi_pane_g5_ParamLimits

0xdafa,	// (0x0002bab5) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0002db4c) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0002db4c) vid6_indi_pane_g

0xdb14,	// (0x0002bacf) vid6_indi_pane_t1_ParamLimits

0xdb14,	// (0x0002bacf) vid6_indi_pane_t1

0xdb2a,	// (0x0002bae5) vid6_indi_pane_t2_ParamLimits

0xdb2a,	// (0x0002bae5) vid6_indi_pane_t2

0xdb52,	// (0x0002bb0d) vid6_indi_pane_t3_ParamLimits

0xdb52,	// (0x0002bb0d) vid6_indi_pane_t3

0xdb7a,	// (0x0002bb35) vid6_indi_pane_t4_ParamLimits

0xdb7a,	// (0x0002bb35) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0002db57) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0002db57) vid6_indi_pane_t

0xdb9e,	// (0x0002bb59) wait_bar_pane_cp08

0x7b27,	// (0x00025ae2) main_cset_text2_pane_t1_ParamLimits

0x7b27,	// (0x00025ae2) main_cset_text2_pane_t1

0x7a3e,	// (0x000259f9) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a3e,	// (0x000259f9) listscroll_gen_pane_cp06_t1

0x0ffb,	// (0x0001efb6) main_cam6_set_pane

0x1f97,	// (0x0001ff52) bg_tb_trans_pane_cp06_ParamLimits

0x1fad,	// (0x0001ff68) cam4_indicators_pane_g1_ParamLimits

0x1fbe,	// (0x0001ff79) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0002d8c5) cam4_indicators_pane_g_ParamLimits

0x1fd6,	// (0x0001ff91) cam4_indicators_pane_t1_ParamLimits

0x1451,	// (0x0001f40c) bg_tb_trans_pane_cp07_ParamLimits

0x2087,	// (0x00020042) vid4_indicators_pane_g1_ParamLimits

0x209b,	// (0x00020056) vid4_indicators_pane_g2_ParamLimits

0x20af,	// (0x0002006a) vid4_indicators_pane_g3_ParamLimits

0x20c0,	// (0x0002007b) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0002d8d7) vid4_indicators_pane_g_ParamLimits

0x20dc,	// (0x00020097) vid4_indicators_pane_t1_ParamLimits

0x2579,	// (0x00020534) vid4_progress_pane_g1_ParamLimits

0x2589,	// (0x00020544) vid4_progress_pane_g2_ParamLimits

0x2599,	// (0x00020554) vid4_progress_pane_g3_ParamLimits

0x25ab,	// (0x00020566) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0002da88) vid4_progress_pane_g_ParamLimits

0x25c3,	// (0x0002057e) vid4_progress_pane_t1_ParamLimits

0x25d9,	// (0x00020594) vid4_progress_pane_t2_ParamLimits

0x25ee,	// (0x000205a9) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0002da93) vid4_progress_pane_t_ParamLimits

0x2604,	// (0x000205bf) wait_bar_pane_cp07_ParamLimits

0x7b5e,	// (0x00025b19) main_cam6_set_pane_g2_ParamLimits

0x7b5e,	// (0x00025b19) main_cam6_set_pane_g2

0x7b6a,	// (0x00025b25) main_cset6_listscroll_pane_ParamLimits

0x7b6a,	// (0x00025b25) main_cset6_listscroll_pane

0x7b95,	// (0x00025b50) main_cset6_slider_pane_ParamLimits

0x7b95,	// (0x00025b50) main_cset6_slider_pane

0x7ba1,	// (0x00025b5c) main_cset6_text2_pane_ParamLimits

0x7ba1,	// (0x00025b5c) main_cset6_text2_pane

0xdbad,	// (0x0002bb68) main_cset6_text_pane

0xdbb5,	// (0x0002bb70) main_cset_list_pane_copy1_ParamLimits

0xdbb5,	// (0x0002bb70) main_cset_list_pane_copy1

0xdbc5,	// (0x0002bb80) scroll_pane_cp028_copy1

0x7bb4,	// (0x00025b6f) cset_list_set_pane_copy1

0x7bca,	// (0x00025b85) aid_position_infowindow_above_copy1

0x7bd2,	// (0x00025b8d) aid_position_infowindow_below_copy1

0xdbce,	// (0x0002bb89) cset_list_set_pane_g1_copy1

0xdbd6,	// (0x0002bb91) cset_list_set_pane_g3_copy1_ParamLimits

0xdbd6,	// (0x0002bb91) cset_list_set_pane_g3_copy1

0xdbe5,	// (0x0002bba0) cset_list_set_pane_t1_copy1_ParamLimits

0xdbe5,	// (0x0002bba0) cset_list_set_pane_t1_copy1

0xa407,	// (0x000283c2) list_highlight_pane_cp021_copy1_ParamLimits

0xa407,	// (0x000283c2) list_highlight_pane_cp021_copy1

0xdbfa,	// (0x0002bbb5) cset6_slider_pane_ParamLimits

0xdbfa,	// (0x0002bbb5) cset6_slider_pane

0xdc26,	// (0x0002bbe1) main_cset6_slider_pane_g1_ParamLimits

0xdc26,	// (0x0002bbe1) main_cset6_slider_pane_g1

0x7bda,	// (0x00025b95) main_cset6_slider_pane_g2_ParamLimits

0x7bda,	// (0x00025b95) main_cset6_slider_pane_g2

0xdc4e,	// (0x0002bc09) main_cset6_slider_pane_g3_ParamLimits

0xdc4e,	// (0x0002bc09) main_cset6_slider_pane_g3

0x7c02,	// (0x00025bbd) main_cset6_slider_pane_g4_ParamLimits

0x7c02,	// (0x00025bbd) main_cset6_slider_pane_g4

0x7c0e,	// (0x00025bc9) main_cset6_slider_pane_g5_ParamLimits

0x7c0e,	// (0x00025bc9) main_cset6_slider_pane_g5

0xd3c9,	// (0x0002b384) main_cset6_slider_pane_g7_ParamLimits

0xd3c9,	// (0x0002b384) main_cset6_slider_pane_g7

0xd3d5,	// (0x0002b390) main_cset6_slider_pane_g8_ParamLimits

0xd3d5,	// (0x0002b390) main_cset6_slider_pane_g8

0x7c1c,	// (0x00025bd7) main_cset6_slider_pane_g9_ParamLimits

0x7c1c,	// (0x00025bd7) main_cset6_slider_pane_g9

0x7c28,	// (0x00025be3) main_cset6_slider_pane_g10_ParamLimits

0x7c28,	// (0x00025be3) main_cset6_slider_pane_g10

0x7c34,	// (0x00025bef) main_cset6_slider_pane_g11_ParamLimits

0x7c34,	// (0x00025bef) main_cset6_slider_pane_g11

0x7c40,	// (0x00025bfb) main_cset6_slider_pane_g12_ParamLimits

0x7c40,	// (0x00025bfb) main_cset6_slider_pane_g12

0xd4d4,	// (0x0002b48f) main_cset6_slider_pane_g13_ParamLimits

0xd4d4,	// (0x0002b48f) main_cset6_slider_pane_g13

0xd4e0,	// (0x0002b49b) main_cset6_slider_pane_g14_ParamLimits

0xd4e0,	// (0x0002b49b) main_cset6_slider_pane_g14

0x7c4c,	// (0x00025c07) main_cset6_slider_pane_g15_ParamLimits

0x7c4c,	// (0x00025c07) main_cset6_slider_pane_g15

0x7c64,	// (0x00025c1f) main_cset6_slider_pane_g16_ParamLimits

0x7c64,	// (0x00025c1f) main_cset6_slider_pane_g16

0x7c72,	// (0x00025c2d) main_cset6_slider_pane_g17_ParamLimits

0x7c72,	// (0x00025c2d) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0002db60) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0002db60) main_cset6_slider_pane_g

0xdc66,	// (0x0002bc21) main_cset6_slider_pane_t1_ParamLimits

0xdc66,	// (0x0002bc21) main_cset6_slider_pane_t1

0x7c8c,	// (0x00025c47) main_cset6_slider_pane_t2_ParamLimits

0x7c8c,	// (0x00025c47) main_cset6_slider_pane_t2

0x7cb7,	// (0x00025c72) main_cset6_slider_pane_t3_ParamLimits

0x7cb7,	// (0x00025c72) main_cset6_slider_pane_t3

0x7ce2,	// (0x00025c9d) main_cset6_slider_pane_t4_ParamLimits

0x7ce2,	// (0x00025c9d) main_cset6_slider_pane_t4

0x7d0d,	// (0x00025cc8) main_cset6_slider_pane_t5_ParamLimits

0x7d0d,	// (0x00025cc8) main_cset6_slider_pane_t5

0xdca7,	// (0x0002bc62) main_cset6_slider_pane_t7_ParamLimits

0xdca7,	// (0x0002bc62) main_cset6_slider_pane_t7

0x7d3a,	// (0x00025cf5) main_cset6_slider_pane_t8_ParamLimits

0x7d3a,	// (0x00025cf5) main_cset6_slider_pane_t8

0x7d5e,	// (0x00025d19) main_cset6_slider_pane_t9_ParamLimits

0x7d5e,	// (0x00025d19) main_cset6_slider_pane_t9

0x7d82,	// (0x00025d3d) main_cset6_slider_pane_t10_ParamLimits

0x7d82,	// (0x00025d3d) main_cset6_slider_pane_t10

0x7da6,	// (0x00025d61) main_cset6_slider_pane_t11_ParamLimits

0x7da6,	// (0x00025d61) main_cset6_slider_pane_t11

0xdcdd,	// (0x0002bc98) main_cset6_slider_pane_t14_ParamLimits

0xdcdd,	// (0x0002bc98) main_cset6_slider_pane_t14

0xdd16,	// (0x0002bcd1) main_cset6_slider_pane_t15_ParamLimits

0xdd16,	// (0x0002bcd1) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0002db85) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0002db85) main_cset6_slider_pane_t

0xd00d,	// (0x0002afc8) cset_slider_pane_g1_copy1

0xd4ec,	// (0x0002b4a7) cset_slider_pane_g2_copy1

0xd4f5,	// (0x0002b4b0) cset_slider_pane_g3_copy1

0x9bdb,	// (0x00027b96) bg_popup_sub_pane_cp011_copy1

0xdd4f,	// (0x0002bd0a) main_cset_text_pane_g1_copy1

0xd545,	// (0x0002b500) main_cset_text_pane_t1_copy1

0xd553,	// (0x0002b50e) main_cset_text_pane_t2_copy1

0xd561,	// (0x0002b51c) main_cset_text_pane_t3_copy1

0xd56f,	// (0x0002b52a) main_cset_text_pane_t4_copy1

0xd57d,	// (0x0002b538) main_cset_text_pane_t5_copy1

0xdd57,	// (0x0002bd12) main_cset_text_pane_t6_copy1

0xdd65,	// (0x0002bd20) main_cset_text_pane_t7_copy1

0x7ea2,	// (0x00025e5d) main_cset_text2_pane_t1_copy1

0x1451,	// (0x0001f40c) main_ncimui_pane

0x14b0,	// (0x0001f46b) popup_query_ncimui_window_ParamLimits

0x14b0,	// (0x0001f46b) popup_query_ncimui_window

0xcab8,	// (0x0002aa73) field_cale_ev2_pane_g4_ParamLimits

0xcab8,	// (0x0002aa73) field_cale_ev2_pane_g4

0x6959,	// (0x00024914) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6959,	// (0x00024914) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0002d863) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0002d863) cell_video_dialer_keypad_pane_g

0x6971,	// (0x0002492c) cell_video_dialer_keypad_pane_t1

0x9bdb,	// (0x00027b96) bg_popup_window_pane_cp012

0xac35,	// (0x00028bf0) heading_pane_cp06

0xdd91,	// (0x0002bd4c) ncim_query_content_pane

0x9bdb,	// (0x00027b96) bg_popup_heading_pane_cp01

0xdd99,	// (0x0002bd54) ncim_heading_pane_t1

0xdda7,	// (0x0002bd62) ncim_indicator_popup_pane

0xddb9,	// (0x0002bd74) ncim_query_button_pane

0xddcd,	// (0x0002bd88) ncim_query_content_pane_t1

0xdddf,	// (0x0002bd9a) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0002dbc9) ncim_query_content_pane_t

0xde19,	// (0x0002bdd4) ncim_query_list_pane

0xde2b,	// (0x0002bde6) ncim_query_popup_pane

0xdda7,	// (0x0002bd62) ncim_indicator_popup_pane_ParamLimits

0x7ff6,	// (0x00025fb1) ncim_query_content_pane_g1_ParamLimits

0x7ff6,	// (0x00025fb1) ncim_query_content_pane_g1

0xddcd,	// (0x0002bd88) ncim_query_content_pane_t1_ParamLimits

0xdddf,	// (0x0002bd9a) ncim_query_content_pane_t2_ParamLimits

0x8002,	// (0x00025fbd) ncim_query_content_pane_t3_ParamLimits

0x8002,	// (0x00025fbd) ncim_query_content_pane_t3

0x801f,	// (0x00025fda) ncim_query_content_pane_t4_ParamLimits

0x801f,	// (0x00025fda) ncim_query_content_pane_t4

0x803c,	// (0x00025ff7) ncim_query_content_pane_t5_ParamLimits

0x803c,	// (0x00025ff7) ncim_query_content_pane_t5

0xddf1,	// (0x0002bdac) ncim_query_content_pane_t6_ParamLimits

0xddf1,	// (0x0002bdac) ncim_query_content_pane_t6

0xfc0e,	// (0x0002dbc9) ncim_query_content_pane_t_ParamLimits

0xde19,	// (0x0002bdd4) ncim_query_list_pane_ParamLimits

0xde2b,	// (0x0002bde6) ncim_query_popup_pane_ParamLimits

0xde3f,	// (0x0002bdfa) wait_bar_pane_cp04

0x9bdb,	// (0x00027b96) input_focus_pane_cp011

0xde47,	// (0x0002be02) ncim_query_popup_pane_t1

0xde55,	// (0x0002be10) ncim_list_query_list_pane_ParamLimits

0xde55,	// (0x0002be10) ncim_list_query_list_pane

0x9bdb,	// (0x00027b96) bg_button_pane_cp027

0xde62,	// (0x0002be1d) ncim_query_button_pane_g1

0x9bdb,	// (0x00027b96) list_highlight_pane_cp012

0xde6c,	// (0x0002be27) ncim_list_query_list_pane_g1

0xde74,	// (0x0002be2f) ncim_list_query_list_pane_t1

0x1fca,	// (0x0001ff85) cam4_indicators_pane_g3_ParamLimits

0x1fca,	// (0x0001ff85) cam4_indicators_pane_g3

0x20cc,	// (0x00020087) vid4_indicators_pane_g5_ParamLimits

0x20cc,	// (0x00020087) vid4_indicators_pane_g5

0x25b7,	// (0x00020572) vid4_progress_pane_g5_ParamLimits

0x25b7,	// (0x00020572) vid4_progress_pane_g5

0x7ee2,	// (0x00025e9d) main_ncimui_pane_g1

0x7f4a,	// (0x00025f05) ncimui_group_query_pane_ParamLimits

0x7f4a,	// (0x00025f05) ncimui_group_query_pane

0x7f92,	// (0x00025f4d) ncimui_list_pane_ParamLimits

0x7f92,	// (0x00025f4d) ncimui_list_pane

0x7fb9,	// (0x00025f74) ncimui_text_pane_ParamLimits

0x7fb9,	// (0x00025f74) ncimui_text_pane

0x8059,	// (0x00026014) ncimui_text_pane_t1_ParamLimits

0x8059,	// (0x00026014) ncimui_text_pane_t1

0xde82,	// (0x0002be3d) ncimui_list_single_graphic_pane_ParamLimits

0xde82,	// (0x0002be3d) ncimui_list_single_graphic_pane

0x8078,	// (0x00026033) ncimui_query_pane_ParamLimits

0x8078,	// (0x00026033) ncimui_query_pane

0x9bdb,	// (0x00027b96) list_highlight_pane_cp013

0xde92,	// (0x0002be4d) ncim_list_query_list_pane_t1_copy1

0xdea0,	// (0x0002be5b) ncim_list_single_graphic_pane_g1

0x808b,	// (0x00026046) ncim_query_button_pane_cp01

0x8097,	// (0x00026052) ncim_query_entry_pane_ParamLimits

0x8097,	// (0x00026052) ncim_query_entry_pane

0x80aa,	// (0x00026065) ncimui_query_pane_g1

0x80b6,	// (0x00026071) ncimui_query_pane_t1_ParamLimits

0x80b6,	// (0x00026071) ncimui_query_pane_t1

0xa407,	// (0x000283c2) input_focus_pane_cp012

0xdea8,	// (0x0002be63) ncim_query_entry_pane_t1

0xa324,	// (0x000282df) main_im_pane_ParamLimits

0x1451,	// (0x0001f40c) main_mobtv_pane_ParamLimits

0x1451,	// (0x0001f40c) main_mobtv_pane

0x7c80,	// (0x00025c3b) main_cset6_slider_pane_g18_ParamLimits

0x7c80,	// (0x00025c3b) main_cset6_slider_pane_g18

0xdc5a,	// (0x0002bc15) main_cset6_slider_pane_g19_ParamLimits

0xdc5a,	// (0x0002bc15) main_cset6_slider_pane_g19

0xd251,	// (0x0002b20c) bg_main_mobtv_pane_ParamLimits

0xd251,	// (0x0002b20c) bg_main_mobtv_pane

0x80cf,	// (0x0002608a) main_mobtv_info_pane

0x80da,	// (0x00026095) main_mobtv_loading_pane_ParamLimits

0x80da,	// (0x00026095) main_mobtv_loading_pane

0xdeba,	// (0x0002be75) main_mobtv_pg_channel_list_pane

0xdec4,	// (0x0002be7f) main_mobtv_pg_hdr_pane

0x80e7,	// (0x000260a2) main_mobtv_programe_curr_pane_ParamLimits

0x80e7,	// (0x000260a2) main_mobtv_programe_curr_pane

0x80f4,	// (0x000260af) main_mobtv_programe_next_pane_ParamLimits

0x80f4,	// (0x000260af) main_mobtv_programe_next_pane

0xdecd,	// (0x0002be88) popup_mobtv_noti_window

0xc7c9,	// (0x0002a784) main_tv_pg_hdr_pane_g1

0xded5,	// (0x0002be90) main_tv_pg_hdr_pane_g2

0xdedd,	// (0x0002be98) main_tv_pg_hdr_pane_g3

0xdee5,	// (0x0002bea0) main_tv_pg_hdr_pane_g4

0xdeed,	// (0x0002bea8) main_tv_pg_hdr_pane_g5

0xdef7,	// (0x0002beb2) main_tv_pg_hdr_pane_g6

0xdf01,	// (0x0002bebc) main_tv_pg_hdr_pane_g7

0xdf0b,	// (0x0002bec6) main_tv_pg_hdr_pane_g8

0xdf15,	// (0x0002bed0) main_tv_pg_hdr_pane_g9

0xdf1f,	// (0x0002beda) main_tv_pg_hdr_pane_g10

0xdf29,	// (0x0002bee4) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0002dbd6) main_tv_pg_hdr_pane_g

0xdf33,	// (0x0002beee) main_tv_pg_hdr_pane_t1

0xdf41,	// (0x0002befc) main_tv_pg_hdr_pane_t2

0xdf4f,	// (0x0002bf0a) main_tv_pg_hdr_pane_t3

0xdf5f,	// (0x0002bf1a) main_tv_pg_hdr_pane_t4

0xdf6f,	// (0x0002bf2a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0002dbed) main_tv_pg_hdr_pane_t

0xdf7f,	// (0x0002bf3a) single_mobtv_pg_channel_pane_ParamLimits

0xdf7f,	// (0x0002bf3a) single_mobtv_pg_channel_pane

0xdf91,	// (0x0002bf4c) single_mobtv_pg_channel_table_pane

0xa873,	// (0x0002882e) single_mobtv_pg_channel_thumb_pane

0xdf9a,	// (0x0002bf55) single_tv_pg_channel_pane_g1

0xdfa3,	// (0x0002bf5e) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0002dbf8) single_tv_pg_channel_pane_g

0xca17,	// (0x0002a9d2) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca17,	// (0x0002a9d2) bg_single_mobtv_pg_channel_thumb_pane

0xdfac,	// (0x0002bf67) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfac,	// (0x0002bf67) single_mobtv_pg_channel_thumb_pane_g1

0xdfba,	// (0x0002bf75) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfba,	// (0x0002bf75) single_mobtv_pg_channel_thumb_pane_g2

0xdfc6,	// (0x0002bf81) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfc6,	// (0x0002bf81) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0002dbfd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0002dbfd) single_mobtv_pg_channel_thumb_pane_g

0xdfd2,	// (0x0002bf8d) single_mobtv_pg_channel_thumb_pane_t1

0xdfe0,	// (0x0002bf9b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0002dc04) single_mobtv_pg_channel_thumb_pane_t

0xc7c9,	// (0x0002a784) bg_single_mobtv_pg_channel_table_pane_g1

0xc7c9,	// (0x0002a784) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0002d6aa) bg_single_mobtv_pg_channel_table_pane_g

0xdfee,	// (0x0002bfa9) single_mobtv_pg_channel_table_pane_t1

0xdffc,	// (0x0002bfb7) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0002dc09) single_mobtv_pg_channel_table_pane_t

0x8109,	// (0x000260c4) main_mobtv_info_pane_g1_ParamLimits

0x8109,	// (0x000260c4) main_mobtv_info_pane_g1

0x8125,	// (0x000260e0) main_mobtv_info_pane_t1_ParamLimits

0x8125,	// (0x000260e0) main_mobtv_info_pane_t1

0x819d,	// (0x00026158) main_mobtv_info_pane_t2_ParamLimits

0x819d,	// (0x00026158) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0002dc13) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0002dc13) main_mobtv_info_pane_t

0x822c,	// (0x000261e7) wait_bar_pane_cp05

0x823e,	// (0x000261f9) main_mobtv_loading_pane_g1_ParamLimits

0x823e,	// (0x000261f9) main_mobtv_loading_pane_g1

0x824c,	// (0x00026207) main_mobtv_loading_pane_g2_ParamLimits

0x824c,	// (0x00026207) main_mobtv_loading_pane_g2

0x8258,	// (0x00026213) main_mobtv_loading_pane_g3_ParamLimits

0x8258,	// (0x00026213) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0002dc1a) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0002dc1a) main_mobtv_loading_pane_g

0xe00a,	// (0x0002bfc5) main_mobtv_loading_pane_t1_ParamLimits

0xe00a,	// (0x0002bfc5) main_mobtv_loading_pane_t1

0xe022,	// (0x0002bfdd) main_mobtv_loading_pane_t2_ParamLimits

0xe022,	// (0x0002bfdd) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0002dc21) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0002dc21) main_mobtv_loading_pane_t

0x8266,	// (0x00026221) wait_bar_pane_cp06_ParamLimits

0x8266,	// (0x00026221) wait_bar_pane_cp06

0xe046,	// (0x0002c001) main_mobtv_programe_curr_pane_t1

0xe054,	// (0x0002c00f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0002dc26) main_mobtv_programe_curr_pane_t

0xe062,	// (0x0002c01d) main_mobtv_programe_next_pane_t1

0xe070,	// (0x0002c02b) main_mobtv_programe_next_pane_t2

0xe07e,	// (0x0002c039) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0002dc2b) main_mobtv_programe_next_pane_t

0x9bdb,	// (0x00027b96) bg_popup_mobtv_noti_window_pane

0xe08c,	// (0x0002c047) popup_mobtv_noti_window_g1

0xe094,	// (0x0002c04f) popup_mobtv_noti_window_t1

0xe0a2,	// (0x0002c05d) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0002dc32) popup_mobtv_noti_window_t

0xc7c9,	// (0x0002a784) bg_popup_mobtv_noti_window_pane_g1

0x0ffb,	// (0x0001efb6) sc_clock_pane

0x0ffb,	// (0x0001efb6) main_fs_bigclock_pane

0x78b9,	// (0x00025874) blid2_tripm_pane_t4_ParamLimits

0x78b9,	// (0x00025874) blid2_tripm_pane_t4

0x8272,	// (0x0002622d) sc_clock_pane_g1_ParamLimits

0x8272,	// (0x0002622d) sc_clock_pane_g1

0x8280,	// (0x0002623b) sc_clock_pane_t1_ParamLimits

0x8280,	// (0x0002623b) sc_clock_pane_t1

0x8293,	// (0x0002624e) sc_clock_pane_t2_ParamLimits

0x8293,	// (0x0002624e) sc_clock_pane_t2

0x82a5,	// (0x00026260) sc_clock_pane_t3_ParamLimits

0x82a5,	// (0x00026260) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0002dc37) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0002dc37) sc_clock_pane_t

0x9192,	// (0x0002714d) main_fs_bigclock_indicator_pane_ParamLimits

0x9192,	// (0x0002714d) main_fs_bigclock_indicator_pane

0x8328,	// (0x000262e3) main_fs_bigclock_pane_g1_ParamLimits

0x8328,	// (0x000262e3) main_fs_bigclock_pane_g1

0x919e,	// (0x00027159) main_fs_bigclock_pane_t1_ParamLimits

0x919e,	// (0x00027159) main_fs_bigclock_pane_t1

0x91b0,	// (0x0002716b) main_fs_bigclock_pane_t2_ParamLimits

0x91b0,	// (0x0002716b) main_fs_bigclock_pane_t2

0x91c4,	// (0x0002717f) main_fs_bigclock_pane_t3_ParamLimits

0x91c4,	// (0x0002717f) main_fs_bigclock_pane_t3

0x0002,

0xfe81,	// (0x0002de3c) main_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0002de3c) main_fs_bigclock_pane_t

0xecad,	// (0x0002cc68) main_fs_bigclock_indicator_pane_g1

0xddc1,	// (0x0002bd7c) ncim_query_content_pane_g2_ParamLimits

0xddc1,	// (0x0002bd7c) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0002dbc4) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0002dbc4) ncim_query_content_pane_g

0x82b9,	// (0x00026274) sc_clock_pane_t4_ParamLimits

0x82b9,	// (0x00026274) sc_clock_pane_t4

0x1451,	// (0x0001f40c) main_radioblah_pane

0x1e86,	// (0x0001fe41) cell_call4_button_pane_t1_copy1_ParamLimits

0x1e86,	// (0x0001fe41) cell_call4_button_pane_t1_copy1

0x7efc,	// (0x00025eb7) main_ncimui_pane_t1_ParamLimits

0x7efc,	// (0x00025eb7) main_ncimui_pane_t1

0x7f16,	// (0x00025ed1) main_ncimui_pane_t2_ParamLimits

0x7f16,	// (0x00025ed1) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0002dbbd) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0002dbbd) main_ncimui_pane_t

0xe1e8,	// (0x0002c1a3) main_radioblah_anim_pane_ParamLimits

0xe1e8,	// (0x0002c1a3) main_radioblah_anim_pane

0xe1f9,	// (0x0002c1b4) main_radioblah_info_pane_ParamLimits

0xe1f9,	// (0x0002c1b4) main_radioblah_info_pane

0xe20d,	// (0x0002c1c8) main_radioblah_pane_t1_ParamLimits

0xe20d,	// (0x0002c1c8) main_radioblah_pane_t1

0xe229,	// (0x0002c1e4) main_radioblah_pane_t2_ParamLimits

0xe229,	// (0x0002c1e4) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0002dc58) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0002dc58) main_radioblah_pane_t

0x837e,	// (0x00026339) main_radioblah_rocker_ctrl_pane_ParamLimits

0x837e,	// (0x00026339) main_radioblah_rocker_ctrl_pane

0xe271,	// (0x0002c22c) main_radioblah_info_pane_t1_ParamLimits

0xe271,	// (0x0002c22c) main_radioblah_info_pane_t1

0x83c3,	// (0x0002637e) main_radioblah_info_pane_t2_ParamLimits

0x83c3,	// (0x0002637e) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0002dc61) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0002dc61) main_radioblah_info_pane_t

0xc7c9,	// (0x0002a784) main_radioblah_rocker_ctrl_pane_g1

0x8473,	// (0x0002642e) main_radioblah_rocker_ctrl_pane_g2

0x847b,	// (0x00026436) main_radioblah_rocker_ctrl_pane_g3

0x8483,	// (0x0002643e) main_radioblah_rocker_ctrl_pane_g4

0x848b,	// (0x00026446) main_radioblah_rocker_ctrl_pane_g5

0x8493,	// (0x0002644e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0002dc6a) main_radioblah_rocker_ctrl_pane_g

0x7ea2,	// (0x00025e5d) main_cset_text2_pane_t1_copy1_ParamLimits

0x1f11,	// (0x0001fecc) cam4_image_uncrop_qvga_pane

0x203c,	// (0x0001fff7) vid4_image_uncrop_qcif_pane

0x2656,	// (0x00020611) cam6_image_uncrop_qvga_pane_ParamLimits

0x2656,	// (0x00020611) cam6_image_uncrop_qvga_pane

0xda90,	// (0x0002ba4b) vid6_image_uncrop_qcif_pane_ParamLimits

0xda90,	// (0x0002ba4b) vid6_image_uncrop_qcif_pane

0x9bdb,	// (0x00027b96) bg_popup_preview_window_pane_cp03

0xdd73,	// (0x0002bd2e) list_cset_text2_pane

0xdd7b,	// (0x0002bd36) main_cset6_text2_pane_g1

0xdd83,	// (0x0002bd3e) main_cset6_text2_pane_t1

0x849b,	// (0x00026456) list_cset_text2_pane_t1_ParamLimits

0x849b,	// (0x00026456) list_cset_text2_pane_t1

0x1451,	// (0x0001f40c) main_radioblah_pane_ParamLimits

0x8218,	// (0x000261d3) main_mobtv_info_pane_t3_ParamLimits

0x8218,	// (0x000261d3) main_mobtv_info_pane_t3

0x836c,	// (0x00026327) main_radioblah_pane_g1

0x8397,	// (0x00026352) main_radioblah_info_pane_g1

0x8418,	// (0x000263d3) main_radioblah_info_pane_t3_ParamLimits

0x8418,	// (0x000263d3) main_radioblah_info_pane_t3

0x43b2,	// (0x0002236d) highlight_cell_cale_month_pane_ParamLimits

0x43b2,	// (0x0002236d) highlight_cell_cale_month_pane

0x0ffb,	// (0x0001efb6) main_phob_fisheye_pane

0xcb67,	// (0x0002ab22) scroll_pane_cp0031_ParamLimits

0xcb67,	// (0x0002ab22) scroll_pane_cp0031

0xdb9e,	// (0x0002bb59) wait_bar_pane_cp08_ParamLimits

0x7bb4,	// (0x00025b6f) cset_list_set_pane_copy1_ParamLimits

0xe2ab,	// (0x0002c266) highlight_cell_cale_month_pane_g1

0x84bc,	// (0x00026477) highlight_cell_cale_month_pane_t1

0xd80d,	// (0x0002b7c8) list_gen_pane_cp01

0xd3b4,	// (0x0002b36f) scroll_pane_01

0x84ca,	// (0x00026485) list_single_double_fisheye_pane

0x84d3,	// (0x0002648e) list_double_fisheye_pane_g1_ParamLimits

0x84d3,	// (0x0002648e) list_double_fisheye_pane_g1

0x84df,	// (0x0002649a) list_double_fisheye_pane_g2_ParamLimits

0x84df,	// (0x0002649a) list_double_fisheye_pane_g2

0x84f3,	// (0x000264ae) list_double_fisheye_pane_g3_ParamLimits

0x84f3,	// (0x000264ae) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0002dc77) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0002dc77) list_double_fisheye_pane_g

0x851c,	// (0x000264d7) list_double_fisheye_pane_t1_ParamLimits

0x851c,	// (0x000264d7) list_double_fisheye_pane_t1

0x8537,	// (0x000264f2) list_double_fisheye_pane_t2_ParamLimits

0x8537,	// (0x000264f2) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0002dc82) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0002dc82) list_double_fisheye_pane_t

0x0ffb,	// (0x0001efb6) main_call5_pane

0x82df,	// (0x0002629a) sc_swipe_pane_ParamLimits

0x82df,	// (0x0002629a) sc_swipe_pane

0x8565,	// (0x00026520) call5_image_pane_ParamLimits

0x8565,	// (0x00026520) call5_image_pane

0x8575,	// (0x00026530) call5_swipe_1_pane_ParamLimits

0x8575,	// (0x00026530) call5_swipe_1_pane

0x8581,	// (0x0002653c) call5_swipe_2_pane_ParamLimits

0x8581,	// (0x0002653c) call5_swipe_2_pane

0x859b,	// (0x00026556) popup_call5_audio_first_window_ParamLimits

0x859b,	// (0x00026556) popup_call5_audio_first_window

0xca17,	// (0x0002a9d2) call5_swipe_1_pane_g1_ParamLimits

0xca17,	// (0x0002a9d2) call5_swipe_1_pane_g1

0xe2b3,	// (0x0002c26e) call5_swipe_1_pane_g2_ParamLimits

0xe2b3,	// (0x0002c26e) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0002dc87) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0002dc87) call5_swipe_1_pane_g

0xe2bf,	// (0x0002c27a) call5_swipe_1_pane_t1_ParamLimits

0xe2bf,	// (0x0002c27a) call5_swipe_1_pane_t1

0xca17,	// (0x0002a9d2) call5_swipe_2_pane_g1_ParamLimits

0xca17,	// (0x0002a9d2) call5_swipe_2_pane_g1

0xe2d4,	// (0x0002c28f) call5_swipe_2_pane_g2_ParamLimits

0xe2d4,	// (0x0002c28f) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0002dc8c) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0002dc8c) call5_swipe_2_pane_g

0xe2e0,	// (0x0002c29b) call5_swipe_2_pane_t1_ParamLimits

0xe2e0,	// (0x0002c29b) call5_swipe_2_pane_t1

0xe2f5,	// (0x0002c2b0) sc_swipe_pane_g1_ParamLimits

0xe2f5,	// (0x0002c2b0) sc_swipe_pane_g1

0xe302,	// (0x0002c2bd) sc_swipe_pane_g2_ParamLimits

0xe302,	// (0x0002c2bd) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0002dc91) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0002dc91) sc_swipe_pane_g

0xe30e,	// (0x0002c2c9) sc_swipe_pane_t1_ParamLimits

0xe30e,	// (0x0002c2c9) sc_swipe_pane_t1

0x0ffb,	// (0x0001efb6) main_cmail_launcher_pane

0x85a9,	// (0x00026564) aid_size_cell_cmail_l_ParamLimits

0x85a9,	// (0x00026564) aid_size_cell_cmail_l

0x85b7,	// (0x00026572) grid_cmail_l_pane_ParamLimits

0x85b7,	// (0x00026572) grid_cmail_l_pane

0x85c7,	// (0x00026582) cell_cmail_l_pane_ParamLimits

0x85c7,	// (0x00026582) cell_cmail_l_pane

0xe323,	// (0x0002c2de) cell_cmail_l_pane_g1_ParamLimits

0xe323,	// (0x0002c2de) cell_cmail_l_pane_g1

0xe32f,	// (0x0002c2ea) cell_cmail_l_pane_t1_ParamLimits

0xe32f,	// (0x0002c2ea) cell_cmail_l_pane_t1

0xe345,	// (0x0002c300) cell_cmail_l_pane_t2_ParamLimits

0xe345,	// (0x0002c300) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0002dc96) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0002dc96) cell_cmail_l_pane_t

0xa407,	// (0x000283c2) grid_highlight_pane_cp018_ParamLimits

0xa407,	// (0x000283c2) grid_highlight_pane_cp018

0x0e5d,	// (0x0001ee18) main2_pane_ParamLimits

0x0e5d,	// (0x0001ee18) main2_pane

0xa3cf,	// (0x0002838a) popup_sp_fs_action_menu_bg_pane_g1

0xa3d7,	// (0x00028392) popup_sp_fs_action_menu_bg_pane_g2

0xa3df,	// (0x0002839a) popup_sp_fs_action_menu_bg_pane_g3

0xa3e7,	// (0x000283a2) popup_sp_fs_action_menu_bg_pane_g4

0xa3ef,	// (0x000283aa) popup_sp_fs_action_menu_bg_pane_g5

0xa3f7,	// (0x000283b2) popup_sp_fs_action_menu_bg_pane_g6

0xa3ff,	// (0x000283ba) popup_sp_fs_action_menu_bg_pane_g7

0xa415,	// (0x000283d0) popup_sp_fs_action_menu_bg_pane_g8

0xa41d,	// (0x000283d8) popup_sp_fs_action_menu_bg_pane_g9

0xa425,	// (0x000283e0) popup_sp_fs_action_menu_bg_pane_g10

0xa425,	// (0x000283e0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0002d145) popup_sp_fs_action_menu_bg_pane_g

0x3199,	// (0x00021154) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3199,	// (0x00021154) list_medium_line_x2_t3_g3_g1

0x31a5,	// (0x00021160) list_medium_line_x2_t3_g3_g2_ParamLimits

0x31a5,	// (0x00021160) list_medium_line_x2_t3_g3_g2

0x31b1,	// (0x0002116c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x31b1,	// (0x0002116c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0002d1f3) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0002d1f3) list_medium_line_x2_t3_g3_g

0x31bd,	// (0x00021178) list_medium_line_x2_t3_g3_t1_ParamLimits

0x31bd,	// (0x00021178) list_medium_line_x2_t3_g3_t1

0x31d2,	// (0x0002118d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x31d2,	// (0x0002118d) list_medium_line_x2_t3_g3_t2

0x31e4,	// (0x0002119f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x31e4,	// (0x0002119f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0002d1fa) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0002d1fa) list_medium_line_x2_t3_g3_t

0x3199,	// (0x00021154) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3199,	// (0x00021154) list_medium_line_x2_t3_g2_g1

0x31b1,	// (0x0002116c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x31b1,	// (0x0002116c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0002d201) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0002d201) list_medium_line_x2_t3_g2_g

0x31f9,	// (0x000211b4) list_medium_line_x2_t3_g2_t1_ParamLimits

0x31f9,	// (0x000211b4) list_medium_line_x2_t3_g2_t1

0x320f,	// (0x000211ca) list_medium_line_x2_t3_g2_t2_ParamLimits

0x320f,	// (0x000211ca) list_medium_line_x2_t3_g2_t2

0x3221,	// (0x000211dc) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3221,	// (0x000211dc) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0002d206) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0002d206) list_medium_line_x2_t3_g2_t

0x3199,	// (0x00021154) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3199,	// (0x00021154) list_medium_line_x2_t4_g4_g1

0x323f,	// (0x000211fa) list_medium_line_x2_t4_g4_g2_ParamLimits

0x323f,	// (0x000211fa) list_medium_line_x2_t4_g4_g2

0x31a5,	// (0x00021160) list_medium_line_x2_t4_g4_g3_ParamLimits

0x31a5,	// (0x00021160) list_medium_line_x2_t4_g4_g3

0x324b,	// (0x00021206) list_medium_line_x2_t4_g4_g4_ParamLimits

0x324b,	// (0x00021206) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0002d20d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0002d20d) list_medium_line_x2_t4_g4_g

0x3257,	// (0x00021212) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3257,	// (0x00021212) list_medium_line_x2_t4_g4_t1

0x3271,	// (0x0002122c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3271,	// (0x0002122c) list_medium_line_x2_t4_g4_t2

0x3287,	// (0x00021242) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3287,	// (0x00021242) list_medium_line_x2_t4_g4_t3

0x329c,	// (0x00021257) list_medium_line_x2_t4_g4_t4_ParamLimits

0x329c,	// (0x00021257) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0002d216) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0002d216) list_medium_line_x2_t4_g4_t

0x3199,	// (0x00021154) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3199,	// (0x00021154) list_medium_line_x2_t2_g4_g1

0x323f,	// (0x000211fa) list_medium_line_x2_t2_g4_g2_ParamLimits

0x323f,	// (0x000211fa) list_medium_line_x2_t2_g4_g2

0x31a5,	// (0x00021160) list_medium_line_x2_t2_g4_g3_ParamLimits

0x31a5,	// (0x00021160) list_medium_line_x2_t2_g4_g3

0x31b1,	// (0x0002116c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x31b1,	// (0x0002116c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0002d27d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0002d27d) list_medium_line_x2_t2_g4_g

0x43d8,	// (0x00022393) list_medium_line_x2_t2_g4_t1_ParamLimits

0x43d8,	// (0x00022393) list_medium_line_x2_t2_g4_t1

0x31e4,	// (0x0002119f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x31e4,	// (0x0002119f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0002d286) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0002d286) list_medium_line_x2_t2_g4_t

0x3199,	// (0x00021154) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3199,	// (0x00021154) list_medium_line_x2_t2_g3_g1

0x31a5,	// (0x00021160) list_medium_line_x2_t2_g3_g2_ParamLimits

0x31a5,	// (0x00021160) list_medium_line_x2_t2_g3_g2

0x31b1,	// (0x0002116c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x31b1,	// (0x0002116c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0002d1f3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0002d1f3) list_medium_line_x2_t2_g3_g

0x43ed,	// (0x000223a8) list_medium_line_x2_t2_g3_t1_ParamLimits

0x43ed,	// (0x000223a8) list_medium_line_x2_t2_g3_t1

0x31e4,	// (0x0002119f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x31e4,	// (0x0002119f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0002d28b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0002d28b) list_medium_line_x2_t2_g3_t

0x457b,	// (0x00022536) main_sp_fs_list_pane_ParamLimits

0x457b,	// (0x00022536) main_sp_fs_list_pane

0x4587,	// (0x00022542) sp_fs_scroll_pane_ParamLimits

0x4587,	// (0x00022542) sp_fs_scroll_pane

0x4593,	// (0x0002254e) list_medium_line_x2_t3_t1

0x45a3,	// (0x0002255e) list_medium_line_x2_t3_t2

0x45b1,	// (0x0002256c) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0002d2d6) list_medium_line_x2_t3_t

0x45bf,	// (0x0002257a) list_medium_line_x3_t4_t1

0x45cf,	// (0x0002258a) list_medium_line_x3_t4_t2

0x45dd,	// (0x00022598) list_medium_line_x3_t4_t3

0x45b1,	// (0x0002256c) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0002d2dd) list_medium_line_x3_t4_t

0x45eb,	// (0x000225a6) list_medium_line_x4_t5_t1

0x45fb,	// (0x000225b6) list_medium_line_x4_t5_t2

0x45dd,	// (0x00022598) list_medium_line_x4_t5_t3

0x4609,	// (0x000225c4) list_medium_line_x4_t5_t4

0x45b1,	// (0x0002256c) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0002d2e6) list_medium_line_x4_t5_t

0x3199,	// (0x00021154) list_medium_line_t4_g4_g1_ParamLimits

0x3199,	// (0x00021154) list_medium_line_t4_g4_g1

0x324b,	// (0x00021206) list_medium_line_t4_g4_g2_ParamLimits

0x324b,	// (0x00021206) list_medium_line_t4_g4_g2

0x4617,	// (0x000225d2) list_medium_line_t4_g4_g3_ParamLimits

0x4617,	// (0x000225d2) list_medium_line_t4_g4_g3

0x31b1,	// (0x0002116c) list_medium_line_t4_g4_g4_ParamLimits

0x31b1,	// (0x0002116c) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0002d2f1) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0002d2f1) list_medium_line_t4_g4_g

0x4623,	// (0x000225de) list_medium_line_t4_g4_t1_ParamLimits

0x4623,	// (0x000225de) list_medium_line_t4_g4_t1

0x4638,	// (0x000225f3) list_medium_line_t4_g4_t2_ParamLimits

0x4638,	// (0x000225f3) list_medium_line_t4_g4_t2

0x464e,	// (0x00022609) list_medium_line_t4_g4_t3_ParamLimits

0x464e,	// (0x00022609) list_medium_line_t4_g4_t3

0x31e4,	// (0x0002119f) list_medium_line_t4_g4_t4_ParamLimits

0x31e4,	// (0x0002119f) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0002d2fa) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0002d2fa) list_medium_line_t4_g4_t

0x4700,	// (0x000226bb) chi_dic_find_pane_g1

0x146d,	// (0x0001f428) main_tport_pane

0xd4be,	// (0x0002b479) list_medium_line_plain_t1

0x7145,	// (0x00025100) list_medium_line_t2_g2_g1_ParamLimits

0x7145,	// (0x00025100) list_medium_line_t2_g2_g1

0x7151,	// (0x0002510c) list_medium_line_t2_g2_g2_ParamLimits

0x7151,	// (0x0002510c) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0002d9ce) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0002d9ce) list_medium_line_t2_g2_g

0x715d,	// (0x00025118) list_medium_line_t2_g2_t1_ParamLimits

0x715d,	// (0x00025118) list_medium_line_t2_g2_t1

0x7177,	// (0x00025132) list_medium_line_t2_g2_t2_ParamLimits

0x7177,	// (0x00025132) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0002d9d3) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0002d9d3) list_medium_line_t2_g2_t

0xd816,	// (0x0002b7d1) aid_sp_fs_list_icon_a_sm

0xd81e,	// (0x0002b7d9) aid_sp_fs_list_icon_d

0xd826,	// (0x0002b7e1) aid_sp_fs_text_primary

0xd841,	// (0x0002b7fc) aid_sp_fs_text_secondary

0x76fb,	// (0x000256b6) list_medium_line

0x76fb,	// (0x000256b6) list_medium_line_g2

0x76fb,	// (0x000256b6) list_medium_line_g3

0x76fb,	// (0x000256b6) list_medium_line_plain

0x76fb,	// (0x000256b6) list_medium_line_plain_t2

0x76fb,	// (0x000256b6) list_medium_line_plain_t3

0x76fb,	// (0x000256b6) list_medium_line_right_icon

0x76fb,	// (0x000256b6) list_medium_line_right_iconx2

0x76fb,	// (0x000256b6) list_medium_line_t2

0x76fb,	// (0x000256b6) list_medium_line_t2_g2

0x76fb,	// (0x000256b6) list_medium_line_t2_g3

0x76fb,	// (0x000256b6) list_medium_line_t2_right_icon

0x76fb,	// (0x000256b6) list_medium_line_t2_right_iconx2

0x76fb,	// (0x000256b6) list_medium_line_t3

0x76fb,	// (0x000256b6) list_medium_line_t3_g2

0x76fb,	// (0x000256b6) list_medium_line_t3_g3

0x76fb,	// (0x000256b6) list_medium_line_t3_right_iconx2

0x7704,	// (0x000256bf) list_medium_line_t4_g4

0x770d,	// (0x000256c8) list_medium_line_x2

0x770d,	// (0x000256c8) list_medium_line_x2_t2_g2

0x770d,	// (0x000256c8) list_medium_line_x2_t2_g3

0x770d,	// (0x000256c8) list_medium_line_x2_t2_g4

0x770d,	// (0x000256c8) list_medium_line_x2_t3

0x770d,	// (0x000256c8) list_medium_line_x2_t3_g2

0x770d,	// (0x000256c8) list_medium_line_x2_t3_g3

0x770d,	// (0x000256c8) list_medium_line_x2_t3_g4

0x770d,	// (0x000256c8) list_medium_line_x2_t4_g2

0x770d,	// (0x000256c8) list_medium_line_x2_t4_g4

0x7716,	// (0x000256d1) list_medium_line_x3

0x7716,	// (0x000256d1) list_medium_line_x3_t4

0x7716,	// (0x000256d1) list_medium_line_x3_t4_g4

0x7704,	// (0x000256bf) list_medium_line_x4_t4

0x7704,	// (0x000256bf) list_medium_line_x4_t4_g7

0x7704,	// (0x000256bf) list_medium_line_x4_t5

0x771f,	// (0x000256da) list_single_fs_dyc_pane_ParamLimits

0x771f,	// (0x000256da) list_single_fs_dyc_pane

0x3199,	// (0x00021154) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3199,	// (0x00021154) list_medium_line_x4_t4_g7_g1

0x7dcc,	// (0x00025d87) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7dcc,	// (0x00025d87) list_medium_line_x4_t4_g7_g2

0x7dd8,	// (0x00025d93) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7dd8,	// (0x00025d93) list_medium_line_x4_t4_g7_g3

0x7de7,	// (0x00025da2) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7de7,	// (0x00025da2) list_medium_line_x4_t4_g7_g4

0x7df3,	// (0x00025dae) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7df3,	// (0x00025dae) list_medium_line_x4_t4_g7_g5

0x7e02,	// (0x00025dbd) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e02,	// (0x00025dbd) list_medium_line_x4_t4_g7_g6

0x7e11,	// (0x00025dcc) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e11,	// (0x00025dcc) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0002db9e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0002db9e) list_medium_line_x4_t4_g7_g

0x7e1d,	// (0x00025dd8) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e1d,	// (0x00025dd8) list_medium_line_x4_t4_g7_t1

0x7e32,	// (0x00025ded) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e32,	// (0x00025ded) list_medium_line_x4_t4_g7_t2

0x7e47,	// (0x00025e02) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e47,	// (0x00025e02) list_medium_line_x4_t4_g7_t3

0x7e5c,	// (0x00025e17) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7e5c,	// (0x00025e17) list_medium_line_x4_t4_g7_t4

0x7e6e,	// (0x00025e29) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7e6e,	// (0x00025e29) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0002dbad) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0002dbad) list_medium_line_x4_t4_g7_t

0x7e80,	// (0x00025e3b) list_single_dyc_row_pane_ParamLimits

0x7e80,	// (0x00025e3b) list_single_dyc_row_pane

0x8559,	// (0x00026514) call5_gesture_pane_ParamLimits

0x8559,	// (0x00026514) call5_gesture_pane

0x858d,	// (0x00026548) call5_windows_pane_ParamLimits

0x858d,	// (0x00026548) call5_windows_pane

0x85e0,	// (0x0002659b) call5_swipe_1_pane_cp_ParamLimits

0x85e0,	// (0x0002659b) call5_swipe_1_pane_cp

0x85ec,	// (0x000265a7) call5_swipe_2_pane_cp_ParamLimits

0x85ec,	// (0x000265a7) call5_swipe_2_pane_cp

0xa517,	// (0x000284d2) call5_image_pane_cp

0x85f8,	// (0x000265b3) popup_call5_audio_first_window_cp_ParamLimits

0x85f8,	// (0x000265b3) popup_call5_audio_first_window_cp

0xe2f5,	// (0x0002c2b0) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2f5,	// (0x0002c2b0) call5_swipe_1_pane_g1_cp

0xe362,	// (0x0002c31d) call5_swipe_1_pane_g2_cp

0xe30e,	// (0x0002c2c9) call5_swipe_1_pane_t1_cp_ParamLimits

0xe30e,	// (0x0002c2c9) call5_swipe_1_pane_t1_cp

0xe2f5,	// (0x0002c2b0) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2f5,	// (0x0002c2b0) call5_swipe_2_pane_g1_cp

0xe36a,	// (0x0002c325) call5_swipe_2_pane_g2_cp

0xe372,	// (0x0002c32d) call5_swipe_2_pane_t1_cp_ParamLimits

0xe372,	// (0x0002c32d) call5_swipe_2_pane_t1_cp

0xa407,	// (0x000283c2) main_sp_fs_email_pane

0xe387,	// (0x0002c342) main_sp_fs_listscroll_pane_te

0x8606,	// (0x000265c1) popup_sp_fs_action_menu_pane_ParamLimits

0x8606,	// (0x000265c1) popup_sp_fs_action_menu_pane

0xc7c9,	// (0x0002a784) bg_sp_fs_ctrlbar_pane_g1

0xe390,	// (0x0002c34b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe399,	// (0x0002c354) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3a2,	// (0x0002c35d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc7c9,	// (0x0002a784) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0002dc9b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc5ae,	// (0x0002a569) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc5ae,	// (0x0002a569) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3ab,	// (0x0002c366) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3ab,	// (0x0002c366) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3b7,	// (0x0002c372) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3b7,	// (0x0002c372) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0002dca4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0002dca4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3c3,	// (0x0002c37e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3c3,	// (0x0002c37e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x864a,	// (0x00026605) list_medium_line_t2_right_icon_g1

0x8652,	// (0x0002660d) list_medium_line_t2_right_icon_t1

0x8662,	// (0x0002661d) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0002dca9) list_medium_line_t2_right_icon_t

0xc3c1,	// (0x0002a37c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc3c1,	// (0x0002a37c) bg_sp_fs_ctrlbar_pane

0x86b3,	// (0x0002666e) main_sp_fs_ctrlbar_button_pane_cp01

0x86bb,	// (0x00026676) main_sp_fs_ctrlbar_ddmenu_pane

0xe415,	// (0x0002c3d0) main_sp_fs_ctrlbar_pane_g1

0xe421,	// (0x0002c3dc) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0002dcae) main_sp_fs_ctrlbar_pane_g

0xe42d,	// (0x0002c3e8) main_sp_fs_ctrlbar_pane_t1

0x86c5,	// (0x00026680) main_sp_fs_ctrlbar_pane

0x86db,	// (0x00026696) main_sp_fs_listscroll_pane_te_cp01

0x86ec,	// (0x000266a7) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x86ec,	// (0x000266a7) popup_sp_fs_action_menu_pane_cp01

0xa407,	// (0x000283c2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa407,	// (0x000283c2) bg_sp_fs_highlight_list_pane_cp01

0xe45d,	// (0x0002c418) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe45d,	// (0x0002c418) sp_fs_action_menu_list_gene_pane_g1

0xe46c,	// (0x0002c427) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe46c,	// (0x0002c427) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0002dcb8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0002dcb8) sp_fs_action_menu_list_gene_pane_g

0xe479,	// (0x0002c434) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe479,	// (0x0002c434) sp_fs_action_menu_list_gene_pane_t1

0xe491,	// (0x0002c44c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe491,	// (0x0002c44c) sp_fs_action_menu_list_gene_pane

0xe4b0,	// (0x0002c46b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4b0,	// (0x0002c46b) popup_sp_fs_action_menu_bg_pane

0xe4be,	// (0x0002c479) sp_fs_action_menu_list_pane_ParamLimits

0xe4be,	// (0x0002c479) sp_fs_action_menu_list_pane

0x8716,	// (0x000266d1) sp_fs_scroll_pane_cp01_ParamLimits

0x8716,	// (0x000266d1) sp_fs_scroll_pane_cp01

0x873c,	// (0x000266f7) list_medium_line_plain_t2_t1

0x874c,	// (0x00026707) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0002dcbd) list_medium_line_plain_t2_t

0x875a,	// (0x00026715) list_medium_line_plain_t3_t1

0x876a,	// (0x00026725) list_medium_line_plain_t3_t2

0x8778,	// (0x00026733) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0002dcc2) list_medium_line_plain_t3_t

0x3199,	// (0x00021154) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3199,	// (0x00021154) list_medium_line_x2_t2_g2_g1

0x31b1,	// (0x0002116c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x31b1,	// (0x0002116c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0002d201) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0002d201) list_medium_line_x2_t2_g2_g

0x4623,	// (0x000225de) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4623,	// (0x000225de) list_medium_line_x2_t2_g2_t1

0x31e4,	// (0x0002119f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x31e4,	// (0x0002119f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0002dcc9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0002dcc9) list_medium_line_x2_t2_g2_t

0x3199,	// (0x00021154) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3199,	// (0x00021154) list_medium_line_x2_t4_g2_g1

0x31b1,	// (0x0002116c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x31b1,	// (0x0002116c) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0002d201) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0002d201) list_medium_line_x2_t4_g2_g

0x8786,	// (0x00026741) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8786,	// (0x00026741) list_medium_line_x2_t4_g2_t1

0x87a0,	// (0x0002675b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87a0,	// (0x0002675b) list_medium_line_x2_t4_g2_t2

0x87b6,	// (0x00026771) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87b6,	// (0x00026771) list_medium_line_x2_t4_g2_t3

0x31e4,	// (0x0002119f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x31e4,	// (0x0002119f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0002dcce) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0002dcce) list_medium_line_x2_t4_g2_t

0x87cb,	// (0x00026786) list_medium_line_t3_right_iconx2_g1

0x864a,	// (0x00026605) list_medium_line_t3_right_iconx2_g2

0x87d3,	// (0x0002678e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x0002dcd7) list_medium_line_t3_right_iconx2_g

0x87db,	// (0x00026796) list_medium_line_t3_right_iconx2_t1

0x87eb,	// (0x000267a6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0002dcde) list_medium_line_t3_right_iconx2_t

0x3199,	// (0x00021154) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3199,	// (0x00021154) list_medium_line_x3_t4_g4_g1

0x31a5,	// (0x00021160) list_medium_line_x3_t4_g4_g2_ParamLimits

0x31a5,	// (0x00021160) list_medium_line_x3_t4_g4_g2

0x324b,	// (0x00021206) list_medium_line_x3_t4_g4_g3_ParamLimits

0x324b,	// (0x00021206) list_medium_line_x3_t4_g4_g3

0x87f9,	// (0x000267b4) list_medium_line_x3_t4_g4_g4_ParamLimits

0x87f9,	// (0x000267b4) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x0002dce3) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x0002dce3) list_medium_line_x3_t4_g4_g

0x8805,	// (0x000267c0) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8805,	// (0x000267c0) list_medium_line_x3_t4_g4_t1

0x881c,	// (0x000267d7) list_medium_line_x3_t4_g4_t2_ParamLimits

0x881c,	// (0x000267d7) list_medium_line_x3_t4_g4_t2

0x8831,	// (0x000267ec) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8831,	// (0x000267ec) list_medium_line_x3_t4_g4_t3

0x8846,	// (0x00026801) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8846,	// (0x00026801) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0002dcec) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0002dcec) list_medium_line_x3_t4_g4_t

0x8863,	// (0x0002681e) list_single_dyc_row_text_pane_t1_ParamLimits

0x8863,	// (0x0002681e) list_single_dyc_row_text_pane_t1

0x889a,	// (0x00026855) list_single_dyc_row_text_pane_t2_ParamLimits

0x889a,	// (0x00026855) list_single_dyc_row_text_pane_t2

0xe4de,	// (0x0002c499) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4de,	// (0x0002c499) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3a,	// (0x0002dcf5) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x0002dcf5) list_single_dyc_row_text_pane_t

0xe502,	// (0x0002c4bd) list_single_dyc_row_pane_g1_ParamLimits

0xe502,	// (0x0002c4bd) list_single_dyc_row_pane_g1

0xe50e,	// (0x0002c4c9) list_single_dyc_row_pane_g2_ParamLimits

0xe50e,	// (0x0002c4c9) list_single_dyc_row_pane_g2

0xe51a,	// (0x0002c4d5) list_single_dyc_row_pane_g3_ParamLimits

0xe51a,	// (0x0002c4d5) list_single_dyc_row_pane_g3

0xe526,	// (0x0002c4e1) list_single_dyc_row_pane_g4_ParamLimits

0xe526,	// (0x0002c4e1) list_single_dyc_row_pane_g4

0x0003,

0xfd47,	// (0x0002dd02) list_single_dyc_row_pane_g_ParamLimits

0xfd47,	// (0x0002dd02) list_single_dyc_row_pane_g

0xe532,	// (0x0002c4ed) list_single_dyc_row_text_pane_ParamLimits

0xe532,	// (0x0002c4ed) list_single_dyc_row_text_pane

0x9bdb,	// (0x00027b96) bg_sp_fs_scroll_pane

0xe551,	// (0x0002c50c) thumb_sp_fs_scroll_pane

0x7145,	// (0x00025100) list_medium_line_g1_ParamLimits

0x7145,	// (0x00025100) list_medium_line_g1

0xe55a,	// (0x0002c515) list_medium_line_t1_ParamLimits

0xe55a,	// (0x0002c515) list_medium_line_t1

0x3199,	// (0x00021154) list_medium_line_x2_g1_ParamLimits

0x3199,	// (0x00021154) list_medium_line_x2_g1

0x31a5,	// (0x00021160) list_medium_line_x2_g2_ParamLimits

0x31a5,	// (0x00021160) list_medium_line_x2_g2

0x0001,

0xfd50,	// (0x0002dd0b) list_medium_line_x2_g_ParamLimits

0xfd50,	// (0x0002dd0b) list_medium_line_x2_g

0xe56f,	// (0x0002c52a) list_medium_line_x2_t1_ParamLimits

0xe56f,	// (0x0002c52a) list_medium_line_x2_t1

0x3199,	// (0x00021154) list_medium_line_x3_g1_ParamLimits

0x3199,	// (0x00021154) list_medium_line_x3_g1

0x31a5,	// (0x00021160) list_medium_line_x3_g2_ParamLimits

0x31a5,	// (0x00021160) list_medium_line_x3_g2

0x0001,

0xfd50,	// (0x0002dd0b) list_medium_line_x3_g_ParamLimits

0xfd50,	// (0x0002dd0b) list_medium_line_x3_g

0xe56f,	// (0x0002c52a) list_medium_line_x3_t1_ParamLimits

0xe56f,	// (0x0002c52a) list_medium_line_x3_t1

0xe585,	// (0x0002c540) thumb_sp_fs_scroll_pane_g1

0xe58e,	// (0x0002c549) thumb_sp_fs_scroll_pane_g2

0xe597,	// (0x0002c552) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0002dd10) thumb_sp_fs_scroll_pane_g

0xe585,	// (0x0002c540) bg_sp_fs_scroll_pane_g1

0xe58e,	// (0x0002c549) bg_sp_fs_scroll_pane_g2

0xe597,	// (0x0002c552) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0002dd10) bg_sp_fs_scroll_pane_g

0x3199,	// (0x00021154) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3199,	// (0x00021154) list_medium_line_x2_t3_g4_g1

0x323f,	// (0x000211fa) list_medium_line_x2_t3_g4_g2_ParamLimits

0x323f,	// (0x000211fa) list_medium_line_x2_t3_g4_g2

0x31a5,	// (0x00021160) list_medium_line_x2_t3_g4_g3_ParamLimits

0x31a5,	// (0x00021160) list_medium_line_x2_t3_g4_g3

0x31b1,	// (0x0002116c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x31b1,	// (0x0002116c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0002d27d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0002d27d) list_medium_line_x2_t3_g4_g

0x89bd,	// (0x00026978) list_medium_line_x2_t3_g4_t1_ParamLimits

0x89bd,	// (0x00026978) list_medium_line_x2_t3_g4_t1

0x89d3,	// (0x0002698e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x89d3,	// (0x0002698e) list_medium_line_x2_t3_g4_t2

0x31e4,	// (0x0002119f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x31e4,	// (0x0002119f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5c,	// (0x0002dd17) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5c,	// (0x0002dd17) list_medium_line_x2_t3_g4_t

0x7145,	// (0x00025100) list_medium_line_g2_g1_ParamLimits

0x7145,	// (0x00025100) list_medium_line_g2_g1

0x7151,	// (0x0002510c) list_medium_line_g2_g2_ParamLimits

0x7151,	// (0x0002510c) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0002d9ce) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0002d9ce) list_medium_line_g2_g

0xe5a0,	// (0x0002c55b) list_medium_line_g2_t1_ParamLimits

0xe5a0,	// (0x0002c55b) list_medium_line_g2_t1

0x7145,	// (0x00025100) list_medium_line_t3_g2_g1_ParamLimits

0x7145,	// (0x00025100) list_medium_line_t3_g2_g1

0x7151,	// (0x0002510c) list_medium_line_t3_g2_g2_ParamLimits

0x7151,	// (0x0002510c) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0002d9ce) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0002d9ce) list_medium_line_t3_g2_g

0x89ed,	// (0x000269a8) list_medium_line_t3_g2_t1_ParamLimits

0x89ed,	// (0x000269a8) list_medium_line_t3_g2_t1

0x8a07,	// (0x000269c2) list_medium_line_t3_g2_t2_ParamLimits

0x8a07,	// (0x000269c2) list_medium_line_t3_g2_t2

0x8a1d,	// (0x000269d8) list_medium_line_t3_g2_t3_ParamLimits

0x8a1d,	// (0x000269d8) list_medium_line_t3_g2_t3

0x0002,

0xfd63,	// (0x0002dd1e) list_medium_line_t3_g2_t_ParamLimits

0xfd63,	// (0x0002dd1e) list_medium_line_t3_g2_t

0x864a,	// (0x00026605) list_medium_line_right_icon_g1

0xe5b5,	// (0x0002c570) list_medium_line_right_icon_t1

0x7145,	// (0x00025100) list_medium_line_t2_g1_ParamLimits

0x7145,	// (0x00025100) list_medium_line_t2_g1

0x8a33,	// (0x000269ee) list_medium_line_t2_t1_ParamLimits

0x8a33,	// (0x000269ee) list_medium_line_t2_t1

0x8a4d,	// (0x00026a08) list_medium_line_t2_t2_ParamLimits

0x8a4d,	// (0x00026a08) list_medium_line_t2_t2

0x0001,

0xfd6a,	// (0x0002dd25) list_medium_line_t2_t_ParamLimits

0xfd6a,	// (0x0002dd25) list_medium_line_t2_t

0x7145,	// (0x00025100) list_medium_line_t3_g1_ParamLimits

0x7145,	// (0x00025100) list_medium_line_t3_g1

0x8a62,	// (0x00026a1d) list_medium_line_t3_t1_ParamLimits

0x8a62,	// (0x00026a1d) list_medium_line_t3_t1

0x8a7c,	// (0x00026a37) list_medium_line_t3_t2_ParamLimits

0x8a7c,	// (0x00026a37) list_medium_line_t3_t2

0x8a92,	// (0x00026a4d) list_medium_line_t3_t3_ParamLimits

0x8a92,	// (0x00026a4d) list_medium_line_t3_t3

0x0002,

0xfd6f,	// (0x0002dd2a) list_medium_line_t3_t_ParamLimits

0xfd6f,	// (0x0002dd2a) list_medium_line_t3_t

0x7145,	// (0x00025100) list_medium_line_g3_g1_ParamLimits

0x7145,	// (0x00025100) list_medium_line_g3_g1

0x8aa7,	// (0x00026a62) list_medium_line_g3_g2_ParamLimits

0x8aa7,	// (0x00026a62) list_medium_line_g3_g2

0x7151,	// (0x0002510c) list_medium_line_g3_g3_ParamLimits

0x7151,	// (0x0002510c) list_medium_line_g3_g3

0x0002,

0xfd76,	// (0x0002dd31) list_medium_line_g3_g_ParamLimits

0xfd76,	// (0x0002dd31) list_medium_line_g3_g

0xe5c3,	// (0x0002c57e) list_medium_line_g3_t1_ParamLimits

0xe5c3,	// (0x0002c57e) list_medium_line_g3_t1

0x7145,	// (0x00025100) list_medium_line_t2_g3_g1_ParamLimits

0x7145,	// (0x00025100) list_medium_line_t2_g3_g1

0x8aa7,	// (0x00026a62) list_medium_line_t2_g3_g2_ParamLimits

0x8aa7,	// (0x00026a62) list_medium_line_t2_g3_g2

0x7151,	// (0x0002510c) list_medium_line_t2_g3_g3_ParamLimits

0x7151,	// (0x0002510c) list_medium_line_t2_g3_g3

0x0002,

0xfd76,	// (0x0002dd31) list_medium_line_t2_g3_g_ParamLimits

0xfd76,	// (0x0002dd31) list_medium_line_t2_g3_g

0x8ab3,	// (0x00026a6e) list_medium_line_t2_g3_t1_ParamLimits

0x8ab3,	// (0x00026a6e) list_medium_line_t2_g3_t1

0x8acd,	// (0x00026a88) list_medium_line_t2_g3_t2_ParamLimits

0x8acd,	// (0x00026a88) list_medium_line_t2_g3_t2

0x0001,

0xfd7d,	// (0x0002dd38) list_medium_line_t2_g3_t_ParamLimits

0xfd7d,	// (0x0002dd38) list_medium_line_t2_g3_t

0x7145,	// (0x00025100) list_medium_line_t3_g3_g1_ParamLimits

0x7145,	// (0x00025100) list_medium_line_t3_g3_g1

0x8aa7,	// (0x00026a62) list_medium_line_t3_g3_g2_ParamLimits

0x8aa7,	// (0x00026a62) list_medium_line_t3_g3_g2

0x7151,	// (0x0002510c) list_medium_line_t3_g3_g3_ParamLimits

0x7151,	// (0x0002510c) list_medium_line_t3_g3_g3

0x0002,

0xfd76,	// (0x0002dd31) list_medium_line_t3_g3_g_ParamLimits

0xfd76,	// (0x0002dd31) list_medium_line_t3_g3_g

0x8ae3,	// (0x00026a9e) list_medium_line_t3_g3_t1_ParamLimits

0x8ae3,	// (0x00026a9e) list_medium_line_t3_g3_t1

0x8afc,	// (0x00026ab7) list_medium_line_t3_g3_t2_ParamLimits

0x8afc,	// (0x00026ab7) list_medium_line_t3_g3_t2

0x8b12,	// (0x00026acd) list_medium_line_t3_g3_t3_ParamLimits

0x8b12,	// (0x00026acd) list_medium_line_t3_g3_t3

0x0002,

0xfd82,	// (0x0002dd3d) list_medium_line_t3_g3_t_ParamLimits

0xfd82,	// (0x0002dd3d) list_medium_line_t3_g3_t

0x87cb,	// (0x00026786) list_medium_line_right_iconx2_g1

0x864a,	// (0x00026605) list_medium_line_right_iconx2_g2

0x0001,

0xfd89,	// (0x0002dd44) list_medium_line_right_iconx2_g

0xe5d8,	// (0x0002c593) list_medium_line_right_iconx2_t1

0x87cb,	// (0x00026786) list_medium_line_t2_right_iconx2_g1

0x864a,	// (0x00026605) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd89,	// (0x0002dd44) list_medium_line_t2_right_iconx2_g

0x8b28,	// (0x00026ae3) list_medium_line_t2_right_iconx2_t1

0x8b38,	// (0x00026af3) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8e,	// (0x0002dd49) list_medium_line_t2_right_iconx2_t

0x8b46,	// (0x00026b01) list_medium_line_x4_t4_t1

0x8b54,	// (0x00026b0f) list_medium_line_x4_t4_t2

0x8b64,	// (0x00026b1f) list_medium_line_x4_t4_t3

0x8b74,	// (0x00026b2f) list_medium_line_x4_t4_t4

0x0003,

0xfd93,	// (0x0002dd4e) list_medium_line_x4_t4_t

0x8bae,	// (0x00026b69) tport_appsw_pane_ParamLimits

0x8bae,	// (0x00026b69) tport_appsw_pane

0x8bbc,	// (0x00026b77) tport_contact_pane_ParamLimits

0x8bbc,	// (0x00026b77) tport_contact_pane

0x8bcc,	// (0x00026b87) tport_listscroll_pane_ParamLimits

0x8bcc,	// (0x00026b87) tport_listscroll_pane

0x8bdc,	// (0x00026b97) cell_tport_appsw_pane_ParamLimits

0x8bdc,	// (0x00026b97) cell_tport_appsw_pane

0xcaf0,	// (0x0002aaab) tport_appsw_pane_g1_ParamLimits

0xcaf0,	// (0x0002aaab) tport_appsw_pane_g1

0xe5e6,	// (0x0002c5a1) tport_contact_pane_g1

0xe5ef,	// (0x0002c5aa) tport_contact_pane_t1

0xe5fd,	// (0x0002c5b8) tport_contact_pane_t2

0x0001,

0xfd9c,	// (0x0002dd57) tport_contact_pane_t

0xe60b,	// (0x0002c5c6) list_tport_pane

0xe614,	// (0x0002c5cf) scroll_pane_cp_030

0x8c0f,	// (0x00026bca) cell_tport_appsw_pane_g1

0x8c1f,	// (0x00026bda) cell_tport_appsw_pane_t1

0x8c2d,	// (0x00026be8) grid_highlight_pane_cp019

0x8c35,	// (0x00026bf0) list_tport_double_graphic_pane_ParamLimits

0x8c35,	// (0x00026bf0) list_tport_double_graphic_pane

0xa407,	// (0x000283c2) list_highlight_pane_cp023_ParamLimits

0xa407,	// (0x000283c2) list_highlight_pane_cp023

0x8c46,	// (0x00026c01) list_tport_double_graphic_pane_g1_ParamLimits

0x8c46,	// (0x00026c01) list_tport_double_graphic_pane_g1

0x8c53,	// (0x00026c0e) list_tport_double_graphic_pane_t1_ParamLimits

0x8c53,	// (0x00026c0e) list_tport_double_graphic_pane_t1

0x8c68,	// (0x00026c23) list_tport_double_graphic_pane_t2_ParamLimits

0x8c68,	// (0x00026c23) list_tport_double_graphic_pane_t2

0x0001,

0xfda8,	// (0x0002dd63) list_tport_double_graphic_pane_t_ParamLimits

0xfda8,	// (0x0002dd63) list_tport_double_graphic_pane_t

0x9bdb,	// (0x00027b96) main_cale_note_pane

0x2285,	// (0x00020240) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x2285,	// (0x00020240) cell_vitu2_function_top_wide_pane_cp01

0x822c,	// (0x000261e7) wait_bar_pane_cp05_ParamLimits

0xa407,	// (0x000283c2) listscroll_cmail_pane

0xe61d,	// (0x0002c5d8) list_cmail_pane

0x8c7a,	// (0x00026c35) list_cmail_body_pane

0x8ca2,	// (0x00026c5d) list_single_cmail_header_caption_pane

0x8cce,	// (0x00026c89) list_single_cmail_header_detail_pane_ParamLimits

0x8cce,	// (0x00026c89) list_single_cmail_header_detail_pane

0xe62d,	// (0x0002c5e8) list_single_cmail_header_caption_pane_t1

0x8d07,	// (0x00026cc2) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d07,	// (0x00026cc2) list_single_cmail_header_detail_pane_g1

0xe644,	// (0x0002c5ff) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe644,	// (0x0002c5ff) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdad,	// (0x0002dd68) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdad,	// (0x0002dd68) list_single_cmail_header_detail_pane_g

0xe65d,	// (0x0002c618) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe65d,	// (0x0002c618) list_single_cmail_header_detail_pane_t1

0xe6bd,	// (0x0002c678) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6bd,	// (0x0002c678) list_single_cmail_header_editor_pane_bg

0xdfa3,	// (0x0002bf5e) list_cmail_body_pane_g1

0xe6d4,	// (0x0002c68f) list_cmail_body_pane_t1

0xd28e,	// (0x0002b249) list_single_cmail_header_editor_pane_bg_g1

0xa770,	// (0x0002872b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd29e,	// (0x0002b259) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd296,	// (0x0002b251) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd4cc,	// (0x0002b487) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2be,	// (0x0002b279) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2ae,	// (0x0002b269) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2b6,	// (0x0002b271) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa750,	// (0x0002870b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d1d,	// (0x00026cd8) calenote_gesture_pane_ParamLimits

0x8d1d,	// (0x00026cd8) calenote_gesture_pane

0x8d37,	// (0x00026cf2) calenote_window_pane_ParamLimits

0x8d37,	// (0x00026cf2) calenote_window_pane

0xe6e2,	// (0x0002c69d) popup_note_window_cp01

0x8d4f,	// (0x00026d0a) calenote_swipe_1_pane_ParamLimits

0x8d4f,	// (0x00026d0a) calenote_swipe_1_pane

0x85ec,	// (0x000265a7) calenote_swipe_2_pane_ParamLimits

0x85ec,	// (0x000265a7) calenote_swipe_2_pane

0xe2f5,	// (0x0002c2b0) calenote_swipe_1_pane_g1_ParamLimits

0xe2f5,	// (0x0002c2b0) calenote_swipe_1_pane_g1

0xe302,	// (0x0002c2bd) calenote_swipe_1_pane_g2_ParamLimits

0xe302,	// (0x0002c2bd) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0002dc91) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0002dc91) calenote_swipe_1_pane_g

0xe6f4,	// (0x0002c6af) calenote_swipe_1_pane_t1_ParamLimits

0xe6f4,	// (0x0002c6af) calenote_swipe_1_pane_t1

0xe2f5,	// (0x0002c2b0) calenote_swipe_2_pane_g1_ParamLimits

0xe2f5,	// (0x0002c2b0) calenote_swipe_2_pane_g1

0xe713,	// (0x0002c6ce) calenote_swipe_2_pane_g2_ParamLimits

0xe713,	// (0x0002c6ce) calenote_swipe_2_pane_g2

0x0001,

0xfdb9,	// (0x0002dd74) calenote_swipe_2_pane_g_ParamLimits

0xfdb9,	// (0x0002dd74) calenote_swipe_2_pane_g

0xe71f,	// (0x0002c6da) calenote_swipe_2_pane_t1_ParamLimits

0xe71f,	// (0x0002c6da) calenote_swipe_2_pane_t1

0x9bdb,	// (0x00027b96) main_mup_navstr_pane

0x6187,	// (0x00024142) main_mup3_pane_t7_ParamLimits

0x6187,	// (0x00024142) main_mup3_pane_t7

0x1ac2,	// (0x0001fa7d) main_mp4_pane_g6_ParamLimits

0x1ac2,	// (0x0001fa7d) main_mp4_pane_g6

0x1db5,	// (0x0001fd70) main_image3_pane_t4_ParamLimits

0x1db5,	// (0x0001fd70) main_image3_pane_t4

0x8d62,	// (0x00026d1d) popup_navstr_preview_pane_ParamLimits

0x8d62,	// (0x00026d1d) popup_navstr_preview_pane

0x8d6e,	// (0x00026d29) scroll_navstr_pane_ParamLimits

0x8d6e,	// (0x00026d29) scroll_navstr_pane

0x9bdb,	// (0x00027b96) bg_popup_preview_window_pane_cp04

0xe746,	// (0x0002c701) popup_navstr_preview_pane_t1

0x8d7a,	// (0x00026d35) scroll_navstr_pane_g1_ParamLimits

0x8d7a,	// (0x00026d35) scroll_navstr_pane_g1

0x8d87,	// (0x00026d42) scroll_navstr_pane_t1_ParamLimits

0x8d87,	// (0x00026d42) scroll_navstr_pane_t1

0xe6eb,	// (0x0002c6a6) bg_button_pane_cp014

0xe6eb,	// (0x0002c6a6) bg_button_pane_cp030

0x84ff,	// (0x000264ba) list_double_fisheye_pane_g4_ParamLimits

0x84ff,	// (0x000264ba) list_double_fisheye_pane_g4

0x850b,	// (0x000264c6) list_double_fisheye_pane_g5_ParamLimits

0x850b,	// (0x000264c6) list_double_fisheye_pane_g5

0xd312,	// (0x0002b2cd) sp_fs_scroll_pane_cp03

0xe415,	// (0x0002c3d0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe421,	// (0x0002c3dc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0002dcae) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe42d,	// (0x0002c3e8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe625,	// (0x0002c5e0) sp_fs_scroll_pane_cp02

0xa456,	// (0x00028411) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa456,	// (0x00028411) popup_sp_fs_calendar_preview_list_single_pane

0x9bdb,	// (0x00027b96) main_cam6_pano_pane

0x1451,	// (0x0001f40c) main_mup3_pane_ParamLimits

0x9bdb,	// (0x00027b96) main_phacti_pane

0x8101,	// (0x000260bc) bg_button_pane_cp11

0x8119,	// (0x000260d4) main_mobtv_info_pane_g2_ParamLimits

0x8119,	// (0x000260d4) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0002dc0e) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0002dc0e) main_mobtv_info_pane_g

0x82cb,	// (0x00026286) sc_clock_pane_t5_ParamLimits

0x82cb,	// (0x00026286) sc_clock_pane_t5

0x836c,	// (0x00026327) main_radioblah_pane_g1_ParamLimits

0xe241,	// (0x0002c1fc) main_radioblah_pane_t3_ParamLimits

0xe241,	// (0x0002c1fc) main_radioblah_pane_t3

0xe259,	// (0x0002c214) main_radioblah_pane_t4_ParamLimits

0xe259,	// (0x0002c214) main_radioblah_pane_t4

0x838a,	// (0x00026345) main_radioblah_text_pane_ParamLimits

0x838a,	// (0x00026345) main_radioblah_text_pane

0x8397,	// (0x00026352) main_radioblah_info_pane_g1_ParamLimits

0x842c,	// (0x000263e7) main_radioblah_info_pane_t4_ParamLimits

0x842c,	// (0x000263e7) main_radioblah_info_pane_t4

0xa407,	// (0x000283c2) main_sp_fs_calendar_pane

0x8d99,	// (0x00026d54) main_phacti_pane_g1

0x8da1,	// (0x00026d5c) phacti_note_pane_ParamLimits

0x8da1,	// (0x00026d5c) phacti_note_pane

0xe75d,	// (0x0002c718) phacti_term_pane_ParamLimits

0xe75d,	// (0x0002c718) phacti_term_pane

0xe772,	// (0x0002c72d) phacti_note_pane_t1_ParamLimits

0xe772,	// (0x0002c72d) phacti_note_pane_t1

0xe789,	// (0x0002c744) phacti_term_pane_g1

0xe791,	// (0x0002c74c) phacti_term_pane_t1_ParamLimits

0xe791,	// (0x0002c74c) phacti_term_pane_t1

0xe7bb,	// (0x0002c776) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe7c3,	// (0x0002c77e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc3,	// (0x0002dd7e) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7cb,	// (0x0002c786) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7cb,	// (0x0002c786) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7e1,	// (0x0002c79c) aid_popup_sp_fs_bg_corner_pane

0xc7c9,	// (0x0002a784) popup_sp_fs_calendar_preview_bg_pane_g1

0x9bdb,	// (0x00027b96) popup_sp_fs_calendar_preview_bg_pane

0x8db7,	// (0x00026d72) popup_sp_fs_calendar_preview_list_pane

0xc3c1,	// (0x0002a37c) bg_main_sp_fs_cale_pane_ParamLimits

0xc3c1,	// (0x0002a37c) bg_main_sp_fs_cale_pane

0xe7f2,	// (0x0002c7ad) listscroll_cale_mrui_pane_ParamLimits

0xe7f2,	// (0x0002c7ad) listscroll_cale_mrui_pane

0xd31e,	// (0x0002b2d9) listscroll_sp_fs_schedule_track_pane

0xe807,	// (0x0002c7c2) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe807,	// (0x0002c7c2) main_sp_fs_ctrlbar_pane_cp01

0xe81a,	// (0x0002c7d5) main_sp_fs_ribbon_pane

0xe822,	// (0x0002c7dd) popup_sp_fs_cale_preview_window

0x8e0c,	// (0x00026dc7) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e0c,	// (0x00026dc7) list_single_sp_fs_schedule_track_pane

0xd0f0,	// (0x0002b0ab) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd0f0,	// (0x0002b0ab) bg_sp_fs_highlight_list_pane_cp03

0x8e2f,	// (0x00026dea) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e2f,	// (0x00026dea) list_single_sp_fs_schedule_track_pane_g1

0x8e3b,	// (0x00026df6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e3b,	// (0x00026df6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc8,	// (0x0002dd83) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc8,	// (0x0002dd83) list_single_sp_fs_schedule_track_pane_g

0x8e47,	// (0x00026e02) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e47,	// (0x00026e02) list_single_sp_fs_schedule_track_pane_t1

0x8e5f,	// (0x00026e1a) sp_fs_schedule_track_pane_ParamLimits

0x8e5f,	// (0x00026e1a) sp_fs_schedule_track_pane

0xe834,	// (0x0002c7ef) sp_fs_schedule_track_pane_g1

0xe83c,	// (0x0002c7f7) sp_fs_schedule_track_pane_g2

0xe844,	// (0x0002c7ff) sp_fs_schedule_track_pane_g3

0xe84c,	// (0x0002c807) sp_fs_schedule_track_pane_g4

0xe854,	// (0x0002c80f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcd,	// (0x0002dd88) sp_fs_schedule_track_pane_g

0xd28e,	// (0x0002b249) bg_sp_fs_schedule_viewer_highlight_g1

0xa770,	// (0x0002872b) bg_sp_fs_schedule_viewer_highlight_g2

0xd296,	// (0x0002b251) bg_sp_fs_schedule_viewer_highlight_g3

0xd29e,	// (0x0002b259) bg_sp_fs_schedule_viewer_highlight_g4

0xd4cc,	// (0x0002b487) bg_sp_fs_schedule_viewer_highlight_g5

0xd2ae,	// (0x0002b269) bg_sp_fs_schedule_viewer_highlight_g6

0xd2b6,	// (0x0002b271) bg_sp_fs_schedule_viewer_highlight_g7

0xd2be,	// (0x0002b279) bg_sp_fs_schedule_viewer_highlight_g8

0xa750,	// (0x0002870b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd8,	// (0x0002dd93) bg_sp_fs_schedule_viewer_highlight_g

0x9bdb,	// (0x00027b96) bg_main_sp_fs_ribbon_pane

0x8e6f,	// (0x00026e2a) main_sp_fs_ribbon_pane_g1

0xe85c,	// (0x0002c817) main_sp_fs_ribbon_pane_t1

0x8e78,	// (0x00026e33) main_sp_fs_ribbon_pane_t2

0xe86b,	// (0x0002c826) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdeb,	// (0x0002dda6) main_sp_fs_ribbon_pane_t

0xe87a,	// (0x0002c835) main_sp_fs_ribbon_scheduler_pane

0xe882,	// (0x0002c83d) bg_main_sp_fs_ribbon_pane_g1

0xe88b,	// (0x0002c846) bg_main_sp_fs_ribbon_pane_g2

0xe894,	// (0x0002c84f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf2,	// (0x0002ddad) bg_main_sp_fs_ribbon_pane_g

0xe89c,	// (0x0002c857) main_sp_fs_ribbon_scheduler_pane_g1

0xe8a5,	// (0x0002c860) main_sp_fs_ribbon_scheduler_pane_g2

0xe8ae,	// (0x0002c869) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf9,	// (0x0002ddb4) main_sp_fs_ribbon_scheduler_pane_g

0xe8b7,	// (0x0002c872) list_cale_mrui_pane

0x8e87,	// (0x00026e42) sp_fs_scroll_pane_cp07_ParamLimits

0x8e87,	// (0x00026e42) sp_fs_scroll_pane_cp07

0x8ea3,	// (0x00026e5e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8ea3,	// (0x00026e5e) bg_sp_fs_schedule_viewer_highlight

0xe8c4,	// (0x0002c87f) list_single_sp_fs_schedule_track_pane_cp01

0xe8cc,	// (0x0002c887) list_sp_fs_schedule_track_pane

0xe8d4,	// (0x0002c88f) sp_fs_scroll_pane_cp06_ParamLimits

0xe8d4,	// (0x0002c88f) sp_fs_scroll_pane_cp06

0xc7c9,	// (0x0002a784) bgmain_sp_fs_calendar_pane_g1

0x8eb0,	// (0x00026e6b) list_single_cale_mrui_pane_ParamLimits

0x8eb0,	// (0x00026e6b) list_single_cale_mrui_pane

0xe8e6,	// (0x0002c8a1) list_single_cale_mrui_row_pane_ParamLimits

0xe8e6,	// (0x0002c8a1) list_single_cale_mrui_row_pane

0xe8f3,	// (0x0002c8ae) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8f3,	// (0x0002c8ae) list_single_cale_mrui_row_pane_g1

0xe938,	// (0x0002c8f3) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe938,	// (0x0002c8f3) list_single_cale_mrui_row_pane_t1

0x8ede,	// (0x00026e99) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8ede,	// (0x00026e99) list_single_cale_mrui_row_pane_t2

0xe94a,	// (0x0002c905) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe94a,	// (0x0002c905) list_single_cale_mrui_row_pane_t3

0xe979,	// (0x0002c934) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe979,	// (0x0002c934) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe07,	// (0x0002ddc2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe07,	// (0x0002ddc2) list_single_cale_mrui_row_pane_t

0x8f44,	// (0x00026eff) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f44,	// (0x00026eff) list_single_cmail_header_editor_pane_bg_cp01

0x8f64,	// (0x00026f1f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f64,	// (0x00026f1f) list_single_cmail_header_editor_pane_bg_cp02

0x8f80,	// (0x00026f3b) main_radioblah_text_pane_t1_ParamLimits

0x8f80,	// (0x00026f3b) main_radioblah_text_pane_t1

0xe9a8,	// (0x0002c963) cam6_indi_pane_cp01

0xe9b0,	// (0x0002c96b) cam6_mode_pane_cp01

0xe9b8,	// (0x0002c973) cam6_pano_pane

0xe9c1,	// (0x0002c97c) cam6_zoom_pane_cp01

0xe9c9,	// (0x0002c984) cam6_pano_image_pane

0xe9e6,	// (0x0002c9a1) cam6_pano_pane_g1

0xdfa3,	// (0x0002bf5e) cam6_pano_pane_g2

0xe9ef,	// (0x0002c9aa) cam6_pano_pane_g3

0xe9f8,	// (0x0002c9b3) cam6_pano_pane_g4

0xcde8,	// (0x0002ada3) cam6_pano_pane_g5

0xea01,	// (0x0002c9bc) cam6_pano_pane_g6

0xea0b,	// (0x0002c9c6) cam6_pano_pane_g7

0xea13,	// (0x0002c9ce) cam6_pano_pane_g8

0xea1c,	// (0x0002c9d7) cam6_pano_pane_g9

0x0008,

0xfe10,	// (0x0002ddcb) cam6_pano_pane_g

0x9bdb,	// (0x00027b96) main_browser_tag_pane

0xe73e,	// (0x0002c6f9) grid_navstr_albumart_pane

0xea27,	// (0x0002c9e2) cell_navstr_albumart_pane_ParamLimits

0xea27,	// (0x0002c9e2) cell_navstr_albumart_pane

0xea47,	// (0x0002ca02) cell_navstr_albumart_pane_g1

0xc192,	// (0x0002a14d) cell_navstr_albumart_pane_g2

0xc1a2,	// (0x0002a15d) cell_navstr_albumart_pane_g3

0xc19a,	// (0x0002a155) cell_navstr_albumart_pane_g4

0x0003,

0xfe23,	// (0x0002ddde) cell_navstr_albumart_pane_g

0x8f9b,	// (0x00026f56) bt_list_pane_ParamLimits

0x8f9b,	// (0x00026f56) bt_list_pane

0x8fbc,	// (0x00026f77) bt_list_pane_t1

0x8fcb,	// (0x00026f86) bt_list_pane_t2

0x0001,

0xfe2c,	// (0x0002dde7) bt_list_pane_t

0x9bdb,	// (0x00027b96) main_cale_prevew_pane

0x8fda,	// (0x00026f95) popup_cale_preview_window_ParamLimits

0x8fda,	// (0x00026f95) popup_cale_preview_window

0xa407,	// (0x000283c2) bg_popup_preview_window_pane_cp05_ParamLimits

0xa407,	// (0x000283c2) bg_popup_preview_window_pane_cp05

0xea4f,	// (0x0002ca0a) list_cale_preview_pane_ParamLimits

0xea4f,	// (0x0002ca0a) list_cale_preview_pane

0x8ff3,	// (0x00026fae) list_double_cale_preview_pane_ParamLimits

0x8ff3,	// (0x00026fae) list_double_cale_preview_pane

0x9005,	// (0x00026fc0) list_single_cale_preview_pane_ParamLimits

0x9005,	// (0x00026fc0) list_single_cale_preview_pane

0x9019,	// (0x00026fd4) list_single_cale_preview_pane_g1

0x9021,	// (0x00026fdc) list_single_cale_preview_pane_t1_ParamLimits

0x9021,	// (0x00026fdc) list_single_cale_preview_pane_t1

0x9036,	// (0x00026ff1) list_double_cale_preview_pane_g1

0x903e,	// (0x00026ff9) list_double_cale_preview_pane_t1_ParamLimits

0x903e,	// (0x00026ff9) list_double_cale_preview_pane_t1

0x9053,	// (0x0002700e) list_double_cale_preview_pane_t2_ParamLimits

0x9053,	// (0x0002700e) list_double_cale_preview_pane_t2

0x0001,

0xfe31,	// (0x0002ddec) list_double_cale_preview_pane_t_ParamLimits

0xfe31,	// (0x0002ddec) list_double_cale_preview_pane_t

0x9bdb,	// (0x00027b96) main_ezdial_pane

0xa407,	// (0x000283c2) main_sp_fs_email_pane_ParamLimits

0x8670,	// (0x0002662b) cmail_ddmenu_btn01_pane_ParamLimits

0x8670,	// (0x0002662b) cmail_ddmenu_btn01_pane

0x8685,	// (0x00026640) cmail_ddmenu_btn02_pane_ParamLimits

0x8685,	// (0x00026640) cmail_ddmenu_btn02_pane

0x869d,	// (0x00026658) cmail_ddmenu_btn03_pane_ParamLimits

0x869d,	// (0x00026658) cmail_ddmenu_btn03_pane

0x86c5,	// (0x00026680) main_sp_fs_ctrlbar_pane_ParamLimits

0x86db,	// (0x00026696) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8c7a,	// (0x00026c35) list_cmail_body_pane_ParamLimits

0xe63b,	// (0x0002c5f6) bg_button_pane_cp12

0xe650,	// (0x0002c60b) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe650,	// (0x0002c60b) list_single_cmail_header_detail_pane_g3

0xe699,	// (0x0002c654) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe699,	// (0x0002c654) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb4,	// (0x0002dd6f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb4,	// (0x0002dd6f) list_single_cmail_header_detail_pane_t

0xe7a6,	// (0x0002c761) phacti_term_pane_t2_ParamLimits

0xe7a6,	// (0x0002c761) phacti_term_pane_t2

0x0001,

0xfdbe,	// (0x0002dd79) phacti_term_pane_t_ParamLimits

0xfdbe,	// (0x0002dd79) phacti_term_pane_t

0xea5b,	// (0x0002ca16) aid_size_list_single_double

0x906b,	// (0x00027026) popup_ezdial_listscroll_window

0x908f,	// (0x0002704a) popup_number_entry_window_cp01

0xa517,	// (0x000284d2) bg_popup_call_pane_cp09

0xea67,	// (0x0002ca22) ezdial_list_pane

0xea6f,	// (0x0002ca2a) scroll_pane_cp23

0xc5ae,	// (0x0002a569) bg_button_pane_cp028_ParamLimits

0xc5ae,	// (0x0002a569) bg_button_pane_cp028

0x909d,	// (0x00027058) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x909d,	// (0x00027058) cmail_ddmenu_btn01_pane_g1

0x90ad,	// (0x00027068) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x90ad,	// (0x00027068) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe36,	// (0x0002ddf1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe36,	// (0x0002ddf1) cmail_ddmenu_btn01_pane_g

0xea77,	// (0x0002ca32) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea77,	// (0x0002ca32) cmail_ddmenu_btn01_pane_t1

0xc3c1,	// (0x0002a37c) bg_button_pane_cp029_ParamLimits

0xc3c1,	// (0x0002a37c) bg_button_pane_cp029

0x90ad,	// (0x00027068) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x90ad,	// (0x00027068) cmail_ddmenu_btn02_pane_g1

0x90c6,	// (0x00027081) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x90c6,	// (0x00027081) cmail_ddmenu_btn02_pane_t1

0xd0f0,	// (0x0002b0ab) bg_button_pane_cp031_ParamLimits

0xd0f0,	// (0x0002b0ab) bg_button_pane_cp031

0x90ad,	// (0x00027068) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x90ad,	// (0x00027068) cmail_ddmenu_btn03_pane_g1

0x90c6,	// (0x00027081) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x90c6,	// (0x00027081) cmail_ddmenu_btn03_pane_t1

0x69d5,	// (0x00024990) cell_dialer2_keypad_pane_t1_ParamLimits

0x69ef,	// (0x000249aa) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x69ef,	// (0x000249aa) cell_dialer2_keypad_pane_t1_copy1

0x7f42,	// (0x00025efd) ncimui_group_button_pane

0xa407,	// (0x000283c2) main_sp_fs_calendar_pane_ParamLimits

0x8ca2,	// (0x00026c5d) list_single_cmail_header_caption_pane_ParamLimits

0xe7e9,	// (0x0002c7a4) aid_recal_txt_sm_pane

0x9bdb,	// (0x00027b96) mian_recal_day_pane

0xe822,	// (0x0002c7dd) popup_sp_fs_cale_preview_window_ParamLimits

0xea8c,	// (0x0002ca47) list_recal_day_pane

0xeace,	// (0x0002ca89) list_single_recal_day_pane_ParamLimits

0xeace,	// (0x0002ca89) list_single_recal_day_pane

0xeae0,	// (0x0002ca9b) list_single_recal_day_pane_g1_ParamLimits

0xeae0,	// (0x0002ca9b) list_single_recal_day_pane_g1

0xeaec,	// (0x0002caa7) list_single_recal_day_pane_g2_ParamLimits

0xeaec,	// (0x0002caa7) list_single_recal_day_pane_g2

0xeaf8,	// (0x0002cab3) list_single_recal_day_pane_g3_ParamLimits

0xeaf8,	// (0x0002cab3) list_single_recal_day_pane_g3

0x90ea,	// (0x000270a5) list_single_recal_day_pane_g4_ParamLimits

0x90ea,	// (0x000270a5) list_single_recal_day_pane_g4

0xeb04,	// (0x0002cabf) list_single_recal_day_pane_g5_ParamLimits

0xeb04,	// (0x0002cabf) list_single_recal_day_pane_g5

0xeb10,	// (0x0002cacb) list_single_recal_day_pane_g6_ParamLimits

0xeb10,	// (0x0002cacb) list_single_recal_day_pane_g6

0x0004,

0xfe45,	// (0x0002de00) list_single_recal_day_pane_g_ParamLimits

0xfe45,	// (0x0002de00) list_single_recal_day_pane_g

0xeb3f,	// (0x0002cafa) list_single_recal_day_pane_t1

0xeb51,	// (0x0002cb0c) list_single_recal_day_pane_t2

0x0001,

0xfe50,	// (0x0002de0b) list_single_recal_day_pane_t

0x9102,	// (0x000270bd) ncimui_query_button_pane_ParamLimits

0x9102,	// (0x000270bd) ncimui_query_button_pane

0x9112,	// (0x000270cd) ncimui_query_button_pane_t1_ParamLimits

0x9112,	// (0x000270cd) ncimui_query_button_pane_t1

0xeb63,	// (0x0002cb1e) ncimui_query_button_pane_t2_ParamLimits

0xeb63,	// (0x0002cb1e) ncimui_query_button_pane_t2

0x0001,

0xfe55,	// (0x0002de10) ncimui_query_button_pane_t_ParamLimits

0xfe55,	// (0x0002de10) ncimui_query_button_pane_t

0x9125,	// (0x000270e0) query_button_pane_ParamLimits

0x9125,	// (0x000270e0) query_button_pane

0x9bdb,	// (0x00027b96) bg_button_pane_cp0028

0xeb76,	// (0x0002cb31) query_button_pane_t1

0x146d,	// (0x0001f428) main_tport_pane_ParamLimits

0x8b84,	// (0x00026b3f) bg_popup_window_pane_cp01_ParamLimits

0x8b84,	// (0x00026b3f) bg_popup_window_pane_cp01

0x8b92,	// (0x00026b4d) heading_pane_cp08_ParamLimits

0x8b92,	// (0x00026b4d) heading_pane_cp08

0x8ba0,	// (0x00026b5b) heading_pane_cp07_ParamLimits

0x8ba0,	// (0x00026b5b) heading_pane_cp07

0x8c0f,	// (0x00026bca) cell_tport_appsw_pane_g2

0x0002,

0xfda1,	// (0x0002dd5c) cell_tport_appsw_pane_g

0x4d5f,	// (0x00022d1a) input_candi_list_open_g1

0xa933,	// (0x000288ee) list_cale_time_pane_g6_ParamLimits

0xa933,	// (0x000288ee) list_cale_time_pane_g6

0x5c12,	// (0x00023bcd) aid_size_touch_calib_1_ParamLimits

0x5c12,	// (0x00023bcd) aid_size_touch_calib_1

0x5c1e,	// (0x00023bd9) aid_size_touch_calib_2_ParamLimits

0x5c1e,	// (0x00023bd9) aid_size_touch_calib_2

0x5c2c,	// (0x00023be7) aid_size_touch_calib_3_ParamLimits

0x5c2c,	// (0x00023be7) aid_size_touch_calib_3

0x5c3c,	// (0x00023bf7) aid_size_touch_calib_4_ParamLimits

0x5c3c,	// (0x00023bf7) aid_size_touch_calib_4

0x5c4a,	// (0x00023c05) main_touch_calib_button_group_pane_ParamLimits

0x5c4a,	// (0x00023c05) main_touch_calib_button_group_pane

0x5c58,	// (0x00023c13) main_touch_calib_pane_g1_ParamLimits

0x5c64,	// (0x00023c1f) main_touch_calib_pane_g2_ParamLimits

0x5c70,	// (0x00023c2b) main_touch_calib_pane_g3_ParamLimits

0x5c7c,	// (0x00023c37) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0002d71f) main_touch_calib_pane_g_ParamLimits

0x5c88,	// (0x00023c43) main_touch_calib_pane_t1_ParamLimits

0x5ca1,	// (0x00023c5c) main_touch_calib_pane_t2_ParamLimits

0x5cba,	// (0x00023c75) main_touch_calib_pane_t3_ParamLimits

0x5cd0,	// (0x00023c8b) main_touch_calib_pane_t4_ParamLimits

0x5ce6,	// (0x00023ca1) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0002d728) main_touch_calib_pane_t_ParamLimits

0xcb8b,	// (0x0002ab46) list_single_fp_cale_pane_g3_ParamLimits

0xcb8b,	// (0x0002ab46) list_single_fp_cale_pane_g3

0x1451,	// (0x0001f40c) bg_button_pane_cp012_ParamLimits

0x1451,	// (0x0001f40c) bg_vkb2_func_pane_cp03_ParamLimits

0x248a,	// (0x00020445) cell_vitu2_function_top_pane_g1_ParamLimits

0x1451,	// (0x0001f40c) bg_vkb2_func_pane_cp04_ParamLimits

0x7eca,	// (0x00025e85) main_ncimui_button_group_pane_ParamLimits

0x7eca,	// (0x00025e85) main_ncimui_button_group_pane

0x7f30,	// (0x00025eeb) main_ncimui_pane_t3_ParamLimits

0x7f30,	// (0x00025eeb) main_ncimui_pane_t3

0xe754,	// (0x0002c70f) phacti_button_group_pane

0xea5b,	// (0x0002ca16) aid_size_list_single_double_ParamLimits

0x906b,	// (0x00027026) popup_ezdial_listscroll_window_ParamLimits

0x908f,	// (0x0002704a) popup_number_entry_window_cp01_ParamLimits

0x9132,	// (0x000270ed) phacti_button_pane_ParamLimits

0x9132,	// (0x000270ed) phacti_button_pane

0x9bdb,	// (0x00027b96) bg_button_pane_cp14

0xeb84,	// (0x0002cb3f) phacti_button_pane_t1

0x9143,	// (0x000270fe) main_touch_calib_button_pane_ParamLimits

0x9143,	// (0x000270fe) main_touch_calib_button_pane

0xa324,	// (0x000282df) bg_button_pane_cp18_ParamLimits

0xa324,	// (0x000282df) bg_button_pane_cp18

0xeb92,	// (0x0002cb4d) main_touch_calib_button_pane_t1_ParamLimits

0xeb92,	// (0x0002cb4d) main_touch_calib_button_pane_t1

0xeba8,	// (0x0002cb63) main_touch_calib_button_pane_t2_ParamLimits

0xeba8,	// (0x0002cb63) main_touch_calib_button_pane_t2

0x0001,

0xfe5a,	// (0x0002de15) main_touch_calib_button_pane_t_ParamLimits

0xfe5a,	// (0x0002de15) main_touch_calib_button_pane_t

0x9bdb,	// (0x00027b96) cell_ncimui_button_pane

0x9bdb,	// (0x00027b96) bg_button_pane_cp032

0xebc6,	// (0x0002cb81) cell_ncimui_button_pane_t1

0x1cc8,	// (0x0001fc83) image3_infobar_pane_ParamLimits

0x1cc8,	// (0x0001fc83) image3_infobar_pane

0x82ed,	// (0x000262a8) fs_bigclock_status_pane_ParamLimits

0x82ed,	// (0x000262a8) fs_bigclock_status_pane

0x82fa,	// (0x000262b5) main_fs_bigclock_clock_pane_ParamLimits

0x82fa,	// (0x000262b5) main_fs_bigclock_clock_pane

0x830e,	// (0x000262c9) main_fs_bigclock_indi_pane_ParamLimits

0x830e,	// (0x000262c9) main_fs_bigclock_indi_pane

0x8336,	// (0x000262f1) main_fs_bigclock_swipe_pane_ParamLimits

0x8336,	// (0x000262f1) main_fs_bigclock_swipe_pane

0x9bdb,	// (0x00027b96) main_fs_clock_dumped_data

0xe0b0,	// (0x0002c06b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0b0,	// (0x0002c06b) list_single_fs_bigclock_indicator_pane_g1

0xe0cc,	// (0x0002c087) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0cc,	// (0x0002c087) list_single_fs_bigclock_indicator_pane_g2

0xe0e6,	// (0x0002c0a1) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0e6,	// (0x0002c0a1) list_single_fs_bigclock_indicator_pane_g3

0xe100,	// (0x0002c0bb) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe100,	// (0x0002c0bb) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0002dc42) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0002dc42) list_single_fs_bigclock_indicator_pane_g

0xe12b,	// (0x0002c0e6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe12b,	// (0x0002c0e6) list_single_fs_bigclock_indicator_pane_t1

0xe153,	// (0x0002c10e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe153,	// (0x0002c10e) list_single_fs_bigclock_indicator_pane_t2

0xe17b,	// (0x0002c136) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe17b,	// (0x0002c136) list_single_fs_bigclock_indicator_pane_t3

0xe1a3,	// (0x0002c15e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1a3,	// (0x0002c15e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0002dc4d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0002dc4d) list_single_fs_bigclock_indicator_pane_t

0xebd4,	// (0x0002cb8f) image3_infobar_fav_pane_ParamLimits

0xebd4,	// (0x0002cb8f) image3_infobar_fav_pane

0xebe4,	// (0x0002cb9f) image3_infobar_loc_pane_ParamLimits

0xebe4,	// (0x0002cb9f) image3_infobar_loc_pane

0xebf8,	// (0x0002cbb3) image3_infobar_time_pane_ParamLimits

0xebf8,	// (0x0002cbb3) image3_infobar_time_pane

0xc7c9,	// (0x0002a784) image3_infobar_time_pane_g1

0xec08,	// (0x0002cbc3) image3_infobar_time_pane_t1

0xc7c9,	// (0x0002a784) image3_infobar_loc_pane_g1

0xec16,	// (0x0002cbd1) image3_infobar_loc_pane_g2

0x0001,

0xfe5f,	// (0x0002de1a) image3_infobar_loc_pane_g

0xec1e,	// (0x0002cbd9) image3_infobar_loc_pane_t1

0xc7c9,	// (0x0002a784) image3_infobar_fav_pane_g1

0xec2c,	// (0x0002cbe7) image3_infobar_fav_pane_g2

0x0001,

0xfe64,	// (0x0002de1f) image3_infobar_fav_pane_g

0xec34,	// (0x0002cbef) fs_bigclock_status_battery_pane

0xec3d,	// (0x0002cbf8) fs_bigclock_status_signal_pane

0xec46,	// (0x0002cc01) fs_bigclock_status_title_pane

0xec4f,	// (0x0002cc0a) fs_bigclock_status_signal_pane_g1

0xec58,	// (0x0002cc13) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe69,	// (0x0002de24) fs_bigclock_status_signal_pane_g

0xec60,	// (0x0002cc1b) fs_bigclock_status_battery_pane_g1

0xec69,	// (0x0002cc24) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6e,	// (0x0002de29) fs_bigclock_status_battery_pane_g

0xec71,	// (0x0002cc2c) fs_bigclock_status_title_pane_t1

0x9153,	// (0x0002710e) main_fs_bigclock_clock_pane_g1

0x9153,	// (0x0002710e) main_fs_bigclock_clock_pane_g2

0x9160,	// (0x0002711b) main_fs_bigclock_clock_pane_g3

0x9160,	// (0x0002711b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe73,	// (0x0002de2e) main_fs_bigclock_clock_pane_g

0x916c,	// (0x00027127) main_fs_bigclock_clock_pane_t1

0x917f,	// (0x0002713a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7c,	// (0x0002de37) main_fs_bigclock_clock_pane_t

0xec7f,	// (0x0002cc3a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec7f,	// (0x0002cc3a) list_single_fs_bigclock_indicator_pane

0xec90,	// (0x0002cc4b) list_single_fs_bigclock_pane_ParamLimits

0xec90,	// (0x0002cc4b) list_single_fs_bigclock_pane

0xecb6,	// (0x0002cc71) main_fs_bigclock_indicator_pane_t1

0xecc5,	// (0x0002cc80) list_single_fs_bigclock_pane_g1

0xeccd,	// (0x0002cc88) list_single_fs_bigclock_pane_t1

0xc7c9,	// (0x0002a784) main_fs_bigclock_swipe_pane_g1

0xed10,	// (0x0002cccb) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8d,	// (0x0002de48) main_fs_bigclock_swipe_pane_g

0xed18,	// (0x0002ccd3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed18,	// (0x0002ccd3) main_fs_bigclock_swipe_pane_t1

0x4664,	// (0x0002261f) call_type_pane_ParamLimits

0x9bdb,	// (0x00027b96) main_btmg_pane

0xe91f,	// (0x0002c8da) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe91f,	// (0x0002c8da) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe00,	// (0x0002ddbb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe00,	// (0x0002ddbb) list_single_cale_mrui_row_pane_g

0xeab5,	// (0x0002ca70) list_recal_vselct_arw_lo_pane

0xeabd,	// (0x0002ca78) list_recal_vselct_arw_up_pane

0xeac5,	// (0x0002ca80) list_recal_vselct_pane

0x91d6,	// (0x00027191) btmg_button_pane

0x91e2,	// (0x0002719d) main_btmg_pane_g1

0x9bdb,	// (0x00027b96) bg_button_pane_cp044

0xed35,	// (0x0002ccf0) btmg_button_pane_t1

0xc3ad,	// (0x0002a368) aid_listscroll_gen

0xa407,	// (0x000283c2) main_cntbar_detail_pane

0xe61d,	// (0x0002c5d8) list_cmail_folder_pane

0xd312,	// (0x0002b2cd) sp_fs_scroll_pane_cp03_ParamLimits

0x91ea,	// (0x000271a5) list_single_fs_dyc_pane_cp01_ParamLimits

0x91ea,	// (0x000271a5) list_single_fs_dyc_pane_cp01

0xed43,	// (0x0002ccfe) aid_size_cmail_indent

0xed4c,	// (0x0002cd07) list_single_dyc_row_pane_cp01

0x9236,	// (0x000271f1) cntbar_detail_list_pane_ParamLimits

0x9236,	// (0x000271f1) cntbar_detail_list_pane

0x9270,	// (0x0002722b) main_cntbar_detail_cont_pane_ParamLimits

0x9270,	// (0x0002722b) main_cntbar_detail_cont_pane

0x4587,	// (0x00022542) scroll_pane_cp032_ParamLimits

0x4587,	// (0x00022542) scroll_pane_cp032

0x927c,	// (0x00027237) cntbar_detail_list_event_pane_ParamLimits

0x927c,	// (0x00027237) cntbar_detail_list_event_pane

0x9242,	// (0x000271fd) cntbar_detail_list_shct_pane

0xa7be,	// (0x00028779) aid_list_gen

0xed55,	// (0x0002cd10) aid_scroll

0xed5e,	// (0x0002cd19) aid_size_touch_scroll_bar

0x770d,	// (0x000256c8) aid_list_double

0x9290,	// (0x0002724b) aid_list_single

0x76fb,	// (0x000256b6) aid_list_single_lg

0x9299,	// (0x00027254) aid_list_z_g_a_sm

0x92a1,	// (0x0002725c) aid_list_z_g_d

0x92a9,	// (0x00027264) aid_txt_z_prm

0x92b7,	// (0x00027272) aid_txt_z_prm_cp01

0x92c5,	// (0x00027280) aid_txt_z_sec

0x92d3,	// (0x0002728e) main_cntbar_detail_cont_pane_g1_ParamLimits

0x92d3,	// (0x0002728e) main_cntbar_detail_cont_pane_g1

0x92e0,	// (0x0002729b) main_cntbar_detail_cont_pane_g2_ParamLimits

0x92e0,	// (0x0002729b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe92,	// (0x0002de4d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe92,	// (0x0002de4d) main_cntbar_detail_cont_pane_g

0xed67,	// (0x0002cd22) main_cntbar_detail_cont_pane_t1

0xed75,	// (0x0002cd30) main_cntbar_detail_cont_pane_t2

0xed83,	// (0x0002cd3e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe97,	// (0x0002de52) main_cntbar_detail_cont_pane_t

0x92ec,	// (0x000272a7) cell_cntbar_detail_list_shct_pane_ParamLimits

0x92ec,	// (0x000272a7) cell_cntbar_detail_list_shct_pane

0xed91,	// (0x0002cd4c) cntbar_detail_list_shct_pane_g1

0xed9a,	// (0x0002cd55) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9e,	// (0x0002de59) cntbar_detail_list_shct_pane_g

0x9300,	// (0x000272bb) cntbar_detail_list_event_pane_g1_ParamLimits

0x9300,	// (0x000272bb) cntbar_detail_list_event_pane_g1

0x930c,	// (0x000272c7) cntbar_detail_list_event_pane_g2_ParamLimits

0x930c,	// (0x000272c7) cntbar_detail_list_event_pane_g2

0x0005,

0xfea3,	// (0x0002de5e) cntbar_detail_list_event_pane_g_ParamLimits

0xfea3,	// (0x0002de5e) cntbar_detail_list_event_pane_g

0x9378,	// (0x00027333) cntbar_detail_list_event_pane_t1_ParamLimits

0x9378,	// (0x00027333) cntbar_detail_list_event_pane_t1

0x938d,	// (0x00027348) cntbar_detail_list_event_pane_t2_ParamLimits

0x938d,	// (0x00027348) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb0,	// (0x0002de6b) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb0,	// (0x0002de6b) cntbar_detail_list_event_pane_t

0xc7c9,	// (0x0002a784) cell_cntbar_detail_list_shct_pane_g1

0xaf36,	// (0x00028ef1) navi_pane_mv_g3

0xa407,	// (0x000283c2) main_cntbar_detail_pane_ParamLimits

0x9bdb,	// (0x00027b96) main_notif_wgt_pane

0x1a09,	// (0x0001f9c4) aid_tch_main_mp4_pane_g4

0x1c3e,	// (0x0001fbf9) popup_slider_window_cp02

0xeaab,	// (0x0002ca66) list_recal_day_event_pane

0x9216,	// (0x000271d1) cntbar_detail_btn_pane_ParamLimits

0x9216,	// (0x000271d1) cntbar_detail_btn_pane

0x9226,	// (0x000271e1) cntbar_detail_btn_pane_cp01_ParamLimits

0x9226,	// (0x000271e1) cntbar_detail_btn_pane_cp01

0x9242,	// (0x000271fd) cntbar_detail_list_shct_pane_ParamLimits

0x924e,	// (0x00027209) cntbar_detail_pane_g1_ParamLimits

0x924e,	// (0x00027209) cntbar_detail_pane_g1

0x925a,	// (0x00027215) cntbar_detail_pane_t1_ParamLimits

0x925a,	// (0x00027215) cntbar_detail_pane_t1

0x9318,	// (0x000272d3) cntbar_detail_list_event_pane_g3_ParamLimits

0x9318,	// (0x000272d3) cntbar_detail_list_event_pane_g3

0x9330,	// (0x000272eb) cntbar_detail_list_event_pane_g4_ParamLimits

0x9330,	// (0x000272eb) cntbar_detail_list_event_pane_g4

0x9348,	// (0x00027303) cntbar_detail_list_event_pane_g5_ParamLimits

0x9348,	// (0x00027303) cntbar_detail_list_event_pane_g5

0x9360,	// (0x0002731b) cntbar_detail_list_event_pane_g6_ParamLimits

0x9360,	// (0x0002731b) cntbar_detail_list_event_pane_g6

0x93a2,	// (0x0002735d) cntbar_detail_list_event_pane_t3_ParamLimits

0x93a2,	// (0x0002735d) cntbar_detail_list_event_pane_t3

0x93b4,	// (0x0002736f) popup_notif_wgt_window_ParamLimits

0x93b4,	// (0x0002736f) popup_notif_wgt_window

0x93c4,	// (0x0002737f) popup_submenu_window_cp01_ParamLimits

0x93c4,	// (0x0002737f) popup_submenu_window_cp01

0xa517,	// (0x000284d2) bg_popup_window_pane_cp10

0xeda3,	// (0x0002cd5e) listscroll_notif_wgt_pane

0xedb5,	// (0x0002cd70) list_notif_wgt_window

0xedbe,	// (0x0002cd79) scroll_pane_cp033

0x93d2,	// (0x0002738d) list_notif_wgt_row_pane_ParamLimits

0x93d2,	// (0x0002738d) list_notif_wgt_row_pane

0xedc7,	// (0x0002cd82) aid_size_list_notif_wgt_del

0xedd4,	// (0x0002cd8f) list_notif_wgt_row_pane_g1

0xede0,	// (0x0002cd9b) list_notif_wgt_row_pane_g2

0xedef,	// (0x0002cdaa) list_notif_wgt_row_pane_g3

0x0002,

0xfeb7,	// (0x0002de72) list_notif_wgt_row_pane_g

0xedfc,	// (0x0002cdb7) list_notif_wgt_row_pane_t1

0xee12,	// (0x0002cdcd) list_notif_wgt_row_pane_t2

0xee24,	// (0x0002cddf) list_notif_wgt_row_pane_t3

0x0002,

0xfebe,	// (0x0002de79) list_notif_wgt_row_pane_t

0xd510,	// (0x0002b4cb) list_recal_day_event_pane_g1

0xee36,	// (0x0002cdf1) list_recal_day_event_pane_t1

0x9bdb,	// (0x00027b96) bg_button_pane_cp045

0x93e4,	// (0x0002739f) cntbar_detail_btn_pane_t1

0xc3c1,	// (0x0002a37c) main_callh_pane_ParamLimits

0xc3c1,	// (0x0002a37c) main_callh_pane

0x9bdb,	// (0x00027b96) main_coverflow0_pane

0x9bdb,	// (0x00027b96) main_wgtman_pane

0x834e,	// (0x00026309) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x834e,	// (0x00026309) main_fs_bigclock_unlock_btn_pane

0x8c07,	// (0x00026bc2) bg_button_pane_cp16

0x8c17,	// (0x00026bd2) cell_tport_appsw_pane_g3

0x93f2,	// (0x000273ad) cf0_flow_pane_ParamLimits

0x93f2,	// (0x000273ad) cf0_flow_pane

0xee45,	// (0x0002ce00) listscroll_cf0_pane

0xee50,	// (0x0002ce0b) main_cf0_pane_g1

0x9401,	// (0x000273bc) main_cf0_pane_t1_ParamLimits

0x9401,	// (0x000273bc) main_cf0_pane_t1

0x9415,	// (0x000273d0) main_cf0_pane_t2_ParamLimits

0x9415,	// (0x000273d0) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x0002de85) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x0002de85) main_cf0_pane_t

0xee62,	// (0x0002ce1d) scroll_pane_cp11

0x9429,	// (0x000273e4) cf0_flow_pane_g1

0x9431,	// (0x000273ec) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x0002de8a) cf0_flow_pane_g

0x9439,	// (0x000273f4) cf0_flow_pane_t1

0x9bdb,	// (0x00027b96) main_call6_pane

0x9bdb,	// (0x00027b96) main_calllock_pane

0x26bb,	// (0x00020676) call6_btn_grp_pane_ParamLimits

0x26bb,	// (0x00020676) call6_btn_grp_pane

0x26ca,	// (0x00020685) call6_pane_g1_ParamLimits

0x26ca,	// (0x00020685) call6_pane_g1

0x26da,	// (0x00020695) popup_call6_1st_window_ParamLimits

0x26da,	// (0x00020695) popup_call6_1st_window

0x26e8,	// (0x000206a3) popup_call6_2nd_window_ParamLimits

0x26e8,	// (0x000206a3) popup_call6_2nd_window

0x26f6,	// (0x000206b1) cell_call6_btn_pane_ParamLimits

0x26f6,	// (0x000206b1) cell_call6_btn_pane

0xa517,	// (0x000284d2) bg_popup_call2_in_pane_cp03

0xee6d,	// (0x0002ce28) popup_call6_1st_window_g1

0xee75,	// (0x0002ce30) popup_call6_1st_window_g2

0xee7d,	// (0x0002ce38) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x0002de8f) popup_call6_1st_window_g

0xee85,	// (0x0002ce40) popup_call6_1st_window_t1

0xee94,	// (0x0002ce4f) popup_call6_1st_window_t2

0xeea2,	// (0x0002ce5d) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x0002de96) popup_call6_1st_window_t

0xa517,	// (0x000284d2) bg_popup_call2_in_pane_cp04

0xee6d,	// (0x0002ce28) popup_call6_2nd_window_g1

0xee75,	// (0x0002ce30) popup_call6_2nd_window_g2

0xee7d,	// (0x0002ce38) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x0002de8f) popup_call6_2nd_window_g

0xee85,	// (0x0002ce40) popup_call6_2nd_window_t1

0x0ffb,	// (0x0001efb6) bg_button_pane_cp15

0x2705,	// (0x000206c0) cell_call6_btn_pane_g1

0x270e,	// (0x000206c9) cell_call6_btn_pane_t1

0x9447,	// (0x00027402) listscroll_wgtman_pane_ParamLimits

0x9447,	// (0x00027402) listscroll_wgtman_pane

0x9463,	// (0x0002741e) wgtman_btn_pane_ParamLimits

0x9463,	// (0x0002741e) wgtman_btn_pane

0xad4a,	// (0x00028d05) aid_scroll_copy1

0xeeb0,	// (0x0002ce6b) list_wgtman_pane

0x9498,	// (0x00027453) wgtman_btn_pane_g1_ParamLimits

0x9498,	// (0x00027453) wgtman_btn_pane_g1

0x94c0,	// (0x0002747b) wgtman_btn_pane_t1_ParamLimits

0x94c0,	// (0x0002747b) wgtman_btn_pane_t1

0xeeba,	// (0x0002ce75) wgtman_btn_pane_t2_ParamLimits

0xeeba,	// (0x0002ce75) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x0002de9d) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x0002de9d) wgtman_btn_pane_t

0x94f7,	// (0x000274b2) listrow_wgtman_pane_ParamLimits

0x94f7,	// (0x000274b2) listrow_wgtman_pane

0x9513,	// (0x000274ce) listrow_wgtman_pane_g1

0x9520,	// (0x000274db) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x0002dea2) listrow_wgtman_pane_g

0x953e,	// (0x000274f9) listrow_wgtman_pane_t1

0x9556,	// (0x00027511) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x0002dea7) listrow_wgtman_pane_t

0x957c,	// (0x00027537) wait_bar_pane_cp09

0xeed1,	// (0x0002ce8c) main_calllock_btn_pane

0xeedb,	// (0x0002ce96) main_calllock_pane_g1

0x9bdb,	// (0x00027b96) bg_button_pane_cp17

0xeee7,	// (0x0002cea2) main_calllock_btn_pane_g1

0xeef0,	// (0x0002ceab) main_calllock_btn_pane_t1

0x9bdb,	// (0x00027b96) main_dialer3_pane

0x9bdb,	// (0x00027b96) main_fmrd2_pane

0xc7c9,	// (0x0002a784) main_fs_bigclock_unlock_btn_pane_g1

0x9596,	// (0x00027551) main_fs_bigclock_unlock_btn_pane_t1

0x95a4,	// (0x0002755f) area_fmrd2_info_pane_ParamLimits

0x95a4,	// (0x0002755f) area_fmrd2_info_pane

0x95b2,	// (0x0002756d) area_fmrd2_visual_pane_ParamLimits

0x95b2,	// (0x0002756d) area_fmrd2_visual_pane

0x95c0,	// (0x0002757b) fmrd2_indi_pane_ParamLimits

0x95c0,	// (0x0002757b) fmrd2_indi_pane

0x95cd,	// (0x00027588) area_fmrd2_visual_pane_g1

0x95d5,	// (0x00027590) area_fmrd2_visual_pane_t1

0x95e5,	// (0x000275a0) area_fmrd2_visual_pane_t2

0x95f5,	// (0x000275b0) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x0002deb1) area_fmrd2_visual_pane_t

0x9605,	// (0x000275c0) area_fmrd2_info_pane_g1

0x960d,	// (0x000275c8) area_fmrd2_info_pane_t1

0x961d,	// (0x000275d8) area_fmrd2_info_pane_t2

0x962d,	// (0x000275e8) area_fmrd2_info_pane_t3

0x963d,	// (0x000275f8) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x0002deb8) area_fmrd2_info_pane_t

0x964b,	// (0x00027606) fmrd2_indi_pane_t1

0x965b,	// (0x00027616) fmrd2_indi_pane_t2

0x966b,	// (0x00027626) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x0002dec1) fmrd2_indi_pane_t

0xe10f,	// (0x0002c0ca) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe10f,	// (0x0002c0ca) list_single_fs_bigclock_indicator_pane_g5

0xe1c0,	// (0x0002c17b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1c0,	// (0x0002c17b) list_single_fs_bigclock_indicator_pane_t5

0x8dbf,	// (0x00026d7a) aid_cell_bcale_month_pane_ParamLimits

0x8dbf,	// (0x00026d7a) aid_cell_bcale_month_pane

0x8ddd,	// (0x00026d98) bcale_month_pane_ParamLimits

0x8ddd,	// (0x00026d98) bcale_month_pane

0x8dfb,	// (0x00026db6) bcale_preview_pane_ParamLimits

0x8dfb,	// (0x00026db6) bcale_preview_pane

0xeccd,	// (0x0002cc88) list_single_fs_bigclock_pane_t1_ParamLimits

0xecec,	// (0x0002cca7) list_single_fs_bigclock_pane_t2_ParamLimits

0xecec,	// (0x0002cca7) list_single_fs_bigclock_pane_t2

0x0001,

0xfe88,	// (0x0002de43) list_single_fs_bigclock_pane_t_ParamLimits

0xfe88,	// (0x0002de43) list_single_fs_bigclock_pane_t

0x958e,	// (0x00027549) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x0002deac) main_fs_bigclock_unlock_btn_pane_g

0x9679,	// (0x00027634) aid_dia3_key_size_ParamLimits

0x9679,	// (0x00027634) aid_dia3_key_size

0x9685,	// (0x00027640) aid_dia3_listrow_size_ParamLimits

0x9685,	// (0x00027640) aid_dia3_listrow_size

0x9695,	// (0x00027650) dia3_keypad_fun_pane_ParamLimits

0x9695,	// (0x00027650) dia3_keypad_fun_pane

0x96a7,	// (0x00027662) dia3_keypad_num_pane_ParamLimits

0x96a7,	// (0x00027662) dia3_keypad_num_pane

0x96b9,	// (0x00027674) dia3_listscroll_pane_ParamLimits

0x96b9,	// (0x00027674) dia3_listscroll_pane

0x96c7,	// (0x00027682) dia3_numentry_pane_ParamLimits

0x96c7,	// (0x00027682) dia3_numentry_pane

0xeeff,	// (0x0002ceba) dia3_list_pane

0xef0a,	// (0x0002cec5) scroll_pane_cp12

0x9bdb,	// (0x00027b96) bg_dia3_numentry_pane

0x96d5,	// (0x00027690) dia3_numentry_pane_t1

0x96e4,	// (0x0002769f) cell_dia3_key_num_pane

0x96ec,	// (0x000276a7) cell_dia3_key0_fun_pane_ParamLimits

0x96ec,	// (0x000276a7) cell_dia3_key0_fun_pane

0x96f9,	// (0x000276b4) cell_dia3_key1_fun_pane_ParamLimits

0x96f9,	// (0x000276b4) cell_dia3_key1_fun_pane

0x9706,	// (0x000276c1) dia3_listrow_pane

0xde62,	// (0x0002be1d) bg_dia3_numentry_pane_g1

0x9bdb,	// (0x00027b96) bg_button_pane_cp21

0xef15,	// (0x0002ced0) cell_dia3_key_num_pane_t1

0xef23,	// (0x0002cede) cell_dia3_key_num_pane_t2

0xef32,	// (0x0002ceed) cell_dia3_key_num_pane_t3

0xef41,	// (0x0002cefc) cell_dia3_key_num_pane_t4

0x0003,

0x0d01,	// (0x0001ecbc) cell_dia3_key_num_pane_t

0x9bdb,	// (0x00027b96) bg_button_pane_cp19

0x9713,	// (0x000276ce) cell_dia3_key0_fun_pane_g1

0x9bdb,	// (0x00027b96) bg_button_pane_cp20

0x971b,	// (0x000276d6) cell_dia3_key1_fun_pane_g1

0x9723,	// (0x000276de) area_left_week_number_pane

0x9736,	// (0x000276f1) area_top_day_name_pane

0x9744,	// (0x000276ff) frame_month_view_pane

0xef50,	// (0x0002cf0b) grid_month_view_pane

0x9759,	// (0x00027714) cell_top_day_name_pane_ParamLimits

0x9759,	// (0x00027714) cell_top_day_name_pane

0x9773,	// (0x0002772e) cell_area_left_week_number_pane_ParamLimits

0x9773,	// (0x0002772e) cell_area_left_week_number_pane

0x9796,	// (0x00027751) cell_month_view_pane_ParamLimits

0x9796,	// (0x00027751) cell_month_view_pane

0xef5e,	// (0x0002cf19) frm_month_g1

0x97c2,	// (0x0002777d) frm_month_g2

0x97d3,	// (0x0002778e) frm_month_g3

0x97e4,	// (0x0002779f) frm_month_g4

0x97f5,	// (0x000277b0) frm_month_g5

0x9808,	// (0x000277c3) frm_month_g6

0x981b,	// (0x000277d6) frm_month_g7

0xef6b,	// (0x0002cf26) frm_month_g8

0x982e,	// (0x000277e9) frm_month_g9

0x983b,	// (0x000277f6) frm_month_g10

0x9848,	// (0x00027803) frm_month_g11

0x9855,	// (0x00027810) frm_month_g12

0x9862,	// (0x0002781d) frm_month_g13

0x986f,	// (0x0002782a) frm_month_g14

0x987e,	// (0x00027839) frm_month_g15

0x988d,	// (0x00027848) frm_month_g16

0x000f,

0xff0d,	// (0x0002dec8) frm_month_g

0xef78,	// (0x0002cf33) cell_top_day_name_pane_t1

0x989c,	// (0x00027857) cell_area_left_week_number_pane_g1

0x98ab,	// (0x00027866) cell_area_left_week_number_pane_t1

0xca17,	// (0x0002a9d2) cell_month_view_pane_g1

0x98c1,	// (0x0002787c) cell_month_view_pane_t1

0x9bdb,	// (0x00027b96) main_fps_pane

0xe3dd,	// (0x0002c398) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3dd,	// (0x0002c398) cmail_ddmenu_btn02_pane_cp1

0xe3f9,	// (0x0002c3b4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3f9,	// (0x0002c3b4) cmail_ddmenu_btn02_pane_cp2

0x90b9,	// (0x00027074) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x90b9,	// (0x00027074) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3b,	// (0x0002ddf6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3b,	// (0x0002ddf6) cmail_ddmenu_btn02_pane_g

0x90d8,	// (0x00027093) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x90d8,	// (0x00027093) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe40,	// (0x0002ddfb) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe40,	// (0x0002ddfb) cmail_ddmenu_btn02_pane_t

0x98d7,	// (0x00027892) fps_text_pane_ParamLimits

0x98d7,	// (0x00027892) fps_text_pane

0x98e4,	// (0x0002789f) main_fps_pane_g1_ParamLimits

0x98e4,	// (0x0002789f) main_fps_pane_g1

0x98f2,	// (0x000278ad) wait_bar_pane_cp010_ParamLimits

0x98f2,	// (0x000278ad) wait_bar_pane_cp010

0x98fe,	// (0x000278b9) fps_text_pane_t1_ParamLimits

0x98fe,	// (0x000278b9) fps_text_pane_t1

0x6a48,	// (0x00024a03) cam4_image_uncrop_pane_g1

0x6a51,	// (0x00024a0c) cam4_image_uncrop_pane_g2

0x6a5a,	// (0x00024a15) cam4_image_uncrop_pane_g3

0x6a63,	// (0x00024a1e) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0002d8bc) cam4_image_uncrop_pane_g

0x9706,	// (0x000276c1) dia3_listrow_pane_ParamLimits

0x9bdb,	// (0x00027b96) main_phob2_pane

0x8be9,	// (0x00026ba4) cell_tport_appsw_pane_cp02_ParamLimits

0x8be9,	// (0x00026ba4) cell_tport_appsw_pane_cp02

0x8bf8,	// (0x00026bb3) cell_tport_appsw_pane_cp03_ParamLimits

0x8bf8,	// (0x00026bb3) cell_tport_appsw_pane_cp03

0x9bdb,	// (0x00027b96) phob2_contact_card_pane

0x9bdb,	// (0x00027b96) phob2_listscroll_pane

0xef8b,	// (0x0002cf46) phob2_list_pane

0xef93,	// (0x0002cf4e) scroll_pane_cp034

0x9917,	// (0x000278d2) phob2_cc_data_pane_ParamLimits

0x9917,	// (0x000278d2) phob2_cc_data_pane

0x9931,	// (0x000278ec) phob2_cc_listscroll_pane_ParamLimits

0x9931,	// (0x000278ec) phob2_cc_listscroll_pane

0x994b,	// (0x00027906) list_double_large_graphic_phob2_pane_ParamLimits

0x994b,	// (0x00027906) list_double_large_graphic_phob2_pane

0x996a,	// (0x00027925) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x996a,	// (0x00027925) list_double_large_graphic_phob2_pane_g1

0x9980,	// (0x0002793b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9980,	// (0x0002793b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x0002dee9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x0002dee9) list_double_large_graphic_phob2_pane_g

0x998c,	// (0x00027947) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x998c,	// (0x00027947) list_double_large_graphic_phob2_pane_t1

0x99a2,	// (0x0002795d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99a2,	// (0x0002795d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x0002deee) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x0002deee) list_double_large_graphic_phob2_pane_t

0x9bdb,	// (0x00027b96) list_highlight_pane_cp024

0x99b7,	// (0x00027972) phob2_cc_button_pane

0x99bf,	// (0x0002797a) phob2_cc_data_pane_g1_ParamLimits

0x99bf,	// (0x0002797a) phob2_cc_data_pane_g1

0x99cb,	// (0x00027986) phob2_cc_data_pane_g2_ParamLimits

0x99cb,	// (0x00027986) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x0002def3) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x0002def3) phob2_cc_data_pane_g

0x99d7,	// (0x00027992) phob2_cc_data_pane_t1_ParamLimits

0x99d7,	// (0x00027992) phob2_cc_data_pane_t1

0x99e9,	// (0x000279a4) phob2_cc_data_pane_t2_ParamLimits

0x99e9,	// (0x000279a4) phob2_cc_data_pane_t2

0x99fb,	// (0x000279b6) phob2_cc_data_pane_t3_ParamLimits

0x99fb,	// (0x000279b6) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x0002def8) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x0002def8) phob2_cc_data_pane_t

0xef9b,	// (0x0002cf56) phob2_cc_list_pane_ParamLimits

0xef9b,	// (0x0002cf56) phob2_cc_list_pane

0xd6c1,	// (0x0002b67c) scroll_pane_cp035_ParamLimits

0xd6c1,	// (0x0002b67c) scroll_pane_cp035

0xa407,	// (0x000283c2) bg_button_pane_cp033

0xefa7,	// (0x0002cf62) phob2_cc_button_pane_g1

0xefb3,	// (0x0002cf6e) phob2_cc_button_pane_t1

0xefc8,	// (0x0002cf83) phob2_cc_button_pane_t2

0x0001,

0x0d41,	// (0x0001ecfc) phob2_cc_button_pane_t

0x9a0d,	// (0x000279c8) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a0d,	// (0x000279c8) list_double_large_graphic_phob2_cc_pane

0x9a36,	// (0x000279f1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a36,	// (0x000279f1) list_double_large_graphic_phob2_cc_pane_g1

0x9a47,	// (0x00027a02) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a47,	// (0x00027a02) list_double_large_graphic_phob2_cc_pane_g2

0x9a53,	// (0x00027a0e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a53,	// (0x00027a0e) list_double_large_graphic_phob2_cc_pane_g3

0x9a5f,	// (0x00027a1a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a5f,	// (0x00027a1a) list_double_large_graphic_phob2_cc_pane_g4

0xefda,	// (0x0002cf95) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xefda,	// (0x0002cf95) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0002deff) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0002deff) list_double_large_graphic_phob2_cc_pane_g

0x9a6b,	// (0x00027a26) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a6b,	// (0x00027a26) list_double_large_graphic_phob2_cc_pane_t1

0x9a94,	// (0x00027a4f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a94,	// (0x00027a4f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0002df0a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0002df0a) list_double_large_graphic_phob2_cc_pane_t

0xefe6,	// (0x0002cfa1) list_highlight_pane_cp025_ParamLimits

0xefe6,	// (0x0002cfa1) list_highlight_pane_cp025

0xa407,	// (0x000283c2) bg_button_pane_cp033_ParamLimits

0xefa7,	// (0x0002cf62) phob2_cc_button_pane_g1_ParamLimits

0xefb3,	// (0x0002cf6e) phob2_cc_button_pane_t1_ParamLimits

0xefc8,	// (0x0002cf83) phob2_cc_button_pane_t2_ParamLimits

0x0d41,	// (0x0001ecfc) phob2_cc_button_pane_t_ParamLimits

0x2790,	// (0x0002074b) popup_wgtman_window

0xd3b4,	// (0x0002b36f) scroll_pane_cp038

0x9480,	// (0x0002743b) wgtman_btn_pane_cp_01_ParamLimits

0x9480,	// (0x0002743b) wgtman_btn_pane_cp_01

0xeff4,	// (0x0002cfaf) wgtman_content_pane

0xeffd,	// (0x0002cfb8) wgtman_heading_pane

0x9bdb,	// (0x00027b96) bg_heading_pane_cp02

0xf006,	// (0x0002cfc1) wgtman_heading_pane_g1

0xf00e,	// (0x0002cfc9) wgtman_heading_pane_t1

0xf01c,	// (0x0002cfd7) scroll_pane_cp036

0xf024,	// (0x0002cfdf) wgtman_list_pane

0xeb1c,	// (0x0002cad7) wgtman_list_pane_t1_ParamLimits

0xeb1c,	// (0x0002cad7) wgtman_list_pane_t1

0x1ef6,	// (0x0001feb1) cam4_grid_pane

0x725c,	// (0x00025217) bg_button_pane_cp015_ParamLimits

0x726e,	// (0x00025229) bg_button_pane_cp016_ParamLimits

0x7281,	// (0x0002523c) bg_button_pane_cp017_ParamLimits

0x72d7,	// (0x00025292) popup_vitu2_query_window_g3_ParamLimits

0x72d7,	// (0x00025292) popup_vitu2_query_window_g3

0x7392,	// (0x0002534d) popup_vitu2_query_window_t6_ParamLimits

0x7392,	// (0x0002534d) popup_vitu2_query_window_t6

0x73bd,	// (0x00025378) popup_vitu2_query_window_t7_ParamLimits

0x73bd,	// (0x00025378) popup_vitu2_query_window_t7

0xe9d4,	// (0x0002c98f) cam4_grid_pane_g1

0xe9dd,	// (0x0002c998) cam4_grid_pane_g2

0xf02c,	// (0x0002cfe7) cam4_grid_pane_g3

0xf035,	// (0x0002cff0) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0002df0f) cam4_grid_pane_g

0x3324,	// (0x000212df) aid_placing_vt_slider_lsc_ParamLimits

0x3664,	// (0x0002161f) vidtel_button_pane_ParamLimits

0x3664,	// (0x0002161f) vidtel_button_pane

0x9bdb,	// (0x00027b96) bg_button_pane_cp034

0xf040,	// (0x0002cffb) vidtel_button_pane_g1

0xf048,	// (0x0002d003) vidtel_button_pane_t1

0xd4b6,	// (0x0002b471) aid_size_vtel_slider_touch

0xd6c1,	// (0x0002b67c) scroll_pane_cp039

0x808b,	// (0x00026046) ncim_query_button_pane_cp01_ParamLimits

0x80aa,	// (0x00026065) ncimui_query_pane_g1_ParamLimits

0xa407,	// (0x000283c2) input_focus_pane_cp012_ParamLimits

0xdea8,	// (0x0002be63) ncim_query_entry_pane_t1_ParamLimits

0xd6c1,	// (0x0002b67c) scroll_pane_cp039_ParamLimits

0xae21,	// (0x00028ddc) navi_pane_bcale_mc_g1

0xae29,	// (0x00028de4) navi_pane_bcale_mc_t1

0xe442,	// (0x0002c3fd) main_sp_fs_email_pane_g1

0xe44e,	// (0x0002c409) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0002dcb3) main_sp_fs_email_pane_g

0xe92b,	// (0x0002c8e6) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe92b,	// (0x0002c8e6) list_single_cale_mrui_row_pane_g3

0x90f8,	// (0x000270b3) list_single_recal_day_pane_g5_event_pane

0xeb37,	// (0x0002caf2) list_single_recal_day_pane_g7

0xf05e,	// (0x0002d019) list_recal_day_event_pane_cp01

0xf067,	// (0x0002d022) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0002d02a) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0002d032) list_recal_vselct_pane_cp01

0xd510,	// (0x0002b4cb) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0002d03c) list_recal_day_event_pane_cp01_t1

0xeb3f,	// (0x0002cafa) list_single_recal_day_pane_t1_ParamLimits

0xeb51,	// (0x0002cb0c) list_single_recal_day_pane_t2_ParamLimits

0xfe50,	// (0x0002de0b) list_single_recal_day_pane_t_ParamLimits

0xa253,	// (0x0002820e) bg_notes_pane_ParamLimits

0xa302,	// (0x000282bd) list_notes_pane_ParamLimits

0x2a14,	// (0x000209cf) scroll_pane_cp06_ParamLimits

0xa324,	// (0x000282df) main_notes_pane_ParamLimits

0x9bdb,	// (0x00027b96) main_welc_pane

0x9abd,	// (0x00027a78) main_welc_body_pane_ParamLimits

0x9abd,	// (0x00027a78) main_welc_body_pane

0x9ad6,	// (0x00027a91) main_welc_opti_pane_ParamLimits

0x9ad6,	// (0x00027a91) main_welc_opti_pane

0x9b09,	// (0x00027ac4) main_welc_pane_t1_ParamLimits

0x9b09,	// (0x00027ac4) main_welc_pane_t1

0x9b23,	// (0x00027ade) main_welc_body_row_pane_ParamLimits

0x9b23,	// (0x00027ade) main_welc_body_row_pane

0xd0f0,	// (0x0002b0ab) main_welc_opti_row_pane_ParamLimits

0xd0f0,	// (0x0002b0ab) main_welc_opti_row_pane

0xf08f,	// (0x0002d04a) main_welc_opti_row_pane_g1

0x9b4c,	// (0x00027b07) main_welc_opti_row_pane_t1

0xf097,	// (0x0002d052) main_welc_body_row_pane_t1

0xedad,	// (0x0002cd68) popup_notif_wgt_heading_pane

0xedc7,	// (0x0002cd82) aid_size_list_notif_wgt_del_ParamLimits

0xedd4,	// (0x0002cd8f) list_notif_wgt_row_pane_g1_ParamLimits

0xede0,	// (0x0002cd9b) list_notif_wgt_row_pane_g2_ParamLimits

0xedef,	// (0x0002cdaa) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb7,	// (0x0002de72) list_notif_wgt_row_pane_g_ParamLimits

0xedfc,	// (0x0002cdb7) list_notif_wgt_row_pane_t1_ParamLimits

0xee12,	// (0x0002cdcd) list_notif_wgt_row_pane_t2_ParamLimits

0xee24,	// (0x0002cddf) list_notif_wgt_row_pane_t3_ParamLimits

0xfebe,	// (0x0002de79) list_notif_wgt_row_pane_t_ParamLimits

0x9513,	// (0x000274ce) listrow_wgtman_pane_g1_ParamLimits

0x9520,	// (0x000274db) listrow_wgtman_pane_g2_ParamLimits

0xfee7,	// (0x0002dea2) listrow_wgtman_pane_g_ParamLimits

0x953e,	// (0x000274f9) listrow_wgtman_pane_t1_ParamLimits

0x9556,	// (0x00027511) listrow_wgtman_pane_t2_ParamLimits

0xfeec,	// (0x0002dea7) listrow_wgtman_pane_t_ParamLimits

0x957c,	// (0x00027537) wait_bar_pane_cp09_ParamLimits

0x9bdb,	// (0x00027b96) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0002d061) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0002d069) popup_notif_wgt_heading_pane_t1

0x9bdb,	// (0x00027b96) main_vids_pane

0x9bdb,	// (0x00027b96) vids_listscroll_pane

0x9b5b,	// (0x00027b16) scroll_pane_cp040

0x9bdb,	// (0x00027b96) vids_list_pane

0x9b66,	// (0x00027b21) vids_list_double_pane_ParamLimits

0x9b66,	// (0x00027b21) vids_list_double_pane

0x9b7e,	// (0x00027b39) vids_list_double_pane_g1

0x9b87,	// (0x00027b42) vids_list_double_pane_t1

0x9b97,	// (0x00027b52) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0002df1d) vids_list_double_pane_t

0x1451,	// (0x0001f40c) main_ncimui_pane_ParamLimits

0x7ee2,	// (0x00025e9d) main_ncimui_pane_g1_ParamLimits

0x7eee,	// (0x00025ea9) main_ncimui_pane_g2_ParamLimits

0x7eee,	// (0x00025ea9) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0002dbb8) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0002dbb8) main_ncimui_pane_g

0x9aef,	// (0x00027aaa) main_welc_pane_g1_ParamLimits

0x9aef,	// (0x00027aaa) main_welc_pane_g1

0x9afb,	// (0x00027ab6) main_welc_pane_g2_ParamLimits

0x9afb,	// (0x00027ab6) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0002df18) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0002df18) main_welc_pane_g

0xa253,	// (0x0002820e) listscroll_mce_pane_ParamLimits

0xaf76,	// (0x00028f31) wait_bar_pane_cp10

0xc3b5,	// (0x0002a370) main_cale_day_pane_ParamLimits

0xc3b5,	// (0x0002a370) main_cale_week_pane_ParamLimits

0xa253,	// (0x0002820e) main_messa_pane_ParamLimits

0x64a3,	// (0x0002445e) main_clock2_btn_pane_ParamLimits

0x64a3,	// (0x0002445e) main_clock2_btn_pane

0xcc13,	// (0x0002abce) main_clock2_btn_pane_cp01_ParamLimits

0xcc13,	// (0x0002abce) main_clock2_btn_pane_cp01

0xe8b7,	// (0x0002c872) list_cale_mrui_pane_ParamLimits

0xee5a,	// (0x0002ce15) main_cf0_pane_g2

0x0001,

0xfec5,	// (0x0002de80) main_cf0_pane_g

0x9723,	// (0x000276de) area_left_week_number_pane_ParamLimits

0x9736,	// (0x000276f1) area_top_day_name_pane_ParamLimits

0x9744,	// (0x000276ff) frame_month_view_pane_ParamLimits

0xef50,	// (0x0002cf0b) grid_month_view_pane_ParamLimits

0xef5e,	// (0x0002cf19) frm_month_g1_ParamLimits

0x97c2,	// (0x0002777d) frm_month_g2_ParamLimits

0x97d3,	// (0x0002778e) frm_month_g3_ParamLimits

0x97e4,	// (0x0002779f) frm_month_g4_ParamLimits

0x97f5,	// (0x000277b0) frm_month_g5_ParamLimits

0x9808,	// (0x000277c3) frm_month_g6_ParamLimits

0x981b,	// (0x000277d6) frm_month_g7_ParamLimits

0xef6b,	// (0x0002cf26) frm_month_g8_ParamLimits

0x982e,	// (0x000277e9) frm_month_g9_ParamLimits

0x983b,	// (0x000277f6) frm_month_g10_ParamLimits

0x9848,	// (0x00027803) frm_month_g11_ParamLimits

0x9855,	// (0x00027810) frm_month_g12_ParamLimits

0x9862,	// (0x0002781d) frm_month_g13_ParamLimits

0x986f,	// (0x0002782a) frm_month_g14_ParamLimits

0x987e,	// (0x00027839) frm_month_g15_ParamLimits

0x988d,	// (0x00027848) frm_month_g16_ParamLimits

0xff0d,	// (0x0002dec8) frm_month_g_ParamLimits

0xef78,	// (0x0002cf33) cell_top_day_name_pane_t1_ParamLimits

0x989c,	// (0x00027857) cell_area_left_week_number_pane_g1_ParamLimits

0x98ab,	// (0x00027866) cell_area_left_week_number_pane_t1_ParamLimits

0xca17,	// (0x0002a9d2) cell_month_view_pane_g1_ParamLimits

0x98c1,	// (0x0002787c) cell_month_view_pane_t1_ParamLimits

0xa24b,	// (0x00028206) main_clock2_btn_pane_g1

0xf0bc,	// (0x0002d077) main_clock2_btn_pane_t1

0xa407,	// (0x000283c2) listscroll_cmail_pane_ParamLimits

0xe442,	// (0x0002c3fd) main_sp_fs_email_pane_g1_ParamLimits

0xe44e,	// (0x0002c409) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0002dcb3) main_sp_fs_email_pane_g_ParamLimits

0xea8c,	// (0x0002ca47) list_recal_day_pane_ParamLimits

0xea9d,	// (0x0002ca58) mian_recal_day_pane_t1

0x8910,	// (0x000268cb) list_single_dyc_row_text_pane_t4_ParamLimits

0x8910,	// (0x000268cb) list_single_dyc_row_text_pane_t4

0x8947,	// (0x00026902) list_single_dyc_row_text_pane_t5_ParamLimits

0x8947,	// (0x00026902) list_single_dyc_row_text_pane_t5

0xe4f0,	// (0x0002c4ab) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4f0,	// (0x0002c4ab) list_single_dyc_row_text_pane_t6

0x44ad,	// (0x00022468) aid_mgn_list_cale_time_pane

0x1451,	// (0x0001f40c) main_gallery2_pane_ParamLimits

0xcc29,	// (0x0002abe4) main_clock2_pane_cp01_t1

0xcc37,	// (0x0002abf2) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0002d792) main_clock2_pane_cp01_t

0x2d2c,	// (0x00020ce7) cale_week_scroll_pane_g16_ParamLimits

0x2d2c,	// (0x00020ce7) cale_week_scroll_pane_g16

0xa517,	// (0x000284d2) vorec_slider_pane

0xf048,	// (0x0002d003) vidtel_button_pane_t1_ParamLimits

0x9153,	// (0x0002710e) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9153,	// (0x0002710e) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9160,	// (0x0002711b) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9160,	// (0x0002711b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe73,	// (0x0002de2e) main_fs_bigclock_clock_pane_g_ParamLimits

0x916c,	// (0x00027127) main_fs_bigclock_clock_pane_t1_ParamLimits

0x917f,	// (0x0002713a) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe7c,	// (0x0002de37) main_fs_bigclock_clock_pane_t_ParamLimits

0x5d46,	// (0x00023d01) main_mup3_lyrics_pane_ParamLimits

0x5d46,	// (0x00023d01) main_mup3_lyrics_pane

0x9ba5,	// (0x00027b60) main_mup3_lyrics_pane_t1_ParamLimits

0x9ba5,	// (0x00027b60) main_mup3_lyrics_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
