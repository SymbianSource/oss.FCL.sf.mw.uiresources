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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0007c61c };

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
0x59e9,	// (0x00082005) Screen

0x59f5,	// (0x00082011) application_window

0x5a51,	// (0x0008206d) area_bottom_pane_ParamLimits

0x5a51,	// (0x0008206d) area_bottom_pane

0x5aa9,	// (0x000820c5) area_top_pane_ParamLimits

0x5aa9,	// (0x000820c5) area_top_pane

0x5b0d,	// (0x00082129) call_video_uplink_pane_ParamLimits

0x5b0d,	// (0x00082129) call_video_uplink_pane

0x5b4c,	// (0x00082168) main_pane_ParamLimits

0x5b4c,	// (0x00082168) main_pane

0x173c,	// (0x0007dd58) context_pane

0x89db,	// (0x00084ff7) navi_pane

0x8a01,	// (0x0008501d) popup_cale_events_window_ParamLimits

0x8a01,	// (0x0008501d) popup_cale_events_window

0x174f,	// (0x0007dd6b) popup_mup_playback_window

0x8a19,	// (0x00085035) signal_pane

0xe374,	// (0x0008a990) main_browser_pane

0xe526,	// (0x0008ab42) main_burst_pane

0x8859,	// (0x00084e75) main_calc_pane

0x16dc,	// (0x0007dcf8) main_cale_day_pane

0x617a,	// (0x00082796) main_cale_month_pane

0x16dc,	// (0x0007dcf8) main_cale_week_pane

0xe526,	// (0x0008ab42) main_call_pane

0xe01e,	// (0x0008a63a) main_call_poc_pane

0xe526,	// (0x0008ab42) main_camera_pane

0xe526,	// (0x0008ab42) main_chi_dic_pane

0xece4,	// (0x0008b300) main_clock_pane

0xe01e,	// (0x0008a63a) main_fmradio_pane

0xe526,	// (0x0008ab42) main_graph_messa_pane

0xe01e,	// (0x0008a63a) main_help_pane

0xe374,	// (0x0008a990) main_im_pane

0xe279,	// (0x0008a895) main_image_pane_ParamLimits

0xe279,	// (0x0008a895) main_image_pane

0xe01e,	// (0x0008a63a) main_location2_pane

0xe526,	// (0x0008ab42) main_location_pane

0xe279,	// (0x0008a895) main_messa_pane

0xe01e,	// (0x0008a63a) main_mp2_pane

0xe526,	// (0x0008ab42) main_mp_pane

0xe01e,	// (0x0008a63a) main_msg_pane

0xe01e,	// (0x0008a63a) main_mup_eq_pane

0xe01e,	// (0x0008a63a) main_mup_pane

0xe374,	// (0x0008a990) main_notes_pane

0xe01e,	// (0x0008a63a) main_pec_pane

0xe01e,	// (0x0008a63a) main_phob_pane

0xe01e,	// (0x0008a63a) main_pinb_pane

0xe01e,	// (0x0008a63a) main_postcard_pane

0xe01e,	// (0x0008a63a) main_qdial_pane

0xe526,	// (0x0008ab42) main_skin_pane

0xe01e,	// (0x0008a63a) main_smil2_pane

0xe526,	// (0x0008ab42) main_smil_pane

0xe526,	// (0x0008ab42) main_video_pane

0xe526,	// (0x0008ab42) main_video_tele_pane

0xe279,	// (0x0008a895) main_viewer_pane_ParamLimits

0xe279,	// (0x0008a895) main_viewer_pane

0xe526,	// (0x0008ab42) main_vorec_pane

0x88a5,	// (0x00084ec1) popup_blid_sat_info_window_ParamLimits

0x88a5,	// (0x00084ec1) popup_blid_sat_info_window

0x88c5,	// (0x00084ee1) popup_dyc_status_message_window_ParamLimits

0x88c5,	// (0x00084ee1) popup_dyc_status_message_window

0x88d5,	// (0x00084ef1) popup_grid_large_graphic_window_ParamLimits

0x88d5,	// (0x00084ef1) popup_grid_large_graphic_window

0x8966,	// (0x00084f82) popup_loc_request_window_ParamLimits

0x8966,	// (0x00084f82) popup_loc_request_window

0x89b3,	// (0x00084fcf) popup_wml_address_window_ParamLimits

0x89b3,	// (0x00084fcf) popup_wml_address_window

0x8731,	// (0x00084d4d) call_muted_g1

0x83ac,	// (0x000849c8) popup_call_audio_conf_window_ParamLimits

0x83ac,	// (0x000849c8) popup_call_audio_conf_window

0x8741,	// (0x00084d5d) popup_call_audio_first_window_ParamLimits

0x8741,	// (0x00084d5d) popup_call_audio_first_window

0x8781,	// (0x00084d9d) popup_call_audio_in_window_ParamLimits

0x8781,	// (0x00084d9d) popup_call_audio_in_window

0x87a5,	// (0x00084dc1) popup_call_audio_out_window_ParamLimits

0x87a5,	// (0x00084dc1) popup_call_audio_out_window

0x87c7,	// (0x00084de3) popup_call_audio_second_window_ParamLimits

0x87c7,	// (0x00084de3) popup_call_audio_second_window

0x87f7,	// (0x00084e13) popup_call_audio_wait_window_ParamLimits

0x87f7,	// (0x00084e13) popup_call_audio_wait_window

0x8818,	// (0x00084e34) popup_number_entry_window_ParamLimits

0x8818,	// (0x00084e34) popup_number_entry_window

0xdc0b,	// (0x0008a227) bg_popup_call_pane_cp05_ParamLimits

0xdc0b,	// (0x0008a227) bg_popup_call_pane_cp05

0xdc2b,	// (0x0008a247) popup_number_entry_window_t1

0xdc3e,	// (0x0008a25a) popup_number_entry_window_t2

0xdc50,	// (0x0008a26c) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x0008b687) popup_number_entry_window_t

0xdc62,	// (0x0008a27e) text_title_cp2

0xdc75,	// (0x0008a291) bg_popup_call_pane_cp_ParamLimits

0xdc75,	// (0x0008a291) bg_popup_call_pane_cp

0xdc83,	// (0x0008a29f) call_thumbnail_pane

0xdc8b,	// (0x0008a2a7) popup_call_audio_in_window_g1_ParamLimits

0xdc8b,	// (0x0008a2a7) popup_call_audio_in_window_g1

0xdc97,	// (0x0008a2b3) popup_call_audio_in_window_g2_ParamLimits

0xdc97,	// (0x0008a2b3) popup_call_audio_in_window_g2

0xdca3,	// (0x0008a2bf) popup_call_audio_in_window_g3_ParamLimits

0xdca3,	// (0x0008a2bf) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x0008b690) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x0008b690) popup_call_audio_in_window_g

0xdcaf,	// (0x0008a2cb) popup_call_audio_in_window_t1_ParamLimits

0xdcaf,	// (0x0008a2cb) popup_call_audio_in_window_t1

0xdccb,	// (0x0008a2e7) popup_call_audio_in_window_t2_ParamLimits

0xdccb,	// (0x0008a2e7) popup_call_audio_in_window_t2

0xdce7,	// (0x0008a303) popup_call_audio_in_window_t3_ParamLimits

0xdce7,	// (0x0008a303) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x0008b697) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x0008b697) popup_call_audio_in_window_t

0xdc75,	// (0x0008a291) bg_popup_call_pane_cp01_ParamLimits

0xdc75,	// (0x0008a291) bg_popup_call_pane_cp01

0xdc83,	// (0x0008a29f) call_thumbnail_pane_cp02

0xdcfa,	// (0x0008a316) call_type_pane_cp022

0xdd02,	// (0x0008a31e) popup_call_audio_out_window_g1_ParamLimits

0xdd02,	// (0x0008a31e) popup_call_audio_out_window_g1

0xdd14,	// (0x0008a330) popup_call_audio_out_window_g2_ParamLimits

0xdd14,	// (0x0008a330) popup_call_audio_out_window_g2

0xdd20,	// (0x0008a33c) popup_call_audio_out_window_g3_ParamLimits

0xdd20,	// (0x0008a33c) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x0008b69e) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x0008b69e) popup_call_audio_out_window_g

0xdd32,	// (0x0008a34e) popup_call_audio_out_window_t1_ParamLimits

0xdd32,	// (0x0008a34e) popup_call_audio_out_window_t1

0xdd4a,	// (0x0008a366) popup_call_audio_out_window_t2_ParamLimits

0xdd4a,	// (0x0008a366) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x0008b6a5) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x0008b6a5) popup_call_audio_out_window_t

0xdd5f,	// (0x0008a37b) bg_popup_call_pane_ParamLimits

0xdd5f,	// (0x0008a37b) bg_popup_call_pane

0x5d65,	// (0x00082381) call_thumbnail_pane_cp_ParamLimits

0x5d65,	// (0x00082381) call_thumbnail_pane_cp

0xdde3,	// (0x0008a3ff) call_type_pane_cp01_ParamLimits

0xdde3,	// (0x0008a3ff) call_type_pane_cp01

0xde27,	// (0x0008a443) popup_call_audio_first_window_g1_ParamLimits

0xde27,	// (0x0008a443) popup_call_audio_first_window_g1

0xde73,	// (0x0008a48f) popup_call_audio_first_window_g2_ParamLimits

0xde73,	// (0x0008a48f) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x0008b6aa) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x0008b6aa) popup_call_audio_first_window_g

0xdeb7,	// (0x0008a4d3) popup_call_audio_first_window_t1_ParamLimits

0xdeb7,	// (0x0008a4d3) popup_call_audio_first_window_t1

0xdf63,	// (0x0008a57f) popup_call_audio_first_window_t4_ParamLimits

0xdf63,	// (0x0008a57f) popup_call_audio_first_window_t4

0xdfef,	// (0x0008a60b) popup_call_audio_first_window_t5_ParamLimits

0xdfef,	// (0x0008a60b) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x0008b6af) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x0008b6af) popup_call_audio_first_window_t

0xe01e,	// (0x0008a63a) bg_popup_call_pane_cp02

0xe028,	// (0x0008a644) call_type_pane_cp023

0xe030,	// (0x0008a64c) popup_call_audio_wait_window_g1

0xe038,	// (0x0008a654) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x0008b6b6) popup_call_audio_wait_window_g

0xe040,	// (0x0008a65c) popup_call_audio_wait_window_t3

0xe04e,	// (0x0008a66a) bg_popup_call_pane_cp03_ParamLimits

0xe04e,	// (0x0008a66a) bg_popup_call_pane_cp03

0xe0ae,	// (0x0008a6ca) call_thumbnail_pane_cp011_ParamLimits

0xe0ae,	// (0x0008a6ca) call_thumbnail_pane_cp011

0xe0ba,	// (0x0008a6d6) call_type_pane_cp034_ParamLimits

0xe0ba,	// (0x0008a6d6) call_type_pane_cp034

0xe0f6,	// (0x0008a712) popup_call_audio_second_window_g1_ParamLimits

0xe0f6,	// (0x0008a712) popup_call_audio_second_window_g1

0xe132,	// (0x0008a74e) popup_call_audio_second_window_g2_ParamLimits

0xe132,	// (0x0008a74e) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x0008b6bb) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x0008b6bb) popup_call_audio_second_window_g

0xe16e,	// (0x0008a78a) popup_call_audio_second_window_t1_ParamLimits

0xe16e,	// (0x0008a78a) popup_call_audio_second_window_t1

0xe1ef,	// (0x0008a80b) popup_call_audio_second_window_t2_ParamLimits

0xe1ef,	// (0x0008a80b) popup_call_audio_second_window_t2

0xe225,	// (0x0008a841) popup_call_audio_second_window_t3_ParamLimits

0xe225,	// (0x0008a841) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x0008b6c0) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x0008b6c0) popup_call_audio_second_window_t

0xe01e,	// (0x0008a63a) bg_popup_call_pane_cp04

0xe25b,	// (0x0008a877) list_conf_pane

0xe263,	// (0x0008a87f) popup_call_audio_conf_window_t1

0xe271,	// (0x0008a88d) call_thumbnail_pane_g1

0xe279,	// (0x0008a895) bg_pinb_pane_ParamLimits

0xe279,	// (0x0008a895) bg_pinb_pane

0xe287,	// (0x0008a8a3) find_pinb_pane

0xe279,	// (0x0008a895) listscroll_pinb_pane_ParamLimits

0xe279,	// (0x0008a895) listscroll_pinb_pane

0xe291,	// (0x0008a8ad) pinb_bg_pane_g1

0xe291,	// (0x0008a8ad) pinb_bg_pane_g2

0xe291,	// (0x0008a8ad) pinb_bg_pane_g3

0xe291,	// (0x0008a8ad) pinb_bg_pane_g4

0xe291,	// (0x0008a8ad) pinb_bg_pane_g5

0xe291,	// (0x0008a8ad) pinb_bg_pane_g6

0xe291,	// (0x0008a8ad) pinb_bg_pane_g7

0xe291,	// (0x0008a8ad) pinb_bg_pane_g8

0xe291,	// (0x0008a8ad) pinb_bg_pane_g9

0xe291,	// (0x0008a8ad) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x0008b6c7) pinb_bg_pane_g

0xdc01,	// (0x0008a21d) grid_pinb_pane

0xdc01,	// (0x0008a21d) list_pinb_pane

0xe29b,	// (0x0008a8b7) scroll_pane_cp01_ParamLimits

0xe29b,	// (0x0008a8b7) scroll_pane_cp01

0xe2a9,	// (0x0008a8c5) find_pinb_pane_g1_ParamLimits

0xe2a9,	// (0x0008a8c5) find_pinb_pane_g1

0xe2c1,	// (0x0008a8dd) find_pinb_pane_t1

0xe2d3,	// (0x0008a8ef) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x0008b6e1) find_pinb_pane_t

0xe2e8,	// (0x0008a904) input_focus_pane_cp01_ParamLimits

0xe2e8,	// (0x0008a904) input_focus_pane_cp01

0xe2f4,	// (0x0008a910) cell_pinb_pane_ParamLimits

0xe2f4,	// (0x0008a910) cell_pinb_pane

0xe302,	// (0x0008a91e) cell_pinb_pane_g1_ParamLimits

0xe302,	// (0x0008a91e) cell_pinb_pane_g1

0xe310,	// (0x0008a92c) cell_pinb_pane_g2_ParamLimits

0xe310,	// (0x0008a92c) cell_pinb_pane_g2

0xe310,	// (0x0008a92c) cell_pinb_pane_g3_ParamLimits

0xe310,	// (0x0008a92c) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x0008b6e6) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x0008b6e6) cell_pinb_pane_g

0xe01e,	// (0x0008a63a) grid_highlight_pane_cp01

0xe2f4,	// (0x0008a910) list_pinb_item_pane_ParamLimits

0xe2f4,	// (0x0008a910) list_pinb_item_pane

0xdc01,	// (0x0008a21d) list_highlight_pane_cp02

0xe31e,	// (0x0008a93a) list_pinb_item_pane_g1_ParamLimits

0xe31e,	// (0x0008a93a) list_pinb_item_pane_g1

0xe310,	// (0x0008a92c) list_pinb_item_pane_g2_ParamLimits

0xe310,	// (0x0008a92c) list_pinb_item_pane_g2

0xe302,	// (0x0008a91e) list_pinb_item_pane_g3_ParamLimits

0xe302,	// (0x0008a91e) list_pinb_item_pane_g3

0xe310,	// (0x0008a92c) list_pinb_item_pane_g4_ParamLimits

0xe310,	// (0x0008a92c) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x0008b6ed) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x0008b6ed) list_pinb_item_pane_g

0xe32c,	// (0x0008a948) list_pinb_item_pane_t1_ParamLimits

0xe32c,	// (0x0008a948) list_pinb_item_pane_t1

0x5da3,	// (0x000823bf) calc_display_pane

0x5dc1,	// (0x000823dd) calc_paper_pane

0x5ddd,	// (0x000823f9) grid_calc_pane

0xe01e,	// (0x0008a63a) bg_list_pane_cp01

0x5e09,	// (0x00082425) clock_g1

0x5e11,	// (0x0008242d) clock_g2

0x0001,

0xf0da,	// (0x0008b6f6) clock_g

0x5e1b,	// (0x00082437) clock_t1_ParamLimits

0x5e1b,	// (0x00082437) clock_t1

0x5e30,	// (0x0008244c) clock_t2_ParamLimits

0x5e30,	// (0x0008244c) clock_t2

0x5e42,	// (0x0008245e) clock_t3_ParamLimits

0x5e42,	// (0x0008245e) clock_t3

0x5e54,	// (0x00082470) clock_t4_ParamLimits

0x5e54,	// (0x00082470) clock_t4

0x5e66,	// (0x00082482) clock_t5_ParamLimits

0x5e66,	// (0x00082482) clock_t5

0x5e7b,	// (0x00082497) clock_t6_ParamLimits

0x5e7b,	// (0x00082497) clock_t6

0x5e8d,	// (0x000824a9) clock_t7_ParamLimits

0x5e8d,	// (0x000824a9) clock_t7

0x5e9f,	// (0x000824bb) clock_t8_ParamLimits

0x5e9f,	// (0x000824bb) clock_t8

0x5eb5,	// (0x000824d1) clock_t9_ParamLimits

0x5eb5,	// (0x000824d1) clock_t9

0x0008,

0xf0df,	// (0x0008b6fb) clock_t_ParamLimits

0xf0df,	// (0x0008b6fb) clock_t

0xe340,	// (0x0008a95c) popup_clock_analogue_window_cp02

0xe340,	// (0x0008a95c) popup_clock_digital_window_cp01

0xe01e,	// (0x0008a63a) listscroll_help_pane

0xe01e,	// (0x0008a63a) phob_pre_status_pane

0xe348,	// (0x0008a964) grid_qdial_pane

0x5ecb,	// (0x000824e7) listscroll_mce_pane

0xe279,	// (0x0008a895) bg_notes_pane

0xe352,	// (0x0008a96e) list_notes_pane

0x5ee9,	// (0x00082505) scroll_pane_cp06

0xe360,	// (0x0008a97c) bg_calc_paper_pane

0x5ef8,	// (0x00082514) list_calc_pane

0xe374,	// (0x0008a990) bg_calc_display_pane

0x5f12,	// (0x0008252e) calc_display_pane_t1

0x5f27,	// (0x00082543) calc_display_pane_t2

0x5f3c,	// (0x00082558) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x0008b70e) calc_display_pane_t

0x5f4e,	// (0x0008256a) cell_calc_pane_ParamLimits

0x5f4e,	// (0x0008256a) cell_calc_pane

0xe380,	// (0x0008a99c) bg_calc_paper_pane_g1

0xe38c,	// (0x0008a9a8) bg_calc_paper_pane_g2

0xe398,	// (0x0008a9b4) bg_calc_paper_pane_g3

0xe3a4,	// (0x0008a9c0) bg_calc_paper_pane_g4

0xe3b0,	// (0x0008a9cc) bg_calc_paper_pane_g5

0x5f7b,	// (0x00082597) bg_calc_paper_pane_g6

0x5f8c,	// (0x000825a8) bg_calc_paper_pane_g7

0x5f9d,	// (0x000825b9) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x0008b715) bg_calc_paper_pane_g

0x5fae,	// (0x000825ca) calc_bg_paper_pane_g9

0x5fbf,	// (0x000825db) list_calc_item_pane_ParamLimits

0x5fbf,	// (0x000825db) list_calc_item_pane

0xe3bc,	// (0x0008a9d8) list_calc_item_pane_g1

0x5feb,	// (0x00082607) list_calc_item_pane_t1_ParamLimits

0x5feb,	// (0x00082607) list_calc_item_pane_t1

0x5ffd,	// (0x00082619) list_calc_item_pane_t2_ParamLimits

0x5ffd,	// (0x00082619) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x0008b726) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x0008b726) list_calc_item_pane_t

0xe291,	// (0x0008a8ad) cell_calc_pane_g1

0xe3c9,	// (0x0008a9e5) grid_highlight_pane_cp02

0x602d,	// (0x00082649) bg_calc_display_pane_g1

0x6036,	// (0x00082652) bg_calc_display_pane_g2

0x6040,	// (0x0008265c) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x0008b730) bg_calc_display_pane_g

0x6049,	// (0x00082665) cell_qdial_pane_ParamLimits

0x6049,	// (0x00082665) cell_qdial_pane

0x605d,	// (0x00082679) cell_qdial_pane_g1_ParamLimits

0x605d,	// (0x00082679) cell_qdial_pane_g1

0x606a,	// (0x00082686) cell_qdial_pane_g2_ParamLimits

0x606a,	// (0x00082686) cell_qdial_pane_g2

0xe3eb,	// (0x0008aa07) cell_qdial_pane_g3_ParamLimits

0xe3eb,	// (0x0008aa07) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x0008b737) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x0008b737) cell_qdial_pane_g

0x6088,	// (0x000826a4) cell_qdial_pane_t1_ParamLimits

0x6088,	// (0x000826a4) cell_qdial_pane_t1

0x60a0,	// (0x000826bc) cell_qdial_pane_t2_ParamLimits

0x60a0,	// (0x000826bc) cell_qdial_pane_t2

0x60b3,	// (0x000826cf) cell_qdial_pane_t3_ParamLimits

0x60b3,	// (0x000826cf) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x0008b740) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x0008b740) cell_qdial_pane_t

0xe01e,	// (0x0008a63a) grid_highlight_pane_cp04

0xe3f7,	// (0x0008aa13) thumbnail_qdial_pane_ParamLimits

0xe3f7,	// (0x0008aa13) thumbnail_qdial_pane

0xe453,	// (0x0008aa6f) list_help_pane

0xe45c,	// (0x0008aa78) scroll_pane_cp02

0x60c6,	// (0x000826e2) help_list_pane_t1_ParamLimits

0x60c6,	// (0x000826e2) help_list_pane_t1

0x60fc,	// (0x00082718) bg_notes_pane_g2

0x6104,	// (0x00082720) bg_notes_pane_g3

0x610c,	// (0x00082728) notes_bg_pane_g1

0x6114,	// (0x00082730) notes_bg_pane_g4

0x611c,	// (0x00082738) notes_bg_pane_g5

0x6124,	// (0x00082740) notes_bg_pane_g6

0x612c,	// (0x00082748) notes_bg_pane_g7

0x6134,	// (0x00082750) notes_bg_pane_g8

0x613c,	// (0x00082758) notes_bg_pane_g9

0x0006,

0xf142,	// (0x0008b75e) notes_bg_pane_g

0x6144,	// (0x00082760) list_notes_text_pane_ParamLimits

0x6144,	// (0x00082760) list_notes_text_pane

0xe465,	// (0x0008aa81) list_notes_text_pane_g1

0x616c,	// (0x00082788) list_notes_text_pane_t1

0x617a,	// (0x00082796) listscroll_cale_week_pane

0x619f,	// (0x000827bb) bg_cale_heading_pane

0xe488,	// (0x0008aaa4) bg_cale_pane_cp01

0x61bf,	// (0x000827db) cale_week_corner_pane

0x61d9,	// (0x000827f5) cale_week_day_heading_pane

0x61f9,	// (0x00082815) cale_week_scroll_pane_g1

0x6214,	// (0x00082830) cale_week_scroll_pane_g2

0x6227,	// (0x00082843) cale_week_scroll_pane_g3

0x623a,	// (0x00082856) cale_week_scroll_pane_g4

0x624d,	// (0x00082869) cale_week_scroll_pane_g5

0x6260,	// (0x0008287c) cale_week_scroll_pane_g6

0x6273,	// (0x0008288f) cale_week_scroll_pane_g7

0x6288,	// (0x000828a4) cale_week_scroll_pane_g8

0x629d,	// (0x000828b9) cale_week_scroll_pane_g9

0x62b0,	// (0x000828cc) cale_week_scroll_pane_g10

0x62c3,	// (0x000828df) cale_week_scroll_pane_g11

0x62d6,	// (0x000828f2) cale_week_scroll_pane_g12

0x62ed,	// (0x00082909) cale_week_scroll_pane_g13

0x6308,	// (0x00082924) cale_week_scroll_pane_g14

0x6323,	// (0x0008293f) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x0008b76d) cale_week_scroll_pane_g

0x6353,	// (0x0008296f) cale_week_time_pane

0x6368,	// (0x00082984) grid_cale_week_pane

0xe4b7,	// (0x0008aad3) scroll_pane_cp08

0x6387,	// (0x000829a3) cell_cale_week_pane_ParamLimits

0x6387,	// (0x000829a3) cell_cale_week_pane

0x63e9,	// (0x00082a05) cale_week_day_heading_pane_t1

0x6404,	// (0x00082a20) cale_week_day_heading_pane_t2

0x641f,	// (0x00082a3b) cale_week_day_heading_pane_t3

0x643a,	// (0x00082a56) cale_week_day_heading_pane_t4

0x6455,	// (0x00082a71) cale_week_day_heading_pane_t5

0x6470,	// (0x00082a8c) cale_week_day_heading_pane_t6

0x648b,	// (0x00082aa7) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x0008b78e) cale_week_day_heading_pane_t

0xe4d4,	// (0x0008aaf0) bg_cale_side_pane

0x64a6,	// (0x00082ac2) cale_week_time_pane_t1

0x64c0,	// (0x00082adc) cale_week_time_pane_t2

0x64da,	// (0x00082af6) cale_week_time_pane_t3

0x64f4,	// (0x00082b10) cale_week_time_pane_t4

0x650e,	// (0x00082b2a) cale_week_time_pane_t5

0x6528,	// (0x00082b44) cale_week_time_pane_t6

0x6546,	// (0x00082b62) cale_week_time_pane_t7

0x6568,	// (0x00082b84) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x0008b79d) cale_week_time_pane_t

0x658c,	// (0x00082ba8) cell_cale_week_pane_g2

0x65b0,	// (0x00082bcc) cell_cale_week_pane_g3_ParamLimits

0x65b0,	// (0x00082bcc) cell_cale_week_pane_g3

0xe4e2,	// (0x0008aafe) grid_highlight_pane_cp07

0xe4ea,	// (0x0008ab06) listscroll_gms_pane

0xe4f4,	// (0x0008ab10) grid_gms_pane

0xe4fd,	// (0x0008ab19) listscroll_gms_pane_g1

0xe505,	// (0x0008ab21) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x0008b7ae) listscroll_gms_pane_g

0x65c8,	// (0x00082be4) scroll_pane_cp010

0x65d3,	// (0x00082bef) cell_gms_pane_ParamLimits

0x65d3,	// (0x00082bef) cell_gms_pane

0x65e6,	// (0x00082c02) cell_gms_pane_g1

0xe50d,	// (0x0008ab29) cell_gms_pane_g2

0xe465,	// (0x0008aa81) cell_gms_pane_g3

0xe515,	// (0x0008ab31) cell_gms_pane_g4

0x0003,

0xf197,	// (0x0008b7b3) cell_gms_pane_g

0xe51e,	// (0x0008ab3a) grid_highlight_pane_cp09

0x86b5,	// (0x00084cd1) phob_pre_status_pane_g1

0x86bd,	// (0x00084cd9) phob_pre_status_pane_g2

0x86c5,	// (0x00084ce1) phob_pre_status_pane_g3

0x86cd,	// (0x00084ce9) phob_pre_status_pane_g4

0x0004,

0xf55b,	// (0x0008bb77) phob_pre_status_pane_g

0x86dd,	// (0x00084cf9) phob_pre_status_pane_t1

0x86ed,	// (0x00084d09) phob_pre_status_pane_t2

0x86fd,	// (0x00084d19) phob_pre_status_pane_t3

0x0002,

0xf566,	// (0x0008bb82) phob_pre_status_pane_t

0xe526,	// (0x0008ab42) bg_list_pane_cp05

0x65f6,	// (0x00082c12) grid_vorec_pane

0x6600,	// (0x00082c1c) vorec_t1

0x660e,	// (0x00082c2a) vorec_t2

0x661c,	// (0x00082c38) vorec_t3

0x662a,	// (0x00082c46) vorec_t4

0xd6d0,	// (0x00089cec) vorec_t5

0xd6de,	// (0x00089cfa) vorec_t6

0x0004,

0xf1a0,	// (0x0008b7bc) vorec_t

0xd6ec,	// (0x00089d08) wait_bar_pane_cp01

0x6646,	// (0x00082c62) cell_vorec_pane_ParamLimits

0x6646,	// (0x00082c62) cell_vorec_pane

0x6659,	// (0x00082c75) cell_vorec_pane_g1

0xe01e,	// (0x0008a63a) grid_highlight_pane_cp05

0xe2f4,	// (0x0008a910) cams_zoom_pane

0xe2f4,	// (0x0008a910) image_vga_pane

0xe310,	// (0x0008a92c) main_camera_pane_g1

0xe310,	// (0x0008a92c) main_camera_pane_g2

0xe310,	// (0x0008a92c) main_camera_pane_g3

0xe310,	// (0x0008a92c) main_camera_pane_g4

0xe310,	// (0x0008a92c) main_camera_pane_g5

0xe310,	// (0x0008a92c) main_camera_pane_g6

0xe310,	// (0x0008a92c) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x0008b7c7) main_camera_pane_g

0x0435,	// (0x0007ca51) main_camera_pane_t1

0x0435,	// (0x0007ca51) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x0008b7d8) main_camera_pane_t

0x6663,	// (0x00082c7f) cams_zoom_pane_cp_ParamLimits

0x6663,	// (0x00082c7f) cams_zoom_pane_cp

0x6691,	// (0x00082cad) image_cif_pane_ParamLimits

0x6691,	// (0x00082cad) image_cif_pane

0xdc01,	// (0x0008a21d) image_subqcif_pane

0x669f,	// (0x00082cbb) main_video_pane_g1_ParamLimits

0x669f,	// (0x00082cbb) main_video_pane_g1

0x66c7,	// (0x00082ce3) main_video_pane_g2_ParamLimits

0x66c7,	// (0x00082ce3) main_video_pane_g2

0x66fa,	// (0x00082d16) main_video_pane_g3_ParamLimits

0x66fa,	// (0x00082d16) main_video_pane_g3

0x66fa,	// (0x00082d16) main_video_pane_g4_ParamLimits

0x66fa,	// (0x00082d16) main_video_pane_g4

0x6728,	// (0x00082d44) main_video_pane_g5_ParamLimits

0x6728,	// (0x00082d44) main_video_pane_g5

0xe52e,	// (0x0008ab4a) main_video_pane_g6_ParamLimits

0xe52e,	// (0x0008ab4a) main_video_pane_g6

0x0006,

0xf1c1,	// (0x0008b7dd) main_video_pane_g_ParamLimits

0xf1c1,	// (0x0008b7dd) main_video_pane_g

0x6744,	// (0x00082d60) main_video_pane_t1_ParamLimits

0x6744,	// (0x00082d60) main_video_pane_t1

0xe548,	// (0x0008ab64) cams_zoom_pane_g1

0xe548,	// (0x0008ab64) cams_zoom_pane_g2

0xe548,	// (0x0008ab64) cams_zoom_pane_g3

0xe548,	// (0x0008ab64) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x0008b7ec) cams_zoom_pane_g

0x678a,	// (0x00082da6) grid_cams_pane

0x6798,	// (0x00082db4) linegrid_cams_pane

0x67a6,	// (0x00082dc2) cell_cams_pane_ParamLimits

0x67a6,	// (0x00082dc2) cell_cams_pane

0xe552,	// (0x0008ab6e) cams_burst_image_pane

0xe55a,	// (0x0008ab76) cell_cams_pane_g1

0xe01e,	// (0x0008a63a) grid_highlight_pane_cp03

0xe291,	// (0x0008a8ad) mp_bg_pane_g1

0xdc01,	// (0x0008a21d) bg_list_pane_cp03

0xdc01,	// (0x0008a21d) bg_mp_pane

0xdc01,	// (0x0008a21d) grid_mp_pane

0xe548,	// (0x0008ab64) media_player_g1

0xea78,	// (0x0008b094) media_player_t1

0xea78,	// (0x0008b094) media_player_t2

0xea78,	// (0x0008b094) media_player_t3

0xea78,	// (0x0008b094) media_player_t4

0xea78,	// (0x0008b094) media_player_t5

0xea78,	// (0x0008b094) media_player_t6

0xea78,	// (0x0008b094) media_player_t7

0x0006,

0xf545,	// (0x0008bb61) media_player_t

0xdc01,	// (0x0008a21d) wait_bar_pane_cp02

0xf52a,	// (0x0008bb46) main_usb_pane_t

0xece4,	// (0x0008b300) cell_mp_pane

0xe291,	// (0x0008a8ad) cell_mp_pane_g1

0xe01e,	// (0x0008a63a) grid_highlight_pane_cp06

0xe576,	// (0x0008ab92) grid_skin_colour_pane

0xe57e,	// (0x0008ab9a) list_highlight_pane_cp03

0x67b9,	// (0x00082dd5) skin_g1

0xe586,	// (0x0008aba2) skin_t1

0xe595,	// (0x0008abb1) skin_t2

0x0001,

0xf1f9,	// (0x0008b815) skin_t

0x67c3,	// (0x00082ddf) cell_skin_colour_pane_ParamLimits

0x67c3,	// (0x00082ddf) cell_skin_colour_pane

0xe5a3,	// (0x0008abbf) cell_skin_colour_pane_g1

0x6847,	// (0x00082e63) call_video_g1_ParamLimits

0x6847,	// (0x00082e63) call_video_g1

0x6857,	// (0x00082e73) call_video_g2_ParamLimits

0x6857,	// (0x00082e73) call_video_g2

0x0001,

0xf1fe,	// (0x0008b81a) call_video_g_ParamLimits

0xf1fe,	// (0x0008b81a) call_video_g

0x68b1,	// (0x00082ecd) call_video_uplink_pane_cp1_ParamLimits

0x68b1,	// (0x00082ecd) call_video_uplink_pane_cp1

0xe5b5,	// (0x0008abd1) call_video_uplink_pane_cp2

0x697d,	// (0x00082f99) video_down_crop_pane_ParamLimits

0x697d,	// (0x00082f99) video_down_crop_pane

0x6a7b,	// (0x00083097) video_down_pane_ParamLimits

0x6a7b,	// (0x00083097) video_down_pane

0xe5bd,	// (0x0008abd9) video_down_subqcif_pane_ParamLimits

0xe5bd,	// (0x0008abd9) video_down_subqcif_pane

0xe5d5,	// (0x0008abf1) video_down_subqcif_pane_cp_ParamLimits

0xe5d5,	// (0x0008abf1) video_down_subqcif_pane_cp

0xe5fb,	// (0x0008ac17) im_reading_pane_ParamLimits

0xe5fb,	// (0x0008ac17) im_reading_pane

0x6b9b,	// (0x000831b7) im_writing_pane_ParamLimits

0x6b9b,	// (0x000831b7) im_writing_pane

0x6bb9,	// (0x000831d5) im_reading_pane_t1

0xe615,	// (0x0008ac31) list_im_pane

0xe626,	// (0x0008ac42) scroll_pane_cp07

0x6c0d,	// (0x00083229) im_writing_pane_t1_ParamLimits

0x6c0d,	// (0x00083229) im_writing_pane_t1

0xe63f,	// (0x0008ac5b) im_writing_pane_t2_ParamLimits

0xe63f,	// (0x0008ac5b) im_writing_pane_t2

0x0001,

0xf208,	// (0x0008b824) im_writing_pane_t_ParamLimits

0xf208,	// (0x0008b824) im_writing_pane_t

0xe01e,	// (0x0008a63a) input_focus_pane_cp04

0xe01e,	// (0x0008a63a) input_focus_pane_cp05

0x6c22,	// (0x0008323e) list_im_single_pane_ParamLimits

0x6c22,	// (0x0008323e) list_im_single_pane

0x6c46,	// (0x00083262) list_single_im_pane_t1

0xe526,	// (0x0008ab42) blid_accuracy_pane

0xe526,	// (0x0008ab42) blid_compass_pane

0x1694,	// (0x0007dcb0) main_location_t1

0x1694,	// (0x0007dcb0) main_location_t2

0x1694,	// (0x0007dcb0) main_location_t3

0x0002,

0xf554,	// (0x0008bb70) main_location_t

0xe01e,	// (0x0008a63a) aid_levels_location

0xe291,	// (0x0008a8ad) blid_accuracy_pane_g1

0xe291,	// (0x0008a8ad) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x0008b878) blid_accuracy_pane_g

0xe687,	// (0x0008aca3) wml_content_pane

0xe6c5,	// (0x0008ace1) wml_button_pane_ParamLimits

0xe6c5,	// (0x0008ace1) wml_button_pane

0x6c55,	// (0x00083271) wml_list_single_large_pane_ParamLimits

0x6c55,	// (0x00083271) wml_list_single_large_pane

0x6c7f,	// (0x0008329b) wml_list_single_medium_pane_ParamLimits

0x6c7f,	// (0x0008329b) wml_list_single_medium_pane

0x6cb0,	// (0x000832cc) wml_list_single_small_pane_ParamLimits

0x6cb0,	// (0x000832cc) wml_list_single_small_pane

0xe6d9,	// (0x0008acf5) wml_selection_box_pane_ParamLimits

0xe6d9,	// (0x0008acf5) wml_selection_box_pane

0xe6ec,	// (0x0008ad08) wml_list_single_pane_t1

0xe6fb,	// (0x0008ad17) wml_list_single_medium_pane_t1

0xe70a,	// (0x0008ad26) wml_list_single_large_pane_t1

0xe719,	// (0x0008ad35) input_focus_pane_cp02_ParamLimits

0xe719,	// (0x0008ad35) input_focus_pane_cp02

0xe72c,	// (0x0008ad48) wml_selection_box_pane_g1

0xe735,	// (0x0008ad51) wml_selection_box_pane_t1_ParamLimits

0xe735,	// (0x0008ad51) wml_selection_box_pane_t1

0xe279,	// (0x0008a895) bg_wml_button_pane_ParamLimits

0xe279,	// (0x0008a895) bg_wml_button_pane

0xe74d,	// (0x0008ad69) wml_button_pane_g1

0xe755,	// (0x0008ad71) wml_button_pane_t1

0xe74d,	// (0x0008ad69) wml_button_bg_pane_g1

0xe765,	// (0x0008ad81) wml_button_bg_pane_g2

0xe76d,	// (0x0008ad89) wml_button_bg_pane_g3

0xe775,	// (0x0008ad91) wml_button_bg_pane_g4

0xe77d,	// (0x0008ad99) wml_button_bg_pane_g5

0xe785,	// (0x0008ada1) wml_button_bg_pane_g6

0xe78d,	// (0x0008ada9) wml_button_bg_pane_g7

0xe795,	// (0x0008adb1) wml_button_bg_pane_g8

0xe79d,	// (0x0008adb9) wml_button_bg_pane_g9

0x0008,

0xf20d,	// (0x0008b829) wml_button_bg_pane_g

0x6cea,	// (0x00083306) bg_list_pane_cp02

0xe7a5,	// (0x0008adc1) mce_header_pane_ParamLimits

0xe7a5,	// (0x0008adc1) mce_header_pane

0xe7bb,	// (0x0008add7) mce_icon_pane

0xe7bb,	// (0x0008add7) mce_image_pane

0x6cf2,	// (0x0008330e) mce_text_pane_ParamLimits

0x6cf2,	// (0x0008330e) mce_text_pane

0x6d05,	// (0x00083321) scroll_pane_cp03

0xe6bd,	// (0x0008acd9) scroll_pane_cp04

0xe7c4,	// (0x0008ade0) scroll_pane_cp05_ParamLimits

0xe7c4,	// (0x0008ade0) scroll_pane_cp05

0x6d0d,	// (0x00083329) mce_header_field_pane_ParamLimits

0x6d0d,	// (0x00083329) mce_header_field_pane

0x6d2d,	// (0x00083349) mce_header_field_pane_2_ParamLimits

0x6d2d,	// (0x00083349) mce_header_field_pane_2

0x6d43,	// (0x0008335f) mce_header_field_pane_3

0x6d4b,	// (0x00083367) list_single_mce_message_pane_ParamLimits

0x6d4b,	// (0x00083367) list_single_mce_message_pane

0x6d5b,	// (0x00083377) list_single_mce_smart_pane_ParamLimits

0x6d5b,	// (0x00083377) list_single_mce_smart_pane

0xe7d0,	// (0x0008adec) input_focus_pane_cp03

0xe7d9,	// (0x0008adf5) list_header_data_pane

0x6d76,	// (0x00083392) mce_header_field_pane_t1

0x6d84,	// (0x000833a0) list_single_mce_header_pane_ParamLimits

0x6d84,	// (0x000833a0) list_single_mce_header_pane

0xe7e1,	// (0x0008adfd) list_single_mce_header_pane_t1

0xe7f0,	// (0x0008ae0c) list_single_mce_message_pane_g1

0xe7f8,	// (0x0008ae14) list_single_mce_message_pane_t1

0x6dbb,	// (0x000833d7) bg_cale_heading_pane_cp01_ParamLimits

0x6dbb,	// (0x000833d7) bg_cale_heading_pane_cp01

0xe806,	// (0x0008ae22) bg_cale_pane_cp02_ParamLimits

0xe806,	// (0x0008ae22) bg_cale_pane_cp02

0x6e09,	// (0x00083425) cale_month_corner_pane

0x6e28,	// (0x00083444) cale_month_day_heading_pane_ParamLimits

0x6e28,	// (0x00083444) cale_month_day_heading_pane

0x6e8e,	// (0x000834aa) cale_month_pane_g1_ParamLimits

0x6e8e,	// (0x000834aa) cale_month_pane_g1

0x6ed1,	// (0x000834ed) cale_month_pane_g2_ParamLimits

0x6ed1,	// (0x000834ed) cale_month_pane_g2

0x6f09,	// (0x00083525) cale_month_pane_g3_ParamLimits

0x6f09,	// (0x00083525) cale_month_pane_g3

0x6f55,	// (0x00083571) cale_month_pane_g4_ParamLimits

0x6f55,	// (0x00083571) cale_month_pane_g4

0x6fa1,	// (0x000835bd) cale_month_pane_g5_ParamLimits

0x6fa1,	// (0x000835bd) cale_month_pane_g5

0x6fed,	// (0x00083609) cale_month_pane_g6_ParamLimits

0x6fed,	// (0x00083609) cale_month_pane_g6

0x7039,	// (0x00083655) cale_month_pane_g7_ParamLimits

0x7039,	// (0x00083655) cale_month_pane_g7

0x709d,	// (0x000836b9) cale_month_pane_g8_ParamLimits

0x709d,	// (0x000836b9) cale_month_pane_g8

0x7101,	// (0x0008371d) cale_month_pane_g9_ParamLimits

0x7101,	// (0x0008371d) cale_month_pane_g9

0x715f,	// (0x0008377b) cale_month_pane_g10_ParamLimits

0x715f,	// (0x0008377b) cale_month_pane_g10

0x71bb,	// (0x000837d7) cale_month_pane_g11_ParamLimits

0x71bb,	// (0x000837d7) cale_month_pane_g11

0x720f,	// (0x0008382b) cale_month_pane_g12_ParamLimits

0x720f,	// (0x0008382b) cale_month_pane_g12

0x7265,	// (0x00083881) cale_month_pane_g13_ParamLimits

0x7265,	// (0x00083881) cale_month_pane_g13

0x000c,

0xf220,	// (0x0008b83c) cale_month_pane_g_ParamLimits

0xf220,	// (0x0008b83c) cale_month_pane_g

0x72bb,	// (0x000838d7) cale_month_week_pane

0x72df,	// (0x000838fb) grid_cale_month_pane_ParamLimits

0x72df,	// (0x000838fb) grid_cale_month_pane

0x7338,	// (0x00083954) cale_month_day_heading_pane_t1

0x73be,	// (0x000839da) cale_month_day_heading_pane_t2

0x7437,	// (0x00083a53) cale_month_day_heading_pane_t3

0x74b0,	// (0x00083acc) cale_month_day_heading_pane_t4

0x7529,	// (0x00083b45) cale_month_day_heading_pane_t5

0x75a2,	// (0x00083bbe) cale_month_day_heading_pane_t6

0x761b,	// (0x00083c37) cale_month_day_heading_pane_t7

0x0006,

0xf23b,	// (0x0008b857) cale_month_day_heading_pane_t

0xe4d4,	// (0x0008aaf0) bg_cale_side_pane_cp01

0x76ac,	// (0x00083cc8) cale_month_week_pane_t1

0x76c5,	// (0x00083ce1) cale_month_week_pane_t2

0x76de,	// (0x00083cfa) cale_month_week_pane_t3

0x76f7,	// (0x00083d13) cale_month_week_pane_t4

0x7710,	// (0x00083d2c) cale_month_week_pane_t5

0x7731,	// (0x00083d4d) cale_month_week_pane_t6

0x0005,

0xf24a,	// (0x0008b866) cale_month_week_pane_t

0x7752,	// (0x00083d6e) cell_cale_month_pane_ParamLimits

0x7752,	// (0x00083d6e) cell_cale_month_pane

0x7874,	// (0x00083e90) cell_cale_month_pane_g1

0x7880,	// (0x00083e9c) cell_cale_month_pane_t1_ParamLimits

0x7880,	// (0x00083e9c) cell_cale_month_pane_t1

0xe4e2,	// (0x0008aafe) grid_highlight_pane_cp08

0xe291,	// (0x0008a8ad) main_smil_g1

0x78ac,	// (0x00083ec8) smil_status_pane

0xe845,	// (0x0008ae61) smil_text_pane

0x15ac,	// (0x0007dbc8) bg_popup_call3_rect_pane_g8

0x15b4,	// (0x0007dbd0) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x0008bb04) bg_popup_call3_rect_pane_g

0x17c4,	// (0x0007dde0) smil_status_volume_pane_g1

0xe84f,	// (0x0008ae6b) smil_status_pane_t1

0x8a62,	// (0x0008507e) volume_smil_pane

0xe866,	// (0x0008ae82) list_smil_text_pane

0x78bf,	// (0x00083edb) scroll_pane_cp011

0x78ca,	// (0x00083ee6) smil_text_list_pane_t1_ParamLimits

0x78ca,	// (0x00083ee6) smil_text_list_pane_t1

0x7942,	// (0x00083f5e) aid_volume_smil_ParamLimits

0x7942,	// (0x00083f5e) aid_volume_smil

0xe291,	// (0x0008a8ad) smil_volume_pane_g1

0xe291,	// (0x0008a8ad) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x0008b878) smil_volume_pane_g

0x617a,	// (0x00082796) listscroll_cale_day_pane

0xe870,	// (0x0008ae8c) bg_cale_pane

0xe888,	// (0x0008aea4) list_cale_pane

0xe8ab,	// (0x0008aec7) scroll_pane_cp09

0xe8bc,	// (0x0008aed8) cale_bg_pane_g1

0xe8c4,	// (0x0008aee0) cale_bg_pane_g2

0xe8cc,	// (0x0008aee8) cale_bg_pane_g3

0xe8d4,	// (0x0008aef0) cale_bg_pane_g4

0xe8dc,	// (0x0008aef8) cale_bg_pane_g5

0xe8e4,	// (0x0008af00) cale_bg_pane_g6

0xe8ec,	// (0x0008af08) cale_bg_pane_g7

0xe8f4,	// (0x0008af10) cale_bg_pane_g8

0xe8fc,	// (0x0008af18) cale_bg_pane_g9

0x0008,

0xf261,	// (0x0008b87d) cale_bg_pane_g

0x7964,	// (0x00083f80) list_cale_time_pane_ParamLimits

0x7964,	// (0x00083f80) list_cale_time_pane

0xe90c,	// (0x0008af28) list_cale_time_pane_g1_ParamLimits

0xe90c,	// (0x0008af28) list_cale_time_pane_g1

0xe918,	// (0x0008af34) list_cale_time_pane_g2_ParamLimits

0xe918,	// (0x0008af34) list_cale_time_pane_g2

0x7986,	// (0x00083fa2) list_cale_time_pane_g3_ParamLimits

0x7986,	// (0x00083fa2) list_cale_time_pane_g3

0x7994,	// (0x00083fb0) list_cale_time_pane_g4_ParamLimits

0x7994,	// (0x00083fb0) list_cale_time_pane_g4

0x79a2,	// (0x00083fbe) list_cale_time_pane_g5_ParamLimits

0x79a2,	// (0x00083fbe) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x0008b890) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x0008b890) list_cale_time_pane_g

0xe932,	// (0x0008af4e) list_cale_time_pane_t1_ParamLimits

0xe932,	// (0x0008af4e) list_cale_time_pane_t1

0xe95a,	// (0x0008af76) list_cale_time_pane_t2_ParamLimits

0xe95a,	// (0x0008af76) list_cale_time_pane_t2

0x7c45,	// (0x00084261) aid_blid_cardinal_pane

0x7c87,	// (0x000842a3) compass_pane_t4

0xe982,	// (0x0008af9e) list_cale_time_pane_t4_ParamLimits

0xe982,	// (0x0008af9e) list_cale_time_pane_t4

0x7c95,	// (0x000842b1) compass_pane_t5

0x7ca5,	// (0x000842c1) compass_pane_t6

0x7cb3,	// (0x000842cf) compass_pane_t7

0xee29,	// (0x0008b445) navi_pane_cc_t1

0xf006,	// (0x0008b622) aid_phob_thumbnail_center_pane

0x8153,	// (0x0008476f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x0008b89d) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x0008b89d) list_cale_time_pane_t

0xdc75,	// (0x0008a291) bg_popup_window_pane_cp02_ParamLimits

0xdc75,	// (0x0008a291) bg_popup_window_pane_cp02

0xe9aa,	// (0x0008afc6) heading_pane_cp01_ParamLimits

0xe9aa,	// (0x0008afc6) heading_pane_cp01

0xe9b6,	// (0x0008afd2) loc_req_pane_ParamLimits

0xe9b6,	// (0x0008afd2) loc_req_pane

0xe9c6,	// (0x0008afe2) loc_type_pane_ParamLimits

0xe9c6,	// (0x0008afe2) loc_type_pane

0xe9d8,	// (0x0008aff4) loc_type_pane_t1_ParamLimits

0xe9d8,	// (0x0008aff4) loc_type_pane_t1

0xe9ea,	// (0x0008b006) loc_type_pane_t2_ParamLimits

0xe9ea,	// (0x0008b006) loc_type_pane_t2

0xe9fc,	// (0x0008b018) loc_type_pane_t3_ParamLimits

0xe9fc,	// (0x0008b018) loc_type_pane_t3

0x0002,

0xf288,	// (0x0008b8a4) loc_type_pane_t_ParamLimits

0xf288,	// (0x0008b8a4) loc_type_pane_t

0xea0e,	// (0x0008b02a) list_loc_req_pane

0xea18,	// (0x0008b034) scroll_pane_cp012

0x79b0,	// (0x00083fcc) list_single_loc_request_popup_menu_pane_ParamLimits

0x79b0,	// (0x00083fcc) list_single_loc_request_popup_menu_pane

0xea23,	// (0x0008b03f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xea23,	// (0x0008b03f) list_single_loc_request_popup_menu_pane_g1

0xea2f,	// (0x0008b04b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xea2f,	// (0x0008b04b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x0008b8ab) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x0008b8ab) list_single_loc_request_popup_menu_pane_g

0xea3b,	// (0x0008b057) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xea3b,	// (0x0008b057) list_single_loc_request_popup_menu_pane_t1

0x79c2,	// (0x00083fde) bg_popup_window_pane_cp03_ParamLimits

0x79c2,	// (0x00083fde) bg_popup_window_pane_cp03

0x79d0,	// (0x00083fec) heading_loc_req_pane_ParamLimits

0x79d0,	// (0x00083fec) heading_loc_req_pane

0x79dc,	// (0x00083ff8) popup_dyc_status_message_window_g1_ParamLimits

0x79dc,	// (0x00083ff8) popup_dyc_status_message_window_g1

0x79e8,	// (0x00084004) popup_dyc_status_message_window_t1_ParamLimits

0x79e8,	// (0x00084004) popup_dyc_status_message_window_t1

0x79fa,	// (0x00084016) popup_dyc_status_message_window_t2_ParamLimits

0x79fa,	// (0x00084016) popup_dyc_status_message_window_t2

0x7a0c,	// (0x00084028) popup_dyc_status_message_window_t3_ParamLimits

0x7a0c,	// (0x00084028) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x0008b8b0) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x0008b8b0) popup_dyc_status_message_window_t

0xe01e,	// (0x0008a63a) bg_heading_pane_cp01

0xea51,	// (0x0008b06d) heading_loc_req_pane_g1

0xea59,	// (0x0008b075) heading_loc_req_pane_g2

0xea61,	// (0x0008b07d) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x0008b8b7) heading_loc_req_pane_g

0xea69,	// (0x0008b085) heading_loc_req_pane_t1

0xea88,	// (0x0008b0a4) bg_popup_sub_pane_cp01_ParamLimits

0xea88,	// (0x0008b0a4) bg_popup_sub_pane_cp01

0xea96,	// (0x0008b0b2) popup_cale_events_window_g1_ParamLimits

0xea96,	// (0x0008b0b2) popup_cale_events_window_g1

0xeab6,	// (0x0008b0d2) popup_cale_events_window_g2_ParamLimits

0xeab6,	// (0x0008b0d2) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x0008b8d9) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x0008b8d9) popup_cale_events_window_g

0xead6,	// (0x0008b0f2) popup_cale_events_window_t1_ParamLimits

0xead6,	// (0x0008b0f2) popup_cale_events_window_t1

0xeae8,	// (0x0008b104) popup_cale_events_window_t2_ParamLimits

0xeae8,	// (0x0008b104) popup_cale_events_window_t2

0xeb26,	// (0x0008b142) popup_cale_events_window_t3_ParamLimits

0xeb26,	// (0x0008b142) popup_cale_events_window_t3

0xeb60,	// (0x0008b17c) popup_cale_events_window_t4_ParamLimits

0xeb60,	// (0x0008b17c) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x0008b8de) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x0008b8de) popup_cale_events_window_t

0x7a36,	// (0x00084052) call_type_pane

0x0dd1,	// (0x0007d3ed) popup_call_status_window_g1

0x7a42,	// (0x0008405e) popup_call_status_window_g2

0x7a4e,	// (0x0008406a) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x0008b8e7) popup_call_status_window_g

0xeb96,	// (0x0008b1b2) call_type_pane_g1

0xeb9f,	// (0x0008b1bb) call_type_pane_g2

0x0001,

0xf2d2,	// (0x0008b8ee) call_type_pane_g

0xe01e,	// (0x0008a63a) bg_popup_sub_pane_cp02

0xeba8,	// (0x0008b1c4) listscroll_popup_wml_pane

0xebb0,	// (0x0008b1cc) list_wml_pane

0xebba,	// (0x0008b1d6) scroll_pane_cp013

0xebc5,	// (0x0008b1e1) list_single_graphic_popup_wml_pane_ParamLimits

0xebc5,	// (0x0008b1e1) list_single_graphic_popup_wml_pane

0xe291,	// (0x0008a8ad) list_single_graphic_popup_wml_pane_g1

0xebd9,	// (0x0008b1f5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x0008b8f3) list_single_graphic_popup_wml_pane_g

0xebe1,	// (0x0008b1fd) list_single_graphic_popup_wml_pane_t1

0xebf7,	// (0x0008b213) aid_call_pane

0xe271,	// (0x0008a88d) popup_clock_analogue_window_g1

0xe271,	// (0x0008a88d) popup_clock_analogue_window_g2

0x7a5a,	// (0x00084076) popup_clock_analogue_window_g3

0x7a5a,	// (0x00084076) popup_clock_analogue_window_g4

0xe291,	// (0x0008a8ad) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x0008b8f8) popup_clock_analogue_window_g

0x7a62,	// (0x0008407e) popup_clock_analogue_window_t1

0x7a70,	// (0x0008408c) clock_digital_number_pane_ParamLimits

0x7a70,	// (0x0008408c) clock_digital_number_pane

0x7a7c,	// (0x00084098) clock_digital_number_pane_cp02_ParamLimits

0x7a7c,	// (0x00084098) clock_digital_number_pane_cp02

0x7a88,	// (0x000840a4) clock_digital_number_pane_cp03_ParamLimits

0x7a88,	// (0x000840a4) clock_digital_number_pane_cp03

0x7a94,	// (0x000840b0) clock_digital_number_pane_cp04_ParamLimits

0x7a94,	// (0x000840b0) clock_digital_number_pane_cp04

0x7aa4,	// (0x000840c0) clock_digital_separator_pane_ParamLimits

0x7aa4,	// (0x000840c0) clock_digital_separator_pane

0x7ab0,	// (0x000840cc) popup_clock_digital_window_t1

0xe291,	// (0x0008a8ad) clock_digital_number_pane_g1

0xe291,	// (0x0008a8ad) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x0008b878) clock_digital_number_pane_g

0xe291,	// (0x0008a8ad) clock_digital_separator_pane_g1

0xe291,	// (0x0008a8ad) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x0008b878) clock_digital_separator_pane_g

0xe01e,	// (0x0008a63a) bg_popup_window_pane_cp04

0xebff,	// (0x0008b21b) heading_pane_cp03

0xe526,	// (0x0008ab42) listscroll_popup_gms_pane

0xe01e,	// (0x0008a63a) grid_large_graphic_popup_pane

0xec08,	// (0x0008b224) listscroll_popup_gms_pane_g1

0xec11,	// (0x0008b22d) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x0008b903) listscroll_popup_gms_pane_g

0xec1a,	// (0x0008b236) scroll_pane_cp014

0xe2f4,	// (0x0008a910) cell_large_graphic_popup_pane_ParamLimits

0xe2f4,	// (0x0008a910) cell_large_graphic_popup_pane

0xe302,	// (0x0008a91e) cell_large_graphic_popup_pane_g1_ParamLimits

0xe302,	// (0x0008a91e) cell_large_graphic_popup_pane_g1

0xec23,	// (0x0008b23f) cell_large_graphic_popup_pane_g2_ParamLimits

0xec23,	// (0x0008b23f) cell_large_graphic_popup_pane_g2

0xec31,	// (0x0008b24d) cell_large_graphic_popup_pane_g3_ParamLimits

0xec31,	// (0x0008b24d) cell_large_graphic_popup_pane_g3

0xec3f,	// (0x0008b25b) cell_large_graphic_popup_pane_g4_ParamLimits

0xec3f,	// (0x0008b25b) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x0008b908) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x0008b908) cell_large_graphic_popup_pane_g

0xe01e,	// (0x0008a63a) grid_highlight_pane_cp010

0xe291,	// (0x0008a8ad) bg_popup_call_pane_g1

0xec50,	// (0x0008b26c) list_single_graphic_popup_conf_pane_ParamLimits

0xec50,	// (0x0008b26c) list_single_graphic_popup_conf_pane

0xec63,	// (0x0008b27f) list_highlight_pane_cp01

0xec6c,	// (0x0008b288) list_single_graphic_popup_conf_pane_g1

0xec74,	// (0x0008b290) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x0008b911) list_single_graphic_popup_conf_pane_g

0xec7c,	// (0x0008b298) list_single_graphic_popup_conf_pane_t1

0xec8a,	// (0x0008b2a6) linegrid_cams_pane_g1

0x7acd,	// (0x000840e9) linegrid_cams_pane_g2

0xe465,	// (0x0008aa81) linegrid_cams_pane_g3

0xec93,	// (0x0008b2af) linegrid_cams_pane_g4

0x7ad6,	// (0x000840f2) linegrid_cams_pane_g5

0x7adf,	// (0x000840fb) linegrid_cams_pane_g6

0xe515,	// (0x0008ab31) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x0008b916) linegrid_cams_pane_g

0xec9c,	// (0x0008b2b8) popup_clock_analogue_window

0xec9c,	// (0x0008b2b8) popup_clock_digital_window

0xe01e,	// (0x0008a63a) popup_phob_thumbnail_window

0xe291,	// (0x0008a8ad) call_video_uplink_pane_g1

0xeca5,	// (0x0008b2c1) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x0008b925) call_video_uplink_pane_g

0xecad,	// (0x0008b2c9) video_uplink_pane

0xecb5,	// (0x0008b2d1) mce_image_pane_g1

0x7ae8,	// (0x00084104) mce_image_pane_g2

0x7af2,	// (0x0008410e) mce_image_pane_g3

0x7afa,	// (0x00084116) mce_image_pane_g4

0x7b02,	// (0x0008411e) mce_image_pane_g5

0x0004,

0xf30e,	// (0x0008b92a) mce_image_pane_g

0xecbf,	// (0x0008b2db) control_top_pane_stacon_cp01_ParamLimits

0xecbf,	// (0x0008b2db) control_top_pane_stacon_cp01

0xecd3,	// (0x0008b2ef) uni_indicator_pane_stacon_cp01_ParamLimits

0xecd3,	// (0x0008b2ef) uni_indicator_pane_stacon_cp01

0xece4,	// (0x0008b300) bg_popup_sub_pane_cp03

0xecee,	// (0x0008b30a) chi_dic_find_pane

0x7b0a,	// (0x00084126) listscroll_chi_dic_pane

0xecf6,	// (0x0008b312) main_pane_chidic_g1

0xecfe,	// (0x0008b31a) chi_dic_find_pane_t1

0xed0c,	// (0x0008b328) find_chidic_pane

0xed15,	// (0x0008b331) chi_dic_list_pane_ParamLimits

0xed15,	// (0x0008b331) chi_dic_list_pane

0xed26,	// (0x0008b342) scroll_pane_cp020

0xed2e,	// (0x0008b34a) find_chidic_pane_t1

0xe01e,	// (0x0008a63a) input_focus_pane_cp06

0x7b1e,	// (0x0008413a) list_chi_dic_pane_ParamLimits

0x7b1e,	// (0x0008413a) list_chi_dic_pane

0x7b38,	// (0x00084154) list_chi_dic_pane_t1_ParamLimits

0x7b38,	// (0x00084154) list_chi_dic_pane_t1

0xe01e,	// (0x0008a63a) list_highlight_pane_cp020

0xed3d,	// (0x0008b359) bg_cale_heading_pane_g1

0x7b4b,	// (0x00084167) bg_cale_heading_pane_g2

0x7b53,	// (0x0008416f) bg_cale_heading_pane_g3

0x7b5b,	// (0x00084177) bg_cale_heading_pane_g4

0x7b65,	// (0x00084181) bg_cale_heading_pane_g5

0x7b6f,	// (0x0008418b) bg_cale_heading_pane_g6

0x7b77,	// (0x00084193) bg_cale_heading_pane_g7

0x7b7f,	// (0x0008419b) bg_cale_heading_pane_g8

0x7b89,	// (0x000841a5) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x0008b935) bg_cale_heading_pane_g

0xed3d,	// (0x0008b359) bg_cale_side_pane_g1

0x7b93,	// (0x000841af) bg_cale_side_pane_g2

0x7b9d,	// (0x000841b9) bg_cale_side_pane_g3

0x7ba7,	// (0x000841c3) bg_cale_side_pane_g4

0x7bb1,	// (0x000841cd) bg_cale_side_pane_g5

0x7bbb,	// (0x000841d7) bg_cale_side_pane_g6

0x7bc5,	// (0x000841e1) bg_cale_side_pane_g7

0x7bcf,	// (0x000841eb) bg_cale_side_pane_g8

0x7bd7,	// (0x000841f3) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x0008b948) bg_cale_side_pane_g

0x7bdf,	// (0x000841fb) popup_call_status_window_ParamLimits

0x7bdf,	// (0x000841fb) popup_call_status_window

0xed45,	// (0x0008b361) stacon_top_pane

0xed4d,	// (0x0008b369) status_pane_ParamLimits

0xed4d,	// (0x0008b369) status_pane

0xed62,	// (0x0008b37e) status_small_pane

0xed6a,	// (0x0008b386) control_pane

0xe01e,	// (0x0008a63a) stacon_bottom_pane

0xed72,	// (0x0008b38e) list_single_mce_smart_pane_t1_ParamLimits

0xed72,	// (0x0008b38e) list_single_mce_smart_pane_t1

0xed85,	// (0x0008b3a1) list_single_mce_smart_pane_t2_ParamLimits

0xed85,	// (0x0008b3a1) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x0008b95b) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x0008b95b) list_single_mce_smart_pane_t

0x7beb,	// (0x00084207) compass_pane

0x7bf7,	// (0x00084213) main_location2_pane_t1

0x7c0b,	// (0x00084227) main_location2_pane_t2

0x7c1f,	// (0x0008423b) main_location2_pane_t3

0x0003,

0xf344,	// (0x0008b960) main_location2_pane_t

0xeda4,	// (0x0008b3c0) compass_pane_g1_ParamLimits

0xeda4,	// (0x0008b3c0) compass_pane_g1

0x7c69,	// (0x00084285) compass_pane_t1

0x7c78,	// (0x00084294) compass_pane_t2

0x0005,

0xf34d,	// (0x0008b969) compass_pane_t

0x7cc3,	// (0x000842df) text_secondary_cp61

0xee20,	// (0x0008b43c) navi_pane_cams_g5

0xee9c,	// (0x0008b4b8) navi_pane_im_t1

0xeeaa,	// (0x0008b4c6) navi_pane_mp_g1_ParamLimits

0xeeaa,	// (0x0008b4c6) navi_pane_mp_g1

0xeebe,	// (0x0008b4da) navi_pane_mp_g2_ParamLimits

0xeebe,	// (0x0008b4da) navi_pane_mp_g2

0xeeca,	// (0x0008b4e6) navi_pane_mp_g3_ParamLimits

0xeeca,	// (0x0008b4e6) navi_pane_mp_g3

0x0002,

0xf361,	// (0x0008b97d) navi_pane_mp_g_ParamLimits

0xf361,	// (0x0008b97d) navi_pane_mp_g

0xeed6,	// (0x0008b4f2) navi_pane_mp_t1

0xeee4,	// (0x0008b500) navi_pane_mp_t2

0x0002,

0xf368,	// (0x0008b984) navi_pane_mp_t

0xef4f,	// (0x0008b56b) navi_pane_vt_g1

0xeed6,	// (0x0008b4f2) navi_pane_vt_t1

0xef57,	// (0x0008b573) navi_slider_pane

0xe526,	// (0x0008ab42) zooming_pane

0xef67,	// (0x0008b583) navi_slider_pane_g1

0x7cfe,	// (0x0008431a) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x0008b98b) navi_slider_pane_g

0xef8b,	// (0x0008b5a7) aid_levels_zoom

0xef93,	// (0x0008b5af) zooming_pane_g1

0xef9b,	// (0x0008b5b7) zooming_pane_g2

0xef9b,	// (0x0008b5b7) zooming_pane_g3

0x0002,

0xf37e,	// (0x0008b99a) zooming_pane_g

0xefa3,	// (0x0008b5bf) level_10_zoom

0xefac,	// (0x0008b5c8) level_11_zoom

0xefb5,	// (0x0008b5d1) level_1_zoom

0xefbe,	// (0x0008b5da) level_2_zoom

0xefc7,	// (0x0008b5e3) level_3_zoom

0xefd0,	// (0x0008b5ec) level_4_zoom

0xefd9,	// (0x0008b5f5) level_5_zoom

0xefe2,	// (0x0008b5fe) level_6_zoom

0xefeb,	// (0x0008b607) level_7_zoom

0xeff4,	// (0x0008b610) level_8_zoom

0xeffd,	// (0x0008b619) level_9_zoom

0xf00e,	// (0x0008b62a) popup_phob_thumbnail_window_g1

0xf016,	// (0x0008b632) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x0008b9a1) popup_phob_thumbnail_window_g

0x870d,	// (0x00084d29) level_1_location

0x8715,	// (0x00084d31) level_2_location

0x871d,	// (0x00084d39) level_3_location

0x8727,	// (0x00084d43) level_4_location

0xe526,	// (0x0008ab42) level_5_location

0x7d10,	// (0x0008432c) mce_icon_pane_g1

0x7d18,	// (0x00084334) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x0008b9a6) mce_icon_pane_g

0x7d20,	// (0x0008433c) main_mup_pane_g1_ParamLimits

0x7d20,	// (0x0008433c) main_mup_pane_g1

0xe31e,	// (0x0008a93a) main_mup_pane_g2_ParamLimits

0xe31e,	// (0x0008a93a) main_mup_pane_g2

0xe31e,	// (0x0008a93a) main_mup_pane_g3_ParamLimits

0xe31e,	// (0x0008a93a) main_mup_pane_g3

0xe31e,	// (0x0008a93a) main_mup_pane_g4_ParamLimits

0xe31e,	// (0x0008a93a) main_mup_pane_g4

0xe31e,	// (0x0008a93a) main_mup_pane_g5_ParamLimits

0xe31e,	// (0x0008a93a) main_mup_pane_g5

0xe31e,	// (0x0008a93a) main_mup_pane_g6_ParamLimits

0xe31e,	// (0x0008a93a) main_mup_pane_g6

0xe31e,	// (0x0008a93a) main_mup_pane_g7_ParamLimits

0xe31e,	// (0x0008a93a) main_mup_pane_g7

0xe31e,	// (0x0008a93a) main_mup_pane_g8_ParamLimits

0xe31e,	// (0x0008a93a) main_mup_pane_g8

0xe31e,	// (0x0008a93a) main_mup_pane_g9_ParamLimits

0xe31e,	// (0x0008a93a) main_mup_pane_g9

0xe31e,	// (0x0008a93a) main_mup_pane_g10_ParamLimits

0xe31e,	// (0x0008a93a) main_mup_pane_g10

0xe31e,	// (0x0008a93a) main_mup_pane_g11_ParamLimits

0xe31e,	// (0x0008a93a) main_mup_pane_g11

0xe310,	// (0x0008a92c) main_mup_pane_g12_ParamLimits

0xe310,	// (0x0008a92c) main_mup_pane_g12

0xe31e,	// (0x0008a93a) main_mup_pane_g13_ParamLimits

0xe31e,	// (0x0008a93a) main_mup_pane_g13

0x000c,

0xf38f,	// (0x0008b9ab) main_mup_pane_g_ParamLimits

0xf38f,	// (0x0008b9ab) main_mup_pane_g

0xe32c,	// (0x0008a948) main_mup_pane_t1_ParamLimits

0xe32c,	// (0x0008a948) main_mup_pane_t1

0xe32c,	// (0x0008a948) main_mup_pane_t2_ParamLimits

0xe32c,	// (0x0008a948) main_mup_pane_t2

0xe32c,	// (0x0008a948) main_mup_pane_t3_ParamLimits

0xe32c,	// (0x0008a948) main_mup_pane_t3

0x0435,	// (0x0007ca51) main_mup_pane_t4_ParamLimits

0x0435,	// (0x0007ca51) main_mup_pane_t4

0x0435,	// (0x0007ca51) main_mup_pane_t5_ParamLimits

0x0435,	// (0x0007ca51) main_mup_pane_t5

0xe562,	// (0x0008ab7e) main_mup_pane_t6_ParamLimits

0xe562,	// (0x0008ab7e) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x0008b9c6) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x0008b9c6) main_mup_pane_t

0xe29b,	// (0x0008a8b7) mup_progress_pane_ParamLimits

0xe29b,	// (0x0008a8b7) mup_progress_pane

0x184f,	// (0x0007de6b) mup_visualizer_pane_ParamLimits

0x184f,	// (0x0007de6b) mup_visualizer_pane

0x184f,	// (0x0007de6b) mup_volume_pane_ParamLimits

0x184f,	// (0x0007de6b) mup_volume_pane

0xe310,	// (0x0008a92c) mup_visualizer_pane_g1_ParamLimits

0xe310,	// (0x0008a92c) mup_visualizer_pane_g1

0x0457,	// (0x0007ca73) mup_visualizer_pane_g2_ParamLimits

0x0457,	// (0x0007ca73) mup_visualizer_pane_g2

0xe302,	// (0x0008a91e) mup_visualizer_pane_g3_ParamLimits

0xe302,	// (0x0008a91e) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x0008b9d3) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x0008b9d3) mup_visualizer_pane_g

0xe548,	// (0x0008ab64) mup_volume_pane_g1

0xe548,	// (0x0008ab64) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x0008b9da) mup_volume_pane_g

0xe548,	// (0x0008ab64) mup_progress_pane_g1

0xe548,	// (0x0008ab64) mup_progress_pane_g2

0xe548,	// (0x0008ab64) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x0008b9df) mup_progress_pane_g

0xe01e,	// (0x0008a63a) bg_popup_window_pane_cp05

0x0465,	// (0x0007ca81) heading_pane_cp02_ParamLimits

0x0465,	// (0x0007ca81) heading_pane_cp02

0x047f,	// (0x0007ca9b) list_popup_blid_pane

0x0487,	// (0x0007caa3) list_blid_sat_info_pane_ParamLimits

0x0487,	// (0x0007caa3) list_blid_sat_info_pane

0x049a,	// (0x0007cab6) list_blid_sat_info_pane_g1

0x04a2,	// (0x0007cabe) list_blid_sat_info_pane_t1

0x7e1d,	// (0x00084439) mup_equalizer_pane_ParamLimits

0x7e1d,	// (0x00084439) mup_equalizer_pane

0x7e3e,	// (0x0008445a) mup_equalizer_pane_cp1_ParamLimits

0x7e3e,	// (0x0008445a) mup_equalizer_pane_cp1

0x7e5f,	// (0x0008447b) mup_equalizer_pane_cp2_ParamLimits

0x7e5f,	// (0x0008447b) mup_equalizer_pane_cp2

0x7e80,	// (0x0008449c) mup_equalizer_pane_cp3_ParamLimits

0x7e80,	// (0x0008449c) mup_equalizer_pane_cp3

0x7ea1,	// (0x000844bd) mup_equalizer_pane_cp4_ParamLimits

0x7ea1,	// (0x000844bd) mup_equalizer_pane_cp4

0x7ec2,	// (0x000844de) mup_equalizer_pane_cp5

0x7ed8,	// (0x000844f4) mup_equalizer_pane_cp6

0x7ef0,	// (0x0008450c) mup_equalizer_pane_cp7

0x162c,	// (0x0007dc48) bg_popup_call_poc_act_pane_g9

0x1634,	// (0x0007dc50) bg_popup_call_poc_act_pane_g10

0x163c,	// (0x0007dc58) bg_popup_call_poc_act_pane_g11

0x000a,

0xe279,	// (0x0008a895) mup_scale_pane

0xe291,	// (0x0008a8ad) mup_scale_pane_g1

0x04b0,	// (0x0007cacc) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x0008b9fb) mup_scale_pane_g

0x04d4,	// (0x0007caf0) msg_data_pane

0x04dc,	// (0x0007caf8) scroll_pane_cp017

0x7f1a,	// (0x00084536) bg_list_pane_cp04_ParamLimits

0x7f1a,	// (0x00084536) bg_list_pane_cp04

0x04e4,	// (0x0007cb00) msg_data_pane_g1

0x7f40,	// (0x0008455c) msg_data_pane_g2

0x7f4a,	// (0x00084566) msg_data_pane_g3

0x7f52,	// (0x0008456e) msg_data_pane_g4

0x7f5a,	// (0x00084576) msg_data_pane_g5

0x7f62,	// (0x0008457e) msg_data_pane_g6

0x7f6a,	// (0x00084586) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x0008ba0a) msg_data_pane_g

0x7f72,	// (0x0008458e) msg_text_pane_ParamLimits

0x7f72,	// (0x0008458e) msg_text_pane

0x7fb5,	// (0x000845d1) qrid_highlight_pane_cp011_ParamLimits

0x7fb5,	// (0x000845d1) qrid_highlight_pane_cp011

0xe01e,	// (0x0008a63a) msg_body_pane

0xe01e,	// (0x0008a63a) msg_header_pane

0x04f5,	// (0x0007cb11) input_focus_pane_cp07

0x7fdb,	// (0x000845f7) msg_header_pane_t1_ParamLimits

0x7fdb,	// (0x000845f7) msg_header_pane_t1

0x7ff1,	// (0x0008460d) msg_header_pane_t2_ParamLimits

0x7ff1,	// (0x0008460d) msg_header_pane_t2

0x0001,

0xf402,	// (0x0008ba1e) msg_header_pane_t_ParamLimits

0xf402,	// (0x0008ba1e) msg_header_pane_t

0x050a,	// (0x0007cb26) msg_body_pane_g1

0x8008,	// (0x00084624) msg_body_pane_t1_ParamLimits

0x8008,	// (0x00084624) msg_body_pane_t1

0x8039,	// (0x00084655) msg_body_pane_t2_ParamLimits

0x8039,	// (0x00084655) msg_body_pane_t2

0x804b,	// (0x00084667) msg_body_pane_t3_ParamLimits

0x804b,	// (0x00084667) msg_body_pane_t3

0x0002,

0xf407,	// (0x0008ba23) msg_body_pane_t_ParamLimits

0xf407,	// (0x0008ba23) msg_body_pane_t

0x80af,	// (0x000846cb) main_viewer_pane_g1_ParamLimits

0x80af,	// (0x000846cb) main_viewer_pane_g1

0x80bb,	// (0x000846d7) main_viewer_pane_g2_ParamLimits

0x80bb,	// (0x000846d7) main_viewer_pane_g2

0x80c7,	// (0x000846e3) main_viewer_pane_g3_ParamLimits

0x80c7,	// (0x000846e3) main_viewer_pane_g3

0x80d8,	// (0x000846f4) main_viewer_pane_g4_ParamLimits

0x80d8,	// (0x000846f4) main_viewer_pane_g4

0x80e9,	// (0x00084705) main_viewer_pane_g5_ParamLimits

0x80e9,	// (0x00084705) main_viewer_pane_g5

0x80e9,	// (0x00084705) main_viewer_pane_g7_ParamLimits

0x80e9,	// (0x00084705) main_viewer_pane_g7

0xea23,	// (0x0008b03f) main_viewer_pane_g8_ParamLimits

0xea23,	// (0x0008b03f) main_viewer_pane_g8

0x0007,

0xf417,	// (0x0008ba33) main_viewer_pane_g_ParamLimits

0xf417,	// (0x0008ba33) main_viewer_pane_g

0x0554,	// (0x0007cb70) viewer_content_pane_ParamLimits

0x0554,	// (0x0007cb70) viewer_content_pane

0x8127,	// (0x00084743) main_postcard_pane_g1_ParamLimits

0x8127,	// (0x00084743) main_postcard_pane_g1

0x8135,	// (0x00084751) main_postcard_pane_g2_ParamLimits

0x8135,	// (0x00084751) main_postcard_pane_g2

0x8143,	// (0x0008475f) main_postcard_pane_g3_ParamLimits

0x8143,	// (0x0008475f) main_postcard_pane_g3

0x0005,

0xf428,	// (0x0008ba44) main_postcard_pane_g_ParamLimits

0xf428,	// (0x0008ba44) main_postcard_pane_g

0x8153,	// (0x0008476f) main_postcard_pane_g4

0x17b1,	// (0x0007ddcd) smil_status_volume_pane_g2

0x817f,	// (0x0008479b) postcard_pane_ParamLimits

0x817f,	// (0x0008479b) postcard_pane

0x0dd1,	// (0x0007d3ed) postcard_pane_g1_ParamLimits

0x0dd1,	// (0x0007d3ed) postcard_pane_g1

0x81b1,	// (0x000847cd) postcard_pane_g2_ParamLimits

0x81b1,	// (0x000847cd) postcard_pane_g2

0x81bd,	// (0x000847d9) postcard_pane_g3_ParamLimits

0x81bd,	// (0x000847d9) postcard_pane_g3

0x0570,	// (0x0007cb8c) postcard_pane_g4_ParamLimits

0x0570,	// (0x0007cb8c) postcard_pane_g4

0x81c9,	// (0x000847e5) postcard_pane_g5_ParamLimits

0x81c9,	// (0x000847e5) postcard_pane_g5

0x81d5,	// (0x000847f1) postcard_pane_g6_ParamLimits

0x81d5,	// (0x000847f1) postcard_pane_g6

0x0562,	// (0x0007cb7e) postcard_pane_g7_ParamLimits

0x0562,	// (0x0007cb7e) postcard_pane_g7

0x0006,

0xf435,	// (0x0008ba51) postcard_pane_g_ParamLimits

0xf435,	// (0x0008ba51) postcard_pane_g

0x81e1,	// (0x000847fd) main_mp2_pane_g1_ParamLimits

0x81e1,	// (0x000847fd) main_mp2_pane_g1

0x81ed,	// (0x00084809) main_mp2_pane_g2_ParamLimits

0x81ed,	// (0x00084809) main_mp2_pane_g2

0x81f9,	// (0x00084815) main_mp2_pane_g3_ParamLimits

0x81f9,	// (0x00084815) main_mp2_pane_g3

0x0002,

0xf444,	// (0x0008ba60) main_mp2_pane_g_ParamLimits

0xf444,	// (0x0008ba60) main_mp2_pane_g

0x8205,	// (0x00084821) main_mp2_pane_t1_ParamLimits

0x8205,	// (0x00084821) main_mp2_pane_t1

0x821c,	// (0x00084838) main_mp2_pane_t2_ParamLimits

0x821c,	// (0x00084838) main_mp2_pane_t2

0x8230,	// (0x0008484c) main_mp2_pane_t3_ParamLimits

0x8230,	// (0x0008484c) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x0008ba67) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x0008ba67) main_mp2_pane_t

0x057e,	// (0x0007cb9a) pec_content_pane_ParamLimits

0x057e,	// (0x0007cb9a) pec_content_pane

0xe6bd,	// (0x0008acd9) scroll_pane_cp015

0x0590,	// (0x0007cbac) pec_attribute_pane_ParamLimits

0x0590,	// (0x0007cbac) pec_attribute_pane

0x8242,	// (0x0008485e) pec_content_pane_g1_ParamLimits

0x8242,	// (0x0008485e) pec_content_pane_g1

0x05a0,	// (0x0007cbbc) pec_content_pane_t1_ParamLimits

0x05a0,	// (0x0007cbbc) pec_content_pane_t1

0x05b2,	// (0x0007cbce) pec_content_pane_t2_ParamLimits

0x05b2,	// (0x0007cbce) pec_content_pane_t2

0x0001,

0xf452,	// (0x0008ba6e) pec_content_pane_t_ParamLimits

0xf452,	// (0x0008ba6e) pec_content_pane_t

0x824e,	// (0x0008486a) list_single_graphic_pane_cp01_ParamLimits

0x824e,	// (0x0008486a) list_single_graphic_pane_cp01

0xe279,	// (0x0008a895) bg_popup_sub_pane_cp04

0x05c4,	// (0x0007cbe0) popup_mup_playback_window_g1

0x05d0,	// (0x0007cbec) popup_mup_playback_window_t1

0x05e5,	// (0x0007cc01) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x0008ba73) popup_mup_playback_window_t

0x061c,	// (0x0007cc38) main_image_pane_g1_ParamLimits

0x061c,	// (0x0007cc38) main_image_pane_g1

0x065f,	// (0x0007cc7b) scroll_pane_cp018_ParamLimits

0x065f,	// (0x0007cc7b) scroll_pane_cp018

0x0677,	// (0x0007cc93) scroll_pane_cp016_ParamLimits

0x0677,	// (0x0007cc93) scroll_pane_cp016

0x82e7,	// (0x00084903) smil2_image_pane_ParamLimits

0x82e7,	// (0x00084903) smil2_image_pane

0x8317,	// (0x00084933) smil2_root_pane_ParamLimits

0x8317,	// (0x00084933) smil2_root_pane

0x8343,	// (0x0008495f) smil2_text_pane_ParamLimits

0x8343,	// (0x0008495f) smil2_text_pane

0xe01e,	// (0x0008a63a) bg_list_pane_cp06

0x06b3,	// (0x0007cccf) grid_radio_pane

0xe01e,	// (0x0008a63a) bg_popup_window_pane_cp06

0x06bb,	// (0x0007ccd7) main_fmradio_pane_t1

0x1644,	// (0x0007dc60) heading_pane_cp04

0x06c9,	// (0x0007cce5) main_fmradio_pane_t2

0x164c,	// (0x0007dc68) popup_cale_lunar_info_window_g1

0x06d7,	// (0x0007ccf3) main_fmradio_pane_t3

0x1654,	// (0x0007dc70) popup_cale_lunar_info_window_g2

0x06e5,	// (0x0007cd01) main_fmradio_pane_t4

0x0001,

0x06f3,	// (0x0007cd0f) main_fmradio_pane_t5

0x0004,

0xf537,	// (0x0008bb53) popup_cale_lunar_info_window_g

0xf46c,	// (0x0008ba88) main_fmradio_pane_t

0x0701,	// (0x0007cd1d) wait_bar_pane_cp03

0x0709,	// (0x0007cd25) cell_fmradio_pane_ParamLimits

0x0709,	// (0x0007cd25) cell_fmradio_pane

0x0562,	// (0x0007cb7e) cell_fmradio_pane_g1_ParamLimits

0x0562,	// (0x0007cb7e) cell_fmradio_pane_g1

0xe01e,	// (0x0008a63a) grid_highlight_pane_cp011

0x071c,	// (0x0007cd38) poc_content_pane_ParamLimits

0x071c,	// (0x0007cd38) poc_content_pane

0x072e,	// (0x0007cd4a) scroll_pane_cp019

0x8383,	// (0x0008499f) popup_call_poc_act_window_ParamLimits

0x8383,	// (0x0008499f) popup_call_poc_act_window

0x8390,	// (0x000849ac) popup_call_poc_inact_window_ParamLimits

0x8390,	// (0x000849ac) popup_call_poc_inact_window

0xf50e,	// (0x0008bb2a) bg_popup_call_poc_act_pane_g

0x15bc,	// (0x0007dbd8) bg_popup_call_poc_inact_pane_g1

0x15c4,	// (0x0007dbe0) bg_popup_call_poc_inact_pane_g2

0x0736,	// (0x0007cd52) popup_call_poc_act_window_g2

0x15cc,	// (0x0007dbe8) bg_popup_call_poc_inact_pane_g3

0x15d4,	// (0x0007dbf0) bg_popup_call_poc_inact_pane_g4

0x15dc,	// (0x0007dbf8) bg_popup_call_poc_inact_pane_g5

0x073e,	// (0x0007cd5a) popup_call_poc_act_window_t1_ParamLimits

0x073e,	// (0x0007cd5a) popup_call_poc_act_window_t1

0x0766,	// (0x0007cd82) popup_call_poc_act_window_t2_ParamLimits

0x0766,	// (0x0007cd82) popup_call_poc_act_window_t2

0x078e,	// (0x0007cdaa) popup_call_poc_act_window_t3_ParamLimits

0x078e,	// (0x0007cdaa) popup_call_poc_act_window_t3

0x07b6,	// (0x0007cdd2) popup_call_poc_act_window_t4_ParamLimits

0x07b6,	// (0x0007cdd2) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x0008ba93) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x0008ba93) popup_call_poc_act_window_t

0x15e4,	// (0x0007dc00) bg_popup_call_poc_inact_pane_g6

0x15ec,	// (0x0007dc08) bg_popup_call_poc_inact_pane_g7

0x15f4,	// (0x0007dc10) bg_popup_call_poc_inact_pane_g8

0x07c8,	// (0x0007cde4) popup_call_poc_inact_window_g2

0x15fc,	// (0x0007dc18) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4fb,	// (0x0008bb17) bg_popup_call_poc_inact_pane_g

0x07d0,	// (0x0007cdec) popup_call_poc_inact_window_t1_ParamLimits

0x07d0,	// (0x0007cdec) popup_call_poc_inact_window_t1

0x07e5,	// (0x0007ce01) popup_call_poc_inact_window_t2_ParamLimits

0x07e5,	// (0x0007ce01) popup_call_poc_inact_window_t2

0x07fa,	// (0x0007ce16) popup_call_poc_inact_window_t3_ParamLimits

0x07fa,	// (0x0007ce16) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x0008ba9c) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x0008ba9c) popup_call_poc_inact_window_t

0x173c,	// (0x0007dd58) context_pane_ParamLimits

0x8a19,	// (0x00085035) signal_pane_ParamLimits

0xe526,	// (0x0008ab42) main_call2_pane

0x898c,	// (0x00084fa8) popup_phob_thumbnail2_window_ParamLimits

0x898c,	// (0x00084fa8) popup_phob_thumbnail2_window

0x805d,	// (0x00084679) aid_hotspot_pointer_arrow_pane

0x8065,	// (0x00084681) aid_hotspot_pointer_hand_pane

0x86d5,	// (0x00084cf1) phob_pre_status_pane_g5

0xe2f4,	// (0x0008a910) cams_zoom_pane_ParamLimits

0xe2f4,	// (0x0008a910) image_vga_pane_ParamLimits

0xe310,	// (0x0008a92c) main_camera_pane_g1_ParamLimits

0xe310,	// (0x0008a92c) main_camera_pane_g2_ParamLimits

0xe310,	// (0x0008a92c) main_camera_pane_g3_ParamLimits

0xe310,	// (0x0008a92c) main_camera_pane_g4_ParamLimits

0xe310,	// (0x0008a92c) main_camera_pane_g5_ParamLimits

0xe310,	// (0x0008a92c) main_camera_pane_g6_ParamLimits

0xe310,	// (0x0008a92c) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x0008b7c7) main_camera_pane_g_ParamLimits

0x0435,	// (0x0007ca51) main_camera_pane_t1_ParamLimits

0x0435,	// (0x0007ca51) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x0008b7d8) main_camera_pane_t_ParamLimits

0xe279,	// (0x0008a895) bg_popup_preview_window_pane_cp01_ParamLimits

0xe279,	// (0x0008a895) bg_popup_preview_window_pane_cp01

0x080f,	// (0x0007ce2b) popup_phob_thumbnail2_window_g1_ParamLimits

0x080f,	// (0x0007ce2b) popup_phob_thumbnail2_window_g1

0xe01e,	// (0x0008a63a) call2_cli_visual_pane

0x83ac,	// (0x000849c8) popup_call2_audio_conf_window_ParamLimits

0x83ac,	// (0x000849c8) popup_call2_audio_conf_window

0x83c1,	// (0x000849dd) popup_call2_audio_first_window_ParamLimits

0x83c1,	// (0x000849dd) popup_call2_audio_first_window

0x845f,	// (0x00084a7b) popup_call2_audio_in_window_ParamLimits

0x845f,	// (0x00084a7b) popup_call2_audio_in_window

0x84a1,	// (0x00084abd) popup_call2_audio_out_window_ParamLimits

0x84a1,	// (0x00084abd) popup_call2_audio_out_window

0x8503,	// (0x00084b1f) popup_call2_audio_second_window_ParamLimits

0x8503,	// (0x00084b1f) popup_call2_audio_second_window

0x8561,	// (0x00084b7d) popup_call2_audio_wait_window_ParamLimits

0x8561,	// (0x00084b7d) popup_call2_audio_wait_window

0xe01e,	// (0x0008a63a) bg_popup_call2_act_pane_cp03

0xe25b,	// (0x0008a877) list_conf_pane_cp

0x081b,	// (0x0007ce37) popup_call2_audio_conf_window_t1

0xec50,	// (0x0008b26c) list_single_graphic_popup_conf2_pane_ParamLimits

0xec50,	// (0x0008b26c) list_single_graphic_popup_conf2_pane

0xec63,	// (0x0008b27f) list_highlight_pane_cp04

0x0829,	// (0x0007ce45) list_single_graphic_popup_conf2_pane_g1

0xec74,	// (0x0008b290) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x0008baa3) list_single_graphic_popup_conf2_pane_g

0x0833,	// (0x0007ce4f) list_single_graphic_popup_conf2_pane_t1

0x0841,	// (0x0007ce5d) bg_popup_call2_act_pane_cp01_ParamLimits

0x0841,	// (0x0007ce5d) bg_popup_call2_act_pane_cp01

0x08cb,	// (0x0007cee7) call_type_pane_cp05_ParamLimits

0x08cb,	// (0x0007cee7) call_type_pane_cp05

0x091f,	// (0x0007cf3b) popup_call2_audio_second_window_g1_ParamLimits

0x091f,	// (0x0007cf3b) popup_call2_audio_second_window_g1

0x0973,	// (0x0007cf8f) popup_call2_audio_second_window_g2_ParamLimits

0x0973,	// (0x0007cf8f) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x0008baa8) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x0008baa8) popup_call2_audio_second_window_g

0x09d8,	// (0x0007cff4) popup_call2_audio_second_window_t1_ParamLimits

0x09d8,	// (0x0007cff4) popup_call2_audio_second_window_t1

0x0a93,	// (0x0007d0af) popup_call2_audio_second_window_t2_ParamLimits

0x0a93,	// (0x0007d0af) popup_call2_audio_second_window_t2

0x0ae6,	// (0x0007d102) popup_call2_audio_second_window_t3_ParamLimits

0x0ae6,	// (0x0007d102) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x0008baaf) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x0008baaf) popup_call2_audio_second_window_t

0xe01e,	// (0x0008a63a) bg_popup_call2_in_pane_cp02

0xe028,	// (0x0008a644) call_type_pane_cp04

0x85a0,	// (0x00084bbc) popup_call2_audio_wait_window_g1

0x85a8,	// (0x00084bc4) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x0008bab8) popup_call2_audio_wait_window_g

0xe040,	// (0x0008a65c) popup_call2_audio_wait_window_t3

0x0bd9,	// (0x0007d1f5) bg_popup_call2_act_pane_ParamLimits

0x0bd9,	// (0x0007d1f5) bg_popup_call2_act_pane

0x0c99,	// (0x0007d2b5) call_type_pane_cp03_ParamLimits

0x0c99,	// (0x0007d2b5) call_type_pane_cp03

0x0cfd,	// (0x0007d319) popup_call2_audio_first_window_g1_ParamLimits

0x0cfd,	// (0x0007d319) popup_call2_audio_first_window_g1

0x0d6d,	// (0x0007d389) popup_call2_audio_first_window_g2_ParamLimits

0x0d6d,	// (0x0007d389) popup_call2_audio_first_window_g2

0x0dd1,	// (0x0007d3ed) popup_call2_audio_first_window_g3_ParamLimits

0x0dd1,	// (0x0007d3ed) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x0008babd) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x0008babd) popup_call2_audio_first_window_g

0x0e59,	// (0x0007d475) popup_call2_audio_first_window_t1_ParamLimits

0x0e59,	// (0x0007d475) popup_call2_audio_first_window_t1

0x0f5c,	// (0x0007d578) popup_call2_audio_first_window_t4_ParamLimits

0x0f5c,	// (0x0007d578) popup_call2_audio_first_window_t4

0x103f,	// (0x0007d65b) popup_call2_audio_first_window_t5_ParamLimits

0x103f,	// (0x0007d65b) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x0008bac8) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x0008bac8) popup_call2_audio_first_window_t

0xe271,	// (0x0008a88d) bg_popup_call2_act_pane_g1

0x165c,	// (0x0007dc78) popup_cale_lunar_info_window_t1

0x166a,	// (0x0007dc86) popup_cale_lunar_info_window_t2

0x1678,	// (0x0007dc94) popup_cale_lunar_info_window_t3

0xe01e,	// (0x0008a63a) bg_popup_call2_bubble_pane

0x1140,	// (0x0007d75c) bg_popup_call2_in_pane_cp01_ParamLimits

0x1140,	// (0x0007d75c) bg_popup_call2_in_pane_cp01

0xdcfa,	// (0x0008a316) call_type_pane_cp02

0x85b0,	// (0x00084bcc) popup_call2_audio_out_window_g1_ParamLimits

0x85b0,	// (0x00084bcc) popup_call2_audio_out_window_g1

0x1188,	// (0x0007d7a4) popup_call2_audio_out_window_g2_ParamLimits

0x1188,	// (0x0007d7a4) popup_call2_audio_out_window_g2

0x85dc,	// (0x00084bf8) popup_call2_audio_out_window_g3_ParamLimits

0x85dc,	// (0x00084bf8) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x0008bad1) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x0008bad1) popup_call2_audio_out_window_g

0x11bf,	// (0x0007d7db) popup_call2_audio_out_window_t1_ParamLimits

0x11bf,	// (0x0007d7db) popup_call2_audio_out_window_t1

0x121e,	// (0x0007d83a) popup_call2_audio_out_window_t2_ParamLimits

0x121e,	// (0x0007d83a) popup_call2_audio_out_window_t2

0x1272,	// (0x0007d88e) popup_call2_audio_out_window_t3_ParamLimits

0x1272,	// (0x0007d88e) popup_call2_audio_out_window_t3

0x1288,	// (0x0007d8a4) popup_call2_audio_out_window_t4_ParamLimits

0x1288,	// (0x0007d8a4) popup_call2_audio_out_window_t4

0x129e,	// (0x0007d8ba) popup_call2_audio_out_window_t5_ParamLimits

0x129e,	// (0x0007d8ba) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x0008bada) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x0008bada) popup_call2_audio_out_window_t

0x1302,	// (0x0007d91e) bg_popup_call2_in_pane_ParamLimits

0x1302,	// (0x0007d91e) bg_popup_call2_in_pane

0x135e,	// (0x0007d97a) popup_call2_audio_in_window_g1_ParamLimits

0x135e,	// (0x0007d97a) popup_call2_audio_in_window_g1

0x1396,	// (0x0007d9b2) popup_call2_audio_in_window_g2_ParamLimits

0x1396,	// (0x0007d9b2) popup_call2_audio_in_window_g2

0x13ce,	// (0x0007d9ea) popup_call2_audio_in_window_g3_ParamLimits

0x13ce,	// (0x0007d9ea) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x0008bae7) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x0008bae7) popup_call2_audio_in_window_g

0x1426,	// (0x0007da42) popup_call2_audio_in_window_t1_ParamLimits

0x1426,	// (0x0007da42) popup_call2_audio_in_window_t1

0x14a6,	// (0x0007dac2) popup_call2_audio_in_window_t2_ParamLimits

0x14a6,	// (0x0007dac2) popup_call2_audio_in_window_t2

0x1526,	// (0x0007db42) popup_call2_audio_in_window_t3_ParamLimits

0x1526,	// (0x0007db42) popup_call2_audio_in_window_t3

0x1540,	// (0x0007db5c) popup_call2_audio_in_window_t4_ParamLimits

0x1540,	// (0x0007db5c) popup_call2_audio_in_window_t4

0x1552,	// (0x0007db6e) popup_call2_audio_in_window_t5_ParamLimits

0x1552,	// (0x0007db6e) popup_call2_audio_in_window_t5

0x1567,	// (0x0007db83) popup_call2_audio_in_window_t6_ParamLimits

0x1567,	// (0x0007db83) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x0008baf0) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x0008baf0) popup_call2_audio_in_window_t

0xe271,	// (0x0008a88d) bg_popup_call2_in_pane_g1

0x1686,	// (0x0007dca2) popup_cale_lunar_info_window_t4

0x0003,

0xf53c,	// (0x0008bb58) popup_cale_lunar_info_window_t

0xe279,	// (0x0008a895) bg_popup_call2_rect_pane_ParamLimits

0xe279,	// (0x0008a895) bg_popup_call2_rect_pane

0xe01e,	// (0x0008a63a) call2_cli_visual_graphic_pane

0xe01e,	// (0x0008a63a) call2_cli_visual_text_pane

0x8a55,	// (0x00085071) smil_status_volume_pane_g3

0x0002,

0xe291,	// (0x0008a8ad) call2_cli_visual_graphic_pane_g1

0xe291,	// (0x0008a8ad) call2_cli_visual_graphic_pane_g2

0xe291,	// (0x0008a8ad) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x0008bafd) call2_cli_visual_graphic_pane_g

0x157c,	// (0x0007db98) bg_popup_call2_rect_pane_g1

0xe44b,	// (0x0008aa67) bg_popup_call2_rect_pane_g2

0x1584,	// (0x0007dba0) bg_popup_call2_rect_pane_g3

0x158c,	// (0x0007dba8) bg_popup_call2_rect_pane_g4

0x1594,	// (0x0007dbb0) bg_popup_call2_rect_pane_g5

0x159c,	// (0x0007dbb8) bg_popup_call2_rect_pane_g6

0x15a4,	// (0x0007dbc0) bg_popup_call2_rect_pane_g7

0x15ac,	// (0x0007dbc8) bg_popup_call2_rect_pane_g8

0x15b4,	// (0x0007dbd0) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x0008bb04) bg_popup_call2_rect_pane_g

0x15bc,	// (0x0007dbd8) bg_popup_call2_bubble_pane_g1

0x15c4,	// (0x0007dbe0) bg_popup_call2_bubble_pane_g2

0x15cc,	// (0x0007dbe8) bg_popup_call2_bubble_pane_g3

0x15d4,	// (0x0007dbf0) bg_popup_call2_bubble_pane_g4

0x15dc,	// (0x0007dbf8) bg_popup_call2_bubble_pane_g5

0x15e4,	// (0x0007dc00) bg_popup_call2_bubble_pane_g6

0x15ec,	// (0x0007dc08) bg_popup_call2_bubble_pane_g7

0x15f4,	// (0x0007dc10) bg_popup_call2_bubble_pane_g8

0x15fc,	// (0x0007dc18) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x0008bb17) bg_popup_call2_bubble_pane_g

0x618a,	// (0x000827a6) aid_cale_week_size_cell_pane

0xe279,	// (0x0008a895) aid_cams_cif_uncrop_pane_ParamLimits

0xe279,	// (0x0008a895) aid_cams_cif_uncrop_pane

0x677e,	// (0x00082d9a) aid_cams_size_cell_ParamLimits

0x677e,	// (0x00082d9a) aid_cams_size_cell

0x678a,	// (0x00082da6) grid_cams_pane_ParamLimits

0x6798,	// (0x00082db4) linegrid_cams_pane_ParamLimits

0x686f,	// (0x00082e8b) call_video_pane_t1

0x6890,	// (0x00082eac) call_video_pane_t2

0x0001,

0xf203,	// (0x0008b81f) call_video_pane_t

0x6d95,	// (0x000833b1) aid_cale_month_size_cell_pane_ParamLimits

0x6d95,	// (0x000833b1) aid_cale_month_size_cell_pane

0xf580,	// (0x0008bb9c) smil_status_volume_pane_g

0x8a62,	// (0x0008507e) volume_smil_pane_ParamLimits

0x5a09,	// (0x00082025) aid_popup2_width_pane

0x607b,	// (0x00082697) cell_qdial_pane_g4_ParamLimits

0x607b,	// (0x00082697) cell_qdial_pane_g4

0x7c45,	// (0x00084261) aid_blid_cardinal_pane_ParamLimits

0x7c55,	// (0x00084271) aid_blid_destination_pane_ParamLimits

0x7c55,	// (0x00084271) aid_blid_destination_pane

0xe279,	// (0x0008a895) bg_popup_call_poc_act_pane_ParamLimits

0xe279,	// (0x0008a895) bg_popup_call_poc_act_pane

0xe279,	// (0x0008a895) bg_popup_call_poc_inact_pane_ParamLimits

0xe279,	// (0x0008a895) bg_popup_call_poc_inact_pane

0x1604,	// (0x0007dc20) bg_popup_call_poc_act_pane_g1

0x160c,	// (0x0007dc28) bg_popup_call_poc_act_pane_g2

0x1614,	// (0x0007dc30) bg_popup_call_poc_act_pane_g3

0x15d4,	// (0x0007dbf0) bg_popup_call_poc_act_pane_g4

0x15dc,	// (0x0007dbf8) bg_popup_call_poc_act_pane_g5

0x161c,	// (0x0007dc38) bg_popup_call_poc_act_pane_g6

0x15ec,	// (0x0007dc08) bg_popup_call_poc_act_pane_g7

0x1624,	// (0x0007dc40) bg_popup_call_poc_act_pane_g8

0xe01e,	// (0x0008a63a) main_usb_pane

0x88bb,	// (0x00084ed7) popup_cale_lunar_info_window

0x6bb9,	// (0x000831d5) im_reading_pane_t1_ParamLimits

0xe615,	// (0x0008ac31) list_im_pane_ParamLimits

0xe626,	// (0x0008ac42) scroll_pane_cp07_ParamLimits

0xe01e,	// (0x0008a63a) grid_highlight_pane_cp012

0xe279,	// (0x0008a895) mup_scale_pane_ParamLimits

0x0dd1,	// (0x0007d3ed) main_usb_pane_g1_ParamLimits

0x0dd1,	// (0x0007d3ed) main_usb_pane_g1

0x863d,	// (0x00084c59) main_usb_pane_g2_ParamLimits

0x863d,	// (0x00084c59) main_usb_pane_g2

0x0001,

0xf525,	// (0x0008bb41) main_usb_pane_g_ParamLimits

0xf525,	// (0x0008bb41) main_usb_pane_g

0x8649,	// (0x00084c65) main_usb_pane_t1_ParamLimits

0x8649,	// (0x00084c65) main_usb_pane_t1

0x865b,	// (0x00084c77) main_usb_pane_t2_ParamLimits

0x865b,	// (0x00084c77) main_usb_pane_t2

0x866d,	// (0x00084c89) main_usb_pane_t3_ParamLimits

0x866d,	// (0x00084c89) main_usb_pane_t3

0x867f,	// (0x00084c9b) main_usb_pane_t4_ParamLimits

0x867f,	// (0x00084c9b) main_usb_pane_t4

0x8691,	// (0x00084cad) main_usb_pane_t5_ParamLimits

0x8691,	// (0x00084cad) main_usb_pane_t5

0x86a3,	// (0x00084cbf) main_usb_pane_t6_ParamLimits

0x86a3,	// (0x00084cbf) main_usb_pane_t6

0x0005,

0xf52a,	// (0x0008bb46) main_usb_pane_t_ParamLimits

0x7beb,	// (0x00084207) aid_text_placing

0x7bf7,	// (0x00084213) main_location2_pane_t1_ParamLimits

0x7c0b,	// (0x00084227) main_location2_pane_t2_ParamLimits

0x7c1f,	// (0x0008423b) main_location2_pane_t3_ParamLimits

0x7c33,	// (0x0008424f) main_location2_pane_t4_ParamLimits

0x7c33,	// (0x0008424f) main_location2_pane_t4

0xf344,	// (0x0008b960) main_location2_pane_t_ParamLimits

0xe2b5,	// (0x0008a8d1) find_pinb_pane_g2_ParamLimits

0xe2b5,	// (0x0008a8d1) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x0008b6dc) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x0008b6dc) find_pinb_pane_g

0xe2c1,	// (0x0008a8dd) find_pinb_pane_t1_ParamLimits

0xe2d3,	// (0x0008a8ef) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x0008b6e1) find_pinb_pane_t_ParamLimits

0xe01e,	// (0x0008a63a) main_call3_pane

0x7338,	// (0x00083954) cale_month_day_heading_pane_t1_ParamLimits

0x73be,	// (0x000839da) cale_month_day_heading_pane_t2_ParamLimits

0x7437,	// (0x00083a53) cale_month_day_heading_pane_t3_ParamLimits

0x74b0,	// (0x00083acc) cale_month_day_heading_pane_t4_ParamLimits

0x7529,	// (0x00083b45) cale_month_day_heading_pane_t5_ParamLimits

0x75a2,	// (0x00083bbe) cale_month_day_heading_pane_t6_ParamLimits

0x761b,	// (0x00083c37) cale_month_day_heading_pane_t7_ParamLimits

0xf23b,	// (0x0008b857) cale_month_day_heading_pane_t_ParamLimits

0xe85d,	// (0x0008ae79) smil_status_volume_pane

0x8199,	// (0x000847b5) postcard_address_pane_ParamLimits

0x8199,	// (0x000847b5) postcard_address_pane

0x81a5,	// (0x000847c1) postcard_message_pane_ParamLimits

0x81a5,	// (0x000847c1) postcard_message_pane

0x8608,	// (0x00084c24) call2_cli_visual_pane_t1_ParamLimits

0x8608,	// (0x00084c24) call2_cli_visual_pane_t1

0x1811,	// (0x0007de2d) postcard_message_pane_t1_ParamLimits

0x1811,	// (0x0007de2d) postcard_message_pane_t1

0x17f9,	// (0x0007de15) postcard_address_pane_t1_ParamLimits

0x17f9,	// (0x0007de15) postcard_address_pane_t1

0x8b93,	// (0x000851af) popup_call3_audio_in_window_ParamLimits

0x8b93,	// (0x000851af) popup_call3_audio_in_window

0x8a77,	// (0x00085093) bg_popup_call3_in_pane_ParamLimits

0x8a77,	// (0x00085093) bg_popup_call3_in_pane

0x8ad9,	// (0x000850f5) popup_call3_audio_in_window_g1_ParamLimits

0x8ad9,	// (0x000850f5) popup_call3_audio_in_window_g1

0x8af1,	// (0x0008510d) popup_call3_audio_in_window_g2_ParamLimits

0x8af1,	// (0x0008510d) popup_call3_audio_in_window_g2

0x8b09,	// (0x00085125) popup_call3_audio_in_window_g3_ParamLimits

0x8b09,	// (0x00085125) popup_call3_audio_in_window_g3

0x0003,

0xf587,	// (0x0008bba3) popup_call3_audio_in_window_g_ParamLimits

0xf587,	// (0x0008bba3) popup_call3_audio_in_window_g

0x8b31,	// (0x0008514d) popup_call3_audio_in_window_t1_ParamLimits

0x8b31,	// (0x0008514d) popup_call3_audio_in_window_t1

0x8b59,	// (0x00085175) popup_call3_audio_in_window_t2_ParamLimits

0x8b59,	// (0x00085175) popup_call3_audio_in_window_t2

0x8b81,	// (0x0008519d) popup_call3_audio_in_window_t3_ParamLimits

0x8b81,	// (0x0008519d) popup_call3_audio_in_window_t3

0x0002,

0xf590,	// (0x0008bbac) popup_call3_audio_in_window_t_ParamLimits

0xf590,	// (0x0008bbac) popup_call3_audio_in_window_t

0xe526,	// (0x0008ab42) bg_popup_call3_rect_pane

0x157c,	// (0x0007db98) bg_popup_call3_rect_pane_g1

0xe44b,	// (0x0008aa67) bg_popup_call3_rect_pane_g2

0x1584,	// (0x0007dba0) bg_popup_call3_rect_pane_g3

0x158c,	// (0x0007dba8) bg_popup_call3_rect_pane_g4

0x1594,	// (0x0007dbb0) bg_popup_call3_rect_pane_g5

0x159c,	// (0x0007dbb8) bg_popup_call3_rect_pane_g6

0x15a4,	// (0x0007dbc0) bg_popup_call3_rect_pane_g7

0xdc01,	// (0x0008a21d) mup_visualizer_osc_pane

0xdc01,	// (0x0008a21d) mup_visualizer_spec_pane

0x8a97,	// (0x000850b3) call3_video_qcif_pane_ParamLimits

0x8a97,	// (0x000850b3) call3_video_qcif_pane

0x8aa9,	// (0x000850c5) call3_video_qcif_uncrop_pane_ParamLimits

0x8aa9,	// (0x000850c5) call3_video_qcif_uncrop_pane

0x8ab7,	// (0x000850d3) call3_video_subqcif_pane_ParamLimits

0x8ab7,	// (0x000850d3) call3_video_subqcif_pane

0x8ac9,	// (0x000850e5) call3_video_subqcif_uncrop_pane_ParamLimits

0x8ac9,	// (0x000850e5) call3_video_subqcif_uncrop_pane

0x8b21,	// (0x0008513d) popup_call3_audio_in_window_g4_ParamLimits

0x8b21,	// (0x0008513d) popup_call3_audio_in_window_g4

0xdc01,	// (0x0008a21d) mup_spec_half_pane

0xdc01,	// (0x0008a21d) mup_spec_half_pane_cp

0xdc01,	// (0x0008a21d) mup_osc_middle_pane

0xe548,	// (0x0008ab64) mup_visualizer_osc_pane_g1

0x178a,	// (0x0007dda6) mup_spec_bar_pane_ParamLimits

0x178a,	// (0x0007dda6) mup_spec_bar_pane

0xe548,	// (0x0008ab64) mup_spec_bar_pane_g1

0xe548,	// (0x0008ab64) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x0008b9da) mup_spec_bar_pane_g

0x618a,	// (0x000827a6) aid_cale_week_size_cell_pane_ParamLimits

0x619f,	// (0x000827bb) bg_cale_heading_pane_ParamLimits

0xe488,	// (0x0008aaa4) bg_cale_pane_cp01_ParamLimits

0x61bf,	// (0x000827db) cale_week_corner_pane_ParamLimits

0x61d9,	// (0x000827f5) cale_week_day_heading_pane_ParamLimits

0x61f9,	// (0x00082815) cale_week_scroll_pane_g1_ParamLimits

0x6214,	// (0x00082830) cale_week_scroll_pane_g2_ParamLimits

0x6227,	// (0x00082843) cale_week_scroll_pane_g3_ParamLimits

0x623a,	// (0x00082856) cale_week_scroll_pane_g4_ParamLimits

0x624d,	// (0x00082869) cale_week_scroll_pane_g5_ParamLimits

0x6260,	// (0x0008287c) cale_week_scroll_pane_g6_ParamLimits

0x6273,	// (0x0008288f) cale_week_scroll_pane_g7_ParamLimits

0x6288,	// (0x000828a4) cale_week_scroll_pane_g8_ParamLimits

0x629d,	// (0x000828b9) cale_week_scroll_pane_g9_ParamLimits

0x62b0,	// (0x000828cc) cale_week_scroll_pane_g10_ParamLimits

0x62c3,	// (0x000828df) cale_week_scroll_pane_g11_ParamLimits

0x62d6,	// (0x000828f2) cale_week_scroll_pane_g12_ParamLimits

0x62ed,	// (0x00082909) cale_week_scroll_pane_g13_ParamLimits

0x6308,	// (0x00082924) cale_week_scroll_pane_g14_ParamLimits

0x6323,	// (0x0008293f) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x0008b76d) cale_week_scroll_pane_g_ParamLimits

0x6353,	// (0x0008296f) cale_week_time_pane_ParamLimits

0x6368,	// (0x00082984) grid_cale_week_pane_ParamLimits

0xe4a5,	// (0x0008aac1) listscroll_cale_week_pane_t1

0xe4b7,	// (0x0008aad3) scroll_pane_cp08_ParamLimits

0x6e09,	// (0x00083425) cale_month_corner_pane_ParamLimits

0xe833,	// (0x0008ae4f) cale_month_pane_t1

0x72bb,	// (0x000838d7) cale_month_week_pane_ParamLimits

0x0dd1,	// (0x0007d3ed) popup_call_status_window_g1_ParamLimits

0x7a42,	// (0x0008405e) popup_call_status_window_g2_ParamLimits

0x7a4e,	// (0x0008406a) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x0008b8e7) popup_call_status_window_g_ParamLimits

0xebef,	// (0x0008b20b) aid_call2_pane

0x7fcf,	// (0x000845eb) msg_header_pane_g1

0x8199,	// (0x000847b5) postcard_address2_pane_ParamLimits

0x8199,	// (0x000847b5) postcard_address2_pane

0x81a5,	// (0x000847c1) postcard_message2_pane_ParamLimits

0x81a5,	// (0x000847c1) postcard_message2_pane

0x8a27,	// (0x00085043) message2_row_pane_ParamLimits

0x8a27,	// (0x00085043) message2_row_pane

0x8a42,	// (0x0008505e) address2_row_pane_ParamLimits

0x8a42,	// (0x0008505e) address2_row_pane

0x1757,	// (0x0007dd73) postcard_message2_row_pane_g1

0x175f,	// (0x0007dd7b) postcard_message2_row_pane_t1

0x1757,	// (0x0007dd73) address2_row_pane_g1

0x175f,	// (0x0007dd7b) address2_row_pane_t1

0x65ee,	// (0x00082c0a) aid_size_cell_vorec

0xe01e,	// (0x0008a63a) main_rss_pane

0x176d,	// (0x0007dd89) rss_list_single_pane_ParamLimits

0x176d,	// (0x0007dd89) rss_list_single_pane

0x177b,	// (0x0007dd97) rss_list_single_pane_t1

0x177b,	// (0x0007dd97) rss_list_single_pane_t2

0x0001,

0xf57b,	// (0x0008bb97) rss_list_single_pane_t

0xe01e,	// (0x0008a63a) main_camera2_pane

0xe01e,	// (0x0008a63a) main_video2_pane

0x5cb1,	// (0x000822cd) cams_zoom_pane_cp2_ParamLimits

0x5cb1,	// (0x000822cd) cams_zoom_pane_cp2

0x5cb1,	// (0x000822cd) image2_vga_pane_ParamLimits

0x5cb1,	// (0x000822cd) image2_vga_pane

0xec23,	// (0x0008b23f) main_camera2_pane_g1_ParamLimits

0xec23,	// (0x0008b23f) main_camera2_pane_g1

0xec23,	// (0x0008b23f) main_camera2_pane_g2_ParamLimits

0xec23,	// (0x0008b23f) main_camera2_pane_g2

0xec23,	// (0x0008b23f) main_camera2_pane_g3_ParamLimits

0xec23,	// (0x0008b23f) main_camera2_pane_g3

0xec23,	// (0x0008b23f) main_camera2_pane_g4_ParamLimits

0xec23,	// (0x0008b23f) main_camera2_pane_g4

0xec23,	// (0x0008b23f) main_camera2_pane_g5_ParamLimits

0xec23,	// (0x0008b23f) main_camera2_pane_g5

0xec23,	// (0x0008b23f) main_camera2_pane_g6_ParamLimits

0xec23,	// (0x0008b23f) main_camera2_pane_g6

0xec23,	// (0x0008b23f) main_camera2_pane_g7_ParamLimits

0xec23,	// (0x0008b23f) main_camera2_pane_g7

0xec23,	// (0x0008b23f) main_camera2_pane_g8_ParamLimits

0xec23,	// (0x0008b23f) main_camera2_pane_g8

0x0008,

0xf597,	// (0x0008bbb3) main_camera2_pane_g_ParamLimits

0xf597,	// (0x0008bbb3) main_camera2_pane_g

0x8bb0,	// (0x000851cc) main_camera2_pane_t1_ParamLimits

0x8bb0,	// (0x000851cc) main_camera2_pane_t1

0x8bb0,	// (0x000851cc) main_camera2_pane_t2_ParamLimits

0x8bb0,	// (0x000851cc) main_camera2_pane_t2

0x8bb0,	// (0x000851cc) main_camera2_pane_t3_ParamLimits

0x8bb0,	// (0x000851cc) main_camera2_pane_t3

0x8bb0,	// (0x000851cc) main_camera2_pane_t4_ParamLimits

0x8bb0,	// (0x000851cc) main_camera2_pane_t4

0x0006,

0xf5aa,	// (0x0008bbc6) main_camera2_pane_t_ParamLimits

0xf5aa,	// (0x0008bbc6) main_camera2_pane_t

0x8bd8,	// (0x000851f4) cams_zoom_pane_cp4_ParamLimits

0x8bd8,	// (0x000851f4) cams_zoom_pane_cp4

0x8866,	// (0x00084e82) image2_cif_pane_ParamLimits

0x8866,	// (0x00084e82) image2_cif_pane

0x5cb1,	// (0x000822cd) image2_subqcif_pane_ParamLimits

0x5cb1,	// (0x000822cd) image2_subqcif_pane

0x8be6,	// (0x00085202) main_video2_pane_g1_ParamLimits

0x8be6,	// (0x00085202) main_video2_pane_g1

0x8be6,	// (0x00085202) main_video2_pane_g2_ParamLimits

0x8be6,	// (0x00085202) main_video2_pane_g2

0x8be6,	// (0x00085202) main_video2_pane_g3_ParamLimits

0x8be6,	// (0x00085202) main_video2_pane_g3

0x8be6,	// (0x00085202) main_video2_pane_g4_ParamLimits

0x8be6,	// (0x00085202) main_video2_pane_g4

0x8be6,	// (0x00085202) main_video2_pane_g5_ParamLimits

0x8be6,	// (0x00085202) main_video2_pane_g5

0x8be6,	// (0x00085202) main_video2_pane_g6_ParamLimits

0x8be6,	// (0x00085202) main_video2_pane_g6

0x0005,

0xf5b9,	// (0x0008bbd5) main_video2_pane_g_ParamLimits

0xf5b9,	// (0x0008bbd5) main_video2_pane_g

0x8bf4,	// (0x00085210) main_video2_pane_t1_ParamLimits

0x8bf4,	// (0x00085210) main_video2_pane_t1

0x8bf4,	// (0x00085210) main_video2_pane_t2_ParamLimits

0x8bf4,	// (0x00085210) main_video2_pane_t2

0x8bf4,	// (0x00085210) main_video2_pane_t3_ParamLimits

0x8bf4,	// (0x00085210) main_video2_pane_t3

0x0002,

0xf5c6,	// (0x0008bbe2) main_video2_pane_t_ParamLimits

0xf5c6,	// (0x0008bbe2) main_video2_pane_t

0x8739,	// (0x00084d55) call_muted_g2

0x0001,

0xf56d,	// (0x0008bb89) call_muted_g

0xe01e,	// (0x0008a63a) main_mup2_pane

0xe31e,	// (0x0008a93a) main_mup2_pane_g1_ParamLimits

0xe31e,	// (0x0008a93a) main_mup2_pane_g1

0xe31e,	// (0x0008a93a) main_mup2_pane_g2_ParamLimits

0xe31e,	// (0x0008a93a) main_mup2_pane_g2

0x29e0,	// (0x0007effc) main_mup_pane_g13_cp1

0x5ccb,	// (0x000822e7) mup_volume_pane_cp1

0xe31e,	// (0x0008a93a) main_mup2_pane_g4_ParamLimits

0xe31e,	// (0x0008a93a) main_mup2_pane_g4

0xe31e,	// (0x0008a93a) main_mup2_pane_g5_ParamLimits

0xe31e,	// (0x0008a93a) main_mup2_pane_g5

0xe31e,	// (0x0008a93a) main_mup2_pane_g6_ParamLimits

0xe31e,	// (0x0008a93a) main_mup2_pane_g6

0xe31e,	// (0x0008a93a) main_mup2_pane_g7_ParamLimits

0xe31e,	// (0x0008a93a) main_mup2_pane_g7

0x0006,

0xf5cd,	// (0x0008bbe9) main_mup2_pane_g_ParamLimits

0xf5cd,	// (0x0008bbe9) main_mup2_pane_g

0xe32c,	// (0x0008a948) main_mup2_pane_t1_ParamLimits

0xe32c,	// (0x0008a948) main_mup2_pane_t1

0xe32c,	// (0x0008a948) main_mup2_pane_t2_ParamLimits

0xe32c,	// (0x0008a948) main_mup2_pane_t2

0xe32c,	// (0x0008a948) main_mup2_pane_t3_ParamLimits

0xe32c,	// (0x0008a948) main_mup2_pane_t3

0xe32c,	// (0x0008a948) main_mup2_pane_t4_ParamLimits

0xe32c,	// (0x0008a948) main_mup2_pane_t4

0xe32c,	// (0x0008a948) main_mup2_pane_t5_ParamLimits

0xe32c,	// (0x0008a948) main_mup2_pane_t5

0xe32c,	// (0x0008a948) main_mup2_pane_t6_ParamLimits

0xe32c,	// (0x0008a948) main_mup2_pane_t6

0x0005,

0xf5dc,	// (0x0008bbf8) main_mup2_pane_t_ParamLimits

0xf5dc,	// (0x0008bbf8) main_mup2_pane_t

0x184f,	// (0x0007de6b) mup2_visualizer_pane_ParamLimits

0x184f,	// (0x0007de6b) mup2_visualizer_pane

0x184f,	// (0x0007de6b) mup_progress_pane_cp_ParamLimits

0x184f,	// (0x0007de6b) mup_progress_pane_cp

0x8cbb,	// (0x000852d7) mup_volume_pane_cp_ParamLimits

0x8cbb,	// (0x000852d7) mup_volume_pane_cp

0xe302,	// (0x0008a91e) mup2_visualizer_pane_g1_ParamLimits

0xe302,	// (0x0008a91e) mup2_visualizer_pane_g1

0xe310,	// (0x0008a92c) mup2_visualizer_pane_g2_ParamLimits

0xe310,	// (0x0008a92c) mup2_visualizer_pane_g2

0xe310,	// (0x0008a92c) mup2_visualizer_pane_g3_ParamLimits

0xe310,	// (0x0008a92c) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x0008b6e6) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x0008b6e6) mup2_visualizer_pane_g

0x06ab,	// (0x0007ccc7) aid_size_cell_fmradio

0x884f,	// (0x00084e6b) aid_height_parent_landcape

0xe6a4,	// (0x0008acc0) wml_content_pane_cp

0xe6ac,	// (0x0008acc8) wml_tabs_pane

0xe6b5,	// (0x0008acd1) popup_wml_miniature_window

0xe6bd,	// (0x0008acd9) scroll_pane_cp021

0xe6d1,	// (0x0008aced) wml_content_pane_comp8

0xe01e,	// (0x0008a63a) bg_popup_sub_pane_cp05

0x1873,	// (0x0007de8f) popup_wml_miniature_window_g1

0x187b,	// (0x0007de97) wml_miniature_view_pane

0x8c08,	// (0x00085224) aid_size_wml_view

0x8c10,	// (0x0008522c) wml_miniature_view_pane_g1

0x8c19,	// (0x00085235) wml_miniature_view_pane_g2

0x8c22,	// (0x0008523e) wml_miniature_view_pane_g3

0x8c2a,	// (0x00085246) wml_miniature_view_pane_g4

0x8c32,	// (0x0008524e) wml_miniature_view_pane_g5

0x8c3a,	// (0x00085256) wml_miniature_view_pane_g6

0x8c42,	// (0x0008525e) wml_miniature_view_pane_g7

0x8c4a,	// (0x00085266) wml_miniature_view_pane_g8

0x0007,

0xf5e9,	// (0x0008bc05) wml_miniature_view_pane_g

0x1883,	// (0x0007de9f) background_graphic_ParamLimits

0x1883,	// (0x0007de9f) background_graphic

0x188f,	// (0x0007deab) wml_tabs_2_pane

0x1898,	// (0x0007deb4) wml_tabs_3_pane_ParamLimits

0x1898,	// (0x0007deb4) wml_tabs_3_pane

0x18aa,	// (0x0007dec6) wml_tabs_4_pane_ParamLimits

0x18aa,	// (0x0007dec6) wml_tabs_4_pane

0x18c0,	// (0x0007dedc) wml_tabs_5_pane_ParamLimits

0x18c0,	// (0x0007dedc) wml_tabs_5_pane

0x18da,	// (0x0007def6) wml_tabs_pane_g2_ParamLimits

0x18da,	// (0x0007def6) wml_tabs_pane_g2

0x18ef,	// (0x0007df0b) wml_tabs_pane_g3_ParamLimits

0x18ef,	// (0x0007df0b) wml_tabs_pane_g3

0x1904,	// (0x0007df20) wml_tabs_2_active_pane_ParamLimits

0x1904,	// (0x0007df20) wml_tabs_2_active_pane

0x1904,	// (0x0007df20) wml_tabs_2_passive_pane_ParamLimits

0x1904,	// (0x0007df20) wml_tabs_2_passive_pane

0x8c52,	// (0x0008526e) wml_tabs_3_active_pane_cp_ParamLimits

0x8c52,	// (0x0008526e) wml_tabs_3_active_pane_cp

0x8c63,	// (0x0008527f) wml_tabs_3_passive_pane_ParamLimits

0x8c63,	// (0x0008527f) wml_tabs_3_passive_pane

0x8c74,	// (0x00085290) wml_tabs_3_passive_pane_cp_ParamLimits

0x8c74,	// (0x00085290) wml_tabs_3_passive_pane_cp

0x8c85,	// (0x000852a1) tabs_4_active_pane

0x8c8d,	// (0x000852a9) tabs_4_passive_pane

0x8c95,	// (0x000852b1) tabs_4_passive_pane_cp

0x8c9d,	// (0x000852b9) tabs_4_passive_pane_cp2

0x8635,	// (0x00084c51) aid_height_text

0x184f,	// (0x0007de6b) mup_volume_cont_pane_ParamLimits

0x184f,	// (0x0007de6b) mup_volume_cont_pane

0xdc01,	// (0x0008a21d) aid_size_cell_pinb

0xdc01,	// (0x0008a21d) aid_size_list_pinb

0x184f,	// (0x0007de6b) mup2_volume_cont_pane_ParamLimits

0x184f,	// (0x0007de6b) mup2_volume_cont_pane

0x8ca5,	// (0x000852c1) mup2_volume_cont_pane_g1_ParamLimits

0x8ca5,	// (0x000852c1) mup2_volume_cont_pane_g1

0x5a15,	// (0x00082031) aid_size_cell_touch_ParamLimits

0x5a15,	// (0x00082031) aid_size_cell_touch

0x5cd5,	// (0x000822f1) touch_pane_ParamLimits

0x5cd5,	// (0x000822f1) touch_pane

0x5ccb,	// (0x000822e7) main_rss2_pane

0x1931,	// (0x0007df4d) listscroll_rss2_pane

0x193a,	// (0x0007df56) rss2_navigation_pane

0x1942,	// (0x0007df5e) list_rss2_pane

0xed26,	// (0x0008b342) scroll_pane_cp22

0x194a,	// (0x0007df66) rss2_navigation_pane_g1

0x1953,	// (0x0007df6f) rss2_navigation_pane_g2

0x195b,	// (0x0007df77) rss2_navigation_pane_g3

0x0002,

0xf5fa,	// (0x0008bc16) rss2_navigation_pane_g

0x1963,	// (0x0007df7f) rss2_navigation_pane_t1

0x8cd1,	// (0x000852ed) rss2_list_single_pane_ParamLimits

0x8cd1,	// (0x000852ed) rss2_list_single_pane

0x1971,	// (0x0007df8d) rss2_list_single_pane_t2

0x197f,	// (0x0007df9b) rss2_list_single_pane_t3_ParamLimits

0x197f,	// (0x0007df9b) rss2_list_single_pane_t3

0x199c,	// (0x0007dfb8) rss2_list_single_pane_t4

0x78b7,	// (0x00083ed3) smil_status_pane_g1

0x8866,	// (0x00084e82) main_image2_pane_ParamLimits

0x8866,	// (0x00084e82) main_image2_pane

0xec23,	// (0x0008b23f) main_camera2_pane_g9_ParamLimits

0xec23,	// (0x0008b23f) main_camera2_pane_g9

0x8bb0,	// (0x000851cc) main_camera2_pane_t5_ParamLimits

0x8bb0,	// (0x000851cc) main_camera2_pane_t5

0x8bc4,	// (0x000851e0) main_camera2_pane_t6_ParamLimits

0x8bc4,	// (0x000851e0) main_camera2_pane_t6

0x8d02,	// (0x0008531e) main_image2_pane_g1_ParamLimits

0x8d02,	// (0x0008531e) main_image2_pane_g1

0x836d,	// (0x00084989) smil2_video_pane_ParamLimits

0x836d,	// (0x00084989) smil2_video_pane

0x5a49,	// (0x00082065) aid_zoom_text_primary_cp

0x5c66,	// (0x00082282) popup_preview_fixed_window

0xe60d,	// (0x0008ac29) im_reading_pane_g1

0x8ba2,	// (0x000851be) cams2_bc_adjust_pane_cp_ParamLimits

0x8ba2,	// (0x000851be) cams2_bc_adjust_pane_cp

0x5cb1,	// (0x000822cd) cams2_bc_adjust_pane_ParamLimits

0x5cb1,	// (0x000822cd) cams2_bc_adjust_pane

0x29e0,	// (0x0007effc) cams2_bc_adjust_pane_g1

0x5ccb,	// (0x000822e7) cams2_slider_pane

0x29e0,	// (0x0007effc) cams2_slider_pane_g1

0x29e0,	// (0x0007effc) cams2_slider_pane_g2

0x0006,

0xf601,	// (0x0008bc1d) cams2_slider_pane_g

0x5da3,	// (0x000823bf) calc_display_pane_ParamLimits

0x5dc1,	// (0x000823dd) calc_paper_pane_ParamLimits

0x5ddd,	// (0x000823f9) grid_calc_pane_ParamLimits

0x7ab0,	// (0x000840cc) popup_clock_digital_window_t1_ParamLimits

0x0648,	// (0x0007cc64) main_image_pane_t1

0x5d89,	// (0x000823a5) aid_size_cell_calc_ParamLimits

0x5d89,	// (0x000823a5) aid_size_cell_calc

0x8897,	// (0x00084eb3) popup_blid_sat_info2_window_ParamLimits

0x8897,	// (0x00084eb3) popup_blid_sat_info2_window

0x19aa,	// (0x0007dfc6) aid_size_cell_blid

0x184f,	// (0x0007de6b) bg_popup_window_pane_cp07

0x19c7,	// (0x0007dfe3) grid_popup_blid_pane

0x19d1,	// (0x0007dfed) heading_pane_cp05_ParamLimits

0x19d1,	// (0x0007dfed) heading_pane_cp05

0x1a9b,	// (0x0007e0b7) cell_popup_blid_pane_ParamLimits

0x1a9b,	// (0x0007e0b7) cell_popup_blid_pane

0x1abf,	// (0x0007e0db) cell_popup_blid_pane_g1

0x1ac7,	// (0x0007e0e3) cell_popup_blid_pane_t1

0x184f,	// (0x0007de6b) mup2_indicator_pane_ParamLimits

0x184f,	// (0x0007de6b) mup2_indicator_pane

0xdc01,	// (0x0008a21d) mup2_visualizer_osc_pane

0x185d,	// (0x0007de79) mup2_visualizer_spec_pane_ParamLimits

0x185d,	// (0x0007de79) mup2_visualizer_spec_pane

0xdc01,	// (0x0008a21d) mup2_spec_half_pane

0xdc01,	// (0x0008a21d) mup2_spec_half_pane_cp

0x1ad5,	// (0x0007e0f1) mup2_spec_bar_pane_ParamLimits

0x1ad5,	// (0x0007e0f1) mup2_spec_bar_pane

0xe548,	// (0x0008ab64) mup2_spec_bar_pane_g1

0x1af4,	// (0x0007e110) mup2_spec_bar_pane_g2

0x0001,

0xf627,	// (0x0008bc43) mup2_spec_bar_pane_g

0xdc01,	// (0x0008a21d) mup2_osc_middle_pane

0xe548,	// (0x0008ab64) mup2_visualizer_osc_pane_g1

0xdc2b,	// (0x0008a247) popup_number_entry_window_t1_ParamLimits

0xdc3e,	// (0x0008a25a) popup_number_entry_window_t2_ParamLimits

0xdc50,	// (0x0008a26c) popup_number_entry_window_t3_ParamLimits

0x5d2c,	// (0x00082348) popup_number_entry_window_t5_ParamLimits

0x5d2c,	// (0x00082348) popup_number_entry_window_t5

0xf06b,	// (0x0008b687) popup_number_entry_window_t_ParamLimits

0xdc62,	// (0x0008a27e) text_title_cp2_ParamLimits

0x806d,	// (0x00084689) aid_hotspot_pointer_text2_pane

0x80fb,	// (0x00084717) main_viewer_pane_g9_ParamLimits

0x80fb,	// (0x00084717) main_viewer_pane_g9

0xe833,	// (0x0008ae4f) cale_month_pane_t1_ParamLimits

0xe870,	// (0x0008ae8c) bg_cale_pane_ParamLimits

0xe888,	// (0x0008aea4) list_cale_pane_ParamLimits

0xe899,	// (0x0008aeb5) listscroll_cale_day_pane_t1

0xe8ab,	// (0x0008aec7) scroll_pane_cp09_ParamLimits

0x7d33,	// (0x0008434f) main_mup_eq_pane_t1_ParamLimits

0x7d33,	// (0x0008434f) main_mup_eq_pane_t1

0x7d4d,	// (0x00084369) main_mup_eq_pane_t2_ParamLimits

0x7d4d,	// (0x00084369) main_mup_eq_pane_t2

0x7d67,	// (0x00084383) main_mup_eq_pane_t3_ParamLimits

0x7d67,	// (0x00084383) main_mup_eq_pane_t3

0x7d7f,	// (0x0008439b) main_mup_eq_pane_t4_ParamLimits

0x7d7f,	// (0x0008439b) main_mup_eq_pane_t4

0x7d97,	// (0x000843b3) main_mup_eq_pane_t5_ParamLimits

0x7d97,	// (0x000843b3) main_mup_eq_pane_t5

0x7daf,	// (0x000843cb) main_mup_eq_pane_t6_ParamLimits

0x7daf,	// (0x000843cb) main_mup_eq_pane_t6

0x7dc3,	// (0x000843df) main_mup_eq_pane_t7_ParamLimits

0x7dc3,	// (0x000843df) main_mup_eq_pane_t7

0x7dd7,	// (0x000843f3) main_mup_eq_pane_t8_ParamLimits

0x7dd7,	// (0x000843f3) main_mup_eq_pane_t8

0x7ded,	// (0x00084409) main_mup_eq_pane_t9_ParamLimits

0x7ded,	// (0x00084409) main_mup_eq_pane_t9

0x7e05,	// (0x00084421) main_mup_eq_pane_t10_ParamLimits

0x7e05,	// (0x00084421) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x0008b9e6) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x0008b9e6) main_mup_eq_pane_t

0x7ec2,	// (0x000844de) mup_equalizer_pane_cp5_ParamLimits

0x7ed8,	// (0x000844f4) mup_equalizer_pane_cp6_ParamLimits

0x7ef0,	// (0x0008450c) mup_equalizer_pane_cp7_ParamLimits

0x5ccb,	// (0x000822e7) main_gallery_pane

0x17a9,	// (0x0007ddc5) smil2_volume_pane

0x17c4,	// (0x0007dde0) smil_status_volume_pane_g1_ParamLimits

0x17b1,	// (0x0007ddcd) smil_status_volume_pane_g2_ParamLimits

0x8a55,	// (0x00085071) smil_status_volume_pane_g3_ParamLimits

0xf580,	// (0x0008bb9c) smil_status_volume_pane_g_ParamLimits

0x184f,	// (0x0007de6b) bg_popup_window_pane_cp07_ParamLimits

0x19b2,	// (0x0007dfce) blid_firmament_pane

0xe2f4,	// (0x0008a910) aid_size_cell_gallery_ParamLimits

0xe2f4,	// (0x0008a910) aid_size_cell_gallery

0xe2f4,	// (0x0008a910) grid_gallery_pane_ParamLimits

0xe2f4,	// (0x0008a910) grid_gallery_pane

0x0449,	// (0x0007ca65) cell_gallery_pane_ParamLimits

0x0449,	// (0x0007ca65) cell_gallery_pane

0xe29b,	// (0x0008a8b7) bg_cell_gallery_focus_pane_ParamLimits

0xe29b,	// (0x0008a8b7) bg_cell_gallery_focus_pane

0xe302,	// (0x0008a91e) cell_gallery_pane_g1_ParamLimits

0xe302,	// (0x0008a91e) cell_gallery_pane_g1

0xe302,	// (0x0008a91e) cell_gallery_pane_g2_ParamLimits

0xe302,	// (0x0008a91e) cell_gallery_pane_g2

0xe302,	// (0x0008a91e) cell_gallery_pane_g3_ParamLimits

0xe302,	// (0x0008a91e) cell_gallery_pane_g3

0xe310,	// (0x0008a92c) cell_gallery_pane_g4_ParamLimits

0xe310,	// (0x0008a92c) cell_gallery_pane_g4

0x0003,

0xf62c,	// (0x0008bc48) cell_gallery_pane_g_ParamLimits

0xf62c,	// (0x0008bc48) cell_gallery_pane_g

0x1afe,	// (0x0007e11a) bg_cell_gallery_focus_pane_g1

0x1b06,	// (0x0007e122) bg_cell_gallery_focus_pane_g2

0x1b0e,	// (0x0007e12a) bg_cell_gallery_focus_pane_g3

0x1b16,	// (0x0007e132) bg_cell_gallery_focus_pane_g4

0x1b1e,	// (0x0007e13a) bg_cell_gallery_focus_pane_g5

0x1b26,	// (0x0007e142) bg_cell_gallery_focus_pane_g6

0x1b2e,	// (0x0007e14a) bg_cell_gallery_focus_pane_g7

0x1b36,	// (0x0007e152) bg_cell_gallery_focus_pane_g8

0x0007,

0xf635,	// (0x0008bc51) bg_cell_gallery_focus_pane_g

0x1b3e,	// (0x0007e15a) aid_firma_cardinal

0x1b52,	// (0x0007e16e) blid_firmament_pane_t1

0x1b69,	// (0x0007e185) blid_firmament_pane_t2

0x1b80,	// (0x0007e19c) blid_firmament_pane_t3

0x1b97,	// (0x0007e1b3) blid_firmament_pane_t4

0x0003,

0xf646,	// (0x0008bc62) blid_firmament_pane_t

0x1bae,	// (0x0007e1ca) blid_sat_info_pane

0xe548,	// (0x0008ab64) blid_sat_info_pane_g1

0xe548,	// (0x0008ab64) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x0008b9da) blid_sat_info_pane_g

0x1bbe,	// (0x0007e1da) blid_sat_info_pane_t1

0x1bcc,	// (0x0007e1e8) smil2_volume_content_pane

0x1bd5,	// (0x0007e1f1) smil2_volume_pane_g1

0xf01e,	// (0x0008b63a) smil2_volume_content_pane_g1

0x1bdd,	// (0x0007e1f9) smil2_volume_content_pane_g2

0x1be6,	// (0x0007e202) smil2_volume_content_pane_g3

0x1bef,	// (0x0007e20b) smil2_volume_content_pane_g4

0x1bf8,	// (0x0007e214) smil2_volume_content_pane_g5

0x1c01,	// (0x0007e21d) smil2_volume_content_pane_g6

0x1c0a,	// (0x0007e226) smil2_volume_content_pane_g7

0x1c13,	// (0x0007e22f) smil2_volume_content_pane_g8

0x1c1c,	// (0x0007e238) smil2_volume_content_pane_g9

0x1c25,	// (0x0007e241) smil2_volume_content_pane_g10

0x0009,

0xf64f,	// (0x0008bc6b) smil2_volume_content_pane_g

0x63e9,	// (0x00082a05) cale_week_day_heading_pane_t1_ParamLimits

0x6404,	// (0x00082a20) cale_week_day_heading_pane_t2_ParamLimits

0x641f,	// (0x00082a3b) cale_week_day_heading_pane_t3_ParamLimits

0x643a,	// (0x00082a56) cale_week_day_heading_pane_t4_ParamLimits

0x6455,	// (0x00082a71) cale_week_day_heading_pane_t5_ParamLimits

0x6470,	// (0x00082a8c) cale_week_day_heading_pane_t6_ParamLimits

0x648b,	// (0x00082aa7) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x0008b78e) cale_week_day_heading_pane_t_ParamLimits

0xe4d4,	// (0x0008aaf0) bg_cale_side_pane_ParamLimits

0x64a6,	// (0x00082ac2) cale_week_time_pane_t1_ParamLimits

0x64c0,	// (0x00082adc) cale_week_time_pane_t2_ParamLimits

0x64da,	// (0x00082af6) cale_week_time_pane_t3_ParamLimits

0x64f4,	// (0x00082b10) cale_week_time_pane_t4_ParamLimits

0x650e,	// (0x00082b2a) cale_week_time_pane_t5_ParamLimits

0x6528,	// (0x00082b44) cale_week_time_pane_t6_ParamLimits

0x6546,	// (0x00082b62) cale_week_time_pane_t7_ParamLimits

0x6568,	// (0x00082b84) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x0008b79d) cale_week_time_pane_t_ParamLimits

0x658c,	// (0x00082ba8) cell_cale_week_pane_g2_ParamLimits

0xe4d4,	// (0x0008aaf0) bg_cale_side_pane_cp01_ParamLimits

0x76ac,	// (0x00083cc8) cale_month_week_pane_t1_ParamLimits

0x76c5,	// (0x00083ce1) cale_month_week_pane_t2_ParamLimits

0x76de,	// (0x00083cfa) cale_month_week_pane_t3_ParamLimits

0x76f7,	// (0x00083d13) cale_month_week_pane_t4_ParamLimits

0x7710,	// (0x00083d2c) cale_month_week_pane_t5_ParamLimits

0x7731,	// (0x00083d4d) cale_month_week_pane_t6_ParamLimits

0xf24a,	// (0x0008b866) cale_month_week_pane_t_ParamLimits

0x7874,	// (0x00083e90) cell_cale_month_pane_g1_ParamLimits

0x5ccb,	// (0x000822e7) main_cale_event_viewer_pane

0xdc01,	// (0x0008a21d) listscroll_cale_event_viewer_pane

0x1c2e,	// (0x0007e24a) list_cale_ev_pane

0x1c36,	// (0x0007e252) scroll_pane_cp023

0x1c42,	// (0x0007e25e) field_cale_ev_pane_ParamLimits

0x1c42,	// (0x0007e25e) field_cale_ev_pane

0x1c60,	// (0x0007e27c) field_cale_ev_content_pane_ParamLimits

0x1c60,	// (0x0007e27c) field_cale_ev_content_pane

0x1c6c,	// (0x0007e288) field_cale_ev_pane_g1_ParamLimits

0x1c6c,	// (0x0007e288) field_cale_ev_pane_g1

0x1c78,	// (0x0007e294) field_cale_ev_pane_g2_ParamLimits

0x1c78,	// (0x0007e294) field_cale_ev_pane_g2

0x1c90,	// (0x0007e2ac) field_cale_ev_pane_g3_ParamLimits

0x1c90,	// (0x0007e2ac) field_cale_ev_pane_g3

0x0002,

0xf664,	// (0x0008bc80) field_cale_ev_pane_g_ParamLimits

0xf664,	// (0x0008bc80) field_cale_ev_pane_g

0x1ca8,	// (0x0007e2c4) field_cale_ev_pane_t1_ParamLimits

0x1ca8,	// (0x0007e2c4) field_cale_ev_pane_t1

0xf027,	// (0x0008b643) field_cale_ev_content_pane_t1_ParamLimits

0xf027,	// (0x0008b643) field_cale_ev_content_pane_t1

0x04ec,	// (0x0007cb08) bg_button_pane_cp01

0x617a,	// (0x00082796) listscroll_cale_week_pane_ParamLimits

0xe47f,	// (0x0008aa9b) popup_toolbar_window_cp01

0xe4a5,	// (0x0008aac1) listscroll_cale_week_pane_t1_ParamLimits

0x617a,	// (0x00082796) listscroll_cale_day_pane_ParamLimits

0xe47f,	// (0x0008aa9b) popup_toolbar_window_cp02

0xe899,	// (0x0008aeb5) listscroll_cale_day_pane_t1_ParamLimits

0x617a,	// (0x00082796) main_cale_month_pane_ParamLimits

0x899e,	// (0x00084fba) popup_toolbar_window_cp03_ParamLimits

0x899e,	// (0x00084fba) popup_toolbar_window_cp03

0x8283,	// (0x0008489f) main_image_pane_g2_ParamLimits

0x8283,	// (0x0008489f) main_image_pane_g2

0x828f,	// (0x000848ab) main_image_pane_g3_ParamLimits

0x828f,	// (0x000848ab) main_image_pane_g3

0x0002,

0xf45c,	// (0x0008ba78) main_image_pane_g_ParamLimits

0xf45c,	// (0x0008ba78) main_image_pane_g

0x0648,	// (0x0007cc64) main_image_pane_t1_ParamLimits

0x829b,	// (0x000848b7) main_image_pane_t2_ParamLimits

0x829b,	// (0x000848b7) main_image_pane_t2

0x82ad,	// (0x000848c9) main_image_pane_t3_ParamLimits

0x82ad,	// (0x000848c9) main_image_pane_t3

0x82bf,	// (0x000848db) main_image_pane_t4_ParamLimits

0x82bf,	// (0x000848db) main_image_pane_t4

0x0003,

0xf463,	// (0x0008ba7f) main_image_pane_t_ParamLimits

0xf463,	// (0x0008ba7f) main_image_pane_t

0x82d1,	// (0x000848ed) popup_image_details_window_cp01

0x82db,	// (0x000848f7) popup_toobar_trans_pane_cp01_ParamLimits

0x82db,	// (0x000848f7) popup_toobar_trans_pane_cp01

0x88ee,	// (0x00084f0a) popup_image_details_window_ParamLimits

0x88ee,	// (0x00084f0a) popup_image_details_window

0x88fc,	// (0x00084f18) popup_image_focus_window

0x5cb1,	// (0x000822cd) camera2_autofocus_pane_ParamLimits

0x5cb1,	// (0x000822cd) camera2_autofocus_pane

0xdc01,	// (0x0008a21d) bg_popup_sub_pane_cp06

0x1cbf,	// (0x0007e2db) popup_image_focus_window_g1

0x1cc7,	// (0x0007e2e3) popup_image_focus_window_g2

0x1ccf,	// (0x0007e2eb) popup_image_focus_window_g3

0x1cd7,	// (0x0007e2f3) popup_image_focus_window_g4

0x0003,

0xf66b,	// (0x0008bc87) popup_image_focus_window_g

0x1cdf,	// (0x0007e2fb) popup_image_focus_window_t1

0x1ced,	// (0x0007e309) popup_image_focus_window_t2

0x1cfd,	// (0x0007e319) popup_image_focus_window_t3

0x0002,

0xf674,	// (0x0008bc90) popup_image_focus_window_t

0xe302,	// (0x0008a91e) camera2_autofocus_pane_g1

0xe29b,	// (0x0008a8b7) bg_tb_trans_pane_cp01

0x1d0b,	// (0x0007e327) popup_image_details_window_g1

0x1d1e,	// (0x0007e33a) popup_image_details_window_g2

0x0002,

0xf686,	// (0x0008bca2) popup_image_details_window_g

0x1d47,	// (0x0007e363) popup_image_details_window_t1

0x1d59,	// (0x0007e375) popup_image_details_window_t2

0x1d72,	// (0x0007e38e) popup_image_details_window_t3

0x1d86,	// (0x0007e3a2) popup_image_details_window_t4

0x1da1,	// (0x0007e3bd) popup_image_details_window_t5

0x0004,

0xf68d,	// (0x0008bca9) popup_image_details_window_t

0xe360,	// (0x0008a97c) bg_calc_paper_pane_ParamLimits

0x5ccb,	// (0x000822e7) grid_highlight_pane_cp013

0x5ef8,	// (0x00082514) list_calc_pane_ParamLimits

0x5f0a,	// (0x00082526) scroll_pane_cp024

0xe374,	// (0x0008a990) bg_calc_display_pane_ParamLimits

0x5f12,	// (0x0008252e) calc_display_pane_t1_ParamLimits

0x5f27,	// (0x00082543) calc_display_pane_t2_ParamLimits

0x5f3c,	// (0x00082558) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x0008b70e) calc_display_pane_t_ParamLimits

0x6015,	// (0x00082631) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x0008b72b) cell_calc_pane_g

0x601e,	// (0x0008263a) cell_calc_pane_t1

0xe3c9,	// (0x0008a9e5) grid_highlight_pane_cp02_ParamLimits

0xe3df,	// (0x0008a9fb) toolbar_button_pane_cp01_ParamLimits

0xe3df,	// (0x0008a9fb) toolbar_button_pane_cp01

0x068d,	// (0x0007cca9) temp_image_control_pane_ParamLimits

0x068d,	// (0x0007cca9) temp_image_control_pane

0x8866,	// (0x00084e82) main_mp3_pane

0x1dbb,	// (0x0007e3d7) temp_image_control_pane_g1_ParamLimits

0x1dbb,	// (0x0007e3d7) temp_image_control_pane_g1

0x1dc9,	// (0x0007e3e5) temp_image_control_pane_g2_ParamLimits

0x1dc9,	// (0x0007e3e5) temp_image_control_pane_g2

0x1ddb,	// (0x0007e3f7) temp_image_control_pane_g3_ParamLimits

0x1ddb,	// (0x0007e3f7) temp_image_control_pane_g3

0x8d0e,	// (0x0008532a) temp_image_control_pane_g4_ParamLimits

0x8d0e,	// (0x0008532a) temp_image_control_pane_g4

0x0003,

0xf698,	// (0x0008bcb4) temp_image_control_pane_g_ParamLimits

0xf698,	// (0x0008bcb4) temp_image_control_pane_g

0x1dbb,	// (0x0007e3d7) main_mp3_pane_g1

0x8d1f,	// (0x0008533b) main_mp3_pane_g2

0x0007,

0xf6a1,	// (0x0008bcbd) main_mp3_pane_g

0x1e10,	// (0x0007e42c) main_mp3_pane_t1

0xe310,	// (0x0008a92c) main_camera_pane_g8_ParamLimits

0xe310,	// (0x0008a92c) main_camera_pane_g8

0x6736,	// (0x00082d52) main_video_pane_g7_ParamLimits

0x6736,	// (0x00082d52) main_video_pane_g7

0x8bb0,	// (0x000851cc) main_camera2_pane_t7_ParamLimits

0x8bb0,	// (0x000851cc) main_camera2_pane_t7

0xe664,	// (0x0008ac80) scroll_pane_cp025_ParamLimits

0xe664,	// (0x0008ac80) scroll_pane_cp025

0xe678,	// (0x0008ac94) scroll_pane_cp026_ParamLimits

0xe678,	// (0x0008ac94) scroll_pane_cp026

0xe687,	// (0x0008aca3) wml_content_pane_ParamLimits

0x5ccb,	// (0x000822e7) main_touch_calib_pane

0x8dc3,	// (0x000853df) main_touch_calib_pane_g1

0x8dcf,	// (0x000853eb) main_touch_calib_pane_g2

0x8ddb,	// (0x000853f7) main_touch_calib_pane_g3

0x8de7,	// (0x00085403) main_touch_calib_pane_g4

0x0003,

0xf6bf,	// (0x0008bcdb) main_touch_calib_pane_g

0x8df3,	// (0x0008540f) main_touch_calib_pane_t1

0x8e0c,	// (0x00085428) main_touch_calib_pane_t2

0x0004,

0xf6c8,	// (0x0008bce4) main_touch_calib_pane_t

0xee02,	// (0x0008b41e) mup_progress_pane_cp02

0xee37,	// (0x0008b453) navi_pane_g1

0xeef2,	// (0x0008b50e) navi_pane_mp_t3

0x8866,	// (0x00084e82) main_mp3_pane_ParamLimits

0x89db,	// (0x00084ff7) navi_pane_ParamLimits

0x1dbb,	// (0x0007e3d7) main_mp3_pane_g1_ParamLimits

0x8d1f,	// (0x0008533b) main_mp3_pane_g2_ParamLimits

0x8d2b,	// (0x00085347) main_mp3_pane_g3_ParamLimits

0x8d2b,	// (0x00085347) main_mp3_pane_g3

0x8d37,	// (0x00085353) main_mp3_pane_g4_ParamLimits

0x8d37,	// (0x00085353) main_mp3_pane_g4

0xe302,	// (0x0008a91e) main_mp3_pane_g5_ParamLimits

0xe302,	// (0x0008a91e) main_mp3_pane_g5

0x1deb,	// (0x0007e407) main_mp3_pane_g6_ParamLimits

0x1deb,	// (0x0007e407) main_mp3_pane_g6

0x1df8,	// (0x0007e414) main_mp3_pane_g7_ParamLimits

0x1df8,	// (0x0007e414) main_mp3_pane_g7

0x1e04,	// (0x0007e420) main_mp3_pane_g8_ParamLimits

0x1e04,	// (0x0007e420) main_mp3_pane_g8

0xf6a1,	// (0x0008bcbd) main_mp3_pane_g_ParamLimits

0x8d43,	// (0x0008535f) main_mp3_pane_t2

0x8d53,	// (0x0008536f) main_mp3_pane_t3

0x1e1e,	// (0x0007e43a) main_mp3_pane_t4

0x1e2c,	// (0x0007e448) main_mp3_pane_t5

0x0005,

0xf6b2,	// (0x0008bcce) main_mp3_pane_t

0x1e3a,	// (0x0007e456) mup_progress_pane_cp01

0x5a49,	// (0x00082065) aid_zoom_text_secondary2

0x1c2e,	// (0x0007e24a) list_cale_ev2_pane

0x1c36,	// (0x0007e252) scroll_pane_cp023_ParamLimits

0x8e67,	// (0x00085483) field_cale_ev2_pane_ParamLimits

0x8e67,	// (0x00085483) field_cale_ev2_pane

0x8e90,	// (0x000854ac) field_cale_ev2_pane_g1_ParamLimits

0x8e90,	// (0x000854ac) field_cale_ev2_pane_g1

0x8e9c,	// (0x000854b8) field_cale_ev2_pane_g2_ParamLimits

0x8e9c,	// (0x000854b8) field_cale_ev2_pane_g2

0x8eb4,	// (0x000854d0) field_cale_ev2_pane_g3_ParamLimits

0x8eb4,	// (0x000854d0) field_cale_ev2_pane_g3

0x0003,

0xf6d3,	// (0x0008bcef) field_cale_ev2_pane_g_ParamLimits

0xf6d3,	// (0x0008bcef) field_cale_ev2_pane_g

0x1e4e,	// (0x0007e46a) field_cale_ev2_pane_t1_ParamLimits

0x1e4e,	// (0x0007e46a) field_cale_ev2_pane_t1

0x1e65,	// (0x0007e481) field_cale_ev2_pane_t2_ParamLimits

0x1e65,	// (0x0007e481) field_cale_ev2_pane_t2

0x0001,

0xf6dc,	// (0x0008bcf8) field_cale_ev2_pane_t_ParamLimits

0xf6dc,	// (0x0008bcf8) field_cale_ev2_pane_t

0x8163,	// (0x0008477f) main_postcard_pane_g5_ParamLimits

0x8163,	// (0x0008477f) main_postcard_pane_g5

0x8171,	// (0x0008478d) main_postcard_pane_g6_ParamLimits

0x8171,	// (0x0008478d) main_postcard_pane_g6

0xe2f4,	// (0x0008a910) camera2_autofocus_pane_cp_ParamLimits

0xe2f4,	// (0x0008a910) camera2_autofocus_pane_cp

0x8866,	// (0x00084e82) main_mup3_pane

0x8f0b,	// (0x00085527) main_mup3_pane_g1_ParamLimits

0x8f0b,	// (0x00085527) main_mup3_pane_g1

0x8f2c,	// (0x00085548) main_mup3_pane_g2_ParamLimits

0x8f2c,	// (0x00085548) main_mup3_pane_g2

0x8fa4,	// (0x000855c0) main_mup3_pane_g3_ParamLimits

0x8fa4,	// (0x000855c0) main_mup3_pane_g3

0x8fe7,	// (0x00085603) main_mup3_pane_g4_ParamLimits

0x8fe7,	// (0x00085603) main_mup3_pane_g4

0x902a,	// (0x00085646) main_mup3_pane_g5_ParamLimits

0x902a,	// (0x00085646) main_mup3_pane_g5

0x906d,	// (0x00085689) main_mup3_pane_g6_ParamLimits

0x906d,	// (0x00085689) main_mup3_pane_g6

0xe310,	// (0x0008a92c) main_mup3_pane_g7_ParamLimits

0xe310,	// (0x0008a92c) main_mup3_pane_g7

0x0007,

0xf6ec,	// (0x0008bd08) main_mup3_pane_g_ParamLimits

0xf6ec,	// (0x0008bd08) main_mup3_pane_g

0x90e3,	// (0x000856ff) main_mup3_pane_t1_ParamLimits

0x90e3,	// (0x000856ff) main_mup3_pane_t1

0x9152,	// (0x0008576e) main_mup3_pane_t2_ParamLimits

0x9152,	// (0x0008576e) main_mup3_pane_t2

0x921b,	// (0x00085837) main_mup3_pane_t4_ParamLimits

0x921b,	// (0x00085837) main_mup3_pane_t4

0x9269,	// (0x00085885) main_mup3_pane_t5_ParamLimits

0x9269,	// (0x00085885) main_mup3_pane_t5

0x9319,	// (0x00085935) main_mup3_pane_t6_ParamLimits

0x9319,	// (0x00085935) main_mup3_pane_t6

0x0005,

0xf6fd,	// (0x0008bd19) main_mup3_pane_t_ParamLimits

0xf6fd,	// (0x0008bd19) main_mup3_pane_t

0x93c5,	// (0x000859e1) mup3_progress_pane_ParamLimits

0x93c5,	// (0x000859e1) mup3_progress_pane

0x9443,	// (0x00085a5f) popup_mup3_control_window_ParamLimits

0x9443,	// (0x00085a5f) popup_mup3_control_window

0x1e7a,	// (0x0007e496) popup_mup3_text_window

0x945c,	// (0x00085a78) mup3_progress_pane_t1

0x947b,	// (0x00085a97) mup3_progress_pane_t2

0x1e82,	// (0x0007e49e) mup3_progress_pane_t3

0x0002,

0xf70a,	// (0x0008bd26) mup3_progress_pane_t

0x1e9f,	// (0x0007e4bb) mup_progress_pane_cp03

0xdc01,	// (0x0008a21d) bg_tb_trans_pane_cp04

0x949a,	// (0x00085ab6) mup3_volume_pane

0x94a2,	// (0x00085abe) popup_mup3_control_window_g1

0x94ab,	// (0x00085ac7) mup3_volume_pane_g1

0x94b4,	// (0x00085ad0) mup3_volume_pane_g2

0x94bd,	// (0x00085ad9) mup3_volume_pane_g3

0x0002,

0xf711,	// (0x0008bd2d) mup3_volume_pane_g

0xdc01,	// (0x0008a21d) bg_tb_trans_pane_cp03

0x1eaf,	// (0x0007e4cb) popup_mup3_text_window_g1

0x1eb7,	// (0x0007e4d3) popup_mup3_text_window_t1

0xe3bc,	// (0x0008a9d8) list_calc_item_pane_g1_ParamLimits

0x1928,	// (0x0007df44) mup_volume_pane_cp_g1

0x8e25,	// (0x00085441) main_touch_calib_pane_t3

0x8e3b,	// (0x00085457) main_touch_calib_pane_t4

0x8e51,	// (0x0008546d) main_touch_calib_pane_t5

0x5a01,	// (0x0008201d) aid_cell_size_toolbar2

0x5a09,	// (0x00082025) aid_popup3_width_pane

0x5911,	// (0x00081f2d) aid_zoom_text_msg_primary

0x6638,	// (0x00082c54) vorec_t7

0xe380,	// (0x0008a99c) bg_calc_paper_pane_g1_ParamLimits

0xe38c,	// (0x0008a9a8) bg_calc_paper_pane_g2_ParamLimits

0xe398,	// (0x0008a9b4) bg_calc_paper_pane_g3_ParamLimits

0xe3a4,	// (0x0008a9c0) bg_calc_paper_pane_g4_ParamLimits

0xe3b0,	// (0x0008a9cc) bg_calc_paper_pane_g5_ParamLimits

0x5f7b,	// (0x00082597) bg_calc_paper_pane_g6_ParamLimits

0x5f8c,	// (0x000825a8) bg_calc_paper_pane_g7_ParamLimits

0x5f9d,	// (0x000825b9) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x0008b715) bg_calc_paper_pane_g_ParamLimits

0x5fae,	// (0x000825ca) calc_bg_paper_pane_g9_ParamLimits

0xe2f4,	// (0x0008a910) image_qvga_pane_ParamLimits

0xe2f4,	// (0x0008a910) image_qvga_pane

0xe279,	// (0x0008a895) bg_popup_sub_pane_cp04_ParamLimits

0x05c4,	// (0x0007cbe0) popup_mup_playback_window_g1_ParamLimits

0x05d0,	// (0x0007cbec) popup_mup_playback_window_t1_ParamLimits

0x05e5,	// (0x0007cc01) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x0008ba73) popup_mup_playback_window_t_ParamLimits

0xe302,	// (0x0008a91e) main_mup2_pane_g3_ParamLimits

0xe302,	// (0x0008a91e) main_mup2_pane_g3

0x691d,	// (0x00082f39) popup_toolbar_window_cp04

0x09c7,	// (0x0007cfe3) popup_call2_audio_second_window_g3_ParamLimits

0x09c7,	// (0x0007cfe3) popup_call2_audio_second_window_g3

0x0ddf,	// (0x0007d3fb) popup_call2_audio_first_window_g4_ParamLimits

0x0ddf,	// (0x0007d3fb) popup_call2_audio_first_window_g4

0x1406,	// (0x0007da22) popup_call2_audio_in_window_g4_ParamLimits

0x1406,	// (0x0007da22) popup_call2_audio_in_window_g4

0x8276,	// (0x00084892) aid_area_sk_bg_cut_ParamLimits

0x8276,	// (0x00084892) aid_area_sk_bg_cut

0x05fa,	// (0x0007cc16) aid_area_sk_bg_cut_2_ParamLimits

0x05fa,	// (0x0007cc16) aid_area_sk_bg_cut_2

0xdc01,	// (0x0008a21d) aid_placing_details_win

0xdc01,	// (0x0008a21d) aid_placing_details_win_2

0xe302,	// (0x0008a91e) camera2_autofocus_pane_g1_ParamLimits

0x5c57,	// (0x00082273) popup_fixed_preview_cale_window_ParamLimits

0x5c57,	// (0x00082273) popup_fixed_preview_cale_window

0xef70,	// (0x0008b58c) navi_slider_pane_g3

0xef79,	// (0x0008b595) navi_slider_pane_g4

0xef82,	// (0x0008b59e) navi_slider_pane_g5

0xef70,	// (0x0008b58c) navi_slider_pane_g6

0x7d07,	// (0x00084323) navi_slider_pane_g7

0x04b9,	// (0x0007cad5) mup_scale_pane_g3

0x04c2,	// (0x0007cade) mup_scale_pane_g4

0x04cb,	// (0x0007cae7) mup_scale_pane_g5

0x7f08,	// (0x00084524) mup_scale_pane_g6

0x7f11,	// (0x0008452d) mup_scale_pane_g7

0x29e0,	// (0x0007effc) cams2_slider_pane_g3

0x29e0,	// (0x0007effc) cams2_slider_pane_g4

0x29e0,	// (0x0007effc) cams2_slider_pane_g5

0x29e0,	// (0x0007effc) cams2_slider_pane_g6

0x29e0,	// (0x0007effc) cams2_slider_pane_g7

0xe548,	// (0x0008ab64) camera2_autofocus_pane_cp_g1

0x16dc,	// (0x0007dcf8) bg_popup_preview_window_pane_cp02_ParamLimits

0x16dc,	// (0x0007dcf8) bg_popup_preview_window_pane_cp02

0x1ec5,	// (0x0007e4e1) list_fp_cale_pane_ParamLimits

0x1ec5,	// (0x0007e4e1) list_fp_cale_pane

0x1ed1,	// (0x0007e4ed) popup_fixed_preview_cale_window_t1_ParamLimits

0x1ed1,	// (0x0007e4ed) popup_fixed_preview_cale_window_t1

0x94c6,	// (0x00085ae2) popup_fixed_preview_cale_window_t2_ParamLimits

0x94c6,	// (0x00085ae2) popup_fixed_preview_cale_window_t2

0x94db,	// (0x00085af7) popup_fixed_preview_cale_window_t3_ParamLimits

0x94db,	// (0x00085af7) popup_fixed_preview_cale_window_t3

0x0002,

0xf718,	// (0x0008bd34) popup_fixed_preview_cale_window_t_ParamLimits

0xf718,	// (0x0008bd34) popup_fixed_preview_cale_window_t

0x94f0,	// (0x00085b0c) list_single_fp_cale_pane_ParamLimits

0x94f0,	// (0x00085b0c) list_single_fp_cale_pane

0x1eef,	// (0x0007e50b) list_single_fp_cale_pane_g1_ParamLimits

0x1eef,	// (0x0007e50b) list_single_fp_cale_pane_g1

0x1efb,	// (0x0007e517) list_single_fp_cale_pane_g2_ParamLimits

0x1efb,	// (0x0007e517) list_single_fp_cale_pane_g2

0x0002,

0xf71f,	// (0x0008bd3b) list_single_fp_cale_pane_g_ParamLimits

0xf71f,	// (0x0008bd3b) list_single_fp_cale_pane_g

0x1f14,	// (0x0007e530) list_single_fp_cale_pane_t1_ParamLimits

0x1f14,	// (0x0007e530) list_single_fp_cale_pane_t1

0x1f26,	// (0x0007e542) list_single_fp_cale_pane_t2_ParamLimits

0x1f26,	// (0x0007e542) list_single_fp_cale_pane_t2

0x0001,

0xf726,	// (0x0008bd42) list_single_fp_cale_pane_t_ParamLimits

0xf726,	// (0x0008bd42) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5ccb,	// (0x000822e7) main_dialer_pane

0xdc01,	// (0x0008a21d) aid_cell_size_keypad

0xdc01,	// (0x0008a21d) dialer_ne_pane

0xdc01,	// (0x0008a21d) grid_dialer_command_1_pane

0xdc01,	// (0x0008a21d) grid_dialer_command_2_pane

0xdc01,	// (0x0008a21d) grid_dialer_keypad_pane

0x184f,	// (0x0007de6b) bg_popup_call_pane_cp06_ParamLimits

0x184f,	// (0x0007de6b) bg_popup_call_pane_cp06

0x184f,	// (0x0007de6b) dialer_ne_clear_pane_ParamLimits

0x184f,	// (0x0007de6b) dialer_ne_clear_pane

0xe548,	// (0x0008ab64) dialer_ne_pane_g1

0x0435,	// (0x0007ca51) dialer_ne_pane_t1_ParamLimits

0x0435,	// (0x0007ca51) dialer_ne_pane_t1

0x2172,	// (0x0007e78e) dialer_ne_pane_t2_ParamLimits

0x2172,	// (0x0007e78e) dialer_ne_pane_t2

0x9503,	// (0x00085b1f) dialer_ne_pane_t3_ParamLimits

0x9503,	// (0x00085b1f) dialer_ne_pane_t3

0x0002,

0xf72b,	// (0x0008bd47) dialer_ne_pane_t_ParamLimits

0xf72b,	// (0x0008bd47) dialer_ne_pane_t

0x9503,	// (0x00085b1f) dialer_ne_pane_t3_copy1_ParamLimits

0x9503,	// (0x00085b1f) dialer_ne_pane_t3_copy1

0x1f59,	// (0x0007e575) cell_dialer_keypad_pane_ParamLimits

0x1f59,	// (0x0007e575) cell_dialer_keypad_pane

0xe29b,	// (0x0008a8b7) cell_dialer_command_1_pane_ParamLimits

0xe29b,	// (0x0008a8b7) cell_dialer_command_1_pane

0x1f70,	// (0x0007e58c) cell_dialer_command_2_pane_ParamLimits

0x1f70,	// (0x0007e58c) cell_dialer_command_2_pane

0xe29b,	// (0x0008a8b7) bg_button_pane_cp02_ParamLimits

0xe29b,	// (0x0008a8b7) bg_button_pane_cp02

0xe302,	// (0x0008a91e) cell_dialer_keypad_pane_g1_ParamLimits

0xe302,	// (0x0008a91e) cell_dialer_keypad_pane_g1

0xe29b,	// (0x0008a8b7) bg_button_pane_cp03_ParamLimits

0xe29b,	// (0x0008a8b7) bg_button_pane_cp03

0xe302,	// (0x0008a91e) cell_dialer_command_1_pane_g1_ParamLimits

0xe302,	// (0x0008a91e) cell_dialer_command_1_pane_g1

0xdc01,	// (0x0008a21d) bg_button_pane_cp04

0xe548,	// (0x0008ab64) cell_dialer_command_2_pane_g1

0xdc01,	// (0x0008a21d) bg_button_pane_cp06

0xe548,	// (0x0008ab64) dialer_ne_clear_pane_g1

0xee43,	// (0x0008b45f) navi_pane_g2

0xee71,	// (0x0008b48d) navi_pane_g3

0x0002,

0xf35a,	// (0x0008b976) navi_pane_g

0xef00,	// (0x0008b51c) navi_pane_mv_g2

0xef27,	// (0x0008b543) navi_pane_mv_g5

0x7cd2,	// (0x000842ee) navi_pane_mv_t1

0xe374,	// (0x0008a990) main_clock2_pane

0xe2f4,	// (0x0008a910) main_clock2_list_pane_ParamLimits

0xe2f4,	// (0x0008a910) main_clock2_list_pane

0x9579,	// (0x00085b95) main_clock2_pane_t1_ParamLimits

0x9579,	// (0x00085b95) main_clock2_pane_t1

0x95a7,	// (0x00085bc3) main_clock2_pane_t2_ParamLimits

0x95a7,	// (0x00085bc3) main_clock2_pane_t2

0x0004,

0xf737,	// (0x0008bd53) main_clock2_pane_t_ParamLimits

0xf737,	// (0x0008bd53) main_clock2_pane_t

0x960c,	// (0x00085c28) popup_clock_analogue_window_cp03_ParamLimits

0x960c,	// (0x00085c28) popup_clock_analogue_window_cp03

0x962a,	// (0x00085c46) popup_clock_digital_window_cp02_ParamLimits

0x962a,	// (0x00085c46) popup_clock_digital_window_cp02

0x969f,	// (0x00085cbb) main_clock2_list_single_pane_ParamLimits

0x969f,	// (0x00085cbb) main_clock2_list_single_pane

0xe526,	// (0x0008ab42) list_highlight_pane_cp05

0x1fb7,	// (0x0007e5d3) main_clock2_list_single_pane_t1

0x691d,	// (0x00082f39) popup_toolbar_window_cp04_ParamLimits

0xe310,	// (0x0008a92c) camera2_autofocus_pane_g2_ParamLimits

0xe310,	// (0x0008a92c) camera2_autofocus_pane_g2

0xe310,	// (0x0008a92c) camera2_autofocus_pane_g3_ParamLimits

0xe310,	// (0x0008a92c) camera2_autofocus_pane_g3

0xe310,	// (0x0008a92c) camera2_autofocus_pane_g4_ParamLimits

0xe310,	// (0x0008a92c) camera2_autofocus_pane_g4

0xe310,	// (0x0008a92c) camera2_autofocus_pane_g5_ParamLimits

0xe310,	// (0x0008a92c) camera2_autofocus_pane_g5

0x0004,

0xf67b,	// (0x0008bc97) camera2_autofocus_pane_g_ParamLimits

0xf67b,	// (0x0008bc97) camera2_autofocus_pane_g

0x8ecc,	// (0x000854e8) camera2_autofocus_pane_cp_g2

0x8ed4,	// (0x000854f0) camera2_autofocus_pane_cp_g3

0x8edc,	// (0x000854f8) camera2_autofocus_pane_cp_g4

0x8ee4,	// (0x00085500) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e1,	// (0x0008bcfd) camera2_autofocus_pane_cp_g

0xdc01,	// (0x0008a21d) popup_dialer_spcha_window

0xdc01,	// (0x0008a21d) bg_popup_sub_pane_cp07

0xdc01,	// (0x0008a21d) list_spcha_pane

0x1fc5,	// (0x0007e5e1) list_single_spcha_pane_ParamLimits

0x1fc5,	// (0x0007e5e1) list_single_spcha_pane

0xdc01,	// (0x0008a21d) list_highlight_pane_cp06

0xea78,	// (0x0008b094) list_single_spcha_pane_t1

0x11b0,	// (0x0007d7cc) popup_call2_audio_out_window_g4_ParamLimits

0x11b0,	// (0x0007d7cc) popup_call2_audio_out_window_g4

0x5ccb,	// (0x000822e7) main_imed2_pane

0x8904,	// (0x00084f20) popup_imed_adjust2_window

0x8917,	// (0x00084f33) popup_imed_trans_window_ParamLimits

0x8917,	// (0x00084f33) popup_imed_trans_window

0x19fd,	// (0x0007e019) popup_blid_sat_info2_window_t1

0x1a0b,	// (0x0007e027) popup_blid_sat_info2_window_t2

0x000a,

0xf610,	// (0x0008bc2c) popup_blid_sat_info2_window_t

0x9754,	// (0x00085d70) aid_size_cell_colour_35

0x976e,	// (0x00085d8a) aid_size_cell_colour_112

0x9785,	// (0x00085da1) aid_size_cell_effect

0xe29b,	// (0x0008a8b7) bg_tb_trans_pane_cp02

0xf045,	// (0x0008b661) heading_imed_pane

0x979f,	// (0x00085dbb) listscroll_imed_pane

0x1fd7,	// (0x0007e5f3) heading_imed_pane_g1

0x1fdf,	// (0x0007e5fb) heading_imed_pane_t1

0x1fed,	// (0x0007e609) grid_imed_colour_35_pane_ParamLimits

0x1fed,	// (0x0007e609) grid_imed_colour_35_pane

0x97ab,	// (0x00085dc7) grid_imed_effect_pane

0x2004,	// (0x0007e620) list_imed_aspect_pane

0x97bb,	// (0x00085dd7) scroll_pane_cp027_ParamLimits

0x97bb,	// (0x00085dd7) scroll_pane_cp027

0x97c7,	// (0x00085de3) cell_imed_effect_pane_ParamLimits

0x97c7,	// (0x00085de3) cell_imed_effect_pane

0x200c,	// (0x0007e628) cell_imed_colour_pane_ParamLimits

0x200c,	// (0x0007e628) cell_imed_colour_pane

0x204e,	// (0x0007e66a) cell_imed_colour_pane_g1_ParamLimits

0x204e,	// (0x0007e66a) cell_imed_colour_pane_g1

0x205f,	// (0x0007e67b) hgihlgiht_grid_pane_cp016_ParamLimits

0x205f,	// (0x0007e67b) hgihlgiht_grid_pane_cp016

0x97df,	// (0x00085dfb) cell_imed_effect_pane_g1

0x97e7,	// (0x00085e03) grid_highlight_pane_cp017

0x2070,	// (0x0007e68c) list_imed_single_pane_ParamLimits

0x2070,	// (0x0007e68c) list_imed_single_pane

0xdc01,	// (0x0008a21d) list_highlight_pane_cp07

0x2085,	// (0x0007e6a1) list_imed_aspect_pane_comp1_t1

0x0449,	// (0x0007ca65) bg_tb_trans_pane_cp05

0x20a7,	// (0x0007e6c3) popup_imed_adjust2_window_g1

0x20ce,	// (0x0007e6ea) popup_imed_adjust2_window_t1

0x20e6,	// (0x0007e702) slider_imed_adjust_pane

0x20fa,	// (0x0007e716) slider_imed_adjust_pane_g1

0x210a,	// (0x0007e726) slider_imed_adjust_pane_g2

0x211a,	// (0x0007e736) slider_imed_adjust_pane_g3

0x212b,	// (0x0007e747) slider_imed_adjust_pane_g4

0x0003,

0xf754,	// (0x0008bd70) slider_imed_adjust_pane_g

0x97f0,	// (0x00085e0c) aid_size_cell_clipart2

0x97fc,	// (0x00085e18) grid_imed_clipart_pane

0x213c,	// (0x0007e758) scroll_pane_cp031

0x9806,	// (0x00085e22) cell_imed_clipart_pane_ParamLimits

0x9806,	// (0x00085e22) cell_imed_clipart_pane

0x9828,	// (0x00085e44) cell_imed_clipart_pane_g1

0xdc01,	// (0x0008a21d) grid_highlight_pane_cp014

0x955b,	// (0x00085b77) main_clock2_pane_g1_ParamLimits

0x955b,	// (0x00085b77) main_clock2_pane_g1

0x9646,	// (0x00085c62) aid_call2_pane_cp10

0x9658,	// (0x00085c74) aid_call_pane_cp10

0xeda4,	// (0x0008b3c0) popup_clock_analogue_window_cp10_g1

0xeda4,	// (0x0008b3c0) popup_clock_analogue_window_cp10_g2

0x966a,	// (0x00085c86) popup_clock_analogue_window_cp10_g3

0x966a,	// (0x00085c86) popup_clock_analogue_window_cp10_g4

0xeda4,	// (0x0008b3c0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf742,	// (0x0008bd5e) popup_clock_analogue_window_cp10_g

0x9680,	// (0x00085c9c) popup_clock_analogue_window_cp10_t1

0x96b1,	// (0x00085ccd) clock_digital_number_pane_cp10_ParamLimits

0x96b1,	// (0x00085ccd) clock_digital_number_pane_cp10

0x96cb,	// (0x00085ce7) clock_digital_number_pane_cp11_ParamLimits

0x96cb,	// (0x00085ce7) clock_digital_number_pane_cp11

0x96e5,	// (0x00085d01) clock_digital_number_pane_cp12_ParamLimits

0x96e5,	// (0x00085d01) clock_digital_number_pane_cp12

0x96ff,	// (0x00085d1b) clock_digital_number_pane_cp13_ParamLimits

0x96ff,	// (0x00085d1b) clock_digital_number_pane_cp13

0x9719,	// (0x00085d35) clock_digital_separator_pane_cp10_ParamLimits

0x9719,	// (0x00085d35) clock_digital_separator_pane_cp10

0x9733,	// (0x00085d4f) popup_clock_digital_window_cp02_t1_ParamLimits

0x9733,	// (0x00085d4f) popup_clock_digital_window_cp02_t1

0xe271,	// (0x0008a88d) clock_digital_number_pane_cp10_g1

0xe271,	// (0x0008a88d) clock_digital_number_pane_cp10_g2

0x0001,

0xf75d,	// (0x0008bd79) clock_digital_number_pane_cp10_g

0xe271,	// (0x0008a88d) clock_digital_separator_pane_cp10_g1

0xe271,	// (0x0008a88d) clock_digital_separator_pane_g2_cp10

0xef2f,	// (0x0008b54b) navi_pane_vded_g4

0xef38,	// (0x0008b554) navi_pane_vded_g5

0xef41,	// (0x0008b55d) navi_pane_vded_t1

0x5ccb,	// (0x000822e7) main_vded_pane

0x9831,	// (0x00085e4d) main_vded_pane_g1

0x983d,	// (0x00085e59) main_vded_pane_g2

0x9847,	// (0x00085e63) main_vded_pane_g3

0x0002,

0xf762,	// (0x0008bd7e) main_vded_pane_g

0x9851,	// (0x00085e6d) main_vded_pane_t1

0x985f,	// (0x00085e7b) main_vded_pane_t2

0x0001,

0xf769,	// (0x0008bd85) main_vded_pane_t

0x986d,	// (0x00085e89) vded_slider_pane

0x9877,	// (0x00085e93) vded_video_pane

0x2144,	// (0x0007e760) vded_video_pane_g1

0x9881,	// (0x00085e9d) vded_video_pane_g2

0xe548,	// (0x0008ab64) vded_video_pane_g3

0x0002,

0xf76e,	// (0x0008bd8a) vded_video_pane_g

0x214e,	// (0x0007e76a) vded_slider_pane_g1

0x1928,	// (0x0007df44) vded_slider_pane_g2

0x2157,	// (0x0007e773) vded_slider_pane_g3

0x2160,	// (0x0007e77c) vded_slider_pane_g4

0x2169,	// (0x0007e785) vded_slider_pane_g5

0x0004,

0xf775,	// (0x0008bd91) vded_slider_pane_g

0x9435,	// (0x00085a51) mup3_rocker_pane_ParamLimits

0x9435,	// (0x00085a51) mup3_rocker_pane

0x988a,	// (0x00085ea6) mup3_control_keys_pane_g1

0x9892,	// (0x00085eae) mup3_control_keys_pane_g2

0x989a,	// (0x00085eb6) mup3_control_keys_pane_g3

0x98a2,	// (0x00085ebe) mup3_control_keys_pane_g4

0x0003,

0xf780,	// (0x0008bd9c) mup3_control_keys_pane_g

0x5c7f,	// (0x0008229b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5c7f,	// (0x0008229b) popup_toolbar2_fixed_window_cp01

0x944f,	// (0x00085a6b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x944f,	// (0x00085a6b) popup_toolbar2_fixed_window_cp02

0x0b39,	// (0x0007d155) popup_call2_audio_second_window_t4_ParamLimits

0x0b39,	// (0x0007d155) popup_call2_audio_second_window_t4

0x1075,	// (0x0007d691) popup_call2_audio_first_window_t6_ParamLimits

0x1075,	// (0x0007d691) popup_call2_audio_first_window_t6

0x12b3,	// (0x0007d8cf) popup_call2_audio_out_window_t6_ParamLimits

0x12b3,	// (0x0007d8cf) popup_call2_audio_out_window_t6

0x5ccb,	// (0x000822e7) main_vitu_pane

0xe2f4,	// (0x0008a910) aid_size_cell_itu_ParamLimits

0xe2f4,	// (0x0008a910) aid_size_cell_itu

0xe2f4,	// (0x0008a910) bg_popup_window_pane_cp08_ParamLimits

0xe2f4,	// (0x0008a910) bg_popup_window_pane_cp08

0xe2f4,	// (0x0008a910) field_vitu_entry_pane_ParamLimits

0xe2f4,	// (0x0008a910) field_vitu_entry_pane

0xe2f4,	// (0x0008a910) grid_vitu_function_pane_ParamLimits

0xe2f4,	// (0x0008a910) grid_vitu_function_pane

0xe2f4,	// (0x0008a910) grid_vitu_itu_pane_ParamLimits

0xe2f4,	// (0x0008a910) grid_vitu_itu_pane

0xe2f4,	// (0x0008a910) cell_vitu_itu_pane_ParamLimits

0xe2f4,	// (0x0008a910) cell_vitu_itu_pane

0xe2f4,	// (0x0008a910) cell_vitu_function_pane_ParamLimits

0xe2f4,	// (0x0008a910) cell_vitu_function_pane

0xe29b,	// (0x0008a8b7) bg_popup_sub_pane_cp08_ParamLimits

0xe29b,	// (0x0008a8b7) bg_popup_sub_pane_cp08

0xe562,	// (0x0008ab7e) field_vitu_entry_pane_t1_ParamLimits

0xe562,	// (0x0008ab7e) field_vitu_entry_pane_t1

0x2172,	// (0x0007e78e) field_vitu_entry_pane_t2_ParamLimits

0x2172,	// (0x0007e78e) field_vitu_entry_pane_t2

0x0001,

0xf789,	// (0x0008bda5) field_vitu_entry_pane_t_ParamLimits

0xf789,	// (0x0008bda5) field_vitu_entry_pane_t

0x184f,	// (0x0007de6b) bg_button_pane_cp05_ParamLimits

0x184f,	// (0x0007de6b) bg_button_pane_cp05

0x218f,	// (0x0007e7ab) cell_vitu_itu_pane_g1

0x0421,	// (0x0007ca3d) cell_vitu_itu_pane_t1_ParamLimits

0x0421,	// (0x0007ca3d) cell_vitu_itu_pane_t1

0x0421,	// (0x0007ca3d) cell_vitu_itu_pane_t2_ParamLimits

0x0421,	// (0x0007ca3d) cell_vitu_itu_pane_t2

0x0002,

0xf78e,	// (0x0008bdaa) cell_vitu_itu_pane_t_ParamLimits

0xf78e,	// (0x0008bdaa) cell_vitu_itu_pane_t

0xdc01,	// (0x0008a21d) bg_button_pane_cp07

0xe548,	// (0x0008ab64) cell_vitu_function_pane_g1

0x5e01,	// (0x0008241d) main_calc_pane_g1

0x5a3d,	// (0x00082059) aid_visual_content_pane

0x5ccb,	// (0x000822e7) main_vradio_pane

0xe310,	// (0x0008a92c) main_vradio_pane_g1_ParamLimits

0xe310,	// (0x0008a92c) main_vradio_pane_g1

0xe310,	// (0x0008a92c) main_vradio_pane_g2_ParamLimits

0xe310,	// (0x0008a92c) main_vradio_pane_g2

0x0001,

0xf0cc,	// (0x0008b6e8) main_vradio_pane_g_ParamLimits

0xf0cc,	// (0x0008b6e8) main_vradio_pane_g

0x0435,	// (0x0007ca51) main_vradio_pane_t1_ParamLimits

0x0435,	// (0x0007ca51) main_vradio_pane_t1

0x0435,	// (0x0007ca51) main_vradio_pane_t2_ParamLimits

0x0435,	// (0x0007ca51) main_vradio_pane_t2

0x0435,	// (0x0007ca51) main_vradio_pane_t3_ParamLimits

0x0435,	// (0x0007ca51) main_vradio_pane_t3

0x0002,

0xf795,	// (0x0008bdb1) main_vradio_pane_t_ParamLimits

0xf795,	// (0x0008bdb1) main_vradio_pane_t

0xe2f4,	// (0x0008a910) vradio_rocker_control_pane_ParamLimits

0xe2f4,	// (0x0008a910) vradio_rocker_control_pane

0xe2f4,	// (0x0008a910) vradio_station_info_pane_ParamLimits

0xe2f4,	// (0x0008a910) vradio_station_info_pane

0xe29b,	// (0x0008a8b7) vradio_frequency_info_pane_ParamLimits

0xe29b,	// (0x0008a8b7) vradio_frequency_info_pane

0xe548,	// (0x0008ab64) vradio_station_info_pane_g1

0x0421,	// (0x0007ca3d) vradio_station_info_pane_t1_ParamLimits

0x0421,	// (0x0007ca3d) vradio_station_info_pane_t1

0x0435,	// (0x0007ca51) vradio_station_info_pane_t2_ParamLimits

0x0435,	// (0x0007ca51) vradio_station_info_pane_t2

0x0001,

0xf79c,	// (0x0008bdb8) vradio_station_info_pane_t_ParamLimits

0xf79c,	// (0x0008bdb8) vradio_station_info_pane_t

0xdc01,	// (0x0008a21d) vradio_tuning_pane

0x98b2,	// (0x00085ece) vradio_rocker_control_pane_g1

0x21ab,	// (0x0007e7c7) vradio_rocker_control_pane_g2

0x98ba,	// (0x00085ed6) vradio_rocker_control_pane_g3

0x98c2,	// (0x00085ede) vradio_rocker_control_pane_g4

0x98ca,	// (0x00085ee6) vradio_rocker_control_pane_g5

0x0004,

0xf7a1,	// (0x0008bdbd) vradio_rocker_control_pane_g

0xe548,	// (0x0008ab64) vradio_frequency_info_pane_g1

0xe562,	// (0x0008ab7e) vradio_frequency_info_pane_t1_ParamLimits

0xe562,	// (0x0008ab7e) vradio_frequency_info_pane_t1

0x98d2,	// (0x00085eee) vradio_tuning_pane_g1

0x98df,	// (0x00085efb) vradio_tuning_pane_t1

0x5a86,	// (0x000820a2) area_side_right_pane_ParamLimits

0x5a86,	// (0x000820a2) area_side_right_pane

0x16a3,	// (0x0007dcbf) status_small_pane_g1

0x16ab,	// (0x0007dcc7) status_small_pane_g2

0x16b4,	// (0x0007dcd0) status_small_pane_g3

0x16bd,	// (0x0007dcd9) status_small_pane_g4

0x0003,

0xf572,	// (0x0008bb8e) status_small_pane_g

0x16c6,	// (0x0007dce2) status_small_pane_t1

0x5ccb,	// (0x000822e7) main_video3_pane

0x21b3,	// (0x0007e7cf) cams_zoom_vslider_pane

0x21bb,	// (0x0007e7d7) image3_wide_pane_ParamLimits

0x21bb,	// (0x0007e7d7) image3_wide_pane

0x21d5,	// (0x0007e7f1) image3_wide_small_pane

0x21e1,	// (0x0007e7fd) main_video3_pane_g1_ParamLimits

0x21e1,	// (0x0007e7fd) main_video3_pane_g1

0x21fd,	// (0x0007e819) main_video3_pane_g2_ParamLimits

0x21fd,	// (0x0007e819) main_video3_pane_g2

0x0001,

0xf7ac,	// (0x0008bdc8) main_video3_pane_g_ParamLimits

0xf7ac,	// (0x0008bdc8) main_video3_pane_g

0x2219,	// (0x0007e835) main_video3_pane_t1_ParamLimits

0x2219,	// (0x0007e835) main_video3_pane_t1

0x2244,	// (0x0007e860) main_video3_pane_t2_ParamLimits

0x2244,	// (0x0007e860) main_video3_pane_t2

0x226f,	// (0x0007e88b) main_video3_pane_t3_ParamLimits

0x226f,	// (0x0007e88b) main_video3_pane_t3

0x0002,

0xf7b1,	// (0x0008bdcd) main_video3_pane_t_ParamLimits

0xf7b1,	// (0x0008bdcd) main_video3_pane_t

0x229c,	// (0x0007e8b8) cams_zoom_vslider_pane_g1

0x22a5,	// (0x0007e8c1) cams_zoom_vslider_pane_g2

0x0001,

0xf7b8,	// (0x0008bdd4) cams_zoom_vslider_pane_g

0x22ad,	// (0x0007e8c9) small_slider_vertical_pane

0xe548,	// (0x0008ab64) small_slider_vertical_pane_g1

0xe548,	// (0x0008ab64) small_slider_vertical_pane_g2

0x22b5,	// (0x0007e8d1) small_slider_vertical_pane_g3

0x0002,

0xf7bd,	// (0x0008bdd9) small_slider_vertical_pane_g

0x5ccb,	// (0x000822e7) main_hwr_training_pane

0x22be,	// (0x0007e8da) hwr_training_instruct_pane_ParamLimits

0x22be,	// (0x0007e8da) hwr_training_instruct_pane

0x98ee,	// (0x00085f0a) hwr_training_navi_pane_ParamLimits

0x98ee,	// (0x00085f0a) hwr_training_navi_pane

0x9908,	// (0x00085f24) hwr_training_write_pane_ParamLimits

0x9908,	// (0x00085f24) hwr_training_write_pane

0xdc01,	// (0x0008a21d) bg_frame_shadow_pane

0x22f5,	// (0x0007e911) hwr_training_write_pane_g1

0x22fd,	// (0x0007e919) hwr_training_write_pane_g2

0x2305,	// (0x0007e921) hwr_training_write_pane_g3

0x230d,	// (0x0007e929) hwr_training_write_pane_g4

0x2315,	// (0x0007e931) hwr_training_write_pane_g5

0x231d,	// (0x0007e939) hwr_training_write_pane_g6

0x2325,	// (0x0007e941) hwr_training_write_pane_g7

0x0006,

0xf7c4,	// (0x0008bde0) hwr_training_write_pane_g

0x9940,	// (0x00085f5c) hwr_training_navi_pane_g1_ParamLimits

0x9940,	// (0x00085f5c) hwr_training_navi_pane_g1

0x9952,	// (0x00085f6e) hwr_training_navi_pane_g2_ParamLimits

0x9952,	// (0x00085f6e) hwr_training_navi_pane_g2

0x9964,	// (0x00085f80) hwr_training_navi_pane_g3_ParamLimits

0x9964,	// (0x00085f80) hwr_training_navi_pane_g3

0x9974,	// (0x00085f90) hwr_training_navi_pane_g4_ParamLimits

0x9974,	// (0x00085f90) hwr_training_navi_pane_g4

0x0004,

0xf7d3,	// (0x0008bdef) hwr_training_navi_pane_g_ParamLimits

0xf7d3,	// (0x0008bdef) hwr_training_navi_pane_g

0x998e,	// (0x00085faa) hwr_training_navi_pane_t1

0x999c,	// (0x00085fb8) list_single_hwr_training_instruct_pane_ParamLimits

0x999c,	// (0x00085fb8) list_single_hwr_training_instruct_pane

0x232d,	// (0x0007e949) list_single_hwr_training_instruct_pane_t1

0x1afe,	// (0x0007e11a) bg_frame_shadow_pane_g1

0x233c,	// (0x0007e958) bg_frame_shadow_pane_g2

0x2344,	// (0x0007e960) bg_frame_shadow_pane_g3

0x234c,	// (0x0007e968) bg_frame_shadow_pane_g4

0x2354,	// (0x0007e970) bg_frame_shadow_pane_g5

0x235c,	// (0x0007e978) bg_frame_shadow_pane_g6

0x2364,	// (0x0007e980) bg_frame_shadow_pane_g7

0xe423,	// (0x0008aa3f) bg_frame_shadow_pane_g8

0x0007,

0xf7de,	// (0x0008bdfa) bg_frame_shadow_pane_g

0x5ccb,	// (0x000822e7) main_video_tele_dialer_pane

0x99c1,	// (0x00085fdd) aid_size_cell_video_keypad_ParamLimits

0x99c1,	// (0x00085fdd) aid_size_cell_video_keypad

0x99d1,	// (0x00085fed) grid_video_dialer_keypad_pane_ParamLimits

0x99d1,	// (0x00085fed) grid_video_dialer_keypad_pane

0x9a05,	// (0x00086021) video_down_pane_cp_ParamLimits

0x9a05,	// (0x00086021) video_down_pane_cp

0x9a2f,	// (0x0008604b) cell_video_dialer_keypad_pane_ParamLimits

0x9a2f,	// (0x0008604b) cell_video_dialer_keypad_pane

0x236c,	// (0x0007e988) bg_button_pane_cp08_ParamLimits

0x236c,	// (0x0007e988) bg_button_pane_cp08

0x9a44,	// (0x00086060) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9a44,	// (0x00086060) cell_video_dialer_keypad_pane_g1

0x9429,	// (0x00085a45) mup3_rocker2_pane_ParamLimits

0x9429,	// (0x00085a45) mup3_rocker2_pane

0xe548,	// (0x0008ab64) mup3_rocker2_pane_g1

0x8874,	// (0x00084e90) main_dialer2_pane

0x5ccb,	// (0x000822e7) main_mp4_pane

0x9a99,	// (0x000860b5) main_mp4_pane_g1_ParamLimits

0x9a99,	// (0x000860b5) main_mp4_pane_g1

0x9aa7,	// (0x000860c3) main_mp4_pane_g2_ParamLimits

0x9aa7,	// (0x000860c3) main_mp4_pane_g2

0x9ab5,	// (0x000860d1) main_mp4_pane_g3_ParamLimits

0x9ab5,	// (0x000860d1) main_mp4_pane_g3

0x9afa,	// (0x00086116) main_mp4_pane_g4_ParamLimits

0x9afa,	// (0x00086116) main_mp4_pane_g4

0x9b28,	// (0x00086144) main_mp4_pane_g5_ParamLimits

0x9b28,	// (0x00086144) main_mp4_pane_g5

0x0007,

0xf7fe,	// (0x0008be1a) main_mp4_pane_g_ParamLimits

0xf7fe,	// (0x0008be1a) main_mp4_pane_g

0x9b9c,	// (0x000861b8) main_mp4_pane_t1_ParamLimits

0x9b9c,	// (0x000861b8) main_mp4_pane_t1

0x9bf8,	// (0x00086214) main_mp4_pane_t2_ParamLimits

0x9bf8,	// (0x00086214) main_mp4_pane_t2

0x2378,	// (0x0007e994) main_mp4_pane_t3_ParamLimits

0x2378,	// (0x0007e994) main_mp4_pane_t3

0x9c4a,	// (0x00086266) main_mp4_pane_t4_ParamLimits

0x9c4a,	// (0x00086266) main_mp4_pane_t4

0x0003,

0xf80f,	// (0x0008be2b) main_mp4_pane_t_ParamLimits

0xf80f,	// (0x0008be2b) main_mp4_pane_t

0x9c8e,	// (0x000862aa) mp4_progress_pane_ParamLimits

0x9c8e,	// (0x000862aa) mp4_progress_pane

0x9cd8,	// (0x000862f4) mp4_rocker_pane_ParamLimits

0x9cd8,	// (0x000862f4) mp4_rocker_pane

0x23a6,	// (0x0007e9c2) mp4_progress_pane_t1

0x23bf,	// (0x0007e9db) mp4_progress_pane_t2

0x0001,

0xf818,	// (0x0008be34) mp4_progress_pane_t

0x23d8,	// (0x0007e9f4) mup_progress_pane_cp04

0x29e0,	// (0x0007effc) mp4_rocker_pane_g1

0x9cf8,	// (0x00086314) aid_cell_size_keypad2_ParamLimits

0x9cf8,	// (0x00086314) aid_cell_size_keypad2

0x9d08,	// (0x00086324) dialer2_ne_pane_ParamLimits

0x9d08,	// (0x00086324) dialer2_ne_pane

0x9d16,	// (0x00086332) grid_dialer2_keypad_pane_ParamLimits

0x9d16,	// (0x00086332) grid_dialer2_keypad_pane

0x48aa,	// (0x00080ec6) bg_popup_call_pane_cp07_ParamLimits

0x48aa,	// (0x00080ec6) bg_popup_call_pane_cp07

0x9d26,	// (0x00086342) dialer2_ne_pane_t1_ParamLimits

0x9d26,	// (0x00086342) dialer2_ne_pane_t1

0x9d4b,	// (0x00086367) cell_dialer2_keypad_pane_ParamLimits

0x9d4b,	// (0x00086367) cell_dialer2_keypad_pane

0x23fd,	// (0x0007ea19) bg_button_pane_pane_cp04_ParamLimits

0x23fd,	// (0x0007ea19) bg_button_pane_pane_cp04

0x9d60,	// (0x0008637c) cell_dialer2_keypad_pane_g1_ParamLimits

0x9d60,	// (0x0008637c) cell_dialer2_keypad_pane_g1

0x67df,	// (0x00082dfb) aid_placing_vt_set_content_ParamLimits

0x67df,	// (0x00082dfb) aid_placing_vt_set_content

0x680b,	// (0x00082e27) aid_placing_vt_set_title_ParamLimits

0x680b,	// (0x00082e27) aid_placing_vt_set_title

0x5ccb,	// (0x000822e7) main_image3_pane

0x9dfa,	// (0x00086416) area_side_right_pane_cp01_ParamLimits

0x9dfa,	// (0x00086416) area_side_right_pane_cp01

0x9e27,	// (0x00086443) main_image3_pane_g1_ParamLimits

0x9e27,	// (0x00086443) main_image3_pane_g1

0x9e35,	// (0x00086451) main_image3_pane_g2_ParamLimits

0x9e35,	// (0x00086451) main_image3_pane_g2

0x9e4e,	// (0x0008646a) main_image3_pane_g3_ParamLimits

0x9e4e,	// (0x0008646a) main_image3_pane_g3

0x9e67,	// (0x00086483) main_image3_pane_g4_ParamLimits

0x9e67,	// (0x00086483) main_image3_pane_g4

0x0003,

0xf827,	// (0x0008be43) main_image3_pane_g_ParamLimits

0xf827,	// (0x0008be43) main_image3_pane_g

0x9e80,	// (0x0008649c) main_image3_pane_t1_ParamLimits

0x9e80,	// (0x0008649c) main_image3_pane_t1

0x9ea5,	// (0x000864c1) main_image3_pane_t2_ParamLimits

0x9ea5,	// (0x000864c1) main_image3_pane_t2

0x9ec4,	// (0x000864e0) main_image3_pane_t3_ParamLimits

0x9ec4,	// (0x000864e0) main_image3_pane_t3

0x0003,

0xf830,	// (0x0008be4c) main_image3_pane_t_ParamLimits

0xf830,	// (0x0008be4c) main_image3_pane_t

0xe2f4,	// (0x0008a910) grid_sctrl_middle_pane_cp01_ParamLimits

0xe2f4,	// (0x0008a910) grid_sctrl_middle_pane_cp01

0x9f25,	// (0x00086541) cell_sctrl_middle_pane_cp01_ParamLimits

0x9f25,	// (0x00086541) cell_sctrl_middle_pane_cp01

0x9f36,	// (0x00086552) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9f36,	// (0x00086552) cell_sctrl_middle_pane_cp01_g1

0x5ccb,	// (0x000822e7) main_call4_pane

0x9f43,	// (0x0008655f) aid_size_button_call4_ParamLimits

0x9f43,	// (0x0008655f) aid_size_button_call4

0x9f79,	// (0x00086595) call4_windows_pane_ParamLimits

0x9f79,	// (0x00086595) call4_windows_pane

0x9f8e,	// (0x000865aa) grid_call4_button_pane_ParamLimits

0x9f8e,	// (0x000865aa) grid_call4_button_pane

0x9fbc,	// (0x000865d8) call4_windows_conf_pane

0x9fd3,	// (0x000865ef) popup_call4_audio_first_window_ParamLimits

0x9fd3,	// (0x000865ef) popup_call4_audio_first_window

0xa023,	// (0x0008663f) popup_call4_audio_second_window_ParamLimits

0xa023,	// (0x0008663f) popup_call4_audio_second_window

0xa03c,	// (0x00086658) popup_call4_audio_wait_window_ParamLimits

0xa03c,	// (0x00086658) popup_call4_audio_wait_window

0xa04a,	// (0x00086666) cell_call4_button_pane_ParamLimits

0xa04a,	// (0x00086666) cell_call4_button_pane

0xa06d,	// (0x00086689) bg_button_pane_cp09_ParamLimits

0xa06d,	// (0x00086689) bg_button_pane_cp09

0xa079,	// (0x00086695) cell_call4_button_pane_g1_ParamLimits

0xa079,	// (0x00086695) cell_call4_button_pane_g1

0xa086,	// (0x000866a2) cell_call4_button_pane_t1_ParamLimits

0xa086,	// (0x000866a2) cell_call4_button_pane_t1

0x2411,	// (0x0007ea2d) popup_call4_audio_conf_window_ParamLimits

0x2411,	// (0x0007ea2d) popup_call4_audio_conf_window

0x945c,	// (0x00085a78) mup3_progress_pane_t1_ParamLimits

0x947b,	// (0x00085a97) mup3_progress_pane_t2_ParamLimits

0x1e82,	// (0x0007e49e) mup3_progress_pane_t3_ParamLimits

0xf70a,	// (0x0008bd26) mup3_progress_pane_t_ParamLimits

0x1e9f,	// (0x0007e4bb) mup_progress_pane_cp03_ParamLimits

0x98aa,	// (0x00085ec6) mup3_control_keys_pane_g4_copy1

0x9cbc,	// (0x000862d8) mp4_rocker2_pane_ParamLimits

0x9cbc,	// (0x000862d8) mp4_rocker2_pane

0x242d,	// (0x0007ea49) mp4_rocker2_pane_g1

0x2425,	// (0x0007ea41) mp4_rocker2_pane_g2

0xa0ca,	// (0x000866e6) mp4_rocker2_pane_g3

0xa0d2,	// (0x000866ee) mp4_rocker2_pane_g4

0xa0da,	// (0x000866f6) mp4_rocker2_pane_g5

0x0004,

0xf839,	// (0x0008be55) mp4_rocker2_pane_g

0x5ccb,	// (0x000822e7) main_camera4_pane

0x5ccb,	// (0x000822e7) main_video4_pane

0x99e1,	// (0x00085ffd) main_video_tele_dialer_pane_t1_ParamLimits

0x99e1,	// (0x00085ffd) main_video_tele_dialer_pane_t1

0x99f3,	// (0x0008600f) main_video_tele_dialer_pane_t2_ParamLimits

0x99f3,	// (0x0008600f) main_video_tele_dialer_pane_t2

0x0001,

0xf7ef,	// (0x0008be0b) main_video_tele_dialer_pane_t_ParamLimits

0xf7ef,	// (0x0008be0b) main_video_tele_dialer_pane_t

0xa0fa,	// (0x00086716) cam4_autofocus_pane_ParamLimits

0xa0fa,	// (0x00086716) cam4_autofocus_pane

0xa114,	// (0x00086730) cam4_image_uncrop_pane_ParamLimits

0xa114,	// (0x00086730) cam4_image_uncrop_pane

0xa12b,	// (0x00086747) cam4_indicators_pane_ParamLimits

0xa12b,	// (0x00086747) cam4_indicators_pane

0xa147,	// (0x00086763) main_camera4_pane_g1_ParamLimits

0xa147,	// (0x00086763) main_camera4_pane_g1

0xa153,	// (0x0008676f) main_camera4_pane_g2_ParamLimits

0xa153,	// (0x0008676f) main_camera4_pane_g2

0xa153,	// (0x0008676f) main_camera4_pane_g3_ParamLimits

0xa153,	// (0x0008676f) main_camera4_pane_g3

0xa15f,	// (0x0008677b) main_camera4_pane_g4_ParamLimits

0xa15f,	// (0x0008677b) main_camera4_pane_g4

0xa16b,	// (0x00086787) main_camera4_pane_g5_ParamLimits

0xa16b,	// (0x00086787) main_camera4_pane_g5

0x0005,

0xf844,	// (0x0008be60) main_camera4_pane_g_ParamLimits

0xf844,	// (0x0008be60) main_camera4_pane_g

0xa185,	// (0x000867a1) main_camera4_pane_t1_ParamLimits

0xa185,	// (0x000867a1) main_camera4_pane_t1

0x3511,	// (0x0007fb2d) bg_tb_trans_pane_cp06

0xa1d5,	// (0x000867f1) cam4_indicators_pane_g1

0xa1e6,	// (0x00086802) cam4_indicators_pane_g2

0x0002,

0xf85f,	// (0x0008be7b) cam4_indicators_pane_g

0xa204,	// (0x00086820) cam4_indicators_pane_t1

0xa22e,	// (0x0008684a) main_video4_pane_g1_ParamLimits

0xa22e,	// (0x0008684a) main_video4_pane_g1

0xa23a,	// (0x00086856) main_video4_pane_g2_ParamLimits

0xa23a,	// (0x00086856) main_video4_pane_g2

0xa246,	// (0x00086862) main_video4_pane_g3_ParamLimits

0xa246,	// (0x00086862) main_video4_pane_g3

0xa252,	// (0x0008686e) main_video4_pane_g4_ParamLimits

0xa252,	// (0x0008686e) main_video4_pane_g4

0x0004,

0xf866,	// (0x0008be82) main_video4_pane_g_ParamLimits

0xf866,	// (0x0008be82) main_video4_pane_g

0xa272,	// (0x0008688e) vid4_indicators_pane_ParamLimits

0xa272,	// (0x0008688e) vid4_indicators_pane

0xa291,	// (0x000868ad) video4_image_uncrop_cif_pane_ParamLimits

0xa291,	// (0x000868ad) video4_image_uncrop_cif_pane

0xa2a0,	// (0x000868bc) video4_image_uncrop_nhd_pane_ParamLimits

0xa2a0,	// (0x000868bc) video4_image_uncrop_nhd_pane

0xa114,	// (0x00086730) video4_image_uncrop_vga_pane_ParamLimits

0xa114,	// (0x00086730) video4_image_uncrop_vga_pane

0x8866,	// (0x00084e82) bg_tb_trans_pane_cp07

0xa2b7,	// (0x000868d3) vid4_indicators_pane_g1

0xa2cb,	// (0x000868e7) vid4_indicators_pane_g2

0xa2df,	// (0x000868fb) vid4_indicators_pane_g3

0x0004,

0xf871,	// (0x0008be8d) vid4_indicators_pane_g

0xa30e,	// (0x0008692a) vid4_indicators_pane_t1

0xa325,	// (0x00086941) cam4_autofocus_pane_g1

0xa32d,	// (0x00086949) cam4_autofocus_pane_g2

0xa335,	// (0x00086951) cam4_autofocus_pane_g3

0x0002,

0xf87c,	// (0x0008be98) cam4_autofocus_pane_g

0xa33d,	// (0x00086959) cam4_autofocus_pane_g3_copy1

0x9a13,	// (0x0008602f) video_down_pane_cp_t1

0x9a21,	// (0x0008603d) video_down_pane_cp_t2

0x0001,

0xf7f4,	// (0x0008be10) video_down_pane_cp_t

0x5cb1,	// (0x000822cd) popup_vitu2_window_ParamLimits

0x5cb1,	// (0x000822cd) popup_vitu2_window

0xa345,	// (0x00086961) aid_size_cell2_itu2_ParamLimits

0xa345,	// (0x00086961) aid_size_cell2_itu2

0xa367,	// (0x00086983) aid_size_cell_itu2_ParamLimits

0xa367,	// (0x00086983) aid_size_cell_itu2

0xa3ab,	// (0x000869c7) bg_popup_window_pane_cp09_ParamLimits

0xa3ab,	// (0x000869c7) bg_popup_window_pane_cp09

0xa3b9,	// (0x000869d5) field_vitu2_entry_pane_ParamLimits

0xa3b9,	// (0x000869d5) field_vitu2_entry_pane

0xa3d9,	// (0x000869f5) grid_vitu2_function_pane_ParamLimits

0xa3d9,	// (0x000869f5) grid_vitu2_function_pane

0xa41d,	// (0x00086a39) grid_vitu2_itu_pane_ParamLimits

0xa41d,	// (0x00086a39) grid_vitu2_itu_pane

0xa495,	// (0x00086ab1) cell_vitu2_itu_pane_ParamLimits

0xa495,	// (0x00086ab1) cell_vitu2_itu_pane

0xa4ae,	// (0x00086aca) cell_vitu2_function_pane_ParamLimits

0xa4ae,	// (0x00086aca) cell_vitu2_function_pane

0x2447,	// (0x0007ea63) bg_popup_call_pane_cp08_ParamLimits

0x2447,	// (0x0007ea63) bg_popup_call_pane_cp08

0x245e,	// (0x0007ea7a) field_vitu2_entry_pane_g1

0x246a,	// (0x0007ea86) field_vitu2_entry_pane_g2

0x0002,

0xf883,	// (0x0008be9f) field_vitu2_entry_pane_g

0xa4ef,	// (0x00086b0b) field_vitu2_entry_pane_t1_ParamLimits

0xa4ef,	// (0x00086b0b) field_vitu2_entry_pane_t1

0x2476,	// (0x0007ea92) field_vitu2_entry_pane_t2_ParamLimits

0x2476,	// (0x0007ea92) field_vitu2_entry_pane_t2

0x0001,

0xf88a,	// (0x0008bea6) field_vitu2_entry_pane_t_ParamLimits

0xf88a,	// (0x0008bea6) field_vitu2_entry_pane_t

0x8ba2,	// (0x000851be) bg_button_pane_cp010_ParamLimits

0x8ba2,	// (0x000851be) bg_button_pane_cp010

0xa521,	// (0x00086b3d) cell_vitu2_itu_pane_g1

0xa547,	// (0x00086b63) cell_vitu2_itu_pane_t1_ParamLimits

0xa547,	// (0x00086b63) cell_vitu2_itu_pane_t1

0x5921,	// (0x00081f3d) cell_vitu2_itu_pane_t2_ParamLimits

0x5921,	// (0x00081f3d) cell_vitu2_itu_pane_t2

0x0002,

0xf894,	// (0x0008beb0) cell_vitu2_itu_pane_t_ParamLimits

0xf894,	// (0x0008beb0) cell_vitu2_itu_pane_t

0x8866,	// (0x00084e82) bg_button_pane_cp011

0xa593,	// (0x00086baf) cell_vitu2_function_pane_g1

0x5ccb,	// (0x000822e7) main_myfav_hc_pane

0x9f06,	// (0x00086522) popup_image3_note_pane_ParamLimits

0x9f06,	// (0x00086522) popup_image3_note_pane

0x9f14,	// (0x00086530) popup_image3_tool_bar_pane_ParamLimits

0x9f14,	// (0x00086530) popup_image3_tool_bar_pane

0x5997,	// (0x00081fb3) cell_vitu2_itu_pane_t3_ParamLimits

0x5997,	// (0x00081fb3) cell_vitu2_itu_pane_t3

0xdc01,	// (0x0008a21d) bg_popup_trans_pane

0x249b,	// (0x0007eab7) grid_image3_tool_bar_pane

0x24a5,	// (0x0007eac1) bg_popup_trans_pane_g1

0xe76d,	// (0x0008ad89) bg_popup_trans_pane_g2

0x24ad,	// (0x0007eac9) bg_popup_trans_pane_g3

0x24b5,	// (0x0007ead1) bg_popup_trans_pane_g4

0x24bd,	// (0x0007ead9) bg_popup_trans_pane_g5

0x24c5,	// (0x0007eae1) bg_popup_trans_pane_g6

0x24cd,	// (0x0007eae9) bg_popup_trans_pane_g7

0x24d5,	// (0x0007eaf1) bg_popup_trans_pane_g8

0xe74d,	// (0x0008ad69) bg_popup_trans_pane_g9

0x0008,

0xf89b,	// (0x0008beb7) bg_popup_trans_pane_g

0x24dd,	// (0x0007eaf9) cell_image3_tool_bar_pane_ParamLimits

0x24dd,	// (0x0007eaf9) cell_image3_tool_bar_pane

0xe548,	// (0x0008ab64) cell_image3_tool_bar_pane_g1

0xdc01,	// (0x0008a21d) bg_popup_trans_pane_cp1

0x24f1,	// (0x0007eb0d) popup_image3_note_pane_t1

0x24ff,	// (0x0007eb1b) popup_image3_note_pane_t2

0x250d,	// (0x0007eb29) popup_image3_note_pane_t3

0x0002,

0xf8ae,	// (0x0008beca) popup_image3_note_pane_t

0x251b,	// (0x0007eb37) popup_image3_note_pane_t3_copy1

0xa5a7,	// (0x00086bc3) bg_myfav_hc_instruction_pane_ParamLimits

0xa5a7,	// (0x00086bc3) bg_myfav_hc_instruction_pane

0xa5bf,	// (0x00086bdb) cell_myfav_contact_pane_ParamLimits

0xa5bf,	// (0x00086bdb) cell_myfav_contact_pane

0xa5d9,	// (0x00086bf5) cell_myfav_contact_pane_cp1_ParamLimits

0xa5d9,	// (0x00086bf5) cell_myfav_contact_pane_cp1

0xa5f1,	// (0x00086c0d) cell_myfav_contact_pane_cp2_ParamLimits

0xa5f1,	// (0x00086c0d) cell_myfav_contact_pane_cp2

0xa609,	// (0x00086c25) cell_myfav_contact_pane_cp3_ParamLimits

0xa609,	// (0x00086c25) cell_myfav_contact_pane_cp3

0xa620,	// (0x00086c3c) cell_myfav_contact_pane_cp4_ParamLimits

0xa620,	// (0x00086c3c) cell_myfav_contact_pane_cp4

0xa636,	// (0x00086c52) cell_myfav_contact_pane_cp5_ParamLimits

0xa636,	// (0x00086c52) cell_myfav_contact_pane_cp5

0xa64a,	// (0x00086c66) cell_myfav_contact_pane_cp6_ParamLimits

0xa64a,	// (0x00086c66) cell_myfav_contact_pane_cp6

0xa65e,	// (0x00086c7a) cell_myfav_contact_pane_cp7_ParamLimits

0xa65e,	// (0x00086c7a) cell_myfav_contact_pane_cp7

0x2529,	// (0x0007eb45) listscroll_gen_pane_cp05

0xa676,	// (0x00086c92) main_myfav_hc_pane_g1_ParamLimits

0xa676,	// (0x00086c92) main_myfav_hc_pane_g1

0xa68c,	// (0x00086ca8) main_myfav_hc_pane_g2_ParamLimits

0xa68c,	// (0x00086ca8) main_myfav_hc_pane_g2

0x0002,

0xf8b5,	// (0x0008bed1) main_myfav_hc_pane_g_ParamLimits

0xf8b5,	// (0x0008bed1) main_myfav_hc_pane_g

0xa6ba,	// (0x00086cd6) main_myfav_hc_pane_t1_ParamLimits

0xa6ba,	// (0x00086cd6) main_myfav_hc_pane_t1

0x2532,	// (0x0007eb4e) main_myfav_hc_pane_t2_ParamLimits

0x2532,	// (0x0007eb4e) main_myfav_hc_pane_t2

0x2544,	// (0x0007eb60) main_myfav_hc_pane_t3_ParamLimits

0x2544,	// (0x0007eb60) main_myfav_hc_pane_t3

0xa6d1,	// (0x00086ced) main_myfav_hc_pane_t4_ParamLimits

0xa6d1,	// (0x00086ced) main_myfav_hc_pane_t4

0x0004,

0xf8bc,	// (0x0008bed8) main_myfav_hc_pane_t_ParamLimits

0xf8bc,	// (0x0008bed8) main_myfav_hc_pane_t

0xe548,	// (0x0008ab64) bg_myfav_hc_instruction_pane_g1

0x2556,	// (0x0007eb72) cell_myfav_contact_pane_g1_ParamLimits

0x2556,	// (0x0007eb72) cell_myfav_contact_pane_g1

0x2556,	// (0x0007eb72) cell_myfav_contact_pane_g2_ParamLimits

0x2556,	// (0x0007eb72) cell_myfav_contact_pane_g2

0x2562,	// (0x0007eb7e) cell_myfav_contact_pane_g3_ParamLimits

0x2562,	// (0x0007eb7e) cell_myfav_contact_pane_g3

0xe310,	// (0x0008a92c) cell_myfav_contact_pane_g4_ParamLimits

0xe310,	// (0x0008a92c) cell_myfav_contact_pane_g4

0x256f,	// (0x0007eb8b) cell_myfav_contact_pane_g5_ParamLimits

0x256f,	// (0x0007eb8b) cell_myfav_contact_pane_g5

0x0004,

0xf8c7,	// (0x0008bee3) cell_myfav_contact_pane_g_ParamLimits

0xf8c7,	// (0x0008bee3) cell_myfav_contact_pane_g

0xa6a2,	// (0x00086cbe) main_myfav_hc_pane_g3_ParamLimits

0xa6a2,	// (0x00086cbe) main_myfav_hc_pane_g3

0x5bba,	// (0x000821d6) popup_adpt_find_window

0xa6fb,	// (0x00086d17) afind_page_pane_ParamLimits

0xa6fb,	// (0x00086d17) afind_page_pane

0xa708,	// (0x00086d24) aid_size_cell_afind_ParamLimits

0xa708,	// (0x00086d24) aid_size_cell_afind

0xa722,	// (0x00086d3e) bg_popup_sub_pane_cp09_ParamLimits

0xa722,	// (0x00086d3e) bg_popup_sub_pane_cp09

0xa72f,	// (0x00086d4b) find_pane_cp01_ParamLimits

0xa72f,	// (0x00086d4b) find_pane_cp01

0x257b,	// (0x0007eb97) grid_afind_control_pane_ParamLimits

0x257b,	// (0x0007eb97) grid_afind_control_pane

0xa73c,	// (0x00086d58) grid_afind_pane_ParamLimits

0xa73c,	// (0x00086d58) grid_afind_pane

0xa758,	// (0x00086d74) cell_afind_pane_ParamLimits

0xa758,	// (0x00086d74) cell_afind_pane

0xe548,	// (0x0008ab64) afind_page_pane_g1

0xa7a0,	// (0x00086dbc) afind_page_pane_g2

0xa7a9,	// (0x00086dc5) afind_page_pane_g3

0x0002,

0xf8d2,	// (0x0008beee) afind_page_pane_g

0xa7b2,	// (0x00086dce) afind_page_pane_t1

0x258f,	// (0x0007ebab) cell_afind_grid_control_pane_ParamLimits

0x258f,	// (0x0007ebab) cell_afind_grid_control_pane

0x23fd,	// (0x0007ea19) bg_button_pane_cp69_ParamLimits

0x23fd,	// (0x0007ea19) bg_button_pane_cp69

0xa7d2,	// (0x00086dee) cell_afind_pane_g1_ParamLimits

0xa7d2,	// (0x00086dee) cell_afind_pane_g1

0xa7df,	// (0x00086dfb) cell_afind_pane_t1_ParamLimits

0xa7df,	// (0x00086dfb) cell_afind_pane_t1

0xe552,	// (0x0008ab6e) bg_button_pane_cp72

0x259e,	// (0x0007ebba) cell_afind_grid_control_pane_g1

0x839d,	// (0x000849b9) aid_image_placing_area_ParamLimits

0x839d,	// (0x000849b9) aid_image_placing_area

0xe302,	// (0x0008a91e) field_vitu_entry_pane_g1_ParamLimits

0xe302,	// (0x0008a91e) field_vitu_entry_pane_g1

0xe302,	// (0x0008a91e) field_vitu_entry_pane_g2_ParamLimits

0xe302,	// (0x0008a91e) field_vitu_entry_pane_g2

0x0001,

0xf1db,	// (0x0008b7f7) field_vitu_entry_pane_g_ParamLimits

0xf1db,	// (0x0008b7f7) field_vitu_entry_pane_g

0x218f,	// (0x0007e7ab) cell_vitu_itu_pane_g1_ParamLimits

0x2172,	// (0x0007e78e) cell_vitu_itu_pane_t3_ParamLimits

0x2172,	// (0x0007e78e) cell_vitu_itu_pane_t3

0x23a6,	// (0x0007e9c2) mp4_progress_pane_t1_ParamLimits

0x23bf,	// (0x0007e9db) mp4_progress_pane_t2_ParamLimits

0xf818,	// (0x0008be34) mp4_progress_pane_t_ParamLimits

0x23d8,	// (0x0007e9f4) mup_progress_pane_cp04_ParamLimits

0xa6e5,	// (0x00086d01) main_myfav_hc_pane_t5_ParamLimits

0xa6e5,	// (0x00086d01) main_myfav_hc_pane_t5

0x5919,	// (0x00081f35) aid_zoom_text_primary

0x5bba,	// (0x000821d6) popup_adpt_find_window_ParamLimits

0x8866,	// (0x00084e82) main_cam_set_pane

0xa139,	// (0x00086755) cam4_zoom_pane_ParamLimits

0xa139,	// (0x00086755) cam4_zoom_pane

0xa7f1,	// (0x00086e0d) main_cam_set_pane_g1_ParamLimits

0xa7f1,	// (0x00086e0d) main_cam_set_pane_g1

0xa7ff,	// (0x00086e1b) main_cam_set_pane_g2_ParamLimits

0xa7ff,	// (0x00086e1b) main_cam_set_pane_g2

0x0001,

0xf8d9,	// (0x0008bef5) main_cam_set_pane_g_ParamLimits

0xf8d9,	// (0x0008bef5) main_cam_set_pane_g

0xa80b,	// (0x00086e27) main_cam_set_pane_t1_ParamLimits

0xa80b,	// (0x00086e27) main_cam_set_pane_t1

0xa827,	// (0x00086e43) main_cset_listscroll_pane_ParamLimits

0xa827,	// (0x00086e43) main_cset_listscroll_pane

0xa859,	// (0x00086e75) main_cset_slider_pane_ParamLimits

0xa859,	// (0x00086e75) main_cset_slider_pane

0x25af,	// (0x0007ebcb) main_cset_list_pane_ParamLimits

0x25af,	// (0x0007ebcb) main_cset_list_pane

0x25bf,	// (0x0007ebdb) scroll_pane_cp028

0xa878,	// (0x00086e94) aid_area_touch_slider

0xa894,	// (0x00086eb0) cset_slider_pane

0xa8b7,	// (0x00086ed3) main_cset_slider_pane_g1

0xa8cc,	// (0x00086ee8) main_cset_slider_pane_g2

0x0011,

0xf8de,	// (0x0008befa) main_cset_slider_pane_g

0x25f8,	// (0x0007ec14) main_cset_slider_pane_t1

0xa98e,	// (0x00086faa) main_cset_slider_pane_t2

0xa9a8,	// (0x00086fc4) main_cset_slider_pane_t3

0xa9c2,	// (0x00086fde) main_cset_slider_pane_t4

0xa9dc,	// (0x00086ff8) main_cset_slider_pane_t5

0xa9fa,	// (0x00087016) main_cset_slider_pane_t6

0xaa11,	// (0x0008702d) main_cset_slider_pane_t7

0x000e,

0xf903,	// (0x0008bf1f) main_cset_slider_pane_t

0xab1d,	// (0x00087139) cset_list_set_pane_ParamLimits

0xab1d,	// (0x00087139) cset_list_set_pane

0x2692,	// (0x0007ecae) aid_position_infowindow_above

0x269a,	// (0x0007ecb6) aid_position_infowindow_below

0x475b,	// (0x00080d77) cset_list_set_pane_g1_ParamLimits

0x475b,	// (0x00080d77) cset_list_set_pane_g1

0x26a2,	// (0x0007ecbe) cset_list_set_pane_g3_ParamLimits

0x26a2,	// (0x0007ecbe) cset_list_set_pane_g3

0x0001,

0xf922,	// (0x0008bf3e) cset_list_set_pane_g_ParamLimits

0xf922,	// (0x0008bf3e) cset_list_set_pane_g

0x26b1,	// (0x0007eccd) cset_list_set_pane_t1_ParamLimits

0x26b1,	// (0x0007eccd) cset_list_set_pane_t1

0xe29b,	// (0x0008a8b7) list_highlight_pane_cp021_ParamLimits

0xe29b,	// (0x0008a8b7) list_highlight_pane_cp021

0x04b9,	// (0x0007cad5) cset_slider_pane_g1

0x04cb,	// (0x0007cae7) cset_slider_pane_g2

0x04c2,	// (0x0007cade) cset_slider_pane_g3

0x0002,

0xf927,	// (0x0008bf43) cset_slider_pane_g

0xab33,	// (0x0008714f) aid_area_touch_cam4_zoom

0xab3b,	// (0x00087157) cam4_zoom_cont_pane

0xab43,	// (0x0008715f) cam4_zoom_pane_g1

0xab4b,	// (0x00087167) cam4_zoom_pane_g2

0xab53,	// (0x0008716f) cam4_zoom_pane_g3

0x0002,

0xf92e,	// (0x0008bf4a) cam4_zoom_pane_g

0xab5b,	// (0x00087177) cam4_zoom_cont_pane_g1

0xab64,	// (0x00087180) cam4_zoom_cont_pane_g2

0xab6d,	// (0x00087189) cam4_zoom_cont_pane_g3

0x0002,

0xf935,	// (0x0008bf51) cam4_zoom_cont_pane_g

0x9f5d,	// (0x00086579) call4_image_pane_ParamLimits

0x9f5d,	// (0x00086579) call4_image_pane

0x9fbc,	// (0x000865d8) call4_windows_conf_pane_ParamLimits

0xa001,	// (0x0008661d) popup_call4_audio_in_window_ParamLimits

0xa001,	// (0x0008661d) popup_call4_audio_in_window

0xdc01,	// (0x0008a21d) bg_popup_call2_act_pane_cp02

0x2409,	// (0x0007ea25) call4_list_conf_pane

0xe548,	// (0x0008ab64) call4_image_pane_g1

0xe548,	// (0x0008ab64) call4_image_pane_g2

0x0001,

0xf3be,	// (0x0008b9da) call4_image_pane_g

0x26c6,	// (0x0007ece2) list_single_graphic_popup_conf4_pane_ParamLimits

0x26c6,	// (0x0007ece2) list_single_graphic_popup_conf4_pane

0xdc01,	// (0x0008a21d) list_highlight_pane_cp022

0x26d9,	// (0x0007ecf5) list_single_graphic_popup_conf4_pane_g1

0xec74,	// (0x0008b290) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf93c,	// (0x0008bf58) list_single_graphic_popup_conf4_pane_g

0x26e1,	// (0x0007ecfd) list_single_graphic_popup_conf4_pane_t1

0x696f,	// (0x00082f8b) popup_vtel_slider_window_ParamLimits

0x696f,	// (0x00082f8b) popup_vtel_slider_window

0x23eb,	// (0x0007ea07) dialer2_ne_pane_t2_ParamLimits

0x23eb,	// (0x0007ea07) dialer2_ne_pane_t2

0x0001,

0xf81d,	// (0x0008be39) dialer2_ne_pane_t_ParamLimits

0xf81d,	// (0x0008be39) dialer2_ne_pane_t

0xe29b,	// (0x0008a8b7) bg_popup_sub_pane_cp010_ParamLimits

0xe29b,	// (0x0008a8b7) bg_popup_sub_pane_cp010

0xab76,	// (0x00087192) popup_vtel_slider_window_g1_ParamLimits

0xab76,	// (0x00087192) popup_vtel_slider_window_g1

0xab82,	// (0x0008719e) popup_vtel_slider_window_g2_ParamLimits

0xab82,	// (0x0008719e) popup_vtel_slider_window_g2

0x0003,

0xf941,	// (0x0008bf5d) popup_vtel_slider_window_g_ParamLimits

0xf941,	// (0x0008bf5d) popup_vtel_slider_window_g

0xabca,	// (0x000871e6) vtel_slider_pane_ParamLimits

0xabca,	// (0x000871e6) vtel_slider_pane

0xabd9,	// (0x000871f5) vtel_slider_pane_g1_ParamLimits

0xabd9,	// (0x000871f5) vtel_slider_pane_g1

0xabe6,	// (0x00087202) vtel_slider_pane_g2_ParamLimits

0xabe6,	// (0x00087202) vtel_slider_pane_g2

0xabf3,	// (0x0008720f) vtel_slider_pane_g3_ParamLimits

0xabf3,	// (0x0008720f) vtel_slider_pane_g3

0xabd9,	// (0x000871f5) vtel_slider_pane_g4_ParamLimits

0xabd9,	// (0x000871f5) vtel_slider_pane_g4

0xac00,	// (0x0008721c) vtel_slider_pane_g5_ParamLimits

0xac00,	// (0x0008721c) vtel_slider_pane_g5

0x0004,

0xf94a,	// (0x0008bf66) vtel_slider_pane_g_ParamLimits

0xf94a,	// (0x0008bf66) vtel_slider_pane_g

0x8866,	// (0x00084e82) main_gallery2_pane

0xa38d,	// (0x000869a9) aid_size_row_itut2_dropdow_list_ParamLimits

0xa38d,	// (0x000869a9) aid_size_row_itut2_dropdow_list

0xa3fb,	// (0x00086a17) grid_vitu2_function_top_pane_ParamLimits

0xa3fb,	// (0x00086a17) grid_vitu2_function_top_pane

0xa455,	// (0x00086a71) popup_vitu2_dropdown_list_window_ParamLimits

0xa455,	// (0x00086a71) popup_vitu2_dropdown_list_window

0xa473,	// (0x00086a8f) popup_vitu2_match_list_window

0xac0d,	// (0x00087229) cell_vitu2_function_top_pane_ParamLimits

0xac0d,	// (0x00087229) cell_vitu2_function_top_pane

0xac27,	// (0x00087243) cell_vitu2_function_top_pane_cp01_ParamLimits

0xac27,	// (0x00087243) cell_vitu2_function_top_pane_cp01

0xac43,	// (0x0008725f) cell_vitu2_function_top_wide_pane_ParamLimits

0xac43,	// (0x0008725f) cell_vitu2_function_top_wide_pane

0x8866,	// (0x00084e82) bg_button_pane_cp012

0xac61,	// (0x0008727d) cell_vitu2_function_top_pane_g1

0xac75,	// (0x00087291) bg_button_pane_cp013_ParamLimits

0xac75,	// (0x00087291) bg_button_pane_cp013

0xac91,	// (0x000872ad) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xac91,	// (0x000872ad) cell_vitu2_function_top_wide_pane_g1

0x5cb1,	// (0x000822cd) bg_popup_sub_pane_cp20

0xaca9,	// (0x000872c5) list_vitu2_match_list_pane

0x24a5,	// (0x0007eac1) bg_popup_sub_pane_cp20_g1

0x24ad,	// (0x0007eac9) bg_popup_sub_pane_cp20_g2

0xe76d,	// (0x0008ad89) bg_popup_sub_pane_cp20_g3

0x24b5,	// (0x0007ead1) bg_popup_sub_pane_cp20_g4

0xe74d,	// (0x0008ad69) bg_popup_sub_pane_cp20_g5

0x26f7,	// (0x0007ed13) bg_popup_sub_pane_cp20_g6

0x24c5,	// (0x0007eae1) bg_popup_sub_pane_cp20_g7

0x24cd,	// (0x0007eae9) bg_popup_sub_pane_cp20_g8

0x24d5,	// (0x0007eaf1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf955,	// (0x0008bf71) bg_popup_sub_pane_cp20_g

0xacc1,	// (0x000872dd) list_vitu2_match_list_item_pane_ParamLimits

0xacc1,	// (0x000872dd) list_vitu2_match_list_item_pane

0xacd3,	// (0x000872ef) list_vitu2_match_list_item_pane_t1

0x5ccb,	// (0x000822e7) bg_popup_sub_pane_cp21

0xe526,	// (0x0008ab42) grid_vitu2_dropdown_list_pane

0xace1,	// (0x000872fd) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xace1,	// (0x000872fd) cell_vitu2_dropdown_list_char_pane

0xad01,	// (0x0008731d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xad01,	// (0x0008731d) cell_vitu2_dropdown_list_ctrl_pane

0x2711,	// (0x0007ed2d) cell_vitu2_dropdown_list_char_pane_g1

0x2708,	// (0x0007ed24) cell_vitu2_dropdown_list_char_pane_g2

0x26ff,	// (0x0007ed1b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf968,	// (0x0008bf84) cell_vitu2_dropdown_list_char_pane_g

0xad29,	// (0x00087345) cell_vitu2_dropdown_list_char_pane_t1

0xad37,	// (0x00087353) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xad37,	// (0x00087353) cell_vitu2_dropdown_list_ctrl_pane_g1

0xad44,	// (0x00087360) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xad44,	// (0x00087360) cell_vitu2_dropdown_list_ctrl_pane_g2

0xad51,	// (0x0008736d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xad51,	// (0x0008736d) cell_vitu2_dropdown_list_ctrl_pane_g3

0xad5e,	// (0x0008737a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xad5e,	// (0x0008737a) cell_vitu2_dropdown_list_ctrl_pane_g4

0x3511,	// (0x0007fb2d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x3511,	// (0x0007fb2d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf96f,	// (0x0008bf8b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf96f,	// (0x0008bf8b) cell_vitu2_dropdown_list_ctrl_pane_g

0xad7a,	// (0x00087396) aid_size_cell_gallery2_ParamLimits

0xad7a,	// (0x00087396) aid_size_cell_gallery2

0xad94,	// (0x000873b0) grid_gallery2_pane_ParamLimits

0xad94,	// (0x000873b0) grid_gallery2_pane

0xadab,	// (0x000873c7) scroll_pane_cp029_ParamLimits

0xadab,	// (0x000873c7) scroll_pane_cp029

0xadbb,	// (0x000873d7) cell_gallery2_pane_ParamLimits

0xadbb,	// (0x000873d7) cell_gallery2_pane

0x271a,	// (0x0007ed36) cell_gallery2_pane_g2

0x3950,	// (0x0007ff6c) cell_gallery2_pane_g3

0x2722,	// (0x0007ed3e) cell_gallery2_pane_g4

0x272a,	// (0x0007ed46) cell_gallery2_pane_g5

0xe526,	// (0x0008ab42) grid_highlight_pane_cp10

0xa473,	// (0x00086a8f) popup_vitu2_match_list_window_ParamLimits

0xa485,	// (0x00086aa1) popup_vitu2_query_window_ParamLimits

0xa485,	// (0x00086aa1) popup_vitu2_query_window

0x5ccb,	// (0x000822e7) bg_vitu2_candi_button_pane

0x2711,	// (0x0007ed2d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2708,	// (0x0007ed24) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x26ff,	// (0x0007ed1b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xae10,	// (0x0008742c) bg_button_pane_cp015

0xae25,	// (0x00087441) bg_button_pane_cp016

0xae31,	// (0x0008744d) bg_button_pane_cp017

0x0449,	// (0x0007ca65) bg_popup_sub_pane_cp22

0x2732,	// (0x0007ed4e) popup_vitu2_query_window_g1

0xae71,	// (0x0008748d) popup_vitu2_query_window_g2

0x0002,

0xf97a,	// (0x0008bf96) popup_vitu2_query_window_g

0xae95,	// (0x000874b1) popup_vitu2_query_window_t1_ParamLimits

0xae95,	// (0x000874b1) popup_vitu2_query_window_t1

0xaec8,	// (0x000874e4) popup_vitu2_query_window_t2_ParamLimits

0xaec8,	// (0x000874e4) popup_vitu2_query_window_t2

0xaeda,	// (0x000874f6) popup_vitu2_query_window_t3_ParamLimits

0xaeda,	// (0x000874f6) popup_vitu2_query_window_t3

0xaf02,	// (0x0008751e) popup_vitu2_query_window_t4_ParamLimits

0xaf02,	// (0x0008751e) popup_vitu2_query_window_t4

0xaf16,	// (0x00087532) popup_vitu2_query_window_t5_ParamLimits

0xaf16,	// (0x00087532) popup_vitu2_query_window_t5

0x0006,

0xf981,	// (0x0008bf9d) popup_vitu2_query_window_t_ParamLimits

0xf981,	// (0x0008bf9d) popup_vitu2_query_window_t

0x25a7,	// (0x0007ebc3) main_cset_text_pane

0xa878,	// (0x00086e94) aid_area_touch_slider_ParamLimits

0xa894,	// (0x00086eb0) cset_slider_pane_ParamLimits

0xa8b7,	// (0x00086ed3) main_cset_slider_pane_g1_ParamLimits

0xa8cc,	// (0x00086ee8) main_cset_slider_pane_g2_ParamLimits

0x25c8,	// (0x0007ebe4) main_cset_slider_pane_g3_ParamLimits

0x25c8,	// (0x0007ebe4) main_cset_slider_pane_g3

0xa8e1,	// (0x00086efd) main_cset_slider_pane_g4_ParamLimits

0xa8e1,	// (0x00086efd) main_cset_slider_pane_g4

0xa8f0,	// (0x00086f0c) main_cset_slider_pane_g5_ParamLimits

0xa8f0,	// (0x00086f0c) main_cset_slider_pane_g5

0xa8fe,	// (0x00086f1a) main_cset_slider_pane_g6_ParamLimits

0xa8fe,	// (0x00086f1a) main_cset_slider_pane_g6

0xf8de,	// (0x0008befa) main_cset_slider_pane_g_ParamLimits

0x25f8,	// (0x0007ec14) main_cset_slider_pane_t1_ParamLimits

0xa98e,	// (0x00086faa) main_cset_slider_pane_t2_ParamLimits

0xa9a8,	// (0x00086fc4) main_cset_slider_pane_t3_ParamLimits

0xa9c2,	// (0x00086fde) main_cset_slider_pane_t4_ParamLimits

0xa9dc,	// (0x00086ff8) main_cset_slider_pane_t5_ParamLimits

0xa9fa,	// (0x00087016) main_cset_slider_pane_t6_ParamLimits

0xaa11,	// (0x0008702d) main_cset_slider_pane_t7_ParamLimits

0xaa3f,	// (0x0008705b) main_cset_slider_pane_t8_ParamLimits

0xaa3f,	// (0x0008705b) main_cset_slider_pane_t8

0xaa67,	// (0x00087083) main_cset_slider_pane_t9_ParamLimits

0xaa67,	// (0x00087083) main_cset_slider_pane_t9

0xaa8f,	// (0x000870ab) main_cset_slider_pane_t10_ParamLimits

0xaa8f,	// (0x000870ab) main_cset_slider_pane_t10

0xaab7,	// (0x000870d3) main_cset_slider_pane_t11_ParamLimits

0xaab7,	// (0x000870d3) main_cset_slider_pane_t11

0xaae1,	// (0x000870fd) main_cset_slider_pane_t12_ParamLimits

0xaae1,	// (0x000870fd) main_cset_slider_pane_t12

0xaafe,	// (0x0008711a) main_cset_slider_pane_t13_ParamLimits

0xaafe,	// (0x0008711a) main_cset_slider_pane_t13

0xf903,	// (0x0008bf1f) main_cset_slider_pane_t_ParamLimits

0xdc01,	// (0x0008a21d) bg_popup_sub_pane_cp011

0x273e,	// (0x0007ed5a) main_cset_text_pane_g1

0x2746,	// (0x0007ed62) main_cset_text_pane_t1

0x2754,	// (0x0007ed70) main_cset_text_pane_t2

0x2762,	// (0x0007ed7e) main_cset_text_pane_t3

0x2770,	// (0x0007ed8c) main_cset_text_pane_t4

0x277e,	// (0x0007ed9a) main_cset_text_pane_t5

0x278c,	// (0x0007eda8) main_cset_text_pane_t6

0x279a,	// (0x0007edb6) main_cset_text_pane_t7

0x0006,

0xf990,	// (0x0008bfac) main_cset_text_pane_t

0x5ccb,	// (0x000822e7) main_cam4_burst_pane

0x5ccb,	// (0x000822e7) main_cam5_pane

0xa7c0,	// (0x00086ddc) bg_button_pane_cp019

0xa7c9,	// (0x00086de5) bg_button_pane_cp020

0x25d4,	// (0x0007ebf0) main_cset_slider_pane_g7_ParamLimits

0x25d4,	// (0x0007ebf0) main_cset_slider_pane_g7

0x25e0,	// (0x0007ebfc) main_cset_slider_pane_g8_ParamLimits

0x25e0,	// (0x0007ebfc) main_cset_slider_pane_g8

0xa912,	// (0x00086f2e) main_cset_slider_pane_g9_ParamLimits

0xa912,	// (0x00086f2e) main_cset_slider_pane_g9

0xa91e,	// (0x00086f3a) main_cset_slider_pane_g10_ParamLimits

0xa91e,	// (0x00086f3a) main_cset_slider_pane_g10

0xa92a,	// (0x00086f46) main_cset_slider_pane_g11_ParamLimits

0xa92a,	// (0x00086f46) main_cset_slider_pane_g11

0xa936,	// (0x00086f52) main_cset_slider_pane_g12_ParamLimits

0xa936,	// (0x00086f52) main_cset_slider_pane_g12

0xa942,	// (0x00086f5e) main_cset_slider_pane_g13_ParamLimits

0xa942,	// (0x00086f5e) main_cset_slider_pane_g13

0xa94e,	// (0x00086f6a) main_cset_slider_pane_g14_ParamLimits

0xa94e,	// (0x00086f6a) main_cset_slider_pane_g14

0xa95a,	// (0x00086f76) main_cset_slider_pane_g15_ParamLimits

0xa95a,	// (0x00086f76) main_cset_slider_pane_g15

0x2620,	// (0x0007ec3c) main_cset_slider_pane_t14_ParamLimits

0x2620,	// (0x0007ec3c) main_cset_slider_pane_t14

0x2659,	// (0x0007ec75) main_cset_slider_pane_t15_ParamLimits

0x2659,	// (0x0007ec75) main_cset_slider_pane_t15

0xaf80,	// (0x0008759c) aid_cam4_burst_size_cell_ParamLimits

0xaf80,	// (0x0008759c) aid_cam4_burst_size_cell

0xaf9c,	// (0x000875b8) grid_cam4_burst_pane_ParamLimits

0xaf9c,	// (0x000875b8) grid_cam4_burst_pane

0xafcc,	// (0x000875e8) linegrid_cam4_burst_pane_ParamLimits

0xafcc,	// (0x000875e8) linegrid_cam4_burst_pane

0xafec,	// (0x00087608) scroll_pane_cp30_ParamLimits

0xafec,	// (0x00087608) scroll_pane_cp30

0xaff8,	// (0x00087614) cell_cam4_burst_pane_ParamLimits

0xaff8,	// (0x00087614) cell_cam4_burst_pane

0x27b4,	// (0x0007edd0) linegrid_cam4_burst_pane_g1_ParamLimits

0x27b4,	// (0x0007edd0) linegrid_cam4_burst_pane_g1

0xb034,	// (0x00087650) linegrid_cam4_burst_pane_g2_ParamLimits

0xb034,	// (0x00087650) linegrid_cam4_burst_pane_g2

0x27c1,	// (0x0007eddd) linegrid_cam4_burst_pane_g3_ParamLimits

0x27c1,	// (0x0007eddd) linegrid_cam4_burst_pane_g3

0x0002,

0xf99f,	// (0x0008bfbb) linegrid_cam4_burst_pane_g_ParamLimits

0xf99f,	// (0x0008bfbb) linegrid_cam4_burst_pane_g

0xb045,	// (0x00087661) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb045,	// (0x00087661) linegrid_cam4_burst_pane_g3_copy1

0x27ce,	// (0x0007edea) linegrid_cam4_burst_pane_g4_ParamLimits

0x27ce,	// (0x0007edea) linegrid_cam4_burst_pane_g4

0xb05f,	// (0x0008767b) linegrid_cam4_burst_pane_g5_ParamLimits

0xb05f,	// (0x0008767b) linegrid_cam4_burst_pane_g5

0xb070,	// (0x0008768c) linegrid_cam4_burst_pane_g6_ParamLimits

0xb070,	// (0x0008768c) linegrid_cam4_burst_pane_g6

0x27db,	// (0x0007edf7) linegrid_cam4_burst_pane_g7_ParamLimits

0x27db,	// (0x0007edf7) linegrid_cam4_burst_pane_g7

0xb081,	// (0x0008769d) cell_cam4_burst_pane_g1

0x27f4,	// (0x0007ee10) main_cam5_pane_t1_ParamLimits

0x27f4,	// (0x0007ee10) main_cam5_pane_t1

0x2806,	// (0x0007ee22) main_cam5_pane_t2_ParamLimits

0x2806,	// (0x0007ee22) main_cam5_pane_t2

0x2818,	// (0x0007ee34) main_cam5_pane_t3_ParamLimits

0x2818,	// (0x0007ee34) main_cam5_pane_t3

0x282a,	// (0x0007ee46) main_cam5_pane_t4_ParamLimits

0x282a,	// (0x0007ee46) main_cam5_pane_t4

0x2842,	// (0x0007ee5e) main_cam5_pane_t5_ParamLimits

0x2842,	// (0x0007ee5e) main_cam5_pane_t5

0x2856,	// (0x0007ee72) main_cam5_pane_t6_ParamLimits

0x2856,	// (0x0007ee72) main_cam5_pane_t6

0x286a,	// (0x0007ee86) main_cam5_pane_t7_ParamLimits

0x286a,	// (0x0007ee86) main_cam5_pane_t7

0x287c,	// (0x0007ee98) main_cam5_pane_t8_ParamLimits

0x287c,	// (0x0007ee98) main_cam5_pane_t8

0x2898,	// (0x0007eeb4) main_cam5_pane_t9_ParamLimits

0x2898,	// (0x0007eeb4) main_cam5_pane_t9

0x28aa,	// (0x0007eec6) main_cam5_pane_t10_ParamLimits

0x28aa,	// (0x0007eec6) main_cam5_pane_t10

0x28bc,	// (0x0007eed8) main_cam5_pane_t11_ParamLimits

0x28bc,	// (0x0007eed8) main_cam5_pane_t11

0x28ce,	// (0x0007eeea) main_cam5_pane_t12_ParamLimits

0x28ce,	// (0x0007eeea) main_cam5_pane_t12

0x28e3,	// (0x0007eeff) main_cam5_pane_t13_ParamLimits

0x28e3,	// (0x0007eeff) main_cam5_pane_t13

0x000c,

0xf9ab,	// (0x0008bfc7) main_cam5_pane_t_ParamLimits

0xf9ab,	// (0x0008bfc7) main_cam5_pane_t

0x5c70,	// (0x0008228c) popup_scut_keymap_window_ParamLimits

0x5c70,	// (0x0008228c) popup_scut_keymap_window

0xb094,	// (0x000876b0) aid_size_cell_brow_shortcut

0xe526,	// (0x0008ab42) bg_popup_window_pane_cp010

0xb0a0,	// (0x000876bc) grid_scut_pane

0xb0ac,	// (0x000876c8) cell_scut_pane_ParamLimits

0xb0ac,	// (0x000876c8) cell_scut_pane

0xb0c3,	// (0x000876df) cell_scut_pane_g1

0x2900,	// (0x0007ef1c) cell_scut_pane_t1

0x290f,	// (0x0007ef2b) cell_scut_pane_t2

0xb0cc,	// (0x000876e8) cell_scut_pane_t3

0x0002,

0xf9c6,	// (0x0008bfe2) cell_scut_pane_t

0x907b,	// (0x00085697) main_mup3_pane_g8_ParamLimits

0x907b,	// (0x00085697) main_mup3_pane_g8

0xa39b,	// (0x000869b7) area_vitu2_query_pane_ParamLimits

0xa39b,	// (0x000869b7) area_vitu2_query_pane

0xae3d,	// (0x00087459) input_focus_pane_cp08

0x291e,	// (0x0007ef3a) area_vitu2_query_pane_g1

0xb0da,	// (0x000876f6) area_vitu2_query_pane_g2

0x0001,

0xf9cd,	// (0x0008bfe9) area_vitu2_query_pane_g

0xb0eb,	// (0x00087707) area_vitu2_query_pane_t1_ParamLimits

0xb0eb,	// (0x00087707) area_vitu2_query_pane_t1

0xb0ff,	// (0x0008771b) area_vitu2_query_pane_t2_ParamLimits

0xb0ff,	// (0x0008771b) area_vitu2_query_pane_t2

0xb113,	// (0x0008772f) area_vitu2_query_pane_t3_ParamLimits

0xb113,	// (0x0008772f) area_vitu2_query_pane_t3

0x292a,	// (0x0007ef46) area_vitu2_query_pane_t4_ParamLimits

0x292a,	// (0x0007ef46) area_vitu2_query_pane_t4

0x2952,	// (0x0007ef6e) area_vitu2_query_pane_t5_ParamLimits

0x2952,	// (0x0007ef6e) area_vitu2_query_pane_t5

0x297a,	// (0x0007ef96) area_vitu2_query_pane_t6_ParamLimits

0x297a,	// (0x0007ef96) area_vitu2_query_pane_t6

0x0006,

0xf9d2,	// (0x0008bfee) area_vitu2_query_pane_t_ParamLimits

0xf9d2,	// (0x0008bfee) area_vitu2_query_pane_t

0xae25,	// (0x00087441) bg_button_pane_cp018

0xb13b,	// (0x00087757) bg_button_pane_cp021

0xb147,	// (0x00087763) bg_button_pane_cp022

0xb16a,	// (0x00087786) input_focus_pane_cp09

0xedb0,	// (0x0008b3cc) aid_size_touch_mv_arrow_left

0xedd9,	// (0x0008b3f5) aid_size_touch_mv_arrow_right

0xa972,	// (0x00086f8e) main_cset_slider_pane_g16_ParamLimits

0xa972,	// (0x00086f8e) main_cset_slider_pane_g16

0xa980,	// (0x00086f9c) main_cset_slider_pane_g17_ParamLimits

0xa980,	// (0x00086f9c) main_cset_slider_pane_g17

0xb081,	// (0x0008769d) cell_cam4_burst_pane_g1_ParamLimits

0xdc01,	// (0x0008a21d) compa_mode_pane

0xab8e,	// (0x000871aa) popup_vtel_slider_window_g3_ParamLimits

0xab8e,	// (0x000871aa) popup_vtel_slider_window_g3

0xaba2,	// (0x000871be) popup_vtel_slider_window_g4_ParamLimits

0xaba2,	// (0x000871be) popup_vtel_slider_window_g4

0xabb6,	// (0x000871d2) popup_vtel_slider_window_t1_ParamLimits

0xabb6,	// (0x000871d2) popup_vtel_slider_window_t1

0x5ccb,	// (0x000822e7) main_cl_pane

0x8904,	// (0x00084f20) popup_imed_adjust2_window_ParamLimits

0x0449,	// (0x0007ca65) bg_tb_trans_pane_cp05_ParamLimits

0x20a7,	// (0x0007e6c3) popup_imed_adjust2_window_g1_ParamLimits

0x20b6,	// (0x0007e6d2) popup_imed_adjust2_window_g2_ParamLimits

0x20b6,	// (0x0007e6d2) popup_imed_adjust2_window_g2

0x20c2,	// (0x0007e6de) popup_imed_adjust2_window_g3_ParamLimits

0x20c2,	// (0x0007e6de) popup_imed_adjust2_window_g3

0x0002,

0xf74d,	// (0x0008bd69) popup_imed_adjust2_window_g_ParamLimits

0xf74d,	// (0x0008bd69) popup_imed_adjust2_window_g

0x20ce,	// (0x0007e6ea) popup_imed_adjust2_window_t1_ParamLimits

0x20e6,	// (0x0007e702) slider_imed_adjust_pane_ParamLimits

0x20fa,	// (0x0007e716) slider_imed_adjust_pane_g1_ParamLimits

0x210a,	// (0x0007e726) slider_imed_adjust_pane_g2_ParamLimits

0x211a,	// (0x0007e736) slider_imed_adjust_pane_g3_ParamLimits

0x212b,	// (0x0007e747) slider_imed_adjust_pane_g4_ParamLimits

0xf754,	// (0x0008bd70) slider_imed_adjust_pane_g_ParamLimits

0xa0e2,	// (0x000866fe) aid_touch_area_cam4_ParamLimits

0xa0e2,	// (0x000866fe) aid_touch_area_cam4

0xa0f2,	// (0x0008670e) battery_pane_cp01

0xa179,	// (0x00086795) main_camera4_pane_g6_ParamLimits

0xa179,	// (0x00086795) main_camera4_pane_g6

0xa197,	// (0x000867b3) main_camera4_pane_t2_ParamLimits

0xa197,	// (0x000867b3) main_camera4_pane_t2

0x0001,

0xf851,	// (0x0008be6d) main_camera4_pane_t_ParamLimits

0xf851,	// (0x0008be6d) main_camera4_pane_t

0xa21e,	// (0x0008683a) aid_touch_area_vid4_ParamLimits

0xa21e,	// (0x0008683a) aid_touch_area_vid4

0xa25e,	// (0x0008687a) main_video4_pane_g5_ParamLimits

0xa25e,	// (0x0008687a) main_video4_pane_g5

0xa282,	// (0x0008689e) vid4_progress_pane_ParamLimits

0xa282,	// (0x0008689e) vid4_progress_pane

0x25ec,	// (0x0007ec08) main_cset_slider_pane_g18_ParamLimits

0x25ec,	// (0x0007ec08) main_cset_slider_pane_g18

0x27e8,	// (0x0007ee04) cell_cam4_burst_pane_g2_ParamLimits

0x27e8,	// (0x0007ee04) cell_cam4_burst_pane_g2

0x0001,

0xf9a6,	// (0x0008bfc2) cell_cam4_burst_pane_g_ParamLimits

0xf9a6,	// (0x0008bfc2) cell_cam4_burst_pane_g

0xb17a,	// (0x00087796) bg_cl_pane_ParamLimits

0xb17a,	// (0x00087796) bg_cl_pane

0xb186,	// (0x000877a2) cl_header_pane_ParamLimits

0xb186,	// (0x000877a2) cl_header_pane

0xb192,	// (0x000877ae) cl_listscroll_pane_ParamLimits

0xb192,	// (0x000877ae) cl_listscroll_pane

0x48d3,	// (0x00080eef) bg_cl_pane_g1

0x48db,	// (0x00080ef7) bg_cl_pane_g2

0x48e3,	// (0x00080eff) bg_cl_pane_g3

0x48eb,	// (0x00080f07) bg_cl_pane_g4

0x48f3,	// (0x00080f0f) bg_cl_pane_g5

0x48fb,	// (0x00080f17) bg_cl_pane_g6

0x4903,	// (0x00080f1f) bg_cl_pane_g7

0x490b,	// (0x00080f27) bg_cl_pane_g8

0x4913,	// (0x00080f2f) bg_cl_pane_g9

0x0008,

0xf9e1,	// (0x0008bffd) bg_cl_pane_g

0xb19e,	// (0x000877ba) aid_height_cl_leading_ParamLimits

0xb19e,	// (0x000877ba) aid_height_cl_leading

0xb1aa,	// (0x000877c6) aid_height_cl_text_ParamLimits

0xb1aa,	// (0x000877c6) aid_height_cl_text

0xe2f4,	// (0x0008a910) bg_cl_header_pane_ParamLimits

0xe2f4,	// (0x0008a910) bg_cl_header_pane

0xb1c2,	// (0x000877de) cl_header_pane_g1_ParamLimits

0xb1c2,	// (0x000877de) cl_header_pane_g1

0xb1cf,	// (0x000877eb) cl_header_pane_t1_ParamLimits

0xb1cf,	// (0x000877eb) cl_header_pane_t1

0x491b,	// (0x00080f37) cl_list_pane

0x25bf,	// (0x0007ebdb) hc_scroll_pane_cp01

0xe74d,	// (0x0008ad69) bg_cl_header_pane_g1

0x24a5,	// (0x0007eac1) bg_cl_header_pane_g2

0xe76d,	// (0x0008ad89) bg_cl_header_pane_g3

0x24b5,	// (0x0007ead1) bg_cl_header_pane_g4

0x24ad,	// (0x0007eac9) bg_cl_header_pane_g5

0x26f7,	// (0x0007ed13) bg_cl_header_pane_g6

0x24cd,	// (0x0007eae9) bg_cl_header_pane_g7

0x24d5,	// (0x0007eaf1) bg_cl_header_pane_g8

0x24c5,	// (0x0007eae1) bg_cl_header_pane_g9

0x0008,

0xf9f4,	// (0x0008c010) bg_cl_header_pane_g

0xb1e1,	// (0x000877fd) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb1e1,	// (0x000877fd) hc_cl_list_double_graphic_heading_pane

0xb1f2,	// (0x0008780e) hc_cl_list_single_graphic_pane_ParamLimits

0xb1f2,	// (0x0008780e) hc_cl_list_single_graphic_pane

0xb20b,	// (0x00087827) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb20b,	// (0x00087827) hc_cl_list_single_graphic_pane_g1

0xb217,	// (0x00087833) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb217,	// (0x00087833) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa07,	// (0x0008c023) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa07,	// (0x0008c023) hc_cl_list_single_graphic_pane_g

0xb22b,	// (0x00087847) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb22b,	// (0x00087847) hc_cl_list_single_graphic_pane_t1

0xb20b,	// (0x00087827) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb20b,	// (0x00087827) hc_cl_list_double_graphic_heading_pane_g1

0xb240,	// (0x0008785c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb240,	// (0x0008785c) hc_cl_list_double_graphic_heading_pane_g2

0xb254,	// (0x00087870) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb254,	// (0x00087870) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa0c,	// (0x0008c028) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa0c,	// (0x0008c028) hc_cl_list_double_graphic_heading_pane_g

0xb268,	// (0x00087884) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb268,	// (0x00087884) hc_cl_list_double_graphic_heading_pane_t1

0xb27d,	// (0x00087899) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb27d,	// (0x00087899) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa13,	// (0x0008c02f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa13,	// (0x0008c02f) hc_cl_list_double_graphic_heading_pane_t

0xb29a,	// (0x000878b6) vid4_progress_pane_g1

0xb2aa,	// (0x000878c6) vid4_progress_pane_g2

0xb2ba,	// (0x000878d6) vid4_progress_pane_g3

0xb2cc,	// (0x000878e8) vid4_progress_pane_g4

0x0004,

0xfa18,	// (0x0008c034) vid4_progress_pane_g

0xb2e4,	// (0x00087900) vid4_progress_pane_t1

0xb2fa,	// (0x00087916) vid4_progress_pane_t2

0x0002,

0xfa23,	// (0x0008c03f) vid4_progress_pane_t

0xb324,	// (0x00087940) wait_bar_pane_cp07

0x19b2,	// (0x0007dfce) blid_firmament_pane_ParamLimits

0x19f5,	// (0x0007e011) popup_blid_sat_info2_window_g1

0x1a19,	// (0x0007e035) popup_blid_sat_info2_window_t3

0x1a27,	// (0x0007e043) popup_blid_sat_info2_window_t4

0x1a35,	// (0x0007e051) popup_blid_sat_info2_window_t5

0x1a43,	// (0x0007e05f) popup_blid_sat_info2_window_t6

0x1a53,	// (0x0007e06f) popup_blid_sat_info2_window_t7

0x1a61,	// (0x0007e07d) popup_blid_sat_info2_window_t8

0x1a6f,	// (0x0007e08b) popup_blid_sat_info2_window_t9

0x1a7d,	// (0x0007e099) popup_blid_sat_info2_window_t10

0x1b3e,	// (0x0007e15a) aid_firma_cardinal_ParamLimits

0x1b52,	// (0x0007e16e) blid_firmament_pane_t1_ParamLimits

0x1b69,	// (0x0007e185) blid_firmament_pane_t2_ParamLimits

0x1b80,	// (0x0007e19c) blid_firmament_pane_t3_ParamLimits

0x1b97,	// (0x0007e1b3) blid_firmament_pane_t4_ParamLimits

0xf646,	// (0x0008bc62) blid_firmament_pane_t_ParamLimits

0x1bae,	// (0x0007e1ca) blid_sat_info_pane_ParamLimits

0x8866,	// (0x00084e82) main_cam_set_pane_ParamLimits

0x9754,	// (0x00085d70) aid_size_cell_colour_35_ParamLimits

0x976e,	// (0x00085d8a) aid_size_cell_colour_112_ParamLimits

0x9785,	// (0x00085da1) aid_size_cell_effect_ParamLimits

0xe29b,	// (0x0008a8b7) bg_tb_trans_pane_cp02_ParamLimits

0xf045,	// (0x0008b661) heading_imed_pane_ParamLimits

0x979f,	// (0x00085dbb) listscroll_imed_pane_ParamLimits

0x0df1,	// (0x0007d40d) popup_call2_audio_first_window_g5_ParamLimits

0x0df1,	// (0x0007d40d) popup_call2_audio_first_window_g5

0x9dc8,	// (0x000863e4) aid_size_touch_image3_arrow_left_ParamLimits

0x9dc8,	// (0x000863e4) aid_size_touch_image3_arrow_left

0x9dde,	// (0x000863fa) aid_size_touch_image3_arrow_right_ParamLimits

0x9dde,	// (0x000863fa) aid_size_touch_image3_arrow_right

0xb30f,	// (0x0008792b) vid4_progress_pane_t3

0x9920,	// (0x00085f3c) main_hwr_training_symbol_option_pane_ParamLimits

0x9920,	// (0x00085f3c) main_hwr_training_symbol_option_pane

0x22e0,	// (0x0007e8fc) popup_hwr_training_preview_window_ParamLimits

0x22e0,	// (0x0007e8fc) popup_hwr_training_preview_window

0x9981,	// (0x00085f9d) hwr_training_navi_pane_g5_ParamLimits

0x9981,	// (0x00085f9d) hwr_training_navi_pane_g5

0x2493,	// (0x0007eaaf) popup_char_count_window

0x5cb1,	// (0x000822cd) bg_popup_sub_pane_cp20_ParamLimits

0xaca9,	// (0x000872c5) list_vitu2_match_list_pane_ParamLimits

0xacb5,	// (0x000872d1) vitu2_page_scroll_pane_ParamLimits

0xacb5,	// (0x000872d1) vitu2_page_scroll_pane

0x4924,	// (0x00080f40) list_single_hwr_training_symbol_option_pane_ParamLimits

0x4924,	// (0x00080f40) list_single_hwr_training_symbol_option_pane

0x4937,	// (0x00080f53) list_single_hwr_training_symbol_option_pane_g1

0x493f,	// (0x00080f5b) list_single_hwr_training_symbol_option_pane_t1

0x494d,	// (0x00080f69) bg_button_pane_cp023

0x4956,	// (0x00080f72) bg_button_pane_cp024

0x4989,	// (0x00080fa5) vitu2_page_scroll_pane_g1

0x4991,	// (0x00080fad) vitu2_page_scroll_pane_g2

0x0001,

0xfa2a,	// (0x0008c046) vitu2_page_scroll_pane_g

0x4999,	// (0x00080fb5) vitu2_page_scroll_pane_t1

0x1928,	// (0x0007df44) popup_char_count_window_g1

0x49a8,	// (0x00080fc4) popup_char_count_window_g2

0x49b1,	// (0x00080fcd) popup_char_count_window_g3

0x0002,

0xfa2f,	// (0x0008c04b) popup_char_count_window_g

0x49ba,	// (0x00080fd6) popup_char_count_window_t1

0x5ccb,	// (0x000822e7) main_vded2_pane

0x2093,	// (0x0007e6af) aid_size_cell_imed_line

0x209d,	// (0x0007e6b9) grid_imed_line_width_pane

0xa2f0,	// (0x0008690c) vid4_indicators_pane_g4

0x49c8,	// (0x00080fe4) cell_imed_line_width_pane_ParamLimits

0x49c8,	// (0x00080fe4) cell_imed_line_width_pane

0x49dc,	// (0x00080ff8) cell_imed_line_width_pane_g1

0x49e5,	// (0x00081001) cell_imed_line_width_pane_g2

0x0001,

0xfa36,	// (0x0008c052) cell_imed_line_width_pane_g

0xb34b,	// (0x00087967) main_vded2_pane_g1_ParamLimits

0xb34b,	// (0x00087967) main_vded2_pane_g1

0xb358,	// (0x00087974) main_vded2_pane_g2_ParamLimits

0xb358,	// (0x00087974) main_vded2_pane_g2

0x0001,

0xfa3b,	// (0x0008c057) main_vded2_pane_g_ParamLimits

0xfa3b,	// (0x0008c057) main_vded2_pane_g

0xb366,	// (0x00087982) vded2_slider_pane_ParamLimits

0xb366,	// (0x00087982) vded2_slider_pane

0xb373,	// (0x0008798f) aid_size_touch_vded2_end

0xb37d,	// (0x00087999) aid_size_touch_vded2_playhead

0x49ed,	// (0x00081009) aid_size_touch_vded2_start

0x49f5,	// (0x00081011) vded2_slider_bg_pane

0x49fe,	// (0x0008101a) vded2_slider_pane_g1

0x4a07,	// (0x00081023) vded2_slider_pane_g2

0xb385,	// (0x000879a1) vded2_slider_pane_g3

0x0002,

0xfa40,	// (0x0008c05c) vded2_slider_pane_g

0x4a0f,	// (0x0008102b) vded2_slider_bg_pane_g1

0x4a18,	// (0x00081034) vded2_slider_bg_pane_g2

0x4a21,	// (0x0008103d) vded2_slider_bg_pane_g3

0x0002,

0xfa47,	// (0x0008c063) vded2_slider_bg_pane_g

0x8107,	// (0x00084723) aid_postcard_touch_down_pane_ParamLimits

0x8107,	// (0x00084723) aid_postcard_touch_down_pane

0x8117,	// (0x00084733) aid_postcard_touch_up_pane_ParamLimits

0x8117,	// (0x00084733) aid_postcard_touch_up_pane

0x5ccb,	// (0x000822e7) main_blid2_pane

0x888f,	// (0x00084eab) popup_blid2_search_window

0xdc01,	// (0x0008a21d) blid2_gps_pane

0xdc01,	// (0x0008a21d) blid2_navig_pane

0xdc01,	// (0x0008a21d) blid2_search_pane

0xdc01,	// (0x0008a21d) blid2_tripm_pane

0xb38e,	// (0x000879aa) blid2_search_pane_g1_ParamLimits

0xb38e,	// (0x000879aa) blid2_search_pane_g1

0xb39e,	// (0x000879ba) blid2_search_pane_t1_ParamLimits

0xb39e,	// (0x000879ba) blid2_search_pane_t1

0xb3b0,	// (0x000879cc) aid_size_cell_blid2_gps_ParamLimits

0xb3b0,	// (0x000879cc) aid_size_cell_blid2_gps

0xb3c0,	// (0x000879dc) blid2_gps_pane_g1_ParamLimits

0xb3c0,	// (0x000879dc) blid2_gps_pane_g1

0xb3cc,	// (0x000879e8) grid_blid2_satellite_pane_ParamLimits

0xb3cc,	// (0x000879e8) grid_blid2_satellite_pane

0xb3dc,	// (0x000879f8) blid2_navig_pane_g1_ParamLimits

0xb3dc,	// (0x000879f8) blid2_navig_pane_g1

0xb3e8,	// (0x00087a04) blid2_navig_pane_t1_ParamLimits

0xb3e8,	// (0x00087a04) blid2_navig_pane_t1

0xb3fa,	// (0x00087a16) blid2_navig_pane_t2_ParamLimits

0xb3fa,	// (0x00087a16) blid2_navig_pane_t2

0x0001,

0xfa4e,	// (0x0008c06a) blid2_navig_pane_t_ParamLimits

0xfa4e,	// (0x0008c06a) blid2_navig_pane_t

0xb40c,	// (0x00087a28) blid2_navig_ring_pane_ParamLimits

0xb40c,	// (0x00087a28) blid2_navig_ring_pane

0xb41c,	// (0x00087a38) blid2_speed_pane_ParamLimits

0xb41c,	// (0x00087a38) blid2_speed_pane

0xb428,	// (0x00087a44) blid2_tripm_pane_g1_ParamLimits

0xb428,	// (0x00087a44) blid2_tripm_pane_g1

0xb438,	// (0x00087a54) blid2_tripm_pane_g2_ParamLimits

0xb438,	// (0x00087a54) blid2_tripm_pane_g2

0xb444,	// (0x00087a60) blid2_tripm_pane_g3_ParamLimits

0xb444,	// (0x00087a60) blid2_tripm_pane_g3

0xb450,	// (0x00087a6c) blid2_tripm_pane_g4_ParamLimits

0xb450,	// (0x00087a6c) blid2_tripm_pane_g4

0xb45c,	// (0x00087a78) blid2_tripm_pane_g5_ParamLimits

0xb45c,	// (0x00087a78) blid2_tripm_pane_g5

0x0005,

0xfa53,	// (0x0008c06f) blid2_tripm_pane_g_ParamLimits

0xfa53,	// (0x0008c06f) blid2_tripm_pane_g

0xb478,	// (0x00087a94) blid2_tripm_pane_t1_ParamLimits

0xb478,	// (0x00087a94) blid2_tripm_pane_t1

0xb48c,	// (0x00087aa8) blid2_tripm_pane_t2_ParamLimits

0xb48c,	// (0x00087aa8) blid2_tripm_pane_t2

0xb49e,	// (0x00087aba) blid2_tripm_pane_t3_ParamLimits

0xb49e,	// (0x00087aba) blid2_tripm_pane_t3

0x0003,

0xfa60,	// (0x0008c07c) blid2_tripm_pane_t_ParamLimits

0xfa60,	// (0x0008c07c) blid2_tripm_pane_t

0xb4d0,	// (0x00087aec) cell_blid2_satellite_pane_ParamLimits

0xb4d0,	// (0x00087aec) cell_blid2_satellite_pane

0xb4ea,	// (0x00087b06) cell_blid2_satellite_pane_g1

0x4a2a,	// (0x00081046) cell_blid2_satellite_pane_t1

0xe548,	// (0x0008ab64) blid2_speed_pane_g1

0x4a38,	// (0x00081054) blid2_speed_pane_t1

0x4a46,	// (0x00081062) blid2_speed_pane_t2

0x0001,

0xfa69,	// (0x0008c085) blid2_speed_pane_t

0xe548,	// (0x0008ab64) blid2_navig_ring_pane_g1

0xb4f3,	// (0x00087b0f) blid2_navig_ring_pane_g2

0xb4fb,	// (0x00087b17) blid2_navig_ring_pane_g3

0xb503,	// (0x00087b1f) blid2_navig_ring_pane_g4

0xb50b,	// (0x00087b27) blid2_navig_ring_pane_g5

0x0004,

0xfa6e,	// (0x0008c08a) blid2_navig_ring_pane_g

0xdc01,	// (0x0008a21d) bg_popup_window_pane_cp011

0x4a54,	// (0x00081070) popup_blid2_search_window_g1

0x4a5c,	// (0x00081078) popup_blid2_search_window_t1

0x4a6a,	// (0x00081086) popup_blid2_search_window_t2

0x0001,

0xfa79,	// (0x0008c095) popup_blid2_search_window_t

0xe65c,	// (0x0008ac78) main_browser_pane_g1

0xe374,	// (0x0008a990) main_browser_pane_ParamLimits

0x8866,	// (0x00084e82) bg_button_pane_cp011_ParamLimits

0xa593,	// (0x00086baf) cell_vitu2_function_pane_g1_ParamLimits

0x0449,	// (0x0007ca65) bg_popup_sub_pane_cp22_ParamLimits

0xae3d,	// (0x00087459) input_focus_pane_cp08_ParamLimits

0xae58,	// (0x00087474) popup_vitu2_query_button_pane_ParamLimits

0xae58,	// (0x00087474) popup_vitu2_query_button_pane

0xae67,	// (0x00087483) popup_vitu2_query_input_button_pane

0x2732,	// (0x0007ed4e) popup_vitu2_query_window_g1_ParamLimits

0xae71,	// (0x0008748d) popup_vitu2_query_window_g2_ParamLimits

0xf97a,	// (0x0008bf96) popup_vitu2_query_window_g_ParamLimits

0xdc01,	// (0x0008a21d) bg_button_pane_cp026

0xb513,	// (0x00087b2f) popup_vitu2_query_input_button_pane_g1

0xdc01,	// (0x0008a21d) bg_button_pane_cp025

0x4a78,	// (0x00081094) popup_vitu2_query_button_pane_t1

0x8d63,	// (0x0008537f) main_mp3_pane_t6

0x8d73,	// (0x0008538f) popup_slider_window_cp01

0xa1cd,	// (0x000867e9) cam4_battery_pane

0xa2ad,	// (0x000868c9) cam4_battery_pane_cp02

0xb292,	// (0x000878ae) cam4_battery_pane_cp01

0xb292,	// (0x000878ae) cam4_battery_pane_cp03

0x29e0,	// (0x0007effc) cam4_battery_pane_g1

0xe548,	// (0x0008ab64) cam4_battery_pane_g2

0x0001,

0xfa7e,	// (0x0008c09a) cam4_battery_pane_g

0x1a8b,	// (0x0007e0a7) popup_blid_sat_info2_window_t11

0xedb0,	// (0x0008b3cc) aid_size_touch_mv_arrow_left_ParamLimits

0xedd9,	// (0x0008b3f5) aid_size_touch_mv_arrow_right_ParamLimits

0xee37,	// (0x0008b453) navi_pane_g1_ParamLimits

0xee43,	// (0x0008b45f) navi_pane_g2_ParamLimits

0xee71,	// (0x0008b48d) navi_pane_g3_ParamLimits

0xf35a,	// (0x0008b976) navi_pane_g_ParamLimits

0x7cd2,	// (0x000842ee) navi_pane_mv_t1_ParamLimits

0x97ab,	// (0x00085dc7) grid_imed_effect_pane_ParamLimits

0x682f,	// (0x00082e4b) aid_placing_vt_slider_lsc

0xe5ab,	// (0x0008abc7) aid_placing_vt_slider_prt

0xe29b,	// (0x0008a8b7) bg_tb_trans_pane_cp01_ParamLimits

0x1d0b,	// (0x0007e327) popup_image_details_window_g1_ParamLimits

0x1d1e,	// (0x0007e33a) popup_image_details_window_g2_ParamLimits

0x1d33,	// (0x0007e34f) popup_image_details_window_g3_ParamLimits

0x1d33,	// (0x0007e34f) popup_image_details_window_g3

0xf686,	// (0x0008bca2) popup_image_details_window_g_ParamLimits

0x1d47,	// (0x0007e363) popup_image_details_window_t1_ParamLimits

0x1d59,	// (0x0007e375) popup_image_details_window_t2_ParamLimits

0x1d72,	// (0x0007e38e) popup_image_details_window_t3_ParamLimits

0x1d86,	// (0x0007e3a2) popup_image_details_window_t4_ParamLimits

0x1da1,	// (0x0007e3bd) popup_image_details_window_t5_ParamLimits

0xf68d,	// (0x0008bca9) popup_image_details_window_t_ParamLimits

0xb1b6,	// (0x000877d2) cl_header_name_pane_ParamLimits

0xb1b6,	// (0x000877d2) cl_header_name_pane

0xb51b,	// (0x00087b37) cl_header_name_pane_t1_ParamLimits

0xb51b,	// (0x00087b37) cl_header_name_pane_t1

0xb532,	// (0x00087b4e) cl_header_name_pane_t2_ParamLimits

0xb532,	// (0x00087b4e) cl_header_name_pane_t2

0xb55c,	// (0x00087b78) cl_header_name_pane_t3_ParamLimits

0xb55c,	// (0x00087b78) cl_header_name_pane_t3

0x0002,

0xfa83,	// (0x0008c09f) cl_header_name_pane_t_ParamLimits

0xfa83,	// (0x0008c09f) cl_header_name_pane_t

0xef00,	// (0x0008b51c) navi_pane_mv_g2_ParamLimits

0x245e,	// (0x0007ea7a) field_vitu2_entry_pane_g1_ParamLimits

0x246a,	// (0x0007ea86) field_vitu2_entry_pane_g2_ParamLimits

0xf051,	// (0x0008b66d) field_vitu2_entry_pane_g3_ParamLimits

0xf051,	// (0x0008b66d) field_vitu2_entry_pane_g3

0xf883,	// (0x0008be9f) field_vitu2_entry_pane_g_ParamLimits

0xa521,	// (0x00086b3d) cell_vitu2_itu_pane_g1_ParamLimits

0xa539,	// (0x00086b55) cell_vitu2_itu_pane_g2_ParamLimits

0xa539,	// (0x00086b55) cell_vitu2_itu_pane_g2

0x0001,

0xf88f,	// (0x0008beab) cell_vitu2_itu_pane_g_ParamLimits

0xf88f,	// (0x0008beab) cell_vitu2_itu_pane_g

0x8866,	// (0x00084e82) bg_vkb2_func_pane_cp05_ParamLimits

0x8866,	// (0x00084e82) bg_vkb2_func_pane_cp05

0x8866,	// (0x00084e82) bg_vkb2_func_pane_cp03

0x8866,	// (0x00084e82) bg_vkb2_func_pane_cp04

0x8866,	// (0x00084e82) bg_vkb2_func_pane_cp10_ParamLimits

0x8866,	// (0x00084e82) bg_vkb2_func_pane_cp10

0xb158,	// (0x00087774) bg_vkb2_func_pane_cp08

0xae25,	// (0x00087441) bg_vkb2_func_pane_cp06

0xb13b,	// (0x00087757) bg_vkb2_func_pane_cp07

0x495f,	// (0x00080f7b) bg_vkb2_func_pane_cp11_ParamLimits

0x495f,	// (0x00080f7b) bg_vkb2_func_pane_cp11

0x4974,	// (0x00080f90) bg_vkb2_func_pane_cp12_ParamLimits

0x4974,	// (0x00080f90) bg_vkb2_func_pane_cp12

0xdc01,	// (0x0008a21d) bg_vkb2_func_pane_cp09

0x24a5,	// (0x0007eac1) bg_vkb2_func_pane_g1

0xe76d,	// (0x0008ad89) bg_vkb2_func_pane_g2

0x24ad,	// (0x0007eac9) bg_vkb2_func_pane_g3

0x24b5,	// (0x0007ead1) bg_vkb2_func_pane_g4

0x26f7,	// (0x0007ed13) bg_vkb2_func_pane_g5

0x24cd,	// (0x0007eae9) bg_vkb2_func_pane_g6

0x24d5,	// (0x0007eaf1) bg_vkb2_func_pane_g7

0x24c5,	// (0x0007eae1) bg_vkb2_func_pane_g8

0xe74d,	// (0x0008ad69) bg_vkb2_func_pane_g9

0x0008,

0xfa8a,	// (0x0008c0a6) bg_vkb2_func_pane_g

0xb46a,	// (0x00087a86) blid2_tripm_pane_g6_ParamLimits

0xb46a,	// (0x00087a86) blid2_tripm_pane_g6

0x239e,	// (0x0007e9ba) mp4_progress_pane_g1

0xb4c4,	// (0x00087ae0) blid2_tripm_values_pane_ParamLimits

0xb4c4,	// (0x00087ae0) blid2_tripm_values_pane

0xb581,	// (0x00087b9d) blid2_tripm_values_pane_t1

0xb58f,	// (0x00087bab) blid2_tripm_values_pane_t2

0xb59d,	// (0x00087bb9) blid2_tripm_values_pane_t3

0xb5ab,	// (0x00087bc7) blid2_tripm_values_pane_t4

0xb5b9,	// (0x00087bd5) blid2_tripm_values_pane_t5

0xb5c7,	// (0x00087be3) blid2_tripm_values_pane_t6

0xb5d5,	// (0x00087bf1) blid2_tripm_values_pane_t7

0xb5e3,	// (0x00087bff) blid2_tripm_values_pane_t8

0xb5f1,	// (0x00087c0d) blid2_tripm_values_pane_t9

0x0008,

0xfa9d,	// (0x0008c0b9) blid2_tripm_values_pane_t

0x686f,	// (0x00082e8b) call_video_pane_t1_ParamLimits

0x6890,	// (0x00082eac) call_video_pane_t2_ParamLimits

0xf203,	// (0x0008b81f) call_video_pane_t_ParamLimits

0x7fcf,	// (0x000845eb) msg_header_pane_g1_ParamLimits

0x04fe,	// (0x0007cb1a) msg_header_pane_g2_ParamLimits

0x04fe,	// (0x0007cb1a) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x0008ba19) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x0008ba19) msg_header_pane_g

0xe374,	// (0x0008a990) main_clock2_pane_ParamLimits

0x9525,	// (0x00085b41) grid_clock2_toolbar_pane_ParamLimits

0x9525,	// (0x00085b41) grid_clock2_toolbar_pane

0x9525,	// (0x00085b41) listscroll_clock2_pane_ParamLimits

0x9525,	// (0x00085b41) listscroll_clock2_pane

0x95d5,	// (0x00085bf1) main_clock2_pane_t3_ParamLimits

0x95d5,	// (0x00085bf1) main_clock2_pane_t3

0x95e7,	// (0x00085c03) main_clock2_pane_t4_ParamLimits

0x95e7,	// (0x00085c03) main_clock2_pane_t4

0x4a86,	// (0x000810a2) cell_clock2_toolbar_pane

0x4a8e,	// (0x000810aa) cell_clock2_toolbar_pane_cp01

0x4a8e,	// (0x000810aa) cell_clock2_toolbar_pane_cp02

0x4a96,	// (0x000810b2) cell_clock2_toolbar_pane_cp03

0x4a9e,	// (0x000810ba) list_clock2_pane

0xed26,	// (0x0008b342) scroll_pane_cp10

0x4aa6,	// (0x000810c2) list_single_clock2_pane_ParamLimits

0x4aa6,	// (0x000810c2) list_single_clock2_pane

0xe526,	// (0x0008ab42) list_highlight_pane_cp08

0x4ab3,	// (0x000810cf) list_single_clock2_pane_t1

0x4ac1,	// (0x000810dd) list_single_clock2_pane_t2

0x0001,

0xfab0,	// (0x0008c0cc) list_single_clock2_pane_t

0xdc01,	// (0x0008a21d) bg_button_pane_cp10

0x4acf,	// (0x000810eb) cell_clock2_toolbar_pane_g1

0x8075,	// (0x00084691) aid_main_viewer_pane_g1_ParamLimits

0x8075,	// (0x00084691) aid_main_viewer_pane_g1

0x8081,	// (0x0008469d) aid_main_viewer_pane_g2_ParamLimits

0x8081,	// (0x0008469d) aid_main_viewer_pane_g2

0x808d,	// (0x000846a9) aid_main_viewer_pane_g3_ParamLimits

0x808d,	// (0x000846a9) aid_main_viewer_pane_g3

0x809e,	// (0x000846ba) aid_main_viewer_pane_g4_ParamLimits

0x809e,	// (0x000846ba) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x0008ba2a) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x0008ba2a) aid_main_viewer_pane_g

0x8859,	// (0x00084e75) main_calc_pane_ParamLimits

0x8874,	// (0x00084e90) main_dialer2_pane_ParamLimits

0x5ccb,	// (0x000822e7) main_cam6_pane

0x5ccb,	// (0x000822e7) main_vid6_pane

0x9531,	// (0x00085b4d) listscroll_gen_pane_cp06_ParamLimits

0x9531,	// (0x00085b4d) listscroll_gen_pane_cp06

0x95f9,	// (0x00085c15) main_clock2_pane_t5_ParamLimits

0x95f9,	// (0x00085c15) main_clock2_pane_t5

0x9646,	// (0x00085c62) aid_call2_pane_cp10_ParamLimits

0x9658,	// (0x00085c74) aid_call_pane_cp10_ParamLimits

0xeda4,	// (0x0008b3c0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xeda4,	// (0x0008b3c0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x966a,	// (0x00085c86) popup_clock_analogue_window_cp10_g3_ParamLimits

0x966a,	// (0x00085c86) popup_clock_analogue_window_cp10_g4_ParamLimits

0xeda4,	// (0x0008b3c0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf742,	// (0x0008bd5e) popup_clock_analogue_window_cp10_g_ParamLimits

0x9680,	// (0x00085c9c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x9d75,	// (0x00086391) cell_dialer2_keypad_pane_g2_ParamLimits

0x9d75,	// (0x00086391) cell_dialer2_keypad_pane_g2

0x0001,

0xf822,	// (0x0008be3e) cell_dialer2_keypad_pane_g_ParamLimits

0xf822,	// (0x0008be3e) cell_dialer2_keypad_pane_g

0x9d91,	// (0x000863ad) cell_dialer2_keypad_pane_t1

0xa865,	// (0x00086e81) main_cset_text2_pane_ParamLimits

0xa865,	// (0x00086e81) main_cset_text2_pane

0x291e,	// (0x0007ef3a) area_vitu2_query_pane_g1_ParamLimits

0xb0da,	// (0x000876f6) area_vitu2_query_pane_g2_ParamLimits

0xf9cd,	// (0x0008bfe9) area_vitu2_query_pane_g_ParamLimits

0x29a2,	// (0x0007efbe) area_vitu2_query_pane_t7_ParamLimits

0x29a2,	// (0x0007efbe) area_vitu2_query_pane_t7

0xae25,	// (0x00087441) bg_button_pane_cp018_ParamLimits

0xb13b,	// (0x00087757) bg_button_pane_cp021_ParamLimits

0xb147,	// (0x00087763) bg_button_pane_cp022_ParamLimits

0xb158,	// (0x00087774) bg_vkb2_func_pane_cp08_ParamLimits

0xae25,	// (0x00087441) bg_vkb2_func_pane_cp06_ParamLimits

0xb13b,	// (0x00087757) bg_vkb2_func_pane_cp07_ParamLimits

0xb16a,	// (0x00087786) input_focus_pane_cp09_ParamLimits

0xb5ff,	// (0x00087c1b) cam6_autofocus_pane_ParamLimits

0xb5ff,	// (0x00087c1b) cam6_autofocus_pane

0xb621,	// (0x00087c3d) cam6_image_uncrop_pane_ParamLimits

0xb621,	// (0x00087c3d) cam6_image_uncrop_pane

0xb64e,	// (0x00087c6a) cam6_indi_pane_ParamLimits

0xb64e,	// (0x00087c6a) cam6_indi_pane

0xb668,	// (0x00087c84) cam6_mode_pane_ParamLimits

0xb668,	// (0x00087c84) cam6_mode_pane

0xb67c,	// (0x00087c98) cam6_timer_pane_ParamLimits

0xb67c,	// (0x00087c98) cam6_timer_pane

0xb688,	// (0x00087ca4) cam6_zoom_pane_ParamLimits

0xb688,	// (0x00087ca4) cam6_zoom_pane

0xb6a0,	// (0x00087cbc) cam6_mode_pane_g1_ParamLimits

0xb6a0,	// (0x00087cbc) cam6_mode_pane_g1

0xb6ac,	// (0x00087cc8) cam6_mode_pane_g2_ParamLimits

0xb6ac,	// (0x00087cc8) cam6_mode_pane_g2

0xb6b8,	// (0x00087cd4) cam6_mode_pane_g3_ParamLimits

0xb6b8,	// (0x00087cd4) cam6_mode_pane_g3

0xb6c4,	// (0x00087ce0) cam6_mode_pane_g4_ParamLimits

0xb6c4,	// (0x00087ce0) cam6_mode_pane_g4

0x0003,

0xfab5,	// (0x0008c0d1) cam6_mode_pane_g_ParamLimits

0xfab5,	// (0x0008c0d1) cam6_mode_pane_g

0x48aa,	// (0x00080ec6) bg_tb_trans_pane_cp08_ParamLimits

0x48aa,	// (0x00080ec6) bg_tb_trans_pane_cp08

0x4ad7,	// (0x000810f3) cam6_battery_pane_ParamLimits

0x4ad7,	// (0x000810f3) cam6_battery_pane

0x4aed,	// (0x00081109) cam6_indi_pane_g1_ParamLimits

0x4aed,	// (0x00081109) cam6_indi_pane_g1

0x4aff,	// (0x0008111b) cam6_indi_pane_g2_ParamLimits

0x4aff,	// (0x0008111b) cam6_indi_pane_g2

0x29ea,	// (0x0007f006) cam6_indi_pane_g3_ParamLimits

0x29ea,	// (0x0007f006) cam6_indi_pane_g3

0x0002,

0xfabe,	// (0x0008c0da) cam6_indi_pane_g_ParamLimits

0xfabe,	// (0x0008c0da) cam6_indi_pane_g

0x29fc,	// (0x0007f018) cam6_indi_pane_t1_ParamLimits

0x29fc,	// (0x0007f018) cam6_indi_pane_t1

0xa32d,	// (0x00086949) cam6_autofocus_pane_g1

0xa325,	// (0x00086941) cam6_autofocus_pane_g2

0xa33d,	// (0x00086959) cam6_autofocus_pane_g3

0xa335,	// (0x00086951) cam6_autofocus_pane_g4

0x0003,

0xfac5,	// (0x0008c0e1) cam6_autofocus_pane_g

0x2a22,	// (0x0007f03e) cam6_timer_pane_g1

0x2a2a,	// (0x0007f046) cam6_timer_pane_t1

0x2a38,	// (0x0007f054) cam6_zoom_cont_pane

0x2a40,	// (0x0007f05c) cam6_zoom_pane_g1

0x2a48,	// (0x0007f064) cam6_zoom_pane_g2

0xb6d0,	// (0x00087cec) cam6_zoom_pane_g3

0x0002,

0xface,	// (0x0008c0ea) cam6_zoom_pane_g

0xe548,	// (0x0008ab64) cam6_battery_pane_g1

0xe548,	// (0x0008ab64) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x0008b9da) cam6_battery_pane_g

0x2a50,	// (0x0007f06c) cam6_zoom_cont_pane_g1

0x2a59,	// (0x0007f075) cam6_zoom_cont_pane_g2

0x2a62,	// (0x0007f07e) cam6_zoom_cont_pane_g3

0x0002,

0xfad5,	// (0x0008c0f1) cam6_zoom_cont_pane_g

0xb6ed,	// (0x00087d09) cam6_mode_pane_cp_ParamLimits

0xb6ed,	// (0x00087d09) cam6_mode_pane_cp

0xb701,	// (0x00087d1d) cam6_zoom_pane_cp_ParamLimits

0xb701,	// (0x00087d1d) cam6_zoom_pane_cp

0xb719,	// (0x00087d35) vid6_image_uncrop_cif_pane_ParamLimits

0xb719,	// (0x00087d35) vid6_image_uncrop_cif_pane

0xb745,	// (0x00087d61) vid6_image_uncrop_nhd_pane_ParamLimits

0xb745,	// (0x00087d61) vid6_image_uncrop_nhd_pane

0xb762,	// (0x00087d7e) vid6_image_uncrop_vga_pane_ParamLimits

0xb762,	// (0x00087d7e) vid6_image_uncrop_vga_pane

0xb781,	// (0x00087d9d) vid6_image_uncrop_wvga_pane_ParamLimits

0xb781,	// (0x00087d9d) vid6_image_uncrop_wvga_pane

0xb79e,	// (0x00087dba) vid6_indi_pane_ParamLimits

0xb79e,	// (0x00087dba) vid6_indi_pane

0x48aa,	// (0x00080ec6) bg_tb_trans_pane_cp09_ParamLimits

0x48aa,	// (0x00080ec6) bg_tb_trans_pane_cp09

0x2a7a,	// (0x0007f096) cam6_battery_pane_cp_ParamLimits

0x2a7a,	// (0x0007f096) cam6_battery_pane_cp

0x2a86,	// (0x0007f0a2) vid6_indi_pane_g1_ParamLimits

0x2a86,	// (0x0007f0a2) vid6_indi_pane_g1

0x2a98,	// (0x0007f0b4) vid6_indi_pane_g2_ParamLimits

0x2a98,	// (0x0007f0b4) vid6_indi_pane_g2

0x2aaa,	// (0x0007f0c6) vid6_indi_pane_g3_ParamLimits

0x2aaa,	// (0x0007f0c6) vid6_indi_pane_g3

0x2abf,	// (0x0007f0db) vid6_indi_pane_g4_ParamLimits

0x2abf,	// (0x0007f0db) vid6_indi_pane_g4

0x2ad4,	// (0x0007f0f0) vid6_indi_pane_g5_ParamLimits

0x2ad4,	// (0x0007f0f0) vid6_indi_pane_g5

0x0004,

0xfadc,	// (0x0008c0f8) vid6_indi_pane_g_ParamLimits

0xfadc,	// (0x0008c0f8) vid6_indi_pane_g

0x2aee,	// (0x0007f10a) vid6_indi_pane_t1_ParamLimits

0x2aee,	// (0x0007f10a) vid6_indi_pane_t1

0x2b04,	// (0x0007f120) vid6_indi_pane_t2_ParamLimits

0x2b04,	// (0x0007f120) vid6_indi_pane_t2

0x2b2c,	// (0x0007f148) vid6_indi_pane_t3_ParamLimits

0x2b2c,	// (0x0007f148) vid6_indi_pane_t3

0x2b54,	// (0x0007f170) vid6_indi_pane_t4_ParamLimits

0x2b54,	// (0x0007f170) vid6_indi_pane_t4

0x0003,

0xfae7,	// (0x0008c103) vid6_indi_pane_t_ParamLimits

0xfae7,	// (0x0008c103) vid6_indi_pane_t

0x2b78,	// (0x0007f194) wait_bar_pane_cp08

0xb7c3,	// (0x00087ddf) main_cset_text2_pane_t1_ParamLimits

0xb7c3,	// (0x00087ddf) main_cset_text2_pane_t1

0xb6d8,	// (0x00087cf4) listscroll_gen_pane_cp06_t1_ParamLimits

0xb6d8,	// (0x00087cf4) listscroll_gen_pane_cp06_t1

0x5ccb,	// (0x000822e7) main_cam6_set_pane

0x3511,	// (0x0007fb2d) bg_tb_trans_pane_cp06_ParamLimits

0xa1d5,	// (0x000867f1) cam4_indicators_pane_g1_ParamLimits

0xa1e6,	// (0x00086802) cam4_indicators_pane_g2_ParamLimits

0xf85f,	// (0x0008be7b) cam4_indicators_pane_g_ParamLimits

0xa204,	// (0x00086820) cam4_indicators_pane_t1_ParamLimits

0x8866,	// (0x00084e82) bg_tb_trans_pane_cp07_ParamLimits

0xa2b7,	// (0x000868d3) vid4_indicators_pane_g1_ParamLimits

0xa2cb,	// (0x000868e7) vid4_indicators_pane_g2_ParamLimits

0xa2df,	// (0x000868fb) vid4_indicators_pane_g3_ParamLimits

0xa2f0,	// (0x0008690c) vid4_indicators_pane_g4_ParamLimits

0xf871,	// (0x0008be8d) vid4_indicators_pane_g_ParamLimits

0xa30e,	// (0x0008692a) vid4_indicators_pane_t1_ParamLimits

0xb29a,	// (0x000878b6) vid4_progress_pane_g1_ParamLimits

0xb2aa,	// (0x000878c6) vid4_progress_pane_g2_ParamLimits

0xb2ba,	// (0x000878d6) vid4_progress_pane_g3_ParamLimits

0xb2cc,	// (0x000878e8) vid4_progress_pane_g4_ParamLimits

0xfa18,	// (0x0008c034) vid4_progress_pane_g_ParamLimits

0xb2e4,	// (0x00087900) vid4_progress_pane_t1_ParamLimits

0xb2fa,	// (0x00087916) vid4_progress_pane_t2_ParamLimits

0xb30f,	// (0x0008792b) vid4_progress_pane_t3_ParamLimits

0xfa23,	// (0x0008c03f) vid4_progress_pane_t_ParamLimits

0xb324,	// (0x00087940) wait_bar_pane_cp07_ParamLimits

0xb7f6,	// (0x00087e12) main_cam6_set_pane_g2_ParamLimits

0xb7f6,	// (0x00087e12) main_cam6_set_pane_g2

0xb802,	// (0x00087e1e) main_cset6_listscroll_pane_ParamLimits

0xb802,	// (0x00087e1e) main_cset6_listscroll_pane

0xb82d,	// (0x00087e49) main_cset6_slider_pane_ParamLimits

0xb82d,	// (0x00087e49) main_cset6_slider_pane

0xb839,	// (0x00087e55) main_cset6_text2_pane_ParamLimits

0xb839,	// (0x00087e55) main_cset6_text2_pane

0x2b87,	// (0x0007f1a3) main_cset6_text_pane

0x2b8f,	// (0x0007f1ab) main_cset_list_pane_copy1_ParamLimits

0x2b8f,	// (0x0007f1ab) main_cset_list_pane_copy1

0x2b9f,	// (0x0007f1bb) scroll_pane_cp028_copy1

0xb84c,	// (0x00087e68) cset_list_set_pane_copy1

0xb85f,	// (0x00087e7b) aid_position_infowindow_above_copy1

0xb867,	// (0x00087e83) aid_position_infowindow_below_copy1

0xb86f,	// (0x00087e8b) cset_list_set_pane_g1_copy1

0x26a2,	// (0x0007ecbe) cset_list_set_pane_g3_copy1_ParamLimits

0x26a2,	// (0x0007ecbe) cset_list_set_pane_g3_copy1

0x26b1,	// (0x0007eccd) cset_list_set_pane_t1_copy1_ParamLimits

0x26b1,	// (0x0007eccd) cset_list_set_pane_t1_copy1

0xe29b,	// (0x0008a8b7) list_highlight_pane_cp021_copy1_ParamLimits

0xe29b,	// (0x0008a8b7) list_highlight_pane_cp021_copy1

0x2ba8,	// (0x0007f1c4) cset6_slider_pane_ParamLimits

0x2ba8,	// (0x0007f1c4) cset6_slider_pane

0x2bd4,	// (0x0007f1f0) main_cset6_slider_pane_g1_ParamLimits

0x2bd4,	// (0x0007f1f0) main_cset6_slider_pane_g1

0xb877,	// (0x00087e93) main_cset6_slider_pane_g2_ParamLimits

0xb877,	// (0x00087e93) main_cset6_slider_pane_g2

0x2bfc,	// (0x0007f218) main_cset6_slider_pane_g3_ParamLimits

0x2bfc,	// (0x0007f218) main_cset6_slider_pane_g3

0xb89f,	// (0x00087ebb) main_cset6_slider_pane_g4_ParamLimits

0xb89f,	// (0x00087ebb) main_cset6_slider_pane_g4

0xb8ab,	// (0x00087ec7) main_cset6_slider_pane_g5_ParamLimits

0xb8ab,	// (0x00087ec7) main_cset6_slider_pane_g5

0x25d4,	// (0x0007ebf0) main_cset6_slider_pane_g7_ParamLimits

0x25d4,	// (0x0007ebf0) main_cset6_slider_pane_g7

0x25e0,	// (0x0007ebfc) main_cset6_slider_pane_g8_ParamLimits

0x25e0,	// (0x0007ebfc) main_cset6_slider_pane_g8

0xb8b9,	// (0x00087ed5) main_cset6_slider_pane_g9_ParamLimits

0xb8b9,	// (0x00087ed5) main_cset6_slider_pane_g9

0xb8c5,	// (0x00087ee1) main_cset6_slider_pane_g10_ParamLimits

0xb8c5,	// (0x00087ee1) main_cset6_slider_pane_g10

0xb8d1,	// (0x00087eed) main_cset6_slider_pane_g11_ParamLimits

0xb8d1,	// (0x00087eed) main_cset6_slider_pane_g11

0xb8dd,	// (0x00087ef9) main_cset6_slider_pane_g12_ParamLimits

0xb8dd,	// (0x00087ef9) main_cset6_slider_pane_g12

0xb8e9,	// (0x00087f05) main_cset6_slider_pane_g13_ParamLimits

0xb8e9,	// (0x00087f05) main_cset6_slider_pane_g13

0xb8f5,	// (0x00087f11) main_cset6_slider_pane_g14_ParamLimits

0xb8f5,	// (0x00087f11) main_cset6_slider_pane_g14

0xb901,	// (0x00087f1d) main_cset6_slider_pane_g15_ParamLimits

0xb901,	// (0x00087f1d) main_cset6_slider_pane_g15

0xb919,	// (0x00087f35) main_cset6_slider_pane_g16_ParamLimits

0xb919,	// (0x00087f35) main_cset6_slider_pane_g16

0xb927,	// (0x00087f43) main_cset6_slider_pane_g17_ParamLimits

0xb927,	// (0x00087f43) main_cset6_slider_pane_g17

0x0011,

0xfaf0,	// (0x0008c10c) main_cset6_slider_pane_g_ParamLimits

0xfaf0,	// (0x0008c10c) main_cset6_slider_pane_g

0x2c08,	// (0x0007f224) main_cset6_slider_pane_t1_ParamLimits

0x2c08,	// (0x0007f224) main_cset6_slider_pane_t1

0xb94d,	// (0x00087f69) main_cset6_slider_pane_t2_ParamLimits

0xb94d,	// (0x00087f69) main_cset6_slider_pane_t2

0xb978,	// (0x00087f94) main_cset6_slider_pane_t3_ParamLimits

0xb978,	// (0x00087f94) main_cset6_slider_pane_t3

0xb9a3,	// (0x00087fbf) main_cset6_slider_pane_t4_ParamLimits

0xb9a3,	// (0x00087fbf) main_cset6_slider_pane_t4

0xb9ce,	// (0x00087fea) main_cset6_slider_pane_t5_ParamLimits

0xb9ce,	// (0x00087fea) main_cset6_slider_pane_t5

0x2c49,	// (0x0007f265) main_cset6_slider_pane_t7_ParamLimits

0x2c49,	// (0x0007f265) main_cset6_slider_pane_t7

0xb9fb,	// (0x00088017) main_cset6_slider_pane_t8_ParamLimits

0xb9fb,	// (0x00088017) main_cset6_slider_pane_t8

0xba1f,	// (0x0008803b) main_cset6_slider_pane_t9_ParamLimits

0xba1f,	// (0x0008803b) main_cset6_slider_pane_t9

0xba43,	// (0x0008805f) main_cset6_slider_pane_t10_ParamLimits

0xba43,	// (0x0008805f) main_cset6_slider_pane_t10

0xba67,	// (0x00088083) main_cset6_slider_pane_t11_ParamLimits

0xba67,	// (0x00088083) main_cset6_slider_pane_t11

0x2c7f,	// (0x0007f29b) main_cset6_slider_pane_t14_ParamLimits

0x2c7f,	// (0x0007f29b) main_cset6_slider_pane_t14

0x2cb8,	// (0x0007f2d4) main_cset6_slider_pane_t15_ParamLimits

0x2cb8,	// (0x0007f2d4) main_cset6_slider_pane_t15

0x000b,

0xfb15,	// (0x0008c131) main_cset6_slider_pane_t_ParamLimits

0xfb15,	// (0x0008c131) main_cset6_slider_pane_t

0x48b8,	// (0x00080ed4) cset_slider_pane_g1_copy1

0x48c1,	// (0x00080edd) cset_slider_pane_g2_copy1

0x48ca,	// (0x00080ee6) cset_slider_pane_g3_copy1

0xdc01,	// (0x0008a21d) bg_popup_sub_pane_cp011_copy1

0x2cf1,	// (0x0007f30d) main_cset_text_pane_g1_copy1

0x2746,	// (0x0007ed62) main_cset_text_pane_t1_copy1

0x2754,	// (0x0007ed70) main_cset_text_pane_t2_copy1

0x2762,	// (0x0007ed7e) main_cset_text_pane_t3_copy1

0x2770,	// (0x0007ed8c) main_cset_text_pane_t4_copy1

0x277e,	// (0x0007ed9a) main_cset_text_pane_t5_copy1

0x2cf9,	// (0x0007f315) main_cset_text_pane_t6_copy1

0x2d07,	// (0x0007f323) main_cset_text_pane_t7_copy1

0xbaa8,	// (0x000880c4) main_cset_text2_pane_t1_copy1

0x8866,	// (0x00084e82) main_ncimui_pane

0x88c5,	// (0x00084ee1) popup_query_ncimui_window_ParamLimits

0x88c5,	// (0x00084ee1) popup_query_ncimui_window

0x1e42,	// (0x0007e45e) field_cale_ev2_pane_g4_ParamLimits

0x1e42,	// (0x0007e45e) field_cale_ev2_pane_g4

0x9a55,	// (0x00086071) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9a55,	// (0x00086071) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7f9,	// (0x0008be15) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7f9,	// (0x0008be15) cell_video_dialer_keypad_pane_g

0x9a6d,	// (0x00086089) cell_video_dialer_keypad_pane_t1

0xdc01,	// (0x0008a21d) bg_popup_window_pane_cp012

0x1644,	// (0x0007dc60) heading_pane_cp06

0x2d33,	// (0x0007f34f) ncim_query_content_pane

0xdc01,	// (0x0008a21d) bg_popup_heading_pane_cp01

0x2d3b,	// (0x0007f357) ncim_heading_pane_t1

0x2d49,	// (0x0007f365) ncim_indicator_popup_pane

0x2d5b,	// (0x0007f377) ncim_query_button_pane

0x2d6f,	// (0x0007f38b) ncim_query_content_pane_t1

0x2d81,	// (0x0007f39d) ncim_query_content_pane_t2

0x0005,

0xfb59,	// (0x0008c175) ncim_query_content_pane_t

0x2dbb,	// (0x0007f3d7) ncim_query_list_pane

0x2dcd,	// (0x0007f3e9) ncim_query_popup_pane

0x2d49,	// (0x0007f365) ncim_indicator_popup_pane_ParamLimits

0xbbfb,	// (0x00088217) ncim_query_content_pane_g1_ParamLimits

0xbbfb,	// (0x00088217) ncim_query_content_pane_g1

0x2d6f,	// (0x0007f38b) ncim_query_content_pane_t1_ParamLimits

0x2d81,	// (0x0007f39d) ncim_query_content_pane_t2_ParamLimits

0xbc07,	// (0x00088223) ncim_query_content_pane_t3_ParamLimits

0xbc07,	// (0x00088223) ncim_query_content_pane_t3

0xbc24,	// (0x00088240) ncim_query_content_pane_t4_ParamLimits

0xbc24,	// (0x00088240) ncim_query_content_pane_t4

0xbc41,	// (0x0008825d) ncim_query_content_pane_t5_ParamLimits

0xbc41,	// (0x0008825d) ncim_query_content_pane_t5

0x2d93,	// (0x0007f3af) ncim_query_content_pane_t6_ParamLimits

0x2d93,	// (0x0007f3af) ncim_query_content_pane_t6

0xfb59,	// (0x0008c175) ncim_query_content_pane_t_ParamLimits

0x2dbb,	// (0x0007f3d7) ncim_query_list_pane_ParamLimits

0x2dcd,	// (0x0007f3e9) ncim_query_popup_pane_ParamLimits

0x2de1,	// (0x0007f3fd) wait_bar_pane_cp04

0xdc01,	// (0x0008a21d) input_focus_pane_cp011

0x2de9,	// (0x0007f405) ncim_query_popup_pane_t1

0x2df7,	// (0x0007f413) ncim_list_query_list_pane_ParamLimits

0x2df7,	// (0x0007f413) ncim_list_query_list_pane

0xdc01,	// (0x0008a21d) bg_button_pane_cp027

0x2e04,	// (0x0007f420) ncim_query_button_pane_g1

0xdc01,	// (0x0008a21d) list_highlight_pane_cp012

0x2e0e,	// (0x0007f42a) ncim_list_query_list_pane_g1

0x2e16,	// (0x0007f432) ncim_list_query_list_pane_t1

0xa1f5,	// (0x00086811) cam4_indicators_pane_g3_ParamLimits

0xa1f5,	// (0x00086811) cam4_indicators_pane_g3

0xa2fc,	// (0x00086918) vid4_indicators_pane_g5_ParamLimits

0xa2fc,	// (0x00086918) vid4_indicators_pane_g5

0xb2d8,	// (0x000878f4) vid4_progress_pane_g5_ParamLimits

0xb2d8,	// (0x000878f4) vid4_progress_pane_g5

0xbae7,	// (0x00088103) main_ncimui_pane_g1

0xbb4f,	// (0x0008816b) ncimui_group_query_pane_ParamLimits

0xbb4f,	// (0x0008816b) ncimui_group_query_pane

0xbb97,	// (0x000881b3) ncimui_list_pane_ParamLimits

0xbb97,	// (0x000881b3) ncimui_list_pane

0xbbbe,	// (0x000881da) ncimui_text_pane_ParamLimits

0xbbbe,	// (0x000881da) ncimui_text_pane

0xbc5e,	// (0x0008827a) ncimui_text_pane_t1_ParamLimits

0xbc5e,	// (0x0008827a) ncimui_text_pane_t1

0x2e24,	// (0x0007f440) ncimui_list_single_graphic_pane_ParamLimits

0x2e24,	// (0x0007f440) ncimui_list_single_graphic_pane

0xbc7d,	// (0x00088299) ncimui_query_pane_ParamLimits

0xbc7d,	// (0x00088299) ncimui_query_pane

0xdc01,	// (0x0008a21d) list_highlight_pane_cp013

0x2e34,	// (0x0007f450) ncim_list_query_list_pane_t1_copy1

0x2e0e,	// (0x0007f42a) ncim_list_single_graphic_pane_g1

0xbc90,	// (0x000882ac) ncim_query_button_pane_cp01

0xbc9c,	// (0x000882b8) ncim_query_entry_pane_ParamLimits

0xbc9c,	// (0x000882b8) ncim_query_entry_pane

0xbcaf,	// (0x000882cb) ncimui_query_pane_g1

0xbcbb,	// (0x000882d7) ncimui_query_pane_t1_ParamLimits

0xbcbb,	// (0x000882d7) ncimui_query_pane_t1

0xe29b,	// (0x0008a8b7) input_focus_pane_cp012

0x2e42,	// (0x0007f45e) ncim_query_entry_pane_t1

0xe374,	// (0x0008a990) main_im_pane_ParamLimits

0x8866,	// (0x00084e82) main_mobtv_pane_ParamLimits

0x8866,	// (0x00084e82) main_mobtv_pane

0xb935,	// (0x00087f51) main_cset6_slider_pane_g18_ParamLimits

0xb935,	// (0x00087f51) main_cset6_slider_pane_g18

0xb941,	// (0x00087f5d) main_cset6_slider_pane_g19_ParamLimits

0xb941,	// (0x00087f5d) main_cset6_slider_pane_g19

0xf051,	// (0x0008b66d) bg_main_mobtv_pane_ParamLimits

0xf051,	// (0x0008b66d) bg_main_mobtv_pane

0xbcd4,	// (0x000882f0) main_mobtv_info_pane

0xbcdf,	// (0x000882fb) main_mobtv_loading_pane_ParamLimits

0xbcdf,	// (0x000882fb) main_mobtv_loading_pane

0x2e54,	// (0x0007f470) main_mobtv_pg_channel_list_pane

0x2e5e,	// (0x0007f47a) main_mobtv_pg_hdr_pane

0xbcec,	// (0x00088308) main_mobtv_programe_curr_pane_ParamLimits

0xbcec,	// (0x00088308) main_mobtv_programe_curr_pane

0xbcf9,	// (0x00088315) main_mobtv_programe_next_pane_ParamLimits

0xbcf9,	// (0x00088315) main_mobtv_programe_next_pane

0x2e67,	// (0x0007f483) popup_mobtv_noti_window

0xe548,	// (0x0008ab64) main_tv_pg_hdr_pane_g1

0x2e6f,	// (0x0007f48b) main_tv_pg_hdr_pane_g2

0x2e77,	// (0x0007f493) main_tv_pg_hdr_pane_g3

0x2e7f,	// (0x0007f49b) main_tv_pg_hdr_pane_g4

0x2e87,	// (0x0007f4a3) main_tv_pg_hdr_pane_g5

0x2e91,	// (0x0007f4ad) main_tv_pg_hdr_pane_g6

0x2e9b,	// (0x0007f4b7) main_tv_pg_hdr_pane_g7

0x2ea5,	// (0x0007f4c1) main_tv_pg_hdr_pane_g8

0x2eaf,	// (0x0007f4cb) main_tv_pg_hdr_pane_g9

0x2eb9,	// (0x0007f4d5) main_tv_pg_hdr_pane_g10

0x2ec3,	// (0x0007f4df) main_tv_pg_hdr_pane_g11

0x000a,

0xfb66,	// (0x0008c182) main_tv_pg_hdr_pane_g

0x2ecd,	// (0x0007f4e9) main_tv_pg_hdr_pane_t1

0x2edb,	// (0x0007f4f7) main_tv_pg_hdr_pane_t2

0x2ee9,	// (0x0007f505) main_tv_pg_hdr_pane_t3

0x2ef9,	// (0x0007f515) main_tv_pg_hdr_pane_t4

0x2f09,	// (0x0007f525) main_tv_pg_hdr_pane_t5

0x0004,

0xfb7d,	// (0x0008c199) main_tv_pg_hdr_pane_t

0x2f19,	// (0x0007f535) single_mobtv_pg_channel_pane_ParamLimits

0x2f19,	// (0x0007f535) single_mobtv_pg_channel_pane

0x2f2b,	// (0x0007f547) single_mobtv_pg_channel_table_pane

0x2f34,	// (0x0007f550) single_mobtv_pg_channel_thumb_pane

0x2f3d,	// (0x0007f559) single_tv_pg_channel_pane_g1

0x2f46,	// (0x0007f562) single_tv_pg_channel_pane_g2

0x0001,

0xfb88,	// (0x0008c1a4) single_tv_pg_channel_pane_g

0xe302,	// (0x0008a91e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe302,	// (0x0008a91e) bg_single_mobtv_pg_channel_thumb_pane

0x2f4f,	// (0x0007f56b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2f4f,	// (0x0007f56b) single_mobtv_pg_channel_thumb_pane_g1

0x2f5d,	// (0x0007f579) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2f5d,	// (0x0007f579) single_mobtv_pg_channel_thumb_pane_g2

0x2f69,	// (0x0007f585) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2f69,	// (0x0007f585) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb8d,	// (0x0008c1a9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb8d,	// (0x0008c1a9) single_mobtv_pg_channel_thumb_pane_g

0x2f75,	// (0x0007f591) single_mobtv_pg_channel_thumb_pane_t1

0x2f83,	// (0x0007f59f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb94,	// (0x0008c1b0) single_mobtv_pg_channel_thumb_pane_t

0xe548,	// (0x0008ab64) bg_single_mobtv_pg_channel_table_pane_g1

0xe548,	// (0x0008ab64) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x0008b9da) bg_single_mobtv_pg_channel_table_pane_g

0x2f91,	// (0x0007f5ad) single_mobtv_pg_channel_table_pane_t1

0x2f9f,	// (0x0007f5bb) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb99,	// (0x0008c1b5) single_mobtv_pg_channel_table_pane_t

0xbd0e,	// (0x0008832a) main_mobtv_info_pane_g1_ParamLimits

0xbd0e,	// (0x0008832a) main_mobtv_info_pane_g1

0xbd2a,	// (0x00088346) main_mobtv_info_pane_t1_ParamLimits

0xbd2a,	// (0x00088346) main_mobtv_info_pane_t1

0xbda2,	// (0x000883be) main_mobtv_info_pane_t2_ParamLimits

0xbda2,	// (0x000883be) main_mobtv_info_pane_t2

0x0002,

0xfba3,	// (0x0008c1bf) main_mobtv_info_pane_t_ParamLimits

0xfba3,	// (0x0008c1bf) main_mobtv_info_pane_t

0xbe31,	// (0x0008844d) wait_bar_pane_cp05

0xbe43,	// (0x0008845f) main_mobtv_loading_pane_g1_ParamLimits

0xbe43,	// (0x0008845f) main_mobtv_loading_pane_g1

0xbe51,	// (0x0008846d) main_mobtv_loading_pane_g2_ParamLimits

0xbe51,	// (0x0008846d) main_mobtv_loading_pane_g2

0xbe5d,	// (0x00088479) main_mobtv_loading_pane_g3_ParamLimits

0xbe5d,	// (0x00088479) main_mobtv_loading_pane_g3

0x0002,

0xfbaa,	// (0x0008c1c6) main_mobtv_loading_pane_g_ParamLimits

0xfbaa,	// (0x0008c1c6) main_mobtv_loading_pane_g

0x2fad,	// (0x0007f5c9) main_mobtv_loading_pane_t1_ParamLimits

0x2fad,	// (0x0007f5c9) main_mobtv_loading_pane_t1

0x2fc5,	// (0x0007f5e1) main_mobtv_loading_pane_t2_ParamLimits

0x2fc5,	// (0x0007f5e1) main_mobtv_loading_pane_t2

0x0001,

0xfbb1,	// (0x0008c1cd) main_mobtv_loading_pane_t_ParamLimits

0xfbb1,	// (0x0008c1cd) main_mobtv_loading_pane_t

0xbe6b,	// (0x00088487) wait_bar_pane_cp06_ParamLimits

0xbe6b,	// (0x00088487) wait_bar_pane_cp06

0x2fe9,	// (0x0007f605) main_mobtv_programe_curr_pane_t1

0x2ff7,	// (0x0007f613) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbb6,	// (0x0008c1d2) main_mobtv_programe_curr_pane_t

0x3005,	// (0x0007f621) main_mobtv_programe_next_pane_t1

0x3013,	// (0x0007f62f) main_mobtv_programe_next_pane_t2

0x3021,	// (0x0007f63d) main_mobtv_programe_next_pane_t3

0x0002,

0xfbbb,	// (0x0008c1d7) main_mobtv_programe_next_pane_t

0xdc01,	// (0x0008a21d) bg_popup_mobtv_noti_window_pane

0x302f,	// (0x0007f64b) popup_mobtv_noti_window_g1

0x3037,	// (0x0007f653) popup_mobtv_noti_window_t1

0x3045,	// (0x0007f661) popup_mobtv_noti_window_t2

0x0001,

0xfbc2,	// (0x0008c1de) popup_mobtv_noti_window_t

0xe548,	// (0x0008ab64) bg_popup_mobtv_noti_window_pane_g1

0x5ccb,	// (0x000822e7) sc_clock_pane

0x5ccb,	// (0x000822e7) main_fs_bigclock_pane

0xb4b2,	// (0x00087ace) blid2_tripm_pane_t4_ParamLimits

0xb4b2,	// (0x00087ace) blid2_tripm_pane_t4

0xbe77,	// (0x00088493) sc_clock_pane_g1_ParamLimits

0xbe77,	// (0x00088493) sc_clock_pane_g1

0xbe85,	// (0x000884a1) sc_clock_pane_t1_ParamLimits

0xbe85,	// (0x000884a1) sc_clock_pane_t1

0xbe98,	// (0x000884b4) sc_clock_pane_t2_ParamLimits

0xbe98,	// (0x000884b4) sc_clock_pane_t2

0xbeaa,	// (0x000884c6) sc_clock_pane_t3_ParamLimits

0xbeaa,	// (0x000884c6) sc_clock_pane_t3

0x0004,

0xfbc7,	// (0x0008c1e3) sc_clock_pane_t_ParamLimits

0xfbc7,	// (0x0008c1e3) sc_clock_pane_t

0xca7f,	// (0x0008909b) main_fs_bigclock_indicator_pane_ParamLimits

0xca7f,	// (0x0008909b) main_fs_bigclock_indicator_pane

0xbf2d,	// (0x00088549) main_fs_bigclock_pane_g1_ParamLimits

0xbf2d,	// (0x00088549) main_fs_bigclock_pane_g1

0xca8b,	// (0x000890a7) main_fs_bigclock_pane_t1_ParamLimits

0xca8b,	// (0x000890a7) main_fs_bigclock_pane_t1

0xca9d,	// (0x000890b9) main_fs_bigclock_pane_t2_ParamLimits

0xca9d,	// (0x000890b9) main_fs_bigclock_pane_t2

0xcab1,	// (0x000890cd) main_fs_bigclock_pane_t3_ParamLimits

0xcab1,	// (0x000890cd) main_fs_bigclock_pane_t3

0x0002,

0xfd58,	// (0x0008c374) main_fs_bigclock_pane_t_ParamLimits

0xfd58,	// (0x0008c374) main_fs_bigclock_pane_t

0x3bd8,	// (0x000801f4) main_fs_bigclock_indicator_pane_g1

0x2d63,	// (0x0007f37f) ncim_query_content_pane_g2_ParamLimits

0x2d63,	// (0x0007f37f) ncim_query_content_pane_g2

0x0001,

0xfb54,	// (0x0008c170) ncim_query_content_pane_g_ParamLimits

0xfb54,	// (0x0008c170) ncim_query_content_pane_g

0xbebe,	// (0x000884da) sc_clock_pane_t4_ParamLimits

0xbebe,	// (0x000884da) sc_clock_pane_t4

0x8866,	// (0x00084e82) main_radioblah_pane

0xa098,	// (0x000866b4) cell_call4_button_pane_t1_copy1_ParamLimits

0xa098,	// (0x000866b4) cell_call4_button_pane_t1_copy1

0xbb01,	// (0x0008811d) main_ncimui_pane_t1_ParamLimits

0xbb01,	// (0x0008811d) main_ncimui_pane_t1

0xbb1b,	// (0x00088137) main_ncimui_pane_t2_ParamLimits

0xbb1b,	// (0x00088137) main_ncimui_pane_t2

0x0002,

0xfb4d,	// (0x0008c169) main_ncimui_pane_t_ParamLimits

0xfb4d,	// (0x0008c169) main_ncimui_pane_t

0x318a,	// (0x0007f7a6) main_radioblah_anim_pane_ParamLimits

0x318a,	// (0x0007f7a6) main_radioblah_anim_pane

0x319b,	// (0x0007f7b7) main_radioblah_info_pane_ParamLimits

0x319b,	// (0x0007f7b7) main_radioblah_info_pane

0x31af,	// (0x0007f7cb) main_radioblah_pane_t1_ParamLimits

0x31af,	// (0x0007f7cb) main_radioblah_pane_t1

0x31cb,	// (0x0007f7e7) main_radioblah_pane_t2_ParamLimits

0x31cb,	// (0x0007f7e7) main_radioblah_pane_t2

0x0003,

0xfbe8,	// (0x0008c204) main_radioblah_pane_t_ParamLimits

0xfbe8,	// (0x0008c204) main_radioblah_pane_t

0xbf83,	// (0x0008859f) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbf83,	// (0x0008859f) main_radioblah_rocker_ctrl_pane

0x3213,	// (0x0007f82f) main_radioblah_info_pane_t1_ParamLimits

0x3213,	// (0x0007f82f) main_radioblah_info_pane_t1

0xbfc8,	// (0x000885e4) main_radioblah_info_pane_t2_ParamLimits

0xbfc8,	// (0x000885e4) main_radioblah_info_pane_t2

0x0003,

0xfbf1,	// (0x0008c20d) main_radioblah_info_pane_t_ParamLimits

0xfbf1,	// (0x0008c20d) main_radioblah_info_pane_t

0xe548,	// (0x0008ab64) main_radioblah_rocker_ctrl_pane_g1

0xc078,	// (0x00088694) main_radioblah_rocker_ctrl_pane_g2

0xc080,	// (0x0008869c) main_radioblah_rocker_ctrl_pane_g3

0xc088,	// (0x000886a4) main_radioblah_rocker_ctrl_pane_g4

0xc090,	// (0x000886ac) main_radioblah_rocker_ctrl_pane_g5

0xc098,	// (0x000886b4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbfa,	// (0x0008c216) main_radioblah_rocker_ctrl_pane_g

0xbaa8,	// (0x000880c4) main_cset_text2_pane_t1_copy1_ParamLimits

0xa123,	// (0x0008673f) cam4_image_uncrop_qvga_pane

0xa26a,	// (0x00086886) vid4_image_uncrop_qcif_pane

0xb640,	// (0x00087c5c) cam6_image_uncrop_qvga_pane_ParamLimits

0xb640,	// (0x00087c5c) cam6_image_uncrop_qvga_pane

0x2a6a,	// (0x0007f086) vid6_image_uncrop_qcif_pane_ParamLimits

0x2a6a,	// (0x0007f086) vid6_image_uncrop_qcif_pane

0xdc01,	// (0x0008a21d) bg_popup_preview_window_pane_cp03

0x2d15,	// (0x0007f331) list_cset_text2_pane

0x2d1d,	// (0x0007f339) main_cset6_text2_pane_g1

0x2d25,	// (0x0007f341) main_cset6_text2_pane_t1

0xc0a0,	// (0x000886bc) list_cset_text2_pane_t1_ParamLimits

0xc0a0,	// (0x000886bc) list_cset_text2_pane_t1

0x8866,	// (0x00084e82) main_radioblah_pane_ParamLimits

0xbe1d,	// (0x00088439) main_mobtv_info_pane_t3_ParamLimits

0xbe1d,	// (0x00088439) main_mobtv_info_pane_t3

0xbf71,	// (0x0008858d) main_radioblah_pane_g1

0xbf9c,	// (0x000885b8) main_radioblah_info_pane_g1

0xc01d,	// (0x00088639) main_radioblah_info_pane_t3_ParamLimits

0xc01d,	// (0x00088639) main_radioblah_info_pane_t3

0x784e,	// (0x00083e6a) highlight_cell_cale_month_pane_ParamLimits

0x784e,	// (0x00083e6a) highlight_cell_cale_month_pane

0x5ccb,	// (0x000822e7) main_phob_fisheye_pane

0x1ee3,	// (0x0007e4ff) scroll_pane_cp0031_ParamLimits

0x1ee3,	// (0x0007e4ff) scroll_pane_cp0031

0x2b78,	// (0x0007f194) wait_bar_pane_cp08_ParamLimits

0xb84c,	// (0x00087e68) cset_list_set_pane_copy1_ParamLimits

0x324d,	// (0x0007f869) highlight_cell_cale_month_pane_g1

0xc0bd,	// (0x000886d9) highlight_cell_cale_month_pane_t1

0x491b,	// (0x00080f37) list_gen_pane_cp01

0x25bf,	// (0x0007ebdb) scroll_pane_01

0xc0cb,	// (0x000886e7) list_single_double_fisheye_pane

0xc0d4,	// (0x000886f0) list_double_fisheye_pane_g1_ParamLimits

0xc0d4,	// (0x000886f0) list_double_fisheye_pane_g1

0xc0e0,	// (0x000886fc) list_double_fisheye_pane_g2_ParamLimits

0xc0e0,	// (0x000886fc) list_double_fisheye_pane_g2

0xc0f4,	// (0x00088710) list_double_fisheye_pane_g3_ParamLimits

0xc0f4,	// (0x00088710) list_double_fisheye_pane_g3

0x0004,

0xfc07,	// (0x0008c223) list_double_fisheye_pane_g_ParamLimits

0xfc07,	// (0x0008c223) list_double_fisheye_pane_g

0xc11d,	// (0x00088739) list_double_fisheye_pane_t1_ParamLimits

0xc11d,	// (0x00088739) list_double_fisheye_pane_t1

0xc138,	// (0x00088754) list_double_fisheye_pane_t2_ParamLimits

0xc138,	// (0x00088754) list_double_fisheye_pane_t2

0x0001,

0xfc12,	// (0x0008c22e) list_double_fisheye_pane_t_ParamLimits

0xfc12,	// (0x0008c22e) list_double_fisheye_pane_t

0x5ccb,	// (0x000822e7) main_call5_pane

0xbee4,	// (0x00088500) sc_swipe_pane_ParamLimits

0xbee4,	// (0x00088500) sc_swipe_pane

0xc166,	// (0x00088782) call5_image_pane_ParamLimits

0xc166,	// (0x00088782) call5_image_pane

0xc176,	// (0x00088792) call5_swipe_1_pane_ParamLimits

0xc176,	// (0x00088792) call5_swipe_1_pane

0xc182,	// (0x0008879e) call5_swipe_2_pane_ParamLimits

0xc182,	// (0x0008879e) call5_swipe_2_pane

0xc19c,	// (0x000887b8) popup_call5_audio_first_window_ParamLimits

0xc19c,	// (0x000887b8) popup_call5_audio_first_window

0xe302,	// (0x0008a91e) call5_swipe_1_pane_g1_ParamLimits

0xe302,	// (0x0008a91e) call5_swipe_1_pane_g1

0x3255,	// (0x0007f871) call5_swipe_1_pane_g2_ParamLimits

0x3255,	// (0x0007f871) call5_swipe_1_pane_g2

0x0001,

0xfc17,	// (0x0008c233) call5_swipe_1_pane_g_ParamLimits

0xfc17,	// (0x0008c233) call5_swipe_1_pane_g

0x3261,	// (0x0007f87d) call5_swipe_1_pane_t1_ParamLimits

0x3261,	// (0x0007f87d) call5_swipe_1_pane_t1

0xe302,	// (0x0008a91e) call5_swipe_2_pane_g1_ParamLimits

0xe302,	// (0x0008a91e) call5_swipe_2_pane_g1

0x3276,	// (0x0007f892) call5_swipe_2_pane_g2_ParamLimits

0x3276,	// (0x0007f892) call5_swipe_2_pane_g2

0x0001,

0xfc1c,	// (0x0008c238) call5_swipe_2_pane_g_ParamLimits

0xfc1c,	// (0x0008c238) call5_swipe_2_pane_g

0x3282,	// (0x0007f89e) call5_swipe_2_pane_t1_ParamLimits

0x3282,	// (0x0007f89e) call5_swipe_2_pane_t1

0x3297,	// (0x0007f8b3) sc_swipe_pane_g1_ParamLimits

0x3297,	// (0x0007f8b3) sc_swipe_pane_g1

0x32a4,	// (0x0007f8c0) sc_swipe_pane_g2_ParamLimits

0x32a4,	// (0x0007f8c0) sc_swipe_pane_g2

0x0001,

0xfc21,	// (0x0008c23d) sc_swipe_pane_g_ParamLimits

0xfc21,	// (0x0008c23d) sc_swipe_pane_g

0x32b0,	// (0x0007f8cc) sc_swipe_pane_t1_ParamLimits

0x32b0,	// (0x0007f8cc) sc_swipe_pane_t1

0x5ccb,	// (0x000822e7) main_cmail_launcher_pane

0xc1aa,	// (0x000887c6) aid_size_cell_cmail_l_ParamLimits

0xc1aa,	// (0x000887c6) aid_size_cell_cmail_l

0xc1b8,	// (0x000887d4) grid_cmail_l_pane_ParamLimits

0xc1b8,	// (0x000887d4) grid_cmail_l_pane

0xc1c8,	// (0x000887e4) cell_cmail_l_pane_ParamLimits

0xc1c8,	// (0x000887e4) cell_cmail_l_pane

0x32c5,	// (0x0007f8e1) cell_cmail_l_pane_g1_ParamLimits

0x32c5,	// (0x0007f8e1) cell_cmail_l_pane_g1

0x32d1,	// (0x0007f8ed) cell_cmail_l_pane_t1_ParamLimits

0x32d1,	// (0x0007f8ed) cell_cmail_l_pane_t1

0x32e7,	// (0x0007f903) cell_cmail_l_pane_t2_ParamLimits

0x32e7,	// (0x0007f903) cell_cmail_l_pane_t2

0x0001,

0xfc26,	// (0x0008c242) cell_cmail_l_pane_t_ParamLimits

0xfc26,	// (0x0008c242) cell_cmail_l_pane_t

0xe29b,	// (0x0008a8b7) grid_highlight_pane_cp018_ParamLimits

0xe29b,	// (0x0008a8b7) grid_highlight_pane_cp018

0x5b21,	// (0x0008213d) main2_pane_ParamLimits

0x5b21,	// (0x0008213d) main2_pane

0xe403,	// (0x0008aa1f) popup_sp_fs_action_menu_bg_pane_g1

0xe40b,	// (0x0008aa27) popup_sp_fs_action_menu_bg_pane_g2

0xe413,	// (0x0008aa2f) popup_sp_fs_action_menu_bg_pane_g3

0xe41b,	// (0x0008aa37) popup_sp_fs_action_menu_bg_pane_g4

0xe423,	// (0x0008aa3f) popup_sp_fs_action_menu_bg_pane_g5

0xe42b,	// (0x0008aa47) popup_sp_fs_action_menu_bg_pane_g6

0xe433,	// (0x0008aa4f) popup_sp_fs_action_menu_bg_pane_g7

0xe43b,	// (0x0008aa57) popup_sp_fs_action_menu_bg_pane_g8

0xe443,	// (0x0008aa5f) popup_sp_fs_action_menu_bg_pane_g9

0xe44b,	// (0x0008aa67) popup_sp_fs_action_menu_bg_pane_g10

0xe44b,	// (0x0008aa67) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x0008b747) popup_sp_fs_action_menu_bg_pane_g

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g3_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g3_g1

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g3_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g3_g2

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g3_g3_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x0008b7f5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x0008b7f5) list_medium_line_x2_t3_g3_g

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g3_t1

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g3_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g3_t2

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x0008b7fc) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x0008b7fc) list_medium_line_x2_t3_g3_t

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g2_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g2_g1

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g2_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1db,	// (0x0008b7f7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1db,	// (0x0008b7f7) list_medium_line_x2_t3_g2_g

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g2_t1

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g2_t2

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x0008b7fc) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x0008b7fc) list_medium_line_x2_t3_g2_t

0xe302,	// (0x0008a91e) list_medium_line_x2_t4_g4_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t4_g4_g1

0xe302,	// (0x0008a91e) list_medium_line_x2_t4_g4_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t4_g4_g2

0xe302,	// (0x0008a91e) list_medium_line_x2_t4_g4_g3_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t4_g4_g3

0xe302,	// (0x0008a91e) list_medium_line_x2_t4_g4_g4_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1e7,	// (0x0008b803) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1e7,	// (0x0008b803) list_medium_line_x2_t4_g4_g

0xe562,	// (0x0008ab7e) list_medium_line_x2_t4_g4_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t4_g4_t1

0xe562,	// (0x0008ab7e) list_medium_line_x2_t4_g4_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t4_g4_t2

0xe562,	// (0x0008ab7e) list_medium_line_x2_t4_g4_t3_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t4_g4_t3

0xe562,	// (0x0008ab7e) list_medium_line_x2_t4_g4_t4_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f0,	// (0x0008b80c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f0,	// (0x0008b80c) list_medium_line_x2_t4_g4_t

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g4_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g4_g1

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g4_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g4_g2

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g4_g3_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g4_g3

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g4_g4_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1e7,	// (0x0008b803) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1e7,	// (0x0008b803) list_medium_line_x2_t2_g4_g

0xe562,	// (0x0008ab7e) list_medium_line_x2_t2_g4_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t2_g4_t1

0xe562,	// (0x0008ab7e) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf257,	// (0x0008b873) list_medium_line_x2_t2_g4_t_ParamLimits

0xf257,	// (0x0008b873) list_medium_line_x2_t2_g4_t

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g3_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g3_g1

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g3_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g3_g2

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g3_g3_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x0008b7f5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x0008b7f5) list_medium_line_x2_t2_g3_g

0xe562,	// (0x0008ab7e) list_medium_line_x2_t2_g3_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t2_g3_t1

0xe562,	// (0x0008ab7e) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf257,	// (0x0008b873) list_medium_line_x2_t2_g3_t_ParamLimits

0xf257,	// (0x0008b873) list_medium_line_x2_t2_g3_t

0x7a1e,	// (0x0008403a) main_sp_fs_list_pane_ParamLimits

0x7a1e,	// (0x0008403a) main_sp_fs_list_pane

0x7a2a,	// (0x00084046) sp_fs_scroll_pane_ParamLimits

0x7a2a,	// (0x00084046) sp_fs_scroll_pane

0xea78,	// (0x0008b094) list_medium_line_x2_t3_t1

0xea78,	// (0x0008b094) list_medium_line_x2_t3_t2

0xea78,	// (0x0008b094) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x0008b8be) list_medium_line_x2_t3_t

0xea78,	// (0x0008b094) list_medium_line_x3_t4_t1

0xea78,	// (0x0008b094) list_medium_line_x3_t4_t2

0xea78,	// (0x0008b094) list_medium_line_x3_t4_t3

0xea78,	// (0x0008b094) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x0008b8c5) list_medium_line_x3_t4_t

0xea78,	// (0x0008b094) list_medium_line_x4_t5_t1

0xea78,	// (0x0008b094) list_medium_line_x4_t5_t2

0xea78,	// (0x0008b094) list_medium_line_x4_t5_t3

0xea78,	// (0x0008b094) list_medium_line_x4_t5_t4

0xea78,	// (0x0008b094) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x0008b8ce) list_medium_line_x4_t5_t

0xe302,	// (0x0008a91e) list_medium_line_t4_g4_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_t4_g4_g1

0xe302,	// (0x0008a91e) list_medium_line_t4_g4_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_t4_g4_g2

0xe302,	// (0x0008a91e) list_medium_line_t4_g4_g3_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_t4_g4_g3

0xe302,	// (0x0008a91e) list_medium_line_t4_g4_g4_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_t4_g4_g4

0x0003,

0xf1e7,	// (0x0008b803) list_medium_line_t4_g4_g_ParamLimits

0xf1e7,	// (0x0008b803) list_medium_line_t4_g4_g

0xe562,	// (0x0008ab7e) list_medium_line_t4_g4_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t4_g4_t1

0xe562,	// (0x0008ab7e) list_medium_line_t4_g4_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t4_g4_t2

0xe562,	// (0x0008ab7e) list_medium_line_t4_g4_t3_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t4_g4_t3

0xe562,	// (0x0008ab7e) list_medium_line_t4_g4_t4_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t4_g4_t4

0x0003,

0xf1f0,	// (0x0008b80c) list_medium_line_t4_g4_t_ParamLimits

0xf1f0,	// (0x0008b80c) list_medium_line_t4_g4_t

0x7b13,	// (0x0008412f) chi_dic_find_pane_g1

0x8882,	// (0x00084e9e) main_tport_pane

0xea78,	// (0x0008b094) list_medium_line_plain_t1

0xe302,	// (0x0008a91e) list_medium_line_t2_g2_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_t2_g2_g1

0xe302,	// (0x0008a91e) list_medium_line_t2_g2_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_t2_g2_g2

0x0001,

0xf1db,	// (0x0008b7f7) list_medium_line_t2_g2_g_ParamLimits

0xf1db,	// (0x0008b7f7) list_medium_line_t2_g2_g

0xe562,	// (0x0008ab7e) list_medium_line_t2_g2_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t2_g2_t1

0xe562,	// (0x0008ab7e) list_medium_line_t2_g2_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t2_g2_t2

0x0001,

0xf257,	// (0x0008b873) list_medium_line_t2_g2_t_ParamLimits

0xf257,	// (0x0008b873) list_medium_line_t2_g2_t

0x29c6,	// (0x0007efe2) aid_sp_fs_list_icon_a_sm

0x482d,	// (0x00080e49) aid_sp_fs_list_icon_d

0x29ce,	// (0x0007efea) aid_sp_fs_text_primary

0x29d7,	// (0x0007eff3) aid_sp_fs_text_secondary

0xdc01,	// (0x0008a21d) list_medium_line

0xdc01,	// (0x0008a21d) list_medium_line_g2

0xdc01,	// (0x0008a21d) list_medium_line_g3

0xdc01,	// (0x0008a21d) list_medium_line_plain

0xdc01,	// (0x0008a21d) list_medium_line_plain_t2

0xdc01,	// (0x0008a21d) list_medium_line_plain_t3

0xdc01,	// (0x0008a21d) list_medium_line_right_icon

0xdc01,	// (0x0008a21d) list_medium_line_right_iconx2

0xdc01,	// (0x0008a21d) list_medium_line_t2

0xdc01,	// (0x0008a21d) list_medium_line_t2_g2

0xdc01,	// (0x0008a21d) list_medium_line_t2_g3

0xdc01,	// (0x0008a21d) list_medium_line_t2_right_icon

0xdc01,	// (0x0008a21d) list_medium_line_t2_right_iconx2

0xdc01,	// (0x0008a21d) list_medium_line_t3

0xdc01,	// (0x0008a21d) list_medium_line_t3_g2

0xdc01,	// (0x0008a21d) list_medium_line_t3_g3

0xdc01,	// (0x0008a21d) list_medium_line_t3_right_iconx2

0xdc01,	// (0x0008a21d) list_medium_line_t4_g4

0xdc01,	// (0x0008a21d) list_medium_line_x2

0xdc01,	// (0x0008a21d) list_medium_line_x2_t2_g2

0xdc01,	// (0x0008a21d) list_medium_line_x2_t2_g3

0xdc01,	// (0x0008a21d) list_medium_line_x2_t2_g4

0xdc01,	// (0x0008a21d) list_medium_line_x2_t3

0xdc01,	// (0x0008a21d) list_medium_line_x2_t3_g2

0xdc01,	// (0x0008a21d) list_medium_line_x2_t3_g3

0xdc01,	// (0x0008a21d) list_medium_line_x2_t3_g4

0xdc01,	// (0x0008a21d) list_medium_line_x2_t4_g2

0xdc01,	// (0x0008a21d) list_medium_line_x2_t4_g4

0xdc01,	// (0x0008a21d) list_medium_line_x3

0xdc01,	// (0x0008a21d) list_medium_line_x3_t4

0xdc01,	// (0x0008a21d) list_medium_line_x3_t4_g4

0xdc01,	// (0x0008a21d) list_medium_line_x4_t4

0xdc01,	// (0x0008a21d) list_medium_line_x4_t4_g7

0xdc01,	// (0x0008a21d) list_medium_line_x4_t5

0xb337,	// (0x00087953) list_single_fs_dyc_pane_ParamLimits

0xb337,	// (0x00087953) list_single_fs_dyc_pane

0xe302,	// (0x0008a91e) list_medium_line_x4_t4_g7_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x4_t4_g7_g1

0xe302,	// (0x0008a91e) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x4_t4_g7_g2

0xe302,	// (0x0008a91e) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x4_t4_g7_g3

0xe302,	// (0x0008a91e) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x4_t4_g7_g4

0xe302,	// (0x0008a91e) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x4_t4_g7_g5

0xe302,	// (0x0008a91e) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x4_t4_g7_g6

0xe310,	// (0x0008a92c) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe310,	// (0x0008a92c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb2e,	// (0x0008c14a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb2e,	// (0x0008c14a) list_medium_line_x4_t4_g7_g

0xe562,	// (0x0008ab7e) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x4_t4_g7_t1

0xe562,	// (0x0008ab7e) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x4_t4_g7_t2

0xe562,	// (0x0008ab7e) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x4_t4_g7_t3

0x0435,	// (0x0007ca51) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0435,	// (0x0007ca51) list_medium_line_x4_t4_g7_t4

0x0435,	// (0x0007ca51) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0435,	// (0x0007ca51) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb3d,	// (0x0008c159) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb3d,	// (0x0008c159) list_medium_line_x4_t4_g7_t

0xba8b,	// (0x000880a7) list_single_dyc_row_pane_ParamLimits

0xba8b,	// (0x000880a7) list_single_dyc_row_pane

0xc15a,	// (0x00088776) call5_gesture_pane_ParamLimits

0xc15a,	// (0x00088776) call5_gesture_pane

0xc18e,	// (0x000887aa) call5_windows_pane_ParamLimits

0xc18e,	// (0x000887aa) call5_windows_pane

0xc1e1,	// (0x000887fd) call5_swipe_1_pane_cp_ParamLimits

0xc1e1,	// (0x000887fd) call5_swipe_1_pane_cp

0xc1ed,	// (0x00088809) call5_swipe_2_pane_cp_ParamLimits

0xc1ed,	// (0x00088809) call5_swipe_2_pane_cp

0xe526,	// (0x0008ab42) call5_image_pane_cp

0xc1f9,	// (0x00088815) popup_call5_audio_first_window_cp_ParamLimits

0xc1f9,	// (0x00088815) popup_call5_audio_first_window_cp

0x3297,	// (0x0007f8b3) call5_swipe_1_pane_g1_cp_ParamLimits

0x3297,	// (0x0007f8b3) call5_swipe_1_pane_g1_cp

0x3304,	// (0x0007f920) call5_swipe_1_pane_g2_cp

0x32b0,	// (0x0007f8cc) call5_swipe_1_pane_t1_cp_ParamLimits

0x32b0,	// (0x0007f8cc) call5_swipe_1_pane_t1_cp

0x3297,	// (0x0007f8b3) call5_swipe_2_pane_g1_cp_ParamLimits

0x3297,	// (0x0007f8b3) call5_swipe_2_pane_g1_cp

0x330c,	// (0x0007f928) call5_swipe_2_pane_g2_cp

0x3314,	// (0x0007f930) call5_swipe_2_pane_t1_cp_ParamLimits

0x3314,	// (0x0007f930) call5_swipe_2_pane_t1_cp

0xe29b,	// (0x0008a8b7) main_sp_fs_email_pane

0x3329,	// (0x0007f945) main_sp_fs_listscroll_pane_te

0x4843,	// (0x00080e5f) popup_sp_fs_action_menu_pane_ParamLimits

0x4843,	// (0x00080e5f) popup_sp_fs_action_menu_pane

0xe548,	// (0x0008ab64) bg_sp_fs_ctrlbar_pane_g1

0x3332,	// (0x0007f94e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x333b,	// (0x0007f957) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3344,	// (0x0007f960) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe548,	// (0x0008ab64) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc2b,	// (0x0008c247) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x184f,	// (0x0007de6b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x184f,	// (0x0007de6b) bg_sp_fs_ctrlbar_ddmenu_pane

0x334d,	// (0x0007f969) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x334d,	// (0x0007f969) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3359,	// (0x0007f975) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3359,	// (0x0007f975) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc34,	// (0x0008c250) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc34,	// (0x0008c250) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3365,	// (0x0007f981) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3365,	// (0x0007f981) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe548,	// (0x0008ab64) list_medium_line_t2_right_icon_g1

0xea78,	// (0x0008b094) list_medium_line_t2_right_icon_t1

0xea78,	// (0x0008b094) list_medium_line_t2_right_icon_t2

0x0001,

0xfc39,	// (0x0008c255) list_medium_line_t2_right_icon_t

0x0449,	// (0x0007ca65) bg_sp_fs_ctrlbar_pane_ParamLimits

0x0449,	// (0x0007ca65) bg_sp_fs_ctrlbar_pane

0xc25e,	// (0x0008887a) main_sp_fs_ctrlbar_button_pane_cp01

0xc266,	// (0x00088882) main_sp_fs_ctrlbar_ddmenu_pane

0x33b7,	// (0x0007f9d3) main_sp_fs_ctrlbar_pane_g1

0x33c3,	// (0x0007f9df) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc3e,	// (0x0008c25a) main_sp_fs_ctrlbar_pane_g

0xc2a2,	// (0x000888be) main_sp_fs_ctrlbar_pane_t1

0xc2dd,	// (0x000888f9) main_sp_fs_ctrlbar_pane

0xc2f3,	// (0x0008890f) main_sp_fs_listscroll_pane_te_cp01

0xc304,	// (0x00088920) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc304,	// (0x00088920) popup_sp_fs_action_menu_pane_cp01

0xe29b,	// (0x0008a8b7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe29b,	// (0x0008a8b7) bg_sp_fs_highlight_list_pane_cp01

0x33ea,	// (0x0007fa06) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x33ea,	// (0x0007fa06) sp_fs_action_menu_list_gene_pane_g1

0x33f9,	// (0x0007fa15) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x33f9,	// (0x0007fa15) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc4c,	// (0x0008c268) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc4c,	// (0x0008c268) sp_fs_action_menu_list_gene_pane_g

0x3406,	// (0x0007fa22) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3406,	// (0x0007fa22) sp_fs_action_menu_list_gene_pane_t1

0x341e,	// (0x0007fa3a) sp_fs_action_menu_list_gene_pane_ParamLimits

0x341e,	// (0x0007fa3a) sp_fs_action_menu_list_gene_pane

0x343f,	// (0x0007fa5b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x343f,	// (0x0007fa5b) popup_sp_fs_action_menu_bg_pane

0x344d,	// (0x0007fa69) sp_fs_action_menu_list_pane_ParamLimits

0x344d,	// (0x0007fa69) sp_fs_action_menu_list_pane

0x346f,	// (0x0007fa8b) sp_fs_scroll_pane_cp01_ParamLimits

0x346f,	// (0x0007fa8b) sp_fs_scroll_pane_cp01

0xea78,	// (0x0008b094) list_medium_line_plain_t2_t1

0xea78,	// (0x0008b094) list_medium_line_plain_t2_t2

0x0001,

0xfc39,	// (0x0008c255) list_medium_line_plain_t2_t

0xea78,	// (0x0008b094) list_medium_line_plain_t3_t1

0xea78,	// (0x0008b094) list_medium_line_plain_t3_t2

0xea78,	// (0x0008b094) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x0008b8be) list_medium_line_plain_t3_t

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g2_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g2_g1

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g2_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1db,	// (0x0008b7f7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1db,	// (0x0008b7f7) list_medium_line_x2_t2_g2_g

0xe562,	// (0x0008ab7e) list_medium_line_x2_t2_g2_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t2_g2_t1

0xe562,	// (0x0008ab7e) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t2_g2_t2

0x0001,

0xf257,	// (0x0008b873) list_medium_line_x2_t2_g2_t_ParamLimits

0xf257,	// (0x0008b873) list_medium_line_x2_t2_g2_t

0xe302,	// (0x0008a91e) list_medium_line_x2_t4_g2_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t4_g2_g1

0xe302,	// (0x0008a91e) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1db,	// (0x0008b7f7) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1db,	// (0x0008b7f7) list_medium_line_x2_t4_g2_g

0xe562,	// (0x0008ab7e) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t4_g2_t1

0xe562,	// (0x0008ab7e) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t4_g2_t2

0xe562,	// (0x0008ab7e) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t4_g2_t3

0xe562,	// (0x0008ab7e) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f0,	// (0x0008b80c) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f0,	// (0x0008b80c) list_medium_line_x2_t4_g2_t

0xe548,	// (0x0008ab64) list_medium_line_t3_right_iconx2_g1

0xe548,	// (0x0008ab64) list_medium_line_t3_right_iconx2_g2

0xe548,	// (0x0008ab64) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x0008b9df) list_medium_line_t3_right_iconx2_g

0xea78,	// (0x0008b094) list_medium_line_t3_right_iconx2_t1

0xea78,	// (0x0008b094) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc39,	// (0x0008c255) list_medium_line_t3_right_iconx2_t

0xe302,	// (0x0008a91e) list_medium_line_x3_t4_g4_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x3_t4_g4_g1

0xe302,	// (0x0008a91e) list_medium_line_x3_t4_g4_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x3_t4_g4_g2

0xe302,	// (0x0008a91e) list_medium_line_x3_t4_g4_g3_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x3_t4_g4_g3

0xe302,	// (0x0008a91e) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1e7,	// (0x0008b803) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1e7,	// (0x0008b803) list_medium_line_x3_t4_g4_g

0xe562,	// (0x0008ab7e) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x3_t4_g4_t1

0xe562,	// (0x0008ab7e) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x3_t4_g4_t2

0xe562,	// (0x0008ab7e) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x3_t4_g4_t3

0xe562,	// (0x0008ab7e) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f0,	// (0x0008b80c) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f0,	// (0x0008b80c) list_medium_line_x3_t4_g4_t

0xc324,	// (0x00088940) list_single_dyc_row_text_pane_t1_ParamLimits

0xc324,	// (0x00088940) list_single_dyc_row_text_pane_t1

0xc35b,	// (0x00088977) list_single_dyc_row_text_pane_t2_ParamLimits

0xc35b,	// (0x00088977) list_single_dyc_row_text_pane_t2

0x3495,	// (0x0007fab1) list_single_dyc_row_text_pane_t3_ParamLimits

0x3495,	// (0x0007fab1) list_single_dyc_row_text_pane_t3

0x0005,

0xfc51,	// (0x0008c26d) list_single_dyc_row_text_pane_t_ParamLimits

0xfc51,	// (0x0008c26d) list_single_dyc_row_text_pane_t

0x34b9,	// (0x0007fad5) list_single_dyc_row_pane_g1_ParamLimits

0x34b9,	// (0x0007fad5) list_single_dyc_row_pane_g1

0x34c5,	// (0x0007fae1) list_single_dyc_row_pane_g2_ParamLimits

0x34c5,	// (0x0007fae1) list_single_dyc_row_pane_g2

0x34d1,	// (0x0007faed) list_single_dyc_row_pane_g3_ParamLimits

0x34d1,	// (0x0007faed) list_single_dyc_row_pane_g3

0x34dd,	// (0x0007faf9) list_single_dyc_row_pane_g4_ParamLimits

0x34dd,	// (0x0007faf9) list_single_dyc_row_pane_g4

0x0003,

0xfc5e,	// (0x0008c27a) list_single_dyc_row_pane_g_ParamLimits

0xfc5e,	// (0x0008c27a) list_single_dyc_row_pane_g

0x34e9,	// (0x0007fb05) list_single_dyc_row_text_pane_ParamLimits

0x34e9,	// (0x0007fb05) list_single_dyc_row_text_pane

0xdc01,	// (0x0008a21d) bg_sp_fs_scroll_pane

0x3508,	// (0x0007fb24) thumb_sp_fs_scroll_pane

0xe302,	// (0x0008a91e) list_medium_line_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_g1

0xe562,	// (0x0008ab7e) list_medium_line_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t1

0xe302,	// (0x0008a91e) list_medium_line_x2_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_g1

0xe302,	// (0x0008a91e) list_medium_line_x2_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_g2

0x0001,

0xf1db,	// (0x0008b7f7) list_medium_line_x2_g_ParamLimits

0xf1db,	// (0x0008b7f7) list_medium_line_x2_g

0xe562,	// (0x0008ab7e) list_medium_line_x2_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t1

0xe302,	// (0x0008a91e) list_medium_line_x3_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x3_g1

0x3511,	// (0x0007fb2d) list_medium_line_x3_g2_ParamLimits

0x3511,	// (0x0007fb2d) list_medium_line_x3_g2

0x0001,

0xfc67,	// (0x0008c283) list_medium_line_x3_g_ParamLimits

0xfc67,	// (0x0008c283) list_medium_line_x3_g

0x351f,	// (0x0007fb3b) list_medium_line_x3_t1_ParamLimits

0x351f,	// (0x0007fb3b) list_medium_line_x3_t1

0x3533,	// (0x0007fb4f) thumb_sp_fs_scroll_pane_g1

0x353c,	// (0x0007fb58) thumb_sp_fs_scroll_pane_g2

0x3545,	// (0x0007fb61) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc6c,	// (0x0008c288) thumb_sp_fs_scroll_pane_g

0x3533,	// (0x0007fb4f) bg_sp_fs_scroll_pane_g1

0x353c,	// (0x0007fb58) bg_sp_fs_scroll_pane_g2

0x3545,	// (0x0007fb61) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc6c,	// (0x0008c288) bg_sp_fs_scroll_pane_g

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g4_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g4_g1

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g4_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g4_g2

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g4_g3_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g4_g3

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g4_g4_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1e7,	// (0x0008b803) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1e7,	// (0x0008b803) list_medium_line_x2_t3_g4_g

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g4_t1

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g4_t2

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x0008b7fc) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x0008b7fc) list_medium_line_x2_t3_g4_t

0xe302,	// (0x0008a91e) list_medium_line_g2_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_g2_g1

0xe302,	// (0x0008a91e) list_medium_line_g2_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_g2_g2

0x0001,

0xf1db,	// (0x0008b7f7) list_medium_line_g2_g_ParamLimits

0xf1db,	// (0x0008b7f7) list_medium_line_g2_g

0xe562,	// (0x0008ab7e) list_medium_line_g2_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_g2_t1

0xe302,	// (0x0008a91e) list_medium_line_t3_g2_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_t3_g2_g1

0xe302,	// (0x0008a91e) list_medium_line_t3_g2_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_t3_g2_g2

0x0001,

0xf1db,	// (0x0008b7f7) list_medium_line_t3_g2_g_ParamLimits

0xf1db,	// (0x0008b7f7) list_medium_line_t3_g2_g

0xe562,	// (0x0008ab7e) list_medium_line_t3_g2_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t3_g2_t1

0xe562,	// (0x0008ab7e) list_medium_line_t3_g2_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t3_g2_t2

0xe562,	// (0x0008ab7e) list_medium_line_t3_g2_t3_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x0008b7fc) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x0008b7fc) list_medium_line_t3_g2_t

0xe548,	// (0x0008ab64) list_medium_line_right_icon_g1

0xea78,	// (0x0008b094) list_medium_line_right_icon_t1

0xe302,	// (0x0008a91e) list_medium_line_t2_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_t2_g1

0xe562,	// (0x0008ab7e) list_medium_line_t2_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t2_t1

0xe562,	// (0x0008ab7e) list_medium_line_t2_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t2_t2

0x0001,

0xf257,	// (0x0008b873) list_medium_line_t2_t_ParamLimits

0xf257,	// (0x0008b873) list_medium_line_t2_t

0xe302,	// (0x0008a91e) list_medium_line_t3_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_t3_g1

0xe562,	// (0x0008ab7e) list_medium_line_t3_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t3_t1

0xe562,	// (0x0008ab7e) list_medium_line_t3_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t3_t2

0xe562,	// (0x0008ab7e) list_medium_line_t3_t3_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x0008b7fc) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x0008b7fc) list_medium_line_t3_t

0xe302,	// (0x0008a91e) list_medium_line_g3_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_g3_g1

0xe302,	// (0x0008a91e) list_medium_line_g3_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_g3_g2

0xe302,	// (0x0008a91e) list_medium_line_g3_g3_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x0008b7f5) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x0008b7f5) list_medium_line_g3_g

0xe562,	// (0x0008ab7e) list_medium_line_g3_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_g3_t1

0xe302,	// (0x0008a91e) list_medium_line_t2_g3_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_t2_g3_g1

0xe302,	// (0x0008a91e) list_medium_line_t2_g3_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_t2_g3_g2

0xe302,	// (0x0008a91e) list_medium_line_t2_g3_g3_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x0008b7f5) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x0008b7f5) list_medium_line_t2_g3_g

0xe562,	// (0x0008ab7e) list_medium_line_t2_g3_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t2_g3_t1

0xe562,	// (0x0008ab7e) list_medium_line_t2_g3_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t2_g3_t2

0x0001,

0xf257,	// (0x0008b873) list_medium_line_t2_g3_t_ParamLimits

0xf257,	// (0x0008b873) list_medium_line_t2_g3_t

0xe302,	// (0x0008a91e) list_medium_line_t3_g3_g1_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_t3_g3_g1

0xe302,	// (0x0008a91e) list_medium_line_t3_g3_g2_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_t3_g3_g2

0xe302,	// (0x0008a91e) list_medium_line_t3_g3_g3_ParamLimits

0xe302,	// (0x0008a91e) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x0008b7f5) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x0008b7f5) list_medium_line_t3_g3_g

0xe562,	// (0x0008ab7e) list_medium_line_t3_g3_t1_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t3_g3_t1

0xe562,	// (0x0008ab7e) list_medium_line_t3_g3_t2_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t3_g3_t2

0xe562,	// (0x0008ab7e) list_medium_line_t3_g3_t3_ParamLimits

0xe562,	// (0x0008ab7e) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x0008b7fc) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x0008b7fc) list_medium_line_t3_g3_t

0xe548,	// (0x0008ab64) list_medium_line_right_iconx2_g1

0xe548,	// (0x0008ab64) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x0008b9da) list_medium_line_right_iconx2_g

0xea78,	// (0x0008b094) list_medium_line_right_iconx2_t1

0xe548,	// (0x0008ab64) list_medium_line_t2_right_iconx2_g1

0xe548,	// (0x0008ab64) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x0008b9da) list_medium_line_t2_right_iconx2_g

0xea78,	// (0x0008b094) list_medium_line_t2_right_iconx2_t1

0xea78,	// (0x0008b094) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc39,	// (0x0008c255) list_medium_line_t2_right_iconx2_t

0xea78,	// (0x0008b094) list_medium_line_x4_t4_t1

0xea78,	// (0x0008b094) list_medium_line_x4_t4_t2

0xea78,	// (0x0008b094) list_medium_line_x4_t4_t3

0xea78,	// (0x0008b094) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x0008b8c5) list_medium_line_x4_t4_t

0xc4a8,	// (0x00088ac4) tport_appsw_pane_ParamLimits

0xc4a8,	// (0x00088ac4) tport_appsw_pane

0xc4b6,	// (0x00088ad2) tport_contact_pane_ParamLimits

0xc4b6,	// (0x00088ad2) tport_contact_pane

0xc4c6,	// (0x00088ae2) tport_listscroll_pane_ParamLimits

0xc4c6,	// (0x00088ae2) tport_listscroll_pane

0xc4d6,	// (0x00088af2) cell_tport_appsw_pane_ParamLimits

0xc4d6,	// (0x00088af2) cell_tport_appsw_pane

0xe310,	// (0x0008a92c) tport_appsw_pane_g1_ParamLimits

0xe310,	// (0x0008a92c) tport_appsw_pane_g1

0x354e,	// (0x0007fb6a) tport_contact_pane_g1

0x2de9,	// (0x0007f405) tport_contact_pane_t1

0x3557,	// (0x0007fb73) tport_contact_pane_t2

0x0001,

0xfc73,	// (0x0008c28f) tport_contact_pane_t

0x3565,	// (0x0007fb81) list_tport_pane

0x356e,	// (0x0007fb8a) scroll_pane_cp_030

0xc509,	// (0x00088b25) cell_tport_appsw_pane_g1

0xc519,	// (0x00088b35) cell_tport_appsw_pane_t1

0xc527,	// (0x00088b43) grid_highlight_pane_cp019

0xc52f,	// (0x00088b4b) list_tport_double_graphic_pane_ParamLimits

0xc52f,	// (0x00088b4b) list_tport_double_graphic_pane

0xe29b,	// (0x0008a8b7) list_highlight_pane_cp023_ParamLimits

0xe29b,	// (0x0008a8b7) list_highlight_pane_cp023

0xc540,	// (0x00088b5c) list_tport_double_graphic_pane_g1_ParamLimits

0xc540,	// (0x00088b5c) list_tport_double_graphic_pane_g1

0xc54d,	// (0x00088b69) list_tport_double_graphic_pane_t1_ParamLimits

0xc54d,	// (0x00088b69) list_tport_double_graphic_pane_t1

0xc562,	// (0x00088b7e) list_tport_double_graphic_pane_t2_ParamLimits

0xc562,	// (0x00088b7e) list_tport_double_graphic_pane_t2

0x0001,

0xfc7f,	// (0x0008c29b) list_tport_double_graphic_pane_t_ParamLimits

0xfc7f,	// (0x0008c29b) list_tport_double_graphic_pane_t

0xdc01,	// (0x0008a21d) main_cale_note_pane

0xa4d5,	// (0x00086af1) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa4d5,	// (0x00086af1) cell_vitu2_function_top_wide_pane_cp01

0xbe31,	// (0x0008844d) wait_bar_pane_cp05_ParamLimits

0xe29b,	// (0x0008a8b7) listscroll_cmail_pane

0x3577,	// (0x0007fb93) list_cmail_pane

0xc574,	// (0x00088b90) list_cmail_body_pane

0xc59b,	// (0x00088bb7) list_single_cmail_header_caption_pane

0xc5c4,	// (0x00088be0) list_single_cmail_header_detail_pane_ParamLimits

0xc5c4,	// (0x00088be0) list_single_cmail_header_detail_pane

0x3587,	// (0x0007fba3) list_single_cmail_header_caption_pane_t1

0xc5fa,	// (0x00088c16) list_single_cmail_header_detail_pane_g1_ParamLimits

0xc5fa,	// (0x00088c16) list_single_cmail_header_detail_pane_g1

0x4887,	// (0x00080ea3) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4887,	// (0x00080ea3) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc84,	// (0x0008c2a0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc84,	// (0x0008c2a0) list_single_cmail_header_detail_pane_g

0x35ab,	// (0x0007fbc7) list_single_cmail_header_detail_pane_t1_ParamLimits

0x35ab,	// (0x0007fbc7) list_single_cmail_header_detail_pane_t1

0x360b,	// (0x0007fc27) list_single_cmail_header_editor_pane_bg_ParamLimits

0x360b,	// (0x0007fc27) list_single_cmail_header_editor_pane_bg

0x2f46,	// (0x0007f562) list_cmail_body_pane_g1

0x3622,	// (0x0007fc3e) list_cmail_body_pane_t1

0x24a5,	// (0x0007eac1) list_single_cmail_header_editor_pane_bg_g1

0xe76d,	// (0x0008ad89) list_single_cmail_header_editor_pane_bg_g1_copy1

0x24b5,	// (0x0007ead1) list_single_cmail_header_editor_pane_bg_g1_copy2

0x24ad,	// (0x0007eac9) list_single_cmail_header_editor_pane_bg_g1_copy3

0x26f7,	// (0x0007ed13) list_single_cmail_header_editor_pane_bg_g1_copy4

0x24d5,	// (0x0007eaf1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x24c5,	// (0x0007eae1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x24cd,	// (0x0007eae9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe74d,	// (0x0008ad69) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc610,	// (0x00088c2c) calenote_gesture_pane_ParamLimits

0xc610,	// (0x00088c2c) calenote_gesture_pane

0xc62a,	// (0x00088c46) calenote_window_pane_ParamLimits

0xc62a,	// (0x00088c46) calenote_window_pane

0x3630,	// (0x0007fc4c) popup_note_window_cp01

0xc642,	// (0x00088c5e) calenote_swipe_1_pane_ParamLimits

0xc642,	// (0x00088c5e) calenote_swipe_1_pane

0xc1ed,	// (0x00088809) calenote_swipe_2_pane_ParamLimits

0xc1ed,	// (0x00088809) calenote_swipe_2_pane

0x3297,	// (0x0007f8b3) calenote_swipe_1_pane_g1_ParamLimits

0x3297,	// (0x0007f8b3) calenote_swipe_1_pane_g1

0x32a4,	// (0x0007f8c0) calenote_swipe_1_pane_g2_ParamLimits

0x32a4,	// (0x0007f8c0) calenote_swipe_1_pane_g2

0x0001,

0xfc21,	// (0x0008c23d) calenote_swipe_1_pane_g_ParamLimits

0xfc21,	// (0x0008c23d) calenote_swipe_1_pane_g

0x3642,	// (0x0007fc5e) calenote_swipe_1_pane_t1_ParamLimits

0x3642,	// (0x0007fc5e) calenote_swipe_1_pane_t1

0x3297,	// (0x0007f8b3) calenote_swipe_2_pane_g1_ParamLimits

0x3297,	// (0x0007f8b3) calenote_swipe_2_pane_g1

0x3661,	// (0x0007fc7d) calenote_swipe_2_pane_g2_ParamLimits

0x3661,	// (0x0007fc7d) calenote_swipe_2_pane_g2

0x0001,

0xfc90,	// (0x0008c2ac) calenote_swipe_2_pane_g_ParamLimits

0xfc90,	// (0x0008c2ac) calenote_swipe_2_pane_g

0x366d,	// (0x0007fc89) calenote_swipe_2_pane_t1_ParamLimits

0x366d,	// (0x0007fc89) calenote_swipe_2_pane_t1

0xdc01,	// (0x0008a21d) main_mup_navstr_pane

0x932b,	// (0x00085947) main_mup3_pane_t7_ParamLimits

0x932b,	// (0x00085947) main_mup3_pane_t7

0x9b56,	// (0x00086172) main_mp4_pane_g6_ParamLimits

0x9b56,	// (0x00086172) main_mp4_pane_g6

0x9ef4,	// (0x00086510) main_image3_pane_t4_ParamLimits

0x9ef4,	// (0x00086510) main_image3_pane_t4

0xc655,	// (0x00088c71) popup_navstr_preview_pane_ParamLimits

0xc655,	// (0x00088c71) popup_navstr_preview_pane

0xc661,	// (0x00088c7d) scroll_navstr_pane_ParamLimits

0xc661,	// (0x00088c7d) scroll_navstr_pane

0xdc01,	// (0x0008a21d) bg_popup_preview_window_pane_cp04

0x3694,	// (0x0007fcb0) popup_navstr_preview_pane_t1

0xc66d,	// (0x00088c89) scroll_navstr_pane_g1_ParamLimits

0xc66d,	// (0x00088c89) scroll_navstr_pane_g1

0xc67a,	// (0x00088c96) scroll_navstr_pane_t1_ParamLimits

0xc67a,	// (0x00088c96) scroll_navstr_pane_t1

0x3639,	// (0x0007fc55) bg_button_pane_cp014

0x3639,	// (0x0007fc55) bg_button_pane_cp030

0xc100,	// (0x0008871c) list_double_fisheye_pane_g4_ParamLimits

0xc100,	// (0x0008871c) list_double_fisheye_pane_g4

0xc10c,	// (0x00088728) list_double_fisheye_pane_g5_ParamLimits

0xc10c,	// (0x00088728) list_double_fisheye_pane_g5

0xf05f,	// (0x0008b67b) sp_fs_scroll_pane_cp03

0x33b7,	// (0x0007f9d3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x33c3,	// (0x0007f9df) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc3e,	// (0x0008c25a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc2a2,	// (0x000888be) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x357f,	// (0x0007fb9b) sp_fs_scroll_pane_cp02

0xe46e,	// (0x0008aa8a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe46e,	// (0x0008aa8a) popup_sp_fs_calendar_preview_list_single_pane

0xdc01,	// (0x0008a21d) main_cam6_pano_pane

0x8866,	// (0x00084e82) main_mup3_pane_ParamLimits

0xdc01,	// (0x0008a21d) main_phacti_pane

0xbd06,	// (0x00088322) bg_button_pane_cp11

0xbd1e,	// (0x0008833a) main_mobtv_info_pane_g2_ParamLimits

0xbd1e,	// (0x0008833a) main_mobtv_info_pane_g2

0x0001,

0xfb9e,	// (0x0008c1ba) main_mobtv_info_pane_g_ParamLimits

0xfb9e,	// (0x0008c1ba) main_mobtv_info_pane_g

0xbed0,	// (0x000884ec) sc_clock_pane_t5_ParamLimits

0xbed0,	// (0x000884ec) sc_clock_pane_t5

0xbf71,	// (0x0008858d) main_radioblah_pane_g1_ParamLimits

0x31e3,	// (0x0007f7ff) main_radioblah_pane_t3_ParamLimits

0x31e3,	// (0x0007f7ff) main_radioblah_pane_t3

0x31fb,	// (0x0007f817) main_radioblah_pane_t4_ParamLimits

0x31fb,	// (0x0007f817) main_radioblah_pane_t4

0xbf8f,	// (0x000885ab) main_radioblah_text_pane_ParamLimits

0xbf8f,	// (0x000885ab) main_radioblah_text_pane

0xbf9c,	// (0x000885b8) main_radioblah_info_pane_g1_ParamLimits

0xc031,	// (0x0008864d) main_radioblah_info_pane_t4_ParamLimits

0xc031,	// (0x0008864d) main_radioblah_info_pane_t4

0xe29b,	// (0x0008a8b7) main_sp_fs_calendar_pane

0xc68c,	// (0x00088ca8) main_phacti_pane_g1

0xc694,	// (0x00088cb0) phacti_note_pane_ParamLimits

0xc694,	// (0x00088cb0) phacti_note_pane

0x36ab,	// (0x0007fcc7) phacti_term_pane_ParamLimits

0x36ab,	// (0x0007fcc7) phacti_term_pane

0x36c0,	// (0x0007fcdc) phacti_note_pane_t1_ParamLimits

0x36c0,	// (0x0007fcdc) phacti_note_pane_t1

0x36d7,	// (0x0007fcf3) phacti_term_pane_g1

0x36df,	// (0x0007fcfb) phacti_term_pane_t1_ParamLimits

0x36df,	// (0x0007fcfb) phacti_term_pane_t1

0x3709,	// (0x0007fd25) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe50d,	// (0x0008ab29) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc9a,	// (0x0008c2b6) popup_sp_fs_calendar_preview_list_single_pane_g

0x3711,	// (0x0007fd2d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3711,	// (0x0007fd2d) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3727,	// (0x0007fd43) aid_popup_sp_fs_bg_corner_pane

0xe548,	// (0x0008ab64) popup_sp_fs_calendar_preview_bg_pane_g1

0xdc01,	// (0x0008a21d) popup_sp_fs_calendar_preview_bg_pane

0x372f,	// (0x0007fd4b) popup_sp_fs_calendar_preview_list_pane

0x0449,	// (0x0007ca65) bg_main_sp_fs_cale_pane_ParamLimits

0x0449,	// (0x0007ca65) bg_main_sp_fs_cale_pane

0x3740,	// (0x0007fd5c) listscroll_cale_mrui_pane_ParamLimits

0x3740,	// (0x0007fd5c) listscroll_cale_mrui_pane

0x3755,	// (0x0007fd71) listscroll_sp_fs_schedule_track_pane

0x375e,	// (0x0007fd7a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x375e,	// (0x0007fd7a) main_sp_fs_ctrlbar_pane_cp01

0x3771,	// (0x0007fd8d) main_sp_fs_ribbon_pane

0x3779,	// (0x0007fd95) popup_sp_fs_cale_preview_window

0xc6f7,	// (0x00088d13) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc6f7,	// (0x00088d13) list_single_sp_fs_schedule_track_pane

0xe2f4,	// (0x0008a910) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe2f4,	// (0x0008a910) bg_sp_fs_highlight_list_pane_cp03

0xc717,	// (0x00088d33) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc717,	// (0x00088d33) list_single_sp_fs_schedule_track_pane_g1

0xc723,	// (0x00088d3f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc723,	// (0x00088d3f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc9f,	// (0x0008c2bb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc9f,	// (0x0008c2bb) list_single_sp_fs_schedule_track_pane_g

0xc72f,	// (0x00088d4b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc72f,	// (0x00088d4b) list_single_sp_fs_schedule_track_pane_t1

0xc747,	// (0x00088d63) sp_fs_schedule_track_pane_ParamLimits

0xc747,	// (0x00088d63) sp_fs_schedule_track_pane

0x378b,	// (0x0007fda7) sp_fs_schedule_track_pane_g1

0x3793,	// (0x0007fdaf) sp_fs_schedule_track_pane_g2

0x379b,	// (0x0007fdb7) sp_fs_schedule_track_pane_g3

0x37a3,	// (0x0007fdbf) sp_fs_schedule_track_pane_g4

0x37ab,	// (0x0007fdc7) sp_fs_schedule_track_pane_g5

0x0004,

0xfca4,	// (0x0008c2c0) sp_fs_schedule_track_pane_g

0x24a5,	// (0x0007eac1) bg_sp_fs_schedule_viewer_highlight_g1

0xe76d,	// (0x0008ad89) bg_sp_fs_schedule_viewer_highlight_g2

0x24ad,	// (0x0007eac9) bg_sp_fs_schedule_viewer_highlight_g3

0x24b5,	// (0x0007ead1) bg_sp_fs_schedule_viewer_highlight_g4

0x26f7,	// (0x0007ed13) bg_sp_fs_schedule_viewer_highlight_g5

0x24c5,	// (0x0007eae1) bg_sp_fs_schedule_viewer_highlight_g6

0x24cd,	// (0x0007eae9) bg_sp_fs_schedule_viewer_highlight_g7

0x24d5,	// (0x0007eaf1) bg_sp_fs_schedule_viewer_highlight_g8

0xe74d,	// (0x0008ad69) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcaf,	// (0x0008c2cb) bg_sp_fs_schedule_viewer_highlight_g

0xdc01,	// (0x0008a21d) bg_main_sp_fs_ribbon_pane

0xc757,	// (0x00088d73) main_sp_fs_ribbon_pane_g1

0x37b3,	// (0x0007fdcf) main_sp_fs_ribbon_pane_t1

0xc760,	// (0x00088d7c) main_sp_fs_ribbon_pane_t2

0x37c2,	// (0x0007fdde) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcc2,	// (0x0008c2de) main_sp_fs_ribbon_pane_t

0x37d1,	// (0x0007fded) main_sp_fs_ribbon_scheduler_pane

0x37d9,	// (0x0007fdf5) bg_main_sp_fs_ribbon_pane_g1

0x37e2,	// (0x0007fdfe) bg_main_sp_fs_ribbon_pane_g2

0x37eb,	// (0x0007fe07) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcc9,	// (0x0008c2e5) bg_main_sp_fs_ribbon_pane_g

0x37f3,	// (0x0007fe0f) main_sp_fs_ribbon_scheduler_pane_g1

0x37fc,	// (0x0007fe18) main_sp_fs_ribbon_scheduler_pane_g2

0x3805,	// (0x0007fe21) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcd0,	// (0x0008c2ec) main_sp_fs_ribbon_scheduler_pane_g

0x380e,	// (0x0007fe2a) list_cale_mrui_pane

0xc76f,	// (0x00088d8b) sp_fs_scroll_pane_cp07_ParamLimits

0xc76f,	// (0x00088d8b) sp_fs_scroll_pane_cp07

0xc78b,	// (0x00088da7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc78b,	// (0x00088da7) bg_sp_fs_schedule_viewer_highlight

0x381b,	// (0x0007fe37) list_single_sp_fs_schedule_track_pane_cp01

0x3823,	// (0x0007fe3f) list_sp_fs_schedule_track_pane

0x382b,	// (0x0007fe47) sp_fs_scroll_pane_cp06_ParamLimits

0x382b,	// (0x0007fe47) sp_fs_scroll_pane_cp06

0xe548,	// (0x0008ab64) bgmain_sp_fs_calendar_pane_g1

0xc798,	// (0x00088db4) list_single_cale_mrui_pane_ParamLimits

0xc798,	// (0x00088db4) list_single_cale_mrui_pane

0x383d,	// (0x0007fe59) list_single_cale_mrui_row_pane_ParamLimits

0x383d,	// (0x0007fe59) list_single_cale_mrui_row_pane

0x384a,	// (0x0007fe66) list_single_cale_mrui_row_pane_g1_ParamLimits

0x384a,	// (0x0007fe66) list_single_cale_mrui_row_pane_g1

0x388f,	// (0x0007feab) list_single_cale_mrui_row_pane_t1_ParamLimits

0x388f,	// (0x0007feab) list_single_cale_mrui_row_pane_t1

0xc7c2,	// (0x00088dde) list_single_cale_mrui_row_pane_t2_ParamLimits

0xc7c2,	// (0x00088dde) list_single_cale_mrui_row_pane_t2

0x38a1,	// (0x0007febd) list_single_cale_mrui_row_pane_t3_ParamLimits

0x38a1,	// (0x0007febd) list_single_cale_mrui_row_pane_t3

0x38d0,	// (0x0007feec) list_single_cale_mrui_row_pane_t4_ParamLimits

0x38d0,	// (0x0007feec) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcde,	// (0x0008c2fa) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcde,	// (0x0008c2fa) list_single_cale_mrui_row_pane_t

0xc828,	// (0x00088e44) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xc828,	// (0x00088e44) list_single_cmail_header_editor_pane_bg_cp01

0xc848,	// (0x00088e64) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xc848,	// (0x00088e64) list_single_cmail_header_editor_pane_bg_cp02

0xc864,	// (0x00088e80) main_radioblah_text_pane_t1_ParamLimits

0xc864,	// (0x00088e80) main_radioblah_text_pane_t1

0x38ff,	// (0x0007ff1b) cam6_indi_pane_cp01

0x3907,	// (0x0007ff23) cam6_mode_pane_cp01

0x390f,	// (0x0007ff2b) cam6_pano_pane

0x3918,	// (0x0007ff34) cam6_zoom_pane_cp01

0x3920,	// (0x0007ff3c) cam6_pano_image_pane

0x392b,	// (0x0007ff47) cam6_pano_pane_g1

0x2f46,	// (0x0007f562) cam6_pano_pane_g2

0x3934,	// (0x0007ff50) cam6_pano_pane_g3

0x393d,	// (0x0007ff59) cam6_pano_pane_g4

0x2144,	// (0x0007e760) cam6_pano_pane_g5

0x3946,	// (0x0007ff62) cam6_pano_pane_g6

0x3950,	// (0x0007ff6c) cam6_pano_pane_g7

0x3958,	// (0x0007ff74) cam6_pano_pane_g8

0x3961,	// (0x0007ff7d) cam6_pano_pane_g9

0x0008,

0xfce7,	// (0x0008c303) cam6_pano_pane_g

0xdc01,	// (0x0008a21d) main_browser_tag_pane

0x368c,	// (0x0007fca8) grid_navstr_albumart_pane

0x396c,	// (0x0007ff88) cell_navstr_albumart_pane_ParamLimits

0x396c,	// (0x0007ff88) cell_navstr_albumart_pane

0x398c,	// (0x0007ffa8) cell_navstr_albumart_pane_g1

0x1584,	// (0x0007dba0) cell_navstr_albumart_pane_g2

0x1594,	// (0x0007dbb0) cell_navstr_albumart_pane_g3

0x158c,	// (0x0007dba8) cell_navstr_albumart_pane_g4

0x0003,

0xfcfa,	// (0x0008c316) cell_navstr_albumart_pane_g

0xc87f,	// (0x00088e9b) bt_list_pane_ParamLimits

0xc87f,	// (0x00088e9b) bt_list_pane

0xc89f,	// (0x00088ebb) bt_list_pane_t1

0xc8ae,	// (0x00088eca) bt_list_pane_t2

0x0001,

0xfd03,	// (0x0008c31f) bt_list_pane_t

0xdc01,	// (0x0008a21d) main_cale_prevew_pane

0xc8bd,	// (0x00088ed9) popup_cale_preview_window_ParamLimits

0xc8bd,	// (0x00088ed9) popup_cale_preview_window

0xe29b,	// (0x0008a8b7) bg_popup_preview_window_pane_cp05_ParamLimits

0xe29b,	// (0x0008a8b7) bg_popup_preview_window_pane_cp05

0x3994,	// (0x0007ffb0) list_cale_preview_pane_ParamLimits

0x3994,	// (0x0007ffb0) list_cale_preview_pane

0xc8d6,	// (0x00088ef2) list_double_cale_preview_pane_ParamLimits

0xc8d6,	// (0x00088ef2) list_double_cale_preview_pane

0xc8e8,	// (0x00088f04) list_single_cale_preview_pane_ParamLimits

0xc8e8,	// (0x00088f04) list_single_cale_preview_pane

0xc8fe,	// (0x00088f1a) list_single_cale_preview_pane_g1

0xc906,	// (0x00088f22) list_single_cale_preview_pane_t1_ParamLimits

0xc906,	// (0x00088f22) list_single_cale_preview_pane_t1

0xc91b,	// (0x00088f37) list_double_cale_preview_pane_g1

0xc923,	// (0x00088f3f) list_double_cale_preview_pane_t1_ParamLimits

0xc923,	// (0x00088f3f) list_double_cale_preview_pane_t1

0xc938,	// (0x00088f54) list_double_cale_preview_pane_t2_ParamLimits

0xc938,	// (0x00088f54) list_double_cale_preview_pane_t2

0x0001,

0xfd08,	// (0x0008c324) list_double_cale_preview_pane_t_ParamLimits

0xfd08,	// (0x0008c324) list_double_cale_preview_pane_t

0xdc01,	// (0x0008a21d) main_ezdial_pane

0xe29b,	// (0x0008a8b7) main_sp_fs_email_pane_ParamLimits

0xc207,	// (0x00088823) cmail_ddmenu_btn01_pane_ParamLimits

0xc207,	// (0x00088823) cmail_ddmenu_btn01_pane

0xc224,	// (0x00088840) cmail_ddmenu_btn02_pane_ParamLimits

0xc224,	// (0x00088840) cmail_ddmenu_btn02_pane

0xc242,	// (0x0008885e) cmail_ddmenu_btn03_pane_ParamLimits

0xc242,	// (0x0008885e) cmail_ddmenu_btn03_pane

0xc2dd,	// (0x000888f9) main_sp_fs_ctrlbar_pane_ParamLimits

0xc2f3,	// (0x0008890f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc574,	// (0x00088b90) list_cmail_body_pane_ParamLimits

0x3595,	// (0x0007fbb1) bg_button_pane_cp12

0x359e,	// (0x0007fbba) list_single_cmail_header_detail_pane_g3_ParamLimits

0x359e,	// (0x0007fbba) list_single_cmail_header_detail_pane_g3

0x35e7,	// (0x0007fc03) list_single_cmail_header_detail_pane_t2_ParamLimits

0x35e7,	// (0x0007fc03) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc8b,	// (0x0008c2a7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc8b,	// (0x0008c2a7) list_single_cmail_header_detail_pane_t

0x36f4,	// (0x0007fd10) phacti_term_pane_t2_ParamLimits

0x36f4,	// (0x0007fd10) phacti_term_pane_t2

0x0001,

0xfc95,	// (0x0008c2b1) phacti_term_pane_t_ParamLimits

0xfc95,	// (0x0008c2b1) phacti_term_pane_t

0x39a0,	// (0x0007ffbc) aid_size_list_single_double

0xc950,	// (0x00088f6c) popup_ezdial_listscroll_window

0xc971,	// (0x00088f8d) popup_number_entry_window_cp01

0xe526,	// (0x0008ab42) bg_popup_call_pane_cp09

0x39ac,	// (0x0007ffc8) ezdial_list_pane

0x39b4,	// (0x0007ffd0) scroll_pane_cp23

0x184f,	// (0x0007de6b) bg_button_pane_cp028_ParamLimits

0x184f,	// (0x0007de6b) bg_button_pane_cp028

0xc97f,	// (0x00088f9b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc97f,	// (0x00088f9b) cmail_ddmenu_btn01_pane_g1

0xc98f,	// (0x00088fab) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc98f,	// (0x00088fab) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd0d,	// (0x0008c329) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd0d,	// (0x0008c329) cmail_ddmenu_btn01_pane_g

0x39bc,	// (0x0007ffd8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x39bc,	// (0x0007ffd8) cmail_ddmenu_btn01_pane_t1

0x0449,	// (0x0007ca65) bg_button_pane_cp029_ParamLimits

0x0449,	// (0x0007ca65) bg_button_pane_cp029

0xc99b,	// (0x00088fb7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc99b,	// (0x00088fb7) cmail_ddmenu_btn02_pane_g1

0xc9b3,	// (0x00088fcf) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc9b3,	// (0x00088fcf) cmail_ddmenu_btn02_pane_t1

0xe2f4,	// (0x0008a910) bg_button_pane_cp031_ParamLimits

0xe2f4,	// (0x0008a910) bg_button_pane_cp031

0xc99b,	// (0x00088fb7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc99b,	// (0x00088fb7) cmail_ddmenu_btn03_pane_g1

0xc9b3,	// (0x00088fcf) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc9b3,	// (0x00088fcf) cmail_ddmenu_btn03_pane_t1

0x9d91,	// (0x000863ad) cell_dialer2_keypad_pane_t1_ParamLimits

0x9dab,	// (0x000863c7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x9dab,	// (0x000863c7) cell_dialer2_keypad_pane_t1_copy1

0xbb47,	// (0x00088163) ncimui_group_button_pane

0xe29b,	// (0x0008a8b7) main_sp_fs_calendar_pane_ParamLimits

0xc59b,	// (0x00088bb7) list_single_cmail_header_caption_pane_ParamLimits

0x3737,	// (0x0007fd53) aid_recal_txt_sm_pane

0xdc01,	// (0x0008a21d) mian_recal_day_pane

0x3779,	// (0x0007fd95) popup_sp_fs_cale_preview_window_ParamLimits

0x39d2,	// (0x0007ffee) list_recal_day_pane

0x3a14,	// (0x00080030) list_single_recal_day_pane_ParamLimits

0x3a14,	// (0x00080030) list_single_recal_day_pane

0x3a26,	// (0x00080042) list_single_recal_day_pane_g1_ParamLimits

0x3a26,	// (0x00080042) list_single_recal_day_pane_g1

0x3a32,	// (0x0008004e) list_single_recal_day_pane_g2_ParamLimits

0x3a32,	// (0x0008004e) list_single_recal_day_pane_g2

0x3a3e,	// (0x0008005a) list_single_recal_day_pane_g3_ParamLimits

0x3a3e,	// (0x0008005a) list_single_recal_day_pane_g3

0xc9d7,	// (0x00088ff3) list_single_recal_day_pane_g4_ParamLimits

0xc9d7,	// (0x00088ff3) list_single_recal_day_pane_g4

0x3a4a,	// (0x00080066) list_single_recal_day_pane_g5_ParamLimits

0x3a4a,	// (0x00080066) list_single_recal_day_pane_g5

0x3a56,	// (0x00080072) list_single_recal_day_pane_g6_ParamLimits

0x3a56,	// (0x00080072) list_single_recal_day_pane_g6

0x0004,

0xfd1c,	// (0x0008c338) list_single_recal_day_pane_g_ParamLimits

0xfd1c,	// (0x0008c338) list_single_recal_day_pane_g

0x3a6a,	// (0x00080086) list_single_recal_day_pane_t1

0x3a7c,	// (0x00080098) list_single_recal_day_pane_t2

0x0001,

0xfd27,	// (0x0008c343) list_single_recal_day_pane_t

0xc9ef,	// (0x0008900b) ncimui_query_button_pane_ParamLimits

0xc9ef,	// (0x0008900b) ncimui_query_button_pane

0xc9ff,	// (0x0008901b) ncimui_query_button_pane_t1_ParamLimits

0xc9ff,	// (0x0008901b) ncimui_query_button_pane_t1

0x3a8e,	// (0x000800aa) ncimui_query_button_pane_t2_ParamLimits

0x3a8e,	// (0x000800aa) ncimui_query_button_pane_t2

0x0001,

0xfd2c,	// (0x0008c348) ncimui_query_button_pane_t_ParamLimits

0xfd2c,	// (0x0008c348) ncimui_query_button_pane_t

0xca12,	// (0x0008902e) query_button_pane_ParamLimits

0xca12,	// (0x0008902e) query_button_pane

0xdc01,	// (0x0008a21d) bg_button_pane_cp0028

0x3aa1,	// (0x000800bd) query_button_pane_t1

0x8882,	// (0x00084e9e) main_tport_pane_ParamLimits

0xc47e,	// (0x00088a9a) bg_popup_window_pane_cp01_ParamLimits

0xc47e,	// (0x00088a9a) bg_popup_window_pane_cp01

0xc48c,	// (0x00088aa8) heading_pane_cp08_ParamLimits

0xc48c,	// (0x00088aa8) heading_pane_cp08

0xc49a,	// (0x00088ab6) heading_pane_cp07_ParamLimits

0xc49a,	// (0x00088ab6) heading_pane_cp07

0xc509,	// (0x00088b25) cell_tport_appsw_pane_g2

0x0002,

0xfc78,	// (0x0008c294) cell_tport_appsw_pane_g

0x7f38,	// (0x00084554) input_candi_list_open_g1

0xe925,	// (0x0008af41) list_cale_time_pane_g6_ParamLimits

0xe925,	// (0x0008af41) list_cale_time_pane_g6

0x8d7d,	// (0x00085399) aid_size_touch_calib_1_ParamLimits

0x8d7d,	// (0x00085399) aid_size_touch_calib_1

0x8d89,	// (0x000853a5) aid_size_touch_calib_2_ParamLimits

0x8d89,	// (0x000853a5) aid_size_touch_calib_2

0x8d97,	// (0x000853b3) aid_size_touch_calib_3_ParamLimits

0x8d97,	// (0x000853b3) aid_size_touch_calib_3

0x8da7,	// (0x000853c3) aid_size_touch_calib_4_ParamLimits

0x8da7,	// (0x000853c3) aid_size_touch_calib_4

0x8db5,	// (0x000853d1) main_touch_calib_button_group_pane_ParamLimits

0x8db5,	// (0x000853d1) main_touch_calib_button_group_pane

0x8dc3,	// (0x000853df) main_touch_calib_pane_g1_ParamLimits

0x8dcf,	// (0x000853eb) main_touch_calib_pane_g2_ParamLimits

0x8ddb,	// (0x000853f7) main_touch_calib_pane_g3_ParamLimits

0x8de7,	// (0x00085403) main_touch_calib_pane_g4_ParamLimits

0xf6bf,	// (0x0008bcdb) main_touch_calib_pane_g_ParamLimits

0x8df3,	// (0x0008540f) main_touch_calib_pane_t1_ParamLimits

0x8e0c,	// (0x00085428) main_touch_calib_pane_t2_ParamLimits

0x8e25,	// (0x00085441) main_touch_calib_pane_t3_ParamLimits

0x8e3b,	// (0x00085457) main_touch_calib_pane_t4_ParamLimits

0x8e51,	// (0x0008546d) main_touch_calib_pane_t5_ParamLimits

0xf6c8,	// (0x0008bce4) main_touch_calib_pane_t_ParamLimits

0x1f07,	// (0x0007e523) list_single_fp_cale_pane_g3_ParamLimits

0x1f07,	// (0x0007e523) list_single_fp_cale_pane_g3

0x8866,	// (0x00084e82) bg_button_pane_cp012_ParamLimits

0x8866,	// (0x00084e82) bg_vkb2_func_pane_cp03_ParamLimits

0xac61,	// (0x0008727d) cell_vitu2_function_top_pane_g1_ParamLimits

0x8866,	// (0x00084e82) bg_vkb2_func_pane_cp04_ParamLimits

0xbacf,	// (0x000880eb) main_ncimui_button_group_pane_ParamLimits

0xbacf,	// (0x000880eb) main_ncimui_button_group_pane

0xbb35,	// (0x00088151) main_ncimui_pane_t3_ParamLimits

0xbb35,	// (0x00088151) main_ncimui_pane_t3

0x36a2,	// (0x0007fcbe) phacti_button_group_pane

0x39a0,	// (0x0007ffbc) aid_size_list_single_double_ParamLimits

0xc950,	// (0x00088f6c) popup_ezdial_listscroll_window_ParamLimits

0xc971,	// (0x00088f8d) popup_number_entry_window_cp01_ParamLimits

0xca1f,	// (0x0008903b) phacti_button_pane_ParamLimits

0xca1f,	// (0x0008903b) phacti_button_pane

0xdc01,	// (0x0008a21d) bg_button_pane_cp14

0x3aaf,	// (0x000800cb) phacti_button_pane_t1

0xca30,	// (0x0008904c) main_touch_calib_button_pane_ParamLimits

0xca30,	// (0x0008904c) main_touch_calib_button_pane

0xe374,	// (0x0008a990) bg_button_pane_cp18_ParamLimits

0xe374,	// (0x0008a990) bg_button_pane_cp18

0x3abd,	// (0x000800d9) main_touch_calib_button_pane_t1_ParamLimits

0x3abd,	// (0x000800d9) main_touch_calib_button_pane_t1

0x3ad3,	// (0x000800ef) main_touch_calib_button_pane_t2_ParamLimits

0x3ad3,	// (0x000800ef) main_touch_calib_button_pane_t2

0x0001,

0xfd31,	// (0x0008c34d) main_touch_calib_button_pane_t_ParamLimits

0xfd31,	// (0x0008c34d) main_touch_calib_button_pane_t

0xdc01,	// (0x0008a21d) cell_ncimui_button_pane

0xdc01,	// (0x0008a21d) bg_button_pane_cp032

0x3af1,	// (0x0008010d) cell_ncimui_button_pane_t1

0x9e07,	// (0x00086423) image3_infobar_pane_ParamLimits

0x9e07,	// (0x00086423) image3_infobar_pane

0xbef2,	// (0x0008850e) fs_bigclock_status_pane_ParamLimits

0xbef2,	// (0x0008850e) fs_bigclock_status_pane

0xbeff,	// (0x0008851b) main_fs_bigclock_clock_pane_ParamLimits

0xbeff,	// (0x0008851b) main_fs_bigclock_clock_pane

0xbf13,	// (0x0008852f) main_fs_bigclock_indi_pane_ParamLimits

0xbf13,	// (0x0008852f) main_fs_bigclock_indi_pane

0xbf3b,	// (0x00088557) main_fs_bigclock_swipe_pane_ParamLimits

0xbf3b,	// (0x00088557) main_fs_bigclock_swipe_pane

0xdc01,	// (0x0008a21d) main_fs_clock_dumped_data

0x3053,	// (0x0007f66f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3053,	// (0x0007f66f) list_single_fs_bigclock_indicator_pane_g1

0x306e,	// (0x0007f68a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x306e,	// (0x0007f68a) list_single_fs_bigclock_indicator_pane_g2

0x3088,	// (0x0007f6a4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3088,	// (0x0007f6a4) list_single_fs_bigclock_indicator_pane_g3

0x30a2,	// (0x0007f6be) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x30a2,	// (0x0007f6be) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbd2,	// (0x0008c1ee) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbd2,	// (0x0008c1ee) list_single_fs_bigclock_indicator_pane_g

0x30cd,	// (0x0007f6e9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x30cd,	// (0x0007f6e9) list_single_fs_bigclock_indicator_pane_t1

0x30f5,	// (0x0007f711) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x30f5,	// (0x0007f711) list_single_fs_bigclock_indicator_pane_t2

0x311d,	// (0x0007f739) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x311d,	// (0x0007f739) list_single_fs_bigclock_indicator_pane_t3

0x3145,	// (0x0007f761) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3145,	// (0x0007f761) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbdd,	// (0x0008c1f9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbdd,	// (0x0008c1f9) list_single_fs_bigclock_indicator_pane_t

0x3aff,	// (0x0008011b) image3_infobar_fav_pane_ParamLimits

0x3aff,	// (0x0008011b) image3_infobar_fav_pane

0x3b0f,	// (0x0008012b) image3_infobar_loc_pane_ParamLimits

0x3b0f,	// (0x0008012b) image3_infobar_loc_pane

0x3b23,	// (0x0008013f) image3_infobar_time_pane_ParamLimits

0x3b23,	// (0x0008013f) image3_infobar_time_pane

0xe548,	// (0x0008ab64) image3_infobar_time_pane_g1

0x3b33,	// (0x0008014f) image3_infobar_time_pane_t1

0xe548,	// (0x0008ab64) image3_infobar_loc_pane_g1

0x3b41,	// (0x0008015d) image3_infobar_loc_pane_g2

0x0001,

0xfd36,	// (0x0008c352) image3_infobar_loc_pane_g

0x3b49,	// (0x00080165) image3_infobar_loc_pane_t1

0xe548,	// (0x0008ab64) image3_infobar_fav_pane_g1

0x3b57,	// (0x00080173) image3_infobar_fav_pane_g2

0x0001,

0xfd3b,	// (0x0008c357) image3_infobar_fav_pane_g

0x3b5f,	// (0x0008017b) fs_bigclock_status_battery_pane

0x3b68,	// (0x00080184) fs_bigclock_status_signal_pane

0x3b71,	// (0x0008018d) fs_bigclock_status_title_pane

0x3b7a,	// (0x00080196) fs_bigclock_status_signal_pane_g1

0x3b83,	// (0x0008019f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd40,	// (0x0008c35c) fs_bigclock_status_signal_pane_g

0x3b8b,	// (0x000801a7) fs_bigclock_status_battery_pane_g1

0x3b94,	// (0x000801b0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd45,	// (0x0008c361) fs_bigclock_status_battery_pane_g

0x3b9c,	// (0x000801b8) fs_bigclock_status_title_pane_t1

0xca40,	// (0x0008905c) main_fs_bigclock_clock_pane_g1

0xca40,	// (0x0008905c) main_fs_bigclock_clock_pane_g2

0xca4d,	// (0x00089069) main_fs_bigclock_clock_pane_g3

0xca4d,	// (0x00089069) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd4a,	// (0x0008c366) main_fs_bigclock_clock_pane_g

0xca59,	// (0x00089075) main_fs_bigclock_clock_pane_t1

0xca6c,	// (0x00089088) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd53,	// (0x0008c36f) main_fs_bigclock_clock_pane_t

0x3baa,	// (0x000801c6) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3baa,	// (0x000801c6) list_single_fs_bigclock_indicator_pane

0x3bbb,	// (0x000801d7) list_single_fs_bigclock_pane_ParamLimits

0x3bbb,	// (0x000801d7) list_single_fs_bigclock_pane

0x3be1,	// (0x000801fd) main_fs_bigclock_indicator_pane_t1

0x3bf0,	// (0x0008020c) list_single_fs_bigclock_pane_g1

0x3bf8,	// (0x00080214) list_single_fs_bigclock_pane_t1

0xe548,	// (0x0008ab64) main_fs_bigclock_swipe_pane_g1

0x3c3b,	// (0x00080257) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd64,	// (0x0008c380) main_fs_bigclock_swipe_pane_g

0x3c43,	// (0x0008025f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3c43,	// (0x0008025f) main_fs_bigclock_swipe_pane_t1

0x7a36,	// (0x00084052) call_type_pane_ParamLimits

0xdc01,	// (0x0008a21d) main_btmg_pane

0x3876,	// (0x0007fe92) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3876,	// (0x0007fe92) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcd7,	// (0x0008c2f3) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcd7,	// (0x0008c2f3) list_single_cale_mrui_row_pane_g

0x39fb,	// (0x00080017) list_recal_vselct_arw_lo_pane

0x3a03,	// (0x0008001f) list_recal_vselct_arw_up_pane

0x3a0b,	// (0x00080027) list_recal_vselct_pane

0xcac3,	// (0x000890df) btmg_button_pane

0xcacf,	// (0x000890eb) main_btmg_pane_g1

0xdc01,	// (0x0008a21d) bg_button_pane_cp044

0x3c60,	// (0x0008027c) btmg_button_pane_t1

0x16d4,	// (0x0007dcf0) aid_listscroll_gen

0xe29b,	// (0x0008a8b7) main_cntbar_detail_pane

0x3577,	// (0x0007fb93) list_cmail_folder_pane

0xf05f,	// (0x0008b67b) sp_fs_scroll_pane_cp03_ParamLimits

0xcad7,	// (0x000890f3) list_single_fs_dyc_pane_cp01_ParamLimits

0xcad7,	// (0x000890f3) list_single_fs_dyc_pane_cp01

0x3c6e,	// (0x0008028a) aid_size_cmail_indent

0x3c77,	// (0x00080293) list_single_dyc_row_pane_cp01

0xcb1f,	// (0x0008913b) cntbar_detail_list_pane_ParamLimits

0xcb1f,	// (0x0008913b) cntbar_detail_list_pane

0xcb59,	// (0x00089175) main_cntbar_detail_cont_pane_ParamLimits

0xcb59,	// (0x00089175) main_cntbar_detail_cont_pane

0x7a2a,	// (0x00084046) scroll_pane_cp032_ParamLimits

0x7a2a,	// (0x00084046) scroll_pane_cp032

0xcb65,	// (0x00089181) cntbar_detail_list_event_pane_ParamLimits

0xcb65,	// (0x00089181) cntbar_detail_list_event_pane

0xcb2b,	// (0x00089147) cntbar_detail_list_shct_pane

0xe7bb,	// (0x0008add7) aid_list_gen

0x3c80,	// (0x0008029c) aid_scroll

0x3c89,	// (0x000802a5) aid_size_touch_scroll_bar

0xcb79,	// (0x00089195) aid_list_double

0x3c92,	// (0x000802ae) aid_list_single

0xcb82,	// (0x0008919e) aid_list_single_lg

0x3c9b,	// (0x000802b7) aid_list_z_g_a_sm

0x4893,	// (0x00080eaf) aid_list_z_g_d

0x3ca3,	// (0x000802bf) aid_txt_z_prm

0xcb8b,	// (0x000891a7) aid_txt_z_prm_cp01

0xcb99,	// (0x000891b5) aid_txt_z_sec

0xcba7,	// (0x000891c3) main_cntbar_detail_cont_pane_g1_ParamLimits

0xcba7,	// (0x000891c3) main_cntbar_detail_cont_pane_g1

0xcbb4,	// (0x000891d0) main_cntbar_detail_cont_pane_g2_ParamLimits

0xcbb4,	// (0x000891d0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd69,	// (0x0008c385) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd69,	// (0x0008c385) main_cntbar_detail_cont_pane_g

0x3cb1,	// (0x000802cd) main_cntbar_detail_cont_pane_t1

0x3cbf,	// (0x000802db) main_cntbar_detail_cont_pane_t2

0x3ccd,	// (0x000802e9) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd6e,	// (0x0008c38a) main_cntbar_detail_cont_pane_t

0xcbc0,	// (0x000891dc) cell_cntbar_detail_list_shct_pane_ParamLimits

0xcbc0,	// (0x000891dc) cell_cntbar_detail_list_shct_pane

0x3cdb,	// (0x000802f7) cntbar_detail_list_shct_pane_g1

0x3ce4,	// (0x00080300) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd75,	// (0x0008c391) cntbar_detail_list_shct_pane_g

0xcbd4,	// (0x000891f0) cntbar_detail_list_event_pane_g1_ParamLimits

0xcbd4,	// (0x000891f0) cntbar_detail_list_event_pane_g1

0xcbe0,	// (0x000891fc) cntbar_detail_list_event_pane_g2_ParamLimits

0xcbe0,	// (0x000891fc) cntbar_detail_list_event_pane_g2

0x0005,

0xfd7a,	// (0x0008c396) cntbar_detail_list_event_pane_g_ParamLimits

0xfd7a,	// (0x0008c396) cntbar_detail_list_event_pane_g

0xcc4c,	// (0x00089268) cntbar_detail_list_event_pane_t1_ParamLimits

0xcc4c,	// (0x00089268) cntbar_detail_list_event_pane_t1

0xcc61,	// (0x0008927d) cntbar_detail_list_event_pane_t2_ParamLimits

0xcc61,	// (0x0008927d) cntbar_detail_list_event_pane_t2

0x0002,

0xfd87,	// (0x0008c3a3) cntbar_detail_list_event_pane_t_ParamLimits

0xfd87,	// (0x0008c3a3) cntbar_detail_list_event_pane_t

0xe548,	// (0x0008ab64) cell_cntbar_detail_list_shct_pane_g1

0xef1f,	// (0x0008b53b) navi_pane_mv_g3

0xe29b,	// (0x0008a8b7) main_cntbar_detail_pane_ParamLimits

0xdc01,	// (0x0008a21d) main_notif_wgt_pane

0x9a91,	// (0x000860ad) aid_tch_main_mp4_pane_g4

0x9cf0,	// (0x0008630c) popup_slider_window_cp02

0x39f1,	// (0x0008000d) list_recal_day_event_pane

0xcaff,	// (0x0008911b) cntbar_detail_btn_pane_ParamLimits

0xcaff,	// (0x0008911b) cntbar_detail_btn_pane

0xcb0f,	// (0x0008912b) cntbar_detail_btn_pane_cp01_ParamLimits

0xcb0f,	// (0x0008912b) cntbar_detail_btn_pane_cp01

0xcb2b,	// (0x00089147) cntbar_detail_list_shct_pane_ParamLimits

0xcb37,	// (0x00089153) cntbar_detail_pane_g1_ParamLimits

0xcb37,	// (0x00089153) cntbar_detail_pane_g1

0xcb43,	// (0x0008915f) cntbar_detail_pane_t1_ParamLimits

0xcb43,	// (0x0008915f) cntbar_detail_pane_t1

0xcbec,	// (0x00089208) cntbar_detail_list_event_pane_g3_ParamLimits

0xcbec,	// (0x00089208) cntbar_detail_list_event_pane_g3

0xcc04,	// (0x00089220) cntbar_detail_list_event_pane_g4_ParamLimits

0xcc04,	// (0x00089220) cntbar_detail_list_event_pane_g4

0xcc1c,	// (0x00089238) cntbar_detail_list_event_pane_g5_ParamLimits

0xcc1c,	// (0x00089238) cntbar_detail_list_event_pane_g5

0xcc34,	// (0x00089250) cntbar_detail_list_event_pane_g6_ParamLimits

0xcc34,	// (0x00089250) cntbar_detail_list_event_pane_g6

0xcc76,	// (0x00089292) cntbar_detail_list_event_pane_t3_ParamLimits

0xcc76,	// (0x00089292) cntbar_detail_list_event_pane_t3

0xcc88,	// (0x000892a4) popup_notif_wgt_window_ParamLimits

0xcc88,	// (0x000892a4) popup_notif_wgt_window

0xcc98,	// (0x000892b4) popup_submenu_window_cp01_ParamLimits

0xcc98,	// (0x000892b4) popup_submenu_window_cp01

0xe526,	// (0x0008ab42) bg_popup_window_pane_cp10

0x3ced,	// (0x00080309) listscroll_notif_wgt_pane

0x3cff,	// (0x0008031b) list_notif_wgt_window

0x3d08,	// (0x00080324) scroll_pane_cp033

0xccaa,	// (0x000892c6) list_notif_wgt_row_pane_ParamLimits

0xccaa,	// (0x000892c6) list_notif_wgt_row_pane

0x3d11,	// (0x0008032d) aid_size_list_notif_wgt_del

0x3d1e,	// (0x0008033a) list_notif_wgt_row_pane_g1

0x3d2a,	// (0x00080346) list_notif_wgt_row_pane_g2

0x3d39,	// (0x00080355) list_notif_wgt_row_pane_g3

0x0002,

0xfd8e,	// (0x0008c3aa) list_notif_wgt_row_pane_g

0x3d46,	// (0x00080362) list_notif_wgt_row_pane_t1

0x3d5c,	// (0x00080378) list_notif_wgt_row_pane_t2

0x3d6e,	// (0x0008038a) list_notif_wgt_row_pane_t3

0x0002,

0xfd95,	// (0x0008c3b1) list_notif_wgt_row_pane_t

0x26ff,	// (0x0007ed1b) list_recal_day_event_pane_g1

0x3d80,	// (0x0008039c) list_recal_day_event_pane_t1

0xdc01,	// (0x0008a21d) bg_button_pane_cp045

0x3d8f,	// (0x000803ab) cntbar_detail_btn_pane_t1

0x0449,	// (0x0007ca65) main_callh_pane_ParamLimits

0x0449,	// (0x0007ca65) main_callh_pane

0xdc01,	// (0x0008a21d) main_coverflow0_pane

0xdc01,	// (0x0008a21d) main_wgtman_pane

0xbf53,	// (0x0008856f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xbf53,	// (0x0008856f) main_fs_bigclock_unlock_btn_pane

0xc501,	// (0x00088b1d) bg_button_pane_cp16

0xc511,	// (0x00088b2d) cell_tport_appsw_pane_g3

0xccbc,	// (0x000892d8) cf0_flow_pane_ParamLimits

0xccbc,	// (0x000892d8) cf0_flow_pane

0x3d9d,	// (0x000803b9) listscroll_cf0_pane

0x3da8,	// (0x000803c4) main_cf0_pane_g1

0xcccb,	// (0x000892e7) main_cf0_pane_t1_ParamLimits

0xcccb,	// (0x000892e7) main_cf0_pane_t1

0xccdf,	// (0x000892fb) main_cf0_pane_t2_ParamLimits

0xccdf,	// (0x000892fb) main_cf0_pane_t2

0x0001,

0xfda1,	// (0x0008c3bd) main_cf0_pane_t_ParamLimits

0xfda1,	// (0x0008c3bd) main_cf0_pane_t

0x3dba,	// (0x000803d6) scroll_pane_cp11

0xccf3,	// (0x0008930f) cf0_flow_pane_g1

0xccfb,	// (0x00089317) cf0_flow_pane_g2

0x0001,

0xfda6,	// (0x0008c3c2) cf0_flow_pane_g

0xcd03,	// (0x0008931f) cf0_flow_pane_t1

0xdc01,	// (0x0008a21d) main_call6_pane

0xdc01,	// (0x0008a21d) main_calllock_pane

0xcd11,	// (0x0008932d) call6_btn_grp_pane_ParamLimits

0xcd11,	// (0x0008932d) call6_btn_grp_pane

0xcd20,	// (0x0008933c) call6_pane_g1_ParamLimits

0xcd20,	// (0x0008933c) call6_pane_g1

0xcd30,	// (0x0008934c) popup_call6_1st_window_ParamLimits

0xcd30,	// (0x0008934c) popup_call6_1st_window

0xcd3e,	// (0x0008935a) popup_call6_2nd_window_ParamLimits

0xcd3e,	// (0x0008935a) popup_call6_2nd_window

0xcd4c,	// (0x00089368) cell_call6_btn_pane_ParamLimits

0xcd4c,	// (0x00089368) cell_call6_btn_pane

0xe526,	// (0x0008ab42) bg_popup_call2_in_pane_cp03

0x3dc5,	// (0x000803e1) popup_call6_1st_window_g1

0x3dcd,	// (0x000803e9) popup_call6_1st_window_g2

0x3dd5,	// (0x000803f1) popup_call6_1st_window_g3

0x0002,

0xfdab,	// (0x0008c3c7) popup_call6_1st_window_g

0x3ddd,	// (0x000803f9) popup_call6_1st_window_t1

0x3dec,	// (0x00080408) popup_call6_1st_window_t2

0x3dfa,	// (0x00080416) popup_call6_1st_window_t3

0x0002,

0xfdb2,	// (0x0008c3ce) popup_call6_1st_window_t

0xe526,	// (0x0008ab42) bg_popup_call2_in_pane_cp04

0x3e08,	// (0x00080424) popup_call6_2nd_window_g1

0x3e10,	// (0x0008042c) popup_call6_2nd_window_g2

0x3e18,	// (0x00080434) popup_call6_2nd_window_g3

0x0002,

0xfdb9,	// (0x0008c3d5) popup_call6_2nd_window_g

0x3e20,	// (0x0008043c) popup_call6_2nd_window_t1

0x5ccb,	// (0x000822e7) bg_button_pane_cp15

0xcd5b,	// (0x00089377) cell_call6_btn_pane_g1

0xcd64,	// (0x00089380) cell_call6_btn_pane_t1

0xcd73,	// (0x0008938f) listscroll_wgtman_pane_ParamLimits

0xcd73,	// (0x0008938f) listscroll_wgtman_pane

0xcd8f,	// (0x000893ab) wgtman_btn_pane_ParamLimits

0xcd8f,	// (0x000893ab) wgtman_btn_pane

0xed26,	// (0x0008b342) aid_scroll_copy1

0x3e38,	// (0x00080454) list_wgtman_pane

0xcdc4,	// (0x000893e0) wgtman_btn_pane_g1_ParamLimits

0xcdc4,	// (0x000893e0) wgtman_btn_pane_g1

0xcdec,	// (0x00089408) wgtman_btn_pane_t1_ParamLimits

0xcdec,	// (0x00089408) wgtman_btn_pane_t1

0x3e42,	// (0x0008045e) wgtman_btn_pane_t2_ParamLimits

0x3e42,	// (0x0008045e) wgtman_btn_pane_t2

0x0001,

0xfdc0,	// (0x0008c3dc) wgtman_btn_pane_t_ParamLimits

0xfdc0,	// (0x0008c3dc) wgtman_btn_pane_t

0xce23,	// (0x0008943f) listrow_wgtman_pane_ParamLimits

0xce23,	// (0x0008943f) listrow_wgtman_pane

0xce3e,	// (0x0008945a) listrow_wgtman_pane_g1

0xce4b,	// (0x00089467) listrow_wgtman_pane_g2

0x0001,

0xfdc5,	// (0x0008c3e1) listrow_wgtman_pane_g

0xce69,	// (0x00089485) listrow_wgtman_pane_t1

0xce81,	// (0x0008949d) listrow_wgtman_pane_t2

0x0001,

0xfdca,	// (0x0008c3e6) listrow_wgtman_pane_t

0xcea7,	// (0x000894c3) wait_bar_pane_cp09

0x3e59,	// (0x00080475) main_calllock_btn_pane

0x3e63,	// (0x0008047f) main_calllock_pane_g1

0xdc01,	// (0x0008a21d) bg_button_pane_cp17

0x3e2f,	// (0x0008044b) main_calllock_btn_pane_g1

0x3e6b,	// (0x00080487) main_calllock_btn_pane_t1

0xdc01,	// (0x0008a21d) main_dialer3_pane

0xdc01,	// (0x0008a21d) main_fmrd2_pane

0xe548,	// (0x0008ab64) main_fs_bigclock_unlock_btn_pane_g1

0xcec1,	// (0x000894dd) main_fs_bigclock_unlock_btn_pane_t1

0xcecf,	// (0x000894eb) area_fmrd2_info_pane_ParamLimits

0xcecf,	// (0x000894eb) area_fmrd2_info_pane

0xcedd,	// (0x000894f9) area_fmrd2_visual_pane_ParamLimits

0xcedd,	// (0x000894f9) area_fmrd2_visual_pane

0xceeb,	// (0x00089507) fmrd2_indi_pane_ParamLimits

0xceeb,	// (0x00089507) fmrd2_indi_pane

0xcef8,	// (0x00089514) area_fmrd2_visual_pane_g1

0xcf00,	// (0x0008951c) area_fmrd2_visual_pane_t1

0xcf10,	// (0x0008952c) area_fmrd2_visual_pane_t2

0xcf20,	// (0x0008953c) area_fmrd2_visual_pane_t3

0x0002,

0xfdd4,	// (0x0008c3f0) area_fmrd2_visual_pane_t

0xcf30,	// (0x0008954c) area_fmrd2_info_pane_g1

0xcf38,	// (0x00089554) area_fmrd2_info_pane_t1

0xcf48,	// (0x00089564) area_fmrd2_info_pane_t2

0xcf58,	// (0x00089574) area_fmrd2_info_pane_t3

0xcf68,	// (0x00089584) area_fmrd2_info_pane_t4

0x0003,

0xfddb,	// (0x0008c3f7) area_fmrd2_info_pane_t

0xcf76,	// (0x00089592) fmrd2_indi_pane_t1

0xcf86,	// (0x000895a2) fmrd2_indi_pane_t2

0xcf96,	// (0x000895b2) fmrd2_indi_pane_t3

0x0002,

0xfde4,	// (0x0008c400) fmrd2_indi_pane_t

0x30b1,	// (0x0007f6cd) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x30b1,	// (0x0007f6cd) list_single_fs_bigclock_indicator_pane_g5

0x3162,	// (0x0007f77e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3162,	// (0x0007f77e) list_single_fs_bigclock_indicator_pane_t5

0xc6aa,	// (0x00088cc6) aid_cell_bcale_month_pane_ParamLimits

0xc6aa,	// (0x00088cc6) aid_cell_bcale_month_pane

0xc6c8,	// (0x00088ce4) bcale_month_pane_ParamLimits

0xc6c8,	// (0x00088ce4) bcale_month_pane

0xc6e6,	// (0x00088d02) bcale_preview_pane_ParamLimits

0xc6e6,	// (0x00088d02) bcale_preview_pane

0x3bf8,	// (0x00080214) list_single_fs_bigclock_pane_t1_ParamLimits

0x3c17,	// (0x00080233) list_single_fs_bigclock_pane_t2_ParamLimits

0x3c17,	// (0x00080233) list_single_fs_bigclock_pane_t2

0x0001,

0xfd5f,	// (0x0008c37b) list_single_fs_bigclock_pane_t_ParamLimits

0xfd5f,	// (0x0008c37b) list_single_fs_bigclock_pane_t

0xceb9,	// (0x000894d5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdcf,	// (0x0008c3eb) main_fs_bigclock_unlock_btn_pane_g

0xcfa4,	// (0x000895c0) aid_dia3_key_size_ParamLimits

0xcfa4,	// (0x000895c0) aid_dia3_key_size

0xcfb0,	// (0x000895cc) aid_dia3_listrow_size_ParamLimits

0xcfb0,	// (0x000895cc) aid_dia3_listrow_size

0xcfc0,	// (0x000895dc) dia3_keypad_fun_pane_ParamLimits

0xcfc0,	// (0x000895dc) dia3_keypad_fun_pane

0xcfd2,	// (0x000895ee) dia3_keypad_num_pane_ParamLimits

0xcfd2,	// (0x000895ee) dia3_keypad_num_pane

0xcfe4,	// (0x00089600) dia3_listscroll_pane_ParamLimits

0xcfe4,	// (0x00089600) dia3_listscroll_pane

0xcff2,	// (0x0008960e) dia3_numentry_pane_ParamLimits

0xcff2,	// (0x0008960e) dia3_numentry_pane

0x3e7a,	// (0x00080496) dia3_list_pane

0x3e85,	// (0x000804a1) scroll_pane_cp12

0xdc01,	// (0x0008a21d) bg_dia3_numentry_pane

0xd000,	// (0x0008961c) dia3_numentry_pane_t1

0xd00f,	// (0x0008962b) cell_dia3_key_num_pane

0xd017,	// (0x00089633) cell_dia3_key0_fun_pane_ParamLimits

0xd017,	// (0x00089633) cell_dia3_key0_fun_pane

0xd024,	// (0x00089640) cell_dia3_key1_fun_pane_ParamLimits

0xd024,	// (0x00089640) cell_dia3_key1_fun_pane

0xd031,	// (0x0008964d) dia3_listrow_pane

0x2e04,	// (0x0007f420) bg_dia3_numentry_pane_g1

0xdc01,	// (0x0008a21d) bg_button_pane_cp21

0x3e90,	// (0x000804ac) cell_dia3_key_num_pane_t1

0x3e9e,	// (0x000804ba) cell_dia3_key_num_pane_t2

0x3ead,	// (0x000804c9) cell_dia3_key_num_pane_t3

0x3ebc,	// (0x000804d8) cell_dia3_key_num_pane_t4

0x0003,

0xfdeb,	// (0x0008c407) cell_dia3_key_num_pane_t

0xdc01,	// (0x0008a21d) bg_button_pane_cp19

0xd03e,	// (0x0008965a) cell_dia3_key0_fun_pane_g1

0xdc01,	// (0x0008a21d) bg_button_pane_cp20

0xd046,	// (0x00089662) cell_dia3_key1_fun_pane_g1

0xd04e,	// (0x0008966a) area_left_week_number_pane

0xd061,	// (0x0008967d) area_top_day_name_pane

0xd06f,	// (0x0008968b) frame_month_view_pane

0x3ecb,	// (0x000804e7) grid_month_view_pane

0xd084,	// (0x000896a0) cell_top_day_name_pane_ParamLimits

0xd084,	// (0x000896a0) cell_top_day_name_pane

0xd09e,	// (0x000896ba) cell_area_left_week_number_pane_ParamLimits

0xd09e,	// (0x000896ba) cell_area_left_week_number_pane

0xd0c1,	// (0x000896dd) cell_month_view_pane_ParamLimits

0xd0c1,	// (0x000896dd) cell_month_view_pane

0x3ed9,	// (0x000804f5) frm_month_g1

0xd0ed,	// (0x00089709) frm_month_g2

0xd0fe,	// (0x0008971a) frm_month_g3

0xd10f,	// (0x0008972b) frm_month_g4

0xd120,	// (0x0008973c) frm_month_g5

0xd133,	// (0x0008974f) frm_month_g6

0xd146,	// (0x00089762) frm_month_g7

0x3ee6,	// (0x00080502) frm_month_g8

0xd159,	// (0x00089775) frm_month_g9

0xd166,	// (0x00089782) frm_month_g10

0xd173,	// (0x0008978f) frm_month_g11

0xd180,	// (0x0008979c) frm_month_g12

0xd18d,	// (0x000897a9) frm_month_g13

0xd19a,	// (0x000897b6) frm_month_g14

0xd1a9,	// (0x000897c5) frm_month_g15

0xd1b8,	// (0x000897d4) frm_month_g16

0x000f,

0xfdf4,	// (0x0008c410) frm_month_g

0x3ef3,	// (0x0008050f) cell_top_day_name_pane_t1

0xd1c7,	// (0x000897e3) cell_area_left_week_number_pane_g1

0xd1d6,	// (0x000897f2) cell_area_left_week_number_pane_t1

0xe302,	// (0x0008a91e) cell_month_view_pane_g1

0xd1ec,	// (0x00089808) cell_month_view_pane_t1

0xdc01,	// (0x0008a21d) main_fps_pane

0x337f,	// (0x0007f99b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x337f,	// (0x0007f99b) cmail_ddmenu_btn02_pane_cp1

0x339b,	// (0x0007f9b7) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x339b,	// (0x0007f9b7) cmail_ddmenu_btn02_pane_cp2

0xc9a7,	// (0x00088fc3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc9a7,	// (0x00088fc3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd12,	// (0x0008c32e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd12,	// (0x0008c32e) cmail_ddmenu_btn02_pane_g

0xc9c5,	// (0x00088fe1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc9c5,	// (0x00088fe1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd17,	// (0x0008c333) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd17,	// (0x0008c333) cmail_ddmenu_btn02_pane_t

0xd202,	// (0x0008981e) fps_text_pane_ParamLimits

0xd202,	// (0x0008981e) fps_text_pane

0xd20f,	// (0x0008982b) main_fps_pane_g1_ParamLimits

0xd20f,	// (0x0008982b) main_fps_pane_g1

0xd21d,	// (0x00089839) wait_bar_pane_cp010_ParamLimits

0xd21d,	// (0x00089839) wait_bar_pane_cp010

0xd229,	// (0x00089845) fps_text_pane_t1_ParamLimits

0xd229,	// (0x00089845) fps_text_pane_t1

0xa1a9,	// (0x000867c5) cam4_image_uncrop_pane_g1

0xa1b2,	// (0x000867ce) cam4_image_uncrop_pane_g2

0xa1bb,	// (0x000867d7) cam4_image_uncrop_pane_g3

0xa1c4,	// (0x000867e0) cam4_image_uncrop_pane_g4

0x0003,

0xf856,	// (0x0008be72) cam4_image_uncrop_pane_g

0xd031,	// (0x0008964d) dia3_listrow_pane_ParamLimits

0xdc01,	// (0x0008a21d) main_phob2_pane

0xc4e3,	// (0x00088aff) cell_tport_appsw_pane_cp02_ParamLimits

0xc4e3,	// (0x00088aff) cell_tport_appsw_pane_cp02

0xc4f2,	// (0x00088b0e) cell_tport_appsw_pane_cp03_ParamLimits

0xc4f2,	// (0x00088b0e) cell_tport_appsw_pane_cp03

0xdc01,	// (0x0008a21d) phob2_contact_card_pane

0xdc01,	// (0x0008a21d) phob2_listscroll_pane

0x3f06,	// (0x00080522) phob2_list_pane

0x3f0e,	// (0x0008052a) scroll_pane_cp034

0xd242,	// (0x0008985e) phob2_cc_data_pane_ParamLimits

0xd242,	// (0x0008985e) phob2_cc_data_pane

0xd25c,	// (0x00089878) phob2_cc_listscroll_pane_ParamLimits

0xd25c,	// (0x00089878) phob2_cc_listscroll_pane

0xce23,	// (0x0008943f) list_double_large_graphic_phob2_pane_ParamLimits

0xce23,	// (0x0008943f) list_double_large_graphic_phob2_pane

0xd276,	// (0x00089892) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd276,	// (0x00089892) list_double_large_graphic_phob2_pane_g1

0xd283,	// (0x0008989f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd283,	// (0x0008989f) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe15,	// (0x0008c431) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe15,	// (0x0008c431) list_double_large_graphic_phob2_pane_g

0xd2a9,	// (0x000898c5) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd2a9,	// (0x000898c5) list_double_large_graphic_phob2_pane_t1

0xd2be,	// (0x000898da) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd2be,	// (0x000898da) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe1e,	// (0x0008c43a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe1e,	// (0x0008c43a) list_double_large_graphic_phob2_pane_t

0xdc01,	// (0x0008a21d) list_highlight_pane_cp024

0x3f16,	// (0x00080532) phob2_cc_button_pane

0xd2d3,	// (0x000898ef) phob2_cc_data_pane_g1_ParamLimits

0xd2d3,	// (0x000898ef) phob2_cc_data_pane_g1

0xd2e2,	// (0x000898fe) phob2_cc_data_pane_g2_ParamLimits

0xd2e2,	// (0x000898fe) phob2_cc_data_pane_g2

0x0001,

0xfe23,	// (0x0008c43f) phob2_cc_data_pane_g_ParamLimits

0xfe23,	// (0x0008c43f) phob2_cc_data_pane_g

0xd2f1,	// (0x0008990d) phob2_cc_data_pane_t1_ParamLimits

0xd2f1,	// (0x0008990d) phob2_cc_data_pane_t1

0xd306,	// (0x00089922) phob2_cc_data_pane_t2_ParamLimits

0xd306,	// (0x00089922) phob2_cc_data_pane_t2

0xd31b,	// (0x00089937) phob2_cc_data_pane_t3_ParamLimits

0xd31b,	// (0x00089937) phob2_cc_data_pane_t3

0x0002,

0xfe28,	// (0x0008c444) phob2_cc_data_pane_t_ParamLimits

0xfe28,	// (0x0008c444) phob2_cc_data_pane_t

0x3f1e,	// (0x0008053a) phob2_cc_list_pane_ParamLimits

0x3f1e,	// (0x0008053a) phob2_cc_list_pane

0x27a8,	// (0x0007edc4) scroll_pane_cp035_ParamLimits

0x27a8,	// (0x0007edc4) scroll_pane_cp035

0xe29b,	// (0x0008a8b7) bg_button_pane_cp033

0x3f2a,	// (0x00080546) phob2_cc_button_pane_g1

0x3f36,	// (0x00080552) phob2_cc_button_pane_t1

0x3f4b,	// (0x00080567) phob2_cc_button_pane_t2

0x0001,

0xfe2f,	// (0x0008c44b) phob2_cc_button_pane_t

0xd330,	// (0x0008994c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd330,	// (0x0008994c) list_double_large_graphic_phob2_cc_pane

0xd39e,	// (0x000899ba) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd39e,	// (0x000899ba) list_double_large_graphic_phob2_cc_pane_g1

0xd3af,	// (0x000899cb) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd3af,	// (0x000899cb) list_double_large_graphic_phob2_cc_pane_g2

0xd3bb,	// (0x000899d7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd3bb,	// (0x000899d7) list_double_large_graphic_phob2_cc_pane_g3

0xd3c7,	// (0x000899e3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd3c7,	// (0x000899e3) list_double_large_graphic_phob2_cc_pane_g4

0xd3d3,	// (0x000899ef) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd3d3,	// (0x000899ef) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe34,	// (0x0008c450) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe34,	// (0x0008c450) list_double_large_graphic_phob2_cc_pane_g

0xd3df,	// (0x000899fb) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd3df,	// (0x000899fb) list_double_large_graphic_phob2_cc_pane_t1

0xd408,	// (0x00089a24) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd408,	// (0x00089a24) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe3f,	// (0x0008c45b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe3f,	// (0x0008c45b) list_double_large_graphic_phob2_cc_pane_t

0x3f5d,	// (0x00080579) list_highlight_pane_cp025_ParamLimits

0x3f5d,	// (0x00080579) list_highlight_pane_cp025

0xe29b,	// (0x0008a8b7) bg_button_pane_cp033_ParamLimits

0x3f2a,	// (0x00080546) phob2_cc_button_pane_g1_ParamLimits

0x3f36,	// (0x00080552) phob2_cc_button_pane_t1_ParamLimits

0x3f4b,	// (0x00080567) phob2_cc_button_pane_t2_ParamLimits

0xfe2f,	// (0x0008c44b) phob2_cc_button_pane_t_ParamLimits

0x5cbf,	// (0x000822db) popup_wgtman_window

0x25bf,	// (0x0007ebdb) scroll_pane_cp038

0xcdac,	// (0x000893c8) wgtman_btn_pane_cp_01_ParamLimits

0xcdac,	// (0x000893c8) wgtman_btn_pane_cp_01

0x3f6b,	// (0x00080587) wgtman_content_pane

0x3f74,	// (0x00080590) wgtman_heading_pane

0xdc01,	// (0x0008a21d) bg_heading_pane_cp02

0x3f7d,	// (0x00080599) wgtman_heading_pane_g1

0x3f85,	// (0x000805a1) wgtman_heading_pane_t1

0x3f93,	// (0x000805af) scroll_pane_cp036

0x3f9b,	// (0x000805b7) wgtman_list_pane

0x3fa3,	// (0x000805bf) wgtman_list_pane_t1_ParamLimits

0x3fa3,	// (0x000805bf) wgtman_list_pane_t1

0xa108,	// (0x00086724) cam4_grid_pane

0xae10,	// (0x0008742c) bg_button_pane_cp015_ParamLimits

0xae25,	// (0x00087441) bg_button_pane_cp016_ParamLimits

0xae31,	// (0x0008744d) bg_button_pane_cp017_ParamLimits

0xae89,	// (0x000874a5) popup_vitu2_query_window_g3_ParamLimits

0xae89,	// (0x000874a5) popup_vitu2_query_window_g3

0xaf2a,	// (0x00087546) popup_vitu2_query_window_t6_ParamLimits

0xaf2a,	// (0x00087546) popup_vitu2_query_window_t6

0xaf55,	// (0x00087571) popup_vitu2_query_window_t7_ParamLimits

0xaf55,	// (0x00087571) popup_vitu2_query_window_t7

0x2435,	// (0x0007ea51) cam4_grid_pane_g1

0x243e,	// (0x0007ea5a) cam4_grid_pane_g2

0x3fbd,	// (0x000805d9) cam4_grid_pane_g3

0x3fc6,	// (0x000805e2) cam4_grid_pane_g4

0x0003,

0xfe44,	// (0x0008c460) cam4_grid_pane_g

0x682f,	// (0x00082e4b) aid_placing_vt_slider_lsc_ParamLimits

0x6b7b,	// (0x00083197) vidtel_button_pane_ParamLimits

0x6b7b,	// (0x00083197) vidtel_button_pane

0xdc01,	// (0x0008a21d) bg_button_pane_cp034

0x3fd1,	// (0x000805ed) vidtel_button_pane_g1

0x3fd9,	// (0x000805f5) vidtel_button_pane_t1

0x26ef,	// (0x0007ed0b) aid_size_vtel_slider_touch

0x27a8,	// (0x0007edc4) scroll_pane_cp039

0xbc90,	// (0x000882ac) ncim_query_button_pane_cp01_ParamLimits

0xbcaf,	// (0x000882cb) ncimui_query_pane_g1_ParamLimits

0xe29b,	// (0x0008a8b7) input_focus_pane_cp012_ParamLimits

0x2e42,	// (0x0007f45e) ncim_query_entry_pane_t1_ParamLimits

0x27a8,	// (0x0007edc4) scroll_pane_cp039_ParamLimits

0xee0a,	// (0x0008b426) navi_pane_bcale_mc_g1

0xee12,	// (0x0008b42e) navi_pane_bcale_mc_t1

0x33cf,	// (0x0007f9eb) main_sp_fs_email_pane_g1

0x33db,	// (0x0007f9f7) main_sp_fs_email_pane_g2

0x0001,

0xfc47,	// (0x0008c263) main_sp_fs_email_pane_g

0x3882,	// (0x0007fe9e) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3882,	// (0x0007fe9e) list_single_cale_mrui_row_pane_g3

0xc9e5,	// (0x00089001) list_single_recal_day_pane_g5_event_pane

0x3a62,	// (0x0008007e) list_single_recal_day_pane_g7

0x3fef,	// (0x0008060b) list_recal_day_event_pane_cp01

0x3ff8,	// (0x00080614) list_recal_vselct_arw_lo_pane_cp01

0x4000,	// (0x0008061c) list_recal_vselct_arw_up_pane_cp01

0x4008,	// (0x00080624) list_recal_vselct_pane_cp01

0x26ff,	// (0x0007ed1b) list_recal_day_event_pane_cp01_g1

0x4012,	// (0x0008062e) list_recal_day_event_pane_cp01_t1

0x3a6a,	// (0x00080086) list_single_recal_day_pane_t1_ParamLimits

0x3a7c,	// (0x00080098) list_single_recal_day_pane_t2_ParamLimits

0xfd27,	// (0x0008c343) list_single_recal_day_pane_t_ParamLimits

0xe279,	// (0x0008a895) bg_notes_pane_ParamLimits

0xe352,	// (0x0008a96e) list_notes_pane_ParamLimits

0x5ee9,	// (0x00082505) scroll_pane_cp06_ParamLimits

0xe374,	// (0x0008a990) main_notes_pane_ParamLimits

0xe29b,	// (0x0008a8b7) main_welc_pane

0xd452,	// (0x00089a6e) main_welc_body_pane_ParamLimits

0xd452,	// (0x00089a6e) main_welc_body_pane

0xd46c,	// (0x00089a88) main_welc_opti_pane_ParamLimits

0xd46c,	// (0x00089a88) main_welc_opti_pane

0xd4cb,	// (0x00089ae7) main_welc_pane_t1_ParamLimits

0xd4cb,	// (0x00089ae7) main_welc_pane_t1

0xd653,	// (0x00089c6f) main_welc_body_row_pane_ParamLimits

0xd653,	// (0x00089c6f) main_welc_body_row_pane

0xe2f4,	// (0x0008a910) main_welc_opti_row_pane_ParamLimits

0xe2f4,	// (0x0008a910) main_welc_opti_row_pane

0x4030,	// (0x0008064c) main_welc_opti_row_pane_g1

0xd678,	// (0x00089c94) main_welc_opti_row_pane_t1

0x4038,	// (0x00080654) main_welc_body_row_pane_t1

0x3cf7,	// (0x00080313) popup_notif_wgt_heading_pane

0x3d11,	// (0x0008032d) aid_size_list_notif_wgt_del_ParamLimits

0x3d1e,	// (0x0008033a) list_notif_wgt_row_pane_g1_ParamLimits

0x3d2a,	// (0x00080346) list_notif_wgt_row_pane_g2_ParamLimits

0x3d39,	// (0x00080355) list_notif_wgt_row_pane_g3_ParamLimits

0xfd8e,	// (0x0008c3aa) list_notif_wgt_row_pane_g_ParamLimits

0x3d46,	// (0x00080362) list_notif_wgt_row_pane_t1_ParamLimits

0x3d5c,	// (0x00080378) list_notif_wgt_row_pane_t2_ParamLimits

0x3d6e,	// (0x0008038a) list_notif_wgt_row_pane_t3_ParamLimits

0xfd95,	// (0x0008c3b1) list_notif_wgt_row_pane_t_ParamLimits

0xce3e,	// (0x0008945a) listrow_wgtman_pane_g1_ParamLimits

0xce4b,	// (0x00089467) listrow_wgtman_pane_g2_ParamLimits

0xfdc5,	// (0x0008c3e1) listrow_wgtman_pane_g_ParamLimits

0xce69,	// (0x00089485) listrow_wgtman_pane_t1_ParamLimits

0xce81,	// (0x0008949d) listrow_wgtman_pane_t2_ParamLimits

0xfdca,	// (0x0008c3e6) listrow_wgtman_pane_t_ParamLimits

0xcea7,	// (0x000894c3) wait_bar_pane_cp09_ParamLimits

0xdc01,	// (0x0008a21d) bg_popup_heading_pane_cp02

0x4047,	// (0x00080663) popup_notif_wgt_heading_pane_g1

0x404f,	// (0x0008066b) popup_notif_wgt_heading_pane_t1

0xdc01,	// (0x0008a21d) main_vids_pane

0xdc01,	// (0x0008a21d) vids_listscroll_pane

0xd687,	// (0x00089ca3) scroll_pane_cp040

0xdc01,	// (0x0008a21d) vids_list_pane

0xd692,	// (0x00089cae) vids_list_double_pane_ParamLimits

0xd692,	// (0x00089cae) vids_list_double_pane

0xd6a9,	// (0x00089cc5) vids_list_double_pane_g1

0xd6b2,	// (0x00089cce) vids_list_double_pane_t1

0xd6c2,	// (0x00089cde) vids_list_double_pane_t2

0x0001,

0xfe63,	// (0x0008c47f) vids_list_double_pane_t

0x8866,	// (0x00084e82) main_ncimui_pane_ParamLimits

0xbae7,	// (0x00088103) main_ncimui_pane_g1_ParamLimits

0xbaf3,	// (0x0008810f) main_ncimui_pane_g2_ParamLimits

0xbaf3,	// (0x0008810f) main_ncimui_pane_g2

0x0001,

0xfb48,	// (0x0008c164) main_ncimui_pane_g_ParamLimits

0xfb48,	// (0x0008c164) main_ncimui_pane_g

0xd485,	// (0x00089aa1) main_welc_pane_g1_ParamLimits

0xd485,	// (0x00089aa1) main_welc_pane_g1

0xd491,	// (0x00089aad) main_welc_pane_g2_ParamLimits

0xd491,	// (0x00089aad) main_welc_pane_g2

0x0003,

0xfe4d,	// (0x0008c469) main_welc_pane_g_ParamLimits

0xfe4d,	// (0x0008c469) main_welc_pane_g

0x5ecb,	// (0x000824e7) listscroll_mce_pane_ParamLimits

0xef5f,	// (0x0008b57b) wait_bar_pane_cp10

0x16dc,	// (0x0007dcf8) main_cale_day_pane_ParamLimits

0x16dc,	// (0x0007dcf8) main_cale_week_pane_ParamLimits

0xe279,	// (0x0008a895) main_messa_pane_ParamLimits

0x954f,	// (0x00085b6b) main_clock2_btn_pane_ParamLimits

0x954f,	// (0x00085b6b) main_clock2_btn_pane

0x1f81,	// (0x0007e59d) main_clock2_btn_pane_cp01_ParamLimits

0x1f81,	// (0x0007e59d) main_clock2_btn_pane_cp01

0x380e,	// (0x0007fe2a) list_cale_mrui_pane_ParamLimits

0x3db2,	// (0x000803ce) main_cf0_pane_g2

0x0001,

0xfd9c,	// (0x0008c3b8) main_cf0_pane_g

0xd04e,	// (0x0008966a) area_left_week_number_pane_ParamLimits

0xd061,	// (0x0008967d) area_top_day_name_pane_ParamLimits

0xd06f,	// (0x0008968b) frame_month_view_pane_ParamLimits

0x3ecb,	// (0x000804e7) grid_month_view_pane_ParamLimits

0x3ed9,	// (0x000804f5) frm_month_g1_ParamLimits

0xd0ed,	// (0x00089709) frm_month_g2_ParamLimits

0xd0fe,	// (0x0008971a) frm_month_g3_ParamLimits

0xd10f,	// (0x0008972b) frm_month_g4_ParamLimits

0xd120,	// (0x0008973c) frm_month_g5_ParamLimits

0xd133,	// (0x0008974f) frm_month_g6_ParamLimits

0xd146,	// (0x00089762) frm_month_g7_ParamLimits

0x3ee6,	// (0x00080502) frm_month_g8_ParamLimits

0xd159,	// (0x00089775) frm_month_g9_ParamLimits

0xd166,	// (0x00089782) frm_month_g10_ParamLimits

0xd173,	// (0x0008978f) frm_month_g11_ParamLimits

0xd180,	// (0x0008979c) frm_month_g12_ParamLimits

0xd18d,	// (0x000897a9) frm_month_g13_ParamLimits

0xd19a,	// (0x000897b6) frm_month_g14_ParamLimits

0xd1a9,	// (0x000897c5) frm_month_g15_ParamLimits

0xd1b8,	// (0x000897d4) frm_month_g16_ParamLimits

0xfdf4,	// (0x0008c410) frm_month_g_ParamLimits

0x3ef3,	// (0x0008050f) cell_top_day_name_pane_t1_ParamLimits

0xd1c7,	// (0x000897e3) cell_area_left_week_number_pane_g1_ParamLimits

0xd1d6,	// (0x000897f2) cell_area_left_week_number_pane_t1_ParamLimits

0xe302,	// (0x0008a91e) cell_month_view_pane_g1_ParamLimits

0xd1ec,	// (0x00089808) cell_month_view_pane_t1_ParamLimits

0xe271,	// (0x0008a88d) main_clock2_btn_pane_g1

0x405d,	// (0x00080679) main_clock2_btn_pane_t1

0xe29b,	// (0x0008a8b7) listscroll_cmail_pane_ParamLimits

0x33cf,	// (0x0007f9eb) main_sp_fs_email_pane_g1_ParamLimits

0x33db,	// (0x0007f9f7) main_sp_fs_email_pane_g2_ParamLimits

0xfc47,	// (0x0008c263) main_sp_fs_email_pane_g_ParamLimits

0x39d2,	// (0x0007ffee) list_recal_day_pane_ParamLimits

0x39e3,	// (0x0007ffff) mian_recal_day_pane_t1

0xc3d1,	// (0x000889ed) list_single_dyc_row_text_pane_t4_ParamLimits

0xc3d1,	// (0x000889ed) list_single_dyc_row_text_pane_t4

0xc408,	// (0x00088a24) list_single_dyc_row_text_pane_t5_ParamLimits

0xc408,	// (0x00088a24) list_single_dyc_row_text_pane_t5

0x34a7,	// (0x0007fac3) list_single_dyc_row_text_pane_t6_ParamLimits

0x34a7,	// (0x0007fac3) list_single_dyc_row_text_pane_t6

0xe904,	// (0x0008af20) aid_mgn_list_cale_time_pane

0x8866,	// (0x00084e82) main_gallery2_pane_ParamLimits

0x1f97,	// (0x0007e5b3) main_clock2_pane_cp01_t1

0x1fa7,	// (0x0007e5c3) main_clock2_pane_cp01_t3

0x0001,

0xf732,	// (0x0008bd4e) main_clock2_pane_cp01_t

0x633e,	// (0x0008295a) cale_week_scroll_pane_g16_ParamLimits

0x633e,	// (0x0008295a) cale_week_scroll_pane_g16

0xe526,	// (0x0008ab42) vorec_slider_pane

0x3fd9,	// (0x000805f5) vidtel_button_pane_t1_ParamLimits

0xca40,	// (0x0008905c) main_fs_bigclock_clock_pane_g1_ParamLimits

0xca40,	// (0x0008905c) main_fs_bigclock_clock_pane_g2_ParamLimits

0xca4d,	// (0x00089069) main_fs_bigclock_clock_pane_g3_ParamLimits

0xca4d,	// (0x00089069) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd4a,	// (0x0008c366) main_fs_bigclock_clock_pane_g_ParamLimits

0xca59,	// (0x00089075) main_fs_bigclock_clock_pane_t1_ParamLimits

0xca6c,	// (0x00089088) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd53,	// (0x0008c36f) main_fs_bigclock_clock_pane_t_ParamLimits

0x8eec,	// (0x00085508) main_mup3_lyrics_pane_ParamLimits

0x8eec,	// (0x00085508) main_mup3_lyrics_pane

0xd6f6,	// (0x00089d12) main_mup3_lyrics_pane_t1_ParamLimits

0xd6f6,	// (0x00089d12) main_mup3_lyrics_pane_t1

0x9a7b,	// (0x00086097) aid_main_mp4_pane_t1_area

0x9a85,	// (0x000860a1) aid_main_mp4_pane_t2_area

0x9b84,	// (0x000861a0) main_mp4_pane_g7_ParamLimits

0x9b84,	// (0x000861a0) main_mp4_pane_g7

0x9b90,	// (0x000861ac) main_mp4_pane_g8_ParamLimits

0x9b90,	// (0x000861ac) main_mp4_pane_g8

0x9fb0,	// (0x000865cc) aid_call6_pane_g1_size

0xd372,	// (0x0008998e) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd372,	// (0x0008998e) list_double_large_graphic_phob2_other_pane

0xe8bc,	// (0x0008aed8) list_double_large_graphic_phob2_other_pane_g1

0xdc01,	// (0x0008a21d) list_highlight_pane_cp026

0xe29b,	// (0x0008a8b7) main_welc_pane_ParamLimits

0xc270,	// (0x0008888c) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc270,	// (0x0008888c) main_sp_fs_ctrlbar_pane_g3

0xc288,	// (0x000888a4) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc288,	// (0x000888a4) main_sp_fs_ctrlbar_pane_g4

0xc2ba,	// (0x000888d6) toolbar2_fixed_button_pane_cp01

0xc2c5,	// (0x000888e1) toolbar2_fixed_button_pane_cp02

0xc2d0,	// (0x000888ec) toolbar2_fixed_button_pane_cp03

0xd443,	// (0x00089a5f) list_welc_entry_pane_ParamLimits

0xd443,	// (0x00089a5f) list_welc_entry_pane

0xd49f,	// (0x00089abb) main_welc_pane_g3_ParamLimits

0xd49f,	// (0x00089abb) main_welc_pane_g3

0xd4e5,	// (0x00089b01) main_welc_pane_t2_ParamLimits

0xd4e5,	// (0x00089b01) main_welc_pane_t2

0xd4f9,	// (0x00089b15) main_welc_pane_t3_ParamLimits

0xd4f9,	// (0x00089b15) main_welc_pane_t3

0x0005,

0xfe56,	// (0x0008c472) main_welc_pane_t_ParamLimits

0xfe56,	// (0x0008c472) main_welc_pane_t

0xd5f5,	// (0x00089c11) welc_button_pane_ParamLimits

0xd5f5,	// (0x00089c11) welc_button_pane

0xd645,	// (0x00089c61) welc_service_logo_pane_ParamLimits

0xd645,	// (0x00089c61) welc_service_logo_pane

0xd728,	// (0x00089d44) list_single_welc_entry_pane_ParamLimits

0xd728,	// (0x00089d44) list_single_welc_entry_pane

0xd739,	// (0x00089d55) list_single_welc_entry_pane_g1

0xd741,	// (0x00089d5d) list_single_welc_entry_pane_t1

0xd74f,	// (0x00089d6b) list_single_welc_entry_pane_t2

0x0001,

0xfe68,	// (0x0008c484) list_single_welc_entry_pane_t

0xdc01,	// (0x0008a21d) bg_button_pane_cp035

0x406b,	// (0x00080687) welc_button_pane_t1

0x4079,	// (0x00080695) welc_service_logo_pane_g1

0x4082,	// (0x0008069e) welc_service_logo_pane_g2

0x0001,

0xfe6d,	// (0x0008c489) welc_service_logo_pane_g

0x5ccb,	// (0x000822e7) main_int_radio_pane

0xf01e,	// (0x0008b63a) list_single_fs_dyc_pane_g1

0xd28f,	// (0x000898ab) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xd28f,	// (0x000898ab) list_double_large_graphic_phob2_pane_g3

0xd29b,	// (0x000898b7) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd29b,	// (0x000898b7) list_double_large_graphic_phob2_pane_g4

0xd75d,	// (0x00089d79) main_int_radio1_pane_ParamLimits

0xd75d,	// (0x00089d79) main_int_radio1_pane

0x408b,	// (0x000806a7) find_pane_cp02

0xd76f,	// (0x00089d8b) input_focus_pane_cp12_ParamLimits

0xd76f,	// (0x00089d8b) input_focus_pane_cp12

0xd77b,	// (0x00089d97) input_focus_pane_cp13_ParamLimits

0xd77b,	// (0x00089d97) input_focus_pane_cp13

0xd793,	// (0x00089daf) input_focus_pane_cp14_ParamLimits

0xd793,	// (0x00089daf) input_focus_pane_cp14

0x4094,	// (0x000806b0) int_radio1_listscroll_pane

0xd7ab,	// (0x00089dc7) main_int_radio1_pane_g1_ParamLimits

0xd7ab,	// (0x00089dc7) main_int_radio1_pane_g1

0xd7bb,	// (0x00089dd7) main_int_radio1_pane_t1_ParamLimits

0xd7bb,	// (0x00089dd7) main_int_radio1_pane_t1

0xd7cf,	// (0x00089deb) main_int_radio1_pane_t2_ParamLimits

0xd7cf,	// (0x00089deb) main_int_radio1_pane_t2

0xd7e3,	// (0x00089dff) main_int_radio1_pane_t3_ParamLimits

0xd7e3,	// (0x00089dff) main_int_radio1_pane_t3

0xd7f7,	// (0x00089e13) main_int_radio1_pane_t4_ParamLimits

0xd7f7,	// (0x00089e13) main_int_radio1_pane_t4

0x409e,	// (0x000806ba) main_int_radio1_pane_t5_ParamLimits

0x409e,	// (0x000806ba) main_int_radio1_pane_t5

0xd80e,	// (0x00089e2a) main_int_radio1_pane_t6_ParamLimits

0xd80e,	// (0x00089e2a) main_int_radio1_pane_t6

0xd820,	// (0x00089e3c) main_int_radio1_pane_t7_ParamLimits

0xd820,	// (0x00089e3c) main_int_radio1_pane_t7

0xd832,	// (0x00089e4e) main_int_radio1_pane_t8_ParamLimits

0xd832,	// (0x00089e4e) main_int_radio1_pane_t8

0xd846,	// (0x00089e62) main_int_radio1_pane_t9_ParamLimits

0xd846,	// (0x00089e62) main_int_radio1_pane_t9

0xd858,	// (0x00089e74) main_int_radio1_pane_t10_ParamLimits

0xd858,	// (0x00089e74) main_int_radio1_pane_t10

0xd889,	// (0x00089ea5) main_int_radio1_pane_t11_ParamLimits

0xd889,	// (0x00089ea5) main_int_radio1_pane_t11

0xd8ba,	// (0x00089ed6) main_int_radio1_pane_t12_ParamLimits

0xd8ba,	// (0x00089ed6) main_int_radio1_pane_t12

0x000b,

0xfe72,	// (0x0008c48e) main_int_radio1_pane_t_ParamLimits

0xfe72,	// (0x0008c48e) main_int_radio1_pane_t

0x40b0,	// (0x000806cc) int_radio_list_pane

0x3f0e,	// (0x0008052a) scroll_pane_cp037

0x40b8,	// (0x000806d4) list_double_large_graphic_int_radio_pane_ParamLimits

0x40b8,	// (0x000806d4) list_double_large_graphic_int_radio_pane

0x40d0,	// (0x000806ec) list_double_large_graphic_int_radio_pane_g1

0x40d9,	// (0x000806f5) list_double_large_graphic_int_radio_pane_t1

0x40e7,	// (0x00080703) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe8b,	// (0x0008c4a7) list_double_large_graphic_int_radio_pane_t

0xdc01,	// (0x0008a21d) list_highlight_pane_cp027

0x4020,	// (0x0008063c) main_button_pane_4

0xd4ab,	// (0x00089ac7) main_welc_pane_g4_ParamLimits

0xd4ab,	// (0x00089ac7) main_welc_pane_g4

0xd50b,	// (0x00089b27) main_welc_pane_t4_ParamLimits

0xd50b,	// (0x00089b27) main_welc_pane_t4

0xd51d,	// (0x00089b39) main_welc_pane_t5_ParamLimits

0xd51d,	// (0x00089b39) main_welc_pane_t5

0xd54d,	// (0x00089b69) main_welc_pane_t6_ParamLimits

0xd54d,	// (0x00089b69) main_welc_pane_t6

0xd603,	// (0x00089c1f) welc_button_pane_2_ParamLimits

0xd603,	// (0x00089c1f) welc_button_pane_2

0xd61b,	// (0x00089c37) welc_button_pane_3_ParamLimits

0xd61b,	// (0x00089c37) welc_button_pane_3

0x4028,	// (0x00080644) welc_button_pane_4

0xd635,	// (0x00089c51) welc_button_pane_5_ParamLimits

0xd635,	// (0x00089c51) welc_button_pane_5

0x5a3d,	// (0x00082059) main_popup_welc_pane

0x4104,	// (0x00080720) main_welc_sk_g3

0x410e,	// (0x0008072a) main_welc_sk_g4

0x4118,	// (0x00080734) main_welc_sk_t3

0x4128,	// (0x00080744) main_welc_sk_t4

0x4138,	// (0x00080754) popup_welc_pane_t4

0x4146,	// (0x00080762) popup_welc_pane_t5

0x4156,	// (0x00080772) popup_welc_pane_t6

0x5ccb,	// (0x000822e7) main_acti_pane

0xdc01,	// (0x0008a21d) main_sso_pane

0xd8d1,	// (0x00089eed) sso_body_pane_ParamLimits

0xd8d1,	// (0x00089eed) sso_body_pane

0xd8df,	// (0x00089efb) sso_logo_pane_ParamLimits

0xd8df,	// (0x00089efb) sso_logo_pane

0xd906,	// (0x00089f22) sso_sk_pane_ParamLimits

0xd906,	// (0x00089f22) sso_sk_pane

0xe548,	// (0x0008ab64) main_sso_logo_pane_g1

0xd913,	// (0x00089f2f) sso_sk_pane_t1_ParamLimits

0xd913,	// (0x00089f2f) sso_sk_pane_t1

0xd927,	// (0x00089f43) sso_sk_pane_t2_ParamLimits

0xd927,	// (0x00089f43) sso_sk_pane_t2

0x0001,

0xfe90,	// (0x0008c4ac) sso_sk_pane_t_ParamLimits

0xfe90,	// (0x0008c4ac) sso_sk_pane_t

0x4194,	// (0x000807b0) aid_sso_gap

0x419d,	// (0x000807b9) aid_sso_txt1

0x41a7,	// (0x000807c3) aid_sso_txt2

0x41b1,	// (0x000807cd) aid_sso_txt3

0x0002,

0xfe95,	// (0x0008c4b1) aid_sso_txt

0x41bb,	// (0x000807d7) aid_sso_widget

0xd986,	// (0x00089fa2) sso_btn_pane_ParamLimits

0xd986,	// (0x00089fa2) sso_btn_pane

0xd9ff,	// (0x0008a01b) sso_option_pane_ParamLimits

0xd9ff,	// (0x0008a01b) sso_option_pane

0xda79,	// (0x0008a095) sso_query_pane_ParamLimits

0xda79,	// (0x0008a095) sso_query_pane

0xdac9,	// (0x0008a0e5) sso_query_pane_cp01_ParamLimits

0xdac9,	// (0x0008a0e5) sso_query_pane_cp01

0xdb1b,	// (0x0008a137) sso_t_hdr_pane_ParamLimits

0xdb1b,	// (0x0008a137) sso_t_hdr_pane

0xdb3a,	// (0x0008a156) sso_t_nml_pane_ParamLimits

0xdb3a,	// (0x0008a156) sso_t_nml_pane

0x41b1,	// (0x000807cd) sso_t_sub_pane

0xd8ec,	// (0x00089f08) sso_popup_window_ParamLimits

0xd8ec,	// (0x00089f08) sso_popup_window

0xd939,	// (0x00089f55) sso_apps_pane_ParamLimits

0xd939,	// (0x00089f55) sso_apps_pane

0xd95c,	// (0x00089f78) sso_body_pane_g1

0xd966,	// (0x00089f82) sso_body_pane_t1

0xd976,	// (0x00089f92) sso_body_pane_t2

0x0001,

0xfe9c,	// (0x0008c4b8) sso_body_pane_t

0xd9d1,	// (0x00089fed) sso_btn_pane_cp01_ParamLimits

0xd9d1,	// (0x00089fed) sso_btn_pane_cp01

0xda4b,	// (0x0008a067) sso_prog_pane_ParamLimits

0xda4b,	// (0x0008a067) sso_prog_pane

0x41c5,	// (0x000807e1) sso_t_hdr_pane_t1_ParamLimits

0x41c5,	// (0x000807e1) sso_t_hdr_pane_t1

0x41d8,	// (0x000807f4) input_focus_pane_cp10_ParamLimits

0x41d8,	// (0x000807f4) input_focus_pane_cp10

0x41ee,	// (0x0008080a) sso_query_pane_t1_ParamLimits

0x41ee,	// (0x0008080a) sso_query_pane_t1

0x4201,	// (0x0008081d) sso_query_pane_t2_ParamLimits

0x4201,	// (0x0008081d) sso_query_pane_t2

0x421c,	// (0x00080838) sso_query_pane_t3_ParamLimits

0x421c,	// (0x00080838) sso_query_pane_t3

0x4246,	// (0x00080862) sso_query_pane_t4_ParamLimits

0x4246,	// (0x00080862) sso_query_pane_t4

0x0003,

0xfea1,	// (0x0008c4bd) sso_query_pane_t_ParamLimits

0xfea1,	// (0x0008c4bd) sso_query_pane_t

0xdc01,	// (0x0008a21d) bg_button_pane_cp22

0x40f5,	// (0x00080711) sso_btn_pane_t1

0xdb8a,	// (0x0008a1a6) sso_t_nml_pane_t1_ParamLimits

0xdb8a,	// (0x0008a1a6) sso_t_nml_pane_t1

0x426a,	// (0x00080886) sso_option_row_pane_ParamLimits

0x426a,	// (0x00080886) sso_option_row_pane

0x4277,	// (0x00080893) sso_t_sub_pane_t1_ParamLimits

0x4277,	// (0x00080893) sso_t_sub_pane_t1

0xe29b,	// (0x0008a8b7) bg_popup_window_pane_cp11_ParamLimits

0xe29b,	// (0x0008a8b7) bg_popup_window_pane_cp11

0x428a,	// (0x000808a6) popup_sk_window_cp01_ParamLimits

0x428a,	// (0x000808a6) popup_sk_window_cp01

0x4297,	// (0x000808b3) sso_popup_body_pane_ParamLimits

0x4297,	// (0x000808b3) sso_popup_body_pane

0x42a4,	// (0x000808c0) scroll_pane_cp21_ParamLimits

0x42a4,	// (0x000808c0) scroll_pane_cp21

0x42b1,	// (0x000808cd) sso_popup_body_t_pane_ParamLimits

0x42b1,	// (0x000808cd) sso_popup_body_t_pane

0x42be,	// (0x000808da) sso_popup_body_t_hdr_pane_ParamLimits

0x42be,	// (0x000808da) sso_popup_body_t_hdr_pane

0x42cc,	// (0x000808e8) sso_popup_body_t_nml_pane_ParamLimits

0x42cc,	// (0x000808e8) sso_popup_body_t_nml_pane

0x42e7,	// (0x00080903) sso_popup_body_t_sub_pane_ParamLimits

0x42e7,	// (0x00080903) sso_popup_body_t_sub_pane

0x430a,	// (0x00080926) sso_popup_body_t_hdr_pane_t1

0xdba7,	// (0x0008a1c3) sso_popup_body_t_nml_pane_t1_ParamLimits

0xdba7,	// (0x0008a1c3) sso_popup_body_t_nml_pane_t1

0x431a,	// (0x00080936) sso_popup_body_t_sub_pane_t1_ParamLimits

0x431a,	// (0x00080936) sso_popup_body_t_sub_pane_t1

0xe548,	// (0x0008ab64) sso_prog_pane_g1

0xdbe8,	// (0x0008a204) sso_apps_pane_comp1_ParamLimits

0xdbe8,	// (0x0008a204) sso_apps_pane_comp1

0x433f,	// (0x0008095b) sso_apps_pane_comp1_g1

0x4347,	// (0x00080963) sso_apps_pane_comp1_t1

0x4355,	// (0x00080971) sso_option_row_pane_g1

0x435d,	// (0x00080979) sso_option_row_pane_t1

0xd431,	// (0x00089a4d) bg_welc_area_ParamLimits

0xd431,	// (0x00089a4d) bg_welc_area

0xd583,	// (0x00089b9f) sso_t_hdr_pane_a_t1_ParamLimits

0xd583,	// (0x00089b9f) sso_t_hdr_pane_a_t1

0xd597,	// (0x00089bb3) sso_t_nml_pane_a_t1_ParamLimits

0xd597,	// (0x00089bb3) sso_t_nml_pane_a_t1

0xd5c1,	// (0x00089bdd) sso_t_sub_pane_a_t1_ParamLimits

0xd5c1,	// (0x00089bdd) sso_t_sub_pane_a_t1

0x40f5,	// (0x00080711) sso_btn_pane_t1_copy1

0xdc01,	// (0x0008a21d) welc_button_pane_2_comp1

0x4164,	// (0x00080780) sso_t_hdr_pane_p_t1

0x4174,	// (0x00080790) sso_t_nml_pane_p_t1

0x4184,	// (0x000807a0) sso_t_sub_pane_p_t1
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
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
