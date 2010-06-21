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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00025e52 };

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
0x2261,	// (0x000280b3) Screen

0x226b,	// (0x000280bd) application_window

0x227f,	// (0x000280d1) area_bottom_pane_ParamLimits

0x227f,	// (0x000280d1) area_bottom_pane

0x0c3a,	// (0x00026a8c) area_top_pane_ParamLimits

0x0c3a,	// (0x00026a8c) area_top_pane

0xb5b7,	// (0x00031409) call_video_uplink_pane_ParamLimits

0xb5b7,	// (0x00031409) call_video_uplink_pane

0x0cba,	// (0x00026b0c) main_pane_ParamLimits

0x0cba,	// (0x00026b0c) main_pane

0xbfdc,	// (0x00031e2e) context_pane

0x6d83,	// (0x0002cbd5) navi_pane

0x6dac,	// (0x0002cbfe) popup_cale_events_window_ParamLimits

0x6dac,	// (0x0002cbfe) popup_cale_events_window

0xbfef,	// (0x00031e41) popup_mup_playback_window

0x6dc4,	// (0x0002cc16) signal_pane

0x2c35,	// (0x00028a87) main_browser_pane

0x336e,	// (0x000291c0) main_burst_pane

0xb5d3,	// (0x00031425) main_calc_pane

0xbf68,	// (0x00031dba) main_cale_day_pane

0x1119,	// (0x00026f6b) main_cale_month_pane

0xbf68,	// (0x00031dba) main_cale_week_pane

0x336e,	// (0x000291c0) main_call_pane

0x2723,	// (0x00028575) main_call_poc_pane

0x336e,	// (0x000291c0) main_camera_pane

0x336e,	// (0x000291c0) main_chi_dic_pane

0x4ff7,	// (0x0002ae49) main_clock_pane

0x2723,	// (0x00028575) main_fmradio_pane

0x336e,	// (0x000291c0) main_graph_messa_pane

0x2723,	// (0x00028575) main_help_pane

0x2c35,	// (0x00028a87) main_im_pane

0x297e,	// (0x000287d0) main_image_pane_ParamLimits

0x297e,	// (0x000287d0) main_image_pane

0x2723,	// (0x00028575) main_location2_pane

0x336e,	// (0x000291c0) main_location_pane

0x297e,	// (0x000287d0) main_messa_pane

0x2723,	// (0x00028575) main_mp2_pane

0x336e,	// (0x000291c0) main_mp_pane

0x2723,	// (0x00028575) main_msg_pane

0x2723,	// (0x00028575) main_mup_eq_pane

0x2723,	// (0x00028575) main_mup_pane

0x2c35,	// (0x00028a87) main_notes_pane

0x2723,	// (0x00028575) main_pec_pane

0x2723,	// (0x00028575) main_phob_pane

0x2723,	// (0x00028575) main_pinb_pane

0x2723,	// (0x00028575) main_postcard_pane

0x2723,	// (0x00028575) main_qdial_pane

0x336e,	// (0x000291c0) main_skin_pane

0x2723,	// (0x00028575) main_smil2_pane

0x336e,	// (0x000291c0) main_smil_pane

0x336e,	// (0x000291c0) main_video_pane

0x336e,	// (0x000291c0) main_video_tele_pane

0x297e,	// (0x000287d0) main_viewer_pane_ParamLimits

0x297e,	// (0x000287d0) main_viewer_pane

0x336e,	// (0x000291c0) main_vorec_pane

0x1167,	// (0x00026fb9) popup_blid_sat_info_window_ParamLimits

0x1167,	// (0x00026fb9) popup_blid_sat_info_window

0x11bd,	// (0x0002700f) popup_dyc_status_message_window_ParamLimits

0x11bd,	// (0x0002700f) popup_dyc_status_message_window

0x11d3,	// (0x00027025) popup_grid_large_graphic_window_ParamLimits

0x11d3,	// (0x00027025) popup_grid_large_graphic_window

0x1269,	// (0x000270bb) popup_loc_request_window_ParamLimits

0x1269,	// (0x000270bb) popup_loc_request_window

0x134d,	// (0x0002719f) popup_wml_address_window_ParamLimits

0x134d,	// (0x0002719f) popup_wml_address_window

0x6c11,	// (0x0002ca63) call_muted_g1

0x6122,	// (0x0002bf74) popup_call_audio_conf_window_ParamLimits

0x6122,	// (0x0002bf74) popup_call_audio_conf_window

0x6c21,	// (0x0002ca73) popup_call_audio_first_window_ParamLimits

0x6c21,	// (0x0002ca73) popup_call_audio_first_window

0x6c7f,	// (0x0002cad1) popup_call_audio_in_window_ParamLimits

0x6c7f,	// (0x0002cad1) popup_call_audio_in_window

0x6cab,	// (0x0002cafd) popup_call_audio_out_window_ParamLimits

0x6cab,	// (0x0002cafd) popup_call_audio_out_window

0x6cd9,	// (0x0002cb2b) popup_call_audio_second_window_ParamLimits

0x6cd9,	// (0x0002cb2b) popup_call_audio_second_window

0x6d1f,	// (0x0002cb71) popup_call_audio_wait_window_ParamLimits

0x6d1f,	// (0x0002cb71) popup_call_audio_wait_window

0x6d52,	// (0x0002cba4) popup_number_entry_window_ParamLimits

0x6d52,	// (0x0002cba4) popup_number_entry_window

0x22ba,	// (0x0002810c) bg_popup_call_pane_cp05_ParamLimits

0x22ba,	// (0x0002810c) bg_popup_call_pane_cp05

0x22da,	// (0x0002812c) popup_number_entry_window_t1

0x22ed,	// (0x0002813f) popup_number_entry_window_t2

0x22ff,	// (0x00028151) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x00034f18) popup_number_entry_window_t

0x2345,	// (0x00028197) text_title_cp2

0x2358,	// (0x000281aa) bg_popup_call_pane_cp_ParamLimits

0x2358,	// (0x000281aa) bg_popup_call_pane_cp

0x2366,	// (0x000281b8) call_thumbnail_pane

0x236e,	// (0x000281c0) popup_call_audio_in_window_g1_ParamLimits

0x236e,	// (0x000281c0) popup_call_audio_in_window_g1

0x237a,	// (0x000281cc) popup_call_audio_in_window_g2_ParamLimits

0x237a,	// (0x000281cc) popup_call_audio_in_window_g2

0x2386,	// (0x000281d8) popup_call_audio_in_window_g3_ParamLimits

0x2386,	// (0x000281d8) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x00034f21) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x00034f21) popup_call_audio_in_window_g

0x2392,	// (0x000281e4) popup_call_audio_in_window_t1_ParamLimits

0x2392,	// (0x000281e4) popup_call_audio_in_window_t1

0x23ad,	// (0x000281ff) popup_call_audio_in_window_t2_ParamLimits

0x23ad,	// (0x000281ff) popup_call_audio_in_window_t2

0x23c8,	// (0x0002821a) popup_call_audio_in_window_t3_ParamLimits

0x23c8,	// (0x0002821a) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x00034f28) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x00034f28) popup_call_audio_in_window_t

0x2358,	// (0x000281aa) bg_popup_call_pane_cp01_ParamLimits

0x2358,	// (0x000281aa) bg_popup_call_pane_cp01

0x2366,	// (0x000281b8) call_thumbnail_pane_cp02

0x23db,	// (0x0002822d) call_type_pane_cp022

0x23e3,	// (0x00028235) popup_call_audio_out_window_g1_ParamLimits

0x23e3,	// (0x00028235) popup_call_audio_out_window_g1

0x23f5,	// (0x00028247) popup_call_audio_out_window_g2_ParamLimits

0x23f5,	// (0x00028247) popup_call_audio_out_window_g2

0x2401,	// (0x00028253) popup_call_audio_out_window_g3_ParamLimits

0x2401,	// (0x00028253) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x00034f2f) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x00034f2f) popup_call_audio_out_window_g

0x2413,	// (0x00028265) popup_call_audio_out_window_t1_ParamLimits

0x2413,	// (0x00028265) popup_call_audio_out_window_t1

0x242b,	// (0x0002827d) popup_call_audio_out_window_t2_ParamLimits

0x242b,	// (0x0002827d) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x00034f36) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x00034f36) popup_call_audio_out_window_t

0x2440,	// (0x00028292) bg_popup_call_pane_ParamLimits

0x2440,	// (0x00028292) bg_popup_call_pane

0x24c4,	// (0x00028316) call_thumbnail_pane_cp_ParamLimits

0x24c4,	// (0x00028316) call_thumbnail_pane_cp

0x24e8,	// (0x0002833a) call_type_pane_cp01_ParamLimits

0x24e8,	// (0x0002833a) call_type_pane_cp01

0x252c,	// (0x0002837e) popup_call_audio_first_window_g1_ParamLimits

0x252c,	// (0x0002837e) popup_call_audio_first_window_g1

0x2578,	// (0x000283ca) popup_call_audio_first_window_g2_ParamLimits

0x2578,	// (0x000283ca) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x00034f3b) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x00034f3b) popup_call_audio_first_window_g

0x25bc,	// (0x0002840e) popup_call_audio_first_window_t1_ParamLimits

0x25bc,	// (0x0002840e) popup_call_audio_first_window_t1

0x2668,	// (0x000284ba) popup_call_audio_first_window_t4_ParamLimits

0x2668,	// (0x000284ba) popup_call_audio_first_window_t4

0x26f4,	// (0x00028546) popup_call_audio_first_window_t5_ParamLimits

0x26f4,	// (0x00028546) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x00034f40) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x00034f40) popup_call_audio_first_window_t

0x2723,	// (0x00028575) bg_popup_call_pane_cp02

0x272d,	// (0x0002857f) call_type_pane_cp023

0x2735,	// (0x00028587) popup_call_audio_wait_window_g1

0x273d,	// (0x0002858f) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x00034f47) popup_call_audio_wait_window_g

0x2745,	// (0x00028597) popup_call_audio_wait_window_t3

0x2753,	// (0x000285a5) bg_popup_call_pane_cp03_ParamLimits

0x2753,	// (0x000285a5) bg_popup_call_pane_cp03

0x27b3,	// (0x00028605) call_thumbnail_pane_cp011_ParamLimits

0x27b3,	// (0x00028605) call_thumbnail_pane_cp011

0x27bf,	// (0x00028611) call_type_pane_cp034_ParamLimits

0x27bf,	// (0x00028611) call_type_pane_cp034

0x27fb,	// (0x0002864d) popup_call_audio_second_window_g1_ParamLimits

0x27fb,	// (0x0002864d) popup_call_audio_second_window_g1

0x2837,	// (0x00028689) popup_call_audio_second_window_g2_ParamLimits

0x2837,	// (0x00028689) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x00034f4c) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x00034f4c) popup_call_audio_second_window_g

0x2873,	// (0x000286c5) popup_call_audio_second_window_t1_ParamLimits

0x2873,	// (0x000286c5) popup_call_audio_second_window_t1

0x28f4,	// (0x00028746) popup_call_audio_second_window_t2_ParamLimits

0x28f4,	// (0x00028746) popup_call_audio_second_window_t2

0x292a,	// (0x0002877c) popup_call_audio_second_window_t3_ParamLimits

0x292a,	// (0x0002877c) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x00034f51) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x00034f51) popup_call_audio_second_window_t

0x2723,	// (0x00028575) bg_popup_call_pane_cp04

0x2960,	// (0x000287b2) list_conf_pane

0x2968,	// (0x000287ba) popup_call_audio_conf_window_t1

0x2976,	// (0x000287c8) call_thumbnail_pane_g1

0x297e,	// (0x000287d0) bg_pinb_pane_ParamLimits

0x297e,	// (0x000287d0) bg_pinb_pane

0x298c,	// (0x000287de) find_pinb_pane

0x2995,	// (0x000287e7) listscroll_pinb_pane_ParamLimits

0x2995,	// (0x000287e7) listscroll_pinb_pane

0x29a4,	// (0x000287f6) pinb_bg_pane_g1

0x29ae,	// (0x00028800) pinb_bg_pane_g2

0x29b8,	// (0x0002880a) pinb_bg_pane_g3

0x29c2,	// (0x00028814) pinb_bg_pane_g4

0x29cc,	// (0x0002881e) pinb_bg_pane_g5

0x29d6,	// (0x00028828) pinb_bg_pane_g6

0x29df,	// (0x00028831) pinb_bg_pane_g7

0x29e8,	// (0x0002883a) pinb_bg_pane_g8

0x29f3,	// (0x00028845) pinb_bg_pane_g9

0x29fd,	// (0x0002884f) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x00034f58) pinb_bg_pane_g

0x2a18,	// (0x0002886a) grid_pinb_pane

0x2a21,	// (0x00028873) list_pinb_pane

0x2a2a,	// (0x0002887c) scroll_pane_cp01_ParamLimits

0x2a2a,	// (0x0002887c) scroll_pane_cp01

0x2a3c,	// (0x0002888e) find_pinb_pane_g1_ParamLimits

0x2a3c,	// (0x0002888e) find_pinb_pane_g1

0x2a54,	// (0x000288a6) find_pinb_pane_t1

0x2a66,	// (0x000288b8) find_pinb_pane_t2

0x0001,

0xf120,	// (0x00034f72) find_pinb_pane_t

0x2a7b,	// (0x000288cd) input_focus_pane_cp01_ParamLimits

0x2a7b,	// (0x000288cd) input_focus_pane_cp01

0x2a87,	// (0x000288d9) cell_pinb_pane_ParamLimits

0x2a87,	// (0x000288d9) cell_pinb_pane

0x2aa2,	// (0x000288f4) cell_pinb_pane_g1_ParamLimits

0x2aa2,	// (0x000288f4) cell_pinb_pane_g1

0x2ab2,	// (0x00028904) cell_pinb_pane_g2_ParamLimits

0x2ab2,	// (0x00028904) cell_pinb_pane_g2

0x2abe,	// (0x00028910) cell_pinb_pane_g3_ParamLimits

0x2abe,	// (0x00028910) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x00034f77) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x00034f77) cell_pinb_pane_g

0x2723,	// (0x00028575) grid_highlight_pane_cp01

0x2aca,	// (0x0002891c) list_pinb_item_pane_ParamLimits

0x2aca,	// (0x0002891c) list_pinb_item_pane

0x2723,	// (0x00028575) list_highlight_pane_cp02

0x2adc,	// (0x0002892e) list_pinb_item_pane_g1_ParamLimits

0x2adc,	// (0x0002892e) list_pinb_item_pane_g1

0x2ae9,	// (0x0002893b) list_pinb_item_pane_g2_ParamLimits

0x2ae9,	// (0x0002893b) list_pinb_item_pane_g2

0x2af5,	// (0x00028947) list_pinb_item_pane_g3_ParamLimits

0x2af5,	// (0x00028947) list_pinb_item_pane_g3

0x2b06,	// (0x00028958) list_pinb_item_pane_g4_ParamLimits

0x2b06,	// (0x00028958) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x00034f7e) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x00034f7e) list_pinb_item_pane_g

0x2b12,	// (0x00028964) list_pinb_item_pane_t1_ParamLimits

0x2b12,	// (0x00028964) list_pinb_item_pane_t1

0x0e25,	// (0x00026c77) calc_display_pane

0x0e41,	// (0x00026c93) calc_paper_pane

0x0e62,	// (0x00026cb4) grid_calc_pane

0x2723,	// (0x00028575) bg_list_pane_cp01

0x2b29,	// (0x0002897b) clock_g1

0x2b31,	// (0x00028983) clock_g2

0x0001,

0xf135,	// (0x00034f87) clock_g

0x2b39,	// (0x0002898b) clock_t1_ParamLimits

0x2b39,	// (0x0002898b) clock_t1

0x2b4e,	// (0x000289a0) clock_t2_ParamLimits

0x2b4e,	// (0x000289a0) clock_t2

0x2b60,	// (0x000289b2) clock_t3_ParamLimits

0x2b60,	// (0x000289b2) clock_t3

0x2b72,	// (0x000289c4) clock_t4_ParamLimits

0x2b72,	// (0x000289c4) clock_t4

0x2b84,	// (0x000289d6) clock_t5_ParamLimits

0x2b84,	// (0x000289d6) clock_t5

0x2b99,	// (0x000289eb) clock_t6_ParamLimits

0x2b99,	// (0x000289eb) clock_t6

0x2bab,	// (0x000289fd) clock_t7_ParamLimits

0x2bab,	// (0x000289fd) clock_t7

0x2bbd,	// (0x00028a0f) clock_t8_ParamLimits

0x2bbd,	// (0x00028a0f) clock_t8

0x2bcf,	// (0x00028a21) clock_t9_ParamLimits

0x2bcf,	// (0x00028a21) clock_t9

0x0008,

0xf13a,	// (0x00034f8c) clock_t_ParamLimits

0xf13a,	// (0x00034f8c) clock_t

0x2be1,	// (0x00028a33) popup_clock_analogue_window_cp02

0x2be1,	// (0x00028a33) popup_clock_digital_window_cp01

0x2be9,	// (0x00028a3b) listscroll_help_pane

0x2723,	// (0x00028575) phob_pre_status_pane

0x2bf3,	// (0x00028a45) grid_qdial_pane

0x297e,	// (0x000287d0) listscroll_mce_pane

0x297e,	// (0x000287d0) bg_notes_pane

0x2bfd,	// (0x00028a4f) list_notes_pane

0x2c0b,	// (0x00028a5d) scroll_pane_cp06

0x2c1d,	// (0x00028a6f) bg_calc_paper_pane

0xb5f3,	// (0x00031445) list_calc_pane

0x2c35,	// (0x00028a87) bg_calc_display_pane

0xb60d,	// (0x0003145f) calc_display_pane_t1

0xb622,	// (0x00031474) calc_display_pane_t2

0xb637,	// (0x00031489) calc_display_pane_t3

0x0002,

0xf14d,	// (0x00034f9f) calc_display_pane_t

0x0e7e,	// (0x00026cd0) cell_calc_pane_ParamLimits

0x0e7e,	// (0x00026cd0) cell_calc_pane

0x2c41,	// (0x00028a93) bg_calc_paper_pane_g1

0x2c4d,	// (0x00028a9f) bg_calc_paper_pane_g2

0x2c59,	// (0x00028aab) bg_calc_paper_pane_g3

0x2c65,	// (0x00028ab7) bg_calc_paper_pane_g4

0x2c71,	// (0x00028ac3) bg_calc_paper_pane_g5

0x2c7d,	// (0x00028acf) bg_calc_paper_pane_g6

0x2c8c,	// (0x00028ade) bg_calc_paper_pane_g7

0x2c9b,	// (0x00028aed) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x00034fa6) bg_calc_paper_pane_g

0x2caa,	// (0x00028afc) calc_bg_paper_pane_g9

0x2cb9,	// (0x00028b0b) list_calc_item_pane_ParamLimits

0x2cb9,	// (0x00028b0b) list_calc_item_pane

0x2ccd,	// (0x00028b1f) list_calc_item_pane_g1

0xb649,	// (0x0003149b) list_calc_item_pane_t1_ParamLimits

0xb649,	// (0x0003149b) list_calc_item_pane_t1

0x0eb1,	// (0x00026d03) list_calc_item_pane_t2_ParamLimits

0x0eb1,	// (0x00026d03) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x00034fb7) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x00034fb7) list_calc_item_pane_t

0x2cda,	// (0x00028b2c) cell_calc_pane_g1

0x2ce4,	// (0x00028b36) grid_highlight_pane_cp02

0x2d06,	// (0x00028b58) bg_calc_display_pane_g1

0xb65b,	// (0x000314ad) bg_calc_display_pane_g2

0x2d0f,	// (0x00028b61) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x00034fc1) bg_calc_display_pane_g

0x0edf,	// (0x00026d31) cell_qdial_pane_ParamLimits

0x0edf,	// (0x00026d31) cell_qdial_pane

0x2d18,	// (0x00028b6a) cell_qdial_pane_g1_ParamLimits

0x2d18,	// (0x00028b6a) cell_qdial_pane_g1

0x2d2e,	// (0x00028b80) cell_qdial_pane_g2_ParamLimits

0x2d2e,	// (0x00028b80) cell_qdial_pane_g2

0x2d3f,	// (0x00028b91) cell_qdial_pane_g3_ParamLimits

0x2d3f,	// (0x00028b91) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x00034fc8) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x00034fc8) cell_qdial_pane_g

0x2d61,	// (0x00028bb3) cell_qdial_pane_t1_ParamLimits

0x2d61,	// (0x00028bb3) cell_qdial_pane_t1

0x2d79,	// (0x00028bcb) cell_qdial_pane_t2_ParamLimits

0x2d79,	// (0x00028bcb) cell_qdial_pane_t2

0x2d8c,	// (0x00028bde) cell_qdial_pane_t3_ParamLimits

0x2d8c,	// (0x00028bde) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x00034fd1) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x00034fd1) cell_qdial_pane_t

0x2723,	// (0x00028575) grid_highlight_pane_cp04

0x2d9f,	// (0x00028bf1) thumbnail_qdial_pane_ParamLimits

0x2d9f,	// (0x00028bf1) thumbnail_qdial_pane

0x2dfb,	// (0x00028c4d) list_help_pane

0x2e05,	// (0x00028c57) scroll_pane_cp02

0x2e0e,	// (0x00028c60) help_list_pane_t1_ParamLimits

0x2e0e,	// (0x00028c60) help_list_pane_t1

0xb665,	// (0x000314b7) bg_notes_pane_g2

0xb66d,	// (0x000314bf) bg_notes_pane_g3

0xb675,	// (0x000314c7) notes_bg_pane_g1

0xb67d,	// (0x000314cf) notes_bg_pane_g4

0xb685,	// (0x000314d7) notes_bg_pane_g5

0xb68d,	// (0x000314df) notes_bg_pane_g6

0xb695,	// (0x000314e7) notes_bg_pane_g7

0xb69d,	// (0x000314ef) notes_bg_pane_g8

0xb6a5,	// (0x000314f7) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x00034fef) notes_bg_pane_g

0x2e2a,	// (0x00028c7c) list_notes_text_pane_ParamLimits

0x2e2a,	// (0x00028c7c) list_notes_text_pane

0x2e4d,	// (0x00028c9f) list_notes_text_pane_g1

0x2e56,	// (0x00028ca8) list_notes_text_pane_t1

0x2e75,	// (0x00028cc7) listscroll_cale_week_pane

0x2ea8,	// (0x00028cfa) bg_cale_heading_pane

0x2ec0,	// (0x00028d12) bg_cale_pane_cp01

0x2edd,	// (0x00028d2f) cale_week_corner_pane

0x2efc,	// (0x00028d4e) cale_week_day_heading_pane

0x2f19,	// (0x00028d6b) cale_week_scroll_pane_g1

0x2f2c,	// (0x00028d7e) cale_week_scroll_pane_g2

0x2f44,	// (0x00028d96) cale_week_scroll_pane_g3

0x2f5c,	// (0x00028dae) cale_week_scroll_pane_g4

0x2f74,	// (0x00028dc6) cale_week_scroll_pane_g5

0x2f8c,	// (0x00028dde) cale_week_scroll_pane_g6

0x2fa4,	// (0x00028df6) cale_week_scroll_pane_g7

0x2fbc,	// (0x00028e0e) cale_week_scroll_pane_g8

0x2fd8,	// (0x00028e2a) cale_week_scroll_pane_g9

0x2ff0,	// (0x00028e42) cale_week_scroll_pane_g10

0x3008,	// (0x00028e5a) cale_week_scroll_pane_g11

0x3020,	// (0x00028e72) cale_week_scroll_pane_g12

0x3038,	// (0x00028e8a) cale_week_scroll_pane_g13

0x3050,	// (0x00028ea2) cale_week_scroll_pane_g14

0x3068,	// (0x00028eba) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x00034ffe) cale_week_scroll_pane_g

0x309c,	// (0x00028eee) cale_week_time_pane

0x30b8,	// (0x00028f0a) grid_cale_week_pane

0x30e8,	// (0x00028f3a) scroll_pane_cp08

0x3105,	// (0x00028f57) cell_cale_week_pane_ParamLimits

0x3105,	// (0x00028f57) cell_cale_week_pane

0x317b,	// (0x00028fcd) cale_week_day_heading_pane_t1

0x31a5,	// (0x00028ff7) cale_week_day_heading_pane_t2

0x31d4,	// (0x00029026) cale_week_day_heading_pane_t3

0x3203,	// (0x00029055) cale_week_day_heading_pane_t4

0x3232,	// (0x00029084) cale_week_day_heading_pane_t5

0x3261,	// (0x000290b3) cale_week_day_heading_pane_t6

0x3290,	// (0x000290e2) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0003501f) cale_week_day_heading_pane_t

0x32ba,	// (0x0002910c) bg_cale_side_pane

0x0ef1,	// (0x00026d43) cale_week_time_pane_t1

0x0f2b,	// (0x00026d7d) cale_week_time_pane_t2

0x0f65,	// (0x00026db7) cale_week_time_pane_t3

0x0f9f,	// (0x00026df1) cale_week_time_pane_t4

0x0fd9,	// (0x00026e2b) cale_week_time_pane_t5

0x1013,	// (0x00026e65) cale_week_time_pane_t6

0x104d,	// (0x00026e9f) cale_week_time_pane_t7

0x1087,	// (0x00026ed9) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0003502e) cale_week_time_pane_t

0x32c8,	// (0x0002911a) cell_cale_week_pane_g2

0x32e7,	// (0x00029139) cell_cale_week_pane_g3_ParamLimits

0x32e7,	// (0x00029139) cell_cale_week_pane_g3

0x32ff,	// (0x00029151) grid_highlight_pane_cp07

0x3307,	// (0x00029159) listscroll_gms_pane

0x3311,	// (0x00029163) grid_gms_pane

0x331a,	// (0x0002916c) listscroll_gms_pane_g1

0x3322,	// (0x00029174) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0003503f) listscroll_gms_pane_g

0x332a,	// (0x0002917c) scroll_pane_cp010

0x3335,	// (0x00029187) cell_gms_pane_ParamLimits

0x3335,	// (0x00029187) cell_gms_pane

0x3345,	// (0x00029197) cell_gms_pane_g1

0x334d,	// (0x0002919f) cell_gms_pane_g2

0x2e4d,	// (0x00028c9f) cell_gms_pane_g3

0x3355,	// (0x000291a7) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x00035044) cell_gms_pane_g

0x335e,	// (0x000291b0) grid_highlight_pane_cp09

0x6bbf,	// (0x0002ca11) phob_pre_status_pane_g1

0x6bc7,	// (0x0002ca19) phob_pre_status_pane_g2

0x6bcf,	// (0x0002ca21) phob_pre_status_pane_g3

0x6bd7,	// (0x0002ca29) phob_pre_status_pane_g4

0x0004,

0xf5f0,	// (0x00035442) phob_pre_status_pane_g

0x6be7,	// (0x0002ca39) phob_pre_status_pane_t1

0x6bf5,	// (0x0002ca47) phob_pre_status_pane_t2

0x6c03,	// (0x0002ca55) phob_pre_status_pane_t3

0x0002,

0xf5fb,	// (0x0003544d) phob_pre_status_pane_t

0x336e,	// (0x000291c0) bg_list_pane_cp05

0x3376,	// (0x000291c8) grid_vorec_pane

0x337e,	// (0x000291d0) vorec_t1

0x338c,	// (0x000291de) vorec_t2

0x339a,	// (0x000291ec) vorec_t3

0x33a8,	// (0x000291fa) vorec_t4

0x223d,	// (0x0002808f) vorec_t5

0x224b,	// (0x0002809d) vorec_t6

0x0004,

0xf1fb,	// (0x0003504d) vorec_t

0x2259,	// (0x000280ab) wait_bar_pane_cp01

0x33c4,	// (0x00029216) cell_vorec_pane_ParamLimits

0x33c4,	// (0x00029216) cell_vorec_pane

0xb6ad,	// (0x000314ff) cell_vorec_pane_g1

0x2723,	// (0x00028575) grid_highlight_pane_cp05

0x33e9,	// (0x0002923b) cams_zoom_pane

0x33f8,	// (0x0002924a) image_vga_pane

0x3410,	// (0x00029262) main_camera_pane_g1

0x3420,	// (0x00029272) main_camera_pane_g2

0x3430,	// (0x00029282) main_camera_pane_g3

0x3440,	// (0x00029292) main_camera_pane_g4

0x3450,	// (0x000292a2) main_camera_pane_g5

0x3460,	// (0x000292b2) main_camera_pane_g6

0x3470,	// (0x000292c2) main_camera_pane_g7

0x0007,

0xf206,	// (0x00035058) main_camera_pane_g

0x348c,	// (0x000292de) main_camera_pane_t1

0x34a2,	// (0x000292f4) main_camera_pane_t2

0x0001,

0xf217,	// (0x00035069) main_camera_pane_t

0x34d4,	// (0x00029326) cams_zoom_pane_cp_ParamLimits

0x34d4,	// (0x00029326) cams_zoom_pane_cp

0x34fc,	// (0x0002934e) image_cif_pane_ParamLimits

0x34fc,	// (0x0002934e) image_cif_pane

0x352d,	// (0x0002937f) image_subqcif_pane

0x3535,	// (0x00029387) main_video_pane_g1_ParamLimits

0x3535,	// (0x00029387) main_video_pane_g1

0x3559,	// (0x000293ab) main_video_pane_g2_ParamLimits

0x3559,	// (0x000293ab) main_video_pane_g2

0x358d,	// (0x000293df) main_video_pane_g3_ParamLimits

0x358d,	// (0x000293df) main_video_pane_g3

0x35bb,	// (0x0002940d) main_video_pane_g4_ParamLimits

0x35bb,	// (0x0002940d) main_video_pane_g4

0x35e9,	// (0x0002943b) main_video_pane_g5_ParamLimits

0x35e9,	// (0x0002943b) main_video_pane_g5

0x3601,	// (0x00029453) main_video_pane_g6_ParamLimits

0x3601,	// (0x00029453) main_video_pane_g6

0x0006,

0xf21c,	// (0x0003506e) main_video_pane_g_ParamLimits

0xf21c,	// (0x0003506e) main_video_pane_g

0x362a,	// (0x0002947c) main_video_pane_t1_ParamLimits

0x362a,	// (0x0002947c) main_video_pane_t1

0x3673,	// (0x000294c5) cams_zoom_pane_g1

0x367c,	// (0x000294ce) cams_zoom_pane_g2

0x3685,	// (0x000294d7) cams_zoom_pane_g3

0x368e,	// (0x000294e0) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0003507d) cams_zoom_pane_g

0x36ab,	// (0x000294fd) grid_cams_pane

0x36c0,	// (0x00029512) linegrid_cams_pane

0x36d1,	// (0x00029523) cell_cams_pane_ParamLimits

0x36d1,	// (0x00029523) cell_cams_pane

0x36ef,	// (0x00029541) cams_burst_image_pane

0x36f7,	// (0x00029549) cell_cams_pane_g1

0x2723,	// (0x00028575) grid_highlight_pane_cp03

0x2cda,	// (0x00028b2c) mp_bg_pane_g1

0x2723,	// (0x00028575) bg_list_pane_cp03

0xbe8d,	// (0x00031cdf) bg_mp_pane

0xbe95,	// (0x00031ce7) grid_mp_pane

0xbe9d,	// (0x00031cef) media_player_g1

0xbea5,	// (0x00031cf7) media_player_t1

0xbeb3,	// (0x00031d05) media_player_t2

0xbec1,	// (0x00031d13) media_player_t3

0xbecf,	// (0x00031d21) media_player_t4

0xbedd,	// (0x00031d2f) media_player_t5

0xbeeb,	// (0x00031d3d) media_player_t6

0xbef9,	// (0x00031d4b) media_player_t7

0x0006,

0xf5da,	// (0x0003542c) media_player_t

0xbf07,	// (0x00031d59) wait_bar_pane_cp02

0xf5bf,	// (0x00035411) main_usb_pane_t

0x6bb6,	// (0x0002ca08) cell_mp_pane

0x2cda,	// (0x00028b2c) cell_mp_pane_g1

0x2723,	// (0x00028575) grid_highlight_pane_cp06

0x37ef,	// (0x00029641) grid_skin_colour_pane

0x37f7,	// (0x00029649) list_highlight_pane_cp03

0x37ff,	// (0x00029651) skin_g1

0x3807,	// (0x00029659) skin_t1

0x3816,	// (0x00029668) skin_t2

0x0001,

0xf260,	// (0x000350b2) skin_t

0x3824,	// (0x00029676) cell_skin_colour_pane_ParamLimits

0x3824,	// (0x00029676) cell_skin_colour_pane

0x383e,	// (0x00029690) cell_skin_colour_pane_g1

0x389f,	// (0x000296f1) call_video_g1_ParamLimits

0x389f,	// (0x000296f1) call_video_g1

0x38b5,	// (0x00029707) call_video_g2_ParamLimits

0x38b5,	// (0x00029707) call_video_g2

0x0001,

0xf265,	// (0x000350b7) call_video_g_ParamLimits

0xf265,	// (0x000350b7) call_video_g

0x38fd,	// (0x0002974f) call_video_uplink_pane_cp1_ParamLimits

0x38fd,	// (0x0002974f) call_video_uplink_pane_cp1

0x3962,	// (0x000297b4) call_video_uplink_pane_cp2

0x399a,	// (0x000297ec) video_down_crop_pane_ParamLimits

0x399a,	// (0x000297ec) video_down_crop_pane

0x3a5d,	// (0x000298af) video_down_pane_ParamLimits

0x3a5d,	// (0x000298af) video_down_pane

0x3b07,	// (0x00029959) video_down_subqcif_pane_ParamLimits

0x3b07,	// (0x00029959) video_down_subqcif_pane

0x3b1f,	// (0x00029971) video_down_subqcif_pane_cp_ParamLimits

0x3b1f,	// (0x00029971) video_down_subqcif_pane_cp

0x3b56,	// (0x000299a8) im_reading_pane_ParamLimits

0x3b56,	// (0x000299a8) im_reading_pane

0x3b68,	// (0x000299ba) im_writing_pane_ParamLimits

0x3b68,	// (0x000299ba) im_writing_pane

0x3b86,	// (0x000299d8) im_reading_pane_t1

0x3bbc,	// (0x00029a0e) list_im_pane

0x3bcd,	// (0x00029a1f) scroll_pane_cp07

0x3be6,	// (0x00029a38) im_writing_pane_t1_ParamLimits

0x3be6,	// (0x00029a38) im_writing_pane_t1

0x3bfb,	// (0x00029a4d) im_writing_pane_t2_ParamLimits

0x3bfb,	// (0x00029a4d) im_writing_pane_t2

0x0001,

0xf26f,	// (0x000350c1) im_writing_pane_t_ParamLimits

0xf26f,	// (0x000350c1) im_writing_pane_t

0x2723,	// (0x00028575) input_focus_pane_cp04

0x2723,	// (0x00028575) input_focus_pane_cp05

0x3c18,	// (0x00029a6a) list_im_single_pane_ParamLimits

0x3c18,	// (0x00029a6a) list_im_single_pane

0x3c2e,	// (0x00029a80) list_single_im_pane_t1

0x6b7c,	// (0x0002c9ce) blid_accuracy_pane

0x6b84,	// (0x0002c9d6) blid_compass_pane

0x6b8c,	// (0x0002c9de) main_location_t1

0x6b9a,	// (0x0002c9ec) main_location_t2

0x6ba8,	// (0x0002c9fa) main_location_t3

0x0002,

0xf5e9,	// (0x0003543b) main_location_t

0x2723,	// (0x00028575) aid_levels_location

0x2cda,	// (0x00028b2c) blid_accuracy_pane_g1

0x2cda,	// (0x00028b2c) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x00035123) blid_accuracy_pane_g

0x3c68,	// (0x00029aba) wml_content_pane

0x3ca6,	// (0x00029af8) wml_button_pane_ParamLimits

0x3ca6,	// (0x00029af8) wml_button_pane

0x3cba,	// (0x00029b0c) wml_list_single_large_pane_ParamLimits

0x3cba,	// (0x00029b0c) wml_list_single_large_pane

0x3cce,	// (0x00029b20) wml_list_single_medium_pane_ParamLimits

0x3cce,	// (0x00029b20) wml_list_single_medium_pane

0x3ce3,	// (0x00029b35) wml_list_single_small_pane_ParamLimits

0x3ce3,	// (0x00029b35) wml_list_single_small_pane

0x3cfa,	// (0x00029b4c) wml_selection_box_pane_ParamLimits

0x3cfa,	// (0x00029b4c) wml_selection_box_pane

0x3d0d,	// (0x00029b5f) wml_list_single_pane_t1

0x3d1c,	// (0x00029b6e) wml_list_single_medium_pane_t1

0x3d2b,	// (0x00029b7d) wml_list_single_large_pane_t1

0x3d3a,	// (0x00029b8c) input_focus_pane_cp02_ParamLimits

0x3d3a,	// (0x00029b8c) input_focus_pane_cp02

0x3d4d,	// (0x00029b9f) wml_selection_box_pane_g1

0x3d56,	// (0x00029ba8) wml_selection_box_pane_t1_ParamLimits

0x3d56,	// (0x00029ba8) wml_selection_box_pane_t1

0x297e,	// (0x000287d0) bg_wml_button_pane_ParamLimits

0x297e,	// (0x000287d0) bg_wml_button_pane

0x3d6e,	// (0x00029bc0) wml_button_pane_g1

0x3d76,	// (0x00029bc8) wml_button_pane_t1

0x3d6e,	// (0x00029bc0) wml_button_bg_pane_g1

0x3d86,	// (0x00029bd8) wml_button_bg_pane_g2

0x3d8e,	// (0x00029be0) wml_button_bg_pane_g3

0x3d96,	// (0x00029be8) wml_button_bg_pane_g4

0x3d9e,	// (0x00029bf0) wml_button_bg_pane_g5

0x3da6,	// (0x00029bf8) wml_button_bg_pane_g6

0x3dae,	// (0x00029c00) wml_button_bg_pane_g7

0x3db6,	// (0x00029c08) wml_button_bg_pane_g8

0x3dbe,	// (0x00029c10) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x000350c6) wml_button_bg_pane_g

0x3dc6,	// (0x00029c18) bg_list_pane_cp02

0x3dcf,	// (0x00029c21) mce_header_pane_ParamLimits

0x3dcf,	// (0x00029c21) mce_header_pane

0x3de3,	// (0x00029c35) mce_icon_pane

0x3de3,	// (0x00029c35) mce_image_pane

0x3dec,	// (0x00029c3e) mce_text_pane_ParamLimits

0x3dec,	// (0x00029c3e) mce_text_pane

0x3e00,	// (0x00029c52) scroll_pane_cp03

0x3e00,	// (0x00029c52) scroll_pane_cp04

0x3e0a,	// (0x00029c5c) scroll_pane_cp05_ParamLimits

0x3e0a,	// (0x00029c5c) scroll_pane_cp05

0x3e16,	// (0x00029c68) mce_header_field_pane_ParamLimits

0x3e16,	// (0x00029c68) mce_header_field_pane

0x3e2d,	// (0x00029c7f) mce_header_field_pane_2_ParamLimits

0x3e2d,	// (0x00029c7f) mce_header_field_pane_2

0x3e43,	// (0x00029c95) mce_header_field_pane_3

0x3e4b,	// (0x00029c9d) list_single_mce_message_pane_ParamLimits

0x3e4b,	// (0x00029c9d) list_single_mce_message_pane

0x3e60,	// (0x00029cb2) list_single_mce_smart_pane_ParamLimits

0x3e60,	// (0x00029cb2) list_single_mce_smart_pane

0x3e80,	// (0x00029cd2) input_focus_pane_cp03

0x3e89,	// (0x00029cdb) list_header_data_pane

0x3e91,	// (0x00029ce3) mce_header_field_pane_t1

0x3e9f,	// (0x00029cf1) list_single_mce_header_pane_ParamLimits

0x3e9f,	// (0x00029cf1) list_single_mce_header_pane

0x3eb3,	// (0x00029d05) list_single_mce_header_pane_t1

0x3ec2,	// (0x00029d14) list_single_mce_message_pane_g1

0x3ecb,	// (0x00029d1d) list_single_mce_message_pane_t1

0x3f00,	// (0x00029d52) bg_cale_heading_pane_cp01_ParamLimits

0x3f00,	// (0x00029d52) bg_cale_heading_pane_cp01

0x3f2f,	// (0x00029d81) bg_cale_pane_cp02_ParamLimits

0x3f2f,	// (0x00029d81) bg_cale_pane_cp02

0x3f5c,	// (0x00029dae) cale_month_corner_pane

0x3f7b,	// (0x00029dcd) cale_month_day_heading_pane_ParamLimits

0x3f7b,	// (0x00029dcd) cale_month_day_heading_pane

0x3fb2,	// (0x00029e04) cale_month_pane_g1_ParamLimits

0x3fb2,	// (0x00029e04) cale_month_pane_g1

0x3fd6,	// (0x00029e28) cale_month_pane_g2_ParamLimits

0x3fd6,	// (0x00029e28) cale_month_pane_g2

0x3ffe,	// (0x00029e50) cale_month_pane_g3_ParamLimits

0x3ffe,	// (0x00029e50) cale_month_pane_g3

0x403a,	// (0x00029e8c) cale_month_pane_g4_ParamLimits

0x403a,	// (0x00029e8c) cale_month_pane_g4

0x4076,	// (0x00029ec8) cale_month_pane_g5_ParamLimits

0x4076,	// (0x00029ec8) cale_month_pane_g5

0x40b2,	// (0x00029f04) cale_month_pane_g6_ParamLimits

0x40b2,	// (0x00029f04) cale_month_pane_g6

0x40ee,	// (0x00029f40) cale_month_pane_g7_ParamLimits

0x40ee,	// (0x00029f40) cale_month_pane_g7

0x412a,	// (0x00029f7c) cale_month_pane_g8_ParamLimits

0x412a,	// (0x00029f7c) cale_month_pane_g8

0x416e,	// (0x00029fc0) cale_month_pane_g9_ParamLimits

0x416e,	// (0x00029fc0) cale_month_pane_g9

0x41b0,	// (0x0002a002) cale_month_pane_g10_ParamLimits

0x41b0,	// (0x0002a002) cale_month_pane_g10

0x41f2,	// (0x0002a044) cale_month_pane_g11_ParamLimits

0x41f2,	// (0x0002a044) cale_month_pane_g11

0x4234,	// (0x0002a086) cale_month_pane_g12_ParamLimits

0x4234,	// (0x0002a086) cale_month_pane_g12

0x4276,	// (0x0002a0c8) cale_month_pane_g13_ParamLimits

0x4276,	// (0x0002a0c8) cale_month_pane_g13

0x000c,

0xf287,	// (0x000350d9) cale_month_pane_g_ParamLimits

0xf287,	// (0x000350d9) cale_month_pane_g

0x42ca,	// (0x0002a11c) cale_month_week_pane

0x42e6,	// (0x0002a138) grid_cale_month_pane_ParamLimits

0x42e6,	// (0x0002a138) grid_cale_month_pane

0x4314,	// (0x0002a166) cale_month_day_heading_pane_t1

0x439a,	// (0x0002a1ec) cale_month_day_heading_pane_t2

0x442b,	// (0x0002a27d) cale_month_day_heading_pane_t3

0x44bc,	// (0x0002a30e) cale_month_day_heading_pane_t4

0x454d,	// (0x0002a39f) cale_month_day_heading_pane_t5

0x45de,	// (0x0002a430) cale_month_day_heading_pane_t6

0x466f,	// (0x0002a4c1) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x000350f4) cale_month_day_heading_pane_t

0x32ba,	// (0x0002910c) bg_cale_side_pane_cp01

0x4704,	// (0x0002a556) cale_month_week_pane_t1

0x471d,	// (0x0002a56f) cale_month_week_pane_t2

0x4736,	// (0x0002a588) cale_month_week_pane_t3

0x474f,	// (0x0002a5a1) cale_month_week_pane_t4

0x4768,	// (0x0002a5ba) cale_month_week_pane_t5

0x4781,	// (0x0002a5d3) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x00035103) cale_month_week_pane_t

0x479a,	// (0x0002a5ec) cell_cale_month_pane_ParamLimits

0x479a,	// (0x0002a5ec) cell_cale_month_pane

0xb6b7,	// (0x00031509) cell_cale_month_pane_g1

0x10c1,	// (0x00026f13) cell_cale_month_pane_t1_ParamLimits

0x10c1,	// (0x00026f13) cell_cale_month_pane_t1

0x32ff,	// (0x00029151) grid_highlight_pane_cp08

0x2cda,	// (0x00028b2c) main_smil_g1

0x48b6,	// (0x0002a708) smil_status_pane

0x48bf,	// (0x0002a711) smil_text_pane

0xbd6d,	// (0x00031bbf) bg_popup_call3_rect_pane_g8

0xbd75,	// (0x00031bc7) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x000353bc) bg_popup_call3_rect_pane_g

0xc056,	// (0x00031ea8) smil_status_volume_pane_g1

0x48d1,	// (0x0002a723) smil_status_pane_t1

0xc089,	// (0x00031edb) volume_smil_pane

0x48e8,	// (0x0002a73a) list_smil_text_pane

0x48f2,	// (0x0002a744) scroll_pane_cp011

0x48fd,	// (0x0002a74f) smil_text_list_pane_t1_ParamLimits

0x48fd,	// (0x0002a74f) smil_text_list_pane_t1

0xb6c3,	// (0x00031515) aid_volume_smil_ParamLimits

0xb6c3,	// (0x00031515) aid_volume_smil

0x2cda,	// (0x00028b2c) smil_volume_pane_g1

0x2cda,	// (0x00028b2c) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x00035123) smil_volume_pane_g

0x2e75,	// (0x00028cc7) listscroll_cale_day_pane

0x4939,	// (0x0002a78b) bg_cale_pane

0x4951,	// (0x0002a7a3) list_cale_pane

0x4974,	// (0x0002a7c6) scroll_pane_cp09

0x4985,	// (0x0002a7d7) cale_bg_pane_g1

0x498d,	// (0x0002a7df) cale_bg_pane_g2

0x4995,	// (0x0002a7e7) cale_bg_pane_g3

0x499d,	// (0x0002a7ef) cale_bg_pane_g4

0x49a5,	// (0x0002a7f7) cale_bg_pane_g5

0x49ad,	// (0x0002a7ff) cale_bg_pane_g6

0x49b5,	// (0x0002a807) cale_bg_pane_g7

0x49bd,	// (0x0002a80f) cale_bg_pane_g8

0x49c5,	// (0x0002a817) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x00035128) cale_bg_pane_g

0x49d5,	// (0x0002a827) list_cale_time_pane_ParamLimits

0x49d5,	// (0x0002a827) list_cale_time_pane

0x49ea,	// (0x0002a83c) list_cale_time_pane_g1_ParamLimits

0x49ea,	// (0x0002a83c) list_cale_time_pane_g1

0x49f6,	// (0x0002a848) list_cale_time_pane_g2_ParamLimits

0x49f6,	// (0x0002a848) list_cale_time_pane_g2

0x4a03,	// (0x0002a855) list_cale_time_pane_g3_ParamLimits

0x4a03,	// (0x0002a855) list_cale_time_pane_g3

0x4a0f,	// (0x0002a861) list_cale_time_pane_g4_ParamLimits

0x4a0f,	// (0x0002a861) list_cale_time_pane_g4

0x4a1b,	// (0x0002a86d) list_cale_time_pane_g5_ParamLimits

0x4a1b,	// (0x0002a86d) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0003513b) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0003513b) list_cale_time_pane_g

0x4a34,	// (0x0002a886) list_cale_time_pane_t1_ParamLimits

0x4a34,	// (0x0002a886) list_cale_time_pane_t1

0x4a5c,	// (0x0002a8ae) list_cale_time_pane_t2_ParamLimits

0x4a5c,	// (0x0002a8ae) list_cale_time_pane_t2

0x5222,	// (0x0002b074) aid_blid_cardinal_pane

0x526c,	// (0x0002b0be) compass_pane_t4

0x4a84,	// (0x0002a8d6) list_cale_time_pane_t4_ParamLimits

0x4a84,	// (0x0002a8d6) list_cale_time_pane_t4

0x527a,	// (0x0002b0cc) compass_pane_t5

0x5288,	// (0x0002b0da) compass_pane_t6

0x5296,	// (0x0002b0e8) compass_pane_t7

0x5322,	// (0x0002b174) navi_pane_cc_t1

0x552a,	// (0x0002b37c) aid_phob_thumbnail_center_pane

0x5b60,	// (0x0002b9b2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x00035148) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x00035148) list_cale_time_pane_t

0x2358,	// (0x000281aa) bg_popup_window_pane_cp02_ParamLimits

0x2358,	// (0x000281aa) bg_popup_window_pane_cp02

0x4aac,	// (0x0002a8fe) heading_pane_cp01_ParamLimits

0x4aac,	// (0x0002a8fe) heading_pane_cp01

0x4ab8,	// (0x0002a90a) loc_req_pane_ParamLimits

0x4ab8,	// (0x0002a90a) loc_req_pane

0x4ac8,	// (0x0002a91a) loc_type_pane_ParamLimits

0x4ac8,	// (0x0002a91a) loc_type_pane

0x4ada,	// (0x0002a92c) loc_type_pane_t1_ParamLimits

0x4ada,	// (0x0002a92c) loc_type_pane_t1

0x4aec,	// (0x0002a93e) loc_type_pane_t2_ParamLimits

0x4aec,	// (0x0002a93e) loc_type_pane_t2

0x4afe,	// (0x0002a950) loc_type_pane_t3_ParamLimits

0x4afe,	// (0x0002a950) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0003514f) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0003514f) loc_type_pane_t

0x4b10,	// (0x0002a962) list_loc_req_pane

0x4b1a,	// (0x0002a96c) scroll_pane_cp012

0x4b23,	// (0x0002a975) list_single_loc_request_popup_menu_pane_ParamLimits

0x4b23,	// (0x0002a975) list_single_loc_request_popup_menu_pane

0x4b30,	// (0x0002a982) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4b30,	// (0x0002a982) list_single_loc_request_popup_menu_pane_g1

0x4b3c,	// (0x0002a98e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x4b3c,	// (0x0002a98e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x00035156) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x00035156) list_single_loc_request_popup_menu_pane_g

0x4b48,	// (0x0002a99a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4b48,	// (0x0002a99a) list_single_loc_request_popup_menu_pane_t1

0x297e,	// (0x000287d0) bg_popup_window_pane_cp03_ParamLimits

0x297e,	// (0x000287d0) bg_popup_window_pane_cp03

0x4b5e,	// (0x0002a9b0) heading_loc_req_pane_ParamLimits

0x4b5e,	// (0x0002a9b0) heading_loc_req_pane

0x4b6a,	// (0x0002a9bc) popup_dyc_status_message_window_g1_ParamLimits

0x4b6a,	// (0x0002a9bc) popup_dyc_status_message_window_g1

0x4b7e,	// (0x0002a9d0) popup_dyc_status_message_window_t1_ParamLimits

0x4b7e,	// (0x0002a9d0) popup_dyc_status_message_window_t1

0x4b93,	// (0x0002a9e5) popup_dyc_status_message_window_t2_ParamLimits

0x4b93,	// (0x0002a9e5) popup_dyc_status_message_window_t2

0x4ba8,	// (0x0002a9fa) popup_dyc_status_message_window_t3_ParamLimits

0x4ba8,	// (0x0002a9fa) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0003515b) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0003515b) popup_dyc_status_message_window_t

0x2723,	// (0x00028575) bg_heading_pane_cp01

0x4bc4,	// (0x0002aa16) heading_loc_req_pane_g1

0x4bcc,	// (0x0002aa1e) heading_loc_req_pane_g2

0x4bd4,	// (0x0002aa26) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x00035162) heading_loc_req_pane_g

0x4bdc,	// (0x0002aa2e) heading_loc_req_pane_t1

0x4cf9,	// (0x0002ab4b) bg_popup_sub_pane_cp01_ParamLimits

0x4cf9,	// (0x0002ab4b) bg_popup_sub_pane_cp01

0x4d07,	// (0x0002ab59) popup_cale_events_window_g1_ParamLimits

0x4d07,	// (0x0002ab59) popup_cale_events_window_g1

0x4d27,	// (0x0002ab79) popup_cale_events_window_g2_ParamLimits

0x4d27,	// (0x0002ab79) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x00035196) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x00035196) popup_cale_events_window_g

0x4d47,	// (0x0002ab99) popup_cale_events_window_t1_ParamLimits

0x4d47,	// (0x0002ab99) popup_cale_events_window_t1

0x4d59,	// (0x0002abab) popup_cale_events_window_t2_ParamLimits

0x4d59,	// (0x0002abab) popup_cale_events_window_t2

0x4d97,	// (0x0002abe9) popup_cale_events_window_t3_ParamLimits

0x4d97,	// (0x0002abe9) popup_cale_events_window_t3

0x4dd1,	// (0x0002ac23) popup_cale_events_window_t4_ParamLimits

0x4dd1,	// (0x0002ac23) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0003519b) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0003519b) popup_cale_events_window_t

0x4e07,	// (0x0002ac59) call_type_pane

0x4e17,	// (0x0002ac69) popup_call_status_window_g1

0x4e2b,	// (0x0002ac7d) popup_call_status_window_g2

0x4e3f,	// (0x0002ac91) popup_call_status_window_g3

0x0002,

0xf352,	// (0x000351a4) popup_call_status_window_g

0x4e4f,	// (0x0002aca1) call_type_pane_g1

0x4e58,	// (0x0002acaa) call_type_pane_g2

0x0001,

0xf359,	// (0x000351ab) call_type_pane_g

0x2723,	// (0x00028575) bg_popup_sub_pane_cp02

0x4e61,	// (0x0002acb3) listscroll_popup_wml_pane

0x4e69,	// (0x0002acbb) list_wml_pane

0x4e73,	// (0x0002acc5) scroll_pane_cp013

0x4e7c,	// (0x0002acce) list_single_graphic_popup_wml_pane_ParamLimits

0x4e7c,	// (0x0002acce) list_single_graphic_popup_wml_pane

0x2cda,	// (0x00028b2c) list_single_graphic_popup_wml_pane_g1

0x4e8f,	// (0x0002ace1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x000351b0) list_single_graphic_popup_wml_pane_g

0x4e97,	// (0x0002ace9) list_single_graphic_popup_wml_pane_t1

0x4ead,	// (0x0002acff) aid_call_pane

0x2976,	// (0x000287c8) popup_clock_analogue_window_g1

0x2976,	// (0x000287c8) popup_clock_analogue_window_g2

0xb6e5,	// (0x00031537) popup_clock_analogue_window_g3

0xb6e5,	// (0x00031537) popup_clock_analogue_window_g4

0x2cda,	// (0x00028b2c) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x000351b5) popup_clock_analogue_window_g

0xb6ed,	// (0x0003153f) popup_clock_analogue_window_t1

0xb6fb,	// (0x0003154d) clock_digital_number_pane_ParamLimits

0xb6fb,	// (0x0003154d) clock_digital_number_pane

0xb707,	// (0x00031559) clock_digital_number_pane_cp02_ParamLimits

0xb707,	// (0x00031559) clock_digital_number_pane_cp02

0xb713,	// (0x00031565) clock_digital_number_pane_cp03_ParamLimits

0xb713,	// (0x00031565) clock_digital_number_pane_cp03

0xb71f,	// (0x00031571) clock_digital_number_pane_cp04_ParamLimits

0xb71f,	// (0x00031571) clock_digital_number_pane_cp04

0xb72b,	// (0x0003157d) clock_digital_separator_pane_ParamLimits

0xb72b,	// (0x0003157d) clock_digital_separator_pane

0xb737,	// (0x00031589) popup_clock_digital_window_t1

0x2cda,	// (0x00028b2c) clock_digital_number_pane_g1

0x2cda,	// (0x00028b2c) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x00035123) clock_digital_number_pane_g

0x2cda,	// (0x00028b2c) clock_digital_separator_pane_g1

0x2cda,	// (0x00028b2c) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x00035123) clock_digital_separator_pane_g

0x2723,	// (0x00028575) bg_popup_window_pane_cp04

0x4eb5,	// (0x0002ad07) heading_pane_cp03

0x4ebd,	// (0x0002ad0f) listscroll_popup_gms_pane

0x4ec5,	// (0x0002ad17) grid_large_graphic_popup_pane

0x4ecf,	// (0x0002ad21) listscroll_popup_gms_pane_g1

0x4ed7,	// (0x0002ad29) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x000351c0) listscroll_popup_gms_pane_g

0x3c9e,	// (0x00029af0) scroll_pane_cp014

0x4edf,	// (0x0002ad31) cell_large_graphic_popup_pane_ParamLimits

0x4edf,	// (0x0002ad31) cell_large_graphic_popup_pane

0x4ef5,	// (0x0002ad47) cell_large_graphic_popup_pane_g1_ParamLimits

0x4ef5,	// (0x0002ad47) cell_large_graphic_popup_pane_g1

0x4f01,	// (0x0002ad53) cell_large_graphic_popup_pane_g2_ParamLimits

0x4f01,	// (0x0002ad53) cell_large_graphic_popup_pane_g2

0x4f0d,	// (0x0002ad5f) cell_large_graphic_popup_pane_g3_ParamLimits

0x4f0d,	// (0x0002ad5f) cell_large_graphic_popup_pane_g3

0x4f1a,	// (0x0002ad6c) cell_large_graphic_popup_pane_g4_ParamLimits

0x4f1a,	// (0x0002ad6c) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x000351c5) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x000351c5) cell_large_graphic_popup_pane_g

0x4f2a,	// (0x0002ad7c) grid_highlight_pane_cp010

0x2cda,	// (0x00028b2c) bg_popup_call_pane_g1

0x4f34,	// (0x0002ad86) list_single_graphic_popup_conf_pane_ParamLimits

0x4f34,	// (0x0002ad86) list_single_graphic_popup_conf_pane

0x4f47,	// (0x0002ad99) list_highlight_pane_cp01

0x4f50,	// (0x0002ada2) list_single_graphic_popup_conf_pane_g1

0x4f58,	// (0x0002adaa) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x000351ce) list_single_graphic_popup_conf_pane_g

0x4f60,	// (0x0002adb2) list_single_graphic_popup_conf_pane_t1

0x4f6e,	// (0x0002adc0) linegrid_cams_pane_g1

0x4f77,	// (0x0002adc9) linegrid_cams_pane_g2

0x2e4d,	// (0x00028c9f) linegrid_cams_pane_g3

0x4f80,	// (0x0002add2) linegrid_cams_pane_g4

0x4f89,	// (0x0002addb) linegrid_cams_pane_g5

0x4f92,	// (0x0002ade4) linegrid_cams_pane_g6

0x3355,	// (0x000291a7) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x000351d3) linegrid_cams_pane_g

0x4f9b,	// (0x0002aded) popup_clock_analogue_window

0x4f9b,	// (0x0002aded) popup_clock_digital_window

0x2723,	// (0x00028575) popup_phob_thumbnail_window

0x2cda,	// (0x00028b2c) call_video_uplink_pane_g1

0x4fa4,	// (0x0002adf6) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x000351e2) call_video_uplink_pane_g

0x32ff,	// (0x00029151) video_uplink_pane

0x4fac,	// (0x0002adfe) mce_image_pane_g1

0x4fb6,	// (0x0002ae08) mce_image_pane_g2

0x4fbe,	// (0x0002ae10) mce_image_pane_g3

0x4fc6,	// (0x0002ae18) mce_image_pane_g4

0x4fce,	// (0x0002ae20) mce_image_pane_g5

0x0004,

0xf395,	// (0x000351e7) mce_image_pane_g

0x4fd6,	// (0x0002ae28) control_top_pane_stacon_cp01_ParamLimits

0x4fd6,	// (0x0002ae28) control_top_pane_stacon_cp01

0x4fe6,	// (0x0002ae38) uni_indicator_pane_stacon_cp01_ParamLimits

0x4fe6,	// (0x0002ae38) uni_indicator_pane_stacon_cp01

0x4ff7,	// (0x0002ae49) bg_popup_sub_pane_cp03

0x5001,	// (0x0002ae53) chi_dic_find_pane

0x5009,	// (0x0002ae5b) listscroll_chi_dic_pane

0x5012,	// (0x0002ae64) main_pane_chidic_g1

0x5025,	// (0x0002ae77) chi_dic_find_pane_t1

0x5033,	// (0x0002ae85) find_chidic_pane

0x503c,	// (0x0002ae8e) chi_dic_list_pane_ParamLimits

0x503c,	// (0x0002ae8e) chi_dic_list_pane

0x504d,	// (0x0002ae9f) scroll_pane_cp020

0x5055,	// (0x0002aea7) find_chidic_pane_t1

0x2723,	// (0x00028575) input_focus_pane_cp06

0x5064,	// (0x0002aeb6) list_chi_dic_pane_ParamLimits

0x5064,	// (0x0002aeb6) list_chi_dic_pane

0x5076,	// (0x0002aec8) list_chi_dic_pane_t1_ParamLimits

0x5076,	// (0x0002aec8) list_chi_dic_pane_t1

0x2723,	// (0x00028575) list_highlight_pane_cp020

0x5089,	// (0x0002aedb) bg_cale_heading_pane_g1

0x5091,	// (0x0002aee3) bg_cale_heading_pane_g2

0x5099,	// (0x0002aeeb) bg_cale_heading_pane_g3

0x50a1,	// (0x0002aef3) bg_cale_heading_pane_g4

0x50a9,	// (0x0002aefb) bg_cale_heading_pane_g5

0x50b1,	// (0x0002af03) bg_cale_heading_pane_g6

0x50b9,	// (0x0002af0b) bg_cale_heading_pane_g7

0x50c1,	// (0x0002af13) bg_cale_heading_pane_g8

0x50c9,	// (0x0002af1b) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x000351f2) bg_cale_heading_pane_g

0x5089,	// (0x0002aedb) bg_cale_side_pane_g1

0x50d1,	// (0x0002af23) bg_cale_side_pane_g2

0x50d9,	// (0x0002af2b) bg_cale_side_pane_g3

0x50e1,	// (0x0002af33) bg_cale_side_pane_g4

0x50e9,	// (0x0002af3b) bg_cale_side_pane_g5

0x50f1,	// (0x0002af43) bg_cale_side_pane_g6

0x50f9,	// (0x0002af4b) bg_cale_side_pane_g7

0x5101,	// (0x0002af53) bg_cale_side_pane_g8

0x5109,	// (0x0002af5b) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x00035205) bg_cale_side_pane_g

0x5111,	// (0x0002af63) popup_call_status_window_ParamLimits

0x5111,	// (0x0002af63) popup_call_status_window

0x5158,	// (0x0002afaa) stacon_top_pane

0x5160,	// (0x0002afb2) status_pane_ParamLimits

0x5160,	// (0x0002afb2) status_pane

0x517a,	// (0x0002afcc) status_small_pane

0x5182,	// (0x0002afd4) control_pane

0x2723,	// (0x00028575) stacon_bottom_pane

0x518a,	// (0x0002afdc) list_single_mce_smart_pane_t1_ParamLimits

0x518a,	// (0x0002afdc) list_single_mce_smart_pane_t1

0x519d,	// (0x0002afef) list_single_mce_smart_pane_t2_ParamLimits

0x519d,	// (0x0002afef) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x00035218) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x00035218) list_single_mce_smart_pane_t

0x51c5,	// (0x0002b017) compass_pane

0x51ce,	// (0x0002b020) main_location2_pane_t1

0x51e4,	// (0x0002b036) main_location2_pane_t2

0x51fa,	// (0x0002b04c) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0003521d) main_location2_pane_t

0x5242,	// (0x0002b094) compass_pane_g1_ParamLimits

0x5242,	// (0x0002b094) compass_pane_g1

0x524e,	// (0x0002b0a0) compass_pane_t1

0x525d,	// (0x0002b0af) compass_pane_t2

0x0005,

0xf3d4,	// (0x00035226) compass_pane_t

0x52a4,	// (0x0002b0f6) text_secondary_cp61

0x5319,	// (0x0002b16b) navi_pane_cams_g5

0x5382,	// (0x0002b1d4) navi_pane_im_t1

0x5390,	// (0x0002b1e2) navi_pane_mp_g1_ParamLimits

0x5390,	// (0x0002b1e2) navi_pane_mp_g1

0x53a4,	// (0x0002b1f6) navi_pane_mp_g2_ParamLimits

0x53a4,	// (0x0002b1f6) navi_pane_mp_g2

0x53b0,	// (0x0002b202) navi_pane_mp_g3_ParamLimits

0x53b0,	// (0x0002b202) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0003523a) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0003523a) navi_pane_mp_g

0x53bc,	// (0x0002b20e) navi_pane_mp_t1

0x53ca,	// (0x0002b21c) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x00035241) navi_pane_mp_t

0x5473,	// (0x0002b2c5) navi_pane_vt_g1

0x53bc,	// (0x0002b20e) navi_pane_vt_t1

0x547b,	// (0x0002b2cd) navi_slider_pane

0x336e,	// (0x000291c0) zooming_pane

0x548b,	// (0x0002b2dd) navi_slider_pane_g1

0xb754,	// (0x000315a6) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x00035248) navi_slider_pane_g

0x54af,	// (0x0002b301) aid_levels_zoom

0x54b7,	// (0x0002b309) zooming_pane_g1

0x54bf,	// (0x0002b311) zooming_pane_g2

0x54bf,	// (0x0002b311) zooming_pane_g3

0x0002,

0xf405,	// (0x00035257) zooming_pane_g

0x54c7,	// (0x0002b319) level_10_zoom

0x54d0,	// (0x0002b322) level_11_zoom

0x54d9,	// (0x0002b32b) level_1_zoom

0x54e2,	// (0x0002b334) level_2_zoom

0x54eb,	// (0x0002b33d) level_3_zoom

0x54f4,	// (0x0002b346) level_4_zoom

0x54fd,	// (0x0002b34f) level_5_zoom

0x5506,	// (0x0002b358) level_6_zoom

0x550f,	// (0x0002b361) level_7_zoom

0x5518,	// (0x0002b36a) level_8_zoom

0x5521,	// (0x0002b373) level_9_zoom

0x5532,	// (0x0002b384) popup_phob_thumbnail_window_g1

0x553a,	// (0x0002b38c) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0003525e) popup_phob_thumbnail_window_g

0xbf0f,	// (0x00031d61) level_1_location

0xbf17,	// (0x00031d69) level_2_location

0xbf1f,	// (0x00031d71) level_3_location

0xbf27,	// (0x00031d79) level_4_location

0x336e,	// (0x000291c0) level_5_location

0x5542,	// (0x0002b394) mce_icon_pane_g1

0x554a,	// (0x0002b39c) mce_icon_pane_g2

0x0001,

0xf411,	// (0x00035263) mce_icon_pane_g

0x5552,	// (0x0002b3a4) main_mup_pane_g1_ParamLimits

0x5552,	// (0x0002b3a4) main_mup_pane_g1

0x5568,	// (0x0002b3ba) main_mup_pane_g2_ParamLimits

0x5568,	// (0x0002b3ba) main_mup_pane_g2

0x5580,	// (0x0002b3d2) main_mup_pane_g3_ParamLimits

0x5580,	// (0x0002b3d2) main_mup_pane_g3

0x5598,	// (0x0002b3ea) main_mup_pane_g4_ParamLimits

0x5598,	// (0x0002b3ea) main_mup_pane_g4

0x55b0,	// (0x0002b402) main_mup_pane_g5_ParamLimits

0x55b0,	// (0x0002b402) main_mup_pane_g5

0x55ca,	// (0x0002b41c) main_mup_pane_g6_ParamLimits

0x55ca,	// (0x0002b41c) main_mup_pane_g6

0x55e2,	// (0x0002b434) main_mup_pane_g7_ParamLimits

0x55e2,	// (0x0002b434) main_mup_pane_g7

0x55fa,	// (0x0002b44c) main_mup_pane_g8_ParamLimits

0x55fa,	// (0x0002b44c) main_mup_pane_g8

0x5612,	// (0x0002b464) main_mup_pane_g9_ParamLimits

0x5612,	// (0x0002b464) main_mup_pane_g9

0x5626,	// (0x0002b478) main_mup_pane_g10_ParamLimits

0x5626,	// (0x0002b478) main_mup_pane_g10

0x563a,	// (0x0002b48c) main_mup_pane_g11_ParamLimits

0x563a,	// (0x0002b48c) main_mup_pane_g11

0x564c,	// (0x0002b49e) main_mup_pane_g12_ParamLimits

0x564c,	// (0x0002b49e) main_mup_pane_g12

0x5660,	// (0x0002b4b2) main_mup_pane_g13_ParamLimits

0x5660,	// (0x0002b4b2) main_mup_pane_g13

0x000c,

0xf416,	// (0x00035268) main_mup_pane_g_ParamLimits

0xf416,	// (0x00035268) main_mup_pane_g

0x5672,	// (0x0002b4c4) main_mup_pane_t1_ParamLimits

0x5672,	// (0x0002b4c4) main_mup_pane_t1

0x568c,	// (0x0002b4de) main_mup_pane_t2_ParamLimits

0x568c,	// (0x0002b4de) main_mup_pane_t2

0x56a4,	// (0x0002b4f6) main_mup_pane_t3_ParamLimits

0x56a4,	// (0x0002b4f6) main_mup_pane_t3

0x56bc,	// (0x0002b50e) main_mup_pane_t4_ParamLimits

0x56bc,	// (0x0002b50e) main_mup_pane_t4

0x56da,	// (0x0002b52c) main_mup_pane_t5_ParamLimits

0x56da,	// (0x0002b52c) main_mup_pane_t5

0x56ef,	// (0x0002b541) main_mup_pane_t6_ParamLimits

0x56ef,	// (0x0002b541) main_mup_pane_t6

0x0005,

0xf431,	// (0x00035283) main_mup_pane_t_ParamLimits

0xf431,	// (0x00035283) main_mup_pane_t

0x5701,	// (0x0002b553) mup_progress_pane_ParamLimits

0x5701,	// (0x0002b553) mup_progress_pane

0x570d,	// (0x0002b55f) mup_visualizer_pane_ParamLimits

0x570d,	// (0x0002b55f) mup_visualizer_pane

0x5735,	// (0x0002b587) mup_volume_pane_ParamLimits

0x5735,	// (0x0002b587) mup_volume_pane

0x5753,	// (0x0002b5a5) mup_visualizer_pane_g1_ParamLimits

0x5753,	// (0x0002b5a5) mup_visualizer_pane_g1

0x5753,	// (0x0002b5a5) mup_visualizer_pane_g2_ParamLimits

0x5753,	// (0x0002b5a5) mup_visualizer_pane_g2

0x5242,	// (0x0002b094) mup_visualizer_pane_g3_ParamLimits

0x5242,	// (0x0002b094) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x00035290) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x00035290) mup_visualizer_pane_g

0x2cda,	// (0x00028b2c) mup_volume_pane_g1

0x5769,	// (0x0002b5bb) mup_volume_pane_g2

0x0001,

0xf445,	// (0x00035297) mup_volume_pane_g

0x2cda,	// (0x00028b2c) mup_progress_pane_g1

0x5772,	// (0x0002b5c4) mup_progress_pane_g2

0x577b,	// (0x0002b5cd) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0003529c) mup_progress_pane_g

0x2723,	// (0x00028575) bg_popup_window_pane_cp05

0x5784,	// (0x0002b5d6) heading_pane_cp02_ParamLimits

0x5784,	// (0x0002b5d6) heading_pane_cp02

0x579e,	// (0x0002b5f0) list_popup_blid_pane

0x57a6,	// (0x0002b5f8) list_blid_sat_info_pane_ParamLimits

0x57a6,	// (0x0002b5f8) list_blid_sat_info_pane

0x57b9,	// (0x0002b60b) list_blid_sat_info_pane_g1

0x57c1,	// (0x0002b613) list_blid_sat_info_pane_t1

0x58a1,	// (0x0002b6f3) mup_equalizer_pane_ParamLimits

0x58a1,	// (0x0002b6f3) mup_equalizer_pane

0x58ba,	// (0x0002b70c) mup_equalizer_pane_cp1_ParamLimits

0x58ba,	// (0x0002b70c) mup_equalizer_pane_cp1

0x58d3,	// (0x0002b725) mup_equalizer_pane_cp2_ParamLimits

0x58d3,	// (0x0002b725) mup_equalizer_pane_cp2

0x58ec,	// (0x0002b73e) mup_equalizer_pane_cp3_ParamLimits

0x58ec,	// (0x0002b73e) mup_equalizer_pane_cp3

0x5905,	// (0x0002b757) mup_equalizer_pane_cp4_ParamLimits

0x5905,	// (0x0002b757) mup_equalizer_pane_cp4

0x591e,	// (0x0002b770) mup_equalizer_pane_cp5

0x5930,	// (0x0002b782) mup_equalizer_pane_cp6

0x5942,	// (0x0002b794) mup_equalizer_pane_cp7

0xbded,	// (0x00031c3f) bg_popup_call_poc_act_pane_g9

0xbdf5,	// (0x00031c47) bg_popup_call_poc_act_pane_g10

0xbdfd,	// (0x00031c4f) bg_popup_call_poc_act_pane_g11

0x000a,

0x297e,	// (0x000287d0) mup_scale_pane

0x2cda,	// (0x00028b2c) mup_scale_pane_g1

0x5956,	// (0x0002b7a8) mup_scale_pane_g2

0x0006,

0xf466,	// (0x000352b8) mup_scale_pane_g

0x598c,	// (0x0002b7de) msg_data_pane

0x5994,	// (0x0002b7e6) scroll_pane_cp017

0x599c,	// (0x0002b7ee) bg_list_pane_cp04_ParamLimits

0x599c,	// (0x0002b7ee) bg_list_pane_cp04

0x59bc,	// (0x0002b80e) msg_data_pane_g1

0x4fb6,	// (0x0002ae08) msg_data_pane_g2

0x4fbe,	// (0x0002ae10) msg_data_pane_g3

0x59c4,	// (0x0002b816) msg_data_pane_g4

0x4fce,	// (0x0002ae20) msg_data_pane_g5

0x5542,	// (0x0002b394) msg_data_pane_g6

0x59cc,	// (0x0002b81e) msg_data_pane_g7

0x0006,

0xf475,	// (0x000352c7) msg_data_pane_g

0x59d4,	// (0x0002b826) msg_text_pane_ParamLimits

0x59d4,	// (0x0002b826) msg_text_pane

0x59fb,	// (0x0002b84d) qrid_highlight_pane_cp011_ParamLimits

0x59fb,	// (0x0002b84d) qrid_highlight_pane_cp011

0x2723,	// (0x00028575) msg_body_pane

0x2723,	// (0x00028575) msg_header_pane

0x5a1a,	// (0x0002b86c) input_focus_pane_cp07

0x5a3b,	// (0x0002b88d) msg_header_pane_t1_ParamLimits

0x5a3b,	// (0x0002b88d) msg_header_pane_t1

0x5a4d,	// (0x0002b89f) msg_header_pane_t2_ParamLimits

0x5a4d,	// (0x0002b89f) msg_header_pane_t2

0x0001,

0xf489,	// (0x000352db) msg_header_pane_t_ParamLimits

0xf489,	// (0x000352db) msg_header_pane_t

0x5a5f,	// (0x0002b8b1) msg_body_pane_g1

0x5a67,	// (0x0002b8b9) msg_body_pane_t1_ParamLimits

0x5a67,	// (0x0002b8b9) msg_body_pane_t1

0x5a92,	// (0x0002b8e4) msg_body_pane_t2_ParamLimits

0x5a92,	// (0x0002b8e4) msg_body_pane_t2

0x5aa4,	// (0x0002b8f6) msg_body_pane_t3_ParamLimits

0x5aa4,	// (0x0002b8f6) msg_body_pane_t3

0x0002,

0xf48e,	// (0x000352e0) msg_body_pane_t_ParamLimits

0xf48e,	// (0x000352e0) msg_body_pane_t

0x10f9,	// (0x00026f4b) main_viewer_pane_g1_ParamLimits

0x10f9,	// (0x00026f4b) main_viewer_pane_g1

0x1105,	// (0x00026f57) main_viewer_pane_g2_ParamLimits

0x1105,	// (0x00026f57) main_viewer_pane_g2

0x5ad4,	// (0x0002b926) main_viewer_pane_g3_ParamLimits

0x5ad4,	// (0x0002b926) main_viewer_pane_g3

0x5ae3,	// (0x0002b935) main_viewer_pane_g4_ParamLimits

0x5ae3,	// (0x0002b935) main_viewer_pane_g4

0xb77e,	// (0x000315d0) main_viewer_pane_g5_ParamLimits

0xb77e,	// (0x000315d0) main_viewer_pane_g5

0xb77e,	// (0x000315d0) main_viewer_pane_g7_ParamLimits

0xb77e,	// (0x000315d0) main_viewer_pane_g7

0xb790,	// (0x000315e2) main_viewer_pane_g8_ParamLimits

0xb790,	// (0x000315e2) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x000352f0) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x000352f0) main_viewer_pane_g

0x5af2,	// (0x0002b944) viewer_content_pane_ParamLimits

0x5af2,	// (0x0002b944) viewer_content_pane

0x5b25,	// (0x0002b977) main_postcard_pane_g1_ParamLimits

0x5b25,	// (0x0002b977) main_postcard_pane_g1

0x5b39,	// (0x0002b98b) main_postcard_pane_g2_ParamLimits

0x5b39,	// (0x0002b98b) main_postcard_pane_g2

0x5b4d,	// (0x0002b99f) main_postcard_pane_g3_ParamLimits

0x5b4d,	// (0x0002b99f) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x00035301) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x00035301) main_postcard_pane_g

0x5b60,	// (0x0002b9b2) main_postcard_pane_g4

0xc069,	// (0x00031ebb) smil_status_volume_pane_g2

0x5b9b,	// (0x0002b9ed) postcard_pane_ParamLimits

0x5b9b,	// (0x0002b9ed) postcard_pane

0x5bdb,	// (0x0002ba2d) postcard_pane_g1_ParamLimits

0x5bdb,	// (0x0002ba2d) postcard_pane_g1

0x5be9,	// (0x0002ba3b) postcard_pane_g2_ParamLimits

0x5be9,	// (0x0002ba3b) postcard_pane_g2

0x5bf5,	// (0x0002ba47) postcard_pane_g3_ParamLimits

0x5bf5,	// (0x0002ba47) postcard_pane_g3

0x5c01,	// (0x0002ba53) postcard_pane_g4_ParamLimits

0x5c01,	// (0x0002ba53) postcard_pane_g4

0x5c0f,	// (0x0002ba61) postcard_pane_g5_ParamLimits

0x5c0f,	// (0x0002ba61) postcard_pane_g5

0x5c24,	// (0x0002ba76) postcard_pane_g6_ParamLimits

0x5c24,	// (0x0002ba76) postcard_pane_g6

0x5bdb,	// (0x0002ba2d) postcard_pane_g7_ParamLimits

0x5bdb,	// (0x0002ba2d) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0003530e) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0003530e) postcard_pane_g

0x5c38,	// (0x0002ba8a) main_mp2_pane_g1_ParamLimits

0x5c38,	// (0x0002ba8a) main_mp2_pane_g1

0x5c44,	// (0x0002ba96) main_mp2_pane_g2_ParamLimits

0x5c44,	// (0x0002ba96) main_mp2_pane_g2

0x5c50,	// (0x0002baa2) main_mp2_pane_g3_ParamLimits

0x5c50,	// (0x0002baa2) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0003531d) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0003531d) main_mp2_pane_g

0x5c5c,	// (0x0002baae) main_mp2_pane_t1_ParamLimits

0x5c5c,	// (0x0002baae) main_mp2_pane_t1

0x5c71,	// (0x0002bac3) main_mp2_pane_t2_ParamLimits

0x5c71,	// (0x0002bac3) main_mp2_pane_t2

0x5c83,	// (0x0002bad5) main_mp2_pane_t3_ParamLimits

0x5c83,	// (0x0002bad5) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x00035324) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x00035324) main_mp2_pane_t

0x5c95,	// (0x0002bae7) pec_content_pane_ParamLimits

0x5c95,	// (0x0002bae7) pec_content_pane

0x3c9e,	// (0x00029af0) scroll_pane_cp015

0x5ca7,	// (0x0002baf9) pec_attribute_pane_ParamLimits

0x5ca7,	// (0x0002baf9) pec_attribute_pane

0x5cb7,	// (0x0002bb09) pec_content_pane_g1_ParamLimits

0x5cb7,	// (0x0002bb09) pec_content_pane_g1

0x5cc3,	// (0x0002bb15) pec_content_pane_t1_ParamLimits

0x5cc3,	// (0x0002bb15) pec_content_pane_t1

0x5cd5,	// (0x0002bb27) pec_content_pane_t2_ParamLimits

0x5cd5,	// (0x0002bb27) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0003532b) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0003532b) pec_content_pane_t

0x5ce7,	// (0x0002bb39) list_single_graphic_pane_cp01_ParamLimits

0x5ce7,	// (0x0002bb39) list_single_graphic_pane_cp01

0x297e,	// (0x000287d0) bg_popup_sub_pane_cp04

0x5cfc,	// (0x0002bb4e) popup_mup_playback_window_g1

0x5d08,	// (0x0002bb5a) popup_mup_playback_window_t1

0x5d1d,	// (0x0002bb6f) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x00035330) popup_mup_playback_window_t

0x5d72,	// (0x0002bbc4) main_image_pane_g1_ParamLimits

0x5d72,	// (0x0002bbc4) main_image_pane_g1

0x5e4d,	// (0x0002bc9f) scroll_pane_cp018_ParamLimits

0x5e4d,	// (0x0002bc9f) scroll_pane_cp018

0x5e65,	// (0x0002bcb7) scroll_pane_cp016_ParamLimits

0x5e65,	// (0x0002bcb7) scroll_pane_cp016

0x5e99,	// (0x0002bceb) smil2_image_pane_ParamLimits

0x5e99,	// (0x0002bceb) smil2_image_pane

0x5ec1,	// (0x0002bd13) smil2_root_pane_ParamLimits

0x5ec1,	// (0x0002bd13) smil2_root_pane

0x5ef9,	// (0x0002bd4b) smil2_text_pane_ParamLimits

0x5ef9,	// (0x0002bd4b) smil2_text_pane

0x2723,	// (0x00028575) bg_list_pane_cp06

0x5f6d,	// (0x0002bdbf) grid_radio_pane

0x2723,	// (0x00028575) bg_popup_window_pane_cp06

0x5f75,	// (0x0002bdc7) main_fmradio_pane_t1

0x4eb5,	// (0x0002ad07) heading_pane_cp04

0x5f83,	// (0x0002bdd5) main_fmradio_pane_t2

0xbe45,	// (0x00031c97) popup_cale_lunar_info_window_g1

0x5f91,	// (0x0002bde3) main_fmradio_pane_t3

0xbe4d,	// (0x00031c9f) popup_cale_lunar_info_window_g2

0x5f9f,	// (0x0002bdf1) main_fmradio_pane_t4

0x0001,

0x5fad,	// (0x0002bdff) main_fmradio_pane_t5

0x0004,

0xf5cc,	// (0x0003541e) popup_cale_lunar_info_window_g

0xf4f3,	// (0x00035345) main_fmradio_pane_t

0x5fbb,	// (0x0002be0d) wait_bar_pane_cp03

0x5fc3,	// (0x0002be15) cell_fmradio_pane_ParamLimits

0x5fc3,	// (0x0002be15) cell_fmradio_pane

0x5bdb,	// (0x0002ba2d) cell_fmradio_pane_g1_ParamLimits

0x5bdb,	// (0x0002ba2d) cell_fmradio_pane_g1

0x2723,	// (0x00028575) grid_highlight_pane_cp011

0x5fd6,	// (0x0002be28) poc_content_pane_ParamLimits

0x5fd6,	// (0x0002be28) poc_content_pane

0x5fe9,	// (0x0002be3b) scroll_pane_cp019

0x5ff1,	// (0x0002be43) popup_call_poc_act_window_ParamLimits

0x5ff1,	// (0x0002be43) popup_call_poc_act_window

0x6011,	// (0x0002be63) popup_call_poc_inact_window_ParamLimits

0x6011,	// (0x0002be63) popup_call_poc_inact_window

0xf590,	// (0x000353e2) bg_popup_call_poc_act_pane_g

0xbe05,	// (0x00031c57) bg_popup_call_poc_inact_pane_g1

0xbe0d,	// (0x00031c5f) bg_popup_call_poc_inact_pane_g2

0x6026,	// (0x0002be78) popup_call_poc_act_window_g2

0xbe15,	// (0x00031c67) bg_popup_call_poc_inact_pane_g3

0xbd95,	// (0x00031be7) bg_popup_call_poc_inact_pane_g4

0xbe1d,	// (0x00031c6f) bg_popup_call_poc_inact_pane_g5

0x602e,	// (0x0002be80) popup_call_poc_act_window_t1_ParamLimits

0x602e,	// (0x0002be80) popup_call_poc_act_window_t1

0x6056,	// (0x0002bea8) popup_call_poc_act_window_t2_ParamLimits

0x6056,	// (0x0002bea8) popup_call_poc_act_window_t2

0x607e,	// (0x0002bed0) popup_call_poc_act_window_t3_ParamLimits

0x607e,	// (0x0002bed0) popup_call_poc_act_window_t3

0x60a6,	// (0x0002bef8) popup_call_poc_act_window_t4_ParamLimits

0x60a6,	// (0x0002bef8) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x00035350) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x00035350) popup_call_poc_act_window_t

0xbe25,	// (0x00031c77) bg_popup_call_poc_inact_pane_g6

0xbe2d,	// (0x00031c7f) bg_popup_call_poc_inact_pane_g7

0xbe35,	// (0x00031c87) bg_popup_call_poc_inact_pane_g8

0x60b8,	// (0x0002bf0a) popup_call_poc_inact_window_g2

0xbe3d,	// (0x00031c8f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a7,	// (0x000353f9) bg_popup_call_poc_inact_pane_g

0x60c0,	// (0x0002bf12) popup_call_poc_inact_window_t1_ParamLimits

0x60c0,	// (0x0002bf12) popup_call_poc_inact_window_t1

0x60d5,	// (0x0002bf27) popup_call_poc_inact_window_t2_ParamLimits

0x60d5,	// (0x0002bf27) popup_call_poc_inact_window_t2

0x60ea,	// (0x0002bf3c) popup_call_poc_inact_window_t3_ParamLimits

0x60ea,	// (0x0002bf3c) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x00035359) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x00035359) popup_call_poc_inact_window_t

0xbfdc,	// (0x00031e2e) context_pane_ParamLimits

0x6dc4,	// (0x0002cc16) signal_pane_ParamLimits

0x336e,	// (0x000291c0) main_call2_pane

0xbfb5,	// (0x00031e07) popup_phob_thumbnail2_window_ParamLimits

0xbfb5,	// (0x00031e07) popup_phob_thumbnail2_window

0xb766,	// (0x000315b8) aid_hotspot_pointer_arrow_pane

0xb76e,	// (0x000315c0) aid_hotspot_pointer_hand_pane

0x6bdf,	// (0x0002ca31) phob_pre_status_pane_g5

0x33e9,	// (0x0002923b) cams_zoom_pane_ParamLimits

0x33f8,	// (0x0002924a) image_vga_pane_ParamLimits

0x3410,	// (0x00029262) main_camera_pane_g1_ParamLimits

0x3420,	// (0x00029272) main_camera_pane_g2_ParamLimits

0x3430,	// (0x00029282) main_camera_pane_g3_ParamLimits

0x3440,	// (0x00029292) main_camera_pane_g4_ParamLimits

0x3450,	// (0x000292a2) main_camera_pane_g5_ParamLimits

0x3460,	// (0x000292b2) main_camera_pane_g6_ParamLimits

0x3470,	// (0x000292c2) main_camera_pane_g7_ParamLimits

0xf206,	// (0x00035058) main_camera_pane_g_ParamLimits

0x348c,	// (0x000292de) main_camera_pane_t1_ParamLimits

0x34a2,	// (0x000292f4) main_camera_pane_t2_ParamLimits

0xf217,	// (0x00035069) main_camera_pane_t_ParamLimits

0x297e,	// (0x000287d0) bg_popup_preview_window_pane_cp01_ParamLimits

0x297e,	// (0x000287d0) bg_popup_preview_window_pane_cp01

0x60ff,	// (0x0002bf51) popup_phob_thumbnail2_window_g1_ParamLimits

0x60ff,	// (0x0002bf51) popup_phob_thumbnail2_window_g1

0x2723,	// (0x00028575) call2_cli_visual_pane

0x6122,	// (0x0002bf74) popup_call2_audio_conf_window_ParamLimits

0x6122,	// (0x0002bf74) popup_call2_audio_conf_window

0x6140,	// (0x0002bf92) popup_call2_audio_first_window_ParamLimits

0x6140,	// (0x0002bf92) popup_call2_audio_first_window

0x61b6,	// (0x0002c008) popup_call2_audio_in_window_ParamLimits

0x61b6,	// (0x0002c008) popup_call2_audio_in_window

0x61ea,	// (0x0002c03c) popup_call2_audio_out_window_ParamLimits

0x61ea,	// (0x0002c03c) popup_call2_audio_out_window

0x623c,	// (0x0002c08e) popup_call2_audio_second_window_ParamLimits

0x623c,	// (0x0002c08e) popup_call2_audio_second_window

0x628e,	// (0x0002c0e0) popup_call2_audio_wait_window_ParamLimits

0x628e,	// (0x0002c0e0) popup_call2_audio_wait_window

0x2723,	// (0x00028575) bg_popup_call2_act_pane_cp03

0x2960,	// (0x000287b2) list_conf_pane_cp

0x62c6,	// (0x0002c118) popup_call2_audio_conf_window_t1

0x4f34,	// (0x0002ad86) list_single_graphic_popup_conf2_pane_ParamLimits

0x4f34,	// (0x0002ad86) list_single_graphic_popup_conf2_pane

0x4f47,	// (0x0002ad99) list_highlight_pane_cp04

0x62d4,	// (0x0002c126) list_single_graphic_popup_conf2_pane_g1

0x4f58,	// (0x0002adaa) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x00035360) list_single_graphic_popup_conf2_pane_g

0x62dc,	// (0x0002c12e) list_single_graphic_popup_conf2_pane_t1

0x62ea,	// (0x0002c13c) bg_popup_call2_act_pane_cp01_ParamLimits

0x62ea,	// (0x0002c13c) bg_popup_call2_act_pane_cp01

0x6374,	// (0x0002c1c6) call_type_pane_cp05_ParamLimits

0x6374,	// (0x0002c1c6) call_type_pane_cp05

0x63c8,	// (0x0002c21a) popup_call2_audio_second_window_g1_ParamLimits

0x63c8,	// (0x0002c21a) popup_call2_audio_second_window_g1

0x641c,	// (0x0002c26e) popup_call2_audio_second_window_g2_ParamLimits

0x641c,	// (0x0002c26e) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x00035365) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x00035365) popup_call2_audio_second_window_g

0x6481,	// (0x0002c2d3) popup_call2_audio_second_window_t1_ParamLimits

0x6481,	// (0x0002c2d3) popup_call2_audio_second_window_t1

0x653c,	// (0x0002c38e) popup_call2_audio_second_window_t2_ParamLimits

0x653c,	// (0x0002c38e) popup_call2_audio_second_window_t2

0x658f,	// (0x0002c3e1) popup_call2_audio_second_window_t3_ParamLimits

0x658f,	// (0x0002c3e1) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0003536c) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0003536c) popup_call2_audio_second_window_t

0x2723,	// (0x00028575) bg_popup_call2_in_pane_cp02

0x272d,	// (0x0002857f) call_type_pane_cp04

0x2735,	// (0x00028587) popup_call2_audio_wait_window_g1

0x273d,	// (0x0002858f) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x00034f47) popup_call2_audio_wait_window_g

0x2745,	// (0x00028597) popup_call2_audio_wait_window_t3

0x6682,	// (0x0002c4d4) bg_popup_call2_act_pane_ParamLimits

0x6682,	// (0x0002c4d4) bg_popup_call2_act_pane

0x6742,	// (0x0002c594) call_type_pane_cp03_ParamLimits

0x6742,	// (0x0002c594) call_type_pane_cp03

0x67a6,	// (0x0002c5f8) popup_call2_audio_first_window_g1_ParamLimits

0x67a6,	// (0x0002c5f8) popup_call2_audio_first_window_g1

0x6816,	// (0x0002c668) popup_call2_audio_first_window_g2_ParamLimits

0x6816,	// (0x0002c668) popup_call2_audio_first_window_g2

0x5753,	// (0x0002b5a5) popup_call2_audio_first_window_g3_ParamLimits

0x5753,	// (0x0002b5a5) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x00035375) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x00035375) popup_call2_audio_first_window_g

0x68f4,	// (0x0002c746) popup_call2_audio_first_window_t1_ParamLimits

0x68f4,	// (0x0002c746) popup_call2_audio_first_window_t1

0x69f7,	// (0x0002c849) popup_call2_audio_first_window_t4_ParamLimits

0x69f7,	// (0x0002c849) popup_call2_audio_first_window_t4

0xb7a8,	// (0x000315fa) popup_call2_audio_first_window_t5_ParamLimits

0xb7a8,	// (0x000315fa) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x00035380) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x00035380) popup_call2_audio_first_window_t

0x2976,	// (0x000287c8) bg_popup_call2_act_pane_g1

0xbe55,	// (0x00031ca7) popup_cale_lunar_info_window_t1

0xbe63,	// (0x00031cb5) popup_cale_lunar_info_window_t2

0xbe71,	// (0x00031cc3) popup_cale_lunar_info_window_t3

0x2723,	// (0x00028575) bg_popup_call2_bubble_pane

0xb8a9,	// (0x000316fb) bg_popup_call2_in_pane_cp01_ParamLimits

0xb8a9,	// (0x000316fb) bg_popup_call2_in_pane_cp01

0x23db,	// (0x0002822d) call_type_pane_cp02

0xb8f1,	// (0x00031743) popup_call2_audio_out_window_g1_ParamLimits

0xb8f1,	// (0x00031743) popup_call2_audio_out_window_g1

0xb91d,	// (0x0003176f) popup_call2_audio_out_window_g2_ParamLimits

0xb91d,	// (0x0003176f) popup_call2_audio_out_window_g2

0xb945,	// (0x00031797) popup_call2_audio_out_window_g3_ParamLimits

0xb945,	// (0x00031797) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x00035389) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x00035389) popup_call2_audio_out_window_g

0xb980,	// (0x000317d2) popup_call2_audio_out_window_t1_ParamLimits

0xb980,	// (0x000317d2) popup_call2_audio_out_window_t1

0xb9df,	// (0x00031831) popup_call2_audio_out_window_t2_ParamLimits

0xb9df,	// (0x00031831) popup_call2_audio_out_window_t2

0xba33,	// (0x00031885) popup_call2_audio_out_window_t3_ParamLimits

0xba33,	// (0x00031885) popup_call2_audio_out_window_t3

0xba49,	// (0x0003189b) popup_call2_audio_out_window_t4_ParamLimits

0xba49,	// (0x0003189b) popup_call2_audio_out_window_t4

0xba5f,	// (0x000318b1) popup_call2_audio_out_window_t5_ParamLimits

0xba5f,	// (0x000318b1) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x00035392) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x00035392) popup_call2_audio_out_window_t

0xbac3,	// (0x00031915) bg_popup_call2_in_pane_ParamLimits

0xbac3,	// (0x00031915) bg_popup_call2_in_pane

0xbb1f,	// (0x00031971) popup_call2_audio_in_window_g1_ParamLimits

0xbb1f,	// (0x00031971) popup_call2_audio_in_window_g1

0xbb57,	// (0x000319a9) popup_call2_audio_in_window_g2_ParamLimits

0xbb57,	// (0x000319a9) popup_call2_audio_in_window_g2

0xbb8f,	// (0x000319e1) popup_call2_audio_in_window_g3_ParamLimits

0xbb8f,	// (0x000319e1) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0003539f) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0003539f) popup_call2_audio_in_window_g

0xbbe7,	// (0x00031a39) popup_call2_audio_in_window_t1_ParamLimits

0xbbe7,	// (0x00031a39) popup_call2_audio_in_window_t1

0xbc67,	// (0x00031ab9) popup_call2_audio_in_window_t2_ParamLimits

0xbc67,	// (0x00031ab9) popup_call2_audio_in_window_t2

0xbce7,	// (0x00031b39) popup_call2_audio_in_window_t3_ParamLimits

0xbce7,	// (0x00031b39) popup_call2_audio_in_window_t3

0xbd01,	// (0x00031b53) popup_call2_audio_in_window_t4_ParamLimits

0xbd01,	// (0x00031b53) popup_call2_audio_in_window_t4

0xbd13,	// (0x00031b65) popup_call2_audio_in_window_t5_ParamLimits

0xbd13,	// (0x00031b65) popup_call2_audio_in_window_t5

0xbd28,	// (0x00031b7a) popup_call2_audio_in_window_t6_ParamLimits

0xbd28,	// (0x00031b7a) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x000353a8) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x000353a8) popup_call2_audio_in_window_t

0x2976,	// (0x000287c8) bg_popup_call2_in_pane_g1

0xbe7f,	// (0x00031cd1) popup_cale_lunar_info_window_t4

0x0003,

0xf5d1,	// (0x00035423) popup_cale_lunar_info_window_t

0x297e,	// (0x000287d0) bg_popup_call2_rect_pane_ParamLimits

0x297e,	// (0x000287d0) bg_popup_call2_rect_pane

0x2723,	// (0x00028575) call2_cli_visual_graphic_pane

0x2723,	// (0x00028575) call2_cli_visual_text_pane

0xc07c,	// (0x00031ece) smil_status_volume_pane_g3

0x0002,

0x2cda,	// (0x00028b2c) call2_cli_visual_graphic_pane_g1

0x2cda,	// (0x00028b2c) call2_cli_visual_graphic_pane_g2

0x2cda,	// (0x00028b2c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x000353b5) call2_cli_visual_graphic_pane_g

0xbd3d,	// (0x00031b8f) bg_popup_call2_rect_pane_g1

0x2df3,	// (0x00028c45) bg_popup_call2_rect_pane_g2

0xbd45,	// (0x00031b97) bg_popup_call2_rect_pane_g3

0xbd4d,	// (0x00031b9f) bg_popup_call2_rect_pane_g4

0xbd55,	// (0x00031ba7) bg_popup_call2_rect_pane_g5

0xbd5d,	// (0x00031baf) bg_popup_call2_rect_pane_g6

0xbd65,	// (0x00031bb7) bg_popup_call2_rect_pane_g7

0xbd6d,	// (0x00031bbf) bg_popup_call2_rect_pane_g8

0xbd75,	// (0x00031bc7) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x000353bc) bg_popup_call2_rect_pane_g

0xbd7d,	// (0x00031bcf) bg_popup_call2_bubble_pane_g1

0xbd85,	// (0x00031bd7) bg_popup_call2_bubble_pane_g2

0xbd8d,	// (0x00031bdf) bg_popup_call2_bubble_pane_g3

0xbd95,	// (0x00031be7) bg_popup_call2_bubble_pane_g4

0xbd9d,	// (0x00031bef) bg_popup_call2_bubble_pane_g5

0xbda5,	// (0x00031bf7) bg_popup_call2_bubble_pane_g6

0xbdad,	// (0x00031bff) bg_popup_call2_bubble_pane_g7

0xbdb5,	// (0x00031c07) bg_popup_call2_bubble_pane_g8

0xbdbd,	// (0x00031c0f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x000353cf) bg_popup_call2_bubble_pane_g

0x2e8e,	// (0x00028ce0) aid_cale_week_size_cell_pane

0x34b8,	// (0x0002930a) aid_cams_cif_uncrop_pane_ParamLimits

0x34b8,	// (0x0002930a) aid_cams_cif_uncrop_pane

0x3697,	// (0x000294e9) aid_cams_size_cell_ParamLimits

0x3697,	// (0x000294e9) aid_cams_size_cell

0x36ab,	// (0x000294fd) grid_cams_pane_ParamLimits

0x36c0,	// (0x00029512) linegrid_cams_pane_ParamLimits

0x38c9,	// (0x0002971b) call_video_pane_t1

0x38e3,	// (0x00029735) call_video_pane_t2

0x0001,

0xf26a,	// (0x000350bc) call_video_pane_t

0x3eda,	// (0x00029d2c) aid_cale_month_size_cell_pane_ParamLimits

0x3eda,	// (0x00029d2c) aid_cale_month_size_cell_pane

0xf61a,	// (0x0003546c) smil_status_volume_pane_g

0xc089,	// (0x00031edb) volume_smil_pane_ParamLimits

0xb592,	// (0x000313e4) aid_popup2_width_pane

0x2d4b,	// (0x00028b9d) cell_qdial_pane_g4_ParamLimits

0x2d4b,	// (0x00028b9d) cell_qdial_pane_g4

0x5222,	// (0x0002b074) aid_blid_cardinal_pane_ParamLimits

0x522e,	// (0x0002b080) aid_blid_destination_pane_ParamLimits

0x522e,	// (0x0002b080) aid_blid_destination_pane

0x297e,	// (0x000287d0) bg_popup_call_poc_act_pane_ParamLimits

0x297e,	// (0x000287d0) bg_popup_call_poc_act_pane

0x297e,	// (0x000287d0) bg_popup_call_poc_inact_pane_ParamLimits

0x297e,	// (0x000287d0) bg_popup_call_poc_inact_pane

0xbdc5,	// (0x00031c17) bg_popup_call_poc_act_pane_g1

0xbdcd,	// (0x00031c1f) bg_popup_call_poc_act_pane_g2

0xbdd5,	// (0x00031c27) bg_popup_call_poc_act_pane_g3

0xbd95,	// (0x00031be7) bg_popup_call_poc_act_pane_g4

0xbd9d,	// (0x00031bef) bg_popup_call_poc_act_pane_g5

0xbddd,	// (0x00031c2f) bg_popup_call_poc_act_pane_g6

0xbdad,	// (0x00031bff) bg_popup_call_poc_act_pane_g7

0xbde5,	// (0x00031c37) bg_popup_call_poc_act_pane_g8

0x2723,	// (0x00028575) main_usb_pane

0xbf94,	// (0x00031de6) popup_cale_lunar_info_window

0x3b86,	// (0x000299d8) im_reading_pane_t1_ParamLimits

0x3bbc,	// (0x00029a0e) list_im_pane_ParamLimits

0x3bcd,	// (0x00029a1f) scroll_pane_cp07_ParamLimits

0x2723,	// (0x00028575) grid_highlight_pane_cp012

0x297e,	// (0x000287d0) mup_scale_pane_ParamLimits

0x5bdb,	// (0x0002ba2d) main_usb_pane_g1_ParamLimits

0x5bdb,	// (0x0002ba2d) main_usb_pane_g1

0x6afc,	// (0x0002c94e) main_usb_pane_g2_ParamLimits

0x6afc,	// (0x0002c94e) main_usb_pane_g2

0x0001,

0xf5ba,	// (0x0003540c) main_usb_pane_g_ParamLimits

0xf5ba,	// (0x0003540c) main_usb_pane_g

0x6b10,	// (0x0002c962) main_usb_pane_t1_ParamLimits

0x6b10,	// (0x0002c962) main_usb_pane_t1

0x6b22,	// (0x0002c974) main_usb_pane_t2_ParamLimits

0x6b22,	// (0x0002c974) main_usb_pane_t2

0x6b34,	// (0x0002c986) main_usb_pane_t3_ParamLimits

0x6b34,	// (0x0002c986) main_usb_pane_t3

0x6b46,	// (0x0002c998) main_usb_pane_t4_ParamLimits

0x6b46,	// (0x0002c998) main_usb_pane_t4

0x6b58,	// (0x0002c9aa) main_usb_pane_t5_ParamLimits

0x6b58,	// (0x0002c9aa) main_usb_pane_t5

0x6b6a,	// (0x0002c9bc) main_usb_pane_t6_ParamLimits

0x6b6a,	// (0x0002c9bc) main_usb_pane_t6

0x0005,

0xf5bf,	// (0x00035411) main_usb_pane_t_ParamLimits

0x51bc,	// (0x0002b00e) aid_text_placing

0x51ce,	// (0x0002b020) main_location2_pane_t1_ParamLimits

0x51e4,	// (0x0002b036) main_location2_pane_t2_ParamLimits

0x51fa,	// (0x0002b04c) main_location2_pane_t3_ParamLimits

0x5210,	// (0x0002b062) main_location2_pane_t4_ParamLimits

0x5210,	// (0x0002b062) main_location2_pane_t4

0xf3cb,	// (0x0003521d) main_location2_pane_t_ParamLimits

0x2a48,	// (0x0002889a) find_pinb_pane_g2_ParamLimits

0x2a48,	// (0x0002889a) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x00034f6d) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x00034f6d) find_pinb_pane_g

0x2a54,	// (0x000288a6) find_pinb_pane_t1_ParamLimits

0x2a66,	// (0x000288b8) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x00034f72) find_pinb_pane_t_ParamLimits

0x2723,	// (0x00028575) main_call3_pane

0x4314,	// (0x0002a166) cale_month_day_heading_pane_t1_ParamLimits

0x439a,	// (0x0002a1ec) cale_month_day_heading_pane_t2_ParamLimits

0x442b,	// (0x0002a27d) cale_month_day_heading_pane_t3_ParamLimits

0x44bc,	// (0x0002a30e) cale_month_day_heading_pane_t4_ParamLimits

0x454d,	// (0x0002a39f) cale_month_day_heading_pane_t5_ParamLimits

0x45de,	// (0x0002a430) cale_month_day_heading_pane_t6_ParamLimits

0x466f,	// (0x0002a4c1) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x000350f4) cale_month_day_heading_pane_t_ParamLimits

0x48df,	// (0x0002a731) smil_status_volume_pane

0x5bb7,	// (0x0002ba09) postcard_address_pane_ParamLimits

0x5bb7,	// (0x0002ba09) postcard_address_pane

0x5bc9,	// (0x0002ba1b) postcard_message_pane_ParamLimits

0x5bc9,	// (0x0002ba1b) postcard_message_pane

0x6ada,	// (0x0002c92c) call2_cli_visual_pane_t1_ParamLimits

0x6ada,	// (0x0002c92c) call2_cli_visual_pane_t1

0x6fe0,	// (0x0002ce32) postcard_message_pane_t1_ParamLimits

0x6fe0,	// (0x0002ce32) postcard_message_pane_t1

0x6fc9,	// (0x0002ce1b) postcard_address_pane_t1_ParamLimits

0x6fc9,	// (0x0002ce1b) postcard_address_pane_t1

0x6fb7,	// (0x0002ce09) popup_call3_audio_in_window_ParamLimits

0x6fb7,	// (0x0002ce09) popup_call3_audio_in_window

0x6e46,	// (0x0002cc98) bg_popup_call3_in_pane_ParamLimits

0x6e46,	// (0x0002cc98) bg_popup_call3_in_pane

0x6eb8,	// (0x0002cd0a) popup_call3_audio_in_window_g1_ParamLimits

0x6eb8,	// (0x0002cd0a) popup_call3_audio_in_window_g1

0x6ed8,	// (0x0002cd2a) popup_call3_audio_in_window_g2_ParamLimits

0x6ed8,	// (0x0002cd2a) popup_call3_audio_in_window_g2

0x6ef8,	// (0x0002cd4a) popup_call3_audio_in_window_g3_ParamLimits

0x6ef8,	// (0x0002cd4a) popup_call3_audio_in_window_g3

0x0003,

0xf621,	// (0x00035473) popup_call3_audio_in_window_g_ParamLimits

0xf621,	// (0x00035473) popup_call3_audio_in_window_g

0x6f29,	// (0x0002cd7b) popup_call3_audio_in_window_t1_ParamLimits

0x6f29,	// (0x0002cd7b) popup_call3_audio_in_window_t1

0x6f67,	// (0x0002cdb9) popup_call3_audio_in_window_t2_ParamLimits

0x6f67,	// (0x0002cdb9) popup_call3_audio_in_window_t2

0x6fa5,	// (0x0002cdf7) popup_call3_audio_in_window_t3_ParamLimits

0x6fa5,	// (0x0002cdf7) popup_call3_audio_in_window_t3

0x0002,

0xf62a,	// (0x0003547c) popup_call3_audio_in_window_t_ParamLimits

0xf62a,	// (0x0003547c) popup_call3_audio_in_window_t

0x336e,	// (0x000291c0) bg_popup_call3_rect_pane

0xbd3d,	// (0x00031b8f) bg_popup_call3_rect_pane_g1

0x2df3,	// (0x00028c45) bg_popup_call3_rect_pane_g2

0xbd45,	// (0x00031b97) bg_popup_call3_rect_pane_g3

0xbd4d,	// (0x00031b9f) bg_popup_call3_rect_pane_g4

0xbd55,	// (0x00031ba7) bg_popup_call3_rect_pane_g5

0xbd5d,	// (0x00031baf) bg_popup_call3_rect_pane_g6

0xbd65,	// (0x00031bb7) bg_popup_call3_rect_pane_g7

0x574b,	// (0x0002b59d) mup_visualizer_osc_pane

0x5761,	// (0x0002b5b3) mup_visualizer_spec_pane

0x6e76,	// (0x0002ccc8) call3_video_qcif_pane_ParamLimits

0x6e76,	// (0x0002ccc8) call3_video_qcif_pane

0x6e87,	// (0x0002ccd9) call3_video_qcif_uncrop_pane_ParamLimits

0x6e87,	// (0x0002ccd9) call3_video_qcif_uncrop_pane

0x6e93,	// (0x0002cce5) call3_video_subqcif_pane_ParamLimits

0x6e93,	// (0x0002cce5) call3_video_subqcif_pane

0x6ea7,	// (0x0002ccf9) call3_video_subqcif_uncrop_pane_ParamLimits

0x6ea7,	// (0x0002ccf9) call3_video_subqcif_uncrop_pane

0x6f18,	// (0x0002cd6a) popup_call3_audio_in_window_g4_ParamLimits

0x6f18,	// (0x0002cd6a) popup_call3_audio_in_window_g4

0x6e35,	// (0x0002cc87) mup_spec_half_pane

0x6e3e,	// (0x0002cc90) mup_spec_half_pane_cp

0xc03c,	// (0x00031e8e) mup_osc_middle_pane

0xc045,	// (0x00031e97) mup_visualizer_osc_pane_g1

0x6e16,	// (0x0002cc68) mup_spec_bar_pane_ParamLimits

0x6e16,	// (0x0002cc68) mup_spec_bar_pane

0xc029,	// (0x00031e7b) mup_spec_bar_pane_g1

0xc033,	// (0x00031e85) mup_spec_bar_pane_g2

0x0001,

0xf615,	// (0x00035467) mup_spec_bar_pane_g

0x2e8e,	// (0x00028ce0) aid_cale_week_size_cell_pane_ParamLimits

0x2ea8,	// (0x00028cfa) bg_cale_heading_pane_ParamLimits

0x2ec0,	// (0x00028d12) bg_cale_pane_cp01_ParamLimits

0x2edd,	// (0x00028d2f) cale_week_corner_pane_ParamLimits

0x2efc,	// (0x00028d4e) cale_week_day_heading_pane_ParamLimits

0x2f19,	// (0x00028d6b) cale_week_scroll_pane_g1_ParamLimits

0x2f2c,	// (0x00028d7e) cale_week_scroll_pane_g2_ParamLimits

0x2f44,	// (0x00028d96) cale_week_scroll_pane_g3_ParamLimits

0x2f5c,	// (0x00028dae) cale_week_scroll_pane_g4_ParamLimits

0x2f74,	// (0x00028dc6) cale_week_scroll_pane_g5_ParamLimits

0x2f8c,	// (0x00028dde) cale_week_scroll_pane_g6_ParamLimits

0x2fa4,	// (0x00028df6) cale_week_scroll_pane_g7_ParamLimits

0x2fbc,	// (0x00028e0e) cale_week_scroll_pane_g8_ParamLimits

0x2fd8,	// (0x00028e2a) cale_week_scroll_pane_g9_ParamLimits

0x2ff0,	// (0x00028e42) cale_week_scroll_pane_g10_ParamLimits

0x3008,	// (0x00028e5a) cale_week_scroll_pane_g11_ParamLimits

0x3020,	// (0x00028e72) cale_week_scroll_pane_g12_ParamLimits

0x3038,	// (0x00028e8a) cale_week_scroll_pane_g13_ParamLimits

0x3050,	// (0x00028ea2) cale_week_scroll_pane_g14_ParamLimits

0x3068,	// (0x00028eba) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x00034ffe) cale_week_scroll_pane_g_ParamLimits

0x309c,	// (0x00028eee) cale_week_time_pane_ParamLimits

0x30b8,	// (0x00028f0a) grid_cale_week_pane_ParamLimits

0x30d6,	// (0x00028f28) listscroll_cale_week_pane_t1

0x30e8,	// (0x00028f3a) scroll_pane_cp08_ParamLimits

0x3f5c,	// (0x00029dae) cale_month_corner_pane_ParamLimits

0x42b8,	// (0x0002a10a) cale_month_pane_t1

0x42ca,	// (0x0002a11c) cale_month_week_pane_ParamLimits

0x4e17,	// (0x0002ac69) popup_call_status_window_g1_ParamLimits

0x4e2b,	// (0x0002ac7d) popup_call_status_window_g2_ParamLimits

0x4e3f,	// (0x0002ac91) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x000351a4) popup_call_status_window_g_ParamLimits

0x4ea5,	// (0x0002acf7) aid_call2_pane

0x5a23,	// (0x0002b875) msg_header_pane_g1

0x5bb7,	// (0x0002ba09) postcard_address2_pane_ParamLimits

0x5bb7,	// (0x0002ba09) postcard_address2_pane

0x5bc9,	// (0x0002ba1b) postcard_message2_pane_ParamLimits

0x5bc9,	// (0x0002ba1b) postcard_message2_pane

0x6dd2,	// (0x0002cc24) message2_row_pane_ParamLimits

0x6dd2,	// (0x0002cc24) message2_row_pane

0x6dec,	// (0x0002cc3e) address2_row_pane_ParamLimits

0x6dec,	// (0x0002cc3e) address2_row_pane

0xbff7,	// (0x00031e49) postcard_message2_row_pane_g1

0xbfff,	// (0x00031e51) postcard_message2_row_pane_t1

0xbff7,	// (0x00031e49) address2_row_pane_g1

0xbfff,	// (0x00031e51) address2_row_pane_t1

0x3366,	// (0x000291b8) aid_size_cell_vorec

0x2723,	// (0x00028575) main_rss_pane

0x6dff,	// (0x0002cc51) rss_list_single_pane_ParamLimits

0x6dff,	// (0x0002cc51) rss_list_single_pane

0xc00d,	// (0x00031e5f) rss_list_single_pane_t1

0xc01b,	// (0x00031e6d) rss_list_single_pane_t2

0x0001,

0xf610,	// (0x00035462) rss_list_single_pane_t

0x2723,	// (0x00028575) main_camera2_pane

0x2723,	// (0x00028575) main_video2_pane

0x13b1,	// (0x00027203) cams_zoom_pane_cp2_ParamLimits

0x13b1,	// (0x00027203) cams_zoom_pane_cp2

0x13c8,	// (0x0002721a) image2_vga_pane_ParamLimits

0x13c8,	// (0x0002721a) image2_vga_pane

0x13fe,	// (0x00027250) main_camera2_pane_g1_ParamLimits

0x13fe,	// (0x00027250) main_camera2_pane_g1

0x141e,	// (0x00027270) main_camera2_pane_g2_ParamLimits

0x141e,	// (0x00027270) main_camera2_pane_g2

0x1435,	// (0x00027287) main_camera2_pane_g3_ParamLimits

0x1435,	// (0x00027287) main_camera2_pane_g3

0x144c,	// (0x0002729e) main_camera2_pane_g4_ParamLimits

0x144c,	// (0x0002729e) main_camera2_pane_g4

0x1463,	// (0x000272b5) main_camera2_pane_g5_ParamLimits

0x1463,	// (0x000272b5) main_camera2_pane_g5

0x147a,	// (0x000272cc) main_camera2_pane_g6_ParamLimits

0x147a,	// (0x000272cc) main_camera2_pane_g6

0x1491,	// (0x000272e3) main_camera2_pane_g7_ParamLimits

0x1491,	// (0x000272e3) main_camera2_pane_g7

0x14a8,	// (0x000272fa) main_camera2_pane_g8_ParamLimits

0x14a8,	// (0x000272fa) main_camera2_pane_g8

0x0008,

0xf631,	// (0x00035483) main_camera2_pane_g_ParamLimits

0xf631,	// (0x00035483) main_camera2_pane_g

0x14d6,	// (0x00027328) main_camera2_pane_t1_ParamLimits

0x14d6,	// (0x00027328) main_camera2_pane_t1

0x1505,	// (0x00027357) main_camera2_pane_t2_ParamLimits

0x1505,	// (0x00027357) main_camera2_pane_t2

0x1522,	// (0x00027374) main_camera2_pane_t3_ParamLimits

0x1522,	// (0x00027374) main_camera2_pane_t3

0x156e,	// (0x000273c0) main_camera2_pane_t4_ParamLimits

0x156e,	// (0x000273c0) main_camera2_pane_t4

0x0006,

0xf644,	// (0x00035496) main_camera2_pane_t_ParamLimits

0xf644,	// (0x00035496) main_camera2_pane_t

0x15e3,	// (0x00027435) cams_zoom_pane_cp4_ParamLimits

0x15e3,	// (0x00027435) cams_zoom_pane_cp4

0x15f9,	// (0x0002744b) image2_cif_pane_ParamLimits

0x15f9,	// (0x0002744b) image2_cif_pane

0x161c,	// (0x0002746e) image2_subqcif_pane_ParamLimits

0x161c,	// (0x0002746e) image2_subqcif_pane

0x1632,	// (0x00027484) main_video2_pane_g1_ParamLimits

0x1632,	// (0x00027484) main_video2_pane_g1

0x164c,	// (0x0002749e) main_video2_pane_g2_ParamLimits

0x164c,	// (0x0002749e) main_video2_pane_g2

0x1662,	// (0x000274b4) main_video2_pane_g3_ParamLimits

0x1662,	// (0x000274b4) main_video2_pane_g3

0x1678,	// (0x000274ca) main_video2_pane_g4_ParamLimits

0x1678,	// (0x000274ca) main_video2_pane_g4

0x168e,	// (0x000274e0) main_video2_pane_g5_ParamLimits

0x168e,	// (0x000274e0) main_video2_pane_g5

0x16a4,	// (0x000274f6) main_video2_pane_g6_ParamLimits

0x16a4,	// (0x000274f6) main_video2_pane_g6

0x0005,

0xf653,	// (0x000354a5) main_video2_pane_g_ParamLimits

0xf653,	// (0x000354a5) main_video2_pane_g

0x16be,	// (0x00027510) main_video2_pane_t1_ParamLimits

0x16be,	// (0x00027510) main_video2_pane_t1

0x16e2,	// (0x00027534) main_video2_pane_t2_ParamLimits

0x16e2,	// (0x00027534) main_video2_pane_t2

0x172c,	// (0x0002757e) main_video2_pane_t3_ParamLimits

0x172c,	// (0x0002757e) main_video2_pane_t3

0x0002,

0xf660,	// (0x000354b2) main_video2_pane_t_ParamLimits

0xf660,	// (0x000354b2) main_video2_pane_t

0x6c19,	// (0x0002ca6b) call_muted_g2

0x0001,

0xf602,	// (0x00035454) call_muted_g

0x2723,	// (0x00028575) main_mup2_pane

0x6ffb,	// (0x0002ce4d) main_mup2_pane_g1_ParamLimits

0x6ffb,	// (0x0002ce4d) main_mup2_pane_g1

0x7007,	// (0x0002ce59) main_mup2_pane_g2_ParamLimits

0x7007,	// (0x0002ce59) main_mup2_pane_g2

0xc1a8,	// (0x00031ffa) main_mup_pane_g13_cp1

0xc1b0,	// (0x00032002) mup_volume_pane_cp1

0x7023,	// (0x0002ce75) main_mup2_pane_g4_ParamLimits

0x7023,	// (0x0002ce75) main_mup2_pane_g4

0x7033,	// (0x0002ce85) main_mup2_pane_g5_ParamLimits

0x7033,	// (0x0002ce85) main_mup2_pane_g5

0x7043,	// (0x0002ce95) main_mup2_pane_g6_ParamLimits

0x7043,	// (0x0002ce95) main_mup2_pane_g6

0x7053,	// (0x0002cea5) main_mup2_pane_g7_ParamLimits

0x7053,	// (0x0002cea5) main_mup2_pane_g7

0x0006,

0xf667,	// (0x000354b9) main_mup2_pane_g_ParamLimits

0xf667,	// (0x000354b9) main_mup2_pane_g

0x706b,	// (0x0002cebd) main_mup2_pane_t1_ParamLimits

0x706b,	// (0x0002cebd) main_mup2_pane_t1

0x7081,	// (0x0002ced3) main_mup2_pane_t2_ParamLimits

0x7081,	// (0x0002ced3) main_mup2_pane_t2

0x7097,	// (0x0002cee9) main_mup2_pane_t3_ParamLimits

0x7097,	// (0x0002cee9) main_mup2_pane_t3

0x70ad,	// (0x0002ceff) main_mup2_pane_t4_ParamLimits

0x70ad,	// (0x0002ceff) main_mup2_pane_t4

0x70c5,	// (0x0002cf17) main_mup2_pane_t5_ParamLimits

0x70c5,	// (0x0002cf17) main_mup2_pane_t5

0x70dd,	// (0x0002cf2f) main_mup2_pane_t6_ParamLimits

0x70dd,	// (0x0002cf2f) main_mup2_pane_t6

0x0005,

0xf676,	// (0x000354c8) main_mup2_pane_t_ParamLimits

0xf676,	// (0x000354c8) main_mup2_pane_t

0x710d,	// (0x0002cf5f) mup2_visualizer_pane_ParamLimits

0x710d,	// (0x0002cf5f) mup2_visualizer_pane

0x7138,	// (0x0002cf8a) mup_progress_pane_cp_ParamLimits

0x7138,	// (0x0002cf8a) mup_progress_pane_cp

0xc18a,	// (0x00031fdc) mup_volume_pane_cp_ParamLimits

0xc18a,	// (0x00031fdc) mup_volume_pane_cp

0x714c,	// (0x0002cf9e) mup2_visualizer_pane_g1_ParamLimits

0x714c,	// (0x0002cf9e) mup2_visualizer_pane_g1

0xc0c9,	// (0x00031f1b) mup2_visualizer_pane_g2_ParamLimits

0xc0c9,	// (0x00031f1b) mup2_visualizer_pane_g2

0x7161,	// (0x0002cfb3) mup2_visualizer_pane_g3_ParamLimits

0x7161,	// (0x0002cfb3) mup2_visualizer_pane_g3

0x0002,

0xf683,	// (0x000354d5) mup2_visualizer_pane_g_ParamLimits

0xf683,	// (0x000354d5) mup2_visualizer_pane_g

0x5f65,	// (0x0002bdb7) aid_size_cell_fmradio

0x1111,	// (0x00026f63) aid_height_parent_landcape

0x3c85,	// (0x00029ad7) wml_content_pane_cp

0x3c8d,	// (0x00029adf) wml_tabs_pane

0x3c96,	// (0x00029ae8) popup_wml_miniature_window

0x3c9e,	// (0x00029af0) scroll_pane_cp021

0x3cb2,	// (0x00029b04) wml_content_pane_comp8

0x2723,	// (0x00028575) bg_popup_sub_pane_cp05

0xc0e7,	// (0x00031f39) popup_wml_miniature_window_g1

0xc0ef,	// (0x00031f41) wml_miniature_view_pane

0x716d,	// (0x0002cfbf) aid_size_wml_view

0x7175,	// (0x0002cfc7) wml_miniature_view_pane_g1

0x717e,	// (0x0002cfd0) wml_miniature_view_pane_g2

0x7187,	// (0x0002cfd9) wml_miniature_view_pane_g3

0x718f,	// (0x0002cfe1) wml_miniature_view_pane_g4

0x7197,	// (0x0002cfe9) wml_miniature_view_pane_g5

0x719f,	// (0x0002cff1) wml_miniature_view_pane_g6

0x71a7,	// (0x0002cff9) wml_miniature_view_pane_g7

0x71af,	// (0x0002d001) wml_miniature_view_pane_g8

0x0007,

0xf68a,	// (0x000354dc) wml_miniature_view_pane_g

0xc0f7,	// (0x00031f49) background_graphic_ParamLimits

0xc0f7,	// (0x00031f49) background_graphic

0xc103,	// (0x00031f55) wml_tabs_2_pane

0xc10c,	// (0x00031f5e) wml_tabs_3_pane_ParamLimits

0xc10c,	// (0x00031f5e) wml_tabs_3_pane

0xc11e,	// (0x00031f70) wml_tabs_4_pane_ParamLimits

0xc11e,	// (0x00031f70) wml_tabs_4_pane

0xc134,	// (0x00031f86) wml_tabs_5_pane_ParamLimits

0xc134,	// (0x00031f86) wml_tabs_5_pane

0xc14e,	// (0x00031fa0) wml_tabs_pane_g2_ParamLimits

0xc14e,	// (0x00031fa0) wml_tabs_pane_g2

0xc162,	// (0x00031fb4) wml_tabs_pane_g3_ParamLimits

0xc162,	// (0x00031fb4) wml_tabs_pane_g3

0x71b7,	// (0x0002d009) wml_tabs_2_active_pane_ParamLimits

0x71b7,	// (0x0002d009) wml_tabs_2_active_pane

0x71c7,	// (0x0002d019) wml_tabs_2_passive_pane_ParamLimits

0x71c7,	// (0x0002d019) wml_tabs_2_passive_pane

0x71d7,	// (0x0002d029) wml_tabs_3_active_pane_cp_ParamLimits

0x71d7,	// (0x0002d029) wml_tabs_3_active_pane_cp

0x71e8,	// (0x0002d03a) wml_tabs_3_passive_pane_ParamLimits

0x71e8,	// (0x0002d03a) wml_tabs_3_passive_pane

0x71f9,	// (0x0002d04b) wml_tabs_3_passive_pane_cp_ParamLimits

0x71f9,	// (0x0002d04b) wml_tabs_3_passive_pane_cp

0x720a,	// (0x0002d05c) tabs_4_active_pane

0x7212,	// (0x0002d064) tabs_4_passive_pane

0x721a,	// (0x0002d06c) tabs_4_passive_pane_cp

0x7222,	// (0x0002d074) tabs_4_passive_pane_cp2

0x6af4,	// (0x0002c946) aid_height_text

0x5721,	// (0x0002b573) mup_volume_cont_pane_ParamLimits

0x5721,	// (0x0002b573) mup_volume_cont_pane

0x2a06,	// (0x00028858) aid_size_cell_pinb

0x2a10,	// (0x00028862) aid_size_list_pinb

0x7124,	// (0x0002cf76) mup2_volume_cont_pane_ParamLimits

0x7124,	// (0x0002cf76) mup2_volume_cont_pane

0xc176,	// (0x00031fc8) mup2_volume_cont_pane_g1_ParamLimits

0xc176,	// (0x00031fc8) mup2_volume_cont_pane_g1

0x0c0e,	// (0x00026a60) aid_size_cell_touch_ParamLimits

0x0c0e,	// (0x00026a60) aid_size_cell_touch

0x0dbf,	// (0x00026c11) touch_pane_ParamLimits

0x0dbf,	// (0x00026c11) touch_pane

0xb5e1,	// (0x00031433) main_rss2_pane

0xc1b8,	// (0x0003200a) listscroll_rss2_pane

0xc1c1,	// (0x00032013) rss2_navigation_pane

0xc1c9,	// (0x0003201b) list_rss2_pane

0x504d,	// (0x0002ae9f) scroll_pane_cp22

0xc1d1,	// (0x00032023) rss2_navigation_pane_g1

0xc1da,	// (0x0003202c) rss2_navigation_pane_g2

0xc1e2,	// (0x00032034) rss2_navigation_pane_g3

0x0002,

0xf69b,	// (0x000354ed) rss2_navigation_pane_g

0xc1ea,	// (0x0003203c) rss2_navigation_pane_t1

0x722a,	// (0x0002d07c) rss2_list_single_pane_ParamLimits

0x722a,	// (0x0002d07c) rss2_list_single_pane

0xc1f8,	// (0x0003204a) rss2_list_single_pane_t2

0xc206,	// (0x00032058) rss2_list_single_pane_t3_ParamLimits

0xc206,	// (0x00032058) rss2_list_single_pane_t3

0xc223,	// (0x00032075) rss2_list_single_pane_t4

0x48c9,	// (0x0002a71b) smil_status_pane_g1

0xb5d3,	// (0x00031425) main_image2_pane_ParamLimits

0xb5d3,	// (0x00031425) main_image2_pane

0x14bf,	// (0x00027311) main_camera2_pane_g9_ParamLimits

0x14bf,	// (0x00027311) main_camera2_pane_g9

0x15b1,	// (0x00027403) main_camera2_pane_t5_ParamLimits

0x15b1,	// (0x00027403) main_camera2_pane_t5

0xc09e,	// (0x00031ef0) main_camera2_pane_t6_ParamLimits

0xc09e,	// (0x00031ef0) main_camera2_pane_t6

0x723e,	// (0x0002d090) main_image2_pane_g1_ParamLimits

0x723e,	// (0x0002d090) main_image2_pane_g1

0x5f27,	// (0x0002bd79) smil2_video_pane_ParamLimits

0x5f27,	// (0x0002bd79) smil2_video_pane

0xb59a,	// (0x000313ec) aid_zoom_text_primary_cp

0xb5cb,	// (0x0003141d) popup_preview_fixed_window

0x3b7e,	// (0x000299d0) im_reading_pane_g1

0x13a5,	// (0x000271f7) cams2_bc_adjust_pane_cp_ParamLimits

0x13a5,	// (0x000271f7) cams2_bc_adjust_pane_cp

0x15d7,	// (0x00027429) cams2_bc_adjust_pane_ParamLimits

0x15d7,	// (0x00027429) cams2_bc_adjust_pane

0xc231,	// (0x00032083) cams2_bc_adjust_pane_g1

0xc239,	// (0x0003208b) cams2_slider_pane

0xc242,	// (0x00032094) cams2_slider_pane_g1

0xc24b,	// (0x0003209d) cams2_slider_pane_g2

0x0006,

0xf6a2,	// (0x000354f4) cams2_slider_pane_g

0x0e25,	// (0x00026c77) calc_display_pane_ParamLimits

0x0e41,	// (0x00026c93) calc_paper_pane_ParamLimits

0x0e62,	// (0x00026cb4) grid_calc_pane_ParamLimits

0xb737,	// (0x00031589) popup_clock_digital_window_t1_ParamLimits

0x5dc0,	// (0x0002bc12) main_image_pane_t1

0x0e07,	// (0x00026c59) aid_size_cell_calc_ParamLimits

0x0e07,	// (0x00026c59) aid_size_cell_calc

0x1151,	// (0x00026fa3) popup_blid_sat_info2_window_ParamLimits

0x1151,	// (0x00026fa3) popup_blid_sat_info2_window

0xc26d,	// (0x000320bf) aid_size_cell_blid

0xc275,	// (0x000320c7) bg_popup_window_pane_cp07

0xc298,	// (0x000320ea) grid_popup_blid_pane

0xc2a0,	// (0x000320f2) heading_pane_cp05_ParamLimits

0xc2a0,	// (0x000320f2) heading_pane_cp05

0xc368,	// (0x000321ba) cell_popup_blid_pane_ParamLimits

0xc368,	// (0x000321ba) cell_popup_blid_pane

0xc388,	// (0x000321da) cell_popup_blid_pane_g1

0xc390,	// (0x000321e2) cell_popup_blid_pane_t1

0x70f7,	// (0x0002cf49) mup2_indicator_pane_ParamLimits

0x70f7,	// (0x0002cf49) mup2_indicator_pane

0x336e,	// (0x000291c0) mup2_visualizer_osc_pane

0xc0d5,	// (0x00031f27) mup2_visualizer_spec_pane_ParamLimits

0xc0d5,	// (0x00031f27) mup2_visualizer_spec_pane

0x7252,	// (0x0002d0a4) mup2_spec_half_pane

0x725b,	// (0x0002d0ad) mup2_spec_half_pane_cp

0x7263,	// (0x0002d0b5) mup2_spec_bar_pane_ParamLimits

0x7263,	// (0x0002d0b5) mup2_spec_bar_pane

0xc029,	// (0x00031e7b) mup2_spec_bar_pane_g1

0xc033,	// (0x00031e85) mup2_spec_bar_pane_g2

0x0001,

0xf615,	// (0x00035467) mup2_spec_bar_pane_g

0x7282,	// (0x0002d0d4) mup2_osc_middle_pane

0xc045,	// (0x00031e97) mup2_visualizer_osc_pane_g1

0x22da,	// (0x0002812c) popup_number_entry_window_t1_ParamLimits

0x22ed,	// (0x0002813f) popup_number_entry_window_t2_ParamLimits

0x22ff,	// (0x00028151) popup_number_entry_window_t3_ParamLimits

0x2311,	// (0x00028163) popup_number_entry_window_t5_ParamLimits

0x2311,	// (0x00028163) popup_number_entry_window_t5

0xf0c6,	// (0x00034f18) popup_number_entry_window_t_ParamLimits

0x2345,	// (0x00028197) text_title_cp2_ParamLimits

0xb776,	// (0x000315c8) aid_hotspot_pointer_text2_pane

0xb79c,	// (0x000315ee) main_viewer_pane_g9_ParamLimits

0xb79c,	// (0x000315ee) main_viewer_pane_g9

0x42b8,	// (0x0002a10a) cale_month_pane_t1_ParamLimits

0x4939,	// (0x0002a78b) bg_cale_pane_ParamLimits

0x4951,	// (0x0002a7a3) list_cale_pane_ParamLimits

0x4962,	// (0x0002a7b4) listscroll_cale_day_pane_t1

0x4974,	// (0x0002a7c6) scroll_pane_cp09_ParamLimits

0x57cf,	// (0x0002b621) main_mup_eq_pane_t1_ParamLimits

0x57cf,	// (0x0002b621) main_mup_eq_pane_t1

0x57e7,	// (0x0002b639) main_mup_eq_pane_t2_ParamLimits

0x57e7,	// (0x0002b639) main_mup_eq_pane_t2

0x57fd,	// (0x0002b64f) main_mup_eq_pane_t3_ParamLimits

0x57fd,	// (0x0002b64f) main_mup_eq_pane_t3

0x5813,	// (0x0002b665) main_mup_eq_pane_t4_ParamLimits

0x5813,	// (0x0002b665) main_mup_eq_pane_t4

0x5829,	// (0x0002b67b) main_mup_eq_pane_t5_ParamLimits

0x5829,	// (0x0002b67b) main_mup_eq_pane_t5

0x583f,	// (0x0002b691) main_mup_eq_pane_t6_ParamLimits

0x583f,	// (0x0002b691) main_mup_eq_pane_t6

0x5851,	// (0x0002b6a3) main_mup_eq_pane_t7_ParamLimits

0x5851,	// (0x0002b6a3) main_mup_eq_pane_t7

0x5863,	// (0x0002b6b5) main_mup_eq_pane_t8_ParamLimits

0x5863,	// (0x0002b6b5) main_mup_eq_pane_t8

0x5875,	// (0x0002b6c7) main_mup_eq_pane_t9_ParamLimits

0x5875,	// (0x0002b6c7) main_mup_eq_pane_t9

0x588b,	// (0x0002b6dd) main_mup_eq_pane_t10_ParamLimits

0x588b,	// (0x0002b6dd) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x000352a3) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x000352a3) main_mup_eq_pane_t

0x591e,	// (0x0002b770) mup_equalizer_pane_cp5_ParamLimits

0x5930,	// (0x0002b782) mup_equalizer_pane_cp6_ParamLimits

0x5942,	// (0x0002b794) mup_equalizer_pane_cp7_ParamLimits

0xb5e1,	// (0x00031433) main_gallery_pane

0xc04e,	// (0x00031ea0) smil2_volume_pane

0xc056,	// (0x00031ea8) smil_status_volume_pane_g1_ParamLimits

0xc069,	// (0x00031ebb) smil_status_volume_pane_g2_ParamLimits

0xc07c,	// (0x00031ece) smil_status_volume_pane_g3_ParamLimits

0xf61a,	// (0x0003546c) smil_status_volume_pane_g_ParamLimits

0xc275,	// (0x000320c7) bg_popup_window_pane_cp07_ParamLimits

0xc283,	// (0x000320d5) blid_firmament_pane

0x728b,	// (0x0002d0dd) aid_size_cell_gallery_ParamLimits

0x728b,	// (0x0002d0dd) aid_size_cell_gallery

0x72a1,	// (0x0002d0f3) grid_gallery_pane_ParamLimits

0x72a1,	// (0x0002d0f3) grid_gallery_pane

0x72b5,	// (0x0002d107) cell_gallery_pane_ParamLimits

0x72b5,	// (0x0002d107) cell_gallery_pane

0xc39e,	// (0x000321f0) bg_cell_gallery_focus_pane_ParamLimits

0xc39e,	// (0x000321f0) bg_cell_gallery_focus_pane

0xc3b0,	// (0x00032202) cell_gallery_pane_g1_ParamLimits

0xc3b0,	// (0x00032202) cell_gallery_pane_g1

0x72fc,	// (0x0002d14e) cell_gallery_pane_g2_ParamLimits

0x72fc,	// (0x0002d14e) cell_gallery_pane_g2

0x7309,	// (0x0002d15b) cell_gallery_pane_g3_ParamLimits

0x7309,	// (0x0002d15b) cell_gallery_pane_g3

0xc3bc,	// (0x0003220e) cell_gallery_pane_g4_ParamLimits

0xc3bc,	// (0x0003220e) cell_gallery_pane_g4

0x0003,

0xf6c8,	// (0x0003551a) cell_gallery_pane_g_ParamLimits

0xf6c8,	// (0x0003551a) cell_gallery_pane_g

0xc3c8,	// (0x0003221a) bg_cell_gallery_focus_pane_g1

0xc3d0,	// (0x00032222) bg_cell_gallery_focus_pane_g2

0xc3d8,	// (0x0003222a) bg_cell_gallery_focus_pane_g3

0xc3e0,	// (0x00032232) bg_cell_gallery_focus_pane_g4

0xc3e8,	// (0x0003223a) bg_cell_gallery_focus_pane_g5

0xc3f0,	// (0x00032242) bg_cell_gallery_focus_pane_g6

0xc3f8,	// (0x0003224a) bg_cell_gallery_focus_pane_g7

0xc400,	// (0x00032252) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d1,	// (0x00035523) bg_cell_gallery_focus_pane_g

0xc408,	// (0x0003225a) aid_firma_cardinal

0xc41c,	// (0x0003226e) blid_firmament_pane_t1

0xc433,	// (0x00032285) blid_firmament_pane_t2

0xc44a,	// (0x0003229c) blid_firmament_pane_t3

0xc461,	// (0x000322b3) blid_firmament_pane_t4

0x0003,

0xf6e2,	// (0x00035534) blid_firmament_pane_t

0xc478,	// (0x000322ca) blid_sat_info_pane

0xc488,	// (0x000322da) blid_sat_info_pane_g1

0xc488,	// (0x000322da) blid_sat_info_pane_g2

0x0001,

0xf6eb,	// (0x0003553d) blid_sat_info_pane_g

0xc492,	// (0x000322e4) blid_sat_info_pane_t1

0xc4a0,	// (0x000322f2) smil2_volume_content_pane

0xc4a9,	// (0x000322fb) smil2_volume_pane_g1

0xc4b1,	// (0x00032303) smil2_volume_content_pane_g1

0xc4ba,	// (0x0003230c) smil2_volume_content_pane_g2

0xc4c3,	// (0x00032315) smil2_volume_content_pane_g3

0xc4cc,	// (0x0003231e) smil2_volume_content_pane_g4

0xc4d5,	// (0x00032327) smil2_volume_content_pane_g5

0xc4de,	// (0x00032330) smil2_volume_content_pane_g6

0xc4e7,	// (0x00032339) smil2_volume_content_pane_g7

0xc4f0,	// (0x00032342) smil2_volume_content_pane_g8

0xc4f9,	// (0x0003234b) smil2_volume_content_pane_g9

0xc502,	// (0x00032354) smil2_volume_content_pane_g10

0x0009,

0xf6f0,	// (0x00035542) smil2_volume_content_pane_g

0x317b,	// (0x00028fcd) cale_week_day_heading_pane_t1_ParamLimits

0x31a5,	// (0x00028ff7) cale_week_day_heading_pane_t2_ParamLimits

0x31d4,	// (0x00029026) cale_week_day_heading_pane_t3_ParamLimits

0x3203,	// (0x00029055) cale_week_day_heading_pane_t4_ParamLimits

0x3232,	// (0x00029084) cale_week_day_heading_pane_t5_ParamLimits

0x3261,	// (0x000290b3) cale_week_day_heading_pane_t6_ParamLimits

0x3290,	// (0x000290e2) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0003501f) cale_week_day_heading_pane_t_ParamLimits

0x32ba,	// (0x0002910c) bg_cale_side_pane_ParamLimits

0x0ef1,	// (0x00026d43) cale_week_time_pane_t1_ParamLimits

0x0f2b,	// (0x00026d7d) cale_week_time_pane_t2_ParamLimits

0x0f65,	// (0x00026db7) cale_week_time_pane_t3_ParamLimits

0x0f9f,	// (0x00026df1) cale_week_time_pane_t4_ParamLimits

0x0fd9,	// (0x00026e2b) cale_week_time_pane_t5_ParamLimits

0x1013,	// (0x00026e65) cale_week_time_pane_t6_ParamLimits

0x104d,	// (0x00026e9f) cale_week_time_pane_t7_ParamLimits

0x1087,	// (0x00026ed9) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0003502e) cale_week_time_pane_t_ParamLimits

0x32c8,	// (0x0002911a) cell_cale_week_pane_g2_ParamLimits

0x32ba,	// (0x0002910c) bg_cale_side_pane_cp01_ParamLimits

0x4704,	// (0x0002a556) cale_month_week_pane_t1_ParamLimits

0x471d,	// (0x0002a56f) cale_month_week_pane_t2_ParamLimits

0x4736,	// (0x0002a588) cale_month_week_pane_t3_ParamLimits

0x474f,	// (0x0002a5a1) cale_month_week_pane_t4_ParamLimits

0x4768,	// (0x0002a5ba) cale_month_week_pane_t5_ParamLimits

0x4781,	// (0x0002a5d3) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x00035103) cale_month_week_pane_t_ParamLimits

0xb6b7,	// (0x00031509) cell_cale_month_pane_g1_ParamLimits

0xb5e1,	// (0x00031433) main_cale_event_viewer_pane

0x2275,	// (0x000280c7) listscroll_cale_event_viewer_pane

0xc50b,	// (0x0003235d) list_cale_ev_pane

0xc513,	// (0x00032365) scroll_pane_cp023

0x7316,	// (0x0002d168) field_cale_ev_pane_ParamLimits

0x7316,	// (0x0002d168) field_cale_ev_pane

0xc51f,	// (0x00032371) field_cale_ev_content_pane_ParamLimits

0xc51f,	// (0x00032371) field_cale_ev_content_pane

0xc52b,	// (0x0003237d) field_cale_ev_pane_g1_ParamLimits

0xc52b,	// (0x0003237d) field_cale_ev_pane_g1

0xc537,	// (0x00032389) field_cale_ev_pane_g2_ParamLimits

0xc537,	// (0x00032389) field_cale_ev_pane_g2

0xc54f,	// (0x000323a1) field_cale_ev_pane_g3_ParamLimits

0xc54f,	// (0x000323a1) field_cale_ev_pane_g3

0x0002,

0xf705,	// (0x00035557) field_cale_ev_pane_g_ParamLimits

0xf705,	// (0x00035557) field_cale_ev_pane_g

0xc567,	// (0x000323b9) field_cale_ev_pane_t1_ParamLimits

0xc567,	// (0x000323b9) field_cale_ev_pane_t1

0x7330,	// (0x0002d182) field_cale_ev_content_pane_t1_ParamLimits

0x7330,	// (0x0002d182) field_cale_ev_content_pane_t1

0x5a11,	// (0x0002b863) bg_button_pane_cp01

0x2e75,	// (0x00028cc7) listscroll_cale_week_pane_ParamLimits

0x2e85,	// (0x00028cd7) popup_toolbar_window_cp01

0x30d6,	// (0x00028f28) listscroll_cale_week_pane_t1_ParamLimits

0x2e75,	// (0x00028cc7) listscroll_cale_day_pane_ParamLimits

0x2e85,	// (0x00028cd7) popup_toolbar_window_cp02

0x4962,	// (0x0002a7b4) listscroll_cale_day_pane_t1_ParamLimits

0x1119,	// (0x00026f6b) main_cale_month_pane_ParamLimits

0xbfc7,	// (0x00031e19) popup_toolbar_window_cp03_ParamLimits

0xbfc7,	// (0x00031e19) popup_toolbar_window_cp03

0x5d9e,	// (0x0002bbf0) main_image_pane_g2_ParamLimits

0x5d9e,	// (0x0002bbf0) main_image_pane_g2

0x5daf,	// (0x0002bc01) main_image_pane_g3_ParamLimits

0x5daf,	// (0x0002bc01) main_image_pane_g3

0x0002,

0xf4e3,	// (0x00035335) main_image_pane_g_ParamLimits

0xf4e3,	// (0x00035335) main_image_pane_g

0x5dc0,	// (0x0002bc12) main_image_pane_t1_ParamLimits

0x5dd7,	// (0x0002bc29) main_image_pane_t2_ParamLimits

0x5dd7,	// (0x0002bc29) main_image_pane_t2

0x5de9,	// (0x0002bc3b) main_image_pane_t3_ParamLimits

0x5de9,	// (0x0002bc3b) main_image_pane_t3

0x5e11,	// (0x0002bc63) main_image_pane_t4_ParamLimits

0x5e11,	// (0x0002bc63) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0003533c) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0003533c) main_image_pane_t

0x5e31,	// (0x0002bc83) popup_image_details_window_cp01

0x5e39,	// (0x0002bc8b) popup_toobar_trans_pane_cp01_ParamLimits

0x5e39,	// (0x0002bc8b) popup_toobar_trans_pane_cp01

0x121a,	// (0x0002706c) popup_image_details_window_ParamLimits

0x121a,	// (0x0002706c) popup_image_details_window

0xbf9c,	// (0x00031dee) popup_image_focus_window

0x1373,	// (0x000271c5) camera2_autofocus_pane_ParamLimits

0x1373,	// (0x000271c5) camera2_autofocus_pane

0x2275,	// (0x000280c7) bg_popup_sub_pane_cp06

0xc57e,	// (0x000323d0) popup_image_focus_window_g1

0xc586,	// (0x000323d8) popup_image_focus_window_g2

0xc58e,	// (0x000323e0) popup_image_focus_window_g3

0xc596,	// (0x000323e8) popup_image_focus_window_g4

0x0003,

0xf70c,	// (0x0003555e) popup_image_focus_window_g

0xc59e,	// (0x000323f0) popup_image_focus_window_t1

0xc5ac,	// (0x000323fe) popup_image_focus_window_t2

0xc5bb,	// (0x0003240d) popup_image_focus_window_t3

0x0002,

0xf715,	// (0x00035567) popup_image_focus_window_t

0xc5c9,	// (0x0003241b) camera2_autofocus_pane_g1

0x6d75,	// (0x0002cbc7) bg_tb_trans_pane_cp01

0xc5d7,	// (0x00032429) popup_image_details_window_g1

0xc5ea,	// (0x0003243c) popup_image_details_window_g2

0x0002,

0xf727,	// (0x00035579) popup_image_details_window_g

0xc613,	// (0x00032465) popup_image_details_window_t1

0xc625,	// (0x00032477) popup_image_details_window_t2

0xc63e,	// (0x00032490) popup_image_details_window_t3

0xc652,	// (0x000324a4) popup_image_details_window_t4

0xc66d,	// (0x000324bf) popup_image_details_window_t5

0x0004,

0xf72e,	// (0x00035580) popup_image_details_window_t

0x2c1d,	// (0x00028a6f) bg_calc_paper_pane_ParamLimits

0xb5e1,	// (0x00031433) grid_highlight_pane_cp013

0xb5f3,	// (0x00031445) list_calc_pane_ParamLimits

0xb605,	// (0x00031457) scroll_pane_cp024

0x2c35,	// (0x00028a87) bg_calc_display_pane_ParamLimits

0xb60d,	// (0x0003145f) calc_display_pane_t1_ParamLimits

0xb622,	// (0x00031474) calc_display_pane_t2_ParamLimits

0xb637,	// (0x00031489) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x00034f9f) calc_display_pane_t_ParamLimits

0x0ec7,	// (0x00026d19) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x00034fbc) cell_calc_pane_g

0x0ed0,	// (0x00026d22) cell_calc_pane_t1

0x2ce4,	// (0x00028b36) grid_highlight_pane_cp02_ParamLimits

0x2cfa,	// (0x00028b4c) toolbar_button_pane_cp01_ParamLimits

0x2cfa,	// (0x00028b4c) toolbar_button_pane_cp01

0x5e7b,	// (0x0002bccd) temp_image_control_pane_ParamLimits

0x5e7b,	// (0x0002bccd) temp_image_control_pane

0xb5d3,	// (0x00031425) main_mp3_pane

0xc687,	// (0x000324d9) temp_image_control_pane_g1_ParamLimits

0xc687,	// (0x000324d9) temp_image_control_pane_g1

0xc695,	// (0x000324e7) temp_image_control_pane_g2_ParamLimits

0xc695,	// (0x000324e7) temp_image_control_pane_g2

0xc6a7,	// (0x000324f9) temp_image_control_pane_g3_ParamLimits

0xc6a7,	// (0x000324f9) temp_image_control_pane_g3

0x737d,	// (0x0002d1cf) temp_image_control_pane_g4_ParamLimits

0x737d,	// (0x0002d1cf) temp_image_control_pane_g4

0x0003,

0xf739,	// (0x0003558b) temp_image_control_pane_g_ParamLimits

0xf739,	// (0x0003558b) temp_image_control_pane_g

0xc687,	// (0x000324d9) main_mp3_pane_g1

0x738e,	// (0x0002d1e0) main_mp3_pane_g2

0x0007,

0xf742,	// (0x00035594) main_mp3_pane_g

0xc6ea,	// (0x0003253c) main_mp3_pane_t1

0x3480,	// (0x000292d2) main_camera_pane_g8_ParamLimits

0x3480,	// (0x000292d2) main_camera_pane_g8

0x361b,	// (0x0002946d) main_video_pane_g7_ParamLimits

0x361b,	// (0x0002946d) main_video_pane_g7

0xc0b7,	// (0x00031f09) main_camera2_pane_t7_ParamLimits

0xc0b7,	// (0x00031f09) main_camera2_pane_t7

0x3c45,	// (0x00029a97) scroll_pane_cp025_ParamLimits

0x3c45,	// (0x00029a97) scroll_pane_cp025

0x3c59,	// (0x00029aab) scroll_pane_cp026_ParamLimits

0x3c59,	// (0x00029aab) scroll_pane_cp026

0x3c68,	// (0x00029aba) wml_content_pane_ParamLimits

0xb5e1,	// (0x00031433) main_touch_calib_pane

0x7450,	// (0x0002d2a2) main_touch_calib_pane_g1

0x7462,	// (0x0002d2b4) main_touch_calib_pane_g2

0x7474,	// (0x0002d2c6) main_touch_calib_pane_g3

0x7486,	// (0x0002d2d8) main_touch_calib_pane_g4

0x0003,

0xf760,	// (0x000355b2) main_touch_calib_pane_g

0x7498,	// (0x0002d2ea) main_touch_calib_pane_t1

0x74b0,	// (0x0002d302) main_touch_calib_pane_t2

0x0004,

0xf769,	// (0x000355bb) main_touch_calib_pane_t

0x52fb,	// (0x0002b14d) mup_progress_pane_cp02

0x5330,	// (0x0002b182) navi_pane_g1

0x53d8,	// (0x0002b22a) navi_pane_mp_t3

0xb5d3,	// (0x00031425) main_mp3_pane_ParamLimits

0x6d83,	// (0x0002cbd5) navi_pane_ParamLimits

0xc687,	// (0x000324d9) main_mp3_pane_g1_ParamLimits

0x738e,	// (0x0002d1e0) main_mp3_pane_g2_ParamLimits

0x739a,	// (0x0002d1ec) main_mp3_pane_g3_ParamLimits

0x739a,	// (0x0002d1ec) main_mp3_pane_g3

0x73a6,	// (0x0002d1f8) main_mp3_pane_g4_ParamLimits

0x73a6,	// (0x0002d1f8) main_mp3_pane_g4

0xc6b7,	// (0x00032509) main_mp3_pane_g5_ParamLimits

0xc6b7,	// (0x00032509) main_mp3_pane_g5

0xc6c5,	// (0x00032517) main_mp3_pane_g6_ParamLimits

0xc6c5,	// (0x00032517) main_mp3_pane_g6

0xc6d2,	// (0x00032524) main_mp3_pane_g7_ParamLimits

0xc6d2,	// (0x00032524) main_mp3_pane_g7

0xc6de,	// (0x00032530) main_mp3_pane_g8_ParamLimits

0xc6de,	// (0x00032530) main_mp3_pane_g8

0xf742,	// (0x00035594) main_mp3_pane_g_ParamLimits

0x73b2,	// (0x0002d204) main_mp3_pane_t2

0x73c0,	// (0x0002d212) main_mp3_pane_t3

0xc6f8,	// (0x0003254a) main_mp3_pane_t4

0xc706,	// (0x00032558) main_mp3_pane_t5

0x0005,

0xf753,	// (0x000355a5) main_mp3_pane_t

0xc714,	// (0x00032566) mup_progress_pane_cp01

0xb59a,	// (0x000313ec) aid_zoom_text_secondary2

0xc50b,	// (0x0003235d) list_cale_ev2_pane

0xc513,	// (0x00032365) scroll_pane_cp023_ParamLimits

0x74fe,	// (0x0002d350) field_cale_ev2_pane_ParamLimits

0x74fe,	// (0x0002d350) field_cale_ev2_pane

0xc71c,	// (0x0003256e) field_cale_ev2_pane_g1_ParamLimits

0xc71c,	// (0x0003256e) field_cale_ev2_pane_g1

0xc728,	// (0x0003257a) field_cale_ev2_pane_g2_ParamLimits

0xc728,	// (0x0003257a) field_cale_ev2_pane_g2

0xc740,	// (0x00032592) field_cale_ev2_pane_g3_ParamLimits

0xc740,	// (0x00032592) field_cale_ev2_pane_g3

0x0003,

0xf774,	// (0x000355c6) field_cale_ev2_pane_g_ParamLimits

0xf774,	// (0x000355c6) field_cale_ev2_pane_g

0xc764,	// (0x000325b6) field_cale_ev2_pane_t1_ParamLimits

0xc764,	// (0x000325b6) field_cale_ev2_pane_t1

0xc77b,	// (0x000325cd) field_cale_ev2_pane_t2_ParamLimits

0xc77b,	// (0x000325cd) field_cale_ev2_pane_t2

0x0001,

0xf77d,	// (0x000355cf) field_cale_ev2_pane_t_ParamLimits

0xf77d,	// (0x000355cf) field_cale_ev2_pane_t

0x5b73,	// (0x0002b9c5) main_postcard_pane_g5_ParamLimits

0x5b73,	// (0x0002b9c5) main_postcard_pane_g5

0x5b87,	// (0x0002b9d9) main_postcard_pane_g6_ParamLimits

0x5b87,	// (0x0002b9d9) main_postcard_pane_g6

0x33d7,	// (0x00029229) camera2_autofocus_pane_cp_ParamLimits

0x33d7,	// (0x00029229) camera2_autofocus_pane_cp

0xb5d3,	// (0x00031425) main_mup3_pane

0x7554,	// (0x0002d3a6) main_mup3_pane_g1_ParamLimits

0x7554,	// (0x0002d3a6) main_mup3_pane_g1

0x7576,	// (0x0002d3c8) main_mup3_pane_g2_ParamLimits

0x7576,	// (0x0002d3c8) main_mup3_pane_g2

0x75e9,	// (0x0002d43b) main_mup3_pane_g3_ParamLimits

0x75e9,	// (0x0002d43b) main_mup3_pane_g3

0x7627,	// (0x0002d479) main_mup3_pane_g4_ParamLimits

0x7627,	// (0x0002d479) main_mup3_pane_g4

0x7665,	// (0x0002d4b7) main_mup3_pane_g5_ParamLimits

0x7665,	// (0x0002d4b7) main_mup3_pane_g5

0x76a3,	// (0x0002d4f5) main_mup3_pane_g6_ParamLimits

0x76a3,	// (0x0002d4f5) main_mup3_pane_g6

0xc790,	// (0x000325e2) main_mup3_pane_g7_ParamLimits

0xc790,	// (0x000325e2) main_mup3_pane_g7

0x0007,

0xf78d,	// (0x000355df) main_mup3_pane_g_ParamLimits

0xf78d,	// (0x000355df) main_mup3_pane_g

0x7719,	// (0x0002d56b) main_mup3_pane_t1_ParamLimits

0x7719,	// (0x0002d56b) main_mup3_pane_t1

0x777f,	// (0x0002d5d1) main_mup3_pane_t2_ParamLimits

0x777f,	// (0x0002d5d1) main_mup3_pane_t2

0x7845,	// (0x0002d697) main_mup3_pane_t4_ParamLimits

0x7845,	// (0x0002d697) main_mup3_pane_t4

0x7893,	// (0x0002d6e5) main_mup3_pane_t5_ParamLimits

0x7893,	// (0x0002d6e5) main_mup3_pane_t5

0x7941,	// (0x0002d793) main_mup3_pane_t6_ParamLimits

0x7941,	// (0x0002d793) main_mup3_pane_t6

0x0005,

0xf79e,	// (0x000355f0) main_mup3_pane_t_ParamLimits

0xf79e,	// (0x000355f0) main_mup3_pane_t

0x79f5,	// (0x0002d847) mup3_progress_pane_ParamLimits

0x79f5,	// (0x0002d847) mup3_progress_pane

0x7a71,	// (0x0002d8c3) popup_mup3_control_window_ParamLimits

0x7a71,	// (0x0002d8c3) popup_mup3_control_window

0xc79e,	// (0x000325f0) popup_mup3_text_window

0x7a9f,	// (0x0002d8f1) mup3_progress_pane_t1

0x7abd,	// (0x0002d90f) mup3_progress_pane_t2

0xc7a6,	// (0x000325f8) mup3_progress_pane_t3

0x0002,

0xf7ab,	// (0x000355fd) mup3_progress_pane_t

0xc7c3,	// (0x00032615) mup_progress_pane_cp03

0x2275,	// (0x000280c7) bg_tb_trans_pane_cp04

0x7adb,	// (0x0002d92d) mup3_volume_pane

0x7ae3,	// (0x0002d935) popup_mup3_control_window_g1

0x7aec,	// (0x0002d93e) mup3_volume_pane_g1

0x7af5,	// (0x0002d947) mup3_volume_pane_g2

0x7afe,	// (0x0002d950) mup3_volume_pane_g3

0x0002,

0xf7b2,	// (0x00035604) mup3_volume_pane_g

0x2275,	// (0x000280c7) bg_tb_trans_pane_cp03

0xc7d3,	// (0x00032625) popup_mup3_text_window_g1

0xc7db,	// (0x0003262d) popup_mup3_text_window_t1

0x2ccd,	// (0x00028b1f) list_calc_item_pane_g1_ParamLimits

0xc19f,	// (0x00031ff1) mup_volume_pane_cp_g1

0x74c8,	// (0x0002d31a) main_touch_calib_pane_t3

0x74da,	// (0x0002d32c) main_touch_calib_pane_t4

0x74ec,	// (0x0002d33e) main_touch_calib_pane_t5

0xb58a,	// (0x000313dc) aid_cell_size_toolbar2

0xb592,	// (0x000313e4) aid_popup3_width_pane

0xb59a,	// (0x000313ec) aid_zoom_text_msg_primary

0x33b6,	// (0x00029208) vorec_t7

0x2c41,	// (0x00028a93) bg_calc_paper_pane_g1_ParamLimits

0x2c4d,	// (0x00028a9f) bg_calc_paper_pane_g2_ParamLimits

0x2c59,	// (0x00028aab) bg_calc_paper_pane_g3_ParamLimits

0x2c65,	// (0x00028ab7) bg_calc_paper_pane_g4_ParamLimits

0x2c71,	// (0x00028ac3) bg_calc_paper_pane_g5_ParamLimits

0x2c7d,	// (0x00028acf) bg_calc_paper_pane_g6_ParamLimits

0x2c8c,	// (0x00028ade) bg_calc_paper_pane_g7_ParamLimits

0x2c9b,	// (0x00028aed) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x00034fa6) bg_calc_paper_pane_g_ParamLimits

0x2caa,	// (0x00028afc) calc_bg_paper_pane_g9_ParamLimits

0x3517,	// (0x00029369) image_qvga_pane_ParamLimits

0x3517,	// (0x00029369) image_qvga_pane

0x297e,	// (0x000287d0) bg_popup_sub_pane_cp04_ParamLimits

0x5cfc,	// (0x0002bb4e) popup_mup_playback_window_g1_ParamLimits

0x5d08,	// (0x0002bb5a) popup_mup_playback_window_t1_ParamLimits

0x5d1d,	// (0x0002bb6f) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x00035330) popup_mup_playback_window_t_ParamLimits

0x7017,	// (0x0002ce69) main_mup2_pane_g3_ParamLimits

0x7017,	// (0x0002ce69) main_mup2_pane_g3

0x396a,	// (0x000297bc) popup_toolbar_window_cp04

0x6470,	// (0x0002c2c2) popup_call2_audio_second_window_g3_ParamLimits

0x6470,	// (0x0002c2c2) popup_call2_audio_second_window_g3

0x687a,	// (0x0002c6cc) popup_call2_audio_first_window_g4_ParamLimits

0x687a,	// (0x0002c6cc) popup_call2_audio_first_window_g4

0xbbc7,	// (0x00031a19) popup_call2_audio_in_window_g4_ParamLimits

0xbbc7,	// (0x00031a19) popup_call2_audio_in_window_g4

0x5d32,	// (0x0002bb84) aid_area_sk_bg_cut_ParamLimits

0x5d32,	// (0x0002bb84) aid_area_sk_bg_cut

0x5d50,	// (0x0002bba2) aid_area_sk_bg_cut_2_ParamLimits

0x5d50,	// (0x0002bba2) aid_area_sk_bg_cut_2

0x72ec,	// (0x0002d13e) aid_placing_details_win

0x72f4,	// (0x0002d146) aid_placing_details_win_2

0xc5c9,	// (0x0003241b) camera2_autofocus_pane_g1_ParamLimits

0x0d68,	// (0x00026bba) popup_fixed_preview_cale_window_ParamLimits

0x0d68,	// (0x00026bba) popup_fixed_preview_cale_window

0x5494,	// (0x0002b2e6) navi_slider_pane_g3

0x549d,	// (0x0002b2ef) navi_slider_pane_g4

0x54a6,	// (0x0002b2f8) navi_slider_pane_g5

0x5494,	// (0x0002b2e6) navi_slider_pane_g6

0xb75d,	// (0x000315af) navi_slider_pane_g7

0x595f,	// (0x0002b7b1) mup_scale_pane_g3

0x5968,	// (0x0002b7ba) mup_scale_pane_g4

0x5971,	// (0x0002b7c3) mup_scale_pane_g5

0x597a,	// (0x0002b7cc) mup_scale_pane_g6

0x5983,	// (0x0002b7d5) mup_scale_pane_g7

0x5494,	// (0x0002b2e6) cams2_slider_pane_g3

0xc254,	// (0x000320a6) cams2_slider_pane_g4

0xc25c,	// (0x000320ae) cams2_slider_pane_g5

0x5494,	// (0x0002b2e6) cams2_slider_pane_g6

0xc264,	// (0x000320b6) cams2_slider_pane_g7

0xc488,	// (0x000322da) camera2_autofocus_pane_cp_g1

0xbf68,	// (0x00031dba) bg_popup_preview_window_pane_cp02_ParamLimits

0xbf68,	// (0x00031dba) bg_popup_preview_window_pane_cp02

0xc7e9,	// (0x0003263b) list_fp_cale_pane_ParamLimits

0xc7e9,	// (0x0003263b) list_fp_cale_pane

0xc7f5,	// (0x00032647) popup_fixed_preview_cale_window_t1_ParamLimits

0xc7f5,	// (0x00032647) popup_fixed_preview_cale_window_t1

0x7b07,	// (0x0002d959) popup_fixed_preview_cale_window_t2_ParamLimits

0x7b07,	// (0x0002d959) popup_fixed_preview_cale_window_t2

0x7b1c,	// (0x0002d96e) popup_fixed_preview_cale_window_t3_ParamLimits

0x7b1c,	// (0x0002d96e) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b9,	// (0x0003560b) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b9,	// (0x0003560b) popup_fixed_preview_cale_window_t

0x7b31,	// (0x0002d983) list_single_fp_cale_pane_ParamLimits

0x7b31,	// (0x0002d983) list_single_fp_cale_pane

0xc813,	// (0x00032665) list_single_fp_cale_pane_g1_ParamLimits

0xc813,	// (0x00032665) list_single_fp_cale_pane_g1

0xc81f,	// (0x00032671) list_single_fp_cale_pane_g2_ParamLimits

0xc81f,	// (0x00032671) list_single_fp_cale_pane_g2

0x0002,

0xf7c0,	// (0x00035612) list_single_fp_cale_pane_g_ParamLimits

0xf7c0,	// (0x00035612) list_single_fp_cale_pane_g

0xc838,	// (0x0003268a) list_single_fp_cale_pane_t1_ParamLimits

0xc838,	// (0x0003268a) list_single_fp_cale_pane_t1

0xc84a,	// (0x0003269c) list_single_fp_cale_pane_t2_ParamLimits

0xc84a,	// (0x0003269c) list_single_fp_cale_pane_t2

0x0001,

0xf7c7,	// (0x00035619) list_single_fp_cale_pane_t_ParamLimits

0xf7c7,	// (0x00035619) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb5e1,	// (0x00031433) main_dialer_pane

0x7b45,	// (0x0002d997) aid_cell_size_keypad

0x7b4f,	// (0x0002d9a1) dialer_ne_pane

0x7b57,	// (0x0002d9a9) grid_dialer_command_1_pane

0x7b5f,	// (0x0002d9b1) grid_dialer_command_2_pane

0x7b67,	// (0x0002d9b9) grid_dialer_keypad_pane

0x7b77,	// (0x0002d9c9) bg_popup_call_pane_cp06_ParamLimits

0x7b77,	// (0x0002d9c9) bg_popup_call_pane_cp06

0x7b83,	// (0x0002d9d5) dialer_ne_clear_pane_ParamLimits

0x7b83,	// (0x0002d9d5) dialer_ne_clear_pane

0xc87d,	// (0x000326cf) dialer_ne_pane_g1

0xc885,	// (0x000326d7) dialer_ne_pane_t1_ParamLimits

0xc885,	// (0x000326d7) dialer_ne_pane_t1

0x7b8f,	// (0x0002d9e1) dialer_ne_pane_t2_ParamLimits

0x7b8f,	// (0x0002d9e1) dialer_ne_pane_t2

0x7bb9,	// (0x0002da0b) dialer_ne_pane_t3_ParamLimits

0x7bb9,	// (0x0002da0b) dialer_ne_pane_t3

0x0002,

0xf7cc,	// (0x0003561e) dialer_ne_pane_t_ParamLimits

0xf7cc,	// (0x0003561e) dialer_ne_pane_t

0x7be9,	// (0x0002da3b) dialer_ne_pane_t3_copy1_ParamLimits

0x7be9,	// (0x0002da3b) dialer_ne_pane_t3_copy1

0x7c18,	// (0x0002da6a) cell_dialer_keypad_pane_ParamLimits

0x7c18,	// (0x0002da6a) cell_dialer_keypad_pane

0x7c2d,	// (0x0002da7f) cell_dialer_command_1_pane_ParamLimits

0x7c2d,	// (0x0002da7f) cell_dialer_command_1_pane

0x7c43,	// (0x0002da95) cell_dialer_command_2_pane_ParamLimits

0x7c43,	// (0x0002da95) cell_dialer_command_2_pane

0xc897,	// (0x000326e9) bg_button_pane_cp02_ParamLimits

0xc897,	// (0x000326e9) bg_button_pane_cp02

0x7c52,	// (0x0002daa4) cell_dialer_keypad_pane_g1_ParamLimits

0x7c52,	// (0x0002daa4) cell_dialer_keypad_pane_g1

0xc897,	// (0x000326e9) bg_button_pane_cp03_ParamLimits

0xc897,	// (0x000326e9) bg_button_pane_cp03

0x7c67,	// (0x0002dab9) cell_dialer_command_1_pane_g1_ParamLimits

0x7c67,	// (0x0002dab9) cell_dialer_command_1_pane_g1

0xc8a3,	// (0x000326f5) bg_button_pane_cp04

0x7c7b,	// (0x0002dacd) cell_dialer_command_2_pane_g1

0x336e,	// (0x000291c0) bg_button_pane_cp06

0xc8ab,	// (0x000326fd) dialer_ne_clear_pane_g1

0x533c,	// (0x0002b18e) navi_pane_g2

0x5365,	// (0x0002b1b7) navi_pane_g3

0x0002,

0xf3e1,	// (0x00035233) navi_pane_g

0x53e6,	// (0x0002b238) navi_pane_mv_g2

0x540d,	// (0x0002b25f) navi_pane_mv_g5

0x5415,	// (0x0002b267) navi_pane_mv_t1

0x2c35,	// (0x00028a87) main_clock2_pane

0x7cc0,	// (0x0002db12) main_clock2_list_pane_ParamLimits

0x7cc0,	// (0x0002db12) main_clock2_list_pane

0x7cf2,	// (0x0002db44) main_clock2_pane_t1_ParamLimits

0x7cf2,	// (0x0002db44) main_clock2_pane_t1

0x7d2c,	// (0x0002db7e) main_clock2_pane_t2_ParamLimits

0x7d2c,	// (0x0002db7e) main_clock2_pane_t2

0x0004,

0xf7d8,	// (0x0003562a) main_clock2_pane_t_ParamLimits

0xf7d8,	// (0x0003562a) main_clock2_pane_t

0x7dc0,	// (0x0002dc12) popup_clock_analogue_window_cp03_ParamLimits

0x7dc0,	// (0x0002dc12) popup_clock_analogue_window_cp03

0x7de5,	// (0x0002dc37) popup_clock_digital_window_cp02_ParamLimits

0x7de5,	// (0x0002dc37) popup_clock_digital_window_cp02

0x7e56,	// (0x0002dca8) main_clock2_list_single_pane_ParamLimits

0x7e56,	// (0x0002dca8) main_clock2_list_single_pane

0x336e,	// (0x000291c0) list_highlight_pane_cp05

0xc8e3,	// (0x00032735) main_clock2_list_single_pane_t1

0x396a,	// (0x000297bc) popup_toolbar_window_cp04_ParamLimits

0x734d,	// (0x0002d19f) camera2_autofocus_pane_g2_ParamLimits

0x734d,	// (0x0002d19f) camera2_autofocus_pane_g2

0x7359,	// (0x0002d1ab) camera2_autofocus_pane_g3_ParamLimits

0x7359,	// (0x0002d1ab) camera2_autofocus_pane_g3

0x7365,	// (0x0002d1b7) camera2_autofocus_pane_g4_ParamLimits

0x7365,	// (0x0002d1b7) camera2_autofocus_pane_g4

0x7371,	// (0x0002d1c3) camera2_autofocus_pane_g5_ParamLimits

0x7371,	// (0x0002d1c3) camera2_autofocus_pane_g5

0x0004,

0xf71c,	// (0x0003556e) camera2_autofocus_pane_g_ParamLimits

0xf71c,	// (0x0003556e) camera2_autofocus_pane_g

0x7516,	// (0x0002d368) camera2_autofocus_pane_cp_g2

0x751e,	// (0x0002d370) camera2_autofocus_pane_cp_g3

0x7526,	// (0x0002d378) camera2_autofocus_pane_cp_g4

0x752e,	// (0x0002d380) camera2_autofocus_pane_cp_g5

0x0004,

0xf782,	// (0x000355d4) camera2_autofocus_pane_cp_g

0x7b6f,	// (0x0002d9c1) popup_dialer_spcha_window

0x2275,	// (0x000280c7) bg_popup_sub_pane_cp07

0xc8f1,	// (0x00032743) list_spcha_pane

0xc8f9,	// (0x0003274b) list_single_spcha_pane_ParamLimits

0xc8f9,	// (0x0003274b) list_single_spcha_pane

0x2275,	// (0x000280c7) list_highlight_pane_cp06

0xc90a,	// (0x0003275c) list_single_spcha_pane_t1

0xb971,	// (0x000317c3) popup_call2_audio_out_window_g4_ParamLimits

0xb971,	// (0x000317c3) popup_call2_audio_out_window_g4

0xb5e1,	// (0x00031433) main_imed2_pane

0xbfa4,	// (0x00031df6) popup_imed_adjust2_window

0x1230,	// (0x00027082) popup_imed_trans_window_ParamLimits

0x1230,	// (0x00027082) popup_imed_trans_window

0xc2cc,	// (0x0003211e) popup_blid_sat_info2_window_t1

0xc2da,	// (0x0003212c) popup_blid_sat_info2_window_t2

0x000a,

0xf6b1,	// (0x00035503) popup_blid_sat_info2_window_t

0x7e88,	// (0x0002dcda) aid_size_cell_colour_35

0x7ea8,	// (0x0002dcfa) aid_size_cell_colour_112

0x7ec8,	// (0x0002dd1a) aid_size_cell_effect

0xbf74,	// (0x00031dc6) bg_tb_trans_pane_cp02

0x4aac,	// (0x0002a8fe) heading_imed_pane

0x7ee8,	// (0x0002dd3a) listscroll_imed_pane

0xc918,	// (0x0003276a) heading_imed_pane_g1

0xc920,	// (0x00032772) heading_imed_pane_t1

0xc92e,	// (0x00032780) grid_imed_colour_35_pane_ParamLimits

0xc92e,	// (0x00032780) grid_imed_colour_35_pane

0x7ef4,	// (0x0002dd46) grid_imed_effect_pane

0xc941,	// (0x00032793) list_imed_aspect_pane

0x7f07,	// (0x0002dd59) scroll_pane_cp027_ParamLimits

0x7f07,	// (0x0002dd59) scroll_pane_cp027

0x7f13,	// (0x0002dd65) cell_imed_effect_pane_ParamLimits

0x7f13,	// (0x0002dd65) cell_imed_effect_pane

0xc949,	// (0x0003279b) cell_imed_colour_pane_ParamLimits

0xc949,	// (0x0003279b) cell_imed_colour_pane

0xc983,	// (0x000327d5) cell_imed_colour_pane_g1_ParamLimits

0xc983,	// (0x000327d5) cell_imed_colour_pane_g1

0xc994,	// (0x000327e6) hgihlgiht_grid_pane_cp016_ParamLimits

0xc994,	// (0x000327e6) hgihlgiht_grid_pane_cp016

0x7f38,	// (0x0002dd8a) cell_imed_effect_pane_g1

0x7f40,	// (0x0002dd92) grid_highlight_pane_cp017

0xc9a5,	// (0x000327f7) list_imed_single_pane_ParamLimits

0xc9a5,	// (0x000327f7) list_imed_single_pane

0x2275,	// (0x000280c7) list_highlight_pane_cp07

0xc9b8,	// (0x0003280a) list_imed_aspect_pane_comp1_t1

0xbf74,	// (0x00031dc6) bg_tb_trans_pane_cp05

0xc9d8,	// (0x0003282a) popup_imed_adjust2_window_g1

0xc9ff,	// (0x00032851) popup_imed_adjust2_window_t1

0xca17,	// (0x00032869) slider_imed_adjust_pane

0xca2b,	// (0x0003287d) slider_imed_adjust_pane_g1

0xca3b,	// (0x0003288d) slider_imed_adjust_pane_g2

0xca4b,	// (0x0003289d) slider_imed_adjust_pane_g3

0xca5c,	// (0x000328ae) slider_imed_adjust_pane_g4

0x0003,

0xf7f5,	// (0x00035647) slider_imed_adjust_pane_g

0x7f49,	// (0x0002dd9b) aid_size_cell_clipart2

0x7f55,	// (0x0002dda7) grid_imed_clipart_pane

0xca6d,	// (0x000328bf) scroll_pane_cp031

0x7f5f,	// (0x0002ddb1) cell_imed_clipart_pane_ParamLimits

0x7f5f,	// (0x0002ddb1) cell_imed_clipart_pane

0x7f77,	// (0x0002ddc9) cell_imed_clipart_pane_g1

0x2275,	// (0x000280c7) grid_highlight_pane_cp014

0x7cd3,	// (0x0002db25) main_clock2_pane_g1_ParamLimits

0x7cd3,	// (0x0002db25) main_clock2_pane_g1

0x7e01,	// (0x0002dc53) aid_call2_pane_cp10

0x7e13,	// (0x0002dc65) aid_call_pane_cp10

0x5242,	// (0x0002b094) popup_clock_analogue_window_cp10_g1

0x5242,	// (0x0002b094) popup_clock_analogue_window_cp10_g2

0x7e25,	// (0x0002dc77) popup_clock_analogue_window_cp10_g3

0x7e25,	// (0x0002dc77) popup_clock_analogue_window_cp10_g4

0x5242,	// (0x0002b094) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e3,	// (0x00035635) popup_clock_analogue_window_cp10_g

0x7e37,	// (0x0002dc89) popup_clock_analogue_window_cp10_t1

0x176e,	// (0x000275c0) clock_digital_number_pane_cp10_ParamLimits

0x176e,	// (0x000275c0) clock_digital_number_pane_cp10

0x1786,	// (0x000275d8) clock_digital_number_pane_cp11_ParamLimits

0x1786,	// (0x000275d8) clock_digital_number_pane_cp11

0x179e,	// (0x000275f0) clock_digital_number_pane_cp12_ParamLimits

0x179e,	// (0x000275f0) clock_digital_number_pane_cp12

0x17b6,	// (0x00027608) clock_digital_number_pane_cp13_ParamLimits

0x17b6,	// (0x00027608) clock_digital_number_pane_cp13

0x17ce,	// (0x00027620) clock_digital_separator_pane_cp10_ParamLimits

0x17ce,	// (0x00027620) clock_digital_separator_pane_cp10

0x7e68,	// (0x0002dcba) popup_clock_digital_window_cp02_t1_ParamLimits

0x7e68,	// (0x0002dcba) popup_clock_digital_window_cp02_t1

0x2976,	// (0x000287c8) clock_digital_number_pane_cp10_g1

0x2976,	// (0x000287c8) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fe,	// (0x00035650) clock_digital_number_pane_cp10_g

0x2976,	// (0x000287c8) clock_digital_separator_pane_cp10_g1

0x2976,	// (0x000287c8) clock_digital_separator_pane_g2_cp10

0x5453,	// (0x0002b2a5) navi_pane_vded_g4

0x545c,	// (0x0002b2ae) navi_pane_vded_g5

0x5465,	// (0x0002b2b7) navi_pane_vded_t1

0xb5e1,	// (0x00031433) main_vded_pane

0x7f80,	// (0x0002ddd2) main_vded_pane_g1

0x7f8a,	// (0x0002dddc) main_vded_pane_g2

0x7f92,	// (0x0002dde4) main_vded_pane_g3

0x0002,

0xf803,	// (0x00035655) main_vded_pane_g

0x7f9a,	// (0x0002ddec) main_vded_pane_t1

0x7fa8,	// (0x0002ddfa) main_vded_pane_t2

0x0001,

0xf80a,	// (0x0003565c) main_vded_pane_t

0x7fb6,	// (0x0002de08) vded_slider_pane

0x7fbe,	// (0x0002de10) vded_video_pane

0xca75,	// (0x000328c7) vded_video_pane_g1

0x7fc6,	// (0x0002de18) vded_video_pane_g2

0xc488,	// (0x000322da) vded_video_pane_g3

0x0002,

0xf80f,	// (0x00035661) vded_video_pane_g

0xca7f,	// (0x000328d1) vded_slider_pane_g1

0xc19f,	// (0x00031ff1) vded_slider_pane_g2

0xca88,	// (0x000328da) vded_slider_pane_g3

0xca91,	// (0x000328e3) vded_slider_pane_g4

0xca9a,	// (0x000328ec) vded_slider_pane_g5

0x0004,

0xf816,	// (0x00035668) vded_slider_pane_g

0x7a5b,	// (0x0002d8ad) mup3_rocker_pane_ParamLimits

0x7a5b,	// (0x0002d8ad) mup3_rocker_pane

0x7fcf,	// (0x0002de21) mup3_control_keys_pane_g1

0x7fd7,	// (0x0002de29) mup3_control_keys_pane_g2

0x7fdf,	// (0x0002de31) mup3_control_keys_pane_g3

0x7fe7,	// (0x0002de39) mup3_control_keys_pane_g4

0x0003,

0xf821,	// (0x00035673) mup3_control_keys_pane_g

0x0d9b,	// (0x00026bed) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0d9b,	// (0x00026bed) popup_toolbar2_fixed_window_cp01

0x7a89,	// (0x0002d8db) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7a89,	// (0x0002d8db) popup_toolbar2_fixed_window_cp02

0x65e2,	// (0x0002c434) popup_call2_audio_second_window_t4_ParamLimits

0x65e2,	// (0x0002c434) popup_call2_audio_second_window_t4

0xb7de,	// (0x00031630) popup_call2_audio_first_window_t6_ParamLimits

0xb7de,	// (0x00031630) popup_call2_audio_first_window_t6

0xba74,	// (0x000318c6) popup_call2_audio_out_window_t6_ParamLimits

0xba74,	// (0x000318c6) popup_call2_audio_out_window_t6

0xb5e1,	// (0x00031433) main_vitu_pane

0x7ff7,	// (0x0002de49) aid_size_cell_itu_ParamLimits

0x7ff7,	// (0x0002de49) aid_size_cell_itu

0x6d75,	// (0x0002cbc7) bg_popup_window_pane_cp08_ParamLimits

0x6d75,	// (0x0002cbc7) bg_popup_window_pane_cp08

0x800d,	// (0x0002de5f) field_vitu_entry_pane_ParamLimits

0x800d,	// (0x0002de5f) field_vitu_entry_pane

0x8020,	// (0x0002de72) grid_vitu_function_pane_ParamLimits

0x8020,	// (0x0002de72) grid_vitu_function_pane

0x8035,	// (0x0002de87) grid_vitu_itu_pane_ParamLimits

0x8035,	// (0x0002de87) grid_vitu_itu_pane

0x804b,	// (0x0002de9d) cell_vitu_itu_pane_ParamLimits

0x804b,	// (0x0002de9d) cell_vitu_itu_pane

0x806d,	// (0x0002debf) cell_vitu_function_pane_ParamLimits

0x806d,	// (0x0002debf) cell_vitu_function_pane

0x6d75,	// (0x0002cbc7) bg_popup_sub_pane_cp08_ParamLimits

0x6d75,	// (0x0002cbc7) bg_popup_sub_pane_cp08

0x8086,	// (0x0002ded8) field_vitu_entry_pane_t1_ParamLimits

0x8086,	// (0x0002ded8) field_vitu_entry_pane_t1

0xcabb,	// (0x0003290d) field_vitu_entry_pane_t2_ParamLimits

0xcabb,	// (0x0003290d) field_vitu_entry_pane_t2

0x0001,

0xf82f,	// (0x00035681) field_vitu_entry_pane_t_ParamLimits

0xf82f,	// (0x00035681) field_vitu_entry_pane_t

0xcad8,	// (0x0003292a) bg_button_pane_cp05_ParamLimits

0xcad8,	// (0x0003292a) bg_button_pane_cp05

0x80a2,	// (0x0002def4) cell_vitu_itu_pane_g1

0x80ba,	// (0x0002df0c) cell_vitu_itu_pane_t1_ParamLimits

0x80ba,	// (0x0002df0c) cell_vitu_itu_pane_t1

0x80cc,	// (0x0002df1e) cell_vitu_itu_pane_t2_ParamLimits

0x80cc,	// (0x0002df1e) cell_vitu_itu_pane_t2

0x0002,

0xf834,	// (0x00035686) cell_vitu_itu_pane_t_ParamLimits

0xf834,	// (0x00035686) cell_vitu_itu_pane_t

0xcae6,	// (0x00032938) bg_button_pane_cp07

0x8101,	// (0x0002df53) cell_vitu_function_pane_g1

0xb5eb,	// (0x0003143d) main_calc_pane_g1

0x0c32,	// (0x00026a84) aid_visual_content_pane

0xb5e1,	// (0x00031433) main_vradio_pane

0x810a,	// (0x0002df5c) main_vradio_pane_g1_ParamLimits

0x810a,	// (0x0002df5c) main_vradio_pane_g1

0xcaf0,	// (0x00032942) main_vradio_pane_g2_ParamLimits

0xcaf0,	// (0x00032942) main_vradio_pane_g2

0x0001,

0xf83b,	// (0x0003568d) main_vradio_pane_g_ParamLimits

0xf83b,	// (0x0003568d) main_vradio_pane_g

0x8120,	// (0x0002df72) main_vradio_pane_t1_ParamLimits

0x8120,	// (0x0002df72) main_vradio_pane_t1

0x8135,	// (0x0002df87) main_vradio_pane_t2_ParamLimits

0x8135,	// (0x0002df87) main_vradio_pane_t2

0xcafd,	// (0x0003294f) main_vradio_pane_t3_ParamLimits

0xcafd,	// (0x0003294f) main_vradio_pane_t3

0x0002,

0xf840,	// (0x00035692) main_vradio_pane_t_ParamLimits

0xf840,	// (0x00035692) main_vradio_pane_t

0x814a,	// (0x0002df9c) vradio_rocker_control_pane_ParamLimits

0x814a,	// (0x0002df9c) vradio_rocker_control_pane

0x815c,	// (0x0002dfae) vradio_station_info_pane_ParamLimits

0x815c,	// (0x0002dfae) vradio_station_info_pane

0xcb0f,	// (0x00032961) vradio_frequency_info_pane_ParamLimits

0xcb0f,	// (0x00032961) vradio_frequency_info_pane

0xc488,	// (0x000322da) vradio_station_info_pane_g1

0xcb1e,	// (0x00032970) vradio_station_info_pane_t1_ParamLimits

0xcb1e,	// (0x00032970) vradio_station_info_pane_t1

0xcb40,	// (0x00032992) vradio_station_info_pane_t2_ParamLimits

0xcb40,	// (0x00032992) vradio_station_info_pane_t2

0x0001,

0xf847,	// (0x00035699) vradio_station_info_pane_t_ParamLimits

0xf847,	// (0x00035699) vradio_station_info_pane_t

0xcb52,	// (0x000329a4) vradio_tuning_pane

0xcb5a,	// (0x000329ac) vradio_rocker_control_pane_g1

0xcb62,	// (0x000329b4) vradio_rocker_control_pane_g2

0xcb6a,	// (0x000329bc) vradio_rocker_control_pane_g3

0xcb72,	// (0x000329c4) vradio_rocker_control_pane_g4

0xcb7a,	// (0x000329cc) vradio_rocker_control_pane_g5

0x0004,

0xf84c,	// (0x0003569e) vradio_rocker_control_pane_g

0x816c,	// (0x0002dfbe) vradio_frequency_info_pane_g1

0xcb82,	// (0x000329d4) vradio_frequency_info_pane_t1_ParamLimits

0xcb82,	// (0x000329d4) vradio_frequency_info_pane_t1

0x8176,	// (0x0002dfc8) vradio_tuning_pane_g1

0x817f,	// (0x0002dfd1) vradio_tuning_pane_t1

0xb5aa,	// (0x000313fc) area_side_right_pane_ParamLimits

0xb5aa,	// (0x000313fc) area_side_right_pane

0xbf2f,	// (0x00031d81) status_small_pane_g1

0xbf37,	// (0x00031d89) status_small_pane_g2

0xbf40,	// (0x00031d92) status_small_pane_g3

0xbf49,	// (0x00031d9b) status_small_pane_g4

0x0003,

0xf607,	// (0x00035459) status_small_pane_g

0xbf52,	// (0x00031da4) status_small_pane_t1

0xb5e1,	// (0x00031433) main_video3_pane

0xcb96,	// (0x000329e8) cams_zoom_vslider_pane

0xcb9e,	// (0x000329f0) image3_wide_pane_ParamLimits

0xcb9e,	// (0x000329f0) image3_wide_pane

0xcbb8,	// (0x00032a0a) image3_wide_small_pane

0xcbc2,	// (0x00032a14) main_video3_pane_g1_ParamLimits

0xcbc2,	// (0x00032a14) main_video3_pane_g1

0xcbde,	// (0x00032a30) main_video3_pane_g2_ParamLimits

0xcbde,	// (0x00032a30) main_video3_pane_g2

0x0001,

0xf857,	// (0x000356a9) main_video3_pane_g_ParamLimits

0xf857,	// (0x000356a9) main_video3_pane_g

0xcbfa,	// (0x00032a4c) main_video3_pane_t1_ParamLimits

0xcbfa,	// (0x00032a4c) main_video3_pane_t1

0xcc25,	// (0x00032a77) main_video3_pane_t2_ParamLimits

0xcc25,	// (0x00032a77) main_video3_pane_t2

0xcc50,	// (0x00032aa2) main_video3_pane_t3_ParamLimits

0xcc50,	// (0x00032aa2) main_video3_pane_t3

0x0002,

0xf85c,	// (0x000356ae) main_video3_pane_t_ParamLimits

0xf85c,	// (0x000356ae) main_video3_pane_t

0xcc7b,	// (0x00032acd) cams_zoom_vslider_pane_g1

0xcc84,	// (0x00032ad6) cams_zoom_vslider_pane_g2

0x0001,

0xf863,	// (0x000356b5) cams_zoom_vslider_pane_g

0xcc8c,	// (0x00032ade) small_slider_vertical_pane

0xc488,	// (0x000322da) small_slider_vertical_pane_g1

0xc488,	// (0x000322da) small_slider_vertical_pane_g2

0xcc94,	// (0x00032ae6) small_slider_vertical_pane_g3

0x0002,

0xf868,	// (0x000356ba) small_slider_vertical_pane_g

0xb5e1,	// (0x00031433) main_hwr_training_pane

0xcc9d,	// (0x00032aef) hwr_training_instruct_pane_ParamLimits

0xcc9d,	// (0x00032aef) hwr_training_instruct_pane

0x818e,	// (0x0002dfe0) hwr_training_navi_pane_ParamLimits

0x818e,	// (0x0002dfe0) hwr_training_navi_pane

0x81a5,	// (0x0002dff7) hwr_training_write_pane_ParamLimits

0x81a5,	// (0x0002dff7) hwr_training_write_pane

0x2275,	// (0x000280c7) bg_frame_shadow_pane

0xcccc,	// (0x00032b1e) hwr_training_write_pane_g1

0xccd4,	// (0x00032b26) hwr_training_write_pane_g2

0xccdc,	// (0x00032b2e) hwr_training_write_pane_g3

0xcce4,	// (0x00032b36) hwr_training_write_pane_g4

0xccec,	// (0x00032b3e) hwr_training_write_pane_g5

0xccf4,	// (0x00032b46) hwr_training_write_pane_g6

0xccfc,	// (0x00032b4e) hwr_training_write_pane_g7

0x0006,

0xf86f,	// (0x000356c1) hwr_training_write_pane_g

0xcd04,	// (0x00032b56) hwr_training_navi_pane_g1_ParamLimits

0xcd04,	// (0x00032b56) hwr_training_navi_pane_g1

0xcd16,	// (0x00032b68) hwr_training_navi_pane_g2_ParamLimits

0xcd16,	// (0x00032b68) hwr_training_navi_pane_g2

0xcd28,	// (0x00032b7a) hwr_training_navi_pane_g3_ParamLimits

0xcd28,	// (0x00032b7a) hwr_training_navi_pane_g3

0xcd38,	// (0x00032b8a) hwr_training_navi_pane_g4_ParamLimits

0xcd38,	// (0x00032b8a) hwr_training_navi_pane_g4

0x0004,

0xf87e,	// (0x000356d0) hwr_training_navi_pane_g_ParamLimits

0xf87e,	// (0x000356d0) hwr_training_navi_pane_g

0xcd45,	// (0x00032b97) hwr_training_navi_pane_t1

0x81d8,	// (0x0002e02a) list_single_hwr_training_instruct_pane_ParamLimits

0x81d8,	// (0x0002e02a) list_single_hwr_training_instruct_pane

0xcd53,	// (0x00032ba5) list_single_hwr_training_instruct_pane_t1

0xc3c8,	// (0x0003221a) bg_frame_shadow_pane_g1

0xcd62,	// (0x00032bb4) bg_frame_shadow_pane_g2

0xcd6a,	// (0x00032bbc) bg_frame_shadow_pane_g3

0xcd72,	// (0x00032bc4) bg_frame_shadow_pane_g4

0xcd7a,	// (0x00032bcc) bg_frame_shadow_pane_g5

0xcd82,	// (0x00032bd4) bg_frame_shadow_pane_g6

0xcd8a,	// (0x00032bdc) bg_frame_shadow_pane_g7

0x2dcb,	// (0x00028c1d) bg_frame_shadow_pane_g8

0x0007,

0xf889,	// (0x000356db) bg_frame_shadow_pane_g

0xb5e1,	// (0x00031433) main_video_tele_dialer_pane

0x17f3,	// (0x00027645) aid_size_cell_video_keypad_ParamLimits

0x17f3,	// (0x00027645) aid_size_cell_video_keypad

0x180d,	// (0x0002765f) grid_video_dialer_keypad_pane_ParamLimits

0x180d,	// (0x0002765f) grid_video_dialer_keypad_pane

0x184f,	// (0x000276a1) video_down_pane_cp_ParamLimits

0x184f,	// (0x000276a1) video_down_pane_cp

0x1863,	// (0x000276b5) cell_video_dialer_keypad_pane_ParamLimits

0x1863,	// (0x000276b5) cell_video_dialer_keypad_pane

0xcd92,	// (0x00032be4) bg_button_pane_cp08_ParamLimits

0xcd92,	// (0x00032be4) bg_button_pane_cp08

0x820c,	// (0x0002e05e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x820c,	// (0x0002e05e) cell_video_dialer_keypad_pane_g1

0x7a45,	// (0x0002d897) mup3_rocker2_pane_ParamLimits

0x7a45,	// (0x0002d897) mup3_rocker2_pane

0xc488,	// (0x000322da) mup3_rocker2_pane_g1

0x1129,	// (0x00026f7b) main_dialer2_pane

0xb5e1,	// (0x00031433) main_mp4_pane

0xcdae,	// (0x00032c00) main_mp4_pane_g1_ParamLimits

0xcdae,	// (0x00032c00) main_mp4_pane_g1

0xcdae,	// (0x00032c00) main_mp4_pane_g2_ParamLimits

0xcdae,	// (0x00032c00) main_mp4_pane_g2

0x1885,	// (0x000276d7) main_mp4_pane_g3_ParamLimits

0x1885,	// (0x000276d7) main_mp4_pane_g3

0xcdbc,	// (0x00032c0e) main_mp4_pane_g4_ParamLimits

0xcdbc,	// (0x00032c0e) main_mp4_pane_g4

0xcdea,	// (0x00032c3c) main_mp4_pane_g5_ParamLimits

0xcdea,	// (0x00032c3c) main_mp4_pane_g5

0x0007,

0xf8a9,	// (0x000356fb) main_mp4_pane_g_ParamLimits

0xf8a9,	// (0x000356fb) main_mp4_pane_g

0xce5e,	// (0x00032cb0) main_mp4_pane_t1_ParamLimits

0xce5e,	// (0x00032cb0) main_mp4_pane_t1

0xceb6,	// (0x00032d08) main_mp4_pane_t2_ParamLimits

0xceb6,	// (0x00032d08) main_mp4_pane_t2

0xcf08,	// (0x00032d5a) main_mp4_pane_t3_ParamLimits

0xcf08,	// (0x00032d5a) main_mp4_pane_t3

0xcf2e,	// (0x00032d80) main_mp4_pane_t4_ParamLimits

0xcf2e,	// (0x00032d80) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0003570c) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0003570c) main_mp4_pane_t

0xcf6e,	// (0x00032dc0) mp4_progress_pane_ParamLimits

0xcf6e,	// (0x00032dc0) mp4_progress_pane

0xcfb2,	// (0x00032e04) mp4_rocker_pane_ParamLimits

0xcfb2,	// (0x00032e04) mp4_rocker_pane

0xcfd8,	// (0x00032e2a) mp4_progress_pane_t1

0xcfef,	// (0x00032e41) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x00035715) mp4_progress_pane_t

0xd006,	// (0x00032e58) mup_progress_pane_cp04

0xd012,	// (0x00032e64) mp4_rocker_pane_g1

0x18b5,	// (0x00027707) aid_cell_size_keypad2_ParamLimits

0x18b5,	// (0x00027707) aid_cell_size_keypad2

0x18cf,	// (0x00027721) dialer2_ne_pane_ParamLimits

0x18cf,	// (0x00027721) dialer2_ne_pane

0x18e4,	// (0x00027736) grid_dialer2_keypad_pane_ParamLimits

0x18e4,	// (0x00027736) grid_dialer2_keypad_pane

0xc275,	// (0x000320c7) bg_popup_call_pane_cp07_ParamLimits

0xc275,	// (0x000320c7) bg_popup_call_pane_cp07

0x8247,	// (0x0002e099) dialer2_ne_pane_t1_ParamLimits

0x8247,	// (0x0002e099) dialer2_ne_pane_t1

0x18fa,	// (0x0002774c) cell_dialer2_keypad_pane_ParamLimits

0x18fa,	// (0x0002774c) cell_dialer2_keypad_pane

0xd02e,	// (0x00032e80) bg_button_pane_pane_cp04_ParamLimits

0xd02e,	// (0x00032e80) bg_button_pane_pane_cp04

0x8284,	// (0x0002e0d6) cell_dialer2_keypad_pane_g1_ParamLimits

0x8284,	// (0x0002e0d6) cell_dialer2_keypad_pane_g1

0x3846,	// (0x00029698) aid_placing_vt_set_content_ParamLimits

0x3846,	// (0x00029698) aid_placing_vt_set_content

0x3868,	// (0x000296ba) aid_placing_vt_set_title_ParamLimits

0x3868,	// (0x000296ba) aid_placing_vt_set_title

0xb5e1,	// (0x00031433) main_image3_pane

0x1960,	// (0x000277b2) area_side_right_pane_cp01_ParamLimits

0x1960,	// (0x000277b2) area_side_right_pane_cp01

0xcdae,	// (0x00032c00) main_image3_pane_g1_ParamLimits

0xcdae,	// (0x00032c00) main_image3_pane_g1

0x1977,	// (0x000277c9) main_image3_pane_g2_ParamLimits

0x1977,	// (0x000277c9) main_image3_pane_g2

0x199d,	// (0x000277ef) main_image3_pane_g3_ParamLimits

0x199d,	// (0x000277ef) main_image3_pane_g3

0x19c3,	// (0x00027815) main_image3_pane_g4_ParamLimits

0x19c3,	// (0x00027815) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x00035724) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x00035724) main_image3_pane_g

0x19e9,	// (0x0002783b) main_image3_pane_t1_ParamLimits

0x19e9,	// (0x0002783b) main_image3_pane_t1

0x1a41,	// (0x00027893) main_image3_pane_t2_ParamLimits

0x1a41,	// (0x00027893) main_image3_pane_t2

0x1a93,	// (0x000278e5) main_image3_pane_t3_ParamLimits

0x1a93,	// (0x000278e5) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0003572d) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0003572d) main_image3_pane_t

0x6d75,	// (0x0002cbc7) grid_sctrl_middle_pane_cp01_ParamLimits

0x6d75,	// (0x0002cbc7) grid_sctrl_middle_pane_cp01

0x82cf,	// (0x0002e121) cell_sctrl_middle_pane_cp01_ParamLimits

0x82cf,	// (0x0002e121) cell_sctrl_middle_pane_cp01

0x82ec,	// (0x0002e13e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x82ec,	// (0x0002e13e) cell_sctrl_middle_pane_cp01_g1

0xb5e1,	// (0x00031433) main_call4_pane

0x1b13,	// (0x00027965) aid_size_button_call4_ParamLimits

0x1b13,	// (0x00027965) aid_size_button_call4

0x1b40,	// (0x00027992) call4_windows_pane_ParamLimits

0x1b40,	// (0x00027992) call4_windows_pane

0x1b56,	// (0x000279a8) grid_call4_button_pane_ParamLimits

0x1b56,	// (0x000279a8) grid_call4_button_pane

0xd084,	// (0x00032ed6) call4_windows_conf_pane

0x830a,	// (0x0002e15c) popup_call4_audio_first_window_ParamLimits

0x830a,	// (0x0002e15c) popup_call4_audio_first_window

0x832a,	// (0x0002e17c) popup_call4_audio_second_window_ParamLimits

0x832a,	// (0x0002e17c) popup_call4_audio_second_window

0xd0b7,	// (0x00032f09) popup_call4_audio_wait_window_ParamLimits

0xd0b7,	// (0x00032f09) popup_call4_audio_wait_window

0x1b75,	// (0x000279c7) cell_call4_button_pane_ParamLimits

0x1b75,	// (0x000279c7) cell_call4_button_pane

0x833c,	// (0x0002e18e) bg_button_pane_cp09_ParamLimits

0x833c,	// (0x0002e18e) bg_button_pane_cp09

0x1b9a,	// (0x000279ec) cell_call4_button_pane_g1_ParamLimits

0x1b9a,	// (0x000279ec) cell_call4_button_pane_g1

0x1bc0,	// (0x00027a12) cell_call4_button_pane_t1_ParamLimits

0x1bc0,	// (0x00027a12) cell_call4_button_pane_t1

0xd0fd,	// (0x00032f4f) popup_call4_audio_conf_window_ParamLimits

0xd0fd,	// (0x00032f4f) popup_call4_audio_conf_window

0x7a9f,	// (0x0002d8f1) mup3_progress_pane_t1_ParamLimits

0x7abd,	// (0x0002d90f) mup3_progress_pane_t2_ParamLimits

0xc7a6,	// (0x000325f8) mup3_progress_pane_t3_ParamLimits

0xf7ab,	// (0x000355fd) mup3_progress_pane_t_ParamLimits

0xc7c3,	// (0x00032615) mup_progress_pane_cp03_ParamLimits

0x7fef,	// (0x0002de41) mup3_control_keys_pane_g4_copy1

0xcf9c,	// (0x00032dee) mp4_rocker2_pane_ParamLimits

0xcf9c,	// (0x00032dee) mp4_rocker2_pane

0xd111,	// (0x00032f63) mp4_rocker2_pane_g1

0xd119,	// (0x00032f6b) mp4_rocker2_pane_g2

0xd121,	// (0x00032f73) mp4_rocker2_pane_g3

0xd129,	// (0x00032f7b) mp4_rocker2_pane_g4

0xd131,	// (0x00032f83) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x00035736) mp4_rocker2_pane_g

0xb5e1,	// (0x00031433) main_camera4_pane

0xb5e1,	// (0x00031433) main_video4_pane

0x1821,	// (0x00027673) main_video_tele_dialer_pane_t1_ParamLimits

0x1821,	// (0x00027673) main_video_tele_dialer_pane_t1

0x1838,	// (0x0002768a) main_video_tele_dialer_pane_t2_ParamLimits

0x1838,	// (0x0002768a) main_video_tele_dialer_pane_t2

0x0001,

0xf89a,	// (0x000356ec) main_video_tele_dialer_pane_t_ParamLimits

0xf89a,	// (0x000356ec) main_video_tele_dialer_pane_t

0x1bfe,	// (0x00027a50) cam4_autofocus_pane_ParamLimits

0x1bfe,	// (0x00027a50) cam4_autofocus_pane

0x1c12,	// (0x00027a64) cam4_image_uncrop_pane_ParamLimits

0x1c12,	// (0x00027a64) cam4_image_uncrop_pane

0x1c29,	// (0x00027a7b) cam4_indicators_pane_ParamLimits

0x1c29,	// (0x00027a7b) cam4_indicators_pane

0x1c4d,	// (0x00027a9f) main_camera4_pane_g1_ParamLimits

0x1c4d,	// (0x00027a9f) main_camera4_pane_g1

0x1c59,	// (0x00027aab) main_camera4_pane_g2_ParamLimits

0x1c59,	// (0x00027aab) main_camera4_pane_g2

0x1c59,	// (0x00027aab) main_camera4_pane_g3_ParamLimits

0x1c59,	// (0x00027aab) main_camera4_pane_g3

0x1c65,	// (0x00027ab7) main_camera4_pane_g4_ParamLimits

0x1c65,	// (0x00027ab7) main_camera4_pane_g4

0x1c71,	// (0x00027ac3) main_camera4_pane_g5_ParamLimits

0x1c71,	// (0x00027ac3) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x00035741) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x00035741) main_camera4_pane_g

0x1c8e,	// (0x00027ae0) main_camera4_pane_t1_ParamLimits

0x1c8e,	// (0x00027ae0) main_camera4_pane_t1

0xd165,	// (0x00032fb7) bg_tb_trans_pane_cp06

0xd17b,	// (0x00032fcd) cam4_indicators_pane_g1

0xd18b,	// (0x00032fdd) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0003575c) cam4_indicators_pane_g

0xd1ab,	// (0x00032ffd) cam4_indicators_pane_t1

0x1cd1,	// (0x00027b23) main_video4_pane_g1_ParamLimits

0x1cd1,	// (0x00027b23) main_video4_pane_g1

0x1ce3,	// (0x00027b35) main_video4_pane_g2_ParamLimits

0x1ce3,	// (0x00027b35) main_video4_pane_g2

0x1ce3,	// (0x00027b35) main_video4_pane_g3_ParamLimits

0x1ce3,	// (0x00027b35) main_video4_pane_g3

0x1cf2,	// (0x00027b44) main_video4_pane_g4_ParamLimits

0x1cf2,	// (0x00027b44) main_video4_pane_g4

0x0004,

0xf911,	// (0x00035763) main_video4_pane_g_ParamLimits

0xf911,	// (0x00035763) main_video4_pane_g

0x1d10,	// (0x00027b62) vid4_indicators_pane_ParamLimits

0x1d10,	// (0x00027b62) vid4_indicators_pane

0x1d38,	// (0x00027b8a) video4_image_uncrop_cif_pane_ParamLimits

0x1d38,	// (0x00027b8a) video4_image_uncrop_cif_pane

0x1d50,	// (0x00027ba2) video4_image_uncrop_nhd_pane_ParamLimits

0x1d50,	// (0x00027ba2) video4_image_uncrop_nhd_pane

0x1d64,	// (0x00027bb6) video4_image_uncrop_vga_pane_ParamLimits

0x1d64,	// (0x00027bb6) video4_image_uncrop_vga_pane

0xb5d3,	// (0x00031425) bg_tb_trans_pane_cp07

0xd17b,	// (0x00032fcd) vid4_indicators_pane_g1

0xd1cd,	// (0x0003301f) vid4_indicators_pane_g2

0xd1dd,	// (0x0003302f) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0003576e) vid4_indicators_pane_g

0xd20a,	// (0x0003305c) vid4_indicators_pane_t1

0x835a,	// (0x0002e1ac) cam4_autofocus_pane_g1

0x8362,	// (0x0002e1b4) cam4_autofocus_pane_g2

0x836a,	// (0x0002e1bc) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x00035779) cam4_autofocus_pane_g

0x8372,	// (0x0002e1c4) cam4_autofocus_pane_g3_copy1

0x81f0,	// (0x0002e042) video_down_pane_cp_t1

0x81fe,	// (0x0002e050) video_down_pane_cp_t2

0x0001,

0xf89f,	// (0x000356f1) video_down_pane_cp_t

0xb5d3,	// (0x00031425) popup_vitu2_window_ParamLimits

0xb5d3,	// (0x00031425) popup_vitu2_window

0x1d7c,	// (0x00027bce) aid_size_cell2_itu2_ParamLimits

0x1d7c,	// (0x00027bce) aid_size_cell2_itu2

0x1da2,	// (0x00027bf4) aid_size_cell_itu2_ParamLimits

0x1da2,	// (0x00027bf4) aid_size_cell_itu2

0x1df3,	// (0x00027c45) bg_popup_window_pane_cp09_ParamLimits

0x1df3,	// (0x00027c45) bg_popup_window_pane_cp09

0x1e01,	// (0x00027c53) field_vitu2_entry_pane_ParamLimits

0x1e01,	// (0x00027c53) field_vitu2_entry_pane

0x1e18,	// (0x00027c6a) grid_vitu2_function_pane_ParamLimits

0x1e18,	// (0x00027c6a) grid_vitu2_function_pane

0x1e4d,	// (0x00027c9f) grid_vitu2_itu_pane_ParamLimits

0x1e4d,	// (0x00027c9f) grid_vitu2_itu_pane

0x1eb4,	// (0x00027d06) cell_vitu2_itu_pane_ParamLimits

0x1eb4,	// (0x00027d06) cell_vitu2_itu_pane

0x1edc,	// (0x00027d2e) cell_vitu2_function_pane_ParamLimits

0x1edc,	// (0x00027d2e) cell_vitu2_function_pane

0xd224,	// (0x00033076) bg_popup_call_pane_cp08_ParamLimits

0xd224,	// (0x00033076) bg_popup_call_pane_cp08

0xd23b,	// (0x0003308d) field_vitu2_entry_pane_g1

0xd247,	// (0x00033099) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x00035780) field_vitu2_entry_pane_g

0x837a,	// (0x0002e1cc) field_vitu2_entry_pane_t1_ParamLimits

0x837a,	// (0x0002e1cc) field_vitu2_entry_pane_t1

0xd261,	// (0x000330b3) field_vitu2_entry_pane_t2_ParamLimits

0xd261,	// (0x000330b3) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x00035787) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x00035787) field_vitu2_entry_pane_t

0x1f1b,	// (0x00027d6d) bg_button_pane_cp010_ParamLimits

0x1f1b,	// (0x00027d6d) bg_button_pane_cp010

0xd286,	// (0x000330d8) cell_vitu2_itu_pane_g1

0x1f37,	// (0x00027d89) cell_vitu2_itu_pane_t1_ParamLimits

0x1f37,	// (0x00027d89) cell_vitu2_itu_pane_t1

0x1f95,	// (0x00027de7) cell_vitu2_itu_pane_t2_ParamLimits

0x1f95,	// (0x00027de7) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x00035791) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x00035791) cell_vitu2_itu_pane_t

0xb5d3,	// (0x00031425) bg_button_pane_cp011

0x2081,	// (0x00027ed3) cell_vitu2_function_pane_g1

0xb5e1,	// (0x00031433) main_myfav_hc_pane

0x1adf,	// (0x00027931) popup_image3_note_pane_ParamLimits

0x1adf,	// (0x00027931) popup_image3_note_pane

0x1af9,	// (0x0002794b) popup_image3_tool_bar_pane_ParamLimits

0x1af9,	// (0x0002794b) popup_image3_tool_bar_pane

0x2023,	// (0x00027e75) cell_vitu2_itu_pane_t3_ParamLimits

0x2023,	// (0x00027e75) cell_vitu2_itu_pane_t3

0x2275,	// (0x000280c7) bg_popup_trans_pane

0xd298,	// (0x000330ea) grid_image3_tool_bar_pane

0xd2a2,	// (0x000330f4) bg_popup_trans_pane_g1

0x3d8e,	// (0x00029be0) bg_popup_trans_pane_g2

0xd2aa,	// (0x000330fc) bg_popup_trans_pane_g3

0xd2b2,	// (0x00033104) bg_popup_trans_pane_g4

0xd2ba,	// (0x0003310c) bg_popup_trans_pane_g5

0xd2c2,	// (0x00033114) bg_popup_trans_pane_g6

0xd2ca,	// (0x0003311c) bg_popup_trans_pane_g7

0xd2d2,	// (0x00033124) bg_popup_trans_pane_g8

0x3d6e,	// (0x00029bc0) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x00035798) bg_popup_trans_pane_g

0xd2da,	// (0x0003312c) cell_image3_tool_bar_pane_ParamLimits

0xd2da,	// (0x0003312c) cell_image3_tool_bar_pane

0xc488,	// (0x000322da) cell_image3_tool_bar_pane_g1

0x2275,	// (0x000280c7) bg_popup_trans_pane_cp1

0xd2ee,	// (0x00033140) popup_image3_note_pane_t1

0xd2fc,	// (0x0003314e) popup_image3_note_pane_t2

0xd30a,	// (0x0003315c) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x000357ab) popup_image3_note_pane_t

0xd318,	// (0x0003316a) popup_image3_note_pane_t3_copy1

0x83a7,	// (0x0002e1f9) bg_myfav_hc_instruction_pane_ParamLimits

0x83a7,	// (0x0002e1f9) bg_myfav_hc_instruction_pane

0x83b9,	// (0x0002e20b) cell_myfav_contact_pane_ParamLimits

0x83b9,	// (0x0002e20b) cell_myfav_contact_pane

0x83d3,	// (0x0002e225) cell_myfav_contact_pane_cp1_ParamLimits

0x83d3,	// (0x0002e225) cell_myfav_contact_pane_cp1

0x83e9,	// (0x0002e23b) cell_myfav_contact_pane_cp2_ParamLimits

0x83e9,	// (0x0002e23b) cell_myfav_contact_pane_cp2

0x83ff,	// (0x0002e251) cell_myfav_contact_pane_cp3_ParamLimits

0x83ff,	// (0x0002e251) cell_myfav_contact_pane_cp3

0x8414,	// (0x0002e266) cell_myfav_contact_pane_cp4_ParamLimits

0x8414,	// (0x0002e266) cell_myfav_contact_pane_cp4

0x8428,	// (0x0002e27a) cell_myfav_contact_pane_cp5_ParamLimits

0x8428,	// (0x0002e27a) cell_myfav_contact_pane_cp5

0x843c,	// (0x0002e28e) cell_myfav_contact_pane_cp6_ParamLimits

0x843c,	// (0x0002e28e) cell_myfav_contact_pane_cp6

0x8450,	// (0x0002e2a2) cell_myfav_contact_pane_cp7_ParamLimits

0x8450,	// (0x0002e2a2) cell_myfav_contact_pane_cp7

0xd326,	// (0x00033178) listscroll_gen_pane_cp05

0x8468,	// (0x0002e2ba) main_myfav_hc_pane_g1_ParamLimits

0x8468,	// (0x0002e2ba) main_myfav_hc_pane_g1

0x847e,	// (0x0002e2d0) main_myfav_hc_pane_g2_ParamLimits

0x847e,	// (0x0002e2d0) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x000357b2) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x000357b2) main_myfav_hc_pane_g

0x84a8,	// (0x0002e2fa) main_myfav_hc_pane_t1_ParamLimits

0x84a8,	// (0x0002e2fa) main_myfav_hc_pane_t1

0xd32f,	// (0x00033181) main_myfav_hc_pane_t2_ParamLimits

0xd32f,	// (0x00033181) main_myfav_hc_pane_t2

0xd341,	// (0x00033193) main_myfav_hc_pane_t3_ParamLimits

0xd341,	// (0x00033193) main_myfav_hc_pane_t3

0x84bd,	// (0x0002e30f) main_myfav_hc_pane_t4_ParamLimits

0x84bd,	// (0x0002e30f) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x000357b9) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x000357b9) main_myfav_hc_pane_t

0xc488,	// (0x000322da) bg_myfav_hc_instruction_pane_g1

0xd353,	// (0x000331a5) cell_myfav_contact_pane_g1_ParamLimits

0xd353,	// (0x000331a5) cell_myfav_contact_pane_g1

0xd353,	// (0x000331a5) cell_myfav_contact_pane_g2_ParamLimits

0xd353,	// (0x000331a5) cell_myfav_contact_pane_g2

0xd35f,	// (0x000331b1) cell_myfav_contact_pane_g3_ParamLimits

0xd35f,	// (0x000331b1) cell_myfav_contact_pane_g3

0xc790,	// (0x000325e2) cell_myfav_contact_pane_g4_ParamLimits

0xc790,	// (0x000325e2) cell_myfav_contact_pane_g4

0xd36c,	// (0x000331be) cell_myfav_contact_pane_g5_ParamLimits

0xd36c,	// (0x000331be) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x000357c4) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x000357c4) cell_myfav_contact_pane_g

0x8494,	// (0x0002e2e6) main_myfav_hc_pane_g3_ParamLimits

0x8494,	// (0x0002e2e6) main_myfav_hc_pane_g3

0x0d21,	// (0x00026b73) popup_adpt_find_window

0x84e1,	// (0x0002e333) afind_page_pane_ParamLimits

0x84e1,	// (0x0002e333) afind_page_pane

0x84f6,	// (0x0002e348) aid_size_cell_afind_ParamLimits

0x84f6,	// (0x0002e348) aid_size_cell_afind

0x8514,	// (0x0002e366) bg_popup_sub_pane_cp09_ParamLimits

0x8514,	// (0x0002e366) bg_popup_sub_pane_cp09

0x8521,	// (0x0002e373) find_pane_cp01_ParamLimits

0x8521,	// (0x0002e373) find_pane_cp01

0xd378,	// (0x000331ca) grid_afind_control_pane_ParamLimits

0xd378,	// (0x000331ca) grid_afind_control_pane

0x852e,	// (0x0002e380) grid_afind_pane_ParamLimits

0x852e,	// (0x0002e380) grid_afind_pane

0x854c,	// (0x0002e39e) cell_afind_pane_ParamLimits

0x854c,	// (0x0002e39e) cell_afind_pane

0xc488,	// (0x000322da) afind_page_pane_g1

0x859b,	// (0x0002e3ed) afind_page_pane_g2

0x85a4,	// (0x0002e3f6) afind_page_pane_g3

0x0002,

0xf97d,	// (0x000357cf) afind_page_pane_g

0x85ad,	// (0x0002e3ff) afind_page_pane_t1

0xd38c,	// (0x000331de) cell_afind_grid_control_pane_ParamLimits

0xd38c,	// (0x000331de) cell_afind_grid_control_pane

0xd02e,	// (0x00032e80) bg_button_pane_cp69_ParamLimits

0xd02e,	// (0x00032e80) bg_button_pane_cp69

0x85cd,	// (0x0002e41f) cell_afind_pane_g1_ParamLimits

0x85cd,	// (0x0002e41f) cell_afind_pane_g1

0x85da,	// (0x0002e42c) cell_afind_pane_t1_ParamLimits

0x85da,	// (0x0002e42c) cell_afind_pane_t1

0x36ef,	// (0x00029541) bg_button_pane_cp72

0xd39b,	// (0x000331ed) cell_afind_grid_control_pane_g1

0x610b,	// (0x0002bf5d) aid_image_placing_area_ParamLimits

0x610b,	// (0x0002bf5d) aid_image_placing_area

0xcaa3,	// (0x000328f5) field_vitu_entry_pane_g1_ParamLimits

0xcaa3,	// (0x000328f5) field_vitu_entry_pane_g1

0xcaaf,	// (0x00032901) field_vitu_entry_pane_g2_ParamLimits

0xcaaf,	// (0x00032901) field_vitu_entry_pane_g2

0x0001,

0xf82a,	// (0x0003567c) field_vitu_entry_pane_g_ParamLimits

0xf82a,	// (0x0003567c) field_vitu_entry_pane_g

0x80a2,	// (0x0002def4) cell_vitu_itu_pane_g1_ParamLimits

0x80e4,	// (0x0002df36) cell_vitu_itu_pane_t3_ParamLimits

0x80e4,	// (0x0002df36) cell_vitu_itu_pane_t3

0xcfd8,	// (0x00032e2a) mp4_progress_pane_t1_ParamLimits

0xcfef,	// (0x00032e41) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x00035715) mp4_progress_pane_t_ParamLimits

0xd006,	// (0x00032e58) mup_progress_pane_cp04_ParamLimits

0x84cf,	// (0x0002e321) main_myfav_hc_pane_t5_ParamLimits

0x84cf,	// (0x0002e321) main_myfav_hc_pane_t5

0xb5a2,	// (0x000313f4) aid_zoom_text_primary

0x0d21,	// (0x00026b73) popup_adpt_find_window_ParamLimits

0xb5d3,	// (0x00031425) main_cam_set_pane

0x1c3b,	// (0x00027a8d) cam4_zoom_pane_ParamLimits

0x1c3b,	// (0x00027a8d) cam4_zoom_pane

0x85ec,	// (0x0002e43e) main_cam_set_pane_g1_ParamLimits

0x85ec,	// (0x0002e43e) main_cam_set_pane_g1

0x85fa,	// (0x0002e44c) main_cam_set_pane_g2_ParamLimits

0x85fa,	// (0x0002e44c) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x000357d6) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x000357d6) main_cam_set_pane_g

0x8619,	// (0x0002e46b) main_cam_set_pane_t1_ParamLimits

0x8619,	// (0x0002e46b) main_cam_set_pane_t1

0x862b,	// (0x0002e47d) main_cset_listscroll_pane_ParamLimits

0x862b,	// (0x0002e47d) main_cset_listscroll_pane

0x8649,	// (0x0002e49b) main_cset_slider_pane_ParamLimits

0x8649,	// (0x0002e49b) main_cset_slider_pane

0xd3ac,	// (0x000331fe) main_cset_list_pane_ParamLimits

0xd3ac,	// (0x000331fe) main_cset_list_pane

0xd3bc,	// (0x0003320e) scroll_pane_cp028

0x866d,	// (0x0002e4bf) aid_area_touch_slider

0x8689,	// (0x0002e4db) cset_slider_pane

0x86b3,	// (0x0002e505) main_cset_slider_pane_g1

0x86c8,	// (0x0002e51a) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x000357db) main_cset_slider_pane_g

0xd3f5,	// (0x00033247) main_cset_slider_pane_t1

0x8784,	// (0x0002e5d6) main_cset_slider_pane_t2

0x879e,	// (0x0002e5f0) main_cset_slider_pane_t3

0x87b8,	// (0x0002e60a) main_cset_slider_pane_t4

0x87d2,	// (0x0002e624) main_cset_slider_pane_t5

0x87ec,	// (0x0002e63e) main_cset_slider_pane_t6

0x8801,	// (0x0002e653) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x00035800) main_cset_slider_pane_t

0x8905,	// (0x0002e757) cset_list_set_pane_ParamLimits

0x8905,	// (0x0002e757) cset_list_set_pane

0x8916,	// (0x0002e768) aid_position_infowindow_above

0x891e,	// (0x0002e770) aid_position_infowindow_below

0x8926,	// (0x0002e778) cset_list_set_pane_g1_ParamLimits

0x8926,	// (0x0002e778) cset_list_set_pane_g1

0x8932,	// (0x0002e784) cset_list_set_pane_g3_ParamLimits

0x8932,	// (0x0002e784) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0003581f) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0003581f) cset_list_set_pane_g

0x8941,	// (0x0002e793) cset_list_set_pane_t1_ParamLimits

0x8941,	// (0x0002e793) cset_list_set_pane_t1

0x6d75,	// (0x0002cbc7) list_highlight_pane_cp021_ParamLimits

0x6d75,	// (0x0002cbc7) list_highlight_pane_cp021

0x595f,	// (0x0002b7b1) cset_slider_pane_g1

0x5971,	// (0x0002b7c3) cset_slider_pane_g2

0x5968,	// (0x0002b7ba) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x00035824) cset_slider_pane_g

0xd495,	// (0x000332e7) aid_area_touch_cam4_zoom

0xd49d,	// (0x000332ef) cam4_zoom_cont_pane

0xd4a5,	// (0x000332f7) cam4_zoom_pane_g1

0xd4ad,	// (0x000332ff) cam4_zoom_pane_g2

0x2094,	// (0x00027ee6) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0003582b) cam4_zoom_pane_g

0xd4b5,	// (0x00033307) cam4_zoom_cont_pane_g1

0xd4be,	// (0x00033310) cam4_zoom_cont_pane_g2

0xd4c7,	// (0x00033319) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x00035832) cam4_zoom_cont_pane_g

0x1b31,	// (0x00027983) call4_image_pane_ParamLimits

0x1b31,	// (0x00027983) call4_image_pane

0xd084,	// (0x00032ed6) call4_windows_conf_pane_ParamLimits

0xd097,	// (0x00032ee9) popup_call4_audio_in_window_ParamLimits

0xd097,	// (0x00032ee9) popup_call4_audio_in_window

0x2275,	// (0x000280c7) bg_popup_call2_act_pane_cp02

0xd0f5,	// (0x00032f47) call4_list_conf_pane

0xc488,	// (0x000322da) call4_image_pane_g1

0xc488,	// (0x000322da) call4_image_pane_g2

0x0001,

0xf6eb,	// (0x0003553d) call4_image_pane_g

0xd4d0,	// (0x00033322) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4d0,	// (0x00033322) list_single_graphic_popup_conf4_pane

0x2275,	// (0x000280c7) list_highlight_pane_cp022

0xd4e3,	// (0x00033335) list_single_graphic_popup_conf4_pane_g1

0x4f58,	// (0x0002adaa) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x00035839) list_single_graphic_popup_conf4_pane_g

0xd4eb,	// (0x0003333d) list_single_graphic_popup_conf4_pane_t1

0x3984,	// (0x000297d6) popup_vtel_slider_window_ParamLimits

0x3984,	// (0x000297d6) popup_vtel_slider_window

0xd01c,	// (0x00032e6e) dialer2_ne_pane_t2_ParamLimits

0xd01c,	// (0x00032e6e) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0003571a) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0003571a) dialer2_ne_pane_t

0xc275,	// (0x000320c7) bg_popup_sub_pane_cp010_ParamLimits

0xc275,	// (0x000320c7) bg_popup_sub_pane_cp010

0x8956,	// (0x0002e7a8) popup_vtel_slider_window_g1_ParamLimits

0x8956,	// (0x0002e7a8) popup_vtel_slider_window_g1

0x8969,	// (0x0002e7bb) popup_vtel_slider_window_g2_ParamLimits

0x8969,	// (0x0002e7bb) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0003583e) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0003583e) popup_vtel_slider_window_g

0x89bd,	// (0x0002e80f) vtel_slider_pane_ParamLimits

0x89bd,	// (0x0002e80f) vtel_slider_pane

0x89df,	// (0x0002e831) vtel_slider_pane_g1_ParamLimits

0x89df,	// (0x0002e831) vtel_slider_pane_g1

0x89f3,	// (0x0002e845) vtel_slider_pane_g2_ParamLimits

0x89f3,	// (0x0002e845) vtel_slider_pane_g2

0x8a0b,	// (0x0002e85d) vtel_slider_pane_g3_ParamLimits

0x8a0b,	// (0x0002e85d) vtel_slider_pane_g3

0x89df,	// (0x0002e831) vtel_slider_pane_g4_ParamLimits

0x89df,	// (0x0002e831) vtel_slider_pane_g4

0x8a21,	// (0x0002e873) vtel_slider_pane_g5_ParamLimits

0x8a21,	// (0x0002e873) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x00035847) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x00035847) vtel_slider_pane_g

0xb5d3,	// (0x00031425) main_gallery2_pane

0x1dce,	// (0x00027c20) aid_size_row_itut2_dropdow_list_ParamLimits

0x1dce,	// (0x00027c20) aid_size_row_itut2_dropdow_list

0x1e31,	// (0x00027c83) grid_vitu2_function_top_pane_ParamLimits

0x1e31,	// (0x00027c83) grid_vitu2_function_top_pane

0x1e76,	// (0x00027cc8) popup_vitu2_dropdown_list_window_ParamLimits

0x1e76,	// (0x00027cc8) popup_vitu2_dropdown_list_window

0x1e92,	// (0x00027ce4) popup_vitu2_match_list_window

0x209c,	// (0x00027eee) cell_vitu2_function_top_pane_ParamLimits

0x209c,	// (0x00027eee) cell_vitu2_function_top_pane

0x20b4,	// (0x00027f06) cell_vitu2_function_top_pane_cp01_ParamLimits

0x20b4,	// (0x00027f06) cell_vitu2_function_top_pane_cp01

0x20d0,	// (0x00027f22) cell_vitu2_function_top_wide_pane_ParamLimits

0x20d0,	// (0x00027f22) cell_vitu2_function_top_wide_pane

0xb5d3,	// (0x00031425) bg_button_pane_cp012

0x20ec,	// (0x00027f3e) cell_vitu2_function_top_pane_g1

0xd50f,	// (0x00033361) bg_button_pane_cp013_ParamLimits

0xd50f,	// (0x00033361) bg_button_pane_cp013

0x8a37,	// (0x0002e889) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8a37,	// (0x0002e889) cell_vitu2_function_top_wide_pane_g1

0xb5d3,	// (0x00031425) bg_popup_sub_pane_cp20

0x2100,	// (0x00027f52) list_vitu2_match_list_pane

0xd2a2,	// (0x000330f4) bg_popup_sub_pane_cp20_g1

0xd2aa,	// (0x000330fc) bg_popup_sub_pane_cp20_g2

0x3d8e,	// (0x00029be0) bg_popup_sub_pane_cp20_g3

0xd2b2,	// (0x00033104) bg_popup_sub_pane_cp20_g4

0x3d6e,	// (0x00029bc0) bg_popup_sub_pane_cp20_g5

0xd52b,	// (0x0003337d) bg_popup_sub_pane_cp20_g6

0xd2c2,	// (0x00033114) bg_popup_sub_pane_cp20_g7

0xd2ca,	// (0x0003311c) bg_popup_sub_pane_cp20_g8

0xd2d2,	// (0x00033124) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x00035852) bg_popup_sub_pane_cp20_g

0xd533,	// (0x00033385) list_vitu2_match_list_item_pane_ParamLimits

0xd533,	// (0x00033385) list_vitu2_match_list_item_pane

0xd545,	// (0x00033397) list_vitu2_match_list_item_pane_t1

0xb5e1,	// (0x00031433) bg_popup_sub_pane_cp21

0xd56b,	// (0x000333bd) grid_vitu2_dropdown_list_pane

0x211e,	// (0x00027f70) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x211e,	// (0x00027f70) cell_vitu2_dropdown_list_char_pane

0x213f,	// (0x00027f91) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x213f,	// (0x00027f91) cell_vitu2_dropdown_list_ctrl_pane

0xd573,	// (0x000333c5) cell_vitu2_dropdown_list_char_pane_g1

0xd57c,	// (0x000333ce) cell_vitu2_dropdown_list_char_pane_g2

0xd585,	// (0x000333d7) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0003586f) cell_vitu2_dropdown_list_char_pane_g

0x216b,	// (0x00027fbd) cell_vitu2_dropdown_list_char_pane_t1

0x8a7b,	// (0x0002e8cd) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8a7b,	// (0x0002e8cd) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8a88,	// (0x0002e8da) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8a88,	// (0x0002e8da) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8a95,	// (0x0002e8e7) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8a95,	// (0x0002e8e7) cell_vitu2_dropdown_list_ctrl_pane_g3

0x2179,	// (0x00027fcb) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x2179,	// (0x00027fcb) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd165,	// (0x00032fb7) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd165,	// (0x00032fb7) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x00035876) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x00035876) cell_vitu2_dropdown_list_ctrl_pane_g

0x8aa2,	// (0x0002e8f4) aid_size_cell_gallery2_ParamLimits

0x8aa2,	// (0x0002e8f4) aid_size_cell_gallery2

0x8ac0,	// (0x0002e912) grid_gallery2_pane_ParamLimits

0x8ac0,	// (0x0002e912) grid_gallery2_pane

0x7f07,	// (0x0002dd59) scroll_pane_cp029_ParamLimits

0x7f07,	// (0x0002dd59) scroll_pane_cp029

0x8ad4,	// (0x0002e926) cell_gallery2_pane_ParamLimits

0x8ad4,	// (0x0002e926) cell_gallery2_pane

0xd58e,	// (0x000333e0) cell_gallery2_pane_g2

0x8b2d,	// (0x0002e97f) cell_gallery2_pane_g3

0xd596,	// (0x000333e8) cell_gallery2_pane_g4

0xd59e,	// (0x000333f0) cell_gallery2_pane_g5

0x336e,	// (0x000291c0) grid_highlight_pane_cp10

0x1e92,	// (0x00027ce4) popup_vitu2_match_list_window_ParamLimits

0x1ea3,	// (0x00027cf5) popup_vitu2_query_window_ParamLimits

0x1ea3,	// (0x00027cf5) popup_vitu2_query_window

0xb5e1,	// (0x00031433) bg_vitu2_candi_button_pane

0xd573,	// (0x000333c5) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd57c,	// (0x000333ce) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd585,	// (0x000333d7) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8b35,	// (0x0002e987) bg_button_pane_cp015

0x8b45,	// (0x0002e997) bg_button_pane_cp016

0x8b57,	// (0x0002e9a9) bg_button_pane_cp017

0xbf74,	// (0x00031dc6) bg_popup_sub_pane_cp22

0xd5a6,	// (0x000333f8) popup_vitu2_query_window_g1

0x8b98,	// (0x0002e9ea) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x00035881) popup_vitu2_query_window_g

0x8bb3,	// (0x0002ea05) popup_vitu2_query_window_t1_ParamLimits

0x8bb3,	// (0x0002ea05) popup_vitu2_query_window_t1

0x8be6,	// (0x0002ea38) popup_vitu2_query_window_t2_ParamLimits

0x8be6,	// (0x0002ea38) popup_vitu2_query_window_t2

0x8bf8,	// (0x0002ea4a) popup_vitu2_query_window_t3_ParamLimits

0x8bf8,	// (0x0002ea4a) popup_vitu2_query_window_t3

0x8c20,	// (0x0002ea72) popup_vitu2_query_window_t4_ParamLimits

0x8c20,	// (0x0002ea72) popup_vitu2_query_window_t4

0x8c3d,	// (0x0002ea8f) popup_vitu2_query_window_t5_ParamLimits

0x8c3d,	// (0x0002ea8f) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x00035888) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x00035888) popup_vitu2_query_window_t

0xd3a4,	// (0x000331f6) main_cset_text_pane

0x866d,	// (0x0002e4bf) aid_area_touch_slider_ParamLimits

0x8689,	// (0x0002e4db) cset_slider_pane_ParamLimits

0x86b3,	// (0x0002e505) main_cset_slider_pane_g1_ParamLimits

0x86c8,	// (0x0002e51a) main_cset_slider_pane_g2_ParamLimits

0xd3c5,	// (0x00033217) main_cset_slider_pane_g3_ParamLimits

0xd3c5,	// (0x00033217) main_cset_slider_pane_g3

0x86dd,	// (0x0002e52f) main_cset_slider_pane_g4_ParamLimits

0x86dd,	// (0x0002e52f) main_cset_slider_pane_g4

0x86ec,	// (0x0002e53e) main_cset_slider_pane_g5_ParamLimits

0x86ec,	// (0x0002e53e) main_cset_slider_pane_g5

0x86f8,	// (0x0002e54a) main_cset_slider_pane_g6_ParamLimits

0x86f8,	// (0x0002e54a) main_cset_slider_pane_g6

0xf989,	// (0x000357db) main_cset_slider_pane_g_ParamLimits

0xd3f5,	// (0x00033247) main_cset_slider_pane_t1_ParamLimits

0x8784,	// (0x0002e5d6) main_cset_slider_pane_t2_ParamLimits

0x879e,	// (0x0002e5f0) main_cset_slider_pane_t3_ParamLimits

0x87b8,	// (0x0002e60a) main_cset_slider_pane_t4_ParamLimits

0x87d2,	// (0x0002e624) main_cset_slider_pane_t5_ParamLimits

0x87ec,	// (0x0002e63e) main_cset_slider_pane_t6_ParamLimits

0x8801,	// (0x0002e653) main_cset_slider_pane_t7_ParamLimits

0x882b,	// (0x0002e67d) main_cset_slider_pane_t8_ParamLimits

0x882b,	// (0x0002e67d) main_cset_slider_pane_t8

0x8853,	// (0x0002e6a5) main_cset_slider_pane_t9_ParamLimits

0x8853,	// (0x0002e6a5) main_cset_slider_pane_t9

0x887b,	// (0x0002e6cd) main_cset_slider_pane_t10_ParamLimits

0x887b,	// (0x0002e6cd) main_cset_slider_pane_t10

0x88a3,	// (0x0002e6f5) main_cset_slider_pane_t11_ParamLimits

0x88a3,	// (0x0002e6f5) main_cset_slider_pane_t11

0x88cb,	// (0x0002e71d) main_cset_slider_pane_t12_ParamLimits

0x88cb,	// (0x0002e71d) main_cset_slider_pane_t12

0x88e8,	// (0x0002e73a) main_cset_slider_pane_t13_ParamLimits

0x88e8,	// (0x0002e73a) main_cset_slider_pane_t13

0xf9ae,	// (0x00035800) main_cset_slider_pane_t_ParamLimits

0x2275,	// (0x000280c7) bg_popup_sub_pane_cp011

0xd5b2,	// (0x00033404) main_cset_text_pane_g1

0xd5ba,	// (0x0003340c) main_cset_text_pane_t1

0xd5c8,	// (0x0003341a) main_cset_text_pane_t2

0xd5d6,	// (0x00033428) main_cset_text_pane_t3

0xd5e4,	// (0x00033436) main_cset_text_pane_t4

0xd5f2,	// (0x00033444) main_cset_text_pane_t5

0xd600,	// (0x00033452) main_cset_text_pane_t6

0xd60e,	// (0x00033460) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x00035897) main_cset_text_pane_t

0xb5e1,	// (0x00031433) main_cam4_burst_pane

0xb5e1,	// (0x00031433) main_cam5_pane

0x85bb,	// (0x0002e40d) bg_button_pane_cp019

0x85c4,	// (0x0002e416) bg_button_pane_cp020

0xd3d1,	// (0x00033223) main_cset_slider_pane_g7_ParamLimits

0xd3d1,	// (0x00033223) main_cset_slider_pane_g7

0xd3dd,	// (0x0003322f) main_cset_slider_pane_g8_ParamLimits

0xd3dd,	// (0x0003322f) main_cset_slider_pane_g8

0x870c,	// (0x0002e55e) main_cset_slider_pane_g9_ParamLimits

0x870c,	// (0x0002e55e) main_cset_slider_pane_g9

0x8718,	// (0x0002e56a) main_cset_slider_pane_g10_ParamLimits

0x8718,	// (0x0002e56a) main_cset_slider_pane_g10

0x8724,	// (0x0002e576) main_cset_slider_pane_g11_ParamLimits

0x8724,	// (0x0002e576) main_cset_slider_pane_g11

0x8730,	// (0x0002e582) main_cset_slider_pane_g12_ParamLimits

0x8730,	// (0x0002e582) main_cset_slider_pane_g12

0x873c,	// (0x0002e58e) main_cset_slider_pane_g13_ParamLimits

0x873c,	// (0x0002e58e) main_cset_slider_pane_g13

0x8748,	// (0x0002e59a) main_cset_slider_pane_g14_ParamLimits

0x8748,	// (0x0002e59a) main_cset_slider_pane_g14

0x8754,	// (0x0002e5a6) main_cset_slider_pane_g15_ParamLimits

0x8754,	// (0x0002e5a6) main_cset_slider_pane_g15

0xd423,	// (0x00033275) main_cset_slider_pane_t14_ParamLimits

0xd423,	// (0x00033275) main_cset_slider_pane_t14

0xd45c,	// (0x000332ae) main_cset_slider_pane_t15_ParamLimits

0xd45c,	// (0x000332ae) main_cset_slider_pane_t15

0x8cb0,	// (0x0002eb02) aid_cam4_burst_size_cell_ParamLimits

0x8cb0,	// (0x0002eb02) aid_cam4_burst_size_cell

0x8cd0,	// (0x0002eb22) grid_cam4_burst_pane_ParamLimits

0x8cd0,	// (0x0002eb22) grid_cam4_burst_pane

0x8cf6,	// (0x0002eb48) linegrid_cam4_burst_pane_ParamLimits

0x8cf6,	// (0x0002eb48) linegrid_cam4_burst_pane

0x8d18,	// (0x0002eb6a) scroll_pane_cp30_ParamLimits

0x8d18,	// (0x0002eb6a) scroll_pane_cp30

0x8d24,	// (0x0002eb76) cell_cam4_burst_pane_ParamLimits

0x8d24,	// (0x0002eb76) cell_cam4_burst_pane

0xd61c,	// (0x0003346e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd61c,	// (0x0003346e) linegrid_cam4_burst_pane_g1

0x8d6b,	// (0x0002ebbd) linegrid_cam4_burst_pane_g2_ParamLimits

0x8d6b,	// (0x0002ebbd) linegrid_cam4_burst_pane_g2

0xd629,	// (0x0003347b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd629,	// (0x0003347b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x000358a6) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x000358a6) linegrid_cam4_burst_pane_g

0x8d7c,	// (0x0002ebce) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8d7c,	// (0x0002ebce) linegrid_cam4_burst_pane_g3_copy1

0xd636,	// (0x00033488) linegrid_cam4_burst_pane_g4_ParamLimits

0xd636,	// (0x00033488) linegrid_cam4_burst_pane_g4

0x8d96,	// (0x0002ebe8) linegrid_cam4_burst_pane_g5_ParamLimits

0x8d96,	// (0x0002ebe8) linegrid_cam4_burst_pane_g5

0x8da7,	// (0x0002ebf9) linegrid_cam4_burst_pane_g6_ParamLimits

0x8da7,	// (0x0002ebf9) linegrid_cam4_burst_pane_g6

0xd643,	// (0x00033495) linegrid_cam4_burst_pane_g7_ParamLimits

0xd643,	// (0x00033495) linegrid_cam4_burst_pane_g7

0x8db8,	// (0x0002ec0a) cell_cam4_burst_pane_g1

0xd65c,	// (0x000334ae) main_cam5_pane_t1_ParamLimits

0xd65c,	// (0x000334ae) main_cam5_pane_t1

0xd66e,	// (0x000334c0) main_cam5_pane_t2_ParamLimits

0xd66e,	// (0x000334c0) main_cam5_pane_t2

0xd680,	// (0x000334d2) main_cam5_pane_t3_ParamLimits

0xd680,	// (0x000334d2) main_cam5_pane_t3

0xd692,	// (0x000334e4) main_cam5_pane_t4_ParamLimits

0xd692,	// (0x000334e4) main_cam5_pane_t4

0xd6a8,	// (0x000334fa) main_cam5_pane_t5_ParamLimits

0xd6a8,	// (0x000334fa) main_cam5_pane_t5

0xd6ba,	// (0x0003350c) main_cam5_pane_t6_ParamLimits

0xd6ba,	// (0x0003350c) main_cam5_pane_t6

0xd6cc,	// (0x0003351e) main_cam5_pane_t7_ParamLimits

0xd6cc,	// (0x0003351e) main_cam5_pane_t7

0xd6de,	// (0x00033530) main_cam5_pane_t8_ParamLimits

0xd6de,	// (0x00033530) main_cam5_pane_t8

0xd6fa,	// (0x0003354c) main_cam5_pane_t9_ParamLimits

0xd6fa,	// (0x0003354c) main_cam5_pane_t9

0xd70c,	// (0x0003355e) main_cam5_pane_t10_ParamLimits

0xd70c,	// (0x0003355e) main_cam5_pane_t10

0xd71e,	// (0x00033570) main_cam5_pane_t11_ParamLimits

0xd71e,	// (0x00033570) main_cam5_pane_t11

0xd730,	// (0x00033582) main_cam5_pane_t12_ParamLimits

0xd730,	// (0x00033582) main_cam5_pane_t12

0xd745,	// (0x00033597) main_cam5_pane_t13_ParamLimits

0xd745,	// (0x00033597) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x000358b2) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x000358b2) main_cam5_pane_t

0x0d7f,	// (0x00026bd1) popup_scut_keymap_window_ParamLimits

0x0d7f,	// (0x00026bd1) popup_scut_keymap_window

0x8dcd,	// (0x0002ec1f) aid_size_cell_brow_shortcut

0x336e,	// (0x000291c0) bg_popup_window_pane_cp010

0x8dd9,	// (0x0002ec2b) grid_scut_pane

0x8de3,	// (0x0002ec35) cell_scut_pane_ParamLimits

0x8de3,	// (0x0002ec35) cell_scut_pane

0x8df8,	// (0x0002ec4a) cell_scut_pane_g1

0xd762,	// (0x000335b4) cell_scut_pane_t1

0xd771,	// (0x000335c3) cell_scut_pane_t2

0x8e01,	// (0x0002ec53) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x000358cd) cell_scut_pane_t

0x76b2,	// (0x0002d504) main_mup3_pane_g8_ParamLimits

0x76b2,	// (0x0002d504) main_mup3_pane_g8

0x1de1,	// (0x00027c33) area_vitu2_query_pane_ParamLimits

0x1de1,	// (0x00027c33) area_vitu2_query_pane

0x8b69,	// (0x0002e9bb) input_focus_pane_cp08

0xd780,	// (0x000335d2) area_vitu2_query_pane_g1

0x8e0f,	// (0x0002ec61) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x000358d4) area_vitu2_query_pane_g

0x8e1e,	// (0x0002ec70) area_vitu2_query_pane_t1_ParamLimits

0x8e1e,	// (0x0002ec70) area_vitu2_query_pane_t1

0x8e30,	// (0x0002ec82) area_vitu2_query_pane_t2_ParamLimits

0x8e30,	// (0x0002ec82) area_vitu2_query_pane_t2

0x8e42,	// (0x0002ec94) area_vitu2_query_pane_t3_ParamLimits

0x8e42,	// (0x0002ec94) area_vitu2_query_pane_t3

0xd78c,	// (0x000335de) area_vitu2_query_pane_t4_ParamLimits

0xd78c,	// (0x000335de) area_vitu2_query_pane_t4

0xd7b4,	// (0x00033606) area_vitu2_query_pane_t5_ParamLimits

0xd7b4,	// (0x00033606) area_vitu2_query_pane_t5

0xd7dc,	// (0x0003362e) area_vitu2_query_pane_t6_ParamLimits

0xd7dc,	// (0x0003362e) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x000358d9) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x000358d9) area_vitu2_query_pane_t

0x8e6a,	// (0x0002ecbc) bg_button_pane_cp018

0x8e77,	// (0x0002ecc9) bg_button_pane_cp021

0x8e83,	// (0x0002ecd5) bg_button_pane_cp022

0x8e92,	// (0x0002ece4) input_focus_pane_cp09

0x52b3,	// (0x0002b105) aid_size_touch_mv_arrow_left

0x52d7,	// (0x0002b129) aid_size_touch_mv_arrow_right

0x876c,	// (0x0002e5be) main_cset_slider_pane_g16_ParamLimits

0x876c,	// (0x0002e5be) main_cset_slider_pane_g16

0x8778,	// (0x0002e5ca) main_cset_slider_pane_g17_ParamLimits

0x8778,	// (0x0002e5ca) main_cset_slider_pane_g17

0x8db8,	// (0x0002ec0a) cell_cam4_burst_pane_g1_ParamLimits

0x2275,	// (0x000280c7) compa_mode_pane

0x8979,	// (0x0002e7cb) popup_vtel_slider_window_g3_ParamLimits

0x8979,	// (0x0002e7cb) popup_vtel_slider_window_g3

0x8990,	// (0x0002e7e2) popup_vtel_slider_window_g4_ParamLimits

0x8990,	// (0x0002e7e2) popup_vtel_slider_window_g4

0x89a7,	// (0x0002e7f9) popup_vtel_slider_window_t1_ParamLimits

0x89a7,	// (0x0002e7f9) popup_vtel_slider_window_t1

0xb5e1,	// (0x00031433) main_cl_pane

0xbfa4,	// (0x00031df6) popup_imed_adjust2_window_ParamLimits

0xbf74,	// (0x00031dc6) bg_tb_trans_pane_cp05_ParamLimits

0xc9d8,	// (0x0003282a) popup_imed_adjust2_window_g1_ParamLimits

0xc9e7,	// (0x00032839) popup_imed_adjust2_window_g2_ParamLimits

0xc9e7,	// (0x00032839) popup_imed_adjust2_window_g2

0xc9f3,	// (0x00032845) popup_imed_adjust2_window_g3_ParamLimits

0xc9f3,	// (0x00032845) popup_imed_adjust2_window_g3

0x0002,

0xf7ee,	// (0x00035640) popup_imed_adjust2_window_g_ParamLimits

0xf7ee,	// (0x00035640) popup_imed_adjust2_window_g

0xc9ff,	// (0x00032851) popup_imed_adjust2_window_t1_ParamLimits

0xca17,	// (0x00032869) slider_imed_adjust_pane_ParamLimits

0xca2b,	// (0x0003287d) slider_imed_adjust_pane_g1_ParamLimits

0xca3b,	// (0x0003288d) slider_imed_adjust_pane_g2_ParamLimits

0xca4b,	// (0x0003289d) slider_imed_adjust_pane_g3_ParamLimits

0xca5c,	// (0x000328ae) slider_imed_adjust_pane_g4_ParamLimits

0xf7f5,	// (0x00035647) slider_imed_adjust_pane_g_ParamLimits

0x1bea,	// (0x00027a3c) aid_touch_area_cam4_ParamLimits

0x1bea,	// (0x00027a3c) aid_touch_area_cam4

0xd139,	// (0x00032f8b) battery_pane_cp01

0x1c82,	// (0x00027ad4) main_camera4_pane_g6_ParamLimits

0x1c82,	// (0x00027ad4) main_camera4_pane_g6

0x1ca3,	// (0x00027af5) main_camera4_pane_t2_ParamLimits

0x1ca3,	// (0x00027af5) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0003574e) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0003574e) main_camera4_pane_t

0x1cbf,	// (0x00027b11) aid_touch_area_vid4_ParamLimits

0x1cbf,	// (0x00027b11) aid_touch_area_vid4

0x1d01,	// (0x00027b53) main_video4_pane_g5_ParamLimits

0x1d01,	// (0x00027b53) main_video4_pane_g5

0x1d22,	// (0x00027b74) vid4_progress_pane_ParamLimits

0x1d22,	// (0x00027b74) vid4_progress_pane

0xd3e9,	// (0x0003323b) main_cset_slider_pane_g18_ParamLimits

0xd3e9,	// (0x0003323b) main_cset_slider_pane_g18

0xd650,	// (0x000334a2) cell_cam4_burst_pane_g2_ParamLimits

0xd650,	// (0x000334a2) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x000358ad) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x000358ad) cell_cam4_burst_pane_g

0x2c35,	// (0x00028a87) bg_cl_pane_ParamLimits

0x2c35,	// (0x00028a87) bg_cl_pane

0x8ea1,	// (0x0002ecf3) cl_header_pane_ParamLimits

0x8ea1,	// (0x0002ecf3) cl_header_pane

0x8eb5,	// (0x0002ed07) cl_listscroll_pane_ParamLimits

0x8eb5,	// (0x0002ed07) cl_listscroll_pane

0xd828,	// (0x0003367a) bg_cl_pane_g1

0xd830,	// (0x00033682) bg_cl_pane_g2

0xd838,	// (0x0003368a) bg_cl_pane_g3

0xd840,	// (0x00033692) bg_cl_pane_g4

0xd848,	// (0x0003369a) bg_cl_pane_g5

0xd850,	// (0x000336a2) bg_cl_pane_g6

0xd858,	// (0x000336aa) bg_cl_pane_g7

0xd860,	// (0x000336b2) bg_cl_pane_g8

0xd868,	// (0x000336ba) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x000358e8) bg_cl_pane_g

0x8ec5,	// (0x0002ed17) aid_height_cl_leading_ParamLimits

0x8ec5,	// (0x0002ed17) aid_height_cl_leading

0x8ed1,	// (0x0002ed23) aid_height_cl_text_ParamLimits

0x8ed1,	// (0x0002ed23) aid_height_cl_text

0x6d75,	// (0x0002cbc7) bg_cl_header_pane_ParamLimits

0x6d75,	// (0x0002cbc7) bg_cl_header_pane

0x8ef0,	// (0x0002ed42) cl_header_pane_g1_ParamLimits

0x8ef0,	// (0x0002ed42) cl_header_pane_g1

0x8f06,	// (0x0002ed58) cl_header_pane_t1_ParamLimits

0x8f06,	// (0x0002ed58) cl_header_pane_t1

0xd870,	// (0x000336c2) cl_list_pane

0xd879,	// (0x000336cb) hc_scroll_pane_cp01

0x3d6e,	// (0x00029bc0) bg_cl_header_pane_g1

0xd2a2,	// (0x000330f4) bg_cl_header_pane_g2

0x3d8e,	// (0x00029be0) bg_cl_header_pane_g3

0xd2b2,	// (0x00033104) bg_cl_header_pane_g4

0xd2aa,	// (0x000330fc) bg_cl_header_pane_g5

0xd52b,	// (0x0003337d) bg_cl_header_pane_g6

0xd2ca,	// (0x0003311c) bg_cl_header_pane_g7

0xd2d2,	// (0x00033124) bg_cl_header_pane_g8

0xd2c2,	// (0x00033114) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x000358fb) bg_cl_header_pane_g

0x8f1f,	// (0x0002ed71) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8f1f,	// (0x0002ed71) hc_cl_list_double_graphic_heading_pane

0x8f2f,	// (0x0002ed81) hc_cl_list_single_graphic_pane_ParamLimits

0x8f2f,	// (0x0002ed81) hc_cl_list_single_graphic_pane

0x8f42,	// (0x0002ed94) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8f42,	// (0x0002ed94) hc_cl_list_single_graphic_pane_g1

0x8f4e,	// (0x0002eda0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8f4e,	// (0x0002eda0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0003590e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0003590e) hc_cl_list_single_graphic_pane_g

0x8f62,	// (0x0002edb4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8f62,	// (0x0002edb4) hc_cl_list_single_graphic_pane_t1

0x8f42,	// (0x0002ed94) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8f42,	// (0x0002ed94) hc_cl_list_double_graphic_heading_pane_g1

0x8f77,	// (0x0002edc9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8f77,	// (0x0002edc9) hc_cl_list_double_graphic_heading_pane_g2

0x8f8b,	// (0x0002eddd) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8f8b,	// (0x0002eddd) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x00035913) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x00035913) hc_cl_list_double_graphic_heading_pane_g

0x8f9f,	// (0x0002edf1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8f9f,	// (0x0002edf1) hc_cl_list_double_graphic_heading_pane_t1

0x8fb4,	// (0x0002ee06) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8fb4,	// (0x0002ee06) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0003591a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0003591a) hc_cl_list_double_graphic_heading_pane_t

0xd882,	// (0x000336d4) vid4_progress_pane_g1

0xd891,	// (0x000336e3) vid4_progress_pane_g2

0xd8a0,	// (0x000336f2) vid4_progress_pane_g3

0xd8af,	// (0x00033701) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0003591f) vid4_progress_pane_g

0xd8c7,	// (0x00033719) vid4_progress_pane_t1

0xd8dd,	// (0x0003372f) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0003592a) vid4_progress_pane_t

0xd907,	// (0x00033759) wait_bar_pane_cp07

0xc283,	// (0x000320d5) blid_firmament_pane_ParamLimits

0xc2c4,	// (0x00032116) popup_blid_sat_info2_window_g1

0xc2e8,	// (0x0003213a) popup_blid_sat_info2_window_t3

0xc2f6,	// (0x00032148) popup_blid_sat_info2_window_t4

0xc304,	// (0x00032156) popup_blid_sat_info2_window_t5

0xc312,	// (0x00032164) popup_blid_sat_info2_window_t6

0xc322,	// (0x00032174) popup_blid_sat_info2_window_t7

0xc330,	// (0x00032182) popup_blid_sat_info2_window_t8

0xc33e,	// (0x00032190) popup_blid_sat_info2_window_t9

0xc34c,	// (0x0003219e) popup_blid_sat_info2_window_t10

0xc408,	// (0x0003225a) aid_firma_cardinal_ParamLimits

0xc41c,	// (0x0003226e) blid_firmament_pane_t1_ParamLimits

0xc433,	// (0x00032285) blid_firmament_pane_t2_ParamLimits

0xc44a,	// (0x0003229c) blid_firmament_pane_t3_ParamLimits

0xc461,	// (0x000322b3) blid_firmament_pane_t4_ParamLimits

0xf6e2,	// (0x00035534) blid_firmament_pane_t_ParamLimits

0xc478,	// (0x000322ca) blid_sat_info_pane_ParamLimits

0xb5d3,	// (0x00031425) main_cam_set_pane_ParamLimits

0x7e88,	// (0x0002dcda) aid_size_cell_colour_35_ParamLimits

0x7ea8,	// (0x0002dcfa) aid_size_cell_colour_112_ParamLimits

0x7ec8,	// (0x0002dd1a) aid_size_cell_effect_ParamLimits

0xbf74,	// (0x00031dc6) bg_tb_trans_pane_cp02_ParamLimits

0x4aac,	// (0x0002a8fe) heading_imed_pane_ParamLimits

0x7ee8,	// (0x0002dd3a) listscroll_imed_pane_ParamLimits

0x688c,	// (0x0002c6de) popup_call2_audio_first_window_g5_ParamLimits

0x688c,	// (0x0002c6de) popup_call2_audio_first_window_g5

0x191c,	// (0x0002776e) aid_size_touch_image3_arrow_left_ParamLimits

0x191c,	// (0x0002776e) aid_size_touch_image3_arrow_left

0x193c,	// (0x0002778e) aid_size_touch_image3_arrow_right_ParamLimits

0x193c,	// (0x0002778e) aid_size_touch_image3_arrow_right

0xd8f2,	// (0x00033744) vid4_progress_pane_t3

0x81bc,	// (0x0002e00e) main_hwr_training_symbol_option_pane_ParamLimits

0x81bc,	// (0x0002e00e) main_hwr_training_symbol_option_pane

0xccb7,	// (0x00032b09) popup_hwr_training_preview_window_ParamLimits

0xccb7,	// (0x00032b09) popup_hwr_training_preview_window

0x17e6,	// (0x00027638) hwr_training_navi_pane_g5_ParamLimits

0x17e6,	// (0x00027638) hwr_training_navi_pane_g5

0xd27e,	// (0x000330d0) popup_char_count_window

0xb5d3,	// (0x00031425) bg_popup_sub_pane_cp20_ParamLimits

0x2100,	// (0x00027f52) list_vitu2_match_list_pane_ParamLimits

0x210f,	// (0x00027f61) vitu2_page_scroll_pane_ParamLimits

0x210f,	// (0x00027f61) vitu2_page_scroll_pane

0xd94b,	// (0x0003379d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd94b,	// (0x0003379d) list_single_hwr_training_symbol_option_pane

0xd95e,	// (0x000337b0) list_single_hwr_training_symbol_option_pane_g1

0xd966,	// (0x000337b8) list_single_hwr_training_symbol_option_pane_t1

0xd974,	// (0x000337c6) bg_button_pane_cp023

0xd97d,	// (0x000337cf) bg_button_pane_cp024

0x8fef,	// (0x0002ee41) vitu2_page_scroll_pane_g1

0x8ff7,	// (0x0002ee49) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x00035931) vitu2_page_scroll_pane_g

0x8fff,	// (0x0002ee51) vitu2_page_scroll_pane_t1

0xc4b1,	// (0x00032303) popup_char_count_window_g1

0xd9b0,	// (0x00033802) popup_char_count_window_g2

0xd9b9,	// (0x0003380b) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x00035936) popup_char_count_window_g

0xd9c2,	// (0x00033814) popup_char_count_window_t1

0xb5e1,	// (0x00031433) main_vded2_pane

0xc9c6,	// (0x00032818) aid_size_cell_imed_line

0xc9d0,	// (0x00032822) grid_imed_line_width_pane

0xd1ee,	// (0x00033040) vid4_indicators_pane_g4

0xd9d0,	// (0x00033822) cell_imed_line_width_pane_ParamLimits

0xd9d0,	// (0x00033822) cell_imed_line_width_pane

0xd9e2,	// (0x00033834) cell_imed_line_width_pane_g1

0xc231,	// (0x00032083) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0003593d) cell_imed_line_width_pane_g

0x900e,	// (0x0002ee60) main_vded2_pane_g1_ParamLimits

0x900e,	// (0x0002ee60) main_vded2_pane_g1

0x9024,	// (0x0002ee76) main_vded2_pane_g2_ParamLimits

0x9024,	// (0x0002ee76) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x00035942) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x00035942) main_vded2_pane_g

0x9034,	// (0x0002ee86) vded2_slider_pane_ParamLimits

0x9034,	// (0x0002ee86) vded2_slider_pane

0x9047,	// (0x0002ee99) aid_size_touch_vded2_end

0x904f,	// (0x0002eea1) aid_size_touch_vded2_playhead

0x9057,	// (0x0002eea9) aid_size_touch_vded2_start

0x905f,	// (0x0002eeb1) vded2_slider_bg_pane

0x9068,	// (0x0002eeba) vded2_slider_pane_g1

0x9071,	// (0x0002eec3) vded2_slider_pane_g2

0x9079,	// (0x0002eecb) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x00035947) vded2_slider_pane_g

0x9082,	// (0x0002eed4) vded2_slider_bg_pane_g1

0x908b,	// (0x0002eedd) vded2_slider_bg_pane_g2

0x9094,	// (0x0002eee6) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0003594e) vded2_slider_bg_pane_g

0x5b00,	// (0x0002b952) aid_postcard_touch_down_pane_ParamLimits

0x5b00,	// (0x0002b952) aid_postcard_touch_down_pane

0x5b12,	// (0x0002b964) aid_postcard_touch_up_pane_ParamLimits

0x5b12,	// (0x0002b964) aid_postcard_touch_up_pane

0xb5e1,	// (0x00031433) main_blid2_pane

0xbf8c,	// (0x00031dde) popup_blid2_search_window

0x2275,	// (0x000280c7) blid2_gps_pane

0x2275,	// (0x000280c7) blid2_navig_pane

0x2275,	// (0x000280c7) blid2_search_pane

0x2275,	// (0x000280c7) blid2_tripm_pane

0x909d,	// (0x0002eeef) blid2_search_pane_g1_ParamLimits

0x909d,	// (0x0002eeef) blid2_search_pane_g1

0x90b1,	// (0x0002ef03) blid2_search_pane_t1_ParamLimits

0x90b1,	// (0x0002ef03) blid2_search_pane_t1

0x90c3,	// (0x0002ef15) aid_size_cell_blid2_gps_ParamLimits

0x90c3,	// (0x0002ef15) aid_size_cell_blid2_gps

0x90db,	// (0x0002ef2d) blid2_gps_pane_g1_ParamLimits

0x90db,	// (0x0002ef2d) blid2_gps_pane_g1

0x90ef,	// (0x0002ef41) grid_blid2_satellite_pane_ParamLimits

0x90ef,	// (0x0002ef41) grid_blid2_satellite_pane

0x9103,	// (0x0002ef55) blid2_navig_pane_g1_ParamLimits

0x9103,	// (0x0002ef55) blid2_navig_pane_g1

0x910f,	// (0x0002ef61) blid2_navig_pane_t1_ParamLimits

0x910f,	// (0x0002ef61) blid2_navig_pane_t1

0x9128,	// (0x0002ef7a) blid2_navig_pane_t2_ParamLimits

0x9128,	// (0x0002ef7a) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x00035955) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x00035955) blid2_navig_pane_t

0x9141,	// (0x0002ef93) blid2_navig_ring_pane_ParamLimits

0x9141,	// (0x0002ef93) blid2_navig_ring_pane

0x9156,	// (0x0002efa8) blid2_speed_pane_ParamLimits

0x9156,	// (0x0002efa8) blid2_speed_pane

0x9162,	// (0x0002efb4) blid2_tripm_pane_g1_ParamLimits

0x9162,	// (0x0002efb4) blid2_tripm_pane_g1

0x9177,	// (0x0002efc9) blid2_tripm_pane_g2_ParamLimits

0x9177,	// (0x0002efc9) blid2_tripm_pane_g2

0x918b,	// (0x0002efdd) blid2_tripm_pane_g3_ParamLimits

0x918b,	// (0x0002efdd) blid2_tripm_pane_g3

0x919f,	// (0x0002eff1) blid2_tripm_pane_g4_ParamLimits

0x919f,	// (0x0002eff1) blid2_tripm_pane_g4

0x91b3,	// (0x0002f005) blid2_tripm_pane_g5_ParamLimits

0x91b3,	// (0x0002f005) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0003595a) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0003595a) blid2_tripm_pane_g

0x91d5,	// (0x0002f027) blid2_tripm_pane_t1_ParamLimits

0x91d5,	// (0x0002f027) blid2_tripm_pane_t1

0x91ec,	// (0x0002f03e) blid2_tripm_pane_t2_ParamLimits

0x91ec,	// (0x0002f03e) blid2_tripm_pane_t2

0x9203,	// (0x0002f055) blid2_tripm_pane_t3_ParamLimits

0x9203,	// (0x0002f055) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x00035967) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x00035967) blid2_tripm_pane_t

0x9246,	// (0x0002f098) cell_blid2_satellite_pane_ParamLimits

0x9246,	// (0x0002f098) cell_blid2_satellite_pane

0x925e,	// (0x0002f0b0) cell_blid2_satellite_pane_g1

0xd9eb,	// (0x0003383d) cell_blid2_satellite_pane_t1

0xc488,	// (0x000322da) blid2_speed_pane_g1

0xd9f9,	// (0x0003384b) blid2_speed_pane_t1

0xda07,	// (0x00033859) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x00035970) blid2_speed_pane_t

0xc488,	// (0x000322da) blid2_navig_ring_pane_g1

0x9267,	// (0x0002f0b9) blid2_navig_ring_pane_g2

0x926f,	// (0x0002f0c1) blid2_navig_ring_pane_g3

0x9277,	// (0x0002f0c9) blid2_navig_ring_pane_g4

0x927f,	// (0x0002f0d1) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x00035975) blid2_navig_ring_pane_g

0x2275,	// (0x000280c7) bg_popup_window_pane_cp011

0xda15,	// (0x00033867) popup_blid2_search_window_g1

0xda1d,	// (0x0003386f) popup_blid2_search_window_t1

0xda2b,	// (0x0003387d) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x00035980) popup_blid2_search_window_t

0x3c3d,	// (0x00029a8f) main_browser_pane_g1

0x2c35,	// (0x00028a87) main_browser_pane_ParamLimits

0xb5d3,	// (0x00031425) bg_button_pane_cp011_ParamLimits

0x2081,	// (0x00027ed3) cell_vitu2_function_pane_g1_ParamLimits

0xbf74,	// (0x00031dc6) bg_popup_sub_pane_cp22_ParamLimits

0x8b69,	// (0x0002e9bb) input_focus_pane_cp08_ParamLimits

0x8b80,	// (0x0002e9d2) popup_vitu2_query_button_pane_ParamLimits

0x8b80,	// (0x0002e9d2) popup_vitu2_query_button_pane

0x8b90,	// (0x0002e9e2) popup_vitu2_query_input_button_pane

0xd5a6,	// (0x000333f8) popup_vitu2_query_window_g1_ParamLimits

0x8b98,	// (0x0002e9ea) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x00035881) popup_vitu2_query_window_g_ParamLimits

0x2275,	// (0x000280c7) bg_button_pane_cp026

0x9287,	// (0x0002f0d9) popup_vitu2_query_input_button_pane_g1

0x2275,	// (0x000280c7) bg_button_pane_cp025

0xda39,	// (0x0003388b) popup_vitu2_query_button_pane_t1

0x73ce,	// (0x0002d220) main_mp3_pane_t6

0x73dc,	// (0x0002d22e) popup_slider_window_cp01

0xd173,	// (0x00032fc5) cam4_battery_pane

0xd173,	// (0x00032fc5) cam4_battery_pane_cp02

0xd173,	// (0x00032fc5) cam4_battery_pane_cp01

0xd173,	// (0x00032fc5) cam4_battery_pane_cp03

0xd012,	// (0x00032e64) cam4_battery_pane_g1

0xc488,	// (0x000322da) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x00035985) cam4_battery_pane_g

0xc35a,	// (0x000321ac) popup_blid_sat_info2_window_t11

0x52b3,	// (0x0002b105) aid_size_touch_mv_arrow_left_ParamLimits

0x52d7,	// (0x0002b129) aid_size_touch_mv_arrow_right_ParamLimits

0x5330,	// (0x0002b182) navi_pane_g1_ParamLimits

0x533c,	// (0x0002b18e) navi_pane_g2_ParamLimits

0x5365,	// (0x0002b1b7) navi_pane_g3_ParamLimits

0xf3e1,	// (0x00035233) navi_pane_g_ParamLimits

0x5415,	// (0x0002b267) navi_pane_mv_t1_ParamLimits

0x7ef4,	// (0x0002dd46) grid_imed_effect_pane_ParamLimits

0x3885,	// (0x000296d7) aid_placing_vt_slider_lsc

0x3895,	// (0x000296e7) aid_placing_vt_slider_prt

0x6d75,	// (0x0002cbc7) bg_tb_trans_pane_cp01_ParamLimits

0xc5d7,	// (0x00032429) popup_image_details_window_g1_ParamLimits

0xc5ea,	// (0x0003243c) popup_image_details_window_g2_ParamLimits

0xc5ff,	// (0x00032451) popup_image_details_window_g3_ParamLimits

0xc5ff,	// (0x00032451) popup_image_details_window_g3

0xf727,	// (0x00035579) popup_image_details_window_g_ParamLimits

0xc613,	// (0x00032465) popup_image_details_window_t1_ParamLimits

0xc625,	// (0x00032477) popup_image_details_window_t2_ParamLimits

0xc63e,	// (0x00032490) popup_image_details_window_t3_ParamLimits

0xc652,	// (0x000324a4) popup_image_details_window_t4_ParamLimits

0xc66d,	// (0x000324bf) popup_image_details_window_t5_ParamLimits

0xf72e,	// (0x00035580) popup_image_details_window_t_ParamLimits

0x8edd,	// (0x0002ed2f) cl_header_name_pane_ParamLimits

0x8edd,	// (0x0002ed2f) cl_header_name_pane

0x928f,	// (0x0002f0e1) cl_header_name_pane_t1_ParamLimits

0x928f,	// (0x0002f0e1) cl_header_name_pane_t1

0x92b0,	// (0x0002f102) cl_header_name_pane_t2_ParamLimits

0x92b0,	// (0x0002f102) cl_header_name_pane_t2

0x92f2,	// (0x0002f144) cl_header_name_pane_t3_ParamLimits

0x92f2,	// (0x0002f144) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0003598a) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0003598a) cl_header_name_pane_t

0x53e6,	// (0x0002b238) navi_pane_mv_g2_ParamLimits

0xd23b,	// (0x0003308d) field_vitu2_entry_pane_g1_ParamLimits

0xd247,	// (0x00033099) field_vitu2_entry_pane_g2_ParamLimits

0xd253,	// (0x000330a5) field_vitu2_entry_pane_g3_ParamLimits

0xd253,	// (0x000330a5) field_vitu2_entry_pane_g3

0xf92e,	// (0x00035780) field_vitu2_entry_pane_g_ParamLimits

0xd286,	// (0x000330d8) cell_vitu2_itu_pane_g1_ParamLimits

0x1f29,	// (0x00027d7b) cell_vitu2_itu_pane_g2_ParamLimits

0x1f29,	// (0x00027d7b) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0003578c) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0003578c) cell_vitu2_itu_pane_g

0xb5d3,	// (0x00031425) bg_vkb2_func_pane_cp05_ParamLimits

0xb5d3,	// (0x00031425) bg_vkb2_func_pane_cp05

0xb5d3,	// (0x00031425) bg_vkb2_func_pane_cp03

0xb5d3,	// (0x00031425) bg_vkb2_func_pane_cp04

0xb5d3,	// (0x00031425) bg_vkb2_func_pane_cp10_ParamLimits

0xb5d3,	// (0x00031425) bg_vkb2_func_pane_cp10

0x8e83,	// (0x0002ecd5) bg_vkb2_func_pane_cp08

0x8e6a,	// (0x0002ecbc) bg_vkb2_func_pane_cp06

0x8e77,	// (0x0002ecc9) bg_vkb2_func_pane_cp07

0xd986,	// (0x000337d8) bg_vkb2_func_pane_cp11_ParamLimits

0xd986,	// (0x000337d8) bg_vkb2_func_pane_cp11

0xd99b,	// (0x000337ed) bg_vkb2_func_pane_cp12_ParamLimits

0xd99b,	// (0x000337ed) bg_vkb2_func_pane_cp12

0x2275,	// (0x000280c7) bg_vkb2_func_pane_cp09

0xd2a2,	// (0x000330f4) bg_vkb2_func_pane_g1

0x3d8e,	// (0x00029be0) bg_vkb2_func_pane_g2

0xd2aa,	// (0x000330fc) bg_vkb2_func_pane_g3

0xd2b2,	// (0x00033104) bg_vkb2_func_pane_g4

0xd52b,	// (0x0003337d) bg_vkb2_func_pane_g5

0xd2ca,	// (0x0003311c) bg_vkb2_func_pane_g6

0xd2d2,	// (0x00033124) bg_vkb2_func_pane_g7

0xd2c2,	// (0x00033114) bg_vkb2_func_pane_g8

0x3d6e,	// (0x00029bc0) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x00035991) bg_vkb2_func_pane_g

0x91c5,	// (0x0002f017) blid2_tripm_pane_g6_ParamLimits

0x91c5,	// (0x0002f017) blid2_tripm_pane_g6

0xcfd0,	// (0x00032e22) mp4_progress_pane_g1

0x9234,	// (0x0002f086) blid2_tripm_values_pane_ParamLimits

0x9234,	// (0x0002f086) blid2_tripm_values_pane

0x9323,	// (0x0002f175) blid2_tripm_values_pane_t1

0x9331,	// (0x0002f183) blid2_tripm_values_pane_t2

0x933f,	// (0x0002f191) blid2_tripm_values_pane_t3

0x934d,	// (0x0002f19f) blid2_tripm_values_pane_t4

0x935b,	// (0x0002f1ad) blid2_tripm_values_pane_t5

0x9369,	// (0x0002f1bb) blid2_tripm_values_pane_t6

0x9377,	// (0x0002f1c9) blid2_tripm_values_pane_t7

0x9385,	// (0x0002f1d7) blid2_tripm_values_pane_t8

0x9393,	// (0x0002f1e5) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x000359a4) blid2_tripm_values_pane_t

0x38c9,	// (0x0002971b) call_video_pane_t1_ParamLimits

0x38e3,	// (0x00029735) call_video_pane_t2_ParamLimits

0xf26a,	// (0x000350bc) call_video_pane_t_ParamLimits

0x5a23,	// (0x0002b875) msg_header_pane_g1_ParamLimits

0x5a2f,	// (0x0002b881) msg_header_pane_g2_ParamLimits

0x5a2f,	// (0x0002b881) msg_header_pane_g2

0x0001,

0xf484,	// (0x000352d6) msg_header_pane_g_ParamLimits

0xf484,	// (0x000352d6) msg_header_pane_g

0x2c35,	// (0x00028a87) main_clock2_pane_ParamLimits

0x7c83,	// (0x0002dad5) grid_clock2_toolbar_pane_ParamLimits

0x7c83,	// (0x0002dad5) grid_clock2_toolbar_pane

0x7c83,	// (0x0002dad5) listscroll_clock2_pane_ParamLimits

0x7c83,	// (0x0002dad5) listscroll_clock2_pane

0x7d66,	// (0x0002dbb8) main_clock2_pane_t3_ParamLimits

0x7d66,	// (0x0002dbb8) main_clock2_pane_t3

0x7d88,	// (0x0002dbda) main_clock2_pane_t4_ParamLimits

0x7d88,	// (0x0002dbda) main_clock2_pane_t4

0xda47,	// (0x00033899) cell_clock2_toolbar_pane

0xda4f,	// (0x000338a1) cell_clock2_toolbar_pane_cp01

0xda4f,	// (0x000338a1) cell_clock2_toolbar_pane_cp02

0xda57,	// (0x000338a9) cell_clock2_toolbar_pane_cp03

0xda5f,	// (0x000338b1) list_clock2_pane

0xda67,	// (0x000338b9) scroll_pane_cp10

0xda6f,	// (0x000338c1) list_single_clock2_pane_ParamLimits

0xda6f,	// (0x000338c1) list_single_clock2_pane

0x336e,	// (0x000291c0) list_highlight_pane_cp08

0xda7c,	// (0x000338ce) list_single_clock2_pane_t1

0xda8a,	// (0x000338dc) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x000359b7) list_single_clock2_pane_t

0x2275,	// (0x000280c7) bg_button_pane_cp10

0xda98,	// (0x000338ea) cell_clock2_toolbar_pane_g1

0x10e1,	// (0x00026f33) aid_main_viewer_pane_g1_ParamLimits

0x10e1,	// (0x00026f33) aid_main_viewer_pane_g1

0x10ed,	// (0x00026f3f) aid_main_viewer_pane_g2_ParamLimits

0x10ed,	// (0x00026f3f) aid_main_viewer_pane_g2

0x5ab6,	// (0x0002b908) aid_main_viewer_pane_g3_ParamLimits

0x5ab6,	// (0x0002b908) aid_main_viewer_pane_g3

0x5ac5,	// (0x0002b917) aid_main_viewer_pane_g4_ParamLimits

0x5ac5,	// (0x0002b917) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x000352e7) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x000352e7) aid_main_viewer_pane_g

0xb5d3,	// (0x00031425) main_calc_pane_ParamLimits

0x1129,	// (0x00026f7b) main_dialer2_pane_ParamLimits

0xb5e1,	// (0x00031433) main_cam6_pane

0xb5e1,	// (0x00031433) main_vid6_pane

0x7c8f,	// (0x0002dae1) listscroll_gen_pane_cp06_ParamLimits

0x7c8f,	// (0x0002dae1) listscroll_gen_pane_cp06

0x7da9,	// (0x0002dbfb) main_clock2_pane_t5_ParamLimits

0x7da9,	// (0x0002dbfb) main_clock2_pane_t5

0x7e01,	// (0x0002dc53) aid_call2_pane_cp10_ParamLimits

0x7e13,	// (0x0002dc65) aid_call_pane_cp10_ParamLimits

0x5242,	// (0x0002b094) popup_clock_analogue_window_cp10_g1_ParamLimits

0x5242,	// (0x0002b094) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7e25,	// (0x0002dc77) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7e25,	// (0x0002dc77) popup_clock_analogue_window_cp10_g4_ParamLimits

0x5242,	// (0x0002b094) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e3,	// (0x00035635) popup_clock_analogue_window_cp10_g_ParamLimits

0x7e37,	// (0x0002dc89) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd03a,	// (0x00032e8c) cell_dialer2_keypad_pane_g2_ParamLimits

0xd03a,	// (0x00032e8c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0003571f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0003571f) cell_dialer2_keypad_pane_g

0x8298,	// (0x0002e0ea) cell_dialer2_keypad_pane_t1

0x865f,	// (0x0002e4b1) main_cset_text2_pane_ParamLimits

0x865f,	// (0x0002e4b1) main_cset_text2_pane

0xd780,	// (0x000335d2) area_vitu2_query_pane_g1_ParamLimits

0x8e0f,	// (0x0002ec61) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x000358d4) area_vitu2_query_pane_g_ParamLimits

0xd804,	// (0x00033656) area_vitu2_query_pane_t7_ParamLimits

0xd804,	// (0x00033656) area_vitu2_query_pane_t7

0x8e6a,	// (0x0002ecbc) bg_button_pane_cp018_ParamLimits

0x8e77,	// (0x0002ecc9) bg_button_pane_cp021_ParamLimits

0x8e83,	// (0x0002ecd5) bg_button_pane_cp022_ParamLimits

0x8e83,	// (0x0002ecd5) bg_vkb2_func_pane_cp08_ParamLimits

0x8e6a,	// (0x0002ecbc) bg_vkb2_func_pane_cp06_ParamLimits

0x8e77,	// (0x0002ecc9) bg_vkb2_func_pane_cp07_ParamLimits

0x8e92,	// (0x0002ece4) input_focus_pane_cp09_ParamLimits

0xdaa0,	// (0x000338f2) cam6_autofocus_pane_ParamLimits

0xdaa0,	// (0x000338f2) cam6_autofocus_pane

0x2195,	// (0x00027fe7) cam6_image_uncrop_pane_ParamLimits

0x2195,	// (0x00027fe7) cam6_image_uncrop_pane

0x21a2,	// (0x00027ff4) cam6_indi_pane_ParamLimits

0x21a2,	// (0x00027ff4) cam6_indi_pane

0x21b8,	// (0x0002800a) cam6_mode_pane_ParamLimits

0x21b8,	// (0x0002800a) cam6_mode_pane

0x21ca,	// (0x0002801c) cam6_timer_pane_ParamLimits

0x21ca,	// (0x0002801c) cam6_timer_pane

0x21d6,	// (0x00028028) cam6_zoom_pane_ParamLimits

0x21d6,	// (0x00028028) cam6_zoom_pane

0x93a1,	// (0x0002f1f3) cam6_mode_pane_g1_ParamLimits

0x93a1,	// (0x0002f1f3) cam6_mode_pane_g1

0x93b1,	// (0x0002f203) cam6_mode_pane_g2_ParamLimits

0x93b1,	// (0x0002f203) cam6_mode_pane_g2

0x93c1,	// (0x0002f213) cam6_mode_pane_g3_ParamLimits

0x93c1,	// (0x0002f213) cam6_mode_pane_g3

0x93d1,	// (0x0002f223) cam6_mode_pane_g4_ParamLimits

0x93d1,	// (0x0002f223) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x000359bc) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x000359bc) cam6_mode_pane_g

0xdaac,	// (0x000338fe) bg_tb_trans_pane_cp08_ParamLimits

0xdaac,	// (0x000338fe) bg_tb_trans_pane_cp08

0xdaba,	// (0x0003390c) cam6_battery_pane_ParamLimits

0xdaba,	// (0x0003390c) cam6_battery_pane

0xdad0,	// (0x00033922) cam6_indi_pane_g1_ParamLimits

0xdad0,	// (0x00033922) cam6_indi_pane_g1

0xdae2,	// (0x00033934) cam6_indi_pane_g2_ParamLimits

0xdae2,	// (0x00033934) cam6_indi_pane_g2

0xdaf4,	// (0x00033946) cam6_indi_pane_g3_ParamLimits

0xdaf4,	// (0x00033946) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x000359c5) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x000359c5) cam6_indi_pane_g

0xdb06,	// (0x00033958) cam6_indi_pane_t1_ParamLimits

0xdb06,	// (0x00033958) cam6_indi_pane_t1

0x8362,	// (0x0002e1b4) cam6_autofocus_pane_g1

0x835a,	// (0x0002e1ac) cam6_autofocus_pane_g2

0x8372,	// (0x0002e1c4) cam6_autofocus_pane_g3

0x836a,	// (0x0002e1bc) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x000359cc) cam6_autofocus_pane_g

0xdb2c,	// (0x0003397e) cam6_timer_pane_g1

0xdb34,	// (0x00033986) cam6_timer_pane_t1

0xdb42,	// (0x00033994) cam6_zoom_cont_pane

0xdb4a,	// (0x0003399c) cam6_zoom_pane_g1

0xdb52,	// (0x000339a4) cam6_zoom_pane_g2

0x93e1,	// (0x0002f233) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x000359d5) cam6_zoom_pane_g

0xc488,	// (0x000322da) cam6_battery_pane_g1

0xc488,	// (0x000322da) cam6_battery_pane_g2

0x0001,

0xf6eb,	// (0x0003553d) cam6_battery_pane_g

0xdb5a,	// (0x000339ac) cam6_zoom_cont_pane_g1

0xdb63,	// (0x000339b5) cam6_zoom_cont_pane_g2

0xdb6c,	// (0x000339be) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x000359dc) cam6_zoom_cont_pane_g

0x93fe,	// (0x0002f250) cam6_mode_pane_cp_ParamLimits

0x93fe,	// (0x0002f250) cam6_mode_pane_cp

0x9410,	// (0x0002f262) cam6_zoom_pane_cp_ParamLimits

0x9410,	// (0x0002f262) cam6_zoom_pane_cp

0x941c,	// (0x0002f26e) vid6_image_uncrop_cif_pane_ParamLimits

0x941c,	// (0x0002f26e) vid6_image_uncrop_cif_pane

0x942a,	// (0x0002f27c) vid6_image_uncrop_nhd_pane_ParamLimits

0x942a,	// (0x0002f27c) vid6_image_uncrop_nhd_pane

0x9437,	// (0x0002f289) vid6_image_uncrop_vga_pane_ParamLimits

0x9437,	// (0x0002f289) vid6_image_uncrop_vga_pane

0x9444,	// (0x0002f296) vid6_image_uncrop_wvga_pane_ParamLimits

0x9444,	// (0x0002f296) vid6_image_uncrop_wvga_pane

0x9451,	// (0x0002f2a3) vid6_indi_pane_ParamLimits

0x9451,	// (0x0002f2a3) vid6_indi_pane

0xdaac,	// (0x000338fe) bg_tb_trans_pane_cp09_ParamLimits

0xdaac,	// (0x000338fe) bg_tb_trans_pane_cp09

0xdb80,	// (0x000339d2) cam6_battery_pane_cp_ParamLimits

0xdb80,	// (0x000339d2) cam6_battery_pane_cp

0xdb8c,	// (0x000339de) vid6_indi_pane_g1_ParamLimits

0xdb8c,	// (0x000339de) vid6_indi_pane_g1

0xdb9e,	// (0x000339f0) vid6_indi_pane_g2_ParamLimits

0xdb9e,	// (0x000339f0) vid6_indi_pane_g2

0xdbb0,	// (0x00033a02) vid6_indi_pane_g3_ParamLimits

0xdbb0,	// (0x00033a02) vid6_indi_pane_g3

0xdbc5,	// (0x00033a17) vid6_indi_pane_g4_ParamLimits

0xdbc5,	// (0x00033a17) vid6_indi_pane_g4

0xdbda,	// (0x00033a2c) vid6_indi_pane_g5_ParamLimits

0xdbda,	// (0x00033a2c) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x000359e3) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x000359e3) vid6_indi_pane_g

0xdbf4,	// (0x00033a46) vid6_indi_pane_t1_ParamLimits

0xdbf4,	// (0x00033a46) vid6_indi_pane_t1

0xdc0a,	// (0x00033a5c) vid6_indi_pane_t2_ParamLimits

0xdc0a,	// (0x00033a5c) vid6_indi_pane_t2

0xdc32,	// (0x00033a84) vid6_indi_pane_t3_ParamLimits

0xdc32,	// (0x00033a84) vid6_indi_pane_t3

0xdc5a,	// (0x00033aac) vid6_indi_pane_t4_ParamLimits

0xdc5a,	// (0x00033aac) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x000359ee) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x000359ee) vid6_indi_pane_t

0xdc7e,	// (0x00033ad0) wait_bar_pane_cp08

0x9468,	// (0x0002f2ba) main_cset_text2_pane_t1_ParamLimits

0x9468,	// (0x0002f2ba) main_cset_text2_pane_t1

0x93e9,	// (0x0002f23b) listscroll_gen_pane_cp06_t1_ParamLimits

0x93e9,	// (0x0002f23b) listscroll_gen_pane_cp06_t1

0xb5e1,	// (0x00031433) main_cam6_set_pane

0xd165,	// (0x00032fb7) bg_tb_trans_pane_cp06_ParamLimits

0xd17b,	// (0x00032fcd) cam4_indicators_pane_g1_ParamLimits

0xd18b,	// (0x00032fdd) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0003575c) cam4_indicators_pane_g_ParamLimits

0xd1ab,	// (0x00032ffd) cam4_indicators_pane_t1_ParamLimits

0xb5d3,	// (0x00031425) bg_tb_trans_pane_cp07_ParamLimits

0xd17b,	// (0x00032fcd) vid4_indicators_pane_g1_ParamLimits

0xd1cd,	// (0x0003301f) vid4_indicators_pane_g2_ParamLimits

0xd1dd,	// (0x0003302f) vid4_indicators_pane_g3_ParamLimits

0xd1ee,	// (0x00033040) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0003576e) vid4_indicators_pane_g_ParamLimits

0xd20a,	// (0x0003305c) vid4_indicators_pane_t1_ParamLimits

0xd882,	// (0x000336d4) vid4_progress_pane_g1_ParamLimits

0xd891,	// (0x000336e3) vid4_progress_pane_g2_ParamLimits

0xd8a0,	// (0x000336f2) vid4_progress_pane_g3_ParamLimits

0xd8af,	// (0x00033701) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0003591f) vid4_progress_pane_g_ParamLimits

0xd8c7,	// (0x00033719) vid4_progress_pane_t1_ParamLimits

0xd8dd,	// (0x0003372f) vid4_progress_pane_t2_ParamLimits

0xd8f2,	// (0x00033744) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0003592a) vid4_progress_pane_t_ParamLimits

0xd907,	// (0x00033759) wait_bar_pane_cp07_ParamLimits

0x9483,	// (0x0002f2d5) main_cam6_set_pane_g2_ParamLimits

0x9483,	// (0x0002f2d5) main_cam6_set_pane_g2

0x94a5,	// (0x0002f2f7) main_cset6_listscroll_pane_ParamLimits

0x94a5,	// (0x0002f2f7) main_cset6_listscroll_pane

0x94bf,	// (0x0002f311) main_cset6_slider_pane_ParamLimits

0x94bf,	// (0x0002f311) main_cset6_slider_pane

0x94d5,	// (0x0002f327) main_cset6_text2_pane_ParamLimits

0x94d5,	// (0x0002f327) main_cset6_text2_pane

0xdc8e,	// (0x00033ae0) main_cset6_text_pane

0xd3ac,	// (0x000331fe) main_cset_list_pane_copy1_ParamLimits

0xd3ac,	// (0x000331fe) main_cset_list_pane_copy1

0xd3bc,	// (0x0003320e) scroll_pane_cp028_copy1

0x94e3,	// (0x0002f335) cset_list_set_pane_copy1

0x94f5,	// (0x0002f347) aid_position_infowindow_above_copy1

0x94fd,	// (0x0002f34f) aid_position_infowindow_below_copy1

0x9505,	// (0x0002f357) cset_list_set_pane_g1_copy1

0x950d,	// (0x0002f35f) cset_list_set_pane_g3_copy1_ParamLimits

0x950d,	// (0x0002f35f) cset_list_set_pane_g3_copy1

0x951c,	// (0x0002f36e) cset_list_set_pane_t1_copy1_ParamLimits

0x951c,	// (0x0002f36e) cset_list_set_pane_t1_copy1

0x6d75,	// (0x0002cbc7) list_highlight_pane_cp021_copy1_ParamLimits

0x6d75,	// (0x0002cbc7) list_highlight_pane_cp021_copy1

0xdc96,	// (0x00033ae8) cset6_slider_pane_ParamLimits

0xdc96,	// (0x00033ae8) cset6_slider_pane

0xdcc2,	// (0x00033b14) main_cset6_slider_pane_g1_ParamLimits

0xdcc2,	// (0x00033b14) main_cset6_slider_pane_g1

0x9531,	// (0x0002f383) main_cset6_slider_pane_g2_ParamLimits

0x9531,	// (0x0002f383) main_cset6_slider_pane_g2

0xd3d1,	// (0x00033223) main_cset6_slider_pane_g3_ParamLimits

0xd3d1,	// (0x00033223) main_cset6_slider_pane_g3

0x8724,	// (0x0002e576) main_cset6_slider_pane_g4_ParamLimits

0x8724,	// (0x0002e576) main_cset6_slider_pane_g4

0x876c,	// (0x0002e5be) main_cset6_slider_pane_g5_ParamLimits

0x876c,	// (0x0002e5be) main_cset6_slider_pane_g5

0xd3d1,	// (0x00033223) main_cset6_slider_pane_g7_ParamLimits

0xd3d1,	// (0x00033223) main_cset6_slider_pane_g7

0xd3dd,	// (0x0003322f) main_cset6_slider_pane_g8_ParamLimits

0xd3dd,	// (0x0003322f) main_cset6_slider_pane_g8

0x870c,	// (0x0002e55e) main_cset6_slider_pane_g9_ParamLimits

0x870c,	// (0x0002e55e) main_cset6_slider_pane_g9

0x8718,	// (0x0002e56a) main_cset6_slider_pane_g10_ParamLimits

0x8718,	// (0x0002e56a) main_cset6_slider_pane_g10

0x8724,	// (0x0002e576) main_cset6_slider_pane_g11_ParamLimits

0x8724,	// (0x0002e576) main_cset6_slider_pane_g11

0x8730,	// (0x0002e582) main_cset6_slider_pane_g12_ParamLimits

0x8730,	// (0x0002e582) main_cset6_slider_pane_g12

0x873c,	// (0x0002e58e) main_cset6_slider_pane_g13_ParamLimits

0x873c,	// (0x0002e58e) main_cset6_slider_pane_g13

0x8748,	// (0x0002e59a) main_cset6_slider_pane_g14_ParamLimits

0x8748,	// (0x0002e59a) main_cset6_slider_pane_g14

0x9559,	// (0x0002f3ab) main_cset6_slider_pane_g15_ParamLimits

0x9559,	// (0x0002f3ab) main_cset6_slider_pane_g15

0x876c,	// (0x0002e5be) main_cset6_slider_pane_g16_ParamLimits

0x876c,	// (0x0002e5be) main_cset6_slider_pane_g16

0x8778,	// (0x0002e5ca) main_cset6_slider_pane_g17_ParamLimits

0x8778,	// (0x0002e5ca) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x000359f7) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x000359f7) main_cset6_slider_pane_g

0xdcea,	// (0x00033b3c) main_cset6_slider_pane_t1_ParamLimits

0xdcea,	// (0x00033b3c) main_cset6_slider_pane_t1

0xdd2b,	// (0x00033b7d) main_cset6_slider_pane_t2_ParamLimits

0xdd2b,	// (0x00033b7d) main_cset6_slider_pane_t2

0xdd56,	// (0x00033ba8) main_cset6_slider_pane_t3_ParamLimits

0xdd56,	// (0x00033ba8) main_cset6_slider_pane_t3

0x9571,	// (0x0002f3c3) main_cset6_slider_pane_t4_ParamLimits

0x9571,	// (0x0002f3c3) main_cset6_slider_pane_t4

0x959c,	// (0x0002f3ee) main_cset6_slider_pane_t5_ParamLimits

0x959c,	// (0x0002f3ee) main_cset6_slider_pane_t5

0xdd81,	// (0x00033bd3) main_cset6_slider_pane_t7_ParamLimits

0xdd81,	// (0x00033bd3) main_cset6_slider_pane_t7

0x95c7,	// (0x0002f419) main_cset6_slider_pane_t8_ParamLimits

0x95c7,	// (0x0002f419) main_cset6_slider_pane_t8

0x95eb,	// (0x0002f43d) main_cset6_slider_pane_t9_ParamLimits

0x95eb,	// (0x0002f43d) main_cset6_slider_pane_t9

0x960f,	// (0x0002f461) main_cset6_slider_pane_t10_ParamLimits

0x960f,	// (0x0002f461) main_cset6_slider_pane_t10

0x9633,	// (0x0002f485) main_cset6_slider_pane_t11_ParamLimits

0x9633,	// (0x0002f485) main_cset6_slider_pane_t11

0xddb7,	// (0x00033c09) main_cset6_slider_pane_t14_ParamLimits

0xddb7,	// (0x00033c09) main_cset6_slider_pane_t14

0xddf0,	// (0x00033c42) main_cset6_slider_pane_t15_ParamLimits

0xddf0,	// (0x00033c42) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x00035a1c) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x00035a1c) main_cset6_slider_pane_t

0xde29,	// (0x00033c7b) cset_slider_pane_g1_copy1

0xde32,	// (0x00033c84) cset_slider_pane_g2_copy1

0xde3b,	// (0x00033c8d) cset_slider_pane_g3_copy1

0x2275,	// (0x000280c7) bg_popup_sub_pane_cp011_copy1

0xd5b2,	// (0x00033404) main_cset_text_pane_g1_copy1

0xd5ba,	// (0x0003340c) main_cset_text_pane_t1_copy1

0xd5c8,	// (0x0003341a) main_cset_text_pane_t2_copy1

0xd5d6,	// (0x00033428) main_cset_text_pane_t3_copy1

0xd5e4,	// (0x00033436) main_cset_text_pane_t4_copy1

0xd5f2,	// (0x00033444) main_cset_text_pane_t5_copy1

0xd600,	// (0x00033452) main_cset_text_pane_t6_copy1

0xd60e,	// (0x00033460) main_cset_text_pane_t7_copy1

0x9728,	// (0x0002f57a) main_cset_text2_pane_t1_copy1

0xb5d3,	// (0x00031425) main_ncimui_pane

0x1337,	// (0x00027189) popup_query_ncimui_window_ParamLimits

0x1337,	// (0x00027189) popup_query_ncimui_window

0xc758,	// (0x000325aa) field_cale_ev2_pane_g4_ParamLimits

0xc758,	// (0x000325aa) field_cale_ev2_pane_g4

0x8221,	// (0x0002e073) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8221,	// (0x0002e073) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a4,	// (0x000356f6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a4,	// (0x000356f6) cell_video_dialer_keypad_pane_g

0x8239,	// (0x0002e08b) cell_video_dialer_keypad_pane_t1

0x2275,	// (0x000280c7) bg_popup_window_pane_cp012

0x4eb5,	// (0x0002ad07) heading_pane_cp06

0xde6e,	// (0x00033cc0) ncim_query_content_pane

0x2275,	// (0x000280c7) bg_popup_heading_pane_cp01

0xde76,	// (0x00033cc8) ncim_heading_pane_t1

0xde84,	// (0x00033cd6) ncim_indicator_popup_pane

0xde96,	// (0x00033ce8) ncim_query_button_pane

0xdeaa,	// (0x00033cfc) ncim_query_content_pane_t1

0xdebc,	// (0x00033d0e) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x00035a60) ncim_query_content_pane_t

0xdef6,	// (0x00033d48) ncim_query_list_pane

0xdf08,	// (0x00033d5a) ncim_query_popup_pane

0xde84,	// (0x00033cd6) ncim_indicator_popup_pane_ParamLimits

0x9867,	// (0x0002f6b9) ncim_query_content_pane_g1_ParamLimits

0x9867,	// (0x0002f6b9) ncim_query_content_pane_g1

0xdeaa,	// (0x00033cfc) ncim_query_content_pane_t1_ParamLimits

0xdebc,	// (0x00033d0e) ncim_query_content_pane_t2_ParamLimits

0x9873,	// (0x0002f6c5) ncim_query_content_pane_t3_ParamLimits

0x9873,	// (0x0002f6c5) ncim_query_content_pane_t3

0x989b,	// (0x0002f6ed) ncim_query_content_pane_t4_ParamLimits

0x989b,	// (0x0002f6ed) ncim_query_content_pane_t4

0x98c3,	// (0x0002f715) ncim_query_content_pane_t5_ParamLimits

0x98c3,	// (0x0002f715) ncim_query_content_pane_t5

0xdece,	// (0x00033d20) ncim_query_content_pane_t6_ParamLimits

0xdece,	// (0x00033d20) ncim_query_content_pane_t6

0xfc0e,	// (0x00035a60) ncim_query_content_pane_t_ParamLimits

0xdef6,	// (0x00033d48) ncim_query_list_pane_ParamLimits

0xdf08,	// (0x00033d5a) ncim_query_popup_pane_ParamLimits

0xdf1c,	// (0x00033d6e) wait_bar_pane_cp04

0x2275,	// (0x000280c7) input_focus_pane_cp011

0xdf24,	// (0x00033d76) ncim_query_popup_pane_t1

0xdf32,	// (0x00033d84) ncim_list_query_list_pane_ParamLimits

0xdf32,	// (0x00033d84) ncim_list_query_list_pane

0x2275,	// (0x000280c7) bg_button_pane_cp027

0xdf45,	// (0x00033d97) ncim_query_button_pane_g1

0x2275,	// (0x000280c7) list_highlight_pane_cp012

0xdf4f,	// (0x00033da1) ncim_list_query_list_pane_g1

0xdf57,	// (0x00033da9) ncim_list_query_list_pane_t1

0xd19b,	// (0x00032fed) cam4_indicators_pane_g3_ParamLimits

0xd19b,	// (0x00032fed) cam4_indicators_pane_g3

0xd1fa,	// (0x0003304c) vid4_indicators_pane_g5_ParamLimits

0xd1fa,	// (0x0003304c) vid4_indicators_pane_g5

0xd8bb,	// (0x0003370d) vid4_progress_pane_g5_ParamLimits

0xd8bb,	// (0x0003370d) vid4_progress_pane_g5

0x9757,	// (0x0002f5a9) main_ncimui_pane_g1

0x97bd,	// (0x0002f60f) ncimui_group_query_pane_ParamLimits

0x97bd,	// (0x0002f60f) ncimui_group_query_pane

0x9805,	// (0x0002f657) ncimui_list_pane_ParamLimits

0x9805,	// (0x0002f657) ncimui_list_pane

0x982a,	// (0x0002f67c) ncimui_text_pane_ParamLimits

0x982a,	// (0x0002f67c) ncimui_text_pane

0x98eb,	// (0x0002f73d) ncimui_text_pane_t1_ParamLimits

0x98eb,	// (0x0002f73d) ncimui_text_pane_t1

0xdf6e,	// (0x00033dc0) ncimui_list_single_graphic_pane_ParamLimits

0xdf6e,	// (0x00033dc0) ncimui_list_single_graphic_pane

0x9909,	// (0x0002f75b) ncimui_query_pane_ParamLimits

0x9909,	// (0x0002f75b) ncimui_query_pane

0x2275,	// (0x000280c7) list_highlight_pane_cp013

0xdf7e,	// (0x00033dd0) ncim_list_query_list_pane_t1_copy1

0xdf8c,	// (0x00033dde) ncim_list_single_graphic_pane_g1

0xdf94,	// (0x00033de6) ncim_query_button_pane_cp01

0xdfa0,	// (0x00033df2) ncim_query_entry_pane_ParamLimits

0xdfa0,	// (0x00033df2) ncim_query_entry_pane

0xdfb3,	// (0x00033e05) ncimui_query_pane_g1

0xdfbf,	// (0x00033e11) ncimui_query_pane_t1_ParamLimits

0xdfbf,	// (0x00033e11) ncimui_query_pane_t1

0x6d75,	// (0x0002cbc7) input_focus_pane_cp012

0xdfd8,	// (0x00033e2a) ncim_query_entry_pane_t1

0x2c35,	// (0x00028a87) main_im_pane_ParamLimits

0xb5d3,	// (0x00031425) main_mobtv_pane_ParamLimits

0xb5d3,	// (0x00031425) main_mobtv_pane

0x870c,	// (0x0002e55e) main_cset6_slider_pane_g18_ParamLimits

0x870c,	// (0x0002e55e) main_cset6_slider_pane_g18

0x873c,	// (0x0002e58e) main_cset6_slider_pane_g19_ParamLimits

0x873c,	// (0x0002e58e) main_cset6_slider_pane_g19

0xdfea,	// (0x00033e3c) bg_main_mobtv_pane_ParamLimits

0xdfea,	// (0x00033e3c) bg_main_mobtv_pane

0x9919,	// (0x0002f76b) main_mobtv_info_pane

0x9922,	// (0x0002f774) main_mobtv_loading_pane_ParamLimits

0x9922,	// (0x0002f774) main_mobtv_loading_pane

0xdff8,	// (0x00033e4a) main_mobtv_pg_channel_list_pane

0xe002,	// (0x00033e54) main_mobtv_pg_hdr_pane

0x992f,	// (0x0002f781) main_mobtv_programe_curr_pane_ParamLimits

0x992f,	// (0x0002f781) main_mobtv_programe_curr_pane

0x993c,	// (0x0002f78e) main_mobtv_programe_next_pane_ParamLimits

0x993c,	// (0x0002f78e) main_mobtv_programe_next_pane

0xe00b,	// (0x00033e5d) popup_mobtv_noti_window

0xc488,	// (0x000322da) main_tv_pg_hdr_pane_g1

0xe013,	// (0x00033e65) main_tv_pg_hdr_pane_g2

0xe01b,	// (0x00033e6d) main_tv_pg_hdr_pane_g3

0xe023,	// (0x00033e75) main_tv_pg_hdr_pane_g4

0xe02b,	// (0x00033e7d) main_tv_pg_hdr_pane_g5

0xe033,	// (0x00033e85) main_tv_pg_hdr_pane_g6

0xe03b,	// (0x00033e8d) main_tv_pg_hdr_pane_g7

0xe043,	// (0x00033e95) main_tv_pg_hdr_pane_g8

0xe04b,	// (0x00033e9d) main_tv_pg_hdr_pane_g9

0xe053,	// (0x00033ea5) main_tv_pg_hdr_pane_g10

0xe05d,	// (0x00033eaf) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x00035a6d) main_tv_pg_hdr_pane_g

0xe067,	// (0x00033eb9) main_tv_pg_hdr_pane_t1

0xe075,	// (0x00033ec7) main_tv_pg_hdr_pane_t2

0xe083,	// (0x00033ed5) main_tv_pg_hdr_pane_t3

0xe091,	// (0x00033ee3) main_tv_pg_hdr_pane_t4

0xe09f,	// (0x00033ef1) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x00035a84) main_tv_pg_hdr_pane_t

0xe0ad,	// (0x00033eff) single_mobtv_pg_channel_pane_ParamLimits

0xe0ad,	// (0x00033eff) single_mobtv_pg_channel_pane

0xe0bf,	// (0x00033f11) single_mobtv_pg_channel_table_pane

0xe0c8,	// (0x00033f1a) single_mobtv_pg_channel_thumb_pane

0xe0d1,	// (0x00033f23) single_tv_pg_channel_pane_g1

0xe0da,	// (0x00033f2c) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x00035a8f) single_tv_pg_channel_pane_g

0xc6b7,	// (0x00032509) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc6b7,	// (0x00032509) bg_single_mobtv_pg_channel_thumb_pane

0xe0e3,	// (0x00033f35) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe0e3,	// (0x00033f35) single_mobtv_pg_channel_thumb_pane_g1

0xe0f1,	// (0x00033f43) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe0f1,	// (0x00033f43) single_mobtv_pg_channel_thumb_pane_g2

0xe0fd,	// (0x00033f4f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe0fd,	// (0x00033f4f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x00035a94) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x00035a94) single_mobtv_pg_channel_thumb_pane_g

0xe109,	// (0x00033f5b) single_mobtv_pg_channel_thumb_pane_t1

0xe117,	// (0x00033f69) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x00035a9b) single_mobtv_pg_channel_thumb_pane_t

0xc488,	// (0x000322da) bg_single_mobtv_pg_channel_table_pane_g1

0xc488,	// (0x000322da) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6eb,	// (0x0003553d) bg_single_mobtv_pg_channel_table_pane_g

0xe125,	// (0x00033f77) single_mobtv_pg_channel_table_pane_t1

0xe133,	// (0x00033f85) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x00035aa0) single_mobtv_pg_channel_table_pane_t

0x9951,	// (0x0002f7a3) main_mobtv_info_pane_g1_ParamLimits

0x9951,	// (0x0002f7a3) main_mobtv_info_pane_g1

0x996d,	// (0x0002f7bf) main_mobtv_info_pane_t1_ParamLimits

0x996d,	// (0x0002f7bf) main_mobtv_info_pane_t1

0x99d3,	// (0x0002f825) main_mobtv_info_pane_t2_ParamLimits

0x99d3,	// (0x0002f825) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x00035aaa) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x00035aaa) main_mobtv_info_pane_t

0x9a56,	// (0x0002f8a8) wait_bar_pane_cp05

0x9a66,	// (0x0002f8b8) main_mobtv_loading_pane_g1_ParamLimits

0x9a66,	// (0x0002f8b8) main_mobtv_loading_pane_g1

0x9a77,	// (0x0002f8c9) main_mobtv_loading_pane_g2_ParamLimits

0x9a77,	// (0x0002f8c9) main_mobtv_loading_pane_g2

0x9a83,	// (0x0002f8d5) main_mobtv_loading_pane_g3_ParamLimits

0x9a83,	// (0x0002f8d5) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x00035ab1) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x00035ab1) main_mobtv_loading_pane_g

0xe141,	// (0x00033f93) main_mobtv_loading_pane_t1_ParamLimits

0xe141,	// (0x00033f93) main_mobtv_loading_pane_t1

0xe159,	// (0x00033fab) main_mobtv_loading_pane_t2_ParamLimits

0xe159,	// (0x00033fab) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x00035ab8) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x00035ab8) main_mobtv_loading_pane_t

0x9a94,	// (0x0002f8e6) wait_bar_pane_cp06_ParamLimits

0x9a94,	// (0x0002f8e6) wait_bar_pane_cp06

0xe17d,	// (0x00033fcf) main_mobtv_programe_curr_pane_t1

0xe18b,	// (0x00033fdd) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x00035abd) main_mobtv_programe_curr_pane_t

0xe199,	// (0x00033feb) main_mobtv_programe_next_pane_t1

0xe1a7,	// (0x00033ff9) main_mobtv_programe_next_pane_t2

0xe1b5,	// (0x00034007) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x00035ac2) main_mobtv_programe_next_pane_t

0x2275,	// (0x000280c7) bg_popup_mobtv_noti_window_pane

0xe1c3,	// (0x00034015) popup_mobtv_noti_window_g1

0xe1cb,	// (0x0003401d) popup_mobtv_noti_window_t1

0xe1d9,	// (0x0003402b) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x00035ac9) popup_mobtv_noti_window_t

0xc488,	// (0x000322da) bg_popup_mobtv_noti_window_pane_g1

0xb5e1,	// (0x00031433) sc_clock_pane

0xb5e1,	// (0x00031433) main_fs_bigclock_pane

0x921e,	// (0x0002f070) blid2_tripm_pane_t4_ParamLimits

0x921e,	// (0x0002f070) blid2_tripm_pane_t4

0x9aa3,	// (0x0002f8f5) sc_clock_pane_g1_ParamLimits

0x9aa3,	// (0x0002f8f5) sc_clock_pane_g1

0x9ab5,	// (0x0002f907) sc_clock_pane_t1_ParamLimits

0x9ab5,	// (0x0002f907) sc_clock_pane_t1

0x9ad7,	// (0x0002f929) sc_clock_pane_t2_ParamLimits

0x9ad7,	// (0x0002f929) sc_clock_pane_t2

0x9aed,	// (0x0002f93f) sc_clock_pane_t3_ParamLimits

0x9aed,	// (0x0002f93f) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x00035ace) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x00035ace) sc_clock_pane_t

0xab35,	// (0x00030987) main_fs_bigclock_indicator_pane_ParamLimits

0xab35,	// (0x00030987) main_fs_bigclock_indicator_pane

0x9b89,	// (0x0002f9db) main_fs_bigclock_pane_g1_ParamLimits

0x9b89,	// (0x0002f9db) main_fs_bigclock_pane_g1

0xab41,	// (0x00030993) main_fs_bigclock_pane_t1_ParamLimits

0xab41,	// (0x00030993) main_fs_bigclock_pane_t1

0xab53,	// (0x000309a5) main_fs_bigclock_pane_t2_ParamLimits

0xab53,	// (0x000309a5) main_fs_bigclock_pane_t2

0xab65,	// (0x000309b7) main_fs_bigclock_pane_t3_ParamLimits

0xab65,	// (0x000309b7) main_fs_bigclock_pane_t3

0x0002,

0xfe81,	// (0x00035cd3) main_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x00035cd3) main_fs_bigclock_pane_t

0xec71,	// (0x00034ac3) main_fs_bigclock_indicator_pane_g1

0xde9e,	// (0x00033cf0) ncim_query_content_pane_g2_ParamLimits

0xde9e,	// (0x00033cf0) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x00035a5b) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x00035a5b) ncim_query_content_pane_g

0x9b04,	// (0x0002f956) sc_clock_pane_t4_ParamLimits

0x9b04,	// (0x0002f956) sc_clock_pane_t4

0xb5d3,	// (0x00031425) main_radioblah_pane

0xd0c3,	// (0x00032f15) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0c3,	// (0x00032f15) cell_call4_button_pane_t1_copy1

0x976f,	// (0x0002f5c1) main_ncimui_pane_t1_ParamLimits

0x976f,	// (0x0002f5c1) main_ncimui_pane_t1

0x9789,	// (0x0002f5db) main_ncimui_pane_t2_ParamLimits

0x9789,	// (0x0002f5db) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x00035a54) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x00035a54) main_ncimui_pane_t

0xe31a,	// (0x0003416c) main_radioblah_anim_pane_ParamLimits

0xe31a,	// (0x0003416c) main_radioblah_anim_pane

0xe32b,	// (0x0003417d) main_radioblah_info_pane_ParamLimits

0xe32b,	// (0x0003417d) main_radioblah_info_pane

0xe33f,	// (0x00034191) main_radioblah_pane_t1_ParamLimits

0xe33f,	// (0x00034191) main_radioblah_pane_t1

0xe35b,	// (0x000341ad) main_radioblah_pane_t2_ParamLimits

0xe35b,	// (0x000341ad) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x00035aef) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x00035aef) main_radioblah_pane_t

0x9bd3,	// (0x0002fa25) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9bd3,	// (0x0002fa25) main_radioblah_rocker_ctrl_pane

0xe3a3,	// (0x000341f5) main_radioblah_info_pane_t1_ParamLimits

0xe3a3,	// (0x000341f5) main_radioblah_info_pane_t1

0x9c27,	// (0x0002fa79) main_radioblah_info_pane_t2_ParamLimits

0x9c27,	// (0x0002fa79) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x00035af8) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x00035af8) main_radioblah_info_pane_t

0xc488,	// (0x000322da) main_radioblah_rocker_ctrl_pane_g1

0x9cd5,	// (0x0002fb27) main_radioblah_rocker_ctrl_pane_g2

0x9cdd,	// (0x0002fb2f) main_radioblah_rocker_ctrl_pane_g3

0x9ce5,	// (0x0002fb37) main_radioblah_rocker_ctrl_pane_g4

0x9ced,	// (0x0002fb3f) main_radioblah_rocker_ctrl_pane_g5

0x9cf5,	// (0x0002fb47) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x00035b01) main_radioblah_rocker_ctrl_pane_g

0x9728,	// (0x0002f57a) main_cset_text2_pane_t1_copy1_ParamLimits

0xd14b,	// (0x00032f9d) cam4_image_uncrop_qvga_pane

0xd1c5,	// (0x00033017) vid4_image_uncrop_qcif_pane

0xdaa0,	// (0x000338f2) cam6_image_uncrop_qvga_pane_ParamLimits

0xdaa0,	// (0x000338f2) cam6_image_uncrop_qvga_pane

0xdb74,	// (0x000339c6) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb74,	// (0x000339c6) vid6_image_uncrop_qcif_pane

0x2275,	// (0x000280c7) bg_popup_preview_window_pane_cp03

0xde44,	// (0x00033c96) list_cset_text2_pane

0xde4c,	// (0x00033c9e) main_cset6_text2_pane_g1

0xde54,	// (0x00033ca6) main_cset6_text2_pane_t1

0x9cfd,	// (0x0002fb4f) list_cset_text2_pane_t1_ParamLimits

0x9cfd,	// (0x0002fb4f) list_cset_text2_pane_t1

0xb5d3,	// (0x00031425) main_radioblah_pane_ParamLimits

0x9a44,	// (0x0002f896) main_mobtv_info_pane_t3_ParamLimits

0x9a44,	// (0x0002f896) main_mobtv_info_pane_t3

0x9bc1,	// (0x0002fa13) main_radioblah_pane_g1

0x9bfb,	// (0x0002fa4d) main_radioblah_info_pane_g1

0x9c7a,	// (0x0002facc) main_radioblah_info_pane_t3_ParamLimits

0x9c7a,	// (0x0002facc) main_radioblah_info_pane_t3

0x4866,	// (0x0002a6b8) highlight_cell_cale_month_pane_ParamLimits

0x4866,	// (0x0002a6b8) highlight_cell_cale_month_pane

0xb5e1,	// (0x00031433) main_phob_fisheye_pane

0xc807,	// (0x00032659) scroll_pane_cp0031_ParamLimits

0xc807,	// (0x00032659) scroll_pane_cp0031

0xdc7e,	// (0x00033ad0) wait_bar_pane_cp08_ParamLimits

0x94e3,	// (0x0002f335) cset_list_set_pane_copy1_ParamLimits

0xe3dd,	// (0x0003422f) highlight_cell_cale_month_pane_g1

0x9d16,	// (0x0002fb68) highlight_cell_cale_month_pane_t1

0xe3e5,	// (0x00034237) list_gen_pane_cp01

0xd3bc,	// (0x0003320e) scroll_pane_01

0x9d24,	// (0x0002fb76) list_single_double_fisheye_pane

0x9d2d,	// (0x0002fb7f) list_double_fisheye_pane_g1_ParamLimits

0x9d2d,	// (0x0002fb7f) list_double_fisheye_pane_g1

0x9d39,	// (0x0002fb8b) list_double_fisheye_pane_g2_ParamLimits

0x9d39,	// (0x0002fb8b) list_double_fisheye_pane_g2

0x9d45,	// (0x0002fb97) list_double_fisheye_pane_g3_ParamLimits

0x9d45,	// (0x0002fb97) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x00035b0e) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x00035b0e) list_double_fisheye_pane_g

0x9d69,	// (0x0002fbbb) list_double_fisheye_pane_t1_ParamLimits

0x9d69,	// (0x0002fbbb) list_double_fisheye_pane_t1

0x9d84,	// (0x0002fbd6) list_double_fisheye_pane_t2_ParamLimits

0x9d84,	// (0x0002fbd6) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x00035b19) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x00035b19) list_double_fisheye_pane_t

0xb5e1,	// (0x00031433) main_call5_pane

0x9b2d,	// (0x0002f97f) sc_swipe_pane_ParamLimits

0x9b2d,	// (0x0002f97f) sc_swipe_pane

0x9db7,	// (0x0002fc09) call5_image_pane_ParamLimits

0x9db7,	// (0x0002fc09) call5_image_pane

0x9dcc,	// (0x0002fc1e) call5_swipe_1_pane_ParamLimits

0x9dcc,	// (0x0002fc1e) call5_swipe_1_pane

0x9ddd,	// (0x0002fc2f) call5_swipe_2_pane_ParamLimits

0x9ddd,	// (0x0002fc2f) call5_swipe_2_pane

0x9e02,	// (0x0002fc54) popup_call5_audio_first_window_ParamLimits

0x9e02,	// (0x0002fc54) popup_call5_audio_first_window

0xc6b7,	// (0x00032509) call5_swipe_1_pane_g1_ParamLimits

0xc6b7,	// (0x00032509) call5_swipe_1_pane_g1

0xe3ee,	// (0x00034240) call5_swipe_1_pane_g2_ParamLimits

0xe3ee,	// (0x00034240) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x00035b1e) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x00035b1e) call5_swipe_1_pane_g

0xe3fa,	// (0x0003424c) call5_swipe_1_pane_t1_ParamLimits

0xe3fa,	// (0x0003424c) call5_swipe_1_pane_t1

0xc6b7,	// (0x00032509) call5_swipe_2_pane_g1_ParamLimits

0xc6b7,	// (0x00032509) call5_swipe_2_pane_g1

0xe40f,	// (0x00034261) call5_swipe_2_pane_g2_ParamLimits

0xe40f,	// (0x00034261) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x00035b23) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x00035b23) call5_swipe_2_pane_g

0xe41b,	// (0x0003426d) call5_swipe_2_pane_t1_ParamLimits

0xe41b,	// (0x0003426d) call5_swipe_2_pane_t1

0xe430,	// (0x00034282) sc_swipe_pane_g1_ParamLimits

0xe430,	// (0x00034282) sc_swipe_pane_g1

0xe43d,	// (0x0003428f) sc_swipe_pane_g2_ParamLimits

0xe43d,	// (0x0003428f) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x00035b28) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x00035b28) sc_swipe_pane_g

0xe449,	// (0x0003429b) sc_swipe_pane_t1_ParamLimits

0xe449,	// (0x0003429b) sc_swipe_pane_t1

0xb5e1,	// (0x00031433) main_cmail_launcher_pane

0x9e11,	// (0x0002fc63) aid_size_cell_cmail_l_ParamLimits

0x9e11,	// (0x0002fc63) aid_size_cell_cmail_l

0x9e2a,	// (0x0002fc7c) grid_cmail_l_pane_ParamLimits

0x9e2a,	// (0x0002fc7c) grid_cmail_l_pane

0x9e3f,	// (0x0002fc91) cell_cmail_l_pane_ParamLimits

0x9e3f,	// (0x0002fc91) cell_cmail_l_pane

0x9e61,	// (0x0002fcb3) cell_cmail_l_pane_g1_ParamLimits

0x9e61,	// (0x0002fcb3) cell_cmail_l_pane_g1

0x9e71,	// (0x0002fcc3) cell_cmail_l_pane_t1_ParamLimits

0x9e71,	// (0x0002fcc3) cell_cmail_l_pane_t1

0x9e87,	// (0x0002fcd9) cell_cmail_l_pane_t2_ParamLimits

0x9e87,	// (0x0002fcd9) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x00035b2d) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x00035b2d) cell_cmail_l_pane_t

0x6d75,	// (0x0002cbc7) grid_highlight_pane_cp018_ParamLimits

0x6d75,	// (0x0002cbc7) grid_highlight_pane_cp018

0x0c8f,	// (0x00026ae1) main2_pane_ParamLimits

0x0c8f,	// (0x00026ae1) main2_pane

0x2dab,	// (0x00028bfd) popup_sp_fs_action_menu_bg_pane_g1

0x2db3,	// (0x00028c05) popup_sp_fs_action_menu_bg_pane_g2

0x2dbb,	// (0x00028c0d) popup_sp_fs_action_menu_bg_pane_g3

0x2dc3,	// (0x00028c15) popup_sp_fs_action_menu_bg_pane_g4

0x2dcb,	// (0x00028c1d) popup_sp_fs_action_menu_bg_pane_g5

0x2dd3,	// (0x00028c25) popup_sp_fs_action_menu_bg_pane_g6

0x2ddb,	// (0x00028c2d) popup_sp_fs_action_menu_bg_pane_g7

0x2de3,	// (0x00028c35) popup_sp_fs_action_menu_bg_pane_g8

0x2deb,	// (0x00028c3d) popup_sp_fs_action_menu_bg_pane_g9

0x2df3,	// (0x00028c45) popup_sp_fs_action_menu_bg_pane_g10

0x2df3,	// (0x00028c45) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x00034fd8) popup_sp_fs_action_menu_bg_pane_g

0x36ff,	// (0x00029551) list_medium_line_x2_t3_g3_g1_ParamLimits

0x36ff,	// (0x00029551) list_medium_line_x2_t3_g3_g1

0x370b,	// (0x0002955d) list_medium_line_x2_t3_g3_g2_ParamLimits

0x370b,	// (0x0002955d) list_medium_line_x2_t3_g3_g2

0x3717,	// (0x00029569) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3717,	// (0x00029569) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x00035086) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x00035086) list_medium_line_x2_t3_g3_g

0x3723,	// (0x00029575) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3723,	// (0x00029575) list_medium_line_x2_t3_g3_t1

0x3738,	// (0x0002958a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3738,	// (0x0002958a) list_medium_line_x2_t3_g3_t2

0x374a,	// (0x0002959c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x374a,	// (0x0002959c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0003508d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0003508d) list_medium_line_x2_t3_g3_t

0x36ff,	// (0x00029551) list_medium_line_x2_t3_g2_g1_ParamLimits

0x36ff,	// (0x00029551) list_medium_line_x2_t3_g2_g1

0x3717,	// (0x00029569) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3717,	// (0x00029569) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x00035094) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x00035094) list_medium_line_x2_t3_g2_g

0x375f,	// (0x000295b1) list_medium_line_x2_t3_g2_t1_ParamLimits

0x375f,	// (0x000295b1) list_medium_line_x2_t3_g2_t1

0x3775,	// (0x000295c7) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3775,	// (0x000295c7) list_medium_line_x2_t3_g2_t2

0x374a,	// (0x0002959c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x374a,	// (0x0002959c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x00035099) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x00035099) list_medium_line_x2_t3_g2_t

0x36ff,	// (0x00029551) list_medium_line_x2_t4_g4_g1_ParamLimits

0x36ff,	// (0x00029551) list_medium_line_x2_t4_g4_g1

0x3787,	// (0x000295d9) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3787,	// (0x000295d9) list_medium_line_x2_t4_g4_g2

0x370b,	// (0x0002955d) list_medium_line_x2_t4_g4_g3_ParamLimits

0x370b,	// (0x0002955d) list_medium_line_x2_t4_g4_g3

0x3793,	// (0x000295e5) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3793,	// (0x000295e5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x000350a0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x000350a0) list_medium_line_x2_t4_g4_g

0x379f,	// (0x000295f1) list_medium_line_x2_t4_g4_t1_ParamLimits

0x379f,	// (0x000295f1) list_medium_line_x2_t4_g4_t1

0x37b6,	// (0x00029608) list_medium_line_x2_t4_g4_t2_ParamLimits

0x37b6,	// (0x00029608) list_medium_line_x2_t4_g4_t2

0x37cb,	// (0x0002961d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x37cb,	// (0x0002961d) list_medium_line_x2_t4_g4_t3

0x37dd,	// (0x0002962f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x37dd,	// (0x0002962f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x000350a9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x000350a9) list_medium_line_x2_t4_g4_t

0x36ff,	// (0x00029551) list_medium_line_x2_t2_g4_g1_ParamLimits

0x36ff,	// (0x00029551) list_medium_line_x2_t2_g4_g1

0x3787,	// (0x000295d9) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3787,	// (0x000295d9) list_medium_line_x2_t2_g4_g2

0x370b,	// (0x0002955d) list_medium_line_x2_t2_g4_g3_ParamLimits

0x370b,	// (0x0002955d) list_medium_line_x2_t2_g4_g3

0x3717,	// (0x00029569) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3717,	// (0x00029569) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x00035110) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x00035110) list_medium_line_x2_t2_g4_g

0x488c,	// (0x0002a6de) list_medium_line_x2_t2_g4_t1_ParamLimits

0x488c,	// (0x0002a6de) list_medium_line_x2_t2_g4_t1

0x374a,	// (0x0002959c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x374a,	// (0x0002959c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x00035119) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x00035119) list_medium_line_x2_t2_g4_t

0x36ff,	// (0x00029551) list_medium_line_x2_t2_g3_g1_ParamLimits

0x36ff,	// (0x00029551) list_medium_line_x2_t2_g3_g1

0x370b,	// (0x0002955d) list_medium_line_x2_t2_g3_g2_ParamLimits

0x370b,	// (0x0002955d) list_medium_line_x2_t2_g3_g2

0x3717,	// (0x00029569) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3717,	// (0x00029569) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x00035086) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x00035086) list_medium_line_x2_t2_g3_g

0x48a1,	// (0x0002a6f3) list_medium_line_x2_t2_g3_t1_ParamLimits

0x48a1,	// (0x0002a6f3) list_medium_line_x2_t2_g3_t1

0x374a,	// (0x0002959c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x374a,	// (0x0002959c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0003511e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0003511e) list_medium_line_x2_t2_g3_t

0x4beb,	// (0x0002aa3d) main_sp_fs_list_pane_ParamLimits

0x4beb,	// (0x0002aa3d) main_sp_fs_list_pane

0x4bf8,	// (0x0002aa4a) sp_fs_scroll_pane_ParamLimits

0x4bf8,	// (0x0002aa4a) sp_fs_scroll_pane

0x4c05,	// (0x0002aa57) list_medium_line_x2_t3_t1

0x4c15,	// (0x0002aa67) list_medium_line_x2_t3_t2

0x4c23,	// (0x0002aa75) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x00035169) list_medium_line_x2_t3_t

0x4c31,	// (0x0002aa83) list_medium_line_x3_t4_t1

0x4c41,	// (0x0002aa93) list_medium_line_x3_t4_t2

0x4c4f,	// (0x0002aaa1) list_medium_line_x3_t4_t3

0x4c5d,	// (0x0002aaaf) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x00035170) list_medium_line_x3_t4_t

0x4c6b,	// (0x0002aabd) list_medium_line_x4_t5_t1

0x4c7b,	// (0x0002aacd) list_medium_line_x4_t5_t2

0x4c4f,	// (0x0002aaa1) list_medium_line_x4_t5_t3

0x4c89,	// (0x0002aadb) list_medium_line_x4_t5_t4

0x4c5d,	// (0x0002aaaf) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x00035179) list_medium_line_x4_t5_t

0x36ff,	// (0x00029551) list_medium_line_t4_g4_g1_ParamLimits

0x36ff,	// (0x00029551) list_medium_line_t4_g4_g1

0x3793,	// (0x000295e5) list_medium_line_t4_g4_g2_ParamLimits

0x3793,	// (0x000295e5) list_medium_line_t4_g4_g2

0x4c97,	// (0x0002aae9) list_medium_line_t4_g4_g3_ParamLimits

0x4c97,	// (0x0002aae9) list_medium_line_t4_g4_g3

0x3717,	// (0x00029569) list_medium_line_t4_g4_g4_ParamLimits

0x3717,	// (0x00029569) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x00035184) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x00035184) list_medium_line_t4_g4_g

0x4ca3,	// (0x0002aaf5) list_medium_line_t4_g4_t1_ParamLimits

0x4ca3,	// (0x0002aaf5) list_medium_line_t4_g4_t1

0x4cb8,	// (0x0002ab0a) list_medium_line_t4_g4_t2_ParamLimits

0x4cb8,	// (0x0002ab0a) list_medium_line_t4_g4_t2

0x4cce,	// (0x0002ab20) list_medium_line_t4_g4_t3_ParamLimits

0x4cce,	// (0x0002ab20) list_medium_line_t4_g4_t3

0x4ce4,	// (0x0002ab36) list_medium_line_t4_g4_t4_ParamLimits

0x4ce4,	// (0x0002ab36) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0003518d) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0003518d) list_medium_line_t4_g4_t

0x501a,	// (0x0002ae6c) chi_dic_find_pane_g1

0x113d,	// (0x00026f8f) main_tport_pane

0xd501,	// (0x00033353) list_medium_line_plain_t1

0xd553,	// (0x000333a5) list_medium_line_t2_g2_g1_ParamLimits

0xd553,	// (0x000333a5) list_medium_line_t2_g2_g1

0xd55f,	// (0x000333b1) list_medium_line_t2_g2_g2_ParamLimits

0xd55f,	// (0x000333b1) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x00035865) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x00035865) list_medium_line_t2_g2_g

0x8a4f,	// (0x0002e8a1) list_medium_line_t2_g2_t1_ParamLimits

0x8a4f,	// (0x0002e8a1) list_medium_line_t2_g2_t1

0x8a66,	// (0x0002e8b8) list_medium_line_t2_g2_t2_ParamLimits

0x8a66,	// (0x0002e8b8) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0003586a) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0003586a) list_medium_line_t2_g2_t

0xd917,	// (0x00033769) aid_sp_fs_list_icon_a_sm

0xd91f,	// (0x00033771) aid_sp_fs_list_icon_d

0xd927,	// (0x00033779) aid_sp_fs_text_primary

0xd930,	// (0x00033782) aid_sp_fs_text_secondary

0xd939,	// (0x0003378b) list_medium_line

0xd939,	// (0x0003378b) list_medium_line_g2

0xd939,	// (0x0003378b) list_medium_line_g3

0xd939,	// (0x0003378b) list_medium_line_plain

0xd939,	// (0x0003378b) list_medium_line_plain_t2

0xd939,	// (0x0003378b) list_medium_line_plain_t3

0xd939,	// (0x0003378b) list_medium_line_right_icon

0xd939,	// (0x0003378b) list_medium_line_right_iconx2

0xd939,	// (0x0003378b) list_medium_line_t2

0xd939,	// (0x0003378b) list_medium_line_t2_g2

0xd939,	// (0x0003378b) list_medium_line_t2_g3

0xd939,	// (0x0003378b) list_medium_line_t2_right_icon

0xd939,	// (0x0003378b) list_medium_line_t2_right_iconx2

0xd939,	// (0x0003378b) list_medium_line_t3

0xd939,	// (0x0003378b) list_medium_line_t3_g2

0xd939,	// (0x0003378b) list_medium_line_t3_g3

0xd939,	// (0x0003378b) list_medium_line_t3_right_iconx2

0x8fc9,	// (0x0002ee1b) list_medium_line_t4_g4

0xd942,	// (0x00033794) list_medium_line_x2

0xd942,	// (0x00033794) list_medium_line_x2_t2_g2

0xd942,	// (0x00033794) list_medium_line_x2_t2_g3

0xd942,	// (0x00033794) list_medium_line_x2_t2_g4

0xd942,	// (0x00033794) list_medium_line_x2_t3

0xd942,	// (0x00033794) list_medium_line_x2_t3_g2

0xd942,	// (0x00033794) list_medium_line_x2_t3_g3

0xd942,	// (0x00033794) list_medium_line_x2_t3_g4

0xd942,	// (0x00033794) list_medium_line_x2_t4_g2

0xd942,	// (0x00033794) list_medium_line_x2_t4_g4

0x8fd2,	// (0x0002ee24) list_medium_line_x3

0x8fd2,	// (0x0002ee24) list_medium_line_x3_t4

0x8fd2,	// (0x0002ee24) list_medium_line_x3_t4_g4

0x8fc9,	// (0x0002ee1b) list_medium_line_x4_t4

0x8fc9,	// (0x0002ee1b) list_medium_line_x4_t4_g7

0x8fc9,	// (0x0002ee1b) list_medium_line_x4_t5

0x8fdb,	// (0x0002ee2d) list_single_fs_dyc_pane_ParamLimits

0x8fdb,	// (0x0002ee2d) list_single_fs_dyc_pane

0x36ff,	// (0x00029551) list_medium_line_x4_t4_g7_g1_ParamLimits

0x36ff,	// (0x00029551) list_medium_line_x4_t4_g7_g1

0x9657,	// (0x0002f4a9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9657,	// (0x0002f4a9) list_medium_line_x4_t4_g7_g2

0x9663,	// (0x0002f4b5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9663,	// (0x0002f4b5) list_medium_line_x4_t4_g7_g3

0x9672,	// (0x0002f4c4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9672,	// (0x0002f4c4) list_medium_line_x4_t4_g7_g4

0x967e,	// (0x0002f4d0) list_medium_line_x4_t4_g7_g5_ParamLimits

0x967e,	// (0x0002f4d0) list_medium_line_x4_t4_g7_g5

0x968d,	// (0x0002f4df) list_medium_line_x4_t4_g7_g6_ParamLimits

0x968d,	// (0x0002f4df) list_medium_line_x4_t4_g7_g6

0x969c,	// (0x0002f4ee) list_medium_line_x4_t4_g7_g7_ParamLimits

0x969c,	// (0x0002f4ee) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x00035a35) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x00035a35) list_medium_line_x4_t4_g7_g

0x96a8,	// (0x0002f4fa) list_medium_line_x4_t4_g7_t1_ParamLimits

0x96a8,	// (0x0002f4fa) list_medium_line_x4_t4_g7_t1

0x96bd,	// (0x0002f50f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x96bd,	// (0x0002f50f) list_medium_line_x4_t4_g7_t2

0x96d2,	// (0x0002f524) list_medium_line_x4_t4_g7_t3_ParamLimits

0x96d2,	// (0x0002f524) list_medium_line_x4_t4_g7_t3

0x96e7,	// (0x0002f539) list_medium_line_x4_t4_g7_t4_ParamLimits

0x96e7,	// (0x0002f539) list_medium_line_x4_t4_g7_t4

0x96f9,	// (0x0002f54b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x96f9,	// (0x0002f54b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x00035a44) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x00035a44) list_medium_line_x4_t4_g7_t

0x970b,	// (0x0002f55d) list_single_dyc_row_pane_ParamLimits

0x970b,	// (0x0002f55d) list_single_dyc_row_pane

0x9da6,	// (0x0002fbf8) call5_gesture_pane_ParamLimits

0x9da6,	// (0x0002fbf8) call5_gesture_pane

0x9dee,	// (0x0002fc40) call5_windows_pane_ParamLimits

0x9dee,	// (0x0002fc40) call5_windows_pane

0x9e9f,	// (0x0002fcf1) call5_swipe_1_pane_cp_ParamLimits

0x9e9f,	// (0x0002fcf1) call5_swipe_1_pane_cp

0x9eab,	// (0x0002fcfd) call5_swipe_2_pane_cp_ParamLimits

0x9eab,	// (0x0002fcfd) call5_swipe_2_pane_cp

0x336e,	// (0x000291c0) call5_image_pane_cp

0x9eb7,	// (0x0002fd09) popup_call5_audio_first_window_cp_ParamLimits

0x9eb7,	// (0x0002fd09) popup_call5_audio_first_window_cp

0xe430,	// (0x00034282) call5_swipe_1_pane_g1_cp_ParamLimits

0xe430,	// (0x00034282) call5_swipe_1_pane_g1_cp

0xe45e,	// (0x000342b0) call5_swipe_1_pane_g2_cp

0xe449,	// (0x0003429b) call5_swipe_1_pane_t1_cp_ParamLimits

0xe449,	// (0x0003429b) call5_swipe_1_pane_t1_cp

0xe430,	// (0x00034282) call5_swipe_2_pane_g1_cp_ParamLimits

0xe430,	// (0x00034282) call5_swipe_2_pane_g1_cp

0xe466,	// (0x000342b8) call5_swipe_2_pane_g2_cp

0xe46e,	// (0x000342c0) call5_swipe_2_pane_t1_cp_ParamLimits

0xe46e,	// (0x000342c0) call5_swipe_2_pane_t1_cp

0x6d75,	// (0x0002cbc7) main_sp_fs_email_pane

0xe483,	// (0x000342d5) main_sp_fs_listscroll_pane_te

0x9ec3,	// (0x0002fd15) popup_sp_fs_action_menu_pane_ParamLimits

0x9ec3,	// (0x0002fd15) popup_sp_fs_action_menu_pane

0xc488,	// (0x000322da) bg_sp_fs_ctrlbar_pane_g1

0xca88,	// (0x000328da) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xca9a,	// (0x000328ec) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xca91,	// (0x000328e3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc488,	// (0x000322da) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x00035b32) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc275,	// (0x000320c7) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc275,	// (0x000320c7) bg_sp_fs_ctrlbar_ddmenu_pane

0xe48c,	// (0x000342de) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe48c,	// (0x000342de) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe498,	// (0x000342ea) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe498,	// (0x000342ea) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x00035b3b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x00035b3b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe4a4,	// (0x000342f6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe4a4,	// (0x000342f6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe4be,	// (0x00034310) list_medium_line_t2_right_icon_g1

0xe4c6,	// (0x00034318) list_medium_line_t2_right_icon_t1

0x9ef5,	// (0x0002fd47) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x00035b40) list_medium_line_t2_right_icon_t

0xbf74,	// (0x00031dc6) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbf74,	// (0x00031dc6) bg_sp_fs_ctrlbar_pane

0x9f49,	// (0x0002fd9b) main_sp_fs_ctrlbar_button_pane_cp01

0x9f51,	// (0x0002fda3) main_sp_fs_ctrlbar_ddmenu_pane

0xe50e,	// (0x00034360) main_sp_fs_ctrlbar_pane_g1

0xe51a,	// (0x0003436c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x00035b45) main_sp_fs_ctrlbar_pane_g

0xe526,	// (0x00034378) main_sp_fs_ctrlbar_pane_t1

0x9f5b,	// (0x0002fdad) main_sp_fs_ctrlbar_pane

0x9f7c,	// (0x0002fdce) main_sp_fs_listscroll_pane_te_cp01

0x9f9c,	// (0x0002fdee) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9f9c,	// (0x0002fdee) popup_sp_fs_action_menu_pane_cp01

0x6d75,	// (0x0002cbc7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x6d75,	// (0x0002cbc7) bg_sp_fs_highlight_list_pane_cp01

0x9fc6,	// (0x0002fe18) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x9fc6,	// (0x0002fe18) sp_fs_action_menu_list_gene_pane_g1

0xe556,	// (0x000343a8) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe556,	// (0x000343a8) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x00035b4f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x00035b4f) sp_fs_action_menu_list_gene_pane_g

0x9fd5,	// (0x0002fe27) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x9fd5,	// (0x0002fe27) sp_fs_action_menu_list_gene_pane_t1

0x9fed,	// (0x0002fe3f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9fed,	// (0x0002fe3f) sp_fs_action_menu_list_gene_pane

0xe563,	// (0x000343b5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe563,	// (0x000343b5) popup_sp_fs_action_menu_bg_pane

0xa00a,	// (0x0002fe5c) sp_fs_action_menu_list_pane_ParamLimits

0xa00a,	// (0x0002fe5c) sp_fs_action_menu_list_pane

0xe571,	// (0x000343c3) sp_fs_scroll_pane_cp01_ParamLimits

0xe571,	// (0x000343c3) sp_fs_scroll_pane_cp01

0xa028,	// (0x0002fe7a) list_medium_line_plain_t2_t1

0xa038,	// (0x0002fe8a) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x00035b54) list_medium_line_plain_t2_t

0xa046,	// (0x0002fe98) list_medium_line_plain_t3_t1

0xa056,	// (0x0002fea8) list_medium_line_plain_t3_t2

0xa064,	// (0x0002feb6) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x00035b59) list_medium_line_plain_t3_t

0x36ff,	// (0x00029551) list_medium_line_x2_t2_g2_g1_ParamLimits

0x36ff,	// (0x00029551) list_medium_line_x2_t2_g2_g1

0x3717,	// (0x00029569) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3717,	// (0x00029569) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x00035094) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x00035094) list_medium_line_x2_t2_g2_g

0x4ca3,	// (0x0002aaf5) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4ca3,	// (0x0002aaf5) list_medium_line_x2_t2_g2_t1

0x374a,	// (0x0002959c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x374a,	// (0x0002959c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x00035b60) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x00035b60) list_medium_line_x2_t2_g2_t

0x36ff,	// (0x00029551) list_medium_line_x2_t4_g2_g1_ParamLimits

0x36ff,	// (0x00029551) list_medium_line_x2_t4_g2_g1

0x3717,	// (0x00029569) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3717,	// (0x00029569) list_medium_line_x2_t4_g2_g2

0x0001,

0xf242,	// (0x00035094) list_medium_line_x2_t4_g2_g_ParamLimits

0xf242,	// (0x00035094) list_medium_line_x2_t4_g2_g

0xa072,	// (0x0002fec4) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa072,	// (0x0002fec4) list_medium_line_x2_t4_g2_t1

0xa089,	// (0x0002fedb) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa089,	// (0x0002fedb) list_medium_line_x2_t4_g2_t2

0xa09e,	// (0x0002fef0) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa09e,	// (0x0002fef0) list_medium_line_x2_t4_g2_t3

0x374a,	// (0x0002959c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x374a,	// (0x0002959c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x00035b65) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x00035b65) list_medium_line_x2_t4_g2_t

0xe597,	// (0x000343e9) list_medium_line_t3_right_iconx2_g1

0xe4be,	// (0x00034310) list_medium_line_t3_right_iconx2_g2

0xa0b0,	// (0x0002ff02) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x00035b6e) list_medium_line_t3_right_iconx2_g

0xa0b8,	// (0x0002ff0a) list_medium_line_t3_right_iconx2_t1

0xa0c8,	// (0x0002ff1a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x00035b75) list_medium_line_t3_right_iconx2_t

0x36ff,	// (0x00029551) list_medium_line_x3_t4_g4_g1_ParamLimits

0x36ff,	// (0x00029551) list_medium_line_x3_t4_g4_g1

0x370b,	// (0x0002955d) list_medium_line_x3_t4_g4_g2_ParamLimits

0x370b,	// (0x0002955d) list_medium_line_x3_t4_g4_g2

0x3793,	// (0x000295e5) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3793,	// (0x000295e5) list_medium_line_x3_t4_g4_g3

0xa0d6,	// (0x0002ff28) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa0d6,	// (0x0002ff28) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x00035b7a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x00035b7a) list_medium_line_x3_t4_g4_g

0xa0e2,	// (0x0002ff34) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa0e2,	// (0x0002ff34) list_medium_line_x3_t4_g4_t1

0xa0f9,	// (0x0002ff4b) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa0f9,	// (0x0002ff4b) list_medium_line_x3_t4_g4_t2

0xa10e,	// (0x0002ff60) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa10e,	// (0x0002ff60) list_medium_line_x3_t4_g4_t3

0xa123,	// (0x0002ff75) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa123,	// (0x0002ff75) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x00035b83) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x00035b83) list_medium_line_x3_t4_g4_t

0xa140,	// (0x0002ff92) list_single_dyc_row_text_pane_t1_ParamLimits

0xa140,	// (0x0002ff92) list_single_dyc_row_text_pane_t1

0xa177,	// (0x0002ffc9) list_single_dyc_row_text_pane_t2_ParamLimits

0xa177,	// (0x0002ffc9) list_single_dyc_row_text_pane_t2

0xe59f,	// (0x000343f1) list_single_dyc_row_text_pane_t3_ParamLimits

0xe59f,	// (0x000343f1) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3a,	// (0x00035b8c) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x00035b8c) list_single_dyc_row_text_pane_t

0xe5c3,	// (0x00034415) list_single_dyc_row_pane_g1_ParamLimits

0xe5c3,	// (0x00034415) list_single_dyc_row_pane_g1

0xe5cf,	// (0x00034421) list_single_dyc_row_pane_g2_ParamLimits

0xe5cf,	// (0x00034421) list_single_dyc_row_pane_g2

0xe5db,	// (0x0003442d) list_single_dyc_row_pane_g3_ParamLimits

0xe5db,	// (0x0003442d) list_single_dyc_row_pane_g3

0xe5e7,	// (0x00034439) list_single_dyc_row_pane_g4_ParamLimits

0xe5e7,	// (0x00034439) list_single_dyc_row_pane_g4

0x0003,

0xfd47,	// (0x00035b99) list_single_dyc_row_pane_g_ParamLimits

0xfd47,	// (0x00035b99) list_single_dyc_row_pane_g

0xe5f3,	// (0x00034445) list_single_dyc_row_text_pane_ParamLimits

0xe5f3,	// (0x00034445) list_single_dyc_row_text_pane

0x2275,	// (0x000280c7) bg_sp_fs_scroll_pane

0xe612,	// (0x00034464) thumb_sp_fs_scroll_pane

0xd553,	// (0x000333a5) list_medium_line_g1_ParamLimits

0xd553,	// (0x000333a5) list_medium_line_g1

0xe61b,	// (0x0003446d) list_medium_line_t1_ParamLimits

0xe61b,	// (0x0003446d) list_medium_line_t1

0x36ff,	// (0x00029551) list_medium_line_x2_g1_ParamLimits

0x36ff,	// (0x00029551) list_medium_line_x2_g1

0x370b,	// (0x0002955d) list_medium_line_x2_g2_ParamLimits

0x370b,	// (0x0002955d) list_medium_line_x2_g2

0x0001,

0xfd50,	// (0x00035ba2) list_medium_line_x2_g_ParamLimits

0xfd50,	// (0x00035ba2) list_medium_line_x2_g

0xe630,	// (0x00034482) list_medium_line_x2_t1_ParamLimits

0xe630,	// (0x00034482) list_medium_line_x2_t1

0x36ff,	// (0x00029551) list_medium_line_x3_g1_ParamLimits

0x36ff,	// (0x00029551) list_medium_line_x3_g1

0x370b,	// (0x0002955d) list_medium_line_x3_g2_ParamLimits

0x370b,	// (0x0002955d) list_medium_line_x3_g2

0x0001,

0xfd50,	// (0x00035ba2) list_medium_line_x3_g_ParamLimits

0xfd50,	// (0x00035ba2) list_medium_line_x3_g

0xe630,	// (0x00034482) list_medium_line_x3_t1_ParamLimits

0xe630,	// (0x00034482) list_medium_line_x3_t1

0xe646,	// (0x00034498) thumb_sp_fs_scroll_pane_g1

0xe64f,	// (0x000344a1) thumb_sp_fs_scroll_pane_g2

0xe658,	// (0x000344aa) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x00035ba7) thumb_sp_fs_scroll_pane_g

0xe646,	// (0x00034498) bg_sp_fs_scroll_pane_g1

0xe64f,	// (0x000344a1) bg_sp_fs_scroll_pane_g2

0xe658,	// (0x000344aa) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x00035ba7) bg_sp_fs_scroll_pane_g

0x36ff,	// (0x00029551) list_medium_line_x2_t3_g4_g1_ParamLimits

0x36ff,	// (0x00029551) list_medium_line_x2_t3_g4_g1

0x3787,	// (0x000295d9) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3787,	// (0x000295d9) list_medium_line_x2_t3_g4_g2

0x370b,	// (0x0002955d) list_medium_line_x2_t3_g4_g3_ParamLimits

0x370b,	// (0x0002955d) list_medium_line_x2_t3_g4_g3

0x3717,	// (0x00029569) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3717,	// (0x00029569) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x00035110) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x00035110) list_medium_line_x2_t3_g4_g

0xa29a,	// (0x000300ec) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa29a,	// (0x000300ec) list_medium_line_x2_t3_g4_t1

0xa2b0,	// (0x00030102) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa2b0,	// (0x00030102) list_medium_line_x2_t3_g4_t2

0x374a,	// (0x0002959c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x374a,	// (0x0002959c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5c,	// (0x00035bae) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5c,	// (0x00035bae) list_medium_line_x2_t3_g4_t

0xd553,	// (0x000333a5) list_medium_line_g2_g1_ParamLimits

0xd553,	// (0x000333a5) list_medium_line_g2_g1

0xd55f,	// (0x000333b1) list_medium_line_g2_g2_ParamLimits

0xd55f,	// (0x000333b1) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x00035865) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x00035865) list_medium_line_g2_g

0xe661,	// (0x000344b3) list_medium_line_g2_t1_ParamLimits

0xe661,	// (0x000344b3) list_medium_line_g2_t1

0xd553,	// (0x000333a5) list_medium_line_t3_g2_g1_ParamLimits

0xd553,	// (0x000333a5) list_medium_line_t3_g2_g1

0xd55f,	// (0x000333b1) list_medium_line_t3_g2_g2_ParamLimits

0xd55f,	// (0x000333b1) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x00035865) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x00035865) list_medium_line_t3_g2_g

0xa2c9,	// (0x0003011b) list_medium_line_t3_g2_t1_ParamLimits

0xa2c9,	// (0x0003011b) list_medium_line_t3_g2_t1

0xa2e0,	// (0x00030132) list_medium_line_t3_g2_t2_ParamLimits

0xa2e0,	// (0x00030132) list_medium_line_t3_g2_t2

0xa2f5,	// (0x00030147) list_medium_line_t3_g2_t3_ParamLimits

0xa2f5,	// (0x00030147) list_medium_line_t3_g2_t3

0x0002,

0xfd63,	// (0x00035bb5) list_medium_line_t3_g2_t_ParamLimits

0xfd63,	// (0x00035bb5) list_medium_line_t3_g2_t

0xe4be,	// (0x00034310) list_medium_line_right_icon_g1

0xe676,	// (0x000344c8) list_medium_line_right_icon_t1

0xd553,	// (0x000333a5) list_medium_line_t2_g1_ParamLimits

0xd553,	// (0x000333a5) list_medium_line_t2_g1

0xa30a,	// (0x0003015c) list_medium_line_t2_t1_ParamLimits

0xa30a,	// (0x0003015c) list_medium_line_t2_t1

0xa321,	// (0x00030173) list_medium_line_t2_t2_ParamLimits

0xa321,	// (0x00030173) list_medium_line_t2_t2

0x0001,

0xfd6a,	// (0x00035bbc) list_medium_line_t2_t_ParamLimits

0xfd6a,	// (0x00035bbc) list_medium_line_t2_t

0xd553,	// (0x000333a5) list_medium_line_t3_g1_ParamLimits

0xd553,	// (0x000333a5) list_medium_line_t3_g1

0xa333,	// (0x00030185) list_medium_line_t3_t1_ParamLimits

0xa333,	// (0x00030185) list_medium_line_t3_t1

0xa34a,	// (0x0003019c) list_medium_line_t3_t2_ParamLimits

0xa34a,	// (0x0003019c) list_medium_line_t3_t2

0xa35f,	// (0x000301b1) list_medium_line_t3_t3_ParamLimits

0xa35f,	// (0x000301b1) list_medium_line_t3_t3

0x0002,

0xfd6f,	// (0x00035bc1) list_medium_line_t3_t_ParamLimits

0xfd6f,	// (0x00035bc1) list_medium_line_t3_t

0xd553,	// (0x000333a5) list_medium_line_g3_g1_ParamLimits

0xd553,	// (0x000333a5) list_medium_line_g3_g1

0xe684,	// (0x000344d6) list_medium_line_g3_g2_ParamLimits

0xe684,	// (0x000344d6) list_medium_line_g3_g2

0xd55f,	// (0x000333b1) list_medium_line_g3_g3_ParamLimits

0xd55f,	// (0x000333b1) list_medium_line_g3_g3

0x0002,

0xfd76,	// (0x00035bc8) list_medium_line_g3_g_ParamLimits

0xfd76,	// (0x00035bc8) list_medium_line_g3_g

0xe690,	// (0x000344e2) list_medium_line_g3_t1_ParamLimits

0xe690,	// (0x000344e2) list_medium_line_g3_t1

0xd553,	// (0x000333a5) list_medium_line_t2_g3_g1_ParamLimits

0xd553,	// (0x000333a5) list_medium_line_t2_g3_g1

0xe684,	// (0x000344d6) list_medium_line_t2_g3_g2_ParamLimits

0xe684,	// (0x000344d6) list_medium_line_t2_g3_g2

0xd55f,	// (0x000333b1) list_medium_line_t2_g3_g3_ParamLimits

0xd55f,	// (0x000333b1) list_medium_line_t2_g3_g3

0x0002,

0xfd76,	// (0x00035bc8) list_medium_line_t2_g3_g_ParamLimits

0xfd76,	// (0x00035bc8) list_medium_line_t2_g3_g

0xa371,	// (0x000301c3) list_medium_line_t2_g3_t1_ParamLimits

0xa371,	// (0x000301c3) list_medium_line_t2_g3_t1

0xa38b,	// (0x000301dd) list_medium_line_t2_g3_t2_ParamLimits

0xa38b,	// (0x000301dd) list_medium_line_t2_g3_t2

0x0001,

0xfd7d,	// (0x00035bcf) list_medium_line_t2_g3_t_ParamLimits

0xfd7d,	// (0x00035bcf) list_medium_line_t2_g3_t

0xd553,	// (0x000333a5) list_medium_line_t3_g3_g1_ParamLimits

0xd553,	// (0x000333a5) list_medium_line_t3_g3_g1

0xe684,	// (0x000344d6) list_medium_line_t3_g3_g2_ParamLimits

0xe684,	// (0x000344d6) list_medium_line_t3_g3_g2

0xd55f,	// (0x000333b1) list_medium_line_t3_g3_g3_ParamLimits

0xd55f,	// (0x000333b1) list_medium_line_t3_g3_g3

0x0002,

0xfd76,	// (0x00035bc8) list_medium_line_t3_g3_g_ParamLimits

0xfd76,	// (0x00035bc8) list_medium_line_t3_g3_g

0xa3a0,	// (0x000301f2) list_medium_line_t3_g3_t1_ParamLimits

0xa3a0,	// (0x000301f2) list_medium_line_t3_g3_t1

0xa3b9,	// (0x0003020b) list_medium_line_t3_g3_t2_ParamLimits

0xa3b9,	// (0x0003020b) list_medium_line_t3_g3_t2

0xa3cf,	// (0x00030221) list_medium_line_t3_g3_t3_ParamLimits

0xa3cf,	// (0x00030221) list_medium_line_t3_g3_t3

0x0002,

0xfd82,	// (0x00035bd4) list_medium_line_t3_g3_t_ParamLimits

0xfd82,	// (0x00035bd4) list_medium_line_t3_g3_t

0xe597,	// (0x000343e9) list_medium_line_right_iconx2_g1

0xe4be,	// (0x00034310) list_medium_line_right_iconx2_g2

0x0001,

0xfd89,	// (0x00035bdb) list_medium_line_right_iconx2_g

0xe6a5,	// (0x000344f7) list_medium_line_right_iconx2_t1

0xe597,	// (0x000343e9) list_medium_line_t2_right_iconx2_g1

0xe4be,	// (0x00034310) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd89,	// (0x00035bdb) list_medium_line_t2_right_iconx2_g

0xa3e5,	// (0x00030237) list_medium_line_t2_right_iconx2_t1

0xa3f5,	// (0x00030247) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8e,	// (0x00035be0) list_medium_line_t2_right_iconx2_t

0xa403,	// (0x00030255) list_medium_line_x4_t4_t1

0xa411,	// (0x00030263) list_medium_line_x4_t4_t2

0xa421,	// (0x00030273) list_medium_line_x4_t4_t3

0xa431,	// (0x00030283) list_medium_line_x4_t4_t4

0x0003,

0xfd93,	// (0x00035be5) list_medium_line_x4_t4_t

0xa47a,	// (0x000302cc) tport_appsw_pane_ParamLimits

0xa47a,	// (0x000302cc) tport_appsw_pane

0xa48b,	// (0x000302dd) tport_contact_pane_ParamLimits

0xa48b,	// (0x000302dd) tport_contact_pane

0xa49f,	// (0x000302f1) tport_listscroll_pane_ParamLimits

0xa49f,	// (0x000302f1) tport_listscroll_pane

0xa4b7,	// (0x00030309) cell_tport_appsw_pane_ParamLimits

0xa4b7,	// (0x00030309) cell_tport_appsw_pane

0xd253,	// (0x000330a5) tport_appsw_pane_g1_ParamLimits

0xd253,	// (0x000330a5) tport_appsw_pane_g1

0xe6b3,	// (0x00034505) tport_contact_pane_g1

0xe6bc,	// (0x0003450e) tport_contact_pane_t1

0xe6ca,	// (0x0003451c) tport_contact_pane_t2

0x0001,

0xfd9c,	// (0x00035bee) tport_contact_pane_t

0xe6d8,	// (0x0003452a) list_tport_pane

0x2e05,	// (0x00028c57) scroll_pane_cp_030

0xe6e9,	// (0x0003453b) cell_tport_appsw_pane_g1

0xe6f9,	// (0x0003454b) cell_tport_appsw_pane_t1

0xe707,	// (0x00034559) grid_highlight_pane_cp019

0xa4ed,	// (0x0003033f) list_tport_double_graphic_pane_ParamLimits

0xa4ed,	// (0x0003033f) list_tport_double_graphic_pane

0x6d75,	// (0x0002cbc7) list_highlight_pane_cp023_ParamLimits

0x6d75,	// (0x0002cbc7) list_highlight_pane_cp023

0xa4fa,	// (0x0003034c) list_tport_double_graphic_pane_g1_ParamLimits

0xa4fa,	// (0x0003034c) list_tport_double_graphic_pane_g1

0xa507,	// (0x00030359) list_tport_double_graphic_pane_t1_ParamLimits

0xa507,	// (0x00030359) list_tport_double_graphic_pane_t1

0xa51c,	// (0x0003036e) list_tport_double_graphic_pane_t2_ParamLimits

0xa51c,	// (0x0003036e) list_tport_double_graphic_pane_t2

0x0001,

0xfda8,	// (0x00035bfa) list_tport_double_graphic_pane_t_ParamLimits

0xfda8,	// (0x00035bfa) list_tport_double_graphic_pane_t

0x2275,	// (0x000280c7) main_cale_note_pane

0x1f01,	// (0x00027d53) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1f01,	// (0x00027d53) cell_vitu2_function_top_wide_pane_cp01

0x9a56,	// (0x0002f8a8) wait_bar_pane_cp05_ParamLimits

0x6d75,	// (0x0002cbc7) listscroll_cmail_pane

0xe70f,	// (0x00034561) list_cmail_pane

0xa52e,	// (0x00030380) list_cmail_body_pane

0xa52e,	// (0x00030380) list_single_cmail_header_caption_pane

0xa545,	// (0x00030397) list_single_cmail_header_detail_pane_ParamLimits

0xa545,	// (0x00030397) list_single_cmail_header_detail_pane

0xe72b,	// (0x0003457d) list_single_cmail_header_caption_pane_t1

0xa56e,	// (0x000303c0) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa56e,	// (0x000303c0) list_single_cmail_header_detail_pane_g1

0xe742,	// (0x00034594) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe742,	// (0x00034594) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdad,	// (0x00035bff) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdad,	// (0x00035bff) list_single_cmail_header_detail_pane_g

0xa584,	// (0x000303d6) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa584,	// (0x000303d6) list_single_cmail_header_detail_pane_t1

0xe77f,	// (0x000345d1) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe77f,	// (0x000345d1) list_single_cmail_header_editor_pane_bg

0xe796,	// (0x000345e8) list_cmail_body_pane_g1

0xe79f,	// (0x000345f1) list_cmail_body_pane_t1

0xd2a2,	// (0x000330f4) list_single_cmail_header_editor_pane_bg_g1

0x3d8e,	// (0x00029be0) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2b2,	// (0x00033104) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2aa,	// (0x000330fc) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd52b,	// (0x0003337d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2d2,	// (0x00033124) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2c2,	// (0x00033114) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2ca,	// (0x0003311c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3d6e,	// (0x00029bc0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa5c0,	// (0x00030412) calenote_gesture_pane_ParamLimits

0xa5c0,	// (0x00030412) calenote_gesture_pane

0xa5dc,	// (0x0003042e) calenote_window_pane_ParamLimits

0xa5dc,	// (0x0003042e) calenote_window_pane

0xe7ad,	// (0x000345ff) popup_note_window_cp01

0xa5f8,	// (0x0003044a) calenote_swipe_1_pane_ParamLimits

0xa5f8,	// (0x0003044a) calenote_swipe_1_pane

0x9eab,	// (0x0002fcfd) calenote_swipe_2_pane_ParamLimits

0x9eab,	// (0x0002fcfd) calenote_swipe_2_pane

0xe430,	// (0x00034282) calenote_swipe_1_pane_g1_ParamLimits

0xe430,	// (0x00034282) calenote_swipe_1_pane_g1

0xe43d,	// (0x0003428f) calenote_swipe_1_pane_g2_ParamLimits

0xe43d,	// (0x0003428f) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x00035b28) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x00035b28) calenote_swipe_1_pane_g

0xe7bf,	// (0x00034611) calenote_swipe_1_pane_t1_ParamLimits

0xe7bf,	// (0x00034611) calenote_swipe_1_pane_t1

0xe430,	// (0x00034282) calenote_swipe_2_pane_g1_ParamLimits

0xe430,	// (0x00034282) calenote_swipe_2_pane_g1

0xe7de,	// (0x00034630) calenote_swipe_2_pane_g2_ParamLimits

0xe7de,	// (0x00034630) calenote_swipe_2_pane_g2

0x0001,

0xfdb9,	// (0x00035c0b) calenote_swipe_2_pane_g_ParamLimits

0xfdb9,	// (0x00035c0b) calenote_swipe_2_pane_g

0xe7ea,	// (0x0003463c) calenote_swipe_2_pane_t1_ParamLimits

0xe7ea,	// (0x0003463c) calenote_swipe_2_pane_t1

0x2275,	// (0x000280c7) main_mup_navstr_pane

0x7953,	// (0x0002d7a5) main_mup3_pane_t7_ParamLimits

0x7953,	// (0x0002d7a5) main_mup3_pane_t7

0xce18,	// (0x00032c6a) main_mp4_pane_g6_ParamLimits

0xce18,	// (0x00032c6a) main_mp4_pane_g6

0xd072,	// (0x00032ec4) main_image3_pane_t4_ParamLimits

0xd072,	// (0x00032ec4) main_image3_pane_t4

0xa60d,	// (0x0003045f) popup_navstr_preview_pane_ParamLimits

0xa60d,	// (0x0003045f) popup_navstr_preview_pane

0xa61d,	// (0x0003046f) scroll_navstr_pane_ParamLimits

0xa61d,	// (0x0003046f) scroll_navstr_pane

0x2275,	// (0x000280c7) bg_popup_preview_window_pane_cp04

0xe811,	// (0x00034663) popup_navstr_preview_pane_t1

0xa631,	// (0x00030483) scroll_navstr_pane_g1_ParamLimits

0xa631,	// (0x00030483) scroll_navstr_pane_g1

0xa645,	// (0x00030497) scroll_navstr_pane_t1_ParamLimits

0xa645,	// (0x00030497) scroll_navstr_pane_t1

0xe7b6,	// (0x00034608) bg_button_pane_cp014

0xe7b6,	// (0x00034608) bg_button_pane_cp030

0x9d51,	// (0x0002fba3) list_double_fisheye_pane_g4_ParamLimits

0x9d51,	// (0x0002fba3) list_double_fisheye_pane_g4

0x9d5d,	// (0x0002fbaf) list_double_fisheye_pane_g5_ParamLimits

0x9d5d,	// (0x0002fbaf) list_double_fisheye_pane_g5

0xe71f,	// (0x00034571) sp_fs_scroll_pane_cp03

0xe50e,	// (0x00034360) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe51a,	// (0x0003436c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x00035b45) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe526,	// (0x00034378) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe717,	// (0x00034569) sp_fs_scroll_pane_cp02

0x2e64,	// (0x00028cb6) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2e64,	// (0x00028cb6) popup_sp_fs_calendar_preview_list_single_pane

0x2275,	// (0x000280c7) main_cam6_pano_pane

0xb5d3,	// (0x00031425) main_mup3_pane_ParamLimits

0x2275,	// (0x000280c7) main_phacti_pane

0x9949,	// (0x0002f79b) bg_button_pane_cp11

0x9961,	// (0x0002f7b3) main_mobtv_info_pane_g2_ParamLimits

0x9961,	// (0x0002f7b3) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x00035aa5) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x00035aa5) main_mobtv_info_pane_g

0x9b16,	// (0x0002f968) sc_clock_pane_t5_ParamLimits

0x9b16,	// (0x0002f968) sc_clock_pane_t5

0x9bc1,	// (0x0002fa13) main_radioblah_pane_g1_ParamLimits

0xe373,	// (0x000341c5) main_radioblah_pane_t3_ParamLimits

0xe373,	// (0x000341c5) main_radioblah_pane_t3

0xe38b,	// (0x000341dd) main_radioblah_pane_t4_ParamLimits

0xe38b,	// (0x000341dd) main_radioblah_pane_t4

0x9be9,	// (0x0002fa3b) main_radioblah_text_pane_ParamLimits

0x9be9,	// (0x0002fa3b) main_radioblah_text_pane

0x9bfb,	// (0x0002fa4d) main_radioblah_info_pane_g1_ParamLimits

0x9c8e,	// (0x0002fae0) main_radioblah_info_pane_t4_ParamLimits

0x9c8e,	// (0x0002fae0) main_radioblah_info_pane_t4

0x6d75,	// (0x0002cbc7) main_sp_fs_calendar_pane

0xa65b,	// (0x000304ad) main_phacti_pane_g1

0xa663,	// (0x000304b5) phacti_note_pane_ParamLimits

0xa663,	// (0x000304b5) phacti_note_pane

0xe828,	// (0x0003467a) phacti_term_pane_ParamLimits

0xe828,	// (0x0003467a) phacti_term_pane

0xe83d,	// (0x0003468f) phacti_note_pane_t1_ParamLimits

0xe83d,	// (0x0003468f) phacti_note_pane_t1

0xe854,	// (0x000346a6) phacti_term_pane_g1

0xe85c,	// (0x000346ae) phacti_term_pane_t1_ParamLimits

0xe85c,	// (0x000346ae) phacti_term_pane_t1

0xe886,	// (0x000346d8) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe88e,	// (0x000346e0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc3,	// (0x00035c15) popup_sp_fs_calendar_preview_list_single_pane_g

0xe896,	// (0x000346e8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe896,	// (0x000346e8) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8ac,	// (0x000346fe) aid_popup_sp_fs_bg_corner_pane

0xc488,	// (0x000322da) popup_sp_fs_calendar_preview_bg_pane_g1

0x2275,	// (0x000280c7) popup_sp_fs_calendar_preview_bg_pane

0xe8b4,	// (0x00034706) popup_sp_fs_calendar_preview_list_pane

0xbf74,	// (0x00031dc6) bg_main_sp_fs_cale_pane_ParamLimits

0xbf74,	// (0x00031dc6) bg_main_sp_fs_cale_pane

0xe8c5,	// (0x00034717) listscroll_cale_mrui_pane_ParamLimits

0xe8c5,	// (0x00034717) listscroll_cale_mrui_pane

0xe8da,	// (0x0003472c) listscroll_sp_fs_schedule_track_pane

0xe8e3,	// (0x00034735) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe8e3,	// (0x00034735) main_sp_fs_ctrlbar_pane_cp01

0xe8f6,	// (0x00034748) main_sp_fs_ribbon_pane

0xe8fe,	// (0x00034750) popup_sp_fs_cale_preview_window

0xa6c6,	// (0x00030518) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa6c6,	// (0x00030518) list_single_sp_fs_schedule_track_pane

0x6d75,	// (0x0002cbc7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x6d75,	// (0x0002cbc7) bg_sp_fs_highlight_list_pane_cp03

0xa6da,	// (0x0003052c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa6da,	// (0x0003052c) list_single_sp_fs_schedule_track_pane_g1

0xa6e6,	// (0x00030538) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa6e6,	// (0x00030538) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc8,	// (0x00035c1a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc8,	// (0x00035c1a) list_single_sp_fs_schedule_track_pane_g

0xa6f2,	// (0x00030544) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa6f2,	// (0x00030544) list_single_sp_fs_schedule_track_pane_t1

0xa70c,	// (0x0003055e) sp_fs_schedule_track_pane_ParamLimits

0xa70c,	// (0x0003055e) sp_fs_schedule_track_pane

0xe910,	// (0x00034762) sp_fs_schedule_track_pane_g1

0xe918,	// (0x0003476a) sp_fs_schedule_track_pane_g2

0xe920,	// (0x00034772) sp_fs_schedule_track_pane_g3

0xe928,	// (0x0003477a) sp_fs_schedule_track_pane_g4

0xe930,	// (0x00034782) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcd,	// (0x00035c1f) sp_fs_schedule_track_pane_g

0xd2a2,	// (0x000330f4) bg_sp_fs_schedule_viewer_highlight_g1

0x3d8e,	// (0x00029be0) bg_sp_fs_schedule_viewer_highlight_g2

0xd2aa,	// (0x000330fc) bg_sp_fs_schedule_viewer_highlight_g3

0xd2b2,	// (0x00033104) bg_sp_fs_schedule_viewer_highlight_g4

0xd52b,	// (0x0003337d) bg_sp_fs_schedule_viewer_highlight_g5

0xd2c2,	// (0x00033114) bg_sp_fs_schedule_viewer_highlight_g6

0xd2ca,	// (0x0003311c) bg_sp_fs_schedule_viewer_highlight_g7

0xd2d2,	// (0x00033124) bg_sp_fs_schedule_viewer_highlight_g8

0x3d6e,	// (0x00029bc0) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd8,	// (0x00035c2a) bg_sp_fs_schedule_viewer_highlight_g

0x2275,	// (0x000280c7) bg_main_sp_fs_ribbon_pane

0xa71d,	// (0x0003056f) main_sp_fs_ribbon_pane_g1

0xe938,	// (0x0003478a) main_sp_fs_ribbon_pane_t1

0xa726,	// (0x00030578) main_sp_fs_ribbon_pane_t2

0xe947,	// (0x00034799) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdeb,	// (0x00035c3d) main_sp_fs_ribbon_pane_t

0xe956,	// (0x000347a8) main_sp_fs_ribbon_scheduler_pane

0xe95e,	// (0x000347b0) bg_main_sp_fs_ribbon_pane_g1

0xe967,	// (0x000347b9) bg_main_sp_fs_ribbon_pane_g2

0xe970,	// (0x000347c2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf2,	// (0x00035c44) bg_main_sp_fs_ribbon_pane_g

0xe978,	// (0x000347ca) main_sp_fs_ribbon_scheduler_pane_g1

0xe981,	// (0x000347d3) main_sp_fs_ribbon_scheduler_pane_g2

0xe98a,	// (0x000347dc) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf9,	// (0x00035c4b) main_sp_fs_ribbon_scheduler_pane_g

0xe993,	// (0x000347e5) list_cale_mrui_pane

0xa735,	// (0x00030587) sp_fs_scroll_pane_cp07_ParamLimits

0xa735,	// (0x00030587) sp_fs_scroll_pane_cp07

0xa74d,	// (0x0003059f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa74d,	// (0x0003059f) bg_sp_fs_schedule_viewer_highlight

0xe9a0,	// (0x000347f2) list_single_sp_fs_schedule_track_pane_cp01

0xe9a8,	// (0x000347fa) list_sp_fs_schedule_track_pane

0xe9b0,	// (0x00034802) sp_fs_scroll_pane_cp06_ParamLimits

0xe9b0,	// (0x00034802) sp_fs_scroll_pane_cp06

0xc488,	// (0x000322da) bgmain_sp_fs_calendar_pane_g1

0xa75d,	// (0x000305af) list_single_cale_mrui_pane_ParamLimits

0xa75d,	// (0x000305af) list_single_cale_mrui_pane

0xe9c2,	// (0x00034814) list_single_cale_mrui_row_pane_ParamLimits

0xe9c2,	// (0x00034814) list_single_cale_mrui_row_pane

0xa77e,	// (0x000305d0) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa77e,	// (0x000305d0) list_single_cale_mrui_row_pane_g1

0xa7b6,	// (0x00030608) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa7b6,	// (0x00030608) list_single_cale_mrui_row_pane_t1

0xa7c8,	// (0x0003061a) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa7c8,	// (0x0003061a) list_single_cale_mrui_row_pane_t2

0xa82e,	// (0x00030680) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa82e,	// (0x00030680) list_single_cale_mrui_row_pane_t3

0xa85d,	// (0x000306af) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa85d,	// (0x000306af) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe07,	// (0x00035c59) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe07,	// (0x00035c59) list_single_cale_mrui_row_pane_t

0xa88c,	// (0x000306de) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa88c,	// (0x000306de) list_single_cmail_header_editor_pane_bg_cp01

0xa8b0,	// (0x00030702) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa8b0,	// (0x00030702) list_single_cmail_header_editor_pane_bg_cp02

0xa8ce,	// (0x00030720) main_radioblah_text_pane_t1_ParamLimits

0xa8ce,	// (0x00030720) main_radioblah_text_pane_t1

0xe9e5,	// (0x00034837) cam6_indi_pane_cp01

0xe9ed,	// (0x0003483f) cam6_mode_pane_cp01

0xe9f5,	// (0x00034847) cam6_pano_pane

0xe9fe,	// (0x00034850) cam6_zoom_pane_cp01

0xea06,	// (0x00034858) cam6_pano_image_pane

0xea0f,	// (0x00034861) cam6_pano_pane_g1

0xe0da,	// (0x00033f2c) cam6_pano_pane_g2

0xea18,	// (0x0003486a) cam6_pano_pane_g3

0xea21,	// (0x00034873) cam6_pano_pane_g4

0xca75,	// (0x000328c7) cam6_pano_pane_g5

0xea2a,	// (0x0003487c) cam6_pano_pane_g6

0xea32,	// (0x00034884) cam6_pano_pane_g7

0xea3a,	// (0x0003488c) cam6_pano_pane_g8

0xea43,	// (0x00034895) cam6_pano_pane_g9

0x0008,

0xfe10,	// (0x00035c62) cam6_pano_pane_g

0x2275,	// (0x000280c7) main_browser_tag_pane

0xe809,	// (0x0003465b) grid_navstr_albumart_pane

0xea4c,	// (0x0003489e) cell_navstr_albumart_pane_ParamLimits

0xea4c,	// (0x0003489e) cell_navstr_albumart_pane

0x59bc,	// (0x0002b80e) cell_navstr_albumart_pane_g1

0xbd45,	// (0x00031b97) cell_navstr_albumart_pane_g2

0xbd55,	// (0x00031ba7) cell_navstr_albumart_pane_g3

0xbd4d,	// (0x00031b9f) cell_navstr_albumart_pane_g4

0x0003,

0xfe23,	// (0x00035c75) cell_navstr_albumart_pane_g

0xa8e7,	// (0x00030739) bt_list_pane_ParamLimits

0xa8e7,	// (0x00030739) bt_list_pane

0xa8fa,	// (0x0003074c) bt_list_pane_t1

0xa909,	// (0x0003075b) bt_list_pane_t2

0x0001,

0xfe2c,	// (0x00035c7e) bt_list_pane_t

0x2275,	// (0x000280c7) main_cale_prevew_pane

0xa918,	// (0x0003076a) popup_cale_preview_window_ParamLimits

0xa918,	// (0x0003076a) popup_cale_preview_window

0x6d75,	// (0x0002cbc7) bg_popup_preview_window_pane_cp05_ParamLimits

0x6d75,	// (0x0002cbc7) bg_popup_preview_window_pane_cp05

0xea63,	// (0x000348b5) list_cale_preview_pane_ParamLimits

0xea63,	// (0x000348b5) list_cale_preview_pane

0xa92d,	// (0x0003077f) list_double_cale_preview_pane_ParamLimits

0xa92d,	// (0x0003077f) list_double_cale_preview_pane

0xa93e,	// (0x00030790) list_single_cale_preview_pane_ParamLimits

0xa93e,	// (0x00030790) list_single_cale_preview_pane

0xea6f,	// (0x000348c1) list_single_cale_preview_pane_g1

0xea77,	// (0x000348c9) list_single_cale_preview_pane_t1_ParamLimits

0xea77,	// (0x000348c9) list_single_cale_preview_pane_t1

0xa952,	// (0x000307a4) list_double_cale_preview_pane_g1

0xa95a,	// (0x000307ac) list_double_cale_preview_pane_t1_ParamLimits

0xa95a,	// (0x000307ac) list_double_cale_preview_pane_t1

0xa96f,	// (0x000307c1) list_double_cale_preview_pane_t2_ParamLimits

0xa96f,	// (0x000307c1) list_double_cale_preview_pane_t2

0x0001,

0xfe31,	// (0x00035c83) list_double_cale_preview_pane_t_ParamLimits

0xfe31,	// (0x00035c83) list_double_cale_preview_pane_t

0x2275,	// (0x000280c7) main_ezdial_pane

0x6d75,	// (0x0002cbc7) main_sp_fs_email_pane_ParamLimits

0x9f03,	// (0x0002fd55) cmail_ddmenu_btn01_pane_ParamLimits

0x9f03,	// (0x0002fd55) cmail_ddmenu_btn01_pane

0x9f16,	// (0x0002fd68) cmail_ddmenu_btn02_pane_ParamLimits

0x9f16,	// (0x0002fd68) cmail_ddmenu_btn02_pane

0x9f39,	// (0x0002fd8b) cmail_ddmenu_btn03_pane_ParamLimits

0x9f39,	// (0x0002fd8b) cmail_ddmenu_btn03_pane

0x9f5b,	// (0x0002fdad) main_sp_fs_ctrlbar_pane_ParamLimits

0x9f7c,	// (0x0002fdce) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa52e,	// (0x00030380) list_cmail_body_pane_ParamLimits

0xe739,	// (0x0003458b) bg_button_pane_cp12

0xe74e,	// (0x000345a0) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe74e,	// (0x000345a0) list_single_cmail_header_detail_pane_g3

0xe75b,	// (0x000345ad) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe75b,	// (0x000345ad) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb4,	// (0x00035c06) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb4,	// (0x00035c06) list_single_cmail_header_detail_pane_t

0xe871,	// (0x000346c3) phacti_term_pane_t2_ParamLimits

0xe871,	// (0x000346c3) phacti_term_pane_t2

0x0001,

0xfdbe,	// (0x00035c10) phacti_term_pane_t_ParamLimits

0xfdbe,	// (0x00035c10) phacti_term_pane_t

0xea8c,	// (0x000348de) aid_size_list_single_double

0xa987,	// (0x000307d9) popup_ezdial_listscroll_window

0xa99d,	// (0x000307ef) popup_number_entry_window_cp01

0x336e,	// (0x000291c0) bg_popup_call_pane_cp09

0xea98,	// (0x000348ea) ezdial_list_pane

0xeaa0,	// (0x000348f2) scroll_pane_cp23

0xbf74,	// (0x00031dc6) bg_button_pane_cp028_ParamLimits

0xbf74,	// (0x00031dc6) bg_button_pane_cp028

0xa9a9,	// (0x000307fb) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa9a9,	// (0x000307fb) cmail_ddmenu_btn01_pane_g1

0xa9b5,	// (0x00030807) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa9b5,	// (0x00030807) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe36,	// (0x00035c88) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe36,	// (0x00035c88) cmail_ddmenu_btn01_pane_g

0xeaa8,	// (0x000348fa) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaa8,	// (0x000348fa) cmail_ddmenu_btn01_pane_t1

0xbf74,	// (0x00031dc6) bg_button_pane_cp029_ParamLimits

0xbf74,	// (0x00031dc6) bg_button_pane_cp029

0xa9c1,	// (0x00030813) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa9c1,	// (0x00030813) cmail_ddmenu_btn02_pane_g1

0xa9d9,	// (0x0003082b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa9d9,	// (0x0003082b) cmail_ddmenu_btn02_pane_t1

0x6d75,	// (0x0002cbc7) bg_button_pane_cp031_ParamLimits

0x6d75,	// (0x0002cbc7) bg_button_pane_cp031

0xa9c1,	// (0x00030813) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa9c1,	// (0x00030813) cmail_ddmenu_btn03_pane_g1

0xa9d9,	// (0x0003082b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa9d9,	// (0x0003082b) cmail_ddmenu_btn03_pane_t1

0x8298,	// (0x0002e0ea) cell_dialer2_keypad_pane_t1_ParamLimits

0x82b2,	// (0x0002e104) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x82b2,	// (0x0002e104) cell_dialer2_keypad_pane_t1_copy1

0x97b5,	// (0x0002f607) ncimui_group_button_pane

0x6d75,	// (0x0002cbc7) main_sp_fs_calendar_pane_ParamLimits

0xa52e,	// (0x00030380) list_single_cmail_header_caption_pane_ParamLimits

0xe8bc,	// (0x0003470e) aid_recal_txt_sm_pane

0x2275,	// (0x000280c7) mian_recal_day_pane

0xe8fe,	// (0x00034750) popup_sp_fs_cale_preview_window_ParamLimits

0xeabd,	// (0x0003490f) list_recal_day_pane

0xeaff,	// (0x00034951) list_single_recal_day_pane_ParamLimits

0xeaff,	// (0x00034951) list_single_recal_day_pane

0xeb11,	// (0x00034963) list_single_recal_day_pane_g1_ParamLimits

0xeb11,	// (0x00034963) list_single_recal_day_pane_g1

0xeb1d,	// (0x0003496f) list_single_recal_day_pane_g2_ParamLimits

0xeb1d,	// (0x0003496f) list_single_recal_day_pane_g2

0xeb29,	// (0x0003497b) list_single_recal_day_pane_g3_ParamLimits

0xeb29,	// (0x0003497b) list_single_recal_day_pane_g3

0xa9fd,	// (0x0003084f) list_single_recal_day_pane_g4_ParamLimits

0xa9fd,	// (0x0003084f) list_single_recal_day_pane_g4

0xeb35,	// (0x00034987) list_single_recal_day_pane_g5_ParamLimits

0xeb35,	// (0x00034987) list_single_recal_day_pane_g5

0xaa15,	// (0x00030867) list_single_recal_day_pane_g6_ParamLimits

0xaa15,	// (0x00030867) list_single_recal_day_pane_g6

0x0004,

0xfe45,	// (0x00035c97) list_single_recal_day_pane_g_ParamLimits

0xfe45,	// (0x00035c97) list_single_recal_day_pane_g

0xeb49,	// (0x0003499b) list_single_recal_day_pane_t1

0xaa21,	// (0x00030873) list_single_recal_day_pane_t2

0x0001,

0xfe50,	// (0x00035ca2) list_single_recal_day_pane_t

0xaa33,	// (0x00030885) ncimui_query_button_pane_ParamLimits

0xaa33,	// (0x00030885) ncimui_query_button_pane

0xaa43,	// (0x00030895) ncimui_query_button_pane_t1_ParamLimits

0xaa43,	// (0x00030895) ncimui_query_button_pane_t1

0xeb5b,	// (0x000349ad) ncimui_query_button_pane_t2_ParamLimits

0xeb5b,	// (0x000349ad) ncimui_query_button_pane_t2

0x0001,

0xfe55,	// (0x00035ca7) ncimui_query_button_pane_t_ParamLimits

0xfe55,	// (0x00035ca7) ncimui_query_button_pane_t

0xaa56,	// (0x000308a8) query_button_pane_ParamLimits

0xaa56,	// (0x000308a8) query_button_pane

0x2275,	// (0x000280c7) bg_button_pane_cp0028

0xeb6e,	// (0x000349c0) query_button_pane_t1

0x113d,	// (0x00026f8f) main_tport_pane_ParamLimits

0xa441,	// (0x00030293) bg_popup_window_pane_cp01_ParamLimits

0xa441,	// (0x00030293) bg_popup_window_pane_cp01

0xa458,	// (0x000302aa) heading_pane_cp08_ParamLimits

0xa458,	// (0x000302aa) heading_pane_cp08

0xa469,	// (0x000302bb) heading_pane_cp07_ParamLimits

0xa469,	// (0x000302bb) heading_pane_cp07

0xe6e9,	// (0x0003453b) cell_tport_appsw_pane_g2

0x0002,

0xfda1,	// (0x00035bf3) cell_tport_appsw_pane_g

0x59b4,	// (0x0002b806) input_candi_list_open_g1

0x4a27,	// (0x0002a879) list_cale_time_pane_g6_ParamLimits

0x4a27,	// (0x0002a879) list_cale_time_pane_g6

0x73e4,	// (0x0002d236) aid_size_touch_calib_1_ParamLimits

0x73e4,	// (0x0002d236) aid_size_touch_calib_1

0x73f6,	// (0x0002d248) aid_size_touch_calib_2_ParamLimits

0x73f6,	// (0x0002d248) aid_size_touch_calib_2

0x740c,	// (0x0002d25e) aid_size_touch_calib_3_ParamLimits

0x740c,	// (0x0002d25e) aid_size_touch_calib_3

0x7424,	// (0x0002d276) aid_size_touch_calib_4_ParamLimits

0x7424,	// (0x0002d276) aid_size_touch_calib_4

0x7438,	// (0x0002d28a) main_touch_calib_button_group_pane_ParamLimits

0x7438,	// (0x0002d28a) main_touch_calib_button_group_pane

0x7450,	// (0x0002d2a2) main_touch_calib_pane_g1_ParamLimits

0x7462,	// (0x0002d2b4) main_touch_calib_pane_g2_ParamLimits

0x7474,	// (0x0002d2c6) main_touch_calib_pane_g3_ParamLimits

0x7486,	// (0x0002d2d8) main_touch_calib_pane_g4_ParamLimits

0xf760,	// (0x000355b2) main_touch_calib_pane_g_ParamLimits

0x7498,	// (0x0002d2ea) main_touch_calib_pane_t1_ParamLimits

0x74b0,	// (0x0002d302) main_touch_calib_pane_t2_ParamLimits

0x74c8,	// (0x0002d31a) main_touch_calib_pane_t3_ParamLimits

0x74da,	// (0x0002d32c) main_touch_calib_pane_t4_ParamLimits

0x74ec,	// (0x0002d33e) main_touch_calib_pane_t5_ParamLimits

0xf769,	// (0x000355bb) main_touch_calib_pane_t_ParamLimits

0xc82b,	// (0x0003267d) list_single_fp_cale_pane_g3_ParamLimits

0xc82b,	// (0x0003267d) list_single_fp_cale_pane_g3

0xb5d3,	// (0x00031425) bg_button_pane_cp012_ParamLimits

0xb5d3,	// (0x00031425) bg_vkb2_func_pane_cp03_ParamLimits

0x20ec,	// (0x00027f3e) cell_vitu2_function_top_pane_g1_ParamLimits

0xb5d3,	// (0x00031425) bg_vkb2_func_pane_cp04_ParamLimits

0x9745,	// (0x0002f597) main_ncimui_button_group_pane_ParamLimits

0x9745,	// (0x0002f597) main_ncimui_button_group_pane

0x97a3,	// (0x0002f5f5) main_ncimui_pane_t3_ParamLimits

0x97a3,	// (0x0002f5f5) main_ncimui_pane_t3

0xe81f,	// (0x00034671) phacti_button_group_pane

0xea8c,	// (0x000348de) aid_size_list_single_double_ParamLimits

0xa987,	// (0x000307d9) popup_ezdial_listscroll_window_ParamLimits

0xa99d,	// (0x000307ef) popup_number_entry_window_cp01_ParamLimits

0xaa68,	// (0x000308ba) phacti_button_pane_ParamLimits

0xaa68,	// (0x000308ba) phacti_button_pane

0x2275,	// (0x000280c7) bg_button_pane_cp14

0xeb7c,	// (0x000349ce) phacti_button_pane_t1

0xaa77,	// (0x000308c9) main_touch_calib_button_pane_ParamLimits

0xaa77,	// (0x000308c9) main_touch_calib_button_pane

0x2c35,	// (0x00028a87) bg_button_pane_cp18_ParamLimits

0x2c35,	// (0x00028a87) bg_button_pane_cp18

0xaa92,	// (0x000308e4) main_touch_calib_button_pane_t1_ParamLimits

0xaa92,	// (0x000308e4) main_touch_calib_button_pane_t1

0xaaa8,	// (0x000308fa) main_touch_calib_button_pane_t2_ParamLimits

0xaaa8,	// (0x000308fa) main_touch_calib_button_pane_t2

0x0001,

0xfe5a,	// (0x00035cac) main_touch_calib_button_pane_t_ParamLimits

0xfe5a,	// (0x00035cac) main_touch_calib_button_pane_t

0x2275,	// (0x000280c7) cell_ncimui_button_pane

0x2275,	// (0x000280c7) bg_button_pane_cp032

0xeb8a,	// (0x000349dc) cell_ncimui_button_pane_t1

0xd052,	// (0x00032ea4) image3_infobar_pane_ParamLimits

0xd052,	// (0x00032ea4) image3_infobar_pane

0x9b3e,	// (0x0002f990) fs_bigclock_status_pane_ParamLimits

0x9b3e,	// (0x0002f990) fs_bigclock_status_pane

0x9b4b,	// (0x0002f99d) main_fs_bigclock_clock_pane_ParamLimits

0x9b4b,	// (0x0002f99d) main_fs_bigclock_clock_pane

0x9b6d,	// (0x0002f9bf) main_fs_bigclock_indi_pane_ParamLimits

0x9b6d,	// (0x0002f9bf) main_fs_bigclock_indi_pane

0x9b97,	// (0x0002f9e9) main_fs_bigclock_swipe_pane_ParamLimits

0x9b97,	// (0x0002f9e9) main_fs_bigclock_swipe_pane

0x2275,	// (0x000280c7) main_fs_clock_dumped_data

0xe1e7,	// (0x00034039) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe1e7,	// (0x00034039) list_single_fs_bigclock_indicator_pane_g1

0xe201,	// (0x00034053) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe201,	// (0x00034053) list_single_fs_bigclock_indicator_pane_g2

0xe21b,	// (0x0003406d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe21b,	// (0x0003406d) list_single_fs_bigclock_indicator_pane_g3

0xe235,	// (0x00034087) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe235,	// (0x00034087) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x00035ad9) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x00035ad9) list_single_fs_bigclock_indicator_pane_g

0xe25e,	// (0x000340b0) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe25e,	// (0x000340b0) list_single_fs_bigclock_indicator_pane_t1

0xe286,	// (0x000340d8) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe286,	// (0x000340d8) list_single_fs_bigclock_indicator_pane_t2

0xe2ae,	// (0x00034100) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe2ae,	// (0x00034100) list_single_fs_bigclock_indicator_pane_t3

0xe2d6,	// (0x00034128) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe2d6,	// (0x00034128) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x00035ae4) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x00035ae4) list_single_fs_bigclock_indicator_pane_t

0xeb98,	// (0x000349ea) image3_infobar_fav_pane_ParamLimits

0xeb98,	// (0x000349ea) image3_infobar_fav_pane

0xeba8,	// (0x000349fa) image3_infobar_loc_pane_ParamLimits

0xeba8,	// (0x000349fa) image3_infobar_loc_pane

0xebbc,	// (0x00034a0e) image3_infobar_time_pane_ParamLimits

0xebbc,	// (0x00034a0e) image3_infobar_time_pane

0xc488,	// (0x000322da) image3_infobar_time_pane_g1

0xebcc,	// (0x00034a1e) image3_infobar_time_pane_t1

0xc488,	// (0x000322da) image3_infobar_loc_pane_g1

0xebda,	// (0x00034a2c) image3_infobar_loc_pane_g2

0x0001,

0xfe5f,	// (0x00035cb1) image3_infobar_loc_pane_g

0xebe2,	// (0x00034a34) image3_infobar_loc_pane_t1

0xc488,	// (0x000322da) image3_infobar_fav_pane_g1

0xebf0,	// (0x00034a42) image3_infobar_fav_pane_g2

0x0001,

0xfe64,	// (0x00035cb6) image3_infobar_fav_pane_g

0xebf8,	// (0x00034a4a) fs_bigclock_status_battery_pane

0xec01,	// (0x00034a53) fs_bigclock_status_signal_pane

0xec0a,	// (0x00034a5c) fs_bigclock_status_title_pane

0xec13,	// (0x00034a65) fs_bigclock_status_signal_pane_g1

0xec1c,	// (0x00034a6e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe69,	// (0x00035cbb) fs_bigclock_status_signal_pane_g

0xec24,	// (0x00034a76) fs_bigclock_status_battery_pane_g1

0xec2d,	// (0x00034a7f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6e,	// (0x00035cc0) fs_bigclock_status_battery_pane_g

0xec35,	// (0x00034a87) fs_bigclock_status_title_pane_t1

0xaac6,	// (0x00030918) main_fs_bigclock_clock_pane_g1

0xaad8,	// (0x0003092a) main_fs_bigclock_clock_pane_g2

0xaae9,	// (0x0003093b) main_fs_bigclock_clock_pane_g3

0xaae9,	// (0x0003093b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe73,	// (0x00035cc5) main_fs_bigclock_clock_pane_g

0xaafc,	// (0x0003094e) main_fs_bigclock_clock_pane_t1

0xab17,	// (0x00030969) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7c,	// (0x00035cce) main_fs_bigclock_clock_pane_t

0xec43,	// (0x00034a95) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec43,	// (0x00034a95) list_single_fs_bigclock_indicator_pane

0xec54,	// (0x00034aa6) list_single_fs_bigclock_pane_ParamLimits

0xec54,	// (0x00034aa6) list_single_fs_bigclock_pane

0xec7a,	// (0x00034acc) main_fs_bigclock_indicator_pane_t1

0xec89,	// (0x00034adb) list_single_fs_bigclock_pane_g1

0xec91,	// (0x00034ae3) list_single_fs_bigclock_pane_t1

0xc488,	// (0x000322da) main_fs_bigclock_swipe_pane_g1

0xecd1,	// (0x00034b23) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8d,	// (0x00035cdf) main_fs_bigclock_swipe_pane_g

0xecd9,	// (0x00034b2b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecd9,	// (0x00034b2b) main_fs_bigclock_swipe_pane_t1

0x4e07,	// (0x0002ac59) call_type_pane_ParamLimits

0x2275,	// (0x000280c7) main_btmg_pane

0xa7aa,	// (0x000305fc) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa7aa,	// (0x000305fc) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe00,	// (0x00035c52) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe00,	// (0x00035c52) list_single_cale_mrui_row_pane_g

0xeae6,	// (0x00034938) list_recal_vselct_arw_lo_pane

0xeaee,	// (0x00034940) list_recal_vselct_arw_up_pane

0xeaf6,	// (0x00034948) list_recal_vselct_pane

0xecf6,	// (0x00034b48) btmg_button_pane

0xab77,	// (0x000309c9) main_btmg_pane_g1

0x2275,	// (0x000280c7) bg_button_pane_cp044

0xecfe,	// (0x00034b50) btmg_button_pane_t1

0xbf60,	// (0x00031db2) aid_listscroll_gen

0x6d75,	// (0x0002cbc7) main_cntbar_detail_pane

0xe70f,	// (0x00034561) list_cmail_folder_pane

0xe71f,	// (0x00034571) sp_fs_scroll_pane_cp03_ParamLimits

0xed0c,	// (0x00034b5e) list_single_fs_dyc_pane_cp01_ParamLimits

0xed0c,	// (0x00034b5e) list_single_fs_dyc_pane_cp01

0xed22,	// (0x00034b74) aid_size_cmail_indent

0xed2b,	// (0x00034b7d) list_single_dyc_row_pane_cp01

0xaba7,	// (0x000309f9) cntbar_detail_list_pane_ParamLimits

0xaba7,	// (0x000309f9) cntbar_detail_list_pane

0xabed,	// (0x00030a3f) main_cntbar_detail_cont_pane_ParamLimits

0xabed,	// (0x00030a3f) main_cntbar_detail_cont_pane

0xac01,	// (0x00030a53) scroll_pane_cp032_ParamLimits

0xac01,	// (0x00030a53) scroll_pane_cp032

0xac0d,	// (0x00030a5f) cntbar_detail_list_event_pane_ParamLimits

0xac0d,	// (0x00030a5f) cntbar_detail_list_event_pane

0xabb7,	// (0x00030a09) cntbar_detail_list_shct_pane

0xed34,	// (0x00034b86) aid_list_gen

0x2e05,	// (0x00028c57) aid_scroll

0xd879,	// (0x000336cb) aid_size_touch_scroll_bar

0xd942,	// (0x00033794) aid_list_double

0xac1e,	// (0x00030a70) aid_list_single

0xd939,	// (0x0003378b) aid_list_single_lg

0xac27,	// (0x00030a79) aid_list_z_g_a_sm

0xac2f,	// (0x00030a81) aid_list_z_g_d

0xac37,	// (0x00030a89) aid_txt_z_prm

0xac45,	// (0x00030a97) aid_txt_z_prm_cp01

0xac53,	// (0x00030aa5) aid_txt_z_sec

0xac61,	// (0x00030ab3) main_cntbar_detail_cont_pane_g1_ParamLimits

0xac61,	// (0x00030ab3) main_cntbar_detail_cont_pane_g1

0xac75,	// (0x00030ac7) main_cntbar_detail_cont_pane_g2_ParamLimits

0xac75,	// (0x00030ac7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe92,	// (0x00035ce4) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe92,	// (0x00035ce4) main_cntbar_detail_cont_pane_g

0xed3d,	// (0x00034b8f) main_cntbar_detail_cont_pane_t1

0xed4b,	// (0x00034b9d) main_cntbar_detail_cont_pane_t2

0xed59,	// (0x00034bab) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe97,	// (0x00035ce9) main_cntbar_detail_cont_pane_t

0xac85,	// (0x00030ad7) cell_cntbar_detail_list_shct_pane_ParamLimits

0xac85,	// (0x00030ad7) cell_cntbar_detail_list_shct_pane

0xed67,	// (0x00034bb9) cntbar_detail_list_shct_pane_g1

0xed70,	// (0x00034bc2) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9e,	// (0x00035cf0) cntbar_detail_list_shct_pane_g

0xac97,	// (0x00030ae9) cntbar_detail_list_event_pane_g1_ParamLimits

0xac97,	// (0x00030ae9) cntbar_detail_list_event_pane_g1

0xaca3,	// (0x00030af5) cntbar_detail_list_event_pane_g2_ParamLimits

0xaca3,	// (0x00030af5) cntbar_detail_list_event_pane_g2

0x0005,

0xfea3,	// (0x00035cf5) cntbar_detail_list_event_pane_g_ParamLimits

0xfea3,	// (0x00035cf5) cntbar_detail_list_event_pane_g

0xad0f,	// (0x00030b61) cntbar_detail_list_event_pane_t1_ParamLimits

0xad0f,	// (0x00030b61) cntbar_detail_list_event_pane_t1

0xad24,	// (0x00030b76) cntbar_detail_list_event_pane_t2_ParamLimits

0xad24,	// (0x00030b76) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb0,	// (0x00035d02) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb0,	// (0x00035d02) cntbar_detail_list_event_pane_t

0xc488,	// (0x000322da) cell_cntbar_detail_list_shct_pane_g1

0x5405,	// (0x0002b257) navi_pane_mv_g3

0x6d75,	// (0x0002cbc7) main_cntbar_detail_pane_ParamLimits

0x2275,	// (0x000280c7) main_notif_wgt_pane

0xcda6,	// (0x00032bf8) aid_tch_main_mp4_pane_g4

0xcfc8,	// (0x00032e1a) popup_slider_window_cp02

0xeadc,	// (0x0003492e) list_recal_day_event_pane

0xab7f,	// (0x000309d1) cntbar_detail_btn_pane_ParamLimits

0xab7f,	// (0x000309d1) cntbar_detail_btn_pane

0xab92,	// (0x000309e4) cntbar_detail_btn_pane_cp01_ParamLimits

0xab92,	// (0x000309e4) cntbar_detail_btn_pane_cp01

0xabb7,	// (0x00030a09) cntbar_detail_list_shct_pane_ParamLimits

0xabc7,	// (0x00030a19) cntbar_detail_pane_g1_ParamLimits

0xabc7,	// (0x00030a19) cntbar_detail_pane_g1

0xabd7,	// (0x00030a29) cntbar_detail_pane_t1_ParamLimits

0xabd7,	// (0x00030a29) cntbar_detail_pane_t1

0xacaf,	// (0x00030b01) cntbar_detail_list_event_pane_g3_ParamLimits

0xacaf,	// (0x00030b01) cntbar_detail_list_event_pane_g3

0xacc7,	// (0x00030b19) cntbar_detail_list_event_pane_g4_ParamLimits

0xacc7,	// (0x00030b19) cntbar_detail_list_event_pane_g4

0xacdf,	// (0x00030b31) cntbar_detail_list_event_pane_g5_ParamLimits

0xacdf,	// (0x00030b31) cntbar_detail_list_event_pane_g5

0xacf7,	// (0x00030b49) cntbar_detail_list_event_pane_g6_ParamLimits

0xacf7,	// (0x00030b49) cntbar_detail_list_event_pane_g6

0xad39,	// (0x00030b8b) cntbar_detail_list_event_pane_t3_ParamLimits

0xad39,	// (0x00030b8b) cntbar_detail_list_event_pane_t3

0xad4b,	// (0x00030b9d) popup_notif_wgt_window_ParamLimits

0xad4b,	// (0x00030b9d) popup_notif_wgt_window

0xad60,	// (0x00030bb2) popup_submenu_window_cp01_ParamLimits

0xad60,	// (0x00030bb2) popup_submenu_window_cp01

0x336e,	// (0x000291c0) bg_popup_window_pane_cp10

0xed79,	// (0x00034bcb) listscroll_notif_wgt_pane

0xed8a,	// (0x00034bdc) list_notif_wgt_window

0xed93,	// (0x00034be5) scroll_pane_cp033

0xad70,	// (0x00030bc2) list_notif_wgt_row_pane_ParamLimits

0xad70,	// (0x00030bc2) list_notif_wgt_row_pane

0xed9c,	// (0x00034bee) aid_size_list_notif_wgt_del

0xeda9,	// (0x00034bfb) list_notif_wgt_row_pane_g1

0xedb5,	// (0x00034c07) list_notif_wgt_row_pane_g2

0xedc9,	// (0x00034c1b) list_notif_wgt_row_pane_g3

0x0002,

0xfeb7,	// (0x00035d09) list_notif_wgt_row_pane_g

0xedd6,	// (0x00034c28) list_notif_wgt_row_pane_t1

0xedec,	// (0x00034c3e) list_notif_wgt_row_pane_t2

0xedfe,	// (0x00034c50) list_notif_wgt_row_pane_t3

0x0002,

0xfebe,	// (0x00035d10) list_notif_wgt_row_pane_t

0xd585,	// (0x000333d7) list_recal_day_event_pane_g1

0xee10,	// (0x00034c62) list_recal_day_event_pane_t1

0x2275,	// (0x000280c7) bg_button_pane_cp045

0xad80,	// (0x00030bd2) cntbar_detail_btn_pane_t1

0xbf74,	// (0x00031dc6) main_callh_pane_ParamLimits

0xbf74,	// (0x00031dc6) main_callh_pane

0x2275,	// (0x000280c7) main_coverflow0_pane

0x2275,	// (0x000280c7) main_wgtman_pane

0x9bab,	// (0x0002f9fd) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9bab,	// (0x0002f9fd) main_fs_bigclock_unlock_btn_pane

0xe6e1,	// (0x00034533) bg_button_pane_cp16

0xe6f1,	// (0x00034543) cell_tport_appsw_pane_g3

0xad8e,	// (0x00030be0) cf0_flow_pane_ParamLimits

0xad8e,	// (0x00030be0) cf0_flow_pane

0xee1f,	// (0x00034c71) listscroll_cf0_pane

0xee28,	// (0x00034c7a) main_cf0_pane_g1

0xada3,	// (0x00030bf5) main_cf0_pane_t1_ParamLimits

0xada3,	// (0x00030bf5) main_cf0_pane_t1

0xadb8,	// (0x00030c0a) main_cf0_pane_t2_ParamLimits

0xadb8,	// (0x00030c0a) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x00035d1c) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x00035d1c) main_cf0_pane_t

0xee3a,	// (0x00034c8c) scroll_pane_cp11

0xadcd,	// (0x00030c1f) cf0_flow_pane_g1

0xadd5,	// (0x00030c27) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x00035d21) cf0_flow_pane_g

0xaddd,	// (0x00030c2f) cf0_flow_pane_t1

0x2275,	// (0x000280c7) main_call6_pane

0x2275,	// (0x000280c7) main_calllock_pane

0x21e2,	// (0x00028034) call6_btn_grp_pane_ParamLimits

0x21e2,	// (0x00028034) call6_btn_grp_pane

0x21f8,	// (0x0002804a) call6_pane_g1_ParamLimits

0x21f8,	// (0x0002804a) call6_pane_g1

0x220b,	// (0x0002805d) popup_call6_1st_window_ParamLimits

0x220b,	// (0x0002805d) popup_call6_1st_window

0x221a,	// (0x0002806c) popup_call6_2nd_window_ParamLimits

0x221a,	// (0x0002806c) popup_call6_2nd_window

0x2229,	// (0x0002807b) cell_call6_btn_pane_ParamLimits

0x2229,	// (0x0002807b) cell_call6_btn_pane

0x336e,	// (0x000291c0) bg_popup_call2_in_pane_cp03

0xee43,	// (0x00034c95) popup_call6_1st_window_g1

0xee4b,	// (0x00034c9d) popup_call6_1st_window_g2

0xee53,	// (0x00034ca5) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x00035d26) popup_call6_1st_window_g

0xee5b,	// (0x00034cad) popup_call6_1st_window_t1

0xee6a,	// (0x00034cbc) popup_call6_1st_window_t2

0xee78,	// (0x00034cca) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x00035d2d) popup_call6_1st_window_t

0x336e,	// (0x000291c0) bg_popup_call2_in_pane_cp04

0xee43,	// (0x00034c95) popup_call6_2nd_window_g1

0xee4b,	// (0x00034c9d) popup_call6_2nd_window_g2

0xee53,	// (0x00034ca5) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x00035d26) popup_call6_2nd_window_g

0xee5b,	// (0x00034cad) popup_call6_2nd_window_t1

0xb5e1,	// (0x00031433) bg_button_pane_cp15

0xee86,	// (0x00034cd8) cell_call6_btn_pane_g1

0xee8f,	// (0x00034ce1) cell_call6_btn_pane_t1

0xadeb,	// (0x00030c3d) listscroll_wgtman_pane_ParamLimits

0xadeb,	// (0x00030c3d) listscroll_wgtman_pane

0xae0c,	// (0x00030c5e) wgtman_btn_pane_ParamLimits

0xae0c,	// (0x00030c5e) wgtman_btn_pane

0x504d,	// (0x0002ae9f) aid_scroll_copy1

0xee9e,	// (0x00034cf0) list_wgtman_pane

0xae4c,	// (0x00030c9e) wgtman_btn_pane_g1_ParamLimits

0xae4c,	// (0x00030c9e) wgtman_btn_pane_g1

0xae78,	// (0x00030cca) wgtman_btn_pane_t1_ParamLimits

0xae78,	// (0x00030cca) wgtman_btn_pane_t1

0xeea8,	// (0x00034cfa) wgtman_btn_pane_t2_ParamLimits

0xeea8,	// (0x00034cfa) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x00035d34) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x00035d34) wgtman_btn_pane_t

0xaeb5,	// (0x00030d07) listrow_wgtman_pane_ParamLimits

0xaeb5,	// (0x00030d07) listrow_wgtman_pane

0xaec6,	// (0x00030d18) listrow_wgtman_pane_g1

0xaed3,	// (0x00030d25) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x00035d39) listrow_wgtman_pane_g

0xaeeb,	// (0x00030d3d) listrow_wgtman_pane_t1

0xaf03,	// (0x00030d55) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x00035d3e) listrow_wgtman_pane_t

0xaf29,	// (0x00030d7b) wait_bar_pane_cp09

0xeebf,	// (0x00034d11) main_calllock_btn_pane

0xeec7,	// (0x00034d19) main_calllock_pane_g1

0x2275,	// (0x000280c7) bg_button_pane_cp17

0xeed0,	// (0x00034d22) main_calllock_btn_pane_g1

0xeed9,	// (0x00034d2b) main_calllock_btn_pane_t1

0x2275,	// (0x000280c7) main_dialer3_pane

0x2275,	// (0x000280c7) main_fmrd2_pane

0xc488,	// (0x000322da) main_fs_bigclock_unlock_btn_pane_g1

0xeef0,	// (0x00034d42) main_fs_bigclock_unlock_btn_pane_t1

0xaf3b,	// (0x00030d8d) area_fmrd2_info_pane_ParamLimits

0xaf3b,	// (0x00030d8d) area_fmrd2_info_pane

0xaf4a,	// (0x00030d9c) area_fmrd2_visual_pane_ParamLimits

0xaf4a,	// (0x00030d9c) area_fmrd2_visual_pane

0xaf58,	// (0x00030daa) fmrd2_indi_pane_ParamLimits

0xaf58,	// (0x00030daa) fmrd2_indi_pane

0xaf65,	// (0x00030db7) area_fmrd2_visual_pane_g1

0xaf6d,	// (0x00030dbf) area_fmrd2_visual_pane_t1

0xaf7b,	// (0x00030dcd) area_fmrd2_visual_pane_t2

0xaf89,	// (0x00030ddb) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x00035d48) area_fmrd2_visual_pane_t

0xaf97,	// (0x00030de9) area_fmrd2_info_pane_g1

0xaf9f,	// (0x00030df1) area_fmrd2_info_pane_t1

0xafad,	// (0x00030dff) area_fmrd2_info_pane_t2

0xafbb,	// (0x00030e0d) area_fmrd2_info_pane_t3

0xafc9,	// (0x00030e1b) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x00035d4f) area_fmrd2_info_pane_t

0xafd7,	// (0x00030e29) fmrd2_indi_pane_t1

0xafe5,	// (0x00030e37) fmrd2_indi_pane_t2

0xaff3,	// (0x00030e45) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x00035d58) fmrd2_indi_pane_t

0xe244,	// (0x00034096) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe244,	// (0x00034096) list_single_fs_bigclock_indicator_pane_g5

0xe2f2,	// (0x00034144) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe2f2,	// (0x00034144) list_single_fs_bigclock_indicator_pane_t5

0xa677,	// (0x000304c9) aid_cell_bcale_month_pane_ParamLimits

0xa677,	// (0x000304c9) aid_cell_bcale_month_pane

0xa695,	// (0x000304e7) bcale_month_pane_ParamLimits

0xa695,	// (0x000304e7) bcale_month_pane

0xa6ad,	// (0x000304ff) bcale_preview_pane_ParamLimits

0xa6ad,	// (0x000304ff) bcale_preview_pane

0xec91,	// (0x00034ae3) list_single_fs_bigclock_pane_t1_ParamLimits

0xecad,	// (0x00034aff) list_single_fs_bigclock_pane_t2_ParamLimits

0xecad,	// (0x00034aff) list_single_fs_bigclock_pane_t2

0x0001,

0xfe88,	// (0x00035cda) list_single_fs_bigclock_pane_t_ParamLimits

0xfe88,	// (0x00035cda) list_single_fs_bigclock_pane_t

0xeee8,	// (0x00034d3a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x00035d43) main_fs_bigclock_unlock_btn_pane_g

0xb001,	// (0x00030e53) aid_dia3_key_size_ParamLimits

0xb001,	// (0x00030e53) aid_dia3_key_size

0xb010,	// (0x00030e62) aid_dia3_listrow_size_ParamLimits

0xb010,	// (0x00030e62) aid_dia3_listrow_size

0xb023,	// (0x00030e75) dia3_keypad_fun_pane_ParamLimits

0xb023,	// (0x00030e75) dia3_keypad_fun_pane

0xb037,	// (0x00030e89) dia3_keypad_num_pane_ParamLimits

0xb037,	// (0x00030e89) dia3_keypad_num_pane

0xb048,	// (0x00030e9a) dia3_listscroll_pane_ParamLimits

0xb048,	// (0x00030e9a) dia3_listscroll_pane

0xb059,	// (0x00030eab) dia3_numentry_pane_ParamLimits

0xb059,	// (0x00030eab) dia3_numentry_pane

0xeefe,	// (0x00034d50) dia3_list_pane

0xef07,	// (0x00034d59) scroll_pane_cp12

0x2275,	// (0x000280c7) bg_dia3_numentry_pane

0xb06b,	// (0x00030ebd) dia3_numentry_pane_t1

0xb07a,	// (0x00030ecc) cell_dia3_key_num_pane

0xb082,	// (0x00030ed4) cell_dia3_key0_fun_pane_ParamLimits

0xb082,	// (0x00030ed4) cell_dia3_key0_fun_pane

0xb096,	// (0x00030ee8) cell_dia3_key1_fun_pane_ParamLimits

0xb096,	// (0x00030ee8) cell_dia3_key1_fun_pane

0xb0ad,	// (0x00030eff) dia3_listrow_pane

0xdf45,	// (0x00033d97) bg_dia3_numentry_pane_g1

0x2275,	// (0x000280c7) bg_button_pane_cp21

0xef10,	// (0x00034d62) cell_dia3_key_num_pane_t1

0xef1e,	// (0x00034d70) cell_dia3_key_num_pane_t2

0xef2d,	// (0x00034d7f) cell_dia3_key_num_pane_t3

0xef3c,	// (0x00034d8e) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x00035d5f) cell_dia3_key_num_pane_t

0x2275,	// (0x000280c7) bg_button_pane_cp19

0xef4b,	// (0x00034d9d) cell_dia3_key0_fun_pane_g1

0x2275,	// (0x000280c7) bg_button_pane_cp20

0xb0bf,	// (0x00030f11) cell_dia3_key1_fun_pane_g1

0xb0c7,	// (0x00030f19) area_left_week_number_pane

0xb0d3,	// (0x00030f25) area_top_day_name_pane

0xb0e4,	// (0x00030f36) frame_month_view_pane

0xef53,	// (0x00034da5) grid_month_view_pane

0xb0f5,	// (0x00030f47) cell_top_day_name_pane_ParamLimits

0xb0f5,	// (0x00030f47) cell_top_day_name_pane

0xb118,	// (0x00030f6a) cell_area_left_week_number_pane_ParamLimits

0xb118,	// (0x00030f6a) cell_area_left_week_number_pane

0xb12c,	// (0x00030f7e) cell_month_view_pane_ParamLimits

0xb12c,	// (0x00030f7e) cell_month_view_pane

0xef61,	// (0x00034db3) frm_month_g1

0xb151,	// (0x00030fa3) frm_month_g2

0xb162,	// (0x00030fb4) frm_month_g3

0xb173,	// (0x00030fc5) frm_month_g4

0xb184,	// (0x00030fd6) frm_month_g5

0xb195,	// (0x00030fe7) frm_month_g6

0xb1a6,	// (0x00030ff8) frm_month_g7

0xef6e,	// (0x00034dc0) frm_month_g8

0xb1b7,	// (0x00031009) frm_month_g9

0xb1c7,	// (0x00031019) frm_month_g10

0xb1d7,	// (0x00031029) frm_month_g11

0xb1e7,	// (0x00031039) frm_month_g12

0xb1f7,	// (0x00031049) frm_month_g13

0xb207,	// (0x00031059) frm_month_g14

0xb217,	// (0x00031069) frm_month_g15

0xb229,	// (0x0003107b) frm_month_g16

0x000f,

0xff16,	// (0x00035d68) frm_month_g

0xef7b,	// (0x00034dcd) cell_top_day_name_pane_t1

0xb23b,	// (0x0003108d) cell_area_left_week_number_pane_g1

0xb247,	// (0x00031099) cell_area_left_week_number_pane_t1

0xc6b7,	// (0x00032509) cell_month_view_pane_g1

0xb25a,	// (0x000310ac) cell_month_view_pane_t1

0x2275,	// (0x000280c7) main_fps_pane

0xe4d6,	// (0x00034328) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe4d6,	// (0x00034328) cmail_ddmenu_btn02_pane_cp1

0xe4f2,	// (0x00034344) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe4f2,	// (0x00034344) cmail_ddmenu_btn02_pane_cp2

0xa9cd,	// (0x0003081f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa9cd,	// (0x0003081f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3b,	// (0x00035c8d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3b,	// (0x00035c8d) cmail_ddmenu_btn02_pane_g

0xa9eb,	// (0x0003083d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa9eb,	// (0x0003083d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe40,	// (0x00035c92) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe40,	// (0x00035c92) cmail_ddmenu_btn02_pane_t

0xb26d,	// (0x000310bf) fps_text_pane_ParamLimits

0xb26d,	// (0x000310bf) fps_text_pane

0xb283,	// (0x000310d5) main_fps_pane_g1_ParamLimits

0xb283,	// (0x000310d5) main_fps_pane_g1

0xb299,	// (0x000310eb) wait_bar_pane_cp010_ParamLimits

0xb299,	// (0x000310eb) wait_bar_pane_cp010

0xb2aa,	// (0x000310fc) fps_text_pane_t1_ParamLimits

0xb2aa,	// (0x000310fc) fps_text_pane_t1

0xd153,	// (0x00032fa5) cam4_image_uncrop_pane_g1

0xd15c,	// (0x00032fae) cam4_image_uncrop_pane_g2

0x8348,	// (0x0002e19a) cam4_image_uncrop_pane_g3

0x8351,	// (0x0002e1a3) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x00035753) cam4_image_uncrop_pane_g

0xb0ad,	// (0x00030eff) dia3_listrow_pane_ParamLimits

0x2275,	// (0x000280c7) main_phob2_pane

0xa4c8,	// (0x0003031a) cell_tport_appsw_pane_cp02_ParamLimits

0xa4c8,	// (0x0003031a) cell_tport_appsw_pane_cp02

0xa4d8,	// (0x0003032a) cell_tport_appsw_pane_cp03_ParamLimits

0xa4d8,	// (0x0003032a) cell_tport_appsw_pane_cp03

0x2275,	// (0x000280c7) phob2_contact_card_pane

0x2275,	// (0x000280c7) phob2_listscroll_pane

0xef8e,	// (0x00034de0) phob2_list_pane

0xef96,	// (0x00034de8) scroll_pane_cp034

0xb2c2,	// (0x00031114) phob2_cc_data_pane_ParamLimits

0xb2c2,	// (0x00031114) phob2_cc_data_pane

0xb2df,	// (0x00031131) phob2_cc_listscroll_pane_ParamLimits

0xb2df,	// (0x00031131) phob2_cc_listscroll_pane

0xaeb5,	// (0x00030d07) list_double_large_graphic_phob2_pane_ParamLimits

0xaeb5,	// (0x00030d07) list_double_large_graphic_phob2_pane

0xb2fb,	// (0x0003114d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb2fb,	// (0x0003114d) list_double_large_graphic_phob2_pane_g1

0xb311,	// (0x00031163) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xb311,	// (0x00031163) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x00035d89) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x00035d89) list_double_large_graphic_phob2_pane_g

0xb31d,	// (0x0003116f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xb31d,	// (0x0003116f) list_double_large_graphic_phob2_pane_t1

0xb333,	// (0x00031185) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xb333,	// (0x00031185) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x00035d8e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x00035d8e) list_double_large_graphic_phob2_pane_t

0x2275,	// (0x000280c7) list_highlight_pane_cp024

0xb348,	// (0x0003119a) phob2_cc_button_pane

0xb350,	// (0x000311a2) phob2_cc_data_pane_g1_ParamLimits

0xb350,	// (0x000311a2) phob2_cc_data_pane_g1

0xb365,	// (0x000311b7) phob2_cc_data_pane_g2_ParamLimits

0xb365,	// (0x000311b7) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x00035d93) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x00035d93) phob2_cc_data_pane_g

0xb375,	// (0x000311c7) phob2_cc_data_pane_t1_ParamLimits

0xb375,	// (0x000311c7) phob2_cc_data_pane_t1

0xb38d,	// (0x000311df) phob2_cc_data_pane_t2_ParamLimits

0xb38d,	// (0x000311df) phob2_cc_data_pane_t2

0xb3a5,	// (0x000311f7) phob2_cc_data_pane_t3_ParamLimits

0xb3a5,	// (0x000311f7) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x00035d98) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x00035d98) phob2_cc_data_pane_t

0xef9e,	// (0x00034df0) phob2_cc_list_pane_ParamLimits

0xef9e,	// (0x00034df0) phob2_cc_list_pane

0xde62,	// (0x00033cb4) scroll_pane_cp035_ParamLimits

0xde62,	// (0x00033cb4) scroll_pane_cp035

0x6d75,	// (0x0002cbc7) bg_button_pane_cp033

0xefaa,	// (0x00034dfc) phob2_cc_button_pane_g1

0xefb6,	// (0x00034e08) phob2_cc_button_pane_t1

0xefcb,	// (0x00034e1d) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x00035d9f) phob2_cc_button_pane_t

0xb3bd,	// (0x0003120f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb3bd,	// (0x0003120f) list_double_large_graphic_phob2_cc_pane

0xb3eb,	// (0x0003123d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb3eb,	// (0x0003123d) list_double_large_graphic_phob2_cc_pane_g1

0xb3f7,	// (0x00031249) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb3f7,	// (0x00031249) list_double_large_graphic_phob2_cc_pane_g2

0xb403,	// (0x00031255) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb403,	// (0x00031255) list_double_large_graphic_phob2_cc_pane_g3

0xb40f,	// (0x00031261) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb40f,	// (0x00031261) list_double_large_graphic_phob2_cc_pane_g4

0xb41b,	// (0x0003126d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb41b,	// (0x0003126d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x00035da4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x00035da4) list_double_large_graphic_phob2_cc_pane_g

0xb427,	// (0x00031279) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb427,	// (0x00031279) list_double_large_graphic_phob2_cc_pane_t1

0xb450,	// (0x000312a2) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb450,	// (0x000312a2) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x00035daf) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x00035daf) list_double_large_graphic_phob2_cc_pane_t

0xefdd,	// (0x00034e2f) list_highlight_pane_cp025_ParamLimits

0xefdd,	// (0x00034e2f) list_highlight_pane_cp025

0x6d75,	// (0x0002cbc7) bg_button_pane_cp033_ParamLimits

0xefaa,	// (0x00034dfc) phob2_cc_button_pane_g1_ParamLimits

0xefb6,	// (0x00034e08) phob2_cc_button_pane_t1_ParamLimits

0xefcb,	// (0x00034e1d) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x00035d9f) phob2_cc_button_pane_t_ParamLimits

0x22b2,	// (0x00028104) popup_wgtman_window

0xdf65,	// (0x00033db7) scroll_pane_cp038

0xae2e,	// (0x00030c80) wgtman_btn_pane_cp_01_ParamLimits

0xae2e,	// (0x00030c80) wgtman_btn_pane_cp_01

0xefeb,	// (0x00034e3d) wgtman_content_pane

0xeff4,	// (0x00034e46) wgtman_heading_pane

0x2275,	// (0x000280c7) bg_heading_pane_cp02

0xeffd,	// (0x00034e4f) wgtman_heading_pane_g1

0xf005,	// (0x00034e57) wgtman_heading_pane_t1

0xf013,	// (0x00034e65) scroll_pane_cp036

0xf01b,	// (0x00034e6d) wgtman_list_pane

0xf023,	// (0x00034e75) wgtman_list_pane_t1_ParamLimits

0xf023,	// (0x00034e75) wgtman_list_pane_t1

0xd141,	// (0x00032f93) cam4_grid_pane

0x8b35,	// (0x0002e987) bg_button_pane_cp015_ParamLimits

0x8b45,	// (0x0002e997) bg_button_pane_cp016_ParamLimits

0x8b57,	// (0x0002e9a9) bg_button_pane_cp017_ParamLimits

0x8ba7,	// (0x0002e9f9) popup_vitu2_query_window_g3_ParamLimits

0x8ba7,	// (0x0002e9f9) popup_vitu2_query_window_g3

0x8c5a,	// (0x0002eaac) popup_vitu2_query_window_t6_ParamLimits

0x8c5a,	// (0x0002eaac) popup_vitu2_query_window_t6

0x8c85,	// (0x0002ead7) popup_vitu2_query_window_t7_ParamLimits

0x8c85,	// (0x0002ead7) popup_vitu2_query_window_t7

0xd153,	// (0x00032fa5) cam4_grid_pane_g1

0xd15c,	// (0x00032fae) cam4_grid_pane_g2

0xf03a,	// (0x00034e8c) cam4_grid_pane_g3

0xf043,	// (0x00034e95) cam4_grid_pane_g4

0x0003,

0xff62,	// (0x00035db4) cam4_grid_pane_g

0x3885,	// (0x000296d7) aid_placing_vt_slider_lsc_ParamLimits

0x3b43,	// (0x00029995) vidtel_button_pane_ParamLimits

0x3b43,	// (0x00029995) vidtel_button_pane

0x2275,	// (0x000280c7) bg_button_pane_cp034

0xb479,	// (0x000312cb) vidtel_button_pane_g1

0xb481,	// (0x000312d3) vidtel_button_pane_t1

0xd4f9,	// (0x0003334b) aid_size_vtel_slider_touch

0xde62,	// (0x00033cb4) scroll_pane_cp039

0xdf94,	// (0x00033de6) ncim_query_button_pane_cp01_ParamLimits

0xdfb3,	// (0x00033e05) ncimui_query_pane_g1_ParamLimits

0x6d75,	// (0x0002cbc7) input_focus_pane_cp012_ParamLimits

0xdfd8,	// (0x00033e2a) ncim_query_entry_pane_t1_ParamLimits

0xde62,	// (0x00033cb4) scroll_pane_cp039_ParamLimits

0x5303,	// (0x0002b155) navi_pane_bcale_mc_g1

0x530b,	// (0x0002b15d) navi_pane_bcale_mc_t1

0xe53b,	// (0x0003438d) main_sp_fs_email_pane_g1

0xe547,	// (0x00034399) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x00035b4a) main_sp_fs_email_pane_g

0xe9d8,	// (0x0003482a) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9d8,	// (0x0003482a) list_single_cale_mrui_row_pane_g3

0xaa0b,	// (0x0003085d) list_single_recal_day_pane_g5_event_pane

0xeb41,	// (0x00034993) list_single_recal_day_pane_g7

0xf04c,	// (0x00034e9e) list_recal_day_event_pane_cp01

0xf055,	// (0x00034ea7) list_recal_vselct_arw_lo_pane_cp01

0xf05d,	// (0x00034eaf) list_recal_vselct_arw_up_pane_cp01

0xf065,	// (0x00034eb7) list_recal_vselct_pane_cp01

0xd585,	// (0x000333d7) list_recal_day_event_pane_cp01_g1

0xf06f,	// (0x00034ec1) list_recal_day_event_pane_cp01_t1

0xeb49,	// (0x0003499b) list_single_recal_day_pane_t1_ParamLimits

0xaa21,	// (0x00030873) list_single_recal_day_pane_t2_ParamLimits

0xfe50,	// (0x00035ca2) list_single_recal_day_pane_t_ParamLimits

0x297e,	// (0x000287d0) bg_notes_pane_ParamLimits

0x2bfd,	// (0x00028a4f) list_notes_pane_ParamLimits

0x2c0b,	// (0x00028a5d) scroll_pane_cp06_ParamLimits

0x2c35,	// (0x00028a87) main_notes_pane_ParamLimits

0x2275,	// (0x000280c7) main_welc_pane

0xb497,	// (0x000312e9) main_welc_body_pane_ParamLimits

0xb497,	// (0x000312e9) main_welc_body_pane

0xb4b3,	// (0x00031305) main_welc_opti_pane_ParamLimits

0xb4b3,	// (0x00031305) main_welc_opti_pane

0xb4f0,	// (0x00031342) main_welc_pane_t1_ParamLimits

0xb4f0,	// (0x00031342) main_welc_pane_t1

0xb50a,	// (0x0003135c) main_welc_body_row_pane_ParamLimits

0xb50a,	// (0x0003135c) main_welc_body_row_pane

0xf07d,	// (0x00034ecf) main_welc_opti_row_pane_ParamLimits

0xf07d,	// (0x00034ecf) main_welc_opti_row_pane

0xf08b,	// (0x00034edd) main_welc_opti_row_pane_g1

0xb51d,	// (0x0003136f) main_welc_opti_row_pane_t1

0xf093,	// (0x00034ee5) main_welc_body_row_pane_t1

0xed82,	// (0x00034bd4) popup_notif_wgt_heading_pane

0xed9c,	// (0x00034bee) aid_size_list_notif_wgt_del_ParamLimits

0xeda9,	// (0x00034bfb) list_notif_wgt_row_pane_g1_ParamLimits

0xedb5,	// (0x00034c07) list_notif_wgt_row_pane_g2_ParamLimits

0xedc9,	// (0x00034c1b) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb7,	// (0x00035d09) list_notif_wgt_row_pane_g_ParamLimits

0xedd6,	// (0x00034c28) list_notif_wgt_row_pane_t1_ParamLimits

0xedec,	// (0x00034c3e) list_notif_wgt_row_pane_t2_ParamLimits

0xedfe,	// (0x00034c50) list_notif_wgt_row_pane_t3_ParamLimits

0xfebe,	// (0x00035d10) list_notif_wgt_row_pane_t_ParamLimits

0xaec6,	// (0x00030d18) listrow_wgtman_pane_g1_ParamLimits

0xaed3,	// (0x00030d25) listrow_wgtman_pane_g2_ParamLimits

0xfee7,	// (0x00035d39) listrow_wgtman_pane_g_ParamLimits

0xaeeb,	// (0x00030d3d) listrow_wgtman_pane_t1_ParamLimits

0xaf03,	// (0x00030d55) listrow_wgtman_pane_t2_ParamLimits

0xfeec,	// (0x00035d3e) listrow_wgtman_pane_t_ParamLimits

0xaf29,	// (0x00030d7b) wait_bar_pane_cp09_ParamLimits

0x2275,	// (0x000280c7) bg_popup_heading_pane_cp02

0xf0a2,	// (0x00034ef4) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x00034efc) popup_notif_wgt_heading_pane_t1

0xbf82,	// (0x00031dd4) main_vids_pane

0x2275,	// (0x000280c7) vids_listscroll_pane

0xb52c,	// (0x0003137e) scroll_pane_cp040

0x2275,	// (0x000280c7) vids_list_pane

0xb537,	// (0x00031389) vids_list_double_pane_ParamLimits

0xb537,	// (0x00031389) vids_list_double_pane

0xb544,	// (0x00031396) vids_list_double_pane_g1

0xb54d,	// (0x0003139f) vids_list_double_pane_t1

0xb55d,	// (0x000313af) vids_list_double_pane_t2

0x0001,

0xff70,	// (0x00035dc2) vids_list_double_pane_t

0xb5d3,	// (0x00031425) main_ncimui_pane_ParamLimits

0x9757,	// (0x0002f5a9) main_ncimui_pane_g1_ParamLimits

0x9763,	// (0x0002f5b5) main_ncimui_pane_g2_ParamLimits

0x9763,	// (0x0002f5b5) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x00035a4f) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x00035a4f) main_ncimui_pane_g

0xb4ca,	// (0x0003131c) main_welc_pane_g1_ParamLimits

0xb4ca,	// (0x0003131c) main_welc_pane_g1

0xb4dd,	// (0x0003132f) main_welc_pane_g2_ParamLimits

0xb4dd,	// (0x0003132f) main_welc_pane_g2

0x0001,

0xff6b,	// (0x00035dbd) main_welc_pane_g_ParamLimits

0xff6b,	// (0x00035dbd) main_welc_pane_g

0x297e,	// (0x000287d0) listscroll_mce_pane_ParamLimits

0x5483,	// (0x0002b2d5) wait_bar_pane_cp10

0xbf68,	// (0x00031dba) main_cale_day_pane_ParamLimits

0xbf68,	// (0x00031dba) main_cale_week_pane_ParamLimits

0x297e,	// (0x000287d0) main_messa_pane_ParamLimits

0x7cb0,	// (0x0002db02) main_clock2_btn_pane_ParamLimits

0x7cb0,	// (0x0002db02) main_clock2_btn_pane

0xc8b3,	// (0x00032705) main_clock2_btn_pane_cp01_ParamLimits

0xc8b3,	// (0x00032705) main_clock2_btn_pane_cp01

0xe993,	// (0x000347e5) list_cale_mrui_pane_ParamLimits

0xee32,	// (0x00034c84) main_cf0_pane_g2

0x0001,

0xfec5,	// (0x00035d17) main_cf0_pane_g

0xb0c7,	// (0x00030f19) area_left_week_number_pane_ParamLimits

0xb0d3,	// (0x00030f25) area_top_day_name_pane_ParamLimits

0xb0e4,	// (0x00030f36) frame_month_view_pane_ParamLimits

0xef53,	// (0x00034da5) grid_month_view_pane_ParamLimits

0xef61,	// (0x00034db3) frm_month_g1_ParamLimits

0xb151,	// (0x00030fa3) frm_month_g2_ParamLimits

0xb162,	// (0x00030fb4) frm_month_g3_ParamLimits

0xb173,	// (0x00030fc5) frm_month_g4_ParamLimits

0xb184,	// (0x00030fd6) frm_month_g5_ParamLimits

0xb195,	// (0x00030fe7) frm_month_g6_ParamLimits

0xb1a6,	// (0x00030ff8) frm_month_g7_ParamLimits

0xef6e,	// (0x00034dc0) frm_month_g8_ParamLimits

0xb1b7,	// (0x00031009) frm_month_g9_ParamLimits

0xb1c7,	// (0x00031019) frm_month_g10_ParamLimits

0xb1d7,	// (0x00031029) frm_month_g11_ParamLimits

0xb1e7,	// (0x00031039) frm_month_g12_ParamLimits

0xb1f7,	// (0x00031049) frm_month_g13_ParamLimits

0xb207,	// (0x00031059) frm_month_g14_ParamLimits

0xb217,	// (0x00031069) frm_month_g15_ParamLimits

0xb229,	// (0x0003107b) frm_month_g16_ParamLimits

0xff16,	// (0x00035d68) frm_month_g_ParamLimits

0xef7b,	// (0x00034dcd) cell_top_day_name_pane_t1_ParamLimits

0xb23b,	// (0x0003108d) cell_area_left_week_number_pane_g1_ParamLimits

0xb247,	// (0x00031099) cell_area_left_week_number_pane_t1_ParamLimits

0xc6b7,	// (0x00032509) cell_month_view_pane_g1_ParamLimits

0xb25a,	// (0x000310ac) cell_month_view_pane_t1_ParamLimits

0x2976,	// (0x000287c8) main_clock2_btn_pane_g1

0xf0b8,	// (0x00034f0a) main_clock2_btn_pane_t1

0x6d75,	// (0x0002cbc7) listscroll_cmail_pane_ParamLimits

0xe53b,	// (0x0003438d) main_sp_fs_email_pane_g1_ParamLimits

0xe547,	// (0x00034399) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x00035b4a) main_sp_fs_email_pane_g_ParamLimits

0xeabd,	// (0x0003490f) list_recal_day_pane_ParamLimits

0xeace,	// (0x00034920) mian_recal_day_pane_t1

0xa1ed,	// (0x0003003f) list_single_dyc_row_text_pane_t4_ParamLimits

0xa1ed,	// (0x0003003f) list_single_dyc_row_text_pane_t4

0xa224,	// (0x00030076) list_single_dyc_row_text_pane_t5_ParamLimits

0xa224,	// (0x00030076) list_single_dyc_row_text_pane_t5

0xe5b1,	// (0x00034403) list_single_dyc_row_text_pane_t6_ParamLimits

0xe5b1,	// (0x00034403) list_single_dyc_row_text_pane_t6

0x49cd,	// (0x0002a81f) aid_mgn_list_cale_time_pane

0xb5d3,	// (0x00031425) main_gallery2_pane_ParamLimits

0xc8c7,	// (0x00032719) main_clock2_pane_cp01_t1

0xc8d5,	// (0x00032727) main_clock2_pane_cp01_t3

0x0001,

0xf7d3,	// (0x00035625) main_clock2_pane_cp01_t

0x3080,	// (0x00028ed2) cale_week_scroll_pane_g16_ParamLimits

0x3080,	// (0x00028ed2) cale_week_scroll_pane_g16

0x336e,	// (0x000291c0) vorec_slider_pane

0xb481,	// (0x000312d3) vidtel_button_pane_t1_ParamLimits

0xaac6,	// (0x00030918) main_fs_bigclock_clock_pane_g1_ParamLimits

0xaad8,	// (0x0003092a) main_fs_bigclock_clock_pane_g2_ParamLimits

0xaae9,	// (0x0003093b) main_fs_bigclock_clock_pane_g3_ParamLimits

0xaae9,	// (0x0003093b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe73,	// (0x00035cc5) main_fs_bigclock_clock_pane_g_ParamLimits

0xaafc,	// (0x0003094e) main_fs_bigclock_clock_pane_t1_ParamLimits

0xab17,	// (0x00030969) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe7c,	// (0x00035cce) main_fs_bigclock_clock_pane_t_ParamLimits

0x7536,	// (0x0002d388) main_mup3_lyrics_pane_ParamLimits

0x7536,	// (0x0002d388) main_mup3_lyrics_pane

0xb56b,	// (0x000313bd) main_mup3_lyrics_pane_t1_ParamLimits

0xb56b,	// (0x000313bd) main_mup3_lyrics_pane_t1

0xcd9e,	// (0x00032bf0) aid_main_mp4_pane_t1_area

0xcd9e,	// (0x00032bf0) aid_main_mp4_pane_t2_area

0xce46,	// (0x00032c98) main_mp4_pane_g7_ParamLimits

0xce46,	// (0x00032c98) main_mp4_pane_g7

0xce52,	// (0x00032ca4) main_mp4_pane_g8_ParamLimits

0xce52,	// (0x00032ca4) main_mp4_pane_g8

0x8302,	// (0x0002e154) aid_call6_pane_g1_size

0xb3d7,	// (0x00031229) list_double_large_graphic_phob2_other_pane_ParamLimits

0xb3d7,	// (0x00031229) list_double_large_graphic_phob2_other_pane

0x5089,	// (0x0002aedb) list_double_large_graphic_phob2_other_pane_g1

0x2275,	// (0x000280c7) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal
