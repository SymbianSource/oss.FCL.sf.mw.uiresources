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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000290a9 };

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
0x1d61,	// (0x0002ae0a) Screen

0x1d6d,	// (0x0002ae16) application_window

0x1d79,	// (0x0002ae22) area_bottom_pane_ParamLimits

0x1d79,	// (0x0002ae22) area_bottom_pane

0x08d8,	// (0x00029981) area_top_pane_ParamLimits

0x08d8,	// (0x00029981) area_top_pane

0xaf72,	// (0x0003401b) call_video_uplink_pane_ParamLimits

0xaf72,	// (0x0003401b) call_video_uplink_pane

0x0966,	// (0x00029a0f) main_pane_ParamLimits

0x0966,	// (0x00029a0f) main_pane

0xef82,	// (0x0003802b) context_pane

0x4443,	// (0x0002d4ec) navi_pane

0x4475,	// (0x0002d51e) popup_cale_events_window_ParamLimits

0x4475,	// (0x0002d51e) popup_cale_events_window

0xef95,	// (0x0003803e) popup_mup_playback_window

0x448d,	// (0x0002d536) signal_pane

0xd100,	// (0x000361a9) main_browser_pane

0xd318,	// (0x000363c1) main_burst_pane

0x0d74,	// (0x00029e1d) main_calc_pane

0xef76,	// (0x0003801f) main_cale_day_pane

0x0c24,	// (0x00029ccd) main_cale_month_pane

0xef76,	// (0x0003801f) main_cale_week_pane

0xd318,	// (0x000363c1) main_call_pane

0xcd80,	// (0x00035e29) main_call_poc_pane

0xd318,	// (0x000363c1) main_camera_pane

0xd318,	// (0x000363c1) main_chi_dic_pane

0xda89,	// (0x00036b32) main_clock_pane

0xcd80,	// (0x00035e29) main_fmradio_pane

0xd318,	// (0x000363c1) main_graph_messa_pane

0xcd80,	// (0x00035e29) main_help_pane

0xd100,	// (0x000361a9) main_im_pane

0xcfe9,	// (0x00036092) main_image_pane_ParamLimits

0xcfe9,	// (0x00036092) main_image_pane

0xcd80,	// (0x00035e29) main_location2_pane

0xd318,	// (0x000363c1) main_location_pane

0xcfe9,	// (0x00036092) main_messa_pane

0xcd80,	// (0x00035e29) main_mp2_pane

0xd318,	// (0x000363c1) main_mp_pane

0xcd80,	// (0x00035e29) main_msg_pane

0xcd80,	// (0x00035e29) main_mup_eq_pane

0xcd80,	// (0x00035e29) main_mup_pane

0xd100,	// (0x000361a9) main_notes_pane

0xcd80,	// (0x00035e29) main_pec_pane

0xcd80,	// (0x00035e29) main_phob_pane

0xcd80,	// (0x00035e29) main_pinb_pane

0xcd80,	// (0x00035e29) main_postcard_pane

0xcd80,	// (0x00035e29) main_qdial_pane

0xd318,	// (0x000363c1) main_skin_pane

0xcd80,	// (0x00035e29) main_smil2_pane

0xd318,	// (0x000363c1) main_smil_pane

0xd318,	// (0x000363c1) main_video_pane

0xd318,	// (0x000363c1) main_video_tele_pane

0xcfe9,	// (0x00036092) main_viewer_pane_ParamLimits

0xcfe9,	// (0x00036092) main_viewer_pane

0xd318,	// (0x000363c1) main_vorec_pane

0x0dc8,	// (0x00029e71) popup_blid_sat_info_window_ParamLimits

0x0dc8,	// (0x00029e71) popup_blid_sat_info_window

0x0e20,	// (0x00029ec9) popup_dyc_status_message_window_ParamLimits

0x0e20,	// (0x00029ec9) popup_dyc_status_message_window

0x0e3a,	// (0x00029ee3) popup_grid_large_graphic_window_ParamLimits

0x0e3a,	// (0x00029ee3) popup_grid_large_graphic_window

0x0ef6,	// (0x00029f9f) popup_loc_request_window_ParamLimits

0x0ef6,	// (0x00029f9f) popup_loc_request_window

0x0fec,	// (0x0002a095) popup_wml_address_window_ParamLimits

0x0fec,	// (0x0002a095) popup_wml_address_window

0x4287,	// (0x0002d330) call_muted_g1

0x3f7d,	// (0x0002d026) popup_call_audio_conf_window_ParamLimits

0x3f7d,	// (0x0002d026) popup_call_audio_conf_window

0x429b,	// (0x0002d344) popup_call_audio_first_window_ParamLimits

0x429b,	// (0x0002d344) popup_call_audio_first_window

0x4311,	// (0x0002d3ba) popup_call_audio_in_window_ParamLimits

0x4311,	// (0x0002d3ba) popup_call_audio_in_window

0x434d,	// (0x0002d3f6) popup_call_audio_out_window_ParamLimits

0x434d,	// (0x0002d3f6) popup_call_audio_out_window

0x4387,	// (0x0002d430) popup_call_audio_second_window_ParamLimits

0x4387,	// (0x0002d430) popup_call_audio_second_window

0x43dd,	// (0x0002d486) popup_call_audio_wait_window_ParamLimits

0x43dd,	// (0x0002d486) popup_call_audio_wait_window

0x4412,	// (0x0002d4bb) popup_number_entry_window_ParamLimits

0x4412,	// (0x0002d4bb) popup_number_entry_window

0xc96d,	// (0x00035a16) bg_popup_call_pane_cp05_ParamLimits

0xc96d,	// (0x00035a16) bg_popup_call_pane_cp05

0xc98d,	// (0x00035a36) popup_number_entry_window_t1

0xc9a0,	// (0x00035a49) popup_number_entry_window_t2

0xc9b2,	// (0x00035a5b) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x000380c6) popup_number_entry_window_t

0xc9c4,	// (0x00035a6d) text_title_cp2

0xc9d7,	// (0x00035a80) bg_popup_call_pane_cp_ParamLimits

0xc9d7,	// (0x00035a80) bg_popup_call_pane_cp

0xc9e5,	// (0x00035a8e) call_thumbnail_pane

0xc9ed,	// (0x00035a96) popup_call_audio_in_window_g1_ParamLimits

0xc9ed,	// (0x00035a96) popup_call_audio_in_window_g1

0xc9f9,	// (0x00035aa2) popup_call_audio_in_window_g2_ParamLimits

0xc9f9,	// (0x00035aa2) popup_call_audio_in_window_g2

0xca05,	// (0x00035aae) popup_call_audio_in_window_g3_ParamLimits

0xca05,	// (0x00035aae) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x000380cf) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x000380cf) popup_call_audio_in_window_g

0xca11,	// (0x00035aba) popup_call_audio_in_window_t1_ParamLimits

0xca11,	// (0x00035aba) popup_call_audio_in_window_t1

0xca2d,	// (0x00035ad6) popup_call_audio_in_window_t2_ParamLimits

0xca2d,	// (0x00035ad6) popup_call_audio_in_window_t2

0xca49,	// (0x00035af2) popup_call_audio_in_window_t3_ParamLimits

0xca49,	// (0x00035af2) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x000380d6) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x000380d6) popup_call_audio_in_window_t

0xc9d7,	// (0x00035a80) bg_popup_call_pane_cp01_ParamLimits

0xc9d7,	// (0x00035a80) bg_popup_call_pane_cp01

0xc9e5,	// (0x00035a8e) call_thumbnail_pane_cp02

0xca5c,	// (0x00035b05) call_type_pane_cp022

0xca64,	// (0x00035b0d) popup_call_audio_out_window_g1_ParamLimits

0xca64,	// (0x00035b0d) popup_call_audio_out_window_g1

0xca76,	// (0x00035b1f) popup_call_audio_out_window_g2_ParamLimits

0xca76,	// (0x00035b1f) popup_call_audio_out_window_g2

0xca82,	// (0x00035b2b) popup_call_audio_out_window_g3_ParamLimits

0xca82,	// (0x00035b2b) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x000380dd) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x000380dd) popup_call_audio_out_window_g

0xca94,	// (0x00035b3d) popup_call_audio_out_window_t1_ParamLimits

0xca94,	// (0x00035b3d) popup_call_audio_out_window_t1

0xcaac,	// (0x00035b55) popup_call_audio_out_window_t2_ParamLimits

0xcaac,	// (0x00035b55) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x000380e4) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x000380e4) popup_call_audio_out_window_t

0xcac1,	// (0x00035b6a) bg_popup_call_pane_ParamLimits

0xcac1,	// (0x00035b6a) bg_popup_call_pane

0x1df2,	// (0x0002ae9b) call_thumbnail_pane_cp_ParamLimits

0x1df2,	// (0x0002ae9b) call_thumbnail_pane_cp

0xcb45,	// (0x00035bee) call_type_pane_cp01_ParamLimits

0xcb45,	// (0x00035bee) call_type_pane_cp01

0xcb89,	// (0x00035c32) popup_call_audio_first_window_g1_ParamLimits

0xcb89,	// (0x00035c32) popup_call_audio_first_window_g1

0xcbd5,	// (0x00035c7e) popup_call_audio_first_window_g2_ParamLimits

0xcbd5,	// (0x00035c7e) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x000380e9) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x000380e9) popup_call_audio_first_window_g

0xcc19,	// (0x00035cc2) popup_call_audio_first_window_t1_ParamLimits

0xcc19,	// (0x00035cc2) popup_call_audio_first_window_t1

0xccc5,	// (0x00035d6e) popup_call_audio_first_window_t4_ParamLimits

0xccc5,	// (0x00035d6e) popup_call_audio_first_window_t4

0xcd51,	// (0x00035dfa) popup_call_audio_first_window_t5_ParamLimits

0xcd51,	// (0x00035dfa) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x000380ee) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x000380ee) popup_call_audio_first_window_t

0xcd80,	// (0x00035e29) bg_popup_call_pane_cp02

0xcd8a,	// (0x00035e33) call_type_pane_cp023

0xcd92,	// (0x00035e3b) popup_call_audio_wait_window_g1

0xcd9a,	// (0x00035e43) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x000380f5) popup_call_audio_wait_window_g

0xcda2,	// (0x00035e4b) popup_call_audio_wait_window_t3

0xcdb0,	// (0x00035e59) bg_popup_call_pane_cp03_ParamLimits

0xcdb0,	// (0x00035e59) bg_popup_call_pane_cp03

0xce10,	// (0x00035eb9) call_thumbnail_pane_cp011_ParamLimits

0xce10,	// (0x00035eb9) call_thumbnail_pane_cp011

0xce1c,	// (0x00035ec5) call_type_pane_cp034_ParamLimits

0xce1c,	// (0x00035ec5) call_type_pane_cp034

0xce58,	// (0x00035f01) popup_call_audio_second_window_g1_ParamLimits

0xce58,	// (0x00035f01) popup_call_audio_second_window_g1

0xce94,	// (0x00035f3d) popup_call_audio_second_window_g2_ParamLimits

0xce94,	// (0x00035f3d) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x000380fa) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x000380fa) popup_call_audio_second_window_g

0xced0,	// (0x00035f79) popup_call_audio_second_window_t1_ParamLimits

0xced0,	// (0x00035f79) popup_call_audio_second_window_t1

0xcf5f,	// (0x00036008) popup_call_audio_second_window_t2_ParamLimits

0xcf5f,	// (0x00036008) popup_call_audio_second_window_t2

0xcf95,	// (0x0003603e) popup_call_audio_second_window_t3_ParamLimits

0xcf95,	// (0x0003603e) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x000380ff) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x000380ff) popup_call_audio_second_window_t

0xcd80,	// (0x00035e29) bg_popup_call_pane_cp04

0xcfcb,	// (0x00036074) list_conf_pane

0xcfd3,	// (0x0003607c) popup_call_audio_conf_window_t1

0xcfe1,	// (0x0003608a) call_thumbnail_pane_g1

0xcfe9,	// (0x00036092) bg_pinb_pane_ParamLimits

0xcfe9,	// (0x00036092) bg_pinb_pane

0xcff7,	// (0x000360a0) find_pinb_pane

0xcfe9,	// (0x00036092) listscroll_pinb_pane_ParamLimits

0xcfe9,	// (0x00036092) listscroll_pinb_pane

0xd001,	// (0x000360aa) pinb_bg_pane_g1

0xd001,	// (0x000360aa) pinb_bg_pane_g2

0xd001,	// (0x000360aa) pinb_bg_pane_g3

0xd001,	// (0x000360aa) pinb_bg_pane_g4

0xd001,	// (0x000360aa) pinb_bg_pane_g5

0xd001,	// (0x000360aa) pinb_bg_pane_g6

0xd001,	// (0x000360aa) pinb_bg_pane_g7

0xd001,	// (0x000360aa) pinb_bg_pane_g8

0xd001,	// (0x000360aa) pinb_bg_pane_g9

0xd001,	// (0x000360aa) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x00038106) pinb_bg_pane_g

0xc963,	// (0x00035a0c) grid_pinb_pane

0xc963,	// (0x00035a0c) list_pinb_pane

0xcf51,	// (0x00035ffa) scroll_pane_cp01_ParamLimits

0xcf51,	// (0x00035ffa) scroll_pane_cp01

0xd00b,	// (0x000360b4) find_pinb_pane_g1_ParamLimits

0xd00b,	// (0x000360b4) find_pinb_pane_g1

0xd023,	// (0x000360cc) find_pinb_pane_t1

0xd035,	// (0x000360de) find_pinb_pane_t2

0x0001,

0xf077,	// (0x00038120) find_pinb_pane_t

0xd04a,	// (0x000360f3) input_focus_pane_cp01_ParamLimits

0xd04a,	// (0x000360f3) input_focus_pane_cp01

0xd056,	// (0x000360ff) cell_pinb_pane_ParamLimits

0xd056,	// (0x000360ff) cell_pinb_pane

0xd064,	// (0x0003610d) cell_pinb_pane_g1_ParamLimits

0xd064,	// (0x0003610d) cell_pinb_pane_g1

0xd072,	// (0x0003611b) cell_pinb_pane_g2_ParamLimits

0xd072,	// (0x0003611b) cell_pinb_pane_g2

0xd072,	// (0x0003611b) cell_pinb_pane_g3_ParamLimits

0xd072,	// (0x0003611b) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00038125) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00038125) cell_pinb_pane_g

0xcd80,	// (0x00035e29) grid_highlight_pane_cp01

0xd056,	// (0x000360ff) list_pinb_item_pane_ParamLimits

0xd056,	// (0x000360ff) list_pinb_item_pane

0xc963,	// (0x00035a0c) list_highlight_pane_cp02

0xd080,	// (0x00036129) list_pinb_item_pane_g1_ParamLimits

0xd080,	// (0x00036129) list_pinb_item_pane_g1

0xd072,	// (0x0003611b) list_pinb_item_pane_g2_ParamLimits

0xd072,	// (0x0003611b) list_pinb_item_pane_g2

0xd064,	// (0x0003610d) list_pinb_item_pane_g3_ParamLimits

0xd064,	// (0x0003610d) list_pinb_item_pane_g3

0xd072,	// (0x0003611b) list_pinb_item_pane_g4_ParamLimits

0xd072,	// (0x0003611b) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x0003812c) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x0003812c) list_pinb_item_pane_g

0xd08e,	// (0x00036137) list_pinb_item_pane_t1_ParamLimits

0xd08e,	// (0x00036137) list_pinb_item_pane_t1

0x0aff,	// (0x00029ba8) calc_display_pane

0x0b24,	// (0x00029bcd) calc_paper_pane

0x0b47,	// (0x00029bf0) grid_calc_pane

0xc963,	// (0x00035a0c) bg_list_pane_cp01

0xd0a2,	// (0x0003614b) clock_g1

0xd0a2,	// (0x0003614b) clock_g2

0x0001,

0xf08c,	// (0x00038135) clock_g

0xd0ac,	// (0x00036155) clock_t1_ParamLimits

0xd0ac,	// (0x00036155) clock_t1

0xd0c0,	// (0x00036169) clock_t2_ParamLimits

0xd0c0,	// (0x00036169) clock_t2

0xd0c0,	// (0x00036169) clock_t3_ParamLimits

0xd0c0,	// (0x00036169) clock_t3

0xd0c0,	// (0x00036169) clock_t4_ParamLimits

0xd0c0,	// (0x00036169) clock_t4

0xd0ac,	// (0x00036155) clock_t5_ParamLimits

0xd0ac,	// (0x00036155) clock_t5

0xd0c0,	// (0x00036169) clock_t6_ParamLimits

0xd0c0,	// (0x00036169) clock_t6

0xd0c0,	// (0x00036169) clock_t7_ParamLimits

0xd0c0,	// (0x00036169) clock_t7

0xd0c0,	// (0x00036169) clock_t8_ParamLimits

0xd0c0,	// (0x00036169) clock_t8

0xd0c0,	// (0x00036169) clock_t9_ParamLimits

0xd0c0,	// (0x00036169) clock_t9

0x0008,

0xf091,	// (0x0003813a) clock_t_ParamLimits

0xf091,	// (0x0003813a) clock_t

0xc963,	// (0x00035a0c) popup_clock_analogue_window_cp02

0xc963,	// (0x00035a0c) popup_clock_digital_window_cp01

0xcd80,	// (0x00035e29) listscroll_help_pane

0xcd80,	// (0x00035e29) phob_pre_status_pane

0xd0d4,	// (0x0003617d) grid_qdial_pane

0xcfe9,	// (0x00036092) listscroll_mce_pane

0xcfe9,	// (0x00036092) bg_notes_pane

0xd0de,	// (0x00036187) list_notes_pane

0x1e16,	// (0x0002aebf) scroll_pane_cp06

0xd0ec,	// (0x00036195) bg_calc_paper_pane

0xafb0,	// (0x00034059) list_calc_pane

0xd100,	// (0x000361a9) bg_calc_display_pane

0x0b75,	// (0x00029c1e) calc_display_pane_t1

0x0b8a,	// (0x00029c33) calc_display_pane_t2

0xafca,	// (0x00034073) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x0003814d) calc_display_pane_t

0x0b9f,	// (0x00029c48) cell_calc_pane_ParamLimits

0x0b9f,	// (0x00029c48) cell_calc_pane

0xd10c,	// (0x000361b5) bg_calc_paper_pane_g1

0xd118,	// (0x000361c1) bg_calc_paper_pane_g2

0xd124,	// (0x000361cd) bg_calc_paper_pane_g3

0xd130,	// (0x000361d9) bg_calc_paper_pane_g4

0xd13c,	// (0x000361e5) bg_calc_paper_pane_g5

0x1e2a,	// (0x0002aed3) bg_calc_paper_pane_g6

0x1e39,	// (0x0002aee2) bg_calc_paper_pane_g7

0x1e48,	// (0x0002aef1) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x00038154) bg_calc_paper_pane_g

0x1e5b,	// (0x0002af04) calc_bg_paper_pane_g9

0x1e6e,	// (0x0002af17) list_calc_item_pane_ParamLimits

0x1e6e,	// (0x0002af17) list_calc_item_pane

0xd148,	// (0x000361f1) list_calc_item_pane_g1

0xafdc,	// (0x00034085) list_calc_item_pane_t1_ParamLimits

0xafdc,	// (0x00034085) list_calc_item_pane_t1

0x0bd4,	// (0x00029c7d) list_calc_item_pane_t2_ParamLimits

0x0bd4,	// (0x00029c7d) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x00038165) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x00038165) list_calc_item_pane_t

0xd001,	// (0x000360aa) cell_calc_pane_g1

0xd155,	// (0x000361fe) grid_highlight_pane_cp02

0x1e86,	// (0x0002af2f) bg_calc_display_pane_g1

0x0c06,	// (0x00029caf) bg_calc_display_pane_g2

0xd177,	// (0x00036220) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x0003816f) bg_calc_display_pane_g

0x0c10,	// (0x00029cb9) cell_qdial_pane_ParamLimits

0x0c10,	// (0x00029cb9) cell_qdial_pane

0x1e8f,	// (0x0002af38) cell_qdial_pane_g1_ParamLimits

0x1e8f,	// (0x0002af38) cell_qdial_pane_g1

0x1ea5,	// (0x0002af4e) cell_qdial_pane_g2_ParamLimits

0x1ea5,	// (0x0002af4e) cell_qdial_pane_g2

0xd180,	// (0x00036229) cell_qdial_pane_g3_ParamLimits

0xd180,	// (0x00036229) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x00038176) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x00038176) cell_qdial_pane_g

0x1ecc,	// (0x0002af75) cell_qdial_pane_t1_ParamLimits

0x1ecc,	// (0x0002af75) cell_qdial_pane_t1

0x1ee4,	// (0x0002af8d) cell_qdial_pane_t2_ParamLimits

0x1ee4,	// (0x0002af8d) cell_qdial_pane_t2

0x1ef7,	// (0x0002afa0) cell_qdial_pane_t3_ParamLimits

0x1ef7,	// (0x0002afa0) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x0003817f) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x0003817f) cell_qdial_pane_t

0xcd80,	// (0x00035e29) grid_highlight_pane_cp04

0xd18c,	// (0x00036235) thumbnail_qdial_pane_ParamLimits

0xd18c,	// (0x00036235) thumbnail_qdial_pane

0xd1e8,	// (0x00036291) list_help_pane

0xd1f1,	// (0x0003629a) scroll_pane_cp02

0xd1fa,	// (0x000362a3) help_list_pane_t1_ParamLimits

0xd1fa,	// (0x000362a3) help_list_pane_t1

0xd218,	// (0x000362c1) bg_notes_pane_g2

0xd220,	// (0x000362c9) bg_notes_pane_g3

0xd228,	// (0x000362d1) notes_bg_pane_g1

0xd230,	// (0x000362d9) notes_bg_pane_g4

0xd238,	// (0x000362e1) notes_bg_pane_g5

0xd240,	// (0x000362e9) notes_bg_pane_g6

0xd248,	// (0x000362f1) notes_bg_pane_g7

0xd250,	// (0x000362f9) notes_bg_pane_g8

0xd258,	// (0x00036301) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x0003819d) notes_bg_pane_g

0x1f0a,	// (0x0002afb3) list_notes_text_pane_ParamLimits

0x1f0a,	// (0x0002afb3) list_notes_text_pane

0xd260,	// (0x00036309) list_notes_text_pane_g1

0x1f1f,	// (0x0002afc8) list_notes_text_pane_t1

0x0c24,	// (0x00029ccd) listscroll_cale_week_pane

0x1f47,	// (0x0002aff0) bg_cale_heading_pane

0xd27a,	// (0x00036323) bg_cale_pane_cp01

0x1f5f,	// (0x0002b008) cale_week_corner_pane

0x1f7e,	// (0x0002b027) cale_week_day_heading_pane

0x1f9b,	// (0x0002b044) cale_week_scroll_pane_g1

0x1fae,	// (0x0002b057) cale_week_scroll_pane_g2

0x1fc6,	// (0x0002b06f) cale_week_scroll_pane_g3

0x1fde,	// (0x0002b087) cale_week_scroll_pane_g4

0x1ff6,	// (0x0002b09f) cale_week_scroll_pane_g5

0x2016,	// (0x0002b0bf) cale_week_scroll_pane_g6

0x2036,	// (0x0002b0df) cale_week_scroll_pane_g7

0x2056,	// (0x0002b0ff) cale_week_scroll_pane_g8

0x207a,	// (0x0002b123) cale_week_scroll_pane_g9

0x2092,	// (0x0002b13b) cale_week_scroll_pane_g10

0x20aa,	// (0x0002b153) cale_week_scroll_pane_g11

0x20c2,	// (0x0002b16b) cale_week_scroll_pane_g12

0x20da,	// (0x0002b183) cale_week_scroll_pane_g13

0x20da,	// (0x0002b183) cale_week_scroll_pane_g14

0x20da,	// (0x0002b183) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x000381ac) cale_week_scroll_pane_g

0x2116,	// (0x0002b1bf) cale_week_time_pane

0x213a,	// (0x0002b1e3) grid_cale_week_pane

0xd2a9,	// (0x00036352) scroll_pane_cp08

0x2160,	// (0x0002b209) cell_cale_week_pane_ParamLimits

0x2160,	// (0x0002b209) cell_cale_week_pane

0x21ee,	// (0x0002b297) cale_week_day_heading_pane_t1

0x2218,	// (0x0002b2c1) cale_week_day_heading_pane_t2

0x2247,	// (0x0002b2f0) cale_week_day_heading_pane_t3

0x2276,	// (0x0002b31f) cale_week_day_heading_pane_t4

0x22a5,	// (0x0002b34e) cale_week_day_heading_pane_t5

0x22dc,	// (0x0002b385) cale_week_day_heading_pane_t6

0x2313,	// (0x0002b3bc) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x000381cd) cale_week_day_heading_pane_t

0xd2c6,	// (0x0003636f) bg_cale_side_pane

0x0c36,	// (0x00029cdf) cale_week_time_pane_t1

0x0c50,	// (0x00029cf9) cale_week_time_pane_t2

0x0c6a,	// (0x00029d13) cale_week_time_pane_t3

0x0c84,	// (0x00029d2d) cale_week_time_pane_t4

0x0c9e,	// (0x00029d47) cale_week_time_pane_t5

0x0cb8,	// (0x00029d61) cale_week_time_pane_t6

0x0cd2,	// (0x00029d7b) cale_week_time_pane_t7

0x0cec,	// (0x00029d95) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x000381dc) cale_week_time_pane_t

0x233d,	// (0x0002b3e6) cell_cale_week_pane_g2

0x235c,	// (0x0002b405) cell_cale_week_pane_g3_ParamLimits

0x235c,	// (0x0002b405) cell_cale_week_pane_g3

0xd2d4,	// (0x0003637d) grid_highlight_pane_cp07

0xd2dc,	// (0x00036385) listscroll_gms_pane

0xd2e6,	// (0x0003638f) grid_gms_pane

0xd2ef,	// (0x00036398) listscroll_gms_pane_g1

0xd2f7,	// (0x000363a0) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x000381ed) listscroll_gms_pane_g

0x2374,	// (0x0002b41d) scroll_pane_cp010

0x237f,	// (0x0002b428) cell_gms_pane_ParamLimits

0x237f,	// (0x0002b428) cell_gms_pane

0x2392,	// (0x0002b43b) cell_gms_pane_g1

0xd2ff,	// (0x000363a8) cell_gms_pane_g2

0xd260,	// (0x00036309) cell_gms_pane_g3

0xd307,	// (0x000363b0) cell_gms_pane_g4

0x0003,

0xf149,	// (0x000381f2) cell_gms_pane_g

0xd310,	// (0x000363b9) grid_highlight_pane_cp09

0x420f,	// (0x0002d2b8) phob_pre_status_pane_g1

0x4217,	// (0x0002d2c0) phob_pre_status_pane_g2

0x421f,	// (0x0002d2c8) phob_pre_status_pane_g3

0x4227,	// (0x0002d2d0) phob_pre_status_pane_g4

0x0004,

0xf4e5,	// (0x0003858e) phob_pre_status_pane_g

0x4237,	// (0x0002d2e0) phob_pre_status_pane_t1

0x4245,	// (0x0002d2ee) phob_pre_status_pane_t2

0x4255,	// (0x0002d2fe) phob_pre_status_pane_t3

0x0002,

0xf4f0,	// (0x00038599) phob_pre_status_pane_t

0xd318,	// (0x000363c1) bg_list_pane_cp05

0x23a2,	// (0x0002b44b) grid_vorec_pane

0x23aa,	// (0x0002b453) vorec_t1

0x23b8,	// (0x0002b461) vorec_t2

0x23c6,	// (0x0002b46f) vorec_t3

0x23d4,	// (0x0002b47d) vorec_t4

0xc33c,	// (0x000353e5) vorec_t5

0x1d49,	// (0x0002adf2) vorec_t6

0x0004,

0xf152,	// (0x000381fb) vorec_t

0x1d57,	// (0x0002ae00) wait_bar_pane_cp01

0x23f0,	// (0x0002b499) cell_vorec_pane_ParamLimits

0x23f0,	// (0x0002b499) cell_vorec_pane

0xaff7,	// (0x000340a0) cell_vorec_pane_g1

0xcd80,	// (0x00035e29) grid_highlight_pane_cp05

0xcf51,	// (0x00035ffa) cams_zoom_pane

0xcf51,	// (0x00035ffa) image_vga_pane

0xd064,	// (0x0003610d) main_camera_pane_g1

0xd064,	// (0x0003610d) main_camera_pane_g2

0xd064,	// (0x0003610d) main_camera_pane_g3

0xd064,	// (0x0003610d) main_camera_pane_g4

0xd064,	// (0x0003610d) main_camera_pane_g5

0xd064,	// (0x0003610d) main_camera_pane_g6

0xd064,	// (0x0003610d) main_camera_pane_g7

0x0007,

0xf15d,	// (0x00038206) main_camera_pane_g

0xd0ac,	// (0x00036155) main_camera_pane_t1

0xd0ac,	// (0x00036155) main_camera_pane_t2

0x0001,

0xf16e,	// (0x00038217) main_camera_pane_t

0x2417,	// (0x0002b4c0) cams_zoom_pane_cp_ParamLimits

0x2417,	// (0x0002b4c0) cams_zoom_pane_cp

0x244b,	// (0x0002b4f4) image_cif_pane_ParamLimits

0x244b,	// (0x0002b4f4) image_cif_pane

0xc963,	// (0x00035a0c) image_subqcif_pane

0x245d,	// (0x0002b506) main_video_pane_g1_ParamLimits

0x245d,	// (0x0002b506) main_video_pane_g1

0x248b,	// (0x0002b534) main_video_pane_g2_ParamLimits

0x248b,	// (0x0002b534) main_video_pane_g2

0x24c5,	// (0x0002b56e) main_video_pane_g3_ParamLimits

0x24c5,	// (0x0002b56e) main_video_pane_g3

0x24c5,	// (0x0002b56e) main_video_pane_g4_ParamLimits

0x24c5,	// (0x0002b56e) main_video_pane_g4

0x24f9,	// (0x0002b5a2) main_video_pane_g5_ParamLimits

0x24f9,	// (0x0002b5a2) main_video_pane_g5

0xd320,	// (0x000363c9) main_video_pane_g6_ParamLimits

0xd320,	// (0x000363c9) main_video_pane_g6

0x0006,

0xf173,	// (0x0003821c) main_video_pane_g_ParamLimits

0xf173,	// (0x0003821c) main_video_pane_g

0x2515,	// (0x0002b5be) main_video_pane_t1_ParamLimits

0x2515,	// (0x0002b5be) main_video_pane_t1

0xd0a2,	// (0x0003614b) cams_zoom_pane_g1

0xd0a2,	// (0x0003614b) cams_zoom_pane_g2

0xd0a2,	// (0x0003614b) cams_zoom_pane_g3

0xd0a2,	// (0x0003614b) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x0003822b) cams_zoom_pane_g

0xcf51,	// (0x00035ffa) grid_cams_pane

0xcf51,	// (0x00035ffa) linegrid_cams_pane

0x2559,	// (0x0002b602) cell_cams_pane_ParamLimits

0x2559,	// (0x0002b602) cell_cams_pane

0xc963,	// (0x00035a0c) cams_burst_image_pane

0xd0a2,	// (0x0003614b) cell_cams_pane_g1

0xc963,	// (0x00035a0c) grid_highlight_pane_cp03

0xd001,	// (0x000360aa) mp_bg_pane_g1

0xc963,	// (0x00035a0c) bg_list_pane_cp03

0xc963,	// (0x00035a0c) bg_mp_pane

0xc963,	// (0x00035a0c) grid_mp_pane

0xd0a2,	// (0x0003614b) media_player_g1

0xd81e,	// (0x000368c7) media_player_t1

0xd81e,	// (0x000368c7) media_player_t2

0xd81e,	// (0x000368c7) media_player_t3

0xd81e,	// (0x000368c7) media_player_t4

0xd81e,	// (0x000368c7) media_player_t5

0xd81e,	// (0x000368c7) media_player_t6

0xd81e,	// (0x000368c7) media_player_t7

0x0006,

0xf4cf,	// (0x00038578) media_player_t

0xc963,	// (0x00035a0c) wait_bar_pane_cp02

0xf4b4,	// (0x0003855d) main_usb_pane_t

0xda89,	// (0x00036b32) cell_mp_pane

0xd001,	// (0x000360aa) cell_mp_pane_g1

0xcd80,	// (0x00035e29) grid_highlight_pane_cp06

0xd33a,	// (0x000363e3) grid_skin_colour_pane

0xd342,	// (0x000363eb) list_highlight_pane_cp03

0x256e,	// (0x0002b617) skin_g1

0xd34a,	// (0x000363f3) skin_t1

0xd359,	// (0x00036402) skin_t2

0x0001,

0xf1b0,	// (0x00038259) skin_t

0x2576,	// (0x0002b61f) cell_skin_colour_pane_ParamLimits

0x2576,	// (0x0002b61f) cell_skin_colour_pane

0xd367,	// (0x00036410) cell_skin_colour_pane_g1

0x25ef,	// (0x0002b698) call_video_g1_ParamLimits

0x25ef,	// (0x0002b698) call_video_g1

0x260b,	// (0x0002b6b4) call_video_g2_ParamLimits

0x260b,	// (0x0002b6b4) call_video_g2

0x0001,

0xf1b5,	// (0x0003825e) call_video_g_ParamLimits

0xf1b5,	// (0x0003825e) call_video_g

0x265d,	// (0x0002b706) call_video_uplink_pane_cp1_ParamLimits

0x265d,	// (0x0002b706) call_video_uplink_pane_cp1

0xd379,	// (0x00036422) call_video_uplink_pane_cp2

0x26fc,	// (0x0002b7a5) video_down_crop_pane_ParamLimits

0x26fc,	// (0x0002b7a5) video_down_crop_pane

0x27f3,	// (0x0002b89c) video_down_pane_ParamLimits

0x27f3,	// (0x0002b89c) video_down_pane

0xd381,	// (0x0003642a) video_down_subqcif_pane_ParamLimits

0xd381,	// (0x0003642a) video_down_subqcif_pane

0xd399,	// (0x00036442) video_down_subqcif_pane_cp_ParamLimits

0xd399,	// (0x00036442) video_down_subqcif_pane_cp

0xd3bf,	// (0x00036468) im_reading_pane_ParamLimits

0xd3bf,	// (0x00036468) im_reading_pane

0x2903,	// (0x0002b9ac) im_writing_pane_ParamLimits

0x2903,	// (0x0002b9ac) im_writing_pane

0x2919,	// (0x0002b9c2) im_reading_pane_t1

0xd3d9,	// (0x00036482) list_im_pane

0xd3ea,	// (0x00036493) scroll_pane_cp07

0x2952,	// (0x0002b9fb) im_writing_pane_t1_ParamLimits

0x2952,	// (0x0002b9fb) im_writing_pane_t1

0xd403,	// (0x000364ac) im_writing_pane_t2_ParamLimits

0xd403,	// (0x000364ac) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x00038268) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x00038268) im_writing_pane_t

0xcd80,	// (0x00035e29) input_focus_pane_cp04

0xcd80,	// (0x00035e29) input_focus_pane_cp05

0x2967,	// (0x0002ba10) list_im_single_pane_ParamLimits

0x2967,	// (0x0002ba10) list_im_single_pane

0x297b,	// (0x0002ba24) list_single_im_pane_t1

0xd318,	// (0x000363c1) blid_accuracy_pane

0xd318,	// (0x000363c1) blid_compass_pane

0xef2e,	// (0x00037fd7) main_location_t1

0xef2e,	// (0x00037fd7) main_location_t2

0xef2e,	// (0x00037fd7) main_location_t3

0x0002,

0xf4de,	// (0x00038587) main_location_t

0xcd80,	// (0x00035e29) aid_levels_location

0xd001,	// (0x000360aa) blid_accuracy_pane_g1

0xd001,	// (0x000360aa) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x000382b7) blid_accuracy_pane_g

0xd44b,	// (0x000364f4) wml_content_pane

0xd489,	// (0x00036532) wml_button_pane_ParamLimits

0xd489,	// (0x00036532) wml_button_pane

0x298a,	// (0x0002ba33) wml_list_single_large_pane_ParamLimits

0x298a,	// (0x0002ba33) wml_list_single_large_pane

0x299f,	// (0x0002ba48) wml_list_single_medium_pane_ParamLimits

0x299f,	// (0x0002ba48) wml_list_single_medium_pane

0x29b5,	// (0x0002ba5e) wml_list_single_small_pane_ParamLimits

0x29b5,	// (0x0002ba5e) wml_list_single_small_pane

0xd49d,	// (0x00036546) wml_selection_box_pane_ParamLimits

0xd49d,	// (0x00036546) wml_selection_box_pane

0xd4b0,	// (0x00036559) wml_list_single_pane_t1

0xd4bf,	// (0x00036568) wml_list_single_medium_pane_t1

0xd4ce,	// (0x00036577) wml_list_single_large_pane_t1

0xd4dd,	// (0x00036586) input_focus_pane_cp02_ParamLimits

0xd4dd,	// (0x00036586) input_focus_pane_cp02

0xd4f0,	// (0x00036599) wml_selection_box_pane_g1

0xd4f9,	// (0x000365a2) wml_selection_box_pane_t1_ParamLimits

0xd4f9,	// (0x000365a2) wml_selection_box_pane_t1

0xcfe9,	// (0x00036092) bg_wml_button_pane_ParamLimits

0xcfe9,	// (0x00036092) bg_wml_button_pane

0xd51a,	// (0x000365c3) wml_button_pane_g1

0xd522,	// (0x000365cb) wml_button_pane_t1

0xd51a,	// (0x000365c3) wml_button_bg_pane_g1

0xd532,	// (0x000365db) wml_button_bg_pane_g2

0xd53a,	// (0x000365e3) wml_button_bg_pane_g3

0xd542,	// (0x000365eb) wml_button_bg_pane_g4

0xd54a,	// (0x000365f3) wml_button_bg_pane_g5

0xd552,	// (0x000365fb) wml_button_bg_pane_g6

0xd55a,	// (0x00036603) wml_button_bg_pane_g7

0xd562,	// (0x0003660b) wml_button_bg_pane_g8

0xd56a,	// (0x00036613) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x0003826d) wml_button_bg_pane_g

0x29cd,	// (0x0002ba76) bg_list_pane_cp02

0xd572,	// (0x0003661b) mce_header_pane_ParamLimits

0xd572,	// (0x0003661b) mce_header_pane

0xd588,	// (0x00036631) mce_icon_pane

0xd588,	// (0x00036631) mce_image_pane

0xd591,	// (0x0003663a) mce_text_pane_ParamLimits

0xd591,	// (0x0003663a) mce_text_pane

0x29d5,	// (0x0002ba7e) scroll_pane_cp03

0xd481,	// (0x0003652a) scroll_pane_cp04

0xd5a4,	// (0x0003664d) scroll_pane_cp05_ParamLimits

0xd5a4,	// (0x0003664d) scroll_pane_cp05

0x29df,	// (0x0002ba88) mce_header_field_pane_ParamLimits

0x29df,	// (0x0002ba88) mce_header_field_pane

0x29f6,	// (0x0002ba9f) mce_header_field_pane_2_ParamLimits

0x29f6,	// (0x0002ba9f) mce_header_field_pane_2

0x2a0c,	// (0x0002bab5) mce_header_field_pane_3

0x2a14,	// (0x0002babd) list_single_mce_message_pane_ParamLimits

0x2a14,	// (0x0002babd) list_single_mce_message_pane

0x2a29,	// (0x0002bad2) list_single_mce_smart_pane_ParamLimits

0x2a29,	// (0x0002bad2) list_single_mce_smart_pane

0xd5b0,	// (0x00036659) input_focus_pane_cp03

0xd5b9,	// (0x00036662) list_header_data_pane

0x2a49,	// (0x0002baf2) mce_header_field_pane_t1

0x2a59,	// (0x0002bb02) list_single_mce_header_pane_ParamLimits

0x2a59,	// (0x0002bb02) list_single_mce_header_pane

0xd5c1,	// (0x0003666a) list_single_mce_header_pane_t1

0xd5d0,	// (0x00036679) list_single_mce_message_pane_g1

0xd5d8,	// (0x00036681) list_single_mce_message_pane_t1

0x2a93,	// (0x0002bb3c) bg_cale_heading_pane_cp01_ParamLimits

0x2a93,	// (0x0002bb3c) bg_cale_heading_pane_cp01

0xd5e6,	// (0x0003668f) bg_cale_pane_cp02_ParamLimits

0xd5e6,	// (0x0003668f) bg_cale_pane_cp02

0x2acd,	// (0x0002bb76) cale_month_corner_pane

0x2aec,	// (0x0002bb95) cale_month_day_heading_pane_ParamLimits

0x2aec,	// (0x0002bb95) cale_month_day_heading_pane

0x2b3e,	// (0x0002bbe7) cale_month_pane_g1_ParamLimits

0x2b3e,	// (0x0002bbe7) cale_month_pane_g1

0x2b6d,	// (0x0002bc16) cale_month_pane_g2_ParamLimits

0x2b6d,	// (0x0002bc16) cale_month_pane_g2

0x2b9d,	// (0x0002bc46) cale_month_pane_g3_ParamLimits

0x2b9d,	// (0x0002bc46) cale_month_pane_g3

0x2bd9,	// (0x0002bc82) cale_month_pane_g4_ParamLimits

0x2bd9,	// (0x0002bc82) cale_month_pane_g4

0x2c15,	// (0x0002bcbe) cale_month_pane_g5_ParamLimits

0x2c15,	// (0x0002bcbe) cale_month_pane_g5

0x2c5d,	// (0x0002bd06) cale_month_pane_g6_ParamLimits

0x2c5d,	// (0x0002bd06) cale_month_pane_g6

0x2ca9,	// (0x0002bd52) cale_month_pane_g7_ParamLimits

0x2ca9,	// (0x0002bd52) cale_month_pane_g7

0x2cfd,	// (0x0002bda6) cale_month_pane_g8_ParamLimits

0x2cfd,	// (0x0002bda6) cale_month_pane_g8

0x2d51,	// (0x0002bdfa) cale_month_pane_g9_ParamLimits

0x2d51,	// (0x0002bdfa) cale_month_pane_g9

0x2da3,	// (0x0002be4c) cale_month_pane_g10_ParamLimits

0x2da3,	// (0x0002be4c) cale_month_pane_g10

0x2df5,	// (0x0002be9e) cale_month_pane_g11_ParamLimits

0x2df5,	// (0x0002be9e) cale_month_pane_g11

0x2e47,	// (0x0002bef0) cale_month_pane_g12_ParamLimits

0x2e47,	// (0x0002bef0) cale_month_pane_g12

0x2e99,	// (0x0002bf42) cale_month_pane_g13_ParamLimits

0x2e99,	// (0x0002bf42) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x00038280) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x00038280) cale_month_pane_g

0x2eeb,	// (0x0002bf94) cale_month_week_pane

0x2f0f,	// (0x0002bfb8) grid_cale_month_pane_ParamLimits

0x2f0f,	// (0x0002bfb8) grid_cale_month_pane

0x2f58,	// (0x0002c001) cale_month_day_heading_pane_t1

0x2fde,	// (0x0002c087) cale_month_day_heading_pane_t2

0x3057,	// (0x0002c100) cale_month_day_heading_pane_t3

0x30d0,	// (0x0002c179) cale_month_day_heading_pane_t4

0x3151,	// (0x0002c1fa) cale_month_day_heading_pane_t5

0x31da,	// (0x0002c283) cale_month_day_heading_pane_t6

0x3263,	// (0x0002c30c) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x0003829b) cale_month_day_heading_pane_t

0xd2c6,	// (0x0003636f) bg_cale_side_pane_cp01

0x32f4,	// (0x0002c39d) cale_month_week_pane_t1

0x330d,	// (0x0002c3b6) cale_month_week_pane_t2

0x3326,	// (0x0002c3cf) cale_month_week_pane_t3

0x333f,	// (0x0002c3e8) cale_month_week_pane_t4

0x3358,	// (0x0002c401) cale_month_week_pane_t5

0x3371,	// (0x0002c41a) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x000382aa) cale_month_week_pane_t

0x338a,	// (0x0002c433) cell_cale_month_pane_ParamLimits

0x338a,	// (0x0002c433) cell_cale_month_pane

0xb001,	// (0x000340aa) cell_cale_month_pane_g1

0x0d06,	// (0x00029daf) cell_cale_month_pane_t1_ParamLimits

0x0d06,	// (0x00029daf) cell_cale_month_pane_t1

0xd2d4,	// (0x0003637d) grid_highlight_pane_cp08

0xd001,	// (0x000360aa) main_smil_g1

0x34b8,	// (0x0002c561) smil_status_pane

0xd625,	// (0x000366ce) smil_text_pane

0xd258,	// (0x00036301) bg_popup_call3_rect_pane_g8

0xd250,	// (0x000362f9) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x000382bc) bg_popup_call3_rect_pane_g

0xeff7,	// (0x000380a0) smil_status_volume_pane_g1

0xd62f,	// (0x000366d8) smil_status_pane_t1

0xb14b,	// (0x000341f4) volume_smil_pane

0xd646,	// (0x000366ef) list_smil_text_pane

0x34cb,	// (0x0002c574) scroll_pane_cp011

0x34d6,	// (0x0002c57f) smil_text_list_pane_t1_ParamLimits

0x34d6,	// (0x0002c57f) smil_text_list_pane_t1

0xb00d,	// (0x000340b6) aid_volume_smil_ParamLimits

0xb00d,	// (0x000340b6) aid_volume_smil

0xd001,	// (0x000360aa) smil_volume_pane_g1

0xd001,	// (0x000360aa) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x000382b7) smil_volume_pane_g

0x3512,	// (0x0002c5bb) listscroll_cale_day_pane

0xd650,	// (0x000366f9) bg_cale_pane

0xd668,	// (0x00036711) list_cale_pane

0xd68b,	// (0x00036734) scroll_pane_cp09

0xd228,	// (0x000362d1) cale_bg_pane_g1

0xd220,	// (0x000362c9) cale_bg_pane_g2

0xd218,	// (0x000362c1) cale_bg_pane_g3

0xd238,	// (0x000362e1) cale_bg_pane_g4

0xd230,	// (0x000362d9) cale_bg_pane_g5

0xd240,	// (0x000362e9) cale_bg_pane_g6

0xd248,	// (0x000362f1) cale_bg_pane_g7

0xd258,	// (0x00036301) cale_bg_pane_g8

0xd250,	// (0x000362f9) cale_bg_pane_g9

0x0008,

0xf213,	// (0x000382bc) cale_bg_pane_g

0x3524,	// (0x0002c5cd) list_cale_time_pane_ParamLimits

0x3524,	// (0x0002c5cd) list_cale_time_pane

0xd6a4,	// (0x0003674d) list_cale_time_pane_g1_ParamLimits

0xd6a4,	// (0x0003674d) list_cale_time_pane_g1

0xd6b0,	// (0x00036759) list_cale_time_pane_g2_ParamLimits

0xd6b0,	// (0x00036759) list_cale_time_pane_g2

0x3539,	// (0x0002c5e2) list_cale_time_pane_g3_ParamLimits

0x3539,	// (0x0002c5e2) list_cale_time_pane_g3

0x3547,	// (0x0002c5f0) list_cale_time_pane_g4_ParamLimits

0x3547,	// (0x0002c5f0) list_cale_time_pane_g4

0x3555,	// (0x0002c5fe) list_cale_time_pane_g5_ParamLimits

0x3555,	// (0x0002c5fe) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x000382cf) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x000382cf) list_cale_time_pane_g

0xd6ca,	// (0x00036773) list_cale_time_pane_t1_ParamLimits

0xd6ca,	// (0x00036773) list_cale_time_pane_t1

0xd6f2,	// (0x0003679b) list_cale_time_pane_t2_ParamLimits

0xd6f2,	// (0x0003679b) list_cale_time_pane_t2

0x37c3,	// (0x0002c86c) aid_blid_cardinal_pane

0x3801,	// (0x0002c8aa) compass_pane_t4

0xd71a,	// (0x000367c3) list_cale_time_pane_t4_ParamLimits

0xd71a,	// (0x000367c3) list_cale_time_pane_t4

0x380f,	// (0x0002c8b8) compass_pane_t5

0x381d,	// (0x0002c8c6) compass_pane_t6

0x382b,	// (0x0002c8d4) compass_pane_t7

0xdbce,	// (0x00036c77) navi_pane_cc_t1

0xddab,	// (0x00036e54) aid_phob_thumbnail_center_pane

0x3c62,	// (0x0002cd0b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x000382dc) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x000382dc) list_cale_time_pane_t

0xc9d7,	// (0x00035a80) bg_popup_window_pane_cp02_ParamLimits

0xc9d7,	// (0x00035a80) bg_popup_window_pane_cp02

0xd742,	// (0x000367eb) heading_pane_cp01_ParamLimits

0xd742,	// (0x000367eb) heading_pane_cp01

0xd74e,	// (0x000367f7) loc_req_pane_ParamLimits

0xd74e,	// (0x000367f7) loc_req_pane

0xd760,	// (0x00036809) loc_type_pane_ParamLimits

0xd760,	// (0x00036809) loc_type_pane

0xd772,	// (0x0003681b) loc_type_pane_t1_ParamLimits

0xd772,	// (0x0003681b) loc_type_pane_t1

0xd784,	// (0x0003682d) loc_type_pane_t2_ParamLimits

0xd784,	// (0x0003682d) loc_type_pane_t2

0xd796,	// (0x0003683f) loc_type_pane_t3_ParamLimits

0xd796,	// (0x0003683f) loc_type_pane_t3

0x0002,

0xf23a,	// (0x000382e3) loc_type_pane_t_ParamLimits

0xf23a,	// (0x000382e3) loc_type_pane_t

0xd7a8,	// (0x00036851) list_loc_req_pane

0xd7b2,	// (0x0003685b) scroll_pane_cp012

0x3563,	// (0x0002c60c) list_single_loc_request_popup_menu_pane_ParamLimits

0x3563,	// (0x0002c60c) list_single_loc_request_popup_menu_pane

0xd7bd,	// (0x00036866) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd7bd,	// (0x00036866) list_single_loc_request_popup_menu_pane_g1

0xd7c9,	// (0x00036872) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd7c9,	// (0x00036872) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x000382ea) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x000382ea) list_single_loc_request_popup_menu_pane_g

0xd7d5,	// (0x0003687e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd7d5,	// (0x0003687e) list_single_loc_request_popup_menu_pane_t1

0xcfe9,	// (0x00036092) bg_popup_window_pane_cp03_ParamLimits

0xcfe9,	// (0x00036092) bg_popup_window_pane_cp03

0xd7eb,	// (0x00036894) heading_loc_req_pane_ParamLimits

0xd7eb,	// (0x00036894) heading_loc_req_pane

0x3570,	// (0x0002c619) popup_dyc_status_message_window_g1_ParamLimits

0x3570,	// (0x0002c619) popup_dyc_status_message_window_g1

0x3584,	// (0x0002c62d) popup_dyc_status_message_window_t1_ParamLimits

0x3584,	// (0x0002c62d) popup_dyc_status_message_window_t1

0x3599,	// (0x0002c642) popup_dyc_status_message_window_t2_ParamLimits

0x3599,	// (0x0002c642) popup_dyc_status_message_window_t2

0x35ae,	// (0x0002c657) popup_dyc_status_message_window_t3_ParamLimits

0x35ae,	// (0x0002c657) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x000382ef) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x000382ef) popup_dyc_status_message_window_t

0xcd80,	// (0x00035e29) bg_heading_pane_cp01

0xd7f7,	// (0x000368a0) heading_loc_req_pane_g1

0xd7ff,	// (0x000368a8) heading_loc_req_pane_g2

0xd807,	// (0x000368b0) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x000382f6) heading_loc_req_pane_g

0xd80f,	// (0x000368b8) heading_loc_req_pane_t1

0xd82e,	// (0x000368d7) bg_popup_sub_pane_cp01_ParamLimits

0xd82e,	// (0x000368d7) bg_popup_sub_pane_cp01

0xd83c,	// (0x000368e5) popup_cale_events_window_g1_ParamLimits

0xd83c,	// (0x000368e5) popup_cale_events_window_g1

0xd85c,	// (0x00036905) popup_cale_events_window_g2_ParamLimits

0xd85c,	// (0x00036905) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x00038318) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x00038318) popup_cale_events_window_g

0xd87c,	// (0x00036925) popup_cale_events_window_t1_ParamLimits

0xd87c,	// (0x00036925) popup_cale_events_window_t1

0xd88e,	// (0x00036937) popup_cale_events_window_t2_ParamLimits

0xd88e,	// (0x00036937) popup_cale_events_window_t2

0xd8cc,	// (0x00036975) popup_cale_events_window_t3_ParamLimits

0xd8cc,	// (0x00036975) popup_cale_events_window_t3

0xd906,	// (0x000369af) popup_cale_events_window_t4_ParamLimits

0xd906,	// (0x000369af) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x0003831d) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x0003831d) popup_cale_events_window_t

0x35e2,	// (0x0002c68b) call_type_pane

0x35f2,	// (0x0002c69b) popup_call_status_window_g1

0x3606,	// (0x0002c6af) popup_call_status_window_g2

0x361a,	// (0x0002c6c3) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x00038326) popup_call_status_window_g

0xd93c,	// (0x000369e5) call_type_pane_g1

0xd945,	// (0x000369ee) call_type_pane_g2

0x0001,

0xf284,	// (0x0003832d) call_type_pane_g

0xcd80,	// (0x00035e29) bg_popup_sub_pane_cp02

0xd94e,	// (0x000369f7) listscroll_popup_wml_pane

0xd956,	// (0x000369ff) list_wml_pane

0xd960,	// (0x00036a09) scroll_pane_cp013

0xd96b,	// (0x00036a14) list_single_graphic_popup_wml_pane_ParamLimits

0xd96b,	// (0x00036a14) list_single_graphic_popup_wml_pane

0xd001,	// (0x000360aa) list_single_graphic_popup_wml_pane_g1

0xd97f,	// (0x00036a28) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x00038332) list_single_graphic_popup_wml_pane_g

0xd987,	// (0x00036a30) list_single_graphic_popup_wml_pane_t1

0xd99d,	// (0x00036a46) aid_call_pane

0xcfe1,	// (0x0003608a) popup_clock_analogue_window_g1

0xcfe1,	// (0x0003608a) popup_clock_analogue_window_g2

0xb02f,	// (0x000340d8) popup_clock_analogue_window_g3

0xb02f,	// (0x000340d8) popup_clock_analogue_window_g4

0xd001,	// (0x000360aa) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x00038337) popup_clock_analogue_window_g

0xb037,	// (0x000340e0) popup_clock_analogue_window_t1

0xb045,	// (0x000340ee) clock_digital_number_pane_ParamLimits

0xb045,	// (0x000340ee) clock_digital_number_pane

0xb051,	// (0x000340fa) clock_digital_number_pane_cp02_ParamLimits

0xb051,	// (0x000340fa) clock_digital_number_pane_cp02

0xb05d,	// (0x00034106) clock_digital_number_pane_cp03_ParamLimits

0xb05d,	// (0x00034106) clock_digital_number_pane_cp03

0xb069,	// (0x00034112) clock_digital_number_pane_cp04_ParamLimits

0xb069,	// (0x00034112) clock_digital_number_pane_cp04

0xb079,	// (0x00034122) clock_digital_separator_pane_ParamLimits

0xb079,	// (0x00034122) clock_digital_separator_pane

0xb085,	// (0x0003412e) popup_clock_digital_window_t1

0xd001,	// (0x000360aa) clock_digital_number_pane_g1

0xd001,	// (0x000360aa) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x000382b7) clock_digital_number_pane_g

0xd001,	// (0x000360aa) clock_digital_separator_pane_g1

0xd001,	// (0x000360aa) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x000382b7) clock_digital_separator_pane_g

0xcd80,	// (0x00035e29) bg_popup_window_pane_cp04

0xd9a5,	// (0x00036a4e) heading_pane_cp03

0xd318,	// (0x000363c1) listscroll_popup_gms_pane

0xcd80,	// (0x00035e29) grid_large_graphic_popup_pane

0xd9ad,	// (0x00036a56) listscroll_popup_gms_pane_g1

0xd9b6,	// (0x00036a5f) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x00038342) listscroll_popup_gms_pane_g

0xd9bf,	// (0x00036a68) scroll_pane_cp014

0xd056,	// (0x000360ff) cell_large_graphic_popup_pane_ParamLimits

0xd056,	// (0x000360ff) cell_large_graphic_popup_pane

0xd064,	// (0x0003610d) cell_large_graphic_popup_pane_g1_ParamLimits

0xd064,	// (0x0003610d) cell_large_graphic_popup_pane_g1

0xd9c8,	// (0x00036a71) cell_large_graphic_popup_pane_g2_ParamLimits

0xd9c8,	// (0x00036a71) cell_large_graphic_popup_pane_g2

0xd9d6,	// (0x00036a7f) cell_large_graphic_popup_pane_g3_ParamLimits

0xd9d6,	// (0x00036a7f) cell_large_graphic_popup_pane_g3

0xd9e4,	// (0x00036a8d) cell_large_graphic_popup_pane_g4_ParamLimits

0xd9e4,	// (0x00036a8d) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x00038347) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x00038347) cell_large_graphic_popup_pane_g

0xcd80,	// (0x00035e29) grid_highlight_pane_cp010

0xd001,	// (0x000360aa) bg_popup_call_pane_g1

0xd9f5,	// (0x00036a9e) list_single_graphic_popup_conf_pane_ParamLimits

0xd9f5,	// (0x00036a9e) list_single_graphic_popup_conf_pane

0xda08,	// (0x00036ab1) list_highlight_pane_cp01

0xda11,	// (0x00036aba) list_single_graphic_popup_conf_pane_g1

0xda19,	// (0x00036ac2) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x00038350) list_single_graphic_popup_conf_pane_g

0xda21,	// (0x00036aca) list_single_graphic_popup_conf_pane_t1

0xda2f,	// (0x00036ad8) linegrid_cams_pane_g1

0x3629,	// (0x0002c6d2) linegrid_cams_pane_g2

0xd260,	// (0x00036309) linegrid_cams_pane_g3

0xda38,	// (0x00036ae1) linegrid_cams_pane_g4

0x3632,	// (0x0002c6db) linegrid_cams_pane_g5

0x363b,	// (0x0002c6e4) linegrid_cams_pane_g6

0xd307,	// (0x000363b0) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x00038355) linegrid_cams_pane_g

0xda41,	// (0x00036aea) popup_clock_analogue_window

0xda41,	// (0x00036aea) popup_clock_digital_window

0xcd80,	// (0x00035e29) popup_phob_thumbnail_window

0xd001,	// (0x000360aa) call_video_uplink_pane_g1

0xda4a,	// (0x00036af3) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x00038364) call_video_uplink_pane_g

0xda52,	// (0x00036afb) video_uplink_pane

0xda5a,	// (0x00036b03) mce_image_pane_g1

0x3646,	// (0x0002c6ef) mce_image_pane_g2

0x3650,	// (0x0002c6f9) mce_image_pane_g3

0x3658,	// (0x0002c701) mce_image_pane_g4

0x3660,	// (0x0002c709) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x00038369) mce_image_pane_g

0xda64,	// (0x00036b0d) control_top_pane_stacon_cp01_ParamLimits

0xda64,	// (0x00036b0d) control_top_pane_stacon_cp01

0xda78,	// (0x00036b21) uni_indicator_pane_stacon_cp01_ParamLimits

0xda78,	// (0x00036b21) uni_indicator_pane_stacon_cp01

0xda89,	// (0x00036b32) bg_popup_sub_pane_cp03

0xda93,	// (0x00036b3c) chi_dic_find_pane

0x3668,	// (0x0002c711) listscroll_chi_dic_pane

0xda9b,	// (0x00036b44) main_pane_chidic_g1

0xdaa3,	// (0x00036b4c) chi_dic_find_pane_t1

0xdab1,	// (0x00036b5a) find_chidic_pane

0xdaba,	// (0x00036b63) chi_dic_list_pane_ParamLimits

0xdaba,	// (0x00036b63) chi_dic_list_pane

0xdacb,	// (0x00036b74) scroll_pane_cp020

0xdad3,	// (0x00036b7c) find_chidic_pane_t1

0xcd80,	// (0x00035e29) input_focus_pane_cp06

0x367c,	// (0x0002c725) list_chi_dic_pane_ParamLimits

0x367c,	// (0x0002c725) list_chi_dic_pane

0x368e,	// (0x0002c737) list_chi_dic_pane_t1_ParamLimits

0x368e,	// (0x0002c737) list_chi_dic_pane_t1

0xcd80,	// (0x00035e29) list_highlight_pane_cp020

0xdae2,	// (0x00036b8b) bg_cale_heading_pane_g1

0x36a1,	// (0x0002c74a) bg_cale_heading_pane_g2

0x36a9,	// (0x0002c752) bg_cale_heading_pane_g3

0x36b1,	// (0x0002c75a) bg_cale_heading_pane_g4

0x36bb,	// (0x0002c764) bg_cale_heading_pane_g5

0x36c5,	// (0x0002c76e) bg_cale_heading_pane_g6

0x36cd,	// (0x0002c776) bg_cale_heading_pane_g7

0x36d5,	// (0x0002c77e) bg_cale_heading_pane_g8

0x36df,	// (0x0002c788) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x00038374) bg_cale_heading_pane_g

0xdae2,	// (0x00036b8b) bg_cale_side_pane_g1

0x36e9,	// (0x0002c792) bg_cale_side_pane_g2

0x36f1,	// (0x0002c79a) bg_cale_side_pane_g3

0x36f9,	// (0x0002c7a2) bg_cale_side_pane_g4

0x3701,	// (0x0002c7aa) bg_cale_side_pane_g5

0x3709,	// (0x0002c7b2) bg_cale_side_pane_g6

0x3711,	// (0x0002c7ba) bg_cale_side_pane_g7

0x3719,	// (0x0002c7c2) bg_cale_side_pane_g8

0x3721,	// (0x0002c7ca) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x00038387) bg_cale_side_pane_g

0x3729,	// (0x0002c7d2) popup_call_status_window_ParamLimits

0x3729,	// (0x0002c7d2) popup_call_status_window

0xdaea,	// (0x00036b93) stacon_top_pane

0xdaf2,	// (0x00036b9b) status_pane_ParamLimits

0xdaf2,	// (0x00036b9b) status_pane

0xdb07,	// (0x00036bb0) status_small_pane

0xdb0f,	// (0x00036bb8) control_pane

0xcd80,	// (0x00035e29) stacon_bottom_pane

0xdb17,	// (0x00036bc0) list_single_mce_smart_pane_t1_ParamLimits

0xdb17,	// (0x00036bc0) list_single_mce_smart_pane_t1

0xdb2a,	// (0x00036bd3) list_single_mce_smart_pane_t2_ParamLimits

0xdb2a,	// (0x00036bd3) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x0003839a) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x0003839a) list_single_mce_smart_pane_t

0x3772,	// (0x0002c81b) compass_pane

0x377b,	// (0x0002c824) main_location2_pane_t1

0x378d,	// (0x0002c836) main_location2_pane_t2

0x379f,	// (0x0002c848) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x0003839f) main_location2_pane_t

0xdb49,	// (0x00036bf2) compass_pane_g1_ParamLimits

0xdb49,	// (0x00036bf2) compass_pane_g1

0x37e3,	// (0x0002c88c) compass_pane_t1

0x37f2,	// (0x0002c89b) compass_pane_t2

0x0005,

0xf2ff,	// (0x000383a8) compass_pane_t

0x3839,	// (0x0002c8e2) text_secondary_cp61

0xdbc5,	// (0x00036c6e) navi_pane_cams_g5

0xdc41,	// (0x00036cea) navi_pane_im_t1

0xdc4f,	// (0x00036cf8) navi_pane_mp_g1_ParamLimits

0xdc4f,	// (0x00036cf8) navi_pane_mp_g1

0xdc63,	// (0x00036d0c) navi_pane_mp_g2_ParamLimits

0xdc63,	// (0x00036d0c) navi_pane_mp_g2

0xdc6f,	// (0x00036d18) navi_pane_mp_g3_ParamLimits

0xdc6f,	// (0x00036d18) navi_pane_mp_g3

0x0002,

0xf313,	// (0x000383bc) navi_pane_mp_g_ParamLimits

0xf313,	// (0x000383bc) navi_pane_mp_g

0xdc7b,	// (0x00036d24) navi_pane_mp_t1

0xdc89,	// (0x00036d32) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x000383c3) navi_pane_mp_t

0xdcf4,	// (0x00036d9d) navi_pane_vt_g1

0xdc7b,	// (0x00036d24) navi_pane_vt_t1

0xdcfc,	// (0x00036da5) navi_slider_pane

0xd318,	// (0x000363c1) zooming_pane

0xdd0c,	// (0x00036db5) navi_slider_pane_g1

0xb0a2,	// (0x0003414b) navi_slider_pane_g2

0x0006,

0xf321,	// (0x000383ca) navi_slider_pane_g

0xdd30,	// (0x00036dd9) aid_levels_zoom

0xdd38,	// (0x00036de1) zooming_pane_g1

0xdd40,	// (0x00036de9) zooming_pane_g2

0xdd40,	// (0x00036de9) zooming_pane_g3

0x0002,

0xf330,	// (0x000383d9) zooming_pane_g

0xdd48,	// (0x00036df1) level_10_zoom

0xdd51,	// (0x00036dfa) level_11_zoom

0xdd5a,	// (0x00036e03) level_1_zoom

0xdd63,	// (0x00036e0c) level_2_zoom

0xdd6c,	// (0x00036e15) level_3_zoom

0xdd75,	// (0x00036e1e) level_4_zoom

0xdd7e,	// (0x00036e27) level_5_zoom

0xdd87,	// (0x00036e30) level_6_zoom

0xdd90,	// (0x00036e39) level_7_zoom

0xdd99,	// (0x00036e42) level_8_zoom

0xdda2,	// (0x00036e4b) level_9_zoom

0xddb3,	// (0x00036e5c) popup_phob_thumbnail_window_g1

0xddbb,	// (0x00036e64) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x000383e0) popup_phob_thumbnail_window_g

0x4265,	// (0x0002d30e) level_1_location

0x426d,	// (0x0002d316) level_2_location

0x4275,	// (0x0002d31e) level_3_location

0x427d,	// (0x0002d326) level_4_location

0xd318,	// (0x000363c1) level_5_location

0x388a,	// (0x0002c933) mce_icon_pane_g1

0x3894,	// (0x0002c93d) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x000383e5) mce_icon_pane_g

0xddc3,	// (0x00036e6c) main_mup_pane_g1_ParamLimits

0xddc3,	// (0x00036e6c) main_mup_pane_g1

0xddc3,	// (0x00036e6c) main_mup_pane_g2_ParamLimits

0xddc3,	// (0x00036e6c) main_mup_pane_g2

0xddc3,	// (0x00036e6c) main_mup_pane_g3_ParamLimits

0xddc3,	// (0x00036e6c) main_mup_pane_g3

0xddc3,	// (0x00036e6c) main_mup_pane_g4_ParamLimits

0xddc3,	// (0x00036e6c) main_mup_pane_g4

0xddc3,	// (0x00036e6c) main_mup_pane_g5_ParamLimits

0xddc3,	// (0x00036e6c) main_mup_pane_g5

0xddc3,	// (0x00036e6c) main_mup_pane_g6_ParamLimits

0xddc3,	// (0x00036e6c) main_mup_pane_g6

0xddc3,	// (0x00036e6c) main_mup_pane_g7_ParamLimits

0xddc3,	// (0x00036e6c) main_mup_pane_g7

0xddc3,	// (0x00036e6c) main_mup_pane_g8_ParamLimits

0xddc3,	// (0x00036e6c) main_mup_pane_g8

0xddc3,	// (0x00036e6c) main_mup_pane_g9_ParamLimits

0xddc3,	// (0x00036e6c) main_mup_pane_g9

0xddc3,	// (0x00036e6c) main_mup_pane_g10_ParamLimits

0xddc3,	// (0x00036e6c) main_mup_pane_g10

0xddc3,	// (0x00036e6c) main_mup_pane_g11_ParamLimits

0xddc3,	// (0x00036e6c) main_mup_pane_g11

0xd064,	// (0x0003610d) main_mup_pane_g12_ParamLimits

0xd064,	// (0x0003610d) main_mup_pane_g12

0xddc3,	// (0x00036e6c) main_mup_pane_g13_ParamLimits

0xddc3,	// (0x00036e6c) main_mup_pane_g13

0x000c,

0xf341,	// (0x000383ea) main_mup_pane_g_ParamLimits

0xf341,	// (0x000383ea) main_mup_pane_g

0xddd1,	// (0x00036e7a) main_mup_pane_t1_ParamLimits

0xddd1,	// (0x00036e7a) main_mup_pane_t1

0xddd1,	// (0x00036e7a) main_mup_pane_t2_ParamLimits

0xddd1,	// (0x00036e7a) main_mup_pane_t2

0xddd1,	// (0x00036e7a) main_mup_pane_t3_ParamLimits

0xddd1,	// (0x00036e7a) main_mup_pane_t3

0xd0ac,	// (0x00036155) main_mup_pane_t4_ParamLimits

0xd0ac,	// (0x00036155) main_mup_pane_t4

0xd0ac,	// (0x00036155) main_mup_pane_t5_ParamLimits

0xd0ac,	// (0x00036155) main_mup_pane_t5

0xd0c0,	// (0x00036169) main_mup_pane_t6_ParamLimits

0xd0c0,	// (0x00036169) main_mup_pane_t6

0x0005,

0xf35c,	// (0x00038405) main_mup_pane_t_ParamLimits

0xf35c,	// (0x00038405) main_mup_pane_t

0xd056,	// (0x000360ff) mup_progress_pane_ParamLimits

0xd056,	// (0x000360ff) mup_progress_pane

0xdde5,	// (0x00036e8e) mup_visualizer_pane_ParamLimits

0xdde5,	// (0x00036e8e) mup_visualizer_pane

0xdde5,	// (0x00036e8e) mup_volume_pane_ParamLimits

0xdde5,	// (0x00036e8e) mup_volume_pane

0xd072,	// (0x0003611b) mup_visualizer_pane_g1_ParamLimits

0xd072,	// (0x0003611b) mup_visualizer_pane_g1

0xddf3,	// (0x00036e9c) mup_visualizer_pane_g2_ParamLimits

0xddf3,	// (0x00036e9c) mup_visualizer_pane_g2

0xd064,	// (0x0003610d) mup_visualizer_pane_g3_ParamLimits

0xd064,	// (0x0003610d) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x00038412) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x00038412) mup_visualizer_pane_g

0xd0a2,	// (0x0003614b) mup_volume_pane_g1

0xd0a2,	// (0x0003614b) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00038135) mup_volume_pane_g

0xd0a2,	// (0x0003614b) mup_progress_pane_g1

0xd0a2,	// (0x0003614b) mup_progress_pane_g2

0xd0a2,	// (0x0003614b) mup_progress_pane_g3

0x0002,

0xf370,	// (0x00038419) mup_progress_pane_g

0xcd80,	// (0x00035e29) bg_popup_window_pane_cp05

0xde01,	// (0x00036eaa) heading_pane_cp02_ParamLimits

0xde01,	// (0x00036eaa) heading_pane_cp02

0xde1b,	// (0x00036ec4) list_popup_blid_pane

0xde23,	// (0x00036ecc) list_blid_sat_info_pane_ParamLimits

0xde23,	// (0x00036ecc) list_blid_sat_info_pane

0xde36,	// (0x00036edf) list_blid_sat_info_pane_g1

0xde3e,	// (0x00036ee7) list_blid_sat_info_pane_t1

0x3994,	// (0x0002ca3d) mup_equalizer_pane_ParamLimits

0x3994,	// (0x0002ca3d) mup_equalizer_pane

0x39ad,	// (0x0002ca56) mup_equalizer_pane_cp1_ParamLimits

0x39ad,	// (0x0002ca56) mup_equalizer_pane_cp1

0x39ca,	// (0x0002ca73) mup_equalizer_pane_cp2_ParamLimits

0x39ca,	// (0x0002ca73) mup_equalizer_pane_cp2

0x39e7,	// (0x0002ca90) mup_equalizer_pane_cp3_ParamLimits

0x39e7,	// (0x0002ca90) mup_equalizer_pane_cp3

0x3a08,	// (0x0002cab1) mup_equalizer_pane_cp4_ParamLimits

0x3a08,	// (0x0002cab1) mup_equalizer_pane_cp4

0x3a29,	// (0x0002cad2) mup_equalizer_pane_cp5

0x3a3d,	// (0x0002cae6) mup_equalizer_pane_cp6

0x3a51,	// (0x0002cafa) mup_equalizer_pane_cp7

0xeece,	// (0x00037f77) bg_popup_call_poc_act_pane_g9

0xeed6,	// (0x00037f7f) bg_popup_call_poc_act_pane_g10

0xeede,	// (0x00037f87) bg_popup_call_poc_act_pane_g11

0x000a,

0xcfe9,	// (0x00036092) mup_scale_pane

0xd001,	// (0x000360aa) mup_scale_pane_g1

0xde4c,	// (0x00036ef5) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x00038435) mup_scale_pane_g

0xde70,	// (0x00036f19) msg_data_pane

0xde78,	// (0x00036f21) scroll_pane_cp017

0x3a77,	// (0x0002cb20) bg_list_pane_cp04_ParamLimits

0x3a77,	// (0x0002cb20) bg_list_pane_cp04

0xde80,	// (0x00036f29) msg_data_pane_g1

0x3a9d,	// (0x0002cb46) msg_data_pane_g2

0x3aa7,	// (0x0002cb50) msg_data_pane_g3

0x3aaf,	// (0x0002cb58) msg_data_pane_g4

0x3ab7,	// (0x0002cb60) msg_data_pane_g5

0x3abf,	// (0x0002cb68) msg_data_pane_g6

0x3ac7,	// (0x0002cb70) msg_data_pane_g7

0x0006,

0xf39b,	// (0x00038444) msg_data_pane_g

0x3acf,	// (0x0002cb78) msg_text_pane_ParamLimits

0x3acf,	// (0x0002cb78) msg_text_pane

0x3b01,	// (0x0002cbaa) qrid_highlight_pane_cp011_ParamLimits

0x3b01,	// (0x0002cbaa) qrid_highlight_pane_cp011

0xcd80,	// (0x00035e29) msg_body_pane

0xcfe9,	// (0x00036092) msg_header_pane

0xde9c,	// (0x00036f45) input_focus_pane_cp07

0x3b25,	// (0x0002cbce) msg_header_pane_t1_ParamLimits

0x3b25,	// (0x0002cbce) msg_header_pane_t1

0x3b41,	// (0x0002cbea) msg_header_pane_t2_ParamLimits

0x3b41,	// (0x0002cbea) msg_header_pane_t2

0x0001,

0xf3af,	// (0x00038458) msg_header_pane_t_ParamLimits

0xf3af,	// (0x00038458) msg_header_pane_t

0xdebd,	// (0x00036f66) msg_body_pane_g1

0x3b61,	// (0x0002cc0a) msg_body_pane_t1_ParamLimits

0x3b61,	// (0x0002cc0a) msg_body_pane_t1

0x3b92,	// (0x0002cc3b) msg_body_pane_t2_ParamLimits

0x3b92,	// (0x0002cc3b) msg_body_pane_t2

0x3ba4,	// (0x0002cc4d) msg_body_pane_t3_ParamLimits

0x3ba4,	// (0x0002cc4d) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x0003845d) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x0003845d) msg_body_pane_t

0x0d4e,	// (0x00029df7) main_viewer_pane_g1_ParamLimits

0x0d4e,	// (0x00029df7) main_viewer_pane_g1

0x0d5c,	// (0x00029e05) main_viewer_pane_g2_ParamLimits

0x0d5c,	// (0x00029e05) main_viewer_pane_g2

0x3bd4,	// (0x0002cc7d) main_viewer_pane_g3_ParamLimits

0x3bd4,	// (0x0002cc7d) main_viewer_pane_g3

0x3be3,	// (0x0002cc8c) main_viewer_pane_g4_ParamLimits

0x3be3,	// (0x0002cc8c) main_viewer_pane_g4

0xb0cc,	// (0x00034175) main_viewer_pane_g5_ParamLimits

0xb0cc,	// (0x00034175) main_viewer_pane_g5

0xb0cc,	// (0x00034175) main_viewer_pane_g7_ParamLimits

0xb0cc,	// (0x00034175) main_viewer_pane_g7

0xd7bd,	// (0x00036866) main_viewer_pane_g8_ParamLimits

0xd7bd,	// (0x00036866) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x0003846d) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x0003846d) main_viewer_pane_g

0xdec5,	// (0x00036f6e) viewer_content_pane_ParamLimits

0xdec5,	// (0x00036f6e) viewer_content_pane

0x3c1f,	// (0x0002ccc8) main_postcard_pane_g1_ParamLimits

0x3c1f,	// (0x0002ccc8) main_postcard_pane_g1

0x3c35,	// (0x0002ccde) main_postcard_pane_g2_ParamLimits

0x3c35,	// (0x0002ccde) main_postcard_pane_g2

0x3c4b,	// (0x0002ccf4) main_postcard_pane_g3_ParamLimits

0x3c4b,	// (0x0002ccf4) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x0003847e) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x0003847e) main_postcard_pane_g

0x3c62,	// (0x0002cd0b) main_postcard_pane_g4

0xf00a,	// (0x000380b3) smil_status_volume_pane_g2

0x3ca5,	// (0x0002cd4e) postcard_pane_ParamLimits

0x3ca5,	// (0x0002cd4e) postcard_pane

0xded3,	// (0x00036f7c) postcard_pane_g1_ParamLimits

0xded3,	// (0x00036f7c) postcard_pane_g1

0x3ce7,	// (0x0002cd90) postcard_pane_g2_ParamLimits

0x3ce7,	// (0x0002cd90) postcard_pane_g2

0x3cf3,	// (0x0002cd9c) postcard_pane_g3_ParamLimits

0x3cf3,	// (0x0002cd9c) postcard_pane_g3

0xdee1,	// (0x00036f8a) postcard_pane_g4_ParamLimits

0xdee1,	// (0x00036f8a) postcard_pane_g4

0x3cff,	// (0x0002cda8) postcard_pane_g5_ParamLimits

0x3cff,	// (0x0002cda8) postcard_pane_g5

0x3d14,	// (0x0002cdbd) postcard_pane_g6_ParamLimits

0x3d14,	// (0x0002cdbd) postcard_pane_g6

0xded3,	// (0x00036f7c) postcard_pane_g7_ParamLimits

0xded3,	// (0x00036f7c) postcard_pane_g7

0x0006,

0xf3e2,	// (0x0003848b) postcard_pane_g_ParamLimits

0xf3e2,	// (0x0003848b) postcard_pane_g

0x3d28,	// (0x0002cdd1) main_mp2_pane_g1_ParamLimits

0x3d28,	// (0x0002cdd1) main_mp2_pane_g1

0x3d34,	// (0x0002cddd) main_mp2_pane_g2_ParamLimits

0x3d34,	// (0x0002cddd) main_mp2_pane_g2

0x3d40,	// (0x0002cde9) main_mp2_pane_g3_ParamLimits

0x3d40,	// (0x0002cde9) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x0003849a) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x0003849a) main_mp2_pane_g

0x3d4c,	// (0x0002cdf5) main_mp2_pane_t1_ParamLimits

0x3d4c,	// (0x0002cdf5) main_mp2_pane_t1

0x3d61,	// (0x0002ce0a) main_mp2_pane_t2_ParamLimits

0x3d61,	// (0x0002ce0a) main_mp2_pane_t2

0x3d73,	// (0x0002ce1c) main_mp2_pane_t3_ParamLimits

0x3d73,	// (0x0002ce1c) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x000384a1) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x000384a1) main_mp2_pane_t

0xcf51,	// (0x00035ffa) pec_content_pane_ParamLimits

0xcf51,	// (0x00035ffa) pec_content_pane

0xc963,	// (0x00035a0c) scroll_pane_cp015

0xdde5,	// (0x00036e8e) pec_attribute_pane_ParamLimits

0xdde5,	// (0x00036e8e) pec_attribute_pane

0xd064,	// (0x0003610d) pec_content_pane_g1_ParamLimits

0xd064,	// (0x0003610d) pec_content_pane_g1

0xdeef,	// (0x00036f98) pec_content_pane_t1_ParamLimits

0xdeef,	// (0x00036f98) pec_content_pane_t1

0xdf03,	// (0x00036fac) pec_content_pane_t2_ParamLimits

0xdf03,	// (0x00036fac) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x000384a8) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x000384a8) pec_content_pane_t

0xd056,	// (0x000360ff) list_single_graphic_pane_cp01_ParamLimits

0xd056,	// (0x000360ff) list_single_graphic_pane_cp01

0xcfe9,	// (0x00036092) bg_popup_sub_pane_cp04

0xdf17,	// (0x00036fc0) popup_mup_playback_window_g1

0xdf23,	// (0x00036fcc) popup_mup_playback_window_t1

0xdf38,	// (0x00036fe1) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x000384ad) popup_mup_playback_window_t

0xdf6f,	// (0x00037018) main_image_pane_g1_ParamLimits

0xdf6f,	// (0x00037018) main_image_pane_g1

0xdfb2,	// (0x0003705b) scroll_pane_cp018_ParamLimits

0xdfb2,	// (0x0003705b) scroll_pane_cp018

0xdfca,	// (0x00037073) scroll_pane_cp016_ParamLimits

0xdfca,	// (0x00037073) scroll_pane_cp016

0x3e3d,	// (0x0002cee6) smil2_image_pane_ParamLimits

0x3e3d,	// (0x0002cee6) smil2_image_pane

0x3e6d,	// (0x0002cf16) smil2_root_pane_ParamLimits

0x3e6d,	// (0x0002cf16) smil2_root_pane

0x3ea5,	// (0x0002cf4e) smil2_text_pane_ParamLimits

0x3ea5,	// (0x0002cf4e) smil2_text_pane

0xc963,	// (0x00035a0c) bg_list_pane_cp06

0xc963,	// (0x00035a0c) grid_radio_pane

0xcd80,	// (0x00035e29) bg_popup_window_pane_cp06

0xd81e,	// (0x000368c7) main_fmradio_pane_t1

0xd9a5,	// (0x00036a4e) heading_pane_cp04

0xd81e,	// (0x000368c7) main_fmradio_pane_t2

0xeee6,	// (0x00037f8f) popup_cale_lunar_info_window_g1

0xd81e,	// (0x000368c7) main_fmradio_pane_t3

0xeeee,	// (0x00037f97) popup_cale_lunar_info_window_g2

0xd81e,	// (0x000368c7) main_fmradio_pane_t4

0x0001,

0xd81e,	// (0x000368c7) main_fmradio_pane_t5

0x0004,

0xf4c1,	// (0x0003856a) popup_cale_lunar_info_window_g

0xf264,	// (0x0003830d) main_fmradio_pane_t

0xc963,	// (0x00035a0c) wait_bar_pane_cp03

0xd056,	// (0x000360ff) cell_fmradio_pane_ParamLimits

0xd056,	// (0x000360ff) cell_fmradio_pane

0xd064,	// (0x0003610d) cell_fmradio_pane_g1_ParamLimits

0xd064,	// (0x0003610d) cell_fmradio_pane_g1

0xc963,	// (0x00035a0c) grid_highlight_pane_cp011

0xdffe,	// (0x000370a7) poc_content_pane_ParamLimits

0xdffe,	// (0x000370a7) poc_content_pane

0xe010,	// (0x000370b9) scroll_pane_cp019

0x3f25,	// (0x0002cfce) popup_call_poc_act_window_ParamLimits

0x3f25,	// (0x0002cfce) popup_call_poc_act_window

0x3f49,	// (0x0002cff2) popup_call_poc_inact_window_ParamLimits

0x3f49,	// (0x0002cff2) popup_call_poc_inact_window

0xf49d,	// (0x00038546) bg_popup_call_poc_act_pane_g

0xee5e,	// (0x00037f07) bg_popup_call_poc_inact_pane_g1

0xee66,	// (0x00037f0f) bg_popup_call_poc_inact_pane_g2

0xe018,	// (0x000370c1) popup_call_poc_act_window_g2

0xee6e,	// (0x00037f17) bg_popup_call_poc_inact_pane_g3

0xee76,	// (0x00037f1f) bg_popup_call_poc_inact_pane_g4

0xee7e,	// (0x00037f27) bg_popup_call_poc_inact_pane_g5

0xe020,	// (0x000370c9) popup_call_poc_act_window_t1_ParamLimits

0xe020,	// (0x000370c9) popup_call_poc_act_window_t1

0xe048,	// (0x000370f1) popup_call_poc_act_window_t2_ParamLimits

0xe048,	// (0x000370f1) popup_call_poc_act_window_t2

0xe070,	// (0x00037119) popup_call_poc_act_window_t3_ParamLimits

0xe070,	// (0x00037119) popup_call_poc_act_window_t3

0xe098,	// (0x00037141) popup_call_poc_act_window_t4_ParamLimits

0xe098,	// (0x00037141) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x000384c2) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x000384c2) popup_call_poc_act_window_t

0xee86,	// (0x00037f2f) bg_popup_call_poc_inact_pane_g6

0xee8e,	// (0x00037f37) bg_popup_call_poc_inact_pane_g7

0xee96,	// (0x00037f3f) bg_popup_call_poc_inact_pane_g8

0xe0aa,	// (0x00037153) popup_call_poc_inact_window_g2

0xee9e,	// (0x00037f47) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48a,	// (0x00038533) bg_popup_call_poc_inact_pane_g

0xe0b2,	// (0x0003715b) popup_call_poc_inact_window_t1_ParamLimits

0xe0b2,	// (0x0003715b) popup_call_poc_inact_window_t1

0xe0c7,	// (0x00037170) popup_call_poc_inact_window_t2_ParamLimits

0xe0c7,	// (0x00037170) popup_call_poc_inact_window_t2

0xe0dc,	// (0x00037185) popup_call_poc_inact_window_t3_ParamLimits

0xe0dc,	// (0x00037185) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x000384cb) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x000384cb) popup_call_poc_inact_window_t

0xef82,	// (0x0003802b) context_pane_ParamLimits

0x448d,	// (0x0002d536) signal_pane_ParamLimits

0xd318,	// (0x000363c1) main_call2_pane

0xb117,	// (0x000341c0) popup_phob_thumbnail2_window_ParamLimits

0xb117,	// (0x000341c0) popup_phob_thumbnail2_window

0xb0b4,	// (0x0003415d) aid_hotspot_pointer_arrow_pane

0xb0bc,	// (0x00034165) aid_hotspot_pointer_hand_pane

0x422f,	// (0x0002d2d8) phob_pre_status_pane_g5

0xcf51,	// (0x00035ffa) cams_zoom_pane_ParamLimits

0xcf51,	// (0x00035ffa) image_vga_pane_ParamLimits

0xd064,	// (0x0003610d) main_camera_pane_g1_ParamLimits

0xd064,	// (0x0003610d) main_camera_pane_g2_ParamLimits

0xd064,	// (0x0003610d) main_camera_pane_g3_ParamLimits

0xd064,	// (0x0003610d) main_camera_pane_g4_ParamLimits

0xd064,	// (0x0003610d) main_camera_pane_g5_ParamLimits

0xd064,	// (0x0003610d) main_camera_pane_g6_ParamLimits

0xd064,	// (0x0003610d) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x00038206) main_camera_pane_g_ParamLimits

0xd0ac,	// (0x00036155) main_camera_pane_t1_ParamLimits

0xd0ac,	// (0x00036155) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x00038217) main_camera_pane_t_ParamLimits

0xcfe9,	// (0x00036092) bg_popup_preview_window_pane_cp01_ParamLimits

0xcfe9,	// (0x00036092) bg_popup_preview_window_pane_cp01

0xe0f1,	// (0x0003719a) popup_phob_thumbnail2_window_g1_ParamLimits

0xe0f1,	// (0x0003719a) popup_phob_thumbnail2_window_g1

0xcd80,	// (0x00035e29) call2_cli_visual_pane

0x3f7d,	// (0x0002d026) popup_call2_audio_conf_window_ParamLimits

0x3f7d,	// (0x0002d026) popup_call2_audio_conf_window

0x3f9d,	// (0x0002d046) popup_call2_audio_first_window_ParamLimits

0x3f9d,	// (0x0002d046) popup_call2_audio_first_window

0x4033,	// (0x0002d0dc) popup_call2_audio_in_window_ParamLimits

0x4033,	// (0x0002d0dc) popup_call2_audio_in_window

0x407b,	// (0x0002d124) popup_call2_audio_out_window_ParamLimits

0x407b,	// (0x0002d124) popup_call2_audio_out_window

0x40e5,	// (0x0002d18e) popup_call2_audio_second_window_ParamLimits

0x40e5,	// (0x0002d18e) popup_call2_audio_second_window

0x414b,	// (0x0002d1f4) popup_call2_audio_wait_window_ParamLimits

0x414b,	// (0x0002d1f4) popup_call2_audio_wait_window

0xcd80,	// (0x00035e29) bg_popup_call2_act_pane_cp03

0xcfcb,	// (0x00036074) list_conf_pane_cp

0xe0fd,	// (0x000371a6) popup_call2_audio_conf_window_t1

0xd9f5,	// (0x00036a9e) list_single_graphic_popup_conf2_pane_ParamLimits

0xd9f5,	// (0x00036a9e) list_single_graphic_popup_conf2_pane

0xda08,	// (0x00036ab1) list_highlight_pane_cp04

0xe10b,	// (0x000371b4) list_single_graphic_popup_conf2_pane_g1

0xda19,	// (0x00036ac2) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x000384d2) list_single_graphic_popup_conf2_pane_g

0xe115,	// (0x000371be) list_single_graphic_popup_conf2_pane_t1

0xe123,	// (0x000371cc) bg_popup_call2_act_pane_cp01_ParamLimits

0xe123,	// (0x000371cc) bg_popup_call2_act_pane_cp01

0xe1ad,	// (0x00037256) call_type_pane_cp05_ParamLimits

0xe1ad,	// (0x00037256) call_type_pane_cp05

0xe201,	// (0x000372aa) popup_call2_audio_second_window_g1_ParamLimits

0xe201,	// (0x000372aa) popup_call2_audio_second_window_g1

0xe255,	// (0x000372fe) popup_call2_audio_second_window_g2_ParamLimits

0xe255,	// (0x000372fe) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x000384d7) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x000384d7) popup_call2_audio_second_window_g

0xe2ba,	// (0x00037363) popup_call2_audio_second_window_t1_ParamLimits

0xe2ba,	// (0x00037363) popup_call2_audio_second_window_t1

0xe375,	// (0x0003741e) popup_call2_audio_second_window_t2_ParamLimits

0xe375,	// (0x0003741e) popup_call2_audio_second_window_t2

0xe3c8,	// (0x00037471) popup_call2_audio_second_window_t3_ParamLimits

0xe3c8,	// (0x00037471) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x000384de) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x000384de) popup_call2_audio_second_window_t

0xcd80,	// (0x00035e29) bg_popup_call2_in_pane_cp02

0xcd8a,	// (0x00035e33) call_type_pane_cp04

0x4185,	// (0x0002d22e) popup_call2_audio_wait_window_g1

0x418d,	// (0x0002d236) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x000384e7) popup_call2_audio_wait_window_g

0xcda2,	// (0x00035e4b) popup_call2_audio_wait_window_t3

0xe4bb,	// (0x00037564) bg_popup_call2_act_pane_ParamLimits

0xe4bb,	// (0x00037564) bg_popup_call2_act_pane

0xe57b,	// (0x00037624) call_type_pane_cp03_ParamLimits

0xe57b,	// (0x00037624) call_type_pane_cp03

0xe5df,	// (0x00037688) popup_call2_audio_first_window_g1_ParamLimits

0xe5df,	// (0x00037688) popup_call2_audio_first_window_g1

0xe65d,	// (0x00037706) popup_call2_audio_first_window_g2_ParamLimits

0xe65d,	// (0x00037706) popup_call2_audio_first_window_g2

0xe64f,	// (0x000376f8) popup_call2_audio_first_window_g3_ParamLimits

0xe64f,	// (0x000376f8) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x000384ec) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x000384ec) popup_call2_audio_first_window_g

0xe73b,	// (0x000377e4) popup_call2_audio_first_window_t1_ParamLimits

0xe73b,	// (0x000377e4) popup_call2_audio_first_window_t1

0xe83e,	// (0x000378e7) popup_call2_audio_first_window_t4_ParamLimits

0xe83e,	// (0x000378e7) popup_call2_audio_first_window_t4

0xe921,	// (0x000379ca) popup_call2_audio_first_window_t5_ParamLimits

0xe921,	// (0x000379ca) popup_call2_audio_first_window_t5

0x0003,

0xf44e,	// (0x000384f7) popup_call2_audio_first_window_t_ParamLimits

0xf44e,	// (0x000384f7) popup_call2_audio_first_window_t

0xcfe1,	// (0x0003608a) bg_popup_call2_act_pane_g1

0xeef6,	// (0x00037f9f) popup_cale_lunar_info_window_t1

0xef04,	// (0x00037fad) popup_cale_lunar_info_window_t2

0xef12,	// (0x00037fbb) popup_cale_lunar_info_window_t3

0xcd80,	// (0x00035e29) bg_popup_call2_bubble_pane

0xea22,	// (0x00037acb) bg_popup_call2_in_pane_cp01_ParamLimits

0xea22,	// (0x00037acb) bg_popup_call2_in_pane_cp01

0xca5c,	// (0x00035b05) call_type_pane_cp02

0x4195,	// (0x0002d23e) popup_call2_audio_out_window_g1_ParamLimits

0x4195,	// (0x0002d23e) popup_call2_audio_out_window_g1

0xea6a,	// (0x00037b13) popup_call2_audio_out_window_g2_ParamLimits

0xea6a,	// (0x00037b13) popup_call2_audio_out_window_g2

0x41c1,	// (0x0002d26a) popup_call2_audio_out_window_g3_ParamLimits

0x41c1,	// (0x0002d26a) popup_call2_audio_out_window_g3

0x0003,

0xf457,	// (0x00038500) popup_call2_audio_out_window_g_ParamLimits

0xf457,	// (0x00038500) popup_call2_audio_out_window_g

0xeaa1,	// (0x00037b4a) popup_call2_audio_out_window_t1_ParamLimits

0xeaa1,	// (0x00037b4a) popup_call2_audio_out_window_t1

0xeb00,	// (0x00037ba9) popup_call2_audio_out_window_t2_ParamLimits

0xeb00,	// (0x00037ba9) popup_call2_audio_out_window_t2

0xeb54,	// (0x00037bfd) popup_call2_audio_out_window_t3_ParamLimits

0xeb54,	// (0x00037bfd) popup_call2_audio_out_window_t3

0xeb6a,	// (0x00037c13) popup_call2_audio_out_window_t4_ParamLimits

0xeb6a,	// (0x00037c13) popup_call2_audio_out_window_t4

0xeb80,	// (0x00037c29) popup_call2_audio_out_window_t5_ParamLimits

0xeb80,	// (0x00037c29) popup_call2_audio_out_window_t5

0x0005,

0xf460,	// (0x00038509) popup_call2_audio_out_window_t_ParamLimits

0xf460,	// (0x00038509) popup_call2_audio_out_window_t

0xebe4,	// (0x00037c8d) bg_popup_call2_in_pane_ParamLimits

0xebe4,	// (0x00037c8d) bg_popup_call2_in_pane

0xec40,	// (0x00037ce9) popup_call2_audio_in_window_g1_ParamLimits

0xec40,	// (0x00037ce9) popup_call2_audio_in_window_g1

0xec78,	// (0x00037d21) popup_call2_audio_in_window_g2_ParamLimits

0xec78,	// (0x00037d21) popup_call2_audio_in_window_g2

0xecb0,	// (0x00037d59) popup_call2_audio_in_window_g3_ParamLimits

0xecb0,	// (0x00037d59) popup_call2_audio_in_window_g3

0x0003,

0xf46d,	// (0x00038516) popup_call2_audio_in_window_g_ParamLimits

0xf46d,	// (0x00038516) popup_call2_audio_in_window_g

0xed08,	// (0x00037db1) popup_call2_audio_in_window_t1_ParamLimits

0xed08,	// (0x00037db1) popup_call2_audio_in_window_t1

0xed88,	// (0x00037e31) popup_call2_audio_in_window_t2_ParamLimits

0xed88,	// (0x00037e31) popup_call2_audio_in_window_t2

0xee08,	// (0x00037eb1) popup_call2_audio_in_window_t3_ParamLimits

0xee08,	// (0x00037eb1) popup_call2_audio_in_window_t3

0xee22,	// (0x00037ecb) popup_call2_audio_in_window_t4_ParamLimits

0xee22,	// (0x00037ecb) popup_call2_audio_in_window_t4

0xee34,	// (0x00037edd) popup_call2_audio_in_window_t5_ParamLimits

0xee34,	// (0x00037edd) popup_call2_audio_in_window_t5

0xee49,	// (0x00037ef2) popup_call2_audio_in_window_t6_ParamLimits

0xee49,	// (0x00037ef2) popup_call2_audio_in_window_t6

0x0005,

0xf476,	// (0x0003851f) popup_call2_audio_in_window_t_ParamLimits

0xf476,	// (0x0003851f) popup_call2_audio_in_window_t

0xcfe1,	// (0x0003608a) bg_popup_call2_in_pane_g1

0xef20,	// (0x00037fc9) popup_cale_lunar_info_window_t4

0x0003,

0xf4c6,	// (0x0003856f) popup_cale_lunar_info_window_t

0xcfe9,	// (0x00036092) bg_popup_call2_rect_pane_ParamLimits

0xcfe9,	// (0x00036092) bg_popup_call2_rect_pane

0xcd80,	// (0x00035e29) call2_cli_visual_graphic_pane

0xcd80,	// (0x00035e29) call2_cli_visual_text_pane

0xb13e,	// (0x000341e7) smil_status_volume_pane_g3

0x0002,

0xd001,	// (0x000360aa) call2_cli_visual_graphic_pane_g1

0xd001,	// (0x000360aa) call2_cli_visual_graphic_pane_g2

0xd001,	// (0x000360aa) call2_cli_visual_graphic_pane_g3

0x0002,

0xf483,	// (0x0003852c) call2_cli_visual_graphic_pane_g

0xd228,	// (0x000362d1) bg_popup_call2_rect_pane_g1

0xd220,	// (0x000362c9) bg_popup_call2_rect_pane_g2

0xd218,	// (0x000362c1) bg_popup_call2_rect_pane_g3

0xd238,	// (0x000362e1) bg_popup_call2_rect_pane_g4

0xd230,	// (0x000362d9) bg_popup_call2_rect_pane_g5

0xd240,	// (0x000362e9) bg_popup_call2_rect_pane_g6

0xd248,	// (0x000362f1) bg_popup_call2_rect_pane_g7

0xd258,	// (0x00036301) bg_popup_call2_rect_pane_g8

0xd250,	// (0x000362f9) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x000382bc) bg_popup_call2_rect_pane_g

0xee5e,	// (0x00037f07) bg_popup_call2_bubble_pane_g1

0xee66,	// (0x00037f0f) bg_popup_call2_bubble_pane_g2

0xee6e,	// (0x00037f17) bg_popup_call2_bubble_pane_g3

0xee76,	// (0x00037f1f) bg_popup_call2_bubble_pane_g4

0xee7e,	// (0x00037f27) bg_popup_call2_bubble_pane_g5

0xee86,	// (0x00037f2f) bg_popup_call2_bubble_pane_g6

0xee8e,	// (0x00037f37) bg_popup_call2_bubble_pane_g7

0xee96,	// (0x00037f3f) bg_popup_call2_bubble_pane_g8

0xee9e,	// (0x00037f47) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48a,	// (0x00038533) bg_popup_call2_bubble_pane_g

0x1f2d,	// (0x0002afd6) aid_cale_week_size_cell_pane

0x2403,	// (0x0002b4ac) aid_cams_cif_uncrop_pane_ParamLimits

0x2403,	// (0x0002b4ac) aid_cams_cif_uncrop_pane

0xcf51,	// (0x00035ffa) aid_cams_size_cell_ParamLimits

0xcf51,	// (0x00035ffa) aid_cams_size_cell

0xcf51,	// (0x00035ffa) grid_cams_pane_ParamLimits

0xcf51,	// (0x00035ffa) linegrid_cams_pane_ParamLimits

0x2621,	// (0x0002b6ca) call_video_pane_t1

0x263f,	// (0x0002b6e8) call_video_pane_t2

0x0001,

0xf1ba,	// (0x00038263) call_video_pane_t

0x2a6d,	// (0x0002bb16) aid_cale_month_size_cell_pane_ParamLimits

0x2a6d,	// (0x0002bb16) aid_cale_month_size_cell_pane

0xf50a,	// (0x000385b3) smil_status_volume_pane_g

0xb14b,	// (0x000341f4) volume_smil_pane_ParamLimits

0xaf33,	// (0x00033fdc) aid_popup2_width_pane

0x1eb6,	// (0x0002af5f) cell_qdial_pane_g4_ParamLimits

0x1eb6,	// (0x0002af5f) cell_qdial_pane_g4

0x37c3,	// (0x0002c86c) aid_blid_cardinal_pane_ParamLimits

0x37cf,	// (0x0002c878) aid_blid_destination_pane_ParamLimits

0x37cf,	// (0x0002c878) aid_blid_destination_pane

0xcfe9,	// (0x00036092) bg_popup_call_poc_act_pane_ParamLimits

0xcfe9,	// (0x00036092) bg_popup_call_poc_act_pane

0xcfe9,	// (0x00036092) bg_popup_call_poc_inact_pane_ParamLimits

0xcfe9,	// (0x00036092) bg_popup_call_poc_inact_pane

0xeea6,	// (0x00037f4f) bg_popup_call_poc_act_pane_g1

0xeeae,	// (0x00037f57) bg_popup_call_poc_act_pane_g2

0xeeb6,	// (0x00037f5f) bg_popup_call_poc_act_pane_g3

0xee76,	// (0x00037f1f) bg_popup_call_poc_act_pane_g4

0xee7e,	// (0x00037f27) bg_popup_call_poc_act_pane_g5

0xeebe,	// (0x00037f67) bg_popup_call_poc_act_pane_g6

0xee8e,	// (0x00037f37) bg_popup_call_poc_act_pane_g7

0xeec6,	// (0x00037f6f) bg_popup_call_poc_act_pane_g8

0xcd80,	// (0x00035e29) main_usb_pane

0xb0f2,	// (0x0003419b) popup_cale_lunar_info_window

0x2919,	// (0x0002b9c2) im_reading_pane_t1_ParamLimits

0xd3d9,	// (0x00036482) list_im_pane_ParamLimits

0xd3ea,	// (0x00036493) scroll_pane_cp07_ParamLimits

0xcd80,	// (0x00035e29) grid_highlight_pane_cp012

0xcfe9,	// (0x00036092) mup_scale_pane_ParamLimits

0xd064,	// (0x0003610d) main_usb_pane_g1_ParamLimits

0xd064,	// (0x0003610d) main_usb_pane_g1

0xd064,	// (0x0003610d) main_usb_pane_g2_ParamLimits

0xd064,	// (0x0003610d) main_usb_pane_g2

0x0001,

0xf199,	// (0x00038242) main_usb_pane_g_ParamLimits

0xf199,	// (0x00038242) main_usb_pane_g

0xd0ac,	// (0x00036155) main_usb_pane_t1_ParamLimits

0xd0ac,	// (0x00036155) main_usb_pane_t1

0xd0ac,	// (0x00036155) main_usb_pane_t2_ParamLimits

0xd0ac,	// (0x00036155) main_usb_pane_t2

0xd0ac,	// (0x00036155) main_usb_pane_t3_ParamLimits

0xd0ac,	// (0x00036155) main_usb_pane_t3

0xd0ac,	// (0x00036155) main_usb_pane_t4_ParamLimits

0xd0ac,	// (0x00036155) main_usb_pane_t4

0xd0ac,	// (0x00036155) main_usb_pane_t5_ParamLimits

0xd0ac,	// (0x00036155) main_usb_pane_t5

0xd0ac,	// (0x00036155) main_usb_pane_t6_ParamLimits

0xd0ac,	// (0x00036155) main_usb_pane_t6

0x0005,

0xf4b4,	// (0x0003855d) main_usb_pane_t_ParamLimits

0x3772,	// (0x0002c81b) aid_text_placing

0x377b,	// (0x0002c824) main_location2_pane_t1_ParamLimits

0x378d,	// (0x0002c836) main_location2_pane_t2_ParamLimits

0x379f,	// (0x0002c848) main_location2_pane_t3_ParamLimits

0x37b1,	// (0x0002c85a) main_location2_pane_t4_ParamLimits

0x37b1,	// (0x0002c85a) main_location2_pane_t4

0xf2f6,	// (0x0003839f) main_location2_pane_t_ParamLimits

0xd017,	// (0x000360c0) find_pinb_pane_g2_ParamLimits

0xd017,	// (0x000360c0) find_pinb_pane_g2

0x0001,

0xf072,	// (0x0003811b) find_pinb_pane_g_ParamLimits

0xf072,	// (0x0003811b) find_pinb_pane_g

0xd023,	// (0x000360cc) find_pinb_pane_t1_ParamLimits

0xd035,	// (0x000360de) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x00038120) find_pinb_pane_t_ParamLimits

0xcd80,	// (0x00035e29) main_call3_pane

0x2f58,	// (0x0002c001) cale_month_day_heading_pane_t1_ParamLimits

0x2fde,	// (0x0002c087) cale_month_day_heading_pane_t2_ParamLimits

0x3057,	// (0x0002c100) cale_month_day_heading_pane_t3_ParamLimits

0x30d0,	// (0x0002c179) cale_month_day_heading_pane_t4_ParamLimits

0x3151,	// (0x0002c1fa) cale_month_day_heading_pane_t5_ParamLimits

0x31da,	// (0x0002c283) cale_month_day_heading_pane_t6_ParamLimits

0x3263,	// (0x0002c30c) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x0003829b) cale_month_day_heading_pane_t_ParamLimits

0xd63d,	// (0x000366e6) smil_status_volume_pane

0x3cc3,	// (0x0002cd6c) postcard_address_pane_ParamLimits

0x3cc3,	// (0x0002cd6c) postcard_address_pane

0x3cd5,	// (0x0002cd7e) postcard_message_pane_ParamLimits

0x3cd5,	// (0x0002cd7e) postcard_message_pane

0x41ed,	// (0x0002d296) call2_cli_visual_pane_t1_ParamLimits

0x41ed,	// (0x0002d296) call2_cli_visual_pane_t1

0x466b,	// (0x0002d714) postcard_message_pane_t1_ParamLimits

0x466b,	// (0x0002d714) postcard_message_pane_t1

0x4653,	// (0x0002d6fc) postcard_address_pane_t1_ParamLimits

0x4653,	// (0x0002d6fc) postcard_address_pane_t1

0x463f,	// (0x0002d6e8) popup_call3_audio_in_window_ParamLimits

0x463f,	// (0x0002d6e8) popup_call3_audio_in_window

0x44ca,	// (0x0002d573) bg_popup_call3_in_pane_ParamLimits

0x44ca,	// (0x0002d573) bg_popup_call3_in_pane

0x4540,	// (0x0002d5e9) popup_call3_audio_in_window_g1_ParamLimits

0x4540,	// (0x0002d5e9) popup_call3_audio_in_window_g1

0x4560,	// (0x0002d609) popup_call3_audio_in_window_g2_ParamLimits

0x4560,	// (0x0002d609) popup_call3_audio_in_window_g2

0x4580,	// (0x0002d629) popup_call3_audio_in_window_g3_ParamLimits

0x4580,	// (0x0002d629) popup_call3_audio_in_window_g3

0x0003,

0xf511,	// (0x000385ba) popup_call3_audio_in_window_g_ParamLimits

0xf511,	// (0x000385ba) popup_call3_audio_in_window_g

0x45b1,	// (0x0002d65a) popup_call3_audio_in_window_t1_ParamLimits

0x45b1,	// (0x0002d65a) popup_call3_audio_in_window_t1

0x45ef,	// (0x0002d698) popup_call3_audio_in_window_t2_ParamLimits

0x45ef,	// (0x0002d698) popup_call3_audio_in_window_t2

0x462d,	// (0x0002d6d6) popup_call3_audio_in_window_t3_ParamLimits

0x462d,	// (0x0002d6d6) popup_call3_audio_in_window_t3

0x0002,

0xf51a,	// (0x000385c3) popup_call3_audio_in_window_t_ParamLimits

0xf51a,	// (0x000385c3) popup_call3_audio_in_window_t

0xd318,	// (0x000363c1) bg_popup_call3_rect_pane

0xd228,	// (0x000362d1) bg_popup_call3_rect_pane_g1

0xd220,	// (0x000362c9) bg_popup_call3_rect_pane_g2

0xd218,	// (0x000362c1) bg_popup_call3_rect_pane_g3

0xd238,	// (0x000362e1) bg_popup_call3_rect_pane_g4

0xd230,	// (0x000362d9) bg_popup_call3_rect_pane_g5

0xd240,	// (0x000362e9) bg_popup_call3_rect_pane_g6

0xd248,	// (0x000362f1) bg_popup_call3_rect_pane_g7

0xc963,	// (0x00035a0c) mup_visualizer_osc_pane

0xc963,	// (0x00035a0c) mup_visualizer_spec_pane

0x44fa,	// (0x0002d5a3) call3_video_qcif_pane_ParamLimits

0x44fa,	// (0x0002d5a3) call3_video_qcif_pane

0x450d,	// (0x0002d5b6) call3_video_qcif_uncrop_pane_ParamLimits

0x450d,	// (0x0002d5b6) call3_video_qcif_uncrop_pane

0x451b,	// (0x0002d5c4) call3_video_subqcif_pane_ParamLimits

0x451b,	// (0x0002d5c4) call3_video_subqcif_pane

0x452f,	// (0x0002d5d8) call3_video_subqcif_uncrop_pane_ParamLimits

0x452f,	// (0x0002d5d8) call3_video_subqcif_uncrop_pane

0x45a0,	// (0x0002d649) popup_call3_audio_in_window_g4_ParamLimits

0x45a0,	// (0x0002d649) popup_call3_audio_in_window_g4

0xc963,	// (0x00035a0c) mup_spec_half_pane

0xc963,	// (0x00035a0c) mup_spec_half_pane_cp

0xc963,	// (0x00035a0c) mup_osc_middle_pane

0xd0a2,	// (0x0003614b) mup_visualizer_osc_pane_g1

0xefd0,	// (0x00038079) mup_spec_bar_pane_ParamLimits

0xefd0,	// (0x00038079) mup_spec_bar_pane

0xd0a2,	// (0x0003614b) mup_spec_bar_pane_g1

0xd0a2,	// (0x0003614b) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00038135) mup_spec_bar_pane_g

0x1f2d,	// (0x0002afd6) aid_cale_week_size_cell_pane_ParamLimits

0x1f47,	// (0x0002aff0) bg_cale_heading_pane_ParamLimits

0xd27a,	// (0x00036323) bg_cale_pane_cp01_ParamLimits

0x1f5f,	// (0x0002b008) cale_week_corner_pane_ParamLimits

0x1f7e,	// (0x0002b027) cale_week_day_heading_pane_ParamLimits

0x1f9b,	// (0x0002b044) cale_week_scroll_pane_g1_ParamLimits

0x1fae,	// (0x0002b057) cale_week_scroll_pane_g2_ParamLimits

0x1fc6,	// (0x0002b06f) cale_week_scroll_pane_g3_ParamLimits

0x1fde,	// (0x0002b087) cale_week_scroll_pane_g4_ParamLimits

0x1ff6,	// (0x0002b09f) cale_week_scroll_pane_g5_ParamLimits

0x2016,	// (0x0002b0bf) cale_week_scroll_pane_g6_ParamLimits

0x2036,	// (0x0002b0df) cale_week_scroll_pane_g7_ParamLimits

0x2056,	// (0x0002b0ff) cale_week_scroll_pane_g8_ParamLimits

0x207a,	// (0x0002b123) cale_week_scroll_pane_g9_ParamLimits

0x2092,	// (0x0002b13b) cale_week_scroll_pane_g10_ParamLimits

0x20aa,	// (0x0002b153) cale_week_scroll_pane_g11_ParamLimits

0x20c2,	// (0x0002b16b) cale_week_scroll_pane_g12_ParamLimits

0x20da,	// (0x0002b183) cale_week_scroll_pane_g13_ParamLimits

0x20da,	// (0x0002b183) cale_week_scroll_pane_g14_ParamLimits

0x20da,	// (0x0002b183) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x000381ac) cale_week_scroll_pane_g_ParamLimits

0x2116,	// (0x0002b1bf) cale_week_time_pane_ParamLimits

0x213a,	// (0x0002b1e3) grid_cale_week_pane_ParamLimits

0xd297,	// (0x00036340) listscroll_cale_week_pane_t1

0xd2a9,	// (0x00036352) scroll_pane_cp08_ParamLimits

0x2acd,	// (0x0002bb76) cale_month_corner_pane_ParamLimits

0xd613,	// (0x000366bc) cale_month_pane_t1

0x2eeb,	// (0x0002bf94) cale_month_week_pane_ParamLimits

0x35f2,	// (0x0002c69b) popup_call_status_window_g1_ParamLimits

0x3606,	// (0x0002c6af) popup_call_status_window_g2_ParamLimits

0x361a,	// (0x0002c6c3) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x00038326) popup_call_status_window_g_ParamLimits

0xd995,	// (0x00036a3e) aid_call2_pane

0x3b17,	// (0x0002cbc0) msg_header_pane_g1

0x3cc3,	// (0x0002cd6c) postcard_address2_pane_ParamLimits

0x3cc3,	// (0x0002cd6c) postcard_address2_pane

0x3cd5,	// (0x0002cd7e) postcard_message2_pane_ParamLimits

0x3cd5,	// (0x0002cd7e) postcard_message2_pane

0x449b,	// (0x0002d544) message2_row_pane_ParamLimits

0x449b,	// (0x0002d544) message2_row_pane

0x44b7,	// (0x0002d560) address2_row_pane_ParamLimits

0x44b7,	// (0x0002d560) address2_row_pane

0xef9d,	// (0x00038046) postcard_message2_row_pane_g1

0xefa5,	// (0x0003804e) postcard_message2_row_pane_t1

0xef9d,	// (0x00038046) address2_row_pane_g1

0xefa5,	// (0x0003804e) address2_row_pane_t1

0x239a,	// (0x0002b443) aid_size_cell_vorec

0xcd80,	// (0x00035e29) main_rss_pane

0xefb3,	// (0x0003805c) rss_list_single_pane_ParamLimits

0xefb3,	// (0x0003805c) rss_list_single_pane

0xefc1,	// (0x0003806a) rss_list_single_pane_t1

0xefc1,	// (0x0003806a) rss_list_single_pane_t2

0x0001,

0xf505,	// (0x000385ae) rss_list_single_pane_t

0xcd80,	// (0x00035e29) main_camera2_pane

0xcd80,	// (0x00035e29) main_video2_pane

0xb160,	// (0x00034209) cams_zoom_pane_cp2_ParamLimits

0xb160,	// (0x00034209) cams_zoom_pane_cp2

0xb160,	// (0x00034209) image2_vga_pane_ParamLimits

0xb160,	// (0x00034209) image2_vga_pane

0xb16e,	// (0x00034217) main_camera2_pane_g1_ParamLimits

0xb16e,	// (0x00034217) main_camera2_pane_g1

0xb16e,	// (0x00034217) main_camera2_pane_g2_ParamLimits

0xb16e,	// (0x00034217) main_camera2_pane_g2

0xb16e,	// (0x00034217) main_camera2_pane_g3_ParamLimits

0xb16e,	// (0x00034217) main_camera2_pane_g3

0xb16e,	// (0x00034217) main_camera2_pane_g4_ParamLimits

0xb16e,	// (0x00034217) main_camera2_pane_g4

0xb16e,	// (0x00034217) main_camera2_pane_g5_ParamLimits

0xb16e,	// (0x00034217) main_camera2_pane_g5

0xb16e,	// (0x00034217) main_camera2_pane_g6_ParamLimits

0xb16e,	// (0x00034217) main_camera2_pane_g6

0xb16e,	// (0x00034217) main_camera2_pane_g7_ParamLimits

0xb16e,	// (0x00034217) main_camera2_pane_g7

0xb16e,	// (0x00034217) main_camera2_pane_g8_ParamLimits

0xb16e,	// (0x00034217) main_camera2_pane_g8

0x0008,

0xf521,	// (0x000385ca) main_camera2_pane_g_ParamLimits

0xf521,	// (0x000385ca) main_camera2_pane_g

0x1022,	// (0x0002a0cb) main_camera2_pane_t1_ParamLimits

0x1022,	// (0x0002a0cb) main_camera2_pane_t1

0x1022,	// (0x0002a0cb) main_camera2_pane_t2_ParamLimits

0x1022,	// (0x0002a0cb) main_camera2_pane_t2

0x1022,	// (0x0002a0cb) main_camera2_pane_t3_ParamLimits

0x1022,	// (0x0002a0cb) main_camera2_pane_t3

0x1022,	// (0x0002a0cb) main_camera2_pane_t4_ParamLimits

0x1022,	// (0x0002a0cb) main_camera2_pane_t4

0x0006,

0xf534,	// (0x000385dd) main_camera2_pane_t_ParamLimits

0xf534,	// (0x000385dd) main_camera2_pane_t

0xb1b2,	// (0x0003425b) cams_zoom_pane_cp4_ParamLimits

0xb1b2,	// (0x0003425b) cams_zoom_pane_cp4

0x1036,	// (0x0002a0df) image2_cif_pane_ParamLimits

0x1036,	// (0x0002a0df) image2_cif_pane

0xaf90,	// (0x00034039) image2_subqcif_pane_ParamLimits

0xaf90,	// (0x00034039) image2_subqcif_pane

0x1044,	// (0x0002a0ed) main_video2_pane_g1_ParamLimits

0x1044,	// (0x0002a0ed) main_video2_pane_g1

0x1044,	// (0x0002a0ed) main_video2_pane_g2_ParamLimits

0x1044,	// (0x0002a0ed) main_video2_pane_g2

0x1044,	// (0x0002a0ed) main_video2_pane_g3_ParamLimits

0x1044,	// (0x0002a0ed) main_video2_pane_g3

0x1044,	// (0x0002a0ed) main_video2_pane_g4_ParamLimits

0x1044,	// (0x0002a0ed) main_video2_pane_g4

0x1044,	// (0x0002a0ed) main_video2_pane_g5_ParamLimits

0x1044,	// (0x0002a0ed) main_video2_pane_g5

0x1044,	// (0x0002a0ed) main_video2_pane_g6_ParamLimits

0x1044,	// (0x0002a0ed) main_video2_pane_g6

0x0005,

0xf543,	// (0x000385ec) main_video2_pane_g_ParamLimits

0xf543,	// (0x000385ec) main_video2_pane_g

0x1052,	// (0x0002a0fb) main_video2_pane_t1_ParamLimits

0x1052,	// (0x0002a0fb) main_video2_pane_t1

0x1052,	// (0x0002a0fb) main_video2_pane_t2_ParamLimits

0x1052,	// (0x0002a0fb) main_video2_pane_t2

0x1052,	// (0x0002a0fb) main_video2_pane_t3_ParamLimits

0x1052,	// (0x0002a0fb) main_video2_pane_t3

0x0002,

0xf550,	// (0x000385f9) main_video2_pane_t_ParamLimits

0xf550,	// (0x000385f9) main_video2_pane_t

0x4291,	// (0x0002d33a) call_muted_g2

0x0001,

0xf4f7,	// (0x000385a0) call_muted_g

0xcd80,	// (0x00035e29) main_mup2_pane

0xddc3,	// (0x00036e6c) main_mup2_pane_g1_ParamLimits

0xddc3,	// (0x00036e6c) main_mup2_pane_g1

0xddc3,	// (0x00036e6c) main_mup2_pane_g2_ParamLimits

0xddc3,	// (0x00036e6c) main_mup2_pane_g2

0x47f2,	// (0x0002d89b) main_mup_pane_g13_cp1

0xaf9e,	// (0x00034047) mup_volume_pane_cp1

0xddc3,	// (0x00036e6c) main_mup2_pane_g4_ParamLimits

0xddc3,	// (0x00036e6c) main_mup2_pane_g4

0xddc3,	// (0x00036e6c) main_mup2_pane_g5_ParamLimits

0xddc3,	// (0x00036e6c) main_mup2_pane_g5

0xddc3,	// (0x00036e6c) main_mup2_pane_g6_ParamLimits

0xddc3,	// (0x00036e6c) main_mup2_pane_g6

0xddc3,	// (0x00036e6c) main_mup2_pane_g7_ParamLimits

0xddc3,	// (0x00036e6c) main_mup2_pane_g7

0x0006,

0xf557,	// (0x00038600) main_mup2_pane_g_ParamLimits

0xf557,	// (0x00038600) main_mup2_pane_g

0xddd1,	// (0x00036e7a) main_mup2_pane_t1_ParamLimits

0xddd1,	// (0x00036e7a) main_mup2_pane_t1

0xddd1,	// (0x00036e7a) main_mup2_pane_t2_ParamLimits

0xddd1,	// (0x00036e7a) main_mup2_pane_t2

0xddd1,	// (0x00036e7a) main_mup2_pane_t3_ParamLimits

0xddd1,	// (0x00036e7a) main_mup2_pane_t3

0xddd1,	// (0x00036e7a) main_mup2_pane_t4_ParamLimits

0xddd1,	// (0x00036e7a) main_mup2_pane_t4

0xddd1,	// (0x00036e7a) main_mup2_pane_t5_ParamLimits

0xddd1,	// (0x00036e7a) main_mup2_pane_t5

0xddd1,	// (0x00036e7a) main_mup2_pane_t6_ParamLimits

0xddd1,	// (0x00036e7a) main_mup2_pane_t6

0x0005,

0xf566,	// (0x0003860f) main_mup2_pane_t_ParamLimits

0xf566,	// (0x0003860f) main_mup2_pane_t

0xdde5,	// (0x00036e8e) mup2_visualizer_pane_ParamLimits

0xdde5,	// (0x00036e8e) mup2_visualizer_pane

0xdde5,	// (0x00036e8e) mup_progress_pane_cp_ParamLimits

0xdde5,	// (0x00036e8e) mup_progress_pane_cp

0xb1d6,	// (0x0003427f) mup_volume_pane_cp_ParamLimits

0xb1d6,	// (0x0003427f) mup_volume_pane_cp

0xd064,	// (0x0003610d) mup2_visualizer_pane_g1_ParamLimits

0xd064,	// (0x0003610d) mup2_visualizer_pane_g1

0xd072,	// (0x0003611b) mup2_visualizer_pane_g2_ParamLimits

0xd072,	// (0x0003611b) mup2_visualizer_pane_g2

0xd072,	// (0x0003611b) mup2_visualizer_pane_g3_ParamLimits

0xd072,	// (0x0003611b) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00038125) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00038125) mup2_visualizer_pane_g

0xc963,	// (0x00035a0c) aid_size_cell_fmradio

0x0d6a,	// (0x00029e13) aid_height_parent_landcape

0xd468,	// (0x00036511) wml_content_pane_cp

0xd470,	// (0x00036519) wml_tabs_pane

0xd479,	// (0x00036522) popup_wml_miniature_window

0xd481,	// (0x0003652a) scroll_pane_cp021

0xd495,	// (0x0003653e) wml_content_pane_comp8

0xcd80,	// (0x00035e29) bg_popup_sub_pane_cp05

0x469d,	// (0x0002d746) popup_wml_miniature_window_g1

0x46a5,	// (0x0002d74e) wml_miniature_view_pane

0x46ad,	// (0x0002d756) aid_size_wml_view

0x46b5,	// (0x0002d75e) wml_miniature_view_pane_g1

0x46be,	// (0x0002d767) wml_miniature_view_pane_g2

0x46c7,	// (0x0002d770) wml_miniature_view_pane_g3

0x46cf,	// (0x0002d778) wml_miniature_view_pane_g4

0x46d7,	// (0x0002d780) wml_miniature_view_pane_g5

0x46df,	// (0x0002d788) wml_miniature_view_pane_g6

0x46e7,	// (0x0002d790) wml_miniature_view_pane_g7

0x46ef,	// (0x0002d798) wml_miniature_view_pane_g8

0x0007,

0xf573,	// (0x0003861c) wml_miniature_view_pane_g

0x46f7,	// (0x0002d7a0) background_graphic_ParamLimits

0x46f7,	// (0x0002d7a0) background_graphic

0x4703,	// (0x0002d7ac) wml_tabs_2_pane

0x470c,	// (0x0002d7b5) wml_tabs_3_pane_ParamLimits

0x470c,	// (0x0002d7b5) wml_tabs_3_pane

0x471e,	// (0x0002d7c7) wml_tabs_4_pane_ParamLimits

0x471e,	// (0x0002d7c7) wml_tabs_4_pane

0x4734,	// (0x0002d7dd) wml_tabs_5_pane_ParamLimits

0x4734,	// (0x0002d7dd) wml_tabs_5_pane

0x474e,	// (0x0002d7f7) wml_tabs_pane_g2_ParamLimits

0x474e,	// (0x0002d7f7) wml_tabs_pane_g2

0x4763,	// (0x0002d80c) wml_tabs_pane_g3_ParamLimits

0x4763,	// (0x0002d80c) wml_tabs_pane_g3

0x4778,	// (0x0002d821) wml_tabs_2_active_pane_ParamLimits

0x4778,	// (0x0002d821) wml_tabs_2_active_pane

0x4778,	// (0x0002d821) wml_tabs_2_passive_pane_ParamLimits

0x4778,	// (0x0002d821) wml_tabs_2_passive_pane

0x4786,	// (0x0002d82f) wml_tabs_3_active_pane_cp_ParamLimits

0x4786,	// (0x0002d82f) wml_tabs_3_active_pane_cp

0x479b,	// (0x0002d844) wml_tabs_3_passive_pane_ParamLimits

0x479b,	// (0x0002d844) wml_tabs_3_passive_pane

0x47ae,	// (0x0002d857) wml_tabs_3_passive_pane_cp_ParamLimits

0x47ae,	// (0x0002d857) wml_tabs_3_passive_pane_cp

0x47c5,	// (0x0002d86e) tabs_4_active_pane

0x47cd,	// (0x0002d876) tabs_4_passive_pane

0x47d7,	// (0x0002d880) tabs_4_passive_pane_cp

0x47df,	// (0x0002d888) tabs_4_passive_pane_cp2

0x4207,	// (0x0002d2b0) aid_height_text

0xdde5,	// (0x00036e8e) mup_volume_cont_pane_ParamLimits

0xdde5,	// (0x00036e8e) mup_volume_cont_pane

0xc963,	// (0x00035a0c) aid_size_cell_pinb

0xc963,	// (0x00035a0c) aid_size_list_pinb

0xdde5,	// (0x00036e8e) mup2_volume_cont_pane_ParamLimits

0xdde5,	// (0x00036e8e) mup2_volume_cont_pane

0xb1c0,	// (0x00034269) mup2_volume_cont_pane_g1_ParamLimits

0xb1c0,	// (0x00034269) mup2_volume_cont_pane_g1

0x08a8,	// (0x00029951) aid_size_cell_touch_ParamLimits

0x08a8,	// (0x00029951) aid_size_cell_touch

0x0a8f,	// (0x00029b38) touch_pane_ParamLimits

0x0a8f,	// (0x00029b38) touch_pane

0xaf9e,	// (0x00034047) main_rss2_pane

0x47fc,	// (0x0002d8a5) listscroll_rss2_pane

0x4805,	// (0x0002d8ae) rss2_navigation_pane

0x480d,	// (0x0002d8b6) list_rss2_pane

0xdacb,	// (0x00036b74) scroll_pane_cp22

0x4815,	// (0x0002d8be) rss2_navigation_pane_g1

0x481e,	// (0x0002d8c7) rss2_navigation_pane_g2

0x4826,	// (0x0002d8cf) rss2_navigation_pane_g3

0x0002,

0xf584,	// (0x0003862d) rss2_navigation_pane_g

0x482e,	// (0x0002d8d7) rss2_navigation_pane_t1

0x483c,	// (0x0002d8e5) rss2_list_single_pane_ParamLimits

0x483c,	// (0x0002d8e5) rss2_list_single_pane

0x4851,	// (0x0002d8fa) rss2_list_single_pane_t2

0x485f,	// (0x0002d908) rss2_list_single_pane_t3_ParamLimits

0x485f,	// (0x0002d908) rss2_list_single_pane_t3

0x487c,	// (0x0002d925) rss2_list_single_pane_t4

0x34c1,	// (0x0002c56a) smil_status_pane_g1

0xaf90,	// (0x00034039) main_image2_pane_ParamLimits

0xaf90,	// (0x00034039) main_image2_pane

0xb16e,	// (0x00034217) main_camera2_pane_g9_ParamLimits

0xb16e,	// (0x00034217) main_camera2_pane_g9

0x1022,	// (0x0002a0cb) main_camera2_pane_t5_ParamLimits

0x1022,	// (0x0002a0cb) main_camera2_pane_t5

0xb17c,	// (0x00034225) main_camera2_pane_t6_ParamLimits

0xb17c,	// (0x00034225) main_camera2_pane_t6

0x488a,	// (0x0002d933) main_image2_pane_g1_ParamLimits

0x488a,	// (0x0002d933) main_image2_pane_g1

0x3edb,	// (0x0002cf84) smil2_video_pane_ParamLimits

0x3edb,	// (0x0002cf84) smil2_video_pane

0xaf3f,	// (0x00033fe8) aid_zoom_text_primary_cp

0xaf86,	// (0x0003402f) popup_preview_fixed_window

0xd3d1,	// (0x0003647a) im_reading_pane_g1

0x1014,	// (0x0002a0bd) cams2_bc_adjust_pane_cp_ParamLimits

0x1014,	// (0x0002a0bd) cams2_bc_adjust_pane_cp

0xb1a4,	// (0x0003424d) cams2_bc_adjust_pane_ParamLimits

0xb1a4,	// (0x0003424d) cams2_bc_adjust_pane

0x47f2,	// (0x0002d89b) cams2_bc_adjust_pane_g1

0xaf9e,	// (0x00034047) cams2_slider_pane

0x47f2,	// (0x0002d89b) cams2_slider_pane_g1

0x47f2,	// (0x0002d89b) cams2_slider_pane_g2

0x0006,

0xf58b,	// (0x00038634) cams2_slider_pane_g

0x0aff,	// (0x00029ba8) calc_display_pane_ParamLimits

0x0b24,	// (0x00029bcd) calc_paper_pane_ParamLimits

0x0b47,	// (0x00029bf0) grid_calc_pane_ParamLimits

0xb085,	// (0x0003412e) popup_clock_digital_window_t1_ParamLimits

0xdf9b,	// (0x00037044) main_image_pane_t1

0x0ae1,	// (0x00029b8a) aid_size_cell_calc_ParamLimits

0x0ae1,	// (0x00029b8a) aid_size_cell_calc

0x0db0,	// (0x00029e59) popup_blid_sat_info2_window_ParamLimits

0x0db0,	// (0x00029e59) popup_blid_sat_info2_window

0x48a0,	// (0x0002d949) aid_size_cell_blid

0x48a8,	// (0x0002d951) bg_popup_window_pane_cp07

0x48cb,	// (0x0002d974) grid_popup_blid_pane

0x48d5,	// (0x0002d97e) heading_pane_cp05_ParamLimits

0x48d5,	// (0x0002d97e) heading_pane_cp05

0x499f,	// (0x0002da48) cell_popup_blid_pane_ParamLimits

0x499f,	// (0x0002da48) cell_popup_blid_pane

0x49c3,	// (0x0002da6c) cell_popup_blid_pane_g1

0x49cb,	// (0x0002da74) cell_popup_blid_pane_t1

0xdde5,	// (0x00036e8e) mup2_indicator_pane_ParamLimits

0xdde5,	// (0x00036e8e) mup2_indicator_pane

0xc963,	// (0x00035a0c) mup2_visualizer_osc_pane

0x4687,	// (0x0002d730) mup2_visualizer_spec_pane_ParamLimits

0x4687,	// (0x0002d730) mup2_visualizer_spec_pane

0xc963,	// (0x00035a0c) mup2_spec_half_pane

0xc963,	// (0x00035a0c) mup2_spec_half_pane_cp

0x49d9,	// (0x0002da82) mup2_spec_bar_pane_ParamLimits

0x49d9,	// (0x0002da82) mup2_spec_bar_pane

0xd0a2,	// (0x0003614b) mup2_spec_bar_pane_g1

0x49f8,	// (0x0002daa1) mup2_spec_bar_pane_g2

0x0001,

0xf5b1,	// (0x0003865a) mup2_spec_bar_pane_g

0xc963,	// (0x00035a0c) mup2_osc_middle_pane

0xd0a2,	// (0x0003614b) mup2_visualizer_osc_pane_g1

0xc98d,	// (0x00035a36) popup_number_entry_window_t1_ParamLimits

0xc9a0,	// (0x00035a49) popup_number_entry_window_t2_ParamLimits

0xc9b2,	// (0x00035a5b) popup_number_entry_window_t3_ParamLimits

0x1dbe,	// (0x0002ae67) popup_number_entry_window_t5_ParamLimits

0x1dbe,	// (0x0002ae67) popup_number_entry_window_t5

0xf01d,	// (0x000380c6) popup_number_entry_window_t_ParamLimits

0xc9c4,	// (0x00035a6d) text_title_cp2_ParamLimits

0xb0c4,	// (0x0003416d) aid_hotspot_pointer_text2_pane

0xb0de,	// (0x00034187) main_viewer_pane_g9_ParamLimits

0xb0de,	// (0x00034187) main_viewer_pane_g9

0xd613,	// (0x000366bc) cale_month_pane_t1_ParamLimits

0xd650,	// (0x000366f9) bg_cale_pane_ParamLimits

0xd668,	// (0x00036711) list_cale_pane_ParamLimits

0xd679,	// (0x00036722) listscroll_cale_day_pane_t1

0xd68b,	// (0x00036734) scroll_pane_cp09_ParamLimits

0x389c,	// (0x0002c945) main_mup_eq_pane_t1_ParamLimits

0x389c,	// (0x0002c945) main_mup_eq_pane_t1

0x38b6,	// (0x0002c95f) main_mup_eq_pane_t2_ParamLimits

0x38b6,	// (0x0002c95f) main_mup_eq_pane_t2

0x38d0,	// (0x0002c979) main_mup_eq_pane_t3_ParamLimits

0x38d0,	// (0x0002c979) main_mup_eq_pane_t3

0x38ec,	// (0x0002c995) main_mup_eq_pane_t4_ParamLimits

0x38ec,	// (0x0002c995) main_mup_eq_pane_t4

0x3908,	// (0x0002c9b1) main_mup_eq_pane_t5_ParamLimits

0x3908,	// (0x0002c9b1) main_mup_eq_pane_t5

0x3924,	// (0x0002c9cd) main_mup_eq_pane_t6_ParamLimits

0x3924,	// (0x0002c9cd) main_mup_eq_pane_t6

0x3938,	// (0x0002c9e1) main_mup_eq_pane_t7_ParamLimits

0x3938,	// (0x0002c9e1) main_mup_eq_pane_t7

0x394c,	// (0x0002c9f5) main_mup_eq_pane_t8_ParamLimits

0x394c,	// (0x0002c9f5) main_mup_eq_pane_t8

0x3960,	// (0x0002ca09) main_mup_eq_pane_t9_ParamLimits

0x3960,	// (0x0002ca09) main_mup_eq_pane_t9

0x397a,	// (0x0002ca23) main_mup_eq_pane_t10_ParamLimits

0x397a,	// (0x0002ca23) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x00038420) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x00038420) main_mup_eq_pane_t

0x3a29,	// (0x0002cad2) mup_equalizer_pane_cp5_ParamLimits

0x3a3d,	// (0x0002cae6) mup_equalizer_pane_cp6_ParamLimits

0x3a51,	// (0x0002cafa) mup_equalizer_pane_cp7_ParamLimits

0xaf9e,	// (0x00034047) main_gallery_pane

0xefef,	// (0x00038098) smil2_volume_pane

0xeff7,	// (0x000380a0) smil_status_volume_pane_g1_ParamLimits

0xf00a,	// (0x000380b3) smil_status_volume_pane_g2_ParamLimits

0xb13e,	// (0x000341e7) smil_status_volume_pane_g3_ParamLimits

0xf50a,	// (0x000385b3) smil_status_volume_pane_g_ParamLimits

0x48a8,	// (0x0002d951) bg_popup_window_pane_cp07_ParamLimits

0x48b6,	// (0x0002d95f) blid_firmament_pane

0xcf51,	// (0x00035ffa) aid_size_cell_gallery_ParamLimits

0xcf51,	// (0x00035ffa) aid_size_cell_gallery

0xcf51,	// (0x00035ffa) grid_gallery_pane_ParamLimits

0xcf51,	// (0x00035ffa) grid_gallery_pane

0x48a8,	// (0x0002d951) cell_gallery_pane_ParamLimits

0x48a8,	// (0x0002d951) cell_gallery_pane

0xcf51,	// (0x00035ffa) bg_cell_gallery_focus_pane_ParamLimits

0xcf51,	// (0x00035ffa) bg_cell_gallery_focus_pane

0xd064,	// (0x0003610d) cell_gallery_pane_g1_ParamLimits

0xd064,	// (0x0003610d) cell_gallery_pane_g1

0xd064,	// (0x0003610d) cell_gallery_pane_g2_ParamLimits

0xd064,	// (0x0003610d) cell_gallery_pane_g2

0xd064,	// (0x0003610d) cell_gallery_pane_g3_ParamLimits

0xd064,	// (0x0003610d) cell_gallery_pane_g3

0xd072,	// (0x0003611b) cell_gallery_pane_g4_ParamLimits

0xd072,	// (0x0003611b) cell_gallery_pane_g4

0x0003,

0xf5b6,	// (0x0003865f) cell_gallery_pane_g_ParamLimits

0xf5b6,	// (0x0003865f) cell_gallery_pane_g

0x4a02,	// (0x0002daab) bg_cell_gallery_focus_pane_g1

0x4a0a,	// (0x0002dab3) bg_cell_gallery_focus_pane_g2

0x4a12,	// (0x0002dabb) bg_cell_gallery_focus_pane_g3

0x4a1a,	// (0x0002dac3) bg_cell_gallery_focus_pane_g4

0x4a22,	// (0x0002dacb) bg_cell_gallery_focus_pane_g5

0x4a2a,	// (0x0002dad3) bg_cell_gallery_focus_pane_g6

0x4a32,	// (0x0002dadb) bg_cell_gallery_focus_pane_g7

0x4a3a,	// (0x0002dae3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5bf,	// (0x00038668) bg_cell_gallery_focus_pane_g

0x4a42,	// (0x0002daeb) aid_firma_cardinal

0x4a56,	// (0x0002daff) blid_firmament_pane_t1

0x4a6d,	// (0x0002db16) blid_firmament_pane_t2

0x4a84,	// (0x0002db2d) blid_firmament_pane_t3

0x4a9b,	// (0x0002db44) blid_firmament_pane_t4

0x0003,

0xf5d0,	// (0x00038679) blid_firmament_pane_t

0x4ab2,	// (0x0002db5b) blid_sat_info_pane

0xd0a2,	// (0x0003614b) blid_sat_info_pane_g1

0xd0a2,	// (0x0003614b) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00038135) blid_sat_info_pane_g

0x4ac2,	// (0x0002db6b) blid_sat_info_pane_t1

0x4ad0,	// (0x0002db79) smil2_volume_content_pane

0x4ad9,	// (0x0002db82) smil2_volume_pane_g1

0xd177,	// (0x00036220) smil2_volume_content_pane_g1

0x4ae1,	// (0x0002db8a) smil2_volume_content_pane_g2

0x4aea,	// (0x0002db93) smil2_volume_content_pane_g3

0x4af3,	// (0x0002db9c) smil2_volume_content_pane_g4

0x4afc,	// (0x0002dba5) smil2_volume_content_pane_g5

0x4b05,	// (0x0002dbae) smil2_volume_content_pane_g6

0x4b0e,	// (0x0002dbb7) smil2_volume_content_pane_g7

0x4b17,	// (0x0002dbc0) smil2_volume_content_pane_g8

0x4b20,	// (0x0002dbc9) smil2_volume_content_pane_g9

0x4b29,	// (0x0002dbd2) smil2_volume_content_pane_g10

0x0009,

0xf5d9,	// (0x00038682) smil2_volume_content_pane_g

0x21ee,	// (0x0002b297) cale_week_day_heading_pane_t1_ParamLimits

0x2218,	// (0x0002b2c1) cale_week_day_heading_pane_t2_ParamLimits

0x2247,	// (0x0002b2f0) cale_week_day_heading_pane_t3_ParamLimits

0x2276,	// (0x0002b31f) cale_week_day_heading_pane_t4_ParamLimits

0x22a5,	// (0x0002b34e) cale_week_day_heading_pane_t5_ParamLimits

0x22dc,	// (0x0002b385) cale_week_day_heading_pane_t6_ParamLimits

0x2313,	// (0x0002b3bc) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x000381cd) cale_week_day_heading_pane_t_ParamLimits

0xd2c6,	// (0x0003636f) bg_cale_side_pane_ParamLimits

0x0c36,	// (0x00029cdf) cale_week_time_pane_t1_ParamLimits

0x0c50,	// (0x00029cf9) cale_week_time_pane_t2_ParamLimits

0x0c6a,	// (0x00029d13) cale_week_time_pane_t3_ParamLimits

0x0c84,	// (0x00029d2d) cale_week_time_pane_t4_ParamLimits

0x0c9e,	// (0x00029d47) cale_week_time_pane_t5_ParamLimits

0x0cb8,	// (0x00029d61) cale_week_time_pane_t6_ParamLimits

0x0cd2,	// (0x00029d7b) cale_week_time_pane_t7_ParamLimits

0x0cec,	// (0x00029d95) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x000381dc) cale_week_time_pane_t_ParamLimits

0x233d,	// (0x0002b3e6) cell_cale_week_pane_g2_ParamLimits

0xd2c6,	// (0x0003636f) bg_cale_side_pane_cp01_ParamLimits

0x32f4,	// (0x0002c39d) cale_month_week_pane_t1_ParamLimits

0x330d,	// (0x0002c3b6) cale_month_week_pane_t2_ParamLimits

0x3326,	// (0x0002c3cf) cale_month_week_pane_t3_ParamLimits

0x333f,	// (0x0002c3e8) cale_month_week_pane_t4_ParamLimits

0x3358,	// (0x0002c401) cale_month_week_pane_t5_ParamLimits

0x3371,	// (0x0002c41a) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x000382aa) cale_month_week_pane_t_ParamLimits

0xb001,	// (0x000340aa) cell_cale_month_pane_g1_ParamLimits

0xaf9e,	// (0x00034047) main_cale_event_viewer_pane

0xc963,	// (0x00035a0c) listscroll_cale_event_viewer_pane

0x4b32,	// (0x0002dbdb) list_cale_ev_pane

0x4b3a,	// (0x0002dbe3) scroll_pane_cp023

0x4b46,	// (0x0002dbef) field_cale_ev_pane_ParamLimits

0x4b46,	// (0x0002dbef) field_cale_ev_pane

0x4b64,	// (0x0002dc0d) field_cale_ev_content_pane_ParamLimits

0x4b64,	// (0x0002dc0d) field_cale_ev_content_pane

0x4b70,	// (0x0002dc19) field_cale_ev_pane_g1_ParamLimits

0x4b70,	// (0x0002dc19) field_cale_ev_pane_g1

0x4b7c,	// (0x0002dc25) field_cale_ev_pane_g2_ParamLimits

0x4b7c,	// (0x0002dc25) field_cale_ev_pane_g2

0x4b94,	// (0x0002dc3d) field_cale_ev_pane_g3_ParamLimits

0x4b94,	// (0x0002dc3d) field_cale_ev_pane_g3

0x0002,

0xf5ee,	// (0x00038697) field_cale_ev_pane_g_ParamLimits

0xf5ee,	// (0x00038697) field_cale_ev_pane_g

0x4bac,	// (0x0002dc55) field_cale_ev_pane_t1_ParamLimits

0x4bac,	// (0x0002dc55) field_cale_ev_pane_t1

0xd1fa,	// (0x000362a3) field_cale_ev_content_pane_t1_ParamLimits

0xd1fa,	// (0x000362a3) field_cale_ev_content_pane_t1

0xde88,	// (0x00036f31) bg_button_pane_cp01

0x0c24,	// (0x00029ccd) listscroll_cale_week_pane_ParamLimits

0xafee,	// (0x00034097) popup_toolbar_window_cp01

0xd297,	// (0x00036340) listscroll_cale_week_pane_t1_ParamLimits

0x3512,	// (0x0002c5bb) listscroll_cale_day_pane_ParamLimits

0xd511,	// (0x000365ba) popup_toolbar_window_cp02

0xd679,	// (0x00036722) listscroll_cale_day_pane_t1_ParamLimits

0x0c24,	// (0x00029ccd) main_cale_month_pane_ParamLimits

0xb129,	// (0x000341d2) popup_toolbar_window_cp03_ParamLimits

0xb129,	// (0x000341d2) popup_toolbar_window_cp03

0x3da3,	// (0x0002ce4c) main_image_pane_g2_ParamLimits

0x3da3,	// (0x0002ce4c) main_image_pane_g2

0x3db4,	// (0x0002ce5d) main_image_pane_g3_ParamLimits

0x3db4,	// (0x0002ce5d) main_image_pane_g3

0x0002,

0xf409,	// (0x000384b2) main_image_pane_g_ParamLimits

0xf409,	// (0x000384b2) main_image_pane_g

0xdf9b,	// (0x00037044) main_image_pane_t1_ParamLimits

0x3dc5,	// (0x0002ce6e) main_image_pane_t2_ParamLimits

0x3dc5,	// (0x0002ce6e) main_image_pane_t2

0x3dd7,	// (0x0002ce80) main_image_pane_t3_ParamLimits

0x3dd7,	// (0x0002ce80) main_image_pane_t3

0x3dff,	// (0x0002cea8) main_image_pane_t4_ParamLimits

0x3dff,	// (0x0002cea8) main_image_pane_t4

0x0003,

0xf410,	// (0x000384b9) main_image_pane_t_ParamLimits

0xf410,	// (0x000384b9) main_image_pane_t

0x3e1f,	// (0x0002cec8) popup_image_details_window_cp01

0x3e29,	// (0x0002ced2) popup_toobar_trans_pane_cp01_ParamLimits

0x3e29,	// (0x0002ced2) popup_toobar_trans_pane_cp01

0x0e8f,	// (0x00029f38) popup_image_details_window_ParamLimits

0x0e8f,	// (0x00029f38) popup_image_details_window

0xb0fc,	// (0x000341a5) popup_image_focus_window

0xb160,	// (0x00034209) camera2_autofocus_pane_ParamLimits

0xb160,	// (0x00034209) camera2_autofocus_pane

0xc963,	// (0x00035a0c) bg_popup_sub_pane_cp06

0x4bc3,	// (0x0002dc6c) popup_image_focus_window_g1

0x4bcb,	// (0x0002dc74) popup_image_focus_window_g2

0x4bd3,	// (0x0002dc7c) popup_image_focus_window_g3

0x4bdb,	// (0x0002dc84) popup_image_focus_window_g4

0x0003,

0xf5f5,	// (0x0003869e) popup_image_focus_window_g

0x4be3,	// (0x0002dc8c) popup_image_focus_window_t1

0x4bf1,	// (0x0002dc9a) popup_image_focus_window_t2

0x4c01,	// (0x0002dcaa) popup_image_focus_window_t3

0x0002,

0xf5fe,	// (0x000386a7) popup_image_focus_window_t

0xd064,	// (0x0003610d) camera2_autofocus_pane_g1

0xcf51,	// (0x00035ffa) bg_tb_trans_pane_cp01

0x4c0f,	// (0x0002dcb8) popup_image_details_window_g1

0x4c22,	// (0x0002dccb) popup_image_details_window_g2

0x0002,

0xf605,	// (0x000386ae) popup_image_details_window_g

0x4c4b,	// (0x0002dcf4) popup_image_details_window_t1

0x4c5d,	// (0x0002dd06) popup_image_details_window_t2

0x4c76,	// (0x0002dd1f) popup_image_details_window_t3

0x4c8a,	// (0x0002dd33) popup_image_details_window_t4

0x4ca5,	// (0x0002dd4e) popup_image_details_window_t5

0x0004,

0xf60c,	// (0x000386b5) popup_image_details_window_t

0xd0ec,	// (0x00036195) bg_calc_paper_pane_ParamLimits

0xaf9e,	// (0x00034047) grid_highlight_pane_cp013

0xafb0,	// (0x00034059) list_calc_pane_ParamLimits

0xafc2,	// (0x0003406b) scroll_pane_cp024

0xd100,	// (0x000361a9) bg_calc_display_pane_ParamLimits

0x0b75,	// (0x00029c1e) calc_display_pane_t1_ParamLimits

0x0b8a,	// (0x00029c33) calc_display_pane_t2_ParamLimits

0xafca,	// (0x00034073) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x0003814d) calc_display_pane_t_ParamLimits

0x0bee,	// (0x00029c97) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x0003816a) cell_calc_pane_g

0x0bf7,	// (0x00029ca0) cell_calc_pane_t1

0xd155,	// (0x000361fe) grid_highlight_pane_cp02_ParamLimits

0xd16b,	// (0x00036214) toolbar_button_pane_cp01_ParamLimits

0xd16b,	// (0x00036214) toolbar_button_pane_cp01

0xdfe0,	// (0x00037089) temp_image_control_pane_ParamLimits

0xdfe0,	// (0x00037089) temp_image_control_pane

0xaf90,	// (0x00034039) main_mp3_pane

0x4cbf,	// (0x0002dd68) temp_image_control_pane_g1_ParamLimits

0x4cbf,	// (0x0002dd68) temp_image_control_pane_g1

0x4ccd,	// (0x0002dd76) temp_image_control_pane_g2_ParamLimits

0x4ccd,	// (0x0002dd76) temp_image_control_pane_g2

0x4cdf,	// (0x0002dd88) temp_image_control_pane_g3_ParamLimits

0x4cdf,	// (0x0002dd88) temp_image_control_pane_g3

0x4cef,	// (0x0002dd98) temp_image_control_pane_g4_ParamLimits

0x4cef,	// (0x0002dd98) temp_image_control_pane_g4

0x0003,

0xf617,	// (0x000386c0) temp_image_control_pane_g_ParamLimits

0xf617,	// (0x000386c0) temp_image_control_pane_g

0x4cbf,	// (0x0002dd68) main_mp3_pane_g1

0x4d02,	// (0x0002ddab) main_mp3_pane_g2

0x0007,

0xf620,	// (0x000386c9) main_mp3_pane_g

0x4d4f,	// (0x0002ddf8) main_mp3_pane_t1

0xd072,	// (0x0003611b) main_camera_pane_g8_ParamLimits

0xd072,	// (0x0003611b) main_camera_pane_g8

0x2507,	// (0x0002b5b0) main_video_pane_g7_ParamLimits

0x2507,	// (0x0002b5b0) main_video_pane_g7

0xb190,	// (0x00034239) main_camera2_pane_t7_ParamLimits

0xb190,	// (0x00034239) main_camera2_pane_t7

0xd428,	// (0x000364d1) scroll_pane_cp025_ParamLimits

0xd428,	// (0x000364d1) scroll_pane_cp025

0xd43c,	// (0x000364e5) scroll_pane_cp026_ParamLimits

0xd43c,	// (0x000364e5) scroll_pane_cp026

0xd44b,	// (0x000364f4) wml_content_pane_ParamLimits

0xaf9e,	// (0x00034047) main_touch_calib_pane

0x4e2d,	// (0x0002ded6) main_touch_calib_pane_g1

0x4e3f,	// (0x0002dee8) main_touch_calib_pane_g2

0x4e51,	// (0x0002defa) main_touch_calib_pane_g3

0x4e63,	// (0x0002df0c) main_touch_calib_pane_g4

0x0003,

0xf63e,	// (0x000386e7) main_touch_calib_pane_g

0x4e75,	// (0x0002df1e) main_touch_calib_pane_t1

0x4e8f,	// (0x0002df38) main_touch_calib_pane_t2

0x0004,

0xf647,	// (0x000386f0) main_touch_calib_pane_t

0xdba7,	// (0x00036c50) mup_progress_pane_cp02

0xdbdc,	// (0x00036c85) navi_pane_g1

0xdc97,	// (0x00036d40) navi_pane_mp_t3

0xaf90,	// (0x00034039) main_mp3_pane_ParamLimits

0x4443,	// (0x0002d4ec) navi_pane_ParamLimits

0x4cbf,	// (0x0002dd68) main_mp3_pane_g1_ParamLimits

0x4d02,	// (0x0002ddab) main_mp3_pane_g2_ParamLimits

0x4d10,	// (0x0002ddb9) main_mp3_pane_g3_ParamLimits

0x4d10,	// (0x0002ddb9) main_mp3_pane_g3

0x4d1e,	// (0x0002ddc7) main_mp3_pane_g4_ParamLimits

0x4d1e,	// (0x0002ddc7) main_mp3_pane_g4

0xd064,	// (0x0003610d) main_mp3_pane_g5_ParamLimits

0xd064,	// (0x0003610d) main_mp3_pane_g5

0x4d2a,	// (0x0002ddd3) main_mp3_pane_g6_ParamLimits

0x4d2a,	// (0x0002ddd3) main_mp3_pane_g6

0x4d37,	// (0x0002dde0) main_mp3_pane_g7_ParamLimits

0x4d37,	// (0x0002dde0) main_mp3_pane_g7

0x4d43,	// (0x0002ddec) main_mp3_pane_g8_ParamLimits

0x4d43,	// (0x0002ddec) main_mp3_pane_g8

0xf620,	// (0x000386c9) main_mp3_pane_g_ParamLimits

0x4d5d,	// (0x0002de06) main_mp3_pane_t2

0x4d6b,	// (0x0002de14) main_mp3_pane_t3

0x4d79,	// (0x0002de22) main_mp3_pane_t4

0x4d87,	// (0x0002de30) main_mp3_pane_t5

0x0005,

0xf631,	// (0x000386da) main_mp3_pane_t

0x4da3,	// (0x0002de4c) mup_progress_pane_cp01

0xaf3f,	// (0x00033fe8) aid_zoom_text_secondary2

0x4b32,	// (0x0002dbdb) list_cale_ev2_pane

0x4b3a,	// (0x0002dbe3) scroll_pane_cp023_ParamLimits

0x4ee5,	// (0x0002df8e) field_cale_ev2_pane_ParamLimits

0x4ee5,	// (0x0002df8e) field_cale_ev2_pane

0x4f05,	// (0x0002dfae) field_cale_ev2_pane_g1_ParamLimits

0x4f05,	// (0x0002dfae) field_cale_ev2_pane_g1

0x4f11,	// (0x0002dfba) field_cale_ev2_pane_g2_ParamLimits

0x4f11,	// (0x0002dfba) field_cale_ev2_pane_g2

0x4f29,	// (0x0002dfd2) field_cale_ev2_pane_g3_ParamLimits

0x4f29,	// (0x0002dfd2) field_cale_ev2_pane_g3

0x0003,

0xf652,	// (0x000386fb) field_cale_ev2_pane_g_ParamLimits

0xf652,	// (0x000386fb) field_cale_ev2_pane_g

0x4f4d,	// (0x0002dff6) field_cale_ev2_pane_t1_ParamLimits

0x4f4d,	// (0x0002dff6) field_cale_ev2_pane_t1

0x4f64,	// (0x0002e00d) field_cale_ev2_pane_t2_ParamLimits

0x4f64,	// (0x0002e00d) field_cale_ev2_pane_t2

0x0001,

0xf65b,	// (0x00038704) field_cale_ev2_pane_t_ParamLimits

0xf65b,	// (0x00038704) field_cale_ev2_pane_t

0x3c79,	// (0x0002cd22) main_postcard_pane_g5_ParamLimits

0x3c79,	// (0x0002cd22) main_postcard_pane_g5

0x3c8f,	// (0x0002cd38) main_postcard_pane_g6_ParamLimits

0x3c8f,	// (0x0002cd38) main_postcard_pane_g6

0xcf51,	// (0x00035ffa) camera2_autofocus_pane_cp_ParamLimits

0xcf51,	// (0x00035ffa) camera2_autofocus_pane_cp

0xaf90,	// (0x00034039) main_mup3_pane

0x4fbd,	// (0x0002e066) main_mup3_pane_g1_ParamLimits

0x4fbd,	// (0x0002e066) main_mup3_pane_g1

0x500f,	// (0x0002e0b8) main_mup3_pane_g2_ParamLimits

0x500f,	// (0x0002e0b8) main_mup3_pane_g2

0x5077,	// (0x0002e120) main_mup3_pane_g3_ParamLimits

0x5077,	// (0x0002e120) main_mup3_pane_g3

0x50db,	// (0x0002e184) main_mup3_pane_g4_ParamLimits

0x50db,	// (0x0002e184) main_mup3_pane_g4

0x513f,	// (0x0002e1e8) main_mup3_pane_g5_ParamLimits

0x513f,	// (0x0002e1e8) main_mup3_pane_g5

0xb1ec,	// (0x00034295) main_mup3_pane_g6_ParamLimits

0xb1ec,	// (0x00034295) main_mup3_pane_g6

0xd072,	// (0x0003611b) main_mup3_pane_g7_ParamLimits

0xd072,	// (0x0003611b) main_mup3_pane_g7

0x0007,

0xf66b,	// (0x00038714) main_mup3_pane_g_ParamLimits

0xf66b,	// (0x00038714) main_mup3_pane_g

0x520c,	// (0x0002e2b5) main_mup3_pane_t1_ParamLimits

0x520c,	// (0x0002e2b5) main_mup3_pane_t1

0x52fa,	// (0x0002e3a3) main_mup3_pane_t2_ParamLimits

0x52fa,	// (0x0002e3a3) main_mup3_pane_t2

0x53e8,	// (0x0002e491) main_mup3_pane_t4_ParamLimits

0x53e8,	// (0x0002e491) main_mup3_pane_t4

0x53fa,	// (0x0002e4a3) main_mup3_pane_t5_ParamLimits

0x53fa,	// (0x0002e4a3) main_mup3_pane_t5

0x54cc,	// (0x0002e575) main_mup3_pane_t6_ParamLimits

0x54cc,	// (0x0002e575) main_mup3_pane_t6

0x0005,

0xf67c,	// (0x00038725) main_mup3_pane_t_ParamLimits

0xf67c,	// (0x00038725) main_mup3_pane_t

0x5574,	// (0x0002e61d) mup3_progress_pane_ParamLimits

0x5574,	// (0x0002e61d) mup3_progress_pane

0x55dc,	// (0x0002e685) popup_mup3_control_window_ParamLimits

0x55dc,	// (0x0002e685) popup_mup3_control_window

0x55f4,	// (0x0002e69d) popup_mup3_text_window

0x55fc,	// (0x0002e6a5) mup3_progress_pane_t1

0x561b,	// (0x0002e6c4) mup3_progress_pane_t2

0x563a,	// (0x0002e6e3) mup3_progress_pane_t3

0x0002,

0xf689,	// (0x00038732) mup3_progress_pane_t

0x5657,	// (0x0002e700) mup_progress_pane_cp03

0x5667,	// (0x0002e710) bg_tb_trans_pane_cp04

0x5667,	// (0x0002e710) mup3_volume_pane

0x566f,	// (0x0002e718) popup_mup3_control_window_g1

0x566f,	// (0x0002e718) mup3_volume_pane_g1

0x566f,	// (0x0002e718) mup3_volume_pane_g2

0x566f,	// (0x0002e718) mup3_volume_pane_g3

0x0002,

0xf690,	// (0x00038739) mup3_volume_pane_g

0xc963,	// (0x00035a0c) bg_tb_trans_pane_cp03

0x5677,	// (0x0002e720) popup_mup3_text_window_g1

0x567f,	// (0x0002e728) popup_mup3_text_window_t1

0xd148,	// (0x000361f1) list_calc_item_pane_g1_ParamLimits

0x47e9,	// (0x0002d892) mup_volume_pane_cp_g1

0x4ea9,	// (0x0002df52) main_touch_calib_pane_t3

0x4ebd,	// (0x0002df66) main_touch_calib_pane_t4

0x4ed1,	// (0x0002df7a) main_touch_calib_pane_t5

0xaf2b,	// (0x00033fd4) aid_cell_size_toolbar2

0xaf33,	// (0x00033fdc) aid_popup3_width_pane

0xaf3f,	// (0x00033fe8) aid_zoom_text_msg_primary

0x23e2,	// (0x0002b48b) vorec_t7

0xd10c,	// (0x000361b5) bg_calc_paper_pane_g1_ParamLimits

0xd118,	// (0x000361c1) bg_calc_paper_pane_g2_ParamLimits

0xd124,	// (0x000361cd) bg_calc_paper_pane_g3_ParamLimits

0xd130,	// (0x000361d9) bg_calc_paper_pane_g4_ParamLimits

0xd13c,	// (0x000361e5) bg_calc_paper_pane_g5_ParamLimits

0x1e2a,	// (0x0002aed3) bg_calc_paper_pane_g6_ParamLimits

0x1e39,	// (0x0002aee2) bg_calc_paper_pane_g7_ParamLimits

0x1e48,	// (0x0002aef1) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x00038154) bg_calc_paper_pane_g_ParamLimits

0x1e5b,	// (0x0002af04) calc_bg_paper_pane_g9_ParamLimits

0xcf51,	// (0x00035ffa) image_qvga_pane_ParamLimits

0xcf51,	// (0x00035ffa) image_qvga_pane

0xcfe9,	// (0x00036092) bg_popup_sub_pane_cp04_ParamLimits

0xdf17,	// (0x00036fc0) popup_mup_playback_window_g1_ParamLimits

0xdf23,	// (0x00036fcc) popup_mup_playback_window_t1_ParamLimits

0xdf38,	// (0x00036fe1) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x000384ad) popup_mup_playback_window_t_ParamLimits

0xd072,	// (0x0003611b) main_mup2_pane_g3_ParamLimits

0xd072,	// (0x0003611b) main_mup2_pane_g3

0x26c2,	// (0x0002b76b) popup_toolbar_window_cp04

0xe2a9,	// (0x00037352) popup_call2_audio_second_window_g3_ParamLimits

0xe2a9,	// (0x00037352) popup_call2_audio_second_window_g3

0xe6c1,	// (0x0003776a) popup_call2_audio_first_window_g4_ParamLimits

0xe6c1,	// (0x0003776a) popup_call2_audio_first_window_g4

0xece8,	// (0x00037d91) popup_call2_audio_in_window_g4_ParamLimits

0xece8,	// (0x00037d91) popup_call2_audio_in_window_g4

0x3d85,	// (0x0002ce2e) aid_area_sk_bg_cut_ParamLimits

0x3d85,	// (0x0002ce2e) aid_area_sk_bg_cut

0xdf4d,	// (0x00036ff6) aid_area_sk_bg_cut_2_ParamLimits

0xdf4d,	// (0x00036ff6) aid_area_sk_bg_cut_2

0xc963,	// (0x00035a0c) aid_placing_details_win

0xc963,	// (0x00035a0c) aid_placing_details_win_2

0xd064,	// (0x0003610d) camera2_autofocus_pane_g1_ParamLimits

0x0a34,	// (0x00029add) popup_fixed_preview_cale_window_ParamLimits

0x0a34,	// (0x00029add) popup_fixed_preview_cale_window

0xdd15,	// (0x00036dbe) navi_slider_pane_g3

0xdd1e,	// (0x00036dc7) navi_slider_pane_g4

0xdd27,	// (0x00036dd0) navi_slider_pane_g5

0xdd15,	// (0x00036dbe) navi_slider_pane_g6

0xb0ab,	// (0x00034154) navi_slider_pane_g7

0xde55,	// (0x00036efe) mup_scale_pane_g3

0xde5e,	// (0x00036f07) mup_scale_pane_g4

0xde67,	// (0x00036f10) mup_scale_pane_g5

0x3a65,	// (0x0002cb0e) mup_scale_pane_g6

0x3a6e,	// (0x0002cb17) mup_scale_pane_g7

0x47f2,	// (0x0002d89b) cams2_slider_pane_g3

0x47f2,	// (0x0002d89b) cams2_slider_pane_g4

0x47f2,	// (0x0002d89b) cams2_slider_pane_g5

0x47f2,	// (0x0002d89b) cams2_slider_pane_g6

0x47f2,	// (0x0002d89b) cams2_slider_pane_g7

0xd0a2,	// (0x0003614b) camera2_autofocus_pane_cp_g1

0xef76,	// (0x0003801f) bg_popup_preview_window_pane_cp02_ParamLimits

0xef76,	// (0x0003801f) bg_popup_preview_window_pane_cp02

0x568d,	// (0x0002e736) list_fp_cale_pane_ParamLimits

0x568d,	// (0x0002e736) list_fp_cale_pane

0x5699,	// (0x0002e742) popup_fixed_preview_cale_window_t1_ParamLimits

0x5699,	// (0x0002e742) popup_fixed_preview_cale_window_t1

0x56ab,	// (0x0002e754) popup_fixed_preview_cale_window_t2_ParamLimits

0x56ab,	// (0x0002e754) popup_fixed_preview_cale_window_t2

0x56c0,	// (0x0002e769) popup_fixed_preview_cale_window_t3_ParamLimits

0x56c0,	// (0x0002e769) popup_fixed_preview_cale_window_t3

0x0002,

0xf697,	// (0x00038740) popup_fixed_preview_cale_window_t_ParamLimits

0xf697,	// (0x00038740) popup_fixed_preview_cale_window_t

0x56e1,	// (0x0002e78a) list_single_fp_cale_pane_ParamLimits

0x56e1,	// (0x0002e78a) list_single_fp_cale_pane

0x56f6,	// (0x0002e79f) list_single_fp_cale_pane_g1_ParamLimits

0x56f6,	// (0x0002e79f) list_single_fp_cale_pane_g1

0x5702,	// (0x0002e7ab) list_single_fp_cale_pane_g2_ParamLimits

0x5702,	// (0x0002e7ab) list_single_fp_cale_pane_g2

0x0002,

0xf69e,	// (0x00038747) list_single_fp_cale_pane_g_ParamLimits

0xf69e,	// (0x00038747) list_single_fp_cale_pane_g

0x571b,	// (0x0002e7c4) list_single_fp_cale_pane_t1_ParamLimits

0x571b,	// (0x0002e7c4) list_single_fp_cale_pane_t1

0x572d,	// (0x0002e7d6) list_single_fp_cale_pane_t2_ParamLimits

0x572d,	// (0x0002e7d6) list_single_fp_cale_pane_t2

0x0001,

0xf6a5,	// (0x0003874e) list_single_fp_cale_pane_t_ParamLimits

0xf6a5,	// (0x0003874e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xaf9e,	// (0x00034047) main_dialer_pane

0xc963,	// (0x00035a0c) aid_cell_size_keypad

0xc963,	// (0x00035a0c) dialer_ne_pane

0xc963,	// (0x00035a0c) grid_dialer_command_1_pane

0xc963,	// (0x00035a0c) grid_dialer_command_2_pane

0xc963,	// (0x00035a0c) grid_dialer_keypad_pane

0x5760,	// (0x0002e809) bg_popup_call_pane_cp06_ParamLimits

0x5760,	// (0x0002e809) bg_popup_call_pane_cp06

0x5760,	// (0x0002e809) dialer_ne_clear_pane_ParamLimits

0x5760,	// (0x0002e809) dialer_ne_clear_pane

0xd0a2,	// (0x0003614b) dialer_ne_pane_g1

0xd0c0,	// (0x00036169) dialer_ne_pane_t1_ParamLimits

0xd0c0,	// (0x00036169) dialer_ne_pane_t1

0x576e,	// (0x0002e817) dialer_ne_pane_t2_ParamLimits

0x576e,	// (0x0002e817) dialer_ne_pane_t2

0x5796,	// (0x0002e83f) dialer_ne_pane_t3_ParamLimits

0x5796,	// (0x0002e83f) dialer_ne_pane_t3

0x0002,

0xf6aa,	// (0x00038753) dialer_ne_pane_t_ParamLimits

0xf6aa,	// (0x00038753) dialer_ne_pane_t

0x5796,	// (0x0002e83f) dialer_ne_pane_t3_copy1_ParamLimits

0x5796,	// (0x0002e83f) dialer_ne_pane_t3_copy1

0x57c3,	// (0x0002e86c) cell_dialer_keypad_pane_ParamLimits

0x57c3,	// (0x0002e86c) cell_dialer_keypad_pane

0xcf51,	// (0x00035ffa) cell_dialer_command_1_pane_ParamLimits

0xcf51,	// (0x00035ffa) cell_dialer_command_1_pane

0x57da,	// (0x0002e883) cell_dialer_command_2_pane_ParamLimits

0x57da,	// (0x0002e883) cell_dialer_command_2_pane

0xcf51,	// (0x00035ffa) bg_button_pane_cp02_ParamLimits

0xcf51,	// (0x00035ffa) bg_button_pane_cp02

0xd064,	// (0x0003610d) cell_dialer_keypad_pane_g1_ParamLimits

0xd064,	// (0x0003610d) cell_dialer_keypad_pane_g1

0xcf51,	// (0x00035ffa) bg_button_pane_cp03_ParamLimits

0xcf51,	// (0x00035ffa) bg_button_pane_cp03

0xd064,	// (0x0003610d) cell_dialer_command_1_pane_g1_ParamLimits

0xd064,	// (0x0003610d) cell_dialer_command_1_pane_g1

0xc963,	// (0x00035a0c) bg_button_pane_cp04

0xd0a2,	// (0x0003614b) cell_dialer_command_2_pane_g1

0xc963,	// (0x00035a0c) bg_button_pane_cp06

0xd0a2,	// (0x0003614b) dialer_ne_clear_pane_g1

0xdbe8,	// (0x00036c91) navi_pane_g2

0xdc16,	// (0x00036cbf) navi_pane_g3

0x0002,

0xf30c,	// (0x000383b5) navi_pane_g

0xdca5,	// (0x00036d4e) navi_pane_mv_g2

0xdccc,	// (0x00036d75) navi_pane_mv_g5

0x3848,	// (0x0002c8f1) navi_pane_mv_t1

0xd100,	// (0x000361a9) main_clock2_pane

0xcf51,	// (0x00035ffa) main_clock2_list_pane_ParamLimits

0xcf51,	// (0x00035ffa) main_clock2_list_pane

0x5888,	// (0x0002e931) main_clock2_pane_t1_ParamLimits

0x5888,	// (0x0002e931) main_clock2_pane_t1

0x58c3,	// (0x0002e96c) main_clock2_pane_t2_ParamLimits

0x58c3,	// (0x0002e96c) main_clock2_pane_t2

0x0004,

0xf6b6,	// (0x0003875f) main_clock2_pane_t_ParamLimits

0xf6b6,	// (0x0003875f) main_clock2_pane_t

0x5963,	// (0x0002ea0c) popup_clock_analogue_window_cp03_ParamLimits

0x5963,	// (0x0002ea0c) popup_clock_analogue_window_cp03

0x5988,	// (0x0002ea31) popup_clock_digital_window_cp02_ParamLimits

0x5988,	// (0x0002ea31) popup_clock_digital_window_cp02

0x59cc,	// (0x0002ea75) main_clock2_list_single_pane_ParamLimits

0x59cc,	// (0x0002ea75) main_clock2_list_single_pane

0xd318,	// (0x000363c1) list_highlight_pane_cp05

0x59de,	// (0x0002ea87) main_clock2_list_single_pane_t1

0x26c2,	// (0x0002b76b) popup_toolbar_window_cp04_ParamLimits

0xd072,	// (0x0003611b) camera2_autofocus_pane_g2_ParamLimits

0xd072,	// (0x0003611b) camera2_autofocus_pane_g2

0xd072,	// (0x0003611b) camera2_autofocus_pane_g3_ParamLimits

0xd072,	// (0x0003611b) camera2_autofocus_pane_g3

0xd072,	// (0x0003611b) camera2_autofocus_pane_g4_ParamLimits

0xd072,	// (0x0003611b) camera2_autofocus_pane_g4

0xd072,	// (0x0003611b) camera2_autofocus_pane_g5_ParamLimits

0xd072,	// (0x0003611b) camera2_autofocus_pane_g5

0x0004,

0x0039,	// (0x000290e2) camera2_autofocus_pane_g_ParamLimits

0x0039,	// (0x000290e2) camera2_autofocus_pane_g

0x4f79,	// (0x0002e022) camera2_autofocus_pane_cp_g2

0x4f81,	// (0x0002e02a) camera2_autofocus_pane_cp_g3

0x4f89,	// (0x0002e032) camera2_autofocus_pane_cp_g4

0x4f91,	// (0x0002e03a) camera2_autofocus_pane_cp_g5

0x0004,

0xf660,	// (0x00038709) camera2_autofocus_pane_cp_g

0xc963,	// (0x00035a0c) popup_dialer_spcha_window

0xc963,	// (0x00035a0c) bg_popup_sub_pane_cp07

0xc963,	// (0x00035a0c) list_spcha_pane

0x59ec,	// (0x0002ea95) list_single_spcha_pane_ParamLimits

0x59ec,	// (0x0002ea95) list_single_spcha_pane

0xc963,	// (0x00035a0c) list_highlight_pane_cp06

0xd81e,	// (0x000368c7) list_single_spcha_pane_t1

0xea92,	// (0x00037b3b) popup_call2_audio_out_window_g4_ParamLimits

0xea92,	// (0x00037b3b) popup_call2_audio_out_window_g4

0xaf9e,	// (0x00034047) main_imed2_pane

0xb104,	// (0x000341ad) popup_imed_adjust2_window

0x0ea7,	// (0x00029f50) popup_imed_trans_window_ParamLimits

0x0ea7,	// (0x00029f50) popup_imed_trans_window

0x4901,	// (0x0002d9aa) popup_blid_sat_info2_window_t1

0x490f,	// (0x0002d9b8) popup_blid_sat_info2_window_t2

0x000a,

0xf59a,	// (0x00038643) popup_blid_sat_info2_window_t

0x59fe,	// (0x0002eaa7) aid_size_cell_colour_35

0x5a1e,	// (0x0002eac7) aid_size_cell_colour_112

0x5a3e,	// (0x0002eae7) aid_size_cell_effect

0xdde5,	// (0x00036e8e) bg_tb_trans_pane_cp02

0x5a5e,	// (0x0002eb07) heading_imed_pane

0x5a6a,	// (0x0002eb13) listscroll_imed_pane

0x5a76,	// (0x0002eb1f) heading_imed_pane_g1

0x5a7e,	// (0x0002eb27) heading_imed_pane_t1

0x5a8c,	// (0x0002eb35) grid_imed_colour_35_pane_ParamLimits

0x5a8c,	// (0x0002eb35) grid_imed_colour_35_pane

0x5aa3,	// (0x0002eb4c) grid_imed_effect_pane

0x5ab9,	// (0x0002eb62) list_imed_aspect_pane

0x5ac1,	// (0x0002eb6a) scroll_pane_cp027_ParamLimits

0x5ac1,	// (0x0002eb6a) scroll_pane_cp027

0x5ad2,	// (0x0002eb7b) cell_imed_effect_pane_ParamLimits

0x5ad2,	// (0x0002eb7b) cell_imed_effect_pane

0x5af9,	// (0x0002eba2) cell_imed_colour_pane_ParamLimits

0x5af9,	// (0x0002eba2) cell_imed_colour_pane

0x5b3b,	// (0x0002ebe4) cell_imed_colour_pane_g1_ParamLimits

0x5b3b,	// (0x0002ebe4) cell_imed_colour_pane_g1

0x5b4c,	// (0x0002ebf5) hgihlgiht_grid_pane_cp016_ParamLimits

0x5b4c,	// (0x0002ebf5) hgihlgiht_grid_pane_cp016

0x5b5d,	// (0x0002ec06) cell_imed_effect_pane_g1

0x5b65,	// (0x0002ec0e) grid_highlight_pane_cp017

0x5b6e,	// (0x0002ec17) list_imed_single_pane_ParamLimits

0x5b6e,	// (0x0002ec17) list_imed_single_pane

0xc963,	// (0x00035a0c) list_highlight_pane_cp07

0x5b83,	// (0x0002ec2c) list_imed_aspect_pane_comp1_t1

0xdde5,	// (0x00036e8e) bg_tb_trans_pane_cp05

0x5ba5,	// (0x0002ec4e) popup_imed_adjust2_window_g1

0x5bcc,	// (0x0002ec75) popup_imed_adjust2_window_t1

0x5be4,	// (0x0002ec8d) slider_imed_adjust_pane

0x5bf8,	// (0x0002eca1) slider_imed_adjust_pane_g1

0x5c08,	// (0x0002ecb1) slider_imed_adjust_pane_g2

0x5c18,	// (0x0002ecc1) slider_imed_adjust_pane_g3

0x5c29,	// (0x0002ecd2) slider_imed_adjust_pane_g4

0x0003,

0xf6d3,	// (0x0003877c) slider_imed_adjust_pane_g

0x5c3a,	// (0x0002ece3) aid_size_cell_clipart2

0x5c46,	// (0x0002ecef) grid_imed_clipart_pane

0xde78,	// (0x00036f21) scroll_pane_cp031

0x5c50,	// (0x0002ecf9) cell_imed_clipart_pane_ParamLimits

0x5c50,	// (0x0002ecf9) cell_imed_clipart_pane

0x5c72,	// (0x0002ed1b) cell_imed_clipart_pane_g1

0xc963,	// (0x00035a0c) grid_highlight_pane_cp014

0x5864,	// (0x0002e90d) main_clock2_pane_g1_ParamLimits

0x5864,	// (0x0002e90d) main_clock2_pane_g1

0x59a8,	// (0x0002ea51) aid_call2_pane_cp10

0x59ba,	// (0x0002ea63) aid_call_pane_cp10

0xdb49,	// (0x00036bf2) popup_clock_analogue_window_cp10_g1

0xdb49,	// (0x00036bf2) popup_clock_analogue_window_cp10_g2

0x1066,	// (0x0002a10f) popup_clock_analogue_window_cp10_g3

0x1066,	// (0x0002a10f) popup_clock_analogue_window_cp10_g4

0xdb49,	// (0x00036bf2) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6c1,	// (0x0003876a) popup_clock_analogue_window_cp10_g

0x107c,	// (0x0002a125) popup_clock_analogue_window_cp10_t1

0x109b,	// (0x0002a144) clock_digital_number_pane_cp10_ParamLimits

0x109b,	// (0x0002a144) clock_digital_number_pane_cp10

0x10b3,	// (0x0002a15c) clock_digital_number_pane_cp11_ParamLimits

0x10b3,	// (0x0002a15c) clock_digital_number_pane_cp11

0x10cb,	// (0x0002a174) clock_digital_number_pane_cp12_ParamLimits

0x10cb,	// (0x0002a174) clock_digital_number_pane_cp12

0x10e5,	// (0x0002a18e) clock_digital_number_pane_cp13_ParamLimits

0x10e5,	// (0x0002a18e) clock_digital_number_pane_cp13

0x10ff,	// (0x0002a1a8) clock_digital_separator_pane_cp10_ParamLimits

0x10ff,	// (0x0002a1a8) clock_digital_separator_pane_cp10

0x1119,	// (0x0002a1c2) popup_clock_digital_window_cp02_t1_ParamLimits

0x1119,	// (0x0002a1c2) popup_clock_digital_window_cp02_t1

0xcfe1,	// (0x0003608a) clock_digital_number_pane_cp10_g1

0xcfe1,	// (0x0003608a) clock_digital_number_pane_cp10_g2

0x0001,

0x011b,	// (0x000291c4) clock_digital_number_pane_cp10_g

0xcfe1,	// (0x0003608a) clock_digital_separator_pane_cp10_g1

0xcfe1,	// (0x0003608a) clock_digital_separator_pane_g2_cp10

0xdcd4,	// (0x00036d7d) navi_pane_vded_g4

0xdcdd,	// (0x00036d86) navi_pane_vded_g5

0xdce6,	// (0x00036d8f) navi_pane_vded_t1

0xaf9e,	// (0x00034047) main_vded_pane

0x5c7b,	// (0x0002ed24) main_vded_pane_g1

0x5c85,	// (0x0002ed2e) main_vded_pane_g2

0x5c8f,	// (0x0002ed38) main_vded_pane_g3

0x0002,

0xf6dc,	// (0x00038785) main_vded_pane_g

0x5c99,	// (0x0002ed42) main_vded_pane_t1

0x5ca7,	// (0x0002ed50) main_vded_pane_t2

0x0001,

0xf6e3,	// (0x0003878c) main_vded_pane_t

0x5cb5,	// (0x0002ed5e) vded_slider_pane

0x5cbd,	// (0x0002ed66) vded_video_pane

0x5cc5,	// (0x0002ed6e) vded_video_pane_g1

0x5ccf,	// (0x0002ed78) vded_video_pane_g2

0xd0a2,	// (0x0003614b) vded_video_pane_g3

0x0002,

0xf6e8,	// (0x00038791) vded_video_pane_g

0x5cd8,	// (0x0002ed81) vded_slider_pane_g1

0x47e9,	// (0x0002d892) vded_slider_pane_g2

0x5ce1,	// (0x0002ed8a) vded_slider_pane_g3

0x5cea,	// (0x0002ed93) vded_slider_pane_g4

0x5cf3,	// (0x0002ed9c) vded_slider_pane_g5

0x0004,

0xf6ef,	// (0x00038798) vded_slider_pane_g

0xb1f8,	// (0x000342a1) mup3_rocker_pane_ParamLimits

0xb1f8,	// (0x000342a1) mup3_rocker_pane

0x566f,	// (0x0002e718) mup3_control_keys_pane_g1

0x5cfc,	// (0x0002eda5) mup3_control_keys_pane_g2

0x566f,	// (0x0002e718) mup3_control_keys_pane_g3

0x5d04,	// (0x0002edad) mup3_control_keys_pane_g4

0x0003,

0xf6fa,	// (0x000387a3) mup3_control_keys_pane_g

0x0a6b,	// (0x00029b14) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0a6b,	// (0x00029b14) popup_toolbar2_fixed_window_cp01

0xb1f8,	// (0x000342a1) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb1f8,	// (0x000342a1) popup_toolbar2_fixed_window_cp02

0xe41b,	// (0x000374c4) popup_call2_audio_second_window_t4_ParamLimits

0xe41b,	// (0x000374c4) popup_call2_audio_second_window_t4

0xe957,	// (0x00037a00) popup_call2_audio_first_window_t6_ParamLimits

0xe957,	// (0x00037a00) popup_call2_audio_first_window_t6

0xeb95,	// (0x00037c3e) popup_call2_audio_out_window_t6_ParamLimits

0xeb95,	// (0x00037c3e) popup_call2_audio_out_window_t6

0xaf9e,	// (0x00034047) main_vitu_pane

0xcf51,	// (0x00035ffa) aid_size_cell_itu_ParamLimits

0xcf51,	// (0x00035ffa) aid_size_cell_itu

0xcf51,	// (0x00035ffa) bg_popup_window_pane_cp08_ParamLimits

0xcf51,	// (0x00035ffa) bg_popup_window_pane_cp08

0xcf51,	// (0x00035ffa) field_vitu_entry_pane_ParamLimits

0xcf51,	// (0x00035ffa) field_vitu_entry_pane

0xcf51,	// (0x00035ffa) grid_vitu_function_pane_ParamLimits

0xcf51,	// (0x00035ffa) grid_vitu_function_pane

0xcf51,	// (0x00035ffa) grid_vitu_itu_pane_ParamLimits

0xcf51,	// (0x00035ffa) grid_vitu_itu_pane

0xcf51,	// (0x00035ffa) cell_vitu_itu_pane_ParamLimits

0xcf51,	// (0x00035ffa) cell_vitu_itu_pane

0xcf51,	// (0x00035ffa) cell_vitu_function_pane_ParamLimits

0xcf51,	// (0x00035ffa) cell_vitu_function_pane

0xcf51,	// (0x00035ffa) bg_popup_sub_pane_cp08_ParamLimits

0xcf51,	// (0x00035ffa) bg_popup_sub_pane_cp08

0xd0ac,	// (0x00036155) field_vitu_entry_pane_t1_ParamLimits

0xd0ac,	// (0x00036155) field_vitu_entry_pane_t1

0x5d0c,	// (0x0002edb5) field_vitu_entry_pane_t2_ParamLimits

0x5d0c,	// (0x0002edb5) field_vitu_entry_pane_t2

0x0001,

0xf703,	// (0x000387ac) field_vitu_entry_pane_t_ParamLimits

0xf703,	// (0x000387ac) field_vitu_entry_pane_t

0x48a8,	// (0x0002d951) bg_button_pane_cp05_ParamLimits

0x48a8,	// (0x0002d951) bg_button_pane_cp05

0x5d29,	// (0x0002edd2) cell_vitu_itu_pane_g1

0xddd1,	// (0x00036e7a) cell_vitu_itu_pane_t1_ParamLimits

0xddd1,	// (0x00036e7a) cell_vitu_itu_pane_t1

0xddd1,	// (0x00036e7a) cell_vitu_itu_pane_t2_ParamLimits

0xddd1,	// (0x00036e7a) cell_vitu_itu_pane_t2

0x0002,

0xf708,	// (0x000387b1) cell_vitu_itu_pane_t_ParamLimits

0xf708,	// (0x000387b1) cell_vitu_itu_pane_t

0xc963,	// (0x00035a0c) bg_button_pane_cp07

0xd0a2,	// (0x0003614b) cell_vitu_function_pane_g1

0xafa8,	// (0x00034051) main_calc_pane_g1

0x08cc,	// (0x00029975) aid_visual_content_pane

0xaf9e,	// (0x00034047) main_vradio_pane

0xd064,	// (0x0003610d) main_vradio_pane_g1_ParamLimits

0xd064,	// (0x0003610d) main_vradio_pane_g1

0xd072,	// (0x0003611b) main_vradio_pane_g2_ParamLimits

0xd072,	// (0x0003611b) main_vradio_pane_g2

0x0001,

0x05da,	// (0x00029683) main_vradio_pane_g_ParamLimits

0x05da,	// (0x00029683) main_vradio_pane_g

0xd0ac,	// (0x00036155) main_vradio_pane_t1_ParamLimits

0xd0ac,	// (0x00036155) main_vradio_pane_t1

0xd0ac,	// (0x00036155) main_vradio_pane_t2_ParamLimits

0xd0ac,	// (0x00036155) main_vradio_pane_t2

0xd0c0,	// (0x00036169) main_vradio_pane_t3_ParamLimits

0xd0c0,	// (0x00036169) main_vradio_pane_t3

0x0002,

0xf70f,	// (0x000387b8) main_vradio_pane_t_ParamLimits

0xf70f,	// (0x000387b8) main_vradio_pane_t

0xcf51,	// (0x00035ffa) vradio_rocker_control_pane_ParamLimits

0xcf51,	// (0x00035ffa) vradio_rocker_control_pane

0xcf51,	// (0x00035ffa) vradio_station_info_pane_ParamLimits

0xcf51,	// (0x00035ffa) vradio_station_info_pane

0xcf51,	// (0x00035ffa) vradio_frequency_info_pane_ParamLimits

0xcf51,	// (0x00035ffa) vradio_frequency_info_pane

0xd0a2,	// (0x0003614b) vradio_station_info_pane_g1

0xddd1,	// (0x00036e7a) vradio_station_info_pane_t1_ParamLimits

0xddd1,	// (0x00036e7a) vradio_station_info_pane_t1

0xd0c0,	// (0x00036169) vradio_station_info_pane_t2_ParamLimits

0xd0c0,	// (0x00036169) vradio_station_info_pane_t2

0x0001,

0xf716,	// (0x000387bf) vradio_station_info_pane_t_ParamLimits

0xf716,	// (0x000387bf) vradio_station_info_pane_t

0xc963,	// (0x00035a0c) vradio_tuning_pane

0x5d45,	// (0x0002edee) vradio_rocker_control_pane_g1

0x5d4f,	// (0x0002edf8) vradio_rocker_control_pane_g2

0x5d57,	// (0x0002ee00) vradio_rocker_control_pane_g3

0x5d61,	// (0x0002ee0a) vradio_rocker_control_pane_g4

0x5d6b,	// (0x0002ee14) vradio_rocker_control_pane_g5

0x0004,

0xf71b,	// (0x000387c4) vradio_rocker_control_pane_g

0xd0a2,	// (0x0003614b) vradio_frequency_info_pane_g1

0xd0ac,	// (0x00036155) vradio_frequency_info_pane_t1_ParamLimits

0xd0ac,	// (0x00036155) vradio_frequency_info_pane_t1

0x5d75,	// (0x0002ee1e) vradio_tuning_pane_g1

0x5d82,	// (0x0002ee2b) vradio_tuning_pane_t1

0xaf4f,	// (0x00033ff8) area_side_right_pane_ParamLimits

0xaf4f,	// (0x00033ff8) area_side_right_pane

0xef3d,	// (0x00037fe6) status_small_pane_g1

0xef45,	// (0x00037fee) status_small_pane_g2

0xef4e,	// (0x00037ff7) status_small_pane_g3

0xef57,	// (0x00038000) status_small_pane_g4

0x0003,

0xf4fc,	// (0x000385a5) status_small_pane_g

0xef60,	// (0x00038009) status_small_pane_t1

0xaf9e,	// (0x00034047) main_video3_pane

0xc963,	// (0x00035a0c) cams_zoom_vslider_pane

0x5d91,	// (0x0002ee3a) image3_wide_pane_ParamLimits

0x5d91,	// (0x0002ee3a) image3_wide_pane

0xc963,	// (0x00035a0c) image3_wide_small_pane

0x5dab,	// (0x0002ee54) main_video3_pane_g1_ParamLimits

0x5dab,	// (0x0002ee54) main_video3_pane_g1

0x5dab,	// (0x0002ee54) main_video3_pane_g2_ParamLimits

0x5dab,	// (0x0002ee54) main_video3_pane_g2

0x0001,

0xf726,	// (0x000387cf) main_video3_pane_g_ParamLimits

0xf726,	// (0x000387cf) main_video3_pane_g

0x5dc9,	// (0x0002ee72) main_video3_pane_t1_ParamLimits

0x5dc9,	// (0x0002ee72) main_video3_pane_t1

0x5dc9,	// (0x0002ee72) main_video3_pane_t2_ParamLimits

0x5dc9,	// (0x0002ee72) main_video3_pane_t2

0x5dc9,	// (0x0002ee72) main_video3_pane_t3_ParamLimits

0x5dc9,	// (0x0002ee72) main_video3_pane_t3

0x0002,

0xf72b,	// (0x000387d4) main_video3_pane_t_ParamLimits

0xf72b,	// (0x000387d4) main_video3_pane_t

0xd0a2,	// (0x0003614b) cams_zoom_vslider_pane_g1

0xd0a2,	// (0x0003614b) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00038135) cams_zoom_vslider_pane_g

0xc963,	// (0x00035a0c) small_slider_vertical_pane

0xd0a2,	// (0x0003614b) small_slider_vertical_pane_g1

0xd0a2,	// (0x0003614b) small_slider_vertical_pane_g2

0x5df0,	// (0x0002ee99) small_slider_vertical_pane_g3

0x0002,

0xf732,	// (0x000387db) small_slider_vertical_pane_g

0xaf9e,	// (0x00034047) main_hwr_training_pane

0x5df9,	// (0x0002eea2) hwr_training_instruct_pane_ParamLimits

0x5df9,	// (0x0002eea2) hwr_training_instruct_pane

0x5e1b,	// (0x0002eec4) hwr_training_navi_pane_ParamLimits

0x5e1b,	// (0x0002eec4) hwr_training_navi_pane

0x5e3a,	// (0x0002eee3) hwr_training_write_pane_ParamLimits

0x5e3a,	// (0x0002eee3) hwr_training_write_pane

0xc963,	// (0x00035a0c) bg_frame_shadow_pane

0x5e8a,	// (0x0002ef33) hwr_training_write_pane_g1

0x5e92,	// (0x0002ef3b) hwr_training_write_pane_g2

0x5e9a,	// (0x0002ef43) hwr_training_write_pane_g3

0x5ea2,	// (0x0002ef4b) hwr_training_write_pane_g4

0x5eaa,	// (0x0002ef53) hwr_training_write_pane_g5

0x5eb2,	// (0x0002ef5b) hwr_training_write_pane_g6

0x5eba,	// (0x0002ef63) hwr_training_write_pane_g7

0x0006,

0xf739,	// (0x000387e2) hwr_training_write_pane_g

0xb204,	// (0x000342ad) hwr_training_navi_pane_g1_ParamLimits

0xb204,	// (0x000342ad) hwr_training_navi_pane_g1

0xb216,	// (0x000342bf) hwr_training_navi_pane_g2_ParamLimits

0xb216,	// (0x000342bf) hwr_training_navi_pane_g2

0xb228,	// (0x000342d1) hwr_training_navi_pane_g3_ParamLimits

0xb228,	// (0x000342d1) hwr_training_navi_pane_g3

0xb238,	// (0x000342e1) hwr_training_navi_pane_g4_ParamLimits

0xb238,	// (0x000342e1) hwr_training_navi_pane_g4

0x0004,

0xf748,	// (0x000387f1) hwr_training_navi_pane_g_ParamLimits

0xf748,	// (0x000387f1) hwr_training_navi_pane_g

0xb245,	// (0x000342ee) hwr_training_navi_pane_t1

0x5ec2,	// (0x0002ef6b) list_single_hwr_training_instruct_pane_ParamLimits

0x5ec2,	// (0x0002ef6b) list_single_hwr_training_instruct_pane

0x5ed7,	// (0x0002ef80) list_single_hwr_training_instruct_pane_t1

0x4a02,	// (0x0002daab) bg_frame_shadow_pane_g1

0x5ee6,	// (0x0002ef8f) bg_frame_shadow_pane_g2

0x5eee,	// (0x0002ef97) bg_frame_shadow_pane_g3

0x5ef6,	// (0x0002ef9f) bg_frame_shadow_pane_g4

0x5efe,	// (0x0002efa7) bg_frame_shadow_pane_g5

0x5f06,	// (0x0002efaf) bg_frame_shadow_pane_g6

0x5f0e,	// (0x0002efb7) bg_frame_shadow_pane_g7

0xd1b8,	// (0x00036261) bg_frame_shadow_pane_g8

0x0007,

0xf753,	// (0x000387fc) bg_frame_shadow_pane_g

0xaf9e,	// (0x00034047) main_video_tele_dialer_pane

0x1147,	// (0x0002a1f0) aid_size_cell_video_keypad_ParamLimits

0x1147,	// (0x0002a1f0) aid_size_cell_video_keypad

0x1161,	// (0x0002a20a) grid_video_dialer_keypad_pane_ParamLimits

0x1161,	// (0x0002a20a) grid_video_dialer_keypad_pane

0x11ad,	// (0x0002a256) video_down_pane_cp_ParamLimits

0x11ad,	// (0x0002a256) video_down_pane_cp

0x11c3,	// (0x0002a26c) cell_video_dialer_keypad_pane_ParamLimits

0x11c3,	// (0x0002a26c) cell_video_dialer_keypad_pane

0x5f32,	// (0x0002efdb) bg_button_pane_cp08_ParamLimits

0x5f32,	// (0x0002efdb) bg_button_pane_cp08

0x5f3e,	// (0x0002efe7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5f3e,	// (0x0002efe7) cell_video_dialer_keypad_pane_g1

0xb1f8,	// (0x000342a1) mup3_rocker2_pane_ParamLimits

0xb1f8,	// (0x000342a1) mup3_rocker2_pane

0xd0a2,	// (0x0003614b) mup3_rocker2_pane_g1

0x0d88,	// (0x00029e31) main_dialer2_pane

0xaf9e,	// (0x00034047) main_mp4_pane

0xb271,	// (0x0003431a) main_mp4_pane_g1_ParamLimits

0xb271,	// (0x0003431a) main_mp4_pane_g1

0xb271,	// (0x0003431a) main_mp4_pane_g2_ParamLimits

0xb271,	// (0x0003431a) main_mp4_pane_g2

0x11e5,	// (0x0002a28e) main_mp4_pane_g3_ParamLimits

0x11e5,	// (0x0002a28e) main_mp4_pane_g3

0xb28f,	// (0x00034338) main_mp4_pane_g4_ParamLimits

0xb28f,	// (0x00034338) main_mp4_pane_g4

0xb2b7,	// (0x00034360) main_mp4_pane_g5_ParamLimits

0xb2b7,	// (0x00034360) main_mp4_pane_g5

0x0007,

0xf773,	// (0x0003881c) main_mp4_pane_g_ParamLimits

0xf773,	// (0x0003881c) main_mp4_pane_g

0xb31f,	// (0x000343c8) main_mp4_pane_t1_ParamLimits

0xb31f,	// (0x000343c8) main_mp4_pane_t1

0xb381,	// (0x0003442a) main_mp4_pane_t2_ParamLimits

0xb381,	// (0x0003442a) main_mp4_pane_t2

0xb3e5,	// (0x0003448e) main_mp4_pane_t3_ParamLimits

0xb3e5,	// (0x0003448e) main_mp4_pane_t3

0xb443,	// (0x000344ec) main_mp4_pane_t4_ParamLimits

0xb443,	// (0x000344ec) main_mp4_pane_t4

0x0003,

0xf784,	// (0x0003882d) main_mp4_pane_t_ParamLimits

0xf784,	// (0x0003882d) main_mp4_pane_t

0xb4a1,	// (0x0003454a) mp4_progress_pane_ParamLimits

0xb4a1,	// (0x0003454a) mp4_progress_pane

0xb4d5,	// (0x0003457e) mp4_rocker_pane_ParamLimits

0xb4d5,	// (0x0003457e) mp4_rocker_pane

0x5f7d,	// (0x0002f026) mp4_progress_pane_t1

0x5f9c,	// (0x0002f045) mp4_progress_pane_t2

0x0001,

0xf78d,	// (0x00038836) mp4_progress_pane_t

0x5fbb,	// (0x0002f064) mup_progress_pane_cp04

0x47f2,	// (0x0002d89b) mp4_rocker_pane_g1

0xaf90,	// (0x00034039) aid_cell_size_keypad2_ParamLimits

0xaf90,	// (0x00034039) aid_cell_size_keypad2

0xaf90,	// (0x00034039) dialer2_ne_pane_ParamLimits

0xaf90,	// (0x00034039) dialer2_ne_pane

0xaf90,	// (0x00034039) grid_dialer2_keypad_pane_ParamLimits

0xaf90,	// (0x00034039) grid_dialer2_keypad_pane

0x48a8,	// (0x0002d951) bg_popup_call_pane_cp07_ParamLimits

0x48a8,	// (0x0002d951) bg_popup_call_pane_cp07

0x5fce,	// (0x0002f077) dialer2_ne_pane_t1_ParamLimits

0x5fce,	// (0x0002f077) dialer2_ne_pane_t1

0x1215,	// (0x0002a2be) cell_dialer2_keypad_pane_ParamLimits

0x1215,	// (0x0002a2be) cell_dialer2_keypad_pane

0x48a8,	// (0x0002d951) bg_button_pane_pane_cp04_ParamLimits

0x48a8,	// (0x0002d951) bg_button_pane_pane_cp04

0xd064,	// (0x0003610d) cell_dialer2_keypad_pane_g1_ParamLimits

0xd064,	// (0x0003610d) cell_dialer2_keypad_pane_g1

0x2596,	// (0x0002b63f) aid_placing_vt_set_content_ParamLimits

0x2596,	// (0x0002b63f) aid_placing_vt_set_content

0x25be,	// (0x0002b667) aid_placing_vt_set_title_ParamLimits

0x25be,	// (0x0002b667) aid_placing_vt_set_title

0xaf9e,	// (0x00034047) main_image3_pane

0x128a,	// (0x0002a333) area_side_right_pane_cp01_ParamLimits

0x128a,	// (0x0002a333) area_side_right_pane_cp01

0x12a1,	// (0x0002a34a) main_image3_pane_g1_ParamLimits

0x12a1,	// (0x0002a34a) main_image3_pane_g1

0x12af,	// (0x0002a358) main_image3_pane_g2_ParamLimits

0x12af,	// (0x0002a358) main_image3_pane_g2

0x12d7,	// (0x0002a380) main_image3_pane_g3_ParamLimits

0x12d7,	// (0x0002a380) main_image3_pane_g3

0x1301,	// (0x0002a3aa) main_image3_pane_g4_ParamLimits

0x1301,	// (0x0002a3aa) main_image3_pane_g4

0x0003,

0xf79c,	// (0x00038845) main_image3_pane_g_ParamLimits

0xf79c,	// (0x00038845) main_image3_pane_g

0x132b,	// (0x0002a3d4) main_image3_pane_t1_ParamLimits

0x132b,	// (0x0002a3d4) main_image3_pane_t1

0x1383,	// (0x0002a42c) main_image3_pane_t2_ParamLimits

0x1383,	// (0x0002a42c) main_image3_pane_t2

0x13d5,	// (0x0002a47e) main_image3_pane_t3_ParamLimits

0x13d5,	// (0x0002a47e) main_image3_pane_t3

0x0003,

0xf7a5,	// (0x0003884e) main_image3_pane_t_ParamLimits

0xf7a5,	// (0x0003884e) main_image3_pane_t

0xcf51,	// (0x00035ffa) grid_sctrl_middle_pane_cp01_ParamLimits

0xcf51,	// (0x00035ffa) grid_sctrl_middle_pane_cp01

0x603a,	// (0x0002f0e3) cell_sctrl_middle_pane_cp01_ParamLimits

0x603a,	// (0x0002f0e3) cell_sctrl_middle_pane_cp01

0x6057,	// (0x0002f100) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6057,	// (0x0002f100) cell_sctrl_middle_pane_cp01_g1

0xaf9e,	// (0x00034047) main_call4_pane

0x145d,	// (0x0002a506) aid_size_button_call4_ParamLimits

0x145d,	// (0x0002a506) aid_size_button_call4

0x1490,	// (0x0002a539) call4_windows_pane_ParamLimits

0x1490,	// (0x0002a539) call4_windows_pane

0x14af,	// (0x0002a558) grid_call4_button_pane_ParamLimits

0x14af,	// (0x0002a558) grid_call4_button_pane

0x14e2,	// (0x0002a58b) call4_windows_conf_pane

0x14f9,	// (0x0002a5a2) popup_call4_audio_first_window_ParamLimits

0x14f9,	// (0x0002a5a2) popup_call4_audio_first_window

0x1549,	// (0x0002a5f2) popup_call4_audio_second_window_ParamLimits

0x1549,	// (0x0002a5f2) popup_call4_audio_second_window

0x1560,	// (0x0002a609) popup_call4_audio_wait_window_ParamLimits

0x1560,	// (0x0002a609) popup_call4_audio_wait_window

0x156e,	// (0x0002a617) cell_call4_button_pane_ParamLimits

0x156e,	// (0x0002a617) cell_call4_button_pane

0x606d,	// (0x0002f116) bg_button_pane_cp09_ParamLimits

0x606d,	// (0x0002f116) bg_button_pane_cp09

0x1593,	// (0x0002a63c) cell_call4_button_pane_g1_ParamLimits

0x1593,	// (0x0002a63c) cell_call4_button_pane_g1

0x15b9,	// (0x0002a662) cell_call4_button_pane_t1_ParamLimits

0x15b9,	// (0x0002a662) cell_call4_button_pane_t1

0x6081,	// (0x0002f12a) popup_call4_audio_conf_window_ParamLimits

0x6081,	// (0x0002f12a) popup_call4_audio_conf_window

0x55fc,	// (0x0002e6a5) mup3_progress_pane_t1_ParamLimits

0x561b,	// (0x0002e6c4) mup3_progress_pane_t2_ParamLimits

0x563a,	// (0x0002e6e3) mup3_progress_pane_t3_ParamLimits

0xf689,	// (0x00038732) mup3_progress_pane_t_ParamLimits

0x5657,	// (0x0002e700) mup_progress_pane_cp03_ParamLimits

0x566f,	// (0x0002e718) mup3_control_keys_pane_g4_copy1

0xb4d5,	// (0x0003457e) mp4_rocker2_pane_ParamLimits

0xb4d5,	// (0x0003457e) mp4_rocker2_pane

0x5cfc,	// (0x0002eda5) mp4_rocker2_pane_g1

0x5cfc,	// (0x0002eda5) mp4_rocker2_pane_g2

0x5cfc,	// (0x0002eda5) mp4_rocker2_pane_g3

0x5cfc,	// (0x0002eda5) mp4_rocker2_pane_g4

0x5cfc,	// (0x0002eda5) mp4_rocker2_pane_g5

0x0004,

0xf7ae,	// (0x00038857) mp4_rocker2_pane_g

0xaf9e,	// (0x00034047) main_camera4_pane

0xaf9e,	// (0x00034047) main_video4_pane

0x117b,	// (0x0002a224) main_video_tele_dialer_pane_t1_ParamLimits

0x117b,	// (0x0002a224) main_video_tele_dialer_pane_t1

0x1194,	// (0x0002a23d) main_video_tele_dialer_pane_t2_ParamLimits

0x1194,	// (0x0002a23d) main_video_tele_dialer_pane_t2

0x0001,

0xf764,	// (0x0003880d) main_video_tele_dialer_pane_t_ParamLimits

0xf764,	// (0x0003880d) main_video_tele_dialer_pane_t

0x15f7,	// (0x0002a6a0) cam4_autofocus_pane_ParamLimits

0x15f7,	// (0x0002a6a0) cam4_autofocus_pane

0x160d,	// (0x0002a6b6) cam4_image_uncrop_pane_ParamLimits

0x160d,	// (0x0002a6b6) cam4_image_uncrop_pane

0x1627,	// (0x0002a6d0) cam4_indicators_pane_ParamLimits

0x1627,	// (0x0002a6d0) cam4_indicators_pane

0x1652,	// (0x0002a6fb) main_camera4_pane_g1_ParamLimits

0x1652,	// (0x0002a6fb) main_camera4_pane_g1

0x1664,	// (0x0002a70d) main_camera4_pane_g2_ParamLimits

0x1664,	// (0x0002a70d) main_camera4_pane_g2

0x1677,	// (0x0002a720) main_camera4_pane_g3_ParamLimits

0x1677,	// (0x0002a720) main_camera4_pane_g3

0x168a,	// (0x0002a733) main_camera4_pane_g4_ParamLimits

0x168a,	// (0x0002a733) main_camera4_pane_g4

0x169d,	// (0x0002a746) main_camera4_pane_g5_ParamLimits

0x169d,	// (0x0002a746) main_camera4_pane_g5

0x0005,

0xf7b9,	// (0x00038862) main_camera4_pane_g_ParamLimits

0xf7b9,	// (0x00038862) main_camera4_pane_g

0x16c1,	// (0x0002a76a) main_camera4_pane_t1_ParamLimits

0x16c1,	// (0x0002a76a) main_camera4_pane_t1

0xb57b,	// (0x00034624) bg_tb_trans_pane_cp06

0xb591,	// (0x0003463a) cam4_indicators_pane_g1

0xb5a2,	// (0x0003464b) cam4_indicators_pane_g2

0x0002,

0xf7d4,	// (0x0003887d) cam4_indicators_pane_g

0xb5c0,	// (0x00034669) cam4_indicators_pane_t1

0x1711,	// (0x0002a7ba) main_video4_pane_g1_ParamLimits

0x1711,	// (0x0002a7ba) main_video4_pane_g1

0x1720,	// (0x0002a7c9) main_video4_pane_g2_ParamLimits

0x1720,	// (0x0002a7c9) main_video4_pane_g2

0x172f,	// (0x0002a7d8) main_video4_pane_g3_ParamLimits

0x172f,	// (0x0002a7d8) main_video4_pane_g3

0x173e,	// (0x0002a7e7) main_video4_pane_g4_ParamLimits

0x173e,	// (0x0002a7e7) main_video4_pane_g4

0x0004,

0xf7db,	// (0x00038884) main_video4_pane_g_ParamLimits

0xf7db,	// (0x00038884) main_video4_pane_g

0x175c,	// (0x0002a805) vid4_indicators_pane_ParamLimits

0x175c,	// (0x0002a805) vid4_indicators_pane

0x178a,	// (0x0002a833) video4_image_uncrop_cif_pane_ParamLimits

0x178a,	// (0x0002a833) video4_image_uncrop_cif_pane

0x17a4,	// (0x0002a84d) video4_image_uncrop_nhd_pane_ParamLimits

0x17a4,	// (0x0002a84d) video4_image_uncrop_nhd_pane

0x160d,	// (0x0002a6b6) video4_image_uncrop_vga_pane_ParamLimits

0x160d,	// (0x0002a6b6) video4_image_uncrop_vga_pane

0xaf90,	// (0x00034039) bg_tb_trans_pane_cp07

0xb5ec,	// (0x00034695) vid4_indicators_pane_g1

0xb600,	// (0x000346a9) vid4_indicators_pane_g2

0xb614,	// (0x000346bd) vid4_indicators_pane_g3

0x0004,

0xf7e6,	// (0x0003888f) vid4_indicators_pane_g

0xb643,	// (0x000346ec) vid4_indicators_pane_t1

0x60a9,	// (0x0002f152) cam4_autofocus_pane_g1

0x60b1,	// (0x0002f15a) cam4_autofocus_pane_g2

0x60b9,	// (0x0002f162) cam4_autofocus_pane_g3

0x0002,

0xf7f1,	// (0x0003889a) cam4_autofocus_pane_g

0x60c1,	// (0x0002f16a) cam4_autofocus_pane_g3_copy1

0x5f16,	// (0x0002efbf) video_down_pane_cp_t1

0x5f24,	// (0x0002efcd) video_down_pane_cp_t2

0x0001,

0xf769,	// (0x00038812) video_down_pane_cp_t

0xaf90,	// (0x00034039) popup_vitu2_window_ParamLimits

0xaf90,	// (0x00034039) popup_vitu2_window

0x17b8,	// (0x0002a861) aid_size_cell2_itu2_ParamLimits

0x17b8,	// (0x0002a861) aid_size_cell2_itu2

0x17de,	// (0x0002a887) aid_size_cell_itu2_ParamLimits

0x17de,	// (0x0002a887) aid_size_cell_itu2

0x183a,	// (0x0002a8e3) bg_popup_window_pane_cp09_ParamLimits

0x183a,	// (0x0002a8e3) bg_popup_window_pane_cp09

0x1848,	// (0x0002a8f1) field_vitu2_entry_pane_ParamLimits

0x1848,	// (0x0002a8f1) field_vitu2_entry_pane

0x186e,	// (0x0002a917) grid_vitu2_function_pane_ParamLimits

0x186e,	// (0x0002a917) grid_vitu2_function_pane

0x18bf,	// (0x0002a968) grid_vitu2_itu_pane_ParamLimits

0x18bf,	// (0x0002a968) grid_vitu2_itu_pane

0x1955,	// (0x0002a9fe) cell_vitu2_itu_pane_ParamLimits

0x1955,	// (0x0002a9fe) cell_vitu2_itu_pane

0x1981,	// (0x0002aa2a) cell_vitu2_function_pane_ParamLimits

0x1981,	// (0x0002aa2a) cell_vitu2_function_pane

0x60c9,	// (0x0002f172) bg_popup_call_pane_cp08_ParamLimits

0x60c9,	// (0x0002f172) bg_popup_call_pane_cp08

0x60e0,	// (0x0002f189) field_vitu2_entry_pane_g1

0x60ec,	// (0x0002f195) field_vitu2_entry_pane_g2

0x0002,

0xf7f8,	// (0x000388a1) field_vitu2_entry_pane_g

0x60f8,	// (0x0002f1a1) field_vitu2_entry_pane_t1_ParamLimits

0x60f8,	// (0x0002f1a1) field_vitu2_entry_pane_t1

0x6127,	// (0x0002f1d0) field_vitu2_entry_pane_t2_ParamLimits

0x6127,	// (0x0002f1d0) field_vitu2_entry_pane_t2

0x0001,

0xf7ff,	// (0x000388a8) field_vitu2_entry_pane_t_ParamLimits

0xf7ff,	// (0x000388a8) field_vitu2_entry_pane_t

0x19c0,	// (0x0002aa69) bg_button_pane_cp010_ParamLimits

0x19c0,	// (0x0002aa69) bg_button_pane_cp010

0x19ce,	// (0x0002aa77) cell_vitu2_itu_pane_g1

0x19f4,	// (0x0002aa9d) cell_vitu2_itu_pane_t1_ParamLimits

0x19f4,	// (0x0002aa9d) cell_vitu2_itu_pane_t1

0x1a52,	// (0x0002aafb) cell_vitu2_itu_pane_t2_ParamLimits

0x1a52,	// (0x0002aafb) cell_vitu2_itu_pane_t2

0x0002,

0xf809,	// (0x000388b2) cell_vitu2_itu_pane_t_ParamLimits

0xf809,	// (0x000388b2) cell_vitu2_itu_pane_t

0xaf90,	// (0x00034039) bg_button_pane_cp011

0x1b3e,	// (0x0002abe7) cell_vitu2_function_pane_g1

0xaf9e,	// (0x00034047) main_myfav_hc_pane

0x1425,	// (0x0002a4ce) popup_image3_note_pane_ParamLimits

0x1425,	// (0x0002a4ce) popup_image3_note_pane

0x1441,	// (0x0002a4ea) popup_image3_tool_bar_pane_ParamLimits

0x1441,	// (0x0002a4ea) popup_image3_tool_bar_pane

0x1ae0,	// (0x0002ab89) cell_vitu2_itu_pane_t3_ParamLimits

0x1ae0,	// (0x0002ab89) cell_vitu2_itu_pane_t3

0xc963,	// (0x00035a0c) bg_popup_trans_pane

0x614c,	// (0x0002f1f5) grid_image3_tool_bar_pane

0x6156,	// (0x0002f1ff) bg_popup_trans_pane_g1

0xd53a,	// (0x000365e3) bg_popup_trans_pane_g2

0x615e,	// (0x0002f207) bg_popup_trans_pane_g3

0x6166,	// (0x0002f20f) bg_popup_trans_pane_g4

0x616e,	// (0x0002f217) bg_popup_trans_pane_g5

0x6176,	// (0x0002f21f) bg_popup_trans_pane_g6

0x617e,	// (0x0002f227) bg_popup_trans_pane_g7

0x6186,	// (0x0002f22f) bg_popup_trans_pane_g8

0xd51a,	// (0x000365c3) bg_popup_trans_pane_g9

0x0008,

0xf810,	// (0x000388b9) bg_popup_trans_pane_g

0x618e,	// (0x0002f237) cell_image3_tool_bar_pane_ParamLimits

0x618e,	// (0x0002f237) cell_image3_tool_bar_pane

0xd0a2,	// (0x0003614b) cell_image3_tool_bar_pane_g1

0xc963,	// (0x00035a0c) bg_popup_trans_pane_cp1

0x61a2,	// (0x0002f24b) popup_image3_note_pane_t1

0x61b0,	// (0x0002f259) popup_image3_note_pane_t2

0x61be,	// (0x0002f267) popup_image3_note_pane_t3

0x0002,

0xf823,	// (0x000388cc) popup_image3_note_pane_t

0x61cc,	// (0x0002f275) popup_image3_note_pane_t3_copy1

0x61da,	// (0x0002f283) bg_myfav_hc_instruction_pane_ParamLimits

0x61da,	// (0x0002f283) bg_myfav_hc_instruction_pane

0x61ee,	// (0x0002f297) cell_myfav_contact_pane_ParamLimits

0x61ee,	// (0x0002f297) cell_myfav_contact_pane

0x620c,	// (0x0002f2b5) cell_myfav_contact_pane_cp1_ParamLimits

0x620c,	// (0x0002f2b5) cell_myfav_contact_pane_cp1

0x6224,	// (0x0002f2cd) cell_myfav_contact_pane_cp2_ParamLimits

0x6224,	// (0x0002f2cd) cell_myfav_contact_pane_cp2

0x623c,	// (0x0002f2e5) cell_myfav_contact_pane_cp3_ParamLimits

0x623c,	// (0x0002f2e5) cell_myfav_contact_pane_cp3

0x6253,	// (0x0002f2fc) cell_myfav_contact_pane_cp4_ParamLimits

0x6253,	// (0x0002f2fc) cell_myfav_contact_pane_cp4

0x626b,	// (0x0002f314) cell_myfav_contact_pane_cp5_ParamLimits

0x626b,	// (0x0002f314) cell_myfav_contact_pane_cp5

0x627f,	// (0x0002f328) cell_myfav_contact_pane_cp6_ParamLimits

0x627f,	// (0x0002f328) cell_myfav_contact_pane_cp6

0x6295,	// (0x0002f33e) cell_myfav_contact_pane_cp7_ParamLimits

0x6295,	// (0x0002f33e) cell_myfav_contact_pane_cp7

0x62af,	// (0x0002f358) listscroll_gen_pane_cp05

0x62b8,	// (0x0002f361) main_myfav_hc_pane_g1_ParamLimits

0x62b8,	// (0x0002f361) main_myfav_hc_pane_g1

0x62d2,	// (0x0002f37b) main_myfav_hc_pane_g2_ParamLimits

0x62d2,	// (0x0002f37b) main_myfav_hc_pane_g2

0x0002,

0xf82a,	// (0x000388d3) main_myfav_hc_pane_g_ParamLimits

0xf82a,	// (0x000388d3) main_myfav_hc_pane_g

0x6304,	// (0x0002f3ad) main_myfav_hc_pane_t1_ParamLimits

0x6304,	// (0x0002f3ad) main_myfav_hc_pane_t1

0x631b,	// (0x0002f3c4) main_myfav_hc_pane_t2_ParamLimits

0x631b,	// (0x0002f3c4) main_myfav_hc_pane_t2

0x632d,	// (0x0002f3d6) main_myfav_hc_pane_t3_ParamLimits

0x632d,	// (0x0002f3d6) main_myfav_hc_pane_t3

0x633f,	// (0x0002f3e8) main_myfav_hc_pane_t4_ParamLimits

0x633f,	// (0x0002f3e8) main_myfav_hc_pane_t4

0x0004,

0xf831,	// (0x000388da) main_myfav_hc_pane_t_ParamLimits

0xf831,	// (0x000388da) main_myfav_hc_pane_t

0xd0a2,	// (0x0003614b) bg_myfav_hc_instruction_pane_g1

0x6367,	// (0x0002f410) cell_myfav_contact_pane_g1_ParamLimits

0x6367,	// (0x0002f410) cell_myfav_contact_pane_g1

0x6367,	// (0x0002f410) cell_myfav_contact_pane_g2_ParamLimits

0x6367,	// (0x0002f410) cell_myfav_contact_pane_g2

0x6373,	// (0x0002f41c) cell_myfav_contact_pane_g3_ParamLimits

0x6373,	// (0x0002f41c) cell_myfav_contact_pane_g3

0xd072,	// (0x0003611b) cell_myfav_contact_pane_g4_ParamLimits

0xd072,	// (0x0003611b) cell_myfav_contact_pane_g4

0x6380,	// (0x0002f429) cell_myfav_contact_pane_g5_ParamLimits

0x6380,	// (0x0002f429) cell_myfav_contact_pane_g5

0x0004,

0xf83c,	// (0x000388e5) cell_myfav_contact_pane_g_ParamLimits

0xf83c,	// (0x000388e5) cell_myfav_contact_pane_g

0x62ec,	// (0x0002f395) main_myfav_hc_pane_g3_ParamLimits

0x62ec,	// (0x0002f395) main_myfav_hc_pane_g3

0x09ce,	// (0x00029a77) popup_adpt_find_window

0x638c,	// (0x0002f435) afind_page_pane_ParamLimits

0x638c,	// (0x0002f435) afind_page_pane

0x63a1,	// (0x0002f44a) aid_size_cell_afind_ParamLimits

0x63a1,	// (0x0002f44a) aid_size_cell_afind

0x63bf,	// (0x0002f468) bg_popup_sub_pane_cp09_ParamLimits

0x63bf,	// (0x0002f468) bg_popup_sub_pane_cp09

0x63cc,	// (0x0002f475) find_pane_cp01_ParamLimits

0x63cc,	// (0x0002f475) find_pane_cp01

0x63d9,	// (0x0002f482) grid_afind_control_pane_ParamLimits

0x63d9,	// (0x0002f482) grid_afind_control_pane

0x63ed,	// (0x0002f496) grid_afind_pane_ParamLimits

0x63ed,	// (0x0002f496) grid_afind_pane

0x640f,	// (0x0002f4b8) cell_afind_pane_ParamLimits

0x640f,	// (0x0002f4b8) cell_afind_pane

0xd0a2,	// (0x0003614b) afind_page_pane_g1

0x6476,	// (0x0002f51f) afind_page_pane_g2

0x647e,	// (0x0002f527) afind_page_pane_g3

0x0002,

0xf847,	// (0x000388f0) afind_page_pane_g

0x6486,	// (0x0002f52f) afind_page_pane_t1

0x64a6,	// (0x0002f54f) cell_afind_grid_control_pane_ParamLimits

0x64a6,	// (0x0002f54f) cell_afind_grid_control_pane

0x64b5,	// (0x0002f55e) bg_button_pane_cp69_ParamLimits

0x64b5,	// (0x0002f55e) bg_button_pane_cp69

0x64c1,	// (0x0002f56a) cell_afind_pane_g1_ParamLimits

0x64c1,	// (0x0002f56a) cell_afind_pane_g1

0x64ce,	// (0x0002f577) cell_afind_pane_t1_ParamLimits

0x64ce,	// (0x0002f577) cell_afind_pane_t1

0x64e0,	// (0x0002f589) bg_button_pane_cp72

0x64e8,	// (0x0002f591) cell_afind_grid_control_pane_g1

0x3f62,	// (0x0002d00b) aid_image_placing_area_ParamLimits

0x3f62,	// (0x0002d00b) aid_image_placing_area

0xd064,	// (0x0003610d) field_vitu_entry_pane_g1_ParamLimits

0xd064,	// (0x0003610d) field_vitu_entry_pane_g1

0xd064,	// (0x0003610d) field_vitu_entry_pane_g2_ParamLimits

0xd064,	// (0x0003610d) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x00038242) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x00038242) field_vitu_entry_pane_g

0x5d29,	// (0x0002edd2) cell_vitu_itu_pane_g1_ParamLimits

0x5d0c,	// (0x0002edb5) cell_vitu_itu_pane_t3_ParamLimits

0x5d0c,	// (0x0002edb5) cell_vitu_itu_pane_t3

0x5f7d,	// (0x0002f026) mp4_progress_pane_t1_ParamLimits

0x5f9c,	// (0x0002f045) mp4_progress_pane_t2_ParamLimits

0xf78d,	// (0x00038836) mp4_progress_pane_t_ParamLimits

0x5fbb,	// (0x0002f064) mup_progress_pane_cp04_ParamLimits

0x6353,	// (0x0002f3fc) main_myfav_hc_pane_t5_ParamLimits

0x6353,	// (0x0002f3fc) main_myfav_hc_pane_t5

0xaf47,	// (0x00033ff0) aid_zoom_text_primary

0x09ce,	// (0x00029a77) popup_adpt_find_window_ParamLimits

0xaf90,	// (0x00034039) main_cam_set_pane

0x163e,	// (0x0002a6e7) cam4_zoom_pane_ParamLimits

0x163e,	// (0x0002a6e7) cam4_zoom_pane

0x64f1,	// (0x0002f59a) main_cam_set_pane_g1_ParamLimits

0x64f1,	// (0x0002f59a) main_cam_set_pane_g1

0x64ff,	// (0x0002f5a8) main_cam_set_pane_g2_ParamLimits

0x64ff,	// (0x0002f5a8) main_cam_set_pane_g2

0x0001,

0xf84e,	// (0x000388f7) main_cam_set_pane_g_ParamLimits

0xf84e,	// (0x000388f7) main_cam_set_pane_g

0x6520,	// (0x0002f5c9) main_cam_set_pane_t1_ParamLimits

0x6520,	// (0x0002f5c9) main_cam_set_pane_t1

0x653b,	// (0x0002f5e4) main_cset_listscroll_pane_ParamLimits

0x653b,	// (0x0002f5e4) main_cset_listscroll_pane

0x6561,	// (0x0002f60a) main_cset_slider_pane_ParamLimits

0x6561,	// (0x0002f60a) main_cset_slider_pane

0x658f,	// (0x0002f638) main_cset_list_pane_ParamLimits

0x658f,	// (0x0002f638) main_cset_list_pane

0x659f,	// (0x0002f648) scroll_pane_cp028

0x65a8,	// (0x0002f651) aid_area_touch_slider

0x65c4,	// (0x0002f66d) cset_slider_pane

0x65e7,	// (0x0002f690) main_cset_slider_pane_g1

0x65fc,	// (0x0002f6a5) main_cset_slider_pane_g2

0x0011,

0xf853,	// (0x000388fc) main_cset_slider_pane_g

0x66e8,	// (0x0002f791) main_cset_slider_pane_t1

0x6710,	// (0x0002f7b9) main_cset_slider_pane_t2

0x672a,	// (0x0002f7d3) main_cset_slider_pane_t3

0x6744,	// (0x0002f7ed) main_cset_slider_pane_t4

0x675e,	// (0x0002f807) main_cset_slider_pane_t5

0x6778,	// (0x0002f821) main_cset_slider_pane_t6

0x678d,	// (0x0002f836) main_cset_slider_pane_t7

0x000e,

0xf878,	// (0x00038921) main_cset_slider_pane_t

0x6903,	// (0x0002f9ac) cset_list_set_pane_ParamLimits

0x6903,	// (0x0002f9ac) cset_list_set_pane

0x6915,	// (0x0002f9be) aid_position_infowindow_above

0x691d,	// (0x0002f9c6) aid_position_infowindow_below

0x6925,	// (0x0002f9ce) cset_list_set_pane_g1_ParamLimits

0x6925,	// (0x0002f9ce) cset_list_set_pane_g1

0x6931,	// (0x0002f9da) cset_list_set_pane_g3_ParamLimits

0x6931,	// (0x0002f9da) cset_list_set_pane_g3

0x0001,

0xf897,	// (0x00038940) cset_list_set_pane_g_ParamLimits

0xf897,	// (0x00038940) cset_list_set_pane_g

0x6940,	// (0x0002f9e9) cset_list_set_pane_t1_ParamLimits

0x6940,	// (0x0002f9e9) cset_list_set_pane_t1

0xcf51,	// (0x00035ffa) list_highlight_pane_cp021_ParamLimits

0xcf51,	// (0x00035ffa) list_highlight_pane_cp021

0xde55,	// (0x00036efe) cset_slider_pane_g1

0xde67,	// (0x00036f10) cset_slider_pane_g2

0xde5e,	// (0x00036f07) cset_slider_pane_g3

0x0002,

0x02e0,	// (0x00029389) cset_slider_pane_g

0xb65a,	// (0x00034703) aid_area_touch_cam4_zoom

0xb662,	// (0x0003470b) cam4_zoom_cont_pane

0xb66a,	// (0x00034713) cam4_zoom_pane_g1

0xb672,	// (0x0003471b) cam4_zoom_pane_g2

0x1b52,	// (0x0002abfb) cam4_zoom_pane_g3

0x0002,

0xf89c,	// (0x00038945) cam4_zoom_pane_g

0xb67a,	// (0x00034723) cam4_zoom_cont_pane_g1

0xb683,	// (0x0003472c) cam4_zoom_cont_pane_g2

0xb68c,	// (0x00034735) cam4_zoom_cont_pane_g3

0x0002,

0xf8a3,	// (0x0003894c) cam4_zoom_cont_pane_g

0x147b,	// (0x0002a524) call4_image_pane_ParamLimits

0x147b,	// (0x0002a524) call4_image_pane

0x14e2,	// (0x0002a58b) call4_windows_conf_pane_ParamLimits

0x1527,	// (0x0002a5d0) popup_call4_audio_in_window_ParamLimits

0x1527,	// (0x0002a5d0) popup_call4_audio_in_window

0xc963,	// (0x00035a0c) bg_popup_call2_act_pane_cp02

0x6079,	// (0x0002f122) call4_list_conf_pane

0xd0a2,	// (0x0003614b) call4_image_pane_g1

0xd0a2,	// (0x0003614b) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00038135) call4_image_pane_g

0x6955,	// (0x0002f9fe) list_single_graphic_popup_conf4_pane_ParamLimits

0x6955,	// (0x0002f9fe) list_single_graphic_popup_conf4_pane

0xc963,	// (0x00035a0c) list_highlight_pane_cp022

0x6968,	// (0x0002fa11) list_single_graphic_popup_conf4_pane_g1

0xda19,	// (0x00036ac2) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8aa,	// (0x00038953) list_single_graphic_popup_conf4_pane_g

0x6970,	// (0x0002fa19) list_single_graphic_popup_conf4_pane_t1

0x26e2,	// (0x0002b78b) popup_vtel_slider_window_ParamLimits

0x26e2,	// (0x0002b78b) popup_vtel_slider_window

0x600c,	// (0x0002f0b5) dialer2_ne_pane_t2_ParamLimits

0x600c,	// (0x0002f0b5) dialer2_ne_pane_t2

0x0001,

0xf792,	// (0x0003883b) dialer2_ne_pane_t_ParamLimits

0xf792,	// (0x0003883b) dialer2_ne_pane_t

0x48a8,	// (0x0002d951) bg_popup_sub_pane_cp010_ParamLimits

0x48a8,	// (0x0002d951) bg_popup_sub_pane_cp010

0x6986,	// (0x0002fa2f) popup_vtel_slider_window_g1_ParamLimits

0x6986,	// (0x0002fa2f) popup_vtel_slider_window_g1

0x6999,	// (0x0002fa42) popup_vtel_slider_window_g2_ParamLimits

0x6999,	// (0x0002fa42) popup_vtel_slider_window_g2

0x0003,

0xf8af,	// (0x00038958) popup_vtel_slider_window_g_ParamLimits

0xf8af,	// (0x00038958) popup_vtel_slider_window_g

0x69ef,	// (0x0002fa98) vtel_slider_pane_ParamLimits

0x69ef,	// (0x0002fa98) vtel_slider_pane

0x6a11,	// (0x0002faba) vtel_slider_pane_g1_ParamLimits

0x6a11,	// (0x0002faba) vtel_slider_pane_g1

0x6a25,	// (0x0002face) vtel_slider_pane_g2_ParamLimits

0x6a25,	// (0x0002face) vtel_slider_pane_g2

0x6a3d,	// (0x0002fae6) vtel_slider_pane_g3_ParamLimits

0x6a3d,	// (0x0002fae6) vtel_slider_pane_g3

0x6a11,	// (0x0002faba) vtel_slider_pane_g4_ParamLimits

0x6a11,	// (0x0002faba) vtel_slider_pane_g4

0x6a53,	// (0x0002fafc) vtel_slider_pane_g5_ParamLimits

0x6a53,	// (0x0002fafc) vtel_slider_pane_g5

0x0004,

0xf8b8,	// (0x00038961) vtel_slider_pane_g_ParamLimits

0xf8b8,	// (0x00038961) vtel_slider_pane_g

0xaf90,	// (0x00034039) main_gallery2_pane

0x180a,	// (0x0002a8b3) aid_size_row_itut2_dropdow_list_ParamLimits

0x180a,	// (0x0002a8b3) aid_size_row_itut2_dropdow_list

0x1896,	// (0x0002a93f) grid_vitu2_function_top_pane_ParamLimits

0x1896,	// (0x0002a93f) grid_vitu2_function_top_pane

0x1900,	// (0x0002a9a9) popup_vitu2_dropdown_list_window_ParamLimits

0x1900,	// (0x0002a9a9) popup_vitu2_dropdown_list_window

0x1927,	// (0x0002a9d0) popup_vitu2_match_list_window

0x1b5a,	// (0x0002ac03) cell_vitu2_function_top_pane_ParamLimits

0x1b5a,	// (0x0002ac03) cell_vitu2_function_top_pane

0x1b72,	// (0x0002ac1b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1b72,	// (0x0002ac1b) cell_vitu2_function_top_pane_cp01

0x1b8e,	// (0x0002ac37) cell_vitu2_function_top_wide_pane_ParamLimits

0x1b8e,	// (0x0002ac37) cell_vitu2_function_top_wide_pane

0xaf90,	// (0x00034039) bg_button_pane_cp012

0x1bac,	// (0x0002ac55) cell_vitu2_function_top_pane_g1

0xb695,	// (0x0003473e) bg_button_pane_cp013_ParamLimits

0xb695,	// (0x0003473e) bg_button_pane_cp013

0x6a69,	// (0x0002fb12) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6a69,	// (0x0002fb12) cell_vitu2_function_top_wide_pane_g1

0xaf90,	// (0x00034039) bg_popup_sub_pane_cp20

0x1bc0,	// (0x0002ac69) list_vitu2_match_list_pane

0x6156,	// (0x0002f1ff) bg_popup_sub_pane_cp20_g1

0x615e,	// (0x0002f207) bg_popup_sub_pane_cp20_g2

0xd53a,	// (0x000365e3) bg_popup_sub_pane_cp20_g3

0x6166,	// (0x0002f20f) bg_popup_sub_pane_cp20_g4

0xd51a,	// (0x000365c3) bg_popup_sub_pane_cp20_g5

0x6a81,	// (0x0002fb2a) bg_popup_sub_pane_cp20_g6

0x6176,	// (0x0002f21f) bg_popup_sub_pane_cp20_g7

0x617e,	// (0x0002f227) bg_popup_sub_pane_cp20_g8

0x6186,	// (0x0002f22f) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8c3,	// (0x0003896c) bg_popup_sub_pane_cp20_g

0xb6b1,	// (0x0003475a) list_vitu2_match_list_item_pane_ParamLimits

0xb6b1,	// (0x0003475a) list_vitu2_match_list_item_pane

0xb6c3,	// (0x0003476c) list_vitu2_match_list_item_pane_t1

0xaf9e,	// (0x00034047) bg_popup_sub_pane_cp21

0xd318,	// (0x000363c1) grid_vitu2_dropdown_list_pane

0x1bd8,	// (0x0002ac81) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1bd8,	// (0x0002ac81) cell_vitu2_dropdown_list_char_pane

0x1bf8,	// (0x0002aca1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1bf8,	// (0x0002aca1) cell_vitu2_dropdown_list_ctrl_pane

0x6a89,	// (0x0002fb32) cell_vitu2_dropdown_list_char_pane_g1

0x6a92,	// (0x0002fb3b) cell_vitu2_dropdown_list_char_pane_g2

0x6a9b,	// (0x0002fb44) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8d6,	// (0x0003897f) cell_vitu2_dropdown_list_char_pane_g

0x1c20,	// (0x0002acc9) cell_vitu2_dropdown_list_char_pane_t1

0x6aa4,	// (0x0002fb4d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6aa4,	// (0x0002fb4d) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6ab1,	// (0x0002fb5a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6ab1,	// (0x0002fb5a) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6abe,	// (0x0002fb67) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6abe,	// (0x0002fb67) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1c2e,	// (0x0002acd7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1c2e,	// (0x0002acd7) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb57b,	// (0x00034624) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb57b,	// (0x00034624) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8dd,	// (0x00038986) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8dd,	// (0x00038986) cell_vitu2_dropdown_list_ctrl_pane_g

0x6acb,	// (0x0002fb74) aid_size_cell_gallery2_ParamLimits

0x6acb,	// (0x0002fb74) aid_size_cell_gallery2

0x6ae9,	// (0x0002fb92) grid_gallery2_pane_ParamLimits

0x6ae9,	// (0x0002fb92) grid_gallery2_pane

0x6b03,	// (0x0002fbac) scroll_pane_cp029_ParamLimits

0x6b03,	// (0x0002fbac) scroll_pane_cp029

0x6b14,	// (0x0002fbbd) cell_gallery2_pane_ParamLimits

0x6b14,	// (0x0002fbbd) cell_gallery2_pane

0x6b73,	// (0x0002fc1c) cell_gallery2_pane_g2

0x6b7b,	// (0x0002fc24) cell_gallery2_pane_g3

0x6b83,	// (0x0002fc2c) cell_gallery2_pane_g4

0x6b8b,	// (0x0002fc34) cell_gallery2_pane_g5

0xd318,	// (0x000363c1) grid_highlight_pane_cp10

0x1927,	// (0x0002a9d0) popup_vitu2_match_list_window_ParamLimits

0x193c,	// (0x0002a9e5) popup_vitu2_query_window_ParamLimits

0x193c,	// (0x0002a9e5) popup_vitu2_query_window

0xaf9e,	// (0x00034047) bg_vitu2_candi_button_pane

0x6a89,	// (0x0002fb32) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x6a92,	// (0x0002fb3b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x6a9b,	// (0x0002fb44) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6b93,	// (0x0002fc3c) bg_button_pane_cp015

0x6ba4,	// (0x0002fc4d) bg_button_pane_cp016

0x6bb0,	// (0x0002fc59) bg_button_pane_cp017

0xdde5,	// (0x00036e8e) bg_popup_sub_pane_cp22

0x6bee,	// (0x0002fc97) popup_vitu2_query_window_g1

0x6bfa,	// (0x0002fca3) popup_vitu2_query_window_g2

0x0002,

0xf8e8,	// (0x00038991) popup_vitu2_query_window_g

0x6c1c,	// (0x0002fcc5) popup_vitu2_query_window_t1_ParamLimits

0x6c1c,	// (0x0002fcc5) popup_vitu2_query_window_t1

0x6c4f,	// (0x0002fcf8) popup_vitu2_query_window_t2_ParamLimits

0x6c4f,	// (0x0002fcf8) popup_vitu2_query_window_t2

0x6c61,	// (0x0002fd0a) popup_vitu2_query_window_t3_ParamLimits

0x6c61,	// (0x0002fd0a) popup_vitu2_query_window_t3

0x6c89,	// (0x0002fd32) popup_vitu2_query_window_t4_ParamLimits

0x6c89,	// (0x0002fd32) popup_vitu2_query_window_t4

0x6c9d,	// (0x0002fd46) popup_vitu2_query_window_t5_ParamLimits

0x6c9d,	// (0x0002fd46) popup_vitu2_query_window_t5

0x0006,

0xf8ef,	// (0x00038998) popup_vitu2_query_window_t_ParamLimits

0xf8ef,	// (0x00038998) popup_vitu2_query_window_t

0x6587,	// (0x0002f630) main_cset_text_pane

0x65a8,	// (0x0002f651) aid_area_touch_slider_ParamLimits

0x65c4,	// (0x0002f66d) cset_slider_pane_ParamLimits

0x65e7,	// (0x0002f690) main_cset_slider_pane_g1_ParamLimits

0x65fc,	// (0x0002f6a5) main_cset_slider_pane_g2_ParamLimits

0x6611,	// (0x0002f6ba) main_cset_slider_pane_g3_ParamLimits

0x6611,	// (0x0002f6ba) main_cset_slider_pane_g3

0x661d,	// (0x0002f6c6) main_cset_slider_pane_g4_ParamLimits

0x661d,	// (0x0002f6c6) main_cset_slider_pane_g4

0x662c,	// (0x0002f6d5) main_cset_slider_pane_g5_ParamLimits

0x662c,	// (0x0002f6d5) main_cset_slider_pane_g5

0x6638,	// (0x0002f6e1) main_cset_slider_pane_g6_ParamLimits

0x6638,	// (0x0002f6e1) main_cset_slider_pane_g6

0xf853,	// (0x000388fc) main_cset_slider_pane_g_ParamLimits

0x66e8,	// (0x0002f791) main_cset_slider_pane_t1_ParamLimits

0x6710,	// (0x0002f7b9) main_cset_slider_pane_t2_ParamLimits

0x672a,	// (0x0002f7d3) main_cset_slider_pane_t3_ParamLimits

0x6744,	// (0x0002f7ed) main_cset_slider_pane_t4_ParamLimits

0x675e,	// (0x0002f807) main_cset_slider_pane_t5_ParamLimits

0x6778,	// (0x0002f821) main_cset_slider_pane_t6_ParamLimits

0x678d,	// (0x0002f836) main_cset_slider_pane_t7_ParamLimits

0x67b7,	// (0x0002f860) main_cset_slider_pane_t8_ParamLimits

0x67b7,	// (0x0002f860) main_cset_slider_pane_t8

0x67df,	// (0x0002f888) main_cset_slider_pane_t9_ParamLimits

0x67df,	// (0x0002f888) main_cset_slider_pane_t9

0x6807,	// (0x0002f8b0) main_cset_slider_pane_t10_ParamLimits

0x6807,	// (0x0002f8b0) main_cset_slider_pane_t10

0x682f,	// (0x0002f8d8) main_cset_slider_pane_t11_ParamLimits

0x682f,	// (0x0002f8d8) main_cset_slider_pane_t11

0x6857,	// (0x0002f900) main_cset_slider_pane_t12_ParamLimits

0x6857,	// (0x0002f900) main_cset_slider_pane_t12

0x6874,	// (0x0002f91d) main_cset_slider_pane_t13_ParamLimits

0x6874,	// (0x0002f91d) main_cset_slider_pane_t13

0xf878,	// (0x00038921) main_cset_slider_pane_t_ParamLimits

0xc963,	// (0x00035a0c) bg_popup_sub_pane_cp011

0x6d07,	// (0x0002fdb0) main_cset_text_pane_g1

0x6d0f,	// (0x0002fdb8) main_cset_text_pane_t1

0x6d1d,	// (0x0002fdc6) main_cset_text_pane_t2

0x6d2b,	// (0x0002fdd4) main_cset_text_pane_t3

0x6d39,	// (0x0002fde2) main_cset_text_pane_t4

0x6d47,	// (0x0002fdf0) main_cset_text_pane_t5

0x6d55,	// (0x0002fdfe) main_cset_text_pane_t6

0x6d63,	// (0x0002fe0c) main_cset_text_pane_t7

0x0006,

0xf8fe,	// (0x000389a7) main_cset_text_pane_t

0xaf9e,	// (0x00034047) main_cam4_burst_pane

0xaf9e,	// (0x00034047) main_cam5_pane

0x6494,	// (0x0002f53d) bg_button_pane_cp019

0x649d,	// (0x0002f546) bg_button_pane_cp020

0x664c,	// (0x0002f6f5) main_cset_slider_pane_g7_ParamLimits

0x664c,	// (0x0002f6f5) main_cset_slider_pane_g7

0x6658,	// (0x0002f701) main_cset_slider_pane_g8_ParamLimits

0x6658,	// (0x0002f701) main_cset_slider_pane_g8

0x6664,	// (0x0002f70d) main_cset_slider_pane_g9_ParamLimits

0x6664,	// (0x0002f70d) main_cset_slider_pane_g9

0x6670,	// (0x0002f719) main_cset_slider_pane_g10_ParamLimits

0x6670,	// (0x0002f719) main_cset_slider_pane_g10

0x667c,	// (0x0002f725) main_cset_slider_pane_g11_ParamLimits

0x667c,	// (0x0002f725) main_cset_slider_pane_g11

0x6688,	// (0x0002f731) main_cset_slider_pane_g12_ParamLimits

0x6688,	// (0x0002f731) main_cset_slider_pane_g12

0x6694,	// (0x0002f73d) main_cset_slider_pane_g13_ParamLimits

0x6694,	// (0x0002f73d) main_cset_slider_pane_g13

0x66a0,	// (0x0002f749) main_cset_slider_pane_g14_ParamLimits

0x66a0,	// (0x0002f749) main_cset_slider_pane_g14

0x66ac,	// (0x0002f755) main_cset_slider_pane_g15_ParamLimits

0x66ac,	// (0x0002f755) main_cset_slider_pane_g15

0x6891,	// (0x0002f93a) main_cset_slider_pane_t14_ParamLimits

0x6891,	// (0x0002f93a) main_cset_slider_pane_t14

0x68ca,	// (0x0002f973) main_cset_slider_pane_t15_ParamLimits

0x68ca,	// (0x0002f973) main_cset_slider_pane_t15

0x6d71,	// (0x0002fe1a) aid_cam4_burst_size_cell_ParamLimits

0x6d71,	// (0x0002fe1a) aid_cam4_burst_size_cell

0x6d91,	// (0x0002fe3a) grid_cam4_burst_pane_ParamLimits

0x6d91,	// (0x0002fe3a) grid_cam4_burst_pane

0x6dc9,	// (0x0002fe72) linegrid_cam4_burst_pane_ParamLimits

0x6dc9,	// (0x0002fe72) linegrid_cam4_burst_pane

0x6ded,	// (0x0002fe96) scroll_pane_cp30_ParamLimits

0x6ded,	// (0x0002fe96) scroll_pane_cp30

0x6df9,	// (0x0002fea2) cell_cam4_burst_pane_ParamLimits

0x6df9,	// (0x0002fea2) cell_cam4_burst_pane

0x6e46,	// (0x0002feef) linegrid_cam4_burst_pane_g1_ParamLimits

0x6e46,	// (0x0002feef) linegrid_cam4_burst_pane_g1

0x6e53,	// (0x0002fefc) linegrid_cam4_burst_pane_g2_ParamLimits

0x6e53,	// (0x0002fefc) linegrid_cam4_burst_pane_g2

0x6e64,	// (0x0002ff0d) linegrid_cam4_burst_pane_g3_ParamLimits

0x6e64,	// (0x0002ff0d) linegrid_cam4_burst_pane_g3

0x0002,

0xf90d,	// (0x000389b6) linegrid_cam4_burst_pane_g_ParamLimits

0xf90d,	// (0x000389b6) linegrid_cam4_burst_pane_g

0x6e71,	// (0x0002ff1a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6e71,	// (0x0002ff1a) linegrid_cam4_burst_pane_g3_copy1

0x6e8b,	// (0x0002ff34) linegrid_cam4_burst_pane_g4_ParamLimits

0x6e8b,	// (0x0002ff34) linegrid_cam4_burst_pane_g4

0x6e98,	// (0x0002ff41) linegrid_cam4_burst_pane_g5_ParamLimits

0x6e98,	// (0x0002ff41) linegrid_cam4_burst_pane_g5

0x6ea9,	// (0x0002ff52) linegrid_cam4_burst_pane_g6_ParamLimits

0x6ea9,	// (0x0002ff52) linegrid_cam4_burst_pane_g6

0x6ec0,	// (0x0002ff69) linegrid_cam4_burst_pane_g7_ParamLimits

0x6ec0,	// (0x0002ff69) linegrid_cam4_burst_pane_g7

0x6ecd,	// (0x0002ff76) cell_cam4_burst_pane_g1

0x6eec,	// (0x0002ff95) main_cam5_pane_t1_ParamLimits

0x6eec,	// (0x0002ff95) main_cam5_pane_t1

0x6efe,	// (0x0002ffa7) main_cam5_pane_t2_ParamLimits

0x6efe,	// (0x0002ffa7) main_cam5_pane_t2

0x6f10,	// (0x0002ffb9) main_cam5_pane_t3_ParamLimits

0x6f10,	// (0x0002ffb9) main_cam5_pane_t3

0x6f22,	// (0x0002ffcb) main_cam5_pane_t4_ParamLimits

0x6f22,	// (0x0002ffcb) main_cam5_pane_t4

0x6f3a,	// (0x0002ffe3) main_cam5_pane_t5_ParamLimits

0x6f3a,	// (0x0002ffe3) main_cam5_pane_t5

0x6f4e,	// (0x0002fff7) main_cam5_pane_t6_ParamLimits

0x6f4e,	// (0x0002fff7) main_cam5_pane_t6

0x6f62,	// (0x0003000b) main_cam5_pane_t7_ParamLimits

0x6f62,	// (0x0003000b) main_cam5_pane_t7

0x6f74,	// (0x0003001d) main_cam5_pane_t8_ParamLimits

0x6f74,	// (0x0003001d) main_cam5_pane_t8

0x6f90,	// (0x00030039) main_cam5_pane_t9_ParamLimits

0x6f90,	// (0x00030039) main_cam5_pane_t9

0x6fa2,	// (0x0003004b) main_cam5_pane_t10_ParamLimits

0x6fa2,	// (0x0003004b) main_cam5_pane_t10

0x6fb4,	// (0x0003005d) main_cam5_pane_t11_ParamLimits

0x6fb4,	// (0x0003005d) main_cam5_pane_t11

0x6fc6,	// (0x0003006f) main_cam5_pane_t12_ParamLimits

0x6fc6,	// (0x0003006f) main_cam5_pane_t12

0x6fdb,	// (0x00030084) main_cam5_pane_t13_ParamLimits

0x6fdb,	// (0x00030084) main_cam5_pane_t13

0x000c,

0xf919,	// (0x000389c2) main_cam5_pane_t_ParamLimits

0xf919,	// (0x000389c2) main_cam5_pane_t

0x0a4f,	// (0x00029af8) popup_scut_keymap_window_ParamLimits

0x0a4f,	// (0x00029af8) popup_scut_keymap_window

0x6ff8,	// (0x000300a1) aid_size_cell_brow_shortcut

0xd318,	// (0x000363c1) bg_popup_window_pane_cp010

0x7004,	// (0x000300ad) grid_scut_pane

0x7010,	// (0x000300b9) cell_scut_pane_ParamLimits

0x7010,	// (0x000300b9) cell_scut_pane

0x7027,	// (0x000300d0) cell_scut_pane_g1

0x7030,	// (0x000300d9) cell_scut_pane_t1

0x703f,	// (0x000300e8) cell_scut_pane_t2

0x704e,	// (0x000300f7) cell_scut_pane_t3

0x0002,

0xf934,	// (0x000389dd) cell_scut_pane_t

0x51a3,	// (0x0002e24c) main_mup3_pane_g8_ParamLimits

0x51a3,	// (0x0002e24c) main_mup3_pane_g8

0x1822,	// (0x0002a8cb) area_vitu2_query_pane_ParamLimits

0x1822,	// (0x0002a8cb) area_vitu2_query_pane

0x6bbc,	// (0x0002fc65) input_focus_pane_cp08

0x705c,	// (0x00030105) area_vitu2_query_pane_g1

0x7068,	// (0x00030111) area_vitu2_query_pane_g2

0x0001,

0xf93b,	// (0x000389e4) area_vitu2_query_pane_g

0x7077,	// (0x00030120) area_vitu2_query_pane_t1_ParamLimits

0x7077,	// (0x00030120) area_vitu2_query_pane_t1

0x708b,	// (0x00030134) area_vitu2_query_pane_t2_ParamLimits

0x708b,	// (0x00030134) area_vitu2_query_pane_t2

0x709f,	// (0x00030148) area_vitu2_query_pane_t3_ParamLimits

0x709f,	// (0x00030148) area_vitu2_query_pane_t3

0x70c7,	// (0x00030170) area_vitu2_query_pane_t4_ParamLimits

0x70c7,	// (0x00030170) area_vitu2_query_pane_t4

0x70ef,	// (0x00030198) area_vitu2_query_pane_t5_ParamLimits

0x70ef,	// (0x00030198) area_vitu2_query_pane_t5

0x7117,	// (0x000301c0) area_vitu2_query_pane_t6_ParamLimits

0x7117,	// (0x000301c0) area_vitu2_query_pane_t6

0x0006,

0xf940,	// (0x000389e9) area_vitu2_query_pane_t_ParamLimits

0xf940,	// (0x000389e9) area_vitu2_query_pane_t

0x7163,	// (0x0003020c) bg_button_pane_cp018

0x716f,	// (0x00030218) bg_button_pane_cp021

0x717b,	// (0x00030224) bg_button_pane_cp022

0x719a,	// (0x00030243) input_focus_pane_cp09

0xdb55,	// (0x00036bfe) aid_size_touch_mv_arrow_left

0xdb7e,	// (0x00036c27) aid_size_touch_mv_arrow_right

0x66c4,	// (0x0002f76d) main_cset_slider_pane_g16_ParamLimits

0x66c4,	// (0x0002f76d) main_cset_slider_pane_g16

0x66d0,	// (0x0002f779) main_cset_slider_pane_g17_ParamLimits

0x66d0,	// (0x0002f779) main_cset_slider_pane_g17

0x6ecd,	// (0x0002ff76) cell_cam4_burst_pane_g1_ParamLimits

0xc963,	// (0x00035a0c) compa_mode_pane

0x69a9,	// (0x0002fa52) popup_vtel_slider_window_g3_ParamLimits

0x69a9,	// (0x0002fa52) popup_vtel_slider_window_g3

0x69c0,	// (0x0002fa69) popup_vtel_slider_window_g4_ParamLimits

0x69c0,	// (0x0002fa69) popup_vtel_slider_window_g4

0x69d7,	// (0x0002fa80) popup_vtel_slider_window_t1_ParamLimits

0x69d7,	// (0x0002fa80) popup_vtel_slider_window_t1

0xaf9e,	// (0x00034047) main_cl_pane

0xb104,	// (0x000341ad) popup_imed_adjust2_window_ParamLimits

0xdde5,	// (0x00036e8e) bg_tb_trans_pane_cp05_ParamLimits

0x5ba5,	// (0x0002ec4e) popup_imed_adjust2_window_g1_ParamLimits

0x5bb4,	// (0x0002ec5d) popup_imed_adjust2_window_g2_ParamLimits

0x5bb4,	// (0x0002ec5d) popup_imed_adjust2_window_g2

0x5bc0,	// (0x0002ec69) popup_imed_adjust2_window_g3_ParamLimits

0x5bc0,	// (0x0002ec69) popup_imed_adjust2_window_g3

0x0002,

0xf6cc,	// (0x00038775) popup_imed_adjust2_window_g_ParamLimits

0xf6cc,	// (0x00038775) popup_imed_adjust2_window_g

0x5bcc,	// (0x0002ec75) popup_imed_adjust2_window_t1_ParamLimits

0x5be4,	// (0x0002ec8d) slider_imed_adjust_pane_ParamLimits

0x5bf8,	// (0x0002eca1) slider_imed_adjust_pane_g1_ParamLimits

0x5c08,	// (0x0002ecb1) slider_imed_adjust_pane_g2_ParamLimits

0x5c18,	// (0x0002ecc1) slider_imed_adjust_pane_g3_ParamLimits

0x5c29,	// (0x0002ecd2) slider_imed_adjust_pane_g4_ParamLimits

0xf6d3,	// (0x0003877c) slider_imed_adjust_pane_g_ParamLimits

0x15df,	// (0x0002a688) aid_touch_area_cam4_ParamLimits

0x15df,	// (0x0002a688) aid_touch_area_cam4

0xb54d,	// (0x000345f6) battery_pane_cp01

0x16ae,	// (0x0002a757) main_camera4_pane_g6_ParamLimits

0x16ae,	// (0x0002a757) main_camera4_pane_g6

0x16d8,	// (0x0002a781) main_camera4_pane_t2_ParamLimits

0x16d8,	// (0x0002a781) main_camera4_pane_t2

0x0001,

0xf7c6,	// (0x0003886f) main_camera4_pane_t_ParamLimits

0xf7c6,	// (0x0003886f) main_camera4_pane_t

0x16f9,	// (0x0002a7a2) aid_touch_area_vid4_ParamLimits

0x16f9,	// (0x0002a7a2) aid_touch_area_vid4

0x174d,	// (0x0002a7f6) main_video4_pane_g5_ParamLimits

0x174d,	// (0x0002a7f6) main_video4_pane_g5

0x1772,	// (0x0002a81b) vid4_progress_pane_ParamLimits

0x1772,	// (0x0002a81b) vid4_progress_pane

0x66dc,	// (0x0002f785) main_cset_slider_pane_g18_ParamLimits

0x66dc,	// (0x0002f785) main_cset_slider_pane_g18

0x6ee0,	// (0x0002ff89) cell_cam4_burst_pane_g2_ParamLimits

0x6ee0,	// (0x0002ff89) cell_cam4_burst_pane_g2

0x0001,

0xf914,	// (0x000389bd) cell_cam4_burst_pane_g_ParamLimits

0xf914,	// (0x000389bd) cell_cam4_burst_pane_g

0xd100,	// (0x000361a9) bg_cl_pane_ParamLimits

0xd100,	// (0x000361a9) bg_cl_pane

0x71aa,	// (0x00030253) cl_header_pane_ParamLimits

0x71aa,	// (0x00030253) cl_header_pane

0x71be,	// (0x00030267) cl_listscroll_pane_ParamLimits

0x71be,	// (0x00030267) cl_listscroll_pane

0x71ce,	// (0x00030277) bg_cl_pane_g1

0x71d6,	// (0x0003027f) bg_cl_pane_g2

0x71de,	// (0x00030287) bg_cl_pane_g3

0x71e6,	// (0x0003028f) bg_cl_pane_g4

0x71ee,	// (0x00030297) bg_cl_pane_g5

0x71f6,	// (0x0003029f) bg_cl_pane_g6

0x71fe,	// (0x000302a7) bg_cl_pane_g7

0x7206,	// (0x000302af) bg_cl_pane_g8

0x720e,	// (0x000302b7) bg_cl_pane_g9

0x0008,

0xf94f,	// (0x000389f8) bg_cl_pane_g

0x7216,	// (0x000302bf) aid_height_cl_leading_ParamLimits

0x7216,	// (0x000302bf) aid_height_cl_leading

0x7222,	// (0x000302cb) aid_height_cl_text_ParamLimits

0x7222,	// (0x000302cb) aid_height_cl_text

0xcf51,	// (0x00035ffa) bg_cl_header_pane_ParamLimits

0xcf51,	// (0x00035ffa) bg_cl_header_pane

0x7241,	// (0x000302ea) cl_header_pane_g1_ParamLimits

0x7241,	// (0x000302ea) cl_header_pane_g1

0x7257,	// (0x00030300) cl_header_pane_t1_ParamLimits

0x7257,	// (0x00030300) cl_header_pane_t1

0x7270,	// (0x00030319) cl_list_pane

0x659f,	// (0x0002f648) hc_scroll_pane_cp01

0xd51a,	// (0x000365c3) bg_cl_header_pane_g1

0x6156,	// (0x0002f1ff) bg_cl_header_pane_g2

0xd53a,	// (0x000365e3) bg_cl_header_pane_g3

0x6166,	// (0x0002f20f) bg_cl_header_pane_g4

0x615e,	// (0x0002f207) bg_cl_header_pane_g5

0x6a81,	// (0x0002fb2a) bg_cl_header_pane_g6

0x617e,	// (0x0002f227) bg_cl_header_pane_g7

0x6186,	// (0x0002f22f) bg_cl_header_pane_g8

0x6176,	// (0x0002f21f) bg_cl_header_pane_g9

0x0008,

0xf962,	// (0x00038a0b) bg_cl_header_pane_g

0x7279,	// (0x00030322) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7279,	// (0x00030322) hc_cl_list_double_graphic_heading_pane

0x728a,	// (0x00030333) hc_cl_list_single_graphic_pane_ParamLimits

0x728a,	// (0x00030333) hc_cl_list_single_graphic_pane

0x72a0,	// (0x00030349) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x72a0,	// (0x00030349) hc_cl_list_single_graphic_pane_g1

0x72ac,	// (0x00030355) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x72ac,	// (0x00030355) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf975,	// (0x00038a1e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf975,	// (0x00038a1e) hc_cl_list_single_graphic_pane_g

0x72c0,	// (0x00030369) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x72c0,	// (0x00030369) hc_cl_list_single_graphic_pane_t1

0x72a0,	// (0x00030349) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x72a0,	// (0x00030349) hc_cl_list_double_graphic_heading_pane_g1

0x72d5,	// (0x0003037e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x72d5,	// (0x0003037e) hc_cl_list_double_graphic_heading_pane_g2

0x72e9,	// (0x00030392) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x72e9,	// (0x00030392) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf97a,	// (0x00038a23) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf97a,	// (0x00038a23) hc_cl_list_double_graphic_heading_pane_g

0x72fd,	// (0x000303a6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x72fd,	// (0x000303a6) hc_cl_list_double_graphic_heading_pane_t1

0x7312,	// (0x000303bb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7312,	// (0x000303bb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf981,	// (0x00038a2a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf981,	// (0x00038a2a) hc_cl_list_double_graphic_heading_pane_t

0xb6d9,	// (0x00034782) vid4_progress_pane_g1

0xb6e9,	// (0x00034792) vid4_progress_pane_g2

0x1c4a,	// (0x0002acf3) vid4_progress_pane_g3

0xb6f9,	// (0x000347a2) vid4_progress_pane_g4

0x0004,

0xf986,	// (0x00038a2f) vid4_progress_pane_g

0x1c5c,	// (0x0002ad05) vid4_progress_pane_t1

0xb711,	// (0x000347ba) vid4_progress_pane_t2

0x0002,

0xf991,	// (0x00038a3a) vid4_progress_pane_t

0x1c74,	// (0x0002ad1d) wait_bar_pane_cp07

0x48b6,	// (0x0002d95f) blid_firmament_pane_ParamLimits

0x48f9,	// (0x0002d9a2) popup_blid_sat_info2_window_g1

0x491d,	// (0x0002d9c6) popup_blid_sat_info2_window_t3

0x492b,	// (0x0002d9d4) popup_blid_sat_info2_window_t4

0x4939,	// (0x0002d9e2) popup_blid_sat_info2_window_t5

0x4947,	// (0x0002d9f0) popup_blid_sat_info2_window_t6

0x4957,	// (0x0002da00) popup_blid_sat_info2_window_t7

0x4965,	// (0x0002da0e) popup_blid_sat_info2_window_t8

0x4973,	// (0x0002da1c) popup_blid_sat_info2_window_t9

0x4981,	// (0x0002da2a) popup_blid_sat_info2_window_t10

0x4a42,	// (0x0002daeb) aid_firma_cardinal_ParamLimits

0x4a56,	// (0x0002daff) blid_firmament_pane_t1_ParamLimits

0x4a6d,	// (0x0002db16) blid_firmament_pane_t2_ParamLimits

0x4a84,	// (0x0002db2d) blid_firmament_pane_t3_ParamLimits

0x4a9b,	// (0x0002db44) blid_firmament_pane_t4_ParamLimits

0xf5d0,	// (0x00038679) blid_firmament_pane_t_ParamLimits

0x4ab2,	// (0x0002db5b) blid_sat_info_pane_ParamLimits

0xaf90,	// (0x00034039) main_cam_set_pane_ParamLimits

0x59fe,	// (0x0002eaa7) aid_size_cell_colour_35_ParamLimits

0x5a1e,	// (0x0002eac7) aid_size_cell_colour_112_ParamLimits

0x5a3e,	// (0x0002eae7) aid_size_cell_effect_ParamLimits

0xdde5,	// (0x00036e8e) bg_tb_trans_pane_cp02_ParamLimits

0x5a5e,	// (0x0002eb07) heading_imed_pane_ParamLimits

0x5a6a,	// (0x0002eb13) listscroll_imed_pane_ParamLimits

0xe6d3,	// (0x0003777c) popup_call2_audio_first_window_g5_ParamLimits

0xe6d3,	// (0x0003777c) popup_call2_audio_first_window_g5

0x122c,	// (0x0002a2d5) aid_size_touch_image3_arrow_left_ParamLimits

0x122c,	// (0x0002a2d5) aid_size_touch_image3_arrow_left

0x1258,	// (0x0002a301) aid_size_touch_image3_arrow_right_ParamLimits

0x1258,	// (0x0002a301) aid_size_touch_image3_arrow_right

0xb726,	// (0x000347cf) vid4_progress_pane_t3

0x5e55,	// (0x0002eefe) main_hwr_training_symbol_option_pane_ParamLimits

0x5e55,	// (0x0002eefe) main_hwr_training_symbol_option_pane

0x5e75,	// (0x0002ef1e) popup_hwr_training_preview_window_ParamLimits

0x5e75,	// (0x0002ef1e) popup_hwr_training_preview_window

0x113a,	// (0x0002a1e3) hwr_training_navi_pane_g5_ParamLimits

0x113a,	// (0x0002a1e3) hwr_training_navi_pane_g5

0x6144,	// (0x0002f1ed) popup_char_count_window

0xaf90,	// (0x00034039) bg_popup_sub_pane_cp20_ParamLimits

0x1bc0,	// (0x0002ac69) list_vitu2_match_list_pane_ParamLimits

0x1bcc,	// (0x0002ac75) vitu2_page_scroll_pane_ParamLimits

0x1bcc,	// (0x0002ac75) vitu2_page_scroll_pane

0x735d,	// (0x00030406) list_single_hwr_training_symbol_option_pane_ParamLimits

0x735d,	// (0x00030406) list_single_hwr_training_symbol_option_pane

0x7370,	// (0x00030419) list_single_hwr_training_symbol_option_pane_g1

0x7378,	// (0x00030421) list_single_hwr_training_symbol_option_pane_t1

0x7386,	// (0x0003042f) bg_button_pane_cp023

0x738f,	// (0x00030438) bg_button_pane_cp024

0x73c2,	// (0x0003046b) vitu2_page_scroll_pane_g1

0x73ca,	// (0x00030473) vitu2_page_scroll_pane_g2

0x0001,

0xf998,	// (0x00038a41) vitu2_page_scroll_pane_g

0x73d2,	// (0x0003047b) vitu2_page_scroll_pane_t1

0x47e9,	// (0x0002d892) popup_char_count_window_g1

0x73e1,	// (0x0003048a) popup_char_count_window_g2

0x73ea,	// (0x00030493) popup_char_count_window_g3

0x0002,

0xf99d,	// (0x00038a46) popup_char_count_window_g

0x73f3,	// (0x0003049c) popup_char_count_window_t1

0xaf9e,	// (0x00034047) main_vded2_pane

0x5b91,	// (0x0002ec3a) aid_size_cell_imed_line

0x5b9b,	// (0x0002ec44) grid_imed_line_width_pane

0xb625,	// (0x000346ce) vid4_indicators_pane_g4

0x7401,	// (0x000304aa) cell_imed_line_width_pane_ParamLimits

0x7401,	// (0x000304aa) cell_imed_line_width_pane

0x7415,	// (0x000304be) cell_imed_line_width_pane_g1

0x741e,	// (0x000304c7) cell_imed_line_width_pane_g2

0x0001,

0xf9a4,	// (0x00038a4d) cell_imed_line_width_pane_g

0x7426,	// (0x000304cf) main_vded2_pane_g1_ParamLimits

0x7426,	// (0x000304cf) main_vded2_pane_g1

0x743c,	// (0x000304e5) main_vded2_pane_g2_ParamLimits

0x743c,	// (0x000304e5) main_vded2_pane_g2

0x0001,

0xf9a9,	// (0x00038a52) main_vded2_pane_g_ParamLimits

0xf9a9,	// (0x00038a52) main_vded2_pane_g

0x744e,	// (0x000304f7) vded2_slider_pane_ParamLimits

0x744e,	// (0x000304f7) vded2_slider_pane

0x745e,	// (0x00030507) aid_size_touch_vded2_end

0x7468,	// (0x00030511) aid_size_touch_vded2_playhead

0x7472,	// (0x0003051b) aid_size_touch_vded2_start

0x747a,	// (0x00030523) vded2_slider_bg_pane

0x7483,	// (0x0003052c) vded2_slider_pane_g1

0x748c,	// (0x00030535) vded2_slider_pane_g2

0x7494,	// (0x0003053d) vded2_slider_pane_g3

0x0002,

0xf9ae,	// (0x00038a57) vded2_slider_pane_g

0x749f,	// (0x00030548) vded2_slider_bg_pane_g1

0x74a8,	// (0x00030551) vded2_slider_bg_pane_g2

0x74b1,	// (0x0003055a) vded2_slider_bg_pane_g3

0x0002,

0xf9b5,	// (0x00038a5e) vded2_slider_bg_pane_g

0x3bf2,	// (0x0002cc9b) aid_postcard_touch_down_pane_ParamLimits

0x3bf2,	// (0x0002cc9b) aid_postcard_touch_down_pane

0x3c08,	// (0x0002ccb1) aid_postcard_touch_up_pane_ParamLimits

0x3c08,	// (0x0002ccb1) aid_postcard_touch_up_pane

0xaf9e,	// (0x00034047) main_blid2_pane

0xb0ea,	// (0x00034193) popup_blid2_search_window

0xc963,	// (0x00035a0c) blid2_gps_pane

0xc963,	// (0x00035a0c) blid2_navig_pane

0xc963,	// (0x00035a0c) blid2_search_pane

0xc963,	// (0x00035a0c) blid2_tripm_pane

0x74ba,	// (0x00030563) blid2_search_pane_g1_ParamLimits

0x74ba,	// (0x00030563) blid2_search_pane_g1

0x74d4,	// (0x0003057d) blid2_search_pane_t1_ParamLimits

0x74d4,	// (0x0003057d) blid2_search_pane_t1

0x74e6,	// (0x0003058f) aid_size_cell_blid2_gps_ParamLimits

0x74e6,	// (0x0003058f) aid_size_cell_blid2_gps

0x74fe,	// (0x000305a7) blid2_gps_pane_g1_ParamLimits

0x74fe,	// (0x000305a7) blid2_gps_pane_g1

0x7512,	// (0x000305bb) grid_blid2_satellite_pane_ParamLimits

0x7512,	// (0x000305bb) grid_blid2_satellite_pane

0x752c,	// (0x000305d5) blid2_navig_pane_g1_ParamLimits

0x752c,	// (0x000305d5) blid2_navig_pane_g1

0x7538,	// (0x000305e1) blid2_navig_pane_t1_ParamLimits

0x7538,	// (0x000305e1) blid2_navig_pane_t1

0x7553,	// (0x000305fc) blid2_navig_pane_t2_ParamLimits

0x7553,	// (0x000305fc) blid2_navig_pane_t2

0x0001,

0xf9bc,	// (0x00038a65) blid2_navig_pane_t_ParamLimits

0xf9bc,	// (0x00038a65) blid2_navig_pane_t

0x756e,	// (0x00030617) blid2_navig_ring_pane_ParamLimits

0x756e,	// (0x00030617) blid2_navig_ring_pane

0x7587,	// (0x00030630) blid2_speed_pane_ParamLimits

0x7587,	// (0x00030630) blid2_speed_pane

0x7593,	// (0x0003063c) blid2_tripm_pane_g1_ParamLimits

0x7593,	// (0x0003063c) blid2_tripm_pane_g1

0x75ac,	// (0x00030655) blid2_tripm_pane_g2_ParamLimits

0x75ac,	// (0x00030655) blid2_tripm_pane_g2

0x75c0,	// (0x00030669) blid2_tripm_pane_g3_ParamLimits

0x75c0,	// (0x00030669) blid2_tripm_pane_g3

0x75d4,	// (0x0003067d) blid2_tripm_pane_g4_ParamLimits

0x75d4,	// (0x0003067d) blid2_tripm_pane_g4

0x75e8,	// (0x00030691) blid2_tripm_pane_g5_ParamLimits

0x75e8,	// (0x00030691) blid2_tripm_pane_g5

0x0005,

0xf9c1,	// (0x00038a6a) blid2_tripm_pane_g_ParamLimits

0xf9c1,	// (0x00038a6a) blid2_tripm_pane_g

0x760e,	// (0x000306b7) blid2_tripm_pane_t1_ParamLimits

0x760e,	// (0x000306b7) blid2_tripm_pane_t1

0x7629,	// (0x000306d2) blid2_tripm_pane_t2_ParamLimits

0x7629,	// (0x000306d2) blid2_tripm_pane_t2

0x7642,	// (0x000306eb) blid2_tripm_pane_t3_ParamLimits

0x7642,	// (0x000306eb) blid2_tripm_pane_t3

0x0003,

0xf9ce,	// (0x00038a77) blid2_tripm_pane_t_ParamLimits

0xf9ce,	// (0x00038a77) blid2_tripm_pane_t

0x7689,	// (0x00030732) cell_blid2_satellite_pane_ParamLimits

0x7689,	// (0x00030732) cell_blid2_satellite_pane

0x76a7,	// (0x00030750) cell_blid2_satellite_pane_g1

0x76b0,	// (0x00030759) cell_blid2_satellite_pane_t1

0xd0a2,	// (0x0003614b) blid2_speed_pane_g1

0x76be,	// (0x00030767) blid2_speed_pane_t1

0x76cc,	// (0x00030775) blid2_speed_pane_t2

0x0001,

0xf9d7,	// (0x00038a80) blid2_speed_pane_t

0xd0a2,	// (0x0003614b) blid2_navig_ring_pane_g1

0x76da,	// (0x00030783) blid2_navig_ring_pane_g2

0x76e2,	// (0x0003078b) blid2_navig_ring_pane_g3

0x76ea,	// (0x00030793) blid2_navig_ring_pane_g4

0x76f2,	// (0x0003079b) blid2_navig_ring_pane_g5

0x0004,

0xf9dc,	// (0x00038a85) blid2_navig_ring_pane_g

0xc963,	// (0x00035a0c) bg_popup_window_pane_cp011

0x76fa,	// (0x000307a3) popup_blid2_search_window_g1

0x7702,	// (0x000307ab) popup_blid2_search_window_t1

0x7710,	// (0x000307b9) popup_blid2_search_window_t2

0x0001,

0xf9e7,	// (0x00038a90) popup_blid2_search_window_t

0xd420,	// (0x000364c9) main_browser_pane_g1

0xd100,	// (0x000361a9) main_browser_pane_ParamLimits

0xaf90,	// (0x00034039) bg_button_pane_cp011_ParamLimits

0x1b3e,	// (0x0002abe7) cell_vitu2_function_pane_g1_ParamLimits

0xdde5,	// (0x00036e8e) bg_popup_sub_pane_cp22_ParamLimits

0x6bbc,	// (0x0002fc65) input_focus_pane_cp08_ParamLimits

0x6bd7,	// (0x0002fc80) popup_vitu2_query_button_pane_ParamLimits

0x6bd7,	// (0x0002fc80) popup_vitu2_query_button_pane

0x6be6,	// (0x0002fc8f) popup_vitu2_query_input_button_pane

0x6bee,	// (0x0002fc97) popup_vitu2_query_window_g1_ParamLimits

0x6bfa,	// (0x0002fca3) popup_vitu2_query_window_g2_ParamLimits

0xf8e8,	// (0x00038991) popup_vitu2_query_window_g_ParamLimits

0xc963,	// (0x00035a0c) bg_button_pane_cp026

0x771e,	// (0x000307c7) popup_vitu2_query_input_button_pane_g1

0xc963,	// (0x00035a0c) bg_button_pane_cp025

0x7726,	// (0x000307cf) popup_vitu2_query_button_pane_t1

0x4d95,	// (0x0002de3e) main_mp3_pane_t6

0x4dab,	// (0x0002de54) popup_slider_window_cp01

0xb589,	// (0x00034632) cam4_battery_pane

0xb5e2,	// (0x0003468b) cam4_battery_pane_cp02

0xb6d1,	// (0x0003477a) cam4_battery_pane_cp01

0xb6d1,	// (0x0003477a) cam4_battery_pane_cp03

0x47f2,	// (0x0002d89b) cam4_battery_pane_g1

0xd0a2,	// (0x0003614b) cam4_battery_pane_g2

0x0001,

0xf9ec,	// (0x00038a95) cam4_battery_pane_g

0x498f,	// (0x0002da38) popup_blid_sat_info2_window_t11

0xdb55,	// (0x00036bfe) aid_size_touch_mv_arrow_left_ParamLimits

0xdb7e,	// (0x00036c27) aid_size_touch_mv_arrow_right_ParamLimits

0xdbdc,	// (0x00036c85) navi_pane_g1_ParamLimits

0xdbe8,	// (0x00036c91) navi_pane_g2_ParamLimits

0xdc16,	// (0x00036cbf) navi_pane_g3_ParamLimits

0xf30c,	// (0x000383b5) navi_pane_g_ParamLimits

0x3848,	// (0x0002c8f1) navi_pane_mv_t1_ParamLimits

0x5aa3,	// (0x0002eb4c) grid_imed_effect_pane_ParamLimits

0x25df,	// (0x0002b688) aid_placing_vt_slider_lsc

0xd36f,	// (0x00036418) aid_placing_vt_slider_prt

0xcf51,	// (0x00035ffa) bg_tb_trans_pane_cp01_ParamLimits

0x4c0f,	// (0x0002dcb8) popup_image_details_window_g1_ParamLimits

0x4c22,	// (0x0002dccb) popup_image_details_window_g2_ParamLimits

0x4c37,	// (0x0002dce0) popup_image_details_window_g3_ParamLimits

0x4c37,	// (0x0002dce0) popup_image_details_window_g3

0xf605,	// (0x000386ae) popup_image_details_window_g_ParamLimits

0x4c4b,	// (0x0002dcf4) popup_image_details_window_t1_ParamLimits

0x4c5d,	// (0x0002dd06) popup_image_details_window_t2_ParamLimits

0x4c76,	// (0x0002dd1f) popup_image_details_window_t3_ParamLimits

0x4c8a,	// (0x0002dd33) popup_image_details_window_t4_ParamLimits

0x4ca5,	// (0x0002dd4e) popup_image_details_window_t5_ParamLimits

0xf60c,	// (0x000386b5) popup_image_details_window_t_ParamLimits

0x722e,	// (0x000302d7) cl_header_name_pane_ParamLimits

0x722e,	// (0x000302d7) cl_header_name_pane

0x7734,	// (0x000307dd) cl_header_name_pane_t1_ParamLimits

0x7734,	// (0x000307dd) cl_header_name_pane_t1

0x7755,	// (0x000307fe) cl_header_name_pane_t2_ParamLimits

0x7755,	// (0x000307fe) cl_header_name_pane_t2

0x7797,	// (0x00030840) cl_header_name_pane_t3_ParamLimits

0x7797,	// (0x00030840) cl_header_name_pane_t3

0x0002,

0xf9f1,	// (0x00038a9a) cl_header_name_pane_t_ParamLimits

0xf9f1,	// (0x00038a9a) cl_header_name_pane_t

0xdca5,	// (0x00036d4e) navi_pane_mv_g2_ParamLimits

0x60e0,	// (0x0002f189) field_vitu2_entry_pane_g1_ParamLimits

0x60ec,	// (0x0002f195) field_vitu2_entry_pane_g2_ParamLimits

0xddc3,	// (0x00036e6c) field_vitu2_entry_pane_g3_ParamLimits

0xddc3,	// (0x00036e6c) field_vitu2_entry_pane_g3

0xf7f8,	// (0x000388a1) field_vitu2_entry_pane_g_ParamLimits

0x19ce,	// (0x0002aa77) cell_vitu2_itu_pane_g1_ParamLimits

0x19e6,	// (0x0002aa8f) cell_vitu2_itu_pane_g2_ParamLimits

0x19e6,	// (0x0002aa8f) cell_vitu2_itu_pane_g2

0x0001,

0xf804,	// (0x000388ad) cell_vitu2_itu_pane_g_ParamLimits

0xf804,	// (0x000388ad) cell_vitu2_itu_pane_g

0xaf90,	// (0x00034039) bg_vkb2_func_pane_cp05_ParamLimits

0xaf90,	// (0x00034039) bg_vkb2_func_pane_cp05

0xaf90,	// (0x00034039) bg_vkb2_func_pane_cp03

0xaf90,	// (0x00034039) bg_vkb2_func_pane_cp04

0xaf90,	// (0x00034039) bg_vkb2_func_pane_cp10_ParamLimits

0xaf90,	// (0x00034039) bg_vkb2_func_pane_cp10

0x718a,	// (0x00030233) bg_vkb2_func_pane_cp08

0x7163,	// (0x0003020c) bg_vkb2_func_pane_cp06

0x716f,	// (0x00030218) bg_vkb2_func_pane_cp07

0x7398,	// (0x00030441) bg_vkb2_func_pane_cp11_ParamLimits

0x7398,	// (0x00030441) bg_vkb2_func_pane_cp11

0x73ad,	// (0x00030456) bg_vkb2_func_pane_cp12_ParamLimits

0x73ad,	// (0x00030456) bg_vkb2_func_pane_cp12

0xc963,	// (0x00035a0c) bg_vkb2_func_pane_cp09

0x6156,	// (0x0002f1ff) bg_vkb2_func_pane_g1

0xd53a,	// (0x000365e3) bg_vkb2_func_pane_g2

0x615e,	// (0x0002f207) bg_vkb2_func_pane_g3

0x6166,	// (0x0002f20f) bg_vkb2_func_pane_g4

0x6a81,	// (0x0002fb2a) bg_vkb2_func_pane_g5

0x617e,	// (0x0002f227) bg_vkb2_func_pane_g6

0x6186,	// (0x0002f22f) bg_vkb2_func_pane_g7

0x6176,	// (0x0002f21f) bg_vkb2_func_pane_g8

0xd51a,	// (0x000365c3) bg_vkb2_func_pane_g9

0x0008,

0xf9f8,	// (0x00038aa1) bg_vkb2_func_pane_g

0x75fc,	// (0x000306a5) blid2_tripm_pane_g6_ParamLimits

0x75fc,	// (0x000306a5) blid2_tripm_pane_g6

0x5f75,	// (0x0002f01e) mp4_progress_pane_g1

0x7675,	// (0x0003071e) blid2_tripm_values_pane_ParamLimits

0x7675,	// (0x0003071e) blid2_tripm_values_pane

0x77c8,	// (0x00030871) blid2_tripm_values_pane_t1

0x77d6,	// (0x0003087f) blid2_tripm_values_pane_t2

0x77e4,	// (0x0003088d) blid2_tripm_values_pane_t3

0x77f2,	// (0x0003089b) blid2_tripm_values_pane_t4

0x7800,	// (0x000308a9) blid2_tripm_values_pane_t5

0x780e,	// (0x000308b7) blid2_tripm_values_pane_t6

0x781c,	// (0x000308c5) blid2_tripm_values_pane_t7

0x782a,	// (0x000308d3) blid2_tripm_values_pane_t8

0x7838,	// (0x000308e1) blid2_tripm_values_pane_t9

0x0008,

0xfa0b,	// (0x00038ab4) blid2_tripm_values_pane_t

0x2621,	// (0x0002b6ca) call_video_pane_t1_ParamLimits

0x263f,	// (0x0002b6e8) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x00038263) call_video_pane_t_ParamLimits

0x3b17,	// (0x0002cbc0) msg_header_pane_g1_ParamLimits

0xdeb1,	// (0x00036f5a) msg_header_pane_g2_ParamLimits

0xdeb1,	// (0x00036f5a) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x00038453) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x00038453) msg_header_pane_g

0xd100,	// (0x000361a9) main_clock2_pane_ParamLimits

0x57eb,	// (0x0002e894) grid_clock2_toolbar_pane_ParamLimits

0x57eb,	// (0x0002e894) grid_clock2_toolbar_pane

0x57eb,	// (0x0002e894) listscroll_clock2_pane_ParamLimits

0x57eb,	// (0x0002e894) listscroll_clock2_pane

0x5903,	// (0x0002e9ac) main_clock2_pane_t3_ParamLimits

0x5903,	// (0x0002e9ac) main_clock2_pane_t3

0x5927,	// (0x0002e9d0) main_clock2_pane_t4_ParamLimits

0x5927,	// (0x0002e9d0) main_clock2_pane_t4

0x7846,	// (0x000308ef) cell_clock2_toolbar_pane

0x784e,	// (0x000308f7) cell_clock2_toolbar_pane_cp01

0x784e,	// (0x000308f7) cell_clock2_toolbar_pane_cp02

0x7856,	// (0x000308ff) cell_clock2_toolbar_pane_cp03

0x785e,	// (0x00030907) list_clock2_pane

0xdacb,	// (0x00036b74) scroll_pane_cp10

0x7866,	// (0x0003090f) list_single_clock2_pane_ParamLimits

0x7866,	// (0x0003090f) list_single_clock2_pane

0xd318,	// (0x000363c1) list_highlight_pane_cp08

0x7873,	// (0x0003091c) list_single_clock2_pane_t1

0x7881,	// (0x0003092a) list_single_clock2_pane_t2

0x0001,

0xfa1e,	// (0x00038ac7) list_single_clock2_pane_t

0xc963,	// (0x00035a0c) bg_button_pane_cp10

0x788f,	// (0x00030938) cell_clock2_toolbar_pane_g1

0x0d32,	// (0x00029ddb) aid_main_viewer_pane_g1_ParamLimits

0x0d32,	// (0x00029ddb) aid_main_viewer_pane_g1

0x0d40,	// (0x00029de9) aid_main_viewer_pane_g2_ParamLimits

0x0d40,	// (0x00029de9) aid_main_viewer_pane_g2

0x3bb6,	// (0x0002cc5f) aid_main_viewer_pane_g3_ParamLimits

0x3bb6,	// (0x0002cc5f) aid_main_viewer_pane_g3

0x3bc5,	// (0x0002cc6e) aid_main_viewer_pane_g4_ParamLimits

0x3bc5,	// (0x0002cc6e) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x00038464) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x00038464) aid_main_viewer_pane_g

0x0d74,	// (0x00029e1d) main_calc_pane_ParamLimits

0x0d88,	// (0x00029e31) main_dialer2_pane_ParamLimits

0xaf9e,	// (0x00034047) main_cam6_pane

0xaf9e,	// (0x00034047) main_vid6_pane

0x57f7,	// (0x0002e8a0) listscroll_gen_pane_cp06_ParamLimits

0x57f7,	// (0x0002e8a0) listscroll_gen_pane_cp06

0x594a,	// (0x0002e9f3) main_clock2_pane_t5_ParamLimits

0x594a,	// (0x0002e9f3) main_clock2_pane_t5

0x59a8,	// (0x0002ea51) aid_call2_pane_cp10_ParamLimits

0x59ba,	// (0x0002ea63) aid_call_pane_cp10_ParamLimits

0xdb49,	// (0x00036bf2) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdb49,	// (0x00036bf2) popup_clock_analogue_window_cp10_g2_ParamLimits

0x1066,	// (0x0002a10f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x1066,	// (0x0002a10f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdb49,	// (0x00036bf2) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6c1,	// (0x0003876a) popup_clock_analogue_window_cp10_g_ParamLimits

0x107c,	// (0x0002a125) popup_clock_analogue_window_cp10_t1_ParamLimits

0x601e,	// (0x0002f0c7) cell_dialer2_keypad_pane_g2_ParamLimits

0x601e,	// (0x0002f0c7) cell_dialer2_keypad_pane_g2

0x0001,

0xf797,	// (0x00038840) cell_dialer2_keypad_pane_g_ParamLimits

0xf797,	// (0x00038840) cell_dialer2_keypad_pane_g

0xd0ac,	// (0x00036155) cell_dialer2_keypad_pane_t1

0x6579,	// (0x0002f622) main_cset_text2_pane_ParamLimits

0x6579,	// (0x0002f622) main_cset_text2_pane

0x705c,	// (0x00030105) area_vitu2_query_pane_g1_ParamLimits

0x7068,	// (0x00030111) area_vitu2_query_pane_g2_ParamLimits

0xf93b,	// (0x000389e4) area_vitu2_query_pane_g_ParamLimits

0x713f,	// (0x000301e8) area_vitu2_query_pane_t7_ParamLimits

0x713f,	// (0x000301e8) area_vitu2_query_pane_t7

0x7163,	// (0x0003020c) bg_button_pane_cp018_ParamLimits

0x716f,	// (0x00030218) bg_button_pane_cp021_ParamLimits

0x717b,	// (0x00030224) bg_button_pane_cp022_ParamLimits

0x718a,	// (0x00030233) bg_vkb2_func_pane_cp08_ParamLimits

0x7163,	// (0x0003020c) bg_vkb2_func_pane_cp06_ParamLimits

0x716f,	// (0x00030218) bg_vkb2_func_pane_cp07_ParamLimits

0x719a,	// (0x00030243) input_focus_pane_cp09_ParamLimits

0x1c87,	// (0x0002ad30) cam6_autofocus_pane_ParamLimits

0x1c87,	// (0x0002ad30) cam6_autofocus_pane

0x1c93,	// (0x0002ad3c) cam6_image_uncrop_pane_ParamLimits

0x1c93,	// (0x0002ad3c) cam6_image_uncrop_pane

0x1ca3,	// (0x0002ad4c) cam6_indi_pane_ParamLimits

0x1ca3,	// (0x0002ad4c) cam6_indi_pane

0x1cb9,	// (0x0002ad62) cam6_mode_pane_ParamLimits

0x1cb9,	// (0x0002ad62) cam6_mode_pane

0x1ccb,	// (0x0002ad74) cam6_timer_pane_ParamLimits

0x1ccb,	// (0x0002ad74) cam6_timer_pane

0x1cd7,	// (0x0002ad80) cam6_zoom_pane_ParamLimits

0x1cd7,	// (0x0002ad80) cam6_zoom_pane

0x7897,	// (0x00030940) cam6_mode_pane_g1_ParamLimits

0x7897,	// (0x00030940) cam6_mode_pane_g1

0x78a7,	// (0x00030950) cam6_mode_pane_g2_ParamLimits

0x78a7,	// (0x00030950) cam6_mode_pane_g2

0x78b7,	// (0x00030960) cam6_mode_pane_g3_ParamLimits

0x78b7,	// (0x00030960) cam6_mode_pane_g3

0x78c7,	// (0x00030970) cam6_mode_pane_g4_ParamLimits

0x78c7,	// (0x00030970) cam6_mode_pane_g4

0x0003,

0xfa23,	// (0x00038acc) cam6_mode_pane_g_ParamLimits

0xfa23,	// (0x00038acc) cam6_mode_pane_g

0x78d7,	// (0x00030980) bg_tb_trans_pane_cp08_ParamLimits

0x78d7,	// (0x00030980) bg_tb_trans_pane_cp08

0x78e5,	// (0x0003098e) cam6_battery_pane_ParamLimits

0x78e5,	// (0x0003098e) cam6_battery_pane

0x78fb,	// (0x000309a4) cam6_indi_pane_g1_ParamLimits

0x78fb,	// (0x000309a4) cam6_indi_pane_g1

0x790d,	// (0x000309b6) cam6_indi_pane_g2_ParamLimits

0x790d,	// (0x000309b6) cam6_indi_pane_g2

0x791f,	// (0x000309c8) cam6_indi_pane_g3_ParamLimits

0x791f,	// (0x000309c8) cam6_indi_pane_g3

0x0002,

0xfa2c,	// (0x00038ad5) cam6_indi_pane_g_ParamLimits

0xfa2c,	// (0x00038ad5) cam6_indi_pane_g

0x7931,	// (0x000309da) cam6_indi_pane_t1_ParamLimits

0x7931,	// (0x000309da) cam6_indi_pane_t1

0x60b1,	// (0x0002f15a) cam6_autofocus_pane_g1

0x60a9,	// (0x0002f152) cam6_autofocus_pane_g2

0x60c1,	// (0x0002f16a) cam6_autofocus_pane_g3

0x60b9,	// (0x0002f162) cam6_autofocus_pane_g4

0x0003,

0xfa33,	// (0x00038adc) cam6_autofocus_pane_g

0x7957,	// (0x00030a00) cam6_timer_pane_g1

0x795f,	// (0x00030a08) cam6_timer_pane_t1

0x796d,	// (0x00030a16) cam6_zoom_cont_pane

0x7975,	// (0x00030a1e) cam6_zoom_pane_g1

0x797e,	// (0x00030a27) cam6_zoom_pane_g2

0x7987,	// (0x00030a30) cam6_zoom_pane_g3

0x0002,

0xfa3c,	// (0x00038ae5) cam6_zoom_pane_g

0xd0a2,	// (0x0003614b) cam6_battery_pane_g1

0xd0a2,	// (0x0003614b) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00038135) cam6_battery_pane_g

0x7975,	// (0x00030a1e) cam6_zoom_cont_pane_g1

0x797e,	// (0x00030a27) cam6_zoom_cont_pane_g2

0x7990,	// (0x00030a39) cam6_zoom_cont_pane_g3

0x0002,

0xfa43,	// (0x00038aec) cam6_zoom_cont_pane_g

0x79aa,	// (0x00030a53) cam6_mode_pane_cp_ParamLimits

0x79aa,	// (0x00030a53) cam6_mode_pane_cp

0x79bc,	// (0x00030a65) cam6_zoom_pane_cp_ParamLimits

0x79bc,	// (0x00030a65) cam6_zoom_pane_cp

0x79c8,	// (0x00030a71) vid6_image_uncrop_cif_pane_ParamLimits

0x79c8,	// (0x00030a71) vid6_image_uncrop_cif_pane

0x79d8,	// (0x00030a81) vid6_image_uncrop_nhd_pane_ParamLimits

0x79d8,	// (0x00030a81) vid6_image_uncrop_nhd_pane

0x79f7,	// (0x00030aa0) vid6_image_uncrop_vga_pane_ParamLimits

0x79f7,	// (0x00030aa0) vid6_image_uncrop_vga_pane

0x7a06,	// (0x00030aaf) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a06,	// (0x00030aaf) vid6_image_uncrop_wvga_pane

0x7a15,	// (0x00030abe) vid6_indi_pane_ParamLimits

0x7a15,	// (0x00030abe) vid6_indi_pane

0x78d7,	// (0x00030980) bg_tb_trans_pane_cp09_ParamLimits

0x78d7,	// (0x00030980) bg_tb_trans_pane_cp09

0x7a2d,	// (0x00030ad6) cam6_battery_pane_cp_ParamLimits

0x7a2d,	// (0x00030ad6) cam6_battery_pane_cp

0x7a39,	// (0x00030ae2) vid6_indi_pane_g1_ParamLimits

0x7a39,	// (0x00030ae2) vid6_indi_pane_g1

0x7a4b,	// (0x00030af4) vid6_indi_pane_g2_ParamLimits

0x7a4b,	// (0x00030af4) vid6_indi_pane_g2

0x7a5d,	// (0x00030b06) vid6_indi_pane_g3_ParamLimits

0x7a5d,	// (0x00030b06) vid6_indi_pane_g3

0x7a72,	// (0x00030b1b) vid6_indi_pane_g4_ParamLimits

0x7a72,	// (0x00030b1b) vid6_indi_pane_g4

0x7a87,	// (0x00030b30) vid6_indi_pane_g5_ParamLimits

0x7a87,	// (0x00030b30) vid6_indi_pane_g5

0x0004,

0xfa4a,	// (0x00038af3) vid6_indi_pane_g_ParamLimits

0xfa4a,	// (0x00038af3) vid6_indi_pane_g

0x7aa1,	// (0x00030b4a) vid6_indi_pane_t1_ParamLimits

0x7aa1,	// (0x00030b4a) vid6_indi_pane_t1

0x7ab7,	// (0x00030b60) vid6_indi_pane_t2_ParamLimits

0x7ab7,	// (0x00030b60) vid6_indi_pane_t2

0x7adf,	// (0x00030b88) vid6_indi_pane_t3_ParamLimits

0x7adf,	// (0x00030b88) vid6_indi_pane_t3

0x7b07,	// (0x00030bb0) vid6_indi_pane_t4_ParamLimits

0x7b07,	// (0x00030bb0) vid6_indi_pane_t4

0x0003,

0xfa55,	// (0x00038afe) vid6_indi_pane_t_ParamLimits

0xfa55,	// (0x00038afe) vid6_indi_pane_t

0x7b2b,	// (0x00030bd4) wait_bar_pane_cp08

0x7b3a,	// (0x00030be3) main_cset_text2_pane_t1_ParamLimits

0x7b3a,	// (0x00030be3) main_cset_text2_pane_t1

0x7998,	// (0x00030a41) listscroll_gen_pane_cp06_t1_ParamLimits

0x7998,	// (0x00030a41) listscroll_gen_pane_cp06_t1

0xaf9e,	// (0x00034047) main_cam6_set_pane

0xb57b,	// (0x00034624) bg_tb_trans_pane_cp06_ParamLimits

0xb591,	// (0x0003463a) cam4_indicators_pane_g1_ParamLimits

0xb5a2,	// (0x0003464b) cam4_indicators_pane_g2_ParamLimits

0xf7d4,	// (0x0003887d) cam4_indicators_pane_g_ParamLimits

0xb5c0,	// (0x00034669) cam4_indicators_pane_t1_ParamLimits

0xaf90,	// (0x00034039) bg_tb_trans_pane_cp07_ParamLimits

0xb5ec,	// (0x00034695) vid4_indicators_pane_g1_ParamLimits

0xb600,	// (0x000346a9) vid4_indicators_pane_g2_ParamLimits

0xb614,	// (0x000346bd) vid4_indicators_pane_g3_ParamLimits

0xb625,	// (0x000346ce) vid4_indicators_pane_g4_ParamLimits

0xf7e6,	// (0x0003888f) vid4_indicators_pane_g_ParamLimits

0xb643,	// (0x000346ec) vid4_indicators_pane_t1_ParamLimits

0xb6d9,	// (0x00034782) vid4_progress_pane_g1_ParamLimits

0xb6e9,	// (0x00034792) vid4_progress_pane_g2_ParamLimits

0x1c4a,	// (0x0002acf3) vid4_progress_pane_g3_ParamLimits

0xb6f9,	// (0x000347a2) vid4_progress_pane_g4_ParamLimits

0xf986,	// (0x00038a2f) vid4_progress_pane_g_ParamLimits

0x1c5c,	// (0x0002ad05) vid4_progress_pane_t1_ParamLimits

0xb711,	// (0x000347ba) vid4_progress_pane_t2_ParamLimits

0xb726,	// (0x000347cf) vid4_progress_pane_t3_ParamLimits

0xf991,	// (0x00038a3a) vid4_progress_pane_t_ParamLimits

0x1c74,	// (0x0002ad1d) wait_bar_pane_cp07_ParamLimits

0x7b57,	// (0x00030c00) main_cam6_set_pane_g2_ParamLimits

0x7b57,	// (0x00030c00) main_cam6_set_pane_g2

0x7b7b,	// (0x00030c24) main_cset6_listscroll_pane_ParamLimits

0x7b7b,	// (0x00030c24) main_cset6_listscroll_pane

0x7b9b,	// (0x00030c44) main_cset6_slider_pane_ParamLimits

0x7b9b,	// (0x00030c44) main_cset6_slider_pane

0x7bb1,	// (0x00030c5a) main_cset6_text2_pane_ParamLimits

0x7bb1,	// (0x00030c5a) main_cset6_text2_pane

0x7bbf,	// (0x00030c68) main_cset6_text_pane

0x7bc7,	// (0x00030c70) main_cset_list_pane_copy1_ParamLimits

0x7bc7,	// (0x00030c70) main_cset_list_pane_copy1

0x7bd7,	// (0x00030c80) scroll_pane_cp028_copy1

0x7be0,	// (0x00030c89) cset_list_set_pane_copy1

0x7bf1,	// (0x00030c9a) aid_position_infowindow_above_copy1

0x7bf9,	// (0x00030ca2) aid_position_infowindow_below_copy1

0x7c01,	// (0x00030caa) cset_list_set_pane_g1_copy1

0x7c09,	// (0x00030cb2) cset_list_set_pane_g3_copy1_ParamLimits

0x7c09,	// (0x00030cb2) cset_list_set_pane_g3_copy1

0x7c18,	// (0x00030cc1) cset_list_set_pane_t1_copy1_ParamLimits

0x7c18,	// (0x00030cc1) cset_list_set_pane_t1_copy1

0xcf51,	// (0x00035ffa) list_highlight_pane_cp021_copy1_ParamLimits

0xcf51,	// (0x00035ffa) list_highlight_pane_cp021_copy1

0x7c2d,	// (0x00030cd6) cset6_slider_pane_ParamLimits

0x7c2d,	// (0x00030cd6) cset6_slider_pane

0x7c59,	// (0x00030d02) main_cset6_slider_pane_g1_ParamLimits

0x7c59,	// (0x00030d02) main_cset6_slider_pane_g1

0x7c81,	// (0x00030d2a) main_cset6_slider_pane_g2_ParamLimits

0x7c81,	// (0x00030d2a) main_cset6_slider_pane_g2

0x7ca9,	// (0x00030d52) main_cset6_slider_pane_g3_ParamLimits

0x7ca9,	// (0x00030d52) main_cset6_slider_pane_g3

0x7cb5,	// (0x00030d5e) main_cset6_slider_pane_g4_ParamLimits

0x7cb5,	// (0x00030d5e) main_cset6_slider_pane_g4

0x7cc1,	// (0x00030d6a) main_cset6_slider_pane_g5_ParamLimits

0x7cc1,	// (0x00030d6a) main_cset6_slider_pane_g5

0x664c,	// (0x0002f6f5) main_cset6_slider_pane_g7_ParamLimits

0x664c,	// (0x0002f6f5) main_cset6_slider_pane_g7

0x6658,	// (0x0002f701) main_cset6_slider_pane_g8_ParamLimits

0x6658,	// (0x0002f701) main_cset6_slider_pane_g8

0x6664,	// (0x0002f70d) main_cset6_slider_pane_g9_ParamLimits

0x6664,	// (0x0002f70d) main_cset6_slider_pane_g9

0x6670,	// (0x0002f719) main_cset6_slider_pane_g10_ParamLimits

0x6670,	// (0x0002f719) main_cset6_slider_pane_g10

0x667c,	// (0x0002f725) main_cset6_slider_pane_g11_ParamLimits

0x667c,	// (0x0002f725) main_cset6_slider_pane_g11

0x6688,	// (0x0002f731) main_cset6_slider_pane_g12_ParamLimits

0x6688,	// (0x0002f731) main_cset6_slider_pane_g12

0x6694,	// (0x0002f73d) main_cset6_slider_pane_g13_ParamLimits

0x6694,	// (0x0002f73d) main_cset6_slider_pane_g13

0x66a0,	// (0x0002f749) main_cset6_slider_pane_g14_ParamLimits

0x66a0,	// (0x0002f749) main_cset6_slider_pane_g14

0x7ccd,	// (0x00030d76) main_cset6_slider_pane_g15_ParamLimits

0x7ccd,	// (0x00030d76) main_cset6_slider_pane_g15

0x66c4,	// (0x0002f76d) main_cset6_slider_pane_g16_ParamLimits

0x66c4,	// (0x0002f76d) main_cset6_slider_pane_g16

0x66d0,	// (0x0002f779) main_cset6_slider_pane_g17_ParamLimits

0x66d0,	// (0x0002f779) main_cset6_slider_pane_g17

0x0011,

0xfa5e,	// (0x00038b07) main_cset6_slider_pane_g_ParamLimits

0xfa5e,	// (0x00038b07) main_cset6_slider_pane_g

0x7cfd,	// (0x00030da6) main_cset6_slider_pane_t1_ParamLimits

0x7cfd,	// (0x00030da6) main_cset6_slider_pane_t1

0x7d3e,	// (0x00030de7) main_cset6_slider_pane_t2_ParamLimits

0x7d3e,	// (0x00030de7) main_cset6_slider_pane_t2

0x7d69,	// (0x00030e12) main_cset6_slider_pane_t3_ParamLimits

0x7d69,	// (0x00030e12) main_cset6_slider_pane_t3

0x7d94,	// (0x00030e3d) main_cset6_slider_pane_t4_ParamLimits

0x7d94,	// (0x00030e3d) main_cset6_slider_pane_t4

0x7dbf,	// (0x00030e68) main_cset6_slider_pane_t5_ParamLimits

0x7dbf,	// (0x00030e68) main_cset6_slider_pane_t5

0x7dea,	// (0x00030e93) main_cset6_slider_pane_t7_ParamLimits

0x7dea,	// (0x00030e93) main_cset6_slider_pane_t7

0x7e20,	// (0x00030ec9) main_cset6_slider_pane_t8_ParamLimits

0x7e20,	// (0x00030ec9) main_cset6_slider_pane_t8

0x7e44,	// (0x00030eed) main_cset6_slider_pane_t9_ParamLimits

0x7e44,	// (0x00030eed) main_cset6_slider_pane_t9

0x7e68,	// (0x00030f11) main_cset6_slider_pane_t10_ParamLimits

0x7e68,	// (0x00030f11) main_cset6_slider_pane_t10

0x7e8c,	// (0x00030f35) main_cset6_slider_pane_t11_ParamLimits

0x7e8c,	// (0x00030f35) main_cset6_slider_pane_t11

0x7eb0,	// (0x00030f59) main_cset6_slider_pane_t14_ParamLimits

0x7eb0,	// (0x00030f59) main_cset6_slider_pane_t14

0x7ee9,	// (0x00030f92) main_cset6_slider_pane_t15_ParamLimits

0x7ee9,	// (0x00030f92) main_cset6_slider_pane_t15

0x000b,

0xfa83,	// (0x00038b2c) main_cset6_slider_pane_t_ParamLimits

0xfa83,	// (0x00038b2c) main_cset6_slider_pane_t

0x7f22,	// (0x00030fcb) cset_slider_pane_g1_copy1

0x7f2b,	// (0x00030fd4) cset_slider_pane_g2_copy1

0x7f34,	// (0x00030fdd) cset_slider_pane_g3_copy1

0xc963,	// (0x00035a0c) bg_popup_sub_pane_cp011_copy1

0x7f5a,	// (0x00031003) main_cset_text_pane_g1_copy1

0x6d0f,	// (0x0002fdb8) main_cset_text_pane_t1_copy1

0x6d1d,	// (0x0002fdc6) main_cset_text_pane_t2_copy1

0x6d2b,	// (0x0002fdd4) main_cset_text_pane_t3_copy1

0x6d39,	// (0x0002fde2) main_cset_text_pane_t4_copy1

0x6d47,	// (0x0002fdf0) main_cset_text_pane_t5_copy1

0x7f62,	// (0x0003100b) main_cset_text_pane_t6_copy1

0x7f70,	// (0x00031019) main_cset_text_pane_t7_copy1

0x7b3a,	// (0x00030be3) main_cset_text2_pane_t1_copy1

0xaf90,	// (0x00034039) main_ncimui_pane

0x0fd2,	// (0x0002a07b) popup_query_ncimui_window_ParamLimits

0x0fd2,	// (0x0002a07b) popup_query_ncimui_window

0x4f41,	// (0x0002dfea) field_cale_ev2_pane_g4_ParamLimits

0x4f41,	// (0x0002dfea) field_cale_ev2_pane_g4

0x5f4f,	// (0x0002eff8) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5f4f,	// (0x0002eff8) cell_video_dialer_keypad_pane_g2

0x0001,

0xf76e,	// (0x00038817) cell_video_dialer_keypad_pane_g_ParamLimits

0xf76e,	// (0x00038817) cell_video_dialer_keypad_pane_g

0x5f67,	// (0x0002f010) cell_video_dialer_keypad_pane_t1

0xc963,	// (0x00035a0c) bg_popup_window_pane_cp012

0xd9a5,	// (0x00036a4e) heading_pane_cp06

0x80c5,	// (0x0003116e) ncim_query_content_pane

0xc963,	// (0x00035a0c) bg_popup_heading_pane_cp01

0x80cd,	// (0x00031176) ncim_heading_pane_t1

0x80db,	// (0x00031184) ncim_indicator_popup_pane

0x80ed,	// (0x00031196) ncim_query_button_pane

0x810d,	// (0x000311b6) ncim_query_content_pane_t1

0x811f,	// (0x000311c8) ncim_query_content_pane_t2

0x0005,

0xfaad,	// (0x00038b56) ncim_query_content_pane_t

0x81d1,	// (0x0003127a) ncim_query_list_pane

0x81e3,	// (0x0003128c) ncim_query_popup_pane

0x80db,	// (0x00031184) ncim_indicator_popup_pane_ParamLimits

0x80f5,	// (0x0003119e) ncim_query_content_pane_g1_ParamLimits

0x80f5,	// (0x0003119e) ncim_query_content_pane_g1

0x810d,	// (0x000311b6) ncim_query_content_pane_t1_ParamLimits

0x811f,	// (0x000311c8) ncim_query_content_pane_t2_ParamLimits

0x8131,	// (0x000311da) ncim_query_content_pane_t3_ParamLimits

0x8131,	// (0x000311da) ncim_query_content_pane_t3

0x8159,	// (0x00031202) ncim_query_content_pane_t4_ParamLimits

0x8159,	// (0x00031202) ncim_query_content_pane_t4

0x8181,	// (0x0003122a) ncim_query_content_pane_t5_ParamLimits

0x8181,	// (0x0003122a) ncim_query_content_pane_t5

0x81a9,	// (0x00031252) ncim_query_content_pane_t6_ParamLimits

0x81a9,	// (0x00031252) ncim_query_content_pane_t6

0xfaad,	// (0x00038b56) ncim_query_content_pane_t_ParamLimits

0x81d1,	// (0x0003127a) ncim_query_list_pane_ParamLimits

0x81e3,	// (0x0003128c) ncim_query_popup_pane_ParamLimits

0x81f7,	// (0x000312a0) wait_bar_pane_cp04

0xc963,	// (0x00035a0c) input_focus_pane_cp011

0x81ff,	// (0x000312a8) ncim_query_popup_pane_t1

0x820d,	// (0x000312b6) ncim_list_query_list_pane_ParamLimits

0x820d,	// (0x000312b6) ncim_list_query_list_pane

0xc963,	// (0x00035a0c) bg_button_pane_cp027

0x821a,	// (0x000312c3) ncim_query_button_pane_g1

0xc963,	// (0x00035a0c) list_highlight_pane_cp012

0x8224,	// (0x000312cd) ncim_list_query_list_pane_g1

0x822c,	// (0x000312d5) ncim_list_query_list_pane_t1

0xb5b1,	// (0x0003465a) cam4_indicators_pane_g3_ParamLimits

0xb5b1,	// (0x0003465a) cam4_indicators_pane_g3

0xb631,	// (0x000346da) vid4_indicators_pane_g5_ParamLimits

0xb631,	// (0x000346da) vid4_indicators_pane_g5

0xb705,	// (0x000347ae) vid4_progress_pane_g5_ParamLimits

0xb705,	// (0x000347ae) vid4_progress_pane_g5

0x7fb0,	// (0x00031059) main_ncimui_pane_g1

0x8019,	// (0x000310c2) ncimui_group_query_pane_ParamLimits

0x8019,	// (0x000310c2) ncimui_group_query_pane

0x8061,	// (0x0003110a) ncimui_list_pane_ParamLimits

0x8061,	// (0x0003110a) ncimui_list_pane

0x8088,	// (0x00031131) ncimui_text_pane_ParamLimits

0x8088,	// (0x00031131) ncimui_text_pane

0x823a,	// (0x000312e3) ncimui_text_pane_t1_ParamLimits

0x823a,	// (0x000312e3) ncimui_text_pane_t1

0x8258,	// (0x00031301) ncimui_list_single_graphic_pane_ParamLimits

0x8258,	// (0x00031301) ncimui_list_single_graphic_pane

0x8268,	// (0x00031311) ncimui_query_pane_ParamLimits

0x8268,	// (0x00031311) ncimui_query_pane

0xc963,	// (0x00035a0c) list_highlight_pane_cp013

0x827b,	// (0x00031324) ncim_list_query_list_pane_t1_copy1

0x8224,	// (0x000312cd) ncim_list_single_graphic_pane_g1

0x8289,	// (0x00031332) ncim_query_button_pane_cp01

0x8295,	// (0x0003133e) ncim_query_entry_pane_ParamLimits

0x8295,	// (0x0003133e) ncim_query_entry_pane

0x82a8,	// (0x00031351) ncimui_query_pane_g1

0x82b4,	// (0x0003135d) ncimui_query_pane_t1_ParamLimits

0x82b4,	// (0x0003135d) ncimui_query_pane_t1

0xcf51,	// (0x00035ffa) input_focus_pane_cp012

0x82cd,	// (0x00031376) ncim_query_entry_pane_t1

0xd100,	// (0x000361a9) main_im_pane_ParamLimits

0xaf90,	// (0x00034039) main_mobtv_pane_ParamLimits

0xaf90,	// (0x00034039) main_mobtv_pane

0x7ce5,	// (0x00030d8e) main_cset6_slider_pane_g18_ParamLimits

0x7ce5,	// (0x00030d8e) main_cset6_slider_pane_g18

0x7cf1,	// (0x00030d9a) main_cset6_slider_pane_g19_ParamLimits

0x7cf1,	// (0x00030d9a) main_cset6_slider_pane_g19

0xd080,	// (0x00036129) bg_main_mobtv_pane_ParamLimits

0xd080,	// (0x00036129) bg_main_mobtv_pane

0x82df,	// (0x00031388) main_mobtv_info_pane

0x82e8,	// (0x00031391) main_mobtv_loading_pane_ParamLimits

0x82e8,	// (0x00031391) main_mobtv_loading_pane

0x82f5,	// (0x0003139e) main_mobtv_pg_channel_list_pane

0x82ff,	// (0x000313a8) main_mobtv_pg_hdr_pane

0x8308,	// (0x000313b1) main_mobtv_programe_curr_pane_ParamLimits

0x8308,	// (0x000313b1) main_mobtv_programe_curr_pane

0x8315,	// (0x000313be) main_mobtv_programe_next_pane_ParamLimits

0x8315,	// (0x000313be) main_mobtv_programe_next_pane

0x8322,	// (0x000313cb) popup_mobtv_noti_window

0xd0a2,	// (0x0003614b) main_tv_pg_hdr_pane_g1

0x832a,	// (0x000313d3) main_tv_pg_hdr_pane_g2

0x8332,	// (0x000313db) main_tv_pg_hdr_pane_g3

0x833a,	// (0x000313e3) main_tv_pg_hdr_pane_g4

0x8342,	// (0x000313eb) main_tv_pg_hdr_pane_g5

0x834c,	// (0x000313f5) main_tv_pg_hdr_pane_g6

0x8356,	// (0x000313ff) main_tv_pg_hdr_pane_g7

0x8360,	// (0x00031409) main_tv_pg_hdr_pane_g8

0x836a,	// (0x00031413) main_tv_pg_hdr_pane_g9

0x8374,	// (0x0003141d) main_tv_pg_hdr_pane_g10

0x837e,	// (0x00031427) main_tv_pg_hdr_pane_g11

0x000a,

0xfaba,	// (0x00038b63) main_tv_pg_hdr_pane_g

0x8388,	// (0x00031431) main_tv_pg_hdr_pane_t1

0x8396,	// (0x0003143f) main_tv_pg_hdr_pane_t2

0x83a4,	// (0x0003144d) main_tv_pg_hdr_pane_t3

0x83b4,	// (0x0003145d) main_tv_pg_hdr_pane_t4

0x83c4,	// (0x0003146d) main_tv_pg_hdr_pane_t5

0x0004,

0xfad1,	// (0x00038b7a) main_tv_pg_hdr_pane_t

0x83d4,	// (0x0003147d) single_mobtv_pg_channel_pane_ParamLimits

0x83d4,	// (0x0003147d) single_mobtv_pg_channel_pane

0x83e6,	// (0x0003148f) single_mobtv_pg_channel_table_pane

0x83ef,	// (0x00031498) single_mobtv_pg_channel_thumb_pane

0x83f8,	// (0x000314a1) single_tv_pg_channel_pane_g1

0x8401,	// (0x000314aa) single_tv_pg_channel_pane_g2

0x0001,

0xfadc,	// (0x00038b85) single_tv_pg_channel_pane_g

0xd064,	// (0x0003610d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd064,	// (0x0003610d) bg_single_mobtv_pg_channel_thumb_pane

0x840a,	// (0x000314b3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x840a,	// (0x000314b3) single_mobtv_pg_channel_thumb_pane_g1

0x8418,	// (0x000314c1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x8418,	// (0x000314c1) single_mobtv_pg_channel_thumb_pane_g2

0x8424,	// (0x000314cd) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x8424,	// (0x000314cd) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfae1,	// (0x00038b8a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfae1,	// (0x00038b8a) single_mobtv_pg_channel_thumb_pane_g

0x8430,	// (0x000314d9) single_mobtv_pg_channel_thumb_pane_t1

0x843e,	// (0x000314e7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfae8,	// (0x00038b91) single_mobtv_pg_channel_thumb_pane_t

0xd0a2,	// (0x0003614b) bg_single_mobtv_pg_channel_table_pane_g1

0xd0a2,	// (0x0003614b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00038135) bg_single_mobtv_pg_channel_table_pane_g

0x844c,	// (0x000314f5) single_mobtv_pg_channel_table_pane_t1

0x845a,	// (0x00031503) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfaed,	// (0x00038b96) single_mobtv_pg_channel_table_pane_t

0x8470,	// (0x00031519) main_mobtv_info_pane_g1_ParamLimits

0x8470,	// (0x00031519) main_mobtv_info_pane_g1

0x848e,	// (0x00031537) main_mobtv_info_pane_t1_ParamLimits

0x848e,	// (0x00031537) main_mobtv_info_pane_t1

0x8506,	// (0x000315af) main_mobtv_info_pane_t2_ParamLimits

0x8506,	// (0x000315af) main_mobtv_info_pane_t2

0x0002,

0xfaf7,	// (0x00038ba0) main_mobtv_info_pane_t_ParamLimits

0xfaf7,	// (0x00038ba0) main_mobtv_info_pane_t

0x8595,	// (0x0003163e) wait_bar_pane_cp05

0x85a7,	// (0x00031650) main_mobtv_loading_pane_g1_ParamLimits

0x85a7,	// (0x00031650) main_mobtv_loading_pane_g1

0x85ba,	// (0x00031663) main_mobtv_loading_pane_g2_ParamLimits

0x85ba,	// (0x00031663) main_mobtv_loading_pane_g2

0x85c6,	// (0x0003166f) main_mobtv_loading_pane_g3_ParamLimits

0x85c6,	// (0x0003166f) main_mobtv_loading_pane_g3

0x0002,

0xfafe,	// (0x00038ba7) main_mobtv_loading_pane_g_ParamLimits

0xfafe,	// (0x00038ba7) main_mobtv_loading_pane_g

0x85d9,	// (0x00031682) main_mobtv_loading_pane_t1_ParamLimits

0x85d9,	// (0x00031682) main_mobtv_loading_pane_t1

0x85f1,	// (0x0003169a) main_mobtv_loading_pane_t2_ParamLimits

0x85f1,	// (0x0003169a) main_mobtv_loading_pane_t2

0x0001,

0xfb05,	// (0x00038bae) main_mobtv_loading_pane_t_ParamLimits

0xfb05,	// (0x00038bae) main_mobtv_loading_pane_t

0x8615,	// (0x000316be) wait_bar_pane_cp06_ParamLimits

0x8615,	// (0x000316be) wait_bar_pane_cp06

0x8624,	// (0x000316cd) main_mobtv_programe_curr_pane_t1

0x8632,	// (0x000316db) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb0a,	// (0x00038bb3) main_mobtv_programe_curr_pane_t

0x8640,	// (0x000316e9) main_mobtv_programe_next_pane_t1

0x864e,	// (0x000316f7) main_mobtv_programe_next_pane_t2

0x865c,	// (0x00031705) main_mobtv_programe_next_pane_t3

0x0002,

0xfb0f,	// (0x00038bb8) main_mobtv_programe_next_pane_t

0xc963,	// (0x00035a0c) bg_popup_mobtv_noti_window_pane

0x866a,	// (0x00031713) popup_mobtv_noti_window_g1

0x8672,	// (0x0003171b) popup_mobtv_noti_window_t1

0x8680,	// (0x00031729) popup_mobtv_noti_window_t2

0x0001,

0xfb16,	// (0x00038bbf) popup_mobtv_noti_window_t

0xd0a2,	// (0x0003614b) bg_popup_mobtv_noti_window_pane_g1

0xaf9e,	// (0x00034047) sc_clock_pane

0xaf9e,	// (0x00034047) main_fs_bigclock_pane

0x765f,	// (0x00030708) blid2_tripm_pane_t4_ParamLimits

0x765f,	// (0x00030708) blid2_tripm_pane_t4

0xd064,	// (0x0003610d) sc_clock_pane_g1_ParamLimits

0xd064,	// (0x0003610d) sc_clock_pane_g1

0xd0ac,	// (0x00036155) sc_clock_pane_t1_ParamLimits

0xd0ac,	// (0x00036155) sc_clock_pane_t1

0xd0ac,	// (0x00036155) sc_clock_pane_t2_ParamLimits

0xd0ac,	// (0x00036155) sc_clock_pane_t2

0xd0ac,	// (0x00036155) sc_clock_pane_t3_ParamLimits

0xd0ac,	// (0x00036155) sc_clock_pane_t3

0x0004,

0xfb1b,	// (0x00038bc4) sc_clock_pane_t_ParamLimits

0xfb1b,	// (0x00038bc4) sc_clock_pane_t

0x9554,	// (0x000325fd) main_fs_bigclock_indicator_pane_ParamLimits

0x9554,	// (0x000325fd) main_fs_bigclock_indicator_pane

0x86dd,	// (0x00031786) main_fs_bigclock_pane_g1_ParamLimits

0x86dd,	// (0x00031786) main_fs_bigclock_pane_g1

0x9560,	// (0x00032609) main_fs_bigclock_pane_t1_ParamLimits

0x9560,	// (0x00032609) main_fs_bigclock_pane_t1

0x9572,	// (0x0003261b) main_fs_bigclock_pane_t2_ParamLimits

0x9572,	// (0x0003261b) main_fs_bigclock_pane_t2

0x9586,	// (0x0003262f) main_fs_bigclock_pane_t3_ParamLimits

0x9586,	// (0x0003262f) main_fs_bigclock_pane_t3

0x0002,

0xfc97,	// (0x00038d40) main_fs_bigclock_pane_t_ParamLimits

0xfc97,	// (0x00038d40) main_fs_bigclock_pane_t

0xbec2,	// (0x00034f6b) main_fs_bigclock_indicator_pane_g1

0x8101,	// (0x000311aa) ncim_query_content_pane_g2_ParamLimits

0x8101,	// (0x000311aa) ncim_query_content_pane_g2

0x0001,

0xfaa8,	// (0x00038b51) ncim_query_content_pane_g_ParamLimits

0xfaa8,	// (0x00038b51) ncim_query_content_pane_g

0xd0ac,	// (0x00036155) sc_clock_pane_t4_ParamLimits

0xd0ac,	// (0x00036155) sc_clock_pane_t4

0xaf90,	// (0x00034039) main_radioblah_pane

0xb51b,	// (0x000345c4) cell_call4_button_pane_t1_copy1_ParamLimits

0xb51b,	// (0x000345c4) cell_call4_button_pane_t1_copy1

0x7fc8,	// (0x00031071) main_ncimui_pane_t1_ParamLimits

0x7fc8,	// (0x00031071) main_ncimui_pane_t1

0x7fe2,	// (0x0003108b) main_ncimui_pane_t2_ParamLimits

0x7fe2,	// (0x0003108b) main_ncimui_pane_t2

0x0002,

0xfaa1,	// (0x00038b4a) main_ncimui_pane_t_ParamLimits

0xfaa1,	// (0x00038b4a) main_ncimui_pane_t

0xdde5,	// (0x00036e8e) main_radioblah_anim_pane_ParamLimits

0xdde5,	// (0x00036e8e) main_radioblah_anim_pane

0xdde5,	// (0x00036e8e) main_radioblah_info_pane_ParamLimits

0xdde5,	// (0x00036e8e) main_radioblah_info_pane

0xddd1,	// (0x00036e7a) main_radioblah_pane_t1_ParamLimits

0xddd1,	// (0x00036e7a) main_radioblah_pane_t1

0xddd1,	// (0x00036e7a) main_radioblah_pane_t2_ParamLimits

0xddd1,	// (0x00036e7a) main_radioblah_pane_t2

0x0003,

0xfb3c,	// (0x00038be5) main_radioblah_pane_t_ParamLimits

0xfb3c,	// (0x00038be5) main_radioblah_pane_t

0xcf51,	// (0x00035ffa) main_radioblah_rocker_ctrl_pane_ParamLimits

0xcf51,	// (0x00035ffa) main_radioblah_rocker_ctrl_pane

0x8891,	// (0x0003193a) main_radioblah_info_pane_t1_ParamLimits

0x8891,	// (0x0003193a) main_radioblah_info_pane_t1

0x88a5,	// (0x0003194e) main_radioblah_info_pane_t2_ParamLimits

0x88a5,	// (0x0003194e) main_radioblah_info_pane_t2

0x0003,

0xfb45,	// (0x00038bee) main_radioblah_info_pane_t_ParamLimits

0xfb45,	// (0x00038bee) main_radioblah_info_pane_t

0xd0a2,	// (0x0003614b) main_radioblah_rocker_ctrl_pane_g1

0xd0a2,	// (0x0003614b) main_radioblah_rocker_ctrl_pane_g2

0xd0a2,	// (0x0003614b) main_radioblah_rocker_ctrl_pane_g3

0xd0a2,	// (0x0003614b) main_radioblah_rocker_ctrl_pane_g4

0xd0a2,	// (0x0003614b) main_radioblah_rocker_ctrl_pane_g5

0xd0a2,	// (0x0003614b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0x05b3,	// (0x0002965c) main_radioblah_rocker_ctrl_pane_g

0x7b3a,	// (0x00030be3) main_cset_text2_pane_t1_copy1_ParamLimits

0xb561,	// (0x0003460a) cam4_image_uncrop_qvga_pane

0xb5da,	// (0x00034683) vid4_image_uncrop_qcif_pane

0xb73b,	// (0x000347e4) cam6_image_uncrop_qvga_pane_ParamLimits

0xb73b,	// (0x000347e4) cam6_image_uncrop_qvga_pane

0x79e7,	// (0x00030a90) vid6_image_uncrop_qcif_pane_ParamLimits

0x79e7,	// (0x00030a90) vid6_image_uncrop_qcif_pane

0xc963,	// (0x00035a0c) bg_popup_preview_window_pane_cp03

0x7f7e,	// (0x00031027) list_cset_text2_pane

0x7f86,	// (0x0003102f) main_cset6_text2_pane_g1

0x7f8e,	// (0x00031037) main_cset6_text2_pane_t1

0x88f4,	// (0x0003199d) list_cset_text2_pane_t1_ParamLimits

0x88f4,	// (0x0003199d) list_cset_text2_pane_t1

0xaf90,	// (0x00034039) main_radioblah_pane_ParamLimits

0x8581,	// (0x0003162a) main_mobtv_info_pane_t3_ParamLimits

0x8581,	// (0x0003162a) main_mobtv_info_pane_t3

0xddc3,	// (0x00036e6c) main_radioblah_pane_g1

0x8861,	// (0x0003190a) main_radioblah_info_pane_g1

0xd0c0,	// (0x00036169) main_radioblah_info_pane_t3_ParamLimits

0xd0c0,	// (0x00036169) main_radioblah_info_pane_t3

0x3492,	// (0x0002c53b) highlight_cell_cale_month_pane_ParamLimits

0x3492,	// (0x0002c53b) highlight_cell_cale_month_pane

0xaf9e,	// (0x00034047) main_phob_fisheye_pane

0x56d5,	// (0x0002e77e) scroll_pane_cp0031_ParamLimits

0x56d5,	// (0x0002e77e) scroll_pane_cp0031

0x7b2b,	// (0x00030bd4) wait_bar_pane_cp08_ParamLimits

0x7be0,	// (0x00030c89) cset_list_set_pane_copy1_ParamLimits

0x890d,	// (0x000319b6) highlight_cell_cale_month_pane_g1

0x8915,	// (0x000319be) highlight_cell_cale_month_pane_t1

0x7270,	// (0x00030319) list_gen_pane_cp01

0x659f,	// (0x0002f648) scroll_pane_01

0x8923,	// (0x000319cc) list_single_double_fisheye_pane

0x892c,	// (0x000319d5) list_double_fisheye_pane_g1_ParamLimits

0x892c,	// (0x000319d5) list_double_fisheye_pane_g1

0x8938,	// (0x000319e1) list_double_fisheye_pane_g2_ParamLimits

0x8938,	// (0x000319e1) list_double_fisheye_pane_g2

0x894c,	// (0x000319f5) list_double_fisheye_pane_g3_ParamLimits

0x894c,	// (0x000319f5) list_double_fisheye_pane_g3

0x0004,

0xfb4e,	// (0x00038bf7) list_double_fisheye_pane_g_ParamLimits

0xfb4e,	// (0x00038bf7) list_double_fisheye_pane_g

0x8975,	// (0x00031a1e) list_double_fisheye_pane_t1_ParamLimits

0x8975,	// (0x00031a1e) list_double_fisheye_pane_t1

0x8990,	// (0x00031a39) list_double_fisheye_pane_t2_ParamLimits

0x8990,	// (0x00031a39) list_double_fisheye_pane_t2

0x0001,

0xfb59,	// (0x00038c02) list_double_fisheye_pane_t_ParamLimits

0xfb59,	// (0x00038c02) list_double_fisheye_pane_t

0xaf9e,	// (0x00034047) main_call5_pane

0xcf51,	// (0x00035ffa) sc_swipe_pane_ParamLimits

0xcf51,	// (0x00035ffa) sc_swipe_pane

0x89c5,	// (0x00031a6e) call5_image_pane_ParamLimits

0x89c5,	// (0x00031a6e) call5_image_pane

0x89e2,	// (0x00031a8b) call5_swipe_1_pane_ParamLimits

0x89e2,	// (0x00031a8b) call5_swipe_1_pane

0x89f5,	// (0x00031a9e) call5_swipe_2_pane_ParamLimits

0x89f5,	// (0x00031a9e) call5_swipe_2_pane

0x8a20,	// (0x00031ac9) popup_call5_audio_first_window_ParamLimits

0x8a20,	// (0x00031ac9) popup_call5_audio_first_window

0xd064,	// (0x0003610d) call5_swipe_1_pane_g1_ParamLimits

0xd064,	// (0x0003610d) call5_swipe_1_pane_g1

0x8a31,	// (0x00031ada) call5_swipe_1_pane_g2_ParamLimits

0x8a31,	// (0x00031ada) call5_swipe_1_pane_g2

0x0001,

0xfb5e,	// (0x00038c07) call5_swipe_1_pane_g_ParamLimits

0xfb5e,	// (0x00038c07) call5_swipe_1_pane_g

0x8a3d,	// (0x00031ae6) call5_swipe_1_pane_t1_ParamLimits

0x8a3d,	// (0x00031ae6) call5_swipe_1_pane_t1

0xd064,	// (0x0003610d) call5_swipe_2_pane_g1_ParamLimits

0xd064,	// (0x0003610d) call5_swipe_2_pane_g1

0x8a52,	// (0x00031afb) call5_swipe_2_pane_g2_ParamLimits

0x8a52,	// (0x00031afb) call5_swipe_2_pane_g2

0x0001,

0xfb63,	// (0x00038c0c) call5_swipe_2_pane_g_ParamLimits

0xfb63,	// (0x00038c0c) call5_swipe_2_pane_g

0x8a5e,	// (0x00031b07) call5_swipe_2_pane_t1_ParamLimits

0x8a5e,	// (0x00031b07) call5_swipe_2_pane_t1

0xd064,	// (0x0003610d) sc_swipe_pane_g1_ParamLimits

0xd064,	// (0x0003610d) sc_swipe_pane_g1

0xd072,	// (0x0003611b) sc_swipe_pane_g2_ParamLimits

0xd072,	// (0x0003611b) sc_swipe_pane_g2

0x0001,

0x05da,	// (0x00029683) sc_swipe_pane_g_ParamLimits

0x05da,	// (0x00029683) sc_swipe_pane_g

0xd0ac,	// (0x00036155) sc_swipe_pane_t1_ParamLimits

0xd0ac,	// (0x00036155) sc_swipe_pane_t1

0xaf9e,	// (0x00034047) main_cmail_launcher_pane

0x8a73,	// (0x00031b1c) aid_size_cell_cmail_l_ParamLimits

0x8a73,	// (0x00031b1c) aid_size_cell_cmail_l

0x8a81,	// (0x00031b2a) grid_cmail_l_pane_ParamLimits

0x8a81,	// (0x00031b2a) grid_cmail_l_pane

0x8a9b,	// (0x00031b44) cell_cmail_l_pane_ParamLimits

0x8a9b,	// (0x00031b44) cell_cmail_l_pane

0x8ab5,	// (0x00031b5e) cell_cmail_l_pane_g1_ParamLimits

0x8ab5,	// (0x00031b5e) cell_cmail_l_pane_g1

0x8ac1,	// (0x00031b6a) cell_cmail_l_pane_t1_ParamLimits

0x8ac1,	// (0x00031b6a) cell_cmail_l_pane_t1

0x8ad7,	// (0x00031b80) cell_cmail_l_pane_t2_ParamLimits

0x8ad7,	// (0x00031b80) cell_cmail_l_pane_t2

0x0001,

0xfb68,	// (0x00038c11) cell_cmail_l_pane_t_ParamLimits

0xfb68,	// (0x00038c11) cell_cmail_l_pane_t

0xcf51,	// (0x00035ffa) grid_highlight_pane_cp018_ParamLimits

0xcf51,	// (0x00035ffa) grid_highlight_pane_cp018

0x0935,	// (0x000299de) main2_pane_ParamLimits

0x0935,	// (0x000299de) main2_pane

0xd198,	// (0x00036241) popup_sp_fs_action_menu_bg_pane_g1

0xd1a0,	// (0x00036249) popup_sp_fs_action_menu_bg_pane_g2

0xd1a8,	// (0x00036251) popup_sp_fs_action_menu_bg_pane_g3

0xd1b0,	// (0x00036259) popup_sp_fs_action_menu_bg_pane_g4

0xd1b8,	// (0x00036261) popup_sp_fs_action_menu_bg_pane_g5

0xd1c0,	// (0x00036269) popup_sp_fs_action_menu_bg_pane_g6

0xd1c8,	// (0x00036271) popup_sp_fs_action_menu_bg_pane_g7

0xd1d0,	// (0x00036279) popup_sp_fs_action_menu_bg_pane_g8

0xd1d8,	// (0x00036281) popup_sp_fs_action_menu_bg_pane_g9

0xd1e0,	// (0x00036289) popup_sp_fs_action_menu_bg_pane_g10

0xd1e0,	// (0x00036289) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x00038186) popup_sp_fs_action_menu_bg_pane_g

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g3_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g3_g1

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g3_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g3_g2

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g3_g3_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x00038234) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x00038234) list_medium_line_x2_t3_g3_g

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g3_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g3_t1

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g3_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g3_t2

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g3_t3_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x0003823b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x0003823b) list_medium_line_x2_t3_g3_t

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g2_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g2_g1

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g2_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x00038242) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x00038242) list_medium_line_x2_t3_g2_g

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g2_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g2_t1

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g2_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g2_t2

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g2_t3_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x0003823b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x0003823b) list_medium_line_x2_t3_g2_t

0xd064,	// (0x0003610d) list_medium_line_x2_t4_g4_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t4_g4_g1

0xd064,	// (0x0003610d) list_medium_line_x2_t4_g4_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t4_g4_g2

0xd064,	// (0x0003610d) list_medium_line_x2_t4_g4_g3_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t4_g4_g3

0xd064,	// (0x0003610d) list_medium_line_x2_t4_g4_g4_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x00038247) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x00038247) list_medium_line_x2_t4_g4_g

0xd0ac,	// (0x00036155) list_medium_line_x2_t4_g4_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t4_g4_t1

0xd0ac,	// (0x00036155) list_medium_line_x2_t4_g4_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t4_g4_t2

0xd0ac,	// (0x00036155) list_medium_line_x2_t4_g4_t3_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t4_g4_t3

0xd0ac,	// (0x00036155) list_medium_line_x2_t4_g4_t4_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x00038250) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x00038250) list_medium_line_x2_t4_g4_t

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g4_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g4_g1

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g4_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g4_g2

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g4_g3_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g4_g3

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g4_g4_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x00038247) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x00038247) list_medium_line_x2_t2_g4_g

0xd0ac,	// (0x00036155) list_medium_line_x2_t2_g4_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t2_g4_t1

0xd0ac,	// (0x00036155) list_medium_line_x2_t2_g4_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x00038217) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x00038217) list_medium_line_x2_t2_g4_t

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g3_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g3_g1

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g3_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g3_g2

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g3_g3_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x00038234) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x00038234) list_medium_line_x2_t2_g3_g

0xd0ac,	// (0x00036155) list_medium_line_x2_t2_g3_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t2_g3_t1

0xd0ac,	// (0x00036155) list_medium_line_x2_t2_g3_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x00038217) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x00038217) list_medium_line_x2_t2_g3_t

0x35ca,	// (0x0002c673) main_sp_fs_list_pane_ParamLimits

0x35ca,	// (0x0002c673) main_sp_fs_list_pane

0x35d6,	// (0x0002c67f) sp_fs_scroll_pane_ParamLimits

0x35d6,	// (0x0002c67f) sp_fs_scroll_pane

0xd81e,	// (0x000368c7) list_medium_line_x2_t3_t1

0xd81e,	// (0x000368c7) list_medium_line_x2_t3_t2

0xd81e,	// (0x000368c7) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x000382fd) list_medium_line_x2_t3_t

0xd81e,	// (0x000368c7) list_medium_line_x3_t4_t1

0xd81e,	// (0x000368c7) list_medium_line_x3_t4_t2

0xd81e,	// (0x000368c7) list_medium_line_x3_t4_t3

0xd81e,	// (0x000368c7) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x00038304) list_medium_line_x3_t4_t

0xd81e,	// (0x000368c7) list_medium_line_x4_t5_t1

0xd81e,	// (0x000368c7) list_medium_line_x4_t5_t2

0xd81e,	// (0x000368c7) list_medium_line_x4_t5_t3

0xd81e,	// (0x000368c7) list_medium_line_x4_t5_t4

0xd81e,	// (0x000368c7) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x0003830d) list_medium_line_x4_t5_t

0xd064,	// (0x0003610d) list_medium_line_t4_g4_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_t4_g4_g1

0xd064,	// (0x0003610d) list_medium_line_t4_g4_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_t4_g4_g2

0xd064,	// (0x0003610d) list_medium_line_t4_g4_g3_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_t4_g4_g3

0xd064,	// (0x0003610d) list_medium_line_t4_g4_g4_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x00038247) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x00038247) list_medium_line_t4_g4_g

0xd0ac,	// (0x00036155) list_medium_line_t4_g4_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t4_g4_t1

0xd0ac,	// (0x00036155) list_medium_line_t4_g4_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t4_g4_t2

0xd0ac,	// (0x00036155) list_medium_line_t4_g4_t3_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t4_g4_t3

0xd0ac,	// (0x00036155) list_medium_line_t4_g4_t4_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x00038250) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x00038250) list_medium_line_t4_g4_t

0x3671,	// (0x0002c71a) chi_dic_find_pane_g1

0x0d9c,	// (0x00029e45) main_tport_pane

0xd81e,	// (0x000368c7) list_medium_line_plain_t1

0xd064,	// (0x0003610d) list_medium_line_t2_g2_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_t2_g2_g1

0xd064,	// (0x0003610d) list_medium_line_t2_g2_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x00038242) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x00038242) list_medium_line_t2_g2_g

0xd0ac,	// (0x00036155) list_medium_line_t2_g2_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t2_g2_t1

0xd0ac,	// (0x00036155) list_medium_line_t2_g2_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x00038217) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x00038217) list_medium_line_t2_g2_t

0x7327,	// (0x000303d0) aid_sp_fs_list_icon_a_sm

0x732f,	// (0x000303d8) aid_sp_fs_list_icon_d

0x7337,	// (0x000303e0) aid_sp_fs_text_primary

0x7340,	// (0x000303e9) aid_sp_fs_text_secondary

0xc963,	// (0x00035a0c) list_medium_line

0xc963,	// (0x00035a0c) list_medium_line_g2

0xc963,	// (0x00035a0c) list_medium_line_g3

0xc963,	// (0x00035a0c) list_medium_line_plain

0xc963,	// (0x00035a0c) list_medium_line_plain_t2

0xc963,	// (0x00035a0c) list_medium_line_plain_t3

0xc963,	// (0x00035a0c) list_medium_line_right_icon

0xc963,	// (0x00035a0c) list_medium_line_right_iconx2

0xc963,	// (0x00035a0c) list_medium_line_t2

0xc963,	// (0x00035a0c) list_medium_line_t2_g2

0xc963,	// (0x00035a0c) list_medium_line_t2_g3

0xc963,	// (0x00035a0c) list_medium_line_t2_right_icon

0xc963,	// (0x00035a0c) list_medium_line_t2_right_iconx2

0xc963,	// (0x00035a0c) list_medium_line_t3

0xc963,	// (0x00035a0c) list_medium_line_t3_g2

0xc963,	// (0x00035a0c) list_medium_line_t3_g3

0xc963,	// (0x00035a0c) list_medium_line_t3_right_iconx2

0xc963,	// (0x00035a0c) list_medium_line_t4_g4

0xc963,	// (0x00035a0c) list_medium_line_x2

0xc963,	// (0x00035a0c) list_medium_line_x2_t2_g2

0xc963,	// (0x00035a0c) list_medium_line_x2_t2_g3

0xc963,	// (0x00035a0c) list_medium_line_x2_t2_g4

0xc963,	// (0x00035a0c) list_medium_line_x2_t3

0xc963,	// (0x00035a0c) list_medium_line_x2_t3_g2

0xc963,	// (0x00035a0c) list_medium_line_x2_t3_g3

0xc963,	// (0x00035a0c) list_medium_line_x2_t3_g4

0xc963,	// (0x00035a0c) list_medium_line_x2_t4_g2

0xc963,	// (0x00035a0c) list_medium_line_x2_t4_g4

0xc963,	// (0x00035a0c) list_medium_line_x3

0xc963,	// (0x00035a0c) list_medium_line_x3_t4

0xc963,	// (0x00035a0c) list_medium_line_x3_t4_g4

0xc963,	// (0x00035a0c) list_medium_line_x4_t4

0xc963,	// (0x00035a0c) list_medium_line_x4_t4_g7

0xc963,	// (0x00035a0c) list_medium_line_x4_t5

0x7349,	// (0x000303f2) list_single_fs_dyc_pane_ParamLimits

0x7349,	// (0x000303f2) list_single_fs_dyc_pane

0xd064,	// (0x0003610d) list_medium_line_x4_t4_g7_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x4_t4_g7_g1

0xd064,	// (0x0003610d) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x4_t4_g7_g2

0xd064,	// (0x0003610d) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x4_t4_g7_g3

0xd064,	// (0x0003610d) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x4_t4_g7_g4

0xd064,	// (0x0003610d) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x4_t4_g7_g5

0xd064,	// (0x0003610d) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x4_t4_g7_g6

0xd072,	// (0x0003611b) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd072,	// (0x0003611b) list_medium_line_x4_t4_g7_g7

0x0006,

0x04e7,	// (0x00029590) list_medium_line_x4_t4_g7_g_ParamLimits

0x04e7,	// (0x00029590) list_medium_line_x4_t4_g7_g

0xd0ac,	// (0x00036155) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x4_t4_g7_t1

0xd0ac,	// (0x00036155) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x4_t4_g7_t2

0xd0ac,	// (0x00036155) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x4_t4_g7_t3

0xd0c0,	// (0x00036169) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd0c0,	// (0x00036169) list_medium_line_x4_t4_g7_t4

0xd0c0,	// (0x00036169) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd0c0,	// (0x00036169) list_medium_line_x4_t4_g7_t5

0x0004,

0x04f6,	// (0x0002959f) list_medium_line_x4_t4_g7_t_ParamLimits

0x04f6,	// (0x0002959f) list_medium_line_x4_t4_g7_t

0x7f3d,	// (0x00030fe6) list_single_dyc_row_pane_ParamLimits

0x7f3d,	// (0x00030fe6) list_single_dyc_row_pane

0x89b2,	// (0x00031a5b) call5_gesture_pane_ParamLimits

0x89b2,	// (0x00031a5b) call5_gesture_pane

0x8a08,	// (0x00031ab1) call5_windows_pane_ParamLimits

0x8a08,	// (0x00031ab1) call5_windows_pane

0x8af4,	// (0x00031b9d) call5_swipe_1_pane_cp_ParamLimits

0x8af4,	// (0x00031b9d) call5_swipe_1_pane_cp

0x8b00,	// (0x00031ba9) call5_swipe_2_pane_cp_ParamLimits

0x8b00,	// (0x00031ba9) call5_swipe_2_pane_cp

0xd318,	// (0x000363c1) call5_image_pane_cp

0x8b0c,	// (0x00031bb5) popup_call5_audio_first_window_cp_ParamLimits

0x8b0c,	// (0x00031bb5) popup_call5_audio_first_window_cp

0x8b1a,	// (0x00031bc3) call5_swipe_1_pane_g1_cp_ParamLimits

0x8b1a,	// (0x00031bc3) call5_swipe_1_pane_g1_cp

0x8b27,	// (0x00031bd0) call5_swipe_1_pane_g2_cp

0x8b2f,	// (0x00031bd8) call5_swipe_1_pane_t1_cp_ParamLimits

0x8b2f,	// (0x00031bd8) call5_swipe_1_pane_t1_cp

0x8b1a,	// (0x00031bc3) call5_swipe_2_pane_g1_cp_ParamLimits

0x8b1a,	// (0x00031bc3) call5_swipe_2_pane_g1_cp

0x8b44,	// (0x00031bed) call5_swipe_2_pane_g2_cp

0x8b4c,	// (0x00031bf5) call5_swipe_2_pane_t1_cp_ParamLimits

0x8b4c,	// (0x00031bf5) call5_swipe_2_pane_t1_cp

0xcf51,	// (0x00035ffa) main_sp_fs_email_pane

0x8b61,	// (0x00031c0a) main_sp_fs_listscroll_pane_te

0x8b6a,	// (0x00031c13) popup_sp_fs_action_menu_pane_ParamLimits

0x8b6a,	// (0x00031c13) popup_sp_fs_action_menu_pane

0xd0a2,	// (0x0003614b) bg_sp_fs_ctrlbar_pane_g1

0x8bae,	// (0x00031c57) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x8bb7,	// (0x00031c60) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x8bc0,	// (0x00031c69) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd0a2,	// (0x0003614b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb6d,	// (0x00038c16) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x48a8,	// (0x0002d951) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x48a8,	// (0x0002d951) bg_sp_fs_ctrlbar_ddmenu_pane

0x8bc9,	// (0x00031c72) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x8bc9,	// (0x00031c72) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x8bd5,	// (0x00031c7e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x8bd5,	// (0x00031c7e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb76,	// (0x00038c1f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb76,	// (0x00038c1f) main_sp_fs_ctrlbar_ddmenu_pane_g

0x8be1,	// (0x00031c8a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x8be1,	// (0x00031c8a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd0a2,	// (0x0003614b) list_medium_line_t2_right_icon_g1

0xd81e,	// (0x000368c7) list_medium_line_t2_right_icon_t1

0xd81e,	// (0x000368c7) list_medium_line_t2_right_icon_t2

0x0001,

0xfb7b,	// (0x00038c24) list_medium_line_t2_right_icon_t

0xdde5,	// (0x00036e8e) bg_sp_fs_ctrlbar_pane_ParamLimits

0xdde5,	// (0x00036e8e) bg_sp_fs_ctrlbar_pane

0x8c7b,	// (0x00031d24) main_sp_fs_ctrlbar_button_pane_cp01

0x8c85,	// (0x00031d2e) main_sp_fs_ctrlbar_ddmenu_pane

0x8c8f,	// (0x00031d38) main_sp_fs_ctrlbar_pane_g1

0x8c9b,	// (0x00031d44) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfb80,	// (0x00038c29) main_sp_fs_ctrlbar_pane_g

0x8cdb,	// (0x00031d84) main_sp_fs_ctrlbar_pane_t1

0x8d1a,	// (0x00031dc3) main_sp_fs_ctrlbar_pane

0x8d59,	// (0x00031e02) main_sp_fs_listscroll_pane_te_cp01

0x8d83,	// (0x00031e2c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8d83,	// (0x00031e2c) popup_sp_fs_action_menu_pane_cp01

0xcf51,	// (0x00035ffa) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xcf51,	// (0x00035ffa) bg_sp_fs_highlight_list_pane_cp01

0x8da8,	// (0x00031e51) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8da8,	// (0x00031e51) sp_fs_action_menu_list_gene_pane_g1

0x8db7,	// (0x00031e60) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x8db7,	// (0x00031e60) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb8e,	// (0x00038c37) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb8e,	// (0x00038c37) sp_fs_action_menu_list_gene_pane_g

0x8dc4,	// (0x00031e6d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8dc4,	// (0x00031e6d) sp_fs_action_menu_list_gene_pane_t1

0x8ddc,	// (0x00031e85) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8ddc,	// (0x00031e85) sp_fs_action_menu_list_gene_pane

0xb749,	// (0x000347f2) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xb749,	// (0x000347f2) popup_sp_fs_action_menu_bg_pane

0xb757,	// (0x00034800) sp_fs_action_menu_list_pane_ParamLimits

0xb757,	// (0x00034800) sp_fs_action_menu_list_pane

0xb777,	// (0x00034820) sp_fs_scroll_pane_cp01_ParamLimits

0xb777,	// (0x00034820) sp_fs_scroll_pane_cp01

0xd81e,	// (0x000368c7) list_medium_line_plain_t2_t1

0xd81e,	// (0x000368c7) list_medium_line_plain_t2_t2

0x0001,

0xfb7b,	// (0x00038c24) list_medium_line_plain_t2_t

0xd81e,	// (0x000368c7) list_medium_line_plain_t3_t1

0xd81e,	// (0x000368c7) list_medium_line_plain_t3_t2

0xd81e,	// (0x000368c7) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x000382fd) list_medium_line_plain_t3_t

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g2_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g2_g1

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g2_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x00038242) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x00038242) list_medium_line_x2_t2_g2_g

0xd0ac,	// (0x00036155) list_medium_line_x2_t2_g2_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t2_g2_t1

0xd0ac,	// (0x00036155) list_medium_line_x2_t2_g2_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x00038217) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x00038217) list_medium_line_x2_t2_g2_t

0xd064,	// (0x0003610d) list_medium_line_x2_t4_g2_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t4_g2_g1

0xd064,	// (0x0003610d) list_medium_line_x2_t4_g2_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x00038242) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x00038242) list_medium_line_x2_t4_g2_g

0xd0ac,	// (0x00036155) list_medium_line_x2_t4_g2_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t4_g2_t1

0xd0ac,	// (0x00036155) list_medium_line_x2_t4_g2_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t4_g2_t2

0xd0ac,	// (0x00036155) list_medium_line_x2_t4_g2_t3_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t4_g2_t3

0xd0ac,	// (0x00036155) list_medium_line_x2_t4_g2_t4_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x00038250) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x00038250) list_medium_line_x2_t4_g2_t

0xd0a2,	// (0x0003614b) list_medium_line_t3_right_iconx2_g1

0xd0a2,	// (0x0003614b) list_medium_line_t3_right_iconx2_g2

0xd0a2,	// (0x0003614b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x00038419) list_medium_line_t3_right_iconx2_g

0xd81e,	// (0x000368c7) list_medium_line_t3_right_iconx2_t1

0xd81e,	// (0x000368c7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfb7b,	// (0x00038c24) list_medium_line_t3_right_iconx2_t

0xd064,	// (0x0003610d) list_medium_line_x3_t4_g4_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x3_t4_g4_g1

0xd064,	// (0x0003610d) list_medium_line_x3_t4_g4_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x3_t4_g4_g2

0xd064,	// (0x0003610d) list_medium_line_x3_t4_g4_g3_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x3_t4_g4_g3

0xd064,	// (0x0003610d) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x00038247) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x00038247) list_medium_line_x3_t4_g4_g

0xd0ac,	// (0x00036155) list_medium_line_x3_t4_g4_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x3_t4_g4_t1

0xd0ac,	// (0x00036155) list_medium_line_x3_t4_g4_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x3_t4_g4_t2

0xd0ac,	// (0x00036155) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x3_t4_g4_t3

0xd0ac,	// (0x00036155) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x00038250) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x00038250) list_medium_line_x3_t4_g4_t

0x8dfb,	// (0x00031ea4) list_single_dyc_row_text_pane_t1_ParamLimits

0x8dfb,	// (0x00031ea4) list_single_dyc_row_text_pane_t1

0x8e44,	// (0x00031eed) list_single_dyc_row_text_pane_t2_ParamLimits

0x8e44,	// (0x00031eed) list_single_dyc_row_text_pane_t2

0xb79d,	// (0x00034846) list_single_dyc_row_text_pane_t3_ParamLimits

0xb79d,	// (0x00034846) list_single_dyc_row_text_pane_t3

0x0005,

0xfb93,	// (0x00038c3c) list_single_dyc_row_text_pane_t_ParamLimits

0xfb93,	// (0x00038c3c) list_single_dyc_row_text_pane_t

0xb7c1,	// (0x0003486a) list_single_dyc_row_pane_g1_ParamLimits

0xb7c1,	// (0x0003486a) list_single_dyc_row_pane_g1

0xb7cd,	// (0x00034876) list_single_dyc_row_pane_g2_ParamLimits

0xb7cd,	// (0x00034876) list_single_dyc_row_pane_g2

0xb7d9,	// (0x00034882) list_single_dyc_row_pane_g3_ParamLimits

0xb7d9,	// (0x00034882) list_single_dyc_row_pane_g3

0xb7ec,	// (0x00034895) list_single_dyc_row_pane_g4_ParamLimits

0xb7ec,	// (0x00034895) list_single_dyc_row_pane_g4

0x0006,

0xfba0,	// (0x00038c49) list_single_dyc_row_pane_g_ParamLimits

0xfba0,	// (0x00038c49) list_single_dyc_row_pane_g

0xb83e,	// (0x000348e7) list_single_dyc_row_text_pane_ParamLimits

0xb83e,	// (0x000348e7) list_single_dyc_row_text_pane

0xc963,	// (0x00035a0c) bg_sp_fs_scroll_pane

0xb863,	// (0x0003490c) thumb_sp_fs_scroll_pane

0xd064,	// (0x0003610d) list_medium_line_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_g1

0xd0ac,	// (0x00036155) list_medium_line_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t1

0xd064,	// (0x0003610d) list_medium_line_x2_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_g1

0xd064,	// (0x0003610d) list_medium_line_x2_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x00038242) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x00038242) list_medium_line_x2_g

0xd0ac,	// (0x00036155) list_medium_line_x2_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t1

0xd064,	// (0x0003610d) list_medium_line_x3_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x3_g1

0xb57b,	// (0x00034624) list_medium_line_x3_g2_ParamLimits

0xb57b,	// (0x00034624) list_medium_line_x3_g2

0x0001,

0xfbaf,	// (0x00038c58) list_medium_line_x3_g_ParamLimits

0xfbaf,	// (0x00038c58) list_medium_line_x3_g

0xb86c,	// (0x00034915) list_medium_line_x3_t1_ParamLimits

0xb86c,	// (0x00034915) list_medium_line_x3_t1

0xb880,	// (0x00034929) thumb_sp_fs_scroll_pane_g1

0xb889,	// (0x00034932) thumb_sp_fs_scroll_pane_g2

0xb892,	// (0x0003493b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbb4,	// (0x00038c5d) thumb_sp_fs_scroll_pane_g

0xb880,	// (0x00034929) bg_sp_fs_scroll_pane_g1

0xb889,	// (0x00034932) bg_sp_fs_scroll_pane_g2

0xb892,	// (0x0003493b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbb4,	// (0x00038c5d) bg_sp_fs_scroll_pane_g

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g4_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g4_g1

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g4_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g4_g2

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g4_g3_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g4_g3

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g4_g4_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x00038247) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x00038247) list_medium_line_x2_t3_g4_g

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g4_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g4_t1

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g4_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g4_t2

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g4_t3_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x0003823b) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x0003823b) list_medium_line_x2_t3_g4_t

0xd064,	// (0x0003610d) list_medium_line_g2_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_g2_g1

0xd064,	// (0x0003610d) list_medium_line_g2_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x00038242) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x00038242) list_medium_line_g2_g

0xd0ac,	// (0x00036155) list_medium_line_g2_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_g2_t1

0xd064,	// (0x0003610d) list_medium_line_t3_g2_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_t3_g2_g1

0xd064,	// (0x0003610d) list_medium_line_t3_g2_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x00038242) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x00038242) list_medium_line_t3_g2_g

0xd0ac,	// (0x00036155) list_medium_line_t3_g2_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t3_g2_t1

0xd0ac,	// (0x00036155) list_medium_line_t3_g2_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t3_g2_t2

0xd0ac,	// (0x00036155) list_medium_line_t3_g2_t3_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x0003823b) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x0003823b) list_medium_line_t3_g2_t

0xd0a2,	// (0x0003614b) list_medium_line_right_icon_g1

0xd81e,	// (0x000368c7) list_medium_line_right_icon_t1

0xd064,	// (0x0003610d) list_medium_line_t2_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_t2_g1

0xd0ac,	// (0x00036155) list_medium_line_t2_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t2_t1

0xd0ac,	// (0x00036155) list_medium_line_t2_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x00038217) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x00038217) list_medium_line_t2_t

0xd064,	// (0x0003610d) list_medium_line_t3_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_t3_g1

0xd0ac,	// (0x00036155) list_medium_line_t3_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t3_t1

0xd0ac,	// (0x00036155) list_medium_line_t3_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t3_t2

0xd0ac,	// (0x00036155) list_medium_line_t3_t3_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x0003823b) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x0003823b) list_medium_line_t3_t

0xd064,	// (0x0003610d) list_medium_line_g3_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_g3_g1

0xd064,	// (0x0003610d) list_medium_line_g3_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_g3_g2

0xd064,	// (0x0003610d) list_medium_line_g3_g3_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x00038234) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x00038234) list_medium_line_g3_g

0xd0ac,	// (0x00036155) list_medium_line_g3_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_g3_t1

0xd064,	// (0x0003610d) list_medium_line_t2_g3_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_t2_g3_g1

0xd064,	// (0x0003610d) list_medium_line_t2_g3_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_t2_g3_g2

0xd064,	// (0x0003610d) list_medium_line_t2_g3_g3_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x00038234) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x00038234) list_medium_line_t2_g3_g

0xd0ac,	// (0x00036155) list_medium_line_t2_g3_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t2_g3_t1

0xd0ac,	// (0x00036155) list_medium_line_t2_g3_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x00038217) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x00038217) list_medium_line_t2_g3_t

0xd064,	// (0x0003610d) list_medium_line_t3_g3_g1_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_t3_g3_g1

0xd064,	// (0x0003610d) list_medium_line_t3_g3_g2_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_t3_g3_g2

0xd064,	// (0x0003610d) list_medium_line_t3_g3_g3_ParamLimits

0xd064,	// (0x0003610d) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x00038234) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x00038234) list_medium_line_t3_g3_g

0xd0ac,	// (0x00036155) list_medium_line_t3_g3_t1_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t3_g3_t1

0xd0ac,	// (0x00036155) list_medium_line_t3_g3_t2_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t3_g3_t2

0xd0ac,	// (0x00036155) list_medium_line_t3_g3_t3_ParamLimits

0xd0ac,	// (0x00036155) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x0003823b) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x0003823b) list_medium_line_t3_g3_t

0xd0a2,	// (0x0003614b) list_medium_line_right_iconx2_g1

0xd0a2,	// (0x0003614b) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00038135) list_medium_line_right_iconx2_g

0xd81e,	// (0x000368c7) list_medium_line_right_iconx2_t1

0xd0a2,	// (0x0003614b) list_medium_line_t2_right_iconx2_g1

0xd0a2,	// (0x0003614b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00038135) list_medium_line_t2_right_iconx2_g

0xd81e,	// (0x000368c7) list_medium_line_t2_right_iconx2_t1

0xd81e,	// (0x000368c7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb7b,	// (0x00038c24) list_medium_line_t2_right_iconx2_t

0xd81e,	// (0x000368c7) list_medium_line_x4_t4_t1

0xd81e,	// (0x000368c7) list_medium_line_x4_t4_t2

0xd81e,	// (0x000368c7) list_medium_line_x4_t4_t3

0xd81e,	// (0x000368c7) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x00038304) list_medium_line_x4_t4_t

0x8fbc,	// (0x00032065) tport_appsw_pane_ParamLimits

0x8fbc,	// (0x00032065) tport_appsw_pane

0x8fd4,	// (0x0003207d) tport_contact_pane_ParamLimits

0x8fd4,	// (0x0003207d) tport_contact_pane

0x8fec,	// (0x00032095) tport_listscroll_pane_ParamLimits

0x8fec,	// (0x00032095) tport_listscroll_pane

0x9006,	// (0x000320af) cell_tport_appsw_pane_ParamLimits

0x9006,	// (0x000320af) cell_tport_appsw_pane

0xddc3,	// (0x00036e6c) tport_appsw_pane_g1_ParamLimits

0xddc3,	// (0x00036e6c) tport_appsw_pane_g1

0xb89b,	// (0x00034944) tport_contact_pane_g1

0x81ff,	// (0x000312a8) tport_contact_pane_t1

0xb8a4,	// (0x0003494d) tport_contact_pane_t2

0x0001,

0xfbbb,	// (0x00038c64) tport_contact_pane_t

0xb8b2,	// (0x0003495b) list_tport_pane

0xb8bb,	// (0x00034964) scroll_pane_cp_030

0x904e,	// (0x000320f7) cell_tport_appsw_pane_g1

0x905e,	// (0x00032107) cell_tport_appsw_pane_t1

0x906c,	// (0x00032115) grid_highlight_pane_cp019

0x9074,	// (0x0003211d) list_tport_double_graphic_pane_ParamLimits

0x9074,	// (0x0003211d) list_tport_double_graphic_pane

0xcf51,	// (0x00035ffa) list_highlight_pane_cp023_ParamLimits

0xcf51,	// (0x00035ffa) list_highlight_pane_cp023

0x9081,	// (0x0003212a) list_tport_double_graphic_pane_g1_ParamLimits

0x9081,	// (0x0003212a) list_tport_double_graphic_pane_g1

0x908e,	// (0x00032137) list_tport_double_graphic_pane_t1_ParamLimits

0x908e,	// (0x00032137) list_tport_double_graphic_pane_t1

0x90a3,	// (0x0003214c) list_tport_double_graphic_pane_t2_ParamLimits

0x90a3,	// (0x0003214c) list_tport_double_graphic_pane_t2

0x0001,

0xfbc7,	// (0x00038c70) list_tport_double_graphic_pane_t_ParamLimits

0xfbc7,	// (0x00038c70) list_tport_double_graphic_pane_t

0xc963,	// (0x00035a0c) main_cale_note_pane

0x19a6,	// (0x0002aa4f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x19a6,	// (0x0002aa4f) cell_vitu2_function_top_wide_pane_cp01

0x8595,	// (0x0003163e) wait_bar_pane_cp05_ParamLimits

0xcf51,	// (0x00035ffa) listscroll_cmail_pane

0xb8cc,	// (0x00034975) list_cmail_pane

0x90b5,	// (0x0003215e) list_cmail_body_pane

0x90ca,	// (0x00032173) list_single_cmail_header_caption_pane

0x90e0,	// (0x00032189) list_single_cmail_header_detail_pane_ParamLimits

0x90e0,	// (0x00032189) list_single_cmail_header_detail_pane

0xb8e3,	// (0x0003498c) list_single_cmail_header_caption_pane_t1

0x910d,	// (0x000321b6) list_single_cmail_header_detail_pane_g1_ParamLimits

0x910d,	// (0x000321b6) list_single_cmail_header_detail_pane_g1

0xb8fa,	// (0x000349a3) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb8fa,	// (0x000349a3) list_single_cmail_header_detail_pane_g2

0x0002,

0xfbcc,	// (0x00038c75) list_single_cmail_header_detail_pane_g_ParamLimits

0xfbcc,	// (0x00038c75) list_single_cmail_header_detail_pane_g

0x9125,	// (0x000321ce) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9125,	// (0x000321ce) list_single_cmail_header_detail_pane_t1

0x9163,	// (0x0003220c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x9163,	// (0x0003220c) list_single_cmail_header_editor_pane_bg

0x8401,	// (0x000314aa) list_cmail_body_pane_g1

0xb937,	// (0x000349e0) list_cmail_body_pane_t1

0x6156,	// (0x0002f1ff) list_single_cmail_header_editor_pane_bg_g1

0xd53a,	// (0x000365e3) list_single_cmail_header_editor_pane_bg_g1_copy1

0x6166,	// (0x0002f20f) list_single_cmail_header_editor_pane_bg_g1_copy2

0x615e,	// (0x0002f207) list_single_cmail_header_editor_pane_bg_g1_copy3

0x6a81,	// (0x0002fb2a) list_single_cmail_header_editor_pane_bg_g1_copy4

0x6186,	// (0x0002f22f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x6176,	// (0x0002f21f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x617e,	// (0x0002f227) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd51a,	// (0x000365c3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x917c,	// (0x00032225) calenote_gesture_pane_ParamLimits

0x917c,	// (0x00032225) calenote_gesture_pane

0x919c,	// (0x00032245) calenote_window_pane_ParamLimits

0x919c,	// (0x00032245) calenote_window_pane

0xb945,	// (0x000349ee) popup_note_window_cp01

0x91b8,	// (0x00032261) calenote_swipe_1_pane_ParamLimits

0x91b8,	// (0x00032261) calenote_swipe_1_pane

0x8b00,	// (0x00031ba9) calenote_swipe_2_pane_ParamLimits

0x8b00,	// (0x00031ba9) calenote_swipe_2_pane

0x8b1a,	// (0x00031bc3) calenote_swipe_1_pane_g1_ParamLimits

0x8b1a,	// (0x00031bc3) calenote_swipe_1_pane_g1

0xb957,	// (0x00034a00) calenote_swipe_1_pane_g2_ParamLimits

0xb957,	// (0x00034a00) calenote_swipe_1_pane_g2

0x0001,

0xfbd8,	// (0x00038c81) calenote_swipe_1_pane_g_ParamLimits

0xfbd8,	// (0x00038c81) calenote_swipe_1_pane_g

0xb963,	// (0x00034a0c) calenote_swipe_1_pane_t1_ParamLimits

0xb963,	// (0x00034a0c) calenote_swipe_1_pane_t1

0x8b1a,	// (0x00031bc3) calenote_swipe_2_pane_g1_ParamLimits

0x8b1a,	// (0x00031bc3) calenote_swipe_2_pane_g1

0xb982,	// (0x00034a2b) calenote_swipe_2_pane_g2_ParamLimits

0xb982,	// (0x00034a2b) calenote_swipe_2_pane_g2

0x0001,

0xfbdd,	// (0x00038c86) calenote_swipe_2_pane_g_ParamLimits

0xfbdd,	// (0x00038c86) calenote_swipe_2_pane_g

0xb98e,	// (0x00034a37) calenote_swipe_2_pane_t1_ParamLimits

0xb98e,	// (0x00034a37) calenote_swipe_2_pane_t1

0xc963,	// (0x00035a0c) main_mup_navstr_pane

0x54de,	// (0x0002e587) main_mup3_pane_t7_ParamLimits

0x54de,	// (0x0002e587) main_mup3_pane_t7

0xb2df,	// (0x00034388) main_mp4_pane_g6_ParamLimits

0xb2df,	// (0x00034388) main_mp4_pane_g6

0xb509,	// (0x000345b2) main_image3_pane_t4_ParamLimits

0xb509,	// (0x000345b2) main_image3_pane_t4

0x91cd,	// (0x00032276) popup_navstr_preview_pane_ParamLimits

0x91cd,	// (0x00032276) popup_navstr_preview_pane

0x91e1,	// (0x0003228a) scroll_navstr_pane_ParamLimits

0x91e1,	// (0x0003228a) scroll_navstr_pane

0xc963,	// (0x00035a0c) bg_popup_preview_window_pane_cp04

0xb9b5,	// (0x00034a5e) popup_navstr_preview_pane_t1

0x91f5,	// (0x0003229e) scroll_navstr_pane_g1_ParamLimits

0x91f5,	// (0x0003229e) scroll_navstr_pane_g1

0x9209,	// (0x000322b2) scroll_navstr_pane_t1_ParamLimits

0x9209,	// (0x000322b2) scroll_navstr_pane_t1

0xb94e,	// (0x000349f7) bg_button_pane_cp014

0xb94e,	// (0x000349f7) bg_button_pane_cp030

0x8958,	// (0x00031a01) list_double_fisheye_pane_g4_ParamLimits

0x8958,	// (0x00031a01) list_double_fisheye_pane_g4

0x8964,	// (0x00031a0d) list_double_fisheye_pane_g5_ParamLimits

0x8964,	// (0x00031a0d) list_double_fisheye_pane_g5

0x35d6,	// (0x0002c67f) sp_fs_scroll_pane_cp03

0x8c8f,	// (0x00031d38) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x8c9b,	// (0x00031d44) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb80,	// (0x00038c29) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8cdb,	// (0x00031d84) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb8db,	// (0x00034984) sp_fs_scroll_pane_cp02

0xd269,	// (0x00036312) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd269,	// (0x00036312) popup_sp_fs_calendar_preview_list_single_pane

0xc963,	// (0x00035a0c) main_cam6_pano_pane

0xaf90,	// (0x00034039) main_mup3_pane_ParamLimits

0xc963,	// (0x00035a0c) main_phacti_pane

0x8468,	// (0x00031511) bg_button_pane_cp11

0x8482,	// (0x0003152b) main_mobtv_info_pane_g2_ParamLimits

0x8482,	// (0x0003152b) main_mobtv_info_pane_g2

0x0001,

0xfaf2,	// (0x00038b9b) main_mobtv_info_pane_g_ParamLimits

0xfaf2,	// (0x00038b9b) main_mobtv_info_pane_g

0xd0ac,	// (0x00036155) sc_clock_pane_t5_ParamLimits

0xd0ac,	// (0x00036155) sc_clock_pane_t5

0xddc3,	// (0x00036e6c) main_radioblah_pane_g1_ParamLimits

0xddd1,	// (0x00036e7a) main_radioblah_pane_t3_ParamLimits

0xddd1,	// (0x00036e7a) main_radioblah_pane_t3

0xddd1,	// (0x00036e7a) main_radioblah_pane_t4_ParamLimits

0xddd1,	// (0x00036e7a) main_radioblah_pane_t4

0xcf51,	// (0x00035ffa) main_radioblah_text_pane_ParamLimits

0xcf51,	// (0x00035ffa) main_radioblah_text_pane

0x8861,	// (0x0003190a) main_radioblah_info_pane_g1_ParamLimits

0x88b9,	// (0x00031962) main_radioblah_info_pane_t4_ParamLimits

0x88b9,	// (0x00031962) main_radioblah_info_pane_t4

0xcf51,	// (0x00035ffa) main_sp_fs_calendar_pane

0x9220,	// (0x000322c9) main_phacti_pane_g1

0x9228,	// (0x000322d1) phacti_note_pane_ParamLimits

0x9228,	// (0x000322d1) phacti_note_pane

0xb9cc,	// (0x00034a75) phacti_term_pane_ParamLimits

0xb9cc,	// (0x00034a75) phacti_term_pane

0xb9e1,	// (0x00034a8a) phacti_note_pane_t1_ParamLimits

0xb9e1,	// (0x00034a8a) phacti_note_pane_t1

0xb9f8,	// (0x00034aa1) phacti_term_pane_g1

0xba00,	// (0x00034aa9) phacti_term_pane_t1_ParamLimits

0xba00,	// (0x00034aa9) phacti_term_pane_t1

0xba2a,	// (0x00034ad3) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd2ff,	// (0x000363a8) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfbe7,	// (0x00038c90) popup_sp_fs_calendar_preview_list_single_pane_g

0xba32,	// (0x00034adb) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xba32,	// (0x00034adb) popup_sp_fs_calendar_preview_list_single_pane_t1

0xba48,	// (0x00034af1) aid_popup_sp_fs_bg_corner_pane

0xd0a2,	// (0x0003614b) popup_sp_fs_calendar_preview_bg_pane_g1

0xc963,	// (0x00035a0c) popup_sp_fs_calendar_preview_bg_pane

0xba50,	// (0x00034af9) popup_sp_fs_calendar_preview_list_pane

0xba61,	// (0x00034b0a) bg_main_sp_fs_cale_pane_ParamLimits

0xba61,	// (0x00034b0a) bg_main_sp_fs_cale_pane

0xba79,	// (0x00034b22) listscroll_cale_mrui_pane_ParamLimits

0xba79,	// (0x00034b22) listscroll_cale_mrui_pane

0x5667,	// (0x0002e710) listscroll_sp_fs_schedule_track_pane

0xba91,	// (0x00034b3a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xba91,	// (0x00034b3a) main_sp_fs_ctrlbar_pane_cp01

0x5667,	// (0x0002e710) main_sp_fs_ribbon_pane

0xbaa7,	// (0x00034b50) popup_sp_fs_cale_preview_window

0x9248,	// (0x000322f1) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9248,	// (0x000322f1) list_single_sp_fs_schedule_track_pane

0xb1f8,	// (0x000342a1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb1f8,	// (0x000342a1) bg_sp_fs_highlight_list_pane_cp03

0xb1ec,	// (0x00034295) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb1ec,	// (0x00034295) list_single_sp_fs_schedule_track_pane_g1

0xb1ec,	// (0x00034295) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb1ec,	// (0x00034295) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfbec,	// (0x00038c95) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfbec,	// (0x00038c95) list_single_sp_fs_schedule_track_pane_g

0x9254,	// (0x000322fd) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9254,	// (0x000322fd) list_single_sp_fs_schedule_track_pane_t1

0x9266,	// (0x0003230f) sp_fs_schedule_track_pane_ParamLimits

0x9266,	// (0x0003230f) sp_fs_schedule_track_pane

0x566f,	// (0x0002e718) sp_fs_schedule_track_pane_g1

0x566f,	// (0x0002e718) sp_fs_schedule_track_pane_g2

0x566f,	// (0x0002e718) sp_fs_schedule_track_pane_g3

0x566f,	// (0x0002e718) sp_fs_schedule_track_pane_g4

0x566f,	// (0x0002e718) sp_fs_schedule_track_pane_g5

0x0004,

0xfbf1,	// (0x00038c9a) sp_fs_schedule_track_pane_g

0x566f,	// (0x0002e718) bg_sp_fs_schedule_viewer_highlight_g1

0x566f,	// (0x0002e718) bg_sp_fs_schedule_viewer_highlight_g2

0x566f,	// (0x0002e718) bg_sp_fs_schedule_viewer_highlight_g3

0x566f,	// (0x0002e718) bg_sp_fs_schedule_viewer_highlight_g4

0x566f,	// (0x0002e718) bg_sp_fs_schedule_viewer_highlight_g5

0x566f,	// (0x0002e718) bg_sp_fs_schedule_viewer_highlight_g6

0x566f,	// (0x0002e718) bg_sp_fs_schedule_viewer_highlight_g7

0x566f,	// (0x0002e718) bg_sp_fs_schedule_viewer_highlight_g8

0x566f,	// (0x0002e718) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfbfc,	// (0x00038ca5) bg_sp_fs_schedule_viewer_highlight_g

0x5667,	// (0x0002e710) bg_main_sp_fs_ribbon_pane

0x566f,	// (0x0002e718) main_sp_fs_ribbon_pane_g1

0xbab9,	// (0x00034b62) main_sp_fs_ribbon_pane_t1

0xbab9,	// (0x00034b62) main_sp_fs_ribbon_pane_t2

0xbab9,	// (0x00034b62) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc0f,	// (0x00038cb8) main_sp_fs_ribbon_pane_t

0x5667,	// (0x0002e710) main_sp_fs_ribbon_scheduler_pane

0x566f,	// (0x0002e718) bg_main_sp_fs_ribbon_pane_g1

0x566f,	// (0x0002e718) bg_main_sp_fs_ribbon_pane_g2

0x566f,	// (0x0002e718) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf690,	// (0x00038739) bg_main_sp_fs_ribbon_pane_g

0x566f,	// (0x0002e718) main_sp_fs_ribbon_scheduler_pane_g1

0x566f,	// (0x0002e718) main_sp_fs_ribbon_scheduler_pane_g2

0x566f,	// (0x0002e718) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf690,	// (0x00038739) main_sp_fs_ribbon_scheduler_pane_g

0xbac7,	// (0x00034b70) list_cale_mrui_pane

0x9272,	// (0x0003231b) sp_fs_scroll_pane_cp07_ParamLimits

0x9272,	// (0x0003231b) sp_fs_scroll_pane_cp07

0xb1f8,	// (0x000342a1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb1f8,	// (0x000342a1) bg_sp_fs_schedule_viewer_highlight

0x5667,	// (0x0002e710) list_single_sp_fs_schedule_track_pane_cp01

0x5667,	// (0x0002e710) list_sp_fs_schedule_track_pane

0xbad4,	// (0x00034b7d) sp_fs_scroll_pane_cp06_ParamLimits

0xbad4,	// (0x00034b7d) sp_fs_scroll_pane_cp06

0xd0a2,	// (0x0003614b) bgmain_sp_fs_calendar_pane_g1

0x928e,	// (0x00032337) list_single_cale_mrui_pane_ParamLimits

0x928e,	// (0x00032337) list_single_cale_mrui_pane

0xbae8,	// (0x00034b91) list_single_cale_mrui_row_pane_ParamLimits

0xbae8,	// (0x00034b91) list_single_cale_mrui_row_pane

0xbaf5,	// (0x00034b9e) list_single_cale_mrui_row_pane_g1_ParamLimits

0xbaf5,	// (0x00034b9e) list_single_cale_mrui_row_pane_g1

0xbb3a,	// (0x00034be3) list_single_cale_mrui_row_pane_t1_ParamLimits

0xbb3a,	// (0x00034be3) list_single_cale_mrui_row_pane_t1

0x92ae,	// (0x00032357) list_single_cale_mrui_row_pane_t2_ParamLimits

0x92ae,	// (0x00032357) list_single_cale_mrui_row_pane_t2

0xbb4c,	// (0x00034bf5) list_single_cale_mrui_row_pane_t3_ParamLimits

0xbb4c,	// (0x00034bf5) list_single_cale_mrui_row_pane_t3

0xbb7b,	// (0x00034c24) list_single_cale_mrui_row_pane_t4_ParamLimits

0xbb7b,	// (0x00034c24) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc1d,	// (0x00038cc6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc1d,	// (0x00038cc6) list_single_cale_mrui_row_pane_t

0x9316,	// (0x000323bf) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9316,	// (0x000323bf) list_single_cmail_header_editor_pane_bg_cp01

0x9344,	// (0x000323ed) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9344,	// (0x000323ed) list_single_cmail_header_editor_pane_bg_cp02

0xbbaa,	// (0x00034c53) main_radioblah_text_pane_t1_ParamLimits

0xbbaa,	// (0x00034c53) main_radioblah_text_pane_t1

0xbbc4,	// (0x00034c6d) cam6_indi_pane_cp01

0xbbcc,	// (0x00034c75) cam6_mode_pane_cp01

0xbbd4,	// (0x00034c7d) cam6_pano_pane

0xbbdd,	// (0x00034c86) cam6_zoom_pane_cp01

0xbbe5,	// (0x00034c8e) cam6_pano_image_pane

0xbbf0,	// (0x00034c99) cam6_pano_pane_g1

0x8401,	// (0x000314aa) cam6_pano_pane_g2

0xbbf9,	// (0x00034ca2) cam6_pano_pane_g3

0xbc02,	// (0x00034cab) cam6_pano_pane_g4

0x5cc5,	// (0x0002ed6e) cam6_pano_pane_g5

0xbc0b,	// (0x00034cb4) cam6_pano_pane_g6

0xbc15,	// (0x00034cbe) cam6_pano_pane_g7

0xbc1d,	// (0x00034cc6) cam6_pano_pane_g8

0xbc26,	// (0x00034ccf) cam6_pano_pane_g9

0x0008,

0xfc26,	// (0x00038ccf) cam6_pano_pane_g

0xc963,	// (0x00035a0c) main_browser_tag_pane

0xb9ad,	// (0x00034a56) grid_navstr_albumart_pane

0xbc31,	// (0x00034cda) cell_navstr_albumart_pane_ParamLimits

0xbc31,	// (0x00034cda) cell_navstr_albumart_pane

0xbc51,	// (0x00034cfa) cell_navstr_albumart_pane_g1

0xbc59,	// (0x00034d02) cell_navstr_albumart_pane_g2

0xbc61,	// (0x00034d0a) cell_navstr_albumart_pane_g3

0xbc69,	// (0x00034d12) cell_navstr_albumart_pane_g4

0x0003,

0xfc39,	// (0x00038ce2) cell_navstr_albumart_pane_g

0x9364,	// (0x0003240d) bt_list_pane_ParamLimits

0x9364,	// (0x0003240d) bt_list_pane

0x9378,	// (0x00032421) bt_list_pane_t1

0x9387,	// (0x00032430) bt_list_pane_t2

0x0001,

0xfc42,	// (0x00038ceb) bt_list_pane_t

0xc963,	// (0x00035a0c) main_cale_prevew_pane

0x9396,	// (0x0003243f) popup_cale_preview_window_ParamLimits

0x9396,	// (0x0003243f) popup_cale_preview_window

0xcf51,	// (0x00035ffa) bg_popup_preview_window_pane_cp05_ParamLimits

0xcf51,	// (0x00035ffa) bg_popup_preview_window_pane_cp05

0xbc71,	// (0x00034d1a) list_cale_preview_pane_ParamLimits

0xbc71,	// (0x00034d1a) list_cale_preview_pane

0x93b1,	// (0x0003245a) list_double_cale_preview_pane_ParamLimits

0x93b1,	// (0x0003245a) list_double_cale_preview_pane

0x93c3,	// (0x0003246c) list_single_cale_preview_pane_ParamLimits

0x93c3,	// (0x0003246c) list_single_cale_preview_pane

0x93d9,	// (0x00032482) list_single_cale_preview_pane_g1

0x93e1,	// (0x0003248a) list_single_cale_preview_pane_t1_ParamLimits

0x93e1,	// (0x0003248a) list_single_cale_preview_pane_t1

0x93f6,	// (0x0003249f) list_double_cale_preview_pane_g1

0x93fe,	// (0x000324a7) list_double_cale_preview_pane_t1_ParamLimits

0x93fe,	// (0x000324a7) list_double_cale_preview_pane_t1

0x9413,	// (0x000324bc) list_double_cale_preview_pane_t2_ParamLimits

0x9413,	// (0x000324bc) list_double_cale_preview_pane_t2

0x0001,

0xfc47,	// (0x00038cf0) list_double_cale_preview_pane_t_ParamLimits

0xfc47,	// (0x00038cf0) list_double_cale_preview_pane_t

0xc963,	// (0x00035a0c) main_ezdial_pane

0xcf51,	// (0x00035ffa) main_sp_fs_email_pane_ParamLimits

0x8bfb,	// (0x00031ca4) cmail_ddmenu_btn01_pane_ParamLimits

0x8bfb,	// (0x00031ca4) cmail_ddmenu_btn01_pane

0x8c0e,	// (0x00031cb7) cmail_ddmenu_btn02_pane_ParamLimits

0x8c0e,	// (0x00031cb7) cmail_ddmenu_btn02_pane

0x8c69,	// (0x00031d12) cmail_ddmenu_btn03_pane_ParamLimits

0x8c69,	// (0x00031d12) cmail_ddmenu_btn03_pane

0x8d1a,	// (0x00031dc3) main_sp_fs_ctrlbar_pane_ParamLimits

0x8d59,	// (0x00031e02) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x90b5,	// (0x0003215e) list_cmail_body_pane_ParamLimits

0xb8f1,	// (0x0003499a) bg_button_pane_cp12

0xb906,	// (0x000349af) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb906,	// (0x000349af) list_single_cmail_header_detail_pane_g3

0xb913,	// (0x000349bc) list_single_cmail_header_detail_pane_t2_ParamLimits

0xb913,	// (0x000349bc) list_single_cmail_header_detail_pane_t2

0x0001,

0xfbd3,	// (0x00038c7c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfbd3,	// (0x00038c7c) list_single_cmail_header_detail_pane_t

0xba15,	// (0x00034abe) phacti_term_pane_t2_ParamLimits

0xba15,	// (0x00034abe) phacti_term_pane_t2

0x0001,

0xfbe2,	// (0x00038c8b) phacti_term_pane_t_ParamLimits

0xfbe2,	// (0x00038c8b) phacti_term_pane_t

0xbc7d,	// (0x00034d26) aid_size_list_single_double

0x942b,	// (0x000324d4) popup_ezdial_listscroll_window

0xbc89,	// (0x00034d32) popup_number_entry_window_cp01

0xd318,	// (0x000363c1) bg_popup_call_pane_cp09

0xbc96,	// (0x00034d3f) ezdial_list_pane

0xbc9e,	// (0x00034d47) scroll_pane_cp23

0xdde5,	// (0x00036e8e) bg_button_pane_cp028_ParamLimits

0xdde5,	// (0x00036e8e) bg_button_pane_cp028

0x9442,	// (0x000324eb) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9442,	// (0x000324eb) cmail_ddmenu_btn01_pane_g1

0x944e,	// (0x000324f7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x944e,	// (0x000324f7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc4c,	// (0x00038cf5) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc4c,	// (0x00038cf5) cmail_ddmenu_btn01_pane_g

0xbca6,	// (0x00034d4f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xbca6,	// (0x00034d4f) cmail_ddmenu_btn01_pane_t1

0xdde5,	// (0x00036e8e) bg_button_pane_cp029_ParamLimits

0xdde5,	// (0x00036e8e) bg_button_pane_cp029

0x9462,	// (0x0003250b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9462,	// (0x0003250b) cmail_ddmenu_btn02_pane_g1

0x947a,	// (0x00032523) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x947a,	// (0x00032523) cmail_ddmenu_btn02_pane_t1

0xcf51,	// (0x00035ffa) bg_button_pane_cp031_ParamLimits

0xcf51,	// (0x00035ffa) bg_button_pane_cp031

0x9462,	// (0x0003250b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9462,	// (0x0003250b) cmail_ddmenu_btn03_pane_g1

0x947a,	// (0x00032523) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x947a,	// (0x00032523) cmail_ddmenu_btn03_pane_t1

0xd0ac,	// (0x00036155) cell_dialer2_keypad_pane_t1_ParamLimits

0x5d0c,	// (0x0002edb5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5d0c,	// (0x0002edb5) cell_dialer2_keypad_pane_t1_copy1

0x8011,	// (0x000310ba) ncimui_group_button_pane

0xcf51,	// (0x00035ffa) main_sp_fs_calendar_pane_ParamLimits

0x90ca,	// (0x00032173) list_single_cmail_header_caption_pane_ParamLimits

0xba58,	// (0x00034b01) aid_recal_txt_sm_pane

0xc963,	// (0x00035a0c) mian_recal_day_pane

0xbaa7,	// (0x00034b50) popup_sp_fs_cale_preview_window_ParamLimits

0xbcbc,	// (0x00034d65) list_recal_day_pane

0xbcfe,	// (0x00034da7) list_single_recal_day_pane_ParamLimits

0xbcfe,	// (0x00034da7) list_single_recal_day_pane

0xbd10,	// (0x00034db9) list_single_recal_day_pane_g1_ParamLimits

0xbd10,	// (0x00034db9) list_single_recal_day_pane_g1

0xbd1c,	// (0x00034dc5) list_single_recal_day_pane_g2_ParamLimits

0xbd1c,	// (0x00034dc5) list_single_recal_day_pane_g2

0xbd28,	// (0x00034dd1) list_single_recal_day_pane_g3_ParamLimits

0xbd28,	// (0x00034dd1) list_single_recal_day_pane_g3

0x949e,	// (0x00032547) list_single_recal_day_pane_g4_ParamLimits

0x949e,	// (0x00032547) list_single_recal_day_pane_g4

0xbd34,	// (0x00034ddd) list_single_recal_day_pane_g5_ParamLimits

0xbd34,	// (0x00034ddd) list_single_recal_day_pane_g5

0xbd40,	// (0x00034de9) list_single_recal_day_pane_g6_ParamLimits

0xbd40,	// (0x00034de9) list_single_recal_day_pane_g6

0x0004,

0xfc5b,	// (0x00038d04) list_single_recal_day_pane_g_ParamLimits

0xfc5b,	// (0x00038d04) list_single_recal_day_pane_g

0xbd54,	// (0x00034dfd) list_single_recal_day_pane_t1

0xbd66,	// (0x00034e0f) list_single_recal_day_pane_t2

0x0001,

0xfc66,	// (0x00038d0f) list_single_recal_day_pane_t

0x94b6,	// (0x0003255f) ncimui_query_button_pane_ParamLimits

0x94b6,	// (0x0003255f) ncimui_query_button_pane

0x94c6,	// (0x0003256f) ncimui_query_button_pane_t1_ParamLimits

0x94c6,	// (0x0003256f) ncimui_query_button_pane_t1

0xbd78,	// (0x00034e21) ncimui_query_button_pane_t2_ParamLimits

0xbd78,	// (0x00034e21) ncimui_query_button_pane_t2

0x0001,

0xfc6b,	// (0x00038d14) ncimui_query_button_pane_t_ParamLimits

0xfc6b,	// (0x00038d14) ncimui_query_button_pane_t

0x94d9,	// (0x00032582) query_button_pane_ParamLimits

0x94d9,	// (0x00032582) query_button_pane

0xc963,	// (0x00035a0c) bg_button_pane_cp0028

0xbd8b,	// (0x00034e34) query_button_pane_t1

0x0d9c,	// (0x00029e45) main_tport_pane_ParamLimits

0x8f79,	// (0x00032022) bg_popup_window_pane_cp01_ParamLimits

0x8f79,	// (0x00032022) bg_popup_window_pane_cp01

0x8f94,	// (0x0003203d) heading_pane_cp08_ParamLimits

0x8f94,	// (0x0003203d) heading_pane_cp08

0x8fa7,	// (0x00032050) heading_pane_cp07_ParamLimits

0x8fa7,	// (0x00032050) heading_pane_cp07

0x904e,	// (0x000320f7) cell_tport_appsw_pane_g2

0x0002,

0xfbc0,	// (0x00038c69) cell_tport_appsw_pane_g

0x3a95,	// (0x0002cb3e) input_candi_list_open_g1

0xd6bd,	// (0x00036766) list_cale_time_pane_g6_ParamLimits

0xd6bd,	// (0x00036766) list_cale_time_pane_g6

0x4db5,	// (0x0002de5e) aid_size_touch_calib_1_ParamLimits

0x4db5,	// (0x0002de5e) aid_size_touch_calib_1

0x4dc7,	// (0x0002de70) aid_size_touch_calib_2_ParamLimits

0x4dc7,	// (0x0002de70) aid_size_touch_calib_2

0x4ddf,	// (0x0002de88) aid_size_touch_calib_3_ParamLimits

0x4ddf,	// (0x0002de88) aid_size_touch_calib_3

0x4dfd,	// (0x0002dea6) aid_size_touch_calib_4_ParamLimits

0x4dfd,	// (0x0002dea6) aid_size_touch_calib_4

0x4e15,	// (0x0002debe) main_touch_calib_button_group_pane_ParamLimits

0x4e15,	// (0x0002debe) main_touch_calib_button_group_pane

0x4e2d,	// (0x0002ded6) main_touch_calib_pane_g1_ParamLimits

0x4e3f,	// (0x0002dee8) main_touch_calib_pane_g2_ParamLimits

0x4e51,	// (0x0002defa) main_touch_calib_pane_g3_ParamLimits

0x4e63,	// (0x0002df0c) main_touch_calib_pane_g4_ParamLimits

0xf63e,	// (0x000386e7) main_touch_calib_pane_g_ParamLimits

0x4e75,	// (0x0002df1e) main_touch_calib_pane_t1_ParamLimits

0x4e8f,	// (0x0002df38) main_touch_calib_pane_t2_ParamLimits

0x4ea9,	// (0x0002df52) main_touch_calib_pane_t3_ParamLimits

0x4ebd,	// (0x0002df66) main_touch_calib_pane_t4_ParamLimits

0x4ed1,	// (0x0002df7a) main_touch_calib_pane_t5_ParamLimits

0xf647,	// (0x000386f0) main_touch_calib_pane_t_ParamLimits

0x570e,	// (0x0002e7b7) list_single_fp_cale_pane_g3_ParamLimits

0x570e,	// (0x0002e7b7) list_single_fp_cale_pane_g3

0xaf90,	// (0x00034039) bg_button_pane_cp012_ParamLimits

0xaf90,	// (0x00034039) bg_vkb2_func_pane_cp03_ParamLimits

0x1bac,	// (0x0002ac55) cell_vitu2_function_top_pane_g1_ParamLimits

0xaf90,	// (0x00034039) bg_vkb2_func_pane_cp04_ParamLimits

0x7f9c,	// (0x00031045) main_ncimui_button_group_pane_ParamLimits

0x7f9c,	// (0x00031045) main_ncimui_button_group_pane

0x7ffc,	// (0x000310a5) main_ncimui_pane_t3_ParamLimits

0x7ffc,	// (0x000310a5) main_ncimui_pane_t3

0xb9c3,	// (0x00034a6c) phacti_button_group_pane

0xbc7d,	// (0x00034d26) aid_size_list_single_double_ParamLimits

0x942b,	// (0x000324d4) popup_ezdial_listscroll_window_ParamLimits

0xbc89,	// (0x00034d32) popup_number_entry_window_cp01_ParamLimits

0x94ec,	// (0x00032595) phacti_button_pane_ParamLimits

0x94ec,	// (0x00032595) phacti_button_pane

0xc963,	// (0x00035a0c) bg_button_pane_cp14

0xbd99,	// (0x00034e42) phacti_button_pane_t1

0x94fd,	// (0x000325a6) main_touch_calib_button_pane_ParamLimits

0x94fd,	// (0x000325a6) main_touch_calib_button_pane

0xd100,	// (0x000361a9) bg_button_pane_cp18_ParamLimits

0xd100,	// (0x000361a9) bg_button_pane_cp18

0xbda7,	// (0x00034e50) main_touch_calib_button_pane_t1_ParamLimits

0xbda7,	// (0x00034e50) main_touch_calib_button_pane_t1

0xbdbd,	// (0x00034e66) main_touch_calib_button_pane_t2_ParamLimits

0xbdbd,	// (0x00034e66) main_touch_calib_button_pane_t2

0x0001,

0xfc70,	// (0x00038d19) main_touch_calib_button_pane_t_ParamLimits

0xfc70,	// (0x00038d19) main_touch_calib_button_pane_t

0xc963,	// (0x00035a0c) cell_ncimui_button_pane

0xc963,	// (0x00035a0c) bg_button_pane_cp032

0xbddb,	// (0x00034e84) cell_ncimui_button_pane_t1

0xb4e9,	// (0x00034592) image3_infobar_pane_ParamLimits

0xb4e9,	// (0x00034592) image3_infobar_pane

0x868e,	// (0x00031737) fs_bigclock_status_pane_ParamLimits

0x868e,	// (0x00031737) fs_bigclock_status_pane

0x869b,	// (0x00031744) main_fs_bigclock_clock_pane_ParamLimits

0x869b,	// (0x00031744) main_fs_bigclock_clock_pane

0x86b9,	// (0x00031762) main_fs_bigclock_indi_pane_ParamLimits

0x86b9,	// (0x00031762) main_fs_bigclock_indi_pane

0x86eb,	// (0x00031794) main_fs_bigclock_swipe_pane_ParamLimits

0x86eb,	// (0x00031794) main_fs_bigclock_swipe_pane

0xc963,	// (0x00035a0c) main_fs_clock_dumped_data

0x872a,	// (0x000317d3) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x872a,	// (0x000317d3) list_single_fs_bigclock_indicator_pane_g1

0x8745,	// (0x000317ee) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8745,	// (0x000317ee) list_single_fs_bigclock_indicator_pane_g2

0x875f,	// (0x00031808) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x875f,	// (0x00031808) list_single_fs_bigclock_indicator_pane_g3

0x8779,	// (0x00031822) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8779,	// (0x00031822) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb26,	// (0x00038bcf) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb26,	// (0x00038bcf) list_single_fs_bigclock_indicator_pane_g

0x87a4,	// (0x0003184d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x87a4,	// (0x0003184d) list_single_fs_bigclock_indicator_pane_t1

0x87cc,	// (0x00031875) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x87cc,	// (0x00031875) list_single_fs_bigclock_indicator_pane_t2

0x87f4,	// (0x0003189d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x87f4,	// (0x0003189d) list_single_fs_bigclock_indicator_pane_t3

0x881c,	// (0x000318c5) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x881c,	// (0x000318c5) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb31,	// (0x00038bda) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb31,	// (0x00038bda) list_single_fs_bigclock_indicator_pane_t

0xbde9,	// (0x00034e92) image3_infobar_fav_pane_ParamLimits

0xbde9,	// (0x00034e92) image3_infobar_fav_pane

0xbdf9,	// (0x00034ea2) image3_infobar_loc_pane_ParamLimits

0xbdf9,	// (0x00034ea2) image3_infobar_loc_pane

0xbe0d,	// (0x00034eb6) image3_infobar_time_pane_ParamLimits

0xbe0d,	// (0x00034eb6) image3_infobar_time_pane

0xd0a2,	// (0x0003614b) image3_infobar_time_pane_g1

0xbe1d,	// (0x00034ec6) image3_infobar_time_pane_t1

0xd0a2,	// (0x0003614b) image3_infobar_loc_pane_g1

0xbe2b,	// (0x00034ed4) image3_infobar_loc_pane_g2

0x0001,

0xfc75,	// (0x00038d1e) image3_infobar_loc_pane_g

0xbe33,	// (0x00034edc) image3_infobar_loc_pane_t1

0xd0a2,	// (0x0003614b) image3_infobar_fav_pane_g1

0xbe41,	// (0x00034eea) image3_infobar_fav_pane_g2

0x0001,

0xfc7a,	// (0x00038d23) image3_infobar_fav_pane_g

0xbe49,	// (0x00034ef2) fs_bigclock_status_battery_pane

0xbe52,	// (0x00034efb) fs_bigclock_status_signal_pane

0xbe5b,	// (0x00034f04) fs_bigclock_status_title_pane

0xbe64,	// (0x00034f0d) fs_bigclock_status_signal_pane_g1

0xbe6d,	// (0x00034f16) fs_bigclock_status_signal_pane_g2

0x0001,

0xfc7f,	// (0x00038d28) fs_bigclock_status_signal_pane_g

0xbe75,	// (0x00034f1e) fs_bigclock_status_battery_pane_g1

0xbe7e,	// (0x00034f27) fs_bigclock_status_battery_pane_g2

0x0001,

0xfc84,	// (0x00038d2d) fs_bigclock_status_battery_pane_g

0xbe86,	// (0x00034f2f) fs_bigclock_status_title_pane_t1

0x9512,	// (0x000325bb) main_fs_bigclock_clock_pane_g1

0x9512,	// (0x000325bb) main_fs_bigclock_clock_pane_g2

0x9512,	// (0x000325bb) main_fs_bigclock_clock_pane_g3

0x9512,	// (0x000325bb) main_fs_bigclock_clock_pane_g4

0x0003,

0xfc89,	// (0x00038d32) main_fs_bigclock_clock_pane_g

0x9525,	// (0x000325ce) main_fs_bigclock_clock_pane_t1

0x953e,	// (0x000325e7) main_fs_bigclock_clock_pane_t2

0x0001,

0xfc92,	// (0x00038d3b) main_fs_bigclock_clock_pane_t

0xbe94,	// (0x00034f3d) list_single_fs_bigclock_indicator_pane_ParamLimits

0xbe94,	// (0x00034f3d) list_single_fs_bigclock_indicator_pane

0xbea5,	// (0x00034f4e) list_single_fs_bigclock_pane_ParamLimits

0xbea5,	// (0x00034f4e) list_single_fs_bigclock_pane

0xbecb,	// (0x00034f74) main_fs_bigclock_indicator_pane_t1

0xbeda,	// (0x00034f83) list_single_fs_bigclock_pane_g1

0xbee2,	// (0x00034f8b) list_single_fs_bigclock_pane_t1

0xd0a2,	// (0x0003614b) main_fs_bigclock_swipe_pane_g1

0xbf25,	// (0x00034fce) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfca3,	// (0x00038d4c) main_fs_bigclock_swipe_pane_g

0xbf2d,	// (0x00034fd6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xbf2d,	// (0x00034fd6) main_fs_bigclock_swipe_pane_t1

0x35e2,	// (0x0002c68b) call_type_pane_ParamLimits

0xc963,	// (0x00035a0c) main_btmg_pane

0xbb21,	// (0x00034bca) list_single_cale_mrui_row_pane_g2_ParamLimits

0xbb21,	// (0x00034bca) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc16,	// (0x00038cbf) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc16,	// (0x00038cbf) list_single_cale_mrui_row_pane_g

0xbce5,	// (0x00034d8e) list_recal_vselct_arw_lo_pane

0xbced,	// (0x00034d96) list_recal_vselct_arw_up_pane

0xbcf5,	// (0x00034d9e) list_recal_vselct_pane

0x9598,	// (0x00032641) btmg_button_pane

0x95a2,	// (0x0003264b) main_btmg_pane_g1

0xc963,	// (0x00035a0c) bg_button_pane_cp044

0xbf4a,	// (0x00034ff3) btmg_button_pane_t1

0xef6e,	// (0x00038017) aid_listscroll_gen

0xcf51,	// (0x00035ffa) main_cntbar_detail_pane

0xb8c4,	// (0x0003496d) list_cmail_folder_pane

0x35d6,	// (0x0002c67f) sp_fs_scroll_pane_cp03_ParamLimits

0x90ca,	// (0x00032173) list_single_fs_dyc_pane_cp01_ParamLimits

0x90ca,	// (0x00032173) list_single_fs_dyc_pane_cp01

0xbf58,	// (0x00035001) aid_size_cmail_indent

0xbf61,	// (0x0003500a) list_single_dyc_row_pane_cp01

0x95d8,	// (0x00032681) cntbar_detail_list_pane_ParamLimits

0x95d8,	// (0x00032681) cntbar_detail_list_pane

0x9624,	// (0x000326cd) main_cntbar_detail_cont_pane_ParamLimits

0x9624,	// (0x000326cd) main_cntbar_detail_cont_pane

0x35d6,	// (0x0002c67f) scroll_pane_cp032_ParamLimits

0x35d6,	// (0x0002c67f) scroll_pane_cp032

0x9638,	// (0x000326e1) cntbar_detail_list_event_pane_ParamLimits

0x9638,	// (0x000326e1) cntbar_detail_list_event_pane

0x95e8,	// (0x00032691) cntbar_detail_list_shct_pane

0xd588,	// (0x00036631) aid_list_gen

0xbf6a,	// (0x00035013) aid_scroll

0xbf73,	// (0x0003501c) aid_size_touch_scroll_bar

0x8923,	// (0x000319cc) aid_list_double

0xbf7c,	// (0x00035025) aid_list_single

0xbf7c,	// (0x00035025) aid_list_single_lg

0xbf85,	// (0x0003502e) aid_list_z_g_a_sm

0xbf8d,	// (0x00035036) aid_list_z_g_d

0xbf95,	// (0x0003503e) aid_txt_z_prm

0x9648,	// (0x000326f1) aid_txt_z_prm_cp01

0x9656,	// (0x000326ff) aid_txt_z_sec

0x9664,	// (0x0003270d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9664,	// (0x0003270d) main_cntbar_detail_cont_pane_g1

0x9678,	// (0x00032721) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9678,	// (0x00032721) main_cntbar_detail_cont_pane_g2

0x0001,

0xfca8,	// (0x00038d51) main_cntbar_detail_cont_pane_g_ParamLimits

0xfca8,	// (0x00038d51) main_cntbar_detail_cont_pane_g

0xbfa3,	// (0x0003504c) main_cntbar_detail_cont_pane_t1

0xbfb1,	// (0x0003505a) main_cntbar_detail_cont_pane_t2

0xbfbf,	// (0x00035068) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcad,	// (0x00038d56) main_cntbar_detail_cont_pane_t

0x9688,	// (0x00032731) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9688,	// (0x00032731) cell_cntbar_detail_list_shct_pane

0xbfcd,	// (0x00035076) cntbar_detail_list_shct_pane_g1

0xbfd6,	// (0x0003507f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcb4,	// (0x00038d5d) cntbar_detail_list_shct_pane_g

0x969c,	// (0x00032745) cntbar_detail_list_event_pane_g1_ParamLimits

0x969c,	// (0x00032745) cntbar_detail_list_event_pane_g1

0x96a8,	// (0x00032751) cntbar_detail_list_event_pane_g2_ParamLimits

0x96a8,	// (0x00032751) cntbar_detail_list_event_pane_g2

0x0005,

0xfcb9,	// (0x00038d62) cntbar_detail_list_event_pane_g_ParamLimits

0xfcb9,	// (0x00038d62) cntbar_detail_list_event_pane_g

0x9714,	// (0x000327bd) cntbar_detail_list_event_pane_t1_ParamLimits

0x9714,	// (0x000327bd) cntbar_detail_list_event_pane_t1

0x9729,	// (0x000327d2) cntbar_detail_list_event_pane_t2_ParamLimits

0x9729,	// (0x000327d2) cntbar_detail_list_event_pane_t2

0x0002,

0xfcc6,	// (0x00038d6f) cntbar_detail_list_event_pane_t_ParamLimits

0xfcc6,	// (0x00038d6f) cntbar_detail_list_event_pane_t

0xd0a2,	// (0x0003614b) cell_cntbar_detail_list_shct_pane_g1

0xdcc4,	// (0x00036d6d) navi_pane_mv_g3

0xcf51,	// (0x00035ffa) main_cntbar_detail_pane_ParamLimits

0xc963,	// (0x00035a0c) main_notif_wgt_pane

0xb269,	// (0x00034312) aid_tch_main_mp4_pane_g4

0xb4e1,	// (0x0003458a) popup_slider_window_cp02

0xbcdb,	// (0x00034d84) list_recal_day_event_pane

0x95ac,	// (0x00032655) cntbar_detail_btn_pane_ParamLimits

0x95ac,	// (0x00032655) cntbar_detail_btn_pane

0x95c2,	// (0x0003266b) cntbar_detail_btn_pane_cp01_ParamLimits

0x95c2,	// (0x0003266b) cntbar_detail_btn_pane_cp01

0x95e8,	// (0x00032691) cntbar_detail_list_shct_pane_ParamLimits

0x95f8,	// (0x000326a1) cntbar_detail_pane_g1_ParamLimits

0x95f8,	// (0x000326a1) cntbar_detail_pane_g1

0x9608,	// (0x000326b1) cntbar_detail_pane_t1_ParamLimits

0x9608,	// (0x000326b1) cntbar_detail_pane_t1

0x96b4,	// (0x0003275d) cntbar_detail_list_event_pane_g3_ParamLimits

0x96b4,	// (0x0003275d) cntbar_detail_list_event_pane_g3

0x96cc,	// (0x00032775) cntbar_detail_list_event_pane_g4_ParamLimits

0x96cc,	// (0x00032775) cntbar_detail_list_event_pane_g4

0x96e4,	// (0x0003278d) cntbar_detail_list_event_pane_g5_ParamLimits

0x96e4,	// (0x0003278d) cntbar_detail_list_event_pane_g5

0x96fc,	// (0x000327a5) cntbar_detail_list_event_pane_g6_ParamLimits

0x96fc,	// (0x000327a5) cntbar_detail_list_event_pane_g6

0x973e,	// (0x000327e7) cntbar_detail_list_event_pane_t3_ParamLimits

0x973e,	// (0x000327e7) cntbar_detail_list_event_pane_t3

0x9750,	// (0x000327f9) popup_notif_wgt_window_ParamLimits

0x9750,	// (0x000327f9) popup_notif_wgt_window

0x9769,	// (0x00032812) popup_submenu_window_cp01_ParamLimits

0x9769,	// (0x00032812) popup_submenu_window_cp01

0xd318,	// (0x000363c1) bg_popup_window_pane_cp10

0xbfdf,	// (0x00035088) listscroll_notif_wgt_pane

0xbff1,	// (0x0003509a) list_notif_wgt_window

0xbffa,	// (0x000350a3) scroll_pane_cp033

0x977f,	// (0x00032828) list_notif_wgt_row_pane_ParamLimits

0x977f,	// (0x00032828) list_notif_wgt_row_pane

0xc003,	// (0x000350ac) aid_size_list_notif_wgt_del

0xc010,	// (0x000350b9) list_notif_wgt_row_pane_g1

0xc01c,	// (0x000350c5) list_notif_wgt_row_pane_g2

0xc02b,	// (0x000350d4) list_notif_wgt_row_pane_g3

0x0002,

0xfccd,	// (0x00038d76) list_notif_wgt_row_pane_g

0xc038,	// (0x000350e1) list_notif_wgt_row_pane_t1

0xc04e,	// (0x000350f7) list_notif_wgt_row_pane_t2

0xc060,	// (0x00035109) list_notif_wgt_row_pane_t3

0x0002,

0xfcd4,	// (0x00038d7d) list_notif_wgt_row_pane_t

0x6a9b,	// (0x0002fb44) list_recal_day_event_pane_g1

0xc072,	// (0x0003511b) list_recal_day_event_pane_t1

0xc963,	// (0x00035a0c) bg_button_pane_cp045

0xc081,	// (0x0003512a) cntbar_detail_btn_pane_t1

0xdde5,	// (0x00036e8e) main_callh_pane_ParamLimits

0xdde5,	// (0x00036e8e) main_callh_pane

0xc963,	// (0x00035a0c) main_coverflow0_pane

0xc963,	// (0x00035a0c) main_wgtman_pane

0x8703,	// (0x000317ac) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8703,	// (0x000317ac) main_fs_bigclock_unlock_btn_pane

0x9046,	// (0x000320ef) bg_button_pane_cp16

0x9056,	// (0x000320ff) cell_tport_appsw_pane_g3

0x978f,	// (0x00032838) cf0_flow_pane_ParamLimits

0x978f,	// (0x00032838) cf0_flow_pane

0xc08f,	// (0x00035138) listscroll_cf0_pane

0xc09a,	// (0x00035143) main_cf0_pane_g1

0x97a4,	// (0x0003284d) main_cf0_pane_t1_ParamLimits

0x97a4,	// (0x0003284d) main_cf0_pane_t1

0x97bb,	// (0x00032864) main_cf0_pane_t2_ParamLimits

0x97bb,	// (0x00032864) main_cf0_pane_t2

0x0001,

0xfce0,	// (0x00038d89) main_cf0_pane_t_ParamLimits

0xfce0,	// (0x00038d89) main_cf0_pane_t

0xc0ac,	// (0x00035155) scroll_pane_cp11

0x97d2,	// (0x0003287b) cf0_flow_pane_g1

0x97da,	// (0x00032883) cf0_flow_pane_g2

0x0001,

0xfce5,	// (0x00038d8e) cf0_flow_pane_g

0x97e2,	// (0x0003288b) cf0_flow_pane_t1

0xc963,	// (0x00035a0c) main_call6_pane

0xc963,	// (0x00035a0c) main_calllock_pane

0x1ce4,	// (0x0002ad8d) call6_btn_grp_pane_ParamLimits

0x1ce4,	// (0x0002ad8d) call6_btn_grp_pane

0x1cfe,	// (0x0002ada7) call6_pane_g1_ParamLimits

0x1cfe,	// (0x0002ada7) call6_pane_g1

0x1d14,	// (0x0002adbd) popup_call6_1st_window_ParamLimits

0x1d14,	// (0x0002adbd) popup_call6_1st_window

0x1d25,	// (0x0002adce) popup_call6_2nd_window_ParamLimits

0x1d25,	// (0x0002adce) popup_call6_2nd_window

0x1d36,	// (0x0002addf) cell_call6_btn_pane_ParamLimits

0x1d36,	// (0x0002addf) cell_call6_btn_pane

0xd318,	// (0x000363c1) bg_popup_call2_in_pane_cp03

0xc0b7,	// (0x00035160) popup_call6_1st_window_g1

0xc0bf,	// (0x00035168) popup_call6_1st_window_g2

0xc0c7,	// (0x00035170) popup_call6_1st_window_g3

0x0002,

0xfcea,	// (0x00038d93) popup_call6_1st_window_g

0xc0cf,	// (0x00035178) popup_call6_1st_window_t1

0xc0de,	// (0x00035187) popup_call6_1st_window_t2

0xc0ec,	// (0x00035195) popup_call6_1st_window_t3

0x0002,

0xfcf1,	// (0x00038d9a) popup_call6_1st_window_t

0xd318,	// (0x000363c1) bg_popup_call2_in_pane_cp04

0xc0fa,	// (0x000351a3) popup_call6_2nd_window_g1

0xc102,	// (0x000351ab) popup_call6_2nd_window_g2

0xc10a,	// (0x000351b3) popup_call6_2nd_window_g3

0x0002,

0xfcf8,	// (0x00038da1) popup_call6_2nd_window_g

0xc112,	// (0x000351bb) popup_call6_2nd_window_t1

0xaf9e,	// (0x00034047) bg_button_pane_cp15

0xc121,	// (0x000351ca) cell_call6_btn_pane_g1

0xc12a,	// (0x000351d3) cell_call6_btn_pane_t1

0x97f0,	// (0x00032899) listscroll_wgtman_pane_ParamLimits

0x97f0,	// (0x00032899) listscroll_wgtman_pane

0x9811,	// (0x000328ba) wgtman_btn_pane_ParamLimits

0x9811,	// (0x000328ba) wgtman_btn_pane

0xdacb,	// (0x00036b74) aid_scroll_copy1

0xc139,	// (0x000351e2) list_wgtman_pane

0x9854,	// (0x000328fd) wgtman_btn_pane_g1_ParamLimits

0x9854,	// (0x000328fd) wgtman_btn_pane_g1

0x9880,	// (0x00032929) wgtman_btn_pane_t1_ParamLimits

0x9880,	// (0x00032929) wgtman_btn_pane_t1

0xc143,	// (0x000351ec) wgtman_btn_pane_t2_ParamLimits

0xc143,	// (0x000351ec) wgtman_btn_pane_t2

0x0001,

0xfcff,	// (0x00038da8) wgtman_btn_pane_t_ParamLimits

0xfcff,	// (0x00038da8) wgtman_btn_pane_t

0x98bd,	// (0x00032966) listrow_wgtman_pane_ParamLimits

0x98bd,	// (0x00032966) listrow_wgtman_pane

0x98cf,	// (0x00032978) listrow_wgtman_pane_g1

0x98dc,	// (0x00032985) listrow_wgtman_pane_g2

0x0001,

0xfd04,	// (0x00038dad) listrow_wgtman_pane_g

0x98fa,	// (0x000329a3) listrow_wgtman_pane_t1

0x9912,	// (0x000329bb) listrow_wgtman_pane_t2

0x0001,

0xfd09,	// (0x00038db2) listrow_wgtman_pane_t

0x9938,	// (0x000329e1) wait_bar_pane_cp09

0xc15a,	// (0x00035203) main_calllock_btn_pane

0xc164,	// (0x0003520d) main_calllock_pane_g1

0xc963,	// (0x00035a0c) bg_button_pane_cp17

0xc16c,	// (0x00035215) main_calllock_btn_pane_g1

0xc175,	// (0x0003521e) main_calllock_btn_pane_t1

0xc963,	// (0x00035a0c) main_dialer3_pane

0xc963,	// (0x00035a0c) main_fmrd2_pane

0xd0a2,	// (0x0003614b) main_fs_bigclock_unlock_btn_pane_g1

0x9952,	// (0x000329fb) main_fs_bigclock_unlock_btn_pane_t1

0x9960,	// (0x00032a09) area_fmrd2_info_pane_ParamLimits

0x9960,	// (0x00032a09) area_fmrd2_info_pane

0x9971,	// (0x00032a1a) area_fmrd2_visual_pane_ParamLimits

0x9971,	// (0x00032a1a) area_fmrd2_visual_pane

0x997f,	// (0x00032a28) fmrd2_indi_pane_ParamLimits

0x997f,	// (0x00032a28) fmrd2_indi_pane

0x998c,	// (0x00032a35) area_fmrd2_visual_pane_g1

0x9994,	// (0x00032a3d) area_fmrd2_visual_pane_t1

0x99a4,	// (0x00032a4d) area_fmrd2_visual_pane_t2

0x99b4,	// (0x00032a5d) area_fmrd2_visual_pane_t3

0x0002,

0xfd13,	// (0x00038dbc) area_fmrd2_visual_pane_t

0x99c4,	// (0x00032a6d) area_fmrd2_info_pane_g1

0x99cc,	// (0x00032a75) area_fmrd2_info_pane_t1

0x99dc,	// (0x00032a85) area_fmrd2_info_pane_t2

0x99ec,	// (0x00032a95) area_fmrd2_info_pane_t3

0x99fc,	// (0x00032aa5) area_fmrd2_info_pane_t4

0x0003,

0xfd1a,	// (0x00038dc3) area_fmrd2_info_pane_t

0x9a0a,	// (0x00032ab3) fmrd2_indi_pane_t1

0x9a1a,	// (0x00032ac3) fmrd2_indi_pane_t2

0x9a2a,	// (0x00032ad3) fmrd2_indi_pane_t3

0x0002,

0xfd23,	// (0x00038dcc) fmrd2_indi_pane_t

0x8788,	// (0x00031831) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8788,	// (0x00031831) list_single_fs_bigclock_indicator_pane_g5

0x8839,	// (0x000318e2) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x8839,	// (0x000318e2) list_single_fs_bigclock_indicator_pane_t5

0x923c,	// (0x000322e5) aid_cell_bcale_month_pane_ParamLimits

0x923c,	// (0x000322e5) aid_cell_bcale_month_pane

0x923c,	// (0x000322e5) bcale_month_pane_ParamLimits

0x923c,	// (0x000322e5) bcale_month_pane

0xb1f8,	// (0x000342a1) bcale_preview_pane_ParamLimits

0xb1f8,	// (0x000342a1) bcale_preview_pane

0xbee2,	// (0x00034f8b) list_single_fs_bigclock_pane_t1_ParamLimits

0xbf01,	// (0x00034faa) list_single_fs_bigclock_pane_t2_ParamLimits

0xbf01,	// (0x00034faa) list_single_fs_bigclock_pane_t2

0x0001,

0xfc9e,	// (0x00038d47) list_single_fs_bigclock_pane_t_ParamLimits

0xfc9e,	// (0x00038d47) list_single_fs_bigclock_pane_t

0x994a,	// (0x000329f3) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd0e,	// (0x00038db7) main_fs_bigclock_unlock_btn_pane_g

0x9a3a,	// (0x00032ae3) aid_dia3_key_size_ParamLimits

0x9a3a,	// (0x00032ae3) aid_dia3_key_size

0x9a49,	// (0x00032af2) aid_dia3_listrow_size_ParamLimits

0x9a49,	// (0x00032af2) aid_dia3_listrow_size

0x9a5e,	// (0x00032b07) dia3_keypad_fun_pane_ParamLimits

0x9a5e,	// (0x00032b07) dia3_keypad_fun_pane

0x9a7a,	// (0x00032b23) dia3_keypad_num_pane_ParamLimits

0x9a7a,	// (0x00032b23) dia3_keypad_num_pane

0x9a95,	// (0x00032b3e) dia3_listscroll_pane_ParamLimits

0x9a95,	// (0x00032b3e) dia3_listscroll_pane

0x9aa8,	// (0x00032b51) dia3_numentry_pane_ParamLimits

0x9aa8,	// (0x00032b51) dia3_numentry_pane

0xc184,	// (0x0003522d) dia3_list_pane

0xc18f,	// (0x00035238) scroll_pane_cp12

0xc963,	// (0x00035a0c) bg_dia3_numentry_pane

0x9ac0,	// (0x00032b69) dia3_numentry_pane_t1

0x9acf,	// (0x00032b78) cell_dia3_key_num_pane

0x9ad7,	// (0x00032b80) cell_dia3_key0_fun_pane_ParamLimits

0x9ad7,	// (0x00032b80) cell_dia3_key0_fun_pane

0x9aeb,	// (0x00032b94) cell_dia3_key1_fun_pane_ParamLimits

0x9aeb,	// (0x00032b94) cell_dia3_key1_fun_pane

0x9b03,	// (0x00032bac) dia3_listrow_pane

0x821a,	// (0x000312c3) bg_dia3_numentry_pane_g1

0xc963,	// (0x00035a0c) bg_button_pane_cp21

0xc19a,	// (0x00035243) cell_dia3_key_num_pane_t1

0xc1a8,	// (0x00035251) cell_dia3_key_num_pane_t2

0xc1b7,	// (0x00035260) cell_dia3_key_num_pane_t3

0xc1c6,	// (0x0003526f) cell_dia3_key_num_pane_t4

0x0003,

0xfd2a,	// (0x00038dd3) cell_dia3_key_num_pane_t

0xc963,	// (0x00035a0c) bg_button_pane_cp19

0x9b15,	// (0x00032bbe) cell_dia3_key0_fun_pane_g1

0xc963,	// (0x00035a0c) bg_button_pane_cp20

0x9b1d,	// (0x00032bc6) cell_dia3_key1_fun_pane_g1

0xb1f8,	// (0x000342a1) area_left_week_number_pane

0xb1f8,	// (0x000342a1) area_top_day_name_pane

0xb1f8,	// (0x000342a1) frame_month_view_pane

0xb1f8,	// (0x000342a1) grid_month_view_pane

0xb1f8,	// (0x000342a1) cell_top_day_name_pane_ParamLimits

0xb1f8,	// (0x000342a1) cell_top_day_name_pane

0xb1f8,	// (0x000342a1) cell_area_left_week_number_pane_ParamLimits

0xb1f8,	// (0x000342a1) cell_area_left_week_number_pane

0xb1f8,	// (0x000342a1) cell_month_view_pane_ParamLimits

0xb1f8,	// (0x000342a1) cell_month_view_pane

0xb1ec,	// (0x00034295) frm_month_g1

0xb1ec,	// (0x00034295) frm_month_g2

0xb1ec,	// (0x00034295) frm_month_g3

0xb1ec,	// (0x00034295) frm_month_g4

0xb1ec,	// (0x00034295) frm_month_g5

0xb1ec,	// (0x00034295) frm_month_g6

0xb1ec,	// (0x00034295) frm_month_g7

0xb1ec,	// (0x00034295) frm_month_g8

0xb1ec,	// (0x00034295) frm_month_g9

0xb1ec,	// (0x00034295) frm_month_g10

0xb1ec,	// (0x00034295) frm_month_g11

0xb1ec,	// (0x00034295) frm_month_g12

0xb1ec,	// (0x00034295) frm_month_g13

0xb1ec,	// (0x00034295) frm_month_g14

0xb1ec,	// (0x00034295) frm_month_g15

0xb1ec,	// (0x00034295) frm_month_g16

0x000f,

0xfd33,	// (0x00038ddc) frm_month_g

0xc1d5,	// (0x0003527e) cell_top_day_name_pane_t1

0xb1ec,	// (0x00034295) cell_area_left_week_number_pane_g1

0xc1d5,	// (0x0003527e) cell_area_left_week_number_pane_t1

0xb1ec,	// (0x00034295) cell_month_view_pane_g1

0xc1d5,	// (0x0003527e) cell_month_view_pane_t1

0xc963,	// (0x00035a0c) main_fps_pane

0x8c31,	// (0x00031cda) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x8c31,	// (0x00031cda) cmail_ddmenu_btn02_pane_cp1

0x8c4d,	// (0x00031cf6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x8c4d,	// (0x00031cf6) cmail_ddmenu_btn02_pane_cp2

0x946e,	// (0x00032517) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x946e,	// (0x00032517) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc51,	// (0x00038cfa) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc51,	// (0x00038cfa) cmail_ddmenu_btn02_pane_g

0x948c,	// (0x00032535) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x948c,	// (0x00032535) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc56,	// (0x00038cff) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc56,	// (0x00038cff) cmail_ddmenu_btn02_pane_t

0x9b25,	// (0x00032bce) fps_text_pane_ParamLimits

0x9b25,	// (0x00032bce) fps_text_pane

0x9b3c,	// (0x00032be5) main_fps_pane_g1_ParamLimits

0x9b3c,	// (0x00032be5) main_fps_pane_g1

0x9b56,	// (0x00032bff) wait_bar_pane_cp010_ParamLimits

0x9b56,	// (0x00032bff) wait_bar_pane_cp010

0x9b67,	// (0x00032c10) fps_text_pane_t1_ParamLimits

0x9b67,	// (0x00032c10) fps_text_pane_t1

0xb569,	// (0x00034612) cam4_image_uncrop_pane_g1

0xb572,	// (0x0003461b) cam4_image_uncrop_pane_g2

0x6095,	// (0x0002f13e) cam4_image_uncrop_pane_g3

0x609e,	// (0x0002f147) cam4_image_uncrop_pane_g4

0x0003,

0xf7cb,	// (0x00038874) cam4_image_uncrop_pane_g

0x9b03,	// (0x00032bac) dia3_listrow_pane_ParamLimits

0xc963,	// (0x00035a0c) main_phob2_pane

0x9017,	// (0x000320c0) cell_tport_appsw_pane_cp02_ParamLimits

0x9017,	// (0x000320c0) cell_tport_appsw_pane_cp02

0x902b,	// (0x000320d4) cell_tport_appsw_pane_cp03_ParamLimits

0x902b,	// (0x000320d4) cell_tport_appsw_pane_cp03

0xc963,	// (0x00035a0c) phob2_contact_card_pane

0xc963,	// (0x00035a0c) phob2_listscroll_pane

0xc1e7,	// (0x00035290) phob2_list_pane

0xbc9e,	// (0x00034d47) scroll_pane_cp034

0x9b7f,	// (0x00032c28) phob2_cc_data_pane_ParamLimits

0x9b7f,	// (0x00032c28) phob2_cc_data_pane

0x9b9e,	// (0x00032c47) phob2_cc_listscroll_pane_ParamLimits

0x9b9e,	// (0x00032c47) phob2_cc_listscroll_pane

0x9bbc,	// (0x00032c65) list_double_large_graphic_phob2_pane_ParamLimits

0x9bbc,	// (0x00032c65) list_double_large_graphic_phob2_pane

0x9bdb,	// (0x00032c84) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9bdb,	// (0x00032c84) list_double_large_graphic_phob2_pane_g1

0x9bed,	// (0x00032c96) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9bed,	// (0x00032c96) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd54,	// (0x00038dfd) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd54,	// (0x00038dfd) list_double_large_graphic_phob2_pane_g

0x9c21,	// (0x00032cca) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9c21,	// (0x00032cca) list_double_large_graphic_phob2_pane_t1

0x9c45,	// (0x00032cee) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9c45,	// (0x00032cee) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd5d,	// (0x00038e06) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd5d,	// (0x00038e06) list_double_large_graphic_phob2_pane_t

0xcf51,	// (0x00035ffa) list_highlight_pane_cp024

0xc1ef,	// (0x00035298) phob2_cc_button_pane

0x9c66,	// (0x00032d0f) phob2_cc_data_pane_g1_ParamLimits

0x9c66,	// (0x00032d0f) phob2_cc_data_pane_g1

0x9c7d,	// (0x00032d26) phob2_cc_data_pane_g2_ParamLimits

0x9c7d,	// (0x00032d26) phob2_cc_data_pane_g2

0x0001,

0xfd62,	// (0x00038e0b) phob2_cc_data_pane_g_ParamLimits

0xfd62,	// (0x00038e0b) phob2_cc_data_pane_g

0x9c8f,	// (0x00032d38) phob2_cc_data_pane_t1_ParamLimits

0x9c8f,	// (0x00032d38) phob2_cc_data_pane_t1

0x9ca7,	// (0x00032d50) phob2_cc_data_pane_t2_ParamLimits

0x9ca7,	// (0x00032d50) phob2_cc_data_pane_t2

0x9cbf,	// (0x00032d68) phob2_cc_data_pane_t3_ParamLimits

0x9cbf,	// (0x00032d68) phob2_cc_data_pane_t3

0x0002,

0xfd67,	// (0x00038e10) phob2_cc_data_pane_t_ParamLimits

0xfd67,	// (0x00038e10) phob2_cc_data_pane_t

0xc1f7,	// (0x000352a0) phob2_cc_list_pane_ParamLimits

0xc1f7,	// (0x000352a0) phob2_cc_list_pane

0x6ded,	// (0x0002fe96) scroll_pane_cp035_ParamLimits

0x6ded,	// (0x0002fe96) scroll_pane_cp035

0xcf51,	// (0x00035ffa) bg_button_pane_cp033

0xc203,	// (0x000352ac) phob2_cc_button_pane_g1

0xc20f,	// (0x000352b8) phob2_cc_button_pane_t1

0xc224,	// (0x000352cd) phob2_cc_button_pane_t2

0x0001,

0xfd6e,	// (0x00038e17) phob2_cc_button_pane_t

0x9cd7,	// (0x00032d80) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9cd7,	// (0x00032d80) list_double_large_graphic_phob2_cc_pane

0x9d07,	// (0x00032db0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9d07,	// (0x00032db0) list_double_large_graphic_phob2_cc_pane_g1

0x9d13,	// (0x00032dbc) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9d13,	// (0x00032dbc) list_double_large_graphic_phob2_cc_pane_g2

0x9d1f,	// (0x00032dc8) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9d1f,	// (0x00032dc8) list_double_large_graphic_phob2_cc_pane_g3

0x9d2b,	// (0x00032dd4) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9d2b,	// (0x00032dd4) list_double_large_graphic_phob2_cc_pane_g4

0x9d37,	// (0x00032de0) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9d37,	// (0x00032de0) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfd73,	// (0x00038e1c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfd73,	// (0x00038e1c) list_double_large_graphic_phob2_cc_pane_g

0x9d43,	// (0x00032dec) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9d43,	// (0x00032dec) list_double_large_graphic_phob2_cc_pane_t1

0x9d6c,	// (0x00032e15) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9d6c,	// (0x00032e15) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfd7e,	// (0x00038e27) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfd7e,	// (0x00038e27) list_double_large_graphic_phob2_cc_pane_t

0xc236,	// (0x000352df) list_highlight_pane_cp025_ParamLimits

0xc236,	// (0x000352df) list_highlight_pane_cp025

0xcf51,	// (0x00035ffa) bg_button_pane_cp033_ParamLimits

0xc203,	// (0x000352ac) phob2_cc_button_pane_g1_ParamLimits

0xc20f,	// (0x000352b8) phob2_cc_button_pane_t1_ParamLimits

0xc224,	// (0x000352cd) phob2_cc_button_pane_t2_ParamLimits

0xfd6e,	// (0x00038e17) phob2_cc_button_pane_t_ParamLimits

0x1db2,	// (0x0002ae5b) popup_wgtman_window

0x659f,	// (0x0002f648) scroll_pane_cp038

0x9836,	// (0x000328df) wgtman_btn_pane_cp_01_ParamLimits

0x9836,	// (0x000328df) wgtman_btn_pane_cp_01

0xc244,	// (0x000352ed) wgtman_content_pane

0xc24d,	// (0x000352f6) wgtman_heading_pane

0xc963,	// (0x00035a0c) bg_heading_pane_cp02

0xc256,	// (0x000352ff) wgtman_heading_pane_g1

0xc25e,	// (0x00035307) wgtman_heading_pane_t1

0xc26c,	// (0x00035315) scroll_pane_cp036

0xc274,	// (0x0003531d) wgtman_list_pane

0xc27c,	// (0x00035325) wgtman_list_pane_t1_ParamLimits

0xc27c,	// (0x00035325) wgtman_list_pane_t1

0xb555,	// (0x000345fe) cam4_grid_pane

0x6b93,	// (0x0002fc3c) bg_button_pane_cp015_ParamLimits

0x6ba4,	// (0x0002fc4d) bg_button_pane_cp016_ParamLimits

0x6bb0,	// (0x0002fc59) bg_button_pane_cp017_ParamLimits

0x6c10,	// (0x0002fcb9) popup_vitu2_query_window_g3_ParamLimits

0x6c10,	// (0x0002fcb9) popup_vitu2_query_window_g3

0x6cb1,	// (0x0002fd5a) popup_vitu2_query_window_t6_ParamLimits

0x6cb1,	// (0x0002fd5a) popup_vitu2_query_window_t6

0x6cdc,	// (0x0002fd85) popup_vitu2_query_window_t7_ParamLimits

0x6cdc,	// (0x0002fd85) popup_vitu2_query_window_t7

0xb569,	// (0x00034612) cam4_grid_pane_g1

0xb572,	// (0x0003461b) cam4_grid_pane_g2

0xc296,	// (0x0003533f) cam4_grid_pane_g3

0xc29f,	// (0x00035348) cam4_grid_pane_g4

0x0003,

0xfd83,	// (0x00038e2c) cam4_grid_pane_g

0x25df,	// (0x0002b688) aid_placing_vt_slider_lsc_ParamLimits

0x28ea,	// (0x0002b993) vidtel_button_pane_ParamLimits

0x28ea,	// (0x0002b993) vidtel_button_pane

0xc963,	// (0x00035a0c) bg_button_pane_cp034

0xc2aa,	// (0x00035353) vidtel_button_pane_g1

0xc2b2,	// (0x0003535b) vidtel_button_pane_t1

0x697e,	// (0x0002fa27) aid_size_vtel_slider_touch

0x6ded,	// (0x0002fe96) scroll_pane_cp039

0x8289,	// (0x00031332) ncim_query_button_pane_cp01_ParamLimits

0x82a8,	// (0x00031351) ncimui_query_pane_g1_ParamLimits

0xcf51,	// (0x00035ffa) input_focus_pane_cp012_ParamLimits

0x82cd,	// (0x00031376) ncim_query_entry_pane_t1_ParamLimits

0x6ded,	// (0x0002fe96) scroll_pane_cp039_ParamLimits

0xdbaf,	// (0x00036c58) navi_pane_bcale_mc_g1

0xdbb7,	// (0x00036c60) navi_pane_bcale_mc_t1

0x8d3e,	// (0x00031de7) main_sp_fs_email_pane_g1

0x8d4a,	// (0x00031df3) main_sp_fs_email_pane_g2

0x0001,

0xfb89,	// (0x00038c32) main_sp_fs_email_pane_g

0xbb2d,	// (0x00034bd6) list_single_cale_mrui_row_pane_g3_ParamLimits

0xbb2d,	// (0x00034bd6) list_single_cale_mrui_row_pane_g3

0x94ac,	// (0x00032555) list_single_recal_day_pane_g5_event_pane

0xbd4c,	// (0x00034df5) list_single_recal_day_pane_g7

0xc2c8,	// (0x00035371) list_recal_day_event_pane_cp01

0xc2d1,	// (0x0003537a) list_recal_vselct_arw_lo_pane_cp01

0xc2d9,	// (0x00035382) list_recal_vselct_arw_up_pane_cp01

0xc2e1,	// (0x0003538a) list_recal_vselct_pane_cp01

0x6a9b,	// (0x0002fb44) list_recal_day_event_pane_cp01_g1

0xc2eb,	// (0x00035394) list_recal_day_event_pane_cp01_t1

0xbd54,	// (0x00034dfd) list_single_recal_day_pane_t1_ParamLimits

0xbd66,	// (0x00034e0f) list_single_recal_day_pane_t2_ParamLimits

0xfc66,	// (0x00038d0f) list_single_recal_day_pane_t_ParamLimits

0xcfe9,	// (0x00036092) bg_notes_pane_ParamLimits

0xd0de,	// (0x00036187) list_notes_pane_ParamLimits

0x1e16,	// (0x0002aebf) scroll_pane_cp06_ParamLimits

0xd100,	// (0x000361a9) main_notes_pane_ParamLimits

0xcf51,	// (0x00035ffa) main_welc_pane

0x9dce,	// (0x00032e77) main_welc_body_pane_ParamLimits

0x9dce,	// (0x00032e77) main_welc_body_pane

0x9dec,	// (0x00032e95) main_welc_opti_pane_ParamLimits

0x9dec,	// (0x00032e95) main_welc_opti_pane

0x9e5c,	// (0x00032f05) main_welc_pane_t1_ParamLimits

0x9e5c,	// (0x00032f05) main_welc_pane_t1

0xa05c,	// (0x00033105) main_welc_body_row_pane_ParamLimits

0xa05c,	// (0x00033105) main_welc_body_row_pane

0xd056,	// (0x000360ff) main_welc_opti_row_pane_ParamLimits

0xd056,	// (0x000360ff) main_welc_opti_row_pane

0xc301,	// (0x000353aa) main_welc_opti_row_pane_g1

0xa070,	// (0x00033119) main_welc_opti_row_pane_t1

0xc309,	// (0x000353b2) main_welc_body_row_pane_t1

0xbfe9,	// (0x00035092) popup_notif_wgt_heading_pane

0xc003,	// (0x000350ac) aid_size_list_notif_wgt_del_ParamLimits

0xc010,	// (0x000350b9) list_notif_wgt_row_pane_g1_ParamLimits

0xc01c,	// (0x000350c5) list_notif_wgt_row_pane_g2_ParamLimits

0xc02b,	// (0x000350d4) list_notif_wgt_row_pane_g3_ParamLimits

0xfccd,	// (0x00038d76) list_notif_wgt_row_pane_g_ParamLimits

0xc038,	// (0x000350e1) list_notif_wgt_row_pane_t1_ParamLimits

0xc04e,	// (0x000350f7) list_notif_wgt_row_pane_t2_ParamLimits

0xc060,	// (0x00035109) list_notif_wgt_row_pane_t3_ParamLimits

0xfcd4,	// (0x00038d7d) list_notif_wgt_row_pane_t_ParamLimits

0x98cf,	// (0x00032978) listrow_wgtman_pane_g1_ParamLimits

0x98dc,	// (0x00032985) listrow_wgtman_pane_g2_ParamLimits

0xfd04,	// (0x00038dad) listrow_wgtman_pane_g_ParamLimits

0x98fa,	// (0x000329a3) listrow_wgtman_pane_t1_ParamLimits

0x9912,	// (0x000329bb) listrow_wgtman_pane_t2_ParamLimits

0xfd09,	// (0x00038db2) listrow_wgtman_pane_t_ParamLimits

0x9938,	// (0x000329e1) wait_bar_pane_cp09_ParamLimits

0xc963,	// (0x00035a0c) bg_popup_heading_pane_cp02

0xc318,	// (0x000353c1) popup_notif_wgt_heading_pane_g1

0xc320,	// (0x000353c9) popup_notif_wgt_heading_pane_t1

0xc963,	// (0x00035a0c) main_vids_pane

0xc963,	// (0x00035a0c) vids_listscroll_pane

0xa07f,	// (0x00033128) scroll_pane_cp040

0xc963,	// (0x00035a0c) vids_list_pane

0xa08a,	// (0x00033133) vids_list_double_pane_ParamLimits

0xa08a,	// (0x00033133) vids_list_double_pane

0xa09b,	// (0x00033144) vids_list_double_pane_g1

0xa0a4,	// (0x0003314d) vids_list_double_pane_t1

0xa0b4,	// (0x0003315d) vids_list_double_pane_t2

0x0001,

0xfda2,	// (0x00038e4b) vids_list_double_pane_t

0xaf90,	// (0x00034039) main_ncimui_pane_ParamLimits

0x7fb0,	// (0x00031059) main_ncimui_pane_g1_ParamLimits

0x7fbc,	// (0x00031065) main_ncimui_pane_g2_ParamLimits

0x7fbc,	// (0x00031065) main_ncimui_pane_g2

0x0001,

0xfa9c,	// (0x00038b45) main_ncimui_pane_g_ParamLimits

0xfa9c,	// (0x00038b45) main_ncimui_pane_g

0x9e07,	// (0x00032eb0) main_welc_pane_g1_ParamLimits

0x9e07,	// (0x00032eb0) main_welc_pane_g1

0x9e1c,	// (0x00032ec5) main_welc_pane_g2_ParamLimits

0x9e1c,	// (0x00032ec5) main_welc_pane_g2

0x0003,

0xfd8c,	// (0x00038e35) main_welc_pane_g_ParamLimits

0xfd8c,	// (0x00038e35) main_welc_pane_g

0xcfe9,	// (0x00036092) listscroll_mce_pane_ParamLimits

0xdd04,	// (0x00036dad) wait_bar_pane_cp10

0xef76,	// (0x0003801f) main_cale_day_pane_ParamLimits

0xef76,	// (0x0003801f) main_cale_week_pane_ParamLimits

0xcfe9,	// (0x00036092) main_messa_pane_ParamLimits

0x581c,	// (0x0002e8c5) main_clock2_btn_pane_ParamLimits

0x581c,	// (0x0002e8c5) main_clock2_btn_pane

0x5830,	// (0x0002e8d9) main_clock2_btn_pane_cp01_ParamLimits

0x5830,	// (0x0002e8d9) main_clock2_btn_pane_cp01

0xbac7,	// (0x00034b70) list_cale_mrui_pane_ParamLimits

0xc0a4,	// (0x0003514d) main_cf0_pane_g2

0x0001,

0xfcdb,	// (0x00038d84) main_cf0_pane_g

0xb1f8,	// (0x000342a1) area_left_week_number_pane_ParamLimits

0xb1f8,	// (0x000342a1) area_top_day_name_pane_ParamLimits

0xb1f8,	// (0x000342a1) frame_month_view_pane_ParamLimits

0xb1f8,	// (0x000342a1) grid_month_view_pane_ParamLimits

0xb1ec,	// (0x00034295) frm_month_g1_ParamLimits

0xb1ec,	// (0x00034295) frm_month_g2_ParamLimits

0xb1ec,	// (0x00034295) frm_month_g3_ParamLimits

0xb1ec,	// (0x00034295) frm_month_g4_ParamLimits

0xb1ec,	// (0x00034295) frm_month_g5_ParamLimits

0xb1ec,	// (0x00034295) frm_month_g6_ParamLimits

0xb1ec,	// (0x00034295) frm_month_g7_ParamLimits

0xb1ec,	// (0x00034295) frm_month_g8_ParamLimits

0xb1ec,	// (0x00034295) frm_month_g9_ParamLimits

0xb1ec,	// (0x00034295) frm_month_g10_ParamLimits

0xb1ec,	// (0x00034295) frm_month_g11_ParamLimits

0xb1ec,	// (0x00034295) frm_month_g12_ParamLimits

0xb1ec,	// (0x00034295) frm_month_g13_ParamLimits

0xb1ec,	// (0x00034295) frm_month_g14_ParamLimits

0xb1ec,	// (0x00034295) frm_month_g15_ParamLimits

0xb1ec,	// (0x00034295) frm_month_g16_ParamLimits

0xfd33,	// (0x00038ddc) frm_month_g_ParamLimits

0xc1d5,	// (0x0003527e) cell_top_day_name_pane_t1_ParamLimits

0xb1ec,	// (0x00034295) cell_area_left_week_number_pane_g1_ParamLimits

0xc1d5,	// (0x0003527e) cell_area_left_week_number_pane_t1_ParamLimits

0xb1ec,	// (0x00034295) cell_month_view_pane_g1_ParamLimits

0xc1d5,	// (0x0003527e) cell_month_view_pane_t1_ParamLimits

0xcfe1,	// (0x0003608a) main_clock2_btn_pane_g1

0xc32e,	// (0x000353d7) main_clock2_btn_pane_t1

0xcf51,	// (0x00035ffa) listscroll_cmail_pane_ParamLimits

0x8d3e,	// (0x00031de7) main_sp_fs_email_pane_g1_ParamLimits

0x8d4a,	// (0x00031df3) main_sp_fs_email_pane_g2_ParamLimits

0xfb89,	// (0x00038c32) main_sp_fs_email_pane_g_ParamLimits

0xbcbc,	// (0x00034d65) list_recal_day_pane_ParamLimits

0xbccd,	// (0x00034d76) mian_recal_day_pane_t1

0x8eba,	// (0x00031f63) list_single_dyc_row_text_pane_t4_ParamLimits

0x8eba,	// (0x00031f63) list_single_dyc_row_text_pane_t4

0x8f03,	// (0x00031fac) list_single_dyc_row_text_pane_t5_ParamLimits

0x8f03,	// (0x00031fac) list_single_dyc_row_text_pane_t5

0xb7af,	// (0x00034858) list_single_dyc_row_text_pane_t6_ParamLimits

0xb7af,	// (0x00034858) list_single_dyc_row_text_pane_t6

0xd69c,	// (0x00036745) aid_mgn_list_cale_time_pane

0xaf90,	// (0x00034039) main_gallery2_pane_ParamLimits

0x5846,	// (0x0002e8ef) main_clock2_pane_cp01_t1

0x5856,	// (0x0002e8ff) main_clock2_pane_cp01_t3

0x0001,

0xf6b1,	// (0x0003875a) main_clock2_pane_cp01_t

0x20f2,	// (0x0002b19b) cale_week_scroll_pane_g16_ParamLimits

0x20f2,	// (0x0002b19b) cale_week_scroll_pane_g16

0xd318,	// (0x000363c1) vorec_slider_pane

0xc2b2,	// (0x0003535b) vidtel_button_pane_t1_ParamLimits

0x9512,	// (0x000325bb) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9512,	// (0x000325bb) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9512,	// (0x000325bb) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9512,	// (0x000325bb) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfc89,	// (0x00038d32) main_fs_bigclock_clock_pane_g_ParamLimits

0x9525,	// (0x000325ce) main_fs_bigclock_clock_pane_t1_ParamLimits

0x953e,	// (0x000325e7) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfc92,	// (0x00038d3b) main_fs_bigclock_clock_pane_t_ParamLimits

0x4f99,	// (0x0002e042) main_mup3_lyrics_pane_ParamLimits

0x4f99,	// (0x0002e042) main_mup3_lyrics_pane

0xa0c4,	// (0x0003316d) main_mup3_lyrics_pane_t1_ParamLimits

0xa0c4,	// (0x0003316d) main_mup3_lyrics_pane_t1

0xb253,	// (0x000342fc) aid_main_mp4_pane_t1_area

0xb25d,	// (0x00034306) aid_main_mp4_pane_t2_area

0xb307,	// (0x000343b0) main_mp4_pane_g7_ParamLimits

0xb307,	// (0x000343b0) main_mp4_pane_g7

0xb313,	// (0x000343bc) main_mp4_pane_g8_ParamLimits

0xb313,	// (0x000343bc) main_mp4_pane_g8

0x14d8,	// (0x0002a581) aid_call6_pane_g1_size

0x9cf1,	// (0x00032d9a) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9cf1,	// (0x00032d9a) list_double_large_graphic_phob2_other_pane

0xd228,	// (0x000362d1) list_double_large_graphic_phob2_other_pane_g1

0xc963,	// (0x00035a0c) list_highlight_pane_cp026

0xcf51,	// (0x00035ffa) main_welc_pane_ParamLimits

0x8ca7,	// (0x00031d50) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8ca7,	// (0x00031d50) main_sp_fs_ctrlbar_pane_g3

0x8cc1,	// (0x00031d6a) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8cc1,	// (0x00031d6a) main_sp_fs_ctrlbar_pane_g4

0x8cf5,	// (0x00031d9e) toolbar2_fixed_button_pane_cp01

0x8d00,	// (0x00031da9) toolbar2_fixed_button_pane_cp02

0x8d0d,	// (0x00031db6) toolbar2_fixed_button_pane_cp03

0x9da8,	// (0x00032e51) list_welc_entry_pane_ParamLimits

0x9da8,	// (0x00032e51) list_welc_entry_pane

0x9e31,	// (0x00032eda) main_welc_pane_g3_ParamLimits

0x9e31,	// (0x00032eda) main_welc_pane_g3

0x9e7a,	// (0x00032f23) main_welc_pane_t2_ParamLimits

0x9e7a,	// (0x00032f23) main_welc_pane_t2

0x9e95,	// (0x00032f3e) main_welc_pane_t3_ParamLimits

0x9e95,	// (0x00032f3e) main_welc_pane_t3

0x0005,

0xfd95,	// (0x00038e3e) main_welc_pane_t_ParamLimits

0xfd95,	// (0x00038e3e) main_welc_pane_t

0x9fcd,	// (0x00033076) welc_button_pane_ParamLimits

0x9fcd,	// (0x00033076) welc_button_pane

0xa047,	// (0x000330f0) welc_service_logo_pane_ParamLimits

0xa047,	// (0x000330f0) welc_service_logo_pane

0xa0e0,	// (0x00033189) list_single_welc_entry_pane_ParamLimits

0xa0e0,	// (0x00033189) list_single_welc_entry_pane

0xa0f1,	// (0x0003319a) list_single_welc_entry_pane_g1

0xa0f9,	// (0x000331a2) list_single_welc_entry_pane_t1

0xa107,	// (0x000331b0) list_single_welc_entry_pane_t2

0x0001,

0xfda7,	// (0x00038e50) list_single_welc_entry_pane_t

0xc963,	// (0x00035a0c) bg_button_pane_cp035

0xa115,	// (0x000331be) welc_button_pane_t1

0xc34a,	// (0x000353f3) welc_service_logo_pane_g1

0xc353,	// (0x000353fc) welc_service_logo_pane_g2

0x0001,

0xfdac,	// (0x00038e55) welc_service_logo_pane_g

0xaf9e,	// (0x00034047) main_int_radio_pane

0xd177,	// (0x00036220) list_single_fs_dyc_pane_g1

0x9bfc,	// (0x00032ca5) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x9bfc,	// (0x00032ca5) list_double_large_graphic_phob2_pane_g3

0x9c0e,	// (0x00032cb7) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9c0e,	// (0x00032cb7) list_double_large_graphic_phob2_pane_g4

0xa123,	// (0x000331cc) main_int_radio1_pane_ParamLimits

0xa123,	// (0x000331cc) main_int_radio1_pane

0xc35c,	// (0x00035405) find_pane_cp02

0xa140,	// (0x000331e9) input_focus_pane_cp12_ParamLimits

0xa140,	// (0x000331e9) input_focus_pane_cp12

0xa150,	// (0x000331f9) input_focus_pane_cp13_ParamLimits

0xa150,	// (0x000331f9) input_focus_pane_cp13

0xa164,	// (0x0003320d) input_focus_pane_cp14_ParamLimits

0xa164,	// (0x0003320d) input_focus_pane_cp14

0xc365,	// (0x0003540e) int_radio1_listscroll_pane

0xa178,	// (0x00033221) main_int_radio1_pane_g1_ParamLimits

0xa178,	// (0x00033221) main_int_radio1_pane_g1

0xa190,	// (0x00033239) main_int_radio1_pane_t1_ParamLimits

0xa190,	// (0x00033239) main_int_radio1_pane_t1

0xa1ab,	// (0x00033254) main_int_radio1_pane_t2_ParamLimits

0xa1ab,	// (0x00033254) main_int_radio1_pane_t2

0xa1c6,	// (0x0003326f) main_int_radio1_pane_t3_ParamLimits

0xa1c6,	// (0x0003326f) main_int_radio1_pane_t3

0xa1e1,	// (0x0003328a) main_int_radio1_pane_t4_ParamLimits

0xa1e1,	// (0x0003328a) main_int_radio1_pane_t4

0xc36f,	// (0x00035418) main_int_radio1_pane_t5_ParamLimits

0xc36f,	// (0x00035418) main_int_radio1_pane_t5

0xa1f3,	// (0x0003329c) main_int_radio1_pane_t6_ParamLimits

0xa1f3,	// (0x0003329c) main_int_radio1_pane_t6

0xa208,	// (0x000332b1) main_int_radio1_pane_t7_ParamLimits

0xa208,	// (0x000332b1) main_int_radio1_pane_t7

0xa21d,	// (0x000332c6) main_int_radio1_pane_t8_ParamLimits

0xa21d,	// (0x000332c6) main_int_radio1_pane_t8

0xa23c,	// (0x000332e5) main_int_radio1_pane_t9_ParamLimits

0xa23c,	// (0x000332e5) main_int_radio1_pane_t9

0xa24e,	// (0x000332f7) main_int_radio1_pane_t10_ParamLimits

0xa24e,	// (0x000332f7) main_int_radio1_pane_t10

0xa274,	// (0x0003331d) main_int_radio1_pane_t11_ParamLimits

0xa274,	// (0x0003331d) main_int_radio1_pane_t11

0xa29a,	// (0x00033343) main_int_radio1_pane_t12_ParamLimits

0xa29a,	// (0x00033343) main_int_radio1_pane_t12

0x000b,

0xfdb1,	// (0x00038e5a) main_int_radio1_pane_t_ParamLimits

0xfdb1,	// (0x00038e5a) main_int_radio1_pane_t

0xc381,	// (0x0003542a) int_radio_list_pane

0xbc9e,	// (0x00034d47) scroll_pane_cp037

0xc389,	// (0x00035432) list_double_large_graphic_int_radio_pane_ParamLimits

0xc389,	// (0x00035432) list_double_large_graphic_int_radio_pane

0xc3a1,	// (0x0003544a) list_double_large_graphic_int_radio_pane_g1

0xc3aa,	// (0x00035453) list_double_large_graphic_int_radio_pane_t1

0xc3b8,	// (0x00035461) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfdca,	// (0x00038e73) list_double_large_graphic_int_radio_pane_t

0xc963,	// (0x00035a0c) list_highlight_pane_cp027

0xc2f9,	// (0x000353a2) main_button_pane_4

0x9e44,	// (0x00032eed) main_welc_pane_g4_ParamLimits

0x9e44,	// (0x00032eed) main_welc_pane_g4

0x9eae,	// (0x00032f57) main_welc_pane_t4_ParamLimits

0x9eae,	// (0x00032f57) main_welc_pane_t4

0x9ec9,	// (0x00032f72) main_welc_pane_t5_ParamLimits

0x9ec9,	// (0x00032f72) main_welc_pane_t5

0x9f0a,	// (0x00032fb3) main_welc_pane_t6_ParamLimits

0x9f0a,	// (0x00032fb3) main_welc_pane_t6

0x9fe4,	// (0x0003308d) welc_button_pane_2_ParamLimits

0x9fe4,	// (0x0003308d) welc_button_pane_2

0xa000,	// (0x000330a9) welc_button_pane_3_ParamLimits

0xa000,	// (0x000330a9) welc_button_pane_3

0xc2f9,	// (0x000353a2) welc_button_pane_4

0xa01f,	// (0x000330c8) welc_button_pane_5_ParamLimits

0xa01f,	// (0x000330c8) welc_button_pane_5

0x08cc,	// (0x00029975) main_popup_welc_pane

0xc3de,	// (0x00035487) main_welc_sk_g3

0xc3e8,	// (0x00035491) main_welc_sk_g4

0xc3f2,	// (0x0003549b) main_welc_sk_t3

0xc402,	// (0x000354ab) main_welc_sk_t4

0xc412,	// (0x000354bb) popup_welc_pane_t4

0xc420,	// (0x000354c9) popup_welc_pane_t5

0xc42e,	// (0x000354d7) popup_welc_pane_t6

0xaf9e,	// (0x00034047) main_acti_pane

0xc963,	// (0x00035a0c) main_sso_pane

0xa2ac,	// (0x00033355) sso_body_pane_ParamLimits

0xa2ac,	// (0x00033355) sso_body_pane

0xa2cc,	// (0x00033375) sso_logo_pane_ParamLimits

0xa2cc,	// (0x00033375) sso_logo_pane

0xa305,	// (0x000333ae) sso_sk_pane_ParamLimits

0xa305,	// (0x000333ae) sso_sk_pane

0xc46c,	// (0x00035515) main_sso_logo_pane_g1

0xa317,	// (0x000333c0) sso_sk_pane_t1_ParamLimits

0xa317,	// (0x000333c0) sso_sk_pane_t1

0xa331,	// (0x000333da) sso_sk_pane_t2_ParamLimits

0xa331,	// (0x000333da) sso_sk_pane_t2

0x0001,

0xfdcf,	// (0x00038e78) sso_sk_pane_t_ParamLimits

0xfdcf,	// (0x00038e78) sso_sk_pane_t

0xc475,	// (0x0003551e) aid_sso_gap

0xc47e,	// (0x00035527) aid_sso_txt1

0xc488,	// (0x00035531) aid_sso_txt2

0xc492,	// (0x0003553b) aid_sso_txt3

0x0002,

0xfdd4,	// (0x00038e7d) aid_sso_txt

0xc49c,	// (0x00035545) aid_sso_widget

0xa39b,	// (0x00033444) sso_btn_pane_ParamLimits

0xa39b,	// (0x00033444) sso_btn_pane

0xa42f,	// (0x000334d8) sso_option_pane_ParamLimits

0xa42f,	// (0x000334d8) sso_option_pane

0xa4e3,	// (0x0003358c) sso_query_pane_ParamLimits

0xa4e3,	// (0x0003358c) sso_query_pane

0xa539,	// (0x000335e2) sso_query_pane_cp01_ParamLimits

0xa539,	// (0x000335e2) sso_query_pane_cp01

0xa591,	// (0x0003363a) sso_t_hdr_pane_ParamLimits

0xa591,	// (0x0003363a) sso_t_hdr_pane

0xa5bb,	// (0x00033664) sso_t_nml_pane_ParamLimits

0xa5bb,	// (0x00033664) sso_t_nml_pane

0xa611,	// (0x000336ba) sso_t_sub_pane

0xa2d9,	// (0x00033382) sso_popup_window_ParamLimits

0xa2d9,	// (0x00033382) sso_popup_window

0xa347,	// (0x000333f0) sso_apps_pane_ParamLimits

0xa347,	// (0x000333f0) sso_apps_pane

0xa371,	// (0x0003341a) sso_body_pane_g1

0xa37b,	// (0x00033424) sso_body_pane_t1

0xa38b,	// (0x00033434) sso_body_pane_t2

0x0001,

0xfddb,	// (0x00038e84) sso_body_pane_t

0xa3e7,	// (0x00033490) sso_btn_pane_cp01_ParamLimits

0xa3e7,	// (0x00033490) sso_btn_pane_cp01

0xa4b7,	// (0x00033560) sso_prog_pane_ParamLimits

0xa4b7,	// (0x00033560) sso_prog_pane

0xa640,	// (0x000336e9) sso_t_hdr_pane_t1_ParamLimits

0xa640,	// (0x000336e9) sso_t_hdr_pane_t1

0xc4a6,	// (0x0003554f) input_focus_pane_cp10_ParamLimits

0xc4a6,	// (0x0003554f) input_focus_pane_cp10

0xc4ba,	// (0x00035563) sso_query_pane_t1_ParamLimits

0xc4ba,	// (0x00035563) sso_query_pane_t1

0xc4cd,	// (0x00035576) sso_query_pane_t2_ParamLimits

0xc4cd,	// (0x00035576) sso_query_pane_t2

0xc4e6,	// (0x0003558f) sso_query_pane_t3_ParamLimits

0xc4e6,	// (0x0003558f) sso_query_pane_t3

0xc510,	// (0x000355b9) sso_query_pane_t4_ParamLimits

0xc510,	// (0x000355b9) sso_query_pane_t4

0x0003,

0xfde0,	// (0x00038e89) sso_query_pane_t_ParamLimits

0xfde0,	// (0x00038e89) sso_query_pane_t

0xbf7c,	// (0x00035025) bg_button_pane_cp22

0xc3c6,	// (0x0003546f) sso_btn_pane_t1

0xa653,	// (0x000336fc) sso_t_nml_pane_t1_ParamLimits

0xa653,	// (0x000336fc) sso_t_nml_pane_t1

0xc534,	// (0x000355dd) sso_option_row_pane_ParamLimits

0xc534,	// (0x000355dd) sso_option_row_pane

0xc541,	// (0x000355ea) sso_t_sub_pane_t1_ParamLimits

0xc541,	// (0x000355ea) sso_t_sub_pane_t1

0xcf51,	// (0x00035ffa) bg_popup_window_pane_cp11_ParamLimits

0xcf51,	// (0x00035ffa) bg_popup_window_pane_cp11

0xc55e,	// (0x00035607) popup_sk_window_cp01_ParamLimits

0xc55e,	// (0x00035607) popup_sk_window_cp01

0xc56b,	// (0x00035614) sso_popup_body_pane_ParamLimits

0xc56b,	// (0x00035614) sso_popup_body_pane

0xc578,	// (0x00035621) scroll_pane_cp21_ParamLimits

0xc578,	// (0x00035621) scroll_pane_cp21

0xc585,	// (0x0003562e) sso_popup_body_t_pane_ParamLimits

0xc585,	// (0x0003562e) sso_popup_body_t_pane

0xc592,	// (0x0003563b) sso_popup_body_t_hdr_pane_ParamLimits

0xc592,	// (0x0003563b) sso_popup_body_t_hdr_pane

0xa66e,	// (0x00033717) sso_popup_body_t_nml_pane_ParamLimits

0xa66e,	// (0x00033717) sso_popup_body_t_nml_pane

0xa695,	// (0x0003373e) sso_popup_body_t_sub_pane_ParamLimits

0xa695,	// (0x0003373e) sso_popup_body_t_sub_pane

0xc5a4,	// (0x0003564d) sso_popup_body_t_hdr_pane_t1

0xa6b8,	// (0x00033761) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa6b8,	// (0x00033761) sso_popup_body_t_nml_pane_t1

0xc5b4,	// (0x0003565d) sso_popup_body_t_sub_pane_t1_ParamLimits

0xc5b4,	// (0x0003565d) sso_popup_body_t_sub_pane_t1

0xd0a2,	// (0x0003614b) sso_prog_pane_g1

0xa6f0,	// (0x00033799) sso_apps_pane_comp1_ParamLimits

0xa6f0,	// (0x00033799) sso_apps_pane_comp1

0xc5d9,	// (0x00035682) sso_apps_pane_comp1_g1

0xc5e1,	// (0x0003568a) sso_apps_pane_comp1_t1

0xc5fd,	// (0x000356a6) sso_option_row_pane_g1

0xc615,	// (0x000356be) sso_option_row_pane_t1

0xb8cc,	// (0x00034975) list_cmail_pane_ParamLimits

0xc963,	// (0x00035a0c) main_call7_pane

0x9d95,	// (0x00032e3e) bg_welc_area_ParamLimits

0x9d95,	// (0x00032e3e) bg_welc_area

0x9f48,	// (0x00032ff1) sso_t_hdr_pane_a_t1_ParamLimits

0x9f48,	// (0x00032ff1) sso_t_hdr_pane_a_t1

0x9f63,	// (0x0003300c) sso_t_nml_pane_a_t1_ParamLimits

0x9f63,	// (0x0003300c) sso_t_nml_pane_a_t1

0x9f92,	// (0x0003303b) sso_t_sub_pane_a_t1_ParamLimits

0x9f92,	// (0x0003303b) sso_t_sub_pane_a_t1

0xa035,	// (0x000330de) welc_button_pane_cp01_ParamLimits

0xa035,	// (0x000330de) welc_button_pane_cp01

0xc3c6,	// (0x0003546f) sso_btn_pane_t1_copy1

0xc3d5,	// (0x0003547e) welc_button_pane_2_comp1

0xc43c,	// (0x000354e5) sso_t_hdr_pane_p_t1

0xc44c,	// (0x000354f5) sso_t_nml_pane_p_t1

0xc45c,	// (0x00035505) sso_t_sub_pane_p_t1

0xc963,	// (0x00035a0c) main_att_pane

0xc963,	// (0x00035a0c) main_vod_pane

0xa611,	// (0x000336ba) sso_t_sub_pane_ParamLimits

0xc5ef,	// (0x00035698) input_focus_pane_cp10_t1

0xc615,	// (0x000356be) sso_option_row_pane_t1_ParamLimits

0xa70a,	// (0x000337b3) main_att_body_pane_ParamLimits

0xa70a,	// (0x000337b3) main_att_body_pane

0xa720,	// (0x000337c9) att_btn_emg_pane_ParamLimits

0xa720,	// (0x000337c9) att_btn_emg_pane

0xa73f,	// (0x000337e8) att_btn_pane_ParamLimits

0xa73f,	// (0x000337e8) att_btn_pane

0xa7ae,	// (0x00033857) att_btn_pane_cp01_ParamLimits

0xa7ae,	// (0x00033857) att_btn_pane_cp01

0xa7ee,	// (0x00033897) att_li_srv_pane_ParamLimits

0xa7ee,	// (0x00033897) att_li_srv_pane

0xa80b,	// (0x000338b4) att_opt_pane_ParamLimits

0xa80b,	// (0x000338b4) att_opt_pane

0xa855,	// (0x000338fe) att_query_pane_ParamLimits

0xa855,	// (0x000338fe) att_query_pane

0xa8ce,	// (0x00033977) att_query_pane_cp01_ParamLimits

0xa8ce,	// (0x00033977) att_query_pane_cp01

0xa91a,	// (0x000339c3) att_t_hdr_pane_ParamLimits

0xa91a,	// (0x000339c3) att_t_hdr_pane

0xa986,	// (0x00033a2f) att_t_nml_pane_ParamLimits

0xa986,	// (0x00033a2f) att_t_nml_pane

0xa9f6,	// (0x00033a9f) att_t_nml_pane_cp01_ParamLimits

0xa9f6,	// (0x00033a9f) att_t_nml_pane_cp01

0xaa24,	// (0x00033acd) att_t_nmlb_pane_ParamLimits

0xaa24,	// (0x00033acd) att_t_nmlb_pane

0xaa91,	// (0x00033b3a) att_term_pane_ParamLimits

0xaa91,	// (0x00033b3a) att_term_pane

0xaadb,	// (0x00033b84) main_att_body_pane_g1_ParamLimits

0xaadb,	// (0x00033b84) main_att_body_pane_g1

0xc631,	// (0x000356da) att_t_hdr_pane_t1_ParamLimits

0xc631,	// (0x000356da) att_t_hdr_pane_t1

0xc64a,	// (0x000356f3) att_t_nml_pane_t1_ParamLimits

0xc64a,	// (0x000356f3) att_t_nml_pane_t1

0xc66f,	// (0x00035718) att_btn_pane_t1

0xbf7c,	// (0x00035025) bg_button_pane_cp23

0xab07,	// (0x00033bb0) att_li_srv_row_pane_ParamLimits

0xab07,	// (0x00033bb0) att_li_srv_row_pane

0xc67e,	// (0x00035727) att_t_nmlb_pane_t1_ParamLimits

0xc67e,	// (0x00035727) att_t_nmlb_pane_t1

0xc69a,	// (0x00035743) att_query_pane_t1

0xc6a9,	// (0x00035752) att_query_pane_t2

0xc6b8,	// (0x00035761) att_query_pane_t3

0x0002,

0xfdee,	// (0x00038e97) att_query_pane_t

0xc6c7,	// (0x00035770) input_focus_pane_cp11

0xc6d0,	// (0x00035779) att_term_pane_t1_ParamLimits

0xc6d0,	// (0x00035779) att_term_pane_t1

0xc963,	// (0x00035a0c) att_opt_row_pane

0xc6ed,	// (0x00035796) att_opt_row_pane_g1

0xc6f5,	// (0x0003579e) att_opt_row_pane_t1_ParamLimits

0xc6f5,	// (0x0003579e) att_opt_row_pane_t1

0xab17,	// (0x00033bc0) att_li_srv_row_pane_g1

0xab1f,	// (0x00033bc8) att_li_srv_row_pane_t1_ParamLimits

0xab1f,	// (0x00033bc8) att_li_srv_row_pane_t1

0xab1f,	// (0x00033bc8) att_li_srv_row_pane_t2_ParamLimits

0xab1f,	// (0x00033bc8) att_li_srv_row_pane_t2

0x0001,

0xfdf5,	// (0x00038e9e) att_li_srv_row_pane_t_ParamLimits

0xfdf5,	// (0x00038e9e) att_li_srv_row_pane_t

0xc70e,	// (0x000357b7) att_btn_close_pane_g1

0xc963,	// (0x00035a0c) bg_button_pane_cp24

0xab34,	// (0x00033bdd) main_vod_body_pane_ParamLimits

0xab34,	// (0x00033bdd) main_vod_body_pane

0xab48,	// (0x00033bf1) main_vod_body_pane_g1_ParamLimits

0xab48,	// (0x00033bf1) main_vod_body_pane_g1

0xab7c,	// (0x00033c25) scroll_pane_cp24_ParamLimits

0xab7c,	// (0x00033c25) scroll_pane_cp24

0xabca,	// (0x00033c73) vod_btn_pane_ParamLimits

0xabca,	// (0x00033c73) vod_btn_pane

0xac10,	// (0x00033cb9) vod_det_pane_ParamLimits

0xac10,	// (0x00033cb9) vod_det_pane

0xac40,	// (0x00033ce9) vod_logo_g1_ParamLimits

0xac40,	// (0x00033ce9) vod_logo_g1

0xac7e,	// (0x00033d27) vod_opt_pane_ParamLimits

0xac7e,	// (0x00033d27) vod_opt_pane

0xacb1,	// (0x00033d5a) vod_opt_pane_cp01_ParamLimits

0xacb1,	// (0x00033d5a) vod_opt_pane_cp01

0xacdd,	// (0x00033d86) vod_query_pane_ParamLimits

0xacdd,	// (0x00033d86) vod_query_pane

0xad08,	// (0x00033db1) vod_query_pane_cp01_ParamLimits

0xad08,	// (0x00033db1) vod_query_pane_cp01

0xad14,	// (0x00033dbd) vod_t_nml_pane_ParamLimits

0xad14,	// (0x00033dbd) vod_t_nml_pane

0xadc1,	// (0x00033e6a) vod_t_nml_pane_cp01_ParamLimits

0xadc1,	// (0x00033e6a) vod_t_nml_pane_cp01

0xadfd,	// (0x00033ea6) vod_t_sub_pane_ParamLimits

0xadfd,	// (0x00033ea6) vod_t_sub_pane

0xae2e,	// (0x00033ed7) vod_t_sub_pane_cp01_ParamLimits

0xae2e,	// (0x00033ed7) vod_t_sub_pane_cp01

0xc6c7,	// (0x00035770) vod_query_field_pane

0xc716,	// (0x000357bf) vod_query_pane_t1

0xc725,	// (0x000357ce) bg_button_pane_cp25

0xc3c6,	// (0x0003546f) sso_btn_pane_t1_copy2

0xae5a,	// (0x00033f03) vod_t_nml_pane_t1_ParamLimits

0xae5a,	// (0x00033f03) vod_t_nml_pane_t1

0xc72e,	// (0x000357d7) vod_opt_row_pane_ParamLimits

0xc72e,	// (0x000357d7) vod_opt_row_pane

0xc740,	// (0x000357e9) vod_t_sub_pane_t1_ParamLimits

0xc740,	// (0x000357e9) vod_t_sub_pane_t1

0xc759,	// (0x00035802) vod_det_cell_pane_ParamLimits

0xc759,	// (0x00035802) vod_det_cell_pane

0xc963,	// (0x00035a0c) input_focus_pane_cp15

0xc76a,	// (0x00035813) vod_query_field_pane_t1

0xc778,	// (0x00035821) vod_opt_row_pane_g1_ParamLimits

0xc778,	// (0x00035821) vod_opt_row_pane_g1

0xc784,	// (0x0003582d) vod_opt_row_pane_t1_ParamLimits

0xc784,	// (0x0003582d) vod_opt_row_pane_t1

0xc7a4,	// (0x0003584d) vod_det_cell_field_pane

0xc7ad,	// (0x00035856) vod_det_cell_pane_g1

0xc7b5,	// (0x0003585e) vod_det_cell_pane_t1

0xc963,	// (0x00035a0c) input_focus_pane_cp16

0xc7c4,	// (0x0003586d) vod_det_cell_field_pane_t1

0xae8b,	// (0x00033f34) call7_btn_grp_pane_ParamLimits

0xae8b,	// (0x00033f34) call7_btn_grp_pane

0xaea5,	// (0x00033f4e) call7_bubble_pane_ParamLimits

0xaea5,	// (0x00033f4e) call7_bubble_pane

0xaebc,	// (0x00033f65) cell_call7_btn_pane_ParamLimits

0xaebc,	// (0x00033f65) cell_call7_btn_pane

0xaecf,	// (0x00033f78) call7_pane_g1_ParamLimits

0xaecf,	// (0x00033f78) call7_pane_g1

0xaede,	// (0x00033f87) call7_windows_conf_pane_ParamLimits

0xaede,	// (0x00033f87) call7_windows_conf_pane

0xaef8,	// (0x00033fa1) popup_call7_1st_window_ParamLimits

0xaef8,	// (0x00033fa1) popup_call7_1st_window

0xaf09,	// (0x00033fb2) popup_call7_2nd_window_ParamLimits

0xaf09,	// (0x00033fb2) popup_call7_2nd_window

0xaf1a,	// (0x00033fc3) popup_call7_3rd_window_ParamLimits

0xaf1a,	// (0x00033fc3) popup_call7_3rd_window

0xc963,	// (0x00035a0c) bg_button_pane_cp26

0xc16c,	// (0x00035215) cell_call7_btn_pane_g1

0xc7d2,	// (0x0003587b) cell_call7_btn_pane_t1

0xc963,	// (0x00035a0c) bg_popup_window_pane_cp12

0xc7e1,	// (0x0003588a) popup_call7_1st_window_g1

0xc7e9,	// (0x00035892) popup_call7_1st_window_g2

0xc7f1,	// (0x0003589a) popup_call7_1st_window_g3

0x0002,

0xfdfa,	// (0x00038ea3) popup_call7_1st_window_g

0xc7f9,	// (0x000358a2) popup_call7_1st_window_t1

0xc808,	// (0x000358b1) popup_call7_1st_window_t2

0xc816,	// (0x000358bf) popup_call7_1st_window_t3

0x0002,

0xfe01,	// (0x00038eaa) popup_call7_1st_window_t

0xc963,	// (0x00035a0c) bg_popup_window_pane_cp13

0xc824,	// (0x000358cd) popup_call7_2nd_window_g1

0xc82c,	// (0x000358d5) popup_call7_2nd_window_g2

0xc834,	// (0x000358dd) popup_call7_2nd_window_g3

0x0002,

0xfe08,	// (0x00038eb1) popup_call7_2nd_window_g

0xc83c,	// (0x000358e5) popup_call7_2nd_window_t1

0xc963,	// (0x00035a0c) bg_popup_window_pane_cp14

0xc84b,	// (0x000358f4) call7_list_conf_pane

0xc853,	// (0x000358fc) call7_list_conf_row_pane_ParamLimits

0xc853,	// (0x000358fc) call7_list_conf_row_pane

0xc866,	// (0x0003590f) call7_list_conf_row_pane_g1

0xc86e,	// (0x00035917) call7_list_conf_row_pane_g2

0x0001,

0xfe0f,	// (0x00038eb8) call7_list_conf_row_pane_g

0xc876,	// (0x0003591f) call7_list_conf_row_pane_t1

0xc963,	// (0x00035a0c) list_highlight_pane_cp22

0xa483,	// (0x0003352c) sso_option_pane_cp01_ParamLimits

0xa483,	// (0x0003352c) sso_option_pane_cp01

0xcfe9,	// (0x00036092) msg_header_pane_ParamLimits

0xde88,	// (0x00036f31) bg_button_pane_cp01_ParamLimits

0xde9c,	// (0x00036f45) input_focus_pane_cp07_ParamLimits

0x8d79,	// (0x00031e22) popup_email_progress_window

0xd0a2,	// (0x0003614b) popup_email_progress_window_g1

0xc884,	// (0x0003592d) popup_email_progress_window_g2

0x0001,

0xfe14,	// (0x00038ebd) popup_email_progress_window_g

0xc88c,	// (0x00035935) popup_email_progress_window_t1

0xc963,	// (0x00035a0c) cmail_conv_pane

0xb802,	// (0x000348ab) list_single_dyc_row_pane_g5_ParamLimits

0xb802,	// (0x000348ab) list_single_dyc_row_pane_g5

0xb80e,	// (0x000348b7) list_single_dyc_row_pane_g6_ParamLimits

0xb80e,	// (0x000348b7) list_single_dyc_row_pane_g6

0xb826,	// (0x000348cf) list_single_dyc_row_pane_g7_ParamLimits

0xb826,	// (0x000348cf) list_single_dyc_row_pane_g7

0x9dc2,	// (0x00032e6b) main_button_pane_5_ParamLimits

0x9dc2,	// (0x00032e6b) main_button_pane_5

0xa2c0,	// (0x00033369) sso_emg_call_btn_pane_ParamLimits

0xa2c0,	// (0x00033369) sso_emg_call_btn_pane

0xa626,	// (0x000336cf) sso_t_sub_pane_cp01_ParamLimits

0xa626,	// (0x000336cf) sso_t_sub_pane_cp01

0xc5fd,	// (0x000356a6) sso_option_row_pane_g1_ParamLimits

0xc609,	// (0x000356b2) sso_option_row_pane_g2_ParamLimits

0xc609,	// (0x000356b2) sso_option_row_pane_g2

0x0001,

0xfde9,	// (0x00038e92) sso_option_row_pane_g_ParamLimits

0xfde9,	// (0x00038e92) sso_option_row_pane_g

0xa7cc,	// (0x00033875) att_btn_pane_cp02_ParamLimits

0xa7cc,	// (0x00033875) att_btn_pane_cp02

0xc89a,	// (0x00035943) cmail_conv_hdr_pane

0xc8a3,	// (0x0003594c) list_cmail_conv_pane

0xc8ad,	// (0x00035956) scroll_pane_cp31

0xc8b5,	// (0x0003595e) cmail_conv_hdr_pane_t1

0xc8c3,	// (0x0003596c) cmail_conv_hdr_pane_t2

0x0001,

0xfe19,	// (0x00038ec2) cmail_conv_hdr_pane_t

0xc8d1,	// (0x0003597a) bubble_cmail_conv_pane_ParamLimits

0xc8d1,	// (0x0003597a) bubble_cmail_conv_pane

0xc8e9,	// (0x00035992) aid_size_colorization_pane

0xd318,	// (0x000363c1) bg_bubble_cmail_conv_pane

0xc8f1,	// (0x0003599a) body_bubble_cmail_conv_pane

0xc8f9,	// (0x000359a2) bubble_cmail_conv_pane_g1

0xc901,	// (0x000359aa) bubble_cmail_conv_pane_g2

0xc909,	// (0x000359b2) bubble_cmail_conv_pane_g3

0x0002,

0xfe1e,	// (0x00038ec7) bubble_cmail_conv_pane_g

0xc911,	// (0x000359ba) bubble_cmail_conv_pane_t1

0xc91f,	// (0x000359c8) bg_bubble_cmail_conv_pane_g1

0xc928,	// (0x000359d1) bg_bubble_cmail_conv_pane_g2

0xc931,	// (0x000359da) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe25,	// (0x00038ece) bg_bubble_cmail_conv_pane_g

0xc93a,	// (0x000359e3) body_bubble_cmail_conv_pane_t1_ParamLimits

0xc93a,	// (0x000359e3) body_bubble_cmail_conv_pane_t1

0xc951,	// (0x000359fa) body_bubble_cmail_conv_pane_t2_ParamLimits

0xc951,	// (0x000359fa) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe2c,	// (0x00038ed5) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe2c,	// (0x00038ed5) body_bubble_cmail_conv_pane_t

0xcf51,	// (0x00035ffa) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
