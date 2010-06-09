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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00089f08 };

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
0x11d3,	// (0x0008b0db) Screen

0x11df,	// (0x0008b0e7) application_window

0x122b,	// (0x0008b133) area_bottom_pane_ParamLimits

0x122b,	// (0x0008b133) area_bottom_pane

0x1264,	// (0x0008b16c) area_top_pane_ParamLimits

0x1264,	// (0x0008b16c) area_top_pane

0x96e7,	// (0x000935ef) call_video_uplink_pane_ParamLimits

0x96e7,	// (0x000935ef) call_video_uplink_pane

0x12f2,	// (0x0008b1fa) main_pane_ParamLimits

0x12f2,	// (0x0008b1fa) main_pane

0xc8fb,	// (0x00096803) context_pane

0x4417,	// (0x0008e31f) navi_pane

0x4449,	// (0x0008e351) popup_cale_events_window_ParamLimits

0x4449,	// (0x0008e351) popup_cale_events_window

0xc90e,	// (0x00096816) popup_mup_playback_window

0x4461,	// (0x0008e369) signal_pane

0xa83e,	// (0x00094746) main_browser_pane

0xaa15,	// (0x0009491d) main_burst_pane

0x417f,	// (0x0008e087) main_calc_pane

0xc8e1,	// (0x000967e9) main_cale_day_pane

0x1910,	// (0x0008b818) main_cale_month_pane

0xc8e1,	// (0x000967e9) main_cale_week_pane

0xaa15,	// (0x0009491d) main_call_pane

0xa512,	// (0x0009441a) main_call_poc_pane

0xaa15,	// (0x0009491d) main_camera_pane

0xaa15,	// (0x0009491d) main_chi_dic_pane

0xb244,	// (0x0009514c) main_clock_pane

0xa512,	// (0x0009441a) main_fmradio_pane

0xaa15,	// (0x0009491d) main_graph_messa_pane

0xa512,	// (0x0009441a) main_help_pane

0xa83e,	// (0x00094746) main_im_pane

0xa76d,	// (0x00094675) main_image_pane_ParamLimits

0xa76d,	// (0x00094675) main_image_pane

0xa512,	// (0x0009441a) main_location2_pane

0xaa15,	// (0x0009491d) main_location_pane

0xa76d,	// (0x00094675) main_messa_pane

0xa512,	// (0x0009441a) main_mp2_pane

0xaa15,	// (0x0009491d) main_mp_pane

0xa512,	// (0x0009441a) main_msg_pane

0xa512,	// (0x0009441a) main_mup_eq_pane

0xa512,	// (0x0009441a) main_mup_pane

0xa83e,	// (0x00094746) main_notes_pane

0xa512,	// (0x0009441a) main_pec_pane

0xa512,	// (0x0009441a) main_phob_pane

0xa512,	// (0x0009441a) main_pinb_pane

0xa512,	// (0x0009441a) main_postcard_pane

0xa512,	// (0x0009441a) main_qdial_pane

0xaa15,	// (0x0009491d) main_skin_pane

0xa512,	// (0x0009441a) main_smil2_pane

0xaa15,	// (0x0009491d) main_smil_pane

0xaa15,	// (0x0009491d) main_video_pane

0xaa15,	// (0x0009491d) main_video_tele_pane

0xa76d,	// (0x00094675) main_viewer_pane_ParamLimits

0xa76d,	// (0x00094675) main_viewer_pane

0xaa15,	// (0x0009491d) main_vorec_pane

0x41d3,	// (0x0008e0db) popup_blid_sat_info_window_ParamLimits

0x41d3,	// (0x0008e0db) popup_blid_sat_info_window

0x422b,	// (0x0008e133) popup_dyc_status_message_window_ParamLimits

0x422b,	// (0x0008e133) popup_dyc_status_message_window

0x4243,	// (0x0008e14b) popup_grid_large_graphic_window_ParamLimits

0x4243,	// (0x0008e14b) popup_grid_large_graphic_window

0x42f3,	// (0x0008e1fb) popup_loc_request_window_ParamLimits

0x42f3,	// (0x0008e1fb) popup_loc_request_window

0x43ef,	// (0x0008e2f7) popup_wml_address_window_ParamLimits

0x43ef,	// (0x0008e2f7) popup_wml_address_window

0x3fb9,	// (0x0008dec1) call_muted_g1

0x3c6d,	// (0x0008db75) popup_call_audio_conf_window_ParamLimits

0x3c6d,	// (0x0008db75) popup_call_audio_conf_window

0x3fcd,	// (0x0008ded5) popup_call_audio_first_window_ParamLimits

0x3fcd,	// (0x0008ded5) popup_call_audio_first_window

0x4043,	// (0x0008df4b) popup_call_audio_in_window_ParamLimits

0x4043,	// (0x0008df4b) popup_call_audio_in_window

0x407f,	// (0x0008df87) popup_call_audio_out_window_ParamLimits

0x407f,	// (0x0008df87) popup_call_audio_out_window

0x40b9,	// (0x0008dfc1) popup_call_audio_second_window_ParamLimits

0x40b9,	// (0x0008dfc1) popup_call_audio_second_window

0x410f,	// (0x0008e017) popup_call_audio_wait_window_ParamLimits

0x410f,	// (0x0008e017) popup_call_audio_wait_window

0x4144,	// (0x0008e04c) popup_number_entry_window_ParamLimits

0x4144,	// (0x0008e04c) popup_number_entry_window

0xa0ff,	// (0x00094007) bg_popup_call_pane_cp05_ParamLimits

0xa0ff,	// (0x00094007) bg_popup_call_pane_cp05

0xa11f,	// (0x00094027) popup_number_entry_window_t1

0xa132,	// (0x0009403a) popup_number_entry_window_t2

0xa144,	// (0x0009404c) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x00098fd2) popup_number_entry_window_t

0xa156,	// (0x0009405e) text_title_cp2

0xa169,	// (0x00094071) bg_popup_call_pane_cp_ParamLimits

0xa169,	// (0x00094071) bg_popup_call_pane_cp

0xa177,	// (0x0009407f) call_thumbnail_pane

0xa17f,	// (0x00094087) popup_call_audio_in_window_g1_ParamLimits

0xa17f,	// (0x00094087) popup_call_audio_in_window_g1

0xa18b,	// (0x00094093) popup_call_audio_in_window_g2_ParamLimits

0xa18b,	// (0x00094093) popup_call_audio_in_window_g2

0xa197,	// (0x0009409f) popup_call_audio_in_window_g3_ParamLimits

0xa197,	// (0x0009409f) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x00098fdb) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x00098fdb) popup_call_audio_in_window_g

0xa1a3,	// (0x000940ab) popup_call_audio_in_window_t1_ParamLimits

0xa1a3,	// (0x000940ab) popup_call_audio_in_window_t1

0xa1bf,	// (0x000940c7) popup_call_audio_in_window_t2_ParamLimits

0xa1bf,	// (0x000940c7) popup_call_audio_in_window_t2

0xa1db,	// (0x000940e3) popup_call_audio_in_window_t3_ParamLimits

0xa1db,	// (0x000940e3) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x00098fe2) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x00098fe2) popup_call_audio_in_window_t

0xa169,	// (0x00094071) bg_popup_call_pane_cp01_ParamLimits

0xa169,	// (0x00094071) bg_popup_call_pane_cp01

0xa177,	// (0x0009407f) call_thumbnail_pane_cp02

0xa1ee,	// (0x000940f6) call_type_pane_cp022

0xa1f6,	// (0x000940fe) popup_call_audio_out_window_g1_ParamLimits

0xa1f6,	// (0x000940fe) popup_call_audio_out_window_g1

0xa208,	// (0x00094110) popup_call_audio_out_window_g2_ParamLimits

0xa208,	// (0x00094110) popup_call_audio_out_window_g2

0xa214,	// (0x0009411c) popup_call_audio_out_window_g3_ParamLimits

0xa214,	// (0x0009411c) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x00098fe9) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x00098fe9) popup_call_audio_out_window_g

0xa226,	// (0x0009412e) popup_call_audio_out_window_t1_ParamLimits

0xa226,	// (0x0009412e) popup_call_audio_out_window_t1

0xa23e,	// (0x00094146) popup_call_audio_out_window_t2_ParamLimits

0xa23e,	// (0x00094146) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x00098ff0) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x00098ff0) popup_call_audio_out_window_t

0xa253,	// (0x0009415b) bg_popup_call_pane_ParamLimits

0xa253,	// (0x0009415b) bg_popup_call_pane

0x14af,	// (0x0008b3b7) call_thumbnail_pane_cp_ParamLimits

0x14af,	// (0x0008b3b7) call_thumbnail_pane_cp

0xa2d7,	// (0x000941df) call_type_pane_cp01_ParamLimits

0xa2d7,	// (0x000941df) call_type_pane_cp01

0xa31b,	// (0x00094223) popup_call_audio_first_window_g1_ParamLimits

0xa31b,	// (0x00094223) popup_call_audio_first_window_g1

0xa367,	// (0x0009426f) popup_call_audio_first_window_g2_ParamLimits

0xa367,	// (0x0009426f) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x00098ff5) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x00098ff5) popup_call_audio_first_window_g

0xa3ab,	// (0x000942b3) popup_call_audio_first_window_t1_ParamLimits

0xa3ab,	// (0x000942b3) popup_call_audio_first_window_t1

0xa457,	// (0x0009435f) popup_call_audio_first_window_t4_ParamLimits

0xa457,	// (0x0009435f) popup_call_audio_first_window_t4

0xa4e3,	// (0x000943eb) popup_call_audio_first_window_t5_ParamLimits

0xa4e3,	// (0x000943eb) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x00098ffa) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x00098ffa) popup_call_audio_first_window_t

0xa512,	// (0x0009441a) bg_popup_call_pane_cp02

0xa51c,	// (0x00094424) call_type_pane_cp023

0xa524,	// (0x0009442c) popup_call_audio_wait_window_g1

0xa52c,	// (0x00094434) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00099001) popup_call_audio_wait_window_g

0xa534,	// (0x0009443c) popup_call_audio_wait_window_t3

0xa542,	// (0x0009444a) bg_popup_call_pane_cp03_ParamLimits

0xa542,	// (0x0009444a) bg_popup_call_pane_cp03

0xa5a2,	// (0x000944aa) call_thumbnail_pane_cp011_ParamLimits

0xa5a2,	// (0x000944aa) call_thumbnail_pane_cp011

0xa5ae,	// (0x000944b6) call_type_pane_cp034_ParamLimits

0xa5ae,	// (0x000944b6) call_type_pane_cp034

0xa5ea,	// (0x000944f2) popup_call_audio_second_window_g1_ParamLimits

0xa5ea,	// (0x000944f2) popup_call_audio_second_window_g1

0xa626,	// (0x0009452e) popup_call_audio_second_window_g2_ParamLimits

0xa626,	// (0x0009452e) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x00099006) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x00099006) popup_call_audio_second_window_g

0xa662,	// (0x0009456a) popup_call_audio_second_window_t1_ParamLimits

0xa662,	// (0x0009456a) popup_call_audio_second_window_t1

0xa6e3,	// (0x000945eb) popup_call_audio_second_window_t2_ParamLimits

0xa6e3,	// (0x000945eb) popup_call_audio_second_window_t2

0xa719,	// (0x00094621) popup_call_audio_second_window_t3_ParamLimits

0xa719,	// (0x00094621) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0009900b) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0009900b) popup_call_audio_second_window_t

0xa512,	// (0x0009441a) bg_popup_call_pane_cp04

0xa74f,	// (0x00094657) list_conf_pane

0xa757,	// (0x0009465f) popup_call_audio_conf_window_t1

0xa765,	// (0x0009466d) call_thumbnail_pane_g1

0xa76d,	// (0x00094675) bg_pinb_pane_ParamLimits

0xa76d,	// (0x00094675) bg_pinb_pane

0xa77b,	// (0x00094683) find_pinb_pane

0xa784,	// (0x0009468c) listscroll_pinb_pane_ParamLimits

0xa784,	// (0x0009468c) listscroll_pinb_pane

0xa793,	// (0x0009469b) pinb_bg_pane_g1

0x14d3,	// (0x0008b3db) pinb_bg_pane_g2

0x14df,	// (0x0008b3e7) pinb_bg_pane_g3

0x14eb,	// (0x0008b3f3) pinb_bg_pane_g4

0x14f7,	// (0x0008b3ff) pinb_bg_pane_g5

0x1503,	// (0x0008b40b) pinb_bg_pane_g6

0x150e,	// (0x0008b416) pinb_bg_pane_g7

0x1519,	// (0x0008b421) pinb_bg_pane_g8

0x1524,	// (0x0008b42c) pinb_bg_pane_g9

0x152e,	// (0x0008b436) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x00099012) pinb_bg_pane_g

0x154b,	// (0x0008b453) grid_pinb_pane

0x1554,	// (0x0008b45c) list_pinb_pane

0x155d,	// (0x0008b465) scroll_pane_cp01_ParamLimits

0x155d,	// (0x0008b465) scroll_pane_cp01

0xa79d,	// (0x000946a5) find_pinb_pane_g1_ParamLimits

0xa79d,	// (0x000946a5) find_pinb_pane_g1

0xa7b5,	// (0x000946bd) find_pinb_pane_t1

0xa7c7,	// (0x000946cf) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0009902c) find_pinb_pane_t

0xa7dc,	// (0x000946e4) input_focus_pane_cp01_ParamLimits

0xa7dc,	// (0x000946e4) input_focus_pane_cp01

0x156f,	// (0x0008b477) cell_pinb_pane_ParamLimits

0x156f,	// (0x0008b477) cell_pinb_pane

0x159a,	// (0x0008b4a2) cell_pinb_pane_g1_ParamLimits

0x159a,	// (0x0008b4a2) cell_pinb_pane_g1

0xa7e8,	// (0x000946f0) cell_pinb_pane_g2_ParamLimits

0xa7e8,	// (0x000946f0) cell_pinb_pane_g2

0xa7f4,	// (0x000946fc) cell_pinb_pane_g3_ParamLimits

0xa7f4,	// (0x000946fc) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x00099031) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x00099031) cell_pinb_pane_g

0xa512,	// (0x0009441a) grid_highlight_pane_cp01

0x15ad,	// (0x0008b4b5) list_pinb_item_pane_ParamLimits

0x15ad,	// (0x0008b4b5) list_pinb_item_pane

0xa512,	// (0x0009441a) list_highlight_pane_cp02

0x15c0,	// (0x0008b4c8) list_pinb_item_pane_g1_ParamLimits

0x15c0,	// (0x0008b4c8) list_pinb_item_pane_g1

0x15cd,	// (0x0008b4d5) list_pinb_item_pane_g2_ParamLimits

0x15cd,	// (0x0008b4d5) list_pinb_item_pane_g2

0x15d9,	// (0x0008b4e1) list_pinb_item_pane_g3_ParamLimits

0x15d9,	// (0x0008b4e1) list_pinb_item_pane_g3

0x15ea,	// (0x0008b4f2) list_pinb_item_pane_g4_ParamLimits

0x15ea,	// (0x0008b4f2) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x00099038) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x00099038) list_pinb_item_pane_g

0x15f6,	// (0x0008b4fe) list_pinb_item_pane_t1_ParamLimits

0x15f6,	// (0x0008b4fe) list_pinb_item_pane_t1

0x162b,	// (0x0008b533) calc_display_pane

0x1653,	// (0x0008b55b) calc_paper_pane

0x1676,	// (0x0008b57e) grid_calc_pane

0xa512,	// (0x0009441a) bg_list_pane_cp01

0x16a4,	// (0x0008b5ac) clock_g1

0x16ac,	// (0x0008b5b4) clock_g2

0x0001,

0xf139,	// (0x00099041) clock_g

0x16b4,	// (0x0008b5bc) clock_t1_ParamLimits

0x16b4,	// (0x0008b5bc) clock_t1

0x16c9,	// (0x0008b5d1) clock_t2_ParamLimits

0x16c9,	// (0x0008b5d1) clock_t2

0x16db,	// (0x0008b5e3) clock_t3_ParamLimits

0x16db,	// (0x0008b5e3) clock_t3

0x16ed,	// (0x0008b5f5) clock_t4_ParamLimits

0x16ed,	// (0x0008b5f5) clock_t4

0x16ff,	// (0x0008b607) clock_t5_ParamLimits

0x16ff,	// (0x0008b607) clock_t5

0x1714,	// (0x0008b61c) clock_t6_ParamLimits

0x1714,	// (0x0008b61c) clock_t6

0x1726,	// (0x0008b62e) clock_t7_ParamLimits

0x1726,	// (0x0008b62e) clock_t7

0x1738,	// (0x0008b640) clock_t8_ParamLimits

0x1738,	// (0x0008b640) clock_t8

0x174c,	// (0x0008b654) clock_t9_ParamLimits

0x174c,	// (0x0008b654) clock_t9

0x0008,

0xf13e,	// (0x00099046) clock_t_ParamLimits

0xf13e,	// (0x00099046) clock_t

0xa800,	// (0x00094708) popup_clock_analogue_window_cp02

0xa800,	// (0x00094708) popup_clock_digital_window_cp01

0xa808,	// (0x00094710) listscroll_help_pane

0xa512,	// (0x0009441a) phob_pre_status_pane

0xa812,	// (0x0009471a) grid_qdial_pane

0xa76d,	// (0x00094675) listscroll_mce_pane

0xa76d,	// (0x00094675) bg_notes_pane

0xa81c,	// (0x00094724) list_notes_pane

0x1760,	// (0x0008b668) scroll_pane_cp06

0xa82a,	// (0x00094732) bg_calc_paper_pane

0x970d,	// (0x00093615) list_calc_pane

0xa83e,	// (0x00094746) bg_calc_display_pane

0x1774,	// (0x0008b67c) calc_display_pane_t1

0x1786,	// (0x0008b68e) calc_display_pane_t2

0x9727,	// (0x0009362f) calc_display_pane_t3

0x0002,

0xf151,	// (0x00099059) calc_display_pane_t

0x1798,	// (0x0008b6a0) cell_calc_pane_ParamLimits

0x1798,	// (0x0008b6a0) cell_calc_pane

0xa84a,	// (0x00094752) bg_calc_paper_pane_g1

0xa856,	// (0x0009475e) bg_calc_paper_pane_g2

0xa862,	// (0x0009476a) bg_calc_paper_pane_g3

0xa86e,	// (0x00094776) bg_calc_paper_pane_g4

0xa87a,	// (0x00094782) bg_calc_paper_pane_g5

0x17cf,	// (0x0008b6d7) bg_calc_paper_pane_g6

0x17de,	// (0x0008b6e6) bg_calc_paper_pane_g7

0x17ed,	// (0x0008b6f5) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x00099060) bg_calc_paper_pane_g

0x1800,	// (0x0008b708) calc_bg_paper_pane_g9

0x1813,	// (0x0008b71b) list_calc_item_pane_ParamLimits

0x1813,	// (0x0008b71b) list_calc_item_pane

0xa886,	// (0x0009478e) list_calc_item_pane_g1

0x9739,	// (0x00093641) list_calc_item_pane_t1_ParamLimits

0x9739,	// (0x00093641) list_calc_item_pane_t1

0x182c,	// (0x0008b734) list_calc_item_pane_t2_ParamLimits

0x182c,	// (0x0008b734) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x00099071) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x00099071) list_calc_item_pane_t

0xa893,	// (0x0009479b) cell_calc_pane_g1

0xa89d,	// (0x000947a5) grid_highlight_pane_cp02

0xa8bf,	// (0x000947c7) bg_calc_display_pane_g1

0x974b,	// (0x00093653) bg_calc_display_pane_g2

0xa8c8,	// (0x000947d0) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0009907b) bg_calc_display_pane_g

0x185e,	// (0x0008b766) cell_qdial_pane_ParamLimits

0x185e,	// (0x0008b766) cell_qdial_pane

0x1872,	// (0x0008b77a) cell_qdial_pane_g1_ParamLimits

0x1872,	// (0x0008b77a) cell_qdial_pane_g1

0x1888,	// (0x0008b790) cell_qdial_pane_g2_ParamLimits

0x1888,	// (0x0008b790) cell_qdial_pane_g2

0xa8d1,	// (0x000947d9) cell_qdial_pane_g3_ParamLimits

0xa8d1,	// (0x000947d9) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x00099082) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x00099082) cell_qdial_pane_g

0x18ae,	// (0x0008b7b6) cell_qdial_pane_t1_ParamLimits

0x18ae,	// (0x0008b7b6) cell_qdial_pane_t1

0x18c6,	// (0x0008b7ce) cell_qdial_pane_t2_ParamLimits

0x18c6,	// (0x0008b7ce) cell_qdial_pane_t2

0x18d9,	// (0x0008b7e1) cell_qdial_pane_t3_ParamLimits

0x18d9,	// (0x0008b7e1) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0009908b) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0009908b) cell_qdial_pane_t

0xa512,	// (0x0009441a) grid_highlight_pane_cp04

0xa8dd,	// (0x000947e5) thumbnail_qdial_pane_ParamLimits

0xa8dd,	// (0x000947e5) thumbnail_qdial_pane

0xa939,	// (0x00094841) list_help_pane

0xa942,	// (0x0009484a) scroll_pane_cp02

0xab2a,	// (0x00094a32) help_list_pane_t1_ParamLimits

0xab2a,	// (0x00094a32) help_list_pane_t1

0x9755,	// (0x0009365d) bg_notes_pane_g2

0x975d,	// (0x00093665) bg_notes_pane_g3

0x9765,	// (0x0009366d) notes_bg_pane_g1

0x976d,	// (0x00093675) notes_bg_pane_g4

0x9775,	// (0x0009367d) notes_bg_pane_g5

0x977d,	// (0x00093685) notes_bg_pane_g6

0x9785,	// (0x0009368d) notes_bg_pane_g7

0x978d,	// (0x00093695) notes_bg_pane_g8

0x9795,	// (0x0009369d) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000990a9) notes_bg_pane_g

0x18ec,	// (0x0008b7f4) list_notes_text_pane_ParamLimits

0x18ec,	// (0x0008b7f4) list_notes_text_pane

0xa94b,	// (0x00094853) list_notes_text_pane_g1

0x1902,	// (0x0008b80a) list_notes_text_pane_t1

0x1910,	// (0x0008b818) listscroll_cale_week_pane

0x193c,	// (0x0008b844) bg_cale_heading_pane

0xa96e,	// (0x00094876) bg_cale_pane_cp01

0x1954,	// (0x0008b85c) cale_week_corner_pane

0x1973,	// (0x0008b87b) cale_week_day_heading_pane

0x1990,	// (0x0008b898) cale_week_scroll_pane_g1

0x19a3,	// (0x0008b8ab) cale_week_scroll_pane_g2

0x19bb,	// (0x0008b8c3) cale_week_scroll_pane_g3

0x19d3,	// (0x0008b8db) cale_week_scroll_pane_g4

0x19eb,	// (0x0008b8f3) cale_week_scroll_pane_g5

0x1a0b,	// (0x0008b913) cale_week_scroll_pane_g6

0x1a2b,	// (0x0008b933) cale_week_scroll_pane_g7

0x1a4b,	// (0x0008b953) cale_week_scroll_pane_g8

0x1a6f,	// (0x0008b977) cale_week_scroll_pane_g9

0x1a87,	// (0x0008b98f) cale_week_scroll_pane_g10

0x1a9f,	// (0x0008b9a7) cale_week_scroll_pane_g11

0x1ab7,	// (0x0008b9bf) cale_week_scroll_pane_g12

0x1acf,	// (0x0008b9d7) cale_week_scroll_pane_g13

0x1acf,	// (0x0008b9d7) cale_week_scroll_pane_g14

0x1acf,	// (0x0008b9d7) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000990b8) cale_week_scroll_pane_g

0x1b0b,	// (0x0008ba13) cale_week_time_pane

0x1b2f,	// (0x0008ba37) grid_cale_week_pane

0xa99d,	// (0x000948a5) scroll_pane_cp08

0x1b55,	// (0x0008ba5d) cell_cale_week_pane_ParamLimits

0x1b55,	// (0x0008ba5d) cell_cale_week_pane

0x1be3,	// (0x0008baeb) cale_week_day_heading_pane_t1

0x1c0d,	// (0x0008bb15) cale_week_day_heading_pane_t2

0x1c3c,	// (0x0008bb44) cale_week_day_heading_pane_t3

0x1c6b,	// (0x0008bb73) cale_week_day_heading_pane_t4

0x1c9a,	// (0x0008bba2) cale_week_day_heading_pane_t5

0x1cd1,	// (0x0008bbd9) cale_week_day_heading_pane_t6

0x1d08,	// (0x0008bc10) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000990d9) cale_week_day_heading_pane_t

0xa9ba,	// (0x000948c2) bg_cale_side_pane

0x1d32,	// (0x0008bc3a) cale_week_time_pane_t1

0x1d4c,	// (0x0008bc54) cale_week_time_pane_t2

0x1d66,	// (0x0008bc6e) cale_week_time_pane_t3

0x1d80,	// (0x0008bc88) cale_week_time_pane_t4

0x1d9a,	// (0x0008bca2) cale_week_time_pane_t5

0x1db4,	// (0x0008bcbc) cale_week_time_pane_t6

0x1dce,	// (0x0008bcd6) cale_week_time_pane_t7

0x1de8,	// (0x0008bcf0) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000990e8) cale_week_time_pane_t

0x1e08,	// (0x0008bd10) cell_cale_week_pane_g2

0x1e2c,	// (0x0008bd34) cell_cale_week_pane_g3_ParamLimits

0x1e2c,	// (0x0008bd34) cell_cale_week_pane_g3

0xa9c8,	// (0x000948d0) grid_highlight_pane_cp07

0xa9d0,	// (0x000948d8) listscroll_gms_pane

0xa9da,	// (0x000948e2) grid_gms_pane

0xa9e3,	// (0x000948eb) listscroll_gms_pane_g1

0xa9eb,	// (0x000948f3) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000990f9) listscroll_gms_pane_g

0x1e44,	// (0x0008bd4c) scroll_pane_cp010

0x1e4f,	// (0x0008bd57) cell_gms_pane_ParamLimits

0x1e4f,	// (0x0008bd57) cell_gms_pane

0x1e61,	// (0x0008bd69) cell_gms_pane_g1

0xa9f3,	// (0x000948fb) cell_gms_pane_g2

0xa9fb,	// (0x00094903) cell_gms_pane_g3

0xaa04,	// (0x0009490c) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000990fe) cell_gms_pane_g

0xaa0d,	// (0x00094915) grid_highlight_pane_cp09

0x3f63,	// (0x0008de6b) phob_pre_status_pane_g1

0x3f6b,	// (0x0008de73) phob_pre_status_pane_g2

0x3f73,	// (0x0008de7b) phob_pre_status_pane_g3

0x3f7b,	// (0x0008de83) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x000994fc) phob_pre_status_pane_g

0x3f8b,	// (0x0008de93) phob_pre_status_pane_t1

0x3f99,	// (0x0008dea1) phob_pre_status_pane_t2

0x3fa9,	// (0x0008deb1) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x00099507) phob_pre_status_pane_t

0xaa15,	// (0x0009491d) bg_list_pane_cp05

0x1e71,	// (0x0008bd79) grid_vorec_pane

0x1e79,	// (0x0008bd81) vorec_t1

0x1e87,	// (0x0008bd8f) vorec_t2

0x1e95,	// (0x0008bd9d) vorec_t3

0x1ea3,	// (0x0008bdab) vorec_t4

0x9665,	// (0x0009356d) vorec_t5

0x9673,	// (0x0009357b) vorec_t6

0x0004,

0xf1ff,	// (0x00099107) vorec_t

0x9681,	// (0x00093589) wait_bar_pane_cp01

0x1ebf,	// (0x0008bdc7) cell_vorec_pane_ParamLimits

0x1ebf,	// (0x0008bdc7) cell_vorec_pane

0x979d,	// (0x000936a5) cell_vorec_pane_g1

0xa512,	// (0x0009441a) grid_highlight_pane_cp05

0x1eea,	// (0x0008bdf2) cams_zoom_pane

0x1ef9,	// (0x0008be01) image_vga_pane

0x1f13,	// (0x0008be1b) main_camera_pane_g1

0x1f25,	// (0x0008be2d) main_camera_pane_g2

0x1f35,	// (0x0008be3d) main_camera_pane_g3

0x1f45,	// (0x0008be4d) main_camera_pane_g4

0x1f55,	// (0x0008be5d) main_camera_pane_g5

0x1f65,	// (0x0008be6d) main_camera_pane_g6

0x1f75,	// (0x0008be7d) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00099112) main_camera_pane_g

0x1f85,	// (0x0008be8d) main_camera_pane_t1

0x1f9b,	// (0x0008bea3) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00099123) main_camera_pane_t

0x1fd5,	// (0x0008bedd) cams_zoom_pane_cp_ParamLimits

0x1fd5,	// (0x0008bedd) cams_zoom_pane_cp

0x1ffd,	// (0x0008bf05) image_cif_pane_ParamLimits

0x1ffd,	// (0x0008bf05) image_cif_pane

0x2038,	// (0x0008bf40) image_subqcif_pane

0x2040,	// (0x0008bf48) main_video_pane_g1_ParamLimits

0x2040,	// (0x0008bf48) main_video_pane_g1

0x2064,	// (0x0008bf6c) main_video_pane_g2_ParamLimits

0x2064,	// (0x0008bf6c) main_video_pane_g2

0x2098,	// (0x0008bfa0) main_video_pane_g3_ParamLimits

0x2098,	// (0x0008bfa0) main_video_pane_g3

0x20c6,	// (0x0008bfce) main_video_pane_g4_ParamLimits

0x20c6,	// (0x0008bfce) main_video_pane_g4

0x20f4,	// (0x0008bffc) main_video_pane_g5_ParamLimits

0x20f4,	// (0x0008bffc) main_video_pane_g5

0xaa29,	// (0x00094931) main_video_pane_g6_ParamLimits

0xaa29,	// (0x00094931) main_video_pane_g6

0x0006,

0xf220,	// (0x00099128) main_video_pane_g_ParamLimits

0xf220,	// (0x00099128) main_video_pane_g

0x211d,	// (0x0008c025) main_video_pane_t1_ParamLimits

0x211d,	// (0x0008c025) main_video_pane_t1

0xaa43,	// (0x0009494b) cams_zoom_pane_g1

0xaa4c,	// (0x00094954) cams_zoom_pane_g2

0xaa55,	// (0x0009495d) cams_zoom_pane_g3

0xaa5e,	// (0x00094966) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x00099137) cams_zoom_pane_g

0x217a,	// (0x0008c082) grid_cams_pane

0x2194,	// (0x0008c09c) linegrid_cams_pane

0x21a7,	// (0x0008c0af) cell_cams_pane_ParamLimits

0x21a7,	// (0x0008c0af) cell_cams_pane

0xaa67,	// (0x0009496f) cams_burst_image_pane

0xaa6f,	// (0x00094977) cell_cams_pane_g1

0xa512,	// (0x0009441a) grid_highlight_pane_cp03

0xa893,	// (0x0009479b) mp_bg_pane_g1

0xa512,	// (0x0009441a) bg_list_pane_cp03

0xc806,	// (0x0009670e) bg_mp_pane

0xc80e,	// (0x00096716) grid_mp_pane

0xc816,	// (0x0009671e) media_player_g1

0xc81e,	// (0x00096726) media_player_t1

0xc82c,	// (0x00096734) media_player_t2

0xc83a,	// (0x00096742) media_player_t3

0xc848,	// (0x00096750) media_player_t4

0xc856,	// (0x0009675e) media_player_t5

0xc864,	// (0x0009676c) media_player_t6

0xc872,	// (0x0009677a) media_player_t7

0x0006,

0xf5de,	// (0x000994e6) media_player_t

0xc880,	// (0x00096788) wait_bar_pane_cp02

0xf5c3,	// (0x000994cb) main_usb_pane_t

0x3f5a,	// (0x0008de62) cell_mp_pane

0xa893,	// (0x0009479b) cell_mp_pane_g1

0xa512,	// (0x0009441a) grid_highlight_pane_cp06

0xaa77,	// (0x0009497f) grid_skin_colour_pane

0xaa7f,	// (0x00094987) list_highlight_pane_cp03

0x21df,	// (0x0008c0e7) skin_g1

0xaa87,	// (0x0009498f) skin_t1

0xaa96,	// (0x0009499e) skin_t2

0x0001,

0xf264,	// (0x0009916c) skin_t

0x21e7,	// (0x0008c0ef) cell_skin_colour_pane_ParamLimits

0x21e7,	// (0x0008c0ef) cell_skin_colour_pane

0xaaa4,	// (0x000949ac) cell_skin_colour_pane_g1

0x2260,	// (0x0008c168) call_video_g1_ParamLimits

0x2260,	// (0x0008c168) call_video_g1

0x227c,	// (0x0008c184) call_video_g2_ParamLimits

0x227c,	// (0x0008c184) call_video_g2

0x0001,

0xf269,	// (0x00099171) call_video_g_ParamLimits

0xf269,	// (0x00099171) call_video_g

0x22ce,	// (0x0008c1d6) call_video_uplink_pane_cp1_ParamLimits

0x22ce,	// (0x0008c1d6) call_video_uplink_pane_cp1

0xaab6,	// (0x000949be) call_video_uplink_pane_cp2

0x236d,	// (0x0008c275) video_down_crop_pane_ParamLimits

0x236d,	// (0x0008c275) video_down_crop_pane

0x2456,	// (0x0008c35e) video_down_pane_ParamLimits

0x2456,	// (0x0008c35e) video_down_pane

0xaabe,	// (0x000949c6) video_down_subqcif_pane_ParamLimits

0xaabe,	// (0x000949c6) video_down_subqcif_pane

0xaad6,	// (0x000949de) video_down_subqcif_pane_cp_ParamLimits

0xaad6,	// (0x000949de) video_down_subqcif_pane_cp

0xab48,	// (0x00094a50) im_reading_pane_ParamLimits

0xab48,	// (0x00094a50) im_reading_pane

0x2566,	// (0x0008c46e) im_writing_pane_ParamLimits

0x2566,	// (0x0008c46e) im_writing_pane

0x257c,	// (0x0008c484) im_reading_pane_t1

0xab62,	// (0x00094a6a) list_im_pane

0xab73,	// (0x00094a7b) scroll_pane_cp07

0x25b6,	// (0x0008c4be) im_writing_pane_t1_ParamLimits

0x25b6,	// (0x0008c4be) im_writing_pane_t1

0xab8c,	// (0x00094a94) im_writing_pane_t2_ParamLimits

0xab8c,	// (0x00094a94) im_writing_pane_t2

0x0001,

0xf273,	// (0x0009917b) im_writing_pane_t_ParamLimits

0xf273,	// (0x0009917b) im_writing_pane_t

0xa512,	// (0x0009441a) input_focus_pane_cp04

0xa512,	// (0x0009441a) input_focus_pane_cp05

0x25cb,	// (0x0008c4d3) list_im_single_pane_ParamLimits

0x25cb,	// (0x0008c4d3) list_im_single_pane

0x25e0,	// (0x0008c4e8) list_single_im_pane_t1

0x3f1a,	// (0x0008de22) blid_accuracy_pane

0x3f22,	// (0x0008de2a) blid_compass_pane

0x3f2c,	// (0x0008de34) main_location_t1

0x3f3c,	// (0x0008de44) main_location_t2

0x3f4c,	// (0x0008de54) main_location_t3

0x0002,

0xf5ed,	// (0x000994f5) main_location_t

0xa512,	// (0x0009441a) aid_levels_location

0xa893,	// (0x0009479b) blid_accuracy_pane_g1

0xa893,	// (0x0009479b) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000991dd) blid_accuracy_pane_g

0xabd4,	// (0x00094adc) wml_content_pane

0xac12,	// (0x00094b1a) wml_button_pane_ParamLimits

0xac12,	// (0x00094b1a) wml_button_pane

0x25ef,	// (0x0008c4f7) wml_list_single_large_pane_ParamLimits

0x25ef,	// (0x0008c4f7) wml_list_single_large_pane

0x2604,	// (0x0008c50c) wml_list_single_medium_pane_ParamLimits

0x2604,	// (0x0008c50c) wml_list_single_medium_pane

0x261b,	// (0x0008c523) wml_list_single_small_pane_ParamLimits

0x261b,	// (0x0008c523) wml_list_single_small_pane

0xac26,	// (0x00094b2e) wml_selection_box_pane_ParamLimits

0xac26,	// (0x00094b2e) wml_selection_box_pane

0xac39,	// (0x00094b41) wml_list_single_pane_t1

0xac48,	// (0x00094b50) wml_list_single_medium_pane_t1

0xac57,	// (0x00094b5f) wml_list_single_large_pane_t1

0xac66,	// (0x00094b6e) input_focus_pane_cp02_ParamLimits

0xac66,	// (0x00094b6e) input_focus_pane_cp02

0xac79,	// (0x00094b81) wml_selection_box_pane_g1

0xac82,	// (0x00094b8a) wml_selection_box_pane_t1_ParamLimits

0xac82,	// (0x00094b8a) wml_selection_box_pane_t1

0xa76d,	// (0x00094675) bg_wml_button_pane_ParamLimits

0xa76d,	// (0x00094675) bg_wml_button_pane

0xac9a,	// (0x00094ba2) wml_button_pane_g1

0xaca2,	// (0x00094baa) wml_button_pane_t1

0xac9a,	// (0x00094ba2) wml_button_bg_pane_g1

0xacb2,	// (0x00094bba) wml_button_bg_pane_g2

0xacba,	// (0x00094bc2) wml_button_bg_pane_g3

0xacc2,	// (0x00094bca) wml_button_bg_pane_g4

0xacca,	// (0x00094bd2) wml_button_bg_pane_g5

0xacd2,	// (0x00094bda) wml_button_bg_pane_g6

0xacda,	// (0x00094be2) wml_button_bg_pane_g7

0xace2,	// (0x00094bea) wml_button_bg_pane_g8

0xacea,	// (0x00094bf2) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x00099180) wml_button_bg_pane_g

0x2634,	// (0x0008c53c) bg_list_pane_cp02

0xacf2,	// (0x00094bfa) mce_header_pane_ParamLimits

0xacf2,	// (0x00094bfa) mce_header_pane

0xad08,	// (0x00094c10) mce_icon_pane

0xad08,	// (0x00094c10) mce_image_pane

0xad11,	// (0x00094c19) mce_text_pane_ParamLimits

0xad11,	// (0x00094c19) mce_text_pane

0x263c,	// (0x0008c544) scroll_pane_cp03

0xac0a,	// (0x00094b12) scroll_pane_cp04

0xad24,	// (0x00094c2c) scroll_pane_cp05_ParamLimits

0xad24,	// (0x00094c2c) scroll_pane_cp05

0x2646,	// (0x0008c54e) mce_header_field_pane_ParamLimits

0x2646,	// (0x0008c54e) mce_header_field_pane

0x265d,	// (0x0008c565) mce_header_field_pane_2_ParamLimits

0x265d,	// (0x0008c565) mce_header_field_pane_2

0x2673,	// (0x0008c57b) mce_header_field_pane_3

0x267b,	// (0x0008c583) list_single_mce_message_pane_ParamLimits

0x267b,	// (0x0008c583) list_single_mce_message_pane

0x2691,	// (0x0008c599) list_single_mce_smart_pane_ParamLimits

0x2691,	// (0x0008c599) list_single_mce_smart_pane

0xad30,	// (0x00094c38) input_focus_pane_cp03

0xad39,	// (0x00094c41) list_header_data_pane

0x26b2,	// (0x0008c5ba) mce_header_field_pane_t1

0x26c2,	// (0x0008c5ca) list_single_mce_header_pane_ParamLimits

0x26c2,	// (0x0008c5ca) list_single_mce_header_pane

0xad41,	// (0x00094c49) list_single_mce_header_pane_t1

0xad50,	// (0x00094c58) list_single_mce_message_pane_g1

0xad58,	// (0x00094c60) list_single_mce_message_pane_t1

0x26fc,	// (0x0008c604) bg_cale_heading_pane_cp01_ParamLimits

0x26fc,	// (0x0008c604) bg_cale_heading_pane_cp01

0xad66,	// (0x00094c6e) bg_cale_pane_cp02_ParamLimits

0xad66,	// (0x00094c6e) bg_cale_pane_cp02

0x2736,	// (0x0008c63e) cale_month_corner_pane

0x2755,	// (0x0008c65d) cale_month_day_heading_pane_ParamLimits

0x2755,	// (0x0008c65d) cale_month_day_heading_pane

0x27a7,	// (0x0008c6af) cale_month_pane_g1_ParamLimits

0x27a7,	// (0x0008c6af) cale_month_pane_g1

0x27d6,	// (0x0008c6de) cale_month_pane_g2_ParamLimits

0x27d6,	// (0x0008c6de) cale_month_pane_g2

0x2806,	// (0x0008c70e) cale_month_pane_g3_ParamLimits

0x2806,	// (0x0008c70e) cale_month_pane_g3

0x2842,	// (0x0008c74a) cale_month_pane_g4_ParamLimits

0x2842,	// (0x0008c74a) cale_month_pane_g4

0x287e,	// (0x0008c786) cale_month_pane_g5_ParamLimits

0x287e,	// (0x0008c786) cale_month_pane_g5

0x28c6,	// (0x0008c7ce) cale_month_pane_g6_ParamLimits

0x28c6,	// (0x0008c7ce) cale_month_pane_g6

0x2912,	// (0x0008c81a) cale_month_pane_g7_ParamLimits

0x2912,	// (0x0008c81a) cale_month_pane_g7

0x2962,	// (0x0008c86a) cale_month_pane_g8_ParamLimits

0x2962,	// (0x0008c86a) cale_month_pane_g8

0x29b6,	// (0x0008c8be) cale_month_pane_g9_ParamLimits

0x29b6,	// (0x0008c8be) cale_month_pane_g9

0x2a08,	// (0x0008c910) cale_month_pane_g10_ParamLimits

0x2a08,	// (0x0008c910) cale_month_pane_g10

0x2a5a,	// (0x0008c962) cale_month_pane_g11_ParamLimits

0x2a5a,	// (0x0008c962) cale_month_pane_g11

0x2aac,	// (0x0008c9b4) cale_month_pane_g12_ParamLimits

0x2aac,	// (0x0008c9b4) cale_month_pane_g12

0x2afe,	// (0x0008ca06) cale_month_pane_g13_ParamLimits

0x2afe,	// (0x0008ca06) cale_month_pane_g13

0x000c,

0xf28b,	// (0x00099193) cale_month_pane_g_ParamLimits

0xf28b,	// (0x00099193) cale_month_pane_g

0x2b50,	// (0x0008ca58) cale_month_week_pane

0x2b74,	// (0x0008ca7c) grid_cale_month_pane_ParamLimits

0x2b74,	// (0x0008ca7c) grid_cale_month_pane

0x2bbd,	// (0x0008cac5) cale_month_day_heading_pane_t1

0x2bff,	// (0x0008cb07) cale_month_day_heading_pane_t2

0x2c34,	// (0x0008cb3c) cale_month_day_heading_pane_t3

0x2c69,	// (0x0008cb71) cale_month_day_heading_pane_t4

0x2ca6,	// (0x0008cbae) cale_month_day_heading_pane_t5

0x2ceb,	// (0x0008cbf3) cale_month_day_heading_pane_t6

0x2d30,	// (0x0008cc38) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000991ae) cale_month_day_heading_pane_t

0xa9ba,	// (0x000948c2) bg_cale_side_pane_cp01

0x2d7d,	// (0x0008cc85) cale_month_week_pane_t1

0x2d96,	// (0x0008cc9e) cale_month_week_pane_t2

0x2daf,	// (0x0008ccb7) cale_month_week_pane_t3

0x2dc8,	// (0x0008ccd0) cale_month_week_pane_t4

0x2de1,	// (0x0008cce9) cale_month_week_pane_t5

0x2dfa,	// (0x0008cd02) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000991bd) cale_month_week_pane_t

0x2e13,	// (0x0008cd1b) cell_cale_month_pane_ParamLimits

0x2e13,	// (0x0008cd1b) cell_cale_month_pane

0x97a7,	// (0x000936af) cell_cale_month_pane_g1

0x2f41,	// (0x0008ce49) cell_cale_month_pane_t1_ParamLimits

0x2f41,	// (0x0008ce49) cell_cale_month_pane_t1

0xa9c8,	// (0x000948d0) grid_highlight_pane_cp08

0xa893,	// (0x0009479b) main_smil_g1

0x2f6d,	// (0x0008ce75) smil_status_pane

0xada5,	// (0x00094cad) smil_text_pane

0xc6e6,	// (0x000965ee) bg_popup_call3_rect_pane_g8

0xc6ee,	// (0x000965f6) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x00099476) bg_popup_call3_rect_pane_g

0xc975,	// (0x0009687d) smil_status_volume_pane_g1

0xadaf,	// (0x00094cb7) smil_status_pane_t1

0x98f9,	// (0x00093801) volume_smil_pane

0xadc6,	// (0x00094cce) list_smil_text_pane

0x2f82,	// (0x0008ce8a) scroll_pane_cp011

0x2f8d,	// (0x0008ce95) smil_text_list_pane_t1_ParamLimits

0x2f8d,	// (0x0008ce95) smil_text_list_pane_t1

0x97b3,	// (0x000936bb) aid_volume_smil_ParamLimits

0x97b3,	// (0x000936bb) aid_volume_smil

0xa893,	// (0x0009479b) smil_volume_pane_g1

0xa893,	// (0x0009479b) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000991dd) smil_volume_pane_g

0x1910,	// (0x0008b818) listscroll_cale_day_pane

0xadd0,	// (0x00094cd8) bg_cale_pane

0xade8,	// (0x00094cf0) list_cale_pane

0xae0b,	// (0x00094d13) scroll_pane_cp09

0xae1c,	// (0x00094d24) cale_bg_pane_g1

0xae24,	// (0x00094d2c) cale_bg_pane_g2

0xae2c,	// (0x00094d34) cale_bg_pane_g3

0xae34,	// (0x00094d3c) cale_bg_pane_g4

0xae3c,	// (0x00094d44) cale_bg_pane_g5

0xae44,	// (0x00094d4c) cale_bg_pane_g6

0xae4c,	// (0x00094d54) cale_bg_pane_g7

0xae54,	// (0x00094d5c) cale_bg_pane_g8

0xae5c,	// (0x00094d64) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000991e2) cale_bg_pane_g

0x2fd9,	// (0x0008cee1) list_cale_time_pane_ParamLimits

0x2fd9,	// (0x0008cee1) list_cale_time_pane

0xae64,	// (0x00094d6c) list_cale_time_pane_g1_ParamLimits

0xae64,	// (0x00094d6c) list_cale_time_pane_g1

0xae70,	// (0x00094d78) list_cale_time_pane_g2_ParamLimits

0xae70,	// (0x00094d78) list_cale_time_pane_g2

0x2fef,	// (0x0008cef7) list_cale_time_pane_g3_ParamLimits

0x2fef,	// (0x0008cef7) list_cale_time_pane_g3

0x2ffd,	// (0x0008cf05) list_cale_time_pane_g4_ParamLimits

0x2ffd,	// (0x0008cf05) list_cale_time_pane_g4

0x300b,	// (0x0008cf13) list_cale_time_pane_g5_ParamLimits

0x300b,	// (0x0008cf13) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000991f5) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000991f5) list_cale_time_pane_g

0xae8a,	// (0x00094d92) list_cale_time_pane_t1_ParamLimits

0xae8a,	// (0x00094d92) list_cale_time_pane_t1

0xaeb2,	// (0x00094dba) list_cale_time_pane_t2_ParamLimits

0xaeb2,	// (0x00094dba) list_cale_time_pane_t2

0x32bc,	// (0x0008d1c4) aid_blid_cardinal_pane

0x32fa,	// (0x0008d202) compass_pane_t4

0xaeda,	// (0x00094de2) list_cale_time_pane_t4_ParamLimits

0xaeda,	// (0x00094de2) list_cale_time_pane_t4

0x3308,	// (0x0008d210) compass_pane_t5

0x3316,	// (0x0008d21e) compass_pane_t6

0x3324,	// (0x0008d22c) compass_pane_t7

0xb35e,	// (0x00095266) navi_pane_cc_t1

0xb549,	// (0x00095451) aid_phob_thumbnail_center_pane

0x3930,	// (0x0008d838) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x00099202) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x00099202) list_cale_time_pane_t

0xa169,	// (0x00094071) bg_popup_window_pane_cp02_ParamLimits

0xa169,	// (0x00094071) bg_popup_window_pane_cp02

0xaf02,	// (0x00094e0a) heading_pane_cp01_ParamLimits

0xaf02,	// (0x00094e0a) heading_pane_cp01

0xaf0e,	// (0x00094e16) loc_req_pane_ParamLimits

0xaf0e,	// (0x00094e16) loc_req_pane

0xaf1e,	// (0x00094e26) loc_type_pane_ParamLimits

0xaf1e,	// (0x00094e26) loc_type_pane

0xaf30,	// (0x00094e38) loc_type_pane_t1_ParamLimits

0xaf30,	// (0x00094e38) loc_type_pane_t1

0xaf42,	// (0x00094e4a) loc_type_pane_t2_ParamLimits

0xaf42,	// (0x00094e4a) loc_type_pane_t2

0xaf54,	// (0x00094e5c) loc_type_pane_t3_ParamLimits

0xaf54,	// (0x00094e5c) loc_type_pane_t3

0x0002,

0xf301,	// (0x00099209) loc_type_pane_t_ParamLimits

0xf301,	// (0x00099209) loc_type_pane_t

0xaf66,	// (0x00094e6e) list_loc_req_pane

0xaf70,	// (0x00094e78) scroll_pane_cp012

0x3019,	// (0x0008cf21) list_single_loc_request_popup_menu_pane_ParamLimits

0x3019,	// (0x0008cf21) list_single_loc_request_popup_menu_pane

0xaf7b,	// (0x00094e83) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf7b,	// (0x00094e83) list_single_loc_request_popup_menu_pane_g1

0xaf87,	// (0x00094e8f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf87,	// (0x00094e8f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x00099210) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x00099210) list_single_loc_request_popup_menu_pane_g

0xaf93,	// (0x00094e9b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf93,	// (0x00094e9b) list_single_loc_request_popup_menu_pane_t1

0xa76d,	// (0x00094675) bg_popup_window_pane_cp03_ParamLimits

0xa76d,	// (0x00094675) bg_popup_window_pane_cp03

0xafa9,	// (0x00094eb1) heading_loc_req_pane_ParamLimits

0xafa9,	// (0x00094eb1) heading_loc_req_pane

0x3026,	// (0x0008cf2e) popup_dyc_status_message_window_g1_ParamLimits

0x3026,	// (0x0008cf2e) popup_dyc_status_message_window_g1

0x303a,	// (0x0008cf42) popup_dyc_status_message_window_t1_ParamLimits

0x303a,	// (0x0008cf42) popup_dyc_status_message_window_t1

0x304f,	// (0x0008cf57) popup_dyc_status_message_window_t2_ParamLimits

0x304f,	// (0x0008cf57) popup_dyc_status_message_window_t2

0x3064,	// (0x0008cf6c) popup_dyc_status_message_window_t3_ParamLimits

0x3064,	// (0x0008cf6c) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x00099215) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x00099215) popup_dyc_status_message_window_t

0xa512,	// (0x0009441a) bg_heading_pane_cp01

0xafb5,	// (0x00094ebd) heading_loc_req_pane_g1

0xafbd,	// (0x00094ec5) heading_loc_req_pane_g2

0xafc5,	// (0x00094ecd) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0009921c) heading_loc_req_pane_g

0xafcd,	// (0x00094ed5) heading_loc_req_pane_t1

0xafdc,	// (0x00094ee4) bg_popup_sub_pane_cp01_ParamLimits

0xafdc,	// (0x00094ee4) bg_popup_sub_pane_cp01

0xafea,	// (0x00094ef2) popup_cale_events_window_g1_ParamLimits

0xafea,	// (0x00094ef2) popup_cale_events_window_g1

0xb00a,	// (0x00094f12) popup_cale_events_window_g2_ParamLimits

0xb00a,	// (0x00094f12) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x00099250) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x00099250) popup_cale_events_window_g

0xb02a,	// (0x00094f32) popup_cale_events_window_t1_ParamLimits

0xb02a,	// (0x00094f32) popup_cale_events_window_t1

0xb03c,	// (0x00094f44) popup_cale_events_window_t2_ParamLimits

0xb03c,	// (0x00094f44) popup_cale_events_window_t2

0xb07a,	// (0x00094f82) popup_cale_events_window_t3_ParamLimits

0xb07a,	// (0x00094f82) popup_cale_events_window_t3

0xb0b4,	// (0x00094fbc) popup_cale_events_window_t4_ParamLimits

0xb0b4,	// (0x00094fbc) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x00099255) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x00099255) popup_cale_events_window_t

0x308c,	// (0x0008cf94) call_type_pane

0x309c,	// (0x0008cfa4) popup_call_status_window_g1

0x30b0,	// (0x0008cfb8) popup_call_status_window_g2

0x30c4,	// (0x0008cfcc) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0009925e) popup_call_status_window_g

0xb0ea,	// (0x00094ff2) call_type_pane_g1

0xb0f3,	// (0x00094ffb) call_type_pane_g2

0x0001,

0xf35d,	// (0x00099265) call_type_pane_g

0xa512,	// (0x0009441a) bg_popup_sub_pane_cp02

0xb0fc,	// (0x00095004) listscroll_popup_wml_pane

0xb104,	// (0x0009500c) list_wml_pane

0xb10e,	// (0x00095016) scroll_pane_cp013

0xb119,	// (0x00095021) list_single_graphic_popup_wml_pane_ParamLimits

0xb119,	// (0x00095021) list_single_graphic_popup_wml_pane

0xa893,	// (0x0009479b) list_single_graphic_popup_wml_pane_g1

0xb12d,	// (0x00095035) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0009926a) list_single_graphic_popup_wml_pane_g

0xb135,	// (0x0009503d) list_single_graphic_popup_wml_pane_t1

0xb14b,	// (0x00095053) aid_call_pane

0xa765,	// (0x0009466d) popup_clock_analogue_window_g1

0xa765,	// (0x0009466d) popup_clock_analogue_window_g2

0x97d5,	// (0x000936dd) popup_clock_analogue_window_g3

0x97d5,	// (0x000936dd) popup_clock_analogue_window_g4

0xa893,	// (0x0009479b) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0009926f) popup_clock_analogue_window_g

0x97dd,	// (0x000936e5) popup_clock_analogue_window_t1

0x97eb,	// (0x000936f3) clock_digital_number_pane_ParamLimits

0x97eb,	// (0x000936f3) clock_digital_number_pane

0x97f7,	// (0x000936ff) clock_digital_number_pane_cp02_ParamLimits

0x97f7,	// (0x000936ff) clock_digital_number_pane_cp02

0x9803,	// (0x0009370b) clock_digital_number_pane_cp03_ParamLimits

0x9803,	// (0x0009370b) clock_digital_number_pane_cp03

0x980f,	// (0x00093717) clock_digital_number_pane_cp04_ParamLimits

0x980f,	// (0x00093717) clock_digital_number_pane_cp04

0x981b,	// (0x00093723) clock_digital_separator_pane_ParamLimits

0x981b,	// (0x00093723) clock_digital_separator_pane

0x9827,	// (0x0009372f) popup_clock_digital_window_t1

0xa893,	// (0x0009479b) clock_digital_number_pane_g1

0xa893,	// (0x0009479b) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000991dd) clock_digital_number_pane_g

0xa893,	// (0x0009479b) clock_digital_separator_pane_g1

0xa893,	// (0x0009479b) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000991dd) clock_digital_separator_pane_g

0xa512,	// (0x0009441a) bg_popup_window_pane_cp04

0xb153,	// (0x0009505b) heading_pane_cp03

0xb15b,	// (0x00095063) listscroll_popup_gms_pane

0xb163,	// (0x0009506b) grid_large_graphic_popup_pane

0xb16d,	// (0x00095075) listscroll_popup_gms_pane_g1

0xb175,	// (0x0009507d) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0009927a) listscroll_popup_gms_pane_g

0xac0a,	// (0x00094b12) scroll_pane_cp014

0x30d3,	// (0x0008cfdb) cell_large_graphic_popup_pane_ParamLimits

0x30d3,	// (0x0008cfdb) cell_large_graphic_popup_pane

0x30eb,	// (0x0008cff3) cell_large_graphic_popup_pane_g1_ParamLimits

0x30eb,	// (0x0008cff3) cell_large_graphic_popup_pane_g1

0xb17d,	// (0x00095085) cell_large_graphic_popup_pane_g2_ParamLimits

0xb17d,	// (0x00095085) cell_large_graphic_popup_pane_g2

0xb189,	// (0x00095091) cell_large_graphic_popup_pane_g3_ParamLimits

0xb189,	// (0x00095091) cell_large_graphic_popup_pane_g3

0xb196,	// (0x0009509e) cell_large_graphic_popup_pane_g4_ParamLimits

0xb196,	// (0x0009509e) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0009927f) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0009927f) cell_large_graphic_popup_pane_g

0xb1a6,	// (0x000950ae) grid_highlight_pane_cp010

0xa893,	// (0x0009479b) bg_popup_call_pane_g1

0xb1b0,	// (0x000950b8) list_single_graphic_popup_conf_pane_ParamLimits

0xb1b0,	// (0x000950b8) list_single_graphic_popup_conf_pane

0xb1c3,	// (0x000950cb) list_highlight_pane_cp01

0xb1cc,	// (0x000950d4) list_single_graphic_popup_conf_pane_g1

0xb1d4,	// (0x000950dc) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x00099288) list_single_graphic_popup_conf_pane_g

0xb1dc,	// (0x000950e4) list_single_graphic_popup_conf_pane_t1

0xb1ea,	// (0x000950f2) linegrid_cams_pane_g1

0x30f7,	// (0x0008cfff) linegrid_cams_pane_g2

0xa9fb,	// (0x00094903) linegrid_cams_pane_g3

0xb1f3,	// (0x000950fb) linegrid_cams_pane_g4

0x3100,	// (0x0008d008) linegrid_cams_pane_g5

0x3109,	// (0x0008d011) linegrid_cams_pane_g6

0xaa04,	// (0x0009490c) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0009928d) linegrid_cams_pane_g

0xb1fc,	// (0x00095104) popup_clock_analogue_window

0xb1fc,	// (0x00095104) popup_clock_digital_window

0xa512,	// (0x0009441a) popup_phob_thumbnail_window

0xa893,	// (0x0009479b) call_video_uplink_pane_g1

0xb205,	// (0x0009510d) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0009929c) call_video_uplink_pane_g

0xb20d,	// (0x00095115) video_uplink_pane

0xb215,	// (0x0009511d) mce_image_pane_g1

0x3114,	// (0x0008d01c) mce_image_pane_g2

0x311c,	// (0x0008d024) mce_image_pane_g3

0x3124,	// (0x0008d02c) mce_image_pane_g4

0x312e,	// (0x0008d036) mce_image_pane_g5

0x0004,

0xf399,	// (0x000992a1) mce_image_pane_g

0xb21f,	// (0x00095127) control_top_pane_stacon_cp01_ParamLimits

0xb21f,	// (0x00095127) control_top_pane_stacon_cp01

0xb233,	// (0x0009513b) uni_indicator_pane_stacon_cp01_ParamLimits

0xb233,	// (0x0009513b) uni_indicator_pane_stacon_cp01

0xb244,	// (0x0009514c) bg_popup_sub_pane_cp03

0x3136,	// (0x0008d03e) chi_dic_find_pane

0x313e,	// (0x0008d046) listscroll_chi_dic_pane

0x3147,	// (0x0008d04f) main_pane_chidic_g1

0x315a,	// (0x0008d062) chi_dic_find_pane_t1

0xb24e,	// (0x00095156) find_chidic_pane

0xb257,	// (0x0009515f) chi_dic_list_pane_ParamLimits

0xb257,	// (0x0009515f) chi_dic_list_pane

0xb268,	// (0x00095170) scroll_pane_cp020

0x3168,	// (0x0008d070) find_chidic_pane_t1

0xa512,	// (0x0009441a) input_focus_pane_cp06

0x3177,	// (0x0008d07f) list_chi_dic_pane_ParamLimits

0x3177,	// (0x0008d07f) list_chi_dic_pane

0x3189,	// (0x0008d091) list_chi_dic_pane_t1_ParamLimits

0x3189,	// (0x0008d091) list_chi_dic_pane_t1

0xa512,	// (0x0009441a) list_highlight_pane_cp020

0xb270,	// (0x00095178) bg_cale_heading_pane_g1

0x319c,	// (0x0008d0a4) bg_cale_heading_pane_g2

0x31a4,	// (0x0008d0ac) bg_cale_heading_pane_g3

0x31ac,	// (0x0008d0b4) bg_cale_heading_pane_g4

0x31b6,	// (0x0008d0be) bg_cale_heading_pane_g5

0x31c0,	// (0x0008d0c8) bg_cale_heading_pane_g6

0x31c8,	// (0x0008d0d0) bg_cale_heading_pane_g7

0x31d0,	// (0x0008d0d8) bg_cale_heading_pane_g8

0x31da,	// (0x0008d0e2) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000992ac) bg_cale_heading_pane_g

0xb270,	// (0x00095178) bg_cale_side_pane_g1

0x31e4,	// (0x0008d0ec) bg_cale_side_pane_g2

0x31ec,	// (0x0008d0f4) bg_cale_side_pane_g3

0x31f4,	// (0x0008d0fc) bg_cale_side_pane_g4

0x31fc,	// (0x0008d104) bg_cale_side_pane_g5

0x3204,	// (0x0008d10c) bg_cale_side_pane_g6

0x320c,	// (0x0008d114) bg_cale_side_pane_g7

0x3214,	// (0x0008d11c) bg_cale_side_pane_g8

0x321c,	// (0x0008d124) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000992bf) bg_cale_side_pane_g

0x3224,	// (0x0008d12c) popup_call_status_window_ParamLimits

0x3224,	// (0x0008d12c) popup_call_status_window

0xb278,	// (0x00095180) stacon_top_pane

0xb280,	// (0x00095188) status_pane_ParamLimits

0xb280,	// (0x00095188) status_pane

0xb295,	// (0x0009519d) status_small_pane

0xb29d,	// (0x000951a5) control_pane

0xa512,	// (0x0009441a) stacon_bottom_pane

0xb2a5,	// (0x000951ad) list_single_mce_smart_pane_t1_ParamLimits

0xb2a5,	// (0x000951ad) list_single_mce_smart_pane_t1

0xb2b8,	// (0x000951c0) list_single_mce_smart_pane_t2_ParamLimits

0xb2b8,	// (0x000951c0) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000992d2) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000992d2) list_single_mce_smart_pane_t

0x326b,	// (0x0008d173) compass_pane

0x3274,	// (0x0008d17c) main_location2_pane_t1

0x3286,	// (0x0008d18e) main_location2_pane_t2

0x3298,	// (0x0008d1a0) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000992d7) main_location2_pane_t

0xb2d7,	// (0x000951df) compass_pane_g1_ParamLimits

0xb2d7,	// (0x000951df) compass_pane_g1

0x32dc,	// (0x0008d1e4) compass_pane_t1

0x32eb,	// (0x0008d1f3) compass_pane_t2

0x0005,

0xf3d8,	// (0x000992e0) compass_pane_t

0x3332,	// (0x0008d23a) text_secondary_cp61

0xb355,	// (0x0009525d) navi_pane_cams_g5

0xb3d1,	// (0x000952d9) navi_pane_im_t1

0xb3df,	// (0x000952e7) navi_pane_mp_g1_ParamLimits

0xb3df,	// (0x000952e7) navi_pane_mp_g1

0xb3f3,	// (0x000952fb) navi_pane_mp_g2_ParamLimits

0xb3f3,	// (0x000952fb) navi_pane_mp_g2

0xb3ff,	// (0x00095307) navi_pane_mp_g3_ParamLimits

0xb3ff,	// (0x00095307) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000992f4) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000992f4) navi_pane_mp_g

0xb40b,	// (0x00095313) navi_pane_mp_t1

0xb419,	// (0x00095321) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000992fb) navi_pane_mp_t

0xb484,	// (0x0009538c) navi_pane_vt_g1

0xb40b,	// (0x00095313) navi_pane_vt_t1

0xb48c,	// (0x00095394) navi_slider_pane

0xaa15,	// (0x0009491d) zooming_pane

0xb49c,	// (0x000953a4) navi_slider_pane_g1

0x9844,	// (0x0009374c) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x00099302) navi_slider_pane_g

0xb4c0,	// (0x000953c8) aid_levels_zoom

0xb4c8,	// (0x000953d0) zooming_pane_g1

0xb4d0,	// (0x000953d8) zooming_pane_g2

0xb4d0,	// (0x000953d8) zooming_pane_g3

0x0002,

0xf409,	// (0x00099311) zooming_pane_g

0xb4d8,	// (0x000953e0) level_10_zoom

0xb4e1,	// (0x000953e9) level_11_zoom

0xb4ea,	// (0x000953f2) level_1_zoom

0xb4f3,	// (0x000953fb) level_2_zoom

0xb4fc,	// (0x00095404) level_3_zoom

0xb505,	// (0x0009540d) level_4_zoom

0xb50e,	// (0x00095416) level_5_zoom

0xb517,	// (0x0009541f) level_6_zoom

0xb520,	// (0x00095428) level_7_zoom

0xb537,	// (0x0009543f) level_8_zoom

0xb540,	// (0x00095448) level_9_zoom

0xb551,	// (0x00095459) popup_phob_thumbnail_window_g1

0xb559,	// (0x00095461) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x00099318) popup_phob_thumbnail_window_g

0xc888,	// (0x00096790) level_1_location

0xc890,	// (0x00096798) level_2_location

0xc898,	// (0x000967a0) level_3_location

0xc8a0,	// (0x000967a8) level_4_location

0xaa15,	// (0x0009491d) level_5_location

0x3383,	// (0x0008d28b) mce_icon_pane_g1

0x338d,	// (0x0008d295) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0009931d) mce_icon_pane_g

0x3395,	// (0x0008d29d) main_mup_pane_g1_ParamLimits

0x3395,	// (0x0008d29d) main_mup_pane_g1

0x33ab,	// (0x0008d2b3) main_mup_pane_g2_ParamLimits

0x33ab,	// (0x0008d2b3) main_mup_pane_g2

0x33bd,	// (0x0008d2c5) main_mup_pane_g3_ParamLimits

0x33bd,	// (0x0008d2c5) main_mup_pane_g3

0x33cf,	// (0x0008d2d7) main_mup_pane_g4_ParamLimits

0x33cf,	// (0x0008d2d7) main_mup_pane_g4

0x33e7,	// (0x0008d2ef) main_mup_pane_g5_ParamLimits

0x33e7,	// (0x0008d2ef) main_mup_pane_g5

0x3403,	// (0x0008d30b) main_mup_pane_g6_ParamLimits

0x3403,	// (0x0008d30b) main_mup_pane_g6

0x341b,	// (0x0008d323) main_mup_pane_g7_ParamLimits

0x341b,	// (0x0008d323) main_mup_pane_g7

0x3433,	// (0x0008d33b) main_mup_pane_g8_ParamLimits

0x3433,	// (0x0008d33b) main_mup_pane_g8

0x344b,	// (0x0008d353) main_mup_pane_g9_ParamLimits

0x344b,	// (0x0008d353) main_mup_pane_g9

0x3465,	// (0x0008d36d) main_mup_pane_g10_ParamLimits

0x3465,	// (0x0008d36d) main_mup_pane_g10

0x347f,	// (0x0008d387) main_mup_pane_g11_ParamLimits

0x347f,	// (0x0008d387) main_mup_pane_g11

0x3493,	// (0x0008d39b) main_mup_pane_g12_ParamLimits

0x3493,	// (0x0008d39b) main_mup_pane_g12

0x34a9,	// (0x0008d3b1) main_mup_pane_g13_ParamLimits

0x34a9,	// (0x0008d3b1) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00099322) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00099322) main_mup_pane_g

0x34bd,	// (0x0008d3c5) main_mup_pane_t1_ParamLimits

0x34bd,	// (0x0008d3c5) main_mup_pane_t1

0x34d7,	// (0x0008d3df) main_mup_pane_t2_ParamLimits

0x34d7,	// (0x0008d3df) main_mup_pane_t2

0x34ef,	// (0x0008d3f7) main_mup_pane_t3_ParamLimits

0x34ef,	// (0x0008d3f7) main_mup_pane_t3

0x3507,	// (0x0008d40f) main_mup_pane_t4_ParamLimits

0x3507,	// (0x0008d40f) main_mup_pane_t4

0x3525,	// (0x0008d42d) main_mup_pane_t5_ParamLimits

0x3525,	// (0x0008d42d) main_mup_pane_t5

0x353a,	// (0x0008d442) main_mup_pane_t6_ParamLimits

0x353a,	// (0x0008d442) main_mup_pane_t6

0x0005,

0xf435,	// (0x0009933d) main_mup_pane_t_ParamLimits

0xf435,	// (0x0009933d) main_mup_pane_t

0x354c,	// (0x0008d454) mup_progress_pane_ParamLimits

0x354c,	// (0x0008d454) mup_progress_pane

0x3558,	// (0x0008d460) mup_visualizer_pane_ParamLimits

0x3558,	// (0x0008d460) mup_visualizer_pane

0x358c,	// (0x0008d494) mup_volume_pane_ParamLimits

0x358c,	// (0x0008d494) mup_volume_pane

0xb529,	// (0x00095431) mup_visualizer_pane_g1_ParamLimits

0xb529,	// (0x00095431) mup_visualizer_pane_g1

0xb529,	// (0x00095431) mup_visualizer_pane_g2_ParamLimits

0xb529,	// (0x00095431) mup_visualizer_pane_g2

0xb2d7,	// (0x000951df) mup_visualizer_pane_g3_ParamLimits

0xb2d7,	// (0x000951df) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0009934a) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0009934a) mup_visualizer_pane_g

0xa893,	// (0x0009479b) mup_volume_pane_g1

0xb569,	// (0x00095471) mup_volume_pane_g2

0x0001,

0xf449,	// (0x00099351) mup_volume_pane_g

0xa893,	// (0x0009479b) mup_progress_pane_g1

0xb572,	// (0x0009547a) mup_progress_pane_g2

0xb57b,	// (0x00095483) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x00099356) mup_progress_pane_g

0xa512,	// (0x0009441a) bg_popup_window_pane_cp05

0xb584,	// (0x0009548c) heading_pane_cp02_ParamLimits

0xb584,	// (0x0009548c) heading_pane_cp02

0xb59e,	// (0x000954a6) list_popup_blid_pane

0xb5a6,	// (0x000954ae) list_blid_sat_info_pane_ParamLimits

0xb5a6,	// (0x000954ae) list_blid_sat_info_pane

0xb5b9,	// (0x000954c1) list_blid_sat_info_pane_g1

0xb5c1,	// (0x000954c9) list_blid_sat_info_pane_t1

0x36a2,	// (0x0008d5aa) mup_equalizer_pane_ParamLimits

0x36a2,	// (0x0008d5aa) mup_equalizer_pane

0x36bb,	// (0x0008d5c3) mup_equalizer_pane_cp1_ParamLimits

0x36bb,	// (0x0008d5c3) mup_equalizer_pane_cp1

0x36d8,	// (0x0008d5e0) mup_equalizer_pane_cp2_ParamLimits

0x36d8,	// (0x0008d5e0) mup_equalizer_pane_cp2

0x36f5,	// (0x0008d5fd) mup_equalizer_pane_cp3_ParamLimits

0x36f5,	// (0x0008d5fd) mup_equalizer_pane_cp3

0x3716,	// (0x0008d61e) mup_equalizer_pane_cp4_ParamLimits

0x3716,	// (0x0008d61e) mup_equalizer_pane_cp4

0x3737,	// (0x0008d63f) mup_equalizer_pane_cp5

0x374b,	// (0x0008d653) mup_equalizer_pane_cp6

0x375f,	// (0x0008d667) mup_equalizer_pane_cp7

0xc766,	// (0x0009666e) bg_popup_call_poc_act_pane_g9

0xc76e,	// (0x00096676) bg_popup_call_poc_act_pane_g10

0xc776,	// (0x0009667e) bg_popup_call_poc_act_pane_g11

0x000a,

0xa76d,	// (0x00094675) mup_scale_pane

0xa893,	// (0x0009479b) mup_scale_pane_g1

0xb5cf,	// (0x000954d7) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x00099372) mup_scale_pane_g

0xb5f3,	// (0x000954fb) msg_data_pane

0xb5fb,	// (0x00095503) scroll_pane_cp017

0x05bc,	// (0x0008a4c4) bg_list_pane_cp04_ParamLimits

0x05bc,	// (0x0008a4c4) bg_list_pane_cp04

0xb603,	// (0x0009550b) msg_data_pane_g1

0x378d,	// (0x0008d695) msg_data_pane_g2

0x3795,	// (0x0008d69d) msg_data_pane_g3

0x379d,	// (0x0008d6a5) msg_data_pane_g4

0x37a5,	// (0x0008d6ad) msg_data_pane_g5

0x37ad,	// (0x0008d6b5) msg_data_pane_g6

0x37b5,	// (0x0008d6bd) msg_data_pane_g7

0x0006,

0xf479,	// (0x00099381) msg_data_pane_g

0x05d4,	// (0x0008a4dc) msg_text_pane_ParamLimits

0x05d4,	// (0x0008a4dc) msg_text_pane

0x37bd,	// (0x0008d6c5) qrid_highlight_pane_cp011_ParamLimits

0x37bd,	// (0x0008d6c5) qrid_highlight_pane_cp011

0xa512,	// (0x0009441a) msg_body_pane

0xa512,	// (0x0009441a) msg_header_pane

0xb614,	// (0x0009551c) input_focus_pane_cp07

0x37d3,	// (0x0008d6db) msg_header_pane_t1_ParamLimits

0x37d3,	// (0x0008d6db) msg_header_pane_t1

0x37e5,	// (0x0008d6ed) msg_header_pane_t2_ParamLimits

0x37e5,	// (0x0008d6ed) msg_header_pane_t2

0x0001,

0xf48d,	// (0x00099395) msg_header_pane_t_ParamLimits

0xf48d,	// (0x00099395) msg_header_pane_t

0xb629,	// (0x00095531) msg_body_pane_g1

0x37f7,	// (0x0008d6ff) msg_body_pane_t1_ParamLimits

0x37f7,	// (0x0008d6ff) msg_body_pane_t1

0x3828,	// (0x0008d730) msg_body_pane_t2_ParamLimits

0x3828,	// (0x0008d730) msg_body_pane_t2

0x383a,	// (0x0008d742) msg_body_pane_t3_ParamLimits

0x383a,	// (0x0008d742) msg_body_pane_t3

0x0002,

0xf492,	// (0x0009939a) msg_body_pane_t_ParamLimits

0xf492,	// (0x0009939a) msg_body_pane_t

0x3886,	// (0x0008d78e) main_viewer_pane_g1_ParamLimits

0x3886,	// (0x0008d78e) main_viewer_pane_g1

0x3894,	// (0x0008d79c) main_viewer_pane_g2_ParamLimits

0x3894,	// (0x0008d79c) main_viewer_pane_g2

0x38a2,	// (0x0008d7aa) main_viewer_pane_g3_ParamLimits

0x38a2,	// (0x0008d7aa) main_viewer_pane_g3

0x38b1,	// (0x0008d7b9) main_viewer_pane_g4_ParamLimits

0x38b1,	// (0x0008d7b9) main_viewer_pane_g4

0x986e,	// (0x00093776) main_viewer_pane_g5_ParamLimits

0x986e,	// (0x00093776) main_viewer_pane_g5

0x986e,	// (0x00093776) main_viewer_pane_g7_ParamLimits

0x986e,	// (0x00093776) main_viewer_pane_g7

0x9880,	// (0x00093788) main_viewer_pane_g8_ParamLimits

0x9880,	// (0x00093788) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000993aa) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000993aa) main_viewer_pane_g

0xb631,	// (0x00095539) viewer_content_pane_ParamLimits

0xb631,	// (0x00095539) viewer_content_pane

0x38ed,	// (0x0008d7f5) main_postcard_pane_g1_ParamLimits

0x38ed,	// (0x0008d7f5) main_postcard_pane_g1

0x3903,	// (0x0008d80b) main_postcard_pane_g2_ParamLimits

0x3903,	// (0x0008d80b) main_postcard_pane_g2

0x3919,	// (0x0008d821) main_postcard_pane_g3_ParamLimits

0x3919,	// (0x0008d821) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000993bb) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000993bb) main_postcard_pane_g

0x3930,	// (0x0008d838) main_postcard_pane_g4

0xc988,	// (0x00096890) smil_status_volume_pane_g2

0x3973,	// (0x0008d87b) postcard_pane_ParamLimits

0x3973,	// (0x0008d87b) postcard_pane

0xb63f,	// (0x00095547) postcard_pane_g1_ParamLimits

0xb63f,	// (0x00095547) postcard_pane_g1

0x39b5,	// (0x0008d8bd) postcard_pane_g2_ParamLimits

0x39b5,	// (0x0008d8bd) postcard_pane_g2

0x39c1,	// (0x0008d8c9) postcard_pane_g3_ParamLimits

0x39c1,	// (0x0008d8c9) postcard_pane_g3

0xb64d,	// (0x00095555) postcard_pane_g4_ParamLimits

0xb64d,	// (0x00095555) postcard_pane_g4

0x39cd,	// (0x0008d8d5) postcard_pane_g5_ParamLimits

0x39cd,	// (0x0008d8d5) postcard_pane_g5

0x39e2,	// (0x0008d8ea) postcard_pane_g6_ParamLimits

0x39e2,	// (0x0008d8ea) postcard_pane_g6

0xb63f,	// (0x00095547) postcard_pane_g7_ParamLimits

0xb63f,	// (0x00095547) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000993c8) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000993c8) postcard_pane_g

0x39f6,	// (0x0008d8fe) main_mp2_pane_g1_ParamLimits

0x39f6,	// (0x0008d8fe) main_mp2_pane_g1

0x3a02,	// (0x0008d90a) main_mp2_pane_g2_ParamLimits

0x3a02,	// (0x0008d90a) main_mp2_pane_g2

0x3a0e,	// (0x0008d916) main_mp2_pane_g3_ParamLimits

0x3a0e,	// (0x0008d916) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000993d7) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000993d7) main_mp2_pane_g

0x3a1a,	// (0x0008d922) main_mp2_pane_t1_ParamLimits

0x3a1a,	// (0x0008d922) main_mp2_pane_t1

0x3a2f,	// (0x0008d937) main_mp2_pane_t2_ParamLimits

0x3a2f,	// (0x0008d937) main_mp2_pane_t2

0x3a41,	// (0x0008d949) main_mp2_pane_t3_ParamLimits

0x3a41,	// (0x0008d949) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000993de) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000993de) main_mp2_pane_t

0xb65b,	// (0x00095563) pec_content_pane_ParamLimits

0xb65b,	// (0x00095563) pec_content_pane

0xac0a,	// (0x00094b12) scroll_pane_cp015

0xb66d,	// (0x00095575) pec_attribute_pane_ParamLimits

0xb66d,	// (0x00095575) pec_attribute_pane

0x3a53,	// (0x0008d95b) pec_content_pane_g1_ParamLimits

0x3a53,	// (0x0008d95b) pec_content_pane_g1

0xb67d,	// (0x00095585) pec_content_pane_t1_ParamLimits

0xb67d,	// (0x00095585) pec_content_pane_t1

0xb68f,	// (0x00095597) pec_content_pane_t2_ParamLimits

0xb68f,	// (0x00095597) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000993e5) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000993e5) pec_content_pane_t

0x3a5f,	// (0x0008d967) list_single_graphic_pane_cp01_ParamLimits

0x3a5f,	// (0x0008d967) list_single_graphic_pane_cp01

0xa76d,	// (0x00094675) bg_popup_sub_pane_cp04

0xb6a1,	// (0x000955a9) popup_mup_playback_window_g1

0xb6ad,	// (0x000955b5) popup_mup_playback_window_t1

0xb6c2,	// (0x000955ca) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000993ea) popup_mup_playback_window_t

0xb6f9,	// (0x00095601) main_image_pane_g1_ParamLimits

0xb6f9,	// (0x00095601) main_image_pane_g1

0xb73c,	// (0x00095644) scroll_pane_cp018_ParamLimits

0xb73c,	// (0x00095644) scroll_pane_cp018

0xb754,	// (0x0009565c) scroll_pane_cp016_ParamLimits

0xb754,	// (0x0009565c) scroll_pane_cp016

0x3b2d,	// (0x0008da35) smil2_image_pane_ParamLimits

0x3b2d,	// (0x0008da35) smil2_image_pane

0x3b5d,	// (0x0008da65) smil2_root_pane_ParamLimits

0x3b5d,	// (0x0008da65) smil2_root_pane

0x3b95,	// (0x0008da9d) smil2_text_pane_ParamLimits

0x3b95,	// (0x0008da9d) smil2_text_pane

0xa512,	// (0x0009441a) bg_list_pane_cp06

0xb790,	// (0x00095698) grid_radio_pane

0xa512,	// (0x0009441a) bg_popup_window_pane_cp06

0xb798,	// (0x000956a0) main_fmradio_pane_t1

0xb153,	// (0x0009505b) heading_pane_cp04

0xb7a6,	// (0x000956ae) main_fmradio_pane_t2

0xc7be,	// (0x000966c6) popup_cale_lunar_info_window_g1

0xb7b4,	// (0x000956bc) main_fmradio_pane_t3

0xc7c6,	// (0x000966ce) popup_cale_lunar_info_window_g2

0xb7c2,	// (0x000956ca) main_fmradio_pane_t4

0x0001,

0xb7d0,	// (0x000956d8) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x000994d8) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000993ff) main_fmradio_pane_t

0xb7de,	// (0x000956e6) wait_bar_pane_cp03

0xb7e6,	// (0x000956ee) cell_fmradio_pane_ParamLimits

0xb7e6,	// (0x000956ee) cell_fmradio_pane

0xb63f,	// (0x00095547) cell_fmradio_pane_g1_ParamLimits

0xb63f,	// (0x00095547) cell_fmradio_pane_g1

0xa512,	// (0x0009441a) grid_highlight_pane_cp011

0xb7f9,	// (0x00095701) poc_content_pane_ParamLimits

0xb7f9,	// (0x00095701) poc_content_pane

0xb80b,	// (0x00095713) scroll_pane_cp019

0x3c15,	// (0x0008db1d) popup_call_poc_act_window_ParamLimits

0x3c15,	// (0x0008db1d) popup_call_poc_act_window

0x3c39,	// (0x0008db41) popup_call_poc_inact_window_ParamLimits

0x3c39,	// (0x0008db41) popup_call_poc_inact_window

0xf594,	// (0x0009949c) bg_popup_call_poc_act_pane_g

0xc77e,	// (0x00096686) bg_popup_call_poc_inact_pane_g1

0xc786,	// (0x0009668e) bg_popup_call_poc_inact_pane_g2

0xb813,	// (0x0009571b) popup_call_poc_act_window_g2

0xc78e,	// (0x00096696) bg_popup_call_poc_inact_pane_g3

0xc70e,	// (0x00096616) bg_popup_call_poc_inact_pane_g4

0xc796,	// (0x0009669e) bg_popup_call_poc_inact_pane_g5

0xb81b,	// (0x00095723) popup_call_poc_act_window_t1_ParamLimits

0xb81b,	// (0x00095723) popup_call_poc_act_window_t1

0xb843,	// (0x0009574b) popup_call_poc_act_window_t2_ParamLimits

0xb843,	// (0x0009574b) popup_call_poc_act_window_t2

0xb86b,	// (0x00095773) popup_call_poc_act_window_t3_ParamLimits

0xb86b,	// (0x00095773) popup_call_poc_act_window_t3

0xb893,	// (0x0009579b) popup_call_poc_act_window_t4_ParamLimits

0xb893,	// (0x0009579b) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0009940a) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0009940a) popup_call_poc_act_window_t

0xc79e,	// (0x000966a6) bg_popup_call_poc_inact_pane_g6

0xc7a6,	// (0x000966ae) bg_popup_call_poc_inact_pane_g7

0xc7ae,	// (0x000966b6) bg_popup_call_poc_inact_pane_g8

0xb8a5,	// (0x000957ad) popup_call_poc_inact_window_g2

0xc7b6,	// (0x000966be) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x000994b3) bg_popup_call_poc_inact_pane_g

0xb8ad,	// (0x000957b5) popup_call_poc_inact_window_t1_ParamLimits

0xb8ad,	// (0x000957b5) popup_call_poc_inact_window_t1

0xb8c2,	// (0x000957ca) popup_call_poc_inact_window_t2_ParamLimits

0xb8c2,	// (0x000957ca) popup_call_poc_inact_window_t2

0xb8d7,	// (0x000957df) popup_call_poc_inact_window_t3_ParamLimits

0xb8d7,	// (0x000957df) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00099413) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00099413) popup_call_poc_inact_window_t

0xc8fb,	// (0x00096803) context_pane_ParamLimits

0x4461,	// (0x0008e369) signal_pane_ParamLimits

0xaa15,	// (0x0009491d) main_call2_pane

0x98c5,	// (0x000937cd) popup_phob_thumbnail2_window_ParamLimits

0x98c5,	// (0x000937cd) popup_phob_thumbnail2_window

0x9856,	// (0x0009375e) aid_hotspot_pointer_arrow_pane

0x985e,	// (0x00093766) aid_hotspot_pointer_hand_pane

0x3f83,	// (0x0008de8b) phob_pre_status_pane_g5

0x1eea,	// (0x0008bdf2) cams_zoom_pane_ParamLimits

0x1ef9,	// (0x0008be01) image_vga_pane_ParamLimits

0x1f13,	// (0x0008be1b) main_camera_pane_g1_ParamLimits

0x1f25,	// (0x0008be2d) main_camera_pane_g2_ParamLimits

0x1f35,	// (0x0008be3d) main_camera_pane_g3_ParamLimits

0x1f45,	// (0x0008be4d) main_camera_pane_g4_ParamLimits

0x1f55,	// (0x0008be5d) main_camera_pane_g5_ParamLimits

0x1f65,	// (0x0008be6d) main_camera_pane_g6_ParamLimits

0x1f75,	// (0x0008be7d) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00099112) main_camera_pane_g_ParamLimits

0x1f85,	// (0x0008be8d) main_camera_pane_t1_ParamLimits

0x1f9b,	// (0x0008bea3) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00099123) main_camera_pane_t_ParamLimits

0xa76d,	// (0x00094675) bg_popup_preview_window_pane_cp01_ParamLimits

0xa76d,	// (0x00094675) bg_popup_preview_window_pane_cp01

0xb8ec,	// (0x000957f4) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8ec,	// (0x000957f4) popup_phob_thumbnail2_window_g1

0xa512,	// (0x0009441a) call2_cli_visual_pane

0x3c6d,	// (0x0008db75) popup_call2_audio_conf_window_ParamLimits

0x3c6d,	// (0x0008db75) popup_call2_audio_conf_window

0x3c8d,	// (0x0008db95) popup_call2_audio_first_window_ParamLimits

0x3c8d,	// (0x0008db95) popup_call2_audio_first_window

0x3d23,	// (0x0008dc2b) popup_call2_audio_in_window_ParamLimits

0x3d23,	// (0x0008dc2b) popup_call2_audio_in_window

0x3d6b,	// (0x0008dc73) popup_call2_audio_out_window_ParamLimits

0x3d6b,	// (0x0008dc73) popup_call2_audio_out_window

0x3dd5,	// (0x0008dcdd) popup_call2_audio_second_window_ParamLimits

0x3dd5,	// (0x0008dcdd) popup_call2_audio_second_window

0x3e3b,	// (0x0008dd43) popup_call2_audio_wait_window_ParamLimits

0x3e3b,	// (0x0008dd43) popup_call2_audio_wait_window

0xa512,	// (0x0009441a) bg_popup_call2_act_pane_cp03

0xa74f,	// (0x00094657) list_conf_pane_cp

0xb8f8,	// (0x00095800) popup_call2_audio_conf_window_t1

0xb906,	// (0x0009580e) list_single_graphic_popup_conf2_pane_ParamLimits

0xb906,	// (0x0009580e) list_single_graphic_popup_conf2_pane

0xb1c3,	// (0x000950cb) list_highlight_pane_cp04

0xb919,	// (0x00095821) list_single_graphic_popup_conf2_pane_g1

0xb1d4,	// (0x000950dc) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0009941a) list_single_graphic_popup_conf2_pane_g

0xb923,	// (0x0009582b) list_single_graphic_popup_conf2_pane_t1

0xb931,	// (0x00095839) bg_popup_call2_act_pane_cp01_ParamLimits

0xb931,	// (0x00095839) bg_popup_call2_act_pane_cp01

0xb9bb,	// (0x000958c3) call_type_pane_cp05_ParamLimits

0xb9bb,	// (0x000958c3) call_type_pane_cp05

0xba0f,	// (0x00095917) popup_call2_audio_second_window_g1_ParamLimits

0xba0f,	// (0x00095917) popup_call2_audio_second_window_g1

0xba63,	// (0x0009596b) popup_call2_audio_second_window_g2_ParamLimits

0xba63,	// (0x0009596b) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0009941f) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0009941f) popup_call2_audio_second_window_g

0xbac8,	// (0x000959d0) popup_call2_audio_second_window_t1_ParamLimits

0xbac8,	// (0x000959d0) popup_call2_audio_second_window_t1

0xbb83,	// (0x00095a8b) popup_call2_audio_second_window_t2_ParamLimits

0xbb83,	// (0x00095a8b) popup_call2_audio_second_window_t2

0xbbd6,	// (0x00095ade) popup_call2_audio_second_window_t3_ParamLimits

0xbbd6,	// (0x00095ade) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x00099426) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x00099426) popup_call2_audio_second_window_t

0xa512,	// (0x0009441a) bg_popup_call2_in_pane_cp02

0xa51c,	// (0x00094424) call_type_pane_cp04

0xa524,	// (0x0009442c) popup_call2_audio_wait_window_g1

0xa52c,	// (0x00094434) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00099001) popup_call2_audio_wait_window_g

0xa534,	// (0x0009443c) popup_call2_audio_wait_window_t3

0xbcc9,	// (0x00095bd1) bg_popup_call2_act_pane_ParamLimits

0xbcc9,	// (0x00095bd1) bg_popup_call2_act_pane

0xbd89,	// (0x00095c91) call_type_pane_cp03_ParamLimits

0xbd89,	// (0x00095c91) call_type_pane_cp03

0xbded,	// (0x00095cf5) popup_call2_audio_first_window_g1_ParamLimits

0xbded,	// (0x00095cf5) popup_call2_audio_first_window_g1

0xbe5d,	// (0x00095d65) popup_call2_audio_first_window_g2_ParamLimits

0xbe5d,	// (0x00095d65) popup_call2_audio_first_window_g2

0xb529,	// (0x00095431) popup_call2_audio_first_window_g3_ParamLimits

0xb529,	// (0x00095431) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0009942f) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0009942f) popup_call2_audio_first_window_g

0xbf3b,	// (0x00095e43) popup_call2_audio_first_window_t1_ParamLimits

0xbf3b,	// (0x00095e43) popup_call2_audio_first_window_t1

0xc03e,	// (0x00095f46) popup_call2_audio_first_window_t4_ParamLimits

0xc03e,	// (0x00095f46) popup_call2_audio_first_window_t4

0xc121,	// (0x00096029) popup_call2_audio_first_window_t5_ParamLimits

0xc121,	// (0x00096029) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0009943a) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0009943a) popup_call2_audio_first_window_t

0xa765,	// (0x0009466d) bg_popup_call2_act_pane_g1

0xc7ce,	// (0x000966d6) popup_cale_lunar_info_window_t1

0xc7dc,	// (0x000966e4) popup_cale_lunar_info_window_t2

0xc7ea,	// (0x000966f2) popup_cale_lunar_info_window_t3

0xa512,	// (0x0009441a) bg_popup_call2_bubble_pane

0xc222,	// (0x0009612a) bg_popup_call2_in_pane_cp01_ParamLimits

0xc222,	// (0x0009612a) bg_popup_call2_in_pane_cp01

0xa1ee,	// (0x000940f6) call_type_pane_cp02

0xc26a,	// (0x00096172) popup_call2_audio_out_window_g1_ParamLimits

0xc26a,	// (0x00096172) popup_call2_audio_out_window_g1

0xc296,	// (0x0009619e) popup_call2_audio_out_window_g2_ParamLimits

0xc296,	// (0x0009619e) popup_call2_audio_out_window_g2

0xc2be,	// (0x000961c6) popup_call2_audio_out_window_g3_ParamLimits

0xc2be,	// (0x000961c6) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x00099443) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x00099443) popup_call2_audio_out_window_g

0xc2f9,	// (0x00096201) popup_call2_audio_out_window_t1_ParamLimits

0xc2f9,	// (0x00096201) popup_call2_audio_out_window_t1

0xc358,	// (0x00096260) popup_call2_audio_out_window_t2_ParamLimits

0xc358,	// (0x00096260) popup_call2_audio_out_window_t2

0xc3ac,	// (0x000962b4) popup_call2_audio_out_window_t3_ParamLimits

0xc3ac,	// (0x000962b4) popup_call2_audio_out_window_t3

0xc3c2,	// (0x000962ca) popup_call2_audio_out_window_t4_ParamLimits

0xc3c2,	// (0x000962ca) popup_call2_audio_out_window_t4

0xc3d8,	// (0x000962e0) popup_call2_audio_out_window_t5_ParamLimits

0xc3d8,	// (0x000962e0) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0009944c) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0009944c) popup_call2_audio_out_window_t

0xc43c,	// (0x00096344) bg_popup_call2_in_pane_ParamLimits

0xc43c,	// (0x00096344) bg_popup_call2_in_pane

0xc498,	// (0x000963a0) popup_call2_audio_in_window_g1_ParamLimits

0xc498,	// (0x000963a0) popup_call2_audio_in_window_g1

0xc4d0,	// (0x000963d8) popup_call2_audio_in_window_g2_ParamLimits

0xc4d0,	// (0x000963d8) popup_call2_audio_in_window_g2

0xc508,	// (0x00096410) popup_call2_audio_in_window_g3_ParamLimits

0xc508,	// (0x00096410) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x00099459) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x00099459) popup_call2_audio_in_window_g

0xc560,	// (0x00096468) popup_call2_audio_in_window_t1_ParamLimits

0xc560,	// (0x00096468) popup_call2_audio_in_window_t1

0xc5e0,	// (0x000964e8) popup_call2_audio_in_window_t2_ParamLimits

0xc5e0,	// (0x000964e8) popup_call2_audio_in_window_t2

0xc660,	// (0x00096568) popup_call2_audio_in_window_t3_ParamLimits

0xc660,	// (0x00096568) popup_call2_audio_in_window_t3

0xc67a,	// (0x00096582) popup_call2_audio_in_window_t4_ParamLimits

0xc67a,	// (0x00096582) popup_call2_audio_in_window_t4

0xc68c,	// (0x00096594) popup_call2_audio_in_window_t5_ParamLimits

0xc68c,	// (0x00096594) popup_call2_audio_in_window_t5

0xc6a1,	// (0x000965a9) popup_call2_audio_in_window_t6_ParamLimits

0xc6a1,	// (0x000965a9) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x00099462) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x00099462) popup_call2_audio_in_window_t

0xa765,	// (0x0009466d) bg_popup_call2_in_pane_g1

0xc7f8,	// (0x00096700) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x000994dd) popup_cale_lunar_info_window_t

0xa76d,	// (0x00094675) bg_popup_call2_rect_pane_ParamLimits

0xa76d,	// (0x00094675) bg_popup_call2_rect_pane

0xa512,	// (0x0009441a) call2_cli_visual_graphic_pane

0xa512,	// (0x0009441a) call2_cli_visual_text_pane

0x98ec,	// (0x000937f4) smil_status_volume_pane_g3

0x0002,

0xa893,	// (0x0009479b) call2_cli_visual_graphic_pane_g1

0xa893,	// (0x0009479b) call2_cli_visual_graphic_pane_g2

0xa893,	// (0x0009479b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0009946f) call2_cli_visual_graphic_pane_g

0xc6b6,	// (0x000965be) bg_popup_call2_rect_pane_g1

0xa931,	// (0x00094839) bg_popup_call2_rect_pane_g2

0xc6be,	// (0x000965c6) bg_popup_call2_rect_pane_g3

0xc6c6,	// (0x000965ce) bg_popup_call2_rect_pane_g4

0xc6ce,	// (0x000965d6) bg_popup_call2_rect_pane_g5

0xc6d6,	// (0x000965de) bg_popup_call2_rect_pane_g6

0xc6de,	// (0x000965e6) bg_popup_call2_rect_pane_g7

0xc6e6,	// (0x000965ee) bg_popup_call2_rect_pane_g8

0xc6ee,	// (0x000965f6) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x00099476) bg_popup_call2_rect_pane_g

0xc6f6,	// (0x000965fe) bg_popup_call2_bubble_pane_g1

0xc6fe,	// (0x00096606) bg_popup_call2_bubble_pane_g2

0xc706,	// (0x0009660e) bg_popup_call2_bubble_pane_g3

0xc70e,	// (0x00096616) bg_popup_call2_bubble_pane_g4

0xc716,	// (0x0009661e) bg_popup_call2_bubble_pane_g5

0xc71e,	// (0x00096626) bg_popup_call2_bubble_pane_g6

0xc726,	// (0x0009662e) bg_popup_call2_bubble_pane_g7

0xc72e,	// (0x00096636) bg_popup_call2_bubble_pane_g8

0xc736,	// (0x0009663e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x00099489) bg_popup_call2_bubble_pane_g

0x1922,	// (0x0008b82a) aid_cale_week_size_cell_pane

0x1fb1,	// (0x0008beb9) aid_cams_cif_uncrop_pane_ParamLimits

0x1fb1,	// (0x0008beb9) aid_cams_cif_uncrop_pane

0x2166,	// (0x0008c06e) aid_cams_size_cell_ParamLimits

0x2166,	// (0x0008c06e) aid_cams_size_cell

0x217a,	// (0x0008c082) grid_cams_pane_ParamLimits

0x2194,	// (0x0008c09c) linegrid_cams_pane_ParamLimits

0x2292,	// (0x0008c19a) call_video_pane_t1

0x22b0,	// (0x0008c1b8) call_video_pane_t2

0x0001,

0xf26e,	// (0x00099176) call_video_pane_t

0x26d6,	// (0x0008c5de) aid_cale_month_size_cell_pane_ParamLimits

0x26d6,	// (0x0008c5de) aid_cale_month_size_cell_pane

0xf61e,	// (0x00099526) smil_status_volume_pane_g

0x98f9,	// (0x00093801) volume_smil_pane_ParamLimits

0x96af,	// (0x000935b7) aid_popup2_width_pane

0x1898,	// (0x0008b7a0) cell_qdial_pane_g4_ParamLimits

0x1898,	// (0x0008b7a0) cell_qdial_pane_g4

0x32bc,	// (0x0008d1c4) aid_blid_cardinal_pane_ParamLimits

0x32c8,	// (0x0008d1d0) aid_blid_destination_pane_ParamLimits

0x32c8,	// (0x0008d1d0) aid_blid_destination_pane

0xa76d,	// (0x00094675) bg_popup_call_poc_act_pane_ParamLimits

0xa76d,	// (0x00094675) bg_popup_call_poc_act_pane

0xa76d,	// (0x00094675) bg_popup_call_poc_inact_pane_ParamLimits

0xa76d,	// (0x00094675) bg_popup_call_poc_inact_pane

0xc73e,	// (0x00096646) bg_popup_call_poc_act_pane_g1

0xc746,	// (0x0009664e) bg_popup_call_poc_act_pane_g2

0xc74e,	// (0x00096656) bg_popup_call_poc_act_pane_g3

0xc70e,	// (0x00096616) bg_popup_call_poc_act_pane_g4

0xc716,	// (0x0009661e) bg_popup_call_poc_act_pane_g5

0xc756,	// (0x0009665e) bg_popup_call_poc_act_pane_g6

0xc726,	// (0x0009662e) bg_popup_call_poc_act_pane_g7

0xc75e,	// (0x00096666) bg_popup_call_poc_act_pane_g8

0xa512,	// (0x0009441a) main_usb_pane

0x98a0,	// (0x000937a8) popup_cale_lunar_info_window

0x257c,	// (0x0008c484) im_reading_pane_t1_ParamLimits

0xab62,	// (0x00094a6a) list_im_pane_ParamLimits

0xab73,	// (0x00094a7b) scroll_pane_cp07_ParamLimits

0xa512,	// (0x0009441a) grid_highlight_pane_cp012

0xa76d,	// (0x00094675) mup_scale_pane_ParamLimits

0xb63f,	// (0x00095547) main_usb_pane_g1_ParamLimits

0xb63f,	// (0x00095547) main_usb_pane_g1

0x3e98,	// (0x0008dda0) main_usb_pane_g2_ParamLimits

0x3e98,	// (0x0008dda0) main_usb_pane_g2

0x0001,

0xf5be,	// (0x000994c6) main_usb_pane_g_ParamLimits

0xf5be,	// (0x000994c6) main_usb_pane_g

0x3eae,	// (0x0008ddb6) main_usb_pane_t1_ParamLimits

0x3eae,	// (0x0008ddb6) main_usb_pane_t1

0x3ec0,	// (0x0008ddc8) main_usb_pane_t2_ParamLimits

0x3ec0,	// (0x0008ddc8) main_usb_pane_t2

0x3ed2,	// (0x0008ddda) main_usb_pane_t3_ParamLimits

0x3ed2,	// (0x0008ddda) main_usb_pane_t3

0x3ee4,	// (0x0008ddec) main_usb_pane_t4_ParamLimits

0x3ee4,	// (0x0008ddec) main_usb_pane_t4

0x3ef6,	// (0x0008ddfe) main_usb_pane_t5_ParamLimits

0x3ef6,	// (0x0008ddfe) main_usb_pane_t5

0x3f08,	// (0x0008de10) main_usb_pane_t6_ParamLimits

0x3f08,	// (0x0008de10) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x000994cb) main_usb_pane_t_ParamLimits

0x326b,	// (0x0008d173) aid_text_placing

0x3274,	// (0x0008d17c) main_location2_pane_t1_ParamLimits

0x3286,	// (0x0008d18e) main_location2_pane_t2_ParamLimits

0x3298,	// (0x0008d1a0) main_location2_pane_t3_ParamLimits

0x32aa,	// (0x0008d1b2) main_location2_pane_t4_ParamLimits

0x32aa,	// (0x0008d1b2) main_location2_pane_t4

0xf3cf,	// (0x000992d7) main_location2_pane_t_ParamLimits

0xa7a9,	// (0x000946b1) find_pinb_pane_g2_ParamLimits

0xa7a9,	// (0x000946b1) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x00099027) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x00099027) find_pinb_pane_g

0xa7b5,	// (0x000946bd) find_pinb_pane_t1_ParamLimits

0xa7c7,	// (0x000946cf) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0009902c) find_pinb_pane_t_ParamLimits

0xa512,	// (0x0009441a) main_call3_pane

0x2bbd,	// (0x0008cac5) cale_month_day_heading_pane_t1_ParamLimits

0x2bff,	// (0x0008cb07) cale_month_day_heading_pane_t2_ParamLimits

0x2c34,	// (0x0008cb3c) cale_month_day_heading_pane_t3_ParamLimits

0x2c69,	// (0x0008cb71) cale_month_day_heading_pane_t4_ParamLimits

0x2ca6,	// (0x0008cbae) cale_month_day_heading_pane_t5_ParamLimits

0x2ceb,	// (0x0008cbf3) cale_month_day_heading_pane_t6_ParamLimits

0x2d30,	// (0x0008cc38) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000991ae) cale_month_day_heading_pane_t_ParamLimits

0xadbd,	// (0x00094cc5) smil_status_volume_pane

0x3991,	// (0x0008d899) postcard_address_pane_ParamLimits

0x3991,	// (0x0008d899) postcard_address_pane

0x39a3,	// (0x0008d8ab) postcard_message_pane_ParamLimits

0x39a3,	// (0x0008d8ab) postcard_message_pane

0x3e75,	// (0x0008dd7d) call2_cli_visual_pane_t1_ParamLimits

0x3e75,	// (0x0008dd7d) call2_cli_visual_pane_t1

0x4690,	// (0x0008e598) postcard_message_pane_t1_ParamLimits

0x4690,	// (0x0008e598) postcard_message_pane_t1

0x4679,	// (0x0008e581) postcard_address_pane_t1_ParamLimits

0x4679,	// (0x0008e581) postcard_address_pane_t1

0x4665,	// (0x0008e56d) popup_call3_audio_in_window_ParamLimits

0x4665,	// (0x0008e56d) popup_call3_audio_in_window

0x44f0,	// (0x0008e3f8) bg_popup_call3_in_pane_ParamLimits

0x44f0,	// (0x0008e3f8) bg_popup_call3_in_pane

0x4566,	// (0x0008e46e) popup_call3_audio_in_window_g1_ParamLimits

0x4566,	// (0x0008e46e) popup_call3_audio_in_window_g1

0x4586,	// (0x0008e48e) popup_call3_audio_in_window_g2_ParamLimits

0x4586,	// (0x0008e48e) popup_call3_audio_in_window_g2

0x45a6,	// (0x0008e4ae) popup_call3_audio_in_window_g3_ParamLimits

0x45a6,	// (0x0008e4ae) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0009952d) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0009952d) popup_call3_audio_in_window_g

0x45d7,	// (0x0008e4df) popup_call3_audio_in_window_t1_ParamLimits

0x45d7,	// (0x0008e4df) popup_call3_audio_in_window_t1

0x4615,	// (0x0008e51d) popup_call3_audio_in_window_t2_ParamLimits

0x4615,	// (0x0008e51d) popup_call3_audio_in_window_t2

0x4653,	// (0x0008e55b) popup_call3_audio_in_window_t3_ParamLimits

0x4653,	// (0x0008e55b) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x00099536) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x00099536) popup_call3_audio_in_window_t

0xaa15,	// (0x0009491d) bg_popup_call3_rect_pane

0xc6b6,	// (0x000965be) bg_popup_call3_rect_pane_g1

0xa931,	// (0x00094839) bg_popup_call3_rect_pane_g2

0xc6be,	// (0x000965c6) bg_popup_call3_rect_pane_g3

0xc6c6,	// (0x000965ce) bg_popup_call3_rect_pane_g4

0xc6ce,	// (0x000965d6) bg_popup_call3_rect_pane_g5

0xc6d6,	// (0x000965de) bg_popup_call3_rect_pane_g6

0xc6de,	// (0x000965e6) bg_popup_call3_rect_pane_g7

0x35a2,	// (0x0008d4aa) mup_visualizer_osc_pane

0xb561,	// (0x00095469) mup_visualizer_spec_pane

0x4520,	// (0x0008e428) call3_video_qcif_pane_ParamLimits

0x4520,	// (0x0008e428) call3_video_qcif_pane

0x4533,	// (0x0008e43b) call3_video_qcif_uncrop_pane_ParamLimits

0x4533,	// (0x0008e43b) call3_video_qcif_uncrop_pane

0x4541,	// (0x0008e449) call3_video_subqcif_pane_ParamLimits

0x4541,	// (0x0008e449) call3_video_subqcif_pane

0x4555,	// (0x0008e45d) call3_video_subqcif_uncrop_pane_ParamLimits

0x4555,	// (0x0008e45d) call3_video_subqcif_uncrop_pane

0x45c6,	// (0x0008e4ce) popup_call3_audio_in_window_g4_ParamLimits

0x45c6,	// (0x0008e4ce) popup_call3_audio_in_window_g4

0x44df,	// (0x0008e3e7) mup_spec_half_pane

0x44e8,	// (0x0008e3f0) mup_spec_half_pane_cp

0xc95b,	// (0x00096863) mup_osc_middle_pane

0xc964,	// (0x0009686c) mup_visualizer_osc_pane_g1

0x44bf,	// (0x0008e3c7) mup_spec_bar_pane_ParamLimits

0x44bf,	// (0x0008e3c7) mup_spec_bar_pane

0xc948,	// (0x00096850) mup_spec_bar_pane_g1

0xc952,	// (0x0009685a) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x00099521) mup_spec_bar_pane_g

0x1922,	// (0x0008b82a) aid_cale_week_size_cell_pane_ParamLimits

0x193c,	// (0x0008b844) bg_cale_heading_pane_ParamLimits

0xa96e,	// (0x00094876) bg_cale_pane_cp01_ParamLimits

0x1954,	// (0x0008b85c) cale_week_corner_pane_ParamLimits

0x1973,	// (0x0008b87b) cale_week_day_heading_pane_ParamLimits

0x1990,	// (0x0008b898) cale_week_scroll_pane_g1_ParamLimits

0x19a3,	// (0x0008b8ab) cale_week_scroll_pane_g2_ParamLimits

0x19bb,	// (0x0008b8c3) cale_week_scroll_pane_g3_ParamLimits

0x19d3,	// (0x0008b8db) cale_week_scroll_pane_g4_ParamLimits

0x19eb,	// (0x0008b8f3) cale_week_scroll_pane_g5_ParamLimits

0x1a0b,	// (0x0008b913) cale_week_scroll_pane_g6_ParamLimits

0x1a2b,	// (0x0008b933) cale_week_scroll_pane_g7_ParamLimits

0x1a4b,	// (0x0008b953) cale_week_scroll_pane_g8_ParamLimits

0x1a6f,	// (0x0008b977) cale_week_scroll_pane_g9_ParamLimits

0x1a87,	// (0x0008b98f) cale_week_scroll_pane_g10_ParamLimits

0x1a9f,	// (0x0008b9a7) cale_week_scroll_pane_g11_ParamLimits

0x1ab7,	// (0x0008b9bf) cale_week_scroll_pane_g12_ParamLimits

0x1acf,	// (0x0008b9d7) cale_week_scroll_pane_g13_ParamLimits

0x1acf,	// (0x0008b9d7) cale_week_scroll_pane_g14_ParamLimits

0x1acf,	// (0x0008b9d7) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000990b8) cale_week_scroll_pane_g_ParamLimits

0x1b0b,	// (0x0008ba13) cale_week_time_pane_ParamLimits

0x1b2f,	// (0x0008ba37) grid_cale_week_pane_ParamLimits

0xa98b,	// (0x00094893) listscroll_cale_week_pane_t1

0xa99d,	// (0x000948a5) scroll_pane_cp08_ParamLimits

0x2736,	// (0x0008c63e) cale_month_corner_pane_ParamLimits

0xad93,	// (0x00094c9b) cale_month_pane_t1

0x2b50,	// (0x0008ca58) cale_month_week_pane_ParamLimits

0x309c,	// (0x0008cfa4) popup_call_status_window_g1_ParamLimits

0x30b0,	// (0x0008cfb8) popup_call_status_window_g2_ParamLimits

0x30c4,	// (0x0008cfcc) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0009925e) popup_call_status_window_g_ParamLimits

0xb143,	// (0x0009504b) aid_call2_pane

0x05ff,	// (0x0008a507) msg_header_pane_g1

0x3991,	// (0x0008d899) postcard_address2_pane_ParamLimits

0x3991,	// (0x0008d899) postcard_address2_pane

0x39a3,	// (0x0008d8ab) postcard_message2_pane_ParamLimits

0x39a3,	// (0x0008d8ab) postcard_message2_pane

0x446f,	// (0x0008e377) message2_row_pane_ParamLimits

0x446f,	// (0x0008e377) message2_row_pane

0x448c,	// (0x0008e394) address2_row_pane_ParamLimits

0x448c,	// (0x0008e394) address2_row_pane

0xc916,	// (0x0009681e) postcard_message2_row_pane_g1

0xc91e,	// (0x00096826) postcard_message2_row_pane_t1

0xc916,	// (0x0009681e) address2_row_pane_g1

0xc91e,	// (0x00096826) address2_row_pane_t1

0x1e69,	// (0x0008bd71) aid_size_cell_vorec

0xa512,	// (0x0009441a) main_rss_pane

0x449f,	// (0x0008e3a7) rss_list_single_pane_ParamLimits

0x449f,	// (0x0008e3a7) rss_list_single_pane

0xc92c,	// (0x00096834) rss_list_single_pane_t1

0xc93a,	// (0x00096842) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0009951c) rss_list_single_pane_t

0xa512,	// (0x0009441a) main_camera2_pane

0xa512,	// (0x0009441a) main_video2_pane

0x4709,	// (0x0008e611) cams_zoom_pane_cp2_ParamLimits

0x4709,	// (0x0008e611) cams_zoom_pane_cp2

0x4729,	// (0x0008e631) image2_vga_pane_ParamLimits

0x4729,	// (0x0008e631) image2_vga_pane

0x477a,	// (0x0008e682) main_camera2_pane_g1_ParamLimits

0x477a,	// (0x0008e682) main_camera2_pane_g1

0x479a,	// (0x0008e6a2) main_camera2_pane_g2_ParamLimits

0x479a,	// (0x0008e6a2) main_camera2_pane_g2

0x47ba,	// (0x0008e6c2) main_camera2_pane_g3_ParamLimits

0x47ba,	// (0x0008e6c2) main_camera2_pane_g3

0x47da,	// (0x0008e6e2) main_camera2_pane_g4_ParamLimits

0x47da,	// (0x0008e6e2) main_camera2_pane_g4

0x47fa,	// (0x0008e702) main_camera2_pane_g5_ParamLimits

0x47fa,	// (0x0008e702) main_camera2_pane_g5

0x481a,	// (0x0008e722) main_camera2_pane_g6_ParamLimits

0x481a,	// (0x0008e722) main_camera2_pane_g6

0x483a,	// (0x0008e742) main_camera2_pane_g7_ParamLimits

0x483a,	// (0x0008e742) main_camera2_pane_g7

0x485a,	// (0x0008e762) main_camera2_pane_g8_ParamLimits

0x485a,	// (0x0008e762) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0009953d) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0009953d) main_camera2_pane_g

0x489a,	// (0x0008e7a2) main_camera2_pane_t1_ParamLimits

0x489a,	// (0x0008e7a2) main_camera2_pane_t1

0x48cf,	// (0x0008e7d7) main_camera2_pane_t2_ParamLimits

0x48cf,	// (0x0008e7d7) main_camera2_pane_t2

0x48f5,	// (0x0008e7fd) main_camera2_pane_t3_ParamLimits

0x48f5,	// (0x0008e7fd) main_camera2_pane_t3

0x4953,	// (0x0008e85b) main_camera2_pane_t4_ParamLimits

0x4953,	// (0x0008e85b) main_camera2_pane_t4

0x0006,

0xf648,	// (0x00099550) main_camera2_pane_t_ParamLimits

0xf648,	// (0x00099550) main_camera2_pane_t

0x49e5,	// (0x0008e8ed) cams_zoom_pane_cp4_ParamLimits

0x49e5,	// (0x0008e8ed) cams_zoom_pane_cp4

0x49fb,	// (0x0008e903) image2_cif_pane_ParamLimits

0x49fb,	// (0x0008e903) image2_cif_pane

0x4a26,	// (0x0008e92e) image2_subqcif_pane_ParamLimits

0x4a26,	// (0x0008e92e) image2_subqcif_pane

0x4a40,	// (0x0008e948) main_video2_pane_g1_ParamLimits

0x4a40,	// (0x0008e948) main_video2_pane_g1

0x4a5a,	// (0x0008e962) main_video2_pane_g2_ParamLimits

0x4a5a,	// (0x0008e962) main_video2_pane_g2

0x4a70,	// (0x0008e978) main_video2_pane_g3_ParamLimits

0x4a70,	// (0x0008e978) main_video2_pane_g3

0x4a86,	// (0x0008e98e) main_video2_pane_g4_ParamLimits

0x4a86,	// (0x0008e98e) main_video2_pane_g4

0x4a9c,	// (0x0008e9a4) main_video2_pane_g5_ParamLimits

0x4a9c,	// (0x0008e9a4) main_video2_pane_g5

0x4ab2,	// (0x0008e9ba) main_video2_pane_g6_ParamLimits

0x4ab2,	// (0x0008e9ba) main_video2_pane_g6

0x0005,

0xf657,	// (0x0009955f) main_video2_pane_g_ParamLimits

0xf657,	// (0x0009955f) main_video2_pane_g

0x4acc,	// (0x0008e9d4) main_video2_pane_t1_ParamLimits

0x4acc,	// (0x0008e9d4) main_video2_pane_t1

0x4af0,	// (0x0008e9f8) main_video2_pane_t2_ParamLimits

0x4af0,	// (0x0008e9f8) main_video2_pane_t2

0x4b3e,	// (0x0008ea46) main_video2_pane_t3_ParamLimits

0x4b3e,	// (0x0008ea46) main_video2_pane_t3

0x0002,

0xf664,	// (0x0009956c) main_video2_pane_t_ParamLimits

0xf664,	// (0x0009956c) main_video2_pane_t

0x3fc3,	// (0x0008decb) call_muted_g2

0x0001,

0xf606,	// (0x0009950e) call_muted_g

0xa512,	// (0x0009441a) main_mup2_pane

0x4b86,	// (0x0008ea8e) main_mup2_pane_g1_ParamLimits

0x4b86,	// (0x0008ea8e) main_mup2_pane_g1

0x4b92,	// (0x0008ea9a) main_mup2_pane_g2_ParamLimits

0x4b92,	// (0x0008ea9a) main_mup2_pane_g2

0x9967,	// (0x0009386f) main_mup_pane_g13_cp1

0x996f,	// (0x00093877) mup_volume_pane_cp1

0x4bae,	// (0x0008eab6) main_mup2_pane_g4_ParamLimits

0x4bae,	// (0x0008eab6) main_mup2_pane_g4

0x4bc0,	// (0x0008eac8) main_mup2_pane_g5_ParamLimits

0x4bc0,	// (0x0008eac8) main_mup2_pane_g5

0x4bd2,	// (0x0008eada) main_mup2_pane_g6_ParamLimits

0x4bd2,	// (0x0008eada) main_mup2_pane_g6

0x4be4,	// (0x0008eaec) main_mup2_pane_g7_ParamLimits

0x4be4,	// (0x0008eaec) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x00099573) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x00099573) main_mup2_pane_g

0x4bfc,	// (0x0008eb04) main_mup2_pane_t1_ParamLimits

0x4bfc,	// (0x0008eb04) main_mup2_pane_t1

0x4c12,	// (0x0008eb1a) main_mup2_pane_t2_ParamLimits

0x4c12,	// (0x0008eb1a) main_mup2_pane_t2

0x4c28,	// (0x0008eb30) main_mup2_pane_t3_ParamLimits

0x4c28,	// (0x0008eb30) main_mup2_pane_t3

0x4c3e,	// (0x0008eb46) main_mup2_pane_t4_ParamLimits

0x4c3e,	// (0x0008eb46) main_mup2_pane_t4

0x4c56,	// (0x0008eb5e) main_mup2_pane_t5_ParamLimits

0x4c56,	// (0x0008eb5e) main_mup2_pane_t5

0x4c6e,	// (0x0008eb76) main_mup2_pane_t6_ParamLimits

0x4c6e,	// (0x0008eb76) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x00099582) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x00099582) main_mup2_pane_t

0x4c9e,	// (0x0008eba6) mup2_visualizer_pane_ParamLimits

0x4c9e,	// (0x0008eba6) mup2_visualizer_pane

0x4ccc,	// (0x0008ebd4) mup_progress_pane_cp_ParamLimits

0x4ccc,	// (0x0008ebd4) mup_progress_pane_cp

0x9952,	// (0x0009385a) mup_volume_pane_cp_ParamLimits

0x9952,	// (0x0009385a) mup_volume_pane_cp

0x4ce0,	// (0x0008ebe8) mup2_visualizer_pane_g1_ParamLimits

0x4ce0,	// (0x0008ebe8) mup2_visualizer_pane_g1

0xc99b,	// (0x000968a3) mup2_visualizer_pane_g2_ParamLimits

0xc99b,	// (0x000968a3) mup2_visualizer_pane_g2

0x4cf7,	// (0x0008ebff) mup2_visualizer_pane_g3_ParamLimits

0x4cf7,	// (0x0008ebff) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0009958f) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0009958f) mup2_visualizer_pane_g

0xb788,	// (0x00095690) aid_size_cell_fmradio

0x4175,	// (0x0008e07d) aid_height_parent_landcape

0xabf1,	// (0x00094af9) wml_content_pane_cp

0xabf9,	// (0x00094b01) wml_tabs_pane

0xac02,	// (0x00094b0a) popup_wml_miniature_window

0xac0a,	// (0x00094b12) scroll_pane_cp021

0xac1e,	// (0x00094b26) wml_content_pane_comp8

0xa512,	// (0x0009441a) bg_popup_sub_pane_cp05

0xc9b9,	// (0x000968c1) popup_wml_miniature_window_g1

0xc9c1,	// (0x000968c9) wml_miniature_view_pane

0x4d03,	// (0x0008ec0b) aid_size_wml_view

0x4d0b,	// (0x0008ec13) wml_miniature_view_pane_g1

0x4d14,	// (0x0008ec1c) wml_miniature_view_pane_g2

0x4d1d,	// (0x0008ec25) wml_miniature_view_pane_g3

0x4d25,	// (0x0008ec2d) wml_miniature_view_pane_g4

0x4d2d,	// (0x0008ec35) wml_miniature_view_pane_g5

0x4d35,	// (0x0008ec3d) wml_miniature_view_pane_g6

0x4d3d,	// (0x0008ec45) wml_miniature_view_pane_g7

0x4d45,	// (0x0008ec4d) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x00099596) wml_miniature_view_pane_g

0xc9c9,	// (0x000968d1) background_graphic_ParamLimits

0xc9c9,	// (0x000968d1) background_graphic

0xc9d5,	// (0x000968dd) wml_tabs_2_pane

0xc9de,	// (0x000968e6) wml_tabs_3_pane_ParamLimits

0xc9de,	// (0x000968e6) wml_tabs_3_pane

0xc9f0,	// (0x000968f8) wml_tabs_4_pane_ParamLimits

0xc9f0,	// (0x000968f8) wml_tabs_4_pane

0xca06,	// (0x0009690e) wml_tabs_5_pane_ParamLimits

0xca06,	// (0x0009690e) wml_tabs_5_pane

0xca20,	// (0x00096928) wml_tabs_pane_g2_ParamLimits

0xca20,	// (0x00096928) wml_tabs_pane_g2

0xca34,	// (0x0009693c) wml_tabs_pane_g3_ParamLimits

0xca34,	// (0x0009693c) wml_tabs_pane_g3

0x4d4d,	// (0x0008ec55) wml_tabs_2_active_pane_ParamLimits

0x4d4d,	// (0x0008ec55) wml_tabs_2_active_pane

0x4d61,	// (0x0008ec69) wml_tabs_2_passive_pane_ParamLimits

0x4d61,	// (0x0008ec69) wml_tabs_2_passive_pane

0x4d75,	// (0x0008ec7d) wml_tabs_3_active_pane_cp_ParamLimits

0x4d75,	// (0x0008ec7d) wml_tabs_3_active_pane_cp

0x4d8a,	// (0x0008ec92) wml_tabs_3_passive_pane_ParamLimits

0x4d8a,	// (0x0008ec92) wml_tabs_3_passive_pane

0x4d9d,	// (0x0008eca5) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d9d,	// (0x0008eca5) wml_tabs_3_passive_pane_cp

0x4db4,	// (0x0008ecbc) tabs_4_active_pane

0x4dbc,	// (0x0008ecc4) tabs_4_passive_pane

0x4dc6,	// (0x0008ecce) tabs_4_passive_pane_cp

0x4dce,	// (0x0008ecd6) tabs_4_passive_pane_cp2

0x3e90,	// (0x0008dd98) aid_height_text

0x3574,	// (0x0008d47c) mup_volume_cont_pane_ParamLimits

0x3574,	// (0x0008d47c) mup_volume_cont_pane

0x1539,	// (0x0008b441) aid_size_cell_pinb

0x1543,	// (0x0008b44b) aid_size_list_pinb

0x4cb8,	// (0x0008ebc0) mup2_volume_cont_pane_ParamLimits

0x4cb8,	// (0x0008ebc0) mup2_volume_cont_pane

0x993e,	// (0x00093846) mup2_volume_cont_pane_g1_ParamLimits

0x993e,	// (0x00093846) mup2_volume_cont_pane_g1

0x11eb,	// (0x0008b0f3) aid_size_cell_touch_ParamLimits

0x11eb,	// (0x0008b0f3) aid_size_cell_touch

0x1428,	// (0x0008b330) touch_pane_ParamLimits

0x1428,	// (0x0008b330) touch_pane

0xa0f5,	// (0x00093ffd) main_rss2_pane

0xca51,	// (0x00096959) listscroll_rss2_pane

0xca66,	// (0x0009696e) rss2_navigation_pane

0xca6e,	// (0x00096976) list_rss2_pane

0xb268,	// (0x00095170) scroll_pane_cp22

0xca76,	// (0x0009697e) rss2_navigation_pane_g1

0xca7f,	// (0x00096987) rss2_navigation_pane_g2

0xca87,	// (0x0009698f) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x000995a7) rss2_navigation_pane_g

0xca8f,	// (0x00096997) rss2_navigation_pane_t1

0x4dd8,	// (0x0008ece0) rss2_list_single_pane_ParamLimits

0x4dd8,	// (0x0008ece0) rss2_list_single_pane

0xca9d,	// (0x000969a5) rss2_list_single_pane_t2

0xcaab,	// (0x000969b3) rss2_list_single_pane_t3_ParamLimits

0xcaab,	// (0x000969b3) rss2_list_single_pane_t3

0xcac8,	// (0x000969d0) rss2_list_single_pane_t4

0x2f78,	// (0x0008ce80) smil_status_pane_g1

0xab1c,	// (0x00094a24) main_image2_pane_ParamLimits

0xab1c,	// (0x00094a24) main_image2_pane

0x487a,	// (0x0008e782) main_camera2_pane_g9_ParamLimits

0x487a,	// (0x0008e782) main_camera2_pane_g9

0x49a8,	// (0x0008e8b0) main_camera2_pane_t5_ParamLimits

0x49a8,	// (0x0008e8b0) main_camera2_pane_t5

0x990e,	// (0x00093816) main_camera2_pane_t6_ParamLimits

0x990e,	// (0x00093816) main_camera2_pane_t6

0x4dee,	// (0x0008ecf6) main_image2_pane_g1_ParamLimits

0x4dee,	// (0x0008ecf6) main_image2_pane_g1

0x3bcb,	// (0x0008dad3) smil2_video_pane_ParamLimits

0x3bcb,	// (0x0008dad3) smil2_video_pane

0x96bb,	// (0x000935c3) aid_zoom_text_primary_cp

0x96fb,	// (0x00093603) popup_preview_fixed_window

0xab5a,	// (0x00094a62) im_reading_pane_g1

0x46f1,	// (0x0008e5f9) cams2_bc_adjust_pane_cp_ParamLimits

0x46f1,	// (0x0008e5f9) cams2_bc_adjust_pane_cp

0x49d7,	// (0x0008e8df) cams2_bc_adjust_pane_ParamLimits

0x49d7,	// (0x0008e8df) cams2_bc_adjust_pane

0x9977,	// (0x0009387f) cams2_bc_adjust_pane_g1

0x997f,	// (0x00093887) cams2_slider_pane

0x9988,	// (0x00093890) cams2_slider_pane_g1

0x9991,	// (0x00093899) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x000995ae) cams2_slider_pane_g

0x162b,	// (0x0008b533) calc_display_pane_ParamLimits

0x1653,	// (0x0008b55b) calc_paper_pane_ParamLimits

0x1676,	// (0x0008b57e) grid_calc_pane_ParamLimits

0x9827,	// (0x0009372f) popup_clock_digital_window_t1_ParamLimits

0xb725,	// (0x0009562d) main_image_pane_t1

0x160d,	// (0x0008b515) aid_size_cell_calc_ParamLimits

0x160d,	// (0x0008b515) aid_size_cell_calc

0x41bb,	// (0x0008e0c3) popup_blid_sat_info2_window_ParamLimits

0x41bb,	// (0x0008e0c3) popup_blid_sat_info2_window

0xcade,	// (0x000969e6) aid_size_cell_blid

0xcae6,	// (0x000969ee) bg_popup_window_pane_cp07

0xcb09,	// (0x00096a11) grid_popup_blid_pane

0xcb13,	// (0x00096a1b) heading_pane_cp05_ParamLimits

0xcb13,	// (0x00096a1b) heading_pane_cp05

0xcbdd,	// (0x00096ae5) cell_popup_blid_pane_ParamLimits

0xcbdd,	// (0x00096ae5) cell_popup_blid_pane

0xcc01,	// (0x00096b09) cell_popup_blid_pane_g1

0xcc09,	// (0x00096b11) cell_popup_blid_pane_t1

0x4c88,	// (0x0008eb90) mup2_indicator_pane_ParamLimits

0x4c88,	// (0x0008eb90) mup2_indicator_pane

0xaa15,	// (0x0009491d) mup2_visualizer_osc_pane

0xc9a7,	// (0x000968af) mup2_visualizer_spec_pane_ParamLimits

0xc9a7,	// (0x000968af) mup2_visualizer_spec_pane

0x4e04,	// (0x0008ed0c) mup2_spec_half_pane

0x4e0d,	// (0x0008ed15) mup2_spec_half_pane_cp

0x4e15,	// (0x0008ed1d) mup2_spec_bar_pane_ParamLimits

0x4e15,	// (0x0008ed1d) mup2_spec_bar_pane

0xc948,	// (0x00096850) mup2_spec_bar_pane_g1

0xc952,	// (0x0009685a) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x00099521) mup2_spec_bar_pane_g

0x4e35,	// (0x0008ed3d) mup2_osc_middle_pane

0xc964,	// (0x0009686c) mup2_visualizer_osc_pane_g1

0xa11f,	// (0x00094027) popup_number_entry_window_t1_ParamLimits

0xa132,	// (0x0009403a) popup_number_entry_window_t2_ParamLimits

0xa144,	// (0x0009404c) popup_number_entry_window_t3_ParamLimits

0x147a,	// (0x0008b382) popup_number_entry_window_t5_ParamLimits

0x147a,	// (0x0008b382) popup_number_entry_window_t5

0xf0ca,	// (0x00098fd2) popup_number_entry_window_t_ParamLimits

0xa156,	// (0x0009405e) text_title_cp2_ParamLimits

0x9866,	// (0x0009376e) aid_hotspot_pointer_text2_pane

0x988c,	// (0x00093794) main_viewer_pane_g9_ParamLimits

0x988c,	// (0x00093794) main_viewer_pane_g9

0xad93,	// (0x00094c9b) cale_month_pane_t1_ParamLimits

0xadd0,	// (0x00094cd8) bg_cale_pane_ParamLimits

0xade8,	// (0x00094cf0) list_cale_pane_ParamLimits

0xadf9,	// (0x00094d01) listscroll_cale_day_pane_t1

0xae0b,	// (0x00094d13) scroll_pane_cp09_ParamLimits

0x35aa,	// (0x0008d4b2) main_mup_eq_pane_t1_ParamLimits

0x35aa,	// (0x0008d4b2) main_mup_eq_pane_t1

0x35c4,	// (0x0008d4cc) main_mup_eq_pane_t2_ParamLimits

0x35c4,	// (0x0008d4cc) main_mup_eq_pane_t2

0x35de,	// (0x0008d4e6) main_mup_eq_pane_t3_ParamLimits

0x35de,	// (0x0008d4e6) main_mup_eq_pane_t3

0x35fa,	// (0x0008d502) main_mup_eq_pane_t4_ParamLimits

0x35fa,	// (0x0008d502) main_mup_eq_pane_t4

0x3616,	// (0x0008d51e) main_mup_eq_pane_t5_ParamLimits

0x3616,	// (0x0008d51e) main_mup_eq_pane_t5

0x3632,	// (0x0008d53a) main_mup_eq_pane_t6_ParamLimits

0x3632,	// (0x0008d53a) main_mup_eq_pane_t6

0x3646,	// (0x0008d54e) main_mup_eq_pane_t7_ParamLimits

0x3646,	// (0x0008d54e) main_mup_eq_pane_t7

0x365a,	// (0x0008d562) main_mup_eq_pane_t8_ParamLimits

0x365a,	// (0x0008d562) main_mup_eq_pane_t8

0x366e,	// (0x0008d576) main_mup_eq_pane_t9_ParamLimits

0x366e,	// (0x0008d576) main_mup_eq_pane_t9

0x3688,	// (0x0008d590) main_mup_eq_pane_t10_ParamLimits

0x3688,	// (0x0008d590) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0009935d) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0009935d) main_mup_eq_pane_t

0x3737,	// (0x0008d63f) mup_equalizer_pane_cp5_ParamLimits

0x374b,	// (0x0008d653) mup_equalizer_pane_cp6_ParamLimits

0x375f,	// (0x0008d667) mup_equalizer_pane_cp7_ParamLimits

0xa0f5,	// (0x00093ffd) main_gallery_pane

0xc96d,	// (0x00096875) smil2_volume_pane

0xc975,	// (0x0009687d) smil_status_volume_pane_g1_ParamLimits

0xc988,	// (0x00096890) smil_status_volume_pane_g2_ParamLimits

0x98ec,	// (0x000937f4) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x00099526) smil_status_volume_pane_g_ParamLimits

0xcae6,	// (0x000969ee) bg_popup_window_pane_cp07_ParamLimits

0xcaf4,	// (0x000969fc) blid_firmament_pane

0x4e3e,	// (0x0008ed46) aid_size_cell_gallery_ParamLimits

0x4e3e,	// (0x0008ed46) aid_size_cell_gallery

0x4e54,	// (0x0008ed5c) grid_gallery_pane_ParamLimits

0x4e54,	// (0x0008ed5c) grid_gallery_pane

0x4e6d,	// (0x0008ed75) cell_gallery_pane_ParamLimits

0x4e6d,	// (0x0008ed75) cell_gallery_pane

0xcc17,	// (0x00096b1f) bg_cell_gallery_focus_pane_ParamLimits

0xcc17,	// (0x00096b1f) bg_cell_gallery_focus_pane

0xcc29,	// (0x00096b31) cell_gallery_pane_g1_ParamLimits

0xcc29,	// (0x00096b31) cell_gallery_pane_g1

0x4eb6,	// (0x0008edbe) cell_gallery_pane_g2_ParamLimits

0x4eb6,	// (0x0008edbe) cell_gallery_pane_g2

0x4ec3,	// (0x0008edcb) cell_gallery_pane_g3_ParamLimits

0x4ec3,	// (0x0008edcb) cell_gallery_pane_g3

0xcc35,	// (0x00096b3d) cell_gallery_pane_g4_ParamLimits

0xcc35,	// (0x00096b3d) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x000995d4) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x000995d4) cell_gallery_pane_g

0xcc41,	// (0x00096b49) bg_cell_gallery_focus_pane_g1

0xcc49,	// (0x00096b51) bg_cell_gallery_focus_pane_g2

0xcc51,	// (0x00096b59) bg_cell_gallery_focus_pane_g3

0xcc59,	// (0x00096b61) bg_cell_gallery_focus_pane_g4

0xcc61,	// (0x00096b69) bg_cell_gallery_focus_pane_g5

0xcc69,	// (0x00096b71) bg_cell_gallery_focus_pane_g6

0xcc71,	// (0x00096b79) bg_cell_gallery_focus_pane_g7

0xcc79,	// (0x00096b81) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x000995dd) bg_cell_gallery_focus_pane_g

0xcc81,	// (0x00096b89) aid_firma_cardinal

0xcc95,	// (0x00096b9d) blid_firmament_pane_t1

0xccac,	// (0x00096bb4) blid_firmament_pane_t2

0xccc3,	// (0x00096bcb) blid_firmament_pane_t3

0xccda,	// (0x00096be2) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x000995ee) blid_firmament_pane_t

0xccf1,	// (0x00096bf9) blid_sat_info_pane

0xcd01,	// (0x00096c09) blid_sat_info_pane_g1

0xcd01,	// (0x00096c09) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x000995f7) blid_sat_info_pane_g

0xcd0b,	// (0x00096c13) blid_sat_info_pane_t1

0xcd19,	// (0x00096c21) smil2_volume_content_pane

0xcd22,	// (0x00096c2a) smil2_volume_pane_g1

0xcd2a,	// (0x00096c32) smil2_volume_content_pane_g1

0xcd33,	// (0x00096c3b) smil2_volume_content_pane_g2

0xcd3c,	// (0x00096c44) smil2_volume_content_pane_g3

0xcd45,	// (0x00096c4d) smil2_volume_content_pane_g4

0xcd4e,	// (0x00096c56) smil2_volume_content_pane_g5

0xcd57,	// (0x00096c5f) smil2_volume_content_pane_g6

0xcd60,	// (0x00096c68) smil2_volume_content_pane_g7

0xcd69,	// (0x00096c71) smil2_volume_content_pane_g8

0xcd72,	// (0x00096c7a) smil2_volume_content_pane_g9

0xcd7b,	// (0x00096c83) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x000995fc) smil2_volume_content_pane_g

0x1be3,	// (0x0008baeb) cale_week_day_heading_pane_t1_ParamLimits

0x1c0d,	// (0x0008bb15) cale_week_day_heading_pane_t2_ParamLimits

0x1c3c,	// (0x0008bb44) cale_week_day_heading_pane_t3_ParamLimits

0x1c6b,	// (0x0008bb73) cale_week_day_heading_pane_t4_ParamLimits

0x1c9a,	// (0x0008bba2) cale_week_day_heading_pane_t5_ParamLimits

0x1cd1,	// (0x0008bbd9) cale_week_day_heading_pane_t6_ParamLimits

0x1d08,	// (0x0008bc10) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000990d9) cale_week_day_heading_pane_t_ParamLimits

0xa9ba,	// (0x000948c2) bg_cale_side_pane_ParamLimits

0x1d32,	// (0x0008bc3a) cale_week_time_pane_t1_ParamLimits

0x1d4c,	// (0x0008bc54) cale_week_time_pane_t2_ParamLimits

0x1d66,	// (0x0008bc6e) cale_week_time_pane_t3_ParamLimits

0x1d80,	// (0x0008bc88) cale_week_time_pane_t4_ParamLimits

0x1d9a,	// (0x0008bca2) cale_week_time_pane_t5_ParamLimits

0x1db4,	// (0x0008bcbc) cale_week_time_pane_t6_ParamLimits

0x1dce,	// (0x0008bcd6) cale_week_time_pane_t7_ParamLimits

0x1de8,	// (0x0008bcf0) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000990e8) cale_week_time_pane_t_ParamLimits

0x1e08,	// (0x0008bd10) cell_cale_week_pane_g2_ParamLimits

0xa9ba,	// (0x000948c2) bg_cale_side_pane_cp01_ParamLimits

0x2d7d,	// (0x0008cc85) cale_month_week_pane_t1_ParamLimits

0x2d96,	// (0x0008cc9e) cale_month_week_pane_t2_ParamLimits

0x2daf,	// (0x0008ccb7) cale_month_week_pane_t3_ParamLimits

0x2dc8,	// (0x0008ccd0) cale_month_week_pane_t4_ParamLimits

0x2de1,	// (0x0008cce9) cale_month_week_pane_t5_ParamLimits

0x2dfa,	// (0x0008cd02) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000991bd) cale_month_week_pane_t_ParamLimits

0x97a7,	// (0x000936af) cell_cale_month_pane_g1_ParamLimits

0xa0f5,	// (0x00093ffd) main_cale_event_viewer_pane

0xa0f5,	// (0x00093ffd) listscroll_cale_event_viewer_pane

0xcd84,	// (0x00096c8c) list_cale_ev_pane

0xcd8c,	// (0x00096c94) scroll_pane_cp023

0xcd98,	// (0x00096ca0) field_cale_ev_pane_ParamLimits

0xcd98,	// (0x00096ca0) field_cale_ev_pane

0xcdb6,	// (0x00096cbe) field_cale_ev_content_pane_ParamLimits

0xcdb6,	// (0x00096cbe) field_cale_ev_content_pane

0xcdc2,	// (0x00096cca) field_cale_ev_pane_g1_ParamLimits

0xcdc2,	// (0x00096cca) field_cale_ev_pane_g1

0xcdce,	// (0x00096cd6) field_cale_ev_pane_g2_ParamLimits

0xcdce,	// (0x00096cd6) field_cale_ev_pane_g2

0xcde6,	// (0x00096cee) field_cale_ev_pane_g3_ParamLimits

0xcde6,	// (0x00096cee) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x00099611) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x00099611) field_cale_ev_pane_g

0xcdfe,	// (0x00096d06) field_cale_ev_pane_t1_ParamLimits

0xcdfe,	// (0x00096d06) field_cale_ev_pane_t1

0xab2a,	// (0x00094a32) field_cale_ev_content_pane_t1_ParamLimits

0xab2a,	// (0x00094a32) field_cale_ev_content_pane_t1

0xb60b,	// (0x00095513) bg_button_pane_cp01

0x1910,	// (0x0008b818) listscroll_cale_week_pane_ParamLimits

0xa965,	// (0x0009486d) popup_toolbar_window_cp01

0xa98b,	// (0x00094893) listscroll_cale_week_pane_t1_ParamLimits

0x1910,	// (0x0008b818) listscroll_cale_day_pane_ParamLimits

0xa965,	// (0x0009486d) popup_toolbar_window_cp02

0xadf9,	// (0x00094d01) listscroll_cale_day_pane_t1_ParamLimits

0x1910,	// (0x0008b818) main_cale_month_pane_ParamLimits

0x98d7,	// (0x000937df) popup_toolbar_window_cp03_ParamLimits

0x98d7,	// (0x000937df) popup_toolbar_window_cp03

0x3a93,	// (0x0008d99b) main_image_pane_g2_ParamLimits

0x3a93,	// (0x0008d99b) main_image_pane_g2

0x3aa4,	// (0x0008d9ac) main_image_pane_g3_ParamLimits

0x3aa4,	// (0x0008d9ac) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000993ef) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000993ef) main_image_pane_g

0xb725,	// (0x0009562d) main_image_pane_t1_ParamLimits

0x3ab5,	// (0x0008d9bd) main_image_pane_t2_ParamLimits

0x3ab5,	// (0x0008d9bd) main_image_pane_t2

0x3ac7,	// (0x0008d9cf) main_image_pane_t3_ParamLimits

0x3ac7,	// (0x0008d9cf) main_image_pane_t3

0x3aef,	// (0x0008d9f7) main_image_pane_t4_ParamLimits

0x3aef,	// (0x0008d9f7) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000993f6) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000993f6) main_image_pane_t

0x3b0f,	// (0x0008da17) popup_image_details_window_cp01

0x3b19,	// (0x0008da21) popup_toobar_trans_pane_cp01_ParamLimits

0x3b19,	// (0x0008da21) popup_toobar_trans_pane_cp01

0x428c,	// (0x0008e194) popup_image_details_window_ParamLimits

0x428c,	// (0x0008e194) popup_image_details_window

0x98aa,	// (0x000937b2) popup_image_focus_window

0x46ab,	// (0x0008e5b3) camera2_autofocus_pane_ParamLimits

0x46ab,	// (0x0008e5b3) camera2_autofocus_pane

0xa0f5,	// (0x00093ffd) bg_popup_sub_pane_cp06

0xce15,	// (0x00096d1d) popup_image_focus_window_g1

0xce1d,	// (0x00096d25) popup_image_focus_window_g2

0xce25,	// (0x00096d2d) popup_image_focus_window_g3

0xce2d,	// (0x00096d35) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x00099618) popup_image_focus_window_g

0xce35,	// (0x00096d3d) popup_image_focus_window_t1

0xce43,	// (0x00096d4b) popup_image_focus_window_t2

0xce53,	// (0x00096d5b) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x00099621) popup_image_focus_window_t

0xce61,	// (0x00096d69) camera2_autofocus_pane_g1

0xab1c,	// (0x00094a24) bg_tb_trans_pane_cp01

0xce6f,	// (0x00096d77) popup_image_details_window_g1

0xce82,	// (0x00096d8a) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x00099633) popup_image_details_window_g

0xceab,	// (0x00096db3) popup_image_details_window_t1

0xcebd,	// (0x00096dc5) popup_image_details_window_t2

0xced6,	// (0x00096dde) popup_image_details_window_t3

0xceea,	// (0x00096df2) popup_image_details_window_t4

0xcf05,	// (0x00096e0d) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0009963a) popup_image_details_window_t

0xa82a,	// (0x00094732) bg_calc_paper_pane_ParamLimits

0xa0f5,	// (0x00093ffd) grid_highlight_pane_cp013

0x970d,	// (0x00093615) list_calc_pane_ParamLimits

0x971f,	// (0x00093627) scroll_pane_cp024

0xa83e,	// (0x00094746) bg_calc_display_pane_ParamLimits

0x1774,	// (0x0008b67c) calc_display_pane_t1_ParamLimits

0x1786,	// (0x0008b68e) calc_display_pane_t2_ParamLimits

0x9727,	// (0x0009362f) calc_display_pane_t3_ParamLimits

0xf151,	// (0x00099059) calc_display_pane_t_ParamLimits

0x1846,	// (0x0008b74e) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x00099076) cell_calc_pane_g

0x184f,	// (0x0008b757) cell_calc_pane_t1

0xa89d,	// (0x000947a5) grid_highlight_pane_cp02_ParamLimits

0xa8b3,	// (0x000947bb) toolbar_button_pane_cp01_ParamLimits

0xa8b3,	// (0x000947bb) toolbar_button_pane_cp01

0xb76a,	// (0x00095672) temp_image_control_pane_ParamLimits

0xb76a,	// (0x00095672) temp_image_control_pane

0xab1c,	// (0x00094a24) main_mp3_pane

0xcf1f,	// (0x00096e27) temp_image_control_pane_g1_ParamLimits

0xcf1f,	// (0x00096e27) temp_image_control_pane_g1

0xcf2d,	// (0x00096e35) temp_image_control_pane_g2_ParamLimits

0xcf2d,	// (0x00096e35) temp_image_control_pane_g2

0xcf3f,	// (0x00096e47) temp_image_control_pane_g3_ParamLimits

0xcf3f,	// (0x00096e47) temp_image_control_pane_g3

0x4f00,	// (0x0008ee08) temp_image_control_pane_g4_ParamLimits

0x4f00,	// (0x0008ee08) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x00099645) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x00099645) temp_image_control_pane_g

0xcf1f,	// (0x00096e27) main_mp3_pane_g1

0x4f13,	// (0x0008ee1b) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0009964e) main_mp3_pane_g

0xcf82,	// (0x00096e8a) main_mp3_pane_t1

0xaa1d,	// (0x00094925) main_camera_pane_g8_ParamLimits

0xaa1d,	// (0x00094925) main_camera_pane_g8

0x210c,	// (0x0008c014) main_video_pane_g7_ParamLimits

0x210c,	// (0x0008c014) main_video_pane_g7

0x992c,	// (0x00093834) main_camera2_pane_t7_ParamLimits

0x992c,	// (0x00093834) main_camera2_pane_t7

0xabb1,	// (0x00094ab9) scroll_pane_cp025_ParamLimits

0xabb1,	// (0x00094ab9) scroll_pane_cp025

0xabc5,	// (0x00094acd) scroll_pane_cp026_ParamLimits

0xabc5,	// (0x00094acd) scroll_pane_cp026

0xabd4,	// (0x00094adc) wml_content_pane_ParamLimits

0xa0f5,	// (0x00093ffd) main_touch_calib_pane

0x4fe7,	// (0x0008eeef) main_touch_calib_pane_g1

0x4ff9,	// (0x0008ef01) main_touch_calib_pane_g2

0x500b,	// (0x0008ef13) main_touch_calib_pane_g3

0x501d,	// (0x0008ef25) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0009966c) main_touch_calib_pane_g

0x502f,	// (0x0008ef37) main_touch_calib_pane_t1

0x5049,	// (0x0008ef51) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x00099675) main_touch_calib_pane_t

0xb337,	// (0x0009523f) mup_progress_pane_cp02

0xb36c,	// (0x00095274) navi_pane_g1

0xb427,	// (0x0009532f) navi_pane_mp_t3

0xab1c,	// (0x00094a24) main_mp3_pane_ParamLimits

0x4417,	// (0x0008e31f) navi_pane_ParamLimits

0xcf1f,	// (0x00096e27) main_mp3_pane_g1_ParamLimits

0x4f13,	// (0x0008ee1b) main_mp3_pane_g2_ParamLimits

0x4f21,	// (0x0008ee29) main_mp3_pane_g3_ParamLimits

0x4f21,	// (0x0008ee29) main_mp3_pane_g3

0x4f2f,	// (0x0008ee37) main_mp3_pane_g4_ParamLimits

0x4f2f,	// (0x0008ee37) main_mp3_pane_g4

0xcf4f,	// (0x00096e57) main_mp3_pane_g5_ParamLimits

0xcf4f,	// (0x00096e57) main_mp3_pane_g5

0xcf5d,	// (0x00096e65) main_mp3_pane_g6_ParamLimits

0xcf5d,	// (0x00096e65) main_mp3_pane_g6

0xcf6a,	// (0x00096e72) main_mp3_pane_g7_ParamLimits

0xcf6a,	// (0x00096e72) main_mp3_pane_g7

0xcf76,	// (0x00096e7e) main_mp3_pane_g8_ParamLimits

0xcf76,	// (0x00096e7e) main_mp3_pane_g8

0xf746,	// (0x0009964e) main_mp3_pane_g_ParamLimits

0x4f3b,	// (0x0008ee43) main_mp3_pane_t2

0x4f49,	// (0x0008ee51) main_mp3_pane_t3

0xcf90,	// (0x00096e98) main_mp3_pane_t4

0xcf9e,	// (0x00096ea6) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0009965f) main_mp3_pane_t

0xcfac,	// (0x00096eb4) mup_progress_pane_cp01

0x96bb,	// (0x000935c3) aid_zoom_text_secondary2

0xcd84,	// (0x00096c8c) list_cale_ev2_pane

0xcd8c,	// (0x00096c94) scroll_pane_cp023_ParamLimits

0x509f,	// (0x0008efa7) field_cale_ev2_pane_ParamLimits

0x509f,	// (0x0008efa7) field_cale_ev2_pane

0x99ab,	// (0x000938b3) field_cale_ev2_pane_g1_ParamLimits

0x99ab,	// (0x000938b3) field_cale_ev2_pane_g1

0x99b7,	// (0x000938bf) field_cale_ev2_pane_g2_ParamLimits

0x99b7,	// (0x000938bf) field_cale_ev2_pane_g2

0x99cf,	// (0x000938d7) field_cale_ev2_pane_g3_ParamLimits

0x99cf,	// (0x000938d7) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x00099680) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x00099680) field_cale_ev2_pane_g

0x50c0,	// (0x0008efc8) field_cale_ev2_pane_t1_ParamLimits

0x50c0,	// (0x0008efc8) field_cale_ev2_pane_t1

0x50d7,	// (0x0008efdf) field_cale_ev2_pane_t2_ParamLimits

0x50d7,	// (0x0008efdf) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x00099689) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x00099689) field_cale_ev2_pane_t

0x3947,	// (0x0008d84f) main_postcard_pane_g5_ParamLimits

0x3947,	// (0x0008d84f) main_postcard_pane_g5

0x395d,	// (0x0008d865) main_postcard_pane_g6_ParamLimits

0x395d,	// (0x0008d865) main_postcard_pane_g6

0x1ed2,	// (0x0008bdda) camera2_autofocus_pane_cp_ParamLimits

0x1ed2,	// (0x0008bdda) camera2_autofocus_pane_cp

0xab1c,	// (0x00094a24) main_mup3_pane

0x5130,	// (0x0008f038) main_mup3_pane_g1_ParamLimits

0x5130,	// (0x0008f038) main_mup3_pane_g1

0x5152,	// (0x0008f05a) main_mup3_pane_g2_ParamLimits

0x5152,	// (0x0008f05a) main_mup3_pane_g2

0x51d2,	// (0x0008f0da) main_mup3_pane_g3_ParamLimits

0x51d2,	// (0x0008f0da) main_mup3_pane_g3

0x5218,	// (0x0008f120) main_mup3_pane_g4_ParamLimits

0x5218,	// (0x0008f120) main_mup3_pane_g4

0x525e,	// (0x0008f166) main_mup3_pane_g5_ParamLimits

0x525e,	// (0x0008f166) main_mup3_pane_g5

0x52a4,	// (0x0008f1ac) main_mup3_pane_g6_ParamLimits

0x52a4,	// (0x0008f1ac) main_mup3_pane_g6

0xcfb4,	// (0x00096ebc) main_mup3_pane_g7_ParamLimits

0xcfb4,	// (0x00096ebc) main_mup3_pane_g7

0x0007,

0xf791,	// (0x00099699) main_mup3_pane_g_ParamLimits

0xf791,	// (0x00099699) main_mup3_pane_g

0x5322,	// (0x0008f22a) main_mup3_pane_t1_ParamLimits

0x5322,	// (0x0008f22a) main_mup3_pane_t1

0x5396,	// (0x0008f29e) main_mup3_pane_t2_ParamLimits

0x5396,	// (0x0008f29e) main_mup3_pane_t2

0x546a,	// (0x0008f372) main_mup3_pane_t4_ParamLimits

0x546a,	// (0x0008f372) main_mup3_pane_t4

0x54c0,	// (0x0008f3c8) main_mup3_pane_t5_ParamLimits

0x54c0,	// (0x0008f3c8) main_mup3_pane_t5

0x557c,	// (0x0008f484) main_mup3_pane_t6_ParamLimits

0x557c,	// (0x0008f484) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x000996aa) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x000996aa) main_mup3_pane_t

0x5634,	// (0x0008f53c) mup3_progress_pane_ParamLimits

0x5634,	// (0x0008f53c) mup3_progress_pane

0x56c0,	// (0x0008f5c8) popup_mup3_control_window_ParamLimits

0x56c0,	// (0x0008f5c8) popup_mup3_control_window

0xcfc2,	// (0x00096eca) popup_mup3_text_window

0x56f2,	// (0x0008f5fa) mup3_progress_pane_t1

0x5711,	// (0x0008f619) mup3_progress_pane_t2

0xcfca,	// (0x00096ed2) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x000996b7) mup3_progress_pane_t

0xcfe7,	// (0x00096eef) mup_progress_pane_cp03

0xa0f5,	// (0x00093ffd) bg_tb_trans_pane_cp04

0x5730,	// (0x0008f638) mup3_volume_pane

0x5738,	// (0x0008f640) popup_mup3_control_window_g1

0x5741,	// (0x0008f649) mup3_volume_pane_g1

0x574a,	// (0x0008f652) mup3_volume_pane_g2

0x5753,	// (0x0008f65b) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x000996be) mup3_volume_pane_g

0xa0f5,	// (0x00093ffd) bg_tb_trans_pane_cp03

0xcff7,	// (0x00096eff) popup_mup3_text_window_g1

0xcfff,	// (0x00096f07) popup_mup3_text_window_t1

0xa886,	// (0x0009478e) list_calc_item_pane_g1_ParamLimits

0xca48,	// (0x00096950) mup_volume_pane_cp_g1

0x5063,	// (0x0008ef6b) main_touch_calib_pane_t3

0x5077,	// (0x0008ef7f) main_touch_calib_pane_t4

0x508b,	// (0x0008ef93) main_touch_calib_pane_t5

0x96a7,	// (0x000935af) aid_cell_size_toolbar2

0x96af,	// (0x000935b7) aid_popup3_width_pane

0x121b,	// (0x0008b123) aid_zoom_text_msg_primary

0x1eb1,	// (0x0008bdb9) vorec_t7

0xa84a,	// (0x00094752) bg_calc_paper_pane_g1_ParamLimits

0xa856,	// (0x0009475e) bg_calc_paper_pane_g2_ParamLimits

0xa862,	// (0x0009476a) bg_calc_paper_pane_g3_ParamLimits

0xa86e,	// (0x00094776) bg_calc_paper_pane_g4_ParamLimits

0xa87a,	// (0x00094782) bg_calc_paper_pane_g5_ParamLimits

0x17cf,	// (0x0008b6d7) bg_calc_paper_pane_g6_ParamLimits

0x17de,	// (0x0008b6e6) bg_calc_paper_pane_g7_ParamLimits

0x17ed,	// (0x0008b6f5) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x00099060) bg_calc_paper_pane_g_ParamLimits

0x1800,	// (0x0008b708) calc_bg_paper_pane_g9_ParamLimits

0x201e,	// (0x0008bf26) image_qvga_pane_ParamLimits

0x201e,	// (0x0008bf26) image_qvga_pane

0xa76d,	// (0x00094675) bg_popup_sub_pane_cp04_ParamLimits

0xb6a1,	// (0x000955a9) popup_mup_playback_window_g1_ParamLimits

0xb6ad,	// (0x000955b5) popup_mup_playback_window_t1_ParamLimits

0xb6c2,	// (0x000955ca) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000993ea) popup_mup_playback_window_t_ParamLimits

0x4ba2,	// (0x0008eaaa) main_mup2_pane_g3_ParamLimits

0x4ba2,	// (0x0008eaaa) main_mup2_pane_g3

0x2333,	// (0x0008c23b) popup_toolbar_window_cp04

0xbab7,	// (0x000959bf) popup_call2_audio_second_window_g3_ParamLimits

0xbab7,	// (0x000959bf) popup_call2_audio_second_window_g3

0xbec1,	// (0x00095dc9) popup_call2_audio_first_window_g4_ParamLimits

0xbec1,	// (0x00095dc9) popup_call2_audio_first_window_g4

0xc540,	// (0x00096448) popup_call2_audio_in_window_g4_ParamLimits

0xc540,	// (0x00096448) popup_call2_audio_in_window_g4

0x3a75,	// (0x0008d97d) aid_area_sk_bg_cut_ParamLimits

0x3a75,	// (0x0008d97d) aid_area_sk_bg_cut

0xb6d7,	// (0x000955df) aid_area_sk_bg_cut_2_ParamLimits

0xb6d7,	// (0x000955df) aid_area_sk_bg_cut_2

0x4ea6,	// (0x0008edae) aid_placing_details_win

0x4eae,	// (0x0008edb6) aid_placing_details_win_2

0xce61,	// (0x00096d69) camera2_autofocus_pane_g1_ParamLimits

0x13c1,	// (0x0008b2c9) popup_fixed_preview_cale_window_ParamLimits

0x13c1,	// (0x0008b2c9) popup_fixed_preview_cale_window

0xb4a5,	// (0x000953ad) navi_slider_pane_g3

0xb4ae,	// (0x000953b6) navi_slider_pane_g4

0xb4b7,	// (0x000953bf) navi_slider_pane_g5

0xb4a5,	// (0x000953ad) navi_slider_pane_g6

0x984d,	// (0x00093755) navi_slider_pane_g7

0xb5d8,	// (0x000954e0) mup_scale_pane_g3

0xb5e1,	// (0x000954e9) mup_scale_pane_g4

0xb5ea,	// (0x000954f2) mup_scale_pane_g5

0x3773,	// (0x0008d67b) mup_scale_pane_g6

0x377c,	// (0x0008d684) mup_scale_pane_g7

0xb4a5,	// (0x000953ad) cams2_slider_pane_g3

0xcad6,	// (0x000969de) cams2_slider_pane_g4

0x999a,	// (0x000938a2) cams2_slider_pane_g5

0xb4a5,	// (0x000953ad) cams2_slider_pane_g6

0x99a2,	// (0x000938aa) cams2_slider_pane_g7

0xcd01,	// (0x00096c09) camera2_autofocus_pane_cp_g1

0xc8e1,	// (0x000967e9) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8e1,	// (0x000967e9) bg_popup_preview_window_pane_cp02

0xd00d,	// (0x00096f15) list_fp_cale_pane_ParamLimits

0xd00d,	// (0x00096f15) list_fp_cale_pane

0xd019,	// (0x00096f21) popup_fixed_preview_cale_window_t1_ParamLimits

0xd019,	// (0x00096f21) popup_fixed_preview_cale_window_t1

0x575c,	// (0x0008f664) popup_fixed_preview_cale_window_t2_ParamLimits

0x575c,	// (0x0008f664) popup_fixed_preview_cale_window_t2

0x5771,	// (0x0008f679) popup_fixed_preview_cale_window_t3_ParamLimits

0x5771,	// (0x0008f679) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x000996c5) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x000996c5) popup_fixed_preview_cale_window_t

0x5786,	// (0x0008f68e) list_single_fp_cale_pane_ParamLimits

0x5786,	// (0x0008f68e) list_single_fp_cale_pane

0xd037,	// (0x00096f3f) list_single_fp_cale_pane_g1_ParamLimits

0xd037,	// (0x00096f3f) list_single_fp_cale_pane_g1

0xd043,	// (0x00096f4b) list_single_fp_cale_pane_g2_ParamLimits

0xd043,	// (0x00096f4b) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x000996cc) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x000996cc) list_single_fp_cale_pane_g

0xd05c,	// (0x00096f64) list_single_fp_cale_pane_t1_ParamLimits

0xd05c,	// (0x00096f64) list_single_fp_cale_pane_t1

0xd06e,	// (0x00096f76) list_single_fp_cale_pane_t2_ParamLimits

0xd06e,	// (0x00096f76) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x000996d3) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x000996d3) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa0f5,	// (0x00093ffd) main_dialer_pane

0x579c,	// (0x0008f6a4) aid_cell_size_keypad

0x57a6,	// (0x0008f6ae) dialer_ne_pane

0x57ae,	// (0x0008f6b6) grid_dialer_command_1_pane

0x57b6,	// (0x0008f6be) grid_dialer_command_2_pane

0x57be,	// (0x0008f6c6) grid_dialer_keypad_pane

0x57d0,	// (0x0008f6d8) bg_popup_call_pane_cp06_ParamLimits

0x57d0,	// (0x0008f6d8) bg_popup_call_pane_cp06

0x57dc,	// (0x0008f6e4) dialer_ne_clear_pane_ParamLimits

0x57dc,	// (0x0008f6e4) dialer_ne_clear_pane

0xd0a1,	// (0x00096fa9) dialer_ne_pane_g1

0xd0a9,	// (0x00096fb1) dialer_ne_pane_t1_ParamLimits

0xd0a9,	// (0x00096fb1) dialer_ne_pane_t1

0x57e8,	// (0x0008f6f0) dialer_ne_pane_t2_ParamLimits

0x57e8,	// (0x0008f6f0) dialer_ne_pane_t2

0x5812,	// (0x0008f71a) dialer_ne_pane_t3_ParamLimits

0x5812,	// (0x0008f71a) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x000996d8) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x000996d8) dialer_ne_pane_t

0x5842,	// (0x0008f74a) dialer_ne_pane_t3_copy1_ParamLimits

0x5842,	// (0x0008f74a) dialer_ne_pane_t3_copy1

0x5871,	// (0x0008f779) cell_dialer_keypad_pane_ParamLimits

0x5871,	// (0x0008f779) cell_dialer_keypad_pane

0x5888,	// (0x0008f790) cell_dialer_command_1_pane_ParamLimits

0x5888,	// (0x0008f790) cell_dialer_command_1_pane

0x589e,	// (0x0008f7a6) cell_dialer_command_2_pane_ParamLimits

0x589e,	// (0x0008f7a6) cell_dialer_command_2_pane

0xd0bb,	// (0x00096fc3) bg_button_pane_cp02_ParamLimits

0xd0bb,	// (0x00096fc3) bg_button_pane_cp02

0x58ad,	// (0x0008f7b5) cell_dialer_keypad_pane_g1_ParamLimits

0x58ad,	// (0x0008f7b5) cell_dialer_keypad_pane_g1

0xd0bb,	// (0x00096fc3) bg_button_pane_cp03_ParamLimits

0xd0bb,	// (0x00096fc3) bg_button_pane_cp03

0x58c1,	// (0x0008f7c9) cell_dialer_command_1_pane_g1_ParamLimits

0x58c1,	// (0x0008f7c9) cell_dialer_command_1_pane_g1

0xd0c7,	// (0x00096fcf) bg_button_pane_cp04

0x58d5,	// (0x0008f7dd) cell_dialer_command_2_pane_g1

0xaa15,	// (0x0009491d) bg_button_pane_cp06

0xd0cf,	// (0x00096fd7) dialer_ne_clear_pane_g1

0xb378,	// (0x00095280) navi_pane_g2

0xb3a6,	// (0x000952ae) navi_pane_g3

0x0002,

0xf3e5,	// (0x000992ed) navi_pane_g

0xb435,	// (0x0009533d) navi_pane_mv_g2

0xb45c,	// (0x00095364) navi_pane_mv_g5

0x3341,	// (0x0008d249) navi_pane_mv_t1

0xa83e,	// (0x00094746) main_clock2_pane

0x5923,	// (0x0008f82b) main_clock2_list_pane_ParamLimits

0x5923,	// (0x0008f82b) main_clock2_list_pane

0x595d,	// (0x0008f865) main_clock2_pane_t1_ParamLimits

0x595d,	// (0x0008f865) main_clock2_pane_t1

0x599b,	// (0x0008f8a3) main_clock2_pane_t2_ParamLimits

0x599b,	// (0x0008f8a3) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x000996e4) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x000996e4) main_clock2_pane_t

0x5a39,	// (0x0008f941) popup_clock_analogue_window_cp03_ParamLimits

0x5a39,	// (0x0008f941) popup_clock_analogue_window_cp03

0x5a5e,	// (0x0008f966) popup_clock_digital_window_cp02_ParamLimits

0x5a5e,	// (0x0008f966) popup_clock_digital_window_cp02

0x5acf,	// (0x0008f9d7) main_clock2_list_single_pane_ParamLimits

0x5acf,	// (0x0008f9d7) main_clock2_list_single_pane

0xaa15,	// (0x0009491d) list_highlight_pane_cp05

0xd109,	// (0x00097011) main_clock2_list_single_pane_t1

0x2333,	// (0x0008c23b) popup_toolbar_window_cp04_ParamLimits

0x4ed0,	// (0x0008edd8) camera2_autofocus_pane_g2_ParamLimits

0x4ed0,	// (0x0008edd8) camera2_autofocus_pane_g2

0x4edc,	// (0x0008ede4) camera2_autofocus_pane_g3_ParamLimits

0x4edc,	// (0x0008ede4) camera2_autofocus_pane_g3

0x4ee8,	// (0x0008edf0) camera2_autofocus_pane_g4_ParamLimits

0x4ee8,	// (0x0008edf0) camera2_autofocus_pane_g4

0x4ef4,	// (0x0008edfc) camera2_autofocus_pane_g5_ParamLimits

0x4ef4,	// (0x0008edfc) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x00099628) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x00099628) camera2_autofocus_pane_g

0x50ec,	// (0x0008eff4) camera2_autofocus_pane_cp_g2

0x50f4,	// (0x0008effc) camera2_autofocus_pane_cp_g3

0x50fc,	// (0x0008f004) camera2_autofocus_pane_cp_g4

0x5104,	// (0x0008f00c) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0009968e) camera2_autofocus_pane_cp_g

0x57c8,	// (0x0008f6d0) popup_dialer_spcha_window

0xa0f5,	// (0x00093ffd) bg_popup_sub_pane_cp07

0xd117,	// (0x0009701f) list_spcha_pane

0xd11f,	// (0x00097027) list_single_spcha_pane_ParamLimits

0xd11f,	// (0x00097027) list_single_spcha_pane

0xa0f5,	// (0x00093ffd) list_highlight_pane_cp06

0xd130,	// (0x00097038) list_single_spcha_pane_t1

0xc2ea,	// (0x000961f2) popup_call2_audio_out_window_g4_ParamLimits

0xc2ea,	// (0x000961f2) popup_call2_audio_out_window_g4

0xa0f5,	// (0x00093ffd) main_imed2_pane

0x98b2,	// (0x000937ba) popup_imed_adjust2_window

0x42a4,	// (0x0008e1ac) popup_imed_trans_window_ParamLimits

0x42a4,	// (0x0008e1ac) popup_imed_trans_window

0xcb3f,	// (0x00096a47) popup_blid_sat_info2_window_t1

0xcb4d,	// (0x00096a55) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x000995bd) popup_blid_sat_info2_window_t

0x5b78,	// (0x0008fa80) aid_size_cell_colour_35

0x5b98,	// (0x0008faa0) aid_size_cell_colour_112

0x5bb8,	// (0x0008fac0) aid_size_cell_effect

0xc8ed,	// (0x000967f5) bg_tb_trans_pane_cp02

0xaf02,	// (0x00094e0a) heading_imed_pane

0x5bd8,	// (0x0008fae0) listscroll_imed_pane

0xd13e,	// (0x00097046) heading_imed_pane_g1

0xd146,	// (0x0009704e) heading_imed_pane_t1

0xd154,	// (0x0009705c) grid_imed_colour_35_pane_ParamLimits

0xd154,	// (0x0009705c) grid_imed_colour_35_pane

0x5be4,	// (0x0008faec) grid_imed_effect_pane

0xd16c,	// (0x00097074) list_imed_aspect_pane

0x5bfa,	// (0x0008fb02) scroll_pane_cp027_ParamLimits

0x5bfa,	// (0x0008fb02) scroll_pane_cp027

0x5c0b,	// (0x0008fb13) cell_imed_effect_pane_ParamLimits

0x5c0b,	// (0x0008fb13) cell_imed_effect_pane

0xd174,	// (0x0009707c) cell_imed_colour_pane_ParamLimits

0xd174,	// (0x0009707c) cell_imed_colour_pane

0xd1b6,	// (0x000970be) cell_imed_colour_pane_g1_ParamLimits

0xd1b6,	// (0x000970be) cell_imed_colour_pane_g1

0xd1c7,	// (0x000970cf) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1c7,	// (0x000970cf) hgihlgiht_grid_pane_cp016

0x5c32,	// (0x0008fb3a) cell_imed_effect_pane_g1

0x5c3a,	// (0x0008fb42) grid_highlight_pane_cp017

0xd1d8,	// (0x000970e0) list_imed_single_pane_ParamLimits

0xd1d8,	// (0x000970e0) list_imed_single_pane

0xa0f5,	// (0x00093ffd) list_highlight_pane_cp07

0xd1ed,	// (0x000970f5) list_imed_aspect_pane_comp1_t1

0xc8ed,	// (0x000967f5) bg_tb_trans_pane_cp05

0xd20f,	// (0x00097117) popup_imed_adjust2_window_g1

0xd236,	// (0x0009713e) popup_imed_adjust2_window_t1

0xd24e,	// (0x00097156) slider_imed_adjust_pane

0xd262,	// (0x0009716a) slider_imed_adjust_pane_g1

0xd272,	// (0x0009717a) slider_imed_adjust_pane_g2

0xd282,	// (0x0009718a) slider_imed_adjust_pane_g3

0xd293,	// (0x0009719b) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x00099701) slider_imed_adjust_pane_g

0x5c43,	// (0x0008fb4b) aid_size_cell_clipart2

0x5c4f,	// (0x0008fb57) grid_imed_clipart_pane

0xd2a4,	// (0x000971ac) scroll_pane_cp031

0x5c59,	// (0x0008fb61) cell_imed_clipart_pane_ParamLimits

0x5c59,	// (0x0008fb61) cell_imed_clipart_pane

0x5c7b,	// (0x0008fb83) cell_imed_clipart_pane_g1

0xa0f5,	// (0x00093ffd) grid_highlight_pane_cp014

0x5938,	// (0x0008f840) main_clock2_pane_g1_ParamLimits

0x5938,	// (0x0008f840) main_clock2_pane_g1

0x5a7a,	// (0x0008f982) aid_call2_pane_cp10

0x5a8c,	// (0x0008f994) aid_call_pane_cp10

0xb2d7,	// (0x000951df) popup_clock_analogue_window_cp10_g1

0xb2d7,	// (0x000951df) popup_clock_analogue_window_cp10_g2

0x5a9e,	// (0x0008f9a6) popup_clock_analogue_window_cp10_g3

0x5a9e,	// (0x0008f9a6) popup_clock_analogue_window_cp10_g4

0xb2d7,	// (0x000951df) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x000996ef) popup_clock_analogue_window_cp10_g

0x5ab0,	// (0x0008f9b8) popup_clock_analogue_window_cp10_t1

0x5ae1,	// (0x0008f9e9) clock_digital_number_pane_cp10_ParamLimits

0x5ae1,	// (0x0008f9e9) clock_digital_number_pane_cp10

0x5af9,	// (0x0008fa01) clock_digital_number_pane_cp11_ParamLimits

0x5af9,	// (0x0008fa01) clock_digital_number_pane_cp11

0x5b11,	// (0x0008fa19) clock_digital_number_pane_cp12_ParamLimits

0x5b11,	// (0x0008fa19) clock_digital_number_pane_cp12

0x5b29,	// (0x0008fa31) clock_digital_number_pane_cp13_ParamLimits

0x5b29,	// (0x0008fa31) clock_digital_number_pane_cp13

0x5b41,	// (0x0008fa49) clock_digital_separator_pane_cp10_ParamLimits

0x5b41,	// (0x0008fa49) clock_digital_separator_pane_cp10

0x5b59,	// (0x0008fa61) popup_clock_digital_window_cp02_t1_ParamLimits

0x5b59,	// (0x0008fa61) popup_clock_digital_window_cp02_t1

0xa765,	// (0x0009466d) clock_digital_number_pane_cp10_g1

0xa765,	// (0x0009466d) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0009970a) clock_digital_number_pane_cp10_g

0xa765,	// (0x0009466d) clock_digital_separator_pane_cp10_g1

0xa765,	// (0x0009466d) clock_digital_separator_pane_g2_cp10

0xb464,	// (0x0009536c) navi_pane_vded_g4

0xb46d,	// (0x00095375) navi_pane_vded_g5

0xb476,	// (0x0009537e) navi_pane_vded_t1

0xa0f5,	// (0x00093ffd) main_vded_pane

0x5c84,	// (0x0008fb8c) main_vded_pane_g1

0x5c8e,	// (0x0008fb96) main_vded_pane_g2

0x5c98,	// (0x0008fba0) main_vded_pane_g3

0x0002,

0xf807,	// (0x0009970f) main_vded_pane_g

0x5ca2,	// (0x0008fbaa) main_vded_pane_t1

0x5cb0,	// (0x0008fbb8) main_vded_pane_t2

0x0001,

0xf80e,	// (0x00099716) main_vded_pane_t

0x5cbe,	// (0x0008fbc6) vded_slider_pane

0x5cc6,	// (0x0008fbce) vded_video_pane

0xd2ac,	// (0x000971b4) vded_video_pane_g1

0x5cce,	// (0x0008fbd6) vded_video_pane_g2

0xcd01,	// (0x00096c09) vded_video_pane_g3

0x0002,

0xf813,	// (0x0009971b) vded_video_pane_g

0xd2b6,	// (0x000971be) vded_slider_pane_g1

0xca48,	// (0x00096950) vded_slider_pane_g2

0xd2bf,	// (0x000971c7) vded_slider_pane_g3

0xd2c8,	// (0x000971d0) vded_slider_pane_g4

0xd2d1,	// (0x000971d9) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x00099722) vded_slider_pane_g

0x56a8,	// (0x0008f5b0) mup3_rocker_pane_ParamLimits

0x56a8,	// (0x0008f5b0) mup3_rocker_pane

0x5cd7,	// (0x0008fbdf) mup3_control_keys_pane_g1

0x5cdf,	// (0x0008fbe7) mup3_control_keys_pane_g2

0x5ce7,	// (0x0008fbef) mup3_control_keys_pane_g3

0x5cef,	// (0x0008fbf7) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0009972d) mup3_control_keys_pane_g

0x13f8,	// (0x0008b300) popup_toolbar2_fixed_window_cp01_ParamLimits

0x13f8,	// (0x0008b300) popup_toolbar2_fixed_window_cp01

0x56dc,	// (0x0008f5e4) popup_toolbar2_fixed_window_cp02_ParamLimits

0x56dc,	// (0x0008f5e4) popup_toolbar2_fixed_window_cp02

0xbc29,	// (0x00095b31) popup_call2_audio_second_window_t4_ParamLimits

0xbc29,	// (0x00095b31) popup_call2_audio_second_window_t4

0xc157,	// (0x0009605f) popup_call2_audio_first_window_t6_ParamLimits

0xc157,	// (0x0009605f) popup_call2_audio_first_window_t6

0xc3ed,	// (0x000962f5) popup_call2_audio_out_window_t6_ParamLimits

0xc3ed,	// (0x000962f5) popup_call2_audio_out_window_t6

0xa0f5,	// (0x00093ffd) main_vitu_pane

0x5cff,	// (0x0008fc07) aid_size_cell_itu_ParamLimits

0x5cff,	// (0x0008fc07) aid_size_cell_itu

0xab1c,	// (0x00094a24) bg_popup_window_pane_cp08_ParamLimits

0xab1c,	// (0x00094a24) bg_popup_window_pane_cp08

0x5d15,	// (0x0008fc1d) field_vitu_entry_pane_ParamLimits

0x5d15,	// (0x0008fc1d) field_vitu_entry_pane

0x5d2d,	// (0x0008fc35) grid_vitu_function_pane_ParamLimits

0x5d2d,	// (0x0008fc35) grid_vitu_function_pane

0x5d48,	// (0x0008fc50) grid_vitu_itu_pane_ParamLimits

0x5d48,	// (0x0008fc50) grid_vitu_itu_pane

0x5d66,	// (0x0008fc6e) cell_vitu_itu_pane_ParamLimits

0x5d66,	// (0x0008fc6e) cell_vitu_itu_pane

0x5d88,	// (0x0008fc90) cell_vitu_function_pane_ParamLimits

0x5d88,	// (0x0008fc90) cell_vitu_function_pane

0xab1c,	// (0x00094a24) bg_popup_sub_pane_cp08_ParamLimits

0xab1c,	// (0x00094a24) bg_popup_sub_pane_cp08

0x5da1,	// (0x0008fca9) field_vitu_entry_pane_t1_ParamLimits

0x5da1,	// (0x0008fca9) field_vitu_entry_pane_t1

0xd2f2,	// (0x000971fa) field_vitu_entry_pane_t2_ParamLimits

0xd2f2,	// (0x000971fa) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0009973b) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0009973b) field_vitu_entry_pane_t

0xd30f,	// (0x00097217) bg_button_pane_cp05_ParamLimits

0xd30f,	// (0x00097217) bg_button_pane_cp05

0x5dc0,	// (0x0008fcc8) cell_vitu_itu_pane_g1

0x5dd8,	// (0x0008fce0) cell_vitu_itu_pane_t1_ParamLimits

0x5dd8,	// (0x0008fce0) cell_vitu_itu_pane_t1

0x5dea,	// (0x0008fcf2) cell_vitu_itu_pane_t2_ParamLimits

0x5dea,	// (0x0008fcf2) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x00099740) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x00099740) cell_vitu_itu_pane_t

0xd31d,	// (0x00097225) bg_button_pane_cp07

0x5e1f,	// (0x0008fd27) cell_vitu_function_pane_g1

0x9705,	// (0x0009360d) main_calc_pane_g1

0x120f,	// (0x0008b117) aid_visual_content_pane

0xa0f5,	// (0x00093ffd) main_vradio_pane

0x5e28,	// (0x0008fd30) main_vradio_pane_g1_ParamLimits

0x5e28,	// (0x0008fd30) main_vradio_pane_g1

0xd327,	// (0x0009722f) main_vradio_pane_g2_ParamLimits

0xd327,	// (0x0009722f) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x00099747) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x00099747) main_vradio_pane_g

0x5e41,	// (0x0008fd49) main_vradio_pane_t1_ParamLimits

0x5e41,	// (0x0008fd49) main_vradio_pane_t1

0x5e56,	// (0x0008fd5e) main_vradio_pane_t2_ParamLimits

0x5e56,	// (0x0008fd5e) main_vradio_pane_t2

0xd334,	// (0x0009723c) main_vradio_pane_t3_ParamLimits

0xd334,	// (0x0009723c) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0009974c) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0009974c) main_vradio_pane_t

0x5e6b,	// (0x0008fd73) vradio_rocker_control_pane_ParamLimits

0x5e6b,	// (0x0008fd73) vradio_rocker_control_pane

0x5e7d,	// (0x0008fd85) vradio_station_info_pane_ParamLimits

0x5e7d,	// (0x0008fd85) vradio_station_info_pane

0xd348,	// (0x00097250) vradio_frequency_info_pane_ParamLimits

0xd348,	// (0x00097250) vradio_frequency_info_pane

0xcd01,	// (0x00096c09) vradio_station_info_pane_g1

0xd357,	// (0x0009725f) vradio_station_info_pane_t1_ParamLimits

0xd357,	// (0x0009725f) vradio_station_info_pane_t1

0xd379,	// (0x00097281) vradio_station_info_pane_t2_ParamLimits

0xd379,	// (0x00097281) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x00099753) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x00099753) vradio_station_info_pane_t

0xd38b,	// (0x00097293) vradio_tuning_pane

0xd393,	// (0x0009729b) vradio_rocker_control_pane_g1

0xd39b,	// (0x000972a3) vradio_rocker_control_pane_g2

0xd3a3,	// (0x000972ab) vradio_rocker_control_pane_g3

0xd3ab,	// (0x000972b3) vradio_rocker_control_pane_g4

0xd3b3,	// (0x000972bb) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x00099758) vradio_rocker_control_pane_g

0x5e8f,	// (0x0008fd97) vradio_frequency_info_pane_g1

0xd3bb,	// (0x000972c3) vradio_frequency_info_pane_t1_ParamLimits

0xd3bb,	// (0x000972c3) vradio_frequency_info_pane_t1

0x5e99,	// (0x0008fda1) vradio_tuning_pane_g1

0x5ea4,	// (0x0008fdac) vradio_tuning_pane_t1

0x96c3,	// (0x000935cb) area_side_right_pane_ParamLimits

0x96c3,	// (0x000935cb) area_side_right_pane

0xc8a8,	// (0x000967b0) status_small_pane_g1

0xc8b0,	// (0x000967b8) status_small_pane_g2

0xc8b9,	// (0x000967c1) status_small_pane_g3

0xc8c2,	// (0x000967ca) status_small_pane_g4

0x0003,

0xf60b,	// (0x00099513) status_small_pane_g

0xc8cb,	// (0x000967d3) status_small_pane_t1

0xa0f5,	// (0x00093ffd) main_video3_pane

0xd3cf,	// (0x000972d7) cams_zoom_vslider_pane

0xd3d7,	// (0x000972df) image3_wide_pane_ParamLimits

0xd3d7,	// (0x000972df) image3_wide_pane

0xd3f1,	// (0x000972f9) image3_wide_small_pane

0xd3fd,	// (0x00097305) main_video3_pane_g1_ParamLimits

0xd3fd,	// (0x00097305) main_video3_pane_g1

0xd419,	// (0x00097321) main_video3_pane_g2_ParamLimits

0xd419,	// (0x00097321) main_video3_pane_g2

0x0001,

0xf85b,	// (0x00099763) main_video3_pane_g_ParamLimits

0xf85b,	// (0x00099763) main_video3_pane_g

0xd435,	// (0x0009733d) main_video3_pane_t1_ParamLimits

0xd435,	// (0x0009733d) main_video3_pane_t1

0xd460,	// (0x00097368) main_video3_pane_t2_ParamLimits

0xd460,	// (0x00097368) main_video3_pane_t2

0xd48b,	// (0x00097393) main_video3_pane_t3_ParamLimits

0xd48b,	// (0x00097393) main_video3_pane_t3

0x0002,

0xf860,	// (0x00099768) main_video3_pane_t_ParamLimits

0xf860,	// (0x00099768) main_video3_pane_t

0xd4b8,	// (0x000973c0) cams_zoom_vslider_pane_g1

0xd4c1,	// (0x000973c9) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0009976f) cams_zoom_vslider_pane_g

0xd4c9,	// (0x000973d1) small_slider_vertical_pane

0xcd01,	// (0x00096c09) small_slider_vertical_pane_g1

0xcd01,	// (0x00096c09) small_slider_vertical_pane_g2

0xd4d1,	// (0x000973d9) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x00099774) small_slider_vertical_pane_g

0xa0f5,	// (0x00093ffd) main_hwr_training_pane

0xd4da,	// (0x000973e2) hwr_training_instruct_pane_ParamLimits

0xd4da,	// (0x000973e2) hwr_training_instruct_pane

0x5eb3,	// (0x0008fdbb) hwr_training_navi_pane_ParamLimits

0x5eb3,	// (0x0008fdbb) hwr_training_navi_pane

0x5ed2,	// (0x0008fdda) hwr_training_write_pane_ParamLimits

0x5ed2,	// (0x0008fdda) hwr_training_write_pane

0xa0f5,	// (0x00093ffd) bg_frame_shadow_pane

0xd511,	// (0x00097419) hwr_training_write_pane_g1

0xd519,	// (0x00097421) hwr_training_write_pane_g2

0xd521,	// (0x00097429) hwr_training_write_pane_g3

0xd529,	// (0x00097431) hwr_training_write_pane_g4

0xd531,	// (0x00097439) hwr_training_write_pane_g5

0xd539,	// (0x00097441) hwr_training_write_pane_g6

0xd541,	// (0x00097449) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0009977b) hwr_training_write_pane_g

0x99f3,	// (0x000938fb) hwr_training_navi_pane_g1_ParamLimits

0x99f3,	// (0x000938fb) hwr_training_navi_pane_g1

0x9a05,	// (0x0009390d) hwr_training_navi_pane_g2_ParamLimits

0x9a05,	// (0x0009390d) hwr_training_navi_pane_g2

0x9a17,	// (0x0009391f) hwr_training_navi_pane_g3_ParamLimits

0x9a17,	// (0x0009391f) hwr_training_navi_pane_g3

0x9a27,	// (0x0009392f) hwr_training_navi_pane_g4_ParamLimits

0x9a27,	// (0x0009392f) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0009978a) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0009978a) hwr_training_navi_pane_g

0x9a34,	// (0x0009393c) hwr_training_navi_pane_t1

0x5f1c,	// (0x0008fe24) list_single_hwr_training_instruct_pane_ParamLimits

0x5f1c,	// (0x0008fe24) list_single_hwr_training_instruct_pane

0xd549,	// (0x00097451) list_single_hwr_training_instruct_pane_t1

0xcc41,	// (0x00096b49) bg_frame_shadow_pane_g1

0xd558,	// (0x00097460) bg_frame_shadow_pane_g2

0xd560,	// (0x00097468) bg_frame_shadow_pane_g3

0xd568,	// (0x00097470) bg_frame_shadow_pane_g4

0xd570,	// (0x00097478) bg_frame_shadow_pane_g5

0xd578,	// (0x00097480) bg_frame_shadow_pane_g6

0xd580,	// (0x00097488) bg_frame_shadow_pane_g7

0xa909,	// (0x00094811) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x00099795) bg_frame_shadow_pane_g

0xa0f5,	// (0x00093ffd) main_video_tele_dialer_pane

0x5f32,	// (0x0008fe3a) aid_size_cell_video_keypad_ParamLimits

0x5f32,	// (0x0008fe3a) aid_size_cell_video_keypad

0x5f4c,	// (0x0008fe54) grid_video_dialer_keypad_pane_ParamLimits

0x5f4c,	// (0x0008fe54) grid_video_dialer_keypad_pane

0x5f9a,	// (0x0008fea2) video_down_pane_cp_ParamLimits

0x5f9a,	// (0x0008fea2) video_down_pane_cp

0x5fcc,	// (0x0008fed4) cell_video_dialer_keypad_pane_ParamLimits

0x5fcc,	// (0x0008fed4) cell_video_dialer_keypad_pane

0xd588,	// (0x00097490) bg_button_pane_cp08_ParamLimits

0xd588,	// (0x00097490) bg_button_pane_cp08

0x5fee,	// (0x0008fef6) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5fee,	// (0x0008fef6) cell_video_dialer_keypad_pane_g1

0x5692,	// (0x0008f59a) mup3_rocker2_pane_ParamLimits

0x5692,	// (0x0008f59a) mup3_rocker2_pane

0xcd01,	// (0x00096c09) mup3_rocker2_pane_g1

0x4193,	// (0x0008e09b) main_dialer2_pane

0xa0f5,	// (0x00093ffd) main_mp4_pane

0x9a4a,	// (0x00093952) main_mp4_pane_g1_ParamLimits

0x9a4a,	// (0x00093952) main_mp4_pane_g1

0x9a4a,	// (0x00093952) main_mp4_pane_g2_ParamLimits

0x9a4a,	// (0x00093952) main_mp4_pane_g2

0x6028,	// (0x0008ff30) main_mp4_pane_g3_ParamLimits

0x6028,	// (0x0008ff30) main_mp4_pane_g3

0x9a58,	// (0x00093960) main_mp4_pane_g4_ParamLimits

0x9a58,	// (0x00093960) main_mp4_pane_g4

0x9a80,	// (0x00093988) main_mp4_pane_g5_ParamLimits

0x9a80,	// (0x00093988) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x000997b5) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x000997b5) main_mp4_pane_g

0x9ad0,	// (0x000939d8) main_mp4_pane_t1_ParamLimits

0x9ad0,	// (0x000939d8) main_mp4_pane_t1

0x9b2c,	// (0x00093a34) main_mp4_pane_t2_ParamLimits

0x9b2c,	// (0x00093a34) main_mp4_pane_t2

0xd594,	// (0x0009749c) main_mp4_pane_t3_ParamLimits

0xd594,	// (0x0009749c) main_mp4_pane_t3

0x9b7e,	// (0x00093a86) main_mp4_pane_t4_ParamLimits

0x9b7e,	// (0x00093a86) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x000997c2) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x000997c2) main_mp4_pane_t

0x9bc2,	// (0x00093aca) mp4_progress_pane_ParamLimits

0x9bc2,	// (0x00093aca) mp4_progress_pane

0x9c0c,	// (0x00093b14) mp4_rocker_pane_ParamLimits

0x9c0c,	// (0x00093b14) mp4_rocker_pane

0xd5bc,	// (0x000974c4) mp4_progress_pane_t1

0xd5d5,	// (0x000974dd) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x000997cb) mp4_progress_pane_t

0xd5ee,	// (0x000974f6) mup_progress_pane_cp04

0xcd01,	// (0x00096c09) mp4_rocker_pane_g1

0x6064,	// (0x0008ff6c) aid_cell_size_keypad2_ParamLimits

0x6064,	// (0x0008ff6c) aid_cell_size_keypad2

0x607a,	// (0x0008ff82) dialer2_ne_pane_ParamLimits

0x607a,	// (0x0008ff82) dialer2_ne_pane

0x6094,	// (0x0008ff9c) grid_dialer2_keypad_pane_ParamLimits

0x6094,	// (0x0008ff9c) grid_dialer2_keypad_pane

0xcae6,	// (0x000969ee) bg_popup_call_pane_cp07_ParamLimits

0xcae6,	// (0x000969ee) bg_popup_call_pane_cp07

0x60b0,	// (0x0008ffb8) dialer2_ne_pane_t1_ParamLimits

0x60b0,	// (0x0008ffb8) dialer2_ne_pane_t1

0x60ec,	// (0x0008fff4) cell_dialer2_keypad_pane_ParamLimits

0x60ec,	// (0x0008fff4) cell_dialer2_keypad_pane

0xd60c,	// (0x00097514) bg_button_pane_pane_cp04_ParamLimits

0xd60c,	// (0x00097514) bg_button_pane_pane_cp04

0x610e,	// (0x00090016) cell_dialer2_keypad_pane_g1_ParamLimits

0x610e,	// (0x00090016) cell_dialer2_keypad_pane_g1

0x2207,	// (0x0008c10f) aid_placing_vt_set_content_ParamLimits

0x2207,	// (0x0008c10f) aid_placing_vt_set_content

0x222f,	// (0x0008c137) aid_placing_vt_set_title_ParamLimits

0x222f,	// (0x0008c137) aid_placing_vt_set_title

0xa0f5,	// (0x00093ffd) main_image3_pane

0x61d4,	// (0x000900dc) area_side_right_pane_cp01_ParamLimits

0x61d4,	// (0x000900dc) area_side_right_pane_cp01

0x9a4a,	// (0x00093952) main_image3_pane_g1_ParamLimits

0x9a4a,	// (0x00093952) main_image3_pane_g1

0x61eb,	// (0x000900f3) main_image3_pane_g2_ParamLimits

0x61eb,	// (0x000900f3) main_image3_pane_g2

0x6213,	// (0x0009011b) main_image3_pane_g3_ParamLimits

0x6213,	// (0x0009011b) main_image3_pane_g3

0x623d,	// (0x00090145) main_image3_pane_g4_ParamLimits

0x623d,	// (0x00090145) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x000997da) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x000997da) main_image3_pane_g

0x6267,	// (0x0009016f) main_image3_pane_t1_ParamLimits

0x6267,	// (0x0009016f) main_image3_pane_t1

0x62bf,	// (0x000901c7) main_image3_pane_t2_ParamLimits

0x62bf,	// (0x000901c7) main_image3_pane_t2

0x6311,	// (0x00090219) main_image3_pane_t3_ParamLimits

0x6311,	// (0x00090219) main_image3_pane_t3

0x0003,

0xf8db,	// (0x000997e3) main_image3_pane_t_ParamLimits

0xf8db,	// (0x000997e3) main_image3_pane_t

0xab1c,	// (0x00094a24) grid_sctrl_middle_pane_cp01_ParamLimits

0xab1c,	// (0x00094a24) grid_sctrl_middle_pane_cp01

0x6399,	// (0x000902a1) cell_sctrl_middle_pane_cp01_ParamLimits

0x6399,	// (0x000902a1) cell_sctrl_middle_pane_cp01

0x63b6,	// (0x000902be) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x63b6,	// (0x000902be) cell_sctrl_middle_pane_cp01_g1

0xa0f5,	// (0x00093ffd) main_call4_pane

0x63cc,	// (0x000902d4) aid_size_button_call4_ParamLimits

0x63cc,	// (0x000902d4) aid_size_button_call4

0x63fd,	// (0x00090305) call4_windows_pane_ParamLimits

0x63fd,	// (0x00090305) call4_windows_pane

0x641d,	// (0x00090325) grid_call4_button_pane_ParamLimits

0x641d,	// (0x00090325) grid_call4_button_pane

0xd618,	// (0x00097520) call4_windows_conf_pane

0xd62f,	// (0x00097537) popup_call4_audio_first_window_ParamLimits

0xd62f,	// (0x00097537) popup_call4_audio_first_window

0xd677,	// (0x0009757f) popup_call4_audio_second_window_ParamLimits

0xd677,	// (0x0009757f) popup_call4_audio_second_window

0xd690,	// (0x00097598) popup_call4_audio_wait_window_ParamLimits

0xd690,	// (0x00097598) popup_call4_audio_wait_window

0x644a,	// (0x00090352) cell_call4_button_pane_ParamLimits

0x644a,	// (0x00090352) cell_call4_button_pane

0x6473,	// (0x0009037b) bg_button_pane_cp09_ParamLimits

0x6473,	// (0x0009037b) bg_button_pane_cp09

0x647f,	// (0x00090387) cell_call4_button_pane_g1_ParamLimits

0x647f,	// (0x00090387) cell_call4_button_pane_g1

0x64a5,	// (0x000903ad) cell_call4_button_pane_t1_ParamLimits

0x64a5,	// (0x000903ad) cell_call4_button_pane_t1

0xd6a6,	// (0x000975ae) popup_call4_audio_conf_window_ParamLimits

0xd6a6,	// (0x000975ae) popup_call4_audio_conf_window

0x56f2,	// (0x0008f5fa) mup3_progress_pane_t1_ParamLimits

0x5711,	// (0x0008f619) mup3_progress_pane_t2_ParamLimits

0xcfca,	// (0x00096ed2) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x000996b7) mup3_progress_pane_t_ParamLimits

0xcfe7,	// (0x00096eef) mup_progress_pane_cp03_ParamLimits

0x5cf7,	// (0x0008fbff) mup3_control_keys_pane_g4_copy1

0x9bf0,	// (0x00093af8) mp4_rocker2_pane_ParamLimits

0x9bf0,	// (0x00093af8) mp4_rocker2_pane

0xd6ba,	// (0x000975c2) mp4_rocker2_pane_g1

0xd6c2,	// (0x000975ca) mp4_rocker2_pane_g2

0x9c90,	// (0x00093b98) mp4_rocker2_pane_g3

0x9c98,	// (0x00093ba0) mp4_rocker2_pane_g4

0x9ca0,	// (0x00093ba8) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x000997ec) mp4_rocker2_pane_g

0xa0f5,	// (0x00093ffd) main_camera4_pane

0xa0f5,	// (0x00093ffd) main_video4_pane

0x5f68,	// (0x0008fe70) main_video_tele_dialer_pane_t1_ParamLimits

0x5f68,	// (0x0008fe70) main_video_tele_dialer_pane_t1

0x5f81,	// (0x0008fe89) main_video_tele_dialer_pane_t2_ParamLimits

0x5f81,	// (0x0008fe89) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x000997a6) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x000997a6) main_video_tele_dialer_pane_t

0x64e7,	// (0x000903ef) cam4_autofocus_pane_ParamLimits

0x64e7,	// (0x000903ef) cam4_autofocus_pane

0x64fd,	// (0x00090405) cam4_image_uncrop_pane_ParamLimits

0x64fd,	// (0x00090405) cam4_image_uncrop_pane

0x6517,	// (0x0009041f) cam4_indicators_pane_ParamLimits

0x6517,	// (0x0009041f) cam4_indicators_pane

0x6542,	// (0x0009044a) main_camera4_pane_g1_ParamLimits

0x6542,	// (0x0009044a) main_camera4_pane_g1

0x6554,	// (0x0009045c) main_camera4_pane_g2_ParamLimits

0x6554,	// (0x0009045c) main_camera4_pane_g2

0x6567,	// (0x0009046f) main_camera4_pane_g3_ParamLimits

0x6567,	// (0x0009046f) main_camera4_pane_g3

0x657a,	// (0x00090482) main_camera4_pane_g4_ParamLimits

0x657a,	// (0x00090482) main_camera4_pane_g4

0x658d,	// (0x00090495) main_camera4_pane_g5_ParamLimits

0x658d,	// (0x00090495) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x000997f7) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x000997f7) main_camera4_pane_g

0x65b1,	// (0x000904b9) main_camera4_pane_t1_ParamLimits

0x65b1,	// (0x000904b9) main_camera4_pane_t1

0xcf4f,	// (0x00096e57) bg_tb_trans_pane_cp06

0x9ccc,	// (0x00093bd4) cam4_indicators_pane_g1

0x9cdd,	// (0x00093be5) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x00099812) cam4_indicators_pane_g

0x9cf5,	// (0x00093bfd) cam4_indicators_pane_t1

0x6615,	// (0x0009051d) main_video4_pane_g1_ParamLimits

0x6615,	// (0x0009051d) main_video4_pane_g1

0x6624,	// (0x0009052c) main_video4_pane_g2_ParamLimits

0x6624,	// (0x0009052c) main_video4_pane_g2

0x6633,	// (0x0009053b) main_video4_pane_g3_ParamLimits

0x6633,	// (0x0009053b) main_video4_pane_g3

0x6642,	// (0x0009054a) main_video4_pane_g4_ParamLimits

0x6642,	// (0x0009054a) main_video4_pane_g4

0x0004,

0xf911,	// (0x00099819) main_video4_pane_g_ParamLimits

0xf911,	// (0x00099819) main_video4_pane_g

0x6660,	// (0x00090568) vid4_indicators_pane_ParamLimits

0x6660,	// (0x00090568) vid4_indicators_pane

0x668e,	// (0x00090596) video4_image_uncrop_cif_pane_ParamLimits

0x668e,	// (0x00090596) video4_image_uncrop_cif_pane

0x66a8,	// (0x000905b0) video4_image_uncrop_nhd_pane_ParamLimits

0x66a8,	// (0x000905b0) video4_image_uncrop_nhd_pane

0x64fd,	// (0x00090405) video4_image_uncrop_vga_pane_ParamLimits

0x64fd,	// (0x00090405) video4_image_uncrop_vga_pane

0xab1c,	// (0x00094a24) bg_tb_trans_pane_cp07

0x9d1f,	// (0x00093c27) vid4_indicators_pane_g1

0x9d33,	// (0x00093c3b) vid4_indicators_pane_g2

0x9d47,	// (0x00093c4f) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x00099824) vid4_indicators_pane_g

0x9d74,	// (0x00093c7c) vid4_indicators_pane_t1

0x66bc,	// (0x000905c4) cam4_autofocus_pane_g1

0x66c4,	// (0x000905cc) cam4_autofocus_pane_g2

0x66cc,	// (0x000905d4) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0009982f) cam4_autofocus_pane_g

0x66d4,	// (0x000905dc) cam4_autofocus_pane_g3_copy1

0x5fb0,	// (0x0008feb8) video_down_pane_cp_t1

0x5fbe,	// (0x0008fec6) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x000997ab) video_down_pane_cp_t

0xab1c,	// (0x00094a24) popup_vitu2_window_ParamLimits

0xab1c,	// (0x00094a24) popup_vitu2_window

0x66dc,	// (0x000905e4) aid_size_cell2_itu2_ParamLimits

0x66dc,	// (0x000905e4) aid_size_cell2_itu2

0x6702,	// (0x0009060a) aid_size_cell_itu2_ParamLimits

0x6702,	// (0x0009060a) aid_size_cell_itu2

0x675e,	// (0x00090666) bg_popup_window_pane_cp09_ParamLimits

0x675e,	// (0x00090666) bg_popup_window_pane_cp09

0x676c,	// (0x00090674) field_vitu2_entry_pane_ParamLimits

0x676c,	// (0x00090674) field_vitu2_entry_pane

0x6792,	// (0x0009069a) grid_vitu2_function_pane_ParamLimits

0x6792,	// (0x0009069a) grid_vitu2_function_pane

0x67e3,	// (0x000906eb) grid_vitu2_itu_pane_ParamLimits

0x67e3,	// (0x000906eb) grid_vitu2_itu_pane

0x6879,	// (0x00090781) cell_vitu2_itu_pane_ParamLimits

0x6879,	// (0x00090781) cell_vitu2_itu_pane

0x68a5,	// (0x000907ad) cell_vitu2_function_pane_ParamLimits

0x68a5,	// (0x000907ad) cell_vitu2_function_pane

0xd6dc,	// (0x000975e4) bg_popup_call_pane_cp08_ParamLimits

0xd6dc,	// (0x000975e4) bg_popup_call_pane_cp08

0xd6f3,	// (0x000975fb) field_vitu2_entry_pane_g1

0xd6ff,	// (0x00097607) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x00099836) field_vitu2_entry_pane_g

0x060d,	// (0x0008a515) field_vitu2_entry_pane_t1_ParamLimits

0x060d,	// (0x0008a515) field_vitu2_entry_pane_t1

0x68e4,	// (0x000907ec) field_vitu2_entry_pane_t2_ParamLimits

0x68e4,	// (0x000907ec) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0009983d) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0009983d) field_vitu2_entry_pane_t

0x6901,	// (0x00090809) bg_button_pane_cp010_ParamLimits

0x6901,	// (0x00090809) bg_button_pane_cp010

0x9d8b,	// (0x00093c93) cell_vitu2_itu_pane_g1

0x691d,	// (0x00090825) cell_vitu2_itu_pane_t1_ParamLimits

0x691d,	// (0x00090825) cell_vitu2_itu_pane_t1

0x063c,	// (0x0008a544) cell_vitu2_itu_pane_t2_ParamLimits

0x063c,	// (0x0008a544) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x00099847) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x00099847) cell_vitu2_itu_pane_t

0xab1c,	// (0x00094a24) bg_button_pane_cp011

0x697b,	// (0x00090883) cell_vitu2_function_pane_g1

0xa0f5,	// (0x00093ffd) main_myfav_hc_pane

0x6361,	// (0x00090269) popup_image3_note_pane_ParamLimits

0x6361,	// (0x00090269) popup_image3_note_pane

0x637d,	// (0x00090285) popup_image3_tool_bar_pane_ParamLimits

0x637d,	// (0x00090285) popup_image3_tool_bar_pane

0x06ca,	// (0x0008a5d2) cell_vitu2_itu_pane_t3_ParamLimits

0x06ca,	// (0x0008a5d2) cell_vitu2_itu_pane_t3

0xa0f5,	// (0x00093ffd) bg_popup_trans_pane

0xd721,	// (0x00097629) grid_image3_tool_bar_pane

0xd72b,	// (0x00097633) bg_popup_trans_pane_g1

0xacba,	// (0x00094bc2) bg_popup_trans_pane_g2

0xd733,	// (0x0009763b) bg_popup_trans_pane_g3

0xd73b,	// (0x00097643) bg_popup_trans_pane_g4

0xd743,	// (0x0009764b) bg_popup_trans_pane_g5

0xd74b,	// (0x00097653) bg_popup_trans_pane_g6

0xd753,	// (0x0009765b) bg_popup_trans_pane_g7

0xd75b,	// (0x00097663) bg_popup_trans_pane_g8

0xac9a,	// (0x00094ba2) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0009984e) bg_popup_trans_pane_g

0xd763,	// (0x0009766b) cell_image3_tool_bar_pane_ParamLimits

0xd763,	// (0x0009766b) cell_image3_tool_bar_pane

0xcd01,	// (0x00096c09) cell_image3_tool_bar_pane_g1

0xa0f5,	// (0x00093ffd) bg_popup_trans_pane_cp1

0xd777,	// (0x0009767f) popup_image3_note_pane_t1

0xd785,	// (0x0009768d) popup_image3_note_pane_t2

0xd793,	// (0x0009769b) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x00099861) popup_image3_note_pane_t

0xd7a1,	// (0x000976a9) popup_image3_note_pane_t3_copy1

0x698f,	// (0x00090897) bg_myfav_hc_instruction_pane_ParamLimits

0x698f,	// (0x00090897) bg_myfav_hc_instruction_pane

0x69a3,	// (0x000908ab) cell_myfav_contact_pane_ParamLimits

0x69a3,	// (0x000908ab) cell_myfav_contact_pane

0x69c1,	// (0x000908c9) cell_myfav_contact_pane_cp1_ParamLimits

0x69c1,	// (0x000908c9) cell_myfav_contact_pane_cp1

0x69d9,	// (0x000908e1) cell_myfav_contact_pane_cp2_ParamLimits

0x69d9,	// (0x000908e1) cell_myfav_contact_pane_cp2

0x69f1,	// (0x000908f9) cell_myfav_contact_pane_cp3_ParamLimits

0x69f1,	// (0x000908f9) cell_myfav_contact_pane_cp3

0x6a08,	// (0x00090910) cell_myfav_contact_pane_cp4_ParamLimits

0x6a08,	// (0x00090910) cell_myfav_contact_pane_cp4

0x6a20,	// (0x00090928) cell_myfav_contact_pane_cp5_ParamLimits

0x6a20,	// (0x00090928) cell_myfav_contact_pane_cp5

0x6a34,	// (0x0009093c) cell_myfav_contact_pane_cp6_ParamLimits

0x6a34,	// (0x0009093c) cell_myfav_contact_pane_cp6

0x6a4a,	// (0x00090952) cell_myfav_contact_pane_cp7_ParamLimits

0x6a4a,	// (0x00090952) cell_myfav_contact_pane_cp7

0xd7af,	// (0x000976b7) listscroll_gen_pane_cp05

0x6a64,	// (0x0009096c) main_myfav_hc_pane_g1_ParamLimits

0x6a64,	// (0x0009096c) main_myfav_hc_pane_g1

0x6a7e,	// (0x00090986) main_myfav_hc_pane_g2_ParamLimits

0x6a7e,	// (0x00090986) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x00099868) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x00099868) main_myfav_hc_pane_g

0x6ab0,	// (0x000909b8) main_myfav_hc_pane_t1_ParamLimits

0x6ab0,	// (0x000909b8) main_myfav_hc_pane_t1

0xd7b8,	// (0x000976c0) main_myfav_hc_pane_t2_ParamLimits

0xd7b8,	// (0x000976c0) main_myfav_hc_pane_t2

0xd7ca,	// (0x000976d2) main_myfav_hc_pane_t3_ParamLimits

0xd7ca,	// (0x000976d2) main_myfav_hc_pane_t3

0x6ac7,	// (0x000909cf) main_myfav_hc_pane_t4_ParamLimits

0x6ac7,	// (0x000909cf) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0009986f) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0009986f) main_myfav_hc_pane_t

0xcd01,	// (0x00096c09) bg_myfav_hc_instruction_pane_g1

0xd7dc,	// (0x000976e4) cell_myfav_contact_pane_g1_ParamLimits

0xd7dc,	// (0x000976e4) cell_myfav_contact_pane_g1

0xd7dc,	// (0x000976e4) cell_myfav_contact_pane_g2_ParamLimits

0xd7dc,	// (0x000976e4) cell_myfav_contact_pane_g2

0xd7e8,	// (0x000976f0) cell_myfav_contact_pane_g3_ParamLimits

0xd7e8,	// (0x000976f0) cell_myfav_contact_pane_g3

0xcfb4,	// (0x00096ebc) cell_myfav_contact_pane_g4_ParamLimits

0xcfb4,	// (0x00096ebc) cell_myfav_contact_pane_g4

0xd7f5,	// (0x000976fd) cell_myfav_contact_pane_g5_ParamLimits

0xd7f5,	// (0x000976fd) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0009987a) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0009987a) cell_myfav_contact_pane_g

0x6a98,	// (0x000909a0) main_myfav_hc_pane_g3_ParamLimits

0x6a98,	// (0x000909a0) main_myfav_hc_pane_g3

0x135a,	// (0x0008b262) popup_adpt_find_window

0x6aef,	// (0x000909f7) afind_page_pane_ParamLimits

0x6aef,	// (0x000909f7) afind_page_pane

0x6b04,	// (0x00090a0c) aid_size_cell_afind_ParamLimits

0x6b04,	// (0x00090a0c) aid_size_cell_afind

0x6b22,	// (0x00090a2a) bg_popup_sub_pane_cp09_ParamLimits

0x6b22,	// (0x00090a2a) bg_popup_sub_pane_cp09

0x6b2f,	// (0x00090a37) find_pane_cp01_ParamLimits

0x6b2f,	// (0x00090a37) find_pane_cp01

0xd801,	// (0x00097709) grid_afind_control_pane_ParamLimits

0xd801,	// (0x00097709) grid_afind_control_pane

0x6b3c,	// (0x00090a44) grid_afind_pane_ParamLimits

0x6b3c,	// (0x00090a44) grid_afind_pane

0x6b5b,	// (0x00090a63) cell_afind_pane_ParamLimits

0x6b5b,	// (0x00090a63) cell_afind_pane

0xcd01,	// (0x00096c09) afind_page_pane_g1

0x6bc2,	// (0x00090aca) afind_page_pane_g2

0x6bcb,	// (0x00090ad3) afind_page_pane_g3

0x0002,

0xf97d,	// (0x00099885) afind_page_pane_g

0x6bd4,	// (0x00090adc) afind_page_pane_t1

0xd815,	// (0x0009771d) cell_afind_grid_control_pane_ParamLimits

0xd815,	// (0x0009771d) cell_afind_grid_control_pane

0xd60c,	// (0x00097514) bg_button_pane_cp69_ParamLimits

0xd60c,	// (0x00097514) bg_button_pane_cp69

0x6bf4,	// (0x00090afc) cell_afind_pane_g1_ParamLimits

0x6bf4,	// (0x00090afc) cell_afind_pane_g1

0x6c01,	// (0x00090b09) cell_afind_pane_t1_ParamLimits

0x6c01,	// (0x00090b09) cell_afind_pane_t1

0xaa67,	// (0x0009496f) bg_button_pane_cp72

0xd824,	// (0x0009772c) cell_afind_grid_control_pane_g1

0x3c52,	// (0x0008db5a) aid_image_placing_area_ParamLimits

0x3c52,	// (0x0008db5a) aid_image_placing_area

0xd2da,	// (0x000971e2) field_vitu_entry_pane_g1_ParamLimits

0xd2da,	// (0x000971e2) field_vitu_entry_pane_g1

0xd2e6,	// (0x000971ee) field_vitu_entry_pane_g2_ParamLimits

0xd2e6,	// (0x000971ee) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x00099736) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x00099736) field_vitu_entry_pane_g

0x5dc0,	// (0x0008fcc8) cell_vitu_itu_pane_g1_ParamLimits

0x5e02,	// (0x0008fd0a) cell_vitu_itu_pane_t3_ParamLimits

0x5e02,	// (0x0008fd0a) cell_vitu_itu_pane_t3

0xd5bc,	// (0x000974c4) mp4_progress_pane_t1_ParamLimits

0xd5d5,	// (0x000974dd) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x000997cb) mp4_progress_pane_t_ParamLimits

0xd5ee,	// (0x000974f6) mup_progress_pane_cp04_ParamLimits

0x6adb,	// (0x000909e3) main_myfav_hc_pane_t5_ParamLimits

0x6adb,	// (0x000909e3) main_myfav_hc_pane_t5

0x1223,	// (0x0008b12b) aid_zoom_text_primary

0x135a,	// (0x0008b262) popup_adpt_find_window_ParamLimits

0xab1c,	// (0x00094a24) main_cam_set_pane

0x652e,	// (0x00090436) cam4_zoom_pane_ParamLimits

0x652e,	// (0x00090436) cam4_zoom_pane

0x6c13,	// (0x00090b1b) main_cam_set_pane_g1_ParamLimits

0x6c13,	// (0x00090b1b) main_cam_set_pane_g1

0x6c21,	// (0x00090b29) main_cam_set_pane_g2_ParamLimits

0x6c21,	// (0x00090b29) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0009988c) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0009988c) main_cam_set_pane_g

0x6c42,	// (0x00090b4a) main_cam_set_pane_t1_ParamLimits

0x6c42,	// (0x00090b4a) main_cam_set_pane_t1

0x6c5d,	// (0x00090b65) main_cset_listscroll_pane_ParamLimits

0x6c5d,	// (0x00090b65) main_cset_listscroll_pane

0x6c7d,	// (0x00090b85) main_cset_slider_pane_ParamLimits

0x6c7d,	// (0x00090b85) main_cset_slider_pane

0xd835,	// (0x0009773d) main_cset_list_pane_ParamLimits

0xd835,	// (0x0009773d) main_cset_list_pane

0xd845,	// (0x0009774d) scroll_pane_cp028

0x6ca3,	// (0x00090bab) aid_area_touch_slider

0x6cbf,	// (0x00090bc7) cset_slider_pane

0x6ce9,	// (0x00090bf1) main_cset_slider_pane_g1

0x6cfe,	// (0x00090c06) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x00099891) main_cset_slider_pane_g

0xd896,	// (0x0009779e) main_cset_slider_pane_t1

0x6da2,	// (0x00090caa) main_cset_slider_pane_t2

0x6dbc,	// (0x00090cc4) main_cset_slider_pane_t3

0x6dd6,	// (0x00090cde) main_cset_slider_pane_t4

0x6df0,	// (0x00090cf8) main_cset_slider_pane_t5

0x6e0a,	// (0x00090d12) main_cset_slider_pane_t6

0x6e1f,	// (0x00090d27) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x000998b6) main_cset_slider_pane_t

0x6f23,	// (0x00090e2b) cset_list_set_pane_ParamLimits

0x6f23,	// (0x00090e2b) cset_list_set_pane

0x6f35,	// (0x00090e3d) aid_position_infowindow_above

0x6f3d,	// (0x00090e45) aid_position_infowindow_below

0x6f45,	// (0x00090e4d) cset_list_set_pane_g1_ParamLimits

0x6f45,	// (0x00090e4d) cset_list_set_pane_g1

0x0728,	// (0x0008a630) cset_list_set_pane_g3_ParamLimits

0x0728,	// (0x0008a630) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x000998d5) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x000998d5) cset_list_set_pane_g

0x0737,	// (0x0008a63f) cset_list_set_pane_t1_ParamLimits

0x0737,	// (0x0008a63f) cset_list_set_pane_t1

0xab1c,	// (0x00094a24) list_highlight_pane_cp021_ParamLimits

0xab1c,	// (0x00094a24) list_highlight_pane_cp021

0xb5d8,	// (0x000954e0) cset_slider_pane_g1

0xb5ea,	// (0x000954f2) cset_slider_pane_g2

0xb5e1,	// (0x000954e9) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x000998da) cset_slider_pane_g

0x9d9d,	// (0x00093ca5) aid_area_touch_cam4_zoom

0x9da5,	// (0x00093cad) cam4_zoom_cont_pane

0x9dad,	// (0x00093cb5) cam4_zoom_pane_g1

0x9db5,	// (0x00093cbd) cam4_zoom_pane_g2

0x6f51,	// (0x00090e59) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x000998e1) cam4_zoom_pane_g

0xd4d1,	// (0x000973d9) cam4_zoom_cont_pane_g1

0xd936,	// (0x0009783e) cam4_zoom_cont_pane_g2

0xd93f,	// (0x00097847) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x000998e8) cam4_zoom_cont_pane_g

0x63ea,	// (0x000902f2) call4_image_pane_ParamLimits

0x63ea,	// (0x000902f2) call4_image_pane

0xd618,	// (0x00097520) call4_windows_conf_pane_ParamLimits

0xd655,	// (0x0009755d) popup_call4_audio_in_window_ParamLimits

0xd655,	// (0x0009755d) popup_call4_audio_in_window

0xa0f5,	// (0x00093ffd) bg_popup_call2_act_pane_cp02

0xd69e,	// (0x000975a6) call4_list_conf_pane

0xcd01,	// (0x00096c09) call4_image_pane_g1

0xcd01,	// (0x00096c09) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x000995f7) call4_image_pane_g

0xd948,	// (0x00097850) list_single_graphic_popup_conf4_pane_ParamLimits

0xd948,	// (0x00097850) list_single_graphic_popup_conf4_pane

0xa0f5,	// (0x00093ffd) list_highlight_pane_cp022

0xd95b,	// (0x00097863) list_single_graphic_popup_conf4_pane_g1

0xb1d4,	// (0x000950dc) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x000998ef) list_single_graphic_popup_conf4_pane_g

0xd963,	// (0x0009786b) list_single_graphic_popup_conf4_pane_t1

0x2353,	// (0x0008c25b) popup_vtel_slider_window_ParamLimits

0x2353,	// (0x0008c25b) popup_vtel_slider_window

0xd5fa,	// (0x00097502) dialer2_ne_pane_t2_ParamLimits

0xd5fa,	// (0x00097502) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x000997d0) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x000997d0) dialer2_ne_pane_t

0xcae6,	// (0x000969ee) bg_popup_sub_pane_cp010_ParamLimits

0xcae6,	// (0x000969ee) bg_popup_sub_pane_cp010

0x6f59,	// (0x00090e61) popup_vtel_slider_window_g1_ParamLimits

0x6f59,	// (0x00090e61) popup_vtel_slider_window_g1

0x6f6c,	// (0x00090e74) popup_vtel_slider_window_g2_ParamLimits

0x6f6c,	// (0x00090e74) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x000998f4) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x000998f4) popup_vtel_slider_window_g

0x6fc2,	// (0x00090eca) vtel_slider_pane_ParamLimits

0x6fc2,	// (0x00090eca) vtel_slider_pane

0x6fe4,	// (0x00090eec) vtel_slider_pane_g1_ParamLimits

0x6fe4,	// (0x00090eec) vtel_slider_pane_g1

0x6ff8,	// (0x00090f00) vtel_slider_pane_g2_ParamLimits

0x6ff8,	// (0x00090f00) vtel_slider_pane_g2

0x7010,	// (0x00090f18) vtel_slider_pane_g3_ParamLimits

0x7010,	// (0x00090f18) vtel_slider_pane_g3

0x6fe4,	// (0x00090eec) vtel_slider_pane_g4_ParamLimits

0x6fe4,	// (0x00090eec) vtel_slider_pane_g4

0x7026,	// (0x00090f2e) vtel_slider_pane_g5_ParamLimits

0x7026,	// (0x00090f2e) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x000998fd) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x000998fd) vtel_slider_pane_g

0xab1c,	// (0x00094a24) main_gallery2_pane

0x672e,	// (0x00090636) aid_size_row_itut2_dropdow_list_ParamLimits

0x672e,	// (0x00090636) aid_size_row_itut2_dropdow_list

0x67ba,	// (0x000906c2) grid_vitu2_function_top_pane_ParamLimits

0x67ba,	// (0x000906c2) grid_vitu2_function_top_pane

0x6824,	// (0x0009072c) popup_vitu2_dropdown_list_window_ParamLimits

0x6824,	// (0x0009072c) popup_vitu2_dropdown_list_window

0x684d,	// (0x00090755) popup_vitu2_match_list_window

0x703c,	// (0x00090f44) cell_vitu2_function_top_pane_ParamLimits

0x703c,	// (0x00090f44) cell_vitu2_function_top_pane

0x7054,	// (0x00090f5c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7054,	// (0x00090f5c) cell_vitu2_function_top_pane_cp01

0x7070,	// (0x00090f78) cell_vitu2_function_top_wide_pane_ParamLimits

0x7070,	// (0x00090f78) cell_vitu2_function_top_wide_pane

0xab1c,	// (0x00094a24) bg_button_pane_cp012

0x708c,	// (0x00090f94) cell_vitu2_function_top_pane_g1

0x9dbd,	// (0x00093cc5) bg_button_pane_cp013_ParamLimits

0x9dbd,	// (0x00093cc5) bg_button_pane_cp013

0x70a0,	// (0x00090fa8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x70a0,	// (0x00090fa8) cell_vitu2_function_top_wide_pane_g1

0xab1c,	// (0x00094a24) bg_popup_sub_pane_cp20

0x70b8,	// (0x00090fc0) list_vitu2_match_list_pane

0xd72b,	// (0x00097633) bg_popup_sub_pane_cp20_g1

0xd733,	// (0x0009763b) bg_popup_sub_pane_cp20_g2

0xacba,	// (0x00094bc2) bg_popup_sub_pane_cp20_g3

0xd73b,	// (0x00097643) bg_popup_sub_pane_cp20_g4

0xac9a,	// (0x00094ba2) bg_popup_sub_pane_cp20_g5

0xd979,	// (0x00097881) bg_popup_sub_pane_cp20_g6

0xd74b,	// (0x00097653) bg_popup_sub_pane_cp20_g7

0xd753,	// (0x0009765b) bg_popup_sub_pane_cp20_g8

0xd75b,	// (0x00097663) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x00099908) bg_popup_sub_pane_cp20_g

0x9dd9,	// (0x00093ce1) list_vitu2_match_list_item_pane_ParamLimits

0x9dd9,	// (0x00093ce1) list_vitu2_match_list_item_pane

0x9deb,	// (0x00093cf3) list_vitu2_match_list_item_pane_t1

0xa0f5,	// (0x00093ffd) bg_popup_sub_pane_cp21

0xb0fc,	// (0x00095004) grid_vitu2_dropdown_list_pane

0x70e2,	// (0x00090fea) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x70e2,	// (0x00090fea) cell_vitu2_dropdown_list_char_pane

0x7103,	// (0x0009100b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7103,	// (0x0009100b) cell_vitu2_dropdown_list_ctrl_pane

0xd981,	// (0x00097889) cell_vitu2_dropdown_list_char_pane_g1

0xd98a,	// (0x00097892) cell_vitu2_dropdown_list_char_pane_g2

0xd993,	// (0x0009789b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x00099925) cell_vitu2_dropdown_list_char_pane_g

0x712f,	// (0x00091037) cell_vitu2_dropdown_list_char_pane_t1

0x713d,	// (0x00091045) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x713d,	// (0x00091045) cell_vitu2_dropdown_list_ctrl_pane_g1

0x714a,	// (0x00091052) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x714a,	// (0x00091052) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7157,	// (0x0009105f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7157,	// (0x0009105f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7164,	// (0x0009106c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7164,	// (0x0009106c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf4f,	// (0x00096e57) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf4f,	// (0x00096e57) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0009992c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0009992c) cell_vitu2_dropdown_list_ctrl_pane_g

0x7180,	// (0x00091088) aid_size_cell_gallery2_ParamLimits

0x7180,	// (0x00091088) aid_size_cell_gallery2

0x719e,	// (0x000910a6) grid_gallery2_pane_ParamLimits

0x719e,	// (0x000910a6) grid_gallery2_pane

0x71b8,	// (0x000910c0) scroll_pane_cp029_ParamLimits

0x71b8,	// (0x000910c0) scroll_pane_cp029

0x71c9,	// (0x000910d1) cell_gallery2_pane_ParamLimits

0x71c9,	// (0x000910d1) cell_gallery2_pane

0xd99c,	// (0x000978a4) cell_gallery2_pane_g2

0x7228,	// (0x00091130) cell_gallery2_pane_g3

0xd9a4,	// (0x000978ac) cell_gallery2_pane_g4

0xd9ac,	// (0x000978b4) cell_gallery2_pane_g5

0xaa15,	// (0x0009491d) grid_highlight_pane_cp10

0x684d,	// (0x00090755) popup_vitu2_match_list_window_ParamLimits

0x6862,	// (0x0009076a) popup_vitu2_query_window_ParamLimits

0x6862,	// (0x0009076a) popup_vitu2_query_window

0xa0f5,	// (0x00093ffd) bg_vitu2_candi_button_pane

0xd981,	// (0x00097889) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd98a,	// (0x00097892) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd993,	// (0x0009789b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x079e,	// (0x0008a6a6) bg_button_pane_cp015

0x7230,	// (0x00091138) bg_button_pane_cp016

0x7243,	// (0x0009114b) bg_button_pane_cp017

0xc8ed,	// (0x000967f5) bg_popup_sub_pane_cp22

0xd9b4,	// (0x000978bc) popup_vitu2_query_window_g1

0x07d3,	// (0x0008a6db) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x00099937) popup_vitu2_query_window_g

0x07f2,	// (0x0008a6fa) popup_vitu2_query_window_t1_ParamLimits

0x07f2,	// (0x0008a6fa) popup_vitu2_query_window_t1

0x0827,	// (0x0008a72f) popup_vitu2_query_window_t2_ParamLimits

0x0827,	// (0x0008a72f) popup_vitu2_query_window_t2

0x0839,	// (0x0008a741) popup_vitu2_query_window_t3_ParamLimits

0x0839,	// (0x0008a741) popup_vitu2_query_window_t3

0x7267,	// (0x0009116f) popup_vitu2_query_window_t4_ParamLimits

0x7267,	// (0x0009116f) popup_vitu2_query_window_t4

0x7288,	// (0x00091190) popup_vitu2_query_window_t5_ParamLimits

0x7288,	// (0x00091190) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0009993e) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0009993e) popup_vitu2_query_window_t

0xd82d,	// (0x00097735) main_cset_text_pane

0x6ca3,	// (0x00090bab) aid_area_touch_slider_ParamLimits

0x6cbf,	// (0x00090bc7) cset_slider_pane_ParamLimits

0x6ce9,	// (0x00090bf1) main_cset_slider_pane_g1_ParamLimits

0x6cfe,	// (0x00090c06) main_cset_slider_pane_g2_ParamLimits

0xd84e,	// (0x00097756) main_cset_slider_pane_g3_ParamLimits

0xd84e,	// (0x00097756) main_cset_slider_pane_g3

0x6d13,	// (0x00090c1b) main_cset_slider_pane_g4_ParamLimits

0x6d13,	// (0x00090c1b) main_cset_slider_pane_g4

0x6d22,	// (0x00090c2a) main_cset_slider_pane_g5_ParamLimits

0x6d22,	// (0x00090c2a) main_cset_slider_pane_g5

0x6d2e,	// (0x00090c36) main_cset_slider_pane_g6_ParamLimits

0x6d2e,	// (0x00090c36) main_cset_slider_pane_g6

0xf989,	// (0x00099891) main_cset_slider_pane_g_ParamLimits

0xd896,	// (0x0009779e) main_cset_slider_pane_t1_ParamLimits

0x6da2,	// (0x00090caa) main_cset_slider_pane_t2_ParamLimits

0x6dbc,	// (0x00090cc4) main_cset_slider_pane_t3_ParamLimits

0x6dd6,	// (0x00090cde) main_cset_slider_pane_t4_ParamLimits

0x6df0,	// (0x00090cf8) main_cset_slider_pane_t5_ParamLimits

0x6e0a,	// (0x00090d12) main_cset_slider_pane_t6_ParamLimits

0x6e1f,	// (0x00090d27) main_cset_slider_pane_t7_ParamLimits

0x6e49,	// (0x00090d51) main_cset_slider_pane_t8_ParamLimits

0x6e49,	// (0x00090d51) main_cset_slider_pane_t8

0x6e71,	// (0x00090d79) main_cset_slider_pane_t9_ParamLimits

0x6e71,	// (0x00090d79) main_cset_slider_pane_t9

0x6e99,	// (0x00090da1) main_cset_slider_pane_t10_ParamLimits

0x6e99,	// (0x00090da1) main_cset_slider_pane_t10

0x6ec1,	// (0x00090dc9) main_cset_slider_pane_t11_ParamLimits

0x6ec1,	// (0x00090dc9) main_cset_slider_pane_t11

0x6ee9,	// (0x00090df1) main_cset_slider_pane_t12_ParamLimits

0x6ee9,	// (0x00090df1) main_cset_slider_pane_t12

0x6f06,	// (0x00090e0e) main_cset_slider_pane_t13_ParamLimits

0x6f06,	// (0x00090e0e) main_cset_slider_pane_t13

0xf9ae,	// (0x000998b6) main_cset_slider_pane_t_ParamLimits

0xa0f5,	// (0x00093ffd) bg_popup_sub_pane_cp011

0xd9c0,	// (0x000978c8) main_cset_text_pane_g1

0xd9c8,	// (0x000978d0) main_cset_text_pane_t1

0xd9d6,	// (0x000978de) main_cset_text_pane_t2

0xd9e4,	// (0x000978ec) main_cset_text_pane_t3

0xd9f2,	// (0x000978fa) main_cset_text_pane_t4

0xda00,	// (0x00097908) main_cset_text_pane_t5

0xda0e,	// (0x00097916) main_cset_text_pane_t6

0xda1c,	// (0x00097924) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0009994d) main_cset_text_pane_t

0xa0f5,	// (0x00093ffd) main_cam4_burst_pane

0xa0f5,	// (0x00093ffd) main_cam5_pane

0x6be2,	// (0x00090aea) bg_button_pane_cp019

0x6beb,	// (0x00090af3) bg_button_pane_cp020

0xd85a,	// (0x00097762) main_cset_slider_pane_g7_ParamLimits

0xd85a,	// (0x00097762) main_cset_slider_pane_g7

0xd866,	// (0x0009776e) main_cset_slider_pane_g8_ParamLimits

0xd866,	// (0x0009776e) main_cset_slider_pane_g8

0x6d42,	// (0x00090c4a) main_cset_slider_pane_g9_ParamLimits

0x6d42,	// (0x00090c4a) main_cset_slider_pane_g9

0x6d4e,	// (0x00090c56) main_cset_slider_pane_g10_ParamLimits

0x6d4e,	// (0x00090c56) main_cset_slider_pane_g10

0x6d5a,	// (0x00090c62) main_cset_slider_pane_g11_ParamLimits

0x6d5a,	// (0x00090c62) main_cset_slider_pane_g11

0x6d66,	// (0x00090c6e) main_cset_slider_pane_g12_ParamLimits

0x6d66,	// (0x00090c6e) main_cset_slider_pane_g12

0x6d72,	// (0x00090c7a) main_cset_slider_pane_g13_ParamLimits

0x6d72,	// (0x00090c7a) main_cset_slider_pane_g13

0x6d7e,	// (0x00090c86) main_cset_slider_pane_g14_ParamLimits

0x6d7e,	// (0x00090c86) main_cset_slider_pane_g14

0x6d8a,	// (0x00090c92) main_cset_slider_pane_g15_ParamLimits

0x6d8a,	// (0x00090c92) main_cset_slider_pane_g15

0xd8c4,	// (0x000977cc) main_cset_slider_pane_t14_ParamLimits

0xd8c4,	// (0x000977cc) main_cset_slider_pane_t14

0xd8fd,	// (0x00097805) main_cset_slider_pane_t15_ParamLimits

0xd8fd,	// (0x00097805) main_cset_slider_pane_t15

0x72a9,	// (0x000911b1) aid_cam4_burst_size_cell_ParamLimits

0x72a9,	// (0x000911b1) aid_cam4_burst_size_cell

0x72c9,	// (0x000911d1) grid_cam4_burst_pane_ParamLimits

0x72c9,	// (0x000911d1) grid_cam4_burst_pane

0x7301,	// (0x00091209) linegrid_cam4_burst_pane_ParamLimits

0x7301,	// (0x00091209) linegrid_cam4_burst_pane

0xda2a,	// (0x00097932) scroll_pane_cp30_ParamLimits

0xda2a,	// (0x00097932) scroll_pane_cp30

0x7325,	// (0x0009122d) cell_cam4_burst_pane_ParamLimits

0x7325,	// (0x0009122d) cell_cam4_burst_pane

0xda36,	// (0x0009793e) linegrid_cam4_burst_pane_g1_ParamLimits

0xda36,	// (0x0009793e) linegrid_cam4_burst_pane_g1

0x7372,	// (0x0009127a) linegrid_cam4_burst_pane_g2_ParamLimits

0x7372,	// (0x0009127a) linegrid_cam4_burst_pane_g2

0xda43,	// (0x0009794b) linegrid_cam4_burst_pane_g3_ParamLimits

0xda43,	// (0x0009794b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0009995c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0009995c) linegrid_cam4_burst_pane_g

0x7383,	// (0x0009128b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7383,	// (0x0009128b) linegrid_cam4_burst_pane_g3_copy1

0xda50,	// (0x00097958) linegrid_cam4_burst_pane_g4_ParamLimits

0xda50,	// (0x00097958) linegrid_cam4_burst_pane_g4

0x739d,	// (0x000912a5) linegrid_cam4_burst_pane_g5_ParamLimits

0x739d,	// (0x000912a5) linegrid_cam4_burst_pane_g5

0x73ae,	// (0x000912b6) linegrid_cam4_burst_pane_g6_ParamLimits

0x73ae,	// (0x000912b6) linegrid_cam4_burst_pane_g6

0xda5d,	// (0x00097965) linegrid_cam4_burst_pane_g7_ParamLimits

0xda5d,	// (0x00097965) linegrid_cam4_burst_pane_g7

0x73c5,	// (0x000912cd) cell_cam4_burst_pane_g1

0xda76,	// (0x0009797e) main_cam5_pane_t1_ParamLimits

0xda76,	// (0x0009797e) main_cam5_pane_t1

0xda88,	// (0x00097990) main_cam5_pane_t2_ParamLimits

0xda88,	// (0x00097990) main_cam5_pane_t2

0xda9a,	// (0x000979a2) main_cam5_pane_t3_ParamLimits

0xda9a,	// (0x000979a2) main_cam5_pane_t3

0xdaac,	// (0x000979b4) main_cam5_pane_t4_ParamLimits

0xdaac,	// (0x000979b4) main_cam5_pane_t4

0xdac4,	// (0x000979cc) main_cam5_pane_t5_ParamLimits

0xdac4,	// (0x000979cc) main_cam5_pane_t5

0xdad8,	// (0x000979e0) main_cam5_pane_t6_ParamLimits

0xdad8,	// (0x000979e0) main_cam5_pane_t6

0xdaec,	// (0x000979f4) main_cam5_pane_t7_ParamLimits

0xdaec,	// (0x000979f4) main_cam5_pane_t7

0xdafe,	// (0x00097a06) main_cam5_pane_t8_ParamLimits

0xdafe,	// (0x00097a06) main_cam5_pane_t8

0xdb1a,	// (0x00097a22) main_cam5_pane_t9_ParamLimits

0xdb1a,	// (0x00097a22) main_cam5_pane_t9

0xdb2c,	// (0x00097a34) main_cam5_pane_t10_ParamLimits

0xdb2c,	// (0x00097a34) main_cam5_pane_t10

0xdb3e,	// (0x00097a46) main_cam5_pane_t11_ParamLimits

0xdb3e,	// (0x00097a46) main_cam5_pane_t11

0xdb50,	// (0x00097a58) main_cam5_pane_t12_ParamLimits

0xdb50,	// (0x00097a58) main_cam5_pane_t12

0xdb65,	// (0x00097a6d) main_cam5_pane_t13_ParamLimits

0xdb65,	// (0x00097a6d) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x00099968) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x00099968) main_cam5_pane_t

0x13dc,	// (0x0008b2e4) popup_scut_keymap_window_ParamLimits

0x13dc,	// (0x0008b2e4) popup_scut_keymap_window

0x73d8,	// (0x000912e0) aid_size_cell_brow_shortcut

0xaa15,	// (0x0009491d) bg_popup_window_pane_cp010

0x73e4,	// (0x000912ec) grid_scut_pane

0x73f0,	// (0x000912f8) cell_scut_pane_ParamLimits

0x73f0,	// (0x000912f8) cell_scut_pane

0x7407,	// (0x0009130f) cell_scut_pane_g1

0xdb82,	// (0x00097a8a) cell_scut_pane_t1

0xdb91,	// (0x00097a99) cell_scut_pane_t2

0x7410,	// (0x00091318) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x00099983) cell_scut_pane_t

0x52b5,	// (0x0008f1bd) main_mup3_pane_g8_ParamLimits

0x52b5,	// (0x0008f1bd) main_mup3_pane_g8

0x6746,	// (0x0009064e) area_vitu2_query_pane_ParamLimits

0x6746,	// (0x0009064e) area_vitu2_query_pane

0x07b2,	// (0x0008a6ba) input_focus_pane_cp08

0xdba0,	// (0x00097aa8) area_vitu2_query_pane_g1

0x08b7,	// (0x0008a7bf) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0009998a) area_vitu2_query_pane_g

0x741e,	// (0x00091326) area_vitu2_query_pane_t1_ParamLimits

0x741e,	// (0x00091326) area_vitu2_query_pane_t1

0x7432,	// (0x0009133a) area_vitu2_query_pane_t2_ParamLimits

0x7432,	// (0x0009133a) area_vitu2_query_pane_t2

0x08c8,	// (0x0008a7d0) area_vitu2_query_pane_t3_ParamLimits

0x08c8,	// (0x0008a7d0) area_vitu2_query_pane_t3

0x7446,	// (0x0009134e) area_vitu2_query_pane_t4_ParamLimits

0x7446,	// (0x0009134e) area_vitu2_query_pane_t4

0x746e,	// (0x00091376) area_vitu2_query_pane_t5_ParamLimits

0x746e,	// (0x00091376) area_vitu2_query_pane_t5

0x7496,	// (0x0009139e) area_vitu2_query_pane_t6_ParamLimits

0x7496,	// (0x0009139e) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0009998f) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0009998f) area_vitu2_query_pane_t

0x74e2,	// (0x000913ea) bg_button_pane_cp018

0x74f0,	// (0x000913f8) bg_button_pane_cp021

0x08f0,	// (0x0008a7f8) bg_button_pane_cp022

0x0901,	// (0x0008a809) input_focus_pane_cp09

0xb2e3,	// (0x000951eb) aid_size_touch_mv_arrow_left

0xb30e,	// (0x00095216) aid_size_touch_mv_arrow_right

0xd872,	// (0x0009777a) main_cset_slider_pane_g16_ParamLimits

0xd872,	// (0x0009777a) main_cset_slider_pane_g16

0xd87e,	// (0x00097786) main_cset_slider_pane_g17_ParamLimits

0xd87e,	// (0x00097786) main_cset_slider_pane_g17

0x73c5,	// (0x000912cd) cell_cam4_burst_pane_g1_ParamLimits

0xa0f5,	// (0x00093ffd) compa_mode_pane

0x6f7c,	// (0x00090e84) popup_vtel_slider_window_g3_ParamLimits

0x6f7c,	// (0x00090e84) popup_vtel_slider_window_g3

0x6f93,	// (0x00090e9b) popup_vtel_slider_window_g4_ParamLimits

0x6f93,	// (0x00090e9b) popup_vtel_slider_window_g4

0x6faa,	// (0x00090eb2) popup_vtel_slider_window_t1_ParamLimits

0x6faa,	// (0x00090eb2) popup_vtel_slider_window_t1

0xa0f5,	// (0x00093ffd) main_cl_pane

0x98b2,	// (0x000937ba) popup_imed_adjust2_window_ParamLimits

0xc8ed,	// (0x000967f5) bg_tb_trans_pane_cp05_ParamLimits

0xd20f,	// (0x00097117) popup_imed_adjust2_window_g1_ParamLimits

0xd21e,	// (0x00097126) popup_imed_adjust2_window_g2_ParamLimits

0xd21e,	// (0x00097126) popup_imed_adjust2_window_g2

0xd22a,	// (0x00097132) popup_imed_adjust2_window_g3_ParamLimits

0xd22a,	// (0x00097132) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x000996fa) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x000996fa) popup_imed_adjust2_window_g

0xd236,	// (0x0009713e) popup_imed_adjust2_window_t1_ParamLimits

0xd24e,	// (0x00097156) slider_imed_adjust_pane_ParamLimits

0xd262,	// (0x0009716a) slider_imed_adjust_pane_g1_ParamLimits

0xd272,	// (0x0009717a) slider_imed_adjust_pane_g2_ParamLimits

0xd282,	// (0x0009718a) slider_imed_adjust_pane_g3_ParamLimits

0xd293,	// (0x0009719b) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x00099701) slider_imed_adjust_pane_g_ParamLimits

0x64cf,	// (0x000903d7) aid_touch_area_cam4_ParamLimits

0x64cf,	// (0x000903d7) aid_touch_area_cam4

0x9ca8,	// (0x00093bb0) battery_pane_cp01

0x659e,	// (0x000904a6) main_camera4_pane_g6_ParamLimits

0x659e,	// (0x000904a6) main_camera4_pane_g6

0x65c8,	// (0x000904d0) main_camera4_pane_t2_ParamLimits

0x65c8,	// (0x000904d0) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x00099804) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x00099804) main_camera4_pane_t

0x65fd,	// (0x00090505) aid_touch_area_vid4_ParamLimits

0x65fd,	// (0x00090505) aid_touch_area_vid4

0x6651,	// (0x00090559) main_video4_pane_g5_ParamLimits

0x6651,	// (0x00090559) main_video4_pane_g5

0x6676,	// (0x0009057e) vid4_progress_pane_ParamLimits

0x6676,	// (0x0009057e) vid4_progress_pane

0xd88a,	// (0x00097792) main_cset_slider_pane_g18_ParamLimits

0xd88a,	// (0x00097792) main_cset_slider_pane_g18

0xda6a,	// (0x00097972) cell_cam4_burst_pane_g2_ParamLimits

0xda6a,	// (0x00097972) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x00099963) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00099963) cell_cam4_burst_pane_g

0xa83e,	// (0x00094746) bg_cl_pane_ParamLimits

0xa83e,	// (0x00094746) bg_cl_pane

0x74fc,	// (0x00091404) cl_header_pane_ParamLimits

0x74fc,	// (0x00091404) cl_header_pane

0x7510,	// (0x00091418) cl_listscroll_pane_ParamLimits

0x7510,	// (0x00091418) cl_listscroll_pane

0xdbac,	// (0x00097ab4) bg_cl_pane_g1

0xdbb4,	// (0x00097abc) bg_cl_pane_g2

0xdbbc,	// (0x00097ac4) bg_cl_pane_g3

0xdbc4,	// (0x00097acc) bg_cl_pane_g4

0xdbcc,	// (0x00097ad4) bg_cl_pane_g5

0xdbd4,	// (0x00097adc) bg_cl_pane_g6

0xdbdc,	// (0x00097ae4) bg_cl_pane_g7

0xdbe4,	// (0x00097aec) bg_cl_pane_g8

0xdbec,	// (0x00097af4) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0009999e) bg_cl_pane_g

0x7520,	// (0x00091428) aid_height_cl_leading_ParamLimits

0x7520,	// (0x00091428) aid_height_cl_leading

0x752c,	// (0x00091434) aid_height_cl_text_ParamLimits

0x752c,	// (0x00091434) aid_height_cl_text

0xab1c,	// (0x00094a24) bg_cl_header_pane_ParamLimits

0xab1c,	// (0x00094a24) bg_cl_header_pane

0x754b,	// (0x00091453) cl_header_pane_g1_ParamLimits

0x754b,	// (0x00091453) cl_header_pane_g1

0x7561,	// (0x00091469) cl_header_pane_t1_ParamLimits

0x7561,	// (0x00091469) cl_header_pane_t1

0xdbf4,	// (0x00097afc) cl_list_pane

0xd845,	// (0x0009774d) hc_scroll_pane_cp01

0xac9a,	// (0x00094ba2) bg_cl_header_pane_g1

0xd72b,	// (0x00097633) bg_cl_header_pane_g2

0xacba,	// (0x00094bc2) bg_cl_header_pane_g3

0xd73b,	// (0x00097643) bg_cl_header_pane_g4

0xd733,	// (0x0009763b) bg_cl_header_pane_g5

0xd979,	// (0x00097881) bg_cl_header_pane_g6

0xd753,	// (0x0009765b) bg_cl_header_pane_g7

0xd75b,	// (0x00097663) bg_cl_header_pane_g8

0xd74b,	// (0x00097653) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x000999b1) bg_cl_header_pane_g

0x757a,	// (0x00091482) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x757a,	// (0x00091482) hc_cl_list_double_graphic_heading_pane

0x758b,	// (0x00091493) hc_cl_list_single_graphic_pane_ParamLimits

0x758b,	// (0x00091493) hc_cl_list_single_graphic_pane

0x75a4,	// (0x000914ac) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x75a4,	// (0x000914ac) hc_cl_list_single_graphic_pane_g1

0x75b0,	// (0x000914b8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x75b0,	// (0x000914b8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x000999c4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x000999c4) hc_cl_list_single_graphic_pane_g

0x75c4,	// (0x000914cc) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x75c4,	// (0x000914cc) hc_cl_list_single_graphic_pane_t1

0x75a4,	// (0x000914ac) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x75a4,	// (0x000914ac) hc_cl_list_double_graphic_heading_pane_g1

0x75d9,	// (0x000914e1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x75d9,	// (0x000914e1) hc_cl_list_double_graphic_heading_pane_g2

0x75ed,	// (0x000914f5) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75ed,	// (0x000914f5) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x000999c9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x000999c9) hc_cl_list_double_graphic_heading_pane_g

0x7601,	// (0x00091509) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7601,	// (0x00091509) hc_cl_list_double_graphic_heading_pane_t1

0x7616,	// (0x0009151e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7616,	// (0x0009151e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x000999d0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x000999d0) hc_cl_list_double_graphic_heading_pane_t

0x9e01,	// (0x00093d09) vid4_progress_pane_g1

0x9e11,	// (0x00093d19) vid4_progress_pane_g2

0x762b,	// (0x00091533) vid4_progress_pane_g3

0x9e21,	// (0x00093d29) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x000999d5) vid4_progress_pane_g

0x763d,	// (0x00091545) vid4_progress_pane_t1

0x9e39,	// (0x00093d41) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x000999e0) vid4_progress_pane_t

0x7653,	// (0x0009155b) wait_bar_pane_cp07

0xcaf4,	// (0x000969fc) blid_firmament_pane_ParamLimits

0xcb37,	// (0x00096a3f) popup_blid_sat_info2_window_g1

0xcb5b,	// (0x00096a63) popup_blid_sat_info2_window_t3

0xcb69,	// (0x00096a71) popup_blid_sat_info2_window_t4

0xcb77,	// (0x00096a7f) popup_blid_sat_info2_window_t5

0xcb85,	// (0x00096a8d) popup_blid_sat_info2_window_t6

0xcb95,	// (0x00096a9d) popup_blid_sat_info2_window_t7

0xcba3,	// (0x00096aab) popup_blid_sat_info2_window_t8

0xcbb1,	// (0x00096ab9) popup_blid_sat_info2_window_t9

0xcbbf,	// (0x00096ac7) popup_blid_sat_info2_window_t10

0xcc81,	// (0x00096b89) aid_firma_cardinal_ParamLimits

0xcc95,	// (0x00096b9d) blid_firmament_pane_t1_ParamLimits

0xccac,	// (0x00096bb4) blid_firmament_pane_t2_ParamLimits

0xccc3,	// (0x00096bcb) blid_firmament_pane_t3_ParamLimits

0xccda,	// (0x00096be2) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x000995ee) blid_firmament_pane_t_ParamLimits

0xccf1,	// (0x00096bf9) blid_sat_info_pane_ParamLimits

0xab1c,	// (0x00094a24) main_cam_set_pane_ParamLimits

0x5b78,	// (0x0008fa80) aid_size_cell_colour_35_ParamLimits

0x5b98,	// (0x0008faa0) aid_size_cell_colour_112_ParamLimits

0x5bb8,	// (0x0008fac0) aid_size_cell_effect_ParamLimits

0xc8ed,	// (0x000967f5) bg_tb_trans_pane_cp02_ParamLimits

0xaf02,	// (0x00094e0a) heading_imed_pane_ParamLimits

0x5bd8,	// (0x0008fae0) listscroll_imed_pane_ParamLimits

0xbed3,	// (0x00095ddb) popup_call2_audio_first_window_g5_ParamLimits

0xbed3,	// (0x00095ddb) popup_call2_audio_first_window_g5

0x6176,	// (0x0009007e) aid_size_touch_image3_arrow_left_ParamLimits

0x6176,	// (0x0009007e) aid_size_touch_image3_arrow_left

0x61a2,	// (0x000900aa) aid_size_touch_image3_arrow_right_ParamLimits

0x61a2,	// (0x000900aa) aid_size_touch_image3_arrow_right

0x9e4e,	// (0x00093d56) vid4_progress_pane_t3

0x5eed,	// (0x0008fdf5) main_hwr_training_symbol_option_pane_ParamLimits

0x5eed,	// (0x0008fdf5) main_hwr_training_symbol_option_pane

0xd4fc,	// (0x00097404) popup_hwr_training_preview_window_ParamLimits

0xd4fc,	// (0x00097404) popup_hwr_training_preview_window

0x5f0d,	// (0x0008fe15) hwr_training_navi_pane_g5_ParamLimits

0x5f0d,	// (0x0008fe15) hwr_training_navi_pane_g5

0xd719,	// (0x00097621) popup_char_count_window

0xab1c,	// (0x00094a24) bg_popup_sub_pane_cp20_ParamLimits

0x70b8,	// (0x00090fc0) list_vitu2_match_list_pane_ParamLimits

0x70c7,	// (0x00090fcf) vitu2_page_scroll_pane_ParamLimits

0x70c7,	// (0x00090fcf) vitu2_page_scroll_pane

0xdbfd,	// (0x00097b05) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbfd,	// (0x00097b05) list_single_hwr_training_symbol_option_pane

0xdc10,	// (0x00097b18) list_single_hwr_training_symbol_option_pane_g1

0xdc18,	// (0x00097b20) list_single_hwr_training_symbol_option_pane_t1

0xdc26,	// (0x00097b2e) bg_button_pane_cp023

0xdc2f,	// (0x00097b37) bg_button_pane_cp024

0x7690,	// (0x00091598) vitu2_page_scroll_pane_g1

0x7698,	// (0x000915a0) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x000999e7) vitu2_page_scroll_pane_g

0x76a0,	// (0x000915a8) vitu2_page_scroll_pane_t1

0xcd2a,	// (0x00096c32) popup_char_count_window_g1

0xdc62,	// (0x00097b6a) popup_char_count_window_g2

0xdc6b,	// (0x00097b73) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x000999ec) popup_char_count_window_g

0xdc74,	// (0x00097b7c) popup_char_count_window_t1

0xa0f5,	// (0x00093ffd) main_vded2_pane

0xd1fb,	// (0x00097103) aid_size_cell_imed_line

0xd205,	// (0x0009710d) grid_imed_line_width_pane

0x9d58,	// (0x00093c60) vid4_indicators_pane_g4

0xdc82,	// (0x00097b8a) cell_imed_line_width_pane_ParamLimits

0xdc82,	// (0x00097b8a) cell_imed_line_width_pane

0xdc96,	// (0x00097b9e) cell_imed_line_width_pane_g1

0xdc9f,	// (0x00097ba7) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x000999f3) cell_imed_line_width_pane_g

0x76af,	// (0x000915b7) main_vded2_pane_g1_ParamLimits

0x76af,	// (0x000915b7) main_vded2_pane_g1

0x76c5,	// (0x000915cd) main_vded2_pane_g2_ParamLimits

0x76c5,	// (0x000915cd) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x000999f8) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x000999f8) main_vded2_pane_g

0x76d7,	// (0x000915df) vded2_slider_pane_ParamLimits

0x76d7,	// (0x000915df) vded2_slider_pane

0x76e7,	// (0x000915ef) aid_size_touch_vded2_end

0x76f1,	// (0x000915f9) aid_size_touch_vded2_playhead

0xdca7,	// (0x00097baf) aid_size_touch_vded2_start

0xdcaf,	// (0x00097bb7) vded2_slider_bg_pane

0xdcb8,	// (0x00097bc0) vded2_slider_pane_g1

0xdcc1,	// (0x00097bc9) vded2_slider_pane_g2

0x76fb,	// (0x00091603) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x000999fd) vded2_slider_pane_g

0xdcc9,	// (0x00097bd1) vded2_slider_bg_pane_g1

0xdcd2,	// (0x00097bda) vded2_slider_bg_pane_g2

0xdcdb,	// (0x00097be3) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x00099a04) vded2_slider_bg_pane_g

0x38c0,	// (0x0008d7c8) aid_postcard_touch_down_pane_ParamLimits

0x38c0,	// (0x0008d7c8) aid_postcard_touch_down_pane

0x38d6,	// (0x0008d7de) aid_postcard_touch_up_pane_ParamLimits

0x38d6,	// (0x0008d7de) aid_postcard_touch_up_pane

0xa0f5,	// (0x00093ffd) main_blid2_pane

0x9898,	// (0x000937a0) popup_blid2_search_window

0xa0f5,	// (0x00093ffd) blid2_gps_pane

0xa0f5,	// (0x00093ffd) blid2_navig_pane

0xa0f5,	// (0x00093ffd) blid2_search_pane

0xa0f5,	// (0x00093ffd) blid2_tripm_pane

0x7706,	// (0x0009160e) blid2_search_pane_g1_ParamLimits

0x7706,	// (0x0009160e) blid2_search_pane_g1

0x771e,	// (0x00091626) blid2_search_pane_t1_ParamLimits

0x771e,	// (0x00091626) blid2_search_pane_t1

0x7730,	// (0x00091638) aid_size_cell_blid2_gps_ParamLimits

0x7730,	// (0x00091638) aid_size_cell_blid2_gps

0x7748,	// (0x00091650) blid2_gps_pane_g1_ParamLimits

0x7748,	// (0x00091650) blid2_gps_pane_g1

0x775c,	// (0x00091664) grid_blid2_satellite_pane_ParamLimits

0x775c,	// (0x00091664) grid_blid2_satellite_pane

0x7776,	// (0x0009167e) blid2_navig_pane_g1_ParamLimits

0x7776,	// (0x0009167e) blid2_navig_pane_g1

0x7782,	// (0x0009168a) blid2_navig_pane_t1_ParamLimits

0x7782,	// (0x0009168a) blid2_navig_pane_t1

0x779d,	// (0x000916a5) blid2_navig_pane_t2_ParamLimits

0x779d,	// (0x000916a5) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x00099a0b) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x00099a0b) blid2_navig_pane_t

0x77b8,	// (0x000916c0) blid2_navig_ring_pane_ParamLimits

0x77b8,	// (0x000916c0) blid2_navig_ring_pane

0x77d1,	// (0x000916d9) blid2_speed_pane_ParamLimits

0x77d1,	// (0x000916d9) blid2_speed_pane

0x77dd,	// (0x000916e5) blid2_tripm_pane_g1_ParamLimits

0x77dd,	// (0x000916e5) blid2_tripm_pane_g1

0x77f8,	// (0x00091700) blid2_tripm_pane_g2_ParamLimits

0x77f8,	// (0x00091700) blid2_tripm_pane_g2

0x780c,	// (0x00091714) blid2_tripm_pane_g3_ParamLimits

0x780c,	// (0x00091714) blid2_tripm_pane_g3

0x7820,	// (0x00091728) blid2_tripm_pane_g4_ParamLimits

0x7820,	// (0x00091728) blid2_tripm_pane_g4

0x7834,	// (0x0009173c) blid2_tripm_pane_g5_ParamLimits

0x7834,	// (0x0009173c) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x00099a10) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x00099a10) blid2_tripm_pane_g

0x785a,	// (0x00091762) blid2_tripm_pane_t1_ParamLimits

0x785a,	// (0x00091762) blid2_tripm_pane_t1

0x7875,	// (0x0009177d) blid2_tripm_pane_t2_ParamLimits

0x7875,	// (0x0009177d) blid2_tripm_pane_t2

0x788e,	// (0x00091796) blid2_tripm_pane_t3_ParamLimits

0x788e,	// (0x00091796) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x00099a1d) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x00099a1d) blid2_tripm_pane_t

0x78d5,	// (0x000917dd) cell_blid2_satellite_pane_ParamLimits

0x78d5,	// (0x000917dd) cell_blid2_satellite_pane

0x78f3,	// (0x000917fb) cell_blid2_satellite_pane_g1

0xdce4,	// (0x00097bec) cell_blid2_satellite_pane_t1

0xcd01,	// (0x00096c09) blid2_speed_pane_g1

0xdcf2,	// (0x00097bfa) blid2_speed_pane_t1

0xdd00,	// (0x00097c08) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x00099a26) blid2_speed_pane_t

0xcd01,	// (0x00096c09) blid2_navig_ring_pane_g1

0x78fc,	// (0x00091804) blid2_navig_ring_pane_g2

0x7904,	// (0x0009180c) blid2_navig_ring_pane_g3

0x790c,	// (0x00091814) blid2_navig_ring_pane_g4

0x7914,	// (0x0009181c) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x00099a2b) blid2_navig_ring_pane_g

0xa0f5,	// (0x00093ffd) bg_popup_window_pane_cp011

0xdd0e,	// (0x00097c16) popup_blid2_search_window_g1

0xdd16,	// (0x00097c1e) popup_blid2_search_window_t1

0xdd24,	// (0x00097c2c) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x00099a36) popup_blid2_search_window_t

0xaba9,	// (0x00094ab1) main_browser_pane_g1

0xa83e,	// (0x00094746) main_browser_pane_ParamLimits

0xab1c,	// (0x00094a24) bg_button_pane_cp011_ParamLimits

0x697b,	// (0x00090883) cell_vitu2_function_pane_g1_ParamLimits

0xc8ed,	// (0x000967f5) bg_popup_sub_pane_cp22_ParamLimits

0x07b2,	// (0x0008a6ba) input_focus_pane_cp08_ParamLimits

0x7256,	// (0x0009115e) popup_vitu2_query_button_pane_ParamLimits

0x7256,	// (0x0009115e) popup_vitu2_query_button_pane

0x07c9,	// (0x0008a6d1) popup_vitu2_query_input_button_pane

0xd9b4,	// (0x000978bc) popup_vitu2_query_window_g1_ParamLimits

0x07d3,	// (0x0008a6db) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x00099937) popup_vitu2_query_window_g_ParamLimits

0xa0f5,	// (0x00093ffd) bg_button_pane_cp026

0x791c,	// (0x00091824) popup_vitu2_query_input_button_pane_g1

0xa0f5,	// (0x00093ffd) bg_button_pane_cp025

0xdd32,	// (0x00097c3a) popup_vitu2_query_button_pane_t1

0x4f57,	// (0x0008ee5f) main_mp3_pane_t6

0x4f65,	// (0x0008ee6d) popup_slider_window_cp01

0x9cc4,	// (0x00093bcc) cam4_battery_pane

0x9d17,	// (0x00093c1f) cam4_battery_pane_cp02

0x9df9,	// (0x00093d01) cam4_battery_pane_cp01

0x9df9,	// (0x00093d01) cam4_battery_pane_cp03

0xcd01,	// (0x00096c09) cam4_battery_pane_g1

0xdd40,	// (0x00097c48) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x00099a3b) cam4_battery_pane_g

0xcbcd,	// (0x00096ad5) popup_blid_sat_info2_window_t11

0xb2e3,	// (0x000951eb) aid_size_touch_mv_arrow_left_ParamLimits

0xb30e,	// (0x00095216) aid_size_touch_mv_arrow_right_ParamLimits

0xb36c,	// (0x00095274) navi_pane_g1_ParamLimits

0xb378,	// (0x00095280) navi_pane_g2_ParamLimits

0xb3a6,	// (0x000952ae) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000992ed) navi_pane_g_ParamLimits

0x3341,	// (0x0008d249) navi_pane_mv_t1_ParamLimits

0x5be4,	// (0x0008faec) grid_imed_effect_pane_ParamLimits

0x2250,	// (0x0008c158) aid_placing_vt_slider_lsc

0xaaac,	// (0x000949b4) aid_placing_vt_slider_prt

0xab1c,	// (0x00094a24) bg_tb_trans_pane_cp01_ParamLimits

0xce6f,	// (0x00096d77) popup_image_details_window_g1_ParamLimits

0xce82,	// (0x00096d8a) popup_image_details_window_g2_ParamLimits

0xce97,	// (0x00096d9f) popup_image_details_window_g3_ParamLimits

0xce97,	// (0x00096d9f) popup_image_details_window_g3

0xf72b,	// (0x00099633) popup_image_details_window_g_ParamLimits

0xceab,	// (0x00096db3) popup_image_details_window_t1_ParamLimits

0xcebd,	// (0x00096dc5) popup_image_details_window_t2_ParamLimits

0xced6,	// (0x00096dde) popup_image_details_window_t3_ParamLimits

0xceea,	// (0x00096df2) popup_image_details_window_t4_ParamLimits

0xcf05,	// (0x00096e0d) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0009963a) popup_image_details_window_t_ParamLimits

0x7538,	// (0x00091440) cl_header_name_pane_ParamLimits

0x7538,	// (0x00091440) cl_header_name_pane

0x7924,	// (0x0009182c) cl_header_name_pane_t1_ParamLimits

0x7924,	// (0x0009182c) cl_header_name_pane_t1

0x7945,	// (0x0009184d) cl_header_name_pane_t2_ParamLimits

0x7945,	// (0x0009184d) cl_header_name_pane_t2

0x7987,	// (0x0009188f) cl_header_name_pane_t3_ParamLimits

0x7987,	// (0x0009188f) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x00099a40) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x00099a40) cl_header_name_pane_t

0xb435,	// (0x0009533d) navi_pane_mv_g2_ParamLimits

0xd6f3,	// (0x000975fb) field_vitu2_entry_pane_g1_ParamLimits

0xd6ff,	// (0x00097607) field_vitu2_entry_pane_g2_ParamLimits

0xd70b,	// (0x00097613) field_vitu2_entry_pane_g3_ParamLimits

0xd70b,	// (0x00097613) field_vitu2_entry_pane_g3

0xf92e,	// (0x00099836) field_vitu2_entry_pane_g_ParamLimits

0x9d8b,	// (0x00093c93) cell_vitu2_itu_pane_g1_ParamLimits

0x690f,	// (0x00090817) cell_vitu2_itu_pane_g2_ParamLimits

0x690f,	// (0x00090817) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x00099842) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x00099842) cell_vitu2_itu_pane_g

0xab1c,	// (0x00094a24) bg_vkb2_func_pane_cp05_ParamLimits

0xab1c,	// (0x00094a24) bg_vkb2_func_pane_cp05

0xab1c,	// (0x00094a24) bg_vkb2_func_pane_cp03

0xab1c,	// (0x00094a24) bg_vkb2_func_pane_cp04

0xab1c,	// (0x00094a24) bg_vkb2_func_pane_cp10_ParamLimits

0xab1c,	// (0x00094a24) bg_vkb2_func_pane_cp10

0x08f0,	// (0x0008a7f8) bg_vkb2_func_pane_cp08

0x74e2,	// (0x000913ea) bg_vkb2_func_pane_cp06

0x74f0,	// (0x000913f8) bg_vkb2_func_pane_cp07

0xdc38,	// (0x00097b40) bg_vkb2_func_pane_cp11_ParamLimits

0xdc38,	// (0x00097b40) bg_vkb2_func_pane_cp11

0xdc4d,	// (0x00097b55) bg_vkb2_func_pane_cp12_ParamLimits

0xdc4d,	// (0x00097b55) bg_vkb2_func_pane_cp12

0xa0f5,	// (0x00093ffd) bg_vkb2_func_pane_cp09

0xd72b,	// (0x00097633) bg_vkb2_func_pane_g1

0xacba,	// (0x00094bc2) bg_vkb2_func_pane_g2

0xd733,	// (0x0009763b) bg_vkb2_func_pane_g3

0xd73b,	// (0x00097643) bg_vkb2_func_pane_g4

0xd979,	// (0x00097881) bg_vkb2_func_pane_g5

0xd753,	// (0x0009765b) bg_vkb2_func_pane_g6

0xd75b,	// (0x00097663) bg_vkb2_func_pane_g7

0xd74b,	// (0x00097653) bg_vkb2_func_pane_g8

0xac9a,	// (0x00094ba2) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x00099a47) bg_vkb2_func_pane_g

0x7848,	// (0x00091750) blid2_tripm_pane_g6_ParamLimits

0x7848,	// (0x00091750) blid2_tripm_pane_g6

0xd5b4,	// (0x000974bc) mp4_progress_pane_g1

0x78c1,	// (0x000917c9) blid2_tripm_values_pane_ParamLimits

0x78c1,	// (0x000917c9) blid2_tripm_values_pane

0x79b8,	// (0x000918c0) blid2_tripm_values_pane_t1

0x79c6,	// (0x000918ce) blid2_tripm_values_pane_t2

0x79d4,	// (0x000918dc) blid2_tripm_values_pane_t3

0x79e2,	// (0x000918ea) blid2_tripm_values_pane_t4

0x79f0,	// (0x000918f8) blid2_tripm_values_pane_t5

0x79fe,	// (0x00091906) blid2_tripm_values_pane_t6

0x7a0c,	// (0x00091914) blid2_tripm_values_pane_t7

0x7a1a,	// (0x00091922) blid2_tripm_values_pane_t8

0x7a28,	// (0x00091930) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x00099a5a) blid2_tripm_values_pane_t

0x2292,	// (0x0008c19a) call_video_pane_t1_ParamLimits

0x22b0,	// (0x0008c1b8) call_video_pane_t2_ParamLimits

0xf26e,	// (0x00099176) call_video_pane_t_ParamLimits

0x05ff,	// (0x0008a507) msg_header_pane_g1_ParamLimits

0xb61d,	// (0x00095525) msg_header_pane_g2_ParamLimits

0xb61d,	// (0x00095525) msg_header_pane_g2

0x0001,

0xf488,	// (0x00099390) msg_header_pane_g_ParamLimits

0xf488,	// (0x00099390) msg_header_pane_g

0xa83e,	// (0x00094746) main_clock2_pane_ParamLimits

0x58dd,	// (0x0008f7e5) grid_clock2_toolbar_pane_ParamLimits

0x58dd,	// (0x0008f7e5) grid_clock2_toolbar_pane

0x58dd,	// (0x0008f7e5) listscroll_clock2_pane_ParamLimits

0x58dd,	// (0x0008f7e5) listscroll_clock2_pane

0x59d9,	// (0x0008f8e1) main_clock2_pane_t3_ParamLimits

0x59d9,	// (0x0008f8e1) main_clock2_pane_t3

0x59fd,	// (0x0008f905) main_clock2_pane_t4_ParamLimits

0x59fd,	// (0x0008f905) main_clock2_pane_t4

0xdd4a,	// (0x00097c52) cell_clock2_toolbar_pane

0xdd52,	// (0x00097c5a) cell_clock2_toolbar_pane_cp01

0xdd52,	// (0x00097c5a) cell_clock2_toolbar_pane_cp02

0xdd5a,	// (0x00097c62) cell_clock2_toolbar_pane_cp03

0xdd62,	// (0x00097c6a) list_clock2_pane

0xb268,	// (0x00095170) scroll_pane_cp10

0xdd6a,	// (0x00097c72) list_single_clock2_pane_ParamLimits

0xdd6a,	// (0x00097c72) list_single_clock2_pane

0xaa15,	// (0x0009491d) list_highlight_pane_cp08

0xdd77,	// (0x00097c7f) list_single_clock2_pane_t1

0xdd85,	// (0x00097c8d) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x00099a6d) list_single_clock2_pane_t

0xa0f5,	// (0x00093ffd) bg_button_pane_cp10

0xdd93,	// (0x00097c9b) cell_clock2_toolbar_pane_g1

0x384c,	// (0x0008d754) aid_main_viewer_pane_g1_ParamLimits

0x384c,	// (0x0008d754) aid_main_viewer_pane_g1

0x385a,	// (0x0008d762) aid_main_viewer_pane_g2_ParamLimits

0x385a,	// (0x0008d762) aid_main_viewer_pane_g2

0x3868,	// (0x0008d770) aid_main_viewer_pane_g3_ParamLimits

0x3868,	// (0x0008d770) aid_main_viewer_pane_g3

0x3877,	// (0x0008d77f) aid_main_viewer_pane_g4_ParamLimits

0x3877,	// (0x0008d77f) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000993a1) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000993a1) aid_main_viewer_pane_g

0x417f,	// (0x0008e087) main_calc_pane_ParamLimits

0x4193,	// (0x0008e09b) main_dialer2_pane_ParamLimits

0xa0f5,	// (0x00093ffd) main_cam6_pane

0xa0f5,	// (0x00093ffd) main_vid6_pane

0x58e9,	// (0x0008f7f1) listscroll_gen_pane_cp06_ParamLimits

0x58e9,	// (0x0008f7f1) listscroll_gen_pane_cp06

0x5a20,	// (0x0008f928) main_clock2_pane_t5_ParamLimits

0x5a20,	// (0x0008f928) main_clock2_pane_t5

0x5a7a,	// (0x0008f982) aid_call2_pane_cp10_ParamLimits

0x5a8c,	// (0x0008f994) aid_call_pane_cp10_ParamLimits

0xb2d7,	// (0x000951df) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2d7,	// (0x000951df) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5a9e,	// (0x0008f9a6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5a9e,	// (0x0008f9a6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2d7,	// (0x000951df) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x000996ef) popup_clock_analogue_window_cp10_g_ParamLimits

0x5ab0,	// (0x0008f9b8) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6123,	// (0x0009002b) cell_dialer2_keypad_pane_g2_ParamLimits

0x6123,	// (0x0009002b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x000997d5) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x000997d5) cell_dialer2_keypad_pane_g

0x613f,	// (0x00090047) cell_dialer2_keypad_pane_t1

0x6c95,	// (0x00090b9d) main_cset_text2_pane_ParamLimits

0x6c95,	// (0x00090b9d) main_cset_text2_pane

0xdba0,	// (0x00097aa8) area_vitu2_query_pane_g1_ParamLimits

0x08b7,	// (0x0008a7bf) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0009998a) area_vitu2_query_pane_g_ParamLimits

0x74be,	// (0x000913c6) area_vitu2_query_pane_t7_ParamLimits

0x74be,	// (0x000913c6) area_vitu2_query_pane_t7

0x74e2,	// (0x000913ea) bg_button_pane_cp018_ParamLimits

0x74f0,	// (0x000913f8) bg_button_pane_cp021_ParamLimits

0x08f0,	// (0x0008a7f8) bg_button_pane_cp022_ParamLimits

0x08f0,	// (0x0008a7f8) bg_vkb2_func_pane_cp08_ParamLimits

0x74e2,	// (0x000913ea) bg_vkb2_func_pane_cp06_ParamLimits

0x74f0,	// (0x000913f8) bg_vkb2_func_pane_cp07_ParamLimits

0x0901,	// (0x0008a809) input_focus_pane_cp09_ParamLimits

0x9e6c,	// (0x00093d74) cam6_autofocus_pane_ParamLimits

0x9e6c,	// (0x00093d74) cam6_autofocus_pane

0x7a36,	// (0x0009193e) cam6_image_uncrop_pane_ParamLimits

0x7a36,	// (0x0009193e) cam6_image_uncrop_pane

0x7a45,	// (0x0009194d) cam6_indi_pane_ParamLimits

0x7a45,	// (0x0009194d) cam6_indi_pane

0x7a5b,	// (0x00091963) cam6_mode_pane_ParamLimits

0x7a5b,	// (0x00091963) cam6_mode_pane

0x7a6d,	// (0x00091975) cam6_timer_pane_ParamLimits

0x7a6d,	// (0x00091975) cam6_timer_pane

0x7a7d,	// (0x00091985) cam6_zoom_pane_ParamLimits

0x7a7d,	// (0x00091985) cam6_zoom_pane

0x7a89,	// (0x00091991) cam6_mode_pane_g1_ParamLimits

0x7a89,	// (0x00091991) cam6_mode_pane_g1

0x7a99,	// (0x000919a1) cam6_mode_pane_g2_ParamLimits

0x7a99,	// (0x000919a1) cam6_mode_pane_g2

0x7aa9,	// (0x000919b1) cam6_mode_pane_g3_ParamLimits

0x7aa9,	// (0x000919b1) cam6_mode_pane_g3

0x7ab9,	// (0x000919c1) cam6_mode_pane_g4_ParamLimits

0x7ab9,	// (0x000919c1) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x00099a72) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x00099a72) cam6_mode_pane_g

0xdd9b,	// (0x00097ca3) bg_tb_trans_pane_cp08_ParamLimits

0xdd9b,	// (0x00097ca3) bg_tb_trans_pane_cp08

0xdda9,	// (0x00097cb1) cam6_battery_pane_ParamLimits

0xdda9,	// (0x00097cb1) cam6_battery_pane

0xddbf,	// (0x00097cc7) cam6_indi_pane_g1_ParamLimits

0xddbf,	// (0x00097cc7) cam6_indi_pane_g1

0xddd1,	// (0x00097cd9) cam6_indi_pane_g2_ParamLimits

0xddd1,	// (0x00097cd9) cam6_indi_pane_g2

0xdde3,	// (0x00097ceb) cam6_indi_pane_g3_ParamLimits

0xdde3,	// (0x00097ceb) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x00099a7b) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x00099a7b) cam6_indi_pane_g

0xddf5,	// (0x00097cfd) cam6_indi_pane_t1_ParamLimits

0xddf5,	// (0x00097cfd) cam6_indi_pane_t1

0x7ac9,	// (0x000919d1) cam6_autofocus_pane_g1

0x7ad1,	// (0x000919d9) cam6_autofocus_pane_g2

0x7ad9,	// (0x000919e1) cam6_autofocus_pane_g3

0x7ae1,	// (0x000919e9) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x00099a82) cam6_autofocus_pane_g

0xde1b,	// (0x00097d23) cam6_timer_pane_g1

0xde23,	// (0x00097d2b) cam6_timer_pane_t1

0xde31,	// (0x00097d39) cam6_zoom_cont_pane

0xde39,	// (0x00097d41) cam6_zoom_pane_g1

0xde41,	// (0x00097d49) cam6_zoom_pane_g2

0x7ae9,	// (0x000919f1) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x00099a8b) cam6_zoom_pane_g

0xcd01,	// (0x00096c09) cam6_battery_pane_g1

0xcd01,	// (0x00096c09) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x000995f7) cam6_battery_pane_g

0xde49,	// (0x00097d51) cam6_zoom_cont_pane_g1

0xde52,	// (0x00097d5a) cam6_zoom_cont_pane_g2

0xde5b,	// (0x00097d63) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x00099a92) cam6_zoom_cont_pane_g

0x7b06,	// (0x00091a0e) cam6_mode_pane_cp_ParamLimits

0x7b06,	// (0x00091a0e) cam6_mode_pane_cp

0x7a7d,	// (0x00091985) cam6_zoom_pane_cp_ParamLimits

0x7a7d,	// (0x00091985) cam6_zoom_pane_cp

0x7b18,	// (0x00091a20) vid6_image_uncrop_cif_pane_ParamLimits

0x7b18,	// (0x00091a20) vid6_image_uncrop_cif_pane

0x7b28,	// (0x00091a30) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b28,	// (0x00091a30) vid6_image_uncrop_nhd_pane

0x7a36,	// (0x0009193e) vid6_image_uncrop_vga_pane_ParamLimits

0x7a36,	// (0x0009193e) vid6_image_uncrop_vga_pane

0x7b37,	// (0x00091a3f) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b37,	// (0x00091a3f) vid6_image_uncrop_wvga_pane

0x7b46,	// (0x00091a4e) vid6_indi_pane_ParamLimits

0x7b46,	// (0x00091a4e) vid6_indi_pane

0xdd9b,	// (0x00097ca3) bg_tb_trans_pane_cp09_ParamLimits

0xdd9b,	// (0x00097ca3) bg_tb_trans_pane_cp09

0xde73,	// (0x00097d7b) cam6_battery_pane_cp_ParamLimits

0xde73,	// (0x00097d7b) cam6_battery_pane_cp

0xde7f,	// (0x00097d87) vid6_indi_pane_g1_ParamLimits

0xde7f,	// (0x00097d87) vid6_indi_pane_g1

0xde91,	// (0x00097d99) vid6_indi_pane_g2_ParamLimits

0xde91,	// (0x00097d99) vid6_indi_pane_g2

0xdeb1,	// (0x00097db9) vid6_indi_pane_g3_ParamLimits

0xdeb1,	// (0x00097db9) vid6_indi_pane_g3

0xdec6,	// (0x00097dce) vid6_indi_pane_g4_ParamLimits

0xdec6,	// (0x00097dce) vid6_indi_pane_g4

0xdedb,	// (0x00097de3) vid6_indi_pane_g5_ParamLimits

0xdedb,	// (0x00097de3) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x00099a99) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x00099a99) vid6_indi_pane_g

0xdef5,	// (0x00097dfd) vid6_indi_pane_t1_ParamLimits

0xdef5,	// (0x00097dfd) vid6_indi_pane_t1

0xdf0b,	// (0x00097e13) vid6_indi_pane_t2_ParamLimits

0xdf0b,	// (0x00097e13) vid6_indi_pane_t2

0xdf33,	// (0x00097e3b) vid6_indi_pane_t3_ParamLimits

0xdf33,	// (0x00097e3b) vid6_indi_pane_t3

0xdf5b,	// (0x00097e63) vid6_indi_pane_t4_ParamLimits

0xdf5b,	// (0x00097e63) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x00099aa4) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x00099aa4) vid6_indi_pane_t

0xdf7f,	// (0x00097e87) wait_bar_pane_cp08

0x7b5e,	// (0x00091a66) main_cset_text2_pane_t1_ParamLimits

0x7b5e,	// (0x00091a66) main_cset_text2_pane_t1

0x7af1,	// (0x000919f9) listscroll_gen_pane_cp06_t1_ParamLimits

0x7af1,	// (0x000919f9) listscroll_gen_pane_cp06_t1

0xa0f5,	// (0x00093ffd) main_cam6_set_pane

0xcf4f,	// (0x00096e57) bg_tb_trans_pane_cp06_ParamLimits

0x9ccc,	// (0x00093bd4) cam4_indicators_pane_g1_ParamLimits

0x9cdd,	// (0x00093be5) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x00099812) cam4_indicators_pane_g_ParamLimits

0x9cf5,	// (0x00093bfd) cam4_indicators_pane_t1_ParamLimits

0xab1c,	// (0x00094a24) bg_tb_trans_pane_cp07_ParamLimits

0x9d1f,	// (0x00093c27) vid4_indicators_pane_g1_ParamLimits

0x9d33,	// (0x00093c3b) vid4_indicators_pane_g2_ParamLimits

0x9d47,	// (0x00093c4f) vid4_indicators_pane_g3_ParamLimits

0x9d58,	// (0x00093c60) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x00099824) vid4_indicators_pane_g_ParamLimits

0x9d74,	// (0x00093c7c) vid4_indicators_pane_t1_ParamLimits

0x9e01,	// (0x00093d09) vid4_progress_pane_g1_ParamLimits

0x9e11,	// (0x00093d19) vid4_progress_pane_g2_ParamLimits

0x762b,	// (0x00091533) vid4_progress_pane_g3_ParamLimits

0x9e21,	// (0x00093d29) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x000999d5) vid4_progress_pane_g_ParamLimits

0x763d,	// (0x00091545) vid4_progress_pane_t1_ParamLimits

0x9e39,	// (0x00093d41) vid4_progress_pane_t2_ParamLimits

0x9e4e,	// (0x00093d56) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x000999e0) vid4_progress_pane_t_ParamLimits

0x7653,	// (0x0009155b) wait_bar_pane_cp07_ParamLimits

0x7b7c,	// (0x00091a84) main_cam6_set_pane_g2_ParamLimits

0x7b7c,	// (0x00091a84) main_cam6_set_pane_g2

0x7ba0,	// (0x00091aa8) main_cset6_listscroll_pane_ParamLimits

0x7ba0,	// (0x00091aa8) main_cset6_listscroll_pane

0x7bbc,	// (0x00091ac4) main_cset6_slider_pane_ParamLimits

0x7bbc,	// (0x00091ac4) main_cset6_slider_pane

0x7bd2,	// (0x00091ada) main_cset6_text2_pane_ParamLimits

0x7bd2,	// (0x00091ada) main_cset6_text2_pane

0xdf8e,	// (0x00097e96) main_cset6_text_pane

0xdf96,	// (0x00097e9e) main_cset_list_pane_copy1_ParamLimits

0xdf96,	// (0x00097e9e) main_cset_list_pane_copy1

0xdfa6,	// (0x00097eae) scroll_pane_cp028_copy1

0x7be0,	// (0x00091ae8) cset_list_set_pane_copy1

0x7bf2,	// (0x00091afa) aid_position_infowindow_above_copy1

0x7bfa,	// (0x00091b02) aid_position_infowindow_below_copy1

0x9e7a,	// (0x00093d82) cset_list_set_pane_g1_copy1

0x7c02,	// (0x00091b0a) cset_list_set_pane_g3_copy1_ParamLimits

0x7c02,	// (0x00091b0a) cset_list_set_pane_g3_copy1

0x7c11,	// (0x00091b19) cset_list_set_pane_t1_copy1_ParamLimits

0x7c11,	// (0x00091b19) cset_list_set_pane_t1_copy1

0xab1c,	// (0x00094a24) list_highlight_pane_cp021_copy1_ParamLimits

0xab1c,	// (0x00094a24) list_highlight_pane_cp021_copy1

0xdfaf,	// (0x00097eb7) cset6_slider_pane_ParamLimits

0xdfaf,	// (0x00097eb7) cset6_slider_pane

0xdfdb,	// (0x00097ee3) main_cset6_slider_pane_g1_ParamLimits

0xdfdb,	// (0x00097ee3) main_cset6_slider_pane_g1

0x7c26,	// (0x00091b2e) main_cset6_slider_pane_g2_ParamLimits

0x7c26,	// (0x00091b2e) main_cset6_slider_pane_g2

0xe003,	// (0x00097f0b) main_cset6_slider_pane_g3_ParamLimits

0xe003,	// (0x00097f0b) main_cset6_slider_pane_g3

0x7c4e,	// (0x00091b56) main_cset6_slider_pane_g4_ParamLimits

0x7c4e,	// (0x00091b56) main_cset6_slider_pane_g4

0xe00f,	// (0x00097f17) main_cset6_slider_pane_g5_ParamLimits

0xe00f,	// (0x00097f17) main_cset6_slider_pane_g5

0xd85a,	// (0x00097762) main_cset6_slider_pane_g7_ParamLimits

0xd85a,	// (0x00097762) main_cset6_slider_pane_g7

0xd866,	// (0x0009776e) main_cset6_slider_pane_g8_ParamLimits

0xd866,	// (0x0009776e) main_cset6_slider_pane_g8

0x6d42,	// (0x00090c4a) main_cset6_slider_pane_g9_ParamLimits

0x6d42,	// (0x00090c4a) main_cset6_slider_pane_g9

0x6d4e,	// (0x00090c56) main_cset6_slider_pane_g10_ParamLimits

0x6d4e,	// (0x00090c56) main_cset6_slider_pane_g10

0x6d5a,	// (0x00090c62) main_cset6_slider_pane_g11_ParamLimits

0x6d5a,	// (0x00090c62) main_cset6_slider_pane_g11

0x6d66,	// (0x00090c6e) main_cset6_slider_pane_g12_ParamLimits

0x6d66,	// (0x00090c6e) main_cset6_slider_pane_g12

0x6d72,	// (0x00090c7a) main_cset6_slider_pane_g13_ParamLimits

0x6d72,	// (0x00090c7a) main_cset6_slider_pane_g13

0x6d7e,	// (0x00090c86) main_cset6_slider_pane_g14_ParamLimits

0x6d7e,	// (0x00090c86) main_cset6_slider_pane_g14

0x7c5a,	// (0x00091b62) main_cset6_slider_pane_g15_ParamLimits

0x7c5a,	// (0x00091b62) main_cset6_slider_pane_g15

0xd872,	// (0x0009777a) main_cset6_slider_pane_g16_ParamLimits

0xd872,	// (0x0009777a) main_cset6_slider_pane_g16

0xd87e,	// (0x00097786) main_cset6_slider_pane_g17_ParamLimits

0xd87e,	// (0x00097786) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x00099aad) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x00099aad) main_cset6_slider_pane_g

0xe01b,	// (0x00097f23) main_cset6_slider_pane_t1_ParamLimits

0xe01b,	// (0x00097f23) main_cset6_slider_pane_t1

0x7c8a,	// (0x00091b92) main_cset6_slider_pane_t2_ParamLimits

0x7c8a,	// (0x00091b92) main_cset6_slider_pane_t2

0x7cb5,	// (0x00091bbd) main_cset6_slider_pane_t3_ParamLimits

0x7cb5,	// (0x00091bbd) main_cset6_slider_pane_t3

0x7ce0,	// (0x00091be8) main_cset6_slider_pane_t4_ParamLimits

0x7ce0,	// (0x00091be8) main_cset6_slider_pane_t4

0x7d0b,	// (0x00091c13) main_cset6_slider_pane_t5_ParamLimits

0x7d0b,	// (0x00091c13) main_cset6_slider_pane_t5

0xe05c,	// (0x00097f64) main_cset6_slider_pane_t7_ParamLimits

0xe05c,	// (0x00097f64) main_cset6_slider_pane_t7

0x7d36,	// (0x00091c3e) main_cset6_slider_pane_t8_ParamLimits

0x7d36,	// (0x00091c3e) main_cset6_slider_pane_t8

0x7d5a,	// (0x00091c62) main_cset6_slider_pane_t9_ParamLimits

0x7d5a,	// (0x00091c62) main_cset6_slider_pane_t9

0x7d7e,	// (0x00091c86) main_cset6_slider_pane_t10_ParamLimits

0x7d7e,	// (0x00091c86) main_cset6_slider_pane_t10

0x7da2,	// (0x00091caa) main_cset6_slider_pane_t11_ParamLimits

0x7da2,	// (0x00091caa) main_cset6_slider_pane_t11

0xe092,	// (0x00097f9a) main_cset6_slider_pane_t14_ParamLimits

0xe092,	// (0x00097f9a) main_cset6_slider_pane_t14

0xe0cb,	// (0x00097fd3) main_cset6_slider_pane_t15_ParamLimits

0xe0cb,	// (0x00097fd3) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x00099ad2) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x00099ad2) main_cset6_slider_pane_t

0xd4d1,	// (0x000973d9) cset_slider_pane_g1_copy1

0xd936,	// (0x0009783e) cset_slider_pane_g2_copy1

0xd93f,	// (0x00097847) cset_slider_pane_g3_copy1

0xa0f5,	// (0x00093ffd) bg_popup_sub_pane_cp011_copy1

0xe104,	// (0x0009800c) main_cset_text_pane_g1_copy1

0xd9c8,	// (0x000978d0) main_cset_text_pane_t1_copy1

0xd9d6,	// (0x000978de) main_cset_text_pane_t2_copy1

0xd9e4,	// (0x000978ec) main_cset_text_pane_t3_copy1

0xd9f2,	// (0x000978fa) main_cset_text_pane_t4_copy1

0xda00,	// (0x00097908) main_cset_text_pane_t5_copy1

0xe10c,	// (0x00098014) main_cset_text_pane_t6_copy1

0xe11a,	// (0x00098022) main_cset_text_pane_t7_copy1

0x7b5e,	// (0x00091a66) main_cset_text2_pane_t1_copy1

0xab1c,	// (0x00094a24) main_ncimui_pane

0x43d7,	// (0x0008e2df) popup_query_ncimui_window_ParamLimits

0x43d7,	// (0x0008e2df) popup_query_ncimui_window

0x99e7,	// (0x000938ef) field_cale_ev2_pane_g4_ParamLimits

0x99e7,	// (0x000938ef) field_cale_ev2_pane_g4

0x6002,	// (0x0008ff0a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6002,	// (0x0008ff0a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x000997b0) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x000997b0) cell_video_dialer_keypad_pane_g

0x601a,	// (0x0008ff22) cell_video_dialer_keypad_pane_t1

0xa0f5,	// (0x00093ffd) bg_popup_window_pane_cp012

0xb153,	// (0x0009505b) heading_pane_cp06

0xe146,	// (0x0009804e) ncim_query_content_pane

0xa0f5,	// (0x00093ffd) bg_popup_heading_pane_cp01

0xe14e,	// (0x00098056) ncim_heading_pane_t1

0xe15c,	// (0x00098064) ncim_indicator_popup_pane

0xe16e,	// (0x00098076) ncim_query_button_pane

0xe182,	// (0x0009808a) ncim_query_content_pane_t1

0xe194,	// (0x0009809c) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x00099b16) ncim_query_content_pane_t

0xe1ce,	// (0x000980d6) ncim_query_list_pane

0xe1e0,	// (0x000980e8) ncim_query_popup_pane

0xe15c,	// (0x00098064) ncim_indicator_popup_pane_ParamLimits

0x7f0a,	// (0x00091e12) ncim_query_content_pane_g1_ParamLimits

0x7f0a,	// (0x00091e12) ncim_query_content_pane_g1

0xe182,	// (0x0009808a) ncim_query_content_pane_t1_ParamLimits

0xe194,	// (0x0009809c) ncim_query_content_pane_t2_ParamLimits

0x7f16,	// (0x00091e1e) ncim_query_content_pane_t3_ParamLimits

0x7f16,	// (0x00091e1e) ncim_query_content_pane_t3

0x7f3e,	// (0x00091e46) ncim_query_content_pane_t4_ParamLimits

0x7f3e,	// (0x00091e46) ncim_query_content_pane_t4

0x7f66,	// (0x00091e6e) ncim_query_content_pane_t5_ParamLimits

0x7f66,	// (0x00091e6e) ncim_query_content_pane_t5

0xe1a6,	// (0x000980ae) ncim_query_content_pane_t6_ParamLimits

0xe1a6,	// (0x000980ae) ncim_query_content_pane_t6

0xfc0e,	// (0x00099b16) ncim_query_content_pane_t_ParamLimits

0xe1ce,	// (0x000980d6) ncim_query_list_pane_ParamLimits

0xe1e0,	// (0x000980e8) ncim_query_popup_pane_ParamLimits

0xe1f4,	// (0x000980fc) wait_bar_pane_cp04

0xa0f5,	// (0x00093ffd) input_focus_pane_cp011

0xe1fc,	// (0x00098104) ncim_query_popup_pane_t1

0xe20a,	// (0x00098112) ncim_list_query_list_pane_ParamLimits

0xe20a,	// (0x00098112) ncim_list_query_list_pane

0xa0f5,	// (0x00093ffd) bg_button_pane_cp027

0xe217,	// (0x0009811f) ncim_query_button_pane_g1

0xa0f5,	// (0x00093ffd) list_highlight_pane_cp012

0xe221,	// (0x00098129) ncim_list_query_list_pane_g1

0xe229,	// (0x00098131) ncim_list_query_list_pane_t1

0x9ce9,	// (0x00093bf1) cam4_indicators_pane_g3_ParamLimits

0x9ce9,	// (0x00093bf1) cam4_indicators_pane_g3

0x9d64,	// (0x00093c6c) vid4_indicators_pane_g5_ParamLimits

0x9d64,	// (0x00093c6c) vid4_indicators_pane_g5

0x9e2d,	// (0x00093d35) vid4_progress_pane_g5_ParamLimits

0x9e2d,	// (0x00093d35) vid4_progress_pane_g5

0x7df5,	// (0x00091cfd) main_ncimui_pane_g1

0x7e5e,	// (0x00091d66) ncimui_group_query_pane_ParamLimits

0x7e5e,	// (0x00091d66) ncimui_group_query_pane

0x7ea6,	// (0x00091dae) ncimui_list_pane_ParamLimits

0x7ea6,	// (0x00091dae) ncimui_list_pane

0x7ecd,	// (0x00091dd5) ncimui_text_pane_ParamLimits

0x7ecd,	// (0x00091dd5) ncimui_text_pane

0x7f8e,	// (0x00091e96) ncimui_text_pane_t1_ParamLimits

0x7f8e,	// (0x00091e96) ncimui_text_pane_t1

0xe237,	// (0x0009813f) ncimui_list_single_graphic_pane_ParamLimits

0xe237,	// (0x0009813f) ncimui_list_single_graphic_pane

0x7fac,	// (0x00091eb4) ncimui_query_pane_ParamLimits

0x7fac,	// (0x00091eb4) ncimui_query_pane

0xa0f5,	// (0x00093ffd) list_highlight_pane_cp013

0xe247,	// (0x0009814f) ncim_list_query_list_pane_t1_copy1

0xe255,	// (0x0009815d) ncim_list_single_graphic_pane_g1

0x7fbf,	// (0x00091ec7) ncim_query_button_pane_cp01

0x7fcb,	// (0x00091ed3) ncim_query_entry_pane_ParamLimits

0x7fcb,	// (0x00091ed3) ncim_query_entry_pane

0x7fde,	// (0x00091ee6) ncimui_query_pane_g1

0x7fea,	// (0x00091ef2) ncimui_query_pane_t1_ParamLimits

0x7fea,	// (0x00091ef2) ncimui_query_pane_t1

0xab1c,	// (0x00094a24) input_focus_pane_cp012

0xe25d,	// (0x00098165) ncim_query_entry_pane_t1

0xa83e,	// (0x00094746) main_im_pane_ParamLimits

0xab1c,	// (0x00094a24) main_mobtv_pane_ParamLimits

0xab1c,	// (0x00094a24) main_mobtv_pane

0x7c72,	// (0x00091b7a) main_cset6_slider_pane_g18_ParamLimits

0x7c72,	// (0x00091b7a) main_cset6_slider_pane_g18

0x7c7e,	// (0x00091b86) main_cset6_slider_pane_g19_ParamLimits

0x7c7e,	// (0x00091b86) main_cset6_slider_pane_g19

0xab0e,	// (0x00094a16) bg_main_mobtv_pane_ParamLimits

0xab0e,	// (0x00094a16) bg_main_mobtv_pane

0x8003,	// (0x00091f0b) main_mobtv_info_pane

0x800c,	// (0x00091f14) main_mobtv_loading_pane_ParamLimits

0x800c,	// (0x00091f14) main_mobtv_loading_pane

0xe26f,	// (0x00098177) main_mobtv_pg_channel_list_pane

0xe279,	// (0x00098181) main_mobtv_pg_hdr_pane

0x8019,	// (0x00091f21) main_mobtv_programe_curr_pane_ParamLimits

0x8019,	// (0x00091f21) main_mobtv_programe_curr_pane

0x8026,	// (0x00091f2e) main_mobtv_programe_next_pane_ParamLimits

0x8026,	// (0x00091f2e) main_mobtv_programe_next_pane

0xe282,	// (0x0009818a) popup_mobtv_noti_window

0xcd01,	// (0x00096c09) main_tv_pg_hdr_pane_g1

0xe28a,	// (0x00098192) main_tv_pg_hdr_pane_g2

0xe292,	// (0x0009819a) main_tv_pg_hdr_pane_g3

0xe29a,	// (0x000981a2) main_tv_pg_hdr_pane_g4

0xe2a2,	// (0x000981aa) main_tv_pg_hdr_pane_g5

0xe2ac,	// (0x000981b4) main_tv_pg_hdr_pane_g6

0xe2b6,	// (0x000981be) main_tv_pg_hdr_pane_g7

0xe2c0,	// (0x000981c8) main_tv_pg_hdr_pane_g8

0xe2ca,	// (0x000981d2) main_tv_pg_hdr_pane_g9

0xe2d4,	// (0x000981dc) main_tv_pg_hdr_pane_g10

0xe2de,	// (0x000981e6) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x00099b23) main_tv_pg_hdr_pane_g

0xe2e8,	// (0x000981f0) main_tv_pg_hdr_pane_t1

0xe2f6,	// (0x000981fe) main_tv_pg_hdr_pane_t2

0xe304,	// (0x0009820c) main_tv_pg_hdr_pane_t3

0xe314,	// (0x0009821c) main_tv_pg_hdr_pane_t4

0xe324,	// (0x0009822c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x00099b3a) main_tv_pg_hdr_pane_t

0xe334,	// (0x0009823c) single_mobtv_pg_channel_pane_ParamLimits

0xe334,	// (0x0009823c) single_mobtv_pg_channel_pane

0xe346,	// (0x0009824e) single_mobtv_pg_channel_table_pane

0xadbd,	// (0x00094cc5) single_mobtv_pg_channel_thumb_pane

0xe34f,	// (0x00098257) single_tv_pg_channel_pane_g1

0xe358,	// (0x00098260) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x00099b45) single_tv_pg_channel_pane_g

0xcf4f,	// (0x00096e57) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf4f,	// (0x00096e57) bg_single_mobtv_pg_channel_thumb_pane

0xe361,	// (0x00098269) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe361,	// (0x00098269) single_mobtv_pg_channel_thumb_pane_g1

0xe36f,	// (0x00098277) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe36f,	// (0x00098277) single_mobtv_pg_channel_thumb_pane_g2

0xe37b,	// (0x00098283) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe37b,	// (0x00098283) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x00099b4a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x00099b4a) single_mobtv_pg_channel_thumb_pane_g

0xe387,	// (0x0009828f) single_mobtv_pg_channel_thumb_pane_t1

0xe395,	// (0x0009829d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x00099b51) single_mobtv_pg_channel_thumb_pane_t

0xcd01,	// (0x00096c09) bg_single_mobtv_pg_channel_table_pane_g1

0xcd01,	// (0x00096c09) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x000995f7) bg_single_mobtv_pg_channel_table_pane_g

0xe3a3,	// (0x000982ab) single_mobtv_pg_channel_table_pane_t1

0xe3b1,	// (0x000982b9) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x00099b56) single_mobtv_pg_channel_table_pane_t

0x803b,	// (0x00091f43) main_mobtv_info_pane_g1_ParamLimits

0x803b,	// (0x00091f43) main_mobtv_info_pane_g1

0x8059,	// (0x00091f61) main_mobtv_info_pane_t1_ParamLimits

0x8059,	// (0x00091f61) main_mobtv_info_pane_t1

0x80d1,	// (0x00091fd9) main_mobtv_info_pane_t2_ParamLimits

0x80d1,	// (0x00091fd9) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x00099b60) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x00099b60) main_mobtv_info_pane_t

0x8160,	// (0x00092068) wait_bar_pane_cp05

0x8172,	// (0x0009207a) main_mobtv_loading_pane_g1_ParamLimits

0x8172,	// (0x0009207a) main_mobtv_loading_pane_g1

0x8185,	// (0x0009208d) main_mobtv_loading_pane_g2_ParamLimits

0x8185,	// (0x0009208d) main_mobtv_loading_pane_g2

0x8191,	// (0x00092099) main_mobtv_loading_pane_g3_ParamLimits

0x8191,	// (0x00092099) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x00099b67) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x00099b67) main_mobtv_loading_pane_g

0xe3bf,	// (0x000982c7) main_mobtv_loading_pane_t1_ParamLimits

0xe3bf,	// (0x000982c7) main_mobtv_loading_pane_t1

0xe3d7,	// (0x000982df) main_mobtv_loading_pane_t2_ParamLimits

0xe3d7,	// (0x000982df) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x00099b6e) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x00099b6e) main_mobtv_loading_pane_t

0x81a4,	// (0x000920ac) wait_bar_pane_cp06_ParamLimits

0x81a4,	// (0x000920ac) wait_bar_pane_cp06

0xe3fb,	// (0x00098303) main_mobtv_programe_curr_pane_t1

0xe409,	// (0x00098311) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x00099b73) main_mobtv_programe_curr_pane_t

0xe417,	// (0x0009831f) main_mobtv_programe_next_pane_t1

0xe425,	// (0x0009832d) main_mobtv_programe_next_pane_t2

0xe433,	// (0x0009833b) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x00099b78) main_mobtv_programe_next_pane_t

0xa0f5,	// (0x00093ffd) bg_popup_mobtv_noti_window_pane

0xe441,	// (0x00098349) popup_mobtv_noti_window_g1

0xe449,	// (0x00098351) popup_mobtv_noti_window_t1

0xe457,	// (0x0009835f) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x00099b7f) popup_mobtv_noti_window_t

0xcd01,	// (0x00096c09) bg_popup_mobtv_noti_window_pane_g1

0xa0f5,	// (0x00093ffd) sc_clock_pane

0xa0f5,	// (0x00093ffd) main_fs_bigclock_pane

0x78ab,	// (0x000917b3) blid2_tripm_pane_t4_ParamLimits

0x78ab,	// (0x000917b3) blid2_tripm_pane_t4

0x81b3,	// (0x000920bb) sc_clock_pane_g1_ParamLimits

0x81b3,	// (0x000920bb) sc_clock_pane_g1

0x81c5,	// (0x000920cd) sc_clock_pane_t1_ParamLimits

0x81c5,	// (0x000920cd) sc_clock_pane_t1

0x81e7,	// (0x000920ef) sc_clock_pane_t2_ParamLimits

0x81e7,	// (0x000920ef) sc_clock_pane_t2

0x81ff,	// (0x00092107) sc_clock_pane_t3_ParamLimits

0x81ff,	// (0x00092107) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x00099b84) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x00099b84) sc_clock_pane_t

0x8c7c,	// (0x00092b84) main_fs_bigclock_indicator_pane_ParamLimits

0x8c7c,	// (0x00092b84) main_fs_bigclock_indicator_pane

0x82a5,	// (0x000921ad) main_fs_bigclock_pane_g1_ParamLimits

0x82a5,	// (0x000921ad) main_fs_bigclock_pane_g1

0x8c88,	// (0x00092b90) main_fs_bigclock_pane_t1_ParamLimits

0x8c88,	// (0x00092b90) main_fs_bigclock_pane_t1

0x8c9a,	// (0x00092ba2) main_fs_bigclock_pane_t2_ParamLimits

0x8c9a,	// (0x00092ba2) main_fs_bigclock_pane_t2

0x8cae,	// (0x00092bb6) main_fs_bigclock_pane_t3_ParamLimits

0x8cae,	// (0x00092bb6) main_fs_bigclock_pane_t3

0x0002,

0xfe5b,	// (0x00099d63) main_fs_bigclock_pane_t_ParamLimits

0xfe5b,	// (0x00099d63) main_fs_bigclock_pane_t

0xecd0,	// (0x00098bd8) main_fs_bigclock_indicator_pane_g1

0xe176,	// (0x0009807e) ncim_query_content_pane_g2_ParamLimits

0xe176,	// (0x0009807e) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x00099b11) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x00099b11) ncim_query_content_pane_g

0x8218,	// (0x00092120) sc_clock_pane_t4_ParamLimits

0x8218,	// (0x00092120) sc_clock_pane_t4

0xab1c,	// (0x00094a24) main_radioblah_pane

0x9c5e,	// (0x00093b66) cell_call4_button_pane_t1_copy1_ParamLimits

0x9c5e,	// (0x00093b66) cell_call4_button_pane_t1_copy1

0x7e0d,	// (0x00091d15) main_ncimui_pane_t1_ParamLimits

0x7e0d,	// (0x00091d15) main_ncimui_pane_t1

0x7e27,	// (0x00091d2f) main_ncimui_pane_t2_ParamLimits

0x7e27,	// (0x00091d2f) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x00099b0a) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x00099b0a) main_ncimui_pane_t

0xe59d,	// (0x000984a5) main_radioblah_anim_pane_ParamLimits

0xe59d,	// (0x000984a5) main_radioblah_anim_pane

0xe5ae,	// (0x000984b6) main_radioblah_info_pane_ParamLimits

0xe5ae,	// (0x000984b6) main_radioblah_info_pane

0xe5c2,	// (0x000984ca) main_radioblah_pane_t1_ParamLimits

0xe5c2,	// (0x000984ca) main_radioblah_pane_t1

0xe5de,	// (0x000984e6) main_radioblah_pane_t2_ParamLimits

0xe5de,	// (0x000984e6) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x00099ba5) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x00099ba5) main_radioblah_pane_t

0x8304,	// (0x0009220c) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8304,	// (0x0009220c) main_radioblah_rocker_ctrl_pane

0xe626,	// (0x0009852e) main_radioblah_info_pane_t1_ParamLimits

0xe626,	// (0x0009852e) main_radioblah_info_pane_t1

0x835c,	// (0x00092264) main_radioblah_info_pane_t2_ParamLimits

0x835c,	// (0x00092264) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x00099bae) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x00099bae) main_radioblah_info_pane_t

0xcd01,	// (0x00096c09) main_radioblah_rocker_ctrl_pane_g1

0x840c,	// (0x00092314) main_radioblah_rocker_ctrl_pane_g2

0x8414,	// (0x0009231c) main_radioblah_rocker_ctrl_pane_g3

0x841c,	// (0x00092324) main_radioblah_rocker_ctrl_pane_g4

0x8424,	// (0x0009232c) main_radioblah_rocker_ctrl_pane_g5

0x842c,	// (0x00092334) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x00099bb7) main_radioblah_rocker_ctrl_pane_g

0x7b5e,	// (0x00091a66) main_cset_text2_pane_t1_copy1_ParamLimits

0x9cbc,	// (0x00093bc4) cam4_image_uncrop_qvga_pane

0x9d0f,	// (0x00093c17) vid4_image_uncrop_qcif_pane

0x9e6c,	// (0x00093d74) cam6_image_uncrop_qvga_pane_ParamLimits

0x9e6c,	// (0x00093d74) cam6_image_uncrop_qvga_pane

0xde63,	// (0x00097d6b) vid6_image_uncrop_qcif_pane_ParamLimits

0xde63,	// (0x00097d6b) vid6_image_uncrop_qcif_pane

0xa0f5,	// (0x00093ffd) bg_popup_preview_window_pane_cp03

0xe128,	// (0x00098030) list_cset_text2_pane

0xe130,	// (0x00098038) main_cset6_text2_pane_g1

0xe138,	// (0x00098040) main_cset6_text2_pane_t1

0xe660,	// (0x00098568) list_cset_text2_pane_t1_ParamLimits

0xe660,	// (0x00098568) list_cset_text2_pane_t1

0xab1c,	// (0x00094a24) main_radioblah_pane_ParamLimits

0x814c,	// (0x00092054) main_mobtv_info_pane_t3_ParamLimits

0x814c,	// (0x00092054) main_mobtv_info_pane_t3

0x82f2,	// (0x000921fa) main_radioblah_pane_g1

0x832c,	// (0x00092234) main_radioblah_info_pane_g1

0x83b1,	// (0x000922b9) main_radioblah_info_pane_t3_ParamLimits

0x83b1,	// (0x000922b9) main_radioblah_info_pane_t3

0x2f1b,	// (0x0008ce23) highlight_cell_cale_month_pane_ParamLimits

0x2f1b,	// (0x0008ce23) highlight_cell_cale_month_pane

0xa0f5,	// (0x00093ffd) main_phob_fisheye_pane

0xd02b,	// (0x00096f33) scroll_pane_cp0031_ParamLimits

0xd02b,	// (0x00096f33) scroll_pane_cp0031

0xdf7f,	// (0x00097e87) wait_bar_pane_cp08_ParamLimits

0x7be0,	// (0x00091ae8) cset_list_set_pane_copy1_ParamLimits

0xe67b,	// (0x00098583) highlight_cell_cale_month_pane_g1

0x8434,	// (0x0009233c) highlight_cell_cale_month_pane_t1

0xdbf4,	// (0x00097afc) list_gen_pane_cp01

0xd845,	// (0x0009774d) scroll_pane_01

0x8442,	// (0x0009234a) list_single_double_fisheye_pane

0x09e1,	// (0x0008a8e9) list_double_fisheye_pane_g1_ParamLimits

0x09e1,	// (0x0008a8e9) list_double_fisheye_pane_g1

0x09ed,	// (0x0008a8f5) list_double_fisheye_pane_g2_ParamLimits

0x09ed,	// (0x0008a8f5) list_double_fisheye_pane_g2

0x844b,	// (0x00092353) list_double_fisheye_pane_g3_ParamLimits

0x844b,	// (0x00092353) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x00099bc4) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x00099bc4) list_double_fisheye_pane_g

0x0a1e,	// (0x0008a926) list_double_fisheye_pane_t1_ParamLimits

0x0a1e,	// (0x0008a926) list_double_fisheye_pane_t1

0x0a39,	// (0x0008a941) list_double_fisheye_pane_t2_ParamLimits

0x0a39,	// (0x0008a941) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x00099bcf) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x00099bcf) list_double_fisheye_pane_t

0xa0f5,	// (0x00093ffd) main_call5_pane

0x8243,	// (0x0009214b) sc_swipe_pane_ParamLimits

0x8243,	// (0x0009214b) sc_swipe_pane

0x846a,	// (0x00092372) call5_image_pane_ParamLimits

0x846a,	// (0x00092372) call5_image_pane

0x8487,	// (0x0009238f) call5_swipe_1_pane_ParamLimits

0x8487,	// (0x0009238f) call5_swipe_1_pane

0x849a,	// (0x000923a2) call5_swipe_2_pane_ParamLimits

0x849a,	// (0x000923a2) call5_swipe_2_pane

0x84c5,	// (0x000923cd) popup_call5_audio_first_window_ParamLimits

0x84c5,	// (0x000923cd) popup_call5_audio_first_window

0xcf4f,	// (0x00096e57) call5_swipe_1_pane_g1_ParamLimits

0xcf4f,	// (0x00096e57) call5_swipe_1_pane_g1

0xe683,	// (0x0009858b) call5_swipe_1_pane_g2_ParamLimits

0xe683,	// (0x0009858b) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x00099bd4) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x00099bd4) call5_swipe_1_pane_g

0xe68f,	// (0x00098597) call5_swipe_1_pane_t1_ParamLimits

0xe68f,	// (0x00098597) call5_swipe_1_pane_t1

0xcf4f,	// (0x00096e57) call5_swipe_2_pane_g1_ParamLimits

0xcf4f,	// (0x00096e57) call5_swipe_2_pane_g1

0xe6a4,	// (0x000985ac) call5_swipe_2_pane_g2_ParamLimits

0xe6a4,	// (0x000985ac) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x00099bd9) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x00099bd9) call5_swipe_2_pane_g

0xe6b0,	// (0x000985b8) call5_swipe_2_pane_t1_ParamLimits

0xe6b0,	// (0x000985b8) call5_swipe_2_pane_t1

0xe6c5,	// (0x000985cd) sc_swipe_pane_g1_ParamLimits

0xe6c5,	// (0x000985cd) sc_swipe_pane_g1

0xe6d2,	// (0x000985da) sc_swipe_pane_g2_ParamLimits

0xe6d2,	// (0x000985da) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x00099bde) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x00099bde) sc_swipe_pane_g

0xe6de,	// (0x000985e6) sc_swipe_pane_t1_ParamLimits

0xe6de,	// (0x000985e6) sc_swipe_pane_t1

0xa0f5,	// (0x00093ffd) main_cmail_launcher_pane

0x84d6,	// (0x000923de) aid_size_cell_cmail_l_ParamLimits

0x84d6,	// (0x000923de) aid_size_cell_cmail_l

0x84e4,	// (0x000923ec) grid_cmail_l_pane_ParamLimits

0x84e4,	// (0x000923ec) grid_cmail_l_pane

0x84fe,	// (0x00092406) cell_cmail_l_pane_ParamLimits

0x84fe,	// (0x00092406) cell_cmail_l_pane

0xe6f3,	// (0x000985fb) cell_cmail_l_pane_g1_ParamLimits

0xe6f3,	// (0x000985fb) cell_cmail_l_pane_g1

0xe6ff,	// (0x00098607) cell_cmail_l_pane_t1_ParamLimits

0xe6ff,	// (0x00098607) cell_cmail_l_pane_t1

0xe715,	// (0x0009861d) cell_cmail_l_pane_t2_ParamLimits

0xe715,	// (0x0009861d) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x00099be3) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x00099be3) cell_cmail_l_pane_t

0xab1c,	// (0x00094a24) grid_highlight_pane_cp018_ParamLimits

0xab1c,	// (0x00094a24) grid_highlight_pane_cp018

0x12c1,	// (0x0008b1c9) main2_pane_ParamLimits

0x12c1,	// (0x0008b1c9) main2_pane

0xa8e9,	// (0x000947f1) popup_sp_fs_action_menu_bg_pane_g1

0xa8f1,	// (0x000947f9) popup_sp_fs_action_menu_bg_pane_g2

0xa8f9,	// (0x00094801) popup_sp_fs_action_menu_bg_pane_g3

0xa901,	// (0x00094809) popup_sp_fs_action_menu_bg_pane_g4

0xa909,	// (0x00094811) popup_sp_fs_action_menu_bg_pane_g5

0xa911,	// (0x00094819) popup_sp_fs_action_menu_bg_pane_g6

0xa919,	// (0x00094821) popup_sp_fs_action_menu_bg_pane_g7

0xa921,	// (0x00094829) popup_sp_fs_action_menu_bg_pane_g8

0xa929,	// (0x00094831) popup_sp_fs_action_menu_bg_pane_g9

0xa931,	// (0x00094839) popup_sp_fs_action_menu_bg_pane_g10

0xa931,	// (0x00094839) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x00099092) popup_sp_fs_action_menu_bg_pane_g

0x03e2,	// (0x0008a2ea) list_medium_line_x2_t3_g3_g1_ParamLimits

0x03e2,	// (0x0008a2ea) list_medium_line_x2_t3_g3_g1

0x21c7,	// (0x0008c0cf) list_medium_line_x2_t3_g3_g2_ParamLimits

0x21c7,	// (0x0008c0cf) list_medium_line_x2_t3_g3_g2

0x03ee,	// (0x0008a2f6) list_medium_line_x2_t3_g3_g3_ParamLimits

0x03ee,	// (0x0008a2f6) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x00099140) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x00099140) list_medium_line_x2_t3_g3_g

0x03fa,	// (0x0008a302) list_medium_line_x2_t3_g3_t1_ParamLimits

0x03fa,	// (0x0008a302) list_medium_line_x2_t3_g3_t1

0x040f,	// (0x0008a317) list_medium_line_x2_t3_g3_t2_ParamLimits

0x040f,	// (0x0008a317) list_medium_line_x2_t3_g3_t2

0x0423,	// (0x0008a32b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0423,	// (0x0008a32b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x00099147) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x00099147) list_medium_line_x2_t3_g3_t

0x03e2,	// (0x0008a2ea) list_medium_line_x2_t3_g2_g1_ParamLimits

0x03e2,	// (0x0008a2ea) list_medium_line_x2_t3_g2_g1

0x03ee,	// (0x0008a2f6) list_medium_line_x2_t3_g2_g2_ParamLimits

0x03ee,	// (0x0008a2f6) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0009914e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0009914e) list_medium_line_x2_t3_g2_g

0x0438,	// (0x0008a340) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0438,	// (0x0008a340) list_medium_line_x2_t3_g2_t1

0x044e,	// (0x0008a356) list_medium_line_x2_t3_g2_t2_ParamLimits

0x044e,	// (0x0008a356) list_medium_line_x2_t3_g2_t2

0x0423,	// (0x0008a32b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0423,	// (0x0008a32b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x00099153) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x00099153) list_medium_line_x2_t3_g2_t

0x03e2,	// (0x0008a2ea) list_medium_line_x2_t4_g4_g1_ParamLimits

0x03e2,	// (0x0008a2ea) list_medium_line_x2_t4_g4_g1

0x21d3,	// (0x0008c0db) list_medium_line_x2_t4_g4_g2_ParamLimits

0x21d3,	// (0x0008c0db) list_medium_line_x2_t4_g4_g2

0x21c7,	// (0x0008c0cf) list_medium_line_x2_t4_g4_g3_ParamLimits

0x21c7,	// (0x0008c0cf) list_medium_line_x2_t4_g4_g3

0x0460,	// (0x0008a368) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0460,	// (0x0008a368) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0009915a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0009915a) list_medium_line_x2_t4_g4_g

0x046c,	// (0x0008a374) list_medium_line_x2_t4_g4_t1_ParamLimits

0x046c,	// (0x0008a374) list_medium_line_x2_t4_g4_t1

0x0486,	// (0x0008a38e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0486,	// (0x0008a38e) list_medium_line_x2_t4_g4_t2

0x049c,	// (0x0008a3a4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x049c,	// (0x0008a3a4) list_medium_line_x2_t4_g4_t3

0x04b1,	// (0x0008a3b9) list_medium_line_x2_t4_g4_t4_ParamLimits

0x04b1,	// (0x0008a3b9) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x00099163) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x00099163) list_medium_line_x2_t4_g4_t

0x03e2,	// (0x0008a2ea) list_medium_line_x2_t2_g4_g1_ParamLimits

0x03e2,	// (0x0008a2ea) list_medium_line_x2_t2_g4_g1

0x21d3,	// (0x0008c0db) list_medium_line_x2_t2_g4_g2_ParamLimits

0x21d3,	// (0x0008c0db) list_medium_line_x2_t2_g4_g2

0x21c7,	// (0x0008c0cf) list_medium_line_x2_t2_g4_g3_ParamLimits

0x21c7,	// (0x0008c0cf) list_medium_line_x2_t2_g4_g3

0x03ee,	// (0x0008a2f6) list_medium_line_x2_t2_g4_g4_ParamLimits

0x03ee,	// (0x0008a2f6) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000991ca) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000991ca) list_medium_line_x2_t2_g4_g

0x04c3,	// (0x0008a3cb) list_medium_line_x2_t2_g4_t1_ParamLimits

0x04c3,	// (0x0008a3cb) list_medium_line_x2_t2_g4_t1

0x0423,	// (0x0008a32b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0423,	// (0x0008a32b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000991d3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000991d3) list_medium_line_x2_t2_g4_t

0x03e2,	// (0x0008a2ea) list_medium_line_x2_t2_g3_g1_ParamLimits

0x03e2,	// (0x0008a2ea) list_medium_line_x2_t2_g3_g1

0x21c7,	// (0x0008c0cf) list_medium_line_x2_t2_g3_g2_ParamLimits

0x21c7,	// (0x0008c0cf) list_medium_line_x2_t2_g3_g2

0x03ee,	// (0x0008a2f6) list_medium_line_x2_t2_g3_g3_ParamLimits

0x03ee,	// (0x0008a2f6) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x00099140) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x00099140) list_medium_line_x2_t2_g3_g

0x04d8,	// (0x0008a3e0) list_medium_line_x2_t2_g3_t1_ParamLimits

0x04d8,	// (0x0008a3e0) list_medium_line_x2_t2_g3_t1

0x0423,	// (0x0008a32b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0423,	// (0x0008a32b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000991d8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000991d8) list_medium_line_x2_t2_g3_t

0x3080,	// (0x0008cf88) main_sp_fs_list_pane_ParamLimits

0x3080,	// (0x0008cf88) main_sp_fs_list_pane

0xca5a,	// (0x00096962) sp_fs_scroll_pane_ParamLimits

0xca5a,	// (0x00096962) sp_fs_scroll_pane

0x04ed,	// (0x0008a3f5) list_medium_line_x2_t3_t1

0x04fd,	// (0x0008a405) list_medium_line_x2_t3_t2

0x050b,	// (0x0008a413) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00099223) list_medium_line_x2_t3_t

0x0519,	// (0x0008a421) list_medium_line_x3_t4_t1

0x0529,	// (0x0008a431) list_medium_line_x3_t4_t2

0x0537,	// (0x0008a43f) list_medium_line_x3_t4_t3

0x050b,	// (0x0008a413) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0009922a) list_medium_line_x3_t4_t

0x0545,	// (0x0008a44d) list_medium_line_x4_t5_t1

0x0555,	// (0x0008a45d) list_medium_line_x4_t5_t2

0x0537,	// (0x0008a43f) list_medium_line_x4_t5_t3

0x0563,	// (0x0008a46b) list_medium_line_x4_t5_t4

0x050b,	// (0x0008a413) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00099233) list_medium_line_x4_t5_t

0x03e2,	// (0x0008a2ea) list_medium_line_t4_g4_g1_ParamLimits

0x03e2,	// (0x0008a2ea) list_medium_line_t4_g4_g1

0x0460,	// (0x0008a368) list_medium_line_t4_g4_g2_ParamLimits

0x0460,	// (0x0008a368) list_medium_line_t4_g4_g2

0x0571,	// (0x0008a479) list_medium_line_t4_g4_g3_ParamLimits

0x0571,	// (0x0008a479) list_medium_line_t4_g4_g3

0x03ee,	// (0x0008a2f6) list_medium_line_t4_g4_g4_ParamLimits

0x03ee,	// (0x0008a2f6) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0009923e) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0009923e) list_medium_line_t4_g4_g

0x057d,	// (0x0008a485) list_medium_line_t4_g4_t1_ParamLimits

0x057d,	// (0x0008a485) list_medium_line_t4_g4_t1

0x0592,	// (0x0008a49a) list_medium_line_t4_g4_t2_ParamLimits

0x0592,	// (0x0008a49a) list_medium_line_t4_g4_t2

0x05a7,	// (0x0008a4af) list_medium_line_t4_g4_t3_ParamLimits

0x05a7,	// (0x0008a4af) list_medium_line_t4_g4_t3

0x0423,	// (0x0008a32b) list_medium_line_t4_g4_t4_ParamLimits

0x0423,	// (0x0008a32b) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x00099247) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x00099247) list_medium_line_t4_g4_t

0x314f,	// (0x0008d057) chi_dic_find_pane_g1

0x41a7,	// (0x0008e0af) main_tport_pane

0x074c,	// (0x0008a654) list_medium_line_plain_t1

0x075a,	// (0x0008a662) list_medium_line_t2_g2_g1_ParamLimits

0x075a,	// (0x0008a662) list_medium_line_t2_g2_g1

0x70d6,	// (0x00090fde) list_medium_line_t2_g2_g2_ParamLimits

0x70d6,	// (0x00090fde) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0009991b) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0009991b) list_medium_line_t2_g2_g

0x0766,	// (0x0008a66e) list_medium_line_t2_g2_t1_ParamLimits

0x0766,	// (0x0008a66e) list_medium_line_t2_g2_t1

0x0780,	// (0x0008a688) list_medium_line_t2_g2_t2_ParamLimits

0x0780,	// (0x0008a688) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x00099920) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x00099920) list_medium_line_t2_g2_t

0x7664,	// (0x0009156c) aid_sp_fs_list_icon_a_sm

0x9e64,	// (0x00093d6c) aid_sp_fs_list_icon_d

0xaafc,	// (0x00094a04) aid_sp_fs_text_primary

0xab05,	// (0x00094a0d) aid_sp_fs_text_secondary

0x766c,	// (0x00091574) list_medium_line

0x766c,	// (0x00091574) list_medium_line_g2

0x766c,	// (0x00091574) list_medium_line_g3

0x766c,	// (0x00091574) list_medium_line_plain

0x766c,	// (0x00091574) list_medium_line_plain_t2

0x766c,	// (0x00091574) list_medium_line_plain_t3

0x766c,	// (0x00091574) list_medium_line_right_icon

0x766c,	// (0x00091574) list_medium_line_right_iconx2

0x766c,	// (0x00091574) list_medium_line_t2

0x766c,	// (0x00091574) list_medium_line_t2_g2

0x766c,	// (0x00091574) list_medium_line_t2_g3

0x766c,	// (0x00091574) list_medium_line_t2_right_icon

0x766c,	// (0x00091574) list_medium_line_t2_right_iconx2

0x766c,	// (0x00091574) list_medium_line_t3

0x766c,	// (0x00091574) list_medium_line_t3_g2

0x766c,	// (0x00091574) list_medium_line_t3_g3

0x766c,	// (0x00091574) list_medium_line_t3_right_iconx2

0x7675,	// (0x0009157d) list_medium_line_t4_g4

0x767e,	// (0x00091586) list_medium_line_x2

0x767e,	// (0x00091586) list_medium_line_x2_t2_g2

0x767e,	// (0x00091586) list_medium_line_x2_t2_g3

0x767e,	// (0x00091586) list_medium_line_x2_t2_g4

0x767e,	// (0x00091586) list_medium_line_x2_t3

0x767e,	// (0x00091586) list_medium_line_x2_t3_g2

0x767e,	// (0x00091586) list_medium_line_x2_t3_g3

0x767e,	// (0x00091586) list_medium_line_x2_t3_g4

0x767e,	// (0x00091586) list_medium_line_x2_t4_g2

0x767e,	// (0x00091586) list_medium_line_x2_t4_g4

0x7687,	// (0x0009158f) list_medium_line_x3

0x7687,	// (0x0009158f) list_medium_line_x3_t4

0x7687,	// (0x0009158f) list_medium_line_x3_t4_g4

0x7675,	// (0x0009157d) list_medium_line_x4_t4

0x7675,	// (0x0009157d) list_medium_line_x4_t4_g7

0x7675,	// (0x0009157d) list_medium_line_x4_t5

0x0912,	// (0x0008a81a) list_single_fs_dyc_pane_ParamLimits

0x0912,	// (0x0008a81a) list_single_fs_dyc_pane

0x03e2,	// (0x0008a2ea) list_medium_line_x4_t4_g7_g1_ParamLimits

0x03e2,	// (0x0008a2ea) list_medium_line_x4_t4_g7_g1

0x0926,	// (0x0008a82e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0926,	// (0x0008a82e) list_medium_line_x4_t4_g7_g2

0x7dc6,	// (0x00091cce) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7dc6,	// (0x00091cce) list_medium_line_x4_t4_g7_g3

0x7dd5,	// (0x00091cdd) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7dd5,	// (0x00091cdd) list_medium_line_x4_t4_g7_g4

0x0932,	// (0x0008a83a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0932,	// (0x0008a83a) list_medium_line_x4_t4_g7_g5

0x0941,	// (0x0008a849) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0941,	// (0x0008a849) list_medium_line_x4_t4_g7_g6

0x0950,	// (0x0008a858) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0950,	// (0x0008a858) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x00099aeb) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x00099aeb) list_medium_line_x4_t4_g7_g

0x095c,	// (0x0008a864) list_medium_line_x4_t4_g7_t1_ParamLimits

0x095c,	// (0x0008a864) list_medium_line_x4_t4_g7_t1

0x0971,	// (0x0008a879) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0971,	// (0x0008a879) list_medium_line_x4_t4_g7_t2

0x0986,	// (0x0008a88e) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0986,	// (0x0008a88e) list_medium_line_x4_t4_g7_t3

0x099b,	// (0x0008a8a3) list_medium_line_x4_t4_g7_t4_ParamLimits

0x099b,	// (0x0008a8a3) list_medium_line_x4_t4_g7_t4

0x09ad,	// (0x0008a8b5) list_medium_line_x4_t4_g7_t5_ParamLimits

0x09ad,	// (0x0008a8b5) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x00099afa) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x00099afa) list_medium_line_x4_t4_g7_t

0x09bf,	// (0x0008a8c7) list_single_dyc_row_pane_ParamLimits

0x09bf,	// (0x0008a8c7) list_single_dyc_row_pane

0x8457,	// (0x0009235f) call5_gesture_pane_ParamLimits

0x8457,	// (0x0009235f) call5_gesture_pane

0x84ad,	// (0x000923b5) call5_windows_pane_ParamLimits

0x84ad,	// (0x000923b5) call5_windows_pane

0x8518,	// (0x00092420) call5_swipe_1_pane_cp_ParamLimits

0x8518,	// (0x00092420) call5_swipe_1_pane_cp

0x8524,	// (0x0009242c) call5_swipe_2_pane_cp_ParamLimits

0x8524,	// (0x0009242c) call5_swipe_2_pane_cp

0xaa15,	// (0x0009491d) call5_image_pane_cp

0x8530,	// (0x00092438) popup_call5_audio_first_window_cp_ParamLimits

0x8530,	// (0x00092438) popup_call5_audio_first_window_cp

0xe6c5,	// (0x000985cd) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6c5,	// (0x000985cd) call5_swipe_1_pane_g1_cp

0xe732,	// (0x0009863a) call5_swipe_1_pane_g2_cp

0xe6de,	// (0x000985e6) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6de,	// (0x000985e6) call5_swipe_1_pane_t1_cp

0xe6c5,	// (0x000985cd) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6c5,	// (0x000985cd) call5_swipe_2_pane_g1_cp

0xe73a,	// (0x00098642) call5_swipe_2_pane_g2_cp

0xe742,	// (0x0009864a) call5_swipe_2_pane_t1_cp_ParamLimits

0xe742,	// (0x0009864a) call5_swipe_2_pane_t1_cp

0xab1c,	// (0x00094a24) main_sp_fs_email_pane

0xe757,	// (0x0009865f) main_sp_fs_listscroll_pane_te

0x853e,	// (0x00092446) popup_sp_fs_action_menu_pane_ParamLimits

0x853e,	// (0x00092446) popup_sp_fs_action_menu_pane

0xcd01,	// (0x00096c09) bg_sp_fs_ctrlbar_pane_g1

0xe760,	// (0x00098668) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe769,	// (0x00098671) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe772,	// (0x0009867a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd01,	// (0x00096c09) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x00099be8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcae6,	// (0x000969ee) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcae6,	// (0x000969ee) bg_sp_fs_ctrlbar_ddmenu_pane

0xe77b,	// (0x00098683) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe77b,	// (0x00098683) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe787,	// (0x0009868f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe787,	// (0x0009868f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x00099bf1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x00099bf1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe793,	// (0x0009869b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe793,	// (0x0009869b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8582,	// (0x0009248a) list_medium_line_t2_right_icon_g1

0x0a5b,	// (0x0008a963) list_medium_line_t2_right_icon_t1

0x0a6b,	// (0x0008a973) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x00099bf6) list_medium_line_t2_right_icon_t

0xc8ed,	// (0x000967f5) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc8ed,	// (0x000967f5) bg_sp_fs_ctrlbar_pane

0x85d2,	// (0x000924da) main_sp_fs_ctrlbar_button_pane_cp01

0x85dc,	// (0x000924e4) main_sp_fs_ctrlbar_ddmenu_pane

0xe7e5,	// (0x000986ed) main_sp_fs_ctrlbar_pane_g1

0xe7f1,	// (0x000986f9) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x00099bfb) main_sp_fs_ctrlbar_pane_g

0xe7fd,	// (0x00098705) main_sp_fs_ctrlbar_pane_t1

0x85e6,	// (0x000924ee) main_sp_fs_ctrlbar_pane

0x860a,	// (0x00092512) main_sp_fs_listscroll_pane_te_cp01

0x0a7d,	// (0x0008a985) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0a7d,	// (0x0008a985) popup_sp_fs_action_menu_pane_cp01

0xab1c,	// (0x00094a24) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xab1c,	// (0x00094a24) bg_sp_fs_highlight_list_pane_cp01

0x862a,	// (0x00092532) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x862a,	// (0x00092532) sp_fs_action_menu_list_gene_pane_g1

0xe82d,	// (0x00098735) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe82d,	// (0x00098735) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x00099c05) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x00099c05) sp_fs_action_menu_list_gene_pane_g

0x8639,	// (0x00092541) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8639,	// (0x00092541) sp_fs_action_menu_list_gene_pane_t1

0x8651,	// (0x00092559) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8651,	// (0x00092559) sp_fs_action_menu_list_gene_pane

0xe83a,	// (0x00098742) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe83a,	// (0x00098742) popup_sp_fs_action_menu_bg_pane

0x8670,	// (0x00092578) sp_fs_action_menu_list_pane_ParamLimits

0x8670,	// (0x00092578) sp_fs_action_menu_list_pane

0x0aad,	// (0x0008a9b5) sp_fs_scroll_pane_cp01_ParamLimits

0x0aad,	// (0x0008a9b5) sp_fs_scroll_pane_cp01

0x0ad3,	// (0x0008a9db) list_medium_line_plain_t2_t1

0x0ae3,	// (0x0008a9eb) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x00099c0a) list_medium_line_plain_t2_t

0x0af3,	// (0x0008a9fb) list_medium_line_plain_t3_t1

0x0b03,	// (0x0008aa0b) list_medium_line_plain_t3_t2

0x0b11,	// (0x0008aa19) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x00099c0f) list_medium_line_plain_t3_t

0x03e2,	// (0x0008a2ea) list_medium_line_x2_t2_g2_g1_ParamLimits

0x03e2,	// (0x0008a2ea) list_medium_line_x2_t2_g2_g1

0x03ee,	// (0x0008a2f6) list_medium_line_x2_t2_g2_g2_ParamLimits

0x03ee,	// (0x0008a2f6) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0009914e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0009914e) list_medium_line_x2_t2_g2_g

0x057d,	// (0x0008a485) list_medium_line_x2_t2_g2_t1_ParamLimits

0x057d,	// (0x0008a485) list_medium_line_x2_t2_g2_t1

0x0423,	// (0x0008a32b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0423,	// (0x0008a32b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x00099c16) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x00099c16) list_medium_line_x2_t2_g2_t

0x03e2,	// (0x0008a2ea) list_medium_line_x2_t4_g2_g1_ParamLimits

0x03e2,	// (0x0008a2ea) list_medium_line_x2_t4_g2_g1

0x0b1f,	// (0x0008aa27) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0b1f,	// (0x0008aa27) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x00099c1b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x00099c1b) list_medium_line_x2_t4_g2_g

0x0b31,	// (0x0008aa39) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0b31,	// (0x0008aa39) list_medium_line_x2_t4_g2_t1

0x0b4b,	// (0x0008aa53) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0b4b,	// (0x0008aa53) list_medium_line_x2_t4_g2_t2

0x0b61,	// (0x0008aa69) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0b61,	// (0x0008aa69) list_medium_line_x2_t4_g2_t3

0x0423,	// (0x0008a32b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0423,	// (0x0008a32b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x00099c20) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x00099c20) list_medium_line_x2_t4_g2_t

0x8690,	// (0x00092598) list_medium_line_t3_right_iconx2_g1

0x8582,	// (0x0009248a) list_medium_line_t3_right_iconx2_g2

0x0b76,	// (0x0008aa7e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x00099c29) list_medium_line_t3_right_iconx2_g

0x0b80,	// (0x0008aa88) list_medium_line_t3_right_iconx2_t1

0x0b90,	// (0x0008aa98) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x00099c30) list_medium_line_t3_right_iconx2_t

0x03e2,	// (0x0008a2ea) list_medium_line_x3_t4_g4_g1_ParamLimits

0x03e2,	// (0x0008a2ea) list_medium_line_x3_t4_g4_g1

0x21c7,	// (0x0008c0cf) list_medium_line_x3_t4_g4_g2_ParamLimits

0x21c7,	// (0x0008c0cf) list_medium_line_x3_t4_g4_g2

0x0460,	// (0x0008a368) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0460,	// (0x0008a368) list_medium_line_x3_t4_g4_g3

0x8698,	// (0x000925a0) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8698,	// (0x000925a0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x00099c35) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x00099c35) list_medium_line_x3_t4_g4_g

0x0b9e,	// (0x0008aaa6) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0b9e,	// (0x0008aaa6) list_medium_line_x3_t4_g4_t1

0x0bb5,	// (0x0008aabd) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0bb5,	// (0x0008aabd) list_medium_line_x3_t4_g4_t2

0x0592,	// (0x0008a49a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0592,	// (0x0008a49a) list_medium_line_x3_t4_g4_t3

0x0bd0,	// (0x0008aad8) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0bd0,	// (0x0008aad8) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x00099c3e) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x00099c3e) list_medium_line_x3_t4_g4_t

0x0bed,	// (0x0008aaf5) list_single_dyc_row_text_pane_t1_ParamLimits

0x0bed,	// (0x0008aaf5) list_single_dyc_row_text_pane_t1

0x0c36,	// (0x0008ab3e) list_single_dyc_row_text_pane_t2_ParamLimits

0x0c36,	// (0x0008ab3e) list_single_dyc_row_text_pane_t2

0x86a4,	// (0x000925ac) list_single_dyc_row_text_pane_t3_ParamLimits

0x86a4,	// (0x000925ac) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x00099c47) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x00099c47) list_single_dyc_row_text_pane_t

0x86c8,	// (0x000925d0) list_single_dyc_row_pane_g1_ParamLimits

0x86c8,	// (0x000925d0) list_single_dyc_row_pane_g1

0x86d4,	// (0x000925dc) list_single_dyc_row_pane_g2_ParamLimits

0x86d4,	// (0x000925dc) list_single_dyc_row_pane_g2

0x86e0,	// (0x000925e8) list_single_dyc_row_pane_g3_ParamLimits

0x86e0,	// (0x000925e8) list_single_dyc_row_pane_g3

0x86ec,	// (0x000925f4) list_single_dyc_row_pane_g4_ParamLimits

0x86ec,	// (0x000925f4) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x00099c54) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x00099c54) list_single_dyc_row_pane_g

0x86f8,	// (0x00092600) list_single_dyc_row_text_pane_ParamLimits

0x86f8,	// (0x00092600) list_single_dyc_row_text_pane

0xa0f5,	// (0x00093ffd) bg_sp_fs_scroll_pane

0xe848,	// (0x00098750) thumb_sp_fs_scroll_pane

0x075a,	// (0x0008a662) list_medium_line_g1_ParamLimits

0x075a,	// (0x0008a662) list_medium_line_g1

0x0d6b,	// (0x0008ac73) list_medium_line_t1_ParamLimits

0x0d6b,	// (0x0008ac73) list_medium_line_t1

0x03e2,	// (0x0008a2ea) list_medium_line_x2_g1_ParamLimits

0x03e2,	// (0x0008a2ea) list_medium_line_x2_g1

0x21c7,	// (0x0008c0cf) list_medium_line_x2_g2_ParamLimits

0x21c7,	// (0x0008c0cf) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x00099c5d) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x00099c5d) list_medium_line_x2_g

0x8717,	// (0x0009261f) list_medium_line_x2_t1_ParamLimits

0x8717,	// (0x0009261f) list_medium_line_x2_t1

0x03e2,	// (0x0008a2ea) list_medium_line_x3_g1_ParamLimits

0x03e2,	// (0x0008a2ea) list_medium_line_x3_g1

0x21c7,	// (0x0008c0cf) list_medium_line_x3_g2_ParamLimits

0x21c7,	// (0x0008c0cf) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x00099c5d) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x00099c5d) list_medium_line_x3_g

0x8717,	// (0x0009261f) list_medium_line_x3_t1_ParamLimits

0x8717,	// (0x0009261f) list_medium_line_x3_t1

0xe851,	// (0x00098759) thumb_sp_fs_scroll_pane_g1

0xe85a,	// (0x00098762) thumb_sp_fs_scroll_pane_g2

0xe863,	// (0x0009876b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00099c62) thumb_sp_fs_scroll_pane_g

0xe851,	// (0x00098759) bg_sp_fs_scroll_pane_g1

0xe85a,	// (0x00098762) bg_sp_fs_scroll_pane_g2

0xe863,	// (0x0009876b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00099c62) bg_sp_fs_scroll_pane_g

0x03e2,	// (0x0008a2ea) list_medium_line_x2_t3_g4_g1_ParamLimits

0x03e2,	// (0x0008a2ea) list_medium_line_x2_t3_g4_g1

0x21d3,	// (0x0008c0db) list_medium_line_x2_t3_g4_g2_ParamLimits

0x21d3,	// (0x0008c0db) list_medium_line_x2_t3_g4_g2

0x21c7,	// (0x0008c0cf) list_medium_line_x2_t3_g4_g3_ParamLimits

0x21c7,	// (0x0008c0cf) list_medium_line_x2_t3_g4_g3

0x03ee,	// (0x0008a2f6) list_medium_line_x2_t3_g4_g4_ParamLimits

0x03ee,	// (0x0008a2f6) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000991ca) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000991ca) list_medium_line_x2_t3_g4_g

0x0d80,	// (0x0008ac88) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0d80,	// (0x0008ac88) list_medium_line_x2_t3_g4_t1

0x0d9a,	// (0x0008aca2) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0d9a,	// (0x0008aca2) list_medium_line_x2_t3_g4_t2

0x0423,	// (0x0008a32b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0423,	// (0x0008a32b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x00099c69) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x00099c69) list_medium_line_x2_t3_g4_t

0x075a,	// (0x0008a662) list_medium_line_g2_g1_ParamLimits

0x075a,	// (0x0008a662) list_medium_line_g2_g1

0x70d6,	// (0x00090fde) list_medium_line_g2_g2_ParamLimits

0x70d6,	// (0x00090fde) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0009991b) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0009991b) list_medium_line_g2_g

0x0db4,	// (0x0008acbc) list_medium_line_g2_t1_ParamLimits

0x0db4,	// (0x0008acbc) list_medium_line_g2_t1

0x075a,	// (0x0008a662) list_medium_line_t3_g2_g1_ParamLimits

0x075a,	// (0x0008a662) list_medium_line_t3_g2_g1

0x70d6,	// (0x00090fde) list_medium_line_t3_g2_g2_ParamLimits

0x70d6,	// (0x00090fde) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0009991b) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0009991b) list_medium_line_t3_g2_g

0x0dc9,	// (0x0008acd1) list_medium_line_t3_g2_t1_ParamLimits

0x0dc9,	// (0x0008acd1) list_medium_line_t3_g2_t1

0x0de3,	// (0x0008aceb) list_medium_line_t3_g2_t2_ParamLimits

0x0de3,	// (0x0008aceb) list_medium_line_t3_g2_t2

0x0df9,	// (0x0008ad01) list_medium_line_t3_g2_t3_ParamLimits

0x0df9,	// (0x0008ad01) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x00099c70) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x00099c70) list_medium_line_t3_g2_t

0x8582,	// (0x0009248a) list_medium_line_right_icon_g1

0x0e13,	// (0x0008ad1b) list_medium_line_right_icon_t1

0x075a,	// (0x0008a662) list_medium_line_t2_g1_ParamLimits

0x075a,	// (0x0008a662) list_medium_line_t2_g1

0x0e21,	// (0x0008ad29) list_medium_line_t2_t1_ParamLimits

0x0e21,	// (0x0008ad29) list_medium_line_t2_t1

0x0e3b,	// (0x0008ad43) list_medium_line_t2_t2_ParamLimits

0x0e3b,	// (0x0008ad43) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x00099c77) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x00099c77) list_medium_line_t2_t

0x075a,	// (0x0008a662) list_medium_line_t3_g1_ParamLimits

0x075a,	// (0x0008a662) list_medium_line_t3_g1

0x0e54,	// (0x0008ad5c) list_medium_line_t3_t1_ParamLimits

0x0e54,	// (0x0008ad5c) list_medium_line_t3_t1

0x0e6e,	// (0x0008ad76) list_medium_line_t3_t2_ParamLimits

0x0e6e,	// (0x0008ad76) list_medium_line_t3_t2

0x0e84,	// (0x0008ad8c) list_medium_line_t3_t3_ParamLimits

0x0e84,	// (0x0008ad8c) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x00099c7c) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x00099c7c) list_medium_line_t3_t

0x075a,	// (0x0008a662) list_medium_line_g3_g1_ParamLimits

0x075a,	// (0x0008a662) list_medium_line_g3_g1

0x872d,	// (0x00092635) list_medium_line_g3_g2_ParamLimits

0x872d,	// (0x00092635) list_medium_line_g3_g2

0x70d6,	// (0x00090fde) list_medium_line_g3_g3_ParamLimits

0x70d6,	// (0x00090fde) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x00099c83) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x00099c83) list_medium_line_g3_g

0x0e99,	// (0x0008ada1) list_medium_line_g3_t1_ParamLimits

0x0e99,	// (0x0008ada1) list_medium_line_g3_t1

0x075a,	// (0x0008a662) list_medium_line_t2_g3_g1_ParamLimits

0x075a,	// (0x0008a662) list_medium_line_t2_g3_g1

0x872d,	// (0x00092635) list_medium_line_t2_g3_g2_ParamLimits

0x872d,	// (0x00092635) list_medium_line_t2_g3_g2

0x70d6,	// (0x00090fde) list_medium_line_t2_g3_g3_ParamLimits

0x70d6,	// (0x00090fde) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x00099c83) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x00099c83) list_medium_line_t2_g3_g

0x0eae,	// (0x0008adb6) list_medium_line_t2_g3_t1_ParamLimits

0x0eae,	// (0x0008adb6) list_medium_line_t2_g3_t1

0x0ec8,	// (0x0008add0) list_medium_line_t2_g3_t2_ParamLimits

0x0ec8,	// (0x0008add0) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x00099c8a) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x00099c8a) list_medium_line_t2_g3_t

0x075a,	// (0x0008a662) list_medium_line_t3_g3_g1_ParamLimits

0x075a,	// (0x0008a662) list_medium_line_t3_g3_g1

0x872d,	// (0x00092635) list_medium_line_t3_g3_g2_ParamLimits

0x872d,	// (0x00092635) list_medium_line_t3_g3_g2

0x70d6,	// (0x00090fde) list_medium_line_t3_g3_g3_ParamLimits

0x70d6,	// (0x00090fde) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x00099c83) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x00099c83) list_medium_line_t3_g3_g

0x0ee6,	// (0x0008adee) list_medium_line_t3_g3_t1_ParamLimits

0x0ee6,	// (0x0008adee) list_medium_line_t3_g3_t1

0x0eff,	// (0x0008ae07) list_medium_line_t3_g3_t2_ParamLimits

0x0eff,	// (0x0008ae07) list_medium_line_t3_g3_t2

0x0f15,	// (0x0008ae1d) list_medium_line_t3_g3_t3_ParamLimits

0x0f15,	// (0x0008ae1d) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x00099c8f) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x00099c8f) list_medium_line_t3_g3_t

0x8690,	// (0x00092598) list_medium_line_right_iconx2_g1

0x8582,	// (0x0009248a) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x00099c96) list_medium_line_right_iconx2_g

0x9e82,	// (0x00093d8a) list_medium_line_right_iconx2_t1

0x8690,	// (0x00092598) list_medium_line_t2_right_iconx2_g1

0x8582,	// (0x0009248a) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x00099c96) list_medium_line_t2_right_iconx2_g

0x0f2f,	// (0x0008ae37) list_medium_line_t2_right_iconx2_t1

0x0f3f,	// (0x0008ae47) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x00099c9b) list_medium_line_t2_right_iconx2_t

0x0f51,	// (0x0008ae59) list_medium_line_x4_t4_t1

0x0f5f,	// (0x0008ae67) list_medium_line_x4_t4_t2

0x0f6f,	// (0x0008ae77) list_medium_line_x4_t4_t3

0x0f7f,	// (0x0008ae87) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x00099ca0) list_medium_line_x4_t4_t

0x877c,	// (0x00092684) tport_appsw_pane_ParamLimits

0x877c,	// (0x00092684) tport_appsw_pane

0x8794,	// (0x0009269c) tport_contact_pane_ParamLimits

0x8794,	// (0x0009269c) tport_contact_pane

0x87ac,	// (0x000926b4) tport_listscroll_pane_ParamLimits

0x87ac,	// (0x000926b4) tport_listscroll_pane

0x87c6,	// (0x000926ce) cell_tport_appsw_pane_ParamLimits

0x87c6,	// (0x000926ce) cell_tport_appsw_pane

0xd70b,	// (0x00097613) tport_appsw_pane_g1_ParamLimits

0xd70b,	// (0x00097613) tport_appsw_pane_g1

0xe86c,	// (0x00098774) tport_contact_pane_g1

0xe875,	// (0x0009877d) tport_contact_pane_t1

0xe883,	// (0x0009878b) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x00099ca9) tport_contact_pane_t

0xe891,	// (0x00098799) list_tport_pane

0xe89a,	// (0x000987a2) scroll_pane_cp_030

0x880e,	// (0x00092716) cell_tport_appsw_pane_g1

0x881e,	// (0x00092726) cell_tport_appsw_pane_t1

0x882c,	// (0x00092734) grid_highlight_pane_cp019

0x8834,	// (0x0009273c) list_tport_double_graphic_pane_ParamLimits

0x8834,	// (0x0009273c) list_tport_double_graphic_pane

0xab1c,	// (0x00094a24) list_highlight_pane_cp023_ParamLimits

0xab1c,	// (0x00094a24) list_highlight_pane_cp023

0x8841,	// (0x00092749) list_tport_double_graphic_pane_g1_ParamLimits

0x8841,	// (0x00092749) list_tport_double_graphic_pane_g1

0x884e,	// (0x00092756) list_tport_double_graphic_pane_t1_ParamLimits

0x884e,	// (0x00092756) list_tport_double_graphic_pane_t1

0x8863,	// (0x0009276b) list_tport_double_graphic_pane_t2_ParamLimits

0x8863,	// (0x0009276b) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x00099cb5) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x00099cb5) list_tport_double_graphic_pane_t

0xa0f5,	// (0x00093ffd) main_cale_note_pane

0x68ca,	// (0x000907d2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x68ca,	// (0x000907d2) cell_vitu2_function_top_wide_pane_cp01

0x8160,	// (0x00092068) wait_bar_pane_cp05_ParamLimits

0xab1c,	// (0x00094a24) listscroll_cmail_pane

0xe8a3,	// (0x000987ab) list_cmail_pane

0x8875,	// (0x0009277d) list_cmail_body_pane

0x888a,	// (0x00092792) list_single_cmail_header_caption_pane

0x88a1,	// (0x000927a9) list_single_cmail_header_detail_pane_ParamLimits

0x88a1,	// (0x000927a9) list_single_cmail_header_detail_pane

0xe8b3,	// (0x000987bb) list_single_cmail_header_caption_pane_t1

0x0f8f,	// (0x0008ae97) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0f8f,	// (0x0008ae97) list_single_cmail_header_detail_pane_g1

0x9e90,	// (0x00093d98) list_single_cmail_header_detail_pane_g2_ParamLimits

0x9e90,	// (0x00093d98) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x00099cba) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x00099cba) list_single_cmail_header_detail_pane_g

0x9e9c,	// (0x00093da4) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9e9c,	// (0x00093da4) list_single_cmail_header_detail_pane_t1

0x9efc,	// (0x00093e04) list_single_cmail_header_editor_pane_bg_ParamLimits

0x9efc,	// (0x00093e04) list_single_cmail_header_editor_pane_bg

0xe358,	// (0x00098260) list_cmail_body_pane_g1

0xe8d7,	// (0x000987df) list_cmail_body_pane_t1

0xd72b,	// (0x00097633) list_single_cmail_header_editor_pane_bg_g1

0xacba,	// (0x00094bc2) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd73b,	// (0x00097643) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd733,	// (0x0009763b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd979,	// (0x00097881) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd75b,	// (0x00097663) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd74b,	// (0x00097653) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd753,	// (0x0009765b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac9a,	// (0x00094ba2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x88cb,	// (0x000927d3) calenote_gesture_pane_ParamLimits

0x88cb,	// (0x000927d3) calenote_gesture_pane

0x88eb,	// (0x000927f3) calenote_window_pane_ParamLimits

0x88eb,	// (0x000927f3) calenote_window_pane

0xe8e5,	// (0x000987ed) popup_note_window_cp01

0x8907,	// (0x0009280f) calenote_swipe_1_pane_ParamLimits

0x8907,	// (0x0009280f) calenote_swipe_1_pane

0x8524,	// (0x0009242c) calenote_swipe_2_pane_ParamLimits

0x8524,	// (0x0009242c) calenote_swipe_2_pane

0xe6c5,	// (0x000985cd) calenote_swipe_1_pane_g1_ParamLimits

0xe6c5,	// (0x000985cd) calenote_swipe_1_pane_g1

0xe6d2,	// (0x000985da) calenote_swipe_1_pane_g2_ParamLimits

0xe6d2,	// (0x000985da) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x00099bde) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x00099bde) calenote_swipe_1_pane_g

0xe8f7,	// (0x000987ff) calenote_swipe_1_pane_t1_ParamLimits

0xe8f7,	// (0x000987ff) calenote_swipe_1_pane_t1

0xe6c5,	// (0x000985cd) calenote_swipe_2_pane_g1_ParamLimits

0xe6c5,	// (0x000985cd) calenote_swipe_2_pane_g1

0xe916,	// (0x0009881e) calenote_swipe_2_pane_g2_ParamLimits

0xe916,	// (0x0009881e) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x00099cc6) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x00099cc6) calenote_swipe_2_pane_g

0xe922,	// (0x0009882a) calenote_swipe_2_pane_t1_ParamLimits

0xe922,	// (0x0009882a) calenote_swipe_2_pane_t1

0xa0f5,	// (0x00093ffd) main_mup_navstr_pane

0x558e,	// (0x0008f496) main_mup3_pane_t7_ParamLimits

0x558e,	// (0x0008f496) main_mup3_pane_t7

0x9aa8,	// (0x000939b0) main_mp4_pane_g6_ParamLimits

0x9aa8,	// (0x000939b0) main_mp4_pane_g6

0x9c4c,	// (0x00093b54) main_image3_pane_t4_ParamLimits

0x9c4c,	// (0x00093b54) main_image3_pane_t4

0x891c,	// (0x00092824) popup_navstr_preview_pane_ParamLimits

0x891c,	// (0x00092824) popup_navstr_preview_pane

0x8930,	// (0x00092838) scroll_navstr_pane_ParamLimits

0x8930,	// (0x00092838) scroll_navstr_pane

0xa0f5,	// (0x00093ffd) bg_popup_preview_window_pane_cp04

0xe949,	// (0x00098851) popup_navstr_preview_pane_t1

0x8944,	// (0x0009284c) scroll_navstr_pane_g1_ParamLimits

0x8944,	// (0x0009284c) scroll_navstr_pane_g1

0x8958,	// (0x00092860) scroll_navstr_pane_t1_ParamLimits

0x8958,	// (0x00092860) scroll_navstr_pane_t1

0xe8ee,	// (0x000987f6) bg_button_pane_cp014

0xe8ee,	// (0x000987f6) bg_button_pane_cp030

0x0a01,	// (0x0008a909) list_double_fisheye_pane_g4_ParamLimits

0x0a01,	// (0x0008a909) list_double_fisheye_pane_g4

0x0a0d,	// (0x0008a915) list_double_fisheye_pane_g5_ParamLimits

0x0a0d,	// (0x0008a915) list_double_fisheye_pane_g5

0xca5a,	// (0x00096962) sp_fs_scroll_pane_cp03

0xe7e5,	// (0x000986ed) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7f1,	// (0x000986f9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x00099bfb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7fd,	// (0x00098705) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe8ab,	// (0x000987b3) sp_fs_scroll_pane_cp02

0xa954,	// (0x0009485c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa954,	// (0x0009485c) popup_sp_fs_calendar_preview_list_single_pane

0xa0f5,	// (0x00093ffd) main_cam6_pano_pane

0xab1c,	// (0x00094a24) main_mup3_pane_ParamLimits

0xa0f5,	// (0x00093ffd) main_phacti_pane

0x8033,	// (0x00091f3b) bg_button_pane_cp11

0x804d,	// (0x00091f55) main_mobtv_info_pane_g2_ParamLimits

0x804d,	// (0x00091f55) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x00099b5b) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x00099b5b) main_mobtv_info_pane_g

0x822a,	// (0x00092132) sc_clock_pane_t5_ParamLimits

0x822a,	// (0x00092132) sc_clock_pane_t5

0x82f2,	// (0x000921fa) main_radioblah_pane_g1_ParamLimits

0xe5f6,	// (0x000984fe) main_radioblah_pane_t3_ParamLimits

0xe5f6,	// (0x000984fe) main_radioblah_pane_t3

0xe60e,	// (0x00098516) main_radioblah_pane_t4_ParamLimits

0xe60e,	// (0x00098516) main_radioblah_pane_t4

0x831a,	// (0x00092222) main_radioblah_text_pane_ParamLimits

0x831a,	// (0x00092222) main_radioblah_text_pane

0x832c,	// (0x00092234) main_radioblah_info_pane_g1_ParamLimits

0x83c5,	// (0x000922cd) main_radioblah_info_pane_t4_ParamLimits

0x83c5,	// (0x000922cd) main_radioblah_info_pane_t4

0xab1c,	// (0x00094a24) main_sp_fs_calendar_pane

0x896f,	// (0x00092877) main_phacti_pane_g1

0x8977,	// (0x0009287f) phacti_note_pane_ParamLimits

0x8977,	// (0x0009287f) phacti_note_pane

0xe960,	// (0x00098868) phacti_term_pane_ParamLimits

0xe960,	// (0x00098868) phacti_term_pane

0xe975,	// (0x0009887d) phacti_note_pane_t1_ParamLimits

0xe975,	// (0x0009887d) phacti_note_pane_t1

0x9f13,	// (0x00093e1b) phacti_term_pane_g1

0x9f1b,	// (0x00093e23) phacti_term_pane_t1_ParamLimits

0x9f1b,	// (0x00093e23) phacti_term_pane_t1

0xe98c,	// (0x00098894) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe994,	// (0x0009889c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x00099cd0) popup_sp_fs_calendar_preview_list_single_pane_g

0xe99c,	// (0x000988a4) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe99c,	// (0x000988a4) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9b2,	// (0x000988ba) aid_popup_sp_fs_bg_corner_pane

0xcd01,	// (0x00096c09) popup_sp_fs_calendar_preview_bg_pane_g1

0xa0f5,	// (0x00093ffd) popup_sp_fs_calendar_preview_bg_pane

0x2050,	// (0x0008bf58) popup_sp_fs_calendar_preview_list_pane

0xc8ed,	// (0x000967f5) bg_main_sp_fs_cale_pane_ParamLimits

0xc8ed,	// (0x000967f5) bg_main_sp_fs_cale_pane

0x9f4e,	// (0x00093e56) listscroll_cale_mrui_pane_ParamLimits

0x9f4e,	// (0x00093e56) listscroll_cale_mrui_pane

0x9f63,	// (0x00093e6b) listscroll_sp_fs_schedule_track_pane

0x9f6c,	// (0x00093e74) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x9f6c,	// (0x00093e74) main_sp_fs_ctrlbar_pane_cp01

0xe9ba,	// (0x000988c2) main_sp_fs_ribbon_pane

0x9f7f,	// (0x00093e87) popup_sp_fs_cale_preview_window

0x89ec,	// (0x000928f4) list_single_sp_fs_schedule_track_pane_ParamLimits

0x89ec,	// (0x000928f4) list_single_sp_fs_schedule_track_pane

0xab1c,	// (0x00094a24) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xab1c,	// (0x00094a24) bg_sp_fs_highlight_list_pane_cp03

0x8a00,	// (0x00092908) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8a00,	// (0x00092908) list_single_sp_fs_schedule_track_pane_g1

0x8a0c,	// (0x00092914) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8a0c,	// (0x00092914) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x00099cd5) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x00099cd5) list_single_sp_fs_schedule_track_pane_g

0x8a18,	// (0x00092920) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8a18,	// (0x00092920) list_single_sp_fs_schedule_track_pane_t1

0x8a32,	// (0x0009293a) sp_fs_schedule_track_pane_ParamLimits

0x8a32,	// (0x0009293a) sp_fs_schedule_track_pane

0xe9c2,	// (0x000988ca) sp_fs_schedule_track_pane_g1

0xe9ca,	// (0x000988d2) sp_fs_schedule_track_pane_g2

0xe9d2,	// (0x000988da) sp_fs_schedule_track_pane_g3

0xe9da,	// (0x000988e2) sp_fs_schedule_track_pane_g4

0xe9e2,	// (0x000988ea) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x00099cda) sp_fs_schedule_track_pane_g

0xd72b,	// (0x00097633) bg_sp_fs_schedule_viewer_highlight_g1

0xacba,	// (0x00094bc2) bg_sp_fs_schedule_viewer_highlight_g2

0xd733,	// (0x0009763b) bg_sp_fs_schedule_viewer_highlight_g3

0xd73b,	// (0x00097643) bg_sp_fs_schedule_viewer_highlight_g4

0xd979,	// (0x00097881) bg_sp_fs_schedule_viewer_highlight_g5

0xd74b,	// (0x00097653) bg_sp_fs_schedule_viewer_highlight_g6

0xd753,	// (0x0009765b) bg_sp_fs_schedule_viewer_highlight_g7

0xd75b,	// (0x00097663) bg_sp_fs_schedule_viewer_highlight_g8

0xac9a,	// (0x00094ba2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x00099ce5) bg_sp_fs_schedule_viewer_highlight_g

0xa0f5,	// (0x00093ffd) bg_main_sp_fs_ribbon_pane

0x8a43,	// (0x0009294b) main_sp_fs_ribbon_pane_g1

0xe9ea,	// (0x000988f2) main_sp_fs_ribbon_pane_t1

0x8a4c,	// (0x00092954) main_sp_fs_ribbon_pane_t2

0xe9f9,	// (0x00098901) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x00099cf8) main_sp_fs_ribbon_pane_t

0xea08,	// (0x00098910) main_sp_fs_ribbon_scheduler_pane

0xea10,	// (0x00098918) bg_main_sp_fs_ribbon_pane_g1

0xea19,	// (0x00098921) bg_main_sp_fs_ribbon_pane_g2

0xea22,	// (0x0009892a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x00099cff) bg_main_sp_fs_ribbon_pane_g

0xea2a,	// (0x00098932) main_sp_fs_ribbon_scheduler_pane_g1

0xea33,	// (0x0009893b) main_sp_fs_ribbon_scheduler_pane_g2

0xea3c,	// (0x00098944) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x00099d06) main_sp_fs_ribbon_scheduler_pane_g

0xea45,	// (0x0009894d) list_cale_mrui_pane

0x8a5b,	// (0x00092963) sp_fs_scroll_pane_cp07_ParamLimits

0x8a5b,	// (0x00092963) sp_fs_scroll_pane_cp07

0x8a77,	// (0x0009297f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8a77,	// (0x0009297f) bg_sp_fs_schedule_viewer_highlight

0xea52,	// (0x0009895a) list_single_sp_fs_schedule_track_pane_cp01

0xea5a,	// (0x00098962) list_sp_fs_schedule_track_pane

0xea62,	// (0x0009896a) sp_fs_scroll_pane_cp06_ParamLimits

0xea62,	// (0x0009896a) sp_fs_scroll_pane_cp06

0xcd01,	// (0x00096c09) bgmain_sp_fs_calendar_pane_g1

0x0fa7,	// (0x0008aeaf) list_single_cale_mrui_pane_ParamLimits

0x0fa7,	// (0x0008aeaf) list_single_cale_mrui_pane

0x9f91,	// (0x00093e99) list_single_cale_mrui_row_pane_ParamLimits

0x9f91,	// (0x00093e99) list_single_cale_mrui_row_pane

0x9f9e,	// (0x00093ea6) list_single_cale_mrui_row_pane_g1_ParamLimits

0x9f9e,	// (0x00093ea6) list_single_cale_mrui_row_pane_g1

0x9fd6,	// (0x00093ede) list_single_cale_mrui_row_pane_t1_ParamLimits

0x9fd6,	// (0x00093ede) list_single_cale_mrui_row_pane_t1

0x0fc8,	// (0x0008aed0) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0fc8,	// (0x0008aed0) list_single_cale_mrui_row_pane_t2

0x9fe8,	// (0x00093ef0) list_single_cale_mrui_row_pane_t3_ParamLimits

0x9fe8,	// (0x00093ef0) list_single_cale_mrui_row_pane_t3

0xa017,	// (0x00093f1f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa017,	// (0x00093f1f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x00099d14) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x00099d14) list_single_cale_mrui_row_pane_t

0x1030,	// (0x0008af38) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1030,	// (0x0008af38) list_single_cmail_header_editor_pane_bg_cp01

0x1056,	// (0x0008af5e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1056,	// (0x0008af5e) list_single_cmail_header_editor_pane_bg_cp02

0x8a87,	// (0x0009298f) main_radioblah_text_pane_t1_ParamLimits

0x8a87,	// (0x0009298f) main_radioblah_text_pane_t1

0xea81,	// (0x00098989) cam6_indi_pane_cp01

0xea89,	// (0x00098991) cam6_mode_pane_cp01

0xea91,	// (0x00098999) cam6_pano_pane

0xea9a,	// (0x000989a2) cam6_zoom_pane_cp01

0xeaa2,	// (0x000989aa) cam6_pano_image_pane

0xeaad,	// (0x000989b5) cam6_pano_pane_g1

0xe358,	// (0x00098260) cam6_pano_pane_g2

0xeab6,	// (0x000989be) cam6_pano_pane_g3

0xeabf,	// (0x000989c7) cam6_pano_pane_g4

0xd2ac,	// (0x000971b4) cam6_pano_pane_g5

0xeac8,	// (0x000989d0) cam6_pano_pane_g6

0xead2,	// (0x000989da) cam6_pano_pane_g7

0xeada,	// (0x000989e2) cam6_pano_pane_g8

0xeae3,	// (0x000989eb) cam6_pano_pane_g9

0x0008,

0x027d,	// (0x0008a185) cam6_pano_pane_g

0xa0f5,	// (0x00093ffd) main_browser_tag_pane

0xe941,	// (0x00098849) grid_navstr_albumart_pane

0xeaee,	// (0x000989f6) cell_navstr_albumart_pane_ParamLimits

0xeaee,	// (0x000989f6) cell_navstr_albumart_pane

0xeb0e,	// (0x00098a16) cell_navstr_albumart_pane_g1

0xc6be,	// (0x000965c6) cell_navstr_albumart_pane_g2

0xc6ce,	// (0x000965d6) cell_navstr_albumart_pane_g3

0xc6c6,	// (0x000965ce) cell_navstr_albumart_pane_g4

0x0003,

0x0290,	// (0x0008a198) cell_navstr_albumart_pane_g

0x8aa2,	// (0x000929aa) bt_list_pane_ParamLimits

0x8aa2,	// (0x000929aa) bt_list_pane

0x8ab6,	// (0x000929be) bt_list_pane_t1

0x8ac5,	// (0x000929cd) bt_list_pane_t2

0x0001,

0xfe15,	// (0x00099d1d) bt_list_pane_t

0xa0f5,	// (0x00093ffd) main_cale_prevew_pane

0x8ad4,	// (0x000929dc) popup_cale_preview_window_ParamLimits

0x8ad4,	// (0x000929dc) popup_cale_preview_window

0xab1c,	// (0x00094a24) bg_popup_preview_window_pane_cp05_ParamLimits

0xab1c,	// (0x00094a24) bg_popup_preview_window_pane_cp05

0xeb16,	// (0x00098a1e) list_cale_preview_pane_ParamLimits

0xeb16,	// (0x00098a1e) list_cale_preview_pane

0x8aed,	// (0x000929f5) list_double_cale_preview_pane_ParamLimits

0x8aed,	// (0x000929f5) list_double_cale_preview_pane

0xd763,	// (0x0009766b) list_single_cale_preview_pane_ParamLimits

0xd763,	// (0x0009766b) list_single_cale_preview_pane

0x8aff,	// (0x00092a07) list_single_cale_preview_pane_g1

0x8b07,	// (0x00092a0f) list_single_cale_preview_pane_t1_ParamLimits

0x8b07,	// (0x00092a0f) list_single_cale_preview_pane_t1

0x8b1c,	// (0x00092a24) list_double_cale_preview_pane_g1

0x8b24,	// (0x00092a2c) list_double_cale_preview_pane_t1_ParamLimits

0x8b24,	// (0x00092a2c) list_double_cale_preview_pane_t1

0x8b39,	// (0x00092a41) list_double_cale_preview_pane_t2_ParamLimits

0x8b39,	// (0x00092a41) list_double_cale_preview_pane_t2

0x0001,

0xfe1a,	// (0x00099d22) list_double_cale_preview_pane_t_ParamLimits

0xfe1a,	// (0x00099d22) list_double_cale_preview_pane_t

0xa0f5,	// (0x00093ffd) main_ezdial_pane

0xab1c,	// (0x00094a24) main_sp_fs_email_pane_ParamLimits

0x858a,	// (0x00092492) cmail_ddmenu_btn01_pane_ParamLimits

0x858a,	// (0x00092492) cmail_ddmenu_btn01_pane

0x859d,	// (0x000924a5) cmail_ddmenu_btn02_pane_ParamLimits

0x859d,	// (0x000924a5) cmail_ddmenu_btn02_pane

0x85c0,	// (0x000924c8) cmail_ddmenu_btn03_pane_ParamLimits

0x85c0,	// (0x000924c8) cmail_ddmenu_btn03_pane

0x85e6,	// (0x000924ee) main_sp_fs_ctrlbar_pane_ParamLimits

0x860a,	// (0x00092512) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8875,	// (0x0009277d) list_cmail_body_pane_ParamLimits

0xe8c1,	// (0x000987c9) bg_button_pane_cp12

0xe8ca,	// (0x000987d2) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8ca,	// (0x000987d2) list_single_cmail_header_detail_pane_g3

0x9ed8,	// (0x00093de0) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9ed8,	// (0x00093de0) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x00099cc1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x00099cc1) list_single_cmail_header_detail_pane_t

0x9f30,	// (0x00093e38) phacti_term_pane_t2_ParamLimits

0x9f30,	// (0x00093e38) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x00099ccb) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x00099ccb) phacti_term_pane_t

0xeb22,	// (0x00098a2a) aid_size_list_single_double

0x8b51,	// (0x00092a59) popup_ezdial_listscroll_window

0x8b6d,	// (0x00092a75) popup_number_entry_window_cp01

0xaa15,	// (0x0009491d) bg_popup_call_pane_cp09

0xeb2e,	// (0x00098a36) ezdial_list_pane

0xeb36,	// (0x00098a3e) scroll_pane_cp23

0xc8ed,	// (0x000967f5) bg_button_pane_cp028_ParamLimits

0xc8ed,	// (0x000967f5) bg_button_pane_cp028

0x8b7b,	// (0x00092a83) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8b7b,	// (0x00092a83) cmail_ddmenu_btn01_pane_g1

0x8b87,	// (0x00092a8f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8b87,	// (0x00092a8f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe1f,	// (0x00099d27) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe1f,	// (0x00099d27) cmail_ddmenu_btn01_pane_g

0xeb3e,	// (0x00098a46) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb3e,	// (0x00098a46) cmail_ddmenu_btn01_pane_t1

0xc8ed,	// (0x000967f5) bg_button_pane_cp029_ParamLimits

0xc8ed,	// (0x000967f5) bg_button_pane_cp029

0x8b93,	// (0x00092a9b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8b93,	// (0x00092a9b) cmail_ddmenu_btn02_pane_g1

0x8bac,	// (0x00092ab4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8bac,	// (0x00092ab4) cmail_ddmenu_btn02_pane_t1

0xab1c,	// (0x00094a24) bg_button_pane_cp031_ParamLimits

0xab1c,	// (0x00094a24) bg_button_pane_cp031

0x8b93,	// (0x00092a9b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8b93,	// (0x00092a9b) cmail_ddmenu_btn03_pane_g1

0x8bac,	// (0x00092ab4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8bac,	// (0x00092ab4) cmail_ddmenu_btn03_pane_t1

0x613f,	// (0x00090047) cell_dialer2_keypad_pane_t1_ParamLimits

0x6159,	// (0x00090061) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6159,	// (0x00090061) cell_dialer2_keypad_pane_t1_copy1

0x7e56,	// (0x00091d5e) ncimui_group_button_pane

0xab1c,	// (0x00094a24) main_sp_fs_calendar_pane_ParamLimits

0x888a,	// (0x00092792) list_single_cmail_header_caption_pane_ParamLimits

0x9f45,	// (0x00093e4d) aid_recal_txt_sm_pane

0xa0f5,	// (0x00093ffd) mian_recal_day_pane

0x9f7f,	// (0x00093e87) popup_sp_fs_cale_preview_window_ParamLimits

0xeb53,	// (0x00098a5b) list_recal_day_pane

0xa061,	// (0x00093f69) list_single_recal_day_pane_ParamLimits

0xa061,	// (0x00093f69) list_single_recal_day_pane

0xeb7a,	// (0x00098a82) list_single_recal_day_pane_g1_ParamLimits

0xeb7a,	// (0x00098a82) list_single_recal_day_pane_g1

0xa073,	// (0x00093f7b) list_single_recal_day_pane_g2_ParamLimits

0xa073,	// (0x00093f7b) list_single_recal_day_pane_g2

0xa07f,	// (0x00093f87) list_single_recal_day_pane_g3_ParamLimits

0xa07f,	// (0x00093f87) list_single_recal_day_pane_g3

0x1076,	// (0x0008af7e) list_single_recal_day_pane_g4_ParamLimits

0x1076,	// (0x0008af7e) list_single_recal_day_pane_g4

0xa08b,	// (0x00093f93) list_single_recal_day_pane_g5_ParamLimits

0xa08b,	// (0x00093f93) list_single_recal_day_pane_g5

0xa097,	// (0x00093f9f) list_single_recal_day_pane_g6_ParamLimits

0xa097,	// (0x00093f9f) list_single_recal_day_pane_g6

0x0004,

0xfe2e,	// (0x00099d36) list_single_recal_day_pane_g_ParamLimits

0xfe2e,	// (0x00099d36) list_single_recal_day_pane_g

0xa0ab,	// (0x00093fb3) list_single_recal_day_pane_t1

0xa0bd,	// (0x00093fc5) list_single_recal_day_pane_t2

0x0001,

0xfe39,	// (0x00099d41) list_single_recal_day_pane_t

0x8bd0,	// (0x00092ad8) ncimui_query_button_pane_ParamLimits

0x8bd0,	// (0x00092ad8) ncimui_query_button_pane

0x8be0,	// (0x00092ae8) ncimui_query_button_pane_t1_ParamLimits

0x8be0,	// (0x00092ae8) ncimui_query_button_pane_t1

0xeb86,	// (0x00098a8e) ncimui_query_button_pane_t2_ParamLimits

0xeb86,	// (0x00098a8e) ncimui_query_button_pane_t2

0x0001,

0xfe3e,	// (0x00099d46) ncimui_query_button_pane_t_ParamLimits

0xfe3e,	// (0x00099d46) ncimui_query_button_pane_t

0x8bf3,	// (0x00092afb) query_button_pane_ParamLimits

0x8bf3,	// (0x00092afb) query_button_pane

0xa0f5,	// (0x00093ffd) bg_button_pane_cp0028

0xeb99,	// (0x00098aa1) query_button_pane_t1

0x41a7,	// (0x0008e0af) main_tport_pane_ParamLimits

0x8739,	// (0x00092641) bg_popup_window_pane_cp01_ParamLimits

0x8739,	// (0x00092641) bg_popup_window_pane_cp01

0x8754,	// (0x0009265c) heading_pane_cp08_ParamLimits

0x8754,	// (0x0009265c) heading_pane_cp08

0x8767,	// (0x0009266f) heading_pane_cp07_ParamLimits

0x8767,	// (0x0009266f) heading_pane_cp07

0x880e,	// (0x00092716) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x00099cae) cell_tport_appsw_pane_g

0x3785,	// (0x0008d68d) input_candi_list_open_g1

0xae7d,	// (0x00094d85) list_cale_time_pane_g6_ParamLimits

0xae7d,	// (0x00094d85) list_cale_time_pane_g6

0x4f6f,	// (0x0008ee77) aid_size_touch_calib_1_ParamLimits

0x4f6f,	// (0x0008ee77) aid_size_touch_calib_1

0x4f81,	// (0x0008ee89) aid_size_touch_calib_2_ParamLimits

0x4f81,	// (0x0008ee89) aid_size_touch_calib_2

0x4f99,	// (0x0008eea1) aid_size_touch_calib_3_ParamLimits

0x4f99,	// (0x0008eea1) aid_size_touch_calib_3

0x4fb7,	// (0x0008eebf) aid_size_touch_calib_4_ParamLimits

0x4fb7,	// (0x0008eebf) aid_size_touch_calib_4

0x4fcf,	// (0x0008eed7) main_touch_calib_button_group_pane_ParamLimits

0x4fcf,	// (0x0008eed7) main_touch_calib_button_group_pane

0x4fe7,	// (0x0008eeef) main_touch_calib_pane_g1_ParamLimits

0x4ff9,	// (0x0008ef01) main_touch_calib_pane_g2_ParamLimits

0x500b,	// (0x0008ef13) main_touch_calib_pane_g3_ParamLimits

0x501d,	// (0x0008ef25) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0009966c) main_touch_calib_pane_g_ParamLimits

0x502f,	// (0x0008ef37) main_touch_calib_pane_t1_ParamLimits

0x5049,	// (0x0008ef51) main_touch_calib_pane_t2_ParamLimits

0x5063,	// (0x0008ef6b) main_touch_calib_pane_t3_ParamLimits

0x5077,	// (0x0008ef7f) main_touch_calib_pane_t4_ParamLimits

0x508b,	// (0x0008ef93) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x00099675) main_touch_calib_pane_t_ParamLimits

0xd04f,	// (0x00096f57) list_single_fp_cale_pane_g3_ParamLimits

0xd04f,	// (0x00096f57) list_single_fp_cale_pane_g3

0xab1c,	// (0x00094a24) bg_button_pane_cp012_ParamLimits

0xab1c,	// (0x00094a24) bg_vkb2_func_pane_cp03_ParamLimits

0x708c,	// (0x00090f94) cell_vitu2_function_top_pane_g1_ParamLimits

0xab1c,	// (0x00094a24) bg_vkb2_func_pane_cp04_ParamLimits

0x7de1,	// (0x00091ce9) main_ncimui_button_group_pane_ParamLimits

0x7de1,	// (0x00091ce9) main_ncimui_button_group_pane

0x7e41,	// (0x00091d49) main_ncimui_pane_t3_ParamLimits

0x7e41,	// (0x00091d49) main_ncimui_pane_t3

0xe957,	// (0x0009885f) phacti_button_group_pane

0xeb22,	// (0x00098a2a) aid_size_list_single_double_ParamLimits

0x8b51,	// (0x00092a59) popup_ezdial_listscroll_window_ParamLimits

0x8b6d,	// (0x00092a75) popup_number_entry_window_cp01_ParamLimits

0x8c06,	// (0x00092b0e) phacti_button_pane_ParamLimits

0x8c06,	// (0x00092b0e) phacti_button_pane

0xa0f5,	// (0x00093ffd) bg_button_pane_cp14

0xeba7,	// (0x00098aaf) phacti_button_pane_t1

0x8c17,	// (0x00092b1f) main_touch_calib_button_pane_ParamLimits

0x8c17,	// (0x00092b1f) main_touch_calib_button_pane

0xa83e,	// (0x00094746) bg_button_pane_cp18_ParamLimits

0xa83e,	// (0x00094746) bg_button_pane_cp18

0xebb5,	// (0x00098abd) main_touch_calib_button_pane_t1_ParamLimits

0xebb5,	// (0x00098abd) main_touch_calib_button_pane_t1

0xebcb,	// (0x00098ad3) main_touch_calib_button_pane_t2_ParamLimits

0xebcb,	// (0x00098ad3) main_touch_calib_button_pane_t2

0x0001,

0x02c7,	// (0x0008a1cf) main_touch_calib_button_pane_t_ParamLimits

0x02c7,	// (0x0008a1cf) main_touch_calib_button_pane_t

0xa0f5,	// (0x00093ffd) cell_ncimui_button_pane

0xa0f5,	// (0x00093ffd) bg_button_pane_cp032

0xebe9,	// (0x00098af1) cell_ncimui_button_pane_t1

0x9c2c,	// (0x00093b34) image3_infobar_pane_ParamLimits

0x9c2c,	// (0x00093b34) image3_infobar_pane

0x8256,	// (0x0009215e) fs_bigclock_status_pane_ParamLimits

0x8256,	// (0x0009215e) fs_bigclock_status_pane

0x8263,	// (0x0009216b) main_fs_bigclock_clock_pane_ParamLimits

0x8263,	// (0x0009216b) main_fs_bigclock_clock_pane

0x8281,	// (0x00092189) main_fs_bigclock_indi_pane_ParamLimits

0x8281,	// (0x00092189) main_fs_bigclock_indi_pane

0x82b3,	// (0x000921bb) main_fs_bigclock_swipe_pane_ParamLimits

0x82b3,	// (0x000921bb) main_fs_bigclock_swipe_pane

0xa0f5,	// (0x00093ffd) main_fs_clock_dumped_data

0xe465,	// (0x0009836d) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe465,	// (0x0009836d) list_single_fs_bigclock_indicator_pane_g1

0xe481,	// (0x00098389) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe481,	// (0x00098389) list_single_fs_bigclock_indicator_pane_g2

0xe49b,	// (0x000983a3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe49b,	// (0x000983a3) list_single_fs_bigclock_indicator_pane_g3

0xe4b5,	// (0x000983bd) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4b5,	// (0x000983bd) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x00099b8f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x00099b8f) list_single_fs_bigclock_indicator_pane_g

0xe4e0,	// (0x000983e8) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4e0,	// (0x000983e8) list_single_fs_bigclock_indicator_pane_t1

0xe508,	// (0x00098410) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe508,	// (0x00098410) list_single_fs_bigclock_indicator_pane_t2

0xe530,	// (0x00098438) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe530,	// (0x00098438) list_single_fs_bigclock_indicator_pane_t3

0xe558,	// (0x00098460) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe558,	// (0x00098460) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x00099b9a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x00099b9a) list_single_fs_bigclock_indicator_pane_t

0xebf7,	// (0x00098aff) image3_infobar_fav_pane_ParamLimits

0xebf7,	// (0x00098aff) image3_infobar_fav_pane

0xec07,	// (0x00098b0f) image3_infobar_loc_pane_ParamLimits

0xec07,	// (0x00098b0f) image3_infobar_loc_pane

0xec1b,	// (0x00098b23) image3_infobar_time_pane_ParamLimits

0xec1b,	// (0x00098b23) image3_infobar_time_pane

0xcd01,	// (0x00096c09) image3_infobar_time_pane_g1

0xec2b,	// (0x00098b33) image3_infobar_time_pane_t1

0xcd01,	// (0x00096c09) image3_infobar_loc_pane_g1

0xec39,	// (0x00098b41) image3_infobar_loc_pane_g2

0x0001,

0xfe43,	// (0x00099d4b) image3_infobar_loc_pane_g

0xec41,	// (0x00098b49) image3_infobar_loc_pane_t1

0xcd01,	// (0x00096c09) image3_infobar_fav_pane_g1

0xec4f,	// (0x00098b57) image3_infobar_fav_pane_g2

0x0001,

0xfe48,	// (0x00099d50) image3_infobar_fav_pane_g

0xec57,	// (0x00098b5f) fs_bigclock_status_battery_pane

0xec60,	// (0x00098b68) fs_bigclock_status_signal_pane

0xec69,	// (0x00098b71) fs_bigclock_status_title_pane

0xec72,	// (0x00098b7a) fs_bigclock_status_signal_pane_g1

0xec7b,	// (0x00098b83) fs_bigclock_status_signal_pane_g2

0x0001,

0x02d6,	// (0x0008a1de) fs_bigclock_status_signal_pane_g

0xec83,	// (0x00098b8b) fs_bigclock_status_battery_pane_g1

0xec8c,	// (0x00098b94) fs_bigclock_status_battery_pane_g2

0x0001,

0x02db,	// (0x0008a1e3) fs_bigclock_status_battery_pane_g

0xec94,	// (0x00098b9c) fs_bigclock_status_title_pane_t1

0x8c2c,	// (0x00092b34) main_fs_bigclock_clock_pane_g1

0x8c2c,	// (0x00092b34) main_fs_bigclock_clock_pane_g2

0x8c3d,	// (0x00092b45) main_fs_bigclock_clock_pane_g3

0x8c3d,	// (0x00092b45) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe4d,	// (0x00099d55) main_fs_bigclock_clock_pane_g

0x8c50,	// (0x00092b58) main_fs_bigclock_clock_pane_t1

0x8c66,	// (0x00092b6e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe56,	// (0x00099d5e) main_fs_bigclock_clock_pane_t

0xeca2,	// (0x00098baa) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeca2,	// (0x00098baa) list_single_fs_bigclock_indicator_pane

0xecb3,	// (0x00098bbb) list_single_fs_bigclock_pane_ParamLimits

0xecb3,	// (0x00098bbb) list_single_fs_bigclock_pane

0xecd9,	// (0x00098be1) main_fs_bigclock_indicator_pane_t1

0xece8,	// (0x00098bf0) list_single_fs_bigclock_pane_g1

0xecf0,	// (0x00098bf8) list_single_fs_bigclock_pane_t1

0xcd01,	// (0x00096c09) main_fs_bigclock_swipe_pane_g1

0xed33,	// (0x00098c3b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe62,	// (0x00099d6a) main_fs_bigclock_swipe_pane_g

0xed3b,	// (0x00098c43) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed3b,	// (0x00098c43) main_fs_bigclock_swipe_pane_t1

0x308c,	// (0x0008cf94) call_type_pane_ParamLimits

0xa0f5,	// (0x00093ffd) main_btmg_pane

0x9fca,	// (0x00093ed2) list_single_cale_mrui_row_pane_g2_ParamLimits

0x9fca,	// (0x00093ed2) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x00099d0d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x00099d0d) list_single_cale_mrui_row_pane_g

0xa050,	// (0x00093f58) list_recal_vselct_arw_lo_pane

0xeb72,	// (0x00098a7a) list_recal_vselct_arw_up_pane

0xa058,	// (0x00093f60) list_recal_vselct_pane

0x8cc0,	// (0x00092bc8) btmg_button_pane

0x8cca,	// (0x00092bd2) main_btmg_pane_g1

0xa0f5,	// (0x00093ffd) bg_button_pane_cp044

0xed58,	// (0x00098c60) btmg_button_pane_t1

0xc8d9,	// (0x000967e1) aid_listscroll_gen

0xab1c,	// (0x00094a24) main_cntbar_detail_pane

0xe8a3,	// (0x000987ab) list_cmail_folder_pane

0xca5a,	// (0x00096962) sp_fs_scroll_pane_cp03_ParamLimits

0x108e,	// (0x0008af96) list_single_fs_dyc_pane_cp01_ParamLimits

0x108e,	// (0x0008af96) list_single_fs_dyc_pane_cp01

0xed66,	// (0x00098c6e) aid_size_cmail_indent

0xa0cf,	// (0x00093fd7) list_single_dyc_row_pane_cp01

0x8d06,	// (0x00092c0e) cntbar_detail_list_pane_ParamLimits

0x8d06,	// (0x00092c0e) cntbar_detail_list_pane

0x8d52,	// (0x00092c5a) main_cntbar_detail_cont_pane_ParamLimits

0x8d52,	// (0x00092c5a) main_cntbar_detail_cont_pane

0xca5a,	// (0x00096962) scroll_pane_cp032_ParamLimits

0xca5a,	// (0x00096962) scroll_pane_cp032

0x8d66,	// (0x00092c6e) cntbar_detail_list_event_pane_ParamLimits

0x8d66,	// (0x00092c6e) cntbar_detail_list_event_pane

0x8d16,	// (0x00092c1e) cntbar_detail_list_shct_pane

0xad08,	// (0x00094c10) aid_list_gen

0xed6f,	// (0x00098c77) aid_scroll

0xed78,	// (0x00098c80) aid_size_touch_scroll_bar

0x767e,	// (0x00091586) aid_list_double

0x766c,	// (0x00091574) aid_list_single

0x766c,	// (0x00091574) aid_list_single_lg

0x10a4,	// (0x0008afac) aid_list_z_g_a_sm

0x8d76,	// (0x00092c7e) aid_list_z_g_d

0x10ac,	// (0x0008afb4) aid_txt_z_prm

0x10ba,	// (0x0008afc2) aid_txt_z_prm_cp01

0x10c8,	// (0x0008afd0) aid_txt_z_sec

0x8d7e,	// (0x00092c86) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8d7e,	// (0x00092c86) main_cntbar_detail_cont_pane_g1

0x8d92,	// (0x00092c9a) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8d92,	// (0x00092c9a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe67,	// (0x00099d6f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe67,	// (0x00099d6f) main_cntbar_detail_cont_pane_g

0xed81,	// (0x00098c89) main_cntbar_detail_cont_pane_t1

0xed8f,	// (0x00098c97) main_cntbar_detail_cont_pane_t2

0xed9d,	// (0x00098ca5) main_cntbar_detail_cont_pane_t3

0x0002,

0x0304,	// (0x0008a20c) main_cntbar_detail_cont_pane_t

0x8da2,	// (0x00092caa) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8da2,	// (0x00092caa) cell_cntbar_detail_list_shct_pane

0xedab,	// (0x00098cb3) cntbar_detail_list_shct_pane_g1

0xedb4,	// (0x00098cbc) cntbar_detail_list_shct_pane_g2

0x0001,

0x030b,	// (0x0008a213) cntbar_detail_list_shct_pane_g

0x8db6,	// (0x00092cbe) cntbar_detail_list_event_pane_g1_ParamLimits

0x8db6,	// (0x00092cbe) cntbar_detail_list_event_pane_g1

0x8dc2,	// (0x00092cca) cntbar_detail_list_event_pane_g2_ParamLimits

0x8dc2,	// (0x00092cca) cntbar_detail_list_event_pane_g2

0x0005,

0xfe6c,	// (0x00099d74) cntbar_detail_list_event_pane_g_ParamLimits

0xfe6c,	// (0x00099d74) cntbar_detail_list_event_pane_g

0x8e2e,	// (0x00092d36) cntbar_detail_list_event_pane_t1_ParamLimits

0x8e2e,	// (0x00092d36) cntbar_detail_list_event_pane_t1

0x8e43,	// (0x00092d4b) cntbar_detail_list_event_pane_t2_ParamLimits

0x8e43,	// (0x00092d4b) cntbar_detail_list_event_pane_t2

0x0002,

0xfe79,	// (0x00099d81) cntbar_detail_list_event_pane_t_ParamLimits

0xfe79,	// (0x00099d81) cntbar_detail_list_event_pane_t

0xcd01,	// (0x00096c09) cell_cntbar_detail_list_shct_pane_g1

0xb454,	// (0x0009535c) navi_pane_mv_g3

0xab1c,	// (0x00094a24) main_cntbar_detail_pane_ParamLimits

0xa0f5,	// (0x00093ffd) main_notif_wgt_pane

0x9a42,	// (0x0009394a) aid_tch_main_mp4_pane_g4

0x9c24,	// (0x00093b2c) popup_slider_window_cp02

0xa046,	// (0x00093f4e) list_recal_day_event_pane

0x8cd4,	// (0x00092bdc) cntbar_detail_btn_pane_ParamLimits

0x8cd4,	// (0x00092bdc) cntbar_detail_btn_pane

0x8ced,	// (0x00092bf5) cntbar_detail_btn_pane_cp01_ParamLimits

0x8ced,	// (0x00092bf5) cntbar_detail_btn_pane_cp01

0x8d16,	// (0x00092c1e) cntbar_detail_list_shct_pane_ParamLimits

0x8d26,	// (0x00092c2e) cntbar_detail_pane_g1_ParamLimits

0x8d26,	// (0x00092c2e) cntbar_detail_pane_g1

0x8d36,	// (0x00092c3e) cntbar_detail_pane_t1_ParamLimits

0x8d36,	// (0x00092c3e) cntbar_detail_pane_t1

0x8dce,	// (0x00092cd6) cntbar_detail_list_event_pane_g3_ParamLimits

0x8dce,	// (0x00092cd6) cntbar_detail_list_event_pane_g3

0x8de6,	// (0x00092cee) cntbar_detail_list_event_pane_g4_ParamLimits

0x8de6,	// (0x00092cee) cntbar_detail_list_event_pane_g4

0x8dfe,	// (0x00092d06) cntbar_detail_list_event_pane_g5_ParamLimits

0x8dfe,	// (0x00092d06) cntbar_detail_list_event_pane_g5

0x8e16,	// (0x00092d1e) cntbar_detail_list_event_pane_g6_ParamLimits

0x8e16,	// (0x00092d1e) cntbar_detail_list_event_pane_g6

0x8e58,	// (0x00092d60) cntbar_detail_list_event_pane_t3_ParamLimits

0x8e58,	// (0x00092d60) cntbar_detail_list_event_pane_t3

0x8e6a,	// (0x00092d72) popup_notif_wgt_window_ParamLimits

0x8e6a,	// (0x00092d72) popup_notif_wgt_window

0x8e83,	// (0x00092d8b) popup_submenu_window_cp01_ParamLimits

0x8e83,	// (0x00092d8b) popup_submenu_window_cp01

0xaa15,	// (0x0009491d) bg_popup_window_pane_cp10

0xedbd,	// (0x00098cc5) listscroll_notif_wgt_pane

0xedcf,	// (0x00098cd7) list_notif_wgt_window

0xedd8,	// (0x00098ce0) scroll_pane_cp033

0x8e95,	// (0x00092d9d) list_notif_wgt_row_pane_ParamLimits

0x8e95,	// (0x00092d9d) list_notif_wgt_row_pane

0xede1,	// (0x00098ce9) aid_size_list_notif_wgt_del

0xedee,	// (0x00098cf6) list_notif_wgt_row_pane_g1

0xedfa,	// (0x00098d02) list_notif_wgt_row_pane_g2

0xee09,	// (0x00098d11) list_notif_wgt_row_pane_g3

0x0002,

0x0324,	// (0x0008a22c) list_notif_wgt_row_pane_g

0xee16,	// (0x00098d1e) list_notif_wgt_row_pane_t1

0xee2c,	// (0x00098d34) list_notif_wgt_row_pane_t2

0xee3e,	// (0x00098d46) list_notif_wgt_row_pane_t3

0x0002,

0x032b,	// (0x0008a233) list_notif_wgt_row_pane_t

0xd981,	// (0x00097889) list_recal_day_event_pane_g1

0xee50,	// (0x00098d58) list_recal_day_event_pane_t1

0xa0f5,	// (0x00093ffd) bg_button_pane_cp045

0x8ea5,	// (0x00092dad) cntbar_detail_btn_pane_t1

0xc8ed,	// (0x000967f5) main_callh_pane_ParamLimits

0xc8ed,	// (0x000967f5) main_callh_pane

0xa0f5,	// (0x00093ffd) main_coverflow0_pane

0xa0f5,	// (0x00093ffd) main_wgtman_pane

0x82cb,	// (0x000921d3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x82cb,	// (0x000921d3) main_fs_bigclock_unlock_btn_pane

0x8806,	// (0x0009270e) bg_button_pane_cp16

0x8816,	// (0x0009271e) cell_tport_appsw_pane_g3

0x8eb3,	// (0x00092dbb) cf0_flow_pane_ParamLimits

0x8eb3,	// (0x00092dbb) cf0_flow_pane

0xee5f,	// (0x00098d67) listscroll_cf0_pane

0xee6a,	// (0x00098d72) main_cf0_pane_g1

0x8ec8,	// (0x00092dd0) main_cf0_pane_t1_ParamLimits

0x8ec8,	// (0x00092dd0) main_cf0_pane_t1

0x8edf,	// (0x00092de7) main_cf0_pane_t2_ParamLimits

0x8edf,	// (0x00092de7) main_cf0_pane_t2

0x0001,

0xfe80,	// (0x00099d88) main_cf0_pane_t_ParamLimits

0xfe80,	// (0x00099d88) main_cf0_pane_t

0xee7c,	// (0x00098d84) scroll_pane_cp11

0x8ef6,	// (0x00092dfe) cf0_flow_pane_g1

0x8efe,	// (0x00092e06) cf0_flow_pane_g2

0x0001,

0xfe85,	// (0x00099d8d) cf0_flow_pane_g

0x8f06,	// (0x00092e0e) cf0_flow_pane_t1

0xa0f5,	// (0x00093ffd) main_call6_pane

0xa0f5,	// (0x00093ffd) main_calllock_pane

0x8f14,	// (0x00092e1c) call6_btn_grp_pane_ParamLimits

0x8f14,	// (0x00092e1c) call6_btn_grp_pane

0x8f2e,	// (0x00092e36) call6_pane_g1_ParamLimits

0x8f2e,	// (0x00092e36) call6_pane_g1

0x8f44,	// (0x00092e4c) popup_call6_1st_window_ParamLimits

0x8f44,	// (0x00092e4c) popup_call6_1st_window

0x8f55,	// (0x00092e5d) popup_call6_2nd_window_ParamLimits

0x8f55,	// (0x00092e5d) popup_call6_2nd_window

0x8f66,	// (0x00092e6e) cell_call6_btn_pane_ParamLimits

0x8f66,	// (0x00092e6e) cell_call6_btn_pane

0xaa15,	// (0x0009491d) bg_popup_call2_in_pane_cp03

0xee87,	// (0x00098d8f) popup_call6_1st_window_g1

0xee8f,	// (0x00098d97) popup_call6_1st_window_g2

0xee97,	// (0x00098d9f) popup_call6_1st_window_g3

0x0002,

0x0341,	// (0x0008a249) popup_call6_1st_window_g

0xee9f,	// (0x00098da7) popup_call6_1st_window_t1

0xeeae,	// (0x00098db6) popup_call6_1st_window_t2

0xeebc,	// (0x00098dc4) popup_call6_1st_window_t3

0x0002,

0x0348,	// (0x0008a250) popup_call6_1st_window_t

0xaa15,	// (0x0009491d) bg_popup_call2_in_pane_cp04

0xee87,	// (0x00098d8f) popup_call6_2nd_window_g1

0xee8f,	// (0x00098d97) popup_call6_2nd_window_g2

0xee97,	// (0x00098d9f) popup_call6_2nd_window_g3

0x0002,

0x0341,	// (0x0008a249) popup_call6_2nd_window_g

0xee9f,	// (0x00098da7) popup_call6_2nd_window_t1

0xa0f5,	// (0x00093ffd) bg_button_pane_cp15

0xeeca,	// (0x00098dd2) cell_call6_btn_pane_g1

0xa0d8,	// (0x00093fe0) cell_call6_btn_pane_t1

0x8f7a,	// (0x00092e82) listscroll_wgtman_pane_ParamLimits

0x8f7a,	// (0x00092e82) listscroll_wgtman_pane

0x8f9b,	// (0x00092ea3) wgtman_btn_pane_ParamLimits

0x8f9b,	// (0x00092ea3) wgtman_btn_pane

0xb268,	// (0x00095170) aid_scroll_copy1

0xeed3,	// (0x00098ddb) list_wgtman_pane

0x8fde,	// (0x00092ee6) wgtman_btn_pane_g1_ParamLimits

0x8fde,	// (0x00092ee6) wgtman_btn_pane_g1

0x900a,	// (0x00092f12) wgtman_btn_pane_t1_ParamLimits

0x900a,	// (0x00092f12) wgtman_btn_pane_t1

0xeedd,	// (0x00098de5) wgtman_btn_pane_t2_ParamLimits

0xeedd,	// (0x00098de5) wgtman_btn_pane_t2

0x0001,

0xfe8a,	// (0x00099d92) wgtman_btn_pane_t_ParamLimits

0xfe8a,	// (0x00099d92) wgtman_btn_pane_t

0x9047,	// (0x00092f4f) listrow_wgtman_pane_ParamLimits

0x9047,	// (0x00092f4f) listrow_wgtman_pane

0x9059,	// (0x00092f61) listrow_wgtman_pane_g1

0x9066,	// (0x00092f6e) listrow_wgtman_pane_g2

0x0001,

0xfe8f,	// (0x00099d97) listrow_wgtman_pane_g

0x10d6,	// (0x0008afde) listrow_wgtman_pane_t1

0x10ee,	// (0x0008aff6) listrow_wgtman_pane_t2

0x0001,

0xfe94,	// (0x00099d9c) listrow_wgtman_pane_t

0x1114,	// (0x0008b01c) wait_bar_pane_cp09

0xeef4,	// (0x00098dfc) main_calllock_btn_pane

0xeefe,	// (0x00098e06) main_calllock_pane_g1

0xa0f5,	// (0x00093ffd) bg_button_pane_cp17

0xeeca,	// (0x00098dd2) main_calllock_btn_pane_g1

0xef0a,	// (0x00098e12) main_calllock_btn_pane_t1

0xa0f5,	// (0x00093ffd) main_dialer3_pane

0xa0f5,	// (0x00093ffd) main_fmrd2_pane

0xcd01,	// (0x00096c09) main_fs_bigclock_unlock_btn_pane_g1

0x908c,	// (0x00092f94) main_fs_bigclock_unlock_btn_pane_t1

0x909a,	// (0x00092fa2) area_fmrd2_info_pane_ParamLimits

0x909a,	// (0x00092fa2) area_fmrd2_info_pane

0x90ab,	// (0x00092fb3) area_fmrd2_visual_pane_ParamLimits

0x90ab,	// (0x00092fb3) area_fmrd2_visual_pane

0x90b9,	// (0x00092fc1) fmrd2_indi_pane_ParamLimits

0x90b9,	// (0x00092fc1) fmrd2_indi_pane

0x90c6,	// (0x00092fce) area_fmrd2_visual_pane_g1

0x90ce,	// (0x00092fd6) area_fmrd2_visual_pane_t1

0x90de,	// (0x00092fe6) area_fmrd2_visual_pane_t2

0x90ee,	// (0x00092ff6) area_fmrd2_visual_pane_t3

0x0002,

0xfe9e,	// (0x00099da6) area_fmrd2_visual_pane_t

0x90fe,	// (0x00093006) area_fmrd2_info_pane_g1

0x9106,	// (0x0009300e) area_fmrd2_info_pane_t1

0x9116,	// (0x0009301e) area_fmrd2_info_pane_t2

0x9126,	// (0x0009302e) area_fmrd2_info_pane_t3

0x9136,	// (0x0009303e) area_fmrd2_info_pane_t4

0x0003,

0xfea5,	// (0x00099dad) area_fmrd2_info_pane_t

0x9144,	// (0x0009304c) fmrd2_indi_pane_t1

0x9154,	// (0x0009305c) fmrd2_indi_pane_t2

0x9164,	// (0x0009306c) fmrd2_indi_pane_t3

0x0002,

0xfeae,	// (0x00099db6) fmrd2_indi_pane_t

0xe4c4,	// (0x000983cc) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4c4,	// (0x000983cc) list_single_fs_bigclock_indicator_pane_g5

0xe575,	// (0x0009847d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe575,	// (0x0009847d) list_single_fs_bigclock_indicator_pane_t5

0x898b,	// (0x00092893) aid_cell_bcale_month_pane_ParamLimits

0x898b,	// (0x00092893) aid_cell_bcale_month_pane

0x89a9,	// (0x000928b1) bcale_month_pane_ParamLimits

0x89a9,	// (0x000928b1) bcale_month_pane

0x89cd,	// (0x000928d5) bcale_preview_pane_ParamLimits

0x89cd,	// (0x000928d5) bcale_preview_pane

0xecf0,	// (0x00098bf8) list_single_fs_bigclock_pane_t1_ParamLimits

0xed0f,	// (0x00098c17) list_single_fs_bigclock_pane_t2_ParamLimits

0xed0f,	// (0x00098c17) list_single_fs_bigclock_pane_t2

0x0001,

0x02f5,	// (0x0008a1fd) list_single_fs_bigclock_pane_t_ParamLimits

0x02f5,	// (0x0008a1fd) list_single_fs_bigclock_pane_t

0x9084,	// (0x00092f8c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe99,	// (0x00099da1) main_fs_bigclock_unlock_btn_pane_g

0x9174,	// (0x0009307c) aid_dia3_key_size_ParamLimits

0x9174,	// (0x0009307c) aid_dia3_key_size

0x9183,	// (0x0009308b) aid_dia3_listrow_size_ParamLimits

0x9183,	// (0x0009308b) aid_dia3_listrow_size

0x9198,	// (0x000930a0) dia3_keypad_fun_pane_ParamLimits

0x9198,	// (0x000930a0) dia3_keypad_fun_pane

0x91b4,	// (0x000930bc) dia3_keypad_num_pane_ParamLimits

0x91b4,	// (0x000930bc) dia3_keypad_num_pane

0x91cf,	// (0x000930d7) dia3_listscroll_pane_ParamLimits

0x91cf,	// (0x000930d7) dia3_listscroll_pane

0x91e2,	// (0x000930ea) dia3_numentry_pane_ParamLimits

0x91e2,	// (0x000930ea) dia3_numentry_pane

0xef19,	// (0x00098e21) dia3_list_pane

0xef24,	// (0x00098e2c) scroll_pane_cp12

0xa0f5,	// (0x00093ffd) bg_dia3_numentry_pane

0x91f6,	// (0x000930fe) dia3_numentry_pane_t1

0x9205,	// (0x0009310d) cell_dia3_key_num_pane

0x920d,	// (0x00093115) cell_dia3_key0_fun_pane_ParamLimits

0x920d,	// (0x00093115) cell_dia3_key0_fun_pane

0x9221,	// (0x00093129) cell_dia3_key1_fun_pane_ParamLimits

0x9221,	// (0x00093129) cell_dia3_key1_fun_pane

0x9239,	// (0x00093141) dia3_listrow_pane

0xe217,	// (0x0009811f) bg_dia3_numentry_pane_g1

0xa0f5,	// (0x00093ffd) bg_button_pane_cp21

0xef2f,	// (0x00098e37) cell_dia3_key_num_pane_t1

0xef3d,	// (0x00098e45) cell_dia3_key_num_pane_t2

0xef4c,	// (0x00098e54) cell_dia3_key_num_pane_t3

0xef5b,	// (0x00098e63) cell_dia3_key_num_pane_t4

0x0003,

0x037a,	// (0x0008a282) cell_dia3_key_num_pane_t

0xa0f5,	// (0x00093ffd) bg_button_pane_cp19

0x924b,	// (0x00093153) cell_dia3_key0_fun_pane_g1

0xa0f5,	// (0x00093ffd) bg_button_pane_cp20

0x9253,	// (0x0009315b) cell_dia3_key1_fun_pane_g1

0x925b,	// (0x00093163) area_left_week_number_pane

0x9267,	// (0x0009316f) area_top_day_name_pane

0x927a,	// (0x00093182) frame_month_view_pane

0xef6a,	// (0x00098e72) grid_month_view_pane

0x928d,	// (0x00093195) cell_top_day_name_pane_ParamLimits

0x928d,	// (0x00093195) cell_top_day_name_pane

0x92ba,	// (0x000931c2) cell_area_left_week_number_pane_ParamLimits

0x92ba,	// (0x000931c2) cell_area_left_week_number_pane

0x92ce,	// (0x000931d6) cell_month_view_pane_ParamLimits

0x92ce,	// (0x000931d6) cell_month_view_pane

0xef78,	// (0x00098e80) frm_month_g1

0x92fb,	// (0x00093203) frm_month_g2

0x930e,	// (0x00093216) frm_month_g3

0x9321,	// (0x00093229) frm_month_g4

0x9334,	// (0x0009323c) frm_month_g5

0x9347,	// (0x0009324f) frm_month_g6

0x935a,	// (0x00093262) frm_month_g7

0xef85,	// (0x00098e8d) frm_month_g8

0x936d,	// (0x00093275) frm_month_g9

0x937d,	// (0x00093285) frm_month_g10

0x938d,	// (0x00093295) frm_month_g11

0x939d,	// (0x000932a5) frm_month_g12

0x93af,	// (0x000932b7) frm_month_g13

0x93c1,	// (0x000932c9) frm_month_g14

0x93d5,	// (0x000932dd) frm_month_g15

0x93e9,	// (0x000932f1) frm_month_g16

0x000f,

0xfeb5,	// (0x00099dbd) frm_month_g

0xef92,	// (0x00098e9a) cell_top_day_name_pane_t1

0x93fd,	// (0x00093305) cell_area_left_week_number_pane_g1

0x9409,	// (0x00093311) cell_area_left_week_number_pane_t1

0xcf4f,	// (0x00096e57) cell_month_view_pane_g1

0x941c,	// (0x00093324) cell_month_view_pane_t1

0xa0f5,	// (0x00093ffd) main_fps_pane

0xe7ad,	// (0x000986b5) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe7ad,	// (0x000986b5) cmail_ddmenu_btn02_pane_cp1

0xe7c9,	// (0x000986d1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7c9,	// (0x000986d1) cmail_ddmenu_btn02_pane_cp2

0x8b9f,	// (0x00092aa7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8b9f,	// (0x00092aa7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe24,	// (0x00099d2c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe24,	// (0x00099d2c) cmail_ddmenu_btn02_pane_g

0x8bbe,	// (0x00092ac6) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8bbe,	// (0x00092ac6) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe29,	// (0x00099d31) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe29,	// (0x00099d31) cmail_ddmenu_btn02_pane_t

0x942f,	// (0x00093337) fps_text_pane_ParamLimits

0x942f,	// (0x00093337) fps_text_pane

0x9446,	// (0x0009334e) main_fps_pane_g1_ParamLimits

0x9446,	// (0x0009334e) main_fps_pane_g1

0x9460,	// (0x00093368) wait_bar_pane_cp010_ParamLimits

0x9460,	// (0x00093368) wait_bar_pane_cp010

0x9471,	// (0x00093379) fps_text_pane_t1_ParamLimits

0x9471,	// (0x00093379) fps_text_pane_t1

0xd6ca,	// (0x000975d2) cam4_image_uncrop_pane_g1

0xd6d3,	// (0x000975db) cam4_image_uncrop_pane_g2

0x65e9,	// (0x000904f1) cam4_image_uncrop_pane_g3

0x65f2,	// (0x000904fa) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x00099809) cam4_image_uncrop_pane_g

0x9239,	// (0x00093141) dia3_listrow_pane_ParamLimits

0xa0f5,	// (0x00093ffd) main_phob2_pane

0x87d7,	// (0x000926df) cell_tport_appsw_pane_cp02_ParamLimits

0x87d7,	// (0x000926df) cell_tport_appsw_pane_cp02

0x87eb,	// (0x000926f3) cell_tport_appsw_pane_cp03_ParamLimits

0x87eb,	// (0x000926f3) cell_tport_appsw_pane_cp03

0xa0f5,	// (0x00093ffd) phob2_contact_card_pane

0xa0f5,	// (0x00093ffd) phob2_listscroll_pane

0xefa5,	// (0x00098ead) phob2_list_pane

0xefad,	// (0x00098eb5) scroll_pane_cp034

0x9489,	// (0x00093391) phob2_cc_data_pane_ParamLimits

0x9489,	// (0x00093391) phob2_cc_data_pane

0x94a8,	// (0x000933b0) phob2_cc_listscroll_pane_ParamLimits

0x94a8,	// (0x000933b0) phob2_cc_listscroll_pane

0x9047,	// (0x00092f4f) list_double_large_graphic_phob2_pane_ParamLimits

0x9047,	// (0x00092f4f) list_double_large_graphic_phob2_pane

0x94c6,	// (0x000933ce) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x94c6,	// (0x000933ce) list_double_large_graphic_phob2_pane_g1

0x1126,	// (0x0008b02e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1126,	// (0x0008b02e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfed6,	// (0x00099dde) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfed6,	// (0x00099dde) list_double_large_graphic_phob2_pane_g

0x1132,	// (0x0008b03a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1132,	// (0x0008b03a) list_double_large_graphic_phob2_pane_t1

0x1148,	// (0x0008b050) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1148,	// (0x0008b050) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfedb,	// (0x00099de3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfedb,	// (0x00099de3) list_double_large_graphic_phob2_pane_t

0xa0f5,	// (0x00093ffd) list_highlight_pane_cp024

0x94dc,	// (0x000933e4) phob2_cc_button_pane

0x94e4,	// (0x000933ec) phob2_cc_data_pane_g1_ParamLimits

0x94e4,	// (0x000933ec) phob2_cc_data_pane_g1

0x94f9,	// (0x00093401) phob2_cc_data_pane_g2_ParamLimits

0x94f9,	// (0x00093401) phob2_cc_data_pane_g2

0x0001,

0xfee0,	// (0x00099de8) phob2_cc_data_pane_g_ParamLimits

0xfee0,	// (0x00099de8) phob2_cc_data_pane_g

0x9509,	// (0x00093411) phob2_cc_data_pane_t1_ParamLimits

0x9509,	// (0x00093411) phob2_cc_data_pane_t1

0x9521,	// (0x00093429) phob2_cc_data_pane_t2_ParamLimits

0x9521,	// (0x00093429) phob2_cc_data_pane_t2

0x9539,	// (0x00093441) phob2_cc_data_pane_t3_ParamLimits

0x9539,	// (0x00093441) phob2_cc_data_pane_t3

0x0002,

0xfee5,	// (0x00099ded) phob2_cc_data_pane_t_ParamLimits

0xfee5,	// (0x00099ded) phob2_cc_data_pane_t

0xefb5,	// (0x00098ebd) phob2_cc_list_pane_ParamLimits

0xefb5,	// (0x00098ebd) phob2_cc_list_pane

0xda2a,	// (0x00097932) scroll_pane_cp035_ParamLimits

0xda2a,	// (0x00097932) scroll_pane_cp035

0xab1c,	// (0x00094a24) bg_button_pane_cp033

0xefc1,	// (0x00098ec9) phob2_cc_button_pane_g1

0xefcd,	// (0x00098ed5) phob2_cc_button_pane_t1

0xefe2,	// (0x00098eea) phob2_cc_button_pane_t2

0x0001,

0x03ba,	// (0x0008a2c2) phob2_cc_button_pane_t

0x9551,	// (0x00093459) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9551,	// (0x00093459) list_double_large_graphic_phob2_cc_pane

0x9564,	// (0x0009346c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9564,	// (0x0009346c) list_double_large_graphic_phob2_cc_pane_g1

0x115d,	// (0x0008b065) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x115d,	// (0x0008b065) list_double_large_graphic_phob2_cc_pane_g2

0x9570,	// (0x00093478) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9570,	// (0x00093478) list_double_large_graphic_phob2_cc_pane_g3

0x1169,	// (0x0008b071) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1169,	// (0x0008b071) list_double_large_graphic_phob2_cc_pane_g4

0x1175,	// (0x0008b07d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1175,	// (0x0008b07d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfeec,	// (0x00099df4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfeec,	// (0x00099df4) list_double_large_graphic_phob2_cc_pane_g

0x1181,	// (0x0008b089) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1181,	// (0x0008b089) list_double_large_graphic_phob2_cc_pane_t1

0x11aa,	// (0x0008b0b2) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x11aa,	// (0x0008b0b2) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfef7,	// (0x00099dff) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfef7,	// (0x00099dff) list_double_large_graphic_phob2_cc_pane_t

0xeff4,	// (0x00098efc) list_highlight_pane_cp025_ParamLimits

0xeff4,	// (0x00098efc) list_highlight_pane_cp025

0xab1c,	// (0x00094a24) bg_button_pane_cp033_ParamLimits

0xefc1,	// (0x00098ec9) phob2_cc_button_pane_g1_ParamLimits

0xefcd,	// (0x00098ed5) phob2_cc_button_pane_t1_ParamLimits

0xefe2,	// (0x00098eea) phob2_cc_button_pane_t2_ParamLimits

0x03ba,	// (0x0008a2c2) phob2_cc_button_pane_t_ParamLimits

0x141c,	// (0x0008b324) popup_wgtman_window

0xd845,	// (0x0009774d) scroll_pane_cp038

0x8fc0,	// (0x00092ec8) wgtman_btn_pane_cp_01_ParamLimits

0x8fc0,	// (0x00092ec8) wgtman_btn_pane_cp_01

0xf002,	// (0x00098f0a) wgtman_content_pane

0xf00b,	// (0x00098f13) wgtman_heading_pane

0xa0f5,	// (0x00093ffd) bg_heading_pane_cp02

0xf014,	// (0x00098f1c) wgtman_heading_pane_g1

0xf01c,	// (0x00098f24) wgtman_heading_pane_t1

0xf02a,	// (0x00098f32) scroll_pane_cp036

0xf032,	// (0x00098f3a) wgtman_list_pane

0xe660,	// (0x00098568) wgtman_list_pane_t1_ParamLimits

0xe660,	// (0x00098568) wgtman_list_pane_t1

0x9cb0,	// (0x00093bb8) cam4_grid_pane

0x079e,	// (0x0008a6a6) bg_button_pane_cp015_ParamLimits

0x7230,	// (0x00091138) bg_button_pane_cp016_ParamLimits

0x7243,	// (0x0009114b) bg_button_pane_cp017_ParamLimits

0x07e6,	// (0x0008a6ee) popup_vitu2_query_window_g3_ParamLimits

0x07e6,	// (0x0008a6ee) popup_vitu2_query_window_g3

0x0861,	// (0x0008a769) popup_vitu2_query_window_t6_ParamLimits

0x0861,	// (0x0008a769) popup_vitu2_query_window_t6

0x088c,	// (0x0008a794) popup_vitu2_query_window_t7_ParamLimits

0x088c,	// (0x0008a794) popup_vitu2_query_window_t7

0xd6ca,	// (0x000975d2) cam4_grid_pane_g1

0xd6d3,	// (0x000975db) cam4_grid_pane_g2

0xf03a,	// (0x00098f42) cam4_grid_pane_g3

0xf043,	// (0x00098f4b) cam4_grid_pane_g4

0x0003,

0xfefc,	// (0x00099e04) cam4_grid_pane_g

0x2250,	// (0x0008c158) aid_placing_vt_slider_lsc_ParamLimits

0x254d,	// (0x0008c455) vidtel_button_pane_ParamLimits

0x254d,	// (0x0008c455) vidtel_button_pane

0xa0f5,	// (0x00093ffd) bg_button_pane_cp034

0xf04e,	// (0x00098f56) vidtel_button_pane_g1

0xf056,	// (0x00098f5e) vidtel_button_pane_t1

0xd971,	// (0x00097879) aid_size_vtel_slider_touch

0xda2a,	// (0x00097932) scroll_pane_cp039

0x7fbf,	// (0x00091ec7) ncim_query_button_pane_cp01_ParamLimits

0x7fde,	// (0x00091ee6) ncimui_query_pane_g1_ParamLimits

0xab1c,	// (0x00094a24) input_focus_pane_cp012_ParamLimits

0xe25d,	// (0x00098165) ncim_query_entry_pane_t1_ParamLimits

0xda2a,	// (0x00097932) scroll_pane_cp039_ParamLimits

0xb33f,	// (0x00095247) navi_pane_bcale_mc_g1

0xb347,	// (0x0009524f) navi_pane_bcale_mc_t1

0xe812,	// (0x0009871a) main_sp_fs_email_pane_g1

0xe81e,	// (0x00098726) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x00099c00) main_sp_fs_email_pane_g

0xea74,	// (0x0009897c) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea74,	// (0x0009897c) list_single_cale_mrui_row_pane_g3

0x1084,	// (0x0008af8c) list_single_recal_day_pane_g5_event_pane

0xa0a3,	// (0x00093fab) list_single_recal_day_pane_g7

0xf06c,	// (0x00098f74) list_recal_day_event_pane_cp01

0xf075,	// (0x00098f7d) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x00098f85) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x00098f8d) list_recal_vselct_pane_cp01

0xd981,	// (0x00097889) list_recal_day_event_pane_cp01_g1

0xa0e7,	// (0x00093fef) list_recal_day_event_pane_cp01_t1

0xa0ab,	// (0x00093fb3) list_single_recal_day_pane_t1_ParamLimits

0xa0bd,	// (0x00093fc5) list_single_recal_day_pane_t2_ParamLimits

0xfe39,	// (0x00099d41) list_single_recal_day_pane_t_ParamLimits

0xa76d,	// (0x00094675) bg_notes_pane_ParamLimits

0xa81c,	// (0x00094724) list_notes_pane_ParamLimits

0x1760,	// (0x0008b668) scroll_pane_cp06_ParamLimits

0xa83e,	// (0x00094746) main_notes_pane_ParamLimits

0xa0f5,	// (0x00093ffd) main_welc_pane

0x957c,	// (0x00093484) main_welc_body_pane_ParamLimits

0x957c,	// (0x00093484) main_welc_body_pane

0x9599,	// (0x000934a1) main_welc_opti_pane_ParamLimits

0x9599,	// (0x000934a1) main_welc_opti_pane

0x95de,	// (0x000934e6) main_welc_pane_t1_ParamLimits

0x95de,	// (0x000934e6) main_welc_pane_t1

0x95fc,	// (0x00093504) main_welc_body_row_pane_ParamLimits

0x95fc,	// (0x00093504) main_welc_body_row_pane

0xdea3,	// (0x00097dab) main_welc_opti_row_pane_ParamLimits

0xdea3,	// (0x00097dab) main_welc_opti_row_pane

0xf08f,	// (0x00098f97) main_welc_opti_row_pane_g1

0x9611,	// (0x00093519) main_welc_opti_row_pane_t1

0xf097,	// (0x00098f9f) main_welc_body_row_pane_t1

0xedc7,	// (0x00098ccf) popup_notif_wgt_heading_pane

0xede1,	// (0x00098ce9) aid_size_list_notif_wgt_del_ParamLimits

0xedee,	// (0x00098cf6) list_notif_wgt_row_pane_g1_ParamLimits

0xedfa,	// (0x00098d02) list_notif_wgt_row_pane_g2_ParamLimits

0xee09,	// (0x00098d11) list_notif_wgt_row_pane_g3_ParamLimits

0x0324,	// (0x0008a22c) list_notif_wgt_row_pane_g_ParamLimits

0xee16,	// (0x00098d1e) list_notif_wgt_row_pane_t1_ParamLimits

0xee2c,	// (0x00098d34) list_notif_wgt_row_pane_t2_ParamLimits

0xee3e,	// (0x00098d46) list_notif_wgt_row_pane_t3_ParamLimits

0x032b,	// (0x0008a233) list_notif_wgt_row_pane_t_ParamLimits

0x9059,	// (0x00092f61) listrow_wgtman_pane_g1_ParamLimits

0x9066,	// (0x00092f6e) listrow_wgtman_pane_g2_ParamLimits

0xfe8f,	// (0x00099d97) listrow_wgtman_pane_g_ParamLimits

0x10d6,	// (0x0008afde) listrow_wgtman_pane_t1_ParamLimits

0x10ee,	// (0x0008aff6) listrow_wgtman_pane_t2_ParamLimits

0xfe94,	// (0x00099d9c) listrow_wgtman_pane_t_ParamLimits

0x1114,	// (0x0008b01c) wait_bar_pane_cp09_ParamLimits

0xa0f5,	// (0x00093ffd) bg_popup_heading_pane_cp02

0xf0a6,	// (0x00098fae) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x00098fb6) popup_notif_wgt_heading_pane_t1

0xa0f5,	// (0x00093ffd) main_vids_pane

0xa0f5,	// (0x00093ffd) vids_listscroll_pane

0x9620,	// (0x00093528) scroll_pane_cp040

0xa0f5,	// (0x00093ffd) vids_list_pane

0x962b,	// (0x00093533) vids_list_double_pane_ParamLimits

0x962b,	// (0x00093533) vids_list_double_pane

0x963c,	// (0x00093544) vids_list_double_pane_g1

0x9645,	// (0x0009354d) vids_list_double_pane_t1

0x9655,	// (0x0009355d) vids_list_double_pane_t2

0x0001,

0xff0a,	// (0x00099e12) vids_list_double_pane_t

0xab1c,	// (0x00094a24) main_ncimui_pane_ParamLimits

0x7df5,	// (0x00091cfd) main_ncimui_pane_g1_ParamLimits

0x7e01,	// (0x00091d09) main_ncimui_pane_g2_ParamLimits

0x7e01,	// (0x00091d09) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x00099b05) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x00099b05) main_ncimui_pane_g

0x95b4,	// (0x000934bc) main_welc_pane_g1_ParamLimits

0x95b4,	// (0x000934bc) main_welc_pane_g1

0x95c9,	// (0x000934d1) main_welc_pane_g2_ParamLimits

0x95c9,	// (0x000934d1) main_welc_pane_g2

0x0001,

0xff05,	// (0x00099e0d) main_welc_pane_g_ParamLimits

0xff05,	// (0x00099e0d) main_welc_pane_g

0xa76d,	// (0x00094675) listscroll_mce_pane_ParamLimits

0xb494,	// (0x0009539c) wait_bar_pane_cp10

0xc8e1,	// (0x000967e9) main_cale_day_pane_ParamLimits

0xc8e1,	// (0x000967e9) main_cale_week_pane_ParamLimits

0xa76d,	// (0x00094675) main_messa_pane_ParamLimits

0x5911,	// (0x0008f819) main_clock2_btn_pane_ParamLimits

0x5911,	// (0x0008f819) main_clock2_btn_pane

0xd0d7,	// (0x00096fdf) main_clock2_btn_pane_cp01_ParamLimits

0xd0d7,	// (0x00096fdf) main_clock2_btn_pane_cp01

0xea45,	// (0x0009894d) list_cale_mrui_pane_ParamLimits

0xee74,	// (0x00098d7c) main_cf0_pane_g2

0x0001,

0x0332,	// (0x0008a23a) main_cf0_pane_g

0x925b,	// (0x00093163) area_left_week_number_pane_ParamLimits

0x9267,	// (0x0009316f) area_top_day_name_pane_ParamLimits

0x927a,	// (0x00093182) frame_month_view_pane_ParamLimits

0xef6a,	// (0x00098e72) grid_month_view_pane_ParamLimits

0xef78,	// (0x00098e80) frm_month_g1_ParamLimits

0x92fb,	// (0x00093203) frm_month_g2_ParamLimits

0x930e,	// (0x00093216) frm_month_g3_ParamLimits

0x9321,	// (0x00093229) frm_month_g4_ParamLimits

0x9334,	// (0x0009323c) frm_month_g5_ParamLimits

0x9347,	// (0x0009324f) frm_month_g6_ParamLimits

0x935a,	// (0x00093262) frm_month_g7_ParamLimits

0xef85,	// (0x00098e8d) frm_month_g8_ParamLimits

0x936d,	// (0x00093275) frm_month_g9_ParamLimits

0x937d,	// (0x00093285) frm_month_g10_ParamLimits

0x938d,	// (0x00093295) frm_month_g11_ParamLimits

0x939d,	// (0x000932a5) frm_month_g12_ParamLimits

0x93af,	// (0x000932b7) frm_month_g13_ParamLimits

0x93c1,	// (0x000932c9) frm_month_g14_ParamLimits

0x93d5,	// (0x000932dd) frm_month_g15_ParamLimits

0x93e9,	// (0x000932f1) frm_month_g16_ParamLimits

0xfeb5,	// (0x00099dbd) frm_month_g_ParamLimits

0xef92,	// (0x00098e9a) cell_top_day_name_pane_t1_ParamLimits

0x93fd,	// (0x00093305) cell_area_left_week_number_pane_g1_ParamLimits

0x9409,	// (0x00093311) cell_area_left_week_number_pane_t1_ParamLimits

0xcf4f,	// (0x00096e57) cell_month_view_pane_g1_ParamLimits

0x941c,	// (0x00093324) cell_month_view_pane_t1_ParamLimits

0xa765,	// (0x0009466d) main_clock2_btn_pane_g1

0xf0bc,	// (0x00098fc4) main_clock2_btn_pane_t1

0xab1c,	// (0x00094a24) listscroll_cmail_pane_ParamLimits

0xe812,	// (0x0009871a) main_sp_fs_email_pane_g1_ParamLimits

0xe81e,	// (0x00098726) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x00099c00) main_sp_fs_email_pane_g_ParamLimits

0xeb53,	// (0x00098a5b) list_recal_day_pane_ParamLimits

0xeb64,	// (0x00098a6c) mian_recal_day_pane_t1

0x0cac,	// (0x0008abb4) list_single_dyc_row_text_pane_t4_ParamLimits

0x0cac,	// (0x0008abb4) list_single_dyc_row_text_pane_t4

0x0cf5,	// (0x0008abfd) list_single_dyc_row_text_pane_t5_ParamLimits

0x0cf5,	// (0x0008abfd) list_single_dyc_row_text_pane_t5

0x86b6,	// (0x000925be) list_single_dyc_row_text_pane_t6_ParamLimits

0x86b6,	// (0x000925be) list_single_dyc_row_text_pane_t6

0x2fd1,	// (0x0008ced9) aid_mgn_list_cale_time_pane

0xab1c,	// (0x00094a24) main_gallery2_pane_ParamLimits

0xd0ed,	// (0x00096ff5) main_clock2_pane_cp01_t1

0xd0fb,	// (0x00097003) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x000996df) main_clock2_pane_cp01_t

0x1ae7,	// (0x0008b9ef) cale_week_scroll_pane_g16_ParamLimits

0x1ae7,	// (0x0008b9ef) cale_week_scroll_pane_g16

0xaa15,	// (0x0009491d) vorec_slider_pane

0xf056,	// (0x00098f5e) vidtel_button_pane_t1_ParamLimits

0x8c2c,	// (0x00092b34) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8c2c,	// (0x00092b34) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8c3d,	// (0x00092b45) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8c3d,	// (0x00092b45) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe4d,	// (0x00099d55) main_fs_bigclock_clock_pane_g_ParamLimits

0x8c50,	// (0x00092b58) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8c66,	// (0x00092b6e) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe56,	// (0x00099d5e) main_fs_bigclock_clock_pane_t_ParamLimits

0x510c,	// (0x0008f014) main_mup3_lyrics_pane_ParamLimits

0x510c,	// (0x0008f014) main_mup3_lyrics_pane

0x968b,	// (0x00093593) main_mup3_lyrics_pane_t1_ParamLimits

0x968b,	// (0x00093593) main_mup3_lyrics_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
