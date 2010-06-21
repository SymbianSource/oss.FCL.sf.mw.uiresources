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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0008c897 };

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
0x0cd6,	// (0x0008d56d) Screen

0x0ce0,	// (0x0008d577) application_window

0x0d16,	// (0x0008d5ad) area_bottom_pane_ParamLimits

0x0d16,	// (0x0008d5ad) area_bottom_pane

0x0d49,	// (0x0008d5e0) area_top_pane_ParamLimits

0x0d49,	// (0x0008d5e0) area_top_pane

0x9f0f,	// (0x000967a6) call_video_uplink_pane_ParamLimits

0x9f0f,	// (0x000967a6) call_video_uplink_pane

0x0dc9,	// (0x0008d660) main_pane_ParamLimits

0x0dc9,	// (0x0008d660) main_pane

0xa47d,	// (0x00096d14) context_pane

0x4a18,	// (0x000912af) navi_pane

0x4a41,	// (0x000912d8) popup_cale_events_window_ParamLimits

0x4a41,	// (0x000912d8) popup_cale_events_window

0xa490,	// (0x00096d27) popup_mup_playback_window

0x4a59,	// (0x000912f0) signal_pane

0xde0b,	// (0x0009a6a2) main_browser_pane

0xdfda,	// (0x0009a871) main_burst_pane

0x9f2b,	// (0x000967c2) main_calc_pane

0xa409,	// (0x00096ca0) main_cale_day_pane

0x47b0,	// (0x00091047) main_cale_month_pane

0xa409,	// (0x00096ca0) main_cale_week_pane

0xdfda,	// (0x0009a871) main_call_pane

0xdae7,	// (0x0009a37e) main_call_poc_pane

0xdfda,	// (0x0009a871) main_camera_pane

0xdfda,	// (0x0009a871) main_chi_dic_pane

0xe7d7,	// (0x0009b06e) main_clock_pane

0xdae7,	// (0x0009a37e) main_fmradio_pane

0xdfda,	// (0x0009a871) main_graph_messa_pane

0xdae7,	// (0x0009a37e) main_help_pane

0xde0b,	// (0x0009a6a2) main_im_pane

0xdd42,	// (0x0009a5d9) main_image_pane_ParamLimits

0xdd42,	// (0x0009a5d9) main_image_pane

0xdae7,	// (0x0009a37e) main_location2_pane

0xdfda,	// (0x0009a871) main_location_pane

0xdd42,	// (0x0009a5d9) main_messa_pane

0xdae7,	// (0x0009a37e) main_mp2_pane

0xdfda,	// (0x0009a871) main_mp_pane

0xdae7,	// (0x0009a37e) main_msg_pane

0xdae7,	// (0x0009a37e) main_mup_eq_pane

0xdae7,	// (0x0009a37e) main_mup_pane

0xde0b,	// (0x0009a6a2) main_notes_pane

0xdae7,	// (0x0009a37e) main_pec_pane

0xdae7,	// (0x0009a37e) main_phob_pane

0xdae7,	// (0x0009a37e) main_pinb_pane

0xdae7,	// (0x0009a37e) main_postcard_pane

0xdae7,	// (0x0009a37e) main_qdial_pane

0xdfda,	// (0x0009a871) main_skin_pane

0xdae7,	// (0x0009a37e) main_smil2_pane

0xdfda,	// (0x0009a871) main_smil_pane

0xdfda,	// (0x0009a871) main_video_pane

0xdfda,	// (0x0009a871) main_video_tele_pane

0xdd42,	// (0x0009a5d9) main_viewer_pane_ParamLimits

0xdd42,	// (0x0009a5d9) main_viewer_pane

0xdfda,	// (0x0009a871) main_vorec_pane

0x480c,	// (0x000910a3) popup_blid_sat_info_window_ParamLimits

0x480c,	// (0x000910a3) popup_blid_sat_info_window

0x4862,	// (0x000910f9) popup_dyc_status_message_window_ParamLimits

0x4862,	// (0x000910f9) popup_dyc_status_message_window

0x4878,	// (0x0009110f) popup_grid_large_graphic_window_ParamLimits

0x4878,	// (0x0009110f) popup_grid_large_graphic_window

0x490e,	// (0x000911a5) popup_loc_request_window_ParamLimits

0x490e,	// (0x000911a5) popup_loc_request_window

0x49f2,	// (0x00091289) popup_wml_address_window_ParamLimits

0x49f2,	// (0x00091289) popup_wml_address_window

0x4644,	// (0x00090edb) call_muted_g1

0x390c,	// (0x000901a3) popup_call_audio_conf_window_ParamLimits

0x390c,	// (0x000901a3) popup_call_audio_conf_window

0x4654,	// (0x00090eeb) popup_call_audio_first_window_ParamLimits

0x4654,	// (0x00090eeb) popup_call_audio_first_window

0x46b2,	// (0x00090f49) popup_call_audio_in_window_ParamLimits

0x46b2,	// (0x00090f49) popup_call_audio_in_window

0x46de,	// (0x00090f75) popup_call_audio_out_window_ParamLimits

0x46de,	// (0x00090f75) popup_call_audio_out_window

0x470c,	// (0x00090fa3) popup_call_audio_second_window_ParamLimits

0x470c,	// (0x00090fa3) popup_call_audio_second_window

0x4752,	// (0x00090fe9) popup_call_audio_wait_window_ParamLimits

0x4752,	// (0x00090fe9) popup_call_audio_wait_window

0x4785,	// (0x0009101c) popup_number_entry_window_ParamLimits

0x4785,	// (0x0009101c) popup_number_entry_window

0xd469,	// (0x00099d00) bg_popup_call_pane_cp05_ParamLimits

0xd469,	// (0x00099d00) bg_popup_call_pane_cp05

0xd489,	// (0x00099d20) popup_number_entry_window_t1

0xd49c,	// (0x00099d33) popup_number_entry_window_t2

0xd4ae,	// (0x00099d45) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0009b95d) popup_number_entry_window_t

0xd72d,	// (0x00099fc4) text_title_cp2

0xd740,	// (0x00099fd7) bg_popup_call_pane_cp_ParamLimits

0xd740,	// (0x00099fd7) bg_popup_call_pane_cp

0xd74e,	// (0x00099fe5) call_thumbnail_pane

0xd756,	// (0x00099fed) popup_call_audio_in_window_g1_ParamLimits

0xd756,	// (0x00099fed) popup_call_audio_in_window_g1

0xd762,	// (0x00099ff9) popup_call_audio_in_window_g2_ParamLimits

0xd762,	// (0x00099ff9) popup_call_audio_in_window_g2

0xd76e,	// (0x0009a005) popup_call_audio_in_window_g3_ParamLimits

0xd76e,	// (0x0009a005) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0009b966) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0009b966) popup_call_audio_in_window_g

0xd77a,	// (0x0009a011) popup_call_audio_in_window_t1_ParamLimits

0xd77a,	// (0x0009a011) popup_call_audio_in_window_t1

0xd795,	// (0x0009a02c) popup_call_audio_in_window_t2_ParamLimits

0xd795,	// (0x0009a02c) popup_call_audio_in_window_t2

0xd7b0,	// (0x0009a047) popup_call_audio_in_window_t3_ParamLimits

0xd7b0,	// (0x0009a047) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0009b96d) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0009b96d) popup_call_audio_in_window_t

0xd740,	// (0x00099fd7) bg_popup_call_pane_cp01_ParamLimits

0xd740,	// (0x00099fd7) bg_popup_call_pane_cp01

0xd74e,	// (0x00099fe5) call_thumbnail_pane_cp02

0xd7c3,	// (0x0009a05a) call_type_pane_cp022

0xd7cb,	// (0x0009a062) popup_call_audio_out_window_g1_ParamLimits

0xd7cb,	// (0x0009a062) popup_call_audio_out_window_g1

0xd7dd,	// (0x0009a074) popup_call_audio_out_window_g2_ParamLimits

0xd7dd,	// (0x0009a074) popup_call_audio_out_window_g2

0xd7e9,	// (0x0009a080) popup_call_audio_out_window_g3_ParamLimits

0xd7e9,	// (0x0009a080) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0009b974) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0009b974) popup_call_audio_out_window_g

0xd7fb,	// (0x0009a092) popup_call_audio_out_window_t1_ParamLimits

0xd7fb,	// (0x0009a092) popup_call_audio_out_window_t1

0xd813,	// (0x0009a0aa) popup_call_audio_out_window_t2_ParamLimits

0xd813,	// (0x0009a0aa) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0009b97b) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0009b97b) popup_call_audio_out_window_t

0xd828,	// (0x0009a0bf) bg_popup_call_pane_ParamLimits

0xd828,	// (0x0009a0bf) bg_popup_call_pane

0x0f52,	// (0x0008d7e9) call_thumbnail_pane_cp_ParamLimits

0x0f52,	// (0x0008d7e9) call_thumbnail_pane_cp

0xd8ac,	// (0x0009a143) call_type_pane_cp01_ParamLimits

0xd8ac,	// (0x0009a143) call_type_pane_cp01

0xd8f0,	// (0x0009a187) popup_call_audio_first_window_g1_ParamLimits

0xd8f0,	// (0x0009a187) popup_call_audio_first_window_g1

0xd93c,	// (0x0009a1d3) popup_call_audio_first_window_g2_ParamLimits

0xd93c,	// (0x0009a1d3) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0009b980) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0009b980) popup_call_audio_first_window_g

0xd980,	// (0x0009a217) popup_call_audio_first_window_t1_ParamLimits

0xd980,	// (0x0009a217) popup_call_audio_first_window_t1

0xda2c,	// (0x0009a2c3) popup_call_audio_first_window_t4_ParamLimits

0xda2c,	// (0x0009a2c3) popup_call_audio_first_window_t4

0xdab8,	// (0x0009a34f) popup_call_audio_first_window_t5_ParamLimits

0xdab8,	// (0x0009a34f) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0009b985) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0009b985) popup_call_audio_first_window_t

0xdae7,	// (0x0009a37e) bg_popup_call_pane_cp02

0xdaf1,	// (0x0009a388) call_type_pane_cp023

0xdaf9,	// (0x0009a390) popup_call_audio_wait_window_g1

0xdb01,	// (0x0009a398) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0009b98c) popup_call_audio_wait_window_g

0xdb09,	// (0x0009a3a0) popup_call_audio_wait_window_t3

0xdb17,	// (0x0009a3ae) bg_popup_call_pane_cp03_ParamLimits

0xdb17,	// (0x0009a3ae) bg_popup_call_pane_cp03

0xdb77,	// (0x0009a40e) call_thumbnail_pane_cp011_ParamLimits

0xdb77,	// (0x0009a40e) call_thumbnail_pane_cp011

0xdb83,	// (0x0009a41a) call_type_pane_cp034_ParamLimits

0xdb83,	// (0x0009a41a) call_type_pane_cp034

0xdbbf,	// (0x0009a456) popup_call_audio_second_window_g1_ParamLimits

0xdbbf,	// (0x0009a456) popup_call_audio_second_window_g1

0xdbfb,	// (0x0009a492) popup_call_audio_second_window_g2_ParamLimits

0xdbfb,	// (0x0009a492) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0009b991) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0009b991) popup_call_audio_second_window_g

0xdc37,	// (0x0009a4ce) popup_call_audio_second_window_t1_ParamLimits

0xdc37,	// (0x0009a4ce) popup_call_audio_second_window_t1

0xdcb8,	// (0x0009a54f) popup_call_audio_second_window_t2_ParamLimits

0xdcb8,	// (0x0009a54f) popup_call_audio_second_window_t2

0xdcee,	// (0x0009a585) popup_call_audio_second_window_t3_ParamLimits

0xdcee,	// (0x0009a585) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0009b996) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0009b996) popup_call_audio_second_window_t

0xdae7,	// (0x0009a37e) bg_popup_call_pane_cp04

0xdd24,	// (0x0009a5bb) list_conf_pane

0xdd2c,	// (0x0009a5c3) popup_call_audio_conf_window_t1

0xdd3a,	// (0x0009a5d1) call_thumbnail_pane_g1

0xdd42,	// (0x0009a5d9) bg_pinb_pane_ParamLimits

0xdd42,	// (0x0009a5d9) bg_pinb_pane

0xdd50,	// (0x0009a5e7) find_pinb_pane

0xdd59,	// (0x0009a5f0) listscroll_pinb_pane_ParamLimits

0xdd59,	// (0x0009a5f0) listscroll_pinb_pane

0xdd68,	// (0x0009a5ff) pinb_bg_pane_g1

0x0f76,	// (0x0008d80d) pinb_bg_pane_g2

0x0f80,	// (0x0008d817) pinb_bg_pane_g3

0x0f8a,	// (0x0008d821) pinb_bg_pane_g4

0x0f94,	// (0x0008d82b) pinb_bg_pane_g5

0x0f9e,	// (0x0008d835) pinb_bg_pane_g6

0x0fa7,	// (0x0008d83e) pinb_bg_pane_g7

0x0fb0,	// (0x0008d847) pinb_bg_pane_g8

0x0fbb,	// (0x0008d852) pinb_bg_pane_g9

0x0fc5,	// (0x0008d85c) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0009b99d) pinb_bg_pane_g

0x0fe0,	// (0x0008d877) grid_pinb_pane

0x0fe9,	// (0x0008d880) list_pinb_pane

0x0ff2,	// (0x0008d889) scroll_pane_cp01_ParamLimits

0x0ff2,	// (0x0008d889) scroll_pane_cp01

0xdd72,	// (0x0009a609) find_pinb_pane_g1_ParamLimits

0xdd72,	// (0x0009a609) find_pinb_pane_g1

0xdd8a,	// (0x0009a621) find_pinb_pane_t1

0xdd9c,	// (0x0009a633) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0009b9b7) find_pinb_pane_t

0xddb1,	// (0x0009a648) input_focus_pane_cp01_ParamLimits

0xddb1,	// (0x0009a648) input_focus_pane_cp01

0x1004,	// (0x0008d89b) cell_pinb_pane_ParamLimits

0x1004,	// (0x0008d89b) cell_pinb_pane

0x101f,	// (0x0008d8b6) cell_pinb_pane_g1_ParamLimits

0x101f,	// (0x0008d8b6) cell_pinb_pane_g1

0x102f,	// (0x0008d8c6) cell_pinb_pane_g2_ParamLimits

0x102f,	// (0x0008d8c6) cell_pinb_pane_g2

0xddbd,	// (0x0009a654) cell_pinb_pane_g3_ParamLimits

0xddbd,	// (0x0009a654) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0009b9bc) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0009b9bc) cell_pinb_pane_g

0xdae7,	// (0x0009a37e) grid_highlight_pane_cp01

0x103b,	// (0x0008d8d2) list_pinb_item_pane_ParamLimits

0x103b,	// (0x0008d8d2) list_pinb_item_pane

0xdae7,	// (0x0009a37e) list_highlight_pane_cp02

0x104d,	// (0x0008d8e4) list_pinb_item_pane_g1_ParamLimits

0x104d,	// (0x0008d8e4) list_pinb_item_pane_g1

0x105a,	// (0x0008d8f1) list_pinb_item_pane_g2_ParamLimits

0x105a,	// (0x0008d8f1) list_pinb_item_pane_g2

0x1066,	// (0x0008d8fd) list_pinb_item_pane_g3_ParamLimits

0x1066,	// (0x0008d8fd) list_pinb_item_pane_g3

0x1077,	// (0x0008d90e) list_pinb_item_pane_g4_ParamLimits

0x1077,	// (0x0008d90e) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0009b9c3) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0009b9c3) list_pinb_item_pane_g

0x1083,	// (0x0008d91a) list_pinb_item_pane_t1_ParamLimits

0x1083,	// (0x0008d91a) list_pinb_item_pane_t1

0x10b8,	// (0x0008d94f) calc_display_pane

0x10d4,	// (0x0008d96b) calc_paper_pane

0x10f5,	// (0x0008d98c) grid_calc_pane

0xdae7,	// (0x0009a37e) bg_list_pane_cp01

0x9f4b,	// (0x000967e2) clock_g1

0x1111,	// (0x0008d9a8) clock_g2

0x0001,

0xf135,	// (0x0009b9cc) clock_g

0x1119,	// (0x0008d9b0) clock_t1_ParamLimits

0x1119,	// (0x0008d9b0) clock_t1

0x112e,	// (0x0008d9c5) clock_t2_ParamLimits

0x112e,	// (0x0008d9c5) clock_t2

0x1140,	// (0x0008d9d7) clock_t3_ParamLimits

0x1140,	// (0x0008d9d7) clock_t3

0x1152,	// (0x0008d9e9) clock_t4_ParamLimits

0x1152,	// (0x0008d9e9) clock_t4

0x1164,	// (0x0008d9fb) clock_t5_ParamLimits

0x1164,	// (0x0008d9fb) clock_t5

0x1179,	// (0x0008da10) clock_t6_ParamLimits

0x1179,	// (0x0008da10) clock_t6

0x118b,	// (0x0008da22) clock_t7_ParamLimits

0x118b,	// (0x0008da22) clock_t7

0x119d,	// (0x0008da34) clock_t8_ParamLimits

0x119d,	// (0x0008da34) clock_t8

0x11af,	// (0x0008da46) clock_t9_ParamLimits

0x11af,	// (0x0008da46) clock_t9

0x0008,

0xf13a,	// (0x0009b9d1) clock_t_ParamLimits

0xf13a,	// (0x0009b9d1) clock_t

0xddc9,	// (0x0009a660) popup_clock_analogue_window_cp02

0xddc9,	// (0x0009a660) popup_clock_digital_window_cp01

0xddd1,	// (0x0009a668) listscroll_help_pane

0xdae7,	// (0x0009a37e) phob_pre_status_pane

0xdddb,	// (0x0009a672) grid_qdial_pane

0xdd42,	// (0x0009a5d9) listscroll_mce_pane

0xdd42,	// (0x0009a5d9) bg_notes_pane

0xdde5,	// (0x0009a67c) list_notes_pane

0x11c1,	// (0x0008da58) scroll_pane_cp06

0xddf3,	// (0x0009a68a) bg_calc_paper_pane

0x9f53,	// (0x000967ea) list_calc_pane

0xde0b,	// (0x0009a6a2) bg_calc_display_pane

0x9f6d,	// (0x00096804) calc_display_pane_t1

0x9f82,	// (0x00096819) calc_display_pane_t2

0x9f97,	// (0x0009682e) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0009b9e4) calc_display_pane_t

0x11d3,	// (0x0008da6a) cell_calc_pane_ParamLimits

0x11d3,	// (0x0008da6a) cell_calc_pane

0xde17,	// (0x0009a6ae) bg_calc_paper_pane_g1

0xde23,	// (0x0009a6ba) bg_calc_paper_pane_g2

0xde2f,	// (0x0009a6c6) bg_calc_paper_pane_g3

0xde3b,	// (0x0009a6d2) bg_calc_paper_pane_g4

0xde47,	// (0x0009a6de) bg_calc_paper_pane_g5

0x1206,	// (0x0008da9d) bg_calc_paper_pane_g6

0x1215,	// (0x0008daac) bg_calc_paper_pane_g7

0x1224,	// (0x0008dabb) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0009b9eb) bg_calc_paper_pane_g

0x1233,	// (0x0008daca) calc_bg_paper_pane_g9

0x1242,	// (0x0008dad9) list_calc_item_pane_ParamLimits

0x1242,	// (0x0008dad9) list_calc_item_pane

0xde53,	// (0x0009a6ea) list_calc_item_pane_g1

0x9fa9,	// (0x00096840) list_calc_item_pane_t1_ParamLimits

0x9fa9,	// (0x00096840) list_calc_item_pane_t1

0x1256,	// (0x0008daed) list_calc_item_pane_t2_ParamLimits

0x1256,	// (0x0008daed) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0009b9fc) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0009b9fc) list_calc_item_pane_t

0xde60,	// (0x0009a6f7) cell_calc_pane_g1

0xde6a,	// (0x0009a701) grid_highlight_pane_cp02

0xde8c,	// (0x0009a723) bg_calc_display_pane_g1

0x9fbb,	// (0x00096852) bg_calc_display_pane_g2

0xde95,	// (0x0009a72c) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0009ba06) bg_calc_display_pane_g

0x1284,	// (0x0008db1b) cell_qdial_pane_ParamLimits

0x1284,	// (0x0008db1b) cell_qdial_pane

0x1296,	// (0x0008db2d) cell_qdial_pane_g1_ParamLimits

0x1296,	// (0x0008db2d) cell_qdial_pane_g1

0x12ac,	// (0x0008db43) cell_qdial_pane_g2_ParamLimits

0x12ac,	// (0x0008db43) cell_qdial_pane_g2

0xde9e,	// (0x0009a735) cell_qdial_pane_g3_ParamLimits

0xde9e,	// (0x0009a735) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0009ba0d) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0009ba0d) cell_qdial_pane_g

0x12d3,	// (0x0008db6a) cell_qdial_pane_t1_ParamLimits

0x12d3,	// (0x0008db6a) cell_qdial_pane_t1

0x12eb,	// (0x0008db82) cell_qdial_pane_t2_ParamLimits

0x12eb,	// (0x0008db82) cell_qdial_pane_t2

0x12fe,	// (0x0008db95) cell_qdial_pane_t3_ParamLimits

0x12fe,	// (0x0008db95) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0009ba16) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0009ba16) cell_qdial_pane_t

0xdae7,	// (0x0009a37e) grid_highlight_pane_cp04

0xdeaa,	// (0x0009a741) thumbnail_qdial_pane_ParamLimits

0xdeaa,	// (0x0009a741) thumbnail_qdial_pane

0xdf06,	// (0x0009a79d) list_help_pane

0xdf10,	// (0x0009a7a7) scroll_pane_cp02

0x1311,	// (0x0008dba8) help_list_pane_t1_ParamLimits

0x1311,	// (0x0008dba8) help_list_pane_t1

0x9fc5,	// (0x0009685c) bg_notes_pane_g2

0x9fcd,	// (0x00096864) bg_notes_pane_g3

0x9fd5,	// (0x0009686c) notes_bg_pane_g1

0x9fdd,	// (0x00096874) notes_bg_pane_g4

0x9fe5,	// (0x0009687c) notes_bg_pane_g5

0x9fed,	// (0x00096884) notes_bg_pane_g6

0x9ff5,	// (0x0009688c) notes_bg_pane_g7

0x9ffd,	// (0x00096894) notes_bg_pane_g8

0xa005,	// (0x0009689c) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0009ba34) notes_bg_pane_g

0x132d,	// (0x0008dbc4) list_notes_text_pane_ParamLimits

0x132d,	// (0x0008dbc4) list_notes_text_pane

0xdf19,	// (0x0009a7b0) list_notes_text_pane_g1

0x1350,	// (0x0008dbe7) list_notes_text_pane_t1

0x135e,	// (0x0008dbf5) listscroll_cale_week_pane

0x1388,	// (0x0008dc1f) bg_cale_heading_pane

0xdf3c,	// (0x0009a7d3) bg_cale_pane_cp01

0x13a0,	// (0x0008dc37) cale_week_corner_pane

0x13bf,	// (0x0008dc56) cale_week_day_heading_pane

0x13dc,	// (0x0008dc73) cale_week_scroll_pane_g1

0x13ef,	// (0x0008dc86) cale_week_scroll_pane_g2

0x1407,	// (0x0008dc9e) cale_week_scroll_pane_g3

0x141f,	// (0x0008dcb6) cale_week_scroll_pane_g4

0x1437,	// (0x0008dcce) cale_week_scroll_pane_g5

0x144f,	// (0x0008dce6) cale_week_scroll_pane_g6

0x1467,	// (0x0008dcfe) cale_week_scroll_pane_g7

0x147f,	// (0x0008dd16) cale_week_scroll_pane_g8

0x149b,	// (0x0008dd32) cale_week_scroll_pane_g9

0x14b3,	// (0x0008dd4a) cale_week_scroll_pane_g10

0x14cb,	// (0x0008dd62) cale_week_scroll_pane_g11

0x14e3,	// (0x0008dd7a) cale_week_scroll_pane_g12

0x14fb,	// (0x0008dd92) cale_week_scroll_pane_g13

0x1513,	// (0x0008ddaa) cale_week_scroll_pane_g14

0x152b,	// (0x0008ddc2) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0009ba43) cale_week_scroll_pane_g

0x155f,	// (0x0008ddf6) cale_week_time_pane

0x157b,	// (0x0008de12) grid_cale_week_pane

0xdf6b,	// (0x0009a802) scroll_pane_cp08

0x1599,	// (0x0008de30) cell_cale_week_pane_ParamLimits

0x1599,	// (0x0008de30) cell_cale_week_pane

0x160f,	// (0x0008dea6) cale_week_day_heading_pane_t1

0x1639,	// (0x0008ded0) cale_week_day_heading_pane_t2

0x1668,	// (0x0008deff) cale_week_day_heading_pane_t3

0x1697,	// (0x0008df2e) cale_week_day_heading_pane_t4

0x16c6,	// (0x0008df5d) cale_week_day_heading_pane_t5

0x16f5,	// (0x0008df8c) cale_week_day_heading_pane_t6

0x1724,	// (0x0008dfbb) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0009ba64) cale_week_day_heading_pane_t

0xdf88,	// (0x0009a81f) bg_cale_side_pane

0x174e,	// (0x0008dfe5) cale_week_time_pane_t1

0x1788,	// (0x0008e01f) cale_week_time_pane_t2

0x17c2,	// (0x0008e059) cale_week_time_pane_t3

0x17fc,	// (0x0008e093) cale_week_time_pane_t4

0x1836,	// (0x0008e0cd) cale_week_time_pane_t5

0x1870,	// (0x0008e107) cale_week_time_pane_t6

0x18aa,	// (0x0008e141) cale_week_time_pane_t7

0x18e4,	// (0x0008e17b) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0009ba73) cale_week_time_pane_t

0x191e,	// (0x0008e1b5) cell_cale_week_pane_g2

0x193d,	// (0x0008e1d4) cell_cale_week_pane_g3_ParamLimits

0x193d,	// (0x0008e1d4) cell_cale_week_pane_g3

0xdf96,	// (0x0009a82d) grid_highlight_pane_cp07

0xdf9e,	// (0x0009a835) listscroll_gms_pane

0xdfa8,	// (0x0009a83f) grid_gms_pane

0xdfb1,	// (0x0009a848) listscroll_gms_pane_g1

0xdfb9,	// (0x0009a850) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0009ba84) listscroll_gms_pane_g

0x1955,	// (0x0008e1ec) scroll_pane_cp010

0x1960,	// (0x0008e1f7) cell_gms_pane_ParamLimits

0x1960,	// (0x0008e1f7) cell_gms_pane

0x1970,	// (0x0008e207) cell_gms_pane_g1

0xdfc1,	// (0x0009a858) cell_gms_pane_g2

0xdf19,	// (0x0009a7b0) cell_gms_pane_g3

0xdfc9,	// (0x0009a860) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0009ba89) cell_gms_pane_g

0xdfd2,	// (0x0009a869) grid_highlight_pane_cp09

0x45f2,	// (0x00090e89) phob_pre_status_pane_g1

0x45fa,	// (0x00090e91) phob_pre_status_pane_g2

0x4602,	// (0x00090e99) phob_pre_status_pane_g3

0x460a,	// (0x00090ea1) phob_pre_status_pane_g4

0x0004,

0xf5a0,	// (0x0009be37) phob_pre_status_pane_g

0x461a,	// (0x00090eb1) phob_pre_status_pane_t1

0x4628,	// (0x00090ebf) phob_pre_status_pane_t2

0x4636,	// (0x00090ecd) phob_pre_status_pane_t3

0x0002,

0xf5ab,	// (0x0009be42) phob_pre_status_pane_t

0xdfda,	// (0x0009a871) bg_list_pane_cp05

0x1980,	// (0x0008e217) grid_vorec_pane

0xdfe2,	// (0x0009a879) vorec_t1

0xdff8,	// (0x0009a88f) vorec_t2

0xe006,	// (0x0009a89d) vorec_t3

0x1988,	// (0x0008e21f) vorec_t4

0x9e97,	// (0x0009672e) vorec_t5

0x9ea5,	// (0x0009673c) vorec_t6

0x0004,

0xf1fb,	// (0x0009ba92) vorec_t

0x9eb3,	// (0x0009674a) wait_bar_pane_cp01

0x1996,	// (0x0008e22d) cell_vorec_pane_ParamLimits

0x1996,	// (0x0008e22d) cell_vorec_pane

0xa00d,	// (0x000968a4) cell_vorec_pane_g1

0xdae7,	// (0x0009a37e) grid_highlight_pane_cp05

0x19bb,	// (0x0008e252) cams_zoom_pane

0x19ca,	// (0x0008e261) image_vga_pane

0x19e2,	// (0x0008e279) main_camera_pane_g1

0x19f2,	// (0x0008e289) main_camera_pane_g2

0x1a02,	// (0x0008e299) main_camera_pane_g3

0x1a12,	// (0x0008e2a9) main_camera_pane_g4

0x1a22,	// (0x0008e2b9) main_camera_pane_g5

0x1a32,	// (0x0008e2c9) main_camera_pane_g6

0x1a42,	// (0x0008e2d9) main_camera_pane_g7

0x0007,

0xf206,	// (0x0009ba9d) main_camera_pane_g

0x1a52,	// (0x0008e2e9) main_camera_pane_t1

0x1a68,	// (0x0008e2ff) main_camera_pane_t2

0x0001,

0xf217,	// (0x0009baae) main_camera_pane_t

0x1a9a,	// (0x0008e331) cams_zoom_pane_cp_ParamLimits

0x1a9a,	// (0x0008e331) cams_zoom_pane_cp

0x1ac2,	// (0x0008e359) image_cif_pane_ParamLimits

0x1ac2,	// (0x0008e359) image_cif_pane

0x1af3,	// (0x0008e38a) image_subqcif_pane

0x1afb,	// (0x0008e392) main_video_pane_g1_ParamLimits

0x1afb,	// (0x0008e392) main_video_pane_g1

0x1b1f,	// (0x0008e3b6) main_video_pane_g2_ParamLimits

0x1b1f,	// (0x0008e3b6) main_video_pane_g2

0x1b53,	// (0x0008e3ea) main_video_pane_g3_ParamLimits

0x1b53,	// (0x0008e3ea) main_video_pane_g3

0x1b81,	// (0x0008e418) main_video_pane_g4_ParamLimits

0x1b81,	// (0x0008e418) main_video_pane_g4

0x1baf,	// (0x0008e446) main_video_pane_g5_ParamLimits

0x1baf,	// (0x0008e446) main_video_pane_g5

0xe02e,	// (0x0009a8c5) main_video_pane_g6_ParamLimits

0xe02e,	// (0x0009a8c5) main_video_pane_g6

0x0006,

0xf21c,	// (0x0009bab3) main_video_pane_g_ParamLimits

0xf21c,	// (0x0009bab3) main_video_pane_g

0x1bd6,	// (0x0008e46d) main_video_pane_t1_ParamLimits

0x1bd6,	// (0x0008e46d) main_video_pane_t1

0xe048,	// (0x0009a8df) cams_zoom_pane_g1

0xe051,	// (0x0009a8e8) cams_zoom_pane_g2

0xe05a,	// (0x0009a8f1) cams_zoom_pane_g3

0xe063,	// (0x0009a8fa) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0009bac2) cams_zoom_pane_g

0x1c33,	// (0x0008e4ca) grid_cams_pane

0x1c48,	// (0x0008e4df) linegrid_cams_pane

0x1c59,	// (0x0008e4f0) cell_cams_pane_ParamLimits

0x1c59,	// (0x0008e4f0) cell_cams_pane

0xe06c,	// (0x0009a903) cams_burst_image_pane

0xe074,	// (0x0009a90b) cell_cams_pane_g1

0xdae7,	// (0x0009a37e) grid_highlight_pane_cp03

0xde60,	// (0x0009a6f7) mp_bg_pane_g1

0xdae7,	// (0x0009a37e) bg_list_pane_cp03

0xa32e,	// (0x00096bc5) bg_mp_pane

0xa336,	// (0x00096bcd) grid_mp_pane

0xa33e,	// (0x00096bd5) media_player_g1

0xa346,	// (0x00096bdd) media_player_t1

0xa354,	// (0x00096beb) media_player_t2

0xa362,	// (0x00096bf9) media_player_t3

0xa370,	// (0x00096c07) media_player_t4

0xa37e,	// (0x00096c15) media_player_t5

0xa38c,	// (0x00096c23) media_player_t6

0xa39a,	// (0x00096c31) media_player_t7

0x0006,

0xf58a,	// (0x0009be21) media_player_t

0xa3a8,	// (0x00096c3f) wait_bar_pane_cp02

0xf56f,	// (0x0009be06) main_usb_pane_t

0x45e9,	// (0x00090e80) cell_mp_pane

0xde60,	// (0x0009a6f7) cell_mp_pane_g1

0xdae7,	// (0x0009a37e) grid_highlight_pane_cp06

0xe07c,	// (0x0009a913) grid_skin_colour_pane

0xe084,	// (0x0009a91b) list_highlight_pane_cp03

0x1d67,	// (0x0008e5fe) skin_g1

0xe08c,	// (0x0009a923) skin_t1

0xe09b,	// (0x0009a932) skin_t2

0x0001,

0xf260,	// (0x0009baf7) skin_t

0x1d6f,	// (0x0008e606) cell_skin_colour_pane_ParamLimits

0x1d6f,	// (0x0008e606) cell_skin_colour_pane

0xe0a9,	// (0x0009a940) cell_skin_colour_pane_g1

0x1dd8,	// (0x0008e66f) call_video_g1_ParamLimits

0x1dd8,	// (0x0008e66f) call_video_g1

0x1dee,	// (0x0008e685) call_video_g2_ParamLimits

0x1dee,	// (0x0008e685) call_video_g2

0x0001,

0xf265,	// (0x0009bafc) call_video_g_ParamLimits

0xf265,	// (0x0009bafc) call_video_g

0x1e36,	// (0x0008e6cd) call_video_uplink_pane_cp1_ParamLimits

0x1e36,	// (0x0008e6cd) call_video_uplink_pane_cp1

0xe0bb,	// (0x0009a952) call_video_uplink_pane_cp2

0x1ecb,	// (0x0008e762) video_down_crop_pane_ParamLimits

0x1ecb,	// (0x0008e762) video_down_crop_pane

0x1f8e,	// (0x0008e825) video_down_pane_ParamLimits

0x1f8e,	// (0x0008e825) video_down_pane

0xe0c3,	// (0x0009a95a) video_down_subqcif_pane_ParamLimits

0xe0c3,	// (0x0009a95a) video_down_subqcif_pane

0xe0db,	// (0x0009a972) video_down_subqcif_pane_cp_ParamLimits

0xe0db,	// (0x0009a972) video_down_subqcif_pane_cp

0xe0ff,	// (0x0009a996) im_reading_pane_ParamLimits

0xe0ff,	// (0x0009a996) im_reading_pane

0x204b,	// (0x0008e8e2) im_writing_pane_ParamLimits

0x204b,	// (0x0008e8e2) im_writing_pane

0x2061,	// (0x0008e8f8) im_reading_pane_t1

0xe119,	// (0x0009a9b0) list_im_pane

0xe12a,	// (0x0009a9c1) scroll_pane_cp07

0x2097,	// (0x0008e92e) im_writing_pane_t1_ParamLimits

0x2097,	// (0x0008e92e) im_writing_pane_t1

0xe143,	// (0x0009a9da) im_writing_pane_t2_ParamLimits

0xe143,	// (0x0009a9da) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0009bb06) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0009bb06) im_writing_pane_t

0xdae7,	// (0x0009a37e) input_focus_pane_cp04

0xdae7,	// (0x0009a37e) input_focus_pane_cp05

0x20ac,	// (0x0008e943) list_im_single_pane_ParamLimits

0x20ac,	// (0x0008e943) list_im_single_pane

0xe160,	// (0x0009a9f7) list_single_im_pane_t1

0x45af,	// (0x00090e46) blid_accuracy_pane

0x45b7,	// (0x00090e4e) blid_compass_pane

0x45bf,	// (0x00090e56) main_location_t1

0x45cd,	// (0x00090e64) main_location_t2

0x45db,	// (0x00090e72) main_location_t3

0x0002,

0xf599,	// (0x0009be30) main_location_t

0xdae7,	// (0x0009a37e) aid_levels_location

0xde60,	// (0x0009a6f7) blid_accuracy_pane_g1

0xde60,	// (0x0009a6f7) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0009bb68) blid_accuracy_pane_g

0xe19a,	// (0x0009aa31) wml_content_pane

0xe1d8,	// (0x0009aa6f) wml_button_pane_ParamLimits

0xe1d8,	// (0x0009aa6f) wml_button_pane

0x20c2,	// (0x0008e959) wml_list_single_large_pane_ParamLimits

0x20c2,	// (0x0008e959) wml_list_single_large_pane

0x20d6,	// (0x0008e96d) wml_list_single_medium_pane_ParamLimits

0x20d6,	// (0x0008e96d) wml_list_single_medium_pane

0x20eb,	// (0x0008e982) wml_list_single_small_pane_ParamLimits

0x20eb,	// (0x0008e982) wml_list_single_small_pane

0xe1ec,	// (0x0009aa83) wml_selection_box_pane_ParamLimits

0xe1ec,	// (0x0009aa83) wml_selection_box_pane

0xe1ff,	// (0x0009aa96) wml_list_single_pane_t1

0xe20e,	// (0x0009aaa5) wml_list_single_medium_pane_t1

0xe21d,	// (0x0009aab4) wml_list_single_large_pane_t1

0xe22c,	// (0x0009aac3) input_focus_pane_cp02_ParamLimits

0xe22c,	// (0x0009aac3) input_focus_pane_cp02

0xe23f,	// (0x0009aad6) wml_selection_box_pane_g1

0xe248,	// (0x0009aadf) wml_selection_box_pane_t1_ParamLimits

0xe248,	// (0x0009aadf) wml_selection_box_pane_t1

0xdd42,	// (0x0009a5d9) bg_wml_button_pane_ParamLimits

0xdd42,	// (0x0009a5d9) bg_wml_button_pane

0xe260,	// (0x0009aaf7) wml_button_pane_g1

0xe268,	// (0x0009aaff) wml_button_pane_t1

0xe260,	// (0x0009aaf7) wml_button_bg_pane_g1

0xe278,	// (0x0009ab0f) wml_button_bg_pane_g2

0xe280,	// (0x0009ab17) wml_button_bg_pane_g3

0xe288,	// (0x0009ab1f) wml_button_bg_pane_g4

0xe290,	// (0x0009ab27) wml_button_bg_pane_g5

0xe298,	// (0x0009ab2f) wml_button_bg_pane_g6

0xe2a0,	// (0x0009ab37) wml_button_bg_pane_g7

0xe2a8,	// (0x0009ab3f) wml_button_bg_pane_g8

0xe2c3,	// (0x0009ab5a) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0009bb0b) wml_button_bg_pane_g

0x2102,	// (0x0008e999) bg_list_pane_cp02

0xe2cb,	// (0x0009ab62) mce_header_pane_ParamLimits

0xe2cb,	// (0x0009ab62) mce_header_pane

0xe2df,	// (0x0009ab76) mce_icon_pane

0xe2df,	// (0x0009ab76) mce_image_pane

0xe2e8,	// (0x0009ab7f) mce_text_pane_ParamLimits

0xe2e8,	// (0x0009ab7f) mce_text_pane

0x210b,	// (0x0008e9a2) scroll_pane_cp03

0x210b,	// (0x0008e9a2) scroll_pane_cp04

0xe2fc,	// (0x0009ab93) scroll_pane_cp05_ParamLimits

0xe2fc,	// (0x0009ab93) scroll_pane_cp05

0x2115,	// (0x0008e9ac) mce_header_field_pane_ParamLimits

0x2115,	// (0x0008e9ac) mce_header_field_pane

0x212c,	// (0x0008e9c3) mce_header_field_pane_2_ParamLimits

0x212c,	// (0x0008e9c3) mce_header_field_pane_2

0x2142,	// (0x0008e9d9) mce_header_field_pane_3

0x214a,	// (0x0008e9e1) list_single_mce_message_pane_ParamLimits

0x214a,	// (0x0008e9e1) list_single_mce_message_pane

0x215f,	// (0x0008e9f6) list_single_mce_smart_pane_ParamLimits

0x215f,	// (0x0008e9f6) list_single_mce_smart_pane

0xe308,	// (0x0009ab9f) input_focus_pane_cp03

0xe311,	// (0x0009aba8) list_header_data_pane

0x217f,	// (0x0008ea16) mce_header_field_pane_t1

0x218d,	// (0x0008ea24) list_single_mce_header_pane_ParamLimits

0x218d,	// (0x0008ea24) list_single_mce_header_pane

0xe319,	// (0x0009abb0) list_single_mce_header_pane_t1

0xe328,	// (0x0009abbf) list_single_mce_message_pane_g1

0xe331,	// (0x0009abc8) list_single_mce_message_pane_t1

0x21c7,	// (0x0008ea5e) bg_cale_heading_pane_cp01_ParamLimits

0x21c7,	// (0x0008ea5e) bg_cale_heading_pane_cp01

0xe340,	// (0x0009abd7) bg_cale_pane_cp02_ParamLimits

0xe340,	// (0x0009abd7) bg_cale_pane_cp02

0x21f6,	// (0x0008ea8d) cale_month_corner_pane

0x2215,	// (0x0008eaac) cale_month_day_heading_pane_ParamLimits

0x2215,	// (0x0008eaac) cale_month_day_heading_pane

0x224c,	// (0x0008eae3) cale_month_pane_g1_ParamLimits

0x224c,	// (0x0008eae3) cale_month_pane_g1

0x2270,	// (0x0008eb07) cale_month_pane_g2_ParamLimits

0x2270,	// (0x0008eb07) cale_month_pane_g2

0x2298,	// (0x0008eb2f) cale_month_pane_g3_ParamLimits

0x2298,	// (0x0008eb2f) cale_month_pane_g3

0x22d4,	// (0x0008eb6b) cale_month_pane_g4_ParamLimits

0x22d4,	// (0x0008eb6b) cale_month_pane_g4

0x2310,	// (0x0008eba7) cale_month_pane_g5_ParamLimits

0x2310,	// (0x0008eba7) cale_month_pane_g5

0x234c,	// (0x0008ebe3) cale_month_pane_g6_ParamLimits

0x234c,	// (0x0008ebe3) cale_month_pane_g6

0x2388,	// (0x0008ec1f) cale_month_pane_g7_ParamLimits

0x2388,	// (0x0008ec1f) cale_month_pane_g7

0x23c4,	// (0x0008ec5b) cale_month_pane_g8_ParamLimits

0x23c4,	// (0x0008ec5b) cale_month_pane_g8

0x2408,	// (0x0008ec9f) cale_month_pane_g9_ParamLimits

0x2408,	// (0x0008ec9f) cale_month_pane_g9

0x244a,	// (0x0008ece1) cale_month_pane_g10_ParamLimits

0x244a,	// (0x0008ece1) cale_month_pane_g10

0x248c,	// (0x0008ed23) cale_month_pane_g11_ParamLimits

0x248c,	// (0x0008ed23) cale_month_pane_g11

0x24ce,	// (0x0008ed65) cale_month_pane_g12_ParamLimits

0x24ce,	// (0x0008ed65) cale_month_pane_g12

0x2510,	// (0x0008eda7) cale_month_pane_g13_ParamLimits

0x2510,	// (0x0008eda7) cale_month_pane_g13

0x000c,

0xf287,	// (0x0009bb1e) cale_month_pane_g_ParamLimits

0xf287,	// (0x0009bb1e) cale_month_pane_g

0x2552,	// (0x0008ede9) cale_month_week_pane

0x256e,	// (0x0008ee05) grid_cale_month_pane_ParamLimits

0x256e,	// (0x0008ee05) grid_cale_month_pane

0x259c,	// (0x0008ee33) cale_month_day_heading_pane_t1

0x2622,	// (0x0008eeb9) cale_month_day_heading_pane_t2

0x26b3,	// (0x0008ef4a) cale_month_day_heading_pane_t3

0x2744,	// (0x0008efdb) cale_month_day_heading_pane_t4

0x27d5,	// (0x0008f06c) cale_month_day_heading_pane_t5

0x2866,	// (0x0008f0fd) cale_month_day_heading_pane_t6

0x28f7,	// (0x0008f18e) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0009bb39) cale_month_day_heading_pane_t

0xdf88,	// (0x0009a81f) bg_cale_side_pane_cp01

0x298c,	// (0x0008f223) cale_month_week_pane_t1

0x29a5,	// (0x0008f23c) cale_month_week_pane_t2

0x29be,	// (0x0008f255) cale_month_week_pane_t3

0x29d7,	// (0x0008f26e) cale_month_week_pane_t4

0x29f0,	// (0x0008f287) cale_month_week_pane_t5

0x2a09,	// (0x0008f2a0) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0009bb48) cale_month_week_pane_t

0x2a22,	// (0x0008f2b9) cell_cale_month_pane_ParamLimits

0x2a22,	// (0x0008f2b9) cell_cale_month_pane

0xa017,	// (0x000968ae) cell_cale_month_pane_g1

0x2b3e,	// (0x0008f3d5) cell_cale_month_pane_t1_ParamLimits

0x2b3e,	// (0x0008f3d5) cell_cale_month_pane_t1

0xdf96,	// (0x0009a82d) grid_highlight_pane_cp08

0xde60,	// (0x0009a6f7) main_smil_g1

0x2b5e,	// (0x0008f3f5) smil_status_pane

0xe37f,	// (0x0009ac16) smil_text_pane

0xa20e,	// (0x00096aa5) bg_popup_call3_rect_pane_g8

0xa216,	// (0x00096aad) bg_popup_call3_rect_pane_g9

0x0008,

0xf51a,	// (0x0009bdb1) bg_popup_call3_rect_pane_g

0xa4f7,	// (0x00096d8e) smil_status_volume_pane_g1

0x2b6f,	// (0x0008f406) smil_status_pane_t1

0xa52a,	// (0x00096dc1) volume_smil_pane

0xe389,	// (0x0009ac20) list_smil_text_pane

0x2b86,	// (0x0008f41d) scroll_pane_cp011

0x2b91,	// (0x0008f428) smil_text_list_pane_t1_ParamLimits

0x2b91,	// (0x0008f428) smil_text_list_pane_t1

0xa023,	// (0x000968ba) aid_volume_smil_ParamLimits

0xa023,	// (0x000968ba) aid_volume_smil

0xde60,	// (0x0009a6f7) smil_volume_pane_g1

0xde60,	// (0x0009a6f7) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0009bb68) smil_volume_pane_g

0x135e,	// (0x0008dbf5) listscroll_cale_day_pane

0xe393,	// (0x0009ac2a) bg_cale_pane

0xe3ab,	// (0x0009ac42) list_cale_pane

0xe3ce,	// (0x0009ac65) scroll_pane_cp09

0xe3df,	// (0x0009ac76) cale_bg_pane_g1

0xe3e7,	// (0x0009ac7e) cale_bg_pane_g2

0xe3ef,	// (0x0009ac86) cale_bg_pane_g3

0xe3f7,	// (0x0009ac8e) cale_bg_pane_g4

0xe3ff,	// (0x0009ac96) cale_bg_pane_g5

0xe407,	// (0x0009ac9e) cale_bg_pane_g6

0xe40f,	// (0x0009aca6) cale_bg_pane_g7

0xe417,	// (0x0009acae) cale_bg_pane_g8

0xe41f,	// (0x0009acb6) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0009bb6d) cale_bg_pane_g

0x2bd5,	// (0x0008f46c) list_cale_time_pane_ParamLimits

0x2bd5,	// (0x0008f46c) list_cale_time_pane

0xe427,	// (0x0009acbe) list_cale_time_pane_g1_ParamLimits

0xe427,	// (0x0009acbe) list_cale_time_pane_g1

0xe433,	// (0x0009acca) list_cale_time_pane_g2_ParamLimits

0xe433,	// (0x0009acca) list_cale_time_pane_g2

0x2bea,	// (0x0008f481) list_cale_time_pane_g3_ParamLimits

0x2bea,	// (0x0008f481) list_cale_time_pane_g3

0x2bf6,	// (0x0008f48d) list_cale_time_pane_g4_ParamLimits

0x2bf6,	// (0x0008f48d) list_cale_time_pane_g4

0x2c02,	// (0x0008f499) list_cale_time_pane_g5_ParamLimits

0x2c02,	// (0x0008f499) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0009bb80) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0009bb80) list_cale_time_pane_g

0xe44d,	// (0x0009ace4) list_cale_time_pane_t1_ParamLimits

0xe44d,	// (0x0009ace4) list_cale_time_pane_t1

0xe475,	// (0x0009ad0c) list_cale_time_pane_t2_ParamLimits

0xe475,	// (0x0009ad0c) list_cale_time_pane_t2

0x2f98,	// (0x0008f82f) aid_blid_cardinal_pane

0x2fd6,	// (0x0008f86d) compass_pane_t4

0xe49d,	// (0x0009ad34) list_cale_time_pane_t4_ParamLimits

0xe49d,	// (0x0009ad34) list_cale_time_pane_t4

0x2fe4,	// (0x0008f87b) compass_pane_t5

0x2ff2,	// (0x0008f889) compass_pane_t6

0x3000,	// (0x0008f897) compass_pane_t7

0xe90a,	// (0x0009b1a1) navi_pane_cc_t1

0xeaaf,	// (0x0009b346) aid_phob_thumbnail_center_pane

0x3604,	// (0x0008fe9b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0009bb8d) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0009bb8d) list_cale_time_pane_t

0xd740,	// (0x00099fd7) bg_popup_window_pane_cp02_ParamLimits

0xd740,	// (0x00099fd7) bg_popup_window_pane_cp02

0xe4c5,	// (0x0009ad5c) heading_pane_cp01_ParamLimits

0xe4c5,	// (0x0009ad5c) heading_pane_cp01

0xe4d1,	// (0x0009ad68) loc_req_pane_ParamLimits

0xe4d1,	// (0x0009ad68) loc_req_pane

0xe4e1,	// (0x0009ad78) loc_type_pane_ParamLimits

0xe4e1,	// (0x0009ad78) loc_type_pane

0xe4f3,	// (0x0009ad8a) loc_type_pane_t1_ParamLimits

0xe4f3,	// (0x0009ad8a) loc_type_pane_t1

0xe505,	// (0x0009ad9c) loc_type_pane_t2_ParamLimits

0xe505,	// (0x0009ad9c) loc_type_pane_t2

0xe517,	// (0x0009adae) loc_type_pane_t3_ParamLimits

0xe517,	// (0x0009adae) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0009bb94) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0009bb94) loc_type_pane_t

0xe529,	// (0x0009adc0) list_loc_req_pane

0xe533,	// (0x0009adca) scroll_pane_cp012

0x2c0e,	// (0x0008f4a5) list_single_loc_request_popup_menu_pane_ParamLimits

0x2c0e,	// (0x0008f4a5) list_single_loc_request_popup_menu_pane

0xe53c,	// (0x0009add3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe53c,	// (0x0009add3) list_single_loc_request_popup_menu_pane_g1

0xe548,	// (0x0009addf) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe548,	// (0x0009addf) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0009bb9b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0009bb9b) list_single_loc_request_popup_menu_pane_g

0xe554,	// (0x0009adeb) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe554,	// (0x0009adeb) list_single_loc_request_popup_menu_pane_t1

0xdd42,	// (0x0009a5d9) bg_popup_window_pane_cp03_ParamLimits

0xdd42,	// (0x0009a5d9) bg_popup_window_pane_cp03

0xee0e,	// (0x0009b6a5) heading_loc_req_pane_ParamLimits

0xee0e,	// (0x0009b6a5) heading_loc_req_pane

0x2c1b,	// (0x0008f4b2) popup_dyc_status_message_window_g1_ParamLimits

0x2c1b,	// (0x0008f4b2) popup_dyc_status_message_window_g1

0x2c2f,	// (0x0008f4c6) popup_dyc_status_message_window_t1_ParamLimits

0x2c2f,	// (0x0008f4c6) popup_dyc_status_message_window_t1

0x2c44,	// (0x0008f4db) popup_dyc_status_message_window_t2_ParamLimits

0x2c44,	// (0x0008f4db) popup_dyc_status_message_window_t2

0x2c59,	// (0x0008f4f0) popup_dyc_status_message_window_t3_ParamLimits

0x2c59,	// (0x0008f4f0) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0009bba0) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0009bba0) popup_dyc_status_message_window_t

0xdae7,	// (0x0009a37e) bg_heading_pane_cp01

0xe56a,	// (0x0009ae01) heading_loc_req_pane_g1

0xe572,	// (0x0009ae09) heading_loc_req_pane_g2

0xe57a,	// (0x0009ae11) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0009bba7) heading_loc_req_pane_g

0xe582,	// (0x0009ae19) heading_loc_req_pane_t1

0xe591,	// (0x0009ae28) bg_popup_sub_pane_cp01_ParamLimits

0xe591,	// (0x0009ae28) bg_popup_sub_pane_cp01

0xe59f,	// (0x0009ae36) popup_cale_events_window_g1_ParamLimits

0xe59f,	// (0x0009ae36) popup_cale_events_window_g1

0xe5bf,	// (0x0009ae56) popup_cale_events_window_g2_ParamLimits

0xe5bf,	// (0x0009ae56) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0009bbdb) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0009bbdb) popup_cale_events_window_g

0xe5df,	// (0x0009ae76) popup_cale_events_window_t1_ParamLimits

0xe5df,	// (0x0009ae76) popup_cale_events_window_t1

0xe5f1,	// (0x0009ae88) popup_cale_events_window_t2_ParamLimits

0xe5f1,	// (0x0009ae88) popup_cale_events_window_t2

0xe62f,	// (0x0009aec6) popup_cale_events_window_t3_ParamLimits

0xe62f,	// (0x0009aec6) popup_cale_events_window_t3

0xe669,	// (0x0009af00) popup_cale_events_window_t4_ParamLimits

0xe669,	// (0x0009af00) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0009bbe0) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0009bbe0) popup_cale_events_window_t

0x2d83,	// (0x0008f61a) call_type_pane

0x2d93,	// (0x0008f62a) popup_call_status_window_g1

0x2da7,	// (0x0008f63e) popup_call_status_window_g2

0x2dbb,	// (0x0008f652) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0009bbe9) popup_call_status_window_g

0xe69f,	// (0x0009af36) call_type_pane_g1

0xe6a8,	// (0x0009af3f) call_type_pane_g2

0x0001,

0xf359,	// (0x0009bbf0) call_type_pane_g

0xdae7,	// (0x0009a37e) bg_popup_sub_pane_cp02

0xe6b1,	// (0x0009af48) listscroll_popup_wml_pane

0xe6b9,	// (0x0009af50) list_wml_pane

0xe6c3,	// (0x0009af5a) scroll_pane_cp013

0x2dcb,	// (0x0008f662) list_single_graphic_popup_wml_pane_ParamLimits

0x2dcb,	// (0x0008f662) list_single_graphic_popup_wml_pane

0xde60,	// (0x0009a6f7) list_single_graphic_popup_wml_pane_g1

0xe6cc,	// (0x0009af63) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0009bbf5) list_single_graphic_popup_wml_pane_g

0xe6d4,	// (0x0009af6b) list_single_graphic_popup_wml_pane_t1

0xe6ea,	// (0x0009af81) aid_call_pane

0xdd3a,	// (0x0009a5d1) popup_clock_analogue_window_g1

0xdd3a,	// (0x0009a5d1) popup_clock_analogue_window_g2

0xa045,	// (0x000968dc) popup_clock_analogue_window_g3

0xa045,	// (0x000968dc) popup_clock_analogue_window_g4

0xde60,	// (0x0009a6f7) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0009bbfa) popup_clock_analogue_window_g

0xa04d,	// (0x000968e4) popup_clock_analogue_window_t1

0xa05b,	// (0x000968f2) clock_digital_number_pane_ParamLimits

0xa05b,	// (0x000968f2) clock_digital_number_pane

0xa067,	// (0x000968fe) clock_digital_number_pane_cp02_ParamLimits

0xa067,	// (0x000968fe) clock_digital_number_pane_cp02

0xa073,	// (0x0009690a) clock_digital_number_pane_cp03_ParamLimits

0xa073,	// (0x0009690a) clock_digital_number_pane_cp03

0xa07f,	// (0x00096916) clock_digital_number_pane_cp04_ParamLimits

0xa07f,	// (0x00096916) clock_digital_number_pane_cp04

0xa08b,	// (0x00096922) clock_digital_separator_pane_ParamLimits

0xa08b,	// (0x00096922) clock_digital_separator_pane

0xa097,	// (0x0009692e) popup_clock_digital_window_t1

0xde60,	// (0x0009a6f7) clock_digital_number_pane_g1

0xde60,	// (0x0009a6f7) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0009bb68) clock_digital_number_pane_g

0xde60,	// (0x0009a6f7) clock_digital_separator_pane_g1

0xde60,	// (0x0009a6f7) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0009bb68) clock_digital_separator_pane_g

0xdae7,	// (0x0009a37e) bg_popup_window_pane_cp04

0xe6f2,	// (0x0009af89) heading_pane_cp03

0xe6fa,	// (0x0009af91) listscroll_popup_gms_pane

0xe702,	// (0x0009af99) grid_large_graphic_popup_pane

0xe70c,	// (0x0009afa3) listscroll_popup_gms_pane_g1

0xe714,	// (0x0009afab) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0009bc05) listscroll_popup_gms_pane_g

0xe1d0,	// (0x0009aa67) scroll_pane_cp014

0x2dde,	// (0x0008f675) cell_large_graphic_popup_pane_ParamLimits

0x2dde,	// (0x0008f675) cell_large_graphic_popup_pane

0x2df4,	// (0x0008f68b) cell_large_graphic_popup_pane_g1_ParamLimits

0x2df4,	// (0x0008f68b) cell_large_graphic_popup_pane_g1

0xe71c,	// (0x0009afb3) cell_large_graphic_popup_pane_g2_ParamLimits

0xe71c,	// (0x0009afb3) cell_large_graphic_popup_pane_g2

0xe728,	// (0x0009afbf) cell_large_graphic_popup_pane_g3_ParamLimits

0xe728,	// (0x0009afbf) cell_large_graphic_popup_pane_g3

0xe735,	// (0x0009afcc) cell_large_graphic_popup_pane_g4_ParamLimits

0xe735,	// (0x0009afcc) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0009bc0a) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0009bc0a) cell_large_graphic_popup_pane_g

0xe745,	// (0x0009afdc) grid_highlight_pane_cp010

0xde60,	// (0x0009a6f7) bg_popup_call_pane_g1

0xe74f,	// (0x0009afe6) list_single_graphic_popup_conf_pane_ParamLimits

0xe74f,	// (0x0009afe6) list_single_graphic_popup_conf_pane

0xe762,	// (0x0009aff9) list_highlight_pane_cp01

0xe76b,	// (0x0009b002) list_single_graphic_popup_conf_pane_g1

0xe773,	// (0x0009b00a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0009bc13) list_single_graphic_popup_conf_pane_g

0xe77b,	// (0x0009b012) list_single_graphic_popup_conf_pane_t1

0xe789,	// (0x0009b020) linegrid_cams_pane_g1

0x2e00,	// (0x0008f697) linegrid_cams_pane_g2

0xdf19,	// (0x0009a7b0) linegrid_cams_pane_g3

0xe792,	// (0x0009b029) linegrid_cams_pane_g4

0x2e09,	// (0x0008f6a0) linegrid_cams_pane_g5

0x2e12,	// (0x0008f6a9) linegrid_cams_pane_g6

0xdfc9,	// (0x0009a860) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0009bc18) linegrid_cams_pane_g

0xe79b,	// (0x0009b032) popup_clock_analogue_window

0xe79b,	// (0x0009b032) popup_clock_digital_window

0xdae7,	// (0x0009a37e) popup_phob_thumbnail_window

0xde60,	// (0x0009a6f7) call_video_uplink_pane_g1

0xe7a4,	// (0x0009b03b) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0009bc27) call_video_uplink_pane_g

0xdf96,	// (0x0009a82d) video_uplink_pane

0xe7ac,	// (0x0009b043) mce_image_pane_g1

0x2e1b,	// (0x0008f6b2) mce_image_pane_g2

0x2e23,	// (0x0008f6ba) mce_image_pane_g3

0x2e2b,	// (0x0008f6c2) mce_image_pane_g4

0x2e33,	// (0x0008f6ca) mce_image_pane_g5

0x0004,

0xf395,	// (0x0009bc2c) mce_image_pane_g

0xe7b6,	// (0x0009b04d) control_top_pane_stacon_cp01_ParamLimits

0xe7b6,	// (0x0009b04d) control_top_pane_stacon_cp01

0xe7c6,	// (0x0009b05d) uni_indicator_pane_stacon_cp01_ParamLimits

0xe7c6,	// (0x0009b05d) uni_indicator_pane_stacon_cp01

0xe7d7,	// (0x0009b06e) bg_popup_sub_pane_cp03

0xe7e1,	// (0x0009b078) chi_dic_find_pane

0x2e3b,	// (0x0008f6d2) listscroll_chi_dic_pane

0xe7e9,	// (0x0009b080) main_pane_chidic_g1

0xe7f1,	// (0x0009b088) chi_dic_find_pane_t1

0xe7ff,	// (0x0009b096) find_chidic_pane

0xe808,	// (0x0009b09f) chi_dic_list_pane_ParamLimits

0xe808,	// (0x0009b09f) chi_dic_list_pane

0xe819,	// (0x0009b0b0) scroll_pane_cp020

0xe821,	// (0x0009b0b8) find_chidic_pane_t1

0xdae7,	// (0x0009a37e) input_focus_pane_cp06

0x2e4f,	// (0x0008f6e6) list_chi_dic_pane_ParamLimits

0x2e4f,	// (0x0008f6e6) list_chi_dic_pane

0x2e61,	// (0x0008f6f8) list_chi_dic_pane_t1_ParamLimits

0x2e61,	// (0x0008f6f8) list_chi_dic_pane_t1

0xdae7,	// (0x0009a37e) list_highlight_pane_cp020

0xe830,	// (0x0009b0c7) bg_cale_heading_pane_g1

0x2e74,	// (0x0008f70b) bg_cale_heading_pane_g2

0x2e7c,	// (0x0008f713) bg_cale_heading_pane_g3

0x2e84,	// (0x0008f71b) bg_cale_heading_pane_g4

0x2e8c,	// (0x0008f723) bg_cale_heading_pane_g5

0x2e94,	// (0x0008f72b) bg_cale_heading_pane_g6

0x2e9c,	// (0x0008f733) bg_cale_heading_pane_g7

0x2ea4,	// (0x0008f73b) bg_cale_heading_pane_g8

0x2eac,	// (0x0008f743) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0009bc37) bg_cale_heading_pane_g

0xe830,	// (0x0009b0c7) bg_cale_side_pane_g1

0x2eb4,	// (0x0008f74b) bg_cale_side_pane_g2

0x2ebc,	// (0x0008f753) bg_cale_side_pane_g3

0x2ec4,	// (0x0008f75b) bg_cale_side_pane_g4

0x2ecc,	// (0x0008f763) bg_cale_side_pane_g5

0x2ed4,	// (0x0008f76b) bg_cale_side_pane_g6

0x2edc,	// (0x0008f773) bg_cale_side_pane_g7

0x2ee4,	// (0x0008f77b) bg_cale_side_pane_g8

0x2eec,	// (0x0008f783) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0009bc4a) bg_cale_side_pane_g

0x2ef4,	// (0x0008f78b) popup_call_status_window_ParamLimits

0x2ef4,	// (0x0008f78b) popup_call_status_window

0xe838,	// (0x0009b0cf) stacon_top_pane

0xe840,	// (0x0009b0d7) status_pane_ParamLimits

0xe840,	// (0x0009b0d7) status_pane

0xe868,	// (0x0009b0ff) status_small_pane

0xe870,	// (0x0009b107) control_pane

0xdae7,	// (0x0009a37e) stacon_bottom_pane

0xe878,	// (0x0009b10f) list_single_mce_smart_pane_t1_ParamLimits

0xe878,	// (0x0009b10f) list_single_mce_smart_pane_t1

0xe88b,	// (0x0009b122) list_single_mce_smart_pane_t2_ParamLimits

0xe88b,	// (0x0009b122) list_single_mce_smart_pane_t2

0x0001,

0x0036,	// (0x0008c8cd) list_single_mce_smart_pane_t_ParamLimits

0x0036,	// (0x0008c8cd) list_single_mce_smart_pane_t

0x2f3b,	// (0x0008f7d2) compass_pane

0x2f44,	// (0x0008f7db) main_location2_pane_t1

0x2f5a,	// (0x0008f7f1) main_location2_pane_t2

0x2f70,	// (0x0008f807) main_location2_pane_t3

0x0003,

0xf3c6,	// (0x0009bc5d) main_location2_pane_t

0xe8b3,	// (0x0009b14a) compass_pane_g1_ParamLimits

0xe8b3,	// (0x0009b14a) compass_pane_g1

0x2fb8,	// (0x0008f84f) compass_pane_t1

0x2fc7,	// (0x0008f85e) compass_pane_t2

0x0005,

0xf3cf,	// (0x0009bc66) compass_pane_t

0x300e,	// (0x0008f8a5) text_secondary_cp61

0xe901,	// (0x0009b198) navi_pane_cams_g5

0xe94d,	// (0x0009b1e4) navi_pane_im_t1

0xe95b,	// (0x0009b1f2) navi_pane_mp_g1_ParamLimits

0xe95b,	// (0x0009b1f2) navi_pane_mp_g1

0xe96f,	// (0x0009b206) navi_pane_mp_g2_ParamLimits

0xe96f,	// (0x0009b206) navi_pane_mp_g2

0xe97b,	// (0x0009b212) navi_pane_mp_g3_ParamLimits

0xe97b,	// (0x0009b212) navi_pane_mp_g3

0x0002,

0x0058,	// (0x0008c8ef) navi_pane_mp_g_ParamLimits

0x0058,	// (0x0008c8ef) navi_pane_mp_g

0xe987,	// (0x0009b21e) navi_pane_mp_t1

0xe995,	// (0x0009b22c) navi_pane_mp_t2

0x0002,

0x005f,	// (0x0008c8f6) navi_pane_mp_t

0xea00,	// (0x0009b297) navi_pane_vt_g1

0xe987,	// (0x0009b21e) navi_pane_vt_t1

0xea08,	// (0x0009b29f) navi_slider_pane

0xdfda,	// (0x0009a871) zooming_pane

0xea10,	// (0x0009b2a7) navi_slider_pane_g1

0xa0b4,	// (0x0009694b) navi_slider_pane_g2

0x0006,

0xf3e3,	// (0x0009bc7a) navi_slider_pane_g

0xea34,	// (0x0009b2cb) aid_levels_zoom

0xea3c,	// (0x0009b2d3) zooming_pane_g1

0xea44,	// (0x0009b2db) zooming_pane_g2

0xea44,	// (0x0009b2db) zooming_pane_g3

0x0002,

0x0075,	// (0x0008c90c) zooming_pane_g

0xea4c,	// (0x0009b2e3) level_10_zoom

0xea55,	// (0x0009b2ec) level_11_zoom

0xea5e,	// (0x0009b2f5) level_1_zoom

0xea67,	// (0x0009b2fe) level_2_zoom

0xea70,	// (0x0009b307) level_3_zoom

0xea79,	// (0x0009b310) level_4_zoom

0xea82,	// (0x0009b319) level_5_zoom

0xea8b,	// (0x0009b322) level_6_zoom

0xea94,	// (0x0009b32b) level_7_zoom

0xea9d,	// (0x0009b334) level_8_zoom

0xeaa6,	// (0x0009b33d) level_9_zoom

0xeab7,	// (0x0009b34e) popup_phob_thumbnail_window_g1

0xeabf,	// (0x0009b356) popup_phob_thumbnail_window_g2

0x0001,

0x007c,	// (0x0008c913) popup_phob_thumbnail_window_g

0xa3b0,	// (0x00096c47) level_1_location

0xa3b8,	// (0x00096c4f) level_2_location

0xa3c0,	// (0x00096c57) level_3_location

0xa3c8,	// (0x00096c5f) level_4_location

0xdfda,	// (0x0009a871) level_5_location

0x30a4,	// (0x0008f93b) mce_icon_pane_g1

0x30ac,	// (0x0008f943) mce_icon_pane_g2

0x0001,

0xf3f2,	// (0x0009bc89) mce_icon_pane_g

0x30b4,	// (0x0008f94b) main_mup_pane_g1_ParamLimits

0x30b4,	// (0x0008f94b) main_mup_pane_g1

0x30ca,	// (0x0008f961) main_mup_pane_g2_ParamLimits

0x30ca,	// (0x0008f961) main_mup_pane_g2

0x30e2,	// (0x0008f979) main_mup_pane_g3_ParamLimits

0x30e2,	// (0x0008f979) main_mup_pane_g3

0x30fa,	// (0x0008f991) main_mup_pane_g4_ParamLimits

0x30fa,	// (0x0008f991) main_mup_pane_g4

0x3112,	// (0x0008f9a9) main_mup_pane_g5_ParamLimits

0x3112,	// (0x0008f9a9) main_mup_pane_g5

0x312c,	// (0x0008f9c3) main_mup_pane_g6_ParamLimits

0x312c,	// (0x0008f9c3) main_mup_pane_g6

0x3144,	// (0x0008f9db) main_mup_pane_g7_ParamLimits

0x3144,	// (0x0008f9db) main_mup_pane_g7

0x315c,	// (0x0008f9f3) main_mup_pane_g8_ParamLimits

0x315c,	// (0x0008f9f3) main_mup_pane_g8

0x3174,	// (0x0008fa0b) main_mup_pane_g9_ParamLimits

0x3174,	// (0x0008fa0b) main_mup_pane_g9

0x3188,	// (0x0008fa1f) main_mup_pane_g10_ParamLimits

0x3188,	// (0x0008fa1f) main_mup_pane_g10

0x319c,	// (0x0008fa33) main_mup_pane_g11_ParamLimits

0x319c,	// (0x0008fa33) main_mup_pane_g11

0x31ae,	// (0x0008fa45) main_mup_pane_g12_ParamLimits

0x31ae,	// (0x0008fa45) main_mup_pane_g12

0x31c2,	// (0x0008fa59) main_mup_pane_g13_ParamLimits

0x31c2,	// (0x0008fa59) main_mup_pane_g13

0x000c,

0xf3f7,	// (0x0009bc8e) main_mup_pane_g_ParamLimits

0xf3f7,	// (0x0009bc8e) main_mup_pane_g

0x31d4,	// (0x0008fa6b) main_mup_pane_t1_ParamLimits

0x31d4,	// (0x0008fa6b) main_mup_pane_t1

0x31ee,	// (0x0008fa85) main_mup_pane_t2_ParamLimits

0x31ee,	// (0x0008fa85) main_mup_pane_t2

0x3206,	// (0x0008fa9d) main_mup_pane_t3_ParamLimits

0x3206,	// (0x0008fa9d) main_mup_pane_t3

0x321e,	// (0x0008fab5) main_mup_pane_t4_ParamLimits

0x321e,	// (0x0008fab5) main_mup_pane_t4

0x323c,	// (0x0008fad3) main_mup_pane_t5_ParamLimits

0x323c,	// (0x0008fad3) main_mup_pane_t5

0x3251,	// (0x0008fae8) main_mup_pane_t6_ParamLimits

0x3251,	// (0x0008fae8) main_mup_pane_t6

0x0005,

0xf412,	// (0x0009bca9) main_mup_pane_t_ParamLimits

0xf412,	// (0x0009bca9) main_mup_pane_t

0x3263,	// (0x0008fafa) mup_progress_pane_ParamLimits

0x3263,	// (0x0008fafa) mup_progress_pane

0x326f,	// (0x0008fb06) mup_visualizer_pane_ParamLimits

0x326f,	// (0x0008fb06) mup_visualizer_pane

0x3297,	// (0x0008fb2e) mup_volume_pane_ParamLimits

0x3297,	// (0x0008fb2e) mup_volume_pane

0xe85a,	// (0x0009b0f1) mup_visualizer_pane_g1_ParamLimits

0xe85a,	// (0x0009b0f1) mup_visualizer_pane_g1

0xe85a,	// (0x0009b0f1) mup_visualizer_pane_g2_ParamLimits

0xe85a,	// (0x0009b0f1) mup_visualizer_pane_g2

0xe8b3,	// (0x0009b14a) mup_visualizer_pane_g3_ParamLimits

0xe8b3,	// (0x0009b14a) mup_visualizer_pane_g3

0x0002,

0xf41f,	// (0x0009bcb6) mup_visualizer_pane_g_ParamLimits

0xf41f,	// (0x0009bcb6) mup_visualizer_pane_g

0xde60,	// (0x0009a6f7) mup_volume_pane_g1

0xeacf,	// (0x0009b366) mup_volume_pane_g2

0x0001,

0x00b5,	// (0x0008c94c) mup_volume_pane_g

0xde60,	// (0x0009a6f7) mup_progress_pane_g1

0xead8,	// (0x0009b36f) mup_progress_pane_g2

0xeae1,	// (0x0009b378) mup_progress_pane_g3

0x0002,

0x00ba,	// (0x0008c951) mup_progress_pane_g

0xdae7,	// (0x0009a37e) bg_popup_window_pane_cp05

0xeaea,	// (0x0009b381) heading_pane_cp02_ParamLimits

0xeaea,	// (0x0009b381) heading_pane_cp02

0xeb04,	// (0x0009b39b) list_popup_blid_pane

0xeb0c,	// (0x0009b3a3) list_blid_sat_info_pane_ParamLimits

0xeb0c,	// (0x0009b3a3) list_blid_sat_info_pane

0xeb1f,	// (0x0009b3b6) list_blid_sat_info_pane_g1

0xeb27,	// (0x0009b3be) list_blid_sat_info_pane_t1

0x3387,	// (0x0008fc1e) mup_equalizer_pane_ParamLimits

0x3387,	// (0x0008fc1e) mup_equalizer_pane

0x33a0,	// (0x0008fc37) mup_equalizer_pane_cp1_ParamLimits

0x33a0,	// (0x0008fc37) mup_equalizer_pane_cp1

0x33b9,	// (0x0008fc50) mup_equalizer_pane_cp2_ParamLimits

0x33b9,	// (0x0008fc50) mup_equalizer_pane_cp2

0x33d2,	// (0x0008fc69) mup_equalizer_pane_cp3_ParamLimits

0x33d2,	// (0x0008fc69) mup_equalizer_pane_cp3

0x33eb,	// (0x0008fc82) mup_equalizer_pane_cp4_ParamLimits

0x33eb,	// (0x0008fc82) mup_equalizer_pane_cp4

0x3404,	// (0x0008fc9b) mup_equalizer_pane_cp5

0x3416,	// (0x0008fcad) mup_equalizer_pane_cp6

0x3428,	// (0x0008fcbf) mup_equalizer_pane_cp7

0xa28e,	// (0x00096b25) bg_popup_call_poc_act_pane_g9

0xa296,	// (0x00096b2d) bg_popup_call_poc_act_pane_g10

0xa29e,	// (0x00096b35) bg_popup_call_poc_act_pane_g11

0x000a,

0xdd42,	// (0x0009a5d9) mup_scale_pane

0xde60,	// (0x0009a6f7) mup_scale_pane_g1

0xeb35,	// (0x0009b3cc) mup_scale_pane_g2

0x0006,

0xf43b,	// (0x0009bcd2) mup_scale_pane_g

0xeb59,	// (0x0009b3f0) msg_data_pane

0xeb61,	// (0x0009b3f8) scroll_pane_cp017

0x344e,	// (0x0008fce5) bg_list_pane_cp04_ParamLimits

0x344e,	// (0x0008fce5) bg_list_pane_cp04

0xeb69,	// (0x0009b400) msg_data_pane_g1

0x2e1b,	// (0x0008f6b2) msg_data_pane_g2

0x2e23,	// (0x0008f6ba) msg_data_pane_g3

0x346e,	// (0x0008fd05) msg_data_pane_g4

0x2e33,	// (0x0008f6ca) msg_data_pane_g5

0x30a4,	// (0x0008f93b) msg_data_pane_g6

0x3476,	// (0x0008fd0d) msg_data_pane_g7

0x0006,

0xf44a,	// (0x0009bce1) msg_data_pane_g

0x347e,	// (0x0008fd15) msg_text_pane_ParamLimits

0x347e,	// (0x0008fd15) msg_text_pane

0x34a3,	// (0x0008fd3a) qrid_highlight_pane_cp011_ParamLimits

0x34a3,	// (0x0008fd3a) qrid_highlight_pane_cp011

0xdae7,	// (0x0009a37e) msg_body_pane

0xdae7,	// (0x0009a37e) msg_header_pane

0xeb7a,	// (0x0009b411) input_focus_pane_cp07

0x34c5,	// (0x0008fd5c) msg_header_pane_t1_ParamLimits

0x34c5,	// (0x0008fd5c) msg_header_pane_t1

0x34d7,	// (0x0008fd6e) msg_header_pane_t2_ParamLimits

0x34d7,	// (0x0008fd6e) msg_header_pane_t2

0x0001,

0xf45e,	// (0x0009bcf5) msg_header_pane_t_ParamLimits

0xf45e,	// (0x0009bcf5) msg_header_pane_t

0xeb8f,	// (0x0009b426) msg_body_pane_g1

0x34e9,	// (0x0008fd80) msg_body_pane_t1_ParamLimits

0x34e9,	// (0x0008fd80) msg_body_pane_t1

0x3514,	// (0x0008fdab) msg_body_pane_t2_ParamLimits

0x3514,	// (0x0008fdab) msg_body_pane_t2

0x3526,	// (0x0008fdbd) msg_body_pane_t3_ParamLimits

0x3526,	// (0x0008fdbd) msg_body_pane_t3

0x0002,

0xf463,	// (0x0009bcfa) msg_body_pane_t_ParamLimits

0xf463,	// (0x0009bcfa) msg_body_pane_t

0x356e,	// (0x0008fe05) main_viewer_pane_g1_ParamLimits

0x356e,	// (0x0008fe05) main_viewer_pane_g1

0x357a,	// (0x0008fe11) main_viewer_pane_g2_ParamLimits

0x357a,	// (0x0008fe11) main_viewer_pane_g2

0x3586,	// (0x0008fe1d) main_viewer_pane_g3_ParamLimits

0x3586,	// (0x0008fe1d) main_viewer_pane_g3

0x3595,	// (0x0008fe2c) main_viewer_pane_g4_ParamLimits

0x3595,	// (0x0008fe2c) main_viewer_pane_g4

0xa0de,	// (0x00096975) main_viewer_pane_g5_ParamLimits

0xa0de,	// (0x00096975) main_viewer_pane_g5

0xa0de,	// (0x00096975) main_viewer_pane_g7_ParamLimits

0xa0de,	// (0x00096975) main_viewer_pane_g7

0xa0f0,	// (0x00096987) main_viewer_pane_g8_ParamLimits

0xa0f0,	// (0x00096987) main_viewer_pane_g8

0x0007,

0xf473,	// (0x0009bd0a) main_viewer_pane_g_ParamLimits

0xf473,	// (0x0009bd0a) main_viewer_pane_g

0xeb97,	// (0x0009b42e) viewer_content_pane_ParamLimits

0xeb97,	// (0x0009b42e) viewer_content_pane

0x35c9,	// (0x0008fe60) main_postcard_pane_g1_ParamLimits

0x35c9,	// (0x0008fe60) main_postcard_pane_g1

0x35dd,	// (0x0008fe74) main_postcard_pane_g2_ParamLimits

0x35dd,	// (0x0008fe74) main_postcard_pane_g2

0x35f1,	// (0x0008fe88) main_postcard_pane_g3_ParamLimits

0x35f1,	// (0x0008fe88) main_postcard_pane_g3

0x0005,

0xf484,	// (0x0009bd1b) main_postcard_pane_g_ParamLimits

0xf484,	// (0x0009bd1b) main_postcard_pane_g

0x3604,	// (0x0008fe9b) main_postcard_pane_g4

0xa50a,	// (0x00096da1) smil_status_volume_pane_g2

0x363f,	// (0x0008fed6) postcard_pane_ParamLimits

0x363f,	// (0x0008fed6) postcard_pane

0xeba5,	// (0x0009b43c) postcard_pane_g1_ParamLimits

0xeba5,	// (0x0009b43c) postcard_pane_g1

0x367f,	// (0x0008ff16) postcard_pane_g2_ParamLimits

0x367f,	// (0x0008ff16) postcard_pane_g2

0x368b,	// (0x0008ff22) postcard_pane_g3_ParamLimits

0x368b,	// (0x0008ff22) postcard_pane_g3

0xebb3,	// (0x0009b44a) postcard_pane_g4_ParamLimits

0xebb3,	// (0x0009b44a) postcard_pane_g4

0x3697,	// (0x0008ff2e) postcard_pane_g5_ParamLimits

0x3697,	// (0x0008ff2e) postcard_pane_g5

0x36ac,	// (0x0008ff43) postcard_pane_g6_ParamLimits

0x36ac,	// (0x0008ff43) postcard_pane_g6

0xeba5,	// (0x0009b43c) postcard_pane_g7_ParamLimits

0xeba5,	// (0x0009b43c) postcard_pane_g7

0x0006,

0xf491,	// (0x0009bd28) postcard_pane_g_ParamLimits

0xf491,	// (0x0009bd28) postcard_pane_g

0x36c0,	// (0x0008ff57) main_mp2_pane_g1_ParamLimits

0x36c0,	// (0x0008ff57) main_mp2_pane_g1

0x36cc,	// (0x0008ff63) main_mp2_pane_g2_ParamLimits

0x36cc,	// (0x0008ff63) main_mp2_pane_g2

0x36d8,	// (0x0008ff6f) main_mp2_pane_g3_ParamLimits

0x36d8,	// (0x0008ff6f) main_mp2_pane_g3

0x0002,

0xf4a0,	// (0x0009bd37) main_mp2_pane_g_ParamLimits

0xf4a0,	// (0x0009bd37) main_mp2_pane_g

0x36e4,	// (0x0008ff7b) main_mp2_pane_t1_ParamLimits

0x36e4,	// (0x0008ff7b) main_mp2_pane_t1

0x36f9,	// (0x0008ff90) main_mp2_pane_t2_ParamLimits

0x36f9,	// (0x0008ff90) main_mp2_pane_t2

0x370b,	// (0x0008ffa2) main_mp2_pane_t3_ParamLimits

0x370b,	// (0x0008ffa2) main_mp2_pane_t3

0x0002,

0xf4a7,	// (0x0009bd3e) main_mp2_pane_t_ParamLimits

0xf4a7,	// (0x0009bd3e) main_mp2_pane_t

0xebc1,	// (0x0009b458) pec_content_pane_ParamLimits

0xebc1,	// (0x0009b458) pec_content_pane

0xe1d0,	// (0x0009aa67) scroll_pane_cp015

0xebd3,	// (0x0009b46a) pec_attribute_pane_ParamLimits

0xebd3,	// (0x0009b46a) pec_attribute_pane

0x371d,	// (0x0008ffb4) pec_content_pane_g1_ParamLimits

0x371d,	// (0x0008ffb4) pec_content_pane_g1

0xebe3,	// (0x0009b47a) pec_content_pane_t1_ParamLimits

0xebe3,	// (0x0009b47a) pec_content_pane_t1

0xebf5,	// (0x0009b48c) pec_content_pane_t2_ParamLimits

0xebf5,	// (0x0009b48c) pec_content_pane_t2

0x0001,

0x0149,	// (0x0008c9e0) pec_content_pane_t_ParamLimits

0x0149,	// (0x0008c9e0) pec_content_pane_t

0x3729,	// (0x0008ffc0) list_single_graphic_pane_cp01_ParamLimits

0x3729,	// (0x0008ffc0) list_single_graphic_pane_cp01

0xdd42,	// (0x0009a5d9) bg_popup_sub_pane_cp04

0xec07,	// (0x0009b49e) popup_mup_playback_window_g1

0xec13,	// (0x0009b4aa) popup_mup_playback_window_t1

0xec28,	// (0x0009b4bf) popup_mup_playback_window_t2

0x0001,

0x014e,	// (0x0008c9e5) popup_mup_playback_window_t

0xec5f,	// (0x0009b4f6) main_image_pane_g1_ParamLimits

0xec5f,	// (0x0009b4f6) main_image_pane_g1

0xeca2,	// (0x0009b539) scroll_pane_cp018_ParamLimits

0xeca2,	// (0x0009b539) scroll_pane_cp018

0xecba,	// (0x0009b551) scroll_pane_cp016_ParamLimits

0xecba,	// (0x0009b551) scroll_pane_cp016

0x37f4,	// (0x0009008b) smil2_image_pane_ParamLimits

0x37f4,	// (0x0009008b) smil2_image_pane

0x381c,	// (0x000900b3) smil2_root_pane_ParamLimits

0x381c,	// (0x000900b3) smil2_root_pane

0x3854,	// (0x000900eb) smil2_text_pane_ParamLimits

0x3854,	// (0x000900eb) smil2_text_pane

0xdae7,	// (0x0009a37e) bg_list_pane_cp06

0xecee,	// (0x0009b585) grid_radio_pane

0xdae7,	// (0x0009a37e) bg_popup_window_pane_cp06

0xecf6,	// (0x0009b58d) main_fmradio_pane_t1

0xe6f2,	// (0x0009af89) heading_pane_cp04

0xed04,	// (0x0009b59b) main_fmradio_pane_t2

0xa2e6,	// (0x00096b7d) popup_cale_lunar_info_window_g1

0xed12,	// (0x0009b5a9) main_fmradio_pane_t3

0xa2ee,	// (0x00096b85) popup_cale_lunar_info_window_g2

0xed20,	// (0x0009b5b7) main_fmradio_pane_t4

0x0001,

0xed2e,	// (0x0009b5c5) main_fmradio_pane_t5

0x0004,

0xf57c,	// (0x0009be13) popup_cale_lunar_info_window_g

0x0163,	// (0x0008c9fa) main_fmradio_pane_t

0xed3c,	// (0x0009b5d3) wait_bar_pane_cp03

0xe2b0,	// (0x0009ab47) cell_fmradio_pane_ParamLimits

0xe2b0,	// (0x0009ab47) cell_fmradio_pane

0xeba5,	// (0x0009b43c) cell_fmradio_pane_g1_ParamLimits

0xeba5,	// (0x0009b43c) cell_fmradio_pane_g1

0xdae7,	// (0x0009a37e) grid_highlight_pane_cp011

0xed44,	// (0x0009b5db) poc_content_pane_ParamLimits

0xed44,	// (0x0009b5db) poc_content_pane

0xed57,	// (0x0009b5ee) scroll_pane_cp019

0x38c0,	// (0x00090157) popup_call_poc_act_window_ParamLimits

0x38c0,	// (0x00090157) popup_call_poc_act_window

0x38e0,	// (0x00090177) popup_call_poc_inact_window_ParamLimits

0x38e0,	// (0x00090177) popup_call_poc_inact_window

0xf540,	// (0x0009bdd7) bg_popup_call_poc_act_pane_g

0xa2a6,	// (0x00096b3d) bg_popup_call_poc_inact_pane_g1

0xa2ae,	// (0x00096b45) bg_popup_call_poc_inact_pane_g2

0xed5f,	// (0x0009b5f6) popup_call_poc_act_window_g2

0xa2b6,	// (0x00096b4d) bg_popup_call_poc_inact_pane_g3

0xa236,	// (0x00096acd) bg_popup_call_poc_inact_pane_g4

0xa2be,	// (0x00096b55) bg_popup_call_poc_inact_pane_g5

0xed67,	// (0x0009b5fe) popup_call_poc_act_window_t1_ParamLimits

0xed67,	// (0x0009b5fe) popup_call_poc_act_window_t1

0xed8f,	// (0x0009b626) popup_call_poc_act_window_t2_ParamLimits

0xed8f,	// (0x0009b626) popup_call_poc_act_window_t2

0xedb7,	// (0x0009b64e) popup_call_poc_act_window_t3_ParamLimits

0xedb7,	// (0x0009b64e) popup_call_poc_act_window_t3

0xeddf,	// (0x0009b676) popup_call_poc_act_window_t4_ParamLimits

0xeddf,	// (0x0009b676) popup_call_poc_act_window_t4

0x0003,

0x016e,	// (0x0008ca05) popup_call_poc_act_window_t_ParamLimits

0x016e,	// (0x0008ca05) popup_call_poc_act_window_t

0xa2c6,	// (0x00096b5d) bg_popup_call_poc_inact_pane_g6

0xa2ce,	// (0x00096b65) bg_popup_call_poc_inact_pane_g7

0xa2d6,	// (0x00096b6d) bg_popup_call_poc_inact_pane_g8

0xedf1,	// (0x0009b688) popup_call_poc_inact_window_g2

0xa2de,	// (0x00096b75) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf557,	// (0x0009bdee) bg_popup_call_poc_inact_pane_g

0xedf9,	// (0x0009b690) popup_call_poc_inact_window_t1_ParamLimits

0xedf9,	// (0x0009b690) popup_call_poc_inact_window_t1

0xee1a,	// (0x0009b6b1) popup_call_poc_inact_window_t2_ParamLimits

0xee1a,	// (0x0009b6b1) popup_call_poc_inact_window_t2

0xee2f,	// (0x0009b6c6) popup_call_poc_inact_window_t3_ParamLimits

0xee2f,	// (0x0009b6c6) popup_call_poc_inact_window_t3

0x0002,

0xf4be,	// (0x0009bd55) popup_call_poc_inact_window_t_ParamLimits

0xf4be,	// (0x0009bd55) popup_call_poc_inact_window_t

0xa47d,	// (0x00096d14) context_pane_ParamLimits

0x4a59,	// (0x000912f0) signal_pane_ParamLimits

0xdfda,	// (0x0009a871) main_call2_pane

0xa456,	// (0x00096ced) popup_phob_thumbnail2_window_ParamLimits

0xa456,	// (0x00096ced) popup_phob_thumbnail2_window

0xa0c6,	// (0x0009695d) aid_hotspot_pointer_arrow_pane

0xa0ce,	// (0x00096965) aid_hotspot_pointer_hand_pane

0x4612,	// (0x00090ea9) phob_pre_status_pane_g5

0x19bb,	// (0x0008e252) cams_zoom_pane_ParamLimits

0x19ca,	// (0x0008e261) image_vga_pane_ParamLimits

0x19e2,	// (0x0008e279) main_camera_pane_g1_ParamLimits

0x19f2,	// (0x0008e289) main_camera_pane_g2_ParamLimits

0x1a02,	// (0x0008e299) main_camera_pane_g3_ParamLimits

0x1a12,	// (0x0008e2a9) main_camera_pane_g4_ParamLimits

0x1a22,	// (0x0008e2b9) main_camera_pane_g5_ParamLimits

0x1a32,	// (0x0008e2c9) main_camera_pane_g6_ParamLimits

0x1a42,	// (0x0008e2d9) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0009ba9d) main_camera_pane_g_ParamLimits

0x1a52,	// (0x0008e2e9) main_camera_pane_t1_ParamLimits

0x1a68,	// (0x0008e2ff) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0009baae) main_camera_pane_t_ParamLimits

0xdd42,	// (0x0009a5d9) bg_popup_preview_window_pane_cp01_ParamLimits

0xdd42,	// (0x0009a5d9) bg_popup_preview_window_pane_cp01

0xee44,	// (0x0009b6db) popup_phob_thumbnail2_window_g1_ParamLimits

0xee44,	// (0x0009b6db) popup_phob_thumbnail2_window_g1

0xdae7,	// (0x0009a37e) call2_cli_visual_pane

0x390c,	// (0x000901a3) popup_call2_audio_conf_window_ParamLimits

0x390c,	// (0x000901a3) popup_call2_audio_conf_window

0x392a,	// (0x000901c1) popup_call2_audio_first_window_ParamLimits

0x392a,	// (0x000901c1) popup_call2_audio_first_window

0x39a0,	// (0x00090237) popup_call2_audio_in_window_ParamLimits

0x39a0,	// (0x00090237) popup_call2_audio_in_window

0x39d4,	// (0x0009026b) popup_call2_audio_out_window_ParamLimits

0x39d4,	// (0x0009026b) popup_call2_audio_out_window

0x3a26,	// (0x000902bd) popup_call2_audio_second_window_ParamLimits

0x3a26,	// (0x000902bd) popup_call2_audio_second_window

0x3a78,	// (0x0009030f) popup_call2_audio_wait_window_ParamLimits

0x3a78,	// (0x0009030f) popup_call2_audio_wait_window

0xdae7,	// (0x0009a37e) bg_popup_call2_act_pane_cp03

0xdd24,	// (0x0009a5bb) list_conf_pane_cp

0xee50,	// (0x0009b6e7) popup_call2_audio_conf_window_t1

0xe74f,	// (0x0009afe6) list_single_graphic_popup_conf2_pane_ParamLimits

0xe74f,	// (0x0009afe6) list_single_graphic_popup_conf2_pane

0xe762,	// (0x0009aff9) list_highlight_pane_cp04

0xee5e,	// (0x0009b6f5) list_single_graphic_popup_conf2_pane_g1

0xe773,	// (0x0009b00a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4c5,	// (0x0009bd5c) list_single_graphic_popup_conf2_pane_g

0xee66,	// (0x0009b6fd) list_single_graphic_popup_conf2_pane_t1

0xee74,	// (0x0009b70b) bg_popup_call2_act_pane_cp01_ParamLimits

0xee74,	// (0x0009b70b) bg_popup_call2_act_pane_cp01

0xeefe,	// (0x0009b795) call_type_pane_cp05_ParamLimits

0xeefe,	// (0x0009b795) call_type_pane_cp05

0xef52,	// (0x0009b7e9) popup_call2_audio_second_window_g1_ParamLimits

0xef52,	// (0x0009b7e9) popup_call2_audio_second_window_g1

0xefa6,	// (0x0009b83d) popup_call2_audio_second_window_g2_ParamLimits

0xefa6,	// (0x0009b83d) popup_call2_audio_second_window_g2

0x0002,

0xf4ca,	// (0x0009bd61) popup_call2_audio_second_window_g_ParamLimits

0xf4ca,	// (0x0009bd61) popup_call2_audio_second_window_g

0xf00b,	// (0x0009b8a2) popup_call2_audio_second_window_t1_ParamLimits

0xf00b,	// (0x0009b8a2) popup_call2_audio_second_window_t1

0x3ab0,	// (0x00090347) popup_call2_audio_second_window_t2_ParamLimits

0x3ab0,	// (0x00090347) popup_call2_audio_second_window_t2

0x3b03,	// (0x0009039a) popup_call2_audio_second_window_t3_ParamLimits

0x3b03,	// (0x0009039a) popup_call2_audio_second_window_t3

0x0003,

0xf4d1,	// (0x0009bd68) popup_call2_audio_second_window_t_ParamLimits

0xf4d1,	// (0x0009bd68) popup_call2_audio_second_window_t

0xdae7,	// (0x0009a37e) bg_popup_call2_in_pane_cp02

0xdaf1,	// (0x0009a388) call_type_pane_cp04

0xdaf9,	// (0x0009a390) popup_call2_audio_wait_window_g1

0xdb01,	// (0x0009a398) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0009b98c) popup_call2_audio_wait_window_g

0xdb09,	// (0x0009a3a0) popup_call2_audio_wait_window_t3

0x3bf6,	// (0x0009048d) bg_popup_call2_act_pane_ParamLimits

0x3bf6,	// (0x0009048d) bg_popup_call2_act_pane

0x3cb6,	// (0x0009054d) call_type_pane_cp03_ParamLimits

0x3cb6,	// (0x0009054d) call_type_pane_cp03

0x3d1a,	// (0x000905b1) popup_call2_audio_first_window_g1_ParamLimits

0x3d1a,	// (0x000905b1) popup_call2_audio_first_window_g1

0x3d8a,	// (0x00090621) popup_call2_audio_first_window_g2_ParamLimits

0x3d8a,	// (0x00090621) popup_call2_audio_first_window_g2

0xe85a,	// (0x0009b0f1) popup_call2_audio_first_window_g3_ParamLimits

0xe85a,	// (0x0009b0f1) popup_call2_audio_first_window_g3

0x0004,

0xf4da,	// (0x0009bd71) popup_call2_audio_first_window_g_ParamLimits

0xf4da,	// (0x0009bd71) popup_call2_audio_first_window_g

0x3e68,	// (0x000906ff) popup_call2_audio_first_window_t1_ParamLimits

0x3e68,	// (0x000906ff) popup_call2_audio_first_window_t1

0x3f6b,	// (0x00090802) popup_call2_audio_first_window_t4_ParamLimits

0x3f6b,	// (0x00090802) popup_call2_audio_first_window_t4

0x404e,	// (0x000908e5) popup_call2_audio_first_window_t5_ParamLimits

0x404e,	// (0x000908e5) popup_call2_audio_first_window_t5

0x0003,

0xf4e5,	// (0x0009bd7c) popup_call2_audio_first_window_t_ParamLimits

0xf4e5,	// (0x0009bd7c) popup_call2_audio_first_window_t

0xdd3a,	// (0x0009a5d1) bg_popup_call2_act_pane_g1

0xa2f6,	// (0x00096b8d) popup_cale_lunar_info_window_t1

0xa304,	// (0x00096b9b) popup_cale_lunar_info_window_t2

0xa312,	// (0x00096ba9) popup_cale_lunar_info_window_t3

0xdae7,	// (0x0009a37e) bg_popup_call2_bubble_pane

0x414f,	// (0x000909e6) bg_popup_call2_in_pane_cp01_ParamLimits

0x414f,	// (0x000909e6) bg_popup_call2_in_pane_cp01

0xd7c3,	// (0x0009a05a) call_type_pane_cp02

0x4197,	// (0x00090a2e) popup_call2_audio_out_window_g1_ParamLimits

0x4197,	// (0x00090a2e) popup_call2_audio_out_window_g1

0x41c3,	// (0x00090a5a) popup_call2_audio_out_window_g2_ParamLimits

0x41c3,	// (0x00090a5a) popup_call2_audio_out_window_g2

0x41eb,	// (0x00090a82) popup_call2_audio_out_window_g3_ParamLimits

0x41eb,	// (0x00090a82) popup_call2_audio_out_window_g3

0x0003,

0xf4ee,	// (0x0009bd85) popup_call2_audio_out_window_g_ParamLimits

0xf4ee,	// (0x0009bd85) popup_call2_audio_out_window_g

0x4226,	// (0x00090abd) popup_call2_audio_out_window_t1_ParamLimits

0x4226,	// (0x00090abd) popup_call2_audio_out_window_t1

0x4285,	// (0x00090b1c) popup_call2_audio_out_window_t2_ParamLimits

0x4285,	// (0x00090b1c) popup_call2_audio_out_window_t2

0x42d9,	// (0x00090b70) popup_call2_audio_out_window_t3_ParamLimits

0x42d9,	// (0x00090b70) popup_call2_audio_out_window_t3

0x42ef,	// (0x00090b86) popup_call2_audio_out_window_t4_ParamLimits

0x42ef,	// (0x00090b86) popup_call2_audio_out_window_t4

0x4305,	// (0x00090b9c) popup_call2_audio_out_window_t5_ParamLimits

0x4305,	// (0x00090b9c) popup_call2_audio_out_window_t5

0x0005,

0xf4f7,	// (0x0009bd8e) popup_call2_audio_out_window_t_ParamLimits

0xf4f7,	// (0x0009bd8e) popup_call2_audio_out_window_t

0x4369,	// (0x00090c00) bg_popup_call2_in_pane_ParamLimits

0x4369,	// (0x00090c00) bg_popup_call2_in_pane

0x43c5,	// (0x00090c5c) popup_call2_audio_in_window_g1_ParamLimits

0x43c5,	// (0x00090c5c) popup_call2_audio_in_window_g1

0x43fd,	// (0x00090c94) popup_call2_audio_in_window_g2_ParamLimits

0x43fd,	// (0x00090c94) popup_call2_audio_in_window_g2

0x4435,	// (0x00090ccc) popup_call2_audio_in_window_g3_ParamLimits

0x4435,	// (0x00090ccc) popup_call2_audio_in_window_g3

0x0003,

0xf504,	// (0x0009bd9b) popup_call2_audio_in_window_g_ParamLimits

0xf504,	// (0x0009bd9b) popup_call2_audio_in_window_g

0x448d,	// (0x00090d24) popup_call2_audio_in_window_t1_ParamLimits

0x448d,	// (0x00090d24) popup_call2_audio_in_window_t1

0xa108,	// (0x0009699f) popup_call2_audio_in_window_t2_ParamLimits

0xa108,	// (0x0009699f) popup_call2_audio_in_window_t2

0xa188,	// (0x00096a1f) popup_call2_audio_in_window_t3_ParamLimits

0xa188,	// (0x00096a1f) popup_call2_audio_in_window_t3

0xa1a2,	// (0x00096a39) popup_call2_audio_in_window_t4_ParamLimits

0xa1a2,	// (0x00096a39) popup_call2_audio_in_window_t4

0xa1b4,	// (0x00096a4b) popup_call2_audio_in_window_t5_ParamLimits

0xa1b4,	// (0x00096a4b) popup_call2_audio_in_window_t5

0xa1c9,	// (0x00096a60) popup_call2_audio_in_window_t6_ParamLimits

0xa1c9,	// (0x00096a60) popup_call2_audio_in_window_t6

0x0005,

0xf50d,	// (0x0009bda4) popup_call2_audio_in_window_t_ParamLimits

0xf50d,	// (0x0009bda4) popup_call2_audio_in_window_t

0xdd3a,	// (0x0009a5d1) bg_popup_call2_in_pane_g1

0xa320,	// (0x00096bb7) popup_cale_lunar_info_window_t4

0x0003,

0xf581,	// (0x0009be18) popup_cale_lunar_info_window_t

0xdd42,	// (0x0009a5d9) bg_popup_call2_rect_pane_ParamLimits

0xdd42,	// (0x0009a5d9) bg_popup_call2_rect_pane

0xdae7,	// (0x0009a37e) call2_cli_visual_graphic_pane

0xdae7,	// (0x0009a37e) call2_cli_visual_text_pane

0xa51d,	// (0x00096db4) smil_status_volume_pane_g3

0x0002,

0xde60,	// (0x0009a6f7) call2_cli_visual_graphic_pane_g1

0xde60,	// (0x0009a6f7) call2_cli_visual_graphic_pane_g2

0xde60,	// (0x0009a6f7) call2_cli_visual_graphic_pane_g3

0x0002,

0x01d3,	// (0x0008ca6a) call2_cli_visual_graphic_pane_g

0xa1de,	// (0x00096a75) bg_popup_call2_rect_pane_g1

0xdefe,	// (0x0009a795) bg_popup_call2_rect_pane_g2

0xa1e6,	// (0x00096a7d) bg_popup_call2_rect_pane_g3

0xa1ee,	// (0x00096a85) bg_popup_call2_rect_pane_g4

0xa1f6,	// (0x00096a8d) bg_popup_call2_rect_pane_g5

0xa1fe,	// (0x00096a95) bg_popup_call2_rect_pane_g6

0xa206,	// (0x00096a9d) bg_popup_call2_rect_pane_g7

0xa20e,	// (0x00096aa5) bg_popup_call2_rect_pane_g8

0xa216,	// (0x00096aad) bg_popup_call2_rect_pane_g9

0x0008,

0xf51a,	// (0x0009bdb1) bg_popup_call2_rect_pane_g

0xa21e,	// (0x00096ab5) bg_popup_call2_bubble_pane_g1

0xa226,	// (0x00096abd) bg_popup_call2_bubble_pane_g2

0xa22e,	// (0x00096ac5) bg_popup_call2_bubble_pane_g3

0xa236,	// (0x00096acd) bg_popup_call2_bubble_pane_g4

0xa23e,	// (0x00096ad5) bg_popup_call2_bubble_pane_g5

0xa246,	// (0x00096add) bg_popup_call2_bubble_pane_g6

0xa24e,	// (0x00096ae5) bg_popup_call2_bubble_pane_g7

0xa256,	// (0x00096aed) bg_popup_call2_bubble_pane_g8

0xa25e,	// (0x00096af5) bg_popup_call2_bubble_pane_g9

0x0008,

0xf52d,	// (0x0009bdc4) bg_popup_call2_bubble_pane_g

0x136e,	// (0x0008dc05) aid_cale_week_size_cell_pane

0x1a7e,	// (0x0008e315) aid_cams_cif_uncrop_pane_ParamLimits

0x1a7e,	// (0x0008e315) aid_cams_cif_uncrop_pane

0x1c1f,	// (0x0008e4b6) aid_cams_size_cell_ParamLimits

0x1c1f,	// (0x0008e4b6) aid_cams_size_cell

0x1c33,	// (0x0008e4ca) grid_cams_pane_ParamLimits

0x1c48,	// (0x0008e4df) linegrid_cams_pane_ParamLimits

0x1e02,	// (0x0008e699) call_video_pane_t1

0x1e1c,	// (0x0008e6b3) call_video_pane_t2

0x0001,

0xf26a,	// (0x0009bb01) call_video_pane_t

0x21a1,	// (0x0008ea38) aid_cale_month_size_cell_pane_ParamLimits

0x21a1,	// (0x0008ea38) aid_cale_month_size_cell_pane

0xf5ca,	// (0x0009be61) smil_status_volume_pane_g

0xa52a,	// (0x00096dc1) volume_smil_pane_ParamLimits

0x9ee2,	// (0x00096779) aid_popup2_width_pane

0x12bd,	// (0x0008db54) cell_qdial_pane_g4_ParamLimits

0x12bd,	// (0x0008db54) cell_qdial_pane_g4

0x2f98,	// (0x0008f82f) aid_blid_cardinal_pane_ParamLimits

0x2fa4,	// (0x0008f83b) aid_blid_destination_pane_ParamLimits

0x2fa4,	// (0x0008f83b) aid_blid_destination_pane

0xdd42,	// (0x0009a5d9) bg_popup_call_poc_act_pane_ParamLimits

0xdd42,	// (0x0009a5d9) bg_popup_call_poc_act_pane

0xdd42,	// (0x0009a5d9) bg_popup_call_poc_inact_pane_ParamLimits

0xdd42,	// (0x0009a5d9) bg_popup_call_poc_inact_pane

0xa266,	// (0x00096afd) bg_popup_call_poc_act_pane_g1

0xa26e,	// (0x00096b05) bg_popup_call_poc_act_pane_g2

0xa276,	// (0x00096b0d) bg_popup_call_poc_act_pane_g3

0xa236,	// (0x00096acd) bg_popup_call_poc_act_pane_g4

0xa23e,	// (0x00096ad5) bg_popup_call_poc_act_pane_g5

0xa27e,	// (0x00096b15) bg_popup_call_poc_act_pane_g6

0xa24e,	// (0x00096ae5) bg_popup_call_poc_act_pane_g7

0xa286,	// (0x00096b1d) bg_popup_call_poc_act_pane_g8

0xdae7,	// (0x0009a37e) main_usb_pane

0xa435,	// (0x00096ccc) popup_cale_lunar_info_window

0x2061,	// (0x0008e8f8) im_reading_pane_t1_ParamLimits

0xe119,	// (0x0009a9b0) list_im_pane_ParamLimits

0xe12a,	// (0x0009a9c1) scroll_pane_cp07_ParamLimits

0xdae7,	// (0x0009a37e) grid_highlight_pane_cp012

0xdd42,	// (0x0009a5d9) mup_scale_pane_ParamLimits

0xeba5,	// (0x0009b43c) main_usb_pane_g1_ParamLimits

0xeba5,	// (0x0009b43c) main_usb_pane_g1

0x452f,	// (0x00090dc6) main_usb_pane_g2_ParamLimits

0x452f,	// (0x00090dc6) main_usb_pane_g2

0x0001,

0xf56a,	// (0x0009be01) main_usb_pane_g_ParamLimits

0xf56a,	// (0x0009be01) main_usb_pane_g

0x4543,	// (0x00090dda) main_usb_pane_t1_ParamLimits

0x4543,	// (0x00090dda) main_usb_pane_t1

0x4555,	// (0x00090dec) main_usb_pane_t2_ParamLimits

0x4555,	// (0x00090dec) main_usb_pane_t2

0x4567,	// (0x00090dfe) main_usb_pane_t3_ParamLimits

0x4567,	// (0x00090dfe) main_usb_pane_t3

0x4579,	// (0x00090e10) main_usb_pane_t4_ParamLimits

0x4579,	// (0x00090e10) main_usb_pane_t4

0x458b,	// (0x00090e22) main_usb_pane_t5_ParamLimits

0x458b,	// (0x00090e22) main_usb_pane_t5

0x459d,	// (0x00090e34) main_usb_pane_t6_ParamLimits

0x459d,	// (0x00090e34) main_usb_pane_t6

0x0005,

0xf56f,	// (0x0009be06) main_usb_pane_t_ParamLimits

0xe8aa,	// (0x0009b141) aid_text_placing

0x2f44,	// (0x0008f7db) main_location2_pane_t1_ParamLimits

0x2f5a,	// (0x0008f7f1) main_location2_pane_t2_ParamLimits

0x2f70,	// (0x0008f807) main_location2_pane_t3_ParamLimits

0x2f86,	// (0x0008f81d) main_location2_pane_t4_ParamLimits

0x2f86,	// (0x0008f81d) main_location2_pane_t4

0xf3c6,	// (0x0009bc5d) main_location2_pane_t_ParamLimits

0xdd7e,	// (0x0009a615) find_pinb_pane_g2_ParamLimits

0xdd7e,	// (0x0009a615) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0009b9b2) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0009b9b2) find_pinb_pane_g

0xdd8a,	// (0x0009a621) find_pinb_pane_t1_ParamLimits

0xdd9c,	// (0x0009a633) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0009b9b7) find_pinb_pane_t_ParamLimits

0xdae7,	// (0x0009a37e) main_call3_pane

0x259c,	// (0x0008ee33) cale_month_day_heading_pane_t1_ParamLimits

0x2622,	// (0x0008eeb9) cale_month_day_heading_pane_t2_ParamLimits

0x26b3,	// (0x0008ef4a) cale_month_day_heading_pane_t3_ParamLimits

0x2744,	// (0x0008efdb) cale_month_day_heading_pane_t4_ParamLimits

0x27d5,	// (0x0008f06c) cale_month_day_heading_pane_t5_ParamLimits

0x2866,	// (0x0008f0fd) cale_month_day_heading_pane_t6_ParamLimits

0x28f7,	// (0x0008f18e) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0009bb39) cale_month_day_heading_pane_t_ParamLimits

0x2b7d,	// (0x0008f414) smil_status_volume_pane

0x365b,	// (0x0008fef2) postcard_address_pane_ParamLimits

0x365b,	// (0x0008fef2) postcard_address_pane

0x366d,	// (0x0008ff04) postcard_message_pane_ParamLimits

0x366d,	// (0x0008ff04) postcard_message_pane

0x450d,	// (0x00090da4) call2_cli_visual_pane_t1_ParamLimits

0x450d,	// (0x00090da4) call2_cli_visual_pane_t1

0x4c75,	// (0x0009150c) postcard_message_pane_t1_ParamLimits

0x4c75,	// (0x0009150c) postcard_message_pane_t1

0x4c5e,	// (0x000914f5) postcard_address_pane_t1_ParamLimits

0x4c5e,	// (0x000914f5) postcard_address_pane_t1

0x4c4c,	// (0x000914e3) popup_call3_audio_in_window_ParamLimits

0x4c4c,	// (0x000914e3) popup_call3_audio_in_window

0x4adb,	// (0x00091372) bg_popup_call3_in_pane_ParamLimits

0x4adb,	// (0x00091372) bg_popup_call3_in_pane

0x4b4d,	// (0x000913e4) popup_call3_audio_in_window_g1_ParamLimits

0x4b4d,	// (0x000913e4) popup_call3_audio_in_window_g1

0x4b6d,	// (0x00091404) popup_call3_audio_in_window_g2_ParamLimits

0x4b6d,	// (0x00091404) popup_call3_audio_in_window_g2

0x4b8d,	// (0x00091424) popup_call3_audio_in_window_g3_ParamLimits

0x4b8d,	// (0x00091424) popup_call3_audio_in_window_g3

0x0003,

0xf5d1,	// (0x0009be68) popup_call3_audio_in_window_g_ParamLimits

0xf5d1,	// (0x0009be68) popup_call3_audio_in_window_g

0x4bbe,	// (0x00091455) popup_call3_audio_in_window_t1_ParamLimits

0x4bbe,	// (0x00091455) popup_call3_audio_in_window_t1

0x4bfc,	// (0x00091493) popup_call3_audio_in_window_t2_ParamLimits

0x4bfc,	// (0x00091493) popup_call3_audio_in_window_t2

0x4c3a,	// (0x000914d1) popup_call3_audio_in_window_t3_ParamLimits

0x4c3a,	// (0x000914d1) popup_call3_audio_in_window_t3

0x0002,

0xf5da,	// (0x0009be71) popup_call3_audio_in_window_t_ParamLimits

0xf5da,	// (0x0009be71) popup_call3_audio_in_window_t

0xdfda,	// (0x0009a871) bg_popup_call3_rect_pane

0xa1de,	// (0x00096a75) bg_popup_call3_rect_pane_g1

0xdefe,	// (0x0009a795) bg_popup_call3_rect_pane_g2

0xa1e6,	// (0x00096a7d) bg_popup_call3_rect_pane_g3

0xa1ee,	// (0x00096a85) bg_popup_call3_rect_pane_g4

0xa1f6,	// (0x00096a8d) bg_popup_call3_rect_pane_g5

0xa1fe,	// (0x00096a95) bg_popup_call3_rect_pane_g6

0xa206,	// (0x00096a9d) bg_popup_call3_rect_pane_g7

0x32ad,	// (0x0008fb44) mup_visualizer_osc_pane

0xeac7,	// (0x0009b35e) mup_visualizer_spec_pane

0x4b0b,	// (0x000913a2) call3_video_qcif_pane_ParamLimits

0x4b0b,	// (0x000913a2) call3_video_qcif_pane

0x4b1c,	// (0x000913b3) call3_video_qcif_uncrop_pane_ParamLimits

0x4b1c,	// (0x000913b3) call3_video_qcif_uncrop_pane

0x4b28,	// (0x000913bf) call3_video_subqcif_pane_ParamLimits

0x4b28,	// (0x000913bf) call3_video_subqcif_pane

0x4b3c,	// (0x000913d3) call3_video_subqcif_uncrop_pane_ParamLimits

0x4b3c,	// (0x000913d3) call3_video_subqcif_uncrop_pane

0x4bad,	// (0x00091444) popup_call3_audio_in_window_g4_ParamLimits

0x4bad,	// (0x00091444) popup_call3_audio_in_window_g4

0x4aca,	// (0x00091361) mup_spec_half_pane

0x4ad3,	// (0x0009136a) mup_spec_half_pane_cp

0xa4dd,	// (0x00096d74) mup_osc_middle_pane

0xa4e6,	// (0x00096d7d) mup_visualizer_osc_pane_g1

0x4aab,	// (0x00091342) mup_spec_bar_pane_ParamLimits

0x4aab,	// (0x00091342) mup_spec_bar_pane

0xa4ca,	// (0x00096d61) mup_spec_bar_pane_g1

0xa4d4,	// (0x00096d6b) mup_spec_bar_pane_g2

0x0001,

0xf5c5,	// (0x0009be5c) mup_spec_bar_pane_g

0x136e,	// (0x0008dc05) aid_cale_week_size_cell_pane_ParamLimits

0x1388,	// (0x0008dc1f) bg_cale_heading_pane_ParamLimits

0xdf3c,	// (0x0009a7d3) bg_cale_pane_cp01_ParamLimits

0x13a0,	// (0x0008dc37) cale_week_corner_pane_ParamLimits

0x13bf,	// (0x0008dc56) cale_week_day_heading_pane_ParamLimits

0x13dc,	// (0x0008dc73) cale_week_scroll_pane_g1_ParamLimits

0x13ef,	// (0x0008dc86) cale_week_scroll_pane_g2_ParamLimits

0x1407,	// (0x0008dc9e) cale_week_scroll_pane_g3_ParamLimits

0x141f,	// (0x0008dcb6) cale_week_scroll_pane_g4_ParamLimits

0x1437,	// (0x0008dcce) cale_week_scroll_pane_g5_ParamLimits

0x144f,	// (0x0008dce6) cale_week_scroll_pane_g6_ParamLimits

0x1467,	// (0x0008dcfe) cale_week_scroll_pane_g7_ParamLimits

0x147f,	// (0x0008dd16) cale_week_scroll_pane_g8_ParamLimits

0x149b,	// (0x0008dd32) cale_week_scroll_pane_g9_ParamLimits

0x14b3,	// (0x0008dd4a) cale_week_scroll_pane_g10_ParamLimits

0x14cb,	// (0x0008dd62) cale_week_scroll_pane_g11_ParamLimits

0x14e3,	// (0x0008dd7a) cale_week_scroll_pane_g12_ParamLimits

0x14fb,	// (0x0008dd92) cale_week_scroll_pane_g13_ParamLimits

0x1513,	// (0x0008ddaa) cale_week_scroll_pane_g14_ParamLimits

0x152b,	// (0x0008ddc2) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0009ba43) cale_week_scroll_pane_g_ParamLimits

0x155f,	// (0x0008ddf6) cale_week_time_pane_ParamLimits

0x157b,	// (0x0008de12) grid_cale_week_pane_ParamLimits

0xdf59,	// (0x0009a7f0) listscroll_cale_week_pane_t1

0xdf6b,	// (0x0009a802) scroll_pane_cp08_ParamLimits

0x21f6,	// (0x0008ea8d) cale_month_corner_pane_ParamLimits

0xe36d,	// (0x0009ac04) cale_month_pane_t1

0x2552,	// (0x0008ede9) cale_month_week_pane_ParamLimits

0x2d93,	// (0x0008f62a) popup_call_status_window_g1_ParamLimits

0x2da7,	// (0x0008f63e) popup_call_status_window_g2_ParamLimits

0x2dbb,	// (0x0008f652) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0009bbe9) popup_call_status_window_g_ParamLimits

0xe6e2,	// (0x0009af79) aid_call2_pane

0x34b9,	// (0x0008fd50) msg_header_pane_g1

0x365b,	// (0x0008fef2) postcard_address2_pane_ParamLimits

0x365b,	// (0x0008fef2) postcard_address2_pane

0x366d,	// (0x0008ff04) postcard_message2_pane_ParamLimits

0x366d,	// (0x0008ff04) postcard_message2_pane

0x4a67,	// (0x000912fe) message2_row_pane_ParamLimits

0x4a67,	// (0x000912fe) message2_row_pane

0x4a81,	// (0x00091318) address2_row_pane_ParamLimits

0x4a81,	// (0x00091318) address2_row_pane

0xa498,	// (0x00096d2f) postcard_message2_row_pane_g1

0xa4a0,	// (0x00096d37) postcard_message2_row_pane_t1

0xa498,	// (0x00096d2f) address2_row_pane_g1

0xa4a0,	// (0x00096d37) address2_row_pane_t1

0x1978,	// (0x0008e20f) aid_size_cell_vorec

0xdae7,	// (0x0009a37e) main_rss_pane

0x4a94,	// (0x0009132b) rss_list_single_pane_ParamLimits

0x4a94,	// (0x0009132b) rss_list_single_pane

0xa4ae,	// (0x00096d45) rss_list_single_pane_t1

0xa4bc,	// (0x00096d53) rss_list_single_pane_t2

0x0001,

0xf5c0,	// (0x0009be57) rss_list_single_pane_t

0xdae7,	// (0x0009a37e) main_camera2_pane

0xdae7,	// (0x0009a37e) main_video2_pane

0x4cce,	// (0x00091565) cams_zoom_pane_cp2_ParamLimits

0x4cce,	// (0x00091565) cams_zoom_pane_cp2

0x4ce5,	// (0x0009157c) image2_vga_pane_ParamLimits

0x4ce5,	// (0x0009157c) image2_vga_pane

0x4d1b,	// (0x000915b2) main_camera2_pane_g1_ParamLimits

0x4d1b,	// (0x000915b2) main_camera2_pane_g1

0x4d3b,	// (0x000915d2) main_camera2_pane_g2_ParamLimits

0x4d3b,	// (0x000915d2) main_camera2_pane_g2

0x4d52,	// (0x000915e9) main_camera2_pane_g3_ParamLimits

0x4d52,	// (0x000915e9) main_camera2_pane_g3

0x4d69,	// (0x00091600) main_camera2_pane_g4_ParamLimits

0x4d69,	// (0x00091600) main_camera2_pane_g4

0x4d80,	// (0x00091617) main_camera2_pane_g5_ParamLimits

0x4d80,	// (0x00091617) main_camera2_pane_g5

0x4d97,	// (0x0009162e) main_camera2_pane_g6_ParamLimits

0x4d97,	// (0x0009162e) main_camera2_pane_g6

0x4dae,	// (0x00091645) main_camera2_pane_g7_ParamLimits

0x4dae,	// (0x00091645) main_camera2_pane_g7

0x4dc5,	// (0x0009165c) main_camera2_pane_g8_ParamLimits

0x4dc5,	// (0x0009165c) main_camera2_pane_g8

0x0008,

0xf5e1,	// (0x0009be78) main_camera2_pane_g_ParamLimits

0xf5e1,	// (0x0009be78) main_camera2_pane_g

0x4df3,	// (0x0009168a) main_camera2_pane_t1_ParamLimits

0x4df3,	// (0x0009168a) main_camera2_pane_t1

0x4e22,	// (0x000916b9) main_camera2_pane_t2_ParamLimits

0x4e22,	// (0x000916b9) main_camera2_pane_t2

0x4e3f,	// (0x000916d6) main_camera2_pane_t3_ParamLimits

0x4e3f,	// (0x000916d6) main_camera2_pane_t3

0x4e8b,	// (0x00091722) main_camera2_pane_t4_ParamLimits

0x4e8b,	// (0x00091722) main_camera2_pane_t4

0x0006,

0xf5f4,	// (0x0009be8b) main_camera2_pane_t_ParamLimits

0xf5f4,	// (0x0009be8b) main_camera2_pane_t

0x4f00,	// (0x00091797) cams_zoom_pane_cp4_ParamLimits

0x4f00,	// (0x00091797) cams_zoom_pane_cp4

0x4f16,	// (0x000917ad) image2_cif_pane_ParamLimits

0x4f16,	// (0x000917ad) image2_cif_pane

0x4f39,	// (0x000917d0) image2_subqcif_pane_ParamLimits

0x4f39,	// (0x000917d0) image2_subqcif_pane

0x4f4f,	// (0x000917e6) main_video2_pane_g1_ParamLimits

0x4f4f,	// (0x000917e6) main_video2_pane_g1

0x4f69,	// (0x00091800) main_video2_pane_g2_ParamLimits

0x4f69,	// (0x00091800) main_video2_pane_g2

0x4f7f,	// (0x00091816) main_video2_pane_g3_ParamLimits

0x4f7f,	// (0x00091816) main_video2_pane_g3

0x4f95,	// (0x0009182c) main_video2_pane_g4_ParamLimits

0x4f95,	// (0x0009182c) main_video2_pane_g4

0x4fab,	// (0x00091842) main_video2_pane_g5_ParamLimits

0x4fab,	// (0x00091842) main_video2_pane_g5

0x4fc1,	// (0x00091858) main_video2_pane_g6_ParamLimits

0x4fc1,	// (0x00091858) main_video2_pane_g6

0x0005,

0xf603,	// (0x0009be9a) main_video2_pane_g_ParamLimits

0xf603,	// (0x0009be9a) main_video2_pane_g

0x4fdb,	// (0x00091872) main_video2_pane_t1_ParamLimits

0x4fdb,	// (0x00091872) main_video2_pane_t1

0x4fff,	// (0x00091896) main_video2_pane_t2_ParamLimits

0x4fff,	// (0x00091896) main_video2_pane_t2

0x5049,	// (0x000918e0) main_video2_pane_t3_ParamLimits

0x5049,	// (0x000918e0) main_video2_pane_t3

0x0002,

0xf610,	// (0x0009bea7) main_video2_pane_t_ParamLimits

0xf610,	// (0x0009bea7) main_video2_pane_t

0x464c,	// (0x00090ee3) call_muted_g2

0x0001,

0xf5b2,	// (0x0009be49) call_muted_g

0xdae7,	// (0x0009a37e) main_mup2_pane

0x508b,	// (0x00091922) main_mup2_pane_g1_ParamLimits

0x508b,	// (0x00091922) main_mup2_pane_g1

0x5097,	// (0x0009192e) main_mup2_pane_g2_ParamLimits

0x5097,	// (0x0009192e) main_mup2_pane_g2

0xa649,	// (0x00096ee0) main_mup_pane_g13_cp1

0xa651,	// (0x00096ee8) mup_volume_pane_cp1

0x50b3,	// (0x0009194a) main_mup2_pane_g4_ParamLimits

0x50b3,	// (0x0009194a) main_mup2_pane_g4

0x50c3,	// (0x0009195a) main_mup2_pane_g5_ParamLimits

0x50c3,	// (0x0009195a) main_mup2_pane_g5

0x50d3,	// (0x0009196a) main_mup2_pane_g6_ParamLimits

0x50d3,	// (0x0009196a) main_mup2_pane_g6

0x50e3,	// (0x0009197a) main_mup2_pane_g7_ParamLimits

0x50e3,	// (0x0009197a) main_mup2_pane_g7

0x0006,

0xf617,	// (0x0009beae) main_mup2_pane_g_ParamLimits

0xf617,	// (0x0009beae) main_mup2_pane_g

0x50fb,	// (0x00091992) main_mup2_pane_t1_ParamLimits

0x50fb,	// (0x00091992) main_mup2_pane_t1

0x5111,	// (0x000919a8) main_mup2_pane_t2_ParamLimits

0x5111,	// (0x000919a8) main_mup2_pane_t2

0x5127,	// (0x000919be) main_mup2_pane_t3_ParamLimits

0x5127,	// (0x000919be) main_mup2_pane_t3

0x513d,	// (0x000919d4) main_mup2_pane_t4_ParamLimits

0x513d,	// (0x000919d4) main_mup2_pane_t4

0x5155,	// (0x000919ec) main_mup2_pane_t5_ParamLimits

0x5155,	// (0x000919ec) main_mup2_pane_t5

0x516d,	// (0x00091a04) main_mup2_pane_t6_ParamLimits

0x516d,	// (0x00091a04) main_mup2_pane_t6

0x0005,

0xf626,	// (0x0009bebd) main_mup2_pane_t_ParamLimits

0xf626,	// (0x0009bebd) main_mup2_pane_t

0x519d,	// (0x00091a34) mup2_visualizer_pane_ParamLimits

0x519d,	// (0x00091a34) mup2_visualizer_pane

0x51c8,	// (0x00091a5f) mup_progress_pane_cp_ParamLimits

0x51c8,	// (0x00091a5f) mup_progress_pane_cp

0xa62b,	// (0x00096ec2) mup_volume_pane_cp_ParamLimits

0xa62b,	// (0x00096ec2) mup_volume_pane_cp

0x51dc,	// (0x00091a73) mup2_visualizer_pane_g1_ParamLimits

0x51dc,	// (0x00091a73) mup2_visualizer_pane_g1

0xa56a,	// (0x00096e01) mup2_visualizer_pane_g2_ParamLimits

0xa56a,	// (0x00096e01) mup2_visualizer_pane_g2

0x51f1,	// (0x00091a88) mup2_visualizer_pane_g3_ParamLimits

0x51f1,	// (0x00091a88) mup2_visualizer_pane_g3

0x0002,

0xf633,	// (0x0009beca) mup2_visualizer_pane_g_ParamLimits

0xf633,	// (0x0009beca) mup2_visualizer_pane_g

0xdff0,	// (0x0009a887) aid_size_cell_fmradio

0x47a8,	// (0x0009103f) aid_height_parent_landcape

0xe1b7,	// (0x0009aa4e) wml_content_pane_cp

0xe1bf,	// (0x0009aa56) wml_tabs_pane

0xe1c8,	// (0x0009aa5f) popup_wml_miniature_window

0xe1d0,	// (0x0009aa67) scroll_pane_cp021

0xe1e4,	// (0x0009aa7b) wml_content_pane_comp8

0xdae7,	// (0x0009a37e) bg_popup_sub_pane_cp05

0xa588,	// (0x00096e1f) popup_wml_miniature_window_g1

0xa590,	// (0x00096e27) wml_miniature_view_pane

0x51fd,	// (0x00091a94) aid_size_wml_view

0x5205,	// (0x00091a9c) wml_miniature_view_pane_g1

0x520e,	// (0x00091aa5) wml_miniature_view_pane_g2

0x5217,	// (0x00091aae) wml_miniature_view_pane_g3

0x521f,	// (0x00091ab6) wml_miniature_view_pane_g4

0x5227,	// (0x00091abe) wml_miniature_view_pane_g5

0x522f,	// (0x00091ac6) wml_miniature_view_pane_g6

0x5237,	// (0x00091ace) wml_miniature_view_pane_g7

0x523f,	// (0x00091ad6) wml_miniature_view_pane_g8

0x0007,

0xf63a,	// (0x0009bed1) wml_miniature_view_pane_g

0xa598,	// (0x00096e2f) background_graphic_ParamLimits

0xa598,	// (0x00096e2f) background_graphic

0xa5a4,	// (0x00096e3b) wml_tabs_2_pane

0xa5ad,	// (0x00096e44) wml_tabs_3_pane_ParamLimits

0xa5ad,	// (0x00096e44) wml_tabs_3_pane

0xa5bf,	// (0x00096e56) wml_tabs_4_pane_ParamLimits

0xa5bf,	// (0x00096e56) wml_tabs_4_pane

0xa5d5,	// (0x00096e6c) wml_tabs_5_pane_ParamLimits

0xa5d5,	// (0x00096e6c) wml_tabs_5_pane

0xa5ef,	// (0x00096e86) wml_tabs_pane_g2_ParamLimits

0xa5ef,	// (0x00096e86) wml_tabs_pane_g2

0xa603,	// (0x00096e9a) wml_tabs_pane_g3_ParamLimits

0xa603,	// (0x00096e9a) wml_tabs_pane_g3

0x5247,	// (0x00091ade) wml_tabs_2_active_pane_ParamLimits

0x5247,	// (0x00091ade) wml_tabs_2_active_pane

0x5257,	// (0x00091aee) wml_tabs_2_passive_pane_ParamLimits

0x5257,	// (0x00091aee) wml_tabs_2_passive_pane

0x5267,	// (0x00091afe) wml_tabs_3_active_pane_cp_ParamLimits

0x5267,	// (0x00091afe) wml_tabs_3_active_pane_cp

0x5278,	// (0x00091b0f) wml_tabs_3_passive_pane_ParamLimits

0x5278,	// (0x00091b0f) wml_tabs_3_passive_pane

0x5289,	// (0x00091b20) wml_tabs_3_passive_pane_cp_ParamLimits

0x5289,	// (0x00091b20) wml_tabs_3_passive_pane_cp

0x529a,	// (0x00091b31) tabs_4_active_pane

0x52a2,	// (0x00091b39) tabs_4_passive_pane

0x52aa,	// (0x00091b41) tabs_4_passive_pane_cp

0x52b2,	// (0x00091b49) tabs_4_passive_pane_cp2

0x4527,	// (0x00090dbe) aid_height_text

0x3283,	// (0x0008fb1a) mup_volume_cont_pane_ParamLimits

0x3283,	// (0x0008fb1a) mup_volume_cont_pane

0x0fce,	// (0x0008d865) aid_size_cell_pinb

0x0fd8,	// (0x0008d86f) aid_size_list_pinb

0x51b4,	// (0x00091a4b) mup2_volume_cont_pane_ParamLimits

0x51b4,	// (0x00091a4b) mup2_volume_cont_pane

0xa617,	// (0x00096eae) mup2_volume_cont_pane_g1_ParamLimits

0xa617,	// (0x00096eae) mup2_volume_cont_pane_g1

0x0cea,	// (0x0008d581) aid_size_cell_touch_ParamLimits

0x0cea,	// (0x0008d581) aid_size_cell_touch

0x0ed6,	// (0x0008d76d) touch_pane_ParamLimits

0x0ed6,	// (0x0008d76d) touch_pane

0x9f39,	// (0x000967d0) main_rss2_pane

0xa659,	// (0x00096ef0) listscroll_rss2_pane

0xa662,	// (0x00096ef9) rss2_navigation_pane

0xa66a,	// (0x00096f01) list_rss2_pane

0xe819,	// (0x0009b0b0) scroll_pane_cp22

0xa672,	// (0x00096f09) rss2_navigation_pane_g1

0xa67b,	// (0x00096f12) rss2_navigation_pane_g2

0xa683,	// (0x00096f1a) rss2_navigation_pane_g3

0x0002,

0xf64b,	// (0x0009bee2) rss2_navigation_pane_g

0xa68b,	// (0x00096f22) rss2_navigation_pane_t1

0x52ba,	// (0x00091b51) rss2_list_single_pane_ParamLimits

0x52ba,	// (0x00091b51) rss2_list_single_pane

0xa699,	// (0x00096f30) rss2_list_single_pane_t2

0xa6a7,	// (0x00096f3e) rss2_list_single_pane_t3_ParamLimits

0xa6a7,	// (0x00096f3e) rss2_list_single_pane_t3

0xa6c4,	// (0x00096f5b) rss2_list_single_pane_t4

0x2b67,	// (0x0008f3fe) smil_status_pane_g1

0x9f2b,	// (0x000967c2) main_image2_pane_ParamLimits

0x9f2b,	// (0x000967c2) main_image2_pane

0x4ddc,	// (0x00091673) main_camera2_pane_g9_ParamLimits

0x4ddc,	// (0x00091673) main_camera2_pane_g9

0x4ece,	// (0x00091765) main_camera2_pane_t5_ParamLimits

0x4ece,	// (0x00091765) main_camera2_pane_t5

0xa53f,	// (0x00096dd6) main_camera2_pane_t6_ParamLimits

0xa53f,	// (0x00096dd6) main_camera2_pane_t6

0x52ce,	// (0x00091b65) main_image2_pane_g1_ParamLimits

0x52ce,	// (0x00091b65) main_image2_pane_g1

0x3882,	// (0x00090119) smil2_video_pane_ParamLimits

0x3882,	// (0x00090119) smil2_video_pane

0x9efa,	// (0x00096791) aid_zoom_text_primary_cp

0x9f23,	// (0x000967ba) popup_preview_fixed_window

0xe111,	// (0x0009a9a8) im_reading_pane_g1

0x4cc2,	// (0x00091559) cams2_bc_adjust_pane_cp_ParamLimits

0x4cc2,	// (0x00091559) cams2_bc_adjust_pane_cp

0x4ef4,	// (0x0009178b) cams2_bc_adjust_pane_ParamLimits

0x4ef4,	// (0x0009178b) cams2_bc_adjust_pane

0xa6d2,	// (0x00096f69) cams2_bc_adjust_pane_g1

0xa6da,	// (0x00096f71) cams2_slider_pane

0xa6e3,	// (0x00096f7a) cams2_slider_pane_g1

0xa6ec,	// (0x00096f83) cams2_slider_pane_g2

0x0006,

0xf652,	// (0x0009bee9) cams2_slider_pane_g

0x10b8,	// (0x0008d94f) calc_display_pane_ParamLimits

0x10d4,	// (0x0008d96b) calc_paper_pane_ParamLimits

0x10f5,	// (0x0008d98c) grid_calc_pane_ParamLimits

0xa097,	// (0x0009692e) popup_clock_digital_window_t1_ParamLimits

0xec8b,	// (0x0009b522) main_image_pane_t1

0x109a,	// (0x0008d931) aid_size_cell_calc_ParamLimits

0x109a,	// (0x0008d931) aid_size_cell_calc

0x47f6,	// (0x0009108d) popup_blid_sat_info2_window_ParamLimits

0x47f6,	// (0x0009108d) popup_blid_sat_info2_window

0xa70e,	// (0x00096fa5) aid_size_cell_blid

0xa716,	// (0x00096fad) bg_popup_window_pane_cp07

0xa739,	// (0x00096fd0) grid_popup_blid_pane

0xa741,	// (0x00096fd8) heading_pane_cp05_ParamLimits

0xa741,	// (0x00096fd8) heading_pane_cp05

0xa809,	// (0x000970a0) cell_popup_blid_pane_ParamLimits

0xa809,	// (0x000970a0) cell_popup_blid_pane

0xa829,	// (0x000970c0) cell_popup_blid_pane_g1

0xa831,	// (0x000970c8) cell_popup_blid_pane_t1

0x5187,	// (0x00091a1e) mup2_indicator_pane_ParamLimits

0x5187,	// (0x00091a1e) mup2_indicator_pane

0xdfda,	// (0x0009a871) mup2_visualizer_osc_pane

0xa576,	// (0x00096e0d) mup2_visualizer_spec_pane_ParamLimits

0xa576,	// (0x00096e0d) mup2_visualizer_spec_pane

0x52e2,	// (0x00091b79) mup2_spec_half_pane

0x52eb,	// (0x00091b82) mup2_spec_half_pane_cp

0x52f3,	// (0x00091b8a) mup2_spec_bar_pane_ParamLimits

0x52f3,	// (0x00091b8a) mup2_spec_bar_pane

0xa4ca,	// (0x00096d61) mup2_spec_bar_pane_g1

0xa4d4,	// (0x00096d6b) mup2_spec_bar_pane_g2

0x0001,

0xf5c5,	// (0x0009be5c) mup2_spec_bar_pane_g

0x5312,	// (0x00091ba9) mup2_osc_middle_pane

0xa4e6,	// (0x00096d7d) mup2_visualizer_osc_pane_g1

0xd489,	// (0x00099d20) popup_number_entry_window_t1_ParamLimits

0xd49c,	// (0x00099d33) popup_number_entry_window_t2_ParamLimits

0xd4ae,	// (0x00099d45) popup_number_entry_window_t3_ParamLimits

0x0f1e,	// (0x0008d7b5) popup_number_entry_window_t5_ParamLimits

0x0f1e,	// (0x0008d7b5) popup_number_entry_window_t5

0xf0c6,	// (0x0009b95d) popup_number_entry_window_t_ParamLimits

0xd72d,	// (0x00099fc4) text_title_cp2_ParamLimits

0xa0d6,	// (0x0009696d) aid_hotspot_pointer_text2_pane

0xa0fc,	// (0x00096993) main_viewer_pane_g9_ParamLimits

0xa0fc,	// (0x00096993) main_viewer_pane_g9

0xe36d,	// (0x0009ac04) cale_month_pane_t1_ParamLimits

0xe393,	// (0x0009ac2a) bg_cale_pane_ParamLimits

0xe3ab,	// (0x0009ac42) list_cale_pane_ParamLimits

0xe3bc,	// (0x0009ac53) listscroll_cale_day_pane_t1

0xe3ce,	// (0x0009ac65) scroll_pane_cp09_ParamLimits

0x32b5,	// (0x0008fb4c) main_mup_eq_pane_t1_ParamLimits

0x32b5,	// (0x0008fb4c) main_mup_eq_pane_t1

0x32cd,	// (0x0008fb64) main_mup_eq_pane_t2_ParamLimits

0x32cd,	// (0x0008fb64) main_mup_eq_pane_t2

0x32e3,	// (0x0008fb7a) main_mup_eq_pane_t3_ParamLimits

0x32e3,	// (0x0008fb7a) main_mup_eq_pane_t3

0x32f9,	// (0x0008fb90) main_mup_eq_pane_t4_ParamLimits

0x32f9,	// (0x0008fb90) main_mup_eq_pane_t4

0x330f,	// (0x0008fba6) main_mup_eq_pane_t5_ParamLimits

0x330f,	// (0x0008fba6) main_mup_eq_pane_t5

0x3325,	// (0x0008fbbc) main_mup_eq_pane_t6_ParamLimits

0x3325,	// (0x0008fbbc) main_mup_eq_pane_t6

0x3337,	// (0x0008fbce) main_mup_eq_pane_t7_ParamLimits

0x3337,	// (0x0008fbce) main_mup_eq_pane_t7

0x3349,	// (0x0008fbe0) main_mup_eq_pane_t8_ParamLimits

0x3349,	// (0x0008fbe0) main_mup_eq_pane_t8

0x335b,	// (0x0008fbf2) main_mup_eq_pane_t9_ParamLimits

0x335b,	// (0x0008fbf2) main_mup_eq_pane_t9

0x3371,	// (0x0008fc08) main_mup_eq_pane_t10_ParamLimits

0x3371,	// (0x0008fc08) main_mup_eq_pane_t10

0x0009,

0xf426,	// (0x0009bcbd) main_mup_eq_pane_t_ParamLimits

0xf426,	// (0x0009bcbd) main_mup_eq_pane_t

0x3404,	// (0x0008fc9b) mup_equalizer_pane_cp5_ParamLimits

0x3416,	// (0x0008fcad) mup_equalizer_pane_cp6_ParamLimits

0x3428,	// (0x0008fcbf) mup_equalizer_pane_cp7_ParamLimits

0x9f39,	// (0x000967d0) main_gallery_pane

0xa4ef,	// (0x00096d86) smil2_volume_pane

0xa4f7,	// (0x00096d8e) smil_status_volume_pane_g1_ParamLimits

0xa50a,	// (0x00096da1) smil_status_volume_pane_g2_ParamLimits

0xa51d,	// (0x00096db4) smil_status_volume_pane_g3_ParamLimits

0xf5ca,	// (0x0009be61) smil_status_volume_pane_g_ParamLimits

0xa716,	// (0x00096fad) bg_popup_window_pane_cp07_ParamLimits

0xa724,	// (0x00096fbb) blid_firmament_pane

0x531b,	// (0x00091bb2) aid_size_cell_gallery_ParamLimits

0x531b,	// (0x00091bb2) aid_size_cell_gallery

0x5331,	// (0x00091bc8) grid_gallery_pane_ParamLimits

0x5331,	// (0x00091bc8) grid_gallery_pane

0x5345,	// (0x00091bdc) cell_gallery_pane_ParamLimits

0x5345,	// (0x00091bdc) cell_gallery_pane

0xa83f,	// (0x000970d6) bg_cell_gallery_focus_pane_ParamLimits

0xa83f,	// (0x000970d6) bg_cell_gallery_focus_pane

0xa851,	// (0x000970e8) cell_gallery_pane_g1_ParamLimits

0xa851,	// (0x000970e8) cell_gallery_pane_g1

0x538c,	// (0x00091c23) cell_gallery_pane_g2_ParamLimits

0x538c,	// (0x00091c23) cell_gallery_pane_g2

0x5399,	// (0x00091c30) cell_gallery_pane_g3_ParamLimits

0x5399,	// (0x00091c30) cell_gallery_pane_g3

0xa85d,	// (0x000970f4) cell_gallery_pane_g4_ParamLimits

0xa85d,	// (0x000970f4) cell_gallery_pane_g4

0x0003,

0xf678,	// (0x0009bf0f) cell_gallery_pane_g_ParamLimits

0xf678,	// (0x0009bf0f) cell_gallery_pane_g

0xa869,	// (0x00097100) bg_cell_gallery_focus_pane_g1

0xa871,	// (0x00097108) bg_cell_gallery_focus_pane_g2

0xa879,	// (0x00097110) bg_cell_gallery_focus_pane_g3

0xa881,	// (0x00097118) bg_cell_gallery_focus_pane_g4

0xa889,	// (0x00097120) bg_cell_gallery_focus_pane_g5

0xa891,	// (0x00097128) bg_cell_gallery_focus_pane_g6

0xa899,	// (0x00097130) bg_cell_gallery_focus_pane_g7

0xa8a1,	// (0x00097138) bg_cell_gallery_focus_pane_g8

0x0007,

0xf681,	// (0x0009bf18) bg_cell_gallery_focus_pane_g

0xa8a9,	// (0x00097140) aid_firma_cardinal

0xa8bd,	// (0x00097154) blid_firmament_pane_t1

0xa8d4,	// (0x0009716b) blid_firmament_pane_t2

0xa8eb,	// (0x00097182) blid_firmament_pane_t3

0xa902,	// (0x00097199) blid_firmament_pane_t4

0x0003,

0xf692,	// (0x0009bf29) blid_firmament_pane_t

0xa919,	// (0x000971b0) blid_sat_info_pane

0xa929,	// (0x000971c0) blid_sat_info_pane_g1

0xa929,	// (0x000971c0) blid_sat_info_pane_g2

0x0001,

0xf69b,	// (0x0009bf32) blid_sat_info_pane_g

0xa933,	// (0x000971ca) blid_sat_info_pane_t1

0xa941,	// (0x000971d8) smil2_volume_content_pane

0xa94a,	// (0x000971e1) smil2_volume_pane_g1

0xa952,	// (0x000971e9) smil2_volume_content_pane_g1

0xa95b,	// (0x000971f2) smil2_volume_content_pane_g2

0xa964,	// (0x000971fb) smil2_volume_content_pane_g3

0xa96d,	// (0x00097204) smil2_volume_content_pane_g4

0xa976,	// (0x0009720d) smil2_volume_content_pane_g5

0xa97f,	// (0x00097216) smil2_volume_content_pane_g6

0xa988,	// (0x0009721f) smil2_volume_content_pane_g7

0xa991,	// (0x00097228) smil2_volume_content_pane_g8

0xa99a,	// (0x00097231) smil2_volume_content_pane_g9

0xa9a3,	// (0x0009723a) smil2_volume_content_pane_g10

0x0009,

0xf6a0,	// (0x0009bf37) smil2_volume_content_pane_g

0x160f,	// (0x0008dea6) cale_week_day_heading_pane_t1_ParamLimits

0x1639,	// (0x0008ded0) cale_week_day_heading_pane_t2_ParamLimits

0x1668,	// (0x0008deff) cale_week_day_heading_pane_t3_ParamLimits

0x1697,	// (0x0008df2e) cale_week_day_heading_pane_t4_ParamLimits

0x16c6,	// (0x0008df5d) cale_week_day_heading_pane_t5_ParamLimits

0x16f5,	// (0x0008df8c) cale_week_day_heading_pane_t6_ParamLimits

0x1724,	// (0x0008dfbb) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0009ba64) cale_week_day_heading_pane_t_ParamLimits

0xdf88,	// (0x0009a81f) bg_cale_side_pane_ParamLimits

0x174e,	// (0x0008dfe5) cale_week_time_pane_t1_ParamLimits

0x1788,	// (0x0008e01f) cale_week_time_pane_t2_ParamLimits

0x17c2,	// (0x0008e059) cale_week_time_pane_t3_ParamLimits

0x17fc,	// (0x0008e093) cale_week_time_pane_t4_ParamLimits

0x1836,	// (0x0008e0cd) cale_week_time_pane_t5_ParamLimits

0x1870,	// (0x0008e107) cale_week_time_pane_t6_ParamLimits

0x18aa,	// (0x0008e141) cale_week_time_pane_t7_ParamLimits

0x18e4,	// (0x0008e17b) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0009ba73) cale_week_time_pane_t_ParamLimits

0x191e,	// (0x0008e1b5) cell_cale_week_pane_g2_ParamLimits

0xdf88,	// (0x0009a81f) bg_cale_side_pane_cp01_ParamLimits

0x298c,	// (0x0008f223) cale_month_week_pane_t1_ParamLimits

0x29a5,	// (0x0008f23c) cale_month_week_pane_t2_ParamLimits

0x29be,	// (0x0008f255) cale_month_week_pane_t3_ParamLimits

0x29d7,	// (0x0008f26e) cale_month_week_pane_t4_ParamLimits

0x29f0,	// (0x0008f287) cale_month_week_pane_t5_ParamLimits

0x2a09,	// (0x0008f2a0) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0009bb48) cale_month_week_pane_t_ParamLimits

0xa017,	// (0x000968ae) cell_cale_month_pane_g1_ParamLimits

0x9f39,	// (0x000967d0) main_cale_event_viewer_pane

0xd45f,	// (0x00099cf6) listscroll_cale_event_viewer_pane

0xa9ac,	// (0x00097243) list_cale_ev_pane

0xa9b4,	// (0x0009724b) scroll_pane_cp023

0x53a6,	// (0x00091c3d) field_cale_ev_pane_ParamLimits

0x53a6,	// (0x00091c3d) field_cale_ev_pane

0xa9c0,	// (0x00097257) field_cale_ev_content_pane_ParamLimits

0xa9c0,	// (0x00097257) field_cale_ev_content_pane

0xa9cc,	// (0x00097263) field_cale_ev_pane_g1_ParamLimits

0xa9cc,	// (0x00097263) field_cale_ev_pane_g1

0xa9d8,	// (0x0009726f) field_cale_ev_pane_g2_ParamLimits

0xa9d8,	// (0x0009726f) field_cale_ev_pane_g2

0xa9f0,	// (0x00097287) field_cale_ev_pane_g3_ParamLimits

0xa9f0,	// (0x00097287) field_cale_ev_pane_g3

0x0002,

0xf6b5,	// (0x0009bf4c) field_cale_ev_pane_g_ParamLimits

0xf6b5,	// (0x0009bf4c) field_cale_ev_pane_g

0xaa08,	// (0x0009729f) field_cale_ev_pane_t1_ParamLimits

0xaa08,	// (0x0009729f) field_cale_ev_pane_t1

0x53c0,	// (0x00091c57) field_cale_ev_content_pane_t1_ParamLimits

0x53c0,	// (0x00091c57) field_cale_ev_content_pane_t1

0xeb71,	// (0x0009b408) bg_button_pane_cp01

0x135e,	// (0x0008dbf5) listscroll_cale_week_pane_ParamLimits

0xdf33,	// (0x0009a7ca) popup_toolbar_window_cp01

0xdf59,	// (0x0009a7f0) listscroll_cale_week_pane_t1_ParamLimits

0x135e,	// (0x0008dbf5) listscroll_cale_day_pane_ParamLimits

0xdf33,	// (0x0009a7ca) popup_toolbar_window_cp02

0xe3bc,	// (0x0009ac53) listscroll_cale_day_pane_t1_ParamLimits

0x47b0,	// (0x00091047) main_cale_month_pane_ParamLimits

0xa468,	// (0x00096cff) popup_toolbar_window_cp03_ParamLimits

0xa468,	// (0x00096cff) popup_toolbar_window_cp03

0x375c,	// (0x0008fff3) main_image_pane_g2_ParamLimits

0x375c,	// (0x0008fff3) main_image_pane_g2

0x376d,	// (0x00090004) main_image_pane_g3_ParamLimits

0x376d,	// (0x00090004) main_image_pane_g3

0x0002,

0xf4ae,	// (0x0009bd45) main_image_pane_g_ParamLimits

0xf4ae,	// (0x0009bd45) main_image_pane_g

0xec8b,	// (0x0009b522) main_image_pane_t1_ParamLimits

0x377e,	// (0x00090015) main_image_pane_t2_ParamLimits

0x377e,	// (0x00090015) main_image_pane_t2

0x3790,	// (0x00090027) main_image_pane_t3_ParamLimits

0x3790,	// (0x00090027) main_image_pane_t3

0x37b8,	// (0x0009004f) main_image_pane_t4_ParamLimits

0x37b8,	// (0x0009004f) main_image_pane_t4

0x0003,

0xf4b5,	// (0x0009bd4c) main_image_pane_t_ParamLimits

0xf4b5,	// (0x0009bd4c) main_image_pane_t

0x37d8,	// (0x0009006f) popup_image_details_window_cp01

0x37e0,	// (0x00090077) popup_toobar_trans_pane_cp01_ParamLimits

0x37e0,	// (0x00090077) popup_toobar_trans_pane_cp01

0x48bf,	// (0x00091156) popup_image_details_window_ParamLimits

0x48bf,	// (0x00091156) popup_image_details_window

0xa43d,	// (0x00096cd4) popup_image_focus_window

0x4c90,	// (0x00091527) camera2_autofocus_pane_ParamLimits

0x4c90,	// (0x00091527) camera2_autofocus_pane

0xd45f,	// (0x00099cf6) bg_popup_sub_pane_cp06

0xaa1f,	// (0x000972b6) popup_image_focus_window_g1

0xaa27,	// (0x000972be) popup_image_focus_window_g2

0xaa2f,	// (0x000972c6) popup_image_focus_window_g3

0xaa37,	// (0x000972ce) popup_image_focus_window_g4

0x0003,

0xf6bc,	// (0x0009bf53) popup_image_focus_window_g

0xaa3f,	// (0x000972d6) popup_image_focus_window_t1

0xaa4d,	// (0x000972e4) popup_image_focus_window_t2

0xaa5c,	// (0x000972f3) popup_image_focus_window_t3

0x0002,

0xf6c5,	// (0x0009bf5c) popup_image_focus_window_t

0xaa6a,	// (0x00097301) camera2_autofocus_pane_g1

0x47c0,	// (0x00091057) bg_tb_trans_pane_cp01

0xaa78,	// (0x0009730f) popup_image_details_window_g1

0xaa8b,	// (0x00097322) popup_image_details_window_g2

0x0002,

0xf6d7,	// (0x0009bf6e) popup_image_details_window_g

0xaab4,	// (0x0009734b) popup_image_details_window_t1

0xaac6,	// (0x0009735d) popup_image_details_window_t2

0xaadf,	// (0x00097376) popup_image_details_window_t3

0xaaf3,	// (0x0009738a) popup_image_details_window_t4

0xab0e,	// (0x000973a5) popup_image_details_window_t5

0x0004,

0xf6de,	// (0x0009bf75) popup_image_details_window_t

0xddf3,	// (0x0009a68a) bg_calc_paper_pane_ParamLimits

0x9f39,	// (0x000967d0) grid_highlight_pane_cp013

0x9f53,	// (0x000967ea) list_calc_pane_ParamLimits

0x9f65,	// (0x000967fc) scroll_pane_cp024

0xde0b,	// (0x0009a6a2) bg_calc_display_pane_ParamLimits

0x9f6d,	// (0x00096804) calc_display_pane_t1_ParamLimits

0x9f82,	// (0x00096819) calc_display_pane_t2_ParamLimits

0x9f97,	// (0x0009682e) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0009b9e4) calc_display_pane_t_ParamLimits

0x126c,	// (0x0008db03) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0009ba01) cell_calc_pane_g

0x1275,	// (0x0008db0c) cell_calc_pane_t1

0xde6a,	// (0x0009a701) grid_highlight_pane_cp02_ParamLimits

0xde80,	// (0x0009a717) toolbar_button_pane_cp01_ParamLimits

0xde80,	// (0x0009a717) toolbar_button_pane_cp01

0xecd0,	// (0x0009b567) temp_image_control_pane_ParamLimits

0xecd0,	// (0x0009b567) temp_image_control_pane

0x9f2b,	// (0x000967c2) main_mp3_pane

0xab28,	// (0x000973bf) temp_image_control_pane_g1_ParamLimits

0xab28,	// (0x000973bf) temp_image_control_pane_g1

0xab36,	// (0x000973cd) temp_image_control_pane_g2_ParamLimits

0xab36,	// (0x000973cd) temp_image_control_pane_g2

0xab48,	// (0x000973df) temp_image_control_pane_g3_ParamLimits

0xab48,	// (0x000973df) temp_image_control_pane_g3

0x540d,	// (0x00091ca4) temp_image_control_pane_g4_ParamLimits

0x540d,	// (0x00091ca4) temp_image_control_pane_g4

0x0003,

0xf6e9,	// (0x0009bf80) temp_image_control_pane_g_ParamLimits

0xf6e9,	// (0x0009bf80) temp_image_control_pane_g

0xab28,	// (0x000973bf) main_mp3_pane_g1

0x541e,	// (0x00091cb5) main_mp3_pane_g2

0x0007,

0xf6f2,	// (0x0009bf89) main_mp3_pane_g

0xab8b,	// (0x00097422) main_mp3_pane_t1

0xe022,	// (0x0009a8b9) main_camera_pane_g8_ParamLimits

0xe022,	// (0x0009a8b9) main_camera_pane_g8

0x1bc7,	// (0x0008e45e) main_video_pane_g7_ParamLimits

0x1bc7,	// (0x0008e45e) main_video_pane_g7

0xa558,	// (0x00096def) main_camera2_pane_t7_ParamLimits

0xa558,	// (0x00096def) main_camera2_pane_t7

0xe177,	// (0x0009aa0e) scroll_pane_cp025_ParamLimits

0xe177,	// (0x0009aa0e) scroll_pane_cp025

0xe18b,	// (0x0009aa22) scroll_pane_cp026_ParamLimits

0xe18b,	// (0x0009aa22) scroll_pane_cp026

0xe19a,	// (0x0009aa31) wml_content_pane_ParamLimits

0x9f39,	// (0x000967d0) main_touch_calib_pane

0x54e0,	// (0x00091d77) main_touch_calib_pane_g1

0x54f2,	// (0x00091d89) main_touch_calib_pane_g2

0x5504,	// (0x00091d9b) main_touch_calib_pane_g3

0x5516,	// (0x00091dad) main_touch_calib_pane_g4

0x0003,

0xf710,	// (0x0009bfa7) main_touch_calib_pane_g

0x5528,	// (0x00091dbf) main_touch_calib_pane_t1

0x5540,	// (0x00091dd7) main_touch_calib_pane_t2

0x0004,

0xf719,	// (0x0009bfb0) main_touch_calib_pane_t

0xe8e3,	// (0x0009b17a) mup_progress_pane_cp02

0xe918,	// (0x0009b1af) navi_pane_g1

0xe9a3,	// (0x0009b23a) navi_pane_mp_t3

0x9f2b,	// (0x000967c2) main_mp3_pane_ParamLimits

0x4a18,	// (0x000912af) navi_pane_ParamLimits

0xab28,	// (0x000973bf) main_mp3_pane_g1_ParamLimits

0x541e,	// (0x00091cb5) main_mp3_pane_g2_ParamLimits

0x542a,	// (0x00091cc1) main_mp3_pane_g3_ParamLimits

0x542a,	// (0x00091cc1) main_mp3_pane_g3

0x5436,	// (0x00091ccd) main_mp3_pane_g4_ParamLimits

0x5436,	// (0x00091ccd) main_mp3_pane_g4

0xab58,	// (0x000973ef) main_mp3_pane_g5_ParamLimits

0xab58,	// (0x000973ef) main_mp3_pane_g5

0xab66,	// (0x000973fd) main_mp3_pane_g6_ParamLimits

0xab66,	// (0x000973fd) main_mp3_pane_g6

0xab73,	// (0x0009740a) main_mp3_pane_g7_ParamLimits

0xab73,	// (0x0009740a) main_mp3_pane_g7

0xab7f,	// (0x00097416) main_mp3_pane_g8_ParamLimits

0xab7f,	// (0x00097416) main_mp3_pane_g8

0xf6f2,	// (0x0009bf89) main_mp3_pane_g_ParamLimits

0x5442,	// (0x00091cd9) main_mp3_pane_t2

0x5450,	// (0x00091ce7) main_mp3_pane_t3

0xab99,	// (0x00097430) main_mp3_pane_t4

0xaba7,	// (0x0009743e) main_mp3_pane_t5

0x0005,

0xf703,	// (0x0009bf9a) main_mp3_pane_t

0xabb5,	// (0x0009744c) mup_progress_pane_cp01

0x9efa,	// (0x00096791) aid_zoom_text_secondary2

0xa9ac,	// (0x00097243) list_cale_ev2_pane

0xa9b4,	// (0x0009724b) scroll_pane_cp023_ParamLimits

0x558e,	// (0x00091e25) field_cale_ev2_pane_ParamLimits

0x558e,	// (0x00091e25) field_cale_ev2_pane

0xabbd,	// (0x00097454) field_cale_ev2_pane_g1_ParamLimits

0xabbd,	// (0x00097454) field_cale_ev2_pane_g1

0xabc9,	// (0x00097460) field_cale_ev2_pane_g2_ParamLimits

0xabc9,	// (0x00097460) field_cale_ev2_pane_g2

0xabe1,	// (0x00097478) field_cale_ev2_pane_g3_ParamLimits

0xabe1,	// (0x00097478) field_cale_ev2_pane_g3

0x0003,

0xf724,	// (0x0009bfbb) field_cale_ev2_pane_g_ParamLimits

0xf724,	// (0x0009bfbb) field_cale_ev2_pane_g

0xac05,	// (0x0009749c) field_cale_ev2_pane_t1_ParamLimits

0xac05,	// (0x0009749c) field_cale_ev2_pane_t1

0xac1c,	// (0x000974b3) field_cale_ev2_pane_t2_ParamLimits

0xac1c,	// (0x000974b3) field_cale_ev2_pane_t2

0x0001,

0xf72d,	// (0x0009bfc4) field_cale_ev2_pane_t_ParamLimits

0xf72d,	// (0x0009bfc4) field_cale_ev2_pane_t

0x3617,	// (0x0008feae) main_postcard_pane_g5_ParamLimits

0x3617,	// (0x0008feae) main_postcard_pane_g5

0x362b,	// (0x0008fec2) main_postcard_pane_g6_ParamLimits

0x362b,	// (0x0008fec2) main_postcard_pane_g6

0x19a9,	// (0x0008e240) camera2_autofocus_pane_cp_ParamLimits

0x19a9,	// (0x0008e240) camera2_autofocus_pane_cp

0x9f2b,	// (0x000967c2) main_mup3_pane

0x55e4,	// (0x00091e7b) main_mup3_pane_g1_ParamLimits

0x55e4,	// (0x00091e7b) main_mup3_pane_g1

0x5606,	// (0x00091e9d) main_mup3_pane_g2_ParamLimits

0x5606,	// (0x00091e9d) main_mup3_pane_g2

0x5679,	// (0x00091f10) main_mup3_pane_g3_ParamLimits

0x5679,	// (0x00091f10) main_mup3_pane_g3

0x56b7,	// (0x00091f4e) main_mup3_pane_g4_ParamLimits

0x56b7,	// (0x00091f4e) main_mup3_pane_g4

0x56f5,	// (0x00091f8c) main_mup3_pane_g5_ParamLimits

0x56f5,	// (0x00091f8c) main_mup3_pane_g5

0x5733,	// (0x00091fca) main_mup3_pane_g6_ParamLimits

0x5733,	// (0x00091fca) main_mup3_pane_g6

0xac31,	// (0x000974c8) main_mup3_pane_g7_ParamLimits

0xac31,	// (0x000974c8) main_mup3_pane_g7

0x0007,

0xf73d,	// (0x0009bfd4) main_mup3_pane_g_ParamLimits

0xf73d,	// (0x0009bfd4) main_mup3_pane_g

0x57a9,	// (0x00092040) main_mup3_pane_t1_ParamLimits

0x57a9,	// (0x00092040) main_mup3_pane_t1

0x580f,	// (0x000920a6) main_mup3_pane_t2_ParamLimits

0x580f,	// (0x000920a6) main_mup3_pane_t2

0x58d5,	// (0x0009216c) main_mup3_pane_t4_ParamLimits

0x58d5,	// (0x0009216c) main_mup3_pane_t4

0x5923,	// (0x000921ba) main_mup3_pane_t5_ParamLimits

0x5923,	// (0x000921ba) main_mup3_pane_t5

0x59d1,	// (0x00092268) main_mup3_pane_t6_ParamLimits

0x59d1,	// (0x00092268) main_mup3_pane_t6

0x0005,

0xf74e,	// (0x0009bfe5) main_mup3_pane_t_ParamLimits

0xf74e,	// (0x0009bfe5) main_mup3_pane_t

0x5a85,	// (0x0009231c) mup3_progress_pane_ParamLimits

0x5a85,	// (0x0009231c) mup3_progress_pane

0x5b01,	// (0x00092398) popup_mup3_control_window_ParamLimits

0x5b01,	// (0x00092398) popup_mup3_control_window

0xac3f,	// (0x000974d6) popup_mup3_text_window

0x5b2f,	// (0x000923c6) mup3_progress_pane_t1

0x5b4d,	// (0x000923e4) mup3_progress_pane_t2

0xac47,	// (0x000974de) mup3_progress_pane_t3

0x0002,

0xf75b,	// (0x0009bff2) mup3_progress_pane_t

0xac64,	// (0x000974fb) mup_progress_pane_cp03

0xd45f,	// (0x00099cf6) bg_tb_trans_pane_cp04

0x5b6b,	// (0x00092402) mup3_volume_pane

0x5b73,	// (0x0009240a) popup_mup3_control_window_g1

0x5b7c,	// (0x00092413) mup3_volume_pane_g1

0x5b85,	// (0x0009241c) mup3_volume_pane_g2

0x5b8e,	// (0x00092425) mup3_volume_pane_g3

0x0002,

0xf762,	// (0x0009bff9) mup3_volume_pane_g

0xd45f,	// (0x00099cf6) bg_tb_trans_pane_cp03

0xac74,	// (0x0009750b) popup_mup3_text_window_g1

0xac7c,	// (0x00097513) popup_mup3_text_window_t1

0xde53,	// (0x0009a6ea) list_calc_item_pane_g1_ParamLimits

0xa640,	// (0x00096ed7) mup_volume_pane_cp_g1

0x5558,	// (0x00091def) main_touch_calib_pane_t3

0x556a,	// (0x00091e01) main_touch_calib_pane_t4

0x557c,	// (0x00091e13) main_touch_calib_pane_t5

0x9eda,	// (0x00096771) aid_cell_size_toolbar2

0x9ee2,	// (0x00096779) aid_popup3_width_pane

0x9eea,	// (0x00096781) aid_zoom_text_msg_primary

0xe014,	// (0x0009a8ab) vorec_t7

0xde17,	// (0x0009a6ae) bg_calc_paper_pane_g1_ParamLimits

0xde23,	// (0x0009a6ba) bg_calc_paper_pane_g2_ParamLimits

0xde2f,	// (0x0009a6c6) bg_calc_paper_pane_g3_ParamLimits

0xde3b,	// (0x0009a6d2) bg_calc_paper_pane_g4_ParamLimits

0xde47,	// (0x0009a6de) bg_calc_paper_pane_g5_ParamLimits

0x1206,	// (0x0008da9d) bg_calc_paper_pane_g6_ParamLimits

0x1215,	// (0x0008daac) bg_calc_paper_pane_g7_ParamLimits

0x1224,	// (0x0008dabb) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0009b9eb) bg_calc_paper_pane_g_ParamLimits

0x1233,	// (0x0008daca) calc_bg_paper_pane_g9_ParamLimits

0x1add,	// (0x0008e374) image_qvga_pane_ParamLimits

0x1add,	// (0x0008e374) image_qvga_pane

0xdd42,	// (0x0009a5d9) bg_popup_sub_pane_cp04_ParamLimits

0xec07,	// (0x0009b49e) popup_mup_playback_window_g1_ParamLimits

0xec13,	// (0x0009b4aa) popup_mup_playback_window_t1_ParamLimits

0xec28,	// (0x0009b4bf) popup_mup_playback_window_t2_ParamLimits

0x014e,	// (0x0008c9e5) popup_mup_playback_window_t_ParamLimits

0x50a7,	// (0x0009193e) main_mup2_pane_g3_ParamLimits

0x50a7,	// (0x0009193e) main_mup2_pane_g3

0x1e9b,	// (0x0008e732) popup_toolbar_window_cp04

0xeffa,	// (0x0009b891) popup_call2_audio_second_window_g3_ParamLimits

0xeffa,	// (0x0009b891) popup_call2_audio_second_window_g3

0x3dee,	// (0x00090685) popup_call2_audio_first_window_g4_ParamLimits

0x3dee,	// (0x00090685) popup_call2_audio_first_window_g4

0x446d,	// (0x00090d04) popup_call2_audio_in_window_g4_ParamLimits

0x446d,	// (0x00090d04) popup_call2_audio_in_window_g4

0x373e,	// (0x0008ffd5) aid_area_sk_bg_cut_ParamLimits

0x373e,	// (0x0008ffd5) aid_area_sk_bg_cut

0xec3d,	// (0x0009b4d4) aid_area_sk_bg_cut_2_ParamLimits

0xec3d,	// (0x0009b4d4) aid_area_sk_bg_cut_2

0x537c,	// (0x00091c13) aid_placing_details_win

0x5384,	// (0x00091c1b) aid_placing_details_win_2

0xaa6a,	// (0x00097301) camera2_autofocus_pane_g1_ParamLimits

0x0e77,	// (0x0008d70e) popup_fixed_preview_cale_window_ParamLimits

0x0e77,	// (0x0008d70e) popup_fixed_preview_cale_window

0xea19,	// (0x0009b2b0) navi_slider_pane_g3

0xea22,	// (0x0009b2b9) navi_slider_pane_g4

0xea2b,	// (0x0009b2c2) navi_slider_pane_g5

0xea19,	// (0x0009b2b0) navi_slider_pane_g6

0xa0bd,	// (0x00096954) navi_slider_pane_g7

0xeb3e,	// (0x0009b3d5) mup_scale_pane_g3

0xeb47,	// (0x0009b3de) mup_scale_pane_g4

0xeb50,	// (0x0009b3e7) mup_scale_pane_g5

0x343c,	// (0x0008fcd3) mup_scale_pane_g6

0x3445,	// (0x0008fcdc) mup_scale_pane_g7

0xea19,	// (0x0009b2b0) cams2_slider_pane_g3

0xa6f5,	// (0x00096f8c) cams2_slider_pane_g4

0xa6fd,	// (0x00096f94) cams2_slider_pane_g5

0xea19,	// (0x0009b2b0) cams2_slider_pane_g6

0xa705,	// (0x00096f9c) cams2_slider_pane_g7

0xa929,	// (0x000971c0) camera2_autofocus_pane_cp_g1

0xa409,	// (0x00096ca0) bg_popup_preview_window_pane_cp02_ParamLimits

0xa409,	// (0x00096ca0) bg_popup_preview_window_pane_cp02

0xac8a,	// (0x00097521) list_fp_cale_pane_ParamLimits

0xac8a,	// (0x00097521) list_fp_cale_pane

0xac96,	// (0x0009752d) popup_fixed_preview_cale_window_t1_ParamLimits

0xac96,	// (0x0009752d) popup_fixed_preview_cale_window_t1

0x5b97,	// (0x0009242e) popup_fixed_preview_cale_window_t2_ParamLimits

0x5b97,	// (0x0009242e) popup_fixed_preview_cale_window_t2

0x5bac,	// (0x00092443) popup_fixed_preview_cale_window_t3_ParamLimits

0x5bac,	// (0x00092443) popup_fixed_preview_cale_window_t3

0x0002,

0xf769,	// (0x0009c000) popup_fixed_preview_cale_window_t_ParamLimits

0xf769,	// (0x0009c000) popup_fixed_preview_cale_window_t

0x5bc1,	// (0x00092458) list_single_fp_cale_pane_ParamLimits

0x5bc1,	// (0x00092458) list_single_fp_cale_pane

0xacb4,	// (0x0009754b) list_single_fp_cale_pane_g1_ParamLimits

0xacb4,	// (0x0009754b) list_single_fp_cale_pane_g1

0xacc0,	// (0x00097557) list_single_fp_cale_pane_g2_ParamLimits

0xacc0,	// (0x00097557) list_single_fp_cale_pane_g2

0x0002,

0xf770,	// (0x0009c007) list_single_fp_cale_pane_g_ParamLimits

0xf770,	// (0x0009c007) list_single_fp_cale_pane_g

0xacd9,	// (0x00097570) list_single_fp_cale_pane_t1_ParamLimits

0xacd9,	// (0x00097570) list_single_fp_cale_pane_t1

0xaceb,	// (0x00097582) list_single_fp_cale_pane_t2_ParamLimits

0xaceb,	// (0x00097582) list_single_fp_cale_pane_t2

0x0001,

0xf777,	// (0x0009c00e) list_single_fp_cale_pane_t_ParamLimits

0xf777,	// (0x0009c00e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9f39,	// (0x000967d0) main_dialer_pane

0x5bd5,	// (0x0009246c) aid_cell_size_keypad

0x5bdf,	// (0x00092476) dialer_ne_pane

0x5be7,	// (0x0009247e) grid_dialer_command_1_pane

0x5bef,	// (0x00092486) grid_dialer_command_2_pane

0x5bf7,	// (0x0009248e) grid_dialer_keypad_pane

0x5c07,	// (0x0009249e) bg_popup_call_pane_cp06_ParamLimits

0x5c07,	// (0x0009249e) bg_popup_call_pane_cp06

0x5c13,	// (0x000924aa) dialer_ne_clear_pane_ParamLimits

0x5c13,	// (0x000924aa) dialer_ne_clear_pane

0xad1e,	// (0x000975b5) dialer_ne_pane_g1

0xad26,	// (0x000975bd) dialer_ne_pane_t1_ParamLimits

0xad26,	// (0x000975bd) dialer_ne_pane_t1

0x5c1f,	// (0x000924b6) dialer_ne_pane_t2_ParamLimits

0x5c1f,	// (0x000924b6) dialer_ne_pane_t2

0x5c49,	// (0x000924e0) dialer_ne_pane_t3_ParamLimits

0x5c49,	// (0x000924e0) dialer_ne_pane_t3

0x0002,

0xf77c,	// (0x0009c013) dialer_ne_pane_t_ParamLimits

0xf77c,	// (0x0009c013) dialer_ne_pane_t

0x5c79,	// (0x00092510) dialer_ne_pane_t3_copy1_ParamLimits

0x5c79,	// (0x00092510) dialer_ne_pane_t3_copy1

0x5ca8,	// (0x0009253f) cell_dialer_keypad_pane_ParamLimits

0x5ca8,	// (0x0009253f) cell_dialer_keypad_pane

0x5cbd,	// (0x00092554) cell_dialer_command_1_pane_ParamLimits

0x5cbd,	// (0x00092554) cell_dialer_command_1_pane

0x5cd3,	// (0x0009256a) cell_dialer_command_2_pane_ParamLimits

0x5cd3,	// (0x0009256a) cell_dialer_command_2_pane

0xad38,	// (0x000975cf) bg_button_pane_cp02_ParamLimits

0xad38,	// (0x000975cf) bg_button_pane_cp02

0x5ce2,	// (0x00092579) cell_dialer_keypad_pane_g1_ParamLimits

0x5ce2,	// (0x00092579) cell_dialer_keypad_pane_g1

0xad38,	// (0x000975cf) bg_button_pane_cp03_ParamLimits

0xad38,	// (0x000975cf) bg_button_pane_cp03

0x5cf7,	// (0x0009258e) cell_dialer_command_1_pane_g1_ParamLimits

0x5cf7,	// (0x0009258e) cell_dialer_command_1_pane_g1

0xad44,	// (0x000975db) bg_button_pane_cp04

0x5d0b,	// (0x000925a2) cell_dialer_command_2_pane_g1

0xdfda,	// (0x0009a871) bg_button_pane_cp06

0xad4c,	// (0x000975e3) dialer_ne_clear_pane_g1

0xe924,	// (0x0009b1bb) navi_pane_g2

0x3041,	// (0x0008f8d8) navi_pane_g3

0x0002,

0xf3dc,	// (0x0009bc73) navi_pane_g

0xe9b1,	// (0x0009b248) navi_pane_mv_g2

0xe9d8,	// (0x0009b26f) navi_pane_mv_g5

0x305e,	// (0x0008f8f5) navi_pane_mv_t1

0xde0b,	// (0x0009a6a2) main_clock2_pane

0x5d50,	// (0x000925e7) main_clock2_list_pane_ParamLimits

0x5d50,	// (0x000925e7) main_clock2_list_pane

0x5d82,	// (0x00092619) main_clock2_pane_t1_ParamLimits

0x5d82,	// (0x00092619) main_clock2_pane_t1

0x5dbc,	// (0x00092653) main_clock2_pane_t2_ParamLimits

0x5dbc,	// (0x00092653) main_clock2_pane_t2

0x0004,

0xf788,	// (0x0009c01f) main_clock2_pane_t_ParamLimits

0xf788,	// (0x0009c01f) main_clock2_pane_t

0x5e50,	// (0x000926e7) popup_clock_analogue_window_cp03_ParamLimits

0x5e50,	// (0x000926e7) popup_clock_analogue_window_cp03

0x5e75,	// (0x0009270c) popup_clock_digital_window_cp02_ParamLimits

0x5e75,	// (0x0009270c) popup_clock_digital_window_cp02

0x5ee6,	// (0x0009277d) main_clock2_list_single_pane_ParamLimits

0x5ee6,	// (0x0009277d) main_clock2_list_single_pane

0xdfda,	// (0x0009a871) list_highlight_pane_cp05

0xad84,	// (0x0009761b) main_clock2_list_single_pane_t1

0x1e9b,	// (0x0008e732) popup_toolbar_window_cp04_ParamLimits

0x53dd,	// (0x00091c74) camera2_autofocus_pane_g2_ParamLimits

0x53dd,	// (0x00091c74) camera2_autofocus_pane_g2

0x53e9,	// (0x00091c80) camera2_autofocus_pane_g3_ParamLimits

0x53e9,	// (0x00091c80) camera2_autofocus_pane_g3

0x53f5,	// (0x00091c8c) camera2_autofocus_pane_g4_ParamLimits

0x53f5,	// (0x00091c8c) camera2_autofocus_pane_g4

0x5401,	// (0x00091c98) camera2_autofocus_pane_g5_ParamLimits

0x5401,	// (0x00091c98) camera2_autofocus_pane_g5

0x0004,

0xf6cc,	// (0x0009bf63) camera2_autofocus_pane_g_ParamLimits

0xf6cc,	// (0x0009bf63) camera2_autofocus_pane_g

0x55a6,	// (0x00091e3d) camera2_autofocus_pane_cp_g2

0x55ae,	// (0x00091e45) camera2_autofocus_pane_cp_g3

0x55b6,	// (0x00091e4d) camera2_autofocus_pane_cp_g4

0x55be,	// (0x00091e55) camera2_autofocus_pane_cp_g5

0x0004,

0xf732,	// (0x0009bfc9) camera2_autofocus_pane_cp_g

0x5bff,	// (0x00092496) popup_dialer_spcha_window

0xd45f,	// (0x00099cf6) bg_popup_sub_pane_cp07

0xad92,	// (0x00097629) list_spcha_pane

0xad9a,	// (0x00097631) list_single_spcha_pane_ParamLimits

0xad9a,	// (0x00097631) list_single_spcha_pane

0xd45f,	// (0x00099cf6) list_highlight_pane_cp06

0xadab,	// (0x00097642) list_single_spcha_pane_t1

0x4217,	// (0x00090aae) popup_call2_audio_out_window_g4_ParamLimits

0x4217,	// (0x00090aae) popup_call2_audio_out_window_g4

0x9f39,	// (0x000967d0) main_imed2_pane

0xa445,	// (0x00096cdc) popup_imed_adjust2_window

0x48d5,	// (0x0009116c) popup_imed_trans_window_ParamLimits

0x48d5,	// (0x0009116c) popup_imed_trans_window

0xa76d,	// (0x00097004) popup_blid_sat_info2_window_t1

0xa77b,	// (0x00097012) popup_blid_sat_info2_window_t2

0x000a,

0xf661,	// (0x0009bef8) popup_blid_sat_info2_window_t

0x5f90,	// (0x00092827) aid_size_cell_colour_35

0x5fb0,	// (0x00092847) aid_size_cell_colour_112

0x5fd0,	// (0x00092867) aid_size_cell_effect

0xa415,	// (0x00096cac) bg_tb_trans_pane_cp02

0xe4c5,	// (0x0009ad5c) heading_imed_pane

0x5ff0,	// (0x00092887) listscroll_imed_pane

0xadb9,	// (0x00097650) heading_imed_pane_g1

0xadc1,	// (0x00097658) heading_imed_pane_t1

0xadcf,	// (0x00097666) grid_imed_colour_35_pane_ParamLimits

0xadcf,	// (0x00097666) grid_imed_colour_35_pane

0x5ffc,	// (0x00092893) grid_imed_effect_pane

0xade2,	// (0x00097679) list_imed_aspect_pane

0x600f,	// (0x000928a6) scroll_pane_cp027_ParamLimits

0x600f,	// (0x000928a6) scroll_pane_cp027

0x601b,	// (0x000928b2) cell_imed_effect_pane_ParamLimits

0x601b,	// (0x000928b2) cell_imed_effect_pane

0xadea,	// (0x00097681) cell_imed_colour_pane_ParamLimits

0xadea,	// (0x00097681) cell_imed_colour_pane

0xae24,	// (0x000976bb) cell_imed_colour_pane_g1_ParamLimits

0xae24,	// (0x000976bb) cell_imed_colour_pane_g1

0xae35,	// (0x000976cc) hgihlgiht_grid_pane_cp016_ParamLimits

0xae35,	// (0x000976cc) hgihlgiht_grid_pane_cp016

0x6040,	// (0x000928d7) cell_imed_effect_pane_g1

0x6048,	// (0x000928df) grid_highlight_pane_cp017

0xae46,	// (0x000976dd) list_imed_single_pane_ParamLimits

0xae46,	// (0x000976dd) list_imed_single_pane

0xd45f,	// (0x00099cf6) list_highlight_pane_cp07

0xae59,	// (0x000976f0) list_imed_aspect_pane_comp1_t1

0xa415,	// (0x00096cac) bg_tb_trans_pane_cp05

0xae79,	// (0x00097710) popup_imed_adjust2_window_g1

0xaea0,	// (0x00097737) popup_imed_adjust2_window_t1

0xaeb8,	// (0x0009774f) slider_imed_adjust_pane

0xaecc,	// (0x00097763) slider_imed_adjust_pane_g1

0xaedc,	// (0x00097773) slider_imed_adjust_pane_g2

0xaeec,	// (0x00097783) slider_imed_adjust_pane_g3

0xaefd,	// (0x00097794) slider_imed_adjust_pane_g4

0x0003,

0xf7a5,	// (0x0009c03c) slider_imed_adjust_pane_g

0x6051,	// (0x000928e8) aid_size_cell_clipart2

0x605d,	// (0x000928f4) grid_imed_clipart_pane

0xaf0e,	// (0x000977a5) scroll_pane_cp031

0x6067,	// (0x000928fe) cell_imed_clipart_pane_ParamLimits

0x6067,	// (0x000928fe) cell_imed_clipart_pane

0x607f,	// (0x00092916) cell_imed_clipart_pane_g1

0xd45f,	// (0x00099cf6) grid_highlight_pane_cp014

0x5d63,	// (0x000925fa) main_clock2_pane_g1_ParamLimits

0x5d63,	// (0x000925fa) main_clock2_pane_g1

0x5e91,	// (0x00092728) aid_call2_pane_cp10

0x5ea3,	// (0x0009273a) aid_call_pane_cp10

0xe8b3,	// (0x0009b14a) popup_clock_analogue_window_cp10_g1

0xe8b3,	// (0x0009b14a) popup_clock_analogue_window_cp10_g2

0x5eb5,	// (0x0009274c) popup_clock_analogue_window_cp10_g3

0x5eb5,	// (0x0009274c) popup_clock_analogue_window_cp10_g4

0xe8b3,	// (0x0009b14a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf793,	// (0x0009c02a) popup_clock_analogue_window_cp10_g

0x5ec7,	// (0x0009275e) popup_clock_analogue_window_cp10_t1

0x5ef8,	// (0x0009278f) clock_digital_number_pane_cp10_ParamLimits

0x5ef8,	// (0x0009278f) clock_digital_number_pane_cp10

0x5f10,	// (0x000927a7) clock_digital_number_pane_cp11_ParamLimits

0x5f10,	// (0x000927a7) clock_digital_number_pane_cp11

0x5f28,	// (0x000927bf) clock_digital_number_pane_cp12_ParamLimits

0x5f28,	// (0x000927bf) clock_digital_number_pane_cp12

0x5f40,	// (0x000927d7) clock_digital_number_pane_cp13_ParamLimits

0x5f40,	// (0x000927d7) clock_digital_number_pane_cp13

0x5f58,	// (0x000927ef) clock_digital_separator_pane_cp10_ParamLimits

0x5f58,	// (0x000927ef) clock_digital_separator_pane_cp10

0x5f70,	// (0x00092807) popup_clock_digital_window_cp02_t1_ParamLimits

0x5f70,	// (0x00092807) popup_clock_digital_window_cp02_t1

0xdd3a,	// (0x0009a5d1) clock_digital_number_pane_cp10_g1

0xdd3a,	// (0x0009a5d1) clock_digital_number_pane_cp10_g2

0x0001,

0x046e,	// (0x0008cd05) clock_digital_number_pane_cp10_g

0xdd3a,	// (0x0009a5d1) clock_digital_separator_pane_cp10_g1

0xdd3a,	// (0x0009a5d1) clock_digital_separator_pane_g2_cp10

0xe9e0,	// (0x0009b277) navi_pane_vded_g4

0xe9e9,	// (0x0009b280) navi_pane_vded_g5

0xe9f2,	// (0x0009b289) navi_pane_vded_t1

0x9f39,	// (0x000967d0) main_vded_pane

0x6088,	// (0x0009291f) main_vded_pane_g1

0x6092,	// (0x00092929) main_vded_pane_g2

0x609a,	// (0x00092931) main_vded_pane_g3

0x0002,

0xf7ae,	// (0x0009c045) main_vded_pane_g

0x60a2,	// (0x00092939) main_vded_pane_t1

0x60b0,	// (0x00092947) main_vded_pane_t2

0x0001,

0xf7b5,	// (0x0009c04c) main_vded_pane_t

0x60be,	// (0x00092955) vded_slider_pane

0x60c6,	// (0x0009295d) vded_video_pane

0xaf16,	// (0x000977ad) vded_video_pane_g1

0x60ce,	// (0x00092965) vded_video_pane_g2

0xa929,	// (0x000971c0) vded_video_pane_g3

0x0002,

0xf7ba,	// (0x0009c051) vded_video_pane_g

0xaf20,	// (0x000977b7) vded_slider_pane_g1

0xa640,	// (0x00096ed7) vded_slider_pane_g2

0xaf29,	// (0x000977c0) vded_slider_pane_g3

0xaf32,	// (0x000977c9) vded_slider_pane_g4

0xaf3b,	// (0x000977d2) vded_slider_pane_g5

0x0004,

0xf7c1,	// (0x0009c058) vded_slider_pane_g

0x5aeb,	// (0x00092382) mup3_rocker_pane_ParamLimits

0x5aeb,	// (0x00092382) mup3_rocker_pane

0x60d7,	// (0x0009296e) mup3_control_keys_pane_g1

0x60df,	// (0x00092976) mup3_control_keys_pane_g2

0x60e7,	// (0x0009297e) mup3_control_keys_pane_g3

0x60ef,	// (0x00092986) mup3_control_keys_pane_g4

0x0003,

0xf7cc,	// (0x0009c063) mup3_control_keys_pane_g

0x0eaa,	// (0x0008d741) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0eaa,	// (0x0008d741) popup_toolbar2_fixed_window_cp01

0x5b19,	// (0x000923b0) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5b19,	// (0x000923b0) popup_toolbar2_fixed_window_cp02

0x3b56,	// (0x000903ed) popup_call2_audio_second_window_t4_ParamLimits

0x3b56,	// (0x000903ed) popup_call2_audio_second_window_t4

0x4084,	// (0x0009091b) popup_call2_audio_first_window_t6_ParamLimits

0x4084,	// (0x0009091b) popup_call2_audio_first_window_t6

0x431a,	// (0x00090bb1) popup_call2_audio_out_window_t6_ParamLimits

0x431a,	// (0x00090bb1) popup_call2_audio_out_window_t6

0x9f39,	// (0x000967d0) main_vitu_pane

0x60ff,	// (0x00092996) aid_size_cell_itu_ParamLimits

0x60ff,	// (0x00092996) aid_size_cell_itu

0x47c0,	// (0x00091057) bg_popup_window_pane_cp08_ParamLimits

0x47c0,	// (0x00091057) bg_popup_window_pane_cp08

0x6115,	// (0x000929ac) field_vitu_entry_pane_ParamLimits

0x6115,	// (0x000929ac) field_vitu_entry_pane

0x6128,	// (0x000929bf) grid_vitu_function_pane_ParamLimits

0x6128,	// (0x000929bf) grid_vitu_function_pane

0x613d,	// (0x000929d4) grid_vitu_itu_pane_ParamLimits

0x613d,	// (0x000929d4) grid_vitu_itu_pane

0x6153,	// (0x000929ea) cell_vitu_itu_pane_ParamLimits

0x6153,	// (0x000929ea) cell_vitu_itu_pane

0x6175,	// (0x00092a0c) cell_vitu_function_pane_ParamLimits

0x6175,	// (0x00092a0c) cell_vitu_function_pane

0x47c0,	// (0x00091057) bg_popup_sub_pane_cp08_ParamLimits

0x47c0,	// (0x00091057) bg_popup_sub_pane_cp08

0x618e,	// (0x00092a25) field_vitu_entry_pane_t1_ParamLimits

0x618e,	// (0x00092a25) field_vitu_entry_pane_t1

0xaf5c,	// (0x000977f3) field_vitu_entry_pane_t2_ParamLimits

0xaf5c,	// (0x000977f3) field_vitu_entry_pane_t2

0x0001,

0xf7da,	// (0x0009c071) field_vitu_entry_pane_t_ParamLimits

0xf7da,	// (0x0009c071) field_vitu_entry_pane_t

0xaf79,	// (0x00097810) bg_button_pane_cp05_ParamLimits

0xaf79,	// (0x00097810) bg_button_pane_cp05

0x61aa,	// (0x00092a41) cell_vitu_itu_pane_g1

0x61c2,	// (0x00092a59) cell_vitu_itu_pane_t1_ParamLimits

0x61c2,	// (0x00092a59) cell_vitu_itu_pane_t1

0x61d4,	// (0x00092a6b) cell_vitu_itu_pane_t2_ParamLimits

0x61d4,	// (0x00092a6b) cell_vitu_itu_pane_t2

0x0002,

0xf7df,	// (0x0009c076) cell_vitu_itu_pane_t_ParamLimits

0xf7df,	// (0x0009c076) cell_vitu_itu_pane_t

0xaf87,	// (0x0009781e) bg_button_pane_cp07

0x6209,	// (0x00092aa0) cell_vitu_function_pane_g1

0x9f43,	// (0x000967da) main_calc_pane_g1

0x0d0e,	// (0x0008d5a5) aid_visual_content_pane

0x9f39,	// (0x000967d0) main_vradio_pane

0x6212,	// (0x00092aa9) main_vradio_pane_g1_ParamLimits

0x6212,	// (0x00092aa9) main_vradio_pane_g1

0xaf91,	// (0x00097828) main_vradio_pane_g2_ParamLimits

0xaf91,	// (0x00097828) main_vradio_pane_g2

0x0001,

0xf7e6,	// (0x0009c07d) main_vradio_pane_g_ParamLimits

0xf7e6,	// (0x0009c07d) main_vradio_pane_g

0x6228,	// (0x00092abf) main_vradio_pane_t1_ParamLimits

0x6228,	// (0x00092abf) main_vradio_pane_t1

0x623d,	// (0x00092ad4) main_vradio_pane_t2_ParamLimits

0x623d,	// (0x00092ad4) main_vradio_pane_t2

0xaf9e,	// (0x00097835) main_vradio_pane_t3_ParamLimits

0xaf9e,	// (0x00097835) main_vradio_pane_t3

0x0002,

0xf7eb,	// (0x0009c082) main_vradio_pane_t_ParamLimits

0xf7eb,	// (0x0009c082) main_vradio_pane_t

0x6252,	// (0x00092ae9) vradio_rocker_control_pane_ParamLimits

0x6252,	// (0x00092ae9) vradio_rocker_control_pane

0x6264,	// (0x00092afb) vradio_station_info_pane_ParamLimits

0x6264,	// (0x00092afb) vradio_station_info_pane

0xafb0,	// (0x00097847) vradio_frequency_info_pane_ParamLimits

0xafb0,	// (0x00097847) vradio_frequency_info_pane

0xa929,	// (0x000971c0) vradio_station_info_pane_g1

0xafbf,	// (0x00097856) vradio_station_info_pane_t1_ParamLimits

0xafbf,	// (0x00097856) vradio_station_info_pane_t1

0xafe1,	// (0x00097878) vradio_station_info_pane_t2_ParamLimits

0xafe1,	// (0x00097878) vradio_station_info_pane_t2

0x0001,

0xf7f2,	// (0x0009c089) vradio_station_info_pane_t_ParamLimits

0xf7f2,	// (0x0009c089) vradio_station_info_pane_t

0xaff3,	// (0x0009788a) vradio_tuning_pane

0xaffb,	// (0x00097892) vradio_rocker_control_pane_g1

0xb003,	// (0x0009789a) vradio_rocker_control_pane_g2

0xb00b,	// (0x000978a2) vradio_rocker_control_pane_g3

0xb013,	// (0x000978aa) vradio_rocker_control_pane_g4

0xb01b,	// (0x000978b2) vradio_rocker_control_pane_g5

0x0004,

0xf7f7,	// (0x0009c08e) vradio_rocker_control_pane_g

0x6274,	// (0x00092b0b) vradio_frequency_info_pane_g1

0xb023,	// (0x000978ba) vradio_frequency_info_pane_t1_ParamLimits

0xb023,	// (0x000978ba) vradio_frequency_info_pane_t1

0x627e,	// (0x00092b15) vradio_tuning_pane_g1

0x6287,	// (0x00092b1e) vradio_tuning_pane_t1

0x9f02,	// (0x00096799) area_side_right_pane_ParamLimits

0x9f02,	// (0x00096799) area_side_right_pane

0xa3d0,	// (0x00096c67) status_small_pane_g1

0xa3d8,	// (0x00096c6f) status_small_pane_g2

0xa3e1,	// (0x00096c78) status_small_pane_g3

0xa3ea,	// (0x00096c81) status_small_pane_g4

0x0003,

0xf5b7,	// (0x0009be4e) status_small_pane_g

0xa3f3,	// (0x00096c8a) status_small_pane_t1

0x9f39,	// (0x000967d0) main_video3_pane

0xb037,	// (0x000978ce) cams_zoom_vslider_pane

0xb03f,	// (0x000978d6) image3_wide_pane_ParamLimits

0xb03f,	// (0x000978d6) image3_wide_pane

0xb059,	// (0x000978f0) image3_wide_small_pane

0xb063,	// (0x000978fa) main_video3_pane_g1_ParamLimits

0xb063,	// (0x000978fa) main_video3_pane_g1

0xb07f,	// (0x00097916) main_video3_pane_g2_ParamLimits

0xb07f,	// (0x00097916) main_video3_pane_g2

0x0001,

0xf802,	// (0x0009c099) main_video3_pane_g_ParamLimits

0xf802,	// (0x0009c099) main_video3_pane_g

0xb09b,	// (0x00097932) main_video3_pane_t1_ParamLimits

0xb09b,	// (0x00097932) main_video3_pane_t1

0xb0c6,	// (0x0009795d) main_video3_pane_t2_ParamLimits

0xb0c6,	// (0x0009795d) main_video3_pane_t2

0xb0f1,	// (0x00097988) main_video3_pane_t3_ParamLimits

0xb0f1,	// (0x00097988) main_video3_pane_t3

0x0002,

0xf807,	// (0x0009c09e) main_video3_pane_t_ParamLimits

0xf807,	// (0x0009c09e) main_video3_pane_t

0xb11c,	// (0x000979b3) cams_zoom_vslider_pane_g1

0xb125,	// (0x000979bc) cams_zoom_vslider_pane_g2

0x0001,

0xf80e,	// (0x0009c0a5) cams_zoom_vslider_pane_g

0xb12d,	// (0x000979c4) small_slider_vertical_pane

0xa929,	// (0x000971c0) small_slider_vertical_pane_g1

0xa929,	// (0x000971c0) small_slider_vertical_pane_g2

0xb135,	// (0x000979cc) small_slider_vertical_pane_g3

0x0002,

0xf813,	// (0x0009c0aa) small_slider_vertical_pane_g

0x9f39,	// (0x000967d0) main_hwr_training_pane

0xb13e,	// (0x000979d5) hwr_training_instruct_pane_ParamLimits

0xb13e,	// (0x000979d5) hwr_training_instruct_pane

0x6296,	// (0x00092b2d) hwr_training_navi_pane_ParamLimits

0x6296,	// (0x00092b2d) hwr_training_navi_pane

0x62ad,	// (0x00092b44) hwr_training_write_pane_ParamLimits

0x62ad,	// (0x00092b44) hwr_training_write_pane

0xd45f,	// (0x00099cf6) bg_frame_shadow_pane

0xb16d,	// (0x00097a04) hwr_training_write_pane_g1

0xb175,	// (0x00097a0c) hwr_training_write_pane_g2

0xb17d,	// (0x00097a14) hwr_training_write_pane_g3

0xb185,	// (0x00097a1c) hwr_training_write_pane_g4

0xb18d,	// (0x00097a24) hwr_training_write_pane_g5

0xb195,	// (0x00097a2c) hwr_training_write_pane_g6

0xb19d,	// (0x00097a34) hwr_training_write_pane_g7

0x0006,

0xf81a,	// (0x0009c0b1) hwr_training_write_pane_g

0xb1a5,	// (0x00097a3c) hwr_training_navi_pane_g1_ParamLimits

0xb1a5,	// (0x00097a3c) hwr_training_navi_pane_g1

0xb1b7,	// (0x00097a4e) hwr_training_navi_pane_g2_ParamLimits

0xb1b7,	// (0x00097a4e) hwr_training_navi_pane_g2

0xb1c9,	// (0x00097a60) hwr_training_navi_pane_g3_ParamLimits

0xb1c9,	// (0x00097a60) hwr_training_navi_pane_g3

0xb1d9,	// (0x00097a70) hwr_training_navi_pane_g4_ParamLimits

0xb1d9,	// (0x00097a70) hwr_training_navi_pane_g4

0x0004,

0xf829,	// (0x0009c0c0) hwr_training_navi_pane_g_ParamLimits

0xf829,	// (0x0009c0c0) hwr_training_navi_pane_g

0xb1e6,	// (0x00097a7d) hwr_training_navi_pane_t1

0x62ed,	// (0x00092b84) list_single_hwr_training_instruct_pane_ParamLimits

0x62ed,	// (0x00092b84) list_single_hwr_training_instruct_pane

0xb1f4,	// (0x00097a8b) list_single_hwr_training_instruct_pane_t1

0xa869,	// (0x00097100) bg_frame_shadow_pane_g1

0xb203,	// (0x00097a9a) bg_frame_shadow_pane_g2

0xb20b,	// (0x00097aa2) bg_frame_shadow_pane_g3

0xb213,	// (0x00097aaa) bg_frame_shadow_pane_g4

0xb21b,	// (0x00097ab2) bg_frame_shadow_pane_g5

0xb223,	// (0x00097aba) bg_frame_shadow_pane_g6

0xb22b,	// (0x00097ac2) bg_frame_shadow_pane_g7

0xded6,	// (0x0009a76d) bg_frame_shadow_pane_g8

0x0007,

0xf834,	// (0x0009c0cb) bg_frame_shadow_pane_g

0x9f39,	// (0x000967d0) main_video_tele_dialer_pane

0x6305,	// (0x00092b9c) aid_size_cell_video_keypad_ParamLimits

0x6305,	// (0x00092b9c) aid_size_cell_video_keypad

0x631f,	// (0x00092bb6) grid_video_dialer_keypad_pane_ParamLimits

0x631f,	// (0x00092bb6) grid_video_dialer_keypad_pane

0x6361,	// (0x00092bf8) video_down_pane_cp_ParamLimits

0x6361,	// (0x00092bf8) video_down_pane_cp

0x6391,	// (0x00092c28) cell_video_dialer_keypad_pane_ParamLimits

0x6391,	// (0x00092c28) cell_video_dialer_keypad_pane

0xb233,	// (0x00097aca) bg_button_pane_cp08_ParamLimits

0xb233,	// (0x00097aca) bg_button_pane_cp08

0x63b3,	// (0x00092c4a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x63b3,	// (0x00092c4a) cell_video_dialer_keypad_pane_g1

0x5ad5,	// (0x0009236c) mup3_rocker2_pane_ParamLimits

0x5ad5,	// (0x0009236c) mup3_rocker2_pane

0xa929,	// (0x000971c0) mup3_rocker2_pane_g1

0x47ce,	// (0x00091065) main_dialer2_pane

0x9f39,	// (0x000967d0) main_mp4_pane

0xb24f,	// (0x00097ae6) main_mp4_pane_g1_ParamLimits

0xb24f,	// (0x00097ae6) main_mp4_pane_g1

0xb24f,	// (0x00097ae6) main_mp4_pane_g2_ParamLimits

0xb24f,	// (0x00097ae6) main_mp4_pane_g2

0x63ee,	// (0x00092c85) main_mp4_pane_g3_ParamLimits

0x63ee,	// (0x00092c85) main_mp4_pane_g3

0xb25d,	// (0x00097af4) main_mp4_pane_g4_ParamLimits

0xb25d,	// (0x00097af4) main_mp4_pane_g4

0xb28b,	// (0x00097b22) main_mp4_pane_g5_ParamLimits

0xb28b,	// (0x00097b22) main_mp4_pane_g5

0x0007,

0xf854,	// (0x0009c0eb) main_mp4_pane_g_ParamLimits

0xf854,	// (0x0009c0eb) main_mp4_pane_g

0xb2ff,	// (0x00097b96) main_mp4_pane_t1_ParamLimits

0xb2ff,	// (0x00097b96) main_mp4_pane_t1

0xb357,	// (0x00097bee) main_mp4_pane_t2_ParamLimits

0xb357,	// (0x00097bee) main_mp4_pane_t2

0xb3a9,	// (0x00097c40) main_mp4_pane_t3_ParamLimits

0xb3a9,	// (0x00097c40) main_mp4_pane_t3

0xb3cf,	// (0x00097c66) main_mp4_pane_t4_ParamLimits

0xb3cf,	// (0x00097c66) main_mp4_pane_t4

0x0003,

0xf865,	// (0x0009c0fc) main_mp4_pane_t_ParamLimits

0xf865,	// (0x0009c0fc) main_mp4_pane_t

0xb40f,	// (0x00097ca6) mp4_progress_pane_ParamLimits

0xb40f,	// (0x00097ca6) mp4_progress_pane

0xb453,	// (0x00097cea) mp4_rocker_pane_ParamLimits

0xb453,	// (0x00097cea) mp4_rocker_pane

0xb479,	// (0x00097d10) mp4_progress_pane_t1

0xb490,	// (0x00097d27) mp4_progress_pane_t2

0x0001,

0xf86e,	// (0x0009c105) mp4_progress_pane_t

0xb4a7,	// (0x00097d3e) mup_progress_pane_cp04

0xb4b3,	// (0x00097d4a) mp4_rocker_pane_g1

0x641e,	// (0x00092cb5) aid_cell_size_keypad2_ParamLimits

0x641e,	// (0x00092cb5) aid_cell_size_keypad2

0x6438,	// (0x00092ccf) dialer2_ne_pane_ParamLimits

0x6438,	// (0x00092ccf) dialer2_ne_pane

0x644d,	// (0x00092ce4) grid_dialer2_keypad_pane_ParamLimits

0x644d,	// (0x00092ce4) grid_dialer2_keypad_pane

0xa716,	// (0x00096fad) bg_popup_call_pane_cp07_ParamLimits

0xa716,	// (0x00096fad) bg_popup_call_pane_cp07

0x6463,	// (0x00092cfa) dialer2_ne_pane_t1_ParamLimits

0x6463,	// (0x00092cfa) dialer2_ne_pane_t1

0x64a0,	// (0x00092d37) cell_dialer2_keypad_pane_ParamLimits

0x64a0,	// (0x00092d37) cell_dialer2_keypad_pane

0xb4cf,	// (0x00097d66) bg_button_pane_pane_cp04_ParamLimits

0xb4cf,	// (0x00097d66) bg_button_pane_pane_cp04

0x64c2,	// (0x00092d59) cell_dialer2_keypad_pane_g1_ParamLimits

0x64c2,	// (0x00092d59) cell_dialer2_keypad_pane_g1

0x1d89,	// (0x0008e620) aid_placing_vt_set_content_ParamLimits

0x1d89,	// (0x0008e620) aid_placing_vt_set_content

0x1dab,	// (0x0008e642) aid_placing_vt_set_title_ParamLimits

0x1dab,	// (0x0008e642) aid_placing_vt_set_title

0x9f39,	// (0x000967d0) main_image3_pane

0x6551,	// (0x00092de8) area_side_right_pane_cp01_ParamLimits

0x6551,	// (0x00092de8) area_side_right_pane_cp01

0xb24f,	// (0x00097ae6) main_image3_pane_g1_ParamLimits

0xb24f,	// (0x00097ae6) main_image3_pane_g1

0x6568,	// (0x00092dff) main_image3_pane_g2_ParamLimits

0x6568,	// (0x00092dff) main_image3_pane_g2

0x658e,	// (0x00092e25) main_image3_pane_g3_ParamLimits

0x658e,	// (0x00092e25) main_image3_pane_g3

0x65b4,	// (0x00092e4b) main_image3_pane_g4_ParamLimits

0x65b4,	// (0x00092e4b) main_image3_pane_g4

0x0003,

0xf87d,	// (0x0009c114) main_image3_pane_g_ParamLimits

0xf87d,	// (0x0009c114) main_image3_pane_g

0x65da,	// (0x00092e71) main_image3_pane_t1_ParamLimits

0x65da,	// (0x00092e71) main_image3_pane_t1

0x6632,	// (0x00092ec9) main_image3_pane_t2_ParamLimits

0x6632,	// (0x00092ec9) main_image3_pane_t2

0x6684,	// (0x00092f1b) main_image3_pane_t3_ParamLimits

0x6684,	// (0x00092f1b) main_image3_pane_t3

0x0003,

0xf886,	// (0x0009c11d) main_image3_pane_t_ParamLimits

0xf886,	// (0x0009c11d) main_image3_pane_t

0x47c0,	// (0x00091057) grid_sctrl_middle_pane_cp01_ParamLimits

0x47c0,	// (0x00091057) grid_sctrl_middle_pane_cp01

0x6704,	// (0x00092f9b) cell_sctrl_middle_pane_cp01_ParamLimits

0x6704,	// (0x00092f9b) cell_sctrl_middle_pane_cp01

0x6721,	// (0x00092fb8) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6721,	// (0x00092fb8) cell_sctrl_middle_pane_cp01_g1

0x9f39,	// (0x000967d0) main_call4_pane

0x6737,	// (0x00092fce) aid_size_button_call4_ParamLimits

0x6737,	// (0x00092fce) aid_size_button_call4

0x6764,	// (0x00092ffb) call4_windows_pane_ParamLimits

0x6764,	// (0x00092ffb) call4_windows_pane

0x677a,	// (0x00093011) grid_call4_button_pane_ParamLimits

0x677a,	// (0x00093011) grid_call4_button_pane

0xb525,	// (0x00097dbc) call4_windows_conf_pane

0x67a1,	// (0x00093038) popup_call4_audio_first_window_ParamLimits

0x67a1,	// (0x00093038) popup_call4_audio_first_window

0x67c1,	// (0x00093058) popup_call4_audio_second_window_ParamLimits

0x67c1,	// (0x00093058) popup_call4_audio_second_window

0xb558,	// (0x00097def) popup_call4_audio_wait_window_ParamLimits

0xb558,	// (0x00097def) popup_call4_audio_wait_window

0x67d3,	// (0x0009306a) cell_call4_button_pane_ParamLimits

0x67d3,	// (0x0009306a) cell_call4_button_pane

0x67f8,	// (0x0009308f) bg_button_pane_cp09_ParamLimits

0x67f8,	// (0x0009308f) bg_button_pane_cp09

0x6804,	// (0x0009309b) cell_call4_button_pane_g1_ParamLimits

0x6804,	// (0x0009309b) cell_call4_button_pane_g1

0x682a,	// (0x000930c1) cell_call4_button_pane_t1_ParamLimits

0x682a,	// (0x000930c1) cell_call4_button_pane_t1

0xb56c,	// (0x00097e03) popup_call4_audio_conf_window_ParamLimits

0xb56c,	// (0x00097e03) popup_call4_audio_conf_window

0x5b2f,	// (0x000923c6) mup3_progress_pane_t1_ParamLimits

0x5b4d,	// (0x000923e4) mup3_progress_pane_t2_ParamLimits

0xac47,	// (0x000974de) mup3_progress_pane_t3_ParamLimits

0xf75b,	// (0x0009bff2) mup3_progress_pane_t_ParamLimits

0xac64,	// (0x000974fb) mup_progress_pane_cp03_ParamLimits

0x60f7,	// (0x0009298e) mup3_control_keys_pane_g4_copy1

0xb43d,	// (0x00097cd4) mp4_rocker2_pane_ParamLimits

0xb43d,	// (0x00097cd4) mp4_rocker2_pane

0xb580,	// (0x00097e17) mp4_rocker2_pane_g1

0xb588,	// (0x00097e1f) mp4_rocker2_pane_g2

0xd4f2,	// (0x00099d89) mp4_rocker2_pane_g3

0xd4fa,	// (0x00099d91) mp4_rocker2_pane_g4

0xd502,	// (0x00099d99) mp4_rocker2_pane_g5

0x0004,

0xf88f,	// (0x0009c126) mp4_rocker2_pane_g

0x9f39,	// (0x000967d0) main_camera4_pane

0x9f39,	// (0x000967d0) main_video4_pane

0x6333,	// (0x00092bca) main_video_tele_dialer_pane_t1_ParamLimits

0x6333,	// (0x00092bca) main_video_tele_dialer_pane_t1

0x634a,	// (0x00092be1) main_video_tele_dialer_pane_t2_ParamLimits

0x634a,	// (0x00092be1) main_video_tele_dialer_pane_t2

0x0001,

0xf845,	// (0x0009c0dc) main_video_tele_dialer_pane_t_ParamLimits

0xf845,	// (0x0009c0dc) main_video_tele_dialer_pane_t

0x6868,	// (0x000930ff) cam4_autofocus_pane_ParamLimits

0x6868,	// (0x000930ff) cam4_autofocus_pane

0x687c,	// (0x00093113) cam4_image_uncrop_pane_ParamLimits

0x687c,	// (0x00093113) cam4_image_uncrop_pane

0x6893,	// (0x0009312a) cam4_indicators_pane_ParamLimits

0x6893,	// (0x0009312a) cam4_indicators_pane

0x68b7,	// (0x0009314e) main_camera4_pane_g1_ParamLimits

0x68b7,	// (0x0009314e) main_camera4_pane_g1

0x68c3,	// (0x0009315a) main_camera4_pane_g2_ParamLimits

0x68c3,	// (0x0009315a) main_camera4_pane_g2

0x68c3,	// (0x0009315a) main_camera4_pane_g3_ParamLimits

0x68c3,	// (0x0009315a) main_camera4_pane_g3

0x68cf,	// (0x00093166) main_camera4_pane_g4_ParamLimits

0x68cf,	// (0x00093166) main_camera4_pane_g4

0x68db,	// (0x00093172) main_camera4_pane_g5_ParamLimits

0x68db,	// (0x00093172) main_camera4_pane_g5

0x0005,

0xf89a,	// (0x0009c131) main_camera4_pane_g_ParamLimits

0xf89a,	// (0x0009c131) main_camera4_pane_g

0x68f8,	// (0x0009318f) main_camera4_pane_t1_ParamLimits

0x68f8,	// (0x0009318f) main_camera4_pane_t1

0xd524,	// (0x00099dbb) bg_tb_trans_pane_cp06

0xd53a,	// (0x00099dd1) cam4_indicators_pane_g1

0xd54a,	// (0x00099de1) cam4_indicators_pane_g2

0x0002,

0xf8b5,	// (0x0009c14c) cam4_indicators_pane_g

0xd56a,	// (0x00099e01) cam4_indicators_pane_t1

0x694d,	// (0x000931e4) main_video4_pane_g1_ParamLimits

0x694d,	// (0x000931e4) main_video4_pane_g1

0x695f,	// (0x000931f6) main_video4_pane_g2_ParamLimits

0x695f,	// (0x000931f6) main_video4_pane_g2

0x695f,	// (0x000931f6) main_video4_pane_g3_ParamLimits

0x695f,	// (0x000931f6) main_video4_pane_g3

0x696e,	// (0x00093205) main_video4_pane_g4_ParamLimits

0x696e,	// (0x00093205) main_video4_pane_g4

0x0004,

0xf8bc,	// (0x0009c153) main_video4_pane_g_ParamLimits

0xf8bc,	// (0x0009c153) main_video4_pane_g

0x698c,	// (0x00093223) vid4_indicators_pane_ParamLimits

0x698c,	// (0x00093223) vid4_indicators_pane

0x69b4,	// (0x0009324b) video4_image_uncrop_cif_pane_ParamLimits

0x69b4,	// (0x0009324b) video4_image_uncrop_cif_pane

0x69cc,	// (0x00093263) video4_image_uncrop_nhd_pane_ParamLimits

0x69cc,	// (0x00093263) video4_image_uncrop_nhd_pane

0x69e0,	// (0x00093277) video4_image_uncrop_vga_pane_ParamLimits

0x69e0,	// (0x00093277) video4_image_uncrop_vga_pane

0x9f2b,	// (0x000967c2) bg_tb_trans_pane_cp07

0xd53a,	// (0x00099dd1) vid4_indicators_pane_g1

0xd58c,	// (0x00099e23) vid4_indicators_pane_g2

0xd59c,	// (0x00099e33) vid4_indicators_pane_g3

0x0004,

0xf8c7,	// (0x0009c15e) vid4_indicators_pane_g

0xd5c9,	// (0x00099e60) vid4_indicators_pane_t1

0x69f8,	// (0x0009328f) cam4_autofocus_pane_g1

0x6a00,	// (0x00093297) cam4_autofocus_pane_g2

0x6a08,	// (0x0009329f) cam4_autofocus_pane_g3

0x0002,

0xf8d2,	// (0x0009c169) cam4_autofocus_pane_g

0x6a10,	// (0x000932a7) cam4_autofocus_pane_g3_copy1

0x6375,	// (0x00092c0c) video_down_pane_cp_t1

0x6383,	// (0x00092c1a) video_down_pane_cp_t2

0x0001,

0xf84a,	// (0x0009c0e1) video_down_pane_cp_t

0x9f2b,	// (0x000967c2) popup_vitu2_window_ParamLimits

0x9f2b,	// (0x000967c2) popup_vitu2_window

0x6a18,	// (0x000932af) aid_size_cell2_itu2_ParamLimits

0x6a18,	// (0x000932af) aid_size_cell2_itu2

0x6a3e,	// (0x000932d5) aid_size_cell_itu2_ParamLimits

0x6a3e,	// (0x000932d5) aid_size_cell_itu2

0x6a8f,	// (0x00093326) bg_popup_window_pane_cp09_ParamLimits

0x6a8f,	// (0x00093326) bg_popup_window_pane_cp09

0x6a9d,	// (0x00093334) field_vitu2_entry_pane_ParamLimits

0x6a9d,	// (0x00093334) field_vitu2_entry_pane

0x6ab4,	// (0x0009334b) grid_vitu2_function_pane_ParamLimits

0x6ab4,	// (0x0009334b) grid_vitu2_function_pane

0x6ae9,	// (0x00093380) grid_vitu2_itu_pane_ParamLimits

0x6ae9,	// (0x00093380) grid_vitu2_itu_pane

0x6b50,	// (0x000933e7) cell_vitu2_itu_pane_ParamLimits

0x6b50,	// (0x000933e7) cell_vitu2_itu_pane

0x6b78,	// (0x0009340f) cell_vitu2_function_pane_ParamLimits

0x6b78,	// (0x0009340f) cell_vitu2_function_pane

0xb5a2,	// (0x00097e39) bg_popup_call_pane_cp08_ParamLimits

0xb5a2,	// (0x00097e39) bg_popup_call_pane_cp08

0xb5b9,	// (0x00097e50) field_vitu2_entry_pane_g1

0xb5c5,	// (0x00097e5c) field_vitu2_entry_pane_g2

0x0002,

0xf8d9,	// (0x0009c170) field_vitu2_entry_pane_g

0x6bb7,	// (0x0009344e) field_vitu2_entry_pane_t1_ParamLimits

0x6bb7,	// (0x0009344e) field_vitu2_entry_pane_t1

0xb5df,	// (0x00097e76) field_vitu2_entry_pane_t2_ParamLimits

0xb5df,	// (0x00097e76) field_vitu2_entry_pane_t2

0x0001,

0xf8e0,	// (0x0009c177) field_vitu2_entry_pane_t_ParamLimits

0xf8e0,	// (0x0009c177) field_vitu2_entry_pane_t

0x6be4,	// (0x0009347b) bg_button_pane_cp010_ParamLimits

0x6be4,	// (0x0009347b) bg_button_pane_cp010

0xd5e3,	// (0x00099e7a) cell_vitu2_itu_pane_g1

0x6c00,	// (0x00093497) cell_vitu2_itu_pane_t1_ParamLimits

0x6c00,	// (0x00093497) cell_vitu2_itu_pane_t1

0x0bea,	// (0x0008d481) cell_vitu2_itu_pane_t2_ParamLimits

0x0bea,	// (0x0008d481) cell_vitu2_itu_pane_t2

0x0002,

0xf8ea,	// (0x0009c181) cell_vitu2_itu_pane_t_ParamLimits

0xf8ea,	// (0x0009c181) cell_vitu2_itu_pane_t

0x9f2b,	// (0x000967c2) bg_button_pane_cp011

0x6c5e,	// (0x000934f5) cell_vitu2_function_pane_g1

0x9f39,	// (0x000967d0) main_myfav_hc_pane

0x66d0,	// (0x00092f67) popup_image3_note_pane_ParamLimits

0x66d0,	// (0x00092f67) popup_image3_note_pane

0x66ea,	// (0x00092f81) popup_image3_tool_bar_pane_ParamLimits

0x66ea,	// (0x00092f81) popup_image3_tool_bar_pane

0x0c78,	// (0x0008d50f) cell_vitu2_itu_pane_t3_ParamLimits

0x0c78,	// (0x0008d50f) cell_vitu2_itu_pane_t3

0xd45f,	// (0x00099cf6) bg_popup_trans_pane

0xb604,	// (0x00097e9b) grid_image3_tool_bar_pane

0xb60e,	// (0x00097ea5) bg_popup_trans_pane_g1

0xe280,	// (0x0009ab17) bg_popup_trans_pane_g2

0xb616,	// (0x00097ead) bg_popup_trans_pane_g3

0xb61e,	// (0x00097eb5) bg_popup_trans_pane_g4

0xb626,	// (0x00097ebd) bg_popup_trans_pane_g5

0xb62e,	// (0x00097ec5) bg_popup_trans_pane_g6

0xb636,	// (0x00097ecd) bg_popup_trans_pane_g7

0xb63e,	// (0x00097ed5) bg_popup_trans_pane_g8

0xe260,	// (0x0009aaf7) bg_popup_trans_pane_g9

0x0008,

0xf8f1,	// (0x0009c188) bg_popup_trans_pane_g

0xb646,	// (0x00097edd) cell_image3_tool_bar_pane_ParamLimits

0xb646,	// (0x00097edd) cell_image3_tool_bar_pane

0xa929,	// (0x000971c0) cell_image3_tool_bar_pane_g1

0xd45f,	// (0x00099cf6) bg_popup_trans_pane_cp1

0xb65a,	// (0x00097ef1) popup_image3_note_pane_t1

0xb668,	// (0x00097eff) popup_image3_note_pane_t2

0xb676,	// (0x00097f0d) popup_image3_note_pane_t3

0x0002,

0xf904,	// (0x0009c19b) popup_image3_note_pane_t

0xb684,	// (0x00097f1b) popup_image3_note_pane_t3_copy1

0x6c71,	// (0x00093508) bg_myfav_hc_instruction_pane_ParamLimits

0x6c71,	// (0x00093508) bg_myfav_hc_instruction_pane

0x6c83,	// (0x0009351a) cell_myfav_contact_pane_ParamLimits

0x6c83,	// (0x0009351a) cell_myfav_contact_pane

0x6c9d,	// (0x00093534) cell_myfav_contact_pane_cp1_ParamLimits

0x6c9d,	// (0x00093534) cell_myfav_contact_pane_cp1

0x6cb3,	// (0x0009354a) cell_myfav_contact_pane_cp2_ParamLimits

0x6cb3,	// (0x0009354a) cell_myfav_contact_pane_cp2

0x6cc9,	// (0x00093560) cell_myfav_contact_pane_cp3_ParamLimits

0x6cc9,	// (0x00093560) cell_myfav_contact_pane_cp3

0x6cde,	// (0x00093575) cell_myfav_contact_pane_cp4_ParamLimits

0x6cde,	// (0x00093575) cell_myfav_contact_pane_cp4

0x6cf2,	// (0x00093589) cell_myfav_contact_pane_cp5_ParamLimits

0x6cf2,	// (0x00093589) cell_myfav_contact_pane_cp5

0x6d06,	// (0x0009359d) cell_myfav_contact_pane_cp6_ParamLimits

0x6d06,	// (0x0009359d) cell_myfav_contact_pane_cp6

0x6d1a,	// (0x000935b1) cell_myfav_contact_pane_cp7_ParamLimits

0x6d1a,	// (0x000935b1) cell_myfav_contact_pane_cp7

0xb692,	// (0x00097f29) listscroll_gen_pane_cp05

0x6d32,	// (0x000935c9) main_myfav_hc_pane_g1_ParamLimits

0x6d32,	// (0x000935c9) main_myfav_hc_pane_g1

0x6d48,	// (0x000935df) main_myfav_hc_pane_g2_ParamLimits

0x6d48,	// (0x000935df) main_myfav_hc_pane_g2

0x0002,

0xf90b,	// (0x0009c1a2) main_myfav_hc_pane_g_ParamLimits

0xf90b,	// (0x0009c1a2) main_myfav_hc_pane_g

0x6d72,	// (0x00093609) main_myfav_hc_pane_t1_ParamLimits

0x6d72,	// (0x00093609) main_myfav_hc_pane_t1

0xb69b,	// (0x00097f32) main_myfav_hc_pane_t2_ParamLimits

0xb69b,	// (0x00097f32) main_myfav_hc_pane_t2

0xb6ad,	// (0x00097f44) main_myfav_hc_pane_t3_ParamLimits

0xb6ad,	// (0x00097f44) main_myfav_hc_pane_t3

0x6d87,	// (0x0009361e) main_myfav_hc_pane_t4_ParamLimits

0x6d87,	// (0x0009361e) main_myfav_hc_pane_t4

0x0004,

0xf912,	// (0x0009c1a9) main_myfav_hc_pane_t_ParamLimits

0xf912,	// (0x0009c1a9) main_myfav_hc_pane_t

0xa929,	// (0x000971c0) bg_myfav_hc_instruction_pane_g1

0xb6bf,	// (0x00097f56) cell_myfav_contact_pane_g1_ParamLimits

0xb6bf,	// (0x00097f56) cell_myfav_contact_pane_g1

0xb6bf,	// (0x00097f56) cell_myfav_contact_pane_g2_ParamLimits

0xb6bf,	// (0x00097f56) cell_myfav_contact_pane_g2

0xb6cb,	// (0x00097f62) cell_myfav_contact_pane_g3_ParamLimits

0xb6cb,	// (0x00097f62) cell_myfav_contact_pane_g3

0xac31,	// (0x000974c8) cell_myfav_contact_pane_g4_ParamLimits

0xac31,	// (0x000974c8) cell_myfav_contact_pane_g4

0xb6d8,	// (0x00097f6f) cell_myfav_contact_pane_g5_ParamLimits

0xb6d8,	// (0x00097f6f) cell_myfav_contact_pane_g5

0x0004,

0xf91d,	// (0x0009c1b4) cell_myfav_contact_pane_g_ParamLimits

0xf91d,	// (0x0009c1b4) cell_myfav_contact_pane_g

0x6d5e,	// (0x000935f5) main_myfav_hc_pane_g3_ParamLimits

0x6d5e,	// (0x000935f5) main_myfav_hc_pane_g3

0x0e30,	// (0x0008d6c7) popup_adpt_find_window

0x6dab,	// (0x00093642) afind_page_pane_ParamLimits

0x6dab,	// (0x00093642) afind_page_pane

0x6dc0,	// (0x00093657) aid_size_cell_afind_ParamLimits

0x6dc0,	// (0x00093657) aid_size_cell_afind

0x6dde,	// (0x00093675) bg_popup_sub_pane_cp09_ParamLimits

0x6dde,	// (0x00093675) bg_popup_sub_pane_cp09

0x6deb,	// (0x00093682) find_pane_cp01_ParamLimits

0x6deb,	// (0x00093682) find_pane_cp01

0xb6e4,	// (0x00097f7b) grid_afind_control_pane_ParamLimits

0xb6e4,	// (0x00097f7b) grid_afind_control_pane

0x6df8,	// (0x0009368f) grid_afind_pane_ParamLimits

0x6df8,	// (0x0009368f) grid_afind_pane

0x6e16,	// (0x000936ad) cell_afind_pane_ParamLimits

0x6e16,	// (0x000936ad) cell_afind_pane

0xa929,	// (0x000971c0) afind_page_pane_g1

0x6e65,	// (0x000936fc) afind_page_pane_g2

0x6e6e,	// (0x00093705) afind_page_pane_g3

0x0002,

0xf928,	// (0x0009c1bf) afind_page_pane_g

0x6e77,	// (0x0009370e) afind_page_pane_t1

0xb6f8,	// (0x00097f8f) cell_afind_grid_control_pane_ParamLimits

0xb6f8,	// (0x00097f8f) cell_afind_grid_control_pane

0xb4cf,	// (0x00097d66) bg_button_pane_cp69_ParamLimits

0xb4cf,	// (0x00097d66) bg_button_pane_cp69

0x6e97,	// (0x0009372e) cell_afind_pane_g1_ParamLimits

0x6e97,	// (0x0009372e) cell_afind_pane_g1

0x6ea4,	// (0x0009373b) cell_afind_pane_t1_ParamLimits

0x6ea4,	// (0x0009373b) cell_afind_pane_t1

0xe06c,	// (0x0009a903) bg_button_pane_cp72

0xb707,	// (0x00097f9e) cell_afind_grid_control_pane_g1

0x38f5,	// (0x0009018c) aid_image_placing_area_ParamLimits

0x38f5,	// (0x0009018c) aid_image_placing_area

0xaf44,	// (0x000977db) field_vitu_entry_pane_g1_ParamLimits

0xaf44,	// (0x000977db) field_vitu_entry_pane_g1

0xaf50,	// (0x000977e7) field_vitu_entry_pane_g2_ParamLimits

0xaf50,	// (0x000977e7) field_vitu_entry_pane_g2

0x0001,

0xf7d5,	// (0x0009c06c) field_vitu_entry_pane_g_ParamLimits

0xf7d5,	// (0x0009c06c) field_vitu_entry_pane_g

0x61aa,	// (0x00092a41) cell_vitu_itu_pane_g1_ParamLimits

0x61ec,	// (0x00092a83) cell_vitu_itu_pane_t3_ParamLimits

0x61ec,	// (0x00092a83) cell_vitu_itu_pane_t3

0xb479,	// (0x00097d10) mp4_progress_pane_t1_ParamLimits

0xb490,	// (0x00097d27) mp4_progress_pane_t2_ParamLimits

0xf86e,	// (0x0009c105) mp4_progress_pane_t_ParamLimits

0xb4a7,	// (0x00097d3e) mup_progress_pane_cp04_ParamLimits

0x6d99,	// (0x00093630) main_myfav_hc_pane_t5_ParamLimits

0x6d99,	// (0x00093630) main_myfav_hc_pane_t5

0x9ef2,	// (0x00096789) aid_zoom_text_primary

0x0e30,	// (0x0008d6c7) popup_adpt_find_window_ParamLimits

0x9f2b,	// (0x000967c2) main_cam_set_pane

0x68a5,	// (0x0009313c) cam4_zoom_pane_ParamLimits

0x68a5,	// (0x0009313c) cam4_zoom_pane

0x6eb6,	// (0x0009374d) main_cam_set_pane_g1_ParamLimits

0x6eb6,	// (0x0009374d) main_cam_set_pane_g1

0x6ec4,	// (0x0009375b) main_cam_set_pane_g2_ParamLimits

0x6ec4,	// (0x0009375b) main_cam_set_pane_g2

0x0001,

0xf92f,	// (0x0009c1c6) main_cam_set_pane_g_ParamLimits

0xf92f,	// (0x0009c1c6) main_cam_set_pane_g

0x6ee3,	// (0x0009377a) main_cam_set_pane_t1_ParamLimits

0x6ee3,	// (0x0009377a) main_cam_set_pane_t1

0x6ef5,	// (0x0009378c) main_cset_listscroll_pane_ParamLimits

0x6ef5,	// (0x0009378c) main_cset_listscroll_pane

0x6f13,	// (0x000937aa) main_cset_slider_pane_ParamLimits

0x6f13,	// (0x000937aa) main_cset_slider_pane

0xb718,	// (0x00097faf) main_cset_list_pane_ParamLimits

0xb718,	// (0x00097faf) main_cset_list_pane

0xb728,	// (0x00097fbf) scroll_pane_cp028

0x6f37,	// (0x000937ce) aid_area_touch_slider

0x6f53,	// (0x000937ea) cset_slider_pane

0x6f7d,	// (0x00093814) main_cset_slider_pane_g1

0x6f92,	// (0x00093829) main_cset_slider_pane_g2

0x0011,

0xf934,	// (0x0009c1cb) main_cset_slider_pane_g

0xb761,	// (0x00097ff8) main_cset_slider_pane_t1

0x704e,	// (0x000938e5) main_cset_slider_pane_t2

0x7068,	// (0x000938ff) main_cset_slider_pane_t3

0x7082,	// (0x00093919) main_cset_slider_pane_t4

0x709c,	// (0x00093933) main_cset_slider_pane_t5

0x70b6,	// (0x0009394d) main_cset_slider_pane_t6

0x70cb,	// (0x00093962) main_cset_slider_pane_t7

0x000e,

0xf959,	// (0x0009c1f0) main_cset_slider_pane_t

0x71cf,	// (0x00093a66) cset_list_set_pane_ParamLimits

0x71cf,	// (0x00093a66) cset_list_set_pane

0x71e0,	// (0x00093a77) aid_position_infowindow_above

0x71e8,	// (0x00093a7f) aid_position_infowindow_below

0x71f0,	// (0x00093a87) cset_list_set_pane_g1_ParamLimits

0x71f0,	// (0x00093a87) cset_list_set_pane_g1

0x71fc,	// (0x00093a93) cset_list_set_pane_g3_ParamLimits

0x71fc,	// (0x00093a93) cset_list_set_pane_g3

0x0001,

0xf978,	// (0x0009c20f) cset_list_set_pane_g_ParamLimits

0xf978,	// (0x0009c20f) cset_list_set_pane_g

0x720b,	// (0x00093aa2) cset_list_set_pane_t1_ParamLimits

0x720b,	// (0x00093aa2) cset_list_set_pane_t1

0x47c0,	// (0x00091057) list_highlight_pane_cp021_ParamLimits

0x47c0,	// (0x00091057) list_highlight_pane_cp021

0xeb3e,	// (0x0009b3d5) cset_slider_pane_g1

0xeb50,	// (0x0009b3e7) cset_slider_pane_g2

0xeb47,	// (0x0009b3de) cset_slider_pane_g3

0x0002,

0x0642,	// (0x0008ced9) cset_slider_pane_g

0xd5f5,	// (0x00099e8c) aid_area_touch_cam4_zoom

0xd5fd,	// (0x00099e94) cam4_zoom_cont_pane

0xd605,	// (0x00099e9c) cam4_zoom_pane_g1

0xd60d,	// (0x00099ea4) cam4_zoom_pane_g2

0x7220,	// (0x00093ab7) cam4_zoom_pane_g3

0x0002,

0xf97d,	// (0x0009c214) cam4_zoom_pane_g

0xd615,	// (0x00099eac) cam4_zoom_cont_pane_g1

0xd61e,	// (0x00099eb5) cam4_zoom_cont_pane_g2

0xd627,	// (0x00099ebe) cam4_zoom_cont_pane_g3

0x0002,

0xf984,	// (0x0009c21b) cam4_zoom_cont_pane_g

0x6755,	// (0x00092fec) call4_image_pane_ParamLimits

0x6755,	// (0x00092fec) call4_image_pane

0xb525,	// (0x00097dbc) call4_windows_conf_pane_ParamLimits

0xb538,	// (0x00097dcf) popup_call4_audio_in_window_ParamLimits

0xb538,	// (0x00097dcf) popup_call4_audio_in_window

0xd45f,	// (0x00099cf6) bg_popup_call2_act_pane_cp02

0xb564,	// (0x00097dfb) call4_list_conf_pane

0xa929,	// (0x000971c0) call4_image_pane_g1

0xa929,	// (0x000971c0) call4_image_pane_g2

0x0001,

0xf69b,	// (0x0009bf32) call4_image_pane_g

0xb801,	// (0x00098098) list_single_graphic_popup_conf4_pane_ParamLimits

0xb801,	// (0x00098098) list_single_graphic_popup_conf4_pane

0xd45f,	// (0x00099cf6) list_highlight_pane_cp022

0xb814,	// (0x000980ab) list_single_graphic_popup_conf4_pane_g1

0xe773,	// (0x0009b00a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf98b,	// (0x0009c222) list_single_graphic_popup_conf4_pane_g

0xb81c,	// (0x000980b3) list_single_graphic_popup_conf4_pane_t1

0x1eb5,	// (0x0008e74c) popup_vtel_slider_window_ParamLimits

0x1eb5,	// (0x0008e74c) popup_vtel_slider_window

0xb4bd,	// (0x00097d54) dialer2_ne_pane_t2_ParamLimits

0xb4bd,	// (0x00097d54) dialer2_ne_pane_t2

0x0001,

0xf873,	// (0x0009c10a) dialer2_ne_pane_t_ParamLimits

0xf873,	// (0x0009c10a) dialer2_ne_pane_t

0xa716,	// (0x00096fad) bg_popup_sub_pane_cp010_ParamLimits

0xa716,	// (0x00096fad) bg_popup_sub_pane_cp010

0x7228,	// (0x00093abf) popup_vtel_slider_window_g1_ParamLimits

0x7228,	// (0x00093abf) popup_vtel_slider_window_g1

0x723b,	// (0x00093ad2) popup_vtel_slider_window_g2_ParamLimits

0x723b,	// (0x00093ad2) popup_vtel_slider_window_g2

0x0003,

0xf990,	// (0x0009c227) popup_vtel_slider_window_g_ParamLimits

0xf990,	// (0x0009c227) popup_vtel_slider_window_g

0x728f,	// (0x00093b26) vtel_slider_pane_ParamLimits

0x728f,	// (0x00093b26) vtel_slider_pane

0x72b1,	// (0x00093b48) vtel_slider_pane_g1_ParamLimits

0x72b1,	// (0x00093b48) vtel_slider_pane_g1

0x72c5,	// (0x00093b5c) vtel_slider_pane_g2_ParamLimits

0x72c5,	// (0x00093b5c) vtel_slider_pane_g2

0x72dd,	// (0x00093b74) vtel_slider_pane_g3_ParamLimits

0x72dd,	// (0x00093b74) vtel_slider_pane_g3

0x72b1,	// (0x00093b48) vtel_slider_pane_g4_ParamLimits

0x72b1,	// (0x00093b48) vtel_slider_pane_g4

0x72f3,	// (0x00093b8a) vtel_slider_pane_g5_ParamLimits

0x72f3,	// (0x00093b8a) vtel_slider_pane_g5

0x0004,

0xf999,	// (0x0009c230) vtel_slider_pane_g_ParamLimits

0xf999,	// (0x0009c230) vtel_slider_pane_g

0x9f2b,	// (0x000967c2) main_gallery2_pane

0x6a6a,	// (0x00093301) aid_size_row_itut2_dropdow_list_ParamLimits

0x6a6a,	// (0x00093301) aid_size_row_itut2_dropdow_list

0x6acd,	// (0x00093364) grid_vitu2_function_top_pane_ParamLimits

0x6acd,	// (0x00093364) grid_vitu2_function_top_pane

0x6b12,	// (0x000933a9) popup_vitu2_dropdown_list_window_ParamLimits

0x6b12,	// (0x000933a9) popup_vitu2_dropdown_list_window

0x6b2e,	// (0x000933c5) popup_vitu2_match_list_window

0x7309,	// (0x00093ba0) cell_vitu2_function_top_pane_ParamLimits

0x7309,	// (0x00093ba0) cell_vitu2_function_top_pane

0x7321,	// (0x00093bb8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7321,	// (0x00093bb8) cell_vitu2_function_top_pane_cp01

0x733d,	// (0x00093bd4) cell_vitu2_function_top_wide_pane_ParamLimits

0x733d,	// (0x00093bd4) cell_vitu2_function_top_wide_pane

0x9f2b,	// (0x000967c2) bg_button_pane_cp012

0x7359,	// (0x00093bf0) cell_vitu2_function_top_pane_g1

0xd630,	// (0x00099ec7) bg_button_pane_cp013_ParamLimits

0xd630,	// (0x00099ec7) bg_button_pane_cp013

0x736d,	// (0x00093c04) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x736d,	// (0x00093c04) cell_vitu2_function_top_wide_pane_g1

0x9f2b,	// (0x000967c2) bg_popup_sub_pane_cp20

0x7385,	// (0x00093c1c) list_vitu2_match_list_pane

0xb60e,	// (0x00097ea5) bg_popup_sub_pane_cp20_g1

0xb616,	// (0x00097ead) bg_popup_sub_pane_cp20_g2

0xe280,	// (0x0009ab17) bg_popup_sub_pane_cp20_g3

0xb61e,	// (0x00097eb5) bg_popup_sub_pane_cp20_g4

0xe260,	// (0x0009aaf7) bg_popup_sub_pane_cp20_g5

0xb840,	// (0x000980d7) bg_popup_sub_pane_cp20_g6

0xb62e,	// (0x00097ec5) bg_popup_sub_pane_cp20_g7

0xb636,	// (0x00097ecd) bg_popup_sub_pane_cp20_g8

0xb63e,	// (0x00097ed5) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9a4,	// (0x0009c23b) bg_popup_sub_pane_cp20_g

0xd64c,	// (0x00099ee3) list_vitu2_match_list_item_pane_ParamLimits

0xd64c,	// (0x00099ee3) list_vitu2_match_list_item_pane

0xd65e,	// (0x00099ef5) list_vitu2_match_list_item_pane_t1

0x9f39,	// (0x000967d0) bg_popup_sub_pane_cp21

0xd66c,	// (0x00099f03) grid_vitu2_dropdown_list_pane

0x73d2,	// (0x00093c69) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x73d2,	// (0x00093c69) cell_vitu2_dropdown_list_char_pane

0x73f3,	// (0x00093c8a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x73f3,	// (0x00093c8a) cell_vitu2_dropdown_list_ctrl_pane

0xb860,	// (0x000980f7) cell_vitu2_dropdown_list_char_pane_g1

0xb869,	// (0x00098100) cell_vitu2_dropdown_list_char_pane_g2

0xb872,	// (0x00098109) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9c1,	// (0x0009c258) cell_vitu2_dropdown_list_char_pane_g

0x741f,	// (0x00093cb6) cell_vitu2_dropdown_list_char_pane_t1

0x742d,	// (0x00093cc4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x742d,	// (0x00093cc4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x743a,	// (0x00093cd1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x743a,	// (0x00093cd1) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7447,	// (0x00093cde) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7447,	// (0x00093cde) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7454,	// (0x00093ceb) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7454,	// (0x00093ceb) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd524,	// (0x00099dbb) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd524,	// (0x00099dbb) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9c8,	// (0x0009c25f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9c8,	// (0x0009c25f) cell_vitu2_dropdown_list_ctrl_pane_g

0x7470,	// (0x00093d07) aid_size_cell_gallery2_ParamLimits

0x7470,	// (0x00093d07) aid_size_cell_gallery2

0x748e,	// (0x00093d25) grid_gallery2_pane_ParamLimits

0x748e,	// (0x00093d25) grid_gallery2_pane

0x600f,	// (0x000928a6) scroll_pane_cp029_ParamLimits

0x600f,	// (0x000928a6) scroll_pane_cp029

0x74a2,	// (0x00093d39) cell_gallery2_pane_ParamLimits

0x74a2,	// (0x00093d39) cell_gallery2_pane

0xb87b,	// (0x00098112) cell_gallery2_pane_g2

0x74fb,	// (0x00093d92) cell_gallery2_pane_g3

0xb883,	// (0x0009811a) cell_gallery2_pane_g4

0xb88b,	// (0x00098122) cell_gallery2_pane_g5

0xdfda,	// (0x0009a871) grid_highlight_pane_cp10

0x6b2e,	// (0x000933c5) popup_vitu2_match_list_window_ParamLimits

0x6b3f,	// (0x000933d6) popup_vitu2_query_window_ParamLimits

0x6b3f,	// (0x000933d6) popup_vitu2_query_window

0x9f39,	// (0x000967d0) bg_vitu2_candi_button_pane

0xb860,	// (0x000980f7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb869,	// (0x00098100) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb872,	// (0x00098109) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7503,	// (0x00093d9a) bg_button_pane_cp015

0x7513,	// (0x00093daa) bg_button_pane_cp016

0x7525,	// (0x00093dbc) bg_button_pane_cp017

0xa415,	// (0x00096cac) bg_popup_sub_pane_cp22

0xb893,	// (0x0009812a) popup_vitu2_query_window_g1

0x7566,	// (0x00093dfd) popup_vitu2_query_window_g2

0x0002,

0xf9d3,	// (0x0009c26a) popup_vitu2_query_window_g

0x7581,	// (0x00093e18) popup_vitu2_query_window_t1_ParamLimits

0x7581,	// (0x00093e18) popup_vitu2_query_window_t1

0x75b4,	// (0x00093e4b) popup_vitu2_query_window_t2_ParamLimits

0x75b4,	// (0x00093e4b) popup_vitu2_query_window_t2

0x75c6,	// (0x00093e5d) popup_vitu2_query_window_t3_ParamLimits

0x75c6,	// (0x00093e5d) popup_vitu2_query_window_t3

0x75ee,	// (0x00093e85) popup_vitu2_query_window_t4_ParamLimits

0x75ee,	// (0x00093e85) popup_vitu2_query_window_t4

0x760b,	// (0x00093ea2) popup_vitu2_query_window_t5_ParamLimits

0x760b,	// (0x00093ea2) popup_vitu2_query_window_t5

0x0006,

0xf9da,	// (0x0009c271) popup_vitu2_query_window_t_ParamLimits

0xf9da,	// (0x0009c271) popup_vitu2_query_window_t

0xb710,	// (0x00097fa7) main_cset_text_pane

0x6f37,	// (0x000937ce) aid_area_touch_slider_ParamLimits

0x6f53,	// (0x000937ea) cset_slider_pane_ParamLimits

0x6f7d,	// (0x00093814) main_cset_slider_pane_g1_ParamLimits

0x6f92,	// (0x00093829) main_cset_slider_pane_g2_ParamLimits

0xb731,	// (0x00097fc8) main_cset_slider_pane_g3_ParamLimits

0xb731,	// (0x00097fc8) main_cset_slider_pane_g3

0x6fa7,	// (0x0009383e) main_cset_slider_pane_g4_ParamLimits

0x6fa7,	// (0x0009383e) main_cset_slider_pane_g4

0x6fb6,	// (0x0009384d) main_cset_slider_pane_g5_ParamLimits

0x6fb6,	// (0x0009384d) main_cset_slider_pane_g5

0x6fc2,	// (0x00093859) main_cset_slider_pane_g6_ParamLimits

0x6fc2,	// (0x00093859) main_cset_slider_pane_g6

0xf934,	// (0x0009c1cb) main_cset_slider_pane_g_ParamLimits

0xb761,	// (0x00097ff8) main_cset_slider_pane_t1_ParamLimits

0x704e,	// (0x000938e5) main_cset_slider_pane_t2_ParamLimits

0x7068,	// (0x000938ff) main_cset_slider_pane_t3_ParamLimits

0x7082,	// (0x00093919) main_cset_slider_pane_t4_ParamLimits

0x709c,	// (0x00093933) main_cset_slider_pane_t5_ParamLimits

0x70b6,	// (0x0009394d) main_cset_slider_pane_t6_ParamLimits

0x70cb,	// (0x00093962) main_cset_slider_pane_t7_ParamLimits

0x70f5,	// (0x0009398c) main_cset_slider_pane_t8_ParamLimits

0x70f5,	// (0x0009398c) main_cset_slider_pane_t8

0x711d,	// (0x000939b4) main_cset_slider_pane_t9_ParamLimits

0x711d,	// (0x000939b4) main_cset_slider_pane_t9

0x7145,	// (0x000939dc) main_cset_slider_pane_t10_ParamLimits

0x7145,	// (0x000939dc) main_cset_slider_pane_t10

0x716d,	// (0x00093a04) main_cset_slider_pane_t11_ParamLimits

0x716d,	// (0x00093a04) main_cset_slider_pane_t11

0x7195,	// (0x00093a2c) main_cset_slider_pane_t12_ParamLimits

0x7195,	// (0x00093a2c) main_cset_slider_pane_t12

0x71b2,	// (0x00093a49) main_cset_slider_pane_t13_ParamLimits

0x71b2,	// (0x00093a49) main_cset_slider_pane_t13

0xf959,	// (0x0009c1f0) main_cset_slider_pane_t_ParamLimits

0xd45f,	// (0x00099cf6) bg_popup_sub_pane_cp011

0xb89f,	// (0x00098136) main_cset_text_pane_g1

0xb8a7,	// (0x0009813e) main_cset_text_pane_t1

0xb8b5,	// (0x0009814c) main_cset_text_pane_t2

0xb8c3,	// (0x0009815a) main_cset_text_pane_t3

0xb8d1,	// (0x00098168) main_cset_text_pane_t4

0xb8df,	// (0x00098176) main_cset_text_pane_t5

0xb8ed,	// (0x00098184) main_cset_text_pane_t6

0xb8fb,	// (0x00098192) main_cset_text_pane_t7

0x0006,

0xf9e9,	// (0x0009c280) main_cset_text_pane_t

0x9f39,	// (0x000967d0) main_cam4_burst_pane

0x9f39,	// (0x000967d0) main_cam5_pane

0x6e85,	// (0x0009371c) bg_button_pane_cp019

0x6e8e,	// (0x00093725) bg_button_pane_cp020

0xb73d,	// (0x00097fd4) main_cset_slider_pane_g7_ParamLimits

0xb73d,	// (0x00097fd4) main_cset_slider_pane_g7

0xb749,	// (0x00097fe0) main_cset_slider_pane_g8_ParamLimits

0xb749,	// (0x00097fe0) main_cset_slider_pane_g8

0x6fd6,	// (0x0009386d) main_cset_slider_pane_g9_ParamLimits

0x6fd6,	// (0x0009386d) main_cset_slider_pane_g9

0x6fe2,	// (0x00093879) main_cset_slider_pane_g10_ParamLimits

0x6fe2,	// (0x00093879) main_cset_slider_pane_g10

0x6fee,	// (0x00093885) main_cset_slider_pane_g11_ParamLimits

0x6fee,	// (0x00093885) main_cset_slider_pane_g11

0x6ffa,	// (0x00093891) main_cset_slider_pane_g12_ParamLimits

0x6ffa,	// (0x00093891) main_cset_slider_pane_g12

0x7006,	// (0x0009389d) main_cset_slider_pane_g13_ParamLimits

0x7006,	// (0x0009389d) main_cset_slider_pane_g13

0x7012,	// (0x000938a9) main_cset_slider_pane_g14_ParamLimits

0x7012,	// (0x000938a9) main_cset_slider_pane_g14

0x701e,	// (0x000938b5) main_cset_slider_pane_g15_ParamLimits

0x701e,	// (0x000938b5) main_cset_slider_pane_g15

0xb78f,	// (0x00098026) main_cset_slider_pane_t14_ParamLimits

0xb78f,	// (0x00098026) main_cset_slider_pane_t14

0xb7c8,	// (0x0009805f) main_cset_slider_pane_t15_ParamLimits

0xb7c8,	// (0x0009805f) main_cset_slider_pane_t15

0x767e,	// (0x00093f15) aid_cam4_burst_size_cell_ParamLimits

0x767e,	// (0x00093f15) aid_cam4_burst_size_cell

0x769e,	// (0x00093f35) grid_cam4_burst_pane_ParamLimits

0x769e,	// (0x00093f35) grid_cam4_burst_pane

0x76c4,	// (0x00093f5b) linegrid_cam4_burst_pane_ParamLimits

0x76c4,	// (0x00093f5b) linegrid_cam4_burst_pane

0x76e6,	// (0x00093f7d) scroll_pane_cp30_ParamLimits

0x76e6,	// (0x00093f7d) scroll_pane_cp30

0x76f2,	// (0x00093f89) cell_cam4_burst_pane_ParamLimits

0x76f2,	// (0x00093f89) cell_cam4_burst_pane

0xb909,	// (0x000981a0) linegrid_cam4_burst_pane_g1_ParamLimits

0xb909,	// (0x000981a0) linegrid_cam4_burst_pane_g1

0x7739,	// (0x00093fd0) linegrid_cam4_burst_pane_g2_ParamLimits

0x7739,	// (0x00093fd0) linegrid_cam4_burst_pane_g2

0xb916,	// (0x000981ad) linegrid_cam4_burst_pane_g3_ParamLimits

0xb916,	// (0x000981ad) linegrid_cam4_burst_pane_g3

0x0002,

0xf9f8,	// (0x0009c28f) linegrid_cam4_burst_pane_g_ParamLimits

0xf9f8,	// (0x0009c28f) linegrid_cam4_burst_pane_g

0x774a,	// (0x00093fe1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x774a,	// (0x00093fe1) linegrid_cam4_burst_pane_g3_copy1

0xb923,	// (0x000981ba) linegrid_cam4_burst_pane_g4_ParamLimits

0xb923,	// (0x000981ba) linegrid_cam4_burst_pane_g4

0x7764,	// (0x00093ffb) linegrid_cam4_burst_pane_g5_ParamLimits

0x7764,	// (0x00093ffb) linegrid_cam4_burst_pane_g5

0x7775,	// (0x0009400c) linegrid_cam4_burst_pane_g6_ParamLimits

0x7775,	// (0x0009400c) linegrid_cam4_burst_pane_g6

0xb930,	// (0x000981c7) linegrid_cam4_burst_pane_g7_ParamLimits

0xb930,	// (0x000981c7) linegrid_cam4_burst_pane_g7

0x7786,	// (0x0009401d) cell_cam4_burst_pane_g1

0xb949,	// (0x000981e0) main_cam5_pane_t1_ParamLimits

0xb949,	// (0x000981e0) main_cam5_pane_t1

0xb95b,	// (0x000981f2) main_cam5_pane_t2_ParamLimits

0xb95b,	// (0x000981f2) main_cam5_pane_t2

0xb96d,	// (0x00098204) main_cam5_pane_t3_ParamLimits

0xb96d,	// (0x00098204) main_cam5_pane_t3

0xb97f,	// (0x00098216) main_cam5_pane_t4_ParamLimits

0xb97f,	// (0x00098216) main_cam5_pane_t4

0xb995,	// (0x0009822c) main_cam5_pane_t5_ParamLimits

0xb995,	// (0x0009822c) main_cam5_pane_t5

0xb9a7,	// (0x0009823e) main_cam5_pane_t6_ParamLimits

0xb9a7,	// (0x0009823e) main_cam5_pane_t6

0xb9b9,	// (0x00098250) main_cam5_pane_t7_ParamLimits

0xb9b9,	// (0x00098250) main_cam5_pane_t7

0xb9cb,	// (0x00098262) main_cam5_pane_t8_ParamLimits

0xb9cb,	// (0x00098262) main_cam5_pane_t8

0xb9e7,	// (0x0009827e) main_cam5_pane_t9_ParamLimits

0xb9e7,	// (0x0009827e) main_cam5_pane_t9

0xb9f9,	// (0x00098290) main_cam5_pane_t10_ParamLimits

0xb9f9,	// (0x00098290) main_cam5_pane_t10

0xba0b,	// (0x000982a2) main_cam5_pane_t11_ParamLimits

0xba0b,	// (0x000982a2) main_cam5_pane_t11

0xba1d,	// (0x000982b4) main_cam5_pane_t12_ParamLimits

0xba1d,	// (0x000982b4) main_cam5_pane_t12

0xba32,	// (0x000982c9) main_cam5_pane_t13_ParamLimits

0xba32,	// (0x000982c9) main_cam5_pane_t13

0x000c,

0xfa04,	// (0x0009c29b) main_cam5_pane_t_ParamLimits

0xfa04,	// (0x0009c29b) main_cam5_pane_t

0x0e8e,	// (0x0008d725) popup_scut_keymap_window_ParamLimits

0x0e8e,	// (0x0008d725) popup_scut_keymap_window

0x779b,	// (0x00094032) aid_size_cell_brow_shortcut

0xdfda,	// (0x0009a871) bg_popup_window_pane_cp010

0x77a7,	// (0x0009403e) grid_scut_pane

0x77b1,	// (0x00094048) cell_scut_pane_ParamLimits

0x77b1,	// (0x00094048) cell_scut_pane

0x77c6,	// (0x0009405d) cell_scut_pane_g1

0xba4f,	// (0x000982e6) cell_scut_pane_t1

0xba5e,	// (0x000982f5) cell_scut_pane_t2

0x77cf,	// (0x00094066) cell_scut_pane_t3

0x0002,

0xfa1f,	// (0x0009c2b6) cell_scut_pane_t

0x5742,	// (0x00091fd9) main_mup3_pane_g8_ParamLimits

0x5742,	// (0x00091fd9) main_mup3_pane_g8

0x6a7d,	// (0x00093314) area_vitu2_query_pane_ParamLimits

0x6a7d,	// (0x00093314) area_vitu2_query_pane

0x7537,	// (0x00093dce) input_focus_pane_cp08

0xba6d,	// (0x00098304) area_vitu2_query_pane_g1

0x77dd,	// (0x00094074) area_vitu2_query_pane_g2

0x0001,

0xfa26,	// (0x0009c2bd) area_vitu2_query_pane_g

0x77ec,	// (0x00094083) area_vitu2_query_pane_t1_ParamLimits

0x77ec,	// (0x00094083) area_vitu2_query_pane_t1

0x77fe,	// (0x00094095) area_vitu2_query_pane_t2_ParamLimits

0x77fe,	// (0x00094095) area_vitu2_query_pane_t2

0x7810,	// (0x000940a7) area_vitu2_query_pane_t3_ParamLimits

0x7810,	// (0x000940a7) area_vitu2_query_pane_t3

0xba79,	// (0x00098310) area_vitu2_query_pane_t4_ParamLimits

0xba79,	// (0x00098310) area_vitu2_query_pane_t4

0xbaa1,	// (0x00098338) area_vitu2_query_pane_t5_ParamLimits

0xbaa1,	// (0x00098338) area_vitu2_query_pane_t5

0xbac9,	// (0x00098360) area_vitu2_query_pane_t6_ParamLimits

0xbac9,	// (0x00098360) area_vitu2_query_pane_t6

0x0006,

0xfa2b,	// (0x0009c2c2) area_vitu2_query_pane_t_ParamLimits

0xfa2b,	// (0x0009c2c2) area_vitu2_query_pane_t

0x7838,	// (0x000940cf) bg_button_pane_cp018

0x7845,	// (0x000940dc) bg_button_pane_cp021

0x7851,	// (0x000940e8) bg_button_pane_cp022

0x7860,	// (0x000940f7) input_focus_pane_cp09

0x301d,	// (0x0008f8b4) aid_size_touch_mv_arrow_left

0xe8bf,	// (0x0009b156) aid_size_touch_mv_arrow_right

0x7036,	// (0x000938cd) main_cset_slider_pane_g16_ParamLimits

0x7036,	// (0x000938cd) main_cset_slider_pane_g16

0x7042,	// (0x000938d9) main_cset_slider_pane_g17_ParamLimits

0x7042,	// (0x000938d9) main_cset_slider_pane_g17

0x7786,	// (0x0009401d) cell_cam4_burst_pane_g1_ParamLimits

0xd45f,	// (0x00099cf6) compa_mode_pane

0x724b,	// (0x00093ae2) popup_vtel_slider_window_g3_ParamLimits

0x724b,	// (0x00093ae2) popup_vtel_slider_window_g3

0x7262,	// (0x00093af9) popup_vtel_slider_window_g4_ParamLimits

0x7262,	// (0x00093af9) popup_vtel_slider_window_g4

0x7279,	// (0x00093b10) popup_vtel_slider_window_t1_ParamLimits

0x7279,	// (0x00093b10) popup_vtel_slider_window_t1

0x9f39,	// (0x000967d0) main_cl_pane

0xa445,	// (0x00096cdc) popup_imed_adjust2_window_ParamLimits

0xa415,	// (0x00096cac) bg_tb_trans_pane_cp05_ParamLimits

0xae79,	// (0x00097710) popup_imed_adjust2_window_g1_ParamLimits

0xae88,	// (0x0009771f) popup_imed_adjust2_window_g2_ParamLimits

0xae88,	// (0x0009771f) popup_imed_adjust2_window_g2

0xae94,	// (0x0009772b) popup_imed_adjust2_window_g3_ParamLimits

0xae94,	// (0x0009772b) popup_imed_adjust2_window_g3

0x0002,

0xf79e,	// (0x0009c035) popup_imed_adjust2_window_g_ParamLimits

0xf79e,	// (0x0009c035) popup_imed_adjust2_window_g

0xaea0,	// (0x00097737) popup_imed_adjust2_window_t1_ParamLimits

0xaeb8,	// (0x0009774f) slider_imed_adjust_pane_ParamLimits

0xaecc,	// (0x00097763) slider_imed_adjust_pane_g1_ParamLimits

0xaedc,	// (0x00097773) slider_imed_adjust_pane_g2_ParamLimits

0xaeec,	// (0x00097783) slider_imed_adjust_pane_g3_ParamLimits

0xaefd,	// (0x00097794) slider_imed_adjust_pane_g4_ParamLimits

0xf7a5,	// (0x0009c03c) slider_imed_adjust_pane_g_ParamLimits

0x6854,	// (0x000930eb) aid_touch_area_cam4_ParamLimits

0x6854,	// (0x000930eb) aid_touch_area_cam4

0xd50a,	// (0x00099da1) battery_pane_cp01

0x68ec,	// (0x00093183) main_camera4_pane_g6_ParamLimits

0x68ec,	// (0x00093183) main_camera4_pane_g6

0x690d,	// (0x000931a4) main_camera4_pane_t2_ParamLimits

0x690d,	// (0x000931a4) main_camera4_pane_t2

0x0001,

0xf8a7,	// (0x0009c13e) main_camera4_pane_t_ParamLimits

0xf8a7,	// (0x0009c13e) main_camera4_pane_t

0x693b,	// (0x000931d2) aid_touch_area_vid4_ParamLimits

0x693b,	// (0x000931d2) aid_touch_area_vid4

0x697d,	// (0x00093214) main_video4_pane_g5_ParamLimits

0x697d,	// (0x00093214) main_video4_pane_g5

0x699e,	// (0x00093235) vid4_progress_pane_ParamLimits

0x699e,	// (0x00093235) vid4_progress_pane

0xb755,	// (0x00097fec) main_cset_slider_pane_g18_ParamLimits

0xb755,	// (0x00097fec) main_cset_slider_pane_g18

0xb93d,	// (0x000981d4) cell_cam4_burst_pane_g2_ParamLimits

0xb93d,	// (0x000981d4) cell_cam4_burst_pane_g2

0x0001,

0xf9ff,	// (0x0009c296) cell_cam4_burst_pane_g_ParamLimits

0xf9ff,	// (0x0009c296) cell_cam4_burst_pane_g

0xde0b,	// (0x0009a6a2) bg_cl_pane_ParamLimits

0xde0b,	// (0x0009a6a2) bg_cl_pane

0x786f,	// (0x00094106) cl_header_pane_ParamLimits

0x786f,	// (0x00094106) cl_header_pane

0x7883,	// (0x0009411a) cl_listscroll_pane_ParamLimits

0x7883,	// (0x0009411a) cl_listscroll_pane

0xbb15,	// (0x000983ac) bg_cl_pane_g1

0xbb1d,	// (0x000983b4) bg_cl_pane_g2

0xbb25,	// (0x000983bc) bg_cl_pane_g3

0xbb2d,	// (0x000983c4) bg_cl_pane_g4

0xbb35,	// (0x000983cc) bg_cl_pane_g5

0xbb3d,	// (0x000983d4) bg_cl_pane_g6

0xbb45,	// (0x000983dc) bg_cl_pane_g7

0xbb4d,	// (0x000983e4) bg_cl_pane_g8

0xbb55,	// (0x000983ec) bg_cl_pane_g9

0x0008,

0xfa3a,	// (0x0009c2d1) bg_cl_pane_g

0x7893,	// (0x0009412a) aid_height_cl_leading_ParamLimits

0x7893,	// (0x0009412a) aid_height_cl_leading

0x789f,	// (0x00094136) aid_height_cl_text_ParamLimits

0x789f,	// (0x00094136) aid_height_cl_text

0x47c0,	// (0x00091057) bg_cl_header_pane_ParamLimits

0x47c0,	// (0x00091057) bg_cl_header_pane

0x78be,	// (0x00094155) cl_header_pane_g1_ParamLimits

0x78be,	// (0x00094155) cl_header_pane_g1

0x78d4,	// (0x0009416b) cl_header_pane_t1_ParamLimits

0x78d4,	// (0x0009416b) cl_header_pane_t1

0xbb5d,	// (0x000983f4) cl_list_pane

0xbb66,	// (0x000983fd) hc_scroll_pane_cp01

0xe260,	// (0x0009aaf7) bg_cl_header_pane_g1

0xb60e,	// (0x00097ea5) bg_cl_header_pane_g2

0xe280,	// (0x0009ab17) bg_cl_header_pane_g3

0xb61e,	// (0x00097eb5) bg_cl_header_pane_g4

0xb616,	// (0x00097ead) bg_cl_header_pane_g5

0xb840,	// (0x000980d7) bg_cl_header_pane_g6

0xb636,	// (0x00097ecd) bg_cl_header_pane_g7

0xb63e,	// (0x00097ed5) bg_cl_header_pane_g8

0xb62e,	// (0x00097ec5) bg_cl_header_pane_g9

0x0008,

0xfa4d,	// (0x0009c2e4) bg_cl_header_pane_g

0x78ed,	// (0x00094184) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x78ed,	// (0x00094184) hc_cl_list_double_graphic_heading_pane

0x78fd,	// (0x00094194) hc_cl_list_single_graphic_pane_ParamLimits

0x78fd,	// (0x00094194) hc_cl_list_single_graphic_pane

0x7910,	// (0x000941a7) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7910,	// (0x000941a7) hc_cl_list_single_graphic_pane_g1

0x791c,	// (0x000941b3) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x791c,	// (0x000941b3) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa60,	// (0x0009c2f7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa60,	// (0x0009c2f7) hc_cl_list_single_graphic_pane_g

0x7930,	// (0x000941c7) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7930,	// (0x000941c7) hc_cl_list_single_graphic_pane_t1

0x7910,	// (0x000941a7) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7910,	// (0x000941a7) hc_cl_list_double_graphic_heading_pane_g1

0x7945,	// (0x000941dc) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7945,	// (0x000941dc) hc_cl_list_double_graphic_heading_pane_g2

0x7959,	// (0x000941f0) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7959,	// (0x000941f0) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa65,	// (0x0009c2fc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa65,	// (0x0009c2fc) hc_cl_list_double_graphic_heading_pane_g

0x796d,	// (0x00094204) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x796d,	// (0x00094204) hc_cl_list_double_graphic_heading_pane_t1

0x7982,	// (0x00094219) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7982,	// (0x00094219) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa6c,	// (0x0009c303) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa6c,	// (0x0009c303) hc_cl_list_double_graphic_heading_pane_t

0xd674,	// (0x00099f0b) vid4_progress_pane_g1

0xd683,	// (0x00099f1a) vid4_progress_pane_g2

0xd692,	// (0x00099f29) vid4_progress_pane_g3

0xd6a1,	// (0x00099f38) vid4_progress_pane_g4

0x0004,

0xfa71,	// (0x0009c308) vid4_progress_pane_g

0xd6b9,	// (0x00099f50) vid4_progress_pane_t1

0xd6cf,	// (0x00099f66) vid4_progress_pane_t2

0x0002,

0xfa7c,	// (0x0009c313) vid4_progress_pane_t

0xd6f9,	// (0x00099f90) wait_bar_pane_cp07

0xa724,	// (0x00096fbb) blid_firmament_pane_ParamLimits

0xa765,	// (0x00096ffc) popup_blid_sat_info2_window_g1

0xa789,	// (0x00097020) popup_blid_sat_info2_window_t3

0xa797,	// (0x0009702e) popup_blid_sat_info2_window_t4

0xa7a5,	// (0x0009703c) popup_blid_sat_info2_window_t5

0xa7b3,	// (0x0009704a) popup_blid_sat_info2_window_t6

0xa7c3,	// (0x0009705a) popup_blid_sat_info2_window_t7

0xa7d1,	// (0x00097068) popup_blid_sat_info2_window_t8

0xa7df,	// (0x00097076) popup_blid_sat_info2_window_t9

0xa7ed,	// (0x00097084) popup_blid_sat_info2_window_t10

0xa8a9,	// (0x00097140) aid_firma_cardinal_ParamLimits

0xa8bd,	// (0x00097154) blid_firmament_pane_t1_ParamLimits

0xa8d4,	// (0x0009716b) blid_firmament_pane_t2_ParamLimits

0xa8eb,	// (0x00097182) blid_firmament_pane_t3_ParamLimits

0xa902,	// (0x00097199) blid_firmament_pane_t4_ParamLimits

0xf692,	// (0x0009bf29) blid_firmament_pane_t_ParamLimits

0xa919,	// (0x000971b0) blid_sat_info_pane_ParamLimits

0x9f2b,	// (0x000967c2) main_cam_set_pane_ParamLimits

0x5f90,	// (0x00092827) aid_size_cell_colour_35_ParamLimits

0x5fb0,	// (0x00092847) aid_size_cell_colour_112_ParamLimits

0x5fd0,	// (0x00092867) aid_size_cell_effect_ParamLimits

0xa415,	// (0x00096cac) bg_tb_trans_pane_cp02_ParamLimits

0xe4c5,	// (0x0009ad5c) heading_imed_pane_ParamLimits

0x5ff0,	// (0x00092887) listscroll_imed_pane_ParamLimits

0x3e00,	// (0x00090697) popup_call2_audio_first_window_g5_ParamLimits

0x3e00,	// (0x00090697) popup_call2_audio_first_window_g5

0x650d,	// (0x00092da4) aid_size_touch_image3_arrow_left_ParamLimits

0x650d,	// (0x00092da4) aid_size_touch_image3_arrow_left

0x652d,	// (0x00092dc4) aid_size_touch_image3_arrow_right_ParamLimits

0x652d,	// (0x00092dc4) aid_size_touch_image3_arrow_right

0xd6e4,	// (0x00099f7b) vid4_progress_pane_t3

0x62c4,	// (0x00092b5b) main_hwr_training_symbol_option_pane_ParamLimits

0x62c4,	// (0x00092b5b) main_hwr_training_symbol_option_pane

0xb158,	// (0x000979ef) popup_hwr_training_preview_window_ParamLimits

0xb158,	// (0x000979ef) popup_hwr_training_preview_window

0x62e0,	// (0x00092b77) hwr_training_navi_pane_g5_ParamLimits

0x62e0,	// (0x00092b77) hwr_training_navi_pane_g5

0xb5fc,	// (0x00097e93) popup_char_count_window

0x9f2b,	// (0x000967c2) bg_popup_sub_pane_cp20_ParamLimits

0x7385,	// (0x00093c1c) list_vitu2_match_list_pane_ParamLimits

0x7394,	// (0x00093c2b) vitu2_page_scroll_pane_ParamLimits

0x7394,	// (0x00093c2b) vitu2_page_scroll_pane

0xbbac,	// (0x00098443) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbbac,	// (0x00098443) list_single_hwr_training_symbol_option_pane

0xbbbf,	// (0x00098456) list_single_hwr_training_symbol_option_pane_g1

0xbbc7,	// (0x0009845e) list_single_hwr_training_symbol_option_pane_t1

0xbbd5,	// (0x0009846c) bg_button_pane_cp023

0xbbde,	// (0x00098475) bg_button_pane_cp024

0x79b4,	// (0x0009424b) vitu2_page_scroll_pane_g1

0x79bc,	// (0x00094253) vitu2_page_scroll_pane_g2

0x0001,

0xfa83,	// (0x0009c31a) vitu2_page_scroll_pane_g

0x79c4,	// (0x0009425b) vitu2_page_scroll_pane_t1

0xa952,	// (0x000971e9) popup_char_count_window_g1

0xbc11,	// (0x000984a8) popup_char_count_window_g2

0xbc1a,	// (0x000984b1) popup_char_count_window_g3

0x0002,

0xfa88,	// (0x0009c31f) popup_char_count_window_g

0xbc23,	// (0x000984ba) popup_char_count_window_t1

0x9f39,	// (0x000967d0) main_vded2_pane

0xae67,	// (0x000976fe) aid_size_cell_imed_line

0xae71,	// (0x00097708) grid_imed_line_width_pane

0xd5ad,	// (0x00099e44) vid4_indicators_pane_g4

0xbc31,	// (0x000984c8) cell_imed_line_width_pane_ParamLimits

0xbc31,	// (0x000984c8) cell_imed_line_width_pane

0xbc43,	// (0x000984da) cell_imed_line_width_pane_g1

0xa6d2,	// (0x00096f69) cell_imed_line_width_pane_g2

0x0001,

0xfa8f,	// (0x0009c326) cell_imed_line_width_pane_g

0x79d3,	// (0x0009426a) main_vded2_pane_g1_ParamLimits

0x79d3,	// (0x0009426a) main_vded2_pane_g1

0x79e9,	// (0x00094280) main_vded2_pane_g2_ParamLimits

0x79e9,	// (0x00094280) main_vded2_pane_g2

0x0001,

0xfa94,	// (0x0009c32b) main_vded2_pane_g_ParamLimits

0xfa94,	// (0x0009c32b) main_vded2_pane_g

0x79f9,	// (0x00094290) vded2_slider_pane_ParamLimits

0x79f9,	// (0x00094290) vded2_slider_pane

0x7a0c,	// (0x000942a3) aid_size_touch_vded2_end

0x7a14,	// (0x000942ab) aid_size_touch_vded2_playhead

0x7a1c,	// (0x000942b3) aid_size_touch_vded2_start

0x7a24,	// (0x000942bb) vded2_slider_bg_pane

0x7a2d,	// (0x000942c4) vded2_slider_pane_g1

0x7a36,	// (0x000942cd) vded2_slider_pane_g2

0x7a3e,	// (0x000942d5) vded2_slider_pane_g3

0x0002,

0xfa99,	// (0x0009c330) vded2_slider_pane_g

0x7a47,	// (0x000942de) vded2_slider_bg_pane_g1

0x7a50,	// (0x000942e7) vded2_slider_bg_pane_g2

0x7a59,	// (0x000942f0) vded2_slider_bg_pane_g3

0x0002,

0xfaa0,	// (0x0009c337) vded2_slider_bg_pane_g

0x35a4,	// (0x0008fe3b) aid_postcard_touch_down_pane_ParamLimits

0x35a4,	// (0x0008fe3b) aid_postcard_touch_down_pane

0x35b6,	// (0x0008fe4d) aid_postcard_touch_up_pane_ParamLimits

0x35b6,	// (0x0008fe4d) aid_postcard_touch_up_pane

0x9f39,	// (0x000967d0) main_blid2_pane

0xa42d,	// (0x00096cc4) popup_blid2_search_window

0xd45f,	// (0x00099cf6) blid2_gps_pane

0xd45f,	// (0x00099cf6) blid2_navig_pane

0xd45f,	// (0x00099cf6) blid2_search_pane

0xd45f,	// (0x00099cf6) blid2_tripm_pane

0x7a62,	// (0x000942f9) blid2_search_pane_g1_ParamLimits

0x7a62,	// (0x000942f9) blid2_search_pane_g1

0x7a76,	// (0x0009430d) blid2_search_pane_t1_ParamLimits

0x7a76,	// (0x0009430d) blid2_search_pane_t1

0x7a88,	// (0x0009431f) aid_size_cell_blid2_gps_ParamLimits

0x7a88,	// (0x0009431f) aid_size_cell_blid2_gps

0x7aa0,	// (0x00094337) blid2_gps_pane_g1_ParamLimits

0x7aa0,	// (0x00094337) blid2_gps_pane_g1

0x7ab4,	// (0x0009434b) grid_blid2_satellite_pane_ParamLimits

0x7ab4,	// (0x0009434b) grid_blid2_satellite_pane

0x7ac8,	// (0x0009435f) blid2_navig_pane_g1_ParamLimits

0x7ac8,	// (0x0009435f) blid2_navig_pane_g1

0x7ad4,	// (0x0009436b) blid2_navig_pane_t1_ParamLimits

0x7ad4,	// (0x0009436b) blid2_navig_pane_t1

0x7aed,	// (0x00094384) blid2_navig_pane_t2_ParamLimits

0x7aed,	// (0x00094384) blid2_navig_pane_t2

0x0001,

0xfaa7,	// (0x0009c33e) blid2_navig_pane_t_ParamLimits

0xfaa7,	// (0x0009c33e) blid2_navig_pane_t

0x7b06,	// (0x0009439d) blid2_navig_ring_pane_ParamLimits

0x7b06,	// (0x0009439d) blid2_navig_ring_pane

0x7b1b,	// (0x000943b2) blid2_speed_pane_ParamLimits

0x7b1b,	// (0x000943b2) blid2_speed_pane

0x7b27,	// (0x000943be) blid2_tripm_pane_g1_ParamLimits

0x7b27,	// (0x000943be) blid2_tripm_pane_g1

0x7b3c,	// (0x000943d3) blid2_tripm_pane_g2_ParamLimits

0x7b3c,	// (0x000943d3) blid2_tripm_pane_g2

0x7b50,	// (0x000943e7) blid2_tripm_pane_g3_ParamLimits

0x7b50,	// (0x000943e7) blid2_tripm_pane_g3

0x7b64,	// (0x000943fb) blid2_tripm_pane_g4_ParamLimits

0x7b64,	// (0x000943fb) blid2_tripm_pane_g4

0x7b78,	// (0x0009440f) blid2_tripm_pane_g5_ParamLimits

0x7b78,	// (0x0009440f) blid2_tripm_pane_g5

0x0005,

0xfaac,	// (0x0009c343) blid2_tripm_pane_g_ParamLimits

0xfaac,	// (0x0009c343) blid2_tripm_pane_g

0x7b9a,	// (0x00094431) blid2_tripm_pane_t1_ParamLimits

0x7b9a,	// (0x00094431) blid2_tripm_pane_t1

0x7bb1,	// (0x00094448) blid2_tripm_pane_t2_ParamLimits

0x7bb1,	// (0x00094448) blid2_tripm_pane_t2

0x7bc8,	// (0x0009445f) blid2_tripm_pane_t3_ParamLimits

0x7bc8,	// (0x0009445f) blid2_tripm_pane_t3

0x0003,

0xfab9,	// (0x0009c350) blid2_tripm_pane_t_ParamLimits

0xfab9,	// (0x0009c350) blid2_tripm_pane_t

0x7c0b,	// (0x000944a2) cell_blid2_satellite_pane_ParamLimits

0x7c0b,	// (0x000944a2) cell_blid2_satellite_pane

0x7c23,	// (0x000944ba) cell_blid2_satellite_pane_g1

0xbc4c,	// (0x000984e3) cell_blid2_satellite_pane_t1

0xa929,	// (0x000971c0) blid2_speed_pane_g1

0xbc5a,	// (0x000984f1) blid2_speed_pane_t1

0xbc68,	// (0x000984ff) blid2_speed_pane_t2

0x0001,

0xfac2,	// (0x0009c359) blid2_speed_pane_t

0xa929,	// (0x000971c0) blid2_navig_ring_pane_g1

0x7c2c,	// (0x000944c3) blid2_navig_ring_pane_g2

0x7c34,	// (0x000944cb) blid2_navig_ring_pane_g3

0x7c3c,	// (0x000944d3) blid2_navig_ring_pane_g4

0x7c44,	// (0x000944db) blid2_navig_ring_pane_g5

0x0004,

0xfac7,	// (0x0009c35e) blid2_navig_ring_pane_g

0xd45f,	// (0x00099cf6) bg_popup_window_pane_cp011

0xbc76,	// (0x0009850d) popup_blid2_search_window_g1

0xbc7e,	// (0x00098515) popup_blid2_search_window_t1

0xbc8c,	// (0x00098523) popup_blid2_search_window_t2

0x0001,

0xfad2,	// (0x0009c369) popup_blid2_search_window_t

0xe16f,	// (0x0009aa06) main_browser_pane_g1

0xde0b,	// (0x0009a6a2) main_browser_pane_ParamLimits

0x9f2b,	// (0x000967c2) bg_button_pane_cp011_ParamLimits

0x6c5e,	// (0x000934f5) cell_vitu2_function_pane_g1_ParamLimits

0xa415,	// (0x00096cac) bg_popup_sub_pane_cp22_ParamLimits

0x7537,	// (0x00093dce) input_focus_pane_cp08_ParamLimits

0x754e,	// (0x00093de5) popup_vitu2_query_button_pane_ParamLimits

0x754e,	// (0x00093de5) popup_vitu2_query_button_pane

0x755e,	// (0x00093df5) popup_vitu2_query_input_button_pane

0xb893,	// (0x0009812a) popup_vitu2_query_window_g1_ParamLimits

0x7566,	// (0x00093dfd) popup_vitu2_query_window_g2_ParamLimits

0xf9d3,	// (0x0009c26a) popup_vitu2_query_window_g_ParamLimits

0xd45f,	// (0x00099cf6) bg_button_pane_cp026

0x7c4c,	// (0x000944e3) popup_vitu2_query_input_button_pane_g1

0xd45f,	// (0x00099cf6) bg_button_pane_cp025

0xbc9a,	// (0x00098531) popup_vitu2_query_button_pane_t1

0x545e,	// (0x00091cf5) main_mp3_pane_t6

0x546c,	// (0x00091d03) popup_slider_window_cp01

0xd532,	// (0x00099dc9) cam4_battery_pane

0xd532,	// (0x00099dc9) cam4_battery_pane_cp02

0xd532,	// (0x00099dc9) cam4_battery_pane_cp01

0xd532,	// (0x00099dc9) cam4_battery_pane_cp03

0xb4b3,	// (0x00097d4a) cam4_battery_pane_g1

0xa929,	// (0x000971c0) cam4_battery_pane_g2

0x0001,

0xfad7,	// (0x0009c36e) cam4_battery_pane_g

0xa7fb,	// (0x00097092) popup_blid_sat_info2_window_t11

0x301d,	// (0x0008f8b4) aid_size_touch_mv_arrow_left_ParamLimits

0xe8bf,	// (0x0009b156) aid_size_touch_mv_arrow_right_ParamLimits

0xe918,	// (0x0009b1af) navi_pane_g1_ParamLimits

0xe924,	// (0x0009b1bb) navi_pane_g2_ParamLimits

0x3041,	// (0x0008f8d8) navi_pane_g3_ParamLimits

0xf3dc,	// (0x0009bc73) navi_pane_g_ParamLimits

0x305e,	// (0x0008f8f5) navi_pane_mv_t1_ParamLimits

0x5ffc,	// (0x00092893) grid_imed_effect_pane_ParamLimits

0x1dc8,	// (0x0008e65f) aid_placing_vt_slider_lsc

0xe0b1,	// (0x0009a948) aid_placing_vt_slider_prt

0x47c0,	// (0x00091057) bg_tb_trans_pane_cp01_ParamLimits

0xaa78,	// (0x0009730f) popup_image_details_window_g1_ParamLimits

0xaa8b,	// (0x00097322) popup_image_details_window_g2_ParamLimits

0xaaa0,	// (0x00097337) popup_image_details_window_g3_ParamLimits

0xaaa0,	// (0x00097337) popup_image_details_window_g3

0xf6d7,	// (0x0009bf6e) popup_image_details_window_g_ParamLimits

0xaab4,	// (0x0009734b) popup_image_details_window_t1_ParamLimits

0xaac6,	// (0x0009735d) popup_image_details_window_t2_ParamLimits

0xaadf,	// (0x00097376) popup_image_details_window_t3_ParamLimits

0xaaf3,	// (0x0009738a) popup_image_details_window_t4_ParamLimits

0xab0e,	// (0x000973a5) popup_image_details_window_t5_ParamLimits

0xf6de,	// (0x0009bf75) popup_image_details_window_t_ParamLimits

0x78ab,	// (0x00094142) cl_header_name_pane_ParamLimits

0x78ab,	// (0x00094142) cl_header_name_pane

0x7c54,	// (0x000944eb) cl_header_name_pane_t1_ParamLimits

0x7c54,	// (0x000944eb) cl_header_name_pane_t1

0x7c75,	// (0x0009450c) cl_header_name_pane_t2_ParamLimits

0x7c75,	// (0x0009450c) cl_header_name_pane_t2

0x7cb7,	// (0x0009454e) cl_header_name_pane_t3_ParamLimits

0x7cb7,	// (0x0009454e) cl_header_name_pane_t3

0x0002,

0xfadc,	// (0x0009c373) cl_header_name_pane_t_ParamLimits

0xfadc,	// (0x0009c373) cl_header_name_pane_t

0xe9b1,	// (0x0009b248) navi_pane_mv_g2_ParamLimits

0xb5b9,	// (0x00097e50) field_vitu2_entry_pane_g1_ParamLimits

0xb5c5,	// (0x00097e5c) field_vitu2_entry_pane_g2_ParamLimits

0xb5d1,	// (0x00097e68) field_vitu2_entry_pane_g3_ParamLimits

0xb5d1,	// (0x00097e68) field_vitu2_entry_pane_g3

0xf8d9,	// (0x0009c170) field_vitu2_entry_pane_g_ParamLimits

0xd5e3,	// (0x00099e7a) cell_vitu2_itu_pane_g1_ParamLimits

0x6bf2,	// (0x00093489) cell_vitu2_itu_pane_g2_ParamLimits

0x6bf2,	// (0x00093489) cell_vitu2_itu_pane_g2

0x0001,

0xf8e5,	// (0x0009c17c) cell_vitu2_itu_pane_g_ParamLimits

0xf8e5,	// (0x0009c17c) cell_vitu2_itu_pane_g

0x9f2b,	// (0x000967c2) bg_vkb2_func_pane_cp05_ParamLimits

0x9f2b,	// (0x000967c2) bg_vkb2_func_pane_cp05

0x9f2b,	// (0x000967c2) bg_vkb2_func_pane_cp03

0x9f2b,	// (0x000967c2) bg_vkb2_func_pane_cp04

0x9f2b,	// (0x000967c2) bg_vkb2_func_pane_cp10_ParamLimits

0x9f2b,	// (0x000967c2) bg_vkb2_func_pane_cp10

0x7851,	// (0x000940e8) bg_vkb2_func_pane_cp08

0x7838,	// (0x000940cf) bg_vkb2_func_pane_cp06

0x7845,	// (0x000940dc) bg_vkb2_func_pane_cp07

0xbbe7,	// (0x0009847e) bg_vkb2_func_pane_cp11_ParamLimits

0xbbe7,	// (0x0009847e) bg_vkb2_func_pane_cp11

0xbbfc,	// (0x00098493) bg_vkb2_func_pane_cp12_ParamLimits

0xbbfc,	// (0x00098493) bg_vkb2_func_pane_cp12

0xd45f,	// (0x00099cf6) bg_vkb2_func_pane_cp09

0xb60e,	// (0x00097ea5) bg_vkb2_func_pane_g1

0xe280,	// (0x0009ab17) bg_vkb2_func_pane_g2

0xb616,	// (0x00097ead) bg_vkb2_func_pane_g3

0xb61e,	// (0x00097eb5) bg_vkb2_func_pane_g4

0xb840,	// (0x000980d7) bg_vkb2_func_pane_g5

0xb636,	// (0x00097ecd) bg_vkb2_func_pane_g6

0xb63e,	// (0x00097ed5) bg_vkb2_func_pane_g7

0xb62e,	// (0x00097ec5) bg_vkb2_func_pane_g8

0xe260,	// (0x0009aaf7) bg_vkb2_func_pane_g9

0x0008,

0xfae3,	// (0x0009c37a) bg_vkb2_func_pane_g

0x7b8a,	// (0x00094421) blid2_tripm_pane_g6_ParamLimits

0x7b8a,	// (0x00094421) blid2_tripm_pane_g6

0xb471,	// (0x00097d08) mp4_progress_pane_g1

0x7bf9,	// (0x00094490) blid2_tripm_values_pane_ParamLimits

0x7bf9,	// (0x00094490) blid2_tripm_values_pane

0x7ce8,	// (0x0009457f) blid2_tripm_values_pane_t1

0x7cf6,	// (0x0009458d) blid2_tripm_values_pane_t2

0x7d04,	// (0x0009459b) blid2_tripm_values_pane_t3

0x7d12,	// (0x000945a9) blid2_tripm_values_pane_t4

0x7d20,	// (0x000945b7) blid2_tripm_values_pane_t5

0x7d2e,	// (0x000945c5) blid2_tripm_values_pane_t6

0x7d3c,	// (0x000945d3) blid2_tripm_values_pane_t7

0x7d4a,	// (0x000945e1) blid2_tripm_values_pane_t8

0x7d58,	// (0x000945ef) blid2_tripm_values_pane_t9

0x0008,

0xfaf6,	// (0x0009c38d) blid2_tripm_values_pane_t

0x1e02,	// (0x0008e699) call_video_pane_t1_ParamLimits

0x1e1c,	// (0x0008e6b3) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0009bb01) call_video_pane_t_ParamLimits

0x34b9,	// (0x0008fd50) msg_header_pane_g1_ParamLimits

0xeb83,	// (0x0009b41a) msg_header_pane_g2_ParamLimits

0xeb83,	// (0x0009b41a) msg_header_pane_g2

0x0001,

0xf459,	// (0x0009bcf0) msg_header_pane_g_ParamLimits

0xf459,	// (0x0009bcf0) msg_header_pane_g

0xde0b,	// (0x0009a6a2) main_clock2_pane_ParamLimits

0x5d13,	// (0x000925aa) grid_clock2_toolbar_pane_ParamLimits

0x5d13,	// (0x000925aa) grid_clock2_toolbar_pane

0x5d13,	// (0x000925aa) listscroll_clock2_pane_ParamLimits

0x5d13,	// (0x000925aa) listscroll_clock2_pane

0x5df6,	// (0x0009268d) main_clock2_pane_t3_ParamLimits

0x5df6,	// (0x0009268d) main_clock2_pane_t3

0x5e18,	// (0x000926af) main_clock2_pane_t4_ParamLimits

0x5e18,	// (0x000926af) main_clock2_pane_t4

0xbca8,	// (0x0009853f) cell_clock2_toolbar_pane

0xbcb0,	// (0x00098547) cell_clock2_toolbar_pane_cp01

0xbcb0,	// (0x00098547) cell_clock2_toolbar_pane_cp02

0xbcb8,	// (0x0009854f) cell_clock2_toolbar_pane_cp03

0xbcc0,	// (0x00098557) list_clock2_pane

0xbcc8,	// (0x0009855f) scroll_pane_cp10

0xbcd0,	// (0x00098567) list_single_clock2_pane_ParamLimits

0xbcd0,	// (0x00098567) list_single_clock2_pane

0xdfda,	// (0x0009a871) list_highlight_pane_cp08

0xbcdd,	// (0x00098574) list_single_clock2_pane_t1

0xbceb,	// (0x00098582) list_single_clock2_pane_t2

0x0001,

0xfb09,	// (0x0009c3a0) list_single_clock2_pane_t

0xd45f,	// (0x00099cf6) bg_button_pane_cp10

0xbcf9,	// (0x00098590) cell_clock2_toolbar_pane_g1

0x3538,	// (0x0008fdcf) aid_main_viewer_pane_g1_ParamLimits

0x3538,	// (0x0008fdcf) aid_main_viewer_pane_g1

0x3544,	// (0x0008fddb) aid_main_viewer_pane_g2_ParamLimits

0x3544,	// (0x0008fddb) aid_main_viewer_pane_g2

0x3550,	// (0x0008fde7) aid_main_viewer_pane_g3_ParamLimits

0x3550,	// (0x0008fde7) aid_main_viewer_pane_g3

0x355f,	// (0x0008fdf6) aid_main_viewer_pane_g4_ParamLimits

0x355f,	// (0x0008fdf6) aid_main_viewer_pane_g4

0x0003,

0xf46a,	// (0x0009bd01) aid_main_viewer_pane_g_ParamLimits

0xf46a,	// (0x0009bd01) aid_main_viewer_pane_g

0x9f2b,	// (0x000967c2) main_calc_pane_ParamLimits

0x47ce,	// (0x00091065) main_dialer2_pane_ParamLimits

0x9f39,	// (0x000967d0) main_cam6_pane

0x9f39,	// (0x000967d0) main_vid6_pane

0x5d1f,	// (0x000925b6) listscroll_gen_pane_cp06_ParamLimits

0x5d1f,	// (0x000925b6) listscroll_gen_pane_cp06

0x5e39,	// (0x000926d0) main_clock2_pane_t5_ParamLimits

0x5e39,	// (0x000926d0) main_clock2_pane_t5

0x5e91,	// (0x00092728) aid_call2_pane_cp10_ParamLimits

0x5ea3,	// (0x0009273a) aid_call_pane_cp10_ParamLimits

0xe8b3,	// (0x0009b14a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe8b3,	// (0x0009b14a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5eb5,	// (0x0009274c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5eb5,	// (0x0009274c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe8b3,	// (0x0009b14a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf793,	// (0x0009c02a) popup_clock_analogue_window_cp10_g_ParamLimits

0x5ec7,	// (0x0009275e) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb4db,	// (0x00097d72) cell_dialer2_keypad_pane_g2_ParamLimits

0xb4db,	// (0x00097d72) cell_dialer2_keypad_pane_g2

0x0001,

0xf878,	// (0x0009c10f) cell_dialer2_keypad_pane_g_ParamLimits

0xf878,	// (0x0009c10f) cell_dialer2_keypad_pane_g

0x64d6,	// (0x00092d6d) cell_dialer2_keypad_pane_t1

0x6f29,	// (0x000937c0) main_cset_text2_pane_ParamLimits

0x6f29,	// (0x000937c0) main_cset_text2_pane

0xba6d,	// (0x00098304) area_vitu2_query_pane_g1_ParamLimits

0x77dd,	// (0x00094074) area_vitu2_query_pane_g2_ParamLimits

0xfa26,	// (0x0009c2bd) area_vitu2_query_pane_g_ParamLimits

0xbaf1,	// (0x00098388) area_vitu2_query_pane_t7_ParamLimits

0xbaf1,	// (0x00098388) area_vitu2_query_pane_t7

0x7838,	// (0x000940cf) bg_button_pane_cp018_ParamLimits

0x7845,	// (0x000940dc) bg_button_pane_cp021_ParamLimits

0x7851,	// (0x000940e8) bg_button_pane_cp022_ParamLimits

0x7851,	// (0x000940e8) bg_vkb2_func_pane_cp08_ParamLimits

0x7838,	// (0x000940cf) bg_vkb2_func_pane_cp06_ParamLimits

0x7845,	// (0x000940dc) bg_vkb2_func_pane_cp07_ParamLimits

0x7860,	// (0x000940f7) input_focus_pane_cp09_ParamLimits

0xd709,	// (0x00099fa0) cam6_autofocus_pane_ParamLimits

0xd709,	// (0x00099fa0) cam6_autofocus_pane

0x7d66,	// (0x000945fd) cam6_image_uncrop_pane_ParamLimits

0x7d66,	// (0x000945fd) cam6_image_uncrop_pane

0x7d73,	// (0x0009460a) cam6_indi_pane_ParamLimits

0x7d73,	// (0x0009460a) cam6_indi_pane

0x7d89,	// (0x00094620) cam6_mode_pane_ParamLimits

0x7d89,	// (0x00094620) cam6_mode_pane

0x7d9b,	// (0x00094632) cam6_timer_pane_ParamLimits

0x7d9b,	// (0x00094632) cam6_timer_pane

0x7da7,	// (0x0009463e) cam6_zoom_pane_ParamLimits

0x7da7,	// (0x0009463e) cam6_zoom_pane

0x7db3,	// (0x0009464a) cam6_mode_pane_g1_ParamLimits

0x7db3,	// (0x0009464a) cam6_mode_pane_g1

0x7dc3,	// (0x0009465a) cam6_mode_pane_g2_ParamLimits

0x7dc3,	// (0x0009465a) cam6_mode_pane_g2

0x7dd3,	// (0x0009466a) cam6_mode_pane_g3_ParamLimits

0x7dd3,	// (0x0009466a) cam6_mode_pane_g3

0x7de3,	// (0x0009467a) cam6_mode_pane_g4_ParamLimits

0x7de3,	// (0x0009467a) cam6_mode_pane_g4

0x0003,

0xfb0e,	// (0x0009c3a5) cam6_mode_pane_g_ParamLimits

0xfb0e,	// (0x0009c3a5) cam6_mode_pane_g

0xbd01,	// (0x00098598) bg_tb_trans_pane_cp08_ParamLimits

0xbd01,	// (0x00098598) bg_tb_trans_pane_cp08

0xbd0f,	// (0x000985a6) cam6_battery_pane_ParamLimits

0xbd0f,	// (0x000985a6) cam6_battery_pane

0xbd25,	// (0x000985bc) cam6_indi_pane_g1_ParamLimits

0xbd25,	// (0x000985bc) cam6_indi_pane_g1

0xbd37,	// (0x000985ce) cam6_indi_pane_g2_ParamLimits

0xbd37,	// (0x000985ce) cam6_indi_pane_g2

0xbd49,	// (0x000985e0) cam6_indi_pane_g3_ParamLimits

0xbd49,	// (0x000985e0) cam6_indi_pane_g3

0x0002,

0xfb17,	// (0x0009c3ae) cam6_indi_pane_g_ParamLimits

0xfb17,	// (0x0009c3ae) cam6_indi_pane_g

0xbd5b,	// (0x000985f2) cam6_indi_pane_t1_ParamLimits

0xbd5b,	// (0x000985f2) cam6_indi_pane_t1

0x6a00,	// (0x00093297) cam6_autofocus_pane_g1

0x69f8,	// (0x0009328f) cam6_autofocus_pane_g2

0x6a10,	// (0x000932a7) cam6_autofocus_pane_g3

0x6a08,	// (0x0009329f) cam6_autofocus_pane_g4

0x0003,

0xfb1e,	// (0x0009c3b5) cam6_autofocus_pane_g

0xbd81,	// (0x00098618) cam6_timer_pane_g1

0xbd89,	// (0x00098620) cam6_timer_pane_t1

0xbd97,	// (0x0009862e) cam6_zoom_cont_pane

0xbd9f,	// (0x00098636) cam6_zoom_pane_g1

0xbda7,	// (0x0009863e) cam6_zoom_pane_g2

0x7df3,	// (0x0009468a) cam6_zoom_pane_g3

0x0002,

0xfb27,	// (0x0009c3be) cam6_zoom_pane_g

0xa929,	// (0x000971c0) cam6_battery_pane_g1

0xa929,	// (0x000971c0) cam6_battery_pane_g2

0x0001,

0xf69b,	// (0x0009bf32) cam6_battery_pane_g

0xbdaf,	// (0x00098646) cam6_zoom_cont_pane_g1

0xbdb8,	// (0x0009864f) cam6_zoom_cont_pane_g2

0xbdc1,	// (0x00098658) cam6_zoom_cont_pane_g3

0x0002,

0xfb2e,	// (0x0009c3c5) cam6_zoom_cont_pane_g

0x7e10,	// (0x000946a7) cam6_mode_pane_cp_ParamLimits

0x7e10,	// (0x000946a7) cam6_mode_pane_cp

0x7e22,	// (0x000946b9) cam6_zoom_pane_cp_ParamLimits

0x7e22,	// (0x000946b9) cam6_zoom_pane_cp

0x7e2e,	// (0x000946c5) vid6_image_uncrop_cif_pane_ParamLimits

0x7e2e,	// (0x000946c5) vid6_image_uncrop_cif_pane

0x7e3c,	// (0x000946d3) vid6_image_uncrop_nhd_pane_ParamLimits

0x7e3c,	// (0x000946d3) vid6_image_uncrop_nhd_pane

0x7e49,	// (0x000946e0) vid6_image_uncrop_vga_pane_ParamLimits

0x7e49,	// (0x000946e0) vid6_image_uncrop_vga_pane

0x7e56,	// (0x000946ed) vid6_image_uncrop_wvga_pane_ParamLimits

0x7e56,	// (0x000946ed) vid6_image_uncrop_wvga_pane

0x7e63,	// (0x000946fa) vid6_indi_pane_ParamLimits

0x7e63,	// (0x000946fa) vid6_indi_pane

0xbd01,	// (0x00098598) bg_tb_trans_pane_cp09_ParamLimits

0xbd01,	// (0x00098598) bg_tb_trans_pane_cp09

0xbdd5,	// (0x0009866c) cam6_battery_pane_cp_ParamLimits

0xbdd5,	// (0x0009866c) cam6_battery_pane_cp

0xbde1,	// (0x00098678) vid6_indi_pane_g1_ParamLimits

0xbde1,	// (0x00098678) vid6_indi_pane_g1

0xbdf3,	// (0x0009868a) vid6_indi_pane_g2_ParamLimits

0xbdf3,	// (0x0009868a) vid6_indi_pane_g2

0xbe05,	// (0x0009869c) vid6_indi_pane_g3_ParamLimits

0xbe05,	// (0x0009869c) vid6_indi_pane_g3

0xbe1a,	// (0x000986b1) vid6_indi_pane_g4_ParamLimits

0xbe1a,	// (0x000986b1) vid6_indi_pane_g4

0xbe2f,	// (0x000986c6) vid6_indi_pane_g5_ParamLimits

0xbe2f,	// (0x000986c6) vid6_indi_pane_g5

0x0004,

0xfb35,	// (0x0009c3cc) vid6_indi_pane_g_ParamLimits

0xfb35,	// (0x0009c3cc) vid6_indi_pane_g

0xbe49,	// (0x000986e0) vid6_indi_pane_t1_ParamLimits

0xbe49,	// (0x000986e0) vid6_indi_pane_t1

0xbe5f,	// (0x000986f6) vid6_indi_pane_t2_ParamLimits

0xbe5f,	// (0x000986f6) vid6_indi_pane_t2

0xbe87,	// (0x0009871e) vid6_indi_pane_t3_ParamLimits

0xbe87,	// (0x0009871e) vid6_indi_pane_t3

0xbeaf,	// (0x00098746) vid6_indi_pane_t4_ParamLimits

0xbeaf,	// (0x00098746) vid6_indi_pane_t4

0x0003,

0xfb40,	// (0x0009c3d7) vid6_indi_pane_t_ParamLimits

0xfb40,	// (0x0009c3d7) vid6_indi_pane_t

0xbed3,	// (0x0009876a) wait_bar_pane_cp08

0x7e7a,	// (0x00094711) main_cset_text2_pane_t1_ParamLimits

0x7e7a,	// (0x00094711) main_cset_text2_pane_t1

0x7dfb,	// (0x00094692) listscroll_gen_pane_cp06_t1_ParamLimits

0x7dfb,	// (0x00094692) listscroll_gen_pane_cp06_t1

0x9f39,	// (0x000967d0) main_cam6_set_pane

0xd524,	// (0x00099dbb) bg_tb_trans_pane_cp06_ParamLimits

0xd53a,	// (0x00099dd1) cam4_indicators_pane_g1_ParamLimits

0xd54a,	// (0x00099de1) cam4_indicators_pane_g2_ParamLimits

0xf8b5,	// (0x0009c14c) cam4_indicators_pane_g_ParamLimits

0xd56a,	// (0x00099e01) cam4_indicators_pane_t1_ParamLimits

0x9f2b,	// (0x000967c2) bg_tb_trans_pane_cp07_ParamLimits

0xd53a,	// (0x00099dd1) vid4_indicators_pane_g1_ParamLimits

0xd58c,	// (0x00099e23) vid4_indicators_pane_g2_ParamLimits

0xd59c,	// (0x00099e33) vid4_indicators_pane_g3_ParamLimits

0xd5ad,	// (0x00099e44) vid4_indicators_pane_g4_ParamLimits

0xf8c7,	// (0x0009c15e) vid4_indicators_pane_g_ParamLimits

0xd5c9,	// (0x00099e60) vid4_indicators_pane_t1_ParamLimits

0xd674,	// (0x00099f0b) vid4_progress_pane_g1_ParamLimits

0xd683,	// (0x00099f1a) vid4_progress_pane_g2_ParamLimits

0xd692,	// (0x00099f29) vid4_progress_pane_g3_ParamLimits

0xd6a1,	// (0x00099f38) vid4_progress_pane_g4_ParamLimits

0xfa71,	// (0x0009c308) vid4_progress_pane_g_ParamLimits

0xd6b9,	// (0x00099f50) vid4_progress_pane_t1_ParamLimits

0xd6cf,	// (0x00099f66) vid4_progress_pane_t2_ParamLimits

0xd6e4,	// (0x00099f7b) vid4_progress_pane_t3_ParamLimits

0xfa7c,	// (0x0009c313) vid4_progress_pane_t_ParamLimits

0xd6f9,	// (0x00099f90) wait_bar_pane_cp07_ParamLimits

0x7e95,	// (0x0009472c) main_cam6_set_pane_g2_ParamLimits

0x7e95,	// (0x0009472c) main_cam6_set_pane_g2

0x7eb7,	// (0x0009474e) main_cset6_listscroll_pane_ParamLimits

0x7eb7,	// (0x0009474e) main_cset6_listscroll_pane

0x7ed1,	// (0x00094768) main_cset6_slider_pane_ParamLimits

0x7ed1,	// (0x00094768) main_cset6_slider_pane

0x7ee7,	// (0x0009477e) main_cset6_text2_pane_ParamLimits

0x7ee7,	// (0x0009477e) main_cset6_text2_pane

0xbee3,	// (0x0009877a) main_cset6_text_pane

0xb718,	// (0x00097faf) main_cset_list_pane_copy1_ParamLimits

0xb718,	// (0x00097faf) main_cset_list_pane_copy1

0xb728,	// (0x00097fbf) scroll_pane_cp028_copy1

0x7ef5,	// (0x0009478c) cset_list_set_pane_copy1

0x7f07,	// (0x0009479e) aid_position_infowindow_above_copy1

0x7f0f,	// (0x000947a6) aid_position_infowindow_below_copy1

0x7f17,	// (0x000947ae) cset_list_set_pane_g1_copy1

0x7f1f,	// (0x000947b6) cset_list_set_pane_g3_copy1_ParamLimits

0x7f1f,	// (0x000947b6) cset_list_set_pane_g3_copy1

0x7f2e,	// (0x000947c5) cset_list_set_pane_t1_copy1_ParamLimits

0x7f2e,	// (0x000947c5) cset_list_set_pane_t1_copy1

0x47c0,	// (0x00091057) list_highlight_pane_cp021_copy1_ParamLimits

0x47c0,	// (0x00091057) list_highlight_pane_cp021_copy1

0xbeeb,	// (0x00098782) cset6_slider_pane_ParamLimits

0xbeeb,	// (0x00098782) cset6_slider_pane

0xbf17,	// (0x000987ae) main_cset6_slider_pane_g1_ParamLimits

0xbf17,	// (0x000987ae) main_cset6_slider_pane_g1

0x7f43,	// (0x000947da) main_cset6_slider_pane_g2_ParamLimits

0x7f43,	// (0x000947da) main_cset6_slider_pane_g2

0xb73d,	// (0x00097fd4) main_cset6_slider_pane_g3_ParamLimits

0xb73d,	// (0x00097fd4) main_cset6_slider_pane_g3

0x6fee,	// (0x00093885) main_cset6_slider_pane_g4_ParamLimits

0x6fee,	// (0x00093885) main_cset6_slider_pane_g4

0x7036,	// (0x000938cd) main_cset6_slider_pane_g5_ParamLimits

0x7036,	// (0x000938cd) main_cset6_slider_pane_g5

0xb73d,	// (0x00097fd4) main_cset6_slider_pane_g7_ParamLimits

0xb73d,	// (0x00097fd4) main_cset6_slider_pane_g7

0xb749,	// (0x00097fe0) main_cset6_slider_pane_g8_ParamLimits

0xb749,	// (0x00097fe0) main_cset6_slider_pane_g8

0x6fd6,	// (0x0009386d) main_cset6_slider_pane_g9_ParamLimits

0x6fd6,	// (0x0009386d) main_cset6_slider_pane_g9

0x6fe2,	// (0x00093879) main_cset6_slider_pane_g10_ParamLimits

0x6fe2,	// (0x00093879) main_cset6_slider_pane_g10

0x6fee,	// (0x00093885) main_cset6_slider_pane_g11_ParamLimits

0x6fee,	// (0x00093885) main_cset6_slider_pane_g11

0x6ffa,	// (0x00093891) main_cset6_slider_pane_g12_ParamLimits

0x6ffa,	// (0x00093891) main_cset6_slider_pane_g12

0x7006,	// (0x0009389d) main_cset6_slider_pane_g13_ParamLimits

0x7006,	// (0x0009389d) main_cset6_slider_pane_g13

0x7012,	// (0x000938a9) main_cset6_slider_pane_g14_ParamLimits

0x7012,	// (0x000938a9) main_cset6_slider_pane_g14

0x7f6b,	// (0x00094802) main_cset6_slider_pane_g15_ParamLimits

0x7f6b,	// (0x00094802) main_cset6_slider_pane_g15

0x7036,	// (0x000938cd) main_cset6_slider_pane_g16_ParamLimits

0x7036,	// (0x000938cd) main_cset6_slider_pane_g16

0x7042,	// (0x000938d9) main_cset6_slider_pane_g17_ParamLimits

0x7042,	// (0x000938d9) main_cset6_slider_pane_g17

0x0011,

0xfb49,	// (0x0009c3e0) main_cset6_slider_pane_g_ParamLimits

0xfb49,	// (0x0009c3e0) main_cset6_slider_pane_g

0xbf3f,	// (0x000987d6) main_cset6_slider_pane_t1_ParamLimits

0xbf3f,	// (0x000987d6) main_cset6_slider_pane_t1

0xbf80,	// (0x00098817) main_cset6_slider_pane_t2_ParamLimits

0xbf80,	// (0x00098817) main_cset6_slider_pane_t2

0xbfab,	// (0x00098842) main_cset6_slider_pane_t3_ParamLimits

0xbfab,	// (0x00098842) main_cset6_slider_pane_t3

0x7f83,	// (0x0009481a) main_cset6_slider_pane_t4_ParamLimits

0x7f83,	// (0x0009481a) main_cset6_slider_pane_t4

0x7fae,	// (0x00094845) main_cset6_slider_pane_t5_ParamLimits

0x7fae,	// (0x00094845) main_cset6_slider_pane_t5

0xbfd6,	// (0x0009886d) main_cset6_slider_pane_t7_ParamLimits

0xbfd6,	// (0x0009886d) main_cset6_slider_pane_t7

0x7fd9,	// (0x00094870) main_cset6_slider_pane_t8_ParamLimits

0x7fd9,	// (0x00094870) main_cset6_slider_pane_t8

0x7ffd,	// (0x00094894) main_cset6_slider_pane_t9_ParamLimits

0x7ffd,	// (0x00094894) main_cset6_slider_pane_t9

0x8021,	// (0x000948b8) main_cset6_slider_pane_t10_ParamLimits

0x8021,	// (0x000948b8) main_cset6_slider_pane_t10

0x8045,	// (0x000948dc) main_cset6_slider_pane_t11_ParamLimits

0x8045,	// (0x000948dc) main_cset6_slider_pane_t11

0xc00c,	// (0x000988a3) main_cset6_slider_pane_t14_ParamLimits

0xc00c,	// (0x000988a3) main_cset6_slider_pane_t14

0xc045,	// (0x000988dc) main_cset6_slider_pane_t15_ParamLimits

0xc045,	// (0x000988dc) main_cset6_slider_pane_t15

0x000b,

0xfb6e,	// (0x0009c405) main_cset6_slider_pane_t_ParamLimits

0xfb6e,	// (0x0009c405) main_cset6_slider_pane_t

0xc07e,	// (0x00098915) cset_slider_pane_g1_copy1

0xc087,	// (0x0009891e) cset_slider_pane_g2_copy1

0xc090,	// (0x00098927) cset_slider_pane_g3_copy1

0xd45f,	// (0x00099cf6) bg_popup_sub_pane_cp011_copy1

0xb89f,	// (0x00098136) main_cset_text_pane_g1_copy1

0xb8a7,	// (0x0009813e) main_cset_text_pane_t1_copy1

0xb8b5,	// (0x0009814c) main_cset_text_pane_t2_copy1

0xb8c3,	// (0x0009815a) main_cset_text_pane_t3_copy1

0xb8d1,	// (0x00098168) main_cset_text_pane_t4_copy1

0xb8df,	// (0x00098176) main_cset_text_pane_t5_copy1

0xb8ed,	// (0x00098184) main_cset_text_pane_t6_copy1

0xb8fb,	// (0x00098192) main_cset_text_pane_t7_copy1

0x813a,	// (0x000949d1) main_cset_text2_pane_t1_copy1

0x9f2b,	// (0x000967c2) main_ncimui_pane

0x49dc,	// (0x00091273) popup_query_ncimui_window_ParamLimits

0x49dc,	// (0x00091273) popup_query_ncimui_window

0xabf9,	// (0x00097490) field_cale_ev2_pane_g4_ParamLimits

0xabf9,	// (0x00097490) field_cale_ev2_pane_g4

0x63c8,	// (0x00092c5f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x63c8,	// (0x00092c5f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf84f,	// (0x0009c0e6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf84f,	// (0x0009c0e6) cell_video_dialer_keypad_pane_g

0x63e0,	// (0x00092c77) cell_video_dialer_keypad_pane_t1

0xd45f,	// (0x00099cf6) bg_popup_window_pane_cp012

0xe6f2,	// (0x0009af89) heading_pane_cp06

0xc0c3,	// (0x0009895a) ncim_query_content_pane

0xd45f,	// (0x00099cf6) bg_popup_heading_pane_cp01

0xc0cb,	// (0x00098962) ncim_heading_pane_t1

0xc0d9,	// (0x00098970) ncim_indicator_popup_pane

0xc0eb,	// (0x00098982) ncim_query_button_pane

0xc0ff,	// (0x00098996) ncim_query_content_pane_t1

0xc111,	// (0x000989a8) ncim_query_content_pane_t2

0x0005,

0xfbb2,	// (0x0009c449) ncim_query_content_pane_t

0xc14b,	// (0x000989e2) ncim_query_list_pane

0xc15d,	// (0x000989f4) ncim_query_popup_pane

0xc0d9,	// (0x00098970) ncim_indicator_popup_pane_ParamLimits

0x8279,	// (0x00094b10) ncim_query_content_pane_g1_ParamLimits

0x8279,	// (0x00094b10) ncim_query_content_pane_g1

0xc0ff,	// (0x00098996) ncim_query_content_pane_t1_ParamLimits

0xc111,	// (0x000989a8) ncim_query_content_pane_t2_ParamLimits

0x8285,	// (0x00094b1c) ncim_query_content_pane_t3_ParamLimits

0x8285,	// (0x00094b1c) ncim_query_content_pane_t3

0x82ad,	// (0x00094b44) ncim_query_content_pane_t4_ParamLimits

0x82ad,	// (0x00094b44) ncim_query_content_pane_t4

0x82d5,	// (0x00094b6c) ncim_query_content_pane_t5_ParamLimits

0x82d5,	// (0x00094b6c) ncim_query_content_pane_t5

0xc123,	// (0x000989ba) ncim_query_content_pane_t6_ParamLimits

0xc123,	// (0x000989ba) ncim_query_content_pane_t6

0xfbb2,	// (0x0009c449) ncim_query_content_pane_t_ParamLimits

0xc14b,	// (0x000989e2) ncim_query_list_pane_ParamLimits

0xc15d,	// (0x000989f4) ncim_query_popup_pane_ParamLimits

0xc171,	// (0x00098a08) wait_bar_pane_cp04

0xd45f,	// (0x00099cf6) input_focus_pane_cp011

0xc179,	// (0x00098a10) ncim_query_popup_pane_t1

0xc187,	// (0x00098a1e) ncim_list_query_list_pane_ParamLimits

0xc187,	// (0x00098a1e) ncim_list_query_list_pane

0xd45f,	// (0x00099cf6) bg_button_pane_cp027

0xc19a,	// (0x00098a31) ncim_query_button_pane_g1

0xd45f,	// (0x00099cf6) list_highlight_pane_cp012

0xc1a4,	// (0x00098a3b) ncim_list_query_list_pane_g1

0xc1ac,	// (0x00098a43) ncim_list_query_list_pane_t1

0xd55a,	// (0x00099df1) cam4_indicators_pane_g3_ParamLimits

0xd55a,	// (0x00099df1) cam4_indicators_pane_g3

0xd5b9,	// (0x00099e50) vid4_indicators_pane_g5_ParamLimits

0xd5b9,	// (0x00099e50) vid4_indicators_pane_g5

0xd6ad,	// (0x00099f44) vid4_progress_pane_g5_ParamLimits

0xd6ad,	// (0x00099f44) vid4_progress_pane_g5

0x8169,	// (0x00094a00) main_ncimui_pane_g1

0x81cf,	// (0x00094a66) ncimui_group_query_pane_ParamLimits

0x81cf,	// (0x00094a66) ncimui_group_query_pane

0x8217,	// (0x00094aae) ncimui_list_pane_ParamLimits

0x8217,	// (0x00094aae) ncimui_list_pane

0x823c,	// (0x00094ad3) ncimui_text_pane_ParamLimits

0x823c,	// (0x00094ad3) ncimui_text_pane

0x82fd,	// (0x00094b94) ncimui_text_pane_t1_ParamLimits

0x82fd,	// (0x00094b94) ncimui_text_pane_t1

0xc1c3,	// (0x00098a5a) ncimui_list_single_graphic_pane_ParamLimits

0xc1c3,	// (0x00098a5a) ncimui_list_single_graphic_pane

0x831b,	// (0x00094bb2) ncimui_query_pane_ParamLimits

0x831b,	// (0x00094bb2) ncimui_query_pane

0xd45f,	// (0x00099cf6) list_highlight_pane_cp013

0xc1d3,	// (0x00098a6a) ncim_list_query_list_pane_t1_copy1

0xc1e1,	// (0x00098a78) ncim_list_single_graphic_pane_g1

0xc1e9,	// (0x00098a80) ncim_query_button_pane_cp01

0xc1f5,	// (0x00098a8c) ncim_query_entry_pane_ParamLimits

0xc1f5,	// (0x00098a8c) ncim_query_entry_pane

0xc208,	// (0x00098a9f) ncimui_query_pane_g1

0xc214,	// (0x00098aab) ncimui_query_pane_t1_ParamLimits

0xc214,	// (0x00098aab) ncimui_query_pane_t1

0x47c0,	// (0x00091057) input_focus_pane_cp012

0xc22d,	// (0x00098ac4) ncim_query_entry_pane_t1

0xde0b,	// (0x0009a6a2) main_im_pane_ParamLimits

0x9f2b,	// (0x000967c2) main_mobtv_pane_ParamLimits

0x9f2b,	// (0x000967c2) main_mobtv_pane

0x6fd6,	// (0x0009386d) main_cset6_slider_pane_g18_ParamLimits

0x6fd6,	// (0x0009386d) main_cset6_slider_pane_g18

0x7006,	// (0x0009389d) main_cset6_slider_pane_g19_ParamLimits

0x7006,	// (0x0009389d) main_cset6_slider_pane_g19

0xc23f,	// (0x00098ad6) bg_main_mobtv_pane_ParamLimits

0xc23f,	// (0x00098ad6) bg_main_mobtv_pane

0x832b,	// (0x00094bc2) main_mobtv_info_pane

0x8334,	// (0x00094bcb) main_mobtv_loading_pane_ParamLimits

0x8334,	// (0x00094bcb) main_mobtv_loading_pane

0xc24d,	// (0x00098ae4) main_mobtv_pg_channel_list_pane

0xc257,	// (0x00098aee) main_mobtv_pg_hdr_pane

0x8341,	// (0x00094bd8) main_mobtv_programe_curr_pane_ParamLimits

0x8341,	// (0x00094bd8) main_mobtv_programe_curr_pane

0x834e,	// (0x00094be5) main_mobtv_programe_next_pane_ParamLimits

0x834e,	// (0x00094be5) main_mobtv_programe_next_pane

0xc260,	// (0x00098af7) popup_mobtv_noti_window

0xa929,	// (0x000971c0) main_tv_pg_hdr_pane_g1

0xc268,	// (0x00098aff) main_tv_pg_hdr_pane_g2

0xc270,	// (0x00098b07) main_tv_pg_hdr_pane_g3

0xc278,	// (0x00098b0f) main_tv_pg_hdr_pane_g4

0xc280,	// (0x00098b17) main_tv_pg_hdr_pane_g5

0xc288,	// (0x00098b1f) main_tv_pg_hdr_pane_g6

0xc290,	// (0x00098b27) main_tv_pg_hdr_pane_g7

0xc298,	// (0x00098b2f) main_tv_pg_hdr_pane_g8

0xc2a0,	// (0x00098b37) main_tv_pg_hdr_pane_g9

0xc2a8,	// (0x00098b3f) main_tv_pg_hdr_pane_g10

0xc2b2,	// (0x00098b49) main_tv_pg_hdr_pane_g11

0x000a,

0xfbbf,	// (0x0009c456) main_tv_pg_hdr_pane_g

0xc2bc,	// (0x00098b53) main_tv_pg_hdr_pane_t1

0xc2ca,	// (0x00098b61) main_tv_pg_hdr_pane_t2

0xc2d8,	// (0x00098b6f) main_tv_pg_hdr_pane_t3

0xc2e6,	// (0x00098b7d) main_tv_pg_hdr_pane_t4

0xc2f4,	// (0x00098b8b) main_tv_pg_hdr_pane_t5

0x0004,

0xfbd6,	// (0x0009c46d) main_tv_pg_hdr_pane_t

0xc302,	// (0x00098b99) single_mobtv_pg_channel_pane_ParamLimits

0xc302,	// (0x00098b99) single_mobtv_pg_channel_pane

0xc314,	// (0x00098bab) single_mobtv_pg_channel_table_pane

0xc31d,	// (0x00098bb4) single_mobtv_pg_channel_thumb_pane

0xc326,	// (0x00098bbd) single_tv_pg_channel_pane_g1

0xc32f,	// (0x00098bc6) single_tv_pg_channel_pane_g2

0x0001,

0xfbe1,	// (0x0009c478) single_tv_pg_channel_pane_g

0xab58,	// (0x000973ef) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xab58,	// (0x000973ef) bg_single_mobtv_pg_channel_thumb_pane

0xc338,	// (0x00098bcf) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc338,	// (0x00098bcf) single_mobtv_pg_channel_thumb_pane_g1

0xc346,	// (0x00098bdd) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc346,	// (0x00098bdd) single_mobtv_pg_channel_thumb_pane_g2

0xc352,	// (0x00098be9) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc352,	// (0x00098be9) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbe6,	// (0x0009c47d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbe6,	// (0x0009c47d) single_mobtv_pg_channel_thumb_pane_g

0xc35e,	// (0x00098bf5) single_mobtv_pg_channel_thumb_pane_t1

0xc36c,	// (0x00098c03) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbed,	// (0x0009c484) single_mobtv_pg_channel_thumb_pane_t

0xa929,	// (0x000971c0) bg_single_mobtv_pg_channel_table_pane_g1

0xa929,	// (0x000971c0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf69b,	// (0x0009bf32) bg_single_mobtv_pg_channel_table_pane_g

0xc37a,	// (0x00098c11) single_mobtv_pg_channel_table_pane_t1

0xc388,	// (0x00098c1f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbf2,	// (0x0009c489) single_mobtv_pg_channel_table_pane_t

0x8363,	// (0x00094bfa) main_mobtv_info_pane_g1_ParamLimits

0x8363,	// (0x00094bfa) main_mobtv_info_pane_g1

0x837f,	// (0x00094c16) main_mobtv_info_pane_t1_ParamLimits

0x837f,	// (0x00094c16) main_mobtv_info_pane_t1

0x83e5,	// (0x00094c7c) main_mobtv_info_pane_t2_ParamLimits

0x83e5,	// (0x00094c7c) main_mobtv_info_pane_t2

0x0002,

0xfbfc,	// (0x0009c493) main_mobtv_info_pane_t_ParamLimits

0xfbfc,	// (0x0009c493) main_mobtv_info_pane_t

0x8468,	// (0x00094cff) wait_bar_pane_cp05

0x8478,	// (0x00094d0f) main_mobtv_loading_pane_g1_ParamLimits

0x8478,	// (0x00094d0f) main_mobtv_loading_pane_g1

0x8489,	// (0x00094d20) main_mobtv_loading_pane_g2_ParamLimits

0x8489,	// (0x00094d20) main_mobtv_loading_pane_g2

0x8495,	// (0x00094d2c) main_mobtv_loading_pane_g3_ParamLimits

0x8495,	// (0x00094d2c) main_mobtv_loading_pane_g3

0x0002,

0xfc03,	// (0x0009c49a) main_mobtv_loading_pane_g_ParamLimits

0xfc03,	// (0x0009c49a) main_mobtv_loading_pane_g

0xc396,	// (0x00098c2d) main_mobtv_loading_pane_t1_ParamLimits

0xc396,	// (0x00098c2d) main_mobtv_loading_pane_t1

0xc3ae,	// (0x00098c45) main_mobtv_loading_pane_t2_ParamLimits

0xc3ae,	// (0x00098c45) main_mobtv_loading_pane_t2

0x0001,

0xfc0a,	// (0x0009c4a1) main_mobtv_loading_pane_t_ParamLimits

0xfc0a,	// (0x0009c4a1) main_mobtv_loading_pane_t

0x84a6,	// (0x00094d3d) wait_bar_pane_cp06_ParamLimits

0x84a6,	// (0x00094d3d) wait_bar_pane_cp06

0xc3d2,	// (0x00098c69) main_mobtv_programe_curr_pane_t1

0xc3e0,	// (0x00098c77) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc0f,	// (0x0009c4a6) main_mobtv_programe_curr_pane_t

0xc3ee,	// (0x00098c85) main_mobtv_programe_next_pane_t1

0xc3fc,	// (0x00098c93) main_mobtv_programe_next_pane_t2

0xc40a,	// (0x00098ca1) main_mobtv_programe_next_pane_t3

0x0002,

0xfc14,	// (0x0009c4ab) main_mobtv_programe_next_pane_t

0xd45f,	// (0x00099cf6) bg_popup_mobtv_noti_window_pane

0xc418,	// (0x00098caf) popup_mobtv_noti_window_g1

0xc420,	// (0x00098cb7) popup_mobtv_noti_window_t1

0xc42e,	// (0x00098cc5) popup_mobtv_noti_window_t2

0x0001,

0xfc1b,	// (0x0009c4b2) popup_mobtv_noti_window_t

0xa929,	// (0x000971c0) bg_popup_mobtv_noti_window_pane_g1

0x9f39,	// (0x000967d0) sc_clock_pane

0x9f39,	// (0x000967d0) main_fs_bigclock_pane

0x7be3,	// (0x0009447a) blid2_tripm_pane_t4_ParamLimits

0x7be3,	// (0x0009447a) blid2_tripm_pane_t4

0x84b5,	// (0x00094d4c) sc_clock_pane_g1_ParamLimits

0x84b5,	// (0x00094d4c) sc_clock_pane_g1

0x84c7,	// (0x00094d5e) sc_clock_pane_t1_ParamLimits

0x84c7,	// (0x00094d5e) sc_clock_pane_t1

0x84e9,	// (0x00094d80) sc_clock_pane_t2_ParamLimits

0x84e9,	// (0x00094d80) sc_clock_pane_t2

0x84ff,	// (0x00094d96) sc_clock_pane_t3_ParamLimits

0x84ff,	// (0x00094d96) sc_clock_pane_t3

0x0004,

0xfc20,	// (0x0009c4b7) sc_clock_pane_t_ParamLimits

0xfc20,	// (0x0009c4b7) sc_clock_pane_t

0x9417,	// (0x00095cae) main_fs_bigclock_indicator_pane_ParamLimits

0x9417,	// (0x00095cae) main_fs_bigclock_indicator_pane

0x859b,	// (0x00094e32) main_fs_bigclock_pane_g1_ParamLimits

0x859b,	// (0x00094e32) main_fs_bigclock_pane_g1

0x9423,	// (0x00095cba) main_fs_bigclock_pane_t1_ParamLimits

0x9423,	// (0x00095cba) main_fs_bigclock_pane_t1

0x9435,	// (0x00095ccc) main_fs_bigclock_pane_t2_ParamLimits

0x9435,	// (0x00095ccc) main_fs_bigclock_pane_t2

0x9447,	// (0x00095cde) main_fs_bigclock_pane_t3_ParamLimits

0x9447,	// (0x00095cde) main_fs_bigclock_pane_t3

0x0002,

0xfe2a,	// (0x0009c6c1) main_fs_bigclock_pane_t_ParamLimits

0xfe2a,	// (0x0009c6c1) main_fs_bigclock_pane_t

0xd022,	// (0x000998b9) main_fs_bigclock_indicator_pane_g1

0xc0f3,	// (0x0009898a) ncim_query_content_pane_g2_ParamLimits

0xc0f3,	// (0x0009898a) ncim_query_content_pane_g2

0x0001,

0xfbad,	// (0x0009c444) ncim_query_content_pane_g_ParamLimits

0xfbad,	// (0x0009c444) ncim_query_content_pane_g

0x8516,	// (0x00094dad) sc_clock_pane_t4_ParamLimits

0x8516,	// (0x00094dad) sc_clock_pane_t4

0x9f2b,	// (0x000967c2) main_radioblah_pane

0xd4c0,	// (0x00099d57) cell_call4_button_pane_t1_copy1_ParamLimits

0xd4c0,	// (0x00099d57) cell_call4_button_pane_t1_copy1

0x8181,	// (0x00094a18) main_ncimui_pane_t1_ParamLimits

0x8181,	// (0x00094a18) main_ncimui_pane_t1

0x819b,	// (0x00094a32) main_ncimui_pane_t2_ParamLimits

0x819b,	// (0x00094a32) main_ncimui_pane_t2

0x0002,

0xfba6,	// (0x0009c43d) main_ncimui_pane_t_ParamLimits

0xfba6,	// (0x0009c43d) main_ncimui_pane_t

0xc56f,	// (0x00098e06) main_radioblah_anim_pane_ParamLimits

0xc56f,	// (0x00098e06) main_radioblah_anim_pane

0xc580,	// (0x00098e17) main_radioblah_info_pane_ParamLimits

0xc580,	// (0x00098e17) main_radioblah_info_pane

0xc594,	// (0x00098e2b) main_radioblah_pane_t1_ParamLimits

0xc594,	// (0x00098e2b) main_radioblah_pane_t1

0xc5b0,	// (0x00098e47) main_radioblah_pane_t2_ParamLimits

0xc5b0,	// (0x00098e47) main_radioblah_pane_t2

0x0003,

0xfc41,	// (0x0009c4d8) main_radioblah_pane_t_ParamLimits

0xfc41,	// (0x0009c4d8) main_radioblah_pane_t

0x85e5,	// (0x00094e7c) main_radioblah_rocker_ctrl_pane_ParamLimits

0x85e5,	// (0x00094e7c) main_radioblah_rocker_ctrl_pane

0xc5f8,	// (0x00098e8f) main_radioblah_info_pane_t1_ParamLimits

0xc5f8,	// (0x00098e8f) main_radioblah_info_pane_t1

0x8639,	// (0x00094ed0) main_radioblah_info_pane_t2_ParamLimits

0x8639,	// (0x00094ed0) main_radioblah_info_pane_t2

0x0003,

0xfc4a,	// (0x0009c4e1) main_radioblah_info_pane_t_ParamLimits

0xfc4a,	// (0x0009c4e1) main_radioblah_info_pane_t

0xa929,	// (0x000971c0) main_radioblah_rocker_ctrl_pane_g1

0x86e7,	// (0x00094f7e) main_radioblah_rocker_ctrl_pane_g2

0x86ef,	// (0x00094f86) main_radioblah_rocker_ctrl_pane_g3

0x86f7,	// (0x00094f8e) main_radioblah_rocker_ctrl_pane_g4

0x86ff,	// (0x00094f96) main_radioblah_rocker_ctrl_pane_g5

0x8707,	// (0x00094f9e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc53,	// (0x0009c4ea) main_radioblah_rocker_ctrl_pane_g

0x813a,	// (0x000949d1) main_cset_text2_pane_t1_copy1_ParamLimits

0xd51c,	// (0x00099db3) cam4_image_uncrop_qvga_pane

0xd584,	// (0x00099e1b) vid4_image_uncrop_qcif_pane

0xd709,	// (0x00099fa0) cam6_image_uncrop_qvga_pane_ParamLimits

0xd709,	// (0x00099fa0) cam6_image_uncrop_qvga_pane

0xbdc9,	// (0x00098660) vid6_image_uncrop_qcif_pane_ParamLimits

0xbdc9,	// (0x00098660) vid6_image_uncrop_qcif_pane

0xd45f,	// (0x00099cf6) bg_popup_preview_window_pane_cp03

0xc099,	// (0x00098930) list_cset_text2_pane

0xc0a1,	// (0x00098938) main_cset6_text2_pane_g1

0xc0a9,	// (0x00098940) main_cset6_text2_pane_t1

0x870f,	// (0x00094fa6) list_cset_text2_pane_t1_ParamLimits

0x870f,	// (0x00094fa6) list_cset_text2_pane_t1

0x9f2b,	// (0x000967c2) main_radioblah_pane_ParamLimits

0x8456,	// (0x00094ced) main_mobtv_info_pane_t3_ParamLimits

0x8456,	// (0x00094ced) main_mobtv_info_pane_t3

0x85d3,	// (0x00094e6a) main_radioblah_pane_g1

0x860d,	// (0x00094ea4) main_radioblah_info_pane_g1

0x868c,	// (0x00094f23) main_radioblah_info_pane_t3_ParamLimits

0x868c,	// (0x00094f23) main_radioblah_info_pane_t3

0x2aee,	// (0x0008f385) highlight_cell_cale_month_pane_ParamLimits

0x2aee,	// (0x0008f385) highlight_cell_cale_month_pane

0x9f39,	// (0x000967d0) main_phob_fisheye_pane

0xaca8,	// (0x0009753f) scroll_pane_cp0031_ParamLimits

0xaca8,	// (0x0009753f) scroll_pane_cp0031

0xbed3,	// (0x0009876a) wait_bar_pane_cp08_ParamLimits

0x7ef5,	// (0x0009478c) cset_list_set_pane_copy1_ParamLimits

0xc632,	// (0x00098ec9) highlight_cell_cale_month_pane_g1

0x8728,	// (0x00094fbf) highlight_cell_cale_month_pane_t1

0xc63a,	// (0x00098ed1) list_gen_pane_cp01

0xb728,	// (0x00097fbf) scroll_pane_01

0x8736,	// (0x00094fcd) list_single_double_fisheye_pane

0x873f,	// (0x00094fd6) list_double_fisheye_pane_g1_ParamLimits

0x873f,	// (0x00094fd6) list_double_fisheye_pane_g1

0x874b,	// (0x00094fe2) list_double_fisheye_pane_g2_ParamLimits

0x874b,	// (0x00094fe2) list_double_fisheye_pane_g2

0x875f,	// (0x00094ff6) list_double_fisheye_pane_g3_ParamLimits

0x875f,	// (0x00094ff6) list_double_fisheye_pane_g3

0x0004,

0xfc60,	// (0x0009c4f7) list_double_fisheye_pane_g_ParamLimits

0xfc60,	// (0x0009c4f7) list_double_fisheye_pane_g

0x8788,	// (0x0009501f) list_double_fisheye_pane_t1_ParamLimits

0x8788,	// (0x0009501f) list_double_fisheye_pane_t1

0x87a3,	// (0x0009503a) list_double_fisheye_pane_t2_ParamLimits

0x87a3,	// (0x0009503a) list_double_fisheye_pane_t2

0x0001,

0xfc6b,	// (0x0009c502) list_double_fisheye_pane_t_ParamLimits

0xfc6b,	// (0x0009c502) list_double_fisheye_pane_t

0x9f39,	// (0x000967d0) main_call5_pane

0x853f,	// (0x00094dd6) sc_swipe_pane_ParamLimits

0x853f,	// (0x00094dd6) sc_swipe_pane

0x87d6,	// (0x0009506d) call5_image_pane_ParamLimits

0x87d6,	// (0x0009506d) call5_image_pane

0x87eb,	// (0x00095082) call5_swipe_1_pane_ParamLimits

0x87eb,	// (0x00095082) call5_swipe_1_pane

0x87fc,	// (0x00095093) call5_swipe_2_pane_ParamLimits

0x87fc,	// (0x00095093) call5_swipe_2_pane

0x8821,	// (0x000950b8) popup_call5_audio_first_window_ParamLimits

0x8821,	// (0x000950b8) popup_call5_audio_first_window

0xab58,	// (0x000973ef) call5_swipe_1_pane_g1_ParamLimits

0xab58,	// (0x000973ef) call5_swipe_1_pane_g1

0xc643,	// (0x00098eda) call5_swipe_1_pane_g2_ParamLimits

0xc643,	// (0x00098eda) call5_swipe_1_pane_g2

0x0001,

0xfc70,	// (0x0009c507) call5_swipe_1_pane_g_ParamLimits

0xfc70,	// (0x0009c507) call5_swipe_1_pane_g

0xc64f,	// (0x00098ee6) call5_swipe_1_pane_t1_ParamLimits

0xc64f,	// (0x00098ee6) call5_swipe_1_pane_t1

0xab58,	// (0x000973ef) call5_swipe_2_pane_g1_ParamLimits

0xab58,	// (0x000973ef) call5_swipe_2_pane_g1

0xc664,	// (0x00098efb) call5_swipe_2_pane_g2_ParamLimits

0xc664,	// (0x00098efb) call5_swipe_2_pane_g2

0x0001,

0xfc75,	// (0x0009c50c) call5_swipe_2_pane_g_ParamLimits

0xfc75,	// (0x0009c50c) call5_swipe_2_pane_g

0xc670,	// (0x00098f07) call5_swipe_2_pane_t1_ParamLimits

0xc670,	// (0x00098f07) call5_swipe_2_pane_t1

0xc685,	// (0x00098f1c) sc_swipe_pane_g1_ParamLimits

0xc685,	// (0x00098f1c) sc_swipe_pane_g1

0xc692,	// (0x00098f29) sc_swipe_pane_g2_ParamLimits

0xc692,	// (0x00098f29) sc_swipe_pane_g2

0x0001,

0xfc7a,	// (0x0009c511) sc_swipe_pane_g_ParamLimits

0xfc7a,	// (0x0009c511) sc_swipe_pane_g

0xc69e,	// (0x00098f35) sc_swipe_pane_t1_ParamLimits

0xc69e,	// (0x00098f35) sc_swipe_pane_t1

0x9f39,	// (0x000967d0) main_cmail_launcher_pane

0x8830,	// (0x000950c7) aid_size_cell_cmail_l_ParamLimits

0x8830,	// (0x000950c7) aid_size_cell_cmail_l

0x8849,	// (0x000950e0) grid_cmail_l_pane_ParamLimits

0x8849,	// (0x000950e0) grid_cmail_l_pane

0x885e,	// (0x000950f5) cell_cmail_l_pane_ParamLimits

0x885e,	// (0x000950f5) cell_cmail_l_pane

0x8880,	// (0x00095117) cell_cmail_l_pane_g1_ParamLimits

0x8880,	// (0x00095117) cell_cmail_l_pane_g1

0x8890,	// (0x00095127) cell_cmail_l_pane_t1_ParamLimits

0x8890,	// (0x00095127) cell_cmail_l_pane_t1

0x88a6,	// (0x0009513d) cell_cmail_l_pane_t2_ParamLimits

0x88a6,	// (0x0009513d) cell_cmail_l_pane_t2

0x0001,

0xfc7f,	// (0x0009c516) cell_cmail_l_pane_t_ParamLimits

0xfc7f,	// (0x0009c516) cell_cmail_l_pane_t

0x47c0,	// (0x00091057) grid_highlight_pane_cp018_ParamLimits

0x47c0,	// (0x00091057) grid_highlight_pane_cp018

0x0d9e,	// (0x0008d635) main2_pane_ParamLimits

0x0d9e,	// (0x0008d635) main2_pane

0xdeb6,	// (0x0009a74d) popup_sp_fs_action_menu_bg_pane_g1

0xdebe,	// (0x0009a755) popup_sp_fs_action_menu_bg_pane_g2

0xdec6,	// (0x0009a75d) popup_sp_fs_action_menu_bg_pane_g3

0xdece,	// (0x0009a765) popup_sp_fs_action_menu_bg_pane_g4

0xded6,	// (0x0009a76d) popup_sp_fs_action_menu_bg_pane_g5

0xdede,	// (0x0009a775) popup_sp_fs_action_menu_bg_pane_g6

0xdee6,	// (0x0009a77d) popup_sp_fs_action_menu_bg_pane_g7

0xdeee,	// (0x0009a785) popup_sp_fs_action_menu_bg_pane_g8

0xdef6,	// (0x0009a78d) popup_sp_fs_action_menu_bg_pane_g9

0xdefe,	// (0x0009a795) popup_sp_fs_action_menu_bg_pane_g10

0xdefe,	// (0x0009a795) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0009ba1d) popup_sp_fs_action_menu_bg_pane_g

0x1c77,	// (0x0008e50e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1c77,	// (0x0008e50e) list_medium_line_x2_t3_g3_g1

0x1c83,	// (0x0008e51a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1c83,	// (0x0008e51a) list_medium_line_x2_t3_g3_g2

0x1c8f,	// (0x0008e526) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1c8f,	// (0x0008e526) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0009bacb) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0009bacb) list_medium_line_x2_t3_g3_g

0x1c9b,	// (0x0008e532) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1c9b,	// (0x0008e532) list_medium_line_x2_t3_g3_t1

0x1cb0,	// (0x0008e547) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1cb0,	// (0x0008e547) list_medium_line_x2_t3_g3_t2

0x1cc2,	// (0x0008e559) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1cc2,	// (0x0008e559) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0009bad2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0009bad2) list_medium_line_x2_t3_g3_t

0x1c77,	// (0x0008e50e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1c77,	// (0x0008e50e) list_medium_line_x2_t3_g2_g1

0x1c8f,	// (0x0008e526) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1c8f,	// (0x0008e526) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0009bad9) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0009bad9) list_medium_line_x2_t3_g2_g

0x1cd7,	// (0x0008e56e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1cd7,	// (0x0008e56e) list_medium_line_x2_t3_g2_t1

0x1ced,	// (0x0008e584) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1ced,	// (0x0008e584) list_medium_line_x2_t3_g2_t2

0x1cc2,	// (0x0008e559) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1cc2,	// (0x0008e559) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0009bade) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0009bade) list_medium_line_x2_t3_g2_t

0x1c77,	// (0x0008e50e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1c77,	// (0x0008e50e) list_medium_line_x2_t4_g4_g1

0x1cff,	// (0x0008e596) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1cff,	// (0x0008e596) list_medium_line_x2_t4_g4_g2

0x1c83,	// (0x0008e51a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1c83,	// (0x0008e51a) list_medium_line_x2_t4_g4_g3

0x1d0b,	// (0x0008e5a2) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1d0b,	// (0x0008e5a2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0009bae5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0009bae5) list_medium_line_x2_t4_g4_g

0x1d17,	// (0x0008e5ae) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1d17,	// (0x0008e5ae) list_medium_line_x2_t4_g4_t1

0x1d2e,	// (0x0008e5c5) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1d2e,	// (0x0008e5c5) list_medium_line_x2_t4_g4_t2

0x1d43,	// (0x0008e5da) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1d43,	// (0x0008e5da) list_medium_line_x2_t4_g4_t3

0x1d55,	// (0x0008e5ec) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1d55,	// (0x0008e5ec) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0009baee) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0009baee) list_medium_line_x2_t4_g4_t

0x1c77,	// (0x0008e50e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1c77,	// (0x0008e50e) list_medium_line_x2_t2_g4_g1

0x1cff,	// (0x0008e596) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1cff,	// (0x0008e596) list_medium_line_x2_t2_g4_g2

0x1c83,	// (0x0008e51a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1c83,	// (0x0008e51a) list_medium_line_x2_t2_g4_g3

0x1c8f,	// (0x0008e526) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1c8f,	// (0x0008e526) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0009bb55) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0009bb55) list_medium_line_x2_t2_g4_g

0x2b14,	// (0x0008f3ab) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2b14,	// (0x0008f3ab) list_medium_line_x2_t2_g4_t1

0x1cc2,	// (0x0008e559) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1cc2,	// (0x0008e559) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0009bb5e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0009bb5e) list_medium_line_x2_t2_g4_t

0x1c77,	// (0x0008e50e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1c77,	// (0x0008e50e) list_medium_line_x2_t2_g3_g1

0x1c83,	// (0x0008e51a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1c83,	// (0x0008e51a) list_medium_line_x2_t2_g3_g2

0x1c8f,	// (0x0008e526) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1c8f,	// (0x0008e526) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0009bacb) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0009bacb) list_medium_line_x2_t2_g3_g

0x2b29,	// (0x0008f3c0) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2b29,	// (0x0008f3c0) list_medium_line_x2_t2_g3_t1

0x1cc2,	// (0x0008e559) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1cc2,	// (0x0008e559) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0009bb63) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0009bb63) list_medium_line_x2_t2_g3_t

0x2c75,	// (0x0008f50c) main_sp_fs_list_pane_ParamLimits

0x2c75,	// (0x0008f50c) main_sp_fs_list_pane

0x2c82,	// (0x0008f519) sp_fs_scroll_pane_ParamLimits

0x2c82,	// (0x0008f519) sp_fs_scroll_pane

0x2c8f,	// (0x0008f526) list_medium_line_x2_t3_t1

0x2c9f,	// (0x0008f536) list_medium_line_x2_t3_t2

0x2cad,	// (0x0008f544) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0009bbae) list_medium_line_x2_t3_t

0x2cbb,	// (0x0008f552) list_medium_line_x3_t4_t1

0x2ccb,	// (0x0008f562) list_medium_line_x3_t4_t2

0x2cd9,	// (0x0008f570) list_medium_line_x3_t4_t3

0x2ce7,	// (0x0008f57e) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0009bbb5) list_medium_line_x3_t4_t

0x2cf5,	// (0x0008f58c) list_medium_line_x4_t5_t1

0x2d05,	// (0x0008f59c) list_medium_line_x4_t5_t2

0x2cd9,	// (0x0008f570) list_medium_line_x4_t5_t3

0x2d13,	// (0x0008f5aa) list_medium_line_x4_t5_t4

0x2ce7,	// (0x0008f57e) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0009bbbe) list_medium_line_x4_t5_t

0x1c77,	// (0x0008e50e) list_medium_line_t4_g4_g1_ParamLimits

0x1c77,	// (0x0008e50e) list_medium_line_t4_g4_g1

0x1d0b,	// (0x0008e5a2) list_medium_line_t4_g4_g2_ParamLimits

0x1d0b,	// (0x0008e5a2) list_medium_line_t4_g4_g2

0x2d21,	// (0x0008f5b8) list_medium_line_t4_g4_g3_ParamLimits

0x2d21,	// (0x0008f5b8) list_medium_line_t4_g4_g3

0x1c8f,	// (0x0008e526) list_medium_line_t4_g4_g4_ParamLimits

0x1c8f,	// (0x0008e526) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0009bbc9) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0009bbc9) list_medium_line_t4_g4_g

0x2d2d,	// (0x0008f5c4) list_medium_line_t4_g4_t1_ParamLimits

0x2d2d,	// (0x0008f5c4) list_medium_line_t4_g4_t1

0x2d42,	// (0x0008f5d9) list_medium_line_t4_g4_t2_ParamLimits

0x2d42,	// (0x0008f5d9) list_medium_line_t4_g4_t2

0x2d58,	// (0x0008f5ef) list_medium_line_t4_g4_t3_ParamLimits

0x2d58,	// (0x0008f5ef) list_medium_line_t4_g4_t3

0x2d6e,	// (0x0008f605) list_medium_line_t4_g4_t4_ParamLimits

0x2d6e,	// (0x0008f605) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0009bbd2) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0009bbd2) list_medium_line_t4_g4_t

0x2e44,	// (0x0008f6db) chi_dic_find_pane_g1

0x47e2,	// (0x00091079) main_tport_pane

0xb832,	// (0x000980c9) list_medium_line_plain_t1

0xb848,	// (0x000980df) list_medium_line_t2_g2_g1_ParamLimits

0xb848,	// (0x000980df) list_medium_line_t2_g2_g1

0xb854,	// (0x000980eb) list_medium_line_t2_g2_g2_ParamLimits

0xb854,	// (0x000980eb) list_medium_line_t2_g2_g2

0x0001,

0xf9b7,	// (0x0009c24e) list_medium_line_t2_g2_g_ParamLimits

0xf9b7,	// (0x0009c24e) list_medium_line_t2_g2_g

0x73a3,	// (0x00093c3a) list_medium_line_t2_g2_t1_ParamLimits

0x73a3,	// (0x00093c3a) list_medium_line_t2_g2_t1

0x73bd,	// (0x00093c54) list_medium_line_t2_g2_t2_ParamLimits

0x73bd,	// (0x00093c54) list_medium_line_t2_g2_t2

0x0001,

0xf9bc,	// (0x0009c253) list_medium_line_t2_g2_t_ParamLimits

0xf9bc,	// (0x0009c253) list_medium_line_t2_g2_t

0xbb6f,	// (0x00098406) aid_sp_fs_list_icon_a_sm

0xbb77,	// (0x0009840e) aid_sp_fs_list_icon_d

0xbb7f,	// (0x00098416) aid_sp_fs_text_primary

0xbb88,	// (0x0009841f) aid_sp_fs_text_secondary

0xbb91,	// (0x00098428) list_medium_line

0xbb91,	// (0x00098428) list_medium_line_g2

0xbb91,	// (0x00098428) list_medium_line_g3

0xbb91,	// (0x00098428) list_medium_line_plain

0xbb91,	// (0x00098428) list_medium_line_plain_t2

0xbb91,	// (0x00098428) list_medium_line_plain_t3

0xbb91,	// (0x00098428) list_medium_line_right_icon

0xbb91,	// (0x00098428) list_medium_line_right_iconx2

0xbb91,	// (0x00098428) list_medium_line_t2

0xbb91,	// (0x00098428) list_medium_line_t2_g2

0xbb91,	// (0x00098428) list_medium_line_t2_g3

0xbb91,	// (0x00098428) list_medium_line_t2_right_icon

0xbb91,	// (0x00098428) list_medium_line_t2_right_iconx2

0xbb91,	// (0x00098428) list_medium_line_t3

0xbb91,	// (0x00098428) list_medium_line_t3_g2

0xbb91,	// (0x00098428) list_medium_line_t3_g3

0xbb91,	// (0x00098428) list_medium_line_t3_right_iconx2

0x7997,	// (0x0009422e) list_medium_line_t4_g4

0xbb9a,	// (0x00098431) list_medium_line_x2

0xbb9a,	// (0x00098431) list_medium_line_x2_t2_g2

0xbb9a,	// (0x00098431) list_medium_line_x2_t2_g3

0xbb9a,	// (0x00098431) list_medium_line_x2_t2_g4

0xbb9a,	// (0x00098431) list_medium_line_x2_t3

0xbb9a,	// (0x00098431) list_medium_line_x2_t3_g2

0xbb9a,	// (0x00098431) list_medium_line_x2_t3_g3

0xbb9a,	// (0x00098431) list_medium_line_x2_t3_g4

0xbb9a,	// (0x00098431) list_medium_line_x2_t4_g2

0xbb9a,	// (0x00098431) list_medium_line_x2_t4_g4

0xbba3,	// (0x0009843a) list_medium_line_x3

0xbba3,	// (0x0009843a) list_medium_line_x3_t4

0xbba3,	// (0x0009843a) list_medium_line_x3_t4_g4

0x7997,	// (0x0009422e) list_medium_line_x4_t4

0x7997,	// (0x0009422e) list_medium_line_x4_t4_g7

0x7997,	// (0x0009422e) list_medium_line_x4_t5

0x79a0,	// (0x00094237) list_single_fs_dyc_pane_ParamLimits

0x79a0,	// (0x00094237) list_single_fs_dyc_pane

0x1c77,	// (0x0008e50e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1c77,	// (0x0008e50e) list_medium_line_x4_t4_g7_g1

0x8069,	// (0x00094900) list_medium_line_x4_t4_g7_g2_ParamLimits

0x8069,	// (0x00094900) list_medium_line_x4_t4_g7_g2

0x8075,	// (0x0009490c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8075,	// (0x0009490c) list_medium_line_x4_t4_g7_g3

0x8084,	// (0x0009491b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8084,	// (0x0009491b) list_medium_line_x4_t4_g7_g4

0x8090,	// (0x00094927) list_medium_line_x4_t4_g7_g5_ParamLimits

0x8090,	// (0x00094927) list_medium_line_x4_t4_g7_g5

0x809f,	// (0x00094936) list_medium_line_x4_t4_g7_g6_ParamLimits

0x809f,	// (0x00094936) list_medium_line_x4_t4_g7_g6

0x80ae,	// (0x00094945) list_medium_line_x4_t4_g7_g7_ParamLimits

0x80ae,	// (0x00094945) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb87,	// (0x0009c41e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb87,	// (0x0009c41e) list_medium_line_x4_t4_g7_g

0x80ba,	// (0x00094951) list_medium_line_x4_t4_g7_t1_ParamLimits

0x80ba,	// (0x00094951) list_medium_line_x4_t4_g7_t1

0x80cf,	// (0x00094966) list_medium_line_x4_t4_g7_t2_ParamLimits

0x80cf,	// (0x00094966) list_medium_line_x4_t4_g7_t2

0x80e4,	// (0x0009497b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x80e4,	// (0x0009497b) list_medium_line_x4_t4_g7_t3

0x80f9,	// (0x00094990) list_medium_line_x4_t4_g7_t4_ParamLimits

0x80f9,	// (0x00094990) list_medium_line_x4_t4_g7_t4

0x810b,	// (0x000949a2) list_medium_line_x4_t4_g7_t5_ParamLimits

0x810b,	// (0x000949a2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb96,	// (0x0009c42d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb96,	// (0x0009c42d) list_medium_line_x4_t4_g7_t

0x811d,	// (0x000949b4) list_single_dyc_row_pane_ParamLimits

0x811d,	// (0x000949b4) list_single_dyc_row_pane

0x87c5,	// (0x0009505c) call5_gesture_pane_ParamLimits

0x87c5,	// (0x0009505c) call5_gesture_pane

0x880d,	// (0x000950a4) call5_windows_pane_ParamLimits

0x880d,	// (0x000950a4) call5_windows_pane

0x88be,	// (0x00095155) call5_swipe_1_pane_cp_ParamLimits

0x88be,	// (0x00095155) call5_swipe_1_pane_cp

0x88ca,	// (0x00095161) call5_swipe_2_pane_cp_ParamLimits

0x88ca,	// (0x00095161) call5_swipe_2_pane_cp

0xdfda,	// (0x0009a871) call5_image_pane_cp

0x88d6,	// (0x0009516d) popup_call5_audio_first_window_cp_ParamLimits

0x88d6,	// (0x0009516d) popup_call5_audio_first_window_cp

0xc685,	// (0x00098f1c) call5_swipe_1_pane_g1_cp_ParamLimits

0xc685,	// (0x00098f1c) call5_swipe_1_pane_g1_cp

0xc6b3,	// (0x00098f4a) call5_swipe_1_pane_g2_cp

0xc69e,	// (0x00098f35) call5_swipe_1_pane_t1_cp_ParamLimits

0xc69e,	// (0x00098f35) call5_swipe_1_pane_t1_cp

0xc685,	// (0x00098f1c) call5_swipe_2_pane_g1_cp_ParamLimits

0xc685,	// (0x00098f1c) call5_swipe_2_pane_g1_cp

0xc6bb,	// (0x00098f52) call5_swipe_2_pane_g2_cp

0xc6c3,	// (0x00098f5a) call5_swipe_2_pane_t1_cp_ParamLimits

0xc6c3,	// (0x00098f5a) call5_swipe_2_pane_t1_cp

0x47c0,	// (0x00091057) main_sp_fs_email_pane

0xc6d8,	// (0x00098f6f) main_sp_fs_listscroll_pane_te

0xc6e1,	// (0x00098f78) popup_sp_fs_action_menu_pane_ParamLimits

0xc6e1,	// (0x00098f78) popup_sp_fs_action_menu_pane

0xa929,	// (0x000971c0) bg_sp_fs_ctrlbar_pane_g1

0xaf29,	// (0x000977c0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xaf3b,	// (0x000977d2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xaf32,	// (0x000977c9) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa929,	// (0x000971c0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc84,	// (0x0009c51b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xa716,	// (0x00096fad) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xa716,	// (0x00096fad) bg_sp_fs_ctrlbar_ddmenu_pane

0xc715,	// (0x00098fac) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc715,	// (0x00098fac) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc721,	// (0x00098fb8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc721,	// (0x00098fb8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc8d,	// (0x0009c524) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc8d,	// (0x0009c524) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc72d,	// (0x00098fc4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc72d,	// (0x00098fc4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc747,	// (0x00098fde) list_medium_line_t2_right_icon_g1

0xc74f,	// (0x00098fe6) list_medium_line_t2_right_icon_t1

0x88e2,	// (0x00095179) list_medium_line_t2_right_icon_t2

0x0001,

0xfc92,	// (0x0009c529) list_medium_line_t2_right_icon_t

0xa415,	// (0x00096cac) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa415,	// (0x00096cac) bg_sp_fs_ctrlbar_pane

0x8936,	// (0x000951cd) main_sp_fs_ctrlbar_button_pane_cp01

0x893e,	// (0x000951d5) main_sp_fs_ctrlbar_ddmenu_pane

0xc797,	// (0x0009902e) main_sp_fs_ctrlbar_pane_g1

0xc7a3,	// (0x0009903a) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc97,	// (0x0009c52e) main_sp_fs_ctrlbar_pane_g

0xc7af,	// (0x00099046) main_sp_fs_ctrlbar_pane_t1

0x8948,	// (0x000951df) main_sp_fs_ctrlbar_pane

0x8969,	// (0x00095200) main_sp_fs_listscroll_pane_te_cp01

0x8989,	// (0x00095220) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8989,	// (0x00095220) popup_sp_fs_action_menu_pane_cp01

0x47c0,	// (0x00091057) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x47c0,	// (0x00091057) bg_sp_fs_highlight_list_pane_cp01

0xc7df,	// (0x00099076) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc7df,	// (0x00099076) sp_fs_action_menu_list_gene_pane_g1

0xc7ee,	// (0x00099085) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc7ee,	// (0x00099085) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfca1,	// (0x0009c538) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfca1,	// (0x0009c538) sp_fs_action_menu_list_gene_pane_g

0xc7fb,	// (0x00099092) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc7fb,	// (0x00099092) sp_fs_action_menu_list_gene_pane_t1

0xc813,	// (0x000990aa) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc813,	// (0x000990aa) sp_fs_action_menu_list_gene_pane

0xc832,	// (0x000990c9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc832,	// (0x000990c9) popup_sp_fs_action_menu_bg_pane

0xc840,	// (0x000990d7) sp_fs_action_menu_list_pane_ParamLimits

0xc840,	// (0x000990d7) sp_fs_action_menu_list_pane

0xc860,	// (0x000990f7) sp_fs_scroll_pane_cp01_ParamLimits

0xc860,	// (0x000990f7) sp_fs_scroll_pane_cp01

0x89b9,	// (0x00095250) list_medium_line_plain_t2_t1

0x89c9,	// (0x00095260) list_medium_line_plain_t2_t2

0x0001,

0xfca6,	// (0x0009c53d) list_medium_line_plain_t2_t

0x89d7,	// (0x0009526e) list_medium_line_plain_t3_t1

0x89e7,	// (0x0009527e) list_medium_line_plain_t3_t2

0x89f5,	// (0x0009528c) list_medium_line_plain_t3_t3

0x0002,

0xfcab,	// (0x0009c542) list_medium_line_plain_t3_t

0x1c77,	// (0x0008e50e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1c77,	// (0x0008e50e) list_medium_line_x2_t2_g2_g1

0x1c8f,	// (0x0008e526) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1c8f,	// (0x0008e526) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0009bad9) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0009bad9) list_medium_line_x2_t2_g2_g

0x2d2d,	// (0x0008f5c4) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2d2d,	// (0x0008f5c4) list_medium_line_x2_t2_g2_t1

0x1cc2,	// (0x0008e559) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1cc2,	// (0x0008e559) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcb2,	// (0x0009c549) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcb2,	// (0x0009c549) list_medium_line_x2_t2_g2_t

0x1c77,	// (0x0008e50e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1c77,	// (0x0008e50e) list_medium_line_x2_t4_g2_g1

0x8a03,	// (0x0009529a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8a03,	// (0x0009529a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcb7,	// (0x0009c54e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcb7,	// (0x0009c54e) list_medium_line_x2_t4_g2_g

0x8a14,	// (0x000952ab) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8a14,	// (0x000952ab) list_medium_line_x2_t4_g2_t1

0x8a2b,	// (0x000952c2) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8a2b,	// (0x000952c2) list_medium_line_x2_t4_g2_t2

0x8a40,	// (0x000952d7) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8a40,	// (0x000952d7) list_medium_line_x2_t4_g2_t3

0x1cc2,	// (0x0008e559) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1cc2,	// (0x0008e559) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcbc,	// (0x0009c553) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcbc,	// (0x0009c553) list_medium_line_x2_t4_g2_t

0xc886,	// (0x0009911d) list_medium_line_t3_right_iconx2_g1

0xc747,	// (0x00098fde) list_medium_line_t3_right_iconx2_g2

0x8a52,	// (0x000952e9) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcc5,	// (0x0009c55c) list_medium_line_t3_right_iconx2_g

0x8a5a,	// (0x000952f1) list_medium_line_t3_right_iconx2_t1

0x8a6a,	// (0x00095301) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfccc,	// (0x0009c563) list_medium_line_t3_right_iconx2_t

0x1c77,	// (0x0008e50e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1c77,	// (0x0008e50e) list_medium_line_x3_t4_g4_g1

0x1c83,	// (0x0008e51a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1c83,	// (0x0008e51a) list_medium_line_x3_t4_g4_g2

0x1d0b,	// (0x0008e5a2) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1d0b,	// (0x0008e5a2) list_medium_line_x3_t4_g4_g3

0x8a78,	// (0x0009530f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8a78,	// (0x0009530f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcd1,	// (0x0009c568) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcd1,	// (0x0009c568) list_medium_line_x3_t4_g4_g

0x8a84,	// (0x0009531b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8a84,	// (0x0009531b) list_medium_line_x3_t4_g4_t1

0x8a9b,	// (0x00095332) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8a9b,	// (0x00095332) list_medium_line_x3_t4_g4_t2

0x8ab0,	// (0x00095347) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8ab0,	// (0x00095347) list_medium_line_x3_t4_g4_t3

0x8ac5,	// (0x0009535c) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8ac5,	// (0x0009535c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcda,	// (0x0009c571) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcda,	// (0x0009c571) list_medium_line_x3_t4_g4_t

0x8ae2,	// (0x00095379) list_single_dyc_row_text_pane_t1_ParamLimits

0x8ae2,	// (0x00095379) list_single_dyc_row_text_pane_t1

0x8b19,	// (0x000953b0) list_single_dyc_row_text_pane_t2_ParamLimits

0x8b19,	// (0x000953b0) list_single_dyc_row_text_pane_t2

0xc88e,	// (0x00099125) list_single_dyc_row_text_pane_t3_ParamLimits

0xc88e,	// (0x00099125) list_single_dyc_row_text_pane_t3

0x0005,

0xfce3,	// (0x0009c57a) list_single_dyc_row_text_pane_t_ParamLimits

0xfce3,	// (0x0009c57a) list_single_dyc_row_text_pane_t

0xc8b2,	// (0x00099149) list_single_dyc_row_pane_g1_ParamLimits

0xc8b2,	// (0x00099149) list_single_dyc_row_pane_g1

0xc8be,	// (0x00099155) list_single_dyc_row_pane_g2_ParamLimits

0xc8be,	// (0x00099155) list_single_dyc_row_pane_g2

0xc8ca,	// (0x00099161) list_single_dyc_row_pane_g3_ParamLimits

0xc8ca,	// (0x00099161) list_single_dyc_row_pane_g3

0xc8d6,	// (0x0009916d) list_single_dyc_row_pane_g4_ParamLimits

0xc8d6,	// (0x0009916d) list_single_dyc_row_pane_g4

0x0003,

0xfcf0,	// (0x0009c587) list_single_dyc_row_pane_g_ParamLimits

0xfcf0,	// (0x0009c587) list_single_dyc_row_pane_g

0xc8e2,	// (0x00099179) list_single_dyc_row_text_pane_ParamLimits

0xc8e2,	// (0x00099179) list_single_dyc_row_text_pane

0xd45f,	// (0x00099cf6) bg_sp_fs_scroll_pane

0xc901,	// (0x00099198) thumb_sp_fs_scroll_pane

0xb848,	// (0x000980df) list_medium_line_g1_ParamLimits

0xb848,	// (0x000980df) list_medium_line_g1

0xc90a,	// (0x000991a1) list_medium_line_t1_ParamLimits

0xc90a,	// (0x000991a1) list_medium_line_t1

0x1c77,	// (0x0008e50e) list_medium_line_x2_g1_ParamLimits

0x1c77,	// (0x0008e50e) list_medium_line_x2_g1

0x1c83,	// (0x0008e51a) list_medium_line_x2_g2_ParamLimits

0x1c83,	// (0x0008e51a) list_medium_line_x2_g2

0x0001,

0xfcf9,	// (0x0009c590) list_medium_line_x2_g_ParamLimits

0xfcf9,	// (0x0009c590) list_medium_line_x2_g

0xc91f,	// (0x000991b6) list_medium_line_x2_t1_ParamLimits

0xc91f,	// (0x000991b6) list_medium_line_x2_t1

0x1c77,	// (0x0008e50e) list_medium_line_x3_g1_ParamLimits

0x1c77,	// (0x0008e50e) list_medium_line_x3_g1

0x1c83,	// (0x0008e51a) list_medium_line_x3_g2_ParamLimits

0x1c83,	// (0x0008e51a) list_medium_line_x3_g2

0x0001,

0xfcf9,	// (0x0009c590) list_medium_line_x3_g_ParamLimits

0xfcf9,	// (0x0009c590) list_medium_line_x3_g

0xc91f,	// (0x000991b6) list_medium_line_x3_t1_ParamLimits

0xc91f,	// (0x000991b6) list_medium_line_x3_t1

0xc935,	// (0x000991cc) thumb_sp_fs_scroll_pane_g1

0xc93e,	// (0x000991d5) thumb_sp_fs_scroll_pane_g2

0xc947,	// (0x000991de) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcfe,	// (0x0009c595) thumb_sp_fs_scroll_pane_g

0xc935,	// (0x000991cc) bg_sp_fs_scroll_pane_g1

0xc93e,	// (0x000991d5) bg_sp_fs_scroll_pane_g2

0xc947,	// (0x000991de) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcfe,	// (0x0009c595) bg_sp_fs_scroll_pane_g

0x1c77,	// (0x0008e50e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1c77,	// (0x0008e50e) list_medium_line_x2_t3_g4_g1

0x1cff,	// (0x0008e596) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1cff,	// (0x0008e596) list_medium_line_x2_t3_g4_g2

0x1c83,	// (0x0008e51a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1c83,	// (0x0008e51a) list_medium_line_x2_t3_g4_g3

0x1c8f,	// (0x0008e526) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1c8f,	// (0x0008e526) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0009bb55) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0009bb55) list_medium_line_x2_t3_g4_g

0x8c3c,	// (0x000954d3) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8c3c,	// (0x000954d3) list_medium_line_x2_t3_g4_t1

0x8c52,	// (0x000954e9) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8c52,	// (0x000954e9) list_medium_line_x2_t3_g4_t2

0x1cc2,	// (0x0008e559) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1cc2,	// (0x0008e559) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd05,	// (0x0009c59c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd05,	// (0x0009c59c) list_medium_line_x2_t3_g4_t

0xb848,	// (0x000980df) list_medium_line_g2_g1_ParamLimits

0xb848,	// (0x000980df) list_medium_line_g2_g1

0xb854,	// (0x000980eb) list_medium_line_g2_g2_ParamLimits

0xb854,	// (0x000980eb) list_medium_line_g2_g2

0x0001,

0xf9b7,	// (0x0009c24e) list_medium_line_g2_g_ParamLimits

0xf9b7,	// (0x0009c24e) list_medium_line_g2_g

0xc950,	// (0x000991e7) list_medium_line_g2_t1_ParamLimits

0xc950,	// (0x000991e7) list_medium_line_g2_t1

0xb848,	// (0x000980df) list_medium_line_t3_g2_g1_ParamLimits

0xb848,	// (0x000980df) list_medium_line_t3_g2_g1

0xb854,	// (0x000980eb) list_medium_line_t3_g2_g2_ParamLimits

0xb854,	// (0x000980eb) list_medium_line_t3_g2_g2

0x0001,

0xf9b7,	// (0x0009c24e) list_medium_line_t3_g2_g_ParamLimits

0xf9b7,	// (0x0009c24e) list_medium_line_t3_g2_g

0x8c6b,	// (0x00095502) list_medium_line_t3_g2_t1_ParamLimits

0x8c6b,	// (0x00095502) list_medium_line_t3_g2_t1

0x8c82,	// (0x00095519) list_medium_line_t3_g2_t2_ParamLimits

0x8c82,	// (0x00095519) list_medium_line_t3_g2_t2

0x8c97,	// (0x0009552e) list_medium_line_t3_g2_t3_ParamLimits

0x8c97,	// (0x0009552e) list_medium_line_t3_g2_t3

0x0002,

0xfd0c,	// (0x0009c5a3) list_medium_line_t3_g2_t_ParamLimits

0xfd0c,	// (0x0009c5a3) list_medium_line_t3_g2_t

0xc747,	// (0x00098fde) list_medium_line_right_icon_g1

0xc965,	// (0x000991fc) list_medium_line_right_icon_t1

0xb848,	// (0x000980df) list_medium_line_t2_g1_ParamLimits

0xb848,	// (0x000980df) list_medium_line_t2_g1

0xc973,	// (0x0009920a) list_medium_line_t2_t1_ParamLimits

0xc973,	// (0x0009920a) list_medium_line_t2_t1

0x8cac,	// (0x00095543) list_medium_line_t2_t2_ParamLimits

0x8cac,	// (0x00095543) list_medium_line_t2_t2

0x0001,

0xfd13,	// (0x0009c5aa) list_medium_line_t2_t_ParamLimits

0xfd13,	// (0x0009c5aa) list_medium_line_t2_t

0xb848,	// (0x000980df) list_medium_line_t3_g1_ParamLimits

0xb848,	// (0x000980df) list_medium_line_t3_g1

0x8cc1,	// (0x00095558) list_medium_line_t3_t1_ParamLimits

0x8cc1,	// (0x00095558) list_medium_line_t3_t1

0x8cd8,	// (0x0009556f) list_medium_line_t3_t2_ParamLimits

0x8cd8,	// (0x0009556f) list_medium_line_t3_t2

0x8ced,	// (0x00095584) list_medium_line_t3_t3_ParamLimits

0x8ced,	// (0x00095584) list_medium_line_t3_t3

0x0002,

0xfd18,	// (0x0009c5af) list_medium_line_t3_t_ParamLimits

0xfd18,	// (0x0009c5af) list_medium_line_t3_t

0xb848,	// (0x000980df) list_medium_line_g3_g1_ParamLimits

0xb848,	// (0x000980df) list_medium_line_g3_g1

0xc98d,	// (0x00099224) list_medium_line_g3_g2_ParamLimits

0xc98d,	// (0x00099224) list_medium_line_g3_g2

0xb854,	// (0x000980eb) list_medium_line_g3_g3_ParamLimits

0xb854,	// (0x000980eb) list_medium_line_g3_g3

0x0002,

0xfd1f,	// (0x0009c5b6) list_medium_line_g3_g_ParamLimits

0xfd1f,	// (0x0009c5b6) list_medium_line_g3_g

0xc999,	// (0x00099230) list_medium_line_g3_t1_ParamLimits

0xc999,	// (0x00099230) list_medium_line_g3_t1

0xb848,	// (0x000980df) list_medium_line_t2_g3_g1_ParamLimits

0xb848,	// (0x000980df) list_medium_line_t2_g3_g1

0xc98d,	// (0x00099224) list_medium_line_t2_g3_g2_ParamLimits

0xc98d,	// (0x00099224) list_medium_line_t2_g3_g2

0xb854,	// (0x000980eb) list_medium_line_t2_g3_g3_ParamLimits

0xb854,	// (0x000980eb) list_medium_line_t2_g3_g3

0x0002,

0xfd1f,	// (0x0009c5b6) list_medium_line_t2_g3_g_ParamLimits

0xfd1f,	// (0x0009c5b6) list_medium_line_t2_g3_g

0x8cff,	// (0x00095596) list_medium_line_t2_g3_t1_ParamLimits

0x8cff,	// (0x00095596) list_medium_line_t2_g3_t1

0x8d16,	// (0x000955ad) list_medium_line_t2_g3_t2_ParamLimits

0x8d16,	// (0x000955ad) list_medium_line_t2_g3_t2

0x0001,

0xfd26,	// (0x0009c5bd) list_medium_line_t2_g3_t_ParamLimits

0xfd26,	// (0x0009c5bd) list_medium_line_t2_g3_t

0xb848,	// (0x000980df) list_medium_line_t3_g3_g1_ParamLimits

0xb848,	// (0x000980df) list_medium_line_t3_g3_g1

0xc98d,	// (0x00099224) list_medium_line_t3_g3_g2_ParamLimits

0xc98d,	// (0x00099224) list_medium_line_t3_g3_g2

0xb854,	// (0x000980eb) list_medium_line_t3_g3_g3_ParamLimits

0xb854,	// (0x000980eb) list_medium_line_t3_g3_g3

0x0002,

0xfd1f,	// (0x0009c5b6) list_medium_line_t3_g3_g_ParamLimits

0xfd1f,	// (0x0009c5b6) list_medium_line_t3_g3_g

0x8d2b,	// (0x000955c2) list_medium_line_t3_g3_t1_ParamLimits

0x8d2b,	// (0x000955c2) list_medium_line_t3_g3_t1

0x8d44,	// (0x000955db) list_medium_line_t3_g3_t2_ParamLimits

0x8d44,	// (0x000955db) list_medium_line_t3_g3_t2

0x8d5a,	// (0x000955f1) list_medium_line_t3_g3_t3_ParamLimits

0x8d5a,	// (0x000955f1) list_medium_line_t3_g3_t3

0x0002,

0xfd2b,	// (0x0009c5c2) list_medium_line_t3_g3_t_ParamLimits

0xfd2b,	// (0x0009c5c2) list_medium_line_t3_g3_t

0xc886,	// (0x0009911d) list_medium_line_right_iconx2_g1

0xc747,	// (0x00098fde) list_medium_line_right_iconx2_g2

0x0001,

0xfd32,	// (0x0009c5c9) list_medium_line_right_iconx2_g

0xc9ae,	// (0x00099245) list_medium_line_right_iconx2_t1

0xc886,	// (0x0009911d) list_medium_line_t2_right_iconx2_g1

0xc747,	// (0x00098fde) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd32,	// (0x0009c5c9) list_medium_line_t2_right_iconx2_g

0x8d70,	// (0x00095607) list_medium_line_t2_right_iconx2_t1

0x8d80,	// (0x00095617) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd37,	// (0x0009c5ce) list_medium_line_t2_right_iconx2_t

0x8d8e,	// (0x00095625) list_medium_line_x4_t4_t1

0x8d9c,	// (0x00095633) list_medium_line_x4_t4_t2

0x8dac,	// (0x00095643) list_medium_line_x4_t4_t3

0x8dbc,	// (0x00095653) list_medium_line_x4_t4_t4

0x0003,

0xfd3c,	// (0x0009c5d3) list_medium_line_x4_t4_t

0x8e05,	// (0x0009569c) tport_appsw_pane_ParamLimits

0x8e05,	// (0x0009569c) tport_appsw_pane

0x8e16,	// (0x000956ad) tport_contact_pane_ParamLimits

0x8e16,	// (0x000956ad) tport_contact_pane

0x8e2a,	// (0x000956c1) tport_listscroll_pane_ParamLimits

0x8e2a,	// (0x000956c1) tport_listscroll_pane

0x8e42,	// (0x000956d9) cell_tport_appsw_pane_ParamLimits

0x8e42,	// (0x000956d9) cell_tport_appsw_pane

0xb5d1,	// (0x00097e68) tport_appsw_pane_g1_ParamLimits

0xb5d1,	// (0x00097e68) tport_appsw_pane_g1

0xc9bc,	// (0x00099253) tport_contact_pane_g1

0xc9c5,	// (0x0009925c) tport_contact_pane_t1

0xc9d3,	// (0x0009926a) tport_contact_pane_t2

0x0001,

0xfd45,	// (0x0009c5dc) tport_contact_pane_t

0xc9e1,	// (0x00099278) list_tport_pane

0xdf10,	// (0x0009a7a7) scroll_pane_cp_030

0xc9f2,	// (0x00099289) cell_tport_appsw_pane_g1

0xca02,	// (0x00099299) cell_tport_appsw_pane_t1

0xca10,	// (0x000992a7) grid_highlight_pane_cp019

0x8e78,	// (0x0009570f) list_tport_double_graphic_pane_ParamLimits

0x8e78,	// (0x0009570f) list_tport_double_graphic_pane

0x47c0,	// (0x00091057) list_highlight_pane_cp023_ParamLimits

0x47c0,	// (0x00091057) list_highlight_pane_cp023

0x8e85,	// (0x0009571c) list_tport_double_graphic_pane_g1_ParamLimits

0x8e85,	// (0x0009571c) list_tport_double_graphic_pane_g1

0x8e92,	// (0x00095729) list_tport_double_graphic_pane_t1_ParamLimits

0x8e92,	// (0x00095729) list_tport_double_graphic_pane_t1

0x8ea7,	// (0x0009573e) list_tport_double_graphic_pane_t2_ParamLimits

0x8ea7,	// (0x0009573e) list_tport_double_graphic_pane_t2

0x0001,

0xfd51,	// (0x0009c5e8) list_tport_double_graphic_pane_t_ParamLimits

0xfd51,	// (0x0009c5e8) list_tport_double_graphic_pane_t

0xd45f,	// (0x00099cf6) main_cale_note_pane

0x6b9d,	// (0x00093434) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6b9d,	// (0x00093434) cell_vitu2_function_top_wide_pane_cp01

0x8468,	// (0x00094cff) wait_bar_pane_cp05_ParamLimits

0x47c0,	// (0x00091057) listscroll_cmail_pane

0xca18,	// (0x000992af) list_cmail_pane

0x8eb9,	// (0x00095750) list_cmail_body_pane

0x8eb9,	// (0x00095750) list_single_cmail_header_caption_pane

0x8ed0,	// (0x00095767) list_single_cmail_header_detail_pane_ParamLimits

0x8ed0,	// (0x00095767) list_single_cmail_header_detail_pane

0xca34,	// (0x000992cb) list_single_cmail_header_caption_pane_t1

0x8ef9,	// (0x00095790) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8ef9,	// (0x00095790) list_single_cmail_header_detail_pane_g1

0xca4b,	// (0x000992e2) list_single_cmail_header_detail_pane_g2_ParamLimits

0xca4b,	// (0x000992e2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd56,	// (0x0009c5ed) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd56,	// (0x0009c5ed) list_single_cmail_header_detail_pane_g

0x8f0f,	// (0x000957a6) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8f0f,	// (0x000957a6) list_single_cmail_header_detail_pane_t1

0xca88,	// (0x0009931f) list_single_cmail_header_editor_pane_bg_ParamLimits

0xca88,	// (0x0009931f) list_single_cmail_header_editor_pane_bg

0xca9f,	// (0x00099336) list_cmail_body_pane_g1

0xcaa8,	// (0x0009933f) list_cmail_body_pane_t1

0xb60e,	// (0x00097ea5) list_single_cmail_header_editor_pane_bg_g1

0xe280,	// (0x0009ab17) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb61e,	// (0x00097eb5) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb616,	// (0x00097ead) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb840,	// (0x000980d7) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb63e,	// (0x00097ed5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb62e,	// (0x00097ec5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb636,	// (0x00097ecd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe260,	// (0x0009aaf7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8f4b,	// (0x000957e2) calenote_gesture_pane_ParamLimits

0x8f4b,	// (0x000957e2) calenote_gesture_pane

0x8f67,	// (0x000957fe) calenote_window_pane_ParamLimits

0x8f67,	// (0x000957fe) calenote_window_pane

0xcab6,	// (0x0009934d) popup_note_window_cp01

0x8f83,	// (0x0009581a) calenote_swipe_1_pane_ParamLimits

0x8f83,	// (0x0009581a) calenote_swipe_1_pane

0x88ca,	// (0x00095161) calenote_swipe_2_pane_ParamLimits

0x88ca,	// (0x00095161) calenote_swipe_2_pane

0xc685,	// (0x00098f1c) calenote_swipe_1_pane_g1_ParamLimits

0xc685,	// (0x00098f1c) calenote_swipe_1_pane_g1

0xc692,	// (0x00098f29) calenote_swipe_1_pane_g2_ParamLimits

0xc692,	// (0x00098f29) calenote_swipe_1_pane_g2

0x0001,

0xfc7a,	// (0x0009c511) calenote_swipe_1_pane_g_ParamLimits

0xfc7a,	// (0x0009c511) calenote_swipe_1_pane_g

0xcac8,	// (0x0009935f) calenote_swipe_1_pane_t1_ParamLimits

0xcac8,	// (0x0009935f) calenote_swipe_1_pane_t1

0xc685,	// (0x00098f1c) calenote_swipe_2_pane_g1_ParamLimits

0xc685,	// (0x00098f1c) calenote_swipe_2_pane_g1

0xcae7,	// (0x0009937e) calenote_swipe_2_pane_g2_ParamLimits

0xcae7,	// (0x0009937e) calenote_swipe_2_pane_g2

0x0001,

0xfd62,	// (0x0009c5f9) calenote_swipe_2_pane_g_ParamLimits

0xfd62,	// (0x0009c5f9) calenote_swipe_2_pane_g

0xcaf3,	// (0x0009938a) calenote_swipe_2_pane_t1_ParamLimits

0xcaf3,	// (0x0009938a) calenote_swipe_2_pane_t1

0xd45f,	// (0x00099cf6) main_mup_navstr_pane

0x59e3,	// (0x0009227a) main_mup3_pane_t7_ParamLimits

0x59e3,	// (0x0009227a) main_mup3_pane_t7

0xb2b9,	// (0x00097b50) main_mp4_pane_g6_ParamLimits

0xb2b9,	// (0x00097b50) main_mp4_pane_g6

0xb513,	// (0x00097daa) main_image3_pane_t4_ParamLimits

0xb513,	// (0x00097daa) main_image3_pane_t4

0x8f98,	// (0x0009582f) popup_navstr_preview_pane_ParamLimits

0x8f98,	// (0x0009582f) popup_navstr_preview_pane

0x8fa8,	// (0x0009583f) scroll_navstr_pane_ParamLimits

0x8fa8,	// (0x0009583f) scroll_navstr_pane

0xd45f,	// (0x00099cf6) bg_popup_preview_window_pane_cp04

0xcb1a,	// (0x000993b1) popup_navstr_preview_pane_t1

0x8fbc,	// (0x00095853) scroll_navstr_pane_g1_ParamLimits

0x8fbc,	// (0x00095853) scroll_navstr_pane_g1

0x8fd0,	// (0x00095867) scroll_navstr_pane_t1_ParamLimits

0x8fd0,	// (0x00095867) scroll_navstr_pane_t1

0xcabf,	// (0x00099356) bg_button_pane_cp014

0xcabf,	// (0x00099356) bg_button_pane_cp030

0x876b,	// (0x00095002) list_double_fisheye_pane_g4_ParamLimits

0x876b,	// (0x00095002) list_double_fisheye_pane_g4

0x8777,	// (0x0009500e) list_double_fisheye_pane_g5_ParamLimits

0x8777,	// (0x0009500e) list_double_fisheye_pane_g5

0xca28,	// (0x000992bf) sp_fs_scroll_pane_cp03

0xc797,	// (0x0009902e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc7a3,	// (0x0009903a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc97,	// (0x0009c52e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc7af,	// (0x00099046) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xca20,	// (0x000992b7) sp_fs_scroll_pane_cp02

0xdf22,	// (0x0009a7b9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xdf22,	// (0x0009a7b9) popup_sp_fs_calendar_preview_list_single_pane

0xd45f,	// (0x00099cf6) main_cam6_pano_pane

0x9f2b,	// (0x000967c2) main_mup3_pane_ParamLimits

0xd45f,	// (0x00099cf6) main_phacti_pane

0x835b,	// (0x00094bf2) bg_button_pane_cp11

0x8373,	// (0x00094c0a) main_mobtv_info_pane_g2_ParamLimits

0x8373,	// (0x00094c0a) main_mobtv_info_pane_g2

0x0001,

0xfbf7,	// (0x0009c48e) main_mobtv_info_pane_g_ParamLimits

0xfbf7,	// (0x0009c48e) main_mobtv_info_pane_g

0x8528,	// (0x00094dbf) sc_clock_pane_t5_ParamLimits

0x8528,	// (0x00094dbf) sc_clock_pane_t5

0x85d3,	// (0x00094e6a) main_radioblah_pane_g1_ParamLimits

0xc5c8,	// (0x00098e5f) main_radioblah_pane_t3_ParamLimits

0xc5c8,	// (0x00098e5f) main_radioblah_pane_t3

0xc5e0,	// (0x00098e77) main_radioblah_pane_t4_ParamLimits

0xc5e0,	// (0x00098e77) main_radioblah_pane_t4

0x85fb,	// (0x00094e92) main_radioblah_text_pane_ParamLimits

0x85fb,	// (0x00094e92) main_radioblah_text_pane

0x860d,	// (0x00094ea4) main_radioblah_info_pane_g1_ParamLimits

0x86a0,	// (0x00094f37) main_radioblah_info_pane_t4_ParamLimits

0x86a0,	// (0x00094f37) main_radioblah_info_pane_t4

0x47c0,	// (0x00091057) main_sp_fs_calendar_pane

0x8fe6,	// (0x0009587d) main_phacti_pane_g1

0x8fee,	// (0x00095885) phacti_note_pane_ParamLimits

0x8fee,	// (0x00095885) phacti_note_pane

0xcb31,	// (0x000993c8) phacti_term_pane_ParamLimits

0xcb31,	// (0x000993c8) phacti_term_pane

0xcb46,	// (0x000993dd) phacti_note_pane_t1_ParamLimits

0xcb46,	// (0x000993dd) phacti_note_pane_t1

0xcb5d,	// (0x000993f4) phacti_term_pane_g1

0xcb65,	// (0x000993fc) phacti_term_pane_t1_ParamLimits

0xcb65,	// (0x000993fc) phacti_term_pane_t1

0xcb8f,	// (0x00099426) popup_sp_fs_calendar_preview_list_single_pane_g1

0xcb97,	// (0x0009942e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd6c,	// (0x0009c603) popup_sp_fs_calendar_preview_list_single_pane_g

0xcb9f,	// (0x00099436) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcb9f,	// (0x00099436) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcbb5,	// (0x0009944c) aid_popup_sp_fs_bg_corner_pane

0xa929,	// (0x000971c0) popup_sp_fs_calendar_preview_bg_pane_g1

0xd45f,	// (0x00099cf6) popup_sp_fs_calendar_preview_bg_pane

0xcbbd,	// (0x00099454) popup_sp_fs_calendar_preview_list_pane

0xa415,	// (0x00096cac) bg_main_sp_fs_cale_pane_ParamLimits

0xa415,	// (0x00096cac) bg_main_sp_fs_cale_pane

0xcbce,	// (0x00099465) listscroll_cale_mrui_pane_ParamLimits

0xcbce,	// (0x00099465) listscroll_cale_mrui_pane

0xcbe3,	// (0x0009947a) listscroll_sp_fs_schedule_track_pane

0xcbec,	// (0x00099483) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcbec,	// (0x00099483) main_sp_fs_ctrlbar_pane_cp01

0xcbff,	// (0x00099496) main_sp_fs_ribbon_pane

0xcc07,	// (0x0009949e) popup_sp_fs_cale_preview_window

0x9051,	// (0x000958e8) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9051,	// (0x000958e8) list_single_sp_fs_schedule_track_pane

0x47c0,	// (0x00091057) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x47c0,	// (0x00091057) bg_sp_fs_highlight_list_pane_cp03

0x9065,	// (0x000958fc) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9065,	// (0x000958fc) list_single_sp_fs_schedule_track_pane_g1

0x9071,	// (0x00095908) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9071,	// (0x00095908) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd71,	// (0x0009c608) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd71,	// (0x0009c608) list_single_sp_fs_schedule_track_pane_g

0x907d,	// (0x00095914) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x907d,	// (0x00095914) list_single_sp_fs_schedule_track_pane_t1

0x9097,	// (0x0009592e) sp_fs_schedule_track_pane_ParamLimits

0x9097,	// (0x0009592e) sp_fs_schedule_track_pane

0xcc19,	// (0x000994b0) sp_fs_schedule_track_pane_g1

0xcc21,	// (0x000994b8) sp_fs_schedule_track_pane_g2

0xcc29,	// (0x000994c0) sp_fs_schedule_track_pane_g3

0xcc31,	// (0x000994c8) sp_fs_schedule_track_pane_g4

0xcc39,	// (0x000994d0) sp_fs_schedule_track_pane_g5

0x0004,

0xfd76,	// (0x0009c60d) sp_fs_schedule_track_pane_g

0xb60e,	// (0x00097ea5) bg_sp_fs_schedule_viewer_highlight_g1

0xe280,	// (0x0009ab17) bg_sp_fs_schedule_viewer_highlight_g2

0xb616,	// (0x00097ead) bg_sp_fs_schedule_viewer_highlight_g3

0xb61e,	// (0x00097eb5) bg_sp_fs_schedule_viewer_highlight_g4

0xb840,	// (0x000980d7) bg_sp_fs_schedule_viewer_highlight_g5

0xb62e,	// (0x00097ec5) bg_sp_fs_schedule_viewer_highlight_g6

0xb636,	// (0x00097ecd) bg_sp_fs_schedule_viewer_highlight_g7

0xb63e,	// (0x00097ed5) bg_sp_fs_schedule_viewer_highlight_g8

0xe260,	// (0x0009aaf7) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd81,	// (0x0009c618) bg_sp_fs_schedule_viewer_highlight_g

0xd45f,	// (0x00099cf6) bg_main_sp_fs_ribbon_pane

0x90a8,	// (0x0009593f) main_sp_fs_ribbon_pane_g1

0xcc41,	// (0x000994d8) main_sp_fs_ribbon_pane_t1

0x90b1,	// (0x00095948) main_sp_fs_ribbon_pane_t2

0xcc50,	// (0x000994e7) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd94,	// (0x0009c62b) main_sp_fs_ribbon_pane_t

0xcc5f,	// (0x000994f6) main_sp_fs_ribbon_scheduler_pane

0xcc67,	// (0x000994fe) bg_main_sp_fs_ribbon_pane_g1

0xcc70,	// (0x00099507) bg_main_sp_fs_ribbon_pane_g2

0xcc79,	// (0x00099510) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd9b,	// (0x0009c632) bg_main_sp_fs_ribbon_pane_g

0xcc81,	// (0x00099518) main_sp_fs_ribbon_scheduler_pane_g1

0xcc8a,	// (0x00099521) main_sp_fs_ribbon_scheduler_pane_g2

0xcc93,	// (0x0009952a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfda2,	// (0x0009c639) main_sp_fs_ribbon_scheduler_pane_g

0xcc9c,	// (0x00099533) list_cale_mrui_pane

0x90c0,	// (0x00095957) sp_fs_scroll_pane_cp07_ParamLimits

0x90c0,	// (0x00095957) sp_fs_scroll_pane_cp07

0x90d8,	// (0x0009596f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x90d8,	// (0x0009596f) bg_sp_fs_schedule_viewer_highlight

0xcca9,	// (0x00099540) list_single_sp_fs_schedule_track_pane_cp01

0xccb1,	// (0x00099548) list_sp_fs_schedule_track_pane

0xccb9,	// (0x00099550) sp_fs_scroll_pane_cp06_ParamLimits

0xccb9,	// (0x00099550) sp_fs_scroll_pane_cp06

0xa929,	// (0x000971c0) bgmain_sp_fs_calendar_pane_g1

0x90e8,	// (0x0009597f) list_single_cale_mrui_pane_ParamLimits

0x90e8,	// (0x0009597f) list_single_cale_mrui_pane

0xcccb,	// (0x00099562) list_single_cale_mrui_row_pane_ParamLimits

0xcccb,	// (0x00099562) list_single_cale_mrui_row_pane

0xcce1,	// (0x00099578) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcce1,	// (0x00099578) list_single_cale_mrui_row_pane_g1

0xcd26,	// (0x000995bd) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcd26,	// (0x000995bd) list_single_cale_mrui_row_pane_t1

0x9108,	// (0x0009599f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9108,	// (0x0009599f) list_single_cale_mrui_row_pane_t2

0xcd38,	// (0x000995cf) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcd38,	// (0x000995cf) list_single_cale_mrui_row_pane_t3

0xcd67,	// (0x000995fe) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcd67,	// (0x000995fe) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdb0,	// (0x0009c647) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdb0,	// (0x0009c647) list_single_cale_mrui_row_pane_t

0x916e,	// (0x00095a05) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x916e,	// (0x00095a05) list_single_cmail_header_editor_pane_bg_cp01

0x9192,	// (0x00095a29) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9192,	// (0x00095a29) list_single_cmail_header_editor_pane_bg_cp02

0x91b0,	// (0x00095a47) main_radioblah_text_pane_t1_ParamLimits

0x91b0,	// (0x00095a47) main_radioblah_text_pane_t1

0xcd96,	// (0x0009962d) cam6_indi_pane_cp01

0xcd9e,	// (0x00099635) cam6_mode_pane_cp01

0xcda6,	// (0x0009963d) cam6_pano_pane

0xcdaf,	// (0x00099646) cam6_zoom_pane_cp01

0xcdb7,	// (0x0009964e) cam6_pano_image_pane

0xcdc0,	// (0x00099657) cam6_pano_pane_g1

0xc32f,	// (0x00098bc6) cam6_pano_pane_g2

0xcdc9,	// (0x00099660) cam6_pano_pane_g3

0xcdd2,	// (0x00099669) cam6_pano_pane_g4

0xaf16,	// (0x000977ad) cam6_pano_pane_g5

0xcddb,	// (0x00099672) cam6_pano_pane_g6

0xcde3,	// (0x0009967a) cam6_pano_pane_g7

0xcdeb,	// (0x00099682) cam6_pano_pane_g8

0xcdf4,	// (0x0009968b) cam6_pano_pane_g9

0x0008,

0xfdb9,	// (0x0009c650) cam6_pano_pane_g

0xd45f,	// (0x00099cf6) main_browser_tag_pane

0xcb12,	// (0x000993a9) grid_navstr_albumart_pane

0xcdfd,	// (0x00099694) cell_navstr_albumart_pane_ParamLimits

0xcdfd,	// (0x00099694) cell_navstr_albumart_pane

0xeb69,	// (0x0009b400) cell_navstr_albumart_pane_g1

0xa1e6,	// (0x00096a7d) cell_navstr_albumart_pane_g2

0xa1f6,	// (0x00096a8d) cell_navstr_albumart_pane_g3

0xa1ee,	// (0x00096a85) cell_navstr_albumart_pane_g4

0x0003,

0xfdcc,	// (0x0009c663) cell_navstr_albumart_pane_g

0x91c9,	// (0x00095a60) bt_list_pane_ParamLimits

0x91c9,	// (0x00095a60) bt_list_pane

0x91dc,	// (0x00095a73) bt_list_pane_t1

0x91eb,	// (0x00095a82) bt_list_pane_t2

0x0001,

0xfdd5,	// (0x0009c66c) bt_list_pane_t

0xd45f,	// (0x00099cf6) main_cale_prevew_pane

0x91fa,	// (0x00095a91) popup_cale_preview_window_ParamLimits

0x91fa,	// (0x00095a91) popup_cale_preview_window

0x47c0,	// (0x00091057) bg_popup_preview_window_pane_cp05_ParamLimits

0x47c0,	// (0x00091057) bg_popup_preview_window_pane_cp05

0xce14,	// (0x000996ab) list_cale_preview_pane_ParamLimits

0xce14,	// (0x000996ab) list_cale_preview_pane

0x920f,	// (0x00095aa6) list_double_cale_preview_pane_ParamLimits

0x920f,	// (0x00095aa6) list_double_cale_preview_pane

0x9220,	// (0x00095ab7) list_single_cale_preview_pane_ParamLimits

0x9220,	// (0x00095ab7) list_single_cale_preview_pane

0xce20,	// (0x000996b7) list_single_cale_preview_pane_g1

0xce28,	// (0x000996bf) list_single_cale_preview_pane_t1_ParamLimits

0xce28,	// (0x000996bf) list_single_cale_preview_pane_t1

0x9234,	// (0x00095acb) list_double_cale_preview_pane_g1

0x923c,	// (0x00095ad3) list_double_cale_preview_pane_t1_ParamLimits

0x923c,	// (0x00095ad3) list_double_cale_preview_pane_t1

0x9251,	// (0x00095ae8) list_double_cale_preview_pane_t2_ParamLimits

0x9251,	// (0x00095ae8) list_double_cale_preview_pane_t2

0x0001,

0xfdda,	// (0x0009c671) list_double_cale_preview_pane_t_ParamLimits

0xfdda,	// (0x0009c671) list_double_cale_preview_pane_t

0xd45f,	// (0x00099cf6) main_ezdial_pane

0x47c0,	// (0x00091057) main_sp_fs_email_pane_ParamLimits

0x88f0,	// (0x00095187) cmail_ddmenu_btn01_pane_ParamLimits

0x88f0,	// (0x00095187) cmail_ddmenu_btn01_pane

0x8903,	// (0x0009519a) cmail_ddmenu_btn02_pane_ParamLimits

0x8903,	// (0x0009519a) cmail_ddmenu_btn02_pane

0x8926,	// (0x000951bd) cmail_ddmenu_btn03_pane_ParamLimits

0x8926,	// (0x000951bd) cmail_ddmenu_btn03_pane

0x8948,	// (0x000951df) main_sp_fs_ctrlbar_pane_ParamLimits

0x8969,	// (0x00095200) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8eb9,	// (0x00095750) list_cmail_body_pane_ParamLimits

0xca42,	// (0x000992d9) bg_button_pane_cp12

0xca57,	// (0x000992ee) list_single_cmail_header_detail_pane_g3_ParamLimits

0xca57,	// (0x000992ee) list_single_cmail_header_detail_pane_g3

0xca64,	// (0x000992fb) list_single_cmail_header_detail_pane_t2_ParamLimits

0xca64,	// (0x000992fb) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd5d,	// (0x0009c5f4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd5d,	// (0x0009c5f4) list_single_cmail_header_detail_pane_t

0xcb7a,	// (0x00099411) phacti_term_pane_t2_ParamLimits

0xcb7a,	// (0x00099411) phacti_term_pane_t2

0x0001,

0xfd67,	// (0x0009c5fe) phacti_term_pane_t_ParamLimits

0xfd67,	// (0x0009c5fe) phacti_term_pane_t

0xce3d,	// (0x000996d4) aid_size_list_single_double

0x9269,	// (0x00095b00) popup_ezdial_listscroll_window

0x927f,	// (0x00095b16) popup_number_entry_window_cp01

0xdfda,	// (0x0009a871) bg_popup_call_pane_cp09

0xce49,	// (0x000996e0) ezdial_list_pane

0xce51,	// (0x000996e8) scroll_pane_cp23

0xa415,	// (0x00096cac) bg_button_pane_cp028_ParamLimits

0xa415,	// (0x00096cac) bg_button_pane_cp028

0x928b,	// (0x00095b22) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x928b,	// (0x00095b22) cmail_ddmenu_btn01_pane_g1

0x9297,	// (0x00095b2e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9297,	// (0x00095b2e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfddf,	// (0x0009c676) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfddf,	// (0x0009c676) cmail_ddmenu_btn01_pane_g

0xce59,	// (0x000996f0) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xce59,	// (0x000996f0) cmail_ddmenu_btn01_pane_t1

0xa415,	// (0x00096cac) bg_button_pane_cp029_ParamLimits

0xa415,	// (0x00096cac) bg_button_pane_cp029

0x92a3,	// (0x00095b3a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x92a3,	// (0x00095b3a) cmail_ddmenu_btn02_pane_g1

0x92bb,	// (0x00095b52) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x92bb,	// (0x00095b52) cmail_ddmenu_btn02_pane_t1

0x47c0,	// (0x00091057) bg_button_pane_cp031_ParamLimits

0x47c0,	// (0x00091057) bg_button_pane_cp031

0x92a3,	// (0x00095b3a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x92a3,	// (0x00095b3a) cmail_ddmenu_btn03_pane_g1

0x92bb,	// (0x00095b52) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x92bb,	// (0x00095b52) cmail_ddmenu_btn03_pane_t1

0x64d6,	// (0x00092d6d) cell_dialer2_keypad_pane_t1_ParamLimits

0x64f0,	// (0x00092d87) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x64f0,	// (0x00092d87) cell_dialer2_keypad_pane_t1_copy1

0x81c7,	// (0x00094a5e) ncimui_group_button_pane

0x47c0,	// (0x00091057) main_sp_fs_calendar_pane_ParamLimits

0x8eb9,	// (0x00095750) list_single_cmail_header_caption_pane_ParamLimits

0xcbc5,	// (0x0009945c) aid_recal_txt_sm_pane

0xd45f,	// (0x00099cf6) mian_recal_day_pane

0xcc07,	// (0x0009949e) popup_sp_fs_cale_preview_window_ParamLimits

0xce6e,	// (0x00099705) list_recal_day_pane

0xceb0,	// (0x00099747) list_single_recal_day_pane_ParamLimits

0xceb0,	// (0x00099747) list_single_recal_day_pane

0xcec2,	// (0x00099759) list_single_recal_day_pane_g1_ParamLimits

0xcec2,	// (0x00099759) list_single_recal_day_pane_g1

0xcece,	// (0x00099765) list_single_recal_day_pane_g2_ParamLimits

0xcece,	// (0x00099765) list_single_recal_day_pane_g2

0xceda,	// (0x00099771) list_single_recal_day_pane_g3_ParamLimits

0xceda,	// (0x00099771) list_single_recal_day_pane_g3

0x92df,	// (0x00095b76) list_single_recal_day_pane_g4_ParamLimits

0x92df,	// (0x00095b76) list_single_recal_day_pane_g4

0xcee6,	// (0x0009977d) list_single_recal_day_pane_g5_ParamLimits

0xcee6,	// (0x0009977d) list_single_recal_day_pane_g5

0x92f7,	// (0x00095b8e) list_single_recal_day_pane_g6_ParamLimits

0x92f7,	// (0x00095b8e) list_single_recal_day_pane_g6

0x0004,

0xfdee,	// (0x0009c685) list_single_recal_day_pane_g_ParamLimits

0xfdee,	// (0x0009c685) list_single_recal_day_pane_g

0xcefa,	// (0x00099791) list_single_recal_day_pane_t1

0x9303,	// (0x00095b9a) list_single_recal_day_pane_t2

0x0001,

0xfdf9,	// (0x0009c690) list_single_recal_day_pane_t

0x9315,	// (0x00095bac) ncimui_query_button_pane_ParamLimits

0x9315,	// (0x00095bac) ncimui_query_button_pane

0x9325,	// (0x00095bbc) ncimui_query_button_pane_t1_ParamLimits

0x9325,	// (0x00095bbc) ncimui_query_button_pane_t1

0xcf0c,	// (0x000997a3) ncimui_query_button_pane_t2_ParamLimits

0xcf0c,	// (0x000997a3) ncimui_query_button_pane_t2

0x0001,

0xfdfe,	// (0x0009c695) ncimui_query_button_pane_t_ParamLimits

0xfdfe,	// (0x0009c695) ncimui_query_button_pane_t

0x9338,	// (0x00095bcf) query_button_pane_ParamLimits

0x9338,	// (0x00095bcf) query_button_pane

0xd45f,	// (0x00099cf6) bg_button_pane_cp0028

0xcf1f,	// (0x000997b6) query_button_pane_t1

0x47e2,	// (0x00091079) main_tport_pane_ParamLimits

0x8dcc,	// (0x00095663) bg_popup_window_pane_cp01_ParamLimits

0x8dcc,	// (0x00095663) bg_popup_window_pane_cp01

0x8de3,	// (0x0009567a) heading_pane_cp08_ParamLimits

0x8de3,	// (0x0009567a) heading_pane_cp08

0x8df4,	// (0x0009568b) heading_pane_cp07_ParamLimits

0x8df4,	// (0x0009568b) heading_pane_cp07

0xc9f2,	// (0x00099289) cell_tport_appsw_pane_g2

0x0002,

0xfd4a,	// (0x0009c5e1) cell_tport_appsw_pane_g

0x3466,	// (0x0008fcfd) input_candi_list_open_g1

0xe440,	// (0x0009acd7) list_cale_time_pane_g6_ParamLimits

0xe440,	// (0x0009acd7) list_cale_time_pane_g6

0x5474,	// (0x00091d0b) aid_size_touch_calib_1_ParamLimits

0x5474,	// (0x00091d0b) aid_size_touch_calib_1

0x5486,	// (0x00091d1d) aid_size_touch_calib_2_ParamLimits

0x5486,	// (0x00091d1d) aid_size_touch_calib_2

0x549c,	// (0x00091d33) aid_size_touch_calib_3_ParamLimits

0x549c,	// (0x00091d33) aid_size_touch_calib_3

0x54b4,	// (0x00091d4b) aid_size_touch_calib_4_ParamLimits

0x54b4,	// (0x00091d4b) aid_size_touch_calib_4

0x54c8,	// (0x00091d5f) main_touch_calib_button_group_pane_ParamLimits

0x54c8,	// (0x00091d5f) main_touch_calib_button_group_pane

0x54e0,	// (0x00091d77) main_touch_calib_pane_g1_ParamLimits

0x54f2,	// (0x00091d89) main_touch_calib_pane_g2_ParamLimits

0x5504,	// (0x00091d9b) main_touch_calib_pane_g3_ParamLimits

0x5516,	// (0x00091dad) main_touch_calib_pane_g4_ParamLimits

0xf710,	// (0x0009bfa7) main_touch_calib_pane_g_ParamLimits

0x5528,	// (0x00091dbf) main_touch_calib_pane_t1_ParamLimits

0x5540,	// (0x00091dd7) main_touch_calib_pane_t2_ParamLimits

0x5558,	// (0x00091def) main_touch_calib_pane_t3_ParamLimits

0x556a,	// (0x00091e01) main_touch_calib_pane_t4_ParamLimits

0x557c,	// (0x00091e13) main_touch_calib_pane_t5_ParamLimits

0xf719,	// (0x0009bfb0) main_touch_calib_pane_t_ParamLimits

0xaccc,	// (0x00097563) list_single_fp_cale_pane_g3_ParamLimits

0xaccc,	// (0x00097563) list_single_fp_cale_pane_g3

0x9f2b,	// (0x000967c2) bg_button_pane_cp012_ParamLimits

0x9f2b,	// (0x000967c2) bg_vkb2_func_pane_cp03_ParamLimits

0x7359,	// (0x00093bf0) cell_vitu2_function_top_pane_g1_ParamLimits

0x9f2b,	// (0x000967c2) bg_vkb2_func_pane_cp04_ParamLimits

0x8157,	// (0x000949ee) main_ncimui_button_group_pane_ParamLimits

0x8157,	// (0x000949ee) main_ncimui_button_group_pane

0x81b5,	// (0x00094a4c) main_ncimui_pane_t3_ParamLimits

0x81b5,	// (0x00094a4c) main_ncimui_pane_t3

0xcb28,	// (0x000993bf) phacti_button_group_pane

0xce3d,	// (0x000996d4) aid_size_list_single_double_ParamLimits

0x9269,	// (0x00095b00) popup_ezdial_listscroll_window_ParamLimits

0x927f,	// (0x00095b16) popup_number_entry_window_cp01_ParamLimits

0x934a,	// (0x00095be1) phacti_button_pane_ParamLimits

0x934a,	// (0x00095be1) phacti_button_pane

0xd45f,	// (0x00099cf6) bg_button_pane_cp14

0xcf2d,	// (0x000997c4) phacti_button_pane_t1

0x9359,	// (0x00095bf0) main_touch_calib_button_pane_ParamLimits

0x9359,	// (0x00095bf0) main_touch_calib_button_pane

0xde0b,	// (0x0009a6a2) bg_button_pane_cp18_ParamLimits

0xde0b,	// (0x0009a6a2) bg_button_pane_cp18

0x9374,	// (0x00095c0b) main_touch_calib_button_pane_t1_ParamLimits

0x9374,	// (0x00095c0b) main_touch_calib_button_pane_t1

0x938a,	// (0x00095c21) main_touch_calib_button_pane_t2_ParamLimits

0x938a,	// (0x00095c21) main_touch_calib_button_pane_t2

0x0001,

0xfe03,	// (0x0009c69a) main_touch_calib_button_pane_t_ParamLimits

0xfe03,	// (0x0009c69a) main_touch_calib_button_pane_t

0xd45f,	// (0x00099cf6) cell_ncimui_button_pane

0xd45f,	// (0x00099cf6) bg_button_pane_cp032

0xcf3b,	// (0x000997d2) cell_ncimui_button_pane_t1

0xb4f3,	// (0x00097d8a) image3_infobar_pane_ParamLimits

0xb4f3,	// (0x00097d8a) image3_infobar_pane

0x8550,	// (0x00094de7) fs_bigclock_status_pane_ParamLimits

0x8550,	// (0x00094de7) fs_bigclock_status_pane

0x855d,	// (0x00094df4) main_fs_bigclock_clock_pane_ParamLimits

0x855d,	// (0x00094df4) main_fs_bigclock_clock_pane

0x857f,	// (0x00094e16) main_fs_bigclock_indi_pane_ParamLimits

0x857f,	// (0x00094e16) main_fs_bigclock_indi_pane

0x85a9,	// (0x00094e40) main_fs_bigclock_swipe_pane_ParamLimits

0x85a9,	// (0x00094e40) main_fs_bigclock_swipe_pane

0xd45f,	// (0x00099cf6) main_fs_clock_dumped_data

0xc43c,	// (0x00098cd3) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc43c,	// (0x00098cd3) list_single_fs_bigclock_indicator_pane_g1

0xc456,	// (0x00098ced) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc456,	// (0x00098ced) list_single_fs_bigclock_indicator_pane_g2

0xc470,	// (0x00098d07) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc470,	// (0x00098d07) list_single_fs_bigclock_indicator_pane_g3

0xc48a,	// (0x00098d21) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc48a,	// (0x00098d21) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc2b,	// (0x0009c4c2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc2b,	// (0x0009c4c2) list_single_fs_bigclock_indicator_pane_g

0xc4b3,	// (0x00098d4a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc4b3,	// (0x00098d4a) list_single_fs_bigclock_indicator_pane_t1

0xc4db,	// (0x00098d72) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc4db,	// (0x00098d72) list_single_fs_bigclock_indicator_pane_t2

0xc503,	// (0x00098d9a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc503,	// (0x00098d9a) list_single_fs_bigclock_indicator_pane_t3

0xc52b,	// (0x00098dc2) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc52b,	// (0x00098dc2) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc36,	// (0x0009c4cd) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc36,	// (0x0009c4cd) list_single_fs_bigclock_indicator_pane_t

0xcf49,	// (0x000997e0) image3_infobar_fav_pane_ParamLimits

0xcf49,	// (0x000997e0) image3_infobar_fav_pane

0xcf59,	// (0x000997f0) image3_infobar_loc_pane_ParamLimits

0xcf59,	// (0x000997f0) image3_infobar_loc_pane

0xcf6d,	// (0x00099804) image3_infobar_time_pane_ParamLimits

0xcf6d,	// (0x00099804) image3_infobar_time_pane

0xa929,	// (0x000971c0) image3_infobar_time_pane_g1

0xcf7d,	// (0x00099814) image3_infobar_time_pane_t1

0xa929,	// (0x000971c0) image3_infobar_loc_pane_g1

0xcf8b,	// (0x00099822) image3_infobar_loc_pane_g2

0x0001,

0xfe08,	// (0x0009c69f) image3_infobar_loc_pane_g

0xcf93,	// (0x0009982a) image3_infobar_loc_pane_t1

0xa929,	// (0x000971c0) image3_infobar_fav_pane_g1

0xcfa1,	// (0x00099838) image3_infobar_fav_pane_g2

0x0001,

0xfe0d,	// (0x0009c6a4) image3_infobar_fav_pane_g

0xcfa9,	// (0x00099840) fs_bigclock_status_battery_pane

0xcfb2,	// (0x00099849) fs_bigclock_status_signal_pane

0xcfbb,	// (0x00099852) fs_bigclock_status_title_pane

0xcfc4,	// (0x0009985b) fs_bigclock_status_signal_pane_g1

0xcfcd,	// (0x00099864) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe12,	// (0x0009c6a9) fs_bigclock_status_signal_pane_g

0xcfd5,	// (0x0009986c) fs_bigclock_status_battery_pane_g1

0xcfde,	// (0x00099875) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe17,	// (0x0009c6ae) fs_bigclock_status_battery_pane_g

0xcfe6,	// (0x0009987d) fs_bigclock_status_title_pane_t1

0x93a8,	// (0x00095c3f) main_fs_bigclock_clock_pane_g1

0x93ba,	// (0x00095c51) main_fs_bigclock_clock_pane_g2

0x93cb,	// (0x00095c62) main_fs_bigclock_clock_pane_g3

0x93cb,	// (0x00095c62) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe1c,	// (0x0009c6b3) main_fs_bigclock_clock_pane_g

0x93de,	// (0x00095c75) main_fs_bigclock_clock_pane_t1

0x93f9,	// (0x00095c90) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe25,	// (0x0009c6bc) main_fs_bigclock_clock_pane_t

0xcff4,	// (0x0009988b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xcff4,	// (0x0009988b) list_single_fs_bigclock_indicator_pane

0xd005,	// (0x0009989c) list_single_fs_bigclock_pane_ParamLimits

0xd005,	// (0x0009989c) list_single_fs_bigclock_pane

0xd02b,	// (0x000998c2) main_fs_bigclock_indicator_pane_t1

0xd03a,	// (0x000998d1) list_single_fs_bigclock_pane_g1

0xd042,	// (0x000998d9) list_single_fs_bigclock_pane_t1

0xa929,	// (0x000971c0) main_fs_bigclock_swipe_pane_g1

0xd082,	// (0x00099919) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe36,	// (0x0009c6cd) main_fs_bigclock_swipe_pane_g

0xd08a,	// (0x00099921) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd08a,	// (0x00099921) main_fs_bigclock_swipe_pane_t1

0x2d83,	// (0x0008f61a) call_type_pane_ParamLimits

0xd45f,	// (0x00099cf6) main_btmg_pane

0xcd0d,	// (0x000995a4) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcd0d,	// (0x000995a4) list_single_cale_mrui_row_pane_g2

0x0002,

0xfda9,	// (0x0009c640) list_single_cale_mrui_row_pane_g_ParamLimits

0xfda9,	// (0x0009c640) list_single_cale_mrui_row_pane_g

0xce97,	// (0x0009972e) list_recal_vselct_arw_lo_pane

0xce9f,	// (0x00099736) list_recal_vselct_arw_up_pane

0xcea7,	// (0x0009973e) list_recal_vselct_pane

0xd0a7,	// (0x0009993e) btmg_button_pane

0x9459,	// (0x00095cf0) main_btmg_pane_g1

0xd45f,	// (0x00099cf6) bg_button_pane_cp044

0xd0af,	// (0x00099946) btmg_button_pane_t1

0xa401,	// (0x00096c98) aid_listscroll_gen

0x47c0,	// (0x00091057) main_cntbar_detail_pane

0xca18,	// (0x000992af) list_cmail_folder_pane

0xca28,	// (0x000992bf) sp_fs_scroll_pane_cp03_ParamLimits

0x9461,	// (0x00095cf8) list_single_fs_dyc_pane_cp01_ParamLimits

0x9461,	// (0x00095cf8) list_single_fs_dyc_pane_cp01

0xd0bd,	// (0x00099954) aid_size_cmail_indent

0xd0c6,	// (0x0009995d) list_single_dyc_row_pane_cp01

0x949f,	// (0x00095d36) cntbar_detail_list_pane_ParamLimits

0x949f,	// (0x00095d36) cntbar_detail_list_pane

0x94e5,	// (0x00095d7c) main_cntbar_detail_cont_pane_ParamLimits

0x94e5,	// (0x00095d7c) main_cntbar_detail_cont_pane

0x94f9,	// (0x00095d90) scroll_pane_cp032_ParamLimits

0x94f9,	// (0x00095d90) scroll_pane_cp032

0x9505,	// (0x00095d9c) cntbar_detail_list_event_pane_ParamLimits

0x9505,	// (0x00095d9c) cntbar_detail_list_event_pane

0x94af,	// (0x00095d46) cntbar_detail_list_shct_pane

0xd0cf,	// (0x00099966) aid_list_gen

0xdf10,	// (0x0009a7a7) aid_scroll

0xbb66,	// (0x000983fd) aid_size_touch_scroll_bar

0xbb9a,	// (0x00098431) aid_list_double

0xbb91,	// (0x00098428) aid_list_single

0xbb91,	// (0x00098428) aid_list_single_lg

0xd0d8,	// (0x0009996f) aid_list_z_g_a_sm

0x9f4b,	// (0x000967e2) aid_list_z_g_d

0xd0e0,	// (0x00099977) aid_txt_z_prm

0x9516,	// (0x00095dad) aid_txt_z_prm_cp01

0x9524,	// (0x00095dbb) aid_txt_z_sec

0x9532,	// (0x00095dc9) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9532,	// (0x00095dc9) main_cntbar_detail_cont_pane_g1

0x9546,	// (0x00095ddd) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9546,	// (0x00095ddd) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe3b,	// (0x0009c6d2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe3b,	// (0x0009c6d2) main_cntbar_detail_cont_pane_g

0xd0ee,	// (0x00099985) main_cntbar_detail_cont_pane_t1

0xd0fc,	// (0x00099993) main_cntbar_detail_cont_pane_t2

0xd10a,	// (0x000999a1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe40,	// (0x0009c6d7) main_cntbar_detail_cont_pane_t

0x9556,	// (0x00095ded) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9556,	// (0x00095ded) cell_cntbar_detail_list_shct_pane

0xd118,	// (0x000999af) cntbar_detail_list_shct_pane_g1

0xd121,	// (0x000999b8) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe47,	// (0x0009c6de) cntbar_detail_list_shct_pane_g

0x9568,	// (0x00095dff) cntbar_detail_list_event_pane_g1_ParamLimits

0x9568,	// (0x00095dff) cntbar_detail_list_event_pane_g1

0x9574,	// (0x00095e0b) cntbar_detail_list_event_pane_g2_ParamLimits

0x9574,	// (0x00095e0b) cntbar_detail_list_event_pane_g2

0x0005,

0xfe4c,	// (0x0009c6e3) cntbar_detail_list_event_pane_g_ParamLimits

0xfe4c,	// (0x0009c6e3) cntbar_detail_list_event_pane_g

0x95e0,	// (0x00095e77) cntbar_detail_list_event_pane_t1_ParamLimits

0x95e0,	// (0x00095e77) cntbar_detail_list_event_pane_t1

0x95f5,	// (0x00095e8c) cntbar_detail_list_event_pane_t2_ParamLimits

0x95f5,	// (0x00095e8c) cntbar_detail_list_event_pane_t2

0x0002,

0xfe59,	// (0x0009c6f0) cntbar_detail_list_event_pane_t_ParamLimits

0xfe59,	// (0x0009c6f0) cntbar_detail_list_event_pane_t

0xa929,	// (0x000971c0) cell_cntbar_detail_list_shct_pane_g1

0xe9d0,	// (0x0009b267) navi_pane_mv_g3

0x47c0,	// (0x00091057) main_cntbar_detail_pane_ParamLimits

0xd45f,	// (0x00099cf6) main_notif_wgt_pane

0xb247,	// (0x00097ade) aid_tch_main_mp4_pane_g4

0xb469,	// (0x00097d00) popup_slider_window_cp02

0xce8d,	// (0x00099724) list_recal_day_event_pane

0x9477,	// (0x00095d0e) cntbar_detail_btn_pane_ParamLimits

0x9477,	// (0x00095d0e) cntbar_detail_btn_pane

0x948a,	// (0x00095d21) cntbar_detail_btn_pane_cp01_ParamLimits

0x948a,	// (0x00095d21) cntbar_detail_btn_pane_cp01

0x94af,	// (0x00095d46) cntbar_detail_list_shct_pane_ParamLimits

0x94bf,	// (0x00095d56) cntbar_detail_pane_g1_ParamLimits

0x94bf,	// (0x00095d56) cntbar_detail_pane_g1

0x94cf,	// (0x00095d66) cntbar_detail_pane_t1_ParamLimits

0x94cf,	// (0x00095d66) cntbar_detail_pane_t1

0x9580,	// (0x00095e17) cntbar_detail_list_event_pane_g3_ParamLimits

0x9580,	// (0x00095e17) cntbar_detail_list_event_pane_g3

0x9598,	// (0x00095e2f) cntbar_detail_list_event_pane_g4_ParamLimits

0x9598,	// (0x00095e2f) cntbar_detail_list_event_pane_g4

0x95b0,	// (0x00095e47) cntbar_detail_list_event_pane_g5_ParamLimits

0x95b0,	// (0x00095e47) cntbar_detail_list_event_pane_g5

0x95c8,	// (0x00095e5f) cntbar_detail_list_event_pane_g6_ParamLimits

0x95c8,	// (0x00095e5f) cntbar_detail_list_event_pane_g6

0x960a,	// (0x00095ea1) cntbar_detail_list_event_pane_t3_ParamLimits

0x960a,	// (0x00095ea1) cntbar_detail_list_event_pane_t3

0x961c,	// (0x00095eb3) popup_notif_wgt_window_ParamLimits

0x961c,	// (0x00095eb3) popup_notif_wgt_window

0x9631,	// (0x00095ec8) popup_submenu_window_cp01_ParamLimits

0x9631,	// (0x00095ec8) popup_submenu_window_cp01

0xdfda,	// (0x0009a871) bg_popup_window_pane_cp10

0xd12a,	// (0x000999c1) listscroll_notif_wgt_pane

0xd13b,	// (0x000999d2) list_notif_wgt_window

0xd144,	// (0x000999db) scroll_pane_cp033

0x9641,	// (0x00095ed8) list_notif_wgt_row_pane_ParamLimits

0x9641,	// (0x00095ed8) list_notif_wgt_row_pane

0xd14d,	// (0x000999e4) aid_size_list_notif_wgt_del

0xd15a,	// (0x000999f1) list_notif_wgt_row_pane_g1

0xd166,	// (0x000999fd) list_notif_wgt_row_pane_g2

0xd17a,	// (0x00099a11) list_notif_wgt_row_pane_g3

0x0002,

0xfe60,	// (0x0009c6f7) list_notif_wgt_row_pane_g

0xd187,	// (0x00099a1e) list_notif_wgt_row_pane_t1

0xd19d,	// (0x00099a34) list_notif_wgt_row_pane_t2

0xd1af,	// (0x00099a46) list_notif_wgt_row_pane_t3

0x0002,

0xfe67,	// (0x0009c6fe) list_notif_wgt_row_pane_t

0xb872,	// (0x00098109) list_recal_day_event_pane_g1

0xd1c1,	// (0x00099a58) list_recal_day_event_pane_t1

0xd45f,	// (0x00099cf6) bg_button_pane_cp045

0x9651,	// (0x00095ee8) cntbar_detail_btn_pane_t1

0xa415,	// (0x00096cac) main_callh_pane_ParamLimits

0xa415,	// (0x00096cac) main_callh_pane

0xd45f,	// (0x00099cf6) main_coverflow0_pane

0xd45f,	// (0x00099cf6) main_wgtman_pane

0x85bd,	// (0x00094e54) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x85bd,	// (0x00094e54) main_fs_bigclock_unlock_btn_pane

0xc9ea,	// (0x00099281) bg_button_pane_cp16

0xc9fa,	// (0x00099291) cell_tport_appsw_pane_g3

0x965f,	// (0x00095ef6) cf0_flow_pane_ParamLimits

0x965f,	// (0x00095ef6) cf0_flow_pane

0xd1d0,	// (0x00099a67) listscroll_cf0_pane

0xd1d9,	// (0x00099a70) main_cf0_pane_g1

0x9674,	// (0x00095f0b) main_cf0_pane_t1_ParamLimits

0x9674,	// (0x00095f0b) main_cf0_pane_t1

0x9689,	// (0x00095f20) main_cf0_pane_t2_ParamLimits

0x9689,	// (0x00095f20) main_cf0_pane_t2

0x0001,

0xfe73,	// (0x0009c70a) main_cf0_pane_t_ParamLimits

0xfe73,	// (0x0009c70a) main_cf0_pane_t

0xd1eb,	// (0x00099a82) scroll_pane_cp11

0x969e,	// (0x00095f35) cf0_flow_pane_g1

0x96a6,	// (0x00095f3d) cf0_flow_pane_g2

0x0001,

0xfe78,	// (0x0009c70f) cf0_flow_pane_g

0x96ae,	// (0x00095f45) cf0_flow_pane_t1

0xd45f,	// (0x00099cf6) main_call6_pane

0xd45f,	// (0x00099cf6) main_calllock_pane

0x96bc,	// (0x00095f53) call6_btn_grp_pane_ParamLimits

0x96bc,	// (0x00095f53) call6_btn_grp_pane

0x96d2,	// (0x00095f69) call6_pane_g1_ParamLimits

0x96d2,	// (0x00095f69) call6_pane_g1

0x96e5,	// (0x00095f7c) popup_call6_1st_window_ParamLimits

0x96e5,	// (0x00095f7c) popup_call6_1st_window

0x96f4,	// (0x00095f8b) popup_call6_2nd_window_ParamLimits

0x96f4,	// (0x00095f8b) popup_call6_2nd_window

0x9703,	// (0x00095f9a) cell_call6_btn_pane_ParamLimits

0x9703,	// (0x00095f9a) cell_call6_btn_pane

0xdfda,	// (0x0009a871) bg_popup_call2_in_pane_cp03

0xd1f4,	// (0x00099a8b) popup_call6_1st_window_g1

0xd1fc,	// (0x00099a93) popup_call6_1st_window_g2

0xd204,	// (0x00099a9b) popup_call6_1st_window_g3

0x0002,

0xfe7d,	// (0x0009c714) popup_call6_1st_window_g

0xd20c,	// (0x00099aa3) popup_call6_1st_window_t1

0xd21b,	// (0x00099ab2) popup_call6_1st_window_t2

0xd229,	// (0x00099ac0) popup_call6_1st_window_t3

0x0002,

0xfe84,	// (0x0009c71b) popup_call6_1st_window_t

0xdfda,	// (0x0009a871) bg_popup_call2_in_pane_cp04

0xd1f4,	// (0x00099a8b) popup_call6_2nd_window_g1

0xd1fc,	// (0x00099a93) popup_call6_2nd_window_g2

0xd204,	// (0x00099a9b) popup_call6_2nd_window_g3

0x0002,

0xfe7d,	// (0x0009c714) popup_call6_2nd_window_g

0xd20c,	// (0x00099aa3) popup_call6_2nd_window_t1

0x9f39,	// (0x000967d0) bg_button_pane_cp15

0xd715,	// (0x00099fac) cell_call6_btn_pane_g1

0xd71e,	// (0x00099fb5) cell_call6_btn_pane_t1

0x9717,	// (0x00095fae) listscroll_wgtman_pane_ParamLimits

0x9717,	// (0x00095fae) listscroll_wgtman_pane

0x9738,	// (0x00095fcf) wgtman_btn_pane_ParamLimits

0x9738,	// (0x00095fcf) wgtman_btn_pane

0xe819,	// (0x0009b0b0) aid_scroll_copy1

0xd237,	// (0x00099ace) list_wgtman_pane

0x9778,	// (0x0009600f) wgtman_btn_pane_g1_ParamLimits

0x9778,	// (0x0009600f) wgtman_btn_pane_g1

0x97a4,	// (0x0009603b) wgtman_btn_pane_t1_ParamLimits

0x97a4,	// (0x0009603b) wgtman_btn_pane_t1

0xd241,	// (0x00099ad8) wgtman_btn_pane_t2_ParamLimits

0xd241,	// (0x00099ad8) wgtman_btn_pane_t2

0x0001,

0xfe8b,	// (0x0009c722) wgtman_btn_pane_t_ParamLimits

0xfe8b,	// (0x0009c722) wgtman_btn_pane_t

0x97e1,	// (0x00096078) listrow_wgtman_pane_ParamLimits

0x97e1,	// (0x00096078) listrow_wgtman_pane

0x97f2,	// (0x00096089) listrow_wgtman_pane_g1

0x97ff,	// (0x00096096) listrow_wgtman_pane_g2

0x0001,

0xfe90,	// (0x0009c727) listrow_wgtman_pane_g

0x9817,	// (0x000960ae) listrow_wgtman_pane_t1

0x982f,	// (0x000960c6) listrow_wgtman_pane_t2

0x0001,

0xfe95,	// (0x0009c72c) listrow_wgtman_pane_t

0x9855,	// (0x000960ec) wait_bar_pane_cp09

0xd258,	// (0x00099aef) main_calllock_btn_pane

0xd260,	// (0x00099af7) main_calllock_pane_g1

0xd45f,	// (0x00099cf6) bg_button_pane_cp17

0xd269,	// (0x00099b00) main_calllock_btn_pane_g1

0xd272,	// (0x00099b09) main_calllock_btn_pane_t1

0xd45f,	// (0x00099cf6) main_dialer3_pane

0xd45f,	// (0x00099cf6) main_fmrd2_pane

0xa929,	// (0x000971c0) main_fs_bigclock_unlock_btn_pane_g1

0xd289,	// (0x00099b20) main_fs_bigclock_unlock_btn_pane_t1

0x9867,	// (0x000960fe) area_fmrd2_info_pane_ParamLimits

0x9867,	// (0x000960fe) area_fmrd2_info_pane

0x9876,	// (0x0009610d) area_fmrd2_visual_pane_ParamLimits

0x9876,	// (0x0009610d) area_fmrd2_visual_pane

0x9884,	// (0x0009611b) fmrd2_indi_pane_ParamLimits

0x9884,	// (0x0009611b) fmrd2_indi_pane

0x9891,	// (0x00096128) area_fmrd2_visual_pane_g1

0x9899,	// (0x00096130) area_fmrd2_visual_pane_t1

0x98a7,	// (0x0009613e) area_fmrd2_visual_pane_t2

0x98b5,	// (0x0009614c) area_fmrd2_visual_pane_t3

0x0002,

0xfe9f,	// (0x0009c736) area_fmrd2_visual_pane_t

0x98c3,	// (0x0009615a) area_fmrd2_info_pane_g1

0x98cb,	// (0x00096162) area_fmrd2_info_pane_t1

0x98d9,	// (0x00096170) area_fmrd2_info_pane_t2

0x98e7,	// (0x0009617e) area_fmrd2_info_pane_t3

0x98f5,	// (0x0009618c) area_fmrd2_info_pane_t4

0x0003,

0xfea6,	// (0x0009c73d) area_fmrd2_info_pane_t

0x9903,	// (0x0009619a) fmrd2_indi_pane_t1

0x9911,	// (0x000961a8) fmrd2_indi_pane_t2

0x991f,	// (0x000961b6) fmrd2_indi_pane_t3

0x0002,

0xfeaf,	// (0x0009c746) fmrd2_indi_pane_t

0xc499,	// (0x00098d30) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc499,	// (0x00098d30) list_single_fs_bigclock_indicator_pane_g5

0xc547,	// (0x00098dde) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc547,	// (0x00098dde) list_single_fs_bigclock_indicator_pane_t5

0x9002,	// (0x00095899) aid_cell_bcale_month_pane_ParamLimits

0x9002,	// (0x00095899) aid_cell_bcale_month_pane

0x9020,	// (0x000958b7) bcale_month_pane_ParamLimits

0x9020,	// (0x000958b7) bcale_month_pane

0x9038,	// (0x000958cf) bcale_preview_pane_ParamLimits

0x9038,	// (0x000958cf) bcale_preview_pane

0xd042,	// (0x000998d9) list_single_fs_bigclock_pane_t1_ParamLimits

0xd05e,	// (0x000998f5) list_single_fs_bigclock_pane_t2_ParamLimits

0xd05e,	// (0x000998f5) list_single_fs_bigclock_pane_t2

0x0001,

0xfe31,	// (0x0009c6c8) list_single_fs_bigclock_pane_t_ParamLimits

0xfe31,	// (0x0009c6c8) list_single_fs_bigclock_pane_t

0xd281,	// (0x00099b18) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe9a,	// (0x0009c731) main_fs_bigclock_unlock_btn_pane_g

0x992d,	// (0x000961c4) aid_dia3_key_size_ParamLimits

0x992d,	// (0x000961c4) aid_dia3_key_size

0x993c,	// (0x000961d3) aid_dia3_listrow_size_ParamLimits

0x993c,	// (0x000961d3) aid_dia3_listrow_size

0x994f,	// (0x000961e6) dia3_keypad_fun_pane_ParamLimits

0x994f,	// (0x000961e6) dia3_keypad_fun_pane

0x9963,	// (0x000961fa) dia3_keypad_num_pane_ParamLimits

0x9963,	// (0x000961fa) dia3_keypad_num_pane

0x9974,	// (0x0009620b) dia3_listscroll_pane_ParamLimits

0x9974,	// (0x0009620b) dia3_listscroll_pane

0x9985,	// (0x0009621c) dia3_numentry_pane_ParamLimits

0x9985,	// (0x0009621c) dia3_numentry_pane

0xd297,	// (0x00099b2e) dia3_list_pane

0xd2a0,	// (0x00099b37) scroll_pane_cp12

0xd45f,	// (0x00099cf6) bg_dia3_numentry_pane

0x9997,	// (0x0009622e) dia3_numentry_pane_t1

0x99a6,	// (0x0009623d) cell_dia3_key_num_pane

0x99ae,	// (0x00096245) cell_dia3_key0_fun_pane_ParamLimits

0x99ae,	// (0x00096245) cell_dia3_key0_fun_pane

0x99c2,	// (0x00096259) cell_dia3_key1_fun_pane_ParamLimits

0x99c2,	// (0x00096259) cell_dia3_key1_fun_pane

0x99d9,	// (0x00096270) dia3_listrow_pane

0xc19a,	// (0x00098a31) bg_dia3_numentry_pane_g1

0xd45f,	// (0x00099cf6) bg_button_pane_cp21

0xd2a9,	// (0x00099b40) cell_dia3_key_num_pane_t1

0xd2b7,	// (0x00099b4e) cell_dia3_key_num_pane_t2

0xd2c6,	// (0x00099b5d) cell_dia3_key_num_pane_t3

0xd2d5,	// (0x00099b6c) cell_dia3_key_num_pane_t4

0x0003,

0xfeb6,	// (0x0009c74d) cell_dia3_key_num_pane_t

0xd45f,	// (0x00099cf6) bg_button_pane_cp19

0xd2e4,	// (0x00099b7b) cell_dia3_key0_fun_pane_g1

0xd45f,	// (0x00099cf6) bg_button_pane_cp20

0x99eb,	// (0x00096282) cell_dia3_key1_fun_pane_g1

0x99f3,	// (0x0009628a) area_left_week_number_pane

0x99ff,	// (0x00096296) area_top_day_name_pane

0x9a10,	// (0x000962a7) frame_month_view_pane

0xd2ec,	// (0x00099b83) grid_month_view_pane

0x9a21,	// (0x000962b8) cell_top_day_name_pane_ParamLimits

0x9a21,	// (0x000962b8) cell_top_day_name_pane

0x9a44,	// (0x000962db) cell_area_left_week_number_pane_ParamLimits

0x9a44,	// (0x000962db) cell_area_left_week_number_pane

0x9a58,	// (0x000962ef) cell_month_view_pane_ParamLimits

0x9a58,	// (0x000962ef) cell_month_view_pane

0xd2fa,	// (0x00099b91) frm_month_g1

0x9a7d,	// (0x00096314) frm_month_g2

0x9a8e,	// (0x00096325) frm_month_g3

0x9a9f,	// (0x00096336) frm_month_g4

0x9ab0,	// (0x00096347) frm_month_g5

0x9ac1,	// (0x00096358) frm_month_g6

0x9ad2,	// (0x00096369) frm_month_g7

0xd307,	// (0x00099b9e) frm_month_g8

0x9ae3,	// (0x0009637a) frm_month_g9

0x9af3,	// (0x0009638a) frm_month_g10

0x9b03,	// (0x0009639a) frm_month_g11

0x9b13,	// (0x000963aa) frm_month_g12

0x9b23,	// (0x000963ba) frm_month_g13

0x9b33,	// (0x000963ca) frm_month_g14

0x9b43,	// (0x000963da) frm_month_g15

0x9b55,	// (0x000963ec) frm_month_g16

0x000f,

0xfebf,	// (0x0009c756) frm_month_g

0xd314,	// (0x00099bab) cell_top_day_name_pane_t1

0x9b67,	// (0x000963fe) cell_area_left_week_number_pane_g1

0x9b73,	// (0x0009640a) cell_area_left_week_number_pane_t1

0xab58,	// (0x000973ef) cell_month_view_pane_g1

0x9b86,	// (0x0009641d) cell_month_view_pane_t1

0xd45f,	// (0x00099cf6) main_fps_pane

0xc75f,	// (0x00098ff6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc75f,	// (0x00098ff6) cmail_ddmenu_btn02_pane_cp1

0xc77b,	// (0x00099012) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc77b,	// (0x00099012) cmail_ddmenu_btn02_pane_cp2

0x92af,	// (0x00095b46) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x92af,	// (0x00095b46) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfde4,	// (0x0009c67b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfde4,	// (0x0009c67b) cmail_ddmenu_btn02_pane_g

0x92cd,	// (0x00095b64) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x92cd,	// (0x00095b64) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfde9,	// (0x0009c680) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfde9,	// (0x0009c680) cmail_ddmenu_btn02_pane_t

0x9b99,	// (0x00096430) fps_text_pane_ParamLimits

0x9b99,	// (0x00096430) fps_text_pane

0x9baf,	// (0x00096446) main_fps_pane_g1_ParamLimits

0x9baf,	// (0x00096446) main_fps_pane_g1

0x9bc5,	// (0x0009645c) wait_bar_pane_cp010_ParamLimits

0x9bc5,	// (0x0009645c) wait_bar_pane_cp010

0x9bd6,	// (0x0009646d) fps_text_pane_t1_ParamLimits

0x9bd6,	// (0x0009646d) fps_text_pane_t1

0xb590,	// (0x00097e27) cam4_image_uncrop_pane_g1

0xb599,	// (0x00097e30) cam4_image_uncrop_pane_g2

0x6929,	// (0x000931c0) cam4_image_uncrop_pane_g3

0x6932,	// (0x000931c9) cam4_image_uncrop_pane_g4

0x0003,

0xf8ac,	// (0x0009c143) cam4_image_uncrop_pane_g

0x99d9,	// (0x00096270) dia3_listrow_pane_ParamLimits

0xd45f,	// (0x00099cf6) main_phob2_pane

0x8e53,	// (0x000956ea) cell_tport_appsw_pane_cp02_ParamLimits

0x8e53,	// (0x000956ea) cell_tport_appsw_pane_cp02

0x8e63,	// (0x000956fa) cell_tport_appsw_pane_cp03_ParamLimits

0x8e63,	// (0x000956fa) cell_tport_appsw_pane_cp03

0xd45f,	// (0x00099cf6) phob2_contact_card_pane

0xd45f,	// (0x00099cf6) phob2_listscroll_pane

0xd327,	// (0x00099bbe) phob2_list_pane

0xd32f,	// (0x00099bc6) scroll_pane_cp034

0x9bee,	// (0x00096485) phob2_cc_data_pane_ParamLimits

0x9bee,	// (0x00096485) phob2_cc_data_pane

0x9c0b,	// (0x000964a2) phob2_cc_listscroll_pane_ParamLimits

0x9c0b,	// (0x000964a2) phob2_cc_listscroll_pane

0x97e1,	// (0x00096078) list_double_large_graphic_phob2_pane_ParamLimits

0x97e1,	// (0x00096078) list_double_large_graphic_phob2_pane

0x9c27,	// (0x000964be) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9c27,	// (0x000964be) list_double_large_graphic_phob2_pane_g1

0x9c3d,	// (0x000964d4) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9c3d,	// (0x000964d4) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfee0,	// (0x0009c777) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfee0,	// (0x0009c777) list_double_large_graphic_phob2_pane_g

0x9c49,	// (0x000964e0) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9c49,	// (0x000964e0) list_double_large_graphic_phob2_pane_t1

0x9c5f,	// (0x000964f6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9c5f,	// (0x000964f6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfee5,	// (0x0009c77c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfee5,	// (0x0009c77c) list_double_large_graphic_phob2_pane_t

0xd45f,	// (0x00099cf6) list_highlight_pane_cp024

0x9c74,	// (0x0009650b) phob2_cc_button_pane

0x9c7c,	// (0x00096513) phob2_cc_data_pane_g1_ParamLimits

0x9c7c,	// (0x00096513) phob2_cc_data_pane_g1

0x9c91,	// (0x00096528) phob2_cc_data_pane_g2_ParamLimits

0x9c91,	// (0x00096528) phob2_cc_data_pane_g2

0x0001,

0xfeea,	// (0x0009c781) phob2_cc_data_pane_g_ParamLimits

0xfeea,	// (0x0009c781) phob2_cc_data_pane_g

0x9ca1,	// (0x00096538) phob2_cc_data_pane_t1_ParamLimits

0x9ca1,	// (0x00096538) phob2_cc_data_pane_t1

0x9cb9,	// (0x00096550) phob2_cc_data_pane_t2_ParamLimits

0x9cb9,	// (0x00096550) phob2_cc_data_pane_t2

0x9cd1,	// (0x00096568) phob2_cc_data_pane_t3_ParamLimits

0x9cd1,	// (0x00096568) phob2_cc_data_pane_t3

0x0002,

0xfeef,	// (0x0009c786) phob2_cc_data_pane_t_ParamLimits

0xfeef,	// (0x0009c786) phob2_cc_data_pane_t

0xd337,	// (0x00099bce) phob2_cc_list_pane_ParamLimits

0xd337,	// (0x00099bce) phob2_cc_list_pane

0xc0b7,	// (0x0009894e) scroll_pane_cp035_ParamLimits

0xc0b7,	// (0x0009894e) scroll_pane_cp035

0x47c0,	// (0x00091057) bg_button_pane_cp033

0xd343,	// (0x00099bda) phob2_cc_button_pane_g1

0xd34f,	// (0x00099be6) phob2_cc_button_pane_t1

0xd364,	// (0x00099bfb) phob2_cc_button_pane_t2

0x0001,

0xfef6,	// (0x0009c78d) phob2_cc_button_pane_t

0x9ce9,	// (0x00096580) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9ce9,	// (0x00096580) list_double_large_graphic_phob2_cc_pane

0x9d17,	// (0x000965ae) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9d17,	// (0x000965ae) list_double_large_graphic_phob2_cc_pane_g1

0x9d23,	// (0x000965ba) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9d23,	// (0x000965ba) list_double_large_graphic_phob2_cc_pane_g2

0x9d2f,	// (0x000965c6) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9d2f,	// (0x000965c6) list_double_large_graphic_phob2_cc_pane_g3

0x9d3b,	// (0x000965d2) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9d3b,	// (0x000965d2) list_double_large_graphic_phob2_cc_pane_g4

0x9d47,	// (0x000965de) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9d47,	// (0x000965de) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfefb,	// (0x0009c792) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfefb,	// (0x0009c792) list_double_large_graphic_phob2_cc_pane_g

0x9d53,	// (0x000965ea) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9d53,	// (0x000965ea) list_double_large_graphic_phob2_cc_pane_t1

0x9d7c,	// (0x00096613) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9d7c,	// (0x00096613) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff06,	// (0x0009c79d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff06,	// (0x0009c79d) list_double_large_graphic_phob2_cc_pane_t

0xd376,	// (0x00099c0d) list_highlight_pane_cp025_ParamLimits

0xd376,	// (0x00099c0d) list_highlight_pane_cp025

0x47c0,	// (0x00091057) bg_button_pane_cp033_ParamLimits

0xd343,	// (0x00099bda) phob2_cc_button_pane_g1_ParamLimits

0xd34f,	// (0x00099be6) phob2_cc_button_pane_t1_ParamLimits

0xd364,	// (0x00099bfb) phob2_cc_button_pane_t2_ParamLimits

0xfef6,	// (0x0009c78d) phob2_cc_button_pane_t_ParamLimits

0x0ece,	// (0x0008d765) popup_wgtman_window

0xc1ba,	// (0x00098a51) scroll_pane_cp038

0x975a,	// (0x00095ff1) wgtman_btn_pane_cp_01_ParamLimits

0x975a,	// (0x00095ff1) wgtman_btn_pane_cp_01

0xd384,	// (0x00099c1b) wgtman_content_pane

0xd38d,	// (0x00099c24) wgtman_heading_pane

0xd45f,	// (0x00099cf6) bg_heading_pane_cp02

0xd396,	// (0x00099c2d) wgtman_heading_pane_g1

0xd39e,	// (0x00099c35) wgtman_heading_pane_t1

0xd3ac,	// (0x00099c43) scroll_pane_cp036

0xd3b4,	// (0x00099c4b) wgtman_list_pane

0xd3bc,	// (0x00099c53) wgtman_list_pane_t1_ParamLimits

0xd3bc,	// (0x00099c53) wgtman_list_pane_t1

0xd512,	// (0x00099da9) cam4_grid_pane

0x7503,	// (0x00093d9a) bg_button_pane_cp015_ParamLimits

0x7513,	// (0x00093daa) bg_button_pane_cp016_ParamLimits

0x7525,	// (0x00093dbc) bg_button_pane_cp017_ParamLimits

0x7575,	// (0x00093e0c) popup_vitu2_query_window_g3_ParamLimits

0x7575,	// (0x00093e0c) popup_vitu2_query_window_g3

0x7628,	// (0x00093ebf) popup_vitu2_query_window_t6_ParamLimits

0x7628,	// (0x00093ebf) popup_vitu2_query_window_t6

0x7653,	// (0x00093eea) popup_vitu2_query_window_t7_ParamLimits

0x7653,	// (0x00093eea) popup_vitu2_query_window_t7

0xb590,	// (0x00097e27) cam4_grid_pane_g1

0xb599,	// (0x00097e30) cam4_grid_pane_g2

0xd3d3,	// (0x00099c6a) cam4_grid_pane_g3

0xd3dc,	// (0x00099c73) cam4_grid_pane_g4

0x0003,

0xff0b,	// (0x0009c7a2) cam4_grid_pane_g

0x1dc8,	// (0x0008e65f) aid_placing_vt_slider_lsc_ParamLimits

0x2038,	// (0x0008e8cf) vidtel_button_pane_ParamLimits

0x2038,	// (0x0008e8cf) vidtel_button_pane

0xd45f,	// (0x00099cf6) bg_button_pane_cp034

0x9da5,	// (0x0009663c) vidtel_button_pane_g1

0x9dad,	// (0x00096644) vidtel_button_pane_t1

0xb82a,	// (0x000980c1) aid_size_vtel_slider_touch

0xc0b7,	// (0x0009894e) scroll_pane_cp039

0xc1e9,	// (0x00098a80) ncim_query_button_pane_cp01_ParamLimits

0xc208,	// (0x00098a9f) ncimui_query_pane_g1_ParamLimits

0x47c0,	// (0x00091057) input_focus_pane_cp012_ParamLimits

0xc22d,	// (0x00098ac4) ncim_query_entry_pane_t1_ParamLimits

0xc0b7,	// (0x0009894e) scroll_pane_cp039_ParamLimits

0xe8eb,	// (0x0009b182) navi_pane_bcale_mc_g1

0xe8f3,	// (0x0009b18a) navi_pane_bcale_mc_t1

0xc7c4,	// (0x0009905b) main_sp_fs_email_pane_g1

0xc7d0,	// (0x00099067) main_sp_fs_email_pane_g2

0x0001,

0xfc9c,	// (0x0009c533) main_sp_fs_email_pane_g

0xcd19,	// (0x000995b0) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcd19,	// (0x000995b0) list_single_cale_mrui_row_pane_g3

0x92ed,	// (0x00095b84) list_single_recal_day_pane_g5_event_pane

0xcef2,	// (0x00099789) list_single_recal_day_pane_g7

0xd3e5,	// (0x00099c7c) list_recal_day_event_pane_cp01

0xd3ee,	// (0x00099c85) list_recal_vselct_arw_lo_pane_cp01

0xd3f6,	// (0x00099c8d) list_recal_vselct_arw_up_pane_cp01

0xd3fe,	// (0x00099c95) list_recal_vselct_pane_cp01

0xb872,	// (0x00098109) list_recal_day_event_pane_cp01_g1

0xd408,	// (0x00099c9f) list_recal_day_event_pane_cp01_t1

0xcefa,	// (0x00099791) list_single_recal_day_pane_t1_ParamLimits

0x9303,	// (0x00095b9a) list_single_recal_day_pane_t2_ParamLimits

0xfdf9,	// (0x0009c690) list_single_recal_day_pane_t_ParamLimits

0xdd42,	// (0x0009a5d9) bg_notes_pane_ParamLimits

0xdde5,	// (0x0009a67c) list_notes_pane_ParamLimits

0x11c1,	// (0x0008da58) scroll_pane_cp06_ParamLimits

0xde0b,	// (0x0009a6a2) main_notes_pane_ParamLimits

0xd45f,	// (0x00099cf6) main_welc_pane

0x9dc3,	// (0x0009665a) main_welc_body_pane_ParamLimits

0x9dc3,	// (0x0009665a) main_welc_body_pane

0x9ddf,	// (0x00096676) main_welc_opti_pane_ParamLimits

0x9ddf,	// (0x00096676) main_welc_opti_pane

0x9e1c,	// (0x000966b3) main_welc_pane_t1_ParamLimits

0x9e1c,	// (0x000966b3) main_welc_pane_t1

0x9e36,	// (0x000966cd) main_welc_body_row_pane_ParamLimits

0x9e36,	// (0x000966cd) main_welc_body_row_pane

0xd416,	// (0x00099cad) main_welc_opti_row_pane_ParamLimits

0xd416,	// (0x00099cad) main_welc_opti_row_pane

0xd424,	// (0x00099cbb) main_welc_opti_row_pane_g1

0x9e49,	// (0x000966e0) main_welc_opti_row_pane_t1

0xd42c,	// (0x00099cc3) main_welc_body_row_pane_t1

0xd133,	// (0x000999ca) popup_notif_wgt_heading_pane

0xd14d,	// (0x000999e4) aid_size_list_notif_wgt_del_ParamLimits

0xd15a,	// (0x000999f1) list_notif_wgt_row_pane_g1_ParamLimits

0xd166,	// (0x000999fd) list_notif_wgt_row_pane_g2_ParamLimits

0xd17a,	// (0x00099a11) list_notif_wgt_row_pane_g3_ParamLimits

0xfe60,	// (0x0009c6f7) list_notif_wgt_row_pane_g_ParamLimits

0xd187,	// (0x00099a1e) list_notif_wgt_row_pane_t1_ParamLimits

0xd19d,	// (0x00099a34) list_notif_wgt_row_pane_t2_ParamLimits

0xd1af,	// (0x00099a46) list_notif_wgt_row_pane_t3_ParamLimits

0xfe67,	// (0x0009c6fe) list_notif_wgt_row_pane_t_ParamLimits

0x97f2,	// (0x00096089) listrow_wgtman_pane_g1_ParamLimits

0x97ff,	// (0x00096096) listrow_wgtman_pane_g2_ParamLimits

0xfe90,	// (0x0009c727) listrow_wgtman_pane_g_ParamLimits

0x9817,	// (0x000960ae) listrow_wgtman_pane_t1_ParamLimits

0x982f,	// (0x000960c6) listrow_wgtman_pane_t2_ParamLimits

0xfe95,	// (0x0009c72c) listrow_wgtman_pane_t_ParamLimits

0x9855,	// (0x000960ec) wait_bar_pane_cp09_ParamLimits

0xd45f,	// (0x00099cf6) bg_popup_heading_pane_cp02

0xd43b,	// (0x00099cd2) popup_notif_wgt_heading_pane_g1

0xd443,	// (0x00099cda) popup_notif_wgt_heading_pane_t1

0xa423,	// (0x00096cba) main_vids_pane

0xd45f,	// (0x00099cf6) vids_listscroll_pane

0x9e58,	// (0x000966ef) scroll_pane_cp040

0xd45f,	// (0x00099cf6) vids_list_pane

0x9e63,	// (0x000966fa) vids_list_double_pane_ParamLimits

0x9e63,	// (0x000966fa) vids_list_double_pane

0x9e70,	// (0x00096707) vids_list_double_pane_g1

0x9e79,	// (0x00096710) vids_list_double_pane_t1

0x9e89,	// (0x00096720) vids_list_double_pane_t2

0x0001,

0xff19,	// (0x0009c7b0) vids_list_double_pane_t

0x9f2b,	// (0x000967c2) main_ncimui_pane_ParamLimits

0x8169,	// (0x00094a00) main_ncimui_pane_g1_ParamLimits

0x8175,	// (0x00094a0c) main_ncimui_pane_g2_ParamLimits

0x8175,	// (0x00094a0c) main_ncimui_pane_g2

0x0001,

0xfba1,	// (0x0009c438) main_ncimui_pane_g_ParamLimits

0xfba1,	// (0x0009c438) main_ncimui_pane_g

0x9df6,	// (0x0009668d) main_welc_pane_g1_ParamLimits

0x9df6,	// (0x0009668d) main_welc_pane_g1

0x9e09,	// (0x000966a0) main_welc_pane_g2_ParamLimits

0x9e09,	// (0x000966a0) main_welc_pane_g2

0x0001,

0xff14,	// (0x0009c7ab) main_welc_pane_g_ParamLimits

0xff14,	// (0x0009c7ab) main_welc_pane_g

0xdd42,	// (0x0009a5d9) listscroll_mce_pane_ParamLimits

0x309c,	// (0x0008f933) wait_bar_pane_cp10

0xa409,	// (0x00096ca0) main_cale_day_pane_ParamLimits

0xa409,	// (0x00096ca0) main_cale_week_pane_ParamLimits

0xdd42,	// (0x0009a5d9) main_messa_pane_ParamLimits

0x5d40,	// (0x000925d7) main_clock2_btn_pane_ParamLimits

0x5d40,	// (0x000925d7) main_clock2_btn_pane

0xad54,	// (0x000975eb) main_clock2_btn_pane_cp01_ParamLimits

0xad54,	// (0x000975eb) main_clock2_btn_pane_cp01

0xcc9c,	// (0x00099533) list_cale_mrui_pane_ParamLimits

0xd1e3,	// (0x00099a7a) main_cf0_pane_g2

0x0001,

0xfe6e,	// (0x0009c705) main_cf0_pane_g

0x99f3,	// (0x0009628a) area_left_week_number_pane_ParamLimits

0x99ff,	// (0x00096296) area_top_day_name_pane_ParamLimits

0x9a10,	// (0x000962a7) frame_month_view_pane_ParamLimits

0xd2ec,	// (0x00099b83) grid_month_view_pane_ParamLimits

0xd2fa,	// (0x00099b91) frm_month_g1_ParamLimits

0x9a7d,	// (0x00096314) frm_month_g2_ParamLimits

0x9a8e,	// (0x00096325) frm_month_g3_ParamLimits

0x9a9f,	// (0x00096336) frm_month_g4_ParamLimits

0x9ab0,	// (0x00096347) frm_month_g5_ParamLimits

0x9ac1,	// (0x00096358) frm_month_g6_ParamLimits

0x9ad2,	// (0x00096369) frm_month_g7_ParamLimits

0xd307,	// (0x00099b9e) frm_month_g8_ParamLimits

0x9ae3,	// (0x0009637a) frm_month_g9_ParamLimits

0x9af3,	// (0x0009638a) frm_month_g10_ParamLimits

0x9b03,	// (0x0009639a) frm_month_g11_ParamLimits

0x9b13,	// (0x000963aa) frm_month_g12_ParamLimits

0x9b23,	// (0x000963ba) frm_month_g13_ParamLimits

0x9b33,	// (0x000963ca) frm_month_g14_ParamLimits

0x9b43,	// (0x000963da) frm_month_g15_ParamLimits

0x9b55,	// (0x000963ec) frm_month_g16_ParamLimits

0xfebf,	// (0x0009c756) frm_month_g_ParamLimits

0xd314,	// (0x00099bab) cell_top_day_name_pane_t1_ParamLimits

0x9b67,	// (0x000963fe) cell_area_left_week_number_pane_g1_ParamLimits

0x9b73,	// (0x0009640a) cell_area_left_week_number_pane_t1_ParamLimits

0xab58,	// (0x000973ef) cell_month_view_pane_g1_ParamLimits

0x9b86,	// (0x0009641d) cell_month_view_pane_t1_ParamLimits

0xdd3a,	// (0x0009a5d1) main_clock2_btn_pane_g1

0xd451,	// (0x00099ce8) main_clock2_btn_pane_t1

0x47c0,	// (0x00091057) listscroll_cmail_pane_ParamLimits

0xc7c4,	// (0x0009905b) main_sp_fs_email_pane_g1_ParamLimits

0xc7d0,	// (0x00099067) main_sp_fs_email_pane_g2_ParamLimits

0xfc9c,	// (0x0009c533) main_sp_fs_email_pane_g_ParamLimits

0xce6e,	// (0x00099705) list_recal_day_pane_ParamLimits

0xce7f,	// (0x00099716) mian_recal_day_pane_t1

0x8b8f,	// (0x00095426) list_single_dyc_row_text_pane_t4_ParamLimits

0x8b8f,	// (0x00095426) list_single_dyc_row_text_pane_t4

0x8bc6,	// (0x0009545d) list_single_dyc_row_text_pane_t5_ParamLimits

0x8bc6,	// (0x0009545d) list_single_dyc_row_text_pane_t5

0xc8a0,	// (0x00099137) list_single_dyc_row_text_pane_t6_ParamLimits

0xc8a0,	// (0x00099137) list_single_dyc_row_text_pane_t6

0x2bcd,	// (0x0008f464) aid_mgn_list_cale_time_pane

0x9f2b,	// (0x000967c2) main_gallery2_pane_ParamLimits

0xad68,	// (0x000975ff) main_clock2_pane_cp01_t1

0xad76,	// (0x0009760d) main_clock2_pane_cp01_t3

0x0001,

0xf783,	// (0x0009c01a) main_clock2_pane_cp01_t

0x1543,	// (0x0008ddda) cale_week_scroll_pane_g16_ParamLimits

0x1543,	// (0x0008ddda) cale_week_scroll_pane_g16

0xdfda,	// (0x0009a871) vorec_slider_pane

0x9dad,	// (0x00096644) vidtel_button_pane_t1_ParamLimits

0x93a8,	// (0x00095c3f) main_fs_bigclock_clock_pane_g1_ParamLimits

0x93ba,	// (0x00095c51) main_fs_bigclock_clock_pane_g2_ParamLimits

0x93cb,	// (0x00095c62) main_fs_bigclock_clock_pane_g3_ParamLimits

0x93cb,	// (0x00095c62) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe1c,	// (0x0009c6b3) main_fs_bigclock_clock_pane_g_ParamLimits

0x93de,	// (0x00095c75) main_fs_bigclock_clock_pane_t1_ParamLimits

0x93f9,	// (0x00095c90) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe25,	// (0x0009c6bc) main_fs_bigclock_clock_pane_t_ParamLimits

0x55c6,	// (0x00091e5d) main_mup3_lyrics_pane_ParamLimits

0x55c6,	// (0x00091e5d) main_mup3_lyrics_pane

0x9ebb,	// (0x00096752) main_mup3_lyrics_pane_t1_ParamLimits

0x9ebb,	// (0x00096752) main_mup3_lyrics_pane_t1

0xb23f,	// (0x00097ad6) aid_main_mp4_pane_t1_area

0xb23f,	// (0x00097ad6) aid_main_mp4_pane_t2_area

0xb2e7,	// (0x00097b7e) main_mp4_pane_g7_ParamLimits

0xb2e7,	// (0x00097b7e) main_mp4_pane_g7

0xb2f3,	// (0x00097b8a) main_mp4_pane_g8_ParamLimits

0xb2f3,	// (0x00097b8a) main_mp4_pane_g8

0x6799,	// (0x00093030) aid_call6_pane_g1_size

0x9d03,	// (0x0009659a) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9d03,	// (0x0009659a) list_double_large_graphic_phob2_other_pane

0xe830,	// (0x0009b0c7) list_double_large_graphic_phob2_other_pane_g1

0xd45f,	// (0x00099cf6) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Large
