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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0005bd02 };

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
0x0edd,	// (0x0005cbdf) Screen

0x0ee9,	// (0x0005cbeb) application_window

0x0f45,	// (0x0005cc47) area_bottom_pane_ParamLimits

0x0f45,	// (0x0005cc47) area_bottom_pane

0x0f9e,	// (0x0005cca0) area_top_pane_ParamLimits

0x0f9e,	// (0x0005cca0) area_top_pane

0x1002,	// (0x0005cd04) call_video_uplink_pane_ParamLimits

0x1002,	// (0x0005cd04) call_video_uplink_pane

0x1041,	// (0x0005cd43) main_pane_ParamLimits

0x1041,	// (0x0005cd43) main_pane

0xc846,	// (0x00068548) context_pane

0x4639,	// (0x0006033b) navi_pane

0x465f,	// (0x00060361) popup_cale_events_window_ParamLimits

0x465f,	// (0x00060361) popup_cale_events_window

0xc859,	// (0x0006855b) popup_mup_playback_window

0x4677,	// (0x00060379) signal_pane

0xa80f,	// (0x00066511) main_browser_pane

0xa9d4,	// (0x000666d6) main_burst_pane

0x44b7,	// (0x000601b9) main_calc_pane

0xc82c,	// (0x0006852e) main_cale_day_pane

0x17a4,	// (0x0005d4a6) main_cale_month_pane

0xc82c,	// (0x0006852e) main_cale_week_pane

0xa9d4,	// (0x000666d6) main_call_pane

0xa4ef,	// (0x000661f1) main_call_poc_pane

0xa9d4,	// (0x000666d6) main_camera_pane

0xa9d4,	// (0x000666d6) main_chi_dic_pane

0xb1c5,	// (0x00066ec7) main_clock_pane

0xa4ef,	// (0x000661f1) main_fmradio_pane

0xa9d4,	// (0x000666d6) main_graph_messa_pane

0xa4ef,	// (0x000661f1) main_help_pane

0xa80f,	// (0x00066511) main_im_pane

0xa74a,	// (0x0006644c) main_image_pane_ParamLimits

0xa74a,	// (0x0006644c) main_image_pane

0xa4ef,	// (0x000661f1) main_location2_pane

0xa9d4,	// (0x000666d6) main_location_pane

0xa74a,	// (0x0006644c) main_messa_pane

0xa4ef,	// (0x000661f1) main_mp2_pane

0xa9d4,	// (0x000666d6) main_mp_pane

0xa4ef,	// (0x000661f1) main_msg_pane

0xa4ef,	// (0x000661f1) main_mup_eq_pane

0xa4ef,	// (0x000661f1) main_mup_pane

0xa80f,	// (0x00066511) main_notes_pane

0xa4ef,	// (0x000661f1) main_pec_pane

0xa4ef,	// (0x000661f1) main_phob_pane

0xa4ef,	// (0x000661f1) main_pinb_pane

0xa4ef,	// (0x000661f1) main_postcard_pane

0xa4ef,	// (0x000661f1) main_qdial_pane

0xa9d4,	// (0x000666d6) main_skin_pane

0xa4ef,	// (0x000661f1) main_smil2_pane

0xa9d4,	// (0x000666d6) main_smil_pane

0xa9d4,	// (0x000666d6) main_video_pane

0xa9d4,	// (0x000666d6) main_video_tele_pane

0xa74a,	// (0x0006644c) main_viewer_pane_ParamLimits

0xa74a,	// (0x0006644c) main_viewer_pane

0xa9d4,	// (0x000666d6) main_vorec_pane

0x4503,	// (0x00060205) popup_blid_sat_info_window_ParamLimits

0x4503,	// (0x00060205) popup_blid_sat_info_window

0x4523,	// (0x00060225) popup_dyc_status_message_window_ParamLimits

0x4523,	// (0x00060225) popup_dyc_status_message_window

0x4533,	// (0x00060235) popup_grid_large_graphic_window_ParamLimits

0x4533,	// (0x00060235) popup_grid_large_graphic_window

0x45c4,	// (0x000602c6) popup_loc_request_window_ParamLimits

0x45c4,	// (0x000602c6) popup_loc_request_window

0x4611,	// (0x00060313) popup_wml_address_window_ParamLimits

0x4611,	// (0x00060313) popup_wml_address_window

0x438f,	// (0x00060091) call_muted_g1

0x4051,	// (0x0005fd53) popup_call_audio_conf_window_ParamLimits

0x4051,	// (0x0005fd53) popup_call_audio_conf_window

0x439f,	// (0x000600a1) popup_call_audio_first_window_ParamLimits

0x439f,	// (0x000600a1) popup_call_audio_first_window

0x43df,	// (0x000600e1) popup_call_audio_in_window_ParamLimits

0x43df,	// (0x000600e1) popup_call_audio_in_window

0x4403,	// (0x00060105) popup_call_audio_out_window_ParamLimits

0x4403,	// (0x00060105) popup_call_audio_out_window

0x4425,	// (0x00060127) popup_call_audio_second_window_ParamLimits

0x4425,	// (0x00060127) popup_call_audio_second_window

0x4455,	// (0x00060157) popup_call_audio_wait_window_ParamLimits

0x4455,	// (0x00060157) popup_call_audio_wait_window

0x4476,	// (0x00060178) popup_number_entry_window_ParamLimits

0x4476,	// (0x00060178) popup_number_entry_window

0x9bf5,	// (0x000658f7) bg_popup_call_pane_cp05_ParamLimits

0x9bf5,	// (0x000658f7) bg_popup_call_pane_cp05

0x9c15,	// (0x00065917) popup_number_entry_window_t1

0x9c28,	// (0x0006592a) popup_number_entry_window_t2

0x9c3a,	// (0x0006593c) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0006adcc) popup_number_entry_window_t

0x9c4c,	// (0x0006594e) text_title_cp2

0x9c5f,	// (0x00065961) bg_popup_call_pane_cp_ParamLimits

0x9c5f,	// (0x00065961) bg_popup_call_pane_cp

0x9c6d,	// (0x0006596f) call_thumbnail_pane

0x9c75,	// (0x00065977) popup_call_audio_in_window_g1_ParamLimits

0x9c75,	// (0x00065977) popup_call_audio_in_window_g1

0x9c81,	// (0x00065983) popup_call_audio_in_window_g2_ParamLimits

0x9c81,	// (0x00065983) popup_call_audio_in_window_g2

0x9c8d,	// (0x0006598f) popup_call_audio_in_window_g3_ParamLimits

0x9c8d,	// (0x0006598f) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0006add5) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0006add5) popup_call_audio_in_window_g

0x9c99,	// (0x0006599b) popup_call_audio_in_window_t1_ParamLimits

0x9c99,	// (0x0006599b) popup_call_audio_in_window_t1

0x9cb5,	// (0x000659b7) popup_call_audio_in_window_t2_ParamLimits

0x9cb5,	// (0x000659b7) popup_call_audio_in_window_t2

0x9cd1,	// (0x000659d3) popup_call_audio_in_window_t3_ParamLimits

0x9cd1,	// (0x000659d3) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0006addc) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0006addc) popup_call_audio_in_window_t

0x9c5f,	// (0x00065961) bg_popup_call_pane_cp01_ParamLimits

0x9c5f,	// (0x00065961) bg_popup_call_pane_cp01

0x9c6d,	// (0x0006596f) call_thumbnail_pane_cp02

0x9ce4,	// (0x000659e6) call_type_pane_cp022

0x9cec,	// (0x000659ee) popup_call_audio_out_window_g1_ParamLimits

0x9cec,	// (0x000659ee) popup_call_audio_out_window_g1

0x9cfe,	// (0x00065a00) popup_call_audio_out_window_g2_ParamLimits

0x9cfe,	// (0x00065a00) popup_call_audio_out_window_g2

0x9d0a,	// (0x00065a0c) popup_call_audio_out_window_g3_ParamLimits

0x9d0a,	// (0x00065a0c) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0006ade3) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0006ade3) popup_call_audio_out_window_g

0x9d1c,	// (0x00065a1e) popup_call_audio_out_window_t1_ParamLimits

0x9d1c,	// (0x00065a1e) popup_call_audio_out_window_t1

0x9d34,	// (0x00065a36) popup_call_audio_out_window_t2_ParamLimits

0x9d34,	// (0x00065a36) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0006adea) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0006adea) popup_call_audio_out_window_t

0x9d49,	// (0x00065a4b) bg_popup_call_pane_ParamLimits

0x9d49,	// (0x00065a4b) bg_popup_call_pane

0x125a,	// (0x0005cf5c) call_thumbnail_pane_cp_ParamLimits

0x125a,	// (0x0005cf5c) call_thumbnail_pane_cp

0x9dcd,	// (0x00065acf) call_type_pane_cp01_ParamLimits

0x9dcd,	// (0x00065acf) call_type_pane_cp01

0x9e11,	// (0x00065b13) popup_call_audio_first_window_g1_ParamLimits

0x9e11,	// (0x00065b13) popup_call_audio_first_window_g1

0x9e5d,	// (0x00065b5f) popup_call_audio_first_window_g2_ParamLimits

0x9e5d,	// (0x00065b5f) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0006adef) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0006adef) popup_call_audio_first_window_g

0x9ea1,	// (0x00065ba3) popup_call_audio_first_window_t1_ParamLimits

0x9ea1,	// (0x00065ba3) popup_call_audio_first_window_t1

0x9f4d,	// (0x00065c4f) popup_call_audio_first_window_t4_ParamLimits

0x9f4d,	// (0x00065c4f) popup_call_audio_first_window_t4

0xa48f,	// (0x00066191) popup_call_audio_first_window_t5_ParamLimits

0xa48f,	// (0x00066191) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0006adf4) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0006adf4) popup_call_audio_first_window_t

0xa4ef,	// (0x000661f1) bg_popup_call_pane_cp02

0xa4f9,	// (0x000661fb) call_type_pane_cp023

0xa501,	// (0x00066203) popup_call_audio_wait_window_g1

0xa509,	// (0x0006620b) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0006adfb) popup_call_audio_wait_window_g

0xa511,	// (0x00066213) popup_call_audio_wait_window_t3

0xa51f,	// (0x00066221) bg_popup_call_pane_cp03_ParamLimits

0xa51f,	// (0x00066221) bg_popup_call_pane_cp03

0xa57f,	// (0x00066281) call_thumbnail_pane_cp011_ParamLimits

0xa57f,	// (0x00066281) call_thumbnail_pane_cp011

0xa58b,	// (0x0006628d) call_type_pane_cp034_ParamLimits

0xa58b,	// (0x0006628d) call_type_pane_cp034

0xa5c7,	// (0x000662c9) popup_call_audio_second_window_g1_ParamLimits

0xa5c7,	// (0x000662c9) popup_call_audio_second_window_g1

0xa603,	// (0x00066305) popup_call_audio_second_window_g2_ParamLimits

0xa603,	// (0x00066305) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0006ae00) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0006ae00) popup_call_audio_second_window_g

0xa63f,	// (0x00066341) popup_call_audio_second_window_t1_ParamLimits

0xa63f,	// (0x00066341) popup_call_audio_second_window_t1

0xa6c0,	// (0x000663c2) popup_call_audio_second_window_t2_ParamLimits

0xa6c0,	// (0x000663c2) popup_call_audio_second_window_t2

0xa6f6,	// (0x000663f8) popup_call_audio_second_window_t3_ParamLimits

0xa6f6,	// (0x000663f8) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0006ae05) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0006ae05) popup_call_audio_second_window_t

0xa4ef,	// (0x000661f1) bg_popup_call_pane_cp04

0xa72c,	// (0x0006642e) list_conf_pane

0xa734,	// (0x00066436) popup_call_audio_conf_window_t1

0xa742,	// (0x00066444) call_thumbnail_pane_g1

0xa74a,	// (0x0006644c) bg_pinb_pane_ParamLimits

0xa74a,	// (0x0006644c) bg_pinb_pane

0xa758,	// (0x0006645a) find_pinb_pane

0xa761,	// (0x00066463) listscroll_pinb_pane_ParamLimits

0xa761,	// (0x00066463) listscroll_pinb_pane

0xa770,	// (0x00066472) pinb_bg_pane_g1

0x127e,	// (0x0005cf80) pinb_bg_pane_g2

0x128a,	// (0x0005cf8c) pinb_bg_pane_g3

0x1296,	// (0x0005cf98) pinb_bg_pane_g4

0x12a2,	// (0x0005cfa4) pinb_bg_pane_g5

0x12ae,	// (0x0005cfb0) pinb_bg_pane_g6

0x12b9,	// (0x0005cfbb) pinb_bg_pane_g7

0x12c4,	// (0x0005cfc6) pinb_bg_pane_g8

0x12cf,	// (0x0005cfd1) pinb_bg_pane_g9

0x12d9,	// (0x0005cfdb) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0006ae0c) pinb_bg_pane_g

0x12f6,	// (0x0005cff8) grid_pinb_pane

0x1301,	// (0x0005d003) list_pinb_pane

0x130c,	// (0x0005d00e) scroll_pane_cp01_ParamLimits

0x130c,	// (0x0005d00e) scroll_pane_cp01

0xa77a,	// (0x0006647c) find_pinb_pane_g1_ParamLimits

0xa77a,	// (0x0006647c) find_pinb_pane_g1

0xa792,	// (0x00066494) find_pinb_pane_t1

0xa7a4,	// (0x000664a6) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0006ae26) find_pinb_pane_t

0xa7b9,	// (0x000664bb) input_focus_pane_cp01_ParamLimits

0xa7b9,	// (0x000664bb) input_focus_pane_cp01

0x131e,	// (0x0005d020) cell_pinb_pane_ParamLimits

0x131e,	// (0x0005d020) cell_pinb_pane

0x1346,	// (0x0005d048) cell_pinb_pane_g1_ParamLimits

0x1346,	// (0x0005d048) cell_pinb_pane_g1

0x135b,	// (0x0005d05d) cell_pinb_pane_g2_ParamLimits

0x135b,	// (0x0005d05d) cell_pinb_pane_g2

0xa7c5,	// (0x000664c7) cell_pinb_pane_g3_ParamLimits

0xa7c5,	// (0x000664c7) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0006ae2b) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0006ae2b) cell_pinb_pane_g

0xa4ef,	// (0x000661f1) grid_highlight_pane_cp01

0x1367,	// (0x0005d069) list_pinb_item_pane_ParamLimits

0x1367,	// (0x0005d069) list_pinb_item_pane

0xa4ef,	// (0x000661f1) list_highlight_pane_cp02

0x138d,	// (0x0005d08f) list_pinb_item_pane_g1_ParamLimits

0x138d,	// (0x0005d08f) list_pinb_item_pane_g1

0x139a,	// (0x0005d09c) list_pinb_item_pane_g2_ParamLimits

0x139a,	// (0x0005d09c) list_pinb_item_pane_g2

0x13a6,	// (0x0005d0a8) list_pinb_item_pane_g3_ParamLimits

0x13a6,	// (0x0005d0a8) list_pinb_item_pane_g3

0x13b7,	// (0x0005d0b9) list_pinb_item_pane_g4_ParamLimits

0x13b7,	// (0x0005d0b9) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0006ae32) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0006ae32) list_pinb_item_pane_g

0x13c3,	// (0x0005d0c5) list_pinb_item_pane_t1_ParamLimits

0x13c3,	// (0x0005d0c5) list_pinb_item_pane_t1

0x13f4,	// (0x0005d0f6) calc_display_pane

0x1412,	// (0x0005d114) calc_paper_pane

0x142e,	// (0x0005d130) grid_calc_pane

0xa4ef,	// (0x000661f1) bg_list_pane_cp01

0x145a,	// (0x0005d15c) clock_g1

0x1462,	// (0x0005d164) clock_g2

0x0001,

0xf139,	// (0x0006ae3b) clock_g

0x146c,	// (0x0005d16e) clock_t1_ParamLimits

0x146c,	// (0x0005d16e) clock_t1

0x1481,	// (0x0005d183) clock_t2_ParamLimits

0x1481,	// (0x0005d183) clock_t2

0x1493,	// (0x0005d195) clock_t3_ParamLimits

0x1493,	// (0x0005d195) clock_t3

0x14a5,	// (0x0005d1a7) clock_t4_ParamLimits

0x14a5,	// (0x0005d1a7) clock_t4

0x14b7,	// (0x0005d1b9) clock_t5_ParamLimits

0x14b7,	// (0x0005d1b9) clock_t5

0x14cc,	// (0x0005d1ce) clock_t6_ParamLimits

0x14cc,	// (0x0005d1ce) clock_t6

0x14de,	// (0x0005d1e0) clock_t7_ParamLimits

0x14de,	// (0x0005d1e0) clock_t7

0x14f0,	// (0x0005d1f2) clock_t8_ParamLimits

0x14f0,	// (0x0005d1f2) clock_t8

0x1506,	// (0x0005d208) clock_t9_ParamLimits

0x1506,	// (0x0005d208) clock_t9

0x0008,

0xf13e,	// (0x0006ae40) clock_t_ParamLimits

0xf13e,	// (0x0006ae40) clock_t

0xa7d1,	// (0x000664d3) popup_clock_analogue_window_cp02

0xa7d1,	// (0x000664d3) popup_clock_digital_window_cp01

0xa7d9,	// (0x000664db) listscroll_help_pane

0xa4ef,	// (0x000661f1) phob_pre_status_pane

0xa7e3,	// (0x000664e5) grid_qdial_pane

0xa74a,	// (0x0006644c) listscroll_mce_pane

0xa74a,	// (0x0006644c) bg_notes_pane

0xa7ed,	// (0x000664ef) list_notes_pane

0x151c,	// (0x0005d21e) scroll_pane_cp06

0xa7fb,	// (0x000664fd) bg_calc_paper_pane

0x152b,	// (0x0005d22d) list_calc_pane

0xa80f,	// (0x00066511) bg_calc_display_pane

0x1545,	// (0x0005d247) calc_display_pane_t1

0x155a,	// (0x0005d25c) calc_display_pane_t2

0x156f,	// (0x0005d271) calc_display_pane_t3

0x0002,

0xf151,	// (0x0006ae53) calc_display_pane_t

0x1581,	// (0x0005d283) cell_calc_pane_ParamLimits

0x1581,	// (0x0005d283) cell_calc_pane

0xa81b,	// (0x0006651d) bg_calc_paper_pane_g1

0xa827,	// (0x00066529) bg_calc_paper_pane_g2

0xa833,	// (0x00066535) bg_calc_paper_pane_g3

0xa83f,	// (0x00066541) bg_calc_paper_pane_g4

0xa84b,	// (0x0006654d) bg_calc_paper_pane_g5

0x15ae,	// (0x0005d2b0) bg_calc_paper_pane_g6

0x15bf,	// (0x0005d2c1) bg_calc_paper_pane_g7

0x15d0,	// (0x0005d2d2) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0006ae5a) bg_calc_paper_pane_g

0x15e1,	// (0x0005d2e3) calc_bg_paper_pane_g9

0x15f2,	// (0x0005d2f4) list_calc_item_pane_ParamLimits

0x15f2,	// (0x0005d2f4) list_calc_item_pane

0xa857,	// (0x00066559) list_calc_item_pane_g1

0x1621,	// (0x0005d323) list_calc_item_pane_t1_ParamLimits

0x1621,	// (0x0005d323) list_calc_item_pane_t1

0x1633,	// (0x0005d335) list_calc_item_pane_t2_ParamLimits

0x1633,	// (0x0005d335) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0006ae6b) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0006ae6b) list_calc_item_pane_t

0xa864,	// (0x00066566) cell_calc_pane_g1

0xa86e,	// (0x00066570) grid_highlight_pane_cp02

0x1663,	// (0x0005d365) bg_calc_display_pane_g1

0x166c,	// (0x0005d36e) bg_calc_display_pane_g2

0xcc30,	// (0x00068932) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0006ae75) bg_calc_display_pane_g

0x1676,	// (0x0005d378) cell_qdial_pane_ParamLimits

0x1676,	// (0x0005d378) cell_qdial_pane

0x168a,	// (0x0005d38c) cell_qdial_pane_g1_ParamLimits

0x168a,	// (0x0005d38c) cell_qdial_pane_g1

0x1697,	// (0x0005d399) cell_qdial_pane_g2_ParamLimits

0x1697,	// (0x0005d399) cell_qdial_pane_g2

0xa890,	// (0x00066592) cell_qdial_pane_g3_ParamLimits

0xa890,	// (0x00066592) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0006ae7c) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0006ae7c) cell_qdial_pane_g

0x16b5,	// (0x0005d3b7) cell_qdial_pane_t1_ParamLimits

0x16b5,	// (0x0005d3b7) cell_qdial_pane_t1

0x16cd,	// (0x0005d3cf) cell_qdial_pane_t2_ParamLimits

0x16cd,	// (0x0005d3cf) cell_qdial_pane_t2

0x16e0,	// (0x0005d3e2) cell_qdial_pane_t3_ParamLimits

0x16e0,	// (0x0005d3e2) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0006ae85) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0006ae85) cell_qdial_pane_t

0xa4ef,	// (0x000661f1) grid_highlight_pane_cp04

0xa89c,	// (0x0006659e) thumbnail_qdial_pane_ParamLimits

0xa89c,	// (0x0006659e) thumbnail_qdial_pane

0xa8f8,	// (0x000665fa) list_help_pane

0xa901,	// (0x00066603) scroll_pane_cp02

0x16f3,	// (0x0005d3f5) help_list_pane_t1_ParamLimits

0x16f3,	// (0x0005d3f5) help_list_pane_t1

0x1726,	// (0x0005d428) bg_notes_pane_g2

0x172e,	// (0x0005d430) bg_notes_pane_g3

0x1736,	// (0x0005d438) notes_bg_pane_g1

0x173e,	// (0x0005d440) notes_bg_pane_g4

0x1746,	// (0x0005d448) notes_bg_pane_g5

0x174e,	// (0x0005d450) notes_bg_pane_g6

0x1756,	// (0x0005d458) notes_bg_pane_g7

0x175e,	// (0x0005d460) notes_bg_pane_g8

0x1766,	// (0x0005d468) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0006aea3) notes_bg_pane_g

0x176e,	// (0x0005d470) list_notes_text_pane_ParamLimits

0x176e,	// (0x0005d470) list_notes_text_pane

0xa90a,	// (0x0006660c) list_notes_text_pane_g1

0x1796,	// (0x0005d498) list_notes_text_pane_t1

0x17a4,	// (0x0005d4a6) listscroll_cale_week_pane

0x17c9,	// (0x0005d4cb) bg_cale_heading_pane

0xa92d,	// (0x0006662f) bg_cale_pane_cp01

0x17eb,	// (0x0005d4ed) cale_week_corner_pane

0x1805,	// (0x0005d507) cale_week_day_heading_pane

0x1827,	// (0x0005d529) cale_week_scroll_pane_g1

0x1844,	// (0x0005d546) cale_week_scroll_pane_g2

0x1857,	// (0x0005d559) cale_week_scroll_pane_g3

0x186a,	// (0x0005d56c) cale_week_scroll_pane_g4

0x187d,	// (0x0005d57f) cale_week_scroll_pane_g5

0x1890,	// (0x0005d592) cale_week_scroll_pane_g6

0x18a3,	// (0x0005d5a5) cale_week_scroll_pane_g7

0x18b6,	// (0x0005d5b8) cale_week_scroll_pane_g8

0x18cb,	// (0x0005d5cd) cale_week_scroll_pane_g9

0x18de,	// (0x0005d5e0) cale_week_scroll_pane_g10

0x18f1,	// (0x0005d5f3) cale_week_scroll_pane_g11

0x1904,	// (0x0005d606) cale_week_scroll_pane_g12

0x191b,	// (0x0005d61d) cale_week_scroll_pane_g13

0x1936,	// (0x0005d638) cale_week_scroll_pane_g14

0x1951,	// (0x0005d653) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0006aeb2) cale_week_scroll_pane_g

0x1981,	// (0x0005d683) cale_week_time_pane

0x1996,	// (0x0005d698) grid_cale_week_pane

0xa95c,	// (0x0006665e) scroll_pane_cp08

0x19b5,	// (0x0005d6b7) cell_cale_week_pane_ParamLimits

0x19b5,	// (0x0005d6b7) cell_cale_week_pane

0x1a17,	// (0x0005d719) cale_week_day_heading_pane_t1

0x1a52,	// (0x0005d754) cale_week_day_heading_pane_t2

0x1a8d,	// (0x0005d78f) cale_week_day_heading_pane_t3

0x1ac8,	// (0x0005d7ca) cale_week_day_heading_pane_t4

0x1b03,	// (0x0005d805) cale_week_day_heading_pane_t5

0x1b3e,	// (0x0005d840) cale_week_day_heading_pane_t6

0x1b79,	// (0x0005d87b) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0006aed3) cale_week_day_heading_pane_t

0xa979,	// (0x0006667b) bg_cale_side_pane

0x1bb4,	// (0x0005d8b6) cale_week_time_pane_t1

0x1bce,	// (0x0005d8d0) cale_week_time_pane_t2

0x1be8,	// (0x0005d8ea) cale_week_time_pane_t3

0x1c02,	// (0x0005d904) cale_week_time_pane_t4

0x1c1c,	// (0x0005d91e) cale_week_time_pane_t5

0x1c36,	// (0x0005d938) cale_week_time_pane_t6

0x1c56,	// (0x0005d958) cale_week_time_pane_t7

0x1c78,	// (0x0005d97a) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0006aee2) cale_week_time_pane_t

0x1c9c,	// (0x0005d99e) cell_cale_week_pane_g2

0x1cc0,	// (0x0005d9c2) cell_cale_week_pane_g3_ParamLimits

0x1cc0,	// (0x0005d9c2) cell_cale_week_pane_g3

0xa987,	// (0x00066689) grid_highlight_pane_cp07

0xa98f,	// (0x00066691) listscroll_gms_pane

0xa999,	// (0x0006669b) grid_gms_pane

0xa9a2,	// (0x000666a4) listscroll_gms_pane_g1

0xa9aa,	// (0x000666ac) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0006aef3) listscroll_gms_pane_g

0x1cd8,	// (0x0005d9da) scroll_pane_cp010

0x1ce3,	// (0x0005d9e5) cell_gms_pane_ParamLimits

0x1ce3,	// (0x0005d9e5) cell_gms_pane

0x1cf6,	// (0x0005d9f8) cell_gms_pane_g1

0xa9b2,	// (0x000666b4) cell_gms_pane_g2

0xa9ba,	// (0x000666bc) cell_gms_pane_g3

0xa9c3,	// (0x000666c5) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0006aef8) cell_gms_pane_g

0xa9cc,	// (0x000666ce) grid_highlight_pane_cp09

0x4337,	// (0x00060039) phob_pre_status_pane_g1

0x433f,	// (0x00060041) phob_pre_status_pane_g2

0x4347,	// (0x00060049) phob_pre_status_pane_g3

0x434f,	// (0x00060051) phob_pre_status_pane_g4

0x0004,

0xf50a,	// (0x0006b20c) phob_pre_status_pane_g

0x435f,	// (0x00060061) phob_pre_status_pane_t1

0x436f,	// (0x00060071) phob_pre_status_pane_t2

0x437f,	// (0x00060081) phob_pre_status_pane_t3

0x0002,

0xf515,	// (0x0006b217) phob_pre_status_pane_t

0xa9d4,	// (0x000666d6) bg_list_pane_cp05

0x1d06,	// (0x0005da08) grid_vorec_pane

0x1d10,	// (0x0005da12) vorec_t1

0x1d1e,	// (0x0005da20) vorec_t2

0x1d2c,	// (0x0005da2e) vorec_t3

0x1d3a,	// (0x0005da3c) vorec_t4

0x9bc5,	// (0x000658c7) vorec_t5

0x9bd3,	// (0x000658d5) vorec_t6

0x0004,

0xf1ff,	// (0x0006af01) vorec_t

0x9be1,	// (0x000658e3) wait_bar_pane_cp01

0x1d56,	// (0x0005da58) cell_vorec_pane_ParamLimits

0x1d56,	// (0x0005da58) cell_vorec_pane

0x1d69,	// (0x0005da6b) cell_vorec_pane_g1

0xa4ef,	// (0x000661f1) grid_highlight_pane_cp05

0x1d83,	// (0x0005da85) cams_zoom_pane

0x1d8f,	// (0x0005da91) image_vga_pane

0x1d9e,	// (0x0005daa0) main_camera_pane_g1

0x1dac,	// (0x0005daae) main_camera_pane_g2

0x1db8,	// (0x0005daba) main_camera_pane_g3

0x1dc4,	// (0x0005dac6) main_camera_pane_g4

0x1dd0,	// (0x0005dad2) main_camera_pane_g5

0x1ddc,	// (0x0005dade) main_camera_pane_g6

0x1de8,	// (0x0005daea) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0006af0c) main_camera_pane_g

0x1df4,	// (0x0005daf6) main_camera_pane_t1

0x1e06,	// (0x0005db08) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0006af1d) main_camera_pane_t

0x1e27,	// (0x0005db29) cams_zoom_pane_cp_ParamLimits

0x1e27,	// (0x0005db29) cams_zoom_pane_cp

0x1e4b,	// (0x0005db4d) image_cif_pane_ParamLimits

0x1e4b,	// (0x0005db4d) image_cif_pane

0x1e69,	// (0x0005db6b) image_subqcif_pane

0x1e71,	// (0x0005db73) main_video_pane_g1_ParamLimits

0x1e71,	// (0x0005db73) main_video_pane_g1

0x1e91,	// (0x0005db93) main_video_pane_g2_ParamLimits

0x1e91,	// (0x0005db93) main_video_pane_g2

0x1ec1,	// (0x0005dbc3) main_video_pane_g3_ParamLimits

0x1ec1,	// (0x0005dbc3) main_video_pane_g3

0x1eea,	// (0x0005dbec) main_video_pane_g4_ParamLimits

0x1eea,	// (0x0005dbec) main_video_pane_g4

0x1f13,	// (0x0005dc15) main_video_pane_g5_ParamLimits

0x1f13,	// (0x0005dc15) main_video_pane_g5

0xa9e8,	// (0x000666ea) main_video_pane_g6_ParamLimits

0xa9e8,	// (0x000666ea) main_video_pane_g6

0x0006,

0xf220,	// (0x0006af22) main_video_pane_g_ParamLimits

0xf220,	// (0x0006af22) main_video_pane_g

0x1f35,	// (0x0005dc37) main_video_pane_t1_ParamLimits

0x1f35,	// (0x0005dc37) main_video_pane_t1

0xaa02,	// (0x00066704) cams_zoom_pane_g1

0xaa0b,	// (0x0006670d) cams_zoom_pane_g2

0xaa14,	// (0x00066716) cams_zoom_pane_g3

0xaa1d,	// (0x0006671f) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0006af31) cams_zoom_pane_g

0x1f7f,	// (0x0005dc81) grid_cams_pane

0x1f8d,	// (0x0005dc8f) linegrid_cams_pane

0x1f9b,	// (0x0005dc9d) cell_cams_pane_ParamLimits

0x1f9b,	// (0x0005dc9d) cell_cams_pane

0xaa26,	// (0x00066728) cams_burst_image_pane

0xaa2e,	// (0x00066730) cell_cams_pane_g1

0xa4ef,	// (0x000661f1) grid_highlight_pane_cp03

0xa864,	// (0x00066566) mp_bg_pane_g1

0xa4ef,	// (0x000661f1) bg_list_pane_cp03

0xc751,	// (0x00068453) bg_mp_pane

0xc759,	// (0x0006845b) grid_mp_pane

0xc761,	// (0x00068463) media_player_g1

0xc769,	// (0x0006846b) media_player_t1

0xc777,	// (0x00068479) media_player_t2

0xc785,	// (0x00068487) media_player_t3

0xc793,	// (0x00068495) media_player_t4

0xc7a1,	// (0x000684a3) media_player_t5

0xc7af,	// (0x000684b1) media_player_t6

0xc7bd,	// (0x000684bf) media_player_t7

0x0006,

0x04c1,	// (0x0005c1c3) media_player_t

0xc7cb,	// (0x000684cd) wait_bar_pane_cp02

0xf4f6,	// (0x0006b1f8) main_usb_pane_t

0x432e,	// (0x00060030) cell_mp_pane

0xa864,	// (0x00066566) cell_mp_pane_g1

0xa4ef,	// (0x000661f1) grid_highlight_pane_cp06

0xaa36,	// (0x00066738) grid_skin_colour_pane

0xaa3e,	// (0x00066740) list_highlight_pane_cp03

0x20c2,	// (0x0005ddc4) skin_g1

0xaa46,	// (0x00066748) skin_t1

0xaa55,	// (0x00066757) skin_t2

0x0001,

0xf264,	// (0x0006af66) skin_t

0x20cc,	// (0x0005ddce) cell_skin_colour_pane_ParamLimits

0x20cc,	// (0x0005ddce) cell_skin_colour_pane

0xaa63,	// (0x00066765) cell_skin_colour_pane_g1

0x2150,	// (0x0005de52) call_video_g1_ParamLimits

0x2150,	// (0x0005de52) call_video_g1

0x2160,	// (0x0005de62) call_video_g2_ParamLimits

0x2160,	// (0x0005de62) call_video_g2

0x0001,

0xf269,	// (0x0006af6b) call_video_g_ParamLimits

0xf269,	// (0x0006af6b) call_video_g

0x21ba,	// (0x0005debc) call_video_uplink_pane_cp1_ParamLimits

0x21ba,	// (0x0005debc) call_video_uplink_pane_cp1

0xaa75,	// (0x00066777) call_video_uplink_pane_cp2

0x2286,	// (0x0005df88) video_down_crop_pane_ParamLimits

0x2286,	// (0x0005df88) video_down_crop_pane

0x2384,	// (0x0005e086) video_down_pane_ParamLimits

0x2384,	// (0x0005e086) video_down_pane

0xaa7d,	// (0x0006677f) video_down_subqcif_pane_ParamLimits

0xaa7d,	// (0x0006677f) video_down_subqcif_pane

0xaa95,	// (0x00066797) video_down_subqcif_pane_cp_ParamLimits

0xaa95,	// (0x00066797) video_down_subqcif_pane_cp

0xaabb,	// (0x000667bd) im_reading_pane_ParamLimits

0xaabb,	// (0x000667bd) im_reading_pane

0x24a4,	// (0x0005e1a6) im_writing_pane_ParamLimits

0x24a4,	// (0x0005e1a6) im_writing_pane

0x24c2,	// (0x0005e1c4) im_reading_pane_t1

0xaad5,	// (0x000667d7) list_im_pane

0xaae6,	// (0x000667e8) scroll_pane_cp07

0x2516,	// (0x0005e218) im_writing_pane_t1_ParamLimits

0x2516,	// (0x0005e218) im_writing_pane_t1

0xaaff,	// (0x00066801) im_writing_pane_t2_ParamLimits

0xaaff,	// (0x00066801) im_writing_pane_t2

0x0001,

0xf273,	// (0x0006af75) im_writing_pane_t_ParamLimits

0xf273,	// (0x0006af75) im_writing_pane_t

0xa4ef,	// (0x000661f1) input_focus_pane_cp04

0xa4ef,	// (0x000661f1) input_focus_pane_cp05

0x252b,	// (0x0005e22d) list_im_single_pane_ParamLimits

0x252b,	// (0x0005e22d) list_im_single_pane

0x254f,	// (0x0005e251) list_single_im_pane_t1

0x42f2,	// (0x0005fff4) blid_accuracy_pane

0x42fa,	// (0x0005fffc) blid_compass_pane

0x4304,	// (0x00060006) main_location_t1

0x4312,	// (0x00060014) main_location_t2

0x4320,	// (0x00060022) main_location_t3

0x0002,

0xf503,	// (0x0006b205) main_location_t

0xa4ef,	// (0x000661f1) aid_levels_location

0xa864,	// (0x00066566) blid_accuracy_pane_g1

0xa864,	// (0x00066566) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0006afd7) blid_accuracy_pane_g

0xab47,	// (0x00066849) wml_content_pane

0xab85,	// (0x00066887) wml_button_pane_ParamLimits

0xab85,	// (0x00066887) wml_button_pane

0x255e,	// (0x0005e260) wml_list_single_large_pane_ParamLimits

0x255e,	// (0x0005e260) wml_list_single_large_pane

0x2588,	// (0x0005e28a) wml_list_single_medium_pane_ParamLimits

0x2588,	// (0x0005e28a) wml_list_single_medium_pane

0x25b9,	// (0x0005e2bb) wml_list_single_small_pane_ParamLimits

0x25b9,	// (0x0005e2bb) wml_list_single_small_pane

0xab99,	// (0x0006689b) wml_selection_box_pane_ParamLimits

0xab99,	// (0x0006689b) wml_selection_box_pane

0xabac,	// (0x000668ae) wml_list_single_pane_t1

0xabbb,	// (0x000668bd) wml_list_single_medium_pane_t1

0xabca,	// (0x000668cc) wml_list_single_large_pane_t1

0xabd9,	// (0x000668db) input_focus_pane_cp02_ParamLimits

0xabd9,	// (0x000668db) input_focus_pane_cp02

0xabec,	// (0x000668ee) wml_selection_box_pane_g1

0xabf5,	// (0x000668f7) wml_selection_box_pane_t1_ParamLimits

0xabf5,	// (0x000668f7) wml_selection_box_pane_t1

0xa74a,	// (0x0006644c) bg_wml_button_pane_ParamLimits

0xa74a,	// (0x0006644c) bg_wml_button_pane

0xac0d,	// (0x0006690f) wml_button_pane_g1

0xac15,	// (0x00066917) wml_button_pane_t1

0xac0d,	// (0x0006690f) wml_button_bg_pane_g1

0xac25,	// (0x00066927) wml_button_bg_pane_g2

0xac2d,	// (0x0006692f) wml_button_bg_pane_g3

0xac35,	// (0x00066937) wml_button_bg_pane_g4

0xac3d,	// (0x0006693f) wml_button_bg_pane_g5

0xac45,	// (0x00066947) wml_button_bg_pane_g6

0xac4d,	// (0x0006694f) wml_button_bg_pane_g7

0xac55,	// (0x00066957) wml_button_bg_pane_g8

0xac5d,	// (0x0006695f) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0006af7a) wml_button_bg_pane_g

0x25f3,	// (0x0005e2f5) bg_list_pane_cp02

0xac65,	// (0x00066967) mce_header_pane_ParamLimits

0xac65,	// (0x00066967) mce_header_pane

0xac7b,	// (0x0006697d) mce_icon_pane

0xac7b,	// (0x0006697d) mce_image_pane

0xac84,	// (0x00066986) mce_text_pane_ParamLimits

0xac84,	// (0x00066986) mce_text_pane

0x25fd,	// (0x0005e2ff) scroll_pane_cp03

0xab7d,	// (0x0006687f) scroll_pane_cp04

0xac97,	// (0x00066999) scroll_pane_cp05_ParamLimits

0xac97,	// (0x00066999) scroll_pane_cp05

0x2607,	// (0x0005e309) mce_header_field_pane_ParamLimits

0x2607,	// (0x0005e309) mce_header_field_pane

0x2627,	// (0x0005e329) mce_header_field_pane_2_ParamLimits

0x2627,	// (0x0005e329) mce_header_field_pane_2

0x263d,	// (0x0005e33f) mce_header_field_pane_3

0x2645,	// (0x0005e347) list_single_mce_message_pane_ParamLimits

0x2645,	// (0x0005e347) list_single_mce_message_pane

0x2670,	// (0x0005e372) list_single_mce_smart_pane_ParamLimits

0x2670,	// (0x0005e372) list_single_mce_smart_pane

0xaca3,	// (0x000669a5) input_focus_pane_cp03

0xacac,	// (0x000669ae) list_header_data_pane

0x26a6,	// (0x0005e3a8) mce_header_field_pane_t1

0x26b4,	// (0x0005e3b6) list_single_mce_header_pane_ParamLimits

0x26b4,	// (0x0005e3b6) list_single_mce_header_pane

0xacb4,	// (0x000669b6) list_single_mce_header_pane_t1

0xacc3,	// (0x000669c5) list_single_mce_message_pane_g1

0xaccb,	// (0x000669cd) list_single_mce_message_pane_t1

0x2706,	// (0x0005e408) bg_cale_heading_pane_cp01_ParamLimits

0x2706,	// (0x0005e408) bg_cale_heading_pane_cp01

0xacd9,	// (0x000669db) bg_cale_pane_cp02_ParamLimits

0xacd9,	// (0x000669db) bg_cale_pane_cp02

0x2749,	// (0x0005e44b) cale_month_corner_pane

0x2763,	// (0x0005e465) cale_month_day_heading_pane_ParamLimits

0x2763,	// (0x0005e465) cale_month_day_heading_pane

0x27be,	// (0x0005e4c0) cale_month_pane_g1_ParamLimits

0x27be,	// (0x0005e4c0) cale_month_pane_g1

0x27f6,	// (0x0005e4f8) cale_month_pane_g2_ParamLimits

0x27f6,	// (0x0005e4f8) cale_month_pane_g2

0x281f,	// (0x0005e521) cale_month_pane_g3_ParamLimits

0x281f,	// (0x0005e521) cale_month_pane_g3

0x286b,	// (0x0005e56d) cale_month_pane_g4_ParamLimits

0x286b,	// (0x0005e56d) cale_month_pane_g4

0x28b7,	// (0x0005e5b9) cale_month_pane_g5_ParamLimits

0x28b7,	// (0x0005e5b9) cale_month_pane_g5

0x2903,	// (0x0005e605) cale_month_pane_g6_ParamLimits

0x2903,	// (0x0005e605) cale_month_pane_g6

0x294f,	// (0x0005e651) cale_month_pane_g7_ParamLimits

0x294f,	// (0x0005e651) cale_month_pane_g7

0x29b3,	// (0x0005e6b5) cale_month_pane_g8_ParamLimits

0x29b3,	// (0x0005e6b5) cale_month_pane_g8

0x2a17,	// (0x0005e719) cale_month_pane_g9_ParamLimits

0x2a17,	// (0x0005e719) cale_month_pane_g9

0x2a75,	// (0x0005e777) cale_month_pane_g10_ParamLimits

0x2a75,	// (0x0005e777) cale_month_pane_g10

0x2ad1,	// (0x0005e7d3) cale_month_pane_g11_ParamLimits

0x2ad1,	// (0x0005e7d3) cale_month_pane_g11

0x2b25,	// (0x0005e827) cale_month_pane_g12_ParamLimits

0x2b25,	// (0x0005e827) cale_month_pane_g12

0x2b7b,	// (0x0005e87d) cale_month_pane_g13_ParamLimits

0x2b7b,	// (0x0005e87d) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0006af8d) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0006af8d) cale_month_pane_g

0x2bd1,	// (0x0005e8d3) cale_month_week_pane

0x2be6,	// (0x0005e8e8) grid_cale_month_pane_ParamLimits

0x2be6,	// (0x0005e8e8) grid_cale_month_pane

0x2c34,	// (0x0005e936) cale_month_day_heading_pane_t1

0x2cba,	// (0x0005e9bc) cale_month_day_heading_pane_t2

0x2d4b,	// (0x0005ea4d) cale_month_day_heading_pane_t3

0x2ddc,	// (0x0005eade) cale_month_day_heading_pane_t4

0x2e6d,	// (0x0005eb6f) cale_month_day_heading_pane_t5

0x2efe,	// (0x0005ec00) cale_month_day_heading_pane_t6

0x2f8f,	// (0x0005ec91) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0006afa8) cale_month_day_heading_pane_t

0xa979,	// (0x0006667b) bg_cale_side_pane_cp01

0x3038,	// (0x0005ed3a) cale_month_week_pane_t1

0x3051,	// (0x0005ed53) cale_month_week_pane_t2

0x306a,	// (0x0005ed6c) cale_month_week_pane_t3

0x3083,	// (0x0005ed85) cale_month_week_pane_t4

0x309c,	// (0x0005ed9e) cale_month_week_pane_t5

0x30bd,	// (0x0005edbf) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0006afb7) cale_month_week_pane_t

0x30de,	// (0x0005ede0) cell_cale_month_pane_ParamLimits

0x30de,	// (0x0005ede0) cell_cale_month_pane

0x322a,	// (0x0005ef2c) cell_cale_month_pane_g1

0x3236,	// (0x0005ef38) cell_cale_month_pane_t1_ParamLimits

0x3236,	// (0x0005ef38) cell_cale_month_pane_t1

0xa987,	// (0x00066689) grid_highlight_pane_cp08

0xa864,	// (0x00066566) main_smil_g1

0x3262,	// (0x0005ef64) smil_status_pane

0xad18,	// (0x00066a1a) smil_text_pane

0xc671,	// (0x00068373) bg_popup_call3_rect_pane_g8

0xc679,	// (0x0006837b) bg_popup_call3_rect_pane_g9

0x0008,

0xf4de,	// (0x0006b1e0) bg_popup_call3_rect_pane_g

0xc8d3,	// (0x000685d5) smil_status_volume_pane_g1

0xad22,	// (0x00066a24) smil_status_pane_t1

0x472a,	// (0x0006042c) volume_smil_pane

0xad39,	// (0x00066a3b) list_smil_text_pane

0x3275,	// (0x0005ef77) scroll_pane_cp011

0x3280,	// (0x0005ef82) smil_text_list_pane_t1_ParamLimits

0x3280,	// (0x0005ef82) smil_text_list_pane_t1

0x32f8,	// (0x0005effa) aid_volume_smil_ParamLimits

0x32f8,	// (0x0005effa) aid_volume_smil

0xa864,	// (0x00066566) smil_volume_pane_g1

0xa864,	// (0x00066566) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0006afd7) smil_volume_pane_g

0x17a4,	// (0x0005d4a6) listscroll_cale_day_pane

0xad43,	// (0x00066a45) bg_cale_pane

0xad5b,	// (0x00066a5d) list_cale_pane

0xad7e,	// (0x00066a80) scroll_pane_cp09

0xad8f,	// (0x00066a91) cale_bg_pane_g1

0xad97,	// (0x00066a99) cale_bg_pane_g2

0xad9f,	// (0x00066aa1) cale_bg_pane_g3

0xada7,	// (0x00066aa9) cale_bg_pane_g4

0xadaf,	// (0x00066ab1) cale_bg_pane_g5

0xadb7,	// (0x00066ab9) cale_bg_pane_g6

0xadbf,	// (0x00066ac1) cale_bg_pane_g7

0xadc7,	// (0x00066ac9) cale_bg_pane_g8

0xadcf,	// (0x00066ad1) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0006afdc) cale_bg_pane_g

0x3322,	// (0x0005f024) list_cale_time_pane_ParamLimits

0x3322,	// (0x0005f024) list_cale_time_pane

0xadd7,	// (0x00066ad9) list_cale_time_pane_g1_ParamLimits

0xadd7,	// (0x00066ad9) list_cale_time_pane_g1

0xade3,	// (0x00066ae5) list_cale_time_pane_g2_ParamLimits

0xade3,	// (0x00066ae5) list_cale_time_pane_g2

0x3344,	// (0x0005f046) list_cale_time_pane_g3_ParamLimits

0x3344,	// (0x0005f046) list_cale_time_pane_g3

0x3352,	// (0x0005f054) list_cale_time_pane_g4_ParamLimits

0x3352,	// (0x0005f054) list_cale_time_pane_g4

0x3360,	// (0x0005f062) list_cale_time_pane_g5_ParamLimits

0x3360,	// (0x0005f062) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0006afef) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0006afef) list_cale_time_pane_g

0xadfd,	// (0x00066aff) list_cale_time_pane_t1_ParamLimits

0xadfd,	// (0x00066aff) list_cale_time_pane_t1

0xae25,	// (0x00066b27) list_cale_time_pane_t2_ParamLimits

0xae25,	// (0x00066b27) list_cale_time_pane_t2

0x36f6,	// (0x0005f3f8) aid_blid_cardinal_pane

0x3738,	// (0x0005f43a) compass_pane_t4

0xae4d,	// (0x00066b4f) list_cale_time_pane_t4_ParamLimits

0xae4d,	// (0x00066b4f) list_cale_time_pane_t4

0x3746,	// (0x0005f448) compass_pane_t5

0x3756,	// (0x0005f458) compass_pane_t6

0x3764,	// (0x0005f466) compass_pane_t7

0xb30a,	// (0x0006700c) navi_pane_cc_t1

0xb4e7,	// (0x000671e9) aid_phob_thumbnail_center_pane

0x3df8,	// (0x0005fafa) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0006affc) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0006affc) list_cale_time_pane_t

0x9c5f,	// (0x00065961) bg_popup_window_pane_cp02_ParamLimits

0x9c5f,	// (0x00065961) bg_popup_window_pane_cp02

0xae75,	// (0x00066b77) heading_pane_cp01_ParamLimits

0xae75,	// (0x00066b77) heading_pane_cp01

0xae81,	// (0x00066b83) loc_req_pane_ParamLimits

0xae81,	// (0x00066b83) loc_req_pane

0xae91,	// (0x00066b93) loc_type_pane_ParamLimits

0xae91,	// (0x00066b93) loc_type_pane

0xaea3,	// (0x00066ba5) loc_type_pane_t1_ParamLimits

0xaea3,	// (0x00066ba5) loc_type_pane_t1

0xaeb5,	// (0x00066bb7) loc_type_pane_t2_ParamLimits

0xaeb5,	// (0x00066bb7) loc_type_pane_t2

0xaec7,	// (0x00066bc9) loc_type_pane_t3_ParamLimits

0xaec7,	// (0x00066bc9) loc_type_pane_t3

0x0002,

0xf301,	// (0x0006b003) loc_type_pane_t_ParamLimits

0xf301,	// (0x0006b003) loc_type_pane_t

0xaed9,	// (0x00066bdb) list_loc_req_pane

0xaee3,	// (0x00066be5) scroll_pane_cp012

0x336e,	// (0x0005f070) list_single_loc_request_popup_menu_pane_ParamLimits

0x336e,	// (0x0005f070) list_single_loc_request_popup_menu_pane

0xaeee,	// (0x00066bf0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaeee,	// (0x00066bf0) list_single_loc_request_popup_menu_pane_g1

0xaefa,	// (0x00066bfc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaefa,	// (0x00066bfc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0006b00a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0006b00a) list_single_loc_request_popup_menu_pane_g

0xaf06,	// (0x00066c08) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf06,	// (0x00066c08) list_single_loc_request_popup_menu_pane_t1

0x3380,	// (0x0005f082) bg_popup_window_pane_cp03_ParamLimits

0x3380,	// (0x0005f082) bg_popup_window_pane_cp03

0x338e,	// (0x0005f090) heading_loc_req_pane_ParamLimits

0x338e,	// (0x0005f090) heading_loc_req_pane

0x339a,	// (0x0005f09c) popup_dyc_status_message_window_g1_ParamLimits

0x339a,	// (0x0005f09c) popup_dyc_status_message_window_g1

0x33a6,	// (0x0005f0a8) popup_dyc_status_message_window_t1_ParamLimits

0x33a6,	// (0x0005f0a8) popup_dyc_status_message_window_t1

0x33b8,	// (0x0005f0ba) popup_dyc_status_message_window_t2_ParamLimits

0x33b8,	// (0x0005f0ba) popup_dyc_status_message_window_t2

0x33ca,	// (0x0005f0cc) popup_dyc_status_message_window_t3_ParamLimits

0x33ca,	// (0x0005f0cc) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0006b00f) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0006b00f) popup_dyc_status_message_window_t

0xa4ef,	// (0x000661f1) bg_heading_pane_cp01

0xaf1c,	// (0x00066c1e) heading_loc_req_pane_g1

0xaf24,	// (0x00066c26) heading_loc_req_pane_g2

0xaf2c,	// (0x00066c2e) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0006b016) heading_loc_req_pane_g

0xaf34,	// (0x00066c36) heading_loc_req_pane_t1

0xaf4f,	// (0x00066c51) bg_popup_sub_pane_cp01_ParamLimits

0xaf4f,	// (0x00066c51) bg_popup_sub_pane_cp01

0xaf5d,	// (0x00066c5f) popup_cale_events_window_g1_ParamLimits

0xaf5d,	// (0x00066c5f) popup_cale_events_window_g1

0xaf7d,	// (0x00066c7f) popup_cale_events_window_g2_ParamLimits

0xaf7d,	// (0x00066c7f) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0006b04a) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0006b04a) popup_cale_events_window_g

0xaf9d,	// (0x00066c9f) popup_cale_events_window_t1_ParamLimits

0xaf9d,	// (0x00066c9f) popup_cale_events_window_t1

0xafaf,	// (0x00066cb1) popup_cale_events_window_t2_ParamLimits

0xafaf,	// (0x00066cb1) popup_cale_events_window_t2

0xafed,	// (0x00066cef) popup_cale_events_window_t3_ParamLimits

0xafed,	// (0x00066cef) popup_cale_events_window_t3

0xb027,	// (0x00066d29) popup_cale_events_window_t4_ParamLimits

0xb027,	// (0x00066d29) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0006b04f) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0006b04f) popup_cale_events_window_t

0x34c3,	// (0x0005f1c5) call_type_pane

0xb1b7,	// (0x00066eb9) popup_call_status_window_g1

0x34cf,	// (0x0005f1d1) popup_call_status_window_g2

0x34db,	// (0x0005f1dd) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0006b058) popup_call_status_window_g

0xb05d,	// (0x00066d5f) call_type_pane_g1

0xb066,	// (0x00066d68) call_type_pane_g2

0x0001,

0xf35d,	// (0x0006b05f) call_type_pane_g

0xa4ef,	// (0x000661f1) bg_popup_sub_pane_cp02

0xb06f,	// (0x00066d71) listscroll_popup_wml_pane

0xb077,	// (0x00066d79) list_wml_pane

0xb081,	// (0x00066d83) scroll_pane_cp013

0xb08c,	// (0x00066d8e) list_single_graphic_popup_wml_pane_ParamLimits

0xb08c,	// (0x00066d8e) list_single_graphic_popup_wml_pane

0xa864,	// (0x00066566) list_single_graphic_popup_wml_pane_g1

0xb0a0,	// (0x00066da2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0006b064) list_single_graphic_popup_wml_pane_g

0xb0a8,	// (0x00066daa) list_single_graphic_popup_wml_pane_t1

0xb0be,	// (0x00066dc0) aid_call_pane

0xa742,	// (0x00066444) popup_clock_analogue_window_g1

0xa742,	// (0x00066444) popup_clock_analogue_window_g2

0x34e7,	// (0x0005f1e9) popup_clock_analogue_window_g3

0x34e7,	// (0x0005f1e9) popup_clock_analogue_window_g4

0xa864,	// (0x00066566) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0006b069) popup_clock_analogue_window_g

0x34ef,	// (0x0005f1f1) popup_clock_analogue_window_t1

0x34fd,	// (0x0005f1ff) clock_digital_number_pane_ParamLimits

0x34fd,	// (0x0005f1ff) clock_digital_number_pane

0x3509,	// (0x0005f20b) clock_digital_number_pane_cp02_ParamLimits

0x3509,	// (0x0005f20b) clock_digital_number_pane_cp02

0x3515,	// (0x0005f217) clock_digital_number_pane_cp03_ParamLimits

0x3515,	// (0x0005f217) clock_digital_number_pane_cp03

0x3521,	// (0x0005f223) clock_digital_number_pane_cp04_ParamLimits

0x3521,	// (0x0005f223) clock_digital_number_pane_cp04

0x3531,	// (0x0005f233) clock_digital_separator_pane_ParamLimits

0x3531,	// (0x0005f233) clock_digital_separator_pane

0x353d,	// (0x0005f23f) popup_clock_digital_window_t1

0xa864,	// (0x00066566) clock_digital_number_pane_g1

0xa864,	// (0x00066566) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0006afd7) clock_digital_number_pane_g

0xa864,	// (0x00066566) clock_digital_separator_pane_g1

0xa864,	// (0x00066566) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0006afd7) clock_digital_separator_pane_g

0xa4ef,	// (0x000661f1) bg_popup_window_pane_cp04

0xb0c6,	// (0x00066dc8) heading_pane_cp03

0xb0ce,	// (0x00066dd0) listscroll_popup_gms_pane

0xb0d6,	// (0x00066dd8) grid_large_graphic_popup_pane

0xb0e0,	// (0x00066de2) listscroll_popup_gms_pane_g1

0xb0e8,	// (0x00066dea) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0006b074) listscroll_popup_gms_pane_g

0xab7d,	// (0x0006687f) scroll_pane_cp014

0x355a,	// (0x0005f25c) cell_large_graphic_popup_pane_ParamLimits

0x355a,	// (0x0005f25c) cell_large_graphic_popup_pane

0x3572,	// (0x0005f274) cell_large_graphic_popup_pane_g1_ParamLimits

0x3572,	// (0x0005f274) cell_large_graphic_popup_pane_g1

0xb0f0,	// (0x00066df2) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0f0,	// (0x00066df2) cell_large_graphic_popup_pane_g2

0xb0fc,	// (0x00066dfe) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0fc,	// (0x00066dfe) cell_large_graphic_popup_pane_g3

0xb109,	// (0x00066e0b) cell_large_graphic_popup_pane_g4_ParamLimits

0xb109,	// (0x00066e0b) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0006b079) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0006b079) cell_large_graphic_popup_pane_g

0xb119,	// (0x00066e1b) grid_highlight_pane_cp010

0xa864,	// (0x00066566) bg_popup_call_pane_g1

0xb123,	// (0x00066e25) list_single_graphic_popup_conf_pane_ParamLimits

0xb123,	// (0x00066e25) list_single_graphic_popup_conf_pane

0xb136,	// (0x00066e38) list_highlight_pane_cp01

0xb13f,	// (0x00066e41) list_single_graphic_popup_conf_pane_g1

0xb147,	// (0x00066e49) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0006b082) list_single_graphic_popup_conf_pane_g

0xb14f,	// (0x00066e51) list_single_graphic_popup_conf_pane_t1

0xb15d,	// (0x00066e5f) linegrid_cams_pane_g1

0x357e,	// (0x0005f280) linegrid_cams_pane_g2

0xa9ba,	// (0x000666bc) linegrid_cams_pane_g3

0xb166,	// (0x00066e68) linegrid_cams_pane_g4

0x3587,	// (0x0005f289) linegrid_cams_pane_g5

0x3590,	// (0x0005f292) linegrid_cams_pane_g6

0xa9c3,	// (0x000666c5) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0006b087) linegrid_cams_pane_g

0xb16f,	// (0x00066e71) popup_clock_analogue_window

0xb16f,	// (0x00066e71) popup_clock_digital_window

0xa4ef,	// (0x000661f1) popup_phob_thumbnail_window

0xa864,	// (0x00066566) call_video_uplink_pane_g1

0xb178,	// (0x00066e7a) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0006b096) call_video_uplink_pane_g

0xb180,	// (0x00066e82) video_uplink_pane

0xb188,	// (0x00066e8a) mce_image_pane_g1

0x3599,	// (0x0005f29b) mce_image_pane_g2

0x35a3,	// (0x0005f2a5) mce_image_pane_g3

0x35ab,	// (0x0005f2ad) mce_image_pane_g4

0x35b3,	// (0x0005f2b5) mce_image_pane_g5

0x0004,

0xf399,	// (0x0006b09b) mce_image_pane_g

0xb192,	// (0x00066e94) control_top_pane_stacon_cp01_ParamLimits

0xb192,	// (0x00066e94) control_top_pane_stacon_cp01

0xb1a6,	// (0x00066ea8) uni_indicator_pane_stacon_cp01_ParamLimits

0xb1a6,	// (0x00066ea8) uni_indicator_pane_stacon_cp01

0xb1c5,	// (0x00066ec7) bg_popup_sub_pane_cp03

0xb1cf,	// (0x00066ed1) chi_dic_find_pane

0x35bb,	// (0x0005f2bd) listscroll_chi_dic_pane

0xb1d7,	// (0x00066ed9) main_pane_chidic_g1

0xb1df,	// (0x00066ee1) chi_dic_find_pane_t1

0xb1ed,	// (0x00066eef) find_chidic_pane

0xb1f6,	// (0x00066ef8) chi_dic_list_pane_ParamLimits

0xb1f6,	// (0x00066ef8) chi_dic_list_pane

0xb207,	// (0x00066f09) scroll_pane_cp020

0xb20f,	// (0x00066f11) find_chidic_pane_t1

0xa4ef,	// (0x000661f1) input_focus_pane_cp06

0x35cf,	// (0x0005f2d1) list_chi_dic_pane_ParamLimits

0x35cf,	// (0x0005f2d1) list_chi_dic_pane

0x35e9,	// (0x0005f2eb) list_chi_dic_pane_t1_ParamLimits

0x35e9,	// (0x0005f2eb) list_chi_dic_pane_t1

0xa4ef,	// (0x000661f1) list_highlight_pane_cp020

0xb21e,	// (0x00066f20) bg_cale_heading_pane_g1

0x35fc,	// (0x0005f2fe) bg_cale_heading_pane_g2

0x3604,	// (0x0005f306) bg_cale_heading_pane_g3

0x360c,	// (0x0005f30e) bg_cale_heading_pane_g4

0x3616,	// (0x0005f318) bg_cale_heading_pane_g5

0x3620,	// (0x0005f322) bg_cale_heading_pane_g6

0x3628,	// (0x0005f32a) bg_cale_heading_pane_g7

0x3630,	// (0x0005f332) bg_cale_heading_pane_g8

0x363a,	// (0x0005f33c) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0006b0a6) bg_cale_heading_pane_g

0xb21e,	// (0x00066f20) bg_cale_side_pane_g1

0x3644,	// (0x0005f346) bg_cale_side_pane_g2

0x364e,	// (0x0005f350) bg_cale_side_pane_g3

0x3658,	// (0x0005f35a) bg_cale_side_pane_g4

0x3662,	// (0x0005f364) bg_cale_side_pane_g5

0x366c,	// (0x0005f36e) bg_cale_side_pane_g6

0x3676,	// (0x0005f378) bg_cale_side_pane_g7

0x3680,	// (0x0005f382) bg_cale_side_pane_g8

0x3688,	// (0x0005f38a) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0006b0b9) bg_cale_side_pane_g

0x3690,	// (0x0005f392) popup_call_status_window_ParamLimits

0x3690,	// (0x0005f392) popup_call_status_window

0xb226,	// (0x00066f28) stacon_top_pane

0xb22e,	// (0x00066f30) status_pane_ParamLimits

0xb22e,	// (0x00066f30) status_pane

0xb243,	// (0x00066f45) status_small_pane

0xb24b,	// (0x00066f4d) control_pane

0xa4ef,	// (0x000661f1) stacon_bottom_pane

0xb253,	// (0x00066f55) list_single_mce_smart_pane_t1_ParamLimits

0xb253,	// (0x00066f55) list_single_mce_smart_pane_t1

0xb266,	// (0x00066f68) list_single_mce_smart_pane_t2_ParamLimits

0xb266,	// (0x00066f68) list_single_mce_smart_pane_t2

0x0001,

0x02c0,	// (0x0005bfc2) list_single_mce_smart_pane_t_ParamLimits

0x02c0,	// (0x0005bfc2) list_single_mce_smart_pane_t

0x369c,	// (0x0005f39e) compass_pane

0x36a8,	// (0x0005f3aa) main_location2_pane_t1

0x36bc,	// (0x0005f3be) main_location2_pane_t2

0x36d0,	// (0x0005f3d2) main_location2_pane_t3

0x0003,

0xf3ca,	// (0x0006b0cc) main_location2_pane_t

0xb285,	// (0x00066f87) compass_pane_g1_ParamLimits

0xb285,	// (0x00066f87) compass_pane_g1

0x371a,	// (0x0005f41c) compass_pane_t1

0x3729,	// (0x0005f42b) compass_pane_t2

0x0005,

0xf3d3,	// (0x0006b0d5) compass_pane_t

0x3774,	// (0x0005f476) text_secondary_cp61

0xb301,	// (0x00067003) navi_pane_cams_g5

0xb37d,	// (0x0006707f) navi_pane_im_t1

0xb38b,	// (0x0006708d) navi_pane_mp_g1_ParamLimits

0xb38b,	// (0x0006708d) navi_pane_mp_g1

0xb39f,	// (0x000670a1) navi_pane_mp_g2_ParamLimits

0xb39f,	// (0x000670a1) navi_pane_mp_g2

0xb3ab,	// (0x000670ad) navi_pane_mp_g3_ParamLimits

0xb3ab,	// (0x000670ad) navi_pane_mp_g3

0x0002,

0x02e2,	// (0x0005bfe4) navi_pane_mp_g_ParamLimits

0x02e2,	// (0x0005bfe4) navi_pane_mp_g

0xb3b7,	// (0x000670b9) navi_pane_mp_t1

0xb3c5,	// (0x000670c7) navi_pane_mp_t2

0x0002,

0x02e9,	// (0x0005bfeb) navi_pane_mp_t

0xb430,	// (0x00067132) navi_pane_vt_g1

0xb3b7,	// (0x000670b9) navi_pane_vt_t1

0xb438,	// (0x0006713a) navi_slider_pane

0xa9d4,	// (0x000666d6) zooming_pane

0xb448,	// (0x0006714a) navi_slider_pane_g1

0x37af,	// (0x0005f4b1) navi_slider_pane_g2

0x0006,

0xf3e0,	// (0x0006b0e2) navi_slider_pane_g

0xb46c,	// (0x0006716e) aid_levels_zoom

0xb474,	// (0x00067176) zooming_pane_g1

0xb47c,	// (0x0006717e) zooming_pane_g2

0xb47c,	// (0x0006717e) zooming_pane_g3

0x0002,

0x02ff,	// (0x0005c001) zooming_pane_g

0xb484,	// (0x00067186) level_10_zoom

0xb48d,	// (0x0006718f) level_11_zoom

0xb496,	// (0x00067198) level_1_zoom

0xb49f,	// (0x000671a1) level_2_zoom

0xb4a8,	// (0x000671aa) level_3_zoom

0xb4b1,	// (0x000671b3) level_4_zoom

0xb4ba,	// (0x000671bc) level_5_zoom

0xb4c3,	// (0x000671c5) level_6_zoom

0xb4cc,	// (0x000671ce) level_7_zoom

0xb4d5,	// (0x000671d7) level_8_zoom

0xb4de,	// (0x000671e0) level_9_zoom

0xb4ef,	// (0x000671f1) popup_phob_thumbnail_window_g1

0xb4f7,	// (0x000671f9) popup_phob_thumbnail_window_g2

0x0001,

0x0306,	// (0x0005c008) popup_phob_thumbnail_window_g

0xc7d3,	// (0x000684d5) level_1_location

0xc7db,	// (0x000684dd) level_2_location

0xc7e3,	// (0x000684e5) level_3_location

0xc7eb,	// (0x000684ed) level_4_location

0xa9d4,	// (0x000666d6) level_5_location

0x37c1,	// (0x0005f4c3) mce_icon_pane_g1

0x37c9,	// (0x0005f4cb) mce_icon_pane_g2

0x0001,

0xf3ef,	// (0x0006b0f1) mce_icon_pane_g

0x37d1,	// (0x0005f4d3) main_mup_pane_g1_ParamLimits

0x37d1,	// (0x0005f4d3) main_mup_pane_g1

0x37e9,	// (0x0005f4eb) main_mup_pane_g2_ParamLimits

0x37e9,	// (0x0005f4eb) main_mup_pane_g2

0x3805,	// (0x0005f507) main_mup_pane_g3_ParamLimits

0x3805,	// (0x0005f507) main_mup_pane_g3

0x3821,	// (0x0005f523) main_mup_pane_g4_ParamLimits

0x3821,	// (0x0005f523) main_mup_pane_g4

0x383d,	// (0x0005f53f) main_mup_pane_g5_ParamLimits

0x383d,	// (0x0005f53f) main_mup_pane_g5

0x385e,	// (0x0005f560) main_mup_pane_g6_ParamLimits

0x385e,	// (0x0005f560) main_mup_pane_g6

0x387a,	// (0x0005f57c) main_mup_pane_g7_ParamLimits

0x387a,	// (0x0005f57c) main_mup_pane_g7

0x3896,	// (0x0005f598) main_mup_pane_g8_ParamLimits

0x3896,	// (0x0005f598) main_mup_pane_g8

0x38b6,	// (0x0005f5b8) main_mup_pane_g9_ParamLimits

0x38b6,	// (0x0005f5b8) main_mup_pane_g9

0x38d5,	// (0x0005f5d7) main_mup_pane_g10_ParamLimits

0x38d5,	// (0x0005f5d7) main_mup_pane_g10

0x38f4,	// (0x0005f5f6) main_mup_pane_g11_ParamLimits

0x38f4,	// (0x0005f5f6) main_mup_pane_g11

0x390c,	// (0x0005f60e) main_mup_pane_g12_ParamLimits

0x390c,	// (0x0005f60e) main_mup_pane_g12

0x391a,	// (0x0005f61c) main_mup_pane_g13_ParamLimits

0x391a,	// (0x0005f61c) main_mup_pane_g13

0x000c,

0xf3f4,	// (0x0006b0f6) main_mup_pane_g_ParamLimits

0xf3f4,	// (0x0006b0f6) main_mup_pane_g

0x3930,	// (0x0005f632) main_mup_pane_t1_ParamLimits

0x3930,	// (0x0005f632) main_mup_pane_t1

0x394d,	// (0x0005f64f) main_mup_pane_t2_ParamLimits

0x394d,	// (0x0005f64f) main_mup_pane_t2

0x3967,	// (0x0005f669) main_mup_pane_t3_ParamLimits

0x3967,	// (0x0005f669) main_mup_pane_t3

0x3981,	// (0x0005f683) main_mup_pane_t4_ParamLimits

0x3981,	// (0x0005f683) main_mup_pane_t4

0x3993,	// (0x0005f695) main_mup_pane_t5_ParamLimits

0x3993,	// (0x0005f695) main_mup_pane_t5

0x39a5,	// (0x0005f6a7) main_mup_pane_t6_ParamLimits

0x39a5,	// (0x0005f6a7) main_mup_pane_t6

0x0005,

0xf40f,	// (0x0006b111) main_mup_pane_t_ParamLimits

0xf40f,	// (0x0006b111) main_mup_pane_t

0x39bb,	// (0x0005f6bd) mup_progress_pane_ParamLimits

0x39bb,	// (0x0005f6bd) mup_progress_pane

0x39c7,	// (0x0005f6c9) mup_visualizer_pane_ParamLimits

0x39c7,	// (0x0005f6c9) mup_visualizer_pane

0x3a01,	// (0x0005f703) mup_volume_pane_ParamLimits

0x3a01,	// (0x0005f703) mup_volume_pane

0xb1b7,	// (0x00066eb9) mup_visualizer_pane_g1_ParamLimits

0xb1b7,	// (0x00066eb9) mup_visualizer_pane_g1

0xb1b7,	// (0x00066eb9) mup_visualizer_pane_g2_ParamLimits

0xb1b7,	// (0x00066eb9) mup_visualizer_pane_g2

0xb285,	// (0x00066f87) mup_visualizer_pane_g3_ParamLimits

0xb285,	// (0x00066f87) mup_visualizer_pane_g3

0x0002,

0xf41c,	// (0x0006b11e) mup_visualizer_pane_g_ParamLimits

0xf41c,	// (0x0006b11e) mup_visualizer_pane_g

0xa864,	// (0x00066566) mup_volume_pane_g1

0xb507,	// (0x00067209) mup_volume_pane_g2

0x0001,

0xf423,	// (0x0006b125) mup_volume_pane_g

0xa864,	// (0x00066566) mup_progress_pane_g1

0xb510,	// (0x00067212) mup_progress_pane_g2

0xb519,	// (0x0006721b) mup_progress_pane_g3

0x0002,

0xf428,	// (0x0006b12a) mup_progress_pane_g

0xa4ef,	// (0x000661f1) bg_popup_window_pane_cp05

0xb522,	// (0x00067224) heading_pane_cp02_ParamLimits

0xb522,	// (0x00067224) heading_pane_cp02

0xb53c,	// (0x0006723e) list_popup_blid_pane

0xb544,	// (0x00067246) list_blid_sat_info_pane_ParamLimits

0xb544,	// (0x00067246) list_blid_sat_info_pane

0xb557,	// (0x00067259) list_blid_sat_info_pane_g1

0xb55f,	// (0x00067261) list_blid_sat_info_pane_t1

0x3b0e,	// (0x0005f810) mup_equalizer_pane_ParamLimits

0x3b0e,	// (0x0005f810) mup_equalizer_pane

0x3b2f,	// (0x0005f831) mup_equalizer_pane_cp1_ParamLimits

0x3b2f,	// (0x0005f831) mup_equalizer_pane_cp1

0x3b50,	// (0x0005f852) mup_equalizer_pane_cp2_ParamLimits

0x3b50,	// (0x0005f852) mup_equalizer_pane_cp2

0x3b71,	// (0x0005f873) mup_equalizer_pane_cp3_ParamLimits

0x3b71,	// (0x0005f873) mup_equalizer_pane_cp3

0x3b92,	// (0x0005f894) mup_equalizer_pane_cp4_ParamLimits

0x3b92,	// (0x0005f894) mup_equalizer_pane_cp4

0x3bb3,	// (0x0005f8b5) mup_equalizer_pane_cp5

0x3bc9,	// (0x0005f8cb) mup_equalizer_pane_cp6

0x3be1,	// (0x0005f8e3) mup_equalizer_pane_cp7

0xc6f1,	// (0x000683f3) bg_popup_call_poc_act_pane_g9

0xc6f9,	// (0x000683fb) bg_popup_call_poc_act_pane_g10

0xc701,	// (0x00068403) bg_popup_call_poc_act_pane_g11

0x000a,

0xa74a,	// (0x0006644c) mup_scale_pane

0xa864,	// (0x00066566) mup_scale_pane_g1

0xb56d,	// (0x0006726f) mup_scale_pane_g2

0x0006,

0xf444,	// (0x0006b146) mup_scale_pane_g

0xb591,	// (0x00067293) msg_data_pane

0xb599,	// (0x0006729b) scroll_pane_cp017

0x3c0b,	// (0x0005f90d) bg_list_pane_cp04_ParamLimits

0x3c0b,	// (0x0005f90d) bg_list_pane_cp04

0xb5a1,	// (0x000672a3) msg_data_pane_g1

0x3c27,	// (0x0005f929) msg_data_pane_g2

0x3c31,	// (0x0005f933) msg_data_pane_g3

0x3c39,	// (0x0005f93b) msg_data_pane_g4

0x3c41,	// (0x0005f943) msg_data_pane_g5

0x3c49,	// (0x0005f94b) msg_data_pane_g6

0x3c51,	// (0x0005f953) msg_data_pane_g7

0x0006,

0xf453,	// (0x0006b155) msg_data_pane_g

0x3c59,	// (0x0005f95b) msg_text_pane_ParamLimits

0x3c59,	// (0x0005f95b) msg_text_pane

0x3c99,	// (0x0005f99b) qrid_highlight_pane_cp011_ParamLimits

0x3c99,	// (0x0005f99b) qrid_highlight_pane_cp011

0xa4ef,	// (0x000661f1) msg_body_pane

0xa4ef,	// (0x000661f1) msg_header_pane

0xb5b2,	// (0x000672b4) input_focus_pane_cp07

0x3cbf,	// (0x0005f9c1) msg_header_pane_t1_ParamLimits

0x3cbf,	// (0x0005f9c1) msg_header_pane_t1

0x9fe1,	// (0x00065ce3) msg_header_pane_t2_ParamLimits

0x9fe1,	// (0x00065ce3) msg_header_pane_t2

0x0001,

0xf467,	// (0x0006b169) msg_header_pane_t_ParamLimits

0xf467,	// (0x0006b169) msg_header_pane_t

0xb5c7,	// (0x000672c9) msg_body_pane_g1

0x3cd1,	// (0x0005f9d3) msg_body_pane_t1_ParamLimits

0x3cd1,	// (0x0005f9d3) msg_body_pane_t1

0x9ff3,	// (0x00065cf5) msg_body_pane_t2_ParamLimits

0x9ff3,	// (0x00065cf5) msg_body_pane_t2

0xa005,	// (0x00065d07) msg_body_pane_t3_ParamLimits

0xa005,	// (0x00065d07) msg_body_pane_t3

0x0002,

0xf46c,	// (0x0006b16e) msg_body_pane_t_ParamLimits

0xf46c,	// (0x0006b16e) msg_body_pane_t

0x3d54,	// (0x0005fa56) main_viewer_pane_g1_ParamLimits

0x3d54,	// (0x0005fa56) main_viewer_pane_g1

0x3d60,	// (0x0005fa62) main_viewer_pane_g2_ParamLimits

0x3d60,	// (0x0005fa62) main_viewer_pane_g2

0x3d6c,	// (0x0005fa6e) main_viewer_pane_g3_ParamLimits

0x3d6c,	// (0x0005fa6e) main_viewer_pane_g3

0x3d7d,	// (0x0005fa7f) main_viewer_pane_g4_ParamLimits

0x3d7d,	// (0x0005fa7f) main_viewer_pane_g4

0x3d8e,	// (0x0005fa90) main_viewer_pane_g5_ParamLimits

0x3d8e,	// (0x0005fa90) main_viewer_pane_g5

0x3d8e,	// (0x0005fa90) main_viewer_pane_g7_ParamLimits

0x3d8e,	// (0x0005fa90) main_viewer_pane_g7

0xaeee,	// (0x00066bf0) main_viewer_pane_g8_ParamLimits

0xaeee,	// (0x00066bf0) main_viewer_pane_g8

0x0007,

0xf47c,	// (0x0006b17e) main_viewer_pane_g_ParamLimits

0xf47c,	// (0x0006b17e) main_viewer_pane_g

0xb5cf,	// (0x000672d1) viewer_content_pane_ParamLimits

0xb5cf,	// (0x000672d1) viewer_content_pane

0x3dcc,	// (0x0005face) main_postcard_pane_g1_ParamLimits

0x3dcc,	// (0x0005face) main_postcard_pane_g1

0x3dda,	// (0x0005fadc) main_postcard_pane_g2_ParamLimits

0x3dda,	// (0x0005fadc) main_postcard_pane_g2

0x3de8,	// (0x0005faea) main_postcard_pane_g3_ParamLimits

0x3de8,	// (0x0005faea) main_postcard_pane_g3

0x0005,

0xf48d,	// (0x0006b18f) main_postcard_pane_g_ParamLimits

0xf48d,	// (0x0006b18f) main_postcard_pane_g

0x3df8,	// (0x0005fafa) main_postcard_pane_g4

0xc8c0,	// (0x000685c2) smil_status_volume_pane_g2

0x3e24,	// (0x0005fb26) postcard_pane_ParamLimits

0x3e24,	// (0x0005fb26) postcard_pane

0xb1b7,	// (0x00066eb9) postcard_pane_g1_ParamLimits

0xb1b7,	// (0x00066eb9) postcard_pane_g1

0x3e56,	// (0x0005fb58) postcard_pane_g2_ParamLimits

0x3e56,	// (0x0005fb58) postcard_pane_g2

0x3e62,	// (0x0005fb64) postcard_pane_g3_ParamLimits

0x3e62,	// (0x0005fb64) postcard_pane_g3

0xb5eb,	// (0x000672ed) postcard_pane_g4_ParamLimits

0xb5eb,	// (0x000672ed) postcard_pane_g4

0x3e6e,	// (0x0005fb70) postcard_pane_g5_ParamLimits

0x3e6e,	// (0x0005fb70) postcard_pane_g5

0x3e7a,	// (0x0005fb7c) postcard_pane_g6_ParamLimits

0x3e7a,	// (0x0005fb7c) postcard_pane_g6

0xb5dd,	// (0x000672df) postcard_pane_g7_ParamLimits

0xb5dd,	// (0x000672df) postcard_pane_g7

0x0006,

0xf49a,	// (0x0006b19c) postcard_pane_g_ParamLimits

0xf49a,	// (0x0006b19c) postcard_pane_g

0x3e86,	// (0x0005fb88) main_mp2_pane_g1_ParamLimits

0x3e86,	// (0x0005fb88) main_mp2_pane_g1

0x3e92,	// (0x0005fb94) main_mp2_pane_g2_ParamLimits

0x3e92,	// (0x0005fb94) main_mp2_pane_g2

0x3e9e,	// (0x0005fba0) main_mp2_pane_g3_ParamLimits

0x3e9e,	// (0x0005fba0) main_mp2_pane_g3

0x0002,

0xf4a9,	// (0x0006b1ab) main_mp2_pane_g_ParamLimits

0xf4a9,	// (0x0006b1ab) main_mp2_pane_g

0x3eaa,	// (0x0005fbac) main_mp2_pane_t1_ParamLimits

0x3eaa,	// (0x0005fbac) main_mp2_pane_t1

0x3ec1,	// (0x0005fbc3) main_mp2_pane_t2_ParamLimits

0x3ec1,	// (0x0005fbc3) main_mp2_pane_t2

0x3ed5,	// (0x0005fbd7) main_mp2_pane_t3_ParamLimits

0x3ed5,	// (0x0005fbd7) main_mp2_pane_t3

0x0002,

0xf4b0,	// (0x0006b1b2) main_mp2_pane_t_ParamLimits

0xf4b0,	// (0x0006b1b2) main_mp2_pane_t

0xb5f9,	// (0x000672fb) pec_content_pane_ParamLimits

0xb5f9,	// (0x000672fb) pec_content_pane

0xab7d,	// (0x0006687f) scroll_pane_cp015

0xb60b,	// (0x0006730d) pec_attribute_pane_ParamLimits

0xb60b,	// (0x0006730d) pec_attribute_pane

0x3ee7,	// (0x0005fbe9) pec_content_pane_g1_ParamLimits

0x3ee7,	// (0x0005fbe9) pec_content_pane_g1

0xb61b,	// (0x0006731d) pec_content_pane_t1_ParamLimits

0xb61b,	// (0x0006731d) pec_content_pane_t1

0xb62d,	// (0x0006732f) pec_content_pane_t2_ParamLimits

0xb62d,	// (0x0006732f) pec_content_pane_t2

0x0001,

0x03d3,	// (0x0005c0d5) pec_content_pane_t_ParamLimits

0x03d3,	// (0x0005c0d5) pec_content_pane_t

0x3ef3,	// (0x0005fbf5) list_single_graphic_pane_cp01_ParamLimits

0x3ef3,	// (0x0005fbf5) list_single_graphic_pane_cp01

0xa74a,	// (0x0006644c) bg_popup_sub_pane_cp04

0xb63f,	// (0x00067341) popup_mup_playback_window_g1

0xb64b,	// (0x0006734d) popup_mup_playback_window_t1

0xb660,	// (0x00067362) popup_mup_playback_window_t2

0x0001,

0x03d8,	// (0x0005c0da) popup_mup_playback_window_t

0xb697,	// (0x00067399) main_image_pane_g1_ParamLimits

0xb697,	// (0x00067399) main_image_pane_g1

0xb6da,	// (0x000673dc) scroll_pane_cp018_ParamLimits

0xb6da,	// (0x000673dc) scroll_pane_cp018

0xb6f2,	// (0x000673f4) scroll_pane_cp016_ParamLimits

0xb6f2,	// (0x000673f4) scroll_pane_cp016

0x3f8c,	// (0x0005fc8e) smil2_image_pane_ParamLimits

0x3f8c,	// (0x0005fc8e) smil2_image_pane

0x3fbc,	// (0x0005fcbe) smil2_root_pane_ParamLimits

0x3fbc,	// (0x0005fcbe) smil2_root_pane

0x3fe8,	// (0x0005fcea) smil2_text_pane_ParamLimits

0x3fe8,	// (0x0005fcea) smil2_text_pane

0xa4ef,	// (0x000661f1) bg_list_pane_cp06

0xb72e,	// (0x00067430) grid_radio_pane

0xa4ef,	// (0x000661f1) bg_popup_window_pane_cp06

0xb736,	// (0x00067438) main_fmradio_pane_t1

0xb0c6,	// (0x00066dc8) heading_pane_cp04

0xb744,	// (0x00067446) main_fmradio_pane_t2

0xc709,	// (0x0006840b) popup_cale_lunar_info_window_g1

0xb752,	// (0x00067454) main_fmradio_pane_t3

0xc711,	// (0x00068413) popup_cale_lunar_info_window_g2

0xb760,	// (0x00067462) main_fmradio_pane_t4

0x0001,

0xb76e,	// (0x00067470) main_fmradio_pane_t5

0x0004,

0x04b3,	// (0x0005c1b5) popup_cale_lunar_info_window_g

0x03ed,	// (0x0005c0ef) main_fmradio_pane_t

0xb77c,	// (0x0006747e) wait_bar_pane_cp03

0xb784,	// (0x00067486) cell_fmradio_pane_ParamLimits

0xb784,	// (0x00067486) cell_fmradio_pane

0xb5dd,	// (0x000672df) cell_fmradio_pane_g1_ParamLimits

0xb5dd,	// (0x000672df) cell_fmradio_pane_g1

0xa4ef,	// (0x000661f1) grid_highlight_pane_cp011

0xb797,	// (0x00067499) poc_content_pane_ParamLimits

0xb797,	// (0x00067499) poc_content_pane

0xb7a9,	// (0x000674ab) scroll_pane_cp019

0x4028,	// (0x0005fd2a) popup_call_poc_act_window_ParamLimits

0x4028,	// (0x0005fd2a) popup_call_poc_act_window

0x4035,	// (0x0005fd37) popup_call_poc_inact_window_ParamLimits

0x4035,	// (0x0005fd37) popup_call_poc_inact_window

0x048a,	// (0x0005c18c) bg_popup_call_poc_act_pane_g

0xc681,	// (0x00068383) bg_popup_call_poc_inact_pane_g1

0xc689,	// (0x0006838b) bg_popup_call_poc_inact_pane_g2

0xb7b1,	// (0x000674b3) popup_call_poc_act_window_g2

0xc691,	// (0x00068393) bg_popup_call_poc_inact_pane_g3

0xc699,	// (0x0006839b) bg_popup_call_poc_inact_pane_g4

0xc6a1,	// (0x000683a3) bg_popup_call_poc_inact_pane_g5

0xb7b9,	// (0x000674bb) popup_call_poc_act_window_t1_ParamLimits

0xb7b9,	// (0x000674bb) popup_call_poc_act_window_t1

0xb7e1,	// (0x000674e3) popup_call_poc_act_window_t2_ParamLimits

0xb7e1,	// (0x000674e3) popup_call_poc_act_window_t2

0xb809,	// (0x0006750b) popup_call_poc_act_window_t3_ParamLimits

0xb809,	// (0x0006750b) popup_call_poc_act_window_t3

0xb831,	// (0x00067533) popup_call_poc_act_window_t4_ParamLimits

0xb831,	// (0x00067533) popup_call_poc_act_window_t4

0x0003,

0x03f8,	// (0x0005c0fa) popup_call_poc_act_window_t_ParamLimits

0x03f8,	// (0x0005c0fa) popup_call_poc_act_window_t

0xc6a9,	// (0x000683ab) bg_popup_call_poc_inact_pane_g6

0xc6b1,	// (0x000683b3) bg_popup_call_poc_inact_pane_g7

0xc6b9,	// (0x000683bb) bg_popup_call_poc_inact_pane_g8

0xb843,	// (0x00067545) popup_call_poc_inact_window_g2

0xc6c1,	// (0x000683c3) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0477,	// (0x0005c179) bg_popup_call_poc_inact_pane_g

0xb84b,	// (0x0006754d) popup_call_poc_inact_window_t1_ParamLimits

0xb84b,	// (0x0006754d) popup_call_poc_inact_window_t1

0xb860,	// (0x00067562) popup_call_poc_inact_window_t2_ParamLimits

0xb860,	// (0x00067562) popup_call_poc_inact_window_t2

0xb875,	// (0x00067577) popup_call_poc_inact_window_t3_ParamLimits

0xb875,	// (0x00067577) popup_call_poc_inact_window_t3

0x0002,

0x0401,	// (0x0005c103) popup_call_poc_inact_window_t_ParamLimits

0x0401,	// (0x0005c103) popup_call_poc_inact_window_t

0xc846,	// (0x00068548) context_pane_ParamLimits

0x4677,	// (0x00060379) signal_pane_ParamLimits

0xa9d4,	// (0x000666d6) main_call2_pane

0x45ea,	// (0x000602ec) popup_phob_thumbnail2_window_ParamLimits

0x45ea,	// (0x000602ec) popup_phob_thumbnail2_window

0x3d02,	// (0x0005fa04) aid_hotspot_pointer_arrow_pane

0x3d0a,	// (0x0005fa0c) aid_hotspot_pointer_hand_pane

0x4357,	// (0x00060059) phob_pre_status_pane_g5

0x1d83,	// (0x0005da85) cams_zoom_pane_ParamLimits

0x1d8f,	// (0x0005da91) image_vga_pane_ParamLimits

0x1d9e,	// (0x0005daa0) main_camera_pane_g1_ParamLimits

0x1dac,	// (0x0005daae) main_camera_pane_g2_ParamLimits

0x1db8,	// (0x0005daba) main_camera_pane_g3_ParamLimits

0x1dc4,	// (0x0005dac6) main_camera_pane_g4_ParamLimits

0x1dd0,	// (0x0005dad2) main_camera_pane_g5_ParamLimits

0x1ddc,	// (0x0005dade) main_camera_pane_g6_ParamLimits

0x1de8,	// (0x0005daea) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0006af0c) main_camera_pane_g_ParamLimits

0x1df4,	// (0x0005daf6) main_camera_pane_t1_ParamLimits

0x1e06,	// (0x0005db08) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0006af1d) main_camera_pane_t_ParamLimits

0xa74a,	// (0x0006644c) bg_popup_preview_window_pane_cp01_ParamLimits

0xa74a,	// (0x0006644c) bg_popup_preview_window_pane_cp01

0xb88a,	// (0x0006758c) popup_phob_thumbnail2_window_g1_ParamLimits

0xb88a,	// (0x0006758c) popup_phob_thumbnail2_window_g1

0xa4ef,	// (0x000661f1) call2_cli_visual_pane

0x4051,	// (0x0005fd53) popup_call2_audio_conf_window_ParamLimits

0x4051,	// (0x0005fd53) popup_call2_audio_conf_window

0x4066,	// (0x0005fd68) popup_call2_audio_first_window_ParamLimits

0x4066,	// (0x0005fd68) popup_call2_audio_first_window

0x4104,	// (0x0005fe06) popup_call2_audio_in_window_ParamLimits

0x4104,	// (0x0005fe06) popup_call2_audio_in_window

0x4146,	// (0x0005fe48) popup_call2_audio_out_window_ParamLimits

0x4146,	// (0x0005fe48) popup_call2_audio_out_window

0x41a8,	// (0x0005feaa) popup_call2_audio_second_window_ParamLimits

0x41a8,	// (0x0005feaa) popup_call2_audio_second_window

0x4206,	// (0x0005ff08) popup_call2_audio_wait_window_ParamLimits

0x4206,	// (0x0005ff08) popup_call2_audio_wait_window

0xa4ef,	// (0x000661f1) bg_popup_call2_act_pane_cp03

0xa72c,	// (0x0006642e) list_conf_pane_cp

0xb896,	// (0x00067598) popup_call2_audio_conf_window_t1

0xb123,	// (0x00066e25) list_single_graphic_popup_conf2_pane_ParamLimits

0xb123,	// (0x00066e25) list_single_graphic_popup_conf2_pane

0xb136,	// (0x00066e38) list_highlight_pane_cp04

0xb8a4,	// (0x000675a6) list_single_graphic_popup_conf2_pane_g1

0xb147,	// (0x00066e49) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4c7,	// (0x0006b1c9) list_single_graphic_popup_conf2_pane_g

0xb8ae,	// (0x000675b0) list_single_graphic_popup_conf2_pane_t1

0xb8bc,	// (0x000675be) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8bc,	// (0x000675be) bg_popup_call2_act_pane_cp01

0xb946,	// (0x00067648) call_type_pane_cp05_ParamLimits

0xb946,	// (0x00067648) call_type_pane_cp05

0xb99a,	// (0x0006769c) popup_call2_audio_second_window_g1_ParamLimits

0xb99a,	// (0x0006769c) popup_call2_audio_second_window_g1

0xb9ee,	// (0x000676f0) popup_call2_audio_second_window_g2_ParamLimits

0xb9ee,	// (0x000676f0) popup_call2_audio_second_window_g2

0x0002,

0x040d,	// (0x0005c10f) popup_call2_audio_second_window_g_ParamLimits

0x040d,	// (0x0005c10f) popup_call2_audio_second_window_g

0xba53,	// (0x00067755) popup_call2_audio_second_window_t1_ParamLimits

0xba53,	// (0x00067755) popup_call2_audio_second_window_t1

0xbb0e,	// (0x00067810) popup_call2_audio_second_window_t2_ParamLimits

0xbb0e,	// (0x00067810) popup_call2_audio_second_window_t2

0xbb61,	// (0x00067863) popup_call2_audio_second_window_t3_ParamLimits

0xbb61,	// (0x00067863) popup_call2_audio_second_window_t3

0x0003,

0x0414,	// (0x0005c116) popup_call2_audio_second_window_t_ParamLimits

0x0414,	// (0x0005c116) popup_call2_audio_second_window_t

0xa4ef,	// (0x000661f1) bg_popup_call2_in_pane_cp02

0xa4f9,	// (0x000661fb) call_type_pane_cp04

0xa501,	// (0x00066203) popup_call2_audio_wait_window_g1

0xa509,	// (0x0006620b) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0006adfb) popup_call2_audio_wait_window_g

0xa511,	// (0x00066213) popup_call2_audio_wait_window_t3

0xbc54,	// (0x00067956) bg_popup_call2_act_pane_ParamLimits

0xbc54,	// (0x00067956) bg_popup_call2_act_pane

0xbd14,	// (0x00067a16) call_type_pane_cp03_ParamLimits

0xbd14,	// (0x00067a16) call_type_pane_cp03

0xbd78,	// (0x00067a7a) popup_call2_audio_first_window_g1_ParamLimits

0xbd78,	// (0x00067a7a) popup_call2_audio_first_window_g1

0xbde8,	// (0x00067aea) popup_call2_audio_first_window_g2_ParamLimits

0xbde8,	// (0x00067aea) popup_call2_audio_first_window_g2

0xb1b7,	// (0x00066eb9) popup_call2_audio_first_window_g3_ParamLimits

0xb1b7,	// (0x00066eb9) popup_call2_audio_first_window_g3

0x0004,

0xf4cc,	// (0x0006b1ce) popup_call2_audio_first_window_g_ParamLimits

0xf4cc,	// (0x0006b1ce) popup_call2_audio_first_window_g

0xbec6,	// (0x00067bc8) popup_call2_audio_first_window_t1_ParamLimits

0xbec6,	// (0x00067bc8) popup_call2_audio_first_window_t1

0xbfc9,	// (0x00067ccb) popup_call2_audio_first_window_t4_ParamLimits

0xbfc9,	// (0x00067ccb) popup_call2_audio_first_window_t4

0xc0ac,	// (0x00067dae) popup_call2_audio_first_window_t5_ParamLimits

0xc0ac,	// (0x00067dae) popup_call2_audio_first_window_t5

0x0003,

0x0428,	// (0x0005c12a) popup_call2_audio_first_window_t_ParamLimits

0x0428,	// (0x0005c12a) popup_call2_audio_first_window_t

0xa742,	// (0x00066444) bg_popup_call2_act_pane_g1

0xc719,	// (0x0006841b) popup_cale_lunar_info_window_t1

0xc727,	// (0x00068429) popup_cale_lunar_info_window_t2

0xc735,	// (0x00068437) popup_cale_lunar_info_window_t3

0xa4ef,	// (0x000661f1) bg_popup_call2_bubble_pane

0xc1ad,	// (0x00067eaf) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1ad,	// (0x00067eaf) bg_popup_call2_in_pane_cp01

0x9ce4,	// (0x000659e6) call_type_pane_cp02

0xc1f5,	// (0x00067ef7) popup_call2_audio_out_window_g1_ParamLimits

0xc1f5,	// (0x00067ef7) popup_call2_audio_out_window_g1

0xc221,	// (0x00067f23) popup_call2_audio_out_window_g2_ParamLimits

0xc221,	// (0x00067f23) popup_call2_audio_out_window_g2

0xc249,	// (0x00067f4b) popup_call2_audio_out_window_g3_ParamLimits

0xc249,	// (0x00067f4b) popup_call2_audio_out_window_g3

0x0003,

0x0431,	// (0x0005c133) popup_call2_audio_out_window_g_ParamLimits

0x0431,	// (0x0005c133) popup_call2_audio_out_window_g

0xc284,	// (0x00067f86) popup_call2_audio_out_window_t1_ParamLimits

0xc284,	// (0x00067f86) popup_call2_audio_out_window_t1

0xc2e3,	// (0x00067fe5) popup_call2_audio_out_window_t2_ParamLimits

0xc2e3,	// (0x00067fe5) popup_call2_audio_out_window_t2

0xc337,	// (0x00068039) popup_call2_audio_out_window_t3_ParamLimits

0xc337,	// (0x00068039) popup_call2_audio_out_window_t3

0xc34d,	// (0x0006804f) popup_call2_audio_out_window_t4_ParamLimits

0xc34d,	// (0x0006804f) popup_call2_audio_out_window_t4

0xc363,	// (0x00068065) popup_call2_audio_out_window_t5_ParamLimits

0xc363,	// (0x00068065) popup_call2_audio_out_window_t5

0x0005,

0x043a,	// (0x0005c13c) popup_call2_audio_out_window_t_ParamLimits

0x043a,	// (0x0005c13c) popup_call2_audio_out_window_t

0xc3c7,	// (0x000680c9) bg_popup_call2_in_pane_ParamLimits

0xc3c7,	// (0x000680c9) bg_popup_call2_in_pane

0xc423,	// (0x00068125) popup_call2_audio_in_window_g1_ParamLimits

0xc423,	// (0x00068125) popup_call2_audio_in_window_g1

0xc45b,	// (0x0006815d) popup_call2_audio_in_window_g2_ParamLimits

0xc45b,	// (0x0006815d) popup_call2_audio_in_window_g2

0xc493,	// (0x00068195) popup_call2_audio_in_window_g3_ParamLimits

0xc493,	// (0x00068195) popup_call2_audio_in_window_g3

0x0003,

0x0447,	// (0x0005c149) popup_call2_audio_in_window_g_ParamLimits

0x0447,	// (0x0005c149) popup_call2_audio_in_window_g

0xc4eb,	// (0x000681ed) popup_call2_audio_in_window_t1_ParamLimits

0xc4eb,	// (0x000681ed) popup_call2_audio_in_window_t1

0xc56b,	// (0x0006826d) popup_call2_audio_in_window_t2_ParamLimits

0xc56b,	// (0x0006826d) popup_call2_audio_in_window_t2

0xc5eb,	// (0x000682ed) popup_call2_audio_in_window_t3_ParamLimits

0xc5eb,	// (0x000682ed) popup_call2_audio_in_window_t3

0xc605,	// (0x00068307) popup_call2_audio_in_window_t4_ParamLimits

0xc605,	// (0x00068307) popup_call2_audio_in_window_t4

0xc617,	// (0x00068319) popup_call2_audio_in_window_t5_ParamLimits

0xc617,	// (0x00068319) popup_call2_audio_in_window_t5

0xc62c,	// (0x0006832e) popup_call2_audio_in_window_t6_ParamLimits

0xc62c,	// (0x0006832e) popup_call2_audio_in_window_t6

0x0005,

0x0450,	// (0x0005c152) popup_call2_audio_in_window_t_ParamLimits

0x0450,	// (0x0005c152) popup_call2_audio_in_window_t

0xa742,	// (0x00066444) bg_popup_call2_in_pane_g1

0xc743,	// (0x00068445) popup_cale_lunar_info_window_t4

0x0003,

0x04b8,	// (0x0005c1ba) popup_cale_lunar_info_window_t

0xa74a,	// (0x0006644c) bg_popup_call2_rect_pane_ParamLimits

0xa74a,	// (0x0006644c) bg_popup_call2_rect_pane

0xa4ef,	// (0x000661f1) call2_cli_visual_graphic_pane

0xa4ef,	// (0x000661f1) call2_cli_visual_text_pane

0x471d,	// (0x0006041f) smil_status_volume_pane_g3

0x0002,

0xa864,	// (0x00066566) call2_cli_visual_graphic_pane_g1

0xa864,	// (0x00066566) call2_cli_visual_graphic_pane_g2

0xa864,	// (0x00066566) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4d7,	// (0x0006b1d9) call2_cli_visual_graphic_pane_g

0xc641,	// (0x00068343) bg_popup_call2_rect_pane_g1

0xa8f0,	// (0x000665f2) bg_popup_call2_rect_pane_g2

0xc649,	// (0x0006834b) bg_popup_call2_rect_pane_g3

0xc651,	// (0x00068353) bg_popup_call2_rect_pane_g4

0xc659,	// (0x0006835b) bg_popup_call2_rect_pane_g5

0xc661,	// (0x00068363) bg_popup_call2_rect_pane_g6

0xc669,	// (0x0006836b) bg_popup_call2_rect_pane_g7

0xc671,	// (0x00068373) bg_popup_call2_rect_pane_g8

0xc679,	// (0x0006837b) bg_popup_call2_rect_pane_g9

0x0008,

0xf4de,	// (0x0006b1e0) bg_popup_call2_rect_pane_g

0xc681,	// (0x00068383) bg_popup_call2_bubble_pane_g1

0xc689,	// (0x0006838b) bg_popup_call2_bubble_pane_g2

0xc691,	// (0x00068393) bg_popup_call2_bubble_pane_g3

0xc699,	// (0x0006839b) bg_popup_call2_bubble_pane_g4

0xc6a1,	// (0x000683a3) bg_popup_call2_bubble_pane_g5

0xc6a9,	// (0x000683ab) bg_popup_call2_bubble_pane_g6

0xc6b1,	// (0x000683b3) bg_popup_call2_bubble_pane_g7

0xc6b9,	// (0x000683bb) bg_popup_call2_bubble_pane_g8

0xc6c1,	// (0x000683c3) bg_popup_call2_bubble_pane_g9

0x0008,

0x0477,	// (0x0005c179) bg_popup_call2_bubble_pane_g

0x17b4,	// (0x0005d4b6) aid_cale_week_size_cell_pane

0x1e18,	// (0x0005db1a) aid_cams_cif_uncrop_pane_ParamLimits

0x1e18,	// (0x0005db1a) aid_cams_cif_uncrop_pane

0x1f73,	// (0x0005dc75) aid_cams_size_cell_ParamLimits

0x1f73,	// (0x0005dc75) aid_cams_size_cell

0x1f7f,	// (0x0005dc81) grid_cams_pane_ParamLimits

0x1f8d,	// (0x0005dc8f) linegrid_cams_pane_ParamLimits

0x2178,	// (0x0005de7a) call_video_pane_t1

0x2199,	// (0x0005de9b) call_video_pane_t2

0x0001,

0xf26e,	// (0x0006af70) call_video_pane_t

0x26e0,	// (0x0005e3e2) aid_cale_month_size_cell_pane_ParamLimits

0x26e0,	// (0x0005e3e2) aid_cale_month_size_cell_pane

0xf521,	// (0x0006b223) smil_status_volume_pane_g

0x472a,	// (0x0006042c) volume_smil_pane_ParamLimits

0x0efd,	// (0x0005cbff) aid_popup2_width_pane

0x16a8,	// (0x0005d3aa) cell_qdial_pane_g4_ParamLimits

0x16a8,	// (0x0005d3aa) cell_qdial_pane_g4

0x36f6,	// (0x0005f3f8) aid_blid_cardinal_pane_ParamLimits

0x3706,	// (0x0005f408) aid_blid_destination_pane_ParamLimits

0x3706,	// (0x0005f408) aid_blid_destination_pane

0xa74a,	// (0x0006644c) bg_popup_call_poc_act_pane_ParamLimits

0xa74a,	// (0x0006644c) bg_popup_call_poc_act_pane

0xa74a,	// (0x0006644c) bg_popup_call_poc_inact_pane_ParamLimits

0xa74a,	// (0x0006644c) bg_popup_call_poc_inact_pane

0xc6c9,	// (0x000683cb) bg_popup_call_poc_act_pane_g1

0xc6d1,	// (0x000683d3) bg_popup_call_poc_act_pane_g2

0xc6d9,	// (0x000683db) bg_popup_call_poc_act_pane_g3

0xc699,	// (0x0006839b) bg_popup_call_poc_act_pane_g4

0xc6a1,	// (0x000683a3) bg_popup_call_poc_act_pane_g5

0xc6e1,	// (0x000683e3) bg_popup_call_poc_act_pane_g6

0xc6b1,	// (0x000683b3) bg_popup_call_poc_act_pane_g7

0xc6e9,	// (0x000683eb) bg_popup_call_poc_act_pane_g8

0xa4ef,	// (0x000661f1) main_usb_pane

0x4519,	// (0x0006021b) popup_cale_lunar_info_window

0x24c2,	// (0x0005e1c4) im_reading_pane_t1_ParamLimits

0xaad5,	// (0x000667d7) list_im_pane_ParamLimits

0xaae6,	// (0x000667e8) scroll_pane_cp07_ParamLimits

0xa4ef,	// (0x000661f1) grid_highlight_pane_cp012

0xa74a,	// (0x0006644c) mup_scale_pane_ParamLimits

0xb1b7,	// (0x00066eb9) main_usb_pane_g1_ParamLimits

0xb1b7,	// (0x00066eb9) main_usb_pane_g1

0x427a,	// (0x0005ff7c) main_usb_pane_g2_ParamLimits

0x427a,	// (0x0005ff7c) main_usb_pane_g2

0x0001,

0xf4f1,	// (0x0006b1f3) main_usb_pane_g_ParamLimits

0xf4f1,	// (0x0006b1f3) main_usb_pane_g

0x4286,	// (0x0005ff88) main_usb_pane_t1_ParamLimits

0x4286,	// (0x0005ff88) main_usb_pane_t1

0x4298,	// (0x0005ff9a) main_usb_pane_t2_ParamLimits

0x4298,	// (0x0005ff9a) main_usb_pane_t2

0x42aa,	// (0x0005ffac) main_usb_pane_t3_ParamLimits

0x42aa,	// (0x0005ffac) main_usb_pane_t3

0x42bc,	// (0x0005ffbe) main_usb_pane_t4_ParamLimits

0x42bc,	// (0x0005ffbe) main_usb_pane_t4

0x42ce,	// (0x0005ffd0) main_usb_pane_t5_ParamLimits

0x42ce,	// (0x0005ffd0) main_usb_pane_t5

0x42e0,	// (0x0005ffe2) main_usb_pane_t6_ParamLimits

0x42e0,	// (0x0005ffe2) main_usb_pane_t6

0x0005,

0xf4f6,	// (0x0006b1f8) main_usb_pane_t_ParamLimits

0x369c,	// (0x0005f39e) aid_text_placing

0x36a8,	// (0x0005f3aa) main_location2_pane_t1_ParamLimits

0x36bc,	// (0x0005f3be) main_location2_pane_t2_ParamLimits

0x36d0,	// (0x0005f3d2) main_location2_pane_t3_ParamLimits

0x36e4,	// (0x0005f3e6) main_location2_pane_t4_ParamLimits

0x36e4,	// (0x0005f3e6) main_location2_pane_t4

0xf3ca,	// (0x0006b0cc) main_location2_pane_t_ParamLimits

0xa786,	// (0x00066488) find_pinb_pane_g2_ParamLimits

0xa786,	// (0x00066488) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0006ae21) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0006ae21) find_pinb_pane_g

0xa792,	// (0x00066494) find_pinb_pane_t1_ParamLimits

0xa7a4,	// (0x000664a6) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0006ae26) find_pinb_pane_t_ParamLimits

0xa4ef,	// (0x000661f1) main_call3_pane

0x2c34,	// (0x0005e936) cale_month_day_heading_pane_t1_ParamLimits

0x2cba,	// (0x0005e9bc) cale_month_day_heading_pane_t2_ParamLimits

0x2d4b,	// (0x0005ea4d) cale_month_day_heading_pane_t3_ParamLimits

0x2ddc,	// (0x0005eade) cale_month_day_heading_pane_t4_ParamLimits

0x2e6d,	// (0x0005eb6f) cale_month_day_heading_pane_t5_ParamLimits

0x2efe,	// (0x0005ec00) cale_month_day_heading_pane_t6_ParamLimits

0x2f8f,	// (0x0005ec91) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0006afa8) cale_month_day_heading_pane_t_ParamLimits

0xad30,	// (0x00066a32) smil_status_volume_pane

0x3e3e,	// (0x0005fb40) postcard_address_pane_ParamLimits

0x3e3e,	// (0x0005fb40) postcard_address_pane

0x3e4a,	// (0x0005fb4c) postcard_message_pane_ParamLimits

0x3e4a,	// (0x0005fb4c) postcard_message_pane

0x4245,	// (0x0005ff47) call2_cli_visual_pane_t1_ParamLimits

0x4245,	// (0x0005ff47) call2_cli_visual_pane_t1

0x4881,	// (0x00060583) postcard_message_pane_t1_ParamLimits

0x4881,	// (0x00060583) postcard_message_pane_t1

0x486a,	// (0x0006056c) postcard_address_pane_t1_ParamLimits

0x486a,	// (0x0006056c) postcard_address_pane_t1

0x485b,	// (0x0006055d) popup_call3_audio_in_window_ParamLimits

0x485b,	// (0x0006055d) popup_call3_audio_in_window

0x473f,	// (0x00060441) bg_popup_call3_in_pane_ParamLimits

0x473f,	// (0x00060441) bg_popup_call3_in_pane

0x47a1,	// (0x000604a3) popup_call3_audio_in_window_g1_ParamLimits

0x47a1,	// (0x000604a3) popup_call3_audio_in_window_g1

0x47b9,	// (0x000604bb) popup_call3_audio_in_window_g2_ParamLimits

0x47b9,	// (0x000604bb) popup_call3_audio_in_window_g2

0x47d1,	// (0x000604d3) popup_call3_audio_in_window_g3_ParamLimits

0x47d1,	// (0x000604d3) popup_call3_audio_in_window_g3

0x0003,

0xf528,	// (0x0006b22a) popup_call3_audio_in_window_g_ParamLimits

0xf528,	// (0x0006b22a) popup_call3_audio_in_window_g

0x47f9,	// (0x000604fb) popup_call3_audio_in_window_t1_ParamLimits

0x47f9,	// (0x000604fb) popup_call3_audio_in_window_t1

0x4821,	// (0x00060523) popup_call3_audio_in_window_t2_ParamLimits

0x4821,	// (0x00060523) popup_call3_audio_in_window_t2

0x4849,	// (0x0006054b) popup_call3_audio_in_window_t3_ParamLimits

0x4849,	// (0x0006054b) popup_call3_audio_in_window_t3

0x0002,

0xf531,	// (0x0006b233) popup_call3_audio_in_window_t_ParamLimits

0xf531,	// (0x0006b233) popup_call3_audio_in_window_t

0xa9d4,	// (0x000666d6) bg_popup_call3_rect_pane

0xc641,	// (0x00068343) bg_popup_call3_rect_pane_g1

0xa8f0,	// (0x000665f2) bg_popup_call3_rect_pane_g2

0xc649,	// (0x0006834b) bg_popup_call3_rect_pane_g3

0xc651,	// (0x00068353) bg_popup_call3_rect_pane_g4

0xc659,	// (0x0006835b) bg_popup_call3_rect_pane_g5

0xc661,	// (0x00068363) bg_popup_call3_rect_pane_g6

0xc669,	// (0x0006836b) bg_popup_call3_rect_pane_g7

0x3a1c,	// (0x0005f71e) mup_visualizer_osc_pane

0xb4ff,	// (0x00067201) mup_visualizer_spec_pane

0x475f,	// (0x00060461) call3_video_qcif_pane_ParamLimits

0x475f,	// (0x00060461) call3_video_qcif_pane

0x4771,	// (0x00060473) call3_video_qcif_uncrop_pane_ParamLimits

0x4771,	// (0x00060473) call3_video_qcif_uncrop_pane

0x477f,	// (0x00060481) call3_video_subqcif_pane_ParamLimits

0x477f,	// (0x00060481) call3_video_subqcif_pane

0x4791,	// (0x00060493) call3_video_subqcif_uncrop_pane_ParamLimits

0x4791,	// (0x00060493) call3_video_subqcif_uncrop_pane

0x47e9,	// (0x000604eb) popup_call3_audio_in_window_g4_ParamLimits

0x47e9,	// (0x000604eb) popup_call3_audio_in_window_g4

0x470c,	// (0x0006040e) mup_spec_half_pane

0x4715,	// (0x00060417) mup_spec_half_pane_cp

0xc8a6,	// (0x000685a8) mup_osc_middle_pane

0xc8af,	// (0x000685b1) mup_visualizer_osc_pane_g1

0x46ed,	// (0x000603ef) mup_spec_bar_pane_ParamLimits

0x46ed,	// (0x000603ef) mup_spec_bar_pane

0xc893,	// (0x00068595) mup_spec_bar_pane_g1

0xc89d,	// (0x0006859f) mup_spec_bar_pane_g2

0x0001,

0x04fc,	// (0x0005c1fe) mup_spec_bar_pane_g

0x17b4,	// (0x0005d4b6) aid_cale_week_size_cell_pane_ParamLimits

0x17c9,	// (0x0005d4cb) bg_cale_heading_pane_ParamLimits

0xa92d,	// (0x0006662f) bg_cale_pane_cp01_ParamLimits

0x17eb,	// (0x0005d4ed) cale_week_corner_pane_ParamLimits

0x1805,	// (0x0005d507) cale_week_day_heading_pane_ParamLimits

0x1827,	// (0x0005d529) cale_week_scroll_pane_g1_ParamLimits

0x1844,	// (0x0005d546) cale_week_scroll_pane_g2_ParamLimits

0x1857,	// (0x0005d559) cale_week_scroll_pane_g3_ParamLimits

0x186a,	// (0x0005d56c) cale_week_scroll_pane_g4_ParamLimits

0x187d,	// (0x0005d57f) cale_week_scroll_pane_g5_ParamLimits

0x1890,	// (0x0005d592) cale_week_scroll_pane_g6_ParamLimits

0x18a3,	// (0x0005d5a5) cale_week_scroll_pane_g7_ParamLimits

0x18b6,	// (0x0005d5b8) cale_week_scroll_pane_g8_ParamLimits

0x18cb,	// (0x0005d5cd) cale_week_scroll_pane_g9_ParamLimits

0x18de,	// (0x0005d5e0) cale_week_scroll_pane_g10_ParamLimits

0x18f1,	// (0x0005d5f3) cale_week_scroll_pane_g11_ParamLimits

0x1904,	// (0x0005d606) cale_week_scroll_pane_g12_ParamLimits

0x191b,	// (0x0005d61d) cale_week_scroll_pane_g13_ParamLimits

0x1936,	// (0x0005d638) cale_week_scroll_pane_g14_ParamLimits

0x1951,	// (0x0005d653) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0006aeb2) cale_week_scroll_pane_g_ParamLimits

0x1981,	// (0x0005d683) cale_week_time_pane_ParamLimits

0x1996,	// (0x0005d698) grid_cale_week_pane_ParamLimits

0xa94a,	// (0x0006664c) listscroll_cale_week_pane_t1

0xa95c,	// (0x0006665e) scroll_pane_cp08_ParamLimits

0x2749,	// (0x0005e44b) cale_month_corner_pane_ParamLimits

0xad06,	// (0x00066a08) cale_month_pane_t1

0x2bd1,	// (0x0005e8d3) cale_month_week_pane_ParamLimits

0xb1b7,	// (0x00066eb9) popup_call_status_window_g1_ParamLimits

0x34cf,	// (0x0005f1d1) popup_call_status_window_g2_ParamLimits

0x34db,	// (0x0005f1dd) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0006b058) popup_call_status_window_g_ParamLimits

0xb0b6,	// (0x00066db8) aid_call2_pane

0x3cb3,	// (0x0005f9b5) msg_header_pane_g1

0x3e3e,	// (0x0005fb40) postcard_address2_pane_ParamLimits

0x3e3e,	// (0x0005fb40) postcard_address2_pane

0x3e4a,	// (0x0005fb4c) postcard_message2_pane_ParamLimits

0x3e4a,	// (0x0005fb4c) postcard_message2_pane

0x4685,	// (0x00060387) message2_row_pane_ParamLimits

0x4685,	// (0x00060387) message2_row_pane

0x46a0,	// (0x000603a2) address2_row_pane_ParamLimits

0x46a0,	// (0x000603a2) address2_row_pane

0xc861,	// (0x00068563) postcard_message2_row_pane_g1

0xc869,	// (0x0006856b) postcard_message2_row_pane_t1

0xc861,	// (0x00068563) address2_row_pane_g1

0xc869,	// (0x0006856b) address2_row_pane_t1

0x1cfe,	// (0x0005da00) aid_size_cell_vorec

0xa4ef,	// (0x000661f1) main_rss_pane

0x46b3,	// (0x000603b5) rss_list_single_pane_ParamLimits

0x46b3,	// (0x000603b5) rss_list_single_pane

0xc877,	// (0x00068579) rss_list_single_pane_t1

0xc885,	// (0x00068587) rss_list_single_pane_t2

0x0001,

0x04f7,	// (0x0005c1f9) rss_list_single_pane_t

0xa4ef,	// (0x000661f1) main_camera2_pane

0xa4ef,	// (0x000661f1) main_video2_pane

0x48e5,	// (0x000605e7) cams_zoom_pane_cp2_ParamLimits

0x48e5,	// (0x000605e7) cams_zoom_pane_cp2

0x48f1,	// (0x000605f3) image2_vga_pane_ParamLimits

0x48f1,	// (0x000605f3) image2_vga_pane

0x4900,	// (0x00060602) main_camera2_pane_g1_ParamLimits

0x4900,	// (0x00060602) main_camera2_pane_g1

0x490c,	// (0x0006060e) main_camera2_pane_g2_ParamLimits

0x490c,	// (0x0006060e) main_camera2_pane_g2

0x4918,	// (0x0006061a) main_camera2_pane_g3_ParamLimits

0x4918,	// (0x0006061a) main_camera2_pane_g3

0x4924,	// (0x00060626) main_camera2_pane_g4_ParamLimits

0x4924,	// (0x00060626) main_camera2_pane_g4

0x4930,	// (0x00060632) main_camera2_pane_g5_ParamLimits

0x4930,	// (0x00060632) main_camera2_pane_g5

0x493c,	// (0x0006063e) main_camera2_pane_g6_ParamLimits

0x493c,	// (0x0006063e) main_camera2_pane_g6

0x4948,	// (0x0006064a) main_camera2_pane_g7_ParamLimits

0x4948,	// (0x0006064a) main_camera2_pane_g7

0x4954,	// (0x00060656) main_camera2_pane_g8_ParamLimits

0x4954,	// (0x00060656) main_camera2_pane_g8

0x0008,

0xf538,	// (0x0006b23a) main_camera2_pane_g_ParamLimits

0xf538,	// (0x0006b23a) main_camera2_pane_g

0x496c,	// (0x0006066e) main_camera2_pane_t1_ParamLimits

0x496c,	// (0x0006066e) main_camera2_pane_t1

0x497e,	// (0x00060680) main_camera2_pane_t2_ParamLimits

0x497e,	// (0x00060680) main_camera2_pane_t2

0x4990,	// (0x00060692) main_camera2_pane_t3_ParamLimits

0x4990,	// (0x00060692) main_camera2_pane_t3

0x49a2,	// (0x000606a4) main_camera2_pane_t4_ParamLimits

0x49a2,	// (0x000606a4) main_camera2_pane_t4

0x0006,

0xf54b,	// (0x0006b24d) main_camera2_pane_t_ParamLimits

0xf54b,	// (0x0006b24d) main_camera2_pane_t

0x4a04,	// (0x00060706) cams_zoom_pane_cp4_ParamLimits

0x4a04,	// (0x00060706) cams_zoom_pane_cp4

0x4a14,	// (0x00060716) image2_cif_pane_ParamLimits

0x4a14,	// (0x00060716) image2_cif_pane

0x4a29,	// (0x0006072b) image2_subqcif_pane_ParamLimits

0x4a29,	// (0x0006072b) image2_subqcif_pane

0x4a38,	// (0x0006073a) main_video2_pane_g1_ParamLimits

0x4a38,	// (0x0006073a) main_video2_pane_g1

0x4a4a,	// (0x0006074c) main_video2_pane_g2_ParamLimits

0x4a4a,	// (0x0006074c) main_video2_pane_g2

0x4a5a,	// (0x0006075c) main_video2_pane_g3_ParamLimits

0x4a5a,	// (0x0006075c) main_video2_pane_g3

0x4a6a,	// (0x0006076c) main_video2_pane_g4_ParamLimits

0x4a6a,	// (0x0006076c) main_video2_pane_g4

0x4a7a,	// (0x0006077c) main_video2_pane_g5_ParamLimits

0x4a7a,	// (0x0006077c) main_video2_pane_g5

0x4a8a,	// (0x0006078c) main_video2_pane_g6_ParamLimits

0x4a8a,	// (0x0006078c) main_video2_pane_g6

0x0005,

0xf55a,	// (0x0006b25c) main_video2_pane_g_ParamLimits

0xf55a,	// (0x0006b25c) main_video2_pane_g

0x4a9c,	// (0x0006079e) main_video2_pane_t1_ParamLimits

0x4a9c,	// (0x0006079e) main_video2_pane_t1

0x4ab6,	// (0x000607b8) main_video2_pane_t2_ParamLimits

0x4ab6,	// (0x000607b8) main_video2_pane_t2

0x4adc,	// (0x000607de) main_video2_pane_t3_ParamLimits

0x4adc,	// (0x000607de) main_video2_pane_t3

0x0002,

0xf567,	// (0x0006b269) main_video2_pane_t_ParamLimits

0xf567,	// (0x0006b269) main_video2_pane_t

0x4397,	// (0x00060099) call_muted_g2

0x0001,

0xf51c,	// (0x0006b21e) call_muted_g

0xa4ef,	// (0x000661f1) main_mup2_pane

0xc914,	// (0x00068616) main_mup2_pane_g1_ParamLimits

0xc914,	// (0x00068616) main_mup2_pane_g1

0x4b02,	// (0x00060804) main_mup2_pane_g2_ParamLimits

0x4b02,	// (0x00060804) main_mup2_pane_g2

0x4d84,	// (0x00060a86) main_mup_pane_g13_cp1

0x4d8c,	// (0x00060a8e) mup_volume_pane_cp1

0x4b22,	// (0x00060824) main_mup2_pane_g4_ParamLimits

0x4b22,	// (0x00060824) main_mup2_pane_g4

0x4b37,	// (0x00060839) main_mup2_pane_g5_ParamLimits

0x4b37,	// (0x00060839) main_mup2_pane_g5

0x4b4c,	// (0x0006084e) main_mup2_pane_g6_ParamLimits

0x4b4c,	// (0x0006084e) main_mup2_pane_g6

0x4b61,	// (0x00060863) main_mup2_pane_g7_ParamLimits

0x4b61,	// (0x00060863) main_mup2_pane_g7

0x0006,

0xf56e,	// (0x0006b270) main_mup2_pane_g_ParamLimits

0xf56e,	// (0x0006b270) main_mup2_pane_g

0x4b7d,	// (0x0006087f) main_mup2_pane_t1_ParamLimits

0x4b7d,	// (0x0006087f) main_mup2_pane_t1

0x4b94,	// (0x00060896) main_mup2_pane_t2_ParamLimits

0x4b94,	// (0x00060896) main_mup2_pane_t2

0x4bab,	// (0x000608ad) main_mup2_pane_t3_ParamLimits

0x4bab,	// (0x000608ad) main_mup2_pane_t3

0x4bc2,	// (0x000608c4) main_mup2_pane_t4_ParamLimits

0x4bc2,	// (0x000608c4) main_mup2_pane_t4

0x4bdc,	// (0x000608de) main_mup2_pane_t5_ParamLimits

0x4bdc,	// (0x000608de) main_mup2_pane_t5

0x4bf6,	// (0x000608f8) main_mup2_pane_t6_ParamLimits

0x4bf6,	// (0x000608f8) main_mup2_pane_t6

0x0005,

0xf57d,	// (0x0006b27f) main_mup2_pane_t_ParamLimits

0xf57d,	// (0x0006b27f) main_mup2_pane_t

0x4c2e,	// (0x00060930) mup2_visualizer_pane_ParamLimits

0x4c2e,	// (0x00060930) mup2_visualizer_pane

0x4c64,	// (0x00060966) mup_progress_pane_cp_ParamLimits

0x4c64,	// (0x00060966) mup_progress_pane_cp

0x4d6f,	// (0x00060a71) mup_volume_pane_cp_ParamLimits

0x4d6f,	// (0x00060a71) mup_volume_pane_cp

0x4c7b,	// (0x0006097d) mup2_visualizer_pane_g1_ParamLimits

0x4c7b,	// (0x0006097d) mup2_visualizer_pane_g1

0xc8e6,	// (0x000685e8) mup2_visualizer_pane_g2_ParamLimits

0xc8e6,	// (0x000685e8) mup2_visualizer_pane_g2

0x4c90,	// (0x00060992) mup2_visualizer_pane_g3_ParamLimits

0x4c90,	// (0x00060992) mup2_visualizer_pane_g3

0x0002,

0xf58a,	// (0x0006b28c) mup2_visualizer_pane_g_ParamLimits

0xf58a,	// (0x0006b28c) mup2_visualizer_pane_g

0xb726,	// (0x00067428) aid_size_cell_fmradio

0x44ad,	// (0x000601af) aid_height_parent_landcape

0xab64,	// (0x00066866) wml_content_pane_cp

0xab6c,	// (0x0006686e) wml_tabs_pane

0xab75,	// (0x00066877) popup_wml_miniature_window

0xab7d,	// (0x0006687f) scroll_pane_cp021

0xab91,	// (0x00066893) wml_content_pane_comp8

0xa4ef,	// (0x000661f1) bg_popup_sub_pane_cp05

0xc904,	// (0x00068606) popup_wml_miniature_window_g1

0xc90c,	// (0x0006860e) wml_miniature_view_pane

0x4c9e,	// (0x000609a0) aid_size_wml_view

0x4ca6,	// (0x000609a8) wml_miniature_view_pane_g1

0x4caf,	// (0x000609b1) wml_miniature_view_pane_g2

0x4cb8,	// (0x000609ba) wml_miniature_view_pane_g3

0x4cc0,	// (0x000609c2) wml_miniature_view_pane_g4

0x4cc8,	// (0x000609ca) wml_miniature_view_pane_g5

0x4cd0,	// (0x000609d2) wml_miniature_view_pane_g6

0x4cd8,	// (0x000609da) wml_miniature_view_pane_g7

0x4ce0,	// (0x000609e2) wml_miniature_view_pane_g8

0x0007,

0xf591,	// (0x0006b293) wml_miniature_view_pane_g

0xc914,	// (0x00068616) background_graphic_ParamLimits

0xc914,	// (0x00068616) background_graphic

0xc920,	// (0x00068622) wml_tabs_2_pane

0xc929,	// (0x0006862b) wml_tabs_3_pane_ParamLimits

0xc929,	// (0x0006862b) wml_tabs_3_pane

0xc93b,	// (0x0006863d) wml_tabs_4_pane_ParamLimits

0xc93b,	// (0x0006863d) wml_tabs_4_pane

0xc951,	// (0x00068653) wml_tabs_5_pane_ParamLimits

0xc951,	// (0x00068653) wml_tabs_5_pane

0xc96b,	// (0x0006866d) wml_tabs_pane_g2_ParamLimits

0xc96b,	// (0x0006866d) wml_tabs_pane_g2

0xc97f,	// (0x00068681) wml_tabs_pane_g3_ParamLimits

0xc97f,	// (0x00068681) wml_tabs_pane_g3

0x4ce8,	// (0x000609ea) wml_tabs_2_active_pane_ParamLimits

0x4ce8,	// (0x000609ea) wml_tabs_2_active_pane

0x4cf8,	// (0x000609fa) wml_tabs_2_passive_pane_ParamLimits

0x4cf8,	// (0x000609fa) wml_tabs_2_passive_pane

0x4d08,	// (0x00060a0a) wml_tabs_3_active_pane_cp_ParamLimits

0x4d08,	// (0x00060a0a) wml_tabs_3_active_pane_cp

0x4d19,	// (0x00060a1b) wml_tabs_3_passive_pane_ParamLimits

0x4d19,	// (0x00060a1b) wml_tabs_3_passive_pane

0x4d2a,	// (0x00060a2c) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d2a,	// (0x00060a2c) wml_tabs_3_passive_pane_cp

0x4d3b,	// (0x00060a3d) tabs_4_active_pane

0x4d43,	// (0x00060a45) tabs_4_passive_pane

0x4d4b,	// (0x00060a4d) tabs_4_passive_pane_cp

0x4d53,	// (0x00060a55) tabs_4_passive_pane_cp2

0x4272,	// (0x0005ff74) aid_height_text

0x39e9,	// (0x0005f6eb) mup_volume_cont_pane_ParamLimits

0x39e9,	// (0x0005f6eb) mup_volume_cont_pane

0x12e4,	// (0x0005cfe6) aid_size_cell_pinb

0x12ee,	// (0x0005cff0) aid_size_list_pinb

0x4c4d,	// (0x0006094f) mup2_volume_cont_pane_ParamLimits

0x4c4d,	// (0x0006094f) mup2_volume_cont_pane

0x4d5b,	// (0x00060a5d) mup2_volume_cont_pane_g1_ParamLimits

0x4d5b,	// (0x00060a5d) mup2_volume_cont_pane_g1

0x0f09,	// (0x0005cc0b) aid_size_cell_touch_ParamLimits

0x0f09,	// (0x0005cc0b) aid_size_cell_touch

0x11ca,	// (0x0005cecc) touch_pane_ParamLimits

0x11ca,	// (0x0005cecc) touch_pane

0x11c0,	// (0x0005cec2) main_rss2_pane

0xc99c,	// (0x0006869e) listscroll_rss2_pane

0xc9a5,	// (0x000686a7) rss2_navigation_pane

0xc9ad,	// (0x000686af) list_rss2_pane

0xb207,	// (0x00066f09) scroll_pane_cp22

0xc9b5,	// (0x000686b7) rss2_navigation_pane_g1

0xc9be,	// (0x000686c0) rss2_navigation_pane_g2

0xc9c6,	// (0x000686c8) rss2_navigation_pane_g3

0x0002,

0x0582,	// (0x0005c284) rss2_navigation_pane_g

0xc9ce,	// (0x000686d0) rss2_navigation_pane_t1

0x4d94,	// (0x00060a96) rss2_list_single_pane_ParamLimits

0x4d94,	// (0x00060a96) rss2_list_single_pane

0xc9dc,	// (0x000686de) rss2_list_single_pane_t2

0xc9ea,	// (0x000686ec) rss2_list_single_pane_t3_ParamLimits

0xc9ea,	// (0x000686ec) rss2_list_single_pane_t3

0xca07,	// (0x00068709) rss2_list_single_pane_t4

0x326d,	// (0x0005ef6f) smil_status_pane_g1

0x44c4,	// (0x000601c6) main_image2_pane_ParamLimits

0x44c4,	// (0x000601c6) main_image2_pane

0x4960,	// (0x00060662) main_camera2_pane_g9_ParamLimits

0x4960,	// (0x00060662) main_camera2_pane_g9

0x49b4,	// (0x000606b6) main_camera2_pane_t5_ParamLimits

0x49b4,	// (0x000606b6) main_camera2_pane_t5

0x49c6,	// (0x000606c8) main_camera2_pane_t6_ParamLimits

0x49c6,	// (0x000606c8) main_camera2_pane_t6

0x4dc5,	// (0x00060ac7) main_image2_pane_g1_ParamLimits

0x4dc5,	// (0x00060ac7) main_image2_pane_g1

0x4012,	// (0x0005fd14) smil2_video_pane_ParamLimits

0x4012,	// (0x0005fd14) smil2_video_pane

0x0e0d,	// (0x0005cb0f) aid_zoom_text_primary_cp

0x115b,	// (0x0005ce5d) popup_preview_fixed_window

0xaacd,	// (0x000667cf) im_reading_pane_g1

0x48aa,	// (0x000605ac) cams2_bc_adjust_pane_cp_ParamLimits

0x48aa,	// (0x000605ac) cams2_bc_adjust_pane_cp

0x49f6,	// (0x000606f8) cams2_bc_adjust_pane_ParamLimits

0x49f6,	// (0x000606f8) cams2_bc_adjust_pane

0xdc2c,	// (0x0006992e) cams2_bc_adjust_pane_g1

0x4dd1,	// (0x00060ad3) cams2_slider_pane

0x4dda,	// (0x00060adc) cams2_slider_pane_g1

0x4de3,	// (0x00060ae5) cams2_slider_pane_g2

0x0006,

0xf5a2,	// (0x0006b2a4) cams2_slider_pane_g

0x13f4,	// (0x0005d0f6) calc_display_pane_ParamLimits

0x1412,	// (0x0005d114) calc_paper_pane_ParamLimits

0x142e,	// (0x0005d130) grid_calc_pane_ParamLimits

0x353d,	// (0x0005f23f) popup_clock_digital_window_t1_ParamLimits

0xb6c3,	// (0x000673c5) main_image_pane_t1

0x13da,	// (0x0005d0dc) aid_size_cell_calc_ParamLimits

0x13da,	// (0x0005d0dc) aid_size_cell_calc

0x44f5,	// (0x000601f7) popup_blid_sat_info2_window_ParamLimits

0x44f5,	// (0x000601f7) popup_blid_sat_info2_window

0xca1d,	// (0x0006871f) aid_size_cell_blid

0xca25,	// (0x00068727) bg_popup_window_pane_cp07

0xca48,	// (0x0006874a) grid_popup_blid_pane

0xca52,	// (0x00068754) heading_pane_cp05_ParamLimits

0xca52,	// (0x00068754) heading_pane_cp05

0xcb1c,	// (0x0006881e) cell_popup_blid_pane_ParamLimits

0xcb1c,	// (0x0006881e) cell_popup_blid_pane

0xcb40,	// (0x00068842) cell_popup_blid_pane_g1

0xcb48,	// (0x0006884a) cell_popup_blid_pane_t1

0x4c13,	// (0x00060915) mup2_indicator_pane_ParamLimits

0x4c13,	// (0x00060915) mup2_indicator_pane

0xa9d4,	// (0x000666d6) mup2_visualizer_osc_pane

0xc8f2,	// (0x000685f4) mup2_visualizer_spec_pane_ParamLimits

0xc8f2,	// (0x000685f4) mup2_visualizer_spec_pane

0x4dfd,	// (0x00060aff) mup2_spec_half_pane

0x4e06,	// (0x00060b08) mup2_spec_half_pane_cp

0x4e10,	// (0x00060b12) mup2_spec_bar_pane_ParamLimits

0x4e10,	// (0x00060b12) mup2_spec_bar_pane

0xc893,	// (0x00068595) mup2_spec_bar_pane_g1

0xc89d,	// (0x0006859f) mup2_spec_bar_pane_g2

0x0001,

0x04fc,	// (0x0005c1fe) mup2_spec_bar_pane_g

0x4e2f,	// (0x00060b31) mup2_osc_middle_pane

0xc8af,	// (0x000685b1) mup2_visualizer_osc_pane_g1

0x9c15,	// (0x00065917) popup_number_entry_window_t1_ParamLimits

0x9c28,	// (0x0006592a) popup_number_entry_window_t2_ParamLimits

0x9c3a,	// (0x0006593c) popup_number_entry_window_t3_ParamLimits

0x1221,	// (0x0005cf23) popup_number_entry_window_t5_ParamLimits

0x1221,	// (0x0005cf23) popup_number_entry_window_t5

0xf0ca,	// (0x0006adcc) popup_number_entry_window_t_ParamLimits

0x9c4c,	// (0x0006594e) text_title_cp2_ParamLimits

0x3d12,	// (0x0005fa14) aid_hotspot_pointer_text2_pane

0x3da0,	// (0x0005faa2) main_viewer_pane_g9_ParamLimits

0x3da0,	// (0x0005faa2) main_viewer_pane_g9

0xad06,	// (0x00066a08) cale_month_pane_t1_ParamLimits

0xad43,	// (0x00066a45) bg_cale_pane_ParamLimits

0xad5b,	// (0x00066a5d) list_cale_pane_ParamLimits

0xad6c,	// (0x00066a6e) listscroll_cale_day_pane_t1

0xad7e,	// (0x00066a80) scroll_pane_cp09_ParamLimits

0x3a24,	// (0x0005f726) main_mup_eq_pane_t1_ParamLimits

0x3a24,	// (0x0005f726) main_mup_eq_pane_t1

0x3a3e,	// (0x0005f740) main_mup_eq_pane_t2_ParamLimits

0x3a3e,	// (0x0005f740) main_mup_eq_pane_t2

0x3a58,	// (0x0005f75a) main_mup_eq_pane_t3_ParamLimits

0x3a58,	// (0x0005f75a) main_mup_eq_pane_t3

0x3a70,	// (0x0005f772) main_mup_eq_pane_t4_ParamLimits

0x3a70,	// (0x0005f772) main_mup_eq_pane_t4

0x3a88,	// (0x0005f78a) main_mup_eq_pane_t5_ParamLimits

0x3a88,	// (0x0005f78a) main_mup_eq_pane_t5

0x3aa0,	// (0x0005f7a2) main_mup_eq_pane_t6_ParamLimits

0x3aa0,	// (0x0005f7a2) main_mup_eq_pane_t6

0x3ab4,	// (0x0005f7b6) main_mup_eq_pane_t7_ParamLimits

0x3ab4,	// (0x0005f7b6) main_mup_eq_pane_t7

0x3ac8,	// (0x0005f7ca) main_mup_eq_pane_t8_ParamLimits

0x3ac8,	// (0x0005f7ca) main_mup_eq_pane_t8

0x3ade,	// (0x0005f7e0) main_mup_eq_pane_t9_ParamLimits

0x3ade,	// (0x0005f7e0) main_mup_eq_pane_t9

0x3af6,	// (0x0005f7f8) main_mup_eq_pane_t10_ParamLimits

0x3af6,	// (0x0005f7f8) main_mup_eq_pane_t10

0x0009,

0xf42f,	// (0x0006b131) main_mup_eq_pane_t_ParamLimits

0xf42f,	// (0x0006b131) main_mup_eq_pane_t

0x3bb3,	// (0x0005f8b5) mup_equalizer_pane_cp5_ParamLimits

0x3bc9,	// (0x0005f8cb) mup_equalizer_pane_cp6_ParamLimits

0x3be1,	// (0x0005f8e3) mup_equalizer_pane_cp7_ParamLimits

0x11c0,	// (0x0005cec2) main_gallery_pane

0xc8b8,	// (0x000685ba) smil2_volume_pane

0xc8d3,	// (0x000685d5) smil_status_volume_pane_g1_ParamLimits

0xc8c0,	// (0x000685c2) smil_status_volume_pane_g2_ParamLimits

0x471d,	// (0x0006041f) smil_status_volume_pane_g3_ParamLimits

0xf521,	// (0x0006b223) smil_status_volume_pane_g_ParamLimits

0xca25,	// (0x00068727) bg_popup_window_pane_cp07_ParamLimits

0xca33,	// (0x00068735) blid_firmament_pane

0x4e38,	// (0x00060b3a) aid_size_cell_gallery_ParamLimits

0x4e38,	// (0x00060b3a) aid_size_cell_gallery

0x4e46,	// (0x00060b48) grid_gallery_pane_ParamLimits

0x4e46,	// (0x00060b48) grid_gallery_pane

0x4e56,	// (0x00060b58) cell_gallery_pane_ParamLimits

0x4e56,	// (0x00060b58) cell_gallery_pane

0xcb56,	// (0x00068858) bg_cell_gallery_focus_pane_ParamLimits

0xcb56,	// (0x00068858) bg_cell_gallery_focus_pane

0xcb68,	// (0x0006886a) cell_gallery_pane_g1_ParamLimits

0xcb68,	// (0x0006886a) cell_gallery_pane_g1

0x4ea4,	// (0x00060ba6) cell_gallery_pane_g2_ParamLimits

0x4ea4,	// (0x00060ba6) cell_gallery_pane_g2

0x4eb1,	// (0x00060bb3) cell_gallery_pane_g3_ParamLimits

0x4eb1,	// (0x00060bb3) cell_gallery_pane_g3

0xcb74,	// (0x00068876) cell_gallery_pane_g4_ParamLimits

0xcb74,	// (0x00068876) cell_gallery_pane_g4

0x0003,

0xf5b1,	// (0x0006b2b3) cell_gallery_pane_g_ParamLimits

0xf5b1,	// (0x0006b2b3) cell_gallery_pane_g

0xcb80,	// (0x00068882) bg_cell_gallery_focus_pane_g1

0xcb88,	// (0x0006888a) bg_cell_gallery_focus_pane_g2

0xcb90,	// (0x00068892) bg_cell_gallery_focus_pane_g3

0xcb98,	// (0x0006889a) bg_cell_gallery_focus_pane_g4

0xcba0,	// (0x000688a2) bg_cell_gallery_focus_pane_g5

0xcba8,	// (0x000688aa) bg_cell_gallery_focus_pane_g6

0xcbb0,	// (0x000688b2) bg_cell_gallery_focus_pane_g7

0xcbb8,	// (0x000688ba) bg_cell_gallery_focus_pane_g8

0x0007,

0x05b8,	// (0x0005c2ba) bg_cell_gallery_focus_pane_g

0xcbc0,	// (0x000688c2) aid_firma_cardinal

0xcbd4,	// (0x000688d6) blid_firmament_pane_t1

0xcbeb,	// (0x000688ed) blid_firmament_pane_t2

0xcc02,	// (0x00068904) blid_firmament_pane_t3

0xcc19,	// (0x0006891b) blid_firmament_pane_t4

0x0003,

0x05c9,	// (0x0005c2cb) blid_firmament_pane_t

0xcc39,	// (0x0006893b) blid_sat_info_pane

0xcc49,	// (0x0006894b) blid_sat_info_pane_g1

0xcc49,	// (0x0006894b) blid_sat_info_pane_g2

0x0001,

0xf5ba,	// (0x0006b2bc) blid_sat_info_pane_g

0xcc53,	// (0x00068955) blid_sat_info_pane_t1

0xcc61,	// (0x00068963) smil2_volume_content_pane

0xcc6a,	// (0x0006896c) smil2_volume_pane_g1

0xcc30,	// (0x00068932) smil2_volume_content_pane_g1

0xcc72,	// (0x00068974) smil2_volume_content_pane_g2

0xcc7b,	// (0x0006897d) smil2_volume_content_pane_g3

0xcc84,	// (0x00068986) smil2_volume_content_pane_g4

0xcc8d,	// (0x0006898f) smil2_volume_content_pane_g5

0xcc96,	// (0x00068998) smil2_volume_content_pane_g6

0xcc9f,	// (0x000689a1) smil2_volume_content_pane_g7

0xcca8,	// (0x000689aa) smil2_volume_content_pane_g8

0xccb1,	// (0x000689b3) smil2_volume_content_pane_g9

0xccba,	// (0x000689bc) smil2_volume_content_pane_g10

0x0009,

0xf5bf,	// (0x0006b2c1) smil2_volume_content_pane_g

0x1a17,	// (0x0005d719) cale_week_day_heading_pane_t1_ParamLimits

0x1a52,	// (0x0005d754) cale_week_day_heading_pane_t2_ParamLimits

0x1a8d,	// (0x0005d78f) cale_week_day_heading_pane_t3_ParamLimits

0x1ac8,	// (0x0005d7ca) cale_week_day_heading_pane_t4_ParamLimits

0x1b03,	// (0x0005d805) cale_week_day_heading_pane_t5_ParamLimits

0x1b3e,	// (0x0005d840) cale_week_day_heading_pane_t6_ParamLimits

0x1b79,	// (0x0005d87b) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0006aed3) cale_week_day_heading_pane_t_ParamLimits

0xa979,	// (0x0006667b) bg_cale_side_pane_ParamLimits

0x1bb4,	// (0x0005d8b6) cale_week_time_pane_t1_ParamLimits

0x1bce,	// (0x0005d8d0) cale_week_time_pane_t2_ParamLimits

0x1be8,	// (0x0005d8ea) cale_week_time_pane_t3_ParamLimits

0x1c02,	// (0x0005d904) cale_week_time_pane_t4_ParamLimits

0x1c1c,	// (0x0005d91e) cale_week_time_pane_t5_ParamLimits

0x1c36,	// (0x0005d938) cale_week_time_pane_t6_ParamLimits

0x1c56,	// (0x0005d958) cale_week_time_pane_t7_ParamLimits

0x1c78,	// (0x0005d97a) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0006aee2) cale_week_time_pane_t_ParamLimits

0x1c9c,	// (0x0005d99e) cell_cale_week_pane_g2_ParamLimits

0xa979,	// (0x0006667b) bg_cale_side_pane_cp01_ParamLimits

0x3038,	// (0x0005ed3a) cale_month_week_pane_t1_ParamLimits

0x3051,	// (0x0005ed53) cale_month_week_pane_t2_ParamLimits

0x306a,	// (0x0005ed6c) cale_month_week_pane_t3_ParamLimits

0x3083,	// (0x0005ed85) cale_month_week_pane_t4_ParamLimits

0x309c,	// (0x0005ed9e) cale_month_week_pane_t5_ParamLimits

0x30bd,	// (0x0005edbf) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0006afb7) cale_month_week_pane_t_ParamLimits

0x322a,	// (0x0005ef2c) cell_cale_month_pane_g1_ParamLimits

0x11c0,	// (0x0005cec2) main_cale_event_viewer_pane

0x9beb,	// (0x000658ed) listscroll_cale_event_viewer_pane

0xccc3,	// (0x000689c5) list_cale_ev_pane

0xcccb,	// (0x000689cd) scroll_pane_cp023

0xccd7,	// (0x000689d9) field_cale_ev_pane_ParamLimits

0xccd7,	// (0x000689d9) field_cale_ev_pane

0xccf5,	// (0x000689f7) field_cale_ev_content_pane_ParamLimits

0xccf5,	// (0x000689f7) field_cale_ev_content_pane

0xcd01,	// (0x00068a03) field_cale_ev_pane_g1_ParamLimits

0xcd01,	// (0x00068a03) field_cale_ev_pane_g1

0xcd0d,	// (0x00068a0f) field_cale_ev_pane_g2_ParamLimits

0xcd0d,	// (0x00068a0f) field_cale_ev_pane_g2

0xcd25,	// (0x00068a27) field_cale_ev_pane_g3_ParamLimits

0xcd25,	// (0x00068a27) field_cale_ev_pane_g3

0x0002,

0xf5d4,	// (0x0006b2d6) field_cale_ev_pane_g_ParamLimits

0xf5d4,	// (0x0006b2d6) field_cale_ev_pane_g

0xcd49,	// (0x00068a4b) field_cale_ev_pane_t1_ParamLimits

0xcd49,	// (0x00068a4b) field_cale_ev_pane_t1

0xcd60,	// (0x00068a62) field_cale_ev_content_pane_t1_ParamLimits

0xcd60,	// (0x00068a62) field_cale_ev_content_pane_t1

0xb5a9,	// (0x000672ab) bg_button_pane_cp01

0x17a4,	// (0x0005d4a6) listscroll_cale_week_pane_ParamLimits

0xa924,	// (0x00066626) popup_toolbar_window_cp01

0xa94a,	// (0x0006664c) listscroll_cale_week_pane_t1_ParamLimits

0x17a4,	// (0x0005d4a6) listscroll_cale_day_pane_ParamLimits

0xa924,	// (0x00066626) popup_toolbar_window_cp02

0xad6c,	// (0x00066a6e) listscroll_cale_day_pane_t1_ParamLimits

0x17a4,	// (0x0005d4a6) main_cale_month_pane_ParamLimits

0x45fc,	// (0x000602fe) popup_toolbar_window_cp03_ParamLimits

0x45fc,	// (0x000602fe) popup_toolbar_window_cp03

0x3f28,	// (0x0005fc2a) main_image_pane_g2_ParamLimits

0x3f28,	// (0x0005fc2a) main_image_pane_g2

0x3f34,	// (0x0005fc36) main_image_pane_g3_ParamLimits

0x3f34,	// (0x0005fc36) main_image_pane_g3

0x0002,

0xf4b7,	// (0x0006b1b9) main_image_pane_g_ParamLimits

0xf4b7,	// (0x0006b1b9) main_image_pane_g

0xb6c3,	// (0x000673c5) main_image_pane_t1_ParamLimits

0x3f40,	// (0x0005fc42) main_image_pane_t2_ParamLimits

0x3f40,	// (0x0005fc42) main_image_pane_t2

0x3f52,	// (0x0005fc54) main_image_pane_t3_ParamLimits

0x3f52,	// (0x0005fc54) main_image_pane_t3

0x3f64,	// (0x0005fc66) main_image_pane_t4_ParamLimits

0x3f64,	// (0x0005fc66) main_image_pane_t4

0x0003,

0xf4be,	// (0x0006b1c0) main_image_pane_t_ParamLimits

0xf4be,	// (0x0006b1c0) main_image_pane_t

0x3f76,	// (0x0005fc78) popup_image_details_window_cp01

0x3f80,	// (0x0005fc82) popup_toobar_trans_pane_cp01_ParamLimits

0x3f80,	// (0x0005fc82) popup_toobar_trans_pane_cp01

0x454c,	// (0x0006024e) popup_image_details_window_ParamLimits

0x454c,	// (0x0006024e) popup_image_details_window

0x455a,	// (0x0006025c) popup_image_focus_window

0x489c,	// (0x0006059e) camera2_autofocus_pane_ParamLimits

0x489c,	// (0x0006059e) camera2_autofocus_pane

0x9beb,	// (0x000658ed) bg_popup_sub_pane_cp06

0xcd7e,	// (0x00068a80) popup_image_focus_window_g1

0xcd86,	// (0x00068a88) popup_image_focus_window_g2

0xcd8e,	// (0x00068a90) popup_image_focus_window_g3

0xcd96,	// (0x00068a98) popup_image_focus_window_g4

0x0003,

0x05f3,	// (0x0005c2f5) popup_image_focus_window_g

0xcd9e,	// (0x00068aa0) popup_image_focus_window_t1

0xcdac,	// (0x00068aae) popup_image_focus_window_t2

0xcdbc,	// (0x00068abe) popup_image_focus_window_t3

0x0002,

0x05fc,	// (0x0005c2fe) popup_image_focus_window_t

0xcdca,	// (0x00068acc) camera2_autofocus_pane_g1

0xa4be,	// (0x000661c0) bg_tb_trans_pane_cp01

0xcdd8,	// (0x00068ada) popup_image_details_window_g1

0xcdeb,	// (0x00068aed) popup_image_details_window_g2

0x0002,

0x060e,	// (0x0005c310) popup_image_details_window_g

0xce14,	// (0x00068b16) popup_image_details_window_t1

0xce26,	// (0x00068b28) popup_image_details_window_t2

0xce3f,	// (0x00068b41) popup_image_details_window_t3

0xce53,	// (0x00068b55) popup_image_details_window_t4

0xce6e,	// (0x00068b70) popup_image_details_window_t5

0x0004,

0x0615,	// (0x0005c317) popup_image_details_window_t

0xa7fb,	// (0x000664fd) bg_calc_paper_pane_ParamLimits

0x11c0,	// (0x0005cec2) grid_highlight_pane_cp013

0x152b,	// (0x0005d22d) list_calc_pane_ParamLimits

0x153d,	// (0x0005d23f) scroll_pane_cp024

0xa80f,	// (0x00066511) bg_calc_display_pane_ParamLimits

0x1545,	// (0x0005d247) calc_display_pane_t1_ParamLimits

0x155a,	// (0x0005d25c) calc_display_pane_t2_ParamLimits

0x156f,	// (0x0005d271) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0006ae53) calc_display_pane_t_ParamLimits

0x164b,	// (0x0005d34d) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0006ae70) cell_calc_pane_g

0x1654,	// (0x0005d356) cell_calc_pane_t1

0xa86e,	// (0x00066570) grid_highlight_pane_cp02_ParamLimits

0xa884,	// (0x00066586) toolbar_button_pane_cp01_ParamLimits

0xa884,	// (0x00066586) toolbar_button_pane_cp01

0xb708,	// (0x0006740a) temp_image_control_pane_ParamLimits

0xb708,	// (0x0006740a) temp_image_control_pane

0x44c4,	// (0x000601c6) main_mp3_pane

0xce88,	// (0x00068b8a) temp_image_control_pane_g1_ParamLimits

0xce88,	// (0x00068b8a) temp_image_control_pane_g1

0xce96,	// (0x00068b98) temp_image_control_pane_g2_ParamLimits

0xce96,	// (0x00068b98) temp_image_control_pane_g2

0xcea8,	// (0x00068baa) temp_image_control_pane_g3_ParamLimits

0xcea8,	// (0x00068baa) temp_image_control_pane_g3

0x4eee,	// (0x00060bf0) temp_image_control_pane_g4_ParamLimits

0x4eee,	// (0x00060bf0) temp_image_control_pane_g4

0x0003,

0xf5e6,	// (0x0006b2e8) temp_image_control_pane_g_ParamLimits

0xf5e6,	// (0x0006b2e8) temp_image_control_pane_g

0xce88,	// (0x00068b8a) main_mp3_pane_g1

0x4eff,	// (0x00060c01) main_mp3_pane_g2

0x0007,

0xf5ef,	// (0x0006b2f1) main_mp3_pane_g

0xceeb,	// (0x00068bed) main_mp3_pane_t1

0xa9dc,	// (0x000666de) main_camera_pane_g8_ParamLimits

0xa9dc,	// (0x000666de) main_camera_pane_g8

0x1f29,	// (0x0005dc2b) main_video_pane_g7_ParamLimits

0x1f29,	// (0x0005dc2b) main_video_pane_g7

0x49e4,	// (0x000606e6) main_camera2_pane_t7_ParamLimits

0x49e4,	// (0x000606e6) main_camera2_pane_t7

0xab24,	// (0x00066826) scroll_pane_cp025_ParamLimits

0xab24,	// (0x00066826) scroll_pane_cp025

0xab38,	// (0x0006683a) scroll_pane_cp026_ParamLimits

0xab38,	// (0x0006683a) scroll_pane_cp026

0xab47,	// (0x00066849) wml_content_pane_ParamLimits

0x11c0,	// (0x0005cec2) main_touch_calib_pane

0x4fa3,	// (0x00060ca5) main_touch_calib_pane_g1

0x4faf,	// (0x00060cb1) main_touch_calib_pane_g2

0x4fbb,	// (0x00060cbd) main_touch_calib_pane_g3

0x4fc7,	// (0x00060cc9) main_touch_calib_pane_g4

0x0003,

0xf60d,	// (0x0006b30f) main_touch_calib_pane_g

0x4fd3,	// (0x00060cd5) main_touch_calib_pane_t1

0x4fec,	// (0x00060cee) main_touch_calib_pane_t2

0x0004,

0xf616,	// (0x0006b318) main_touch_calib_pane_t

0xb2e3,	// (0x00066fe5) mup_progress_pane_cp02

0xb318,	// (0x0006701a) navi_pane_g1

0xb3d3,	// (0x000670d5) navi_pane_mp_t3

0x44c4,	// (0x000601c6) main_mp3_pane_ParamLimits

0x4639,	// (0x0006033b) navi_pane_ParamLimits

0xce88,	// (0x00068b8a) main_mp3_pane_g1_ParamLimits

0x4eff,	// (0x00060c01) main_mp3_pane_g2_ParamLimits

0x4f0b,	// (0x00060c0d) main_mp3_pane_g3_ParamLimits

0x4f0b,	// (0x00060c0d) main_mp3_pane_g3

0x4f17,	// (0x00060c19) main_mp3_pane_g4_ParamLimits

0x4f17,	// (0x00060c19) main_mp3_pane_g4

0xceb8,	// (0x00068bba) main_mp3_pane_g5_ParamLimits

0xceb8,	// (0x00068bba) main_mp3_pane_g5

0xcec6,	// (0x00068bc8) main_mp3_pane_g6_ParamLimits

0xcec6,	// (0x00068bc8) main_mp3_pane_g6

0xced3,	// (0x00068bd5) main_mp3_pane_g7_ParamLimits

0xced3,	// (0x00068bd5) main_mp3_pane_g7

0xcedf,	// (0x00068be1) main_mp3_pane_g8_ParamLimits

0xcedf,	// (0x00068be1) main_mp3_pane_g8

0xf5ef,	// (0x0006b2f1) main_mp3_pane_g_ParamLimits

0x4f23,	// (0x00060c25) main_mp3_pane_t2

0x4f33,	// (0x00060c35) main_mp3_pane_t3

0xcef9,	// (0x00068bfb) main_mp3_pane_t4

0xcf07,	// (0x00068c09) main_mp3_pane_t5

0x0005,

0xf600,	// (0x0006b302) main_mp3_pane_t

0xcf15,	// (0x00068c17) mup_progress_pane_cp01

0x0e0d,	// (0x0005cb0f) aid_zoom_text_secondary2

0xccc3,	// (0x000689c5) list_cale_ev2_pane

0xcccb,	// (0x000689cd) scroll_pane_cp023_ParamLimits

0x5047,	// (0x00060d49) field_cale_ev2_pane_ParamLimits

0x5047,	// (0x00060d49) field_cale_ev2_pane

0xa017,	// (0x00065d19) field_cale_ev2_pane_g1_ParamLimits

0xa017,	// (0x00065d19) field_cale_ev2_pane_g1

0xa023,	// (0x00065d25) field_cale_ev2_pane_g2_ParamLimits

0xa023,	// (0x00065d25) field_cale_ev2_pane_g2

0xa03b,	// (0x00065d3d) field_cale_ev2_pane_g3_ParamLimits

0xa03b,	// (0x00065d3d) field_cale_ev2_pane_g3

0x0003,

0xf621,	// (0x0006b323) field_cale_ev2_pane_g_ParamLimits

0xf621,	// (0x0006b323) field_cale_ev2_pane_g

0x5070,	// (0x00060d72) field_cale_ev2_pane_t1_ParamLimits

0x5070,	// (0x00060d72) field_cale_ev2_pane_t1

0x5087,	// (0x00060d89) field_cale_ev2_pane_t2_ParamLimits

0x5087,	// (0x00060d89) field_cale_ev2_pane_t2

0x0001,

0xf62a,	// (0x0006b32c) field_cale_ev2_pane_t_ParamLimits

0xf62a,	// (0x0006b32c) field_cale_ev2_pane_t

0x3e08,	// (0x0005fb0a) main_postcard_pane_g5_ParamLimits

0x3e08,	// (0x0005fb0a) main_postcard_pane_g5

0x3e16,	// (0x0005fb18) main_postcard_pane_g6_ParamLimits

0x3e16,	// (0x0005fb18) main_postcard_pane_g6

0x1d73,	// (0x0005da75) camera2_autofocus_pane_cp_ParamLimits

0x1d73,	// (0x0005da75) camera2_autofocus_pane_cp

0x44c4,	// (0x000601c6) main_mup3_pane

0x509c,	// (0x00060d9e) main_mup3_pane_g1_ParamLimits

0x509c,	// (0x00060d9e) main_mup3_pane_g1

0x50bd,	// (0x00060dbf) main_mup3_pane_g2_ParamLimits

0x50bd,	// (0x00060dbf) main_mup3_pane_g2

0x5135,	// (0x00060e37) main_mup3_pane_g3_ParamLimits

0x5135,	// (0x00060e37) main_mup3_pane_g3

0x5178,	// (0x00060e7a) main_mup3_pane_g4_ParamLimits

0x5178,	// (0x00060e7a) main_mup3_pane_g4

0x51bb,	// (0x00060ebd) main_mup3_pane_g5_ParamLimits

0x51bb,	// (0x00060ebd) main_mup3_pane_g5

0x51fe,	// (0x00060f00) main_mup3_pane_g6_ParamLimits

0x51fe,	// (0x00060f00) main_mup3_pane_g6

0xcf3d,	// (0x00068c3f) main_mup3_pane_g7_ParamLimits

0xcf3d,	// (0x00068c3f) main_mup3_pane_g7

0x0007,

0xf63a,	// (0x0006b33c) main_mup3_pane_g_ParamLimits

0xf63a,	// (0x0006b33c) main_mup3_pane_g

0x5274,	// (0x00060f76) main_mup3_pane_t1_ParamLimits

0x5274,	// (0x00060f76) main_mup3_pane_t1

0x52e3,	// (0x00060fe5) main_mup3_pane_t2_ParamLimits

0x52e3,	// (0x00060fe5) main_mup3_pane_t2

0x53ac,	// (0x000610ae) main_mup3_pane_t4_ParamLimits

0x53ac,	// (0x000610ae) main_mup3_pane_t4

0x53fa,	// (0x000610fc) main_mup3_pane_t5_ParamLimits

0x53fa,	// (0x000610fc) main_mup3_pane_t5

0x54aa,	// (0x000611ac) main_mup3_pane_t6_ParamLimits

0x54aa,	// (0x000611ac) main_mup3_pane_t6

0x0005,

0xf64b,	// (0x0006b34d) main_mup3_pane_t_ParamLimits

0xf64b,	// (0x0006b34d) main_mup3_pane_t

0x5556,	// (0x00061258) mup3_progress_pane_ParamLimits

0x5556,	// (0x00061258) mup3_progress_pane

0x55d4,	// (0x000612d6) popup_mup3_control_window_ParamLimits

0x55d4,	// (0x000612d6) popup_mup3_control_window

0xcf4b,	// (0x00068c4d) popup_mup3_text_window

0x55ed,	// (0x000612ef) mup3_progress_pane_t1

0x560c,	// (0x0006130e) mup3_progress_pane_t2

0xcf53,	// (0x00068c55) mup3_progress_pane_t3

0x0002,

0xf658,	// (0x0006b35a) mup3_progress_pane_t

0xcf70,	// (0x00068c72) mup_progress_pane_cp03

0x9beb,	// (0x000658ed) bg_tb_trans_pane_cp04

0x562b,	// (0x0006132d) mup3_volume_pane

0x5633,	// (0x00061335) popup_mup3_control_window_g1

0x563c,	// (0x0006133e) mup3_volume_pane_g1

0x5645,	// (0x00061347) mup3_volume_pane_g2

0x564e,	// (0x00061350) mup3_volume_pane_g3

0x0002,

0xf65f,	// (0x0006b361) mup3_volume_pane_g

0x9beb,	// (0x000658ed) bg_tb_trans_pane_cp03

0xcf80,	// (0x00068c82) popup_mup3_text_window_g1

0xcf88,	// (0x00068c8a) popup_mup3_text_window_t1

0xa857,	// (0x00066559) list_calc_item_pane_g1_ParamLimits

0xc993,	// (0x00068695) mup_volume_pane_cp_g1

0x5005,	// (0x00060d07) main_touch_calib_pane_t3

0x501b,	// (0x00060d1d) main_touch_calib_pane_t4

0x5031,	// (0x00060d33) main_touch_calib_pane_t5

0x0ef5,	// (0x0005cbf7) aid_cell_size_toolbar2

0x0efd,	// (0x0005cbff) aid_popup3_width_pane

0x0e05,	// (0x0005cb07) aid_zoom_text_msg_primary

0x1d48,	// (0x0005da4a) vorec_t7

0xa81b,	// (0x0006651d) bg_calc_paper_pane_g1_ParamLimits

0xa827,	// (0x00066529) bg_calc_paper_pane_g2_ParamLimits

0xa833,	// (0x00066535) bg_calc_paper_pane_g3_ParamLimits

0xa83f,	// (0x00066541) bg_calc_paper_pane_g4_ParamLimits

0xa84b,	// (0x0006654d) bg_calc_paper_pane_g5_ParamLimits

0x15ae,	// (0x0005d2b0) bg_calc_paper_pane_g6_ParamLimits

0x15bf,	// (0x0005d2c1) bg_calc_paper_pane_g7_ParamLimits

0x15d0,	// (0x0005d2d2) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0006ae5a) bg_calc_paper_pane_g_ParamLimits

0x15e1,	// (0x0005d2e3) calc_bg_paper_pane_g9_ParamLimits

0x1e5a,	// (0x0005db5c) image_qvga_pane_ParamLimits

0x1e5a,	// (0x0005db5c) image_qvga_pane

0xa74a,	// (0x0006644c) bg_popup_sub_pane_cp04_ParamLimits

0xb63f,	// (0x00067341) popup_mup_playback_window_g1_ParamLimits

0xb64b,	// (0x0006734d) popup_mup_playback_window_t1_ParamLimits

0xb660,	// (0x00067362) popup_mup_playback_window_t2_ParamLimits

0x03d8,	// (0x0005c0da) popup_mup_playback_window_t_ParamLimits

0x4b13,	// (0x00060815) main_mup2_pane_g3_ParamLimits

0x4b13,	// (0x00060815) main_mup2_pane_g3

0x2226,	// (0x0005df28) popup_toolbar_window_cp04

0xba42,	// (0x00067744) popup_call2_audio_second_window_g3_ParamLimits

0xba42,	// (0x00067744) popup_call2_audio_second_window_g3

0xbe4c,	// (0x00067b4e) popup_call2_audio_first_window_g4_ParamLimits

0xbe4c,	// (0x00067b4e) popup_call2_audio_first_window_g4

0xc4cb,	// (0x000681cd) popup_call2_audio_in_window_g4_ParamLimits

0xc4cb,	// (0x000681cd) popup_call2_audio_in_window_g4

0x3f1b,	// (0x0005fc1d) aid_area_sk_bg_cut_ParamLimits

0x3f1b,	// (0x0005fc1d) aid_area_sk_bg_cut

0xb675,	// (0x00067377) aid_area_sk_bg_cut_2_ParamLimits

0xb675,	// (0x00067377) aid_area_sk_bg_cut_2

0x4e94,	// (0x00060b96) aid_placing_details_win

0x4e9c,	// (0x00060b9e) aid_placing_details_win_2

0xcdca,	// (0x00068acc) camera2_autofocus_pane_g1_ParamLimits

0x114c,	// (0x0005ce4e) popup_fixed_preview_cale_window_ParamLimits

0x114c,	// (0x0005ce4e) popup_fixed_preview_cale_window

0xb451,	// (0x00067153) navi_slider_pane_g3

0xb45a,	// (0x0006715c) navi_slider_pane_g4

0xb463,	// (0x00067165) navi_slider_pane_g5

0xb451,	// (0x00067153) navi_slider_pane_g6

0x37b8,	// (0x0005f4ba) navi_slider_pane_g7

0xb576,	// (0x00067278) mup_scale_pane_g3

0xb57f,	// (0x00067281) mup_scale_pane_g4

0xb588,	// (0x0006728a) mup_scale_pane_g5

0x3bf9,	// (0x0005f8fb) mup_scale_pane_g6

0x3c02,	// (0x0005f904) mup_scale_pane_g7

0xb451,	// (0x00067153) cams2_slider_pane_g3

0xca15,	// (0x00068717) cams2_slider_pane_g4

0x4dec,	// (0x00060aee) cams2_slider_pane_g5

0xb451,	// (0x00067153) cams2_slider_pane_g6

0x4df4,	// (0x00060af6) cams2_slider_pane_g7

0xcc49,	// (0x0006894b) camera2_autofocus_pane_cp_g1

0xc82c,	// (0x0006852e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc82c,	// (0x0006852e) bg_popup_preview_window_pane_cp02

0xcf96,	// (0x00068c98) list_fp_cale_pane_ParamLimits

0xcf96,	// (0x00068c98) list_fp_cale_pane

0xcfa2,	// (0x00068ca4) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfa2,	// (0x00068ca4) popup_fixed_preview_cale_window_t1

0x5657,	// (0x00061359) popup_fixed_preview_cale_window_t2_ParamLimits

0x5657,	// (0x00061359) popup_fixed_preview_cale_window_t2

0x566c,	// (0x0006136e) popup_fixed_preview_cale_window_t3_ParamLimits

0x566c,	// (0x0006136e) popup_fixed_preview_cale_window_t3

0x0002,

0xf666,	// (0x0006b368) popup_fixed_preview_cale_window_t_ParamLimits

0xf666,	// (0x0006b368) popup_fixed_preview_cale_window_t

0x5681,	// (0x00061383) list_single_fp_cale_pane_ParamLimits

0x5681,	// (0x00061383) list_single_fp_cale_pane

0xcfc0,	// (0x00068cc2) list_single_fp_cale_pane_g1_ParamLimits

0xcfc0,	// (0x00068cc2) list_single_fp_cale_pane_g1

0xcfcc,	// (0x00068cce) list_single_fp_cale_pane_g2_ParamLimits

0xcfcc,	// (0x00068cce) list_single_fp_cale_pane_g2

0x0002,

0x06a7,	// (0x0005c3a9) list_single_fp_cale_pane_g_ParamLimits

0x06a7,	// (0x0005c3a9) list_single_fp_cale_pane_g

0xcfe5,	// (0x00068ce7) list_single_fp_cale_pane_t1_ParamLimits

0xcfe5,	// (0x00068ce7) list_single_fp_cale_pane_t1

0xcff7,	// (0x00068cf9) list_single_fp_cale_pane_t2_ParamLimits

0xcff7,	// (0x00068cf9) list_single_fp_cale_pane_t2

0x0001,

0x06ae,	// (0x0005c3b0) list_single_fp_cale_pane_t_ParamLimits

0x06ae,	// (0x0005c3b0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x11c0,	// (0x0005cec2) main_dialer_pane

0x5694,	// (0x00061396) aid_cell_size_keypad

0x569e,	// (0x000613a0) dialer_ne_pane

0x56a8,	// (0x000613aa) grid_dialer_command_1_pane

0x56b0,	// (0x000613b2) grid_dialer_command_2_pane

0x56b8,	// (0x000613ba) grid_dialer_keypad_pane

0x56ca,	// (0x000613cc) bg_popup_call_pane_cp06_ParamLimits

0x56ca,	// (0x000613cc) bg_popup_call_pane_cp06

0x56d6,	// (0x000613d8) dialer_ne_clear_pane_ParamLimits

0x56d6,	// (0x000613d8) dialer_ne_clear_pane

0xd02a,	// (0x00068d2c) dialer_ne_pane_g1

0xd032,	// (0x00068d34) dialer_ne_pane_t1_ParamLimits

0xd032,	// (0x00068d34) dialer_ne_pane_t1

0x56e2,	// (0x000613e4) dialer_ne_pane_t2_ParamLimits

0x56e2,	// (0x000613e4) dialer_ne_pane_t2

0x56ff,	// (0x00061401) dialer_ne_pane_t3_ParamLimits

0x56ff,	// (0x00061401) dialer_ne_pane_t3

0x0002,

0xf66d,	// (0x0006b36f) dialer_ne_pane_t_ParamLimits

0xf66d,	// (0x0006b36f) dialer_ne_pane_t

0x5723,	// (0x00061425) dialer_ne_pane_t3_copy1_ParamLimits

0x5723,	// (0x00061425) dialer_ne_pane_t3_copy1

0x5747,	// (0x00061449) cell_dialer_keypad_pane_ParamLimits

0x5747,	// (0x00061449) cell_dialer_keypad_pane

0x575e,	// (0x00061460) cell_dialer_command_1_pane_ParamLimits

0x575e,	// (0x00061460) cell_dialer_command_1_pane

0x5774,	// (0x00061476) cell_dialer_command_2_pane_ParamLimits

0x5774,	// (0x00061476) cell_dialer_command_2_pane

0xd044,	// (0x00068d46) bg_button_pane_cp02_ParamLimits

0xd044,	// (0x00068d46) bg_button_pane_cp02

0x5783,	// (0x00061485) cell_dialer_keypad_pane_g1_ParamLimits

0x5783,	// (0x00061485) cell_dialer_keypad_pane_g1

0xd044,	// (0x00068d46) bg_button_pane_cp03_ParamLimits

0xd044,	// (0x00068d46) bg_button_pane_cp03

0x5798,	// (0x0006149a) cell_dialer_command_1_pane_g1_ParamLimits

0x5798,	// (0x0006149a) cell_dialer_command_1_pane_g1

0xd050,	// (0x00068d52) bg_button_pane_cp04

0x57ac,	// (0x000614ae) cell_dialer_command_2_pane_g1

0xa9d4,	// (0x000666d6) bg_button_pane_cp06

0xd058,	// (0x00068d5a) dialer_ne_clear_pane_g1

0xb324,	// (0x00067026) navi_pane_g2

0xb352,	// (0x00067054) navi_pane_g3

0x0002,

0x02db,	// (0x0005bfdd) navi_pane_g

0xb3e1,	// (0x000670e3) navi_pane_mv_g2

0xb408,	// (0x0006710a) navi_pane_mv_g5

0x3783,	// (0x0005f485) navi_pane_mv_t1

0xa80f,	// (0x00066511) main_clock2_pane

0x57ea,	// (0x000614ec) main_clock2_list_pane_ParamLimits

0x57ea,	// (0x000614ec) main_clock2_list_pane

0x5812,	// (0x00061514) main_clock2_pane_t1_ParamLimits

0x5812,	// (0x00061514) main_clock2_pane_t1

0x5834,	// (0x00061536) main_clock2_pane_t2_ParamLimits

0x5834,	// (0x00061536) main_clock2_pane_t2

0x0004,

0xf674,	// (0x0006b376) main_clock2_pane_t_ParamLimits

0xf674,	// (0x0006b376) main_clock2_pane_t

0x588f,	// (0x00061591) popup_clock_analogue_window_cp03_ParamLimits

0x588f,	// (0x00061591) popup_clock_analogue_window_cp03

0x58ad,	// (0x000615af) popup_clock_digital_window_cp02_ParamLimits

0x58ad,	// (0x000615af) popup_clock_digital_window_cp02

0x591a,	// (0x0006161c) main_clock2_list_single_pane_ParamLimits

0x591a,	// (0x0006161c) main_clock2_list_single_pane

0xa9d4,	// (0x000666d6) list_highlight_pane_cp05

0xd096,	// (0x00068d98) main_clock2_list_single_pane_t1

0x2226,	// (0x0005df28) popup_toolbar_window_cp04_ParamLimits

0x4ebe,	// (0x00060bc0) camera2_autofocus_pane_g2_ParamLimits

0x4ebe,	// (0x00060bc0) camera2_autofocus_pane_g2

0x4eca,	// (0x00060bcc) camera2_autofocus_pane_g3_ParamLimits

0x4eca,	// (0x00060bcc) camera2_autofocus_pane_g3

0x4ed6,	// (0x00060bd8) camera2_autofocus_pane_g4_ParamLimits

0x4ed6,	// (0x00060bd8) camera2_autofocus_pane_g4

0x4ee2,	// (0x00060be4) camera2_autofocus_pane_g5_ParamLimits

0x4ee2,	// (0x00060be4) camera2_autofocus_pane_g5

0x0004,

0xf5db,	// (0x0006b2dd) camera2_autofocus_pane_g_ParamLimits

0xf5db,	// (0x0006b2dd) camera2_autofocus_pane_g

0xcf1d,	// (0x00068c1f) camera2_autofocus_pane_cp_g2

0xcf25,	// (0x00068c27) camera2_autofocus_pane_cp_g3

0xcf2d,	// (0x00068c2f) camera2_autofocus_pane_cp_g4

0xcf35,	// (0x00068c37) camera2_autofocus_pane_cp_g5

0x0004,

0xf62f,	// (0x0006b331) camera2_autofocus_pane_cp_g

0x56c2,	// (0x000613c4) popup_dialer_spcha_window

0x9beb,	// (0x000658ed) bg_popup_sub_pane_cp07

0xd0a4,	// (0x00068da6) list_spcha_pane

0xd0ac,	// (0x00068dae) list_single_spcha_pane_ParamLimits

0xd0ac,	// (0x00068dae) list_single_spcha_pane

0x9beb,	// (0x000658ed) list_highlight_pane_cp06

0xd0bd,	// (0x00068dbf) list_single_spcha_pane_t1

0xc275,	// (0x00067f77) popup_call2_audio_out_window_g4_ParamLimits

0xc275,	// (0x00067f77) popup_call2_audio_out_window_g4

0x11c0,	// (0x0005cec2) main_imed2_pane

0x4562,	// (0x00060264) popup_imed_adjust2_window

0x4575,	// (0x00060277) popup_imed_trans_window_ParamLimits

0x4575,	// (0x00060277) popup_imed_trans_window

0xca7e,	// (0x00068780) popup_blid_sat_info2_window_t1

0xca8c,	// (0x0006878e) popup_blid_sat_info2_window_t2

0x000a,

0x0598,	// (0x0005c29a) popup_blid_sat_info2_window_t

0x59c4,	// (0x000616c6) aid_size_cell_colour_35

0x59de,	// (0x000616e0) aid_size_cell_colour_112

0x59f5,	// (0x000616f7) aid_size_cell_effect

0xa4be,	// (0x000661c0) bg_tb_trans_pane_cp02

0xaf43,	// (0x00066c45) heading_imed_pane

0x5a0f,	// (0x00061711) listscroll_imed_pane

0xd0cb,	// (0x00068dcd) heading_imed_pane_g1

0xd0d3,	// (0x00068dd5) heading_imed_pane_t1

0xd0e1,	// (0x00068de3) grid_imed_colour_35_pane_ParamLimits

0xd0e1,	// (0x00068de3) grid_imed_colour_35_pane

0x5a1b,	// (0x0006171d) grid_imed_effect_pane

0xd0f8,	// (0x00068dfa) list_imed_aspect_pane

0x5a2b,	// (0x0006172d) scroll_pane_cp027_ParamLimits

0x5a2b,	// (0x0006172d) scroll_pane_cp027

0x5a37,	// (0x00061739) cell_imed_effect_pane_ParamLimits

0x5a37,	// (0x00061739) cell_imed_effect_pane

0xd100,	// (0x00068e02) cell_imed_colour_pane_ParamLimits

0xd100,	// (0x00068e02) cell_imed_colour_pane

0xd142,	// (0x00068e44) cell_imed_colour_pane_g1_ParamLimits

0xd142,	// (0x00068e44) cell_imed_colour_pane_g1

0xd153,	// (0x00068e55) hgihlgiht_grid_pane_cp016_ParamLimits

0xd153,	// (0x00068e55) hgihlgiht_grid_pane_cp016

0x5a4f,	// (0x00061751) cell_imed_effect_pane_g1

0x5a57,	// (0x00061759) grid_highlight_pane_cp017

0xd164,	// (0x00068e66) list_imed_single_pane_ParamLimits

0xd164,	// (0x00068e66) list_imed_single_pane

0x9beb,	// (0x000658ed) list_highlight_pane_cp07

0xd179,	// (0x00068e7b) list_imed_aspect_pane_comp1_t1

0xc838,	// (0x0006853a) bg_tb_trans_pane_cp05

0xd19b,	// (0x00068e9d) popup_imed_adjust2_window_g1

0xd1c2,	// (0x00068ec4) popup_imed_adjust2_window_t1

0xd1da,	// (0x00068edc) slider_imed_adjust_pane

0xd1ee,	// (0x00068ef0) slider_imed_adjust_pane_g1

0xd1fe,	// (0x00068f00) slider_imed_adjust_pane_g2

0xd20e,	// (0x00068f10) slider_imed_adjust_pane_g3

0xd21f,	// (0x00068f21) slider_imed_adjust_pane_g4

0x0003,

0x06dc,	// (0x0005c3de) slider_imed_adjust_pane_g

0x5a60,	// (0x00061762) aid_size_cell_clipart2

0x5a6c,	// (0x0006176e) grid_imed_clipart_pane

0xd230,	// (0x00068f32) scroll_pane_cp031

0x5a76,	// (0x00061778) cell_imed_clipart_pane_ParamLimits

0x5a76,	// (0x00061778) cell_imed_clipart_pane

0x5a98,	// (0x0006179a) cell_imed_clipart_pane_g1

0x9beb,	// (0x000658ed) grid_highlight_pane_cp014

0x57f6,	// (0x000614f8) main_clock2_pane_g1_ParamLimits

0x57f6,	// (0x000614f8) main_clock2_pane_g1

0x58c5,	// (0x000615c7) aid_call2_pane_cp10

0x58d7,	// (0x000615d9) aid_call_pane_cp10

0xb285,	// (0x00066f87) popup_clock_analogue_window_cp10_g1

0xb285,	// (0x00066f87) popup_clock_analogue_window_cp10_g2

0x58e9,	// (0x000615eb) popup_clock_analogue_window_cp10_g3

0x58e9,	// (0x000615eb) popup_clock_analogue_window_cp10_g4

0xb285,	// (0x00066f87) popup_clock_analogue_window_cp10_g5

0x0004,

0xf67f,	// (0x0006b381) popup_clock_analogue_window_cp10_g

0x58fb,	// (0x000615fd) popup_clock_analogue_window_cp10_t1

0x592c,	// (0x0006162e) clock_digital_number_pane_cp10_ParamLimits

0x592c,	// (0x0006162e) clock_digital_number_pane_cp10

0x5944,	// (0x00061646) clock_digital_number_pane_cp11_ParamLimits

0x5944,	// (0x00061646) clock_digital_number_pane_cp11

0x595c,	// (0x0006165e) clock_digital_number_pane_cp12_ParamLimits

0x595c,	// (0x0006165e) clock_digital_number_pane_cp12

0x5974,	// (0x00061676) clock_digital_number_pane_cp13_ParamLimits

0x5974,	// (0x00061676) clock_digital_number_pane_cp13

0x598c,	// (0x0006168e) clock_digital_separator_pane_cp10_ParamLimits

0x598c,	// (0x0006168e) clock_digital_separator_pane_cp10

0x59a4,	// (0x000616a6) popup_clock_digital_window_cp02_t1_ParamLimits

0x59a4,	// (0x000616a6) popup_clock_digital_window_cp02_t1

0xa742,	// (0x00066444) clock_digital_number_pane_cp10_g1

0xa742,	// (0x00066444) clock_digital_number_pane_cp10_g2

0x0001,

0xf68a,	// (0x0006b38c) clock_digital_number_pane_cp10_g

0xa742,	// (0x00066444) clock_digital_separator_pane_cp10_g1

0xa742,	// (0x00066444) clock_digital_separator_pane_g2_cp10

0xb410,	// (0x00067112) navi_pane_vded_g4

0xb419,	// (0x0006711b) navi_pane_vded_g5

0xb422,	// (0x00067124) navi_pane_vded_t1

0x11c0,	// (0x0005cec2) main_vded_pane

0x5aa1,	// (0x000617a3) main_vded_pane_g1

0x5aad,	// (0x000617af) main_vded_pane_g2

0x5ab7,	// (0x000617b9) main_vded_pane_g3

0x0002,

0xf68f,	// (0x0006b391) main_vded_pane_g

0x5ac1,	// (0x000617c3) main_vded_pane_t1

0x5acf,	// (0x000617d1) main_vded_pane_t2

0x0001,

0xf696,	// (0x0006b398) main_vded_pane_t

0x5add,	// (0x000617df) vded_slider_pane

0x5ae7,	// (0x000617e9) vded_video_pane

0xd238,	// (0x00068f3a) vded_video_pane_g1

0x5af1,	// (0x000617f3) vded_video_pane_g2

0xcc49,	// (0x0006894b) vded_video_pane_g3

0x0002,

0xf69b,	// (0x0006b39d) vded_video_pane_g

0xd242,	// (0x00068f44) vded_slider_pane_g1

0xc993,	// (0x00068695) vded_slider_pane_g2

0xd24b,	// (0x00068f4d) vded_slider_pane_g3

0xd254,	// (0x00068f56) vded_slider_pane_g4

0xd25d,	// (0x00068f5f) vded_slider_pane_g5

0x0004,

0x06fd,	// (0x0005c3ff) vded_slider_pane_g

0x55c6,	// (0x000612c8) mup3_rocker_pane_ParamLimits

0x55c6,	// (0x000612c8) mup3_rocker_pane

0x5afa,	// (0x000617fc) mup3_control_keys_pane_g1

0x5b02,	// (0x00061804) mup3_control_keys_pane_g2

0x5b0a,	// (0x0006180c) mup3_control_keys_pane_g3

0x5b12,	// (0x00061814) mup3_control_keys_pane_g4

0x0003,

0xf6a2,	// (0x0006b3a4) mup3_control_keys_pane_g

0x1174,	// (0x0005ce76) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1174,	// (0x0005ce76) popup_toolbar2_fixed_window_cp01

0x55e0,	// (0x000612e2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x55e0,	// (0x000612e2) popup_toolbar2_fixed_window_cp02

0xbbb4,	// (0x000678b6) popup_call2_audio_second_window_t4_ParamLimits

0xbbb4,	// (0x000678b6) popup_call2_audio_second_window_t4

0xc0e2,	// (0x00067de4) popup_call2_audio_first_window_t6_ParamLimits

0xc0e2,	// (0x00067de4) popup_call2_audio_first_window_t6

0xc378,	// (0x0006807a) popup_call2_audio_out_window_t6_ParamLimits

0xc378,	// (0x0006807a) popup_call2_audio_out_window_t6

0x11c0,	// (0x0005cec2) main_vitu_pane

0x5b22,	// (0x00061824) aid_size_cell_itu_ParamLimits

0x5b22,	// (0x00061824) aid_size_cell_itu

0xda26,	// (0x00069728) bg_popup_window_pane_cp08_ParamLimits

0xda26,	// (0x00069728) bg_popup_window_pane_cp08

0x5b30,	// (0x00061832) field_vitu_entry_pane_ParamLimits

0x5b30,	// (0x00061832) field_vitu_entry_pane

0x5b3f,	// (0x00061841) grid_vitu_function_pane_ParamLimits

0x5b3f,	// (0x00061841) grid_vitu_function_pane

0x5b4f,	// (0x00061851) grid_vitu_itu_pane_ParamLimits

0x5b4f,	// (0x00061851) grid_vitu_itu_pane

0x5b5f,	// (0x00061861) cell_vitu_itu_pane_ParamLimits

0x5b5f,	// (0x00061861) cell_vitu_itu_pane

0x5b74,	// (0x00061876) cell_vitu_function_pane_ParamLimits

0x5b74,	// (0x00061876) cell_vitu_function_pane

0xa4be,	// (0x000661c0) bg_popup_sub_pane_cp08_ParamLimits

0xa4be,	// (0x000661c0) bg_popup_sub_pane_cp08

0x5b86,	// (0x00061888) field_vitu_entry_pane_t1_ParamLimits

0x5b86,	// (0x00061888) field_vitu_entry_pane_t1

0xd27e,	// (0x00068f80) field_vitu_entry_pane_t2_ParamLimits

0xd27e,	// (0x00068f80) field_vitu_entry_pane_t2

0x0001,

0xf6ab,	// (0x0006b3ad) field_vitu_entry_pane_t_ParamLimits

0xf6ab,	// (0x0006b3ad) field_vitu_entry_pane_t

0xd29b,	// (0x00068f9d) bg_button_pane_cp05_ParamLimits

0xd29b,	// (0x00068f9d) bg_button_pane_cp05

0x5ba2,	// (0x000618a4) cell_vitu_itu_pane_g1

0x5bba,	// (0x000618bc) cell_vitu_itu_pane_t1_ParamLimits

0x5bba,	// (0x000618bc) cell_vitu_itu_pane_t1

0x5bcc,	// (0x000618ce) cell_vitu_itu_pane_t2_ParamLimits

0x5bcc,	// (0x000618ce) cell_vitu_itu_pane_t2

0x0002,

0xf6b0,	// (0x0006b3b2) cell_vitu_itu_pane_t_ParamLimits

0xf6b0,	// (0x0006b3b2) cell_vitu_itu_pane_t

0xd2a9,	// (0x00068fab) bg_button_pane_cp07

0x5c01,	// (0x00061903) cell_vitu_function_pane_g1

0x1452,	// (0x0005d154) main_calc_pane_g1

0x0f31,	// (0x0005cc33) aid_visual_content_pane

0x11c0,	// (0x0005cec2) main_vradio_pane

0x5c0a,	// (0x0006190c) main_vradio_pane_g1_ParamLimits

0x5c0a,	// (0x0006190c) main_vradio_pane_g1

0xd2b3,	// (0x00068fb5) main_vradio_pane_g2_ParamLimits

0xd2b3,	// (0x00068fb5) main_vradio_pane_g2

0x0001,

0xf6b7,	// (0x0006b3b9) main_vradio_pane_g_ParamLimits

0xf6b7,	// (0x0006b3b9) main_vradio_pane_g

0x5c1a,	// (0x0006191c) main_vradio_pane_t1_ParamLimits

0x5c1a,	// (0x0006191c) main_vradio_pane_t1

0x5c2c,	// (0x0006192e) main_vradio_pane_t2_ParamLimits

0x5c2c,	// (0x0006192e) main_vradio_pane_t2

0xd2c0,	// (0x00068fc2) main_vradio_pane_t3_ParamLimits

0xd2c0,	// (0x00068fc2) main_vradio_pane_t3

0x0002,

0xf6bc,	// (0x0006b3be) main_vradio_pane_t_ParamLimits

0xf6bc,	// (0x0006b3be) main_vradio_pane_t

0x5c3e,	// (0x00061940) vradio_rocker_control_pane_ParamLimits

0x5c3e,	// (0x00061940) vradio_rocker_control_pane

0x5c4a,	// (0x0006194c) vradio_station_info_pane_ParamLimits

0x5c4a,	// (0x0006194c) vradio_station_info_pane

0xd2d4,	// (0x00068fd6) vradio_frequency_info_pane_ParamLimits

0xd2d4,	// (0x00068fd6) vradio_frequency_info_pane

0xcc49,	// (0x0006894b) vradio_station_info_pane_g1

0xd2e3,	// (0x00068fe5) vradio_station_info_pane_t1_ParamLimits

0xd2e3,	// (0x00068fe5) vradio_station_info_pane_t1

0xd305,	// (0x00069007) vradio_station_info_pane_t2_ParamLimits

0xd305,	// (0x00069007) vradio_station_info_pane_t2

0x0001,

0x072e,	// (0x0005c430) vradio_station_info_pane_t_ParamLimits

0x072e,	// (0x0005c430) vradio_station_info_pane_t

0xd317,	// (0x00069019) vradio_tuning_pane

0xd31f,	// (0x00069021) vradio_rocker_control_pane_g1

0xd327,	// (0x00069029) vradio_rocker_control_pane_g2

0xd32f,	// (0x00069031) vradio_rocker_control_pane_g3

0xd337,	// (0x00069039) vradio_rocker_control_pane_g4

0xd33f,	// (0x00069041) vradio_rocker_control_pane_g5

0x0004,

0x0733,	// (0x0005c435) vradio_rocker_control_pane_g

0x5c59,	// (0x0006195b) vradio_frequency_info_pane_g1

0xd347,	// (0x00069049) vradio_frequency_info_pane_t1_ParamLimits

0xd347,	// (0x00069049) vradio_frequency_info_pane_t1

0x5c63,	// (0x00061965) vradio_tuning_pane_g1

0x5c6c,	// (0x0006196e) vradio_tuning_pane_t1

0x0f7a,	// (0x0005cc7c) area_side_right_pane_ParamLimits

0x0f7a,	// (0x0005cc7c) area_side_right_pane

0xc7f3,	// (0x000684f5) status_small_pane_g1

0xc7fb,	// (0x000684fd) status_small_pane_g2

0xc804,	// (0x00068506) status_small_pane_g3

0xc80d,	// (0x0006850f) status_small_pane_g4

0x0003,

0x04ee,	// (0x0005c1f0) status_small_pane_g

0xc816,	// (0x00068518) status_small_pane_t1

0x11c0,	// (0x0005cec2) main_video3_pane

0xd35b,	// (0x0006905d) cams_zoom_vslider_pane

0xd363,	// (0x00069065) image3_wide_pane_ParamLimits

0xd363,	// (0x00069065) image3_wide_pane

0xd37d,	// (0x0006907f) image3_wide_small_pane

0xd389,	// (0x0006908b) main_video3_pane_g1_ParamLimits

0xd389,	// (0x0006908b) main_video3_pane_g1

0xd3a5,	// (0x000690a7) main_video3_pane_g2_ParamLimits

0xd3a5,	// (0x000690a7) main_video3_pane_g2

0x0001,

0x073e,	// (0x0005c440) main_video3_pane_g_ParamLimits

0x073e,	// (0x0005c440) main_video3_pane_g

0xd3c1,	// (0x000690c3) main_video3_pane_t1_ParamLimits

0xd3c1,	// (0x000690c3) main_video3_pane_t1

0xd3ec,	// (0x000690ee) main_video3_pane_t2_ParamLimits

0xd3ec,	// (0x000690ee) main_video3_pane_t2

0xd417,	// (0x00069119) main_video3_pane_t3_ParamLimits

0xd417,	// (0x00069119) main_video3_pane_t3

0x0002,

0x0743,	// (0x0005c445) main_video3_pane_t_ParamLimits

0x0743,	// (0x0005c445) main_video3_pane_t

0xd444,	// (0x00069146) cams_zoom_vslider_pane_g1

0xd44d,	// (0x0006914f) cams_zoom_vslider_pane_g2

0x0001,

0x074a,	// (0x0005c44c) cams_zoom_vslider_pane_g

0xd455,	// (0x00069157) small_slider_vertical_pane

0xcc49,	// (0x0006894b) small_slider_vertical_pane_g1

0xcc49,	// (0x0006894b) small_slider_vertical_pane_g2

0xd45d,	// (0x0006915f) small_slider_vertical_pane_g3

0x0002,

0xf6c3,	// (0x0006b3c5) small_slider_vertical_pane_g

0x11c0,	// (0x0005cec2) main_hwr_training_pane

0xd466,	// (0x00069168) hwr_training_instruct_pane_ParamLimits

0xd466,	// (0x00069168) hwr_training_instruct_pane

0x5c7b,	// (0x0006197d) hwr_training_navi_pane_ParamLimits

0x5c7b,	// (0x0006197d) hwr_training_navi_pane

0x5c95,	// (0x00061997) hwr_training_write_pane_ParamLimits

0x5c95,	// (0x00061997) hwr_training_write_pane

0x9beb,	// (0x000658ed) bg_frame_shadow_pane

0xd49d,	// (0x0006919f) hwr_training_write_pane_g1

0xd4a5,	// (0x000691a7) hwr_training_write_pane_g2

0xd4ad,	// (0x000691af) hwr_training_write_pane_g3

0xd4b5,	// (0x000691b7) hwr_training_write_pane_g4

0xd4bd,	// (0x000691bf) hwr_training_write_pane_g5

0xd4c5,	// (0x000691c7) hwr_training_write_pane_g6

0xd4cd,	// (0x000691cf) hwr_training_write_pane_g7

0x0006,

0x0756,	// (0x0005c458) hwr_training_write_pane_g

0x5ccd,	// (0x000619cf) hwr_training_navi_pane_g1_ParamLimits

0x5ccd,	// (0x000619cf) hwr_training_navi_pane_g1

0x5cdf,	// (0x000619e1) hwr_training_navi_pane_g2_ParamLimits

0x5cdf,	// (0x000619e1) hwr_training_navi_pane_g2

0x5cf1,	// (0x000619f3) hwr_training_navi_pane_g3_ParamLimits

0x5cf1,	// (0x000619f3) hwr_training_navi_pane_g3

0x5d01,	// (0x00061a03) hwr_training_navi_pane_g4_ParamLimits

0x5d01,	// (0x00061a03) hwr_training_navi_pane_g4

0x0004,

0xf6ca,	// (0x0006b3cc) hwr_training_navi_pane_g_ParamLimits

0xf6ca,	// (0x0006b3cc) hwr_training_navi_pane_g

0x5d1b,	// (0x00061a1d) hwr_training_navi_pane_t1

0x5d29,	// (0x00061a2b) list_single_hwr_training_instruct_pane_ParamLimits

0x5d29,	// (0x00061a2b) list_single_hwr_training_instruct_pane

0xd4d5,	// (0x000691d7) list_single_hwr_training_instruct_pane_t1

0xcb80,	// (0x00068882) bg_frame_shadow_pane_g1

0xd4e4,	// (0x000691e6) bg_frame_shadow_pane_g2

0xd4ec,	// (0x000691ee) bg_frame_shadow_pane_g3

0xd4f4,	// (0x000691f6) bg_frame_shadow_pane_g4

0xd4fc,	// (0x000691fe) bg_frame_shadow_pane_g5

0xd504,	// (0x00069206) bg_frame_shadow_pane_g6

0xd50c,	// (0x0006920e) bg_frame_shadow_pane_g7

0xa8c8,	// (0x000665ca) bg_frame_shadow_pane_g8

0x0007,

0xf6d5,	// (0x0006b3d7) bg_frame_shadow_pane_g

0x11c0,	// (0x0005cec2) main_video_tele_dialer_pane

0x5d4e,	// (0x00061a50) aid_size_cell_video_keypad_ParamLimits

0x5d4e,	// (0x00061a50) aid_size_cell_video_keypad

0x5d5e,	// (0x00061a60) grid_video_dialer_keypad_pane_ParamLimits

0x5d5e,	// (0x00061a60) grid_video_dialer_keypad_pane

0x5d92,	// (0x00061a94) video_down_pane_cp_ParamLimits

0x5d92,	// (0x00061a94) video_down_pane_cp

0x5dbc,	// (0x00061abe) cell_video_dialer_keypad_pane_ParamLimits

0x5dbc,	// (0x00061abe) cell_video_dialer_keypad_pane

0xd514,	// (0x00069216) bg_button_pane_cp08_ParamLimits

0xd514,	// (0x00069216) bg_button_pane_cp08

0x5dd1,	// (0x00061ad3) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5dd1,	// (0x00061ad3) cell_video_dialer_keypad_pane_g1

0x55ba,	// (0x000612bc) mup3_rocker2_pane_ParamLimits

0x55ba,	// (0x000612bc) mup3_rocker2_pane

0xcc49,	// (0x0006894b) mup3_rocker2_pane_g1

0x44d2,	// (0x000601d4) main_dialer2_pane

0x11c0,	// (0x0005cec2) main_mp4_pane

0x5e10,	// (0x00061b12) main_mp4_pane_g1_ParamLimits

0x5e10,	// (0x00061b12) main_mp4_pane_g1

0x5e1e,	// (0x00061b20) main_mp4_pane_g2_ParamLimits

0x5e1e,	// (0x00061b20) main_mp4_pane_g2

0x5e2c,	// (0x00061b2e) main_mp4_pane_g3_ParamLimits

0x5e2c,	// (0x00061b2e) main_mp4_pane_g3

0x5e71,	// (0x00061b73) main_mp4_pane_g4_ParamLimits

0x5e71,	// (0x00061b73) main_mp4_pane_g4

0x5e99,	// (0x00061b9b) main_mp4_pane_g5_ParamLimits

0x5e99,	// (0x00061b9b) main_mp4_pane_g5

0x0005,

0xf6f5,	// (0x0006b3f7) main_mp4_pane_g_ParamLimits

0xf6f5,	// (0x0006b3f7) main_mp4_pane_g

0x5ee9,	// (0x00061beb) main_mp4_pane_t1_ParamLimits

0x5ee9,	// (0x00061beb) main_mp4_pane_t1

0x5f45,	// (0x00061c47) main_mp4_pane_t2_ParamLimits

0x5f45,	// (0x00061c47) main_mp4_pane_t2

0xd520,	// (0x00069222) main_mp4_pane_t3_ParamLimits

0xd520,	// (0x00069222) main_mp4_pane_t3

0x5f97,	// (0x00061c99) main_mp4_pane_t4_ParamLimits

0x5f97,	// (0x00061c99) main_mp4_pane_t4

0x0003,

0xf702,	// (0x0006b404) main_mp4_pane_t_ParamLimits

0xf702,	// (0x0006b404) main_mp4_pane_t

0x5fdb,	// (0x00061cdd) mp4_progress_pane_ParamLimits

0x5fdb,	// (0x00061cdd) mp4_progress_pane

0x6025,	// (0x00061d27) mp4_rocker_pane_ParamLimits

0x6025,	// (0x00061d27) mp4_rocker_pane

0xd548,	// (0x0006924a) mp4_progress_pane_t1

0xd561,	// (0x00069263) mp4_progress_pane_t2

0x0001,

0x07a6,	// (0x0005c4a8) mp4_progress_pane_t

0xd57a,	// (0x0006927c) mup_progress_pane_cp04

0xdcf8,	// (0x000699fa) mp4_rocker_pane_g1

0x6045,	// (0x00061d47) aid_cell_size_keypad2_ParamLimits

0x6045,	// (0x00061d47) aid_cell_size_keypad2

0x6055,	// (0x00061d57) dialer2_ne_pane_ParamLimits

0x6055,	// (0x00061d57) dialer2_ne_pane

0x6063,	// (0x00061d65) grid_dialer2_keypad_pane_ParamLimits

0x6063,	// (0x00061d65) grid_dialer2_keypad_pane

0xd9e0,	// (0x000696e2) bg_popup_call_pane_cp07_ParamLimits

0xd9e0,	// (0x000696e2) bg_popup_call_pane_cp07

0x6073,	// (0x00061d75) dialer2_ne_pane_t1_ParamLimits

0x6073,	// (0x00061d75) dialer2_ne_pane_t1

0x6098,	// (0x00061d9a) cell_dialer2_keypad_pane_ParamLimits

0x6098,	// (0x00061d9a) cell_dialer2_keypad_pane

0xd598,	// (0x0006929a) bg_button_pane_pane_cp04_ParamLimits

0xd598,	// (0x0006929a) bg_button_pane_pane_cp04

0x60ad,	// (0x00061daf) cell_dialer2_keypad_pane_g1_ParamLimits

0x60ad,	// (0x00061daf) cell_dialer2_keypad_pane_g1

0x20e8,	// (0x0005ddea) aid_placing_vt_set_content_ParamLimits

0x20e8,	// (0x0005ddea) aid_placing_vt_set_content

0x2114,	// (0x0005de16) aid_placing_vt_set_title_ParamLimits

0x2114,	// (0x0005de16) aid_placing_vt_set_title

0x11c0,	// (0x0005cec2) main_image3_pane

0x6147,	// (0x00061e49) area_side_right_pane_cp01_ParamLimits

0x6147,	// (0x00061e49) area_side_right_pane_cp01

0x6174,	// (0x00061e76) main_image3_pane_g1_ParamLimits

0x6174,	// (0x00061e76) main_image3_pane_g1

0x6182,	// (0x00061e84) main_image3_pane_g2_ParamLimits

0x6182,	// (0x00061e84) main_image3_pane_g2

0x619b,	// (0x00061e9d) main_image3_pane_g3_ParamLimits

0x619b,	// (0x00061e9d) main_image3_pane_g3

0x61b4,	// (0x00061eb6) main_image3_pane_g4_ParamLimits

0x61b4,	// (0x00061eb6) main_image3_pane_g4

0x0003,

0xf715,	// (0x0006b417) main_image3_pane_g_ParamLimits

0xf715,	// (0x0006b417) main_image3_pane_g

0x61cd,	// (0x00061ecf) main_image3_pane_t1_ParamLimits

0x61cd,	// (0x00061ecf) main_image3_pane_t1

0x61f2,	// (0x00061ef4) main_image3_pane_t2_ParamLimits

0x61f2,	// (0x00061ef4) main_image3_pane_t2

0x6211,	// (0x00061f13) main_image3_pane_t3_ParamLimits

0x6211,	// (0x00061f13) main_image3_pane_t3

0x0003,

0xf71e,	// (0x0006b420) main_image3_pane_t_ParamLimits

0xf71e,	// (0x0006b420) main_image3_pane_t

0xda26,	// (0x00069728) grid_sctrl_middle_pane_cp01_ParamLimits

0xda26,	// (0x00069728) grid_sctrl_middle_pane_cp01

0x6272,	// (0x00061f74) cell_sctrl_middle_pane_cp01_ParamLimits

0x6272,	// (0x00061f74) cell_sctrl_middle_pane_cp01

0x6283,	// (0x00061f85) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6283,	// (0x00061f85) cell_sctrl_middle_pane_cp01_g1

0x11c0,	// (0x0005cec2) main_call4_pane

0x6290,	// (0x00061f92) aid_size_button_call4_ParamLimits

0x6290,	// (0x00061f92) aid_size_button_call4

0x62c0,	// (0x00061fc2) call4_windows_pane_ParamLimits

0x62c0,	// (0x00061fc2) call4_windows_pane

0x62da,	// (0x00061fdc) grid_call4_button_pane_ParamLimits

0x62da,	// (0x00061fdc) grid_call4_button_pane

0xd5a4,	// (0x000692a6) call4_windows_conf_pane

0xd5bb,	// (0x000692bd) popup_call4_audio_first_window_ParamLimits

0xd5bb,	// (0x000692bd) popup_call4_audio_first_window

0xd607,	// (0x00069309) popup_call4_audio_second_window_ParamLimits

0xd607,	// (0x00069309) popup_call4_audio_second_window

0xd61b,	// (0x0006931d) popup_call4_audio_wait_window_ParamLimits

0xd61b,	// (0x0006931d) popup_call4_audio_wait_window

0x62fe,	// (0x00062000) cell_call4_button_pane_ParamLimits

0x62fe,	// (0x00062000) cell_call4_button_pane

0x6323,	// (0x00062025) bg_button_pane_cp09_ParamLimits

0x6323,	// (0x00062025) bg_button_pane_cp09

0x632f,	// (0x00062031) cell_call4_button_pane_g1_ParamLimits

0x632f,	// (0x00062031) cell_call4_button_pane_g1

0x633c,	// (0x0006203e) cell_call4_button_pane_t1_ParamLimits

0x633c,	// (0x0006203e) cell_call4_button_pane_t1

0xd663,	// (0x00069365) popup_call4_audio_conf_window_ParamLimits

0xd663,	// (0x00069365) popup_call4_audio_conf_window

0x55ed,	// (0x000612ef) mup3_progress_pane_t1_ParamLimits

0x560c,	// (0x0006130e) mup3_progress_pane_t2_ParamLimits

0xcf53,	// (0x00068c55) mup3_progress_pane_t3_ParamLimits

0xf658,	// (0x0006b35a) mup3_progress_pane_t_ParamLimits

0xcf70,	// (0x00068c72) mup_progress_pane_cp03_ParamLimits

0x5b1a,	// (0x0006181c) mup3_control_keys_pane_g4_copy1

0x6009,	// (0x00061d0b) mp4_rocker2_pane_ParamLimits

0x6009,	// (0x00061d0b) mp4_rocker2_pane

0xd677,	// (0x00069379) mp4_rocker2_pane_g1

0xd67f,	// (0x00069381) mp4_rocker2_pane_g2

0x634e,	// (0x00062050) mp4_rocker2_pane_g3

0x6356,	// (0x00062058) mp4_rocker2_pane_g4

0x635e,	// (0x00062060) mp4_rocker2_pane_g5

0x0004,

0xf727,	// (0x0006b429) mp4_rocker2_pane_g

0x11c0,	// (0x0005cec2) main_camera4_pane

0x11c0,	// (0x0005cec2) main_video4_pane

0x5d6e,	// (0x00061a70) main_video_tele_dialer_pane_t1_ParamLimits

0x5d6e,	// (0x00061a70) main_video_tele_dialer_pane_t1

0x5d80,	// (0x00061a82) main_video_tele_dialer_pane_t2_ParamLimits

0x5d80,	// (0x00061a82) main_video_tele_dialer_pane_t2

0x0001,

0xf6e6,	// (0x0006b3e8) main_video_tele_dialer_pane_t_ParamLimits

0xf6e6,	// (0x0006b3e8) main_video_tele_dialer_pane_t

0x637e,	// (0x00062080) cam4_autofocus_pane_ParamLimits

0x637e,	// (0x00062080) cam4_autofocus_pane

0x6398,	// (0x0006209a) cam4_image_uncrop_pane_ParamLimits

0x6398,	// (0x0006209a) cam4_image_uncrop_pane

0x63af,	// (0x000620b1) cam4_indicators_pane_ParamLimits

0x63af,	// (0x000620b1) cam4_indicators_pane

0x63cb,	// (0x000620cd) main_camera4_pane_g1_ParamLimits

0x63cb,	// (0x000620cd) main_camera4_pane_g1

0x63d7,	// (0x000620d9) main_camera4_pane_g2_ParamLimits

0x63d7,	// (0x000620d9) main_camera4_pane_g2

0x63d7,	// (0x000620d9) main_camera4_pane_g3_ParamLimits

0x63d7,	// (0x000620d9) main_camera4_pane_g3

0x63e3,	// (0x000620e5) main_camera4_pane_g4_ParamLimits

0x63e3,	// (0x000620e5) main_camera4_pane_g4

0x63ef,	// (0x000620f1) main_camera4_pane_g5_ParamLimits

0x63ef,	// (0x000620f1) main_camera4_pane_g5

0x0005,

0xf732,	// (0x0006b434) main_camera4_pane_g_ParamLimits

0xf732,	// (0x0006b434) main_camera4_pane_g

0x6409,	// (0x0006210b) main_camera4_pane_t1_ParamLimits

0x6409,	// (0x0006210b) main_camera4_pane_t1

0x6451,	// (0x00062153) bg_tb_trans_pane_cp06

0x6467,	// (0x00062169) cam4_indicators_pane_g1

0x6478,	// (0x0006217a) cam4_indicators_pane_g2

0x0002,

0xf74d,	// (0x0006b44f) cam4_indicators_pane_g

0x6496,	// (0x00062198) cam4_indicators_pane_t1

0x64c0,	// (0x000621c2) main_video4_pane_g1_ParamLimits

0x64c0,	// (0x000621c2) main_video4_pane_g1

0x64cc,	// (0x000621ce) main_video4_pane_g2_ParamLimits

0x64cc,	// (0x000621ce) main_video4_pane_g2

0x64d8,	// (0x000621da) main_video4_pane_g3_ParamLimits

0x64d8,	// (0x000621da) main_video4_pane_g3

0x64e4,	// (0x000621e6) main_video4_pane_g4_ParamLimits

0x64e4,	// (0x000621e6) main_video4_pane_g4

0x0004,

0xf754,	// (0x0006b456) main_video4_pane_g_ParamLimits

0xf754,	// (0x0006b456) main_video4_pane_g

0x6504,	// (0x00062206) vid4_indicators_pane_ParamLimits

0x6504,	// (0x00062206) vid4_indicators_pane

0x6523,	// (0x00062225) video4_image_uncrop_cif_pane_ParamLimits

0x6523,	// (0x00062225) video4_image_uncrop_cif_pane

0x6532,	// (0x00062234) video4_image_uncrop_nhd_pane_ParamLimits

0x6532,	// (0x00062234) video4_image_uncrop_nhd_pane

0x6398,	// (0x0006209a) video4_image_uncrop_vga_pane_ParamLimits

0x6398,	// (0x0006209a) video4_image_uncrop_vga_pane

0x44c4,	// (0x000601c6) bg_tb_trans_pane_cp07

0x6549,	// (0x0006224b) vid4_indicators_pane_g1

0x655d,	// (0x0006225f) vid4_indicators_pane_g2

0x6571,	// (0x00062273) vid4_indicators_pane_g3

0x0004,

0xf75f,	// (0x0006b461) vid4_indicators_pane_g

0x65a0,	// (0x000622a2) vid4_indicators_pane_t1

0x65b7,	// (0x000622b9) cam4_autofocus_pane_g1

0x65bf,	// (0x000622c1) cam4_autofocus_pane_g2

0x65c7,	// (0x000622c9) cam4_autofocus_pane_g3

0x0002,

0xf76a,	// (0x0006b46c) cam4_autofocus_pane_g

0x65cf,	// (0x000622d1) cam4_autofocus_pane_g3_copy1

0x5da0,	// (0x00061aa2) video_down_pane_cp_t1

0x5dae,	// (0x00061ab0) video_down_pane_cp_t2

0x0001,

0xf6eb,	// (0x0006b3ed) video_down_pane_cp_t

0x11a6,	// (0x0005cea8) popup_vitu2_window_ParamLimits

0x11a6,	// (0x0005cea8) popup_vitu2_window

0x65d7,	// (0x000622d9) aid_size_cell2_itu2_ParamLimits

0x65d7,	// (0x000622d9) aid_size_cell2_itu2

0x65f9,	// (0x000622fb) aid_size_cell_itu2_ParamLimits

0x65f9,	// (0x000622fb) aid_size_cell_itu2

0x663d,	// (0x0006233f) bg_popup_window_pane_cp09_ParamLimits

0x663d,	// (0x0006233f) bg_popup_window_pane_cp09

0x664b,	// (0x0006234d) field_vitu2_entry_pane_ParamLimits

0x664b,	// (0x0006234d) field_vitu2_entry_pane

0x666b,	// (0x0006236d) grid_vitu2_function_pane_ParamLimits

0x666b,	// (0x0006236d) grid_vitu2_function_pane

0x66af,	// (0x000623b1) grid_vitu2_itu_pane_ParamLimits

0x66af,	// (0x000623b1) grid_vitu2_itu_pane

0x672b,	// (0x0006242d) cell_vitu2_itu_pane_ParamLimits

0x672b,	// (0x0006242d) cell_vitu2_itu_pane

0x6744,	// (0x00062446) cell_vitu2_function_pane_ParamLimits

0x6744,	// (0x00062446) cell_vitu2_function_pane

0xd687,	// (0x00069389) bg_popup_call_pane_cp08_ParamLimits

0xd687,	// (0x00069389) bg_popup_call_pane_cp08

0xd69e,	// (0x000693a0) field_vitu2_entry_pane_g1

0xd6aa,	// (0x000693ac) field_vitu2_entry_pane_g2

0x0002,

0x0811,	// (0x0005c513) field_vitu2_entry_pane_g

0x6785,	// (0x00062487) field_vitu2_entry_pane_t1_ParamLimits

0x6785,	// (0x00062487) field_vitu2_entry_pane_t1

0xa05f,	// (0x00065d61) field_vitu2_entry_pane_t2_ParamLimits

0xa05f,	// (0x00065d61) field_vitu2_entry_pane_t2

0x0001,

0xf771,	// (0x0006b473) field_vitu2_entry_pane_t_ParamLimits

0xf771,	// (0x0006b473) field_vitu2_entry_pane_t

0x67b7,	// (0x000624b9) bg_button_pane_cp010_ParamLimits

0x67b7,	// (0x000624b9) bg_button_pane_cp010

0x67c5,	// (0x000624c7) cell_vitu2_itu_pane_g1

0x67e5,	// (0x000624e7) cell_vitu2_itu_pane_t1_ParamLimits

0x67e5,	// (0x000624e7) cell_vitu2_itu_pane_t1

0x0e15,	// (0x0005cb17) cell_vitu2_itu_pane_t2_ParamLimits

0x0e15,	// (0x0005cb17) cell_vitu2_itu_pane_t2

0x0002,

0xf77b,	// (0x0006b47d) cell_vitu2_itu_pane_t_ParamLimits

0xf77b,	// (0x0006b47d) cell_vitu2_itu_pane_t

0x44c4,	// (0x000601c6) bg_button_pane_cp011

0x6831,	// (0x00062533) cell_vitu2_function_pane_g1

0x11c0,	// (0x0005cec2) main_myfav_hc_pane

0x6253,	// (0x00061f55) popup_image3_note_pane_ParamLimits

0x6253,	// (0x00061f55) popup_image3_note_pane

0x6261,	// (0x00061f63) popup_image3_tool_bar_pane_ParamLimits

0x6261,	// (0x00061f63) popup_image3_tool_bar_pane

0x0e8b,	// (0x0005cb8d) cell_vitu2_itu_pane_t3_ParamLimits

0x0e8b,	// (0x0005cb8d) cell_vitu2_itu_pane_t3

0x9beb,	// (0x000658ed) bg_popup_trans_pane

0xd6cc,	// (0x000693ce) grid_image3_tool_bar_pane

0xd6d6,	// (0x000693d8) bg_popup_trans_pane_g1

0xac2d,	// (0x0006692f) bg_popup_trans_pane_g2

0xd6de,	// (0x000693e0) bg_popup_trans_pane_g3

0xd6e6,	// (0x000693e8) bg_popup_trans_pane_g4

0xd6ee,	// (0x000693f0) bg_popup_trans_pane_g5

0xd6f6,	// (0x000693f8) bg_popup_trans_pane_g6

0xd6fe,	// (0x00069400) bg_popup_trans_pane_g7

0xd706,	// (0x00069408) bg_popup_trans_pane_g8

0xac0d,	// (0x0006690f) bg_popup_trans_pane_g9

0x0008,

0xf782,	// (0x0006b484) bg_popup_trans_pane_g

0xd70e,	// (0x00069410) cell_image3_tool_bar_pane_ParamLimits

0xd70e,	// (0x00069410) cell_image3_tool_bar_pane

0xcc49,	// (0x0006894b) cell_image3_tool_bar_pane_g1

0x9beb,	// (0x000658ed) bg_popup_trans_pane_cp1

0xd722,	// (0x00069424) popup_image3_note_pane_t1

0xd730,	// (0x00069432) popup_image3_note_pane_t2

0xd73e,	// (0x00069440) popup_image3_note_pane_t3

0x0002,

0x083c,	// (0x0005c53e) popup_image3_note_pane_t

0xd74c,	// (0x0006944e) popup_image3_note_pane_t3_copy1

0x6845,	// (0x00062547) bg_myfav_hc_instruction_pane_ParamLimits

0x6845,	// (0x00062547) bg_myfav_hc_instruction_pane

0x685d,	// (0x0006255f) cell_myfav_contact_pane_ParamLimits

0x685d,	// (0x0006255f) cell_myfav_contact_pane

0x6877,	// (0x00062579) cell_myfav_contact_pane_cp1_ParamLimits

0x6877,	// (0x00062579) cell_myfav_contact_pane_cp1

0x688f,	// (0x00062591) cell_myfav_contact_pane_cp2_ParamLimits

0x688f,	// (0x00062591) cell_myfav_contact_pane_cp2

0x68a7,	// (0x000625a9) cell_myfav_contact_pane_cp3_ParamLimits

0x68a7,	// (0x000625a9) cell_myfav_contact_pane_cp3

0x68be,	// (0x000625c0) cell_myfav_contact_pane_cp4_ParamLimits

0x68be,	// (0x000625c0) cell_myfav_contact_pane_cp4

0x68d4,	// (0x000625d6) cell_myfav_contact_pane_cp5_ParamLimits

0x68d4,	// (0x000625d6) cell_myfav_contact_pane_cp5

0x68e8,	// (0x000625ea) cell_myfav_contact_pane_cp6_ParamLimits

0x68e8,	// (0x000625ea) cell_myfav_contact_pane_cp6

0x68fc,	// (0x000625fe) cell_myfav_contact_pane_cp7_ParamLimits

0x68fc,	// (0x000625fe) cell_myfav_contact_pane_cp7

0xd75a,	// (0x0006945c) listscroll_gen_pane_cp05

0x6914,	// (0x00062616) main_myfav_hc_pane_g1_ParamLimits

0x6914,	// (0x00062616) main_myfav_hc_pane_g1

0x692a,	// (0x0006262c) main_myfav_hc_pane_g2_ParamLimits

0x692a,	// (0x0006262c) main_myfav_hc_pane_g2

0x0002,

0xf795,	// (0x0006b497) main_myfav_hc_pane_g_ParamLimits

0xf795,	// (0x0006b497) main_myfav_hc_pane_g

0x6958,	// (0x0006265a) main_myfav_hc_pane_t1_ParamLimits

0x6958,	// (0x0006265a) main_myfav_hc_pane_t1

0xd763,	// (0x00069465) main_myfav_hc_pane_t2_ParamLimits

0xd763,	// (0x00069465) main_myfav_hc_pane_t2

0xd775,	// (0x00069477) main_myfav_hc_pane_t3_ParamLimits

0xd775,	// (0x00069477) main_myfav_hc_pane_t3

0x696f,	// (0x00062671) main_myfav_hc_pane_t4_ParamLimits

0x696f,	// (0x00062671) main_myfav_hc_pane_t4

0x0004,

0xf79c,	// (0x0006b49e) main_myfav_hc_pane_t_ParamLimits

0xf79c,	// (0x0006b49e) main_myfav_hc_pane_t

0xcc49,	// (0x0006894b) bg_myfav_hc_instruction_pane_g1

0xd787,	// (0x00069489) cell_myfav_contact_pane_g1_ParamLimits

0xd787,	// (0x00069489) cell_myfav_contact_pane_g1

0xd787,	// (0x00069489) cell_myfav_contact_pane_g2_ParamLimits

0xd787,	// (0x00069489) cell_myfav_contact_pane_g2

0xd793,	// (0x00069495) cell_myfav_contact_pane_g3_ParamLimits

0xd793,	// (0x00069495) cell_myfav_contact_pane_g3

0xcf3d,	// (0x00068c3f) cell_myfav_contact_pane_g4_ParamLimits

0xcf3d,	// (0x00068c3f) cell_myfav_contact_pane_g4

0xd7a0,	// (0x000694a2) cell_myfav_contact_pane_g5_ParamLimits

0xd7a0,	// (0x000694a2) cell_myfav_contact_pane_g5

0x0004,

0x0855,	// (0x0005c557) cell_myfav_contact_pane_g_ParamLimits

0x0855,	// (0x0005c557) cell_myfav_contact_pane_g

0x6940,	// (0x00062642) main_myfav_hc_pane_g3_ParamLimits

0x6940,	// (0x00062642) main_myfav_hc_pane_g3

0x10af,	// (0x0005cdb1) popup_adpt_find_window

0x6999,	// (0x0006269b) afind_page_pane_ParamLimits

0x6999,	// (0x0006269b) afind_page_pane

0x69a6,	// (0x000626a8) aid_size_cell_afind_ParamLimits

0x69a6,	// (0x000626a8) aid_size_cell_afind

0x69c0,	// (0x000626c2) bg_popup_sub_pane_cp09_ParamLimits

0x69c0,	// (0x000626c2) bg_popup_sub_pane_cp09

0x69cd,	// (0x000626cf) find_pane_cp01_ParamLimits

0x69cd,	// (0x000626cf) find_pane_cp01

0xd7ac,	// (0x000694ae) grid_afind_control_pane_ParamLimits

0xd7ac,	// (0x000694ae) grid_afind_control_pane

0x69da,	// (0x000626dc) grid_afind_pane_ParamLimits

0x69da,	// (0x000626dc) grid_afind_pane

0x69f6,	// (0x000626f8) cell_afind_pane_ParamLimits

0x69f6,	// (0x000626f8) cell_afind_pane

0xcc49,	// (0x0006894b) afind_page_pane_g1

0x6a3e,	// (0x00062740) afind_page_pane_g2

0x6a47,	// (0x00062749) afind_page_pane_g3

0x0002,

0xf7a7,	// (0x0006b4a9) afind_page_pane_g

0x6a50,	// (0x00062752) afind_page_pane_t1

0xd7c0,	// (0x000694c2) cell_afind_grid_control_pane_ParamLimits

0xd7c0,	// (0x000694c2) cell_afind_grid_control_pane

0xd598,	// (0x0006929a) bg_button_pane_cp69_ParamLimits

0xd598,	// (0x0006929a) bg_button_pane_cp69

0x6a70,	// (0x00062772) cell_afind_pane_g1_ParamLimits

0x6a70,	// (0x00062772) cell_afind_pane_g1

0x6a7d,	// (0x0006277f) cell_afind_pane_t1_ParamLimits

0x6a7d,	// (0x0006277f) cell_afind_pane_t1

0xaa26,	// (0x00066728) bg_button_pane_cp72

0xd7cf,	// (0x000694d1) cell_afind_grid_control_pane_g1

0x4042,	// (0x0005fd44) aid_image_placing_area_ParamLimits

0x4042,	// (0x0005fd44) aid_image_placing_area

0xd266,	// (0x00068f68) field_vitu_entry_pane_g1_ParamLimits

0xd266,	// (0x00068f68) field_vitu_entry_pane_g1

0xd272,	// (0x00068f74) field_vitu_entry_pane_g2_ParamLimits

0xd272,	// (0x00068f74) field_vitu_entry_pane_g2

0x0001,

0x0711,	// (0x0005c413) field_vitu_entry_pane_g_ParamLimits

0x0711,	// (0x0005c413) field_vitu_entry_pane_g

0x5ba2,	// (0x000618a4) cell_vitu_itu_pane_g1_ParamLimits

0x5be4,	// (0x000618e6) cell_vitu_itu_pane_t3_ParamLimits

0x5be4,	// (0x000618e6) cell_vitu_itu_pane_t3

0xd548,	// (0x0006924a) mp4_progress_pane_t1_ParamLimits

0xd561,	// (0x00069263) mp4_progress_pane_t2_ParamLimits

0x07a6,	// (0x0005c4a8) mp4_progress_pane_t_ParamLimits

0xd57a,	// (0x0006927c) mup_progress_pane_cp04_ParamLimits

0x6983,	// (0x00062685) main_myfav_hc_pane_t5_ParamLimits

0x6983,	// (0x00062685) main_myfav_hc_pane_t5

0x0f3d,	// (0x0005cc3f) aid_zoom_text_primary

0x10af,	// (0x0005cdb1) popup_adpt_find_window_ParamLimits

0x44c4,	// (0x000601c6) main_cam_set_pane

0x63bd,	// (0x000620bf) cam4_zoom_pane_ParamLimits

0x63bd,	// (0x000620bf) cam4_zoom_pane

0x6a8f,	// (0x00062791) main_cam_set_pane_g1_ParamLimits

0x6a8f,	// (0x00062791) main_cam_set_pane_g1

0x6a9d,	// (0x0006279f) main_cam_set_pane_g2_ParamLimits

0x6a9d,	// (0x0006279f) main_cam_set_pane_g2

0x0001,

0xf7ae,	// (0x0006b4b0) main_cam_set_pane_g_ParamLimits

0xf7ae,	// (0x0006b4b0) main_cam_set_pane_g

0x6aa9,	// (0x000627ab) main_cam_set_pane_t1_ParamLimits

0x6aa9,	// (0x000627ab) main_cam_set_pane_t1

0x6ac5,	// (0x000627c7) main_cset_listscroll_pane_ParamLimits

0x6ac5,	// (0x000627c7) main_cset_listscroll_pane

0x6af0,	// (0x000627f2) main_cset_slider_pane_ParamLimits

0x6af0,	// (0x000627f2) main_cset_slider_pane

0xd7e0,	// (0x000694e2) main_cset_list_pane_ParamLimits

0xd7e0,	// (0x000694e2) main_cset_list_pane

0xd7f0,	// (0x000694f2) scroll_pane_cp028

0x6b0f,	// (0x00062811) aid_area_touch_slider

0x6b2b,	// (0x0006282d) cset_slider_pane

0x6b55,	// (0x00062857) main_cset_slider_pane_g1

0x6b6a,	// (0x0006286c) main_cset_slider_pane_g2

0x0011,

0xf7b3,	// (0x0006b4b5) main_cset_slider_pane_g

0xd829,	// (0x0006952b) main_cset_slider_pane_t1

0x6c2c,	// (0x0006292e) main_cset_slider_pane_t2

0x6c46,	// (0x00062948) main_cset_slider_pane_t3

0x6c60,	// (0x00062962) main_cset_slider_pane_t4

0x6c7a,	// (0x0006297c) main_cset_slider_pane_t5

0x6c98,	// (0x0006299a) main_cset_slider_pane_t6

0x6caf,	// (0x000629b1) main_cset_slider_pane_t7

0x000e,

0xf7d8,	// (0x0006b4da) main_cset_slider_pane_t

0x6dbb,	// (0x00062abd) cset_list_set_pane_ParamLimits

0x6dbb,	// (0x00062abd) cset_list_set_pane

0x6dd1,	// (0x00062ad3) aid_position_infowindow_above

0x6dd9,	// (0x00062adb) aid_position_infowindow_below

0xa07c,	// (0x00065d7e) cset_list_set_pane_g1_ParamLimits

0xa07c,	// (0x00065d7e) cset_list_set_pane_g1

0xa088,	// (0x00065d8a) cset_list_set_pane_g3_ParamLimits

0xa088,	// (0x00065d8a) cset_list_set_pane_g3

0x0001,

0xf7f7,	// (0x0006b4f9) cset_list_set_pane_g_ParamLimits

0xf7f7,	// (0x0006b4f9) cset_list_set_pane_g

0xa097,	// (0x00065d99) cset_list_set_pane_t1_ParamLimits

0xa097,	// (0x00065d99) cset_list_set_pane_t1

0xa4be,	// (0x000661c0) list_highlight_pane_cp021_ParamLimits

0xa4be,	// (0x000661c0) list_highlight_pane_cp021

0xb576,	// (0x00067278) cset_slider_pane_g1

0xb588,	// (0x0006728a) cset_slider_pane_g2

0xb57f,	// (0x00067281) cset_slider_pane_g3

0x0002,

0x08b5,	// (0x0005c5b7) cset_slider_pane_g

0x6de1,	// (0x00062ae3) aid_area_touch_cam4_zoom

0x6de9,	// (0x00062aeb) cam4_zoom_cont_pane

0x6df1,	// (0x00062af3) cam4_zoom_pane_g1

0x6df9,	// (0x00062afb) cam4_zoom_pane_g2

0x6e01,	// (0x00062b03) cam4_zoom_pane_g3

0x0002,

0xf7fc,	// (0x0006b4fe) cam4_zoom_pane_g

0x6e09,	// (0x00062b0b) cam4_zoom_cont_pane_g1

0x6e12,	// (0x00062b14) cam4_zoom_cont_pane_g2

0x6e1b,	// (0x00062b1d) cam4_zoom_cont_pane_g3

0x0002,

0xf803,	// (0x0006b505) cam4_zoom_cont_pane_g

0x62aa,	// (0x00061fac) call4_image_pane_ParamLimits

0x62aa,	// (0x00061fac) call4_image_pane

0xd5a4,	// (0x000692a6) call4_windows_conf_pane_ParamLimits

0xd5e5,	// (0x000692e7) popup_call4_audio_in_window_ParamLimits

0xd5e5,	// (0x000692e7) popup_call4_audio_in_window

0x9beb,	// (0x000658ed) bg_popup_call2_act_pane_cp02

0xd65b,	// (0x0006935d) call4_list_conf_pane

0xcc49,	// (0x0006894b) call4_image_pane_g1

0xcc49,	// (0x0006894b) call4_image_pane_g2

0x0001,

0xf5ba,	// (0x0006b2bc) call4_image_pane_g

0xd8d2,	// (0x000695d4) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8d2,	// (0x000695d4) list_single_graphic_popup_conf4_pane

0x9beb,	// (0x000658ed) list_highlight_pane_cp022

0xd8e5,	// (0x000695e7) list_single_graphic_popup_conf4_pane_g1

0xb147,	// (0x00066e49) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf80a,	// (0x0006b50c) list_single_graphic_popup_conf4_pane_g

0xd8ed,	// (0x000695ef) list_single_graphic_popup_conf4_pane_t1

0x2278,	// (0x0005df7a) popup_vtel_slider_window_ParamLimits

0x2278,	// (0x0005df7a) popup_vtel_slider_window

0xd586,	// (0x00069288) dialer2_ne_pane_t2_ParamLimits

0xd586,	// (0x00069288) dialer2_ne_pane_t2

0x0001,

0xf70b,	// (0x0006b40d) dialer2_ne_pane_t_ParamLimits

0xf70b,	// (0x0006b40d) dialer2_ne_pane_t

0xa4be,	// (0x000661c0) bg_popup_sub_pane_cp010_ParamLimits

0xa4be,	// (0x000661c0) bg_popup_sub_pane_cp010

0x6e24,	// (0x00062b26) popup_vtel_slider_window_g1_ParamLimits

0x6e24,	// (0x00062b26) popup_vtel_slider_window_g1

0x6e30,	// (0x00062b32) popup_vtel_slider_window_g2_ParamLimits

0x6e30,	// (0x00062b32) popup_vtel_slider_window_g2

0x0003,

0xf80f,	// (0x0006b511) popup_vtel_slider_window_g_ParamLimits

0xf80f,	// (0x0006b511) popup_vtel_slider_window_g

0x6e78,	// (0x00062b7a) vtel_slider_pane_ParamLimits

0x6e78,	// (0x00062b7a) vtel_slider_pane

0x6e87,	// (0x00062b89) vtel_slider_pane_g1_ParamLimits

0x6e87,	// (0x00062b89) vtel_slider_pane_g1

0x6e94,	// (0x00062b96) vtel_slider_pane_g2_ParamLimits

0x6e94,	// (0x00062b96) vtel_slider_pane_g2

0x6ea1,	// (0x00062ba3) vtel_slider_pane_g3_ParamLimits

0x6ea1,	// (0x00062ba3) vtel_slider_pane_g3

0x6e87,	// (0x00062b89) vtel_slider_pane_g4_ParamLimits

0x6e87,	// (0x00062b89) vtel_slider_pane_g4

0x6eae,	// (0x00062bb0) vtel_slider_pane_g5_ParamLimits

0x6eae,	// (0x00062bb0) vtel_slider_pane_g5

0x0004,

0xf818,	// (0x0006b51a) vtel_slider_pane_g_ParamLimits

0xf818,	// (0x0006b51a) vtel_slider_pane_g

0x44c4,	// (0x000601c6) main_gallery2_pane

0x661f,	// (0x00062321) aid_size_row_itut2_dropdow_list_ParamLimits

0x661f,	// (0x00062321) aid_size_row_itut2_dropdow_list

0x668d,	// (0x0006238f) grid_vitu2_function_top_pane_ParamLimits

0x668d,	// (0x0006238f) grid_vitu2_function_top_pane

0x66e7,	// (0x000623e9) popup_vitu2_dropdown_list_window_ParamLimits

0x66e7,	// (0x000623e9) popup_vitu2_dropdown_list_window

0x6707,	// (0x00062409) popup_vitu2_match_list_window

0x6ec9,	// (0x00062bcb) cell_vitu2_function_top_pane_ParamLimits

0x6ec9,	// (0x00062bcb) cell_vitu2_function_top_pane

0x6ee3,	// (0x00062be5) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6ee3,	// (0x00062be5) cell_vitu2_function_top_pane_cp01

0x6eff,	// (0x00062c01) cell_vitu2_function_top_wide_pane_ParamLimits

0x6eff,	// (0x00062c01) cell_vitu2_function_top_wide_pane

0x44c4,	// (0x000601c6) bg_button_pane_cp012

0x6f1b,	// (0x00062c1d) cell_vitu2_function_top_pane_g1

0x6f2f,	// (0x00062c31) bg_button_pane_cp013_ParamLimits

0x6f2f,	// (0x00062c31) bg_button_pane_cp013

0x6f4b,	// (0x00062c4d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6f4b,	// (0x00062c4d) cell_vitu2_function_top_wide_pane_g1

0x11a6,	// (0x0005cea8) bg_popup_sub_pane_cp20

0x6f63,	// (0x00062c65) list_vitu2_match_list_pane

0xd6d6,	// (0x000693d8) bg_popup_sub_pane_cp20_g1

0xd6de,	// (0x000693e0) bg_popup_sub_pane_cp20_g2

0xac2d,	// (0x0006692f) bg_popup_sub_pane_cp20_g3

0xd6e6,	// (0x000693e8) bg_popup_sub_pane_cp20_g4

0xac0d,	// (0x0006690f) bg_popup_sub_pane_cp20_g5

0xd915,	// (0x00069617) bg_popup_sub_pane_cp20_g6

0xd6f6,	// (0x000693f8) bg_popup_sub_pane_cp20_g7

0xd6fe,	// (0x00069400) bg_popup_sub_pane_cp20_g8

0xd706,	// (0x00069408) bg_popup_sub_pane_cp20_g9

0x0008,

0xf823,	// (0x0006b525) bg_popup_sub_pane_cp20_g

0x6f7b,	// (0x00062c7d) list_vitu2_match_list_item_pane_ParamLimits

0x6f7b,	// (0x00062c7d) list_vitu2_match_list_item_pane

0x6f8d,	// (0x00062c8f) list_vitu2_match_list_item_pane_t1

0x11c0,	// (0x0005cec2) bg_popup_sub_pane_cp21

0x6fe3,	// (0x00062ce5) grid_vitu2_dropdown_list_pane

0x6feb,	// (0x00062ced) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6feb,	// (0x00062ced) cell_vitu2_dropdown_list_char_pane

0x700c,	// (0x00062d0e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x700c,	// (0x00062d0e) cell_vitu2_dropdown_list_ctrl_pane

0xd91d,	// (0x0006961f) cell_vitu2_dropdown_list_char_pane_g1

0xd926,	// (0x00069628) cell_vitu2_dropdown_list_char_pane_g2

0xd92f,	// (0x00069631) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x0900,	// (0x0005c602) cell_vitu2_dropdown_list_char_pane_g

0x7038,	// (0x00062d3a) cell_vitu2_dropdown_list_char_pane_t1

0x7046,	// (0x00062d48) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7046,	// (0x00062d48) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7056,	// (0x00062d58) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7056,	// (0x00062d58) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7067,	// (0x00062d69) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7067,	// (0x00062d69) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7077,	// (0x00062d79) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7077,	// (0x00062d79) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6451,	// (0x00062153) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6451,	// (0x00062153) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf840,	// (0x0006b542) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf840,	// (0x0006b542) cell_vitu2_dropdown_list_ctrl_pane_g

0x7093,	// (0x00062d95) aid_size_cell_gallery2_ParamLimits

0x7093,	// (0x00062d95) aid_size_cell_gallery2

0x70ad,	// (0x00062daf) grid_gallery2_pane_ParamLimits

0x70ad,	// (0x00062daf) grid_gallery2_pane

0x5a2b,	// (0x0006172d) scroll_pane_cp029_ParamLimits

0x5a2b,	// (0x0006172d) scroll_pane_cp029

0x70c4,	// (0x00062dc6) cell_gallery2_pane_ParamLimits

0x70c4,	// (0x00062dc6) cell_gallery2_pane

0xd938,	// (0x0006963a) cell_gallery2_pane_g2

0xea32,	// (0x0006a734) cell_gallery2_pane_g3

0xd940,	// (0x00069642) cell_gallery2_pane_g4

0xd948,	// (0x0006964a) cell_gallery2_pane_g5

0xa9d4,	// (0x000666d6) grid_highlight_pane_cp10

0x6707,	// (0x00062409) popup_vitu2_match_list_window_ParamLimits

0x671b,	// (0x0006241d) popup_vitu2_query_window_ParamLimits

0x671b,	// (0x0006241d) popup_vitu2_query_window

0x11c0,	// (0x0005cec2) bg_vitu2_candi_button_pane

0xd91d,	// (0x0006961f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd926,	// (0x00069628) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd92f,	// (0x00069631) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7116,	// (0x00062e18) bg_button_pane_cp015

0x7128,	// (0x00062e2a) bg_button_pane_cp016

0x713b,	// (0x00062e3d) bg_button_pane_cp017

0xc838,	// (0x0006853a) bg_popup_sub_pane_cp22

0xd950,	// (0x00069652) popup_vitu2_query_window_g1

0x7180,	// (0x00062e82) popup_vitu2_query_window_g2

0x0002,

0xf84b,	// (0x0006b54d) popup_vitu2_query_window_g

0x719d,	// (0x00062e9f) popup_vitu2_query_window_t1_ParamLimits

0x719d,	// (0x00062e9f) popup_vitu2_query_window_t1

0x71d0,	// (0x00062ed2) popup_vitu2_query_window_t2_ParamLimits

0x71d0,	// (0x00062ed2) popup_vitu2_query_window_t2

0x71e2,	// (0x00062ee4) popup_vitu2_query_window_t3_ParamLimits

0x71e2,	// (0x00062ee4) popup_vitu2_query_window_t3

0x720a,	// (0x00062f0c) popup_vitu2_query_window_t4_ParamLimits

0x720a,	// (0x00062f0c) popup_vitu2_query_window_t4

0x722b,	// (0x00062f2d) popup_vitu2_query_window_t5_ParamLimits

0x722b,	// (0x00062f2d) popup_vitu2_query_window_t5

0x0006,

0xf852,	// (0x0006b554) popup_vitu2_query_window_t_ParamLimits

0xf852,	// (0x0006b554) popup_vitu2_query_window_t

0xd7d8,	// (0x000694da) main_cset_text_pane

0x6b0f,	// (0x00062811) aid_area_touch_slider_ParamLimits

0x6b2b,	// (0x0006282d) cset_slider_pane_ParamLimits

0x6b55,	// (0x00062857) main_cset_slider_pane_g1_ParamLimits

0x6b6a,	// (0x0006286c) main_cset_slider_pane_g2_ParamLimits

0xd7f9,	// (0x000694fb) main_cset_slider_pane_g3_ParamLimits

0xd7f9,	// (0x000694fb) main_cset_slider_pane_g3

0x6b7f,	// (0x00062881) main_cset_slider_pane_g4_ParamLimits

0x6b7f,	// (0x00062881) main_cset_slider_pane_g4

0x6b8e,	// (0x00062890) main_cset_slider_pane_g5_ParamLimits

0x6b8e,	// (0x00062890) main_cset_slider_pane_g5

0x6b9c,	// (0x0006289e) main_cset_slider_pane_g6_ParamLimits

0x6b9c,	// (0x0006289e) main_cset_slider_pane_g6

0xf7b3,	// (0x0006b4b5) main_cset_slider_pane_g_ParamLimits

0xd829,	// (0x0006952b) main_cset_slider_pane_t1_ParamLimits

0x6c2c,	// (0x0006292e) main_cset_slider_pane_t2_ParamLimits

0x6c46,	// (0x00062948) main_cset_slider_pane_t3_ParamLimits

0x6c60,	// (0x00062962) main_cset_slider_pane_t4_ParamLimits

0x6c7a,	// (0x0006297c) main_cset_slider_pane_t5_ParamLimits

0x6c98,	// (0x0006299a) main_cset_slider_pane_t6_ParamLimits

0x6caf,	// (0x000629b1) main_cset_slider_pane_t7_ParamLimits

0x6cdd,	// (0x000629df) main_cset_slider_pane_t8_ParamLimits

0x6cdd,	// (0x000629df) main_cset_slider_pane_t8

0x6d05,	// (0x00062a07) main_cset_slider_pane_t9_ParamLimits

0x6d05,	// (0x00062a07) main_cset_slider_pane_t9

0x6d2d,	// (0x00062a2f) main_cset_slider_pane_t10_ParamLimits

0x6d2d,	// (0x00062a2f) main_cset_slider_pane_t10

0x6d55,	// (0x00062a57) main_cset_slider_pane_t11_ParamLimits

0x6d55,	// (0x00062a57) main_cset_slider_pane_t11

0x6d7f,	// (0x00062a81) main_cset_slider_pane_t12_ParamLimits

0x6d7f,	// (0x00062a81) main_cset_slider_pane_t12

0x6d9c,	// (0x00062a9e) main_cset_slider_pane_t13_ParamLimits

0x6d9c,	// (0x00062a9e) main_cset_slider_pane_t13

0xf7d8,	// (0x0006b4da) main_cset_slider_pane_t_ParamLimits

0x9beb,	// (0x000658ed) bg_popup_sub_pane_cp011

0xd95c,	// (0x0006965e) main_cset_text_pane_g1

0xd964,	// (0x00069666) main_cset_text_pane_t1

0xd972,	// (0x00069674) main_cset_text_pane_t2

0xd980,	// (0x00069682) main_cset_text_pane_t3

0xd98e,	// (0x00069690) main_cset_text_pane_t4

0xd99c,	// (0x0006969e) main_cset_text_pane_t5

0xd9aa,	// (0x000696ac) main_cset_text_pane_t6

0xd9b8,	// (0x000696ba) main_cset_text_pane_t7

0x0006,

0x0928,	// (0x0005c62a) main_cset_text_pane_t

0x11c0,	// (0x0005cec2) main_cam4_burst_pane

0x11c0,	// (0x0005cec2) main_cam5_pane

0x6a5e,	// (0x00062760) bg_button_pane_cp019

0x6a67,	// (0x00062769) bg_button_pane_cp020

0xd805,	// (0x00069507) main_cset_slider_pane_g7_ParamLimits

0xd805,	// (0x00069507) main_cset_slider_pane_g7

0xd811,	// (0x00069513) main_cset_slider_pane_g8_ParamLimits

0xd811,	// (0x00069513) main_cset_slider_pane_g8

0x6bb0,	// (0x000628b2) main_cset_slider_pane_g9_ParamLimits

0x6bb0,	// (0x000628b2) main_cset_slider_pane_g9

0x6bbc,	// (0x000628be) main_cset_slider_pane_g10_ParamLimits

0x6bbc,	// (0x000628be) main_cset_slider_pane_g10

0x6bc8,	// (0x000628ca) main_cset_slider_pane_g11_ParamLimits

0x6bc8,	// (0x000628ca) main_cset_slider_pane_g11

0x6bd4,	// (0x000628d6) main_cset_slider_pane_g12_ParamLimits

0x6bd4,	// (0x000628d6) main_cset_slider_pane_g12

0x6be0,	// (0x000628e2) main_cset_slider_pane_g13_ParamLimits

0x6be0,	// (0x000628e2) main_cset_slider_pane_g13

0x6bec,	// (0x000628ee) main_cset_slider_pane_g14_ParamLimits

0x6bec,	// (0x000628ee) main_cset_slider_pane_g14

0x6bf8,	// (0x000628fa) main_cset_slider_pane_g15_ParamLimits

0x6bf8,	// (0x000628fa) main_cset_slider_pane_g15

0xd857,	// (0x00069559) main_cset_slider_pane_t14_ParamLimits

0xd857,	// (0x00069559) main_cset_slider_pane_t14

0xd890,	// (0x00069592) main_cset_slider_pane_t15_ParamLimits

0xd890,	// (0x00069592) main_cset_slider_pane_t15

0x72a2,	// (0x00062fa4) aid_cam4_burst_size_cell_ParamLimits

0x72a2,	// (0x00062fa4) aid_cam4_burst_size_cell

0x72be,	// (0x00062fc0) grid_cam4_burst_pane_ParamLimits

0x72be,	// (0x00062fc0) grid_cam4_burst_pane

0x72ee,	// (0x00062ff0) linegrid_cam4_burst_pane_ParamLimits

0x72ee,	// (0x00062ff0) linegrid_cam4_burst_pane

0x730e,	// (0x00063010) scroll_pane_cp30_ParamLimits

0x730e,	// (0x00063010) scroll_pane_cp30

0x731a,	// (0x0006301c) cell_cam4_burst_pane_ParamLimits

0x731a,	// (0x0006301c) cell_cam4_burst_pane

0xd9c6,	// (0x000696c8) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9c6,	// (0x000696c8) linegrid_cam4_burst_pane_g1

0x7356,	// (0x00063058) linegrid_cam4_burst_pane_g2_ParamLimits

0x7356,	// (0x00063058) linegrid_cam4_burst_pane_g2

0xd9d3,	// (0x000696d5) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9d3,	// (0x000696d5) linegrid_cam4_burst_pane_g3

0x0002,

0xf861,	// (0x0006b563) linegrid_cam4_burst_pane_g_ParamLimits

0xf861,	// (0x0006b563) linegrid_cam4_burst_pane_g

0x7367,	// (0x00063069) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7367,	// (0x00063069) linegrid_cam4_burst_pane_g3_copy1

0xd9ee,	// (0x000696f0) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9ee,	// (0x000696f0) linegrid_cam4_burst_pane_g4

0x7381,	// (0x00063083) linegrid_cam4_burst_pane_g5_ParamLimits

0x7381,	// (0x00063083) linegrid_cam4_burst_pane_g5

0x7392,	// (0x00063094) linegrid_cam4_burst_pane_g6_ParamLimits

0x7392,	// (0x00063094) linegrid_cam4_burst_pane_g6

0xd9fb,	// (0x000696fd) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9fb,	// (0x000696fd) linegrid_cam4_burst_pane_g7

0x73a3,	// (0x000630a5) cell_cam4_burst_pane_g1

0xda14,	// (0x00069716) main_cam5_pane_t1_ParamLimits

0xda14,	// (0x00069716) main_cam5_pane_t1

0xda34,	// (0x00069736) main_cam5_pane_t2_ParamLimits

0xda34,	// (0x00069736) main_cam5_pane_t2

0xda46,	// (0x00069748) main_cam5_pane_t3_ParamLimits

0xda46,	// (0x00069748) main_cam5_pane_t3

0xda58,	// (0x0006975a) main_cam5_pane_t4_ParamLimits

0xda58,	// (0x0006975a) main_cam5_pane_t4

0xda7c,	// (0x0006977e) main_cam5_pane_t5_ParamLimits

0xda7c,	// (0x0006977e) main_cam5_pane_t5

0xda90,	// (0x00069792) main_cam5_pane_t6_ParamLimits

0xda90,	// (0x00069792) main_cam5_pane_t6

0xdaa4,	// (0x000697a6) main_cam5_pane_t7_ParamLimits

0xdaa4,	// (0x000697a6) main_cam5_pane_t7

0xdab6,	// (0x000697b8) main_cam5_pane_t8_ParamLimits

0xdab6,	// (0x000697b8) main_cam5_pane_t8

0xdad2,	// (0x000697d4) main_cam5_pane_t9_ParamLimits

0xdad2,	// (0x000697d4) main_cam5_pane_t9

0xdae4,	// (0x000697e6) main_cam5_pane_t10_ParamLimits

0xdae4,	// (0x000697e6) main_cam5_pane_t10

0xdaf6,	// (0x000697f8) main_cam5_pane_t11_ParamLimits

0xdaf6,	// (0x000697f8) main_cam5_pane_t11

0xdb08,	// (0x0006980a) main_cam5_pane_t12_ParamLimits

0xdb08,	// (0x0006980a) main_cam5_pane_t12

0xdb1d,	// (0x0006981f) main_cam5_pane_t13_ParamLimits

0xdb1d,	// (0x0006981f) main_cam5_pane_t13

0x000c,

0xf86d,	// (0x0006b56f) main_cam5_pane_t_ParamLimits

0xf86d,	// (0x0006b56f) main_cam5_pane_t

0x1165,	// (0x0005ce67) popup_scut_keymap_window_ParamLimits

0x1165,	// (0x0005ce67) popup_scut_keymap_window

0x73b6,	// (0x000630b8) aid_size_cell_brow_shortcut

0xa9d4,	// (0x000666d6) bg_popup_window_pane_cp010

0x73c2,	// (0x000630c4) grid_scut_pane

0x73ce,	// (0x000630d0) cell_scut_pane_ParamLimits

0x73ce,	// (0x000630d0) cell_scut_pane

0x73e5,	// (0x000630e7) cell_scut_pane_g1

0xdb3a,	// (0x0006983c) cell_scut_pane_t1

0xdb49,	// (0x0006984b) cell_scut_pane_t2

0x73ee,	// (0x000630f0) cell_scut_pane_t3

0x0002,

0xf888,	// (0x0006b58a) cell_scut_pane_t

0x520c,	// (0x00060f0e) main_mup3_pane_g8_ParamLimits

0x520c,	// (0x00060f0e) main_mup3_pane_g8

0x662d,	// (0x0006232f) area_vitu2_query_pane_ParamLimits

0x662d,	// (0x0006232f) area_vitu2_query_pane

0x714e,	// (0x00062e50) input_focus_pane_cp08

0xdb58,	// (0x0006985a) area_vitu2_query_pane_g1

0x73fc,	// (0x000630fe) area_vitu2_query_pane_g2

0x0001,

0xf88f,	// (0x0006b591) area_vitu2_query_pane_g

0x740d,	// (0x0006310f) area_vitu2_query_pane_t1_ParamLimits

0x740d,	// (0x0006310f) area_vitu2_query_pane_t1

0x7421,	// (0x00063123) area_vitu2_query_pane_t2_ParamLimits

0x7421,	// (0x00063123) area_vitu2_query_pane_t2

0x7435,	// (0x00063137) area_vitu2_query_pane_t3_ParamLimits

0x7435,	// (0x00063137) area_vitu2_query_pane_t3

0xa0ac,	// (0x00065dae) area_vitu2_query_pane_t4_ParamLimits

0xa0ac,	// (0x00065dae) area_vitu2_query_pane_t4

0xa0d4,	// (0x00065dd6) area_vitu2_query_pane_t5_ParamLimits

0xa0d4,	// (0x00065dd6) area_vitu2_query_pane_t5

0xa0fc,	// (0x00065dfe) area_vitu2_query_pane_t6_ParamLimits

0xa0fc,	// (0x00065dfe) area_vitu2_query_pane_t6

0x0006,

0xf894,	// (0x0006b596) area_vitu2_query_pane_t_ParamLimits

0xf894,	// (0x0006b596) area_vitu2_query_pane_t

0x745d,	// (0x0006315f) bg_button_pane_cp018

0x746b,	// (0x0006316d) bg_button_pane_cp021

0x7477,	// (0x00063179) bg_button_pane_cp022

0x7488,	// (0x0006318a) input_focus_pane_cp09

0xb291,	// (0x00066f93) aid_size_touch_mv_arrow_left

0xb2ba,	// (0x00066fbc) aid_size_touch_mv_arrow_right

0x6c10,	// (0x00062912) main_cset_slider_pane_g16_ParamLimits

0x6c10,	// (0x00062912) main_cset_slider_pane_g16

0x6c1e,	// (0x00062920) main_cset_slider_pane_g17_ParamLimits

0x6c1e,	// (0x00062920) main_cset_slider_pane_g17

0x73a3,	// (0x000630a5) cell_cam4_burst_pane_g1_ParamLimits

0x9beb,	// (0x000658ed) compa_mode_pane

0x6e3c,	// (0x00062b3e) popup_vtel_slider_window_g3_ParamLimits

0x6e3c,	// (0x00062b3e) popup_vtel_slider_window_g3

0x6e50,	// (0x00062b52) popup_vtel_slider_window_g4_ParamLimits

0x6e50,	// (0x00062b52) popup_vtel_slider_window_g4

0x6e64,	// (0x00062b66) popup_vtel_slider_window_t1_ParamLimits

0x6e64,	// (0x00062b66) popup_vtel_slider_window_t1

0x11c0,	// (0x0005cec2) main_cl_pane

0x4562,	// (0x00060264) popup_imed_adjust2_window_ParamLimits

0xc838,	// (0x0006853a) bg_tb_trans_pane_cp05_ParamLimits

0xd19b,	// (0x00068e9d) popup_imed_adjust2_window_g1_ParamLimits

0xd1aa,	// (0x00068eac) popup_imed_adjust2_window_g2_ParamLimits

0xd1aa,	// (0x00068eac) popup_imed_adjust2_window_g2

0xd1b6,	// (0x00068eb8) popup_imed_adjust2_window_g3_ParamLimits

0xd1b6,	// (0x00068eb8) popup_imed_adjust2_window_g3

0x0002,

0x06d5,	// (0x0005c3d7) popup_imed_adjust2_window_g_ParamLimits

0x06d5,	// (0x0005c3d7) popup_imed_adjust2_window_g

0xd1c2,	// (0x00068ec4) popup_imed_adjust2_window_t1_ParamLimits

0xd1da,	// (0x00068edc) slider_imed_adjust_pane_ParamLimits

0xd1ee,	// (0x00068ef0) slider_imed_adjust_pane_g1_ParamLimits

0xd1fe,	// (0x00068f00) slider_imed_adjust_pane_g2_ParamLimits

0xd20e,	// (0x00068f10) slider_imed_adjust_pane_g3_ParamLimits

0xd21f,	// (0x00068f21) slider_imed_adjust_pane_g4_ParamLimits

0x06dc,	// (0x0005c3de) slider_imed_adjust_pane_g_ParamLimits

0x6366,	// (0x00062068) aid_touch_area_cam4_ParamLimits

0x6366,	// (0x00062068) aid_touch_area_cam4

0x6376,	// (0x00062078) battery_pane_cp01

0x63fd,	// (0x000620ff) main_camera4_pane_g6_ParamLimits

0x63fd,	// (0x000620ff) main_camera4_pane_g6

0x641b,	// (0x0006211d) main_camera4_pane_t2_ParamLimits

0x641b,	// (0x0006211d) main_camera4_pane_t2

0x0001,

0xf73f,	// (0x0006b441) main_camera4_pane_t_ParamLimits

0xf73f,	// (0x0006b441) main_camera4_pane_t

0x64b0,	// (0x000621b2) aid_touch_area_vid4_ParamLimits

0x64b0,	// (0x000621b2) aid_touch_area_vid4

0x64f0,	// (0x000621f2) main_video4_pane_g5_ParamLimits

0x64f0,	// (0x000621f2) main_video4_pane_g5

0x6514,	// (0x00062216) vid4_progress_pane_ParamLimits

0x6514,	// (0x00062216) vid4_progress_pane

0xd81d,	// (0x0006951f) main_cset_slider_pane_g18_ParamLimits

0xd81d,	// (0x0006951f) main_cset_slider_pane_g18

0xda08,	// (0x0006970a) cell_cam4_burst_pane_g2_ParamLimits

0xda08,	// (0x0006970a) cell_cam4_burst_pane_g2

0x0001,

0xf868,	// (0x0006b56a) cell_cam4_burst_pane_g_ParamLimits

0xf868,	// (0x0006b56a) cell_cam4_burst_pane_g

0x7499,	// (0x0006319b) bg_cl_pane_ParamLimits

0x7499,	// (0x0006319b) bg_cl_pane

0x74a5,	// (0x000631a7) cl_header_pane_ParamLimits

0x74a5,	// (0x000631a7) cl_header_pane

0x74b1,	// (0x000631b3) cl_listscroll_pane_ParamLimits

0x74b1,	// (0x000631b3) cl_listscroll_pane

0xdb64,	// (0x00069866) bg_cl_pane_g1

0xdb6c,	// (0x0006986e) bg_cl_pane_g2

0xdb74,	// (0x00069876) bg_cl_pane_g3

0xdb7c,	// (0x0006987e) bg_cl_pane_g4

0xdb84,	// (0x00069886) bg_cl_pane_g5

0xdb8c,	// (0x0006988e) bg_cl_pane_g6

0xdb94,	// (0x00069896) bg_cl_pane_g7

0xdb9c,	// (0x0006989e) bg_cl_pane_g8

0xdba4,	// (0x000698a6) bg_cl_pane_g9

0x0008,

0x0979,	// (0x0005c67b) bg_cl_pane_g

0x74bd,	// (0x000631bf) aid_height_cl_leading_ParamLimits

0x74bd,	// (0x000631bf) aid_height_cl_leading

0x74c9,	// (0x000631cb) aid_height_cl_text_ParamLimits

0x74c9,	// (0x000631cb) aid_height_cl_text

0xda26,	// (0x00069728) bg_cl_header_pane_ParamLimits

0xda26,	// (0x00069728) bg_cl_header_pane

0x74e1,	// (0x000631e3) cl_header_pane_g1_ParamLimits

0x74e1,	// (0x000631e3) cl_header_pane_g1

0x74ee,	// (0x000631f0) cl_header_pane_t1_ParamLimits

0x74ee,	// (0x000631f0) cl_header_pane_t1

0xdbac,	// (0x000698ae) cl_list_pane

0xd7f0,	// (0x000694f2) hc_scroll_pane_cp01

0xac0d,	// (0x0006690f) bg_cl_header_pane_g1

0xd6d6,	// (0x000693d8) bg_cl_header_pane_g2

0xac2d,	// (0x0006692f) bg_cl_header_pane_g3

0xd6e6,	// (0x000693e8) bg_cl_header_pane_g4

0xd6de,	// (0x000693e0) bg_cl_header_pane_g5

0xd915,	// (0x00069617) bg_cl_header_pane_g6

0xd6fe,	// (0x00069400) bg_cl_header_pane_g7

0xd706,	// (0x00069408) bg_cl_header_pane_g8

0xd6f6,	// (0x000693f8) bg_cl_header_pane_g9

0x0008,

0xf8a3,	// (0x0006b5a5) bg_cl_header_pane_g

0x7500,	// (0x00063202) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7500,	// (0x00063202) hc_cl_list_double_graphic_heading_pane

0x7511,	// (0x00063213) hc_cl_list_single_graphic_pane_ParamLimits

0x7511,	// (0x00063213) hc_cl_list_single_graphic_pane

0x752a,	// (0x0006322c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x752a,	// (0x0006322c) hc_cl_list_single_graphic_pane_g1

0x7536,	// (0x00063238) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7536,	// (0x00063238) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf8b6,	// (0x0006b5b8) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf8b6,	// (0x0006b5b8) hc_cl_list_single_graphic_pane_g

0x754a,	// (0x0006324c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x754a,	// (0x0006324c) hc_cl_list_single_graphic_pane_t1

0x752a,	// (0x0006322c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x752a,	// (0x0006322c) hc_cl_list_double_graphic_heading_pane_g1

0x755f,	// (0x00063261) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x755f,	// (0x00063261) hc_cl_list_double_graphic_heading_pane_g2

0x7573,	// (0x00063275) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7573,	// (0x00063275) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf8bb,	// (0x0006b5bd) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf8bb,	// (0x0006b5bd) hc_cl_list_double_graphic_heading_pane_g

0x7587,	// (0x00063289) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7587,	// (0x00063289) hc_cl_list_double_graphic_heading_pane_t1

0x759c,	// (0x0006329e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x759c,	// (0x0006329e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf8c2,	// (0x0006b5c4) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf8c2,	// (0x0006b5c4) hc_cl_list_double_graphic_heading_pane_t

0x75b9,	// (0x000632bb) vid4_progress_pane_g1

0x75c9,	// (0x000632cb) vid4_progress_pane_g2

0x75d9,	// (0x000632db) vid4_progress_pane_g3

0x75eb,	// (0x000632ed) vid4_progress_pane_g4

0x0004,

0xf8c7,	// (0x0006b5c9) vid4_progress_pane_g

0x7603,	// (0x00063305) vid4_progress_pane_t1

0x7619,	// (0x0006331b) vid4_progress_pane_t2

0x0002,

0xf8d2,	// (0x0006b5d4) vid4_progress_pane_t

0x7643,	// (0x00063345) wait_bar_pane_cp07

0xca33,	// (0x00068735) blid_firmament_pane_ParamLimits

0xca76,	// (0x00068778) popup_blid_sat_info2_window_g1

0xca9a,	// (0x0006879c) popup_blid_sat_info2_window_t3

0xcaa8,	// (0x000687aa) popup_blid_sat_info2_window_t4

0xcab6,	// (0x000687b8) popup_blid_sat_info2_window_t5

0xcac4,	// (0x000687c6) popup_blid_sat_info2_window_t6

0xcad4,	// (0x000687d6) popup_blid_sat_info2_window_t7

0xcae2,	// (0x000687e4) popup_blid_sat_info2_window_t8

0xcaf0,	// (0x000687f2) popup_blid_sat_info2_window_t9

0xcafe,	// (0x00068800) popup_blid_sat_info2_window_t10

0xcbc0,	// (0x000688c2) aid_firma_cardinal_ParamLimits

0xcbd4,	// (0x000688d6) blid_firmament_pane_t1_ParamLimits

0xcbeb,	// (0x000688ed) blid_firmament_pane_t2_ParamLimits

0xcc02,	// (0x00068904) blid_firmament_pane_t3_ParamLimits

0xcc19,	// (0x0006891b) blid_firmament_pane_t4_ParamLimits

0x05c9,	// (0x0005c2cb) blid_firmament_pane_t_ParamLimits

0xcc39,	// (0x0006893b) blid_sat_info_pane_ParamLimits

0x44c4,	// (0x000601c6) main_cam_set_pane_ParamLimits

0x59c4,	// (0x000616c6) aid_size_cell_colour_35_ParamLimits

0x59de,	// (0x000616e0) aid_size_cell_colour_112_ParamLimits

0x59f5,	// (0x000616f7) aid_size_cell_effect_ParamLimits

0xa4be,	// (0x000661c0) bg_tb_trans_pane_cp02_ParamLimits

0xaf43,	// (0x00066c45) heading_imed_pane_ParamLimits

0x5a0f,	// (0x00061711) listscroll_imed_pane_ParamLimits

0xbe5e,	// (0x00067b60) popup_call2_audio_first_window_g5_ParamLimits

0xbe5e,	// (0x00067b60) popup_call2_audio_first_window_g5

0x6115,	// (0x00061e17) aid_size_touch_image3_arrow_left_ParamLimits

0x6115,	// (0x00061e17) aid_size_touch_image3_arrow_left

0x612b,	// (0x00061e2d) aid_size_touch_image3_arrow_right_ParamLimits

0x612b,	// (0x00061e2d) aid_size_touch_image3_arrow_right

0x762e,	// (0x00063330) vid4_progress_pane_t3

0x5cad,	// (0x000619af) main_hwr_training_symbol_option_pane_ParamLimits

0x5cad,	// (0x000619af) main_hwr_training_symbol_option_pane

0xd488,	// (0x0006918a) popup_hwr_training_preview_window_ParamLimits

0xd488,	// (0x0006918a) popup_hwr_training_preview_window

0x5d0e,	// (0x00061a10) hwr_training_navi_pane_g5_ParamLimits

0x5d0e,	// (0x00061a10) hwr_training_navi_pane_g5

0xd6c4,	// (0x000693c6) popup_char_count_window

0x11a6,	// (0x0005cea8) bg_popup_sub_pane_cp20_ParamLimits

0x6f63,	// (0x00062c65) list_vitu2_match_list_pane_ParamLimits

0x6f6f,	// (0x00062c71) vitu2_page_scroll_pane_ParamLimits

0x6f6f,	// (0x00062c71) vitu2_page_scroll_pane

0xdbb5,	// (0x000698b7) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbb5,	// (0x000698b7) list_single_hwr_training_symbol_option_pane

0xdbc8,	// (0x000698ca) list_single_hwr_training_symbol_option_pane_g1

0xdbd0,	// (0x000698d2) list_single_hwr_training_symbol_option_pane_t1

0xdbde,	// (0x000698e0) bg_button_pane_cp023

0xdbe7,	// (0x000698e9) bg_button_pane_cp024

0x768e,	// (0x00063390) vitu2_page_scroll_pane_g1

0x7696,	// (0x00063398) vitu2_page_scroll_pane_g2

0x0001,

0xf8d9,	// (0x0006b5db) vitu2_page_scroll_pane_g

0x769e,	// (0x000633a0) vitu2_page_scroll_pane_t1

0xc993,	// (0x00068695) popup_char_count_window_g1

0xdc1a,	// (0x0006991c) popup_char_count_window_g2

0xdc23,	// (0x00069925) popup_char_count_window_g3

0x0002,

0x09c7,	// (0x0005c6c9) popup_char_count_window_g

0xdc34,	// (0x00069936) popup_char_count_window_t1

0x11c0,	// (0x0005cec2) main_vded2_pane

0xd187,	// (0x00068e89) aid_size_cell_imed_line

0xd191,	// (0x00068e93) grid_imed_line_width_pane

0x6582,	// (0x00062284) vid4_indicators_pane_g4

0xdc42,	// (0x00069944) cell_imed_line_width_pane_ParamLimits

0xdc42,	// (0x00069944) cell_imed_line_width_pane

0xdc56,	// (0x00069958) cell_imed_line_width_pane_g1

0xdc2c,	// (0x0006992e) cell_imed_line_width_pane_g2

0x0001,

0xf8de,	// (0x0006b5e0) cell_imed_line_width_pane_g

0x76ad,	// (0x000633af) main_vded2_pane_g1_ParamLimits

0x76ad,	// (0x000633af) main_vded2_pane_g1

0x76ba,	// (0x000633bc) main_vded2_pane_g2_ParamLimits

0x76ba,	// (0x000633bc) main_vded2_pane_g2

0x0001,

0xf8e3,	// (0x0006b5e5) main_vded2_pane_g_ParamLimits

0xf8e3,	// (0x0006b5e5) main_vded2_pane_g

0x76c8,	// (0x000633ca) vded2_slider_pane_ParamLimits

0x76c8,	// (0x000633ca) vded2_slider_pane

0x76d5,	// (0x000633d7) aid_size_touch_vded2_end

0x76df,	// (0x000633e1) aid_size_touch_vded2_playhead

0xdc5f,	// (0x00069961) aid_size_touch_vded2_start

0xdc67,	// (0x00069969) vded2_slider_bg_pane

0xdc70,	// (0x00069972) vded2_slider_pane_g1

0xdc79,	// (0x0006997b) vded2_slider_pane_g2

0x76e7,	// (0x000633e9) vded2_slider_pane_g3

0x0002,

0xf8e8,	// (0x0006b5ea) vded2_slider_pane_g

0xdc81,	// (0x00069983) vded2_slider_bg_pane_g1

0xdc8a,	// (0x0006998c) vded2_slider_bg_pane_g2

0xdc93,	// (0x00069995) vded2_slider_bg_pane_g3

0x0002,

0x09df,	// (0x0005c6e1) vded2_slider_bg_pane_g

0x3dac,	// (0x0005faae) aid_postcard_touch_down_pane_ParamLimits

0x3dac,	// (0x0005faae) aid_postcard_touch_down_pane

0x3dbc,	// (0x0005fabe) aid_postcard_touch_up_pane_ParamLimits

0x3dbc,	// (0x0005fabe) aid_postcard_touch_up_pane

0x11c0,	// (0x0005cec2) main_blid2_pane

0x44ed,	// (0x000601ef) popup_blid2_search_window

0x9beb,	// (0x000658ed) blid2_gps_pane

0x9beb,	// (0x000658ed) blid2_navig_pane

0x9beb,	// (0x000658ed) blid2_search_pane

0x9beb,	// (0x000658ed) blid2_tripm_pane

0x76f0,	// (0x000633f2) blid2_search_pane_g1_ParamLimits

0x76f0,	// (0x000633f2) blid2_search_pane_g1

0x7700,	// (0x00063402) blid2_search_pane_t1_ParamLimits

0x7700,	// (0x00063402) blid2_search_pane_t1

0x7712,	// (0x00063414) aid_size_cell_blid2_gps_ParamLimits

0x7712,	// (0x00063414) aid_size_cell_blid2_gps

0x7722,	// (0x00063424) blid2_gps_pane_g1_ParamLimits

0x7722,	// (0x00063424) blid2_gps_pane_g1

0x772e,	// (0x00063430) grid_blid2_satellite_pane_ParamLimits

0x772e,	// (0x00063430) grid_blid2_satellite_pane

0x773e,	// (0x00063440) blid2_navig_pane_g1_ParamLimits

0x773e,	// (0x00063440) blid2_navig_pane_g1

0x774a,	// (0x0006344c) blid2_navig_pane_t1_ParamLimits

0x774a,	// (0x0006344c) blid2_navig_pane_t1

0x775c,	// (0x0006345e) blid2_navig_pane_t2_ParamLimits

0x775c,	// (0x0006345e) blid2_navig_pane_t2

0x0001,

0xf8ef,	// (0x0006b5f1) blid2_navig_pane_t_ParamLimits

0xf8ef,	// (0x0006b5f1) blid2_navig_pane_t

0x776e,	// (0x00063470) blid2_navig_ring_pane_ParamLimits

0x776e,	// (0x00063470) blid2_navig_ring_pane

0x777e,	// (0x00063480) blid2_speed_pane_ParamLimits

0x777e,	// (0x00063480) blid2_speed_pane

0x778a,	// (0x0006348c) blid2_tripm_pane_g1_ParamLimits

0x778a,	// (0x0006348c) blid2_tripm_pane_g1

0x779a,	// (0x0006349c) blid2_tripm_pane_g2_ParamLimits

0x779a,	// (0x0006349c) blid2_tripm_pane_g2

0x77a6,	// (0x000634a8) blid2_tripm_pane_g3_ParamLimits

0x77a6,	// (0x000634a8) blid2_tripm_pane_g3

0x77b2,	// (0x000634b4) blid2_tripm_pane_g4_ParamLimits

0x77b2,	// (0x000634b4) blid2_tripm_pane_g4

0x77be,	// (0x000634c0) blid2_tripm_pane_g5_ParamLimits

0x77be,	// (0x000634c0) blid2_tripm_pane_g5

0x0005,

0xf8f4,	// (0x0006b5f6) blid2_tripm_pane_g_ParamLimits

0xf8f4,	// (0x0006b5f6) blid2_tripm_pane_g

0x77da,	// (0x000634dc) blid2_tripm_pane_t1_ParamLimits

0x77da,	// (0x000634dc) blid2_tripm_pane_t1

0x77ee,	// (0x000634f0) blid2_tripm_pane_t2_ParamLimits

0x77ee,	// (0x000634f0) blid2_tripm_pane_t2

0x7800,	// (0x00063502) blid2_tripm_pane_t3_ParamLimits

0x7800,	// (0x00063502) blid2_tripm_pane_t3

0x0003,

0xf901,	// (0x0006b603) blid2_tripm_pane_t_ParamLimits

0xf901,	// (0x0006b603) blid2_tripm_pane_t

0x7832,	// (0x00063534) cell_blid2_satellite_pane_ParamLimits

0x7832,	// (0x00063534) cell_blid2_satellite_pane

0x784c,	// (0x0006354e) cell_blid2_satellite_pane_g1

0xdc9c,	// (0x0006999e) cell_blid2_satellite_pane_t1

0xcc49,	// (0x0006894b) blid2_speed_pane_g1

0xdcaa,	// (0x000699ac) blid2_speed_pane_t1

0xdcb8,	// (0x000699ba) blid2_speed_pane_t2

0x0001,

0x0a01,	// (0x0005c703) blid2_speed_pane_t

0xcc49,	// (0x0006894b) blid2_navig_ring_pane_g1

0x7855,	// (0x00063557) blid2_navig_ring_pane_g2

0x785d,	// (0x0006355f) blid2_navig_ring_pane_g3

0x7865,	// (0x00063567) blid2_navig_ring_pane_g4

0x786d,	// (0x0006356f) blid2_navig_ring_pane_g5

0x0004,

0xf90a,	// (0x0006b60c) blid2_navig_ring_pane_g

0x9beb,	// (0x000658ed) bg_popup_window_pane_cp011

0xdcc6,	// (0x000699c8) popup_blid2_search_window_g1

0xdcce,	// (0x000699d0) popup_blid2_search_window_t1

0xdcdc,	// (0x000699de) popup_blid2_search_window_t2

0x0001,

0x0a11,	// (0x0005c713) popup_blid2_search_window_t

0xab1c,	// (0x0006681e) main_browser_pane_g1

0xa80f,	// (0x00066511) main_browser_pane_ParamLimits

0x44c4,	// (0x000601c6) bg_button_pane_cp011_ParamLimits

0x6831,	// (0x00062533) cell_vitu2_function_pane_g1_ParamLimits

0xc838,	// (0x0006853a) bg_popup_sub_pane_cp22_ParamLimits

0x714e,	// (0x00062e50) input_focus_pane_cp08_ParamLimits

0x7165,	// (0x00062e67) popup_vitu2_query_button_pane_ParamLimits

0x7165,	// (0x00062e67) popup_vitu2_query_button_pane

0x7176,	// (0x00062e78) popup_vitu2_query_input_button_pane

0xd950,	// (0x00069652) popup_vitu2_query_window_g1_ParamLimits

0x7180,	// (0x00062e82) popup_vitu2_query_window_g2_ParamLimits

0xf84b,	// (0x0006b54d) popup_vitu2_query_window_g_ParamLimits

0x9beb,	// (0x000658ed) bg_button_pane_cp026

0x7875,	// (0x00063577) popup_vitu2_query_input_button_pane_g1

0x9beb,	// (0x000658ed) bg_button_pane_cp025

0xdcea,	// (0x000699ec) popup_vitu2_query_button_pane_t1

0x4f43,	// (0x00060c45) main_mp3_pane_t6

0x4f53,	// (0x00060c55) popup_slider_window_cp01

0x645f,	// (0x00062161) cam4_battery_pane

0x653f,	// (0x00062241) cam4_battery_pane_cp02

0x75b1,	// (0x000632b3) cam4_battery_pane_cp01

0x75b1,	// (0x000632b3) cam4_battery_pane_cp03

0xdcf8,	// (0x000699fa) cam4_battery_pane_g1

0xcc49,	// (0x0006894b) cam4_battery_pane_g2

0x0001,

0xf915,	// (0x0006b617) cam4_battery_pane_g

0xcb0c,	// (0x0006880e) popup_blid_sat_info2_window_t11

0xb291,	// (0x00066f93) aid_size_touch_mv_arrow_left_ParamLimits

0xb2ba,	// (0x00066fbc) aid_size_touch_mv_arrow_right_ParamLimits

0xb318,	// (0x0006701a) navi_pane_g1_ParamLimits

0xb324,	// (0x00067026) navi_pane_g2_ParamLimits

0xb352,	// (0x00067054) navi_pane_g3_ParamLimits

0x02db,	// (0x0005bfdd) navi_pane_g_ParamLimits

0x3783,	// (0x0005f485) navi_pane_mv_t1_ParamLimits

0x5a1b,	// (0x0006171d) grid_imed_effect_pane_ParamLimits

0x2138,	// (0x0005de3a) aid_placing_vt_slider_lsc

0xaa6b,	// (0x0006676d) aid_placing_vt_slider_prt

0xa4be,	// (0x000661c0) bg_tb_trans_pane_cp01_ParamLimits

0xcdd8,	// (0x00068ada) popup_image_details_window_g1_ParamLimits

0xcdeb,	// (0x00068aed) popup_image_details_window_g2_ParamLimits

0xce00,	// (0x00068b02) popup_image_details_window_g3_ParamLimits

0xce00,	// (0x00068b02) popup_image_details_window_g3

0x060e,	// (0x0005c310) popup_image_details_window_g_ParamLimits

0xce14,	// (0x00068b16) popup_image_details_window_t1_ParamLimits

0xce26,	// (0x00068b28) popup_image_details_window_t2_ParamLimits

0xce3f,	// (0x00068b41) popup_image_details_window_t3_ParamLimits

0xce53,	// (0x00068b55) popup_image_details_window_t4_ParamLimits

0xce6e,	// (0x00068b70) popup_image_details_window_t5_ParamLimits

0x0615,	// (0x0005c317) popup_image_details_window_t_ParamLimits

0x74d5,	// (0x000631d7) cl_header_name_pane_ParamLimits

0x74d5,	// (0x000631d7) cl_header_name_pane

0x787d,	// (0x0006357f) cl_header_name_pane_t1_ParamLimits

0x787d,	// (0x0006357f) cl_header_name_pane_t1

0x7894,	// (0x00063596) cl_header_name_pane_t2_ParamLimits

0x7894,	// (0x00063596) cl_header_name_pane_t2

0x78be,	// (0x000635c0) cl_header_name_pane_t3_ParamLimits

0x78be,	// (0x000635c0) cl_header_name_pane_t3

0x0002,

0xf91a,	// (0x0006b61c) cl_header_name_pane_t_ParamLimits

0xf91a,	// (0x0006b61c) cl_header_name_pane_t

0xb3e1,	// (0x000670e3) navi_pane_mv_g2_ParamLimits

0xd69e,	// (0x000693a0) field_vitu2_entry_pane_g1_ParamLimits

0xd6aa,	// (0x000693ac) field_vitu2_entry_pane_g2_ParamLimits

0xd6b6,	// (0x000693b8) field_vitu2_entry_pane_g3_ParamLimits

0xd6b6,	// (0x000693b8) field_vitu2_entry_pane_g3

0x0811,	// (0x0005c513) field_vitu2_entry_pane_g_ParamLimits

0x67c5,	// (0x000624c7) cell_vitu2_itu_pane_g1_ParamLimits

0x67d7,	// (0x000624d9) cell_vitu2_itu_pane_g2_ParamLimits

0x67d7,	// (0x000624d9) cell_vitu2_itu_pane_g2

0x0001,

0xf776,	// (0x0006b478) cell_vitu2_itu_pane_g_ParamLimits

0xf776,	// (0x0006b478) cell_vitu2_itu_pane_g

0x44c4,	// (0x000601c6) bg_vkb2_func_pane_cp05_ParamLimits

0x44c4,	// (0x000601c6) bg_vkb2_func_pane_cp05

0x44c4,	// (0x000601c6) bg_vkb2_func_pane_cp03

0x44c4,	// (0x000601c6) bg_vkb2_func_pane_cp04

0x44c4,	// (0x000601c6) bg_vkb2_func_pane_cp10_ParamLimits

0x44c4,	// (0x000601c6) bg_vkb2_func_pane_cp10

0x7477,	// (0x00063179) bg_vkb2_func_pane_cp08

0x745d,	// (0x0006315f) bg_vkb2_func_pane_cp06

0x746b,	// (0x0006316d) bg_vkb2_func_pane_cp07

0xdbf0,	// (0x000698f2) bg_vkb2_func_pane_cp11_ParamLimits

0xdbf0,	// (0x000698f2) bg_vkb2_func_pane_cp11

0xdc05,	// (0x00069907) bg_vkb2_func_pane_cp12_ParamLimits

0xdc05,	// (0x00069907) bg_vkb2_func_pane_cp12

0x9beb,	// (0x000658ed) bg_vkb2_func_pane_cp09

0xd6d6,	// (0x000693d8) bg_vkb2_func_pane_g1

0xac2d,	// (0x0006692f) bg_vkb2_func_pane_g2

0xd6de,	// (0x000693e0) bg_vkb2_func_pane_g3

0xd6e6,	// (0x000693e8) bg_vkb2_func_pane_g4

0xd915,	// (0x00069617) bg_vkb2_func_pane_g5

0xd6fe,	// (0x00069400) bg_vkb2_func_pane_g6

0xd706,	// (0x00069408) bg_vkb2_func_pane_g7

0xd6f6,	// (0x000693f8) bg_vkb2_func_pane_g8

0xac0d,	// (0x0006690f) bg_vkb2_func_pane_g9

0x0008,

0xf921,	// (0x0006b623) bg_vkb2_func_pane_g

0x77cc,	// (0x000634ce) blid2_tripm_pane_g6_ParamLimits

0x77cc,	// (0x000634ce) blid2_tripm_pane_g6

0xd540,	// (0x00069242) mp4_progress_pane_g1

0x7826,	// (0x00063528) blid2_tripm_values_pane_ParamLimits

0x7826,	// (0x00063528) blid2_tripm_values_pane

0x78e3,	// (0x000635e5) blid2_tripm_values_pane_t1

0x78f1,	// (0x000635f3) blid2_tripm_values_pane_t2

0x78ff,	// (0x00063601) blid2_tripm_values_pane_t3

0x790d,	// (0x0006360f) blid2_tripm_values_pane_t4

0x791b,	// (0x0006361d) blid2_tripm_values_pane_t5

0x7929,	// (0x0006362b) blid2_tripm_values_pane_t6

0x7937,	// (0x00063639) blid2_tripm_values_pane_t7

0x7945,	// (0x00063647) blid2_tripm_values_pane_t8

0x7953,	// (0x00063655) blid2_tripm_values_pane_t9

0x0008,

0xf934,	// (0x0006b636) blid2_tripm_values_pane_t

0x2178,	// (0x0005de7a) call_video_pane_t1_ParamLimits

0x2199,	// (0x0005de9b) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0006af70) call_video_pane_t_ParamLimits

0x3cb3,	// (0x0005f9b5) msg_header_pane_g1_ParamLimits

0xb5bb,	// (0x000672bd) msg_header_pane_g2_ParamLimits

0xb5bb,	// (0x000672bd) msg_header_pane_g2

0x0001,

0xf462,	// (0x0006b164) msg_header_pane_g_ParamLimits

0xf462,	// (0x0006b164) msg_header_pane_g

0xa80f,	// (0x00066511) main_clock2_pane_ParamLimits

0x57b4,	// (0x000614b6) grid_clock2_toolbar_pane_ParamLimits

0x57b4,	// (0x000614b6) grid_clock2_toolbar_pane

0x57b4,	// (0x000614b6) listscroll_clock2_pane_ParamLimits

0x57b4,	// (0x000614b6) listscroll_clock2_pane

0x5858,	// (0x0006155a) main_clock2_pane_t3_ParamLimits

0x5858,	// (0x0006155a) main_clock2_pane_t3

0x586a,	// (0x0006156c) main_clock2_pane_t4_ParamLimits

0x586a,	// (0x0006156c) main_clock2_pane_t4

0xdd02,	// (0x00069a04) cell_clock2_toolbar_pane

0xdd0a,	// (0x00069a0c) cell_clock2_toolbar_pane_cp01

0xdd0a,	// (0x00069a0c) cell_clock2_toolbar_pane_cp02

0xdd12,	// (0x00069a14) cell_clock2_toolbar_pane_cp03

0xdd1a,	// (0x00069a1c) list_clock2_pane

0xb207,	// (0x00066f09) scroll_pane_cp10

0xdd22,	// (0x00069a24) list_single_clock2_pane_ParamLimits

0xdd22,	// (0x00069a24) list_single_clock2_pane

0xa9d4,	// (0x000666d6) list_highlight_pane_cp08

0xdd2f,	// (0x00069a31) list_single_clock2_pane_t1

0xdd3d,	// (0x00069a3f) list_single_clock2_pane_t2

0x0001,

0x0a48,	// (0x0005c74a) list_single_clock2_pane_t

0x9beb,	// (0x000658ed) bg_button_pane_cp10

0xdd4b,	// (0x00069a4d) cell_clock2_toolbar_pane_g1

0x3d1a,	// (0x0005fa1c) aid_main_viewer_pane_g1_ParamLimits

0x3d1a,	// (0x0005fa1c) aid_main_viewer_pane_g1

0x3d26,	// (0x0005fa28) aid_main_viewer_pane_g2_ParamLimits

0x3d26,	// (0x0005fa28) aid_main_viewer_pane_g2

0x3d32,	// (0x0005fa34) aid_main_viewer_pane_g3_ParamLimits

0x3d32,	// (0x0005fa34) aid_main_viewer_pane_g3

0x3d43,	// (0x0005fa45) aid_main_viewer_pane_g4_ParamLimits

0x3d43,	// (0x0005fa45) aid_main_viewer_pane_g4

0x0003,

0xf473,	// (0x0006b175) aid_main_viewer_pane_g_ParamLimits

0xf473,	// (0x0006b175) aid_main_viewer_pane_g

0x44b7,	// (0x000601b9) main_calc_pane_ParamLimits

0x44d2,	// (0x000601d4) main_dialer2_pane_ParamLimits

0x11c0,	// (0x0005cec2) main_cam6_pane

0x11c0,	// (0x0005cec2) main_vid6_pane

0x57c0,	// (0x000614c2) listscroll_gen_pane_cp06_ParamLimits

0x57c0,	// (0x000614c2) listscroll_gen_pane_cp06

0x587c,	// (0x0006157e) main_clock2_pane_t5_ParamLimits

0x587c,	// (0x0006157e) main_clock2_pane_t5

0x58c5,	// (0x000615c7) aid_call2_pane_cp10_ParamLimits

0x58d7,	// (0x000615d9) aid_call_pane_cp10_ParamLimits

0xb285,	// (0x00066f87) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb285,	// (0x00066f87) popup_clock_analogue_window_cp10_g2_ParamLimits

0x58e9,	// (0x000615eb) popup_clock_analogue_window_cp10_g3_ParamLimits

0x58e9,	// (0x000615eb) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb285,	// (0x00066f87) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf67f,	// (0x0006b381) popup_clock_analogue_window_cp10_g_ParamLimits

0x58fb,	// (0x000615fd) popup_clock_analogue_window_cp10_t1_ParamLimits

0x60c2,	// (0x00061dc4) cell_dialer2_keypad_pane_g2_ParamLimits

0x60c2,	// (0x00061dc4) cell_dialer2_keypad_pane_g2

0x0001,

0xf710,	// (0x0006b412) cell_dialer2_keypad_pane_g_ParamLimits

0xf710,	// (0x0006b412) cell_dialer2_keypad_pane_g

0x60de,	// (0x00061de0) cell_dialer2_keypad_pane_t1

0x6afc,	// (0x000627fe) main_cset_text2_pane_ParamLimits

0x6afc,	// (0x000627fe) main_cset_text2_pane

0xdb58,	// (0x0006985a) area_vitu2_query_pane_g1_ParamLimits

0x73fc,	// (0x000630fe) area_vitu2_query_pane_g2_ParamLimits

0xf88f,	// (0x0006b591) area_vitu2_query_pane_g_ParamLimits

0xa124,	// (0x00065e26) area_vitu2_query_pane_t7_ParamLimits

0xa124,	// (0x00065e26) area_vitu2_query_pane_t7

0x745d,	// (0x0006315f) bg_button_pane_cp018_ParamLimits

0x746b,	// (0x0006316d) bg_button_pane_cp021_ParamLimits

0x7477,	// (0x00063179) bg_button_pane_cp022_ParamLimits

0x7477,	// (0x00063179) bg_vkb2_func_pane_cp08_ParamLimits

0x745d,	// (0x0006315f) bg_vkb2_func_pane_cp06_ParamLimits

0x746b,	// (0x0006316d) bg_vkb2_func_pane_cp07_ParamLimits

0x7488,	// (0x0006318a) input_focus_pane_cp09_ParamLimits

0x7961,	// (0x00063663) cam6_autofocus_pane_ParamLimits

0x7961,	// (0x00063663) cam6_autofocus_pane

0x7983,	// (0x00063685) cam6_image_uncrop_pane_ParamLimits

0x7983,	// (0x00063685) cam6_image_uncrop_pane

0x79b0,	// (0x000636b2) cam6_indi_pane_ParamLimits

0x79b0,	// (0x000636b2) cam6_indi_pane

0x79ca,	// (0x000636cc) cam6_mode_pane_ParamLimits

0x79ca,	// (0x000636cc) cam6_mode_pane

0x79de,	// (0x000636e0) cam6_timer_pane_ParamLimits

0x79de,	// (0x000636e0) cam6_timer_pane

0x79ea,	// (0x000636ec) cam6_zoom_pane_ParamLimits

0x79ea,	// (0x000636ec) cam6_zoom_pane

0x7a02,	// (0x00063704) cam6_mode_pane_g1_ParamLimits

0x7a02,	// (0x00063704) cam6_mode_pane_g1

0x7a0e,	// (0x00063710) cam6_mode_pane_g2_ParamLimits

0x7a0e,	// (0x00063710) cam6_mode_pane_g2

0x7a1a,	// (0x0006371c) cam6_mode_pane_g3_ParamLimits

0x7a1a,	// (0x0006371c) cam6_mode_pane_g3

0x7a26,	// (0x00063728) cam6_mode_pane_g4_ParamLimits

0x7a26,	// (0x00063728) cam6_mode_pane_g4

0x0003,

0xf947,	// (0x0006b649) cam6_mode_pane_g_ParamLimits

0xf947,	// (0x0006b649) cam6_mode_pane_g

0xd9e0,	// (0x000696e2) bg_tb_trans_pane_cp08_ParamLimits

0xd9e0,	// (0x000696e2) bg_tb_trans_pane_cp08

0xdd53,	// (0x00069a55) cam6_battery_pane_ParamLimits

0xdd53,	// (0x00069a55) cam6_battery_pane

0xdd69,	// (0x00069a6b) cam6_indi_pane_g1_ParamLimits

0xdd69,	// (0x00069a6b) cam6_indi_pane_g1

0xdd7b,	// (0x00069a7d) cam6_indi_pane_g2_ParamLimits

0xdd7b,	// (0x00069a7d) cam6_indi_pane_g2

0xdd8d,	// (0x00069a8f) cam6_indi_pane_g3_ParamLimits

0xdd8d,	// (0x00069a8f) cam6_indi_pane_g3

0x0002,

0x0a56,	// (0x0005c758) cam6_indi_pane_g_ParamLimits

0x0a56,	// (0x0005c758) cam6_indi_pane_g

0xdd9f,	// (0x00069aa1) cam6_indi_pane_t1_ParamLimits

0xdd9f,	// (0x00069aa1) cam6_indi_pane_t1

0x65bf,	// (0x000622c1) cam6_autofocus_pane_g1

0x65b7,	// (0x000622b9) cam6_autofocus_pane_g2

0x65cf,	// (0x000622d1) cam6_autofocus_pane_g3

0x65c7,	// (0x000622c9) cam6_autofocus_pane_g4

0x0003,

0xf950,	// (0x0006b652) cam6_autofocus_pane_g

0xddc5,	// (0x00069ac7) cam6_timer_pane_g1

0xddcd,	// (0x00069acf) cam6_timer_pane_t1

0xdddb,	// (0x00069add) cam6_zoom_cont_pane

0xdde3,	// (0x00069ae5) cam6_zoom_pane_g1

0xddeb,	// (0x00069aed) cam6_zoom_pane_g2

0x7a32,	// (0x00063734) cam6_zoom_pane_g3

0x0002,

0xf959,	// (0x0006b65b) cam6_zoom_pane_g

0xcc49,	// (0x0006894b) cam6_battery_pane_g1

0xcc49,	// (0x0006894b) cam6_battery_pane_g2

0x0001,

0xf5ba,	// (0x0006b2bc) cam6_battery_pane_g

0xddf3,	// (0x00069af5) cam6_zoom_cont_pane_g1

0xddfc,	// (0x00069afe) cam6_zoom_cont_pane_g2

0xde05,	// (0x00069b07) cam6_zoom_cont_pane_g3

0x0002,

0x0a6d,	// (0x0005c76f) cam6_zoom_cont_pane_g

0x7a4f,	// (0x00063751) cam6_mode_pane_cp_ParamLimits

0x7a4f,	// (0x00063751) cam6_mode_pane_cp

0x7a63,	// (0x00063765) cam6_zoom_pane_cp_ParamLimits

0x7a63,	// (0x00063765) cam6_zoom_pane_cp

0x7a7b,	// (0x0006377d) vid6_image_uncrop_cif_pane_ParamLimits

0x7a7b,	// (0x0006377d) vid6_image_uncrop_cif_pane

0x7aa7,	// (0x000637a9) vid6_image_uncrop_nhd_pane_ParamLimits

0x7aa7,	// (0x000637a9) vid6_image_uncrop_nhd_pane

0x7ac4,	// (0x000637c6) vid6_image_uncrop_vga_pane_ParamLimits

0x7ac4,	// (0x000637c6) vid6_image_uncrop_vga_pane

0x7ae3,	// (0x000637e5) vid6_image_uncrop_wvga_pane_ParamLimits

0x7ae3,	// (0x000637e5) vid6_image_uncrop_wvga_pane

0x7b00,	// (0x00063802) vid6_indi_pane_ParamLimits

0x7b00,	// (0x00063802) vid6_indi_pane

0xd9e0,	// (0x000696e2) bg_tb_trans_pane_cp09_ParamLimits

0xd9e0,	// (0x000696e2) bg_tb_trans_pane_cp09

0xde1d,	// (0x00069b1f) cam6_battery_pane_cp_ParamLimits

0xde1d,	// (0x00069b1f) cam6_battery_pane_cp

0xde29,	// (0x00069b2b) vid6_indi_pane_g1_ParamLimits

0xde29,	// (0x00069b2b) vid6_indi_pane_g1

0xde3b,	// (0x00069b3d) vid6_indi_pane_g2_ParamLimits

0xde3b,	// (0x00069b3d) vid6_indi_pane_g2

0xde4d,	// (0x00069b4f) vid6_indi_pane_g3_ParamLimits

0xde4d,	// (0x00069b4f) vid6_indi_pane_g3

0xde62,	// (0x00069b64) vid6_indi_pane_g4_ParamLimits

0xde62,	// (0x00069b64) vid6_indi_pane_g4

0xde77,	// (0x00069b79) vid6_indi_pane_g5_ParamLimits

0xde77,	// (0x00069b79) vid6_indi_pane_g5

0x0004,

0x0a74,	// (0x0005c776) vid6_indi_pane_g_ParamLimits

0x0a74,	// (0x0005c776) vid6_indi_pane_g

0xde91,	// (0x00069b93) vid6_indi_pane_t1_ParamLimits

0xde91,	// (0x00069b93) vid6_indi_pane_t1

0xdea7,	// (0x00069ba9) vid6_indi_pane_t2_ParamLimits

0xdea7,	// (0x00069ba9) vid6_indi_pane_t2

0xdecf,	// (0x00069bd1) vid6_indi_pane_t3_ParamLimits

0xdecf,	// (0x00069bd1) vid6_indi_pane_t3

0xdef7,	// (0x00069bf9) vid6_indi_pane_t4_ParamLimits

0xdef7,	// (0x00069bf9) vid6_indi_pane_t4

0x0003,

0x0a7f,	// (0x0005c781) vid6_indi_pane_t_ParamLimits

0x0a7f,	// (0x0005c781) vid6_indi_pane_t

0xdf1b,	// (0x00069c1d) wait_bar_pane_cp08

0x7b25,	// (0x00063827) main_cset_text2_pane_t1_ParamLimits

0x7b25,	// (0x00063827) main_cset_text2_pane_t1

0x7a3a,	// (0x0006373c) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a3a,	// (0x0006373c) listscroll_gen_pane_cp06_t1

0x11c0,	// (0x0005cec2) main_cam6_set_pane

0x6451,	// (0x00062153) bg_tb_trans_pane_cp06_ParamLimits

0x6467,	// (0x00062169) cam4_indicators_pane_g1_ParamLimits

0x6478,	// (0x0006217a) cam4_indicators_pane_g2_ParamLimits

0xf74d,	// (0x0006b44f) cam4_indicators_pane_g_ParamLimits

0x6496,	// (0x00062198) cam4_indicators_pane_t1_ParamLimits

0x44c4,	// (0x000601c6) bg_tb_trans_pane_cp07_ParamLimits

0x6549,	// (0x0006224b) vid4_indicators_pane_g1_ParamLimits

0x655d,	// (0x0006225f) vid4_indicators_pane_g2_ParamLimits

0x6571,	// (0x00062273) vid4_indicators_pane_g3_ParamLimits

0x6582,	// (0x00062284) vid4_indicators_pane_g4_ParamLimits

0xf75f,	// (0x0006b461) vid4_indicators_pane_g_ParamLimits

0x65a0,	// (0x000622a2) vid4_indicators_pane_t1_ParamLimits

0x75b9,	// (0x000632bb) vid4_progress_pane_g1_ParamLimits

0x75c9,	// (0x000632cb) vid4_progress_pane_g2_ParamLimits

0x75d9,	// (0x000632db) vid4_progress_pane_g3_ParamLimits

0x75eb,	// (0x000632ed) vid4_progress_pane_g4_ParamLimits

0xf8c7,	// (0x0006b5c9) vid4_progress_pane_g_ParamLimits

0x7603,	// (0x00063305) vid4_progress_pane_t1_ParamLimits

0x7619,	// (0x0006331b) vid4_progress_pane_t2_ParamLimits

0x762e,	// (0x00063330) vid4_progress_pane_t3_ParamLimits

0xf8d2,	// (0x0006b5d4) vid4_progress_pane_t_ParamLimits

0x7643,	// (0x00063345) wait_bar_pane_cp07_ParamLimits

0x7b58,	// (0x0006385a) main_cam6_set_pane_g2_ParamLimits

0x7b58,	// (0x0006385a) main_cam6_set_pane_g2

0x7b64,	// (0x00063866) main_cset6_listscroll_pane_ParamLimits

0x7b64,	// (0x00063866) main_cset6_listscroll_pane

0x7b8f,	// (0x00063891) main_cset6_slider_pane_ParamLimits

0x7b8f,	// (0x00063891) main_cset6_slider_pane

0x7b9b,	// (0x0006389d) main_cset6_text2_pane_ParamLimits

0x7b9b,	// (0x0006389d) main_cset6_text2_pane

0xdf2a,	// (0x00069c2c) main_cset6_text_pane

0xdf32,	// (0x00069c34) main_cset_list_pane_copy1_ParamLimits

0xdf32,	// (0x00069c34) main_cset_list_pane_copy1

0xdf42,	// (0x00069c44) scroll_pane_cp028_copy1

0x7bae,	// (0x000638b0) cset_list_set_pane_copy1

0x7bc1,	// (0x000638c3) aid_position_infowindow_above_copy1

0x7bc9,	// (0x000638cb) aid_position_infowindow_below_copy1

0x7bd1,	// (0x000638d3) cset_list_set_pane_g1_copy1

0xa088,	// (0x00065d8a) cset_list_set_pane_g3_copy1_ParamLimits

0xa088,	// (0x00065d8a) cset_list_set_pane_g3_copy1

0xa097,	// (0x00065d99) cset_list_set_pane_t1_copy1_ParamLimits

0xa097,	// (0x00065d99) cset_list_set_pane_t1_copy1

0xa4be,	// (0x000661c0) list_highlight_pane_cp021_copy1_ParamLimits

0xa4be,	// (0x000661c0) list_highlight_pane_cp021_copy1

0xdf4b,	// (0x00069c4d) cset6_slider_pane_ParamLimits

0xdf4b,	// (0x00069c4d) cset6_slider_pane

0xdf77,	// (0x00069c79) main_cset6_slider_pane_g1_ParamLimits

0xdf77,	// (0x00069c79) main_cset6_slider_pane_g1

0x7bd9,	// (0x000638db) main_cset6_slider_pane_g2_ParamLimits

0x7bd9,	// (0x000638db) main_cset6_slider_pane_g2

0xdf9f,	// (0x00069ca1) main_cset6_slider_pane_g3_ParamLimits

0xdf9f,	// (0x00069ca1) main_cset6_slider_pane_g3

0x7c01,	// (0x00063903) main_cset6_slider_pane_g4_ParamLimits

0x7c01,	// (0x00063903) main_cset6_slider_pane_g4

0x7c0d,	// (0x0006390f) main_cset6_slider_pane_g5_ParamLimits

0x7c0d,	// (0x0006390f) main_cset6_slider_pane_g5

0xd805,	// (0x00069507) main_cset6_slider_pane_g7_ParamLimits

0xd805,	// (0x00069507) main_cset6_slider_pane_g7

0xd811,	// (0x00069513) main_cset6_slider_pane_g8_ParamLimits

0xd811,	// (0x00069513) main_cset6_slider_pane_g8

0x7c1b,	// (0x0006391d) main_cset6_slider_pane_g9_ParamLimits

0x7c1b,	// (0x0006391d) main_cset6_slider_pane_g9

0x7c27,	// (0x00063929) main_cset6_slider_pane_g10_ParamLimits

0x7c27,	// (0x00063929) main_cset6_slider_pane_g10

0x7c33,	// (0x00063935) main_cset6_slider_pane_g11_ParamLimits

0x7c33,	// (0x00063935) main_cset6_slider_pane_g11

0x7c3f,	// (0x00063941) main_cset6_slider_pane_g12_ParamLimits

0x7c3f,	// (0x00063941) main_cset6_slider_pane_g12

0x7c4b,	// (0x0006394d) main_cset6_slider_pane_g13_ParamLimits

0x7c4b,	// (0x0006394d) main_cset6_slider_pane_g13

0x7c57,	// (0x00063959) main_cset6_slider_pane_g14_ParamLimits

0x7c57,	// (0x00063959) main_cset6_slider_pane_g14

0x7c63,	// (0x00063965) main_cset6_slider_pane_g15_ParamLimits

0x7c63,	// (0x00063965) main_cset6_slider_pane_g15

0x7c7b,	// (0x0006397d) main_cset6_slider_pane_g16_ParamLimits

0x7c7b,	// (0x0006397d) main_cset6_slider_pane_g16

0x7c89,	// (0x0006398b) main_cset6_slider_pane_g17_ParamLimits

0x7c89,	// (0x0006398b) main_cset6_slider_pane_g17

0x0011,

0xf960,	// (0x0006b662) main_cset6_slider_pane_g_ParamLimits

0xf960,	// (0x0006b662) main_cset6_slider_pane_g

0xdfab,	// (0x00069cad) main_cset6_slider_pane_t1_ParamLimits

0xdfab,	// (0x00069cad) main_cset6_slider_pane_t1

0x7caf,	// (0x000639b1) main_cset6_slider_pane_t2_ParamLimits

0x7caf,	// (0x000639b1) main_cset6_slider_pane_t2

0x7cda,	// (0x000639dc) main_cset6_slider_pane_t3_ParamLimits

0x7cda,	// (0x000639dc) main_cset6_slider_pane_t3

0x7d05,	// (0x00063a07) main_cset6_slider_pane_t4_ParamLimits

0x7d05,	// (0x00063a07) main_cset6_slider_pane_t4

0x7d30,	// (0x00063a32) main_cset6_slider_pane_t5_ParamLimits

0x7d30,	// (0x00063a32) main_cset6_slider_pane_t5

0xdfec,	// (0x00069cee) main_cset6_slider_pane_t7_ParamLimits

0xdfec,	// (0x00069cee) main_cset6_slider_pane_t7

0x7d5d,	// (0x00063a5f) main_cset6_slider_pane_t8_ParamLimits

0x7d5d,	// (0x00063a5f) main_cset6_slider_pane_t8

0x7d81,	// (0x00063a83) main_cset6_slider_pane_t9_ParamLimits

0x7d81,	// (0x00063a83) main_cset6_slider_pane_t9

0x7da5,	// (0x00063aa7) main_cset6_slider_pane_t10_ParamLimits

0x7da5,	// (0x00063aa7) main_cset6_slider_pane_t10

0x7dc9,	// (0x00063acb) main_cset6_slider_pane_t11_ParamLimits

0x7dc9,	// (0x00063acb) main_cset6_slider_pane_t11

0xe022,	// (0x00069d24) main_cset6_slider_pane_t14_ParamLimits

0xe022,	// (0x00069d24) main_cset6_slider_pane_t14

0xe05b,	// (0x00069d5d) main_cset6_slider_pane_t15_ParamLimits

0xe05b,	// (0x00069d5d) main_cset6_slider_pane_t15

0x000b,

0xf985,	// (0x0006b687) main_cset6_slider_pane_t_ParamLimits

0xf985,	// (0x0006b687) main_cset6_slider_pane_t

0xd8c9,	// (0x000695cb) cset_slider_pane_g1_copy1

0xd903,	// (0x00069605) cset_slider_pane_g2_copy1

0xd90c,	// (0x0006960e) cset_slider_pane_g3_copy1

0x9beb,	// (0x000658ed) bg_popup_sub_pane_cp011_copy1

0xe094,	// (0x00069d96) main_cset_text_pane_g1_copy1

0xd964,	// (0x00069666) main_cset_text_pane_t1_copy1

0xd972,	// (0x00069674) main_cset_text_pane_t2_copy1

0xd980,	// (0x00069682) main_cset_text_pane_t3_copy1

0xd98e,	// (0x00069690) main_cset_text_pane_t4_copy1

0xd99c,	// (0x0006969e) main_cset_text_pane_t5_copy1

0xe09c,	// (0x00069d9e) main_cset_text_pane_t6_copy1

0xe0aa,	// (0x00069dac) main_cset_text_pane_t7_copy1

0x7ebe,	// (0x00063bc0) main_cset_text2_pane_t1_copy1

0x44c4,	// (0x000601c6) main_ncimui_pane

0x4523,	// (0x00060225) popup_query_ncimui_window_ParamLimits

0x4523,	// (0x00060225) popup_query_ncimui_window

0xa053,	// (0x00065d55) field_cale_ev2_pane_g4_ParamLimits

0xa053,	// (0x00065d55) field_cale_ev2_pane_g4

0x5de2,	// (0x00061ae4) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5de2,	// (0x00061ae4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6f0,	// (0x0006b3f2) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6f0,	// (0x0006b3f2) cell_video_dialer_keypad_pane_g

0x5dfa,	// (0x00061afc) cell_video_dialer_keypad_pane_t1

0x9beb,	// (0x000658ed) bg_popup_window_pane_cp012

0xb0c6,	// (0x00066dc8) heading_pane_cp06

0xe0d6,	// (0x00069dd8) ncim_query_content_pane

0x9beb,	// (0x000658ed) bg_popup_heading_pane_cp01

0xe0de,	// (0x00069de0) ncim_heading_pane_t1

0xe0ec,	// (0x00069dee) ncim_indicator_popup_pane

0xe0fe,	// (0x00069e00) ncim_query_button_pane

0xe112,	// (0x00069e14) ncim_query_content_pane_t1

0xe124,	// (0x00069e26) ncim_query_content_pane_t2

0x0005,

0xf9c9,	// (0x0006b6cb) ncim_query_content_pane_t

0xe15e,	// (0x00069e60) ncim_query_list_pane

0xe170,	// (0x00069e72) ncim_query_popup_pane

0xe0ec,	// (0x00069dee) ncim_indicator_popup_pane_ParamLimits

0x8011,	// (0x00063d13) ncim_query_content_pane_g1_ParamLimits

0x8011,	// (0x00063d13) ncim_query_content_pane_g1

0xe112,	// (0x00069e14) ncim_query_content_pane_t1_ParamLimits

0xe124,	// (0x00069e26) ncim_query_content_pane_t2_ParamLimits

0x801d,	// (0x00063d1f) ncim_query_content_pane_t3_ParamLimits

0x801d,	// (0x00063d1f) ncim_query_content_pane_t3

0x803a,	// (0x00063d3c) ncim_query_content_pane_t4_ParamLimits

0x803a,	// (0x00063d3c) ncim_query_content_pane_t4

0x8057,	// (0x00063d59) ncim_query_content_pane_t5_ParamLimits

0x8057,	// (0x00063d59) ncim_query_content_pane_t5

0xe136,	// (0x00069e38) ncim_query_content_pane_t6_ParamLimits

0xe136,	// (0x00069e38) ncim_query_content_pane_t6

0xf9c9,	// (0x0006b6cb) ncim_query_content_pane_t_ParamLimits

0xe15e,	// (0x00069e60) ncim_query_list_pane_ParamLimits

0xe170,	// (0x00069e72) ncim_query_popup_pane_ParamLimits

0xe184,	// (0x00069e86) wait_bar_pane_cp04

0x9beb,	// (0x000658ed) input_focus_pane_cp011

0xe18c,	// (0x00069e8e) ncim_query_popup_pane_t1

0xe19a,	// (0x00069e9c) ncim_list_query_list_pane_ParamLimits

0xe19a,	// (0x00069e9c) ncim_list_query_list_pane

0x9beb,	// (0x000658ed) bg_button_pane_cp027

0xe1a7,	// (0x00069ea9) ncim_query_button_pane_g1

0x9beb,	// (0x000658ed) list_highlight_pane_cp012

0xe1b1,	// (0x00069eb3) ncim_list_query_list_pane_g1

0xe1b9,	// (0x00069ebb) ncim_list_query_list_pane_t1

0x6487,	// (0x00062189) cam4_indicators_pane_g3_ParamLimits

0x6487,	// (0x00062189) cam4_indicators_pane_g3

0x658e,	// (0x00062290) vid4_indicators_pane_g5_ParamLimits

0x658e,	// (0x00062290) vid4_indicators_pane_g5

0x75f7,	// (0x000632f9) vid4_progress_pane_g5_ParamLimits

0x75f7,	// (0x000632f9) vid4_progress_pane_g5

0x7efd,	// (0x00063bff) main_ncimui_pane_g1

0x7f65,	// (0x00063c67) ncimui_group_query_pane_ParamLimits

0x7f65,	// (0x00063c67) ncimui_group_query_pane

0x7fad,	// (0x00063caf) ncimui_list_pane_ParamLimits

0x7fad,	// (0x00063caf) ncimui_list_pane

0x7fd4,	// (0x00063cd6) ncimui_text_pane_ParamLimits

0x7fd4,	// (0x00063cd6) ncimui_text_pane

0x8074,	// (0x00063d76) ncimui_text_pane_t1_ParamLimits

0x8074,	// (0x00063d76) ncimui_text_pane_t1

0xe1c7,	// (0x00069ec9) ncimui_list_single_graphic_pane_ParamLimits

0xe1c7,	// (0x00069ec9) ncimui_list_single_graphic_pane

0x8093,	// (0x00063d95) ncimui_query_pane_ParamLimits

0x8093,	// (0x00063d95) ncimui_query_pane

0x9beb,	// (0x000658ed) list_highlight_pane_cp013

0xe1d7,	// (0x00069ed9) ncim_list_query_list_pane_t1_copy1

0xe1b1,	// (0x00069eb3) ncim_list_single_graphic_pane_g1

0xe1e5,	// (0x00069ee7) ncim_query_button_pane_cp01

0xe1f1,	// (0x00069ef3) ncim_query_entry_pane_ParamLimits

0xe1f1,	// (0x00069ef3) ncim_query_entry_pane

0xe204,	// (0x00069f06) ncimui_query_pane_g1

0xe210,	// (0x00069f12) ncimui_query_pane_t1_ParamLimits

0xe210,	// (0x00069f12) ncimui_query_pane_t1

0xa4be,	// (0x000661c0) input_focus_pane_cp012

0xe229,	// (0x00069f2b) ncim_query_entry_pane_t1

0xa80f,	// (0x00066511) main_im_pane_ParamLimits

0x44c4,	// (0x000601c6) main_mobtv_pane_ParamLimits

0x44c4,	// (0x000601c6) main_mobtv_pane

0x7c97,	// (0x00063999) main_cset6_slider_pane_g18_ParamLimits

0x7c97,	// (0x00063999) main_cset6_slider_pane_g18

0x7ca3,	// (0x000639a5) main_cset6_slider_pane_g19_ParamLimits

0x7ca3,	// (0x000639a5) main_cset6_slider_pane_g19

0xd6b6,	// (0x000693b8) bg_main_mobtv_pane_ParamLimits

0xd6b6,	// (0x000693b8) bg_main_mobtv_pane

0x80a6,	// (0x00063da8) main_mobtv_info_pane

0x80b1,	// (0x00063db3) main_mobtv_loading_pane_ParamLimits

0x80b1,	// (0x00063db3) main_mobtv_loading_pane

0xe23b,	// (0x00069f3d) main_mobtv_pg_channel_list_pane

0xe245,	// (0x00069f47) main_mobtv_pg_hdr_pane

0x80be,	// (0x00063dc0) main_mobtv_programe_curr_pane_ParamLimits

0x80be,	// (0x00063dc0) main_mobtv_programe_curr_pane

0x80cb,	// (0x00063dcd) main_mobtv_programe_next_pane_ParamLimits

0x80cb,	// (0x00063dcd) main_mobtv_programe_next_pane

0xe24e,	// (0x00069f50) popup_mobtv_noti_window

0xcc49,	// (0x0006894b) main_tv_pg_hdr_pane_g1

0xe256,	// (0x00069f58) main_tv_pg_hdr_pane_g2

0xe25e,	// (0x00069f60) main_tv_pg_hdr_pane_g3

0xe266,	// (0x00069f68) main_tv_pg_hdr_pane_g4

0xe26e,	// (0x00069f70) main_tv_pg_hdr_pane_g5

0xe278,	// (0x00069f7a) main_tv_pg_hdr_pane_g6

0xe282,	// (0x00069f84) main_tv_pg_hdr_pane_g7

0xe28c,	// (0x00069f8e) main_tv_pg_hdr_pane_g8

0xe296,	// (0x00069f98) main_tv_pg_hdr_pane_g9

0xe2a0,	// (0x00069fa2) main_tv_pg_hdr_pane_g10

0xe2aa,	// (0x00069fac) main_tv_pg_hdr_pane_g11

0x000a,

0xf9d6,	// (0x0006b6d8) main_tv_pg_hdr_pane_g

0xe2b4,	// (0x00069fb6) main_tv_pg_hdr_pane_t1

0xe2c2,	// (0x00069fc4) main_tv_pg_hdr_pane_t2

0xe2d0,	// (0x00069fd2) main_tv_pg_hdr_pane_t3

0xe2e0,	// (0x00069fe2) main_tv_pg_hdr_pane_t4

0xe2f0,	// (0x00069ff2) main_tv_pg_hdr_pane_t5

0x0004,

0x0b15,	// (0x0005c817) main_tv_pg_hdr_pane_t

0xe300,	// (0x0006a002) single_mobtv_pg_channel_pane_ParamLimits

0xe300,	// (0x0006a002) single_mobtv_pg_channel_pane

0xe312,	// (0x0006a014) single_mobtv_pg_channel_table_pane

0xe31b,	// (0x0006a01d) single_mobtv_pg_channel_thumb_pane

0xe324,	// (0x0006a026) single_tv_pg_channel_pane_g1

0xe32d,	// (0x0006a02f) single_tv_pg_channel_pane_g2

0x0001,

0x0b20,	// (0x0005c822) single_tv_pg_channel_pane_g

0xceb8,	// (0x00068bba) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xceb8,	// (0x00068bba) bg_single_mobtv_pg_channel_thumb_pane

0xe336,	// (0x0006a038) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe336,	// (0x0006a038) single_mobtv_pg_channel_thumb_pane_g1

0xe344,	// (0x0006a046) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe344,	// (0x0006a046) single_mobtv_pg_channel_thumb_pane_g2

0xe350,	// (0x0006a052) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe350,	// (0x0006a052) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0b25,	// (0x0005c827) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0b25,	// (0x0005c827) single_mobtv_pg_channel_thumb_pane_g

0xe35c,	// (0x0006a05e) single_mobtv_pg_channel_thumb_pane_t1

0xe36a,	// (0x0006a06c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0b2c,	// (0x0005c82e) single_mobtv_pg_channel_thumb_pane_t

0xcc49,	// (0x0006894b) bg_single_mobtv_pg_channel_table_pane_g1

0xcc49,	// (0x0006894b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf5ba,	// (0x0006b2bc) bg_single_mobtv_pg_channel_table_pane_g

0xe378,	// (0x0006a07a) single_mobtv_pg_channel_table_pane_t1

0xe386,	// (0x0006a088) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0b31,	// (0x0005c833) single_mobtv_pg_channel_table_pane_t

0x80e0,	// (0x00063de2) main_mobtv_info_pane_g1_ParamLimits

0x80e0,	// (0x00063de2) main_mobtv_info_pane_g1

0x80fc,	// (0x00063dfe) main_mobtv_info_pane_t1_ParamLimits

0x80fc,	// (0x00063dfe) main_mobtv_info_pane_t1

0x8174,	// (0x00063e76) main_mobtv_info_pane_t2_ParamLimits

0x8174,	// (0x00063e76) main_mobtv_info_pane_t2

0x0002,

0xf9f2,	// (0x0006b6f4) main_mobtv_info_pane_t_ParamLimits

0xf9f2,	// (0x0006b6f4) main_mobtv_info_pane_t

0x8203,	// (0x00063f05) wait_bar_pane_cp05

0x8215,	// (0x00063f17) main_mobtv_loading_pane_g1_ParamLimits

0x8215,	// (0x00063f17) main_mobtv_loading_pane_g1

0x8223,	// (0x00063f25) main_mobtv_loading_pane_g2_ParamLimits

0x8223,	// (0x00063f25) main_mobtv_loading_pane_g2

0x822f,	// (0x00063f31) main_mobtv_loading_pane_g3_ParamLimits

0x822f,	// (0x00063f31) main_mobtv_loading_pane_g3

0x0002,

0xf9f9,	// (0x0006b6fb) main_mobtv_loading_pane_g_ParamLimits

0xf9f9,	// (0x0006b6fb) main_mobtv_loading_pane_g

0xe394,	// (0x0006a096) main_mobtv_loading_pane_t1_ParamLimits

0xe394,	// (0x0006a096) main_mobtv_loading_pane_t1

0xe3ac,	// (0x0006a0ae) main_mobtv_loading_pane_t2_ParamLimits

0xe3ac,	// (0x0006a0ae) main_mobtv_loading_pane_t2

0x0001,

0x0b49,	// (0x0005c84b) main_mobtv_loading_pane_t_ParamLimits

0x0b49,	// (0x0005c84b) main_mobtv_loading_pane_t

0x823d,	// (0x00063f3f) wait_bar_pane_cp06_ParamLimits

0x823d,	// (0x00063f3f) wait_bar_pane_cp06

0xe3d0,	// (0x0006a0d2) main_mobtv_programe_curr_pane_t1

0xe3de,	// (0x0006a0e0) main_mobtv_programe_curr_pane_t2

0x0001,

0x0b4e,	// (0x0005c850) main_mobtv_programe_curr_pane_t

0xe3ec,	// (0x0006a0ee) main_mobtv_programe_next_pane_t1

0xe3fa,	// (0x0006a0fc) main_mobtv_programe_next_pane_t2

0xe408,	// (0x0006a10a) main_mobtv_programe_next_pane_t3

0x0002,

0x0b53,	// (0x0005c855) main_mobtv_programe_next_pane_t

0x9beb,	// (0x000658ed) bg_popup_mobtv_noti_window_pane

0xe416,	// (0x0006a118) popup_mobtv_noti_window_g1

0xe41e,	// (0x0006a120) popup_mobtv_noti_window_t1

0xe42c,	// (0x0006a12e) popup_mobtv_noti_window_t2

0x0001,

0x0b5a,	// (0x0005c85c) popup_mobtv_noti_window_t

0xcc49,	// (0x0006894b) bg_popup_mobtv_noti_window_pane_g1

0x11c0,	// (0x0005cec2) sc_clock_pane

0x11c0,	// (0x0005cec2) main_fs_bigclock_pane

0x7814,	// (0x00063516) blid2_tripm_pane_t4_ParamLimits

0x7814,	// (0x00063516) blid2_tripm_pane_t4

0x8249,	// (0x00063f4b) sc_clock_pane_g1_ParamLimits

0x8249,	// (0x00063f4b) sc_clock_pane_g1

0x8257,	// (0x00063f59) sc_clock_pane_t1_ParamLimits

0x8257,	// (0x00063f59) sc_clock_pane_t1

0x826a,	// (0x00063f6c) sc_clock_pane_t2_ParamLimits

0x826a,	// (0x00063f6c) sc_clock_pane_t2

0x827c,	// (0x00063f7e) sc_clock_pane_t3_ParamLimits

0x827c,	// (0x00063f7e) sc_clock_pane_t3

0x0004,

0xfa00,	// (0x0006b702) sc_clock_pane_t_ParamLimits

0xfa00,	// (0x0006b702) sc_clock_pane_t

0x919a,	// (0x00064e9c) main_fs_bigclock_indicator_pane_ParamLimits

0x919a,	// (0x00064e9c) main_fs_bigclock_indicator_pane

0x8305,	// (0x00064007) main_fs_bigclock_pane_g1_ParamLimits

0x8305,	// (0x00064007) main_fs_bigclock_pane_g1

0x91a6,	// (0x00064ea8) main_fs_bigclock_pane_t1_ParamLimits

0x91a6,	// (0x00064ea8) main_fs_bigclock_pane_t1

0x91b8,	// (0x00064eba) main_fs_bigclock_pane_t2_ParamLimits

0x91b8,	// (0x00064eba) main_fs_bigclock_pane_t2

0x91cc,	// (0x00064ece) main_fs_bigclock_pane_t3_ParamLimits

0x91cc,	// (0x00064ece) main_fs_bigclock_pane_t3

0x0002,

0xfba8,	// (0x0006b8aa) main_fs_bigclock_pane_t_ParamLimits

0xfba8,	// (0x0006b8aa) main_fs_bigclock_pane_t

0xec87,	// (0x0006a989) main_fs_bigclock_indicator_pane_g1

0xe106,	// (0x00069e08) ncim_query_content_pane_g2_ParamLimits

0xe106,	// (0x00069e08) ncim_query_content_pane_g2

0x0001,

0xf9c4,	// (0x0006b6c6) ncim_query_content_pane_g_ParamLimits

0xf9c4,	// (0x0006b6c6) ncim_query_content_pane_g

0x8290,	// (0x00063f92) sc_clock_pane_t4_ParamLimits

0x8290,	// (0x00063f92) sc_clock_pane_t4

0x44c4,	// (0x000601c6) main_radioblah_pane

0xd629,	// (0x0006932b) cell_call4_button_pane_t1_copy1_ParamLimits

0xd629,	// (0x0006932b) cell_call4_button_pane_t1_copy1

0x7f17,	// (0x00063c19) main_ncimui_pane_t1_ParamLimits

0x7f17,	// (0x00063c19) main_ncimui_pane_t1

0x7f31,	// (0x00063c33) main_ncimui_pane_t2_ParamLimits

0x7f31,	// (0x00063c33) main_ncimui_pane_t2

0x0002,

0xf9bd,	// (0x0006b6bf) main_ncimui_pane_t_ParamLimits

0xf9bd,	// (0x0006b6bf) main_ncimui_pane_t

0xe570,	// (0x0006a272) main_radioblah_anim_pane_ParamLimits

0xe570,	// (0x0006a272) main_radioblah_anim_pane

0xe581,	// (0x0006a283) main_radioblah_info_pane_ParamLimits

0xe581,	// (0x0006a283) main_radioblah_info_pane

0xe595,	// (0x0006a297) main_radioblah_pane_t1_ParamLimits

0xe595,	// (0x0006a297) main_radioblah_pane_t1

0xe5b1,	// (0x0006a2b3) main_radioblah_pane_t2_ParamLimits

0xe5b1,	// (0x0006a2b3) main_radioblah_pane_t2

0x0003,

0x0b80,	// (0x0005c882) main_radioblah_pane_t_ParamLimits

0x0b80,	// (0x0005c882) main_radioblah_pane_t

0x8357,	// (0x00064059) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8357,	// (0x00064059) main_radioblah_rocker_ctrl_pane

0xe5f9,	// (0x0006a2fb) main_radioblah_info_pane_t1_ParamLimits

0xe5f9,	// (0x0006a2fb) main_radioblah_info_pane_t1

0x839c,	// (0x0006409e) main_radioblah_info_pane_t2_ParamLimits

0x839c,	// (0x0006409e) main_radioblah_info_pane_t2

0x0003,

0xfa0b,	// (0x0006b70d) main_radioblah_info_pane_t_ParamLimits

0xfa0b,	// (0x0006b70d) main_radioblah_info_pane_t

0xcc49,	// (0x0006894b) main_radioblah_rocker_ctrl_pane_g1

0x844c,	// (0x0006414e) main_radioblah_rocker_ctrl_pane_g2

0x8454,	// (0x00064156) main_radioblah_rocker_ctrl_pane_g3

0x845c,	// (0x0006415e) main_radioblah_rocker_ctrl_pane_g4

0x8464,	// (0x00064166) main_radioblah_rocker_ctrl_pane_g5

0x846c,	// (0x0006416e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa14,	// (0x0006b716) main_radioblah_rocker_ctrl_pane_g

0x7ebe,	// (0x00063bc0) main_cset_text2_pane_t1_copy1_ParamLimits

0x63a7,	// (0x000620a9) cam4_image_uncrop_qvga_pane

0x64fc,	// (0x000621fe) vid4_image_uncrop_qcif_pane

0x79a2,	// (0x000636a4) cam6_image_uncrop_qvga_pane_ParamLimits

0x79a2,	// (0x000636a4) cam6_image_uncrop_qvga_pane

0xde0d,	// (0x00069b0f) vid6_image_uncrop_qcif_pane_ParamLimits

0xde0d,	// (0x00069b0f) vid6_image_uncrop_qcif_pane

0x9beb,	// (0x000658ed) bg_popup_preview_window_pane_cp03

0xe0b8,	// (0x00069dba) list_cset_text2_pane

0xe0c0,	// (0x00069dc2) main_cset6_text2_pane_g1

0xe0c8,	// (0x00069dca) main_cset6_text2_pane_t1

0x8474,	// (0x00064176) list_cset_text2_pane_t1_ParamLimits

0x8474,	// (0x00064176) list_cset_text2_pane_t1

0x44c4,	// (0x000601c6) main_radioblah_pane_ParamLimits

0x81ef,	// (0x00063ef1) main_mobtv_info_pane_t3_ParamLimits

0x81ef,	// (0x00063ef1) main_mobtv_info_pane_t3

0x8345,	// (0x00064047) main_radioblah_pane_g1

0x8370,	// (0x00064072) main_radioblah_info_pane_g1

0x83f1,	// (0x000640f3) main_radioblah_info_pane_t3_ParamLimits

0x83f1,	// (0x000640f3) main_radioblah_info_pane_t3

0x31da,	// (0x0005eedc) highlight_cell_cale_month_pane_ParamLimits

0x31da,	// (0x0005eedc) highlight_cell_cale_month_pane

0x11c0,	// (0x0005cec2) main_phob_fisheye_pane

0xcfb4,	// (0x00068cb6) scroll_pane_cp0031_ParamLimits

0xcfb4,	// (0x00068cb6) scroll_pane_cp0031

0xdf1b,	// (0x00069c1d) wait_bar_pane_cp08_ParamLimits

0x7bae,	// (0x000638b0) cset_list_set_pane_copy1_ParamLimits

0xe633,	// (0x0006a335) highlight_cell_cale_month_pane_g1

0x8491,	// (0x00064193) highlight_cell_cale_month_pane_t1

0xdbac,	// (0x000698ae) list_gen_pane_cp01

0xd7f0,	// (0x000694f2) scroll_pane_01

0x849f,	// (0x000641a1) list_single_double_fisheye_pane

0x84a8,	// (0x000641aa) list_double_fisheye_pane_g1_ParamLimits

0x84a8,	// (0x000641aa) list_double_fisheye_pane_g1

0x84b4,	// (0x000641b6) list_double_fisheye_pane_g2_ParamLimits

0x84b4,	// (0x000641b6) list_double_fisheye_pane_g2

0x84c8,	// (0x000641ca) list_double_fisheye_pane_g3_ParamLimits

0x84c8,	// (0x000641ca) list_double_fisheye_pane_g3

0x0004,

0xfa21,	// (0x0006b723) list_double_fisheye_pane_g_ParamLimits

0xfa21,	// (0x0006b723) list_double_fisheye_pane_g

0x84f1,	// (0x000641f3) list_double_fisheye_pane_t1_ParamLimits

0x84f1,	// (0x000641f3) list_double_fisheye_pane_t1

0x850c,	// (0x0006420e) list_double_fisheye_pane_t2_ParamLimits

0x850c,	// (0x0006420e) list_double_fisheye_pane_t2

0x0001,

0xfa2c,	// (0x0006b72e) list_double_fisheye_pane_t_ParamLimits

0xfa2c,	// (0x0006b72e) list_double_fisheye_pane_t

0x11c0,	// (0x0005cec2) main_call5_pane

0x82b6,	// (0x00063fb8) sc_swipe_pane_ParamLimits

0x82b6,	// (0x00063fb8) sc_swipe_pane

0x853a,	// (0x0006423c) call5_image_pane_ParamLimits

0x853a,	// (0x0006423c) call5_image_pane

0x854a,	// (0x0006424c) call5_swipe_1_pane_ParamLimits

0x854a,	// (0x0006424c) call5_swipe_1_pane

0x8556,	// (0x00064258) call5_swipe_2_pane_ParamLimits

0x8556,	// (0x00064258) call5_swipe_2_pane

0x8570,	// (0x00064272) popup_call5_audio_first_window_ParamLimits

0x8570,	// (0x00064272) popup_call5_audio_first_window

0xceb8,	// (0x00068bba) call5_swipe_1_pane_g1_ParamLimits

0xceb8,	// (0x00068bba) call5_swipe_1_pane_g1

0xe63b,	// (0x0006a33d) call5_swipe_1_pane_g2_ParamLimits

0xe63b,	// (0x0006a33d) call5_swipe_1_pane_g2

0x0001,

0x0baf,	// (0x0005c8b1) call5_swipe_1_pane_g_ParamLimits

0x0baf,	// (0x0005c8b1) call5_swipe_1_pane_g

0xe647,	// (0x0006a349) call5_swipe_1_pane_t1_ParamLimits

0xe647,	// (0x0006a349) call5_swipe_1_pane_t1

0xceb8,	// (0x00068bba) call5_swipe_2_pane_g1_ParamLimits

0xceb8,	// (0x00068bba) call5_swipe_2_pane_g1

0xe65c,	// (0x0006a35e) call5_swipe_2_pane_g2_ParamLimits

0xe65c,	// (0x0006a35e) call5_swipe_2_pane_g2

0x0001,

0x0bb4,	// (0x0005c8b6) call5_swipe_2_pane_g_ParamLimits

0x0bb4,	// (0x0005c8b6) call5_swipe_2_pane_g

0xe668,	// (0x0006a36a) call5_swipe_2_pane_t1_ParamLimits

0xe668,	// (0x0006a36a) call5_swipe_2_pane_t1

0xe67d,	// (0x0006a37f) sc_swipe_pane_g1_ParamLimits

0xe67d,	// (0x0006a37f) sc_swipe_pane_g1

0xe68a,	// (0x0006a38c) sc_swipe_pane_g2_ParamLimits

0xe68a,	// (0x0006a38c) sc_swipe_pane_g2

0x0001,

0x0bb9,	// (0x0005c8bb) sc_swipe_pane_g_ParamLimits

0x0bb9,	// (0x0005c8bb) sc_swipe_pane_g

0xe696,	// (0x0006a398) sc_swipe_pane_t1_ParamLimits

0xe696,	// (0x0006a398) sc_swipe_pane_t1

0x11c0,	// (0x0005cec2) main_cmail_launcher_pane

0x857e,	// (0x00064280) aid_size_cell_cmail_l_ParamLimits

0x857e,	// (0x00064280) aid_size_cell_cmail_l

0x858e,	// (0x00064290) grid_cmail_l_pane_ParamLimits

0x858e,	// (0x00064290) grid_cmail_l_pane

0x859e,	// (0x000642a0) cell_cmail_l_pane_ParamLimits

0x859e,	// (0x000642a0) cell_cmail_l_pane

0x85b2,	// (0x000642b4) cell_cmail_l_pane_g1_ParamLimits

0x85b2,	// (0x000642b4) cell_cmail_l_pane_g1

0x85be,	// (0x000642c0) cell_cmail_l_pane_t1_ParamLimits

0x85be,	// (0x000642c0) cell_cmail_l_pane_t1

0xe6ab,	// (0x0006a3ad) cell_cmail_l_pane_t2_ParamLimits

0xe6ab,	// (0x0006a3ad) cell_cmail_l_pane_t2

0x0001,

0xfa31,	// (0x0006b733) cell_cmail_l_pane_t_ParamLimits

0xfa31,	// (0x0006b733) cell_cmail_l_pane_t

0xa4be,	// (0x000661c0) grid_highlight_pane_cp018_ParamLimits

0xa4be,	// (0x000661c0) grid_highlight_pane_cp018

0x1016,	// (0x0005cd18) main2_pane_ParamLimits

0x1016,	// (0x0005cd18) main2_pane

0xa8a8,	// (0x000665aa) popup_sp_fs_action_menu_bg_pane_g1

0xa8b0,	// (0x000665b2) popup_sp_fs_action_menu_bg_pane_g2

0xa8b8,	// (0x000665ba) popup_sp_fs_action_menu_bg_pane_g3

0xa8c0,	// (0x000665c2) popup_sp_fs_action_menu_bg_pane_g4

0xa8c8,	// (0x000665ca) popup_sp_fs_action_menu_bg_pane_g5

0xa8d0,	// (0x000665d2) popup_sp_fs_action_menu_bg_pane_g6

0xa8d8,	// (0x000665da) popup_sp_fs_action_menu_bg_pane_g7

0xa8e0,	// (0x000665e2) popup_sp_fs_action_menu_bg_pane_g8

0xa8e8,	// (0x000665ea) popup_sp_fs_action_menu_bg_pane_g9

0xa8f0,	// (0x000665f2) popup_sp_fs_action_menu_bg_pane_g10

0xa8f0,	// (0x000665f2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0006ae8c) popup_sp_fs_action_menu_bg_pane_g

0x1fae,	// (0x0005dcb0) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1fae,	// (0x0005dcb0) list_medium_line_x2_t3_g3_g1

0x1fba,	// (0x0005dcbc) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1fba,	// (0x0005dcbc) list_medium_line_x2_t3_g3_g2

0x1fc6,	// (0x0005dcc8) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1fc6,	// (0x0005dcc8) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0006af3a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0006af3a) list_medium_line_x2_t3_g3_g

0x1fd2,	// (0x0005dcd4) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1fd2,	// (0x0005dcd4) list_medium_line_x2_t3_g3_t1

0x1fe7,	// (0x0005dce9) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1fe7,	// (0x0005dce9) list_medium_line_x2_t3_g3_t2

0x1ff9,	// (0x0005dcfb) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1ff9,	// (0x0005dcfb) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0006af41) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0006af41) list_medium_line_x2_t3_g3_t

0x1fae,	// (0x0005dcb0) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1fae,	// (0x0005dcb0) list_medium_line_x2_t3_g2_g1

0x1fc6,	// (0x0005dcc8) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1fc6,	// (0x0005dcc8) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0006af48) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0006af48) list_medium_line_x2_t3_g2_g

0x200e,	// (0x0005dd10) list_medium_line_x2_t3_g2_t1_ParamLimits

0x200e,	// (0x0005dd10) list_medium_line_x2_t3_g2_t1

0x2024,	// (0x0005dd26) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2024,	// (0x0005dd26) list_medium_line_x2_t3_g2_t2

0x2036,	// (0x0005dd38) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2036,	// (0x0005dd38) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0006af4d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0006af4d) list_medium_line_x2_t3_g2_t

0x1fae,	// (0x0005dcb0) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1fae,	// (0x0005dcb0) list_medium_line_x2_t4_g4_g1

0x2053,	// (0x0005dd55) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2053,	// (0x0005dd55) list_medium_line_x2_t4_g4_g2

0x1fba,	// (0x0005dcbc) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1fba,	// (0x0005dcbc) list_medium_line_x2_t4_g4_g3

0x205f,	// (0x0005dd61) list_medium_line_x2_t4_g4_g4_ParamLimits

0x205f,	// (0x0005dd61) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0006af54) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0006af54) list_medium_line_x2_t4_g4_g

0x206b,	// (0x0005dd6d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x206b,	// (0x0005dd6d) list_medium_line_x2_t4_g4_t1

0x2085,	// (0x0005dd87) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2085,	// (0x0005dd87) list_medium_line_x2_t4_g4_t2

0x209b,	// (0x0005dd9d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x209b,	// (0x0005dd9d) list_medium_line_x2_t4_g4_t3

0x20b0,	// (0x0005ddb2) list_medium_line_x2_t4_g4_t4_ParamLimits

0x20b0,	// (0x0005ddb2) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0006af5d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0006af5d) list_medium_line_x2_t4_g4_t

0x1fae,	// (0x0005dcb0) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1fae,	// (0x0005dcb0) list_medium_line_x2_t2_g4_g1

0x2053,	// (0x0005dd55) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2053,	// (0x0005dd55) list_medium_line_x2_t2_g4_g2

0x1fba,	// (0x0005dcbc) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1fba,	// (0x0005dcbc) list_medium_line_x2_t2_g4_g3

0x1fc6,	// (0x0005dcc8) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1fc6,	// (0x0005dcc8) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0006afc4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0006afc4) list_medium_line_x2_t2_g4_g

0x3200,	// (0x0005ef02) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3200,	// (0x0005ef02) list_medium_line_x2_t2_g4_t1

0x1ff9,	// (0x0005dcfb) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1ff9,	// (0x0005dcfb) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0006afcd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0006afcd) list_medium_line_x2_t2_g4_t

0x1fae,	// (0x0005dcb0) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1fae,	// (0x0005dcb0) list_medium_line_x2_t2_g3_g1

0x1fba,	// (0x0005dcbc) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1fba,	// (0x0005dcbc) list_medium_line_x2_t2_g3_g2

0x1fc6,	// (0x0005dcc8) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1fc6,	// (0x0005dcc8) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0006af3a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0006af3a) list_medium_line_x2_t2_g3_g

0x3215,	// (0x0005ef17) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3215,	// (0x0005ef17) list_medium_line_x2_t2_g3_t1

0x1ff9,	// (0x0005dcfb) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1ff9,	// (0x0005dcfb) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0006afd2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0006afd2) list_medium_line_x2_t2_g3_t

0x33dc,	// (0x0005f0de) main_sp_fs_list_pane_ParamLimits

0x33dc,	// (0x0005f0de) main_sp_fs_list_pane

0x33e8,	// (0x0005f0ea) sp_fs_scroll_pane_ParamLimits

0x33e8,	// (0x0005f0ea) sp_fs_scroll_pane

0x33f4,	// (0x0005f0f6) list_medium_line_x2_t3_t1

0x3404,	// (0x0005f106) list_medium_line_x2_t3_t2

0x3412,	// (0x0005f114) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0006b01d) list_medium_line_x2_t3_t

0x3420,	// (0x0005f122) list_medium_line_x3_t4_t1

0x3430,	// (0x0005f132) list_medium_line_x3_t4_t2

0x343e,	// (0x0005f140) list_medium_line_x3_t4_t3

0x3412,	// (0x0005f114) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0006b024) list_medium_line_x3_t4_t

0x344c,	// (0x0005f14e) list_medium_line_x4_t5_t1

0x345c,	// (0x0005f15e) list_medium_line_x4_t5_t2

0x343e,	// (0x0005f140) list_medium_line_x4_t5_t3

0x346a,	// (0x0005f16c) list_medium_line_x4_t5_t4

0x3412,	// (0x0005f114) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0006b02d) list_medium_line_x4_t5_t

0x1fae,	// (0x0005dcb0) list_medium_line_t4_g4_g1_ParamLimits

0x1fae,	// (0x0005dcb0) list_medium_line_t4_g4_g1

0x205f,	// (0x0005dd61) list_medium_line_t4_g4_g2_ParamLimits

0x205f,	// (0x0005dd61) list_medium_line_t4_g4_g2

0x3478,	// (0x0005f17a) list_medium_line_t4_g4_g3_ParamLimits

0x3478,	// (0x0005f17a) list_medium_line_t4_g4_g3

0x1fc6,	// (0x0005dcc8) list_medium_line_t4_g4_g4_ParamLimits

0x1fc6,	// (0x0005dcc8) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0006b038) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0006b038) list_medium_line_t4_g4_g

0x3484,	// (0x0005f186) list_medium_line_t4_g4_t1_ParamLimits

0x3484,	// (0x0005f186) list_medium_line_t4_g4_t1

0x3499,	// (0x0005f19b) list_medium_line_t4_g4_t2_ParamLimits

0x3499,	// (0x0005f19b) list_medium_line_t4_g4_t2

0x34ae,	// (0x0005f1b0) list_medium_line_t4_g4_t3_ParamLimits

0x34ae,	// (0x0005f1b0) list_medium_line_t4_g4_t3

0x1ff9,	// (0x0005dcfb) list_medium_line_t4_g4_t4_ParamLimits

0x1ff9,	// (0x0005dcfb) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0006b041) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0006b041) list_medium_line_t4_g4_t

0x35c4,	// (0x0005f2c6) chi_dic_find_pane_g1

0x44e0,	// (0x000601e2) main_tport_pane

0x6ebb,	// (0x00062bbd) list_medium_line_plain_t1

0x6f9b,	// (0x00062c9d) list_medium_line_t2_g2_g1_ParamLimits

0x6f9b,	// (0x00062c9d) list_medium_line_t2_g2_g1

0x6fa7,	// (0x00062ca9) list_medium_line_t2_g2_g2_ParamLimits

0x6fa7,	// (0x00062ca9) list_medium_line_t2_g2_g2

0x0001,

0xf836,	// (0x0006b538) list_medium_line_t2_g2_g_ParamLimits

0xf836,	// (0x0006b538) list_medium_line_t2_g2_g

0x6fb3,	// (0x00062cb5) list_medium_line_t2_g2_t1_ParamLimits

0x6fb3,	// (0x00062cb5) list_medium_line_t2_g2_t1

0x6fcd,	// (0x00062ccf) list_medium_line_t2_g2_t2_ParamLimits

0x6fcd,	// (0x00062ccf) list_medium_line_t2_g2_t2

0x0001,

0xf83b,	// (0x0006b53d) list_medium_line_t2_g2_t_ParamLimits

0xf83b,	// (0x0006b53d) list_medium_line_t2_g2_t

0xa148,	// (0x00065e4a) aid_sp_fs_list_icon_a_sm

0xa150,	// (0x00065e52) aid_sp_fs_list_icon_d

0xa158,	// (0x00065e5a) aid_sp_fs_text_primary

0xe754,	// (0x0006a456) aid_sp_fs_text_secondary

0x7656,	// (0x00063358) list_medium_line

0x7656,	// (0x00063358) list_medium_line_g2

0x7656,	// (0x00063358) list_medium_line_g3

0x7656,	// (0x00063358) list_medium_line_plain

0x7656,	// (0x00063358) list_medium_line_plain_t2

0x7656,	// (0x00063358) list_medium_line_plain_t3

0x7656,	// (0x00063358) list_medium_line_right_icon

0x7656,	// (0x00063358) list_medium_line_right_iconx2

0x7656,	// (0x00063358) list_medium_line_t2

0x7656,	// (0x00063358) list_medium_line_t2_g2

0x7656,	// (0x00063358) list_medium_line_t2_g3

0x7656,	// (0x00063358) list_medium_line_t2_right_icon

0x7656,	// (0x00063358) list_medium_line_t2_right_iconx2

0x7656,	// (0x00063358) list_medium_line_t3

0x7656,	// (0x00063358) list_medium_line_t3_g2

0x7656,	// (0x00063358) list_medium_line_t3_g3

0x7656,	// (0x00063358) list_medium_line_t3_right_iconx2

0x765f,	// (0x00063361) list_medium_line_t4_g4

0x7668,	// (0x0006336a) list_medium_line_x2

0x7668,	// (0x0006336a) list_medium_line_x2_t2_g2

0x7668,	// (0x0006336a) list_medium_line_x2_t2_g3

0x7668,	// (0x0006336a) list_medium_line_x2_t2_g4

0x7668,	// (0x0006336a) list_medium_line_x2_t3

0x7668,	// (0x0006336a) list_medium_line_x2_t3_g2

0x7668,	// (0x0006336a) list_medium_line_x2_t3_g3

0x7668,	// (0x0006336a) list_medium_line_x2_t3_g4

0x7668,	// (0x0006336a) list_medium_line_x2_t4_g2

0x7668,	// (0x0006336a) list_medium_line_x2_t4_g4

0x7671,	// (0x00063373) list_medium_line_x3

0x7671,	// (0x00063373) list_medium_line_x3_t4

0x7671,	// (0x00063373) list_medium_line_x3_t4_g4

0x765f,	// (0x00063361) list_medium_line_x4_t4

0x765f,	// (0x00063361) list_medium_line_x4_t4_g7

0x765f,	// (0x00063361) list_medium_line_x4_t5

0x767a,	// (0x0006337c) list_single_fs_dyc_pane_ParamLimits

0x767a,	// (0x0006337c) list_single_fs_dyc_pane

0x1fae,	// (0x0005dcb0) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1fae,	// (0x0005dcb0) list_medium_line_x4_t4_g7_g1

0x7ded,	// (0x00063aef) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7ded,	// (0x00063aef) list_medium_line_x4_t4_g7_g2

0x7df9,	// (0x00063afb) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7df9,	// (0x00063afb) list_medium_line_x4_t4_g7_g3

0x7e08,	// (0x00063b0a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e08,	// (0x00063b0a) list_medium_line_x4_t4_g7_g4

0x7e14,	// (0x00063b16) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e14,	// (0x00063b16) list_medium_line_x4_t4_g7_g5

0x7e23,	// (0x00063b25) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e23,	// (0x00063b25) list_medium_line_x4_t4_g7_g6

0x7e32,	// (0x00063b34) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e32,	// (0x00063b34) list_medium_line_x4_t4_g7_g7

0x0006,

0xf99e,	// (0x0006b6a0) list_medium_line_x4_t4_g7_g_ParamLimits

0xf99e,	// (0x0006b6a0) list_medium_line_x4_t4_g7_g

0x7e3e,	// (0x00063b40) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e3e,	// (0x00063b40) list_medium_line_x4_t4_g7_t1

0x7e53,	// (0x00063b55) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e53,	// (0x00063b55) list_medium_line_x4_t4_g7_t2

0x7e68,	// (0x00063b6a) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e68,	// (0x00063b6a) list_medium_line_x4_t4_g7_t3

0x7e7d,	// (0x00063b7f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7e7d,	// (0x00063b7f) list_medium_line_x4_t4_g7_t4

0x7e8f,	// (0x00063b91) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7e8f,	// (0x00063b91) list_medium_line_x4_t4_g7_t5

0x0004,

0xf9ad,	// (0x0006b6af) list_medium_line_x4_t4_g7_t_ParamLimits

0xf9ad,	// (0x0006b6af) list_medium_line_x4_t4_g7_t

0x7ea1,	// (0x00063ba3) list_single_dyc_row_pane_ParamLimits

0x7ea1,	// (0x00063ba3) list_single_dyc_row_pane

0x852e,	// (0x00064230) call5_gesture_pane_ParamLimits

0x852e,	// (0x00064230) call5_gesture_pane

0x8562,	// (0x00064264) call5_windows_pane_ParamLimits

0x8562,	// (0x00064264) call5_windows_pane

0x85d4,	// (0x000642d6) call5_swipe_1_pane_cp_ParamLimits

0x85d4,	// (0x000642d6) call5_swipe_1_pane_cp

0x85e0,	// (0x000642e2) call5_swipe_2_pane_cp_ParamLimits

0x85e0,	// (0x000642e2) call5_swipe_2_pane_cp

0xa9d4,	// (0x000666d6) call5_image_pane_cp

0x85ec,	// (0x000642ee) popup_call5_audio_first_window_cp_ParamLimits

0x85ec,	// (0x000642ee) popup_call5_audio_first_window_cp

0xe67d,	// (0x0006a37f) call5_swipe_1_pane_g1_cp_ParamLimits

0xe67d,	// (0x0006a37f) call5_swipe_1_pane_g1_cp

0xe6bd,	// (0x0006a3bf) call5_swipe_1_pane_g2_cp

0xe696,	// (0x0006a398) call5_swipe_1_pane_t1_cp_ParamLimits

0xe696,	// (0x0006a398) call5_swipe_1_pane_t1_cp

0xe67d,	// (0x0006a37f) call5_swipe_2_pane_g1_cp_ParamLimits

0xe67d,	// (0x0006a37f) call5_swipe_2_pane_g1_cp

0xe6c5,	// (0x0006a3c7) call5_swipe_2_pane_g2_cp

0xe6cd,	// (0x0006a3cf) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6cd,	// (0x0006a3cf) call5_swipe_2_pane_t1_cp

0xa4be,	// (0x000661c0) main_sp_fs_email_pane

0xe6e2,	// (0x0006a3e4) main_sp_fs_listscroll_pane_te

0x85fa,	// (0x000642fc) popup_sp_fs_action_menu_pane_ParamLimits

0x85fa,	// (0x000642fc) popup_sp_fs_action_menu_pane

0xcc49,	// (0x0006894b) bg_sp_fs_ctrlbar_pane_g1

0xe6eb,	// (0x0006a3ed) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6f4,	// (0x0006a3f6) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6fd,	// (0x0006a3ff) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc49,	// (0x0006894b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfa36,	// (0x0006b738) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca25,	// (0x00068727) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca25,	// (0x00068727) bg_sp_fs_ctrlbar_ddmenu_pane

0xe706,	// (0x0006a408) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe706,	// (0x0006a408) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe712,	// (0x0006a414) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe712,	// (0x0006a414) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0bcc,	// (0x0005c8ce) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0bcc,	// (0x0005c8ce) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe71e,	// (0x0006a420) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe71e,	// (0x0006a420) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x863c,	// (0x0006433e) list_medium_line_t2_right_icon_g1

0x8644,	// (0x00064346) list_medium_line_t2_right_icon_t1

0x8654,	// (0x00064356) list_medium_line_t2_right_icon_t2

0x0001,

0xfa3f,	// (0x0006b741) list_medium_line_t2_right_icon_t

0xc838,	// (0x0006853a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc838,	// (0x0006853a) bg_sp_fs_ctrlbar_pane

0x86b9,	// (0x000643bb) main_sp_fs_ctrlbar_button_pane_cp01

0x86c1,	// (0x000643c3) main_sp_fs_ctrlbar_ddmenu_pane

0xe779,	// (0x0006a47b) main_sp_fs_ctrlbar_pane_g1

0xe797,	// (0x0006a499) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfa44,	// (0x0006b746) main_sp_fs_ctrlbar_pane_g

0xe7a3,	// (0x0006a4a5) main_sp_fs_ctrlbar_pane_t1

0x86cb,	// (0x000643cd) main_sp_fs_ctrlbar_pane

0x86e1,	// (0x000643e3) main_sp_fs_listscroll_pane_te_cp01

0x86f2,	// (0x000643f4) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x86f2,	// (0x000643f4) popup_sp_fs_action_menu_pane_cp01

0xa4be,	// (0x000661c0) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa4be,	// (0x000661c0) bg_sp_fs_highlight_list_pane_cp01

0xa161,	// (0x00065e63) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa161,	// (0x00065e63) sp_fs_action_menu_list_gene_pane_g1

0xe7d3,	// (0x0006a4d5) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7d3,	// (0x0006a4d5) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa49,	// (0x0006b74b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa49,	// (0x0006b74b) sp_fs_action_menu_list_gene_pane_g

0xa170,	// (0x00065e72) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa170,	// (0x00065e72) sp_fs_action_menu_list_gene_pane_t1

0xa188,	// (0x00065e8a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa188,	// (0x00065e8a) sp_fs_action_menu_list_gene_pane

0xe7e0,	// (0x0006a4e2) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7e0,	// (0x0006a4e2) popup_sp_fs_action_menu_bg_pane

0xa1a7,	// (0x00065ea9) sp_fs_action_menu_list_pane_ParamLimits

0xa1a7,	// (0x00065ea9) sp_fs_action_menu_list_pane

0x871c,	// (0x0006441e) sp_fs_scroll_pane_cp01_ParamLimits

0x871c,	// (0x0006441e) sp_fs_scroll_pane_cp01

0x8742,	// (0x00064444) list_medium_line_plain_t2_t1

0x8752,	// (0x00064454) list_medium_line_plain_t2_t2

0x0001,

0xfa4e,	// (0x0006b750) list_medium_line_plain_t2_t

0x8760,	// (0x00064462) list_medium_line_plain_t3_t1

0x8770,	// (0x00064472) list_medium_line_plain_t3_t2

0x877e,	// (0x00064480) list_medium_line_plain_t3_t3

0x0002,

0xfa53,	// (0x0006b755) list_medium_line_plain_t3_t

0x1fae,	// (0x0005dcb0) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1fae,	// (0x0005dcb0) list_medium_line_x2_t2_g2_g1

0x1fc6,	// (0x0005dcc8) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1fc6,	// (0x0005dcc8) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0006af48) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0006af48) list_medium_line_x2_t2_g2_g

0x3484,	// (0x0005f186) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3484,	// (0x0005f186) list_medium_line_x2_t2_g2_t1

0x1ff9,	// (0x0005dcfb) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1ff9,	// (0x0005dcfb) list_medium_line_x2_t2_g2_t2

0x0001,

0xfa5a,	// (0x0006b75c) list_medium_line_x2_t2_g2_t_ParamLimits

0xfa5a,	// (0x0006b75c) list_medium_line_x2_t2_g2_t

0x1fae,	// (0x0005dcb0) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1fae,	// (0x0005dcb0) list_medium_line_x2_t4_g2_g1

0x878c,	// (0x0006448e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x878c,	// (0x0006448e) list_medium_line_x2_t4_g2_g2

0x0001,

0xfa5f,	// (0x0006b761) list_medium_line_x2_t4_g2_g_ParamLimits

0xfa5f,	// (0x0006b761) list_medium_line_x2_t4_g2_g

0x879e,	// (0x000644a0) list_medium_line_x2_t4_g2_t1_ParamLimits

0x879e,	// (0x000644a0) list_medium_line_x2_t4_g2_t1

0x87b8,	// (0x000644ba) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87b8,	// (0x000644ba) list_medium_line_x2_t4_g2_t2

0x87ce,	// (0x000644d0) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87ce,	// (0x000644d0) list_medium_line_x2_t4_g2_t3

0x1ff9,	// (0x0005dcfb) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1ff9,	// (0x0005dcfb) list_medium_line_x2_t4_g2_t4

0x0003,

0xfa64,	// (0x0006b766) list_medium_line_x2_t4_g2_t_ParamLimits

0xfa64,	// (0x0006b766) list_medium_line_x2_t4_g2_t

0x87e3,	// (0x000644e5) list_medium_line_t3_right_iconx2_g1

0x863c,	// (0x0006433e) list_medium_line_t3_right_iconx2_g2

0x87eb,	// (0x000644ed) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfa6d,	// (0x0006b76f) list_medium_line_t3_right_iconx2_g

0x87f3,	// (0x000644f5) list_medium_line_t3_right_iconx2_t1

0x8803,	// (0x00064505) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfa74,	// (0x0006b776) list_medium_line_t3_right_iconx2_t

0x1fae,	// (0x0005dcb0) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1fae,	// (0x0005dcb0) list_medium_line_x3_t4_g4_g1

0x1fba,	// (0x0005dcbc) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1fba,	// (0x0005dcbc) list_medium_line_x3_t4_g4_g2

0x205f,	// (0x0005dd61) list_medium_line_x3_t4_g4_g3_ParamLimits

0x205f,	// (0x0005dd61) list_medium_line_x3_t4_g4_g3

0x8811,	// (0x00064513) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8811,	// (0x00064513) list_medium_line_x3_t4_g4_g4

0x0003,

0xfa79,	// (0x0006b77b) list_medium_line_x3_t4_g4_g_ParamLimits

0xfa79,	// (0x0006b77b) list_medium_line_x3_t4_g4_g

0x881d,	// (0x0006451f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x881d,	// (0x0006451f) list_medium_line_x3_t4_g4_t1

0x8834,	// (0x00064536) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8834,	// (0x00064536) list_medium_line_x3_t4_g4_t2

0x3499,	// (0x0005f19b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3499,	// (0x0005f19b) list_medium_line_x3_t4_g4_t3

0x8849,	// (0x0006454b) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8849,	// (0x0006454b) list_medium_line_x3_t4_g4_t4

0x0003,

0xfa82,	// (0x0006b784) list_medium_line_x3_t4_g4_t_ParamLimits

0xfa82,	// (0x0006b784) list_medium_line_x3_t4_g4_t

0x8866,	// (0x00064568) list_single_dyc_row_text_pane_t1_ParamLimits

0x8866,	// (0x00064568) list_single_dyc_row_text_pane_t1

0x889d,	// (0x0006459f) list_single_dyc_row_text_pane_t2_ParamLimits

0x889d,	// (0x0006459f) list_single_dyc_row_text_pane_t2

0xa1c7,	// (0x00065ec9) list_single_dyc_row_text_pane_t3_ParamLimits

0xa1c7,	// (0x00065ec9) list_single_dyc_row_text_pane_t3

0x0005,

0xfa8b,	// (0x0006b78d) list_single_dyc_row_text_pane_t_ParamLimits

0xfa8b,	// (0x0006b78d) list_single_dyc_row_text_pane_t

0xa1eb,	// (0x00065eed) list_single_dyc_row_pane_g1_ParamLimits

0xa1eb,	// (0x00065eed) list_single_dyc_row_pane_g1

0xa1f7,	// (0x00065ef9) list_single_dyc_row_pane_g2_ParamLimits

0xa1f7,	// (0x00065ef9) list_single_dyc_row_pane_g2

0xa203,	// (0x00065f05) list_single_dyc_row_pane_g3_ParamLimits

0xa203,	// (0x00065f05) list_single_dyc_row_pane_g3

0xa20f,	// (0x00065f11) list_single_dyc_row_pane_g4_ParamLimits

0xa20f,	// (0x00065f11) list_single_dyc_row_pane_g4

0x0003,

0xfa98,	// (0x0006b79a) list_single_dyc_row_pane_g_ParamLimits

0xfa98,	// (0x0006b79a) list_single_dyc_row_pane_g

0xa21b,	// (0x00065f1d) list_single_dyc_row_text_pane_ParamLimits

0xa21b,	// (0x00065f1d) list_single_dyc_row_text_pane

0x9beb,	// (0x000658ed) bg_sp_fs_scroll_pane

0xe7ee,	// (0x0006a4f0) thumb_sp_fs_scroll_pane

0x6f9b,	// (0x00062c9d) list_medium_line_g1_ParamLimits

0x6f9b,	// (0x00062c9d) list_medium_line_g1

0x89c0,	// (0x000646c2) list_medium_line_t1_ParamLimits

0x89c0,	// (0x000646c2) list_medium_line_t1

0x1fae,	// (0x0005dcb0) list_medium_line_x2_g1_ParamLimits

0x1fae,	// (0x0005dcb0) list_medium_line_x2_g1

0x1fba,	// (0x0005dcbc) list_medium_line_x2_g2_ParamLimits

0x1fba,	// (0x0005dcbc) list_medium_line_x2_g2

0x0001,

0xfaa1,	// (0x0006b7a3) list_medium_line_x2_g_ParamLimits

0xfaa1,	// (0x0006b7a3) list_medium_line_x2_g

0xa23a,	// (0x00065f3c) list_medium_line_x2_t1_ParamLimits

0xa23a,	// (0x00065f3c) list_medium_line_x2_t1

0x1fae,	// (0x0005dcb0) list_medium_line_x3_g1_ParamLimits

0x1fae,	// (0x0005dcb0) list_medium_line_x3_g1

0x1fba,	// (0x0005dcbc) list_medium_line_x3_g2_ParamLimits

0x1fba,	// (0x0005dcbc) list_medium_line_x3_g2

0x0001,

0xfaa1,	// (0x0006b7a3) list_medium_line_x3_g_ParamLimits

0xfaa1,	// (0x0006b7a3) list_medium_line_x3_g

0xa23a,	// (0x00065f3c) list_medium_line_x3_t1_ParamLimits

0xa23a,	// (0x00065f3c) list_medium_line_x3_t1

0xe7f7,	// (0x0006a4f9) thumb_sp_fs_scroll_pane_g1

0xe800,	// (0x0006a502) thumb_sp_fs_scroll_pane_g2

0xe809,	// (0x0006a50b) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0c3d,	// (0x0005c93f) thumb_sp_fs_scroll_pane_g

0xe7f7,	// (0x0006a4f9) bg_sp_fs_scroll_pane_g1

0xe800,	// (0x0006a502) bg_sp_fs_scroll_pane_g2

0xe809,	// (0x0006a50b) bg_sp_fs_scroll_pane_g3

0x0002,

0x0c3d,	// (0x0005c93f) bg_sp_fs_scroll_pane_g

0x1fae,	// (0x0005dcb0) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1fae,	// (0x0005dcb0) list_medium_line_x2_t3_g4_g1

0x2053,	// (0x0005dd55) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2053,	// (0x0005dd55) list_medium_line_x2_t3_g4_g2

0x1fba,	// (0x0005dcbc) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1fba,	// (0x0005dcbc) list_medium_line_x2_t3_g4_g3

0x1fc6,	// (0x0005dcc8) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1fc6,	// (0x0005dcc8) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0006afc4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0006afc4) list_medium_line_x2_t3_g4_g

0x89d5,	// (0x000646d7) list_medium_line_x2_t3_g4_t1_ParamLimits

0x89d5,	// (0x000646d7) list_medium_line_x2_t3_g4_t1

0x89eb,	// (0x000646ed) list_medium_line_x2_t3_g4_t2_ParamLimits

0x89eb,	// (0x000646ed) list_medium_line_x2_t3_g4_t2

0x1ff9,	// (0x0005dcfb) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1ff9,	// (0x0005dcfb) list_medium_line_x2_t3_g4_t3

0x0002,

0xfaa6,	// (0x0006b7a8) list_medium_line_x2_t3_g4_t_ParamLimits

0xfaa6,	// (0x0006b7a8) list_medium_line_x2_t3_g4_t

0x6f9b,	// (0x00062c9d) list_medium_line_g2_g1_ParamLimits

0x6f9b,	// (0x00062c9d) list_medium_line_g2_g1

0x6fa7,	// (0x00062ca9) list_medium_line_g2_g2_ParamLimits

0x6fa7,	// (0x00062ca9) list_medium_line_g2_g2

0x0001,

0xf836,	// (0x0006b538) list_medium_line_g2_g_ParamLimits

0xf836,	// (0x0006b538) list_medium_line_g2_g

0x8a04,	// (0x00064706) list_medium_line_g2_t1_ParamLimits

0x8a04,	// (0x00064706) list_medium_line_g2_t1

0x6f9b,	// (0x00062c9d) list_medium_line_t3_g2_g1_ParamLimits

0x6f9b,	// (0x00062c9d) list_medium_line_t3_g2_g1

0x6fa7,	// (0x00062ca9) list_medium_line_t3_g2_g2_ParamLimits

0x6fa7,	// (0x00062ca9) list_medium_line_t3_g2_g2

0x0001,

0xf836,	// (0x0006b538) list_medium_line_t3_g2_g_ParamLimits

0xf836,	// (0x0006b538) list_medium_line_t3_g2_g

0x8a19,	// (0x0006471b) list_medium_line_t3_g2_t1_ParamLimits

0x8a19,	// (0x0006471b) list_medium_line_t3_g2_t1

0x8a33,	// (0x00064735) list_medium_line_t3_g2_t2_ParamLimits

0x8a33,	// (0x00064735) list_medium_line_t3_g2_t2

0x8a49,	// (0x0006474b) list_medium_line_t3_g2_t3_ParamLimits

0x8a49,	// (0x0006474b) list_medium_line_t3_g2_t3

0x0002,

0xfaad,	// (0x0006b7af) list_medium_line_t3_g2_t_ParamLimits

0xfaad,	// (0x0006b7af) list_medium_line_t3_g2_t

0x863c,	// (0x0006433e) list_medium_line_right_icon_g1

0x8a5e,	// (0x00064760) list_medium_line_right_icon_t1

0x6f9b,	// (0x00062c9d) list_medium_line_t2_g1_ParamLimits

0x6f9b,	// (0x00062c9d) list_medium_line_t2_g1

0x8a6c,	// (0x0006476e) list_medium_line_t2_t1_ParamLimits

0x8a6c,	// (0x0006476e) list_medium_line_t2_t1

0x8a86,	// (0x00064788) list_medium_line_t2_t2_ParamLimits

0x8a86,	// (0x00064788) list_medium_line_t2_t2

0x0001,

0xfab4,	// (0x0006b7b6) list_medium_line_t2_t_ParamLimits

0xfab4,	// (0x0006b7b6) list_medium_line_t2_t

0x6f9b,	// (0x00062c9d) list_medium_line_t3_g1_ParamLimits

0x6f9b,	// (0x00062c9d) list_medium_line_t3_g1

0x8a9b,	// (0x0006479d) list_medium_line_t3_t1_ParamLimits

0x8a9b,	// (0x0006479d) list_medium_line_t3_t1

0x8ab5,	// (0x000647b7) list_medium_line_t3_t2_ParamLimits

0x8ab5,	// (0x000647b7) list_medium_line_t3_t2

0x8acb,	// (0x000647cd) list_medium_line_t3_t3_ParamLimits

0x8acb,	// (0x000647cd) list_medium_line_t3_t3

0x0002,

0xfab9,	// (0x0006b7bb) list_medium_line_t3_t_ParamLimits

0xfab9,	// (0x0006b7bb) list_medium_line_t3_t

0x6f9b,	// (0x00062c9d) list_medium_line_g3_g1_ParamLimits

0x6f9b,	// (0x00062c9d) list_medium_line_g3_g1

0x8ae0,	// (0x000647e2) list_medium_line_g3_g2_ParamLimits

0x8ae0,	// (0x000647e2) list_medium_line_g3_g2

0x6fa7,	// (0x00062ca9) list_medium_line_g3_g3_ParamLimits

0x6fa7,	// (0x00062ca9) list_medium_line_g3_g3

0x0002,

0xfac0,	// (0x0006b7c2) list_medium_line_g3_g_ParamLimits

0xfac0,	// (0x0006b7c2) list_medium_line_g3_g

0x8aec,	// (0x000647ee) list_medium_line_g3_t1_ParamLimits

0x8aec,	// (0x000647ee) list_medium_line_g3_t1

0x6f9b,	// (0x00062c9d) list_medium_line_t2_g3_g1_ParamLimits

0x6f9b,	// (0x00062c9d) list_medium_line_t2_g3_g1

0x8ae0,	// (0x000647e2) list_medium_line_t2_g3_g2_ParamLimits

0x8ae0,	// (0x000647e2) list_medium_line_t2_g3_g2

0x6fa7,	// (0x00062ca9) list_medium_line_t2_g3_g3_ParamLimits

0x6fa7,	// (0x00062ca9) list_medium_line_t2_g3_g3

0x0002,

0xfac0,	// (0x0006b7c2) list_medium_line_t2_g3_g_ParamLimits

0xfac0,	// (0x0006b7c2) list_medium_line_t2_g3_g

0x8b01,	// (0x00064803) list_medium_line_t2_g3_t1_ParamLimits

0x8b01,	// (0x00064803) list_medium_line_t2_g3_t1

0x8b1b,	// (0x0006481d) list_medium_line_t2_g3_t2_ParamLimits

0x8b1b,	// (0x0006481d) list_medium_line_t2_g3_t2

0x0001,

0xfac7,	// (0x0006b7c9) list_medium_line_t2_g3_t_ParamLimits

0xfac7,	// (0x0006b7c9) list_medium_line_t2_g3_t

0x6f9b,	// (0x00062c9d) list_medium_line_t3_g3_g1_ParamLimits

0x6f9b,	// (0x00062c9d) list_medium_line_t3_g3_g1

0x8ae0,	// (0x000647e2) list_medium_line_t3_g3_g2_ParamLimits

0x8ae0,	// (0x000647e2) list_medium_line_t3_g3_g2

0x6fa7,	// (0x00062ca9) list_medium_line_t3_g3_g3_ParamLimits

0x6fa7,	// (0x00062ca9) list_medium_line_t3_g3_g3

0x0002,

0xfac0,	// (0x0006b7c2) list_medium_line_t3_g3_g_ParamLimits

0xfac0,	// (0x0006b7c2) list_medium_line_t3_g3_g

0x8b31,	// (0x00064833) list_medium_line_t3_g3_t1_ParamLimits

0x8b31,	// (0x00064833) list_medium_line_t3_g3_t1

0x8b45,	// (0x00064847) list_medium_line_t3_g3_t2_ParamLimits

0x8b45,	// (0x00064847) list_medium_line_t3_g3_t2

0x8b57,	// (0x00064859) list_medium_line_t3_g3_t3_ParamLimits

0x8b57,	// (0x00064859) list_medium_line_t3_g3_t3

0x0002,

0xfacc,	// (0x0006b7ce) list_medium_line_t3_g3_t_ParamLimits

0xfacc,	// (0x0006b7ce) list_medium_line_t3_g3_t

0x87e3,	// (0x000644e5) list_medium_line_right_iconx2_g1

0x863c,	// (0x0006433e) list_medium_line_right_iconx2_g2

0x0001,

0xfad3,	// (0x0006b7d5) list_medium_line_right_iconx2_g

0x8b69,	// (0x0006486b) list_medium_line_right_iconx2_t1

0x87e3,	// (0x000644e5) list_medium_line_t2_right_iconx2_g1

0x863c,	// (0x0006433e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfad3,	// (0x0006b7d5) list_medium_line_t2_right_iconx2_g

0x8b77,	// (0x00064879) list_medium_line_t2_right_iconx2_t1

0x8b87,	// (0x00064889) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfad8,	// (0x0006b7da) list_medium_line_t2_right_iconx2_t

0x8b95,	// (0x00064897) list_medium_line_x4_t4_t1

0x8ba3,	// (0x000648a5) list_medium_line_x4_t4_t2

0x8bb3,	// (0x000648b5) list_medium_line_x4_t4_t3

0x8bc3,	// (0x000648c5) list_medium_line_x4_t4_t4

0x0003,

0xfadd,	// (0x0006b7df) list_medium_line_x4_t4_t

0x8bfd,	// (0x000648ff) tport_appsw_pane_ParamLimits

0x8bfd,	// (0x000648ff) tport_appsw_pane

0x8c0b,	// (0x0006490d) tport_contact_pane_ParamLimits

0x8c0b,	// (0x0006490d) tport_contact_pane

0x8c1b,	// (0x0006491d) tport_listscroll_pane_ParamLimits

0x8c1b,	// (0x0006491d) tport_listscroll_pane

0x8c2b,	// (0x0006492d) cell_tport_appsw_pane_ParamLimits

0x8c2b,	// (0x0006492d) cell_tport_appsw_pane

0xcf3d,	// (0x00068c3f) tport_appsw_pane_g1_ParamLimits

0xcf3d,	// (0x00068c3f) tport_appsw_pane_g1

0xe812,	// (0x0006a514) tport_contact_pane_g1

0xe18c,	// (0x00069e8e) tport_contact_pane_t1

0xe81b,	// (0x0006a51d) tport_contact_pane_t2

0x0001,

0x0c84,	// (0x0005c986) tport_contact_pane_t

0xe829,	// (0x0006a52b) list_tport_pane

0xe832,	// (0x0006a534) scroll_pane_cp_030

0x8c5e,	// (0x00064960) cell_tport_appsw_pane_g1

0x8c6e,	// (0x00064970) cell_tport_appsw_pane_t1

0x8c7c,	// (0x0006497e) grid_highlight_pane_cp019

0x8c84,	// (0x00064986) list_tport_double_graphic_pane_ParamLimits

0x8c84,	// (0x00064986) list_tport_double_graphic_pane

0xa4be,	// (0x000661c0) list_highlight_pane_cp023_ParamLimits

0xa4be,	// (0x000661c0) list_highlight_pane_cp023

0x8c95,	// (0x00064997) list_tport_double_graphic_pane_g1_ParamLimits

0x8c95,	// (0x00064997) list_tport_double_graphic_pane_g1

0x8ca2,	// (0x000649a4) list_tport_double_graphic_pane_t1_ParamLimits

0x8ca2,	// (0x000649a4) list_tport_double_graphic_pane_t1

0x8cb7,	// (0x000649b9) list_tport_double_graphic_pane_t2_ParamLimits

0x8cb7,	// (0x000649b9) list_tport_double_graphic_pane_t2

0x0001,

0xfaed,	// (0x0006b7ef) list_tport_double_graphic_pane_t_ParamLimits

0xfaed,	// (0x0006b7ef) list_tport_double_graphic_pane_t

0x9beb,	// (0x000658ed) main_cale_note_pane

0x676b,	// (0x0006246d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x676b,	// (0x0006246d) cell_vitu2_function_top_wide_pane_cp01

0x8203,	// (0x00063f05) wait_bar_pane_cp05_ParamLimits

0xa4be,	// (0x000661c0) listscroll_cmail_pane

0xe83b,	// (0x0006a53d) list_cmail_pane

0x8cc9,	// (0x000649cb) list_cmail_body_pane

0x8ce9,	// (0x000649eb) list_single_cmail_header_caption_pane

0x8d14,	// (0x00064a16) list_single_cmail_header_detail_pane_ParamLimits

0x8d14,	// (0x00064a16) list_single_cmail_header_detail_pane

0xe84b,	// (0x0006a54d) list_single_cmail_header_caption_pane_t1

0x8d4a,	// (0x00064a4c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d4a,	// (0x00064a4c) list_single_cmail_header_detail_pane_g1

0xa250,	// (0x00065f52) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa250,	// (0x00065f52) list_single_cmail_header_detail_pane_g2

0x0002,

0xfaf2,	// (0x0006b7f4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfaf2,	// (0x0006b7f4) list_single_cmail_header_detail_pane_g

0xa25c,	// (0x00065f5e) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa25c,	// (0x00065f5e) list_single_cmail_header_detail_pane_t1

0xa2bc,	// (0x00065fbe) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa2bc,	// (0x00065fbe) list_single_cmail_header_editor_pane_bg

0xe32d,	// (0x0006a02f) list_cmail_body_pane_g1

0xe86f,	// (0x0006a571) list_cmail_body_pane_t1

0xd6d6,	// (0x000693d8) list_single_cmail_header_editor_pane_bg_g1

0xac2d,	// (0x0006692f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6e6,	// (0x000693e8) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6de,	// (0x000693e0) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd915,	// (0x00069617) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd706,	// (0x00069408) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6f6,	// (0x000693f8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6fe,	// (0x00069400) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac0d,	// (0x0006690f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d60,	// (0x00064a62) calenote_gesture_pane_ParamLimits

0x8d60,	// (0x00064a62) calenote_gesture_pane

0x8d7a,	// (0x00064a7c) calenote_window_pane_ParamLimits

0x8d7a,	// (0x00064a7c) calenote_window_pane

0xe87d,	// (0x0006a57f) popup_note_window_cp01

0x8d92,	// (0x00064a94) calenote_swipe_1_pane_ParamLimits

0x8d92,	// (0x00064a94) calenote_swipe_1_pane

0x85e0,	// (0x000642e2) calenote_swipe_2_pane_ParamLimits

0x85e0,	// (0x000642e2) calenote_swipe_2_pane

0xe67d,	// (0x0006a37f) calenote_swipe_1_pane_g1_ParamLimits

0xe67d,	// (0x0006a37f) calenote_swipe_1_pane_g1

0xe68a,	// (0x0006a38c) calenote_swipe_1_pane_g2_ParamLimits

0xe68a,	// (0x0006a38c) calenote_swipe_1_pane_g2

0x0001,

0x0bb9,	// (0x0005c8bb) calenote_swipe_1_pane_g_ParamLimits

0x0bb9,	// (0x0005c8bb) calenote_swipe_1_pane_g

0xe88f,	// (0x0006a591) calenote_swipe_1_pane_t1_ParamLimits

0xe88f,	// (0x0006a591) calenote_swipe_1_pane_t1

0xe67d,	// (0x0006a37f) calenote_swipe_2_pane_g1_ParamLimits

0xe67d,	// (0x0006a37f) calenote_swipe_2_pane_g1

0xe8ae,	// (0x0006a5b0) calenote_swipe_2_pane_g2_ParamLimits

0xe8ae,	// (0x0006a5b0) calenote_swipe_2_pane_g2

0x0001,

0x0ca1,	// (0x0005c9a3) calenote_swipe_2_pane_g_ParamLimits

0x0ca1,	// (0x0005c9a3) calenote_swipe_2_pane_g

0xe8ba,	// (0x0006a5bc) calenote_swipe_2_pane_t1_ParamLimits

0xe8ba,	// (0x0006a5bc) calenote_swipe_2_pane_t1

0x9beb,	// (0x000658ed) main_mup_navstr_pane

0x54bc,	// (0x000611be) main_mup3_pane_t7_ParamLimits

0x54bc,	// (0x000611be) main_mup3_pane_t7

0x5ec1,	// (0x00061bc3) main_mp4_pane_g6_ParamLimits

0x5ec1,	// (0x00061bc3) main_mp4_pane_g6

0x6241,	// (0x00061f43) main_image3_pane_t4_ParamLimits

0x6241,	// (0x00061f43) main_image3_pane_t4

0x8da5,	// (0x00064aa7) popup_navstr_preview_pane_ParamLimits

0x8da5,	// (0x00064aa7) popup_navstr_preview_pane

0x8db1,	// (0x00064ab3) scroll_navstr_pane_ParamLimits

0x8db1,	// (0x00064ab3) scroll_navstr_pane

0x9beb,	// (0x000658ed) bg_popup_preview_window_pane_cp04

0xe8e1,	// (0x0006a5e3) popup_navstr_preview_pane_t1

0x8dbd,	// (0x00064abf) scroll_navstr_pane_g1_ParamLimits

0x8dbd,	// (0x00064abf) scroll_navstr_pane_g1

0x8dca,	// (0x00064acc) scroll_navstr_pane_t1_ParamLimits

0x8dca,	// (0x00064acc) scroll_navstr_pane_t1

0xe886,	// (0x0006a588) bg_button_pane_cp014

0xe886,	// (0x0006a588) bg_button_pane_cp030

0x84d4,	// (0x000641d6) list_double_fisheye_pane_g4_ParamLimits

0x84d4,	// (0x000641d6) list_double_fisheye_pane_g4

0x84e0,	// (0x000641e2) list_double_fisheye_pane_g5_ParamLimits

0x84e0,	// (0x000641e2) list_double_fisheye_pane_g5

0xcd3d,	// (0x00068a3f) sp_fs_scroll_pane_cp03

0xe779,	// (0x0006a47b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe797,	// (0x0006a499) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfa44,	// (0x0006b746) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7a3,	// (0x0006a4a5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe843,	// (0x0006a545) sp_fs_scroll_pane_cp02

0xa913,	// (0x00066615) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa913,	// (0x00066615) popup_sp_fs_calendar_preview_list_single_pane

0x9beb,	// (0x000658ed) main_cam6_pano_pane

0x44c4,	// (0x000601c6) main_mup3_pane_ParamLimits

0x9beb,	// (0x000658ed) main_phacti_pane

0x80d8,	// (0x00063dda) bg_button_pane_cp11

0x80f0,	// (0x00063df2) main_mobtv_info_pane_g2_ParamLimits

0x80f0,	// (0x00063df2) main_mobtv_info_pane_g2

0x0001,

0xf9ed,	// (0x0006b6ef) main_mobtv_info_pane_g_ParamLimits

0xf9ed,	// (0x0006b6ef) main_mobtv_info_pane_g

0x82a2,	// (0x00063fa4) sc_clock_pane_t5_ParamLimits

0x82a2,	// (0x00063fa4) sc_clock_pane_t5

0x8345,	// (0x00064047) main_radioblah_pane_g1_ParamLimits

0xe5c9,	// (0x0006a2cb) main_radioblah_pane_t3_ParamLimits

0xe5c9,	// (0x0006a2cb) main_radioblah_pane_t3

0xe5e1,	// (0x0006a2e3) main_radioblah_pane_t4_ParamLimits

0xe5e1,	// (0x0006a2e3) main_radioblah_pane_t4

0x8363,	// (0x00064065) main_radioblah_text_pane_ParamLimits

0x8363,	// (0x00064065) main_radioblah_text_pane

0x8370,	// (0x00064072) main_radioblah_info_pane_g1_ParamLimits

0x8405,	// (0x00064107) main_radioblah_info_pane_t4_ParamLimits

0x8405,	// (0x00064107) main_radioblah_info_pane_t4

0xa4be,	// (0x000661c0) main_sp_fs_calendar_pane

0x8ddc,	// (0x00064ade) main_phacti_pane_g1

0x8de4,	// (0x00064ae6) phacti_note_pane_ParamLimits

0x8de4,	// (0x00064ae6) phacti_note_pane

0xe8f8,	// (0x0006a5fa) phacti_term_pane_ParamLimits

0xe8f8,	// (0x0006a5fa) phacti_term_pane

0xe90d,	// (0x0006a60f) phacti_note_pane_t1_ParamLimits

0xe90d,	// (0x0006a60f) phacti_note_pane_t1

0xa2d3,	// (0x00065fd5) phacti_term_pane_g1

0xa2db,	// (0x00065fdd) phacti_term_pane_t1_ParamLimits

0xa2db,	// (0x00065fdd) phacti_term_pane_t1

0xe924,	// (0x0006a626) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa2e,	// (0x00066730) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfb03,	// (0x0006b805) popup_sp_fs_calendar_preview_list_single_pane_g

0xe92c,	// (0x0006a62e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe92c,	// (0x0006a62e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe942,	// (0x0006a644) aid_popup_sp_fs_bg_corner_pane

0xcc49,	// (0x0006894b) popup_sp_fs_calendar_preview_bg_pane_g1

0x9beb,	// (0x000658ed) popup_sp_fs_calendar_preview_bg_pane

0xe94a,	// (0x0006a64c) popup_sp_fs_calendar_preview_list_pane

0xc838,	// (0x0006853a) bg_main_sp_fs_cale_pane_ParamLimits

0xc838,	// (0x0006853a) bg_main_sp_fs_cale_pane

0xa30e,	// (0x00066010) listscroll_cale_mrui_pane_ParamLimits

0xa30e,	// (0x00066010) listscroll_cale_mrui_pane

0xa323,	// (0x00066025) listscroll_sp_fs_schedule_track_pane

0xa32c,	// (0x0006602e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa32c,	// (0x0006602e) main_sp_fs_ctrlbar_pane_cp01

0xe952,	// (0x0006a654) main_sp_fs_ribbon_pane

0xa33f,	// (0x00066041) popup_sp_fs_cale_preview_window

0x8e47,	// (0x00064b49) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e47,	// (0x00064b49) list_single_sp_fs_schedule_track_pane

0xda26,	// (0x00069728) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xda26,	// (0x00069728) bg_sp_fs_highlight_list_pane_cp03

0x8e69,	// (0x00064b6b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e69,	// (0x00064b6b) list_single_sp_fs_schedule_track_pane_g1

0x8e75,	// (0x00064b77) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e75,	// (0x00064b77) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb08,	// (0x0006b80a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb08,	// (0x0006b80a) list_single_sp_fs_schedule_track_pane_g

0x8e81,	// (0x00064b83) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e81,	// (0x00064b83) list_single_sp_fs_schedule_track_pane_t1

0x8e99,	// (0x00064b9b) sp_fs_schedule_track_pane_ParamLimits

0x8e99,	// (0x00064b9b) sp_fs_schedule_track_pane

0xe95a,	// (0x0006a65c) sp_fs_schedule_track_pane_g1

0xe962,	// (0x0006a664) sp_fs_schedule_track_pane_g2

0xe96a,	// (0x0006a66c) sp_fs_schedule_track_pane_g3

0xe972,	// (0x0006a674) sp_fs_schedule_track_pane_g4

0xe97a,	// (0x0006a67c) sp_fs_schedule_track_pane_g5

0x0004,

0x0cb5,	// (0x0005c9b7) sp_fs_schedule_track_pane_g

0xd6d6,	// (0x000693d8) bg_sp_fs_schedule_viewer_highlight_g1

0xac2d,	// (0x0006692f) bg_sp_fs_schedule_viewer_highlight_g2

0xd6de,	// (0x000693e0) bg_sp_fs_schedule_viewer_highlight_g3

0xd6e6,	// (0x000693e8) bg_sp_fs_schedule_viewer_highlight_g4

0xd915,	// (0x00069617) bg_sp_fs_schedule_viewer_highlight_g5

0xd6f6,	// (0x000693f8) bg_sp_fs_schedule_viewer_highlight_g6

0xd6fe,	// (0x00069400) bg_sp_fs_schedule_viewer_highlight_g7

0xd706,	// (0x00069408) bg_sp_fs_schedule_viewer_highlight_g8

0xac0d,	// (0x0006690f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb0d,	// (0x0006b80f) bg_sp_fs_schedule_viewer_highlight_g

0x9beb,	// (0x000658ed) bg_main_sp_fs_ribbon_pane

0x8ea9,	// (0x00064bab) main_sp_fs_ribbon_pane_g1

0xe982,	// (0x0006a684) main_sp_fs_ribbon_pane_t1

0x8eb2,	// (0x00064bb4) main_sp_fs_ribbon_pane_t2

0xe991,	// (0x0006a693) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb20,	// (0x0006b822) main_sp_fs_ribbon_pane_t

0xe9a0,	// (0x0006a6a2) main_sp_fs_ribbon_scheduler_pane

0xe9a8,	// (0x0006a6aa) bg_main_sp_fs_ribbon_pane_g1

0xe9b1,	// (0x0006a6b3) bg_main_sp_fs_ribbon_pane_g2

0xe9ba,	// (0x0006a6bc) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0cda,	// (0x0005c9dc) bg_main_sp_fs_ribbon_pane_g

0xe9c2,	// (0x0006a6c4) main_sp_fs_ribbon_scheduler_pane_g1

0xe9cb,	// (0x0006a6cd) main_sp_fs_ribbon_scheduler_pane_g2

0xe9d4,	// (0x0006a6d6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0ce1,	// (0x0005c9e3) main_sp_fs_ribbon_scheduler_pane_g

0xe9dd,	// (0x0006a6df) list_cale_mrui_pane

0x8ec1,	// (0x00064bc3) sp_fs_scroll_pane_cp07_ParamLimits

0x8ec1,	// (0x00064bc3) sp_fs_scroll_pane_cp07

0x8edd,	// (0x00064bdf) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8edd,	// (0x00064bdf) bg_sp_fs_schedule_viewer_highlight

0xe9ea,	// (0x0006a6ec) list_single_sp_fs_schedule_track_pane_cp01

0xe9f2,	// (0x0006a6f4) list_sp_fs_schedule_track_pane

0xe9fa,	// (0x0006a6fc) sp_fs_scroll_pane_cp06_ParamLimits

0xe9fa,	// (0x0006a6fc) sp_fs_scroll_pane_cp06

0xcc49,	// (0x0006894b) bgmain_sp_fs_calendar_pane_g1

0x8eea,	// (0x00064bec) list_single_cale_mrui_pane_ParamLimits

0x8eea,	// (0x00064bec) list_single_cale_mrui_pane

0xa351,	// (0x00066053) list_single_cale_mrui_row_pane_ParamLimits

0xa351,	// (0x00066053) list_single_cale_mrui_row_pane

0xa35e,	// (0x00066060) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa35e,	// (0x00066060) list_single_cale_mrui_row_pane_g1

0xa396,	// (0x00066098) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa396,	// (0x00066098) list_single_cale_mrui_row_pane_t1

0x8f18,	// (0x00064c1a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f18,	// (0x00064c1a) list_single_cale_mrui_row_pane_t2

0xa3a8,	// (0x000660aa) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa3a8,	// (0x000660aa) list_single_cale_mrui_row_pane_t3

0xa3d7,	// (0x000660d9) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa3d7,	// (0x000660d9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb2e,	// (0x0006b830) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb2e,	// (0x0006b830) list_single_cale_mrui_row_pane_t

0x8f7e,	// (0x00064c80) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f7e,	// (0x00064c80) list_single_cmail_header_editor_pane_bg_cp01

0x8f9e,	// (0x00064ca0) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f9e,	// (0x00064ca0) list_single_cmail_header_editor_pane_bg_cp02

0x8fba,	// (0x00064cbc) main_radioblah_text_pane_t1_ParamLimits

0x8fba,	// (0x00064cbc) main_radioblah_text_pane_t1

0xea19,	// (0x0006a71b) cam6_indi_pane_cp01

0xea21,	// (0x0006a723) cam6_mode_pane_cp01

0xea29,	// (0x0006a72b) cam6_pano_pane

0xea3a,	// (0x0006a73c) cam6_zoom_pane_cp01

0xea42,	// (0x0006a744) cam6_pano_image_pane

0xea4d,	// (0x0006a74f) cam6_pano_pane_g1

0xe32d,	// (0x0006a02f) cam6_pano_pane_g2

0xea56,	// (0x0006a758) cam6_pano_pane_g3

0xea5f,	// (0x0006a761) cam6_pano_pane_g4

0xd238,	// (0x00068f3a) cam6_pano_pane_g5

0xea68,	// (0x0006a76a) cam6_pano_pane_g6

0xea32,	// (0x0006a734) cam6_pano_pane_g7

0xea72,	// (0x0006a774) cam6_pano_pane_g8

0xea7b,	// (0x0006a77d) cam6_pano_pane_g9

0x0008,

0xfb37,	// (0x0006b839) cam6_pano_pane_g

0x9beb,	// (0x000658ed) main_browser_tag_pane

0xe8d9,	// (0x0006a5db) grid_navstr_albumart_pane

0xea86,	// (0x0006a788) cell_navstr_albumart_pane_ParamLimits

0xea86,	// (0x0006a788) cell_navstr_albumart_pane

0xeaa6,	// (0x0006a7a8) cell_navstr_albumart_pane_g1

0xc649,	// (0x0006834b) cell_navstr_albumart_pane_g2

0xc659,	// (0x0006835b) cell_navstr_albumart_pane_g3

0xc651,	// (0x00068353) cell_navstr_albumart_pane_g4

0x0003,

0xfb4a,	// (0x0006b84c) cell_navstr_albumart_pane_g

0x8fd5,	// (0x00064cd7) bt_list_pane_ParamLimits

0x8fd5,	// (0x00064cd7) bt_list_pane

0x8ff5,	// (0x00064cf7) bt_list_pane_t1

0x9004,	// (0x00064d06) bt_list_pane_t2

0x0001,

0xfb53,	// (0x0006b855) bt_list_pane_t

0x9beb,	// (0x000658ed) main_cale_prevew_pane

0x9013,	// (0x00064d15) popup_cale_preview_window_ParamLimits

0x9013,	// (0x00064d15) popup_cale_preview_window

0xa4be,	// (0x000661c0) bg_popup_preview_window_pane_cp05_ParamLimits

0xa4be,	// (0x000661c0) bg_popup_preview_window_pane_cp05

0xeaae,	// (0x0006a7b0) list_cale_preview_pane_ParamLimits

0xeaae,	// (0x0006a7b0) list_cale_preview_pane

0x902c,	// (0x00064d2e) list_double_cale_preview_pane_ParamLimits

0x902c,	// (0x00064d2e) list_double_cale_preview_pane

0x903e,	// (0x00064d40) list_single_cale_preview_pane_ParamLimits

0x903e,	// (0x00064d40) list_single_cale_preview_pane

0x9054,	// (0x00064d56) list_single_cale_preview_pane_g1

0x905c,	// (0x00064d5e) list_single_cale_preview_pane_t1_ParamLimits

0x905c,	// (0x00064d5e) list_single_cale_preview_pane_t1

0x9071,	// (0x00064d73) list_double_cale_preview_pane_g1

0x9079,	// (0x00064d7b) list_double_cale_preview_pane_t1_ParamLimits

0x9079,	// (0x00064d7b) list_double_cale_preview_pane_t1

0x908e,	// (0x00064d90) list_double_cale_preview_pane_t2_ParamLimits

0x908e,	// (0x00064d90) list_double_cale_preview_pane_t2

0x0001,

0xfb58,	// (0x0006b85a) list_double_cale_preview_pane_t_ParamLimits

0xfb58,	// (0x0006b85a) list_double_cale_preview_pane_t

0x9beb,	// (0x000658ed) main_ezdial_pane

0xa4be,	// (0x000661c0) main_sp_fs_email_pane_ParamLimits

0x8662,	// (0x00064364) cmail_ddmenu_btn01_pane_ParamLimits

0x8662,	// (0x00064364) cmail_ddmenu_btn01_pane

0x867f,	// (0x00064381) cmail_ddmenu_btn02_pane_ParamLimits

0x867f,	// (0x00064381) cmail_ddmenu_btn02_pane

0x869d,	// (0x0006439f) cmail_ddmenu_btn03_pane_ParamLimits

0x869d,	// (0x0006439f) cmail_ddmenu_btn03_pane

0x86cb,	// (0x000643cd) main_sp_fs_ctrlbar_pane_ParamLimits

0x86e1,	// (0x000643e3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8cc9,	// (0x000649cb) list_cmail_body_pane_ParamLimits

0xe859,	// (0x0006a55b) bg_button_pane_cp12

0xe862,	// (0x0006a564) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe862,	// (0x0006a564) list_single_cmail_header_detail_pane_g3

0xa298,	// (0x00065f9a) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa298,	// (0x00065f9a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfaf9,	// (0x0006b7fb) list_single_cmail_header_detail_pane_t_ParamLimits

0xfaf9,	// (0x0006b7fb) list_single_cmail_header_detail_pane_t

0xa2f0,	// (0x00065ff2) phacti_term_pane_t2_ParamLimits

0xa2f0,	// (0x00065ff2) phacti_term_pane_t2

0x0001,

0xfafe,	// (0x0006b800) phacti_term_pane_t_ParamLimits

0xfafe,	// (0x0006b800) phacti_term_pane_t

0xeaba,	// (0x0006a7bc) aid_size_list_single_double

0x90a6,	// (0x00064da8) popup_ezdial_listscroll_window

0x90c7,	// (0x00064dc9) popup_number_entry_window_cp01

0xa9d4,	// (0x000666d6) bg_popup_call_pane_cp09

0xeac6,	// (0x0006a7c8) ezdial_list_pane

0xeace,	// (0x0006a7d0) scroll_pane_cp23

0xca25,	// (0x00068727) bg_button_pane_cp028_ParamLimits

0xca25,	// (0x00068727) bg_button_pane_cp028

0x90d5,	// (0x00064dd7) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x90d5,	// (0x00064dd7) cmail_ddmenu_btn01_pane_g1

0x90e5,	// (0x00064de7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x90e5,	// (0x00064de7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb5d,	// (0x0006b85f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb5d,	// (0x0006b85f) cmail_ddmenu_btn01_pane_g

0xead6,	// (0x0006a7d8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead6,	// (0x0006a7d8) cmail_ddmenu_btn01_pane_t1

0xc838,	// (0x0006853a) bg_button_pane_cp029_ParamLimits

0xc838,	// (0x0006853a) bg_button_pane_cp029

0x90e5,	// (0x00064de7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x90e5,	// (0x00064de7) cmail_ddmenu_btn02_pane_g1

0x90fe,	// (0x00064e00) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x90fe,	// (0x00064e00) cmail_ddmenu_btn02_pane_t1

0xda26,	// (0x00069728) bg_button_pane_cp031_ParamLimits

0xda26,	// (0x00069728) bg_button_pane_cp031

0x90e5,	// (0x00064de7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x90e5,	// (0x00064de7) cmail_ddmenu_btn03_pane_g1

0x90fe,	// (0x00064e00) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x90fe,	// (0x00064e00) cmail_ddmenu_btn03_pane_t1

0x60de,	// (0x00061de0) cell_dialer2_keypad_pane_t1_ParamLimits

0x60f8,	// (0x00061dfa) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x60f8,	// (0x00061dfa) cell_dialer2_keypad_pane_t1_copy1

0x7f5d,	// (0x00063c5f) ncimui_group_button_pane

0xa4be,	// (0x000661c0) main_sp_fs_calendar_pane_ParamLimits

0x8ce9,	// (0x000649eb) list_single_cmail_header_caption_pane_ParamLimits

0xa305,	// (0x00066007) aid_recal_txt_sm_pane

0x9beb,	// (0x000658ed) mian_recal_day_pane

0xa33f,	// (0x00066041) popup_sp_fs_cale_preview_window_ParamLimits

0xeaeb,	// (0x0006a7ed) list_recal_day_pane

0xa421,	// (0x00066123) list_single_recal_day_pane_ParamLimits

0xa421,	// (0x00066123) list_single_recal_day_pane

0xeb12,	// (0x0006a814) list_single_recal_day_pane_g1_ParamLimits

0xeb12,	// (0x0006a814) list_single_recal_day_pane_g1

0xa433,	// (0x00066135) list_single_recal_day_pane_g2_ParamLimits

0xa433,	// (0x00066135) list_single_recal_day_pane_g2

0xa43f,	// (0x00066141) list_single_recal_day_pane_g3_ParamLimits

0xa43f,	// (0x00066141) list_single_recal_day_pane_g3

0x9122,	// (0x00064e24) list_single_recal_day_pane_g4_ParamLimits

0x9122,	// (0x00064e24) list_single_recal_day_pane_g4

0xa44b,	// (0x0006614d) list_single_recal_day_pane_g5_ParamLimits

0xa44b,	// (0x0006614d) list_single_recal_day_pane_g5

0xa457,	// (0x00066159) list_single_recal_day_pane_g6_ParamLimits

0xa457,	// (0x00066159) list_single_recal_day_pane_g6

0x0004,

0xfb6c,	// (0x0006b86e) list_single_recal_day_pane_g_ParamLimits

0xfb6c,	// (0x0006b86e) list_single_recal_day_pane_g

0xa46b,	// (0x0006616d) list_single_recal_day_pane_t1

0xa47d,	// (0x0006617f) list_single_recal_day_pane_t2

0x0001,

0xfb77,	// (0x0006b879) list_single_recal_day_pane_t

0x913a,	// (0x00064e3c) ncimui_query_button_pane_ParamLimits

0x913a,	// (0x00064e3c) ncimui_query_button_pane

0x914a,	// (0x00064e4c) ncimui_query_button_pane_t1_ParamLimits

0x914a,	// (0x00064e4c) ncimui_query_button_pane_t1

0xeb1e,	// (0x0006a820) ncimui_query_button_pane_t2_ParamLimits

0xeb1e,	// (0x0006a820) ncimui_query_button_pane_t2

0x0001,

0xfb7c,	// (0x0006b87e) ncimui_query_button_pane_t_ParamLimits

0xfb7c,	// (0x0006b87e) ncimui_query_button_pane_t

0x915d,	// (0x00064e5f) query_button_pane_ParamLimits

0x915d,	// (0x00064e5f) query_button_pane

0x9beb,	// (0x000658ed) bg_button_pane_cp0028

0xeb31,	// (0x0006a833) query_button_pane_t1

0x44e0,	// (0x000601e2) main_tport_pane_ParamLimits

0x8bd3,	// (0x000648d5) bg_popup_window_pane_cp01_ParamLimits

0x8bd3,	// (0x000648d5) bg_popup_window_pane_cp01

0x8be1,	// (0x000648e3) heading_pane_cp08_ParamLimits

0x8be1,	// (0x000648e3) heading_pane_cp08

0x8bef,	// (0x000648f1) heading_pane_cp07_ParamLimits

0x8bef,	// (0x000648f1) heading_pane_cp07

0x8c5e,	// (0x00064960) cell_tport_appsw_pane_g2

0x0002,

0xfae6,	// (0x0006b7e8) cell_tport_appsw_pane_g

0x9fd9,	// (0x00065cdb) input_candi_list_open_g1

0xadf0,	// (0x00066af2) list_cale_time_pane_g6_ParamLimits

0xadf0,	// (0x00066af2) list_cale_time_pane_g6

0x4f5d,	// (0x00060c5f) aid_size_touch_calib_1_ParamLimits

0x4f5d,	// (0x00060c5f) aid_size_touch_calib_1

0x4f69,	// (0x00060c6b) aid_size_touch_calib_2_ParamLimits

0x4f69,	// (0x00060c6b) aid_size_touch_calib_2

0x4f77,	// (0x00060c79) aid_size_touch_calib_3_ParamLimits

0x4f77,	// (0x00060c79) aid_size_touch_calib_3

0x4f87,	// (0x00060c89) aid_size_touch_calib_4_ParamLimits

0x4f87,	// (0x00060c89) aid_size_touch_calib_4

0x4f95,	// (0x00060c97) main_touch_calib_button_group_pane_ParamLimits

0x4f95,	// (0x00060c97) main_touch_calib_button_group_pane

0x4fa3,	// (0x00060ca5) main_touch_calib_pane_g1_ParamLimits

0x4faf,	// (0x00060cb1) main_touch_calib_pane_g2_ParamLimits

0x4fbb,	// (0x00060cbd) main_touch_calib_pane_g3_ParamLimits

0x4fc7,	// (0x00060cc9) main_touch_calib_pane_g4_ParamLimits

0xf60d,	// (0x0006b30f) main_touch_calib_pane_g_ParamLimits

0x4fd3,	// (0x00060cd5) main_touch_calib_pane_t1_ParamLimits

0x4fec,	// (0x00060cee) main_touch_calib_pane_t2_ParamLimits

0x5005,	// (0x00060d07) main_touch_calib_pane_t3_ParamLimits

0x501b,	// (0x00060d1d) main_touch_calib_pane_t4_ParamLimits

0x5031,	// (0x00060d33) main_touch_calib_pane_t5_ParamLimits

0xf616,	// (0x0006b318) main_touch_calib_pane_t_ParamLimits

0xcfd8,	// (0x00068cda) list_single_fp_cale_pane_g3_ParamLimits

0xcfd8,	// (0x00068cda) list_single_fp_cale_pane_g3

0x44c4,	// (0x000601c6) bg_button_pane_cp012_ParamLimits

0x44c4,	// (0x000601c6) bg_vkb2_func_pane_cp03_ParamLimits

0x6f1b,	// (0x00062c1d) cell_vitu2_function_top_pane_g1_ParamLimits

0x44c4,	// (0x000601c6) bg_vkb2_func_pane_cp04_ParamLimits

0x7ee5,	// (0x00063be7) main_ncimui_button_group_pane_ParamLimits

0x7ee5,	// (0x00063be7) main_ncimui_button_group_pane

0x7f4b,	// (0x00063c4d) main_ncimui_pane_t3_ParamLimits

0x7f4b,	// (0x00063c4d) main_ncimui_pane_t3

0xe8ef,	// (0x0006a5f1) phacti_button_group_pane

0xeaba,	// (0x0006a7bc) aid_size_list_single_double_ParamLimits

0x90a6,	// (0x00064da8) popup_ezdial_listscroll_window_ParamLimits

0x90c7,	// (0x00064dc9) popup_number_entry_window_cp01_ParamLimits

0x916a,	// (0x00064e6c) phacti_button_pane_ParamLimits

0x916a,	// (0x00064e6c) phacti_button_pane

0x9beb,	// (0x000658ed) bg_button_pane_cp14

0xeb3f,	// (0x0006a841) phacti_button_pane_t1

0x917b,	// (0x00064e7d) main_touch_calib_button_pane_ParamLimits

0x917b,	// (0x00064e7d) main_touch_calib_button_pane

0xa80f,	// (0x00066511) bg_button_pane_cp18_ParamLimits

0xa80f,	// (0x00066511) bg_button_pane_cp18

0xeb4d,	// (0x0006a84f) main_touch_calib_button_pane_t1_ParamLimits

0xeb4d,	// (0x0006a84f) main_touch_calib_button_pane_t1

0xeb63,	// (0x0006a865) main_touch_calib_button_pane_t2_ParamLimits

0xeb63,	// (0x0006a865) main_touch_calib_button_pane_t2

0x0001,

0xfb81,	// (0x0006b883) main_touch_calib_button_pane_t_ParamLimits

0xfb81,	// (0x0006b883) main_touch_calib_button_pane_t

0x9beb,	// (0x000658ed) cell_ncimui_button_pane

0x9beb,	// (0x000658ed) bg_button_pane_cp032

0xeb81,	// (0x0006a883) cell_ncimui_button_pane_t1

0x6154,	// (0x00061e56) image3_infobar_pane_ParamLimits

0x6154,	// (0x00061e56) image3_infobar_pane

0x82c4,	// (0x00063fc6) fs_bigclock_status_pane_ParamLimits

0x82c4,	// (0x00063fc6) fs_bigclock_status_pane

0x82d1,	// (0x00063fd3) main_fs_bigclock_clock_pane_ParamLimits

0x82d1,	// (0x00063fd3) main_fs_bigclock_clock_pane

0x82eb,	// (0x00063fed) main_fs_bigclock_indi_pane_ParamLimits

0x82eb,	// (0x00063fed) main_fs_bigclock_indi_pane

0x8313,	// (0x00064015) main_fs_bigclock_swipe_pane_ParamLimits

0x8313,	// (0x00064015) main_fs_bigclock_swipe_pane

0x9beb,	// (0x000658ed) main_fs_clock_dumped_data

0xe43a,	// (0x0006a13c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe43a,	// (0x0006a13c) list_single_fs_bigclock_indicator_pane_g1

0xe455,	// (0x0006a157) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe455,	// (0x0006a157) list_single_fs_bigclock_indicator_pane_g2

0xe46f,	// (0x0006a171) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe46f,	// (0x0006a171) list_single_fs_bigclock_indicator_pane_g3

0xe489,	// (0x0006a18b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe489,	// (0x0006a18b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0b6a,	// (0x0005c86c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0b6a,	// (0x0005c86c) list_single_fs_bigclock_indicator_pane_g

0xe4b4,	// (0x0006a1b6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4b4,	// (0x0006a1b6) list_single_fs_bigclock_indicator_pane_t1

0xe4dc,	// (0x0006a1de) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4dc,	// (0x0006a1de) list_single_fs_bigclock_indicator_pane_t2

0xe504,	// (0x0006a206) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe504,	// (0x0006a206) list_single_fs_bigclock_indicator_pane_t3

0xe52c,	// (0x0006a22e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe52c,	// (0x0006a22e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0b75,	// (0x0005c877) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0b75,	// (0x0005c877) list_single_fs_bigclock_indicator_pane_t

0xeb8f,	// (0x0006a891) image3_infobar_fav_pane_ParamLimits

0xeb8f,	// (0x0006a891) image3_infobar_fav_pane

0xeb9f,	// (0x0006a8a1) image3_infobar_loc_pane_ParamLimits

0xeb9f,	// (0x0006a8a1) image3_infobar_loc_pane

0xebb3,	// (0x0006a8b5) image3_infobar_time_pane_ParamLimits

0xebb3,	// (0x0006a8b5) image3_infobar_time_pane

0xcc49,	// (0x0006894b) image3_infobar_time_pane_g1

0xebc3,	// (0x0006a8c5) image3_infobar_time_pane_t1

0xcc49,	// (0x0006894b) image3_infobar_loc_pane_g1

0xebd1,	// (0x0006a8d3) image3_infobar_loc_pane_g2

0x0001,

0xfb86,	// (0x0006b888) image3_infobar_loc_pane_g

0xebd9,	// (0x0006a8db) image3_infobar_loc_pane_t1

0xcc49,	// (0x0006894b) image3_infobar_fav_pane_g1

0xebe7,	// (0x0006a8e9) image3_infobar_fav_pane_g2

0x0001,

0xfb8b,	// (0x0006b88d) image3_infobar_fav_pane_g

0xebef,	// (0x0006a8f1) fs_bigclock_status_battery_pane

0xebf8,	// (0x0006a8fa) fs_bigclock_status_signal_pane

0xec01,	// (0x0006a903) fs_bigclock_status_title_pane

0xec0a,	// (0x0006a90c) fs_bigclock_status_signal_pane_g1

0xec13,	// (0x0006a915) fs_bigclock_status_signal_pane_g2

0x0001,

0xfb90,	// (0x0006b892) fs_bigclock_status_signal_pane_g

0xec1b,	// (0x0006a91d) fs_bigclock_status_battery_pane_g1

0xec24,	// (0x0006a926) fs_bigclock_status_battery_pane_g2

0x0001,

0xfb95,	// (0x0006b897) fs_bigclock_status_battery_pane_g

0xec2c,	// (0x0006a92e) fs_bigclock_status_title_pane_t1

0xcc49,	// (0x0006894b) main_fs_bigclock_clock_pane_g1

0xec3a,	// (0x0006a93c) main_fs_bigclock_clock_pane_g2

0xec43,	// (0x0006a945) main_fs_bigclock_clock_pane_g3

0xec43,	// (0x0006a945) main_fs_bigclock_clock_pane_g4

0x0003,

0xfb9a,	// (0x0006b89c) main_fs_bigclock_clock_pane_g

0xec4b,	// (0x0006a94d) main_fs_bigclock_clock_pane_t1

0x918b,	// (0x00064e8d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfba3,	// (0x0006b8a5) main_fs_bigclock_clock_pane_t

0xec59,	// (0x0006a95b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec59,	// (0x0006a95b) list_single_fs_bigclock_indicator_pane

0xec6a,	// (0x0006a96c) list_single_fs_bigclock_pane_ParamLimits

0xec6a,	// (0x0006a96c) list_single_fs_bigclock_pane

0xec90,	// (0x0006a992) main_fs_bigclock_indicator_pane_t1

0xec9f,	// (0x0006a9a1) list_single_fs_bigclock_pane_g1

0xeca7,	// (0x0006a9a9) list_single_fs_bigclock_pane_t1

0xcc49,	// (0x0006894b) main_fs_bigclock_swipe_pane_g1

0xecea,	// (0x0006a9ec) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfbb4,	// (0x0006b8b6) main_fs_bigclock_swipe_pane_g

0xecf2,	// (0x0006a9f4) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf2,	// (0x0006a9f4) main_fs_bigclock_swipe_pane_t1

0x34c3,	// (0x0005f1c5) call_type_pane_ParamLimits

0x9beb,	// (0x000658ed) main_btmg_pane

0xa38a,	// (0x0006608c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa38a,	// (0x0006608c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb27,	// (0x0006b829) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb27,	// (0x0006b829) list_single_cale_mrui_row_pane_g

0xa410,	// (0x00066112) list_recal_vselct_arw_lo_pane

0xeb0a,	// (0x0006a80c) list_recal_vselct_arw_up_pane

0xa418,	// (0x0006611a) list_recal_vselct_pane

0x91de,	// (0x00064ee0) btmg_button_pane

0x91ea,	// (0x00064eec) main_btmg_pane_g1

0x9beb,	// (0x000658ed) bg_button_pane_cp044

0xed0f,	// (0x0006aa11) btmg_button_pane_t1

0xc824,	// (0x00068526) aid_listscroll_gen

0xa4be,	// (0x000661c0) main_cntbar_detail_pane

0xe83b,	// (0x0006a53d) list_cmail_folder_pane

0xcd3d,	// (0x00068a3f) sp_fs_scroll_pane_cp03_ParamLimits

0x91f2,	// (0x00064ef4) list_single_fs_dyc_pane_cp01_ParamLimits

0x91f2,	// (0x00064ef4) list_single_fs_dyc_pane_cp01

0xed1d,	// (0x0006aa1f) aid_size_cmail_indent

0xa4cc,	// (0x000661ce) list_single_dyc_row_pane_cp01

0x923e,	// (0x00064f40) cntbar_detail_list_pane_ParamLimits

0x923e,	// (0x00064f40) cntbar_detail_list_pane

0x9278,	// (0x00064f7a) main_cntbar_detail_cont_pane_ParamLimits

0x9278,	// (0x00064f7a) main_cntbar_detail_cont_pane

0x33e8,	// (0x0005f0ea) scroll_pane_cp032_ParamLimits

0x33e8,	// (0x0005f0ea) scroll_pane_cp032

0x9284,	// (0x00064f86) cntbar_detail_list_event_pane_ParamLimits

0x9284,	// (0x00064f86) cntbar_detail_list_event_pane

0x924a,	// (0x00064f4c) cntbar_detail_list_shct_pane

0xac7b,	// (0x0006697d) aid_list_gen

0xed26,	// (0x0006aa28) aid_scroll

0xed2f,	// (0x0006aa31) aid_size_touch_scroll_bar

0x7668,	// (0x0006336a) aid_list_double

0x9298,	// (0x00064f9a) aid_list_single

0x7656,	// (0x00063358) aid_list_single_lg

0x92a1,	// (0x00064fa3) aid_list_z_g_a_sm

0x92a9,	// (0x00064fab) aid_list_z_g_d

0x92b1,	// (0x00064fb3) aid_txt_z_prm

0x92bf,	// (0x00064fc1) aid_txt_z_prm_cp01

0x92cd,	// (0x00064fcf) aid_txt_z_sec

0x92db,	// (0x00064fdd) main_cntbar_detail_cont_pane_g1_ParamLimits

0x92db,	// (0x00064fdd) main_cntbar_detail_cont_pane_g1

0x92e8,	// (0x00064fea) main_cntbar_detail_cont_pane_g2_ParamLimits

0x92e8,	// (0x00064fea) main_cntbar_detail_cont_pane_g2

0x0001,

0xfbb9,	// (0x0006b8bb) main_cntbar_detail_cont_pane_g_ParamLimits

0xfbb9,	// (0x0006b8bb) main_cntbar_detail_cont_pane_g

0xed38,	// (0x0006aa3a) main_cntbar_detail_cont_pane_t1

0xed46,	// (0x0006aa48) main_cntbar_detail_cont_pane_t2

0xed54,	// (0x0006aa56) main_cntbar_detail_cont_pane_t3

0x0002,

0xfbbe,	// (0x0006b8c0) main_cntbar_detail_cont_pane_t

0x92f4,	// (0x00064ff6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x92f4,	// (0x00064ff6) cell_cntbar_detail_list_shct_pane

0xed62,	// (0x0006aa64) cntbar_detail_list_shct_pane_g1

0xed6b,	// (0x0006aa6d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfbc5,	// (0x0006b8c7) cntbar_detail_list_shct_pane_g

0x9308,	// (0x0006500a) cntbar_detail_list_event_pane_g1_ParamLimits

0x9308,	// (0x0006500a) cntbar_detail_list_event_pane_g1

0x9314,	// (0x00065016) cntbar_detail_list_event_pane_g2_ParamLimits

0x9314,	// (0x00065016) cntbar_detail_list_event_pane_g2

0x0005,

0xfbca,	// (0x0006b8cc) cntbar_detail_list_event_pane_g_ParamLimits

0xfbca,	// (0x0006b8cc) cntbar_detail_list_event_pane_g

0x9380,	// (0x00065082) cntbar_detail_list_event_pane_t1_ParamLimits

0x9380,	// (0x00065082) cntbar_detail_list_event_pane_t1

0x9395,	// (0x00065097) cntbar_detail_list_event_pane_t2_ParamLimits

0x9395,	// (0x00065097) cntbar_detail_list_event_pane_t2

0x0002,

0xfbd7,	// (0x0006b8d9) cntbar_detail_list_event_pane_t_ParamLimits

0xfbd7,	// (0x0006b8d9) cntbar_detail_list_event_pane_t

0xcc49,	// (0x0006894b) cell_cntbar_detail_list_shct_pane_g1

0xb400,	// (0x00067102) navi_pane_mv_g3

0xa4be,	// (0x000661c0) main_cntbar_detail_pane_ParamLimits

0x9beb,	// (0x000658ed) main_notif_wgt_pane

0x5e08,	// (0x00061b0a) aid_tch_main_mp4_pane_g4

0x603d,	// (0x00061d3f) popup_slider_window_cp02

0xa406,	// (0x00066108) list_recal_day_event_pane

0x921e,	// (0x00064f20) cntbar_detail_btn_pane_ParamLimits

0x921e,	// (0x00064f20) cntbar_detail_btn_pane

0x922e,	// (0x00064f30) cntbar_detail_btn_pane_cp01_ParamLimits

0x922e,	// (0x00064f30) cntbar_detail_btn_pane_cp01

0x924a,	// (0x00064f4c) cntbar_detail_list_shct_pane_ParamLimits

0x9256,	// (0x00064f58) cntbar_detail_pane_g1_ParamLimits

0x9256,	// (0x00064f58) cntbar_detail_pane_g1

0x9262,	// (0x00064f64) cntbar_detail_pane_t1_ParamLimits

0x9262,	// (0x00064f64) cntbar_detail_pane_t1

0x9320,	// (0x00065022) cntbar_detail_list_event_pane_g3_ParamLimits

0x9320,	// (0x00065022) cntbar_detail_list_event_pane_g3

0x9338,	// (0x0006503a) cntbar_detail_list_event_pane_g4_ParamLimits

0x9338,	// (0x0006503a) cntbar_detail_list_event_pane_g4

0x9350,	// (0x00065052) cntbar_detail_list_event_pane_g5_ParamLimits

0x9350,	// (0x00065052) cntbar_detail_list_event_pane_g5

0x9368,	// (0x0006506a) cntbar_detail_list_event_pane_g6_ParamLimits

0x9368,	// (0x0006506a) cntbar_detail_list_event_pane_g6

0x93aa,	// (0x000650ac) cntbar_detail_list_event_pane_t3_ParamLimits

0x93aa,	// (0x000650ac) cntbar_detail_list_event_pane_t3

0x93bc,	// (0x000650be) popup_notif_wgt_window_ParamLimits

0x93bc,	// (0x000650be) popup_notif_wgt_window

0x93cc,	// (0x000650ce) popup_submenu_window_cp01_ParamLimits

0x93cc,	// (0x000650ce) popup_submenu_window_cp01

0xa9d4,	// (0x000666d6) bg_popup_window_pane_cp10

0xed74,	// (0x0006aa76) listscroll_notif_wgt_pane

0xed86,	// (0x0006aa88) list_notif_wgt_window

0xed8f,	// (0x0006aa91) scroll_pane_cp033

0x93de,	// (0x000650e0) list_notif_wgt_row_pane_ParamLimits

0x93de,	// (0x000650e0) list_notif_wgt_row_pane

0xed98,	// (0x0006aa9a) aid_size_list_notif_wgt_del

0xeda5,	// (0x0006aaa7) list_notif_wgt_row_pane_g1

0xedb1,	// (0x0006aab3) list_notif_wgt_row_pane_g2

0xedc5,	// (0x0006aac7) list_notif_wgt_row_pane_g3

0x0002,

0xfbde,	// (0x0006b8e0) list_notif_wgt_row_pane_g

0xedd2,	// (0x0006aad4) list_notif_wgt_row_pane_t1

0xede8,	// (0x0006aaea) list_notif_wgt_row_pane_t2

0xedfa,	// (0x0006aafc) list_notif_wgt_row_pane_t3

0x0002,

0xfbe5,	// (0x0006b8e7) list_notif_wgt_row_pane_t

0xd92f,	// (0x00069631) list_recal_day_event_pane_g1

0xee0c,	// (0x0006ab0e) list_recal_day_event_pane_t1

0x9beb,	// (0x000658ed) bg_button_pane_cp045

0x93f0,	// (0x000650f2) cntbar_detail_btn_pane_t1

0xc838,	// (0x0006853a) main_callh_pane_ParamLimits

0xc838,	// (0x0006853a) main_callh_pane

0x9beb,	// (0x000658ed) main_coverflow0_pane

0x9beb,	// (0x000658ed) main_wgtman_pane

0x832b,	// (0x0006402d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x832b,	// (0x0006402d) main_fs_bigclock_unlock_btn_pane

0x8c56,	// (0x00064958) bg_button_pane_cp16

0x8c66,	// (0x00064968) cell_tport_appsw_pane_g3

0x93fe,	// (0x00065100) cf0_flow_pane_ParamLimits

0x93fe,	// (0x00065100) cf0_flow_pane

0xee1b,	// (0x0006ab1d) listscroll_cf0_pane

0xee26,	// (0x0006ab28) main_cf0_pane_g1

0x940d,	// (0x0006510f) main_cf0_pane_t1_ParamLimits

0x940d,	// (0x0006510f) main_cf0_pane_t1

0x9421,	// (0x00065123) main_cf0_pane_t2_ParamLimits

0x9421,	// (0x00065123) main_cf0_pane_t2

0x0001,

0xfbf1,	// (0x0006b8f3) main_cf0_pane_t_ParamLimits

0xfbf1,	// (0x0006b8f3) main_cf0_pane_t

0xee38,	// (0x0006ab3a) scroll_pane_cp11

0x9435,	// (0x00065137) cf0_flow_pane_g1

0x943d,	// (0x0006513f) cf0_flow_pane_g2

0x0001,

0xfbf6,	// (0x0006b8f8) cf0_flow_pane_g

0x9445,	// (0x00065147) cf0_flow_pane_t1

0x9beb,	// (0x000658ed) main_call6_pane

0x9beb,	// (0x000658ed) main_calllock_pane

0x9453,	// (0x00065155) call6_btn_grp_pane_ParamLimits

0x9453,	// (0x00065155) call6_btn_grp_pane

0x9462,	// (0x00065164) call6_pane_g1_ParamLimits

0x9462,	// (0x00065164) call6_pane_g1

0x9471,	// (0x00065173) popup_call6_1st_window_ParamLimits

0x9471,	// (0x00065173) popup_call6_1st_window

0x947f,	// (0x00065181) popup_call6_2nd_window_ParamLimits

0x947f,	// (0x00065181) popup_call6_2nd_window

0x948d,	// (0x0006518f) cell_call6_btn_pane_ParamLimits

0x948d,	// (0x0006518f) cell_call6_btn_pane

0xa9d4,	// (0x000666d6) bg_popup_call2_in_pane_cp03

0xee43,	// (0x0006ab45) popup_call6_1st_window_g1

0xee4b,	// (0x0006ab4d) popup_call6_1st_window_g2

0xee53,	// (0x0006ab55) popup_call6_1st_window_g3

0x0002,

0xfbfb,	// (0x0006b8fd) popup_call6_1st_window_g

0xee5b,	// (0x0006ab5d) popup_call6_1st_window_t1

0xee6a,	// (0x0006ab6c) popup_call6_1st_window_t2

0xee7a,	// (0x0006ab7c) popup_call6_1st_window_t3

0x0002,

0xfc02,	// (0x0006b904) popup_call6_1st_window_t

0xa9d4,	// (0x000666d6) bg_popup_call2_in_pane_cp04

0xee43,	// (0x0006ab45) popup_call6_2nd_window_g1

0xee4b,	// (0x0006ab4d) popup_call6_2nd_window_g2

0xee53,	// (0x0006ab55) popup_call6_2nd_window_g3

0x0002,

0xfbfb,	// (0x0006b8fd) popup_call6_2nd_window_g

0xee5b,	// (0x0006ab5d) popup_call6_2nd_window_t1

0x9beb,	// (0x000658ed) bg_button_pane_cp15

0xee8a,	// (0x0006ab8c) cell_call6_btn_pane_g1

0xee93,	// (0x0006ab95) cell_call6_btn_pane_t1

0x949c,	// (0x0006519e) listscroll_wgtman_pane_ParamLimits

0x949c,	// (0x0006519e) listscroll_wgtman_pane

0x94b8,	// (0x000651ba) wgtman_btn_pane_ParamLimits

0x94b8,	// (0x000651ba) wgtman_btn_pane

0xb207,	// (0x00066f09) aid_scroll_copy1

0xeea2,	// (0x0006aba4) list_wgtman_pane

0x94ed,	// (0x000651ef) wgtman_btn_pane_g1_ParamLimits

0x94ed,	// (0x000651ef) wgtman_btn_pane_g1

0x9515,	// (0x00065217) wgtman_btn_pane_t1_ParamLimits

0x9515,	// (0x00065217) wgtman_btn_pane_t1

0xeeac,	// (0x0006abae) wgtman_btn_pane_t2_ParamLimits

0xeeac,	// (0x0006abae) wgtman_btn_pane_t2

0x0001,

0xfc09,	// (0x0006b90b) wgtman_btn_pane_t_ParamLimits

0xfc09,	// (0x0006b90b) wgtman_btn_pane_t

0x954c,	// (0x0006524e) listrow_wgtman_pane_ParamLimits

0x954c,	// (0x0006524e) listrow_wgtman_pane

0x9567,	// (0x00065269) listrow_wgtman_pane_g1

0x9574,	// (0x00065276) listrow_wgtman_pane_g2

0x0001,

0xfc0e,	// (0x0006b910) listrow_wgtman_pane_g

0x9592,	// (0x00065294) listrow_wgtman_pane_t1

0x95aa,	// (0x000652ac) listrow_wgtman_pane_t2

0x0001,

0xfc13,	// (0x0006b915) listrow_wgtman_pane_t

0x95d0,	// (0x000652d2) wait_bar_pane_cp09

0xeec3,	// (0x0006abc5) main_calllock_btn_pane

0xeecd,	// (0x0006abcf) main_calllock_pane_g1

0x9beb,	// (0x000658ed) bg_button_pane_cp17

0xeed9,	// (0x0006abdb) main_calllock_btn_pane_g1

0xeee2,	// (0x0006abe4) main_calllock_btn_pane_t1

0x9beb,	// (0x000658ed) main_dialer3_pane

0x9beb,	// (0x000658ed) main_fmrd2_pane

0xcc49,	// (0x0006894b) main_fs_bigclock_unlock_btn_pane_g1

0xeef9,	// (0x0006abfb) main_fs_bigclock_unlock_btn_pane_t1

0x95e2,	// (0x000652e4) area_fmrd2_info_pane_ParamLimits

0x95e2,	// (0x000652e4) area_fmrd2_info_pane

0x95f0,	// (0x000652f2) area_fmrd2_visual_pane_ParamLimits

0x95f0,	// (0x000652f2) area_fmrd2_visual_pane

0x95fe,	// (0x00065300) fmrd2_indi_pane_ParamLimits

0x95fe,	// (0x00065300) fmrd2_indi_pane

0x960b,	// (0x0006530d) area_fmrd2_visual_pane_g1

0x9613,	// (0x00065315) area_fmrd2_visual_pane_t1

0x9623,	// (0x00065325) area_fmrd2_visual_pane_t2

0x9633,	// (0x00065335) area_fmrd2_visual_pane_t3

0x0002,

0xfc1d,	// (0x0006b91f) area_fmrd2_visual_pane_t

0x9643,	// (0x00065345) area_fmrd2_info_pane_g1

0x964b,	// (0x0006534d) area_fmrd2_info_pane_t1

0x965b,	// (0x0006535d) area_fmrd2_info_pane_t2

0x966b,	// (0x0006536d) area_fmrd2_info_pane_t3

0x967b,	// (0x0006537d) area_fmrd2_info_pane_t4

0x0003,

0xfc24,	// (0x0006b926) area_fmrd2_info_pane_t

0x9689,	// (0x0006538b) fmrd2_indi_pane_t1

0x9699,	// (0x0006539b) fmrd2_indi_pane_t2

0x96a9,	// (0x000653ab) fmrd2_indi_pane_t3

0x0002,

0xfc2d,	// (0x0006b92f) fmrd2_indi_pane_t

0xe498,	// (0x0006a19a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe498,	// (0x0006a19a) list_single_fs_bigclock_indicator_pane_g5

0xe548,	// (0x0006a24a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe548,	// (0x0006a24a) list_single_fs_bigclock_indicator_pane_t5

0x8dfa,	// (0x00064afc) aid_cell_bcale_month_pane_ParamLimits

0x8dfa,	// (0x00064afc) aid_cell_bcale_month_pane

0x8e18,	// (0x00064b1a) bcale_month_pane_ParamLimits

0x8e18,	// (0x00064b1a) bcale_month_pane

0x8e36,	// (0x00064b38) bcale_preview_pane_ParamLimits

0x8e36,	// (0x00064b38) bcale_preview_pane

0xeca7,	// (0x0006a9a9) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc6,	// (0x0006a9c8) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc6,	// (0x0006a9c8) list_single_fs_bigclock_pane_t2

0x0001,

0xfbaf,	// (0x0006b8b1) list_single_fs_bigclock_pane_t_ParamLimits

0xfbaf,	// (0x0006b8b1) list_single_fs_bigclock_pane_t

0xeef1,	// (0x0006abf3) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfc18,	// (0x0006b91a) main_fs_bigclock_unlock_btn_pane_g

0x96b7,	// (0x000653b9) aid_dia3_key_size_ParamLimits

0x96b7,	// (0x000653b9) aid_dia3_key_size

0x96c3,	// (0x000653c5) aid_dia3_listrow_size_ParamLimits

0x96c3,	// (0x000653c5) aid_dia3_listrow_size

0x96d3,	// (0x000653d5) dia3_keypad_fun_pane_ParamLimits

0x96d3,	// (0x000653d5) dia3_keypad_fun_pane

0x96e5,	// (0x000653e7) dia3_keypad_num_pane_ParamLimits

0x96e5,	// (0x000653e7) dia3_keypad_num_pane

0x96f7,	// (0x000653f9) dia3_listscroll_pane_ParamLimits

0x96f7,	// (0x000653f9) dia3_listscroll_pane

0x9705,	// (0x00065407) dia3_numentry_pane_ParamLimits

0x9705,	// (0x00065407) dia3_numentry_pane

0xef07,	// (0x0006ac09) dia3_list_pane

0xef12,	// (0x0006ac14) scroll_pane_cp12

0x9beb,	// (0x000658ed) bg_dia3_numentry_pane

0x9713,	// (0x00065415) dia3_numentry_pane_t1

0x9722,	// (0x00065424) cell_dia3_key_num_pane

0x972a,	// (0x0006542c) cell_dia3_key0_fun_pane_ParamLimits

0x972a,	// (0x0006542c) cell_dia3_key0_fun_pane

0x9737,	// (0x00065439) cell_dia3_key1_fun_pane_ParamLimits

0x9737,	// (0x00065439) cell_dia3_key1_fun_pane

0x9744,	// (0x00065446) dia3_listrow_pane

0xe1a7,	// (0x00069ea9) bg_dia3_numentry_pane_g1

0x9beb,	// (0x000658ed) bg_button_pane_cp21

0xef1d,	// (0x0006ac1f) cell_dia3_key_num_pane_t1

0xef2b,	// (0x0006ac2d) cell_dia3_key_num_pane_t2

0xef3a,	// (0x0006ac3c) cell_dia3_key_num_pane_t3

0xef49,	// (0x0006ac4b) cell_dia3_key_num_pane_t4

0x0003,

0xfc34,	// (0x0006b936) cell_dia3_key_num_pane_t

0x9beb,	// (0x000658ed) bg_button_pane_cp19

0x9751,	// (0x00065453) cell_dia3_key0_fun_pane_g1

0x9beb,	// (0x000658ed) bg_button_pane_cp20

0x9759,	// (0x0006545b) cell_dia3_key1_fun_pane_g1

0x9761,	// (0x00065463) area_left_week_number_pane

0x9774,	// (0x00065476) area_top_day_name_pane

0x9782,	// (0x00065484) frame_month_view_pane

0xef58,	// (0x0006ac5a) grid_month_view_pane

0x9797,	// (0x00065499) cell_top_day_name_pane_ParamLimits

0x9797,	// (0x00065499) cell_top_day_name_pane

0x97b1,	// (0x000654b3) cell_area_left_week_number_pane_ParamLimits

0x97b1,	// (0x000654b3) cell_area_left_week_number_pane

0x97d4,	// (0x000654d6) cell_month_view_pane_ParamLimits

0x97d4,	// (0x000654d6) cell_month_view_pane

0xef66,	// (0x0006ac68) frm_month_g1

0x9800,	// (0x00065502) frm_month_g2

0x9811,	// (0x00065513) frm_month_g3

0x9822,	// (0x00065524) frm_month_g4

0x9833,	// (0x00065535) frm_month_g5

0x9846,	// (0x00065548) frm_month_g6

0x9859,	// (0x0006555b) frm_month_g7

0xef73,	// (0x0006ac75) frm_month_g8

0x986c,	// (0x0006556e) frm_month_g9

0x9879,	// (0x0006557b) frm_month_g10

0x9886,	// (0x00065588) frm_month_g11

0x9893,	// (0x00065595) frm_month_g12

0x98a0,	// (0x000655a2) frm_month_g13

0x98ad,	// (0x000655af) frm_month_g14

0x98bc,	// (0x000655be) frm_month_g15

0x98cb,	// (0x000655cd) frm_month_g16

0x000f,

0xfc3d,	// (0x0006b93f) frm_month_g

0xef80,	// (0x0006ac82) cell_top_day_name_pane_t1

0x98da,	// (0x000655dc) cell_area_left_week_number_pane_g1

0x98e9,	// (0x000655eb) cell_area_left_week_number_pane_t1

0xceb8,	// (0x00068bba) cell_month_view_pane_g1

0x98ff,	// (0x00065601) cell_month_view_pane_t1

0x9beb,	// (0x000658ed) main_fps_pane

0xe738,	// (0x0006a43a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe738,	// (0x0006a43a) cmail_ddmenu_btn02_pane_cp1

0xe75d,	// (0x0006a45f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe75d,	// (0x0006a45f) cmail_ddmenu_btn02_pane_cp2

0x90f1,	// (0x00064df3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x90f1,	// (0x00064df3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb62,	// (0x0006b864) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb62,	// (0x0006b864) cmail_ddmenu_btn02_pane_g

0x9110,	// (0x00064e12) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9110,	// (0x00064e12) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb67,	// (0x0006b869) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb67,	// (0x0006b869) cmail_ddmenu_btn02_pane_t

0x9915,	// (0x00065617) fps_text_pane_ParamLimits

0x9915,	// (0x00065617) fps_text_pane

0x9922,	// (0x00065624) main_fps_pane_g1_ParamLimits

0x9922,	// (0x00065624) main_fps_pane_g1

0x9930,	// (0x00065632) wait_bar_pane_cp010_ParamLimits

0x9930,	// (0x00065632) wait_bar_pane_cp010

0x993c,	// (0x0006563e) fps_text_pane_t1_ParamLimits

0x993c,	// (0x0006563e) fps_text_pane_t1

0x642d,	// (0x0006212f) cam4_image_uncrop_pane_g1

0x6436,	// (0x00062138) cam4_image_uncrop_pane_g2

0x643f,	// (0x00062141) cam4_image_uncrop_pane_g3

0x6448,	// (0x0006214a) cam4_image_uncrop_pane_g4

0x0003,

0xf744,	// (0x0006b446) cam4_image_uncrop_pane_g

0x9744,	// (0x00065446) dia3_listrow_pane_ParamLimits

0x9beb,	// (0x000658ed) main_phob2_pane

0x8c38,	// (0x0006493a) cell_tport_appsw_pane_cp02_ParamLimits

0x8c38,	// (0x0006493a) cell_tport_appsw_pane_cp02

0x8c47,	// (0x00064949) cell_tport_appsw_pane_cp03_ParamLimits

0x8c47,	// (0x00064949) cell_tport_appsw_pane_cp03

0x9beb,	// (0x000658ed) phob2_contact_card_pane

0x9beb,	// (0x000658ed) phob2_listscroll_pane

0xef93,	// (0x0006ac95) phob2_list_pane

0xef9b,	// (0x0006ac9d) scroll_pane_cp034

0x9955,	// (0x00065657) phob2_cc_data_pane_ParamLimits

0x9955,	// (0x00065657) phob2_cc_data_pane

0x996f,	// (0x00065671) phob2_cc_listscroll_pane_ParamLimits

0x996f,	// (0x00065671) phob2_cc_listscroll_pane

0x954c,	// (0x0006524e) list_double_large_graphic_phob2_pane_ParamLimits

0x954c,	// (0x0006524e) list_double_large_graphic_phob2_pane

0x9989,	// (0x0006568b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9989,	// (0x0006568b) list_double_large_graphic_phob2_pane_g1

0x999f,	// (0x000656a1) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x999f,	// (0x000656a1) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc5e,	// (0x0006b960) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc5e,	// (0x0006b960) list_double_large_graphic_phob2_pane_g

0x99ab,	// (0x000656ad) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99ab,	// (0x000656ad) list_double_large_graphic_phob2_pane_t1

0x99c0,	// (0x000656c2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99c0,	// (0x000656c2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc63,	// (0x0006b965) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc63,	// (0x0006b965) list_double_large_graphic_phob2_pane_t

0x9beb,	// (0x000658ed) list_highlight_pane_cp024

0x99d2,	// (0x000656d4) phob2_cc_button_pane

0x99da,	// (0x000656dc) phob2_cc_data_pane_g1_ParamLimits

0x99da,	// (0x000656dc) phob2_cc_data_pane_g1

0x99e6,	// (0x000656e8) phob2_cc_data_pane_g2_ParamLimits

0x99e6,	// (0x000656e8) phob2_cc_data_pane_g2

0x0001,

0xfc68,	// (0x0006b96a) phob2_cc_data_pane_g_ParamLimits

0xfc68,	// (0x0006b96a) phob2_cc_data_pane_g

0x99f2,	// (0x000656f4) phob2_cc_data_pane_t1_ParamLimits

0x99f2,	// (0x000656f4) phob2_cc_data_pane_t1

0x9a04,	// (0x00065706) phob2_cc_data_pane_t2_ParamLimits

0x9a04,	// (0x00065706) phob2_cc_data_pane_t2

0x9a16,	// (0x00065718) phob2_cc_data_pane_t3_ParamLimits

0x9a16,	// (0x00065718) phob2_cc_data_pane_t3

0x0002,

0xfc6d,	// (0x0006b96f) phob2_cc_data_pane_t_ParamLimits

0xfc6d,	// (0x0006b96f) phob2_cc_data_pane_t

0xefa3,	// (0x0006aca5) phob2_cc_list_pane_ParamLimits

0xefa3,	// (0x0006aca5) phob2_cc_list_pane

0xda70,	// (0x00069772) scroll_pane_cp035_ParamLimits

0xda70,	// (0x00069772) scroll_pane_cp035

0xa4be,	// (0x000661c0) bg_button_pane_cp033

0xefaf,	// (0x0006acb1) phob2_cc_button_pane_g1

0xefbb,	// (0x0006acbd) phob2_cc_button_pane_t1

0xefd0,	// (0x0006acd2) phob2_cc_button_pane_t2

0x0001,

0xfc74,	// (0x0006b976) phob2_cc_button_pane_t

0x9a28,	// (0x0006572a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a28,	// (0x0006572a) list_double_large_graphic_phob2_cc_pane

0x9a4f,	// (0x00065751) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a4f,	// (0x00065751) list_double_large_graphic_phob2_cc_pane_g1

0xa4d5,	// (0x000661d7) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa4d5,	// (0x000661d7) list_double_large_graphic_phob2_cc_pane_g2

0x9a60,	// (0x00065762) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a60,	// (0x00065762) list_double_large_graphic_phob2_cc_pane_g3

0x9a6c,	// (0x0006576e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a6c,	// (0x0006576e) list_double_large_graphic_phob2_cc_pane_g4

0x9a78,	// (0x0006577a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a78,	// (0x0006577a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc79,	// (0x0006b97b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc79,	// (0x0006b97b) list_double_large_graphic_phob2_cc_pane_g

0x9a84,	// (0x00065786) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a84,	// (0x00065786) list_double_large_graphic_phob2_cc_pane_t1

0x9aad,	// (0x000657af) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9aad,	// (0x000657af) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc84,	// (0x0006b986) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc84,	// (0x0006b986) list_double_large_graphic_phob2_cc_pane_t

0xefe2,	// (0x0006ace4) list_highlight_pane_cp025_ParamLimits

0xefe2,	// (0x0006ace4) list_highlight_pane_cp025

0xa4be,	// (0x000661c0) bg_button_pane_cp033_ParamLimits

0xefaf,	// (0x0006acb1) phob2_cc_button_pane_g1_ParamLimits

0xefbb,	// (0x0006acbd) phob2_cc_button_pane_t1_ParamLimits

0xefd0,	// (0x0006acd2) phob2_cc_button_pane_t2_ParamLimits

0xfc74,	// (0x0006b976) phob2_cc_button_pane_t_ParamLimits

0x11b4,	// (0x0005ceb6) popup_wgtman_window

0xd7f0,	// (0x000694f2) scroll_pane_cp038

0x94d5,	// (0x000651d7) wgtman_btn_pane_cp_01_ParamLimits

0x94d5,	// (0x000651d7) wgtman_btn_pane_cp_01

0xeff0,	// (0x0006acf2) wgtman_content_pane

0xeff9,	// (0x0006acfb) wgtman_heading_pane

0x9beb,	// (0x000658ed) bg_heading_pane_cp02

0xf002,	// (0x0006ad04) wgtman_heading_pane_g1

0xf00a,	// (0x0006ad0c) wgtman_heading_pane_t1

0xf018,	// (0x0006ad1a) scroll_pane_cp036

0xf020,	// (0x0006ad22) wgtman_list_pane

0xf028,	// (0x0006ad2a) wgtman_list_pane_t1_ParamLimits

0xf028,	// (0x0006ad2a) wgtman_list_pane_t1

0x638c,	// (0x0006208e) cam4_grid_pane

0x7116,	// (0x00062e18) bg_button_pane_cp015_ParamLimits

0x7128,	// (0x00062e2a) bg_button_pane_cp016_ParamLimits

0x713b,	// (0x00062e3d) bg_button_pane_cp017_ParamLimits

0x7191,	// (0x00062e93) popup_vitu2_query_window_g3_ParamLimits

0x7191,	// (0x00062e93) popup_vitu2_query_window_g3

0x724c,	// (0x00062f4e) popup_vitu2_query_window_t6_ParamLimits

0x724c,	// (0x00062f4e) popup_vitu2_query_window_t6

0x7277,	// (0x00062f79) popup_vitu2_query_window_t7_ParamLimits

0x7277,	// (0x00062f79) popup_vitu2_query_window_t7

0xe785,	// (0x0006a487) cam4_grid_pane_g1

0xe78e,	// (0x0006a490) cam4_grid_pane_g2

0xf042,	// (0x0006ad44) cam4_grid_pane_g3

0xf04b,	// (0x0006ad4d) cam4_grid_pane_g4

0x0003,

0xfc89,	// (0x0006b98b) cam4_grid_pane_g

0x2138,	// (0x0005de3a) aid_placing_vt_slider_lsc_ParamLimits

0x2484,	// (0x0005e186) vidtel_button_pane_ParamLimits

0x2484,	// (0x0005e186) vidtel_button_pane

0x9beb,	// (0x000658ed) bg_button_pane_cp034

0x9ad6,	// (0x000657d8) vidtel_button_pane_g1

0xf056,	// (0x0006ad58) vidtel_button_pane_t1

0xd8fb,	// (0x000695fd) aid_size_vtel_slider_touch

0xda70,	// (0x00069772) scroll_pane_cp039

0xe1e5,	// (0x00069ee7) ncim_query_button_pane_cp01_ParamLimits

0xe204,	// (0x00069f06) ncimui_query_pane_g1_ParamLimits

0xa4be,	// (0x000661c0) input_focus_pane_cp012_ParamLimits

0xe229,	// (0x00069f2b) ncim_query_entry_pane_t1_ParamLimits

0xda70,	// (0x00069772) scroll_pane_cp039_ParamLimits

0xb2eb,	// (0x00066fed) navi_pane_bcale_mc_g1

0xb2f3,	// (0x00066ff5) navi_pane_bcale_mc_t1

0xe7b8,	// (0x0006a4ba) main_sp_fs_email_pane_g1

0xe7c4,	// (0x0006a4c6) main_sp_fs_email_pane_g2

0x0001,

0x0bdb,	// (0x0005c8dd) main_sp_fs_email_pane_g

0xea0c,	// (0x0006a70e) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea0c,	// (0x0006a70e) list_single_cale_mrui_row_pane_g3

0x9130,	// (0x00064e32) list_single_recal_day_pane_g5_event_pane

0xa463,	// (0x00066165) list_single_recal_day_pane_g7

0xf06c,	// (0x0006ad6e) list_recal_day_event_pane_cp01

0xf075,	// (0x0006ad77) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0006ad7f) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0006ad87) list_recal_vselct_pane_cp01

0xd92f,	// (0x00069631) list_recal_day_event_pane_cp01_g1

0xa4e1,	// (0x000661e3) list_recal_day_event_pane_cp01_t1

0xa46b,	// (0x0006616d) list_single_recal_day_pane_t1_ParamLimits

0xa47d,	// (0x0006617f) list_single_recal_day_pane_t2_ParamLimits

0xfb77,	// (0x0006b879) list_single_recal_day_pane_t_ParamLimits

0xa74a,	// (0x0006644c) bg_notes_pane_ParamLimits

0xa7ed,	// (0x000664ef) list_notes_pane_ParamLimits

0x151c,	// (0x0005d21e) scroll_pane_cp06_ParamLimits

0xa80f,	// (0x00066511) main_notes_pane_ParamLimits

0x9beb,	// (0x000658ed) main_welc_pane

0x9ade,	// (0x000657e0) main_welc_body_pane_ParamLimits

0x9ade,	// (0x000657e0) main_welc_body_pane

0x9af8,	// (0x000657fa) main_welc_opti_pane_ParamLimits

0x9af8,	// (0x000657fa) main_welc_opti_pane

0x9b2b,	// (0x0006582d) main_welc_pane_t1_ParamLimits

0x9b2b,	// (0x0006582d) main_welc_pane_t1

0x9b45,	// (0x00065847) main_welc_body_row_pane_ParamLimits

0x9b45,	// (0x00065847) main_welc_body_row_pane

0xda26,	// (0x00069728) main_welc_opti_row_pane_ParamLimits

0xda26,	// (0x00069728) main_welc_opti_row_pane

0xf08f,	// (0x0006ad91) main_welc_opti_row_pane_g1

0x9b6a,	// (0x0006586c) main_welc_opti_row_pane_t1

0xf097,	// (0x0006ad99) main_welc_body_row_pane_t1

0xed7e,	// (0x0006aa80) popup_notif_wgt_heading_pane

0xed98,	// (0x0006aa9a) aid_size_list_notif_wgt_del_ParamLimits

0xeda5,	// (0x0006aaa7) list_notif_wgt_row_pane_g1_ParamLimits

0xedb1,	// (0x0006aab3) list_notif_wgt_row_pane_g2_ParamLimits

0xedc5,	// (0x0006aac7) list_notif_wgt_row_pane_g3_ParamLimits

0xfbde,	// (0x0006b8e0) list_notif_wgt_row_pane_g_ParamLimits

0xedd2,	// (0x0006aad4) list_notif_wgt_row_pane_t1_ParamLimits

0xede8,	// (0x0006aaea) list_notif_wgt_row_pane_t2_ParamLimits

0xedfa,	// (0x0006aafc) list_notif_wgt_row_pane_t3_ParamLimits

0xfbe5,	// (0x0006b8e7) list_notif_wgt_row_pane_t_ParamLimits

0x9567,	// (0x00065269) listrow_wgtman_pane_g1_ParamLimits

0x9574,	// (0x00065276) listrow_wgtman_pane_g2_ParamLimits

0xfc0e,	// (0x0006b910) listrow_wgtman_pane_g_ParamLimits

0x9592,	// (0x00065294) listrow_wgtman_pane_t1_ParamLimits

0x95aa,	// (0x000652ac) listrow_wgtman_pane_t2_ParamLimits

0xfc13,	// (0x0006b915) listrow_wgtman_pane_t_ParamLimits

0x95d0,	// (0x000652d2) wait_bar_pane_cp09_ParamLimits

0x9beb,	// (0x000658ed) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0006ada8) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0006adb0) popup_notif_wgt_heading_pane_t1

0x9beb,	// (0x000658ed) main_vids_pane

0x9beb,	// (0x000658ed) vids_listscroll_pane

0x9b79,	// (0x0006587b) scroll_pane_cp040

0x9beb,	// (0x000658ed) vids_list_pane

0x9b84,	// (0x00065886) vids_list_double_pane_ParamLimits

0x9b84,	// (0x00065886) vids_list_double_pane

0x9b9e,	// (0x000658a0) vids_list_double_pane_g1

0x9ba7,	// (0x000658a9) vids_list_double_pane_t1

0x9bb7,	// (0x000658b9) vids_list_double_pane_t2

0x0001,

0xfc97,	// (0x0006b999) vids_list_double_pane_t

0x44c4,	// (0x000601c6) main_ncimui_pane_ParamLimits

0x7efd,	// (0x00063bff) main_ncimui_pane_g1_ParamLimits

0x7f09,	// (0x00063c0b) main_ncimui_pane_g2_ParamLimits

0x7f09,	// (0x00063c0b) main_ncimui_pane_g2

0x0001,

0xf9b8,	// (0x0006b6ba) main_ncimui_pane_g_ParamLimits

0xf9b8,	// (0x0006b6ba) main_ncimui_pane_g

0x9b11,	// (0x00065813) main_welc_pane_g1_ParamLimits

0x9b11,	// (0x00065813) main_welc_pane_g1

0x9b1d,	// (0x0006581f) main_welc_pane_g2_ParamLimits

0x9b1d,	// (0x0006581f) main_welc_pane_g2

0x0001,

0xfc92,	// (0x0006b994) main_welc_pane_g_ParamLimits

0xfc92,	// (0x0006b994) main_welc_pane_g

0xa74a,	// (0x0006644c) listscroll_mce_pane_ParamLimits

0xb440,	// (0x00067142) wait_bar_pane_cp10

0xc82c,	// (0x0006852e) main_cale_day_pane_ParamLimits

0xc82c,	// (0x0006852e) main_cale_week_pane_ParamLimits

0xa74a,	// (0x0006644c) main_messa_pane_ParamLimits

0x57de,	// (0x000614e0) main_clock2_btn_pane_ParamLimits

0x57de,	// (0x000614e0) main_clock2_btn_pane

0xd060,	// (0x00068d62) main_clock2_btn_pane_cp01_ParamLimits

0xd060,	// (0x00068d62) main_clock2_btn_pane_cp01

0xe9dd,	// (0x0006a6df) list_cale_mrui_pane_ParamLimits

0xee30,	// (0x0006ab32) main_cf0_pane_g2

0x0001,

0xfbec,	// (0x0006b8ee) main_cf0_pane_g

0x9761,	// (0x00065463) area_left_week_number_pane_ParamLimits

0x9774,	// (0x00065476) area_top_day_name_pane_ParamLimits

0x9782,	// (0x00065484) frame_month_view_pane_ParamLimits

0xef58,	// (0x0006ac5a) grid_month_view_pane_ParamLimits

0xef66,	// (0x0006ac68) frm_month_g1_ParamLimits

0x9800,	// (0x00065502) frm_month_g2_ParamLimits

0x9811,	// (0x00065513) frm_month_g3_ParamLimits

0x9822,	// (0x00065524) frm_month_g4_ParamLimits

0x9833,	// (0x00065535) frm_month_g5_ParamLimits

0x9846,	// (0x00065548) frm_month_g6_ParamLimits

0x9859,	// (0x0006555b) frm_month_g7_ParamLimits

0xef73,	// (0x0006ac75) frm_month_g8_ParamLimits

0x986c,	// (0x0006556e) frm_month_g9_ParamLimits

0x9879,	// (0x0006557b) frm_month_g10_ParamLimits

0x9886,	// (0x00065588) frm_month_g11_ParamLimits

0x9893,	// (0x00065595) frm_month_g12_ParamLimits

0x98a0,	// (0x000655a2) frm_month_g13_ParamLimits

0x98ad,	// (0x000655af) frm_month_g14_ParamLimits

0x98bc,	// (0x000655be) frm_month_g15_ParamLimits

0x98cb,	// (0x000655cd) frm_month_g16_ParamLimits

0xfc3d,	// (0x0006b93f) frm_month_g_ParamLimits

0xef80,	// (0x0006ac82) cell_top_day_name_pane_t1_ParamLimits

0x98da,	// (0x000655dc) cell_area_left_week_number_pane_g1_ParamLimits

0x98e9,	// (0x000655eb) cell_area_left_week_number_pane_t1_ParamLimits

0xceb8,	// (0x00068bba) cell_month_view_pane_g1_ParamLimits

0x98ff,	// (0x00065601) cell_month_view_pane_t1_ParamLimits

0xa742,	// (0x00066444) main_clock2_btn_pane_g1

0xf0bc,	// (0x0006adbe) main_clock2_btn_pane_t1

0xa4be,	// (0x000661c0) listscroll_cmail_pane_ParamLimits

0xe7b8,	// (0x0006a4ba) main_sp_fs_email_pane_g1_ParamLimits

0xe7c4,	// (0x0006a4c6) main_sp_fs_email_pane_g2_ParamLimits

0x0bdb,	// (0x0005c8dd) main_sp_fs_email_pane_g_ParamLimits

0xeaeb,	// (0x0006a7ed) list_recal_day_pane_ParamLimits

0xeafc,	// (0x0006a7fe) mian_recal_day_pane_t1

0x8913,	// (0x00064615) list_single_dyc_row_text_pane_t4_ParamLimits

0x8913,	// (0x00064615) list_single_dyc_row_text_pane_t4

0x894a,	// (0x0006464c) list_single_dyc_row_text_pane_t5_ParamLimits

0x894a,	// (0x0006464c) list_single_dyc_row_text_pane_t5

0xa1d9,	// (0x00065edb) list_single_dyc_row_text_pane_t6_ParamLimits

0xa1d9,	// (0x00065edb) list_single_dyc_row_text_pane_t6

0x331a,	// (0x0005f01c) aid_mgn_list_cale_time_pane

0x44c4,	// (0x000601c6) main_gallery2_pane_ParamLimits

0xd076,	// (0x00068d78) main_clock2_pane_cp01_t1

0xd086,	// (0x00068d88) main_clock2_pane_cp01_t3

0x0001,

0x06ba,	// (0x0005c3bc) main_clock2_pane_cp01_t

0x196c,	// (0x0005d66e) cale_week_scroll_pane_g16_ParamLimits

0x196c,	// (0x0005d66e) cale_week_scroll_pane_g16

0xa9d4,	// (0x000666d6) vorec_slider_pane

0xf056,	// (0x0006ad58) vidtel_button_pane_t1_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
