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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0001e033 };

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
0x2707,	// (0x0002073a) Screen

0x2713,	// (0x00020746) application_window

0x271f,	// (0x00020752) area_bottom_pane_ParamLimits

0x271f,	// (0x00020752) area_bottom_pane

0x0ea6,	// (0x0001eed9) area_top_pane_ParamLimits

0x0ea6,	// (0x0001eed9) area_top_pane

0x0f0a,	// (0x0001ef3d) call_video_uplink_pane_ParamLimits

0x0f0a,	// (0x0001ef3d) call_video_uplink_pane

0x0f49,	// (0x0001ef7c) main_pane_ParamLimits

0x0f49,	// (0x0001ef7c) main_pane

0xc44c,	// (0x0002a47f) context_pane

0x557c,	// (0x000235af) navi_pane

0x55a2,	// (0x000235d5) popup_cale_events_window_ParamLimits

0x55a2,	// (0x000235d5) popup_cale_events_window

0xc45f,	// (0x0002a492) popup_mup_playback_window

0x55ba,	// (0x000235ed) signal_pane

0xa385,	// (0x000283b8) main_browser_pane

0xafab,	// (0x00028fde) main_burst_pane

0x1579,	// (0x0001f5ac) main_calc_pane

0xc432,	// (0x0002a465) main_cale_day_pane

0x2b38,	// (0x00020b6b) main_cale_month_pane

0xc432,	// (0x0002a465) main_cale_week_pane

0xafab,	// (0x00028fde) main_call_pane

0xa065,	// (0x00028098) main_call_poc_pane

0xafab,	// (0x00028fde) main_camera_pane

0xafab,	// (0x00028fde) main_chi_dic_pane

0xad28,	// (0x00028d5b) main_clock_pane

0xa065,	// (0x00028098) main_fmradio_pane

0xafab,	// (0x00028fde) main_graph_messa_pane

0xa065,	// (0x00028098) main_help_pane

0xa385,	// (0x000283b8) main_im_pane

0xa2c0,	// (0x000282f3) main_image_pane_ParamLimits

0xa2c0,	// (0x000282f3) main_image_pane

0xa065,	// (0x00028098) main_location2_pane

0xafab,	// (0x00028fde) main_location_pane

0xa2c0,	// (0x000282f3) main_messa_pane

0xa065,	// (0x00028098) main_mp2_pane

0xafab,	// (0x00028fde) main_mp_pane

0xa065,	// (0x00028098) main_msg_pane

0xa065,	// (0x00028098) main_mup_eq_pane

0xa065,	// (0x00028098) main_mup_pane

0xa385,	// (0x000283b8) main_notes_pane

0xa065,	// (0x00028098) main_pec_pane

0xa065,	// (0x00028098) main_phob_pane

0xa065,	// (0x00028098) main_pinb_pane

0xa065,	// (0x00028098) main_postcard_pane

0xa065,	// (0x00028098) main_qdial_pane

0xafab,	// (0x00028fde) main_skin_pane

0xa065,	// (0x00028098) main_smil2_pane

0xafab,	// (0x00028fde) main_smil_pane

0xafab,	// (0x00028fde) main_video_pane

0xafab,	// (0x00028fde) main_video_tele_pane

0xa2c0,	// (0x000282f3) main_viewer_pane_ParamLimits

0xa2c0,	// (0x000282f3) main_viewer_pane

0xafab,	// (0x00028fde) main_vorec_pane

0x15c5,	// (0x0001f5f8) popup_blid_sat_info_window_ParamLimits

0x15c5,	// (0x0001f5f8) popup_blid_sat_info_window

0x15e5,	// (0x0001f618) popup_dyc_status_message_window_ParamLimits

0x15e5,	// (0x0001f618) popup_dyc_status_message_window

0x15f5,	// (0x0001f628) popup_grid_large_graphic_window_ParamLimits

0x15f5,	// (0x0001f628) popup_grid_large_graphic_window

0x1686,	// (0x0001f6b9) popup_loc_request_window_ParamLimits

0x1686,	// (0x0001f6b9) popup_loc_request_window

0x16d3,	// (0x0001f706) popup_wml_address_window_ParamLimits

0x16d3,	// (0x0001f706) popup_wml_address_window

0x545e,	// (0x00023491) call_muted_g1

0x5120,	// (0x00023153) popup_call_audio_conf_window_ParamLimits

0x5120,	// (0x00023153) popup_call_audio_conf_window

0x546e,	// (0x000234a1) popup_call_audio_first_window_ParamLimits

0x546e,	// (0x000234a1) popup_call_audio_first_window

0x54ae,	// (0x000234e1) popup_call_audio_in_window_ParamLimits

0x54ae,	// (0x000234e1) popup_call_audio_in_window

0x54d2,	// (0x00023505) popup_call_audio_out_window_ParamLimits

0x54d2,	// (0x00023505) popup_call_audio_out_window

0x54f4,	// (0x00023527) popup_call_audio_second_window_ParamLimits

0x54f4,	// (0x00023527) popup_call_audio_second_window

0x5524,	// (0x00023557) popup_call_audio_wait_window_ParamLimits

0x5524,	// (0x00023557) popup_call_audio_wait_window

0x5545,	// (0x00023578) popup_number_entry_window_ParamLimits

0x5545,	// (0x00023578) popup_number_entry_window

0x9c52,	// (0x00027c85) bg_popup_call_pane_cp05_ParamLimits

0x9c52,	// (0x00027c85) bg_popup_call_pane_cp05

0x9c72,	// (0x00027ca5) popup_number_entry_window_t1

0x9c85,	// (0x00027cb8) popup_number_entry_window_t2

0x9c97,	// (0x00027cca) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0002d0f9) popup_number_entry_window_t

0x9ca9,	// (0x00027cdc) text_title_cp2

0x9cbc,	// (0x00027cef) bg_popup_call_pane_cp_ParamLimits

0x9cbc,	// (0x00027cef) bg_popup_call_pane_cp

0x9cca,	// (0x00027cfd) call_thumbnail_pane

0x9cd2,	// (0x00027d05) popup_call_audio_in_window_g1_ParamLimits

0x9cd2,	// (0x00027d05) popup_call_audio_in_window_g1

0x9cde,	// (0x00027d11) popup_call_audio_in_window_g2_ParamLimits

0x9cde,	// (0x00027d11) popup_call_audio_in_window_g2

0x9cea,	// (0x00027d1d) popup_call_audio_in_window_g3_ParamLimits

0x9cea,	// (0x00027d1d) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0002d102) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0002d102) popup_call_audio_in_window_g

0x9cf6,	// (0x00027d29) popup_call_audio_in_window_t1_ParamLimits

0x9cf6,	// (0x00027d29) popup_call_audio_in_window_t1

0x9d12,	// (0x00027d45) popup_call_audio_in_window_t2_ParamLimits

0x9d12,	// (0x00027d45) popup_call_audio_in_window_t2

0x9d2e,	// (0x00027d61) popup_call_audio_in_window_t3_ParamLimits

0x9d2e,	// (0x00027d61) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0002d109) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0002d109) popup_call_audio_in_window_t

0x9cbc,	// (0x00027cef) bg_popup_call_pane_cp01_ParamLimits

0x9cbc,	// (0x00027cef) bg_popup_call_pane_cp01

0x9cca,	// (0x00027cfd) call_thumbnail_pane_cp02

0x9d41,	// (0x00027d74) call_type_pane_cp022

0x9d49,	// (0x00027d7c) popup_call_audio_out_window_g1_ParamLimits

0x9d49,	// (0x00027d7c) popup_call_audio_out_window_g1

0x9d5b,	// (0x00027d8e) popup_call_audio_out_window_g2_ParamLimits

0x9d5b,	// (0x00027d8e) popup_call_audio_out_window_g2

0x9d67,	// (0x00027d9a) popup_call_audio_out_window_g3_ParamLimits

0x9d67,	// (0x00027d9a) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0002d110) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0002d110) popup_call_audio_out_window_g

0x9d79,	// (0x00027dac) popup_call_audio_out_window_t1_ParamLimits

0x9d79,	// (0x00027dac) popup_call_audio_out_window_t1

0x9d91,	// (0x00027dc4) popup_call_audio_out_window_t2_ParamLimits

0x9d91,	// (0x00027dc4) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0002d117) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0002d117) popup_call_audio_out_window_t

0x9da6,	// (0x00027dd9) bg_popup_call_pane_ParamLimits

0x9da6,	// (0x00027dd9) bg_popup_call_pane

0x2799,	// (0x000207cc) call_thumbnail_pane_cp_ParamLimits

0x2799,	// (0x000207cc) call_thumbnail_pane_cp

0x9e2a,	// (0x00027e5d) call_type_pane_cp01_ParamLimits

0x9e2a,	// (0x00027e5d) call_type_pane_cp01

0x9e6e,	// (0x00027ea1) popup_call_audio_first_window_g1_ParamLimits

0x9e6e,	// (0x00027ea1) popup_call_audio_first_window_g1

0x9eba,	// (0x00027eed) popup_call_audio_first_window_g2_ParamLimits

0x9eba,	// (0x00027eed) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0002d11c) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0002d11c) popup_call_audio_first_window_g

0x9efe,	// (0x00027f31) popup_call_audio_first_window_t1_ParamLimits

0x9efe,	// (0x00027f31) popup_call_audio_first_window_t1

0x9faa,	// (0x00027fdd) popup_call_audio_first_window_t4_ParamLimits

0x9faa,	// (0x00027fdd) popup_call_audio_first_window_t4

0xa036,	// (0x00028069) popup_call_audio_first_window_t5_ParamLimits

0xa036,	// (0x00028069) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0002d121) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0002d121) popup_call_audio_first_window_t

0xa065,	// (0x00028098) bg_popup_call_pane_cp02

0xa06f,	// (0x000280a2) call_type_pane_cp023

0xa077,	// (0x000280aa) popup_call_audio_wait_window_g1

0xa07f,	// (0x000280b2) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0002d128) popup_call_audio_wait_window_g

0xa087,	// (0x000280ba) popup_call_audio_wait_window_t3

0xa095,	// (0x000280c8) bg_popup_call_pane_cp03_ParamLimits

0xa095,	// (0x000280c8) bg_popup_call_pane_cp03

0xa0f5,	// (0x00028128) call_thumbnail_pane_cp011_ParamLimits

0xa0f5,	// (0x00028128) call_thumbnail_pane_cp011

0xa101,	// (0x00028134) call_type_pane_cp034_ParamLimits

0xa101,	// (0x00028134) call_type_pane_cp034

0xa13d,	// (0x00028170) popup_call_audio_second_window_g1_ParamLimits

0xa13d,	// (0x00028170) popup_call_audio_second_window_g1

0xa179,	// (0x000281ac) popup_call_audio_second_window_g2_ParamLimits

0xa179,	// (0x000281ac) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0002d12d) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0002d12d) popup_call_audio_second_window_g

0xa1b5,	// (0x000281e8) popup_call_audio_second_window_t1_ParamLimits

0xa1b5,	// (0x000281e8) popup_call_audio_second_window_t1

0xa236,	// (0x00028269) popup_call_audio_second_window_t2_ParamLimits

0xa236,	// (0x00028269) popup_call_audio_second_window_t2

0xa26c,	// (0x0002829f) popup_call_audio_second_window_t3_ParamLimits

0xa26c,	// (0x0002829f) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0002d132) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0002d132) popup_call_audio_second_window_t

0xa065,	// (0x00028098) bg_popup_call_pane_cp04

0xa2a2,	// (0x000282d5) list_conf_pane

0xa2aa,	// (0x000282dd) popup_call_audio_conf_window_t1

0xa2b8,	// (0x000282eb) call_thumbnail_pane_g1

0xa2c0,	// (0x000282f3) bg_pinb_pane_ParamLimits

0xa2c0,	// (0x000282f3) bg_pinb_pane

0xa2ce,	// (0x00028301) find_pinb_pane

0xa2d7,	// (0x0002830a) listscroll_pinb_pane_ParamLimits

0xa2d7,	// (0x0002830a) listscroll_pinb_pane

0xa2e6,	// (0x00028319) pinb_bg_pane_g1

0x27bd,	// (0x000207f0) pinb_bg_pane_g2

0x27c9,	// (0x000207fc) pinb_bg_pane_g3

0x27d5,	// (0x00020808) pinb_bg_pane_g4

0x27e1,	// (0x00020814) pinb_bg_pane_g5

0x27ed,	// (0x00020820) pinb_bg_pane_g6

0x27f8,	// (0x0002082b) pinb_bg_pane_g7

0x2803,	// (0x00020836) pinb_bg_pane_g8

0x280e,	// (0x00020841) pinb_bg_pane_g9

0x2818,	// (0x0002084b) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0002d139) pinb_bg_pane_g

0x2835,	// (0x00020868) grid_pinb_pane

0x2840,	// (0x00020873) list_pinb_pane

0x284b,	// (0x0002087e) scroll_pane_cp01_ParamLimits

0x284b,	// (0x0002087e) scroll_pane_cp01

0xa2f0,	// (0x00028323) find_pinb_pane_g1_ParamLimits

0xa2f0,	// (0x00028323) find_pinb_pane_g1

0xa308,	// (0x0002833b) find_pinb_pane_t1

0xa31a,	// (0x0002834d) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0002d153) find_pinb_pane_t

0xa32f,	// (0x00028362) input_focus_pane_cp01_ParamLimits

0xa32f,	// (0x00028362) input_focus_pane_cp01

0x285d,	// (0x00020890) cell_pinb_pane_ParamLimits

0x285d,	// (0x00020890) cell_pinb_pane

0x2885,	// (0x000208b8) cell_pinb_pane_g1_ParamLimits

0x2885,	// (0x000208b8) cell_pinb_pane_g1

0x289a,	// (0x000208cd) cell_pinb_pane_g2_ParamLimits

0x289a,	// (0x000208cd) cell_pinb_pane_g2

0xa33b,	// (0x0002836e) cell_pinb_pane_g3_ParamLimits

0xa33b,	// (0x0002836e) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0002d158) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0002d158) cell_pinb_pane_g

0xa065,	// (0x00028098) grid_highlight_pane_cp01

0x28a6,	// (0x000208d9) list_pinb_item_pane_ParamLimits

0x28a6,	// (0x000208d9) list_pinb_item_pane

0xa065,	// (0x00028098) list_highlight_pane_cp02

0x28cc,	// (0x000208ff) list_pinb_item_pane_g1_ParamLimits

0x28cc,	// (0x000208ff) list_pinb_item_pane_g1

0x28d9,	// (0x0002090c) list_pinb_item_pane_g2_ParamLimits

0x28d9,	// (0x0002090c) list_pinb_item_pane_g2

0x28e5,	// (0x00020918) list_pinb_item_pane_g3_ParamLimits

0x28e5,	// (0x00020918) list_pinb_item_pane_g3

0x28f6,	// (0x00020929) list_pinb_item_pane_g4_ParamLimits

0x28f6,	// (0x00020929) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0002d15f) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0002d15f) list_pinb_item_pane_g

0x2902,	// (0x00020935) list_pinb_item_pane_t1_ParamLimits

0x2902,	// (0x00020935) list_pinb_item_pane_t1

0x1137,	// (0x0001f16a) calc_display_pane

0x1155,	// (0x0001f188) calc_paper_pane

0x1171,	// (0x0001f1a4) grid_calc_pane

0xa065,	// (0x00028098) bg_list_pane_cp01

0x2919,	// (0x0002094c) clock_g1

0x2921,	// (0x00020954) clock_g2

0x0001,

0xf135,	// (0x0002d168) clock_g

0x292b,	// (0x0002095e) clock_t1_ParamLimits

0x292b,	// (0x0002095e) clock_t1

0x2940,	// (0x00020973) clock_t2_ParamLimits

0x2940,	// (0x00020973) clock_t2

0x2952,	// (0x00020985) clock_t3_ParamLimits

0x2952,	// (0x00020985) clock_t3

0x2964,	// (0x00020997) clock_t4_ParamLimits

0x2964,	// (0x00020997) clock_t4

0x2976,	// (0x000209a9) clock_t5_ParamLimits

0x2976,	// (0x000209a9) clock_t5

0x298b,	// (0x000209be) clock_t6_ParamLimits

0x298b,	// (0x000209be) clock_t6

0x299d,	// (0x000209d0) clock_t7_ParamLimits

0x299d,	// (0x000209d0) clock_t7

0x29af,	// (0x000209e2) clock_t8_ParamLimits

0x29af,	// (0x000209e2) clock_t8

0x29c5,	// (0x000209f8) clock_t9_ParamLimits

0x29c5,	// (0x000209f8) clock_t9

0x0008,

0xf13a,	// (0x0002d16d) clock_t_ParamLimits

0xf13a,	// (0x0002d16d) clock_t

0xa347,	// (0x0002837a) popup_clock_analogue_window_cp02

0xa347,	// (0x0002837a) popup_clock_digital_window_cp01

0xa34f,	// (0x00028382) listscroll_help_pane

0xa065,	// (0x00028098) phob_pre_status_pane

0xa359,	// (0x0002838c) grid_qdial_pane

0xa2c0,	// (0x000282f3) listscroll_mce_pane

0xa2c0,	// (0x000282f3) bg_notes_pane

0xa363,	// (0x00028396) list_notes_pane

0x29db,	// (0x00020a0e) scroll_pane_cp06

0xa371,	// (0x000283a4) bg_calc_paper_pane

0x119d,	// (0x0001f1d0) list_calc_pane

0xa385,	// (0x000283b8) bg_calc_display_pane

0x11b7,	// (0x0001f1ea) calc_display_pane_t1

0x11cc,	// (0x0001f1ff) calc_display_pane_t2

0x11e1,	// (0x0001f214) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0002d180) calc_display_pane_t

0x11f3,	// (0x0001f226) cell_calc_pane_ParamLimits

0x11f3,	// (0x0001f226) cell_calc_pane

0xa39f,	// (0x000283d2) bg_calc_paper_pane_g1

0xa3ab,	// (0x000283de) bg_calc_paper_pane_g2

0xa3b7,	// (0x000283ea) bg_calc_paper_pane_g3

0xa3c3,	// (0x000283f6) bg_calc_paper_pane_g4

0xa3cf,	// (0x00028402) bg_calc_paper_pane_g5

0x29ea,	// (0x00020a1d) bg_calc_paper_pane_g6

0x29fb,	// (0x00020a2e) bg_calc_paper_pane_g7

0x2a0c,	// (0x00020a3f) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0002d187) bg_calc_paper_pane_g

0x2a1d,	// (0x00020a50) calc_bg_paper_pane_g9

0x2a2e,	// (0x00020a61) list_calc_item_pane_ParamLimits

0x2a2e,	// (0x00020a61) list_calc_item_pane

0xa3db,	// (0x0002840e) list_calc_item_pane_g1

0x1220,	// (0x0001f253) list_calc_item_pane_t1_ParamLimits

0x1220,	// (0x0001f253) list_calc_item_pane_t1

0x1232,	// (0x0001f265) list_calc_item_pane_t2_ParamLimits

0x1232,	// (0x0001f265) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0002d198) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0002d198) list_calc_item_pane_t

0xa3e8,	// (0x0002841b) cell_calc_pane_g1

0xa3f2,	// (0x00028425) grid_highlight_pane_cp02

0x2a5d,	// (0x00020a90) bg_calc_display_pane_g1

0x1262,	// (0x0001f295) bg_calc_display_pane_g2

0xc75c,	// (0x0002a78f) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0002d1a2) bg_calc_display_pane_g

0x126c,	// (0x0001f29f) cell_qdial_pane_ParamLimits

0x126c,	// (0x0001f29f) cell_qdial_pane

0x2a66,	// (0x00020a99) cell_qdial_pane_g1_ParamLimits

0x2a66,	// (0x00020a99) cell_qdial_pane_g1

0x2a73,	// (0x00020aa6) cell_qdial_pane_g2_ParamLimits

0x2a73,	// (0x00020aa6) cell_qdial_pane_g2

0xa414,	// (0x00028447) cell_qdial_pane_g3_ParamLimits

0xa414,	// (0x00028447) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0002d1a9) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0002d1a9) cell_qdial_pane_g

0x2a91,	// (0x00020ac4) cell_qdial_pane_t1_ParamLimits

0x2a91,	// (0x00020ac4) cell_qdial_pane_t1

0x2aa9,	// (0x00020adc) cell_qdial_pane_t2_ParamLimits

0x2aa9,	// (0x00020adc) cell_qdial_pane_t2

0x2abc,	// (0x00020aef) cell_qdial_pane_t3_ParamLimits

0x2abc,	// (0x00020aef) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0002d1b2) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0002d1b2) cell_qdial_pane_t

0xa065,	// (0x00028098) grid_highlight_pane_cp04

0xa420,	// (0x00028453) thumbnail_qdial_pane_ParamLimits

0xa420,	// (0x00028453) thumbnail_qdial_pane

0xa47c,	// (0x000284af) list_help_pane

0xa485,	// (0x000284b8) scroll_pane_cp02

0x2acf,	// (0x00020b02) help_list_pane_t1_ParamLimits

0x2acf,	// (0x00020b02) help_list_pane_t1

0x1280,	// (0x0001f2b3) bg_notes_pane_g2

0x1288,	// (0x0001f2bb) bg_notes_pane_g3

0x1290,	// (0x0001f2c3) notes_bg_pane_g1

0x1298,	// (0x0001f2cb) notes_bg_pane_g4

0x12a0,	// (0x0001f2d3) notes_bg_pane_g5

0x12a8,	// (0x0001f2db) notes_bg_pane_g6

0x12b0,	// (0x0001f2e3) notes_bg_pane_g7

0x12b8,	// (0x0001f2eb) notes_bg_pane_g8

0x12c0,	// (0x0001f2f3) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0002d1d0) notes_bg_pane_g

0x2b02,	// (0x00020b35) list_notes_text_pane_ParamLimits

0x2b02,	// (0x00020b35) list_notes_text_pane

0xa48e,	// (0x000284c1) list_notes_text_pane_g1

0x2b2a,	// (0x00020b5d) list_notes_text_pane_t1

0x2b38,	// (0x00020b6b) listscroll_cale_week_pane

0x2b5d,	// (0x00020b90) bg_cale_heading_pane

0xa4b1,	// (0x000284e4) bg_cale_pane_cp01

0x2b7f,	// (0x00020bb2) cale_week_corner_pane

0x2b99,	// (0x00020bcc) cale_week_day_heading_pane

0x2bbb,	// (0x00020bee) cale_week_scroll_pane_g1

0x2bd8,	// (0x00020c0b) cale_week_scroll_pane_g2

0x2beb,	// (0x00020c1e) cale_week_scroll_pane_g3

0x2bfe,	// (0x00020c31) cale_week_scroll_pane_g4

0x2c11,	// (0x00020c44) cale_week_scroll_pane_g5

0x2c24,	// (0x00020c57) cale_week_scroll_pane_g6

0x2c37,	// (0x00020c6a) cale_week_scroll_pane_g7

0x2c4a,	// (0x00020c7d) cale_week_scroll_pane_g8

0x2c5f,	// (0x00020c92) cale_week_scroll_pane_g9

0x2c72,	// (0x00020ca5) cale_week_scroll_pane_g10

0x2c85,	// (0x00020cb8) cale_week_scroll_pane_g11

0x2c98,	// (0x00020ccb) cale_week_scroll_pane_g12

0x2caf,	// (0x00020ce2) cale_week_scroll_pane_g13

0x2cca,	// (0x00020cfd) cale_week_scroll_pane_g14

0x2ce5,	// (0x00020d18) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0002d1df) cale_week_scroll_pane_g

0x2d15,	// (0x00020d48) cale_week_time_pane

0x2d2a,	// (0x00020d5d) grid_cale_week_pane

0xa4e1,	// (0x00028514) scroll_pane_cp08

0x2d49,	// (0x00020d7c) cell_cale_week_pane_ParamLimits

0x2d49,	// (0x00020d7c) cell_cale_week_pane

0x2dab,	// (0x00020dde) cale_week_day_heading_pane_t1

0x2de6,	// (0x00020e19) cale_week_day_heading_pane_t2

0x2e21,	// (0x00020e54) cale_week_day_heading_pane_t3

0x2e5c,	// (0x00020e8f) cale_week_day_heading_pane_t4

0x2e97,	// (0x00020eca) cale_week_day_heading_pane_t5

0x2ed2,	// (0x00020f05) cale_week_day_heading_pane_t6

0x2f0d,	// (0x00020f40) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0002d200) cale_week_day_heading_pane_t

0xa4fe,	// (0x00028531) bg_cale_side_pane

0x12c8,	// (0x0001f2fb) cale_week_time_pane_t1

0x12e2,	// (0x0001f315) cale_week_time_pane_t2

0x12fc,	// (0x0001f32f) cale_week_time_pane_t3

0x1316,	// (0x0001f349) cale_week_time_pane_t4

0x1330,	// (0x0001f363) cale_week_time_pane_t5

0x134a,	// (0x0001f37d) cale_week_time_pane_t6

0x136a,	// (0x0001f39d) cale_week_time_pane_t7

0x138c,	// (0x0001f3bf) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0002d20f) cale_week_time_pane_t

0x2f48,	// (0x00020f7b) cell_cale_week_pane_g2

0x2f6c,	// (0x00020f9f) cell_cale_week_pane_g3_ParamLimits

0x2f6c,	// (0x00020f9f) cell_cale_week_pane_g3

0xa50c,	// (0x0002853f) grid_highlight_pane_cp07

0xa514,	// (0x00028547) listscroll_gms_pane

0xa51e,	// (0x00028551) grid_gms_pane

0xa527,	// (0x0002855a) listscroll_gms_pane_g1

0xa52f,	// (0x00028562) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0002d220) listscroll_gms_pane_g

0x2f84,	// (0x00020fb7) scroll_pane_cp010

0x2f8f,	// (0x00020fc2) cell_gms_pane_ParamLimits

0x2f8f,	// (0x00020fc2) cell_gms_pane

0x2fa2,	// (0x00020fd5) cell_gms_pane_g1

0xa537,	// (0x0002856a) cell_gms_pane_g2

0xa53f,	// (0x00028572) cell_gms_pane_g3

0xa548,	// (0x0002857b) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0002d225) cell_gms_pane_g

0xa551,	// (0x00028584) grid_highlight_pane_cp09

0x5406,	// (0x00023439) phob_pre_status_pane_g1

0x540e,	// (0x00023441) phob_pre_status_pane_g2

0x5416,	// (0x00023449) phob_pre_status_pane_g3

0x541e,	// (0x00023451) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0002d614) phob_pre_status_pane_g

0x542e,	// (0x00023461) phob_pre_status_pane_t1

0x543e,	// (0x00023471) phob_pre_status_pane_t2

0x544e,	// (0x00023481) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0002d61f) phob_pre_status_pane_t

0xa065,	// (0x00028098) bg_list_pane_cp05

0x13b8,	// (0x0001f3eb) grid_vorec_pane

0x13c2,	// (0x0001f3f5) vorec_t1

0x13d0,	// (0x0001f403) vorec_t2

0x13de,	// (0x0001f411) vorec_t3

0x13ec,	// (0x0001f41f) vorec_t4

0x13fa,	// (0x0001f42d) vorec_t5

0x1408,	// (0x0001f43b) vorec_t6

0x0006,

0xf1fb,	// (0x0002d22e) vorec_t

0x1424,	// (0x0001f457) wait_bar_pane_cp01

0x2faa,	// (0x00020fdd) cell_vorec_pane_ParamLimits

0x2faa,	// (0x00020fdd) cell_vorec_pane

0x142c,	// (0x0001f45f) cell_vorec_pane_g1

0xa065,	// (0x00028098) grid_highlight_pane_cp05

0x2fcd,	// (0x00021000) cams_zoom_pane

0x2fd9,	// (0x0002100c) image_vga_pane

0x2fe8,	// (0x0002101b) main_camera_pane_g1

0x2ff6,	// (0x00021029) main_camera_pane_g2

0x3002,	// (0x00021035) main_camera_pane_g3

0x300e,	// (0x00021041) main_camera_pane_g4

0x301a,	// (0x0002104d) main_camera_pane_g5

0x3026,	// (0x00021059) main_camera_pane_g6

0x3032,	// (0x00021065) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0002d23d) main_camera_pane_g

0x303e,	// (0x00021071) main_camera_pane_t1

0x3050,	// (0x00021083) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0002d24e) main_camera_pane_t

0x3071,	// (0x000210a4) cams_zoom_pane_cp_ParamLimits

0x3071,	// (0x000210a4) cams_zoom_pane_cp

0x3095,	// (0x000210c8) image_cif_pane_ParamLimits

0x3095,	// (0x000210c8) image_cif_pane

0x30b3,	// (0x000210e6) image_subqcif_pane

0x30bb,	// (0x000210ee) main_video_pane_g1_ParamLimits

0x30bb,	// (0x000210ee) main_video_pane_g1

0x30db,	// (0x0002110e) main_video_pane_g2_ParamLimits

0x30db,	// (0x0002110e) main_video_pane_g2

0x310b,	// (0x0002113e) main_video_pane_g3_ParamLimits

0x310b,	// (0x0002113e) main_video_pane_g3

0x3134,	// (0x00021167) main_video_pane_g4_ParamLimits

0x3134,	// (0x00021167) main_video_pane_g4

0x315d,	// (0x00021190) main_video_pane_g5_ParamLimits

0x315d,	// (0x00021190) main_video_pane_g5

0xa565,	// (0x00028598) main_video_pane_g6_ParamLimits

0xa565,	// (0x00028598) main_video_pane_g6

0x0006,

0xf220,	// (0x0002d253) main_video_pane_g_ParamLimits

0xf220,	// (0x0002d253) main_video_pane_g

0x317f,	// (0x000211b2) main_video_pane_t1_ParamLimits

0x317f,	// (0x000211b2) main_video_pane_t1

0xa57f,	// (0x000285b2) cams_zoom_pane_g1

0xa588,	// (0x000285bb) cams_zoom_pane_g2

0xa591,	// (0x000285c4) cams_zoom_pane_g3

0xa59a,	// (0x000285cd) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0002d262) cams_zoom_pane_g

0x31c9,	// (0x000211fc) grid_cams_pane

0x31d7,	// (0x0002120a) linegrid_cams_pane

0x31e5,	// (0x00021218) cell_cams_pane_ParamLimits

0x31e5,	// (0x00021218) cell_cams_pane

0xa5a3,	// (0x000285d6) cams_burst_image_pane

0xa5ab,	// (0x000285de) cell_cams_pane_g1

0xa065,	// (0x00028098) grid_highlight_pane_cp03

0xa3e8,	// (0x0002841b) mp_bg_pane_g1

0xa065,	// (0x00028098) bg_list_pane_cp03

0xc357,	// (0x0002a38a) bg_mp_pane

0xc35f,	// (0x0002a392) grid_mp_pane

0xc367,	// (0x0002a39a) media_player_g1

0xc36f,	// (0x0002a3a2) media_player_t1

0xc37d,	// (0x0002a3b0) media_player_t2

0xc38b,	// (0x0002a3be) media_player_t3

0xc399,	// (0x0002a3cc) media_player_t4

0xc3a7,	// (0x0002a3da) media_player_t5

0xc3b5,	// (0x0002a3e8) media_player_t6

0xc3c3,	// (0x0002a3f6) media_player_t7

0x0006,

0xf5cb,	// (0x0002d5fe) media_player_t

0xc3d1,	// (0x0002a404) wait_bar_pane_cp02

0xf5b0,	// (0x0002d5e3) main_usb_pane_t

0x53fd,	// (0x00023430) cell_mp_pane

0xa3e8,	// (0x0002841b) cell_mp_pane_g1

0xa065,	// (0x00028098) grid_highlight_pane_cp06

0xa5b3,	// (0x000285e6) grid_skin_colour_pane

0xa5bb,	// (0x000285ee) list_highlight_pane_cp03

0x330d,	// (0x00021340) skin_g1

0xa5c3,	// (0x000285f6) skin_t1

0xa5d2,	// (0x00028605) skin_t2

0x0001,

0xf264,	// (0x0002d297) skin_t

0x3317,	// (0x0002134a) cell_skin_colour_pane_ParamLimits

0x3317,	// (0x0002134a) cell_skin_colour_pane

0xa5e0,	// (0x00028613) cell_skin_colour_pane_g1

0x339b,	// (0x000213ce) call_video_g1_ParamLimits

0x339b,	// (0x000213ce) call_video_g1

0x33ab,	// (0x000213de) call_video_g2_ParamLimits

0x33ab,	// (0x000213de) call_video_g2

0x0001,

0xf269,	// (0x0002d29c) call_video_g_ParamLimits

0xf269,	// (0x0002d29c) call_video_g

0x3405,	// (0x00021438) call_video_uplink_pane_cp1_ParamLimits

0x3405,	// (0x00021438) call_video_uplink_pane_cp1

0xa5f2,	// (0x00028625) call_video_uplink_pane_cp2

0x34d1,	// (0x00021504) video_down_crop_pane_ParamLimits

0x34d1,	// (0x00021504) video_down_crop_pane

0x35cf,	// (0x00021602) video_down_pane_ParamLimits

0x35cf,	// (0x00021602) video_down_pane

0xa5fa,	// (0x0002862d) video_down_subqcif_pane_ParamLimits

0xa5fa,	// (0x0002862d) video_down_subqcif_pane

0xa612,	// (0x00028645) video_down_subqcif_pane_cp_ParamLimits

0xa612,	// (0x00028645) video_down_subqcif_pane_cp

0xa638,	// (0x0002866b) im_reading_pane_ParamLimits

0xa638,	// (0x0002866b) im_reading_pane

0x36f1,	// (0x00021724) im_writing_pane_ParamLimits

0x36f1,	// (0x00021724) im_writing_pane

0x370f,	// (0x00021742) im_reading_pane_t1

0xa652,	// (0x00028685) list_im_pane

0xa663,	// (0x00028696) scroll_pane_cp07

0x3763,	// (0x00021796) im_writing_pane_t1_ParamLimits

0x3763,	// (0x00021796) im_writing_pane_t1

0xa67c,	// (0x000286af) im_writing_pane_t2_ParamLimits

0xa67c,	// (0x000286af) im_writing_pane_t2

0x0001,

0xf273,	// (0x0002d2a6) im_writing_pane_t_ParamLimits

0xf273,	// (0x0002d2a6) im_writing_pane_t

0xa065,	// (0x00028098) input_focus_pane_cp04

0xa065,	// (0x00028098) input_focus_pane_cp05

0x3778,	// (0x000217ab) list_im_single_pane_ParamLimits

0x3778,	// (0x000217ab) list_im_single_pane

0x379c,	// (0x000217cf) list_single_im_pane_t1

0x53c1,	// (0x000233f4) blid_accuracy_pane

0x53c9,	// (0x000233fc) blid_compass_pane

0x53d3,	// (0x00023406) main_location_t1

0x53e1,	// (0x00023414) main_location_t2

0x53ef,	// (0x00023422) main_location_t3

0x0002,

0xf5da,	// (0x0002d60d) main_location_t

0xa065,	// (0x00028098) aid_levels_location

0xa3e8,	// (0x0002841b) blid_accuracy_pane_g1

0xa3e8,	// (0x0002841b) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0002d308) blid_accuracy_pane_g

0xa6c4,	// (0x000286f7) wml_content_pane

0xa702,	// (0x00028735) wml_button_pane_ParamLimits

0xa702,	// (0x00028735) wml_button_pane

0x37ab,	// (0x000217de) wml_list_single_large_pane_ParamLimits

0x37ab,	// (0x000217de) wml_list_single_large_pane

0x37d5,	// (0x00021808) wml_list_single_medium_pane_ParamLimits

0x37d5,	// (0x00021808) wml_list_single_medium_pane

0x3806,	// (0x00021839) wml_list_single_small_pane_ParamLimits

0x3806,	// (0x00021839) wml_list_single_small_pane

0xa716,	// (0x00028749) wml_selection_box_pane_ParamLimits

0xa716,	// (0x00028749) wml_selection_box_pane

0xa729,	// (0x0002875c) wml_list_single_pane_t1

0xa738,	// (0x0002876b) wml_list_single_medium_pane_t1

0xa747,	// (0x0002877a) wml_list_single_large_pane_t1

0xa756,	// (0x00028789) input_focus_pane_cp02_ParamLimits

0xa756,	// (0x00028789) input_focus_pane_cp02

0xa769,	// (0x0002879c) wml_selection_box_pane_g1

0xa772,	// (0x000287a5) wml_selection_box_pane_t1_ParamLimits

0xa772,	// (0x000287a5) wml_selection_box_pane_t1

0xa2c0,	// (0x000282f3) bg_wml_button_pane_ParamLimits

0xa2c0,	// (0x000282f3) bg_wml_button_pane

0xa78a,	// (0x000287bd) wml_button_pane_g1

0xa792,	// (0x000287c5) wml_button_pane_t1

0xa78a,	// (0x000287bd) wml_button_bg_pane_g1

0xa7a2,	// (0x000287d5) wml_button_bg_pane_g2

0xa7aa,	// (0x000287dd) wml_button_bg_pane_g3

0xa7b2,	// (0x000287e5) wml_button_bg_pane_g4

0xa7ba,	// (0x000287ed) wml_button_bg_pane_g5

0xa7c2,	// (0x000287f5) wml_button_bg_pane_g6

0xa7ca,	// (0x000287fd) wml_button_bg_pane_g7

0xa7d2,	// (0x00028805) wml_button_bg_pane_g8

0xa7da,	// (0x0002880d) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0002d2ab) wml_button_bg_pane_g

0x3840,	// (0x00021873) bg_list_pane_cp02

0xa7e2,	// (0x00028815) mce_header_pane_ParamLimits

0xa7e2,	// (0x00028815) mce_header_pane

0xa7f8,	// (0x0002882b) mce_icon_pane

0xa7f8,	// (0x0002882b) mce_image_pane

0xa801,	// (0x00028834) mce_text_pane_ParamLimits

0xa801,	// (0x00028834) mce_text_pane

0x384a,	// (0x0002187d) scroll_pane_cp03

0xa6fa,	// (0x0002872d) scroll_pane_cp04

0xa814,	// (0x00028847) scroll_pane_cp05_ParamLimits

0xa814,	// (0x00028847) scroll_pane_cp05

0x3854,	// (0x00021887) mce_header_field_pane_ParamLimits

0x3854,	// (0x00021887) mce_header_field_pane

0x3874,	// (0x000218a7) mce_header_field_pane_2_ParamLimits

0x3874,	// (0x000218a7) mce_header_field_pane_2

0x388a,	// (0x000218bd) mce_header_field_pane_3

0x3892,	// (0x000218c5) list_single_mce_message_pane_ParamLimits

0x3892,	// (0x000218c5) list_single_mce_message_pane

0x38bd,	// (0x000218f0) list_single_mce_smart_pane_ParamLimits

0x38bd,	// (0x000218f0) list_single_mce_smart_pane

0xa820,	// (0x00028853) input_focus_pane_cp03

0xa829,	// (0x0002885c) list_header_data_pane

0x38f3,	// (0x00021926) mce_header_field_pane_t1

0x3901,	// (0x00021934) list_single_mce_header_pane_ParamLimits

0x3901,	// (0x00021934) list_single_mce_header_pane

0xa831,	// (0x00028864) list_single_mce_header_pane_t1

0xa840,	// (0x00028873) list_single_mce_message_pane_g1

0xa848,	// (0x0002887b) list_single_mce_message_pane_t1

0x3953,	// (0x00021986) bg_cale_heading_pane_cp01_ParamLimits

0x3953,	// (0x00021986) bg_cale_heading_pane_cp01

0xa856,	// (0x00028889) bg_cale_pane_cp02_ParamLimits

0xa856,	// (0x00028889) bg_cale_pane_cp02

0x3996,	// (0x000219c9) cale_month_corner_pane

0x39b0,	// (0x000219e3) cale_month_day_heading_pane_ParamLimits

0x39b0,	// (0x000219e3) cale_month_day_heading_pane

0x3a0b,	// (0x00021a3e) cale_month_pane_g1_ParamLimits

0x3a0b,	// (0x00021a3e) cale_month_pane_g1

0x3a43,	// (0x00021a76) cale_month_pane_g2_ParamLimits

0x3a43,	// (0x00021a76) cale_month_pane_g2

0x3a6c,	// (0x00021a9f) cale_month_pane_g3_ParamLimits

0x3a6c,	// (0x00021a9f) cale_month_pane_g3

0x3ab8,	// (0x00021aeb) cale_month_pane_g4_ParamLimits

0x3ab8,	// (0x00021aeb) cale_month_pane_g4

0x3b04,	// (0x00021b37) cale_month_pane_g5_ParamLimits

0x3b04,	// (0x00021b37) cale_month_pane_g5

0x3b50,	// (0x00021b83) cale_month_pane_g6_ParamLimits

0x3b50,	// (0x00021b83) cale_month_pane_g6

0x3b9c,	// (0x00021bcf) cale_month_pane_g7_ParamLimits

0x3b9c,	// (0x00021bcf) cale_month_pane_g7

0x3c00,	// (0x00021c33) cale_month_pane_g8_ParamLimits

0x3c00,	// (0x00021c33) cale_month_pane_g8

0x3c64,	// (0x00021c97) cale_month_pane_g9_ParamLimits

0x3c64,	// (0x00021c97) cale_month_pane_g9

0x3cc2,	// (0x00021cf5) cale_month_pane_g10_ParamLimits

0x3cc2,	// (0x00021cf5) cale_month_pane_g10

0x3d1e,	// (0x00021d51) cale_month_pane_g11_ParamLimits

0x3d1e,	// (0x00021d51) cale_month_pane_g11

0x3d72,	// (0x00021da5) cale_month_pane_g12_ParamLimits

0x3d72,	// (0x00021da5) cale_month_pane_g12

0x3dc8,	// (0x00021dfb) cale_month_pane_g13_ParamLimits

0x3dc8,	// (0x00021dfb) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0002d2be) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0002d2be) cale_month_pane_g

0x3e1e,	// (0x00021e51) cale_month_week_pane

0x3e33,	// (0x00021e66) grid_cale_month_pane_ParamLimits

0x3e33,	// (0x00021e66) grid_cale_month_pane

0x3e81,	// (0x00021eb4) cale_month_day_heading_pane_t1

0x3f07,	// (0x00021f3a) cale_month_day_heading_pane_t2

0x3f98,	// (0x00021fcb) cale_month_day_heading_pane_t3

0x4029,	// (0x0002205c) cale_month_day_heading_pane_t4

0x40ba,	// (0x000220ed) cale_month_day_heading_pane_t5

0x414b,	// (0x0002217e) cale_month_day_heading_pane_t6

0x41dc,	// (0x0002220f) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0002d2d9) cale_month_day_heading_pane_t

0xa4fe,	// (0x00028531) bg_cale_side_pane_cp01

0x4285,	// (0x000222b8) cale_month_week_pane_t1

0x429e,	// (0x000222d1) cale_month_week_pane_t2

0x42b7,	// (0x000222ea) cale_month_week_pane_t3

0x42d0,	// (0x00022303) cale_month_week_pane_t4

0x42e9,	// (0x0002231c) cale_month_week_pane_t5

0x430a,	// (0x0002233d) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0002d2e8) cale_month_week_pane_t

0x432b,	// (0x0002235e) cell_cale_month_pane_ParamLimits

0x432b,	// (0x0002235e) cell_cale_month_pane

0x1436,	// (0x0001f469) cell_cale_month_pane_g1

0x1442,	// (0x0001f475) cell_cale_month_pane_t1_ParamLimits

0x1442,	// (0x0001f475) cell_cale_month_pane_t1

0xa50c,	// (0x0002853f) grid_highlight_pane_cp08

0xa3e8,	// (0x0002841b) main_smil_g1

0x4477,	// (0x000224aa) smil_status_pane

0xa895,	// (0x000288c8) smil_text_pane

0xc277,	// (0x0002a2aa) bg_popup_call3_rect_pane_g8

0xc27f,	// (0x0002a2b2) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0002d5a1) bg_popup_call3_rect_pane_g

0xc4c6,	// (0x0002a4f9) smil_status_volume_pane_g1

0xa89f,	// (0x000288d2) smil_status_pane_t1

0x1708,	// (0x0001f73b) volume_smil_pane

0xa8b6,	// (0x000288e9) list_smil_text_pane

0x448a,	// (0x000224bd) scroll_pane_cp011

0x4495,	// (0x000224c8) smil_text_list_pane_t1_ParamLimits

0x4495,	// (0x000224c8) smil_text_list_pane_t1

0x1462,	// (0x0001f495) aid_volume_smil_ParamLimits

0x1462,	// (0x0001f495) aid_volume_smil

0xa3e8,	// (0x0002841b) smil_volume_pane_g1

0xa3e8,	// (0x0002841b) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0002d308) smil_volume_pane_g

0x2b38,	// (0x00020b6b) listscroll_cale_day_pane

0xa8c0,	// (0x000288f3) bg_cale_pane

0xa8d8,	// (0x0002890b) list_cale_pane

0xa8fb,	// (0x0002892e) scroll_pane_cp09

0xa90c,	// (0x0002893f) cale_bg_pane_g1

0xa914,	// (0x00028947) cale_bg_pane_g2

0xa91c,	// (0x0002894f) cale_bg_pane_g3

0xa924,	// (0x00028957) cale_bg_pane_g4

0xa92c,	// (0x0002895f) cale_bg_pane_g5

0xa934,	// (0x00028967) cale_bg_pane_g6

0xa93c,	// (0x0002896f) cale_bg_pane_g7

0xa944,	// (0x00028977) cale_bg_pane_g8

0xa94c,	// (0x0002897f) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0002d30d) cale_bg_pane_g

0x4515,	// (0x00022548) list_cale_time_pane_ParamLimits

0x4515,	// (0x00022548) list_cale_time_pane

0xa954,	// (0x00028987) list_cale_time_pane_g1_ParamLimits

0xa954,	// (0x00028987) list_cale_time_pane_g1

0xa960,	// (0x00028993) list_cale_time_pane_g2_ParamLimits

0xa960,	// (0x00028993) list_cale_time_pane_g2

0x4537,	// (0x0002256a) list_cale_time_pane_g3_ParamLimits

0x4537,	// (0x0002256a) list_cale_time_pane_g3

0x4545,	// (0x00022578) list_cale_time_pane_g4_ParamLimits

0x4545,	// (0x00022578) list_cale_time_pane_g4

0x4553,	// (0x00022586) list_cale_time_pane_g5_ParamLimits

0x4553,	// (0x00022586) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0002d320) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0002d320) list_cale_time_pane_g

0xa97a,	// (0x000289ad) list_cale_time_pane_t1_ParamLimits

0xa97a,	// (0x000289ad) list_cale_time_pane_t1

0xa9a2,	// (0x000289d5) list_cale_time_pane_t2_ParamLimits

0xa9a2,	// (0x000289d5) list_cale_time_pane_t2

0x4884,	// (0x000228b7) aid_blid_cardinal_pane

0x48c6,	// (0x000228f9) compass_pane_t4

0xa9ca,	// (0x000289fd) list_cale_time_pane_t4_ParamLimits

0xa9ca,	// (0x000289fd) list_cale_time_pane_t4

0x48d4,	// (0x00022907) compass_pane_t5

0x48e4,	// (0x00022917) compass_pane_t6

0x48f2,	// (0x00022925) compass_pane_t7

0xae6d,	// (0x00028ea0) navi_pane_cc_t1

0xb06c,	// (0x0002909f) aid_phob_thumbnail_center_pane

0x4ec7,	// (0x00022efa) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0002d32d) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0002d32d) list_cale_time_pane_t

0x9cbc,	// (0x00027cef) bg_popup_window_pane_cp02_ParamLimits

0x9cbc,	// (0x00027cef) bg_popup_window_pane_cp02

0xa9f2,	// (0x00028a25) heading_pane_cp01_ParamLimits

0xa9f2,	// (0x00028a25) heading_pane_cp01

0xa9fe,	// (0x00028a31) loc_req_pane_ParamLimits

0xa9fe,	// (0x00028a31) loc_req_pane

0xaa0e,	// (0x00028a41) loc_type_pane_ParamLimits

0xaa0e,	// (0x00028a41) loc_type_pane

0xaa20,	// (0x00028a53) loc_type_pane_t1_ParamLimits

0xaa20,	// (0x00028a53) loc_type_pane_t1

0xaa32,	// (0x00028a65) loc_type_pane_t2_ParamLimits

0xaa32,	// (0x00028a65) loc_type_pane_t2

0xaa44,	// (0x00028a77) loc_type_pane_t3_ParamLimits

0xaa44,	// (0x00028a77) loc_type_pane_t3

0x0002,

0xf301,	// (0x0002d334) loc_type_pane_t_ParamLimits

0xf301,	// (0x0002d334) loc_type_pane_t

0xaa56,	// (0x00028a89) list_loc_req_pane

0xaa60,	// (0x00028a93) scroll_pane_cp012

0x4561,	// (0x00022594) list_single_loc_request_popup_menu_pane_ParamLimits

0x4561,	// (0x00022594) list_single_loc_request_popup_menu_pane

0xaa6b,	// (0x00028a9e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa6b,	// (0x00028a9e) list_single_loc_request_popup_menu_pane_g1

0xaa77,	// (0x00028aaa) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa77,	// (0x00028aaa) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0002d33b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0002d33b) list_single_loc_request_popup_menu_pane_g

0xaa83,	// (0x00028ab6) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa83,	// (0x00028ab6) list_single_loc_request_popup_menu_pane_t1

0x4573,	// (0x000225a6) bg_popup_window_pane_cp03_ParamLimits

0x4573,	// (0x000225a6) bg_popup_window_pane_cp03

0x4581,	// (0x000225b4) heading_loc_req_pane_ParamLimits

0x4581,	// (0x000225b4) heading_loc_req_pane

0x458d,	// (0x000225c0) popup_dyc_status_message_window_g1_ParamLimits

0x458d,	// (0x000225c0) popup_dyc_status_message_window_g1

0x4599,	// (0x000225cc) popup_dyc_status_message_window_t1_ParamLimits

0x4599,	// (0x000225cc) popup_dyc_status_message_window_t1

0x45ab,	// (0x000225de) popup_dyc_status_message_window_t2_ParamLimits

0x45ab,	// (0x000225de) popup_dyc_status_message_window_t2

0x45bd,	// (0x000225f0) popup_dyc_status_message_window_t3_ParamLimits

0x45bd,	// (0x000225f0) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0002d340) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0002d340) popup_dyc_status_message_window_t

0xa065,	// (0x00028098) bg_heading_pane_cp01

0xaa99,	// (0x00028acc) heading_loc_req_pane_g1

0xaaa1,	// (0x00028ad4) heading_loc_req_pane_g2

0xaaa9,	// (0x00028adc) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0002d347) heading_loc_req_pane_g

0xaab1,	// (0x00028ae4) heading_loc_req_pane_t1

0xaac0,	// (0x00028af3) bg_popup_sub_pane_cp01_ParamLimits

0xaac0,	// (0x00028af3) bg_popup_sub_pane_cp01

0xaace,	// (0x00028b01) popup_cale_events_window_g1_ParamLimits

0xaace,	// (0x00028b01) popup_cale_events_window_g1

0xaaee,	// (0x00028b21) popup_cale_events_window_g2_ParamLimits

0xaaee,	// (0x00028b21) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0002d37b) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0002d37b) popup_cale_events_window_g

0xab0e,	// (0x00028b41) popup_cale_events_window_t1_ParamLimits

0xab0e,	// (0x00028b41) popup_cale_events_window_t1

0xab20,	// (0x00028b53) popup_cale_events_window_t2_ParamLimits

0xab20,	// (0x00028b53) popup_cale_events_window_t2

0xab5e,	// (0x00028b91) popup_cale_events_window_t3_ParamLimits

0xab5e,	// (0x00028b91) popup_cale_events_window_t3

0xab98,	// (0x00028bcb) popup_cale_events_window_t4_ParamLimits

0xab98,	// (0x00028bcb) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0002d380) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0002d380) popup_cale_events_window_t

0x46c4,	// (0x000226f7) call_type_pane

0xb05e,	// (0x00029091) popup_call_status_window_g1

0x46d0,	// (0x00022703) popup_call_status_window_g2

0x46dc,	// (0x0002270f) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0002d389) popup_call_status_window_g

0xabce,	// (0x00028c01) call_type_pane_g1

0xabd7,	// (0x00028c0a) call_type_pane_g2

0x0001,

0xf35d,	// (0x0002d390) call_type_pane_g

0xa065,	// (0x00028098) bg_popup_sub_pane_cp02

0xabe0,	// (0x00028c13) listscroll_popup_wml_pane

0xabe8,	// (0x00028c1b) list_wml_pane

0xabf2,	// (0x00028c25) scroll_pane_cp013

0xabfd,	// (0x00028c30) list_single_graphic_popup_wml_pane_ParamLimits

0xabfd,	// (0x00028c30) list_single_graphic_popup_wml_pane

0xa3e8,	// (0x0002841b) list_single_graphic_popup_wml_pane_g1

0xac11,	// (0x00028c44) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0002d395) list_single_graphic_popup_wml_pane_g

0xac19,	// (0x00028c4c) list_single_graphic_popup_wml_pane_t1

0xac2f,	// (0x00028c62) aid_call_pane

0xa2b8,	// (0x000282eb) popup_clock_analogue_window_g1

0xa2b8,	// (0x000282eb) popup_clock_analogue_window_g2

0x1484,	// (0x0001f4b7) popup_clock_analogue_window_g3

0x1484,	// (0x0001f4b7) popup_clock_analogue_window_g4

0xa3e8,	// (0x0002841b) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0002d39a) popup_clock_analogue_window_g

0x148c,	// (0x0001f4bf) popup_clock_analogue_window_t1

0x149a,	// (0x0001f4cd) clock_digital_number_pane_ParamLimits

0x149a,	// (0x0001f4cd) clock_digital_number_pane

0x14a6,	// (0x0001f4d9) clock_digital_number_pane_cp02_ParamLimits

0x14a6,	// (0x0001f4d9) clock_digital_number_pane_cp02

0x14b2,	// (0x0001f4e5) clock_digital_number_pane_cp03_ParamLimits

0x14b2,	// (0x0001f4e5) clock_digital_number_pane_cp03

0x14be,	// (0x0001f4f1) clock_digital_number_pane_cp04_ParamLimits

0x14be,	// (0x0001f4f1) clock_digital_number_pane_cp04

0x14ce,	// (0x0001f501) clock_digital_separator_pane_ParamLimits

0x14ce,	// (0x0001f501) clock_digital_separator_pane

0x14da,	// (0x0001f50d) popup_clock_digital_window_t1

0xa3e8,	// (0x0002841b) clock_digital_number_pane_g1

0xa3e8,	// (0x0002841b) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0002d308) clock_digital_number_pane_g

0xa3e8,	// (0x0002841b) clock_digital_separator_pane_g1

0xa3e8,	// (0x0002841b) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0002d308) clock_digital_separator_pane_g

0xa065,	// (0x00028098) bg_popup_window_pane_cp04

0xac37,	// (0x00028c6a) heading_pane_cp03

0xac3f,	// (0x00028c72) listscroll_popup_gms_pane

0xac47,	// (0x00028c7a) grid_large_graphic_popup_pane

0xac51,	// (0x00028c84) listscroll_popup_gms_pane_g1

0xac59,	// (0x00028c8c) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0002d3a5) listscroll_popup_gms_pane_g

0xa6fa,	// (0x0002872d) scroll_pane_cp014

0x46e8,	// (0x0002271b) cell_large_graphic_popup_pane_ParamLimits

0x46e8,	// (0x0002271b) cell_large_graphic_popup_pane

0x4700,	// (0x00022733) cell_large_graphic_popup_pane_g1_ParamLimits

0x4700,	// (0x00022733) cell_large_graphic_popup_pane_g1

0xac61,	// (0x00028c94) cell_large_graphic_popup_pane_g2_ParamLimits

0xac61,	// (0x00028c94) cell_large_graphic_popup_pane_g2

0xac6d,	// (0x00028ca0) cell_large_graphic_popup_pane_g3_ParamLimits

0xac6d,	// (0x00028ca0) cell_large_graphic_popup_pane_g3

0xac7a,	// (0x00028cad) cell_large_graphic_popup_pane_g4_ParamLimits

0xac7a,	// (0x00028cad) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0002d3aa) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0002d3aa) cell_large_graphic_popup_pane_g

0xac8a,	// (0x00028cbd) grid_highlight_pane_cp010

0xa3e8,	// (0x0002841b) bg_popup_call_pane_g1

0xac94,	// (0x00028cc7) list_single_graphic_popup_conf_pane_ParamLimits

0xac94,	// (0x00028cc7) list_single_graphic_popup_conf_pane

0xaca7,	// (0x00028cda) list_highlight_pane_cp01

0xacb0,	// (0x00028ce3) list_single_graphic_popup_conf_pane_g1

0xacb8,	// (0x00028ceb) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0002d3b3) list_single_graphic_popup_conf_pane_g

0xacc0,	// (0x00028cf3) list_single_graphic_popup_conf_pane_t1

0xacce,	// (0x00028d01) linegrid_cams_pane_g1

0x470c,	// (0x0002273f) linegrid_cams_pane_g2

0xa53f,	// (0x00028572) linegrid_cams_pane_g3

0xacd7,	// (0x00028d0a) linegrid_cams_pane_g4

0x4715,	// (0x00022748) linegrid_cams_pane_g5

0x471e,	// (0x00022751) linegrid_cams_pane_g6

0xa548,	// (0x0002857b) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0002d3b8) linegrid_cams_pane_g

0xace0,	// (0x00028d13) popup_clock_analogue_window

0xace0,	// (0x00028d13) popup_clock_digital_window

0xa065,	// (0x00028098) popup_phob_thumbnail_window

0xa3e8,	// (0x0002841b) call_video_uplink_pane_g1

0xace9,	// (0x00028d1c) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0002d3c7) call_video_uplink_pane_g

0xacf1,	// (0x00028d24) video_uplink_pane

0xacf9,	// (0x00028d2c) mce_image_pane_g1

0x4727,	// (0x0002275a) mce_image_pane_g2

0x4731,	// (0x00022764) mce_image_pane_g3

0x4739,	// (0x0002276c) mce_image_pane_g4

0x4741,	// (0x00022774) mce_image_pane_g5

0x0004,

0xf399,	// (0x0002d3cc) mce_image_pane_g

0xad03,	// (0x00028d36) control_top_pane_stacon_cp01_ParamLimits

0xad03,	// (0x00028d36) control_top_pane_stacon_cp01

0xad17,	// (0x00028d4a) uni_indicator_pane_stacon_cp01_ParamLimits

0xad17,	// (0x00028d4a) uni_indicator_pane_stacon_cp01

0xad28,	// (0x00028d5b) bg_popup_sub_pane_cp03

0xad32,	// (0x00028d65) chi_dic_find_pane

0x4749,	// (0x0002277c) listscroll_chi_dic_pane

0xad3a,	// (0x00028d6d) main_pane_chidic_g1

0xad42,	// (0x00028d75) chi_dic_find_pane_t1

0xad50,	// (0x00028d83) find_chidic_pane

0xad59,	// (0x00028d8c) chi_dic_list_pane_ParamLimits

0xad59,	// (0x00028d8c) chi_dic_list_pane

0xad6a,	// (0x00028d9d) scroll_pane_cp020

0xad72,	// (0x00028da5) find_chidic_pane_t1

0xa065,	// (0x00028098) input_focus_pane_cp06

0x475d,	// (0x00022790) list_chi_dic_pane_ParamLimits

0x475d,	// (0x00022790) list_chi_dic_pane

0x4777,	// (0x000227aa) list_chi_dic_pane_t1_ParamLimits

0x4777,	// (0x000227aa) list_chi_dic_pane_t1

0xa065,	// (0x00028098) list_highlight_pane_cp020

0xad81,	// (0x00028db4) bg_cale_heading_pane_g1

0x478a,	// (0x000227bd) bg_cale_heading_pane_g2

0x4792,	// (0x000227c5) bg_cale_heading_pane_g3

0x479a,	// (0x000227cd) bg_cale_heading_pane_g4

0x47a4,	// (0x000227d7) bg_cale_heading_pane_g5

0x47ae,	// (0x000227e1) bg_cale_heading_pane_g6

0x47b6,	// (0x000227e9) bg_cale_heading_pane_g7

0x47be,	// (0x000227f1) bg_cale_heading_pane_g8

0x47c8,	// (0x000227fb) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0002d3d7) bg_cale_heading_pane_g

0xad81,	// (0x00028db4) bg_cale_side_pane_g1

0x47d2,	// (0x00022805) bg_cale_side_pane_g2

0x47dc,	// (0x0002280f) bg_cale_side_pane_g3

0x47e6,	// (0x00022819) bg_cale_side_pane_g4

0x47f0,	// (0x00022823) bg_cale_side_pane_g5

0x47fa,	// (0x0002282d) bg_cale_side_pane_g6

0x4804,	// (0x00022837) bg_cale_side_pane_g7

0x480e,	// (0x00022841) bg_cale_side_pane_g8

0x4816,	// (0x00022849) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0002d3ea) bg_cale_side_pane_g

0x481e,	// (0x00022851) popup_call_status_window_ParamLimits

0x481e,	// (0x00022851) popup_call_status_window

0xad89,	// (0x00028dbc) stacon_top_pane

0xad91,	// (0x00028dc4) status_pane_ParamLimits

0xad91,	// (0x00028dc4) status_pane

0xada6,	// (0x00028dd9) status_small_pane

0xadae,	// (0x00028de1) control_pane

0xa065,	// (0x00028098) stacon_bottom_pane

0xadb6,	// (0x00028de9) list_single_mce_smart_pane_t1_ParamLimits

0xadb6,	// (0x00028de9) list_single_mce_smart_pane_t1

0xadc9,	// (0x00028dfc) list_single_mce_smart_pane_t2_ParamLimits

0xadc9,	// (0x00028dfc) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0002d3fd) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0002d3fd) list_single_mce_smart_pane_t

0x482a,	// (0x0002285d) compass_pane

0x4836,	// (0x00022869) main_location2_pane_t1

0x484a,	// (0x0002287d) main_location2_pane_t2

0x485e,	// (0x00022891) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0002d402) main_location2_pane_t

0xade8,	// (0x00028e1b) compass_pane_g1_ParamLimits

0xade8,	// (0x00028e1b) compass_pane_g1

0x48a8,	// (0x000228db) compass_pane_t1

0x48b7,	// (0x000228ea) compass_pane_t2

0x0005,

0xf3d8,	// (0x0002d40b) compass_pane_t

0x4902,	// (0x00022935) text_secondary_cp61

0xae64,	// (0x00028e97) navi_pane_cams_g5

0xaee0,	// (0x00028f13) navi_pane_im_t1

0xaeee,	// (0x00028f21) navi_pane_mp_g1_ParamLimits

0xaeee,	// (0x00028f21) navi_pane_mp_g1

0xaf02,	// (0x00028f35) navi_pane_mp_g2_ParamLimits

0xaf02,	// (0x00028f35) navi_pane_mp_g2

0xaf0e,	// (0x00028f41) navi_pane_mp_g3_ParamLimits

0xaf0e,	// (0x00028f41) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0002d41f) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0002d41f) navi_pane_mp_g

0xaf1a,	// (0x00028f4d) navi_pane_mp_t1

0xaf28,	// (0x00028f5b) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0002d426) navi_pane_mp_t

0xaf93,	// (0x00028fc6) navi_pane_vt_g1

0xaf1a,	// (0x00028f4d) navi_pane_vt_t1

0xaf9b,	// (0x00028fce) navi_slider_pane

0xafab,	// (0x00028fde) zooming_pane

0xafb3,	// (0x00028fe6) navi_slider_pane_g1

0x14f7,	// (0x0001f52a) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0002d42d) navi_slider_pane_g

0xafd7,	// (0x0002900a) aid_levels_zoom

0xafdf,	// (0x00029012) zooming_pane_g1

0xafe7,	// (0x0002901a) zooming_pane_g2

0xafe7,	// (0x0002901a) zooming_pane_g3

0x0002,

0xf409,	// (0x0002d43c) zooming_pane_g

0xafef,	// (0x00029022) level_10_zoom

0xaff8,	// (0x0002902b) level_11_zoom

0xb001,	// (0x00029034) level_1_zoom

0xb00a,	// (0x0002903d) level_2_zoom

0xb013,	// (0x00029046) level_3_zoom

0xb01c,	// (0x0002904f) level_4_zoom

0xb025,	// (0x00029058) level_5_zoom

0xb02e,	// (0x00029061) level_6_zoom

0xb037,	// (0x0002906a) level_7_zoom

0xb040,	// (0x00029073) level_8_zoom

0xb049,	// (0x0002907c) level_9_zoom

0xb074,	// (0x000290a7) popup_phob_thumbnail_window_g1

0xb07c,	// (0x000290af) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0002d443) popup_phob_thumbnail_window_g

0xc3d9,	// (0x0002a40c) level_1_location

0xc3e1,	// (0x0002a414) level_2_location

0xc3e9,	// (0x0002a41c) level_3_location

0xc3f1,	// (0x0002a424) level_4_location

0xafab,	// (0x00028fde) level_5_location

0x493d,	// (0x00022970) mce_icon_pane_g1

0x4945,	// (0x00022978) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0002d448) mce_icon_pane_g

0x494d,	// (0x00022980) main_mup_pane_g1_ParamLimits

0x494d,	// (0x00022980) main_mup_pane_g1

0x4965,	// (0x00022998) main_mup_pane_g2_ParamLimits

0x4965,	// (0x00022998) main_mup_pane_g2

0x4981,	// (0x000229b4) main_mup_pane_g3_ParamLimits

0x4981,	// (0x000229b4) main_mup_pane_g3

0x499d,	// (0x000229d0) main_mup_pane_g4_ParamLimits

0x499d,	// (0x000229d0) main_mup_pane_g4

0x49b9,	// (0x000229ec) main_mup_pane_g5_ParamLimits

0x49b9,	// (0x000229ec) main_mup_pane_g5

0x49da,	// (0x00022a0d) main_mup_pane_g6_ParamLimits

0x49da,	// (0x00022a0d) main_mup_pane_g6

0x49f6,	// (0x00022a29) main_mup_pane_g7_ParamLimits

0x49f6,	// (0x00022a29) main_mup_pane_g7

0x4a12,	// (0x00022a45) main_mup_pane_g8_ParamLimits

0x4a12,	// (0x00022a45) main_mup_pane_g8

0x4a32,	// (0x00022a65) main_mup_pane_g9_ParamLimits

0x4a32,	// (0x00022a65) main_mup_pane_g9

0x4a51,	// (0x00022a84) main_mup_pane_g10_ParamLimits

0x4a51,	// (0x00022a84) main_mup_pane_g10

0x4a70,	// (0x00022aa3) main_mup_pane_g11_ParamLimits

0x4a70,	// (0x00022aa3) main_mup_pane_g11

0x4a88,	// (0x00022abb) main_mup_pane_g12_ParamLimits

0x4a88,	// (0x00022abb) main_mup_pane_g12

0x4a96,	// (0x00022ac9) main_mup_pane_g13_ParamLimits

0x4a96,	// (0x00022ac9) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0002d44d) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0002d44d) main_mup_pane_g

0x4aac,	// (0x00022adf) main_mup_pane_t1_ParamLimits

0x4aac,	// (0x00022adf) main_mup_pane_t1

0x4ac9,	// (0x00022afc) main_mup_pane_t2_ParamLimits

0x4ac9,	// (0x00022afc) main_mup_pane_t2

0x4ae3,	// (0x00022b16) main_mup_pane_t3_ParamLimits

0x4ae3,	// (0x00022b16) main_mup_pane_t3

0x4afd,	// (0x00022b30) main_mup_pane_t4_ParamLimits

0x4afd,	// (0x00022b30) main_mup_pane_t4

0x4b0f,	// (0x00022b42) main_mup_pane_t5_ParamLimits

0x4b0f,	// (0x00022b42) main_mup_pane_t5

0x4b21,	// (0x00022b54) main_mup_pane_t6_ParamLimits

0x4b21,	// (0x00022b54) main_mup_pane_t6

0x0005,

0xf435,	// (0x0002d468) main_mup_pane_t_ParamLimits

0xf435,	// (0x0002d468) main_mup_pane_t

0x4b37,	// (0x00022b6a) mup_progress_pane_ParamLimits

0x4b37,	// (0x00022b6a) mup_progress_pane

0x4b43,	// (0x00022b76) mup_visualizer_pane_ParamLimits

0x4b43,	// (0x00022b76) mup_visualizer_pane

0x4b7d,	// (0x00022bb0) mup_volume_pane_ParamLimits

0x4b7d,	// (0x00022bb0) mup_volume_pane

0xb05e,	// (0x00029091) mup_visualizer_pane_g1_ParamLimits

0xb05e,	// (0x00029091) mup_visualizer_pane_g1

0xb05e,	// (0x00029091) mup_visualizer_pane_g2_ParamLimits

0xb05e,	// (0x00029091) mup_visualizer_pane_g2

0xade8,	// (0x00028e1b) mup_visualizer_pane_g3_ParamLimits

0xade8,	// (0x00028e1b) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0002d475) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0002d475) mup_visualizer_pane_g

0xa3e8,	// (0x0002841b) mup_volume_pane_g1

0xb08c,	// (0x000290bf) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0002d47c) mup_volume_pane_g

0xa3e8,	// (0x0002841b) mup_progress_pane_g1

0xb095,	// (0x000290c8) mup_progress_pane_g2

0xb09e,	// (0x000290d1) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0002d481) mup_progress_pane_g

0xa065,	// (0x00028098) bg_popup_window_pane_cp05

0xb0a7,	// (0x000290da) heading_pane_cp02_ParamLimits

0xb0a7,	// (0x000290da) heading_pane_cp02

0xb0c1,	// (0x000290f4) list_popup_blid_pane

0xb0c9,	// (0x000290fc) list_blid_sat_info_pane_ParamLimits

0xb0c9,	// (0x000290fc) list_blid_sat_info_pane

0xb0dc,	// (0x0002910f) list_blid_sat_info_pane_g1

0xb0e4,	// (0x00029117) list_blid_sat_info_pane_t1

0x4c8a,	// (0x00022cbd) mup_equalizer_pane_ParamLimits

0x4c8a,	// (0x00022cbd) mup_equalizer_pane

0x4cab,	// (0x00022cde) mup_equalizer_pane_cp1_ParamLimits

0x4cab,	// (0x00022cde) mup_equalizer_pane_cp1

0x4ccc,	// (0x00022cff) mup_equalizer_pane_cp2_ParamLimits

0x4ccc,	// (0x00022cff) mup_equalizer_pane_cp2

0x4ced,	// (0x00022d20) mup_equalizer_pane_cp3_ParamLimits

0x4ced,	// (0x00022d20) mup_equalizer_pane_cp3

0x4d0e,	// (0x00022d41) mup_equalizer_pane_cp4_ParamLimits

0x4d0e,	// (0x00022d41) mup_equalizer_pane_cp4

0x4d2f,	// (0x00022d62) mup_equalizer_pane_cp5

0x4d45,	// (0x00022d78) mup_equalizer_pane_cp6

0x4d5d,	// (0x00022d90) mup_equalizer_pane_cp7

0xc2f7,	// (0x0002a32a) bg_popup_call_poc_act_pane_g9

0xc2ff,	// (0x0002a332) bg_popup_call_poc_act_pane_g10

0xc307,	// (0x0002a33a) bg_popup_call_poc_act_pane_g11

0x000a,

0xa2c0,	// (0x000282f3) mup_scale_pane

0xa3e8,	// (0x0002841b) mup_scale_pane_g1

0xb0f2,	// (0x00029125) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0002d49d) mup_scale_pane_g

0xb116,	// (0x00029149) msg_data_pane

0xb11e,	// (0x00029151) scroll_pane_cp017

0x4d87,	// (0x00022dba) bg_list_pane_cp04_ParamLimits

0x4d87,	// (0x00022dba) bg_list_pane_cp04

0xb12e,	// (0x00029161) msg_data_pane_g1

0x4da3,	// (0x00022dd6) msg_data_pane_g2

0x4dad,	// (0x00022de0) msg_data_pane_g3

0x4db5,	// (0x00022de8) msg_data_pane_g4

0x4dbd,	// (0x00022df0) msg_data_pane_g5

0x4dc5,	// (0x00022df8) msg_data_pane_g6

0x4dcd,	// (0x00022e00) msg_data_pane_g7

0x0006,

0xf479,	// (0x0002d4ac) msg_data_pane_g

0x4dd5,	// (0x00022e08) msg_text_pane_ParamLimits

0x4dd5,	// (0x00022e08) msg_text_pane

0x4e11,	// (0x00022e44) qrid_highlight_pane_cp011_ParamLimits

0x4e11,	// (0x00022e44) qrid_highlight_pane_cp011

0xa065,	// (0x00028098) msg_body_pane

0xa065,	// (0x00028098) msg_header_pane

0xb13f,	// (0x00029172) input_focus_pane_cp07

0xb154,	// (0x00029187) msg_header_pane_t1_ParamLimits

0xb154,	// (0x00029187) msg_header_pane_t1

0xb166,	// (0x00029199) msg_header_pane_t2_ParamLimits

0xb166,	// (0x00029199) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0002d4c0) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0002d4c0) msg_header_pane_t

0xb178,	// (0x000291ab) msg_body_pane_g1

0xb180,	// (0x000291b3) msg_body_pane_t1_ParamLimits

0xb180,	// (0x000291b3) msg_body_pane_t1

0xb1b1,	// (0x000291e4) msg_body_pane_t2_ParamLimits

0xb1b1,	// (0x000291e4) msg_body_pane_t2

0xb1c3,	// (0x000291f6) msg_body_pane_t3_ParamLimits

0xb1c3,	// (0x000291f6) msg_body_pane_t3

0x0002,

0xf492,	// (0x0002d4c5) msg_body_pane_t_ParamLimits

0xf492,	// (0x0002d4c5) msg_body_pane_t

0x1539,	// (0x0001f56c) main_viewer_pane_g1_ParamLimits

0x1539,	// (0x0001f56c) main_viewer_pane_g1

0x1545,	// (0x0001f578) main_viewer_pane_g2_ParamLimits

0x1545,	// (0x0001f578) main_viewer_pane_g2

0x4e59,	// (0x00022e8c) main_viewer_pane_g3_ParamLimits

0x4e59,	// (0x00022e8c) main_viewer_pane_g3

0x4e6a,	// (0x00022e9d) main_viewer_pane_g4_ParamLimits

0x4e6a,	// (0x00022e9d) main_viewer_pane_g4

0x1551,	// (0x0001f584) main_viewer_pane_g5_ParamLimits

0x1551,	// (0x0001f584) main_viewer_pane_g5

0x1551,	// (0x0001f584) main_viewer_pane_g7_ParamLimits

0x1551,	// (0x0001f584) main_viewer_pane_g7

0xaa6b,	// (0x00028a9e) main_viewer_pane_g8_ParamLimits

0xaa6b,	// (0x00028a9e) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0002d4d5) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0002d4d5) main_viewer_pane_g

0xb1d5,	// (0x00029208) viewer_content_pane_ParamLimits

0xb1d5,	// (0x00029208) viewer_content_pane

0x4e9b,	// (0x00022ece) main_postcard_pane_g1_ParamLimits

0x4e9b,	// (0x00022ece) main_postcard_pane_g1

0x4ea9,	// (0x00022edc) main_postcard_pane_g2_ParamLimits

0x4ea9,	// (0x00022edc) main_postcard_pane_g2

0x4eb7,	// (0x00022eea) main_postcard_pane_g3_ParamLimits

0x4eb7,	// (0x00022eea) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0002d4e6) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0002d4e6) main_postcard_pane_g

0x4ec7,	// (0x00022efa) main_postcard_pane_g4

0xc4d9,	// (0x0002a50c) smil_status_volume_pane_g2

0x4ef3,	// (0x00022f26) postcard_pane_ParamLimits

0x4ef3,	// (0x00022f26) postcard_pane

0xb05e,	// (0x00029091) postcard_pane_g1_ParamLimits

0xb05e,	// (0x00029091) postcard_pane_g1

0x4f25,	// (0x00022f58) postcard_pane_g2_ParamLimits

0x4f25,	// (0x00022f58) postcard_pane_g2

0x4f31,	// (0x00022f64) postcard_pane_g3_ParamLimits

0x4f31,	// (0x00022f64) postcard_pane_g3

0xb1e3,	// (0x00029216) postcard_pane_g4_ParamLimits

0xb1e3,	// (0x00029216) postcard_pane_g4

0x4f3d,	// (0x00022f70) postcard_pane_g5_ParamLimits

0x4f3d,	// (0x00022f70) postcard_pane_g5

0x4f49,	// (0x00022f7c) postcard_pane_g6_ParamLimits

0x4f49,	// (0x00022f7c) postcard_pane_g6

0xb1f1,	// (0x00029224) postcard_pane_g7_ParamLimits

0xb1f1,	// (0x00029224) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0002d4f3) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0002d4f3) postcard_pane_g

0x4f55,	// (0x00022f88) main_mp2_pane_g1_ParamLimits

0x4f55,	// (0x00022f88) main_mp2_pane_g1

0x4f61,	// (0x00022f94) main_mp2_pane_g2_ParamLimits

0x4f61,	// (0x00022f94) main_mp2_pane_g2

0x4f6d,	// (0x00022fa0) main_mp2_pane_g3_ParamLimits

0x4f6d,	// (0x00022fa0) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0002d502) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0002d502) main_mp2_pane_g

0x4f79,	// (0x00022fac) main_mp2_pane_t1_ParamLimits

0x4f79,	// (0x00022fac) main_mp2_pane_t1

0x4f90,	// (0x00022fc3) main_mp2_pane_t2_ParamLimits

0x4f90,	// (0x00022fc3) main_mp2_pane_t2

0x4fa4,	// (0x00022fd7) main_mp2_pane_t3_ParamLimits

0x4fa4,	// (0x00022fd7) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0002d509) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0002d509) main_mp2_pane_t

0xb1ff,	// (0x00029232) pec_content_pane_ParamLimits

0xb1ff,	// (0x00029232) pec_content_pane

0xa6fa,	// (0x0002872d) scroll_pane_cp015

0xb211,	// (0x00029244) pec_attribute_pane_ParamLimits

0xb211,	// (0x00029244) pec_attribute_pane

0x4fb6,	// (0x00022fe9) pec_content_pane_g1_ParamLimits

0x4fb6,	// (0x00022fe9) pec_content_pane_g1

0xb221,	// (0x00029254) pec_content_pane_t1_ParamLimits

0xb221,	// (0x00029254) pec_content_pane_t1

0xb233,	// (0x00029266) pec_content_pane_t2_ParamLimits

0xb233,	// (0x00029266) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0002d510) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0002d510) pec_content_pane_t

0x4fc2,	// (0x00022ff5) list_single_graphic_pane_cp01_ParamLimits

0x4fc2,	// (0x00022ff5) list_single_graphic_pane_cp01

0xa2c0,	// (0x000282f3) bg_popup_sub_pane_cp04

0xb245,	// (0x00029278) popup_mup_playback_window_g1

0xb251,	// (0x00029284) popup_mup_playback_window_t1

0xb266,	// (0x00029299) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0002d515) popup_mup_playback_window_t

0xb29d,	// (0x000292d0) main_image_pane_g1_ParamLimits

0xb29d,	// (0x000292d0) main_image_pane_g1

0xb2e0,	// (0x00029313) scroll_pane_cp018_ParamLimits

0xb2e0,	// (0x00029313) scroll_pane_cp018

0xb2f8,	// (0x0002932b) scroll_pane_cp016_ParamLimits

0xb2f8,	// (0x0002932b) scroll_pane_cp016

0x505b,	// (0x0002308e) smil2_image_pane_ParamLimits

0x505b,	// (0x0002308e) smil2_image_pane

0x508b,	// (0x000230be) smil2_root_pane_ParamLimits

0x508b,	// (0x000230be) smil2_root_pane

0x50b7,	// (0x000230ea) smil2_text_pane_ParamLimits

0x50b7,	// (0x000230ea) smil2_text_pane

0xa065,	// (0x00028098) bg_list_pane_cp06

0xb334,	// (0x00029367) grid_radio_pane

0xa065,	// (0x00028098) bg_popup_window_pane_cp06

0xb33c,	// (0x0002936f) main_fmradio_pane_t1

0xac37,	// (0x00028c6a) heading_pane_cp04

0xb34a,	// (0x0002937d) main_fmradio_pane_t2

0xc30f,	// (0x0002a342) popup_cale_lunar_info_window_g1

0xb358,	// (0x0002938b) main_fmradio_pane_t3

0xc317,	// (0x0002a34a) popup_cale_lunar_info_window_g2

0xb366,	// (0x00029399) main_fmradio_pane_t4

0x0001,

0xb374,	// (0x000293a7) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0002d5f0) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0002d52a) main_fmradio_pane_t

0xb382,	// (0x000293b5) wait_bar_pane_cp03

0xb38a,	// (0x000293bd) cell_fmradio_pane_ParamLimits

0xb38a,	// (0x000293bd) cell_fmradio_pane

0xb1f1,	// (0x00029224) cell_fmradio_pane_g1_ParamLimits

0xb1f1,	// (0x00029224) cell_fmradio_pane_g1

0xa065,	// (0x00028098) grid_highlight_pane_cp011

0xb39d,	// (0x000293d0) poc_content_pane_ParamLimits

0xb39d,	// (0x000293d0) poc_content_pane

0xb3af,	// (0x000293e2) scroll_pane_cp019

0x50f7,	// (0x0002312a) popup_call_poc_act_window_ParamLimits

0x50f7,	// (0x0002312a) popup_call_poc_act_window

0x5104,	// (0x00023137) popup_call_poc_inact_window_ParamLimits

0x5104,	// (0x00023137) popup_call_poc_inact_window

0xf594,	// (0x0002d5c7) bg_popup_call_poc_act_pane_g

0xc287,	// (0x0002a2ba) bg_popup_call_poc_inact_pane_g1

0xc28f,	// (0x0002a2c2) bg_popup_call_poc_inact_pane_g2

0xb3b7,	// (0x000293ea) popup_call_poc_act_window_g2

0xc297,	// (0x0002a2ca) bg_popup_call_poc_inact_pane_g3

0xc29f,	// (0x0002a2d2) bg_popup_call_poc_inact_pane_g4

0xc2a7,	// (0x0002a2da) bg_popup_call_poc_inact_pane_g5

0xb3bf,	// (0x000293f2) popup_call_poc_act_window_t1_ParamLimits

0xb3bf,	// (0x000293f2) popup_call_poc_act_window_t1

0xb3e7,	// (0x0002941a) popup_call_poc_act_window_t2_ParamLimits

0xb3e7,	// (0x0002941a) popup_call_poc_act_window_t2

0xb40f,	// (0x00029442) popup_call_poc_act_window_t3_ParamLimits

0xb40f,	// (0x00029442) popup_call_poc_act_window_t3

0xb437,	// (0x0002946a) popup_call_poc_act_window_t4_ParamLimits

0xb437,	// (0x0002946a) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0002d535) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0002d535) popup_call_poc_act_window_t

0xc2af,	// (0x0002a2e2) bg_popup_call_poc_inact_pane_g6

0xc2b7,	// (0x0002a2ea) bg_popup_call_poc_inact_pane_g7

0xc2bf,	// (0x0002a2f2) bg_popup_call_poc_inact_pane_g8

0xb449,	// (0x0002947c) popup_call_poc_inact_window_g2

0xc2c7,	// (0x0002a2fa) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0002d5b4) bg_popup_call_poc_inact_pane_g

0xb451,	// (0x00029484) popup_call_poc_inact_window_t1_ParamLimits

0xb451,	// (0x00029484) popup_call_poc_inact_window_t1

0xb466,	// (0x00029499) popup_call_poc_inact_window_t2_ParamLimits

0xb466,	// (0x00029499) popup_call_poc_inact_window_t2

0xb47b,	// (0x000294ae) popup_call_poc_inact_window_t3_ParamLimits

0xb47b,	// (0x000294ae) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0002d53e) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0002d53e) popup_call_poc_inact_window_t

0xc44c,	// (0x0002a47f) context_pane_ParamLimits

0x55ba,	// (0x000235ed) signal_pane_ParamLimits

0xafab,	// (0x00028fde) main_call2_pane

0x16ac,	// (0x0001f6df) popup_phob_thumbnail2_window_ParamLimits

0x16ac,	// (0x0001f6df) popup_phob_thumbnail2_window

0x1509,	// (0x0001f53c) aid_hotspot_pointer_arrow_pane

0x1511,	// (0x0001f544) aid_hotspot_pointer_hand_pane

0x5426,	// (0x00023459) phob_pre_status_pane_g5

0x2fcd,	// (0x00021000) cams_zoom_pane_ParamLimits

0x2fd9,	// (0x0002100c) image_vga_pane_ParamLimits

0x2fe8,	// (0x0002101b) main_camera_pane_g1_ParamLimits

0x2ff6,	// (0x00021029) main_camera_pane_g2_ParamLimits

0x3002,	// (0x00021035) main_camera_pane_g3_ParamLimits

0x300e,	// (0x00021041) main_camera_pane_g4_ParamLimits

0x301a,	// (0x0002104d) main_camera_pane_g5_ParamLimits

0x3026,	// (0x00021059) main_camera_pane_g6_ParamLimits

0x3032,	// (0x00021065) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0002d23d) main_camera_pane_g_ParamLimits

0x303e,	// (0x00021071) main_camera_pane_t1_ParamLimits

0x3050,	// (0x00021083) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0002d24e) main_camera_pane_t_ParamLimits

0xa2c0,	// (0x000282f3) bg_popup_preview_window_pane_cp01_ParamLimits

0xa2c0,	// (0x000282f3) bg_popup_preview_window_pane_cp01

0xb490,	// (0x000294c3) popup_phob_thumbnail2_window_g1_ParamLimits

0xb490,	// (0x000294c3) popup_phob_thumbnail2_window_g1

0xa065,	// (0x00028098) call2_cli_visual_pane

0x5120,	// (0x00023153) popup_call2_audio_conf_window_ParamLimits

0x5120,	// (0x00023153) popup_call2_audio_conf_window

0x5135,	// (0x00023168) popup_call2_audio_first_window_ParamLimits

0x5135,	// (0x00023168) popup_call2_audio_first_window

0x51d3,	// (0x00023206) popup_call2_audio_in_window_ParamLimits

0x51d3,	// (0x00023206) popup_call2_audio_in_window

0x5215,	// (0x00023248) popup_call2_audio_out_window_ParamLimits

0x5215,	// (0x00023248) popup_call2_audio_out_window

0x5277,	// (0x000232aa) popup_call2_audio_second_window_ParamLimits

0x5277,	// (0x000232aa) popup_call2_audio_second_window

0x52d5,	// (0x00023308) popup_call2_audio_wait_window_ParamLimits

0x52d5,	// (0x00023308) popup_call2_audio_wait_window

0xa065,	// (0x00028098) bg_popup_call2_act_pane_cp03

0xa2a2,	// (0x000282d5) list_conf_pane_cp

0xb49c,	// (0x000294cf) popup_call2_audio_conf_window_t1

0xac94,	// (0x00028cc7) list_single_graphic_popup_conf2_pane_ParamLimits

0xac94,	// (0x00028cc7) list_single_graphic_popup_conf2_pane

0xaca7,	// (0x00028cda) list_highlight_pane_cp04

0xb4aa,	// (0x000294dd) list_single_graphic_popup_conf2_pane_g1

0xacb8,	// (0x00028ceb) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0002d545) list_single_graphic_popup_conf2_pane_g

0xb4b4,	// (0x000294e7) list_single_graphic_popup_conf2_pane_t1

0xb4c2,	// (0x000294f5) bg_popup_call2_act_pane_cp01_ParamLimits

0xb4c2,	// (0x000294f5) bg_popup_call2_act_pane_cp01

0xb54c,	// (0x0002957f) call_type_pane_cp05_ParamLimits

0xb54c,	// (0x0002957f) call_type_pane_cp05

0xb5a0,	// (0x000295d3) popup_call2_audio_second_window_g1_ParamLimits

0xb5a0,	// (0x000295d3) popup_call2_audio_second_window_g1

0xb5f4,	// (0x00029627) popup_call2_audio_second_window_g2_ParamLimits

0xb5f4,	// (0x00029627) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0002d54a) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0002d54a) popup_call2_audio_second_window_g

0xb659,	// (0x0002968c) popup_call2_audio_second_window_t1_ParamLimits

0xb659,	// (0x0002968c) popup_call2_audio_second_window_t1

0xb714,	// (0x00029747) popup_call2_audio_second_window_t2_ParamLimits

0xb714,	// (0x00029747) popup_call2_audio_second_window_t2

0xb767,	// (0x0002979a) popup_call2_audio_second_window_t3_ParamLimits

0xb767,	// (0x0002979a) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0002d551) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0002d551) popup_call2_audio_second_window_t

0xa065,	// (0x00028098) bg_popup_call2_in_pane_cp02

0xa06f,	// (0x000280a2) call_type_pane_cp04

0xa077,	// (0x000280aa) popup_call2_audio_wait_window_g1

0xa07f,	// (0x000280b2) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0002d128) popup_call2_audio_wait_window_g

0xa087,	// (0x000280ba) popup_call2_audio_wait_window_t3

0xb85a,	// (0x0002988d) bg_popup_call2_act_pane_ParamLimits

0xb85a,	// (0x0002988d) bg_popup_call2_act_pane

0xb91a,	// (0x0002994d) call_type_pane_cp03_ParamLimits

0xb91a,	// (0x0002994d) call_type_pane_cp03

0xb97e,	// (0x000299b1) popup_call2_audio_first_window_g1_ParamLimits

0xb97e,	// (0x000299b1) popup_call2_audio_first_window_g1

0xb9ee,	// (0x00029a21) popup_call2_audio_first_window_g2_ParamLimits

0xb9ee,	// (0x00029a21) popup_call2_audio_first_window_g2

0xb05e,	// (0x00029091) popup_call2_audio_first_window_g3_ParamLimits

0xb05e,	// (0x00029091) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0002d55a) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0002d55a) popup_call2_audio_first_window_g

0xbacc,	// (0x00029aff) popup_call2_audio_first_window_t1_ParamLimits

0xbacc,	// (0x00029aff) popup_call2_audio_first_window_t1

0xbbcf,	// (0x00029c02) popup_call2_audio_first_window_t4_ParamLimits

0xbbcf,	// (0x00029c02) popup_call2_audio_first_window_t4

0xbcb2,	// (0x00029ce5) popup_call2_audio_first_window_t5_ParamLimits

0xbcb2,	// (0x00029ce5) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0002d565) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0002d565) popup_call2_audio_first_window_t

0xa2b8,	// (0x000282eb) bg_popup_call2_act_pane_g1

0xc31f,	// (0x0002a352) popup_cale_lunar_info_window_t1

0xc32d,	// (0x0002a360) popup_cale_lunar_info_window_t2

0xc33b,	// (0x0002a36e) popup_cale_lunar_info_window_t3

0xa065,	// (0x00028098) bg_popup_call2_bubble_pane

0xbdb3,	// (0x00029de6) bg_popup_call2_in_pane_cp01_ParamLimits

0xbdb3,	// (0x00029de6) bg_popup_call2_in_pane_cp01

0x9d41,	// (0x00027d74) call_type_pane_cp02

0xbdfb,	// (0x00029e2e) popup_call2_audio_out_window_g1_ParamLimits

0xbdfb,	// (0x00029e2e) popup_call2_audio_out_window_g1

0xbe27,	// (0x00029e5a) popup_call2_audio_out_window_g2_ParamLimits

0xbe27,	// (0x00029e5a) popup_call2_audio_out_window_g2

0xbe4f,	// (0x00029e82) popup_call2_audio_out_window_g3_ParamLimits

0xbe4f,	// (0x00029e82) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0002d56e) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0002d56e) popup_call2_audio_out_window_g

0xbe8a,	// (0x00029ebd) popup_call2_audio_out_window_t1_ParamLimits

0xbe8a,	// (0x00029ebd) popup_call2_audio_out_window_t1

0xbee9,	// (0x00029f1c) popup_call2_audio_out_window_t2_ParamLimits

0xbee9,	// (0x00029f1c) popup_call2_audio_out_window_t2

0xbf3d,	// (0x00029f70) popup_call2_audio_out_window_t3_ParamLimits

0xbf3d,	// (0x00029f70) popup_call2_audio_out_window_t3

0xbf53,	// (0x00029f86) popup_call2_audio_out_window_t4_ParamLimits

0xbf53,	// (0x00029f86) popup_call2_audio_out_window_t4

0xbf69,	// (0x00029f9c) popup_call2_audio_out_window_t5_ParamLimits

0xbf69,	// (0x00029f9c) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0002d577) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0002d577) popup_call2_audio_out_window_t

0xbfcd,	// (0x0002a000) bg_popup_call2_in_pane_ParamLimits

0xbfcd,	// (0x0002a000) bg_popup_call2_in_pane

0xc029,	// (0x0002a05c) popup_call2_audio_in_window_g1_ParamLimits

0xc029,	// (0x0002a05c) popup_call2_audio_in_window_g1

0xc061,	// (0x0002a094) popup_call2_audio_in_window_g2_ParamLimits

0xc061,	// (0x0002a094) popup_call2_audio_in_window_g2

0xc099,	// (0x0002a0cc) popup_call2_audio_in_window_g3_ParamLimits

0xc099,	// (0x0002a0cc) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0002d584) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0002d584) popup_call2_audio_in_window_g

0xc0f1,	// (0x0002a124) popup_call2_audio_in_window_t1_ParamLimits

0xc0f1,	// (0x0002a124) popup_call2_audio_in_window_t1

0xc171,	// (0x0002a1a4) popup_call2_audio_in_window_t2_ParamLimits

0xc171,	// (0x0002a1a4) popup_call2_audio_in_window_t2

0xc1f1,	// (0x0002a224) popup_call2_audio_in_window_t3_ParamLimits

0xc1f1,	// (0x0002a224) popup_call2_audio_in_window_t3

0xc20b,	// (0x0002a23e) popup_call2_audio_in_window_t4_ParamLimits

0xc20b,	// (0x0002a23e) popup_call2_audio_in_window_t4

0xc21d,	// (0x0002a250) popup_call2_audio_in_window_t5_ParamLimits

0xc21d,	// (0x0002a250) popup_call2_audio_in_window_t5

0xc232,	// (0x0002a265) popup_call2_audio_in_window_t6_ParamLimits

0xc232,	// (0x0002a265) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0002d58d) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0002d58d) popup_call2_audio_in_window_t

0xa2b8,	// (0x000282eb) bg_popup_call2_in_pane_g1

0xc349,	// (0x0002a37c) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0002d5f5) popup_cale_lunar_info_window_t

0xa2c0,	// (0x000282f3) bg_popup_call2_rect_pane_ParamLimits

0xa2c0,	// (0x000282f3) bg_popup_call2_rect_pane

0xa065,	// (0x00028098) call2_cli_visual_graphic_pane

0xa065,	// (0x00028098) call2_cli_visual_text_pane

0x16fb,	// (0x0001f72e) smil_status_volume_pane_g3

0x0002,

0xa3e8,	// (0x0002841b) call2_cli_visual_graphic_pane_g1

0xa3e8,	// (0x0002841b) call2_cli_visual_graphic_pane_g2

0xa3e8,	// (0x0002841b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0002d59a) call2_cli_visual_graphic_pane_g

0xc247,	// (0x0002a27a) bg_popup_call2_rect_pane_g1

0xa474,	// (0x000284a7) bg_popup_call2_rect_pane_g2

0xc24f,	// (0x0002a282) bg_popup_call2_rect_pane_g3

0xc257,	// (0x0002a28a) bg_popup_call2_rect_pane_g4

0xc25f,	// (0x0002a292) bg_popup_call2_rect_pane_g5

0xc267,	// (0x0002a29a) bg_popup_call2_rect_pane_g6

0xc26f,	// (0x0002a2a2) bg_popup_call2_rect_pane_g7

0xc277,	// (0x0002a2aa) bg_popup_call2_rect_pane_g8

0xc27f,	// (0x0002a2b2) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0002d5a1) bg_popup_call2_rect_pane_g

0xc287,	// (0x0002a2ba) bg_popup_call2_bubble_pane_g1

0xc28f,	// (0x0002a2c2) bg_popup_call2_bubble_pane_g2

0xc297,	// (0x0002a2ca) bg_popup_call2_bubble_pane_g3

0xc29f,	// (0x0002a2d2) bg_popup_call2_bubble_pane_g4

0xc2a7,	// (0x0002a2da) bg_popup_call2_bubble_pane_g5

0xc2af,	// (0x0002a2e2) bg_popup_call2_bubble_pane_g6

0xc2b7,	// (0x0002a2ea) bg_popup_call2_bubble_pane_g7

0xc2bf,	// (0x0002a2f2) bg_popup_call2_bubble_pane_g8

0xc2c7,	// (0x0002a2fa) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0002d5b4) bg_popup_call2_bubble_pane_g

0x2b48,	// (0x00020b7b) aid_cale_week_size_cell_pane

0x3062,	// (0x00021095) aid_cams_cif_uncrop_pane_ParamLimits

0x3062,	// (0x00021095) aid_cams_cif_uncrop_pane

0x31bd,	// (0x000211f0) aid_cams_size_cell_ParamLimits

0x31bd,	// (0x000211f0) aid_cams_size_cell

0x31c9,	// (0x000211fc) grid_cams_pane_ParamLimits

0x31d7,	// (0x0002120a) linegrid_cams_pane_ParamLimits

0x33c3,	// (0x000213f6) call_video_pane_t1

0x33e4,	// (0x00021417) call_video_pane_t2

0x0001,

0xf26e,	// (0x0002d2a1) call_video_pane_t

0x392d,	// (0x00021960) aid_cale_month_size_cell_pane_ParamLimits

0x392d,	// (0x00021960) aid_cale_month_size_cell_pane

0xf60b,	// (0x0002d63e) smil_status_volume_pane_g

0x1708,	// (0x0001f73b) volume_smil_pane_ParamLimits

0x0e32,	// (0x0001ee65) aid_popup2_width_pane

0x2a84,	// (0x00020ab7) cell_qdial_pane_g4_ParamLimits

0x2a84,	// (0x00020ab7) cell_qdial_pane_g4

0x4884,	// (0x000228b7) aid_blid_cardinal_pane_ParamLimits

0x4894,	// (0x000228c7) aid_blid_destination_pane_ParamLimits

0x4894,	// (0x000228c7) aid_blid_destination_pane

0xa2c0,	// (0x000282f3) bg_popup_call_poc_act_pane_ParamLimits

0xa2c0,	// (0x000282f3) bg_popup_call_poc_act_pane

0xa2c0,	// (0x000282f3) bg_popup_call_poc_inact_pane_ParamLimits

0xa2c0,	// (0x000282f3) bg_popup_call_poc_inact_pane

0xc2cf,	// (0x0002a302) bg_popup_call_poc_act_pane_g1

0xc2d7,	// (0x0002a30a) bg_popup_call_poc_act_pane_g2

0xc2df,	// (0x0002a312) bg_popup_call_poc_act_pane_g3

0xc29f,	// (0x0002a2d2) bg_popup_call_poc_act_pane_g4

0xc2a7,	// (0x0002a2da) bg_popup_call_poc_act_pane_g5

0xc2e7,	// (0x0002a31a) bg_popup_call_poc_act_pane_g6

0xc2b7,	// (0x0002a2ea) bg_popup_call_poc_act_pane_g7

0xc2ef,	// (0x0002a322) bg_popup_call_poc_act_pane_g8

0xa065,	// (0x00028098) main_usb_pane

0x15db,	// (0x0001f60e) popup_cale_lunar_info_window

0x370f,	// (0x00021742) im_reading_pane_t1_ParamLimits

0xa652,	// (0x00028685) list_im_pane_ParamLimits

0xa663,	// (0x00028696) scroll_pane_cp07_ParamLimits

0xa065,	// (0x00028098) grid_highlight_pane_cp012

0xa2c0,	// (0x000282f3) mup_scale_pane_ParamLimits

0xb05e,	// (0x00029091) main_usb_pane_g1_ParamLimits

0xb05e,	// (0x00029091) main_usb_pane_g1

0x5349,	// (0x0002337c) main_usb_pane_g2_ParamLimits

0x5349,	// (0x0002337c) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0002d5de) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0002d5de) main_usb_pane_g

0x5355,	// (0x00023388) main_usb_pane_t1_ParamLimits

0x5355,	// (0x00023388) main_usb_pane_t1

0x5367,	// (0x0002339a) main_usb_pane_t2_ParamLimits

0x5367,	// (0x0002339a) main_usb_pane_t2

0x5379,	// (0x000233ac) main_usb_pane_t3_ParamLimits

0x5379,	// (0x000233ac) main_usb_pane_t3

0x538b,	// (0x000233be) main_usb_pane_t4_ParamLimits

0x538b,	// (0x000233be) main_usb_pane_t4

0x539d,	// (0x000233d0) main_usb_pane_t5_ParamLimits

0x539d,	// (0x000233d0) main_usb_pane_t5

0x53af,	// (0x000233e2) main_usb_pane_t6_ParamLimits

0x53af,	// (0x000233e2) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0002d5e3) main_usb_pane_t_ParamLimits

0x482a,	// (0x0002285d) aid_text_placing

0x4836,	// (0x00022869) main_location2_pane_t1_ParamLimits

0x484a,	// (0x0002287d) main_location2_pane_t2_ParamLimits

0x485e,	// (0x00022891) main_location2_pane_t3_ParamLimits

0x4872,	// (0x000228a5) main_location2_pane_t4_ParamLimits

0x4872,	// (0x000228a5) main_location2_pane_t4

0xf3cf,	// (0x0002d402) main_location2_pane_t_ParamLimits

0xa2fc,	// (0x0002832f) find_pinb_pane_g2_ParamLimits

0xa2fc,	// (0x0002832f) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0002d14e) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0002d14e) find_pinb_pane_g

0xa308,	// (0x0002833b) find_pinb_pane_t1_ParamLimits

0xa31a,	// (0x0002834d) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0002d153) find_pinb_pane_t_ParamLimits

0xa065,	// (0x00028098) main_call3_pane

0x3e81,	// (0x00021eb4) cale_month_day_heading_pane_t1_ParamLimits

0x3f07,	// (0x00021f3a) cale_month_day_heading_pane_t2_ParamLimits

0x3f98,	// (0x00021fcb) cale_month_day_heading_pane_t3_ParamLimits

0x4029,	// (0x0002205c) cale_month_day_heading_pane_t4_ParamLimits

0x40ba,	// (0x000220ed) cale_month_day_heading_pane_t5_ParamLimits

0x414b,	// (0x0002217e) cale_month_day_heading_pane_t6_ParamLimits

0x41dc,	// (0x0002220f) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0002d2d9) cale_month_day_heading_pane_t_ParamLimits

0xa8ad,	// (0x000288e0) smil_status_volume_pane

0x4f0d,	// (0x00022f40) postcard_address_pane_ParamLimits

0x4f0d,	// (0x00022f40) postcard_address_pane

0x4f19,	// (0x00022f4c) postcard_message_pane_ParamLimits

0x4f19,	// (0x00022f4c) postcard_message_pane

0x5314,	// (0x00023347) call2_cli_visual_pane_t1_ParamLimits

0x5314,	// (0x00023347) call2_cli_visual_pane_t1

0x57a2,	// (0x000237d5) postcard_message_pane_t1_ParamLimits

0x57a2,	// (0x000237d5) postcard_message_pane_t1

0x578b,	// (0x000237be) postcard_address_pane_t1_ParamLimits

0x578b,	// (0x000237be) postcard_address_pane_t1

0x577c,	// (0x000237af) popup_call3_audio_in_window_ParamLimits

0x577c,	// (0x000237af) popup_call3_audio_in_window

0x5660,	// (0x00023693) bg_popup_call3_in_pane_ParamLimits

0x5660,	// (0x00023693) bg_popup_call3_in_pane

0x56c2,	// (0x000236f5) popup_call3_audio_in_window_g1_ParamLimits

0x56c2,	// (0x000236f5) popup_call3_audio_in_window_g1

0x56da,	// (0x0002370d) popup_call3_audio_in_window_g2_ParamLimits

0x56da,	// (0x0002370d) popup_call3_audio_in_window_g2

0x56f2,	// (0x00023725) popup_call3_audio_in_window_g3_ParamLimits

0x56f2,	// (0x00023725) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0002d645) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0002d645) popup_call3_audio_in_window_g

0x571a,	// (0x0002374d) popup_call3_audio_in_window_t1_ParamLimits

0x571a,	// (0x0002374d) popup_call3_audio_in_window_t1

0x5742,	// (0x00023775) popup_call3_audio_in_window_t2_ParamLimits

0x5742,	// (0x00023775) popup_call3_audio_in_window_t2

0x576a,	// (0x0002379d) popup_call3_audio_in_window_t3_ParamLimits

0x576a,	// (0x0002379d) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0002d64e) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0002d64e) popup_call3_audio_in_window_t

0xafab,	// (0x00028fde) bg_popup_call3_rect_pane

0xc247,	// (0x0002a27a) bg_popup_call3_rect_pane_g1

0xa474,	// (0x000284a7) bg_popup_call3_rect_pane_g2

0xc24f,	// (0x0002a282) bg_popup_call3_rect_pane_g3

0xc257,	// (0x0002a28a) bg_popup_call3_rect_pane_g4

0xc25f,	// (0x0002a292) bg_popup_call3_rect_pane_g5

0xc267,	// (0x0002a29a) bg_popup_call3_rect_pane_g6

0xc26f,	// (0x0002a2a2) bg_popup_call3_rect_pane_g7

0x4b98,	// (0x00022bcb) mup_visualizer_osc_pane

0xb084,	// (0x000290b7) mup_visualizer_spec_pane

0x5680,	// (0x000236b3) call3_video_qcif_pane_ParamLimits

0x5680,	// (0x000236b3) call3_video_qcif_pane

0x5692,	// (0x000236c5) call3_video_qcif_uncrop_pane_ParamLimits

0x5692,	// (0x000236c5) call3_video_qcif_uncrop_pane

0x56a0,	// (0x000236d3) call3_video_subqcif_pane_ParamLimits

0x56a0,	// (0x000236d3) call3_video_subqcif_pane

0x56b2,	// (0x000236e5) call3_video_subqcif_uncrop_pane_ParamLimits

0x56b2,	// (0x000236e5) call3_video_subqcif_uncrop_pane

0x570a,	// (0x0002373d) popup_call3_audio_in_window_g4_ParamLimits

0x570a,	// (0x0002373d) popup_call3_audio_in_window_g4

0x564f,	// (0x00023682) mup_spec_half_pane

0x5658,	// (0x0002368b) mup_spec_half_pane_cp

0xc4ac,	// (0x0002a4df) mup_osc_middle_pane

0xc4b5,	// (0x0002a4e8) mup_visualizer_osc_pane_g1

0x5630,	// (0x00023663) mup_spec_bar_pane_ParamLimits

0x5630,	// (0x00023663) mup_spec_bar_pane

0xc499,	// (0x0002a4cc) mup_spec_bar_pane_g1

0xc4a3,	// (0x0002a4d6) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002d639) mup_spec_bar_pane_g

0x2b48,	// (0x00020b7b) aid_cale_week_size_cell_pane_ParamLimits

0x2b5d,	// (0x00020b90) bg_cale_heading_pane_ParamLimits

0xa4b1,	// (0x000284e4) bg_cale_pane_cp01_ParamLimits

0x2b7f,	// (0x00020bb2) cale_week_corner_pane_ParamLimits

0x2b99,	// (0x00020bcc) cale_week_day_heading_pane_ParamLimits

0x2bbb,	// (0x00020bee) cale_week_scroll_pane_g1_ParamLimits

0x2bd8,	// (0x00020c0b) cale_week_scroll_pane_g2_ParamLimits

0x2beb,	// (0x00020c1e) cale_week_scroll_pane_g3_ParamLimits

0x2bfe,	// (0x00020c31) cale_week_scroll_pane_g4_ParamLimits

0x2c11,	// (0x00020c44) cale_week_scroll_pane_g5_ParamLimits

0x2c24,	// (0x00020c57) cale_week_scroll_pane_g6_ParamLimits

0x2c37,	// (0x00020c6a) cale_week_scroll_pane_g7_ParamLimits

0x2c4a,	// (0x00020c7d) cale_week_scroll_pane_g8_ParamLimits

0x2c5f,	// (0x00020c92) cale_week_scroll_pane_g9_ParamLimits

0x2c72,	// (0x00020ca5) cale_week_scroll_pane_g10_ParamLimits

0x2c85,	// (0x00020cb8) cale_week_scroll_pane_g11_ParamLimits

0x2c98,	// (0x00020ccb) cale_week_scroll_pane_g12_ParamLimits

0x2caf,	// (0x00020ce2) cale_week_scroll_pane_g13_ParamLimits

0x2cca,	// (0x00020cfd) cale_week_scroll_pane_g14_ParamLimits

0x2ce5,	// (0x00020d18) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0002d1df) cale_week_scroll_pane_g_ParamLimits

0x2d15,	// (0x00020d48) cale_week_time_pane_ParamLimits

0x2d2a,	// (0x00020d5d) grid_cale_week_pane_ParamLimits

0xa4cf,	// (0x00028502) listscroll_cale_week_pane_t1

0xa4e1,	// (0x00028514) scroll_pane_cp08_ParamLimits

0x3996,	// (0x000219c9) cale_month_corner_pane_ParamLimits

0xa883,	// (0x000288b6) cale_month_pane_t1

0x3e1e,	// (0x00021e51) cale_month_week_pane_ParamLimits

0xb05e,	// (0x00029091) popup_call_status_window_g1_ParamLimits

0x46d0,	// (0x00022703) popup_call_status_window_g2_ParamLimits

0x46dc,	// (0x0002270f) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0002d389) popup_call_status_window_g_ParamLimits

0xac27,	// (0x00028c5a) aid_call2_pane

0x4e2b,	// (0x00022e5e) msg_header_pane_g1

0x4f0d,	// (0x00022f40) postcard_address2_pane_ParamLimits

0x4f0d,	// (0x00022f40) postcard_address2_pane

0x4f19,	// (0x00022f4c) postcard_message2_pane_ParamLimits

0x4f19,	// (0x00022f4c) postcard_message2_pane

0x55c8,	// (0x000235fb) message2_row_pane_ParamLimits

0x55c8,	// (0x000235fb) message2_row_pane

0x55e3,	// (0x00023616) address2_row_pane_ParamLimits

0x55e3,	// (0x00023616) address2_row_pane

0xc467,	// (0x0002a49a) postcard_message2_row_pane_g1

0xc46f,	// (0x0002a4a2) postcard_message2_row_pane_t1

0xc467,	// (0x0002a49a) address2_row_pane_g1

0xc46f,	// (0x0002a4a2) address2_row_pane_t1

0x13b0,	// (0x0001f3e3) aid_size_cell_vorec

0xa065,	// (0x00028098) main_rss_pane

0x55f6,	// (0x00023629) rss_list_single_pane_ParamLimits

0x55f6,	// (0x00023629) rss_list_single_pane

0xc47d,	// (0x0002a4b0) rss_list_single_pane_t1

0xc48b,	// (0x0002a4be) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0002d634) rss_list_single_pane_t

0xa065,	// (0x00028098) main_camera2_pane

0xa065,	// (0x00028098) main_video2_pane

0x1766,	// (0x0001f799) cams_zoom_pane_cp2_ParamLimits

0x1766,	// (0x0001f799) cams_zoom_pane_cp2

0x1772,	// (0x0001f7a5) image2_vga_pane_ParamLimits

0x1772,	// (0x0001f7a5) image2_vga_pane

0x1781,	// (0x0001f7b4) main_camera2_pane_g1_ParamLimits

0x1781,	// (0x0001f7b4) main_camera2_pane_g1

0x178d,	// (0x0001f7c0) main_camera2_pane_g2_ParamLimits

0x178d,	// (0x0001f7c0) main_camera2_pane_g2

0x1799,	// (0x0001f7cc) main_camera2_pane_g3_ParamLimits

0x1799,	// (0x0001f7cc) main_camera2_pane_g3

0x17a5,	// (0x0001f7d8) main_camera2_pane_g4_ParamLimits

0x17a5,	// (0x0001f7d8) main_camera2_pane_g4

0x17b1,	// (0x0001f7e4) main_camera2_pane_g5_ParamLimits

0x17b1,	// (0x0001f7e4) main_camera2_pane_g5

0x17bd,	// (0x0001f7f0) main_camera2_pane_g6_ParamLimits

0x17bd,	// (0x0001f7f0) main_camera2_pane_g6

0x17c9,	// (0x0001f7fc) main_camera2_pane_g7_ParamLimits

0x17c9,	// (0x0001f7fc) main_camera2_pane_g7

0x17d5,	// (0x0001f808) main_camera2_pane_g8_ParamLimits

0x17d5,	// (0x0001f808) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0002d655) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0002d655) main_camera2_pane_g

0x17ed,	// (0x0001f820) main_camera2_pane_t1_ParamLimits

0x17ed,	// (0x0001f820) main_camera2_pane_t1

0x17ff,	// (0x0001f832) main_camera2_pane_t2_ParamLimits

0x17ff,	// (0x0001f832) main_camera2_pane_t2

0x1811,	// (0x0001f844) main_camera2_pane_t3_ParamLimits

0x1811,	// (0x0001f844) main_camera2_pane_t3

0x1823,	// (0x0001f856) main_camera2_pane_t4_ParamLimits

0x1823,	// (0x0001f856) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0002d668) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0002d668) main_camera2_pane_t

0x1885,	// (0x0001f8b8) cams_zoom_pane_cp4_ParamLimits

0x1885,	// (0x0001f8b8) cams_zoom_pane_cp4

0x1895,	// (0x0001f8c8) image2_cif_pane_ParamLimits

0x1895,	// (0x0001f8c8) image2_cif_pane

0x18aa,	// (0x0001f8dd) image2_subqcif_pane_ParamLimits

0x18aa,	// (0x0001f8dd) image2_subqcif_pane

0x18b9,	// (0x0001f8ec) main_video2_pane_g1_ParamLimits

0x18b9,	// (0x0001f8ec) main_video2_pane_g1

0x18cb,	// (0x0001f8fe) main_video2_pane_g2_ParamLimits

0x18cb,	// (0x0001f8fe) main_video2_pane_g2

0x18db,	// (0x0001f90e) main_video2_pane_g3_ParamLimits

0x18db,	// (0x0001f90e) main_video2_pane_g3

0x18eb,	// (0x0001f91e) main_video2_pane_g4_ParamLimits

0x18eb,	// (0x0001f91e) main_video2_pane_g4

0x18fb,	// (0x0001f92e) main_video2_pane_g5_ParamLimits

0x18fb,	// (0x0001f92e) main_video2_pane_g5

0x190b,	// (0x0001f93e) main_video2_pane_g6_ParamLimits

0x190b,	// (0x0001f93e) main_video2_pane_g6

0x0005,

0xf644,	// (0x0002d677) main_video2_pane_g_ParamLimits

0xf644,	// (0x0002d677) main_video2_pane_g

0x191d,	// (0x0001f950) main_video2_pane_t1_ParamLimits

0x191d,	// (0x0001f950) main_video2_pane_t1

0x1937,	// (0x0001f96a) main_video2_pane_t2_ParamLimits

0x1937,	// (0x0001f96a) main_video2_pane_t2

0x195d,	// (0x0001f990) main_video2_pane_t3_ParamLimits

0x195d,	// (0x0001f990) main_video2_pane_t3

0x0002,

0xf651,	// (0x0002d684) main_video2_pane_t_ParamLimits

0xf651,	// (0x0002d684) main_video2_pane_t

0x5466,	// (0x00023499) call_muted_g2

0x0001,

0xf5f3,	// (0x0002d626) call_muted_g

0xa065,	// (0x00028098) main_mup2_pane

0xc4ec,	// (0x0002a51f) main_mup2_pane_g1_ParamLimits

0xc4ec,	// (0x0002a51f) main_mup2_pane_g1

0x57bd,	// (0x000237f0) main_mup2_pane_g2_ParamLimits

0x57bd,	// (0x000237f0) main_mup2_pane_g2

0x19ac,	// (0x0001f9df) main_mup_pane_g13_cp1

0x19b4,	// (0x0001f9e7) mup_volume_pane_cp1

0x57dd,	// (0x00023810) main_mup2_pane_g4_ParamLimits

0x57dd,	// (0x00023810) main_mup2_pane_g4

0x57f2,	// (0x00023825) main_mup2_pane_g5_ParamLimits

0x57f2,	// (0x00023825) main_mup2_pane_g5

0x5807,	// (0x0002383a) main_mup2_pane_g6_ParamLimits

0x5807,	// (0x0002383a) main_mup2_pane_g6

0x581c,	// (0x0002384f) main_mup2_pane_g7_ParamLimits

0x581c,	// (0x0002384f) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0002d68b) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0002d68b) main_mup2_pane_g

0x5838,	// (0x0002386b) main_mup2_pane_t1_ParamLimits

0x5838,	// (0x0002386b) main_mup2_pane_t1

0x584f,	// (0x00023882) main_mup2_pane_t2_ParamLimits

0x584f,	// (0x00023882) main_mup2_pane_t2

0x5866,	// (0x00023899) main_mup2_pane_t3_ParamLimits

0x5866,	// (0x00023899) main_mup2_pane_t3

0x587d,	// (0x000238b0) main_mup2_pane_t4_ParamLimits

0x587d,	// (0x000238b0) main_mup2_pane_t4

0x5897,	// (0x000238ca) main_mup2_pane_t5_ParamLimits

0x5897,	// (0x000238ca) main_mup2_pane_t5

0x58b1,	// (0x000238e4) main_mup2_pane_t6_ParamLimits

0x58b1,	// (0x000238e4) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0002d69a) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0002d69a) main_mup2_pane_t

0x58e9,	// (0x0002391c) mup2_visualizer_pane_ParamLimits

0x58e9,	// (0x0002391c) mup2_visualizer_pane

0x591f,	// (0x00023952) mup_progress_pane_cp_ParamLimits

0x591f,	// (0x00023952) mup_progress_pane_cp

0x1997,	// (0x0001f9ca) mup_volume_pane_cp_ParamLimits

0x1997,	// (0x0001f9ca) mup_volume_pane_cp

0x5936,	// (0x00023969) mup2_visualizer_pane_g1_ParamLimits

0x5936,	// (0x00023969) mup2_visualizer_pane_g1

0xc4f8,	// (0x0002a52b) mup2_visualizer_pane_g2_ParamLimits

0xc4f8,	// (0x0002a52b) mup2_visualizer_pane_g2

0x594b,	// (0x0002397e) mup2_visualizer_pane_g3_ParamLimits

0x594b,	// (0x0002397e) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0002d6a7) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0002d6a7) mup2_visualizer_pane_g

0xb32c,	// (0x0002935f) aid_size_cell_fmradio

0x156f,	// (0x0001f5a2) aid_height_parent_landcape

0xa6e1,	// (0x00028714) wml_content_pane_cp

0xa6e9,	// (0x0002871c) wml_tabs_pane

0xa6f2,	// (0x00028725) popup_wml_miniature_window

0xa6fa,	// (0x0002872d) scroll_pane_cp021

0xa70e,	// (0x00028741) wml_content_pane_comp8

0xa065,	// (0x00028098) bg_popup_sub_pane_cp05

0xc516,	// (0x0002a549) popup_wml_miniature_window_g1

0xc51e,	// (0x0002a551) wml_miniature_view_pane

0x5959,	// (0x0002398c) aid_size_wml_view

0x5961,	// (0x00023994) wml_miniature_view_pane_g1

0x596a,	// (0x0002399d) wml_miniature_view_pane_g2

0x5973,	// (0x000239a6) wml_miniature_view_pane_g3

0x597b,	// (0x000239ae) wml_miniature_view_pane_g4

0x5983,	// (0x000239b6) wml_miniature_view_pane_g5

0x598b,	// (0x000239be) wml_miniature_view_pane_g6

0x5993,	// (0x000239c6) wml_miniature_view_pane_g7

0x599b,	// (0x000239ce) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0002d6ae) wml_miniature_view_pane_g

0xc4ec,	// (0x0002a51f) background_graphic_ParamLimits

0xc4ec,	// (0x0002a51f) background_graphic

0xc526,	// (0x0002a559) wml_tabs_2_pane

0xc52f,	// (0x0002a562) wml_tabs_3_pane_ParamLimits

0xc52f,	// (0x0002a562) wml_tabs_3_pane

0xc541,	// (0x0002a574) wml_tabs_4_pane_ParamLimits

0xc541,	// (0x0002a574) wml_tabs_4_pane

0xc557,	// (0x0002a58a) wml_tabs_5_pane_ParamLimits

0xc557,	// (0x0002a58a) wml_tabs_5_pane

0xc571,	// (0x0002a5a4) wml_tabs_pane_g2_ParamLimits

0xc571,	// (0x0002a5a4) wml_tabs_pane_g2

0xc585,	// (0x0002a5b8) wml_tabs_pane_g3_ParamLimits

0xc585,	// (0x0002a5b8) wml_tabs_pane_g3

0x59a3,	// (0x000239d6) wml_tabs_2_active_pane_ParamLimits

0x59a3,	// (0x000239d6) wml_tabs_2_active_pane

0x59b3,	// (0x000239e6) wml_tabs_2_passive_pane_ParamLimits

0x59b3,	// (0x000239e6) wml_tabs_2_passive_pane

0x59c3,	// (0x000239f6) wml_tabs_3_active_pane_cp_ParamLimits

0x59c3,	// (0x000239f6) wml_tabs_3_active_pane_cp

0x59d4,	// (0x00023a07) wml_tabs_3_passive_pane_ParamLimits

0x59d4,	// (0x00023a07) wml_tabs_3_passive_pane

0x59e5,	// (0x00023a18) wml_tabs_3_passive_pane_cp_ParamLimits

0x59e5,	// (0x00023a18) wml_tabs_3_passive_pane_cp

0x59f6,	// (0x00023a29) tabs_4_active_pane

0x59fe,	// (0x00023a31) tabs_4_passive_pane

0x5a06,	// (0x00023a39) tabs_4_passive_pane_cp

0x5a0e,	// (0x00023a41) tabs_4_passive_pane_cp2

0x5341,	// (0x00023374) aid_height_text

0x4b65,	// (0x00022b98) mup_volume_cont_pane_ParamLimits

0x4b65,	// (0x00022b98) mup_volume_cont_pane

0x2823,	// (0x00020856) aid_size_cell_pinb

0x282d,	// (0x00020860) aid_size_list_pinb

0x5908,	// (0x0002393b) mup2_volume_cont_pane_ParamLimits

0x5908,	// (0x0002393b) mup2_volume_cont_pane

0x1983,	// (0x0001f9b6) mup2_volume_cont_pane_g1_ParamLimits

0x1983,	// (0x0001f9b6) mup2_volume_cont_pane_g1

0x0e3e,	// (0x0001ee71) aid_size_cell_touch_ParamLimits

0x0e3e,	// (0x0001ee71) aid_size_cell_touch

0x10c6,	// (0x0001f0f9) touch_pane_ParamLimits

0x10c6,	// (0x0001f0f9) touch_pane

0x10bc,	// (0x0001f0ef) main_rss2_pane

0xc5a2,	// (0x0002a5d5) listscroll_rss2_pane

0xc5ab,	// (0x0002a5de) rss2_navigation_pane

0xc5b3,	// (0x0002a5e6) list_rss2_pane

0xad6a,	// (0x00028d9d) scroll_pane_cp22

0xc5bb,	// (0x0002a5ee) rss2_navigation_pane_g1

0xc5c4,	// (0x0002a5f7) rss2_navigation_pane_g2

0xc5cc,	// (0x0002a5ff) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0002d6bf) rss2_navigation_pane_g

0xc5d4,	// (0x0002a607) rss2_navigation_pane_t1

0x5a16,	// (0x00023a49) rss2_list_single_pane_ParamLimits

0x5a16,	// (0x00023a49) rss2_list_single_pane

0xc5e2,	// (0x0002a615) rss2_list_single_pane_t2

0xc5f0,	// (0x0002a623) rss2_list_single_pane_t3_ParamLimits

0xc5f0,	// (0x0002a623) rss2_list_single_pane_t3

0xc60d,	// (0x0002a640) rss2_list_single_pane_t4

0x4482,	// (0x000224b5) smil_status_pane_g1

0x1586,	// (0x0001f5b9) main_image2_pane_ParamLimits

0x1586,	// (0x0001f5b9) main_image2_pane

0x17e1,	// (0x0001f814) main_camera2_pane_g9_ParamLimits

0x17e1,	// (0x0001f814) main_camera2_pane_g9

0x1835,	// (0x0001f868) main_camera2_pane_t5_ParamLimits

0x1835,	// (0x0001f868) main_camera2_pane_t5

0x1847,	// (0x0001f87a) main_camera2_pane_t6_ParamLimits

0x1847,	// (0x0001f87a) main_camera2_pane_t6

0x5a47,	// (0x00023a7a) main_image2_pane_g1_ParamLimits

0x5a47,	// (0x00023a7a) main_image2_pane_g1

0x50e1,	// (0x00023114) smil2_video_pane_ParamLimits

0x50e1,	// (0x00023114) smil2_video_pane

0x0e72,	// (0x0001eea5) aid_zoom_text_primary_cp

0x1063,	// (0x0001f096) popup_preview_fixed_window

0xa64a,	// (0x0002867d) im_reading_pane_g1

0x172b,	// (0x0001f75e) cams2_bc_adjust_pane_cp_ParamLimits

0x172b,	// (0x0001f75e) cams2_bc_adjust_pane_cp

0x1877,	// (0x0001f8aa) cams2_bc_adjust_pane_ParamLimits

0x1877,	// (0x0001f8aa) cams2_bc_adjust_pane

0xd937,	// (0x0002b96a) cams2_bc_adjust_pane_g1

0x19bc,	// (0x0001f9ef) cams2_slider_pane

0x19c5,	// (0x0001f9f8) cams2_slider_pane_g1

0x19ce,	// (0x0001fa01) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0002d6c6) cams2_slider_pane_g

0x1137,	// (0x0001f16a) calc_display_pane_ParamLimits

0x1155,	// (0x0001f188) calc_paper_pane_ParamLimits

0x1171,	// (0x0001f1a4) grid_calc_pane_ParamLimits

0x14da,	// (0x0001f50d) popup_clock_digital_window_t1_ParamLimits

0xb2c9,	// (0x000292fc) main_image_pane_t1

0x111d,	// (0x0001f150) aid_size_cell_calc_ParamLimits

0x111d,	// (0x0001f150) aid_size_cell_calc

0x15b7,	// (0x0001f5ea) popup_blid_sat_info2_window_ParamLimits

0x15b7,	// (0x0001f5ea) popup_blid_sat_info2_window

0xc623,	// (0x0002a656) aid_size_cell_blid

0xc62b,	// (0x0002a65e) bg_popup_window_pane_cp07

0xc64e,	// (0x0002a681) grid_popup_blid_pane

0xc658,	// (0x0002a68b) heading_pane_cp05_ParamLimits

0xc658,	// (0x0002a68b) heading_pane_cp05

0xc722,	// (0x0002a755) cell_popup_blid_pane_ParamLimits

0xc722,	// (0x0002a755) cell_popup_blid_pane

0xc746,	// (0x0002a779) cell_popup_blid_pane_g1

0xc74e,	// (0x0002a781) cell_popup_blid_pane_t1

0x58ce,	// (0x00023901) mup2_indicator_pane_ParamLimits

0x58ce,	// (0x00023901) mup2_indicator_pane

0xafab,	// (0x00028fde) mup2_visualizer_osc_pane

0xc504,	// (0x0002a537) mup2_visualizer_spec_pane_ParamLimits

0xc504,	// (0x0002a537) mup2_visualizer_spec_pane

0x5a53,	// (0x00023a86) mup2_spec_half_pane

0x5a5c,	// (0x00023a8f) mup2_spec_half_pane_cp

0x5a66,	// (0x00023a99) mup2_spec_bar_pane_ParamLimits

0x5a66,	// (0x00023a99) mup2_spec_bar_pane

0xc499,	// (0x0002a4cc) mup2_spec_bar_pane_g1

0xc4a3,	// (0x0002a4d6) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002d639) mup2_spec_bar_pane_g

0x5a85,	// (0x00023ab8) mup2_osc_middle_pane

0xc4b5,	// (0x0002a4e8) mup2_visualizer_osc_pane_g1

0x9c72,	// (0x00027ca5) popup_number_entry_window_t1_ParamLimits

0x9c85,	// (0x00027cb8) popup_number_entry_window_t2_ParamLimits

0x9c97,	// (0x00027cca) popup_number_entry_window_t3_ParamLimits

0x2760,	// (0x00020793) popup_number_entry_window_t5_ParamLimits

0x2760,	// (0x00020793) popup_number_entry_window_t5

0xf0c6,	// (0x0002d0f9) popup_number_entry_window_t_ParamLimits

0x9ca9,	// (0x00027cdc) text_title_cp2_ParamLimits

0x1519,	// (0x0001f54c) aid_hotspot_pointer_text2_pane

0x1563,	// (0x0001f596) main_viewer_pane_g9_ParamLimits

0x1563,	// (0x0001f596) main_viewer_pane_g9

0xa883,	// (0x000288b6) cale_month_pane_t1_ParamLimits

0xa8c0,	// (0x000288f3) bg_cale_pane_ParamLimits

0xa8d8,	// (0x0002890b) list_cale_pane_ParamLimits

0xa8e9,	// (0x0002891c) listscroll_cale_day_pane_t1

0xa8fb,	// (0x0002892e) scroll_pane_cp09_ParamLimits

0x4ba0,	// (0x00022bd3) main_mup_eq_pane_t1_ParamLimits

0x4ba0,	// (0x00022bd3) main_mup_eq_pane_t1

0x4bba,	// (0x00022bed) main_mup_eq_pane_t2_ParamLimits

0x4bba,	// (0x00022bed) main_mup_eq_pane_t2

0x4bd4,	// (0x00022c07) main_mup_eq_pane_t3_ParamLimits

0x4bd4,	// (0x00022c07) main_mup_eq_pane_t3

0x4bec,	// (0x00022c1f) main_mup_eq_pane_t4_ParamLimits

0x4bec,	// (0x00022c1f) main_mup_eq_pane_t4

0x4c04,	// (0x00022c37) main_mup_eq_pane_t5_ParamLimits

0x4c04,	// (0x00022c37) main_mup_eq_pane_t5

0x4c1c,	// (0x00022c4f) main_mup_eq_pane_t6_ParamLimits

0x4c1c,	// (0x00022c4f) main_mup_eq_pane_t6

0x4c30,	// (0x00022c63) main_mup_eq_pane_t7_ParamLimits

0x4c30,	// (0x00022c63) main_mup_eq_pane_t7

0x4c44,	// (0x00022c77) main_mup_eq_pane_t8_ParamLimits

0x4c44,	// (0x00022c77) main_mup_eq_pane_t8

0x4c5a,	// (0x00022c8d) main_mup_eq_pane_t9_ParamLimits

0x4c5a,	// (0x00022c8d) main_mup_eq_pane_t9

0x4c72,	// (0x00022ca5) main_mup_eq_pane_t10_ParamLimits

0x4c72,	// (0x00022ca5) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0002d488) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0002d488) main_mup_eq_pane_t

0x4d2f,	// (0x00022d62) mup_equalizer_pane_cp5_ParamLimits

0x4d45,	// (0x00022d78) mup_equalizer_pane_cp6_ParamLimits

0x4d5d,	// (0x00022d90) mup_equalizer_pane_cp7_ParamLimits

0x10bc,	// (0x0001f0ef) main_gallery_pane

0xc4be,	// (0x0002a4f1) smil2_volume_pane

0xc4c6,	// (0x0002a4f9) smil_status_volume_pane_g1_ParamLimits

0xc4d9,	// (0x0002a50c) smil_status_volume_pane_g2_ParamLimits

0x16fb,	// (0x0001f72e) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0002d63e) smil_status_volume_pane_g_ParamLimits

0xc62b,	// (0x0002a65e) bg_popup_window_pane_cp07_ParamLimits

0xc639,	// (0x0002a66c) blid_firmament_pane

0x5a8e,	// (0x00023ac1) aid_size_cell_gallery_ParamLimits

0x5a8e,	// (0x00023ac1) aid_size_cell_gallery

0x5a9c,	// (0x00023acf) grid_gallery_pane_ParamLimits

0x5a9c,	// (0x00023acf) grid_gallery_pane

0x5aac,	// (0x00023adf) cell_gallery_pane_ParamLimits

0x5aac,	// (0x00023adf) cell_gallery_pane

0xc765,	// (0x0002a798) bg_cell_gallery_focus_pane_ParamLimits

0xc765,	// (0x0002a798) bg_cell_gallery_focus_pane

0xc777,	// (0x0002a7aa) cell_gallery_pane_g1_ParamLimits

0xc777,	// (0x0002a7aa) cell_gallery_pane_g1

0x5afa,	// (0x00023b2d) cell_gallery_pane_g2_ParamLimits

0x5afa,	// (0x00023b2d) cell_gallery_pane_g2

0x5b07,	// (0x00023b3a) cell_gallery_pane_g3_ParamLimits

0x5b07,	// (0x00023b3a) cell_gallery_pane_g3

0xc783,	// (0x0002a7b6) cell_gallery_pane_g4_ParamLimits

0xc783,	// (0x0002a7b6) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0002d6ec) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0002d6ec) cell_gallery_pane_g

0xc78f,	// (0x0002a7c2) bg_cell_gallery_focus_pane_g1

0xc797,	// (0x0002a7ca) bg_cell_gallery_focus_pane_g2

0xc79f,	// (0x0002a7d2) bg_cell_gallery_focus_pane_g3

0xc7a7,	// (0x0002a7da) bg_cell_gallery_focus_pane_g4

0xc7af,	// (0x0002a7e2) bg_cell_gallery_focus_pane_g5

0xc7b7,	// (0x0002a7ea) bg_cell_gallery_focus_pane_g6

0xc7bf,	// (0x0002a7f2) bg_cell_gallery_focus_pane_g7

0xc7c7,	// (0x0002a7fa) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0002d6f5) bg_cell_gallery_focus_pane_g

0xc7cf,	// (0x0002a802) aid_firma_cardinal

0xc7e3,	// (0x0002a816) blid_firmament_pane_t1

0xc7fa,	// (0x0002a82d) blid_firmament_pane_t2

0xc811,	// (0x0002a844) blid_firmament_pane_t3

0xc828,	// (0x0002a85b) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0002d706) blid_firmament_pane_t

0xc83f,	// (0x0002a872) blid_sat_info_pane

0xc84f,	// (0x0002a882) blid_sat_info_pane_g1

0xc84f,	// (0x0002a882) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0002d70f) blid_sat_info_pane_g

0xc859,	// (0x0002a88c) blid_sat_info_pane_t1

0xc867,	// (0x0002a89a) smil2_volume_content_pane

0xc870,	// (0x0002a8a3) smil2_volume_pane_g1

0xc75c,	// (0x0002a78f) smil2_volume_content_pane_g1

0xc878,	// (0x0002a8ab) smil2_volume_content_pane_g2

0xc881,	// (0x0002a8b4) smil2_volume_content_pane_g3

0xc88a,	// (0x0002a8bd) smil2_volume_content_pane_g4

0xc893,	// (0x0002a8c6) smil2_volume_content_pane_g5

0xc89c,	// (0x0002a8cf) smil2_volume_content_pane_g6

0xc8a5,	// (0x0002a8d8) smil2_volume_content_pane_g7

0xc8ae,	// (0x0002a8e1) smil2_volume_content_pane_g8

0xc8b7,	// (0x0002a8ea) smil2_volume_content_pane_g9

0xc8c0,	// (0x0002a8f3) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0002d714) smil2_volume_content_pane_g

0x2dab,	// (0x00020dde) cale_week_day_heading_pane_t1_ParamLimits

0x2de6,	// (0x00020e19) cale_week_day_heading_pane_t2_ParamLimits

0x2e21,	// (0x00020e54) cale_week_day_heading_pane_t3_ParamLimits

0x2e5c,	// (0x00020e8f) cale_week_day_heading_pane_t4_ParamLimits

0x2e97,	// (0x00020eca) cale_week_day_heading_pane_t5_ParamLimits

0x2ed2,	// (0x00020f05) cale_week_day_heading_pane_t6_ParamLimits

0x2f0d,	// (0x00020f40) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0002d200) cale_week_day_heading_pane_t_ParamLimits

0xa4fe,	// (0x00028531) bg_cale_side_pane_ParamLimits

0x12c8,	// (0x0001f2fb) cale_week_time_pane_t1_ParamLimits

0x12e2,	// (0x0001f315) cale_week_time_pane_t2_ParamLimits

0x12fc,	// (0x0001f32f) cale_week_time_pane_t3_ParamLimits

0x1316,	// (0x0001f349) cale_week_time_pane_t4_ParamLimits

0x1330,	// (0x0001f363) cale_week_time_pane_t5_ParamLimits

0x134a,	// (0x0001f37d) cale_week_time_pane_t6_ParamLimits

0x136a,	// (0x0001f39d) cale_week_time_pane_t7_ParamLimits

0x138c,	// (0x0001f3bf) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0002d20f) cale_week_time_pane_t_ParamLimits

0x2f48,	// (0x00020f7b) cell_cale_week_pane_g2_ParamLimits

0xa4fe,	// (0x00028531) bg_cale_side_pane_cp01_ParamLimits

0x4285,	// (0x000222b8) cale_month_week_pane_t1_ParamLimits

0x429e,	// (0x000222d1) cale_month_week_pane_t2_ParamLimits

0x42b7,	// (0x000222ea) cale_month_week_pane_t3_ParamLimits

0x42d0,	// (0x00022303) cale_month_week_pane_t4_ParamLimits

0x42e9,	// (0x0002231c) cale_month_week_pane_t5_ParamLimits

0x430a,	// (0x0002233d) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0002d2e8) cale_month_week_pane_t_ParamLimits

0x1436,	// (0x0001f469) cell_cale_month_pane_g1_ParamLimits

0x10bc,	// (0x0001f0ef) main_cale_event_viewer_pane

0x9c48,	// (0x00027c7b) listscroll_cale_event_viewer_pane

0xc8c9,	// (0x0002a8fc) list_cale_ev_pane

0xc8d1,	// (0x0002a904) scroll_pane_cp023

0xc8dd,	// (0x0002a910) field_cale_ev_pane_ParamLimits

0xc8dd,	// (0x0002a910) field_cale_ev_pane

0xc8fb,	// (0x0002a92e) field_cale_ev_content_pane_ParamLimits

0xc8fb,	// (0x0002a92e) field_cale_ev_content_pane

0xc907,	// (0x0002a93a) field_cale_ev_pane_g1_ParamLimits

0xc907,	// (0x0002a93a) field_cale_ev_pane_g1

0xc913,	// (0x0002a946) field_cale_ev_pane_g2_ParamLimits

0xc913,	// (0x0002a946) field_cale_ev_pane_g2

0xc92b,	// (0x0002a95e) field_cale_ev_pane_g3_ParamLimits

0xc92b,	// (0x0002a95e) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0002d729) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0002d729) field_cale_ev_pane_g

0xc943,	// (0x0002a976) field_cale_ev_pane_t1_ParamLimits

0xc943,	// (0x0002a976) field_cale_ev_pane_t1

0xc95a,	// (0x0002a98d) field_cale_ev_content_pane_t1_ParamLimits

0xc95a,	// (0x0002a98d) field_cale_ev_content_pane_t1

0xb136,	// (0x00029169) bg_button_pane_cp01

0x2b38,	// (0x00020b6b) listscroll_cale_week_pane_ParamLimits

0xa4a8,	// (0x000284db) popup_toolbar_window_cp01

0xa4cf,	// (0x00028502) listscroll_cale_week_pane_t1_ParamLimits

0x2b38,	// (0x00020b6b) listscroll_cale_day_pane_ParamLimits

0xa4a8,	// (0x000284db) popup_toolbar_window_cp02

0xa8e9,	// (0x0002891c) listscroll_cale_day_pane_t1_ParamLimits

0x2b38,	// (0x00020b6b) main_cale_month_pane_ParamLimits

0x16be,	// (0x0001f6f1) popup_toolbar_window_cp03_ParamLimits

0x16be,	// (0x0001f6f1) popup_toolbar_window_cp03

0x4ff7,	// (0x0002302a) main_image_pane_g2_ParamLimits

0x4ff7,	// (0x0002302a) main_image_pane_g2

0x5003,	// (0x00023036) main_image_pane_g3_ParamLimits

0x5003,	// (0x00023036) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0002d51a) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0002d51a) main_image_pane_g

0xb2c9,	// (0x000292fc) main_image_pane_t1_ParamLimits

0x500f,	// (0x00023042) main_image_pane_t2_ParamLimits

0x500f,	// (0x00023042) main_image_pane_t2

0x5021,	// (0x00023054) main_image_pane_t3_ParamLimits

0x5021,	// (0x00023054) main_image_pane_t3

0x5033,	// (0x00023066) main_image_pane_t4_ParamLimits

0x5033,	// (0x00023066) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0002d521) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0002d521) main_image_pane_t

0x5045,	// (0x00023078) popup_image_details_window_cp01

0x504f,	// (0x00023082) popup_toobar_trans_pane_cp01_ParamLimits

0x504f,	// (0x00023082) popup_toobar_trans_pane_cp01

0x160e,	// (0x0001f641) popup_image_details_window_ParamLimits

0x160e,	// (0x0001f641) popup_image_details_window

0x161c,	// (0x0001f64f) popup_image_focus_window

0x171d,	// (0x0001f750) camera2_autofocus_pane_ParamLimits

0x171d,	// (0x0001f750) camera2_autofocus_pane

0x9c48,	// (0x00027c7b) bg_popup_sub_pane_cp06

0xc978,	// (0x0002a9ab) popup_image_focus_window_g1

0xc980,	// (0x0002a9b3) popup_image_focus_window_g2

0xc988,	// (0x0002a9bb) popup_image_focus_window_g3

0xc990,	// (0x0002a9c3) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0002d730) popup_image_focus_window_g

0xc998,	// (0x0002a9cb) popup_image_focus_window_t1

0xc9a6,	// (0x0002a9d9) popup_image_focus_window_t2

0xc9b6,	// (0x0002a9e9) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0002d739) popup_image_focus_window_t

0xc9c4,	// (0x0002a9f7) camera2_autofocus_pane_g1

0xa391,	// (0x000283c4) bg_tb_trans_pane_cp01

0xc9d2,	// (0x0002aa05) popup_image_details_window_g1

0xc9e5,	// (0x0002aa18) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0002d74b) popup_image_details_window_g

0xca0e,	// (0x0002aa41) popup_image_details_window_t1

0xca20,	// (0x0002aa53) popup_image_details_window_t2

0xca39,	// (0x0002aa6c) popup_image_details_window_t3

0xca4d,	// (0x0002aa80) popup_image_details_window_t4

0xca68,	// (0x0002aa9b) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0002d752) popup_image_details_window_t

0xa371,	// (0x000283a4) bg_calc_paper_pane_ParamLimits

0x10bc,	// (0x0001f0ef) grid_highlight_pane_cp013

0x119d,	// (0x0001f1d0) list_calc_pane_ParamLimits

0x11af,	// (0x0001f1e2) scroll_pane_cp024

0xa385,	// (0x000283b8) bg_calc_display_pane_ParamLimits

0x11b7,	// (0x0001f1ea) calc_display_pane_t1_ParamLimits

0x11cc,	// (0x0001f1ff) calc_display_pane_t2_ParamLimits

0x11e1,	// (0x0001f214) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0002d180) calc_display_pane_t_ParamLimits

0x124a,	// (0x0001f27d) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0002d19d) cell_calc_pane_g

0x1253,	// (0x0001f286) cell_calc_pane_t1

0xa3f2,	// (0x00028425) grid_highlight_pane_cp02_ParamLimits

0xa408,	// (0x0002843b) toolbar_button_pane_cp01_ParamLimits

0xa408,	// (0x0002843b) toolbar_button_pane_cp01

0xb30e,	// (0x00029341) temp_image_control_pane_ParamLimits

0xb30e,	// (0x00029341) temp_image_control_pane

0x1586,	// (0x0001f5b9) main_mp3_pane

0xca82,	// (0x0002aab5) temp_image_control_pane_g1_ParamLimits

0xca82,	// (0x0002aab5) temp_image_control_pane_g1

0xca90,	// (0x0002aac3) temp_image_control_pane_g2_ParamLimits

0xca90,	// (0x0002aac3) temp_image_control_pane_g2

0xcaa2,	// (0x0002aad5) temp_image_control_pane_g3_ParamLimits

0xcaa2,	// (0x0002aad5) temp_image_control_pane_g3

0x5b44,	// (0x00023b77) temp_image_control_pane_g4_ParamLimits

0x5b44,	// (0x00023b77) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0002d75d) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0002d75d) temp_image_control_pane_g

0xca82,	// (0x0002aab5) main_mp3_pane_g1

0x5b55,	// (0x00023b88) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0002d766) main_mp3_pane_g

0xcae5,	// (0x0002ab18) main_mp3_pane_t1

0xa559,	// (0x0002858c) main_camera_pane_g8_ParamLimits

0xa559,	// (0x0002858c) main_camera_pane_g8

0x3173,	// (0x000211a6) main_video_pane_g7_ParamLimits

0x3173,	// (0x000211a6) main_video_pane_g7

0x1865,	// (0x0001f898) main_camera2_pane_t7_ParamLimits

0x1865,	// (0x0001f898) main_camera2_pane_t7

0xa6a1,	// (0x000286d4) scroll_pane_cp025_ParamLimits

0xa6a1,	// (0x000286d4) scroll_pane_cp025

0xa6b5,	// (0x000286e8) scroll_pane_cp026_ParamLimits

0xa6b5,	// (0x000286e8) scroll_pane_cp026

0xa6c4,	// (0x000286f7) wml_content_pane_ParamLimits

0x10bc,	// (0x0001f0ef) main_touch_calib_pane

0x5bf9,	// (0x00023c2c) main_touch_calib_pane_g1

0x5c05,	// (0x00023c38) main_touch_calib_pane_g2

0x5c11,	// (0x00023c44) main_touch_calib_pane_g3

0x5c1d,	// (0x00023c50) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0002d784) main_touch_calib_pane_g

0x5c29,	// (0x00023c5c) main_touch_calib_pane_t1

0x5c42,	// (0x00023c75) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0002d78d) main_touch_calib_pane_t

0xae46,	// (0x00028e79) mup_progress_pane_cp02

0xae7b,	// (0x00028eae) navi_pane_g1

0xaf36,	// (0x00028f69) navi_pane_mp_t3

0x1586,	// (0x0001f5b9) main_mp3_pane_ParamLimits

0x557c,	// (0x000235af) navi_pane_ParamLimits

0xca82,	// (0x0002aab5) main_mp3_pane_g1_ParamLimits

0x5b55,	// (0x00023b88) main_mp3_pane_g2_ParamLimits

0x5b61,	// (0x00023b94) main_mp3_pane_g3_ParamLimits

0x5b61,	// (0x00023b94) main_mp3_pane_g3

0x5b6d,	// (0x00023ba0) main_mp3_pane_g4_ParamLimits

0x5b6d,	// (0x00023ba0) main_mp3_pane_g4

0xcab2,	// (0x0002aae5) main_mp3_pane_g5_ParamLimits

0xcab2,	// (0x0002aae5) main_mp3_pane_g5

0xcac0,	// (0x0002aaf3) main_mp3_pane_g6_ParamLimits

0xcac0,	// (0x0002aaf3) main_mp3_pane_g6

0xcacd,	// (0x0002ab00) main_mp3_pane_g7_ParamLimits

0xcacd,	// (0x0002ab00) main_mp3_pane_g7

0xcad9,	// (0x0002ab0c) main_mp3_pane_g8_ParamLimits

0xcad9,	// (0x0002ab0c) main_mp3_pane_g8

0xf733,	// (0x0002d766) main_mp3_pane_g_ParamLimits

0x5b79,	// (0x00023bac) main_mp3_pane_t2

0x5b89,	// (0x00023bbc) main_mp3_pane_t3

0xcaf3,	// (0x0002ab26) main_mp3_pane_t4

0xcb01,	// (0x0002ab34) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0002d777) main_mp3_pane_t

0xcb0f,	// (0x0002ab42) mup_progress_pane_cp01

0x0e72,	// (0x0001eea5) aid_zoom_text_secondary2

0xc8c9,	// (0x0002a8fc) list_cale_ev2_pane

0xc8d1,	// (0x0002a904) scroll_pane_cp023_ParamLimits

0x5c9d,	// (0x00023cd0) field_cale_ev2_pane_ParamLimits

0x5c9d,	// (0x00023cd0) field_cale_ev2_pane

0x5cc6,	// (0x00023cf9) field_cale_ev2_pane_g1_ParamLimits

0x5cc6,	// (0x00023cf9) field_cale_ev2_pane_g1

0x5cd2,	// (0x00023d05) field_cale_ev2_pane_g2_ParamLimits

0x5cd2,	// (0x00023d05) field_cale_ev2_pane_g2

0x5cea,	// (0x00023d1d) field_cale_ev2_pane_g3_ParamLimits

0x5cea,	// (0x00023d1d) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0002d798) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0002d798) field_cale_ev2_pane_g

0x5d02,	// (0x00023d35) field_cale_ev2_pane_t1_ParamLimits

0x5d02,	// (0x00023d35) field_cale_ev2_pane_t1

0x5d19,	// (0x00023d4c) field_cale_ev2_pane_t2_ParamLimits

0x5d19,	// (0x00023d4c) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0002d7a1) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0002d7a1) field_cale_ev2_pane_t

0x4ed7,	// (0x00022f0a) main_postcard_pane_g5_ParamLimits

0x4ed7,	// (0x00022f0a) main_postcard_pane_g5

0x4ee5,	// (0x00022f18) main_postcard_pane_g6_ParamLimits

0x4ee5,	// (0x00022f18) main_postcard_pane_g6

0x2fbd,	// (0x00020ff0) camera2_autofocus_pane_cp_ParamLimits

0x2fbd,	// (0x00020ff0) camera2_autofocus_pane_cp

0x1586,	// (0x0001f5b9) main_mup3_pane

0x5d2e,	// (0x00023d61) main_mup3_pane_g1_ParamLimits

0x5d2e,	// (0x00023d61) main_mup3_pane_g1

0x5d4f,	// (0x00023d82) main_mup3_pane_g2_ParamLimits

0x5d4f,	// (0x00023d82) main_mup3_pane_g2

0x5dc7,	// (0x00023dfa) main_mup3_pane_g3_ParamLimits

0x5dc7,	// (0x00023dfa) main_mup3_pane_g3

0x5e0a,	// (0x00023e3d) main_mup3_pane_g4_ParamLimits

0x5e0a,	// (0x00023e3d) main_mup3_pane_g4

0x5e4d,	// (0x00023e80) main_mup3_pane_g5_ParamLimits

0x5e4d,	// (0x00023e80) main_mup3_pane_g5

0x5e90,	// (0x00023ec3) main_mup3_pane_g6_ParamLimits

0x5e90,	// (0x00023ec3) main_mup3_pane_g6

0xcb43,	// (0x0002ab76) main_mup3_pane_g7_ParamLimits

0xcb43,	// (0x0002ab76) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0002d7b1) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0002d7b1) main_mup3_pane_g

0x5f06,	// (0x00023f39) main_mup3_pane_t1_ParamLimits

0x5f06,	// (0x00023f39) main_mup3_pane_t1

0x5f75,	// (0x00023fa8) main_mup3_pane_t2_ParamLimits

0x5f75,	// (0x00023fa8) main_mup3_pane_t2

0x603e,	// (0x00024071) main_mup3_pane_t4_ParamLimits

0x603e,	// (0x00024071) main_mup3_pane_t4

0x608c,	// (0x000240bf) main_mup3_pane_t5_ParamLimits

0x608c,	// (0x000240bf) main_mup3_pane_t5

0x613c,	// (0x0002416f) main_mup3_pane_t6_ParamLimits

0x613c,	// (0x0002416f) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0002d7c2) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0002d7c2) main_mup3_pane_t

0x61e8,	// (0x0002421b) mup3_progress_pane_ParamLimits

0x61e8,	// (0x0002421b) mup3_progress_pane

0x6266,	// (0x00024299) popup_mup3_control_window_ParamLimits

0x6266,	// (0x00024299) popup_mup3_control_window

0xcb51,	// (0x0002ab84) popup_mup3_text_window

0x627f,	// (0x000242b2) mup3_progress_pane_t1

0x629e,	// (0x000242d1) mup3_progress_pane_t2

0xcb59,	// (0x0002ab8c) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0002d7cf) mup3_progress_pane_t

0xcb76,	// (0x0002aba9) mup_progress_pane_cp03

0x9c48,	// (0x00027c7b) bg_tb_trans_pane_cp04

0x62bd,	// (0x000242f0) mup3_volume_pane

0x62c5,	// (0x000242f8) popup_mup3_control_window_g1

0x62ce,	// (0x00024301) mup3_volume_pane_g1

0x62d7,	// (0x0002430a) mup3_volume_pane_g2

0x62e0,	// (0x00024313) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0002d7d6) mup3_volume_pane_g

0x9c48,	// (0x00027c7b) bg_tb_trans_pane_cp03

0xcb86,	// (0x0002abb9) popup_mup3_text_window_g1

0xcb8e,	// (0x0002abc1) popup_mup3_text_window_t1

0xa3db,	// (0x0002840e) list_calc_item_pane_g1_ParamLimits

0xc599,	// (0x0002a5cc) mup_volume_pane_cp_g1

0x5c5b,	// (0x00023c8e) main_touch_calib_pane_t3

0x5c71,	// (0x00023ca4) main_touch_calib_pane_t4

0x5c87,	// (0x00023cba) main_touch_calib_pane_t5

0x0e2a,	// (0x0001ee5d) aid_cell_size_toolbar2

0x0e32,	// (0x0001ee65) aid_popup3_width_pane

0x0e72,	// (0x0001eea5) aid_zoom_text_msg_primary

0x1416,	// (0x0001f449) vorec_t7

0xa39f,	// (0x000283d2) bg_calc_paper_pane_g1_ParamLimits

0xa3ab,	// (0x000283de) bg_calc_paper_pane_g2_ParamLimits

0xa3b7,	// (0x000283ea) bg_calc_paper_pane_g3_ParamLimits

0xa3c3,	// (0x000283f6) bg_calc_paper_pane_g4_ParamLimits

0xa3cf,	// (0x00028402) bg_calc_paper_pane_g5_ParamLimits

0x29ea,	// (0x00020a1d) bg_calc_paper_pane_g6_ParamLimits

0x29fb,	// (0x00020a2e) bg_calc_paper_pane_g7_ParamLimits

0x2a0c,	// (0x00020a3f) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0002d187) bg_calc_paper_pane_g_ParamLimits

0x2a1d,	// (0x00020a50) calc_bg_paper_pane_g9_ParamLimits

0x30a4,	// (0x000210d7) image_qvga_pane_ParamLimits

0x30a4,	// (0x000210d7) image_qvga_pane

0xa2c0,	// (0x000282f3) bg_popup_sub_pane_cp04_ParamLimits

0xb245,	// (0x00029278) popup_mup_playback_window_g1_ParamLimits

0xb251,	// (0x00029284) popup_mup_playback_window_t1_ParamLimits

0xb266,	// (0x00029299) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0002d515) popup_mup_playback_window_t_ParamLimits

0x57ce,	// (0x00023801) main_mup2_pane_g3_ParamLimits

0x57ce,	// (0x00023801) main_mup2_pane_g3

0x3471,	// (0x000214a4) popup_toolbar_window_cp04

0xb648,	// (0x0002967b) popup_call2_audio_second_window_g3_ParamLimits

0xb648,	// (0x0002967b) popup_call2_audio_second_window_g3

0xba52,	// (0x00029a85) popup_call2_audio_first_window_g4_ParamLimits

0xba52,	// (0x00029a85) popup_call2_audio_first_window_g4

0xc0d1,	// (0x0002a104) popup_call2_audio_in_window_g4_ParamLimits

0xc0d1,	// (0x0002a104) popup_call2_audio_in_window_g4

0x4fea,	// (0x0002301d) aid_area_sk_bg_cut_ParamLimits

0x4fea,	// (0x0002301d) aid_area_sk_bg_cut

0xb27b,	// (0x000292ae) aid_area_sk_bg_cut_2_ParamLimits

0xb27b,	// (0x000292ae) aid_area_sk_bg_cut_2

0x5aea,	// (0x00023b1d) aid_placing_details_win

0x5af2,	// (0x00023b25) aid_placing_details_win_2

0xc9c4,	// (0x0002a9f7) camera2_autofocus_pane_g1_ParamLimits

0x1054,	// (0x0001f087) popup_fixed_preview_cale_window_ParamLimits

0x1054,	// (0x0001f087) popup_fixed_preview_cale_window

0xafbc,	// (0x00028fef) navi_slider_pane_g3

0xafc5,	// (0x00028ff8) navi_slider_pane_g4

0xafce,	// (0x00029001) navi_slider_pane_g5

0xafbc,	// (0x00028fef) navi_slider_pane_g6

0x1500,	// (0x0001f533) navi_slider_pane_g7

0xb0fb,	// (0x0002912e) mup_scale_pane_g3

0xb104,	// (0x00029137) mup_scale_pane_g4

0xb10d,	// (0x00029140) mup_scale_pane_g5

0x4d75,	// (0x00022da8) mup_scale_pane_g6

0x4d7e,	// (0x00022db1) mup_scale_pane_g7

0xafbc,	// (0x00028fef) cams2_slider_pane_g3

0xc61b,	// (0x0002a64e) cams2_slider_pane_g4

0x19d7,	// (0x0001fa0a) cams2_slider_pane_g5

0xafbc,	// (0x00028fef) cams2_slider_pane_g6

0x19df,	// (0x0001fa12) cams2_slider_pane_g7

0xc84f,	// (0x0002a882) camera2_autofocus_pane_cp_g1

0xc432,	// (0x0002a465) bg_popup_preview_window_pane_cp02_ParamLimits

0xc432,	// (0x0002a465) bg_popup_preview_window_pane_cp02

0xcb9c,	// (0x0002abcf) list_fp_cale_pane_ParamLimits

0xcb9c,	// (0x0002abcf) list_fp_cale_pane

0xcba8,	// (0x0002abdb) popup_fixed_preview_cale_window_t1_ParamLimits

0xcba8,	// (0x0002abdb) popup_fixed_preview_cale_window_t1

0x62e9,	// (0x0002431c) popup_fixed_preview_cale_window_t2_ParamLimits

0x62e9,	// (0x0002431c) popup_fixed_preview_cale_window_t2

0x62fe,	// (0x00024331) popup_fixed_preview_cale_window_t3_ParamLimits

0x62fe,	// (0x00024331) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0002d7dd) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0002d7dd) popup_fixed_preview_cale_window_t

0x6313,	// (0x00024346) list_single_fp_cale_pane_ParamLimits

0x6313,	// (0x00024346) list_single_fp_cale_pane

0xcbc6,	// (0x0002abf9) list_single_fp_cale_pane_g1_ParamLimits

0xcbc6,	// (0x0002abf9) list_single_fp_cale_pane_g1

0xcbd2,	// (0x0002ac05) list_single_fp_cale_pane_g2_ParamLimits

0xcbd2,	// (0x0002ac05) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0002d7e4) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0002d7e4) list_single_fp_cale_pane_g

0xcbeb,	// (0x0002ac1e) list_single_fp_cale_pane_t1_ParamLimits

0xcbeb,	// (0x0002ac1e) list_single_fp_cale_pane_t1

0xcbfd,	// (0x0002ac30) list_single_fp_cale_pane_t2_ParamLimits

0xcbfd,	// (0x0002ac30) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0002d7eb) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0002d7eb) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x10bc,	// (0x0001f0ef) main_dialer_pane

0x6326,	// (0x00024359) aid_cell_size_keypad

0x6330,	// (0x00024363) dialer_ne_pane

0x633a,	// (0x0002436d) grid_dialer_command_1_pane

0x6342,	// (0x00024375) grid_dialer_command_2_pane

0x634a,	// (0x0002437d) grid_dialer_keypad_pane

0x635c,	// (0x0002438f) bg_popup_call_pane_cp06_ParamLimits

0x635c,	// (0x0002438f) bg_popup_call_pane_cp06

0x6368,	// (0x0002439b) dialer_ne_clear_pane_ParamLimits

0x6368,	// (0x0002439b) dialer_ne_clear_pane

0xcc30,	// (0x0002ac63) dialer_ne_pane_g1

0xcc38,	// (0x0002ac6b) dialer_ne_pane_t1_ParamLimits

0xcc38,	// (0x0002ac6b) dialer_ne_pane_t1

0x6374,	// (0x000243a7) dialer_ne_pane_t2_ParamLimits

0x6374,	// (0x000243a7) dialer_ne_pane_t2

0x6391,	// (0x000243c4) dialer_ne_pane_t3_ParamLimits

0x6391,	// (0x000243c4) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0002d7f0) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0002d7f0) dialer_ne_pane_t

0x63b5,	// (0x000243e8) dialer_ne_pane_t3_copy1_ParamLimits

0x63b5,	// (0x000243e8) dialer_ne_pane_t3_copy1

0x63d9,	// (0x0002440c) cell_dialer_keypad_pane_ParamLimits

0x63d9,	// (0x0002440c) cell_dialer_keypad_pane

0x63f0,	// (0x00024423) cell_dialer_command_1_pane_ParamLimits

0x63f0,	// (0x00024423) cell_dialer_command_1_pane

0x6406,	// (0x00024439) cell_dialer_command_2_pane_ParamLimits

0x6406,	// (0x00024439) cell_dialer_command_2_pane

0xcc4a,	// (0x0002ac7d) bg_button_pane_cp02_ParamLimits

0xcc4a,	// (0x0002ac7d) bg_button_pane_cp02

0x6415,	// (0x00024448) cell_dialer_keypad_pane_g1_ParamLimits

0x6415,	// (0x00024448) cell_dialer_keypad_pane_g1

0xcc4a,	// (0x0002ac7d) bg_button_pane_cp03_ParamLimits

0xcc4a,	// (0x0002ac7d) bg_button_pane_cp03

0x642a,	// (0x0002445d) cell_dialer_command_1_pane_g1_ParamLimits

0x642a,	// (0x0002445d) cell_dialer_command_1_pane_g1

0xcc56,	// (0x0002ac89) bg_button_pane_cp04

0x643e,	// (0x00024471) cell_dialer_command_2_pane_g1

0xafab,	// (0x00028fde) bg_button_pane_cp06

0xcc5e,	// (0x0002ac91) dialer_ne_clear_pane_g1

0xae87,	// (0x00028eba) navi_pane_g2

0xaeb5,	// (0x00028ee8) navi_pane_g3

0x0002,

0xf3e5,	// (0x0002d418) navi_pane_g

0xaf44,	// (0x00028f77) navi_pane_mv_g2

0xaf6b,	// (0x00028f9e) navi_pane_mv_g5

0x4911,	// (0x00022944) navi_pane_mv_t1

0xa385,	// (0x000283b8) main_clock2_pane

0x647c,	// (0x000244af) main_clock2_list_pane_ParamLimits

0x647c,	// (0x000244af) main_clock2_list_pane

0x64a4,	// (0x000244d7) main_clock2_pane_t1_ParamLimits

0x64a4,	// (0x000244d7) main_clock2_pane_t1

0x64c6,	// (0x000244f9) main_clock2_pane_t2_ParamLimits

0x64c6,	// (0x000244f9) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0002d7fc) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0002d7fc) main_clock2_pane_t

0x6521,	// (0x00024554) popup_clock_analogue_window_cp03_ParamLimits

0x6521,	// (0x00024554) popup_clock_analogue_window_cp03

0x653f,	// (0x00024572) popup_clock_digital_window_cp02_ParamLimits

0x653f,	// (0x00024572) popup_clock_digital_window_cp02

0x65ac,	// (0x000245df) main_clock2_list_single_pane_ParamLimits

0x65ac,	// (0x000245df) main_clock2_list_single_pane

0xafab,	// (0x00028fde) list_highlight_pane_cp05

0xcc9c,	// (0x0002accf) main_clock2_list_single_pane_t1

0x3471,	// (0x000214a4) popup_toolbar_window_cp04_ParamLimits

0x5b14,	// (0x00023b47) camera2_autofocus_pane_g2_ParamLimits

0x5b14,	// (0x00023b47) camera2_autofocus_pane_g2

0x5b20,	// (0x00023b53) camera2_autofocus_pane_g3_ParamLimits

0x5b20,	// (0x00023b53) camera2_autofocus_pane_g3

0x5b2c,	// (0x00023b5f) camera2_autofocus_pane_g4_ParamLimits

0x5b2c,	// (0x00023b5f) camera2_autofocus_pane_g4

0x5b38,	// (0x00023b6b) camera2_autofocus_pane_g5_ParamLimits

0x5b38,	// (0x00023b6b) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0002d740) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0002d740) camera2_autofocus_pane_g

0xcb23,	// (0x0002ab56) camera2_autofocus_pane_cp_g2

0xcb2b,	// (0x0002ab5e) camera2_autofocus_pane_cp_g3

0xcb33,	// (0x0002ab66) camera2_autofocus_pane_cp_g4

0xcb3b,	// (0x0002ab6e) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0002d7a6) camera2_autofocus_pane_cp_g

0x6354,	// (0x00024387) popup_dialer_spcha_window

0x9c48,	// (0x00027c7b) bg_popup_sub_pane_cp07

0xccaa,	// (0x0002acdd) list_spcha_pane

0xccb2,	// (0x0002ace5) list_single_spcha_pane_ParamLimits

0xccb2,	// (0x0002ace5) list_single_spcha_pane

0x9c48,	// (0x00027c7b) list_highlight_pane_cp06

0xccc3,	// (0x0002acf6) list_single_spcha_pane_t1

0xbe7b,	// (0x00029eae) popup_call2_audio_out_window_g4_ParamLimits

0xbe7b,	// (0x00029eae) popup_call2_audio_out_window_g4

0x10bc,	// (0x0001f0ef) main_imed2_pane

0x1624,	// (0x0001f657) popup_imed_adjust2_window

0x1637,	// (0x0001f66a) popup_imed_trans_window_ParamLimits

0x1637,	// (0x0001f66a) popup_imed_trans_window

0xc684,	// (0x0002a6b7) popup_blid_sat_info2_window_t1

0xc692,	// (0x0002a6c5) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0002d6d5) popup_blid_sat_info2_window_t

0x65de,	// (0x00024611) aid_size_cell_colour_35

0x65f8,	// (0x0002462b) aid_size_cell_colour_112

0x660f,	// (0x00024642) aid_size_cell_effect

0xa391,	// (0x000283c4) bg_tb_trans_pane_cp02

0xb052,	// (0x00029085) heading_imed_pane

0x6629,	// (0x0002465c) listscroll_imed_pane

0xccd1,	// (0x0002ad04) heading_imed_pane_g1

0xccd9,	// (0x0002ad0c) heading_imed_pane_t1

0xcce7,	// (0x0002ad1a) grid_imed_colour_35_pane_ParamLimits

0xcce7,	// (0x0002ad1a) grid_imed_colour_35_pane

0x6635,	// (0x00024668) grid_imed_effect_pane

0xccfe,	// (0x0002ad31) list_imed_aspect_pane

0x6645,	// (0x00024678) scroll_pane_cp027_ParamLimits

0x6645,	// (0x00024678) scroll_pane_cp027

0x6651,	// (0x00024684) cell_imed_effect_pane_ParamLimits

0x6651,	// (0x00024684) cell_imed_effect_pane

0xcd06,	// (0x0002ad39) cell_imed_colour_pane_ParamLimits

0xcd06,	// (0x0002ad39) cell_imed_colour_pane

0xcd48,	// (0x0002ad7b) cell_imed_colour_pane_g1_ParamLimits

0xcd48,	// (0x0002ad7b) cell_imed_colour_pane_g1

0xcd59,	// (0x0002ad8c) hgihlgiht_grid_pane_cp016_ParamLimits

0xcd59,	// (0x0002ad8c) hgihlgiht_grid_pane_cp016

0x6669,	// (0x0002469c) cell_imed_effect_pane_g1

0x6671,	// (0x000246a4) grid_highlight_pane_cp017

0xcd6a,	// (0x0002ad9d) list_imed_single_pane_ParamLimits

0xcd6a,	// (0x0002ad9d) list_imed_single_pane

0x9c48,	// (0x00027c7b) list_highlight_pane_cp07

0xcd7f,	// (0x0002adb2) list_imed_aspect_pane_comp1_t1

0xc43e,	// (0x0002a471) bg_tb_trans_pane_cp05

0xcda1,	// (0x0002add4) popup_imed_adjust2_window_g1

0xcdc8,	// (0x0002adfb) popup_imed_adjust2_window_t1

0xcde0,	// (0x0002ae13) slider_imed_adjust_pane

0xcdf4,	// (0x0002ae27) slider_imed_adjust_pane_g1

0xce04,	// (0x0002ae37) slider_imed_adjust_pane_g2

0xce14,	// (0x0002ae47) slider_imed_adjust_pane_g3

0xce25,	// (0x0002ae58) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0002d819) slider_imed_adjust_pane_g

0x667a,	// (0x000246ad) aid_size_cell_clipart2

0x6686,	// (0x000246b9) grid_imed_clipart_pane

0xce36,	// (0x0002ae69) scroll_pane_cp031

0x6690,	// (0x000246c3) cell_imed_clipart_pane_ParamLimits

0x6690,	// (0x000246c3) cell_imed_clipart_pane

0x66b2,	// (0x000246e5) cell_imed_clipart_pane_g1

0x9c48,	// (0x00027c7b) grid_highlight_pane_cp014

0x6488,	// (0x000244bb) main_clock2_pane_g1_ParamLimits

0x6488,	// (0x000244bb) main_clock2_pane_g1

0x6557,	// (0x0002458a) aid_call2_pane_cp10

0x6569,	// (0x0002459c) aid_call_pane_cp10

0xade8,	// (0x00028e1b) popup_clock_analogue_window_cp10_g1

0xade8,	// (0x00028e1b) popup_clock_analogue_window_cp10_g2

0x657b,	// (0x000245ae) popup_clock_analogue_window_cp10_g3

0x657b,	// (0x000245ae) popup_clock_analogue_window_cp10_g4

0xade8,	// (0x00028e1b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0002d807) popup_clock_analogue_window_cp10_g

0x658d,	// (0x000245c0) popup_clock_analogue_window_cp10_t1

0x19e8,	// (0x0001fa1b) clock_digital_number_pane_cp10_ParamLimits

0x19e8,	// (0x0001fa1b) clock_digital_number_pane_cp10

0x1a00,	// (0x0001fa33) clock_digital_number_pane_cp11_ParamLimits

0x1a00,	// (0x0001fa33) clock_digital_number_pane_cp11

0x1a18,	// (0x0001fa4b) clock_digital_number_pane_cp12_ParamLimits

0x1a18,	// (0x0001fa4b) clock_digital_number_pane_cp12

0x1a30,	// (0x0001fa63) clock_digital_number_pane_cp13_ParamLimits

0x1a30,	// (0x0001fa63) clock_digital_number_pane_cp13

0x1a48,	// (0x0001fa7b) clock_digital_separator_pane_cp10_ParamLimits

0x1a48,	// (0x0001fa7b) clock_digital_separator_pane_cp10

0x65be,	// (0x000245f1) popup_clock_digital_window_cp02_t1_ParamLimits

0x65be,	// (0x000245f1) popup_clock_digital_window_cp02_t1

0xa2b8,	// (0x000282eb) clock_digital_number_pane_cp10_g1

0xa2b8,	// (0x000282eb) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0002d822) clock_digital_number_pane_cp10_g

0xa2b8,	// (0x000282eb) clock_digital_separator_pane_cp10_g1

0xa2b8,	// (0x000282eb) clock_digital_separator_pane_g2_cp10

0xaf73,	// (0x00028fa6) navi_pane_vded_g4

0xaf7c,	// (0x00028faf) navi_pane_vded_g5

0xaf85,	// (0x00028fb8) navi_pane_vded_t1

0x10bc,	// (0x0001f0ef) main_vded_pane

0x66bb,	// (0x000246ee) main_vded_pane_g1

0x66c7,	// (0x000246fa) main_vded_pane_g2

0x66d1,	// (0x00024704) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0002d827) main_vded_pane_g

0x66db,	// (0x0002470e) main_vded_pane_t1

0x66e9,	// (0x0002471c) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0002d82e) main_vded_pane_t

0x66f7,	// (0x0002472a) vded_slider_pane

0x6701,	// (0x00024734) vded_video_pane

0xce3e,	// (0x0002ae71) vded_video_pane_g1

0x670b,	// (0x0002473e) vded_video_pane_g2

0xc84f,	// (0x0002a882) vded_video_pane_g3

0x0002,

0xf800,	// (0x0002d833) vded_video_pane_g

0xce48,	// (0x0002ae7b) vded_slider_pane_g1

0xc599,	// (0x0002a5cc) vded_slider_pane_g2

0xce51,	// (0x0002ae84) vded_slider_pane_g3

0xce5a,	// (0x0002ae8d) vded_slider_pane_g4

0xce63,	// (0x0002ae96) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0002d83a) vded_slider_pane_g

0x6258,	// (0x0002428b) mup3_rocker_pane_ParamLimits

0x6258,	// (0x0002428b) mup3_rocker_pane

0x6714,	// (0x00024747) mup3_control_keys_pane_g1

0x671c,	// (0x0002474f) mup3_control_keys_pane_g2

0x6724,	// (0x00024757) mup3_control_keys_pane_g3

0x672c,	// (0x0002475f) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0002d845) mup3_control_keys_pane_g

0x107c,	// (0x0001f0af) popup_toolbar2_fixed_window_cp01_ParamLimits

0x107c,	// (0x0001f0af) popup_toolbar2_fixed_window_cp01

0x6272,	// (0x000242a5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6272,	// (0x000242a5) popup_toolbar2_fixed_window_cp02

0xb7ba,	// (0x000297ed) popup_call2_audio_second_window_t4_ParamLimits

0xb7ba,	// (0x000297ed) popup_call2_audio_second_window_t4

0xbce8,	// (0x00029d1b) popup_call2_audio_first_window_t6_ParamLimits

0xbce8,	// (0x00029d1b) popup_call2_audio_first_window_t6

0xbf7e,	// (0x00029fb1) popup_call2_audio_out_window_t6_ParamLimits

0xbf7e,	// (0x00029fb1) popup_call2_audio_out_window_t6

0x10bc,	// (0x0001f0ef) main_vitu_pane

0x673c,	// (0x0002476f) aid_size_cell_itu_ParamLimits

0x673c,	// (0x0002476f) aid_size_cell_itu

0xd3dd,	// (0x0002b410) bg_popup_window_pane_cp08_ParamLimits

0xd3dd,	// (0x0002b410) bg_popup_window_pane_cp08

0x674a,	// (0x0002477d) field_vitu_entry_pane_ParamLimits

0x674a,	// (0x0002477d) field_vitu_entry_pane

0x6759,	// (0x0002478c) grid_vitu_function_pane_ParamLimits

0x6759,	// (0x0002478c) grid_vitu_function_pane

0x6769,	// (0x0002479c) grid_vitu_itu_pane_ParamLimits

0x6769,	// (0x0002479c) grid_vitu_itu_pane

0x6779,	// (0x000247ac) cell_vitu_itu_pane_ParamLimits

0x6779,	// (0x000247ac) cell_vitu_itu_pane

0x678e,	// (0x000247c1) cell_vitu_function_pane_ParamLimits

0x678e,	// (0x000247c1) cell_vitu_function_pane

0xa391,	// (0x000283c4) bg_popup_sub_pane_cp08_ParamLimits

0xa391,	// (0x000283c4) bg_popup_sub_pane_cp08

0x67a0,	// (0x000247d3) field_vitu_entry_pane_t1_ParamLimits

0x67a0,	// (0x000247d3) field_vitu_entry_pane_t1

0xce84,	// (0x0002aeb7) field_vitu_entry_pane_t2_ParamLimits

0xce84,	// (0x0002aeb7) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0002d853) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0002d853) field_vitu_entry_pane_t

0xcea1,	// (0x0002aed4) bg_button_pane_cp05_ParamLimits

0xcea1,	// (0x0002aed4) bg_button_pane_cp05

0x67bc,	// (0x000247ef) cell_vitu_itu_pane_g1

0x67d4,	// (0x00024807) cell_vitu_itu_pane_t1_ParamLimits

0x67d4,	// (0x00024807) cell_vitu_itu_pane_t1

0x67e6,	// (0x00024819) cell_vitu_itu_pane_t2_ParamLimits

0x67e6,	// (0x00024819) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0002d858) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0002d858) cell_vitu_itu_pane_t

0xceaf,	// (0x0002aee2) bg_button_pane_cp07

0x681b,	// (0x0002484e) cell_vitu_function_pane_g1

0x1195,	// (0x0001f1c8) main_calc_pane_g1

0x0e66,	// (0x0001ee99) aid_visual_content_pane

0x10bc,	// (0x0001f0ef) main_vradio_pane

0x6824,	// (0x00024857) main_vradio_pane_g1_ParamLimits

0x6824,	// (0x00024857) main_vradio_pane_g1

0xceb9,	// (0x0002aeec) main_vradio_pane_g2_ParamLimits

0xceb9,	// (0x0002aeec) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0002d85f) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0002d85f) main_vradio_pane_g

0x6834,	// (0x00024867) main_vradio_pane_t1_ParamLimits

0x6834,	// (0x00024867) main_vradio_pane_t1

0x6846,	// (0x00024879) main_vradio_pane_t2_ParamLimits

0x6846,	// (0x00024879) main_vradio_pane_t2

0xcec6,	// (0x0002aef9) main_vradio_pane_t3_ParamLimits

0xcec6,	// (0x0002aef9) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0002d864) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0002d864) main_vradio_pane_t

0x6858,	// (0x0002488b) vradio_rocker_control_pane_ParamLimits

0x6858,	// (0x0002488b) vradio_rocker_control_pane

0x6864,	// (0x00024897) vradio_station_info_pane_ParamLimits

0x6864,	// (0x00024897) vradio_station_info_pane

0xceda,	// (0x0002af0d) vradio_frequency_info_pane_ParamLimits

0xceda,	// (0x0002af0d) vradio_frequency_info_pane

0xc84f,	// (0x0002a882) vradio_station_info_pane_g1

0xcee9,	// (0x0002af1c) vradio_station_info_pane_t1_ParamLimits

0xcee9,	// (0x0002af1c) vradio_station_info_pane_t1

0xcf0b,	// (0x0002af3e) vradio_station_info_pane_t2_ParamLimits

0xcf0b,	// (0x0002af3e) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0002d86b) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0002d86b) vradio_station_info_pane_t

0xcf1d,	// (0x0002af50) vradio_tuning_pane

0xcf25,	// (0x0002af58) vradio_rocker_control_pane_g1

0xcf2d,	// (0x0002af60) vradio_rocker_control_pane_g2

0xcf35,	// (0x0002af68) vradio_rocker_control_pane_g3

0xcf3d,	// (0x0002af70) vradio_rocker_control_pane_g4

0xcf45,	// (0x0002af78) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0002d870) vradio_rocker_control_pane_g

0x6873,	// (0x000248a6) vradio_frequency_info_pane_g1

0xcf4d,	// (0x0002af80) vradio_frequency_info_pane_t1_ParamLimits

0xcf4d,	// (0x0002af80) vradio_frequency_info_pane_t1

0x687d,	// (0x000248b0) vradio_tuning_pane_g1

0x6886,	// (0x000248b9) vradio_tuning_pane_t1

0x0e82,	// (0x0001eeb5) area_side_right_pane_ParamLimits

0x0e82,	// (0x0001eeb5) area_side_right_pane

0xc3f9,	// (0x0002a42c) status_small_pane_g1

0xc401,	// (0x0002a434) status_small_pane_g2

0xc40a,	// (0x0002a43d) status_small_pane_g3

0xc413,	// (0x0002a446) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0002d62b) status_small_pane_g

0xc41c,	// (0x0002a44f) status_small_pane_t1

0x10bc,	// (0x0001f0ef) main_video3_pane

0xcf61,	// (0x0002af94) cams_zoom_vslider_pane

0xcf69,	// (0x0002af9c) image3_wide_pane_ParamLimits

0xcf69,	// (0x0002af9c) image3_wide_pane

0xcf83,	// (0x0002afb6) image3_wide_small_pane

0xcf8f,	// (0x0002afc2) main_video3_pane_g1_ParamLimits

0xcf8f,	// (0x0002afc2) main_video3_pane_g1

0xcfab,	// (0x0002afde) main_video3_pane_g2_ParamLimits

0xcfab,	// (0x0002afde) main_video3_pane_g2

0x0001,

0xf848,	// (0x0002d87b) main_video3_pane_g_ParamLimits

0xf848,	// (0x0002d87b) main_video3_pane_g

0xcfc7,	// (0x0002affa) main_video3_pane_t1_ParamLimits

0xcfc7,	// (0x0002affa) main_video3_pane_t1

0xcff2,	// (0x0002b025) main_video3_pane_t2_ParamLimits

0xcff2,	// (0x0002b025) main_video3_pane_t2

0xd01d,	// (0x0002b050) main_video3_pane_t3_ParamLimits

0xd01d,	// (0x0002b050) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0002d880) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0002d880) main_video3_pane_t

0xd04a,	// (0x0002b07d) cams_zoom_vslider_pane_g1

0xd053,	// (0x0002b086) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0002d887) cams_zoom_vslider_pane_g

0xd05b,	// (0x0002b08e) small_slider_vertical_pane

0xc84f,	// (0x0002a882) small_slider_vertical_pane_g1

0xc84f,	// (0x0002a882) small_slider_vertical_pane_g2

0xd063,	// (0x0002b096) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0002d88c) small_slider_vertical_pane_g

0x10bc,	// (0x0001f0ef) main_hwr_training_pane

0xd06c,	// (0x0002b09f) hwr_training_instruct_pane_ParamLimits

0xd06c,	// (0x0002b09f) hwr_training_instruct_pane

0x6895,	// (0x000248c8) hwr_training_navi_pane_ParamLimits

0x6895,	// (0x000248c8) hwr_training_navi_pane

0x68af,	// (0x000248e2) hwr_training_write_pane_ParamLimits

0x68af,	// (0x000248e2) hwr_training_write_pane

0x9c48,	// (0x00027c7b) bg_frame_shadow_pane

0xd0a3,	// (0x0002b0d6) hwr_training_write_pane_g1

0xd0ab,	// (0x0002b0de) hwr_training_write_pane_g2

0xd0b3,	// (0x0002b0e6) hwr_training_write_pane_g3

0xd0bb,	// (0x0002b0ee) hwr_training_write_pane_g4

0xd0c3,	// (0x0002b0f6) hwr_training_write_pane_g5

0xd0cb,	// (0x0002b0fe) hwr_training_write_pane_g6

0xd0d3,	// (0x0002b106) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0002d893) hwr_training_write_pane_g

0x1a60,	// (0x0001fa93) hwr_training_navi_pane_g1_ParamLimits

0x1a60,	// (0x0001fa93) hwr_training_navi_pane_g1

0x1a72,	// (0x0001faa5) hwr_training_navi_pane_g2_ParamLimits

0x1a72,	// (0x0001faa5) hwr_training_navi_pane_g2

0x1a84,	// (0x0001fab7) hwr_training_navi_pane_g3_ParamLimits

0x1a84,	// (0x0001fab7) hwr_training_navi_pane_g3

0x1a94,	// (0x0001fac7) hwr_training_navi_pane_g4_ParamLimits

0x1a94,	// (0x0001fac7) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0002d8a2) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0002d8a2) hwr_training_navi_pane_g

0x1aae,	// (0x0001fae1) hwr_training_navi_pane_t1

0x68e7,	// (0x0002491a) list_single_hwr_training_instruct_pane_ParamLimits

0x68e7,	// (0x0002491a) list_single_hwr_training_instruct_pane

0xd0db,	// (0x0002b10e) list_single_hwr_training_instruct_pane_t1

0xc78f,	// (0x0002a7c2) bg_frame_shadow_pane_g1

0xd0ea,	// (0x0002b11d) bg_frame_shadow_pane_g2

0xd0f2,	// (0x0002b125) bg_frame_shadow_pane_g3

0xd0fa,	// (0x0002b12d) bg_frame_shadow_pane_g4

0xd102,	// (0x0002b135) bg_frame_shadow_pane_g5

0xd10a,	// (0x0002b13d) bg_frame_shadow_pane_g6

0xd112,	// (0x0002b145) bg_frame_shadow_pane_g7

0xa44c,	// (0x0002847f) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0002d8ad) bg_frame_shadow_pane_g

0x10bc,	// (0x0001f0ef) main_video_tele_dialer_pane

0x1abc,	// (0x0001faef) aid_size_cell_video_keypad_ParamLimits

0x1abc,	// (0x0001faef) aid_size_cell_video_keypad

0x1acc,	// (0x0001faff) grid_video_dialer_keypad_pane_ParamLimits

0x1acc,	// (0x0001faff) grid_video_dialer_keypad_pane

0x1b00,	// (0x0001fb33) video_down_pane_cp_ParamLimits

0x1b00,	// (0x0001fb33) video_down_pane_cp

0x1b0e,	// (0x0001fb41) cell_video_dialer_keypad_pane_ParamLimits

0x1b0e,	// (0x0001fb41) cell_video_dialer_keypad_pane

0xd11a,	// (0x0002b14d) bg_button_pane_cp08_ParamLimits

0xd11a,	// (0x0002b14d) bg_button_pane_cp08

0x6928,	// (0x0002495b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6928,	// (0x0002495b) cell_video_dialer_keypad_pane_g1

0x624c,	// (0x0002427f) mup3_rocker2_pane_ParamLimits

0x624c,	// (0x0002427f) mup3_rocker2_pane

0xc84f,	// (0x0002a882) mup3_rocker2_pane_g1

0x1594,	// (0x0001f5c7) main_dialer2_pane

0x10bc,	// (0x0001f0ef) main_mp4_pane

0x1b2b,	// (0x0001fb5e) main_mp4_pane_g1_ParamLimits

0x1b2b,	// (0x0001fb5e) main_mp4_pane_g1

0x1b39,	// (0x0001fb6c) main_mp4_pane_g2_ParamLimits

0x1b39,	// (0x0001fb6c) main_mp4_pane_g2

0x1b47,	// (0x0001fb7a) main_mp4_pane_g3_ParamLimits

0x1b47,	// (0x0001fb7a) main_mp4_pane_g3

0x1b8c,	// (0x0001fbbf) main_mp4_pane_g4_ParamLimits

0x1b8c,	// (0x0001fbbf) main_mp4_pane_g4

0x1bb4,	// (0x0001fbe7) main_mp4_pane_g5_ParamLimits

0x1bb4,	// (0x0001fbe7) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0002d8cd) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0002d8cd) main_mp4_pane_g

0x1c04,	// (0x0001fc37) main_mp4_pane_t1_ParamLimits

0x1c04,	// (0x0001fc37) main_mp4_pane_t1

0x1c60,	// (0x0001fc93) main_mp4_pane_t2_ParamLimits

0x1c60,	// (0x0001fc93) main_mp4_pane_t2

0xd126,	// (0x0002b159) main_mp4_pane_t3_ParamLimits

0xd126,	// (0x0002b159) main_mp4_pane_t3

0x1cb2,	// (0x0001fce5) main_mp4_pane_t4_ParamLimits

0x1cb2,	// (0x0001fce5) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0002d8da) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0002d8da) main_mp4_pane_t

0x1cf6,	// (0x0001fd29) mp4_progress_pane_ParamLimits

0x1cf6,	// (0x0001fd29) mp4_progress_pane

0x1d40,	// (0x0001fd73) mp4_rocker_pane_ParamLimits

0x1d40,	// (0x0001fd73) mp4_rocker_pane

0xd14e,	// (0x0002b181) mp4_progress_pane_t1

0xd167,	// (0x0002b19a) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0002d8e3) mp4_progress_pane_t

0xd180,	// (0x0002b1b3) mup_progress_pane_cp04

0xd9b9,	// (0x0002b9ec) mp4_rocker_pane_g1

0x1d60,	// (0x0001fd93) aid_cell_size_keypad2_ParamLimits

0x1d60,	// (0x0001fd93) aid_cell_size_keypad2

0x1d70,	// (0x0001fda3) dialer2_ne_pane_ParamLimits

0x1d70,	// (0x0001fda3) dialer2_ne_pane

0x1d7e,	// (0x0001fdb1) grid_dialer2_keypad_pane_ParamLimits

0x1d7e,	// (0x0001fdb1) grid_dialer2_keypad_pane

0xd28d,	// (0x0002b2c0) bg_popup_call_pane_cp07_ParamLimits

0xd28d,	// (0x0002b2c0) bg_popup_call_pane_cp07

0x695f,	// (0x00024992) dialer2_ne_pane_t1_ParamLimits

0x695f,	// (0x00024992) dialer2_ne_pane_t1

0x1d8e,	// (0x0001fdc1) cell_dialer2_keypad_pane_ParamLimits

0x1d8e,	// (0x0001fdc1) cell_dialer2_keypad_pane

0xd19e,	// (0x0002b1d1) bg_button_pane_pane_cp04_ParamLimits

0xd19e,	// (0x0002b1d1) bg_button_pane_pane_cp04

0x6984,	// (0x000249b7) cell_dialer2_keypad_pane_g1_ParamLimits

0x6984,	// (0x000249b7) cell_dialer2_keypad_pane_g1

0x3333,	// (0x00021366) aid_placing_vt_set_content_ParamLimits

0x3333,	// (0x00021366) aid_placing_vt_set_content

0x335f,	// (0x00021392) aid_placing_vt_set_title_ParamLimits

0x335f,	// (0x00021392) aid_placing_vt_set_title

0x10bc,	// (0x0001f0ef) main_image3_pane

0x1dd5,	// (0x0001fe08) area_side_right_pane_cp01_ParamLimits

0x1dd5,	// (0x0001fe08) area_side_right_pane_cp01

0x1e02,	// (0x0001fe35) main_image3_pane_g1_ParamLimits

0x1e02,	// (0x0001fe35) main_image3_pane_g1

0x1e10,	// (0x0001fe43) main_image3_pane_g2_ParamLimits

0x1e10,	// (0x0001fe43) main_image3_pane_g2

0x1e29,	// (0x0001fe5c) main_image3_pane_g3_ParamLimits

0x1e29,	// (0x0001fe5c) main_image3_pane_g3

0x1e42,	// (0x0001fe75) main_image3_pane_g4_ParamLimits

0x1e42,	// (0x0001fe75) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0002d8f2) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0002d8f2) main_image3_pane_g

0x1e5b,	// (0x0001fe8e) main_image3_pane_t1_ParamLimits

0x1e5b,	// (0x0001fe8e) main_image3_pane_t1

0x1e80,	// (0x0001feb3) main_image3_pane_t2_ParamLimits

0x1e80,	// (0x0001feb3) main_image3_pane_t2

0x1e9f,	// (0x0001fed2) main_image3_pane_t3_ParamLimits

0x1e9f,	// (0x0001fed2) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0002d8fb) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0002d8fb) main_image3_pane_t

0xd3dd,	// (0x0002b410) grid_sctrl_middle_pane_cp01_ParamLimits

0xd3dd,	// (0x0002b410) grid_sctrl_middle_pane_cp01

0x69ec,	// (0x00024a1f) cell_sctrl_middle_pane_cp01_ParamLimits

0x69ec,	// (0x00024a1f) cell_sctrl_middle_pane_cp01

0x69fd,	// (0x00024a30) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x69fd,	// (0x00024a30) cell_sctrl_middle_pane_cp01_g1

0x10bc,	// (0x0001f0ef) main_call4_pane

0x6a0a,	// (0x00024a3d) aid_size_button_call4_ParamLimits

0x6a0a,	// (0x00024a3d) aid_size_button_call4

0x6a3a,	// (0x00024a6d) call4_windows_pane_ParamLimits

0x6a3a,	// (0x00024a6d) call4_windows_pane

0x6a54,	// (0x00024a87) grid_call4_button_pane_ParamLimits

0x6a54,	// (0x00024a87) grid_call4_button_pane

0xd1aa,	// (0x0002b1dd) call4_windows_conf_pane

0xd1c1,	// (0x0002b1f4) popup_call4_audio_first_window_ParamLimits

0xd1c1,	// (0x0002b1f4) popup_call4_audio_first_window

0xd20d,	// (0x0002b240) popup_call4_audio_second_window_ParamLimits

0xd20d,	// (0x0002b240) popup_call4_audio_second_window

0xd221,	// (0x0002b254) popup_call4_audio_wait_window_ParamLimits

0xd221,	// (0x0002b254) popup_call4_audio_wait_window

0x6a78,	// (0x00024aab) cell_call4_button_pane_ParamLimits

0x6a78,	// (0x00024aab) cell_call4_button_pane

0x6a9d,	// (0x00024ad0) bg_button_pane_cp09_ParamLimits

0x6a9d,	// (0x00024ad0) bg_button_pane_cp09

0x6aa9,	// (0x00024adc) cell_call4_button_pane_g1_ParamLimits

0x6aa9,	// (0x00024adc) cell_call4_button_pane_g1

0x6ab6,	// (0x00024ae9) cell_call4_button_pane_t1_ParamLimits

0x6ab6,	// (0x00024ae9) cell_call4_button_pane_t1

0xd269,	// (0x0002b29c) popup_call4_audio_conf_window_ParamLimits

0xd269,	// (0x0002b29c) popup_call4_audio_conf_window

0x627f,	// (0x000242b2) mup3_progress_pane_t1_ParamLimits

0x629e,	// (0x000242d1) mup3_progress_pane_t2_ParamLimits

0xcb59,	// (0x0002ab8c) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0002d7cf) mup3_progress_pane_t_ParamLimits

0xcb76,	// (0x0002aba9) mup_progress_pane_cp03_ParamLimits

0x6734,	// (0x00024767) mup3_control_keys_pane_g4_copy1

0x1d24,	// (0x0001fd57) mp4_rocker2_pane_ParamLimits

0x1d24,	// (0x0001fd57) mp4_rocker2_pane

0xd27d,	// (0x0002b2b0) mp4_rocker2_pane_g1

0xd285,	// (0x0002b2b8) mp4_rocker2_pane_g2

0x1f00,	// (0x0001ff33) mp4_rocker2_pane_g3

0x1f08,	// (0x0001ff3b) mp4_rocker2_pane_g4

0x1f10,	// (0x0001ff43) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0002d904) mp4_rocker2_pane_g

0x10bc,	// (0x0001f0ef) main_camera4_pane

0x10bc,	// (0x0001f0ef) main_video4_pane

0x1adc,	// (0x0001fb0f) main_video_tele_dialer_pane_t1_ParamLimits

0x1adc,	// (0x0001fb0f) main_video_tele_dialer_pane_t1

0x1aee,	// (0x0001fb21) main_video_tele_dialer_pane_t2_ParamLimits

0x1aee,	// (0x0001fb21) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0002d8be) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0002d8be) main_video_tele_dialer_pane_t

0x1f30,	// (0x0001ff63) cam4_autofocus_pane_ParamLimits

0x1f30,	// (0x0001ff63) cam4_autofocus_pane

0x1f4a,	// (0x0001ff7d) cam4_image_uncrop_pane_ParamLimits

0x1f4a,	// (0x0001ff7d) cam4_image_uncrop_pane

0x1f61,	// (0x0001ff94) cam4_indicators_pane_ParamLimits

0x1f61,	// (0x0001ff94) cam4_indicators_pane

0x1f7d,	// (0x0001ffb0) main_camera4_pane_g1_ParamLimits

0x1f7d,	// (0x0001ffb0) main_camera4_pane_g1

0x1f89,	// (0x0001ffbc) main_camera4_pane_g2_ParamLimits

0x1f89,	// (0x0001ffbc) main_camera4_pane_g2

0x1f89,	// (0x0001ffbc) main_camera4_pane_g3_ParamLimits

0x1f89,	// (0x0001ffbc) main_camera4_pane_g3

0x1f95,	// (0x0001ffc8) main_camera4_pane_g4_ParamLimits

0x1f95,	// (0x0001ffc8) main_camera4_pane_g4

0x1fa1,	// (0x0001ffd4) main_camera4_pane_g5_ParamLimits

0x1fa1,	// (0x0001ffd4) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0002d90f) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0002d90f) main_camera4_pane_g

0x1fbb,	// (0x0001ffee) main_camera4_pane_t1_ParamLimits

0x1fbb,	// (0x0001ffee) main_camera4_pane_t1

0x1fdf,	// (0x00020012) bg_tb_trans_pane_cp06

0x1ff5,	// (0x00020028) cam4_indicators_pane_g1

0x2006,	// (0x00020039) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0002d92a) cam4_indicators_pane_g

0x2024,	// (0x00020057) cam4_indicators_pane_t1

0x204e,	// (0x00020081) main_video4_pane_g1_ParamLimits

0x204e,	// (0x00020081) main_video4_pane_g1

0x205a,	// (0x0002008d) main_video4_pane_g2_ParamLimits

0x205a,	// (0x0002008d) main_video4_pane_g2

0x2066,	// (0x00020099) main_video4_pane_g3_ParamLimits

0x2066,	// (0x00020099) main_video4_pane_g3

0x2072,	// (0x000200a5) main_video4_pane_g4_ParamLimits

0x2072,	// (0x000200a5) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0002d931) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0002d931) main_video4_pane_g

0x2092,	// (0x000200c5) vid4_indicators_pane_ParamLimits

0x2092,	// (0x000200c5) vid4_indicators_pane

0x20b1,	// (0x000200e4) video4_image_uncrop_cif_pane_ParamLimits

0x20b1,	// (0x000200e4) video4_image_uncrop_cif_pane

0x20c0,	// (0x000200f3) video4_image_uncrop_nhd_pane_ParamLimits

0x20c0,	// (0x000200f3) video4_image_uncrop_nhd_pane

0x1f4a,	// (0x0001ff7d) video4_image_uncrop_vga_pane_ParamLimits

0x1f4a,	// (0x0001ff7d) video4_image_uncrop_vga_pane

0x1586,	// (0x0001f5b9) bg_tb_trans_pane_cp07

0x20d7,	// (0x0002010a) vid4_indicators_pane_g1

0x20eb,	// (0x0002011e) vid4_indicators_pane_g2

0x20ff,	// (0x00020132) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0002d93c) vid4_indicators_pane_g

0x212e,	// (0x00020161) vid4_indicators_pane_t1

0x6aec,	// (0x00024b1f) cam4_autofocus_pane_g1

0x6af4,	// (0x00024b27) cam4_autofocus_pane_g2

0x6afc,	// (0x00024b2f) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0002d947) cam4_autofocus_pane_g

0x6b04,	// (0x00024b37) cam4_autofocus_pane_g3_copy1

0x690c,	// (0x0002493f) video_down_pane_cp_t1

0x691a,	// (0x0002494d) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0002d8c3) video_down_pane_cp_t

0x10ae,	// (0x0001f0e1) popup_vitu2_window_ParamLimits

0x10ae,	// (0x0001f0e1) popup_vitu2_window

0x2145,	// (0x00020178) aid_size_cell2_itu2_ParamLimits

0x2145,	// (0x00020178) aid_size_cell2_itu2

0x2167,	// (0x0002019a) aid_size_cell_itu2_ParamLimits

0x2167,	// (0x0002019a) aid_size_cell_itu2

0x21ab,	// (0x000201de) bg_popup_window_pane_cp09_ParamLimits

0x21ab,	// (0x000201de) bg_popup_window_pane_cp09

0x21b9,	// (0x000201ec) field_vitu2_entry_pane_ParamLimits

0x21b9,	// (0x000201ec) field_vitu2_entry_pane

0x21d9,	// (0x0002020c) grid_vitu2_function_pane_ParamLimits

0x21d9,	// (0x0002020c) grid_vitu2_function_pane

0x221d,	// (0x00020250) grid_vitu2_itu_pane_ParamLimits

0x221d,	// (0x00020250) grid_vitu2_itu_pane

0x2295,	// (0x000202c8) cell_vitu2_itu_pane_ParamLimits

0x2295,	// (0x000202c8) cell_vitu2_itu_pane

0x22aa,	// (0x000202dd) cell_vitu2_function_pane_ParamLimits

0x22aa,	// (0x000202dd) cell_vitu2_function_pane

0xd29b,	// (0x0002b2ce) bg_popup_call_pane_cp08_ParamLimits

0xd29b,	// (0x0002b2ce) bg_popup_call_pane_cp08

0xd2b2,	// (0x0002b2e5) field_vitu2_entry_pane_g1

0xd2be,	// (0x0002b2f1) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0002d94e) field_vitu2_entry_pane_g

0x6b0c,	// (0x00024b3f) field_vitu2_entry_pane_t1_ParamLimits

0x6b0c,	// (0x00024b3f) field_vitu2_entry_pane_t1

0xd2d8,	// (0x0002b30b) field_vitu2_entry_pane_t2_ParamLimits

0xd2d8,	// (0x0002b30b) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0002d955) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0002d955) field_vitu2_entry_pane_t

0x22e9,	// (0x0002031c) bg_button_pane_cp010_ParamLimits

0x22e9,	// (0x0002031c) bg_button_pane_cp010

0x22f7,	// (0x0002032a) cell_vitu2_itu_pane_g1

0x2320,	// (0x00020353) cell_vitu2_itu_pane_t1_ParamLimits

0x2320,	// (0x00020353) cell_vitu2_itu_pane_t1

0x236c,	// (0x0002039f) cell_vitu2_itu_pane_t2_ParamLimits

0x236c,	// (0x0002039f) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0002d95f) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0002d95f) cell_vitu2_itu_pane_t

0x1586,	// (0x0001f5b9) bg_button_pane_cp011

0x2427,	// (0x0002045a) cell_vitu2_function_pane_g1

0x10bc,	// (0x0001f0ef) main_myfav_hc_pane

0x1ee1,	// (0x0001ff14) popup_image3_note_pane_ParamLimits

0x1ee1,	// (0x0001ff14) popup_image3_note_pane

0x1eef,	// (0x0001ff22) popup_image3_tool_bar_pane_ParamLimits

0x1eef,	// (0x0001ff22) popup_image3_tool_bar_pane

0x23da,	// (0x0002040d) cell_vitu2_itu_pane_t3_ParamLimits

0x23da,	// (0x0002040d) cell_vitu2_itu_pane_t3

0x9c48,	// (0x00027c7b) bg_popup_trans_pane

0xd2fd,	// (0x0002b330) grid_image3_tool_bar_pane

0xd307,	// (0x0002b33a) bg_popup_trans_pane_g1

0xa7aa,	// (0x000287dd) bg_popup_trans_pane_g2

0xd30f,	// (0x0002b342) bg_popup_trans_pane_g3

0xd317,	// (0x0002b34a) bg_popup_trans_pane_g4

0xd31f,	// (0x0002b352) bg_popup_trans_pane_g5

0xd327,	// (0x0002b35a) bg_popup_trans_pane_g6

0xd32f,	// (0x0002b362) bg_popup_trans_pane_g7

0xd337,	// (0x0002b36a) bg_popup_trans_pane_g8

0xa78a,	// (0x000287bd) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0002d966) bg_popup_trans_pane_g

0xd33f,	// (0x0002b372) cell_image3_tool_bar_pane_ParamLimits

0xd33f,	// (0x0002b372) cell_image3_tool_bar_pane

0xc84f,	// (0x0002a882) cell_image3_tool_bar_pane_g1

0x9c48,	// (0x00027c7b) bg_popup_trans_pane_cp1

0xd353,	// (0x0002b386) popup_image3_note_pane_t1

0xd361,	// (0x0002b394) popup_image3_note_pane_t2

0xd36f,	// (0x0002b3a2) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0002d979) popup_image3_note_pane_t

0xd37d,	// (0x0002b3b0) popup_image3_note_pane_t3_copy1

0x6b38,	// (0x00024b6b) bg_myfav_hc_instruction_pane_ParamLimits

0x6b38,	// (0x00024b6b) bg_myfav_hc_instruction_pane

0x6b50,	// (0x00024b83) cell_myfav_contact_pane_ParamLimits

0x6b50,	// (0x00024b83) cell_myfav_contact_pane

0x6b6a,	// (0x00024b9d) cell_myfav_contact_pane_cp1_ParamLimits

0x6b6a,	// (0x00024b9d) cell_myfav_contact_pane_cp1

0x6b82,	// (0x00024bb5) cell_myfav_contact_pane_cp2_ParamLimits

0x6b82,	// (0x00024bb5) cell_myfav_contact_pane_cp2

0x6b9a,	// (0x00024bcd) cell_myfav_contact_pane_cp3_ParamLimits

0x6b9a,	// (0x00024bcd) cell_myfav_contact_pane_cp3

0x6bb1,	// (0x00024be4) cell_myfav_contact_pane_cp4_ParamLimits

0x6bb1,	// (0x00024be4) cell_myfav_contact_pane_cp4

0x6bc7,	// (0x00024bfa) cell_myfav_contact_pane_cp5_ParamLimits

0x6bc7,	// (0x00024bfa) cell_myfav_contact_pane_cp5

0x6bdb,	// (0x00024c0e) cell_myfav_contact_pane_cp6_ParamLimits

0x6bdb,	// (0x00024c0e) cell_myfav_contact_pane_cp6

0x6bef,	// (0x00024c22) cell_myfav_contact_pane_cp7_ParamLimits

0x6bef,	// (0x00024c22) cell_myfav_contact_pane_cp7

0xd38b,	// (0x0002b3be) listscroll_gen_pane_cp05

0x6c07,	// (0x00024c3a) main_myfav_hc_pane_g1_ParamLimits

0x6c07,	// (0x00024c3a) main_myfav_hc_pane_g1

0x6c1d,	// (0x00024c50) main_myfav_hc_pane_g2_ParamLimits

0x6c1d,	// (0x00024c50) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0002d980) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0002d980) main_myfav_hc_pane_g

0x6c4b,	// (0x00024c7e) main_myfav_hc_pane_t1_ParamLimits

0x6c4b,	// (0x00024c7e) main_myfav_hc_pane_t1

0xd394,	// (0x0002b3c7) main_myfav_hc_pane_t2_ParamLimits

0xd394,	// (0x0002b3c7) main_myfav_hc_pane_t2

0xd3a6,	// (0x0002b3d9) main_myfav_hc_pane_t3_ParamLimits

0xd3a6,	// (0x0002b3d9) main_myfav_hc_pane_t3

0x6c62,	// (0x00024c95) main_myfav_hc_pane_t4_ParamLimits

0x6c62,	// (0x00024c95) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0002d987) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0002d987) main_myfav_hc_pane_t

0xc84f,	// (0x0002a882) bg_myfav_hc_instruction_pane_g1

0xd3b8,	// (0x0002b3eb) cell_myfav_contact_pane_g1_ParamLimits

0xd3b8,	// (0x0002b3eb) cell_myfav_contact_pane_g1

0xd3b8,	// (0x0002b3eb) cell_myfav_contact_pane_g2_ParamLimits

0xd3b8,	// (0x0002b3eb) cell_myfav_contact_pane_g2

0xd3c4,	// (0x0002b3f7) cell_myfav_contact_pane_g3_ParamLimits

0xd3c4,	// (0x0002b3f7) cell_myfav_contact_pane_g3

0xcb43,	// (0x0002ab76) cell_myfav_contact_pane_g4_ParamLimits

0xcb43,	// (0x0002ab76) cell_myfav_contact_pane_g4

0xd3d1,	// (0x0002b404) cell_myfav_contact_pane_g5_ParamLimits

0xd3d1,	// (0x0002b404) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0002d992) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0002d992) cell_myfav_contact_pane_g

0x6c33,	// (0x00024c66) main_myfav_hc_pane_g3_ParamLimits

0x6c33,	// (0x00024c66) main_myfav_hc_pane_g3

0x0fb7,	// (0x0001efea) popup_adpt_find_window

0x6c8c,	// (0x00024cbf) afind_page_pane_ParamLimits

0x6c8c,	// (0x00024cbf) afind_page_pane

0x6c99,	// (0x00024ccc) aid_size_cell_afind_ParamLimits

0x6c99,	// (0x00024ccc) aid_size_cell_afind

0x6cb3,	// (0x00024ce6) bg_popup_sub_pane_cp09_ParamLimits

0x6cb3,	// (0x00024ce6) bg_popup_sub_pane_cp09

0x6cc0,	// (0x00024cf3) find_pane_cp01_ParamLimits

0x6cc0,	// (0x00024cf3) find_pane_cp01

0xd3eb,	// (0x0002b41e) grid_afind_control_pane_ParamLimits

0xd3eb,	// (0x0002b41e) grid_afind_control_pane

0x6ccd,	// (0x00024d00) grid_afind_pane_ParamLimits

0x6ccd,	// (0x00024d00) grid_afind_pane

0x6ce9,	// (0x00024d1c) cell_afind_pane_ParamLimits

0x6ce9,	// (0x00024d1c) cell_afind_pane

0xc84f,	// (0x0002a882) afind_page_pane_g1

0x6d31,	// (0x00024d64) afind_page_pane_g2

0x6d3a,	// (0x00024d6d) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0002d99d) afind_page_pane_g

0x6d43,	// (0x00024d76) afind_page_pane_t1

0xd3ff,	// (0x0002b432) cell_afind_grid_control_pane_ParamLimits

0xd3ff,	// (0x0002b432) cell_afind_grid_control_pane

0xd19e,	// (0x0002b1d1) bg_button_pane_cp69_ParamLimits

0xd19e,	// (0x0002b1d1) bg_button_pane_cp69

0x6d63,	// (0x00024d96) cell_afind_pane_g1_ParamLimits

0x6d63,	// (0x00024d96) cell_afind_pane_g1

0x6d70,	// (0x00024da3) cell_afind_pane_t1_ParamLimits

0x6d70,	// (0x00024da3) cell_afind_pane_t1

0xa5a3,	// (0x000285d6) bg_button_pane_cp72

0xd40e,	// (0x0002b441) cell_afind_grid_control_pane_g1

0x5111,	// (0x00023144) aid_image_placing_area_ParamLimits

0x5111,	// (0x00023144) aid_image_placing_area

0xce6c,	// (0x0002ae9f) field_vitu_entry_pane_g1_ParamLimits

0xce6c,	// (0x0002ae9f) field_vitu_entry_pane_g1

0xce78,	// (0x0002aeab) field_vitu_entry_pane_g2_ParamLimits

0xce78,	// (0x0002aeab) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0002d84e) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0002d84e) field_vitu_entry_pane_g

0x67bc,	// (0x000247ef) cell_vitu_itu_pane_g1_ParamLimits

0x67fe,	// (0x00024831) cell_vitu_itu_pane_t3_ParamLimits

0x67fe,	// (0x00024831) cell_vitu_itu_pane_t3

0xd14e,	// (0x0002b181) mp4_progress_pane_t1_ParamLimits

0xd167,	// (0x0002b19a) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0002d8e3) mp4_progress_pane_t_ParamLimits

0xd180,	// (0x0002b1b3) mup_progress_pane_cp04_ParamLimits

0x6c76,	// (0x00024ca9) main_myfav_hc_pane_t5_ParamLimits

0x6c76,	// (0x00024ca9) main_myfav_hc_pane_t5

0x0e7a,	// (0x0001eead) aid_zoom_text_primary

0x0fb7,	// (0x0001efea) popup_adpt_find_window_ParamLimits

0x1586,	// (0x0001f5b9) main_cam_set_pane

0x1f6f,	// (0x0001ffa2) cam4_zoom_pane_ParamLimits

0x1f6f,	// (0x0001ffa2) cam4_zoom_pane

0x6d82,	// (0x00024db5) main_cam_set_pane_g1_ParamLimits

0x6d82,	// (0x00024db5) main_cam_set_pane_g1

0x6d90,	// (0x00024dc3) main_cam_set_pane_g2_ParamLimits

0x6d90,	// (0x00024dc3) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0002d9a4) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0002d9a4) main_cam_set_pane_g

0x6d9c,	// (0x00024dcf) main_cam_set_pane_t1_ParamLimits

0x6d9c,	// (0x00024dcf) main_cam_set_pane_t1

0x6db8,	// (0x00024deb) main_cset_listscroll_pane_ParamLimits

0x6db8,	// (0x00024deb) main_cset_listscroll_pane

0x6de3,	// (0x00024e16) main_cset_slider_pane_ParamLimits

0x6de3,	// (0x00024e16) main_cset_slider_pane

0xd41f,	// (0x0002b452) main_cset_list_pane_ParamLimits

0xd41f,	// (0x0002b452) main_cset_list_pane

0xd42f,	// (0x0002b462) scroll_pane_cp028

0x6e02,	// (0x00024e35) aid_area_touch_slider

0x6e1e,	// (0x00024e51) cset_slider_pane

0x6e48,	// (0x00024e7b) main_cset_slider_pane_g1

0x6e5d,	// (0x00024e90) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0002d9a9) main_cset_slider_pane_g

0xd468,	// (0x0002b49b) main_cset_slider_pane_t1

0x6f1f,	// (0x00024f52) main_cset_slider_pane_t2

0x6f39,	// (0x00024f6c) main_cset_slider_pane_t3

0x6f53,	// (0x00024f86) main_cset_slider_pane_t4

0x6f6d,	// (0x00024fa0) main_cset_slider_pane_t5

0x6f8b,	// (0x00024fbe) main_cset_slider_pane_t6

0x6fa2,	// (0x00024fd5) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0002d9ce) main_cset_slider_pane_t

0x70ae,	// (0x000250e1) cset_list_set_pane_ParamLimits

0x70ae,	// (0x000250e1) cset_list_set_pane

0x70c4,	// (0x000250f7) aid_position_infowindow_above

0x70cc,	// (0x000250ff) aid_position_infowindow_below

0xd508,	// (0x0002b53b) cset_list_set_pane_g1_ParamLimits

0xd508,	// (0x0002b53b) cset_list_set_pane_g1

0xd514,	// (0x0002b547) cset_list_set_pane_g3_ParamLimits

0xd514,	// (0x0002b547) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0002d9ed) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0002d9ed) cset_list_set_pane_g

0xd52f,	// (0x0002b562) cset_list_set_pane_t1_ParamLimits

0xd52f,	// (0x0002b562) cset_list_set_pane_t1

0xa391,	// (0x000283c4) list_highlight_pane_cp021_ParamLimits

0xa391,	// (0x000283c4) list_highlight_pane_cp021

0xb0fb,	// (0x0002912e) cset_slider_pane_g1

0xb10d,	// (0x00029140) cset_slider_pane_g2

0xb104,	// (0x00029137) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0002d9f2) cset_slider_pane_g

0x243b,	// (0x0002046e) aid_area_touch_cam4_zoom

0x2443,	// (0x00020476) cam4_zoom_cont_pane

0x244b,	// (0x0002047e) cam4_zoom_pane_g1

0x2453,	// (0x00020486) cam4_zoom_pane_g2

0x245b,	// (0x0002048e) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0002d9f9) cam4_zoom_pane_g

0x2463,	// (0x00020496) cam4_zoom_cont_pane_g1

0x246c,	// (0x0002049f) cam4_zoom_cont_pane_g2

0x2475,	// (0x000204a8) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0002da00) cam4_zoom_cont_pane_g

0x6a24,	// (0x00024a57) call4_image_pane_ParamLimits

0x6a24,	// (0x00024a57) call4_image_pane

0xd1aa,	// (0x0002b1dd) call4_windows_conf_pane_ParamLimits

0xd1eb,	// (0x0002b21e) popup_call4_audio_in_window_ParamLimits

0xd1eb,	// (0x0002b21e) popup_call4_audio_in_window

0x9c48,	// (0x00027c7b) bg_popup_call2_act_pane_cp02

0xd261,	// (0x0002b294) call4_list_conf_pane

0xc84f,	// (0x0002a882) call4_image_pane_g1

0xc84f,	// (0x0002a882) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0002d70f) call4_image_pane_g

0xd544,	// (0x0002b577) list_single_graphic_popup_conf4_pane_ParamLimits

0xd544,	// (0x0002b577) list_single_graphic_popup_conf4_pane

0x9c48,	// (0x00027c7b) list_highlight_pane_cp022

0xd557,	// (0x0002b58a) list_single_graphic_popup_conf4_pane_g1

0xacb8,	// (0x00028ceb) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0002da07) list_single_graphic_popup_conf4_pane_g

0xd55f,	// (0x0002b592) list_single_graphic_popup_conf4_pane_t1

0x34c3,	// (0x000214f6) popup_vtel_slider_window_ParamLimits

0x34c3,	// (0x000214f6) popup_vtel_slider_window

0xd18c,	// (0x0002b1bf) dialer2_ne_pane_t2_ParamLimits

0xd18c,	// (0x0002b1bf) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0002d8e8) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0002d8e8) dialer2_ne_pane_t

0xa391,	// (0x000283c4) bg_popup_sub_pane_cp010_ParamLimits

0xa391,	// (0x000283c4) bg_popup_sub_pane_cp010

0x70d4,	// (0x00025107) popup_vtel_slider_window_g1_ParamLimits

0x70d4,	// (0x00025107) popup_vtel_slider_window_g1

0x70e0,	// (0x00025113) popup_vtel_slider_window_g2_ParamLimits

0x70e0,	// (0x00025113) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0002da0c) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0002da0c) popup_vtel_slider_window_g

0x7128,	// (0x0002515b) vtel_slider_pane_ParamLimits

0x7128,	// (0x0002515b) vtel_slider_pane

0x7137,	// (0x0002516a) vtel_slider_pane_g1_ParamLimits

0x7137,	// (0x0002516a) vtel_slider_pane_g1

0x7144,	// (0x00025177) vtel_slider_pane_g2_ParamLimits

0x7144,	// (0x00025177) vtel_slider_pane_g2

0x7151,	// (0x00025184) vtel_slider_pane_g3_ParamLimits

0x7151,	// (0x00025184) vtel_slider_pane_g3

0x7137,	// (0x0002516a) vtel_slider_pane_g4_ParamLimits

0x7137,	// (0x0002516a) vtel_slider_pane_g4

0x715e,	// (0x00025191) vtel_slider_pane_g5_ParamLimits

0x715e,	// (0x00025191) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0002da15) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0002da15) vtel_slider_pane_g

0x1586,	// (0x0001f5b9) main_gallery2_pane

0x218d,	// (0x000201c0) aid_size_row_itut2_dropdow_list_ParamLimits

0x218d,	// (0x000201c0) aid_size_row_itut2_dropdow_list

0x21fb,	// (0x0002022e) grid_vitu2_function_top_pane_ParamLimits

0x21fb,	// (0x0002022e) grid_vitu2_function_top_pane

0x2251,	// (0x00020284) popup_vitu2_dropdown_list_window_ParamLimits

0x2251,	// (0x00020284) popup_vitu2_dropdown_list_window

0x2271,	// (0x000202a4) popup_vitu2_match_list_window

0x247e,	// (0x000204b1) cell_vitu2_function_top_pane_ParamLimits

0x247e,	// (0x000204b1) cell_vitu2_function_top_pane

0x249e,	// (0x000204d1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x249e,	// (0x000204d1) cell_vitu2_function_top_pane_cp01

0x24bc,	// (0x000204ef) cell_vitu2_function_top_wide_pane_ParamLimits

0x24bc,	// (0x000204ef) cell_vitu2_function_top_wide_pane

0x1586,	// (0x0001f5b9) bg_button_pane_cp012

0x24da,	// (0x0002050d) cell_vitu2_function_top_pane_g1

0x24ee,	// (0x00020521) bg_button_pane_cp013_ParamLimits

0x24ee,	// (0x00020521) bg_button_pane_cp013

0x7179,	// (0x000251ac) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7179,	// (0x000251ac) cell_vitu2_function_top_wide_pane_g1

0x10ae,	// (0x0001f0e1) bg_popup_sub_pane_cp20

0x250a,	// (0x0002053d) list_vitu2_match_list_pane

0xd307,	// (0x0002b33a) bg_popup_sub_pane_cp20_g1

0xd30f,	// (0x0002b342) bg_popup_sub_pane_cp20_g2

0xa7aa,	// (0x000287dd) bg_popup_sub_pane_cp20_g3

0xd317,	// (0x0002b34a) bg_popup_sub_pane_cp20_g4

0xa78a,	// (0x000287bd) bg_popup_sub_pane_cp20_g5

0xd575,	// (0x0002b5a8) bg_popup_sub_pane_cp20_g6

0xd327,	// (0x0002b35a) bg_popup_sub_pane_cp20_g7

0xd32f,	// (0x0002b362) bg_popup_sub_pane_cp20_g8

0xd337,	// (0x0002b36a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0002da20) bg_popup_sub_pane_cp20_g

0x2522,	// (0x00020555) list_vitu2_match_list_item_pane_ParamLimits

0x2522,	// (0x00020555) list_vitu2_match_list_item_pane

0x2534,	// (0x00020567) list_vitu2_match_list_item_pane_t1

0x10bc,	// (0x0001f0ef) bg_popup_sub_pane_cp21

0x2542,	// (0x00020575) grid_vitu2_dropdown_list_pane

0x254a,	// (0x0002057d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x254a,	// (0x0002057d) cell_vitu2_dropdown_list_char_pane

0x256b,	// (0x0002059e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x256b,	// (0x0002059e) cell_vitu2_dropdown_list_ctrl_pane

0xd57d,	// (0x0002b5b0) cell_vitu2_dropdown_list_char_pane_g1

0xd586,	// (0x0002b5b9) cell_vitu2_dropdown_list_char_pane_g2

0xd58f,	// (0x0002b5c2) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0002da3d) cell_vitu2_dropdown_list_char_pane_g

0x2597,	// (0x000205ca) cell_vitu2_dropdown_list_char_pane_t1

0x71d5,	// (0x00025208) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x71d5,	// (0x00025208) cell_vitu2_dropdown_list_ctrl_pane_g1

0x71e5,	// (0x00025218) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x71e5,	// (0x00025218) cell_vitu2_dropdown_list_ctrl_pane_g2

0x71f6,	// (0x00025229) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x71f6,	// (0x00025229) cell_vitu2_dropdown_list_ctrl_pane_g3

0x25a5,	// (0x000205d8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x25a5,	// (0x000205d8) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1fdf,	// (0x00020012) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1fdf,	// (0x00020012) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0002da44) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0002da44) cell_vitu2_dropdown_list_ctrl_pane_g

0x7206,	// (0x00025239) aid_size_cell_gallery2_ParamLimits

0x7206,	// (0x00025239) aid_size_cell_gallery2

0x7220,	// (0x00025253) grid_gallery2_pane_ParamLimits

0x7220,	// (0x00025253) grid_gallery2_pane

0x6645,	// (0x00024678) scroll_pane_cp029_ParamLimits

0x6645,	// (0x00024678) scroll_pane_cp029

0x7237,	// (0x0002526a) cell_gallery2_pane_ParamLimits

0x7237,	// (0x0002526a) cell_gallery2_pane

0xd598,	// (0x0002b5cb) cell_gallery2_pane_g2

0xe94c,	// (0x0002c97f) cell_gallery2_pane_g3

0xd5a0,	// (0x0002b5d3) cell_gallery2_pane_g4

0xd5a8,	// (0x0002b5db) cell_gallery2_pane_g5

0xafab,	// (0x00028fde) grid_highlight_pane_cp10

0x2271,	// (0x000202a4) popup_vitu2_match_list_window_ParamLimits

0x2285,	// (0x000202b8) popup_vitu2_query_window_ParamLimits

0x2285,	// (0x000202b8) popup_vitu2_query_window

0x10bc,	// (0x0001f0ef) bg_vitu2_candi_button_pane

0xd57d,	// (0x0002b5b0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd586,	// (0x0002b5b9) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd58f,	// (0x0002b5c2) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x728b,	// (0x000252be) bg_button_pane_cp015

0x729d,	// (0x000252d0) bg_button_pane_cp016

0x72b0,	// (0x000252e3) bg_button_pane_cp017

0xc43e,	// (0x0002a471) bg_popup_sub_pane_cp22

0xd5b0,	// (0x0002b5e3) popup_vitu2_query_window_g1

0x72f5,	// (0x00025328) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0002da4f) popup_vitu2_query_window_g

0x7312,	// (0x00025345) popup_vitu2_query_window_t1_ParamLimits

0x7312,	// (0x00025345) popup_vitu2_query_window_t1

0x7345,	// (0x00025378) popup_vitu2_query_window_t2_ParamLimits

0x7345,	// (0x00025378) popup_vitu2_query_window_t2

0x7357,	// (0x0002538a) popup_vitu2_query_window_t3_ParamLimits

0x7357,	// (0x0002538a) popup_vitu2_query_window_t3

0x737f,	// (0x000253b2) popup_vitu2_query_window_t4_ParamLimits

0x737f,	// (0x000253b2) popup_vitu2_query_window_t4

0x73a0,	// (0x000253d3) popup_vitu2_query_window_t5_ParamLimits

0x73a0,	// (0x000253d3) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0002da56) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0002da56) popup_vitu2_query_window_t

0xd417,	// (0x0002b44a) main_cset_text_pane

0x6e02,	// (0x00024e35) aid_area_touch_slider_ParamLimits

0x6e1e,	// (0x00024e51) cset_slider_pane_ParamLimits

0x6e48,	// (0x00024e7b) main_cset_slider_pane_g1_ParamLimits

0x6e5d,	// (0x00024e90) main_cset_slider_pane_g2_ParamLimits

0xd438,	// (0x0002b46b) main_cset_slider_pane_g3_ParamLimits

0xd438,	// (0x0002b46b) main_cset_slider_pane_g3

0x6e72,	// (0x00024ea5) main_cset_slider_pane_g4_ParamLimits

0x6e72,	// (0x00024ea5) main_cset_slider_pane_g4

0x6e81,	// (0x00024eb4) main_cset_slider_pane_g5_ParamLimits

0x6e81,	// (0x00024eb4) main_cset_slider_pane_g5

0x6e8f,	// (0x00024ec2) main_cset_slider_pane_g6_ParamLimits

0x6e8f,	// (0x00024ec2) main_cset_slider_pane_g6

0xf976,	// (0x0002d9a9) main_cset_slider_pane_g_ParamLimits

0xd468,	// (0x0002b49b) main_cset_slider_pane_t1_ParamLimits

0x6f1f,	// (0x00024f52) main_cset_slider_pane_t2_ParamLimits

0x6f39,	// (0x00024f6c) main_cset_slider_pane_t3_ParamLimits

0x6f53,	// (0x00024f86) main_cset_slider_pane_t4_ParamLimits

0x6f6d,	// (0x00024fa0) main_cset_slider_pane_t5_ParamLimits

0x6f8b,	// (0x00024fbe) main_cset_slider_pane_t6_ParamLimits

0x6fa2,	// (0x00024fd5) main_cset_slider_pane_t7_ParamLimits

0x6fd0,	// (0x00025003) main_cset_slider_pane_t8_ParamLimits

0x6fd0,	// (0x00025003) main_cset_slider_pane_t8

0x6ff8,	// (0x0002502b) main_cset_slider_pane_t9_ParamLimits

0x6ff8,	// (0x0002502b) main_cset_slider_pane_t9

0x7020,	// (0x00025053) main_cset_slider_pane_t10_ParamLimits

0x7020,	// (0x00025053) main_cset_slider_pane_t10

0x7048,	// (0x0002507b) main_cset_slider_pane_t11_ParamLimits

0x7048,	// (0x0002507b) main_cset_slider_pane_t11

0x7072,	// (0x000250a5) main_cset_slider_pane_t12_ParamLimits

0x7072,	// (0x000250a5) main_cset_slider_pane_t12

0x708f,	// (0x000250c2) main_cset_slider_pane_t13_ParamLimits

0x708f,	// (0x000250c2) main_cset_slider_pane_t13

0xf99b,	// (0x0002d9ce) main_cset_slider_pane_t_ParamLimits

0x9c48,	// (0x00027c7b) bg_popup_sub_pane_cp011

0xd5bc,	// (0x0002b5ef) main_cset_text_pane_g1

0xd5c4,	// (0x0002b5f7) main_cset_text_pane_t1

0xd5d2,	// (0x0002b605) main_cset_text_pane_t2

0xd5e0,	// (0x0002b613) main_cset_text_pane_t3

0xd5ee,	// (0x0002b621) main_cset_text_pane_t4

0xd5fc,	// (0x0002b62f) main_cset_text_pane_t5

0xd625,	// (0x0002b658) main_cset_text_pane_t6

0xd633,	// (0x0002b666) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0002da65) main_cset_text_pane_t

0x10bc,	// (0x0001f0ef) main_cam4_burst_pane

0x10bc,	// (0x0001f0ef) main_cam5_pane

0x6d51,	// (0x00024d84) bg_button_pane_cp019

0x6d5a,	// (0x00024d8d) bg_button_pane_cp020

0xd444,	// (0x0002b477) main_cset_slider_pane_g7_ParamLimits

0xd444,	// (0x0002b477) main_cset_slider_pane_g7

0xd450,	// (0x0002b483) main_cset_slider_pane_g8_ParamLimits

0xd450,	// (0x0002b483) main_cset_slider_pane_g8

0x6ea3,	// (0x00024ed6) main_cset_slider_pane_g9_ParamLimits

0x6ea3,	// (0x00024ed6) main_cset_slider_pane_g9

0x6eaf,	// (0x00024ee2) main_cset_slider_pane_g10_ParamLimits

0x6eaf,	// (0x00024ee2) main_cset_slider_pane_g10

0x6ebb,	// (0x00024eee) main_cset_slider_pane_g11_ParamLimits

0x6ebb,	// (0x00024eee) main_cset_slider_pane_g11

0x6ec7,	// (0x00024efa) main_cset_slider_pane_g12_ParamLimits

0x6ec7,	// (0x00024efa) main_cset_slider_pane_g12

0x6ed3,	// (0x00024f06) main_cset_slider_pane_g13_ParamLimits

0x6ed3,	// (0x00024f06) main_cset_slider_pane_g13

0x6edf,	// (0x00024f12) main_cset_slider_pane_g14_ParamLimits

0x6edf,	// (0x00024f12) main_cset_slider_pane_g14

0x6eeb,	// (0x00024f1e) main_cset_slider_pane_g15_ParamLimits

0x6eeb,	// (0x00024f1e) main_cset_slider_pane_g15

0xd496,	// (0x0002b4c9) main_cset_slider_pane_t14_ParamLimits

0xd496,	// (0x0002b4c9) main_cset_slider_pane_t14

0xd4cf,	// (0x0002b502) main_cset_slider_pane_t15_ParamLimits

0xd4cf,	// (0x0002b502) main_cset_slider_pane_t15

0x7417,	// (0x0002544a) aid_cam4_burst_size_cell_ParamLimits

0x7417,	// (0x0002544a) aid_cam4_burst_size_cell

0x7433,	// (0x00025466) grid_cam4_burst_pane_ParamLimits

0x7433,	// (0x00025466) grid_cam4_burst_pane

0x7463,	// (0x00025496) linegrid_cam4_burst_pane_ParamLimits

0x7463,	// (0x00025496) linegrid_cam4_burst_pane

0x7483,	// (0x000254b6) scroll_pane_cp30_ParamLimits

0x7483,	// (0x000254b6) scroll_pane_cp30

0x748f,	// (0x000254c2) cell_cam4_burst_pane_ParamLimits

0x748f,	// (0x000254c2) cell_cam4_burst_pane

0xd641,	// (0x0002b674) linegrid_cam4_burst_pane_g1_ParamLimits

0xd641,	// (0x0002b674) linegrid_cam4_burst_pane_g1

0x74cb,	// (0x000254fe) linegrid_cam4_burst_pane_g2_ParamLimits

0x74cb,	// (0x000254fe) linegrid_cam4_burst_pane_g2

0xd64e,	// (0x0002b681) linegrid_cam4_burst_pane_g3_ParamLimits

0xd64e,	// (0x0002b681) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0002da74) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0002da74) linegrid_cam4_burst_pane_g

0x74dc,	// (0x0002550f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x74dc,	// (0x0002550f) linegrid_cam4_burst_pane_g3_copy1

0xd65b,	// (0x0002b68e) linegrid_cam4_burst_pane_g4_ParamLimits

0xd65b,	// (0x0002b68e) linegrid_cam4_burst_pane_g4

0x74f6,	// (0x00025529) linegrid_cam4_burst_pane_g5_ParamLimits

0x74f6,	// (0x00025529) linegrid_cam4_burst_pane_g5

0x7507,	// (0x0002553a) linegrid_cam4_burst_pane_g6_ParamLimits

0x7507,	// (0x0002553a) linegrid_cam4_burst_pane_g6

0xd668,	// (0x0002b69b) linegrid_cam4_burst_pane_g7_ParamLimits

0xd668,	// (0x0002b69b) linegrid_cam4_burst_pane_g7

0x7518,	// (0x0002554b) cell_cam4_burst_pane_g1

0xd681,	// (0x0002b6b4) main_cam5_pane_t1_ParamLimits

0xd681,	// (0x0002b6b4) main_cam5_pane_t1

0xd693,	// (0x0002b6c6) main_cam5_pane_t2_ParamLimits

0xd693,	// (0x0002b6c6) main_cam5_pane_t2

0xd6a5,	// (0x0002b6d8) main_cam5_pane_t3_ParamLimits

0xd6a5,	// (0x0002b6d8) main_cam5_pane_t3

0xd6b7,	// (0x0002b6ea) main_cam5_pane_t4_ParamLimits

0xd6b7,	// (0x0002b6ea) main_cam5_pane_t4

0xd6cf,	// (0x0002b702) main_cam5_pane_t5_ParamLimits

0xd6cf,	// (0x0002b702) main_cam5_pane_t5

0xd6e3,	// (0x0002b716) main_cam5_pane_t6_ParamLimits

0xd6e3,	// (0x0002b716) main_cam5_pane_t6

0xd6f7,	// (0x0002b72a) main_cam5_pane_t7_ParamLimits

0xd6f7,	// (0x0002b72a) main_cam5_pane_t7

0xd715,	// (0x0002b748) main_cam5_pane_t8_ParamLimits

0xd715,	// (0x0002b748) main_cam5_pane_t8

0xd731,	// (0x0002b764) main_cam5_pane_t9_ParamLimits

0xd731,	// (0x0002b764) main_cam5_pane_t9

0xd743,	// (0x0002b776) main_cam5_pane_t10_ParamLimits

0xd743,	// (0x0002b776) main_cam5_pane_t10

0xd755,	// (0x0002b788) main_cam5_pane_t11_ParamLimits

0xd755,	// (0x0002b788) main_cam5_pane_t11

0xd767,	// (0x0002b79a) main_cam5_pane_t12_ParamLimits

0xd767,	// (0x0002b79a) main_cam5_pane_t12

0xd77c,	// (0x0002b7af) main_cam5_pane_t13_ParamLimits

0xd77c,	// (0x0002b7af) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0002da80) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0002da80) main_cam5_pane_t

0x106d,	// (0x0001f0a0) popup_scut_keymap_window_ParamLimits

0x106d,	// (0x0001f0a0) popup_scut_keymap_window

0x752b,	// (0x0002555e) aid_size_cell_brow_shortcut

0xafab,	// (0x00028fde) bg_popup_window_pane_cp010

0x7537,	// (0x0002556a) grid_scut_pane

0x7543,	// (0x00025576) cell_scut_pane_ParamLimits

0x7543,	// (0x00025576) cell_scut_pane

0x755a,	// (0x0002558d) cell_scut_pane_g1

0xd799,	// (0x0002b7cc) cell_scut_pane_t1

0xd7a8,	// (0x0002b7db) cell_scut_pane_t2

0x7563,	// (0x00025596) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0002da9b) cell_scut_pane_t

0x5e9e,	// (0x00023ed1) main_mup3_pane_g8_ParamLimits

0x5e9e,	// (0x00023ed1) main_mup3_pane_g8

0x219b,	// (0x000201ce) area_vitu2_query_pane_ParamLimits

0x219b,	// (0x000201ce) area_vitu2_query_pane

0x72c3,	// (0x000252f6) input_focus_pane_cp08

0xd7b7,	// (0x0002b7ea) area_vitu2_query_pane_g1

0x7571,	// (0x000255a4) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0002daa2) area_vitu2_query_pane_g

0x7582,	// (0x000255b5) area_vitu2_query_pane_t1_ParamLimits

0x7582,	// (0x000255b5) area_vitu2_query_pane_t1

0x7596,	// (0x000255c9) area_vitu2_query_pane_t2_ParamLimits

0x7596,	// (0x000255c9) area_vitu2_query_pane_t2

0x75aa,	// (0x000255dd) area_vitu2_query_pane_t3_ParamLimits

0x75aa,	// (0x000255dd) area_vitu2_query_pane_t3

0xd7c3,	// (0x0002b7f6) area_vitu2_query_pane_t4_ParamLimits

0xd7c3,	// (0x0002b7f6) area_vitu2_query_pane_t4

0xd7eb,	// (0x0002b81e) area_vitu2_query_pane_t5_ParamLimits

0xd7eb,	// (0x0002b81e) area_vitu2_query_pane_t5

0xd813,	// (0x0002b846) area_vitu2_query_pane_t6_ParamLimits

0xd813,	// (0x0002b846) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0002daa7) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0002daa7) area_vitu2_query_pane_t

0x75d2,	// (0x00025605) bg_button_pane_cp018

0x75e0,	// (0x00025613) bg_button_pane_cp021

0x75ec,	// (0x0002561f) bg_button_pane_cp022

0x75fd,	// (0x00025630) input_focus_pane_cp09

0xadf4,	// (0x00028e27) aid_size_touch_mv_arrow_left

0xae1d,	// (0x00028e50) aid_size_touch_mv_arrow_right

0x6f03,	// (0x00024f36) main_cset_slider_pane_g16_ParamLimits

0x6f03,	// (0x00024f36) main_cset_slider_pane_g16

0x6f11,	// (0x00024f44) main_cset_slider_pane_g17_ParamLimits

0x6f11,	// (0x00024f44) main_cset_slider_pane_g17

0x7518,	// (0x0002554b) cell_cam4_burst_pane_g1_ParamLimits

0x9c48,	// (0x00027c7b) compa_mode_pane

0x70ec,	// (0x0002511f) popup_vtel_slider_window_g3_ParamLimits

0x70ec,	// (0x0002511f) popup_vtel_slider_window_g3

0x7100,	// (0x00025133) popup_vtel_slider_window_g4_ParamLimits

0x7100,	// (0x00025133) popup_vtel_slider_window_g4

0x7114,	// (0x00025147) popup_vtel_slider_window_t1_ParamLimits

0x7114,	// (0x00025147) popup_vtel_slider_window_t1

0x10bc,	// (0x0001f0ef) main_cl_pane

0x1624,	// (0x0001f657) popup_imed_adjust2_window_ParamLimits

0xc43e,	// (0x0002a471) bg_tb_trans_pane_cp05_ParamLimits

0xcda1,	// (0x0002add4) popup_imed_adjust2_window_g1_ParamLimits

0xcdb0,	// (0x0002ade3) popup_imed_adjust2_window_g2_ParamLimits

0xcdb0,	// (0x0002ade3) popup_imed_adjust2_window_g2

0xcdbc,	// (0x0002adef) popup_imed_adjust2_window_g3_ParamLimits

0xcdbc,	// (0x0002adef) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0002d812) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0002d812) popup_imed_adjust2_window_g

0xcdc8,	// (0x0002adfb) popup_imed_adjust2_window_t1_ParamLimits

0xcde0,	// (0x0002ae13) slider_imed_adjust_pane_ParamLimits

0xcdf4,	// (0x0002ae27) slider_imed_adjust_pane_g1_ParamLimits

0xce04,	// (0x0002ae37) slider_imed_adjust_pane_g2_ParamLimits

0xce14,	// (0x0002ae47) slider_imed_adjust_pane_g3_ParamLimits

0xce25,	// (0x0002ae58) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0002d819) slider_imed_adjust_pane_g_ParamLimits

0x1f18,	// (0x0001ff4b) aid_touch_area_cam4_ParamLimits

0x1f18,	// (0x0001ff4b) aid_touch_area_cam4

0x1f28,	// (0x0001ff5b) battery_pane_cp01

0x1faf,	// (0x0001ffe2) main_camera4_pane_g6_ParamLimits

0x1faf,	// (0x0001ffe2) main_camera4_pane_g6

0x1fcd,	// (0x00020000) main_camera4_pane_t2_ParamLimits

0x1fcd,	// (0x00020000) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0002d91c) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0002d91c) main_camera4_pane_t

0x203e,	// (0x00020071) aid_touch_area_vid4_ParamLimits

0x203e,	// (0x00020071) aid_touch_area_vid4

0x207e,	// (0x000200b1) main_video4_pane_g5_ParamLimits

0x207e,	// (0x000200b1) main_video4_pane_g5

0x20a2,	// (0x000200d5) vid4_progress_pane_ParamLimits

0x20a2,	// (0x000200d5) vid4_progress_pane

0xd45c,	// (0x0002b48f) main_cset_slider_pane_g18_ParamLimits

0xd45c,	// (0x0002b48f) main_cset_slider_pane_g18

0xd675,	// (0x0002b6a8) cell_cam4_burst_pane_g2_ParamLimits

0xd675,	// (0x0002b6a8) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0002da7b) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0002da7b) cell_cam4_burst_pane_g

0x760e,	// (0x00025641) bg_cl_pane_ParamLimits

0x760e,	// (0x00025641) bg_cl_pane

0x761a,	// (0x0002564d) cl_header_pane_ParamLimits

0x761a,	// (0x0002564d) cl_header_pane

0x7626,	// (0x00025659) cl_listscroll_pane_ParamLimits

0x7626,	// (0x00025659) cl_listscroll_pane

0xd85f,	// (0x0002b892) bg_cl_pane_g1

0xd867,	// (0x0002b89a) bg_cl_pane_g2

0xd86f,	// (0x0002b8a2) bg_cl_pane_g3

0xd877,	// (0x0002b8aa) bg_cl_pane_g4

0xd87f,	// (0x0002b8b2) bg_cl_pane_g5

0xd887,	// (0x0002b8ba) bg_cl_pane_g6

0xd88f,	// (0x0002b8c2) bg_cl_pane_g7

0xd897,	// (0x0002b8ca) bg_cl_pane_g8

0xd89f,	// (0x0002b8d2) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0002dab6) bg_cl_pane_g

0x7632,	// (0x00025665) aid_height_cl_leading_ParamLimits

0x7632,	// (0x00025665) aid_height_cl_leading

0x763e,	// (0x00025671) aid_height_cl_text_ParamLimits

0x763e,	// (0x00025671) aid_height_cl_text

0xd3dd,	// (0x0002b410) bg_cl_header_pane_ParamLimits

0xd3dd,	// (0x0002b410) bg_cl_header_pane

0x7656,	// (0x00025689) cl_header_pane_g1_ParamLimits

0x7656,	// (0x00025689) cl_header_pane_g1

0x7663,	// (0x00025696) cl_header_pane_t1_ParamLimits

0x7663,	// (0x00025696) cl_header_pane_t1

0xd8a7,	// (0x0002b8da) cl_list_pane

0xd42f,	// (0x0002b462) hc_scroll_pane_cp01

0xa78a,	// (0x000287bd) bg_cl_header_pane_g1

0xd307,	// (0x0002b33a) bg_cl_header_pane_g2

0xa7aa,	// (0x000287dd) bg_cl_header_pane_g3

0xd317,	// (0x0002b34a) bg_cl_header_pane_g4

0xd30f,	// (0x0002b342) bg_cl_header_pane_g5

0xd575,	// (0x0002b5a8) bg_cl_header_pane_g6

0xd32f,	// (0x0002b362) bg_cl_header_pane_g7

0xd337,	// (0x0002b36a) bg_cl_header_pane_g8

0xd327,	// (0x0002b35a) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0002dac9) bg_cl_header_pane_g

0x7675,	// (0x000256a8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7675,	// (0x000256a8) hc_cl_list_double_graphic_heading_pane

0x7686,	// (0x000256b9) hc_cl_list_single_graphic_pane_ParamLimits

0x7686,	// (0x000256b9) hc_cl_list_single_graphic_pane

0x769f,	// (0x000256d2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x769f,	// (0x000256d2) hc_cl_list_single_graphic_pane_g1

0x76ab,	// (0x000256de) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x76ab,	// (0x000256de) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0002dadc) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0002dadc) hc_cl_list_single_graphic_pane_g

0x76bf,	// (0x000256f2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x76bf,	// (0x000256f2) hc_cl_list_single_graphic_pane_t1

0x769f,	// (0x000256d2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x769f,	// (0x000256d2) hc_cl_list_double_graphic_heading_pane_g1

0x76d4,	// (0x00025707) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x76d4,	// (0x00025707) hc_cl_list_double_graphic_heading_pane_g2

0x76e8,	// (0x0002571b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x76e8,	// (0x0002571b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0002dae1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0002dae1) hc_cl_list_double_graphic_heading_pane_g

0x76fc,	// (0x0002572f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x76fc,	// (0x0002572f) hc_cl_list_double_graphic_heading_pane_t1

0x7711,	// (0x00025744) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7711,	// (0x00025744) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0002dae8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0002dae8) hc_cl_list_double_graphic_heading_pane_t

0x25c9,	// (0x000205fc) vid4_progress_pane_g1

0x25d9,	// (0x0002060c) vid4_progress_pane_g2

0x25e9,	// (0x0002061c) vid4_progress_pane_g3

0x25fb,	// (0x0002062e) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0002daed) vid4_progress_pane_g

0x2613,	// (0x00020646) vid4_progress_pane_t1

0x2629,	// (0x0002065c) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0002daf8) vid4_progress_pane_t

0x2653,	// (0x00020686) wait_bar_pane_cp07

0xc639,	// (0x0002a66c) blid_firmament_pane_ParamLimits

0xc67c,	// (0x0002a6af) popup_blid_sat_info2_window_g1

0xc6a0,	// (0x0002a6d3) popup_blid_sat_info2_window_t3

0xc6ae,	// (0x0002a6e1) popup_blid_sat_info2_window_t4

0xc6bc,	// (0x0002a6ef) popup_blid_sat_info2_window_t5

0xc6ca,	// (0x0002a6fd) popup_blid_sat_info2_window_t6

0xc6da,	// (0x0002a70d) popup_blid_sat_info2_window_t7

0xc6e8,	// (0x0002a71b) popup_blid_sat_info2_window_t8

0xc6f6,	// (0x0002a729) popup_blid_sat_info2_window_t9

0xc704,	// (0x0002a737) popup_blid_sat_info2_window_t10

0xc7cf,	// (0x0002a802) aid_firma_cardinal_ParamLimits

0xc7e3,	// (0x0002a816) blid_firmament_pane_t1_ParamLimits

0xc7fa,	// (0x0002a82d) blid_firmament_pane_t2_ParamLimits

0xc811,	// (0x0002a844) blid_firmament_pane_t3_ParamLimits

0xc828,	// (0x0002a85b) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0002d706) blid_firmament_pane_t_ParamLimits

0xc83f,	// (0x0002a872) blid_sat_info_pane_ParamLimits

0x1586,	// (0x0001f5b9) main_cam_set_pane_ParamLimits

0x65de,	// (0x00024611) aid_size_cell_colour_35_ParamLimits

0x65f8,	// (0x0002462b) aid_size_cell_colour_112_ParamLimits

0x660f,	// (0x00024642) aid_size_cell_effect_ParamLimits

0xa391,	// (0x000283c4) bg_tb_trans_pane_cp02_ParamLimits

0xb052,	// (0x00029085) heading_imed_pane_ParamLimits

0x6629,	// (0x0002465c) listscroll_imed_pane_ParamLimits

0xba64,	// (0x00029a97) popup_call2_audio_first_window_g5_ParamLimits

0xba64,	// (0x00029a97) popup_call2_audio_first_window_g5

0x1da3,	// (0x0001fdd6) aid_size_touch_image3_arrow_left_ParamLimits

0x1da3,	// (0x0001fdd6) aid_size_touch_image3_arrow_left

0x1db9,	// (0x0001fdec) aid_size_touch_image3_arrow_right_ParamLimits

0x1db9,	// (0x0001fdec) aid_size_touch_image3_arrow_right

0x263e,	// (0x00020671) vid4_progress_pane_t3

0x68c7,	// (0x000248fa) main_hwr_training_symbol_option_pane_ParamLimits

0x68c7,	// (0x000248fa) main_hwr_training_symbol_option_pane

0xd08e,	// (0x0002b0c1) popup_hwr_training_preview_window_ParamLimits

0xd08e,	// (0x0002b0c1) popup_hwr_training_preview_window

0x1aa1,	// (0x0001fad4) hwr_training_navi_pane_g5_ParamLimits

0x1aa1,	// (0x0001fad4) hwr_training_navi_pane_g5

0xd2f5,	// (0x0002b328) popup_char_count_window

0x10ae,	// (0x0001f0e1) bg_popup_sub_pane_cp20_ParamLimits

0x250a,	// (0x0002053d) list_vitu2_match_list_pane_ParamLimits

0x2516,	// (0x00020549) vitu2_page_scroll_pane_ParamLimits

0x2516,	// (0x00020549) vitu2_page_scroll_pane

0xd8d2,	// (0x0002b905) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd8d2,	// (0x0002b905) list_single_hwr_training_symbol_option_pane

0xd8e5,	// (0x0002b918) list_single_hwr_training_symbol_option_pane_g1

0xd8ed,	// (0x0002b920) list_single_hwr_training_symbol_option_pane_t1

0xd8fb,	// (0x0002b92e) bg_button_pane_cp023

0xd904,	// (0x0002b937) bg_button_pane_cp024

0x7755,	// (0x00025788) vitu2_page_scroll_pane_g1

0x775d,	// (0x00025790) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0002daff) vitu2_page_scroll_pane_g

0x7765,	// (0x00025798) vitu2_page_scroll_pane_t1

0xd93f,	// (0x0002b972) popup_char_count_window_g1

0xd948,	// (0x0002b97b) popup_char_count_window_g2

0xd951,	// (0x0002b984) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0002db04) popup_char_count_window_g

0xd95a,	// (0x0002b98d) popup_char_count_window_t1

0x10bc,	// (0x0001f0ef) main_vded2_pane

0xcd8d,	// (0x0002adc0) aid_size_cell_imed_line

0xcd97,	// (0x0002adca) grid_imed_line_width_pane

0x2110,	// (0x00020143) vid4_indicators_pane_g4

0xd968,	// (0x0002b99b) cell_imed_line_width_pane_ParamLimits

0xd968,	// (0x0002b99b) cell_imed_line_width_pane

0xd97c,	// (0x0002b9af) cell_imed_line_width_pane_g1

0xd937,	// (0x0002b96a) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0002db0b) cell_imed_line_width_pane_g

0x7774,	// (0x000257a7) main_vded2_pane_g1_ParamLimits

0x7774,	// (0x000257a7) main_vded2_pane_g1

0x7781,	// (0x000257b4) main_vded2_pane_g2_ParamLimits

0x7781,	// (0x000257b4) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0002db10) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0002db10) main_vded2_pane_g

0x778f,	// (0x000257c2) vded2_slider_pane_ParamLimits

0x778f,	// (0x000257c2) vded2_slider_pane

0x779c,	// (0x000257cf) aid_size_touch_vded2_end

0x77a6,	// (0x000257d9) aid_size_touch_vded2_playhead

0xd985,	// (0x0002b9b8) aid_size_touch_vded2_start

0xd98d,	// (0x0002b9c0) vded2_slider_bg_pane

0xd996,	// (0x0002b9c9) vded2_slider_pane_g1

0xd99f,	// (0x0002b9d2) vded2_slider_pane_g2

0x77ae,	// (0x000257e1) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0002db15) vded2_slider_pane_g

0xd9a7,	// (0x0002b9da) vded2_slider_bg_pane_g1

0xd9b0,	// (0x0002b9e3) vded2_slider_bg_pane_g2

0xd9c3,	// (0x0002b9f6) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0002db1c) vded2_slider_bg_pane_g

0x4e7b,	// (0x00022eae) aid_postcard_touch_down_pane_ParamLimits

0x4e7b,	// (0x00022eae) aid_postcard_touch_down_pane

0x4e8b,	// (0x00022ebe) aid_postcard_touch_up_pane_ParamLimits

0x4e8b,	// (0x00022ebe) aid_postcard_touch_up_pane

0x10bc,	// (0x0001f0ef) main_blid2_pane

0x15af,	// (0x0001f5e2) popup_blid2_search_window

0x9c48,	// (0x00027c7b) blid2_gps_pane

0x9c48,	// (0x00027c7b) blid2_navig_pane

0x9c48,	// (0x00027c7b) blid2_search_pane

0x9c48,	// (0x00027c7b) blid2_tripm_pane

0x77b7,	// (0x000257ea) blid2_search_pane_g1_ParamLimits

0x77b7,	// (0x000257ea) blid2_search_pane_g1

0x77c7,	// (0x000257fa) blid2_search_pane_t1_ParamLimits

0x77c7,	// (0x000257fa) blid2_search_pane_t1

0x77d9,	// (0x0002580c) aid_size_cell_blid2_gps_ParamLimits

0x77d9,	// (0x0002580c) aid_size_cell_blid2_gps

0x77e9,	// (0x0002581c) blid2_gps_pane_g1_ParamLimits

0x77e9,	// (0x0002581c) blid2_gps_pane_g1

0x77f5,	// (0x00025828) grid_blid2_satellite_pane_ParamLimits

0x77f5,	// (0x00025828) grid_blid2_satellite_pane

0x7805,	// (0x00025838) blid2_navig_pane_g1_ParamLimits

0x7805,	// (0x00025838) blid2_navig_pane_g1

0x7811,	// (0x00025844) blid2_navig_pane_t1_ParamLimits

0x7811,	// (0x00025844) blid2_navig_pane_t1

0x7823,	// (0x00025856) blid2_navig_pane_t2_ParamLimits

0x7823,	// (0x00025856) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0002db23) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0002db23) blid2_navig_pane_t

0x7835,	// (0x00025868) blid2_navig_ring_pane_ParamLimits

0x7835,	// (0x00025868) blid2_navig_ring_pane

0x7845,	// (0x00025878) blid2_speed_pane_ParamLimits

0x7845,	// (0x00025878) blid2_speed_pane

0x7851,	// (0x00025884) blid2_tripm_pane_g1_ParamLimits

0x7851,	// (0x00025884) blid2_tripm_pane_g1

0x7861,	// (0x00025894) blid2_tripm_pane_g2_ParamLimits

0x7861,	// (0x00025894) blid2_tripm_pane_g2

0x786d,	// (0x000258a0) blid2_tripm_pane_g3_ParamLimits

0x786d,	// (0x000258a0) blid2_tripm_pane_g3

0x7879,	// (0x000258ac) blid2_tripm_pane_g4_ParamLimits

0x7879,	// (0x000258ac) blid2_tripm_pane_g4

0x7885,	// (0x000258b8) blid2_tripm_pane_g5_ParamLimits

0x7885,	// (0x000258b8) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0002db28) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0002db28) blid2_tripm_pane_g

0x78a1,	// (0x000258d4) blid2_tripm_pane_t1_ParamLimits

0x78a1,	// (0x000258d4) blid2_tripm_pane_t1

0x78b5,	// (0x000258e8) blid2_tripm_pane_t2_ParamLimits

0x78b5,	// (0x000258e8) blid2_tripm_pane_t2

0x78c7,	// (0x000258fa) blid2_tripm_pane_t3_ParamLimits

0x78c7,	// (0x000258fa) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0002db35) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0002db35) blid2_tripm_pane_t

0x78f9,	// (0x0002592c) cell_blid2_satellite_pane_ParamLimits

0x78f9,	// (0x0002592c) cell_blid2_satellite_pane

0x7913,	// (0x00025946) cell_blid2_satellite_pane_g1

0xd9cc,	// (0x0002b9ff) cell_blid2_satellite_pane_t1

0xc84f,	// (0x0002a882) blid2_speed_pane_g1

0xd9da,	// (0x0002ba0d) blid2_speed_pane_t1

0xd9e8,	// (0x0002ba1b) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0002db3e) blid2_speed_pane_t

0xc84f,	// (0x0002a882) blid2_navig_ring_pane_g1

0x791c,	// (0x0002594f) blid2_navig_ring_pane_g2

0x7924,	// (0x00025957) blid2_navig_ring_pane_g3

0x792c,	// (0x0002595f) blid2_navig_ring_pane_g4

0x7934,	// (0x00025967) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0002db43) blid2_navig_ring_pane_g

0x9c48,	// (0x00027c7b) bg_popup_window_pane_cp011

0xd9f6,	// (0x0002ba29) popup_blid2_search_window_g1

0xd9fe,	// (0x0002ba31) popup_blid2_search_window_t1

0xda0c,	// (0x0002ba3f) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0002db4e) popup_blid2_search_window_t

0xa699,	// (0x000286cc) main_browser_pane_g1

0xa385,	// (0x000283b8) main_browser_pane_ParamLimits

0x1586,	// (0x0001f5b9) bg_button_pane_cp011_ParamLimits

0x2427,	// (0x0002045a) cell_vitu2_function_pane_g1_ParamLimits

0xc43e,	// (0x0002a471) bg_popup_sub_pane_cp22_ParamLimits

0x72c3,	// (0x000252f6) input_focus_pane_cp08_ParamLimits

0x72da,	// (0x0002530d) popup_vitu2_query_button_pane_ParamLimits

0x72da,	// (0x0002530d) popup_vitu2_query_button_pane

0x72eb,	// (0x0002531e) popup_vitu2_query_input_button_pane

0xd5b0,	// (0x0002b5e3) popup_vitu2_query_window_g1_ParamLimits

0x72f5,	// (0x00025328) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0002da4f) popup_vitu2_query_window_g_ParamLimits

0x9c48,	// (0x00027c7b) bg_button_pane_cp026

0x793c,	// (0x0002596f) popup_vitu2_query_input_button_pane_g1

0x9c48,	// (0x00027c7b) bg_button_pane_cp025

0xda1a,	// (0x0002ba4d) popup_vitu2_query_button_pane_t1

0x5b99,	// (0x00023bcc) main_mp3_pane_t6

0x5ba9,	// (0x00023bdc) popup_slider_window_cp01

0x1fed,	// (0x00020020) cam4_battery_pane

0x20cd,	// (0x00020100) cam4_battery_pane_cp02

0x25c1,	// (0x000205f4) cam4_battery_pane_cp01

0x25c1,	// (0x000205f4) cam4_battery_pane_cp03

0xd9b9,	// (0x0002b9ec) cam4_battery_pane_g1

0xc84f,	// (0x0002a882) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0002db53) cam4_battery_pane_g

0xc712,	// (0x0002a745) popup_blid_sat_info2_window_t11

0xadf4,	// (0x00028e27) aid_size_touch_mv_arrow_left_ParamLimits

0xae1d,	// (0x00028e50) aid_size_touch_mv_arrow_right_ParamLimits

0xae7b,	// (0x00028eae) navi_pane_g1_ParamLimits

0xae87,	// (0x00028eba) navi_pane_g2_ParamLimits

0xaeb5,	// (0x00028ee8) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0002d418) navi_pane_g_ParamLimits

0x4911,	// (0x00022944) navi_pane_mv_t1_ParamLimits

0x6635,	// (0x00024668) grid_imed_effect_pane_ParamLimits

0x3383,	// (0x000213b6) aid_placing_vt_slider_lsc

0xa5e8,	// (0x0002861b) aid_placing_vt_slider_prt

0xa391,	// (0x000283c4) bg_tb_trans_pane_cp01_ParamLimits

0xc9d2,	// (0x0002aa05) popup_image_details_window_g1_ParamLimits

0xc9e5,	// (0x0002aa18) popup_image_details_window_g2_ParamLimits

0xc9fa,	// (0x0002aa2d) popup_image_details_window_g3_ParamLimits

0xc9fa,	// (0x0002aa2d) popup_image_details_window_g3

0xf718,	// (0x0002d74b) popup_image_details_window_g_ParamLimits

0xca0e,	// (0x0002aa41) popup_image_details_window_t1_ParamLimits

0xca20,	// (0x0002aa53) popup_image_details_window_t2_ParamLimits

0xca39,	// (0x0002aa6c) popup_image_details_window_t3_ParamLimits

0xca4d,	// (0x0002aa80) popup_image_details_window_t4_ParamLimits

0xca68,	// (0x0002aa9b) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0002d752) popup_image_details_window_t_ParamLimits

0x764a,	// (0x0002567d) cl_header_name_pane_ParamLimits

0x764a,	// (0x0002567d) cl_header_name_pane

0x7944,	// (0x00025977) cl_header_name_pane_t1_ParamLimits

0x7944,	// (0x00025977) cl_header_name_pane_t1

0x795b,	// (0x0002598e) cl_header_name_pane_t2_ParamLimits

0x795b,	// (0x0002598e) cl_header_name_pane_t2

0x7985,	// (0x000259b8) cl_header_name_pane_t3_ParamLimits

0x7985,	// (0x000259b8) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0002db58) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0002db58) cl_header_name_pane_t

0xaf44,	// (0x00028f77) navi_pane_mv_g2_ParamLimits

0xd2b2,	// (0x0002b2e5) field_vitu2_entry_pane_g1_ParamLimits

0xd2be,	// (0x0002b2f1) field_vitu2_entry_pane_g2_ParamLimits

0xd2ca,	// (0x0002b2fd) field_vitu2_entry_pane_g3_ParamLimits

0xd2ca,	// (0x0002b2fd) field_vitu2_entry_pane_g3

0xf91b,	// (0x0002d94e) field_vitu2_entry_pane_g_ParamLimits

0x22f7,	// (0x0002032a) cell_vitu2_itu_pane_g1_ParamLimits

0x2307,	// (0x0002033a) cell_vitu2_itu_pane_g2_ParamLimits

0x2307,	// (0x0002033a) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0002d95a) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0002d95a) cell_vitu2_itu_pane_g

0x1586,	// (0x0001f5b9) bg_vkb2_func_pane_cp05_ParamLimits

0x1586,	// (0x0001f5b9) bg_vkb2_func_pane_cp05

0x1586,	// (0x0001f5b9) bg_vkb2_func_pane_cp03

0x1586,	// (0x0001f5b9) bg_vkb2_func_pane_cp04

0x1586,	// (0x0001f5b9) bg_vkb2_func_pane_cp10_ParamLimits

0x1586,	// (0x0001f5b9) bg_vkb2_func_pane_cp10

0x75ec,	// (0x0002561f) bg_vkb2_func_pane_cp08

0x75d2,	// (0x00025605) bg_vkb2_func_pane_cp06

0x75e0,	// (0x00025613) bg_vkb2_func_pane_cp07

0xd90d,	// (0x0002b940) bg_vkb2_func_pane_cp11_ParamLimits

0xd90d,	// (0x0002b940) bg_vkb2_func_pane_cp11

0xd922,	// (0x0002b955) bg_vkb2_func_pane_cp12_ParamLimits

0xd922,	// (0x0002b955) bg_vkb2_func_pane_cp12

0x9c48,	// (0x00027c7b) bg_vkb2_func_pane_cp09

0xd307,	// (0x0002b33a) bg_vkb2_func_pane_g1

0xa7aa,	// (0x000287dd) bg_vkb2_func_pane_g2

0xd30f,	// (0x0002b342) bg_vkb2_func_pane_g3

0xd317,	// (0x0002b34a) bg_vkb2_func_pane_g4

0xd575,	// (0x0002b5a8) bg_vkb2_func_pane_g5

0xd32f,	// (0x0002b362) bg_vkb2_func_pane_g6

0xd337,	// (0x0002b36a) bg_vkb2_func_pane_g7

0xd327,	// (0x0002b35a) bg_vkb2_func_pane_g8

0xa78a,	// (0x000287bd) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0002db5f) bg_vkb2_func_pane_g

0x7893,	// (0x000258c6) blid2_tripm_pane_g6_ParamLimits

0x7893,	// (0x000258c6) blid2_tripm_pane_g6

0xd146,	// (0x0002b179) mp4_progress_pane_g1

0x78ed,	// (0x00025920) blid2_tripm_values_pane_ParamLimits

0x78ed,	// (0x00025920) blid2_tripm_values_pane

0x79aa,	// (0x000259dd) blid2_tripm_values_pane_t1

0x79b8,	// (0x000259eb) blid2_tripm_values_pane_t2

0x79c6,	// (0x000259f9) blid2_tripm_values_pane_t3

0x79d4,	// (0x00025a07) blid2_tripm_values_pane_t4

0x79e2,	// (0x00025a15) blid2_tripm_values_pane_t5

0x79f0,	// (0x00025a23) blid2_tripm_values_pane_t6

0x79fe,	// (0x00025a31) blid2_tripm_values_pane_t7

0x7a0c,	// (0x00025a3f) blid2_tripm_values_pane_t8

0x7a1a,	// (0x00025a4d) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0002db72) blid2_tripm_values_pane_t

0x33c3,	// (0x000213f6) call_video_pane_t1_ParamLimits

0x33e4,	// (0x00021417) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0002d2a1) call_video_pane_t_ParamLimits

0x4e2b,	// (0x00022e5e) msg_header_pane_g1_ParamLimits

0xb148,	// (0x0002917b) msg_header_pane_g2_ParamLimits

0xb148,	// (0x0002917b) msg_header_pane_g2

0x0001,

0xf488,	// (0x0002d4bb) msg_header_pane_g_ParamLimits

0xf488,	// (0x0002d4bb) msg_header_pane_g

0xa385,	// (0x000283b8) main_clock2_pane_ParamLimits

0x6446,	// (0x00024479) grid_clock2_toolbar_pane_ParamLimits

0x6446,	// (0x00024479) grid_clock2_toolbar_pane

0x6446,	// (0x00024479) listscroll_clock2_pane_ParamLimits

0x6446,	// (0x00024479) listscroll_clock2_pane

0x64ea,	// (0x0002451d) main_clock2_pane_t3_ParamLimits

0x64ea,	// (0x0002451d) main_clock2_pane_t3

0x64fc,	// (0x0002452f) main_clock2_pane_t4_ParamLimits

0x64fc,	// (0x0002452f) main_clock2_pane_t4

0xda28,	// (0x0002ba5b) cell_clock2_toolbar_pane

0xda30,	// (0x0002ba63) cell_clock2_toolbar_pane_cp01

0xda30,	// (0x0002ba63) cell_clock2_toolbar_pane_cp02

0xda38,	// (0x0002ba6b) cell_clock2_toolbar_pane_cp03

0xda40,	// (0x0002ba73) list_clock2_pane

0xad6a,	// (0x00028d9d) scroll_pane_cp10

0xda48,	// (0x0002ba7b) list_single_clock2_pane_ParamLimits

0xda48,	// (0x0002ba7b) list_single_clock2_pane

0xafab,	// (0x00028fde) list_highlight_pane_cp08

0xda55,	// (0x0002ba88) list_single_clock2_pane_t1

0xda63,	// (0x0002ba96) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0002db85) list_single_clock2_pane_t

0x9c48,	// (0x00027c7b) bg_button_pane_cp10

0xda71,	// (0x0002baa4) cell_clock2_toolbar_pane_g1

0x1521,	// (0x0001f554) aid_main_viewer_pane_g1_ParamLimits

0x1521,	// (0x0001f554) aid_main_viewer_pane_g1

0x152d,	// (0x0001f560) aid_main_viewer_pane_g2_ParamLimits

0x152d,	// (0x0001f560) aid_main_viewer_pane_g2

0x4e37,	// (0x00022e6a) aid_main_viewer_pane_g3_ParamLimits

0x4e37,	// (0x00022e6a) aid_main_viewer_pane_g3

0x4e48,	// (0x00022e7b) aid_main_viewer_pane_g4_ParamLimits

0x4e48,	// (0x00022e7b) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0002d4cc) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0002d4cc) aid_main_viewer_pane_g

0x1579,	// (0x0001f5ac) main_calc_pane_ParamLimits

0x1594,	// (0x0001f5c7) main_dialer2_pane_ParamLimits

0x10bc,	// (0x0001f0ef) main_cam6_pane

0x10bc,	// (0x0001f0ef) main_vid6_pane

0x6452,	// (0x00024485) listscroll_gen_pane_cp06_ParamLimits

0x6452,	// (0x00024485) listscroll_gen_pane_cp06

0x650e,	// (0x00024541) main_clock2_pane_t5_ParamLimits

0x650e,	// (0x00024541) main_clock2_pane_t5

0x6557,	// (0x0002458a) aid_call2_pane_cp10_ParamLimits

0x6569,	// (0x0002459c) aid_call_pane_cp10_ParamLimits

0xade8,	// (0x00028e1b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xade8,	// (0x00028e1b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x657b,	// (0x000245ae) popup_clock_analogue_window_cp10_g3_ParamLimits

0x657b,	// (0x000245ae) popup_clock_analogue_window_cp10_g4_ParamLimits

0xade8,	// (0x00028e1b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0002d807) popup_clock_analogue_window_cp10_g_ParamLimits

0x658d,	// (0x000245c0) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6999,	// (0x000249cc) cell_dialer2_keypad_pane_g2_ParamLimits

0x6999,	// (0x000249cc) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0002d8ed) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0002d8ed) cell_dialer2_keypad_pane_g

0x69b5,	// (0x000249e8) cell_dialer2_keypad_pane_t1

0x6def,	// (0x00024e22) main_cset_text2_pane_ParamLimits

0x6def,	// (0x00024e22) main_cset_text2_pane

0xd7b7,	// (0x0002b7ea) area_vitu2_query_pane_g1_ParamLimits

0x7571,	// (0x000255a4) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0002daa2) area_vitu2_query_pane_g_ParamLimits

0xd83b,	// (0x0002b86e) area_vitu2_query_pane_t7_ParamLimits

0xd83b,	// (0x0002b86e) area_vitu2_query_pane_t7

0x75d2,	// (0x00025605) bg_button_pane_cp018_ParamLimits

0x75e0,	// (0x00025613) bg_button_pane_cp021_ParamLimits

0x75ec,	// (0x0002561f) bg_button_pane_cp022_ParamLimits

0x75ec,	// (0x0002561f) bg_vkb2_func_pane_cp08_ParamLimits

0x75d2,	// (0x00025605) bg_vkb2_func_pane_cp06_ParamLimits

0x75e0,	// (0x00025613) bg_vkb2_func_pane_cp07_ParamLimits

0x75fd,	// (0x00025630) input_focus_pane_cp09_ParamLimits

0x2666,	// (0x00020699) cam6_autofocus_pane_ParamLimits

0x2666,	// (0x00020699) cam6_autofocus_pane

0x2688,	// (0x000206bb) cam6_image_uncrop_pane_ParamLimits

0x2688,	// (0x000206bb) cam6_image_uncrop_pane

0x26b5,	// (0x000206e8) cam6_indi_pane_ParamLimits

0x26b5,	// (0x000206e8) cam6_indi_pane

0x26cf,	// (0x00020702) cam6_mode_pane_ParamLimits

0x26cf,	// (0x00020702) cam6_mode_pane

0x26e3,	// (0x00020716) cam6_timer_pane_ParamLimits

0x26e3,	// (0x00020716) cam6_timer_pane

0x26ef,	// (0x00020722) cam6_zoom_pane_ParamLimits

0x26ef,	// (0x00020722) cam6_zoom_pane

0x7a28,	// (0x00025a5b) cam6_mode_pane_g1_ParamLimits

0x7a28,	// (0x00025a5b) cam6_mode_pane_g1

0x7a34,	// (0x00025a67) cam6_mode_pane_g2_ParamLimits

0x7a34,	// (0x00025a67) cam6_mode_pane_g2

0x7a40,	// (0x00025a73) cam6_mode_pane_g3_ParamLimits

0x7a40,	// (0x00025a73) cam6_mode_pane_g3

0x7a4c,	// (0x00025a7f) cam6_mode_pane_g4_ParamLimits

0x7a4c,	// (0x00025a7f) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0002db8a) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0002db8a) cam6_mode_pane_g

0xd28d,	// (0x0002b2c0) bg_tb_trans_pane_cp08_ParamLimits

0xd28d,	// (0x0002b2c0) bg_tb_trans_pane_cp08

0xda79,	// (0x0002baac) cam6_battery_pane_ParamLimits

0xda79,	// (0x0002baac) cam6_battery_pane

0xda8f,	// (0x0002bac2) cam6_indi_pane_g1_ParamLimits

0xda8f,	// (0x0002bac2) cam6_indi_pane_g1

0xdaa1,	// (0x0002bad4) cam6_indi_pane_g2_ParamLimits

0xdaa1,	// (0x0002bad4) cam6_indi_pane_g2

0xdab3,	// (0x0002bae6) cam6_indi_pane_g3_ParamLimits

0xdab3,	// (0x0002bae6) cam6_indi_pane_g3

0x0002,

0x0a28,	// (0x0001ea5b) cam6_indi_pane_g_ParamLimits

0x0a28,	// (0x0001ea5b) cam6_indi_pane_g

0xdac5,	// (0x0002baf8) cam6_indi_pane_t1_ParamLimits

0xdac5,	// (0x0002baf8) cam6_indi_pane_t1

0x6af4,	// (0x00024b27) cam6_autofocus_pane_g1

0x6aec,	// (0x00024b1f) cam6_autofocus_pane_g2

0x6b04,	// (0x00024b37) cam6_autofocus_pane_g3

0x6afc,	// (0x00024b2f) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0002db93) cam6_autofocus_pane_g

0xdaeb,	// (0x0002bb1e) cam6_timer_pane_g1

0xdaf3,	// (0x0002bb26) cam6_timer_pane_t1

0xdb01,	// (0x0002bb34) cam6_zoom_cont_pane

0xdb09,	// (0x0002bb3c) cam6_zoom_pane_g1

0xdb11,	// (0x0002bb44) cam6_zoom_pane_g2

0x7a58,	// (0x00025a8b) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0002db9c) cam6_zoom_pane_g

0xc84f,	// (0x0002a882) cam6_battery_pane_g1

0xc84f,	// (0x0002a882) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0002d70f) cam6_battery_pane_g

0xdb19,	// (0x0002bb4c) cam6_zoom_cont_pane_g1

0xdb22,	// (0x0002bb55) cam6_zoom_cont_pane_g2

0xdb2b,	// (0x0002bb5e) cam6_zoom_cont_pane_g3

0x0002,

0x0a3f,	// (0x0001ea72) cam6_zoom_cont_pane_g

0x7a75,	// (0x00025aa8) cam6_mode_pane_cp_ParamLimits

0x7a75,	// (0x00025aa8) cam6_mode_pane_cp

0x7a89,	// (0x00025abc) cam6_zoom_pane_cp_ParamLimits

0x7a89,	// (0x00025abc) cam6_zoom_pane_cp

0x7aa1,	// (0x00025ad4) vid6_image_uncrop_cif_pane_ParamLimits

0x7aa1,	// (0x00025ad4) vid6_image_uncrop_cif_pane

0x7acd,	// (0x00025b00) vid6_image_uncrop_nhd_pane_ParamLimits

0x7acd,	// (0x00025b00) vid6_image_uncrop_nhd_pane

0x7aea,	// (0x00025b1d) vid6_image_uncrop_vga_pane_ParamLimits

0x7aea,	// (0x00025b1d) vid6_image_uncrop_vga_pane

0x7b09,	// (0x00025b3c) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b09,	// (0x00025b3c) vid6_image_uncrop_wvga_pane

0x7b26,	// (0x00025b59) vid6_indi_pane_ParamLimits

0x7b26,	// (0x00025b59) vid6_indi_pane

0xd28d,	// (0x0002b2c0) bg_tb_trans_pane_cp09_ParamLimits

0xd28d,	// (0x0002b2c0) bg_tb_trans_pane_cp09

0xdb43,	// (0x0002bb76) cam6_battery_pane_cp_ParamLimits

0xdb43,	// (0x0002bb76) cam6_battery_pane_cp

0xdb4f,	// (0x0002bb82) vid6_indi_pane_g1_ParamLimits

0xdb4f,	// (0x0002bb82) vid6_indi_pane_g1

0xdb61,	// (0x0002bb94) vid6_indi_pane_g2_ParamLimits

0xdb61,	// (0x0002bb94) vid6_indi_pane_g2

0xdb73,	// (0x0002bba6) vid6_indi_pane_g3_ParamLimits

0xdb73,	// (0x0002bba6) vid6_indi_pane_g3

0xdb88,	// (0x0002bbbb) vid6_indi_pane_g4_ParamLimits

0xdb88,	// (0x0002bbbb) vid6_indi_pane_g4

0xdb9d,	// (0x0002bbd0) vid6_indi_pane_g5_ParamLimits

0xdb9d,	// (0x0002bbd0) vid6_indi_pane_g5

0x0004,

0x0a46,	// (0x0001ea79) vid6_indi_pane_g_ParamLimits

0x0a46,	// (0x0001ea79) vid6_indi_pane_g

0xdbb7,	// (0x0002bbea) vid6_indi_pane_t1_ParamLimits

0xdbb7,	// (0x0002bbea) vid6_indi_pane_t1

0xdbcd,	// (0x0002bc00) vid6_indi_pane_t2_ParamLimits

0xdbcd,	// (0x0002bc00) vid6_indi_pane_t2

0xdbf5,	// (0x0002bc28) vid6_indi_pane_t3_ParamLimits

0xdbf5,	// (0x0002bc28) vid6_indi_pane_t3

0xdc1d,	// (0x0002bc50) vid6_indi_pane_t4_ParamLimits

0xdc1d,	// (0x0002bc50) vid6_indi_pane_t4

0x0003,

0x0a51,	// (0x0001ea84) vid6_indi_pane_t_ParamLimits

0x0a51,	// (0x0001ea84) vid6_indi_pane_t

0xdc41,	// (0x0002bc74) wait_bar_pane_cp08

0x7b4b,	// (0x00025b7e) main_cset_text2_pane_t1_ParamLimits

0x7b4b,	// (0x00025b7e) main_cset_text2_pane_t1

0x7a60,	// (0x00025a93) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a60,	// (0x00025a93) listscroll_gen_pane_cp06_t1

0x10bc,	// (0x0001f0ef) main_cam6_set_pane

0x1fdf,	// (0x00020012) bg_tb_trans_pane_cp06_ParamLimits

0x1ff5,	// (0x00020028) cam4_indicators_pane_g1_ParamLimits

0x2006,	// (0x00020039) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0002d92a) cam4_indicators_pane_g_ParamLimits

0x2024,	// (0x00020057) cam4_indicators_pane_t1_ParamLimits

0x1586,	// (0x0001f5b9) bg_tb_trans_pane_cp07_ParamLimits

0x20d7,	// (0x0002010a) vid4_indicators_pane_g1_ParamLimits

0x20eb,	// (0x0002011e) vid4_indicators_pane_g2_ParamLimits

0x20ff,	// (0x00020132) vid4_indicators_pane_g3_ParamLimits

0x2110,	// (0x00020143) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0002d93c) vid4_indicators_pane_g_ParamLimits

0x212e,	// (0x00020161) vid4_indicators_pane_t1_ParamLimits

0x25c9,	// (0x000205fc) vid4_progress_pane_g1_ParamLimits

0x25d9,	// (0x0002060c) vid4_progress_pane_g2_ParamLimits

0x25e9,	// (0x0002061c) vid4_progress_pane_g3_ParamLimits

0x25fb,	// (0x0002062e) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0002daed) vid4_progress_pane_g_ParamLimits

0x2613,	// (0x00020646) vid4_progress_pane_t1_ParamLimits

0x2629,	// (0x0002065c) vid4_progress_pane_t2_ParamLimits

0x263e,	// (0x00020671) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0002daf8) vid4_progress_pane_t_ParamLimits

0x2653,	// (0x00020686) wait_bar_pane_cp07_ParamLimits

0x7b7e,	// (0x00025bb1) main_cam6_set_pane_g2_ParamLimits

0x7b7e,	// (0x00025bb1) main_cam6_set_pane_g2

0x7b8a,	// (0x00025bbd) main_cset6_listscroll_pane_ParamLimits

0x7b8a,	// (0x00025bbd) main_cset6_listscroll_pane

0x7bb5,	// (0x00025be8) main_cset6_slider_pane_ParamLimits

0x7bb5,	// (0x00025be8) main_cset6_slider_pane

0x7bc1,	// (0x00025bf4) main_cset6_text2_pane_ParamLimits

0x7bc1,	// (0x00025bf4) main_cset6_text2_pane

0xdc50,	// (0x0002bc83) main_cset6_text_pane

0xdc58,	// (0x0002bc8b) main_cset_list_pane_copy1_ParamLimits

0xdc58,	// (0x0002bc8b) main_cset_list_pane_copy1

0xdc68,	// (0x0002bc9b) scroll_pane_cp028_copy1

0x7bd4,	// (0x00025c07) cset_list_set_pane_copy1

0x7be7,	// (0x00025c1a) aid_position_infowindow_above_copy1

0x7bef,	// (0x00025c22) aid_position_infowindow_below_copy1

0x7bf7,	// (0x00025c2a) cset_list_set_pane_g1_copy1

0xd514,	// (0x0002b547) cset_list_set_pane_g3_copy1_ParamLimits

0xd514,	// (0x0002b547) cset_list_set_pane_g3_copy1

0xd52f,	// (0x0002b562) cset_list_set_pane_t1_copy1_ParamLimits

0xd52f,	// (0x0002b562) cset_list_set_pane_t1_copy1

0xa391,	// (0x000283c4) list_highlight_pane_cp021_copy1_ParamLimits

0xa391,	// (0x000283c4) list_highlight_pane_cp021_copy1

0xdc71,	// (0x0002bca4) cset6_slider_pane_ParamLimits

0xdc71,	// (0x0002bca4) cset6_slider_pane

0xdc9d,	// (0x0002bcd0) main_cset6_slider_pane_g1_ParamLimits

0xdc9d,	// (0x0002bcd0) main_cset6_slider_pane_g1

0x7bff,	// (0x00025c32) main_cset6_slider_pane_g2_ParamLimits

0x7bff,	// (0x00025c32) main_cset6_slider_pane_g2

0xdcc5,	// (0x0002bcf8) main_cset6_slider_pane_g3_ParamLimits

0xdcc5,	// (0x0002bcf8) main_cset6_slider_pane_g3

0x7c27,	// (0x00025c5a) main_cset6_slider_pane_g4_ParamLimits

0x7c27,	// (0x00025c5a) main_cset6_slider_pane_g4

0x7c33,	// (0x00025c66) main_cset6_slider_pane_g5_ParamLimits

0x7c33,	// (0x00025c66) main_cset6_slider_pane_g5

0xd444,	// (0x0002b477) main_cset6_slider_pane_g7_ParamLimits

0xd444,	// (0x0002b477) main_cset6_slider_pane_g7

0xd450,	// (0x0002b483) main_cset6_slider_pane_g8_ParamLimits

0xd450,	// (0x0002b483) main_cset6_slider_pane_g8

0x7c41,	// (0x00025c74) main_cset6_slider_pane_g9_ParamLimits

0x7c41,	// (0x00025c74) main_cset6_slider_pane_g9

0x7c4d,	// (0x00025c80) main_cset6_slider_pane_g10_ParamLimits

0x7c4d,	// (0x00025c80) main_cset6_slider_pane_g10

0x7c59,	// (0x00025c8c) main_cset6_slider_pane_g11_ParamLimits

0x7c59,	// (0x00025c8c) main_cset6_slider_pane_g11

0x7c65,	// (0x00025c98) main_cset6_slider_pane_g12_ParamLimits

0x7c65,	// (0x00025c98) main_cset6_slider_pane_g12

0x7c71,	// (0x00025ca4) main_cset6_slider_pane_g13_ParamLimits

0x7c71,	// (0x00025ca4) main_cset6_slider_pane_g13

0x7c7d,	// (0x00025cb0) main_cset6_slider_pane_g14_ParamLimits

0x7c7d,	// (0x00025cb0) main_cset6_slider_pane_g14

0x7c89,	// (0x00025cbc) main_cset6_slider_pane_g15_ParamLimits

0x7c89,	// (0x00025cbc) main_cset6_slider_pane_g15

0x7ca1,	// (0x00025cd4) main_cset6_slider_pane_g16_ParamLimits

0x7ca1,	// (0x00025cd4) main_cset6_slider_pane_g16

0x7caf,	// (0x00025ce2) main_cset6_slider_pane_g17_ParamLimits

0x7caf,	// (0x00025ce2) main_cset6_slider_pane_g17

0x0011,

0xfb70,	// (0x0002dba3) main_cset6_slider_pane_g_ParamLimits

0xfb70,	// (0x0002dba3) main_cset6_slider_pane_g

0xdcd1,	// (0x0002bd04) main_cset6_slider_pane_t1_ParamLimits

0xdcd1,	// (0x0002bd04) main_cset6_slider_pane_t1

0x7cd5,	// (0x00025d08) main_cset6_slider_pane_t2_ParamLimits

0x7cd5,	// (0x00025d08) main_cset6_slider_pane_t2

0x7d00,	// (0x00025d33) main_cset6_slider_pane_t3_ParamLimits

0x7d00,	// (0x00025d33) main_cset6_slider_pane_t3

0x7d2b,	// (0x00025d5e) main_cset6_slider_pane_t4_ParamLimits

0x7d2b,	// (0x00025d5e) main_cset6_slider_pane_t4

0x7d56,	// (0x00025d89) main_cset6_slider_pane_t5_ParamLimits

0x7d56,	// (0x00025d89) main_cset6_slider_pane_t5

0xdd12,	// (0x0002bd45) main_cset6_slider_pane_t7_ParamLimits

0xdd12,	// (0x0002bd45) main_cset6_slider_pane_t7

0x7d83,	// (0x00025db6) main_cset6_slider_pane_t8_ParamLimits

0x7d83,	// (0x00025db6) main_cset6_slider_pane_t8

0x7da7,	// (0x00025dda) main_cset6_slider_pane_t9_ParamLimits

0x7da7,	// (0x00025dda) main_cset6_slider_pane_t9

0x7dcb,	// (0x00025dfe) main_cset6_slider_pane_t10_ParamLimits

0x7dcb,	// (0x00025dfe) main_cset6_slider_pane_t10

0x7def,	// (0x00025e22) main_cset6_slider_pane_t11_ParamLimits

0x7def,	// (0x00025e22) main_cset6_slider_pane_t11

0xdd48,	// (0x0002bd7b) main_cset6_slider_pane_t14_ParamLimits

0xdd48,	// (0x0002bd7b) main_cset6_slider_pane_t14

0xdd81,	// (0x0002bdb4) main_cset6_slider_pane_t15_ParamLimits

0xdd81,	// (0x0002bdb4) main_cset6_slider_pane_t15

0x000b,

0xfb95,	// (0x0002dbc8) main_cset6_slider_pane_t_ParamLimits

0xfb95,	// (0x0002dbc8) main_cset6_slider_pane_t

0xd60a,	// (0x0002b63d) cset_slider_pane_g1_copy1

0xd613,	// (0x0002b646) cset_slider_pane_g2_copy1

0xd61c,	// (0x0002b64f) cset_slider_pane_g3_copy1

0x9c48,	// (0x00027c7b) bg_popup_sub_pane_cp011_copy1

0xddba,	// (0x0002bded) main_cset_text_pane_g1_copy1

0xd5c4,	// (0x0002b5f7) main_cset_text_pane_t1_copy1

0xd5d2,	// (0x0002b605) main_cset_text_pane_t2_copy1

0xd5e0,	// (0x0002b613) main_cset_text_pane_t3_copy1

0xd5ee,	// (0x0002b621) main_cset_text_pane_t4_copy1

0xd5fc,	// (0x0002b62f) main_cset_text_pane_t5_copy1

0xddc2,	// (0x0002bdf5) main_cset_text_pane_t6_copy1

0xd633,	// (0x0002b666) main_cset_text_pane_t7_copy1

0x7ee4,	// (0x00025f17) main_cset_text2_pane_t1_copy1

0x1586,	// (0x0001f5b9) main_ncimui_pane

0x15e5,	// (0x0001f618) popup_query_ncimui_window_ParamLimits

0x15e5,	// (0x0001f618) popup_query_ncimui_window

0xcb17,	// (0x0002ab4a) field_cale_ev2_pane_g4_ParamLimits

0xcb17,	// (0x0002ab4a) field_cale_ev2_pane_g4

0x6939,	// (0x0002496c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6939,	// (0x0002496c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0002d8c8) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0002d8c8) cell_video_dialer_keypad_pane_g

0x6951,	// (0x00024984) cell_video_dialer_keypad_pane_t1

0x9c48,	// (0x00027c7b) bg_popup_window_pane_cp012

0xac37,	// (0x00028c6a) heading_pane_cp06

0xddee,	// (0x0002be21) ncim_query_content_pane

0x9c48,	// (0x00027c7b) bg_popup_heading_pane_cp01

0xddf6,	// (0x0002be29) ncim_heading_pane_t1

0xde04,	// (0x0002be37) ncim_indicator_popup_pane

0xde16,	// (0x0002be49) ncim_query_button_pane

0xde2a,	// (0x0002be5d) ncim_query_content_pane_t1

0xde3c,	// (0x0002be6f) ncim_query_content_pane_t2

0x0005,

0xfbd9,	// (0x0002dc0c) ncim_query_content_pane_t

0xde76,	// (0x0002bea9) ncim_query_list_pane

0xde88,	// (0x0002bebb) ncim_query_popup_pane

0xde04,	// (0x0002be37) ncim_indicator_popup_pane_ParamLimits

0x8037,	// (0x0002606a) ncim_query_content_pane_g1_ParamLimits

0x8037,	// (0x0002606a) ncim_query_content_pane_g1

0xde2a,	// (0x0002be5d) ncim_query_content_pane_t1_ParamLimits

0xde3c,	// (0x0002be6f) ncim_query_content_pane_t2_ParamLimits

0x8043,	// (0x00026076) ncim_query_content_pane_t3_ParamLimits

0x8043,	// (0x00026076) ncim_query_content_pane_t3

0x8060,	// (0x00026093) ncim_query_content_pane_t4_ParamLimits

0x8060,	// (0x00026093) ncim_query_content_pane_t4

0x807d,	// (0x000260b0) ncim_query_content_pane_t5_ParamLimits

0x807d,	// (0x000260b0) ncim_query_content_pane_t5

0xde4e,	// (0x0002be81) ncim_query_content_pane_t6_ParamLimits

0xde4e,	// (0x0002be81) ncim_query_content_pane_t6

0xfbd9,	// (0x0002dc0c) ncim_query_content_pane_t_ParamLimits

0xde76,	// (0x0002bea9) ncim_query_list_pane_ParamLimits

0xde88,	// (0x0002bebb) ncim_query_popup_pane_ParamLimits

0xde9c,	// (0x0002becf) wait_bar_pane_cp04

0x9c48,	// (0x00027c7b) input_focus_pane_cp011

0xdea4,	// (0x0002bed7) ncim_query_popup_pane_t1

0xdeb2,	// (0x0002bee5) ncim_list_query_list_pane_ParamLimits

0xdeb2,	// (0x0002bee5) ncim_list_query_list_pane

0x9c48,	// (0x00027c7b) bg_button_pane_cp027

0xdebf,	// (0x0002bef2) ncim_query_button_pane_g1

0x9c48,	// (0x00027c7b) list_highlight_pane_cp012

0xdec9,	// (0x0002befc) ncim_list_query_list_pane_g1

0xded1,	// (0x0002bf04) ncim_list_query_list_pane_t1

0x2015,	// (0x00020048) cam4_indicators_pane_g3_ParamLimits

0x2015,	// (0x00020048) cam4_indicators_pane_g3

0x211c,	// (0x0002014f) vid4_indicators_pane_g5_ParamLimits

0x211c,	// (0x0002014f) vid4_indicators_pane_g5

0x2607,	// (0x0002063a) vid4_progress_pane_g5_ParamLimits

0x2607,	// (0x0002063a) vid4_progress_pane_g5

0x7f23,	// (0x00025f56) main_ncimui_pane_g1

0x7f8b,	// (0x00025fbe) ncimui_group_query_pane_ParamLimits

0x7f8b,	// (0x00025fbe) ncimui_group_query_pane

0x7fd3,	// (0x00026006) ncimui_list_pane_ParamLimits

0x7fd3,	// (0x00026006) ncimui_list_pane

0x7ffa,	// (0x0002602d) ncimui_text_pane_ParamLimits

0x7ffa,	// (0x0002602d) ncimui_text_pane

0x809a,	// (0x000260cd) ncimui_text_pane_t1_ParamLimits

0x809a,	// (0x000260cd) ncimui_text_pane_t1

0xdedf,	// (0x0002bf12) ncimui_list_single_graphic_pane_ParamLimits

0xdedf,	// (0x0002bf12) ncimui_list_single_graphic_pane

0x80b9,	// (0x000260ec) ncimui_query_pane_ParamLimits

0x80b9,	// (0x000260ec) ncimui_query_pane

0x9c48,	// (0x00027c7b) list_highlight_pane_cp013

0xdeef,	// (0x0002bf22) ncim_list_query_list_pane_t1_copy1

0xdec9,	// (0x0002befc) ncim_list_single_graphic_pane_g1

0xdefd,	// (0x0002bf30) ncim_query_button_pane_cp01

0xdf09,	// (0x0002bf3c) ncim_query_entry_pane_ParamLimits

0xdf09,	// (0x0002bf3c) ncim_query_entry_pane

0xdf1c,	// (0x0002bf4f) ncimui_query_pane_g1

0xdf28,	// (0x0002bf5b) ncimui_query_pane_t1_ParamLimits

0xdf28,	// (0x0002bf5b) ncimui_query_pane_t1

0xa391,	// (0x000283c4) input_focus_pane_cp012

0xdf41,	// (0x0002bf74) ncim_query_entry_pane_t1

0xa385,	// (0x000283b8) main_im_pane_ParamLimits

0x1586,	// (0x0001f5b9) main_mobtv_pane_ParamLimits

0x1586,	// (0x0001f5b9) main_mobtv_pane

0x7cbd,	// (0x00025cf0) main_cset6_slider_pane_g18_ParamLimits

0x7cbd,	// (0x00025cf0) main_cset6_slider_pane_g18

0x7cc9,	// (0x00025cfc) main_cset6_slider_pane_g19_ParamLimits

0x7cc9,	// (0x00025cfc) main_cset6_slider_pane_g19

0xd2ca,	// (0x0002b2fd) bg_main_mobtv_pane_ParamLimits

0xd2ca,	// (0x0002b2fd) bg_main_mobtv_pane

0x80cc,	// (0x000260ff) main_mobtv_info_pane

0x80d7,	// (0x0002610a) main_mobtv_loading_pane_ParamLimits

0x80d7,	// (0x0002610a) main_mobtv_loading_pane

0xdf53,	// (0x0002bf86) main_mobtv_pg_channel_list_pane

0xdf5d,	// (0x0002bf90) main_mobtv_pg_hdr_pane

0x80e4,	// (0x00026117) main_mobtv_programe_curr_pane_ParamLimits

0x80e4,	// (0x00026117) main_mobtv_programe_curr_pane

0x80f1,	// (0x00026124) main_mobtv_programe_next_pane_ParamLimits

0x80f1,	// (0x00026124) main_mobtv_programe_next_pane

0xdf66,	// (0x0002bf99) popup_mobtv_noti_window

0xc84f,	// (0x0002a882) main_tv_pg_hdr_pane_g1

0xdf6e,	// (0x0002bfa1) main_tv_pg_hdr_pane_g2

0xdf76,	// (0x0002bfa9) main_tv_pg_hdr_pane_g3

0xdf7e,	// (0x0002bfb1) main_tv_pg_hdr_pane_g4

0xdf86,	// (0x0002bfb9) main_tv_pg_hdr_pane_g5

0xdf90,	// (0x0002bfc3) main_tv_pg_hdr_pane_g6

0xdf9a,	// (0x0002bfcd) main_tv_pg_hdr_pane_g7

0xdfa4,	// (0x0002bfd7) main_tv_pg_hdr_pane_g8

0xdfae,	// (0x0002bfe1) main_tv_pg_hdr_pane_g9

0xdfb8,	// (0x0002bfeb) main_tv_pg_hdr_pane_g10

0xdfc2,	// (0x0002bff5) main_tv_pg_hdr_pane_g11

0x000a,

0xfbe6,	// (0x0002dc19) main_tv_pg_hdr_pane_g

0xdfcc,	// (0x0002bfff) main_tv_pg_hdr_pane_t1

0xdfda,	// (0x0002c00d) main_tv_pg_hdr_pane_t2

0xdfe8,	// (0x0002c01b) main_tv_pg_hdr_pane_t3

0xdff8,	// (0x0002c02b) main_tv_pg_hdr_pane_t4

0xe008,	// (0x0002c03b) main_tv_pg_hdr_pane_t5

0x0004,

0x0ae7,	// (0x0001eb1a) main_tv_pg_hdr_pane_t

0xe018,	// (0x0002c04b) single_mobtv_pg_channel_pane_ParamLimits

0xe018,	// (0x0002c04b) single_mobtv_pg_channel_pane

0xe02a,	// (0x0002c05d) single_mobtv_pg_channel_table_pane

0xe033,	// (0x0002c066) single_mobtv_pg_channel_thumb_pane

0xe03c,	// (0x0002c06f) single_tv_pg_channel_pane_g1

0xe045,	// (0x0002c078) single_tv_pg_channel_pane_g2

0x0001,

0x0af2,	// (0x0001eb25) single_tv_pg_channel_pane_g

0xcab2,	// (0x0002aae5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcab2,	// (0x0002aae5) bg_single_mobtv_pg_channel_thumb_pane

0xe04e,	// (0x0002c081) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe04e,	// (0x0002c081) single_mobtv_pg_channel_thumb_pane_g1

0xe05c,	// (0x0002c08f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe05c,	// (0x0002c08f) single_mobtv_pg_channel_thumb_pane_g2

0xe068,	// (0x0002c09b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe068,	// (0x0002c09b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0af7,	// (0x0001eb2a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0af7,	// (0x0001eb2a) single_mobtv_pg_channel_thumb_pane_g

0xe074,	// (0x0002c0a7) single_mobtv_pg_channel_thumb_pane_t1

0xe082,	// (0x0002c0b5) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0afe,	// (0x0001eb31) single_mobtv_pg_channel_thumb_pane_t

0xc84f,	// (0x0002a882) bg_single_mobtv_pg_channel_table_pane_g1

0xc84f,	// (0x0002a882) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0002d70f) bg_single_mobtv_pg_channel_table_pane_g

0xe090,	// (0x0002c0c3) single_mobtv_pg_channel_table_pane_t1

0xe09e,	// (0x0002c0d1) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0b03,	// (0x0001eb36) single_mobtv_pg_channel_table_pane_t

0x8106,	// (0x00026139) main_mobtv_info_pane_g1_ParamLimits

0x8106,	// (0x00026139) main_mobtv_info_pane_g1

0x8122,	// (0x00026155) main_mobtv_info_pane_t1_ParamLimits

0x8122,	// (0x00026155) main_mobtv_info_pane_t1

0x819a,	// (0x000261cd) main_mobtv_info_pane_t2_ParamLimits

0x819a,	// (0x000261cd) main_mobtv_info_pane_t2

0x0002,

0xfc02,	// (0x0002dc35) main_mobtv_info_pane_t_ParamLimits

0xfc02,	// (0x0002dc35) main_mobtv_info_pane_t

0x8229,	// (0x0002625c) wait_bar_pane_cp05

0x823b,	// (0x0002626e) main_mobtv_loading_pane_g1_ParamLimits

0x823b,	// (0x0002626e) main_mobtv_loading_pane_g1

0x8249,	// (0x0002627c) main_mobtv_loading_pane_g2_ParamLimits

0x8249,	// (0x0002627c) main_mobtv_loading_pane_g2

0x8255,	// (0x00026288) main_mobtv_loading_pane_g3_ParamLimits

0x8255,	// (0x00026288) main_mobtv_loading_pane_g3

0x0002,

0xfc09,	// (0x0002dc3c) main_mobtv_loading_pane_g_ParamLimits

0xfc09,	// (0x0002dc3c) main_mobtv_loading_pane_g

0xe0ac,	// (0x0002c0df) main_mobtv_loading_pane_t1_ParamLimits

0xe0ac,	// (0x0002c0df) main_mobtv_loading_pane_t1

0xe0c4,	// (0x0002c0f7) main_mobtv_loading_pane_t2_ParamLimits

0xe0c4,	// (0x0002c0f7) main_mobtv_loading_pane_t2

0x0001,

0x0b1b,	// (0x0001eb4e) main_mobtv_loading_pane_t_ParamLimits

0x0b1b,	// (0x0001eb4e) main_mobtv_loading_pane_t

0x8263,	// (0x00026296) wait_bar_pane_cp06_ParamLimits

0x8263,	// (0x00026296) wait_bar_pane_cp06

0xe0e8,	// (0x0002c11b) main_mobtv_programe_curr_pane_t1

0xe0f6,	// (0x0002c129) main_mobtv_programe_curr_pane_t2

0x0001,

0x0b20,	// (0x0001eb53) main_mobtv_programe_curr_pane_t

0xe104,	// (0x0002c137) main_mobtv_programe_next_pane_t1

0xe112,	// (0x0002c145) main_mobtv_programe_next_pane_t2

0xe120,	// (0x0002c153) main_mobtv_programe_next_pane_t3

0x0002,

0x0b25,	// (0x0001eb58) main_mobtv_programe_next_pane_t

0x9c48,	// (0x00027c7b) bg_popup_mobtv_noti_window_pane

0xe12e,	// (0x0002c161) popup_mobtv_noti_window_g1

0xe136,	// (0x0002c169) popup_mobtv_noti_window_t1

0xe144,	// (0x0002c177) popup_mobtv_noti_window_t2

0x0001,

0x0b2c,	// (0x0001eb5f) popup_mobtv_noti_window_t

0xc84f,	// (0x0002a882) bg_popup_mobtv_noti_window_pane_g1

0x10bc,	// (0x0001f0ef) sc_clock_pane

0x10bc,	// (0x0001f0ef) main_fs_bigclock_pane

0x78db,	// (0x0002590e) blid2_tripm_pane_t4_ParamLimits

0x78db,	// (0x0002590e) blid2_tripm_pane_t4

0x826f,	// (0x000262a2) sc_clock_pane_g1_ParamLimits

0x826f,	// (0x000262a2) sc_clock_pane_g1

0x827d,	// (0x000262b0) sc_clock_pane_t1_ParamLimits

0x827d,	// (0x000262b0) sc_clock_pane_t1

0x8290,	// (0x000262c3) sc_clock_pane_t2_ParamLimits

0x8290,	// (0x000262c3) sc_clock_pane_t2

0x82a2,	// (0x000262d5) sc_clock_pane_t3_ParamLimits

0x82a2,	// (0x000262d5) sc_clock_pane_t3

0x0004,

0xfc10,	// (0x0002dc43) sc_clock_pane_t_ParamLimits

0xfc10,	// (0x0002dc43) sc_clock_pane_t

0x921d,	// (0x00027250) main_fs_bigclock_indicator_pane_ParamLimits

0x921d,	// (0x00027250) main_fs_bigclock_indicator_pane

0x832b,	// (0x0002635e) main_fs_bigclock_pane_g1_ParamLimits

0x832b,	// (0x0002635e) main_fs_bigclock_pane_g1

0x9229,	// (0x0002725c) main_fs_bigclock_pane_t1_ParamLimits

0x9229,	// (0x0002725c) main_fs_bigclock_pane_t1

0x923b,	// (0x0002726e) main_fs_bigclock_pane_t2_ParamLimits

0x923b,	// (0x0002726e) main_fs_bigclock_pane_t2

0x924f,	// (0x00027282) main_fs_bigclock_pane_t3_ParamLimits

0x924f,	// (0x00027282) main_fs_bigclock_pane_t3

0x0002,

0xfd8a,	// (0x0002ddbd) main_fs_bigclock_pane_t_ParamLimits

0xfd8a,	// (0x0002ddbd) main_fs_bigclock_pane_t

0xec5e,	// (0x0002cc91) main_fs_bigclock_indicator_pane_g1

0xde1e,	// (0x0002be51) ncim_query_content_pane_g2_ParamLimits

0xde1e,	// (0x0002be51) ncim_query_content_pane_g2

0x0001,

0xfbd4,	// (0x0002dc07) ncim_query_content_pane_g_ParamLimits

0xfbd4,	// (0x0002dc07) ncim_query_content_pane_g

0x82b6,	// (0x000262e9) sc_clock_pane_t4_ParamLimits

0x82b6,	// (0x000262e9) sc_clock_pane_t4

0x1586,	// (0x0001f5b9) main_radioblah_pane

0xd22f,	// (0x0002b262) cell_call4_button_pane_t1_copy1_ParamLimits

0xd22f,	// (0x0002b262) cell_call4_button_pane_t1_copy1

0x7f3d,	// (0x00025f70) main_ncimui_pane_t1_ParamLimits

0x7f3d,	// (0x00025f70) main_ncimui_pane_t1

0x7f57,	// (0x00025f8a) main_ncimui_pane_t2_ParamLimits

0x7f57,	// (0x00025f8a) main_ncimui_pane_t2

0x0002,

0xfbcd,	// (0x0002dc00) main_ncimui_pane_t_ParamLimits

0xfbcd,	// (0x0002dc00) main_ncimui_pane_t

0xe288,	// (0x0002c2bb) main_radioblah_anim_pane_ParamLimits

0xe288,	// (0x0002c2bb) main_radioblah_anim_pane

0xe299,	// (0x0002c2cc) main_radioblah_info_pane_ParamLimits

0xe299,	// (0x0002c2cc) main_radioblah_info_pane

0xe2ad,	// (0x0002c2e0) main_radioblah_pane_t1_ParamLimits

0xe2ad,	// (0x0002c2e0) main_radioblah_pane_t1

0xe2c9,	// (0x0002c2fc) main_radioblah_pane_t2_ParamLimits

0xe2c9,	// (0x0002c2fc) main_radioblah_pane_t2

0x0003,

0x0b52,	// (0x0001eb85) main_radioblah_pane_t_ParamLimits

0x0b52,	// (0x0001eb85) main_radioblah_pane_t

0x837d,	// (0x000263b0) main_radioblah_rocker_ctrl_pane_ParamLimits

0x837d,	// (0x000263b0) main_radioblah_rocker_ctrl_pane

0xe31a,	// (0x0002c34d) main_radioblah_info_pane_t1_ParamLimits

0xe31a,	// (0x0002c34d) main_radioblah_info_pane_t1

0x83c2,	// (0x000263f5) main_radioblah_info_pane_t2_ParamLimits

0x83c2,	// (0x000263f5) main_radioblah_info_pane_t2

0x0003,

0xfc1b,	// (0x0002dc4e) main_radioblah_info_pane_t_ParamLimits

0xfc1b,	// (0x0002dc4e) main_radioblah_info_pane_t

0xc84f,	// (0x0002a882) main_radioblah_rocker_ctrl_pane_g1

0x8472,	// (0x000264a5) main_radioblah_rocker_ctrl_pane_g2

0x847a,	// (0x000264ad) main_radioblah_rocker_ctrl_pane_g3

0x8482,	// (0x000264b5) main_radioblah_rocker_ctrl_pane_g4

0x848a,	// (0x000264bd) main_radioblah_rocker_ctrl_pane_g5

0x8492,	// (0x000264c5) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc24,	// (0x0002dc57) main_radioblah_rocker_ctrl_pane_g

0x7ee4,	// (0x00025f17) main_cset_text2_pane_t1_copy1_ParamLimits

0x1f59,	// (0x0001ff8c) cam4_image_uncrop_qvga_pane

0x208a,	// (0x000200bd) vid4_image_uncrop_qcif_pane

0x26a7,	// (0x000206da) cam6_image_uncrop_qvga_pane_ParamLimits

0x26a7,	// (0x000206da) cam6_image_uncrop_qvga_pane

0xdb33,	// (0x0002bb66) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb33,	// (0x0002bb66) vid6_image_uncrop_qcif_pane

0x9c48,	// (0x00027c7b) bg_popup_preview_window_pane_cp03

0xddd0,	// (0x0002be03) list_cset_text2_pane

0xddd8,	// (0x0002be0b) main_cset6_text2_pane_g1

0xdde0,	// (0x0002be13) main_cset6_text2_pane_t1

0x849a,	// (0x000264cd) list_cset_text2_pane_t1_ParamLimits

0x849a,	// (0x000264cd) list_cset_text2_pane_t1

0x1586,	// (0x0001f5b9) main_radioblah_pane_ParamLimits

0x8215,	// (0x00026248) main_mobtv_info_pane_t3_ParamLimits

0x8215,	// (0x00026248) main_mobtv_info_pane_t3

0x836b,	// (0x0002639e) main_radioblah_pane_g1

0x8396,	// (0x000263c9) main_radioblah_info_pane_g1

0x8417,	// (0x0002644a) main_radioblah_info_pane_t3_ParamLimits

0x8417,	// (0x0002644a) main_radioblah_info_pane_t3

0x4427,	// (0x0002245a) highlight_cell_cale_month_pane_ParamLimits

0x4427,	// (0x0002245a) highlight_cell_cale_month_pane

0x10bc,	// (0x0001f0ef) main_phob_fisheye_pane

0xcbba,	// (0x0002abed) scroll_pane_cp0031_ParamLimits

0xcbba,	// (0x0002abed) scroll_pane_cp0031

0xdc41,	// (0x0002bc74) wait_bar_pane_cp08_ParamLimits

0x7bd4,	// (0x00025c07) cset_list_set_pane_copy1_ParamLimits

0xe354,	// (0x0002c387) highlight_cell_cale_month_pane_g1

0x84b7,	// (0x000264ea) highlight_cell_cale_month_pane_t1

0xd8a7,	// (0x0002b8da) list_gen_pane_cp01

0xd42f,	// (0x0002b462) scroll_pane_01

0x84c5,	// (0x000264f8) list_single_double_fisheye_pane

0x84ce,	// (0x00026501) list_double_fisheye_pane_g1_ParamLimits

0x84ce,	// (0x00026501) list_double_fisheye_pane_g1

0x84da,	// (0x0002650d) list_double_fisheye_pane_g2_ParamLimits

0x84da,	// (0x0002650d) list_double_fisheye_pane_g2

0x84ee,	// (0x00026521) list_double_fisheye_pane_g3_ParamLimits

0x84ee,	// (0x00026521) list_double_fisheye_pane_g3

0x0004,

0xfc31,	// (0x0002dc64) list_double_fisheye_pane_g_ParamLimits

0xfc31,	// (0x0002dc64) list_double_fisheye_pane_g

0x8517,	// (0x0002654a) list_double_fisheye_pane_t1_ParamLimits

0x8517,	// (0x0002654a) list_double_fisheye_pane_t1

0x8532,	// (0x00026565) list_double_fisheye_pane_t2_ParamLimits

0x8532,	// (0x00026565) list_double_fisheye_pane_t2

0x0001,

0xfc3c,	// (0x0002dc6f) list_double_fisheye_pane_t_ParamLimits

0xfc3c,	// (0x0002dc6f) list_double_fisheye_pane_t

0x10bc,	// (0x0001f0ef) main_call5_pane

0x82dc,	// (0x0002630f) sc_swipe_pane_ParamLimits

0x82dc,	// (0x0002630f) sc_swipe_pane

0x8560,	// (0x00026593) call5_image_pane_ParamLimits

0x8560,	// (0x00026593) call5_image_pane

0x8570,	// (0x000265a3) call5_swipe_1_pane_ParamLimits

0x8570,	// (0x000265a3) call5_swipe_1_pane

0x857c,	// (0x000265af) call5_swipe_2_pane_ParamLimits

0x857c,	// (0x000265af) call5_swipe_2_pane

0x8596,	// (0x000265c9) popup_call5_audio_first_window_ParamLimits

0x8596,	// (0x000265c9) popup_call5_audio_first_window

0xcab2,	// (0x0002aae5) call5_swipe_1_pane_g1_ParamLimits

0xcab2,	// (0x0002aae5) call5_swipe_1_pane_g1

0xe35c,	// (0x0002c38f) call5_swipe_1_pane_g2_ParamLimits

0xe35c,	// (0x0002c38f) call5_swipe_1_pane_g2

0x0001,

0xfc41,	// (0x0002dc74) call5_swipe_1_pane_g_ParamLimits

0xfc41,	// (0x0002dc74) call5_swipe_1_pane_g

0xe368,	// (0x0002c39b) call5_swipe_1_pane_t1_ParamLimits

0xe368,	// (0x0002c39b) call5_swipe_1_pane_t1

0xcab2,	// (0x0002aae5) call5_swipe_2_pane_g1_ParamLimits

0xcab2,	// (0x0002aae5) call5_swipe_2_pane_g1

0xe37d,	// (0x0002c3b0) call5_swipe_2_pane_g2_ParamLimits

0xe37d,	// (0x0002c3b0) call5_swipe_2_pane_g2

0x0001,

0xfc46,	// (0x0002dc79) call5_swipe_2_pane_g_ParamLimits

0xfc46,	// (0x0002dc79) call5_swipe_2_pane_g

0xe389,	// (0x0002c3bc) call5_swipe_2_pane_t1_ParamLimits

0xe389,	// (0x0002c3bc) call5_swipe_2_pane_t1

0xe39e,	// (0x0002c3d1) sc_swipe_pane_g1_ParamLimits

0xe39e,	// (0x0002c3d1) sc_swipe_pane_g1

0xe3ab,	// (0x0002c3de) sc_swipe_pane_g2_ParamLimits

0xe3ab,	// (0x0002c3de) sc_swipe_pane_g2

0x0001,

0x0b8b,	// (0x0001ebbe) sc_swipe_pane_g_ParamLimits

0x0b8b,	// (0x0001ebbe) sc_swipe_pane_g

0xe3b7,	// (0x0002c3ea) sc_swipe_pane_t1_ParamLimits

0xe3b7,	// (0x0002c3ea) sc_swipe_pane_t1

0x10bc,	// (0x0001f0ef) main_cmail_launcher_pane

0x85a4,	// (0x000265d7) aid_size_cell_cmail_l_ParamLimits

0x85a4,	// (0x000265d7) aid_size_cell_cmail_l

0x85b4,	// (0x000265e7) grid_cmail_l_pane_ParamLimits

0x85b4,	// (0x000265e7) grid_cmail_l_pane

0x85c4,	// (0x000265f7) cell_cmail_l_pane_ParamLimits

0x85c4,	// (0x000265f7) cell_cmail_l_pane

0x85d8,	// (0x0002660b) cell_cmail_l_pane_g1_ParamLimits

0x85d8,	// (0x0002660b) cell_cmail_l_pane_g1

0x85e4,	// (0x00026617) cell_cmail_l_pane_t1_ParamLimits

0x85e4,	// (0x00026617) cell_cmail_l_pane_t1

0xe3cc,	// (0x0002c3ff) cell_cmail_l_pane_t2_ParamLimits

0xe3cc,	// (0x0002c3ff) cell_cmail_l_pane_t2

0x0001,

0xfc4b,	// (0x0002dc7e) cell_cmail_l_pane_t_ParamLimits

0xfc4b,	// (0x0002dc7e) cell_cmail_l_pane_t

0xa391,	// (0x000283c4) grid_highlight_pane_cp018_ParamLimits

0xa391,	// (0x000283c4) grid_highlight_pane_cp018

0x0f1e,	// (0x0001ef51) main2_pane_ParamLimits

0x0f1e,	// (0x0001ef51) main2_pane

0xa42c,	// (0x0002845f) popup_sp_fs_action_menu_bg_pane_g1

0xa434,	// (0x00028467) popup_sp_fs_action_menu_bg_pane_g2

0xa43c,	// (0x0002846f) popup_sp_fs_action_menu_bg_pane_g3

0xa444,	// (0x00028477) popup_sp_fs_action_menu_bg_pane_g4

0xa44c,	// (0x0002847f) popup_sp_fs_action_menu_bg_pane_g5

0xa454,	// (0x00028487) popup_sp_fs_action_menu_bg_pane_g6

0xa45c,	// (0x0002848f) popup_sp_fs_action_menu_bg_pane_g7

0xa464,	// (0x00028497) popup_sp_fs_action_menu_bg_pane_g8

0xa46c,	// (0x0002849f) popup_sp_fs_action_menu_bg_pane_g9

0xa474,	// (0x000284a7) popup_sp_fs_action_menu_bg_pane_g10

0xa474,	// (0x000284a7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0002d1b9) popup_sp_fs_action_menu_bg_pane_g

0x31f8,	// (0x0002122b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x31f8,	// (0x0002122b) list_medium_line_x2_t3_g3_g1

0x3204,	// (0x00021237) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3204,	// (0x00021237) list_medium_line_x2_t3_g3_g2

0x3210,	// (0x00021243) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3210,	// (0x00021243) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0002d26b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0002d26b) list_medium_line_x2_t3_g3_g

0x321c,	// (0x0002124f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x321c,	// (0x0002124f) list_medium_line_x2_t3_g3_t1

0x3231,	// (0x00021264) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3231,	// (0x00021264) list_medium_line_x2_t3_g3_t2

0x3243,	// (0x00021276) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3243,	// (0x00021276) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0002d272) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0002d272) list_medium_line_x2_t3_g3_t

0x31f8,	// (0x0002122b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x31f8,	// (0x0002122b) list_medium_line_x2_t3_g2_g1

0x3210,	// (0x00021243) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3210,	// (0x00021243) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0002d279) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0002d279) list_medium_line_x2_t3_g2_g

0x3258,	// (0x0002128b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3258,	// (0x0002128b) list_medium_line_x2_t3_g2_t1

0x326e,	// (0x000212a1) list_medium_line_x2_t3_g2_t2_ParamLimits

0x326e,	// (0x000212a1) list_medium_line_x2_t3_g2_t2

0x3280,	// (0x000212b3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3280,	// (0x000212b3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0002d27e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0002d27e) list_medium_line_x2_t3_g2_t

0x31f8,	// (0x0002122b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x31f8,	// (0x0002122b) list_medium_line_x2_t4_g4_g1

0x329e,	// (0x000212d1) list_medium_line_x2_t4_g4_g2_ParamLimits

0x329e,	// (0x000212d1) list_medium_line_x2_t4_g4_g2

0x3204,	// (0x00021237) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3204,	// (0x00021237) list_medium_line_x2_t4_g4_g3

0x32aa,	// (0x000212dd) list_medium_line_x2_t4_g4_g4_ParamLimits

0x32aa,	// (0x000212dd) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0002d285) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0002d285) list_medium_line_x2_t4_g4_g

0x32b6,	// (0x000212e9) list_medium_line_x2_t4_g4_t1_ParamLimits

0x32b6,	// (0x000212e9) list_medium_line_x2_t4_g4_t1

0x32d0,	// (0x00021303) list_medium_line_x2_t4_g4_t2_ParamLimits

0x32d0,	// (0x00021303) list_medium_line_x2_t4_g4_t2

0x32e6,	// (0x00021319) list_medium_line_x2_t4_g4_t3_ParamLimits

0x32e6,	// (0x00021319) list_medium_line_x2_t4_g4_t3

0x32fb,	// (0x0002132e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x32fb,	// (0x0002132e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0002d28e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0002d28e) list_medium_line_x2_t4_g4_t

0x31f8,	// (0x0002122b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x31f8,	// (0x0002122b) list_medium_line_x2_t2_g4_g1

0x329e,	// (0x000212d1) list_medium_line_x2_t2_g4_g2_ParamLimits

0x329e,	// (0x000212d1) list_medium_line_x2_t2_g4_g2

0x3204,	// (0x00021237) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3204,	// (0x00021237) list_medium_line_x2_t2_g4_g3

0x3210,	// (0x00021243) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3210,	// (0x00021243) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0002d2f5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0002d2f5) list_medium_line_x2_t2_g4_g

0x444d,	// (0x00022480) list_medium_line_x2_t2_g4_t1_ParamLimits

0x444d,	// (0x00022480) list_medium_line_x2_t2_g4_t1

0x3243,	// (0x00021276) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3243,	// (0x00021276) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0002d2fe) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0002d2fe) list_medium_line_x2_t2_g4_t

0x31f8,	// (0x0002122b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x31f8,	// (0x0002122b) list_medium_line_x2_t2_g3_g1

0x3204,	// (0x00021237) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3204,	// (0x00021237) list_medium_line_x2_t2_g3_g2

0x3210,	// (0x00021243) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3210,	// (0x00021243) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0002d26b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0002d26b) list_medium_line_x2_t2_g3_g

0x4462,	// (0x00022495) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4462,	// (0x00022495) list_medium_line_x2_t2_g3_t1

0x3243,	// (0x00021276) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3243,	// (0x00021276) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0002d303) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0002d303) list_medium_line_x2_t2_g3_t

0x45cf,	// (0x00022602) main_sp_fs_list_pane_ParamLimits

0x45cf,	// (0x00022602) main_sp_fs_list_pane

0x45db,	// (0x0002260e) sp_fs_scroll_pane_ParamLimits

0x45db,	// (0x0002260e) sp_fs_scroll_pane

0x45e7,	// (0x0002261a) list_medium_line_x2_t3_t1

0x45f7,	// (0x0002262a) list_medium_line_x2_t3_t2

0x4605,	// (0x00022638) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0002d34e) list_medium_line_x2_t3_t

0x4613,	// (0x00022646) list_medium_line_x3_t4_t1

0x4623,	// (0x00022656) list_medium_line_x3_t4_t2

0x4631,	// (0x00022664) list_medium_line_x3_t4_t3

0x4605,	// (0x00022638) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0002d355) list_medium_line_x3_t4_t

0x463f,	// (0x00022672) list_medium_line_x4_t5_t1

0x464f,	// (0x00022682) list_medium_line_x4_t5_t2

0x4631,	// (0x00022664) list_medium_line_x4_t5_t3

0x465d,	// (0x00022690) list_medium_line_x4_t5_t4

0x4605,	// (0x00022638) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0002d35e) list_medium_line_x4_t5_t

0x31f8,	// (0x0002122b) list_medium_line_t4_g4_g1_ParamLimits

0x31f8,	// (0x0002122b) list_medium_line_t4_g4_g1

0x466b,	// (0x0002269e) list_medium_line_t4_g4_g2_ParamLimits

0x466b,	// (0x0002269e) list_medium_line_t4_g4_g2

0x4677,	// (0x000226aa) list_medium_line_t4_g4_g3_ParamLimits

0x4677,	// (0x000226aa) list_medium_line_t4_g4_g3

0x3210,	// (0x00021243) list_medium_line_t4_g4_g4_ParamLimits

0x3210,	// (0x00021243) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0002d369) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0002d369) list_medium_line_t4_g4_g

0x4683,	// (0x000226b6) list_medium_line_t4_g4_t1_ParamLimits

0x4683,	// (0x000226b6) list_medium_line_t4_g4_t1

0x4698,	// (0x000226cb) list_medium_line_t4_g4_t2_ParamLimits

0x4698,	// (0x000226cb) list_medium_line_t4_g4_t2

0x46ae,	// (0x000226e1) list_medium_line_t4_g4_t3_ParamLimits

0x46ae,	// (0x000226e1) list_medium_line_t4_g4_t3

0x3243,	// (0x00021276) list_medium_line_t4_g4_t4_ParamLimits

0x3243,	// (0x00021276) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0002d372) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0002d372) list_medium_line_t4_g4_t

0x4752,	// (0x00022785) chi_dic_find_pane_g1

0x15a2,	// (0x0001f5d5) main_tport_pane

0x716b,	// (0x0002519e) list_medium_line_plain_t1

0x7191,	// (0x000251c4) list_medium_line_t2_g2_g1_ParamLimits

0x7191,	// (0x000251c4) list_medium_line_t2_g2_g1

0x719d,	// (0x000251d0) list_medium_line_t2_g2_g2_ParamLimits

0x719d,	// (0x000251d0) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0002da33) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0002da33) list_medium_line_t2_g2_g

0x71a9,	// (0x000251dc) list_medium_line_t2_g2_t1_ParamLimits

0x71a9,	// (0x000251dc) list_medium_line_t2_g2_t1

0x71c0,	// (0x000251f3) list_medium_line_t2_g2_t2_ParamLimits

0x71c0,	// (0x000251f3) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0002da38) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0002da38) list_medium_line_t2_g2_t

0xd8b0,	// (0x0002b8e3) aid_sp_fs_list_icon_a_sm

0xd8b8,	// (0x0002b8eb) aid_sp_fs_list_icon_d

0xd8c0,	// (0x0002b8f3) aid_sp_fs_text_primary

0xd8c9,	// (0x0002b8fc) aid_sp_fs_text_secondary

0x7726,	// (0x00025759) list_medium_line

0x7726,	// (0x00025759) list_medium_line_g2

0x7726,	// (0x00025759) list_medium_line_g3

0x7726,	// (0x00025759) list_medium_line_plain

0x7726,	// (0x00025759) list_medium_line_plain_t2

0x7726,	// (0x00025759) list_medium_line_plain_t3

0x7726,	// (0x00025759) list_medium_line_right_icon

0x7726,	// (0x00025759) list_medium_line_right_iconx2

0x7726,	// (0x00025759) list_medium_line_t2

0x7726,	// (0x00025759) list_medium_line_t2_g2

0x7726,	// (0x00025759) list_medium_line_t2_g3

0x7726,	// (0x00025759) list_medium_line_t2_right_icon

0x7726,	// (0x00025759) list_medium_line_t2_right_iconx2

0x7726,	// (0x00025759) list_medium_line_t3

0x7726,	// (0x00025759) list_medium_line_t3_g2

0x7726,	// (0x00025759) list_medium_line_t3_g3

0x7726,	// (0x00025759) list_medium_line_t3_right_iconx2

0x772f,	// (0x00025762) list_medium_line_t4_g4

0xe311,	// (0x0002c344) list_medium_line_x2

0xe311,	// (0x0002c344) list_medium_line_x2_t2_g2

0xe311,	// (0x0002c344) list_medium_line_x2_t2_g3

0xe311,	// (0x0002c344) list_medium_line_x2_t2_g4

0xe311,	// (0x0002c344) list_medium_line_x2_t3

0xe311,	// (0x0002c344) list_medium_line_x2_t3_g2

0xe311,	// (0x0002c344) list_medium_line_x2_t3_g3

0xe311,	// (0x0002c344) list_medium_line_x2_t3_g4

0xe311,	// (0x0002c344) list_medium_line_x2_t4_g2

0xe311,	// (0x0002c344) list_medium_line_x2_t4_g4

0x7738,	// (0x0002576b) list_medium_line_x3

0x7738,	// (0x0002576b) list_medium_line_x3_t4

0x7738,	// (0x0002576b) list_medium_line_x3_t4_g4

0x772f,	// (0x00025762) list_medium_line_x4_t4

0x772f,	// (0x00025762) list_medium_line_x4_t4_g7

0x772f,	// (0x00025762) list_medium_line_x4_t5

0x7741,	// (0x00025774) list_single_fs_dyc_pane_ParamLimits

0x7741,	// (0x00025774) list_single_fs_dyc_pane

0x31f8,	// (0x0002122b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x31f8,	// (0x0002122b) list_medium_line_x4_t4_g7_g1

0x7e13,	// (0x00025e46) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e13,	// (0x00025e46) list_medium_line_x4_t4_g7_g2

0x7e1f,	// (0x00025e52) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e1f,	// (0x00025e52) list_medium_line_x4_t4_g7_g3

0x7e2e,	// (0x00025e61) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e2e,	// (0x00025e61) list_medium_line_x4_t4_g7_g4

0x7e3a,	// (0x00025e6d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e3a,	// (0x00025e6d) list_medium_line_x4_t4_g7_g5

0x7e49,	// (0x00025e7c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e49,	// (0x00025e7c) list_medium_line_x4_t4_g7_g6

0x7e58,	// (0x00025e8b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e58,	// (0x00025e8b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbae,	// (0x0002dbe1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbae,	// (0x0002dbe1) list_medium_line_x4_t4_g7_g

0x7e64,	// (0x00025e97) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e64,	// (0x00025e97) list_medium_line_x4_t4_g7_t1

0x7e79,	// (0x00025eac) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e79,	// (0x00025eac) list_medium_line_x4_t4_g7_t2

0x7e8e,	// (0x00025ec1) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e8e,	// (0x00025ec1) list_medium_line_x4_t4_g7_t3

0x7ea3,	// (0x00025ed6) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7ea3,	// (0x00025ed6) list_medium_line_x4_t4_g7_t4

0x7eb5,	// (0x00025ee8) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7eb5,	// (0x00025ee8) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbbd,	// (0x0002dbf0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbbd,	// (0x0002dbf0) list_medium_line_x4_t4_g7_t

0x7ec7,	// (0x00025efa) list_single_dyc_row_pane_ParamLimits

0x7ec7,	// (0x00025efa) list_single_dyc_row_pane

0x8554,	// (0x00026587) call5_gesture_pane_ParamLimits

0x8554,	// (0x00026587) call5_gesture_pane

0x8588,	// (0x000265bb) call5_windows_pane_ParamLimits

0x8588,	// (0x000265bb) call5_windows_pane

0x85fa,	// (0x0002662d) call5_swipe_1_pane_cp_ParamLimits

0x85fa,	// (0x0002662d) call5_swipe_1_pane_cp

0x8606,	// (0x00026639) call5_swipe_2_pane_cp_ParamLimits

0x8606,	// (0x00026639) call5_swipe_2_pane_cp

0xafab,	// (0x00028fde) call5_image_pane_cp

0x8612,	// (0x00026645) popup_call5_audio_first_window_cp_ParamLimits

0x8612,	// (0x00026645) popup_call5_audio_first_window_cp

0xe39e,	// (0x0002c3d1) call5_swipe_1_pane_g1_cp_ParamLimits

0xe39e,	// (0x0002c3d1) call5_swipe_1_pane_g1_cp

0xe3de,	// (0x0002c411) call5_swipe_1_pane_g2_cp

0xe3b7,	// (0x0002c3ea) call5_swipe_1_pane_t1_cp_ParamLimits

0xe3b7,	// (0x0002c3ea) call5_swipe_1_pane_t1_cp

0xe39e,	// (0x0002c3d1) call5_swipe_2_pane_g1_cp_ParamLimits

0xe39e,	// (0x0002c3d1) call5_swipe_2_pane_g1_cp

0xe3e6,	// (0x0002c419) call5_swipe_2_pane_g2_cp

0xe3ee,	// (0x0002c421) call5_swipe_2_pane_t1_cp_ParamLimits

0xe3ee,	// (0x0002c421) call5_swipe_2_pane_t1_cp

0xa391,	// (0x000283c4) main_sp_fs_email_pane

0xe403,	// (0x0002c436) main_sp_fs_listscroll_pane_te

0x8620,	// (0x00026653) popup_sp_fs_action_menu_pane_ParamLimits

0x8620,	// (0x00026653) popup_sp_fs_action_menu_pane

0xc84f,	// (0x0002a882) bg_sp_fs_ctrlbar_pane_g1

0xce51,	// (0x0002ae84) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xce63,	// (0x0002ae96) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xce5a,	// (0x0002ae8d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc84f,	// (0x0002a882) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc50,	// (0x0002dc83) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc62b,	// (0x0002a65e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc62b,	// (0x0002a65e) bg_sp_fs_ctrlbar_ddmenu_pane

0xe40c,	// (0x0002c43f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe40c,	// (0x0002c43f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe418,	// (0x0002c44b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe418,	// (0x0002c44b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0b9e,	// (0x0001ebd1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0b9e,	// (0x0001ebd1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe424,	// (0x0002c457) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe424,	// (0x0002c457) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8664,	// (0x00026697) list_medium_line_t2_right_icon_g1

0x866c,	// (0x0002669f) list_medium_line_t2_right_icon_t1

0x867c,	// (0x000266af) list_medium_line_t2_right_icon_t2

0x0001,

0xfc59,	// (0x0002dc8c) list_medium_line_t2_right_icon_t

0xc43e,	// (0x0002a471) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc43e,	// (0x0002a471) bg_sp_fs_ctrlbar_pane

0x86e1,	// (0x00026714) main_sp_fs_ctrlbar_button_pane_cp01

0x86e9,	// (0x0002671c) main_sp_fs_ctrlbar_ddmenu_pane

0xe476,	// (0x0002c4a9) main_sp_fs_ctrlbar_pane_g1

0xe482,	// (0x0002c4b5) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0ba8,	// (0x0001ebdb) main_sp_fs_ctrlbar_pane_g

0xe48e,	// (0x0002c4c1) main_sp_fs_ctrlbar_pane_t1

0x86f3,	// (0x00026726) main_sp_fs_ctrlbar_pane

0x8709,	// (0x0002673c) main_sp_fs_listscroll_pane_te_cp01

0x871a,	// (0x0002674d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x871a,	// (0x0002674d) popup_sp_fs_action_menu_pane_cp01

0xa391,	// (0x000283c4) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa391,	// (0x000283c4) bg_sp_fs_highlight_list_pane_cp01

0xe4be,	// (0x0002c4f1) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe4be,	// (0x0002c4f1) sp_fs_action_menu_list_gene_pane_g1

0xe4cd,	// (0x0002c500) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4cd,	// (0x0002c500) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0x0bb2,	// (0x0001ebe5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0x0bb2,	// (0x0001ebe5) sp_fs_action_menu_list_gene_pane_g

0xe4da,	// (0x0002c50d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4da,	// (0x0002c50d) sp_fs_action_menu_list_gene_pane_t1

0xe4f2,	// (0x0002c525) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4f2,	// (0x0002c525) sp_fs_action_menu_list_gene_pane

0xe511,	// (0x0002c544) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe511,	// (0x0002c544) popup_sp_fs_action_menu_bg_pane

0xe51f,	// (0x0002c552) sp_fs_action_menu_list_pane_ParamLimits

0xe51f,	// (0x0002c552) sp_fs_action_menu_list_pane

0x8744,	// (0x00026777) sp_fs_scroll_pane_cp01_ParamLimits

0x8744,	// (0x00026777) sp_fs_scroll_pane_cp01

0x876a,	// (0x0002679d) list_medium_line_plain_t2_t1

0x877a,	// (0x000267ad) list_medium_line_plain_t2_t2

0x0001,

0xfc5e,	// (0x0002dc91) list_medium_line_plain_t2_t

0x8788,	// (0x000267bb) list_medium_line_plain_t3_t1

0x8798,	// (0x000267cb) list_medium_line_plain_t3_t2

0x87a6,	// (0x000267d9) list_medium_line_plain_t3_t3

0x0002,

0xfc63,	// (0x0002dc96) list_medium_line_plain_t3_t

0x31f8,	// (0x0002122b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x31f8,	// (0x0002122b) list_medium_line_x2_t2_g2_g1

0x3210,	// (0x00021243) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3210,	// (0x00021243) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0002d279) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0002d279) list_medium_line_x2_t2_g2_g

0x4683,	// (0x000226b6) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4683,	// (0x000226b6) list_medium_line_x2_t2_g2_t1

0x3243,	// (0x00021276) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3243,	// (0x00021276) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc6a,	// (0x0002dc9d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc6a,	// (0x0002dc9d) list_medium_line_x2_t2_g2_t

0x31f8,	// (0x0002122b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x31f8,	// (0x0002122b) list_medium_line_x2_t4_g2_g1

0x3210,	// (0x00021243) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3210,	// (0x00021243) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0002d279) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0002d279) list_medium_line_x2_t4_g2_g

0x87b4,	// (0x000267e7) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87b4,	// (0x000267e7) list_medium_line_x2_t4_g2_t1

0x87ce,	// (0x00026801) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87ce,	// (0x00026801) list_medium_line_x2_t4_g2_t2

0x87e3,	// (0x00026816) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87e3,	// (0x00026816) list_medium_line_x2_t4_g2_t3

0x3243,	// (0x00021276) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3243,	// (0x00021276) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc6f,	// (0x0002dca2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc6f,	// (0x0002dca2) list_medium_line_x2_t4_g2_t

0x87f8,	// (0x0002682b) list_medium_line_t3_right_iconx2_g1

0x8664,	// (0x00026697) list_medium_line_t3_right_iconx2_g2

0x8800,	// (0x00026833) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc78,	// (0x0002dcab) list_medium_line_t3_right_iconx2_g

0x8808,	// (0x0002683b) list_medium_line_t3_right_iconx2_t1

0x8818,	// (0x0002684b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc7f,	// (0x0002dcb2) list_medium_line_t3_right_iconx2_t

0x31f8,	// (0x0002122b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x31f8,	// (0x0002122b) list_medium_line_x3_t4_g4_g1

0x3204,	// (0x00021237) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3204,	// (0x00021237) list_medium_line_x3_t4_g4_g2

0x466b,	// (0x0002269e) list_medium_line_x3_t4_g4_g3_ParamLimits

0x466b,	// (0x0002269e) list_medium_line_x3_t4_g4_g3

0x8826,	// (0x00026859) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8826,	// (0x00026859) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc84,	// (0x0002dcb7) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc84,	// (0x0002dcb7) list_medium_line_x3_t4_g4_g

0x8832,	// (0x00026865) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8832,	// (0x00026865) list_medium_line_x3_t4_g4_t1

0x8849,	// (0x0002687c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8849,	// (0x0002687c) list_medium_line_x3_t4_g4_t2

0x885e,	// (0x00026891) list_medium_line_x3_t4_g4_t3_ParamLimits

0x885e,	// (0x00026891) list_medium_line_x3_t4_g4_t3

0x8873,	// (0x000268a6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8873,	// (0x000268a6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc8d,	// (0x0002dcc0) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc8d,	// (0x0002dcc0) list_medium_line_x3_t4_g4_t

0x8890,	// (0x000268c3) list_single_dyc_row_text_pane_t1_ParamLimits

0x8890,	// (0x000268c3) list_single_dyc_row_text_pane_t1

0x88c7,	// (0x000268fa) list_single_dyc_row_text_pane_t2_ParamLimits

0x88c7,	// (0x000268fa) list_single_dyc_row_text_pane_t2

0xe53f,	// (0x0002c572) list_single_dyc_row_text_pane_t3_ParamLimits

0xe53f,	// (0x0002c572) list_single_dyc_row_text_pane_t3

0x0005,

0xfc96,	// (0x0002dcc9) list_single_dyc_row_text_pane_t_ParamLimits

0xfc96,	// (0x0002dcc9) list_single_dyc_row_text_pane_t

0xe563,	// (0x0002c596) list_single_dyc_row_pane_g1_ParamLimits

0xe563,	// (0x0002c596) list_single_dyc_row_pane_g1

0xe56f,	// (0x0002c5a2) list_single_dyc_row_pane_g2_ParamLimits

0xe56f,	// (0x0002c5a2) list_single_dyc_row_pane_g2

0xe57b,	// (0x0002c5ae) list_single_dyc_row_pane_g3_ParamLimits

0xe57b,	// (0x0002c5ae) list_single_dyc_row_pane_g3

0xe587,	// (0x0002c5ba) list_single_dyc_row_pane_g4_ParamLimits

0xe587,	// (0x0002c5ba) list_single_dyc_row_pane_g4

0x0003,

0x0bfc,	// (0x0001ec2f) list_single_dyc_row_pane_g_ParamLimits

0x0bfc,	// (0x0001ec2f) list_single_dyc_row_pane_g

0xe593,	// (0x0002c5c6) list_single_dyc_row_text_pane_ParamLimits

0xe593,	// (0x0002c5c6) list_single_dyc_row_text_pane

0x9c48,	// (0x00027c7b) bg_sp_fs_scroll_pane

0xe5b2,	// (0x0002c5e5) thumb_sp_fs_scroll_pane

0x7191,	// (0x000251c4) list_medium_line_g1_ParamLimits

0x7191,	// (0x000251c4) list_medium_line_g1

0x89ea,	// (0x00026a1d) list_medium_line_t1_ParamLimits

0x89ea,	// (0x00026a1d) list_medium_line_t1

0x31f8,	// (0x0002122b) list_medium_line_x2_g1_ParamLimits

0x31f8,	// (0x0002122b) list_medium_line_x2_g1

0x3204,	// (0x00021237) list_medium_line_x2_g2_ParamLimits

0x3204,	// (0x00021237) list_medium_line_x2_g2

0x0001,

0xfca3,	// (0x0002dcd6) list_medium_line_x2_g_ParamLimits

0xfca3,	// (0x0002dcd6) list_medium_line_x2_g

0xe5bb,	// (0x0002c5ee) list_medium_line_x2_t1_ParamLimits

0xe5bb,	// (0x0002c5ee) list_medium_line_x2_t1

0x31f8,	// (0x0002122b) list_medium_line_x3_g1_ParamLimits

0x31f8,	// (0x0002122b) list_medium_line_x3_g1

0x3204,	// (0x00021237) list_medium_line_x3_g2_ParamLimits

0x3204,	// (0x00021237) list_medium_line_x3_g2

0x0001,

0xfca3,	// (0x0002dcd6) list_medium_line_x3_g_ParamLimits

0xfca3,	// (0x0002dcd6) list_medium_line_x3_g

0xe5bb,	// (0x0002c5ee) list_medium_line_x3_t1_ParamLimits

0xe5bb,	// (0x0002c5ee) list_medium_line_x3_t1

0xe5d1,	// (0x0002c604) thumb_sp_fs_scroll_pane_g1

0xe5da,	// (0x0002c60d) thumb_sp_fs_scroll_pane_g2

0xe5e3,	// (0x0002c616) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0c0a,	// (0x0001ec3d) thumb_sp_fs_scroll_pane_g

0xe5d1,	// (0x0002c604) bg_sp_fs_scroll_pane_g1

0xe5da,	// (0x0002c60d) bg_sp_fs_scroll_pane_g2

0xe5e3,	// (0x0002c616) bg_sp_fs_scroll_pane_g3

0x0002,

0x0c0a,	// (0x0001ec3d) bg_sp_fs_scroll_pane_g

0x31f8,	// (0x0002122b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x31f8,	// (0x0002122b) list_medium_line_x2_t3_g4_g1

0x329e,	// (0x000212d1) list_medium_line_x2_t3_g4_g2_ParamLimits

0x329e,	// (0x000212d1) list_medium_line_x2_t3_g4_g2

0x3204,	// (0x00021237) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3204,	// (0x00021237) list_medium_line_x2_t3_g4_g3

0x3210,	// (0x00021243) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3210,	// (0x00021243) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0002d2f5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0002d2f5) list_medium_line_x2_t3_g4_g

0x89ff,	// (0x00026a32) list_medium_line_x2_t3_g4_t1_ParamLimits

0x89ff,	// (0x00026a32) list_medium_line_x2_t3_g4_t1

0x8a15,	// (0x00026a48) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a15,	// (0x00026a48) list_medium_line_x2_t3_g4_t2

0x3243,	// (0x00021276) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3243,	// (0x00021276) list_medium_line_x2_t3_g4_t3

0x0002,

0xfca8,	// (0x0002dcdb) list_medium_line_x2_t3_g4_t_ParamLimits

0xfca8,	// (0x0002dcdb) list_medium_line_x2_t3_g4_t

0x7191,	// (0x000251c4) list_medium_line_g2_g1_ParamLimits

0x7191,	// (0x000251c4) list_medium_line_g2_g1

0x719d,	// (0x000251d0) list_medium_line_g2_g2_ParamLimits

0x719d,	// (0x000251d0) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0002da33) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0002da33) list_medium_line_g2_g

0x8a2f,	// (0x00026a62) list_medium_line_g2_t1_ParamLimits

0x8a2f,	// (0x00026a62) list_medium_line_g2_t1

0x7191,	// (0x000251c4) list_medium_line_t3_g2_g1_ParamLimits

0x7191,	// (0x000251c4) list_medium_line_t3_g2_g1

0x719d,	// (0x000251d0) list_medium_line_t3_g2_g2_ParamLimits

0x719d,	// (0x000251d0) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0002da33) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0002da33) list_medium_line_t3_g2_g

0x8a44,	// (0x00026a77) list_medium_line_t3_g2_t1_ParamLimits

0x8a44,	// (0x00026a77) list_medium_line_t3_g2_t1

0x8a5b,	// (0x00026a8e) list_medium_line_t3_g2_t2_ParamLimits

0x8a5b,	// (0x00026a8e) list_medium_line_t3_g2_t2

0x8a70,	// (0x00026aa3) list_medium_line_t3_g2_t3_ParamLimits

0x8a70,	// (0x00026aa3) list_medium_line_t3_g2_t3

0x0002,

0xfcaf,	// (0x0002dce2) list_medium_line_t3_g2_t_ParamLimits

0xfcaf,	// (0x0002dce2) list_medium_line_t3_g2_t

0x8664,	// (0x00026697) list_medium_line_right_icon_g1

0x8a85,	// (0x00026ab8) list_medium_line_right_icon_t1

0x7191,	// (0x000251c4) list_medium_line_t2_g1_ParamLimits

0x7191,	// (0x000251c4) list_medium_line_t2_g1

0x8a93,	// (0x00026ac6) list_medium_line_t2_t1_ParamLimits

0x8a93,	// (0x00026ac6) list_medium_line_t2_t1

0x8aad,	// (0x00026ae0) list_medium_line_t2_t2_ParamLimits

0x8aad,	// (0x00026ae0) list_medium_line_t2_t2

0x0001,

0xfcb6,	// (0x0002dce9) list_medium_line_t2_t_ParamLimits

0xfcb6,	// (0x0002dce9) list_medium_line_t2_t

0x7191,	// (0x000251c4) list_medium_line_t3_g1_ParamLimits

0x7191,	// (0x000251c4) list_medium_line_t3_g1

0x8ac2,	// (0x00026af5) list_medium_line_t3_t1_ParamLimits

0x8ac2,	// (0x00026af5) list_medium_line_t3_t1

0x8ad9,	// (0x00026b0c) list_medium_line_t3_t2_ParamLimits

0x8ad9,	// (0x00026b0c) list_medium_line_t3_t2

0x8aee,	// (0x00026b21) list_medium_line_t3_t3_ParamLimits

0x8aee,	// (0x00026b21) list_medium_line_t3_t3

0x0002,

0xfcbb,	// (0x0002dcee) list_medium_line_t3_t_ParamLimits

0xfcbb,	// (0x0002dcee) list_medium_line_t3_t

0x7191,	// (0x000251c4) list_medium_line_g3_g1_ParamLimits

0x7191,	// (0x000251c4) list_medium_line_g3_g1

0x8b00,	// (0x00026b33) list_medium_line_g3_g2_ParamLimits

0x8b00,	// (0x00026b33) list_medium_line_g3_g2

0x719d,	// (0x000251d0) list_medium_line_g3_g3_ParamLimits

0x719d,	// (0x000251d0) list_medium_line_g3_g3

0x0002,

0xfcc2,	// (0x0002dcf5) list_medium_line_g3_g_ParamLimits

0xfcc2,	// (0x0002dcf5) list_medium_line_g3_g

0x8b0c,	// (0x00026b3f) list_medium_line_g3_t1_ParamLimits

0x8b0c,	// (0x00026b3f) list_medium_line_g3_t1

0x7191,	// (0x000251c4) list_medium_line_t2_g3_g1_ParamLimits

0x7191,	// (0x000251c4) list_medium_line_t2_g3_g1

0x8b00,	// (0x00026b33) list_medium_line_t2_g3_g2_ParamLimits

0x8b00,	// (0x00026b33) list_medium_line_t2_g3_g2

0x719d,	// (0x000251d0) list_medium_line_t2_g3_g3_ParamLimits

0x719d,	// (0x000251d0) list_medium_line_t2_g3_g3

0x0002,

0xfcc2,	// (0x0002dcf5) list_medium_line_t2_g3_g_ParamLimits

0xfcc2,	// (0x0002dcf5) list_medium_line_t2_g3_g

0x8b21,	// (0x00026b54) list_medium_line_t2_g3_t1_ParamLimits

0x8b21,	// (0x00026b54) list_medium_line_t2_g3_t1

0x8b38,	// (0x00026b6b) list_medium_line_t2_g3_t2_ParamLimits

0x8b38,	// (0x00026b6b) list_medium_line_t2_g3_t2

0x0001,

0xfcc9,	// (0x0002dcfc) list_medium_line_t2_g3_t_ParamLimits

0xfcc9,	// (0x0002dcfc) list_medium_line_t2_g3_t

0x7191,	// (0x000251c4) list_medium_line_t3_g3_g1_ParamLimits

0x7191,	// (0x000251c4) list_medium_line_t3_g3_g1

0x8b00,	// (0x00026b33) list_medium_line_t3_g3_g2_ParamLimits

0x8b00,	// (0x00026b33) list_medium_line_t3_g3_g2

0x719d,	// (0x000251d0) list_medium_line_t3_g3_g3_ParamLimits

0x719d,	// (0x000251d0) list_medium_line_t3_g3_g3

0x0002,

0xfcc2,	// (0x0002dcf5) list_medium_line_t3_g3_g_ParamLimits

0xfcc2,	// (0x0002dcf5) list_medium_line_t3_g3_g

0x8b4d,	// (0x00026b80) list_medium_line_t3_g3_t1_ParamLimits

0x8b4d,	// (0x00026b80) list_medium_line_t3_g3_t1

0x8b61,	// (0x00026b94) list_medium_line_t3_g3_t2_ParamLimits

0x8b61,	// (0x00026b94) list_medium_line_t3_g3_t2

0x8b73,	// (0x00026ba6) list_medium_line_t3_g3_t3_ParamLimits

0x8b73,	// (0x00026ba6) list_medium_line_t3_g3_t3

0x0002,

0xfcce,	// (0x0002dd01) list_medium_line_t3_g3_t_ParamLimits

0xfcce,	// (0x0002dd01) list_medium_line_t3_g3_t

0x87f8,	// (0x0002682b) list_medium_line_right_iconx2_g1

0x8664,	// (0x00026697) list_medium_line_right_iconx2_g2

0x0001,

0xfcd5,	// (0x0002dd08) list_medium_line_right_iconx2_g

0x8b85,	// (0x00026bb8) list_medium_line_right_iconx2_t1

0x87f8,	// (0x0002682b) list_medium_line_t2_right_iconx2_g1

0x8664,	// (0x00026697) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd5,	// (0x0002dd08) list_medium_line_t2_right_iconx2_g

0x8b93,	// (0x00026bc6) list_medium_line_t2_right_iconx2_t1

0x8ba3,	// (0x00026bd6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcda,	// (0x0002dd0d) list_medium_line_t2_right_iconx2_t

0x8bb1,	// (0x00026be4) list_medium_line_x4_t4_t1

0x8bbf,	// (0x00026bf2) list_medium_line_x4_t4_t2

0x8bcf,	// (0x00026c02) list_medium_line_x4_t4_t3

0x8bdf,	// (0x00026c12) list_medium_line_x4_t4_t4

0x0003,

0xfcdf,	// (0x0002dd12) list_medium_line_x4_t4_t

0x8c19,	// (0x00026c4c) tport_appsw_pane_ParamLimits

0x8c19,	// (0x00026c4c) tport_appsw_pane

0x8c27,	// (0x00026c5a) tport_contact_pane_ParamLimits

0x8c27,	// (0x00026c5a) tport_contact_pane

0x8c37,	// (0x00026c6a) tport_listscroll_pane_ParamLimits

0x8c37,	// (0x00026c6a) tport_listscroll_pane

0x8c47,	// (0x00026c7a) cell_tport_appsw_pane_ParamLimits

0x8c47,	// (0x00026c7a) cell_tport_appsw_pane

0xcb43,	// (0x0002ab76) tport_appsw_pane_g1_ParamLimits

0xcb43,	// (0x0002ab76) tport_appsw_pane_g1

0xe5ec,	// (0x0002c61f) tport_contact_pane_g1

0xdea4,	// (0x0002bed7) tport_contact_pane_t1

0xe5f5,	// (0x0002c628) tport_contact_pane_t2

0x0001,

0x0c51,	// (0x0001ec84) tport_contact_pane_t

0xe603,	// (0x0002c636) list_tport_pane

0xe60c,	// (0x0002c63f) scroll_pane_cp_030

0x8c7a,	// (0x00026cad) cell_tport_appsw_pane_g1

0x8c8a,	// (0x00026cbd) cell_tport_appsw_pane_t1

0x8c98,	// (0x00026ccb) grid_highlight_pane_cp019

0x8ca0,	// (0x00026cd3) list_tport_double_graphic_pane_ParamLimits

0x8ca0,	// (0x00026cd3) list_tport_double_graphic_pane

0xa391,	// (0x000283c4) list_highlight_pane_cp023_ParamLimits

0xa391,	// (0x000283c4) list_highlight_pane_cp023

0x8cb1,	// (0x00026ce4) list_tport_double_graphic_pane_g1_ParamLimits

0x8cb1,	// (0x00026ce4) list_tport_double_graphic_pane_g1

0x8cbe,	// (0x00026cf1) list_tport_double_graphic_pane_t1_ParamLimits

0x8cbe,	// (0x00026cf1) list_tport_double_graphic_pane_t1

0x8cd3,	// (0x00026d06) list_tport_double_graphic_pane_t2_ParamLimits

0x8cd3,	// (0x00026d06) list_tport_double_graphic_pane_t2

0x0001,

0xfcef,	// (0x0002dd22) list_tport_double_graphic_pane_t_ParamLimits

0xfcef,	// (0x0002dd22) list_tport_double_graphic_pane_t

0x9c48,	// (0x00027c7b) main_cale_note_pane

0x22cf,	// (0x00020302) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x22cf,	// (0x00020302) cell_vitu2_function_top_wide_pane_cp01

0x8229,	// (0x0002625c) wait_bar_pane_cp05_ParamLimits

0xa391,	// (0x000283c4) listscroll_cmail_pane

0xe615,	// (0x0002c648) list_cmail_pane

0x8ce5,	// (0x00026d18) list_cmail_body_pane

0x8d05,	// (0x00026d38) list_single_cmail_header_caption_pane

0x8d31,	// (0x00026d64) list_single_cmail_header_detail_pane_ParamLimits

0x8d31,	// (0x00026d64) list_single_cmail_header_detail_pane

0xe625,	// (0x0002c658) list_single_cmail_header_caption_pane_t1

0x8d67,	// (0x00026d9a) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d67,	// (0x00026d9a) list_single_cmail_header_detail_pane_g1

0xe63c,	// (0x0002c66f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe63c,	// (0x0002c66f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcf4,	// (0x0002dd27) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcf4,	// (0x0002dd27) list_single_cmail_header_detail_pane_g

0x8d7d,	// (0x00026db0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8d7d,	// (0x00026db0) list_single_cmail_header_detail_pane_t1

0x8db9,	// (0x00026dec) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8db9,	// (0x00026dec) list_single_cmail_header_editor_pane_bg

0xe045,	// (0x0002c078) list_cmail_body_pane_g1

0xe679,	// (0x0002c6ac) list_cmail_body_pane_t1

0xd307,	// (0x0002b33a) list_single_cmail_header_editor_pane_bg_g1

0xa7aa,	// (0x000287dd) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd317,	// (0x0002b34a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd30f,	// (0x0002b342) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd575,	// (0x0002b5a8) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd337,	// (0x0002b36a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd327,	// (0x0002b35a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd32f,	// (0x0002b362) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa78a,	// (0x000287bd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8dd0,	// (0x00026e03) calenote_gesture_pane_ParamLimits

0x8dd0,	// (0x00026e03) calenote_gesture_pane

0x8dea,	// (0x00026e1d) calenote_window_pane_ParamLimits

0x8dea,	// (0x00026e1d) calenote_window_pane

0xe687,	// (0x0002c6ba) popup_note_window_cp01

0x8e02,	// (0x00026e35) calenote_swipe_1_pane_ParamLimits

0x8e02,	// (0x00026e35) calenote_swipe_1_pane

0x8606,	// (0x00026639) calenote_swipe_2_pane_ParamLimits

0x8606,	// (0x00026639) calenote_swipe_2_pane

0xe39e,	// (0x0002c3d1) calenote_swipe_1_pane_g1_ParamLimits

0xe39e,	// (0x0002c3d1) calenote_swipe_1_pane_g1

0xe3ab,	// (0x0002c3de) calenote_swipe_1_pane_g2_ParamLimits

0xe3ab,	// (0x0002c3de) calenote_swipe_1_pane_g2

0x0001,

0x0b8b,	// (0x0001ebbe) calenote_swipe_1_pane_g_ParamLimits

0x0b8b,	// (0x0001ebbe) calenote_swipe_1_pane_g

0xe699,	// (0x0002c6cc) calenote_swipe_1_pane_t1_ParamLimits

0xe699,	// (0x0002c6cc) calenote_swipe_1_pane_t1

0xe39e,	// (0x0002c3d1) calenote_swipe_2_pane_g1_ParamLimits

0xe39e,	// (0x0002c3d1) calenote_swipe_2_pane_g1

0xe6b8,	// (0x0002c6eb) calenote_swipe_2_pane_g2_ParamLimits

0xe6b8,	// (0x0002c6eb) calenote_swipe_2_pane_g2

0x0001,

0x0c6e,	// (0x0001eca1) calenote_swipe_2_pane_g_ParamLimits

0x0c6e,	// (0x0001eca1) calenote_swipe_2_pane_g

0xe6c4,	// (0x0002c6f7) calenote_swipe_2_pane_t1_ParamLimits

0xe6c4,	// (0x0002c6f7) calenote_swipe_2_pane_t1

0x9c48,	// (0x00027c7b) main_mup_navstr_pane

0x614e,	// (0x00024181) main_mup3_pane_t7_ParamLimits

0x614e,	// (0x00024181) main_mup3_pane_t7

0x1bdc,	// (0x0001fc0f) main_mp4_pane_g6_ParamLimits

0x1bdc,	// (0x0001fc0f) main_mp4_pane_g6

0x1ecf,	// (0x0001ff02) main_image3_pane_t4_ParamLimits

0x1ecf,	// (0x0001ff02) main_image3_pane_t4

0x8e15,	// (0x00026e48) popup_navstr_preview_pane_ParamLimits

0x8e15,	// (0x00026e48) popup_navstr_preview_pane

0x8e21,	// (0x00026e54) scroll_navstr_pane_ParamLimits

0x8e21,	// (0x00026e54) scroll_navstr_pane

0x9c48,	// (0x00027c7b) bg_popup_preview_window_pane_cp04

0xe6eb,	// (0x0002c71e) popup_navstr_preview_pane_t1

0x8e2d,	// (0x00026e60) scroll_navstr_pane_g1_ParamLimits

0x8e2d,	// (0x00026e60) scroll_navstr_pane_g1

0x8e3a,	// (0x00026e6d) scroll_navstr_pane_t1_ParamLimits

0x8e3a,	// (0x00026e6d) scroll_navstr_pane_t1

0xe690,	// (0x0002c6c3) bg_button_pane_cp014

0xe690,	// (0x0002c6c3) bg_button_pane_cp030

0x84fa,	// (0x0002652d) list_double_fisheye_pane_g4_ParamLimits

0x84fa,	// (0x0002652d) list_double_fisheye_pane_g4

0x8506,	// (0x00026539) list_double_fisheye_pane_g5_ParamLimits

0x8506,	// (0x00026539) list_double_fisheye_pane_g5

0xd523,	// (0x0002b556) sp_fs_scroll_pane_cp03

0xe476,	// (0x0002c4a9) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe482,	// (0x0002c4b5) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0ba8,	// (0x0001ebdb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe48e,	// (0x0002c4c1) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe61d,	// (0x0002c650) sp_fs_scroll_pane_cp02

0xa497,	// (0x000284ca) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa497,	// (0x000284ca) popup_sp_fs_calendar_preview_list_single_pane

0x9c48,	// (0x00027c7b) main_cam6_pano_pane

0x1586,	// (0x0001f5b9) main_mup3_pane_ParamLimits

0x9c48,	// (0x00027c7b) main_phacti_pane

0x80fe,	// (0x00026131) bg_button_pane_cp11

0x8116,	// (0x00026149) main_mobtv_info_pane_g2_ParamLimits

0x8116,	// (0x00026149) main_mobtv_info_pane_g2

0x0001,

0xfbfd,	// (0x0002dc30) main_mobtv_info_pane_g_ParamLimits

0xfbfd,	// (0x0002dc30) main_mobtv_info_pane_g

0x82c8,	// (0x000262fb) sc_clock_pane_t5_ParamLimits

0x82c8,	// (0x000262fb) sc_clock_pane_t5

0x836b,	// (0x0002639e) main_radioblah_pane_g1_ParamLimits

0xe2e1,	// (0x0002c314) main_radioblah_pane_t3_ParamLimits

0xe2e1,	// (0x0002c314) main_radioblah_pane_t3

0xe2f9,	// (0x0002c32c) main_radioblah_pane_t4_ParamLimits

0xe2f9,	// (0x0002c32c) main_radioblah_pane_t4

0x8389,	// (0x000263bc) main_radioblah_text_pane_ParamLimits

0x8389,	// (0x000263bc) main_radioblah_text_pane

0x8396,	// (0x000263c9) main_radioblah_info_pane_g1_ParamLimits

0x842b,	// (0x0002645e) main_radioblah_info_pane_t4_ParamLimits

0x842b,	// (0x0002645e) main_radioblah_info_pane_t4

0xa391,	// (0x000283c4) main_sp_fs_calendar_pane

0x8e4c,	// (0x00026e7f) main_phacti_pane_g1

0x8e54,	// (0x00026e87) phacti_note_pane_ParamLimits

0x8e54,	// (0x00026e87) phacti_note_pane

0xe702,	// (0x0002c735) phacti_term_pane_ParamLimits

0xe702,	// (0x0002c735) phacti_term_pane

0xe717,	// (0x0002c74a) phacti_note_pane_t1_ParamLimits

0xe717,	// (0x0002c74a) phacti_note_pane_t1

0xe72e,	// (0x0002c761) phacti_term_pane_g1

0xe736,	// (0x0002c769) phacti_term_pane_t1_ParamLimits

0xe736,	// (0x0002c769) phacti_term_pane_t1

0xe760,	// (0x0002c793) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa5ab,	// (0x000285de) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd00,	// (0x0002dd33) popup_sp_fs_calendar_preview_list_single_pane_g

0xe768,	// (0x0002c79b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe768,	// (0x0002c79b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe77d,	// (0x0002c7b0) aid_popup_sp_fs_bg_corner_pane

0xc84f,	// (0x0002a882) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c48,	// (0x00027c7b) popup_sp_fs_calendar_preview_bg_pane

0xe785,	// (0x0002c7b8) popup_sp_fs_calendar_preview_list_pane

0xc43e,	// (0x0002a471) bg_main_sp_fs_cale_pane_ParamLimits

0xc43e,	// (0x0002a471) bg_main_sp_fs_cale_pane

0xe78d,	// (0x0002c7c0) listscroll_cale_mrui_pane_ParamLimits

0xe78d,	// (0x0002c7c0) listscroll_cale_mrui_pane

0xe7a2,	// (0x0002c7d5) listscroll_sp_fs_schedule_track_pane

0xe7ab,	// (0x0002c7de) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7ab,	// (0x0002c7de) main_sp_fs_ctrlbar_pane_cp01

0xe7be,	// (0x0002c7f1) main_sp_fs_ribbon_pane

0xe7c6,	// (0x0002c7f9) popup_sp_fs_cale_preview_window

0x8eb7,	// (0x00026eea) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8eb7,	// (0x00026eea) list_single_sp_fs_schedule_track_pane

0xd3dd,	// (0x0002b410) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd3dd,	// (0x0002b410) bg_sp_fs_highlight_list_pane_cp03

0x8eda,	// (0x00026f0d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8eda,	// (0x00026f0d) list_single_sp_fs_schedule_track_pane_g1

0x8ee6,	// (0x00026f19) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ee6,	// (0x00026f19) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd05,	// (0x0002dd38) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd05,	// (0x0002dd38) list_single_sp_fs_schedule_track_pane_g

0x8ef2,	// (0x00026f25) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ef2,	// (0x00026f25) list_single_sp_fs_schedule_track_pane_t1

0x8f0a,	// (0x00026f3d) sp_fs_schedule_track_pane_ParamLimits

0x8f0a,	// (0x00026f3d) sp_fs_schedule_track_pane

0xe7d8,	// (0x0002c80b) sp_fs_schedule_track_pane_g1

0xe7e0,	// (0x0002c813) sp_fs_schedule_track_pane_g2

0xe7e8,	// (0x0002c81b) sp_fs_schedule_track_pane_g3

0xe7f0,	// (0x0002c823) sp_fs_schedule_track_pane_g4

0xe7f8,	// (0x0002c82b) sp_fs_schedule_track_pane_g5

0x0004,

0x0c82,	// (0x0001ecb5) sp_fs_schedule_track_pane_g

0xd307,	// (0x0002b33a) bg_sp_fs_schedule_viewer_highlight_g1

0xa7aa,	// (0x000287dd) bg_sp_fs_schedule_viewer_highlight_g2

0xd30f,	// (0x0002b342) bg_sp_fs_schedule_viewer_highlight_g3

0xd317,	// (0x0002b34a) bg_sp_fs_schedule_viewer_highlight_g4

0xd575,	// (0x0002b5a8) bg_sp_fs_schedule_viewer_highlight_g5

0xd327,	// (0x0002b35a) bg_sp_fs_schedule_viewer_highlight_g6

0xd32f,	// (0x0002b362) bg_sp_fs_schedule_viewer_highlight_g7

0xd337,	// (0x0002b36a) bg_sp_fs_schedule_viewer_highlight_g8

0xa78a,	// (0x000287bd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd0a,	// (0x0002dd3d) bg_sp_fs_schedule_viewer_highlight_g

0x9c48,	// (0x00027c7b) bg_main_sp_fs_ribbon_pane

0x8f1a,	// (0x00026f4d) main_sp_fs_ribbon_pane_g1

0xe800,	// (0x0002c833) main_sp_fs_ribbon_pane_t1

0x8f23,	// (0x00026f56) main_sp_fs_ribbon_pane_t2

0xe80f,	// (0x0002c842) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd1d,	// (0x0002dd50) main_sp_fs_ribbon_pane_t

0xe81e,	// (0x0002c851) main_sp_fs_ribbon_scheduler_pane

0xe826,	// (0x0002c859) bg_main_sp_fs_ribbon_pane_g1

0xe82f,	// (0x0002c862) bg_main_sp_fs_ribbon_pane_g2

0xe838,	// (0x0002c86b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0ca7,	// (0x0001ecda) bg_main_sp_fs_ribbon_pane_g

0xe840,	// (0x0002c873) main_sp_fs_ribbon_scheduler_pane_g1

0xe849,	// (0x0002c87c) main_sp_fs_ribbon_scheduler_pane_g2

0xe852,	// (0x0002c885) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0cae,	// (0x0001ece1) main_sp_fs_ribbon_scheduler_pane_g

0xe85b,	// (0x0002c88e) list_cale_mrui_pane

0x8f32,	// (0x00026f65) sp_fs_scroll_pane_cp07_ParamLimits

0x8f32,	// (0x00026f65) sp_fs_scroll_pane_cp07

0x8f4e,	// (0x00026f81) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f4e,	// (0x00026f81) bg_sp_fs_schedule_viewer_highlight

0xe868,	// (0x0002c89b) list_single_sp_fs_schedule_track_pane_cp01

0xe870,	// (0x0002c8a3) list_sp_fs_schedule_track_pane

0xe878,	// (0x0002c8ab) sp_fs_scroll_pane_cp06_ParamLimits

0xe878,	// (0x0002c8ab) sp_fs_scroll_pane_cp06

0xc84f,	// (0x0002a882) bgmain_sp_fs_calendar_pane_g1

0x8f5b,	// (0x00026f8e) list_single_cale_mrui_pane_ParamLimits

0x8f5b,	// (0x00026f8e) list_single_cale_mrui_pane

0xe88a,	// (0x0002c8bd) list_single_cale_mrui_row_pane_ParamLimits

0xe88a,	// (0x0002c8bd) list_single_cale_mrui_row_pane

0xe897,	// (0x0002c8ca) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe897,	// (0x0002c8ca) list_single_cale_mrui_row_pane_g1

0xe8dc,	// (0x0002c90f) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8dc,	// (0x0002c90f) list_single_cale_mrui_row_pane_t1

0x8f88,	// (0x00026fbb) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f88,	// (0x00026fbb) list_single_cale_mrui_row_pane_t2

0xe8ee,	// (0x0002c921) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8ee,	// (0x0002c921) list_single_cale_mrui_row_pane_t3

0xe91d,	// (0x0002c950) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe91d,	// (0x0002c950) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd24,	// (0x0002dd57) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd24,	// (0x0002dd57) list_single_cale_mrui_row_pane_t

0x8fee,	// (0x00027021) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8fee,	// (0x00027021) list_single_cmail_header_editor_pane_bg_cp01

0x900e,	// (0x00027041) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x900e,	// (0x00027041) list_single_cmail_header_editor_pane_bg_cp02

0x902a,	// (0x0002705d) main_radioblah_text_pane_t1_ParamLimits

0x902a,	// (0x0002705d) main_radioblah_text_pane_t1

0xe954,	// (0x0002c987) cam6_indi_pane_cp01

0xe95c,	// (0x0002c98f) cam6_mode_pane_cp01

0xe964,	// (0x0002c997) cam6_pano_pane

0xe96d,	// (0x0002c9a0) cam6_zoom_pane_cp01

0xe975,	// (0x0002c9a8) cam6_pano_image_pane

0xe980,	// (0x0002c9b3) cam6_pano_pane_g1

0xe045,	// (0x0002c078) cam6_pano_pane_g2

0xe989,	// (0x0002c9bc) cam6_pano_pane_g3

0xe992,	// (0x0002c9c5) cam6_pano_pane_g4

0xce3e,	// (0x0002ae71) cam6_pano_pane_g5

0xe99b,	// (0x0002c9ce) cam6_pano_pane_g6

0xe94c,	// (0x0002c97f) cam6_pano_pane_g7

0xe9a5,	// (0x0002c9d8) cam6_pano_pane_g8

0xe9ae,	// (0x0002c9e1) cam6_pano_pane_g9

0x0008,

0xfd2d,	// (0x0002dd60) cam6_pano_pane_g

0x9c48,	// (0x00027c7b) main_browser_tag_pane

0xe6e3,	// (0x0002c716) grid_navstr_albumart_pane

0xe9b9,	// (0x0002c9ec) cell_navstr_albumart_pane_ParamLimits

0xe9b9,	// (0x0002c9ec) cell_navstr_albumart_pane

0xe9d9,	// (0x0002ca0c) cell_navstr_albumart_pane_g1

0xc24f,	// (0x0002a282) cell_navstr_albumart_pane_g2

0xc25f,	// (0x0002a292) cell_navstr_albumart_pane_g3

0xc257,	// (0x0002a28a) cell_navstr_albumart_pane_g4

0x0003,

0xfd40,	// (0x0002dd73) cell_navstr_albumart_pane_g

0x9045,	// (0x00027078) bt_list_pane_ParamLimits

0x9045,	// (0x00027078) bt_list_pane

0x9065,	// (0x00027098) bt_list_pane_t1

0x9074,	// (0x000270a7) bt_list_pane_t2

0x0001,

0xfd49,	// (0x0002dd7c) bt_list_pane_t

0x9c48,	// (0x00027c7b) main_cale_prevew_pane

0x9083,	// (0x000270b6) popup_cale_preview_window_ParamLimits

0x9083,	// (0x000270b6) popup_cale_preview_window

0xa391,	// (0x000283c4) bg_popup_preview_window_pane_cp05_ParamLimits

0xa391,	// (0x000283c4) bg_popup_preview_window_pane_cp05

0xe9e1,	// (0x0002ca14) list_cale_preview_pane_ParamLimits

0xe9e1,	// (0x0002ca14) list_cale_preview_pane

0x909c,	// (0x000270cf) list_double_cale_preview_pane_ParamLimits

0x909c,	// (0x000270cf) list_double_cale_preview_pane

0x90ae,	// (0x000270e1) list_single_cale_preview_pane_ParamLimits

0x90ae,	// (0x000270e1) list_single_cale_preview_pane

0x90c4,	// (0x000270f7) list_single_cale_preview_pane_g1

0x90cc,	// (0x000270ff) list_single_cale_preview_pane_t1_ParamLimits

0x90cc,	// (0x000270ff) list_single_cale_preview_pane_t1

0x90e1,	// (0x00027114) list_double_cale_preview_pane_g1

0x90e9,	// (0x0002711c) list_double_cale_preview_pane_t1_ParamLimits

0x90e9,	// (0x0002711c) list_double_cale_preview_pane_t1

0x90fe,	// (0x00027131) list_double_cale_preview_pane_t2_ParamLimits

0x90fe,	// (0x00027131) list_double_cale_preview_pane_t2

0x0001,

0xfd4e,	// (0x0002dd81) list_double_cale_preview_pane_t_ParamLimits

0xfd4e,	// (0x0002dd81) list_double_cale_preview_pane_t

0x9c48,	// (0x00027c7b) main_ezdial_pane

0xa391,	// (0x000283c4) main_sp_fs_email_pane_ParamLimits

0x868a,	// (0x000266bd) cmail_ddmenu_btn01_pane_ParamLimits

0x868a,	// (0x000266bd) cmail_ddmenu_btn01_pane

0x86a7,	// (0x000266da) cmail_ddmenu_btn02_pane_ParamLimits

0x86a7,	// (0x000266da) cmail_ddmenu_btn02_pane

0x86c5,	// (0x000266f8) cmail_ddmenu_btn03_pane_ParamLimits

0x86c5,	// (0x000266f8) cmail_ddmenu_btn03_pane

0x86f3,	// (0x00026726) main_sp_fs_ctrlbar_pane_ParamLimits

0x8709,	// (0x0002673c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8ce5,	// (0x00026d18) list_cmail_body_pane_ParamLimits

0xe633,	// (0x0002c666) bg_button_pane_cp12

0xe648,	// (0x0002c67b) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe648,	// (0x0002c67b) list_single_cmail_header_detail_pane_g3

0xe655,	// (0x0002c688) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe655,	// (0x0002c688) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcfb,	// (0x0002dd2e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcfb,	// (0x0002dd2e) list_single_cmail_header_detail_pane_t

0xe74b,	// (0x0002c77e) phacti_term_pane_t2_ParamLimits

0xe74b,	// (0x0002c77e) phacti_term_pane_t2

0x0001,

0x0c73,	// (0x0001eca6) phacti_term_pane_t_ParamLimits

0x0c73,	// (0x0001eca6) phacti_term_pane_t

0xe9ed,	// (0x0002ca20) aid_size_list_single_double

0x9116,	// (0x00027149) popup_ezdial_listscroll_window

0x9137,	// (0x0002716a) popup_number_entry_window_cp01

0xafab,	// (0x00028fde) bg_popup_call_pane_cp09

0xe9f9,	// (0x0002ca2c) ezdial_list_pane

0xea01,	// (0x0002ca34) scroll_pane_cp23

0xc62b,	// (0x0002a65e) bg_button_pane_cp028_ParamLimits

0xc62b,	// (0x0002a65e) bg_button_pane_cp028

0x9145,	// (0x00027178) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9145,	// (0x00027178) cmail_ddmenu_btn01_pane_g1

0x9155,	// (0x00027188) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9155,	// (0x00027188) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd53,	// (0x0002dd86) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd53,	// (0x0002dd86) cmail_ddmenu_btn01_pane_g

0xea09,	// (0x0002ca3c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea09,	// (0x0002ca3c) cmail_ddmenu_btn01_pane_t1

0xc43e,	// (0x0002a471) bg_button_pane_cp029_ParamLimits

0xc43e,	// (0x0002a471) bg_button_pane_cp029

0x9161,	// (0x00027194) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9161,	// (0x00027194) cmail_ddmenu_btn02_pane_g1

0x9179,	// (0x000271ac) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9179,	// (0x000271ac) cmail_ddmenu_btn02_pane_t1

0xd3dd,	// (0x0002b410) bg_button_pane_cp031_ParamLimits

0xd3dd,	// (0x0002b410) bg_button_pane_cp031

0x9161,	// (0x00027194) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9161,	// (0x00027194) cmail_ddmenu_btn03_pane_g1

0x9179,	// (0x000271ac) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9179,	// (0x000271ac) cmail_ddmenu_btn03_pane_t1

0x69b5,	// (0x000249e8) cell_dialer2_keypad_pane_t1_ParamLimits

0x69cf,	// (0x00024a02) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x69cf,	// (0x00024a02) cell_dialer2_keypad_pane_t1_copy1

0x7f83,	// (0x00025fb6) ncimui_group_button_pane

0xa391,	// (0x000283c4) main_sp_fs_calendar_pane_ParamLimits

0x8d05,	// (0x00026d38) list_single_cmail_header_caption_pane_ParamLimits

0xd8c9,	// (0x0002b8fc) aid_recal_txt_sm_pane

0x9c48,	// (0x00027c7b) mian_recal_day_pane

0xe7c6,	// (0x0002c7f9) popup_sp_fs_cale_preview_window_ParamLimits

0xea1f,	// (0x0002ca52) list_recal_day_pane

0xea61,	// (0x0002ca94) list_single_recal_day_pane_ParamLimits

0xea61,	// (0x0002ca94) list_single_recal_day_pane

0xea73,	// (0x0002caa6) list_single_recal_day_pane_g1_ParamLimits

0xea73,	// (0x0002caa6) list_single_recal_day_pane_g1

0xea7f,	// (0x0002cab2) list_single_recal_day_pane_g2_ParamLimits

0xea7f,	// (0x0002cab2) list_single_recal_day_pane_g2

0xea8f,	// (0x0002cac2) list_single_recal_day_pane_g3_ParamLimits

0xea8f,	// (0x0002cac2) list_single_recal_day_pane_g3

0x919d,	// (0x000271d0) list_single_recal_day_pane_g4_ParamLimits

0x919d,	// (0x000271d0) list_single_recal_day_pane_g4

0xea9b,	// (0x0002cace) list_single_recal_day_pane_g5_ParamLimits

0xea9b,	// (0x0002cace) list_single_recal_day_pane_g5

0xeaab,	// (0x0002cade) list_single_recal_day_pane_g6_ParamLimits

0xeaab,	// (0x0002cade) list_single_recal_day_pane_g6

0x0004,

0xfd62,	// (0x0002dd95) list_single_recal_day_pane_g_ParamLimits

0xfd62,	// (0x0002dd95) list_single_recal_day_pane_g

0xead1,	// (0x0002cb04) list_single_recal_day_pane_t1

0xeae3,	// (0x0002cb16) list_single_recal_day_pane_t2

0x0001,

0x0d05,	// (0x0001ed38) list_single_recal_day_pane_t

0x91bd,	// (0x000271f0) ncimui_query_button_pane_ParamLimits

0x91bd,	// (0x000271f0) ncimui_query_button_pane

0x91cd,	// (0x00027200) ncimui_query_button_pane_t1_ParamLimits

0x91cd,	// (0x00027200) ncimui_query_button_pane_t1

0xeaf5,	// (0x0002cb28) ncimui_query_button_pane_t2_ParamLimits

0xeaf5,	// (0x0002cb28) ncimui_query_button_pane_t2

0x0001,

0xfd6d,	// (0x0002dda0) ncimui_query_button_pane_t_ParamLimits

0xfd6d,	// (0x0002dda0) ncimui_query_button_pane_t

0x91e0,	// (0x00027213) query_button_pane_ParamLimits

0x91e0,	// (0x00027213) query_button_pane

0x9c48,	// (0x00027c7b) bg_button_pane_cp0028

0xeb08,	// (0x0002cb3b) query_button_pane_t1

0x15a2,	// (0x0001f5d5) main_tport_pane_ParamLimits

0x8bef,	// (0x00026c22) bg_popup_window_pane_cp01_ParamLimits

0x8bef,	// (0x00026c22) bg_popup_window_pane_cp01

0x8bfd,	// (0x00026c30) heading_pane_cp08_ParamLimits

0x8bfd,	// (0x00026c30) heading_pane_cp08

0x8c0b,	// (0x00026c3e) heading_pane_cp07_ParamLimits

0x8c0b,	// (0x00026c3e) heading_pane_cp07

0x8c7a,	// (0x00026cad) cell_tport_appsw_pane_g2

0x0002,

0xfce8,	// (0x0002dd1b) cell_tport_appsw_pane_g

0xb126,	// (0x00029159) input_candi_list_open_g1

0xa96d,	// (0x000289a0) list_cale_time_pane_g6_ParamLimits

0xa96d,	// (0x000289a0) list_cale_time_pane_g6

0x5bb3,	// (0x00023be6) aid_size_touch_calib_1_ParamLimits

0x5bb3,	// (0x00023be6) aid_size_touch_calib_1

0x5bbf,	// (0x00023bf2) aid_size_touch_calib_2_ParamLimits

0x5bbf,	// (0x00023bf2) aid_size_touch_calib_2

0x5bcd,	// (0x00023c00) aid_size_touch_calib_3_ParamLimits

0x5bcd,	// (0x00023c00) aid_size_touch_calib_3

0x5bdd,	// (0x00023c10) aid_size_touch_calib_4_ParamLimits

0x5bdd,	// (0x00023c10) aid_size_touch_calib_4

0x5beb,	// (0x00023c1e) main_touch_calib_button_group_pane_ParamLimits

0x5beb,	// (0x00023c1e) main_touch_calib_button_group_pane

0x5bf9,	// (0x00023c2c) main_touch_calib_pane_g1_ParamLimits

0x5c05,	// (0x00023c38) main_touch_calib_pane_g2_ParamLimits

0x5c11,	// (0x00023c44) main_touch_calib_pane_g3_ParamLimits

0x5c1d,	// (0x00023c50) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0002d784) main_touch_calib_pane_g_ParamLimits

0x5c29,	// (0x00023c5c) main_touch_calib_pane_t1_ParamLimits

0x5c42,	// (0x00023c75) main_touch_calib_pane_t2_ParamLimits

0x5c5b,	// (0x00023c8e) main_touch_calib_pane_t3_ParamLimits

0x5c71,	// (0x00023ca4) main_touch_calib_pane_t4_ParamLimits

0x5c87,	// (0x00023cba) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0002d78d) main_touch_calib_pane_t_ParamLimits

0xcbde,	// (0x0002ac11) list_single_fp_cale_pane_g3_ParamLimits

0xcbde,	// (0x0002ac11) list_single_fp_cale_pane_g3

0x1586,	// (0x0001f5b9) bg_button_pane_cp012_ParamLimits

0x1586,	// (0x0001f5b9) bg_vkb2_func_pane_cp03_ParamLimits

0x24da,	// (0x0002050d) cell_vitu2_function_top_pane_g1_ParamLimits

0x1586,	// (0x0001f5b9) bg_vkb2_func_pane_cp04_ParamLimits

0x7f0b,	// (0x00025f3e) main_ncimui_button_group_pane_ParamLimits

0x7f0b,	// (0x00025f3e) main_ncimui_button_group_pane

0x7f71,	// (0x00025fa4) main_ncimui_pane_t3_ParamLimits

0x7f71,	// (0x00025fa4) main_ncimui_pane_t3

0xe6f9,	// (0x0002c72c) phacti_button_group_pane

0xe9ed,	// (0x0002ca20) aid_size_list_single_double_ParamLimits

0x9116,	// (0x00027149) popup_ezdial_listscroll_window_ParamLimits

0x9137,	// (0x0002716a) popup_number_entry_window_cp01_ParamLimits

0x91ed,	// (0x00027220) phacti_button_pane_ParamLimits

0x91ed,	// (0x00027220) phacti_button_pane

0x9c48,	// (0x00027c7b) bg_button_pane_cp14

0xeb16,	// (0x0002cb49) phacti_button_pane_t1

0x91fe,	// (0x00027231) main_touch_calib_button_pane_ParamLimits

0x91fe,	// (0x00027231) main_touch_calib_button_pane

0xa385,	// (0x000283b8) bg_button_pane_cp18_ParamLimits

0xa385,	// (0x000283b8) bg_button_pane_cp18

0xeb24,	// (0x0002cb57) main_touch_calib_button_pane_t1_ParamLimits

0xeb24,	// (0x0002cb57) main_touch_calib_button_pane_t1

0xeb3a,	// (0x0002cb6d) main_touch_calib_button_pane_t2_ParamLimits

0xeb3a,	// (0x0002cb6d) main_touch_calib_button_pane_t2

0x0001,

0x0d0f,	// (0x0001ed42) main_touch_calib_button_pane_t_ParamLimits

0x0d0f,	// (0x0001ed42) main_touch_calib_button_pane_t

0x9c48,	// (0x00027c7b) cell_ncimui_button_pane

0x9c48,	// (0x00027c7b) bg_button_pane_cp032

0xeb58,	// (0x0002cb8b) cell_ncimui_button_pane_t1

0x1de2,	// (0x0001fe15) image3_infobar_pane_ParamLimits

0x1de2,	// (0x0001fe15) image3_infobar_pane

0x82ea,	// (0x0002631d) fs_bigclock_status_pane_ParamLimits

0x82ea,	// (0x0002631d) fs_bigclock_status_pane

0x82f7,	// (0x0002632a) main_fs_bigclock_clock_pane_ParamLimits

0x82f7,	// (0x0002632a) main_fs_bigclock_clock_pane

0x8311,	// (0x00026344) main_fs_bigclock_indi_pane_ParamLimits

0x8311,	// (0x00026344) main_fs_bigclock_indi_pane

0x8339,	// (0x0002636c) main_fs_bigclock_swipe_pane_ParamLimits

0x8339,	// (0x0002636c) main_fs_bigclock_swipe_pane

0x9c48,	// (0x00027c7b) main_fs_clock_dumped_data

0xe152,	// (0x0002c185) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe152,	// (0x0002c185) list_single_fs_bigclock_indicator_pane_g1

0xe16d,	// (0x0002c1a0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe16d,	// (0x0002c1a0) list_single_fs_bigclock_indicator_pane_g2

0xe187,	// (0x0002c1ba) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe187,	// (0x0002c1ba) list_single_fs_bigclock_indicator_pane_g3

0xe1a1,	// (0x0002c1d4) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe1a1,	// (0x0002c1d4) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0b3c,	// (0x0001eb6f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0b3c,	// (0x0001eb6f) list_single_fs_bigclock_indicator_pane_g

0xe1cc,	// (0x0002c1ff) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe1cc,	// (0x0002c1ff) list_single_fs_bigclock_indicator_pane_t1

0xe1f4,	// (0x0002c227) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe1f4,	// (0x0002c227) list_single_fs_bigclock_indicator_pane_t2

0xe21c,	// (0x0002c24f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe21c,	// (0x0002c24f) list_single_fs_bigclock_indicator_pane_t3

0xe244,	// (0x0002c277) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe244,	// (0x0002c277) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0b47,	// (0x0001eb7a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0b47,	// (0x0001eb7a) list_single_fs_bigclock_indicator_pane_t

0xeb66,	// (0x0002cb99) image3_infobar_fav_pane_ParamLimits

0xeb66,	// (0x0002cb99) image3_infobar_fav_pane

0xeb76,	// (0x0002cba9) image3_infobar_loc_pane_ParamLimits

0xeb76,	// (0x0002cba9) image3_infobar_loc_pane

0xeb8a,	// (0x0002cbbd) image3_infobar_time_pane_ParamLimits

0xeb8a,	// (0x0002cbbd) image3_infobar_time_pane

0xc84f,	// (0x0002a882) image3_infobar_time_pane_g1

0xeb9a,	// (0x0002cbcd) image3_infobar_time_pane_t1

0xc84f,	// (0x0002a882) image3_infobar_loc_pane_g1

0xeba8,	// (0x0002cbdb) image3_infobar_loc_pane_g2

0x0001,

0xfd72,	// (0x0002dda5) image3_infobar_loc_pane_g

0xebb0,	// (0x0002cbe3) image3_infobar_loc_pane_t1

0xc84f,	// (0x0002a882) image3_infobar_fav_pane_g1

0xebbe,	// (0x0002cbf1) image3_infobar_fav_pane_g2

0x0001,

0xfd77,	// (0x0002ddaa) image3_infobar_fav_pane_g

0xebc6,	// (0x0002cbf9) fs_bigclock_status_battery_pane

0xebcf,	// (0x0002cc02) fs_bigclock_status_signal_pane

0xebd8,	// (0x0002cc0b) fs_bigclock_status_title_pane

0xebe1,	// (0x0002cc14) fs_bigclock_status_signal_pane_g1

0xebea,	// (0x0002cc1d) fs_bigclock_status_signal_pane_g2

0x0001,

0x0d1e,	// (0x0001ed51) fs_bigclock_status_signal_pane_g

0xebf2,	// (0x0002cc25) fs_bigclock_status_battery_pane_g1

0xebfb,	// (0x0002cc2e) fs_bigclock_status_battery_pane_g2

0x0001,

0x0d23,	// (0x0001ed56) fs_bigclock_status_battery_pane_g

0xec03,	// (0x0002cc36) fs_bigclock_status_title_pane_t1

0xc84f,	// (0x0002a882) main_fs_bigclock_clock_pane_g1

0xec11,	// (0x0002cc44) main_fs_bigclock_clock_pane_g2

0xec1a,	// (0x0002cc4d) main_fs_bigclock_clock_pane_g3

0xec1a,	// (0x0002cc4d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd7c,	// (0x0002ddaf) main_fs_bigclock_clock_pane_g

0xec22,	// (0x0002cc55) main_fs_bigclock_clock_pane_t1

0x920e,	// (0x00027241) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd85,	// (0x0002ddb8) main_fs_bigclock_clock_pane_t

0xec30,	// (0x0002cc63) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec30,	// (0x0002cc63) list_single_fs_bigclock_indicator_pane

0xec41,	// (0x0002cc74) list_single_fs_bigclock_pane_ParamLimits

0xec41,	// (0x0002cc74) list_single_fs_bigclock_pane

0xec67,	// (0x0002cc9a) main_fs_bigclock_indicator_pane_t1

0xec76,	// (0x0002cca9) list_single_fs_bigclock_pane_g1

0xec7e,	// (0x0002ccb1) list_single_fs_bigclock_pane_t1

0xc84f,	// (0x0002a882) main_fs_bigclock_swipe_pane_g1

0xecc1,	// (0x0002ccf4) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd91,	// (0x0002ddc4) main_fs_bigclock_swipe_pane_g

0xecc9,	// (0x0002ccfc) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc9,	// (0x0002ccfc) main_fs_bigclock_swipe_pane_t1

0x46c4,	// (0x000226f7) call_type_pane_ParamLimits

0x9c48,	// (0x00027c7b) main_btmg_pane

0xe8c3,	// (0x0002c8f6) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8c3,	// (0x0002c8f6) list_single_cale_mrui_row_pane_g2

0x0002,

0x0cb5,	// (0x0001ece8) list_single_cale_mrui_row_pane_g_ParamLimits

0x0cb5,	// (0x0001ece8) list_single_cale_mrui_row_pane_g

0xea48,	// (0x0002ca7b) list_recal_vselct_arw_lo_pane

0xea50,	// (0x0002ca83) list_recal_vselct_arw_up_pane

0xea58,	// (0x0002ca8b) list_recal_vselct_pane

0x9261,	// (0x00027294) btmg_button_pane

0x926d,	// (0x000272a0) main_btmg_pane_g1

0x9c48,	// (0x00027c7b) bg_button_pane_cp044

0xece6,	// (0x0002cd19) btmg_button_pane_t1

0xc42a,	// (0x0002a45d) aid_listscroll_gen

0xa391,	// (0x000283c4) main_cntbar_detail_pane

0xe615,	// (0x0002c648) list_cmail_folder_pane

0xd523,	// (0x0002b556) sp_fs_scroll_pane_cp03_ParamLimits

0x8d05,	// (0x00026d38) list_single_fs_dyc_pane_cp01_ParamLimits

0x8d05,	// (0x00026d38) list_single_fs_dyc_pane_cp01

0xecf4,	// (0x0002cd27) aid_size_cmail_indent

0xecfd,	// (0x0002cd30) list_single_dyc_row_pane_cp01

0x9295,	// (0x000272c8) cntbar_detail_list_pane_ParamLimits

0x9295,	// (0x000272c8) cntbar_detail_list_pane

0x92cf,	// (0x00027302) main_cntbar_detail_cont_pane_ParamLimits

0x92cf,	// (0x00027302) main_cntbar_detail_cont_pane

0x45db,	// (0x0002260e) scroll_pane_cp032_ParamLimits

0x45db,	// (0x0002260e) scroll_pane_cp032

0x92db,	// (0x0002730e) cntbar_detail_list_event_pane_ParamLimits

0x92db,	// (0x0002730e) cntbar_detail_list_event_pane

0x92a1,	// (0x000272d4) cntbar_detail_list_shct_pane

0xa7f8,	// (0x0002882b) aid_list_gen

0xed06,	// (0x0002cd39) aid_scroll

0xed0f,	// (0x0002cd42) aid_size_touch_scroll_bar

0xe311,	// (0x0002c344) aid_list_double

0x92ef,	// (0x00027322) aid_list_single

0x7726,	// (0x00025759) aid_list_single_lg

0x92f8,	// (0x0002732b) aid_list_z_g_a_sm

0x9300,	// (0x00027333) aid_list_z_g_d

0x9308,	// (0x0002733b) aid_txt_z_prm

0x9316,	// (0x00027349) aid_txt_z_prm_cp01

0x9324,	// (0x00027357) aid_txt_z_sec

0x9332,	// (0x00027365) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9332,	// (0x00027365) main_cntbar_detail_cont_pane_g1

0x933f,	// (0x00027372) main_cntbar_detail_cont_pane_g2_ParamLimits

0x933f,	// (0x00027372) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd96,	// (0x0002ddc9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd96,	// (0x0002ddc9) main_cntbar_detail_cont_pane_g

0xed18,	// (0x0002cd4b) main_cntbar_detail_cont_pane_t1

0xed26,	// (0x0002cd59) main_cntbar_detail_cont_pane_t2

0xed34,	// (0x0002cd67) main_cntbar_detail_cont_pane_t3

0x0002,

0x0d4c,	// (0x0001ed7f) main_cntbar_detail_cont_pane_t

0x934b,	// (0x0002737e) cell_cntbar_detail_list_shct_pane_ParamLimits

0x934b,	// (0x0002737e) cell_cntbar_detail_list_shct_pane

0xed42,	// (0x0002cd75) cntbar_detail_list_shct_pane_g1

0xed4b,	// (0x0002cd7e) cntbar_detail_list_shct_pane_g2

0x0001,

0x0d53,	// (0x0001ed86) cntbar_detail_list_shct_pane_g

0x935f,	// (0x00027392) cntbar_detail_list_event_pane_g1_ParamLimits

0x935f,	// (0x00027392) cntbar_detail_list_event_pane_g1

0x936b,	// (0x0002739e) cntbar_detail_list_event_pane_g2_ParamLimits

0x936b,	// (0x0002739e) cntbar_detail_list_event_pane_g2

0x0005,

0xfd9b,	// (0x0002ddce) cntbar_detail_list_event_pane_g_ParamLimits

0xfd9b,	// (0x0002ddce) cntbar_detail_list_event_pane_g

0x93d7,	// (0x0002740a) cntbar_detail_list_event_pane_t1_ParamLimits

0x93d7,	// (0x0002740a) cntbar_detail_list_event_pane_t1

0x93ec,	// (0x0002741f) cntbar_detail_list_event_pane_t2_ParamLimits

0x93ec,	// (0x0002741f) cntbar_detail_list_event_pane_t2

0x0002,

0xfda8,	// (0x0002dddb) cntbar_detail_list_event_pane_t_ParamLimits

0xfda8,	// (0x0002dddb) cntbar_detail_list_event_pane_t

0xc84f,	// (0x0002a882) cell_cntbar_detail_list_shct_pane_g1

0xaf63,	// (0x00028f96) navi_pane_mv_g3

0xa391,	// (0x000283c4) main_cntbar_detail_pane_ParamLimits

0x9c48,	// (0x00027c7b) main_notif_wgt_pane

0x1b23,	// (0x0001fb56) aid_tch_main_mp4_pane_g4

0x1d58,	// (0x0001fd8b) popup_slider_window_cp02

0xea3e,	// (0x0002ca71) list_recal_day_event_pane

0x9275,	// (0x000272a8) cntbar_detail_btn_pane_ParamLimits

0x9275,	// (0x000272a8) cntbar_detail_btn_pane

0x9285,	// (0x000272b8) cntbar_detail_btn_pane_cp01_ParamLimits

0x9285,	// (0x000272b8) cntbar_detail_btn_pane_cp01

0x92a1,	// (0x000272d4) cntbar_detail_list_shct_pane_ParamLimits

0x92ad,	// (0x000272e0) cntbar_detail_pane_g1_ParamLimits

0x92ad,	// (0x000272e0) cntbar_detail_pane_g1

0x92b9,	// (0x000272ec) cntbar_detail_pane_t1_ParamLimits

0x92b9,	// (0x000272ec) cntbar_detail_pane_t1

0x9377,	// (0x000273aa) cntbar_detail_list_event_pane_g3_ParamLimits

0x9377,	// (0x000273aa) cntbar_detail_list_event_pane_g3

0x938f,	// (0x000273c2) cntbar_detail_list_event_pane_g4_ParamLimits

0x938f,	// (0x000273c2) cntbar_detail_list_event_pane_g4

0x93a7,	// (0x000273da) cntbar_detail_list_event_pane_g5_ParamLimits

0x93a7,	// (0x000273da) cntbar_detail_list_event_pane_g5

0x93bf,	// (0x000273f2) cntbar_detail_list_event_pane_g6_ParamLimits

0x93bf,	// (0x000273f2) cntbar_detail_list_event_pane_g6

0x9401,	// (0x00027434) cntbar_detail_list_event_pane_t3_ParamLimits

0x9401,	// (0x00027434) cntbar_detail_list_event_pane_t3

0x9413,	// (0x00027446) popup_notif_wgt_window_ParamLimits

0x9413,	// (0x00027446) popup_notif_wgt_window

0x9423,	// (0x00027456) popup_submenu_window_cp01_ParamLimits

0x9423,	// (0x00027456) popup_submenu_window_cp01

0xafab,	// (0x00028fde) bg_popup_window_pane_cp10

0xed54,	// (0x0002cd87) listscroll_notif_wgt_pane

0xed66,	// (0x0002cd99) list_notif_wgt_window

0xed6f,	// (0x0002cda2) scroll_pane_cp033

0x9435,	// (0x00027468) list_notif_wgt_row_pane_ParamLimits

0x9435,	// (0x00027468) list_notif_wgt_row_pane

0xed78,	// (0x0002cdab) aid_size_list_notif_wgt_del

0xed85,	// (0x0002cdb8) list_notif_wgt_row_pane_g1

0xed91,	// (0x0002cdc4) list_notif_wgt_row_pane_g2

0xeda5,	// (0x0002cdd8) list_notif_wgt_row_pane_g3

0x0002,

0x0d6c,	// (0x0001ed9f) list_notif_wgt_row_pane_g

0xedb2,	// (0x0002cde5) list_notif_wgt_row_pane_t1

0xedc8,	// (0x0002cdfb) list_notif_wgt_row_pane_t2

0xedda,	// (0x0002ce0d) list_notif_wgt_row_pane_t3

0x0002,

0x0d73,	// (0x0001eda6) list_notif_wgt_row_pane_t

0xd58f,	// (0x0002b5c2) list_recal_day_event_pane_g1

0xedec,	// (0x0002ce1f) list_recal_day_event_pane_t1

0x9c48,	// (0x00027c7b) bg_button_pane_cp045

0x9447,	// (0x0002747a) cntbar_detail_btn_pane_t1

0xc43e,	// (0x0002a471) main_callh_pane_ParamLimits

0xc43e,	// (0x0002a471) main_callh_pane

0x9c48,	// (0x00027c7b) main_coverflow0_pane

0x9c48,	// (0x00027c7b) main_wgtman_pane

0x8351,	// (0x00026384) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8351,	// (0x00026384) main_fs_bigclock_unlock_btn_pane

0x8c72,	// (0x00026ca5) bg_button_pane_cp16

0x8c82,	// (0x00026cb5) cell_tport_appsw_pane_g3

0x9455,	// (0x00027488) cf0_flow_pane_ParamLimits

0x9455,	// (0x00027488) cf0_flow_pane

0xedfb,	// (0x0002ce2e) listscroll_cf0_pane

0xee06,	// (0x0002ce39) main_cf0_pane_g1

0x9464,	// (0x00027497) main_cf0_pane_t1_ParamLimits

0x9464,	// (0x00027497) main_cf0_pane_t1

0x9478,	// (0x000274ab) main_cf0_pane_t2_ParamLimits

0x9478,	// (0x000274ab) main_cf0_pane_t2

0x0001,

0xfdaf,	// (0x0002dde2) main_cf0_pane_t_ParamLimits

0xfdaf,	// (0x0002dde2) main_cf0_pane_t

0xee18,	// (0x0002ce4b) scroll_pane_cp11

0x948c,	// (0x000274bf) cf0_flow_pane_g1

0x9494,	// (0x000274c7) cf0_flow_pane_g2

0x0001,

0xfdb4,	// (0x0002dde7) cf0_flow_pane_g

0x949c,	// (0x000274cf) cf0_flow_pane_t1

0x9c48,	// (0x00027c7b) main_call6_pane

0x9c48,	// (0x00027c7b) main_calllock_pane

0x94aa,	// (0x000274dd) call6_btn_grp_pane_ParamLimits

0x94aa,	// (0x000274dd) call6_btn_grp_pane

0x94b9,	// (0x000274ec) call6_pane_g1_ParamLimits

0x94b9,	// (0x000274ec) call6_pane_g1

0x94c8,	// (0x000274fb) popup_call6_1st_window_ParamLimits

0x94c8,	// (0x000274fb) popup_call6_1st_window

0x94d6,	// (0x00027509) popup_call6_2nd_window_ParamLimits

0x94d6,	// (0x00027509) popup_call6_2nd_window

0x94e4,	// (0x00027517) cell_call6_btn_pane_ParamLimits

0x94e4,	// (0x00027517) cell_call6_btn_pane

0xafab,	// (0x00028fde) bg_popup_call2_in_pane_cp03

0xee23,	// (0x0002ce56) popup_call6_1st_window_g1

0xee2b,	// (0x0002ce5e) popup_call6_1st_window_g2

0xee33,	// (0x0002ce66) popup_call6_1st_window_g3

0x0002,

0x0d89,	// (0x0001edbc) popup_call6_1st_window_g

0xee3b,	// (0x0002ce6e) popup_call6_1st_window_t1

0xee4a,	// (0x0002ce7d) popup_call6_1st_window_t2

0xee5a,	// (0x0002ce8d) popup_call6_1st_window_t3

0x0002,

0x0d90,	// (0x0001edc3) popup_call6_1st_window_t

0xafab,	// (0x00028fde) bg_popup_call2_in_pane_cp04

0xee23,	// (0x0002ce56) popup_call6_2nd_window_g1

0xee2b,	// (0x0002ce5e) popup_call6_2nd_window_g2

0xee33,	// (0x0002ce66) popup_call6_2nd_window_g3

0x0002,

0x0d89,	// (0x0001edbc) popup_call6_2nd_window_g

0xee3b,	// (0x0002ce6e) popup_call6_2nd_window_t1

0x9c48,	// (0x00027c7b) bg_button_pane_cp15

0xee6a,	// (0x0002ce9d) cell_call6_btn_pane_g1

0xee73,	// (0x0002cea6) cell_call6_btn_pane_t1

0x94f3,	// (0x00027526) listscroll_wgtman_pane_ParamLimits

0x94f3,	// (0x00027526) listscroll_wgtman_pane

0x950f,	// (0x00027542) wgtman_btn_pane_ParamLimits

0x950f,	// (0x00027542) wgtman_btn_pane

0xad6a,	// (0x00028d9d) aid_scroll_copy1

0xee82,	// (0x0002ceb5) list_wgtman_pane

0x9544,	// (0x00027577) wgtman_btn_pane_g1_ParamLimits

0x9544,	// (0x00027577) wgtman_btn_pane_g1

0x956c,	// (0x0002759f) wgtman_btn_pane_t1_ParamLimits

0x956c,	// (0x0002759f) wgtman_btn_pane_t1

0xee8c,	// (0x0002cebf) wgtman_btn_pane_t2_ParamLimits

0xee8c,	// (0x0002cebf) wgtman_btn_pane_t2

0x0001,

0xfdb9,	// (0x0002ddec) wgtman_btn_pane_t_ParamLimits

0xfdb9,	// (0x0002ddec) wgtman_btn_pane_t

0x95a3,	// (0x000275d6) listrow_wgtman_pane_ParamLimits

0x95a3,	// (0x000275d6) listrow_wgtman_pane

0x95be,	// (0x000275f1) listrow_wgtman_pane_g1

0x95cb,	// (0x000275fe) listrow_wgtman_pane_g2

0x0001,

0xfdbe,	// (0x0002ddf1) listrow_wgtman_pane_g

0x95e9,	// (0x0002761c) listrow_wgtman_pane_t1

0x9601,	// (0x00027634) listrow_wgtman_pane_t2

0x0001,

0xfdc3,	// (0x0002ddf6) listrow_wgtman_pane_t

0x9627,	// (0x0002765a) wait_bar_pane_cp09

0xeea3,	// (0x0002ced6) main_calllock_btn_pane

0xeead,	// (0x0002cee0) main_calllock_pane_g1

0x9c48,	// (0x00027c7b) bg_button_pane_cp17

0xeeb9,	// (0x0002ceec) main_calllock_btn_pane_g1

0xeec2,	// (0x0002cef5) main_calllock_btn_pane_t1

0x9c48,	// (0x00027c7b) main_dialer3_pane

0x9c48,	// (0x00027c7b) main_fmrd2_pane

0xc84f,	// (0x0002a882) main_fs_bigclock_unlock_btn_pane_g1

0xeed9,	// (0x0002cf0c) main_fs_bigclock_unlock_btn_pane_t1

0x9639,	// (0x0002766c) area_fmrd2_info_pane_ParamLimits

0x9639,	// (0x0002766c) area_fmrd2_info_pane

0x9647,	// (0x0002767a) area_fmrd2_visual_pane_ParamLimits

0x9647,	// (0x0002767a) area_fmrd2_visual_pane

0x9655,	// (0x00027688) fmrd2_indi_pane_ParamLimits

0x9655,	// (0x00027688) fmrd2_indi_pane

0x9662,	// (0x00027695) area_fmrd2_visual_pane_g1

0x966a,	// (0x0002769d) area_fmrd2_visual_pane_t1

0x967a,	// (0x000276ad) area_fmrd2_visual_pane_t2

0x968a,	// (0x000276bd) area_fmrd2_visual_pane_t3

0x0002,

0xfdcd,	// (0x0002de00) area_fmrd2_visual_pane_t

0x969a,	// (0x000276cd) area_fmrd2_info_pane_g1

0x96a2,	// (0x000276d5) area_fmrd2_info_pane_t1

0x96b2,	// (0x000276e5) area_fmrd2_info_pane_t2

0x96c2,	// (0x000276f5) area_fmrd2_info_pane_t3

0x96d2,	// (0x00027705) area_fmrd2_info_pane_t4

0x0003,

0xfdd4,	// (0x0002de07) area_fmrd2_info_pane_t

0x96e0,	// (0x00027713) fmrd2_indi_pane_t1

0x96f0,	// (0x00027723) fmrd2_indi_pane_t2

0x9700,	// (0x00027733) fmrd2_indi_pane_t3

0x0002,

0xfddd,	// (0x0002de10) fmrd2_indi_pane_t

0xe1b0,	// (0x0002c1e3) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe1b0,	// (0x0002c1e3) list_single_fs_bigclock_indicator_pane_g5

0xe260,	// (0x0002c293) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe260,	// (0x0002c293) list_single_fs_bigclock_indicator_pane_t5

0x8e6a,	// (0x00026e9d) aid_cell_bcale_month_pane_ParamLimits

0x8e6a,	// (0x00026e9d) aid_cell_bcale_month_pane

0x8e88,	// (0x00026ebb) bcale_month_pane_ParamLimits

0x8e88,	// (0x00026ebb) bcale_month_pane

0x8ea6,	// (0x00026ed9) bcale_preview_pane_ParamLimits

0x8ea6,	// (0x00026ed9) bcale_preview_pane

0xec7e,	// (0x0002ccb1) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9d,	// (0x0002ccd0) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9d,	// (0x0002ccd0) list_single_fs_bigclock_pane_t2

0x0001,

0x0d3d,	// (0x0001ed70) list_single_fs_bigclock_pane_t_ParamLimits

0x0d3d,	// (0x0001ed70) list_single_fs_bigclock_pane_t

0xeed1,	// (0x0002cf04) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdc8,	// (0x0002ddfb) main_fs_bigclock_unlock_btn_pane_g

0x970e,	// (0x00027741) aid_dia3_key_size_ParamLimits

0x970e,	// (0x00027741) aid_dia3_key_size

0x971a,	// (0x0002774d) aid_dia3_listrow_size_ParamLimits

0x971a,	// (0x0002774d) aid_dia3_listrow_size

0x972a,	// (0x0002775d) dia3_keypad_fun_pane_ParamLimits

0x972a,	// (0x0002775d) dia3_keypad_fun_pane

0x973c,	// (0x0002776f) dia3_keypad_num_pane_ParamLimits

0x973c,	// (0x0002776f) dia3_keypad_num_pane

0x974e,	// (0x00027781) dia3_listscroll_pane_ParamLimits

0x974e,	// (0x00027781) dia3_listscroll_pane

0x975c,	// (0x0002778f) dia3_numentry_pane_ParamLimits

0x975c,	// (0x0002778f) dia3_numentry_pane

0xeee7,	// (0x0002cf1a) dia3_list_pane

0xeef2,	// (0x0002cf25) scroll_pane_cp12

0x9c48,	// (0x00027c7b) bg_dia3_numentry_pane

0x976a,	// (0x0002779d) dia3_numentry_pane_t1

0x9779,	// (0x000277ac) cell_dia3_key_num_pane

0x9781,	// (0x000277b4) cell_dia3_key0_fun_pane_ParamLimits

0x9781,	// (0x000277b4) cell_dia3_key0_fun_pane

0x978e,	// (0x000277c1) cell_dia3_key1_fun_pane_ParamLimits

0x978e,	// (0x000277c1) cell_dia3_key1_fun_pane

0x979b,	// (0x000277ce) dia3_listrow_pane

0xdebf,	// (0x0002bef2) bg_dia3_numentry_pane_g1

0x9c48,	// (0x00027c7b) bg_button_pane_cp21

0xeefd,	// (0x0002cf30) cell_dia3_key_num_pane_t1

0xef0b,	// (0x0002cf3e) cell_dia3_key_num_pane_t2

0xef1a,	// (0x0002cf4d) cell_dia3_key_num_pane_t3

0xef29,	// (0x0002cf5c) cell_dia3_key_num_pane_t4

0x0003,

0x0dc2,	// (0x0001edf5) cell_dia3_key_num_pane_t

0x9c48,	// (0x00027c7b) bg_button_pane_cp19

0x97a8,	// (0x000277db) cell_dia3_key0_fun_pane_g1

0x9c48,	// (0x00027c7b) bg_button_pane_cp20

0x97b0,	// (0x000277e3) cell_dia3_key1_fun_pane_g1

0x97b8,	// (0x000277eb) area_left_week_number_pane

0x97cb,	// (0x000277fe) area_top_day_name_pane

0x97d9,	// (0x0002780c) frame_month_view_pane

0xef38,	// (0x0002cf6b) grid_month_view_pane

0x97ee,	// (0x00027821) cell_top_day_name_pane_ParamLimits

0x97ee,	// (0x00027821) cell_top_day_name_pane

0x9808,	// (0x0002783b) cell_area_left_week_number_pane_ParamLimits

0x9808,	// (0x0002783b) cell_area_left_week_number_pane

0x982b,	// (0x0002785e) cell_month_view_pane_ParamLimits

0x982b,	// (0x0002785e) cell_month_view_pane

0xef46,	// (0x0002cf79) frm_month_g1

0x9857,	// (0x0002788a) frm_month_g2

0x9868,	// (0x0002789b) frm_month_g3

0x9879,	// (0x000278ac) frm_month_g4

0x988a,	// (0x000278bd) frm_month_g5

0x989d,	// (0x000278d0) frm_month_g6

0x98b0,	// (0x000278e3) frm_month_g7

0xef53,	// (0x0002cf86) frm_month_g8

0x98c3,	// (0x000278f6) frm_month_g9

0x98d0,	// (0x00027903) frm_month_g10

0x98dd,	// (0x00027910) frm_month_g11

0x98ea,	// (0x0002791d) frm_month_g12

0x98f7,	// (0x0002792a) frm_month_g13

0x9904,	// (0x00027937) frm_month_g14

0x9913,	// (0x00027946) frm_month_g15

0x9922,	// (0x00027955) frm_month_g16

0x000f,

0xfde4,	// (0x0002de17) frm_month_g

0xef60,	// (0x0002cf93) cell_top_day_name_pane_t1

0x9931,	// (0x00027964) cell_area_left_week_number_pane_g1

0x9940,	// (0x00027973) cell_area_left_week_number_pane_t1

0xcab2,	// (0x0002aae5) cell_month_view_pane_g1

0x9956,	// (0x00027989) cell_month_view_pane_t1

0x9c48,	// (0x00027c7b) main_fps_pane

0xe43e,	// (0x0002c471) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe43e,	// (0x0002c471) cmail_ddmenu_btn02_pane_cp1

0xe45a,	// (0x0002c48d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe45a,	// (0x0002c48d) cmail_ddmenu_btn02_pane_cp2

0x916d,	// (0x000271a0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x916d,	// (0x000271a0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd58,	// (0x0002dd8b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd58,	// (0x0002dd8b) cmail_ddmenu_btn02_pane_g

0x918b,	// (0x000271be) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x918b,	// (0x000271be) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd5d,	// (0x0002dd90) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd5d,	// (0x0002dd90) cmail_ddmenu_btn02_pane_t

0x996c,	// (0x0002799f) fps_text_pane_ParamLimits

0x996c,	// (0x0002799f) fps_text_pane

0x9979,	// (0x000279ac) main_fps_pane_g1_ParamLimits

0x9979,	// (0x000279ac) main_fps_pane_g1

0x9987,	// (0x000279ba) wait_bar_pane_cp010_ParamLimits

0x9987,	// (0x000279ba) wait_bar_pane_cp010

0x9993,	// (0x000279c6) fps_text_pane_t1_ParamLimits

0x9993,	// (0x000279c6) fps_text_pane_t1

0x6ac8,	// (0x00024afb) cam4_image_uncrop_pane_g1

0x6ad1,	// (0x00024b04) cam4_image_uncrop_pane_g2

0x6ada,	// (0x00024b0d) cam4_image_uncrop_pane_g3

0x6ae3,	// (0x00024b16) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0002d921) cam4_image_uncrop_pane_g

0x979b,	// (0x000277ce) dia3_listrow_pane_ParamLimits

0x9c48,	// (0x00027c7b) main_phob2_pane

0x8c54,	// (0x00026c87) cell_tport_appsw_pane_cp02_ParamLimits

0x8c54,	// (0x00026c87) cell_tport_appsw_pane_cp02

0x8c63,	// (0x00026c96) cell_tport_appsw_pane_cp03_ParamLimits

0x8c63,	// (0x00026c96) cell_tport_appsw_pane_cp03

0x9c48,	// (0x00027c7b) phob2_contact_card_pane

0x9c48,	// (0x00027c7b) phob2_listscroll_pane

0xef73,	// (0x0002cfa6) phob2_list_pane

0xef7b,	// (0x0002cfae) scroll_pane_cp034

0x99ac,	// (0x000279df) phob2_cc_data_pane_ParamLimits

0x99ac,	// (0x000279df) phob2_cc_data_pane

0x99c6,	// (0x000279f9) phob2_cc_listscroll_pane_ParamLimits

0x99c6,	// (0x000279f9) phob2_cc_listscroll_pane

0x99e0,	// (0x00027a13) list_double_large_graphic_phob2_pane_ParamLimits

0x99e0,	// (0x00027a13) list_double_large_graphic_phob2_pane

0x99fe,	// (0x00027a31) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99fe,	// (0x00027a31) list_double_large_graphic_phob2_pane_g1

0xef83,	// (0x0002cfb6) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef83,	// (0x0002cfb6) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe05,	// (0x0002de38) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe05,	// (0x0002de38) list_double_large_graphic_phob2_pane_g

0x9a14,	// (0x00027a47) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a14,	// (0x00027a47) list_double_large_graphic_phob2_pane_t1

0x9a29,	// (0x00027a5c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a29,	// (0x00027a5c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe0a,	// (0x0002de3d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe0a,	// (0x0002de3d) list_double_large_graphic_phob2_pane_t

0x9c48,	// (0x00027c7b) list_highlight_pane_cp024

0x9a3b,	// (0x00027a6e) phob2_cc_button_pane

0x9a43,	// (0x00027a76) phob2_cc_data_pane_g1_ParamLimits

0x9a43,	// (0x00027a76) phob2_cc_data_pane_g1

0x9a4f,	// (0x00027a82) phob2_cc_data_pane_g2_ParamLimits

0x9a4f,	// (0x00027a82) phob2_cc_data_pane_g2

0x0001,

0xfe0f,	// (0x0002de42) phob2_cc_data_pane_g_ParamLimits

0xfe0f,	// (0x0002de42) phob2_cc_data_pane_g

0x9a5b,	// (0x00027a8e) phob2_cc_data_pane_t1_ParamLimits

0x9a5b,	// (0x00027a8e) phob2_cc_data_pane_t1

0x9a6d,	// (0x00027aa0) phob2_cc_data_pane_t2_ParamLimits

0x9a6d,	// (0x00027aa0) phob2_cc_data_pane_t2

0x9a7f,	// (0x00027ab2) phob2_cc_data_pane_t3_ParamLimits

0x9a7f,	// (0x00027ab2) phob2_cc_data_pane_t3

0x0002,

0xfe14,	// (0x0002de47) phob2_cc_data_pane_t_ParamLimits

0xfe14,	// (0x0002de47) phob2_cc_data_pane_t

0xef8f,	// (0x0002cfc2) phob2_cc_list_pane_ParamLimits

0xef8f,	// (0x0002cfc2) phob2_cc_list_pane

0xd709,	// (0x0002b73c) scroll_pane_cp035_ParamLimits

0xd709,	// (0x0002b73c) scroll_pane_cp035

0xa391,	// (0x000283c4) bg_button_pane_cp033

0xef9b,	// (0x0002cfce) phob2_cc_button_pane_g1

0xefa7,	// (0x0002cfda) phob2_cc_button_pane_t1

0xefbc,	// (0x0002cfef) phob2_cc_button_pane_t2

0x0001,

0x0e02,	// (0x0001ee35) phob2_cc_button_pane_t

0x9a91,	// (0x00027ac4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a91,	// (0x00027ac4) list_double_large_graphic_phob2_cc_pane

0x9ab8,	// (0x00027aeb) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9ab8,	// (0x00027aeb) list_double_large_graphic_phob2_cc_pane_g1

0x9ac9,	// (0x00027afc) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9ac9,	// (0x00027afc) list_double_large_graphic_phob2_cc_pane_g2

0x9ad8,	// (0x00027b0b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9ad8,	// (0x00027b0b) list_double_large_graphic_phob2_cc_pane_g3

0x9ae7,	// (0x00027b1a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9ae7,	// (0x00027b1a) list_double_large_graphic_phob2_cc_pane_g4

0x9af8,	// (0x00027b2b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9af8,	// (0x00027b2b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe1b,	// (0x0002de4e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe1b,	// (0x0002de4e) list_double_large_graphic_phob2_cc_pane_g

0x9b07,	// (0x00027b3a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b07,	// (0x00027b3a) list_double_large_graphic_phob2_cc_pane_t1

0x9b30,	// (0x00027b63) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b30,	// (0x00027b63) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe26,	// (0x0002de59) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe26,	// (0x0002de59) list_double_large_graphic_phob2_cc_pane_t

0xefce,	// (0x0002d001) list_highlight_pane_cp025_ParamLimits

0xefce,	// (0x0002d001) list_highlight_pane_cp025

0xa391,	// (0x000283c4) bg_button_pane_cp033_ParamLimits

0xef9b,	// (0x0002cfce) phob2_cc_button_pane_g1_ParamLimits

0xefa7,	// (0x0002cfda) phob2_cc_button_pane_t1_ParamLimits

0xefbc,	// (0x0002cfef) phob2_cc_button_pane_t2_ParamLimits

0x0e02,	// (0x0001ee35) phob2_cc_button_pane_t_ParamLimits

0x2754,	// (0x00020787) popup_wgtman_window

0xd42f,	// (0x0002b462) scroll_pane_cp038

0x952c,	// (0x0002755f) wgtman_btn_pane_cp_01_ParamLimits

0x952c,	// (0x0002755f) wgtman_btn_pane_cp_01

0xefdc,	// (0x0002d00f) wgtman_content_pane

0xefe5,	// (0x0002d018) wgtman_heading_pane

0x9c48,	// (0x00027c7b) bg_heading_pane_cp02

0xefee,	// (0x0002d021) wgtman_heading_pane_g1

0xeff6,	// (0x0002d029) wgtman_heading_pane_t1

0xf004,	// (0x0002d037) scroll_pane_cp036

0xf00c,	// (0x0002d03f) wgtman_list_pane

0xf014,	// (0x0002d047) wgtman_list_pane_t1_ParamLimits

0xf014,	// (0x0002d047) wgtman_list_pane_t1

0x1f3e,	// (0x0001ff71) cam4_grid_pane

0x728b,	// (0x000252be) bg_button_pane_cp015_ParamLimits

0x729d,	// (0x000252d0) bg_button_pane_cp016_ParamLimits

0x72b0,	// (0x000252e3) bg_button_pane_cp017_ParamLimits

0x7306,	// (0x00025339) popup_vitu2_query_window_g3_ParamLimits

0x7306,	// (0x00025339) popup_vitu2_query_window_g3

0x73c1,	// (0x000253f4) popup_vitu2_query_window_t6_ParamLimits

0x73c1,	// (0x000253f4) popup_vitu2_query_window_t6

0x73ec,	// (0x0002541f) popup_vitu2_query_window_t7_ParamLimits

0x73ec,	// (0x0002541f) popup_vitu2_query_window_t7

0xeab7,	// (0x0002caea) cam4_grid_pane_g1

0xeac0,	// (0x0002caf3) cam4_grid_pane_g2

0xf02e,	// (0x0002d061) cam4_grid_pane_g3

0xf037,	// (0x0002d06a) cam4_grid_pane_g4

0x0003,

0xfe2b,	// (0x0002de5e) cam4_grid_pane_g

0x3383,	// (0x000213b6) aid_placing_vt_slider_lsc_ParamLimits

0x36cf,	// (0x00021702) vidtel_button_pane_ParamLimits

0x36cf,	// (0x00021702) vidtel_button_pane

0xf042,	// (0x0002d075) bg_button_pane_cp034

0x9b59,	// (0x00027b8c) vidtel_button_pane_g1

0xf04c,	// (0x0002d07f) vidtel_button_pane_t1

0xd56d,	// (0x0002b5a0) aid_size_vtel_slider_touch

0xd709,	// (0x0002b73c) scroll_pane_cp039

0xdefd,	// (0x0002bf30) ncim_query_button_pane_cp01_ParamLimits

0xdf1c,	// (0x0002bf4f) ncimui_query_pane_g1_ParamLimits

0xa391,	// (0x000283c4) input_focus_pane_cp012_ParamLimits

0xdf41,	// (0x0002bf74) ncim_query_entry_pane_t1_ParamLimits

0xd709,	// (0x0002b73c) scroll_pane_cp039_ParamLimits

0xae4e,	// (0x00028e81) navi_pane_bcale_mc_g1

0xae56,	// (0x00028e89) navi_pane_bcale_mc_t1

0xe4a3,	// (0x0002c4d6) main_sp_fs_email_pane_g1

0xe4af,	// (0x0002c4e2) main_sp_fs_email_pane_g2

0x0001,

0x0bad,	// (0x0001ebe0) main_sp_fs_email_pane_g

0xe8cf,	// (0x0002c902) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8cf,	// (0x0002c902) list_single_cale_mrui_row_pane_g3

0x91b3,	// (0x000271e6) list_single_recal_day_pane_g5_event_pane

0xeac9,	// (0x0002cafc) list_single_recal_day_pane_g7

0xf05a,	// (0x0002d08d) list_recal_day_event_pane_cp01

0xf063,	// (0x0002d096) list_recal_vselct_arw_lo_pane_cp01

0xf06b,	// (0x0002d09e) list_recal_vselct_arw_up_pane_cp01

0xf073,	// (0x0002d0a6) list_recal_vselct_pane_cp01

0xd58f,	// (0x0002b5c2) list_recal_day_event_pane_cp01_g1

0xf07d,	// (0x0002d0b0) list_recal_day_event_pane_cp01_t1

0xead1,	// (0x0002cb04) list_single_recal_day_pane_t1_ParamLimits

0xeae3,	// (0x0002cb16) list_single_recal_day_pane_t2_ParamLimits

0x0d05,	// (0x0001ed38) list_single_recal_day_pane_t_ParamLimits

0xa2c0,	// (0x000282f3) bg_notes_pane_ParamLimits

0xa363,	// (0x00028396) list_notes_pane_ParamLimits

0x29db,	// (0x00020a0e) scroll_pane_cp06_ParamLimits

0xa385,	// (0x000283b8) main_notes_pane_ParamLimits

0x9c48,	// (0x00027c7b) main_welc_pane

0x9b61,	// (0x00027b94) main_welc_body_pane_ParamLimits

0x9b61,	// (0x00027b94) main_welc_body_pane

0x9b7b,	// (0x00027bae) main_welc_opti_pane_ParamLimits

0x9b7b,	// (0x00027bae) main_welc_opti_pane

0x9bae,	// (0x00027be1) main_welc_pane_t1_ParamLimits

0x9bae,	// (0x00027be1) main_welc_pane_t1

0x9bc8,	// (0x00027bfb) main_welc_body_row_pane_ParamLimits

0x9bc8,	// (0x00027bfb) main_welc_body_row_pane

0xd3dd,	// (0x0002b410) main_welc_opti_row_pane_ParamLimits

0xd3dd,	// (0x0002b410) main_welc_opti_row_pane

0xf08b,	// (0x0002d0be) main_welc_opti_row_pane_g1

0x9bed,	// (0x00027c20) main_welc_opti_row_pane_t1

0xf093,	// (0x0002d0c6) main_welc_body_row_pane_t1

0xed5e,	// (0x0002cd91) popup_notif_wgt_heading_pane

0xed78,	// (0x0002cdab) aid_size_list_notif_wgt_del_ParamLimits

0xed85,	// (0x0002cdb8) list_notif_wgt_row_pane_g1_ParamLimits

0xed91,	// (0x0002cdc4) list_notif_wgt_row_pane_g2_ParamLimits

0xeda5,	// (0x0002cdd8) list_notif_wgt_row_pane_g3_ParamLimits

0x0d6c,	// (0x0001ed9f) list_notif_wgt_row_pane_g_ParamLimits

0xedb2,	// (0x0002cde5) list_notif_wgt_row_pane_t1_ParamLimits

0xedc8,	// (0x0002cdfb) list_notif_wgt_row_pane_t2_ParamLimits

0xedda,	// (0x0002ce0d) list_notif_wgt_row_pane_t3_ParamLimits

0x0d73,	// (0x0001eda6) list_notif_wgt_row_pane_t_ParamLimits

0x95be,	// (0x000275f1) listrow_wgtman_pane_g1_ParamLimits

0x95cb,	// (0x000275fe) listrow_wgtman_pane_g2_ParamLimits

0xfdbe,	// (0x0002ddf1) listrow_wgtman_pane_g_ParamLimits

0x95e9,	// (0x0002761c) listrow_wgtman_pane_t1_ParamLimits

0x9601,	// (0x00027634) listrow_wgtman_pane_t2_ParamLimits

0xfdc3,	// (0x0002ddf6) listrow_wgtman_pane_t_ParamLimits

0x9627,	// (0x0002765a) wait_bar_pane_cp09_ParamLimits

0x9c48,	// (0x00027c7b) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0002d0d5) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0002d0dd) popup_notif_wgt_heading_pane_t1

0x9c48,	// (0x00027c7b) main_vids_pane

0x9c48,	// (0x00027c7b) vids_listscroll_pane

0x9bfc,	// (0x00027c2f) scroll_pane_cp040

0x9c48,	// (0x00027c7b) vids_list_pane

0x9c07,	// (0x00027c3a) vids_list_double_pane_ParamLimits

0x9c07,	// (0x00027c3a) vids_list_double_pane

0x9c21,	// (0x00027c54) vids_list_double_pane_g1

0x9c2a,	// (0x00027c5d) vids_list_double_pane_t1

0x9c3a,	// (0x00027c6d) vids_list_double_pane_t2

0x0001,

0xfe39,	// (0x0002de6c) vids_list_double_pane_t

0x1586,	// (0x0001f5b9) main_ncimui_pane_ParamLimits

0x7f23,	// (0x00025f56) main_ncimui_pane_g1_ParamLimits

0x7f2f,	// (0x00025f62) main_ncimui_pane_g2_ParamLimits

0x7f2f,	// (0x00025f62) main_ncimui_pane_g2

0x0001,

0xfbc8,	// (0x0002dbfb) main_ncimui_pane_g_ParamLimits

0xfbc8,	// (0x0002dbfb) main_ncimui_pane_g

0x9b94,	// (0x00027bc7) main_welc_pane_g1_ParamLimits

0x9b94,	// (0x00027bc7) main_welc_pane_g1

0x9ba0,	// (0x00027bd3) main_welc_pane_g2_ParamLimits

0x9ba0,	// (0x00027bd3) main_welc_pane_g2

0x0001,

0xfe34,	// (0x0002de67) main_welc_pane_g_ParamLimits

0xfe34,	// (0x0002de67) main_welc_pane_g

0xa2c0,	// (0x000282f3) listscroll_mce_pane_ParamLimits

0xafa3,	// (0x00028fd6) wait_bar_pane_cp10

0xc432,	// (0x0002a465) main_cale_day_pane_ParamLimits

0xc432,	// (0x0002a465) main_cale_week_pane_ParamLimits

0xa2c0,	// (0x000282f3) main_messa_pane_ParamLimits

0x6470,	// (0x000244a3) main_clock2_btn_pane_ParamLimits

0x6470,	// (0x000244a3) main_clock2_btn_pane

0xcc66,	// (0x0002ac99) main_clock2_btn_pane_cp01_ParamLimits

0xcc66,	// (0x0002ac99) main_clock2_btn_pane_cp01

0xe85b,	// (0x0002c88e) list_cale_mrui_pane_ParamLimits

0xee10,	// (0x0002ce43) main_cf0_pane_g2

0x0001,

0x0d7a,	// (0x0001edad) main_cf0_pane_g

0x97b8,	// (0x000277eb) area_left_week_number_pane_ParamLimits

0x97cb,	// (0x000277fe) area_top_day_name_pane_ParamLimits

0x97d9,	// (0x0002780c) frame_month_view_pane_ParamLimits

0xef38,	// (0x0002cf6b) grid_month_view_pane_ParamLimits

0xef46,	// (0x0002cf79) frm_month_g1_ParamLimits

0x9857,	// (0x0002788a) frm_month_g2_ParamLimits

0x9868,	// (0x0002789b) frm_month_g3_ParamLimits

0x9879,	// (0x000278ac) frm_month_g4_ParamLimits

0x988a,	// (0x000278bd) frm_month_g5_ParamLimits

0x989d,	// (0x000278d0) frm_month_g6_ParamLimits

0x98b0,	// (0x000278e3) frm_month_g7_ParamLimits

0xef53,	// (0x0002cf86) frm_month_g8_ParamLimits

0x98c3,	// (0x000278f6) frm_month_g9_ParamLimits

0x98d0,	// (0x00027903) frm_month_g10_ParamLimits

0x98dd,	// (0x00027910) frm_month_g11_ParamLimits

0x98ea,	// (0x0002791d) frm_month_g12_ParamLimits

0x98f7,	// (0x0002792a) frm_month_g13_ParamLimits

0x9904,	// (0x00027937) frm_month_g14_ParamLimits

0x9913,	// (0x00027946) frm_month_g15_ParamLimits

0x9922,	// (0x00027955) frm_month_g16_ParamLimits

0xfde4,	// (0x0002de17) frm_month_g_ParamLimits

0xef60,	// (0x0002cf93) cell_top_day_name_pane_t1_ParamLimits

0x9931,	// (0x00027964) cell_area_left_week_number_pane_g1_ParamLimits

0x9940,	// (0x00027973) cell_area_left_week_number_pane_t1_ParamLimits

0xcab2,	// (0x0002aae5) cell_month_view_pane_g1_ParamLimits

0x9956,	// (0x00027989) cell_month_view_pane_t1_ParamLimits

0xa2b8,	// (0x000282eb) main_clock2_btn_pane_g1

0xf0b8,	// (0x0002d0eb) main_clock2_btn_pane_t1

0xa391,	// (0x000283c4) listscroll_cmail_pane_ParamLimits

0xe4a3,	// (0x0002c4d6) main_sp_fs_email_pane_g1_ParamLimits

0xe4af,	// (0x0002c4e2) main_sp_fs_email_pane_g2_ParamLimits

0x0bad,	// (0x0001ebe0) main_sp_fs_email_pane_g_ParamLimits

0xea1f,	// (0x0002ca52) list_recal_day_pane_ParamLimits

0xea30,	// (0x0002ca63) mian_recal_day_pane_t1

0x893d,	// (0x00026970) list_single_dyc_row_text_pane_t4_ParamLimits

0x893d,	// (0x00026970) list_single_dyc_row_text_pane_t4

0x8974,	// (0x000269a7) list_single_dyc_row_text_pane_t5_ParamLimits

0x8974,	// (0x000269a7) list_single_dyc_row_text_pane_t5

0xe551,	// (0x0002c584) list_single_dyc_row_text_pane_t6_ParamLimits

0xe551,	// (0x0002c584) list_single_dyc_row_text_pane_t6

0x450d,	// (0x00022540) aid_mgn_list_cale_time_pane

0x1586,	// (0x0001f5b9) main_gallery2_pane_ParamLimits

0xcc7c,	// (0x0002acaf) main_clock2_pane_cp01_t1

0xcc8c,	// (0x0002acbf) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0002d7f7) main_clock2_pane_cp01_t

0x2d00,	// (0x00020d33) cale_week_scroll_pane_g16_ParamLimits

0x2d00,	// (0x00020d33) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
